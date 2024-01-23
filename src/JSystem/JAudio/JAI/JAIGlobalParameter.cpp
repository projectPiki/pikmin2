#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "types.h"

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
f32 inputGainDown              = 0.5f;
f32 outputGainUp               = 1.2f;
f32 distanceMax                = 5000.0f;
f32 maxVolumeDistance          = 1000.0f;
f32 seDolbyCenterValue         = 30.0f;
f32 seDolbyFrontDistanceMax    = -300.0f;
f32 seDolbyBehindDistanceMax   = 1000.0f;
u32 dopplarMoveTime            = 0xF;
u32 dummyObjectLifeTime        = 0x258;
u32 dummyObjectMax             = 0xA;
u32 seqMuteMoveSpeedSePlay     = 0x3;
u32 audioCameraMax             = 0x1;
s32 systemTrackMax             = 0x100;
s32 systemRootTrackMax         = 0x10;
f32 panDistanceMax             = 500.0f;
f32 panDistance2Max            = 1000.0f;
f32 panAngleParameter          = 12.0f;
f32 panAngleParameter2         = 2.4f;
f32 dopplarParameter           = 3200.0f;
u16 seDistanceWaitMax          = 0xC;
f32 seDistancepitchMax         = 0.2f;

u16 seDefaultFx;
u32 interfaceHeapSize;
f32 minDistanceVolume;
} // namespace JAIGlobalParameter

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamAudioSystemThreadPriority(u8 value)
{
	// UNUSED FUNCTION
	audioSystemThreadPriority = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamAudioDvdThreadPriority(u8 value)
{
	// UNUSED FUNCTION
	audioDvdThreadPriority = value;
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void JAIGlobalParameter::setParamInitFileLoadSwitch(u8 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AD950
 * @note Size: 0x14
 */
void JAIGlobalParameter::setParamInitDataPointer(void* value)
{
	JAInter::InitData::aafPointer = (u32*)value;
	JAIBasic::msBasic->_0C        = 4;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamInterfaceHeapSize(u32 value)
{
	// UNUSED FUNCTION
	interfaceHeapSize = value;
}

/**
 * @note Address: 0x800AD964
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSoundSceneMax(u32 value) { soundSceneMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeRegistMax(u32 value)
{
	// UNUSED FUNCTION
	seRegistMax = value;
}

/**
 * @note Address: 0x800AD96C
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeTrackMax(u32 value) { seTrackMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeqTrackMax(u32 value)
{
	// UNUSED FUNCTION
	seqTrackMax = value;
}

/**
 * @note Address: 0x800AD974
 * @note Size: 0x10
 */
void JAIGlobalParameter::setParamSeqPlayTrackMax(u32 value)
{
	seqPlayTrackMax     = value;
	seqControlBufferMax = value << 1; // * sizeof(u16);
}

/**
 * @note Address: 0x800AD984
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeqControlBufferMax(u32 value) { seqControlBufferMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamStreamControlBufferMax(u32 value)
{
	// UNUSED FUNCTION
	streamControlBufferMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamStreamParameterBufferMax(u32 value)
{
	// UNUSED FUNCTION
	streamParameterBufferMax = value;
}

/**
 * @note Address: 0x800AD98C
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamAutoHeapMax(u32 value) { autoHeapMax = value; }

/**
 * @note Address: 0x800AD994
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamStayHeapMax(u32 value) { stayHeapMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamInputGainDown(f32 value)
{
	// UNUSED FUNCTION
	inputGainDown = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamOutputGainUp(f32 value)
{
	// UNUSED FUNCTION
	outputGainUp = value;
}

/**
 * @note Address: 0x800AD99C
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamDistanceMax(f32 value) { distanceMax = value; }

/**
 * @note Address: 0x800AD9A4
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamMaxVolumeDistance(f32 value) { maxVolumeDistance = value; }

/**
 * @note Address: 0x800AD9AC
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamMinDistanceVolume(f32 value) { minDistanceVolume = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeDistanceFxParameter(u16 value)
{
	// UNUSED FUNCTION
	seDistanceFxParameter = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void JAIGlobalParameter::setParamInitDataLoadOffFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void JAIGlobalParameter::setParamStreamUseOffFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void JAIGlobalParameter::setParamStreamDecodedBufferBlocks(u32 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AD9B4
 * @note Size: 0x14
 */
void JAIGlobalParameter::setParamStreamInsideBufferCut(bool value) { JAIBasic::msBasic->_0E._4 = value; }

/**
 * @note Address: 0x800AD9C8
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamAutoHeapRoomSize(u32 value) { autoHeapRoomSize = value; }

/**
 * @note Address: 0x800AD9D0
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamStayHeapSize(u32 value) { stayHeapSize = value; }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void JAIGlobalParameter::setParamSeDolbyCenterValue(u8 value)
{
	// UNUSED FUNCTION
	seDolbyCenterValue = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeDolbyFrontDistanceMax(f32 value)
{
	// UNUSED FUNCTION
	seDolbyFrontDistanceMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeDolbyBehindDistanceMax(f32 value)
{
	// UNUSED FUNCTION
	seDolbyBehindDistanceMax = value;
}

/**
 * @note Address: 0x800AD9D8
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamInitDataFileName(char* value) { initDataFileName = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSoundTableFileName(char* value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamWavePath(char* value)
{
	// UNUSED FUNCTION
	wavePath = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSequenceArchivesPath(char* value)
{
	// UNUSED FUNCTION
	sequenceArchivesPath = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamStreamPath(char* value)
{
	// UNUSED FUNCTION
	streamPath = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamAudioResPath(char* value)
{
	// UNUSED FUNCTION
	audioResPath = value;
}

/**
 * @note Address: 0x800AD9E0
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSequenceArchivesFileName(char* value) { sequenceArchivesFileName = value; }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void JAIGlobalParameter::setParamSeqEntryCancelFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void JAIGlobalParameter::setParamStreamEntryCancelFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamDopplarMoveTime(u32 value)
{
	// UNUSED FUNCTION
	dopplarMoveTime = value;
}

/**
 * @note Address: 0x800AD9E8
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamDistanceParameterMoveTime(u8 value) { distanceParameterMoveTime = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamDummyObjectLifeTime(u32 value)
{
	// UNUSED FUNCTION
	dummyObjectLifeTime = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamDummyObjectMax(u32 value)
{
	// UNUSED FUNCTION
	dummyObjectMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeqMuteVolumeSePlay(u8 value)
{
	// UNUSED FUNCTION
	seqMuteVolumeSePlay = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeqMuteMoveSpeedSePlay(u32 value)
{
	// UNUSED FUNCTION
	seqMuteMoveSpeedSePlay = value;
}

/**
 * @note Address: 0x800AD9F0
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamAudioCameraMax(u32 value) { audioCameraMax = value; }

/**
 * @note Address: 0x800AD9F8
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSystemTrackMax(s32 value) { systemTrackMax = value; }

/**
 * @note Address: 0x800ADA00
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSystemRootTrackMax(s32 value) { systemRootTrackMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void JAIGlobalParameter::setParamPanDistanceMax(f32 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void JAIGlobalParameter::setParamPanAngleParameter(f32 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamDopplarParameter(f32 value)
{
	// UNUSED FUNCTION
	dopplarParameter = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeDistanceWaitMax(u16 value)
{
	// UNUSED FUNCTION
	seDistanceWaitMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeDistancepitchMax(f32 value)
{
	// UNUSED FUNCTION
	seDistancepitchMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamSeqParameterLines(u8 value)
{
	// UNUSED FUNCTION
	seqParameterLines = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIGlobalParameter::setParamStreamParameterLines(u8 value)
{
	// UNUSED FUNCTION
	streamParameterLines = value;
}

/**
 * @note Address: 0x800ADA08
 * @note Size: 0x68
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

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u8 JAIGlobalParameter::getParamAudioSystemThreadPriority()
{
	// UNUSED FUNCTION
	return audioSystemThreadPriority;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u8 JAIGlobalParameter::getParamAudioDvdThreadPriority()
{
	// UNUSED FUNCTION
	return audioDvdThreadPriority;
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
u8 JAIGlobalParameter::getParamInitFileLoadSwitch()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void* JAIGlobalParameter::getParamInitDataPointer()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamInterfaceHeapSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ADA70
 * @note Size: 0x24
 */
u32 JAIGlobalParameter::getParamSeCategoryMax() { return JAInter::SoundTable::getCategotyMax(); }

/**
 * @note Address: 0x800ADA94
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamSoundSceneMax() { return soundSceneMax; }

/**
 * @note Address: 0x800ADA9C
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamSeRegistMax() { return seRegistMax; }

/**
 * @note Address: 0x800ADAA4
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamSeTrackMax() { return seTrackMax; }

/**
 * @note Address: 0x800ADAAC
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamSeqTrackMax() { return seqTrackMax; }

/**
 * @note Address: 0x800ADAB4
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamSeqControlBufferMax() { return seqControlBufferMax; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamStreamControlBufferMax()
{
	// UNUSED FUNCTION
	return streamControlBufferMax;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamStreamParameterBufferMax()
{
	// UNUSED FUNCTION
	return streamParameterBufferMax;
}

/**
 * @note Address: 0x800ADABC
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamAutoHeapMax() { return autoHeapMax; }

/**
 * @note Address: 0x800ADAC4
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamStayHeapMax() { return stayHeapMax; }

/**
 * @note Address: 0x800ADACC
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamSeqPlayTrackMax() { return seqPlayTrackMax; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamInputGainDown()
{
	// UNUSED FUNCTION
	return inputGainDown;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamOutputGainUp()
{
	// UNUSED FUNCTION
	return outputGainUp;
}

/**
 * @note Address: 0x800ADAD4
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamDistanceMax() { return distanceMax; }

/**
 * @note Address: 0x800ADADC
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamMaxVolumeDistance() { return maxVolumeDistance; }

/**
 * @note Address: 0x800ADAE4
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamMinDistanceVolume() { return minDistanceVolume; }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
u32 JAIGlobalParameter::getParamSoundOutputMode()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u16 JAIGlobalParameter::getParamSeDistanceFxParameter()
{
	// UNUSED FUNCTION
	return seDistanceFxParameter;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool JAIGlobalParameter::getParamInitDataLoadOffFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool JAIGlobalParameter::getParamStreamUseOffFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ADAEC
 * @note Size: 0x20
 */
u32 JAIGlobalParameter::getParamStreamDecodedBufferBlocks() { return JAInter::StreamMgr::getDecodedBufferBlocks(); }

/**
 * @note Address: 0x800ADB0C
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamAutoHeapRoomSize() { return autoHeapRoomSize; }

/**
 * @note Address: 0x800ADB14
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamStayHeapSize() { return stayHeapSize; }

/**
 * @note Address: 0x800ADB1C
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamSeDolbyCenterValue() { return seDolbyCenterValue; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamSeDolbyFrontDistanceMax()
{
	// UNUSED FUNCTION
	return seDolbyFrontDistanceMax;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamSeDolbyBehindDistanceMax()
{
	// UNUSED FUNCTION
	return seDolbyBehindDistanceMax;
}

/**
 * @note Address: 0x800ADB24
 * @note Size: 0x8
 */
char* JAIGlobalParameter::getParamInitDataFileName() { return initDataFileName; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
char* JAIGlobalParameter::getParamSoundTableFileName()
{
	// UNUSED FUNCTION
	return soundTableFileName;
}

/**
 * @note Address: 0x800ADB2C
 * @note Size: 0x8
 */
char* JAIGlobalParameter::getParamWavePath() { return wavePath; }

/**
 * @note Address: 0x800ADB34
 * @note Size: 0x8
 */
char* JAIGlobalParameter::getParamSequenceArchivesPath() { return sequenceArchivesPath; }

/**
 * @note Address: 0x800ADB3C
 * @note Size: 0x8
 */
char* JAIGlobalParameter::getParamStreamPath() { return streamPath; }

/**
 * @note Address: 0x800ADB44
 * @note Size: 0x8
 */
char* JAIGlobalParameter::getParamAudioResPath() { return audioResPath; }

/**
 * @note Address: 0x800ADB4C
 * @note Size: 0x8
 */
char* JAIGlobalParameter::getParamSequenceArchivesFileName() { return sequenceArchivesFileName; }

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool JAIGlobalParameter::getParamSeqEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool JAIGlobalParameter::getParamStreamEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ADB54
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamDopplarMoveTime() { return dopplarMoveTime; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 JAIGlobalParameter::getParamDopplarParameter()
{
	// UNUSED FUNCTION
	return dopplarParameter;
}

/**
 * @note Address: 0x800ADB5C
 * @note Size: 0x8
 */
u8 JAIGlobalParameter::getParamDistanceParameterMoveTime() { return distanceParameterMoveTime; }

/**
 * @note Address: 0x800ADB64
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamDummyObjectLifeTime() { return dummyObjectLifeTime; }

/**
 * @note Address: 0x800ADB6C
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamDummyObjectMax() { return dummyObjectMax; }

/**
 * @note Address: 0x800ADB74
 * @note Size: 0x8
 */
u8 JAIGlobalParameter::getParamSeqMuteVolumeSePlay() { return seqMuteVolumeSePlay; }

/**
 * @note Address: 0x800ADB7C
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamSeqMuteMoveSpeedSePlay() { return seqMuteMoveSpeedSePlay; }

/**
 * @note Address: 0x800ADB84
 * @note Size: 0x8
 */
u32 JAIGlobalParameter::getParamAudioCameraMax() { return audioCameraMax; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
s32 JAIGlobalParameter::getParamSystemTrackMax()
{
	// UNUSED FUNCTION
	return systemTrackMax;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
s32 JAIGlobalParameter::getParamSystemRootTrackMax()
{
	// UNUSED FUNCTION
	return systemRootTrackMax;
}

/**
 * @note Address: 0x800ADB8C
 * @note Size: 0x8
 */
u8 JAIGlobalParameter::getParamSeqParameterLines() { return seqParameterLines; }

/**
 * @note Address: 0x800ADB94
 * @note Size: 0x8
 */
u8 JAIGlobalParameter::getParamStreamParameterLines() { return streamParameterLines; }

/**
 * @note Address: 0x800ADB9C
 * @note Size: 0x8
 */
u16 JAIGlobalParameter::getParamSeDistanceWaitMax() { return seDistanceWaitMax; }
