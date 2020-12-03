import Foundation
import SmartDeviceLink

class ProxyManager: NSObject, SDLManagerDelegate {
    
    var aibo = AIBO()
    
    var timer: Timer!
    
    /////////////////////////////////////
    //tmp vehicle data
    /////////////////////////////////////
    var speed0 = 0.0
    var prndl0 = SDLEnum(rawValue: "PARK")
    
    
    ///////////////////////////////////////
    //flags for evaluation
    ///////////////////////////////////////
    var beautinessFlg = true
    var coolnessFlg = true
    var smartnessFlg = true
    var kindnessFlg = true
    
    
    ////////////////////////////////////////////////////
    //when disconnected
    ////////////////////////////////////////////////////
    func managerDidDisconnect() {
        print("Manager disconnected!")
        
        //changeAiboParams(evalFlg: beautinessFlg, &aibo.beautiness)
        //changeAiboParams(evalFlg: coolnessFlg, &aibo.coolness)
        //changeAiboParams(evalFlg: smartnessFlg, &aibo.smartness)
        //changeAiboParams(evalFlg: kindnessFlg, &aibo.kindness)
        
        print("beautiness:")
        print(aibo.beautiness)
        print("coolness:")
        print(aibo.coolness)
        print("smartness:")
        print(aibo.smartness)
        print("kindness:")
        print(aibo.kindness)
    }

    
    ////////////////////////////////////////////////////
    //when hmilevel full
    ////////////////////////////////////////////////////
    func hmiLevel(_ oldLevel: SDLHMILevel, didChangeToLevel newLevel: SDLHMILevel) {
        print("Went from HMI level \(oldLevel) to HMI level \(newLevel)")
        
        if newLevel == .full {
            
            //self.getOdometer()
            
            //repeat every 3 seconds
            timer = Timer.scheduledTimer(timeInterval: 3.0, target: self, selector: #selector(self.getVehicleDataOnce(tm:)), userInfo: nil, repeats: true)
            timer.fire()
        }
        
    }

    fileprivate var sdlManager: SDLManager!

    static let sharedManager = ProxyManager()
    
    
    ////////////////////////////////////////
    //configuration
    ////////////////////////////////////////
    private override init() {
        super.init()
        
        let lifecycleConfiguration = SDLLifecycleConfiguration(appName: "MySecondSDLApp", fullAppId: "1234", ipAddress: "m.sdl.tools", port: 17888)
        
        if let appImage = UIImage(named: "sdlicon.png") {
            let appIcon = SDLArtwork(image: appImage, name: "mfsdlapp.png", persistent: true, as: .PNG)
            lifecycleConfiguration.appIcon = appIcon
        }
        
        lifecycleConfiguration.shortAppName = "MFSDLApp"
        lifecycleConfiguration.appType = .information
        
        let configuration = SDLConfiguration(lifecycle: lifecycleConfiguration, lockScreen: .enabled(), logging: .default(), fileManager: .default(), encryption: .default())
        
        sdlManager = SDLManager(configuration: configuration, delegate: self)
    }
    
    
    //
    func connect() {
        sdlManager.start { (success, error) in
            if success {
                print("Connection succeeded!");
            }
        }
    }
    
    /*
    private func getOdometer(){
        let vdRequestOnce = SDLGetVehicleData()
        vdRequestOnce.odometer = NSNumber(true)
        sdlManager.send(request: vdRequestOnce) { (request, response, error) in
            guard let response = response as? SDLGetVehicleDataResponse else { return }
            let odometer = response.odometer
            print(odometer!)
        }
    }
    */
    
    ///////////////////////////////////////////
    //retrieve vehicle data
    ///////////////////////////////////////////
    @objc private func getVehicleDataOnce(tm:Timer){
        let vdRequestOnce = SDLGetVehicleData()
        vdRequestOnce.speed = NSNumber(true)
        vdRequestOnce.beltStatus = NSNumber(true)
        vdRequestOnce.instantFuelConsumption = NSNumber(true)
        vdRequestOnce.prndl = NSNumber(true)
        sdlManager.send(request: vdRequestOnce) { (request, response, error) in
            guard let response = response as? SDLGetVehicleDataResponse else { return }
            let speed1 = response.speed
            let beltstatus = response.beltStatus?.driverBuckleBelted.rawValue
            let instantFuelConsumption = response.instantFuelConsumption
            let prndl1 = response.prndl
            if beltstatus == SDLEnum(rawValue: "YES"){
                print("iine")
            }
            print(prndl1)
            self.evalBeautinessFlg(speed1: speed1 as! Double)
            self.evalCoolnessFlg(speed1: speed1 as! Double)
            self.evalSmartnessFlg(speed1: speed1 as! Double, beltstatus: beltstatus!)
            self.evalKindnessFlg(instantFuelConsumption: instantFuelConsumption as! Double)
            
            if (self.prndl0 != SDLEnum(rawValue: "PARK")) && (prndl1?.rawValue == SDLEnum(rawValue: "PARK")){
                self.changeAiboParams(evalFlg: self.beautinessFlg, &self.aibo.beautiness)
                self.changeAiboParams(evalFlg: self.coolnessFlg, &self.aibo.coolness)
                self.changeAiboParams(evalFlg: self.smartnessFlg, &self.aibo.smartness)
                self.changeAiboParams(evalFlg: self.kindnessFlg, &self.aibo.kindness)
            }
            self.prndl0 = prndl1?.rawValue ?? SDLEnum(rawValue: "PARK")
        }
    }
    
    //////////////////////////////////////////////////////////////////////////////////////
    //functions for evaluation of AIBO's parameters
    //////////////////////////////////////////////////////////////////////////////////////
    private func evalBeautinessFlg(speed1:Double) {
        let acceleration = speed1 - self.speed0
        let g = 9.8
        if abs(acceleration) >= 3.0 * g {
            self.beautinessFlg = false
        }
        self.speed0 = speed1
    }
    
    
    private func evalCoolnessFlg(speed1:Double){
        if speed1 >= 80.0{
            self.coolnessFlg = false
        }
    }
    
    private func evalSmartnessFlg(speed1:Double, beltstatus:SDLEnum){
        if (speed1 != 0.0) && (beltstatus != SDLEnum(rawValue: "YES")){
            self.smartnessFlg = false
        }
    }
    
    private func evalKindnessFlg(instantFuelConsumption: Double){
        if instantFuelConsumption > 123.0 {
            self.kindnessFlg = false
        }
    }
    
    
    private func changeAiboParams(evalFlg:Bool, _ aiboParam: inout Int){
        let changeAmount = 1
        if evalFlg == true {
            aiboParam += changeAmount
        }else{
            aiboParam -= changeAmount
        }
    }
    
    
}
