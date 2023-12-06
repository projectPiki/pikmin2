#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPANode.h"
#include "JSystem/JMath.h"

/*
 * --INFO--
 * Address:	80090538
 * Size:	0001FC
 */
JPAEmitterManager::JPAEmitterManager(u32 ptclNum, u32 emtrNum, JKRHeap* heap, u8 groups, u8 resnum)
{
	mEmtrMax = emtrNum;
	mPtclMax = ptclNum;
	mGrpMax  = groups;
	mResMax  = resnum;

	JPABaseEmitter* emitters = new (heap, 0) JPABaseEmitter[mEmtrMax]; // JPABaseEmitter ctor needs GXColor instead of TColor to match
	for (int i = 0; i < mEmtrMax; i++) {
		mFreeEmtrList.prepend(&emitters[i].mLink);
	}

	JPANode<JPABaseParticle>* nodes = new (heap, 0) JPANode<JPABaseParticle>[mPtclMax];
	for (int i = 0; i < mPtclMax; i++) {
		mPtclPool.push_back(&nodes[i]);
	}

	mGrpEmtr   = new (heap, 0) JSUList<JPABaseEmitter>[mGrpMax];
	mResMgrAry = new (heap, 0) JPAResourceManager*[mResMax];
	for (int i = 0; i < mResMax; i++) {
		mResMgrAry[i] = nullptr;
	}

	mWorkData = new (heap, 0) JPAEmitterWorkData;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
// JPARandom::~JPARandom()
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
// JPABaseParticle::~JPABaseParticle()
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// JSULink<JPABaseEmitter>::~JSULink()
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
// JPAList<JPABaseParticle>::~JPAList()
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	800908BC
 * Size:	0000DC
 */
JPABaseEmitter* JPAEmitterManager::createSimpleEmitterID(const JGeometry::TVec3f& pos, u16 resID, u8 groupID, u8 resMgrID,
                                                         JPAEmitterCallBack* ecback, JPAParticleCallBack* pcback)
{
	JPAResource* res = mResMgrAry[resMgrID]->getResource(resID);

	if (res && mFreeEmtrList.mLinkCount) {
		JSULink<JPABaseEmitter>* link = mFreeEmtrList.getFirst();
		mFreeEmtrList.remove(link);
		mGrpEmtr[groupID].append(link);

		JPABaseEmitter* emit = link->getObject();
		emit->init(this, res);
		emit->mPtclPool         = &mPtclPool;
		emit->mEmitterCallback  = ecback;
		emit->mParticleCallback = pcback;
		emit->mGroupID          = groupID;
		emit->mResMgrID         = resMgrID;
		emit->mGlobalTrs        = pos;
		return emit;
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JPAEmitterManager::createSimpleEmitter(const JGeometry::TVec3f&, u16, JPAEmitterCallBack*, JPAParticleCallBack*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JPAEmitterManager::calc(u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090998
 * Size:	0000B0
 */
void JPAEmitterManager::calc()
{
	for (u8 i = 0; i < mGrpMax; i++) {
		JSUPtrLink* link = mGrpEmtr[i].getFirst();
		while (link) {
			JPABaseEmitter* emit = (JPABaseEmitter*)link->getObjectPtr();
			link                 = link->getNext();
			bool stat            = emit->mResource->calc(mWorkData, emit);
			if (stat && !emit->isFlag(0x200)) {
				forceDeleteEmitter(emit);
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
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_80090A18

lbl_800909C0:
	clrlwi   r0, r29, 0x18
	lwz      r3, 0(r28)
	mulli    r0, r0, 0xc
	lwzx     r31, r3, r0
	b        lbl_80090A0C

lbl_800909D4:
	lwz      r30, 0(r31)
	lwz      r31, 0xc(r31)
	lwz      r3, 0xe8(r30)
	mr       r5, r30
	lwz      r4, 0x20(r28)
	bl       calc__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter
	clrlwi.  r0, r3, 0x18
	beq      lbl_80090A0C
	lwz      r0, 0xf4(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80090A0C
	mr       r3, r28
	mr       r4, r30
	bl       forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter

lbl_80090A0C:
	cmplwi   r31, 0
	bne      lbl_800909D4
	addi     r29, r29, 1

lbl_80090A18:
	lbz      r0, 0x2c(r28)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_800909C0
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
 * Address:	80090A48
 * Size:	000200
 */
void JPAEmitterManager::draw(const JPADrawInfo* info, u8 id)
{
	PSMTXCopy(info->mtx1, mWorkData->mPosCamMtx);
	PSMTXCopy(info->mtx2, mWorkData->mPrjMtx);
	calcYBBCam();
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXEnableTexOffsets(GX_TEXCOORD0, GX_TRUE, GX_TRUE);
	GXEnableTexOffsets(GX_TEXCOORD1, GX_TRUE, GX_TRUE);
	GXEnableTexOffsets(GX_TEXCOORD2, GX_TRUE, GX_TRUE);
	GXSetCullMode(GX_CULL_NONE);
	GXSetCoPlanar(GX_FALSE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_INDEX8);
	GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT1, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT1, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
	GXSetCurrentMtx(0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetChanCtrl(GX_COLOR1A1, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetNumChans(0);

	JSUPtrLink* link = mGrpEmtr[id].mHead;
	while (link) {
		JPABaseEmitter* emit = (JPABaseEmitter*)link->getObjectPtr();
		if (!emit->isFlag(0x4)) {
			mWorkData->mResourceMgr = mResMgrAry[emit->mResMgrID];
			emit->mResource->draw(mWorkData, emit);
		}
		link = link->getNext();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JPAEmitterManager::draw(float (*)[4], u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JPAEmitterManager::draw(const JPADrawInfo*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JPAEmitterManager::draw(float (*)[4])
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090C48
 * Size:	000058
 */
void JPAEmitterManager::forceDeleteAllEmitter()
{
	for (u8 i = 0; i < mGrpMax; i++) {
		forceDeleteGroupEmitter(i);
	}
}

/*
 * --INFO--
 * Address:	80090CA0
 * Size:	000060
 */
void JPAEmitterManager::forceDeleteGroupEmitter(u8 grp)
{
	while (mGrpEmtr[grp].mLinkCount) {
		forceDeleteEmitter((JPABaseEmitter*)mGrpEmtr[grp].mTail->getObjectPtr());
	}
}

/*
 * --INFO--
 * Address:	80090D00
 * Size:	00006C
 */
void JPAEmitterManager::forceDeleteEmitter(JPABaseEmitter* emit)
{
	emit->deleteAllParticle();
	emit->setFlag(0x300);
	mGrpEmtr[emit->mGroupID].remove(&emit->mLink);
	mFreeEmtrList.prepend(&emit->mLink);
}

/*
 * --INFO--
 * Address:	80090D6C
 * Size:	000010
 */
void JPAEmitterManager::entryResourceManager(JPAResourceManager* mgr, u8 grpID) { mResMgrAry[grpID] = mgr; }

/*
 * --INFO--
 * Address:	80090D7C
 * Size:	0000C8
 */
void JPAEmitterManager::clearResourceManager(u8 id)
{
	for (u8 i = 0; i < mGrpMax; i++) {
		JSUPtrLink* link = mGrpEmtr[i].mHead;
		while (link) {
			JPABaseEmitter* emit = (JPABaseEmitter*)link->getObjectPtr();
			link                 = link->getNext();
			if (id == emit->getResourceManagerID()) {
				forceDeleteEmitter(emit);
			}
		}
	}
	mResMgrAry[id] = nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r4
	mr       r26, r3
	clrlwi   r31, r4, 0x18
	li       r28, 0
	b        lbl_80090E10

lbl_80090DA0:
	clrlwi   r0, r28, 0x18
	lwz      r3, 0(r26)
	mulli    r0, r0, 0xc
	lwzx     r3, r3, r0
	b        lbl_80090E04

lbl_80090DB4:
	lwz      r29, 0(r3)
	lwz      r30, 0xc(r3)
	lbz      r0, 0x113(r29)
	cmplw    r31, r0
	bne      lbl_80090E00
	mr       r3, r29
	bl       deleteAllParticle__14JPABaseEmitterFv
	lwz      r0, 0xf4(r29)
	addi     r4, r29, 0x58
	ori      r0, r0, 0x300
	stw      r0, 0xf4(r29)
	lbz      r0, 0x112(r29)
	lwz      r3, 0(r26)
	mulli    r0, r0, 0xc
	add      r3, r3, r0
	bl       remove__10JSUPtrListFP10JSUPtrLink
	addi     r3, r26, 4
	addi     r4, r29, 0x58
	bl       prepend__10JSUPtrListFP10JSUPtrLink

lbl_80090E00:
	mr       r3, r30

lbl_80090E04:
	cmplwi   r3, 0
	bne      lbl_80090DB4
	addi     r28, r28, 1

lbl_80090E10:
	lbz      r0, 0x2c(r26)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_80090DA0
	lwz      r3, 0x1c(r26)
	rlwinm   r0, r27, 2, 0x16, 0x1d
	li       r4, 0
	stwx     r4, r3, r0
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090E44
 * Size:	0000E8
 */
void JPAEmitterManager::calcYBBCam()
{
	/*
	lwz      r5, 0x20(r3)
	lis      r4, __float_epsilon@ha
	lfs      f3, lbl_80516BB8@sda21(r2)
	lfs      f4, 0x198(r5)
	lfs      f5, 0x1a8(r5)
	fmadds   f2, f4, f4, f3
	lfs      f1, lbl_80516BBC@sda21(r2)
	lfs      f0, __float_epsilon@l(r4)
	fmadds   f6, f5, f5, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f6, f0
	cror     2, 0, 2
	beq      lbl_80090EB0
	fcmpo    cr0, f6, f3
	cror     2, 0, 2
	bne      lbl_80090E88
	b        lbl_80090EA8

lbl_80090E88:
	frsqrte  f3, f6
	lfs      f2, lbl_80516BC0@sda21(r2)
	lfs      f0, lbl_80516BC4@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f6, f1, f0
	fmuls    f6, f2, f0

lbl_80090EA8:
	fmuls    f4, f4, f6
	fmuls    f5, f5, f6

lbl_80090EB0:
	lfs      f1, lbl_80516BC8@sda21(r2)
	fneg     f0, f5
	lwz      r4, 0x20(r3)
	lfs      f2, lbl_80516BB8@sda21(r2)
	stfs     f1, 0x154(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x158(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x15c(r4)
	lwz      r4, 0x20(r3)
	lfs      f1, 0x190(r4)
	stfs     f1, 0x160(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x164(r4)
	lwz      r4, 0x20(r3)
	stfs     f4, 0x168(r4)
	lwz      r4, 0x20(r3)
	stfs     f0, 0x16c(r4)
	lwz      r4, 0x20(r3)
	lfs      f0, 0x1a0(r4)
	stfs     f0, 0x170(r4)
	lwz      r4, 0x20(r3)
	stfs     f2, 0x174(r4)
	lwz      r4, 0x20(r3)
	stfs     f5, 0x178(r4)
	lwz      r4, 0x20(r3)
	stfs     f4, 0x17c(r4)
	lwz      r3, 0x20(r3)
	lfs      f0, 0x1b0(r3)
	stfs     f0, 0x180(r3)
	blr
	*/
}
