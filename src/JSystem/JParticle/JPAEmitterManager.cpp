#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPANode.h"
#include "JSystem/JMath.h"

/**
 * @note Address: 0x80090538
 * @note Size: 0x1FC
 */
JPAEmitterManager::JPAEmitterManager(u32 ptclNum, u32 emtrNum, JKRHeap* heap, u8 groups, u8 resnum)
{
	mEmtrMax = emtrNum;
	mPtclMax = ptclNum;
	mGrpMax  = groups;
	mResMax  = resnum;

	JPABaseEmitter* emitters = new (heap, 0) JPABaseEmitter[mEmtrMax];
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

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
// JPARandom::~JPARandom()
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
// JPABaseParticle::~JPABaseParticle()
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// JSULink<JPABaseEmitter>::~JSULink()
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
// JPAList<JPABaseParticle>::~JPAList()
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: 0x800908BC
 * @note Size: 0xDC
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

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void JPAEmitterManager::createSimpleEmitter(const JGeometry::TVec3f&, u16, JPAEmitterCallBack*, JPAParticleCallBack*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void JPAEmitterManager::calc(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80090998
 * @note Size: 0xB0
 */
void JPAEmitterManager::calc()
{
	JSUPtrLink* link;
	JPABaseEmitter* emit;
	for (u8 i = 0; i < mGrpMax; i++) {
		link = mGrpEmtr[i].getFirst();
		while (link) {
			emit      = (JPABaseEmitter*)link->getObjectPtr();
			link      = link->getNext();
			bool stat = emit->mResource->calc(mWorkData, emit);
			if (stat && !emit->isFlag(JPAEMIT_Unk10)) {
				forceDeleteEmitter(emit);
			}
		}
	}
}

/**
 * @note Address: 0x80090A48
 * @note Size: 0x200
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
		if (!emit->isFlag(JPAEMIT_StopDraw)) {
			mWorkData->mResourceMgr = mResMgrAry[emit->mResMgrID];
			emit->mResource->draw(mWorkData, emit);
		}
		link = link->getNext();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void JPAEmitterManager::draw(f32 (*)[4], u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void JPAEmitterManager::draw(const JPADrawInfo*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void JPAEmitterManager::draw(f32 (*)[4])
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80090C48
 * @note Size: 0x58
 */
void JPAEmitterManager::forceDeleteAllEmitter()
{
	for (u8 i = 0; i < mGrpMax; i++) {
		forceDeleteGroupEmitter(i);
	}
}

/**
 * @note Address: 0x80090CA0
 * @note Size: 0x60
 */
void JPAEmitterManager::forceDeleteGroupEmitter(u8 grp)
{
	while (mGrpEmtr[grp].mLinkCount) {
		forceDeleteEmitter((JPABaseEmitter*)mGrpEmtr[grp].mTail->getObjectPtr());
	}
}

/**
 * @note Address: 0x80090D00
 * @note Size: 0x6C
 */
void JPAEmitterManager::forceDeleteEmitter(JPABaseEmitter* emit)
{
	emit->deleteAllParticle();
	emit->setFlag(JPAEMIT_ForceDelete | JPAEMIT_Unk10);
	mGrpEmtr[emit->mGroupID].remove(&emit->mLink);
	mFreeEmtrList.prepend(&emit->mLink);
}

/**
 * @note Address: 0x80090D6C
 * @note Size: 0x10
 */
void JPAEmitterManager::entryResourceManager(JPAResourceManager* mgr, u8 grpID) { mResMgrAry[grpID] = mgr; }

/**
 * @note Address: 0x80090D7C
 * @note Size: 0xC8
 */
void JPAEmitterManager::clearResourceManager(u8 id)
{
	JPABaseEmitter* emit;
	for (u8 i = 0; i < mGrpMax; i++) {
		JSUPtrLink* link = mGrpEmtr[i].getFirst();
		while (link) {
			emit             = (JPABaseEmitter*)link->getObjectPtr();
			JSUPtrLink* next = link->getNext();
			if (id == emit->getResourceManagerID()) {
				forceDeleteEmitter(emit);
			}
			link = next;
		}
	}
	mResMgrAry[id] = nullptr;
}

/**
 * @note Address: 0x80090E44
 * @note Size: 0xE8
 */
void JPAEmitterManager::calcYBBCam()
{
	JGeometry::TVec3f v;
	v.set(0.0f, mWorkData->mPosCamMtx[1][1], mWorkData->mPosCamMtx[2][1]);
	v.normalize();
	mWorkData->mYBBCamMtx[0][0] = 1.0f;
	mWorkData->mYBBCamMtx[0][1] = 0.0f;
	mWorkData->mYBBCamMtx[0][2] = 0.0f;
	mWorkData->mYBBCamMtx[0][3] = mWorkData->mPosCamMtx[0][3];

	mWorkData->mYBBCamMtx[1][0] = 0.0f;
	mWorkData->mYBBCamMtx[1][1] = v.y;
	mWorkData->mYBBCamMtx[1][2] = -v.z;
	mWorkData->mYBBCamMtx[1][3] = mWorkData->mPosCamMtx[1][3];

	mWorkData->mYBBCamMtx[2][0] = 0.0f;
	mWorkData->mYBBCamMtx[2][1] = v.z;
	mWorkData->mYBBCamMtx[2][2] = v.y;
	mWorkData->mYBBCamMtx[2][3] = mWorkData->mPosCamMtx[2][3];
}
