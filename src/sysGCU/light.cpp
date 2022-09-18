#include "Light.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_light_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499EF8
    lbl_80499EF8:
        .4byte 0x83418393
        .4byte 0x83728347
        .4byte 0x83938367
        .4byte 0x83898343
        .4byte 0x83670000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBE88
    lbl_804EBE88:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__8LightMgr
    __vt__8LightMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__8LightMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8LightMgrFv
        .4byte set__8LightMgrFR8Graphics
        .4byte set__8LightMgrFR7Matrixf
        .4byte drawDebugInfo__8LightMgrFR8Graphics
    .global __vt__8LightObj
    __vt__8LightObj:
        .4byte 0
        .4byte 0
        .4byte __dt__8LightObjFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8LightObjFv
        .4byte set__8LightObjFR7Matrixf
        .4byte drawPos__8LightObjFR8Graphics
        .4byte drawPos__8LightObjFR8GraphicsR7Matrixf
        .4byte drawPos__8LightObjFR8GraphicsR6Camera

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805161B8
    lbl_805161B8:
        .skip 0x4
    .global lbl_805161BC
    lbl_805161BC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805205A8
    lbl_805205A8:
        .4byte 0x00000000
    .global lbl_805205AC
    lbl_805205AC:
        .4byte 0x447A0000
    .global lbl_805205B0
    lbl_805205B0:
        .4byte 0xBF800000
    .global lbl_805205B4
    lbl_805205B4:
        .float 1.0
    .global lbl_805205B8
    lbl_805205B8:
        .4byte 0x42700000
    .global lbl_805205BC
    lbl_805205BC:
        .4byte 0x41800000
    .global lbl_805205C0
    lbl_805205C0:
        .4byte 0x41F00000
    .global lbl_805205C4
    lbl_805205C4:
        .4byte 0x437F0000
    .global lbl_805205C8
    lbl_805205C8:
        .float 0.5
        .4byte 0x00000000
    .global lbl_805205D0
    lbl_805205D0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_805205D8
    lbl_805205D8:
        .4byte 0x41200000
    .global lbl_805205DC
    lbl_805205DC:
        .4byte 0x83898343
        .4byte 0x83670000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8042B46C
 * Size:	0000C4
 */
LightObj::LightObj(char*, _GXLightID, ELightTypeFlag, JUtility::TColor)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	mr       r30, r6
	mr       r31, r7
	bl       __ct__5CNodeFv
	lis      r3, __vt__8LightObj@ha
	lfs      f6, lbl_805205A8@sda21(r2)
	addi     r0, r3, __vt__8LightObj@l
	lfs      f5, lbl_805205AC@sda21(r2)
	stw      r0, 0(r27)
	li       r5, 1
	lfs      f4, lbl_805205B0@sda21(r2)
	li       r4, 3
	stb      r29, 0x18(r27)
	li       r0, 0
	lwz      r6, 0(r31)
	mr       r3, r27
	stb      r30, 0x19(r27)
	lfs      f3, lbl_805205B4@sda21(r2)
	stfs     f6, 0x1c(r27)
	lfs      f2, lbl_805205B8@sda21(r2)
	stfs     f5, 0x20(r27)
	lfs      f1, lbl_805205BC@sda21(r2)
	stfs     f6, 0x24(r27)
	lfs      f0, lbl_805205C0@sda21(r2)
	stfs     f6, 0x28(r27)
	stfs     f4, 0x2c(r27)
	stfs     f6, 0x30(r27)
	stw      r6, 0x34(r27)
	stfs     f3, 0x38(r27)
	stfs     f5, 0x3c(r27)
	stfs     f3, 0x40(r27)
	stfs     f2, 0x44(r27)
	stb      r5, 0x48(r27)
	stb      r4, 0x49(r27)
	stfs     f1, 0x4c(r27)
	stfs     f0, 0x50(r27)
	stb      r0, 0x54(r27)
	stw      r28, 0x14(r27)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042B530
 * Size:	0002DC
 */
void LightObj::set(Matrixf&)
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	li       r5, -1
	lfd      f3, lbl_805205D0@sda21(r2)
	stw      r0, 0x144(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_805205C4@sda21(r2)
	stw      r31, 0x13c(r1)
	mr       r31, r4
	stw      r30, 0x138(r1)
	mr       r30, r3
	lbz      r3, 0x34(r3)
	stw      r0, 0xf0(r1)
	lfs      f1, 0x38(r30)
	stw      r3, 0xf4(r1)
	lfd      f2, 0xf0(r1)
	stw      r5, 0xc(r1)
	fsubs    f2, f2, f3
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8042B588
	fmr      f1, f0

lbl_8042B588:
	lbz      r3, 0x35(r30)
	lis      r0, 0x4330
	fctiwz   f3, f1
	stw      r0, 0x100(r1)
	lfd      f2, lbl_805205D0@sda21(r2)
	stw      r3, 0x104(r1)
	lfs      f1, 0x38(r30)
	lfd      f0, 0x100(r1)
	stfd     f3, 0xf8(r1)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805205C4@sda21(r2)
	lwz      r0, 0xfc(r1)
	fmuls    f1, f2, f1
	stb      r0, 0xc(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8042B5CC
	fmr      f1, f0

lbl_8042B5CC:
	lbz      r3, 0x36(r30)
	lis      r0, 0x4330
	fctiwz   f3, f1
	stw      r0, 0x110(r1)
	lfd      f2, lbl_805205D0@sda21(r2)
	stw      r3, 0x114(r1)
	lfs      f1, 0x38(r30)
	lfd      f0, 0x110(r1)
	stfd     f3, 0x108(r1)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805205C4@sda21(r2)
	lwz      r0, 0x10c(r1)
	fmuls    f1, f2, f1
	stb      r0, 0xd(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8042B610
	fmr      f1, f0

lbl_8042B610:
	lbz      r3, 0x37(r30)
	lis      r0, 0x4330
	fctiwz   f3, f1
	stw      r0, 0x120(r1)
	lfd      f2, lbl_805205D0@sda21(r2)
	stw      r3, 0x124(r1)
	lfs      f1, 0x38(r30)
	lfd      f0, 0x120(r1)
	stfd     f3, 0x118(r1)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805205C4@sda21(r2)
	lwz      r0, 0x11c(r1)
	fmuls    f1, f2, f1
	stb      r0, 0xe(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8042B654
	fmr      f1, f0

lbl_8042B654:
	fctiwz   f0, f1
	addi     r3, r1, 0xac
	addi     r4, r1, 8
	stfd     f0, 0x128(r1)
	lwz      r0, 0x12c(r1)
	stb      r0, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       GXInitLightColor
	lbz      r0, 0x19(r30)
	cmpwi    r0, 3
	beq      lbl_8042B7E8
	bge      lbl_8042B698
	cmpwi    r0, 1
	beq      lbl_8042B6A4
	bge      lbl_8042B6D8
	b        lbl_8042B7E8

lbl_8042B698:
	cmpwi    r0, 5
	bge      lbl_8042B7E8
	b        lbl_8042B778

lbl_8042B6A4:
	mr       r3, r31
	addi     r4, r30, 0x1c
	addi     r5, r1, 0x34
	bl       PSMTXMultVec
	lfs      f1, 0x34(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x38(r1)
	lfs      f3, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitLightPos
	b        lbl_8042B7E8

lbl_8042B6D8:
	mr       r3, r31
	addi     r4, r30, 0x1c
	addi     r5, r1, 0x28
	bl       PSMTXMultVec
	lfs      f1, 0x28(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x2c(r1)
	lfs      f3, 0x30(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitLightPos
	mr       r3, r31
	addi     r4, r1, 0x7c
	bl       PSMTXInverse
	addi     r3, r1, 0x7c
	addi     r4, r1, 0x4c
	bl       PSMTXTranspose
	addi     r3, r1, 0x4c
	addi     r4, r30, 0x28
	addi     r5, r1, 0x1c
	bl       PSMTXMultVec
	lfs      f1, 0x1c(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x20(r1)
	lfs      f3, 0x24(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitLightDir
	lfs      f1, 0x44(r30)
	addi     r3, r1, 0xac
	lbz      r4, 0x49(r30)
	bl       GXInitLightSpot
	lfs      f1, 0x3c(r30)
	addi     r3, r1, 0xac
	lfs      f2, 0x40(r30)
	lbz      r4, 0x48(r30)
	bl       GXInitLightDistAttn
	b        lbl_8042B7E8

lbl_8042B778:
	mr       r3, r31
	addi     r4, r1, 0x7c
	bl       PSMTXInverse
	addi     r3, r1, 0x7c
	addi     r4, r1, 0x4c
	bl       PSMTXTranspose
	addi     r3, r1, 0x4c
	addi     r4, r30, 0x28
	addi     r5, r1, 0x10
	bl       PSMTXMultVec
	lfs      f1, 0x10(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x14(r1)
	lfs      f3, 0x18(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitSpecularDir
	lfs      f2, 0x4c(r30)
	addi     r3, r1, 0xac
	lfs      f0, lbl_805205C8@sda21(r2)
	lfs      f1, lbl_805205A8@sda21(r2)
	fmuls    f4, f2, f0
	lfs      f3, lbl_805205B4@sda21(r2)
	fmr      f2, f1
	fmr      f5, f1
	fsubs    f6, f3, f4
	bl       GXInitLightAttn

lbl_8042B7E8:
	lbz      r4, 0x18(r30)
	addi     r3, r1, 0xac
	bl       GXLoadLightObjImm
	lwz      r0, 0x144(r1)
	lwz      r31, 0x13c(r1)
	lwz      r30, 0x138(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042B80C
 * Size:	00005C
 */
void LightObj::drawPos(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x25c(r4)
	li       r4, 0
	bl       getMatrix__8ViewportFb
	lwz      r12, 0(r30)
	mr       r5, r3
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
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
 * Address:	8042B868
 * Size:	00007C
 */
void LightObj::drawPos(Graphics&, Camera&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r31
	bl       setProjection__6CameraFv
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	mr       r5, r3
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
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
 * Address:	8042B8E4
 * Size:	0001A8
 */
void LightObj::drawPos(Graphics&, Matrixf&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lbz      r0, 0x54(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042BA74
	mr       r3, r31
	mr       r4, r5
	bl       initPrimDraw__8GraphicsFP7Matrixf
	addi     r3, r1, 0x14
	addi     r4, r30, 0x1c
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lbz      r5, 0x37(r30)
	lbz      r4, 0x36(r30)
	lbz      r3, 0x35(r30)
	lbz      r0, 0x34(r30)
	stb      r0, 0x84(r31)
	stb      r3, 0x85(r31)
	stb      r4, 0x86(r31)
	stb      r5, 0x87(r31)
	lbz      r0, 0x19(r30)
	cmpwi    r0, 3
	beq      lbl_8042BA74
	bge      lbl_8042B964
	cmpwi    r0, 1
	beq      lbl_8042BA4C
	bge      lbl_8042B9D8
	b        lbl_8042BA74

lbl_8042B964:
	cmpwi    r0, 5
	bge      lbl_8042BA74
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	lfs      f0, 0x50(r30)
	addi     r4, r30, 0x1c
	lfs      f4, 0x28(r30)
	addi     r5, r1, 8
	fmuls    f3, f1, f0
	lfs      f5, 0x2c(r30)
	lfs      f6, 0x30(r30)
	lfs      f2, 0x24(r30)
	fmuls    f6, f6, f3
	lfs      f1, 0x20(r30)
	fmuls    f5, f5, f3
	lfs      f0, 0x1c(r30)
	fmuls    f4, f4, f3
	fadds    f2, f2, f6
	fadds    f1, f1, f5
	fadds    f0, f0, f4
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	bl       "drawLine__8GraphicsFR10Vector3<f>R10Vector3<f>"
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       drawSphere__8GraphicsFfP7Matrixf
	b        lbl_8042BA74

lbl_8042B9D8:
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       drawSphere__8GraphicsFfP7Matrixf
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	lfs      f0, 0x50(r30)
	addi     r4, r30, 0x1c
	lfs      f3, 0x28(r30)
	addi     r5, r1, 8
	fmuls    f1, f1, f0
	lfs      f4, 0x2c(r30)
	lfs      f5, 0x30(r30)
	li       r6, 0x10
	lfs      f2, 0x24(r30)
	fmuls    f5, f5, f1
	fmuls    f3, f3, f1
	lfs      f0, 0x1c(r30)
	fmuls    f4, f4, f1
	lfs      f1, 0x20(r30)
	fadds    f2, f2, f5
	fadds    f0, f0, f3
	fadds    f1, f1, f4
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x44(r30)
	bl       "drawCone__8GraphicsFR10Vector3<f>R10Vector3<f>fi"
	b        lbl_8042BA74

lbl_8042BA4C:
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       drawSphere__8GraphicsFfP7Matrixf
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	lfs      f0, 0x50(r30)
	addi     r4, r1, 0x14
	fmuls    f1, f1, f0
	bl       drawSphere__8GraphicsFfP7Matrixf

lbl_8042BA74:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BA8C
 * Size:	0000D8
 */
LightMgr::LightMgr(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__5CNode@ha
	lis      r7, __vt__8LightMgr@ha
	stw      r0, 0x14(r1)
	addi     r11, r5, __vt__5CNode@l
	lis      r6, lbl_80499EF8@ha
	li       r10, 0
	stw      r31, 0xc(r1)
	addi     r8, r6, lbl_80499EF8@l
	mr       r31, r3
	addi     r9, r7, __vt__8LightMgr@l
	stw      r11, 0(r3)
	lis      r5, __vt__15AmbientLightObj@ha
	addi     r7, r5, __vt__15AmbientLightObj@l
	li       r6, 0x80
	stw      r10, 0x10(r3)
	li       r5, 0xff
	addi     r0, r2, lbl_805205DC@sda21
	addi     r12, r31, 0x18
	stw      r10, 0xc(r3)
	stw      r10, 8(r3)
	stw      r10, 4(r3)
	stw      r4, 0x14(r3)
	mr       r4, r12
	stw      r9, 0(r3)
	stw      r11, 0x18(r3)
	stw      r10, 0x28(r3)
	stw      r10, 0x24(r3)
	stw      r10, 0x20(r3)
	stw      r10, 0x1c(r3)
	stw      r8, 0x2c(r3)
	stw      r7, 0x18(r3)
	stb      r6, 0x30(r3)
	stb      r6, 0x31(r3)
	stb      r6, 0x32(r3)
	stb      r5, 0x33(r3)
	stw      r11, 0x34(r3)
	stw      r10, 0x44(r3)
	stw      r10, 0x40(r3)
	stw      r10, 0x3c(r3)
	stw      r10, 0x38(r3)
	stw      r0, 0x48(r3)
	stw      r10, 0x4c(r3)
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	addi     r4, r31, 0x34
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BB64
 * Size:	00003C
 */
void LightMgr::registLightObj(LightObj*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x34
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x4c(r31)
	addi     r0, r3, 1
	stw      r0, 0x4c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BBA0
 * Size:	000050
 */
void LightMgr::set(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x25c(r4)
	li       r4, 1
	bl       getMatrix__8ViewportFb
	lwz      r12, 0(r31)
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0x18(r12)
	mr       r4, r0
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
 * Address:	8042BBF0
 * Size:	000094
 */
void LightMgr::set(Matrixf&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r1, 0xc
	lbz      r7, 0x30(r3)
	lbz      r6, 0x31(r3)
	li       r3, 4
	lbz      r5, 0x32(r31)
	lbz      r0, 0x33(r31)
	stb      r7, 8(r1)
	stb      r6, 9(r1)
	stb      r5, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanAmbColor
	lwz      r31, 0x44(r31)
	b        lbl_8042BC64

lbl_8042BC48:
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8042BC64:
	cmplwi   r31, 0
	bne      lbl_8042BC48
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BC84
 * Size:	00005C
 */
void LightMgr::drawDebugInfo(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0x44(r3)
	b        lbl_8042BCC0

lbl_8042BCA4:
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_8042BCC0:
	cmplwi   r31, 0
	bne      lbl_8042BCA4
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
 * Address:	8042BCE0
 * Size:	000004
 */
void LightMgr::update() { }

/*
 * --INFO--
 * Address:	8042BCE4
 * Size:	000028
 */
void __sinit_light_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EBE88@ha
	stw      r0, lbl_805161B8@sda21(r13)
	stfsu    f0, lbl_804EBE88@l(r3)
	stfs     f0, lbl_805161BC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
