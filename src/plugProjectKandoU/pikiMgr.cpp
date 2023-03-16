#include "Game/PikiMgr.h"
#include "Game/Entities/ItemPikihead.h"
#include "SysShape/ModelMgr.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "nans.h"

namespace Game {

static const int unusedPikiMgrArray[] = { 0, 0, 0 };

/*
 * --INFO--
 * Address:	8015CD14
 * Size:	0000B4
 */
PikiMgr::PikiMgr()
{
	mFlags[0] = 0;
	mFlags[1] = 0;

	mFlags[0]   = 0;
	mDopedPikis = 0;
	mName       = "pikiMgr";
	mParms      = new PikiParms;
	mUpdateMgr2 = new UpdateMgr;
	mUpdateMgr2->create(10);

	allocStorePikmins();
	mFlags[1] = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void PikiMgr::init()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015E68C
 * Size:	000038
 */
void PikiMgr::resetMgr()
{
	((MonoObjectMgr*)this)->resetMgr();
	mDopedPikis = 0;
	mFlags[0]   = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "resetMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
	li       r0, 0
	stw      r0, 0x30(r31)
	stb      r0, 0x38(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015E6C4
 * Size:	000064
 */
void PikiMgr::onAlloc()
{
	for (int i = 0; i < mMax; i++) {
		getAt(i)->mMgrIndex = i;
	}
}

/*
 * --INFO--
 * Address:	8015E738
 * Size:	000060
 */
void PikiMgr::setupPiki(Piki* piki)
{
	piki->mModel     = createModel(piki->mPikiKind, piki->mMgrIndex);
	piki->mLeafModel = createLeafModel(piki->mHappaKind, piki->mMgrIndex);
	piki->mParms     = mParms;
}

/*
 * --INFO--
 * Address:	8015E798
 * Size:	000324
 */
Piki* PikiMgr::birth()
{
	switch (mBirthMode) {
	case 0: {
		int sproutCount = 0;
		int pikiCount   = mActiveCount;
		if (ItemPikihead::mgr) {
			sproutCount = ItemPikihead::mgr->mMonoObjectMgr.mActiveCount;
		}
		if (sproutCount + pikiCount < 100) {
			break;
		}
		return nullptr;
	}

	case 1:
		return ((MonoObjectMgr*)this)->birth();

	case 2: {
		int sproutCount = 0;
		int pikiCount   = mActiveCount;
		if (ItemPikihead::mgr) {
			sproutCount = ItemPikihead::mgr->mMonoObjectMgr.mActiveCount;
		}
		Piki* piki = nullptr;
		if (sproutCount + pikiCount < 100) {
			piki = ((MonoObjectMgr*)this)->birth();
		}

		if (!piki) {

			Piki* toKill = nullptr;
			Iterator<Piki> iter(this);
			CI_LOOP(iter)
			{
				Piki* currPiki = *iter;
				if ((int)currPiki->mPikiKind == Bulbmin && currPiki->isAlive() && currPiki->isTekiFollowAI()) {
					toKill = currPiki;
					break;
				}
			}

			if (toKill) {
				PikiKillArg killArg(1);
				toKill->kill(&killArg);

				return ((MonoObjectMgr*)this)->birth();
			} else {
				return nullptr;
			}

		} else {
			return piki;
		}
	}
	}

	return ((MonoObjectMgr*)this)->birth();
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	cmpwi    r0, 1
	beq      lbl_8015E808
	bge      lbl_8015E7D0
	cmpwi    r0, 0
	bge      lbl_8015E7DC
	b        lbl_8015EA98

lbl_8015E7D0:
	cmpwi    r0, 3
	bge      lbl_8015EA98
	b        lbl_8015E810

lbl_8015E7DC:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	li       r4, 0
	lwz      r0, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_8015E7F4
	lwz      r4, 0x6c(r3)

lbl_8015E7F4:
	add      r0, r0, r4
	cmpwi    r0, 0x64
	blt      lbl_8015EA98
	li       r3, 0
	b        lbl_8015EAA0

lbl_8015E808:
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"
	b        lbl_8015EAA0

lbl_8015E810:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	li       r4, 0
	lwz      r0, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_8015E828
	lwz      r4, 0x6c(r3)

lbl_8015E828:
	add      r0, r0, r4
	li       r3, 0
	cmpwi    r0, 0x64
	bge      lbl_8015E840
	mr       r3, r30
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"

lbl_8015E840:
	cmplwi   r3, 0
	bne      lbl_8015EAA0
	li       r0, 0
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r3, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r0, 0x1c(r1)
	cmplwi   r0, 0
	li       r31, 0
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)
	stw      r30, 0x18(r1)
	bne      lbl_8015E88C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015EA2C

lbl_8015E88C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015E8FC

lbl_8015E8A8:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015EA2C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015E8FC:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E8A8
	b        lbl_8015EA2C

lbl_8015E91C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r29, r3
	cmpwi    r0, 5
	bne      lbl_8015E970
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E970
	mr       r3, r29
	bl       isTekiFollowAI__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E970
	mr       r31, r29
	b        lbl_8015EA4C

lbl_8015E970:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_8015E99C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015EA2C

lbl_8015E99C:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015EA10

lbl_8015E9BC:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015EA2C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015EA10:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E9BC

lbl_8015EA2C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_8015E91C

lbl_8015EA4C:
	cmplwi   r31, 0
	beq      lbl_8015EA8C
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r0, r4, __vt__Q24Game15CreatureKillArg@l
	li       r5, 1
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game11PikiKillArg@l
	mr       r3, r31
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	mr       r3, r30
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"
	b        lbl_8015EAA0

lbl_8015EA8C:
	li       r3, 0
	b        lbl_8015EAA0
	b        lbl_8015EAA0

lbl_8015EA98:
	mr       r3, r30
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"

lbl_8015EAA0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EABC
 * Size:	0000CC
 */
void PikiMgr::loadResources(int p1)
{
	void* handle
	    = JKRDvdRipper::loadToMainRAM("user/Abe/piki/pikiParms.txt", 0, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (handle) {
		RamStream stream(handle, -1);
		stream.resetPosition(true, 1);
		mParms->read(stream);
		delete[] handle;
	}

	load(p1);
}

/*
 * --INFO--
 * Address:	8015EBD8
 * Size:	000298
 */
void PikiMgr::load(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8047D7A0@ha
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r29, r3
	mr       r30, r4
	addi     r31, r5, lbl_8047D7A0@l
	lwz      r27, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r3, r27
	bl       getFreeSize__7JKRHeapFv
	lwz      r5, sys@sda21(r13)
	addi     r3, r31, 0x854
	li       r4, 1
	li       r6, 1
	lwz      r5, 0x38(r5)
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	mr       r28, r3
	mr       r3, r27
	stw      r28, 0x7c(r29)
	bl       getFreeSize__7JKRHeapFv
	cmplwi   r28, 0
	bne      lbl_8015EC48
	addi     r3, r31, 0x818
	addi     r5, r31, 0x870
	li       r4, 0x1c2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015EC48:
	mr       r3, r29
	addi     r5, r31, 0x888
	li       r4, 0
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x898
	li       r4, 1
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8a4
	li       r4, 2
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8b4
	li       r4, 4
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8c4
	li       r4, 3
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8d4
	li       r4, 5
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8e4
	li       r4, 6
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r28
	addi     r4, r31, 0x8f0
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x2000
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x58(r29)
	mr       r3, r28
	addi     r4, r31, 0x908
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x5c(r29)
	mr       r3, r28
	addi     r4, r31, 0x91c
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x60(r29)
	mr       r3, r28
	addi     r4, r31, 0x934
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x64(r29)
	mr       r3, r28
	addi     r4, r31, 0x94c
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x68(r29)
	addi     r4, r31, 0x968
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8015EE04
	li       r3, 0x14
	bl       __nw__FUl
	or.      r9, r3, r3
	beq      lbl_8015EDE4
	lis      r3, lbl_804B16A4@ha
	lis      r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@ha
	addi     r7, r3, lbl_804B16A4@l
	lis      r3, "__vt__45Delegate1<Q24Game7PikiMgr,PQ28SysShape5Model>"@ha
	lwz      r6, 0(r7)
	addi     r4, r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@l
	lwz      r5, 4(r7)
	addi     r0, r3, "__vt__45Delegate1<Q24Game7PikiMgr,PQ28SysShape5Model>"@l
	lwz      r3, 8(r7)
	stw      r6, 8(r1)
	stw      r4, 0(r9)
	stw      r0, 0(r9)
	stw      r29, 4(r9)
	stw      r6, 8(r9)
	stw      r5, 0xc(r9)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r3, 0x10(r9)

lbl_8015EDE4:
	mr       r3, r28
	mr       r8, r30
	addi     r5, r29, 0x3c
	li       r4, 7
	li       r6, 0x64
	lis      r7, 2
	bl
"__ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<PQ28SysShape5Model>"
	mr       r28, r3

lbl_8015EE04:
	stw      r28, 0x70(r29)
	addi     r4, r31, 0x968
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lis      r3, j3dDefaultMtx@ha
	mr       r28, r29
	addi     r29, r3, j3dDefaultMtx@l
	li       r27, 0

lbl_8015EE24:
	lwz      r30, 0x58(r28)
	lis      r4, 4
	mr       r3, r30
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r30
	mr       r5, r29
	li       r4, 0
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	mr       r3, r30
	bl       makeSharedDL__12J3DModelDataFv
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 5
	blt      lbl_8015EE24
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EE70
 * Size:	000098
 */
void PikiMgr::loadBmd(int, char*)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	lis      r6, lbl_8047E118@ha
	stw      r0, 0x124(r1)
	addi     r0, r6, lbl_8047E118@l
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	mr       r30, r4
	mr       r4, r0
	stw      r29, 0x114(r1)
	mr       r29, r3
	addi     r3, r1, 8
	crclr    6
	bl       sprintf
	lwz      r3, 0x7c(r29)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x00060010@ha
	addi     r4, r4, 0x00060010@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lis      r4, 4
	mr       r31, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r31
	bl       makeSharedDL__12J3DModelDataFv
	slwi     r0, r30, 2
	add      r3, r29, r0
	stw      r31, 0x3c(r3)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r0, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF08
 * Size:	00004C
 */
void PikiMgr::createModelCallback(SysShape::Model* model)
{
	model->mJ3dModel->calcMaterial();
	model->mJ3dModel->makeDL();
	model->mJ3dModel->lock();
}

/*
 * --INFO--
 * Address:	8015EF54
 * Size:	000024
 */
SysShape::Model* PikiMgr::createModel(int p1, int p2) { return mModelMgr->createModel(p1, p2); }

/*
 * --INFO--
 * Address:	8015EF78
 * Size:	000008
 */
SysShape::Model* PikiMgr::createLeafModel(int, int) { return nullptr; }

/*
 * --INFO--
 * Address:	8015EF80
 * Size:	000280
 */
void PikiMgr::setMovieDraw(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	stmw     r26, 8(r1)
	mr       r28, r4
	mr       r27, r3
	bne      lbl_8015EFB0
	lbz      r0, 0x39(r27)
	ori      r0, r0, 1
	stb      r0, 0x39(r27)
	b        lbl_8015EFBC

lbl_8015EFB0:
	lbz      r0, 0x39(r27)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x39(r27)

lbl_8015EFBC:
	li       r29, 0
	li       r30, 0
	b        lbl_8015F1E0

lbl_8015EFC8:
	lwz      r3, 0x2c(r27)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F1D8
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F1D8
	clrlwi.  r0, r28, 0x18
	beq      lbl_8015F110
	lwz      r3, 0x28(r27)
	addi     r0, r30, 0x258
	lwzx     r31, r3, r0
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0, 0
	beq      lbl_8015F02C
	lwz      r0, 4(r31)
	stw      r0, 0(r31)
	lwz      r0, 0(r31)
	clrlwi   r0, r0, 1
	stw      r0, 0(r31)

lbl_8015F02C:
	lwz      r3, 0(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_8015F058
	ori      r0, r3, 1
	stw      r0, 0(r31)
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_8015F058
	lwz      r4, 0xc(r31)
	mr       r3, r31
	bl       "createKourin___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F058:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8015F080
	ori      r0, r3, 2
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0xc(r31)
	bl       "createDoping___Q23efx9TPkEffectFP10Vector3<f>"
	mr       r3, r31
	bl       killKourin___Q23efx9TPkEffectFv

lbl_8015F080:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8015F0A0
	ori      r0, r3, 4
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0xc(r31)
	bl       "createMoe___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F0A0:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_8015F0C0
	ori      r0, r3, 8
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0xc(r31)
	bl       "createChudoku___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F0C0:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_8015F0E0
	ori      r0, r3, 0x10
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0x14(r31)
	bl       "createWater___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F0E0:
	lwz      r0, 0(r31)
	rlwinm.  r26, r0, 0, 0x1a, 0x1a
	beq      lbl_8015F1D8
	ori      r0, r0, 0x20
	mr       r3, r31
	stw      r0, 0(r31)
	bl       updateHamon___Q23efx9TPkEffectFv
	cmplwi   r26, 0
	bne      lbl_8015F1D8
	addi     r3, r31, 0x28
	bl       "createSimpleDive__3efxFR10Vector3<f>"
	b        lbl_8015F1D8

lbl_8015F110:
	lwz      r3, 0x28(r27)
	addi     r0, r30, 0x258
	lwzx     r31, r3, r0
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0, 0
	bne      lbl_8015F14C
	stw      r3, 4(r31)
	li       r0, 0
	stb      r0, 0(r31)
	stb      r0, 1(r31)
	stb      r0, 2(r31)
	stb      r0, 3(r31)
	lwz      r0, 0(r31)
	oris     r0, r0, 0x8000
	stw      r0, 0(r31)

lbl_8015F14C:
	addi     r3, r31, 0x34
	lwz      r12, 0x34(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x48
	lwz      r12, 0x48(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       killKourin___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killDoping___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killNage___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killMoe___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killChudoku___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killMoeSmoke___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killBlackDown___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killWater___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killHamonA___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killHamonB___Q23efx9TPkEffectFv

lbl_8015F1D8:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F1E0:
	lwz      r0, 0x24(r27)
	cmpw     r29, r0
	blt      lbl_8015EFC8
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F200
 * Size:	000084
 */
void PikiMgr::debugShapeDL(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8015F258

lbl_8015F230:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015F250
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	bl       debugShapeDL__Q24Game8FakePikiFPc

lbl_8015F250:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_8015F258:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015F230
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F284
 * Size:	000198
 */
void PikiMgr::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r22, 0x38(r1)
	mr       r23, r3
	mr       r24, r4
	li       r3, 0x10
	mr       r29, r23
	li       r27, 0
	lhz      r0, 0x18(r4)
	lis      r4, j3dSys@ha
	addi     r31, r4, j3dSys@l
	slw      r28, r3, r0

lbl_8015F2B8:
	lwz      r5, 0x58(r29)
	li       r0, 0
	lwz      r4, 0x28(r5)
	lwz      r3, 0xa0(r5)
	lwz      r4, 0(r4)
	lwz      r26, 0x58(r4)
	stw      r3, 0x10c(r31)
	lwz      r3, 0xa4(r5)
	stw      r3, 0x110(r31)
	lwz      r3, 0xac(r5)
	stw      r3, 0x114(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	b        lbl_8015F3F0

lbl_8015F2EC:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	bl       loadPreDrawSetting__8J3DShapeCFv
	li       r25, 0
	li       r30, 0
	b        lbl_8015F3E0

lbl_8015F314:
	lwz      r3, 0x2c(r23)
	lbzx     r0, r3, r25
	cmplwi   r0, 0
	bne      lbl_8015F3D8
	lwz      r0, 0x28(r23)
	add      r22, r0, r30
	lbz      r0, 0xd8(r22)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_8015F3D8
	mr       r3, r22
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F3D8
	lbz      r0, 0xd8(r22)
	and.     r0, r0, r28
	beq      lbl_8015F3D8
	lbz      r3, 0x2b8(r22)
	lbz      r0, 0x2b9(r22)
	cmpwi    r3, 4
	mr       r4, r0
	beq      lbl_8015F370
	cmpwi    r3, 3
	bne      lbl_8015F37C

lbl_8015F370:
	cmpwi    r0, 1
	blt      lbl_8015F37C
	addi     r4, r4, 2

lbl_8015F37C:
	cmpw     r4, r27
	bne      lbl_8015F3D8
	lwz      r3, 0x268(r22)
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	mr       r3, r24
	mr       r22, r0
	li       r4, 1
	bl       getMatrix__8ViewportFb
	mr       r4, r22
	addi     r5, r1, 8
	bl       PSMTXConcat
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadNrmMtxImm
	lwz      r3, 8(r26)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8015F3D8:
	addi     r30, r30, 0x2c8
	addi     r25, r25, 1

lbl_8015F3E0:
	lwz      r0, 0x24(r23)
	cmpw     r25, r0
	blt      lbl_8015F314
	lwz      r26, 4(r26)

lbl_8015F3F0:
	cmplwi   r26, 0
	bne      lbl_8015F2EC
	addi     r27, r27, 1
	addi     r29, r29, 4
	cmpwi    r27, 5
	blt      lbl_8015F2B8
	lmw      r22, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F41C
 * Size:	0001D8
 */
void PikiMgr::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r2, lbl_80518834@sda21
	li       r5, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x78(r31)
	bl       update__Q24Game9UpdateMgrFv
	lbz      r0, 0x39(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015F504
	li       r29, 0
	li       r30, 0
	b        lbl_8015F4F4

lbl_8015F46C:
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F4EC
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015F4EC
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x244(r3)
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x1cc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F4EC
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015F4EC:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F4F4:
	lwz      r0, 0x24(r31)
	cmpw     r29, r0
	blt      lbl_8015F46C
	b        lbl_8015F584

lbl_8015F504:
	li       r29, 0
	li       r30, 0
	b        lbl_8015F578

lbl_8015F510:
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F570
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x244(r3)
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x1cc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F570
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015F570:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F578:
	lwz      r0, 0x24(r31)
	cmpw     r29, r0
	blt      lbl_8015F510

lbl_8015F584:
	lwz      r0, 0x30(r31)
	cmpwi    r0, 0
	ble      lbl_8015F5C8
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8015F5C8
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8015F5C8
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8015F5C8
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1071
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_8015F5C8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518834@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
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
 * Address:	8015F5F4
 * Size:	000058
 */
void PikiMgr::setVsXlu(int p1, bool p2)
{
	if (p2) {
		if (p1 == 0) {
			mFlags[0] &= ~1;
		} else {
			mFlags[0] &= ~2;
		}
	} else {
		if (p1 == 0) {
			mFlags[0] |= 1;
		} else {
			mFlags[0] |= 2;
		}
	}
}

/*
 * --INFO--
 * Address:	8015F64C
 * Size:	0001FC
 */
void PikiMgr::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_8015F77C
	lbz      r0, 0x39(r28)
	li       r29, 0
	li       r30, 0
	clrlwi   r31, r0, 0x1f
	b        lbl_8015F76C

lbl_8015F690:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F764
	cmplwi   r31, 0
	beq      lbl_8015F6E4
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F6E4
	lwz      r5, 0x28(r28)
	addi     r4, r30, 0xd8
	li       r0, -53
	lbzx     r3, r5, r4
	and      r0, r3, r0
	stbx     r0, r5, r4
	b        lbl_8015F6FC

lbl_8015F6E4:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl

lbl_8015F6FC:
	lwz      r0, 0x28(r28)
	add      r4, r0, r30
	lbz      r3, 0x2b8(r4)
	cmpwi    r3, 0
	bne      lbl_8015F72C
	lbz      r0, 0x38(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015F72C
	lbz      r0, 0xd8(r4)
	rlwinm   r0, r0, 0, 0x1c, 0x1a
	stb      r0, 0xd8(r4)
	b        lbl_8015F74C

lbl_8015F72C:
	cmpwi    r3, 1
	bne      lbl_8015F74C
	lbz      r0, 0x38(r28)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8015F74C
	lbz      r0, 0xd8(r4)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0xd8(r4)

lbl_8015F74C:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015F764:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F76C:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_8015F690
	b        lbl_8015F828

lbl_8015F77C:
	lbz      r0, 0x39(r28)
	li       r31, 0
	li       r30, 0
	clrlwi   r29, r0, 0x1f
	b        lbl_8015F81C

lbl_8015F790:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r31
	cmplwi   r0, 0
	bne      lbl_8015F814
	cmplwi   r29, 0
	beq      lbl_8015F7E4
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F7E4
	lwz      r5, 0x28(r28)
	addi     r4, r30, 0xd8
	li       r0, -53
	lbzx     r3, r5, r4
	and      r0, r3, r0
	stbx     r0, r5, r4
	b        lbl_8015F7FC

lbl_8015F7E4:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl

lbl_8015F7FC:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015F814:
	addi     r30, r30, 0x2c8
	addi     r31, r31, 1

lbl_8015F81C:
	lwz      r0, 0x24(r28)
	cmpw     r31, r0
	blt      lbl_8015F790

lbl_8015F828:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F848
 * Size:	000004
 */
void PikiMgr::setupSoundViewerAndBas() { }

/*
 * --INFO--
 * Address:	8015F84C
 * Size:	000074
 */
int PikiMgr::getColorTransportScale(int color)
{
	P2ASSERTBOUNDSLINE(857, 0, color, PikiColorCount);
	if (color == Purple) {
		return 10;
	}

	return 1;
}

/*
 * --INFO--
 * Address:	8015F8C0
 * Size:	00003C
 */
void PikiMgr::allocStorePikmins()
{
	mStoredPikis = new s32[21];
	clearStorePikmins();
}

/*
 * --INFO--
 * Address:	8015F8FC
 * Size:	00006C
 */
void PikiMgr::clearStorePikmins()
{
	/*
	li       r0, 3
	li       r11, 0
	mtctr    r0
	mr       r10, r11

lbl_8015F90C:
	lwz      r4, 0x34(r3)
	addi     r8, r11, 4
	addi     r7, r11, 8
	addi     r6, r11, 0xc
	stwx     r10, r4, r11
	addi     r5, r11, 0x10
	addi     r4, r11, 0x14
	addi     r0, r11, 0x18
	lwz      r9, 0x34(r3)
	addi     r11, r11, 0x1c
	stwx     r10, r9, r8
	lwz      r8, 0x34(r3)
	stwx     r10, r8, r7
	lwz      r7, 0x34(r3)
	stwx     r10, r7, r6
	lwz      r6, 0x34(r3)
	stwx     r10, r6, r5
	lwz      r5, 0x34(r3)
	stwx     r10, r5, r4
	lwz      r4, 0x34(r3)
	stwx     r10, r4, r0
	bdnz     lbl_8015F90C
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002C0
 */
// void saveStorePikmins__Q24Game7PikiMgrFP23Condition<Game::Piki>()
void PikiMgr::saveStorePikmins(Condition<Piki>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void PikiMgr::getStorePikmin(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015F968
 * Size:	00034C
 */
// void moveAllPikmins__Q24Game7PikiMgrFR10Vector3f
// fP23Condition<Game::Piki>()
void PikiMgr::moveAllPikmins(Vector3f&, float, Condition<Piki>*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	li       r0, 0
	lis      r6, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r6, r6, "__vt__22Iterator<Q24Game4Piki>"@l
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r6, 0x14(r1)
	mr       r30, r4
	mr       r31, r5
	stw      r0, 0x20(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_8015F9E8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FC58

lbl_8015F9E8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FA54

lbl_8015FA00:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FC58
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8015FA54:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FA00
	b        lbl_8015FC58

lbl_8015FA74:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xbc(r3)
	mr       r29, r3
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8015FB9C
	cmplwi   r31, 0
	beq      lbl_8015FAC0
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FB9C

lbl_8015FAC0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lfd      f3, lbl_80518848@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f1, lbl_8051883C@sda21(r2)
	lfd      f2, 0x28(r1)
	lfs      f0, lbl_80518840@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f29, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	fmr      f1, f29
	lfd      f3, lbl_80518848@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f0, lbl_8051883C@sda21(r2)
	lfd      f2, 0x30(r1)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	fmuls    f28, f31, f0
	bl       pikmin2_cosf__Ff
	fmuls    f30, f28, f1
	fmr      f1, f29
	bl       pikmin2_sinf__Ff
	fmuls    f4, f28, f1
	lfs      f3, lbl_80518770@sda21(r2)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f3, 0xc(r1)
	cmplwi   r3, 0
	stfs     f4, 8(r1)
	stfs     f30, 0x10(r1)
	lfs      f2, 8(r30)
	lfs      f1, 4(r30)
	lfs      f0, 0(r30)
	fadds    f2, f30, f2
	fadds    f1, f3, f1
	fadds    f0, f4, f0
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	beq      lbl_8015FB8C
	lwz      r12, 4(r3)
	addi     r4, r1, 8
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xc(r1)

lbl_8015FB8C:
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_8015FB9C:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_8015FBC8
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FC58

lbl_8015FBC8:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FC3C

lbl_8015FBE8:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FC58
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8015FC3C:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FBE8

lbl_8015FC58:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_8015FA74
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015FCB4
 * Size:	000298
 */
void PikiMgr::forceEnterPikmins(u8)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r31, 0x2c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r30, 0x28(r1)
	stw      r0, 0x1c(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_8015FD08
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FF14

lbl_8015FD08:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FD74

lbl_8015FD20:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FF14
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015FD74:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FD20
	b        lbl_8015FF14

lbl_8015FD94:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FE58
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FE58
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 1
	bne      lbl_8015FE08
	mr       r3, r30
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_8015FE08
	lwz      r0, 0x17c(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	bne      lbl_8015FE58

lbl_8015FE08:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r30)
	lbz      r5, 0x2b9(r30)
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r7, 0(r3)
	lis      r6, __vt__Q24Game15CreatureKillArg@ha
	lis      r5, 0x00010001@ha
	lis      r4, __vt__Q24Game11PikiKillArg@ha
	addi     r0, r7, 1
	addi     r6, r6, __vt__Q24Game15CreatureKillArg@l
	stw      r0, 0(r3)
	addi     r5, r5, 0x00010001@l
	addi     r0, r4, __vt__Q24Game11PikiKillArg@l
	mr       r3, r30
	stw      r6, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8015FE58:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_8015FE84
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FF14

lbl_8015FE84:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FEF8

lbl_8015FEA4:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FF14
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015FEF8:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FEA4

lbl_8015FF14:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_8015FD94
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
 * Address:	8015FF4C
 * Size:	00060C
 */
void PikiMgr::killDayEndPikmins(PikiContainer&)
{
	/*
	stwu     r1, -0x260(r1)
	mflr     r0
	stw      r0, 0x264(r1)
	stfd     f31, 0x250(r1)
	psq_st   f31, 600(r1), 0, qr0
	stfd     f30, 0x240(r1)
	psq_st   f30, 584(r1), 0, qr0
	stfd     f29, 0x230(r1)
	psq_st   f29, 568(r1), 0, qr0
	stfd     f28, 0x220(r1)
	psq_st   f28, 552(r1), 0, qr0
	stmw     r25, 0x204(r1)
	mr       r28, r4
	mr       r25, r3
	mr       r3, r28
	bl       clear__Q24Game13PikiContainerFv
	li       r27, 0
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r0, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r27, 0x68(r1)
	cmplwi   r27, 0
	li       r30, 0
	stw      r0, 0x5c(r1)
	stw      r27, 0x60(r1)
	stw      r25, 0x64(r1)
	bne      lbl_8015FFD0
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160484

lbl_8015FFD0:
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160040

lbl_8015FFEC:
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160484
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)

lbl_80160040:
	lwz      r12, 0x5c(r1)
	addi     r3, r1, 0x5c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FFEC
	b        lbl_80160484

lbl_80160060:
	lwz      r3, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801603C8
	mr       r3, r31
	bl       surviveDayEnd__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801603C8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801603C8
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80160168
	lfs      f0, lbl_80518770@sda21(r2)
	lfs      f1, lbl_80518850@sda21(r2)
	stfs     f0, 0x54(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x58(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x50
	addi     r5, r1, 0x10
	bl       PSMTXMultVec
	lfs      f2, 0x10(r1)
	mr       r4, r31
	lfs      f1, 0x14(r1)
	addi     r3, r1, 0x34
	lfs      f0, 0x18(r1)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x58(r1)
	lfs      f2, 0x34(r1)
	fsubs    f3, f1, f0
	lfs      f1, 0x50(r1)
	lfs      f0, lbl_80518854@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	blt      lbl_801603C8

lbl_80160168:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r29, 0
	cmplwi   r3, 0
	beq      lbl_8016017C
	addi     r3, r3, 0x30

lbl_8016017C:
	li       r0, 0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r0, 0x4c(r1)
	cmplwi   r0, 0
	stw      r4, 0x40(r1)
	stw      r0, 0x44(r1)
	stw      r3, 0x48(r1)
	bne      lbl_801601B8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160240

lbl_801601B8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160224

lbl_801601D0:
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160240
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)

lbl_80160224:
	lwz      r12, 0x40(r1)
	addi     r3, r1, 0x40
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801601D0

lbl_80160240:
	lfs      f31, lbl_805187D0@sda21(r2)
	b        lbl_80160390

lbl_80160248:
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	mr       r26, r3
	mr       r4, r31
	addi     r3, r1, 0x28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r26
	addi     r3, r1, 0x1c
	lwz      r12, 0(r26)
	lfs      f30, 0x28(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x2c(r1)
	lfs      f28, 0x30(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x20(r1)
	lfs      f1, 0x1c(r1)
	fsubs    f2, f0, f29
	lfs      f0, 0x24(r1)
	fsubs    f3, f1, f30
	fsubs    f1, f0, f28
	fmuls    f0, f2, f2
	fmadds   f0, f3, f3, f0
	fmadds   f1, f1, f1, f0
	bl       pikmin2_sqrtf__Ff
	fcmpo    cr0, f1, f31
	bge      lbl_801602D4
	li       r29, 1
	b        lbl_801603B0

lbl_801602D4:
	lwz      r0, 0x4c(r1)
	cmplwi   r0, 0
	bne      lbl_80160300
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160390

lbl_80160300:
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160374

lbl_80160320:
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160390
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)

lbl_80160374:
	lwz      r12, 0x40(r1)
	addi     r3, r1, 0x40
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160320

lbl_80160390:
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x44(r1)
	cmplw    r4, r3
	bne      lbl_80160248

lbl_801603B0:
	clrlwi.  r0, r29, 0x18
	bne      lbl_801603C8
	addi     r3, r1, 0x6c
	addi     r30, r30, 1
	stwx     r31, r3, r27
	addi     r27, r27, 4

lbl_801603C8:
	lwz      r0, 0x68(r1)
	cmplwi   r0, 0
	bne      lbl_801603F4
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160484

lbl_801603F4:
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160468

lbl_80160414:
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160484
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)

lbl_80160468:
	lwz      r12, 0x5c(r1)
	addi     r3, r1, 0x5c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160414

lbl_80160484:
	lwz      r3, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x60(r1)
	cmplw    r4, r3
	bne      lbl_80160060
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r26, r1, 0x6c
	li       r25, 0
	addi     r31, r4, __vt__Q24Game15CreatureKillArg@l
	addi     r27, r3, __vt__Q24Game11PikiKillArg@l
	li       r29, 1
	b        lbl_8016050C

lbl_801604C4:
	li       r3, 1
	bl       inc__Q24Game8DeathMgrFi
	li       r3, 7
	bl       inc__Q24Game8DeathMgrFi
	lwz      r4, 0(r26)
	mr       r3, r28
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r5, 0(r3)
	addi     r4, r1, 8
	addi     r0, r5, 1
	stw      r0, 0(r3)
	lwz      r3, 0(r26)
	stw      r31, 8(r1)
	stw      r29, 0xc(r1)
	stw      r27, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r26, r26, 4
	addi     r25, r25, 1

lbl_8016050C:
	cmpw     r25, r30
	blt      lbl_801604C4
	lis      r4, lbl_8047E138@ha
	mr       r3, r28
	addi     r4, r4, lbl_8047E138@l
	bl       dump__Q24Game13PikiContainerFPc
	psq_l    f31, 600(r1), 0, qr0
	lfd      f31, 0x250(r1)
	psq_l    f30, 584(r1), 0, qr0
	lfd      f30, 0x240(r1)
	psq_l    f29, 568(r1), 0, qr0
	lfd      f29, 0x230(r1)
	psq_l    f28, 552(r1), 0, qr0
	lfd      f28, 0x220(r1)
	lmw      r25, 0x204(r1)
	lwz      r0, 0x264(r1)
	mtlr     r0
	addi     r1, r1, 0x260
	blr
	*/
}

/*
 * --INFO--
 * Address:	80160558
 * Size:	000258
 */
void PikiMgr::killAllPikmins()
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1d4(r1)
	addi     r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	stmw     r26, 0x1b8(r1)
	li       r30, 0
	cmplwi   r30, 0
	li       r31, 0
	stw      r30, 0x1c(r1)
	stw      r0, 0x10(r1)
	stw      r30, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_801605A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160730

lbl_801605A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160614

lbl_801605C0:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160730
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160614:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801605C0
	b        lbl_80160730

lbl_80160634:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160674
	addi     r3, r1, 0x20
	addi     r31, r31, 1
	stwx     r28, r3, r30
	addi     r30, r30, 4

lbl_80160674:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_801606A0
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160730

lbl_801606A0:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160714

lbl_801606C0:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160730
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160714:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801606C0

lbl_80160730:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80160634
	lis      r5, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, 0x00010001@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r27, r1, 0x20
	addi     r28, r5, __vt__Q24Game15CreatureKillArg@l
	addi     r29, r4, 0x00010001@l
	addi     r30, r3, __vt__Q24Game11PikiKillArg@l
	li       r26, 0
	b        lbl_80160794

lbl_80160774:
	stw      r28, 8(r1)
	addi     r4, r1, 8
	lwz      r3, 0(r27)
	stw      r29, 0xc(r1)
	stw      r30, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r27, r27, 4
	addi     r26, r26, 1

lbl_80160794:
	cmpw     r26, r31
	blt      lbl_80160774
	lmw      r26, 0x1b8(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801607B0
 * Size:	0002C8
 */
void PikiMgr::caveSaveFormationPikmins(bool)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1d4(r1)
	addi     r0, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stmw     r25, 0x1b4(r1)
	li       r29, 0
	cmplwi   r29, 0
	mr       r30, r4
	li       r31, 0
	stw      r29, 0x1c(r1)
	stw      r0, 0x10(r1)
	stw      r29, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_80160804
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801609A8

lbl_80160804:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160870

lbl_8016081C:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801609A8
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160870:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016081C
	b        lbl_801609A8

lbl_80160890:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801608EC
	mr       r3, r27
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_801608EC
	lwz      r0, 0x17c(r27)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_801608EC
	addi     r3, r1, 0x20
	addi     r31, r31, 1
	stwx     r27, r3, r29
	addi     r29, r29, 4

lbl_801608EC:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_80160918
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801609A8

lbl_80160918:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8016098C

lbl_80160938:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801609A8
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8016098C:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160938

lbl_801609A8:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80160890
	cmpwi    r31, 0
	bne      lbl_801609DC
	li       r0, 0x7d
	mtctr    r0

lbl_801609D8:
	bdnz     lbl_801609D8

lbl_801609DC:
	lis      r5, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, 0x00010001@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r26, r1, 0x20
	clrlwi   r27, r30, 0x18
	addi     r28, r5, __vt__Q24Game15CreatureKillArg@l
	addi     r30, r4, 0x00010001@l
	addi     r29, r3, __vt__Q24Game11PikiKillArg@l
	li       r25, 0
	b        lbl_80160A48

lbl_80160A04:
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0(r26)
	addi     r3, r3, 0x60
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r4, 0(r3)
	cmplwi   r27, 0
	addi     r0, r4, 1
	stw      r0, 0(r3)
	beq      lbl_80160A40
	stw      r28, 8(r1)
	addi     r4, r1, 8
	lwz      r3, 0(r26)
	stw      r30, 0xc(r1)
	stw      r29, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80160A40:
	addi     r26, r26, 4
	addi     r25, r25, 1

lbl_80160A48:
	cmpw     r25, r31
	blt      lbl_80160A04
	lwz      r5, playData__4Game@sda21(r13)
	lis      r3, lbl_8047E148@ha
	addi     r4, r3, lbl_8047E148@l
	addi     r3, r5, 0x60
	bl       dump__Q24Game13PikiContainerFPc
	lmw      r25, 0x1b4(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80160A78
 * Size:	0002C4
 */
void PikiMgr::caveSaveAllPikmins(bool, bool)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	lis      r6, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1d4(r1)
	addi     r0, r6, "__vt__22Iterator<Q24Game4Piki>"@l
	stmw     r25, 0x1b4(r1)
	li       r28, 0
	cmplwi   r28, 0
	mr       r29, r4
	mr       r30, r5
	li       r31, 0
	stw      r28, 0x1c(r1)
	stw      r0, 0x10(r1)
	stw      r28, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_80160AD0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160C94

lbl_80160AD0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160B3C

lbl_80160AE8:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160C94
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160B3C:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160AE8
	b        lbl_80160C94

lbl_80160B5C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160BD8
	clrlwi.  r0, r30, 0x18
	beq      lbl_80160BA0
	lbz      r0, 0x2b8(r27)
	cmpwi    r0, 5
	beq      lbl_80160BD8

lbl_80160BA0:
	lbz      r0, 0x2b8(r27)
	cmpwi    r0, 5
	bne      lbl_80160BC8
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160BD8

lbl_80160BC8:
	addi     r3, r1, 0x20
	addi     r31, r31, 1
	stwx     r27, r3, r28
	addi     r28, r28, 4

lbl_80160BD8:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_80160C04
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160C94

lbl_80160C04:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160C78

lbl_80160C24:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160C94
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160C78:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160C24

lbl_80160C94:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80160B5C
	lis      r5, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, 0x00010001@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r26, r1, 0x20
	clrlwi   r27, r29, 0x18
	addi     r30, r5, __vt__Q24Game15CreatureKillArg@l
	addi     r29, r4, 0x00010001@l
	addi     r28, r3, __vt__Q24Game11PikiKillArg@l
	li       r25, 0
	b        lbl_80160D20

lbl_80160CDC:
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0(r26)
	addi     r3, r3, 0x60
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r4, 0(r3)
	cmplwi   r27, 0
	addi     r0, r4, 1
	stw      r0, 0(r3)
	beq      lbl_80160D18
	stw      r30, 8(r1)
	addi     r4, r1, 8
	lwz      r3, 0(r26)
	stw      r29, 0xc(r1)
	stw      r28, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80160D18:
	addi     r26, r26, 4
	addi     r25, r25, 1

lbl_80160D20:
	cmpw     r25, r31
	blt      lbl_80160CDC
	lmw      r25, 0x1b4(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000290
 */
void PikiMgr::saveFormationPikmins(PikiContainer&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80160D3C
 * Size:	0002A8
 */
void PikiMgr::saveAllPikmins(PikiContainer&)
{
	/*
	stwu     r1, -0x1c0(r1)
	mflr     r0
	stw      r0, 0x1c4(r1)
	stw      r31, 0x1bc(r1)
	stw      r30, 0x1b8(r1)
	mr       r30, r4
	stw      r29, 0x1b4(r1)
	stw      r28, 0x1b0(r1)
	mr       r28, r3
	mr       r3, r30
	bl       clear__Q24Game13PikiContainerFv
	li       r29, 0
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r0, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r29, 0x14(r1)
	cmplwi   r29, 0
	li       r31, 0
	stw      r0, 8(r1)
	stw      r29, 0xc(r1)
	stw      r28, 0x10(r1)
	bne      lbl_80160DAC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160F60

lbl_80160DAC:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160E1C

lbl_80160DC8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160F60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80160E1C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160DC8
	b        lbl_80160F60

lbl_80160E3C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r28, r3
	cmpwi    r0, 5
	bne      lbl_80160E78
	lwz      r12, 0(r3)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160EA4

lbl_80160E78:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160EA4
	addi     r3, r1, 0x18
	addi     r31, r31, 1
	stwx     r28, r3, r29
	addi     r29, r29, 4

lbl_80160EA4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80160ED0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160F60

lbl_80160ED0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160F44

lbl_80160EF0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160F60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80160F44:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160EF0

lbl_80160F60:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80160E3C
	addi     r28, r1, 0x18
	li       r29, 0
	b        lbl_80160FAC

lbl_80160F8C:
	lwz      r4, 0(r28)
	mr       r3, r30
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r4, 0(r3)
	addi     r28, r28, 4
	addi     r29, r29, 1
	addi     r0, r4, 1
	stw      r0, 0(r3)

lbl_80160FAC:
	cmpw     r29, r31
	blt      lbl_80160F8C
	lis      r4, lbl_8047E164@ha
	mr       r3, r30
	addi     r4, r4, lbl_8047E164@l
	bl       dump__Q24Game13PikiContainerFPc
	lwz      r0, 0x1c4(r1)
	lwz      r31, 0x1bc(r1)
	lwz      r30, 0x1b8(r1)
	lwz      r29, 0x1b4(r1)
	lwz      r28, 0x1b0(r1)
	mtlr     r0
	addi     r1, r1, 0x1c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80160FE4
 * Size:	0000B8
 */
PikiMgr::~PikiMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80161080
	lis      r4, __vt__Q24Game7PikiMgr@ha
	addi     r4, r4, __vt__Q24Game7PikiMgr@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80161070
	lis      r4, "__vt__27MonoObjectMgr<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__27MonoObjectMgr<Q24Game4Piki>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80161070
	lis      r4, "__vt__23ObjectMgr<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__23ObjectMgr<Q24Game4Piki>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80161070
	lis      r4, "__vt__23Container<Q24Game4Piki>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Piki>"@l
	stw      r0, 0(r30)
	beq      lbl_80161070
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80161070:
	extsh.   r0, r31
	ble      lbl_80161080
	mr       r3, r30
	bl       __dl__FPv

lbl_80161080:
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
 * Address:	8016109C
 * Size:	000008
 */
char* PikiMgr::getMgrName() { return "PikiMgr"; }

/*
 * --INFO--
 * Address:	801610A4
 * Size:	000008
 */
u32 PikiMgr::getMatrixLoadType() { return 0x1; }

/*
 * --INFO--
 * Address:	801610AC
 * Size:	000004
 */
void PikiMgr::loadResources() { }

} // namespace Game

/*
 * --INFO--
 * Address:	801611A8
 * Size:	000030
 */
void Delegate1<Game::PikiMgr, SysShape::Model*>::invoke(SysShape::Model*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	addi     r12, r5, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161238
 * Size:	000040
 */
void* MonoObjectMgr<Game::Piki>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_80161270

lbl_80161250:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_80161268
	mr       r3, r6
	blr

lbl_80161268:
	addi     r6, r6, 1
	bdnz     lbl_80161250

lbl_80161270:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161278
 * Size:	000030
 */
void* MonoObjectMgr<Game::Piki>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801612A8
 * Size:	000008
 */
void* MonoObjectMgr<Game::Piki>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801612B0
 * Size:	000008
 */
int MonoObjectMgr<Game::Piki>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801612B8
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80161310

lbl_801612E0:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161308
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_80161308:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_80161310:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801612E0
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
 * Address:	80161338
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80161390

lbl_80161360:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161388
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_80161388:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_80161390:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80161360
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
 * Address:	801613B8
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8016141C

lbl_801613E8:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161414
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_80161414:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_8016141C:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_801613E8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161448
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801614A0

lbl_80161470:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161498
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl

lbl_80161498:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_801614A0:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80161470
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
 * Address:	801614C8
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	li       r30, 0
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_8016152C

lbl_801614F8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161524
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_80161524:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_8016152C:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801614F8
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161558
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801615BC

lbl_80161588:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801615B4
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_801615B4:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_801615BC:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_80161588
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161600
 * Size:	000030
 */
void MonoObjectMgr<Game::Piki>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_80161620

lbl_80161614:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_80161620:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_80161614
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016166C
 * Size:	000010
 */
Game::Piki* MonoObjectMgr<Game::Piki>::get(void*)
{
	/*
	mulli    r0, r4, 0x2c8
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016167C
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801616C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161830

lbl_801616C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161730

lbl_801616DC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161830
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161730:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801616DC
	b        lbl_80161830

lbl_80161750:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801617A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161830

lbl_801617A0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161814

lbl_801617C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161830
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161814:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801617C0

lbl_80161830:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161750
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161860
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801618A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161A14

lbl_801618A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161914

lbl_801618C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161A14
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161914:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801618C0
	b        lbl_80161A14

lbl_80161934:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80161984
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161A14

lbl_80161984:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801619F8

lbl_801619A4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161A14
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801619F8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801619A4

lbl_80161A14:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161934
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161A44
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80161A94
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161C04

lbl_80161A94:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161B00

lbl_80161AAC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161C04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161B00:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161AAC
	b        lbl_80161C04

lbl_80161B20:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80161B74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161C04

lbl_80161B74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161BE8

lbl_80161B94:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161C04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161BE8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161B94

lbl_80161C04:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161B20
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161C38
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80161C80
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161DEC

lbl_80161C80:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161CEC

lbl_80161C98:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161DEC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161CEC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161C98
	b        lbl_80161DEC

lbl_80161D0C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80161D5C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161DEC

lbl_80161D5C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161DD0

lbl_80161D7C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161DEC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161DD0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161D7C

lbl_80161DEC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161D0C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161E1C
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80161E6C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161FDC

lbl_80161E6C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161ED8

lbl_80161E84:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161FDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161ED8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161E84
	b        lbl_80161FDC

lbl_80161EF8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80161F4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161FDC

lbl_80161F4C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161FC0

lbl_80161F6C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80161FDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161FC0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161F6C

lbl_80161FDC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161EF8
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162010
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80162060
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801621D0

lbl_80162060:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801620CC

lbl_80162078:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801621D0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801620CC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80162078
	b        lbl_801621D0

lbl_801620EC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80162140
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801621D0

lbl_80162140:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801621B4

lbl_80162160:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801621D0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801621B4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80162160

lbl_801621D0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801620EC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162204
 * Size:	00002C
 */
void* Container<Game::Piki>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162230
 * Size:	000008
 */
Game::Piki* Container<Game::Piki>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80162238
 * Size:	000008
 */
int Container<Game::Piki>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	80162240
 * Size:	00009C
 */
MonoObjectMgr<Game::Piki>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__23Container<Q24Game4Piki>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__23Container<Q24Game4Piki>"@l
	lis      r4, "__vt__23ObjectMgr<Q24Game4Piki>"@ha
	lis      r3, "__vt__27MonoObjectMgr<Q24Game4Piki>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__23ObjectMgr<Q24Game4Piki>"@l
	addi     r5, r3, "__vt__27MonoObjectMgr<Q24Game4Piki>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
