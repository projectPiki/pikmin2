#include "Game/PikiMgr.h"
#include "Game/Entities/ItemPikihead.h"
#include "SysShape/ModelMgr.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DTransform.h"
#include "PSSystem/PSSystemIF.h"
#include "Game/MoviePlayer.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"
#include "Game/gamePlayData.h"
#include "Game/DeathMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "nans.h"

namespace Game {

static const int unusedPikiMgrArray[] = { 0, 0, 0 };

bool PikiMgr::throwPikiDebug;
PikiMgr* pikiMgr;
int PikiMgr::mBirthMode;

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
	JUT_PANICLINE(0, "who use this ??\n");

	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015E68C
 * Size:	000038
 */
void PikiMgr::resetMgr()
{
	MonoObjectMgr::resetMgr(); // should be MonoObjectMgr::resetMgr
	mDopedPikis = 0;
	mFlags[0]   = 0;
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
		int pikiCount   = mActiveCount;
		int sproutCount = 0;
		if (ItemPikihead::mgr) {
			sproutCount = ItemPikihead::mgr->mMonoObjectMgr.mActiveCount;
		}
		if (pikiCount + sproutCount < 100) {
			break;
		}
		return nullptr;
	}

	case 1:
		return MonoObjectMgr::birth();

	case 2: {
		int pikiCount   = mActiveCount;
		int sproutCount = 0;
		if (ItemPikihead::mgr) {
			sproutCount = ItemPikihead::mgr->mMonoObjectMgr.mActiveCount;
		}
		Piki* piki = nullptr;
		if (pikiCount + sproutCount < 100) {
			piki = MonoObjectMgr::birth();
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

				return MonoObjectMgr::birth();
			} else {
				return nullptr;
			}

		} else {
			return piki;
		}
	}
	}
	return MonoObjectMgr::birth();
}

/*
 * --INFO--
 * Address:	8015EABC
 * Size:	0000CC
 */
void PikiMgr::loadResources(int modelFlag)
{
	void* file
	    = JKRDvdRipper::loadToMainRAM("user/Abe/piki/pikiParms.txt", 0, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (file) {
		RamStream stream(file, -1);
		stream.resetPosition(true, 1);
		mParms->read(stream);
		delete[] file;
	}
	load(modelFlag);
}

/*
 * --INFO--
 * Address:	8015EBD8
 * Size:	000298
 */
void PikiMgr::load(int modelFlag)
{
	JKRHeap* heap = JKRGetCurrentHeap();
	heap->getFreeSize();
	JKRArchive* arc = JKRArchive::mount("/user/Kando/piki/pikis.szs", JKRArchive::EMM_Mem, sys->mSysHeap, JKRArchive::EMD_Head);
	mModelArchive   = arc;
	heap->getFreeSize();
	JUT_ASSERTLINE(450, arc, "pikis.szs not found !\n");
	loadBmd(Blue, "piki_p2_blue");
	loadBmd(Red, "piki_p2_red");
	loadBmd(Yellow, "piki_p2_yellow");
	loadBmd(White, "piki_p2_white");
	loadBmd(Purple, "piki_p2_black");
	loadBmd(Bulbmin, "piki_kochappy");
	loadBmd(Carrot, "piki_ninjin");

	mHappaModel[0] = J3DModelLoaderDataBase::load(arc->getResource("happa_model/leaf.bmd"), 0x20000000);
	mHappaModel[1] = J3DModelLoaderDataBase::load(arc->getResource("happa_model/bud.bmd"), 0x240000);
	mHappaModel[2] = J3DModelLoaderDataBase::load(arc->getResource("happa_model/flower.bmd"), 0x240000);
	mHappaModel[3] = J3DModelLoaderDataBase::load(arc->getResource("happa_model/bud_red.bmd"), 0x240000);
	mHappaModel[4] = J3DModelLoaderDataBase::load(arc->getResource("happa_model/flower_red.bmd"), 0x240000);

	sys->heapStatusStart("pikmin-ModelMgr", nullptr);
	mModelMgr = new SysShape::ModelMgr(PikiColorCount, &mBluPikiModel, 100, 0x20000, modelFlag,
	                                   new Delegate1<PikiMgr, SysShape::Model*>(this, createModelCallback));
	sys->heapStatusEnd("pikmin-ModelMgr");

	for (int i = 0; i < 5; i++) {
		J3DModelData* model = mHappaModel[i];
		model->newSharedDisplayList(0x40000);
		model->simpleCalcMaterial(0, j3dDefaultMtx);
		model->makeSharedDL();
	}

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
void PikiMgr::loadBmd(int id, char* name)
{
	char pathbuf[256];
	sprintf(pathbuf, "piki_model/%s.bmd", name);
	J3DModelData* data = J3DModelLoaderDataBase::load(mModelArchive->getResource(pathbuf), 0x60010);
	data->newSharedDisplayList(0x40000);
	data->makeSharedDL();
	(&mBluPikiModel)[id] = data;
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
SysShape::Model* PikiMgr::createModel(int id, int num) { return mModelMgr->createModel(id, num); }

/*
 * --INFO--
 * Address:	8015EF78
 * Size:	000008
 */
SysShape::Model* PikiMgr::createLeafModel(int id, int num) { return nullptr; }

/*
 * --INFO--
 * Address:	8015EF80
 * Size:	000280
 */
void PikiMgr::setMovieDraw(bool drawOn)
{
	if (!drawOn) {
		mFlags[1] |= 1;
	} else {
		mFlags[1] &= ~1;
	}

	for (int i = 0; i < mMax; i++) {
		if (!mOpenIds[i]) {
			if (!mArray[i].isMovieActor()) {
				if (drawOn) {
					mArray[i].mEffectsObj->setMovieDraw();
				} else {
					mArray[i].mEffectsObj->clear();
				}
			}
		}
	}
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
void PikiMgr::debugShapeDL(char* text)
{
	for (int i = 0; i < mMax; i++) {
		if (!mOpenIds[i]) {
			mArray[i].debugShapeDL(text);
		}
	}
}

/*
 * --INFO--
 * Address:	8015F284
 * Size:	000198
 */
void PikiMgr::doSimpleDraw(Viewport* vp)
{
	for (int i = 0; i < 5; i++) {
		J3DModelData& modelData = *mHappaModel[i];
		J3DMaterial* mat        = modelData.mJointTree.mRootNode->mMaterial;
		j3dSys.mVtxPos          = modelData.getVertexData()->getVtxPosArray();
		j3dSys.mVtxNorm         = modelData.getVertexData()->getVtxNrmArray();
		j3dSys.mVtxColor        = modelData.getVertexData()->getVtxColorArray(0);
		J3DShape::sOldVcdVatCmd = nullptr;
		for (mat; mat != nullptr; mat = mat->mNext) {
			mat->loadSharedDL();
			mat->mShape->loadPreDrawSetting();
			for (int j = 0; j < mMax; j++) {
				if (!mOpenIds[j]) {
					Piki* piki = &mArray[j];
					if (piki->mLod.mFlags & 4) {
						if (!piki->doped() && piki->mLod.mFlags & 0x10) {
							int id = piki->getHappa();
							// make purple and white pikmin use the red flower/bud
							if ((piki->getKind() == Purple || piki->getKind() == White) && id != 0) {
								id += 2;
							}
							if (i == id) {
								Matrixf* mtx  = piki->mLeafStemJoint->getWorldMatrix();
								Matrixf* mtx2 = vp->getMatrix(1);
								Mtx test;
								PSMTXConcat(mtx->mMatrix.mtxView, mtx2->mMatrix.mtxView, test);
								GXLoadPosMtxImm(test, 0);
								GXLoadPosMtxImm(test, 0);
								mat->mShape->simpleDrawCache();
							}
						}
					}
				}
			}
		}
	}
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
	sys->mTimers->_start("doaPIKI", true);
	mUpdateMgr2->update();
	if (mFlags[1] & 1) {
		for (int i = 0; i < mMax; i++) {
			if (!mOpenIds[i]) {
				if (mArray[i].isMovieActor()) {
					mArray[i].mFaceDirOffset = mArray[i].mFaceDir;
					mArray[i].update();
					if (!mOpenIds[i]) {
						mArray[i].doAnimation();
					}
				}
			}
		}
	} else {
		for (int i = 0; i < mMax; i++) {
			if (!mOpenIds[i]) {
				mArray[i].mFaceDirOffset = mArray[i].mFaceDir;
				mArray[i].update();
				if (!mOpenIds[i]) {
					mArray[i].doAnimation();
				}
			}
		}
	}

	if (mDopedPikis > 0 && gameSystem && gameSystem->isFlag(GAMESYS_IsGameWorldActive) && moviePlayer->mDemoState == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PK_UNDER_DOPING, 0);
	}
	sys->mTimers->_stop("doaPIKI");
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
	if (gameSystem->isVersusMode()) {
		u8 flag = mFlags[1];
		for (int i = 0; i < mMax; i++) {
			if (!mOpenIds[i]) {
				if (flag & 1 || mArray[i].isMovieActor()) {
					mArray[i].mLod.mFlags &= ~0x30;
				} else {
					mArray[i].isMovieActor();
				}

				// Hide blue or red pikmin if the ghost power is active
				Piki* piki = &mArray[i];
				if (piki->getKind() == Blue && mFlags[0] & 1) {
					piki->mLod.mFlags &= ~0x10;
				} else if (piki->getKind() == Red && mFlags[0] & 2) {
					piki->mLod.mFlags &= ~0x10;
				}
				mArray[i].doEntry();
			}
		}
	} else {
		u8 flag = mFlags[1];
		for (int i = 0; i < mMax; i++) {
			if (!mOpenIds[i]) {
				if (flag & 1 || mArray[i].isMovieActor()) {
					mArray[i].mLod.mFlags &= ~0x30;
				} else {
					mArray[i].isMovieActor();
				}
				mArray[i].doEntry();
			}
		}
	}
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
	mStoredPikis = new s32[PikiColorCount * PikiGrowthStageCount];
	clearStorePikmins();
}

/*
 * --INFO--
 * Address:	8015F8FC
 * Size:	00006C
 */
void PikiMgr::clearStorePikmins()
{
	for (int i = 0; i < (PikiColorCount * PikiGrowthStageCount); i++) {
		mStoredPikis[i] = 0;
	}
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
void PikiMgr::moveAllPikmins(Vector3f& pos, f32 range, Condition<Piki>* cond)
{
	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->mFlags.isSet(2) && (!cond || cond->satisfy(piki))) {
			f32 angle = randFloat() * TAU;
			f32 dist  = randFloat() * range;
			f32 x     = cos(angle) * dist;
			f32 y     = 0.0f;
			f32 z     = sin(angle) * dist;
			Vector3f setpos(pos.x + x, pos.y + y, pos.z + z);
			if (mapMgr) {
				setpos.y = mapMgr->getMinY(setpos);
			}
			piki->setPosition(setpos, false);
		}
	}
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
void PikiMgr::forceEnterPikmins(u8 check)
{
	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive() && !piki->isZikatu()
		    && (check != true || (piki->getCurrActionID() != 0 || !(piki->mFakePikiFlags.typeView & 0x40)))) {
			playData->mPikiContainer.getCount(piki->getKind(), piki->getHappa())++;
			PikiKillArg arg(0x10001);
			piki->kill(&arg);
		}
	}
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
void PikiMgr::killDayEndPikmins(PikiContainer& container)
{
	container.clear();

	Iterator<Piki> iterator(this);
	int i = 0;
	Piki* list[100];
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive() && !piki->surviveDayEnd() && !piki->isZikatu()) {
			if (mapMgr->getDemoMatrix()) {
				Vector3f offset(33.0f, 0.0f, 0.0f);
				Matrixf* mtx = mapMgr->getDemoMatrix();
				Vector3f out;
				PSMTXMultVec(mtx->mMatrix.mtxView, (Vec*)&offset, (Vec*)&out);
				Vector3f pos = piki->getPosition();
				if (sqrDistanceXZ(pos, out) < 139876.0f) {
					continue;
				}
			}
			bool safe = false;
			Iterator<Onyon> onyons(ItemOnyon::mgr);
			CI_LOOP(onyons)
			{
				Onyon* onyon      = *onyons;
				Vector3f pikipos  = piki->getPosition();
				Vector3f onyonpos = onyon->getPosition();
				if (pikipos.distance(onyonpos) < 300.0f) {
					safe = true;
				}
			}
			if (safe)
				list[i++] = piki;
		}
	}

	for (int j = 0; j < i; j++) {
		deathMgr->inc(1);
		deathMgr->inc(7);
		container(list[j])++;
		PikiKillArg arg(1);
		list[j]->kill(&arg);
	}
	container.dump("PikiContainer");
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
	Iterator<Piki> iterator(this);
	int i = 0;
	Piki* list[100];
	CI_LOOP(iterator)
	{

		Piki* piki = *iterator;
		if (piki->isAlive()) {
			list[i++] = piki;
		}
	}

	for (int j = 0; j < i; j++) {
		PikiKillArg arg(0x10001);
		list[j]->kill(&arg);
	}
}

/*
 * --INFO--
 * Address:	801607B0
 * Size:	0002C8
 */
void PikiMgr::caveSaveFormationPikmins(bool doKill)
{
	Iterator<Piki> iterator(this);
	int i = 0;
	Piki* list[100];
	CI_LOOP(iterator)
	{

		Piki* piki = *iterator;
		if (piki->isAlive() && (piki->getCurrActionID() != 0 || (piki->mFakePikiFlags.typeView & 0x40))) {
			list[i++] = piki;
		}
	}

	for (int j = 0; j < i; j++) {
		playData->mCaveSaveData.mCavePikis(list[j])++;
		if (doKill) {
			PikiKillArg arg(0x10001);
			list[j]->kill(&arg);
		}
	}

	playData->mCaveSaveData.mCavePikis.dump("caveSaveFormationPikmins");
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
void PikiMgr::caveSaveAllPikmins(bool check1, bool check2)
{
	Iterator<Piki> iterator(this);
	int i = 0;
	Piki* list[100];
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive() && (!check2 || piki->getKind() != Bulbmin) && (piki->getKind() != Bulbmin || piki->isPikmin())) {
			list[i++] = piki;
		}
	}

	for (int j = 0; j < i; j++) {
		playData->mCaveSaveData.mCavePikis(list[j])++;
		if (check1) {
			PikiKillArg arg(0x10001);
			list[j]->kill(&arg);
		}
	}
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
void PikiMgr::saveAllPikmins(PikiContainer& container)
{
	container.clear();
	Iterator<Piki> iterator(this);
	int i = 0;
	Piki* list[100];
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (((int)piki->getKind() != Bulbmin || piki->isPikmin()) && piki->isAlive()) {
			list[i++] = piki;
		}
	}

	for (int j = 0; j < i; j++) {
		container(list[j])++;
	}
	container.dump("saveAllPikmins");
}

} // namespace Game
