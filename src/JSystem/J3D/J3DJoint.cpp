#include "JSystem/J3D/J3DJoint.h"
#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTransform.h"
#include "JSystem/J3D/J3DModel.h"
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
void J3DMtxCalcJ3DSysInitBasic::init(const Vec& scale, const Mtx& mtx)
{
	J3DSys::mCurrentS = scale;
	J3DSys::mParentS  = (Vec) { 1.0f, 1.0f, 1.0f };
	JMAMTXApplyScale(mtx, J3DSys::mCurrentMtx, J3DSys::mCurrentS.x, J3DSys::mCurrentS.y, J3DSys::mCurrentS.z);
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
void J3DMtxCalcJ3DSysInitMaya::init(const Vec& scale, const Mtx& mtx)
{
	J3DSys::mParentS  = (Vec) { 1.0f, 1.0f, 1.0f };
	J3DSys::mCurrentS = scale;
	JMAMTXApplyScale(mtx, J3DSys::mCurrentMtx, J3DSys::mCurrentS.x, J3DSys::mCurrentS.y, J3DSys::mCurrentS.z);

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

inline s32 checkScaleOne(const Vec& vec)
{
	if (vec.x == 1.0f && vec.y == 1.0f && vec.z == 1.0f) {
		return true;
	} else {
		return false;
	}
}

J3DJoint* J3DMtxCalc::mJoint;

/*
 * --INFO--
 * Address:	8006B330
 * Size:	000118
 * calcTransform__28J3DMtxCalcCalcTransformBasicFRC16J3DTransformInfo
 */
void J3DMtxCalcCalcTransformBasic::calcTransform(const J3DTransformInfo& transInfo)
{
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();
	u16 jntNo            = J3DMtxCalc::getJoint()->getJntNo();

	MtxP anmMtx = mtxBuf->getAnmMtx(jntNo);

	J3DSys::mCurrentS.x *= transInfo.mScale.x;
	J3DSys::mCurrentS.y *= transInfo.mScale.y;
	J3DSys::mCurrentS.z *= transInfo.mScale.z;
	J3DGetTranslateRotateMtx(transInfo, anmMtx);

	if (!checkScaleOne(J3DSys::mCurrentS)) {
		mtxBuf->setScaleFlag(jntNo, 0);
		JMAMTXApplyScale(anmMtx, anmMtx, transInfo.mScale.x, transInfo.mScale.y, transInfo.mScale.z);
	} else {
		mtxBuf->setScaleFlag(jntNo, 1);
	}

	PSMTXConcat(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentMtx);
	PSMTXCopy(J3DSys::mCurrentMtx, anmMtx);
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
void J3DMtxCalcCalcTransformSoftimage::calcTransform(const J3DTransformInfo& transInfo)
{
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();
	u16 jntNo            = J3DMtxCalc::getJoint()->getJntNo();

	MtxP anmMtx = mtxBuf->getAnmMtx(jntNo);

	J3DGetTranslateRotateMtx(transInfo.mRotation.x, transInfo.mRotation.y, transInfo.mRotation.z,
	                         transInfo.mTranslation.x * J3DSys::mCurrentS.x, transInfo.mTranslation.y * J3DSys::mCurrentS.y,
	                         transInfo.mTranslation.z * J3DSys::mCurrentS.z, anmMtx);
	PSMTXConcat(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentMtx);

	J3DSys::mCurrentS.x *= transInfo.mScale.x;
	J3DSys::mCurrentS.y *= transInfo.mScale.y;
	J3DSys::mCurrentS.z *= transInfo.mScale.z;

	if (!checkScaleOne(J3DSys::mCurrentS)) {
		mtxBuf->setScaleFlag(jntNo, 0);
		JMAMTXApplyScale(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentS.x, J3DSys::mCurrentS.y, J3DSys::mCurrentS.z);
		anmMtx[0][3] = J3DSys::mCurrentMtx[0][3];
		anmMtx[1][3] = J3DSys::mCurrentMtx[1][3];
		anmMtx[2][3] = J3DSys::mCurrentMtx[2][3];
	} else {
		mtxBuf->setScaleFlag(jntNo, 1);
		PSMTXCopy(J3DSys::mCurrentMtx, anmMtx);
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
void J3DMtxCalcCalcTransformMaya::calcTransform(const J3DTransformInfo& transInfo)
{
	J3DJoint* joint      = J3DMtxCalc::getJoint();
	J3DMtxBuffer* mtxBuf = J3DMtxCalc::getMtxBuffer();

	u16 jntNo = joint->getJntNo();

	MtxP anmMtx = mtxBuf->getAnmMtx(jntNo);

	J3DGetTranslateRotateMtx(transInfo, anmMtx);

	if (transInfo.mScale.x == 1.0f && transInfo.mScale.y == 1.0f && transInfo.mScale.z == 1.0f) {
		mtxBuf->setScaleFlag(jntNo, 1);
	} else {
		mtxBuf->setScaleFlag(jntNo, 0);
		JMAMTXApplyScale(anmMtx, anmMtx, transInfo.mScale.x, transInfo.mScale.y, transInfo.mScale.z);
	}

	if (joint->getScaleCompensate() == 1) {
		f32 invX = JMath::fastReciprocal(J3DSys::mParentS.x);
		f32 invY = JMath::fastReciprocal(J3DSys::mParentS.y);
		f32 invZ = JMath::fastReciprocal(J3DSys::mParentS.z);

		anmMtx[0][0] *= invX;
		anmMtx[0][1] *= invX;
		anmMtx[0][2] *= invX;
		anmMtx[1][0] *= invY;
		anmMtx[1][1] *= invY;
		anmMtx[1][2] *= invY;
		anmMtx[2][0] *= invZ;
		anmMtx[2][1] *= invZ;
		anmMtx[2][2] *= invZ;
	}

	PSMTXConcat(J3DSys::mCurrentMtx, anmMtx, J3DSys::mCurrentMtx);
	PSMTXCopy(J3DSys::mCurrentMtx, anmMtx);

	J3DSys::mParentS.x = transInfo.mScale.x;
	J3DSys::mParentS.y = transInfo.mScale.y;
	J3DSys::mParentS.z = transInfo.mScale.z;
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
	if (mChild == NULL) {
		mChild = newChild;
	} else {
		J3DJoint* curChild = mChild;
		while (curChild->getYounger() != nullptr) {
			curChild = curChild->getYounger();
		}
		curChild->setYounger(newChild);
	}
}

struct copyhelper {
	u32 x[8];
};

/*
 * --INFO--
 * Address:	8006B8BC
 * Size:	0000FC
 * __ct__8J3DJointFv
 */
J3DJoint::J3DJoint()
{
	mCallBackUserData = nullptr;
	mFunction         = nullptr;
	_08               = nullptr;
	mChild            = nullptr;
	mYounger          = nullptr;
	mJointIdx         = 0;
	mKind             = 1;
	mScaleCompensate  = false;
	// "This line is probably a fake match but the normal = works nothing like this." - TP
	*(copyhelper*)&mTransformInfo = *(copyhelper*)&j3dDefaultTransformInfo;
	mBoundingSphereRadius         = 0.0f;
	mMtxCalc                      = nullptr;
	mMaterial                     = nullptr;

	Vec init  = { 0.0f, 0.0f, 0.0f };
	mMin      = init;
	Vec init2 = { 0.0f, 0.0f, 0.0f };
	mMax      = init2;
}

/*
 * --INFO--
 * Address:	8006B9B8
 * Size:	00019C
 */
void J3DJoint::entryIn()
{
	MtxP anmMtx = j3dSys.getModel()->mMtxBuffer->getAnmMtx(mJointIdx);
	j3dSys.getDrawBuffer(0)->setZMtx(anmMtx);
	j3dSys.getDrawBuffer(1)->setZMtx(anmMtx);
	for (J3DMaterial* mesh = mMaterial; mesh != nullptr;) {
		if (mesh->getShape()->checkFlag(1)) {
			mesh = mesh->getNext();
		} else {
			J3DMatPacket* matPacket     = j3dSys.getModel()->getMatPacket(mesh->getIndex());
			J3DShapePacket* shapePacket = j3dSys.getModel()->getShapePacket(mesh->getShape()->getIndex());
			if (!matPacket->isLocked()) {
				if (mesh->getMaterialAnm()) {
					J3DMaterialAnm* piVar8 = mesh->getMaterialAnm();
					piVar8->calc(mesh);
				}
				mesh->calc(anmMtx);
			}
			mesh->setCurrentMtx();
			matPacket->setMaterialAnmID(mesh->getMaterialAnm());
			matPacket->setShapePacket(shapePacket);
			J3DDrawBuffer* drawBuffer = j3dSys.getDrawBuffer(mesh->isDrawModeOpaTexEdge());
			if ((u8)matPacket->entry(drawBuffer)) {
				j3dSys.setMatPacket(matPacket);
				J3DDrawBuffer::entryNum++;
				mesh->makeDisplayList();
			}
			mesh = mesh->getNext();
		}
	}
}

J3DMtxCalc* J3DJoint::mCurrentMtxCalc;

/*
 * --INFO--
 * Address:	8006BB54
 * Size:	0001A8
 */
void J3DJoint::recursiveCalc()
{
	J3DMtxCalc* prevMtxCalc = nullptr;
	Mtx prevCurrentMtx;
	PSMTXCopy(J3DSys::mCurrentMtx, prevCurrentMtx);
	f32 currentX = J3DSys::mCurrentS.x;
	f32 currentY = J3DSys::mCurrentS.y;
	f32 currentZ = J3DSys::mCurrentS.z;
	f32 parentX  = J3DSys::mParentS.x;
	f32 parentY  = J3DSys::mParentS.y;
	f32 parentZ  = J3DSys::mParentS.z;
	if (getMtxCalc() != nullptr) {
		prevMtxCalc        = getCurrentMtxCalc();
		J3DMtxCalc* piVar2 = this->getMtxCalc();
		setCurrentMtxCalc(piVar2);
		J3DMtxCalc::setJoint(this);
		piVar2->calc();
	} else {
		if (getCurrentMtxCalc() != nullptr) {
			J3DMtxCalc* uVar6 = getCurrentMtxCalc();
			J3DMtxCalc::setJoint(this);
			uVar6->calc();
		}
	}

	J3DJointCallBack jointCallback = getCallBack();
	if (jointCallback != nullptr) {
		(*jointCallback)(this, 0);
	}

	J3DJoint* child = getChild();
	if (child != NULL) {
		child->recursiveCalc();
	}
	PSMTXCopy(prevCurrentMtx, J3DSys::mCurrentMtx);

	J3DSys::mCurrentS.x = currentX;
	J3DSys::mCurrentS.y = currentY;
	J3DSys::mCurrentS.z = currentZ;
	J3DSys::mParentS.x  = parentX;
	J3DSys::mParentS.y  = parentY;
	J3DSys::mParentS.z  = parentZ;

	if (prevMtxCalc != nullptr) {
		setCurrentMtxCalc(prevMtxCalc);
	}
	if (jointCallback != nullptr) {
		(*jointCallback)(this, 1);
	}

	J3DJoint* younger = getYounger();
	if (younger != nullptr) {
		younger->recursiveCalc();
	}
}
