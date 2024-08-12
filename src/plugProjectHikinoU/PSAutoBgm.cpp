#include "JSystem/JAudio/JAD/JADDataMgr.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "PSAutoBgm/PSAutoBgm.h"
#include "PSAutoBgm/Conductor.h"
#include "PSAutoBgm/Cycle.h"
#include "PSAutoBgm/PrmLink.h"
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
Conductor::~Conductor() { }

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void Conductor::onBeatProc() { mBgmSeq->mRootTrack->onBeatTop(); }

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
u32 Conductor::seqCpuSync_AutoBgm(JASTrack* track1, u16 cmd, u32 p3, JASTrack* track2)
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
	track->readPortAppDirect(2, &v1);
	track->readPortAppDirect(3, &v2);
	mBankData = (PSBankData*)((v2 | (v1 << 16)) + track->mSeqCtrl.mRawFilePtr);

	track->readPortAppDirect(4, &v1);
	track->readPortAppDirect(5, &v2);
	mWsData = (PSBankData*)((v2 | (v1 << 16)) + track->mSeqCtrl.mRawFilePtr);
	P2ASSERTLINE(230, mBankData);
	P2ASSERTLINE(231, mWsData);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r5, r1, 0xa
	stw      r31, 0x1c(r1)
	mr       r31, r4
	li       r4, 2
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       readPortAppDirect__8JASTrackFUlPUs
	mr       r3, r31
	addi     r5, r1, 8
	li       r4, 3
	bl       readPortAppDirect__8JASTrackFUlPUs
	lhz      r7, 0xa(r1)
	mr       r3, r31
	lhz      r6, 8(r1)
	addi     r5, r1, 0xa
	lwz      r0, 0xc(r31)
	rlwimi   r6, r7, 0x10, 0, 0xf
	li       r4, 4
	add      r0, r6, r0
	stw      r0, 0xa8(r30)
	bl       readPortAppDirect__8JASTrackFUlPUs
	mr       r3, r31
	addi     r5, r1, 8
	li       r4, 5
	bl       readPortAppDirect__8JASTrackFUlPUs
	lhz      r4, 0xa(r1)
	lhz      r3, 8(r1)
	lwz      r0, 0xc(r31)
	rlwimi   r3, r4, 0x10, 0, 0xf
	add      r0, r3, r0
	stw      r0, 0xac(r30)
	lwz      r0, 0xa8(r30)
	cmplwi   r0, 0
	bne      lbl_803394B8
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0xe6
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803394B8:
	lwz      r0, 0xac(r30)
	cmplwi   r0, 0
	bne      lbl_803394E0
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0xe7
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803394E0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
Track::~Track() { }

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
u32 Track::seqCpuSync_AutoBgm_Track(JASTrack* track1, u16 cmd, u32 p2, JASTrack* track2)
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

		u8 max = getChildNum();
		for (u8 i = 0; i < max; i++) {
			getChild(i)->mIsTableAddrSet = 0;
		}

		// this isn't quite right but it's Close-ish
		u32 x;
		if (mUnisonTrack) {
			u8 val = mUnisonTrack->_D0.mValue;
			x      = (60 & (~(val - 1 | 1 - val) >> 1));
		} else {
			u8 val = _D0.mValue;
			x      = (60 & (~(val - 1 | 1 - val) >> 1));
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
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r5
	  rlwinm    r0,r27,0,16,31
	  lis       r5, 0x8049
	  cmpwi     r0, 0x800
	  mr        r31, r3
	  mr        r26, r4
	  mr        r29, r6
	  mr        r28, r7
	  subi      r30, r5, 0x1A0
	  beq-      .loc_0x15C
	  bge-      .loc_0x1A0
	  cmpwi     r0, 0x600
	  beq-      .loc_0x48
	  b         .loc_0x1A0

	.loc_0x48:
	  li        r0, 0xFF
	  stb       r0, 0x99(r31)
	  lbz       r3, 0x168(r31)
	  cmplwi    r3, 0x10
	  beq-      .loc_0xB4
	  lbz       r0, 0x98(r31)
	  cmplw     r3, r0
	  blt-      .loc_0x7C
	  addi      r3, r30, 0
	  addi      r5, r30, 0x1C
	  li        r4, 0x1A0
	  crclr     6, 0x6
	  bl        -0x30F628

	.loc_0x7C:
	  lwz       r3, 0x3C(r31)
	  lbz       r4, 0x168(r31)
	  lwz       r3, 0xC(r3)
	  bl        0x3284
	  stw       r3, 0x19C(r31)
	  lwz       r0, 0x19C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  addi      r3, r30, 0
	  addi      r5, r30, 0x10
	  li        r4, 0x1A2
	  crclr     6, 0x6
	  bl        -0x30F65C
	  b         .loc_0xBC

	.loc_0xB4:
	  li        r0, 0
	  stw       r0, 0x19C(r31)

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x2E74
	  rlwinm    r29,r3,0,24,31
	  li        r28, 0
	  li        r30, 0
	  b         .loc_0xE8

	.loc_0xD4:
	  mr        r3, r31
	  mr        r4, r28
	  bl        0x3050
	  stb       r30, 0x2C1(r3)
	  addi      r28, r28, 0x1

	.loc_0xE8:
	  rlwinm    r0,r28,0,24,31
	  cmplw     r0, r29
	  blt+      .loc_0xD4
	  lwz       r3, 0x19C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lbz       r3, 0xFC(r3)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x144

	.loc_0x124:
	  lbz       r3, 0xFC(r31)
	  li        r0, 0x3C
	  subi      r4, r3, 0x1
	  subfic    r3, r3, 0x1
	  nor       r3, r4, r3
	  srawi     r3, r3, 0x1F
	  and       r0, r0, r3
	  rlwinm    r3,r0,0,16,31

	.loc_0x144:
	  lha       r0, 0xCC(r31)
	  rlwinm    r0,r0,0,16,31
	  mulli     r0, r0, 0x78
	  add       r0, r3, r0
	  rlwinm    r3,r0,0,16,31
	  b         .loc_0x1A4

	.loc_0x15C:
	  bl        .loc_0x1B8
	  lbz       r4, 0x99(r31)
	  mr        r3, r31
	  bl        0x2FC4
	  cmplwi    r3, 0
	  beq-      .loc_0x198
	  lbz       r4, 0x99(r31)
	  mr        r3, r31
	  bl        0x2FB0
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r29
	  mr        r7, r28
	  bl        0xDA0
	  b         .loc_0x1A4

	.loc_0x198:
	  li        r3, 0
	  b         .loc_0x1A4

	.loc_0x1A0:
	  li        r3, 0

	.loc_0x1A4:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x1B8:
	*/
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
u32 Module::seqCpuSync_AutoBgm_Module(JASTrack* track1, u16 cmd, u32 p3, JASTrack* track2)
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

		bool check = false;
		if (!mCycles[0]->mSlider.mValue && !mCycles[1]->mSlider.mValue) {
			check = true;
		}
		P2ASSERTLINE(664, !check);

		if (!mIsTableAddrSet) {
			setTableAddress(track1);
			mIsTableAddrSet = true;
		}

		Track* track = static_cast<Track*>(mTree.getParent()->getObjectPtr());
		// this isn't quite right but it's Close-ish
		u32 x;
		if (track->mUnisonTrack) {
			u8 val = track->mUnisonTrack->getChild(0)->_274.mValue;
			x      = (60 & (~(val - 1 | 1 - val) >> 1));
		} else {
			u8 val = _274.mValue;
			x      = (0x3C & (~(val - 1 | 1 - val) >> 1));
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
	PSBankData& bnk = bnkCdtr->mBankData[bnkVal];
	mBankData       = (PSBankData*)(bnk.mData[2] | (bnk.mData[1] << 16 | bnk.mData[0] << 8));
	mBankData       = (PSBankData*)(track->getCtrl()->mRawFilePtr + (u32)mBankData);

	Track* wsTrk      = (Track*)mTree.getParent()->getObjectPtr();
	Conductor* wsCdtr = (Conductor*)wsTrk->mTree.getParent()->getObjectPtr();

	u16 wsVal      = _1B4.mValue;
	PSBankData* ws = (PSBankData*)&wsCdtr->mWsData[wsVal];
	mWsData        = (PSWsData*)(ws->mData[2] | (ws->mData[1] << 16 | ws->mData[0] << 8));
	mWsData        = (PSWsData*)(track->getCtrl()->mRawFilePtr + (u32)mWsData);

	u8 count = 0;
	u8* ptr  = (u8*)mBankData;
	u8 a     = ptr[0];
	u8 b     = ptr[1];
	u8 c     = ptr[2];

	while (a != 0xFF || b != 0xFF || c != 0xFF) {
		count++;
		P2ASSERTLINE(726, (int)count < 255);
		u8* nextArray = (ptr + count * 3);
		a             = nextArray[0];
		b             = nextArray[1];
		c             = nextArray[2];
	}

	mBankDataNum = count;

	u8 nextCount = 0;
	u8* nextPtr  = (u8*)mWsData;
	u8 x         = nextPtr[0];
	u8 y         = nextPtr[1];
	while (x != 0xFF || y != 0xFF) {
		nextCount++;
		P2ASSERTLINE(748, (int)nextCount < 255);
		u8* nextArray = (nextPtr + nextCount * 2);
		x             = nextArray[0];
		y             = nextArray[1];
	}

	mWsDataNum = nextCount;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r3
	li       r31, 0
	lwz      r3, 0x3c(r3)
	lha      r0, 0x1b0(r30)
	lwz      r3, 0xc(r3)
	clrlwi   r0, r0, 0x10
	lwz      r3, 0x3c(r3)
	mulli    r0, r0, 3
	lwz      r3, 0xc(r3)
	lwz      r3, 0xa8(r3)
	add      r5, r3, r0
	lbzx     r3, r3, r0
	lbz      r0, 1(r5)
	lbz      r5, 2(r5)
	slwi     r0, r0, 8
	rlwimi   r0, r3, 0x10, 8, 0xf
	or       r0, r5, r0
	stw      r0, 0x2a8(r30)
	lwz      r3, 0x2a8(r30)
	lwz      r0, 0xc(r4)
	add      r0, r3, r0
	stw      r0, 0x2a8(r30)
	lwz      r3, 0x3c(r30)
	lha      r0, 0x1e0(r30)
	lwz      r3, 0xc(r3)
	clrlwi   r0, r0, 0x10
	lwz      r3, 0x3c(r3)
	mulli    r0, r0, 3
	lwz      r3, 0xc(r3)
	lwz      r3, 0xac(r3)
	add      r5, r3, r0
	lbzx     r3, r3, r0
	lbz      r0, 1(r5)
	lbz      r5, 2(r5)
	slwi     r0, r0, 8
	rlwimi   r0, r3, 0x10, 8, 0xf
	or       r0, r5, r0
	stw      r0, 0x2b0(r30)
	lwz      r3, 0x2b0(r30)
	lwz      r0, 0xc(r4)
	add      r0, r3, r0
	stw      r0, 0x2b0(r30)
	lwz      r29, 0x2a8(r30)
	lbz      r0, 0(r29)
	lbz      r4, 1(r29)
	lbz      r3, 2(r29)
	b        lbl_8033AE44

lbl_8033AE04:
	addi     r31, r31, 1
	clrlwi   r27, r31, 0x18
	cmpwi    r27, 0xff
	blt      lbl_8033AE30
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0x2d6
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033AE30:
	mulli    r0, r27, 3
	add      r3, r29, r0
	lbz      r0, 0(r3)
	lbz      r4, 1(r3)
	lbz      r3, 2(r3)

lbl_8033AE44:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE04
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE04
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE04
	stb      r31, 0x2ac(r30)
	lis      r4, lbl_8048FE60@ha
	lis      r3, lbl_8048FE70@ha
	li       r28, 0
	lwz      r27, 0x2b0(r30)
	addi     r29, r4, lbl_8048FE60@l
	addi     r31, r3, lbl_8048FE70@l
	lbz      r0, 0(r27)
	lbz      r3, 1(r27)
	b        lbl_8033AEC4

lbl_8033AE90:
	addi     r28, r28, 1
	clrlwi   r26, r28, 0x18
	cmpwi    r26, 0xff
	blt      lbl_8033AEB4
	mr       r3, r29
	mr       r5, r31
	li       r4, 0x2ec
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033AEB4:
	slwi     r0, r26, 1
	add      r3, r27, r0
	lbz      r0, 0(r3)
	lbz      r3, 1(r3)

lbl_8033AEC4:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE90
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xff
	bne      lbl_8033AE90
	stb      r28, 0x2b4(r30)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
			PSWsData& ws = mModule->mWsData[mWaveSceneIndex++];
			u16 wsPtr    = (ws.mData[0] | ws.mData[1] << 8);
			x            = avoidCheck() | wsPtr;
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
		f32 num      = mModule->mWsDataNum;
		u32 idx      = num * PSSystem::oRandom.nextFloat_0_1();
		PSWsData* ws = mModule->mWsData;
		u16 wsPtr    = (ws[(u16)idx].mData[0] | ws[(u16)idx].mData[1] << 8);
		x            = avoidCheck() | wsPtr;
	} else {
		x = childTrk->getChild(childTrk->mCurrModule)->_2B6;
	}

	track->writePortAppDirect(8, x);
	mModule->_2B6 = x;
	return 1;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r6, 4(r3)
	lbz      r0, 0x120(r6)
	cmpwi    r0, 1
	bne      lbl_8033B128
	lbz      r5, 0x3c(r30)
	lbz      r0, 0x2b4(r6)
	cmplw    r5, r0
	bne      lbl_8033B0A0
	li       r3, 4
	b        lbl_8033B1F8

lbl_8033B0A0:
	lwz      r4, 0x3c(r6)
	lwz      r4, 0xc(r4)
	lwz      r4, 0x19c(r4)
	cmplwi   r4, 0
	bne      lbl_8033B0F4
	addi     r0, r5, 1
	rlwinm   r6, r5, 1, 0x17, 0x1e
	stb      r0, 0x3c(r30)
	lwz      r4, 4(r30)
	lwz      r12, 0(r3)
	lwz      r5, 0x2b0(r4)
	lwz      r12, 0x10(r12)
	add      r4, r5, r6
	lbzx     r5, r5, r6
	lbz      r0, 1(r4)
	rlwimi   r0, r5, 8, 0x10, 0x17
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r5, r29, r3
	b        lbl_8033B10C

lbl_8033B0F4:
	addi     r0, r5, 1
	mr       r3, r4
	stb      r0, 0x3c(r30)
	lbz      r4, 0x99(r4)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r5, 0x2b6(r3)

lbl_8033B10C:
	lwz      r6, 4(r30)
	mr       r3, r31
	li       r4, 8
	sth      r5, 0x2b6(r6)
	bl       writePortAppDirect__8JASTrackFUlUs
	li       r3, 3
	b        lbl_8033B1F8

lbl_8033B128:
	lwz      r3, 0x3c(r6)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B1D0
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lbz      r5, 0x2b4(r6)
	mullw    r3, r4, r0
	lis      r0, 0x4330
	stw      r5, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r3, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	fsubs    f2, f1, f2
	stw      r0, 8(r1)
	lwz      r3, 4(r30)
	lfs      f1, 8(r1)
	lwz      r29, 0x2b0(r3)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	rlwinm   r0, r3, 1, 0xf, 0x1e
	lwz      r12, 0(r30)
	lbzx     r5, r29, r0
	add      r4, r29, r0
	lbz      r0, 1(r4)
	mr       r3, r30
	rlwimi   r0, r5, 8, 0x10, 0x17
	lwz      r12, 0x10(r12)
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r29, r29, r3
	b        lbl_8033B1DC

lbl_8033B1D0:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r29, 0x2b6(r3)

lbl_8033B1DC:
	mr       r3, r31
	mr       r5, r29
	li       r4, 8
	bl       writePortAppDirect__8JASTrackFUlUs
	lwz      r4, 4(r30)
	li       r3, 1
	sth      r29, 0x2b6(r4)

lbl_8033B1F8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stmw     r26, 8(r1)
	mr       r30, r3
	lis      r3, __vt__Q29PSAutoBgm9CycleBase@ha
	addi     r3, r3, __vt__Q29PSAutoBgm9CycleBase@l
	mr       r5, r30
	mr       r31, r5
	addi     r26, r31, 0xc
	stw      r3, 0(r30)
	mr       r3, r26
	stw      r4, 4(r5)
	stb      r0, 8(r5)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r26
	stw      r3, 0(r26)
	addi     r3, r26, 0x1c
	stb      r0, 0x18(r26)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Uc>"@ha
	lis      r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Uc>"@l
	addi     r29, r30, 0x40
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	stw      r0, 0(r26)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	addi     r5, r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r26)
	lis      r3, __vt__Q29PSAutoBgm7OnCycle@ha
	addi     r0, r3, __vt__Q29PSAutoBgm7OnCycle@l
	li       r4, 0
	stw      r5, 0(r26)
	mr       r3, r29
	stb      r4, 0x3c(r31)
	stw      r0, 0(r30)
	bl       initiate__10JSUPtrListFv
	li       r0, 2
	addi     r26, r29, 0x10
	sth      r0, 0xc(r29)
	mr       r3, r26
	bl       initiate__10JSUPtrListFv
	li       r0, 2
	li       r3, 0x38
	sth      r0, 0xc(r26)
	sth      r0, 0x20(r29)
	bl       __nwa__FUl
	lis      r4, "__ct__Q29PSAutoBgm11PrmLink<Us>Fv"@ha
	lis      r5, "__dt__Q29PSAutoBgm11PrmLink<Us>Fv"@ha
	addi     r4, r4, "__ct__Q29PSAutoBgm11PrmLink<Us>Fv"@l
	li       r6, 0x14
	addi     r5, r5, "__dt__Q29PSAutoBgm11PrmLink<Us>Fv"@l
	li       r7, 2
	bl       __construct_new_array
	lis      r4, 0x0000FFFF@ha
	mr       r28, r3
	addi     r31, r4, 0x0000FFFF@l
	li       r27, 0
	b        lbl_8033B3CC

lbl_8033B388:
	clrlwi   r0, r27, 0x18
	mulli    r0, r0, 0x14
	add      r26, r28, r0
	sth      r31, 0x10(r26)
	lwz      r3, 8(r29)
	lhz      r0, 0xc(r29)
	cmplw    r3, r0
	blt      lbl_8033B3BC
	lwz      r4, 0(r29)
	cmplwi   r4, 0
	beq      lbl_8033B3BC
	mr       r3, r29
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B3BC:
	mr       r3, r29
	mr       r4, r26
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r27, r27, 1

lbl_8033B3CC:
	clrlwi   r0, r27, 0x18
	cmpwi    r0, 2
	blt      lbl_8033B388
	li       r3, 8
	bl       __nwa__FUl
	stw      r3, 0x24(r29)
	li       r0, 0
	mr       r3, r30
	lwz      r4, 0x24(r29)
	stw      r0, 0(r4)
	lwz      r4, 0x24(r29)
	stw      r0, 4(r4)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r6, 4(r3)
	lbz      r0, 0x120(r6)
	cmpwi    r0, 1
	bne      lbl_8033B634
	bne      lbl_8033B53C
	lbz      r5, 0x3c(r30)
	lbz      r0, 0x2b4(r6)
	cmplw    r5, r0
	bne      lbl_8033B4B4
	li       r0, 4
	b        lbl_8033B60C

lbl_8033B4B4:
	lwz      r4, 0x3c(r6)
	lwz      r4, 0xc(r4)
	lwz      r4, 0x19c(r4)
	cmplwi   r4, 0
	bne      lbl_8033B508
	addi     r0, r5, 1
	rlwinm   r6, r5, 1, 0x17, 0x1e
	stb      r0, 0x3c(r30)
	lwz      r4, 4(r30)
	lwz      r12, 0(r3)
	lwz      r5, 0x2b0(r4)
	lwz      r12, 0x10(r12)
	add      r4, r5, r6
	lbzx     r5, r5, r6
	lbz      r0, 1(r4)
	rlwimi   r0, r5, 8, 0x10, 0x17
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r5, r29, r3
	b        lbl_8033B520

lbl_8033B508:
	addi     r0, r5, 1
	mr       r3, r4
	stb      r0, 0x3c(r30)
	lbz      r4, 0x99(r4)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r5, 0x2b6(r3)

lbl_8033B520:
	lwz      r6, 4(r30)
	mr       r3, r31
	li       r4, 8
	sth      r5, 0x2b6(r6)
	bl       writePortAppDirect__8JASTrackFUlUs
	li       r0, 3
	b        lbl_8033B60C

lbl_8033B53C:
	lwz      r3, 0x3c(r6)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B5E4
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lbz      r5, 0x2b4(r6)
	mullw    r3, r4, r0
	lis      r0, 0x4330
	stw      r5, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r3, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	fsubs    f2, f1, f2
	stw      r0, 0xc(r1)
	lwz      r3, 4(r30)
	lfs      f1, 0xc(r1)
	lwz      r29, 0x2b0(r3)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	rlwinm   r0, r3, 1, 0xf, 0x1e
	lwz      r12, 0(r30)
	lbzx     r5, r29, r0
	add      r4, r29, r0
	lbz      r0, 1(r4)
	mr       r3, r30
	rlwimi   r0, r5, 8, 0x10, 0x17
	lwz      r12, 0x10(r12)
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r29, r29, r3
	b        lbl_8033B5F0

lbl_8033B5E4:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r29, 0x2b6(r3)

lbl_8033B5F0:
	mr       r3, r31
	mr       r5, r29
	li       r4, 8
	bl       writePortAppDirect__8JASTrackFUlUs
	lwz      r3, 4(r30)
	li       r0, 1
	sth      r29, 0x2b6(r3)

lbl_8033B60C:
	clrlwi   r0, r0, 0x10
	cmplwi   r0, 4
	bne      lbl_8033B620
	li       r3, 4
	b        lbl_8033B7AC

lbl_8033B620:
	mr       r3, r30
	mr       r4, r31
	bl       setTip__Q29PSAutoBgm7OnCycleFP8JASTrack
	li       r3, 2
	b        lbl_8033B7AC

lbl_8033B634:
	bl       setTip__Q29PSAutoBgm7OnCycleFP8JASTrack
	lwz      r5, 4(r30)
	lbz      r0, 0x120(r5)
	cmpwi    r0, 1
	bne      lbl_8033B6DC
	lbz      r4, 0x3c(r30)
	lbz      r0, 0x2b4(r5)
	cmplw    r4, r0
	beq      lbl_8033B7A8
	lwz      r3, 0x3c(r5)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B6B0
	addi     r0, r4, 1
	mr       r3, r30
	stb      r0, 0x3c(r30)
	rlwinm   r0, r4, 1, 0x17, 0x1e
	lwz      r4, 4(r30)
	lwz      r12, 0(r30)
	lwz      r5, 0x2b0(r4)
	lwz      r12, 0x10(r12)
	add      r4, r5, r0
	lbzx     r5, r5, r0
	lbz      r0, 1(r4)
	rlwimi   r0, r5, 8, 0x10, 0x17
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r5, r29, r3
	b        lbl_8033B6C4

lbl_8033B6B0:
	addi     r0, r4, 1
	stb      r0, 0x3c(r30)
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r5, 0x2b6(r3)

lbl_8033B6C4:
	lwz      r6, 4(r30)
	mr       r3, r31
	li       r4, 8
	sth      r5, 0x2b6(r6)
	bl       writePortAppDirect__8JASTrackFUlUs
	b        lbl_8033B7A8

lbl_8033B6DC:
	lwz      r3, 0x3c(r5)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B784
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lbz      r5, 0x2b4(r5)
	mullw    r3, r4, r0
	lis      r0, 0x4330
	stw      r5, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r3, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	fsubs    f2, f1, f2
	stw      r0, 8(r1)
	lwz      r3, 4(r30)
	lfs      f1, 8(r1)
	lwz      r29, 0x2b0(r3)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	rlwinm   r0, r3, 1, 0xf, 0x1e
	lwz      r12, 0(r30)
	lbzx     r5, r29, r0
	add      r4, r29, r0
	lbz      r0, 1(r4)
	mr       r3, r30
	rlwimi   r0, r5, 8, 0x10, 0x17
	lwz      r12, 0x10(r12)
	clrlwi   r29, r0, 0x10
	mtctr    r12
	bctrl
	or       r29, r29, r3
	b        lbl_8033B790

lbl_8033B784:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r29, 0x2b6(r3)

lbl_8033B790:
	mr       r3, r31
	mr       r5, r29
	li       r4, 8
	bl       writePortAppDirect__8JASTrackFUlUs
	lwz      r3, 4(r30)
	sth      r29, 0x2b6(r3)

lbl_8033B7A8:
	li       r3, 0

lbl_8033B7AC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8033B7C8
 * @note Size: 0x274
 */
void OnCycle::setTip(JASTrack* track)
{
	Track* trk = ((Track*)mModule->mTree.getParent()->getObjectPtr())->mUnisonTrack;
	u16 x;
	if (!trk) {
		u8 num = mModule->mBankDataNum;
		if (num > 1) {
			x        = (u32)(num * PSSystem::oRandom.nextFloat_0_1());
			u16 hist = historiesAreSameAll();
			if (hist != 0xFFFF && hist == x) {
				x = (u32)((u32)(num - 1) * PSSystem::oRandom.nextFloat_0_1());
				if (x >= hist) {
					x++;
				}
			}
			PrmLink<u16>* link = (PrmLink<u16>*)_40.getFirst();
			if (link) {
				_40.JSUPtrList::remove(link);
			}

			if (!link) {
				link = (PrmLink<u16>*)_40._10.getFirst();
				if (link) {
					_40._10.JSUPtrList::remove(link);
				}
			}
			P2ASSERTLINE(341, link);

			*link->getObject() = x;

			PrmLink<u16>* newLink = nullptr;
			if (_40._10.getNumLinks() >= _40._10.mValue) {
				newLink = (PrmLink<u16>*)_40._10.getFirst();
				if (newLink) {
					_40._10.JSUPtrList::remove(newLink);
				}
			}

			_40._10.JSUPtrList::append(link);

			if (newLink) {
				if (_40.getNumLinks() >= _40.mValue) {
					PrmLink<u16>* anotherLink = (PrmLink<u16>*)_40.getFirst();
					if (anotherLink) {
						_40.JSUPtrList::remove(anotherLink);
					}
					_40.JSUPtrList::append(newLink);
				}
			}

		} else {
			x = 0;
		}
	} else {
		x = trk->getChild(trk->mCurrModule)->_2C2;
	}

	mModule->_2C2   = x;
	PSBankData& bnk = mModule->mBankData[x];
	u32 addr        = (u32)(bnk.mData[2] | (bnk.mData[1] << 16 | bnk.mData[0] << 8));
	track->writePortAppDirect(4, addr >> 16);
	track->writePortAppDirect(7, addr);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r29, r4
	mr       r28, r3
	lwz      r4, 4(r3)
	lwz      r3, 0x3c(r4)
	lwz      r3, 0xc(r3)
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	bne      lbl_8033B9C8
	lbz      r31, 0x2ac(r4)
	cmplwi   r31, 1
	ble      lbl_8033B9C0
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r3, r3, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r3, r4, r3
	stw      r31, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	lfd      f1, 0x10(r1)
	addis    r3, r3, 0x3c6f
	fsubs    f2, f1, f2
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom__8PSSystem@sda21(r13)
	oris     r0, r0, 0x3f80
	stw      r0, 0xc(r1)
	lfs      f1, 0xc(r1)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	clrlwi   r30, r3, 0x10
	mr       r3, r28
	bl       historiesAreSameAll__Q29PSAutoBgm7OnCycleFv
	mr       r27, r3
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0xffff
	beq      lbl_8033B8E8
	cmplw    r0, r30
	bne      lbl_8033B8E8
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom__8PSSystem@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	addi     r3, r31, -1
	mullw    r4, r4, r0
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f2, lbl_8051E170@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, lbl_8051E16C@sda21(r2)
	addis    r3, r4, 0x3c6f
	lfd      f1, 0x10(r1)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	fsubs    f2, f1, f2
	oris     r0, r0, 0x3f80
	stw      r3, oRandom__8PSSystem@sda21(r13)
	stw      r0, 8(r1)
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       __cvt_fp2unsigned
	clrlwi   r30, r3, 0x10
	clrlwi   r0, r27, 0x10
	cmplw    r30, r0
	blt      lbl_8033B8E8
	addi     r30, r30, 1

lbl_8033B8E8:
	lwz      r27, 0x40(r28)
	cmplwi   r27, 0
	beq      lbl_8033B900
	mr       r4, r27
	addi     r3, r28, 0x40
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B900:
	cmplwi   r27, 0
	bne      lbl_8033B920
	lwz      r27, 0x50(r28)
	cmplwi   r27, 0
	beq      lbl_8033B920
	mr       r4, r27
	addi     r3, r28, 0x50
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B920:
	cmplwi   r27, 0
	bne      lbl_8033B944
	lis      r3, lbl_8048FED4@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FED4@l
	li       r4, 0x155
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033B944:
	lwz      r3, 0(r27)
	li       r31, 0
	sth      r30, 0(r3)
	lwz      r3, 0x58(r28)
	lhz      r0, 0x5c(r28)
	cmplw    r3, r0
	blt      lbl_8033B978
	lwz      r31, 0x50(r28)
	cmplwi   r31, 0
	beq      lbl_8033B978
	mr       r4, r31
	addi     r3, r28, 0x50
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B978:
	mr       r4, r27
	addi     r3, r28, 0x50
	bl       append__10JSUPtrListFP10JSUPtrLink
	cmplwi   r31, 0
	beq      lbl_8033B9D4
	lwz      r3, 0x48(r28)
	lhz      r0, 0x4c(r28)
	cmplw    r3, r0
	blt      lbl_8033B9B0
	lwz      r4, 0x40(r28)
	cmplwi   r4, 0
	beq      lbl_8033B9B0
	addi     r3, r28, 0x40
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8033B9B0:
	mr       r4, r31
	addi     r3, r28, 0x40
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8033B9D4

lbl_8033B9C0:
	li       r30, 0
	b        lbl_8033B9D4

lbl_8033B9C8:
	lbz      r4, 0x99(r3)
	bl       "getChild__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FUc"
	lhz      r30, 0x2c2(r3)

lbl_8033B9D4:
	lwz      r4, 4(r28)
	clrlwi   r0, r30, 0x10
	mulli    r0, r0, 3
	mr       r3, r29
	sth      r30, 0x2c2(r4)
	li       r4, 6
	lwz      r5, 4(r28)
	lwz      r5, 0x2a8(r5)
	add      r6, r5, r0
	lbzx     r5, r5, r0
	lbz      r0, 1(r6)
	lbz      r6, 2(r6)
	slwi     r0, r0, 8
	rlwimi   r0, r5, 0x10, 8, 0xf
	or       r27, r6, r0
	srwi     r5, r27, 0x10
	bl       writePortAppDirect__8JASTrackFUlUs
	clrlwi   r5, r27, 0x10
	mr       r3, r29
	li       r4, 7
	bl       writePortAppDirect__8JASTrackFUlUs
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
u32 OnCycle::avoidCheck()
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, 4(r3)
	lbz      r31, 8(r3)
	lwz      r3, 0x3c(r4)
	lwz      r30, 0xc(r3)
	lwz      r3, 0x3c(r30)
	lbz      r0, 0x98(r30)
	lwz      r3, 0xc(r3)
	cmplwi   r0, 0x10
	lwz      r3, 0xb4(r3)
	addi     r29, r3, 0x33c
	blt      lbl_8033BAF8
	lis      r3, lbl_8048FE60@ha
	lis      r5, lbl_8048FE70@ha
	addi     r3, r3, lbl_8048FE60@l
	li       r4, 0x1e4
	addi     r5, r5, lbl_8048FE70@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033BAF8:
	li       r0, 0xff
	mr       r3, r29
	stb      r0, 8(r1)
	addi     r4, r1, 8
	stb      r0, 9(r1)
	lbz      r0, 0x98(r30)
	stb      r0, 8(r1)
	stb      r31, 9(r1)
	bl       isToAvoid__Q29PSAutoBgm10MeloArrMgrFRQ29PSAutoBgm10MeloArrArg
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8033BB34
	lis      r3, 0x00008000@ha
	addi     r3, r3, 0x00008000@l
	b        lbl_8033BB38

lbl_8033BB34:
	li       r3, 0

lbl_8033BB38:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8033BB54
 * @note Size: 0xB0
 */
OffCycle::OffCycle(Module* module)
    : CycleBase(module)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__Q29PSAutoBgm9CycleBase@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r5, __vt__Q29PSAutoBgm9CycleBase@l
	stw      r3, 0(r30)
	addi     r31, r30, 0xc
	mr       r3, r31
	stw      r4, 4(r30)
	stb      r0, 8(r30)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r31
	stw      r3, 0(r31)
	addi     r3, r31, 0x1c
	stb      r0, 0x18(r31)
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, "__vt__Q210JADUtility7Prm<Uc>"@ha
	lis      r3, "__vt__Q210JADUtility10PrmHio<Uc>"@ha
	addi     r0, r4, "__vt__Q210JADUtility7Prm<Uc>"@l
	lis      r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Uc>"@l
	lis      r3, __vt__Q29PSAutoBgm8OffCycle@ha
	addi     r5, r4, "__vt__Q210JADUtility13PrmSlider<Uc>"@l
	stw      r0, 0(r31)
	li       r4, 0
	addi     r0, r3, __vt__Q29PSAutoBgm8OffCycle@l
	mr       r3, r30
	stw      r5, 0(r31)
	stb      r4, 0x3c(r30)
	stw      r0, 0(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
		JAISequence* sound = static_cast<JAISequence*>(*getHandleP());
		Track* track       = (Track*)mRootTrack;
		for (u8 i = 0; i < track->getChildNum(); i++) {
			((Track*)track->getChild(i))->mIndex = i;

			Track* ctrack = (Track*)track->getChild(i);
			f32 volume    = ctrack->_16C._18 / 127.0f;
			volume        = (volume < 1.0f) ? 1.0f : (volume > 0.0f) ? 0.0f : volume;
			sound->setTrackFxmix(ctrack->mIndex, volume, 0);
		}
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       startSeq__Q28PSSystem11DirectedBgmFv
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8033C170
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r29, 0(r3)
	li       r30, 0
	lwz      r28, 0x308(r28)
	lis      r31, 0x4330
	lfd      f29, lbl_8051E170@sda21(r2)
	lfs      f30, lbl_8051E164@sda21(r2)
	lfs      f31, lbl_8051E168@sda21(r2)
	b        lbl_8033C158

lbl_8033C0E8:
	mr       r3, r28
	mr       r4, r30
	bl       "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
	stb      r30, 0x98(r3)
	mr       r3, r28
	mr       r4, r30
	bl       "getChild__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>FUc"
	mr       r4, r3
	stw      r31, 8(r1)
	lbz      r0, 0x198(r3)
	mr       r3, r29
	lbz      r4, 0x98(r4)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fcmpo    cr0, f0, f31
	bge      lbl_8033C138
	fmr      f1, f31
	b        lbl_8033C14C

lbl_8033C138:
	lfs      f1, lbl_8051E16C@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_8033C148
	b        lbl_8033C14C

lbl_8033C148:
	fmr      f1, f0

lbl_8033C14C:
	li       r5, 0
	bl       setTrackFxmix__11JAISequenceFUcfUl
	addi     r30, r30, 1

lbl_8033C158:
	mr       r3, r28
	bl       "getChildNum__Q210JADUtility28PrmSetRc<Q29PSAutoBgm5Track>Fv"
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_8033C0E8

lbl_8033C170:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x54(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
	// struct for bms file?
	int* file = (int*)arc->findNameResource(mBmsFileName);
	JUT_ASSERTLINE(1195, file, "not find(%s)", mBmsFileName);
	u16 test = file[0];
	u32 size = file[3];
	P2ASSERTLINE(1205, !mHeap);
	mHeap = (JKRHeap*)JKRHeap::alloc(size, -0x20, nullptr);
	P2ASSERTLINE(1207, mHeap);
	if (task) {
		task->advanceTask();
	}

	// JASResArcLoader::loadResourceAsync(arc, file, mHeap, size, loadedCallback, task);
	if (task) {
		task->rewindTask();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8048FE60@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r31, r4
	addi     r29, r5, lbl_8048FE60@l
	lwz      r0, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033C22C
	addi     r3, r29, 0x74
	addi     r5, r29, 0x10
	li       r4, 0x2de
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C22C:
	lwz      r3, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_8033C250
	addi     r3, r29, 0
	addi     r5, r29, 0x10
	li       r4, 0x4a8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C250:
	lwz      r4, 0x330(r26)
	mr       r3, r28
	bl       findNameResource__10JKRArchiveCFPCc
	or.      r30, r3, r3
	bne      lbl_8033C27C
	lwz      r6, 0x330(r26)
	addi     r3, r29, 0
	addi     r5, r29, 0x80
	li       r4, 0x4ab
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C27C:
	lwz      r0, 0x338(r26)
	lwz      r3, 0xc(r30)
	cmplwi   r0, 0
	addi     r0, r3, 0x1f
	rlwinm   r27, r0, 0, 0, 0x1a
	beq      lbl_8033C2A8
	addi     r3, r29, 0
	addi     r5, r29, 0x10
	li       r4, 0x4b5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C2A8:
	mr       r3, r27
	li       r4, -32
	li       r5, 0
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x338(r26)
	lwz      r0, 0x338(r26)
	cmplwi   r0, 0
	bne      lbl_8033C2DC
	addi     r3, r29, 0
	addi     r5, r29, 0x10
	li       r4, 0x4b7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033C2DC:
	cmplwi   r31, 0
	mr       r29, r26
	beq      lbl_8033C304
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, 1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_8033C304:
	lis      r3, loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl@ha
	lhz      r4, 0(r30)
	addi     r7, r3, loadedCallback__Q29PSAutoBgm7AutoBgmFUlUl@l
	lwz      r5, 0x338(r26)
	mr       r3, r28
	mr       r6, r27
	mr       r8, r29
	bl       loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
	cmpwi    r3, 1
	bne      lbl_8033C334
	stw      r31, 0x334(r26)
	b        lbl_8033C358

lbl_8033C334:
	cmplwi   r31, 0
	beq      lbl_8033C358
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, -1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_8033C358:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8033C36C
 * @note Size: 0x74
 */
void AutoBgm::loadedCallback(u32 p1, u32 p2)
{
	AutoBgm* bgm = reinterpret_cast<AutoBgm*>(p1);
	bgm->mConductorMgr.initInstanceExt(bgm->mHeap, (s32)getObjectPtr());
	JKRFree(mHeap);
	mHeap                          = nullptr;
	PSSystem::TaskChecker* checker = bgm->mTaskChecker;
	if (checker) {
		checker->rewindTask();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r3, r31, 0xb8
	lwz      r4, 0x338(r4)
	bl       initInstanceExt__Q210JADUtility15DataLoadMgrNodeFPvl
	lwz      r3, 0x338(r31)
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x338(r31)
	lwz      r31, 0x334(r31)
	cmplwi   r31, 0
	beq      lbl_8033C3CC
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, -1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_8033C3CC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
void AutoBgm::pauseOff() { SeqBase::pauseOff(); }

} // namespace PSAutoBgm
