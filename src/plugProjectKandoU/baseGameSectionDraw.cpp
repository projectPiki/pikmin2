#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_baseGameSectionDraw_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483D28
    lbl_80483D28:
        .asciz "drct-post"
        .skip 2
    .global lbl_80483D34
    lbl_80483D34:
        .asciz "part-draw"
        .skip 2
    .global lbl_80483D40
    lbl_80483D40:
        .asciz "draw_calc"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1590
    lbl_804C1590:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804C159C
    lbl_804C159C:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte newdraw_drawAll__Q24Game15BaseGameSectionFP8Viewport
    .global "__vt__46Delegate1<Q24Game15BaseGameSection,P8Viewport>"
    "__vt__46Delegate1<Q24Game15BaseGameSection,P8Viewport>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__46Delegate1<Q24Game15BaseGameSection,P8Viewport>FP8Viewport" .global
   "__vt__22IDelegate1<P8Viewport>"
    "__vt__22IDelegate1<P8Viewport>":
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515CB0
    lbl_80515CB0:
        .skip 0x4
    .global lbl_80515CB4
    lbl_80515CB4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A520
    lbl_8051A520:
        .4byte 0x6A647261
        .4byte 0x77000000
    .global lbl_8051A528
    lbl_8051A528:
        .4byte 0x64697265
        .4byte 0x63740000
    .global lbl_8051A530
    lbl_8051A530:
        .4byte 0x6A33642D
        .4byte 0x65746300
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void BaseGameSection::newdraw_draw3D(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void BaseGameSection::newdraw_drawPreShadow(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000220
 */
void BaseGameSection::newdraw_drawPostShadow(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void BaseGameSection::newdraw_drawParticle(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802398D8
 * Size:	0001F4
 */
void BaseGameSection::newdraw_draw3D_all(Graphics&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, "__vt__22IDelegate1<P8Viewport>"@ha
	lis      r5, lbl_804C159C@ha
	stw      r0, 0x34(r1)
	addi     r7, r5, lbl_804C159C@l
	addi     r9, r6, "__vt__22IDelegate1<P8Viewport>"@l
	lis      r8, "__vt__46Delegate1<Q24Game15BaseGameSection,P8Viewport>"@ha
	stw      r31, 0x2c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	stw      r29, 0x24(r1)
	lwz      r6, 0(r7)
	lwz      r5, 4(r7)
	lwz      r0, 8(r7)
	addi     r7, r8, "__vt__46Delegate1<Q24Game15BaseGameSection,P8Viewport>"@l
	stw      r9, 8(r1)
	stw      r7, 8(r1)
	stw      r30, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0x18(r1)
	bl       "mapViewport__8GraphicsFP22IDelegate1<P8Viewport>"
	lwz      r3, 0x12c(r30)
	bl       frameInitAll__Q23Sys11DrawBuffersFv
	lwz      r3, 0x130(r30)
	bl       frameInitAll__Q23Sys11DrawBuffersFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8023996C
	cmpwi    r0, 3
	bne      lbl_80239970

lbl_8023996C:
	li       r3, 1

lbl_80239970:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80239988
	lwz      r4, 0x154(r30)
	lwz      r3, particleMgr@sda21(r13)
	lwz      r4, 0x20(r4)
	bl       setXfb__11ParticleMgrFPC7ResTIMG

lbl_80239988:
	lwz      r6, sys@sda21(r13)
	lis      r3, lbl_80483D34@ha
	addi     r4, r3, lbl_80483D34@l
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	lwz      r12, 0x114(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 0x114(r12)
	mtctr    r12
	bctrl
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_80483D34@ha
	addi     r4, r3, lbl_80483D34@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	lwz      r6, sys@sda21(r13)
	lis      r3, lbl_80483D28@ha
	addi     r4, r3, lbl_80483D28@l
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x128(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	bl       getViewport__8GraphicsFi
	or.      r29, r3, r3
	beq      lbl_80239A50
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80239A50
	stw      r29, 0x25c(r31)
	mr       r3, r30
	mr       r4, r31
	mr       r5, r29
	bl       directDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport

lbl_80239A50:
	lwz      r3, 0x128(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 1
	bl       getViewport__8GraphicsFi
	or.      r29, r3, r3
	beq      lbl_80239A9C
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80239A9C
	stw      r29, 0x25c(r31)
	mr       r3, r30
	mr       r4, r31
	mr       r5, r29
	bl       directDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport

lbl_80239A9C:
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_80483D28@ha
	addi     r4, r3, lbl_80483D28@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80239ACC
 * Size:	000360
 */
void BaseGameSection::newdraw_drawAll(Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80483D40@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r5, lbl_80483D40@l
	li       r5, 1
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r5, sys@sda21(r13)
	mr       r3, r29
	lhz      r4, 0x18(r30)
	lwz      r31, 0x24(r5)
	bl       doSetView__Q24Game15BaseGameSectionFi
	mr       r3, r30
	li       r4, 1
	bl       setJ3DViewMtx__8ViewportFb
	bl       setViewCalcModeImm__Q28SysShape5ModelFv
	mr       r3, r29
	bl       doViewCalc__Q24Game15BaseGameSectionFv
	mr       r3, r30
	bl       setViewport__8ViewportFv
	mr       r3, r30
	bl       setProjection__8ViewportFv
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_80483D40@ha
	addi     r4, r3, lbl_80483D40@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       drawInit__6J3DSysFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051A520@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x12c(r29)
	li       r4, 6
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x12c(r29)
	li       r4, 2
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x12c(r29)
	li       r4, 9
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x12c(r29)
	li       r4, 3
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x12c(r29)
	li       r4, 0
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	mr       r3, r29
	mr       r4, r30
	bl       doSimpleDraw__Q24Game15BaseGameSectionFP8Viewport
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x130(r29)
	li       r4, 3
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x130(r29)
	li       r4, 0
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r3, 0x2344(r3)
	bl       off__6FogMgrFR8Graphics
	lwz      r3, 0x12c(r29)
	li       r4, 1
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x130(r29)
	li       r4, 1
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r3, 0x2344(r3)
	bl       set__6FogMgrFR8Graphics
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051A520@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	mr       r3, r31
	addi     r4, r2, lbl_8051A528@sda21
	bl       setToken__8GraphicsFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051A528@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       drawInit__6J3DSysFv
	mr       r3, r29
	mr       r4, r31
	mr       r5, r30
	bl       directDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051A528@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	lhz      r5, 0x18(r30)
	bl       draw__Q24Game9ShadowMgrFR8Graphicsi
	mr       r3, r30
	bl       setViewport__8ViewportFv
	mr       r3, r30
	bl       setProjection__8ViewportFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051A530@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x12c(r29)
	li       r4, 7
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x130(r29)
	li       r4, 7
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r0, 0x168(r29)
	cmplwi   r0, 0
	bne      lbl_80239D44
	lbz      r0, 0x164(r29)
	clrlwi.  r0, r0, 0x1e
	bne      lbl_80239D44
	lwz      r3, 0x154(r29)
	li       r6, 4
	lwz      r4, 0x15c(r29)
	li       r7, 1
	lwz      r5, 0x160(r29)
	li       r8, 0
	bl       capture__10JUTTextureFii9_GXTexFmtbUc

lbl_80239D44:
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r3, 0x2344(r3)
	bl       off__6FogMgrFR8Graphics
	lwz      r3, 0x12c(r29)
	li       r4, 8
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x130(r29)
	li       r4, 8
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	mr       r3, r30
	li       r4, 1
	bl       setJ3DViewMtx__8ViewportFb
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r3, 0x2344(r3)
	bl       off__6FogMgrFR8Graphics
	lwz      r3, 0x12c(r29)
	li       r4, 4
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x130(r29)
	li       r4, 4
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x128(r29)
	mr       r4, r31
	lwz      r3, 0x2344(r3)
	bl       set__6FogMgrFR8Graphics
	mr       r3, r30
	li       r4, 1
	bl       setJ3DViewMtx__8ViewportFb
	lwz      r3, 0x130(r29)
	li       r4, 2
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	mr       r3, r30
	li       r4, 0
	bl       setJ3DViewMtx__8ViewportFb
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051A530@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80239E2C
 * Size:	000030
 */
void Delegate1<Game::BaseGameSection, Viewport*>::invoke(Viewport*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	addi     r12, r5, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80239E5C
 * Size:	000028
 */
void __sinit_baseGameSectionDraw_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C1590@ha
	stw      r0, lbl_80515CB0@sda21(r13)
	stfsu    f0, lbl_804C1590@l(r3)
	stfs     f0, lbl_80515CB4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
