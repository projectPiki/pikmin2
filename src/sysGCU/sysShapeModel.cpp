#include "Camera.h"
#include "Graphics.h"
#include "nans.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DMaterialAnm.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/JUT/JUTException.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "SysShape/MtxObject.h"
#include "System.h"
#include "types.h"
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

/*
 * --INFO--
 * Address:	8043E1D8
 * Size:	0000C4
 */
Model::Model(J3DModelData* data, unsigned long p2, unsigned long modelType)
    : MtxObject()
{
	m_j3dModel   = new J3DModel(data, p2, modelType);
	m_jointCount = m_j3dModel->m_modelData->m_jointTree.m_jointCnt;
	initJoints();
	_05 = 1;
	_04 = 0;
	clearAnimatorAll();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r7, __vt__Q28SysShape9MtxObject@ha
	stw      r0, 0x24(r1)
	addi     r0, r7, __vt__Q28SysShape9MtxObject@l
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lis      r3, __vt__Q28SysShape5Model@ha
	mr       r28, r4
	mr       r29, r5
	mr       r30, r6
	stw      r0, 0(r27)
	addi     r0, r3, __vt__Q28SysShape5Model@l
	li       r3, 0xdc
	stw      r0, 0(r27)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8043E250
	lis      r3, __vt__8J3DModel@ha
	addi     r0, r3, __vt__8J3DModel@l
	stw      r0, 0(r31)
	addi     r3, r31, 0x88
	bl       init__15J3DVertexBufferFv
	mr       r3, r31
	bl       initialize__8J3DModelFv
	mr       r3, r31
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       entryModelData__8J3DModelFP12J3DModelDataUlUl

lbl_8043E250:
	stw      r31, 8(r27)
	mr       r3, r27
	lwz      r4, 8(r27)
	lwz      r4, 4(r4)
	lhz      r0, 0x2c(r4)
	stw      r0, 0xc(r27)
	bl       initJoints__Q28SysShape5ModelFv
	li       r3, 1
	li       r0, 0
	stb      r3, 5(r27)
	mr       r3, r27
	stb      r0, 4(r27)
	bl       clearAnimatorAll__Q28SysShape5ModelFv
	mr       r3, r27
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
		for (int i = 0; i < data->m_materialTable.m_count1; i++) {
			J3DMaterialAnm* anm = new J3DMaterialAnm();
			data->m_materialTable.m_materials1[i]->change();
			data->m_materialTable.m_materials1[i]->m_anm = anm;
		}
		break;
	case 1:
		JUT_PANICLINE(79, "manda\n");
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r4, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	beq      lbl_8043E3E0
	bge      lbl_8043E3F8
	cmpwi    r4, 0
	bge      lbl_8043E2D4
	b        lbl_8043E3F8

lbl_8043E2D4:
	li       r30, 0
	b        lbl_8043E3CC

lbl_8043E2DC:
	li       r3, 0xf4
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8043E3A0
	lis      r3, __vt__14J3DMaterialAnm@ha
	lis      r4, __ct__14J3DMatColorAnmFv@ha
	addi     r0, r3, __vt__14J3DMaterialAnm@l
	li       r6, 8
	lis      r3, __dt__14J3DMatColorAnmFv@ha
	stw      r0, 0(r31)
	addi     r5, r3, __dt__14J3DMatColorAnmFv@l
	addi     r4, r4, __ct__14J3DMatColorAnmFv@l
	addi     r3, r31, 4
	li       r7, 2
	bl       __construct_array
	lis      r3, __ct__12J3DTexMtxAnmFv@ha
	lis      r5, __dt__12J3DTexMtxAnmFv@ha
	addi     r4, r3, __ct__12J3DTexMtxAnmFv@l
	li       r6, 8
	addi     r3, r31, 0x14
	addi     r5, r5, __dt__12J3DTexMtxAnmFv@l
	li       r7, 8
	bl       __construct_array
	lis      r3, __ct__11J3DTexNoAnmFv@ha
	lis      r5, __dt__11J3DTexNoAnmFv@ha
	addi     r4, r3, __ct__11J3DTexNoAnmFv@l
	li       r6, 0xc
	addi     r3, r31, 0x54
	addi     r5, r5, __dt__11J3DTexNoAnmFv@l
	li       r7, 8
	bl       __construct_array
	lis      r3, __ct__14J3DTevColorAnmFv@ha
	lis      r5, __dt__14J3DTevColorAnmFv@ha
	addi     r4, r3, __ct__14J3DTevColorAnmFv@l
	li       r6, 8
	addi     r3, r31, 0xb4
	addi     r5, r5, __dt__14J3DTevColorAnmFv@l
	li       r7, 4
	bl       __construct_array
	lis      r3, __ct__15J3DTevKColorAnmFv@ha
	lis      r5, __dt__15J3DTevKColorAnmFv@ha
	addi     r4, r3, __ct__15J3DTevKColorAnmFv@l
	li       r6, 8
	addi     r3, r31, 0xd4
	addi     r5, r5, __dt__15J3DTevKColorAnmFv@l
	li       r7, 4
	bl       __construct_array
	mr       r3, r31
	bl       initialize__14J3DMaterialAnmFv

lbl_8043E3A0:
	lwz      r3, 0x60(r29)
	rlwinm   r28, r30, 2, 0xe, 0x1d
	lwzx     r3, r3, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x60(r29)
	addi     r30, r30, 1
	lwzx     r3, r3, r28
	stw      r31, 0x3c(r3)

lbl_8043E3CC:
	lhz      r0, 0x5c(r29)
	clrlwi   r3, r30, 0x10
	cmplw    r3, r0
	blt      lbl_8043E2DC
	b        lbl_8043E3F8

lbl_8043E3E0:
	lis      r3, lbl_8049AC90@ha
	li       r4, 0x4f
	addi     r3, r3, lbl_8049AC90@l
	addi     r5, r2, lbl_80520908@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043E3F8:
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
 * Address:	8043E418
 * Size:	000174
 */
void Model::enableMaterialAnim(int p1)
{
	switch (p1) {
	case 0:
		J3DModelData* data = m_j3dModel->m_modelData;
		for (int i = 0; i < data->m_materialTable.m_count1; i++) {
			J3DMaterialAnm* anm = new J3DMaterialAnm();
			data->m_materialTable.m_materials1[i]->change();
			data->m_materialTable.m_materials1[i]->m_anm = anm;
		}
		break;
	case 1:
		JUT_PANICLINE(100, "manda\n");
	}
	_04 = 1;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r4, 1
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r3
	beq      lbl_8043E558
	bge      lbl_8043E570
	cmpwi    r4, 0
	bge      lbl_8043E444
	b        lbl_8043E570

lbl_8043E444:
	lwz      r3, 8(r28)
	li       r29, 0
	lwz      r30, 4(r3)
	b        lbl_8043E544

lbl_8043E454:
	li       r3, 0xf4
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8043E518
	lis      r3, __vt__14J3DMaterialAnm@ha
	lis      r4, __ct__14J3DMatColorAnmFv@ha
	addi     r0, r3, __vt__14J3DMaterialAnm@l
	li       r6, 8
	lis      r3, __dt__14J3DMatColorAnmFv@ha
	stw      r0, 0(r31)
	addi     r5, r3, __dt__14J3DMatColorAnmFv@l
	addi     r4, r4, __ct__14J3DMatColorAnmFv@l
	addi     r3, r31, 4
	li       r7, 2
	bl       __construct_array
	lis      r3, __ct__12J3DTexMtxAnmFv@ha
	lis      r5, __dt__12J3DTexMtxAnmFv@ha
	addi     r4, r3, __ct__12J3DTexMtxAnmFv@l
	li       r6, 8
	addi     r3, r31, 0x14
	addi     r5, r5, __dt__12J3DTexMtxAnmFv@l
	li       r7, 8
	bl       __construct_array
	lis      r3, __ct__11J3DTexNoAnmFv@ha
	lis      r5, __dt__11J3DTexNoAnmFv@ha
	addi     r4, r3, __ct__11J3DTexNoAnmFv@l
	li       r6, 0xc
	addi     r3, r31, 0x54
	addi     r5, r5, __dt__11J3DTexNoAnmFv@l
	li       r7, 8
	bl       __construct_array
	lis      r3, __ct__14J3DTevColorAnmFv@ha
	lis      r5, __dt__14J3DTevColorAnmFv@ha
	addi     r4, r3, __ct__14J3DTevColorAnmFv@l
	li       r6, 8
	addi     r3, r31, 0xb4
	addi     r5, r5, __dt__14J3DTevColorAnmFv@l
	li       r7, 4
	bl       __construct_array
	lis      r3, __ct__15J3DTevKColorAnmFv@ha
	lis      r5, __dt__15J3DTevKColorAnmFv@ha
	addi     r4, r3, __ct__15J3DTevKColorAnmFv@l
	li       r6, 8
	addi     r3, r31, 0xd4
	addi     r5, r5, __dt__15J3DTevKColorAnmFv@l
	li       r7, 4
	bl       __construct_array
	mr       r3, r31
	bl       initialize__14J3DMaterialAnmFv

lbl_8043E518:
	lwz      r3, 0x60(r30)
	rlwinm   r27, r29, 2, 0xe, 0x1d
	lwzx     r3, r3, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x60(r30)
	addi     r29, r29, 1
	lwzx     r3, r3, r27
	stw      r31, 0x3c(r3)

lbl_8043E544:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r29, 0x10
	cmplw    r3, r0
	blt      lbl_8043E454
	b        lbl_8043E570

lbl_8043E558:
	lis      r3, lbl_8049AC90@ha
	li       r4, 0x64
	addi     r3, r3, lbl_8049AC90@l
	addi     r5, r2, lbl_80520908@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043E570:
	li       r0, 1
	stb      r0, 4(r28)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	return (m_joints[jointIndex] != nullptr) ? m_joints[jointIndex]->getWorldMatrix() : nullptr;
	// if (jointIndex == -1) {
	// 	return nullptr;
	// } else if (m_joints[jointIndex] ) {
	// 	return m_joints[jointIndex]->getWorldMatrix();
	// } else {
	// 	return nullptr;
	// }
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, -1
	stw      r0, 0x14(r1)
	bne      lbl_8043E5A8
	li       r3, 0
	b        lbl_8043E5C4

lbl_8043E5A8:
	mulli    r0, r4, 0x3c
	lwz      r3, 0x10(r3)
	add.     r3, r3, r0
	beq      lbl_8043E5C0
	bl       getWorldMatrix__Q28SysShape5JointFv
	b        lbl_8043E5C4

lbl_8043E5C0:
	li       r3, 0

lbl_8043E5C4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043E5D4
 * Size:	00015C
 */
void Model::getRoughBoundingRadius(void)
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
void Model::getRoughCenter(void)
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
	int i = 0;
	while (true) {
		if (sys->m_gfx->m_viewportCount <= i) {
			m_isVisible = false;
			return false;
		}
		Viewport* viewport = sys->m_gfx->getViewport(i);
		if (viewport->viewable() && viewport->m_camera->isVisible(sphere)) {
			break;
		}
		i++;
	}
	m_isVisible = true;
	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	li       r29, 0
	lwz      r5, sys@sda21(r13)
	lwz      r30, 0x24(r5)
	b        lbl_8043E910

lbl_8043E8CC:
	mr       r3, r30
	mr       r4, r29
	bl       getViewport__8GraphicsFi
	mr       r31, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043E90C
	lwz      r3, 0x44(r31)
	mr       r4, r28
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043E90C
	li       r0, 1
	li       r3, 1
	stb      r0, 6(r27)
	b        lbl_8043E928

lbl_8043E90C:
	addi     r29, r29, 1

lbl_8043E910:
	lwz      r0, 0x264(r30)
	cmpw     r29, r0
	blt      lbl_8043E8CC
	li       r0, 0
	li       r3, 0
	stb      r0, 6(r27)

lbl_8043E928:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043E93C
 * Size:	000080
 */
void Model::jointVisible(bool newVisibility, int jointIndex)
{
	if (newVisibility != false) {
		for (J3DMaterial* material = m_j3dModel->m_modelData->m_jointTree.m_joints[(u16)jointIndex]->m_material; material != nullptr;
		     material              = material->_04) {
			material->m_shape->m_flags &= ~J3DShape::IsHidden;
		}
		return;
	}
	for (J3DMaterial* material = m_j3dModel->m_modelData->m_jointTree.m_joints[(u16)jointIndex]->m_material; material != nullptr;
	     material              = material->_04) {
		material->m_shape->m_flags |= J3DShape::IsHidden;
	}
	/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_8043E980
	lwz      r3, 8(r3)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwzx     r3, r3, r0
	lwz      r4, 0x58(r3)
	b        lbl_8043E974

lbl_8043E960:
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0xc(r3)
	lwz      r4, 4(r4)

lbl_8043E974:
	cmplwi   r4, 0
	bne      lbl_8043E960
	blr

lbl_8043E980:
	lwz      r3, 8(r3)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	lwz      r3, 4(r3)
	lwz      r3, 0x28(r3)
	lwzx     r3, r3, r0
	lwz      r4, 0x58(r3)
	b        lbl_8043E9B0

lbl_8043E99C:
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r3)
	ori      r0, r0, 1
	stw      r0, 0xc(r3)
	lwz      r4, 4(r4)

lbl_8043E9B0:
	cmplwi   r4, 0
	bne      lbl_8043E99C
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043E9BC
 * Size:	000058
 * Matching! https://decomp.me/scratch/ZILok
 */
void Model::hide(void)
{
	for (u16 i = 0; i < m_jointCount; i++) {
		for (J3DMaterial* material = m_j3dModel->m_modelData->m_jointTree.m_joints[i]->m_material; material != nullptr;
		     material              = material->_04) {
			material->m_shape->m_flags |= J3DShape::IsHidden;
		}
	}
}

/*
 * --INFO--
 * Address:	8043EA14
 * Size:	000058
 */
void Model::show(void)
{
	for (u16 i = 0; i < m_jointCount; i++) {
		for (J3DMaterial* material = m_j3dModel->m_modelData->m_jointTree.m_joints[i]->m_material; material != nullptr;
		     material              = material->_04) {
			material->m_shape->m_flags &= ~J3DShape::IsHidden;
		}
	}
	/*
	li       r5, 0
	b        lbl_8043EA58

lbl_8043EA1C:
	lwz      r4, 8(r3)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwzx     r4, r4, r0
	lwz      r6, 0x58(r4)
	b        lbl_8043EA4C

lbl_8043EA38:
	lwz      r4, 8(r6)
	lwz      r0, 0xc(r4)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0xc(r4)
	lwz      r6, 4(r6)

lbl_8043EA4C:
	cmplwi   r6, 0
	bne      lbl_8043EA38
	addi     r5, r5, 1

lbl_8043EA58:
	lwz      r0, 0xc(r3)
	clrlwi   r4, r5, 0x10
	cmpw     r4, r0
	blt      lbl_8043EA1C
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043EA6C
 * Size:	000044
 */
void Model::hidePackets(void)
{
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
void Model::showPackets(void)
{
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
void Model::initJoints(void)
{
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
 * Address:	8043EBB0
 * Size:	000060
 */
Joint::~Joint(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8043EBF4
	lis      r5, __vt__Q28SysShape5Joint@ha
	li       r4, 0
	addi     r0, r5, __vt__Q28SysShape5Joint@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8043EBF4
	mr       r3, r30
	bl       __dl__FPv

lbl_8043EBF4:
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
 * Address:	8043EC10
 * Size:	00005C
 */
Joint::Joint(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape5Joint@ha
	lfs      f1, lbl_80520918@sda21(r2)
	addi     r0, r3, __vt__Q28SysShape5Joint@l
	lfs      f0, lbl_8052091C@sda21(r2)
	stw      r0, 0(r31)
	mr       r3, r31
	stfs     f1, 0x1c(r31)
	stfs     f1, 0x20(r31)
	stfs     f1, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x2c(r31)
	stfs     f0, 0x30(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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

} // namespace SysShape

/*
 * @generated{J3DJoint::getJntNo() const}
 * --INFO--
 * Address:	8043EF9C
 * Size:	000008
 */
// s16 J3DJoint::getJntNo() const
// {
// 	return m_jointIdx;
// 	/*
// 	lhz      r3, 0x14(r3)
// 	blr
// 	*/
// }

/*
 * @generated{J3DJoint::getYounger()}
 * --INFO--
 * Address:	8043EFA4
 * Size:	000008
 */
// J3DJoint* J3DJoint::getYounger()
// {
// 	/*
// 	lwz      r3, 0x10(r3)
// 	blr
// 	*/
// }

/*
 * @generated{J3DJoint::getChild()}
 * --INFO--
 * Address:	8043EFAC
 * Size:	000008
 */
// J3DJoint* J3DJoint::getChild()
// {
// 	/*
// 	lwz      r3, 0xc(r3)
// 	blr
// 	*/
// }

namespace SysShape {

/*
 * --INFO--
 * Address:	8043EFB4
 * Size:	000030
 */
void Model::getJointIndex(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x54(r3)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r0, 0x14(r1)
	clrlwi   r3, r3, 0x10
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043EFE4
 * Size:	00005C
 */
Joint* Model::getJoint(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x54(r3)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r0, 0xc(r31)
	clrlwi   r3, r3, 0x10
	cmpw     r3, r0
	bge      lbl_8043F028
	mulli    r0, r3, 0x3c
	lwz      r3, 0x10(r31)
	add      r3, r3, r0
	b        lbl_8043F02C

lbl_8043F028:
	li       r3, 0

lbl_8043F02C:
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
void Model::setViewCalcModeImm(void)
{
	/*
	li       r0, 0
	stb      r0, viewCalcMode__Q28SysShape5Model@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043F04C
 * Size:	00000C
 */
void Model::setViewCalcModeInd(void)
{
	/*
	li       r0, 1
	stb      r0, viewCalcMode__Q28SysShape5Model@sda21(r13)
	blr
	*/
}

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
void Model::viewCalc(void)
{
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
void Model::setCurrentViewNo(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       isMtxImmediate__Q28SysShape5ModelFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8043F0F4
	lwz      r3, 8(r30)
	lwz      r3, 0x84(r3)
	stw      r31, 0x30(r3)

lbl_8043F0F4:
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
 * Address:	8043F10C
 * Size:	000014
 */
void Model::isMtxImmediate(void)
{
	/*
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r0, 8(r3)
	rlwinm   r3, r0, 0x1c, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043F120
 * Size:	000008
 */
bool Model::isModel() { return true; }

/*
 * --INFO--
 * Address:	8043F128
 * Size:	000008
 */
bool Model::isVisible(void)
{
	return m_isVisible;
	/*
	lbz      r3, 6(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043F130
 * Size:	000030
 */
void Model::jointVisible(bool, SysShape::Joint*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lhz      r5, 0x38(r5)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace SysShape

/*
 * --INFO--
 * Address:	8043F160
 * Size:	000028
 */
void __sinit_sysShapeModel_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804ECC00@ha
	stw      r0, lbl_80516278@sda21(r13)
	stfsu    f0, lbl_804ECC00@l(r3)
	stfs     f0, lbl_8051627C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
