#include "Dolphin/dvd.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAS/JASPortCmd.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "types.h"

JASPortCmd JAInter::SystemInterface::systemPortCmd;

/**
 * @note Address: 0x800B8EE4
 * @note Size: 0x30
 */
BOOL JAInter::SystemInterface::checkFileExsistence(char* path)
{
	int entryNum = DVDConvertPathToEntrynum(path);
	return (entryNum != -1);
}

/**
 * @note Address: 0x800B8F14
 * @note Size: 0xEC
 */
u8 JAInter::SystemInterface::checkSeqActiveFlag(JASTrack* track)
{
	if (track != nullptr && track->_35B != 0) {
		// this looks like it should be a loop, but loops don't seem to unroll quite right (2 sets of 8 instead of 1 set of 16)
		if (track->mChildList[0] != nullptr || track->mChildList[1] != nullptr || track->mChildList[2] != nullptr
		    || track->mChildList[3] != nullptr || track->mChildList[4] != nullptr || track->mChildList[5] != nullptr
		    || track->mChildList[6] != nullptr || track->mChildList[7] != nullptr || track->mChildList[8] != nullptr
		    || track->mChildList[9] != nullptr || track->mChildList[10] != nullptr || track->mChildList[11] != nullptr
		    || track->mChildList[12] != nullptr || track->mChildList[13] != nullptr || track->mChildList[14] != nullptr
		    || track->mChildList[15] != nullptr) {
			return track->_35B;
		}
		return 0;
	}
	return 0;
}

/**
 * @note Address: 0x800B9000
 * @note Size: 0x4C
 */
JASTrack* JAInter::SystemInterface::trackToSeqp(JAISequence* seq, u8 trackNo)
{
	JASTrack* result = nullptr;
	if (!IsJAISoundIDInUse(seq->mSoundID)) {
		if (seq->mSeqParameter.mTrack.mChildList[trackNo >> 4] != nullptr) {
			result = seq->mSeqParameter.mTrack.mChildList[trackNo >> 4]->mChildList[trackNo & 0xF];
		}
	} else {
		result = seq->mSeqParameter.mTrack.mChildList[trackNo & 0xF];
	}
	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 * trackToSeqp__Q27JAInter15SystemInterfaceFP8JASTrackUcUl
 */
JASTrack* JAInter::SystemInterface::trackToSeqp(JASTrack* track, u8 p2, u32 p3)
{
	JASTrack* result = nullptr;
	if (p3 != 0) {
		if (track->mChildList[p2 >> 4] != nullptr) {
			result = track->mChildList[p2 >> 4]->mChildList[p2 & 0xF];
		}
	} else {
		result = track->mChildList[p2 & 0xF];
	}
	return result;
}

/**
 * @note Address: 0x800B904C
 * @note Size: 0x1C
 */
void JAInter::SystemInterface::setSeqPortargsF32(JAInter::SeqUpdateData* updateData, u32 playerParameterIndex, u8 portArgIndex, f32 value)
{
	updateData->mPlayerParams[playerParameterIndex].mPortArgs.asArray[portArgIndex].f32 = value;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void JAInter::SystemInterface::setSeqPortargsPS16(JAInter::SeqUpdateData* updateData, u32 playerParameterIndex, u8 portArgIndex, s16* value)
{
	// UNUSED FUNCTION
	updateData->mPlayerParams[playerParameterIndex].mPortArgs.asArray[portArgIndex].ps16 = value;
}

/**
 * @note Address: 0x800B9068
 * @note Size: 0x1C
 */
void JAInter::SystemInterface::setSeqPortargsU32(JAInter::SeqUpdateData* updateData, u32 playerParameterIndex, u8 portArgIndex, u32 value)
{
	updateData->mPlayerParams[playerParameterIndex].mPortArgs.asArray[portArgIndex].u32 = value;
}

/**
 * @note Address: 0x800B9084
 * @note Size: 0x58
 */
void JAInter::SystemInterface::rootInit(JAInter::SeqUpdateData* updateData)
{
	JASTrack* track = &updateData->mSequence->mSeqParameter.mTrack;
	outerInit(updateData, track, JAIGlobalParameter::getParamSeqTrackMax(), 0xFFFF, 0);
}

/**
 * @note Address: 0x800B90DC
 * @note Size: 0x88
 */
void JAInter::SystemInterface::trackInit(JAInter::SeqUpdateData* updateData)
{
	JAISequence* seq = updateData->mSequence;
	u32 max          = 16;
	if (!IsJAISoundIDInUse(seq->mSoundID)) {
		max = JAIGlobalParameter::getParamSeqTrackMax();
	}
	for (u32 i = 0; i < max; i++) {
		if ((updateData->_04 & 1 << i) == 0) {
			outerInit(updateData, &seq->mSeqParameter.mTrack, i, 0xFFFF, 0);
		}
	}
}

/**
 * @note Address: 0x800B9164
 * @note Size: 0x288
 */
void JAInter::SystemInterface::outerInit(JAInter::SeqUpdateData* updateData, JASTrack* track, u32 trackNo, u16 paramFlags, u8 p5)
{
	JASTrack* seqP = track;
	if (trackNo != JAIGlobalParameter::getParamSeqTrackMax()) {
		seqP = trackToSeqp(updateData->mSequence, trackNo);
	}
	if (seqP == nullptr) {
		return;
	}
	// PlayerParameter* playerParameter = &updateData->_4C[p3];
	JASPortArgs* portArgs                     = &updateData->mPlayerParams[trackNo].mPortArgs.asStruct;
	updateData->mPlayerParams[trackNo].mTrack = seqP;
	portArgs->mTrack                          = track;
	portArgs->_04                             = trackNo | updateData->mSequence->mSoundID & 0x800;
	updateData->mPlayerParams[trackNo].mCommand.setPortCmd(setSePortParameter, portArgs);
	JASOuterParam* outerParam = seqP->getExtBuffer();
	if (trackNo == JAIGlobalParameter::getParamSeqTrackMax()) {
		portArgs->mTrackVolume = updateData->mSeqVolume;
		portArgs->mTrackPitch  = updateData->mSeqPitch;
		portArgs->mTrackFxmix  = updateData->mSeqFxmix;
		portArgs->mTrackPan    = updateData->mSeqPan;
		portArgs->mTrackDolby  = updateData->mSeqDolby;
		portArgs->mTrackTempo  = updateData->mSeqTempo;
		portArgs->mFlags       = 0xFF;
		outerParam->onSwitch(OUTERPARAM_Tempo);
	} else {
		JAISequence* seq       = updateData->getSequence();
		portArgs->mTrackVolume = seq->mSeqParameter.mTrackVolumes[trackNo].mCurrentValue;
		portArgs->mTrackPitch  = seq->mSeqParameter.mTrackPitches[trackNo].mCurrentValue;
		portArgs->mTrackFxmix  = seq->mSeqParameter.mTrackFxmixes[trackNo].mCurrentValue;
		portArgs->mTrackPan    = seq->mSeqParameter.mTrackPans[trackNo].mCurrentValue;
		portArgs->mTrackDolby  = seq->mSeqParameter.mTrackDolbys[trackNo].mCurrentValue;
		portArgs->_24          = 0;
		portArgs->mFlags       = 0x7F;
		seqP->muteTrack(seq->mSeqParameter.mMuteBits[trackNo]._00);
	}

	outerParam->onSwitch(OUTERPARAM_Volume);
	outerParam->onSwitch(OUTERPARAM_Pitch);
	outerParam->onSwitch(OUTERPARAM_Fxmix);
	outerParam->onSwitch(OUTERPARAM_Pan);
	outerParam->onSwitch(OUTERPARAM_Dolby);
	if (!(paramFlags & OUTERPARAM_Volume)) {
		outerParam->setParam(OUTERPARAM_Volume, 0.0f);
	}
	if (!(paramFlags & OUTERPARAM_Pitch)) {
		outerParam->setParam(OUTERPARAM_Pitch, 0.0f);
	}
	if (!(paramFlags & OUTERPARAM_Fxmix)) {
		outerParam->setParam(OUTERPARAM_Fxmix, 0.0f);
	}
	if (!(paramFlags & OUTERPARAM_Pan)) {
		outerParam->setParam(OUTERPARAM_Pan, 0.0f);
	}
	if (!(paramFlags & OUTERPARAM_Dolby)) {
		outerParam->setParam(OUTERPARAM_Dolby, 0.0f);
	}
	updateData->mPlayerParams[trackNo].mCommand.addPortCmdOnce();
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void JAInter::SystemInterface::setPortParameter(JASPortArgs*, JASTrack*, u32, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B93EC
 * @note Size: 0x1BC
 */
void JAInter::SystemInterface::setSePortParameter(JASPortArgs* args)
{
	u32 soundID     = args->_04 & 0x800;
	u8 trackNo      = args->_04;
	JASTrack* track = args->mTrack;
	if (trackNo != JAIGlobalParameter::getParamSeqTrackMax()) {
		track = trackToSeqp(track, trackNo, soundID);
	}
	if (track == nullptr) {
		return;
	}
	if (args->mFlags & 0x01) {
		track->mExtBuffer->setParam(OUTERPARAM_Volume, args->mTrackVolume);
		args->mFlags = args->mFlags ^ 0x01;
	}
	if (args->mFlags & 0x02) {
		track->mExtBuffer->setParam(OUTERPARAM_Pitch, args->mTrackPitch);
		args->mFlags = args->mFlags ^ 0x02;
	}
	if (args->mFlags & 0x04) {
		track->mExtBuffer->setParam(OUTERPARAM_Pan, args->mTrackPan);
		args->mFlags = args->mFlags ^ 0x04;
	}
	if (args->mFlags & 0x08) {
		track->mExtBuffer->setParam(OUTERPARAM_Fxmix, args->mTrackFxmix);
		args->mFlags = args->mFlags ^ 0x08;
	}
	if (args->mFlags & 0x80) {
		track->mExtBuffer->setParam(OUTERPARAM_Tempo, args->mTrackTempo);
		args->mFlags = args->mFlags ^ 0x80;
	}
	if (args->mFlags & 0x10) {
		track->mExtBuffer->setParam(OUTERPARAM_Dolby, args->mTrackDolby);
		args->mFlags = args->mFlags ^ 0x10;
	}
	if (args->mFlags & 0x40 && args->_24) {
		track->setInterrupt(5);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void JAInter::SystemInterface::JAIouterP(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void JAInter::SystemInterface::JAIouterSW(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void JAInter::SystemInterface::setAudioFrameParameter(JASPortArgs*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void* JAInterface::getAudioThreadPointer()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void* JAInterface::getDvdThreadPointer()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void JAInterface::setAudioThreadPauseFlag(bool)
{
	// UNUSED FUNCTION
}
