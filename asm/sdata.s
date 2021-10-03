.include "macros.inc"
.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.global sSZSBufferSize__7JKRAram
sSZSBufferSize__7JKRAram:
	.4byte 0x00000400
	.skip 0x4
.global errorRetry__16JKRDvdAramRipper
errorRetry__16JKRDvdAramRipper:
	.4byte 0x01000000
.global sSZSBufferSize__16JKRDvdAramRipper
sSZSBufferSize__16JKRDvdAramRipper:
	.4byte 0x00000400
.global errorRetry__12JKRDvdRipper
errorRetry__12JKRDvdRipper:
	.4byte 0x01000000
.global sSZSBufferSize__12JKRDvdRipper
sSZSBufferSize__12JKRDvdRipper:
	.4byte 0x00000400
.global rootPath$2747
rootPath$2747:
	.byte 0x2f
	.skip 0x7
.global sDefaultFillFlag__7JKRHeap
sDefaultFillFlag__7JKRHeap:
	.byte 1
	.skip 7
.global sVisible__Q212JUTAssertion23$$2unnamed$$2JUTAssert_cpp$$2
sVisible__Q212JUTAssertion23$$2unnamed$$2JUTAssert_cpp$$2:
	.byte 1
	.skip 7
.global sMessageBuffer__12JUTException
sMessageBuffer__12JUTException:
	.skip 8
.global sStickMode__10JUTGamePad
sStickMode__10JUTGamePad:
	.4byte 1
.global sClampMode__10JUTGamePad
sClampMode__10JUTGamePad:
	.4byte 1
.global sPressPoint__Q210JUTGamePad6CStick
sPressPoint__Q210JUTGamePad6CStick:
	.float 0.5
.global sReleasePoint__Q210JUTGamePad6CStick
sReleasePoint__Q210JUTGamePad6CStick:
	.float 0.25
.global sResetPattern__Q210JUTGamePad13C3ButtonReset
sResetPattern__Q210JUTGamePad13C3ButtonReset:
	.4byte 0x00001600
.global sResetMaskPattern__Q210JUTGamePad13C3ButtonReset
sResetMaskPattern__Q210JUTGamePad13C3ButtonReset:
	.4byte 0x0000ffff
.global oneFrameRate
oneFrameRate:
	.float 8.0
.global oneFrameRateUser
oneFrameRateUser:
	.float 10.0
.global ColorBlack
ColorBlack:
	.4byte 0
.global ColorWhite
ColorWhite:
	.4byte 0xffffffff
.global Unit01
Unit01:
	.skip 4
	.float 1.0
.global cm2hw$551
cm2hw$551:
	.4byte 0x00020103
.global J3DGDTexMode0Ids
J3DGDTexMode0Ids:
	.4byte 0x80818283
	.4byte 0xa0a1a2a3
.global J3DGDTexMode1Ids
J3DGDTexMode1Ids:
	.4byte 0x84858687
	.4byte 0xa4a5a6a7
.global J3DGDTexImage0Ids
J3DGDTexImage0Ids:
	.4byte 0x88898a8b
	.4byte 0xa8a9aaab
.global J3DGDTexImage3Ids
J3DGDTexImage3Ids:
	.4byte 0x94959697
	.4byte 0xb4b5b6b7
.global J3DGDTexTlutIds
J3DGDTexTlutIds:
	.4byte 0x98999a9b
	.4byte 0xb8b9babb
.global GX2HWFiltConv
GX2HWFiltConv:
	.4byte 0x00040105
	.4byte 0x02060000
.global J3DTexImage1Ids
J3DTexImage1Ids:
	.4byte 0x8c8d8e8f
	.4byte 0xacadaeaf
.global J3DTexImage2Ids
J3DTexImage2Ids:
	.4byte 0x90919293
	.4byte 0xb0b1b2b3
	.skip 4
.global SizeOfLoadMatColors
SizeOfLoadMatColors:
	.4byte 0xd
.global SizeOfLoadAmbColors
SizeOfLoadAmbColors:
	.4byte 0xd
.global SizeOfLoadColorChans
SizeOfLoadColorChans:
	.4byte 0x15
	.skip 4
.global sNoUseDrawMtxPtr__12J3DMtxBuffer
sNoUseDrawMtxPtr__12J3DMtxBuffer:
	.byte 0x80
	.byte 0x51
	.byte 0x21
	.byte 0x8
.global sNoUseNrmMtxPtr__12J3DMtxBuffer
sNoUseNrmMtxPtr__12J3DMtxBuffer:
	.byte 0x80
	.byte 0x51
	.byte 0x21
	.byte 0x5C
.global J3DUnit01
J3DUnit01:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global maxStdHeaps__Q29JFWSystem11CSetUpParam
maxStdHeaps__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x2
.global sysHeapSize__Q29JFWSystem11CSetUpParam
sysHeapSize__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global fifoBufSize__Q29JFWSystem11CSetUpParam
fifoBufSize__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x4
	.byte 0x0
	.byte 0x0
.global aramAudioBufSize__Q29JFWSystem11CSetUpParam
aramAudioBufSize__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global aramGraphBufSize__Q29JFWSystem11CSetUpParam
aramGraphBufSize__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x60
	.byte 0x0
	.byte 0x0
.global streamPriority__Q29JFWSystem11CSetUpParam
streamPriority__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x8
.global decompPriority__Q29JFWSystem11CSetUpParam
decompPriority__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x7
.global aPiecePriority__Q29JFWSystem11CSetUpParam
aPiecePriority__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x6
.global systemFontRes__Q29JFWSystem11CSetUpParam
systemFontRes__Q29JFWSystem11CSetUpParam:
	.byte 0x80
	.byte 0x47
	.byte 0x42
	.byte 0xC0
.global renderMode__Q29JFWSystem11CSetUpParam
renderMode__Q29JFWSystem11CSetUpParam:
	.byte 0x80
	.byte 0x4A
	.byte 0x84
	.byte 0x0
.global exConsoleBufferSize__Q29JFWSystem11CSetUpParam
exConsoleBufferSize__Q29JFWSystem11CSetUpParam:
	.byte 0x0
	.byte 0x0
	.byte 0x24
	.byte 0xFC
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global p_dl
p_dl:
	.byte 0x80
	.byte 0x4A
	.byte 0x30
	.byte 0xA0
	.byte 0x80
	.byte 0x4A
	.byte 0x30
	.byte 0xC0
.global zz_80514788
zz_80514788:
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global MAX_MIXERLEVEL__9JASDriver
MAX_MIXERLEVEL__9JASDriver:
	.2byte 0x2ee0
.global MAX_AUTOMIXERLEVEL__9JASDriver
MAX_AUTOMIXERLEVEL__9JASDriver:
	.2byte 0x2ee0
.global JAS_SYSTEM_OUTPUT_MODE__9JASDriver
JAS_SYSTEM_OUTPUT_MODE__9JASDriver:
	.4byte 1
.global COMP_BLOCKSAMPLES$600
COMP_BLOCKSAMPLES$600:
	.4byte 0x10100101
	.4byte 0x01101001
.global COMP_BLOCKBYTES$601
COMP_BLOCKBYTES$601:
	.byte 0x9
	.byte 0x5
	.byte 0x8
	.byte 0x10
	.byte 0x1
	.byte 0x1
	.byte 0x1
	.byte 0x1
.global sDspDacBufferCount__9JASDriver
sDspDacBufferCount__9JASDriver:
	.byte 0x3
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sSubFrames__9JASDriver
sSubFrames__9JASDriver:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x7
.global sMixMode__9JASDriver
sMixMode__9JASDriver:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x2
.global sDacRate__9JASDriver
sDacRate__9JASDriver:
	.byte 0x46
	.byte 0xFA
	.byte 0x39
	.byte 0x0
.global DSP_MIXERLEVEL
DSP_MIXERLEVEL:
	.byte 0x40
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global flags__Q27JAInter8BankWave
flags__Q27JAInter8BankWave:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global SceneSetFlag__Q27JAInter8BankWave
SceneSetFlag__Q27JAInter8BankWave:
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
.global initCallback__Q27JAInter8BankWave
initCallback__Q27JAInter8BankWave:
	.byte 0x80
	.byte 0xA
	.byte 0xBE
	.byte 0x5C
.global firstLoadCallback__Q27JAInter8BankWave
firstLoadCallback__Q27JAInter8BankWave:
	.byte 0x80
	.byte 0xA
	.byte 0xBF
	.byte 0xA4
.global secondLoadCallback__Q27JAInter8BankWave
secondLoadCallback__Q27JAInter8BankWave:
	.byte 0x80
	.byte 0xA
	.byte 0xC0
	.byte 0x38
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global msStopStatus__8JAIBasic
msStopStatus__8JAIBasic:
	.byte 0x3
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global distanceParameterMoveTime__18JAIGlobalParameter
distanceParameterMoveTime__18JAIGlobalParameter:
	.byte 0x3
.global audioSystemThreadPriority__18JAIGlobalParameter
audioSystemThreadPriority__18JAIGlobalParameter:
	.byte 0x2
.global audioDvdThreadPriority__18JAIGlobalParameter
audioDvdThreadPriority__18JAIGlobalParameter:
	.byte 0x3
.global seqMuteVolumeSePlay__18JAIGlobalParameter
seqMuteVolumeSePlay__18JAIGlobalParameter:
	.byte 0x28
.global seqParameterLines__18JAIGlobalParameter
seqParameterLines__18JAIGlobalParameter:
	.byte 0x7
.global streamParameterLines__18JAIGlobalParameter
streamParameterLines__18JAIGlobalParameter:
	.byte 0x7
.global seDistanceFxParameter__18JAIGlobalParameter
seDistanceFxParameter__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x96
.global soundSceneMax__18JAIGlobalParameter
soundSceneMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x2
.global seRegistMax__18JAIGlobalParameter
seRegistMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x14
.global seTrackMax__18JAIGlobalParameter
seTrackMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x20
.global seqTrackMax__18JAIGlobalParameter
seqTrackMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x20
.global seqPlayTrackMax__18JAIGlobalParameter
seqPlayTrackMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x8
.global seqControlBufferMax__18JAIGlobalParameter
seqControlBufferMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x8
.global autoHeapMax__18JAIGlobalParameter
autoHeapMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x2
.global stayHeapMax__18JAIGlobalParameter
stayHeapMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x2
.global autoHeapRoomSize__18JAIGlobalParameter
autoHeapRoomSize__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0xC0
	.byte 0x0
.global stayHeapSize__18JAIGlobalParameter
stayHeapSize__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x1
	.byte 0x0
	.byte 0x0
.global initDataFileName__18JAIGlobalParameter
initDataFileName__18JAIGlobalParameter:
	.byte 0x80
	.byte 0x47
	.byte 0x96
	.byte 0x88
.global wavePath__18JAIGlobalParameter
wavePath__18JAIGlobalParameter:
	.byte 0x80
	.byte 0x51
	.byte 0x6F
	.byte 0x28
.global sequenceArchivesPath__18JAIGlobalParameter
sequenceArchivesPath__18JAIGlobalParameter:
	.byte 0x80
	.byte 0x51
	.byte 0x6F
	.byte 0x30
.global streamPath__18JAIGlobalParameter
streamPath__18JAIGlobalParameter:
	.byte 0x80
	.byte 0x51
	.byte 0x6F
	.byte 0x38
.global audioResPath__18JAIGlobalParameter
audioResPath__18JAIGlobalParameter:
	.byte 0x80
	.byte 0x47
	.byte 0x96
	.byte 0x94
.global sequenceArchivesFileName__18JAIGlobalParameter
sequenceArchivesFileName__18JAIGlobalParameter:
	.byte 0x80
	.byte 0x47
	.byte 0x96
	.byte 0xA0
.global inputGainDown__18JAIGlobalParameter
inputGainDown__18JAIGlobalParameter:
	.byte 0x3F
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global outputGainUp__18JAIGlobalParameter
outputGainUp__18JAIGlobalParameter:
	.byte 0x3F
	.byte 0x99
	.byte 0x99
	.byte 0x9A
.global distanceMax__18JAIGlobalParameter
distanceMax__18JAIGlobalParameter:
	.byte 0x45
	.byte 0x9C
	.byte 0x40
	.byte 0x0
.global maxVolumeDistance__18JAIGlobalParameter
maxVolumeDistance__18JAIGlobalParameter:
	.byte 0x44
	.byte 0x7A
	.byte 0x0
	.byte 0x0
.global seDolbyCenterValue__18JAIGlobalParameter
seDolbyCenterValue__18JAIGlobalParameter:
	.byte 0x41
	.byte 0xF0
	.byte 0x0
	.byte 0x0
.global seDolbyFrontDistanceMax__18JAIGlobalParameter
seDolbyFrontDistanceMax__18JAIGlobalParameter:
	.byte 0xC3
	.byte 0x96
	.byte 0x0
	.byte 0x0
.global seDolbyBehindDistanceMax__18JAIGlobalParameter
seDolbyBehindDistanceMax__18JAIGlobalParameter:
	.byte 0x44
	.byte 0x7A
	.byte 0x0
	.byte 0x0
.global dopplarMoveTime__18JAIGlobalParameter
dopplarMoveTime__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0xF
.global dummyObjectLifeTime__18JAIGlobalParameter
dummyObjectLifeTime__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x2
	.byte 0x58
.global dummyObjectMax__18JAIGlobalParameter
dummyObjectMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0xA
.global seqMuteMoveSpeedSePlay__18JAIGlobalParameter
seqMuteMoveSpeedSePlay__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x3
.global audioCameraMax__18JAIGlobalParameter
audioCameraMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x1
.global systemTrackMax__18JAIGlobalParameter
systemTrackMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x1
	.byte 0x0
.global systemRootTrackMax__18JAIGlobalParameter
systemRootTrackMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x10
.global panDistanceMax__18JAIGlobalParameter
panDistanceMax__18JAIGlobalParameter:
	.byte 0x43
	.byte 0xFA
	.byte 0x0
	.byte 0x0
.global panDistance2Max__18JAIGlobalParameter
panDistance2Max__18JAIGlobalParameter:
	.byte 0x44
	.byte 0x7A
	.byte 0x0
	.byte 0x0
.global panAngleParameter__18JAIGlobalParameter
panAngleParameter__18JAIGlobalParameter:
	.byte 0x41
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global panAngleParameter2__18JAIGlobalParameter
panAngleParameter2__18JAIGlobalParameter:
	.byte 0x40
	.byte 0x19
	.byte 0x99
	.byte 0x9A
.global dopplarParameter__18JAIGlobalParameter
dopplarParameter__18JAIGlobalParameter:
	.byte 0x45
	.byte 0x48
	.byte 0x0
	.byte 0x0
.global seDistanceWaitMax__18JAIGlobalParameter
seDistanceWaitMax__18JAIGlobalParameter:
	.byte 0x0
	.byte 0xC
	.byte 0x0
	.byte 0x0
.global seDistancepitchMax__18JAIGlobalParameter
seDistancepitchMax__18JAIGlobalParameter:
	.byte 0x3E
	.byte 0x4C
	.byte 0xCC
	.byte 0xCD
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global wsInitCallback__Q27JAInter8InitData
wsInitCallback__Q27JAInter8InitData:
	.byte 0x80
	.byte 0xA
	.byte 0xDF
	.byte 0xC8
.global bnkInitCallback__Q27JAInter8InitData
bnkInitCallback__Q27JAInter8InitData:
	.byte 0x80
	.byte 0xA
	.byte 0xDE
	.byte 0xFC
.global seStartCallback__Q27JAInter5SeMgr
seStartCallback__Q27JAInter5SeMgr:
	.byte 0x80
	.byte 0xA
	.byte 0xE5
	.byte 0x7C
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sChannelMax__Q27JAInter9StreamMgr
sChannelMax__Q27JAInter9StreamMgr:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x2
.global decodedBufferBlocks__Q27JAInter9StreamMgr
decodedBufferBlocks__Q27JAInter9StreamMgr:
	.byte 0x0
	.byte 0x0
	.byte 0x27
	.byte 0x60
.global fragmentID
fragmentID:
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFE
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global $$2wstringBase0
$$2wstringBase0:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global next
next:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __float_nan
__float_nan:
	.byte 0x7F
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
.global __float_huge
__float_huge:
	.byte 0x7F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global __double_max
__double_max:
	.byte 0x7F
	.byte 0xEF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
.global __double_huge
__double_huge:
	.byte 0x7F
	.byte 0xF0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __extended_min
__extended_min:
	.byte 0x0
	.byte 0x10
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __extended_max
__extended_max:
	.byte 0x7F
	.byte 0xEF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
.global __float_max
__float_max:
	.byte 0x7F
	.byte 0x7F
	.byte 0xFF
	.byte 0xFF
.global __float_epsilon
__float_epsilon:
	.byte 0x34
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global SendCount
SendCount:
	.byte 0x80
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __VIVersion
__VIVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x72
	.byte 0xB0
.global lbl_805148EC
lbl_805148EC:
	.byte 0x76
	.byte 0x69
	.byte 0x2E
	.byte 0x63
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __ARVersion
__ARVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x76
	.byte 0x80
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __ARQVersion
__ARQVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x76
	.byte 0xC8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __CARDVersion
__CARDVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x77
	.byte 0x10
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global next_1
next_1:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __CARDVendorID
__CARDVendorID:
	.byte 0xFF
	.byte 0xFF
.global __CARDPermMask
__CARDPermMask:
	.byte 0x1C
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __DSPVersion
__DSPVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x79
	.byte 0x38
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global FirstRead
FirstRead:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global lbl_80514930
lbl_80514930:
	.byte 0x64
	.byte 0x76
	.byte 0x64
	.byte 0x66
	.byte 0x73
	.byte 0x2E
	.byte 0x63
	.byte 0x0
.global __DVDVersion
__DVDVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x7C
	.byte 0x98
.global autoInvalidation
autoInvalidation:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x1
.global checkOptionalCommand
checkOptionalCommand:
	.byte 0x80
	.byte 0xD
	.byte 0xCD
	.byte 0x28
.global lbl_80514944
lbl_80514944:
	.byte 0x64
	.byte 0x76
	.byte 0x64
	.byte 0x2E
	.byte 0x63
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global DmaCommand
DmaCommand:
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
.global lbl_80514950
lbl_80514950:
	.byte 0xA
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global lbl_80514954
lbl_80514954:
	.byte 0x4F
	.byte 0x46
	.byte 0x46
	.byte 0x0
.global lbl_80514958
lbl_80514958:
	.byte 0x4F
	.byte 0x4E
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __EXIVersion
__EXIVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x7E
	.byte 0xD0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __GXVersion
__GXVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x80
	.byte 0x60
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global tbl1$263
tbl1$263:
	.byte 0x0
	.byte 0x4
	.byte 0x1
	.byte 0x2
.global tbl2$264
tbl2$264:
	.byte 0x0
	.byte 0x8
	.byte 0x1
	.byte 0x2
.global tbl3$265
tbl3$265:
	.byte 0x0
	.byte 0xC
	.byte 0x1
	.byte 0x2
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global GXTexMode0Ids
GXTexMode0Ids:
	.byte 0x80
	.byte 0x81
	.byte 0x82
	.byte 0x83
	.byte 0xA0
	.byte 0xA1
	.byte 0xA2
	.byte 0xA3
.global GXTexMode1Ids
GXTexMode1Ids:
	.byte 0x84
	.byte 0x85
	.byte 0x86
	.byte 0x87
	.byte 0xA4
	.byte 0xA5
	.byte 0xA6
	.byte 0xA7
.global GXTexImage0Ids
GXTexImage0Ids:
	.byte 0x88
	.byte 0x89
	.byte 0x8A
	.byte 0x8B
	.byte 0xA8
	.byte 0xA9
	.byte 0xAA
	.byte 0xAB
.global GXTexImage1Ids
GXTexImage1Ids:
	.byte 0x8C
	.byte 0x8D
	.byte 0x8E
	.byte 0x8F
	.byte 0xAC
	.byte 0xAD
	.byte 0xAE
	.byte 0xAF
.global GXTexImage2Ids
GXTexImage2Ids:
	.byte 0x90
	.byte 0x91
	.byte 0x92
	.byte 0x93
	.byte 0xB0
	.byte 0xB1
	.byte 0xB2
	.byte 0xB3
.global GXTexImage3Ids
GXTexImage3Ids:
	.byte 0x94
	.byte 0x95
	.byte 0x96
	.byte 0x97
	.byte 0xB4
	.byte 0xB5
	.byte 0xB6
	.byte 0xB7
.global GXTexTlutIds
GXTexTlutIds:
	.byte 0x98
	.byte 0x99
	.byte 0x9A
	.byte 0x9B
	.byte 0xB8
	.byte 0xB9
	.byte 0xBA
	.byte 0xBB
.global GX2HWFiltConv_1
GX2HWFiltConv_1:
	.byte 0x0
	.byte 0x4
	.byte 0x1
	.byte 0x5
	.byte 0x2
	.byte 0x6
	.byte 0x0
	.byte 0x0
.global Unit01_1
Unit01_1:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global __OSVersion
__OSVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x89
	.byte 0x0
.global lbl_805149CC
lbl_805149CC:
	.byte 0x25
	.byte 0x30
	.byte 0x38
	.byte 0x78
	.byte 0xA
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global lbl_805149D4
lbl_805149D4:
	.byte 0x25
	.byte 0x73
	.byte 0xA
	.byte 0x0
.global __OSCurrHeap
__OSCurrHeap:
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __OSArenaLo
__OSArenaLo:
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __OSFpscrEnableBits
__OSFpscrEnableBits:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0xF8
.global lbl_805149EC
lbl_805149EC:
	.byte 0xA
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global fontEncode$80
fontEncode$80:
	.byte 0xFF
	.byte 0xFF
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global SwitchThreadCallback
SwitchThreadCallback:
	.byte 0x80
	.byte 0xF
	.byte 0x18
	.byte 0x58
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __PADVersion
__PADVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x9E
	.byte 0x60
.global ResettingChan
ResettingChan:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x20
.global XPatchBits
XPatchBits:
	.byte 0xF0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global AnalogMode
AnalogMode:
	.byte 0x0
	.byte 0x0
	.byte 0x3
	.byte 0x0
.global Spec
Spec:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x5
.global MakeStatus
MakeStatus:
	.byte 0x80
	.byte 0xF
	.byte 0x48
	.byte 0x2C
.global CmdReadOrigin
CmdReadOrigin:
	.byte 0x41
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global CmdCalibrate
CmdCalibrate:
	.byte 0x42
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __SIVersion
__SIVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0x9E
	.byte 0xB8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __AIVersion
__AIVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0xA0
	.byte 0x68
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __THPVersion
__THPVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0xA0
	.byte 0xB0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global __GBAVersion
__GBAVersion:
	.byte 0x80
	.byte 0x4A
	.byte 0xA0
	.byte 0xF8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cKochappyChangeTexName__Q34Game8Kochappy25$$2unnamed$$2kochappyMgr_cpp$$2
cKochappyChangeTexName__Q34Game8Kochappy25$$2unnamed$$2kochappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xAB
	.byte 0x44
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cChappyChangeTexName0__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2
cChappyChangeTexName0__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xAE
	.byte 0xD4
.global cChappyChangeTexName1__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2
cChappyChangeTexName1__Q34Game6Chappy23$$2unnamed$$2chappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xAE
	.byte 0xF8
.global gEnemyInfoNum__4Game
gEnemyInfoNum__4Game:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x64
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sStoneMdlName__27$$2unnamed$$2enemyStoneMgr_cpp$$2
sStoneMdlName__27$$2unnamed$$2enemyStoneMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xBE
	.byte 0x58
	.byte 0x80
	.byte 0x47
	.byte 0xBE
	.byte 0x6C
.global cChappyChangeTexName0__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2
cChappyChangeTexName0__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xBF
	.byte 0xC0
.global cChappyChangeTexName1__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2
cChappyChangeTexName1__Q34Game10BlueChappy27$$2unnamed$$2BlueChappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xBF
	.byte 0xE8
.global cChappyChangeTexName0__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2
cChappyChangeTexName0__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xC0
	.byte 0x30
.global cChappyChangeTexName1__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2
cChappyChangeTexName1__Q34Game12YellowChappy29$$2unnamed$$2YellowChappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xC0
	.byte 0x5C
.global cKochappyChangeTexName__Q34Game12BlueKochappy29$$2unnamed$$2BlueKochappyMgr_cpp$$2
cKochappyChangeTexName__Q34Game12BlueKochappy29$$2unnamed$$2BlueKochappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xC0
	.byte 0xC0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cKochappyChangeTexName__Q34Game14YellowKochappy31$$2unnamed$$2YellowKochappyMgr_cpp$$2
cKochappyChangeTexName__Q34Game14YellowKochappy31$$2unnamed$$2YellowKochappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x47
	.byte 0xC1
	.byte 0x10
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global usePacketCulling__Q24Game8Creature
usePacketCulling__Q24Game8Creature:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global kAngleSpeed__Q23efx7TCursor
kAngleSpeed__Q23efx7TCursor:
	.byte 0x3D
	.byte 0x56
	.byte 0x77
	.byte 0x50
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sOptDraw__Q24Game15BaseGameSection
sOptDraw__Q24Game15BaseGameSection:
	.byte 0x3
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sOptResolveColl__Q24Game11CellPyramid
sOptResolveColl__Q24Game11CellPyramid:
	.byte 0x2
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sCellBugName__Q24Game11CellPyramid
sCellBugName__Q24Game11CellPyramid:
	.byte 0x80
	.byte 0x51
	.byte 0x86
	.byte 0x40
.global sFromTekiEnable__Q24Game6Pellet
sFromTekiEnable__Q24Game6Pellet:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global newVer
newVer:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global maxBuffer__Q24Game8Stickers
maxBuffer__Q24Game8Stickers:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x6E
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global GeneratorCurrentVersion
GeneratorCurrentVersion:
	.byte 0x76
	.byte 0x30
	.byte 0x2E
	.byte 0x33
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sGraspSituationOptimise__Q24Game4Piki
sGraspSituationOptimise__Q24Game4Piki:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global useFixCollision__Q24Game12PlatInstance
useFixCollision__Q24Game12PlatInstance:
	.byte 0x1
.global mUseCellMgr__Q24Game7PlatMgr
mUseCellMgr__Q24Game7PlatMgr:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global enum_floor_hiddens__26$$2unnamed$$2gameCaveInfo_cpp$$2
enum_floor_hiddens__26$$2unnamed$$2gameCaveInfo_cpp$$2:
	.byte 0x80
	.byte 0x51
	.byte 0x96
	.byte 0xF0
	.byte 0x80
	.byte 0x51
	.byte 0x96
	.byte 0xF8
.global mTraceMoveOptLevel__Q24Game6MapMgr
mTraceMoveOptLevel__Q24Game6MapMgr:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mVersion__Q24Game8PlayData
mVersion__Q24Game8PlayData:
	.byte 0x6A
	.byte 0x30
	.byte 0x30
	.byte 0x39
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sEntryOpt__Q24Game12BaseHIOParms
sEntryOpt__Q24Game12BaseHIOParms:
	.byte 0x1
.global sEntryOptMapRoom__Q24Game12BaseHIOParms
sEntryOptMapRoom__Q24Game12BaseHIOParms:
	.byte 0x1
.global sDrawParticle__Q24Game12BaseHIOParms
sDrawParticle__Q24Game12BaseHIOParms:
	.byte 0x1
.global sMabikiEfx__Q24Game12BaseHIOParms
sMabikiEfx__Q24Game12BaseHIOParms:
	.byte 0x1
.global sMapRoomFinal__Q24Game12BaseHIOParms
sMapRoomFinal__Q24Game12BaseHIOParms:
	.byte 0x1
.global sTekiChappyFlag__Q24Game12BaseHIOParms
sTekiChappyFlag__Q24Game12BaseHIOParms:
	.byte 0x1
	.byte 0x0
	.byte 0x0
.global asArrayOtakara__4Game
asArrayOtakara__4Game:
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0xFF
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global cCoin__13VsOtakaraName
cCoin__13VsOtakaraName:
	.byte 0x80
	.byte 0x48
	.byte 0x3E
	.byte 0xE8
.global cBedamaBlue__13VsOtakaraName
cBedamaBlue__13VsOtakaraName:
	.byte 0x80
	.byte 0x48
	.byte 0x3E
	.byte 0xF4
.global cBedamaRed__13VsOtakaraName
cBedamaRed__13VsOtakaraName:
	.byte 0x80
	.byte 0x48
	.byte 0x3F
	.byte 0x4
.global cBedamaYellow__13VsOtakaraName
cBedamaYellow__13VsOtakaraName:
	.byte 0x80
	.byte 0x48
	.byte 0x3F
	.byte 0x14
.global cBedamaYellowDepth__13VsOtakaraName
cBedamaYellowDepth__13VsOtakaraName:
	.byte 0x41
	.byte 0xA0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cTankChangeTexName__Q34Game5Wtank22$$2unnamed$$2WtankMgr_cpp$$2
cTankChangeTexName__Q34Game5Wtank22$$2unnamed$$2WtankMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x70
	.byte 0x80
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cMatAnimBtkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2
cMatAnimBtkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x74
	.byte 0x34
.global cMatAnimBrkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2
cMatAnimBrkTexName__Q34Game3Mar20$$2unnamed$$2MarMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x74
	.byte 0x58
.global cKoganeChangeTexName__Q34Game7Wealthy24$$2unnamed$$2WealthyMgr_cpp$$2
cKoganeChangeTexName__Q34Game7Wealthy24$$2unnamed$$2WealthyMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x78
	.byte 0x48
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cKoganeChangeTexName__Q34Game4Fart21$$2unnamed$$2FartMgr_cpp$$2
cKoganeChangeTexName__Q34Game4Fart21$$2unnamed$$2FartMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x7B
	.byte 0xE8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cMatAnimBtkTexName__Q34Game5Queen22$$2unnamed$$2QueenMgr_cpp$$2
cMatAnimBtkTexName__Q34Game5Queen22$$2unnamed$$2QueenMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x7C
	.byte 0x68
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cMatAnimBtkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2
cMatAnimBtkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x83
	.byte 0x48
.global cMatAnimBrkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2
cMatAnimBrkTexName__Q34Game10FireChappy27$$2unnamed$$2FireChappyMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x83
	.byte 0x70
.global cKoganeChangeTexName__Q34Game11Koganemushi28$$2unnamed$$2KoganemushiMgr_cpp$$2
cKoganeChangeTexName__Q34Game11Koganemushi28$$2unnamed$$2KoganemushiMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x8F
	.byte 0xB8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cTankChangeTexName__Q34Game5Ftank22$$2unnamed$$2FtankMgr_cpp$$2
cTankChangeTexName__Q34Game5Ftank22$$2unnamed$$2FtankMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x90
	.byte 0x10
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cMatAnimBtkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2
cMatAnimBtkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x90
	.byte 0xCC
.global cMatAnimBrkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2
cMatAnimBrkTexName__Q34Game12Hanachirashi29$$2unnamed$$2HanachirashiMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x90
	.byte 0xFC
.global cMatAnimBtkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2
cMatAnimBtkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x94
	.byte 0xC8
.global cMatAnimBrkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2
cMatAnimBrkTexName__Q34Game8Damagumo25$$2unnamed$$2DamagumoMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0x94
	.byte 0xF0
.global cOtakaraChangeTexName__Q34Game11FireOtakara28$$2unnamed$$2FireOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game11FireOtakara28$$2unnamed$$2FireOtakaraMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xA3
	.byte 0xCC
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cOtakaraChangeTexName__Q34Game12WaterOtakara29$$2unnamed$$2WaterOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game12WaterOtakara29$$2unnamed$$2WaterOtakaraMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xA7
	.byte 0x60
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cOtakaraChangeTexName__Q34Game10GasOtakara27$$2unnamed$$2GasOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game10GasOtakara27$$2unnamed$$2GasOtakaraMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xA7
	.byte 0xD0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cOtakaraChangeTexName__Q34Game11ElecOtakara28$$2unnamed$$2ElecOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game11ElecOtakara28$$2unnamed$$2ElecOtakaraMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xA8
	.byte 0x40
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cMatAnimBrkTexName__Q34Game7BigFoot24$$2unnamed$$2BigFootMgr_cpp$$2
cMatAnimBrkTexName__Q34Game7BigFoot24$$2unnamed$$2BigFootMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xB2
	.byte 0x28
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cOtakaraChangeTexName__Q34Game11BombOtakara28$$2unnamed$$2BombOtakaraMgr_cpp$$2
cOtakaraChangeTexName__Q34Game11BombOtakara28$$2unnamed$$2BombOtakaraMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xD3
	.byte 0xD8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cMatAnimBrkTexName__Q34Game10DangoMushi27$$2unnamed$$2DangoMushiMgr_cpp$$2
cMatAnimBrkTexName__Q34Game10DangoMushi27$$2unnamed$$2DangoMushiMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xD4
	.byte 0x5C
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cKabutoChangeTexName__Q34Game11GreenKabuto28$$2unnamed$$2GreenKabutoMgr_cpp$$2
cKabutoChangeTexName__Q34Game11GreenKabuto28$$2unnamed$$2GreenKabutoMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xD8
	.byte 0x10
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cKabutoChangeTexName__Q34Game9RedKabuto26$$2unnamed$$2RedKabutoMgr_cpp$$2
cKabutoChangeTexName__Q34Game9RedKabuto26$$2unnamed$$2RedKabutoMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xD8
	.byte 0x90
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cKabutoChangeTexName__Q34Game9FixKabuto26$$2unnamed$$2FixKabutoMgr_cpp$$2
cKabutoChangeTexName__Q34Game9FixKabuto26$$2unnamed$$2FixKabutoMgr_cpp$$2:
	.byte 0x80
	.byte 0x48
	.byte 0xD8
	.byte 0xF8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sDistanceParameterMoveTime__8PSSystem
sDistanceParameterMoveTime__8PSSystem:
	.byte 0x5
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cRatio__Q26PSGame5Rappa
cRatio__Q26PSGame5Rappa:
	.byte 0x41
	.byte 0x70
	.byte 0x0
	.byte 0x0
.global cBaseWaitTime__Q26PSGame5Rappa
cBaseWaitTime__Q26PSGame5Rappa:
	.byte 0x0
	.byte 0x3
	.byte 0x0
	.byte 0x0
.global sRappa__Q26PSGame5Rappa
sRappa__Q26PSGame5Rappa:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cNotUsingMasterIdRatio__Q26PSGame6RandId
cNotUsingMasterIdRatio__Q26PSGame6RandId:
	.byte 0xBF
	.byte 0x80
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mWaitTime__Q28Morimura12TDayEndCount
mWaitTime__Q28Morimura12TDayEndCount:
	.byte 0x3E
	.byte 0xCC
	.byte 0xCC
	.byte 0xCD
.global mAlphaMax__Q28Morimura12TDayEndCount
mAlphaMax__Q28Morimura12TDayEndCount:
	.byte 0xC8
.global mWaitAlpha__Q28Morimura12TDayEndCount
mWaitAlpha__Q28Morimura12TDayEndCount:
	.byte 0x64
	.byte 0x0
	.byte 0x0
.global mWaitScale__Q28Morimura12TDayEndCount
mWaitScale__Q28Morimura12TDayEndCount:
	.byte 0x3E
	.byte 0x4C
	.byte 0xCC
	.byte 0xCD
.global mStopScale__Q28Morimura12TDayEndCount
mStopScale__Q28Morimura12TDayEndCount:
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global mScaleMax__Q28Morimura12TDayEndCount
mScaleMax__Q28Morimura12TDayEndCount:
	.byte 0x40
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global m2pScale__Q28Morimura12TDayEndCount
m2pScale__Q28Morimura12TDayEndCount:
	.byte 0x3F
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global m2pOffsetY__Q28Morimura12TDayEndCount
m2pOffsetY__Q28Morimura12TDayEndCount:
	.byte 0x43
	.byte 0x2A
	.byte 0x0
	.byte 0x0
.global mColor__Q28Morimura12TDayEndCount
mColor__Q28Morimura12TDayEndCount:
	.byte 0x0
	.byte 0xFF
	.byte 0x0
	.byte 0xFF
.global mNumberColor__Q28Morimura12TDayEndCount
mNumberColor__Q28Morimura12TDayEndCount:
	.byte 0xFF
	.byte 0x64
	.byte 0x0
	.byte 0xFF
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mInitPosX__Q28Morimura10THurryUp2D
mInitPosX__Q28Morimura10THurryUp2D:
	.byte 0x44
	.byte 0x61
	.byte 0x0
	.byte 0x0
.global mMoveSp__Q28Morimura10THurryUp2D
mMoveSp__Q28Morimura10THurryUp2D:
	.byte 0x41
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global mScaleSp1__Q28Morimura10THurryUp2D
mScaleSp1__Q28Morimura10THurryUp2D:
	.byte 0x3C
	.byte 0x23
	.byte 0xD7
	.byte 0xA
.global mScaleSp2__Q28Morimura10THurryUp2D
mScaleSp2__Q28Morimura10THurryUp2D:
	.byte 0x3D
	.byte 0xCC
	.byte 0xCC
	.byte 0xCD
.global mScaleRate__Q28Morimura10THurryUp2D
mScaleRate__Q28Morimura10THurryUp2D:
	.byte 0x3F
	.byte 0x82
	.byte 0x8F
	.byte 0x5C
.global mColorUpSp__Q28Morimura10THurryUp2D
mColorUpSp__Q28Morimura10THurryUp2D:
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global mRequestTimerMax__Q28Morimura10TZukanBase
mRequestTimerMax__Q28Morimura10TZukanBase:
	.byte 0x0
	.byte 0xA
.global mIconMove__Q28Morimura10TZukanBase
mIconMove__Q28Morimura10TZukanBase:
	.byte 0x1
	.byte 0x0
.global mLineSpace__Q28Morimura10TZukanBase
mLineSpace__Q28Morimura10TZukanBase:
	.byte 0x42
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global mWarpRadius__Q28Morimura10TZukanBase
mWarpRadius__Q28Morimura10TZukanBase:
	.byte 0x41
	.byte 0x70
	.byte 0x0
	.byte 0x0
.global mScrollValueCoe__Q28Morimura10TZukanBase
mScrollValueCoe__Q28Morimura10TZukanBase:
	.byte 0x40
	.byte 0x60
	.byte 0x0
	.byte 0x0
.global mScrollSpeedCoe__Q28Morimura10TZukanBase
mScrollSpeedCoe__Q28Morimura10TZukanBase:
	.byte 0x3D
	.byte 0xA3
	.byte 0xD7
	.byte 0xA
.global mNewScale__Q28Morimura10TZukanBase
mNewScale__Q28Morimura10TZukanBase:
	.byte 0x3F
	.byte 0x33
	.byte 0x33
	.byte 0x33
.global mPodIconOffsetX__Q28Morimura10TZukanBase
mPodIconOffsetX__Q28Morimura10TZukanBase:
	.byte 0x43
	.byte 0xF0
	.byte 0x0
	.byte 0x0
.global mLargeCategoryScale__Q28Morimura10TZukanBase
mLargeCategoryScale__Q28Morimura10TZukanBase:
	.byte 0x40
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mCategoryAlphaRate__Q28Morimura10TZukanBase
mCategoryAlphaRate__Q28Morimura10TZukanBase:
	.byte 0x3F
	.byte 0x19
	.byte 0x99
	.byte 0x9A
.global mDrawLineType__Q28Morimura10TZukanBase
mDrawLineType__Q28Morimura10TZukanBase:
	.byte 0x2
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mPictureOffsetY__Q28Morimura8THiScore
mPictureOffsetY__Q28Morimura8THiScore:
	.byte 0xC1
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mChangeAlpha__Q28Morimura8THiScore
mChangeAlpha__Q28Morimura8THiScore:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mListOffsetY__Q28Morimura8THiScore
mListOffsetY__Q28Morimura8THiScore:
	.byte 0x41
	.byte 0xC8
	.byte 0x0
	.byte 0x0
.global mClearListHeightRate__Q28Morimura8THiScore
mClearListHeightRate__Q28Morimura8THiScore:
	.byte 0x3F
	.byte 0xC6
	.byte 0x66
	.byte 0x66
.global mSelected1p__Q28Morimura16TChallengeSelect
mSelected1p__Q28Morimura16TChallengeSelect:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mAlphaSpeed__Q28Morimura16TChallengeSelect
mAlphaSpeed__Q28Morimura16TChallengeSelect:
	.byte 0x3D
	.byte 0x4C
	.byte 0xCC
	.byte 0xCD
.global mFlashAnimInterval__Q28Morimura16TChallengeSelect
mFlashAnimInterval__Q28Morimura16TChallengeSelect:
	.byte 0x1
	.byte 0x2C
	.byte 0x0
	.byte 0x0
.global mTextFlashVal__Q28Morimura16TChallengeSelect
mTextFlashVal__Q28Morimura16TChallengeSelect:
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global mConnect2p__Q28Morimura16TChallengeSelect
mConnect2p__Q28Morimura16TChallengeSelect:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mPanelMoveVal__Q28Morimura16TChallengeSelect
mPanelMoveVal__Q28Morimura16TChallengeSelect:
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global mPanelMoveRate__Q28Morimura16TChallengeSelect
mPanelMoveRate__Q28Morimura16TChallengeSelect:
	.byte 0x3E
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global mCircleY__Q28Morimura16TChallengeSelect
mCircleY__Q28Morimura16TChallengeSelect:
	.byte 0x42
	.byte 0xC8
	.byte 0x0
	.byte 0x0
.global mTimerSpeed__Q28Morimura16TChallengeSelect
mTimerSpeed__Q28Morimura16TChallengeSelect:
	.byte 0x3E
	.byte 0x19
	.byte 0x99
	.byte 0x9A
.global mMoveSpeed__Q28Morimura16TChallengeSelect
mMoveSpeed__Q28Morimura16TChallengeSelect:
	.byte 0x41
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global mSelectIconScale__Q28Morimura16TChallengeSelect
mSelectIconScale__Q28Morimura16TChallengeSelect:
	.byte 0x3F
	.byte 0xC0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mMoveSpeed__Q28Morimura16TChallengeResult
mMoveSpeed__Q28Morimura16TChallengeResult:
	.byte 0x41
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global mAngRate__Q28Morimura16TChallengeResult
mAngRate__Q28Morimura16TChallengeResult:
	.byte 0x3E
	.byte 0x99
	.byte 0x99
	.byte 0x9A
.global mAngVelMax__Q28Morimura16TChallengeResult
mAngVelMax__Q28Morimura16TChallengeResult:
	.byte 0x41
	.byte 0xA0
	.byte 0x0
	.byte 0x0
.global mAccel__Q28Morimura16TChallengeResult
mAccel__Q28Morimura16TChallengeResult:
	.byte 0x3D
	.byte 0xCC
	.byte 0xCC
	.byte 0xCD
.global mTestDemo__Q28Morimura16TChallengeResult
mTestDemo__Q28Morimura16TChallengeResult:
	.byte 0x1
.global mComplete__Q28Morimura16TChallengeResult
mComplete__Q28Morimura16TChallengeResult:
	.byte 0x1
.global mTestRankInOrder__Q28Morimura16TChallengeResult
mTestRankInOrder__Q28Morimura16TChallengeResult:
	.byte 0xFF
	.byte 0xFF
.global mFlashInterval__Q28Morimura16TChallengeResult
mFlashInterval__Q28Morimura16TChallengeResult:
	.byte 0x42
	.byte 0x20
	.byte 0x0
	.byte 0x0
.global mDemoSpeedUpRate__Q28Morimura16TChallengeResult
mDemoSpeedUpRate__Q28Morimura16TChallengeResult:
	.byte 0x40
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mDemoSpeedUpMax__Q28Morimura16TChallengeResult
mDemoSpeedUpMax__Q28Morimura16TChallengeResult:
	.byte 0x40
	.byte 0x40
	.byte 0x0
	.byte 0x0
.global mFlashColor__Q28Morimura16TChallengeResult
mFlashColor__Q28Morimura16TChallengeResult:
	.byte 0xFF
	.byte 0xFF
	.byte 0x0
	.byte 0xFF
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mAngRate__Q28Morimura9TVsSelect
mAngRate__Q28Morimura9TVsSelect:
	.byte 0x3E
	.byte 0x4C
	.byte 0xCC
	.byte 0xCD
.global mMoveSpeed__Q28Morimura9TVsSelect
mMoveSpeed__Q28Morimura9TVsSelect:
	.byte 0x41
	.byte 0xC8
	.byte 0x0
	.byte 0x0
.global mIndVal__Q28Morimura9TVsSelect
mIndVal__Q28Morimura9TVsSelect:
	.byte 0x3D
	.byte 0x4C
	.byte 0xCC
	.byte 0xCD
.global mIndShuki__Q28Morimura9TVsSelect
mIndShuki__Q28Morimura9TVsSelect:
	.byte 0x3E
	.byte 0x99
	.byte 0x99
	.byte 0x9A
.global mZoomFrameMax__Q28Morimura9TVsSelect
mZoomFrameMax__Q28Morimura9TVsSelect:
	.byte 0x41
	.byte 0xC8
	.byte 0x0
	.byte 0x0
.global mTestVal__Q28Morimura9TVsSelect
mTestVal__Q28Morimura9TVsSelect:
	.byte 0x41
	.byte 0x20
	.byte 0x0
	.byte 0x0
.global mAngUp__Q28Morimura9TVsSelect
mAngUp__Q28Morimura9TVsSelect:
	.byte 0x3C
	.byte 0xF5
	.byte 0xC2
	.byte 0x8F
.global mWindowScale__Q28Morimura9TVsSelect
mWindowScale__Q28Morimura9TVsSelect:
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global mDemoScaleMax__Q28Morimura9TVsSelect
mDemoScaleMax__Q28Morimura9TVsSelect:
	.byte 0x40
	.byte 0xC
	.byte 0xCC
	.byte 0xCD
.global mDemoScale__Q28Morimura9TVsSelect
mDemoScale__Q28Morimura9TVsSelect:
	.byte 0x3F
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global mDemoOffsetMax__Q28Morimura9TVsSelect
mDemoOffsetMax__Q28Morimura9TVsSelect:
	.byte 0x43
	.byte 0x91
	.byte 0x0
	.byte 0x0
.global mFireAlphaRate__Q28Morimura9TVsSelect
mFireAlphaRate__Q28Morimura9TVsSelect:
	.byte 0x3F
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mWideWindow__Q28Morimura11TScrollList
mWideWindow__Q28Morimura11TScrollList:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global mClipRadiusS__11ParticleMgr
mClipRadiusS__11ParticleMgr:
	.byte 0x41
	.byte 0x20
	.byte 0x0
	.byte 0x0
.global mClipRadiusM__11ParticleMgr
mClipRadiusM__11ParticleMgr:
	.byte 0x41
	.byte 0xF0
	.byte 0x0
	.byte 0x0
.global mClipRadiusL__11ParticleMgr
mClipRadiusL__11ParticleMgr:
	.byte 0x42
	.byte 0xC8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cInitialCode__Q23ebi11CardEReader
cInitialCode__Q23ebi11CardEReader:
	.byte 0x50
	.byte 0x53
	.byte 0x41
	.byte 0x4A
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sUseABXCommand
sUseABXCommand:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cMapFileName
cMapFileName:
	.byte 0x80
	.byte 0x49
	.byte 0x98
	.byte 0xE8
.global mActiveSectionFlag__8GameFlow
mActiveSectionFlag__8GameFlow:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x15
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global viewCalcMode__Q28SysShape5Model
viewCalcMode__Q28SysShape5Model:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cFileName__Q24Game10MemoryCard
cFileName__Q24Game10MemoryCard:
	.byte 0x80
	.byte 0x49
	.byte 0xAD
	.byte 0xB8
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sTinyPikminNum__13TinyPikminMgr
sTinyPikminNum__13TinyPikminMgr:
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0xA
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sMovieIndex__26$$2unnamed$$2titleSection_cpp$$2
sMovieIndex__26$$2unnamed$$2titleSection_cpp$$2:
	.byte 0x0
	.byte 0x2
	.byte 0x4
	.byte 0x1
	.byte 0x3
	.byte 0xB
	.byte 0xB
.global sSeasonIndex__26$$2unnamed$$2titleSection_cpp$$2
sSeasonIndex__26$$2unnamed$$2titleSection_cpp$$2:
	.byte 0xFF
.global sMovieIndexTable__Q24Demo25$$2unnamed$$2demoSection_cpp$$2
sMovieIndexTable__Q24Demo25$$2unnamed$$2demoSection_cpp$$2:
	.byte 0x5
	.byte 0x6
	.byte 0x7
	.byte 0x0
	.byte 0x8
	.byte 0x9
	.byte 0xA
	.byte 0x0
.global sMovieIndex__Q24Demo25$$2unnamed$$2demoSection_cpp$$2
sMovieIndex__Q24Demo25$$2unnamed$$2demoSection_cpp$$2:
	.byte 0xFF
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sTreasureLader_PitchDistance
sTreasureLader_PitchDistance:
	.byte 0x3F
	.byte 0x45
	.byte 0x1E
	.byte 0xB8
.global sTreasureLader_Pitch
sTreasureLader_Pitch:
	.byte 0x3F
	.byte 0x85
	.byte 0x1E
	.byte 0xB8
.global sTreasureLader_DistanceExp
sTreasureLader_DistanceExp:
	.byte 0x40
	.byte 0xA0
	.byte 0x0
	.byte 0x0
.global sTreasureLader_MinimumVolume
sTreasureLader_MinimumVolume:
	.byte 0x3E
	.byte 0x99
	.byte 0x99
	.byte 0x9A
.global sLaderNoiseVolumeExp
sLaderNoiseVolumeExp:
	.byte 0x40
	.byte 0xE5
	.byte 0xC2
	.byte 0x8F
.global sLaderNoiseFuefukiTimerCenter
sLaderNoiseFuefukiTimerCenter:
	.byte 0x0
	.byte 0x3C
.global sLaderNoiseFuefukiTimerRandam
sLaderNoiseFuefukiTimerRandam:
	.byte 0x0
	.byte 0x8
.global sLaderNoiseFuefukiSensMax
sLaderNoiseFuefukiSensMax:
	.byte 0x3E
	.byte 0x99
	.byte 0x99
	.byte 0x9A
.global sLaderNoiseFuefukiVolumeMin
sLaderNoiseFuefukiVolumeMin:
	.byte 0x3E
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global sLaderNoiseFuefukiVolumeMax
sLaderNoiseFuefukiVolumeMax:
	.byte 0x3F
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global cDol_0Rad__Q23PSM7SeSound
cDol_0Rad__Q23PSM7SeSound:
	.byte 0x3F
	.byte 0x84
	.byte 0xB
	.byte 0x78
.global cDol_HalfRad__Q23PSM7SeSound
cDol_HalfRad__Q23PSM7SeSound:
	.byte 0x3F
	.byte 0xC9
	.byte 0xF
	.byte 0xF9
.global cDol_FullRad__Q23PSM7SeSound
cDol_FullRad__Q23PSM7SeSound:
	.byte 0x40
	.byte 0x7
	.byte 0xA
	.byte 0x3D
.global cPan_MaxAmp__Q23PSM7SeSound
cPan_MaxAmp__Q23PSM7SeSound:
	.byte 0x3F
	.byte 0x7A
	.byte 0xE1
	.byte 0x48
.global cCenterRad__Q23PSM7SeSound
cCenterRad__Q23PSM7SeSound:
	.byte 0x3F
	.byte 0xC8
	.byte 0xF5
	.byte 0xC3
	.byte 0x0
	.byte 0x0
	.byte 0x0
	.byte 0x0
.global sCamFov__3PSM
sCamFov__3PSM:
	.byte 0x3E
	.byte 0x80
	.byte 0x0
	.byte 0x0
.global sBoss_ViewDist__3PSM
sBoss_ViewDist__3PSM:
	.byte 0x44
	.byte 0xA2
	.byte 0x80
	.byte 0x0
.global sBoss_ViewDistVol__3PSM
sBoss_ViewDistVol__3PSM:
	.byte 0x3E
	.byte 0x99
	.byte 0x99
	.byte 0x9A
.global sBoss_DistMax__3PSM
sBoss_DistMax__3PSM:
	.byte 0x45
	.byte 0x7A
	.byte 0x0
	.byte 0x0
