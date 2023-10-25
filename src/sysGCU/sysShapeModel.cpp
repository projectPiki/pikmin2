#include "Camera.h"
#include "Graphics.h"
#include "Vector3.h"
#include "nans.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DMaterialAnm.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/JUtility/JUTException.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "SysShape/MtxObject.h"
#include "System.h"
#include "Viewport.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_sysShapeModel_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AC90
    lbl_8049AC90:
        .4byte 0x73797353
        .4byte 0x68617065
        .4byte 0x4D6F6465
        .4byte 0x6C2E6370
        .4byte 0x70000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ECC00
    lbl_804ECC00:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q28SysShape5Joint
    __vt__Q28SysShape5Joint:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28SysShape5JointFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q28SysShape5Model
    __vt__Q28SysShape5Model:
        .4byte 0
        .4byte 0
        .4byte getMatrix__Q28SysShape5ModelFi
        .4byte isModel__Q28SysShape5ModelFv
        .4byte isVisible__Q28SysShape5ModelFRQ23Sys6Sphere
        .4byte isVisible__Q28SysShape5ModelFv
        .4byte hide__Q28SysShape5ModelFv
        .4byte show__Q28SysShape5ModelFv
        .4byte hidePackets__Q28SysShape5ModelFv
        .4byte showPackets__Q28SysShape5ModelFv
        .4byte jointVisible__Q28SysShape5ModelFbi
        .4byte jointVisible__Q28SysShape5ModelFbPQ28SysShape5Joint
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global viewCalcMode__Q28SysShape5Model
    viewCalcMode__Q28SysShape5Model:
        .byte 0x01
        .byte 0x00
        .byte 0x00
        .byte 0x00

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516278
    lbl_80516278:
        .skip 0x4
    .global lbl_8051627C
    lbl_8051627C:
        .skip 0x4
    .global cullCount__Q28SysShape5Model
    cullCount__Q28SysShape5Model:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520908
    lbl_80520908:
        .4byte 0x6D616E64
        .4byte 0x610A0000
    .global lbl_80520910
    lbl_80520910:
        .4byte 0x00000000
    .global lbl_80520914
    lbl_80520914:
        .float 0.5
    .global lbl_80520918
    lbl_80520918:
        .4byte 0x47000000
    .global lbl_8052091C
    lbl_8052091C:
        .4byte 0xC7000000
*/

namespace SysShape {

u8 Model::viewCalcMode;

/*
 * --INFO--
 * Address:	8043E1D8
 * Size:	0000C4
 */
Model::Model(J3DModelData* data, u32 p2, u32 modelType)
    : MtxObject()
{
	mJ3dModel   = new J3DModel(data, p2, modelType);
	mJointCount = mJ3dModel->mModelData->mJointTree.mJointCnt;
	initJoints();
	_05          = 1;
	mIsAnimating = false;
	clearAnimatorAll();
}

/*
 * --INFO--
 * Address:	8043E29C
 * Size:	00017C
 */
void Model::enableMaterialAnim(J3DModelData* data, int p2)
{
	switch (p2) {
	case 0:
		for (u16 i = 0; i < data->mMaterialTable.mMaterialNum; i++) {
			J3DMaterialAnm* anm = new J3DMaterialAnm();
			data->mMaterialTable.mMaterials[i]->change();
			data->mMaterialTable.mMaterials[i]->mMaterialAnm = anm;
		}
		break;
	case 1:
		JUT_PANICLINE(79, "manda\n");
	}
}

/*
 * --INFO--
 * Address:	8043E418
 * Size:	000174
 */
void Model::enableMaterialAnim(int p1)
{
	switch (p1) {
	case 0:
		J3DModelData* data = mJ3dModel->mModelData;
		for (u16 i = 0; i < data->mMaterialTable.mMaterialNum; i++) {
			J3DMaterialAnm* anm = new J3DMaterialAnm();
			data->mMaterialTable.mMaterials[i]->change();
			data->mMaterialTable.mMaterials[i]->mMaterialAnm = anm;
		}
		break;
	case 1:
		JUT_PANICLINE(100, "manda\n");
	}
	mIsAnimating = true;
}

/*
 * --INFO--
 * Address:	8043E58C
 * Size:	000048
 */
Matrixf* Model::getMatrix(int jointIndex)
{
	if (jointIndex == -1) {
		return nullptr;
	}
	return (mJoints + jointIndex != nullptr) ? mJoints[jointIndex].getWorldMatrix() : nullptr;
}

/*
 * --INFO--
 * Address:	8043E5D4
 * Size:	00015C
 */
f32 Model::getRoughBoundingRadius()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	mr       r4, r31
	bl       getRoughCenter__Q28SysShape5ModelFv
	lfs      f0, lbl_80520910@sda21(r2)
	li       r4, 0
	lwz      r5, 0xc(r31)
	fmr      f3, f0
	lfs      f9, 8(r1)
	fmr      f1, f0
	lfs      f10, 0xc(r1)
	lfs      f11, 0x10(r1)
	mtctr    r5
	cmpwi    r5, 0
	ble      lbl_8043E6D4

lbl_8043E620:
	lwz      r3, 0x10(r31)
	addi     r0, r4, 0x18
	lwzx     r3, r3, r0
	lfs      f2, 0x4c(r3)
	lfs      f5, 0x50(r3)
	fsubs    f7, f2, f10
	lfs      f4, 0x48(r3)
	fsubs    f8, f5, f11
	lfs      f2, 0x44(r3)
	lfs      f5, 0x40(r3)
	fsubs    f6, f4, f9
	fmuls    f12, f7, f7
	lfs      f4, 0x3c(r3)
	fmuls    f8, f8, f8
	fsubs    f7, f2, f11
	fmadds   f2, f6, f6, f12
	fsubs    f5, f5, f10
	fsubs    f4, f4, f9
	fadds    f6, f8, f2
	fcmpo    cr0, f6, f3
	ble      lbl_8043E684
	ble      lbl_8043E688
	frsqrte  f2, f6
	fmuls    f6, f2, f6
	b        lbl_8043E688

lbl_8043E684:
	fmr      f6, f3

lbl_8043E688:
	fmuls    f2, f5, f5
	fmuls    f5, f7, f7
	fmadds   f2, f4, f4, f2
	fadds    f2, f5, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043E6B0
	ble      lbl_8043E6B4
	frsqrte  f4, f2
	fmuls    f2, f4, f2
	b        lbl_8043E6B4

lbl_8043E6B0:
	fmr      f2, f1

lbl_8043E6B4:
	fcmpo    cr0, f6, f0
	ble      lbl_8043E6C0
	fmr      f0, f6

lbl_8043E6C0:
	fcmpo    cr0, f2, f0
	ble      lbl_8043E6CC
	fmr      f0, f2

lbl_8043E6CC:
	addi     r4, r4, 0x3c
	bdnz     lbl_8043E620

lbl_8043E6D4:
	fmr      f1, f0
	lfs      f3, lbl_80520910@sda21(r2)
	li       r4, 0
	mtctr    r5
	cmpwi    r5, 0
	ble      lbl_8043E710

lbl_8043E6EC:
	lwz      r3, 0x10(r31)
	addi     r0, r4, 0x18
	lwzx     r3, r3, r0
	lfs      f2, 0x38(r3)
	fcmpo    cr0, f2, f3
	ble      lbl_8043E708
	fmr      f3, f2

lbl_8043E708:
	addi     r4, r4, 0x3c
	bdnz     lbl_8043E6EC

lbl_8043E710:
	fcmpo    cr0, f3, f0
	bge      lbl_8043E71C
	fmr      f1, f3

lbl_8043E71C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043E730
 * Size:	000174
 */
Vector3f Model::getRoughCenter()
{
	/*
	stwu     r1, -0x60(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stfd     f28, 0x20(r1)
	psq_st   f28, 40(r1), 0, qr0
	stfd     f27, 0x10(r1)
	psq_st   f27, 24(r1), 0, qr0
	lfs      f5, lbl_80520910@sda21(r2)
	li       r6, 0
	lwz      r0, 0xc(r4)
	fmr      f6, f5
	fmr      f7, f5
	fmr      f8, f5
	fmr      f9, f5
	fmr      f10, f5
	fmr      f28, f5
	fmr      f27, f5
	fmr      f2, f5
	fmr      f0, f5
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8043E84C

lbl_8043E798:
	lwz      r5, 0x10(r4)
	addi     r0, r6, 0x18
	lwzx     r5, r5, r0
	lfs      f12, 0x4c(r5)
	lfs      f13, 0x50(r5)
	fmuls    f1, f12, f12
	lfs      f11, 0x48(r5)
	fmuls    f3, f13, f13
	lfs      f31, 0x3c(r5)
	lfs      f30, 0x40(r5)
	fmadds   f1, f11, f11, f1
	lfs      f29, 0x44(r5)
	fadds    f3, f3, f1
	fcmpo    cr0, f3, f2
	ble      lbl_8043E7E4
	ble      lbl_8043E7E8
	frsqrte  f1, f3
	fmuls    f3, f1, f3
	b        lbl_8043E7E8

lbl_8043E7E4:
	fmr      f3, f2

lbl_8043E7E8:
	fmuls    f1, f30, f30
	fmuls    f4, f29, f29
	fmadds   f1, f31, f31, f1
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8043E810
	ble      lbl_8043E814
	frsqrte  f4, f1
	fmuls    f1, f4, f1
	b        lbl_8043E814

lbl_8043E810:
	fmr      f1, f0

lbl_8043E814:
	fcmpo    cr0, f3, f28
	ble      lbl_8043E82C
	fmr      f5, f11
	fmr      f6, f12
	fmr      f7, f13
	fmr      f28, f3

lbl_8043E82C:
	fcmpo    cr0, f1, f27
	ble      lbl_8043E844
	fmr      f8, f31
	fmr      f9, f30
	fmr      f10, f29
	fmr      f27, f1

lbl_8043E844:
	addi     r6, r6, 0x3c
	bdnz     lbl_8043E798

lbl_8043E84C:
	fadds    f2, f5, f8
	lfs      f3, lbl_80520914@sda21(r2)
	fadds    f1, f6, f9
	fadds    f0, f7, f10
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0(r3)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	psq_l    f28, 40(r1), 0, qr0
	lfd      f28, 0x20(r1)
	psq_l    f27, 24(r1), 0, qr0
	lfd      f27, 0x10(r1)
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Model::entry(Sys::Sphere&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043E8A4
 * Size:	000098
 */
bool Model::isVisible(Sys::Sphere& sphere)
{
	Graphics* gfx = sys->mGfx;
	for (int i = 0; i < gfx->mActiveViewports; i++) {
		Viewport* viewport = gfx->getViewport(i);
		if (viewport->viewable() && viewport->mCamera->isVisible(sphere)) {
			mIsVisible = true;
			return true;
		}
	}
	mIsVisible = false;
	return false;
}

/*
 * --INFO--
 * Address:	8043E93C
 * Size:	000080
 */
void Model::jointVisible(bool newVisibility, int jointIndex)
{
	if (newVisibility != false) {
		for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[(u16)jointIndex]->mMaterial; material != nullptr;
		     material              = material->mNext) {
			material->mShape->mFlags &= ~J3DShape_IsHidden;
		}
		return;
	}
	for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[(u16)jointIndex]->mMaterial; material != nullptr;
	     material              = material->mNext) {
		material->mShape->mFlags |= J3DShape_IsHidden;
	}
}

/*
 * --INFO--
 * Address:	8043E9BC
 * Size:	000058
 * Matching! https://decomp.me/scratch/ZILok
 */
void Model::hide()
{
	for (u16 i = 0; i < mJointCount; i++) {
		for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[i]->mMaterial; material != nullptr;
		     material              = material->mNext) {
			material->mShape->mFlags |= J3DShape_IsHidden;
		}
	}
}

/*
 * --INFO--
 * Address:	8043EA14
 * Size:	000058
 */
void Model::show()
{
	for (u16 i = 0; i < mJointCount; i++) {
		for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[i]->mMaterial; material != nullptr;
		     material              = material->mNext) {
			material->mShape->mFlags &= ~J3DShape_IsHidden;
		}
	}
}

/*
 * --INFO--
 * Address:	8043EA6C
 * Size:	000044
 */
void Model::hidePackets()
{
	for (u16 i = 0; i < mJ3dModel->mModelData->mShapeTable.mCount; i++) {
		mJ3dModel->mShapePackets[i].onFlag(0x10);
	}
	/*
	li       r7, 0
	b        lbl_8043EA94

lbl_8043EA74:
	clrlwi   r0, r7, 0x10
	lwz      r5, 0xc4(r6)
	mulli    r4, r0, 0x3c
	addi     r7, r7, 1
	addi     r4, r4, 0x10
	lwzx     r0, r5, r4
	ori      r0, r0, 0x10
	stwx     r0, r5, r4

lbl_8043EA94:
	lwz      r6, 8(r3)
	clrlwi   r4, r7, 0x10
	lwz      r5, 4(r6)
	lhz      r0, 0x7c(r5)
	cmplw    r4, r0
	blt      lbl_8043EA74
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043EAB0
 * Size:	000044
 */
void Model::showPackets()
{
	for (u16 i = 0; i < mJ3dModel->mModelData->mShapeTable.mCount; i++) {
		mJ3dModel->mShapePackets[i].offFlag(0x10);
	}
	/*
	li       r7, 0
	b        lbl_8043EAD8

lbl_8043EAB8:
	clrlwi   r0, r7, 0x10
	lwz      r5, 0xc4(r6)
	mulli    r4, r0, 0x3c
	addi     r7, r7, 1
	addi     r4, r4, 0x10
	lwzx     r0, r5, r4
	rlwinm   r0, r0, 0, 0x1c, 0x1a
	stwx     r0, r5, r4

lbl_8043EAD8:
	lwz      r6, 8(r3)
	clrlwi   r4, r7, 0x10
	lwz      r5, 4(r6)
	lhz      r0, 0x7c(r5)
	cmplw    r4, r0
	blt      lbl_8043EAB8
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043EAF4
 * Size:	0000BC
 */
void Model::initJoints()
{
	mJoints = new Joint[mJointCount];
	for (u16 i = 0; i < mJointCount; i++) {
		mJoints[i].init(i, this, mJ3dModel->mModelData->mJointTree.mJoints[i]);
	}
	initJointsRec(0, nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r31, 0xc(r3)
	mulli    r3, r31, 0x3c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q28SysShape5JointFv@ha
	lis      r5, __dt__Q28SysShape5JointFv@ha
	addi     r4, r4, __ct__Q28SysShape5JointFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q28SysShape5JointFv@l
	li       r6, 0x3c
	bl       __construct_new_array
	stw      r3, 0x10(r30)
	li       r31, 0
	b        lbl_8043EB78

lbl_8043EB44:
	lwz      r4, 8(r30)
	clrlwi   r0, r31, 0x10
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r30)
	lwz      r5, 4(r4)
	rlwinm   r6, r31, 2, 0xe, 0x1d
	mr       r4, r31
	lwz      r7, 0x28(r5)
	mr       r5, r30
	add      r3, r3, r0
	lwzx     r6, r7, r6
	bl       init__Q28SysShape5JointFUsPQ28SysShape5ModelP8J3DJoint
	addi     r31, r31, 1

lbl_8043EB78:
	lwz      r0, 0xc(r30)
	clrlwi   r3, r31, 0x10
	cmpw     r3, r0
	blt      lbl_8043EB44
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043EC10
 * Size:	00005C
 */
Joint::Joint()
{
	mMin = FLOAT_DIST_MIN;
	mMax = FLOAT_DIST_MAX;
}

/*
 * --INFO--
 * Address:	8043EC6C
 * Size:	000330
 */
void Model::initJointsRec(int, SysShape::Joint*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	mulli    r0, r4, 0x3c
	stmw     r23, 0xc(r1)
	mr       r30, r3
	mr       r31, r5
	lwz      r3, 0x10(r3)
	add      r26, r3, r0
	stw      r31, 0xc(r26)
	lwz      r4, 0x18(r26)
	lwz      r3, 0xc(r4)
	lwz      r25, 0x10(r4)
	cmplwi   r3, 0
	beq      lbl_8043EE14
	lhz      r0, 0x14(r3)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 0x10(r26)
	lwz      r0, 0x10(r30)
	add      r28, r0, r4
	stw      r26, 0xc(r28)
	lwz      r4, 0x18(r28)
	lwz      r3, 0xc(r4)
	lwz      r29, 0x10(r4)
	cmplwi   r3, 0
	beq      lbl_8043ED74
	lhz      r0, 0x14(r3)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 0x10(r28)
	lwz      r0, 0x10(r30)
	add      r27, r0, r4
	stw      r28, 0xc(r27)
	lwz      r3, 0x18(r27)
	bl       getChild__8J3DJointFv
	mr       r23, r3
	lwz      r3, 0x18(r27)
	bl       getYounger__8J3DJointFv
	cmplwi   r23, 0
	mr       r24, r3
	beq      lbl_8043ED44
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r27
	add      r0, r6, r0
	stw      r0, 0x10(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043ED44:
	cmplwi   r24, 0
	beq      lbl_8043ED74
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r28
	add      r0, r6, r0
	stw      r0, 4(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043ED74:
	cmplwi   r29, 0
	beq      lbl_8043EE14
	lhz      r0, 0x14(r29)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 4(r28)
	lwz      r0, 0x10(r30)
	add      r27, r0, r4
	stw      r26, 0xc(r27)
	lwz      r3, 0x18(r27)
	bl       getChild__8J3DJointFv
	mr       r24, r3
	lwz      r3, 0x18(r27)
	bl       getYounger__8J3DJointFv
	cmplwi   r24, 0
	mr       r23, r3
	beq      lbl_8043EDE4
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r27
	add      r0, r6, r0
	stw      r0, 0x10(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EDE4:
	cmplwi   r23, 0
	beq      lbl_8043EE14
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r26
	add      r0, r6, r0
	stw      r0, 4(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EE14:
	cmplwi   r25, 0
	beq      lbl_8043EF88
	lhz      r0, 0x14(r25)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 4(r26)
	lwz      r0, 0x10(r30)
	add      r28, r0, r4
	stw      r31, 0xc(r28)
	lwz      r4, 0x18(r28)
	lwz      r3, 0xc(r4)
	lwz      r25, 0x10(r4)
	cmplwi   r3, 0
	beq      lbl_8043EEE8
	lhz      r0, 0x14(r3)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 0x10(r28)
	lwz      r0, 0x10(r30)
	add      r26, r0, r4
	stw      r28, 0xc(r26)
	lwz      r3, 0x18(r26)
	bl       getChild__8J3DJointFv
	mr       r24, r3
	lwz      r3, 0x18(r26)
	bl       getYounger__8J3DJointFv
	cmplwi   r24, 0
	mr       r23, r3
	beq      lbl_8043EEB8
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r26
	add      r0, r6, r0
	stw      r0, 0x10(r26)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EEB8:
	cmplwi   r23, 0
	beq      lbl_8043EEE8
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r28
	add      r0, r6, r0
	stw      r0, 4(r26)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EEE8:
	cmplwi   r25, 0
	beq      lbl_8043EF88
	lhz      r0, 0x14(r25)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 4(r28)
	lwz      r0, 0x10(r30)
	add      r25, r0, r4
	stw      r31, 0xc(r25)
	lwz      r3, 0x18(r25)
	bl       getChild__8J3DJointFv
	mr       r24, r3
	lwz      r3, 0x18(r25)
	bl       getYounger__8J3DJointFv
	cmplwi   r24, 0
	mr       r23, r3
	beq      lbl_8043EF58
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r25
	add      r0, r6, r0
	stw      r0, 0x10(r25)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EF58:
	cmplwi   r23, 0
	beq      lbl_8043EF88
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r31
	add      r0, r6, r0
	stw      r0, 4(r25)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EF88:
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043EFB4
 * Size:	000030
 */
u16 Model::getJointIndex(char* name) { return mJ3dModel->mModelData->mJointTree.mNametab->getIndex(name); }

/*
 * --INFO--
 * Address:	8043EFE4
 * Size:	00005C
 */
Joint* Model::getJoint(char* name)
{
	int id = getJointIndex(name);
	if (id < mJointCount) {
		return &mJoints[id];
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Model::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F040
 * Size:	00000C
 */
void Model::setViewCalcModeImm() { viewCalcMode = false; }

/*
 * --INFO--
 * Address:	8043F04C
 * Size:	00000C
 */
void Model::setViewCalcModeInd() { viewCalcMode = true; }

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
bool Model::needViewCalc()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F058
 * Size:	000068
 */
void Model::viewCalc()
{
	u8 calc;
	if (viewCalcMode == 0) {
		calc = isMtxImmediate();
	} else {
		calc = isMtxImmediate() >> 5;
	}

	if (calc) {
		mJ3dModel->viewCalc();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, viewCalcMode__Q28SysShape5Model@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8043F080
	bl       isMtxImmediate__Q28SysShape5ModelFv
	b        lbl_8043F090

lbl_8043F080:
	bl       isMtxImmediate__Q28SysShape5ModelFv
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_8043F090:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043F0AC
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8043F0AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043F0C0
 * Size:	00004C
 */
void Model::setCurrentViewNo(u32 viewportNumber)
{
	if (!isMtxImmediate()) {
		mJ3dModel->mMtxBuffer->mCurrentViewNumber = viewportNumber;
	}
}

/*
 * --INFO--
 * Address:	8043F10C
 * Size:	000014
 */
u8 Model::isMtxImmediate() { return mJ3dModel->mModelData->mModelLoaderFlags >> 4 & 1; }

/*
 * --INFO--
 * Address:	8043F130
 * Size:	000030
 */
void Model::jointVisible(bool flag, Joint* joint) { jointVisible(flag, joint->mJointIndex); }

} // namespace SysShape
