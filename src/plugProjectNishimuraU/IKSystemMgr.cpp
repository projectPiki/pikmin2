#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80489968
    lbl_80489968:
        .float 0.4
        .float 0.3
        .float 0.2
        .float 0.1

    .section .sbss # 0x80514D80 - 0x80516360
    .global gIKSystemMgr__4Game
    gIKSystemMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BF70
    lbl_8051BF70:
        .4byte 0x42C80000
    .global lbl_8051BF74
    lbl_8051BF74:
        .4byte 0x00000000
    .global lbl_8051BF78
    lbl_8051BF78:
        .float 1.0
    .global lbl_8051BF7C
    lbl_8051BF7C:
        .4byte 0x40A00000
    .global lbl_8051BF80
    lbl_8051BF80:
        .4byte 0x40490FDB
    .global lbl_8051BF84
    lbl_8051BF84:
        .4byte 0x3BB60B61
    .global lbl_8051BF88
    lbl_8051BF88:
        .4byte 0x43A2F983
    .global lbl_8051BF8C
    lbl_8051BF8C:
        .4byte 0xC3A2F983
    .global lbl_8051BF90
    lbl_8051BF90:
        .float 0.5
    .global lbl_8051BF94
    lbl_8051BF94:
        .4byte 0x40C90FDB
    .global lbl_8051BF98
    lbl_8051BF98:
        .float 0.25
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802A8A80
 * Size:	000038
 */
void IKJointCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 1
	stw      r0, 0x14(r1)
	bne      lbl_802A8AA4
	lwz      r3, gIKSystemMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802A8AA4
	bl       makeMatrix__Q24Game11IKSystemMgrFv

lbl_802A8AA4:
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8AB8
 * Size:	00007C
 */
IKSystemMgr::IKSystemMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r6, 0xc
	li       r7, 4
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x5c
	bl       __construct_array
	li       r0, 0
	li       r3, 0x180
	stw      r0, gIKSystemMgr__4Game@sda21(r13)
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game12IKSystemBaseFv@ha
	li       r5, 0
	addi     r4, r4, __ct__Q24Game12IKSystemBaseFv@l
	li       r6, 0x5c
	li       r7, 4
	bl       __construct_new_array
	stw      r3, 0x8c(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x94(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8B34
 * Size:	000144
 */
void IKSystemMgr::init(Game::EnemyBase*, Game::JointGroundCallBack*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r5
	stw      r28, 0x20(r1)
	mr       r28, r3
	stw      r4, 0x90(r3)
	stb      r0, 0(r3)
	stb      r0, 1(r3)
	stb      r0, 2(r3)
	lwz      r3, 0x90(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 4(r28)
	li       r0, 0
	lfs      f1, lbl_8051BF70@sda21(r2)
	addi     r3, r1, 0x14
	lfs      f0, lbl_8051BF74@sda21(r2)
	stfs     f1, 8(r28)
	stfs     f0, 0xc(r28)
	stw      r0, 0x1c(r28)
	stfs     f0, 0x10(r28)
	stw      r0, 0x20(r28)
	stfs     f0, 0x14(r28)
	stw      r0, 0x24(r28)
	stfs     f0, 0x18(r28)
	stw      r0, 0x28(r28)
	stfs     f0, 0x34(r28)
	stfs     f0, 0x30(r28)
	stfs     f0, 0x2c(r28)
	lwz      r4, 0x90(r28)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	addi     r3, r1, 8
	stfs     f0, 0x38(r28)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x3c(r28)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x40(r28)
	lwz      r4, 0x90(r28)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	li       r30, 0
	lfs      f0, lbl_8051BF74@sda21(r2)
	li       r31, 0
	stfs     f1, 0x44(r28)
	lfs      f1, 0xc(r1)
	stfs     f1, 0x48(r28)
	lfs      f1, 0x10(r1)
	stfs     f1, 0x4c(r28)
	stfs     f0, 0x58(r28)
	stfs     f0, 0x54(r28)
	stfs     f0, 0x50(r28)

lbl_802A8C38:
	lwz      r0, 0x8c(r28)
	add      r3, r0, r31
	bl       init__Q24Game12IKSystemBaseFv
	addi     r30, r30, 1
	addi     r31, r31, 0x5c
	cmpwi    r30, 4
	blt      lbl_802A8C38
	stw      r29, 0x94(r28)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8C78
 * Size:	00006C
 */
void IKSystemMgr::setupJoint(SysShape::Model*, int, char**)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mulli    r30, r5, 0x5c
	mr       r27, r3
	mr       r28, r4
	mr       r31, r6
	li       r29, 0

lbl_802A8C9C:
	lwz      r4, 0(r31)
	mr       r3, r28
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x8c(r27)
	mr       r5, r3
	mr       r4, r29
	add      r3, r0, r30
	bl       setLegJointMatrix__Q24Game12IKSystemBaseFiP7Matrixf
	addi     r29, r29, 1
	addi     r31, r31, 4
	cmpwi    r29, 3
	blt      lbl_802A8C9C
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8CE4
 * Size:	000038
 */
void IKSystemMgr::setupCallBack(SysShape::Model*, char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	mr       r4, r5
	stw      r0, 0x14(r1)
	bl       getJoint__Q28SysShape5ModelFPc
	lis      r4, IKJointCallBack__4GameFP8J3DJointi@ha
	lwz      r3, 0x18(r3)
	addi     r0, r4, IKJointCallBack__4GameFP8J3DJointi@l
	stw      r0, 4(r3)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8D1C
 * Size:	000064
 */
void IKSystemMgr::setParameters(Game::IKSystemParms*)
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
	stw      r4, 0x98(r3)

lbl_802A8D44:
	lwz      r0, 0x8c(r29)
	lwz      r4, 0x98(r29)
	add      r3, r0, r31
	bl       setParameters__Q24Game12IKSystemBaseFPQ24Game13IKSystemParms
	addi     r30, r30, 1
	addi     r31, r31, 0x5c
	cmpwi    r30, 4
	blt      lbl_802A8D44
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
 * Address:	802A8D80
 * Size:	000188
 */
void IKSystemMgr::startProgramedIK()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r27, r3
	li       r0, 1
	stb      r0, 0(r3)
	li       r31, 0
	mr       r30, r27
	li       r28, 0
	stb      r31, 1(r3)
	mr       r29, r31
	stb      r31, 2(r3)

lbl_802A8DCC:
	stw      r31, 0x1c(r30)
	lwz      r0, 0x8c(r27)
	add      r3, r0, r29
	bl       startProgramedIK__Q24Game12IKSystemBaseFv
	addi     r28, r28, 1
	addi     r29, r29, 0x5c
	cmpwi    r28, 4
	addi     r30, r30, 4
	blt      lbl_802A8DCC
	lwz      r4, 0x90(r27)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x20(r1)
	addi     r3, r1, 0x14
	lfs      f30, 0x24(r1)
	lfs      f31, 0x28(r1)
	lwz      r4, 0x8c(r27)
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f0, 0x18(r1)
	lfs      f2, 0x14(r1)
	fsubs    f3, f30, f0
	lfs      f1, 0x1c(r1)
	fsubs    f2, f29, f2
	lfs      f0, lbl_8051BF74@sda21(r2)
	fsubs    f1, f31, f1
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802A8E64
	ble      lbl_802A8E68
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802A8E68

lbl_802A8E64:
	fmr      f1, f0

lbl_802A8E68:
	lis      r3, atanTable___5JMath@ha
	stfs     f1, 8(r27)
	mr       r30, r27
	li       r28, 0
	addi     r31, r3, atanTable___5JMath@l
	li       r29, 0

lbl_802A8E80:
	lwz      r0, 0x8c(r27)
	addi     r3, r1, 8
	add      r4, r0, r29
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f1, 8(r1)
	mr       r3, r31
	lfs      f0, 0x10(r1)
	fsubs    f1, f1, f29
	fsubs    f2, f0, f31
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 0x90(r27)
	fmr      f30, f1
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f30, f1
	addi     r28, r28, 1
	cmpwi    r28, 4
	addi     r29, r29, 0x5c
	stfs     f0, 0xc(r30)
	addi     r30, r30, 4
	blt      lbl_802A8E80
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8F08
 * Size:	000024
 */
void IKSystemMgr::startIKMotion()
{
	/*
	li       r4, 1
	li       r0, 0
	stb      r4, 1(r3)
	stb      r0, 2(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8F2C
 * Size:	00000C
 */
void IKSystemMgr::finishIKMotion()
{
	// Generated from stb r0, 0x1(r3)
	_01 = 0;
}

/*
 * --INFO--
 * Address:	802A8F38
 * Size:	000014
 */
void IKSystemMgr::forceFinishIKMotion()
{
	/*
	li       r4, 0
	li       r0, 1
	stb      r4, 1(r3)
	stb      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8F4C
 * Size:	00005C
 */
void IKSystemMgr::startBlendMotion()
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

lbl_802A8F70:
	lwz      r0, 0x8c(r29)
	add      r3, r0, r31
	bl       startBlendMotion__Q24Game12IKSystemBaseFv
	addi     r30, r30, 1
	addi     r31, r31, 0x5c
	cmpwi    r30, 4
	blt      lbl_802A8F70
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
 * Address:	802A8FA8
 * Size:	00005C
 */
void IKSystemMgr::finishBlendMotion()
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

lbl_802A8FCC:
	lwz      r0, 0x8c(r29)
	add      r3, r0, r31
	bl       finishBlendMotion__Q24Game12IKSystemBaseFv
	addi     r30, r30, 1
	addi     r31, r31, 0x5c
	cmpwi    r30, 4
	blt      lbl_802A8FCC
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
 * Address:	802A9004
 * Size:	00005C
 */
void IKSystemMgr::checkJointScaleOn()
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

lbl_802A9028:
	lwz      r0, 0x8c(r29)
	add      r3, r0, r31
	bl       checkJointScaleOn__Q24Game12IKSystemBaseFv
	addi     r30, r30, 1
	addi     r31, r31, 0x5c
	cmpwi    r30, 4
	blt      lbl_802A9028
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
 * Address:	802A9060
 * Size:	000070
 */
void IKSystemMgr::isFinishIKMotion()
{
	/*
	lbz      r0, 1(r3)
	cmplwi   r0, 0
	bne      lbl_802A90C8
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	beq      lbl_802A9080
	li       r3, 0
	blr

lbl_802A9080:
	lwz      r0, 0x20(r3)
	cmpwi    r0, 3
	beq      lbl_802A9094
	li       r3, 0
	blr

lbl_802A9094:
	addi     r3, r3, 8
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	beq      lbl_802A90AC
	li       r3, 0
	blr

lbl_802A90AC:
	lwz      r0, 0x20(r3)
	cmpwi    r0, 3
	beq      lbl_802A90C0
	li       r3, 0
	blr

lbl_802A90C0:
	li       r3, 1
	blr

lbl_802A90C8:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A90D0
 * Size:	00000C
 */
void IKSystemMgr::resetAnimationCallBack()
{
	/*
	li       r0, 0
	stw      r0, gIKSystemMgr__4Game@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A90DC
 * Size:	000008
 */
void IKSystemMgr::setAnimationCallBack()
{
	/*
	stw      r3, gIKSystemMgr__4Game@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A90E4
 * Size:	00007C
 */
void IKSystemMgr::doUpdate()
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

lbl_802A9108:
	lwz      r0, 0x8c(r29)
	add      r3, r0, r31
	bl       update__Q24Game12IKSystemBaseFv
	addi     r30, r30, 1
	addi     r31, r31, 0x5c
	cmpwi    r30, 4
	blt      lbl_802A9108
	mr       r3, r29
	bl       updateController__Q24Game11IKSystemMgrFv
	mr       r3, r29
	bl       calcFaceDir__Q24Game11IKSystemMgrFv
	mr       r3, r29
	bl       calcCentrePosition__Q24Game11IKSystemMgrFv
	mr       r3, r29
	bl       calcTraceCentrePosition__Q24Game11IKSystemMgrFv
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
 * Address:	802A9160
 * Size:	00005C
 */
void IKSystemMgr::makeMatrix()
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

lbl_802A9184:
	lwz      r0, 0x8c(r29)
	add      r3, r0, r31
	bl       makeMatrix__Q24Game12IKSystemBaseFv
	addi     r30, r30, 1
	addi     r31, r31, 0x5c
	cmpwi    r30, 4
	blt      lbl_802A9184
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
 * Address:	802A91BC
 * Size:	000038
 */
void IKSystemMgr::getCollisionCentre(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	mulli    r0, r5, 0x5c
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x8c(r4)
	add      r4, r4, r0
	bl       getCollisionCentre__Q24Game12IKSystemBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A91F4
 * Size:	00010C
 */
void IKSystemMgr::isCollisionCheck(CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_802A92E0
	lis      r4, 0x6C667370@ha
	addi     r3, r30, 0x30
	addi     r4, r4, 0x6C667370@l
	li       r31, -1
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A923C
	li       r31, 3
	b        lbl_802A9298

lbl_802A923C:
	lis      r4, 0x6C687370@ha
	addi     r3, r30, 0x30
	addi     r4, r4, 0x6C687370@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A925C
	li       r31, 1
	b        lbl_802A9298

lbl_802A925C:
	lis      r4, 0x72667370@ha
	addi     r3, r30, 0x30
	addi     r4, r4, 0x72667370@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A927C
	li       r31, 2
	b        lbl_802A9298

lbl_802A927C:
	lis      r4, 0x72687370@ha
	addi     r3, r30, 0x30
	addi     r4, r4, 0x72687370@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A9298
	li       r31, 0

lbl_802A9298:
	cmpwi    r31, 0
	blt      lbl_802A92E0
	slwi     r0, r31, 2
	add      r3, r29, r0
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 1
	beq      lbl_802A92BC
	cmpwi    r0, 2
	bne      lbl_802A92E0

lbl_802A92BC:
	mulli    r0, r31, 0x5c
	lwz      r3, 0x8c(r29)
	add      r3, r3, r0
	bl       getMoveRatio__Q24Game12IKSystemBaseFv
	lfs      f0, lbl_8051BF78@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802A92E0
	li       r3, 1
	b        lbl_802A92E4

lbl_802A92E0:
	li       r3, 0

lbl_802A92E4:
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
 * Address:	802A9300
 * Size:	000308
 */
void IKSystemMgr::updateController()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stmw     r26, 0x68(r1)
	mr       r28, r3
	lbz      r0, 1(r3)
	cmplwi   r0, 0
	beq      lbl_802A9454
	lwz      r0, 0x1c(r28)
	li       r4, 1
	cmpwi    r0, 3
	beq      lbl_802A9334
	li       r4, 0

lbl_802A9334:
	lwz      r0, 0x20(r28)
	cmpwi    r0, 3
	beq      lbl_802A9344
	li       r4, 0

lbl_802A9344:
	addi     r3, r28, 8
	lwz      r0, 0x24(r28)
	cmpwi    r0, 3
	beq      lbl_802A9358
	li       r4, 0

lbl_802A9358:
	lwz      r0, 0x20(r3)
	cmpwi    r0, 3
	beq      lbl_802A9368
	li       r4, 0

lbl_802A9368:
	clrlwi.  r0, r4, 0x18
	beq      lbl_802A9384
	li       r0, 0
	stw      r0, 0x1c(r28)
	stw      r0, 0x20(r28)
	stw      r0, 0x24(r28)
	stw      r0, 0x28(r28)

lbl_802A9384:
	lwz      r0, 0x1c(r28)
	li       r4, 1
	cmpwi    r0, 0
	beq      lbl_802A9398
	li       r4, 0

lbl_802A9398:
	lwz      r0, 0x20(r28)
	cmpwi    r0, 0
	beq      lbl_802A93A8
	li       r4, 0

lbl_802A93A8:
	addi     r3, r28, 8
	lwz      r0, 0x24(r28)
	cmpwi    r0, 0
	beq      lbl_802A93BC
	li       r4, 0

lbl_802A93BC:
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	beq      lbl_802A93CC
	li       r4, 0

lbl_802A93CC:
	clrlwi.  r0, r4, 0x18
	beq      lbl_802A9454
	mr       r3, r28
	bl       setNextCentrePosition__Q24Game11IKSystemMgrFv
	lwz      r3, 0x8c(r28)
	addi     r4, r28, 0x5c
	bl       "startMovePosition__Q24Game12IKSystemBaseFR10Vector3<f>"
	li       r0, 1
	stw      r0, 0x1c(r28)
	lwz      r0, 0x94(r28)
	cmplwi   r0, 0
	beq      lbl_802A9454
	lwz      r4, 0x8c(r28)
	addi     r3, r1, 0x20
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f3, 0x20(r1)
	addi     r4, r1, 0x4c
	lfs      f2, 0x24(r1)
	lfs      f1, 0x28(r1)
	lfs      f0, lbl_8051BF7C@sda21(r2)
	stfs     f3, 0x4c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	mr       r0, r3
	lwz      r3, 0x94(r28)
	mr       r5, r0
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802A9454:
	mr       r31, r28
	li       r29, 0
	li       r30, 0

lbl_802A9460:
	lwz      r0, 0x1c(r31)
	cmpwi    r0, 1
	bne      lbl_802A948C
	lwz      r0, 0x8c(r28)
	add      r3, r0, r30
	bl       onGround__Q24Game12IKSystemBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A95E0
	li       r0, 2
	stw      r0, 0x1c(r31)
	b        lbl_802A95E0

lbl_802A948C:
	cmpwi    r0, 2
	bne      lbl_802A95E0
	li       r0, 3
	stw      r0, 0x1c(r31)
	lwz      r3, 0x98(r28)
	lfs      f1, 0x54(r28)
	lfs      f0, 0x44(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x54(r28)
	lwz      r0, 0x94(r28)
	cmplwi   r0, 0
	beq      lbl_802A9518
	lwz      r0, 0x8c(r28)
	addi     r3, r1, 0x14
	add      r4, r0, r30
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f3, 0x14(r1)
	addi     r4, r1, 0x3c
	lfs      f2, 0x18(r1)
	lfs      f1, 0x1c(r1)
	lfs      f0, lbl_8051BF7C@sda21(r2)
	stfs     f3, 0x3c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	mr       r0, r3
	lwz      r3, 0x94(r28)
	mr       r5, r0
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802A9518:
	addic.   r0, r29, 1
	bge      lbl_802A9528
	addi     r27, r29, 5
	b        lbl_802A9538

lbl_802A9528:
	addi     r27, r29, 1
	cmpwi    r27, 3
	ble      lbl_802A9538
	addi     r27, r29, -3

lbl_802A9538:
	cmpwi    r27, 0
	ble      lbl_802A95E0
	lbz      r0, 2(r28)
	cmplwi   r0, 0
	bne      lbl_802A95E0
	mulli    r3, r27, 0xc
	lwz      r0, 0x8c(r28)
	mulli    r26, r27, 0x5c
	addi     r4, r3, 0x5c
	add      r3, r0, r26
	add      r4, r28, r4
	bl       "startMovePosition__Q24Game12IKSystemBaseFR10Vector3<f>"
	slwi     r3, r27, 2
	li       r4, 1
	addi     r0, r3, 0x1c
	stwx     r4, r28, r0
	lwz      r0, 0x94(r28)
	cmplwi   r0, 0
	beq      lbl_802A95E0
	lwz      r0, 0x8c(r28)
	addi     r3, r1, 8
	add      r4, r0, r26
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f3, 8(r1)
	addi     r4, r1, 0x2c
	lfs      f2, 0xc(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, lbl_8051BF7C@sda21(r2)
	stfs     f3, 0x2c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	mr       r0, r3
	lwz      r3, 0x94(r28)
	mr       r5, r0
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802A95E0:
	addi     r29, r29, 1
	addi     r30, r30, 0x5c
	cmpwi    r29, 4
	addi     r31, r31, 4
	blt      lbl_802A9460
	lmw      r26, 0x68(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A9608
 * Size:	0003DC
 */
void IKSystemMgr::setNextCentrePosition()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r30, 0x90(r31)
	mr       r4, r30
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2c(r31)
	lfs      f0, 0x34(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f28, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	lwz      r3, 0x98(r31)
	fmr      f28, f1
	lfs      f0, lbl_8051BF84@sda21(r2)
	lfs      f2, 0x34(r3)
	lfs      f1, lbl_8051BF80@sda21(r2)
	fmuls    f0, f0, f2
	fabs     f2, f28
	fmuls    f0, f1, f0
	frsp     f1, f2
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A9858
	lwz      r4, 0x90(r31)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	lfs      f31, 0x2c(r31)
	lfs      f0, 0x34(r1)
	lfs      f29, 0x34(r31)
	fsubs    f2, f1, f31
	lfs      f30, lbl_8051BF74@sda21(r2)
	fsubs    f3, f0, f29
	fmadds   f2, f2, f2, f30
	fmuls    f3, f3, f3
	fadds    f2, f3, f2
	fcmpo    cr0, f2, f30
	ble      lbl_802A9740
	ble      lbl_802A9744
	frsqrte  f3, f2
	fmuls    f2, f3, f2
	b        lbl_802A9744

lbl_802A9740:
	fmr      f2, f30

lbl_802A9744:
	lwz      r3, 0x98(r31)
	lfs      f5, 0x2c(r3)
	fcmpo    cr0, f2, f5
	ble      lbl_802A97D0
	lfs      f3, lbl_8051BF74@sda21(r2)
	fsubs    f29, f29, f0
	fsubs    f31, f31, f1
	fsubs    f30, f30, f3
	fmuls    f4, f29, f29
	fmuls    f2, f30, f30
	fmadds   f2, f31, f31, f2
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f3
	ble      lbl_802A978C
	ble      lbl_802A9790
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_802A9790

lbl_802A978C:
	fmr      f4, f3

lbl_802A9790:
	lfs      f2, lbl_8051BF74@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_802A97B0
	lfs      f2, lbl_8051BF78@sda21(r2)
	fdivs    f2, f2, f4
	fmuls    f31, f31, f2
	fmuls    f30, f30, f2
	fmuls    f29, f29, f2

lbl_802A97B0:
	fmuls    f31, f31, f5
	lfs      f2, lbl_8051BF74@sda21(r2)
	fmuls    f30, f30, f5
	fmuls    f29, f29, f5
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	fadds    f29, f29, f0
	b        lbl_802A98BC

lbl_802A97D0:
	lfs      f5, 0x30(r3)
	fcmpo    cr0, f2, f5
	bge      lbl_802A98BC
	lfs      f3, lbl_8051BF74@sda21(r2)
	fsubs    f29, f29, f0
	fsubs    f31, f31, f1
	fsubs    f30, f30, f3
	fmuls    f4, f29, f29
	fmuls    f2, f30, f30
	fmadds   f2, f31, f31, f2
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f3
	ble      lbl_802A9814
	ble      lbl_802A9818
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_802A9818

lbl_802A9814:
	fmr      f4, f3

lbl_802A9818:
	lfs      f2, lbl_8051BF74@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_802A9838
	lfs      f2, lbl_8051BF78@sda21(r2)
	fdivs    f2, f2, f4
	fmuls    f31, f31, f2
	fmuls    f30, f30, f2
	fmuls    f29, f29, f2

lbl_802A9838:
	fmuls    f31, f31, f5
	lfs      f2, lbl_8051BF74@sda21(r2)
	fmuls    f30, f30, f5
	fmuls    f29, f29, f5
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	fadds    f29, f29, f0
	b        lbl_802A98BC

lbl_802A9858:
	lwz      r4, 0x90(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x98(r31)
	fabs     f2, f28
	lfs      f0, lbl_8051BF84@sda21(r2)
	lfs      f3, 0x38(r3)
	lfs      f1, lbl_8051BF80@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	lfs      f31, 0x20(r1)
	lfs      f29, 0x28(r1)
	lfs      f30, lbl_8051BF74@sda21(r2)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	beq      lbl_802A98BC
	fcmpo    cr0, f28, f30
	ble      lbl_802A98B8
	fmr      f28, f0
	b        lbl_802A98BC

lbl_802A98B8:
	fneg     f28, f0

lbl_802A98BC:
	lwz      r3, 0x90(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f4, lbl_8051BF74@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fadds    f6, f28, f1
	li       r0, 4
	fadds    f1, f30, f4
	mr       r5, r31
	mr       r6, r31
	addi     r4, r3, sincosTable___5JMath@l
	lfs      f3, lbl_8051BF88@sda21(r2)
	mtctr    r0

lbl_802A98F8:
	lfs      f0, 0xc(r5)
	fadds    f7, f6, f0
	fmr      f0, f7
	fcmpo    cr0, f7, f4
	bge      lbl_802A9910
	fneg     f0, f7

lbl_802A9910:
	fmuls    f0, f0, f3
	lfs      f2, 8(r31)
	fcmpo    cr0, f7, f4
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f5, f2, f0
	bge      lbl_802A9968
	lfs      f0, lbl_8051BF8C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f7, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802A9988

lbl_802A9968:
	fmuls    f0, f7, f3
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802A9988:
	fmuls    f2, f2, f0
	addi     r5, r5, 4
	fadds    f0, f29, f5
	fadds    f2, f31, f2
	stfs     f2, 0x5c(r6)
	stfs     f1, 0x60(r6)
	stfs     f0, 0x64(r6)
	addi     r6, r6, 0xc
	bdnz     lbl_802A98F8
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xa4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A99E4
 * Size:	0000FC
 */
void IKSystemMgr::calcFaceDir()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802A9AA4
	lwz      r4, 0x8c(r31)
	addi     r3, r1, 0x14
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lwz      r4, 0x8c(r31)
	addi     r3, r1, 8
	lfs      f31, 0x14(r1)
	lfs      f30, 0x1c(r1)
	addi     r4, r4, 0x5c
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fadds    f4, f31, f1
	lfs      f3, lbl_8051BF90@sda21(r2)
	fadds    f2, f30, f0
	lfs      f1, 0x38(r31)
	lfs      f0, 0x40(r31)
	fmsubs   f1, f4, f3, f1
	fmsubs   f2, f2, f3, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 4(r31)
	lfs      f0, lbl_8051BF74@sda21(r2)
	lfs      f1, 4(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_802A9A88
	lfs      f0, lbl_8051BF94@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_802A9A9C

lbl_802A9A88:
	lfs      f0, lbl_8051BF94@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802A9A9C
	fsubs    f1, f1, f0

lbl_802A9A9C:
	stfs     f1, 4(r31)
	b        lbl_802A9ABC

lbl_802A9AA4:
	lwz      r3, 0x90(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 4(r31)

lbl_802A9ABC:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A9AE0
 * Size:	000298
 */
void IKSystemMgr::calcCentrePosition()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	mr       r31, r3
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802A9D34
	lwz      r4, 0x8c(r31)
	addi     r3, r1, 0x38
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f2, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r4, 0x8c(r31)
	stfs     f2, 0x64(r1)
	addi     r4, r4, 0x5c
	stfs     f1, 0x68(r1)
	stfs     f0, 0x6c(r1)
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f2, 0x2c(r1)
	addi     r3, r1, 0x20
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	lwz      r4, 0x8c(r31)
	stfs     f2, 0x70(r1)
	addi     r4, r4, 0xb8
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f2, 0x20(r1)
	addi     r3, r1, 0x14
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r4, 0x8c(r31)
	stfs     f2, 0x7c(r1)
	addi     r4, r4, 0x114
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)
	bl       getBottomJointPosition__Q24Game12IKSystemBaseFv
	lfs      f11, 0x18(r1)
	addi     r5, r1, 0x54
	lfs      f12, 0x14(r1)
	li       r6, 0
	lfs      f10, 0x1c(r1)
	lfs      f0, lbl_8051BF74@sda21(r2)
	lfs      f2, 0x68(r1)
	stfs     f0, 0x40(r31)
	lfs      f1, 0x74(r1)
	stfs     f0, 0x3c(r31)
	lfs      f3, 0x64(r1)
	stfs     f0, 0x38(r31)
	lfs      f0, 0x80(r1)
	lfs      f4, 0x38(r31)
	lfs      f8, 0x6c(r1)
	fadds    f3, f4, f3
	lfs      f7, 0x70(r1)
	lfs      f6, 0x78(r1)
	stfs     f2, 0x54(r1)
	lfs      f5, 0x7c(r1)
	stfs     f3, 0x38(r31)
	lfs      f4, 0x84(r1)
	lfs      f9, 0x40(r31)
	stfs     f1, 0x58(r1)
	fadds    f8, f9, f8
	lfs      f3, lbl_8051BF98@sda21(r2)
	stfs     f0, 0x5c(r1)
	stfs     f8, 0x40(r31)
	lfs      f8, 0x38(r31)
	stfs     f12, 0x88(r1)
	fadds    f7, f8, f7
	stfs     f11, 0x8c(r1)
	stfs     f7, 0x38(r31)
	lfs      f2, 0x40(r31)
	stfs     f10, 0x90(r1)
	fadds    f1, f2, f6
	stfs     f11, 0x60(r1)
	stfs     f1, 0x40(r31)
	lfs      f0, 0x38(r31)
	fadds    f0, f0, f5
	stfs     f0, 0x38(r31)
	lfs      f0, 0x40(r31)
	fadds    f0, f0, f4
	stfs     f0, 0x40(r31)
	lfs      f0, 0x38(r31)
	fadds    f0, f0, f12
	stfs     f0, 0x38(r31)
	lfs      f0, 0x40(r31)
	fadds    f0, f0, f10
	stfs     f0, 0x40(r31)
	lfs      f0, 0x38(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x38(r31)
	lfs      f0, 0x40(r31)
	fmuls    f0, f0, f3
	stfs     f0, 0x40(r31)

lbl_802A9C64:
	addi     r7, r6, 1
	addi     r4, r1, 0x54
	slwi     r3, r7, 2
	subfic   r0, r7, 4
	add      r4, r4, r3
	mtctr    r0
	cmpwi    r7, 4
	bge      lbl_802A9CA8

lbl_802A9C84:
	lfs      f1, 0(r5)
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802A9C9C
	stfs     f1, 0(r4)
	stfs     f0, 0(r5)

lbl_802A9C9C:
	addi     r4, r4, 4
	addi     r7, r7, 1
	bdnz     lbl_802A9C84

lbl_802A9CA8:
	addi     r6, r6, 1
	addi     r5, r5, 4
	cmpwi    r6, 3
	blt      lbl_802A9C64
	lis      r3, lbl_80489968@ha
	lfs      f1, 0x54(r1)
	addi     r5, r3, lbl_80489968@l
	lfs      f0, 0x3c(r31)
	lwz      r0, 0(r5)
	lwz      r4, 4(r5)
	stw      r0, 0x44(r1)
	lwz      r3, 8(r5)
	lfs      f2, 0x44(r1)
	lwz      r0, 0xc(r5)
	fmadds   f0, f2, f1, f0
	stw      r4, 0x48(r1)
	lfs      f1, 0x58(r1)
	stw      r3, 0x4c(r1)
	lfs      f2, 0x48(r1)
	stfs     f0, 0x3c(r31)
	lfs      f4, 0x4c(r1)
	lfs      f0, 0x3c(r31)
	stw      r0, 0x50(r1)
	fmadds   f0, f2, f1, f0
	lfs      f3, 0x5c(r1)
	lfs      f2, 0x50(r1)
	lfs      f1, 0x60(r1)
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x3c(r31)
	fmadds   f0, f4, f3, f0
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x3c(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x3c(r31)
	b        lbl_802A9D64

lbl_802A9D34:
	lwz      r4, 0x90(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x38(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x40(r31)

lbl_802A9D64:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A9D78
 * Size:	0000E4
 */
void IKSystemMgr::calcTraceCentrePosition()
{
	/*
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_802A9E40
	lfs      f1, 0x38(r3)
	lfs      f0, 0x44(r3)
	lwz      r4, 0x98(r3)
	fsubs    f5, f1, f0
	lfs      f0, 0x50(r3)
	lfs      f4, 0x3c(r4)
	lfs      f3, 0x3c(r3)
	fmuls    f5, f5, f4
	lfs      f1, 0x48(r3)
	lfs      f2, 0x40(r3)
	fsubs    f3, f3, f1
	lfs      f1, 0x4c(r3)
	fadds    f0, f0, f5
	fsubs    f1, f2, f1
	fmuls    f3, f3, f4
	stfs     f0, 0x50(r3)
	fmuls    f1, f1, f4
	lfs      f0, 0x54(r3)
	fadds    f0, f0, f3
	stfs     f0, 0x54(r3)
	lfs      f0, 0x58(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x58(r3)
	lfs      f1, 0x44(r3)
	lfs      f0, 0x50(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r3)
	lfs      f1, 0x48(r3)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x48(r3)
	lfs      f1, 0x4c(r3)
	lfs      f0, 0x58(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x4c(r3)
	lwz      r4, 0x98(r3)
	lfs      f0, 0x50(r3)
	lfs      f1, 0x40(r4)
	fmuls    f0, f0, f1
	stfs     f0, 0x50(r3)
	lfs      f0, 0x54(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x54(r3)
	lfs      f0, 0x58(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x58(r3)
	blr

lbl_802A9E40:
	lfs      f0, 0x38(r3)
	stfs     f0, 0x44(r3)
	lfs      f0, 0x3c(r3)
	stfs     f0, 0x48(r3)
	lfs      f0, 0x40(r3)
	stfs     f0, 0x4c(r3)
	blr
	*/
}
} // namespace Game
