#include "JSystem/JAudio/JAS/JASResArcLoader.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/SeqTrack.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSDirector.h"
#include "stream.h"
#include "CNode.h"

namespace PSSystem {

/**
 * @note Address: 0x80330D20
 * @note Size: 0x60
 */
SeqDataList::SeqDataList()
    : SingletonBase<SeqDataList>()
{
}

/**
 * @note Address: 0x80330D80
 * @note Size: 0x88
 */
SeqDataList::~SeqDataList() { }

/**
 * @note Address: 0x80330E08
 * @note Size: 0x108
 */
int SeqDataList::getSeqVolume(char const* bmsname)
{
	char buf[32];
	P2ASSERTLINE(36, mFile);
	RamStream stream(mFile, -1);
	stream.setMode(STREAM_MODE_TEXT, 1);
	stream.readString(buf, 32);

	while (strcmp(buf, "endoffile")) {
		volatile u8 volume = stream.readByte();
		if (!strcmp(buf, bmsname)) {
			return volume;
		}
		stream.readString(buf, 32);
	}

	JUT_PANICLINE(53, "seq list\nnot find\n(%s)\n", bmsname);
	return 50;
	/*
	stwu     r1, -0x460(r1)
	mflr     r0
	stw      r0, 0x464(r1)
	stw      r31, 0x45c(r1)
	stw      r30, 0x458(r1)
	mr       r30, r4
	stw      r29, 0x454(r1)
	mr       r29, r3
	lis      r3, lbl_8048F848@ha
	lwz      r0, 0x18(r29)
	addi     r31, r3, lbl_8048F848@l
	cmplwi   r0, 0
	bne      lbl_80330E50
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x24
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80330E50:
	lwz      r4, 0x18(r29)
	addi     r3, r1, 0x2c
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x38(r1)
	bne      lbl_80330E78
	li       r0, 0
	stw      r0, 0x440(r1)

lbl_80330E78:
	addi     r3, r1, 0x2c
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci
	b        lbl_80330EC4

lbl_80330E8C:
	addi     r3, r1, 0x2c
	bl       readByte__6StreamFv
	stb      r3, 0x28(r1)
	mr       r4, r30
	addi     r3, r1, 8
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80330EB4
	lbz      r3, 0x28(r1)
	b        lbl_80330EF4

lbl_80330EB4:
	addi     r3, r1, 0x2c
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci

lbl_80330EC4:
	addi     r3, r1, 8
	addi     r4, r31, 0x18
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80330E8C
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x24
	li       r4, 0x35
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0x32

lbl_80330EF4:
	lwz      r0, 0x464(r1)
	lwz      r31, 0x45c(r1)
	lwz      r30, 0x458(r1)
	lwz      r29, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x460
	blr
	*/
}

/**
 * @note Address: 0x80330F10
 * @note Size: 0x60
 */
StreamDataList::StreamDataList()
    : SingletonBase()
{
}

/**
 * @note Address: 0x80330F70
 * @note Size: 0x88
 */
StreamDataList::~StreamDataList() { }

/**
 * @note Address: 0x80330FF8
 * @note Size: 0x110
 */
int StreamDataList::getStreamVolume(u32 id)
{
	u32 searchID = id & 0xfff;
	u8 volume[1];
	int streamID[1];
	char buf[32];
	P2ASSERTLINE(76, mFile);
	RamStream stream(mFile, -1);
	stream.setMode(STREAM_MODE_TEXT, 1);
	stream.readString(buf, 32);
	while (strcmp(buf, "endoffile")) {
		for (int i = 0; i < 1; i++) {
			streamID[i] = stream.readInt();
			volume[i]   = (u8)stream.readByte();
		}
		int vol = *volume;
		if (*streamID == searchID) {
			return vol;
		}
		stream.readString(buf, 32);
	}
	JUT_PANICLINE(95, "stream list\nnot find\n(id=%d)\n", searchID);
	return 0;

	/*
	stwu     r1, -0x460(r1)
	mflr     r0
	stw      r0, 0x464(r1)
	stw      r31, 0x45c(r1)
	stw      r30, 0x458(r1)
	clrlwi   r30, r4, 0x14
	stw      r29, 0x454(r1)
	mr       r29, r3
	lis      r3, lbl_8048F848@ha
	lwz      r0, 0x18(r29)
	addi     r31, r3, lbl_8048F848@l
	cmplwi   r0, 0
	bne      lbl_80331040
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331040:
	lwz      r4, 0x18(r29)
	addi     r3, r1, 0x30
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x3c(r1)
	bne      lbl_80331068
	li       r0, 0
	stw      r0, 0x444(r1)

lbl_80331068:
	addi     r3, r1, 0x30
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci
	b        lbl_803310BC

lbl_8033107C:
	addi     r3, r1, 0x30
	bl       readInt__6StreamFv
	stw      r3, 0x28(r1)
	addi     r3, r1, 0x30
	bl       readByte__6StreamFv
	lwz      r0, 0x28(r1)
	clrlwi   r4, r3, 0x18
	stb      r3, 0x2c(r1)
	cmplw    r0, r30
	bne      lbl_803310AC
	mr       r3, r4
	b        lbl_803310EC

lbl_803310AC:
	addi     r3, r1, 0x30
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci

lbl_803310BC:
	addi     r3, r1, 8
	addi     r4, r31, 0x18
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8033107C
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x3c
	li       r4, 0x5f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_803310EC:
	lwz      r0, 0x464(r1)
	lwz      r31, 0x45c(r1)
	lwz      r30, 0x458(r1)
	lwz      r29, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x460
	blr
	*/
}

/**
 * @note Address: 0x80331108
 * @note Size: 0x94
 */
void SeqSoundBase::stop(u32 type)
{
	P2ASSERTLINE(107, mSeq);
	OSMutex* mutex = &mSeq->mMutex;
	OSLockMutex(mutex);
	stopInner(type);
	OSUnlockMutex(mutex);
}

/**
 * @note Address: 0x8033119C
 * @note Size: 0x20
 */
void SeqSound::stopInner(u32 type) { JAInter::SequenceMgr::releaseSeqBuffer(this, type); }

/**
 * @note Address: 0x803311BC
 * @note Size: 0x20
 */
void StreamSound::stopInner(u32 type) { JAInter::StreamMgr::releaseStreamBuffer(this, type); }

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
SeqHeap::SeqHeap(u32 entry, SeqBase* seq)
{
	mOwner    = nullptr;
	u32 size  = (entry + 0x1f) & 0xffffffe0;
	mSize     = size;
	mFileData = nullptr;
	mOwnerSeq = seq;
	mTask     = nullptr;
	P2ASSERTLINE(134, seq);
	if (size) {
		mFileData = new (JKRGetCurrentHeap(), 0x20) u8[mSize];
		P2ASSERTLINE(138, mFileData);
		P2ASSERTLINE(139, mSize != 0);
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803311DC
 * @note Size: 0x60
 */
SeqHeap::~SeqHeap() { delete[] mFileData; }

/**
 * @note Address: 0x8033123C
 * @note Size: 0x200
 */
JAInter::SequenceMgr::CustomHeapInfo SeqHeap::requestCallback(u32 request, u16 seqOffset, JAISequence* seq)
{
	JAInter::SequenceMgr::CustomHeapInfo info;
	info.mFilePtr    = nullptr;
	info._04         = 0;
	static int oldID = 0;

	u16 resID = (u16)seqOffset;
	switch (request) {
	case 0: {
		P2ASSERTLINE(190, seq);
		SeqBase* baseSeq = static_cast<SeqSound*>(seq)->mSeq;
		P2ASSERTLINE(192, baseSeq);
		SeqHeap* heap = baseSeq->mSeqHeap;
		if (!heap->mOwner) {
			info._04 = 1;
			P2ASSERTLINE(201, JASResArcLoader::getResSize(JAInter::SequenceMgr::getArchivePointer(), resID) <= heap->mSize);
		} else {
			info._04 = 0;
		}
		info.mFilePtr = heap->mFileData;
		P2ASSERTLINE(208, info.mFilePtr);
	} break;
	case 1:
	case 3: {
		P2ASSERTLINE(220, seq);
		SeqBase* sound = static_cast<SeqSound*>(seq)->mSeq;
		P2ASSERTLINE(222, sound);
		JKRArchive* arc = JAInter::SequenceMgr::getArchivePointer();
		P2ASSERTLINE(224, arc);
		size_t size = JASResArcLoader::getResSize(arc, resID);
		sound->mSeqHeap->loadedCallback(size, (u32)sound->mSeqHeap);
	} break;
	case 2: {
		P2ASSERTLINE(233, seq);
		SeqSound* sound = static_cast<SeqSound*>(seq);
		sound->mSeq     = nullptr;
	} break;
	}

	return info;
}

/**
 * @note Address: 0x8033143C
 * @note Size: 0xD4
 */
void SeqHeap::loadSeqAsync(TaskChecker* task)
{
	mTask = task;
	P2ASSERTLINE(247, !mOwner);
	task = mTask; // this is so dumb but necessary for register allocation
	PSAdvanceTask(task);

	int size     = ((int*)(mOwnerSeq->getFileEntry()))[3];
	u8* fileData = mFileData;
	int offs     = ((u16*)(mOwnerSeq->getFileEntry()))[0];
	int res
	    = JASResArcLoader::loadResourceAsync(JAInter::SequenceMgr::getArchivePointer(), offs, fileData, size, &loadedCallback, (u32)this);
	JUT_ASSERTLINE(266, res == 1, "SeqBase::loadSeqAsync() fault loading sequence");
}

/**
 * @note Address: 0x80331510
 * @note Size: 0x98
 */
void SeqHeap::loadedCallback(u32 arg1, u32 arg2)
{
	SeqHeap* heap = (SeqHeap*)arg2;
	heap->mOwner  = (SeqHeap*)arg1;
	heap->mOwnerSeq->seqLoadAfter();
	P2ASSERTLINE(294, arg1);

	PSRewindTask(heap->mTask);
}

/**
 * @note Address: 0x803315A8
 * @note Size: 0x30
 */
void SeqPlayReservator::reservatorTask() { mSequence->startSeq(); }

/**
 * @note Address: 0x803315D8
 * @note Size: 0x30
 */
void SeqPauseOffReservator::reservatorTask() { mSequence->pauseOff(); }

/**
 * @note Address: 0x80331608
 * @note Size: 0x100
 */
SeqBase::SeqBase(char const* bmsFileName, JAInter::SoundInfo const& info)
    : JSULink<SeqBase>(this)
    , mBmsFileName(nullptr)
    , mSoundInfo(info)
    , mSeqHeap(nullptr)
    , mPlayRes(this)
    , mPauseOffRes(this)
    , mPauseMode(MODE4)
    , mPausedMinVolume(38)
    , mSeqSound(nullptr)
{
	OSInitMutex(&mMutex);
	if (bmsFileName != nullptr) {
		mBmsFileName = new char[strlen(bmsFileName) + 1];
		strcpy(mBmsFileName, bmsFileName);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<PSSystem::SeqBase>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80331708
 * @note Size: 0x134
 */
void SeqBase::init()
{
	if (mBmsFileName) {
		if (SeqDataList::sInstance) {
			mSoundInfo.mVolume.byteView[0] = SeqDataList::sInstance->getSeqVolume(mBmsFileName);
		}
		mSeqHeap = new SeqHeap(((int*)getFileEntry())[3], this);
	}
}

/**
 * @note Address: 0x8033183C
 * @note Size: 0x98
 */
SeqBase::~SeqBase()
{
	if (mSeqHeap) {
		delete mSeqHeap;
	}
	delete[] mBmsFileName;
}

/**
 * @note Address: 0x803318D4
 * @note Size: 0x3C
 */
bool SeqBase::isPlaying()
{
	if (mSeqSound) {
		u8 state = (u8)mSeqSound->mSeqParameter.mTrack.mSeqCtrl.mState.b[3];
		if (state == 0 || state == 2) {
			return false;
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80331910
 * @note Size: 0x90
 */
void* SeqBase::getFileEntry()
{
	P2ASSERTLINE(402, JAInter::SequenceMgr::getArchivePointer());
	void* file = JAInter::SequenceMgr::getArchivePointer()->findNameResource(mBmsFileName);
	JUT_ASSERTLINE(404, file, "not find(%s)", mBmsFileName);
	return file;
}

/**
 * @note Address: 0x803319A0
 * @note Size: 0x1D4
 */
void SeqBase::pauseOn(PauseMode pause)
{
	if (mPauseMode != SeqBase::MODE4) {
		return;
	}

	mPauseMode = pause;
	P2ASSERTLINE(418, getHandleP());

	JAISound* sound = *getHandleP();
	bool noSound    = false;
	switch (pause) {
	case SeqBase::MODE0:
		if (sound) {
			sound->setPauseMode(2, 30);
		} else {
			noSound = true;
		}
		break;
	case SeqBase::MODE1:
		if (sound) {
			sound->setVolume(0.0f, 15, SOUNDPARAM_Pause);
		} else {
			noSound = true;
		}
		break;
	case SeqBase::MODE2:
		if (sound) {
			f32 volume = mPausedMinVolume / 127.0f;
			volume     = (volume > 1.0f) ? 1.0f : volume;
			sound->setVolume(volume, 15, SOUNDPARAM_Pause);
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
		JUT_PANICLINE(461, "P2Assert");
	}

	if (noSound == true)
		mPauseMode = SeqBase::MODE4;
}

/**
 * @note Address: 0x80331B74
 * @note Size: 0x13C
 */
void SeqBase::pauseOff()
{
	P2ASSERTLINE(474, getHandleP());

	if (mPauseMode == SeqBase::MODE3) {
		startSeq();
	} else if (mPauseMode == SeqBase::MODE2 || mPauseMode == SeqBase::MODE1) {
		JAISound* sound = *getHandleP();
		if (sound) {
			(*getHandleP())->setVolume(1.0f, 15, SOUNDPARAM_Pause);
		}
	} else if (mPauseMode != SeqBase::MODE4) {
		JAISound* sound = *getHandleP();
		if (sound) {
			(*getHandleP())->setPauseMode(false, 30);
		}
	}
	mPauseMode = SeqBase::MODE4;
}

/**
 * @note Address: 0x80331CB0
 * @note Size: 0xD4
 */
void SeqBase::exec()
{
	if (mPlayRes.mState) {
		if (mPlayRes.mState-- == 1) {
			mPlayRes.reservatorTask();
		}
	}

	if (mPauseOffRes.mState) {
		if (mPauseOffRes.mState-- == 1) {
			mPauseOffRes.reservatorTask();
		}
	}

	if (!(*getHandleP()) && mSeqSound) {
		u8 state = (u8)mSeqSound->mSeqParameter.mTrack.mSeqCtrl.mState.b[3];
		if (state == 0 || state == 2) {
			mSeqSound = nullptr;
		}
	}
}

/**
 * @note Address: 0x80331D84
 * @note Size: 0x4
 */
void SeqBase::onPlayingFrame() { }

/**
 * @note Address: 0x80331D88
 * @note Size: 0x154
 */
void SeqBase::startSeq()
{
	OSLockMutex(&mMutex);
	int flag = ((u16*)getFileEntry())[0];
	flag |= getSeqType();
	JAISequence** handle = (JAISequence**)getHandleP();

	JAInter::SequenceMgr::storeSeqBuffer(handle, nullptr, flag, 0, 0, &mSoundInfo);

	SeqSound** seqHandle = (SeqSound**)(JAISequence**)getHandleP();
	P2ASSERTLINE(534, seqHandle);
	SeqSound* sound = static_cast<SeqSound*>(*seqHandle);
	JUT_ASSERTLINE(538, sound, "seq not played");
	sound->mSeq = this;
	setConfigVolume();
	mSeqSound = (SeqSound*)&(sound)->mSeqParameter.mTrack.mHead;
	OSUnlockMutex(&mMutex);
}

/**
 * @note Address: 0x80331EDC
 * @note Size: 0xD0
 */
void SeqBase::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mBgmVolume;
	(*getHandleP())->setVolume(vol, 0, SOUNDPARAM_Unk8);
	(*getHandleP())->setVolume(0.8f, 0, SOUNDPARAM_Unk3);
}

/**
 * @note Address: 0x80331FAC
 * @note Size: 0x38
 */
void SeqBase::scene1st(TaskChecker* task)
{
	if (mSeqHeap) {
		mSeqHeap->loadSeqAsync(task);
	}
}

/**
 * @note Address: 0x80331FE4
 * @note Size: 0x60
 */
void SeqBase::stopSeq(u32 type)
{
	JAISound** se = getHandleP();
	if (se && *se) {
		(*se)->stop(type);
	}
}

/**
 * @note Address: 0x80332044
 * @note Size: 0x114
 */
BgmSeq::BgmSeq(char const* bmsFileName, JAInter::SoundInfo const& info)
    : SeqBase(bmsFileName, info)
    , mHandleP(nullptr)
{
}

/**
 * @note Address: 0x80332158
 * @note Size: 0xC0
 */
BgmSeq::~BgmSeq() { stopSeq(0); }

/**
 * @note Address: 0x80332218
 * @note Size: 0x100
 */
StreamBgm::StreamBgm(u32 id, const JAInter::SoundInfo& info)
    : BgmSeq(static_cast<const char*>(nullptr), info)
    , mJaiSound(nullptr)
    , mId(id)
{
}

/**
 * @note Address: 0x80332318
 * @note Size: 0x4
 */
void StreamBgm::init() { }

/**
 * @note Address: 0x8033231C
 * @note Size: 0xEC
 */
StreamBgm::~StreamBgm() { stopSeq(0); }

/**
 * @note Address: 0x80332408
 * @note Size: 0x8
 */
void StreamBgm::setId(u32 a1) { mId = a1; }

/**
 * @note Address: 0x80332410
 * @note Size: 0x15C
 */
void StreamBgm::startSeq()
{
	if (StreamDataList::sInstance) {
		mSoundInfo.mVolume.byteView[0] = StreamDataList::sInstance->getStreamVolume(mId);
	}
	OSLockMutex(&mMutex);
	JAIBasic::msBasic->startSoundBasic(mId, &mJaiSound, nullptr, 0, 0, &mSoundInfo);
	OSUnlockMutex(&mMutex);
	P2ASSERTLINE(704, mJaiSound);
	P2ASSERTLINE(705, mId == mJaiSound->mSoundID);
	if (mId == P2_STREAM_SOUND_ID(PSSTR_PIKMIN_GREET)) {
		(*getHandleP())->setVolume(1.0f, 0, SOUNDPARAM_Unk8);
		(*getHandleP())->setVolume(0.8f, 0, SOUNDPARAM_Unk3);
	} else {
		setConfigVolume();
	}
}

/**
 * @note Address: 0x8033256C
 * @note Size: 0xD0
 */
void StreamBgm::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mBgmVolume;
	(*getHandleP())->setVolume(vol, 0, SOUNDPARAM_Unk8);
	(*getHandleP())->setVolume(0.5f, 0, SOUNDPARAM_Unk3);
}

/**
 * @note Address: 0x8033263C
 * @note Size: 0x14
 */
bool StreamBgm::isPlaying() { return mJaiSound != 0; }

/**
 * @note Address: 0x80332650
 * @note Size: 0xC0
 */
SeSeq::~SeSeq() { stopSeq(0); }

/**
 * @note Address: 0x80332710
 * @note Size: 0x2C
 */
void SeSeq::seqLoadAfter() { startSeq(); }

/**
 * @note Address: 0x8033273C
 * @note Size: 0xD0
 */
void SeSeq::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mSfxVolume;
	(*getHandleP())->setVolume(vol, 0, SOUNDPARAM_Unk8);
	(*getHandleP())->setVolume(1.0f, 0, SOUNDPARAM_Unk3);
}

/**
 * @note Address: 0x8033280C
 * @note Size: 0xA4
 */
void SeSeq::stopSeq(u32 type)
{
	for (u8 i = 0; i < (u8)JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		JAIBasic::msBasic->stopAllSe(i);
	}
	SeqBase::stopSeq(type);
}

/**
 * @note Address: 0x803328B0
 * @note Size: 0x138
 */
DirectedBgm::DirectedBgm(char const* bmsFileName, JAInter::SoundInfo const& info, DirectorMgrBase* directorMgr)
    : BgmSeq(bmsFileName, info)
    , mDirectorMgr(directorMgr)
    , mRootTrack(nullptr)
    , mIsInitialized(0)
{
}

/**
 * @note Address: 0x803329E8
 * @note Size: 0xC0
 */
void DirectedBgm::initRootTrack_onPlaying(JASTrack* track)
{
	P2ASSERTLINE(804, mIsInitialized == 1);
	P2ASSERTLINE(805, mRootTrack);
	PSSystem::setObject(track, mRootTrack, 18);
	mRootTrack->init(track);
	if (mDirectorMgr) {
		mDirectorMgr->playInit(track);
	}
}

/**
 * @note Address: 0x80332AA8
 * @note Size: 0xD4
 */
void DirectedBgm::initChildTrack_onPlaying(JASTrack* track, u8 id)
{
	P2ASSERTLINE(816, mIsInitialized == 1);
	P2ASSERTLINE(817, id < 16);
	PSSystem::setObject(track, mChildTracks[id], 18);
	mChildTracks[id]->init(track);
	if (mDirectorMgr) {
		mDirectorMgr->playInit(track);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void DirectedBgm::getDirector(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80332B7C
 * @note Size: 0x98
 */
DirectorBase* DirectedBgm::getDirectorP(u8 id)
{
	P2ASSERTLINE(832, mDirectorMgr);
	return mDirectorMgr->getDirector(id);
}

/**
 * @note Address: 0x80332C14
 * @note Size: 0x64
 */
SeqTrackRoot* DirectedBgm::newSeqTrackRoot()
{
	SeqTrackRoot* track = new SeqTrackRoot;
	P2ASSERTLINE(839, track);
	return track;
}

/**
 * @note Address: 0x80332C78
 * @note Size: 0x74
 */
SeqTrackChild* DirectedBgm::newSeqTrackChild(u8, SeqTrackRoot& track)
{
	SeqTrackChild* newtrack = new SeqTrackChild(*(const_cast<const SeqTrackRoot*>(mRootTrack)));
	P2ASSERTLINE(847, newtrack);
	return newtrack;
}

/**
 * @note Address: 0x80332CEC
 * @note Size: 0x1F0
 */
void DirectedBgm::init()
{
	SeqBase::init();
	mRootTrack = newSeqTrackRoot();
	P2ASSERTLINE(855, mRootTrack);
	for (u8 i = 0; i < 16; i++) {
		mChildTracks[i] = newSeqTrackChild(i, *mRootTrack);
	}
	mIsInitialized = true;
}

/**
 * @note Address: 0x80332EDC
 * @note Size: 0x154
 */
void DirectedBgm::startSeq() { SeqBase::startSeq(); }

/**
 * @note Address: 0x80333030
 * @note Size: 0xF0
 */
void DirectedBgm::stopSeq(u32 type)
{
	if (*getHandleP()) {
		for (u8 i = 0; i < 16; i++) {
			mChildTracks[i]->onStopSeq();
		}
		mRootTrack->onStopSeq();
		if (mDirectorMgr) {
			mDirectorMgr->off(this);
		}
		SeqBase::stopSeq(type);
	}
}

/**
 * @note Address: 0x80333120
 * @note Size: 0x2C
 */
void DirectedBgm::onPlayingFrame()
{
	if (mDirectorMgr) {
		mDirectorMgr->exec();
	}
}

/**
 * @note Address: 0x8033314C
 * @note Size: 0x2C
 */
void SeqTrackRoot_JumpBgm::onBeatTop() { mJumpPort->onBeatTop(mBeatMgr); }

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
JumpBgmPort::JumpBgmPort(JumpBgmSeq* owner)
{
	OSInitMutex(&mMutex1);
	_18 = -1;
	OSInitMutex(&mMutex2);
	_34 = -1;
	OSInitMutex(&mMutex3);
	_50 = 0;
	OSInitMutex(&mMutex4);
	_64 = -1;

	mOwner          = owner;
	mAvoidJumpTimer = 0;
	_70             = 0;
}

/**
 * @note Address: 0x80333178
 * @note Size: 0xB8
 */
void JumpBgmPort::onBeatTop(BeatMgr& mgr)
{
	if ((mgr.mFlags & 1)) {
		u16 mode = _34;
		if (mode != 0xFFFF) {
			OSLockMutex(&mMutex4);
			_64 = mode;
			OSUnlockMutex(&mMutex4);
			OSLockMutex(&mMutex2);
			_34 = 0xFFFF;
			OSUnlockMutex(&mMutex2);
			return;
		}
	}

	u16 mode = _18;
	if (mode != 0xFFFF) {
		OSLockMutex(&mMutex4);
		_64 = mode;
		OSUnlockMutex(&mMutex4);
		OSLockMutex(&mMutex1);
		_18 = 0xFFFF;
		OSUnlockMutex(&mMutex1);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JumpBgmPort::requestQuickly(u16 state)
{
	if (mAvoidJumpTimer == 0) {
		OSLockMutex(&mMutex4);
		_64 = state;
		OSUnlockMutex(&mMutex4);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JumpBgmPort::requestOnBeat(u16 state)
{
	if (mAvoidJumpTimer == 0) {
		OSLockMutex(&mMutex2);
		_34 = state;
		OSUnlockMutex(&mMutex2);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void JumpBgmPort::requestEveryBeat(u16 state)
{
	if (mAvoidJumpTimer == 0) {
		OSLockMutex(&mMutex1);
		_18 = state;
		OSUnlockMutex(&mMutex1);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
u16 JumpBgmPort::output()
{
	u16 track = _64;
	if (track != 0xffff) {
		OSLockMutex(&mMutex4);
		_64 = -1;
		OSUnlockMutex(&mMutex4);

		OSLockMutex(&mMutex3);
		_50 = track;
		OSUnlockMutex(&mMutex3);

		P2ASSERTLINE(1173, mOwner);
		if (mOwner->mDirectorMgr) {
			mOwner->mDirectorMgr->off(mOwner);
		}
	}

	if (track != 0xffff) {
		_70 = track;
	}
	return track;
}

/**
 * @note Address: 0x80333230
 * @note Size: 0x190
 */
JumpBgmSeq::JumpBgmSeq(char const* bmsFileName, JAInter::SoundInfo const& info, PSSystem::DirectorMgrBase* directorMgr)
    : DirectedBgm(bmsFileName, info, directorMgr)
    , mJumpPort(this)
{
}

/**
 * @note Address: 0x803333C0
 * @note Size: 0x80
 */
SeqTrackRoot* JumpBgmSeq::newSeqTrackRoot()
{
	SeqTrackRoot* track = new SeqTrackRoot_JumpBgm(&mJumpPort);
	P2ASSERTLINE(1211, track);
	return track;
}

/**
 * @note Address: N/A
 * @note Size: 0x420
 */
// SeqTrackRoot::~SeqTrackRoot()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80333440
 * @note Size: 0x170
 */
void JumpBgmSeq::startSeq()
{
	DirectedBgm::startSeq();

	OSMutex* mutex = &mJumpPort.mMutex3;
	OSLockMutex(mutex);
	mJumpPort._50 = 0;
	OSUnlockMutex(mutex);
}

/**
 * @note Address: 0x803335B0
 * @note Size: 0x178
 */
void JumpBgmSeq::startSeq(u16 type)
{
	BgmSeq::startSeq();

	OSMutex* mutex = &mJumpPort.mMutex3;
	OSLockMutex(mutex);
	mJumpPort._50 = type;
	OSUnlockMutex(mutex);
}

/**
 * @note Address: 0x80333728
 * @note Size: 0x60
 */
void JumpBgmSeq::requestJumpBgmQuickly(u16 jump) { mJumpPort.requestQuickly(jump); }

/**
 * @note Address: 0x80333788
 * @note Size: 0x60
 */
void JumpBgmSeq::requestJumpBgmOnBeat(u16 jump) { mJumpPort.requestOnBeat(jump); }

/**
 * @note Address: 0x803337E8
 * @note Size: 0x54
 */
void JumpBgmSeq::requestJumpBgmEveryBeat(u16 jump) { mJumpPort.requestEveryBeat(jump); }

/**
 * @note Address: 0x8033383C
 * @note Size: 0x4C
 */
void JumpBgmSeq::onPlayingFrame()
{
	DirectedBgm::onPlayingFrame();
	if (mJumpPort.mAvoidJumpTimer) {
		mJumpPort.mAvoidJumpTimer--;
	}
}

/**
 * @note Address: 0x80333888
 * @note Size: 0xC8
 */
u16 JumpBgmSeq::outputJumpRequest() { return mJumpPort.output(); }

/**
 * @note Address: 0x80333950
 * @note Size: 0x40
 */
u16 JumpBgmSeq::getSeqStartPoint()
{
	int start = mJumpPort._50;
	onJump(start);
	return start;
}

/**
 * @note Address: 0x80333990
 * @note Size: 0x14
 */
void JumpBgmSeq::setAvoidJumpTimer_Checked(u32 time)
{
	if (!mJumpPort.mAvoidJumpTimer) {
		mJumpPort.mAvoidJumpTimer = time;
	}
}

/**
 * @note Address: 0x803339A4
 * @note Size: 0x60
 */
bool SeqMgr::isPlaying()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		if (link->getObject()->isPlaying()) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x80333A04
 * @note Size: 0xC8
 */
SeqMgr::~SeqMgr()
{
	OSDisableInterrupts();
	JSULink<SeqBase>* link = getFirst();
	while (link) {
		JSULink<SeqBase>* next = link->getNext();
		remove(link);
		delete link->getObject();
		link = next;
	}
	OSEnableInterrupts();
}

/**
 * @note Address: 0x80333ACC
 * @note Size: 0x5C
 */
void SeqMgr::pauseOnAllSeq(SeqBase::PauseMode mode)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->pauseOn(mode); }
}

/**
 * @note Address: 0x80333B28
 * @note Size: 0x4C
 */
void SeqMgr::pauseOffAllSeq()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->pauseOff(); }
}

/**
 * @note Address: 0x80333B74
 * @note Size: 0x24
 */
void SeqMgr::reservePauseOffAllSeq()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->mPauseOffRes.mState = 1; }
}

/**
 * @note Address: 0x80333B98
 * @note Size: 0x24
 */
void SeqMgr::cancelPauseOffAllSeq()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->mPauseOffRes.mState = 0; }
}

/**
 * @note Address: 0x80333BBC
 * @note Size: 0x80
 */
void SeqMgr::exec()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		link->getObject()->exec();
		if (*link->getObject()->getHandleP()) {
			link->getObject()->onPlayingFrame();
		}
	}
}

/**
 * @note Address: 0x80333C3C
 * @note Size: 0x5C
 */
void SeqMgr::stopAllSound(u32 state)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->stopSeq(state); }
}

/**
 * @note Address: 0x80333C98
 * @note Size: 0x5C
 */
void SeqMgr::scene1st(TaskChecker* task)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->scene1st(task); }
}

/**
 * @note Address: 0x80333CF4
 * @note Size: 0xE8
 */
SeqBase* SeqMgr::findSeq(JASTrack* track)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		if (link->getObject()->getSeqType() != 1 && link->getObject()->getHandleP()) {
			JAISequence* seq = static_cast<JAISequence*>(*link->getObject()->getHandleP());
			if (seq) {
				SeqSound* se   = (SeqSound*)(seq);
				JASTrack* temp = &se->mSeqParameter.mTrack;
				if (temp == track) {
					return link->getObject();
				}
				// needs to not unroll
				for (u8 i = 0; i < 16; i++) {
					if (temp->mChildList[i] == track) {
						return link->getObject();
					}
				}
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80333DDC
 * @note Size: 0x80
 */
SeqBase* SeqMgr::getPlayingSeq(JASTrack* track)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		if (link->getObject()->getSeqType() != 1) {

			JASTrack* temp = (JASTrack*)link->getObject()->mSeqSound;
			if (temp && temp == track) {
				return link->getObject();
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80333E5C
 * @note Size: 0x1C
 */
SeqBase* SeqMgr::getFirstSeq()
{
	JSULink<SeqBase>* link = getFirst();
	if (link) {
		return link->getObject();
	}
	return nullptr;
}

/**
 * @note Address: 0x80333E78
 * @note Size: 0x24
 */
SeqBase* SeqMgr::getFirstSeqA() { return getSeq(0); }

/**
 * @note Address: 0x80333E9C
 * @note Size: 0x34
 */
SeqBase* SeqMgr::getSeq(u32 id)
{
	JSULink<SeqBase>* link = (JSULink<SeqBase>*)getNthLink(id);
	return (!link) ? nullptr : link->getObject();
}

} // namespace PSSystem
