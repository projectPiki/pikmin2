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

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8JAIBasic
    __vt__8JAIBasic:
        .4byte 0
        .4byte 0
        .4byte makeSequence__8JAIBasicFv
        .4byte makeSe__8JAIBasicFv
        .4byte makeStream__8JAIBasicFv
        .4byte getMapInfoFxline__8JAIBasicFUl
        .4byte getMapInfoGround__8JAIBasicFUl
        .4byte getMapInfoFxParameter__8JAIBasicFUl
        .4byte setSeExtParameter__8JAIBasicFP8JAISound
        .4byte setRegisterTrackCallback__8JAIBasicFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global msStopStatus__8JAIBasic
    msStopStatus__8JAIBasic:
        .4byte 0x03000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global msBasic__8JAIBasic
    msBasic__8JAIBasic:
        .skip 0x4
    .global msCurrentHeap__8JAIBasic
    msCurrentHeap__8JAIBasic:
        .skip 0x4
    .global msStopMode__8JAIBasic
    msStopMode__8JAIBasic:
        .skip 0x4
    .global msAudioStopTime__8JAIBasic
    msAudioStopTime__8JAIBasic:
        .skip 0x4
    .global msDspLevel__8JAIBasic
    msDspLevel__8JAIBasic:
        .skip 0x4
    .global msAutoLevel__8JAIBasic
    msAutoLevel__8JAIBasic:
        .skip 0x4
    .global msAutoDif__8JAIBasic
    msAutoDif__8JAIBasic:
        .skip 0x4
    .global msDspDif__8JAIBasic
    msDspDif__8JAIBasic:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516F08
    lbl_80516F08:
        .4byte 0x25732573
        .4byte 0x25630000
    .global lbl_80516F10
    lbl_80516F10:
        .4byte 0x00000000
    .global lbl_80516F14
    lbl_80516F14:
        .4byte 0xC2480000
    .global lbl_80516F18
    lbl_80516F18:
        .float 1.0
    .global lbl_80516F1C
    lbl_80516F1C:
        .4byte 0x42FE0000
    .global lbl_80516F20
    lbl_80516F20:
        .4byte 0x43300000
        .4byte 0x00000000
*/

JAIBasic* JAIBasic::msBasic;
JKRHeap* JAIBasic::msCurrentHeap;
bool JAIBasic::msStopMode;
u32 JAIBasic::msAudioStopTime;
f32 JAIBasic::msDspLevel;
f32 JAIBasic::msAutoLevel;
f32 JAIBasic::msAutoDif;
f32 JAIBasic::msDspDif;

u8 JAIBasic::msStopStatus = 3;

/*
 * --INFO--
 * Address:	800AC158
 * Size:	00007C
 */
JAIBasic::JAIBasic()
{
	msBasic       = this;
	_0E._0        = false;
	_0E._1        = false;
	_0E._2        = false;
	_0E._3        = false;
	_0E._4        = false;
	_14           = 0;
	mCameras      = nullptr;
	_10           = 0;
	_0C           = 2;
	_1C           = 0;
	mHeap         = nullptr;
	_18           = 0;
	msCurrentHeap = JASDram;
}

/*
 * --INFO--
 * Address:	800AC1D4
 * Size:	000020
 */
void JAIBasic::initDriver(JKRSolidHeap* heap, u32 p2, u8 p3) { initAudioThread(heap, p2, p3); }

/*
 * --INFO--
 * Address:	800AC1F4
 * Size:	000020
 */
void JAIBasic::initInterface(u8) { initInterfaceMain(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAIBasic::bootDSP()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC214
 * Size:	0000C0
 */
void JAIBasic::initInterfaceMain()
{
	initHeap();
	initResourcePath();
	initArchive();
	if (initReadFile()) {
		if (!_0E._0 && JAInter::BankWave::firstLoadCallback != nullptr) {
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
		if (!_0E._0) {
			JAInter::SequenceMgr::checkEntriedSeq();
		}
	}
}

/*
 * --INFO--
 * Address:	800AC2D4
 * Size:	00005C
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

/*
 * --INFO--
 * Address:	800AC330
 * Size:	00004C
 */
JKRArchive* JAIBasic::initArchive()
{
	JKRArchive* archive = JAInter::SequenceMgr::getArchivePointer();
	if (archive == nullptr) {
		char archiveName[100];
		JAInter::SequenceMgr::getArchiveName(archiveName);
		JAInter::SequenceMgr::setArchivePointer(JKRArchive::mount(archiveName, JKRArchive::EMM_Dvd, msCurrentHeap, JKRArchive::EMD_Head));
		archive = JAInter::SequenceMgr::getArchivePointer();
	}
	return archive;
}

/*
 * --INFO--
 * Address:	800AC37C
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	800AC444
 * Size:	000034
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

/*
 * --INFO--
 * Address:	800AC478
 * Size:	000028
 */
void JAIBasic::setRegisterTrackCallback() { JASTrack::registerSeqCallback(setParameterSeqSync); }

/*
 * --INFO--
 * Address:	800AC4A0
 * Size:	000098
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

/*
 * --INFO--
 * Address:	800AC538
 * Size:	000158
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

/*
 * --INFO--
 * Address:	800AC690
 * Size:	000014
 */
// void JAInter::Camera::__defctor() { }

/*
 * --INFO--
 * Address:	800AC6A4
 * Size:	000008
 */
void JAIBasic::setInitFileLoadSwitch(u8 a1)
{
	// Generated from stb r4, 0xC(r3)
	_0C = a1;
}

/*
 * --INFO--
 * Address:	800AC6AC
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	800AC718
 * Size:	000064
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

/*
 * --INFO--
 * Address:	800AC77C
 * Size:	000064
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

/*
 * --INFO--
 * Address:	800AC7E0
 * Size:	000084
 * startSoundBasic__8JAIBasicFUlPP11JAISequencePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
 */
void JAIBasic::startSoundBasic(u32 id, JAISequence** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	if (_0E._1 != true && (JAInter::SeMgr::seHandle == nullptr || (JAInter::SeMgr::seHandle->mSoundID & 0x3FF) != (id & 0x3FF))) {
		if (handlePtr == nullptr) {
			handlePtr = &JAInter::SequenceMgr::FixSeqBufPointer[info->mCount];
		}
		JAInter::SequenceMgr::storeSeqBuffer(handlePtr, actor, id, p4, p5, info);
	}
}

/*
 * --INFO--
 * Address:	800AC864
 * Size:	000064
 * startSoundBasic__8JAIBasicFUlPP5JAISePQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
 */
void JAIBasic::startSoundBasic(u32 id, JAISe** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	if (JAInter::SeMgr::seEntryCancel[id >> 0xC] == 0) {
		JAInter::SeMgr::storeSeBuffer(handlePtr, actor, id, p4, p5, info);
	} else if (handlePtr != nullptr) {
		*handlePtr = nullptr;
	}
}

/*
 * --INFO--
 * Address:	800AC8C8
 * Size:	000058
 * startSoundBasic__8JAIBasicFUlPP9JAIStreamPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
 */
void JAIBasic::startSoundBasic(u32 id, JAIStream** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5, JAInter::SoundInfo* info)
{
	if (_0E._2 != true && JAInter::StreamMgr::flags._1 == 0) {
		JAInter::StreamMgr::storeStreamBuffer(handlePtr, actor, id, p4, p5, info);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAIBasic::getPlayingSoundHandle(JAISound**, u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC920
 * Size:	000088
 */
void JAIBasic::stopSoundHandle(JAISound* handle, u32 p2)
{
	if (handle == nullptr) {
		return;
	}
	switch (handle->mSoundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Sequence:
		JAInter::SequenceMgr::releaseSeqBuffer((JAISequence*)handle, p2);
		break;
	case JAISoundID_Type_Se:
		JAInter::SeMgr::releaseSeBuffer((JAISe*)handle, p2);
		break;
	case JAISoundID_Type_Stream:
		JAInter::StreamMgr::releaseStreamBuffer((JAIStream*)handle, p2);
		break;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JAIBasic::stopPlayingObjectSe(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAIBasic::stopPlayingIDObjectSe(u32, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAIBasic::stopPlayingCategorySe(u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAIBasic::stopPlayingCategoryObjectSe(u8, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAIBasic::stopAllSe(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC9A8
 * Size:	0000AC
 * stopAllSe__8JAIBasicFUc
 */
void JAIBasic::stopAllSe(u8 p1)
{
	JSULink<JAISound>* link = JAInter::SeMgr::seRegist[p1]._04->getFirst();
	while (link != nullptr) {
		JAISound* sound = link->getObject();
		link            = link->getNext();
		stopSoundHandle(sound, 0);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAIBasic::stopAllSe(u8, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JAIBasic::stopAllSeq(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAIBasic::stopActorSoundOneBuffer(void*, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAIBasic::stopIDSoundOneBuffer(u32, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JAIBasic::stopIDActorSoundOneBuffer(u32, void*, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void JAIBasic::stopAllSound(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JAIBasic::getPlayingSoundLinkHeadPointer(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void JAIBasic::stopAllSound(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000204
 */
void JAIBasic::stopAllSound(u32, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void JAIBasic::deleteObject(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIBasic::setPauseFlagAll(u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void JAIBasic::changeSoundScene(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACA54
 * Size:	000020
 * stop__9JAIStreamFUl
 */
void JAIStream::stop(u32 p1) { JAInter::StreamMgr::releaseStreamBuffer(this, p1); }

/*
 * --INFO--
 * Address:	800ACA74
 * Size:	000020
 * stop__11JAISequenceFUl
 */
void JAISequence::stop(u32 p1) { JAInter::SequenceMgr::releaseSeqBuffer(this, p1); }

/*
 * --INFO--
 * Address:	800ACA94
 * Size:	000010
 */
BOOL JAIBasic::getMapInfoFxline(u32 p1) { return p1 != 0; }

/*
 * --INFO--
 * Address:	800ACAA4
 * Size:	000010
 */
BOOL JAIBasic::getMapInfoGround(u32 p1) { return p1 != 0; }

/*
 * --INFO--
 * Address:	800ACAB4
 * Size:	000018
 */
f32 JAIBasic::getMapInfoFxParameter(u32 p1) { return (p1 == 0) ? 0.0f : 1.0f; }

/*
 * --INFO--
 * Address:	800ACACC
 * Size:	000050
 */
u16 JAIBasic::getSoundOffsetNumberFromID(u32 p1)
{
	// TODO: probably an inline here.
	return ((JAInter::SoundTable::getInfoFormat(p1) & 1) != 0) ? JAInter::SoundTable::getInfoPointer(p1)->mCount : p1 & 0x3FF;
	// u32 v1;
	// if ((JAInter::SoundTable::getInfoFormat(p1) & 1) != 0) {
	// 	JAInter::SoundInfo* info = JAInter::SoundTable::getInfoPointer(p1);
	// 	v1                       = (u32)info->count.v3[1];
	// } else {
	// 	v1 = p1 & 0x3FF;
	// }
	// return v1;
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

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JAIBasic::setSeCancelSwitch(u8, u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JAIBasic::setSeCategoryVolume(u8, u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACB1C
 * Size:	0001DC
 */
u16 JAIBasic::setParameterSeqSync(JASTrack* p1, u16 p2)
{
	u16 result = 0;
	switch (p2) {
	case 0: {
		for (u32 i = 0; i < JAIGlobalParameter::seqPlayTrackMax; i++) {
			if (JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence != nullptr) {
				JASTrack* seqTrack = &JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSeqParameter.mTrack;
				JASTrack* v1;
				if ((JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSoundID & 0x800) != 0) {
					v1 = p1->_2F8->_2F8;
				} else {
					v1 = p1->_2F8;
				}
				if (seqTrack == v1) {
					u32 v2 = JAInter::routeToTrack(p1->_348);
					JAInter::SoundInfo* info
					    = JAInter::SoundTable::getInfoPointer(JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSoundID);
					JAInter::SystemInterface::outerInit(JAInter::SequenceMgr::getPlayTrackInfo(i), v1, v2, info->mPitch >> 8, 0);
					JAInter::SequenceMgr::getPlayTrackInfo(i)->_04 |= 1 << v2;
					i = JAIGlobalParameter::seqPlayTrackMax;
				}
			}
		}
		break;
	}
	case 1: {
		JASOuterParam* param                     = p1->mExtBuffer;
		u8 index                                 = p1->_348;
		JAInter::SeMgr::TrackUpdate* trackUpdate = JAInter::SeMgr::seTrackUpdate;
		param->setParam(1, trackUpdate[index]._04);
		param->setParam(8, trackUpdate[index]._10);
		param->setParam(2, trackUpdate[index]._08);
		param->setParam(4, trackUpdate[index]._0C);
		param->setParam(16, (msBasic->mParamSoundOutputMode != 2) ? 0.0f : trackUpdate[index]._14);
		break;
	}
	case 0x7F:
		p1->writePortApp(0, JAInter::SeMgr::seScene);
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

/*
 * --INFO--
 * Address:	800ACCF8
 * Size:	000104
 */
void JAIBasic::setSeExtParameter(JAISound* handle)
{
	if (handle == nullptr) {
		return;
	}
	u8 format = JAInter::SoundTable::getInfoFormat(handle->mSoundID);
	if ((format & 4) != 0) {
		handle->setVolume(handle->mSoundInfo->mVolume.c / 127.0f, 0, 1);
	}
	if ((format & 8) != 0) {
		handle->setFxmix(handle->mSoundInfo->mVolume.c / 127.0f, 0, 1);
	}
	if ((format & 2) != 0) {
		handle->setPitch(handle->mSoundInfo->mPitch, 0, 1);
	}
}

/*
 * --INFO--
 * Address:	800ACDFC
 * Size:	000070
 */
JAISequence* JAIBasic::makeSequence()
{
	if (mHeap != nullptr) {
		return new (mHeap, 0) JAISequence();
	}
	return new (JASDram, 0) JAISequence();
}

/*
 * --INFO--
 * Address:	800ACE6C
 * Size:	000070
 * makeSe__8JAIBasicFv
 */
JAISe* JAIBasic::makeSe()
{
	if (mHeap != nullptr) {
		return new (mHeap, 0) JAISe();
	}
	return new (JASDram, 0) JAISe();
}

/*
 * --INFO--
 * Address:	800ACEDC
 * Size:	000070
 */
JAIStream* JAIBasic::makeStream()
{
	if (mHeap != nullptr) {
		return new (mHeap, 0) JAIStream();
	}
	return new (JASDram, 0) JAIStream();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIBasic::allocStreamBuffer(void*, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIBasic::deallocStreamBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACF4C
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	800AD028
 * Size:	000034
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

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JAIBasic::resumeAudio()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD05C
 * Size:	000168
 */
long JAIBasic::stopCallBack(void*)
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
				if (JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence != nullptr) {
					JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->stop(0);
				}
			}
			if (JAInter::StreamMgr::streamUpdate->_1C != nullptr) {
				JAInter::StreamMgr::streamUpdate->_1C->stop(0);
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
