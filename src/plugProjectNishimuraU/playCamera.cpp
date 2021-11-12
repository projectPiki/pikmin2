#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_playCamera_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483FD0
    lbl_80483FD0:
        .4byte 0x506C6179
        .4byte 0x43616D65
        .4byte 0x72610000
    .global lbl_80483FDC
    lbl_80483FDC:
        .4byte 0x706C6179
        .4byte 0x43616D65
        .4byte 0x72612E63
        .4byte 0x70700000
    .global lbl_80483FEC
    lbl_80483FEC:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1958
    lbl_804C1958:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game10PlayCamera
    __vt__Q24Game10PlayCamera:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10PlayCameraFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte writeObject__9CullPlaneFR6StreamR5Plane
        .4byte readObject__9CullPlaneFR6StreamR5Plane
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
        .4byte getViewMatrix__6CameraFb
        .4byte getPosition__6CameraFv
        .4byte updatePlanes__6CameraFv
        .4byte updateScreenConstants__6CameraFv
        .4byte getLookAtPosition___Q24Game10PlayCameraFv
        .4byte getTargetDistance__6CameraFv
        .4byte getPositionPtr__6CameraFv
        .4byte on_getPositionPtr__12LookAtCameraFv
        .4byte getSoundPositionPtr__6CameraFv
        .4byte getSoundMatrixPtr__6CameraFv
        .4byte isSpecialCamera__Q24Game10PlayCameraFv
        .4byte updateMatrix__Q24Game10PlayCameraFv
        .4byte doUpdate__Q24Game10PlayCameraFv
        .4byte startVibration__Q24Game10PlayCameraFi
        .4byte init__Q24Game10PlayCameraFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515CF0
    lbl_80515CF0:
        .skip 0x4
    .global lbl_80515CF4
    lbl_80515CF4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A660
    lbl_8051A660:
        .4byte 0x42C80000
    .global lbl_8051A664
    lbl_8051A664:
        .4byte 0x00000000
    .global lbl_8051A668
    lbl_8051A668:
        .4byte 0x41F00000
    .global lbl_8051A66C
    lbl_8051A66C:
        .float 1.0
    .global lbl_8051A670
    lbl_8051A670:
        .4byte 0x46480000
    .global lbl_8051A674
    lbl_8051A674:
        .4byte 0x40490FDB
    .global lbl_8051A678
    lbl_8051A678:
        .4byte 0x40C90FDB
    .global lbl_8051A67C
    lbl_8051A67C:
        .4byte 0x3C8EFA35
    .global lbl_8051A680
    lbl_8051A680:
        .4byte 0x41200000
    .global lbl_8051A684
    lbl_8051A684:
        .4byte 0x447A0000
    .global lbl_8051A688
    lbl_8051A688:
        .4byte 0x41DC0000
    .global lbl_8051A68C
    lbl_8051A68C:
        .float 0.1
    .global lbl_8051A690
    lbl_8051A690:
        .4byte 0x3E333333
    .global lbl_8051A694
    lbl_8051A694:
        .4byte 0x3F533333
    .global lbl_8051A698
    lbl_8051A698:
        .float 0.5
    .global lbl_8051A69C
    lbl_8051A69C:
        .4byte 0xC3A2F983
    .global lbl_8051A6A0
    lbl_8051A6A0:
        .4byte 0x43A2F983
    .global lbl_8051A6A4
    lbl_8051A6A4:
        .4byte 0x42480000
    .global lbl_8051A6A8
    lbl_8051A6A8:
        .4byte 0x41700000
    .global lbl_8051A6AC
    lbl_8051A6AC:
        .4byte 0x47FA0000
    .global lbl_8051A6B0
    lbl_8051A6B0:
        .4byte 0xC7FA0000
        .4byte 0x00000000
    .global lbl_8051A6B8
    lbl_8051A6B8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8023F3F0
 * Size:	000138
 */
PlayCamera::PlayCamera(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__12LookAtCameraFv
	lis      r4, __vt__Q24Game10PlayCamera@ha
	lis      r3, lbl_80483FD0@ha
	addi     r0, r4, __vt__Q24Game10PlayCamera@l
	li       r5, 0
	stw      r0, 0(r30)
	li       r4, 1
	lfs      f4, lbl_8051A660@sda21(r2)
	addi     r0, r3, lbl_80483FD0@l
	stw      r31, 0x198(r30)
	mr       r3, r30
	lfs      f3, lbl_8051A664@sda21(r2)
	stw      r5, 0x19c(r30)
	lfs      f2, lbl_8051A668@sda21(r2)
	stw      r4, 0x1a0(r30)
	lfs      f1, lbl_8051A66C@sda21(r2)
	stw      r5, 0x1a4(r30)
	lfs      f0, lbl_8051A670@sda21(r2)
	stb      r4, 0x248(r30)
	stb      r5, 0x249(r30)
	stfs     f4, 0x1ac(r30)
	stfs     f4, 0x1a8(r30)
	stfs     f3, 0x1b4(r30)
	stfs     f3, 0x1b0(r30)
	stfs     f3, 0x1bc(r30)
	stfs     f3, 0x1b8(r30)
	stfs     f2, 0x1c0(r30)
	stfs     f2, 0x28(r30)
	stfs     f1, 0x1c4(r30)
	stfs     f1, 0x70(r30)
	stfs     f0, 0x1c8(r30)
	stfs     f0, 0x74(r30)
	stfs     f3, 0x1cc(r30)
	stfs     f3, 0x1d0(r30)
	stfs     f3, 0x1d4(r30)
	stfs     f3, 0x1d8(r30)
	stfs     f3, 0x1dc(r30)
	stfs     f3, 0x1e0(r30)
	stb      r5, 0x1f0(r30)
	stfs     f3, 0x23c(r30)
	stfs     f3, 0x230(r30)
	stfs     f3, 0x224(r30)
	stfs     f3, 0x218(r30)
	stfs     f3, 0x20c(r30)
	stfs     f3, 0x200(r30)
	stfs     f3, 0x1f4(r30)
	stb      r5, 0x1f1(r30)
	stfs     f3, 0x240(r30)
	stfs     f3, 0x234(r30)
	stfs     f3, 0x228(r30)
	stfs     f3, 0x21c(r30)
	stfs     f3, 0x210(r30)
	stfs     f3, 0x204(r30)
	stfs     f3, 0x1f8(r30)
	stb      r5, 0x1f2(r30)
	stfs     f3, 0x244(r30)
	stfs     f3, 0x238(r30)
	stfs     f3, 0x22c(r30)
	stfs     f3, 0x220(r30)
	stfs     f3, 0x214(r30)
	stfs     f3, 0x208(r30)
	stfs     f3, 0x1fc(r30)
	stw      r5, 0x24c(r30)
	stw      r5, 0x250(r30)
	stw      r0, 0x14(r30)
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
 * Address:	8023F528
 * Size:	000008
 */
void PlayCamera::setCameraParms(Game::CameraParms* a1)
{
	// Generated from stw r4, 0x24C(r3)
	_24C = a1;
}

/*
 * --INFO--
 * Address:	8023F530
 * Size:	000008
 */
void PlayCamera::setVibrationParms(Game::VibrationParms* a1)
{
	// Generated from stw r4, 0x250(r3)
	_250 = a1;
}

/*
 * --INFO--
 * Address:	8023F538
 * Size:	00016C
 */
void PlayCamera::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x198(r3)
	cmplwi   r0, 0
	bne      lbl_8023F574
	lis      r3, lbl_80483FDC@ha
	lis      r5, lbl_80483FEC@ha
	addi     r3, r3, lbl_80483FDC@l
	li       r4, 0x78
	addi     r5, r5, lbl_80483FEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023F574:
	lwz      r0, 0x24c(r31)
	cmplwi   r0, 0
	bne      lbl_8023F59C
	lis      r3, lbl_80483FDC@ha
	lis      r5, lbl_80483FEC@ha
	addi     r3, r3, lbl_80483FDC@l
	li       r4, 0x79
	addi     r5, r5, lbl_80483FEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023F59C:
	lwz      r0, 0x250(r31)
	cmplwi   r0, 0
	bne      lbl_8023F5C4
	lis      r3, lbl_80483FDC@ha
	lis      r5, lbl_80483FEC@ha
	addi     r3, r3, lbl_80483FDC@l
	li       r4, 0x7a
	addi     r5, r5, lbl_80483FEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023F5C4:
	li       r4, 1
	li       r0, 0
	stb      r4, 0x248(r31)
	mr       r3, r31
	stw      r0, 0x19c(r31)
	stw      r4, 0x1a0(r31)
	stw      r0, 0x1a4(r31)
	bl       setTargetParms__Q24Game10PlayCameraFv
	mr       r3, r31
	bl       changeTargetAtPosition__Q24Game10PlayCameraFv
	lfs      f0, 0x1ac(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r3, 0x198(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051A674@sda21(r2)
	lfs      f0, lbl_8051A664@sda21(r2)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8023F628
	lfs      f0, lbl_8051A678@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_8023F63C

lbl_8023F628:
	lfs      f0, lbl_8051A678@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8023F63C
	fsubs    f1, f1, f0

lbl_8023F63C:
	stfs     f1, 0x1b4(r31)
	mr       r3, r31
	stfs     f1, 0x1b0(r31)
	lfs      f0, 0x1bc(r31)
	stfs     f0, 0x1b8(r31)
	lfs      f0, 0x1c0(r31)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x1c4(r31)
	stfs     f0, 0x70(r31)
	lfs      f0, 0x1c8(r31)
	stfs     f0, 0x74(r31)
	lfs      f0, 0x1e4(r31)
	stfs     f0, 0x180(r31)
	lfs      f0, 0x1e8(r31)
	stfs     f0, 0x184(r31)
	lfs      f0, 0x1ec(r31)
	stfs     f0, 0x188(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023F6A4
 * Size:	000034
 */
void PlayCamera::setCameraAngle(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stfs     f1, 0x1b4(r3)
	stfs     f1, 0x1b0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023F6D8
 * Size:	00005C
 */
void PlayCamera::getCameraData(Game::CameraData&)
{
	/*
	lfs      f0, 0x1a8(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x1b0(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x1b8(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0x28(r3)
	stfs     f0, 0xc(r4)
	lfs      f0, 0x70(r3)
	stfs     f0, 0x10(r4)
	lfs      f0, 0x74(r3)
	stfs     f0, 0x14(r4)
	lfs      f0, 0x180(r3)
	stfs     f0, 0x18(r4)
	lfs      f0, 0x184(r3)
	stfs     f0, 0x1c(r4)
	lfs      f0, 0x188(r3)
	stfs     f0, 0x20(r4)
	lwz      r0, 0x1a0(r3)
	stw      r0, 0x24(r4)
	lwz      r0, 0x1a4(r3)
	stw      r0, 0x28(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023F734
 * Size:	00005C
 */
void PlayCamera::setCameraData(Game::CameraData&)
{
	/*
	lfs      f0, 0(r4)
	stfs     f0, 0x1a8(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x1b0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x1b8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x28(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x70(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x74(r3)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x180(r3)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x184(r3)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x188(r3)
	lwz      r0, 0x24(r4)
	stw      r0, 0x1a0(r3)
	lwz      r0, 0x28(r4)
	stw      r0, 0x1a4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023F790
 * Size:	000080
 */
void PlayCamera::changePlayerMode(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r0, 0x19c(r3)
	bl       setTargetParms__Q24Game10PlayCameraFv
	mr       r3, r30
	bl       changeTargetAtPosition__Q24Game10PlayCameraFv
	clrlwi.  r0, r31, 0x18
	beq      lbl_8023F7D4
	mr       r3, r30
	bl       setTargetThetaToWhistle__Q24Game10PlayCameraFv
	b        lbl_8023F7DC

lbl_8023F7D4:
	lfs      f0, 0x1b0(r30)
	stfs     f0, 0x1b4(r30)

lbl_8023F7DC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       setProjection__6CameraFv
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
 * Address:	8023F810
 * Size:	00004C
 */
void PlayCamera::isSpecialCamera(void)
{
	/*
	lwz      r4, 0x198(r3)
	lwz      r0, 0x278(r4)
	cmplwi   r0, 0
	beq      lbl_8023F854
	lbz      r0, 0x248(r3)
	cmplwi   r0, 0
	beq      lbl_8023F854
	lwz      r0, 0x19c(r3)
	cmpwi    r0, 0
	bne      lbl_8023F854
	lfs      f1, 0x1e0(r3)
	lfs      f0, lbl_8051A66C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8023F854
	li       r3, 1
	blr

lbl_8023F854:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023F85C
 * Size:	0000E8
 */
void PlayCamera::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       updateCameraMode__Q24Game10PlayCameraFv
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	mr       r31, r3
	beq      lbl_8023F88C
	mr       r3, r30
	bl       startZoomCamera__Q24Game10PlayCameraFv

lbl_8023F88C:
	rlwinm.  r0, r31, 0, 0x19, 0x19
	beq      lbl_8023F89C
	mr       r3, r30
	bl       finishDemoCamera__Q24Game10PlayCameraFv

lbl_8023F89C:
	clrlwi.  r0, r31, 0x1e
	beq      lbl_8023F8B0
	mr       r3, r30
	mr       r4, r31
	bl       startGameCamera__Q24Game10PlayCameraFi

lbl_8023F8B0:
	rlwinm.  r0, r31, 0, 0x1d, 0x1d
	beq      lbl_8023F8C0
	mr       r3, r30
	bl       setFollowTime__Q24Game10PlayCameraFv

lbl_8023F8C0:
	rlwinm.  r0, r31, 0, 0x1c, 0x1c
	beq      lbl_8023F8D0
	mr       r3, r30
	bl       setSmoothThetaSpeed__Q24Game10PlayCameraFv

lbl_8023F8D0:
	mr       r3, r30
	bl       changeTargetTheta__Q24Game10PlayCameraFv
	mr       r3, r30
	bl       changeTargetAtPosition__Q24Game10PlayCameraFv
	mr       r3, r30
	mr       r4, r31
	bl       setCollisionCameraTargetPhi__Q24Game10PlayCameraFi
	mr       r3, r30
	mr       r4, r31
	bl       updateParms__Q24Game10PlayCameraFi
	li       r31, 0

lbl_8023F8FC:
	addi     r0, r31, 0x1f0
	lbzx     r0, r30, r0
	cmplwi   r0, 0
	beq      lbl_8023F918
	mr       r3, r30
	mr       r4, r31
	bl       updateVibration__Q24Game10PlayCameraFi

lbl_8023F918:
	addi     r31, r31, 1
	cmpwi    r31, 3
	blt      lbl_8023F8FC
	mr       r3, r30
	bl       isModCameraFinished__Q24Game10PlayCameraFv
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
 * Address:	8023F944
 * Size:	0000E0
 */
void PlayCamera::updateMatrix(void)
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	li       r4, 0x5a
	stw      r0, 0x104(r1)
	stw      r31, 0xfc(r1)
	mr       r31, r3
	addi     r3, r1, 0xc8
	lfs      f1, 0x200(r31)
	bl       PSMTXRotRad
	lfs      f0, 0x1b0(r31)
	addi     r3, r1, 0x98
	li       r4, 0x59
	fneg     f1, f0
	bl       PSMTXRotRad
	lfs      f1, 0x1b8(r31)
	addi     r3, r1, 0x68
	li       r4, 0x58
	bl       PSMTXRotRad
	lfs      f1, lbl_8051A664@sda21(r2)
	addi     r3, r1, 0x38
	lfs      f3, 0x208(r31)
	lfs      f0, 0x1a8(r31)
	fmr      f2, f1
	fsubs    f3, f3, f0
	bl       PSMTXTrans
	lfs      f0, 0x204(r31)
	addi     r3, r1, 8
	lfs      f1, 0x180(r31)
	fneg     f3, f0
	lfs      f2, 0x184(r31)
	lfs      f0, 0x188(r31)
	fneg     f1, f1
	fsubs    f2, f3, f2
	fneg     f3, f0
	bl       PSMTXTrans
	addi     r3, r1, 0x68
	addi     r4, r1, 0x98
	addi     r5, r31, 0x144
	bl       PSMTXConcat
	addi     r4, r31, 0x144
	addi     r3, r1, 0xc8
	mr       r5, r4
	bl       PSMTXConcat
	addi     r4, r31, 0x144
	addi     r3, r1, 0x38
	mr       r5, r4
	bl       PSMTXConcat
	addi     r3, r31, 0x144
	addi     r4, r1, 8
	mr       r5, r3
	bl       PSMTXConcat
	lwz      r0, 0x104(r1)
	lwz      r31, 0xfc(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FA24
 * Size:	00007C
 */
void PlayCamera::noUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xb4
	addi     r4, r31, 0xf4
	bl       PSMTX44Copy
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	addi     r4, r31, 0x34
	bl       PSMTXCopy
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FAA0
 * Size:	000044
 */
void PlayCamera::isVibration(void)
{
	/*
	lbz      r0, 0x1f0(r3)
	cmplwi   r0, 0
	beq      lbl_8023FAB4
	li       r3, 1
	blr

lbl_8023FAB4:
	lbz      r0, 0x1f1(r3)
	cmplwi   r0, 0
	beq      lbl_8023FAC8
	li       r3, 1
	blr

lbl_8023FAC8:
	lbz      r0, 0x1f2(r3)
	cmplwi   r0, 0
	beq      lbl_8023FADC
	li       r3, 1
	blr

lbl_8023FADC:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FAE4
 * Size:	000208
 */
void PlayCamera::startVibration(int, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	cmpwi    r31, 0x1d
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_8023FB4C
	li       r0, 1
	lfs      f0, lbl_8051A664@sda21(r2)
	stb      r0, 0x1f0(r30)
	li       r4, 0
	stfs     f0, 0x218(r30)
	stfs     f1, 0x230(r30)
	lwz      r5, 0x250(r30)
	lfs      f0, 0x27c(r5)
	stfs     f0, 0x23c(r30)
	lwz      r5, 0x250(r30)
	lfs      f0, 0x2a4(r5)
	stfs     f0, 0x1f4(r30)
	lwz      r5, 0x250(r30)
	lfs      f0, 0x2cc(r5)
	stfs     f0, 0x224(r30)
	bl       otherVibFinished__Q24Game10PlayCameraFi
	b        lbl_8023FCD4

lbl_8023FB4C:
	cmpwi    r31, 0x1c
	bne      lbl_8023FB98
	li       r0, 1
	lfs      f0, lbl_8051A664@sda21(r2)
	stb      r0, 0x1f2(r30)
	li       r4, 2
	stfs     f0, 0x220(r30)
	stfs     f1, 0x238(r30)
	lwz      r5, 0x250(r30)
	lfs      f0, 0x204(r5)
	stfs     f0, 0x244(r30)
	lwz      r5, 0x250(r30)
	lfs      f0, 0x22c(r5)
	stfs     f0, 0x1fc(r30)
	lwz      r5, 0x250(r30)
	lfs      f0, 0x254(r5)
	stfs     f0, 0x22c(r30)
	bl       otherVibFinished__Q24Game10PlayCameraFi
	b        lbl_8023FCD4

lbl_8023FB98:
	li       r0, 1
	lfs      f0, lbl_8051A664@sda21(r2)
	stb      r0, 0x1f1(r30)
	li       r4, 1
	stfs     f0, 0x21c(r30)
	stfs     f1, 0x234(r30)
	bl       otherVibFinished__Q24Game10PlayCameraFi
	cmpwi    r31, 0x1b
	bne      lbl_8023FBE4
	lwz      r3, 0x250(r30)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0x240(r30)
	lwz      r3, 0x250(r30)
	lfs      f0, 0x1b4(r3)
	stfs     f0, 0x1f8(r30)
	lwz      r3, 0x250(r30)
	lfs      f0, 0x1dc(r3)
	stfs     f0, 0x228(r30)
	b        lbl_8023FCD4

lbl_8023FBE4:
	cmpwi    r31, 8
	bgt      lbl_8023FBFC
	lwz      r3, 0x250(r30)
	lfs      f0, 0x24(r3)
	stfs     f0, 0x240(r30)
	b        lbl_8023FC20

lbl_8023FBFC:
	cmpwi    r31, 0x11
	bgt      lbl_8023FC14
	lwz      r3, 0x250(r30)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x240(r30)
	b        lbl_8023FC20

lbl_8023FC14:
	lwz      r3, 0x250(r30)
	lfs      f0, 0x74(r3)
	stfs     f0, 0x240(r30)

lbl_8023FC20:
	lis      r3, 0x55555556@ha
	addi     r3, r3, 0x55555556@l
	mulhw    r4, r3, r31
	srwi     r0, r4, 0x1f
	add      r4, r4, r0
	mulhw    r3, r3, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf.    r0, r0, r4
	bne      lbl_8023FC5C
	lwz      r3, 0x250(r30)
	lfs      f0, 0x9c(r3)
	stfs     f0, 0x1f8(r30)
	b        lbl_8023FC80

lbl_8023FC5C:
	cmpwi    r0, 1
	bne      lbl_8023FC74
	lwz      r3, 0x250(r30)
	lfs      f0, 0xc4(r3)
	stfs     f0, 0x1f8(r30)
	b        lbl_8023FC80

lbl_8023FC74:
	lwz      r3, 0x250(r30)
	lfs      f0, 0xec(r3)
	stfs     f0, 0x1f8(r30)

lbl_8023FC80:
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	mulhw    r3, r0, r31
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf.    r0, r0, r31
	bne      lbl_8023FCB0
	lwz      r3, 0x250(r30)
	lfs      f0, 0x114(r3)
	stfs     f0, 0x228(r30)
	b        lbl_8023FCD4

lbl_8023FCB0:
	cmpwi    r0, 1
	bne      lbl_8023FCC8
	lwz      r3, 0x250(r30)
	lfs      f0, 0x13c(r3)
	stfs     f0, 0x228(r30)
	b        lbl_8023FCD4

lbl_8023FCC8:
	lwz      r3, 0x250(r30)
	lfs      f0, 0x164(r3)
	stfs     f0, 0x228(r30)

lbl_8023FCD4:
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
 * Address:	8023FCEC
 * Size:	0000D0
 */
void PlayCamera::startDemoCamera(int)
{
	/*
	cmpwi    r4, 1
	beq      lbl_8023FCF8
	b        lbl_8023FD50

lbl_8023FCF8:
	lwz      r4, 0x24c(r3)
	lfs      f5, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x7a4(r4)
	lfs      f4, lbl_8051A66C@sda21(r2)
	stfs     f0, 0x1ac(r3)
	lfs      f3, lbl_8051A670@sda21(r2)
	lwz      r4, 0x24c(r3)
	lfs      f2, lbl_8051A680@sda21(r2)
	lfs      f0, 0x7cc(r4)
	lfs      f1, lbl_8051A684@sda21(r2)
	fmuls    f5, f5, f0
	lfs      f0, lbl_8051A688@sda21(r2)
	stfs     f5, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f5, 0x7f4(r4)
	stfs     f5, 0x1c0(r3)
	stfs     f4, 0x1c4(r3)
	stfs     f3, 0x1c8(r3)
	stfs     f2, 0x1cc(r3)
	stfs     f1, 0x1d0(r3)
	stfs     f0, 0x1d4(r3)
	blr

lbl_8023FD50:
	lwz      r4, 0x24c(r3)
	lfs      f1, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x1ac(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x4c(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x74(r4)
	stfs     f0, 0x1c0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x114(r4)
	stfs     f0, 0x1c4(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x13c(r4)
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x9c(r4)
	stfs     f0, 0x1cc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0xc4(r4)
	stfs     f0, 0x1d0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0xec(r4)
	stfs     f0, 0x1d4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FDBC
 * Size:	000020
 */
void PlayCamera::finishDemoCamera(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setTargetParms__Q24Game10PlayCameraFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FDDC
 * Size:	0000EC
 */
void PlayCamera::updateCameraMode(void)
{
	/*
	lwz      r4, 0x198(r3)
	li       r6, 0
	lwz      r5, 0x278(r4)
	cmplwi   r5, 0
	beq      lbl_8023FEC0
	lbz      r0, 0x248(r3)
	cmplwi   r0, 0
	beq      lbl_8023FEC0
	lwz      r0, 0x19c(r3)
	cmpwi    r0, 0
	bne      lbl_8023FEC0
	lwz      r0, 0x18(r5)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8023FE54
	lfs      f2, 0x1e0(r3)
	lfs      f1, lbl_8051A66C@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_8023FE4C
	lwz      r4, sys@sda21(r13)
	lfs      f0, 0x54(r4)
	fadds    f0, f2, f0
	stfs     f0, 0x1e0(r3)
	lfs      f0, 0x1e0(r3)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_8023FE74
	ori      r6, r6, 0x30
	b        lbl_8023FE74

lbl_8023FE4C:
	ori      r6, r6, 0x20
	b        lbl_8023FE74

lbl_8023FE54:
	lfs      f1, 0x1e0(r3)
	lfs      f0, lbl_8051A66C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8023FE6C
	ori      r6, r6, 0x40

lbl_8023FE6C:
	lfs      f0, lbl_8051A664@sda21(r2)
	stfs     f0, 0x1e0(r3)

lbl_8023FE74:
	rlwinm.  r0, r6, 0, 0x1a, 0x1a
	bne      lbl_8023FE98
	lwz      r3, 0x1c(r5)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_8023FE8C
	ori      r6, r6, 1

lbl_8023FE8C:
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_8023FE98
	ori      r6, r6, 2

lbl_8023FE98:
	lwz      r0, 0x1c(r5)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_8023FEAC
	ori      r6, r6, 4
	b        lbl_8023FEC0

lbl_8023FEAC:
	lfs      f1, 0x28(r5)
	lfs      f0, lbl_8051A68C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8023FEC0
	ori      r6, r6, 8

lbl_8023FEC0:
	mr       r3, r6
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FEC8
 * Size:	000080
 */
void PlayCamera::startZoomCamera(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f5, lbl_8051A67C@sda21(r2)
	li       r4, 0x1888
	stw      r0, 0x14(r1)
	li       r5, 0
	lfs      f4, lbl_8051A66C@sda21(r2)
	lwz      r6, 0x24c(r3)
	lfs      f3, lbl_8051A670@sda21(r2)
	lfs      f0, 0x7a4(r6)
	lfs      f2, lbl_8051A680@sda21(r2)
	stfs     f0, 0x1ac(r3)
	lfs      f1, lbl_8051A684@sda21(r2)
	lwz      r6, 0x24c(r3)
	lfs      f0, 0x7cc(r6)
	fmuls    f5, f5, f0
	lfs      f0, lbl_8051A688@sda21(r2)
	stfs     f5, 0x1bc(r3)
	lwz      r6, 0x24c(r3)
	lfs      f5, 0x7f4(r6)
	stfs     f5, 0x1c0(r3)
	stfs     f4, 0x1c4(r3)
	stfs     f3, 0x1c8(r3)
	stfs     f2, 0x1cc(r3)
	stfs     f1, 0x1d0(r3)
	stfs     f0, 0x1d4(r3)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FF48
 * Size:	000084
 */
void PlayCamera::startGameCamera(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x1f
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8023FF84
	lwz      r3, 0x1a0(r31)
	addi     r0, r3, 1
	stw      r0, 0x1a0(r31)
	lwz      r0, 0x1a0(r31)
	cmpwi    r0, 2
	ble      lbl_8023FF84
	li       r0, 0
	stw      r0, 0x1a0(r31)

lbl_8023FF84:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_8023FFA0
	lwz      r3, 0x1a4(r31)
	li       r0, 0
	xori     r3, r3, 1
	stw      r3, 0x1a4(r31)
	stb      r0, 0x249(r31)

lbl_8023FFA0:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x180f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	mr       r3, r31
	bl       setTargetParms__Q24Game10PlayCameraFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023FFCC
 * Size:	0002F8
 */
void PlayCamera::setTargetParms(void)
{
	/*
	lfs      f0, lbl_8051A664@sda21(r2)
	stfs     f0, 0x1e0(r3)
	lwz      r0, 0x1a4(r3)
	cmpwi    r0, 1
	beq      lbl_80240158
	bgelr
	cmpwi    r0, 0
	bltlr
	lwz      r0, 0x1a0(r3)
	cmpwi    r0, 1
	beq      lbl_80240080
	bge      lbl_80240008
	cmpwi    r0, 0
	bge      lbl_80240014
	blr

lbl_80240008:
	cmpwi    r0, 3
	bgelr
	b        lbl_802400EC

lbl_80240014:
	lwz      r4, 0x24c(r3)
	lfs      f1, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x1ac(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x4c(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x74(r4)
	stfs     f0, 0x1c0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x114(r4)
	stfs     f0, 0x1c4(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x13c(r4)
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x9c(r4)
	stfs     f0, 0x1cc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0xc4(r4)
	stfs     f0, 0x1d0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0xec(r4)
	stfs     f0, 0x1d4(r3)
	blr

lbl_80240080:
	lwz      r4, 0x24c(r3)
	lfs      f1, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x164(r4)
	stfs     f0, 0x1ac(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x18c(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x1b4(r4)
	stfs     f0, 0x1c0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x254(r4)
	stfs     f0, 0x1c4(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x27c(r4)
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x1dc(r4)
	stfs     f0, 0x1cc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x204(r4)
	stfs     f0, 0x1d0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x22c(r4)
	stfs     f0, 0x1d4(r3)
	blr

lbl_802400EC:
	lwz      r4, 0x24c(r3)
	lfs      f1, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x2a4(r4)
	stfs     f0, 0x1ac(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x2cc(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x2f4(r4)
	stfs     f0, 0x1c0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x394(r4)
	stfs     f0, 0x1c4(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x3bc(r4)
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x31c(r4)
	stfs     f0, 0x1cc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x344(r4)
	stfs     f0, 0x1d0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x36c(r4)
	stfs     f0, 0x1d4(r3)
	blr

lbl_80240158:
	lwz      r0, 0x1a0(r3)
	cmpwi    r0, 1
	beq      lbl_802401EC
	bge      lbl_80240174
	cmpwi    r0, 0
	bge      lbl_80240180
	blr

lbl_80240174:
	cmpwi    r0, 3
	bgelr
	b        lbl_80240258

lbl_80240180:
	lwz      r4, 0x24c(r3)
	lfs      f1, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x3e4(r4)
	stfs     f0, 0x1ac(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x40c(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x434(r4)
	stfs     f0, 0x1c0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x4d4(r4)
	stfs     f0, 0x1c4(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x4fc(r4)
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x45c(r4)
	stfs     f0, 0x1cc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x484(r4)
	stfs     f0, 0x1d0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x4ac(r4)
	stfs     f0, 0x1d4(r3)
	blr

lbl_802401EC:
	lwz      r4, 0x24c(r3)
	lfs      f1, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x524(r4)
	stfs     f0, 0x1ac(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x54c(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x574(r4)
	stfs     f0, 0x1c0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x614(r4)
	stfs     f0, 0x1c4(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x63c(r4)
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x59c(r4)
	stfs     f0, 0x1cc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x5c4(r4)
	stfs     f0, 0x1d0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x5ec(r4)
	stfs     f0, 0x1d4(r3)
	blr

lbl_80240258:
	lwz      r4, 0x24c(r3)
	lfs      f1, lbl_8051A67C@sda21(r2)
	lfs      f0, 0x664(r4)
	stfs     f0, 0x1ac(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x68c(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x1bc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x6b4(r4)
	stfs     f0, 0x1c0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x754(r4)
	stfs     f0, 0x1c4(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x77c(r4)
	stfs     f0, 0x1c8(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x6dc(r4)
	stfs     f0, 0x1cc(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x704(r4)
	stfs     f0, 0x1d0(r3)
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x72c(r4)
	stfs     f0, 0x1d4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802402C4
 * Size:	000070
 */
void PlayCamera::setTargetThetaToWhistle(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 0x198(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x198(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lwz      r4, 0x28c(r4)
	lfs      f2, 0x10(r1)
	lfs      f1, 0xc(r4)
	lfs      f0, 0x14(r4)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x1b4(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240334
 * Size:	000010
 */
void PlayCamera::setFollowTime(void)
{
	/*
	lwz      r4, 0x24c(r3)
	lfs      f0, 0x90c(r4)
	stfs     f0, 0x1dc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240344
 * Size:	000068
 */
void PlayCamera::setSmoothThetaSpeed(void)
{
	/*
	lwz      r4, 0x198(r3)
	lwz      r6, 0x278(r4)
	cmplwi   r6, 0
	beqlr
	lwz      r5, 0x24c(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x48(r6)
	lfs      f1, 0x934(r5)
	lfs      f0, 0x1d8(r3)
	lfs      f4, 0x95c(r5)
	lfs      f3, 0x54(r4)
	fmadds   f0, f2, f1, f0
	fmuls    f2, f4, f3
	stfs     f0, 0x1d8(r3)
	fneg     f1, f2
	lfs      f0, 0x1d8(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_80240390
	b        lbl_802403A4

lbl_80240390:
	fcmpo    cr0, f0, f2
	ble      lbl_802403A0
	fmr      f1, f2
	b        lbl_802403A4

lbl_802403A0:
	fmr      f1, f0

lbl_802403A4:
	stfs     f1, 0x1d8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802403AC
 * Size:	0000E0
 */
void PlayCamera::changeTargetTheta(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f2, lbl_8051A664@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f1, 0x1dc(r3)
	fcmpo    cr0, f1, f2
	ble      lbl_8024042C
	lwz      r4, sys@sda21(r13)
	addi     r3, r1, 8
	lfs      f0, 0x54(r4)
	fsubs    f0, f1, f0
	stfs     f0, 0x1dc(r31)
	lwz      r4, 0x198(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x198(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lwz      r4, 0x28c(r4)
	lfs      f2, 0x10(r1)
	lfs      f1, 0xc(r4)
	lfs      f0, 0x14(r4)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x1b4(r31)
	b        lbl_80240464

lbl_8024042C:
	lfs      f1, 0x1b4(r31)
	lfs      f0, 0x1d8(r31)
	fsubs    f1, f1, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8024044C
	lfs      f0, lbl_8051A678@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_80240460

lbl_8024044C:
	lfs      f0, lbl_8051A678@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80240460
	fsubs    f1, f1, f0

lbl_80240460:
	stfs     f1, 0x1b4(r31)

lbl_80240464:
	lwz      r3, 0x24c(r31)
	lfs      f1, 0x1d8(r31)
	lfs      f0, 0x984(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x1d8(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024048C
 * Size:	000384
 */
void PlayCamera::changeTargetAtPosition(void)
{
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
	stfd     f25, 0x40(r1)
	psq_st   f25, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r4, 0x198(r31)
	lfs      f25, 0x1d0(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x198(r31)
	lis      r4, "__vt__26Iterator<Q24Game8Creature>"@ha
	lfs      f29, 0x14(r1)
	li       r0, 0
	lwz      r3, 0x254(r3)
	addi     r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
	lfs      f31, 0x18(r1)
	cmplwi   r0, 0
	lfs      f30, 0x1c(r1)
	fmuls    f28, f29, f25
	fmuls    f27, f31, f25
	stw      r4, 0x20(r1)
	fmuls    f26, f30, f25
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80240550
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802406EC

lbl_80240550:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802405BC

lbl_80240568:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802406EC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802405BC:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80240568
	b        lbl_802406EC

lbl_802405DC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80240630
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f2, 0xc(r1)
	lfs      f1, 0x10(r1)
	fadds    f28, f28, f0
	lfs      f0, lbl_8051A66C@sda21(r2)
	fadds    f27, f27, f2
	fadds    f26, f26, f1
	fadds    f25, f25, f0

lbl_80240630:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_8024065C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802406EC

lbl_8024065C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802406D0

lbl_8024067C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802406EC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802406D0:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024067C

lbl_802406EC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802405DC
	fdivs    f1, f28, f25
	lfs      f0, lbl_8051A664@sda21(r2)
	fdivs    f2, f27, f25
	stfs     f1, 0x1e4(r31)
	fdivs    f1, f26, f25
	stfs     f2, 0x1e8(r31)
	stfs     f1, 0x1ec(r31)
	lfs      f6, 0x1e8(r31)
	lfs      f7, 0x1e4(r31)
	fsubs    f2, f6, f31
	lfs      f5, 0x1ec(r31)
	fsubs    f3, f7, f29
	fsubs    f1, f5, f30
	fmuls    f2, f2, f2
	fmuls    f4, f1, f1
	fmadds   f1, f3, f3, f2
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240768
	ble      lbl_8024076C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8024076C

lbl_80240768:
	fmr      f1, f0

lbl_8024076C:
	lfs      f0, 0x1d4(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_802407B4
	fdivs    f8, f0, f1
	lfs      f0, lbl_8051A66C@sda21(r2)
	fsubs    f1, f0, f8
	fmuls    f0, f7, f8
	fmuls    f2, f6, f8
	fmuls    f4, f29, f1
	fmuls    f3, f31, f1
	fmuls    f1, f30, f1
	fadds    f4, f4, f0
	fmuls    f0, f5, f8
	fadds    f2, f3, f2
	stfs     f4, 0x1e4(r31)
	fadds    f0, f1, f0
	stfs     f2, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_802407B4:
	lfs      f1, 0x1e8(r31)
	lfs      f0, 0x1cc(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x1e8(r31)
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
	psq_l    f25, 72(r1), 0, qr0
	lfd      f25, 0x40(r1)
	lwz      r0, 0xb4(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240810
 * Size:	000164
 */
void PlayCamera::updateParms(int)
{
	/*
	lwz      r5, 0x24c(r3)
	rlwinm.  r0, r4, 0, 0x1a, 0x1a
	lfs      f1, lbl_8051A66C@sda21(r2)
	lfs      f0, 0x8bc(r5)
	lfs      f2, 0x1ac(r3)
	fsubs    f1, f1, f0
	lfs      f3, 0x1a8(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x1a8(r3)
	lfs      f2, 0x1bc(r3)
	lfs      f3, 0x1b8(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x1b8(r3)
	lfs      f2, 0x1c0(r3)
	lfs      f3, 0x28(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x28(r3)
	lfs      f2, 0x1c4(r3)
	lfs      f3, 0x70(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x70(r3)
	lfs      f2, 0x1c8(r3)
	lfs      f3, 0x74(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x74(r3)
	beq      lbl_80240894
	lfs      f0, lbl_8051A690@sda21(r2)
	lfs      f1, lbl_8051A694@sda21(r2)

lbl_80240894:
	lfs      f3, 0x180(r3)
	lfs      f2, 0x1e4(r3)
	lfs      f5, 0x184(r3)
	fmuls    f3, f3, f1
	fmuls    f2, f2, f0
	lfs      f4, 0x1e8(r3)
	lfs      f7, 0x188(r3)
	fmuls    f5, f5, f1
	fmuls    f4, f4, f0
	lfs      f6, 0x1ec(r3)
	fadds    f2, f3, f2
	fmuls    f1, f7, f1
	fmuls    f0, f6, f0
	fadds    f3, f5, f4
	stfs     f2, 0x180(r3)
	fadds    f0, f1, f0
	stfs     f3, 0x184(r3)
	stfs     f0, 0x188(r3)
	lfs      f4, 0x1b4(r3)
	lfs      f2, 0x1b0(r3)
	lwz      r4, 0x24c(r3)
	fcmpo    cr0, f4, f2
	cror     2, 1, 2
	bne      lbl_80240910
	fsubs    f3, f4, f2
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f3
	fcmpo    cr0, f0, f3
	bge      lbl_80240928
	fsubs    f4, f4, f1
	b        lbl_80240928

lbl_80240910:
	fsubs    f3, f2, f4
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f3
	fcmpo    cr0, f0, f3
	bge      lbl_80240928
	fadds    f4, f4, f1

lbl_80240928:
	fsubs    f2, f4, f2
	lfs      f3, 0x8e4(r4)
	lfs      f1, 0x1b0(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x1b0(r3)
	lfs      f1, 0x1b0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80240958
	lfs      f0, lbl_8051A678@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_8024096C

lbl_80240958:
	lfs      f0, lbl_8051A678@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8024096C
	fsubs    f1, f1, f0

lbl_8024096C:
	stfs     f1, 0x1b0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240974
 * Size:	00012C
 */
void PlayCamera::updateVibration(int)
{
	/*
	stwu     r1, -0x20(r1)
	slwi     r6, r4, 2
	add      r7, r3, r6
	lfs      f0, lbl_8051A678@sda21(r2)
	lwz      r5, sys@sda21(r13)
	addi     r8, r7, 0x218
	lfs      f2, 0x1f4(r7)
	lfs      f1, 0x54(r5)
	lfs      f3, 0x20c(r7)
	fmuls    f1, f2, f1
	lfs      f4, lbl_8051A66C@sda21(r2)
	fadds    f1, f3, f1
	stfs     f1, 0x20c(r7)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x218(r7)
	lfs      f1, 0x54(r5)
	fadds    f1, f2, f1
	stfs     f1, 0x218(r7)
	lfs      f1, 0x20c(r7)
	fcmpo    cr0, f1, f0
	ble      lbl_802409D0
	fsubs    f0, f1, f0
	stfs     f0, 0x20c(r7)

lbl_802409D0:
	add      r5, r3, r6
	lfs      f1, 0(r8)
	lfs      f0, 0x224(r5)
	fcmpo    cr0, f1, f0
	ble      lbl_80240A18
	fsubs    f2, f1, f0
	lfs      f1, lbl_8051A698@sda21(r2)
	lfs      f0, lbl_8051A664@sda21(r2)
	fdivs    f1, f2, f1
	fsubs    f4, f4, f1
	fcmpo    cr0, f4, f0
	bge      lbl_80240A18
	add      r4, r3, r4
	li       r0, 0
	stb      r0, 0x1f0(r4)
	fmr      f4, f0
	stfs     f0, 0x20c(r7)
	stfs     f0, 0(r8)

lbl_80240A18:
	add      r4, r3, r6
	lfs      f3, 0x20c(r7)
	lfs      f1, 0x230(r4)
	lfs      f0, lbl_8051A664@sda21(r2)
	fmuls    f1, f4, f1
	lfs      f2, 0x23c(r4)
	fcmpo    cr0, f3, f0
	fmuls    f1, f2, f1
	bge      lbl_80240A68
	lfs      f0, lbl_8051A69C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80240A8C

lbl_80240A68:
	lfs      f0, lbl_8051A6A0@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80240A8C:
	fmuls    f0, f1, f0
	add      r3, r3, r6
	stfs     f0, 0x200(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240AA0
 * Size:	000074
 */
void PlayCamera::otherVibFinished(int)
{
	/*
	lbz      r0, 0x1f0(r3)
	li       r5, 0
	lfs      f1, lbl_8051A670@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_80240AC8
	cmpw     r5, r4
	beq      lbl_80240AC8
	lfs      f0, 0x218(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x218(r3)

lbl_80240AC8:
	lbz      r0, 0x1f1(r3)
	li       r5, 1
	cmplwi   r0, 0
	beq      lbl_80240AEC
	cmpw     r5, r4
	beq      lbl_80240AEC
	lfs      f0, 0x21c(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x21c(r3)

lbl_80240AEC:
	lbz      r0, 0x1f2(r3)
	li       r5, 2
	cmplwi   r0, 0
	beqlr
	cmpw     r5, r4
	beqlr
	lfs      f0, 0x220(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x220(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240B14
 * Size:	000174
 */
void PlayCamera::isModCameraFinished(void)
{
	/*
	lwz      r0, 0x19c(r3)
	cmpwi    r0, 1
	bne      lbl_80240C80
	lfs      f3, 0x1b4(r3)
	lfs      f4, 0x1b0(r3)
	fcmpo    cr0, f3, f4
	cror     2, 1, 2
	bne      lbl_80240B50
	fsubs    f2, f3, f4
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f0, f2
	bge      lbl_80240B68
	fsubs    f3, f3, f1
	b        lbl_80240B68

lbl_80240B50:
	fsubs    f2, f4, f3
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f0, f2
	bge      lbl_80240B68
	fadds    f3, f3, f1

lbl_80240B68:
	fsubs    f1, f3, f4
	lfs      f0, lbl_8051A664@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80240B7C
	b        lbl_80240B80

lbl_80240B7C:
	fneg     f1, f1

lbl_80240B80:
	lfs      f0, lbl_8051A68C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f2, 0x1ac(r3)
	lfs      f1, 0x1a8(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240BA8
	b        lbl_80240BAC

lbl_80240BA8:
	fneg     f1, f1

lbl_80240BAC:
	lfs      f0, lbl_8051A680@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f2, 0x1bc(r3)
	lfs      f1, 0x1b8(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240BD4
	b        lbl_80240BD8

lbl_80240BD4:
	fneg     f1, f1

lbl_80240BD8:
	lfs      f0, lbl_8051A68C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f2, 0x1c0(r3)
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240C00
	b        lbl_80240C04

lbl_80240C00:
	fneg     f1, f1

lbl_80240C04:
	lfs      f0, lbl_8051A66C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f1, 0x1e8(r3)
	lfs      f0, 0x184(r3)
	lfs      f3, 0x1e4(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0x180(r3)
	lfs      f1, 0x1ec(r3)
	lfs      f0, 0x188(r3)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A664@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240C60
	ble      lbl_80240C64
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80240C64

lbl_80240C60:
	fmr      f1, f0

lbl_80240C64:
	lfs      f0, lbl_8051A6A4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	li       r0, 0
	stw      r0, 0x19c(r3)
	li       r3, 1
	blr

lbl_80240C80:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240C88
 * Size:	000158
 */
void PlayCamera::setCollisionCameraTargetPhi(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm.  r0, r4, 0, 0x1a, 0x1a
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80240CBC
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x7cc(r4)
	lfs      f2, 0x7a4(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	stfs     f1, 0x1bc(r31)
	b        lbl_80240DCC

lbl_80240CBC:
	lwz      r0, 0x1a4(r31)
	cmpwi    r0, 0
	bne      lbl_80240DCC
	lbz      r0, 0x249(r31)
	cmplwi   r0, 0
	beq      lbl_80240D98
	lwz      r0, 0x1a0(r31)
	cmpwi    r0, 1
	beq      lbl_80240D10
	bge      lbl_80240CF0
	cmpwi    r0, 0
	bge      lbl_80240CFC
	b        lbl_80240D38

lbl_80240CF0:
	cmpwi    r0, 3
	bge      lbl_80240D38
	b        lbl_80240D24

lbl_80240CFC:
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x4c(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	b        lbl_80240D4C

lbl_80240D10:
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x18c(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	b        lbl_80240D4C

lbl_80240D24:
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x2cc(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	b        lbl_80240D4C

lbl_80240D38:
	lwz      r4, 0x24c(r31)
	mr       r3, r31
	lfs      f1, 0x7cc(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff

lbl_80240D4C:
	lfs      f2, 0x1bc(r31)
	lwz      r3, 0x24c(r31)
	fsubs    f4, f2, f1
	lfs      f0, lbl_8051A664@sda21(r2)
	lfs      f3, 0x844(r3)
	fcmpo    cr0, f4, f0
	ble      lbl_80240D6C
	b        lbl_80240D70

lbl_80240D6C:
	fneg     f4, f4

lbl_80240D70:
	fcmpo    cr0, f4, f3
	bge      lbl_80240D7C
	b        lbl_80240D90

lbl_80240D7C:
	fcmpo    cr0, f2, f1
	bge      lbl_80240D8C
	fadds    f1, f2, f3
	b        lbl_80240D90

lbl_80240D8C:
	fsubs    f1, f2, f3

lbl_80240D90:
	stfs     f1, 0x1bc(r31)
	b        lbl_80240DCC

lbl_80240D98:
	lfs      f2, 0x1b8(r31)
	lfs      f1, 0x1bc(r31)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240DB4
	b        lbl_80240DB8

lbl_80240DB4:
	fneg     f1, f1

lbl_80240DB8:
	lfs      f0, lbl_8051A68C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240DCC
	li       r0, 1
	stb      r0, 0x249(r31)

lbl_80240DCC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240DE0
 * Size:	000384
 */
void PlayCamera::getCollisionCameraTargetPhi(float, float)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stfd     f20, 0xa0(r1)
	psq_st   f20, 168(r1), 0, qr0
	stfd     f19, 0x90(r1)
	psq_st   f19, 152(r1), 0, qr0
	stfd     f18, 0x80(r1)
	psq_st   f18, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	lfs      f0, lbl_8051A6A8@sda21(r2)
	mr       r31, r3
	lfs      f3, lbl_8051A67C@sda21(r2)
	fdivs    f19, f2, f0
	lfs      f5, 0x1b4(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fmr      f4, f5
	fcmpo    cr0, f5, f0
	fmuls    f18, f1, f3
	bge      lbl_80240E94
	fneg     f4, f5

lbl_80240E94:
	lfs      f2, lbl_8051A6A0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A664@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	addi     r4, r3, 4
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f22, r4, r0
	bge      lbl_80240EEC
	lfs      f0, lbl_8051A69C@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f26, f0
	b        lbl_80240F04

lbl_80240EEC:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f26, r3, r0

lbl_80240F04:
	lfs      f0, lbl_8051A664@sda21(r2)
	fcmpo    cr0, f18, f0
	bge      lbl_80240F3C
	lfs      f0, lbl_8051A69C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f18, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f24, f0
	b        lbl_80240F60

lbl_80240F3C:
	lfs      f0, lbl_8051A6A0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f18, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f24, r3, r0

lbl_80240F60:
	lfs      f0, lbl_8051A664@sda21(r2)
	fmr      f1, f18
	fcmpo    cr0, f18, f0
	bge      lbl_80240F74
	fneg     f1, f18

lbl_80240F74:
	lfs      f0, lbl_8051A6A0@sda21(r2)
	li       r29, 1
	lfd      f27, lbl_8051A6B8@sda21(r2)
	lis      r30, 0x4330
	fmuls    f0, f1, f0
	lfs      f28, lbl_8051A6AC@sda21(r2)
	lfs      f29, lbl_8051A6B0@sda21(r2)
	lfs      f30, lbl_8051A664@sda21(r2)
	fctiwz   f0, f0
	lfs      f31, lbl_8051A66C@sda21(r2)
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f23, r4, r0

lbl_80240FAC:
	xoris    r6, r29, 0x8000
	lwz      r3, 0x24c(r31)
	stw      r6, 0x64(r1)
	li       r0, 1
	lfs      f3, 0x1ec(r31)
	li       r5, 0
	stw      r30, 0x60(r1)
	addi     r4, r1, 8
	lfs      f2, 0x1e8(r31)
	lfd      f1, 0x60(r1)
	lfs      f0, 0x1e4(r31)
	fsubs    f1, f1, f27
	lfs      f4, 0x86c(r3)
	stw      r6, 0x5c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f21, f19, f1
	stw      r30, 0x58(r1)
	stb      r0, 0x14(r1)
	fmuls    f6, f21, f23
	lfd      f5, 0x58(r1)
	fmuls    f1, f21, f24
	stw      r5, 0x1c(r1)
	fsubs    f5, f5, f27
	fmadds   f3, f22, f6, f3
	fadds    f25, f2, f1
	stfs     f28, 0x20(r1)
	fmadds   f0, f26, f6, f0
	stfs     f29, 0x24(r1)
	fmuls    f20, f5, f4
	stw      r5, 0x18(r1)
	stfs     f30, 0x28(r1)
	stfs     f31, 0x2c(r1)
	stfs     f30, 0x30(r1)
	stb      r5, 0x15(r1)
	stfs     f0, 8(r1)
	stfs     f25, 0xc(r1)
	stfs     f3, 0x10(r1)
	stb      r5, 0x14(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80241094
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80241094
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	beq      lbl_80241084
	lfs      f0, 0x20(r1)
	fadds    f20, f20, f0
	b        lbl_8024109C

lbl_80241084:
	lwz      r3, 0x24c(r31)
	lfs      f0, 0x894(r3)
	fadds    f20, f25, f0
	b        lbl_8024109C

lbl_80241094:
	lfs      f0, 0x24(r1)
	fadds    f20, f20, f0

lbl_8024109C:
	fcmpo    cr0, f20, f25
	ble      lbl_802410C8
	lfs      f0, 0x1e8(r31)
	lis      r3, atanTable___5JMath@ha
	fmr      f2, f21
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f20, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fcmpo    cr0, f1, f18
	ble      lbl_802410C8
	fmr      f18, f1

lbl_802410C8:
	addi     r29, r29, 1
	cmpwi    r29, 0xf
	ble      lbl_80240FAC
	fmr      f1, f18
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	psq_l    f20, 168(r1), 0, qr0
	lfd      f20, 0xa0(r1)
	psq_l    f19, 152(r1), 0, qr0
	lfd      f19, 0x90(r1)
	psq_l    f18, 136(r1), 0, qr0
	lfd      f18, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0x164(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241164
 * Size:	0000D0
 */
PlayCamera::~PlayCamera(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_80241218
	lis      r4, __vt__Q24Game10PlayCamera@ha
	addi     r0, r4, __vt__Q24Game10PlayCamera@l
	stw      r0, 0(r31)
	beq      lbl_80241208
	lis      r4, __vt__12LookAtCamera@ha
	addi     r0, r4, __vt__12LookAtCamera@l
	stw      r0, 0(r31)
	beq      lbl_80241208
	lis      r4, __vt__6Camera@ha
	addi     r0, r4, __vt__6Camera@l
	stw      r0, 0(r31)
	beq      lbl_80241208
	lis      r4, __vt__11CullFrustum@ha
	addi     r0, r4, __vt__11CullFrustum@l
	stw      r0, 0(r31)
	beq      lbl_80241208
	lis      r4, __vt__9CullPlane@ha
	addi     r0, r4, __vt__9CullPlane@l
	stw      r0, 0(r31)
	beq      lbl_80241208
	lis      r4, "__vt__22ArrayContainer<5Plane>"@ha
	addi     r0, r4, "__vt__22ArrayContainer<5Plane>"@l
	stw      r0, 0(r31)
	beq      lbl_80241208
	lis      r4, "__vt__17Container<5Plane>"@ha
	addi     r0, r4, "__vt__17Container<5Plane>"@l
	stw      r0, 0(r31)
	beq      lbl_80241208
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r31)
	bl       __dt__5CNodeFv

lbl_80241208:
	extsh.   r0, r30
	ble      lbl_80241218
	mr       r3, r31
	bl       __dl__FPv

lbl_80241218:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80241234
 * Size:	000004
 */
void PlayCamera::startVibration(int) { }

/*
 * --INFO--
 * Address:	80241238
 * Size:	00001C
 */
void PlayCamera::getLookAtPosition_(void)
{
	/*
	lfs      f0, 0x180(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x184(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x188(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80241254
 * Size:	000028
 */
void __sinit_playCamera_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C1958@ha
	stw      r0, lbl_80515CF0@sda21(r13)
	stfsu    f0, lbl_804C1958@l(r3)
	stfs     f0, lbl_80515CF4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
