#include "JSystem/J3D/J3DJoint.h"
#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTransform.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JMath.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804789B0
    lbl_804789B0:
        .float 1.0
        .float 1.0
        .float 1.0
    .global lbl_804789BC
    lbl_804789BC:
        .float 1.0
        .float 1.0
        .float 1.0
    .global lbl_804789C8
    lbl_804789C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804789D4
    lbl_804789D4:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global
   "__vt__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>"
    "__vt__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>Fv"
        .4byte
   "setAnmTransform__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>FP15J3DAnmTransform"
        .4byte getAnmTransform__17J3DMtxCalcAnmBaseFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte
   "init__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>FRC3VecRA3_A4_Cf"
        .4byte
   "calc__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>Fv"
    .global
   "__vt__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>"
    "__vt__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>Fv"
        .4byte
   "setAnmTransform__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>FP15J3DAnmTransform"
        .4byte getAnmTransform__17J3DMtxCalcAnmBaseFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte
   "init__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>FRC3VecRA3_A4_Cf"
        .4byte
   "calc__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>Fv"
    .global
   "__vt__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>"
    "__vt__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>Fv"
        .4byte
   "setAnmTransform__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>FP15J3DAnmTransform"
        .4byte getAnmTransform__17J3DMtxCalcAnmBaseFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte
   "init__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>FRC3VecRA3_A4_Cf"
        .4byte
   "calc__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>Fv"
    .global __vt__17J3DMtxCalcAnmBase
    __vt__17J3DMtxCalcAnmBase:
        .4byte 0
        .4byte 0
        .4byte __dt__17J3DMtxCalcAnmBaseFv
        .4byte setAnmTransform__17J3DMtxCalcAnmBaseFP15J3DAnmTransform
        .4byte getAnmTransform__17J3DMtxCalcAnmBaseFv
        .4byte setAnmTransform__10J3DMtxCalcFUcP15J3DAnmTransform
        .4byte getAnmTransform__10J3DMtxCalcFUc
        .4byte setWeight__10J3DMtxCalcFUcf
        .4byte getWeight__10J3DMtxCalcCFUc
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global mMtxBuffer__10J3DMtxCalc
    mMtxBuffer__10J3DMtxCalc:
        .skip 0x4
    .global mJoint__10J3DMtxCalc
    mJoint__10J3DMtxCalc:
        .skip 0x4
    .global mCurrentMtxCalc__8J3DJoint
    mCurrentMtxCalc__8J3DJoint:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516A78
    lbl_80516A78:
        .float 1.0
    .global lbl_80516A7C
    lbl_80516A7C:
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8006B200
 * Size:	000098
 * init__25J3DMtxCalcJ3DSysInitBasicFRC3VecRA3_A4_Cf
 */
void J3DMtxCalcJ3DSysInitBasic::init(const Vec& p1, const float (&p2)[3][4])
{
	J3DSys::mCurrentS.x = p1.x;
	J3DSys::mCurrentS.y = p1.y;
	J3DSys::mCurrentS.z = p1.z;
	J3DSys::mParentS.x  = 1.0f;
	J3DSys::mParentS.y  = 1.0f;
	J3DSys::mParentS.z  = 1.0f;
	JMAMTXApplyScale(p2, J3DSys::mCurrentMtx, p1.x, p1.y, p1.z);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r9, r3
	lis      r5, lbl_804789B0@ha
	stw      r0, 0x24(r1)
	addi     r6, r5, lbl_804789B0@l
	lfs      f1, 0(r9)
	lis      r8, mCurrentS__6J3DSys@ha
	lwz      r0, 0(r6)
	lis      r5, mParentS__6J3DSys@ha
	lwz      r7, 4(r6)
	lis      r3, mCurrentMtx__6J3DSys@ha
	stw      r0, 8(r1)
	addi     r0, r3, mCurrentMtx__6J3DSys@l
	lwz      r6, 8(r6)
	mr       r3, r4
	stw      r7, 0xc(r1)
	mr       r4, r0
	lfs      f5, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f2, 4(r9)
	stfsu    f1, mCurrentS__6J3DSys@l(r8)
	lfs      f3, 8(r9)
	stfs     f2, 4(r8)
	lfs      f4, 0xc(r1)
	stfsu    f5, mParentS__6J3DSys@l(r5)
	lfs      f0, 0x10(r1)
	stfs     f3, 8(r8)
	lfs      f1, 0(r9)
	lfs      f2, 4(r9)
	lfs      f3, 8(r9)
	stfs     f4, 4(r5)
	stfs     f0, 8(r5)
	bl       JMAMTXApplyScale__FPA4_CfPA4_ffff
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006B298
 * Size:	000098
 * init__24J3DMtxCalcJ3DSysInitMayaFRC3VecRA3_A4_Cf
 */
void J3DMtxCalcJ3DSysInitMaya::init(const Vec& p1, const float (&p2)[3][4])
{
	J3DSys::mCurrentS.x = p1.x;
	J3DSys::mCurrentS.y = p1.y;
	J3DSys::mCurrentS.z = p1.z;
	J3DSys::mParentS.x  = 1.0f;
	J3DSys::mParentS.y  = 1.0f;
	J3DSys::mParentS.z  = 1.0f;
	JMAMTXApplyScale(p2, J3DSys::mCurrentMtx, p1.x, p1.y, p1.z);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r9, r3
	lis      r5, lbl_804789BC@ha
	stw      r0, 0x24(r1)
	addi     r7, r5, lbl_804789BC@l
	lfs      f5, 0(r9)
	lis      r5, mCurrentS__6J3DSys@ha
	lwz      r0, 0(r7)
	lis      r6, mParentS__6J3DSys@ha
	lwz      r8, 4(r7)
	lis      r3, mCurrentMtx__6J3DSys@ha
	stw      r0, 8(r1)
	addi     r0, r3, mCurrentMtx__6J3DSys@l
	lwz      r7, 8(r7)
	mr       r3, r4
	stw      r8, 0xc(r1)
	mr       r4, r0
	lfs      f1, 8(r1)
	stw      r7, 0x10(r1)
	lfs      f2, 0xc(r1)
	stfsu    f1, mParentS__6J3DSys@l(r6)
	lfs      f3, 0x10(r1)
	stfs     f2, 4(r6)
	lfs      f4, 4(r9)
	stfsu    f5, mCurrentS__6J3DSys@l(r5)
	lfs      f0, 8(r9)
	stfs     f3, 8(r6)
	lfs      f1, 0(r9)
	lfs      f2, 4(r9)
	lfs      f3, 8(r9)
	stfs     f4, 4(r5)
	stfs     f0, 8(r5)
	bl       JMAMTXApplyScale__FPA4_CfPA4_ffff
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006B330
 * Size:	000118
 * calcTransform__28J3DMtxCalcCalcTransformBasicFRC16J3DTransformInfo
 */
void J3DMtxCalcCalcTransformBasic::calcTransform(const J3DTransformInfo& info)
{
	u16 jntNo = J3DMtxCalc::mJoint->getJntNo();
	J3DSys::mCurrentS.x *= info.m_scale.x;
	J3DSys::mCurrentS.y *= info.m_scale.y;
	J3DSys::mCurrentS.z *= info.m_scale.z;
	Mtx* mtx = &J3DMtxCalc::mMtxBuffer->m_worldMatrices[jntNo];
	J3DGetTranslateRotateMtx(info, *mtx);
	bool isIdentity;
	if (J3DSys::mCurrentS.x == 1.0f && J3DSys::mCurrentS.y == 1.0f && J3DSys::mCurrentS.z == 1.0f) {
		isIdentity = true;
	} else {
		isIdentity = false;
	}
	if (!isIdentity) {
		J3DMtxCalc::mMtxBuffer->_04[jntNo] = 0;
		JMAMTXApplyScale(*mtx, *mtx, info.m_scale.x, info.m_scale.y, info.m_scale.z);
	} else {
		J3DMtxCalc::mMtxBuffer->_04[jntNo] = 1;
	}
	PSMTXConcat(J3DSys::mCurrentMtx, *mtx, J3DSys::mCurrentMtx);
	PSMTXCopy(J3DSys::mCurrentMtx, *mtx);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, mCurrentS__6J3DSys@ha
	lfs      f0, 0(r3)
	stw      r0, 0x24(r1)
	lfs      f2, 4(r3)
	stmw     r27, 0xc(r1)
	addi     r31, r4, mCurrentS__6J3DSys@l
	mr       r27, r3
	lwz      r5, mJoint__10J3DMtxCalc@sda21(r13)
	lfs      f1, 0(r31)
	lhz      r28, 0x14(r5)
	fmuls    f4, f1, f0
	lfs      f3, 4(r31)
	lwz      r29, mMtxBuffer__10J3DMtxCalc@sda21(r13)
	mulli    r0, r28, 0x30
	lfs      f1, 8(r31)
	fmuls    f2, f3, f2
	lwz      r4, 0xc(r29)
	lfs      f0, 8(r3)
	add      r30, r4, r0
	stfs     f4, 0(r31)
	fmuls    f0, f1, f0
	mr       r4, r30
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)
	bl       J3DGetTranslateRotateMtx__FRC16J3DTransformInfoPA4_f
	lis      r3, mCurrentS__6J3DSys@ha
	lfs      f1, lbl_80516A78@sda21(r2)
	lfs      f0, mCurrentS__6J3DSys@l(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_8006B3D0
	lfs      f0, 4(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8006B3D0
	lfs      f0, 8(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8006B3D0
	li       r0, 1
	b        lbl_8006B3D4

lbl_8006B3D0:
	li       r0, 0

lbl_8006B3D4:
	cmpwi    r0, 0
	bne      lbl_8006B404
	lwz      r4, 4(r29)
	li       r0, 0
	lfs      f1, 0(r27)
	mr       r3, r30
	stbx     r0, r4, r28
	mr       r4, r30
	lfs      f2, 4(r27)
	lfs      f3, 8(r27)
	bl       JMAMTXApplyScale__FPA4_CfPA4_ffff
	b        lbl_8006B410

lbl_8006B404:
	lwz      r3, 4(r29)
	li       r0, 1
	stbx     r0, r3, r28

lbl_8006B410:
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r30
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r30
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006B448
 * Size:	000168
 * calcTransform__32J3DMtxCalcCalcTransformSoftimageFRC16J3DTransformInfo
 */
void J3DMtxCalcCalcTransformSoftimage::calcTransform(const J3DTransformInfo& info)
{
	u16 jntNo = J3DMtxCalc::mJoint->getJntNo();
	Mtx* mtx  = &J3DMtxCalc::mMtxBuffer->m_worldMatrices[jntNo];
	J3DGetTranslateRotateMtx(info.m_eulerRot.x, info.m_eulerRot.y, info.m_eulerRot.z, info.m_zRotation.x * J3DSys::mCurrentS.x,
	                         info.m_zRotation.y * J3DSys::mCurrentS.y, info.m_zRotation.z * J3DSys::mCurrentS.z, *mtx);
	PSMTXConcat(J3DSys::mCurrentMtx, *mtx, J3DSys::mCurrentMtx);
	J3DSys::mCurrentS.x *= info.m_scale.x;
	J3DSys::mCurrentS.y *= info.m_scale.y;
	J3DSys::mCurrentS.z *= info.m_scale.z;
	bool isIdentity;
	if (J3DSys::mCurrentS.x == 1.0f && J3DSys::mCurrentS.y == 1.0f && J3DSys::mCurrentS.z == 1.0f) {
		isIdentity = true;
	} else {
		isIdentity = false;
	}
	if (!isIdentity) {
		J3DMtxCalc::mMtxBuffer->_04[jntNo] = 0;
		JMAMTXApplyScale(J3DSys::mCurrentMtx, *mtx, J3DSys::mCurrentS.x, J3DSys::mCurrentS.y, J3DSys::mCurrentS.z);
		(*mtx)[0][3] = J3DSys::mCurrentMtx[0][3];
		(*mtx)[1][3] = J3DSys::mCurrentMtx[1][3];
		(*mtx)[2][3] = J3DSys::mCurrentMtx[2][3];
	} else {
		J3DMtxCalc::mMtxBuffer->_04[jntNo] = 1;
		PSMTXCopy(J3DSys::mCurrentMtx, *mtx);
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lis      r3, mCurrentS__6J3DSys@ha
	lfs      f1, 0x14(r27)
	addi     r29, r3, mCurrentS__6J3DSys@l
	lfs      f4, 0x18(r27)
	lfs      f3, 0x1c(r27)
	lha      r5, 0x10(r27)
	lwz      r4, mJoint__10J3DMtxCalc@sda21(r13)
	lfs      f0, 0(r29)
	lhz      r30, 0x14(r4)
	lwz      r28, mMtxBuffer__10J3DMtxCalc@sda21(r13)
	fmuls    f1, f1, f0
	lfs      f2, 4(r29)
	mulli    r0, r30, 0x30
	lfs      f0, 8(r29)
	lwz      r3, 0xc(r28)
	fmuls    f2, f4, f2
	fmuls    f3, f3, f0
	lha      r4, 0xe(r27)
	add      r31, r3, r0
	lha      r3, 0xc(r27)
	mr       r6, r31
	bl       J3DGetTranslateRotateMtx__FsssfffPA4_f
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r31
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	lis      r3, mCurrentS__6J3DSys@ha
	lfs      f1, 0(r27)
	lfsu     f2, mCurrentS__6J3DSys@l(r3)
	lfs      f3, 4(r29)
	fmuls    f4, f2, f1
	lfs      f0, 4(r27)
	lfs      f2, 8(r29)
	fmuls    f3, f3, f0
	lfs      f1, 8(r27)
	lfs      f0, lbl_80516A78@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f4, 0(r3)
	fcmpu    cr0, f0, f4
	stfs     f3, 4(r29)
	stfs     f1, 8(r29)
	bne      lbl_8006B520
	fcmpu    cr0, f0, f3
	bne      lbl_8006B520
	fcmpu    cr0, f0, f1
	bne      lbl_8006B520
	li       r0, 1
	b        lbl_8006B524

lbl_8006B520:
	li       r0, 0

lbl_8006B524:
	cmpwi    r0, 0
	bne      lbl_8006B580
	lwz      r5, 4(r28)
	li       r0, 0
	lis      r3, mCurrentS__6J3DSys@ha
	lis      r4, mCurrentMtx__6J3DSys@ha
	stbx     r0, r5, r30
	addi     r5, r3, mCurrentS__6J3DSys@l
	addi     r3, r4, mCurrentMtx__6J3DSys@l
	mr       r4, r31
	lfs      f1, 0(r5)
	lfs      f2, 4(r29)
	lfs      f3, 8(r29)
	bl       JMAMTXApplyScale__FPA4_CfPA4_ffff
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x2c(r31)
	b        lbl_8006B59C

lbl_8006B580:
	lwz      r5, 4(r28)
	li       r0, 1
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r31
	stbx     r0, r5, r30
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy

lbl_8006B59C:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006B5B0
 * Size:	000178
 * calcTransform__27J3DMtxCalcCalcTransformMayaFRC16J3DTransformInfo
 */
void J3DMtxCalcCalcTransformMaya::calcTransform(const J3DTransformInfo& info)
{
	u16 jntNo = J3DMtxCalc::mJoint->getJntNo();
	Mtx* mtx  = &J3DMtxCalc::mMtxBuffer->m_worldMatrices[jntNo];
	J3DGetTranslateRotateMtx(info, *mtx);
	PSMTXConcat(J3DSys::mCurrentMtx, *mtx, J3DSys::mCurrentMtx);
	if ((info.m_scale.x == 1.0f && info.m_scale.y == 1.0f && info.m_scale.z == 1.0f)) {
		J3DMtxCalc::mMtxBuffer->_04[jntNo] = 1;
	} else {
		J3DMtxCalc::mMtxBuffer->_04[jntNo] = 0;
		JMAMTXApplyScale(*mtx, *mtx, info.m_scale.x, info.m_scale.y, info.m_scale.z);
	}
	// TODO
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	lwz      r29, mJoint__10J3DMtxCalc@sda21(r13)
	lwz      r28, mMtxBuffer__10J3DMtxCalc@sda21(r13)
	lhz      r27, 0x14(r29)
	lwz      r4, 0xc(r28)
	mulli    r0, r27, 0x30
	add      r30, r4, r0
	mr       r4, r30
	bl       J3DGetTranslateRotateMtx__FRC16J3DTransformInfoPA4_f
	lfs      f1, lbl_80516A78@sda21(r2)
	lfs      f0, 0(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8006B61C
	lfs      f0, 4(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8006B61C
	lfs      f0, 8(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8006B61C
	lwz      r3, 4(r28)
	li       r0, 1
	stbx     r0, r3, r27
	b        lbl_8006B640

lbl_8006B61C:
	lwz      r4, 4(r28)
	li       r0, 0
	lfs      f1, 0(r31)
	mr       r3, r30
	stbx     r0, r4, r27
	mr       r4, r30
	lfs      f2, 4(r31)
	lfs      f3, 8(r31)
	bl       JMAMTXApplyScale__FPA4_CfPA4_ffff

lbl_8006B640:
	lbz      r0, 0x17(r29)
	cmplwi   r0, 1
	bne      lbl_8006B6D4
	lis      r3, mParentS__6J3DSys@ha
	lfsu     f1, mParentS__6J3DSys@l(r3)
	lfs      f0, 0(r30)
	fres     f3, f1
	lfs      f2, 4(r3)
	lfs      f1, 8(r3)
	fmuls    f0, f0, f3
	fres     f2, f2
	stfs     f0, 0(r30)
	lfs      f0, 4(r30)
	fmuls    f0, f0, f3
	fres     f1, f1
	stfs     f0, 4(r30)
	lfs      f0, 8(r30)
	fmuls    f0, f0, f3
	stfs     f0, 8(r30)
	lfs      f0, 0x10(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x10(r30)
	lfs      f0, 0x14(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x14(r30)
	lfs      f0, 0x18(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x18(r30)
	lfs      f0, 0x20(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r30)
	lfs      f0, 0x24(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x24(r30)
	lfs      f0, 0x28(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x28(r30)

lbl_8006B6D4:
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r30
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	mr       r4, r30
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy
	lfs      f2, 0(r31)
	lis      r3, mParentS__6J3DSys@ha
	lfs      f1, 4(r31)
	stfsu    f2, mParentS__6J3DSys@l(r3)
	lfs      f0, 8(r31)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006B728
 * Size:	000104
 * J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
 */
J3DMtxCalcAnmBase* J3DNewMtxCalcAnm(u32 type, J3DAnmTransform* p2)
{
	switch (type) {
	case 0:
		return new J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>, J3DMtxCalcJ3DSysInitBasic>(p2);
		break;
	case 1:
		return new J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>, J3DMtxCalcJ3DSysInitSoftimage>(
		    p2);
		break;
	case 2:
		return new J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>, J3DMtxCalcJ3DSysInitMaya>(p2);
		break;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8006B82C
 * Size:	00005C
 * __dt__17J3DMtxCalcAnmBaseFv
 */
J3DMtxCalcAnmBase::~J3DMtxCalcAnmBase() { }

/*
 * --INFO--
 * Address:	8006B888
 * Size:	000034
 */
void J3DJoint::appendChild(J3DJoint* newChild)
{
	if (m_child == nullptr) {
		m_child = newChild;
		return;
	}
	J3DJoint* joint;
	for (joint = m_child; joint->m_parent != nullptr; joint = joint->m_parent) { }
	joint->m_parent = newChild;
}

/*
 * --INFO--
 * Address:	8006B8BC
 * Size:	0000FC
 * __ct__8J3DJointFv
 */
J3DJoint::J3DJoint()
    : _00(0)
    , m_function(nullptr)
    , _08(0)
    , m_child(nullptr)
    , m_parent(nullptr)
    , m_jointIdx(0)
    , _16(1)
    , m_ignoreParentScaling(0)
    , m_transformInfo(j3dDefaultTransformInfo)
    , _38(0.0f)
    , m_mtxCalc(nullptr)
    , m_material(nullptr)
{
	m_yRotation = JGeometry::TVec3f(0.0f, 0.0f, 0.0f);
	_48         = JGeometry::TVec3f(0.0f, 0.0f, 0.0f);
	/*
	stwu     r1, -0x20(r1)
	li       r8, 0
	lis      r6, j3dDefaultTransformInfo@ha
	li       r0, 1
	stw      r8, 0(r3)
	lis      r5, lbl_804789C8@ha
	addi     r7, r6, j3dDefaultTransformInfo@l
	lis      r4, lbl_804789D4@ha
	stw      r8, 4(r3)
	addi     r6, r5, lbl_804789C8@l
	addi     r5, r4, lbl_804789D4@l
	lfs      f0, lbl_80516A7C@sda21(r2)
	stw      r8, 8(r3)
	stw      r8, 0xc(r3)
	stw      r8, 0x10(r3)
	sth      r8, 0x14(r3)
	stb      r0, 0x16(r3)
	stb      r8, 0x17(r3)
	lwz      r4, 0(r7)
	lwz      r0, 4(r7)
	stw      r4, 0x18(r3)
	stw      r0, 0x1c(r3)
	lwz      r4, 8(r7)
	lwz      r0, 0xc(r7)
	stw      r4, 0x20(r3)
	stw      r0, 0x24(r3)
	lwz      r4, 0x10(r7)
	lwz      r0, 0x14(r7)
	stw      r4, 0x28(r3)
	stw      r0, 0x2c(r3)
	lwz      r4, 0x18(r7)
	lwz      r0, 0x1c(r7)
	stw      r4, 0x30(r3)
	stw      r0, 0x34(r3)
	stfs     f0, 0x38(r3)
	stw      r8, 0x54(r3)
	stw      r8, 0x58(r3)
	lwz      r0, 0(r6)
	lwz      r4, 4(r6)
	stw      r0, 0x14(r1)
	lwz      r0, 8(r6)
	stw      r4, 0x18(r1)
	lfs      f0, 0x14(r1)
	stw      r0, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stfs     f0, 0x3c(r3)
	lfs      f0, 0x1c(r1)
	stfs     f1, 0x40(r3)
	stfs     f0, 0x44(r3)
	lwz      r0, 0(r5)
	lwz      r4, 4(r5)
	stw      r0, 8(r1)
	lwz      r0, 8(r5)
	stw      r4, 0xc(r1)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x48(r3)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x4c(r3)
	stfs     f0, 0x50(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006B9B8
 * Size:	00019C
 */
void J3DJoint::entryIn()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	addi     r31, r4, j3dSys@l
	lwz      r5, 0x38(r31)
	lhz      r0, 0x14(r3)
	lwz      r5, 0x84(r5)
	mulli    r0, r0, 0x30
	lwz      r4, 0x48(r31)
	lwz      r5, 0xc(r5)
	add      r30, r5, r0
	stw      r30, 0x1c(r4)
	lwz      r4, 0x4c(r31)
	stw      r30, 0x1c(r4)
	lwz      r28, 0x58(r3)
	b        lbl_8006BB38

lbl_8006BA00:
	lwz      r3, 8(r28)
	lwz      r0, 0xc(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8006BA18
	lwz      r28, 4(r28)
	b        lbl_8006BB38

lbl_8006BA18:
	lwz      r5, 0x38(r31)
	lhz      r0, 0x14(r28)
	lwz      r4, 0xc0(r5)
	slwi     r0, r0, 6
	lhz      r3, 8(r3)
	add      r29, r4, r0
	lwz      r4, 0xc4(r5)
	lwz      r0, 0x10(r29)
	mulli    r3, r3, 0x3c
	clrlwi.  r0, r0, 0x1f
	add      r27, r4, r3
	bne      lbl_8006BAAC
	lwz      r3, 0x3c(r28)
	lis      r0, 0xc000
	cmplw    r3, r0
	bge      lbl_8006BA60
	mr       r0, r3
	b        lbl_8006BA64

lbl_8006BA60:
	li       r0, 0

lbl_8006BA64:
	cmplwi   r0, 0
	beq      lbl_8006BA94
	lis      r0, 0xc000
	cmplw    r3, r0
	bge      lbl_8006BA7C
	b        lbl_8006BA80

lbl_8006BA7C:
	li       r3, 0

lbl_8006BA80:
	lwz      r12, 0(r3)
	mr       r4, r28
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8006BA94:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8006BAAC:
	mr       r3, r28
	bl       setCurrentMtx__11J3DMaterialFv
	lwz      r3, 0x3c(r28)
	lis      r0, 0xc000
	cmplw    r3, r0
	bge      lbl_8006BAC8
	b        lbl_8006BACC

lbl_8006BAC8:
	li       r3, 0

lbl_8006BACC:
	stw      r3, 0x3c(r29)
	lis      r4, j3dSys@ha
	addi     r0, r4, j3dSys@l
	mr       r3, r29
	stw      r27, 0x2c(r29)
	lwz      r4, 0x10(r28)
	lwz      r12, 0(r29)
	clrlwi   r4, r4, 0x1e
	cntlzw   r4, r4
	lwz      r12, 8(r12)
	rlwinm   r4, r4, 0x1d, 0x16, 0x1d
	add      r4, r0, r4
	lwz      r4, 0x48(r4)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8006BB34
	lwz      r4, entryNum__13J3DDrawBuffer@sda21(r13)
	mr       r3, r28
	stw      r29, 0x3c(r31)
	addi     r0, r4, 1
	stw      r0, entryNum__13J3DDrawBuffer@sda21(r13)
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8006BB34:
	lwz      r28, 4(r28)

lbl_8006BB38:
	cmplwi   r28, 0
	bne      lbl_8006BA00
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006BB54
 * Size:	0001A8
 */
void J3DJoint::recursiveCalc()
{
	Mtx v1;
	J3DMtxCalc* v2 = nullptr;
	PSMTXCopy(J3DSys::mCurrentMtx, v1);
	J3DMtxCalc* v3                 = mCurrentMtxCalc;
	JGeometry::TVec3f tempCurrentS = J3DSys::mCurrentS;
	JGeometry::TVec3f tempParentS  = J3DSys::mParentS;
	if (m_mtxCalc != nullptr) {
		J3DMtxCalc::mJoint = this;
		mCurrentMtxCalc    = m_mtxCalc;
		m_mtxCalc->calc();
		v2 = v3;
	} else {
		if (mCurrentMtxCalc != nullptr) {
			J3DMtxCalc::mJoint = this;
			mCurrentMtxCalc->calc();
		}
	}
	if (m_function != nullptr) {
		m_function(this, 0);
	}
	if (m_child != nullptr) {
		m_child->recursiveCalc();
	}
	PSMTXCopy(v1, J3DSys::mCurrentMtx);
	J3DSys::mCurrentS = tempCurrentS;
	J3DSys::mParentS  = tempParentS;
	if (v2 != nullptr) {
		mCurrentMtxCalc = v2;
	}
	if (m_function != nullptr) {
		m_function(this, 1);
	}
	if (m_parent != nullptr) {
		m_parent->recursiveCalc();
	}

	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	lis      r4, mCurrentMtx__6J3DSys@ha
	mr       r31, r3
	addi     r3, r4, mCurrentMtx__6J3DSys@l
	li       r27, 0
	addi     r4, r1, 8
	bl       PSMTXCopy
	lwz      r3, 0x54(r31)
	lis      r5, mCurrentS__6J3DSys@ha
	lis      r4, mParentS__6J3DSys@ha
	addi     r29, r5, mCurrentS__6J3DSys@l
	cmplwi   r3, 0
	addi     r30, r4, mParentS__6J3DSys@l
	lfs      f31, 0(r29)
	lfs      f30, 4(r29)
	lfs      f29, 8(r29)
	lfs      f28, 0(r30)
	lfs      f27, 4(r30)
	lfs      f26, 8(r30)
	beq      lbl_8006BC00
	lwz      r27, mCurrentMtxCalc__8J3DJoint@sda21(r13)
	stw      r31, mJoint__10J3DMtxCalc@sda21(r13)
	stw      r3, mCurrentMtxCalc__8J3DJoint@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	b        lbl_8006BC20

lbl_8006BC00:
	lwz      r3, mCurrentMtxCalc__8J3DJoint@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8006BC20
	stw      r31, mJoint__10J3DMtxCalc@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_8006BC20:
	lwz      r28, 4(r31)
	cmplwi   r28, 0
	beq      lbl_8006BC40
	mr       r12, r28
	mr       r3, r31
	li       r4, 0
	mtctr    r12
	bctrl

lbl_8006BC40:
	lwz      r3, 0xc(r31)
	cmplwi   r3, 0
	beq      lbl_8006BC50
	bl       recursiveCalc__8J3DJointFv

lbl_8006BC50:
	lis      r4, mCurrentMtx__6J3DSys@ha
	addi     r3, r1, 8
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy
	lis      r4, mCurrentS__6J3DSys@ha
	lis      r3, mParentS__6J3DSys@ha
	cmplwi   r27, 0
	stfs     f31, mCurrentS__6J3DSys@l(r4)
	stfs     f30, 4(r29)
	stfs     f29, 8(r29)
	stfs     f28, mParentS__6J3DSys@l(r3)
	stfs     f27, 4(r30)
	stfs     f26, 8(r30)
	beq      lbl_8006BC8C
	stw      r27, mCurrentMtxCalc__8J3DJoint@sda21(r13)

lbl_8006BC8C:
	cmplwi   r28, 0
	beq      lbl_8006BCA8
	mr       r12, r28
	mr       r3, r31
	li       r4, 1
	mtctr    r12
	bctrl

lbl_8006BCA8:
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_8006BCB8
	bl       recursiveCalc__8J3DJointFv

lbl_8006BCB8:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006BCFC
 * Size:	000008
 */
J3DAnmTransform* J3DMtxCalcAnmBase::getAnmTransform()
{
	return _04;
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006BD04
 * Size:	000008
 */
void J3DMtxCalcAnmBase::setAnmTransform(J3DAnmTransform* a1)
{
	// Generated from stw r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	8006BD0C
 * Size:	00006C
 */
template <>
J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>, J3DMtxCalcJ3DSysInitMaya>::~J3DMtxCalcAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1B30
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1BB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x47CA8

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BD78
 * Size:	000094
 * init__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>FRC3VecRA3_A4_Cf
 */
// template <>
// void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>, J3DMtxCalcJ3DSysInitMaya>::init(
//     const Vec&, const float (&)[3][4])
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  mr        r10, r4
// 	  lis       r3, 0x8048
// 	  stw       r0, 0x24(r1)
// 	  subi      r9, r3, 0x7644
// 	  lfs       f5, 0x0(r10)
// 	  lis       r6, 0x8051
// 	  lwz       r4, 0x0(r9)
// 	  lis       r7, 0x8051
// 	  lwz       r8, 0x4(r9)
// 	  lis       r3, 0x8051
// 	  stw       r4, 0x8(r1)
// 	  subi      r4, r3, 0xC2C
// 	  lwz       r0, 0x8(r9)
// 	  mr        r3, r5
// 	  stw       r8, 0xC(r1)
// 	  lfs       f1, 0x8(r1)
// 	  stw       r0, 0x10(r1)
// 	  lfs       f2, 0xC(r1)
// 	  stfsu     f1, -0xBF0(r7)
// 	  lfs       f3, 0x10(r1)
// 	  stfs      f2, 0x4(r7)
// 	  lfs       f4, 0x4(r10)
// 	  stfsu     f5, -0xBFC(r6)
// 	  lfs       f0, 0x8(r10)
// 	  stfs      f3, 0x8(r7)
// 	  lfs       f1, 0x0(r10)
// 	  lfs       f2, 0x4(r10)
// 	  lfs       f3, 0x8(r10)
// 	  stfs      f4, 0x4(r6)
// 	  stfs      f0, 0x8(r6)
// 	  bl        -0x36D5C
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8006BE0C
 * Size:	000008
 */
template <>
void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>, J3DMtxCalcJ3DSysInitMaya>::setAnmTransform(
    J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BE14
 * Size:	00006C
 */
template <>
J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>,
                    J3DMtxCalcJ3DSysInitSoftimage>::~J3DMtxCalcAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1B5C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1BB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x47DB0

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BE80
 * Size:	00004C
 * init__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>FRC3VecRA3_A4_Cf
 */
// template <>
// void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>, J3DMtxCalcJ3DSysInitSoftimage>::init(
//     const Vec&, const float (&)[3][4])
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  lis       r3, 0x8051
// 	  lfs       f2, 0x0(r4)
// 	  stw       r0, 0x14(r1)
// 	  subi      r6, r3, 0xBFC
// 	  lfs       f1, 0x4(r4)
// 	  lis       r3, 0x8051
// 	  lfs       f0, 0x8(r4)
// 	  subi      r4, r3, 0xC2C
// 	  stfs      f2, 0x0(r6)
// 	  mr        r3, r5
// 	  stfs      f1, 0x4(r6)
// 	  stfs      f0, 0x8(r6)
// 	  bl        0x7E414
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8006BECC
 * Size:	000008
 */
template <>
void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>,
                         J3DMtxCalcJ3DSysInitSoftimage>::setAnmTransform(J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BED4
 * Size:	00006C
 */
template <>
J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>, J3DMtxCalcJ3DSysInitBasic>::~J3DMtxCalcAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1B88
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1BB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  subi      r0, r3, 0x4C4
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x47E70

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BF40
 * Size:	000098
 * init__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>FRC3VecRA3_A4_Cf
 */
// template <>
// void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>, J3DMtxCalcJ3DSysInitBasic>::init(
//     const Vec&, const float (&)[3][4])
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  mr        r10, r4
// 	  lis       r3, 0x8048
// 	  stw       r0, 0x24(r1)
// 	  subi      r8, r3, 0x7650
// 	  lis       r9, 0x8051
// 	  lis       r6, 0x8051
// 	  lwz       r4, 0x0(r8)
// 	  lis       r3, 0x8051
// 	  lwz       r7, 0x4(r8)
// 	  lwz       r0, 0x8(r8)
// 	  subi      r8, r9, 0xBFC
// 	  stw       r4, 0x8(r1)
// 	  subi      r4, r3, 0xC2C
// 	  lfs       f1, 0x0(r10)
// 	  mr        r3, r5
// 	  stw       r7, 0xC(r1)
// 	  lfs       f5, 0x8(r1)
// 	  stw       r0, 0x10(r1)
// 	  lfs       f2, 0x4(r10)
// 	  lfs       f3, 0x8(r10)
// 	  stfs      f1, 0x0(r8)
// 	  lfs       f4, 0xC(r1)
// 	  stfsu     f5, -0xBF0(r6)
// 	  lfs       f0, 0x10(r1)
// 	  stfs      f2, 0x4(r8)
// 	  lfs       f1, 0x0(r10)
// 	  stfs      f3, 0x8(r8)
// 	  lfs       f2, 0x4(r10)
// 	  lfs       f3, 0x8(r10)
// 	  stfs      f4, 0x4(r6)
// 	  stfs      f0, 0x8(r6)
// 	  bl        -0x36F28
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8006BFD8
 * Size:	000008
 */
template <>
void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>, J3DMtxCalcJ3DSysInitBasic>::setAnmTransform(
    J3DAnmTransform*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006BFE0
 * Size:	000178
 * calc__116J3DMtxCalcAnimation<65J3DMtxCalcAnimationAdaptorDefault<28J3DMtxCalcCalcTransformBasic>,25J3DMtxCalcJ3DSysInitBasic>Fv
 */
// template <> void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformBasic>, J3DMtxCalcJ3DSysInitBasic>::calc()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x40(r1)
// 	  mflr      r0
// 	  stw       r0, 0x44(r1)
// 	  stmw      r27, 0x2C(r1)
// 	  mr        r27, r3
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x68
// 	  mr        r3, r27
// 	  lwz       r4, -0x7674(r13)
// 	  lwz       r12, 0x0(r27)
// 	  lhz       r30, 0x14(r4)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r30
// 	  addi      r5, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  addi      r30, r1, 0x8
// 	  b         .loc_0x70

// 	.loc_0x68:
// 	  lwz       r3, -0x7674(r13)
// 	  addi      r30, r3, 0x18

// 	.loc_0x70:
// 	  lis       r3, 0x8051
// 	  lwz       r27, -0x7678(r13)
// 	  subi      r31, r3, 0xBFC
// 	  lwz       r4, -0x7674(r13)
// 	  lfs       f1, 0x0(r31)
// 	  mr        r3, r30
// 	  lfs       f0, 0x0(r30)
// 	  lhz       r28, 0x14(r4)
// 	  fmuls     f0, f1, f0
// 	  lwz       r4, 0xC(r27)
// 	  mulli     r0, r28, 0x30
// 	  lfs       f2, 0x4(r31)
// 	  lfs       f1, 0x8(r31)
// 	  stfs      f0, 0x0(r31)
// 	  add       r29, r4, r0
// 	  lfs       f0, 0x4(r30)
// 	  mr        r4, r29
// 	  fmuls     f0, f2, f0
// 	  stfs      f0, 0x4(r31)
// 	  lfs       f0, 0x8(r30)
// 	  fmuls     f0, f1, f0
// 	  stfs      f0, 0x8(r31)
// 	  bl        -0xCF3C
// 	  lis       r3, 0x8051
// 	  lfs       f1, -0x78E8(r2)
// 	  lfs       f0, -0xBFC(r3)
// 	  fcmpu     cr0, f1, f0
// 	  bne-      .loc_0x100
// 	  lfs       f0, 0x4(r31)
// 	  fcmpu     cr0, f1, f0
// 	  bne-      .loc_0x100
// 	  lfs       f0, 0x8(r31)
// 	  fcmpu     cr0, f1, f0
// 	  bne-      .loc_0x100
// 	  li        r0, 0x1
// 	  b         .loc_0x104

// 	.loc_0x100:
// 	  li        r0, 0

// 	.loc_0x104:
// 	  cmpwi     r0, 0
// 	  bne-      .loc_0x134
// 	  lwz       r5, 0x4(r27)
// 	  li        r0, 0
// 	  mr        r3, r29
// 	  mr        r4, r29
// 	  stbx      r0, r5, r28
// 	  lfs       f1, 0x0(r30)
// 	  lfs       f2, 0x4(r30)
// 	  lfs       f3, 0x8(r30)
// 	  bl        -0x37070
// 	  b         .loc_0x140

// 	.loc_0x134:
// 	  lwz       r3, 0x4(r27)
// 	  li        r0, 0x1
// 	  stbx      r0, r3, r28

// 	.loc_0x140:
// 	  lis       r3, 0x8051
// 	  mr        r4, r29
// 	  subi      r3, r3, 0xC2C
// 	  mr        r5, r3
// 	  bl        0x7E1D0
// 	  lis       r3, 0x8051
// 	  mr        r4, r29
// 	  subi      r3, r3, 0xC2C
// 	  bl        0x7E18C
// 	  lmw       r27, 0x2C(r1)
// 	  lwz       r0, 0x44(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x40
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8006C158
 * Size:	0001C4
 * calc__124J3DMtxCalcAnimation<69J3DMtxCalcAnimationAdaptorDefault<32J3DMtxCalcCalcTransformSoftimage>,29J3DMtxCalcJ3DSysInitSoftimage>Fv
 */
// template <>
// void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformSoftimage>, J3DMtxCalcJ3DSysInitSoftimage>::calc()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x40(r1)
// 	  mflr      r0
// 	  stw       r0, 0x44(r1)
// 	  stmw      r27, 0x2C(r1)
// 	  mr        r27, r3
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x68
// 	  mr        r3, r27
// 	  lwz       r4, -0x7674(r13)
// 	  lwz       r12, 0x0(r27)
// 	  lhz       r28, 0x14(r4)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r28
// 	  addi      r5, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  addi      r28, r1, 0x8
// 	  b         .loc_0x70

// 	.loc_0x68:
// 	  lwz       r3, -0x7674(r13)
// 	  addi      r28, r3, 0x18

// 	.loc_0x70:
// 	  lwz       r4, -0x7674(r13)
// 	  lis       r3, 0x8051
// 	  subi      r29, r3, 0xBFC
// 	  lwz       r27, -0x7678(r13)
// 	  lhz       r30, 0x14(r4)
// 	  lfs       f1, 0x14(r28)
// 	  lfs       f0, 0x0(r29)
// 	  mulli     r0, r30, 0x30
// 	  lwz       r3, 0xC(r27)
// 	  lfs       f4, 0x18(r28)
// 	  fmuls     f1, f1, f0
// 	  lfs       f2, 0x4(r29)
// 	  add       r31, r3, r0
// 	  lfs       f3, 0x1C(r28)
// 	  mr        r6, r31
// 	  lfs       f0, 0x8(r29)
// 	  fmuls     f2, f4, f2
// 	  lha       r3, 0xC(r28)
// 	  fmuls     f3, f3, f0
// 	  lha       r4, 0xE(r28)
// 	  lha       r5, 0x10(r28)
// 	  bl        -0xD000
// 	  lis       r3, 0x8051
// 	  mr        r4, r31
// 	  subi      r3, r3, 0xC2C
// 	  mr        r5, r3
// 	  bl        0x7E0D0
// 	  lis       r3, 0x8051
// 	  lfs       f0, 0x0(r28)
// 	  lfsu      f1, -0xBFC(r3)
// 	  lfs       f3, 0x4(r29)
// 	  fmuls     f1, f1, f0
// 	  lfs       f0, -0x78E8(r2)
// 	  lfs       f2, 0x8(r29)
// 	  stfs      f1, 0x0(r3)
// 	  fcmpu     cr0, f0, f1
// 	  lfs       f1, 0x4(r28)
// 	  fmuls     f3, f3, f1
// 	  stfs      f3, 0x4(r29)
// 	  lfs       f1, 0x8(r28)
// 	  fmuls     f1, f2, f1
// 	  stfs      f1, 0x8(r29)
// 	  bne-      .loc_0x134
// 	  fcmpu     cr0, f0, f3
// 	  bne-      .loc_0x134
// 	  fcmpu     cr0, f0, f1
// 	  bne-      .loc_0x134
// 	  li        r0, 0x1
// 	  b         .loc_0x138

// 	.loc_0x134:
// 	  li        r0, 0

// 	.loc_0x138:
// 	  cmpwi     r0, 0
// 	  bne-      .loc_0x194
// 	  lwz       r5, 0x4(r27)
// 	  li        r0, 0
// 	  lis       r3, 0x8051
// 	  lis       r4, 0x8051
// 	  stbx      r0, r5, r30
// 	  subi      r5, r3, 0xBFC
// 	  subi      r3, r4, 0xC2C
// 	  mr        r4, r31
// 	  lfs       f1, 0x0(r5)
// 	  lfs       f2, 0x4(r29)
// 	  lfs       f3, 0x8(r29)
// 	  bl        -0x37228
// 	  lis       r3, 0x8051
// 	  subi      r3, r3, 0xC2C
// 	  lfs       f0, 0xC(r3)
// 	  stfs      f0, 0xC(r31)
// 	  lfs       f0, 0x1C(r3)
// 	  stfs      f0, 0x1C(r31)
// 	  lfs       f0, 0x2C(r3)
// 	  stfs      f0, 0x2C(r31)
// 	  b         .loc_0x1B0

// 	.loc_0x194:
// 	  lwz       r5, 0x4(r27)
// 	  li        r0, 0x1
// 	  lis       r3, 0x8051
// 	  mr        r4, r31
// 	  stbx      r0, r5, r30
// 	  subi      r3, r3, 0xC2C
// 	  bl        0x7DFC8

// 	.loc_0x1B0:
// 	  lmw       r27, 0x2C(r1)
// 	  lwz       r0, 0x44(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x40
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8006C31C
 * Size:	000088
 * calc__114J3DMtxCalcAnimation<64J3DMtxCalcAnimationAdaptorDefault<27J3DMtxCalcCalcTransformMaya>,24J3DMtxCalcJ3DSysInitMaya>Fv
 */
// template <> void J3DMtxCalcAnimation<J3DMtxCalcAnimationAdaptorDefault<J3DMtxCalcCalcTransformMaya>, J3DMtxCalcJ3DSysInitMaya>::calc()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x30(r1)
// 	  mflr      r0
// 	  stw       r0, 0x34(r1)
// 	  stw       r31, 0x2C(r1)
// 	  mr        r31, r3
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x68
// 	  mr        r3, r31
// 	  lwz       r4, -0x7674(r13)
// 	  lwz       r12, 0x0(r31)
// 	  lhz       r31, 0x14(r4)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r31
// 	  addi      r5, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  addi      r3, r1, 0x8
// 	  b         .loc_0x70

// 	.loc_0x68:
// 	  lwz       r3, -0x7674(r13)
// 	  addi      r3, r3, 0x18

// 	.loc_0x70:
// 	  bl        -0xDDC
// 	  lwz       r0, 0x34(r1)
// 	  lwz       r31, 0x2C(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x30
// 	  blr
// 	*/
// }
