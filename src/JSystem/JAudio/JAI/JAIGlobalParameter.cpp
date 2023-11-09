#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80479688
    lbl_80479688:
        .asciz "JaiInit.aaf"
    .global lbl_80479694
    lbl_80479694:
        .asciz "AudioRes/"
        .skip 2
    .global lbl_804796A0
    lbl_804796A0:
        .asciz "JaiSeqs.arc"

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
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
        .4byte lbl_80479688
    .global wavePath__18JAIGlobalParameter
    wavePath__18JAIGlobalParameter:
        .4byte lbl_80516F28
    .global sequenceArchivesPath__18JAIGlobalParameter
    sequenceArchivesPath__18JAIGlobalParameter:
        .4byte lbl_80516F30
    .global streamPath__18JAIGlobalParameter
    streamPath__18JAIGlobalParameter:
        .4byte lbl_80516F38
    .global audioResPath__18JAIGlobalParameter
    audioResPath__18JAIGlobalParameter:
        .4byte lbl_80479694
    .global sequenceArchivesFileName__18JAIGlobalParameter
    sequenceArchivesFileName__18JAIGlobalParameter:
        .4byte lbl_804796A0
    .global inputGainDown__18JAIGlobalParameter
    inputGainDown__18JAIGlobalParameter:
        .float 0.5
    .global outputGainUp__18JAIGlobalParameter
    outputGainUp__18JAIGlobalParameter:
        .float 1.2
    .global distanceMax__18JAIGlobalParameter
    distanceMax__18JAIGlobalParameter:
        .float 5000.0
    .global maxVolumeDistance__18JAIGlobalParameter
    maxVolumeDistance__18JAIGlobalParameter:
        .float 1000.0
    .global seDolbyCenterValue__18JAIGlobalParameter
    seDolbyCenterValue__18JAIGlobalParameter:
        .float 30.0
    .global seDolbyFrontDistanceMax__18JAIGlobalParameter
    seDolbyFrontDistanceMax__18JAIGlobalParameter:
        .float -300.0
    .global seDolbyBehindDistanceMax__18JAIGlobalParameter
    seDolbyBehindDistanceMax__18JAIGlobalParameter:
        .float 1000.0
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
        .float 500.0
    .global panDistance2Max__18JAIGlobalParameter
    panDistance2Max__18JAIGlobalParameter:
        .float 1000.0
    .global panAngleParameter__18JAIGlobalParameter
    panAngleParameter__18JAIGlobalParameter:
        .float 12.0
    .global panAngleParameter2__18JAIGlobalParameter
    panAngleParameter2__18JAIGlobalParameter:
        .float 2.4
    .global dopplarParameter__18JAIGlobalParameter
    dopplarParameter__18JAIGlobalParameter:
        .float 3200.0
    .global seDistanceWaitMax__18JAIGlobalParameter
    seDistanceWaitMax__18JAIGlobalParameter:
        .4byte 0x000C0000
    .global seDistancepitchMax__18JAIGlobalParameter
    seDistancepitchMax__18JAIGlobalParameter:
        .float 0.2

    .section .sbss # 0x80514D80 - 0x80516360
    .global seDefaultFx__18JAIGlobalParameter
    seDefaultFx__18JAIGlobalParameter:
        .skip 0x4
    .global interfaceHeapSize__18JAIGlobalParameter
    interfaceHeapSize__18JAIGlobalParameter:
        .skip 0x4
    .global minDistanceVolume__18JAIGlobalParameter
    minDistanceVolume__18JAIGlobalParameter:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516F28
    lbl_80516F28:
        .asciz "Banks/"
        .skip 1
    .global lbl_80516F30
    lbl_80516F30:
        .asciz "Seqs/"
        .skip 2
    .global lbl_80516F38
    lbl_80516F38:
        .asciz "Stream/"
*/

namespace JAIGlobalParameter {

u8 distanceParameterMoveTime = 0x03;
u8 audioSystemThreadPriority = 0x02;
u8 audioDvdThreadPriority    = 0x03;
u8 seqMuteVolumeSePlay       = 0x28;
u8 seqParameterLines         = 0x07;
u8 streamParameterLines      = 0x07;
u16 seDistanceFxParameter    = 0x96;
u32 soundSceneMax            = 0x02;
u32 seRegistMax              = 0x14;
u32 seTrackMax               = 0x20;
u32 seqTrackMax              = 0x20;
u32 seqPlayTrackMax          = 0x08;
u32 seqControlBufferMax      = 0x08;
// u32 streamControlBufferMax     = 0xFFFFFFFF; // unused/inlined
// u32 streamParameterBufferMax   = 0xFFFFFFFF; // unused/inlined
u32 autoHeapMax      = 0x02;
u32 stayHeapMax      = 0x02;
u32 autoHeapRoomSize = 0xC000;
u32 stayHeapSize     = 0x10000;
// char* soundTableFileName       = ""; // unused/inlined
char* initDataFileName         = "JaiInit.aaf";
char* wavePath                 = "Banks/";
char* sequenceArchivesPath     = "Seqs/";
char* streamPath               = "Stream/";
char* audioResPath             = "AudioRes/";
char* sequenceArchivesFileName = "JaiSeqs.arc";
float inputGainDown            = 0.5f;
float outputGainUp             = 1.2f;
float distanceMax              = 5000.0f;
float maxVolumeDistance        = 1000.0f;
float seDolbyCenterValue       = 30.0f;
float seDolbyFrontDistanceMax  = -300.0f;
float seDolbyBehindDistanceMax = 1000.0f;
u32 dopplarMoveTime            = 0xF;
u32 dummyObjectLifeTime        = 0x258;
u32 dummyObjectMax             = 0xA;
u32 seqMuteMoveSpeedSePlay     = 0x3;
u32 audioCameraMax             = 0x1;
long systemTrackMax            = 0x100;
long systemRootTrackMax        = 0x10;
float panDistanceMax           = 500.0f;
float panDistance2Max          = 1000.0f;
float panAngleParameter        = 12.0f;
float panAngleParameter2       = 2.4f;
float dopplarParameter         = 3200.0f;
u16 seDistanceWaitMax          = 0xC;
float seDistancepitchMax       = 0.2f;

u16 seDefaultFx;
u32 interfaceHeapSize;
float minDistanceVolume;
} // namespace JAIGlobalParameter

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioSystemThreadPriority(u8 value)
{
	// UNUSED FUNCTION
	audioSystemThreadPriority = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioDvdThreadPriority(u8 value)
{
	// UNUSED FUNCTION
	audioDvdThreadPriority = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JAIGlobalParameter::setParamInitFileLoadSwitch(u8 value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD950
 * Size:	000014
 */
void JAIGlobalParameter::setParamInitDataPointer(void* value)
{
	JAInter::InitData::aafPointer = (u8*)value;
	JAIBasic::msBasic->_0C        = 4;
	/*
	stw      r3, aafPointer__Q27JAInter8InitData@sda21(r13)
	li       r0, 4
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	stb      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamInterfaceHeapSize(u32 value)
{
	// UNUSED FUNCTION
	interfaceHeapSize = value;
}

/*
 * --INFO--
 * Address:	800AD964
 * Size:	000008
 */
void JAIGlobalParameter::setParamSoundSceneMax(u32 value) { soundSceneMax = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeRegistMax(u32 value)
{
	// UNUSED FUNCTION
	seRegistMax = value;
}

/*
 * --INFO--
 * Address:	800AD96C
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeTrackMax(u32 value) { seTrackMax = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqTrackMax(u32 value)
{
	// UNUSED FUNCTION
	seqTrackMax = value;
}

/*
 * --INFO--
 * Address:	800AD974
 * Size:	000010
 */
void JAIGlobalParameter::setParamSeqPlayTrackMax(u32 value)
{
	seqPlayTrackMax     = value;
	seqControlBufferMax = value << 1; // * sizeof(u16);
}

/*
 * --INFO--
 * Address:	800AD984
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqControlBufferMax(u32 value) { seqControlBufferMax = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamControlBufferMax(u32 value)
{
	// UNUSED FUNCTION
	streamControlBufferMax = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamParameterBufferMax(u32 value)
{
	// UNUSED FUNCTION
	streamParameterBufferMax = value;
}

/*
 * --INFO--
 * Address:	800AD98C
 * Size:	000008
 */
void JAIGlobalParameter::setParamAutoHeapMax(u32 value) { autoHeapMax = value; }

/*
 * --INFO--
 * Address:	800AD994
 * Size:	000008
 */
void JAIGlobalParameter::setParamStayHeapMax(u32 value) { stayHeapMax = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamInputGainDown(float value)
{
	// UNUSED FUNCTION
	inputGainDown = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamOutputGainUp(float value)
{
	// UNUSED FUNCTION
	outputGainUp = value;
}

/*
 * --INFO--
 * Address:	800AD99C
 * Size:	000008
 */
void JAIGlobalParameter::setParamDistanceMax(float value) { distanceMax = value; }

/*
 * --INFO--
 * Address:	800AD9A4
 * Size:	000008
 */
void JAIGlobalParameter::setParamMaxVolumeDistance(float value) { maxVolumeDistance = value; }

/*
 * --INFO--
 * Address:	800AD9AC
 * Size:	000008
 */
void JAIGlobalParameter::setParamMinDistanceVolume(float value) { minDistanceVolume = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDistanceFxParameter(u16 value)
{
	// UNUSED FUNCTION
	seDistanceFxParameter = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamInitDataLoadOffFlag(bool value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamStreamUseOffFlag(bool value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAIGlobalParameter::setParamStreamDecodedBufferBlocks(u32 value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD9B4
 * Size:	000014
 */
void JAIGlobalParameter::setParamStreamInsideBufferCut(bool value) { JAIBasic::msBasic->_0E._4 = value; }

/*
 * --INFO--
 * Address:	800AD9C8
 * Size:	000008
 */
void JAIGlobalParameter::setParamAutoHeapRoomSize(u32 value) { autoHeapRoomSize = value; }

/*
 * --INFO--
 * Address:	800AD9D0
 * Size:	000008
 */
void JAIGlobalParameter::setParamStayHeapSize(u32 value) { stayHeapSize = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JAIGlobalParameter::setParamSeDolbyCenterValue(u8 value)
{
	// UNUSED FUNCTION
	seDolbyCenterValue = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDolbyFrontDistanceMax(float value)
{
	// UNUSED FUNCTION
	seDolbyFrontDistanceMax = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDolbyBehindDistanceMax(float value)
{
	// UNUSED FUNCTION
	seDolbyBehindDistanceMax = value;
}

/*
 * --INFO--
 * Address:	800AD9D8
 * Size:	000008
 */
void JAIGlobalParameter::setParamInitDataFileName(char* value) { initDataFileName = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSoundTableFileName(char* value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamWavePath(char* value)
{
	// UNUSED FUNCTION
	wavePath = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSequenceArchivesPath(char* value)
{
	// UNUSED FUNCTION
	sequenceArchivesPath = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamPath(char* value)
{
	// UNUSED FUNCTION
	streamPath = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioResPath(char* value)
{
	// UNUSED FUNCTION
	audioResPath = value;
}

/*
 * --INFO--
 * Address:	800AD9E0
 * Size:	000008
 */
void JAIGlobalParameter::setParamSequenceArchivesFileName(char* value) { sequenceArchivesFileName = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamSeqEntryCancelFlag(bool value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamStreamEntryCancelFlag(bool value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDopplarMoveTime(u32 value)
{
	// UNUSED FUNCTION
	dopplarMoveTime = value;
}

/*
 * --INFO--
 * Address:	800AD9E8
 * Size:	000008
 */
void JAIGlobalParameter::setParamDistanceParameterMoveTime(u8 value) { distanceParameterMoveTime = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDummyObjectLifeTime(u32 value)
{
	// UNUSED FUNCTION
	dummyObjectLifeTime = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDummyObjectMax(u32 value)
{
	// UNUSED FUNCTION
	dummyObjectMax = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqMuteVolumeSePlay(u8 value)
{
	// UNUSED FUNCTION
	seqMuteVolumeSePlay = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqMuteMoveSpeedSePlay(u32 value)
{
	// UNUSED FUNCTION
	seqMuteMoveSpeedSePlay = value;
}

/*
 * --INFO--
 * Address:	800AD9F0
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioCameraMax(u32 value) { audioCameraMax = value; }

/*
 * --INFO--
 * Address:	800AD9F8
 * Size:	000008
 */
void JAIGlobalParameter::setParamSystemTrackMax(long value) { systemTrackMax = value; }

/*
 * --INFO--
 * Address:	800ADA00
 * Size:	000008
 */
void JAIGlobalParameter::setParamSystemRootTrackMax(long value) { systemRootTrackMax = value; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamPanDistanceMax(float value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAIGlobalParameter::setParamPanAngleParameter(float value)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDopplarParameter(float value)
{
	// UNUSED FUNCTION
	dopplarParameter = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDistanceWaitMax(u16 value)
{
	// UNUSED FUNCTION
	seDistanceWaitMax = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDistancepitchMax(float value)
{
	// UNUSED FUNCTION
	seDistancepitchMax = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqParameterLines(u8 value)
{
	// UNUSED FUNCTION
	seqParameterLines = value;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamParameterLines(u8 value)
{
	// UNUSED FUNCTION
	streamParameterLines = value;
}

/*
 * --INFO--
 * Address:	800ADA08
 * Size:	000068
 */
void JAIGlobalParameter::setParamSoundOutputMode(u32 value)
{
	u32 mode = 1;
	switch (value) {
	case 0:
		mode = 0;
		break;
	case 1:
		mode = 1;
		break;
	case 2:
		mode = 2;
		break;
	}
	JAIBasic::msBasic->mParamSoundOutputMode = value;
	JASDriver::setOutputMode(mode);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u8 JAIGlobalParameter::getParamAudioSystemThreadPriority()
{
	// UNUSED FUNCTION
	return audioSystemThreadPriority;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u8 JAIGlobalParameter::getParamAudioDvdThreadPriority()
{
	// UNUSED FUNCTION
	return audioDvdThreadPriority;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
u8 JAIGlobalParameter::getParamInitFileLoadSwitch()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void* JAIGlobalParameter::getParamInitDataPointer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamInterfaceHeapSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADA70
 * Size:	000024
 */
u32 JAIGlobalParameter::getParamSeCategoryMax() { return JAInter::SoundTable::getCategotyMax(); }

/*
 * --INFO--
 * Address:	800ADA94
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSoundSceneMax() { return soundSceneMax; }

/*
 * --INFO--
 * Address:	800ADA9C
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSeRegistMax() { return seRegistMax; }

/*
 * --INFO--
 * Address:	800ADAA4
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSeTrackMax() { return seTrackMax; }

/*
 * --INFO--
 * Address:	800ADAAC
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSeqTrackMax() { return seqTrackMax; }

/*
 * --INFO--
 * Address:	800ADAB4
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSeqControlBufferMax() { return seqControlBufferMax; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamStreamControlBufferMax()
{
	// UNUSED FUNCTION
	return streamControlBufferMax;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamStreamParameterBufferMax()
{
	// UNUSED FUNCTION
	return streamParameterBufferMax;
}

/*
 * --INFO--
 * Address:	800ADABC
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamAutoHeapMax() { return autoHeapMax; }

/*
 * --INFO--
 * Address:	800ADAC4
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamStayHeapMax() { return stayHeapMax; }

/*
 * --INFO--
 * Address:	800ADACC
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSeqPlayTrackMax() { return seqPlayTrackMax; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
float JAIGlobalParameter::getParamInputGainDown()
{
	// UNUSED FUNCTION
	return inputGainDown;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
float JAIGlobalParameter::getParamOutputGainUp()
{
	// UNUSED FUNCTION
	return outputGainUp;
}

/*
 * --INFO--
 * Address:	800ADAD4
 * Size:	000008
 */
float JAIGlobalParameter::getParamDistanceMax() { return distanceMax; }

/*
 * --INFO--
 * Address:	800ADADC
 * Size:	000008
 */
float JAIGlobalParameter::getParamMaxVolumeDistance() { return maxVolumeDistance; }

/*
 * --INFO--
 * Address:	800ADAE4
 * Size:	000008
 */
float JAIGlobalParameter::getParamMinDistanceVolume() { return minDistanceVolume; }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
u32 JAIGlobalParameter::getParamSoundOutputMode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u16 JAIGlobalParameter::getParamSeDistanceFxParameter()
{
	// UNUSED FUNCTION
	return seDistanceFxParameter;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
bool JAIGlobalParameter::getParamInitDataLoadOffFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
bool JAIGlobalParameter::getParamStreamUseOffFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADAEC
 * Size:	000020
 */
u32 JAIGlobalParameter::getParamStreamDecodedBufferBlocks() { return JAInter::StreamMgr::getDecodedBufferBlocks(); }

/*
 * --INFO--
 * Address:	800ADB0C
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamAutoHeapRoomSize() { return autoHeapRoomSize; }

/*
 * --INFO--
 * Address:	800ADB14
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamStayHeapSize() { return stayHeapSize; }

/*
 * --INFO--
 * Address:	800ADB1C
 * Size:	000008
 */
float JAIGlobalParameter::getParamSeDolbyCenterValue() { return seDolbyCenterValue; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
float JAIGlobalParameter::getParamSeDolbyFrontDistanceMax()
{
	// UNUSED FUNCTION
	return seDolbyFrontDistanceMax;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
float JAIGlobalParameter::getParamSeDolbyBehindDistanceMax()
{
	// UNUSED FUNCTION
	return seDolbyBehindDistanceMax;
}

/*
 * --INFO--
 * Address:	800ADB24
 * Size:	000008
 */
char* JAIGlobalParameter::getParamInitDataFileName() { return initDataFileName; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
char* JAIGlobalParameter::getParamSoundTableFileName()
{
	// UNUSED FUNCTION
	return soundTableFileName;
}

/*
 * --INFO--
 * Address:	800ADB2C
 * Size:	000008
 */
char* JAIGlobalParameter::getParamWavePath() { return wavePath; }

/*
 * --INFO--
 * Address:	800ADB34
 * Size:	000008
 */
char* JAIGlobalParameter::getParamSequenceArchivesPath() { return sequenceArchivesPath; }

/*
 * --INFO--
 * Address:	800ADB3C
 * Size:	000008
 */
char* JAIGlobalParameter::getParamStreamPath() { return streamPath; }

/*
 * --INFO--
 * Address:	800ADB44
 * Size:	000008
 */
char* JAIGlobalParameter::getParamAudioResPath() { return audioResPath; }

/*
 * --INFO--
 * Address:	800ADB4C
 * Size:	000008
 */
char* JAIGlobalParameter::getParamSequenceArchivesFileName() { return sequenceArchivesFileName; }

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
bool JAIGlobalParameter::getParamSeqEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
bool JAIGlobalParameter::getParamStreamEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADB54
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamDopplarMoveTime() { return dopplarMoveTime; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
float JAIGlobalParameter::getParamDopplarParameter()
{
	// UNUSED FUNCTION
	return dopplarParameter;
}

/*
 * --INFO--
 * Address:	800ADB5C
 * Size:	000008
 */
u8 JAIGlobalParameter::getParamDistanceParameterMoveTime() { return distanceParameterMoveTime; }

/*
 * --INFO--
 * Address:	800ADB64
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamDummyObjectLifeTime() { return dummyObjectLifeTime; }

/*
 * --INFO--
 * Address:	800ADB6C
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamDummyObjectMax() { return dummyObjectMax; }

/*
 * --INFO--
 * Address:	800ADB74
 * Size:	000008
 */
u8 JAIGlobalParameter::getParamSeqMuteVolumeSePlay() { return seqMuteVolumeSePlay; }

/*
 * --INFO--
 * Address:	800ADB7C
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSeqMuteMoveSpeedSePlay() { return seqMuteMoveSpeedSePlay; }

/*
 * --INFO--
 * Address:	800ADB84
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamAudioCameraMax() { return audioCameraMax; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
long JAIGlobalParameter::getParamSystemTrackMax()
{
	// UNUSED FUNCTION
	return systemTrackMax;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
long JAIGlobalParameter::getParamSystemRootTrackMax()
{
	// UNUSED FUNCTION
	return systemRootTrackMax;
}

/*
 * --INFO--
 * Address:	800ADB8C
 * Size:	000008
 */
u8 JAIGlobalParameter::getParamSeqParameterLines() { return seqParameterLines; }

/*
 * --INFO--
 * Address:	800ADB94
 * Size:	000008
 */
u8 JAIGlobalParameter::getParamStreamParameterLines() { return streamParameterLines; }

/*
 * --INFO--
 * Address:	800ADB9C
 * Size:	000008
 */
u16 JAIGlobalParameter::getParamSeDistanceWaitMax() { return seDistanceWaitMax; }
