#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_JSTObjectCamera_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC110
    lbl_804EC110:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game5P2JST12ObjectCamera
    __vt__Q34Game5P2JST12ObjectCamera:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game5P2JST12ObjectCameraFv
        .4byte JSGFGetType__Q26JStage7TCameraCFv
        .4byte JSGGetName__Q34Game5P2JST12ObjectCameraCFv
        .4byte JSGUpdate__Q26JStage7TObjectFv
        .4byte JSGGetFlag__Q34Game5P2JST12ObjectCameraCFv
        .4byte JSGSetFlag__Q34Game5P2JST12ObjectCameraFUl
        .4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
        .4byte JSGSetData__Q34Game5P2JST12ObjectCameraFUlPCvUl
        .4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
        .4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
        .4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
        .4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
        .4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
        .4byte JSGGetProjectionType__Q26JStage7TCameraCFv
        .4byte
   JSGSetProjectionType__Q26JStage7TCameraFQ26JStage18TECameraProjection .4byte
   JSGGetProjectionNear__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionNear__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionFar__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionFar__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionFovy__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionFovy__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionAspect__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetProjectionAspect__Q34Game5P2JST12ObjectCameraFf .4byte
   JSGGetProjectionField__Q26JStage7TCameraCFPf .4byte
   JSGSetProjectionField__Q26JStage7TCameraFPCf .4byte
   JSGGetViewType__Q26JStage7TCameraCFv .4byte
   JSGSetViewType__Q26JStage7TCameraFQ26JStage12TECameraView .4byte
   JSGGetViewPosition__Q34Game5P2JST12ObjectCameraCFP3Vec .4byte
   JSGSetViewPosition__Q34Game5P2JST12ObjectCameraFRC3Vec .4byte
   JSGGetViewUpVector__Q26JStage7TCameraCFP3Vec .4byte
   JSGSetViewUpVector__Q26JStage7TCameraFRC3Vec .4byte
   JSGGetViewTargetPosition__Q34Game5P2JST12ObjectCameraCFP3Vec .4byte
   JSGSetViewTargetPosition__Q34Game5P2JST12ObjectCameraFRC3Vec .4byte
   JSGGetViewRoll__Q34Game5P2JST12ObjectCameraCFv .4byte
   JSGSetViewRoll__Q34Game5P2JST12ObjectCameraFf .4byte 0 .4byte 0 .4byte
   "@4@reset__Q34Game5P2JST12ObjectCameraFv" .4byte
   "@4@update__Q34Game5P2JST12ObjectCameraFv" .4byte
   "@4@start__Q34Game5P2JST12ObjectCameraFv" .4byte
   "@4@stop__Q34Game5P2JST12ObjectCameraFv" .4byte
   parseUserData___Q34Game5P2JST10ObjectBaseFUlPCv .4byte
   updateCamera__Q34Game5P2JST12ObjectCameraFv .4byte
   setProjection__Q34Game5P2JST12ObjectCameraFv .4byte
   setView__Q34Game5P2JST12ObjectCameraFv .4byte
   isRunning__Q34Game5P2JST12ObjectCameraFv .4byte
   reset__Q34Game5P2JST12ObjectCameraFv .4byte
   update__Q34Game5P2JST12ObjectCameraFv .4byte
   start__Q34Game5P2JST12ObjectCameraFv .4byte
   stop__Q34Game5P2JST12ObjectCameraFv .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805161E0
    lbl_805161E0:
        .skip 0x4
    .global lbl_805161E4
    lbl_805161E4:
        .skip 0x4
    .global sFovBackup__Q24Game5P2JST
    sFovBackup__Q24Game5P2JST:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520698
    lbl_80520698:
        .4byte 0x42340000
        .4byte 0x00000000
    .global lbl_805206A0
    lbl_805206A0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805206A8
    lbl_805206A8:
        .4byte 0x00000000
    .global lbl_805206AC
    lbl_805206AC:
        .float 1.0
    .global lbl_805206B0
    lbl_805206B0:
        .4byte 0x3C8EFA35
    .global lbl_805206B4
    lbl_805206B4:
        .4byte 0x43480000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8042F6E4
 * Size:	0000F0
 */
P2JST::ObjectCamera::ObjectCamera(char const*, Game::MoviePlayer*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, __vt__Q26JStage7TObject@ha
	li       r10, 0
	stw      r0, 0x14(r1)
	addi     r0, r6, __vt__Q26JStage7TObject@l
	lis      r6, __vt__Q34Game5P2JST10ObjectBase@ha
	li       r9, -1
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__Q26JStage7TCamera@ha
	lfs      f0, lbl_805161E4@sda21(r13)
	stw      r0, 0(r31)
	addi     r0, r3, __vt__Q26JStage7TCamera@l
	lis      r3, __vt__Q34Game5P2JST12ObjectCamera@ha
	mr       r7, r31
	stw      r0, 0(r31)
	addi     r8, r3, __vt__Q34Game5P2JST12ObjectCamera@l
	addi     r0, r6, __vt__Q34Game5P2JST10ObjectBase@l
	lis      r3, lbl_804EC110@ha
	stw      r0, 4(r31)
	addi     r6, r3, lbl_804EC110@l
	addi     r7, r8, 0x94
	lwz      r0, 8(r6)
	stw      r5, 8(r31)
	li       r3, 0x144
	lwz      r5, 0(r6)
	stw      r4, 0xc(r31)
	lwz      r4, 4(r6)
	stw      r10, 0x10(r31)
	stw      r9, 0x14(r31)
	stw      r10, 0x18(r31)
	stw      r10, 0x1c(r31)
	stw      r8, 0(r31)
	stw      r7, 4(r31)
	stw      r5, 0x90(r31)
	stw      r4, 0x94(r31)
	stw      r0, 0x98(r31)
	stw      r5, 0x9c(r31)
	stw      r4, 0xa0(r31)
	stw      r0, 0xa4(r31)
	stfs     f0, 0xa8(r31)
	stfs     f0, 0xac(r31)
	stfs     f0, 0xb0(r31)
	stfs     f0, 0xb4(r31)
	stfs     f0, 0xb8(r31)
	stw      r10, 0xbc(r31)
	stb      r10, 0xc4(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042F7B8
	bl       __ct__6CameraFv
	mr       r0, r3

lbl_8042F7B8:
	stw      r0, 0xc0(r31)
	mr       r3, r31
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F7D4
 * Size:	000068
 */
P2JST::ObjectCamera::~ObjectCamera(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8042F820
	lis      r5, __vt__Q34Game5P2JST12ObjectCamera@ha
	li       r4, 0
	addi     r5, r5, __vt__Q34Game5P2JST12ObjectCamera@l
	stw      r5, 0(r30)
	addi     r0, r5, 0x94
	stw      r0, 4(r30)
	bl       __dt__Q26JStage7TCameraFv
	extsh.   r0, r31
	ble      lbl_8042F820
	mr       r3, r30
	bl       __dl__FPv

lbl_8042F820:
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
 * Address:	8042F83C
 * Size:	0000A8
 */
void P2JST::ObjectCamera::reset(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_804EC110@ha
	lfs      f1, lbl_805161E4@sda21(r13)
	stw      r0, 0x24(r1)
	lfs      f0, lbl_80520698@sda21(r2)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r4, lbl_804EC110@l
	lfs      f4, 0(r3)
	lfs      f3, 4(r3)
	stfs     f4, 0x90(r30)
	lfs      f2, 8(r3)
	stfs     f3, 0x94(r30)
	stfs     f2, 0x98(r30)
	stfs     f4, 0x9c(r30)
	stfs     f3, 0xa0(r30)
	stfs     f2, 0xa4(r30)
	stfs     f1, 0xa8(r30)
	stfs     f1, 0xac(r30)
	stfs     f1, 0xb0(r30)
	stfs     f0, 0xb4(r30)
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	divw     r0, r3, r31
	lfd      f1, lbl_805206A0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xb8(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F8E4
 * Size:	000004
 */
void P2JST::ObjectCamera::update(void) { }

/*
 * --INFO--
 * Address:	8042F8E8
 * Size:	000024
 */
void P2JST::ObjectCamera::setProjection(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xbc(r3)
	bl       setProjection__6CameraFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F90C
 * Size:	00007C
 */
void P2JST::ObjectCamera::setView(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lfs      f1, lbl_805206A8@sda21(r2)
	stw      r0, 0x84(r1)
	addi     r5, r1, 8
	lfs      f0, lbl_805206AC@sda21(r2)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	addi     r3, r1, 0x44
	stfs     f1, 8(r1)
	addi     r4, r31, 0x90
	addi     r6, r31, 0x9c
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	bl       C_MTXLookAt
	lfs      f0, 0xa8(r31)
	addi     r3, r1, 0x14
	lfs      f1, lbl_805206B0@sda21(r2)
	li       r4, 0x7a
	fneg     f0, f0
	fmuls    f1, f1, f0
	bl       PSMTXRotRad
	addi     r3, r1, 0x14
	addi     r4, r1, 0x44
	addi     r5, r31, 0x60
	bl       PSMTXConcat
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F988
 * Size:	00006C
 */
void P2JST::ObjectCamera::updateCamera(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xbc(r31)
	addi     r0, r31, 0x60
	stw      r0, 0x30(r3)
	lfs      f0, sFovBackup__Q24Game5P2JST@sda21(r13)
	lwz      r3, 0xbc(r31)
	stfs     f0, 0x28(r3)
	lfs      f0, 0xb4(r31)
	stfs     f0, sFovBackup__Q24Game5P2JST@sda21(r13)
	lfs      f1, 0xb0(r31)
	lwz      r3, 0xbc(r31)
	lfs      f0, 0xac(r31)
	stfs     f0, 0x70(r3)
	stfs     f1, 0x74(r3)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F9F4
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGGetName() const
{
	/*
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F9FC
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGSetFlag(unsigned long a1)
{
	// Generated from stw r4, 0x10(r3)
	_10 = a1;
}

/*
 * --INFO--
 * Address:	8042FA04
 * Size:	000008
 */
u32 P2JST::ObjectCamera::JSGGetFlag() const
{
	/*
	lwz      r3, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA0C
 * Size:	000010
 */
void P2JST::ObjectCamera::JSGSetData(unsigned long, void const*, unsigned long)
{
	/*
	stw      r4, 0x14(r3)
	stw      r5, 0x18(r3)
	stw      r6, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA1C
 * Size:	00001C
 */
void P2JST::ObjectCamera::JSGSetViewPosition(Vec const&)
{
	/*
	lfs      f0, 0(r4)
	lfs      f1, 4(r4)
	stfs     f0, 0x90(r3)
	lfs      f0, 8(r4)
	stfs     f1, 0x94(r3)
	stfs     f0, 0x98(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA38
 * Size:	00001C
 */
void P2JST::ObjectCamera::JSGGetViewPosition(const(Vec*))
{
	/*
	lfs      f0, 0x90(r3)
	lfs      f1, 0x94(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x98(r3)
	stfs     f1, 4(r4)
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA54
 * Size:	00001C
 */
void P2JST::ObjectCamera::JSGSetViewTargetPosition(Vec const&)
{
	/*
	lfs      f0, 0(r4)
	lfs      f1, 4(r4)
	stfs     f0, 0x9c(r3)
	lfs      f0, 8(r4)
	stfs     f1, 0xa0(r3)
	stfs     f0, 0xa4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA70
 * Size:	00001C
 */
void P2JST::ObjectCamera::JSGGetViewTargetPosition(const(Vec*))
{
	/*
	lfs      f0, 0x9c(r3)
	lfs      f1, 0xa0(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0xa4(r3)
	stfs     f1, 4(r4)
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA8C
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGSetViewRoll(float)
{
	/*
	stfs     f1, 0xa8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA94
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGGetViewRoll() const
{
	/*
	lfs      f1, 0xa8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FA9C
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGSetProjectionNear(float)
{
	/*
	stfs     f1, 0xac(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAA4
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGGetProjectionNear() const
{
	/*
	lfs      f1, 0xac(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAAC
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGSetProjectionFar(float)
{
	/*
	stfs     f1, 0xb0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAB4
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGGetProjectionFar() const
{
	/*
	lfs      f1, 0xb0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FABC
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGSetProjectionFovy(float)
{
	/*
	stfs     f1, 0xb4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FAC4
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGGetProjectionFovy() const
{
	/*
	lfs      f1, 0xb4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FACC
 * Size:	000064
 */
void P2JST::ObjectCamera::JSGSetProjectionAspect(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	divw     r0, r3, r31
	lfd      f1, lbl_805206A0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xb8(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FB30
 * Size:	000008
 */
void P2JST::ObjectCamera::JSGGetProjectionAspect() const
{
	/*
	lfs      f1, 0xb8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000168
 */
void P2JST::ObjectCamera::setParms(Camera*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042FB38
 * Size:	0001A0
 */
void P2JST::ObjectCamera::setCamera(Camera*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	addi     r3, r30, 0x60
	bl       PSMTXIdentity
	stw      r31, 0xbc(r30)
	addi     r3, r1, 0x14
	lwz      r4, 0xbc(r30)
	stw      r30, 0x140(r4)
	lwz      r4, 0xbc(r30)
	lwz      r12, 0(r4)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	mr       r3, r30
	lfs      f1, 0x18(r1)
	addi     r4, r1, 8
	lfs      f2, 0x1c(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xbc(r30)
	addi     r3, r1, 0x20
	bl       getViewVector__11CullFrustumFv
	lfs      f3, 0x20(r1)
	mr       r3, r30
	lfs      f0, lbl_805206B4@sda21(r2)
	addi     r4, r1, 8
	lfs      f4, 0x24(r1)
	lfs      f5, 0x28(r1)
	fmuls    f3, f3, f0
	lfs      f2, 8(r1)
	fmuls    f4, f4, f0
	lfs      f1, 0xc(r1)
	fmuls    f5, f5, f0
	lfs      f0, 0x10(r1)
	fadds    f2, f2, f3
	fadds    f1, f1, f4
	fadds    f0, f0, f5
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, lbl_805206A8@sda21(r2)
	lwz      r12, 0(r30)
	lwz      r12, 0x90(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xbc(r30)
	bl       getNear__6CameraFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xbc(r30)
	bl       getFar__6CameraFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r4, 0xbc(r30)
	lwz      r12, 0(r30)
	lfs      f1, 0x28(r4)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r4, 0xbc(r30)
	lwz      r12, 0(r30)
	lfs      f1, 0x2c(r4)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xbc(r30)
	lfs      f0, 0x28(r3)
	stfs     f0, sFovBackup__Q24Game5P2JST@sda21(r13)
	lwz      r3, 0xc0(r30)
	lwz      r4, 0xbc(r30)
	bl       copyFrom__6CameraFP6Camera
	lwz      r3, 0xbc(r30)
	addi     r0, r30, 0x60
	stw      r0, 0x30(r3)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FCD8
 * Size:	000038
 */
void P2JST::ObjectCamera::start(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xbc(r3)
	bl       update__6CameraFv
	li       r0, 1
	stb      r0, 0xc4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FD10
 * Size:	000050
 */
void P2JST::ObjectCamera::stop(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xbc(r3)
	cmplwi   r3, 0
	beq      lbl_8042FD44
	lwz      r4, 0xc0(r31)
	bl       copyFrom__6CameraFP6Camera
	lwz      r3, 0xbc(r31)
	li       r0, 0
	stw      r0, 0x140(r3)

lbl_8042FD44:
	li       r0, 0
	stb      r0, 0xc4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8042FD60
 * Size:	000028
 */
void __sinit_JSTObjectCamera_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EC110@ha
	stw      r0, lbl_805161E0@sda21(r13)
	stfsu    f0, lbl_804EC110@l(r3)
	stfs     f0, lbl_805161E4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FD88
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectCamera::stop(void)
{
	/*
	addi     r3, r3, -4
	b        stop__Q34Game5P2JST12ObjectCameraFv
	*/
}

/*
 * --INFO--
 * Address:	8042FD90
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectCamera::start(void)
{
	/*
	addi     r3, r3, -4
	b        start__Q34Game5P2JST12ObjectCameraFv
	*/
}

/*
 * --INFO--
 * Address:	8042FD98
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectCamera::update(void)
{
	/*
	addi     r3, r3, -4
	b        update__Q34Game5P2JST12ObjectCameraFv
	*/
}

/*
 * --INFO--
 * Address:	8042FDA0
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectCamera::reset(void)
{
	/*
	addi     r3, r3, -4
	b        reset__Q34Game5P2JST12ObjectCameraFv
	*/
}
