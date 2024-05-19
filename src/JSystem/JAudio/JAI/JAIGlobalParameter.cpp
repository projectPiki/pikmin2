#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "types.h"

namespace JAIGlobalParameter {

u8 distanceParameterMoveTime = 3;
u8 audioSystemThreadPriority = 2;
u8 audioDvdThreadPriority    = 3;
u8 seqMuteVolumeSePlay       = 40;
u8 seqParameterLines         = 7;
u8 streamParameterLines      = 7;
u16 seDistanceFxParameter    = 150;
u32 soundSceneMax            = 2;
u32 seRegistMax              = 20;
u32 seTrackMax               = 32;
u32 seqTrackMax              = 32;
u32 seqPlayTrackMax          = 8;
u32 seqControlBufferMax      = 8;
// u32 streamControlBufferMax     = 0xFFFFFFFF; // unused/inlined
// u32 streamParameterBufferMax   = 0xFFFFFFFF; // unused/inlined
u32 autoHeapMax      = 2;
u32 stayHeapMax      = 2;
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
u32 dopplarMoveTime            = 15;
u32 dummyObjectLifeTime        = 600;
u32 dummyObjectMax             = 10;
u32 seqMuteMoveSpeedSePlay     = 3;
u32 audioCameraMax             = 1;
s32 systemTrackMax             = 256;
s32 systemRootTrackMax         = 16;
f32 panDistanceMax             = 500.0f;
f32 panDistance2Max            = 1000.0f;
f32 panAngleParameter          = 12.0f;
f32 panAngleParameter2         = 2.4f;
f32 dopplarParameter           = 3200.0f;
u16 seDistanceWaitMax          = 12;
f32 seDistancepitchMax         = 0.2f;

u16 seDefaultFx;
u32 interfaceHeapSize;
f32 minDistanceVolume;

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamAudioSystemThreadPriority(u8 value)
{
	// UNUSED FUNCTION
	audioSystemThreadPriority = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamAudioDvdThreadPriority(u8 value)
{
	// UNUSED FUNCTION
	audioDvdThreadPriority = value;
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void setParamInitFileLoadSwitch(u8 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AD950
 * @note Size: 0x14
 */
void setParamInitDataPointer(void* value)
{
	JAInter::InitData::aafPointer = (u32*)value;
	JAIBasic::msBasic->_0C        = 4;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamInterfaceHeapSize(u32 value)
{
	// UNUSED FUNCTION
	interfaceHeapSize = value;
}

/**
 * @note Address: 0x800AD964
 * @note Size: 0x8
 */
void setParamSoundSceneMax(u32 value) { soundSceneMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeRegistMax(u32 value)
{
	// UNUSED FUNCTION
	seRegistMax = value;
}

/**
 * @note Address: 0x800AD96C
 * @note Size: 0x8
 */
void setParamSeTrackMax(u32 value) { seTrackMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeqTrackMax(u32 value)
{
	// UNUSED FUNCTION
	seqTrackMax = value;
}

/**
 * @note Address: 0x800AD974
 * @note Size: 0x10
 */
void setParamSeqPlayTrackMax(u32 value)
{
	seqPlayTrackMax     = value;
	seqControlBufferMax = value << 1; // * sizeof(u16);
}

/**
 * @note Address: 0x800AD984
 * @note Size: 0x8
 */
void setParamSeqControlBufferMax(u32 value) { seqControlBufferMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamStreamControlBufferMax(u32 value)
{
	// UNUSED FUNCTION
	streamControlBufferMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamStreamParameterBufferMax(u32 value)
{
	// UNUSED FUNCTION
	streamParameterBufferMax = value;
}

/**
 * @note Address: 0x800AD98C
 * @note Size: 0x8
 */
void setParamAutoHeapMax(u32 value) { autoHeapMax = value; }

/**
 * @note Address: 0x800AD994
 * @note Size: 0x8
 */
void setParamStayHeapMax(u32 value) { stayHeapMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamInputGainDown(f32 value)
{
	// UNUSED FUNCTION
	inputGainDown = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamOutputGainUp(f32 value)
{
	// UNUSED FUNCTION
	outputGainUp = value;
}

/**
 * @note Address: 0x800AD99C
 * @note Size: 0x8
 */
void setParamDistanceMax(f32 value) { distanceMax = value; }

/**
 * @note Address: 0x800AD9A4
 * @note Size: 0x8
 */
void setParamMaxVolumeDistance(f32 value) { maxVolumeDistance = value; }

/**
 * @note Address: 0x800AD9AC
 * @note Size: 0x8
 */
void setParamMinDistanceVolume(f32 value) { minDistanceVolume = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeDistanceFxParameter(u16 value)
{
	// UNUSED FUNCTION
	seDistanceFxParameter = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void setParamInitDataLoadOffFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void setParamStreamUseOffFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void setParamStreamDecodedBufferBlocks(u32 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AD9B4
 * @note Size: 0x14
 */
void setParamStreamInsideBufferCut(bool value) { JAIBasic::getInterface()->mFlags._04 = value; }

/**
 * @note Address: 0x800AD9C8
 * @note Size: 0x8
 */
void setParamAutoHeapRoomSize(u32 value) { autoHeapRoomSize = value; }

/**
 * @note Address: 0x800AD9D0
 * @note Size: 0x8
 */
void setParamStayHeapSize(u32 value) { stayHeapSize = value; }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void setParamSeDolbyCenterValue(u8 value)
{
	// UNUSED FUNCTION
	seDolbyCenterValue = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeDolbyFrontDistanceMax(f32 value)
{
	// UNUSED FUNCTION
	seDolbyFrontDistanceMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeDolbyBehindDistanceMax(f32 value)
{
	// UNUSED FUNCTION
	seDolbyBehindDistanceMax = value;
}

/**
 * @note Address: 0x800AD9D8
 * @note Size: 0x8
 */
void setParamInitDataFileName(char* value) { initDataFileName = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSoundTableFileName(char* value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamWavePath(char* value)
{
	// UNUSED FUNCTION
	wavePath = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSequenceArchivesPath(char* value)
{
	// UNUSED FUNCTION
	sequenceArchivesPath = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamStreamPath(char* value)
{
	// UNUSED FUNCTION
	streamPath = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamAudioResPath(char* value)
{
	// UNUSED FUNCTION
	audioResPath = value;
}

/**
 * @note Address: 0x800AD9E0
 * @note Size: 0x8
 */
void setParamSequenceArchivesFileName(char* value) { sequenceArchivesFileName = value; }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void setParamSeqEntryCancelFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void setParamStreamEntryCancelFlag(bool value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamDopplarMoveTime(u32 value)
{
	// UNUSED FUNCTION
	dopplarMoveTime = value;
}

/**
 * @note Address: 0x800AD9E8
 * @note Size: 0x8
 */
void setParamDistanceParameterMoveTime(u8 value) { distanceParameterMoveTime = value; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamDummyObjectLifeTime(u32 value)
{
	// UNUSED FUNCTION
	dummyObjectLifeTime = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamDummyObjectMax(u32 value)
{
	// UNUSED FUNCTION
	dummyObjectMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeqMuteVolumeSePlay(u8 value)
{
	// UNUSED FUNCTION
	seqMuteVolumeSePlay = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeqMuteMoveSpeedSePlay(u32 value)
{
	// UNUSED FUNCTION
	seqMuteMoveSpeedSePlay = value;
}

/**
 * @note Address: 0x800AD9F0
 * @note Size: 0x8
 */
void setParamAudioCameraMax(u32 value) { audioCameraMax = value; }

/**
 * @note Address: 0x800AD9F8
 * @note Size: 0x8
 */
void setParamSystemTrackMax(s32 value) { systemTrackMax = value; }

/**
 * @note Address: 0x800ADA00
 * @note Size: 0x8
 */
void setParamSystemRootTrackMax(s32 value) { systemRootTrackMax = value; }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void setParamPanDistanceMax(f32 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void setParamPanAngleParameter(f32 value)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamDopplarParameter(f32 value)
{
	// UNUSED FUNCTION
	dopplarParameter = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeDistanceWaitMax(u16 value)
{
	// UNUSED FUNCTION
	seDistanceWaitMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeDistancepitchMax(f32 value)
{
	// UNUSED FUNCTION
	seDistancepitchMax = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamSeqParameterLines(u8 value)
{
	// UNUSED FUNCTION
	seqParameterLines = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void setParamStreamParameterLines(u8 value)
{
	// UNUSED FUNCTION
	streamParameterLines = value;
}

/**
 * @note Address: 0x800ADA08
 * @note Size: 0x68
 */
void setParamSoundOutputMode(u32 outputMode)
{
	u32 mode = JASOUTPUT_Stereo;
	switch (outputMode) {
	case JASOUTPUT_Mono:
		mode = JASOUTPUT_Mono;
		break;
	case JASOUTPUT_Stereo:
		mode = JASOUTPUT_Stereo;
		break;
	case JASOUTPUT_Surround:
		mode = JASOUTPUT_Surround;
		break;
	}
	JAIBasic::msBasic->mParamSoundOutputMode = outputMode;
	JASDriver::setOutputMode(mode);
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u8 getParamAudioSystemThreadPriority()
{
	// UNUSED FUNCTION
	return audioSystemThreadPriority;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u8 getParamAudioDvdThreadPriority()
{
	// UNUSED FUNCTION
	return audioDvdThreadPriority;
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
u8 getParamInitFileLoadSwitch()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void* getParamInitDataPointer()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 getParamInterfaceHeapSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ADA70
 * @note Size: 0x24
 */
u32 getParamSeCategoryMax() { return JAInter::SoundTable::getCategotyMax(); }

/**
 * @note Address: 0x800ADA94
 * @note Size: 0x8
 */
u32 getParamSoundSceneMax() { return soundSceneMax; }

/**
 * @note Address: 0x800ADA9C
 * @note Size: 0x8
 */
u32 getParamSeRegistMax() { return seRegistMax; }

/**
 * @note Address: 0x800ADAA4
 * @note Size: 0x8
 */
u32 getParamSeTrackMax() { return seTrackMax; }

/**
 * @note Address: 0x800ADAAC
 * @note Size: 0x8
 */
u32 getParamSeqTrackMax() { return seqTrackMax; }

/**
 * @note Address: 0x800ADAB4
 * @note Size: 0x8
 */
u32 getParamSeqControlBufferMax() { return seqControlBufferMax; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 getParamStreamControlBufferMax()
{
	// UNUSED FUNCTION
	return streamControlBufferMax;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 getParamStreamParameterBufferMax()
{
	// UNUSED FUNCTION
	return streamParameterBufferMax;
}

/**
 * @note Address: 0x800ADABC
 * @note Size: 0x8
 */
u32 getParamAutoHeapMax() { return autoHeapMax; }

/**
 * @note Address: 0x800ADAC4
 * @note Size: 0x8
 */
u32 getParamStayHeapMax() { return stayHeapMax; }

/**
 * @note Address: 0x800ADACC
 * @note Size: 0x8
 */
u32 getParamSeqPlayTrackMax() { return seqPlayTrackMax; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 getParamInputGainDown()
{
	// UNUSED FUNCTION
	return inputGainDown;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 getParamOutputGainUp()
{
	// UNUSED FUNCTION
	return outputGainUp;
}

/**
 * @note Address: 0x800ADAD4
 * @note Size: 0x8
 */
f32 getParamDistanceMax() { return distanceMax; }

/**
 * @note Address: 0x800ADADC
 * @note Size: 0x8
 */
f32 getParamMaxVolumeDistance() { return maxVolumeDistance; }

/**
 * @note Address: 0x800ADAE4
 * @note Size: 0x8
 */
f32 getParamMinDistanceVolume() { return minDistanceVolume; }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
u32 getParamSoundOutputMode()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u16 getParamSeDistanceFxParameter()
{
	// UNUSED FUNCTION
	return seDistanceFxParameter;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool getParamInitDataLoadOffFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool getParamStreamUseOffFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ADAEC
 * @note Size: 0x20
 */
u32 getParamStreamDecodedBufferBlocks() { return JAInter::StreamMgr::getDecodedBufferBlocks(); }

/**
 * @note Address: 0x800ADB0C
 * @note Size: 0x8
 */
u32 getParamAutoHeapRoomSize() { return autoHeapRoomSize; }

/**
 * @note Address: 0x800ADB14
 * @note Size: 0x8
 */
u32 getParamStayHeapSize() { return stayHeapSize; }

/**
 * @note Address: 0x800ADB1C
 * @note Size: 0x8
 */
f32 getParamSeDolbyCenterValue() { return seDolbyCenterValue; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 getParamSeDolbyFrontDistanceMax()
{
	// UNUSED FUNCTION
	return seDolbyFrontDistanceMax;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 getParamSeDolbyBehindDistanceMax()
{
	// UNUSED FUNCTION
	return seDolbyBehindDistanceMax;
}

/**
 * @note Address: 0x800ADB24
 * @note Size: 0x8
 */
char* getParamInitDataFileName() { return initDataFileName; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
char* getParamSoundTableFileName()
{
	// UNUSED FUNCTION
	return soundTableFileName;
}

/**
 * @note Address: 0x800ADB2C
 * @note Size: 0x8
 */
char* getParamWavePath() { return wavePath; }

/**
 * @note Address: 0x800ADB34
 * @note Size: 0x8
 */
char* getParamSequenceArchivesPath() { return sequenceArchivesPath; }

/**
 * @note Address: 0x800ADB3C
 * @note Size: 0x8
 */
char* getParamStreamPath() { return streamPath; }

/**
 * @note Address: 0x800ADB44
 * @note Size: 0x8
 */
char* getParamAudioResPath() { return audioResPath; }

/**
 * @note Address: 0x800ADB4C
 * @note Size: 0x8
 */
char* getParamSequenceArchivesFileName() { return sequenceArchivesFileName; }

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool getParamSeqEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
bool getParamStreamEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ADB54
 * @note Size: 0x8
 */
u32 getParamDopplarMoveTime() { return dopplarMoveTime; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 getParamDopplarParameter()
{
	// UNUSED FUNCTION
	return dopplarParameter;
}

/**
 * @note Address: 0x800ADB5C
 * @note Size: 0x8
 */
u8 getParamDistanceParameterMoveTime() { return distanceParameterMoveTime; }

/**
 * @note Address: 0x800ADB64
 * @note Size: 0x8
 */
u32 getParamDummyObjectLifeTime() { return dummyObjectLifeTime; }

/**
 * @note Address: 0x800ADB6C
 * @note Size: 0x8
 */
u32 getParamDummyObjectMax() { return dummyObjectMax; }

/**
 * @note Address: 0x800ADB74
 * @note Size: 0x8
 */
u8 getParamSeqMuteVolumeSePlay() { return seqMuteVolumeSePlay; }

/**
 * @note Address: 0x800ADB7C
 * @note Size: 0x8
 */
u32 getParamSeqMuteMoveSpeedSePlay() { return seqMuteMoveSpeedSePlay; }

/**
 * @note Address: 0x800ADB84
 * @note Size: 0x8
 */
u32 getParamAudioCameraMax() { return audioCameraMax; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
s32 getParamSystemTrackMax()
{
	// UNUSED FUNCTION
	return systemTrackMax;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
s32 getParamSystemRootTrackMax()
{
	// UNUSED FUNCTION
	return systemRootTrackMax;
}

/**
 * @note Address: 0x800ADB8C
 * @note Size: 0x8
 */
u8 getParamSeqParameterLines() { return seqParameterLines; }

/**
 * @note Address: 0x800ADB94
 * @note Size: 0x8
 */
u8 getParamStreamParameterLines() { return streamParameterLines; }

/**
 * @note Address: 0x800ADB9C
 * @note Size: 0x8
 */
u16 getParamSeDistanceWaitMax() { return seDistanceWaitMax; }

} // namespace JAIGlobalParameter
