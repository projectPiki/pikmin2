#include "JSystem/JAudio/JAD/JADDataMgr.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "PSAutoBgm/PSAutoBgm.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/JAudio/JAS/JASResArcLoader.h"
#include "stl/string.h"

namespace PSAutoBgm {

JKRHeap* ConductorMgr::sHeap;

ConductorArcMgr* ConductorArcMgr::sInstance;

/**
 * @note Address: N/A
 * @note Size: 0x15C
 */
Conductor::Conductor(AutoBgm* autoBgm, int p2)
    : mEraseLink(this)
    , mBankData(nullptr)
    , mWsData(nullptr)
    , _B0(0)
    , mBgmSeq(autoBgm)
    , mTempo(100)
{
	mList.append(_E8.getLink());
	mList.append(mTempoSlider.getLink());
	mList.append(_68.getLink());
	mPostDataByteSize     = 17;
	mTempo                = mTempoSlider.mValue;
	mTree.mRemoveCallback = &removeCallback;
	mTree.mOwnerConductor = this;
}

/**
 * @note Address: 0x80339024
 * @note Size: 0x290
 */
Conductor::~Conductor()
{
}

/**
 * @note Address: 0x803392B4
 * @note Size: 0x34
 */
void Conductor::removeCallback(u8 idx, void* conductor)
{
	Conductor* cdtr = static_cast<Conductor*>(conductor);
	cdtr->mBgmSeq->stopSeq(0);
}

/**
 * @note Address: 0x803392E8
 * @note Size: 0x11C
 */
u16 Conductor::seqCpuSync_AutoBgm(JASTrack* track1, u16 cmd, u32 p3, JASTrack* track2)
{
	switch (cmd) {
	case 0x300:
		track1->setTempo(mTempoSlider.mValue);
		createTables(track1);
		_B0 = 0;
		return getChildNum();
	case 0x600:
	case 0x800:
		u8 val = p3 & 0xF;
		P2ASSERTLINE(195, val < getChildNum());
		Track* track = getChild(val);
		P2ASSERTLINE(197, track);
		return track->seqCpuSync_AutoBgm_Track(track1, cmd, p3, track2);
	}

	return 0;
}

/**
 * @note Address: 0x80339404
 * @note Size: 0xF4
 */
void Conductor::createTables(JASTrack* track)
{
	u16 v1;
	u16 v2;
	u32 offs;
	track->readPortAppDirect(2, &v1);
	track->readPortAppDirect(3, &v2);
	offs      = (u32(v1) << 16) | v2;
	mBankData = (PSBankData*)(offs + (u32)track->mSeqCtrl.mRawFilePtr);

	track->readPortAppDirect(4, &v1);
	track->readPortAppDirect(5, &v2);
	offs    = (u32(v1) << 16) | v2;
	mWsData = (PSBankData*)(offs + (u32)track->mSeqCtrl.mRawFilePtr);
	P2ASSERTLINE(230, mBankData);
	P2ASSERTLINE(231, mWsData);
}

/**
 * @note Address: 0x803394F8
 * @note Size: 0x2A4
 */
Track::Track()
    : mIndex(255)
    , mCurrModule(255)
    , _9C(0)
    , _A0()
    , _D0()
    , mStrEdit()
    , _13C()
    , _16C()
    , mUnisonTrack(nullptr)
{
	mPreDataByteSize = 3;
	mList.append(_68.getLink());
	mList.append(_A0.getLink());
	mList.append(_D0.getLink());
	mList.append(mStrEdit.getLink());
	mList.append(_13C.getLink());
	mList.append(_16C.getLink());
	mPostDataByteSize     = 3;
	mTree.mRemoveCallback = removeCallback;
	mTree.mOwnerConductor = this;
}

/**
 * @note Address: 0x8033979C
 * @note Size: 0x3C
 */
void Track::afterGetFromFree()
{
	mCurrModule = 255;
	_A0.mValue  = 0;
	_D0.mValue  = 0;
	strcpy(mStrEdit.mValue, "\0");
}

/**
 * @note Address: 0x803397D8
 * @note Size: 0x3DC
 */
Track::~Track()
{
}

/**
 * @note Address: 0x80339BB4
 * @note Size: 0x3C
 */
void Track::removeCallback(u8 idx, void* track)
{
	Track* trk = static_cast<Track*>(track);
	Conductor::removeCallback(idx, trk->mTree.getParent()->getObjectPtr());
}

/**
 * @note Address: 0x80339BF0
 * @note Size: 0x1B8
 */
u16 Track::seqCpuSync_AutoBgm_Track(JASTrack* track1, u16 cmd, u32 p2, JASTrack* track2)
{
	switch (cmd) {
	case 0x600:
		mCurrModule = 255;
		if (_13C.mValue != 16) {
			//"Unison master track must be a lower numbered track than Unison track"
			JUT_ASSERTLINE(416, _13C.mValue < mIndex,
			               "ユニゾンマスタートラックはユニゾントラックより若い番号のトラックである必要があります");
			mUnisonTrack = static_cast<JADUtility::PrmSetRc<Track>*>(mTree.getParent()->getObjectPtr())->getChild(_13C.mValue);
			P2ASSERTLINE(418, mUnisonTrack);
		} else {
			mUnisonTrack = nullptr;
		}

		u32 max = getChildNum();
		for (u8 i = 0; i < max; i++) {
			getChild(i)->mIsTableAddrSet = 0;
		}

		u16 x;
		if (mUnisonTrack) {
			u8 val = mUnisonTrack->_D0.mValue;
			x      = val == 1 ? 60 : 0;
		} else {
			u8 val = _D0.mValue;
			x      = val == 1 ? 60 : 0;
		}
		return (u16)(x + ((_A0.mValue & 0xFFFF) * 0x78));
	case 0x800:
		incCurModule();
		if (getChild(mCurrModule)) {
			return getChild(mCurrModule)->seqCpuSync_AutoBgm_Module(track1, cmd, p2, track2);
		}
		return 0;
	}

	return 0;
}

/**
 * @note Address: 0x80339DA8
 * @note Size: 0x60
 */
void Track::incCurModule()
{
	if (mCurrModule == 0xFF) {
		mCurrModule = 0;
	} else if (mCurrModule != (getChildNum() - 1)) {
		mCurrModule++;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void Track::onStartSeq(JAISequence* sound)
{
	f32 volume = _16C.mValue / 127.0f;
	sound->setTrackFxmix(mIndex, (volume < 0.0f) ? 0.0f : (volume > 1.0f) ? 1.0f : volume, 0);
}

/**
 * @note Address: 0x80339E08
 * @note Size: 0x54
 */
void Module::afterGetFromFree()
{
	_94.mValue          = 64;
	_154.mValue         = 0;
	_184.mValue         = 0;
	_1B4.mValue         = 0;
	_C4.mValue          = 0;
	_64.mValue          = 0;
	_F4.mValue          = 0;
	_1E4.mValue         = 0;
	mVolumeParam.mValue = 96;
	mPanParam.mValue    = 64;
	mBankData           = nullptr;
	mWsData             = nullptr;
	mWsDataNum          = 0;
	_2A4                = 0;
	mIsTableAddrSet     = 0;
	_274.mValue         = 0;
	mCycleIndex         = 0;
}

/**
 * @note Address: 0x80339E5C
 * @note Size: 0x554
 */
Module::Module()
    : PrmSetBase(true)
    , _2A4(0)
    , mBankData(nullptr)
    , mBankDataNum(0)
    , mWsData(0)
    , mWsDataNum(nullptr)
    , mCycleIndex(0)
    , mIsTableAddrSet(false)
    , _2C2(-1)
{
	mCycles[0] = new (ConductorMgr::sHeap, 0) OnCycle(this);
	mCycles[1] = new (ConductorMgr::sHeap, 0) OffCycle(this);
	mList.append(_64.getLink());
	mList.append(_94.getLink());
	mList.append(_C4.getLink());
	mList.append(_F4.getLink());
	mList.append(_124.getLink());
	mList.append(_154.getLink());
	mList.append(_184.getLink());
	mList.append(_1B4.getLink());
	mList.append(mCycles[0]->mSlider.getLink());
	mList.append(mCycles[1]->mSlider.getLink());
	mList.append(_1E4.getLink());
	mList.append(mVolumeParam.getLink());
	mList.append(mPanParam.getLink());
	mList.append(_274.getLink());
	mPostDataByteSize     = 21;
	mTree.mRemoveCallback = removeCallback;
	mTree.mOwnerConductor = this;
}

/**
 * @note Address: 0x8033A3B0
 * @note Size: 0x72C
 */
Module::~Module()
{
	delete mCycles[0];
	delete mCycles[1];
}

/**
 * @note Address: 0x8033AADC
 * @note Size: 0x44
 */
void Module::removeCallback(u8 idx, void* module)
{
	Module* mod = static_cast<Module*>(module);
	Track::removeCallback(idx, mod->mTree.getParent()->getObjectPtr());
}

/**
 * @note Address: 0x8033AB20
 * @note Size: 0x218
 */
u16 Module::seqCpuSync_AutoBgm_Module(JASTrack* track1, u16 cmd, u32 p3, JASTrack* track2)
{
	switch (cmd) {
	case 0x800:
		PSSystem::setObject(track1, this, 20);
		track1->writePortAppDirect(3, _154.mValue | (_124.mValue << 8));

		f32 vol = (mVolumeParam.mValue > 127) ? 127.0f : mVolumeParam.mValue; // f2
		f32 pan = (mPanParam.mValue > 127) ? 127.0f : mPanParam.mValue;       // f31
		track1->setParam(JASTrack::JASParam_Volume, vol / 127.0f, -1);
		track1->setParam(JASTrack::JASParam_Pan, pan / 127.0f, -1);

		track1->mTranspose    = _1E4.mValue;
		_2A4                  = 0;
		mCycleIndex           = 0;
		_2C2                  = -1;
		mCycles[0]->mCycleNum = 0;
		mCycles[1]->mCycleNum = 0;

		bool check = !mCycles[0]->mSlider.mValue && !mCycles[1]->mSlider.mValue;
		P2ASSERTLINE(664, !check);

		if (!mIsTableAddrSet) {
			setTableAddress(track1);
			mIsTableAddrSet = true;
		}

		Track* track = static_cast<Track*>(mTree.getParent()->getObjectPtr());
		u16 x;
		if (track->mUnisonTrack) {
			u8 val = track->mUnisonTrack->getChild(0)->_274.mValue;
			x      = val == 1 ? 60 : 0;
		} else {
			u8 val = _274.mValue;
			x      = val == 1 ? 60 : 0;
		}
		return (u16)(x + (_64.mValue * 0x78));
	}

	return 0;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  rlwinm    r0,r5,0,16,31
	  mr        r30, r3
	  cmpwi     r0, 0x800
	  mr        r31, r4
	  beq-      .loc_0x34
	  b         .loc_0x1F4

	.loc_0x34:
	  mr        r3, r31
	  mr        r4, r30
	  li        r5, 0x14
	  bl        -0x27A4
	  lbz       r0, 0x150(r30)
	  mr        r3, r31
	  lbz       r5, 0x180(r30)
	  li        r4, 0x3
	  rlwimi    r5,r0,8,16,23
	  rlwinm    r5,r5,0,16,31
	  bl        -0x298A90
	  lbz       r3, 0x240(r30)
	  cmplwi    r3, 0x7F
	  ble-      .loc_0x74
	  lfs       f2, -0x1FC(r2)
	  b         .loc_0x8C

	.loc_0x74:
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f1, -0x1F0(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f0, f1

	.loc_0x8C:
	  lbz       r3, 0x270(r30)
	  cmplwi    r3, 0x7F
	  ble-      .loc_0xA0
	  lfs       f31, -0x1FC(r2)
	  b         .loc_0xB8

	.loc_0xA0:
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f1, -0x1F0(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f31, f0, f1

	.loc_0xB8:
	  lfs       f0, -0x1FC(r2)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, -0x1
	  fdivs     f1, f2, f0
	  bl        -0x299DF4
	  lfs       f0, -0x1FC(r2)
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, -0x1
	  fdivs     f1, f31, f0
	  bl        -0x299E0C
	  lha       r0, 0x210(r30)
	  li        r4, 0
	  lis       r3, 0x1
	  stb       r0, 0x356(r31)
	  subi      r0, r3, 0x1
	  sth       r4, 0x2A4(r30)
	  stb       r4, 0x2C0(r30)
	  sth       r0, 0x2C2(r30)
	  lwz       r3, 0x2B8(r30)
	  stb       r4, 0x8(r3)
	  lwz       r3, 0x2BC(r30)
	  stb       r4, 0x8(r3)
	  lwz       r3, 0x2B8(r30)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  lwz       r3, 0x2BC(r30)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  li        r4, 0x1

	.loc_0x13C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x160
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1A0
	  li        r4, 0x298
	  subi      r5, r5, 0x190
	  crclr     6, 0x6
	  bl        -0x31063C

	.loc_0x160:
	  lbz       r0, 0x2C1(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x218
	  li        r0, 0x1
	  stb       r0, 0x2C1(r30)

	.loc_0x180:
	  lwz       r3, 0x3C(r30)
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x19C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  li        r4, 0
	  bl        0x2064
	  lbz       r3, 0x2A0(r3)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1E0

	.loc_0x1C0:
	  lbz       r3, 0x2A0(r30)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31

	.loc_0x1E0:
	  lha       r0, 0x90(r30)
	  mulli     r0, r0, 0x78
	  add       r0, r3, r0
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1F8

	.loc_0x1F4:
	  li        r3, 0

	.loc_0x1F8:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x218:
	*/
}

/**
 * @note Address: 0x8033AD38
 * @note Size: 0x1BC
 */
void Module::setTableAddress(JASTrack* track)
{
	Track* bnkTrk      = (Track*)mTree.getParent()->getObjectPtr();
	Conductor* bnkCdtr = (Conductor*)bnkTrk->mTree.getParent()->getObjectPtr();

	u16 bnkVal      = _184.mValue;
	PSBankData* bnk = bnkCdtr->mBankData;
	mBankData       = (PSBankData*)(bnk[bnkVal].mData[2] | (bnk[bnkVal].mData[0] << 16 | bnk[bnkVal].mData[1] << 8));
	mBankData       = (PSBankData*)((u32)mBankData + (u32)track->getSeq()->mRawFilePtr);

	Track* wsTrk      = (Track*)mTree.getParent()->getObjectPtr();
	Conductor* wsCdtr = (Conductor*)wsTrk->mTree.getParent()->getObjectPtr();

	u16 wsVal      = _1B4.mValue;
	PSBankData* ws = (PSBankData*)wsCdtr->mWsData;
	mWsData        = (PSWsData*)(ws[wsVal].mData[2] | (ws[wsVal].mData[0] << 16 | ws[wsVal].mData[1] << 8));
	mWsData        = (PSWsData*)((u32)mWsData + (u32)track->getSeq()->mRawFilePtr);

	u8 count = 0;
	u8* ptr  = (u8*)mBankData;
	u8 nextCount;
	u8* nextPtr;
	u8 a = ptr[0];
	u8 b = ptr[1];
	u8 c = ptr[2];

	while (a != 0xFF || b != 0xFF || c != 0xFF) {
		count++;
		int index = count;
		P2ASSERTLINE(726, index < 255);
		a = ptr[index * 3];
		b = ptr[index * 3 + 1];
		c = ptr[index * 3 + 2];
	}

	mBankDataNum = count;

	nextCount = 0;
	nextPtr   = (u8*)mWsData;
	u8 x      = nextPtr[0];
	u8 y      = nextPtr[1];
	while (x != 0xFF || y != 0xFF) {
		nextCount++;
		int index = nextCount;
		P2ASSERTLINE(748, index < 255);
		x = nextPtr[index * 2];
		y = nextPtr[index * 2 + 1];
	}

	mWsDataNum = nextCount;
}

/**
 * @note Address: 0x8033AEF4
 * @note Size: 0x154
 */
u16 Module::cycleLoop(JASTrack* track)
{
	Track* trk          = (Track*)mTree.getParent()->getObjectPtr();
	Module* childModule = trk->getChild(trk->mCurrModule);
	P2ASSERTLINE(779, childModule == this);
	u8 childNum = ((Track*)mTree.getParent()->getObjectPtr())->mCurrModule;
	if (childNum < ((Track*)mTree.getParent()->getObjectPtr())->getChildNum() - 1 && _2A4 >= _94.mValue) {
		return 1;
	}

	CycleBase* cycle = mCycles[mCycleIndex];
	if (cycle->mSlider.mValue == 0) {
		if (++mCycleIndex >= 2) {
			mCycleIndex = 0;
		}
		return 2;
	}

	if (++cycle->mCycleNum > cycle->mSlider.mValue) {
		cycle->mCycleNum = 0;
	}

	if (cycle->mCycleNum == 0) {
		if (++mCycleIndex >= 2) {
			mCycleIndex = 0;
		}
		return 2;
	}

	if ((u8)(s8)cycle->mCycleNum == 1 && cycle == mCycles[0]) {
		return 3;
	}
	return 0;
}

/**
 * @note Address: 0x8033B048
 * @note Size: 0x10
 */
u16 CycleBase::cycleTop(JASTrack* track)
{
	mWaveSceneIndex = 0;
	return 0;
}

/**
 * @note Address: 0x8033B058
 * @note Size: 0x1BC
 */
u16 CycleBase::play(JASTrack* track)
{
	if ((int)mModule->_F4.mValue == 1) {
		if (mWaveSceneIndex == mModule->mWsDataNum) {
			return 4;
		}
		u16 x;
		Track* childTrk = ((Track*)mModule->mTree.getParent()->getObjectPtr())->mUnisonTrack;
		if (childTrk == nullptr) {
			u8 index  = mWaveSceneIndex++;
			u16 wsPtr = mModule->getWsData(index);
			u16 flags = avoidCheck();
			x         = wsPtr;
			x |= flags;
		} else {
			mWaveSceneIndex++;
			x = childTrk->getChild(childTrk->mCurrModule)->_2B6;
		}

		mModule->_2B6 = x;
		track->writePortAppDirect(8, x);
		return 3;
	}

	u16 x;
	Track* childTrk = ((Track*)mModule->mTree.getParent()->getObjectPtr())->mUnisonTrack;
	if (childTrk == nullptr) {
		f32 num = mModule->mWsDataNum;
		u32 idx = num * PSSystem::oRandom.nextFloat_0_1();
		x       = mModule->getWsData((u16)idx);
		x |= avoidCheck();
	} else {
		x = childTrk->getChild(childTrk->mCurrModule)->_2B6;
	}

	track->writePortAppDirect(8, x);
	mModule->_2B6 = x;
	return 1;
}

/**
 * @note Address: 0x8033B214
 * @note Size: 0x78
 */
u16 CycleBase::checkCloser(JASTrack*)
{
	if ((int)mModule->_F4.mValue == 1 && mWaveSceneIndex != mModule->mWsDataNum) {
		return 0;
	}
	if (mCycleNum == mSlider.mValue && getCycleType() == 0) {
		return 1;
	}
	return 0;
}

/**
 * @note Address: 0x8033B28C
 * @note Size: 0x184
 */
OnCycle::OnCycle(Module* module)
    : CycleBase(module)
    , _40(2)
{
}

/**
 * @note Address: 0x8033B468
 * @note Size: 0x360
 */
u16 OnCycle::play(JASTrack* track)
{
	if ((int)mModule->_F4.mValue == 1) {
		u16 playRes = CycleBase::play(track);
		if (playRes == 4) {
			return 4;
		}
		setTip(track);
		return 2;
	}
	setTip(track);
	CycleBase::play(track);
	return 0;
}

/**
 * @note Address: 0x8033B7C8
 * @note Size: 0x274
 */
void OnCycle::setTip(JASTrack* track)
{
	Track* trk = ((Track*)mModule->mTree.getParent()->getObjectPtr())->mUnisonTrack;
	u8 num;
	u16 x;
	if (!trk) {
		num = mModule->mBankDataNum;
		if (num > 1) {
			x        = (u32)(num * PSSystem::oRandom.nextFloat_0_1());
			u16 hist = historiesAreSameAll();
			if (hist != 0xFFFF && hist == x) {
				x = (u32)((u32)(num - 1) * PSSystem::oRandom.nextFloat_0_1());
				if (x >= hist) {
					x++;
				}
			}

			// completely guessing the scope of the inline here, but the panic means it has to exist
			PrmLink<u16>* link = setTest(x);

			PrmLink<u16>* newLink = nullptr;
			if (_40._10.getNumLinks() >= _40._10.mValue) {
				newLink = (PrmLink<u16>*)_40._10.getFirst();
				if (newLink) {
					_40._10.JSUPtrList::remove(newLink);
				}
			}

			_40._10.JSUPtrList::append(link);

			if (newLink) {
				if (_40._00.getNumLinks() >= _40._00.mValue) {
					PrmLink<u16>* anotherLink = (PrmLink<u16>*)_40._00.getFirst();
					if (anotherLink) {
						_40._00.JSUPtrList::remove(anotherLink);
					}
				}
				_40._00.JSUPtrList::append(newLink);
			}

		} else {
			x = 0;
		}
	} else {
		x = trk->getChild(trk->mCurrModule)->_2C2;
	}

	mModule->_2C2   = x;
	PSBankData* bnk = mModule->mBankData;
	u32 bankData    = (bnk[x].mData[0] << 16) | (bnk[x].mData[1] << 8) | bnk[x].mData[2];
	track->writePortAppDirect(6, bankData >> 16);
	track->writePortAppDirect(7, bankData & 0xFFFF);
}

/**
 * @note Address: 0x8033BA3C
 * @note Size: 0x5C
 */
u16 OnCycle::historiesAreSameAll()
{
	if (_40._10.getNumLinks() < _40._20) {
		return 0xFFFF;
	}

	PrmLink<u16>* first = (PrmLink<u16>*)(_40._10.getFirst());
	u16 initVal         = *first->getObject();
	PrmLink<u16>* link  = (PrmLink<u16>*)first->getNext();

	while (link) {
		if (initVal != *link->getObject()) {
			return 0xFFFF;
		}
		link = (PrmLink<u16>*)link->getNext();
	}
	return initVal;
}

/**
 * @note Address: 0x8033BA98
 * @note Size: 0xBC
 */
u16 OnCycle::avoidCheck()
{
	u8 num              = mCycleNum;
	Track* track        = (Track*)mModule->mTree.getParent()->getObjectPtr();
	MeloArrMgr& meloMgr = ((Conductor*)track->mTree.getParent()->getObjectPtr())->mBgmSeq->mMeloArr;

	P2ASSERTLINE(484, track->mIndex < 16);

	MeloArrArg arg;
	arg.mTrackIndex = track->mIndex;
	arg.mCycleNum   = num;
	if (meloMgr.isToAvoid(arg) == true) {
		return 0x8000;
	}
	return 0;
}

/**
 * @note Address: 0x8033BB54
 * @note Size: 0xB0
 */
OffCycle::OffCycle(Module* module)
    : CycleBase(module)
{
}

/**
 * @note Address: 0x8033BC04
 * @note Size: 0x15C
 */
AutoBgm::AutoBgm(const char* cndFileName, const char* bmsFileName, const JAInter::SoundInfo& soundInfo, JADUtility::AccessMode accessMode,
                 PSSystem::DirectorMgrBase* directorMgr)
    : PSSystem::DirectedBgm(bmsFileName, soundInfo, directorMgr)
    , mConductorMgr(this)
    , mHeap(nullptr)
    , mMeloArr()
{
	mConductorFilePath = new char[strlen(cndFileName) + 1];
	strcpy(mConductorFilePath, cndFileName);
	P2ASSERTLINE(1143, ConductorArcMgr::getInstance());
}

/**
 * @note Address: 0x8033C058
 * @note Size: 0x150
 */
void AutoBgm::startSeq()
{
	DirectedBgm::startSeq();

	if (*getHandleP()) {
		u8 i;
		JAISequence* sound = static_cast<JAISequence*>(*getHandleP());

		JADUtility::PrmSetRc<Track>* track = mConductorMgr.mPrmSetRc;
		for (i = 0; i < track->getChildNum(); i++) {
			track->getChild(i)->mIndex = i;

			Track* ctrack = track->getChild(i);

			f32 volume = ctrack->_16C.mValue / 127.0f;
			sound->setTrackFxmix(ctrack->mIndex, (volume < 0.0f) ? 0.0f : (volume > 1.0f) ? 1.0f : volume, 0);
		}
	}
}

/**
 * @note Address: 0x8033C1A8
 * @note Size: 0x44
 */
void AutoBgm::scene1st(PSSystem::TaskChecker* task)
{
	SeqBase::scene1st(task);
	loadConductor(task);
}

/**
 * @note Address: 0x8033C1EC
 * @note Size: 0x180
 */
void AutoBgm::loadConductor(PSSystem::TaskChecker* task)
{
	JKRArchive* arc = ConductorArcMgr::getInstance()->mArchive;
	P2ASSERTLINE(1192, arc);

	// todo: struct for cnd file?
	int* file = (int*)arc->findNameResource(mConductorFilePath);
	JUT_ASSERTLINE(1195, file, "not find(%s)", mConductorFilePath);
	u32 size = OSRoundUp32B(file[3]);

	P2ASSERTLINE(1205, !mHeap);
	mHeap = (JKRHeap*)JKRHeap::alloc(size, -0x20, nullptr);
	P2ASSERTLINE(1207, mHeap);

	u32 ptr = (u32)this;
	if (task) {
		task->advanceTask();
	}

	int res = JASResArcLoader::loadResourceAsync(arc, ((u16*)file)[0], (u8*)mHeap, size, loadedCallback, ptr);
	if (res == 1) {
		mTaskChecker = task;
	} else if (task) {
		task->rewindTask();
	}
}

/**
 * @note Address: 0x8033C36C
 * @note Size: 0x74
 */
void AutoBgm::loadedCallback(u32 p1, u32 p2)
{
	AutoBgm* bgm = reinterpret_cast<AutoBgm*>(p2);
	bgm->mConductorMgr.initInstanceExt(bgm->mHeap, (s32)p1);
	JKRFree(bgm->mHeap);
	bgm->mHeap                     = nullptr;
	PSSystem::TaskChecker* checker = bgm->mTaskChecker;
	if (checker) {
		checker->rewindTask();
	}
}

/**
 * @note Address: 0x8033C3E0
 * @note Size: 0x168
 */
void AutoBgm::pauseOn(SeqBase::PauseMode pause)
{
	if (mPauseMode != SeqBase::MODE4) {
		return;
	}

	mPauseMode = pause;
	P2ASSERTLINE(1310, getHandleP());

	JAISound* sound = *getHandleP();
	bool noSound    = false;
	switch (pause) {
	case SeqBase::MODE0:
		mPauseMode = SeqBase::MODE1;

	case SeqBase::MODE1:
		if (sound) {
			sound->setPauseMode(true, 0);
		} else {
			noSound = true;
		}
		break;
	case SeqBase::MODE2:
		if (sound) {
			sound->setPauseMode(true, mPausedMinVolume);
		} else {
			noSound = true;
		}
		break;
	case SeqBase::MODE3:
		if (sound) {
			stopSeq(0);
		} else {
			noSound = true;
		}
		break;
	default:
		JUT_PANICLINE(1352, "P2Assert");
	}

	if (noSound == true)
		mPauseMode = SeqBase::MODE4;
}

/**
 * @note Address: 0x8033C548
 * @note Size: 0x20
 */
void AutoBgm::pauseOff()
{
	SeqBase::pauseOff();
}

} // namespace PSAutoBgm
