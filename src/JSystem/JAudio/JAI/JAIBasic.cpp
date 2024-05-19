#include "Dolphin/ar.h"
#include "Dolphin/mtx.h"
#include "string.h"
#include "Dolphin/stl.h"
#include "Dolphin/vec.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIConst.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAISe.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JAudio/JAI/JAIStream.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"
#include "JSystem/JAudio/JAI/JAInter/Fx.h"
#include "JSystem/JAudio/JAI/JAInter/HeapMgr.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAudio/JAS/JASAudioThread.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

JAIBasic* JAIBasic::msBasic;
JKRHeap* JAIBasic::msCurrentHeap;
bool JAIBasic::msStopMode;
u32 JAIBasic::msAudioStopTime;
f32 JAIBasic::msDspLevel;
f32 JAIBasic::msAutoLevel;
f32 JAIBasic::msAutoDif;
f32 JAIBasic::msDspDif;

u8 JAIBasic::msStopStatus = 3;

/**
 * @note Address: 0x800AC158
 * @note Size: 0x7C
 */
JAIBasic::JAIBasic()
{
	msBasic       = this;
	mFlags._00    = false;
	mFlags._01    = false;
	mFlags._02    = false;
	mFlags._03    = false;
	mFlags._04    = false;
	_14           = 0;
	mCameras      = nullptr;
	_10           = 0;
	_0C           = 2;
	_1C           = nullptr;
	mHeap         = nullptr;
	_18           = 0;
	msCurrentHeap = JASDram;
}

/**
 * @note Address: 0x800AC1D4
 * @note Size: 0x20
 */
void JAIBasic::initDriver(JKRSolidHeap* heap, u32 p2, u8 p3) { initAudioThread(heap, p2, p3); }

/**
 * @note Address: 0x800AC1F4
 * @note Size: 0x20
 */
void JAIBasic::initInterface(u8) { initInterfaceMain(); }

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void JAIBasic::bootDSP()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AC214
 * @note Size: 0xC0
 */
void JAIBasic::initInterfaceMain()
{
	initHeap();
	initResourcePath();
	initArchive();
	if (initReadFile()) {
		if (!mFlags._00 && JAInter::BankWave::firstLoadCallback) {
			JAInter::BankWave::firstLoadCallback();
		}
		JAInter::DummyObjectMgr::init();
		JAInter::Fx::init();
		JAInter::SequenceMgr::init();
		JAInter::SeMgr::init();
		JAInter::StreamMgr::init();
		JAInter::HeapMgr::init(JAIGlobalParameter::stayHeapMax, JAIGlobalParameter::stayHeapSize, JAIGlobalParameter::autoHeapMax,
		                       JAIGlobalParameter::autoHeapRoomSize);
		initCamera();
		JAInter::SeMgr::seStartCallback();
		if (!mFlags._00) {
			JAInter::SequenceMgr::checkEntriedSeq();
		}
	}
}

/**
 * @note Address: 0x800AC2D4
 * @note Size: 0x5C
 */
void JAIBasic::initHeap()
{
	if (JAIGlobalParameter::interfaceHeapSize != 0) {
		mHeap         = JKRSolidHeap::create(JAIGlobalParameter::interfaceHeapSize, JASDram, false);
		msCurrentHeap = mHeap;
	} else {
		msCurrentHeap = JASDram;
	}
}

/**
 * @note Address: 0x800AC330
 * @note Size: 0x4C
 */
JKRArchive* JAIBasic::initArchive()
{
	JKRArchive* archive = JAInter::SequenceMgr::getArchivePointer();
	if (archive == nullptr) {
		char archiveName[100];
		JAInter::SequenceMgr::getArchiveName(archiveName);
		JAInter::SequenceMgr::setArchivePointer(
		    JKRMountArchive(archiveName, JKRArchive::EMM_Dvd, getCurrentJAIHeap(), JKRArchive::EMD_Head));
		archive = JAInter::SequenceMgr::getArchivePointer();
	}
	return archive;
}

/**
 * @note Address: 0x800AC37C
 * @note Size: 0xC8
 */
void JAIBasic::initResourcePath()
{
	if (JAIGlobalParameter::audioResPath == nullptr) {
		return;
	}
	char* buffer = (char*)JASDram->alloc(strlen(JAIGlobalParameter::audioResPath) + strlen(JAIGlobalParameter::wavePath) + 1, 0);
	sprintf(buffer, "%s%s%c", JAIGlobalParameter::audioResPath, JAIGlobalParameter::wavePath, 0);
	JAIGlobalParameter::wavePath = buffer;

	buffer = (char*)JASDram->alloc(strlen(JAIGlobalParameter::audioResPath) + strlen(JAIGlobalParameter::streamPath) + 1, 0);
	sprintf(buffer, "%s%s%c", JAIGlobalParameter::audioResPath, JAIGlobalParameter::streamPath, 0);
	JAIGlobalParameter::streamPath = buffer;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, audioResPath__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AC430
	lwz      r3, wavePath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r31, r3
	lwz      r3, audioResPath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r4, r3
	addi     r0, r31, 1
	lwz      r3, JASDram@sda21(r13)
	add      r4, r4, r0
	li       r5, 0
	bl       alloc__7JKRHeapFUli
	lwz      r5, audioResPath__18JAIGlobalParameter@sda21(r13)
	mr       r31, r3
	lwz      r6, wavePath__18JAIGlobalParameter@sda21(r13)
	addi     r4, r2, lbl_80516F08@sda21
	li       r7, 0
	crclr    6
	bl       sprintf
	stw      r31, wavePath__18JAIGlobalParameter@sda21(r13)
	lwz      r3, streamPath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r31, r3
	lwz      r3, audioResPath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r4, r3
	addi     r0, r31, 1
	lwz      r3, JASDram@sda21(r13)
	add      r4, r4, r0
	li       r5, 0
	bl       alloc__7JKRHeapFUli
	lwz      r5, audioResPath__18JAIGlobalParameter@sda21(r13)
	mr       r31, r3
	lwz      r6, streamPath__18JAIGlobalParameter@sda21(r13)
	addi     r4, r2, lbl_80516F08@sda21
	li       r7, 0
	crclr    6
	bl       sprintf
	stw      r31, streamPath__18JAIGlobalParameter@sda21(r13)

lbl_800AC430:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800AC444
 * @note Size: 0x34
 */
void JAIBasic::setCameraInfo(Vec* p1, Vec* p2, f32 (*p3)[4], u32 index)
{
	if (JAIGlobalParameter::audioCameraMax <= index) {
		return;
	}
	mCameras[index].mVec1 = p1;
	mCameras[index].mVec2 = p2;
	mCameras[index].mMtx  = (Mtx*)p3;
}

/**
 * @note Address: 0x800AC478
 * @note Size: 0x28
 */
void JAIBasic::setRegisterTrackCallback() { JASTrack::registerSeqCallback(setParameterSeqSync); }

/**
 * @note Address: 0x800AC4A0
 * @note Size: 0x98
 */
void JAIBasic::initAudioThread(JKRSolidHeap* rootHeap, u32 p2, u8 p3)
{
	JASKernel::setupRootHeap(rootHeap, 0x2000);
	JASKernel::setupAramHeap(ARGetBaseAddress(), p2);
	JASTrack::newMemPool(JAIGlobalParameter::systemTrackMax);
	JASDvd::createThread(JAIGlobalParameter::audioDvdThreadPriority, 0x80, 0x1000);
	JASAudioThread::create(JAIGlobalParameter::audioSystemThreadPriority);
	setRegisterTrackCallback();
	JASDriver::setMixerLevel(JAIGlobalParameter::inputGainDown, JAIGlobalParameter::outputGainUp);
	msStopStatus = 0;
}

/**
 * @note Address: 0x800AC538
 * @note Size: 0x158
 */
void JAIBasic::initCamera()
{
	mCameras = new (msCurrentHeap, 0x20) JAInter::Camera[JAIGlobalParameter::audioCameraMax];
	if (mCameras[0].mVec1 == nullptr) {
		JAInter::Const::nullCamera.mVec1->x = 0.0f;
		JAInter::Const::nullCamera.mVec1->y = 0.0f;
		JAInter::Const::nullCamera.mVec1->z = -50.0f;
		JAInter::Const::nullCamera.mVec2->x = 0.0f;
		JAInter::Const::nullCamera.mVec2->y = 0.0f;
		JAInter::Const::nullCamera.mVec2->z = -50.0f;
		Vec v1                              = { 0.0f, 1.0f, 0.0f };
		Vec v2                              = JAInter::Const::dummyZeroVec;
		// Vec v2 = { JAInter::Const::dummyZeroVec.x, JAInter::Const::dummyZeroVec.y, JAInter::Const::dummyZeroVec.z };
		C_MTXLookAt(JAInter::Const::camMtx, JAInter::Const::nullCamera.mVec1, &v1, &v2);
		for (u32 i = 0; i < JAIGlobalParameter::audioCameraMax; i++) {
			if (i < JAIGlobalParameter::audioCameraMax) {
				mCameras[i].mVec1 = JAInter::Const::nullCamera.mVec1;
				mCameras[i].mVec2 = JAInter::Const::nullCamera.mVec2;
				mCameras[i].mMtx  = &JAInter::Const::camMtx;
			}
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r5, 0x20
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r31, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	mulli    r3, r31, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __defctor__Q27JAInter6CameraFv@ha
	mr       r7, r31
	addi     r4, r4, __defctor__Q27JAInter6CameraFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 4(r30)
	lwz      r3, 4(r30)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800AC678
	lis      r3, nullCamera__Q27JAInter5Const@ha
	lfs      f4, lbl_80516F10@sda21(r2)
	addi     r31, r3, nullCamera__Q27JAInter5Const@l
	lfs      f0, lbl_80516F14@sda21(r2)
	lwz      r5, 0(r31)
	lis      r3, camMtx__Q27JAInter5Const@ha
	lis      r4, dummyZeroVec__Q27JAInter5Const@ha
	lfs      f3, lbl_80516F18@sda21(r2)
	stfs     f4, 0(r5)
	addi     r3, r3, camMtx__Q27JAInter5Const@l
	addi     r5, r1, 0x14
	addi     r6, r1, 8
	lwz      r7, 0(r31)
	stfs     f4, 4(r7)
	lwz      r7, 0(r31)
	stfs     f0, 8(r7)
	lwz      r7, 4(r31)
	stfs     f4, 0(r7)
	lwz      r7, 4(r31)
	stfs     f4, 4(r7)
	lwz      r7, 4(r31)
	stfs     f0, 8(r7)
	lfsu     f2, dummyZeroVec__Q27JAInter5Const@l(r4)
	stfs     f4, 0x14(r1)
	lfs      f1, 4(r4)
	lfs      f0, 8(r4)
	lwz      r4, 0(r31)
	stfs     f3, 0x18(r1)
	stfs     f4, 0x1c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       C_MTXLookAt
	lis      r4, nullCamera__Q27JAInter5Const@ha
	lis      r3, camMtx__Q27JAInter5Const@ha
	addi     r6, r4, nullCamera__Q27JAInter5Const@l
	li       r10, 0
	addi     r4, r3, camMtx__Q27JAInter5Const@l
	li       r9, 0
	b        lbl_800AC66C

lbl_800AC634:
	cmplw    r0, r10
	lwz      r8, 4(r31)
	lwz      r7, 0(r6)
	ble      lbl_800AC664
	lwz      r5, 4(r30)
	addi     r3, r9, 4
	addi     r0, r9, 8
	stwx     r7, r5, r9
	lwz      r5, 4(r30)
	stwx     r8, r5, r3
	lwz      r3, 4(r30)
	stwx     r4, r3, r0

lbl_800AC664:
	addi     r9, r9, 0xc
	addi     r10, r10, 1

lbl_800AC66C:
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplw    r10, r0
	blt      lbl_800AC634

lbl_800AC678:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x800AC690
 * @note Size: 0x14
 */
// void JAInter::Camera::__defctor() { }

/**
 * @note Address: 0x800AC6A4
 * @note Size: 0x8
 */
void JAIBasic::setInitFileLoadSwitch(u8 a1)
{
	// Generated from stb r4, 0xC(r3)
	_0C = a1;
}

/**
 * @note Address: 0x800AC6AC
 * @note Size: 0x6C
 */
BOOL JAIBasic::initReadFile()
{
	switch (_0C) {
	case 0:
	case 1:
		break;
	case 2:
		if (!JAInter::InitData::checkInitDataFile()) {
			return false;
		}
	case 3:
		break;
	case 4:
		if (JAInter::InitData::aafPointer != nullptr) {
			JAInter::InitData::checkInitDataOnMemory();
		}
	}
	return true;
}

/**
 * @note Address: 0x800AC718
 * @note Size: 0x64
 */
void JAIBasic::processFrameWork()
{
	if (msStopStatus < 2) {
		JAInter::DummyObjectMgr::check();
		if (JAInter::BankWave::secondLoadCallback != nullptr) {
			JAInter::BankWave::secondLoadCallback();
		}
		JAInter::SeMgr::processGFrameSe();
		JAInter::SequenceMgr::processGFrameSequence();
		JAInter::StreamMgr::processGFrameStream();
	}
	_10++;
}

/**
 * @note Address: 0x800AC77C
 * @note Size: 0x64
 * startSoundBasic__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
 */
void JAIBasic::startSoundBasic(u32 id, JAISound** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	switch (id & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence:
		startSoundBasic(id, (JAISequence**)handlePtr, actor, p4, p5, info);
		break;
	case JAISoundID_Type_Se:
		startSoundBasic(id, (JAISe**)handlePtr, actor, p4, p5, info);
		break;
	case JAISoundID_Type_Stream:
		startSoundBasic(id, (JAIStream**)handlePtr, actor, p4, p5, info);
		break;
	}
}

/**
 * @note Address: 0x800AC7E0
 * @note Size: 0x84
 * startSoundBasic__8JAIBasicFUlPP11JAISequencePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
 */
void JAIBasic::startSoundBasic(u32 id, JAISequence** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	if (mFlags._01 != true && (!JAInter::SeMgr::seHandle || (JAInter::SeMgr::seHandle->mSoundID & 0x3FF) != (id & 0x3FF))) {
		if (!handlePtr) {
			handlePtr = &JAInter::SequenceMgr::FixSeqBufPointer[info->_05];
		}
		JAInter::SequenceMgr::storeSeqBuffer(handlePtr, actor, id, p4, p5, info);
	}
}

/**
 * @note Address: 0x800AC864
 * @note Size: 0x64
 * startSoundBasic__8JAIBasicFUlPP5JAISePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
 */
void JAIBasic::startSoundBasic(u32 id, JAISe** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	if (JAInter::SeMgr::seEntryCancel[id >> 0xC] == 0) {
		JAInter::SeMgr::storeSeBuffer(handlePtr, actor, id, p4, p5, info);
	} else if (handlePtr) {
		*handlePtr = nullptr;
	}
}

/**
 * @note Address: 0x800AC8C8
 * @note Size: 0x58
 * startSoundBasic__8JAIBasicFUlPP9JAIStreamPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
 */
void JAIBasic::startSoundBasic(u32 id, JAIStream** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	if (mFlags._02 != true && JAInter::StreamMgr::flags._01 == 0) {
		JAInter::StreamMgr::storeStreamBuffer(handlePtr, actor, id, p4, p5, info);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void JAIBasic::getPlayingSoundHandle(JAISound**, u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AC920
 * @note Size: 0x88
 */
void JAIBasic::stopSoundHandle(JAISound* handle, u32 fadeTime)
{
	if (handle == nullptr) {
		return;
	}
	switch (handle->mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence:
		JAInter::SequenceMgr::releaseSeqBuffer((JAISequence*)handle, fadeTime);
		break;
	case JAISoundID_Type_Se:
		JAInter::SeMgr::releaseSeBuffer((JAISe*)handle, fadeTime);
		break;
	case JAISoundID_Type_Stream:
		JAInter::StreamMgr::releaseStreamBuffer((JAIStream*)handle, fadeTime);
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void JAIBasic::stopPlayingObjectSe(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void JAIBasic::stopPlayingIDObjectSe(u32, void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void JAIBasic::stopPlayingCategorySe(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JAIBasic::stopPlayingCategoryObjectSe(u8, void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void JAIBasic::stopAllSe(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AC9A8
 * @note Size: 0xAC
 * stopAllSe__8JAIBasicFUc
 */
void JAIBasic::stopAllSe(u8 p1)
{
	JSULink<JAISound>* link = JAInter::SeMgr::seRegist[p1].mUsedList->getFirst();
	while (link) {
		JAISound* sound = link->getObject();
		link            = link->getNext();
		stopSoundHandle(sound, 0);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void JAIBasic::stopAllSe(u8, void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JAIBasic::stopAllSeq(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void JAIBasic::stopActorSoundOneBuffer(void*, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void JAIBasic::stopIDSoundOneBuffer(u32, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void JAIBasic::stopIDActorSoundOneBuffer(u32, void*, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
void JAIBasic::stopAllSound(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void JAIBasic::getPlayingSoundLinkHeadPointer(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1D0
 */
void JAIBasic::stopAllSound(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x204
 */
void JAIBasic::stopAllSound(u32, void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
void JAIBasic::deleteObject(void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void JAIBasic::setPauseFlagAll(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1B0
 */
void JAIBasic::changeSoundScene(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ACA94
 * @note Size: 0x10
 */
u16 JAIBasic::getMapInfoFxline(u32 p1) { return p1 != 0; }

/**
 * @note Address: 0x800ACAA4
 * @note Size: 0x10
 */
BOOL JAIBasic::getMapInfoGround(u32 p1) { return p1 != 0; }

/**
 * @note Address: 0x800ACAB4
 * @note Size: 0x18
 */
f32 JAIBasic::getMapInfoFxParameter(u32 p1) { return (p1 == 0) ? 0.0f : 1.0f; }

/**
 * @note Address: 0x800ACACC
 * @note Size: 0x50
 */
u16 JAIBasic::getSoundOffsetNumberFromID(u32 id)
{
	// TODO: probably an inline here.
	if (JAInter::SoundTable::getInfoFormat(id) & 1) {
		return JAInter::SoundTable::getInfoPointer(id)->mOffsetNo;
	}

	return (id & 0x3FF);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       getInfoFormat__Q27JAInter10SoundTableFUl
	clrlwi.  r0, r3, 0x1f
	beq      lbl_800ACB00
	mr       r3, r31
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lhz      r3, 6(r3)
	b        lbl_800ACB08

lbl_800ACB00:
	clrlwi   r0, r31, 0x16
	mr       r3, r0

lbl_800ACB08:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JAIBasic::setSeCancelSwitch(u8, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void JAIBasic::setSeCategoryVolume(u8, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ACB1C
 * @note Size: 0x1DC
 */
u16 JAIBasic::setParameterSeqSync(JASTrack* track, u16 p2)
{
	u16 result = 0;
	switch (p2) {
	case 0: {
		for (u32 i = 0; i < JAIGlobalParameter::seqPlayTrackMax; i++) {
			if (JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence != nullptr) {
				JASTrack* seqTrack = JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSeqParameter.getTrack();
				JASTrack* parentTrack;
				if (!IsJAISoundIDInUse(JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSoundID)) {
					parentTrack = track->mParentTrack->mParentTrack;
				} else {
					parentTrack = track->mParentTrack;
				}
				if (seqTrack == parentTrack) {
					u32 trackNum = JAInter::routeToTrack(track->_348);
					JAInter::SystemInterface::outerInit(
					    JAInter::SequenceMgr::getPlayTrackInfo(i), parentTrack, trackNum,
					    (JAInter::SoundTable::getInfoPointer(JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSoundID)->mFlag >> 8),
					    p2 & 1);
					JAInter::SequenceMgr::getPlayTrackInfo(i)->_04 |= 1 << trackNum;
					i      = JAIGlobalParameter::seqPlayTrackMax;
					result = 0;
				}
			}
		}
		break;
	}
	case 1: {
		JASOuterParam* param                     = track->mExtBuffer;
		u8 index                                 = track->_348;
		JAInter::SeMgr::TrackUpdate* trackUpdate = JAInter::SeMgr::seTrackUpdate;
		param->setParam(OUTERPARAM_Volume, trackUpdate[index].mPlayingVolume);
		param->setParam(OUTERPARAM_Pan, trackUpdate[index].mPlayingPan);
		param->setParam(OUTERPARAM_Pitch, trackUpdate[index].mPlayingPitch);
		param->setParam(OUTERPARAM_Fxmix, trackUpdate[index].mPlayingFxmix);
		param->setParam(OUTERPARAM_Dolby, (msBasic->mParamSoundOutputMode != JASOUTPUT_Surround) ? 0.0f : trackUpdate[index].mPlayingDolby);
		break;
	}
	case 0x7F:
		track->writePortApp(0, JAInter::SeMgr::seScene);
		break;
	}
	return result;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi   r0, r4, 0x10
	cmpwi    r0, 1
	stmw     r26, 8(r1)
	mr       r29, r3
	li       r30, 0
	beq      lbl_800ACC40
	bge      lbl_800ACB50
	cmpwi    r0, 0
	bge      lbl_800ACB5C
	b        lbl_800ACCE0

lbl_800ACB50:
	cmpwi    r0, 0x7f
	beq      lbl_800ACCD4
	b        lbl_800ACCE0

lbl_800ACB5C:
	clrlwi   r31, r0, 0x1f
	li       r26, 0
	b        lbl_800ACC30

lbl_800ACB68:
	mr       r3, r26
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_800ACC2C
	mr       r3, r26
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, 0x48(r3)
	mr       r3, r26
	addi     r28, r4, 0x30c
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r3, 0x48(r3)
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800ACBB0
	lwz      r3, 0x2f8(r29)
	lwz      r27, 0x2f8(r3)
	b        lbl_800ACBB4

lbl_800ACBB0:
	lwz      r27, 0x2f8(r29)

lbl_800ACBB4:
	cmplw    r28, r27
	bne      lbl_800ACC2C
	lwz      r3, 0x348(r29)
	bl       routeToTrack__7JAInterFUl
	mr       r0, r3
	mr       r3, r26
	mr       r28, r0
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r3, 0x48(r3)
	lwz      r3, 0x20(r3)
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lwz      r0, 0(r3)
	mr       r3, r26
	rlwinm   r0, r0, 0x18, 0x10, 0x1f
	mr       r30, r0
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	mr       r4, r27
	mr       r5, r28
	mr       r6, r30
	mr       r7, r31
	bl
outerInit__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataP8JASTrackUlUsUc
	mr       r3, r26
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	li       r0, 1
	lwz      r4, 4(r3)
	slw      r0, r0, r28
	li       r30, 0
	or       r0, r4, r0
	stw      r0, 4(r3)
	lwz      r26, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)

lbl_800ACC2C:
	addi     r26, r26, 1

lbl_800ACC30:
	lwz      r0, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
	cmplw    r26, r0
	blt      lbl_800ACB68
	b        lbl_800ACCE0

lbl_800ACC40:
	lwz      r0, 0x348(r29)
	li       r4, 1
	lwz      r28, 0x33c(r29)
	clrlwi   r0, r0, 0x18
	lwz      r29, seTrackUpdate__Q27JAInter5SeMgr@sda21(r13)
	mulli    r31, r0, 0x18
	mr       r3, r28
	add      r5, r29, r31
	lfs      f1, 4(r5)
	bl       setParam__13JASOuterParamFUcf
	add      r4, r29, r31
	mr       r3, r28
	lfs      f1, 0x10(r4)
	li       r4, 8
	bl       setParam__13JASOuterParamFUcf
	add      r4, r29, r31
	mr       r3, r28
	lfs      f1, 8(r4)
	li       r4, 2
	bl       setParam__13JASOuterParamFUcf
	add      r4, r29, r31
	mr       r3, r28
	lfs      f1, 0xc(r4)
	li       r4, 4
	bl       setParam__13JASOuterParamFUcf
	lwz      r5, msBasic__8JAIBasic@sda21(r13)
	mr       r3, r28
	li       r4, 0x10
	lbz      r0, 0xd(r5)
	cmplwi   r0, 2
	beq      lbl_800ACCC4
	lfs      f1, lbl_80516F10@sda21(r2)
	b        lbl_800ACCCC

lbl_800ACCC4:
	add      r5, r29, r31
	lfs      f1, 0x14(r5)

lbl_800ACCCC:
	bl       setParam__13JASOuterParamFUcf
	b        lbl_800ACCE0

lbl_800ACCD4:
	lbz      r5, seScene__Q27JAInter5SeMgr@sda21(r13)
	li       r4, 0
	bl       writePortApp__8JASTrackFUlUs

lbl_800ACCE0:
	mr       r3, r30
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800ACCF8
 * @note Size: 0x104
 */
void JAIBasic::setSeExtParameter(JAISound* handle)
{
	if (handle == nullptr) {
		return;
	}
	u8 format = JAInter::SoundTable::getInfoFormat(handle->mSoundID);
	if ((format & 4) != 0) {
		handle->setVolume(handle->mSoundInfo->mVolume.byteView[0] / 127.0f, 0, SOUNDPARAM_Dopplar);
	}
	if ((format & 8) != 0) {
		handle->setFxmix(handle->mSoundInfo->mVolume.byteView[1] / 127.0f, 0, SOUNDPARAM_Dopplar);
	}
	if ((format & 2) != 0) {
		handle->setPitch(handle->mSoundInfo->mPitch, 0, SOUNDPARAM_Dopplar);
	}
}

/**
 * @note Address: 0x800ACDFC
 * @note Size: 0x70
 */
JAISequence* JAIBasic::makeSequence()
{
	if (mHeap != nullptr) {
		return new (mHeap, 0) JAISequence();
	}
	return new (JASDram, 0) JAISequence();
}

/**
 * @note Address: 0x800ACE6C
 * @note Size: 0x70
 * makeSe__8JAIBasicFv
 */
JAISe* JAIBasic::makeSe()
{
	if (mHeap != nullptr) {
		return new (mHeap, 0) JAISe();
	}
	return new (JASDram, 0) JAISe();
}

/**
 * @note Address: 0x800ACEDC
 * @note Size: 0x70
 */
JAIStream* JAIBasic::makeStream()
{
	if (mHeap != nullptr) {
		return new (mHeap, 0) JAIStream();
	}
	return new (JASDram, 0) JAIStream();
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIBasic::allocStreamBuffer(void*, s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAIBasic::deallocStreamBuffer()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800ACF4C
 * @note Size: 0xDC
 */
void JAIBasic::stopAudio(u32 p1, bool p2)
{
	if (msStopStatus != 0) {
		return;
	}
	if (p1 < 5) {
		p1 = 5;
	}
	msAudioStopTime = msBasic->_10 + p1;
	msStopMode      = p2;
	msStopStatus    = 1;
	msDspLevel      = JASDriver::getDSPLevel_f32();
	msAutoLevel     = JASDriver::getAutoLevel_f32();
	msDspDif        = msDspLevel / ((p1 - 8) * JASDriver::getSubFrames());
	msAutoDif       = msAutoLevel / ((p1 - 8) * JASDriver::getSubFrames());
	JASDriver::registerDspSyncCallback(&stopCallBack, nullptr);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800AD014
	cmplwi   r31, 5
	bge      lbl_800ACF78
	li       r31, 5

lbl_800ACF78:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	li       r0, 1
	lwz      r3, 0x10(r3)
	add      r3, r3, r31
	stb      r4, msStopMode__8JAIBasic@sda21(r13)
	stw      r3, msAudioStopTime__8JAIBasic@sda21(r13)
	stb      r0, msStopStatus__8JAIBasic@sda21(r13)
	bl       getDSPLevel_f32__9JASDriverFv
	stfs     f1, msDspLevel__8JAIBasic@sda21(r13)
	bl       getAutoLevel_f32__9JASDriverFv
	stfs     f1, msAutoLevel__8JAIBasic@sda21(r13)
	bl       getSubFrames__9JASDriverFv
	addi     r4, r31, -8
	lis      r0, 0x4330
	mullw    r3, r4, r3
	stw      r0, 8(r1)
	lfd      f2, lbl_80516F20@sda21(r2)
	lfs      f0, msDspLevel__8JAIBasic@sda21(r13)
	stw      r3, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f0, f1
	stfs     f0, msDspDif__8JAIBasic@sda21(r13)
	bl       getSubFrames__9JASDriverFv
	addi     r4, r31, -8
	lis      r0, 0x4330
	mullw    r5, r4, r3
	lis      r3, stopCallBack__8JAIBasicFPv@ha
	stw      r0, 0x10(r1)
	li       r4, 0
	lfd      f2, lbl_80516F20@sda21(r2)
	addi     r3, r3, stopCallBack__8JAIBasicFPv@l
	stw      r5, 0x14(r1)
	lfs      f0, msAutoLevel__8JAIBasic@sda21(r13)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f0, f1
	stfs     f0, msAutoDif__8JAIBasic@sda21(r13)
	bl       registerDspSyncCallback__9JASDriverFPFPv_lPv

lbl_800AD014:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800AD028
 * @note Size: 0x34
 */
u8 JAIBasic::checkAudioStopStatus()
{
	switch (msStopStatus) {
	case 1:
	case 2:
		return 1;
	case 3:
		return 2;
	default:
		return 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void JAIBasic::resumeAudio()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AD05C
 * @note Size: 0x168
 */
s32 JAIBasic::stopCallBack(void*)
{
	if (msAudioStopTime == msBasic->_10) {
		msStopStatus = 3;
		if (msStopMode != false) {
			JASAudioThread::stop();
		}
		return -1;
	}
	if (msAudioStopTime - 4 == msBasic->_10) {
		if (msStopStatus == 1) {
			for (u32 i = 0; i < 0x40; i++) {
				JASDSPChannel* channel = JASDSPChannel::getHandle(i);
				if ((channel->_00 & 0xFF) == 0) {
					channel->drop();
				}
			}
			JAInter::Fx::clearAllBuffer();
			for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
				if (JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence) {
					JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->stop(0);
				}
			}
			if (JAInter::StreamMgr::streamUpdate->mStream) {
				JAInter::StreamMgr::streamUpdate->mStream->stop(0);
			}
			msStopStatus = 2;
		}
	} else if (msStopStatus == 1) {
		f32 level = JASDriver::getDSPLevel_f32() - msDspDif;
		JASDriver::setDSPLevel(level < 0.0f ? 0.0f : level);
		level = JASDriver::getAutoLevel_f32() - msAutoDif;
		JASDriver::setAutoLevel(level < 0.0f ? 0.0f : level);
	}
	return 0;
}
