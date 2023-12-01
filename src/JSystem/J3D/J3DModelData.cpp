#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"

/*
 * --INFO--
 * Address:	80083794
 * Size:	000018
 */
void J3DModelData::clear()
{
	mBmd              = nullptr;
	mModelLoaderFlags = 0;
	mBumpFlag         = 0;
	mBillboardFlag    = 0;
}

/*
 * --INFO--
 * Address:	800837AC
 * Size:	000080
 */
J3DModelData::J3DModelData()
    : mJointTree()
    , mMaterialTable()
    , mShapeTable()
    , mVertexData()
{
	clear();
}

/*
 * --INFO--
 * Address:	800838D8
 * Size:	000094
 */
void J3DModelData::newSharedDisplayList(u32 flags)
{
	const u16 count = mMaterialTable.getMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (flags & J3DMLF_19) {
			mMaterialTable.getMaterialNodePointer(i)->newSingleSharedDisplayList(mMaterialTable.getMaterialNodePointer(i)->countDLSize());
		} else {
			mMaterialTable.getMaterialNodePointer(i)->newSharedDisplayList(mMaterialTable.getMaterialNodePointer(i)->countDLSize());
		}
	}
}

/*
 * --INFO--
 * Address:	8008396C
 * Size:	0000C4
 */
void J3DModelData::indexToPtr()
{
	j3dSys.mTexture           = getMaterialTable().getTexture();
	static int sInterruptFlag = OSDisableInterrupts();
	OSDisableScheduler();

	u16 count = getMaterialTable().mMaterialNum;
	for (u16 i = 0; i < count; i++) {
		const J3DMaterial* mat = mMaterialTable.getMaterialNodePointer(i);

		GDCurrentDL currentDL;
		GDInitGDLObj(&currentDL, mat->getSharedDisplayListObj()->getDisplayList(0), mat->getSharedDisplayListObj()->getDisplayListSize());
		__GDSetCurrent(&currentDL);
		mat->getTevBlock()->indexToPtr();
	}

	__GDSetCurrent(nullptr);
	OSEnableScheduler();
	OSRestoreInterrupts(sInterruptFlag);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lbz      r0, init$1510@sda21(r13)
	lwz      r4, 0x6c(r27)
	extsb.   r0, r0
	stw      r4, 0x58(r3)
	bne      lbl_800839AC
	bl       OSDisableInterrupts
	li       r0, 1
	stw      r3, sInterruptFlag$1509@sda21(r13)
	stb      r0, init$1510@sda21(r13)

lbl_800839AC:
	bl       OSDisableScheduler
	lhz      r30, 0x5c(r27)
	addi     r31, r1, 8
	li       r28, 0
	b        lbl_800839FC

lbl_800839C0:
	lwz      r4, 0x60(r27)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	addi     r3, r1, 8
	lwzx     r29, r4, r0
	lwz      r5, 0x48(r29)
	lwz      r4, 0(r5)
	lwz      r5, 8(r5)
	bl       GDInitGDLObj
	stw      r31, __GDCurrentDL@sda21(r13)
	lwz      r3, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_800839FC:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r30
	blt      lbl_800839C0
	li       r0, 0
	stw      r0, __GDCurrentDL@sda21(r13)
	bl       OSEnableScheduler
	lwz      r3, sInterruptFlag$1509@sda21(r13)
	bl       OSRestoreInterrupts
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80083A30
 * Size:	000080
 */
void J3DModelData::makeSharedDL()
{
	j3dSys.mTexture = mMaterialTable.mTextures;
	u16 count       = mMaterialTable.mMaterialNum;
	for (u16 i = 0; i < count; i++) {
		J3DMaterial* material = mMaterialTable.mMaterials[i];
		material->makeSharedDisplayList();
	}
}

/*
 * --INFO--
 * Address:	80083AB0
 * Size:	0000C8
 */
void J3DModelData::simpleCalcMaterial(u16 jointIndex, Mtx mtx)
{
	syncJ3DSysFlags();
	for (J3DMaterial* material = mJointTree.getJointNodePointer(jointIndex)->mMaterial; material != nullptr;
	     material              = material->getNext()) {
		if (material->getMaterialAnm()) {
			material->getMaterialAnm()->calc(material);
		}
		material->calc(mtx);
	}
}

/*
 * --INFO--
 * Address:	80083B78
 * Size:	00003C
 */
void J3DModelData::syncJ3DSysFlags() const
{
	if (mModelLoaderFlags & J3DMLF_06) {
		j3dSys.mFlags |= 0x40000000;
	} else {
		j3dSys.mFlags &= ~0x40000000;
	}
}
