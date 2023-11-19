#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "PSGame/SeMgr.h"
#include "PSSystem/PSStream.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/SeqData.h"
#include "PSSystem/SeqSound.h"
#include "stream.h"
#include "PSSystem/BankMgr.h"
#include "JSystem/JAudio/JAi/JAInter/SeMgr.h"
#include "PSSystem/PSGame.h"
#include "JSystem/JAudio/JAS/JASDriver.h"

namespace PSSystem {
u8 sDistanceParameterMoveTime;

/*
 * --INFO--
 * Address:	8033836C
 * Size:	000050
 */
u32 getObject(JASTrack* track, u8 p2)
{
	return track->readReg16(p2 + 1) | track->readReg16(p2);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       readReg16__8JASTrackFUc
	addi     r0, r31, 1
	mr       r31, r3
	mr       r3, r30
	clrlwi   r4, r0, 0x18
	bl       readReg16__8JASTrackFUc
	lwz      r0, 0x14(r1)
	rlwimi   r3, r31, 0x10, 0, 0xf
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803383BC
 * Size:	000060
 */
void setObject(JASTrack* track, void* p2, u8 p3)
{
	track->writeRegDirect(p3, reinterpret_cast<u32>(p2) >> 0x10);
	track->writeRegDirect(p3 + 1, (u8)(p2));
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	srwi     r5, r4, 0x10
	stw      r30, 0x18(r1)
	mr       r30, r4
	mr       r4, r31
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       writeRegDirect__8JASTrackFUcUs
	addi     r0, r31, 1
	clrlwi   r5, r30, 0x10
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       writeRegDirect__8JASTrackFUcUs
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033841C
 * Size:	000134
 */
SysIF::SysIF(const SetupArg& arg)
    : JAIBasic()
{
	OSInitMutex(&mMutex);

	_48 = 0;
	P2ASSERTLINE(141, arg.mHeap);
	P2ASSERTLINE(142, arg.mHeapSize != 0);
	setInitFileLoadSwitch(2);
	JAIGlobalParameter::setParamInitDataPointer(arg.mAafFile);
	JAIGlobalParameter::setParamStreamInsideBufferCut(true);
	JAIGlobalParameter::setParamDistanceParameterMoveTime(sDistanceParameterMoveTime);
	BankMgr::createInstance()->preInit();
	// JAInter::SeMgr::setSeSequenceStartCallback(SysIF::start1stSeq);
	initDriver(arg.mHeap, arg.mHeapSize, 1);
	initInterface(1);
	initIF(arg);
	mSfxVolume = 0.0f;
	mBgmVolume = 0.0f;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__8JAIBasicFv
	lis      r4, __vt__Q28PSSystem5SysIF@ha
	addi     r3, r30, 0x28
	addi     r0, r4, __vt__Q28PSSystem5SysIF@l
	stw      r0, 0(r30)
	bl       OSInitMutex
	li       r0, 0
	addi     r3, r30, 0x44
	stw      r0, 0x40(r30)
	bl       __ct__Q28PSSystem5FxMgrFv
	lwz      r0, 0(r31)
	li       r3, 0
	stw      r3, 0x48(r30)
	cmplwi   r0, 0
	bne      lbl_80338490
	lis      r3, lbl_8048FE28@ha
	lis      r5, lbl_8048FE38@ha
	addi     r3, r3, lbl_8048FE28@l
	li       r4, 0x8d
	addi     r5, r5, lbl_8048FE38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80338490:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_803384B8
	lis      r3, lbl_8048FE28@ha
	lis      r5, lbl_8048FE38@ha
	addi     r3, r3, lbl_8048FE28@l
	li       r4, 0x8e
	addi     r5, r5, lbl_8048FE38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803384B8:
	mr       r3, r30
	li       r4, 2
	bl       setInitFileLoadSwitch__8JAIBasicFUc
	lwz      r3, 0x10(r31)
	bl       setParamInitDataPointer__18JAIGlobalParameterFPv
	li       r3, 1
	bl       setParamStreamInsideBufferCut__18JAIGlobalParameterFb
	lbz      r3, sDistanceParameterMoveTime__8PSSystem@sda21(r13)
	bl       setParamDistanceParameterMoveTime__18JAIGlobalParameterFUc
	bl       createInstance__Q28PSSystem7BankMgrFv
	bl       preInit__Q28PSSystem7BankMgrFv
	lis      r3, start1stSeq__Q28PSSystem5SysIFFv@ha
	addi     r3, r3, start1stSeq__Q28PSSystem5SysIFFv@l
	bl       setSeSequenceStartCallback__Q27JAInter5SeMgrFPFv_v
	lwz      r4, 0(r31)
	mr       r3, r30
	lwz      r5, 4(r31)
	li       r6, 1
	bl       initDriver__8JAIBasicFP12JKRSolidHeapUlUc
	mr       r3, r30
	li       r4, 1
	bl       initInterface__8JAIBasicFUc
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051E150@sda21(r2)
	mr       r3, r30
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338550
 * Size:	0000E0
 */
void SysIF::stopSoundSystem()
{
	SceneMgr* mgr = getSceneMgr();
	checkSceneMgr(mgr);
	Scene* scene = mgr->mScenes;
	P2ASSERTLINE(183, scene);
	scene->stopAllSound(5);
	for (; scene->getChildScene(); scene = scene->getChildScene()) {
		scene->getChildScene()->stopAllSound(5);
	}
	stopAudio(10, true);
}

/*
 * --INFO--
 * Address:	80338630
 * Size:	000040
 */
JAISe* SysIF::playSystemSe(u32 soundID, u32 flag)
{
	JAISe* se = nullptr;
	startSoundActorReturnHandleT(&se, soundID, nullptr, flag, 4);
	return se;
}

/*
 * --INFO--
 * Address:	80338670
 * Size:	00002C
 */
void SysIF::playSystemSe(u32 soundID, JAISound** handles, u32 flag)
{
	startSoundActorT(soundID, handles, nullptr, flag, 4);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r6
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r8, 4
	bl
	"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033869C
 * Size:	000078
 */
void SysIF::initIF(const SetupArg& arg)
{
	initHeap();
	// JAInter::SequenceMgr::setCustomHeapCallback((JAInter::SequenceMgr::CustomHeapCallback)SeqHeap::requestCallback);
	JASDriver::setLevel(0.9f, 0.9f, 3.9f);
	JASTrack::registerSeqCallback((JASTrack::SeqCallback)arg._0C);
	BankRandPrm::createInstance();

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	bl       initHeap__8JAIBasicFv
	lis      r3, requestCallback__Q28PSSystem7SeqHeapFUlUsP11JAISequence@ha
	addi     r3, r3, requestCallback__Q28PSSystem7SeqHeapFUlUsP11JAISequence@l
	bl
setCustomHeapCallback__Q27JAInter11SequenceMgrFPFUlUsP11JAISequence_Q37JAInter11SequenceMgr14CustomHeapInfo
	lfs      f1, lbl_8051E154@sda21(r2)
	lfs      f3, lbl_8051E158@sda21(r2)
	fmr      f2, f1
	bl       setLevel__9JASDriverFfff
	lwz      r3, 0xc(r31)
	bl       registerSeqCallback__8JASTrackFPFP8JASTrackUs_Us
	lwz      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80338700
	li       r3, 0x10
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803386FC
	bl       __ct__Q28PSSystem11BankRandPrmFv
	mr       r0, r3

lbl_803386FC:
	stw      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)

lbl_80338700:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338714
 * Size:	000038
 */
JAISe* SysIF::makeSe()
{
	if (sMakeJAISeCallback) {
		// sMakeJAISeCallback();
	} else {
		return JAIBasic::makeSe();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, sMakeJAISeCallback__Q28PSSystem5SysIF@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_80338738
	mtctr    r12
	bctrl
	b        lbl_8033873C

lbl_80338738:
	bl       makeSe__8JAIBasicFv

lbl_8033873C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033874C
 * Size:	0000DC
 */
void SysIF::mainLoop()
{
	if (_40 == 1) {
		getSceneMgr()->exec();
		getSeMgrInstance()->execAllSe();
		processFrameWork();
	}
}

/*
 * --INFO--
 * Address:	80338828
 * Size:	00008C
 */
void SysIF::setConfigVol_Se(f32 volume)
{
	mSfxVolume = volume;
	if (spSceneMgr && spSceneMgr->mScenes) {
		SeqBase* seq = spSceneMgr->mScenes->mSeqMgr.getFirstSeq();
		if (seq) {
			JAISound* se = *seq->getHandleP();
			if (se) {
				se->setVolume(volume, 3, 8);
			}
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stfd     f31, 8(r1)
	fmr      f31, f1
	stfs     f31, 0x20(r3)
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803388A0
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_803388A0
	addi     r3, r3, 0x10
	bl       getFirstSeq__Q28PSSystem6SeqMgrFv
	cmplwi   r3, 0
	beq      lbl_803388A0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_803388A0
	lwz      r12, 0x10(r3)
	fmr      f1, f31
	li       r4, 3
	li       r5, 8
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803388A0:
	lwz      r0, 0x14(r1)
	lfd      f31, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803388B4
 * Size:	0000C8
 */
void SysIF::setConfigVol_Bgm(f32 volume)
{
	mBgmVolume         = volume;
	SceneMgr* scenemgr = spSceneMgr;
	if (scenemgr) {
		scenemgr->checkScene();
		Scene* scene = scenemgr->mScenes;
		if (scene) {
			for (SeqBase* mgr = (SeqBase*)scene->mSeqMgr.getFirst(); mgr; mgr = (SeqBase*)mgr->getNext()) {
				JAISound* se = *mgr->getHandleP();
				if (se) {
					se->setVolume(volume, 3, 8);
				}
			}
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	stfs     f31, 0x24(r3)
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	beq      lbl_80338964
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_80338904
	lis      r3, lbl_8048FE50@ha
	lis      r5, lbl_8048FE38@ha
	addi     r3, r3, lbl_8048FE50@l
	li       r4, 0xc7
	addi     r5, r5, lbl_8048FE38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80338904:
	lwz      r3, 4(r31)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80338964
	lwz      r31, 0x10(r3)
	b        lbl_8033895C

lbl_8033891C:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80338958
	lwz      r12, 0x10(r3)
	fmr      f1, f31
	li       r4, 3
	li       r5, 8
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80338958:
	lwz      r31, 0xc(r31)

lbl_8033895C:
	cmplwi   r31, 0
	bne      lbl_8033891C

lbl_80338964:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033897C
 * Size:	000004
 */
FxMgr::FxMgr() { }

/*
 * --INFO--
 * Address:	80338980
 * Size:	000044
 */
TextDataBase::TextDataBase()
    : mFile(nullptr)
{
}

/*
 * --INFO--
 * Address:	803389C4
 * Size:	000070
 */
TextDataBase::~TextDataBase()
{
	// JKRHeap::free(mFile);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80338A18
	lis      r3, __vt__Q28PSSystem12TextDataBase@ha
	li       r4, 0
	addi     r0, r3, __vt__Q28PSSystem12TextDataBase@l
	stw      r0, 0(r30)
	lwz      r3, 0x18(r30)
	bl       free__7JKRHeapFPvP7JKRHeap
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80338A18
	mr       r3, r30
	bl       __dl__FPv

lbl_80338A18:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338A34
 * Size:	00007C
 */
bool TextDataBase::load(const char* path, JKRDvdRipper::EAllocDirection direction)
{
	onlyLoad(path, direction);
	if (mFile) {
		RamStream stream(mFile, -1);
		stream.resetPosition(true, 1);
		return read(stream);
	}
	return false;
}

/*
 * --INFO--
 * Address:	80338AB0
 * Size:	000068
 */
bool TextDataBase::onlyLoad(const char* path, JKRDvdRipper::EAllocDirection direction)
{
	mFile = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_0, 0, nullptr, direction, 0, nullptr, nullptr);
	return !!mFile; // ???
}

/*
 * --INFO--
 * Address:	80338B18
 * Size:	00000C
 */
void SysIF::start1stSeq() { JAInter::SeMgr::seHandle = nullptr; }

/*
 * --INFO--
 * Address:	80338B24
 * Size:	000070
 */
JAISequence* SysIF::makeSequence()
{
	if (mHeap) {
		return new (mHeap, 0) SeqSound;
	} else {
		return new (JASDram, 0) SeqSound;
	}
}

/*
 * --INFO--
 * Address:	80338B94
 * Size:	000058
 */
SeqSound::SeqSound() { }

/*
 * --INFO--
 * Address:	80338BEC
 * Size:	000070
 */
JAIStream* SysIF::makeStream()
{
	// broken until StreamSound inherits JAIStream
	if (mHeap) {
		//	return new (mHeap, 0) StreamSound;
	} else {
		//	return new (JASDram, 0) StreamSound;
	}
}

/*
 * --INFO--
 * Address:	80338C5C
 * Size:	000058
 */
StreamSound::StreamSound()
{
	// broken until StreamSound inherits public JAIStream
}

} // namespace PSSystem
