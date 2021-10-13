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
.global "sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"
"sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@":
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
	.4byte sNoUseDrawMtx__12J3DMtxBuffer
.global sNoUseNrmMtxPtr__12J3DMtxBuffer
sNoUseNrmMtxPtr__12J3DMtxBuffer:
	.4byte sNoUseNrmMtx__12J3DMtxBuffer
.global J3DUnit01
J3DUnit01:
	.4byte 0x00000000
	.float 1.0
.global maxStdHeaps__Q29JFWSystem11CSetUpParam
maxStdHeaps__Q29JFWSystem11CSetUpParam:
	.4byte 2
.global sysHeapSize__Q29JFWSystem11CSetUpParam
sysHeapSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00400000
.global fifoBufSize__Q29JFWSystem11CSetUpParam
fifoBufSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00040000
.global aramAudioBufSize__Q29JFWSystem11CSetUpParam
aramAudioBufSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00800000
.global aramGraphBufSize__Q29JFWSystem11CSetUpParam
aramGraphBufSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x00600000
.global streamPriority__Q29JFWSystem11CSetUpParam
streamPriority__Q29JFWSystem11CSetUpParam:
	.4byte 0x00000008
.global decompPriority__Q29JFWSystem11CSetUpParam
decompPriority__Q29JFWSystem11CSetUpParam:
	.4byte 0x00000007
.global aPiecePriority__Q29JFWSystem11CSetUpParam
aPiecePriority__Q29JFWSystem11CSetUpParam:
	.4byte 0x00000006
.global systemFontRes__Q29JFWSystem11CSetUpParam
systemFontRes__Q29JFWSystem11CSetUpParam:
	.4byte 0x804742C0
.global renderMode__Q29JFWSystem11CSetUpParam
renderMode__Q29JFWSystem11CSetUpParam:
	.4byte GXNtsc480IntDf
.global exConsoleBufferSize__Q29JFWSystem11CSetUpParam
exConsoleBufferSize__Q29JFWSystem11CSetUpParam:
	.4byte 0x000024FC
	.4byte 0x00000000
.global p_dl
p_dl:
	.4byte jpa_dl
	.4byte jpa_dl_x
.global zz_80514788
zz_80514788:
	.double 0.0078125
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
	.4byte 0x09050810
	.4byte 0x01010101
.global sDspDacBufferCount__9JASDriver
sDspDacBufferCount__9JASDriver:
	.4byte 0x03000000
.global sSubFrames__9JASDriver
sSubFrames__9JASDriver:
	.4byte 0x00000007
.global sMixMode__9JASDriver
sMixMode__9JASDriver:
	.4byte 0x00000002
.global sDacRate__9JASDriver
sDacRate__9JASDriver:
	.4byte 0x46FA3900
.global DSP_MIXERLEVEL
DSP_MIXERLEVEL:
	.4byte 0x40000000
	.4byte 0x00000000
.global flags__Q27JAInter8BankWave
flags__Q27JAInter8BankWave:
	.4byte 0x00000000
.global SceneSetFlag__Q27JAInter8BankWave
SceneSetFlag__Q27JAInter8BankWave:
	.4byte 0xFFFFFFFF
.global initCallback__Q27JAInter8BankWave
initCallback__Q27JAInter8BankWave:
	.4byte init__Q27JAInter8BankWaveFv
.global firstLoadCallback__Q27JAInter8BankWave
firstLoadCallback__Q27JAInter8BankWave:
	.4byte loadFirstStayWave__Q27JAInter8BankWaveFv
.global secondLoadCallback__Q27JAInter8BankWave
secondLoadCallback__Q27JAInter8BankWave:
	.4byte loadSecondStayWave__Q27JAInter8BankWaveFv
	.4byte 0x00000000
.global msStopStatus__8JAIBasic
msStopStatus__8JAIBasic:
	.4byte 0x03000000
	.4byte 0x00000000
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
	.4byte 0x00000002
.global seRegistMax__18JAIGlobalParameter
seRegistMax__18JAIGlobalParameter:
	.4byte 0x00000014
.global seTrackMax__18JAIGlobalParameter
seTrackMax__18JAIGlobalParameter:
	.4byte 0x00000020
.global seqTrackMax__18JAIGlobalParameter
seqTrackMax__18JAIGlobalParameter:
	.4byte 0x00000020
.global seqPlayTrackMax__18JAIGlobalParameter
seqPlayTrackMax__18JAIGlobalParameter:
	.4byte 0x00000008
.global seqControlBufferMax__18JAIGlobalParameter
seqControlBufferMax__18JAIGlobalParameter:
	.4byte 0x00000008
.global autoHeapMax__18JAIGlobalParameter
autoHeapMax__18JAIGlobalParameter:
	.4byte 0x00000002
.global stayHeapMax__18JAIGlobalParameter
stayHeapMax__18JAIGlobalParameter:
	.4byte 0x00000002
.global autoHeapRoomSize__18JAIGlobalParameter
autoHeapRoomSize__18JAIGlobalParameter:
	.4byte 0x0000C000
.global stayHeapSize__18JAIGlobalParameter
stayHeapSize__18JAIGlobalParameter:
	.4byte 0x00010000
.global initDataFileName__18JAIGlobalParameter
initDataFileName__18JAIGlobalParameter:
	.4byte 0x80479688
.global wavePath__18JAIGlobalParameter
wavePath__18JAIGlobalParameter:
	.4byte 0x80516F28
.global sequenceArchivesPath__18JAIGlobalParameter
sequenceArchivesPath__18JAIGlobalParameter:
	.4byte 0x80516F30
.global streamPath__18JAIGlobalParameter
streamPath__18JAIGlobalParameter:
	.4byte 0x80516F38
.global audioResPath__18JAIGlobalParameter
audioResPath__18JAIGlobalParameter:
	.4byte 0x80479694
.global sequenceArchivesFileName__18JAIGlobalParameter
sequenceArchivesFileName__18JAIGlobalParameter:
	.4byte 0x804796A0
.global inputGainDown__18JAIGlobalParameter
inputGainDown__18JAIGlobalParameter:
	.float 0.5
.global outputGainUp__18JAIGlobalParameter
outputGainUp__18JAIGlobalParameter:
	.float 1.2
.global distanceMax__18JAIGlobalParameter
distanceMax__18JAIGlobalParameter:
	.4byte 0x459C4000
.global maxVolumeDistance__18JAIGlobalParameter
maxVolumeDistance__18JAIGlobalParameter:
	.4byte 0x447A0000
.global seDolbyCenterValue__18JAIGlobalParameter
seDolbyCenterValue__18JAIGlobalParameter:
	.4byte 0x41F00000
.global seDolbyFrontDistanceMax__18JAIGlobalParameter
seDolbyFrontDistanceMax__18JAIGlobalParameter:
	.4byte 0xC3960000
.global seDolbyBehindDistanceMax__18JAIGlobalParameter
seDolbyBehindDistanceMax__18JAIGlobalParameter:
	.4byte 0x447A0000
.global dopplarMoveTime__18JAIGlobalParameter
dopplarMoveTime__18JAIGlobalParameter:
	.4byte 0x0000000F
.global dummyObjectLifeTime__18JAIGlobalParameter
dummyObjectLifeTime__18JAIGlobalParameter:
	.4byte 0x00000258
.global dummyObjectMax__18JAIGlobalParameter
dummyObjectMax__18JAIGlobalParameter:
	.4byte 0x0000000A
.global seqMuteMoveSpeedSePlay__18JAIGlobalParameter
seqMuteMoveSpeedSePlay__18JAIGlobalParameter:
	.4byte 0x00000003
.global audioCameraMax__18JAIGlobalParameter
audioCameraMax__18JAIGlobalParameter:
	.4byte 0x00000001
.global systemTrackMax__18JAIGlobalParameter
systemTrackMax__18JAIGlobalParameter:
	.4byte 0x00000100
.global systemRootTrackMax__18JAIGlobalParameter
systemRootTrackMax__18JAIGlobalParameter:
	.4byte 0x00000010
.global panDistanceMax__18JAIGlobalParameter
panDistanceMax__18JAIGlobalParameter:
	.4byte 0x43FA0000
.global panDistance2Max__18JAIGlobalParameter
panDistance2Max__18JAIGlobalParameter:
	.4byte 0x447A0000
.global panAngleParameter__18JAIGlobalParameter
panAngleParameter__18JAIGlobalParameter:
	.4byte 0x41400000
.global panAngleParameter2__18JAIGlobalParameter
panAngleParameter2__18JAIGlobalParameter:
	.4byte 0x4019999A
.global dopplarParameter__18JAIGlobalParameter
dopplarParameter__18JAIGlobalParameter:
	.4byte 0x45480000
.global seDistanceWaitMax__18JAIGlobalParameter
seDistanceWaitMax__18JAIGlobalParameter:
	.4byte 0x000C0000
.global seDistancepitchMax__18JAIGlobalParameter
seDistancepitchMax__18JAIGlobalParameter:
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
.global wsInitCallback__Q27JAInter8InitData
wsInitCallback__Q27JAInter8InitData:
	.4byte 0x800ADFC8
.global bnkInitCallback__Q27JAInter8InitData
bnkInitCallback__Q27JAInter8InitData:
	.4byte 0x800ADEFC
.global seStartCallback__Q27JAInter5SeMgr
seStartCallback__Q27JAInter5SeMgr:
	.4byte 0x800AE57C
	.4byte 0x00000000
.global sChannelMax__Q27JAInter9StreamMgr
sChannelMax__Q27JAInter9StreamMgr:
	.4byte 0x00000002
.global decodedBufferBlocks__Q27JAInter9StreamMgr
decodedBufferBlocks__Q27JAInter9StreamMgr:
	.4byte 0x00002760
.global fragmentID
fragmentID:
	.4byte 0xFFFFFFFE
	.4byte 0x00000000
.global "@wstringBase0"
"@wstringBase0":
	.4byte 0x00000000
	.4byte 0x00000000
.global next
next:
	.4byte 0x00000001
	.4byte 0x00000000
.global __float_nan
__float_nan:
	.4byte 0x7FFFFFFF
.global __float_huge
__float_huge:
	.4byte 0x7F800000
.global __double_max
__double_max:
	.4byte 0x7FEFFFFF
	.4byte 0xFFFFFFFF
.global __double_huge
__double_huge:
	.4byte 0x7FF00000
	.4byte 0x00000000
.global __extended_min
__extended_min:
	.4byte 0x00100000
	.4byte 0x00000000
.global __extended_max
__extended_max:
	.4byte 0x7FEFFFFF
	.4byte 0xFFFFFFFF
.global __float_max
__float_max:
	.4byte 0x7F7FFFFF
.global __float_epsilon
__float_epsilon:
	.4byte 0x34000000
.global SendCount
SendCount:
	.4byte 0x80000000
	.4byte 0x00000000
.global __VIVersion
__VIVersion:
	.4byte 0x804A72B0
.global lbl_805148EC
lbl_805148EC:
	.4byte 0x76692E63
	.4byte 0x00000000
	.4byte 0x00000000
.global __ARVersion
__ARVersion:
	.4byte 0x804A7680
	.4byte 0x00000000
.global __ARQVersion
__ARQVersion:
	.4byte 0x804A76C8
	.4byte 0x00000000
.global __CARDVersion
__CARDVersion:
	.4byte 0x804A7710
	.4byte 0x00000000
.global next_1
next_1:
	.4byte 0x00000001
	.4byte 0x00000000
.global __CARDVendorID
__CARDVendorID:
	.byte 0xFF
	.byte 0xFF
.global __CARDPermMask
__CARDPermMask:
	.byte 0x1C
	.byte 0x0
	.4byte 0x00000000
.global __DSPVersion
__DSPVersion:
	.4byte lbl_804A7938
	.4byte 0x00000000
.global FirstRead
FirstRead:
	.4byte 0x00000001
	.4byte 0x00000000
.global lbl_80514930
lbl_80514930:
	.4byte 0x64766466
	.4byte 0x732E6300
.global __DVDVersion
__DVDVersion:
	.4byte 0x804A7C98
.global autoInvalidation
autoInvalidation:
	.4byte 0x00000001
.global checkOptionalCommand
checkOptionalCommand:
	.4byte 0x800DCD28
.global lbl_80514944
lbl_80514944:
	.4byte 0x6476642E
	.4byte 0x63000000
.global DmaCommand
DmaCommand:
	.4byte 0xFFFFFFFF
.global lbl_80514950
lbl_80514950:
	.4byte 0x0A000000
.global lbl_80514954
lbl_80514954:
	.4byte 0x4F464600
.global lbl_80514958
lbl_80514958:
	.4byte 0x4F4E0000
	.4byte 0x00000000
.global __EXIVersion
__EXIVersion:
	.4byte 0x804A7ED0
	.4byte 0x00000000
.global __GXVersion
__GXVersion:
	.4byte 0x804A8060
	.4byte 0x00000000
.global tbl1$263
tbl1$263:
	.4byte 0x00040102
.global tbl2$264
tbl2$264:
	.4byte 0x00080102
.global tbl3$265
tbl3$265:
	.4byte 0x000C0102
	.4byte 0x00000000
.global GXTexMode0Ids
GXTexMode0Ids:
	.4byte 0x80818283
	.4byte 0xA0A1A2A3
.global GXTexMode1Ids
GXTexMode1Ids:
	.4byte 0x84858687
	.4byte 0xA4A5A6A7
.global GXTexImage0Ids
GXTexImage0Ids:
	.4byte 0x88898A8B
	.4byte 0xA8A9AAAB
.global GXTexImage1Ids
GXTexImage1Ids:
	.4byte 0x8C8D8E8F
	.4byte 0xACADAEAF
.global GXTexImage2Ids
GXTexImage2Ids:
	.4byte 0x90919293
	.4byte 0xB0B1B2B3
.global GXTexImage3Ids
GXTexImage3Ids:
	.4byte 0x94959697
	.4byte 0xB4B5B6B7
.global GXTexTlutIds
GXTexTlutIds:
	.4byte 0x98999A9B
	.4byte 0xB8B9BABB
.global GX2HWFiltConv_1
GX2HWFiltConv_1:
	.4byte 0x00040105
	.4byte 0x02060000
.global Unit01_1
Unit01_1:
	.4byte 0x00000000
	.float 1.0
.global __OSVersion
__OSVersion:
	.4byte lbl_804A8900
.global lbl_805149CC
lbl_805149CC:
	.4byte 0x25303878
	.4byte 0x0A000000
.global lbl_805149D4
lbl_805149D4:
	.4byte 0x25730A00
.global __OSCurrHeap
__OSCurrHeap:
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
.global __OSArenaLo
__OSArenaLo:
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
.global __OSFpscrEnableBits
__OSFpscrEnableBits:
	.4byte 0x000000F8
.global lbl_805149EC
lbl_805149EC:
	.4byte 0x0A000000
.global fontEncode$80
fontEncode$80:
	.4byte 0xFFFF0000
	.4byte 0x00000000
.global SwitchThreadCallback
SwitchThreadCallback:
	.4byte 0x800F1858
	.4byte 0x00000000
.global __PADVersion
__PADVersion:
	.4byte 0x804A9E60
.global ResettingChan
ResettingChan:
	.4byte 0x00000020
.global XPatchBits
XPatchBits:
	.4byte 0xF0000000
.global AnalogMode
AnalogMode:
	.4byte 0x00000300
.global Spec
Spec:
	.4byte 0x00000005
.global MakeStatus
MakeStatus:
	.4byte 0x800F482C
.global CmdReadOrigin
CmdReadOrigin:
	.4byte 0x41000000
.global CmdCalibrate
CmdCalibrate:
	.4byte 0x42000000
.global __SIVersion
__SIVersion:
	.4byte 0x804A9EB8
	.4byte 0x00000000
.global __AIVersion
__AIVersion:
	.4byte 0x804AA068
	.4byte 0x00000000
.global __THPVersion
__THPVersion:
	.4byte 0x804AA0B0
	.4byte 0x00000000
.global __GBAVersion
__GBAVersion:
	.4byte 0x804AA0F8
	.4byte 0x00000000
.global "cKochappyChangeTexName__Q34Game8Kochappy25@unnamed@kochappyMgr_cpp@"
"cKochappyChangeTexName__Q34Game8Kochappy25@unnamed@kochappyMgr_cpp@":
	.4byte 0x8047AB44
	.4byte 0x00000000
.global "cChappyChangeTexName0__Q34Game6Chappy23@unnamed@chappyMgr_cpp@"
"cChappyChangeTexName0__Q34Game6Chappy23@unnamed@chappyMgr_cpp@":
	.4byte 0x8047AED4
.global "cChappyChangeTexName1__Q34Game6Chappy23@unnamed@chappyMgr_cpp@"
"cChappyChangeTexName1__Q34Game6Chappy23@unnamed@chappyMgr_cpp@":
	.4byte 0x8047AEF8
.global gEnemyInfoNum__4Game
gEnemyInfoNum__4Game:
	.4byte 0x00000064
	.4byte 0x00000000
.global "sStoneMdlName__27@unnamed@enemyStoneMgr_cpp@"
"sStoneMdlName__27@unnamed@enemyStoneMgr_cpp@":
	.4byte lbl_8047BE58
	.4byte 0x8047BE6C
.global "cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"
"cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@":
	.4byte 0x8047BFC0
.global "cChappyChangeTexName1__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"
"cChappyChangeTexName1__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@":
	.4byte 0x8047BFE8
.global "cChappyChangeTexName0__Q34Game12YellowChappy29@unnamed@YellowChappyMgr_cpp@"
"cChappyChangeTexName0__Q34Game12YellowChappy29@unnamed@YellowChappyMgr_cpp@":
	.4byte 0x8047C030
.global "cChappyChangeTexName1__Q34Game12YellowChappy29@unnamed@YellowChappyMgr_cpp@"
"cChappyChangeTexName1__Q34Game12YellowChappy29@unnamed@YellowChappyMgr_cpp@":
	.4byte 0x8047C05C
.global "cKochappyChangeTexName__Q34Game12BlueKochappy29@unnamed@BlueKochappyMgr_cpp@"
"cKochappyChangeTexName__Q34Game12BlueKochappy29@unnamed@BlueKochappyMgr_cpp@":
	.4byte 0x8047C0C0
	.4byte 0x00000000
.global "cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@"
"cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@":
	.4byte 0x8047C110
	.4byte 0x00000000
.global usePacketCulling__Q24Game8Creature
usePacketCulling__Q24Game8Creature:
	.4byte 0x01000000
	.4byte 0x00000000
.global kAngleSpeed__Q23efx7TCursor
kAngleSpeed__Q23efx7TCursor:
	.4byte 0x3D567750
	.4byte 0x00000000
.global sOptDraw__Q24Game15BaseGameSection
sOptDraw__Q24Game15BaseGameSection:
	.4byte 0x03000000
	.4byte 0x00000000
.global sOptResolveColl__Q24Game11CellPyramid
sOptResolveColl__Q24Game11CellPyramid:
	.4byte 0x02000000
.global sCellBugName__Q24Game11CellPyramid
sCellBugName__Q24Game11CellPyramid:
	.4byte 0x80518640
.global sFromTekiEnable__Q24Game6Pellet
sFromTekiEnable__Q24Game6Pellet:
	.4byte 0x01000000
	.4byte 0x00000000
.global newVer
newVer:
	.4byte 0x01000000
	.4byte 0x00000000
.global maxBuffer__Q24Game8Stickers
maxBuffer__Q24Game8Stickers:
	.4byte 0x0000006E
	.4byte 0x00000000
.global GeneratorCurrentVersion
GeneratorCurrentVersion:
	.4byte 0x76302E33
	.4byte 0x00000000
.global sGraspSituationOptimise__Q24Game4Piki
sGraspSituationOptimise__Q24Game4Piki:
	.4byte 0x01000000
	.4byte 0x00000000
.global useFixCollision__Q24Game12PlatInstance
useFixCollision__Q24Game12PlatInstance:
	.byte 0x1
.global mUseCellMgr__Q24Game7PlatMgr
mUseCellMgr__Q24Game7PlatMgr:
	.byte 0x1
	.byte 0x0
	.byte 0x0
	.4byte 0x00000000
.global "enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@"
"enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@":
	.4byte 0x805196F0
	.4byte 0x805196F8
.global mTraceMoveOptLevel__Q24Game6MapMgr
mTraceMoveOptLevel__Q24Game6MapMgr:
	.4byte 0x01000000
	.4byte 0x00000000
.global mVersion__Q24Game8PlayData
mVersion__Q24Game8PlayData:
	.4byte 0x6A303039
	.4byte 0x00000000
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
	.4byte 0xFFFFFFFF
	.float 1.0
.global cCoin__13VsOtakaraName
cCoin__13VsOtakaraName:
	.4byte 0x80483EE8
.global cBedamaBlue__13VsOtakaraName
cBedamaBlue__13VsOtakaraName:
	.4byte 0x80483EF4
.global cBedamaRed__13VsOtakaraName
cBedamaRed__13VsOtakaraName:
	.4byte 0x80483F04
.global cBedamaYellow__13VsOtakaraName
cBedamaYellow__13VsOtakaraName:
	.4byte 0x80483F14
.global cBedamaYellowDepth__13VsOtakaraName
cBedamaYellowDepth__13VsOtakaraName:
	.4byte 0x41A00000
	.4byte 0x00000000
.global "cTankChangeTexName__Q34Game5Wtank22@unnamed@WtankMgr_cpp@"
"cTankChangeTexName__Q34Game5Wtank22@unnamed@WtankMgr_cpp@":
	.4byte 0x80487080
	.4byte 0x00000000
.global "cMatAnimBtkTexName__Q34Game3Mar20@unnamed@MarMgr_cpp@"
"cMatAnimBtkTexName__Q34Game3Mar20@unnamed@MarMgr_cpp@":
	.4byte 0x80487434
.global "cMatAnimBrkTexName__Q34Game3Mar20@unnamed@MarMgr_cpp@"
"cMatAnimBrkTexName__Q34Game3Mar20@unnamed@MarMgr_cpp@":
	.4byte 0x80487458
.global "cKoganeChangeTexName__Q34Game7Wealthy24@unnamed@WealthyMgr_cpp@"
"cKoganeChangeTexName__Q34Game7Wealthy24@unnamed@WealthyMgr_cpp@":
	.4byte 0x80487848
	.4byte 0x00000000
.global "cKoganeChangeTexName__Q34Game4Fart21@unnamed@FartMgr_cpp@"
"cKoganeChangeTexName__Q34Game4Fart21@unnamed@FartMgr_cpp@":
	.4byte 0x80487BE8
	.4byte 0x00000000
.global "cMatAnimBtkTexName__Q34Game5Queen22@unnamed@QueenMgr_cpp@"
"cMatAnimBtkTexName__Q34Game5Queen22@unnamed@QueenMgr_cpp@":
	.4byte 0x80487C68
	.4byte 0x00000000
.global "cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"
"cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@":
	.4byte 0x80488348
.global "cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"
"cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@":
	.4byte 0x80488370
.global "cKoganeChangeTexName__Q34Game11Koganemushi28@unnamed@KoganemushiMgr_cpp@"
"cKoganeChangeTexName__Q34Game11Koganemushi28@unnamed@KoganemushiMgr_cpp@":
	.4byte 0x80488FB8
	.4byte 0x00000000
.global "cTankChangeTexName__Q34Game5Ftank22@unnamed@FtankMgr_cpp@"
"cTankChangeTexName__Q34Game5Ftank22@unnamed@FtankMgr_cpp@":
	.4byte 0x80489010
	.4byte 0x00000000
.global "cMatAnimBtkTexName__Q34Game12Hanachirashi29@unnamed@HanachirashiMgr_cpp@"
"cMatAnimBtkTexName__Q34Game12Hanachirashi29@unnamed@HanachirashiMgr_cpp@":
	.4byte 0x804890CC
.global "cMatAnimBrkTexName__Q34Game12Hanachirashi29@unnamed@HanachirashiMgr_cpp@"
"cMatAnimBrkTexName__Q34Game12Hanachirashi29@unnamed@HanachirashiMgr_cpp@":
	.4byte 0x804890FC
.global "cMatAnimBtkTexName__Q34Game8Damagumo25@unnamed@DamagumoMgr_cpp@"
"cMatAnimBtkTexName__Q34Game8Damagumo25@unnamed@DamagumoMgr_cpp@":
	.4byte 0x804894C8
.global "cMatAnimBrkTexName__Q34Game8Damagumo25@unnamed@DamagumoMgr_cpp@"
"cMatAnimBrkTexName__Q34Game8Damagumo25@unnamed@DamagumoMgr_cpp@":
	.4byte 0x804894F0
.global "cOtakaraChangeTexName__Q34Game11FireOtakara28@unnamed@FireOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game11FireOtakara28@unnamed@FireOtakaraMgr_cpp@":
	.4byte 0x8048A3CC
	.4byte 0x00000000
.global "cOtakaraChangeTexName__Q34Game12WaterOtakara29@unnamed@WaterOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game12WaterOtakara29@unnamed@WaterOtakaraMgr_cpp@":
	.4byte 0x8048A760
	.4byte 0x00000000
.global "cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@":
	.4byte 0x8048A7D0
	.4byte 0x00000000
.global "cOtakaraChangeTexName__Q34Game11ElecOtakara28@unnamed@ElecOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game11ElecOtakara28@unnamed@ElecOtakaraMgr_cpp@":
	.4byte 0x8048A840
	.4byte 0x00000000
.global "cMatAnimBrkTexName__Q34Game7BigFoot24@unnamed@BigFootMgr_cpp@"
"cMatAnimBrkTexName__Q34Game7BigFoot24@unnamed@BigFootMgr_cpp@":
	.4byte 0x8048B228
	.4byte 0x00000000
.global "cOtakaraChangeTexName__Q34Game11BombOtakara28@unnamed@BombOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game11BombOtakara28@unnamed@BombOtakaraMgr_cpp@":
	.4byte 0x8048D3D8
	.4byte 0x00000000
.global "cMatAnimBrkTexName__Q34Game10DangoMushi27@unnamed@DangoMushiMgr_cpp@"
"cMatAnimBrkTexName__Q34Game10DangoMushi27@unnamed@DangoMushiMgr_cpp@":
	.4byte 0x8048D45C
	.4byte 0x00000000
.global "cKabutoChangeTexName__Q34Game11GreenKabuto28@unnamed@GreenKabutoMgr_cpp@"
"cKabutoChangeTexName__Q34Game11GreenKabuto28@unnamed@GreenKabutoMgr_cpp@":
	.4byte 0x8048D810
	.4byte 0x00000000
.global "cKabutoChangeTexName__Q34Game9RedKabuto26@unnamed@RedKabutoMgr_cpp@"
"cKabutoChangeTexName__Q34Game9RedKabuto26@unnamed@RedKabutoMgr_cpp@":
	.4byte 0x8048D890
	.4byte 0x00000000
.global "cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@"
"cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@":
	.4byte 0x8048D8F8
	.4byte 0x00000000
.global sDistanceParameterMoveTime__8PSSystem
sDistanceParameterMoveTime__8PSSystem:
	.4byte 0x05000000
	.4byte 0x00000000
.global cRatio__Q26PSGame5Rappa
cRatio__Q26PSGame5Rappa:
	.4byte 0x41700000
.global cBaseWaitTime__Q26PSGame5Rappa
cBaseWaitTime__Q26PSGame5Rappa:
	.4byte 0x00030000
.global sRappa__Q26PSGame5Rappa
sRappa__Q26PSGame5Rappa:
	.4byte 0x00000000
	.4byte 0x00000000
.global cNotUsingMasterIdRatio__Q26PSGame6RandId
cNotUsingMasterIdRatio__Q26PSGame6RandId:
	.4byte 0xBF800000
	.4byte 0x00000000
.global mWaitTime__Q28Morimura12TDayEndCount
mWaitTime__Q28Morimura12TDayEndCount:
	.4byte 0x3ECCCCCD
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
	.4byte 0x3E4CCCCD
.global mStopScale__Q28Morimura12TDayEndCount
mStopScale__Q28Morimura12TDayEndCount:
	.float 1.0
.global mScaleMax__Q28Morimura12TDayEndCount
mScaleMax__Q28Morimura12TDayEndCount:
	.4byte 0x40000000
.global m2pScale__Q28Morimura12TDayEndCount
m2pScale__Q28Morimura12TDayEndCount:
	.4byte 0x3F400000
.global m2pOffsetY__Q28Morimura12TDayEndCount
m2pOffsetY__Q28Morimura12TDayEndCount:
	.4byte 0x432A0000
.global mColor__Q28Morimura12TDayEndCount
mColor__Q28Morimura12TDayEndCount:
	.4byte 0x00FF00FF
.global mNumberColor__Q28Morimura12TDayEndCount
mNumberColor__Q28Morimura12TDayEndCount:
	.4byte 0xFF6400FF
	.4byte 0x00000000
.global mInitPosX__Q28Morimura10THurryUp2D
mInitPosX__Q28Morimura10THurryUp2D:
	.4byte 0x44610000
.global mMoveSp__Q28Morimura10THurryUp2D
mMoveSp__Q28Morimura10THurryUp2D:
	.4byte 0x41400000
.global mScaleSp1__Q28Morimura10THurryUp2D
mScaleSp1__Q28Morimura10THurryUp2D:
	.4byte 0x3C23D70A
.global mScaleSp2__Q28Morimura10THurryUp2D
mScaleSp2__Q28Morimura10THurryUp2D:
	.float 0.1
.global mScaleRate__Q28Morimura10THurryUp2D
mScaleRate__Q28Morimura10THurryUp2D:
	.4byte 0x3F828F5C
.global mColorUpSp__Q28Morimura10THurryUp2D
mColorUpSp__Q28Morimura10THurryUp2D:
	.float 1.0
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
	.4byte 0x42400000
.global mWarpRadius__Q28Morimura10TZukanBase
mWarpRadius__Q28Morimura10TZukanBase:
	.4byte 0x41700000
.global mScrollValueCoe__Q28Morimura10TZukanBase
mScrollValueCoe__Q28Morimura10TZukanBase:
	.4byte 0x40600000
.global mScrollSpeedCoe__Q28Morimura10TZukanBase
mScrollSpeedCoe__Q28Morimura10TZukanBase:
	.4byte 0x3DA3D70A
.global mNewScale__Q28Morimura10TZukanBase
mNewScale__Q28Morimura10TZukanBase:
	.float 0.7
.global mPodIconOffsetX__Q28Morimura10TZukanBase
mPodIconOffsetX__Q28Morimura10TZukanBase:
	.4byte 0x43F00000
.global mLargeCategoryScale__Q28Morimura10TZukanBase
mLargeCategoryScale__Q28Morimura10TZukanBase:
	.4byte 0x40000000
.global mCategoryAlphaRate__Q28Morimura10TZukanBase
mCategoryAlphaRate__Q28Morimura10TZukanBase:
	.4byte 0x3F19999A
.global mDrawLineType__Q28Morimura10TZukanBase
mDrawLineType__Q28Morimura10TZukanBase:
	.4byte 0x02000000
.global mPictureOffsetY__Q28Morimura8THiScore
mPictureOffsetY__Q28Morimura8THiScore:
	.4byte 0xC1000000
.global mChangeAlpha__Q28Morimura8THiScore
mChangeAlpha__Q28Morimura8THiScore:
	.4byte 0x01000000
.global mListOffsetY__Q28Morimura8THiScore
mListOffsetY__Q28Morimura8THiScore:
	.4byte 0x41C80000
.global mClearListHeightRate__Q28Morimura8THiScore
mClearListHeightRate__Q28Morimura8THiScore:
	.4byte 0x3FC66666
.global mSelected1p__Q28Morimura16TChallengeSelect
mSelected1p__Q28Morimura16TChallengeSelect:
	.4byte 0x01000000
.global mAlphaSpeed__Q28Morimura16TChallengeSelect
mAlphaSpeed__Q28Morimura16TChallengeSelect:
	.float 0.05
.global mFlashAnimInterval__Q28Morimura16TChallengeSelect
mFlashAnimInterval__Q28Morimura16TChallengeSelect:
	.4byte 0x012C0000
.global mTextFlashVal__Q28Morimura16TChallengeSelect
mTextFlashVal__Q28Morimura16TChallengeSelect:
	.float 1.0
.global mConnect2p__Q28Morimura16TChallengeSelect
mConnect2p__Q28Morimura16TChallengeSelect:
	.4byte 0x01000000
.global mPanelMoveVal__Q28Morimura16TChallengeSelect
mPanelMoveVal__Q28Morimura16TChallengeSelect:
	.float 1.0
.global mPanelMoveRate__Q28Morimura16TChallengeSelect
mPanelMoveRate__Q28Morimura16TChallengeSelect:
	.float 0.25
.global mCircleY__Q28Morimura16TChallengeSelect
mCircleY__Q28Morimura16TChallengeSelect:
	.4byte 0x42C80000
.global mTimerSpeed__Q28Morimura16TChallengeSelect
mTimerSpeed__Q28Morimura16TChallengeSelect:
	.float 0.15
.global mMoveSpeed__Q28Morimura16TChallengeSelect
mMoveSpeed__Q28Morimura16TChallengeSelect:
	.4byte 0x41400000
.global mSelectIconScale__Q28Morimura16TChallengeSelect
mSelectIconScale__Q28Morimura16TChallengeSelect:
	.4byte 0x3FC00000
	.4byte 0x00000000
.global mMoveSpeed__Q28Morimura16TChallengeResult
mMoveSpeed__Q28Morimura16TChallengeResult:
	.4byte 0x41400000
.global mAngRate__Q28Morimura16TChallengeResult
mAngRate__Q28Morimura16TChallengeResult:
	.float 0.3
.global mAngVelMax__Q28Morimura16TChallengeResult
mAngVelMax__Q28Morimura16TChallengeResult:
	.4byte 0x41A00000
.global mAccel__Q28Morimura16TChallengeResult
mAccel__Q28Morimura16TChallengeResult:
	.float 0.1
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
	.4byte 0x42200000
.global mDemoSpeedUpRate__Q28Morimura16TChallengeResult
mDemoSpeedUpRate__Q28Morimura16TChallengeResult:
	.4byte 0x40000000
.global mDemoSpeedUpMax__Q28Morimura16TChallengeResult
mDemoSpeedUpMax__Q28Morimura16TChallengeResult:
	.4byte 0x40400000
.global mFlashColor__Q28Morimura16TChallengeResult
mFlashColor__Q28Morimura16TChallengeResult:
	.4byte 0xFFFF00FF
	.4byte 0x00000000
.global mAngRate__Q28Morimura9TVsSelect
mAngRate__Q28Morimura9TVsSelect:
	.4byte 0x3E4CCCCD
.global mMoveSpeed__Q28Morimura9TVsSelect
mMoveSpeed__Q28Morimura9TVsSelect:
	.4byte 0x41C80000
.global mIndVal__Q28Morimura9TVsSelect
mIndVal__Q28Morimura9TVsSelect:
	.float 0.05
.global mIndShuki__Q28Morimura9TVsSelect
mIndShuki__Q28Morimura9TVsSelect:
	.float 0.3
.global mZoomFrameMax__Q28Morimura9TVsSelect
mZoomFrameMax__Q28Morimura9TVsSelect:
	.4byte 0x41C80000
.global mTestVal__Q28Morimura9TVsSelect
mTestVal__Q28Morimura9TVsSelect:
	.4byte 0x41200000
.global mAngUp__Q28Morimura9TVsSelect
mAngUp__Q28Morimura9TVsSelect:
	.4byte 0x3CF5C28F
.global mWindowScale__Q28Morimura9TVsSelect
mWindowScale__Q28Morimura9TVsSelect:
	.float 1.0
.global mDemoScaleMax__Q28Morimura9TVsSelect
mDemoScaleMax__Q28Morimura9TVsSelect:
	.4byte 0x400CCCCD
.global mDemoScale__Q28Morimura9TVsSelect
mDemoScale__Q28Morimura9TVsSelect:
	.float 1.0
.global mDemoOffsetMax__Q28Morimura9TVsSelect
mDemoOffsetMax__Q28Morimura9TVsSelect:
	.4byte 0x43910000
.global mFireAlphaRate__Q28Morimura9TVsSelect
mFireAlphaRate__Q28Morimura9TVsSelect:
	.float 0.5
.global mWideWindow__Q28Morimura11TScrollList
mWideWindow__Q28Morimura11TScrollList:
	.4byte 0x01000000
	.4byte 0x00000000
.global mClipRadiusS__11ParticleMgr
mClipRadiusS__11ParticleMgr:
	.4byte 0x41200000
.global mClipRadiusM__11ParticleMgr
mClipRadiusM__11ParticleMgr:
	.4byte 0x41F00000
.global mClipRadiusL__11ParticleMgr
mClipRadiusL__11ParticleMgr:
	.4byte 0x42C80000
	.4byte 0x00000000
.global cInitialCode__Q23ebi11CardEReader
cInitialCode__Q23ebi11CardEReader:
	.4byte 0x5053414A
	.4byte 0x00000000
.global sUseABXCommand
sUseABXCommand:
	.4byte 0x01000000
.global cMapFileName
cMapFileName:
	.4byte 0x804998E8
.global mActiveSectionFlag__8GameFlow
mActiveSectionFlag__8GameFlow:
	.4byte 0x00000015
	.4byte 0x00000000
.global viewCalcMode__Q28SysShape5Model
viewCalcMode__Q28SysShape5Model:
	.4byte 0x01000000
	.4byte 0x00000000
.global cFileName__Q24Game10MemoryCard
cFileName__Q24Game10MemoryCard:
	.4byte lbl_8049ADB8
	.4byte 0x00000000
.global sTinyPikminNum__13TinyPikminMgr
sTinyPikminNum__13TinyPikminMgr:
	.4byte 0x0000000A
	.4byte 0x00000000
.global "sMovieIndex__26@unnamed@titleSection_cpp@"
"sMovieIndex__26@unnamed@titleSection_cpp@":
	.byte 0x0
	.byte 0x2
	.byte 0x4
	.4byte 0x01030B0B
.global "sSeasonIndex__26@unnamed@titleSection_cpp@"
"sSeasonIndex__26@unnamed@titleSection_cpp@":
	.byte 0xFF
.global "sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@"
"sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@":
	.4byte 0x05060700
	.4byte 0x08090A00
.global "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"
"sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@":
	.4byte 0xFF000000
	.4byte 0x00000000
.global sTreasureLader_PitchDistance
sTreasureLader_PitchDistance:
	.float 0.77
.global sTreasureLader_Pitch
sTreasureLader_Pitch:
	.float 1.04
.global sTreasureLader_DistanceExp
sTreasureLader_DistanceExp:
	.float 5.0
.global sTreasureLader_MinimumVolume
sTreasureLader_MinimumVolume:
	.float 0.3
.global sLaderNoiseVolumeExp
sLaderNoiseVolumeExp:
	.float 7.18
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
	.float 0.3
.global sLaderNoiseFuefukiVolumeMin
sLaderNoiseFuefukiVolumeMin:
	.float 0.25
.global sLaderNoiseFuefukiVolumeMax
sLaderNoiseFuefukiVolumeMax:
	.float 0.5
	.skip 4
.global cDol_0Rad__Q23PSM7SeSound
cDol_0Rad__Q23PSM7SeSound:
	.float 1.0316
.global cDol_HalfRad__Q23PSM7SeSound
cDol_HalfRad__Q23PSM7SeSound:
	.float 1.5708
.global cDol_FullRad__Q23PSM7SeSound
cDol_FullRad__Q23PSM7SeSound:
	.float 2.11
.global cPan_MaxAmp__Q23PSM7SeSound
cPan_MaxAmp__Q23PSM7SeSound:
	.float 0.98
.global cCenterRad__Q23PSM7SeSound
cCenterRad__Q23PSM7SeSound:
	.float 1.57
	.skip 4
.global sCamFov__3PSM
sCamFov__3PSM:
	.float 0.25
.global sBoss_ViewDist__3PSM
sBoss_ViewDist__3PSM:
	.float 1300.0
.global sBoss_ViewDistVol__3PSM
sBoss_ViewDistVol__3PSM:
	.float 0.3
.global sBoss_DistMax__3PSM
sBoss_DistMax__3PSM:
	.float 4000.0
