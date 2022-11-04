#include "Dolphin/ar.h"
#include "Dolphin/stl.h"
#include "Dolphin/string.h"
#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAI/JAISe.h"
#include "JSystem/JAI/JAISequence.h"
#include "JSystem/JAI/JAIStream.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAInter/BankWave.h"
#include "JSystem/JAI/JAInter/Fx.h"
#include "JSystem/JAI/JAInter/HeapMgr.h"
#include "JSystem/JAI/JAInter/InitData.h"
#include "JSystem/JAI/JAInter/SeMgr.h"
#include "JSystem/JAI/JAInter/StreamMgr.h"
#include "JSystem/JAS/JASDriver.h"
#include "JSystem/JAS/JASDvd.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASKernel.h"
#include "JSystem/JAS/JASThread.h"
#include "JSystem/JAS/JASTrack.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRHeap.h"
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
	m_cameras     = nullptr;
	_10           = 0;
	_0C           = 2;
	_1C           = 0;
	m_heap        = nullptr;
	_18           = 0;
	msCurrentHeap = JASDram;
}

/*
 * --INFO--
 * Address:	800AC1D4
 * Size:	000020
 */
void JAIBasic::initDriver(JKRSolidHeap* heap, unsigned long p2, unsigned char p3) { initAudioThread(heap, p2, p3); }

/*
 * --INFO--
 * Address:	800AC1F4
 * Size:	000020
 */
void JAIBasic::initInterface(unsigned char) { initInterfaceMain(); }

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
		m_heap        = JKRSolidHeap::create(JAIGlobalParameter::interfaceHeapSize, JASDram, false);
		msCurrentHeap = m_heap;
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
		JAInter::SequenceMgr::setArchivePointer(JKRArchive::mount(archiveName, JKRArchive::EMM_Dvd, msCurrentHeap, JKRArchive::EMD_Unk1));
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
void JAIBasic::setCameraInfo(Vec* p1, Vec* p2, float (*p3)[4], unsigned long index)
{
	if (JAIGlobalParameter::audioCameraMax <= index) {
		return;
	}
	m_cameras[index].m_vec1 = p1;
	m_cameras[index].m_vec2 = p2;
	m_cameras[index].m_mtx  = (Mtx*)p3;
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
void JAIBasic::initAudioThread(JKRSolidHeap* rootHeap, unsigned long p2, unsigned char p3)
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
// void JAInter::Camera::__defctor(void)
// {
#warning JAInter::Camera::__defctor not implemented
// 	/*
// 	li       r0, 0
// 	stw      r0, 0(r3)
// 	stw      r0, 4(r3)
// 	stw      r0, 8(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800AC6A4
 * Size:	000008
 */
void JAIBasic::setInitFileLoadSwitch(unsigned char a1)
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
void JAIBasic::startSoundBasic(unsigned long id, JAISound** handlePtr, JAInter::Actor* actor, unsigned long p4, unsigned char p5,
                               JAInter::SoundInfo* info)
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
void JAIBasic::startSoundBasic(unsigned long id, JAISequence** handlePtr, JAInter::Actor* actor, unsigned long p4, unsigned char p5,
                               JAInter::SoundInfo* info)
{
	if (_0E._1 != true && (JAInter::SeMgr::seHandle == nullptr || (JAInter::SeMgr::seHandle->m_soundID & 0x3FF) != (id & 0x3FF))) {
		if (handlePtr == nullptr) {
			handlePtr = &JAInter::SequenceMgr::FixSeqBufPointer[info->count.v2[1]];
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
void JAIBasic::startSoundBasic(unsigned long id, JAISe** handlePtr, JAInter::Actor* actor, unsigned long p4, unsigned char p5,
                               JAInter::SoundInfo* info)
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
void JAIBasic::startSoundBasic(unsigned long id, JAIStream** handlePtr, JAInter::Actor* actor, unsigned long p4, unsigned char p5,
                               JAInter::SoundInfo* info)
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
void JAIBasic::getPlayingSoundHandle(JAISound**, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC920
 * Size:	000088
 */
void JAIBasic::stopSoundHandle(JAISound* handle, unsigned long p2)
{
	if (handle == nullptr) {
		return;
	}
	switch (handle->m_soundID & JAISoundID_TypeMask) {
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
void JAIBasic::stopPlayingIDObjectSe(unsigned long, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAIBasic::stopPlayingCategorySe(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAIBasic::stopPlayingCategoryObjectSe(unsigned char, void*)
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
void JAIBasic::stopAllSe(unsigned char p1)
{
	for (JSULink<JAISound>* link = JAInter::SeMgr::seRegist[p1]._04->getFirst(); link != nullptr; link = link->getNext()) {
		stopSoundHandle(link->getObject(), 0);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 3, 0x15, 0x1c
	stw      r31, 0xc(r1)
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	add      r3, r3, r0
	lwz      r3, 4(r3)
	lwz      r31, 0(r3)
	b        lbl_800ACA38

lbl_800AC9D0:
	lwz      r3, 0(r31)
	lwz      r31, 0xc(r31)
	cmplwi   r3, 0
	beq      lbl_800ACA38
	lwz      r4, 0x20(r3)
	lis      r0, 0xc000
	rlwinm   r5, r4, 0, 0, 1
	cmpw     r5, r0
	beq      lbl_800ACA30
	bge      lbl_800ACA0C
	lis      r4, 0x80000001@ha
	addi     r0, r4, 0x80000001@l
	cmpw     r5, r0
	bge      lbl_800ACA38
	b        lbl_800ACA18

lbl_800ACA0C:
	cmpwi    r5, 0
	beq      lbl_800ACA24
	b        lbl_800ACA38

lbl_800ACA18:
	li       r4, 0
	bl       releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
	b        lbl_800ACA38

lbl_800ACA24:
	li       r4, 0
	bl       releaseSeBuffer__Q27JAInter5SeMgrFP5JAISeUl
	b        lbl_800ACA38

lbl_800ACA30:
	li       r4, 0
	bl       releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl

lbl_800ACA38:
	cmplwi   r31, 0
	bne      lbl_800AC9D0
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
 * Size:	000070
 */
void JAIBasic::stopAllSe(unsigned char, void*)
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
void JAIBasic::stopIDSoundOneBuffer(unsigned long, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JAIBasic::stopIDActorSoundOneBuffer(unsigned long, void*, JSULink<JAISound>*)
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
void JAIBasic::getPlayingSoundLinkHeadPointer(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void JAIBasic::stopAllSound(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000204
 */
void JAIBasic::stopAllSound(unsigned long, void*)
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
void JAIBasic::setPauseFlagAll(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void JAIBasic::changeSoundScene(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACA54
 * Size:	000020
 * stop__9JAIStreamFUl
 */
void JAIStream::stop(unsigned long p1) { JAInter::StreamMgr::releaseStreamBuffer(this, p1); }

/*
 * --INFO--
 * Address:	800ACA74
 * Size:	000020
 * stop__11JAISequenceFUl
 */
void JAISequence::stop(unsigned long p1) { JAInter::SequenceMgr::releaseSeqBuffer(this, p1); }

/*
 * --INFO--
 * Address:	800ACA94
 * Size:	000010
 */
BOOL JAIBasic::getMapInfoFxline(unsigned long p1) { return p1 != 0; }

/*
 * --INFO--
 * Address:	800ACAA4
 * Size:	000010
 */
BOOL JAIBasic::getMapInfoGround(unsigned long p1) { return p1 != 0; }

/*
 * --INFO--
 * Address:	800ACAB4
 * Size:	000018
 */
float JAIBasic::getMapInfoFxParameter(unsigned long p1) { return (p1 == 0) ? 0.0f : 1.0f; }

/*
 * --INFO--
 * Address:	800ACACC
 * Size:	000050
 */
u32 JAIBasic::getSoundOffsetNumberFromID(unsigned long p1)
{
	// TODO: probably an inline here.
	return ((JAInter::SoundTable::getInfoFormat(p1) & 1) != 0) ? JAInter::SoundTable::getInfoPointer(p1)->count.v3[1] : p1 & 0x3FF;
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
void JAIBasic::setSeCancelSwitch(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JAIBasic::setSeCategoryVolume(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACB1C
 * Size:	0001DC
 */
u16 JAIBasic::setParameterSeqSync(JASTrack*, unsigned short)
{
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
	// TODO: Fix the params. There's some float math going on.
	u32 format = JAInter::SoundTable::getInfoFormat(handle->m_soundID);
	if ((format & 4) != 0) {
		handle->setVolume(0.0f, handle->m_soundInfo->count.v2[0], 1);
	}
	if ((format & 8) != 0) {
		handle->setFxmix(0.0f, handle->m_soundInfo->count.v2[0], 1);
	}
	if ((format & 2) != 0) {
		handle->setPitch(0.0f, handle->m_soundInfo->count.v2[0], 1);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	beq      lbl_800ACDE4
	lwz      r3, 0x20(r30)
	bl       getInfoFormat__Q27JAInter10SoundTableFUl
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	clrlwi   r31, r3, 0x18
	beq      lbl_800ACD6C
	lwz      r4, 0x44(r30)
	lis      r0, 0x4330
	mr       r3, r30
	stw      r0, 8(r1)
	lbz      r0, 0xc(r4)
	li       r4, 0
	lwz      r12, 0x10(r30)
	li       r5, 1
	stw      r0, 0xc(r1)
	lfd      f2, lbl_80516F20@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80516F1C@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x1c(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl

lbl_800ACD6C:
	rlwinm.  r0, r31, 0, 0x1c, 0x1c
	beq      lbl_800ACDB8
	lwz      r4, 0x44(r30)
	lis      r0, 0x4330
	mr       r3, r30
	stw      r0, 8(r1)
	lbz      r0, 0xd(r4)
	li       r4, 0
	lwz      r12, 0x10(r30)
	li       r5, 1
	stw      r0, 0xc(r1)
	lfd      f2, lbl_80516F20@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80516F1C@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x34(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl

lbl_800ACDB8:
	rlwinm.  r0, r31, 0, 0x1e, 0x1e
	beq      lbl_800ACDE4
	mr       r3, r30
	lwz      r5, 0x44(r30)
	lwz      r12, 0x10(r30)
	li       r4, 0
	lfs      f1, 8(r5)
	li       r5, 1
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_800ACDE4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACDFC
 * Size:	000070
 */
JAISequence* JAIBasic::makeSequence()
{
	if (m_heap != nullptr) {
		return new (m_heap, 0) JAISequence();
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
	if (m_heap != nullptr) {
		return new (m_heap, 0) JAISe();
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
	// if (m_heap != nullptr) {
	// 	return new (m_heap, 0) JAIStream();
	// }
	// return new (JASDram, 0) JAIStream();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_800ACF18
	li       r3, 0x1d8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACF10
	bl       __ct__9JAIStreamFv
	mr       r0, r3

lbl_800ACF10:
	mr       r3, r0
	b        lbl_800ACF3C

lbl_800ACF18:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x1d8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACF38
	bl       __ct__9JAIStreamFv
	mr       r0, r3

lbl_800ACF38:
	mr       r3, r0

lbl_800ACF3C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
void JAIBasic::stopAudio(unsigned long, bool)
{
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
int JAIBasic::checkAudioStopStatus()
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
void JAIBasic::stopCallBack(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, msAudioStopTime__8JAIBasic@sda21(r13)
	lwz      r3, 0x10(r3)
	cmplw    r4, r3
	bne      lbl_800AD0A0
	lbz      r0, msStopMode__8JAIBasic@sda21(r13)
	li       r3, 3
	stb      r3, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AD098
	bl       stop__14JASAudioThreadFv

lbl_800AD098:
	li       r3, -1
	b        lbl_800AD1B0

lbl_800AD0A0:
	addi     r0, r4, -4
	cmplw    r0, r3
	bne      lbl_800AD160
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800AD1AC
	li       r31, 0

lbl_800AD0BC:
	mr       r3, r31
	bl       getHandle__13JASDSPChannelFUl
	lwz      r0, 0(r3)
	clrlwi.  r0, r0, 0x18
	bne      lbl_800AD0D4
	bl       drop__13JASDSPChannelFv

lbl_800AD0D4:
	addi     r31, r31, 1
	cmplwi   r31, 0x40
	blt      lbl_800AD0BC
	bl       clearAllBuffer__Q27JAInter2FxFv
	li       r31, 0
	b        lbl_800AD124

lbl_800AD0EC:
	mr       r3, r31
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_800AD120
	mr       r3, r31
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r3, 0x48(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800AD120:
	addi     r31, r31, 1

lbl_800AD124:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r31, r3
	blt      lbl_800AD0EC
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_800AD154
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800AD154:
	li       r0, 2
	stb      r0, msStopStatus__8JAIBasic@sda21(r13)
	b        lbl_800AD1AC

lbl_800AD160:
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800AD1AC
	bl       getDSPLevel_f32__9JASDriverFv
	lfs      f2, msDspDif__8JAIBasic@sda21(r13)
	lfs      f0, lbl_80516F10@sda21(r2)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_800AD188
	fmr      f1, f0

lbl_800AD188:
	bl       setDSPLevel__9JASDriverFf
	bl       getAutoLevel_f32__9JASDriverFv
	lfs      f2, msAutoDif__8JAIBasic@sda21(r13)
	lfs      f0, lbl_80516F10@sda21(r2)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_800AD1A8
	fmr      f1, f0

lbl_800AD1A8:
	bl       setAutoLevel__9JASDriverFf

lbl_800AD1AC:
	li       r3, 0

lbl_800AD1B0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
