#include "JSystem/JAudio/JAS/JASSeqParser.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "JSystem/JAudio/JAS/JASPlayer.h"

JASSeqParser::CmdFunc JASSeqParser::sCmdPList[64] = {
	nullptr,
	&JASSeqParser::cmdOpenTrack,
	&JASSeqParser::cmdOpenTrackBros,
	nullptr,
	&JASSeqParser::cmdCall,
	nullptr,
	&JASSeqParser::cmdRet,
	nullptr,
	&JASSeqParser::cmdJmp,
	&JASSeqParser::cmdLoopS,
	&JASSeqParser::cmdLoopE,
	&JASSeqParser::cmdReadPort,
	&JASSeqParser::cmdWritePort,
	&JASSeqParser::cmdCheckPortImport,
	&JASSeqParser::cmdCheckPortExport,
	&JASSeqParser::cmdWait,
	nullptr,
	&JASSeqParser::cmdParentWritePort,
	&JASSeqParser::cmdChildWritePort,
	nullptr,
	&JASSeqParser::cmdSetLastNote,
	&JASSeqParser::cmdTimeRelate,
	&JASSeqParser::cmdSimpleOsc,
	&JASSeqParser::cmdSimpleEnv,
	&JASSeqParser::cmdSimpleADSR,
	&JASSeqParser::cmdTranspose,
	&JASSeqParser::cmdCloseTrack,
	&JASSeqParser::cmdOutSwitch,
	&JASSeqParser::cmdUpdateSync,
	&JASSeqParser::cmdBusConnect,
	&JASSeqParser::cmdPauseStatus,
	&JASSeqParser::cmdSetInterrupt,
	&JASSeqParser::cmdDisInterrupt,
	&JASSeqParser::cmdClrI,
	&JASSeqParser::cmdSetI,
	&JASSeqParser::cmdRetI,
	&JASSeqParser::cmdIntTimer,
	&JASSeqParser::cmdVibDepth,
	&JASSeqParser::cmdVibDepthMidi,
	&JASSeqParser::cmdSyncCPU,
	&JASSeqParser::cmdFlushAll,
	&JASSeqParser::cmdFlushRelease,
	&JASSeqParser::cmdWait,
	&JASSeqParser::cmdPanPowSet,
	&JASSeqParser::cmdIIRSet,
	&JASSeqParser::cmdFIRSet,
	&JASSeqParser::cmdEXTSet,
	&JASSeqParser::cmdPanSwSet,
	&JASSeqParser::cmdOscRoute,
	&JASSeqParser::cmdIIRCutOff,
	&JASSeqParser::cmdOscFull,
	&JASSeqParser::cmdVolumeMode,
	&JASSeqParser::cmdVibPitch,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&JASSeqParser::cmdCheckWave,
	&JASSeqParser::cmdPrintf,
	&JASSeqParser::cmdNop,
	&JASSeqParser::cmdTempo,
	&JASSeqParser::cmdTimeBase,
	&JASSeqParser::cmdFinish,
};

struct Arg_s { // @fabricatedName
	u16 m00;
	u16 m02;
};
// clang-format off
const Arg_s Arglist[0x40] = {
	{0x0000, 0x0000},
	{0x0002, 0x0008},
	{0x0002, 0x0008},
	{0x0001, 0x0002},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0001, 0x0000},
	{0x0001, 0x0002},
	{0x0000, 0x0000},
	{0x0001, 0x0001},
	{0x0000, 0x0000},
	{0x0002, 0x0000},
	{0x0002, 0x000C},
	{0x0001, 0x0000},
	{0x0001, 0x0000},
	{0x0001, 0x0003},
	{0x0000, 0x0000},
	{0x0002, 0x000C},
	{0x0002, 0x000C},
	{0x0000, 0x0000},
	{0x0001, 0x0000},
	{0x0001, 0x0000},
	{0x0001, 0x0000},
	{0x0002, 0x0008},
	{0x0005, 0x0155},
	{0x0001, 0x0000},
	{0x0001, 0x0000},
	{0x0001, 0x0000},
	{0x0001, 0x0001},
	{0x0002, 0x0004},
	{0x0001, 0x0000},
	{0x0002, 0x0008},
	{0x0001, 0x0000},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0002, 0x0004},
	{0x0001, 0x0000},
	{0x0001, 0x0001},
	{0x0001, 0x0001},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0001, 0x0002},
	{0x0005, 0x0000},
	{0x0004, 0x0055},
	{0x0001, 0x0002},
	{0x0001, 0x0002},
	{0x0003, 0x0000},
	{0x0001, 0x0000},
	{0x0001, 0x0000},
	{0x0003, 0x0028},
	{0x0001, 0x0000},
	{0x0001, 0x0000},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0001, 0x0001},
	{0x0000, 0x0000},
	{0x0000, 0x0000},
	{0x0001, 0x0001},
	{0x0001, 0x0001},
	{0x0000, 0x0000},
};
// clang-format on

/**
 * @note Address: 0x8009CAB8
 * @note Size: 0x58
 */
int JASSeqParser::cmdOpenTrack(JASTrack* track, u32* args)
{
	u32 addr        = args[1];
	JASTrack* child = track->openChild(args[0] & 0xf, (args[0] >> 6) & 3);
	child->start(track->getSeq()->mRawFilePtr, addr);
	return 0;
}

/**
 * @note Address: 0x8009CB10
 * @note Size: 0x68
 */
int JASSeqParser::cmdOpenTrackBros(JASTrack* track, u32* args)
{
	if (!track->mParentTrack) {
		return 0;
	}

	u32 addr        = args[1];
	JASTrack* child = track->mParentTrack->openChild(args[0] & 0xf, (args[0] >> 6) & 3);
	child->start(track->getSeq()->mRawFilePtr, addr);
	return 0;
}

/**
 * @note Address: 0x8009CB78
 * @note Size: 0x108
 */
int JASSeqParser::cmdCall(JASTrack* track, u32* args)
{
	JASSeqCtrl* ctrl = track->getSeq();
	u8 flag          = ctrl->readByte();

	u32 data;
	if (flag & 0x80) {
		u8 cData = ctrl->readByte();
		data     = track->readReg16(cData);

		if (flag & 0x40) {
			u32 offs;
			if (flag & 0x20) {
				cData = ctrl->readByte();
				offs  = track->readReg16(cData);
			} else {
				offs = ctrl->read24();
			}
			data = ctrl->get24(offs + data * 3);
		}
	} else {
		data = ctrl->read24();
	}

	if (conditionCheck(track, flag)) {
		ctrl->mLoopStartPositions[ctrl->mLoopIndex++] = ctrl->mCurrentFilePtr;
		ctrl->mCurrentFilePtr                         = ctrl->mRawFilePtr + data;
	}
	return 0;
}

/**
 * @note Address: 0x8009CC80
 * @note Size: 0x84
 */
int JASSeqParser::cmdRet(JASTrack* track, u32* args)
{
	if (conditionCheck(track, args[0])) {
		JASSeqCtrl* ctrl = &track->mSeqCtrl;

		bool looped;
		if (!ctrl->mLoopIndex) {
			looped = false;
		} else {
			looped                = true;
			ctrl->mCurrentFilePtr = ctrl->mLoopStartPositions[--ctrl->mLoopIndex];
		}

		if (!looped) {
			return 3;
		}
	}

	return 0;
}

/**
 * @note Address: 0x8009CD04
 * @note Size: 0x144
 */
int JASSeqParser::cmdJmp(JASTrack* track, u32* args)
{
	JASSeqCtrl* ctrl = track->getSeq();
	u8 flag          = ctrl->readByte();
	bool usetrackptr = false;
	int trackptr     = 0;
	u32 data;

	if (flag & 0x80) {
		u8 cData = ctrl->readByte();

		if (flag & 0x40) {
			data = track->readReg16(cData) & 0xffff;
			u32 offs;
			if (flag & 0x20) {
				cData = ctrl->readByte();
				offs  = track->readReg16(cData);
			} else {
				offs = ctrl->read24();
			}
			data = ctrl->get24(offs + data * 3);
		} else {
			if (cData >= 0x28 && 0x2b >= cData) {
				trackptr    = track->readReg32(cData);
				usetrackptr = true;
			} else {
				data = track->readReg32(cData);
			}
		}
	} else {
		data = ctrl->read24();
	}

	if (conditionCheck(track, flag)) {
		if (usetrackptr) {
			ctrl->start((void*)trackptr, 0);
		} else {
			ctrl->jump(data);
		}
	}
	return 0;
}

/**
 * @note Address: 0x8009CE48
 * @note Size: 0x3C
 */
int JASSeqParser::cmdLoopS(JASTrack* track, u32* args)
{
	u32 addr = args[0];

	JASSeqCtrl* ctrl                            = &track->mSeqCtrl;
	ctrl->mLoopStartPositions[ctrl->mLoopIndex] = ctrl->mCurrentFilePtr;
	ctrl->mLoopTimers[ctrl->mLoopIndex++]       = addr;
	return 0;
}

/**
 * @note Address: 0x8009CE84
 * @note Size: 0x28
 */
int JASSeqParser::cmdLoopE(JASTrack* track, u32* args)
{
	track->getSeq()->loopEnd();
	return 0;
}

/**
 * @note Address: 0x8009CEAC
 * @note Size: 0x58
 */
int JASSeqParser::cmdReadPort(JASTrack* track, u32* args)
{
	u16 port = track->readSelfPort(args[0]);
	track->writeRegDirect(args[1], port);
	return 0;
}

/**
 * @note Address: 0x8009CF04
 * @note Size: 0x34
 */
int JASSeqParser::cmdWritePort(JASTrack* track, u32* args)
{
	track->writeSelfPort(args[0], args[1]);
	return 0;
}

/**
 * @note Address: 0x8009CF38
 * @note Size: 0x38
 */
int JASSeqParser::cmdParentWritePort(JASTrack* track, u32* args)
{
	track->mParentTrack->writePortAppDirect(args[0] & 0xf, args[1]);
	return 0;
}

/**
 * @note Address: 0x8009CF70
 * @note Size: 0x44
 */
int JASSeqParser::cmdChildWritePort(JASTrack* track, u32* args)
{
	u8 a1 = args[0] & 0xF;
	track->mChildList[(args[0] / 16) & 0xF]->writePortAppDirect(a1, args[1]);
	return 0;
}

/**
 * @note Address: 0x8009CFB4
 * @note Size: 0x18
 */
int JASSeqParser::cmdCheckPortImport(JASTrack* track, u32* args)
{
	track->mRegisterParam._00[3] = track->mTrackPort.mImportFlag[args[0]];
	return 0;
}

/**
 * @note Address: 0x8009CFCC
 * @note Size: 0x18
 */
int JASSeqParser::cmdCheckPortExport(JASTrack* track, u32* args)
{
	track->mRegisterParam._00[3] = track->mTrackPort.mExportFlag[args[0]];
	return 0;
}

/**
 * @note Address: 0x8009CFE4
 * @note Size: 0x18
 */
int JASSeqParser::cmdWait(JASTrack* track, u32* args)
{
	return (track->getSeq()->mWaitTimer = args[0]) != 0;
}

/**
 * @note Address: 0x8009CFFC
 * @note Size: 0x48
 */
int JASSeqParser::cmdSetLastNote(JASTrack* track, u32* args)
{
	u32 note = args[0];
	note += track->getTranspose();
	track->_E5 = note;
	return 0;
}

/**
 * @note Address: 0x8009D044
 * @note Size: 0x1C
 */
int JASSeqParser::cmdTimeRelate(JASTrack* track, u32* args)
{
	track->mTimeRelate = args[0] != 0;
	return 0;
}

/**
 * @note Address: 0x8009D060
 * @note Size: 0x30
 */
int JASSeqParser::cmdSimpleOsc(JASTrack* track, u32* args)
{
	track->oscSetupSimple(args[0]);
	return 0;
}

/**
 * @note Address: 0x8009D090
 * @note Size: 0x34
 */
int JASSeqParser::cmdSimpleEnv(JASTrack* track, u32* args)
{
	track->oscSetupSimpleEnv(args[0], args[1]);
	return 0;
}

/**
 * @note Address: 0x8009D0C4
 * @note Size: 0x70
 */
int JASSeqParser::cmdSimpleADSR(JASTrack* track, u32* args)
{
	track->mOscData[0]         = JASPlayer::sAdsrDef;
	track->mOscData[0].mAttack = track->_2E0;
	track->_2E0[1]             = args[0];
	track->_2E0[4]             = args[1];
	track->_2E0[7]             = args[2];
	track->_2E0[8]             = args[3];
	track->_350                = args[4];
	return 0;
}

/**
 * @note Address: 0x8009D134
 * @note Size: 0x10
 */
int JASSeqParser::cmdTranspose(JASTrack* track, u32* args)
{
	track->mTranspose = args[0];
	return 0;
}

/**
 * @note Address: 0x8009D144
 * @note Size: 0x54
 */
int JASSeqParser::cmdCloseTrack(JASTrack* track, u32* args)
{
	u8 id = args[0];
	if (!track->mChildList[id]) {
		return 0;
	}

	track->mChildList[id]->close();
	track->mChildList[id] = nullptr;
	return 0;
}

/**
 * @note Address: 0x8009D198
 * @note Size: 0x54
 */
int JASSeqParser::cmdOutSwitch(JASTrack* track, u32* args)
{
	JASOuterParam* param = track->mExtBuffer;
	if (param) {
		param->setOuterSwitch(args[0]);
		param->setOuterUpdate(0xffff);
	}
	return 0;
}

/**
 * @note Address: 0x8009D1EC
 * @note Size: 0x2C
 */
int JASSeqParser::cmdUpdateSync(JASTrack* track, u32* args)
{
	track->updateTrack(args[0]);
	return 0;
}

/**
 * @note Address: 0x8009D218
 * @note Size: 0x30
 */
int JASSeqParser::cmdBusConnect(JASTrack* track, u32* args)
{
	track->connectBus(args[0], args[1]);
	return 0;
}

/**
 * @note Address: 0x8009D248
 * @note Size: 0x10
 */
int JASSeqParser::cmdPauseStatus(JASTrack* track, u32* args)
{
	track->mPauseStatus = args[0];
	return 0;
}

/**
 * @note Address: 0x8009D258
 * @note Size: 0x10
 */
int JASSeqParser::cmdVolumeMode(JASTrack* track, u32* args)
{
	track->mVolumeMode = args[0];
	return 0;
}

/**
 * @note Address: 0x8009D268
 * @note Size: 0x38
 */
int JASSeqParser::cmdSetInterrupt(JASTrack* track, u32* args)
{
	track->mIntrMgr.setIntr(args[0], track->getSeq()->mRawFilePtr + args[1]);
	return 0;
}

/**
 * @note Address: 0x8009D2A0
 * @note Size: 0x2C
 */
int JASSeqParser::cmdDisInterrupt(JASTrack* track, u32* args)
{
	track->mIntrMgr.resetInter(args[0]);
	return 0;
}

/**
 * @note Address: 0x8009D2CC
 * @note Size: 0x18
 */
int JASSeqParser::cmdClrI(JASTrack* track, u32* args)
{
	track->mIntrMgr.mIsActive         = true;
	track->getSeq()->mPreviousFilePtr = nullptr;
	return 0;
}

/**
 * @note Address: 0x8009D2E4
 * @note Size: 0x10
 */
int JASSeqParser::cmdSetI(JASTrack* track, u32* args)
{
	track->mIntrMgr.mIsActive = false;
	return 0;
}

/**
 * @note Address: 0x8009D2F4
 * @note Size: 0x50
 */
int JASSeqParser::cmdRetI(JASTrack* track, u32* args)
{
	track->mIntrMgr.mIsActive = true;
	track->getSeq()->retIntr();
	track->tryInterrupt();
	return track->getSeq()->mWaitTimer > 0;
}

/**
 * @note Address: 0x8009D344
 * @note Size: 0x1C
 */
int JASSeqParser::cmdIntTimer(JASTrack* track, u32* args)
{
	u32 time                    = args[1];
	track->mIntrMgr.mTimerCount = args[0];
	track->mIntrMgr.mTimer      = time;
	track->mIntrMgr.mMaxTime    = time;
	return 0;
}

/**
 * @note Address: 0x8009D360
 * @note Size: 0x58
 */
int JASSeqParser::cmdSyncCPU(JASTrack* track, u32* args)
{
	u16 sync = -1;
	if (track->sCallBackFunc) {
		sync = track->sCallBackFunc(track, args[0]);
	}
	track->mRegisterParam._00[3] = sync;
	return 0;
}

/**
 * @note Address: 0x8009D3B8
 * @note Size: 0x8
 */
int JASSeqParser::cmdFlushAll(JASTrack*, u32*)
{
	return 0x0;
}

/**
 * @note Address: 0x8009D3C0
 * @note Size: 0x8
 */
int JASSeqParser::cmdFlushRelease(JASTrack*, u32*)
{
	return 0x0;
}

/**
 * @note Address: 0x8009D3C8
 * @note Size: 0x30
 */
int JASSeqParser::cmdTimeBase(JASTrack* track, u32* args)
{
	track->setTimebase(args[0]);
	return 0;
}

/**
 * @note Address: 0x8009D3F8
 * @note Size: 0x30
 */
int JASSeqParser::cmdTempo(JASTrack* track, u32* args)
{
	track->setTempo(args[0]);
	return 0;
}

/**
 * @note Address: 0x8009D428
 * @note Size: 0x8
 */
int JASSeqParser::cmdFinish(JASTrack*, u32*)
{
	return 0x3;
}

/**
 * @note Address: 0x8009D430
 * @note Size: 0x8
 */
int JASSeqParser::cmdNop(JASTrack*, u32*)
{
	return 0x0;
}

/**
 * @note Address: 0x8009D438
 * @note Size: 0x84
 */
int JASSeqParser::cmdPanPowSet(JASTrack* track, u32* args)
{
	track->mRegisterParam._10    = args[0];
	track->mRegisterParam._12    = args[1];
	track->mRegisterParam._14    = args[2];
	track->mRegisterParam._16[0] = args[3] * 327.67f;
	track->mRegisterParam._16[1] = args[4] * 327.67f;
	return 0;
}

/**
 * @note Address: 0x8009D4BC
 * @note Size: 0x34
 */
int JASSeqParser::cmdFIRSet(JASTrack* track, u32* args)
{
	track->mExtBuffer->setFirFilter((s16*)((u32)track->getSeq()->getAddr(args[0])));
	return 0;
}

/**
 * @note Address: 0x8009D4F0
 * @note Size: 0x54
 */
int JASSeqParser::cmdEXTSet(JASTrack* track, u32* args)
{
	JASOuterParam* param = (JASOuterParam*)(track->getSeq()->getAddr(args[0]));
	param->initExtBuffer();
	track->assignExtBuffer(param);
	return 0;
}

/**
 * @note Address: 0x8009D544
 * @note Size: 0xF8
 */
int JASSeqParser::cmdPanSwSet(JASTrack* track, u32* args)
{
	u8 calcTypes[]       = { 0, 0, 0, 1, 1, 2, 2 };
	u8 parentCalcTypes[] = { 0, 1, 2, 0, 2, 0, 2 };

	// pan?
	track->mPanCalcType                 = calcTypes[args[0] >> 5];
	track->mParentPanCalcType           = parentCalcTypes[args[0] >> 5];
	track->mChannelUpdater.mPanCalcType = args[0] & 0x1f;
	track->mUpdateFlags |= (OUTERPARAM_Fxmix | OUTERPARAM_Pan | OUTERPARAM_Dolby);

	// fxmix?
	track->mFxmixCalcType                 = calcTypes[args[1] >> 5];
	track->mParentFxmixCalcType           = parentCalcTypes[args[1] >> 5];
	track->mChannelUpdater.mFxMixCalcType = args[1] & 0x1f;
	track->mUpdateFlags |= (OUTERPARAM_Fxmix | OUTERPARAM_Pan | OUTERPARAM_Dolby);

	// dolby?
	track->mDolbyCalcType                 = calcTypes[args[2] >> 5];
	track->mParentDolbyCalcType           = parentCalcTypes[args[2] >> 5];
	track->mChannelUpdater.mDolbyCalcType = args[2] & 0x1f;
	track->mUpdateFlags |= (OUTERPARAM_Fxmix | OUTERPARAM_Pan | OUTERPARAM_Dolby);
	return 0;
}

/**
 * @note Address: 0x8009D63C
 * @note Size: 0x1C
 */
int JASSeqParser::cmdOscRoute(JASTrack* track, u32* args)
{
	track->mOscRoute[(args[0] / 16) & 0xF] = args[0] & 0xF;
	return 0;
}

/**
 * @note Address: 0x8009D658
 * @note Size: 0x48
 */
int JASSeqParser::cmdVibDepth(JASTrack* track, u32* args)
{
	f32 depth = ((u8)args[0] << 8 | (u8)args[0] << 1);
	depth /= 393204.0f;
	track->mVibrate.mDepth = depth;
	return 0;
}

/**
 * @note Address: 0x8009D6A0
 * @note Size: 0x38
 */
int JASSeqParser::cmdVibDepthMidi(JASTrack* track, u32* args)
{
	f32 depth = args[0];
	depth /= 393204.0f;
	track->mVibrate.mDepth = depth;
	return 0;
}

/**
 * @note Address: 0x8009D6D8
 * @note Size: 0x48
 */
int JASSeqParser::cmdVibPitch(JASTrack* track, u32* args)
{
	f32 pitch = u16((u8)args[0] << 8 | (u8)args[0] << 1);
	pitch /= 294903.0f;
	track->mVibrate.mPitch = pitch;
	return 0;
}

/**
 * @note Address: 0x8009D720
 * @note Size: 0xF4
 */
int JASSeqParser::cmdIIRSet(JASTrack* track, u32* args)
{
	for (int i = 0; i < 4; i++) {
		track->mTimedParam.mInnerParam.mIIRs[i].mTargetValue  = (s16)args[i] / SHORT_FLOAT_MAX;
		track->mTimedParam.mInnerParam.mIIRs[i].mCurrentValue = track->mTimedParam.mInnerParam.mIIRs[i].mTargetValue;
		track->mTimedParam.mInnerParam.mIIRs[i].mMoveAmount   = 0.0f;
		track->mTimedParam.mInnerParam.mIIRs[i].mMoveTime     = 1.0f;
	}
	return 0;
}

/**
 * @note Address: 0x8009D814
 * @note Size: 0xF8
 */
int JASSeqParser::cmdIIRCutOff(JASTrack* track, u32* args)
{
	s16* table = &JASPlayer::CUTOFF_TO_IIR_TABLE[u8(args[0]) * 4];
	for (int i = 0; i < 4; i++) {
		track->mTimedParam.mInnerParam.mIIRs[i].mTargetValue  = table[i] / (SHORT_FLOAT_MAX - 1.0f);
		track->mTimedParam.mInnerParam.mIIRs[i].mCurrentValue = track->mTimedParam.mInnerParam.mIIRs[i].mTargetValue;
		track->mTimedParam.mInnerParam.mIIRs[i].mMoveAmount   = 0.0f;
		track->mTimedParam.mInnerParam.mIIRs[i].mMoveTime     = 1.0f;
	}
	return 0;
}

/**
 * @note Address: 0x8009D90C
 * @note Size: 0x3C
 */
int JASSeqParser::cmdOscFull(JASTrack* track, u32* args)
{
	track->oscSetupFull(args[0], args[1], args[2]);
	return 0;
}

/**
 * @note Address: 0x8009D948
 * @note Size: 0x10
 */
int JASSeqParser::cmdCheckWave(JASTrack* track, u32* args)
{
	track->mRegisterParam._00[3] = 0;
	return 0;
}

/**
 * @note Address: 0x8009D958
 * @note Size: 0x214
 */
int JASSeqParser::cmdPrintf(JASTrack* track, u32* args)
{
	char buf[128];
	u8 byteArray[4];
	int registers[4];
	u32 count = 0;

	for (u32 i = 0; i < 128; i++) {
		buf[i] = track->getSeq()->readByte();
		if (!buf[i]) {
			break;
		}
		if (buf[i] == '\\') {
			buf[i] = track->getSeq()->readByte();
			if (!buf[i]) {
				break;
			}

			switch (buf[i]) {
			case 'n':
				buf[i] = '\r';
				continue;
			default:
				continue;
			}
		}

		if (buf[i] != '%') {
			continue;
		}

		buf[++i] = track->getSeq()->readByte();
		if (!buf[i]) {
			break;
		}

		switch (buf[i]) {
		case 'd':
			byteArray[count] = 0;
			break;
		case 'x':
			byteArray[count] = 1;
			break;
		case 's':
			byteArray[count] = 2;
			break;
		case 'r':
			byteArray[count] = 3;
			buf[i]           = 'd';
			break;
		case 'R':
			byteArray[count] = 4;
			buf[i]           = 'x';
			break;
		case 't':
			byteArray[count] = 5;
			buf[i]           = 'x';
			break;
		}
		count++;
	}

	for (u32 i = 0; i < count; i++) {
		registers[i] = track->getSeq()->readByte();
		if (byteArray[i] == 2) {
			registers[i] = (int)&track->getSeq()->mRawFilePtr[registers[i]];
		} else if (byteArray[i] == 5) {
			registers[i] = track->_348;
		} else if (byteArray[i] >= 3) {
			registers[i] = track->exchangeRegisterValue(registers[i]);
		}
	}

	return 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x14C
 */
int JASSeqParser::Cmd_Process(JASTrack* track, u8 r5, u16 r6)
{
	Arg_s sp08       = Arglist[r5 - 0xC0];
	JASSeqCtrl* ctrl = track->getSeq();
	u16 r29          = sp08.m02;
	r29 |= r6;
	u32 sp18[8];
	for (int i = 0; i < sp08.m00; i++) {
		u32 r3 = 0;
		switch (r29 & 0x3) {
		case 0:
			r3 = ctrl->readByte();
			break;
		case 1:
			r3 = ctrl->read16();
			break;
		case 2:
			r3 = ctrl->read24();
			break;
		case 3:
			r3 = track->exchangeRegisterValue(ctrl->readByte());
			break;
		}
		sp18[i] = r3;
		r29 >>= 2;
	}

	JASSeqParser::CmdFunc cmdFunc = sCmdPList[r5 - 0xC0];
	return cmdFunc == nullptr ? 0 : (this->*cmdFunc)(track, sp18);
}

/**
 * @note Address: N/A
 * @note Size: 0x1CC
 */
int JASSeqParser::RegCmd_Process(JASTrack* track, int r30, int r31)
{
	JASSeqCtrl* ctrl = track->getSeq();
	u8 r5            = ctrl->readByte();
	if (r30 != 0) {
		r5 = track->exchangeRegisterValue(r5);
	}
	u16 r6 = 0;
	if (r30 == 0 || r31 != 0) {
		u8 r3  = ctrl->readByte();
		u16 r4 = 3;
		for (int i = 0; i < (u32)r31 + 1; i++) {
			if (r3 & 0x80) {
				r6 |= r4;
			}
			r3 <<= 1;
			r4 <<= 2;
		}
	}
	return Cmd_Process(track, r5, r6);
}

/**
 * @note Address: 0x8009DB6C
 * @note Size: 0x18C
 */
int JASSeqParser::cmdSetParam(JASTrack* track, u8 p2)
{
	JASSeqCtrl* ctrl = track->getSeq();
	u8 flag          = ctrl->readByte();

	s16 data;
	switch (p2 & 0xC) {
	case 0:
		data = track->readReg16(ctrl->readByte());
		break;
	case 4:
		data = ctrl->readByte();
		break;
	case 8:
		u8 byte = ctrl->readByte();
		if (byte & 0x80) {
			data = byte << 8;
		} else {
			data = byte << 8 | byte << 1;
		}
		break;
	case 12:
		data = ctrl->read16();
		break;
	}

	int val = 0;
	switch (p2 & 0x3) {
	case 0:
		val = -1;
		break;
	case 1:
		val = track->readReg16(ctrl->readByte());
		break;
	case 2:
		val = ctrl->readByte();
		break;
	case 3:
		val = ctrl->read16();
		break;
	}

	track->setParam(flag, (int)data / 32767.0f, val);
	return 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x14C
 */
int JASSeqParser::cmdWait(JASTrack* track, u8 flag)
{
	int end = flag == 0x80 ? 1 : 2;
	int val = 0;
	for (int i = 0; i < end; i++) {
		val <<= 8;
		val |= track->getSeq()->readByte();
	}
	track->getSeq()->mWaitTimer = val;
	if (val != 0) {
		return 1;
	} else {
		return 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
int JASSeqParser::cmdNoteOff(JASTrack* track, u8 flag)
{
	if (flag == 0xF9) {
		u32 r30    = track->getSeq()->readByte();
		u32 rdata2 = (track->exchangeRegisterValue(r30 & 0x7) & 0xFF);
		// JUT_ASSERT(0x496, rdata2 >= 1);
		// JUT_ASSERT(0x497, rdata2 <= 7);

		flag = rdata2;
		flag += 0x80;
		if (r30 & 0x80) {
			flag |= 0x08;
		}
	}

	int r6 = 0;
	if ((s32)flag & 0x08) {
		r6 = track->getSeq()->readByte();
		if (r6 > 100) {
			r6 = (r6 - 98) * 20;
		}
	}
	track->noteOff(flag & 0x7, r6);
	return 0;
}

/**
 * @note Address: 0x8009DCF8
 * @note Size: 0x3D4
 */
int JASSeqParser::cmdNoteOn(JASTrack* track, u8 note)
{
	JASSeqCtrl* ctrl = track->getSeq();
	u32 flag         = ctrl->readByte();
	if (flag & 0x80) {
		note = track->exchangeRegisterValue(note);
	}

	note += track->getTranspose();

	u8 val28 = (flag >> 5) & 0x3;
	u8 val27;
	if ((flag >> 5) & 0x2) {
		val27 = note;
		note  = track->_E5;
	}

	u8 val26 = ctrl->readByte();
	if (val26 & 0x80) {
		val26 = track->exchangeRegisterValue(val26 & 0x7F);
	}
	u8 val25;
	u8 val24  = flag & 0x7;
	int val23 = 0;
	if (!val24) {
		val25 = ctrl->readByte();
		if (val25 & 0x80) {
			val25 = track->exchangeRegisterValue(val25 & 0x7F);
		}
		int count = (flag >> 3) & 0x3;
		flag      = 0;
		for (int i = 0; i < count; i++) {
			flag <<= 8;
			flag |= ctrl->readByte();
		}

		if ((u32)count == 1 && flag & 0x80) {
			flag = track->exchangeRegisterValue(flag & 0x7F);
		}
	} else {
		if ((flag >> 3) & 0x3) {
			val24 = track->exchangeRegisterValue(val24 - 1);
		}
		if (val28 & 1) {
			val23 = track->exchangeRegisterValue(ctrl->readByte());
			val28 ^= 1;
		}

		flag  = -1;
		val25 = 100;
	}

	track->_E4 = val28;
	s32 time   = flag;
	if (track->_E6) {
		if (track->_E4 & 1) {
			time = -1;
		}
		if (time != -1) {
			time = track->seqTimeToDspTime(time, val25);
		}

		if (!track->mIsPaused || !(track->mPauseStatus & 0x10)) {
			track->gateOn(val24, note, val26, time);
		}
	} else {
		if ((s32)flag != -1) {
			time = track->seqTimeToDspTime(flag, val25);
		}
		if (track->_E4 & 1) {
			time = -1;
		}

		if (!track->mIsPaused || !(track->mPauseStatus & 0x10)) {
			track->noteOn(val24, note, val26, time, val23);
		}
	}

	track->_E0 = flag;
	track->_E6 = track->_E4 & 1;
	if (track->_E4 & 0x2) {
		s32 val = time;
		if (time == -1) {
			val = track->seqTimeToDspTime(flag, val25);
		}

		if (track->mChannels[0]) {
			track->mChannels[0]->setKeySweepTarget(val27, val);
		}

		note = val27;
	}

	track->_E5 = note;
	if (flag == 0xFFFFFFFF) {
		return 0;
	}

	ctrl->mWaitTimer = flag ? flag : -1;

	return 1;
}

/**
 * @note Address: 0x8009E0CC
 * @note Size: 0xB4
 */
bool JASSeqParser::conditionCheck(JASTrack* track, u8 p2)
{
	u16 val = track->mRegisterParam._00[3];
	switch (p2 & 0xF) {
	case 0:
		return true;
	case 1:
		return val == 0;
	case 2:
		return val != 0;
	case 3:
		return val == 1;
	case 4:
		return val >= 0x8000;
	case 5:
		return val < 0x8000;
	}

	return false;
}

/**
 * @note Address: 0x8009E180
 * @note Size: 0x6D4
 */
int JASSeqParser::parseSeq(JASTrack* track)
{
	while (true) {
		u32 val23 = 0;
		u8 flag   = track->getSeq()->readByte(); // r26
		if (!(flag & 0x80)) {
			val23 = cmdNoteOn(track, flag);
		} else if (((flag & 0xF0) == 128) && !(flag & 0x07)) {
			val23 = cmdWait(track, flag);
		} else if (((flag & 0xF0) == 128) || flag == (u32)0xF9) {
			val23 = cmdNoteOff(track, flag);
		} else {
			switch ((s32)flag & 0xF0) {
			case 0x90:
				val23 = cmdSetParam(track, flag & 0xF);
				break;
			case 0xA0:
				track->writeRegParam(flag & 0xF);
				break;
			case 0xB0:
				u8 temp1 = (flag >> 3) & 1;
				u8 temp2 = flag & 7;
				val23    = RegCmd_Process(track, temp1, temp2);
				break;
			default:
				val23 = Cmd_Process(track, flag, 0);
				break;
			}
		}

		if (val23 == 0) {
			continue;
		}

		if (val23 == 1) {
			break;
		}

		if (val23 == 3) {
			return -1;
		}
	}

	return 0;
}
