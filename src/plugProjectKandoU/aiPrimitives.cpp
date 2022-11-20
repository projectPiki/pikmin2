#include "types.h"
#include "JSystem/JUT/JUTException.h"
#include "Vector3.h"
#include "PikiAI.h"
#include "Game/pelletMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/pathfinder.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_aiPrimitives_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F070
    lbl_8047F070:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x61695072
        .4byte 0x696D6974
        .4byte 0x69766573
        .4byte 0x00000000
        .4byte 0x41707072
        .4byte 0x6F616368
        .4byte 0x506F7341
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
    .global lbl_8047F0A4
    lbl_8047F0A4:
        .4byte 0x61695072
        .4byte 0x696D6974
        .4byte 0x69766573
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8047F0B8
    lbl_8047F0B8:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x476F746F
        .4byte 0x536C6F74
        .4byte 0x41726700
        .4byte 0x50617468
        .4byte 0x4D6F7665
        .4byte 0x41726700
        .4byte 0x7A616E6E
        .4byte 0x656E2021
        .4byte 0x0A000000
        .4byte 0x73746172
        .4byte 0x743D3D30
        .4byte 0x00000000
        .4byte 0x6E657767
        .4byte 0x6F616C20
        .4byte 0x3D3D2030
        .4byte 0x00000000
        .4byte 0x25642D3E
        .4byte 0x25642D3E
        .4byte 0x2E2E2E2D
        .4byte 0x3E256400
        .4byte 0x6E6F2068
        .4byte 0x616E646C
        .4byte 0x65202564
        .4byte 0x0A000000
        .4byte 0x6D617820
        .4byte 0x69732030
        .4byte 0x205B2573
        .4byte 0x5D0A0000
        .4byte 0x53746963
        .4byte 0x6B417474
        .4byte 0x61636B41
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
        .4byte 0x47617468
        .4byte 0x65724163
        .4byte 0x74696F6E
        .4byte 0x41726700

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B4AA8
    lbl_804B4AA8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804B4AB4
    lbl_804B4AB4:
        .4byte lbl_8019C100
        .4byte lbl_8019C42C
        .4byte lbl_8019C338
        .4byte lbl_8019C520
        .4byte lbl_8019C244
        .4byte lbl_8019C614
        .4byte lbl_8019C694
        .4byte lbl_8019C100
    .global __vt__Q26PikiAI20ActFollowVectorField
    __vt__Q26PikiAI20ActFollowVectorField:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI20ActFollowVectorFieldFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI20ActFollowVectorFieldFv
        .4byte cleanup__Q26PikiAI20ActFollowVectorFieldFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .global __vt__Q26PikiAI9ActGather
    __vt__Q26PikiAI9ActGather:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI9ActGatherFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI9ActGatherFv
        .4byte cleanup__Q26PikiAI9ActGatherFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .global __vt__Q26PikiAI8ActClimb
    __vt__Q26PikiAI8ActClimb:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI8ActClimbFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI8ActClimbFv
        .4byte cleanup__Q26PikiAI8ActClimbFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .global __vt__Q23efx10PikiDamage
    __vt__Q23efx10PikiDamage:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx11TPkAttackDP
    __vt__Q23efx11TPkAttackDP:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q26PikiAI14ActStickAttack
    __vt__Q26PikiAI14ActStickAttack:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI14ActStickAttackFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI14ActStickAttackFv
        .4byte cleanup__Q26PikiAI14ActStickAttackFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent .4byte 0 .4byte
   0 .4byte "@36@4@onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent"
    .global __vt__Q26PikiAI11ActPathMove
    __vt__Q26PikiAI11ActPathMove:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI11ActPathMoveFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI11ActPathMoveFv
        .4byte cleanup__Q26PikiAI11ActPathMoveFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .global __vt__Q26PikiAI11ActGotoSlot
    __vt__Q26PikiAI11ActGotoSlot:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI11ActGotoSlotFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI11ActGotoSlotFv
        .4byte cleanup__Q26PikiAI11ActGotoSlotFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI11ActGotoSlotFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .global __vt__Q26PikiAI14ActApproachPos
    __vt__Q26PikiAI14ActApproachPos:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI14ActApproachPosFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI14ActApproachPosFv
        .4byte cleanup__Q26PikiAI14ActApproachPosFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .global __vt__Q26PikiAI10ActGotoPos
    __vt__Q26PikiAI10ActGotoPos:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI10ActGotoPosFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI10ActGotoPosFv
        .4byte cleanup__Q26PikiAI10ActGotoPosFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805159E0
    lbl_805159E0:
        .skip 0x4
    .global lbl_805159E4
    lbl_805159E4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518F60
    lbl_80518F60:
        .4byte 0x00000000
    .global lbl_80518F64
    lbl_80518F64:
        .float 1.0
    .global lbl_80518F68
    lbl_80518F68:
        .4byte 0x41A00000
    .global lbl_80518F6C
    lbl_80518F6C:
        .4byte 0xBF000000
    .global lbl_80518F70
    lbl_80518F70:
        .4byte 0x40C00000
    .global lbl_80518F74
    lbl_80518F74:
        .4byte 0x3C23D70A
    .global lbl_80518F78
    lbl_80518F78:
        .float 0.5
    .global lbl_80518F7C
    lbl_80518F7C:
        .4byte 0x3EA0D97C
    .global lbl_80518F80
    lbl_80518F80:
        .4byte 0x41200000
    .global lbl_80518F84
    lbl_80518F84:
        .4byte 0x3E4CCCCD
    .global lbl_80518F88
    lbl_80518F88:
        .4byte 0x40400000
    .global lbl_80518F8C
    lbl_80518F8C:
        .4byte 0x42200000
    .global lbl_80518F90
    lbl_80518F90:
        .float -1.0
    .global lbl_80518F94
    lbl_80518F94:
        .4byte 0x40490FDB
    .global lbl_80518F98
    lbl_80518F98:
        .4byte 0x447FE000
    .global lbl_80518F9C
    lbl_80518F9C:
        .4byte 0x3FC90FDB
    .global lbl_80518FA0
    lbl_80518FA0:
        .4byte 0x42C80000
        .4byte 0x00000000
    .global lbl_80518FA8
    lbl_80518FA8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518FB0
    lbl_80518FB0:
        .4byte 0x2E2E2E00
    .global lbl_80518FB4
    lbl_80518FB4:
        .4byte 0x43200000
    .global lbl_80518FB8
    lbl_80518FB8:
        .4byte 0x40C90FDB
    .global lbl_80518FBC
    lbl_80518FBC:
        .4byte 0x43A2F983
    .global lbl_80518FC0
    lbl_80518FC0:
        .4byte 0xC3A2F983
    .global lbl_80518FC4
    lbl_80518FC4:
        .4byte 0x442F0000
    .global lbl_80518FC8
    lbl_80518FC8:
        .4byte 0x42480000
    .global lbl_80518FCC
    lbl_80518FCC:
        .float 0.3
    .global lbl_80518FD0
    lbl_80518FD0:
        .4byte 0x40000000
    .global lbl_80518FD4
    lbl_80518FD4:
        .4byte 0x43020000
    .global lbl_80518FD8
    lbl_80518FD8:
        .4byte 0x47000000
    .global lbl_80518FDC
    lbl_80518FDC:
        .4byte 0x40A00000
    .global lbl_80518FE0
    lbl_80518FE0:
        .4byte 0x3F19999A
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	801972DC
 * Size:	00003C
 */
PikiAI::ActGotoPos::ActGotoPos(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r4, __vt__Q26PikiAI10ActGotoPos@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q26PikiAI10ActGotoPos@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80197318
 * Size:	000078
 */
void PikiAI::ActGotoPos::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x1e
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r7, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0x1e
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lfs      f0, 4(r31)
	stfs     f0, 0x10(r30)
	lfs      f0, 8(r31)
	stfs     f0, 0x14(r30)
	lfs      f0, 0xc(r31)
	stfs     f0, 0x18(r30)
	lfs      f0, 0x10(r31)
	stfs     f0, 0xc(r30)
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
 * Address:	80197390
 * Size:	00011C
 */
void PikiAI::ActGotoPos::exec(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x14(r31)
	lfs      f2, 0xc(r1)
	lfs      f1, 0x10(r31)
	lfs      f0, 8(r1)
	fsubs    f4, f3, f2
	lfs      f3, 0x18(r31)
	fsubs    f2, f1, f0
	lfs      f0, 0x10(r1)
	fmuls    f5, f4, f4
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f3, f3, f0
	stfs     f4, 0x18(r1)
	fmuls    f0, f2, f2
	stfs     f2, 0x14(r1)
	fmuls    f4, f3, f3
	stfs     f3, 0x1c(r1)
	fadds    f0, f0, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80197428
	fmadds   f0, f2, f2, f5
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8019742C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8019742C

lbl_80197428:
	fmr      f4, f1

lbl_8019742C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_80197468
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_8019746C

lbl_80197468:
	fmr      f4, f0

lbl_8019746C:
	lfs      f0, 0xc(r31)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_80197484
	li       r3, 0
	b        lbl_80197498

lbl_80197484:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x14
	lfs      f1, lbl_80518F64@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1

lbl_80197498:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801974AC
 * Size:	000004
 */
void PikiAI::ActGotoPos::cleanup(void) { }

/*
 * --INFO--
 * Address:	801974B0
 * Size:	00003C
 */
PikiAI::ActApproachPos::ActApproachPos(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r4, __vt__Q26PikiAI14ActApproachPos@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q26PikiAI14ActApproachPos@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801974EC
 * Size:	000104
 */
void PikiAI::ActApproachPos::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	lis      r4, lbl_8047F070@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_8047F070@l
	beq      lbl_80197550
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x1c
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_80197550
	li       r30, 1

lbl_80197550:
	clrlwi.  r0, r30, 0x18
	bne      lbl_8019756C
	addi     r3, r31, 0x34
	addi     r5, r31, 0x48
	li       r4, 0x1a8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019756C:
	lwz      r3, 4(r28)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r29)
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f1, 0x10(r28)
	lfs      f1, 8(r29)
	stfs     f1, 0x14(r28)
	lfs      f1, 0xc(r29)
	stfs     f1, 0x18(r28)
	lfs      f1, 0x10(r29)
	stfs     f1, 0xc(r28)
	lbz      r0, 0x18(r29)
	stb      r0, 0x24(r28)
	lbz      r0, 0x19(r29)
	stb      r0, 0x25(r28)
	lfs      f1, 0x14(r29)
	stfs     f1, 0x1c(r28)
	stfs     f0, 0x20(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801975F0
 * Size:	000328
 */
void PikiAI::ActApproachPos::exec(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x18(r31)
	lfs      f2, 0x10(r1)
	lfs      f1, 0x10(r31)
	lfs      f0, 8(r1)
	fsubs    f4, f3, f2
	lfs      f3, 0x14(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0xc(r1)
	fmuls    f5, f4, f4
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f1, f3, f1
	stfs     f4, 0x1c(r1)
	fmuls    f3, f2, f2
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	fadds    f1, f3, f5
	fcmpo    cr0, f1, f0
	ble      lbl_80197694
	fmadds   f30, f2, f2, f5
	fcmpo    cr0, f30, f0
	ble      lbl_80197698
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_80197698

lbl_80197694:
	fmr      f30, f0

lbl_80197698:
	lfs      f29, 0x18(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	fmuls    f4, f29, f29
	fadds    f0, f3, f4
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801976D0
	fmadds   f0, f2, f2, f4
	fadds    f3, f5, f0
	fcmpo    cr0, f3, f1
	ble      lbl_801976D4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_801976D4

lbl_801976D0:
	fmr      f3, f1

lbl_801976D4:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019770C
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8019770C:
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x14(r1)
	lfs      f2, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	fmr      f31, f1
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lfs      f2, 0x1c(r31)
	fmr      f31, f1
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80197788
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x20(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x20(r31)
	lfs      f1, 0x20(r31)
	lfs      f0, 0x1c(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80197788
	li       r3, 0
	b        lbl_801978EC

lbl_80197788:
	lbz      r0, 0x25(r31)
	cmplwi   r0, 0
	beq      lbl_801977B0
	fabs     f1, f29
	lfs      f0, lbl_80518F68@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801977B0
	li       r3, 2
	b        lbl_801978EC

lbl_801977B0:
	lfs      f1, 0xc(r31)
	fcmpo    cr0, f30, f1
	bge      lbl_801977EC
	lwz      r3, 4(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	fmr      f2, f30
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518F6C@sda21(r2)
	addi     r4, r1, 0x14
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>f"
	b        lbl_801978E8

lbl_801977EC:
	lfs      f0, lbl_80518F70@sda21(r2)
	fadds    f0, f0, f1
	fcmpo    cr0, f30, f0
	ble      lbl_80197868
	lwz      r3, 4(r31)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_80197854
	lfs      f1, lbl_80518F74@sda21(r2)
	lfs      f0, lbl_80518F64@sda21(r2)
	fmuls    f1, f1, f30
	fcmpo    cr0, f1, f0
	ble      lbl_80197838
	fmr      f1, f0

lbl_80197838:
	lfs      f0, lbl_80518F78@sda21(r2)
	addi     r4, r1, 0x14
	lwz      r3, 4(r31)
	fmuls    f1, f1, f0
	fadds    f1, f0, f1
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	b        lbl_801978E8

lbl_80197854:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x14
	lfs      f1, lbl_80518F78@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	b        lbl_801978E8

lbl_80197868:
	lwz      r3, 4(r31)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r4, r4, "zero__10Vector3<f>"@l
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	fabs     f1, f31
	lfs      f0, lbl_80518F7C@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801978CC
	lbz      r0, 0x25(r31)
	cmplwi   r0, 0
	beq      lbl_801978C4
	lfs      f1, 0x18(r1)
	lfs      f0, lbl_80518F80@sda21(r2)
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801978C4
	li       r3, 1
	b        lbl_801978EC

lbl_801978C4:
	li       r3, 0
	b        lbl_801978EC

lbl_801978CC:
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518F84@sda21(r2)
	lfs      f0, 0x1fc(r3)
	fmadds   f1, f1, f31, f0
	bl       roundAng__Ff
	lwz      r3, 4(r31)
	stfs     f1, 0x1fc(r3)

lbl_801978E8:
	li       r3, 1

lbl_801978EC:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80197918
 * Size:	000034
 */
void PikiAI::ActApproachPos::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
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
 * Address:	8019794C
 * Size:	00003C
 */
PikiAI::ActGotoSlot::ActGotoSlot(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r4, __vt__Q26PikiAI11ActGotoSlot@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q26PikiAI11ActGotoSlot@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80197988
 * Size:	00018C
 */
void PikiAI::ActGotoSlot::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	or.      r29, r4, r4
	lis      r4, lbl_8047F070@ha
	stw      r28, 0x20(r1)
	mr       r28, r3
	addi     r31, r4, lbl_8047F070@l
	beq      lbl_801979EC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x60
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801979EC
	li       r30, 1

lbl_801979EC:
	clrlwi.  r0, r30, 0x18
	bne      lbl_80197A08
	addi     r3, r31, 0x34
	addi     r5, r31, 0x48
	li       r4, 0x211
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80197A08:
	lwz      r3, 4(r28)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r29)
	stw      r0, 0xc(r28)
	lbz      r0, 8(r29)
	cmplwi   r0, 1
	bne      lbl_80197A90
	lwz      r4, 4(r28)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0xc(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r28)
	b        lbl_80197AA8

lbl_80197A90:
	lwz      r3, 0xc(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x174(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r28)

lbl_80197AA8:
	lwz      r3, 0xc(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80197AE4
	lwz      r3, 0xc(r28)
	bl       getTotalPikmins__Q24Game6PelletFv
	cmpwi    r3, 0
	bne      lbl_80197AE4
	li       r3, 0
	li       r0, 1
	sth      r3, 0x10(r28)
	stb      r0, 0x1d(r28)

lbl_80197AE4:
	mr       r3, r28
	bl       resetTimers__Q26PikiAI11ActGotoSlotFv
	li       r0, 0
	stb      r0, 0x1c(r28)
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
 * Address:	80197B14
 * Size:	000018
 */
void wallCallback__Q26PikiAI11ActGotoSlotFR10Vector3f(void)
{
	/*
	lbz      r4, 0x1c(r3)
	cmplwi   r4, 0x64
	bgelr
	addi     r0, r4, 1
	stb      r0, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80197B2C
 * Size:	000014
 */
void PikiAI::ActGotoSlot::resetTimers(void)
{
	/*
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r3)
	stfs     f0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80197B40
 * Size:	000A94
 */
void PikiAI::ActGotoSlot::exec(void)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r31, r3
	lha      r0, 0x10(r3)
	cmpwi    r0, -1
	bne      lbl_80197BA8
	li       r3, 2
	b        lbl_80198580

lbl_80197BA8:
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80197BCC
	li       r3, 2
	b        lbl_80198580

lbl_80197BCC:
	lbz      r0, 0x1d(r31)
	cmplwi   r0, 0
	beq      lbl_80198118
	lwz      r30, 0xc(r31)
	li       r29, 0
	mr       r3, r30
	bl       getTotalPikmins__Q24Game6PelletFv
	cmpwi    r3, 0
	beq      lbl_80197BF4
	li       r29, 1

lbl_80197BF4:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80197C7C
	li       r0, 0
	addi     r3, r1, 0x44
	stb      r0, 0x1d(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	addi     r4, r1, 0xa4
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f2, 0xa4(r1)
	stfs     f1, 0xa8(r1)
	stfs     f0, 0xac(r1)
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	lha      r0, 0x10(r31)
	cmpwi    r0, -1
	bne      lbl_80197C64
	li       r3, 2
	b        lbl_80198580

lbl_80197C64:
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 1
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80197C7C:
	lwz      r3, 0xc(r31)
	addi     r5, r1, 0x98
	lha      r4, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f30, 0x38(r1)
	mr       r3, r30
	lfs      f29, 0x3c(r1)
	lfs      f28, 0x40(r1)
	bl       getPickRadius__Q24Game6PelletFv
	lwz      r4, 4(r31)
	fmr      f31, f1
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	lfs      f27, 0x2c(r1)
	lwz      r12, 0(r3)
	lfs      f26, 0x30(r1)
	lwz      r12, 0x80(r12)
	lfs      f25, 0x34(r1)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80197D18
	lwz      r3, 0xc(r31)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f0, lbl_80518F78@sda21(r2)
	fnmsubs  f29, f0, f1, f29

lbl_80197D18:
	fsubs    f4, f30, f27
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f2, f28, f25
	fsubs    f3, f29, f26
	fmuls    f0, f4, f4
	stfs     f4, 0x8c(r1)
	fmuls    f5, f1, f1
	stfs     f3, 0x90(r1)
	fmuls    f3, f2, f2
	fadds    f0, f0, f5
	stfs     f2, 0x94(r1)
	stfs     f1, 0x90(r1)
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80197D70
	fmadds   f0, f4, f4, f5
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80197D74
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80197D74

lbl_80197D70:
	fmr      f3, f1

lbl_80197D74:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80197DAC
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x8c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x90(r1)
	lfs      f0, 0x94(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x8c(r1)
	stfs     f1, 0x90(r1)
	stfs     f0, 0x94(r1)

lbl_80197DAC:
	lfs      f0, 0x94(r1)
	lfs      f3, 0x8c(r1)
	fmuls    f1, f0, f31
	lfs      f2, 0x90(r1)
	fmuls    f3, f3, f31
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f2, f2, f31
	fsubs    f4, f28, f1
	fsubs    f1, f30, f3
	fsubs    f2, f29, f2
	fsubs    f3, f4, f25
	fsubs    f1, f1, f27
	fsubs    f2, f2, f26
	fmuls    f3, f3, f3
	fmadds   f25, f1, f1, f3
	fcmpo    cr0, f25, f0
	ble      lbl_80197E00
	ble      lbl_80197E04
	frsqrte  f0, f25
	fmuls    f25, f0, f25
	b        lbl_80197E04

lbl_80197E00:
	fmr      f25, f0

lbl_80197E04:
	lfs      f0, lbl_80518F70@sda21(r2)
	fcmpo    cr0, f25, f0
	ble      lbl_80197E58
	lwz      r3, 4(r31)
	addi     r4, r1, 0x8c
	lfs      f1, lbl_80518F64@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lfs      f0, lbl_80518F8C@sda21(r2)
	fcmpo    cr0, f25, f0
	bge      lbl_80198110
	lwz      r3, 0x14(r31)
	addi     r0, r3, 1
	cmpwi    r0, 0x3c
	stw      r0, 0x14(r31)
	blt      lbl_80198110
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 2
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80197E58:
	fabs     f1, f2
	lfs      f0, lbl_80518F68@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801980D4
	mr       r3, r30
	addi     r5, r1, 0x80
	lwz      r12, 0(r30)
	li       r4, 0
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x84(r1)
	lfs      f0, 0x80(r1)
	fsubs    f4, f1, f29
	lfs      f3, 0x88(r1)
	fsubs    f2, f0, f30
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f3, f3, f28
	fmuls    f5, f4, f4
	fmuls    f0, f2, f2
	stfs     f2, 0x80(r1)
	fmuls    f6, f3, f3
	stfs     f4, 0x84(r1)
	fadds    f0, f0, f5
	stfs     f3, 0x88(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80197EE8
	fmadds   f0, f2, f2, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80197EEC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80197EEC

lbl_80197EE8:
	fmr      f3, f1

lbl_80197EEC:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80197F24
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x80(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x84(r1)
	lfs      f0, 0x88(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)

lbl_80197F24:
	lfs      f6, lbl_80518F90@sda21(r2)
	lfs      f0, 0x90(r1)
	lfs      f1, 0x8c(r1)
	fmuls    f4, f0, f6
	lfs      f0, 0x84(r1)
	fmuls    f5, f1, f6
	lfs      f2, 0x94(r1)
	lfs      f7, 0x80(r1)
	fmuls    f1, f0, f4
	fmuls    f3, f2, f6
	lfs      f8, 0x88(r1)
	lfs      f0, lbl_80518F64@sda21(r2)
	fmadds   f1, f7, f5, f1
	stfs     f5, 0x8c(r1)
	fmuls    f2, f7, f3
	stfs     f4, 0x90(r1)
	fmadds   f1, f8, f3, f1
	fmsubs   f2, f8, f5, f2
	stfs     f3, 0x94(r1)
	fcmpo    cr0, f1, f0
	fmr      f3, f1
	cror     2, 1, 2
	bne      lbl_80197F88
	fmr      f3, f0
	b        lbl_80197F98

lbl_80197F88:
	fcmpo    cr0, f1, f6
	cror     2, 0, 2
	bne      lbl_80197F98
	fmr      f3, f6

lbl_80197F98:
	lfs      f1, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8019802C
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 1, 2
	bne      lbl_80197FB8
	b        lbl_801980B8

lbl_80197FB8:
	lfs      f0, lbl_80518F90@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	bne      lbl_80197FD0
	lfs      f1, lbl_80518F94@sda21(r2)
	b        lbl_801980B8

lbl_80197FD0:
	fcmpo    cr0, f3, f1
	bge      lbl_80198004
	fneg     f0, f3
	lfs      f1, lbl_80518F98@sda21(r2)
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fadds    f1, f1, f0
	b        lbl_801980B8

lbl_80198004:
	lfs      f0, lbl_80518F98@sda21(r2)
	fmuls    f1, f0, f3
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fsubs    f1, f0, f1
	b        lbl_801980B8

lbl_8019802C:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 1, 2
	bne      lbl_80198040
	b        lbl_801980B0

lbl_80198040:
	lfs      f0, lbl_80518F90@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	bne      lbl_80198058
	lfs      f1, lbl_80518F94@sda21(r2)
	b        lbl_801980B0

lbl_80198058:
	fcmpo    cr0, f3, f1
	bge      lbl_8019808C
	fneg     f0, f3
	lfs      f1, lbl_80518F98@sda21(r2)
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fadds    f1, f1, f0
	b        lbl_801980B0

lbl_8019808C:
	lfs      f0, lbl_80518F98@sda21(r2)
	fmuls    f1, f0, f3
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fsubs    f1, f0, f1

lbl_801980B0:
	fneg     f1, f1
	bl       roundAng__Ff

lbl_801980B8:
	stfs     f1, 0x3e0(r30)
	lwz      r3, 4(r31)
	lwz      r4, 0xc(r31)
	lha      r5, 0x10(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8Creatures
	li       r3, 0
	b        lbl_80198580

lbl_801980D4:
	lwz      r3, 0x14(r31)
	addi     r0, r3, 1
	cmpwi    r0, 0x3c
	stw      r0, 0x14(r31)
	blt      lbl_80198100
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 2
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80198100:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x8c
	lfs      f1, lbl_80518F84@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"

lbl_80198110:
	li       r3, 1
	b        lbl_80198580

lbl_80198118:
	lwz      r3, 0xc(r31)
	addi     r5, r1, 0x74
	lha      r4, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x20(r1)
	lfs      f3, 0x28(r1)
	lfs      f1, 0x7c(r1)
	lfs      f0, 0x74(r1)
	fsubs    f7, f1, f3
	lfs      f4, 0x24(r1)
	fsubs    f2, f0, f5
	lfs      f1, 0x78(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f6, f1, f4
	fmuls    f9, f2, f2
	stfs     f5, 0x68(r1)
	fmuls    f8, f7, f7
	fabs     f5, f6
	stfs     f4, 0x6c(r1)
	fadds    f1, f9, f8
	stfs     f3, 0x70(r1)
	frsp     f4, f5
	stfs     f2, 0x5c(r1)
	fcmpo    cr0, f1, f0
	stfs     f6, 0x60(r1)
	stfs     f7, 0x64(r1)
	ble      lbl_801981C0
	fmadds   f31, f2, f2, f8
	fcmpo    cr0, f31, f0
	ble      lbl_801981C4
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801981C4

lbl_801981C0:
	fmr      f31, f0

lbl_801981C4:
	lfs      f0, 0x60(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	fmuls    f3, f0, f0
	fadds    f0, f9, f3
	fadds    f0, f8, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801981FC
	fmadds   f0, f2, f2, f3
	fadds    f3, f8, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80198200
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80198200

lbl_801981FC:
	fmr      f3, f1

lbl_80198200:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80198238
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x5c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x60(r1)
	lfs      f0, 0x64(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)

lbl_80198238:
	lfs      f0, lbl_80518FA0@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_801982D8
	lwz      r3, 0x14(r31)
	addi     r0, r3, 1
	cmpwi    r0, 0x3c
	stw      r0, 0x14(r31)
	blt      lbl_801982D8
	lwz      r3, 0xc(r31)
	addi     r4, r1, 0x68
	lha      r29, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019829C
	lwz      r3, 0xc(r31)
	bl       sendClaim__Q24Game6PelletFv

lbl_8019829C:
	lha      r0, 0x10(r31)
	cmpw     r29, r0
	bne      lbl_801982B0
	li       r3, 2
	b        lbl_80198580

lbl_801982B0:
	cmpwi    r0, -1
	bne      lbl_801982C0
	li       r3, 2
	b        lbl_80198580

lbl_801982C0:
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 1
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_801982D8:
	lfs      f0, lbl_80518F70@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_801982FC
	lwz      r3, 4(r31)
	addi     r4, r1, 0x5c
	lfs      f1, lbl_80518F64@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1
	b        lbl_80198580

lbl_801982FC:
	bge      lbl_801983A8
	lfs      f0, lbl_80518F68@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_801983A8
	lwz      r3, 0xc(r31)
	lha      r4, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x168(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80198360
	lwz      r3, 0xc(r31)
	addi     r4, r1, 0x68
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	li       r3, 1
	stw      r0, 0x14(r31)
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80198360:
	lwz      r3, 4(r31)
	lwz      r4, 0xc(r31)
	lha      r5, 0x10(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8Creatures
	lwz      r4, 4(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	li       r3, 0
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	b        lbl_80198580

lbl_801983A8:
	lwz      r4, 0xc(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	lfs      f0, 0x70(r1)
	lfs      f1, 8(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0x68(r1)
	lfs      f2, 0xc(r1)
	fsubs    f3, f1, f0
	lfs      f1, 0x6c(r1)
	fmuls    f5, f4, f4
	fsubs    f2, f2, f1
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f6, f3, f3
	fadds    f1, f6, f5
	fcmpo    cr0, f1, f0
	ble      lbl_80198414
	fmadds   f1, f3, f3, f5
	fcmpo    cr0, f1, f0
	ble      lbl_80198418
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80198418

lbl_80198414:
	fmr      f1, f0

lbl_80198418:
	fcmpo    cr0, f1, f31
	bge      lbl_8019856C
	fmuls    f2, f2, f2
	lfs      f1, lbl_80518F60@sda21(r2)
	fadds    f0, f6, f2
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80198454
	fmadds   f0, f3, f3, f2
	fadds    f2, f5, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80198458
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80198458

lbl_80198454:
	fmr      f2, f1

lbl_80198458:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80198474
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_80198474:
	fneg     f0, f4
	lfs      f1, lbl_80518F60@sda21(r2)
	frsp     f4, f3
	stfs     f3, 0x58(r1)
	fmuls    f3, f1, f1
	frsp     f2, f0
	fmuls    f4, f4, f4
	stfs     f0, 0x50(r1)
	fmuls    f0, f2, f2
	stfs     f1, 0x54(r1)
	fadds    f0, f0, f3
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801984C8
	fmadds   f0, f2, f2, f3
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_801984CC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_801984CC

lbl_801984C8:
	fmr      f3, f1

lbl_801984CC:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80198504
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x50(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)

lbl_80198504:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x50
	lfs      f1, lbl_80518F84@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x18(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x18(r31)
	lfs      f1, 0x18(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80198564
	lwz      r3, 0xc(r31)
	addi     r4, r1, 0x68
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	stfs     f0, 0x18(r31)

lbl_80198564:
	li       r3, 1
	b        lbl_80198580

lbl_8019856C:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x5c
	lfs      f1, lbl_80518F84@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1

lbl_80198580:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	801985D4
 * Size:	000004
 */
void PikiAI::ActGotoSlot::cleanup(void) { }

/*
 * --INFO--
 * Address:	801985D8
 * Size:	00007C
 */
PikiAI::ActPathMove::ActPathMove(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI11ActPathMove@ha
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	addi     r0, r3, __vt__Q26PikiAI11ActPathMove@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r3, r31, 0x74
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r6, 0xc
	li       r7, 4
	bl       __construct_array
	li       r3, 0xa
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80198630
	li       r0, 0
	sth      r0, 8(r3)

lbl_80198630:
	stw      r3, 0xc(r31)
	li       r0, -1
	mr       r3, r31
	sth      r0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80198654
 * Size:	0001BC
 */
void PikiAI::ActPathMove::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lis      r3, lbl_8047F070@ha
	stw      r30, 0x28(r1)
	addi     r30, r3, lbl_8047F070@l
	stw      r29, 0x24(r1)
	li       r29, 0
	stw      r28, 0x20(r1)
	or.      r28, r4, r4
	stb      r29, 0x3d(r31)
	beq      lbl_801986BC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0x6c
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801986BC
	li       r29, 1

lbl_801986BC:
	clrlwi.  r0, r29, 0x18
	bne      lbl_801986D8
	addi     r3, r30, 0x34
	addi     r5, r30, 0x48
	li       r4, 0x316
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801986D8:
	li       r0, 0
	stw      r0, 0x34(r31)
	lwz      r0, 4(r28)
	stw      r0, 0x30(r31)
	lwz      r3, 0x18(r28)
	neg      r0, r3
	andc     r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x3c(r31)
	lbz      r0, 0x3c(r31)
	cmplwi   r0, 0
	beq      lbl_8019872C
	lwz      r3, 0x18(r28)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80518FA8@sda21(r2)
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x38(r31)

lbl_8019872C:
	li       r0, 0
	lfs      f0, lbl_80518F60@sda21(r2)
	stw      r0, 0x20(r31)
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0xb0(r31)
	stfs     f0, 0xb4(r31)
	stfs     f0, 0xb8(r31)
	bl       initPathfinding__Q26PikiAI11ActPathMoveFb
	li       r0, 1
	addi     r3, r1, 8
	stb      r0, 0x6c(r31)
	lwz      r4, 0x30(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x10(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x14(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x18(r31)
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801987F0
	lwz      r3, 0x30(r31)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r4, r4, "zero__10Vector3<f>"@l
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518F60@sda21(r2)
	mr       r3, r29
	stfs     f0, 0x1c8(r29)
	stfs     f0, 0x1cc(r29)
	stfs     f0, 0x1d0(r29)
	bl       getSpeicalSlot__Q24Game6PelletFv
	extsh    r0, r3
	cmpwi    r0, -1
	bne      lbl_801987F0
	lwz      r3, 0x334(r29)
	bl       reset__Q24Game11PelletCarryFv

lbl_801987F0:
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
 * Address:	80198810
 * Size:	0003AC
 */
void PikiAI::ActPathMove::initPathfinding(bool)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	clrlwi.  r0, r4, 0x18
	lis      r4, lbl_8047F070@ha
	stw      r31, 0x7c(r1)
	addi     r31, r4, lbl_8047F070@l
	stw      r30, 0x78(r1)
	mr       r30, r3
	stw      r29, 0x74(r1)
	beq      lbl_80198848
	lwz      r3, 0xc(r30)
	li       r0, 0
	sth      r0, 8(r3)

lbl_80198848:
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801988B0
	lwz      r3, 0x30(r30)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r4, r4, "zero__10Vector3<f>"@l
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518F60@sda21(r2)
	mr       r3, r29
	stfs     f0, 0x1c8(r29)
	stfs     f0, 0x1cc(r29)
	stfs     f0, 0x1d0(r29)
	bl       getSpeicalSlot__Q24Game6PelletFv
	extsh    r0, r3
	cmpwi    r0, -1
	bne      lbl_801988B0
	lwz      r3, 0x334(r29)
	bl       reset__Q24Game11PelletCarryFv

lbl_801988B0:
	lwz      r4, 0x30(r30)
	addi     r3, r1, 0x1c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x1c(r1)
	li       r4, 0
	lfs      f2, 0x20(r1)
	li       r0, -1
	lfs      f1, 0x24(r1)
	stw      r4, 0x60(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r4, 0x5c(r1)
	stb      r4, 0x50(r1)
	sth      r0, 0x58(r1)
	stw      r4, 0x54(r1)
	stfs     f3, 0x44(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	lbz      r0, 0x48(r3)
	lwz      r3, 4(r30)
	cmplwi   r0, 0
	stfs     f3, 0x38(r1)
	lha      r3, 0x18c(r3)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	beq      lbl_80198964
	lfs      f0, lbl_80518F64@sda21(r2)
	stfs     f3, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198958
	lfs      f0, lbl_80518F64@sda21(r2)
	stfs     f0, 0x34(r1)

lbl_80198958:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x28
	bl       findRoomIndex__Q24Game10RoomMapMgrFRQ23Sys6Sphere

lbl_80198964:
	sth      r3, 0x58(r1)
	lwz      r0, 0xc(r30)
	stw      r0, 0x54(r1)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198994
	li       r0, 1
	stb      r0, 0x50(r1)

lbl_80198994:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x44
	li       r29, 0
	lwz      r3, 8(r3)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801989D0
	lwz      r3, 0x5c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_801989C8
	mr       r29, r3
	b        lbl_80198A24

lbl_801989C8:
	lwz      r29, 0x60(r1)
	b        lbl_80198A24

lbl_801989D0:
	li       r0, 0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r0, 0x54(r1)
	addi     r4, r1, 0x44
	lwz      r3, 8(r3)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198A10
	lwz      r3, 0x5c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80198A08
	lwz      r29, 0x60(r1)
	b        lbl_80198A24

lbl_80198A08:
	mr       r29, r3
	b        lbl_80198A24

lbl_80198A10:
	addi     r3, r31, 0x34
	addi     r5, r31, 0x78
	li       r4, 0x39d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80198A24:
	cmplwi   r29, 0
	bne      lbl_80198A40
	addi     r3, r31, 0x34
	addi     r5, r31, 0x84
	li       r4, 0x3a1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80198A40:
	lha      r0, 0x36(r29)
	mr       r3, r30
	sth      r0, 0x1c(r30)
	lha      r0, 0x36(r29)
	sth      r0, 0x54(r30)
	bl       decideGoal__Q26PikiAI11ActPathMoveFv
	or.      r29, r3, r3
	bne      lbl_80198A74
	addi     r3, r31, 0x34
	addi     r5, r31, 0x90
	li       r4, 0x3a9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80198A74:
	cmplwi   r29, 0
	beq      lbl_80198AA4
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198AA4
	lwz      r3, 0x30(r30)
	lhz      r4, 0x22e(r29)
	bl       setCarryColor__Q24Game6PelletFi

lbl_80198AA4:
	lwz      r0, 0x34(r30)
	cmplw    r29, r0
	beq      lbl_80198BA0
	lwz      r5, 0x23c(r29)
	mr       r4, r29
	addi     r3, r1, 0x10
	lha      r0, 0x36(r5)
	sth      r0, 0x56(r30)
	lwz      r12, 0(r29)
	lwz      r12, 0x198(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	stfs     f0, 0x24(r30)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x28(r30)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2c(r30)
	stw      r29, 0x34(r30)
	lwz      r4, 0x20(r30)
	cmplwi   r4, 0
	beq      lbl_80198B04
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_80198B04:
	li       r0, 0
	mr       r3, r30
	sth      r0, 0x1e(r30)
	li       r29, 1
	bl       isAllBlue__Q26PikiAI11ActPathMoveFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198B28
	ori      r0, r29, 2
	clrlwi   r29, r0, 0x18

lbl_80198B28:
	lwz      r3, gameSystem__4Game@sda21(r13)
	ori      r0, r29, 4
	clrlwi   r29, r0, 0x18
	cmplwi   r3, 0
	beq      lbl_80198B6C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80198B6C
	lwz      r3, 0x34(r30)
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 0
	bne      lbl_80198B64
	ori      r0, r29, 0x60
	clrlwi   r29, r0, 0x18
	b        lbl_80198B6C

lbl_80198B64:
	ori      r0, r29, 0x50
	clrlwi   r29, r0, 0x18

lbl_80198B6C:
	lha      r5, 0x56(r30)
	addi     r4, r1, 8
	lha      r0, 0x54(r30)
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r0, 8(r1)
	sth      r5, 0xa(r1)
	stb      r29, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x20(r30)
	li       r0, 0
	stw      r0, 0x50(r30)
	stw      r0, 0x40(r30)
	stw      r0, 0x48(r30)

lbl_80198BA0:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80198BBC
 * Size:	00005C
 */
void PikiAI::ActPathMove::decideGoal(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x30(r3)
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x401
	beq      lbl_80198BFC
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x3e6
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80198BFC:
	lwz      r3, 0x30(r31)
	bl       getPelletGoal__Q24Game6PelletFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80198C18
 * Size:	00011C
 */
void PikiAI::ActPathMove::exec(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0x6c(r3)
	cmplwi   r0, 0
	bne      lbl_80198CCC
	lwz      r31, 0x30(r30)
	mr       r3, r31
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	li       r4, 0
	lfd      f1, lbl_80518FA8@sda21(r2)
	stw      r0, 8(r1)
	lwz      r3, 0x334(r31)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	bl       pullable__Q24Game11PelletCarryFUsf
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198CC4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r30)
	cmplwi   r4, 0
	beq      lbl_80198CA8
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x20(r30)

lbl_80198CA8:
	li       r3, 1
	li       r0, 0
	stb      r3, 0x6c(r30)
	mr       r3, r30
	li       r4, 1
	stw      r0, 0x34(r30)
	bl       initPathfinding__Q26PikiAI11ActPathMoveFb

lbl_80198CC4:
	li       r3, 1
	b        lbl_80198D1C

lbl_80198CCC:
	lhz      r0, 0x1e(r30)
	cmpwi    r0, 2
	beq      lbl_80198D08
	bge      lbl_80198CEC
	cmpwi    r0, 0
	beq      lbl_80198CF8
	bge      lbl_80198D00
	b        lbl_80198D18

lbl_80198CEC:
	cmpwi    r0, 4
	bge      lbl_80198D18
	b        lbl_80198D10

lbl_80198CF8:
	bl       execPathfinding__Q26PikiAI11ActPathMoveFv
	b        lbl_80198D1C

lbl_80198D00:
	bl       execMove__Q26PikiAI11ActPathMoveFv
	b        lbl_80198D1C

lbl_80198D08:
	bl       execMoveGoal__Q26PikiAI11ActPathMoveFv
	b        lbl_80198D1C

lbl_80198D10:
	bl       execMoveGuru__Q26PikiAI11ActPathMoveFv
	b        lbl_80198D1C

lbl_80198D18:
	li       r3, 1

lbl_80198D1C:
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
 * Address:	80198D34
 * Size:	0002B0
 */
void PikiAI::ActPathMove::execPathfinding(void)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stw      r31, 0x12c(r1)
	stw      r30, 0x128(r1)
	mr       r30, r3
	lis      r3, lbl_8047F070@ha
	stw      r29, 0x124(r1)
	addi     r31, r3, lbl_8047F070@l
	lwz      r29, 0x30(r30)
	cmplwi   r29, 0
	beq      lbl_80198D9C
	mr       r3, r29
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x114(r1)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r5, r3, "zero__10Vector3<f>"@l
	lfd      f1, lbl_80518FA8@sda21(r2)
	stw      r0, 0x110(r1)
	li       r4, 0
	lwz      r3, 0x334(r29)
	lfd      f0, 0x110(r1)
	fsubs    f1, f0, f1
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"

lbl_80198D9C:
	lwz      r3, 0x20(r30)
	cmplwi   r3, 0
	bne      lbl_80198DB0
	li       r3, 2
	b        lbl_80198FC8

lbl_80198DB0:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_80198DC4
	li       r3, 2
	b        lbl_80198FC8

lbl_80198DC4:
	lwz      r3, 0x40(r30)
	addi     r0, r3, 1
	stw      r0, 0x40(r30)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198E54
	lwz      r29, 0x30(r30)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198E54
	lwz      r3, 0x30(r30)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r4, r4, "zero__10Vector3<f>"@l
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518F60@sda21(r2)
	mr       r3, r29
	stfs     f0, 0x1c8(r29)
	stfs     f0, 0x1cc(r29)
	stfs     f0, 0x1d0(r29)
	bl       getSpeicalSlot__Q24Game6PelletFv
	extsh    r0, r3
	cmpwi    r0, -1
	bne      lbl_80198E54
	lwz      r3, 0x334(r29)
	bl       reset__Q24Game11PelletCarryFv

lbl_80198E54:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	lwz      r4, 0x20(r30)
	bl       check__Q24Game10PathfinderFUl
	cmpwi    r3, 2
	beq      lbl_80198FC4
	bge      lbl_80198E7C
	cmpwi    r3, 0
	beq      lbl_80198E88
	bge      lbl_80198F08
	b        lbl_80198FC4

lbl_80198E7C:
	cmpwi    r3, 4
	bge      lbl_80198FC4
	b        lbl_80198FAC

lbl_80198E88:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	addi     r5, r30, 0x44
	lwz      r4, 0x20(r30)
	bl       makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
	stw      r3, 0x4c(r30)
	li       r0, 1
	mr       r3, r30
	lwz      r4, 0x44(r30)
	stw      r4, 0x48(r30)
	sth      r0, 0x1e(r30)
	bl       crInit__Q26PikiAI11ActPathMoveFv
	lwz      r3, 0x44(r30)
	li       r7, -1
	mr       r4, r3
	b        lbl_80198ECC

lbl_80198EC4:
	lha      r7, 0x20(r4)
	lwz      r4, 0xc(r4)

lbl_80198ECC:
	cmplwi   r4, 0
	bne      lbl_80198EC4
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_80198EE8
	lha      r6, 0x20(r4)
	b        lbl_80198EEC

lbl_80198EE8:
	addi     r6, r2, lbl_80518FB0@sda21

lbl_80198EEC:
	lha      r5, 0x20(r3)
	addi     r3, r1, 0x10
	addi     r4, r31, 0xa0
	crclr    6
	bl       sprintf
	li       r3, 1
	b        lbl_80198FC8

lbl_80198F08:
	lwz      r4, 0x20(r30)
	cmplwi   r4, 0
	beq      lbl_80198F1C
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_80198F1C:
	lwz      r3, 0x50(r30)
	li       r0, 0
	li       r6, 6
	addi     r3, r3, 1
	stw      r3, 0x50(r30)
	sth      r0, 0x1e(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80198F54
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80198F54
	ori      r0, r6, 0x40
	clrlwi   r6, r0, 0x18

lbl_80198F54:
	lwz      r0, 0x50(r30)
	cmpwi    r0, 2
	blt      lbl_80198F78
	cmpwi    r0, 3
	ori      r0, r6, 0x40
	clrlwi   r6, r0, 0x18
	blt      lbl_80198F78
	li       r0, 3
	stw      r0, 0x50(r30)

lbl_80198F78:
	lha      r5, 0x56(r30)
	addi     r4, r1, 8
	lha      r0, 0x54(r30)
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r0, 8(r1)
	sth      r5, 0xa(r1)
	stb      r6, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x20(r30)
	li       r0, 0
	li       r3, 1
	stw      r0, 0x40(r30)
	b        lbl_80198FC8

lbl_80198FAC:
	lwz      r6, 0x20(r30)
	addi     r3, r31, 0x34
	addi     r5, r31, 0xb0
	li       r4, 0x4b1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80198FC4:
	li       r3, 1

lbl_80198FC8:
	lwz      r0, 0x134(r1)
	lwz      r31, 0x12c(r1)
	lwz      r30, 0x128(r1)
	lwz      r29, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001AC
 */
void PikiAI::ActPathMove::getCarrySpeed(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80198FE4
 * Size:	0006A8
 */
void PikiAI::ActPathMove::execMoveGoal(void)
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
	stmw     r27, 0x8c(r1)
	mr       r31, r3
	lis      r3, lbl_8047F070@ha
	lwz      r4, 0x30(r31)
	addi     r28, r3, lbl_8047F070@l
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x28(r31)
	lfs      f2, 0xc(r1)
	lfs      f1, 0x24(r31)
	lfs      f0, 8(r1)
	fsubs    f4, f3, f2
	lfs      f3, 0x2c(r31)
	fsubs    f2, f1, f0
	lfs      f0, 0x10(r1)
	fmuls    f5, f4, f4
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f0, f3, f0
	stfs     f4, 0x38(r1)
	fmuls    f3, f2, f2
	stfs     f2, 0x34(r1)
	fmuls    f4, f0, f0
	stfs     f0, 0x3c(r1)
	fadds    f0, f3, f5
	fadds    f6, f3, f4
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801990A0
	fmadds   f0, f2, f2, f5
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f1
	ble      lbl_801990A4
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_801990A4

lbl_801990A0:
	fmr      f4, f1

lbl_801990A4:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_801990E0
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x34(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x38(r1)
	lfs      f0, 0x3c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	b        lbl_801990E4

lbl_801990E0:
	fmr      f4, f0

lbl_801990E4:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpu    cr0, f0, f4
	bne      lbl_801990FC
	stfs     f0, 0x34(r1)
	stfs     f0, 0x38(r1)
	stfs     f0, 0x3c(r1)

lbl_801990FC:
	lfs      f0, lbl_80518FA0@sda21(r2)
	fcmpo    cr0, f6, f0
	bge      lbl_801994F4
	lwz      r4, 0x30(r31)
	addi     r3, r1, 0x5c
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x5c
	cmplwi   r0, 0
	stw      r4, 0x24(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x28(r1)
	stw      r3, 0x2c(r1)
	bne      lbl_80199154
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_801992B8

lbl_80199154:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_801991C0

lbl_8019916C:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801992B8
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)

lbl_801991C0:
	lwz      r12, 0x24(r1)
	addi     r3, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019916C
	b        lbl_801992B8

lbl_801991E0:
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r0, 0x30(r1)
	cmplwi   r0, 0
	bne      lbl_80199228
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_801992B8

lbl_80199228:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_8019929C

lbl_80199248:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801992B8
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)

lbl_8019929C:
	lwz      r12, 0x24(r1)
	addi     r3, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199248

lbl_801992B8:
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r1)
	cmplw    r4, r3
	bne      lbl_801991E0
	addi     r3, r1, 0x5c
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r3, 4(r31)
	bl       finishMotion__Q24Game8FakePikiFv
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	lwz      r4, 0x30(r31)
	addi     r3, r1, 0x40
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x40
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_80199340
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_801994C0

lbl_80199340:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_801993AC

lbl_80199358:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801994C0
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_801993AC:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199358
	b        lbl_801994C0

lbl_801993CC:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199404
	mr       r3, r27
	bl       endStick__Q24Game8CreatureFv

lbl_80199404:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_80199430
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_801994C0

lbl_80199430:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_801994A4

lbl_80199450:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801994C0
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_801994A4:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199450

lbl_801994C0:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_801993CC
	addi     r3, r1, 0x40
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	li       r3, 0
	b        lbl_80199660

lbl_801994F4:
	lwz      r3, 0x30(r31)
	lwz      r4, 4(r31)
	lhz      r0, 0x128(r3)
	lwz      r3, 0xc0(r4)
	cmplwi   r0, 0x401
	lfs      f30, 0x1100(r3)
	lfs      f31, 0x1128(r3)
	beq      lbl_80199528
	addi     r3, r28, 0x34
	addi     r5, r28, 0x48
	li       r4, 0x4bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80199528:
	lwz      r27, 0x30(r31)
	lwz      r3, 0x358(r27)
	cmplwi   r3, 0
	beq      lbl_80199564
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199564
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f4, 0x2c8(r3)
	b        lbl_80199628

lbl_80199564:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80199590
	lbz      r0, 0x32c(r27)
	cmplwi   r0, 3
	bne      lbl_80199590
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f4, 0x2c8(r3)
	b        lbl_80199628

lbl_80199590:
	lwz      r4, 4(r31)
	mr       r3, r27
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x2c8(r4)
	fmuls    f30, f0, f30
	fmuls    f31, f0, f31
	bl       getPelletConfigMin__Q24Game6PelletFv
	mr       r29, r3
	mr       r3, r27
	bl       getPelletConfigMax__Q24Game6PelletFv
	or.      r30, r3, r3
	lfs      f29, 0x418(r27)
	bne      lbl_801995E0
	lwz      r6, 0x35c(r27)
	addi     r3, r28, 0x34
	addi     r5, r28, 0xc0
	li       r4, 0x4e0
	lwz      r6, 0x40(r6)
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801995E0:
	lis      r3, 0x4330
	xoris    r0, r29, 0x8000
	stw      r0, 0x7c(r1)
	xoris    r0, r30, 0x8000
	lfs      f1, lbl_80518F64@sda21(r2)
	fsubs    f0, f30, f31
	stw      r3, 0x78(r1)
	lfd      f3, lbl_80518FA8@sda21(r2)
	fadds    f4, f1, f29
	lfd      f1, 0x78(r1)
	stw      r0, 0x84(r1)
	fsubs    f2, f1, f3
	stw      r3, 0x80(r1)
	lfd      f1, 0x80(r1)
	fsubs    f2, f4, f2
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmadds   f4, f1, f0, f31

lbl_80199628:
	lfs      f3, lbl_80518F60@sda21(r2)
	mr       r3, r31
	lfs      f2, 0x34(r1)
	addi     r4, r1, 0x34
	lfs      f0, 0x3c(r1)
	fmuls    f1, f3, f4
	fmuls    f2, f2, f4
	stfs     f3, 0x38(r1)
	fmuls    f0, f0, f4
	stfs     f1, 0x38(r1)
	stfs     f2, 0x34(r1)
	stfs     f0, 0x3c(r1)
	bl       "carry__Q26PikiAI11ActPathMoveFR10Vector3<f>"
	li       r3, 1

lbl_80199660:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lmw      r27, 0x8c(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019968C
 * Size:	00009C
 */
void PikiAI::ActPathMove::isAllBlue(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x30(r3)
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x401
	beq      lbl_801996D0
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x52d
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801996D0:
	lwz      r30, 0x30(r30)
	li       r4, 5
	mr       r3, r30
	bl       getPikmins__Q24Game6PelletFi
	mr       r31, r3
	mr       r3, r30
	li       r4, 0
	bl       getPikmins__Q24Game6PelletFi
	add      r31, r3, r31
	mr       r3, r30
	bl       getTotalPikmins__Q24Game6PelletFv
	cmpw     r3, r31
	bne      lbl_8019970C
	li       r3, 1
	b        lbl_80199710

lbl_8019970C:
	li       r3, 0

lbl_80199710:
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
 * Address:	80199728
 * Size:	0000A8
 */
void carry__Q26PikiAI11ActPathMoveFR10Vector3f(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0x30(r3)
	mr       r3, r31
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r5, r30
	lfd      f1, lbl_80518FA8@sda21(r2)
	li       r4, 0
	stw      r0, 8(r1)
	lwz      r3, 0x334(r31)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
	lbz      r0, 0x6c(r29)
	cmplwi   r0, 0
	beq      lbl_801997B4
	clrlwi.  r0, r3, 0x18
	bne      lbl_801997B4
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x6c(r29)
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl

lbl_801997B4:
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
 * Address:	801997D0
 * Size:	000428
 */
void PikiAI::ActPathMove::execMove(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	mr       r31, r3
	lis      r4, lbl_8047F070@ha
	lwz      r3, 0x30(r3)
	addi     r28, r4, lbl_8047F070@l
	lwz      r4, 4(r31)
	lhz      r0, 0x128(r3)
	lwz      r3, 0xc0(r4)
	cmplwi   r0, 0x401
	lfs      f30, 0x1100(r3)
	lfs      f31, 0x1128(r3)
	beq      lbl_80199838
	addi     r3, r28, 0x34
	addi     r5, r28, 0x48
	li       r4, 0x4bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80199838:
	lwz      r27, 0x30(r31)
	lwz      r3, 0x358(r27)
	cmplwi   r3, 0
	beq      lbl_80199874
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199874
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x2c8(r3)
	b        lbl_80199938

lbl_80199874:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801998A0
	lbz      r0, 0x32c(r27)
	cmplwi   r0, 3
	bne      lbl_801998A0
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x2c8(r3)
	b        lbl_80199938

lbl_801998A0:
	lwz      r4, 4(r31)
	mr       r3, r27
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x2c8(r4)
	fmuls    f30, f0, f30
	fmuls    f31, f0, f31
	bl       getPelletConfigMin__Q24Game6PelletFv
	mr       r29, r3
	mr       r3, r27
	bl       getPelletConfigMax__Q24Game6PelletFv
	or.      r30, r3, r3
	lfs      f29, 0x418(r27)
	bne      lbl_801998F0
	lwz      r6, 0x35c(r27)
	addi     r3, r28, 0x34
	addi     r5, r28, 0xc0
	li       r4, 0x4e0
	lwz      r6, 0x40(r6)
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801998F0:
	lis      r3, 0x4330
	xoris    r0, r29, 0x8000
	stw      r0, 0x1c(r1)
	xoris    r0, r30, 0x8000
	lfs      f1, lbl_80518F64@sda21(r2)
	fsubs    f0, f30, f31
	stw      r3, 0x18(r1)
	lfd      f3, lbl_80518FA8@sda21(r2)
	fadds    f4, f1, f29
	lfd      f1, 0x18(r1)
	stw      r0, 0x24(r1)
	fsubs    f2, f1, f3
	stw      r3, 0x20(r1)
	lfd      f1, 0x20(r1)
	fsubs    f2, f4, f2
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmadds   f31, f1, f0, f31

lbl_80199938:
	mr       r3, r31
	bl       crMove__Q26PikiAI11ActPathMoveFv
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f1, 0xb4(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019998C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80199990
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80199990

lbl_8019998C:
	fmr      f2, f1

lbl_80199990:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801999C8
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_801999C8:
	lfs      f0, 0xb0(r31)
	fmuls    f0, f0, f31
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f31
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f31
	stfs     f0, 0xb8(r31)
	lwz      r27, 0x30(r31)
	mr       r3, r27
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	addi     r5, r31, 0xb0
	lfd      f1, lbl_80518FA8@sda21(r2)
	li       r4, 0
	stw      r0, 0x20(r1)
	lwz      r3, 0x334(r27)
	lfd      f0, 0x20(r1)
	fsubs    f1, f0, f1
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
	lbz      r0, 0x6c(r31)
	cmplwi   r0, 0
	beq      lbl_80199A58
	clrlwi.  r0, r3, 0x18
	bne      lbl_80199A58
	li       r0, 0
	mr       r3, r27
	stb      r0, 0x6c(r31)
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl

lbl_80199A58:
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199BC8
	lwz      r27, 0x30(r31)
	addi     r3, r1, 8
	mr       r4, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xc(r1)
	lfs      f0, 0x14(r31)
	lfs      f5, 8(r1)
	fsubs    f2, f3, f0
	lfs      f1, 0x10(r31)
	lfs      f4, 0x10(r1)
	lfs      f0, 0x18(r31)
	fsubs    f1, f5, f1
	fmuls    f6, f2, f2
	fsubs    f2, f4, f0
	lfs      f0, lbl_80518F60@sda21(r2)
	fmadds   f1, f1, f1, f6
	fmuls    f2, f2, f2
	fadds    f30, f2, f1
	fcmpo    cr0, f30, f0
	ble      lbl_80199AE0
	ble      lbl_80199AE4
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_80199AE4

lbl_80199AE0:
	fmr      f30, f0

lbl_80199AE4:
	stfs     f5, 0x10(r31)
	mr       r3, r27
	stfs     f3, 0x14(r31)
	stfs     f4, 0x18(r31)
	bl       getWallTimer__Q24Game6PelletFv
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0x63
	ble      lbl_80199BC8
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f30, f0
	bge      lbl_80199BC8
	li       r0, 0
	stb      r0, 0x3bc(r27)
	stw      r0, 0x34(r31)
	lwz      r4, 0x20(r31)
	cmplwi   r4, 0
	beq      lbl_80199B38
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x20(r31)

lbl_80199B38:
	lwz      r3, 0xc(r31)
	li       r0, 0
	sth      r0, 8(r3)
	lha      r6, 0x1c(r31)
	lwz      r5, 0xc(r31)
	cmpwi    r6, -1
	beq      lbl_80199B78
	lha      r4, 8(r5)
	cmpwi    r4, 4
	bge      lbl_80199B78
	addi     r3, r4, 1
	slwi     r0, r4, 1
	sth      r3, 8(r5)
	li       r3, 1
	sthx     r6, r5, r0
	b        lbl_80199B7C

lbl_80199B78:
	li       r3, 0

lbl_80199B7C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80199BBC
	lwz      r3, 0xc(r31)
	li       r0, 0
	sth      r0, 8(r3)
	lha      r6, 0x1c(r31)
	lwz      r5, 0xc(r31)
	cmpwi    r6, -1
	beq      lbl_80199BBC
	lha      r4, 8(r5)
	cmpwi    r4, 4
	bge      lbl_80199BBC
	addi     r3, r4, 1
	slwi     r0, r4, 1
	sth      r3, 8(r5)
	sthx     r6, r5, r0

lbl_80199BBC:
	mr       r3, r31
	li       r4, 0
	bl       initPathfinding__Q26PikiAI11ActPathMoveFb

lbl_80199BC8:
	li       r3, 1
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80199BF8
 * Size:	000090
 */
void PikiAI::ActPathMove::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x30(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199C54
	lwz      r31, 0x30(r30)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199C54
	lwz      r3, 0x334(r31)
	bl       reset__Q24Game11PelletCarryFv

lbl_80199C54:
	lwz      r4, 0x20(r30)
	cmplwi   r4, 0
	beq      lbl_80199C68
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_80199C68:
	li       r0, 0
	stw      r0, 0x20(r30)
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
 * Address:	80199C88
 * Size:	0004E8
 */
void PikiAI::ActPathMove::execMoveGuru(void)
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
	lwz      r4, 0x64(r3)
	lis      r5, lbl_8047F070@ha
	mr       r30, r3
	lbz      r0, 0x34(r4)
	addi     r31, r5, lbl_8047F070@l
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80199CDC
	li       r0, 1
	li       r3, 1
	sth      r0, 0x1e(r30)
	b        lbl_8019A144

lbl_80199CDC:
	lwz      r4, 0x70(r30)
	cmpwi    r4, 0
	blt      lbl_80199DA0
	bl       getWayPoint__Q26PikiAI11ActPathMoveFi
	lwz      r4, 0x64(r30)
	lfs      f7, 0x50(r3)
	lfs      f0, 0x50(r4)
	lfs      f1, 0x54(r4)
	fsubs    f4, f0, f7
	lfs      f6, 0x54(r3)
	lfs      f0, 0x4c(r4)
	lfs      f8, 0x4c(r3)
	fsubs    f5, f1, f6
	fmuls    f1, f4, f4
	fsubs    f3, f0, f8
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f2, f5, f5
	fmadds   f1, f3, f3, f1
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80199D40
	ble      lbl_80199D44
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80199D44

lbl_80199D40:
	fmr      f2, f0

lbl_80199D44:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80199D68
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	b        lbl_80199D6C

lbl_80199D68:
	fmr      f2, f0

lbl_80199D6C:
	lfs      f1, lbl_80518FB4@sda21(r2)
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f9, f2, f1
	fcmpo    cr0, f9, f0
	bge      lbl_80199D84
	fmr      f9, f0

lbl_80199D84:
	fmuls    f2, f3, f9
	fmuls    f1, f4, f9
	fmuls    f0, f5, f9
	fadds    f4, f8, f2
	fadds    f5, f7, f1
	fadds    f6, f6, f0
	b        lbl_80199DAC

lbl_80199DA0:
	lfs      f4, 0x58(r30)
	lfs      f5, 0x5c(r30)
	lfs      f6, 0x60(r30)

lbl_80199DAC:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80518F94@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x68(r30)
	lfs      f0, lbl_80518FB8@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x68(r30)
	lfs      f1, 0x68(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80199DDC
	fsubs    f0, f1, f0
	stfs     f0, 0x68(r30)

lbl_80199DDC:
	lfs      f3, 0x68(r30)
	lfs      f0, lbl_80518F60@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80199DF4
	fneg     f1, f3

lbl_80199DF4:
	lfs      f2, lbl_80518FBC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518F60@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f1, 4(r3)
	bge      lbl_80199E4C
	lfs      f0, lbl_80518FC0@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_80199E64

lbl_80199E4C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_80199E64:
	lfs      f0, lbl_80518F80@sda21(r2)
	addi     r3, r1, 8
	lfs      f3, lbl_80518F60@sda21(r2)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f0, f1, f0
	fadds    f2, f2, f4
	fadds    f3, f3, f5
	fadds    f0, f0, f6
	stfs     f2, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r4, 0x30(r30)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	lfs      f0, 8(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f2, f2, f0
	lfs      f3, 0x1c(r1)
	lfs      f0, 0x10(r1)
	fmuls    f6, f1, f1
	lfs      f4, 0x18(r1)
	fsubs    f5, f3, f0
	fmuls    f0, f2, f2
	lfs      f3, 0xc(r1)
	stfs     f2, 0x14(r1)
	fmuls    f7, f5, f5
	fadds    f0, f0, f6
	stfs     f5, 0x1c(r1)
	fsubs    f3, f4, f3
	fadds    f0, f7, f0
	stfs     f3, 0x18(r1)
	fcmpo    cr0, f0, f1
	stfs     f1, 0x18(r1)
	ble      lbl_80199F18
	fmadds   f0, f2, f2, f6
	fadds    f4, f7, f0
	fcmpo    cr0, f4, f1
	ble      lbl_80199F1C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_80199F1C

lbl_80199F18:
	fmr      f4, f1

lbl_80199F1C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_80199F58
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_80199F5C

lbl_80199F58:
	fmr      f4, f0

lbl_80199F5C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpu    cr0, f0, f4
	bne      lbl_80199F74
	stfs     f0, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_80199F74:
	lwz      r3, 0x30(r30)
	lwz      r4, 4(r30)
	lhz      r0, 0x128(r3)
	lwz      r3, 0xc0(r4)
	cmplwi   r0, 0x401
	lfs      f30, 0x1100(r3)
	lfs      f31, 0x1128(r3)
	beq      lbl_80199FA8
	addi     r3, r31, 0x34
	addi     r5, r31, 0x48
	li       r4, 0x4bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80199FA8:
	lwz      r27, 0x30(r30)
	lwz      r3, 0x358(r27)
	cmplwi   r3, 0
	beq      lbl_80199FE4
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199FE4
	lwz      r3, 4(r30)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	b        lbl_8019A0A8

lbl_80199FE4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8019A010
	lbz      r0, 0x32c(r27)
	cmplwi   r0, 3
	bne      lbl_8019A010
	lwz      r3, 4(r30)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	b        lbl_8019A0A8

lbl_8019A010:
	lwz      r4, 4(r30)
	mr       r3, r27
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x2c8(r4)
	fmuls    f30, f0, f30
	fmuls    f31, f0, f31
	bl       getPelletConfigMin__Q24Game6PelletFv
	mr       r28, r3
	mr       r3, r27
	bl       getPelletConfigMax__Q24Game6PelletFv
	or.      r29, r3, r3
	lfs      f29, 0x418(r27)
	bne      lbl_8019A060
	lwz      r6, 0x35c(r27)
	addi     r3, r31, 0x34
	addi     r5, r31, 0xc0
	li       r4, 0x4e0
	lwz      r6, 0x40(r6)
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019A060:
	lis      r3, 0x4330
	xoris    r0, r28, 0x8000
	stw      r0, 0x34(r1)
	xoris    r0, r29, 0x8000
	lfs      f1, lbl_80518F64@sda21(r2)
	fsubs    f0, f30, f31
	stw      r3, 0x30(r1)
	lfd      f3, lbl_80518FA8@sda21(r2)
	fadds    f4, f1, f29
	lfd      f1, 0x30(r1)
	stw      r0, 0x2c(r1)
	fsubs    f2, f1, f3
	stw      r3, 0x28(r1)
	lfd      f1, 0x28(r1)
	fsubs    f2, f4, f2
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmadds   f1, f1, f0, f31

lbl_8019A0A8:
	lfs      f0, lbl_80518F78@sda21(r2)
	lfs      f2, 0x14(r1)
	fmuls    f3, f1, f0
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r27, 0x30(r30)
	mr       r3, r27
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	addi     r5, r1, 0x14
	lfd      f1, lbl_80518FA8@sda21(r2)
	li       r4, 0
	stw      r0, 0x30(r1)
	lwz      r3, 0x334(r27)
	lfd      f0, 0x30(r1)
	fsubs    f1, f0, f1
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
	lbz      r0, 0x6c(r30)
	cmplwi   r0, 0
	beq      lbl_8019A140
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019A140
	li       r0, 0
	mr       r3, r27
	stb      r0, 0x6c(r30)
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl

lbl_8019A140:
	li       r3, 1

lbl_8019A144:
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
 * Address:	8019A170
 * Size:	0000B8
 */
void PikiAI::ActPathMove::getWayPoint(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	lwz      r5, 0x48(r3)
	ble      lbl_8019A1EC
	cmpwi    r4, 8
	addi     r3, r4, -8
	ble      lbl_8019A1D4
	addi     r0, r3, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_8019A1D4

lbl_8019A1AC:
	lwz      r3, 0xc(r5)
	addi     r6, r6, 8
	lwz      r3, 0xc(r3)
	lwz      r3, 0xc(r3)
	lwz      r3, 0xc(r3)
	lwz      r3, 0xc(r3)
	lwz      r3, 0xc(r3)
	lwz      r3, 0xc(r3)
	lwz      r5, 0xc(r3)
	bdnz     lbl_8019A1AC

lbl_8019A1D4:
	subf     r0, r6, r4
	mtctr    r0
	cmpw     r6, r4
	bge      lbl_8019A1EC

lbl_8019A1E4:
	lwz      r5, 0xc(r5)
	bdnz     lbl_8019A1E4

lbl_8019A1EC:
	cmplwi   r5, 0
	beq      lbl_8019A214
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r5)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019A218

lbl_8019A214:
	li       r3, 0

lbl_8019A218:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019A228
 * Size:	00018C
 */
void PikiAI::ActPathMove::crGetPoint(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	bge      lbl_8019A268
	lfs      f0, 0xa4(r30)
	stfs     f0, 0(r31)
	lfs      f0, 0xa8(r30)
	stfs     f0, 4(r31)
	lfs      f0, 0xac(r30)
	stfs     f0, 8(r31)
	b        lbl_8019A39C

lbl_8019A268:
	lwz      r0, 0x4c(r30)
	cmpw     r5, r0
	blt      lbl_8019A290
	lfs      f0, 0x24(r30)
	stfs     f0, 0(r31)
	lfs      f0, 0x28(r30)
	stfs     f0, 4(r31)
	lfs      f0, 0x2c(r30)
	stfs     f0, 8(r31)
	b        lbl_8019A39C

lbl_8019A290:
	cmpwi    r5, 0
	lwz      r6, 0x48(r30)
	li       r3, 0
	ble      lbl_8019A300
	cmpwi    r5, 8
	addi     r4, r5, -8
	ble      lbl_8019A2E8
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_8019A2E8

lbl_8019A2C0:
	lwz      r4, 0xc(r6)
	addi     r3, r3, 8
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r6, 0xc(r4)
	bdnz     lbl_8019A2C0

lbl_8019A2E8:
	subf     r0, r3, r5
	mtctr    r0
	cmpw     r3, r5
	bge      lbl_8019A300

lbl_8019A2F8:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019A2F8

lbl_8019A300:
	cmplwi   r6, 0
	beq      lbl_8019A328
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019A32C

lbl_8019A328:
	li       r3, 0

lbl_8019A32C:
	cmplwi   r3, 0
	bne      lbl_8019A354
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r31)
	lfs      f0, 4(r3)
	stfs     f0, 4(r31)
	lfs      f0, 8(r3)
	stfs     f0, 8(r31)
	b        lbl_8019A39C

lbl_8019A354:
	lfs      f5, 0x50(r3)
	lfs      f0, 0x28(r30)
	lfs      f4, 0x4c(r3)
	fsubs    f3, f5, f0
	lfs      f0, 0x24(r30)
	lfs      f6, 0x54(r3)
	lfs      f1, 0x2c(r30)
	fsubs    f2, f4, f0
	fmuls    f7, f3, f3
	fsubs    f3, f6, f1
	lfs      f0, lbl_80518F60@sda21(r2)
	fmadds   f1, f2, f2, f7
	fmuls    f2, f3, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	stfs     f4, 0(r31)
	stfs     f5, 4(r31)
	stfs     f6, 8(r31)

lbl_8019A39C:
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
 * Address:	8019A3B4
 * Size:	0003C4
 */
void PikiAI::ActPathMove::contextCheck(int)
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	bne      lbl_8019A53C
	addic.   r6, r31, 1
	blt      lbl_8019A53C
	lwz      r0, 0x4c(r30)
	cmpw     r6, r0
	bge      lbl_8019A53C
	cmpwi    r6, 0
	lwz      r5, 0x48(r30)
	li       r3, 0
	ble      lbl_8019A494
	cmpwi    r6, 8
	addi     r4, r6, -8
	ble      lbl_8019A47C
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_8019A47C

lbl_8019A454:
	lwz      r4, 0xc(r5)
	addi     r3, r3, 8
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r5, 0xc(r4)
	bdnz     lbl_8019A454

lbl_8019A47C:
	subf     r0, r3, r6
	mtctr    r0
	cmpw     r3, r6
	bge      lbl_8019A494

lbl_8019A48C:
	lwz      r5, 0xc(r5)
	bdnz     lbl_8019A48C

lbl_8019A494:
	cmplwi   r5, 0
	beq      lbl_8019A4BC
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r5)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019A4C0

lbl_8019A4BC:
	li       r3, 0

lbl_8019A4C0:
	lwz      r4, 0x34(r30)
	lhz      r0, 0x22e(r4)
	cmplwi   r0, 0
	bne      lbl_8019A508
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8019A4FC
	lbz      r3, 0x3d(r30)
	addi     r0, r3, 1
	stb      r0, 0x3d(r30)
	lbz      r0, 0x3d(r30)
	cmplwi   r0, 2
	bge      lbl_8019A53C
	li       r3, 0
	b        lbl_8019A730

lbl_8019A4FC:
	li       r0, 0
	stb      r0, 0x3d(r30)
	b        lbl_8019A53C

lbl_8019A508:
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8019A534
	lbz      r3, 0x3d(r30)
	addi     r0, r3, 1
	stb      r0, 0x3d(r30)
	lbz      r0, 0x3d(r30)
	cmplwi   r0, 2
	bge      lbl_8019A53C
	li       r3, 0
	b        lbl_8019A730

lbl_8019A534:
	li       r0, 0
	stb      r0, 0x3d(r30)

lbl_8019A53C:
	lwz      r4, 0x30(r30)
	addi     r3, r1, 0x30
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x30(r1)
	lfs      f1, 0x34(r1)
	lfs      f0, 0x38(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019A598
	lwz      r3, 0x30(r30)
	bl       getBottomRadius__Q24Game6PelletFv
	stfs     f1, 0x74(r1)
	b        lbl_8019A5B0

lbl_8019A598:
	lwz      r3, 0x30(r30)
	addi     r4, r1, 0x68
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8019A5B0:
	cmpwi    r31, 0
	bge      lbl_8019A634
	mr       r4, r30
	mr       r5, r31
	addi     r3, r1, 0x24
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f30, 0x24(r1)
	mr       r3, r30
	lfs      f31, 0x2c(r1)
	mr       r4, r31
	bl       crGetRadius__Q26PikiAI11ActPathMoveFi
	lfs      f0, 0x70(r1)
	lfs      f1, 0x68(r1)
	fsubs    f2, f31, f0
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f1, f30, f1
	fmuls    f2, f2, f2
	fadds    f1, f1, f1
	fadds    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8019A614
	ble      lbl_8019A618
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019A618

lbl_8019A614:
	fmr      f1, f0

lbl_8019A618:
	lfs      f0, lbl_80518FC4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019A62C
	li       r3, 0
	b        lbl_8019A730

lbl_8019A62C:
	li       r3, 1
	b        lbl_8019A730

lbl_8019A634:
	mr       r4, r30
	mr       r5, r31
	addi     r3, r1, 0x18
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f29, 0x18(r1)
	mr       r4, r30
	lfs      f28, 0x20(r1)
	addi     r3, r1, 0xc
	addi     r5, r31, 1
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f27, 0xc(r1)
	mr       r3, r30
	lfs      f26, 0x14(r1)
	mr       r4, r31
	bl       crGetRadius__Q26PikiAI11ActPathMoveFi
	fmr      f30, f1
	mr       r3, r30
	addi     r4, r31, 1
	bl       crGetRadius__Q26PikiAI11ActPathMoveFi
	fmr      f31, f1
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f29, 0x78(r1)
	addi     r3, r1, 0x78
	addi     r4, r1, 0x68
	addi     r5, r1, 0x5c
	stfs     f0, 0x6c(r1)
	addi     r6, r1, 8
	stfs     f0, 0x7c(r1)
	stfs     f28, 0x80(r1)
	stfs     f27, 0x84(r1)
	stfs     f0, 0x88(r1)
	stfs     f26, 0x8c(r1)
	stfs     f30, 0x90(r1)
	stfs     f31, 0x94(r1)
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019A6D0
	li       r3, 1
	b        lbl_8019A730

lbl_8019A6D0:
	lfs      f0, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x4c
	stfs     f29, 0x4c(r1)
	addi     r4, r1, 0x68
	stfs     f0, 0x50(r1)
	stfs     f28, 0x54(r1)
	stfs     f30, 0x58(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019A700
	li       r3, 1
	b        lbl_8019A730

lbl_8019A700:
	lfs      f0, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x3c
	stfs     f27, 0x3c(r1)
	addi     r4, r1, 0x68
	stfs     f0, 0x40(r1)
	stfs     f26, 0x44(r1)
	stfs     f31, 0x48(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi   r3, r3, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_8019A730:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0x104(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void PikiAI::ActPathMove::crPointOpen(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8019A778
 * Size:	000134
 */
void PikiAI::ActPathMove::crGetRadius(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x24(r1)
	bge      lbl_8019A7D8
	lwz      r3, 0x30(r3)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8019A7D0
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x742
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019A7D0:
	lfs      f1, 0x14(r1)
	b        lbl_8019A89C

lbl_8019A7D8:
	lwz      r0, 0x4c(r3)
	cmpw     r4, r0
	blt      lbl_8019A7EC
	lfs      f1, lbl_80518FC8@sda21(r2)
	b        lbl_8019A89C

lbl_8019A7EC:
	cmpwi    r4, 0
	lwz      r6, 0x48(r3)
	li       r3, 0
	ble      lbl_8019A85C
	cmpwi    r4, 8
	addi     r5, r4, -8
	ble      lbl_8019A844
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019A844

lbl_8019A81C:
	lwz      r5, 0xc(r6)
	addi     r3, r3, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019A81C

lbl_8019A844:
	subf     r0, r3, r4
	mtctr    r0
	cmpw     r3, r4
	bge      lbl_8019A85C

lbl_8019A854:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019A854

lbl_8019A85C:
	cmplwi   r6, 0
	beq      lbl_8019A884
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019A888

lbl_8019A884:
	li       r3, 0

lbl_8019A888:
	cmplwi   r3, 0
	bne      lbl_8019A898
	lfs      f1, lbl_80518FC8@sda21(r2)
	b        lbl_8019A89C

lbl_8019A898:
	lfs      f1, 0x58(r3)

lbl_8019A89C:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019A8AC
 * Size:	000738
 */
void PikiAI::ActPathMove::crInit(void)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stfd     f25, 0x110(r1)
	psq_st   f25, 280(r1), 0, qr0
	stfd     f24, 0x100(r1)
	psq_st   f24, 264(r1), 0, qr0
	stfd     f23, 0xf0(r1)
	psq_st   f23, 248(r1), 0, qr0
	stfd     f22, 0xe0(r1)
	psq_st   f22, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	mr       r30, r3
	li       r0, -1
	stw      r0, 0x70(r3)
	addi     r3, r1, 0x80
	lwz      r4, 0x30(r30)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x80(r1)
	mr       r4, r30
	addi     r3, r1, 0x74
	stfs     f0, 0xa4(r30)
	lfs      f0, 0x84(r1)
	stfs     f0, 0xa8(r30)
	lfs      f0, 0x88(r1)
	stfs     f0, 0xac(r30)
	lwz      r5, 0x70(r30)
	addi     r5, r5, 1
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lwz      r5, 0x70(r30)
	mr       r4, r30
	lfs      f23, 0x74(r1)
	addi     r3, r1, 0x68
	lfs      f24, 0x78(r1)
	addi     r5, r5, 2
	lfs      f25, 0x7c(r1)
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f28, 0x68(r1)
	li       r31, 0
	lfs      f26, 0x6c(r1)
	fcmpu    cr0, f23, f28
	lfs      f27, 0x70(r1)
	bne      lbl_8019A9B0
	fcmpu    cr0, f24, f26
	bne      lbl_8019A9B0
	fcmpu    cr0, f25, f27
	bne      lbl_8019A9B0
	li       r31, 1

lbl_8019A9B0:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8019AC10
	lwz      r3, 0x70(r30)
	addic.   r3, r3, 2
	bge      lbl_8019AA10
	lwz      r3, 0x30(r30)
	addi     r4, r1, 0x1c
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8019AA08
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x742
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019AA08:
	lfs      f22, 0x28(r1)
	b        lbl_8019AAD4

lbl_8019AA10:
	lwz      r0, 0x4c(r30)
	cmpw     r3, r0
	blt      lbl_8019AA24
	lfs      f22, lbl_80518FC8@sda21(r2)
	b        lbl_8019AAD4

lbl_8019AA24:
	cmpwi    r3, 0
	lwz      r6, 0x48(r30)
	li       r4, 0
	ble      lbl_8019AA94
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019AA7C
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019AA7C

lbl_8019AA54:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019AA54

lbl_8019AA7C:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019AA94

lbl_8019AA8C:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019AA8C

lbl_8019AA94:
	cmplwi   r6, 0
	beq      lbl_8019AABC
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019AAC0

lbl_8019AABC:
	li       r3, 0

lbl_8019AAC0:
	cmplwi   r3, 0
	bne      lbl_8019AAD0
	lfs      f22, lbl_80518FC8@sda21(r2)
	b        lbl_8019AAD4

lbl_8019AAD0:
	lfs      f22, 0x58(r3)

lbl_8019AAD4:
	lwz      r3, 0x70(r30)
	addic.   r3, r3, 1
	bge      lbl_8019AB2C
	lwz      r3, 0x30(r30)
	addi     r4, r1, 0xc
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8019AB24
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x742
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019AB24:
	lfs      f0, 0x18(r1)
	b        lbl_8019ABF0

lbl_8019AB2C:
	lwz      r0, 0x4c(r30)
	cmpw     r3, r0
	blt      lbl_8019AB40
	lfs      f0, lbl_80518FC8@sda21(r2)
	b        lbl_8019ABF0

lbl_8019AB40:
	cmpwi    r3, 0
	lwz      r6, 0x48(r30)
	li       r4, 0
	ble      lbl_8019ABB0
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019AB98
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019AB98

lbl_8019AB70:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019AB70

lbl_8019AB98:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019ABB0

lbl_8019ABA8:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019ABA8

lbl_8019ABB0:
	cmplwi   r6, 0
	beq      lbl_8019ABD8
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019ABDC

lbl_8019ABD8:
	li       r3, 0

lbl_8019ABDC:
	cmplwi   r3, 0
	bne      lbl_8019ABEC
	lfs      f0, lbl_80518FC8@sda21(r2)
	b        lbl_8019ABF0

lbl_8019ABEC:
	lfs      f0, 0x58(r3)

lbl_8019ABF0:
	stfs     f23, 0xa8(r1)
	stfs     f24, 0xac(r1)
	stfs     f25, 0xb0(r1)
	stfs     f28, 0xb4(r1)
	stfs     f26, 0xb8(r1)
	stfs     f27, 0xbc(r1)
	stfs     f0, 0xc0(r1)
	stfs     f22, 0xc4(r1)

lbl_8019AC10:
	lfs      f1, 0xa4(r30)
	clrlwi.  r0, r31, 0x18
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f1, 0x8c(r1)
	lfs      f1, 0xa8(r30)
	stfs     f1, 0x90(r1)
	lfs      f1, 0xac(r30)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	bne      lbl_8019ADE0
	addi     r3, r1, 0xa8
	addi     r4, r1, 0x8c
	addi     r5, r1, 0x9c
	addi     r6, r1, 8
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019ADE0
	lwz      r3, 0x70(r30)
	addic.   r3, r3, 2
	blt      lbl_8019AC6C
	lwz      r0, 0x4c(r30)
	cmpw     r3, r0
	blt      lbl_8019AC74

lbl_8019AC6C:
	li       r0, 1
	b        lbl_8019AD2C

lbl_8019AC74:
	cmpwi    r3, 0
	lwz      r6, 0x48(r30)
	li       r4, 0
	ble      lbl_8019ACE4
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019ACCC
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019ACCC

lbl_8019ACA4:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019ACA4

lbl_8019ACCC:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019ACE4

lbl_8019ACDC:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019ACDC

lbl_8019ACE4:
	cmplwi   r6, 0
	beq      lbl_8019AD0C
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019AD10

lbl_8019AD0C:
	li       r3, 0

lbl_8019AD10:
	cmplwi   r3, 0
	bne      lbl_8019AD20
	li       r0, 1
	b        lbl_8019AD2C

lbl_8019AD20:
	lbz      r0, 0x34(r3)
	clrlwi   r0, r0, 0x1f
	xori     r0, r0, 1

lbl_8019AD2C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8019ADE0
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x70(r30)
	addi     r3, r1, 0x5c
	li       r5, -1
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f0, 0x5c(r1)
	mr       r4, r30
	addi     r3, r1, 0x50
	li       r5, -1
	stfs     f0, 0x74(r30)
	lfs      f0, 0x60(r1)
	stfs     f0, 0x78(r30)
	lfs      f0, 0x64(r1)
	stfs     f0, 0x7c(r30)
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f0, 0x50(r1)
	mr       r4, r30
	addi     r3, r1, 0x44
	li       r5, 1
	stfs     f0, 0x80(r30)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x84(r30)
	lfs      f0, 0x58(r1)
	stfs     f0, 0x88(r30)
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f0, 0x44(r1)
	mr       r4, r30
	addi     r3, r1, 0x38
	li       r5, 2
	stfs     f0, 0x8c(r30)
	lfs      f0, 0x48(r1)
	stfs     f0, 0x90(r30)
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x94(r30)
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f0, 0x38(r1)
	stfs     f0, 0x98(r30)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x9c(r30)
	lfs      f0, 0x40(r1)
	stfs     f0, 0xa0(r30)
	b        lbl_8019AF78

lbl_8019ADE0:
	lwz      r3, mapMgr__4Game@sda21(r13)
	li       r29, 0
	lwz      r4, 0x44(r30)
	lwz      r3, 8(r3)
	lha      r4, 0x20(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x44(r30)
	mr       r31, r3
	lwz      r4, 0xc(r4)
	cmplwi   r4, 0
	beq      lbl_8019AE38
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r4)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r29, r3

lbl_8019AE38:
	cmplwi   r31, 0
	beq      lbl_8019AF70
	cmplwi   r29, 0
	beq      lbl_8019AF70
	lfs      f23, 0x50(r31)
	lfs      f29, 0x50(r29)
	lfs      f24, 0x4c(r31)
	fsubs    f26, f29, f23
	lfs      f30, 0x4c(r29)
	lfs      f22, 0x54(r31)
	lfs      f28, 0x54(r29)
	fsubs    f27, f30, f24
	fmuls    f1, f26, f26
	fsubs    f25, f28, f22
	lfs      f0, lbl_80518F60@sda21(r2)
	fmadds   f1, f27, f27, f1
	fmuls    f2, f25, f25
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_8019AE98
	ble      lbl_8019AE9C
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8019AE9C

lbl_8019AE98:
	fmr      f31, f0

lbl_8019AE9C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8019AEC0
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f31
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	fmuls    f25, f25, f0
	b        lbl_8019AEC4

lbl_8019AEC0:
	fmr      f31, f0

lbl_8019AEC4:
	lwz      r4, 0x30(r30)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x34(r1)
	lfs      f2, 0x30(r1)
	lfs      f0, 0x2c(r1)
	fsubs    f4, f1, f22
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f3, f2, f23
	fsubs    f2, f0, f24
	fcmpu    cr0, f1, f31
	bne      lbl_8019AF04
	b        lbl_8019AF58

lbl_8019AF04:
	fmuls    f0, f26, f3
	fmadds   f0, f27, f2, f0
	fmadds   f0, f25, f4, f0
	fdivs    f2, f0, f31
	fcmpo    cr0, f2, f1
	bge      lbl_8019AF20
	b        lbl_8019AF58

lbl_8019AF20:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019AF3C
	fmr      f24, f30
	fmr      f23, f29
	fmr      f22, f28
	b        lbl_8019AF58

lbl_8019AF3C:
	fmuls    f0, f2, f31
	fmuls    f2, f25, f0
	fmuls    f1, f27, f0
	fmuls    f0, f26, f0
	fadds    f22, f2, f22
	fadds    f24, f1, f24
	fadds    f23, f0, f23

lbl_8019AF58:
	mr       r3, r30
	bl       crMakeRefs__Q26PikiAI11ActPathMoveFv
	stfs     f24, 0x8c(r30)
	stfs     f23, 0x90(r30)
	stfs     f22, 0x94(r30)
	b        lbl_8019AF78

lbl_8019AF70:
	mr       r3, r30
	bl       crMakeRefs__Q26PikiAI11ActPathMoveFv

lbl_8019AF78:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	psq_l    f25, 280(r1), 0, qr0
	lfd      f25, 0x110(r1)
	psq_l    f24, 264(r1), 0, qr0
	lfd      f24, 0x100(r1)
	psq_l    f23, 248(r1), 0, qr0
	lfd      f23, 0xf0(r1)
	psq_l    f22, 232(r1), 0, qr0
	lfd      f22, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r0, 0x184(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019AFE4
 * Size:	000080
 */
void PikiAI::ActPathMove::crMakeRefs(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r31, r29

lbl_8019B008:
	lwz      r0, 0x70(r29)
	addi     r5, r30, -1
	mr       r4, r29
	addi     r3, r1, 8
	add      r5, r0, r5
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f0, 8(r1)
	addi     r30, r30, 1
	cmpwi    r30, 4
	stfs     f0, 0x74(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x78(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x7c(r31)
	addi     r31, r31, 0xc
	blt      lbl_8019B008
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
 * Address:	8019B064
 * Size:	000C54
 */
void PikiAI::ActPathMove::crMove(void)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	mr       r31, r3
	addi     r3, r1, 0x7c
	lwz      r5, 0x70(r31)
	mr       r4, r31
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lwz      r0, 0x70(r31)
	lfs      f28, 0x7c(r1)
	cmpwi    r0, -1
	lfs      f27, 0x80(r1)
	lfs      f26, 0x84(r1)
	lfs      f31, 0x8c(r31)
	lfs      f29, 0x90(r31)
	lfs      f22, 0x94(r31)
	bne      lbl_8019B168
	lwz      r0, 0x4c(r31)
	cmpwi    r0, 1
	bgt      lbl_8019B110
	li       r0, 1
	b        lbl_8019B160

lbl_8019B110:
	lwz      r3, 0x48(r31)
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_8019B140
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r4)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B144

lbl_8019B140:
	li       r3, 0

lbl_8019B144:
	cmplwi   r3, 0
	bne      lbl_8019B154
	li       r0, 1
	b        lbl_8019B160

lbl_8019B154:
	lbz      r0, 0x34(r3)
	clrlwi   r0, r0, 0x1f
	xori     r0, r0, 1

lbl_8019B160:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8019B250

lbl_8019B168:
	lwz      r3, 0x70(r31)
	cmpwi    r3, -1
	beq      lbl_8019B378
	addic.   r3, r3, 1
	blt      lbl_8019B188
	lwz      r0, 0x4c(r31)
	cmpw     r3, r0
	blt      lbl_8019B190

lbl_8019B188:
	li       r0, 1
	b        lbl_8019B248

lbl_8019B190:
	cmpwi    r3, 0
	lwz      r6, 0x48(r31)
	li       r4, 0
	ble      lbl_8019B200
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019B1E8
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019B1E8

lbl_8019B1C0:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019B1C0

lbl_8019B1E8:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019B200

lbl_8019B1F8:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B1F8

lbl_8019B200:
	cmplwi   r6, 0
	beq      lbl_8019B228
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B22C

lbl_8019B228:
	li       r3, 0

lbl_8019B22C:
	cmplwi   r3, 0
	bne      lbl_8019B23C
	li       r0, 1
	b        lbl_8019B248

lbl_8019B23C:
	lbz      r0, 0x34(r3)
	clrlwi   r0, r0, 0x1f
	xori     r0, r0, 1

lbl_8019B248:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8019B378

lbl_8019B250:
	lwz      r3, 0x70(r31)
	cmpwi    r3, -1
	bne      lbl_8019B298
	lwz      r3, 0x48(r31)
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_8019B28C
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r4)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B290

lbl_8019B28C:
	li       r3, 0

lbl_8019B290:
	stw      r3, 0x64(r31)
	b        lbl_8019B338

lbl_8019B298:
	addic.   r5, r3, 1
	lwz      r6, 0x48(r31)
	li       r3, 0
	ble      lbl_8019B308
	cmpwi    r5, 8
	addi     r4, r5, -8
	ble      lbl_8019B2F0
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_8019B2F0

lbl_8019B2C8:
	lwz      r4, 0xc(r6)
	addi     r3, r3, 8
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r6, 0xc(r4)
	bdnz     lbl_8019B2C8

lbl_8019B2F0:
	subf     r0, r3, r5
	mtctr    r0
	cmpw     r3, r5
	bge      lbl_8019B308

lbl_8019B300:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B300

lbl_8019B308:
	cmplwi   r6, 0
	beq      lbl_8019B330
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B334

lbl_8019B330:
	li       r3, 0

lbl_8019B334:
	stw      r3, 0x64(r31)

lbl_8019B338:
	li       r0, 3
	addi     r3, r1, 0x70
	sth      r0, 0x1e(r31)
	lwz      r4, 0x30(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x70(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f1, 0x58(r31)
	lfs      f1, 0x74(r1)
	stfs     f1, 0x5c(r31)
	lfs      f1, 0x78(r1)
	stfs     f1, 0x60(r31)
	stfs     f0, 0x68(r31)

lbl_8019B378:
	lwz      r4, 0x30(r31)
	addi     r3, r1, 0x64
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f23, 0x64(r1)
	fmr      f1, f31
	lfs      f24, 0x6c(r1)
	fmr      f2, f22
	fmr      f3, f23
	lfs      f25, 0x68(r1)
	fmr      f4, f24
	bl       qdist2__Fffff
	lfs      f0, lbl_80518F70@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8019B550
	lwz      r3, 0x4c(r31)
	lwz      r4, 0x70(r31)
	addi     r0, r3, -2
	cmpw     r4, r0
	blt      lbl_8019B48C
	li       r0, 2
	lfs      f1, lbl_80518F64@sda21(r2)
	sth      r0, 0x1e(r31)
	addi     r3, r1, 0x58
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x58(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x5c(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x60(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019B448
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019B44C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019B44C

lbl_8019B448:
	fmr      f2, f1

lbl_8019B44C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019B484
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019B484:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019B48C:
	addi     r0, r4, 1
	mr       r3, r31
	stw      r0, 0x70(r31)
	bl       crMakeRefs__Q26PikiAI11ActPathMoveFv
	lfs      f1, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x4c
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x4c(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x50(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019B50C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019B510
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019B510

lbl_8019B50C:
	fmr      f2, f1

lbl_8019B510:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019B548
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019B548:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019B550:
	lwz      r4, 0x70(r31)
	mr       r3, r31
	bl       contextCheck__Q26PikiAI11ActPathMoveFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019B5AC
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	stfs     f0, 0xb4(r31)
	stfs     f0, 0xb8(r31)
	lwz      r4, 0x20(r31)
	cmplwi   r4, 0
	beq      lbl_8019B590
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x20(r31)

lbl_8019B590:
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x34(r31)
	li       r4, 1
	bl       initPathfinding__Q26PikiAI11ActPathMoveFb
	li       r3, 0
	b        lbl_8019BC54

lbl_8019B5AC:
	fsubs    f30, f29, f27
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f29, f22, f26
	fsubs    f31, f31, f28
	fmuls    f1, f30, f30
	fmuls    f2, f29, f29
	fmadds   f1, f31, f31, f1
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	ble      lbl_8019B5E4
	ble      lbl_8019B5E8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019B5E8

lbl_8019B5E4:
	fmr      f3, f0

lbl_8019B5E8:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019B60C
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f3
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	b        lbl_8019B610

lbl_8019B60C:
	fmr      f3, f0

lbl_8019B610:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019B63C
	fsubs    f0, f25, f27
	fsubs    f1, f23, f28
	fsubs    f2, f24, f26
	fmuls    f0, f30, f0
	fmadds   f0, f31, f1, f0
	fmadds   f0, f29, f2, f0
	fdivs    f27, f0, f3
	b        lbl_8019B640

lbl_8019B63C:
	lfs      f27, lbl_80518F64@sda21(r2)

lbl_8019B640:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f27, f0
	bge      lbl_8019B650
	fmr      f27, f0

lbl_8019B650:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_8019B660
	fmr      f27, f0

lbl_8019B660:
	fmuls    f0, f27, f3
	lfs      f25, lbl_80518F60@sda21(r2)
	fmuls    f1, f29, f0
	fmuls    f0, f31, f0
	fadds    f1, f1, f26
	fadds    f0, f0, f28
	fsubs    f24, f1, f24
	fsubs    f23, f0, f23
	fmuls    f1, f24, f24
	fmadds   f0, f23, f23, f25
	fadds    f28, f1, f0
	fcmpo    cr0, f28, f25
	ble      lbl_8019B6A4
	ble      lbl_8019B6A8
	frsqrte  f0, f28
	fmuls    f28, f0, f28
	b        lbl_8019B6A8

lbl_8019B6A4:
	fmr      f28, f25

lbl_8019B6A8:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8019B6CC
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f28
	fmuls    f23, f23, f0
	fmuls    f25, f25, f0
	fmuls    f24, f24, f0
	b        lbl_8019B6D0

lbl_8019B6CC:
	fmr      f28, f0

lbl_8019B6D0:
	lwz      r3, 0x70(r31)
	cmpwi    r3, 0
	bge      lbl_8019B728
	lwz      r3, 0x30(r31)
	addi     r4, r1, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8019B720
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x742
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019B720:
	lfs      f26, 0x24(r1)
	b        lbl_8019B7EC

lbl_8019B728:
	lwz      r0, 0x4c(r31)
	cmpw     r3, r0
	blt      lbl_8019B73C
	lfs      f26, lbl_80518FC8@sda21(r2)
	b        lbl_8019B7EC

lbl_8019B73C:
	cmpwi    r3, 0
	lwz      r6, 0x48(r31)
	li       r4, 0
	ble      lbl_8019B7AC
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019B794
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019B794

lbl_8019B76C:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019B76C

lbl_8019B794:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019B7AC

lbl_8019B7A4:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B7A4

lbl_8019B7AC:
	cmplwi   r6, 0
	beq      lbl_8019B7D4
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B7D8

lbl_8019B7D4:
	li       r3, 0

lbl_8019B7D8:
	cmplwi   r3, 0
	bne      lbl_8019B7E8
	lfs      f26, lbl_80518FC8@sda21(r2)
	b        lbl_8019B7EC

lbl_8019B7E8:
	lfs      f26, 0x58(r3)

lbl_8019B7EC:
	lwz      r3, 0x70(r31)
	addic.   r3, r3, 1
	bge      lbl_8019B844
	lwz      r3, 0x30(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8019B83C
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x742
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019B83C:
	lfs      f0, 0x14(r1)
	b        lbl_8019B908

lbl_8019B844:
	lwz      r0, 0x4c(r31)
	cmpw     r3, r0
	blt      lbl_8019B858
	lfs      f0, lbl_80518FC8@sda21(r2)
	b        lbl_8019B908

lbl_8019B858:
	cmpwi    r3, 0
	lwz      r6, 0x48(r31)
	li       r4, 0
	ble      lbl_8019B8C8
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019B8B0
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019B8B0

lbl_8019B888:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019B888

lbl_8019B8B0:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019B8C8

lbl_8019B8C0:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B8C0

lbl_8019B8C8:
	cmplwi   r6, 0
	beq      lbl_8019B8F0
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B8F4

lbl_8019B8F0:
	li       r3, 0

lbl_8019B8F4:
	cmplwi   r3, 0
	bne      lbl_8019B904
	lfs      f0, lbl_80518FC8@sda21(r2)
	b        lbl_8019B908

lbl_8019B904:
	lfs      f0, 0x58(r3)

lbl_8019B908:
	lfs      f3, lbl_80518F64@sda21(r2)
	fmuls    f1, f27, f0
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f2, f3, f27
	fmadds   f2, f2, f26, f1
	fcmpu    cr0, f0, f2
	bne      lbl_8019B928
	fmr      f2, f3

lbl_8019B928:
	fabs     f1, f28
	lfs      f0, lbl_80518FCC@sda21(r2)
	frsp     f1, f1
	fdivs    f26, f1, f2
	fcmpo    cr0, f26, f0
	bge      lbl_8019B944
	lfs      f26, lbl_80518F60@sda21(r2)

lbl_8019B944:
	lfs      f0, lbl_80518FD0@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_8019B96C
	fabs     f1, f28
	lfs      f0, lbl_80518FD4@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019B96C
	li       r3, 1
	b        lbl_8019BC54

lbl_8019B96C:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_8019B980
	fmr      f26, f0
	b        lbl_8019B990

lbl_8019B980:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f26, f0
	bge      lbl_8019B990
	fmr      f26, f0

lbl_8019B990:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f27, f0
	cror     2, 1, 2
	bne      lbl_8019BB34
	lwz      r3, 0x4c(r31)
	lwz      r4, 0x70(r31)
	addi     r0, r3, -2
	cmpw     r4, r0
	blt      lbl_8019BA70
	li       r0, 2
	fmr      f1, f27
	sth      r0, 0x1e(r31)
	addi     r3, r1, 0x40
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x40(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x48(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019BA2C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019BA30
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019BA30

lbl_8019BA2C:
	fmr      f2, f1

lbl_8019BA30:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019BA68
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019BA68:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019BA70:
	addi     r0, r4, 1
	mr       r3, r31
	stw      r0, 0x70(r31)
	bl       crMakeRefs__Q26PikiAI11ActPathMoveFv
	lfs      f1, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x34
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x34(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x38(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019BAF0
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019BAF4
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019BAF4

lbl_8019BAF0:
	fmr      f2, f1

lbl_8019BAF4:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019BB2C
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019BB2C:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019BB34:
	fmr      f1, f27
	addi     r3, r1, 0x28
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x28(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019BBA4
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019BBA8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019BBA8

lbl_8019BBA4:
	fmr      f2, f1

lbl_8019BBA8:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019BBE0
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019BBE0:
	lfs      f0, lbl_80518F64@sda21(r2)
	fmuls    f2, f23, f26
	lfs      f3, 0xb0(r31)
	fmuls    f4, f25, f26
	fsubs    f7, f0, f26
	lfs      f5, 0xb4(r31)
	lfs      f6, 0xb8(r31)
	fmuls    f1, f24, f26
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f3, f3, f7
	fmuls    f5, f5, f7
	fmuls    f6, f6, f7
	fadds    f2, f3, f2
	fadds    f3, f5, f4
	fadds    f1, f6, f1
	stfs     f2, 0xb0(r31)
	stfs     f3, 0xb4(r31)
	stfs     f1, 0xb8(r31)
	lfs      f1, 0xb8(r31)
	lfs      f2, 0xb0(r31)
	fmuls    f1, f1, f29
	fmadds   f1, f2, f31, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8019BC50
	stfs     f31, 0xb0(r31)
	stfs     f30, 0xb4(r31)
	stfs     f29, 0xb8(r31)

lbl_8019BC50:
	li       r3, 1

lbl_8019BC54:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	lwz      r0, 0x134(r1)
	lwz      r31, 0x8c(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019BCB8
 * Size:	00007C
 */
PikiAI::ActStickAttack::ActStickAttack(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8019BCE8
	addi     r0, r31, 0x24
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x24(r31)

lbl_8019BCE8:
	mr       r3, r31
	mr       r4, r5
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI14ActStickAttack@ha
	addi     r0, r31, 0x24
	addi     r4, r3, __vt__Q26PikiAI14ActStickAttack@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r5, r4, 0x40
	lwz      r4, 0xc(r31)
	stw      r5, 0(r4)
	lwz      r4, 0xc(r31)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019BD34
 * Size:	0001F0
 */
void PikiAI::ActStickAttack::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	or.      r28, r4, r4
	lis      r4, lbl_8047F070@ha
	addi     r30, r4, lbl_8047F070@l
	beq      lbl_8019BD98
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0xd0
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_8019BD98
	li       r29, 1

lbl_8019BD98:
	clrlwi.  r0, r29, 0x18
	bne      lbl_8019BDB4
	addi     r3, r30, 0x34
	addi     r5, r30, 0x48
	li       r4, 0x91b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019BDB4:
	lwz      r3, 8(r28)
	li       r0, 0x1b
	stw      r3, 0x10(r31)
	lfs      f0, 4(r28)
	stfs     f0, 0x14(r31)
	lbz      r3, 0x10(r28)
	stb      r3, 0x1d(r31)
	stw      r0, 0x20(r31)
	lwz      r3, 4(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019BE20
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_8019BDF4
	lwz      r6, 0xc(r31)

lbl_8019BDF4:
	lwz      r3, 4(r31)
	li       r4, 0x1b
	li       r5, 0x1b
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x19(r31)
	b        lbl_8019BEA0

lbl_8019BE20:
	lwz      r4, 0xc(r28)
	cmpwi    r4, -1
	bne      lbl_8019BE68
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_8019BE3C
	lwz      r6, 0xc(r31)

lbl_8019BE3C:
	lwz      r3, 4(r31)
	li       r4, 0x1b
	li       r5, 0x1b
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x19(r31)
	b        lbl_8019BEA0

lbl_8019BE68:
	cmplwi   r31, 0
	stw      r4, 0x20(r31)
	mr       r6, r31
	beq      lbl_8019BE7C
	lwz      r6, 0xc(r31)

lbl_8019BE7C:
	lwz      r3, 4(r31)
	mr       r5, r4
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x19(r31)

lbl_8019BEA0:
	li       r0, 0
	lfs      f0, lbl_80518F60@sda21(r2)
	stb      r0, 0x18(r31)
	stb      r0, 0x1a(r31)
	stb      r0, 0x1b(r31)
	stb      r0, 0x1c(r31)
	lwz      r3, 4(r31)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lwz      r3, 4(r31)
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019BEF0
	lwz      r3, 4(r31)
	li       r5, 0x2852
	lwz      r4, 0x10(r31)
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	b        lbl_8019BF04

lbl_8019BEF0:
	lwz      r3, 4(r31)
	li       r5, 0x2806
	lwz      r4, 0x10(r31)
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb

lbl_8019BF04:
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
 * Address:	8019BF24
 * Size:	000164
 */
void PikiAI::ActStickAttack::exec(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019BF64
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	li       r3, 0
	b        lbl_8019C074

lbl_8019BF64:
	lbz      r0, 0x1a(r31)
	cmplwi   r0, 0
	beq      lbl_8019BF78
	li       r3, 2
	b        lbl_8019C074

lbl_8019BF78:
	lwz      r3, 4(r31)
	lwz      r4, 0x20(r31)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019BF94
	li       r3, 2
	b        lbl_8019C074

lbl_8019BF94:
	lbz      r0, 0x19(r31)
	cmplwi   r0, 0
	beq      lbl_8019BFB8
	lwz      r3, 4(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019BFB8
	li       r3, 2
	b        lbl_8019C074

lbl_8019BFB8:
	lbz      r0, 0x18(r31)
	cmplwi   r0, 0
	beq      lbl_8019C070
	lbz      r0, 0x1b(r31)
	cmplwi   r0, 0
	bne      lbl_8019C070
	lwz      r3, 4(r31)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game14InteractAttack@ha
	lfs      f0, 0x14(r31)
	lwz      r6, 0xf8(r3)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game14InteractAttack@l
	stw      r5, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r6, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019C020
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f0, 0x10(r1)

lbl_8019C020:
	li       r0, 1
	addi     r4, r1, 8
	stb      r0, 0x1b(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019C054
	li       r0, 1
	stb      r0, 0x1c(r31)
	b        lbl_8019C070

lbl_8019C054:
	li       r0, 0
	li       r5, 0x2807
	stb      r0, 0x1c(r31)
	li       r6, 1
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb

lbl_8019C070:
	li       r3, 1

lbl_8019C074:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C088
 * Size:	000650
 */
void PikiAI::ActStickAttack::createEfx(void)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r31, r3
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_8019C0DC
	lwz      r4, 4(r31)
	addi     r3, r1, 0x7c
	lfs      f1, 0x260(r4)
	lfs      f2, 0x264(r4)
	lfs      f0, 0x25c(r4)
	stfs     f0, 0x7c(r1)
	stfs     f1, 0x80(r1)
	stfs     f2, 0x84(r1)
	bl       "createSimpleInattack__3efxFR10Vector3<f>"
	b        lbl_8019C6B8

lbl_8019C0DC:
	lbz      r4, 0x1d(r31)
	cmplwi   r4, 7
	bgt      lbl_8019C6B8
	lis      r3, lbl_804B4AB4@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804B4AB4@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_8019C100

lbl_8019C100:
	cmplwi   r4, 7
	beq      lbl_8019C22C
	lwz      r3, 4(r31)
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019C1A4
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx11TPkAttackDP@ha
	stw      r0, 0x70(r1)
	addi     r4, r4, __vt__Q23efx8TSimple1@l
	li       r0, 0x149
	li       r7, 0
	stw      r4, 0x70(r1)
	addi     r6, r3, __vt__Q23efx11TPkAttackDP@l
	lis      r3, "zero__10Vector3<f>"@ha
	lis      r4, __vt__Q23efx3Arg@ha
	sth      r0, 0x74(r1)
	addi     r5, r3, "zero__10Vector3<f>"@l
	lfs      f2, 0(r5)
	addi     r0, r4, __vt__Q23efx3Arg@l
	stw      r7, 0x78(r1)
	addi     r3, r1, 0x70
	lfs      f1, 4(r5)
	addi     r4, r1, 0x60
	stw      r6, 0x70(r1)
	lfs      f0, 8(r5)
	lwz      r5, 4(r31)
	lfs      f3, 0x25c(r5)
	lfs      f4, 0x260(r5)
	lfs      f5, 0x264(r5)
	stfs     f2, 0x64(r1)
	stfs     f1, 0x68(r1)
	stfs     f0, 0x6c(r1)
	stw      r0, 0x60(r1)
	stfs     f3, 0x64(r1)
	stfs     f4, 0x68(r1)
	stfs     f5, 0x6c(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	b        lbl_8019C22C

lbl_8019C1A4:
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx10PikiDamage@ha
	stw      r0, 0x54(r1)
	addi     r4, r4, __vt__Q23efx8TSimple1@l
	li       r0, 0x148
	li       r7, 0
	stw      r4, 0x54(r1)
	addi     r6, r3, __vt__Q23efx10PikiDamage@l
	lis      r3, "zero__10Vector3<f>"@ha
	lis      r4, __vt__Q23efx3Arg@ha
	sth      r0, 0x58(r1)
	addi     r5, r3, "zero__10Vector3<f>"@l
	lfs      f2, 0(r5)
	addi     r0, r4, __vt__Q23efx3Arg@l
	stw      r7, 0x5c(r1)
	addi     r3, r1, 0x54
	lfs      f1, 4(r5)
	addi     r4, r1, 0x44
	stw      r6, 0x54(r1)
	lfs      f0, 8(r5)
	lwz      r5, 4(r31)
	lfs      f3, 0x25c(r5)
	lfs      f4, 0x260(r5)
	lfs      f5, 0x264(r5)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x44(r1)
	stfs     f3, 0x48(r1)
	stfs     f4, 0x4c(r1)
	stfs     f5, 0x50(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg

lbl_8019C22C:
	lwz      r3, 4(r31)
	li       r5, 0x2808
	lwz      r4, 0x10(r31)
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	b        lbl_8019C6B8
	.global  lbl_8019C244

lbl_8019C244:
	lwz      r3, 4(r31)
	lbz      r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
	lfs      f1, 0x260(r3)
	lfs      f2, 0x264(r3)
	cmplwi   r0, 0
	lfs      f0, 0x25c(r3)
	stfs     f0, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f2, 0x40(r1)
	beq      lbl_8019C32C
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8019C32C
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lis      r0, 0x4330
	lwz      r3, 0(r3)
	stw      r0, 0x88(r1)
	subfic   r0, r3, 0x64
	lfd      f2, lbl_80518FA8@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_80518FA0@sda21(r2)
	stw      r0, 0x8c(r1)
	lfd      f1, 0x88(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f2, lbl_80518FA8@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f0, lbl_80518FD8@sda21(r2)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_8019C6B8
	addi     r3, r1, 0x38
	bl       "createSimpleBridgeAttack__3efxFR10Vector3<f>"
	lwz      r3, 4(r30)
	li       r5, 0x2827
	li       r6, 2
	addi     r0, r3, 1
	stw      r0, 4(r30)
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	b        lbl_8019C6B8

lbl_8019C32C:
	addi     r3, r1, 0x38
	bl       "createSimpleBridgeAttack__3efxFR10Vector3<f>"
	b        lbl_8019C6B8
	.global  lbl_8019C338

lbl_8019C338:
	lwz      r3, 4(r31)
	lbz      r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
	lfs      f1, 0x260(r3)
	lfs      f2, 0x264(r3)
	cmplwi   r0, 0
	lfs      f0, 0x25c(r3)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	beq      lbl_8019C420
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8019C420
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lis      r0, 0x4330
	lwz      r3, 0(r3)
	stw      r0, 0x90(r1)
	subfic   r0, r3, 0x64
	lfd      f2, lbl_80518FA8@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_80518FA0@sda21(r2)
	stw      r0, 0x94(r1)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x8c(r1)
	lfd      f2, lbl_80518FA8@sda21(r2)
	stw      r0, 0x88(r1)
	lfs      f0, lbl_80518FD8@sda21(r2)
	lfd      f1, 0x88(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_8019C6B8
	addi     r3, r1, 0x2c
	bl       "createSimpleGate2Attack__3efxFR10Vector3<f>"
	lwz      r3, 4(r31)
	li       r5, 0x2824
	lwz      r4, 0x10(r31)
	li       r6, 2
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	lwz      r3, 4(r30)
	addi     r0, r3, 1
	stw      r0, 4(r30)
	b        lbl_8019C6B8

lbl_8019C420:
	addi     r3, r1, 0x2c
	bl       "createSimpleGate2Attack__3efxFR10Vector3<f>"
	b        lbl_8019C6B8
	.global  lbl_8019C42C

lbl_8019C42C:
	lwz      r3, 4(r31)
	lbz      r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
	lfs      f1, 0x260(r3)
	lfs      f2, 0x264(r3)
	cmplwi   r0, 0
	lfs      f0, 0x25c(r3)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	beq      lbl_8019C514
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8019C514
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lis      r0, 0x4330
	lwz      r3, 0(r3)
	stw      r0, 0x90(r1)
	subfic   r0, r3, 0x64
	lfd      f2, lbl_80518FA8@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_80518FA0@sda21(r2)
	stw      r0, 0x94(r1)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x8c(r1)
	lfd      f2, lbl_80518FA8@sda21(r2)
	stw      r0, 0x88(r1)
	lfs      f0, lbl_80518FD8@sda21(r2)
	lfd      f1, 0x88(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_8019C6B8
	addi     r3, r1, 0x20
	bl       "createSimpleGate1Attack__3efxFR10Vector3<f>"
	lwz      r3, 4(r31)
	li       r5, 0x2825
	lwz      r4, 0x10(r31)
	li       r6, 2
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	lwz      r3, 4(r30)
	addi     r0, r3, 1
	stw      r0, 4(r30)
	b        lbl_8019C6B8

lbl_8019C514:
	addi     r3, r1, 0x20
	bl       "createSimpleGate1Attack__3efxFR10Vector3<f>"
	b        lbl_8019C6B8
	.global  lbl_8019C520

lbl_8019C520:
	lwz      r3, 4(r31)
	lbz      r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
	lfs      f1, 0x260(r3)
	lfs      f2, 0x264(r3)
	cmplwi   r0, 0
	lfs      f0, 0x25c(r3)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	beq      lbl_8019C608
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8019C608
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x150(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lis      r0, 0x4330
	lwz      r3, 0(r3)
	stw      r0, 0x90(r1)
	subfic   r0, r3, 0x64
	lfd      f2, lbl_80518FA8@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_80518FA0@sda21(r2)
	stw      r0, 0x94(r1)
	lfd      f1, 0x90(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x8c(r1)
	lfd      f2, lbl_80518FA8@sda21(r2)
	stw      r0, 0x88(r1)
	lfs      f0, lbl_80518FD8@sda21(r2)
	lfd      f1, 0x88(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_8019C6B8
	addi     r3, r1, 0x14
	bl       "createSimpleGate3Attack__3efxFR10Vector3<f>"
	lwz      r3, 4(r31)
	li       r5, 0x284d
	lwz      r4, 0x10(r31)
	li       r6, 2
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	lwz      r3, 4(r30)
	addi     r0, r3, 1
	stw      r0, 4(r30)
	b        lbl_8019C6B8

lbl_8019C608:
	addi     r3, r1, 0x14
	bl       "createSimpleGate3Attack__3efxFR10Vector3<f>"
	b        lbl_8019C6B8
	.global  lbl_8019C614

lbl_8019C614:
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lfs      f1, 0x260(r4)
	lfs      f2, 0x264(r4)
	lfs      f0, 0x25c(r4)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	bl       "createSimpleStoneAttack__3efxFR10Vector3<f>"
	lwz      r4, 0x10(r31)
	lhz      r0, 0x128(r4)
	cmplwi   r0, 0x410
	bne      lbl_8019C65C
	lwz      r3, 4(r31)
	li       r5, 0x2826
	li       r6, 2
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	b        lbl_8019C6B8

lbl_8019C65C:
	cmplwi   r0, 0x412
	bne      lbl_8019C678
	lwz      r3, 4(r31)
	li       r5, 0x3802
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	b        lbl_8019C6B8

lbl_8019C678:
	cmplwi   r0, 0x40c
	bne      lbl_8019C6B8
	lwz      r3, 4(r31)
	li       r5, 0x2823
	li       r6, 2
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	b        lbl_8019C6B8
	.global  lbl_8019C694

lbl_8019C694:
	lwz      r3, 4(r31)
	lwz      r3, 0x258(r3)
	lwz      r3, 0xc(r3)
	bl       "createSimpleDig__3efxFR10Vector3<f>"
	lwz      r3, 4(r31)
	li       r5, 0x284f
	lwz      r4, 0x10(r31)
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId

lbl_8019C6B8:
	psq_l    f31, 168(r1), 0, qr0
	lwz      r0, 0xb4(r1)
	lfd      f31, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C6D8
 * Size:	000080
 */
void PikiAI::ActStickAttack::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 0x64
	beq      lbl_8019C744
	bge      lbl_8019C710
	cmpwi    r0, 2
	beq      lbl_8019C71C
	bge      lbl_8019C704
	b        lbl_8019C748

lbl_8019C704:
	cmpwi    r0, 4
	bge      lbl_8019C748
	b        lbl_8019C728

lbl_8019C710:
	cmpwi    r0, 0x3e8
	beq      lbl_8019C738
	b        lbl_8019C748

lbl_8019C71C:
	li       r0, 1
	stb      r0, 0x18(r3)
	b        lbl_8019C748

lbl_8019C728:
	li       r0, 0
	stb      r0, 0x18(r3)
	stb      r0, 0x1b(r3)
	b        lbl_8019C748

lbl_8019C738:
	li       r0, 1
	stb      r0, 0x1a(r3)
	b        lbl_8019C748

lbl_8019C744:
	bl       createEfx__Q26PikiAI14ActStickAttackFv

lbl_8019C748:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C758
 * Size:	000024
 */
void PikiAI::ActStickAttack::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	bl       endStick__Q24Game8CreatureFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C77C
 * Size:	00003C
 */
PikiAI::ActClimb::ActClimb(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r4, __vt__Q26PikiAI8ActClimb@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q26PikiAI8ActClimb@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C7B8
 * Size:	000100
 */
void PikiAI::ActClimb::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r5, 0x14
	li       r6, 0
	stw      r0, 0x34(r1)
	li       r7, 0
	stw      r31, 0x2c(r1)
	mr       r31, r4
	li       r4, 0x14
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	stw      r0, 0xc(r30)
	lfs      f0, 8(r31)
	stfs     f0, 0x10(r30)
	lbz      r0, 0xc(r31)
	stb      r0, 0x20(r30)
	lwz      r3, 0xc(r30)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 1
	beq      lbl_8019C83C
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0xa31
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019C83C:
	lwz      r3, 0xc(r30)
	addi     r4, r1, 8
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 8
	addi     r4, r30, 0x14
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f0, 0x14(r30)
	fneg     f0, f0
	stfs     f0, 0x14(r30)
	lfs      f0, 0x18(r30)
	fneg     f0, f0
	stfs     f0, 0x18(r30)
	lfs      f0, 0x1c(r30)
	fneg     f0, f0
	stfs     f0, 0x1c(r30)
	lfs      f3, 0x10(r30)
	lfs      f0, 0x14(r30)
	lfs      f1, 0x18(r30)
	lfs      f2, 0x1c(r30)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x14(r30)
	stfs     f1, 0x18(r30)
	stfs     f2, 0x1c(r30)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C8B8
 * Size:	0000E4
 */
void PikiAI::ActClimb::exec(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	lfs      f0, 0x14(r31)
	stfs     f0, 0x200(r3)
	lfs      f0, 0x18(r31)
	stfs     f0, 0x204(r3)
	lfs      f0, 0x1c(r31)
	stfs     f0, 0x208(r3)
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019C920
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518F90@sda21(r2)
	lfs      f0, 0x200(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x200(r3)
	lfs      f0, 0x204(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x204(r3)
	lfs      f0, 0x208(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x208(r3)

lbl_8019C920:
	lwz      r3, 4(r31)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, 0x54(r4)
	lwz      r12, 0x1d0(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	beq      lbl_8019C964
	lwz      r3, 4(r31)
	lfs      f0, lbl_80518F60@sda21(r2)
	lfs      f1, 0x108(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8019C984
	li       r3, 0
	b        lbl_8019C988

lbl_8019C964:
	lwz      r3, 4(r31)
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f1, 0x108(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8019C984
	li       r3, 0
	b        lbl_8019C988

lbl_8019C984:
	li       r3, 1

lbl_8019C988:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C99C
 * Size:	000004
 */
void PikiAI::ActClimb::cleanup(void) { }

/*
 * --INFO--
 * Address:	8019C9A0
 * Size:	00003C
 */
PikiAI::ActGather::ActGather(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r4, __vt__Q26PikiAI9ActGather@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q26PikiAI9ActGather@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019C9DC
 * Size:	0000E0
 */
void PikiAI::ActGather::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	lis      r4, lbl_8047F070@ha
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	addi     r31, r4, lbl_8047F070@l
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0xe8
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_8019CA44
	addi     r3, r31, 0x34
	addi     r5, r31, 0x48
	li       r4, 0xa6d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019CA44:
	lfs      f0, 4(r30)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	stfs     f0, 0xc(r29)
	li       r7, 0
	lfs      f0, 8(r30)
	stfs     f0, 0x10(r29)
	lfs      f0, 0xc(r30)
	stfs     f0, 0x14(r29)
	lfs      f0, 0x10(r30)
	stfs     f0, 0x18(r29)
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_80518FDC@sda21(r2)
	lfs      f0, lbl_80518FE0@sda21(r2)
	stfs     f1, 0x1c(r29)
	lfs      f1, 0x18(r29)
	fmuls    f0, f1, f0
	stfs     f0, 0x18(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019CABC
 * Size:	000154
 */
void PikiAI::ActGather::exec(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x10(r31)
	lfs      f2, 0xc(r1)
	lfs      f1, 0xc(r31)
	lfs      f0, 8(r1)
	fsubs    f4, f3, f2
	lfs      f3, 0x14(r31)
	fsubs    f2, f1, f0
	lfs      f0, 0x10(r1)
	fmuls    f5, f4, f4
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f3, f3, f0
	stfs     f4, 0x18(r1)
	fmuls    f0, f2, f2
	stfs     f2, 0x14(r1)
	fmuls    f4, f3, f3
	stfs     f3, 0x1c(r1)
	fadds    f0, f0, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019CB54
	fmadds   f0, f2, f2, f5
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8019CB58
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8019CB58

lbl_8019CB54:
	fmr      f4, f1

lbl_8019CB58:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8019CB94
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_8019CB98

lbl_8019CB94:
	fmr      f4, f0

lbl_8019CB98:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x1c(r31)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x18(r31)
	fcmpo    cr0, f4, f0
	blt      lbl_8019CBCC
	lfs      f1, 0x1c(r31)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8019CBE8

lbl_8019CBCC:
	lwz      r4, 4(r31)
	li       r3, 0
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	b        lbl_8019CBFC

lbl_8019CBE8:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x14
	lfs      f1, lbl_80518FE0@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1

lbl_8019CBFC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019CC10
 * Size:	000004
 */
void PikiAI::ActGather::cleanup(void) { }

/*
 * --INFO--
 * Address:	8019CC14
 * Size:	00003C
 */
PikiAI::ActFollowVectorField::ActFollowVectorField(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r4, __vt__Q26PikiAI20ActFollowVectorField@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q26PikiAI20ActFollowVectorField@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019CC50
 * Size:	000060
 */
void PikiAI::ActFollowVectorField::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x1e
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r7, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0x1e
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	stw      r0, 0xc(r30)
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
 * Address:	8019CCB0
 * Size:	000080
 */
void PikiAI::ActFollowVectorField::exec(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	addi     r4, r1, 0x14
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019CD08
	li       r3, 2
	b        lbl_8019CD1C

lbl_8019CD08:
	lwz      r3, 4(r31)
	addi     r4, r1, 8
	lfs      f1, lbl_80518F64@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1

lbl_8019CD1C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019CD30
 * Size:	000004
 */
void PikiAI::ActFollowVectorField::cleanup(void) { }

/*
 * --INFO--
 * Address:	8019CD34
 * Size:	000028
 */
void __sinit_aiPrimitives_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B4AA8@ha
	stw      r0, lbl_805159E0@sda21(r13)
	stfsu    f0, lbl_804B4AA8@l(r3)
	stfs     f0, lbl_805159E4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019CD5C
 * Size:	000014
 */
void @36 @4 @PikiAI::ActStickAttack::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -36
	b        onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent
	*/
}
