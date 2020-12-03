#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSNumber+NumberType.h"
#import "SDLAddCommand.h"
#import "SDLAddCommandResponse.h"
#import "SDLAddSubMenu.h"
#import "SDLAddSubMenuResponse.h"
#import "SDLAirbagStatus.h"
#import "SDLAlert.h"
#import "SDLAlertManeuver.h"
#import "SDLAlertManeuverResponse.h"
#import "SDLAlertResponse.h"
#import "SDLAmbientLightStatus.h"
#import "SDLAppHMIType.h"
#import "SDLAppInfo.h"
#import "SDLAppInterfaceUnregisteredReason.h"
#import "SDLAppServiceCapability.h"
#import "SDLAppServiceData.h"
#import "SDLAppServiceManifest.h"
#import "SDLAppServiceRecord.h"
#import "SDLAppServicesCapabilities.h"
#import "SDLAppServiceType.h"
#import "SDLArtwork.h"
#import "SDLAudioControlCapabilities.h"
#import "SDLAudioControlData.h"
#import "SDLAudioFile.h"
#import "SDLAudioPassThruCapabilities.h"
#import "SDLAudioStreamingIndicator.h"
#import "SDLAudioStreamingState.h"
#import "SDLAudioStreamManager.h"
#import "SDLAudioStreamManagerDelegate.h"
#import "SDLAudioType.h"
#import "SDLBeltStatus.h"
#import "SDLBitsPerSample.h"
#import "SDLBodyInformation.h"
#import "SDLButtonCapabilities.h"
#import "SDLButtonEventMode.h"
#import "SDLButtonName.h"
#import "SDLButtonPress.h"
#import "SDLButtonPressMode.h"
#import "SDLButtonPressResponse.h"
#import "SDLCancelInteraction.h"
#import "SDLCancelInteractionResponse.h"
#import "SDLCapacityUnit.h"
#import "SDLCarModeStatus.h"
#import "SDLCarWindowViewController.h"
#import "SDLChangeRegistration.h"
#import "SDLChangeRegistrationResponse.h"
#import "SDLCharacterSet.h"
#import "SDLChoice.h"
#import "SDLChoiceCell.h"
#import "SDLChoiceSet.h"
#import "SDLChoiceSetDelegate.h"
#import "SDLClimateControlCapabilities.h"
#import "SDLClimateControlData.h"
#import "SDLCloseApplication.h"
#import "SDLCloseApplicationResponse.h"
#import "SDLCloudAppProperties.h"
#import "SDLClusterModeStatus.h"
#import "SDLCompassDirection.h"
#import "SDLComponentVolumeStatus.h"
#import "SDLConfiguration.h"
#import "SDLCreateInteractionChoiceSet.h"
#import "SDLCreateInteractionChoiceSetResponse.h"
#import "SDLCreateWindow.h"
#import "SDLCreateWindowResponse.h"
#import "SDLDateTime.h"
#import "SDLDefrostZone.h"
#import "SDLDeleteCommand.h"
#import "SDLDeleteCommandResponse.h"
#import "SDLDeleteFile.h"
#import "SDLDeleteFileResponse.h"
#import "SDLDeleteInteractionChoiceSet.h"
#import "SDLDeleteInteractionChoiceSetResponse.h"
#import "SDLDeleteSubMenu.h"
#import "SDLDeleteSubMenuResponse.h"
#import "SDLDeleteWindow.h"
#import "SDLDeleteWindowResponse.h"
#import "SDLDeliveryMode.h"
#import "SDLDeviceInfo.h"
#import "SDLDeviceLevelStatus.h"
#import "SDLDeviceStatus.h"
#import "SDLDiagnosticMessage.h"
#import "SDLDiagnosticMessageResponse.h"
#import "SDLDialNumber.h"
#import "SDLDialNumberResponse.h"
#import "SDLDIDResult.h"
#import "SDLDimension.h"
#import "SDLDirection.h"
#import "SDLDisplayCapabilities.h"
#import "SDLDisplayCapability.h"
#import "SDLDisplayMode.h"
#import "SDLDisplayType.h"
#import "SDLDistanceUnit.h"
#import "SDLDriverDistractionCapability.h"
#import "SDLDriverDistractionState.h"
#import "SDLDynamicUpdateCapabilities.h"
#import "SDLECallConfirmationStatus.h"
#import "SDLECallInfo.h"
#import "SDLElectronicParkBrakeStatus.h"
#import "SDLEmergencyEvent.h"
#import "SDLEmergencyEventType.h"
#import "SDLEncodedSyncPData.h"
#import "SDLEncodedSyncPDataResponse.h"
#import "SDLEncryptionConfiguration.h"
#import "SDLEndAudioPassThru.h"
#import "SDLEndAudioPassThruResponse.h"
#import "SDLEnum.h"
#import "SDLEqualizerSettings.h"
#import "SDLErrorConstants.h"
#import "SDLFile.h"
#import "SDLFileManager.h"
#import "SDLFileManagerConfiguration.h"
#import "SDLFileManagerConstants.h"
#import "SDLFileType.h"
#import "SDLFuelCutoffStatus.h"
#import "SDLFuelRange.h"
#import "SDLFuelType.h"
#import "SDLFunctionID.h"
#import "SDLGearStatus.h"
#import "SDLGenericResponse.h"
#import "SDLGetAppServiceData.h"
#import "SDLGetAppServiceDataResponse.h"
#import "SDLGetCloudAppProperties.h"
#import "SDLGetCloudAppPropertiesResponse.h"
#import "SDLGetDTCs.h"
#import "SDLGetDTCsResponse.h"
#import "SDLGetFile.h"
#import "SDLGetFileResponse.h"
#import "SDLGetInteriorVehicleData.h"
#import "SDLGetInteriorVehicleDataConsent.h"
#import "SDLGetInteriorVehicleDataConsentResponse.h"
#import "SDLGetInteriorVehicleDataResponse.h"
#import "SDLGetSystemCapability.h"
#import "SDLGetSystemCapabilityResponse.h"
#import "SDLGetVehicleData.h"
#import "SDLGetVehicleDataResponse.h"
#import "SDLGetWayPoints.h"
#import "SDLGetWayPointsResponse.h"
#import "SDLGlobalProperty.h"
#import "SDLGPSData.h"
#import "SDLGrid.h"
#import "SDLHapticRect.h"
#import "SDLHeadLampStatus.h"
#import "SDLHMICapabilities.h"
#import "SDLHMILevel.h"
#import "SDLHMIPermissions.h"
#import "SDLHMISettingsControlCapabilities.h"
#import "SDLHMISettingsControlData.h"
#import "SDLHMIZoneCapabilities.h"
#import "SDLHybridAppPreference.h"
#import "SDLIgnitionStableStatus.h"
#import "SDLIgnitionStatus.h"
#import "SDLImage.h"
#import "SDLImageField.h"
#import "SDLImageFieldName.h"
#import "SDLImageResolution.h"
#import "SDLImageType.h"
#import "SDLInteractionMode.h"
#import "SDLKeyboardDelegate.h"
#import "SDLKeyboardEvent.h"
#import "SDLKeyboardLayout.h"
#import "SDLKeyboardProperties.h"
#import "SDLKeypressMode.h"
#import "SDLLanguage.h"
#import "SDLLayoutMode.h"
#import "SDLLifecycleConfiguration.h"
#import "SDLLifecycleConfigurationUpdate.h"
#import "SDLLightCapabilities.h"
#import "SDLLightControlCapabilities.h"
#import "SDLLightControlData.h"
#import "SDLLightName.h"
#import "SDLLightState.h"
#import "SDLLightStatus.h"
#import "SDLListFiles.h"
#import "SDLListFilesResponse.h"
#import "SDLLocationCoordinate.h"
#import "SDLLocationDetails.h"
#import "SDLLockScreenConfiguration.h"
#import "SDLLockScreenViewController.h"
#import "SDLLogConfiguration.h"
#import "SDLLogConstants.h"
#import "SDLLogFileModule.h"
#import "SDLLogFilter.h"
#import "SDLLogMacros.h"
#import "SDLLogManager.h"
#import "SDLLogTarget.h"
#import "SDLLogTargetAppleSystemLog.h"
#import "SDLLogTargetFile.h"
#import "SDLLogTargetOSLog.h"
#import "SDLMaintenanceModeStatus.h"
#import "SDLManager.h"
#import "SDLManagerDelegate.h"
#import "SDLMassageCushion.h"
#import "SDLMassageCushionFirmness.h"
#import "SDLMassageMode.h"
#import "SDLMassageModeData.h"
#import "SDLMassageZone.h"
#import "SDLMediaClockFormat.h"
#import "SDLMediaServiceData.h"
#import "SDLMediaServiceManifest.h"
#import "SDLMediaType.h"
#import "SDLMenuCell.h"
#import "SDLMenuConfiguration.h"
#import "SDLMenuLayout.h"
#import "SDLMenuManagerConstants.h"
#import "SDLMenuParams.h"
#import "SDLMetadataTags.h"
#import "SDLMetadataType.h"
#import "SDLModuleData.h"
#import "SDLModuleInfo.h"
#import "SDLModuleType.h"
#import "SDLMsgVersion.h"
#import "SDLMyKey.h"
#import "SDLNavigationAction.h"
#import "SDLNavigationCapability.h"
#import "SDLNavigationInstruction.h"
#import "SDLNavigationJunction.h"
#import "SDLNavigationServiceData.h"
#import "SDLNavigationServiceManifest.h"
#import "SDLNotificationConstants.h"
#import "SDLOasisAddress.h"
#import "SDLOnAppInterfaceUnregistered.h"
#import "SDLOnAppServiceData.h"
#import "SDLOnAudioPassThru.h"
#import "SDLOnButtonEvent.h"
#import "SDLOnButtonPress.h"
#import "SDLOnCommand.h"
#import "SDLOnDriverDistraction.h"
#import "SDLOnEncodedSyncPData.h"
#import "SDLOnHashChange.h"
#import "SDLOnHMIStatus.h"
#import "SDLOnInteriorVehicleData.h"
#import "SDLOnKeyboardInput.h"
#import "SDLOnLanguageChange.h"
#import "SDLOnPermissionsChange.h"
#import "SDLOnRCStatus.h"
#import "SDLOnSubtleAlertPressed.h"
#import "SDLOnSyncPData.h"
#import "SDLOnSystemCapabilityUpdated.h"
#import "SDLOnSystemRequest.h"
#import "SDLOnTBTClientState.h"
#import "SDLOnTouchEvent.h"
#import "SDLOnUpdateFile.h"
#import "SDLOnUpdateSubMenu.h"
#import "SDLOnVehicleData.h"
#import "SDLOnWayPointChange.h"
#import "SDLParameterPermissions.h"
#import "SDLPerformAppServiceInteraction.h"
#import "SDLPerformAppServiceInteractionResponse.h"
#import "SDLPerformAudioPassThru.h"
#import "SDLPerformAudioPassThruResponse.h"
#import "SDLPerformInteraction.h"
#import "SDLPerformInteractionResponse.h"
#import "SDLPermissionConstants.h"
#import "SDLPermissionElement.h"
#import "SDLPermissionItem.h"
#import "SDLPermissionManager.h"
#import "SDLPermissionStatus.h"
#import "SDLPhoneCapability.h"
#import "SDLPinchGesture.h"
#import "SDLPowerModeQualificationStatus.h"
#import "SDLPowerModeStatus.h"
#import "SDLPredefinedLayout.h"
#import "SDLPredefinedWindows.h"
#import "SDLPrerecordedSpeech.h"
#import "SDLPresetBankCapabilities.h"
#import "SDLPrimaryAudioSource.h"
#import "SDLPRNDL.h"
#import "SDLProtocolConstants.h"
#import "SDLPublishAppService.h"
#import "SDLPublishAppServiceResponse.h"
#import "SDLPutFile.h"
#import "SDLPutFileResponse.h"
#import "SDLRadioBand.h"
#import "SDLRadioControlCapabilities.h"
#import "SDLRadioControlData.h"
#import "SDLRadioState.h"
#import "SDLRDSData.h"
#import "SDLReadDID.h"
#import "SDLReadDIDResponse.h"
#import "SDLRectangle.h"
#import "SDLRegisterAppInterface.h"
#import "SDLRegisterAppInterfaceResponse.h"
#import "SDLReleaseInteriorVehicleDataModule.h"
#import "SDLReleaseInteriorVehicleDataModuleResponse.h"
#import "SDLRemoteControlCapabilities.h"
#import "SDLRequestType.h"
#import "SDLResetGlobalProperties.h"
#import "SDLResetGlobalPropertiesResponse.h"
#import "SDLResult.h"
#import "SDLRGBColor.h"
#import "SDLRPCFunctionNames.h"
#import "SDLRPCMessage.h"
#import "SDLRPCMessageType.h"
#import "SDLRPCNotification.h"
#import "SDLRPCNotificationNotification.h"
#import "SDLRPCPermissionStatus.h"
#import "SDLRPCRequest.h"
#import "SDLRPCRequestNotification.h"
#import "SDLRPCResponse.h"
#import "SDLRPCResponseNotification.h"
#import "SDLRPCStruct.h"
#import "SDLSamplingRate.h"
#import "SDLScreenManager.h"
#import "SDLScreenParams.h"
#import "SDLScrollableMessage.h"
#import "SDLScrollableMessageResponse.h"
#import "SDLSeatControlCapabilities.h"
#import "SDLSeatControlData.h"
#import "SDLSeatLocation.h"
#import "SDLSeatLocationCapability.h"
#import "SDLSeatMemoryAction.h"
#import "SDLSeatMemoryActionType.h"
#import "SDLSecurityType.h"
#import "SDLSendHapticData.h"
#import "SDLSendHapticDataResponse.h"
#import "SDLSendLocation.h"
#import "SDLSendLocationResponse.h"
#import "SDLServiceEncryptionDelegate.h"
#import "SDLServiceUpdateReason.h"
#import "SDLSetAppIcon.h"
#import "SDLSetAppIconResponse.h"
#import "SDLSetCloudAppProperties.h"
#import "SDLSetCloudAppPropertiesResponse.h"
#import "SDLSetDisplayLayout.h"
#import "SDLSetDisplayLayoutResponse.h"
#import "SDLSetGlobalProperties.h"
#import "SDLSetGlobalPropertiesResponse.h"
#import "SDLSetInteriorVehicleData.h"
#import "SDLSetInteriorVehicleDataResponse.h"
#import "SDLSetMediaClockTimer.h"
#import "SDLSetMediaClockTimerResponse.h"
#import "SDLShow.h"
#import "SDLShowAppMenu.h"
#import "SDLShowAppMenuResponse.h"
#import "SDLShowConstantTBT.h"
#import "SDLShowConstantTBTResponse.h"
#import "SDLShowResponse.h"
#import "SDLSingleTireStatus.h"
#import "SDLSISData.h"
#import "SDLSlider.h"
#import "SDLSliderResponse.h"
#import "SDLSoftButton.h"
#import "SDLSoftButtonCapabilities.h"
#import "SDLSoftButtonObject.h"
#import "SDLSoftButtonState.h"
#import "SDLSoftButtonType.h"
#import "SDLSpeak.h"
#import "SDLSpeakResponse.h"
#import "SDLSpeechCapabilities.h"
#import "SDLStabilityControlsStatus.h"
#import "SDLStartTime.h"
#import "SDLStaticIconName.h"
#import "SDLStationIDNumber.h"
#import "SDLStreamingAudioManagerType.h"
#import "SDLStreamingMediaConfiguration.h"
#import "SDLStreamingMediaManager.h"
#import "SDLStreamingMediaManagerConstants.h"
#import "SDLStreamingMediaManagerDataSource.h"
#import "SDLStreamingVideoScaleManager.h"
#import "SDLSubscribeButton.h"
#import "SDLSubscribeButtonResponse.h"
#import "SDLSubscribeVehicleData.h"
#import "SDLSubscribeVehicleDataResponse.h"
#import "SDLSubscribeWayPoints.h"
#import "SDLSubscribeWayPointsResponse.h"
#import "SDLSubtleAlert.h"
#import "SDLSubtleAlertResponse.h"
#import "SDLSupportedSeat.h"
#import "SDLSyncPData.h"
#import "SDLSyncPDataResponse.h"
#import "SDLSystemAction.h"
#import "SDLSystemCapability.h"
#import "SDLSystemCapabilityManager.h"
#import "SDLSystemCapabilityType.h"
#import "SDLSystemContext.h"
#import "SDLSystemRequest.h"
#import "SDLSystemRequestResponse.h"
#import "SDLTBTState.h"
#import "SDLTemperature.h"
#import "SDLTemperatureUnit.h"
#import "SDLTemplateColorScheme.h"
#import "SDLTemplateConfiguration.h"
#import "SDLTextAlignment.h"
#import "SDLTextField.h"
#import "SDLTextFieldName.h"
#import "SDLTimerMode.h"
#import "SDLTireStatus.h"
#import "SDLTouch.h"
#import "SDLTouchCoord.h"
#import "SDLTouchEvent.h"
#import "SDLTouchEventCapabilities.h"
#import "SDLTouchManager.h"
#import "SDLTouchManagerDelegate.h"
#import "SDLTouchType.h"
#import "SDLTPMS.h"
#import "SDLTransmissionType.h"
#import "SDLTriggerSource.h"
#import "SDLTTSChunk.h"
#import "SDLTurn.h"
#import "SDLTurnSignal.h"
#import "SDLUnpublishAppService.h"
#import "SDLUnpublishAppServiceResponse.h"
#import "SDLUnregisterAppInterface.h"
#import "SDLUnregisterAppInterfaceResponse.h"
#import "SDLUnsubscribeButton.h"
#import "SDLUnsubscribeButtonResponse.h"
#import "SDLUnsubscribeVehicleData.h"
#import "SDLUnsubscribeVehicleDataResponse.h"
#import "SDLUnsubscribeWayPoints.h"
#import "SDLUnsubscribeWayPointsResponse.h"
#import "SDLUpdateMode.h"
#import "SDLUpdateTurnList.h"
#import "SDLUpdateTurnListResponse.h"
#import "SDLVehicleDataActiveStatus.h"
#import "SDLVehicleDataEventStatus.h"
#import "SDLVehicleDataNotificationStatus.h"
#import "SDLVehicleDataResult.h"
#import "SDLVehicleDataResultCode.h"
#import "SDLVehicleDataStatus.h"
#import "SDLVehicleDataType.h"
#import "SDLVehicleType.h"
#import "SDLVentilationMode.h"
#import "SDLVersion.h"
#import "SDLVideoStreamingCapability.h"
#import "SDLVideoStreamingCodec.h"
#import "SDLVideoStreamingFormat.h"
#import "SDLVideoStreamingProtocol.h"
#import "SDLVideoStreamingState.h"
#import "SDLVoiceCommand.h"
#import "SDLVrCapabilities.h"
#import "SDLVrHelpItem.h"
#import "SDLWarningLightStatus.h"
#import "SDLWayPointType.h"
#import "SDLWeatherAlert.h"
#import "SDLWeatherData.h"
#import "SDLWeatherServiceData.h"
#import "SDLWeatherServiceManifest.h"
#import "SDLWindowCapability.h"
#import "SDLWindowState.h"
#import "SDLWindowStatus.h"
#import "SDLWindowType.h"
#import "SDLWindowTypeCapabilities.h"
#import "SDLWiperStatus.h"
#import "SmartDeviceLink.h"

FOUNDATION_EXPORT double SmartDeviceLinkVersionNumber;
FOUNDATION_EXPORT const unsigned char SmartDeviceLinkVersionString[];

