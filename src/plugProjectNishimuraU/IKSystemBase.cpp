#include "Game/IKSystemBase.h"
#include "Game/MapMgr.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BFA0
    lbl_8051BFA0:
        .4byte 0x00000000
    .global lbl_8051BFA4
    lbl_8051BFA4:
        .4byte 0x40000000
    .global lbl_8051BFA8
    lbl_8051BFA8:
        .float 1.0
    .global lbl_8051BFAC
    lbl_8051BFAC:
        .4byte 0xC6480000
    .global lbl_8051BFB0
    lbl_8051BFB0:
        .4byte 0x40C90FDB
    .global lbl_8051BFB4
    lbl_8051BFB4:
        .4byte 0x43A2F983
    .global lbl_8051BFB8
    lbl_8051BFB8:
        .4byte 0xC3A2F983
        .4byte 0x00000000
    .global lbl_8051BFC0
    lbl_8051BFC0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051BFC8
    lbl_8051BFC8:
        .4byte 0x3FAA3D71
    .global lbl_8051BFCC
    lbl_8051BFCC:
        .float 0.25
    .global lbl_8051BFD0
    lbl_8051BFD0:
        .4byte 0x42C80000
    .global lbl_8051BFD4
    lbl_8051BFD4:
        .4byte 0xBF800000
*/

namespace Game {
/*
 * --INFO--
 * Address:	802A9E5C
 * Size:	000070
 */
IKSystemBase::IKSystemBase()
{
	m_enabled     = false;
	_03           = true;
	m_onGround    = true;
	m_scaleJoints = false;

	m_bendRatio = 0.0f;
	m_moveRatio = 0.0f;

	m_parameters = nullptr;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r6, 0xc
	li       r7, 3
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x28
	bl       __construct_array
	li       r4, 0
	li       r0, 1
	stb      r4, 0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051BFA0@sda21(r2)
	stb      r0, 3(r31)
	stb      r0, 2(r31)
	stb      r4, 4(r31)
	stfs     f0, 8(r31)
	stfs     f0, 0xc(r31)
	stw      r4, 0x58(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A9ECC
 * Size:	000030
 */
void IKSystemBase::init()
{
	m_enabled     = false;
	_03           = true;
	m_onGround    = true;
	m_scaleJoints = false;

	m_bendRatio = 0.0f;
	m_moveRatio = 0.0f;
	m_timer     = 0.0f;

	m_parameters = nullptr;

	/*
	li       r4, 0
	li       r0, 1
	stb      r4, 0(r3)
	lfs      f0, lbl_8051BFA0@sda21(r2)
	stb      r0, 3(r3)
	stb      r0, 2(r3)
	stb      r4, 4(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	stw      r4, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A9EFC
 * Size:	000010
 */
void IKSystemBase::setLegJointMatrix(int index, Matrixf* joint)
{
	m_legJointMatrices[index] = joint;
	/*
	slwi     r0, r4, 2
	add      r3, r3, r0
	stw      r5, 0x4c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A9F0C
 * Size:	000008
 */
void IKSystemBase::setParameters(IKSystemParms* params) { m_parameters = params; }

/*
 * --INFO--
 * Address:	802A9F14
 * Size:	0000F0
 */
void IKSystemBase::startProgramedIK()
{
	m_enabled     = true;
	m_blendMotion = false;
	m_scaleJoints = false;

	m_bendRatio = 0.0f;
	m_moveRatio = 2.0f;
	m_timer     = 0.0f;

	// TODO!

	m_targetPosition.x = _50.m_matrix.mtxView[0][1];
	m_targetPosition.y = _50.m_matrix.mtxView[1][1];
	m_targetPosition.z = _50.m_matrix.mtxView[2][1];

	// m_distance1 = distance(m_legJointMatrices[0].m_matrix.flippedVectorView.z, m_targetPosition);
	// m_distance2 = distance(m_targetPosition, _50.m_matrix.flippedVectorView.z);

	/*
	li       r4, 1
	li       r0, 0
	stb      r4, 0(r3)
	lfs      f2, lbl_8051BFA0@sda21(r2)
	stb      r0, 1(r3)
	lfs      f0, lbl_8051BFA4@sda21(r2)
	stb      r0, 4(r3)
	stfs     f2, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f2, 0x10(r3)
	lwz      r4, 0x54(r3)
	lfs      f3, 0x2c(r4)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f3, 0x24(r3)
	lwz      r4, 0x4c(r3)
	lwz      r5, 0x50(r3)
	lfs      f0, 0x1c(r4)
	lfs      f5, 0x1c(r5)
	lfs      f6, 0x2c(r5)
	fsubs    f3, f0, f5
	lfs      f0, 0x2c(r4)
	lfs      f4, 0xc(r5)
	lfs      f1, 0xc(r4)
	fsubs    f0, f0, f6
	fmuls    f3, f3, f3
	fsubs    f1, f1, f4
	fmuls    f7, f0, f0
	fmadds   f0, f1, f1, f3
	fadds    f0, f7, f0
	fcmpo    cr0, f0, f2
	ble      lbl_802A9FAC
	ble      lbl_802A9FB0
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_802A9FB0

lbl_802A9FAC:
	fmr      f0, f2

lbl_802A9FB0:
	stfs     f0, 0x14(r3)
	lfs      f0, lbl_8051BFA0@sda21(r2)
	lfs      f1, 0x20(r3)
	lfs      f2, 0x1c(r3)
	fsubs    f3, f5, f1
	lfs      f1, 0x24(r3)
	fsubs    f2, f4, f2
	fsubs    f1, f6, f1
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802A9FF8
	ble      lbl_802A9FFC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802A9FFC

lbl_802A9FF8:
	fmr      f1, f0

lbl_802A9FFC:
	stfs     f1, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA004
 * Size:	0000F4
 */
void IKSystemBase::startMovePosition(Vector3f& pos)
{
	m_onGround = false;

	m_bendRatio = 0.0f;
	m_moveRatio = 0.0f;
	m_timer     = 0.0f;

	// Set top position directly
	m_ikPositions[0] = m_targetPosition;

	// Set end position to the floor
	pos.y            = mapMgr->getMinY(pos);
	m_ikPositions[2] = pos;

	// Work out the position inbetween using the parameters
	f32 fc  = m_parameters->_0C;
	f32 fcn = 1.0f - m_parameters->_0C;

	m_ikPositions[1].x = (fc * m_ikPositions[2].x) + (fcn * m_ikPositions[0].x);
	m_ikPositions[1].y = (fc * m_ikPositions[2].y) + (fcn * m_ikPositions[0].y);
	m_ikPositions[1].z = (fc * m_ikPositions[2].z) + (fcn * m_ikPositions[0].z);

	// Apply a vertical offset for the artists to change
	m_ikPositions[1].y += m_parameters->m_heightOffset;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BFA0@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stb      r0, 2(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x28(r3)
	lfs      f0, 0x20(r3)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x24(r3)
	stfs     f0, 0x30(r3)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 4(r31)
	lfs      f2, lbl_8051BFA8@sda21(r2)
	lfs      f0, 0(r31)
	stfs     f0, 0x40(r30)
	lfs      f0, 4(r31)
	stfs     f0, 0x44(r30)
	lfs      f0, 8(r31)
	stfs     f0, 0x48(r30)
	lwz      r3, 0x58(r30)
	lfs      f0, 0x28(r30)
	lfs      f3, 0xc(r3)
	lfs      f1, 0x40(r30)
	fsubs    f2, f2, f3
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x34(r30)
	lfs      f0, 0x2c(r30)
	lfs      f1, 0x44(r30)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x38(r30)
	lfs      f0, 0x30(r30)
	lfs      f1, 0x48(r30)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x3c(r30)
	lwz      r3, 0x58(r30)
	lfs      f1, 0x38(r30)
	lfs      f0, 0x10(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x38(r30)
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
 * Address:	802AA0F8
 * Size:	00000C
 */
void IKSystemBase::startBlendMotion() { m_blendMotion = true; }

/*
 * --INFO--
 * Address:	802AA104
 * Size:	00000C
 */
void IKSystemBase::finishBlendMotion() { m_blendMotion = false; }

/*
 * --INFO--
 * Address:	802AA110
 * Size:	00000C
 */
void IKSystemBase::checkJointScaleOn() { m_scaleJoints = true; }

/*
 * --INFO--
 * Address:	802AA11C
 * Size:	00007C
 */
void IKSystemBase::update()
{
	if (!m_enabled) {
		return;
	}

	if (!m_onGround) {
		moveBottomJointPosition();
		if (m_moveRatio > 1 && onGroundPosition()) {
			m_onGround = true;
		}
	}

	makeBendRatio();
	_03 = m_onGround;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802AA184
	lbz      r0, 2(r31)
	cmplwi   r0, 0
	bne      lbl_802AA174
	bl       moveBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f1, 0xc(r31)
	lfs      f0, lbl_8051BFA8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802AA174
	mr       r3, r31
	bl       onGroundPosition__Q24Game12IKSystemBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AA174
	li       r0, 1
	stb      r0, 2(r31)

lbl_802AA174:
	mr       r3, r31
	bl       makeBendRatio__Q24Game12IKSystemBaseFv
	lbz      r0, 2(r31)
	stb      r0, 3(r31)

lbl_802AA184:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA198
 * Size:	0000F8
 */
void IKSystemBase::makeMatrix()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802AA27C
	lwz      r6, 0x4c(r31)
	mr       r4, r31
	addi     r3, r1, 8
	addi     r5, r1, 0x2c
	lfs      f2, 0x2c(r6)
	lfs      f1, 0x1c(r6)
	lfs      f0, 0xc(r6)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	bl       "getMiddleDirection__Q24Game12IKSystemBaseFR10Vector3<f>"
	lfs      f2, 8(r1)
	addi     r3, r1, 0x2c
	lfs      f1, 0xc(r1)
	addi     r4, r31, 0x1c
	lfs      f0, 0x10(r1)
	addi     r5, r1, 0x20
	stfs     f2, 0x20(r1)
	addi     r6, r1, 0x14
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lfs      f1, 0x14(r31)
	lfs      f2, 0x18(r31)
	bl
"calcJointPos__Q24Game9NsMathExpFRC10Vector3<f>RC10Vector3<f>ffR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x14
	bl "setTopJointRotation__Q24Game12IKSystemBaseFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x14
	bl
"setMiddleJointRotation__Q24Game12IKSystemBaseFR10Vector3<f>R10Vector3<f>" lwz
r5, 0x50(r31) mr       r3, r31 lfs      f0, 0x14(r1) addi     r4, r1, 0x2c stfs
f0, 0xc(r5) lfs      f0, 0x18(r1) stfs     f0, 0x1c(r5) lfs      f0, 0x1c(r1)
	stfs     f0, 0x2c(r5)
	lwz      r5, 0x54(r31)
	lfs      f0, 0x1c(r31)
	stfs     f0, 0xc(r5)
	lfs      f0, 0x20(r31)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x24(r31)
	stfs     f0, 0x2c(r5)
	bl       "makeBottomMatrix__Q24Game12IKSystemBaseFR10Vector3<f>"

lbl_802AA27C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA290
 * Size:	0000C4
 */
void IKSystemBase::moveBottomJointPosition()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BFA8@sda21(r2)
	mr       r7, r3
	stw      r0, 0x14(r1)
	lfs      f1, 0xc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802AA2C8
	lwz      r3, 0x58(r7)
	lfs      f1, 0x10(r7)
	lfs      f0, 0x18(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r7)
	b        lbl_802AA2DC

lbl_802AA2C8:
	lwz      r3, 0x58(r7)
	lfs      f1, 0x10(r7)
	lfs      f0, 0x1c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r7)

lbl_802AA2DC:
	lwz      r3, 0x58(r7)
	lfs      f0, 0x10(r7)
	lfs      f1, 0x24(r3)
	lfs      f2, 0x20(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_802AA2F8
	b        lbl_802AA30C

lbl_802AA2F8:
	fcmpo    cr0, f0, f2
	ble      lbl_802AA308
	fmr      f1, f2
	b        lbl_802AA30C

lbl_802AA308:
	fmr      f1, f0

lbl_802AA30C:
	stfs     f1, 0x10(r7)
	addi     r3, r7, 0x28
	addi     r4, r7, 0x1c
	lwz      r6, 0x58(r7)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x14(r6)
	lfs      f0, 0x10(r7)
	lfs      f1, 0x54(r5)
	fadds    f2, f2, f0
	lfs      f0, 0xc(r7)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0xc(r7)
	lfs      f1, 0xc(r7)
	bl       "calcLagrange__Q24Game9NsMathExpFPC10Vector3<f>fR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA354
 * Size:	000008
 */
void IKSystemBase::onGround()
{
	/*
	lbz      r3, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA35C
 * Size:	00001C
 */
void IKSystemBase::getBottomJointPosition()
{
	/*
	lfs      f0, 0x1c(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x20(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x24(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA378
 * Size:	00004C
 */
void IKSystemBase::getCollisionCentre()
{
	/*
	lwz      r5, 0x54(r4)
	lwz      r4, 0x58(r4)
	lfs      f3, 0(r5)
	lfs      f2, 4(r4)
	lfs      f4, 0x10(r5)
	fmuls    f3, f3, f2
	lfs      f0, 0xc(r5)
	lfs      f5, 0x20(r5)
	fmuls    f4, f4, f2
	lfs      f1, 0x1c(r5)
	fadds    f3, f3, f0
	lfs      f0, 0x2c(r5)
	fmuls    f5, f5, f2
	fadds    f4, f4, f1
	stfs     f3, 0(r3)
	fadds    f5, f5, f0
	stfs     f4, 4(r3)
	stfs     f5, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA3C4
 * Size:	000008
 */
void IKSystemBase::getMoveRatio()
{
	/*
	lfs      f1, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA3CC
 * Size:	000280
 */
void IKSystemBase::onGroundPosition()
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stfd     f25, 0x60(r1)
	psq_st   f25, 104(r1), 0, qr0
	stfd     f24, 0x50(r1)
	psq_st   f24, 88(r1), 0, qr0
	stfd     f23, 0x40(r1)
	psq_st   f23, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r29, r3
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r29, 0x1c
	lfs      f25, lbl_8051BFAC@sda21(r2)
	lwz      r12, 4(r3)
	li       r31, 0
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x20(r29)
	fcmpo    cr0, f1, f4
	ble      lbl_802AA468
	fmr      f25, f1
	li       r31, 1

lbl_802AA468:
	lwz      r5, 0x58(r29)
	lwz      r0, 0(r5)
	cmpwi    r0, 0
	ble      lbl_802AA5D4
	xoris    r3, r0, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lis      r3, sincosTable___5JMath@ha
	lwz      r4, 0x54(r29)
	addi     r28, r3, sincosTable___5JMath@l
	stw      r0, 0x18(r1)
	li       r30, 0
	lfd      f1, lbl_8051BFC0@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f2, lbl_8051BFB0@sda21(r2)
	fsubs    f0, f0, f1
	lfs      f24, lbl_8051BFA0@sda21(r2)
	lfs      f28, 0(r4)
	lfs      f3, 4(r5)
	fmr      f29, f24
	fdivs    f23, f2, f0
	lfs      f27, 0x10(r4)
	lfs      f26, 0x20(r4)
	lfs      f1, 0x1c(r29)
	lfs      f0, 0x24(r29)
	lfs      f30, lbl_8051BFB4@sda21(r2)
	fmuls    f28, f28, f3
	fmuls    f27, f27, f3
	fmuls    f26, f26, f3
	fmr      f31, f24
	fadds    f28, f28, f1
	fadds    f27, f27, f4
	fadds    f26, f26, f0
	b        lbl_802AA5C4

lbl_802AA4F0:
	fmr      f0, f24
	fcmpo    cr0, f24, f29
	bge      lbl_802AA500
	fneg     f0, f24

lbl_802AA500:
	fmuls    f0, f0, f30
	lfs      f2, 8(r3)
	fcmpo    cr0, f24, f31
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r28, r0
	lfs      f0, 4(r3)
	fmadds   f1, f2, f0, f26
	bge      lbl_802AA558
	lfs      f0, lbl_8051BFB8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f24, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802AA578

lbl_802AA558:
	fmuls    f0, f24, f30
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802AA578:
	fmadds   f0, f2, f0, f28
	stfs     f27, 0xc(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	stfs     f1, 0x10(r1)
	stfs     f0, 8(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	fadds    f24, f24, f23
	fcmpo    cr0, f1, f0
	ble      lbl_802AA5C0
	fcmpo    cr0, f1, f25
	ble      lbl_802AA5C0
	fmr      f25, f1
	li       r31, 1

lbl_802AA5C0:
	addi     r30, r30, 1

lbl_802AA5C4:
	lwz      r3, 0x58(r29)
	lwz      r0, 0(r3)
	cmpw     r30, r0
	blt      lbl_802AA4F0

lbl_802AA5D4:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802AA5E0
	stfs     f25, 0x20(r29)

lbl_802AA5E0:
	mr       r3, r31
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	psq_l    f25, 104(r1), 0, qr0
	lfd      f25, 0x60(r1)
	psq_l    f24, 88(r1), 0, qr0
	lfd      f24, 0x50(r1)
	psq_l    f23, 72(r1), 0, qr0
	lfd      f23, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0xd4(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA64C
 * Size:	000084
 */
void IKSystemBase::makeBendRatio()
{
	/*
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	beq      lbl_802AA664
	lfs      f0, lbl_8051BFA0@sda21(r2)
	stfs     f0, 8(r3)
	blr

lbl_802AA664:
	lfs      f2, lbl_8051BFA8@sda21(r2)
	lfs      f1, 0xc(r3)
	lfs      f0, lbl_8051BFA0@sda21(r2)
	fsubs    f1, f2, f1
	lfs      f3, lbl_8051BFC8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802AA684
	b        lbl_802AA688

lbl_802AA684:
	fneg     f1, f1

lbl_802AA688:
	fsubs    f2, f2, f1
	lfs      f1, lbl_8051BFCC@sda21(r2)
	lwz      r4, 0x58(r3)
	lfs      f0, lbl_8051BFA0@sda21(r2)
	fsubs    f2, f2, f1
	lfs      f1, 0x28(r4)
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f0
	bge      lbl_802AA6B0
	b        lbl_802AA6C4

lbl_802AA6B0:
	lfs      f0, lbl_8051BFA8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802AA6C0
	b        lbl_802AA6C4

lbl_802AA6C0:
	fmr      f0, f2

lbl_802AA6C4:
	fmuls    f0, f1, f0
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA6D0
 * Size:	00009C
 */
void IKSystemBase::getMiddleDirection(Vector3f&)
{
	/*
	lbz      r0, 1(r4)
	cmplwi   r0, 0
	beq      lbl_802AA6F0
	lwz      r4, 0x4c(r4)
	lfs      f2, 0(r4)
	lfs      f3, 0x10(r4)
	lfs      f4, 0x20(r4)
	b        lbl_802AA75C

lbl_802AA6F0:
	lfs      f3, 0x1c(r4)
	lfs      f2, 0(r5)
	lfs      f1, 0x24(r4)
	lfs      f0, 8(r5)
	fsubs    f2, f3, f2
	lfs      f3, lbl_8051BFA0@sda21(r2)
	fsubs    f4, f1, f0
	fmadds   f0, f2, f2, f3
	fmuls    f1, f4, f4
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_802AA730
	ble      lbl_802AA734
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802AA734

lbl_802AA730:
	fmr      f1, f3

lbl_802AA734:
	lfs      f0, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802AA754
	lfs      f0, lbl_8051BFA8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802AA754:
	lfs      f0, lbl_8051BFD0@sda21(r2)
	fadds    f3, f3, f0

lbl_802AA75C:
	stfs     f2, 0(r3)
	stfs     f3, 4(r3)
	stfs     f4, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AA76C
 * Size:	000294
 */
void IKSystemBase::setTopJointRotation(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	lfs      f1, 4(r5)
	lfs      f0, 4(r4)
	lbz      r0, 1(r3)
	fsubs    f1, f1, f0
	lfs      f2, 8(r5)
	lfs      f7, 8(r4)
	cmplwi   r0, 0
	lfs      f0, 0(r5)
	lfs      f5, 0(r4)
	fsubs    f2, f2, f7
	fsubs    f0, f0, f5
	beq      lbl_802AA7EC
	lwz      r4, 0x4c(r3)
	lfs      f7, 4(r4)
	lfs      f5, 0x14(r4)
	lfs      f8, 0x24(r4)
	fmuls    f3, f1, f7
	fmuls    f6, f2, f5
	fmuls    f4, f0, f8
	fmsubs   f5, f0, f5, f3
	fmsubs   f3, f1, f8, f6
	fmsubs   f4, f2, f7, f4
	fmuls    f6, f5, f1
	fmuls    f7, f3, f2
	fmuls    f8, f4, f0
	fmsubs   f6, f4, f2, f6
	fmsubs   f7, f5, f0, f7
	fmsubs   f8, f3, f1, f8
	b        lbl_802AA830

lbl_802AA7EC:
	lfs      f4, 0x1c(r3)
	lfs      f3, 0x24(r3)
	fsubs    f9, f5, f4
	lfs      f6, lbl_8051BFA0@sda21(r2)
	fsubs    f7, f3, f7
	fmuls    f3, f6, f0
	fmuls    f5, f9, f1
	fmuls    f4, f7, f2
	fmsubs   f8, f7, f1, f3
	fmsubs   f6, f6, f2, f5
	fmsubs   f7, f9, f0, f4
	fmuls    f4, f0, f8
	fmuls    f3, f1, f6
	fmuls    f9, f2, f7
	fmsubs   f4, f2, f6, f4
	fmsubs   f5, f0, f7, f3
	fmsubs   f3, f1, f8, f9

lbl_802AA830:
	fmuls    f10, f1, f1
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f11, f2, f2
	fmadds   f10, f0, f0, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AA85C
	ble      lbl_802AA860
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AA860

lbl_802AA85C:
	fmr      f10, f9

lbl_802AA860:
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802AA880
	lfs      f9, lbl_8051BFA8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9

lbl_802AA880:
	fmuls    f10, f7, f7
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f11, f8, f8
	fmadds   f10, f6, f6, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AA8AC
	ble      lbl_802AA8B0
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AA8B0

lbl_802AA8AC:
	fmr      f10, f9

lbl_802AA8B0:
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802AA8D0
	lfs      f9, lbl_8051BFA8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f6, f6, f9
	fmuls    f7, f7, f9
	fmuls    f8, f8, f9

lbl_802AA8D0:
	fmuls    f10, f4, f4
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f11, f5, f5
	fmadds   f10, f3, f3, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AA8FC
	ble      lbl_802AA900
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AA900

lbl_802AA8FC:
	fmr      f10, f9

lbl_802AA900:
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802AA920
	lfs      f9, lbl_8051BFA8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9
	fmuls    f5, f5, f9

lbl_802AA920:
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_802AA9C0
	lwz      r4, 0x4c(r3)
	lfs      f9, lbl_8051BFA0@sda21(r2)
	lfs      f10, 0x14(r4)
	lfs      f11, 0x24(r4)
	fmuls    f31, f10, f10
	lfs      f10, 4(r4)
	fmuls    f11, f11, f11
	lfs      f12, 8(r4)
	lfs      f13, 0x18(r4)
	fmadds   f10, f10, f10, f31
	lfs      f31, 0x28(r4)
	fadds    f11, f11, f10
	fcmpo    cr0, f11, f9
	ble      lbl_802AA974
	ble      lbl_802AA978
	frsqrte  f9, f11
	fmuls    f11, f9, f11
	b        lbl_802AA978

lbl_802AA974:
	fmr      f11, f9

lbl_802AA978:
	fmuls    f10, f13, f13
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f13, f31, f31
	fmadds   f10, f12, f12, f10
	fadds    f10, f13, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AA9A4
	ble      lbl_802AA9A8
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AA9A8

lbl_802AA9A4:
	fmr      f10, f9

lbl_802AA9A8:
	fmuls    f6, f6, f11
	fmuls    f7, f7, f11
	fmuls    f8, f8, f11
	fmuls    f3, f3, f10
	fmuls    f4, f4, f10
	fmuls    f5, f5, f10

lbl_802AA9C0:
	lwz      r4, 0x4c(r3)
	stfs     f0, 0(r4)
	stfs     f1, 0x10(r4)
	stfs     f2, 0x20(r4)
	lwz      r4, 0x4c(r3)
	stfs     f6, 4(r4)
	stfs     f7, 0x14(r4)
	stfs     f8, 0x24(r4)
	lwz      r3, 0x4c(r3)
	stfs     f3, 8(r3)
	stfs     f4, 0x18(r3)
	stfs     f5, 0x28(r3)
	psq_l    f31, 24(r1), 0, qr0
	lfd      f31, 0x10(r1)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AAA00
 * Size:	000294
 */
void IKSystemBase::setMiddleJointRotation(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	lfs      f1, 0x20(r3)
	lfs      f0, 4(r5)
	lbz      r0, 1(r3)
	fsubs    f1, f1, f0
	lfs      f7, 0x24(r3)
	lfs      f2, 8(r5)
	cmplwi   r0, 0
	lfs      f5, 0x1c(r3)
	lfs      f0, 0(r5)
	fsubs    f2, f7, f2
	fsubs    f0, f5, f0
	beq      lbl_802AAA80
	lwz      r4, 0x50(r3)
	lfs      f7, 4(r4)
	lfs      f5, 0x14(r4)
	lfs      f8, 0x24(r4)
	fmuls    f3, f1, f7
	fmuls    f6, f2, f5
	fmuls    f4, f0, f8
	fmsubs   f5, f0, f5, f3
	fmsubs   f3, f1, f8, f6
	fmsubs   f4, f2, f7, f4
	fmuls    f6, f5, f1
	fmuls    f7, f3, f2
	fmuls    f8, f4, f0
	fmsubs   f6, f4, f2, f6
	fmsubs   f7, f5, f0, f7
	fmsubs   f8, f3, f1, f8
	b        lbl_802AAAC4

lbl_802AAA80:
	lfs      f4, 0(r4)
	lfs      f3, 8(r4)
	fsubs    f9, f4, f5
	lfs      f6, lbl_8051BFA0@sda21(r2)
	fsubs    f7, f7, f3
	fmuls    f3, f6, f0
	fmuls    f5, f9, f1
	fmuls    f4, f7, f2
	fmsubs   f8, f7, f1, f3
	fmsubs   f6, f6, f2, f5
	fmsubs   f7, f9, f0, f4
	fmuls    f4, f0, f8
	fmuls    f3, f1, f6
	fmuls    f9, f2, f7
	fmsubs   f4, f2, f6, f4
	fmsubs   f5, f0, f7, f3
	fmsubs   f3, f1, f8, f9

lbl_802AAAC4:
	fmuls    f10, f1, f1
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f11, f2, f2
	fmadds   f10, f0, f0, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AAAF0
	ble      lbl_802AAAF4
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AAAF4

lbl_802AAAF0:
	fmr      f10, f9

lbl_802AAAF4:
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802AAB14
	lfs      f9, lbl_8051BFA8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9

lbl_802AAB14:
	fmuls    f10, f7, f7
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f11, f8, f8
	fmadds   f10, f6, f6, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AAB40
	ble      lbl_802AAB44
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AAB44

lbl_802AAB40:
	fmr      f10, f9

lbl_802AAB44:
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802AAB64
	lfs      f9, lbl_8051BFA8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f6, f6, f9
	fmuls    f7, f7, f9
	fmuls    f8, f8, f9

lbl_802AAB64:
	fmuls    f10, f4, f4
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f11, f5, f5
	fmadds   f10, f3, f3, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AAB90
	ble      lbl_802AAB94
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AAB94

lbl_802AAB90:
	fmr      f10, f9

lbl_802AAB94:
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802AABB4
	lfs      f9, lbl_8051BFA8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9
	fmuls    f5, f5, f9

lbl_802AABB4:
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_802AAC54
	lwz      r4, 0x50(r3)
	lfs      f9, lbl_8051BFA0@sda21(r2)
	lfs      f10, 0x14(r4)
	lfs      f11, 0x24(r4)
	fmuls    f31, f10, f10
	lfs      f10, 4(r4)
	fmuls    f11, f11, f11
	lfs      f12, 8(r4)
	lfs      f13, 0x18(r4)
	fmadds   f10, f10, f10, f31
	lfs      f31, 0x28(r4)
	fadds    f11, f11, f10
	fcmpo    cr0, f11, f9
	ble      lbl_802AAC08
	ble      lbl_802AAC0C
	frsqrte  f9, f11
	fmuls    f11, f9, f11
	b        lbl_802AAC0C

lbl_802AAC08:
	fmr      f11, f9

lbl_802AAC0C:
	fmuls    f10, f13, f13
	lfs      f9, lbl_8051BFA0@sda21(r2)
	fmuls    f13, f31, f31
	fmadds   f10, f12, f12, f10
	fadds    f10, f13, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802AAC38
	ble      lbl_802AAC3C
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802AAC3C

lbl_802AAC38:
	fmr      f10, f9

lbl_802AAC3C:
	fmuls    f6, f6, f11
	fmuls    f7, f7, f11
	fmuls    f8, f8, f11
	fmuls    f3, f3, f10
	fmuls    f4, f4, f10
	fmuls    f5, f5, f10

lbl_802AAC54:
	lwz      r4, 0x50(r3)
	stfs     f0, 0(r4)
	stfs     f1, 0x10(r4)
	stfs     f2, 0x20(r4)
	lwz      r4, 0x50(r3)
	stfs     f6, 4(r4)
	stfs     f7, 0x14(r4)
	stfs     f8, 0x24(r4)
	lwz      r3, 0x50(r3)
	stfs     f3, 8(r3)
	stfs     f4, 0x18(r3)
	stfs     f5, 0x28(r3)
	psq_l    f31, 24(r1), 0, qr0
	lfd      f31, 0x10(r1)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AAC94
 * Size:	000100
 */
void IKSystemBase::makeBottomMatrix(Vector3f&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lbz      r0, 1(r3)
	cmplwi   r0, 0
	bne      lbl_802AAD80
	lfs      f2, 0x24(r31)
	lfs      f0, 8(r4)
	lfs      f1, 0x1c(r31)
	fsubs    f4, f2, f0
	lfs      f0, 0(r4)
	lfs      f3, lbl_8051BFA0@sda21(r2)
	fsubs    f2, f1, f0
	fmuls    f1, f4, f4
	fmadds   f0, f2, f2, f3
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_802AACF4
	ble      lbl_802AACF8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802AACF8

lbl_802AACF4:
	fmr      f1, f3

lbl_802AACF8:
	lfs      f0, lbl_8051BFA0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802AAD18
	lfs      f0, lbl_8051BFA8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802AAD18:
	lwz      r5, 0x50(r31)
	addi     r3, r1, 8
	lwz      r6, 0x54(r31)
	li       r4, 0x5a
	lfs      f5, 8(r5)
	lfs      f6, 0x18(r5)
	lfs      f7, 0x28(r5)
	lfs      f1, lbl_8051BFA0@sda21(r2)
	stfs     f2, 0(r6)
	lfs      f0, lbl_8051BFD4@sda21(r2)
	stfs     f3, 0x10(r6)
	stfs     f4, 0x20(r6)
	lwz      r5, 0x54(r31)
	stfs     f1, 4(r5)
	stfs     f0, 0x14(r5)
	stfs     f1, 0x24(r5)
	lwz      r5, 0x54(r31)
	stfs     f5, 8(r5)
	stfs     f6, 0x18(r5)
	stfs     f7, 0x28(r5)
	lfs      f1, 8(r31)
	bl       PSMTXRotRad
	lwz      r3, 0x54(r31)
	addi     r4, r1, 8
	mr       r5, r3
	bl       PSMTXConcat

lbl_802AAD80:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}
} // namespace Game
