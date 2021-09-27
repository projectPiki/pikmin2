.include "macros.inc"
.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.global sSZSBufferSize__7JKRAram
sSZSBufferSize__7JKRAram:
	#.incbin "baserom.dol", 0x4ECC20, 0x8
	.4byte 0x00000400
	.skip 0x4
.global errorRetry__16JKRDvdAramRipper
errorRetry__16JKRDvdAramRipper:
	#.incbin "baserom.dol", 0x4ECC28, 0x4
	.4byte 0x01000000
.global sSZSBufferSize__16JKRDvdAramRipper
sSZSBufferSize__16JKRDvdAramRipper:
	#.incbin "baserom.dol", 0x4ECC2C, 0x4
	.4byte 0x00000400
.global errorRetry__12JKRDvdRipper
errorRetry__12JKRDvdRipper:
	#.incbin "baserom.dol", 0x4ECC30, 0x4
	.4byte 0x01000000
.global sSZSBufferSize__12JKRDvdRipper
sSZSBufferSize__12JKRDvdRipper:
	#.incbin "baserom.dol", 0x4ECC34, 0x4
	.4byte 0x00000400
.global rootPath$2747
rootPath$2747:
	#.incbin "baserom.dol", 0x4ECC38, 0x8
	.4byte 0x2f000000
	.skip 0x4
.global sDefaultFillFlag__7JKRHeap
sDefaultFillFlag__7JKRHeap:
	.incbin "baserom.dol", 0x4ECC40, 0x8
.global sVisible__Q212JUTAssertion23$$2unnamed$$2JUTAssert_cpp$$2
sVisible__Q212JUTAssertion23$$2unnamed$$2JUTAssert_cpp$$2:
	.incbin "baserom.dol", 0x4ECC48, 0x8
.global sMessageBuffer__12JUTException
sMessageBuffer__12JUTException:
	.incbin "baserom.dol", 0x4ECC50, 0x8
.global sStickMode__10JUTGamePad
sStickMode__10JUTGamePad:
	.incbin "baserom.dol", 0x4ECC58, 0x4
.global sClampMode__10JUTGamePad
sClampMode__10JUTGamePad:
	.incbin "baserom.dol", 0x4ECC5C, 0x4
.global sPressPoint__Q210JUTGamePad6CStick
sPressPoint__Q210JUTGamePad6CStick:
	.incbin "baserom.dol", 0x4ECC60, 0x4
.global sReleasePoint__Q210JUTGamePad6CStick
sReleasePoint__Q210JUTGamePad6CStick:
	.incbin "baserom.dol", 0x4ECC64, 0x4
.global sResetPattern__Q210JUTGamePad13C3ButtonReset
sResetPattern__Q210JUTGamePad13C3ButtonReset:
	.incbin "baserom.dol", 0x4ECC68, 0x4
.global sResetMaskPattern__Q210JUTGamePad13C3ButtonReset
sResetMaskPattern__Q210JUTGamePad13C3ButtonReset:
	.incbin "baserom.dol", 0x4ECC6C, 0x4
.global oneFrameRate
oneFrameRate:
	.incbin "baserom.dol", 0x4ECC70, 0x4
.global oneFrameRateUser
oneFrameRateUser:
	.incbin "baserom.dol", 0x4ECC74, 0x4
.global ColorBlack
ColorBlack:
	.incbin "baserom.dol", 0x4ECC78, 0x4
.global ColorWhite
ColorWhite:
	.incbin "baserom.dol", 0x4ECC7C, 0x4
.global Unit01
Unit01:
	.incbin "baserom.dol", 0x4ECC80, 0x8
.global cm2hw$551
cm2hw$551:
	.incbin "baserom.dol", 0x4ECC88, 0x4
.global J3DGDTexMode0Ids
J3DGDTexMode0Ids:
	.incbin "baserom.dol", 0x4ECC8C, 0x8
.global J3DGDTexMode1Ids
J3DGDTexMode1Ids:
	.incbin "baserom.dol", 0x4ECC94, 0x8
.global J3DGDTexImage0Ids
J3DGDTexImage0Ids:
	.incbin "baserom.dol", 0x4ECC9C, 0x8
.global J3DGDTexImage3Ids
J3DGDTexImage3Ids:
	.incbin "baserom.dol", 0x4ECCA4, 0x8
.global J3DGDTexTlutIds
J3DGDTexTlutIds:
	.incbin "baserom.dol", 0x4ECCAC, 0x8
.global GX2HWFiltConv
GX2HWFiltConv:
	.incbin "baserom.dol", 0x4ECCB4, 0x8
.global J3DTexImage1Ids
J3DTexImage1Ids:
	.incbin "baserom.dol", 0x4ECCBC, 0x8
.global J3DTexImage2Ids
J3DTexImage2Ids:
	.incbin "baserom.dol", 0x4ECCC4, 0xC
.global SizeOfLoadMatColors
SizeOfLoadMatColors:
	.incbin "baserom.dol", 0x4ECCD0, 0x4
.global SizeOfLoadAmbColors
SizeOfLoadAmbColors:
	.incbin "baserom.dol", 0x4ECCD4, 0x4
.global SizeOfLoadColorChans
SizeOfLoadColorChans:
	.incbin "baserom.dol", 0x4ECCD8, 0x8
.global sNoUseDrawMtxPtr__12J3DMtxBuffer
sNoUseDrawMtxPtr__12J3DMtxBuffer:
	.incbin "baserom.dol", 0x4ECCE0, 0x4
.global sNoUseNrmMtxPtr__12J3DMtxBuffer
sNoUseNrmMtxPtr__12J3DMtxBuffer:
	.incbin "baserom.dol", 0x4ECCE4, 0x4
.global J3DUnit01
J3DUnit01:
	.incbin "baserom.dol", 0x4ECCE8, 0x8
.global maxStdHeaps__Q29JFWSystem11CSetUpParam
maxStdHeaps__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECCF0, 0x4
.global sysHeapSize__Q29JFWSystem11CSetUpParam
sysHeapSize__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECCF4, 0x4
.global fifoBufSize__Q29JFWSystem11CSetUpParam
fifoBufSize__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECCF8, 0x4
.global aramAudioBufSize__Q29JFWSystem11CSetUpParam
aramAudioBufSize__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECCFC, 0x4
.global aramGraphBufSize__Q29JFWSystem11CSetUpParam
aramGraphBufSize__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECD00, 0x4
.global streamPriority__Q29JFWSystem11CSetUpParam
streamPriority__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECD04, 0x4
.global decompPriority__Q29JFWSystem11CSetUpParam
decompPriority__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECD08, 0x4
.global aPiecePriority__Q29JFWSystem11CSetUpParam
aPiecePriority__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECD0C, 0x4
.global systemFontRes__Q29JFWSystem11CSetUpParam
systemFontRes__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECD10, 0x4
.global renderMode__Q29JFWSystem11CSetUpParam
renderMode__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECD14, 0x4
.global exConsoleBufferSize__Q29JFWSystem11CSetUpParam
exConsoleBufferSize__Q29JFWSystem11CSetUpParam:
	.incbin "baserom.dol", 0x4ECD18, 0x8
.global p_dl
p_dl:
	.incbin "baserom.dol", 0x4ECD20, 0x8
.global zz_80514788
zz_80514788:
	.incbin "baserom.dol", 0x4ECD28, 0x8
.global MAX_MIXERLEVEL__9JASDriver
MAX_MIXERLEVEL__9JASDriver:
	.incbin "baserom.dol", 0x4ECD30, 0x2
.global MAX_AUTOMIXERLEVEL__9JASDriver
MAX_AUTOMIXERLEVEL__9JASDriver:
	.incbin "baserom.dol", 0x4ECD32, 0x2
.global JAS_SYSTEM_OUTPUT_MODE__9JASDriver
JAS_SYSTEM_OUTPUT_MODE__9JASDriver:
	.incbin "baserom.dol", 0x4ECD34, 0x4
.global COMP_BLOCKSAMPLES$600
COMP_BLOCKSAMPLES$600:
	.incbin "baserom.dol", 0x4ECD38, 0x8
.global COMP_BLOCKBYTES$601
COMP_BLOCKBYTES$601:
	.incbin "baserom.dol", 0x4ECD40, 0x8
.global sDspDacBufferCount__9JASDriver
sDspDacBufferCount__9JASDriver:
	.incbin "baserom.dol", 0x4ECD48, 0x4
.global sSubFrames__9JASDriver
sSubFrames__9JASDriver:
	.incbin "baserom.dol", 0x4ECD4C, 0x4
.global sMixMode__9JASDriver
sMixMode__9JASDriver:
	.incbin "baserom.dol", 0x4ECD50, 0x4
.global sDacRate__9JASDriver
sDacRate__9JASDriver:
	.incbin "baserom.dol", 0x4ECD54, 0x4
.global DSP_MIXERLEVEL
DSP_MIXERLEVEL:
	.incbin "baserom.dol", 0x4ECD58, 0x8
.global flags__Q27JAInter8BankWave
flags__Q27JAInter8BankWave:
	.incbin "baserom.dol", 0x4ECD60, 0x4
.global SceneSetFlag__Q27JAInter8BankWave
SceneSetFlag__Q27JAInter8BankWave:
	.incbin "baserom.dol", 0x4ECD64, 0x4
.global initCallback__Q27JAInter8BankWave
initCallback__Q27JAInter8BankWave:
	.incbin "baserom.dol", 0x4ECD68, 0x4
.global firstLoadCallback__Q27JAInter8BankWave
firstLoadCallback__Q27JAInter8BankWave:
	.incbin "baserom.dol", 0x4ECD6C, 0x4
.global secondLoadCallback__Q27JAInter8BankWave
secondLoadCallback__Q27JAInter8BankWave:
	.incbin "baserom.dol", 0x4ECD70, 0x8
.global msStopStatus__8JAIBasic
msStopStatus__8JAIBasic:
	.incbin "baserom.dol", 0x4ECD78, 0x8
.global distanceParameterMoveTime__18JAIGlobalParameter
distanceParameterMoveTime__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD80, 0x1
.global audioSystemThreadPriority__18JAIGlobalParameter
audioSystemThreadPriority__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD81, 0x1
.global audioDvdThreadPriority__18JAIGlobalParameter
audioDvdThreadPriority__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD82, 0x1
.global seqMuteVolumeSePlay__18JAIGlobalParameter
seqMuteVolumeSePlay__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD83, 0x1
.global seqParameterLines__18JAIGlobalParameter
seqParameterLines__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD84, 0x1
.global streamParameterLines__18JAIGlobalParameter
streamParameterLines__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD85, 0x1
.global seDistanceFxParameter__18JAIGlobalParameter
seDistanceFxParameter__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD86, 0x2
.global soundSceneMax__18JAIGlobalParameter
soundSceneMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD88, 0x4
.global seRegistMax__18JAIGlobalParameter
seRegistMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD8C, 0x4
.global seTrackMax__18JAIGlobalParameter
seTrackMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD90, 0x4
.global seqTrackMax__18JAIGlobalParameter
seqTrackMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD94, 0x4
.global seqPlayTrackMax__18JAIGlobalParameter
seqPlayTrackMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD98, 0x4
.global seqControlBufferMax__18JAIGlobalParameter
seqControlBufferMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECD9C, 0x4
.global autoHeapMax__18JAIGlobalParameter
autoHeapMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDA0, 0x4
.global stayHeapMax__18JAIGlobalParameter
stayHeapMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDA4, 0x4
.global autoHeapRoomSize__18JAIGlobalParameter
autoHeapRoomSize__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDA8, 0x4
.global stayHeapSize__18JAIGlobalParameter
stayHeapSize__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDAC, 0x4
.global initDataFileName__18JAIGlobalParameter
initDataFileName__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDB0, 0x4
.global wavePath__18JAIGlobalParameter
wavePath__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDB4, 0x4
.global sequenceArchivesPath__18JAIGlobalParameter
sequenceArchivesPath__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDB8, 0x4
.global streamPath__18JAIGlobalParameter
streamPath__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDBC, 0x4
.global audioResPath__18JAIGlobalParameter
audioResPath__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDC0, 0x4
.global sequenceArchivesFileName__18JAIGlobalParameter
sequenceArchivesFileName__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDC4, 0x4
.global inputGainDown__18JAIGlobalParameter
inputGainDown__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDC8, 0x4
.global outputGainUp__18JAIGlobalParameter
outputGainUp__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDCC, 0x4
.global distanceMax__18JAIGlobalParameter
distanceMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDD0, 0x4
.global maxVolumeDistance__18JAIGlobalParameter
maxVolumeDistance__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDD4, 0x4
.global seDolbyCenterValue__18JAIGlobalParameter
seDolbyCenterValue__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDD8, 0x4
.global seDolbyFrontDistanceMax__18JAIGlobalParameter
seDolbyFrontDistanceMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDDC, 0x4
.global seDolbyBehindDistanceMax__18JAIGlobalParameter
seDolbyBehindDistanceMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDE0, 0x4
.global dopplarMoveTime__18JAIGlobalParameter
dopplarMoveTime__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDE4, 0x4
.global dummyObjectLifeTime__18JAIGlobalParameter
dummyObjectLifeTime__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDE8, 0x4
.global dummyObjectMax__18JAIGlobalParameter
dummyObjectMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDEC, 0x4
.global seqMuteMoveSpeedSePlay__18JAIGlobalParameter
seqMuteMoveSpeedSePlay__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDF0, 0x4
.global audioCameraMax__18JAIGlobalParameter
audioCameraMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDF4, 0x4
.global systemTrackMax__18JAIGlobalParameter
systemTrackMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDF8, 0x4
.global systemRootTrackMax__18JAIGlobalParameter
systemRootTrackMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECDFC, 0x4
.global panDistanceMax__18JAIGlobalParameter
panDistanceMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECE00, 0x4
.global panDistance2Max__18JAIGlobalParameter
panDistance2Max__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECE04, 0x4
.global panAngleParameter__18JAIGlobalParameter
panAngleParameter__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECE08, 0x4
.global panAngleParameter2__18JAIGlobalParameter
panAngleParameter2__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECE0C, 0x4
.global dopplarParameter__18JAIGlobalParameter
dopplarParameter__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECE10, 0x4
.global seDistanceWaitMax__18JAIGlobalParameter
seDistanceWaitMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECE14, 0x4
.global seDistancepitchMax__18JAIGlobalParameter
seDistancepitchMax__18JAIGlobalParameter:
	.incbin "baserom.dol", 0x4ECE18, 0x8
.global wsInitCallback__Q27JAInter8InitData
wsInitCallback__Q27JAInter8InitData:
	.incbin "baserom.dol", 0x4ECE20, 0x4
.global bnkInitCallback__Q27JAInter8InitData
bnkInitCallback__Q27JAInter8InitData:
	.incbin "baserom.dol", 0x4ECE24, 0x4
.global seStartCallback__Q27JAInter5SeMgr
seStartCallback__Q27JAInter5SeMgr:
	.incbin "baserom.dol", 0x4ECE28, 0x8
.global sChannelMax__Q27JAInter9StreamMgr
sChannelMax__Q27JAInter9StreamMgr:
	.incbin "baserom.dol", 0x4ECE30, 0x4
.global decodedBufferBlocks__Q27JAInter9StreamMgr
decodedBufferBlocks__Q27JAInter9StreamMgr:
	.incbin "baserom.dol", 0x4ECE34, 0x4
.global fragmentID
fragmentID:
	.incbin "baserom.dol", 0x4ECE38, 0x8
.global $$2wstringBase0
$$2wstringBase0:
	.incbin "baserom.dol", 0x4ECE40, 0x8
.global next
next:
	.incbin "baserom.dol", 0x4ECE48, 0x8
.global __float_nan
__float_nan:
	.incbin "baserom.dol", 0x4ECE50, 0x4
.global __float_huge
__float_huge:
	.incbin "baserom.dol", 0x4ECE54, 0x4
.global __double_max
__double_max:
	.incbin "baserom.dol", 0x4ECE58, 0x8
.global __double_huge
__double_huge:
	.incbin "baserom.dol", 0x4ECE60, 0x8
.global __extended_min
__extended_min:
	.incbin "baserom.dol", 0x4ECE68, 0x8
.global __extended_max
__extended_max:
	.incbin "baserom.dol", 0x4ECE70, 0x8
.global __float_max
__float_max:
	.incbin "baserom.dol", 0x4ECE78, 0x4
.global __float_epsilon
__float_epsilon:
	.incbin "baserom.dol", 0x4ECE7C, 0x4
.global SendCount
SendCount:
	.incbin "baserom.dol", 0x4ECE80, 0x8
.global __VIVersion
__VIVersion:
	.incbin "baserom.dol", 0x4ECE88, 0x4
.global lbl_805148EC
lbl_805148EC:
	.incbin "baserom.dol", 0x4ECE8C, 0xC
.global __ARVersion
__ARVersion:
	.incbin "baserom.dol", 0x4ECE98, 0x8
.global __ARQVersion
__ARQVersion:
	.incbin "baserom.dol", 0x4ECEA0, 0x8
.global __CARDVersion
__CARDVersion:
	.incbin "baserom.dol", 0x4ECEA8, 0x8
.global next_1
next_1:
	.incbin "baserom.dol", 0x4ECEB0, 0x8
.global __CARDVendorID
__CARDVendorID:
	.incbin "baserom.dol", 0x4ECEB8, 0x2
.global __CARDPermMask
__CARDPermMask:
	.incbin "baserom.dol", 0x4ECEBA, 0x6
.global __DSPVersion
__DSPVersion:
	.incbin "baserom.dol", 0x4ECEC0, 0x8
.global FirstRead
FirstRead:
	.incbin "baserom.dol", 0x4ECEC8, 0x8
.global lbl_80514930
lbl_80514930:
	.incbin "baserom.dol", 0x4ECED0, 0x8
.global __DVDVersion
__DVDVersion:
	.incbin "baserom.dol", 0x4ECED8, 0x4
.global autoInvalidation
autoInvalidation:
	.incbin "baserom.dol", 0x4ECEDC, 0x4
.global checkOptionalCommand
checkOptionalCommand:
	.incbin "baserom.dol", 0x4ECEE0, 0x4
.global lbl_80514944
lbl_80514944:
	.incbin "baserom.dol", 0x4ECEE4, 0x8
.global DmaCommand
DmaCommand:
	.incbin "baserom.dol", 0x4ECEEC, 0x4
.global lbl_80514950
lbl_80514950:
	.incbin "baserom.dol", 0x4ECEF0, 0x4
.global lbl_80514954
lbl_80514954:
	.incbin "baserom.dol", 0x4ECEF4, 0x4
.global lbl_80514958
lbl_80514958:
	.incbin "baserom.dol", 0x4ECEF8, 0x8
.global __EXIVersion
__EXIVersion:
	.incbin "baserom.dol", 0x4ECF00, 0x8
.global __GXVersion
__GXVersion:
	.incbin "baserom.dol", 0x4ECF08, 0x8
.global tbl1$263
tbl1$263:
	.incbin "baserom.dol", 0x4ECF10, 0x4
.global tbl2$264
tbl2$264:
	.incbin "baserom.dol", 0x4ECF14, 0x4
.global tbl3$265
tbl3$265:
	.incbin "baserom.dol", 0x4ECF18, 0x8
.global GXTexMode0Ids
GXTexMode0Ids:
	.incbin "baserom.dol", 0x4ECF20, 0x8
.global GXTexMode1Ids
GXTexMode1Ids:
	.incbin "baserom.dol", 0x4ECF28, 0x8
.global GXTexImage0Ids
GXTexImage0Ids:
	.incbin "baserom.dol", 0x4ECF30, 0x8
.global GXTexImage1Ids
GXTexImage1Ids:
	.incbin "baserom.dol", 0x4ECF38, 0x8
.global GXTexImage2Ids
GXTexImage2Ids:
	.incbin "baserom.dol", 0x4ECF40, 0x8
.global GXTexImage3Ids
GXTexImage3Ids:
	.incbin "baserom.dol", 0x4ECF48, 0x8
.global GXTexTlutIds
GXTexTlutIds:
	.incbin "baserom.dol", 0x4ECF50, 0x8
.global GX2HWFiltConv_1
GX2HWFiltConv_1:
	.incbin "baserom.dol", 0x4ECF58, 0x8
.global Unit01_1
Unit01_1:
	.incbin "baserom.dol", 0x4ECF60, 0x8
.global __OSVersion
__OSVersion:
	.incbin "baserom.dol", 0x4ECF68, 0x4
.global lbl_805149CC
lbl_805149CC:
	.incbin "baserom.dol", 0x4ECF6C, 0x8
.global lbl_805149D4
lbl_805149D4:
	.incbin "baserom.dol", 0x4ECF74, 0x4
.global __OSCurrHeap
__OSCurrHeap:
	.incbin "baserom.dol", 0x4ECF78, 0x8
.global __OSArenaLo
__OSArenaLo:
	.incbin "baserom.dol", 0x4ECF80, 0x8
.global __OSFpscrEnableBits
__OSFpscrEnableBits:
	.incbin "baserom.dol", 0x4ECF88, 0x4
.global lbl_805149EC
lbl_805149EC:
	.incbin "baserom.dol", 0x4ECF8C, 0x4
.global fontEncode$80
fontEncode$80:
	.incbin "baserom.dol", 0x4ECF90, 0x8
.global SwitchThreadCallback
SwitchThreadCallback:
	.incbin "baserom.dol", 0x4ECF98, 0x8
.global __PADVersion
__PADVersion:
	.incbin "baserom.dol", 0x4ECFA0, 0x4
.global ResettingChan
ResettingChan:
	.incbin "baserom.dol", 0x4ECFA4, 0x4
.global XPatchBits
XPatchBits:
	.incbin "baserom.dol", 0x4ECFA8, 0x4
.global AnalogMode
AnalogMode:
	.incbin "baserom.dol", 0x4ECFAC, 0x4
.global Spec
Spec:
	.incbin "baserom.dol", 0x4ECFB0, 0x4
.global MakeStatus
MakeStatus:
	.incbin "baserom.dol", 0x4ECFB4, 0x4
.global CmdReadOrigin
CmdReadOrigin:
	.incbin "baserom.dol", 0x4ECFB8, 0x4
.global CmdCalibrate
CmdCalibrate:
	.incbin "baserom.dol", 0x4ECFBC, 0x4
.global __SIVersion
__SIVersion:
	.incbin "baserom.dol", 0x4ECFC0, 0x8
.global __AIVersion
__AIVersion:
	.incbin "baserom.dol", 0x4ECFC8, 0x8
.global __THPVersion
__THPVersion:
	.incbin "baserom.dol", 0x4ECFD0, 0x8
.global __GBAVersion
__GBAVersion:
	.incbin "baserom.dol", 0x4ECFD8, 0x8
.global cKochappyChangeTexName__Q34Game8Kochappy25$$2unnamed$$2kochappyMgr_cpp$$2
cKochappyChangeTexName__Q34Game8Kochappy25$$2unnamed$$2kochappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ECFE0, 0x8
.global cChappyChangeTexName0__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2
cChappyChangeTexName0__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ECFE8, 0x4
.global cChappyChangeTexName1__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2
cChappyChangeTexName1__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ECFEC, 0x4
.global gEnemyInfoNum__4Game
gEnemyInfoNum__4Game:
	.incbin "baserom.dol", 0x4ECFF0, 0x8
.global sStoneMdlName__27$$2unnamed$$2enemyStoneMgr_cpp$$2
sStoneMdlName__27$$2unnamed$$2enemyStoneMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ECFF8, 0x8
.global cChappyChangeTexName0__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2
cChappyChangeTexName0__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED000, 0x4
.global cChappyChangeTexName1__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2
cChappyChangeTexName1__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED004, 0x4
.global cChappyChangeTexName0__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2
cChappyChangeTexName0__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED008, 0x4
.global cChappyChangeTexName1__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2
cChappyChangeTexName1__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED00C, 0x4
.global cKochappyChangeTexName__Q34Game12BlueKochappy29$$2unnamed$$2BlueKochappyMgr_cpp$$2
cKochappyChangeTexName__Q34Game12BlueKochappy29$$2unnamed$$2BlueKochappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED010, 0x8
.global cKochappyChangeTexName__Q34Game14YellowKochappy31$$2unnamed$$2YellowKochappyMgr_cpp$$2
cKochappyChangeTexName__Q34Game14YellowKochappy31$$2unnamed$$2YellowKochappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED018, 0x8
.global usePacketCulling__Q24Game8Creature
usePacketCulling__Q24Game8Creature:
	.incbin "baserom.dol", 0x4ED020, 0x8
.global kAngleSpeed__Q23efx7TCursor
kAngleSpeed__Q23efx7TCursor:
	.incbin "baserom.dol", 0x4ED028, 0x8
.global sOptDraw__Q24Game15BaseGameSection
sOptDraw__Q24Game15BaseGameSection:
	.incbin "baserom.dol", 0x4ED030, 0x8
.global sOptResolveColl__Q24Game11CellPyramid
sOptResolveColl__Q24Game11CellPyramid:
	.incbin "baserom.dol", 0x4ED038, 0x4
.global sCellBugName__Q24Game11CellPyramid
sCellBugName__Q24Game11CellPyramid:
	.incbin "baserom.dol", 0x4ED03C, 0x4
.global sFromTekiEnable__Q24Game6Pellet
sFromTekiEnable__Q24Game6Pellet:
	.incbin "baserom.dol", 0x4ED040, 0x8
.global newVer
newVer:
	.incbin "baserom.dol", 0x4ED048, 0x8
.global maxBuffer__Q24Game8Stickers
maxBuffer__Q24Game8Stickers:
	.incbin "baserom.dol", 0x4ED050, 0x8
.global GeneratorCurrentVersion
GeneratorCurrentVersion:
	.incbin "baserom.dol", 0x4ED058, 0x8
.global sGraspSituationOptimise__Q24Game4Piki
sGraspSituationOptimise__Q24Game4Piki:
	.incbin "baserom.dol", 0x4ED060, 0x8
.global useFixCollision__Q24Game12PlatInstance
useFixCollision__Q24Game12PlatInstance:
	.incbin "baserom.dol", 0x4ED068, 0x1
.global mUseCellMgr__Q24Game7PlatMgr
mUseCellMgr__Q24Game7PlatMgr:
	.incbin "baserom.dol", 0x4ED069, 0x7
.global enum_floor_hiddens__26$$2unnamed$$2gameCaveInfo_cpp$$2
enum_floor_hiddens__26$$2unnamed$$2gameCaveInfo_cpp$$2:
	.incbin "baserom.dol", 0x4ED070, 0x8
.global mTraceMoveOptLevel__Q24Game6MapMgr
mTraceMoveOptLevel__Q24Game6MapMgr:
	.incbin "baserom.dol", 0x4ED078, 0x8
.global mVersion__Q24Game8PlayData
mVersion__Q24Game8PlayData:
	.incbin "baserom.dol", 0x4ED080, 0x8
.global sEntryOpt__Q24Game12BaseHIOParms
sEntryOpt__Q24Game12BaseHIOParms:
	.incbin "baserom.dol", 0x4ED088, 0x1
.global sEntryOptMapRoom__Q24Game12BaseHIOParms
sEntryOptMapRoom__Q24Game12BaseHIOParms:
	.incbin "baserom.dol", 0x4ED089, 0x1
.global sDrawParticle__Q24Game12BaseHIOParms
sDrawParticle__Q24Game12BaseHIOParms:
	.incbin "baserom.dol", 0x4ED08A, 0x1
.global sMabikiEfx__Q24Game12BaseHIOParms
sMabikiEfx__Q24Game12BaseHIOParms:
	.incbin "baserom.dol", 0x4ED08B, 0x1
.global sMapRoomFinal__Q24Game12BaseHIOParms
sMapRoomFinal__Q24Game12BaseHIOParms:
	.incbin "baserom.dol", 0x4ED08C, 0x1
.global sTekiChappyFlag__Q24Game12BaseHIOParms
sTekiChappyFlag__Q24Game12BaseHIOParms:
	.incbin "baserom.dol", 0x4ED08D, 0x3
.global asArrayOtakara__4Game
asArrayOtakara__4Game:
	.incbin "baserom.dol", 0x4ED090, 0x8
.global cCoin__13VsOtakaraName
cCoin__13VsOtakaraName:
	.incbin "baserom.dol", 0x4ED098, 0x4
.global cBedamaBlue__13VsOtakaraName
cBedamaBlue__13VsOtakaraName:
	.incbin "baserom.dol", 0x4ED09C, 0x4
.global cBedamaRed__13VsOtakaraName
cBedamaRed__13VsOtakaraName:
	.incbin "baserom.dol", 0x4ED0A0, 0x4
.global cBedamaYellow__13VsOtakaraName
cBedamaYellow__13VsOtakaraName:
	.incbin "baserom.dol", 0x4ED0A4, 0x4
.global cBedamaYellowDepth__13VsOtakaraName
cBedamaYellowDepth__13VsOtakaraName:
	.incbin "baserom.dol", 0x4ED0A8, 0x8
.global cTankChangeTexName__Q34Game5Wtank22$$2unnamed$$2WtankMgr_cpp$$2
cTankChangeTexName__Q34Game5Wtank22$$2unnamed$$2WtankMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0B0, 0x8
.global cMatAnimBtkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2
cMatAnimBtkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0B8, 0x4
.global cMatAnimBrkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2
cMatAnimBrkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0BC, 0x4
.global cKoganeChangeTexName__Q34Game7Wealthy24$$2unnamed$$2WealthyMgr_cpp$$2
cKoganeChangeTexName__Q34Game7Wealthy24$$2unnamed$$2WealthyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0C0, 0x8
.global cKoganeChangeTexName__Q34Game4Fart21$$2unnamed$$2FartMgr_cpp$$2
cKoganeChangeTexName__Q34Game4Fart21$$2unnamed$$2FartMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0C8, 0x8
.global cMatAnimBtkTexName__Q34Game5Queen22$$2unnamed$$2QueenMgr_cpp$$2
cMatAnimBtkTexName__Q34Game5Queen22$$2unnamed$$2QueenMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0D0, 0x8
.global cMatAnimBtkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2
cMatAnimBtkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0D8, 0x4
.global cMatAnimBrkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2
cMatAnimBrkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0DC, 0x4
.global cKoganeChangeTexName__Q34Game11Koganemushi28$$2unnamed$$2KoganemushiMgr_cpp$$2
cKoganeChangeTexName__Q34Game11Koganemushi28$$2unnamed$$2KoganemushiMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0E0, 0x8
.global cTankChangeTexName__Q34Game5Ftank22$$2unnamed$$2FtankMgr_cpp$$2
cTankChangeTexName__Q34Game5Ftank22$$2unnamed$$2FtankMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0E8, 0x8
.global cMatAnimBtkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2
cMatAnimBtkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0F0, 0x4
.global cMatAnimBrkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2
cMatAnimBrkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0F4, 0x4
.global cMatAnimBtkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2
cMatAnimBtkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0F8, 0x4
.global cMatAnimBrkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2
cMatAnimBrkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED0FC, 0x4
.global cOtakaraChangeTexName__Q34Game11FireOtakara28$$2unnamed$$2FireOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game11FireOtakara28$$2unnamed$$2FireOtakaraMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED100, 0x8
.global cOtakaraChangeTexName__Q34Game12WaterOtakara29$$2unnamed$$2WaterOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game12WaterOtakara29$$2unnamed$$2WaterOtakaraMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED108, 0x8
.global cOtakaraChangeTexName__Q34Game10GasOtakara27$$2unnamed$$2GasOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game10GasOtakara27$$2unnamed$$2GasOtakaraMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED110, 0x8
.global cOtakaraChangeTexName__Q34Game11ElecOtakara28$$2unnamed$$2ElecOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game11ElecOtakara28$$2unnamed$$2ElecOtakaraMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED118, 0x8
.global cMatAnimBrkTexName__Q34Game7BigFoot24$$2unnamed$$2BigFootMgr_cpp$$2
cMatAnimBrkTexName__Q34Game7BigFoot24$$2unnamed$$2BigFootMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED120, 0x8
.global cOtakaraChangeTexName__Q34Game11BombOtakara28$$2unnamed$$2BombOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game11BombOtakara28$$2unnamed$$2BombOtakaraMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED128, 0x8
.global cMatAnimBrkTexName__Q34Game10DangoMushi27$$2unnamed$$2DangoMushiMgr_cpp$$2
cMatAnimBrkTexName__Q34Game10DangoMushi27$$2unnamed$$2DangoMushiMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED130, 0x8
.global cKabutoChangeTexName__Q34Game11GreenKabuto28$$2unnamed$$2GreenKabutoMgr_cpp$$2
cKabutoChangeTexName__Q34Game11GreenKabuto28$$2unnamed$$2GreenKabutoMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED138, 0x8
.global cKabutoChangeTexName__Q34Game9RedKabuto26$$2unnamed$$2RedKabutoMgr_cpp$$2
cKabutoChangeTexName__Q34Game9RedKabuto26$$2unnamed$$2RedKabutoMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED140, 0x8
.global cKabutoChangeTexName__Q34Game9FixKabuto26$$2unnamed$$2FixKabutoMgr_cpp$$2
cKabutoChangeTexName__Q34Game9FixKabuto26$$2unnamed$$2FixKabutoMgr_cpp$$2:
	.incbin "baserom.dol", 0x4ED148, 0x8
.global sDistanceParameterMoveTime__8PSSystem
sDistanceParameterMoveTime__8PSSystem:
	.incbin "baserom.dol", 0x4ED150, 0x8
.global cRatio__Q26PSGame5Rappa
cRatio__Q26PSGame5Rappa:
	.incbin "baserom.dol", 0x4ED158, 0x4
.global cBaseWaitTime__Q26PSGame5Rappa
cBaseWaitTime__Q26PSGame5Rappa:
	.incbin "baserom.dol", 0x4ED15C, 0x4
.global sRappa__Q26PSGame5Rappa
sRappa__Q26PSGame5Rappa:
	.incbin "baserom.dol", 0x4ED160, 0x8
.global cNotUsingMasterIdRatio__Q26PSGame6RandId
cNotUsingMasterIdRatio__Q26PSGame6RandId:
	.incbin "baserom.dol", 0x4ED168, 0x8
.global mWaitTime__Q28Morimura12TDayEndCount
mWaitTime__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED170, 0x4
.global mAlphaMax__Q28Morimura12TDayEndCount
mAlphaMax__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED174, 0x1
.global mWaitAlpha__Q28Morimura12TDayEndCount
mWaitAlpha__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED175, 0x3
.global mWaitScale__Q28Morimura12TDayEndCount
mWaitScale__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED178, 0x4
.global mStopScale__Q28Morimura12TDayEndCount
mStopScale__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED17C, 0x4
.global mScaleMax__Q28Morimura12TDayEndCount
mScaleMax__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED180, 0x4
.global m2pScale__Q28Morimura12TDayEndCount
m2pScale__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED184, 0x4
.global m2pOffsetY__Q28Morimura12TDayEndCount
m2pOffsetY__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED188, 0x4
.global mColor__Q28Morimura12TDayEndCount
mColor__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED18C, 0x4
.global mNumberColor__Q28Morimura12TDayEndCount
mNumberColor__Q28Morimura12TDayEndCount:
	.incbin "baserom.dol", 0x4ED190, 0x8
.global mInitPosX__Q28Morimura10THurryUp2D
mInitPosX__Q28Morimura10THurryUp2D:
	.incbin "baserom.dol", 0x4ED198, 0x4
.global mMoveSp__Q28Morimura10THurryUp2D
mMoveSp__Q28Morimura10THurryUp2D:
	.incbin "baserom.dol", 0x4ED19C, 0x4
.global mScaleSp1__Q28Morimura10THurryUp2D
mScaleSp1__Q28Morimura10THurryUp2D:
	.incbin "baserom.dol", 0x4ED1A0, 0x4
.global mScaleSp2__Q28Morimura10THurryUp2D
mScaleSp2__Q28Morimura10THurryUp2D:
	.incbin "baserom.dol", 0x4ED1A4, 0x4
.global mScaleRate__Q28Morimura10THurryUp2D
mScaleRate__Q28Morimura10THurryUp2D:
	.incbin "baserom.dol", 0x4ED1A8, 0x4
.global mColorUpSp__Q28Morimura10THurryUp2D
mColorUpSp__Q28Morimura10THurryUp2D:
	.incbin "baserom.dol", 0x4ED1AC, 0x4
.global mRequestTimerMax__Q28Morimura10TZukanBase
mRequestTimerMax__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1B0, 0x2
.global mIconMove__Q28Morimura10TZukanBase
mIconMove__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1B2, 0x2
.global mLineSpace__Q28Morimura10TZukanBase
mLineSpace__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1B4, 0x4
.global mWarpRadius__Q28Morimura10TZukanBase
mWarpRadius__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1B8, 0x4
.global mScrollValueCoe__Q28Morimura10TZukanBase
mScrollValueCoe__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1BC, 0x4
.global mScrollSpeedCoe__Q28Morimura10TZukanBase
mScrollSpeedCoe__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1C0, 0x4
.global mNewScale__Q28Morimura10TZukanBase
mNewScale__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1C4, 0x4
.global mPodIconOffsetX__Q28Morimura10TZukanBase
mPodIconOffsetX__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1C8, 0x4
.global mLargeCategoryScale__Q28Morimura10TZukanBase
mLargeCategoryScale__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1CC, 0x4
.global mCategoryAlphaRate__Q28Morimura10TZukanBase
mCategoryAlphaRate__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1D0, 0x4
.global mDrawLineType__Q28Morimura10TZukanBase
mDrawLineType__Q28Morimura10TZukanBase:
	.incbin "baserom.dol", 0x4ED1D4, 0x4
.global mPictureOffsetY__Q28Morimura8THiScore
mPictureOffsetY__Q28Morimura8THiScore:
	.incbin "baserom.dol", 0x4ED1D8, 0x4
.global mChangeAlpha__Q28Morimura8THiScore
mChangeAlpha__Q28Morimura8THiScore:
	.incbin "baserom.dol", 0x4ED1DC, 0x4
.global mListOffsetY__Q28Morimura8THiScore
mListOffsetY__Q28Morimura8THiScore:
	.incbin "baserom.dol", 0x4ED1E0, 0x4
.global mClearListHeightRate__Q28Morimura8THiScore
mClearListHeightRate__Q28Morimura8THiScore:
	.incbin "baserom.dol", 0x4ED1E4, 0x4
.global mSelected1p__Q28Morimura16TChallengeSelect
mSelected1p__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED1E8, 0x4
.global mAlphaSpeed__Q28Morimura16TChallengeSelect
mAlphaSpeed__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED1EC, 0x4
.global mFlashAnimInterval__Q28Morimura16TChallengeSelect
mFlashAnimInterval__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED1F0, 0x4
.global mTextFlashVal__Q28Morimura16TChallengeSelect
mTextFlashVal__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED1F4, 0x4
.global mConnect2p__Q28Morimura16TChallengeSelect
mConnect2p__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED1F8, 0x4
.global mPanelMoveVal__Q28Morimura16TChallengeSelect
mPanelMoveVal__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED1FC, 0x4
.global mPanelMoveRate__Q28Morimura16TChallengeSelect
mPanelMoveRate__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED200, 0x4
.global mCircleY__Q28Morimura16TChallengeSelect
mCircleY__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED204, 0x4
.global mTimerSpeed__Q28Morimura16TChallengeSelect
mTimerSpeed__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED208, 0x4
.global mMoveSpeed__Q28Morimura16TChallengeSelect
mMoveSpeed__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED20C, 0x4
.global mSelectIconScale__Q28Morimura16TChallengeSelect
mSelectIconScale__Q28Morimura16TChallengeSelect:
	.incbin "baserom.dol", 0x4ED210, 0x8
.global mMoveSpeed__Q28Morimura16TChallengeResult
mMoveSpeed__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED218, 0x4
.global mAngRate__Q28Morimura16TChallengeResult
mAngRate__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED21C, 0x4
.global mAngVelMax__Q28Morimura16TChallengeResult
mAngVelMax__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED220, 0x4
.global mAccel__Q28Morimura16TChallengeResult
mAccel__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED224, 0x4
.global mTestDemo__Q28Morimura16TChallengeResult
mTestDemo__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED228, 0x1
.global mComplete__Q28Morimura16TChallengeResult
mComplete__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED229, 0x1
.global mTestRankInOrder__Q28Morimura16TChallengeResult
mTestRankInOrder__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED22A, 0x2
.global mFlashInterval__Q28Morimura16TChallengeResult
mFlashInterval__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED22C, 0x4
.global mDemoSpeedUpRate__Q28Morimura16TChallengeResult
mDemoSpeedUpRate__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED230, 0x4
.global mDemoSpeedUpMax__Q28Morimura16TChallengeResult
mDemoSpeedUpMax__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED234, 0x4
.global mFlashColor__Q28Morimura16TChallengeResult
mFlashColor__Q28Morimura16TChallengeResult:
	.incbin "baserom.dol", 0x4ED238, 0x8
.global mAngRate__Q28Morimura9TVsSelect
mAngRate__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED240, 0x4
.global mMoveSpeed__Q28Morimura9TVsSelect
mMoveSpeed__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED244, 0x4
.global mIndVal__Q28Morimura9TVsSelect
mIndVal__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED248, 0x4
.global mIndShuki__Q28Morimura9TVsSelect
mIndShuki__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED24C, 0x4
.global mZoomFrameMax__Q28Morimura9TVsSelect
mZoomFrameMax__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED250, 0x4
.global mTestVal__Q28Morimura9TVsSelect
mTestVal__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED254, 0x4
.global mAngUp__Q28Morimura9TVsSelect
mAngUp__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED258, 0x4
.global mWindowScale__Q28Morimura9TVsSelect
mWindowScale__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED25C, 0x4
.global mDemoScaleMax__Q28Morimura9TVsSelect
mDemoScaleMax__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED260, 0x4
.global mDemoScale__Q28Morimura9TVsSelect
mDemoScale__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED264, 0x4
.global mDemoOffsetMax__Q28Morimura9TVsSelect
mDemoOffsetMax__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED268, 0x4
.global mFireAlphaRate__Q28Morimura9TVsSelect
mFireAlphaRate__Q28Morimura9TVsSelect:
	.incbin "baserom.dol", 0x4ED26C, 0x4
.global mWideWindow__Q28Morimura11TScrollList
mWideWindow__Q28Morimura11TScrollList:
	.incbin "baserom.dol", 0x4ED270, 0x8
.global mClipRadiusS__11ParticleMgr
mClipRadiusS__11ParticleMgr:
	.incbin "baserom.dol", 0x4ED278, 0x4
.global mClipRadiusM__11ParticleMgr
mClipRadiusM__11ParticleMgr:
	.incbin "baserom.dol", 0x4ED27C, 0x4
.global mClipRadiusL__11ParticleMgr
mClipRadiusL__11ParticleMgr:
	.incbin "baserom.dol", 0x4ED280, 0x8
.global cInitialCode__Q23ebi11CardEReader
cInitialCode__Q23ebi11CardEReader:
	.incbin "baserom.dol", 0x4ED288, 0x8
.global sUseABXCommand
sUseABXCommand:
	.incbin "baserom.dol", 0x4ED290, 0x4
.global cMapFileName
cMapFileName:
	.incbin "baserom.dol", 0x4ED294, 0x4
.global mActiveSectionFlag__8GameFlow
mActiveSectionFlag__8GameFlow:
	.incbin "baserom.dol", 0x4ED298, 0x8
.global viewCalcMode__Q28SysShape5Model
viewCalcMode__Q28SysShape5Model:
	.incbin "baserom.dol", 0x4ED2A0, 0x8
.global cFileName__Q24Game10MemoryCard
cFileName__Q24Game10MemoryCard:
	.incbin "baserom.dol", 0x4ED2A8, 0x8
.global sTinyPikminNum__13TinyPikminMgr
sTinyPikminNum__13TinyPikminMgr:
	.incbin "baserom.dol", 0x4ED2B0, 0x8
.global sMovieIndex__26$$2unnamed$$2titleSection_cpp$$2
sMovieIndex__26$$2unnamed$$2titleSection_cpp$$2:
	.incbin "baserom.dol", 0x4ED2B8, 0x7
.global sSeasonIndex__26$$2unnamed$$2titleSection_cpp$$2
sSeasonIndex__26$$2unnamed$$2titleSection_cpp$$2:
	.incbin "baserom.dol", 0x4ED2BF, 0x1
.global sMovieIndexTable__Q24Demo25$$2unnamed$$2demoSection_cpp$$2
sMovieIndexTable__Q24Demo25$$2unnamed$$2demoSection_cpp$$2:
	.incbin "baserom.dol", 0x4ED2C0, 0x8
.global sMovieIndex__Q24Demo25$$2unnamed$$2demoSection_cpp$$2
sMovieIndex__Q24Demo25$$2unnamed$$2demoSection_cpp$$2:
	.incbin "baserom.dol", 0x4ED2C8, 0x8
.global sTreasureLader_PitchDistance
sTreasureLader_PitchDistance:
	.incbin "baserom.dol", 0x4ED2D0, 0x4
.global sTreasureLader_Pitch
sTreasureLader_Pitch:
	.incbin "baserom.dol", 0x4ED2D4, 0x4
.global sTreasureLader_DistanceExp
sTreasureLader_DistanceExp:
	.incbin "baserom.dol", 0x4ED2D8, 0x4
.global sTreasureLader_MinimumVolume
sTreasureLader_MinimumVolume:
	.incbin "baserom.dol", 0x4ED2DC, 0x4
.global sLaderNoiseVolumeExp
sLaderNoiseVolumeExp:
	.incbin "baserom.dol", 0x4ED2E0, 0x4
.global sLaderNoiseFuefukiTimerCenter
sLaderNoiseFuefukiTimerCenter:
	.incbin "baserom.dol", 0x4ED2E4, 0x2
.global sLaderNoiseFuefukiTimerRandam
sLaderNoiseFuefukiTimerRandam:
	.incbin "baserom.dol", 0x4ED2E6, 0x2
.global sLaderNoiseFuefukiSensMax
sLaderNoiseFuefukiSensMax:
	.incbin "baserom.dol", 0x4ED2E8, 0x4
.global sLaderNoiseFuefukiVolumeMin
sLaderNoiseFuefukiVolumeMin:
	.incbin "baserom.dol", 0x4ED2EC, 0x4
.global sLaderNoiseFuefukiVolumeMax
sLaderNoiseFuefukiVolumeMax:
	.incbin "baserom.dol", 0x4ED2F0, 0x8
.global cDol_0Rad__Q23PSM7SeSound
cDol_0Rad__Q23PSM7SeSound:
	.incbin "baserom.dol", 0x4ED2F8, 0x4
.global cDol_HalfRad__Q23PSM7SeSound
cDol_HalfRad__Q23PSM7SeSound:
	.incbin "baserom.dol", 0x4ED2FC, 0x4
.global cDol_FullRad__Q23PSM7SeSound
cDol_FullRad__Q23PSM7SeSound:
	.incbin "baserom.dol", 0x4ED300, 0x4
.global cPan_MaxAmp__Q23PSM7SeSound
cPan_MaxAmp__Q23PSM7SeSound:
	.incbin "baserom.dol", 0x4ED304, 0x4
.global cCenterRad__Q23PSM7SeSound
cCenterRad__Q23PSM7SeSound:
	.incbin "baserom.dol", 0x4ED308, 0x8
.global sCamFov__3PSM
sCamFov__3PSM:
	.incbin "baserom.dol", 0x4ED310, 0x4
.global sBoss_ViewDist__3PSM
sBoss_ViewDist__3PSM:
	.incbin "baserom.dol", 0x4ED314, 0x4
.global sBoss_ViewDistVol__3PSM
sBoss_ViewDistVol__3PSM:
	.incbin "baserom.dol", 0x4ED318, 0x4
.global sBoss_DistMax__3PSM
sBoss_DistMax__3PSM:
	.incbin "baserom.dol", 0x4ED31C, 0x4
