//  SDLOnVehicleData.h
//

#import "SDLRPCNotification.h"

#import "SDLComponentVolumeStatus.h"
#import "SDLElectronicParkBrakeStatus.h"
#import "SDLPRNDL.h"
#import "SDLTurnSignal.h"
#import "SDLVehicleDataEventStatus.h"
#import "SDLWiperStatus.h"

@class SDLAirbagStatus;
@class SDLBeltStatus;
@class SDLBodyInformation;
@class SDLClusterModeStatus;
@class SDLDeviceStatus;
@class SDLECallInfo;
@class SDLEmergencyEvent;
@class SDLFuelRange;
@class SDLGearStatus;
@class SDLGPSData;
@class SDLHeadLampStatus;
@class SDLMyKey;
@class SDLStabilityControlsStatus;
@class SDLTireStatus;
@class SDLWindowStatus;


/**
 Callback for the periodic and non periodic vehicle data read function.

 Since SmartDeviceLink 2.0
 */

NS_ASSUME_NONNULL_BEGIN

@interface SDLOnVehicleData : SDLRPCNotification

/**
 * Convenience init for setting all possible values on vehicle data items.
 *
 * @param gps - gps
 * @param speed - @(speed)
 * @param rpm - rpm
 * @param instantFuelConsumption - @(instantFuelConsumption)
 * @param fuelRange - fuelRange
 * @param externalTemperature - @(externalTemperature)
 * @param turnSignal - turnSignal
 * @param vin - vin
 * @param gearStatus - gearStatus
 * @param tirePressure - tirePressure
 * @param odometer - odometer
 * @param beltStatus - beltStatus
 * @param bodyInformation - bodyInformation
 * @param deviceStatus - deviceStatus
 * @param driverBraking - driverBraking
 * @param wiperStatus - wiperStatus
 * @param headLampStatus - headLampStatus
 * @param engineTorque - @(engineTorque)
 * @param accPedalPosition - @(accPedalPosition)
 * @param steeringWheelAngle - @(steeringWheelAngle)
 * @param engineOilLife - @(engineOilLife)
 * @param electronicParkBrakeStatus - electronicParkBrakeStatus
 * @param cloudAppVehicleID - cloudAppVehicleID
 * @param stabilityControlsStatus - stabilityControlsStatus
 * @param eCallInfo - eCallInfo
 * @param airbagStatus - airbagStatus
 * @param emergencyEvent - emergencyEvent
 * @param clusterModeStatus - clusterModeStatus
 * @param myKey - myKey
 * @param handsOffSteering - handsOffSteering
 * @param windowStatus - windowStatus
 * @return A SDLOnVehicleData object
 */
- (instancetype)initWithGps:(nullable SDLGPSData *)gps speed:(nullable NSNumber<SDLFloat> *)speed rpm:(nullable NSNumber<SDLUInt> *)rpm instantFuelConsumption:(nullable NSNumber<SDLFloat> *)instantFuelConsumption fuelRange:(nullable NSArray<SDLFuelRange *> *)fuelRange externalTemperature:(nullable NSNumber<SDLFloat> *)externalTemperature turnSignal:(nullable SDLTurnSignal)turnSignal vin:(nullable NSString *)vin gearStatus:(nullable SDLGearStatus *)gearStatus tirePressure:(nullable SDLTireStatus *)tirePressure odometer:(nullable NSNumber<SDLUInt> *)odometer beltStatus:(nullable SDLBeltStatus *)beltStatus bodyInformation:(nullable SDLBodyInformation *)bodyInformation deviceStatus:(nullable SDLDeviceStatus *)deviceStatus driverBraking:(nullable SDLVehicleDataEventStatus)driverBraking wiperStatus:(nullable SDLWiperStatus)wiperStatus headLampStatus:(nullable SDLHeadLampStatus *)headLampStatus engineTorque:(nullable NSNumber<SDLFloat> *)engineTorque accPedalPosition:(nullable NSNumber<SDLFloat> *)accPedalPosition steeringWheelAngle:(nullable NSNumber<SDLFloat> *)steeringWheelAngle engineOilLife:(nullable NSNumber<SDLFloat> *)engineOilLife electronicParkBrakeStatus:(nullable SDLElectronicParkBrakeStatus)electronicParkBrakeStatus cloudAppVehicleID:(nullable NSString *)cloudAppVehicleID stabilityControlsStatus:(nullable SDLStabilityControlsStatus *)stabilityControlsStatus eCallInfo:(nullable SDLECallInfo *)eCallInfo airbagStatus:(nullable SDLAirbagStatus *)airbagStatus emergencyEvent:(nullable SDLEmergencyEvent *)emergencyEvent clusterModeStatus:(nullable SDLClusterModeStatus *)clusterModeStatus myKey:(nullable SDLMyKey *)myKey handsOffSteering:(nullable NSNumber<SDLBool> *)handsOffSteering windowStatus:(nullable NSArray<SDLWindowStatus *> *)windowStatus;

/**
 * See GearStatus
 *
 * @since SDL 7.0
*/
@property (nullable, strong, nonatomic) SDLGearStatus *gearStatus;

/**
 The car current GPS coordinates
 */
@property (nullable, strong, nonatomic) SDLGPSData *gps;

/**
 The vehicle speed in kilometers per hour
 */
@property (nullable, strong, nonatomic) NSNumber<SDLFloat> *speed;

/**
 The number of revolutions per minute of the engine.
 */
@property (nullable, strong, nonatomic) NSNumber<SDLInt> *rpm;

/**
 The fuel level in the tank (percentage)
 */
@property (strong, nonatomic, nullable) NSNumber<SDLFloat> *fuelLevel __deprecated_msg("use fuelRange.level instead on 7.0+ RPC version connections");

/**
 The fuel level state
 */
@property (strong, nonatomic, nullable) SDLComponentVolumeStatus fuelLevel_State __deprecated_msg("use fuelRange.levelState instead on 7.0+ RPC version connections");

/**
 The estimate range in KM the vehicle can travel based on fuel level and consumption

 Optional, Array of length 0 - 100, of SDLFuelRange
 */
@property (nullable, strong, nonatomic) NSArray<SDLFuelRange *> *fuelRange;

/**
 The instantaneous fuel consumption in microlitres
 */
@property (nullable, strong, nonatomic) NSNumber<SDLFloat> *instantFuelConsumption;

/**
 The external temperature in degrees celsius.
 */
@property (nullable, strong, nonatomic) NSNumber<SDLFloat> *externalTemperature;

/**
 The Vehicle Identification Number
 */
@property (nullable, strong, nonatomic) NSString *vin;

/**
 * See PRNDL. This parameter is deprecated and it is now covered in `gearStatus`
 *
 * @deprecated
 * @since SDL 7.0.0
 */
@property (strong, nonatomic, nullable) SDLPRNDL prndl __deprecated_msg("use gearStatus.actualGear instead on 7.0+ RPC version connections");

/**
 The current pressure warnings for the user's vehicle
 */
@property (nullable, strong, nonatomic) SDLTireStatus *tirePressure;

/**
 Odometer reading in km
 */
@property (nullable, strong, nonatomic) NSNumber<SDLInt> *odometer;

/**
 The status of the seat belts
 */
@property (nullable, strong, nonatomic) SDLBeltStatus *beltStatus;

/**
 The body information including power modes
 */
@property (nullable, strong, nonatomic) SDLBodyInformation *bodyInformation;

/**
 The IVI system status including signal and battery strength
 */
@property (nullable, strong, nonatomic) SDLDeviceStatus *deviceStatus;

/**
 The status of the brake pedal
 */
@property (nullable, strong, nonatomic) SDLVehicleDataEventStatus driverBraking;

/**
 * See WindowStatus
 * {"array_min_size": 0, "array_max_size": 100}
 *
 * @since SDL 7.0
 */
@property (strong, nonatomic, nullable) NSArray<SDLWindowStatus *> *windowStatus;

/**
 The status of the wipers
 */
@property (nullable, strong, nonatomic) SDLWiperStatus wiperStatus;

/**
 To indicate whether driver hands are off the steering wheel
 */
@property (strong, nonatomic, nullable) NSNumber<SDLBool> *handsOffSteering;

/**
 Status of the head lamps
 */
@property (nullable, strong, nonatomic) SDLHeadLampStatus *headLampStatus;

/**
 The estimated percentage (0% - 100%) of remaining oil life of the engine
 */
@property (nullable, strong, nonatomic) NSNumber<SDLFloat> *engineOilLife;

/**
 Torque value for engine (in Nm) on non-diesel variants
 */
@property (nullable, strong, nonatomic) NSNumber<SDLFloat> *engineTorque;

/**
 Accelerator pedal position (percentage depressed)
 */
@property (nullable, strong, nonatomic) NSNumber<SDLFloat> *accPedalPosition;

/**
 Current angle of the steering wheel (in deg)
 */
@property (nullable, strong, nonatomic) NSNumber<SDLFloat> *steeringWheelAngle;

/**
 Emergency Call notification and confirmation data
 */
@property (nullable, strong, nonatomic) SDLECallInfo *eCallInfo;

/**
 The status of the air bags
 */
@property (nullable, strong, nonatomic) SDLAirbagStatus *airbagStatus;

/**
 Information related to an emergency event (and if it occurred)
 */
@property (nullable, strong, nonatomic) SDLEmergencyEvent *emergencyEvent;

/**
 The status modes of the cluster
 */
@property (nullable, strong, nonatomic) SDLClusterModeStatus *clusterModeStatus;

/**
 Information related to the MyKey feature
 */
@property (nullable, strong, nonatomic) SDLMyKey *myKey;

/**
 The status of the electronic parking brake
 */
@property (nullable, strong, nonatomic) SDLElectronicParkBrakeStatus electronicParkBrakeStatus;

/**
 See StabilityControlsStatus
 */
@property (nullable, strong, nonatomic) SDLStabilityControlsStatus *stabilityControlsStatus;

/**
 The status of the turn signal
 */
@property (nullable, strong, nonatomic) SDLTurnSignal turnSignal;

/**
 The cloud app vehicle ID
 */
@property (nullable, strong, nonatomic) NSString *cloudAppVehicleID;

/**
 Sets the OEM custom vehicle data state for any given OEM custom vehicle data name.

 @param vehicleDataName The name of the OEM custom vehicle data item.
 @param vehicleDataState An object containing the OEM custom vehicle data item.

  Added in SmartDeviceLink 6.0
 */
- (void)setOEMCustomVehicleData:(NSString *)vehicleDataName withVehicleDataState:(NSObject *)vehicleDataState NS_SWIFT_NAME(setOEMCustomVehicleData(name:state:));

/**
 Gets the OEM custom vehicle data item for any given OEM custom vehicle data name.

 @param vehicleDataName The name of the OEM custom vehicle data item.
 @return An OEM custom vehicle data object for the given vehicle data name.

  Added in SmartDeviceLink 6.0
 */
- (nullable NSObject *)getOEMCustomVehicleData:(NSString *)vehicleDataName;

@end

NS_ASSUME_NONNULL_END
