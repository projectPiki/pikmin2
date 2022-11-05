#include "types.h"

#include "PikiAI.h"
#include "Game/Piki.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483890
    lbl_80483890:
        .4byte 0x61694261
        .4byte 0x74746C65
        .4byte 0x00000000
        .4byte 0x41637442
        .4byte 0x6174746C
        .4byte 0x65417267
        .4byte 0x00000000
        .4byte 0x61694261
        .4byte 0x74746C65
        .4byte 0x2E637070
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x41707072
        .4byte 0x6F616368
        .4byte 0x506F7341
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI9ActBattle
    __vt__Q26PikiAI9ActBattle:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI9ActBattleFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI9ActBattleFv
        .4byte cleanup__Q26PikiAI9ActBattleFv
        .4byte emotion_success__Q26PikiAI9ActBattleFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI9ActBattleFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI9ActBattleFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte "@32@4@onKeyEvent__Q26PikiAI9ActBattleFRCQ28SysShape8KeyEvent"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A320
    lbl_8051A320:
        .4byte 0x42617474
        .4byte 0x6C650000
    .global lbl_8051A328
    lbl_8051A328:
        .4byte 0x47000000
    .global lbl_8051A32C
    lbl_8051A32C:
        .float 0.5
    .global lbl_8051A330
    lbl_8051A330:
        .4byte 0x3F666666
    .global lbl_8051A334
    lbl_8051A334:
        .4byte 0x42700000
    .global lbl_8051A338
    lbl_8051A338:
        .4byte 0x00000000
    .global lbl_8051A33C
    lbl_8051A33C:
        .4byte 0xC47A0000
    .global lbl_8051A340
    lbl_8051A340:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A348
    lbl_8051A348:
        .4byte 0x41200000
    .global lbl_8051A34C
    lbl_8051A34C:
        .float 1.0
    .global lbl_8051A350
    lbl_8051A350:
        .4byte 0x42480000
    .global lbl_8051A354
    lbl_8051A354:
        .4byte 0x42C80000
    .global lbl_8051A358
    lbl_8051A358:
        .4byte 0x400CCCCD
    .global lbl_8051A35C
    lbl_8051A35C:
        .4byte 0x40200000
    .global lbl_8051A360
    lbl_8051A360:
        .4byte 0xBF800000
        .4byte 0x00000000
*/

extern u32 __vt__Q28SysShape14MotionListener;
extern u32 __vt__Q26PikiAI9ActBattle;
extern "C" void __ct__Q26PikiAI14ActApproachPosFPQ24Game4Piki();
extern "C" void __ct__Q26PikiAI6ActionFPQ24Game4Piki();
extern "C" void* __nw__FUl();
extern char* lbl_8051A320;

/*
 * --INFO--
 * Address:	8022ECB4
 * Size:	0000B8
 */
asm PikiAI::ActBattle::ActBattle(Game::Piki* p)
{
	// clang-format off
nofralloc
 stwu r1, -0x10(r1)
 mflr r0
 stw r0, 0x14(r1)
 extsh. r0, r4
 stw r31, 0xc(r1)
 mr r31, r5
 stw r30, 8(r1)
 mr r30, r3
 beq lbl_8022ECEC
 addi r0, r30, 0x20
 lis r3, __vt__Q28SysShape14MotionListener@ha
 stw r0, 0xc(r30)
 addi r0, r3, __vt__Q28SysShape14MotionListener@l
 stw r0, 0x20(r30)
lbl_8022ECEC:
 mr r3, r30
 mr r4, r31
 bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
 lis r3, __vt__Q26PikiAI9ActBattle@ha
 addi r5, r30, 0x20
 addi r3, r3, __vt__Q26PikiAI9ActBattle@l
 li r4, 0
 stw r3, 0(r30)
 addi r7, r3, 0x40
 la r0, lbl_8051A320 // load address to r0
 li r3, 0x28
 lwz r6, 0xc(r30)
 stw r7, 0(r6)
 lwz r6, 0xc(r30)
 subf r5, r6, r5
 stw r5, 4(r6)
 stb r4, 0x1c(r30)
 stw r0, 8(r30)
 bl __nw__FUl
 or. r0, r3, r3
 beq lbl_8022ED4C
 mr r4, r31
 bl __ct__Q26PikiAI14ActApproachPosFPQ24Game4Piki
 mr r0, r3
lbl_8022ED4C:
 stw r0, 0x18(r30)
 mr r3, r30
 lwz r0, 0x14(r1)
 lwz r31, 0xc(r1)
 lwz r30, 8(r1)
 mtlr r0
 addi r1, r1, 0x10
 blr
	// clang-format on
}

/*
 * --INFO--
 * Address:	8022ED6C
 * Size:	000044
 */
#ifdef LINK_FINISHED
void PikiAI::ActBattle::emotion_success(void)
{
	Game::StateArg arg; // will need to create new derived StateArg struct for this eventually
	arg._00[0] = 1;
	m_piki->m_fsm->transit(m_piki, 19, &arg);
}
#endif

// /*
//  * --INFO--
//  * Address:	8022EDB0
//  * Size:	000300
//  */
// void PikiAI::ActBattle::init(PikiAI::ActionArg*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0xE0(r1)
// 	  mflr      r0
// 	  stw       r0, 0xE4(r1)
// 	  stw       r31, 0xDC(r1)
// 	  mr        r31, r3
// 	  stw       r30, 0xD8(r1)
// 	  stw       r29, 0xD4(r1)
// 	  li        r29, 0
// 	  stw       r28, 0xD0(r1)
// 	  mr.       r28, r4
// 	  lis       r4, 0x8048
// 	  addi      r30, r4, 0x3890
// 	  beq-      .loc_0x64
// 	  mr        r3, r28
// 	  lwz       r12, 0x0(r28)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  addi      r3, r30, 0xC
// 	  bl        -0x164740
// 	  cntlzw    r0, r3
// 	  rlwinm.   r0,r0,27,24,31
// 	  beq-      .loc_0x64
// 	  li        r29, 0x1

// 	.loc_0x64:
// 	  rlwinm.   r0,r29,0,24,31
// 	  bne-      .loc_0x80
// 	  addi      r3, r30, 0x1C
// 	  addi      r5, r30, 0x2C
// 	  li        r4, 0xB3
// 	  crclr     6, 0x6
// 	  bl        -0x2047EC

// 	.loc_0x80:
// 	  lwz       r0, 0x4(r28)
// 	  lis       r5, 0x804B
// 	  lis       r3, 0x804B
// 	  addi      r4, r1, 0x8
// 	  stw       r0, 0x10(r31)
// 	  subi      r5, r5, 0x5D00
// 	  addi      r0, r3, 0x47E8
// 	  lwz       r3, 0x4(r31)
// 	  stw       r5, 0x8(r1)
// 	  stw       r3, 0xC(r1)
// 	  stw       r0, 0x8(r1)
// 	  lwz       r3, 0x10(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1A4(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lbz       r0, 0x8(r28)
// 	  cmplwi    r0, 0
// 	  beq-      .loc_0xDC
// 	  lbz       r0, 0x1C(r31)
// 	  ori       r0, r0, 0x2
// 	  stb       r0, 0x1C(r31)
// 	  b         .loc_0x10C

// 	.loc_0xDC:
// 	  lwz       r3, 0x10(r31)
// 	  bl        -0xE63AC
// 	  lwz       r0, 0x10(r31)
// 	  cmplw     r0, r3
// 	  bne-      .loc_0x100
// 	  lbz       r0, 0x1C(r31)
// 	  ori       r0, r0, 0x2
// 	  stb       r0, 0x1C(r31)
// 	  b         .loc_0x10C

// 	.loc_0x100:
// 	  lbz       r0, 0x1C(r31)
// 	  rlwinm    r0,r0,0,31,29
// 	  stb       r0, 0x1C(r31)

// 	.loc_0x10C:
// 	  mr        r3, r31
// 	  bl        0x770
// 	  li        r0, 0
// 	  addi      r3, r1, 0x1C
// 	  stb       r0, 0x1D(r31)
// 	  lwz       r4, 0x10(r31)
// 	  lwz       r12, 0x0(r4)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r4, 0x4(r31)
// 	  addi      r3, r1, 0x28
// 	  lwz       r12, 0x0(r4)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lfs       f3, 0x28(r1)
// 	  addi      r3, r1, 0x5C
// 	  lfs       f1, 0x1C(r1)
// 	  addi      r4, r1, 0x34
// 	  lfs       f2, 0x2C(r1)
// 	  lfs       f0, 0x20(r1)
// 	  fadds     f4, f3, f1
// 	  lfs       f1, -0x4034(r2)
// 	  fadds     f5, f2, f0
// 	  lfs       f3, 0x30(r1)
// 	  lfs       f2, 0x24(r1)
// 	  fmuls     f4, f4, f1
// 	  lfs       f0, -0x4018(r2)
// 	  fadds     f2, f3, f2
// 	  fmuls     f5, f5, f1
// 	  stfs      f4, 0x34(r1)
// 	  fmuls     f2, f2, f1
// 	  stfs      f0, 0x40(r1)
// 	  stfs      f5, 0x38(r1)
// 	  stfs      f2, 0x3C(r1)
// 	  bl        -0xBAC
// 	  li        r0, 0
// 	  addi      r3, r1, 0x7C
// 	  stb       r0, 0x78(r1)
// 	  addi      r4, r1, 0x5C
// 	  bl        -0xB80
// 	  addi      r3, r1, 0x7C
// 	  bl        -0xB0C
// 	  b         .loc_0x2D0

// 	.loc_0x1C0:
// 	  addi      r3, r1, 0x7C
// 	  bl        -0xA30
// 	  lwz       r12, 0x0(r3)
// 	  mr        r29, r3
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq-      .loc_0x2C8
// 	  mr        r3, r29
// 	  bl        -0xE64B4
// 	  cmplwi    r3, 0
// 	  bne-      .loc_0x2C8
// 	  mr        r4, r29
// 	  addi      r3, r1, 0x10
// 	  lwz       r12, 0x0(r29)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lfs       f1, 0x18(r1)
// 	  lfs       f0, 0x3C(r1)
// 	  lfs       f3, 0x10(r1)
// 	  lfs       f2, 0x34(r1)
// 	  fsubs     f4, f1, f0
// 	  lfs       f1, -0x4028(r2)
// 	  fsubs     f3, f3, f2
// 	  fmuls     f2, f4, f4
// 	  fmadds    f0, f3, f3, f1
// 	  fadds     f2, f2, f0
// 	  fcmpo     cr0, f2, f1
// 	  ble-      .loc_0x24C
// 	  ble-      .loc_0x250
// 	  fsqrte    f0, f2
// 	  fmuls     f2, f0, f2
// 	  b         .loc_0x250

// 	.loc_0x24C:
// 	  fmr       f2, f1

// 	.loc_0x250:
// 	  lfs       f0, -0x4028(r2)
// 	  fcmpo     cr0, f2, f0
// 	  ble-      .loc_0x26C
// 	  lfs       f0, -0x4014(r2)
// 	  fdivs     f0, f0, f2
// 	  fmuls     f3, f3, f0
// 	  fmuls     f4, f4, f0

// 	.loc_0x26C:
// 	  lfs       f0, -0x4010(r2)
// 	  lis       r3, 0x804B
// 	  lwz       r4, 0x4(r31)
// 	  subi      r0, r3, 0x5D00
// 	  fmuls     f3, f3, f0
// 	  lfs       f1, -0x4028(r2)
// 	  fmuls     f4, f4, f0
// 	  lfs       f0, -0x400C(r2)
// 	  lis       r3, 0x804B
// 	  stw       r0, 0x44(r1)
// 	  addi      r0, r3, 0x4974
// 	  stw       r4, 0x48(r1)
// 	  mr        r3, r29
// 	  addi      r4, r1, 0x44
// 	  stw       r0, 0x44(r1)
// 	  stfs      f1, 0x4C(r1)
// 	  stfs      f3, 0x50(r1)
// 	  stfs      f0, 0x54(r1)
// 	  stfs      f4, 0x58(r1)
// 	  lwz       r12, 0x0(r29)
// 	  lwz       r12, 0x1A4(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x2C8:
// 	  addi      r3, r1, 0x7C
// 	  bl        -0xB7C

// 	.loc_0x2D0:
// 	  addi      r3, r1, 0x7C
// 	  bl        -0xB50
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x1C0
// 	  lwz       r0, 0xE4(r1)
// 	  lwz       r31, 0xDC(r1)
// 	  lwz       r30, 0xD8(r1)
// 	  lwz       r29, 0xD4(r1)
// 	  lwz       r28, 0xD0(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0xE0
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F0B0
//  * Size:	0000EC
//  */
// void PikiAI::ActBattle::exec(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r3, 0x10(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x60
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0xA8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq-      .loc_0x60
// 	  lwz       r3, 0x4(r31)
// 	  bl        -0xE6608
// 	  lwz       r0, 0x10(r31)
// 	  cmplw     r0, r3
// 	  bne-      .loc_0x60
// 	  mr        r3, r0
// 	  bl        -0xE661C
// 	  lwz       r0, 0x4(r31)
// 	  cmplw     r0, r3
// 	  beq-      .loc_0x68

// 	.loc_0x60:
// 	  li        r3, 0
// 	  b         .loc_0xD8

// 	.loc_0x68:
// 	  lbz       r0, 0x1C(r31)
// 	  rlwinm.   r0,r0,0,30,30
// 	  bne-      .loc_0x7C
// 	  li        r3, 0x2
// 	  b         .loc_0xD8

// 	.loc_0x7C:
// 	  bl        0x22A2F4
// 	  lbz       r4, 0x54(r3)
// 	  addi      r0, r4, 0x1
// 	  stb       r0, 0x54(r3)
// 	  lbz       r0, 0x14(r31)
// 	  cmpwi     r0, 0x1
// 	  beq-      .loc_0xC0
// 	  bge-      .loc_0xA8
// 	  cmpwi     r0, 0
// 	  bge-      .loc_0xB4
// 	  b         .loc_0xD4

// 	.loc_0xA8:
// 	  cmpwi     r0, 0x3
// 	  bge-      .loc_0xD4
// 	  b         .loc_0xCC

// 	.loc_0xB4:
// 	  mr        r3, r31
// 	  bl        0x584
// 	  b         .loc_0xD4

// 	.loc_0xC0:
// 	  mr        r3, r31
// 	  bl        0x690
// 	  b         .loc_0xD4

// 	.loc_0xCC:
// 	  mr        r3, r31
// 	  bl        0x780

// 	.loc_0xD4:
// 	  li        r3, 0x1

// 	.loc_0xD8:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F19C
//  * Size:	00000C
//  */
// void PikiAI::ActBattle::cleanup(void)
// {
// 	/*
// 	.loc_0x0:
// 	  li        r0, 0
// 	  stw       r0, 0x10(r3)
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F1A8
//  * Size:	000004
//  */
// void PikiAI::ActBattle::collisionCallback(Game::Piki*, Game::CollEvent&)
// {
// }

// /*
//  * --INFO--
//  * Address:	8022F1AC
//  * Size:	000484
//  */
// void PikiAI::ActBattle::onKeyEvent(SysShape::KeyEvent const&)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0xB0(r1)
// 	  mflr      r0
// 	  stw       r0, 0xB4(r1)
// 	  stfd      f31, 0xA0(r1)
// 	  psq_st    f31,0xA8(r1),0,0
// 	  stfd      f30, 0x90(r1)
// 	  psq_st    f30,0x98(r1),0,0
// 	  stw       r31, 0x8C(r1)
// 	  stw       r30, 0x88(r1)
// 	  mr        r31, r3
// 	  lbz       r0, 0x14(r3)
// 	  cmplwi    r0, 0x1
// 	  bne-      .loc_0x450
// 	  lwz       r0, 0x1C(r4)
// 	  cmpwi     r0, 0x3E8
// 	  beq-      .loc_0x2A4
// 	  bge-      .loc_0x45C
// 	  cmpwi     r0, 0x2
// 	  beq-      .loc_0x50
// 	  b         .loc_0x45C

// 	.loc_0x50:
// 	  lwz       r3, 0x10(r31)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x78
// 	  bl        -0xE73C0
// 	  cmpwi     r3, 0xD
// 	  bne-      .loc_0x78
// 	  lwz       r3, 0x10(r31)
// 	  bl        -0xE7404
// 	  mr        r30, r3
// 	  b         .loc_0x7C

// 	.loc_0x78:
// 	  li        r30, 0

// 	.loc_0x7C:
// 	  cmplwi    r30, 0
// 	  beq-      .loc_0x168
// 	  lbz       r0, 0x14(r30)
// 	  cmplwi    r0, 0x2
// 	  beq-      .loc_0x168
// 	  bl        -0x165C9C
// 	  xoris     r3, r3, 0x8000
// 	  lis       r0, 0x4330
// 	  stw       r3, 0x6C(r1)
// 	  lfd       f3, -0x4020(r2)
// 	  stw       r0, 0x68(r1)
// 	  lfs       f1, -0x4038(r2)
// 	  lfd       f2, 0x68(r1)
// 	  lfs       f0, -0x4034(r2)
// 	  fsubs     f2, f2, f3
// 	  fdivs     f1, f2, f1
// 	  fcmpo     cr0, f1, f0
// 	  ble-      .loc_0x168
// 	  lwz       r0, 0x10(r30)
// 	  cmplwi    r0, 0
// 	  beq-      .loc_0x160
// 	  bl        -0x165CDC
// 	  xoris     r3, r3, 0x8000
// 	  lis       r0, 0x4330
// 	  stw       r3, 0x6C(r1)
// 	  lfd       f3, -0x4020(r2)
// 	  stw       r0, 0x68(r1)
// 	  lfs       f1, -0x4038(r2)
// 	  lfd       f2, 0x68(r1)
// 	  lfs       f0, -0x4030(r2)
// 	  fsubs     f2, f2, f3
// 	  fdivs     f1, f2, f1
// 	  fcmpo     cr0, f1, f0
// 	  ble-      .loc_0x160
// 	  mr        r3, r30
// 	  bl        .loc_0x484
// 	  lwz       r5, 0x10(r30)
// 	  lis       r3, 0x804B
// 	  subi      r4, r3, 0x5D00
// 	  lfs       f2, -0x402C(r2)
// 	  lfs       f1, -0x4028(r2)
// 	  lis       r3, 0x804B
// 	  lfs       f0, -0x4024(r2)
// 	  addi      r0, r3, 0x4E04
// 	  stw       r4, 0x50(r1)
// 	  addi      r4, r1, 0x50
// 	  stw       r5, 0x54(r1)
// 	  stw       r0, 0x50(r1)
// 	  stfs      f2, 0x58(r1)
// 	  stfs      f1, 0x5C(r1)
// 	  stfs      f0, 0x60(r1)
// 	  lwz       r3, 0x4(r30)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1A4(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  b         .loc_0x168

// 	.loc_0x160:
// 	  mr        r3, r30
// 	  bl        .loc_0x484

// 	.loc_0x168:
// 	  lwz       r3, 0x4(r31)
// 	  bl        -0xE5338
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq-      .loc_0x204
// 	  lis       r3, 0x804B
// 	  lis       r4, 0x804E
// 	  subi      r0, r3, 0x5808
// 	  lis       r3, 0x804B
// 	  stw       r0, 0x44(r1)
// 	  addi      r4, r4, 0x6A78
// 	  li        r0, 0x149
// 	  li        r7, 0
// 	  stw       r4, 0x44(r1)
// 	  addi      r6, r3, 0x4B9C
// 	  lis       r3, 0x8051
// 	  lis       r4, 0x804B
// 	  sth       r0, 0x48(r1)
// 	  addi      r5, r3, 0x41E4
// 	  lfs       f2, 0x0(r5)
// 	  subi      r0, r4, 0x5814
// 	  stw       r7, 0x4C(r1)
// 	  addi      r3, r1, 0x44
// 	  lfs       f1, 0x4(r5)
// 	  addi      r4, r1, 0x34
// 	  stw       r6, 0x44(r1)
// 	  lfs       f0, 0x8(r5)
// 	  lwz       r5, 0x4(r31)
// 	  lfs       f3, 0x25C(r5)
// 	  lfs       f4, 0x260(r5)
// 	  lfs       f5, 0x264(r5)
// 	  stfs      f2, 0x38(r1)
// 	  stfs      f1, 0x3C(r1)
// 	  stfs      f0, 0x40(r1)
// 	  stw       r0, 0x34(r1)
// 	  stfs      f3, 0x38(r1)
// 	  stfs      f4, 0x3C(r1)
// 	  stfs      f5, 0x40(r1)
// 	  bl        0x17FBDC
// 	  b         .loc_0x28C

// 	.loc_0x204:
// 	  lis       r3, 0x804B
// 	  lis       r4, 0x804E
// 	  subi      r0, r3, 0x5808
// 	  lis       r3, 0x804B
// 	  stw       r0, 0x28(r1)
// 	  addi      r4, r4, 0x6A78
// 	  li        r0, 0x148
// 	  li        r7, 0
// 	  stw       r4, 0x28(r1)
// 	  addi      r6, r3, 0x4B88
// 	  lis       r3, 0x8051
// 	  lis       r4, 0x804B
// 	  sth       r0, 0x2C(r1)
// 	  addi      r5, r3, 0x41E4
// 	  lfs       f2, 0x0(r5)
// 	  subi      r0, r4, 0x5814
// 	  stw       r7, 0x30(r1)
// 	  addi      r3, r1, 0x28
// 	  lfs       f1, 0x4(r5)
// 	  addi      r4, r1, 0x18
// 	  stw       r6, 0x28(r1)
// 	  lfs       f0, 0x8(r5)
// 	  lwz       r5, 0x4(r31)
// 	  lfs       f3, 0x25C(r5)
// 	  lfs       f4, 0x260(r5)
// 	  lfs       f5, 0x264(r5)
// 	  stfs      f2, 0x1C(r1)
// 	  stfs      f1, 0x20(r1)
// 	  stfs      f0, 0x24(r1)
// 	  stw       r0, 0x18(r1)
// 	  stfs      f3, 0x1C(r1)
// 	  stfs      f4, 0x20(r1)
// 	  stfs      f5, 0x24(r1)
// 	  bl        0x17FB50

// 	.loc_0x28C:
// 	  lwz       r3, 0x4(r31)
// 	  li        r5, 0x2808
// 	  lwz       r4, 0x10(r31)
// 	  li        r6, 0x1
// 	  bl        -0xE6AF4
// 	  b         .loc_0x45C

// 	.loc_0x2A4:
// 	  bl        .loc_0x484
// 	  bl        -0x165EB4
// 	  xoris     r3, r3, 0x8000
// 	  lis       r0, 0x4330
// 	  stw       r3, 0x6C(r1)
// 	  lbz       r3, 0x1D(r31)
// 	  stw       r0, 0x68(r1)
// 	  lfd       f2, -0x4020(r2)
// 	  addi      r0, r3, 0x1
// 	  lfd       f0, 0x68(r1)
// 	  rlwinm    r4,r0,0,24,31
// 	  lfs       f1, -0x4038(r2)
// 	  fsubs     f2, f0, f2
// 	  lfs       f0, -0x4008(r2)
// 	  stb       r0, 0x1D(r31)
// 	  fdivs     f1, f2, f1
// 	  fmuls     f0, f0, f1
// 	  fctiwz    f0, f0
// 	  stfd      f0, 0x70(r1)
// 	  lwz       r3, 0x74(r1)
// 	  addi      r0, r3, 0x6
// 	  cmpw      r4, r0
// 	  blt-      .loc_0x45C
// 	  lwz       r3, 0x10(r31)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x440
// 	  bl        -0xE69D4
// 	  lwz       r5, 0x4(r31)
// 	  cmplw     r3, r5
// 	  bne-      .loc_0x440
// 	  lwz       r3, 0x10(r31)
// 	  lis       r4, 0x4330
// 	  lbz       r0, 0x2B9(r5)
// 	  lbz       r5, 0x2B9(r3)
// 	  xoris     r0, r0, 0x8000
// 	  stw       r4, 0x70(r1)
// 	  xoris     r5, r5, 0x8000
// 	  lfd       f3, -0x4020(r2)
// 	  stw       r5, 0x74(r1)
// 	  lfs       f4, -0x4034(r2)
// 	  lfd       f0, 0x70(r1)
// 	  stw       r0, 0x6C(r1)
// 	  fsubs     f2, f0, f3
// 	  lfs       f1, -0x4014(r2)
// 	  stw       r4, 0x68(r1)
// 	  lfd       f0, 0x68(r1)
// 	  fmadds    f31, f4, f2, f1
// 	  fsubs     f0, f0, f3
// 	  fmadds    f30, f4, f0, f1
// 	  bl        -0xE5534
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq-      .loc_0x378
// 	  lfs       f31, -0x4004(r2)

// 	.loc_0x378:
// 	  lwz       r3, 0x4(r31)
// 	  bl        -0xE5548
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq-      .loc_0x38C
// 	  lfs       f30, -0x4004(r2)

// 	.loc_0x38C:
// 	  bl        -0x165F98
// 	  xoris     r3, r3, 0x8000
// 	  lis       r0, 0x4330
// 	  stw       r3, 0x7C(r1)
// 	  fadds     f0, f30, f31
// 	  lfd       f3, -0x4020(r2)
// 	  stw       r0, 0x78(r1)
// 	  lfs       f1, -0x4038(r2)
// 	  fdivs     f0, f30, f0
// 	  lfd       f2, 0x78(r1)
// 	  fsubs     f2, f2, f3
// 	  fdivs     f1, f2, f1
// 	  fcmpo     cr0, f1, f0
// 	  cror      2, 0, 0x2
// 	  bne-      .loc_0x404
// 	  li        r0, 0
// 	  li        r3, -0x1
// 	  stb       r0, 0x14(r1)
// 	  li        r0, 0x1
// 	  addi      r6, r1, 0x10
// 	  li        r5, 0x18
// 	  stw       r3, 0x10(r1)
// 	  stb       r0, 0x14(r1)
// 	  lwz       r4, 0x10(r31)
// 	  lwz       r3, 0x28C(r4)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  b         .loc_0x45C

// 	.loc_0x404:
// 	  li        r0, 0
// 	  li        r3, -0x1
// 	  stb       r0, 0xC(r1)
// 	  li        r0, 0x1
// 	  addi      r6, r1, 0x8
// 	  li        r5, 0x18
// 	  stw       r3, 0x8(r1)
// 	  stb       r0, 0xC(r1)
// 	  lwz       r4, 0x10(r31)
// 	  lwz       r3, 0x28C(r4)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  b         .loc_0x45C

// 	.loc_0x440:
// 	  lbz       r0, 0x1C(r31)
// 	  rlwinm    r0,r0,0,31,29
// 	  stb       r0, 0x1C(r31)
// 	  b         .loc_0x45C

// 	.loc_0x450:
// 	  cmplwi    r0, 0x2
// 	  bne-      .loc_0x45C
// 	  bl        .loc_0x484

// 	.loc_0x45C:
// 	  psq_l     f31,0xA8(r1),0,0
// 	  lfd       f31, 0xA0(r1)
// 	  psq_l     f30,0x98(r1),0,0
// 	  lfd       f30, 0x90(r1)
// 	  lwz       r31, 0x8C(r1)
// 	  lwz       r0, 0xB4(r1)
// 	  lwz       r30, 0x88(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0xB0
// 	  blr

// 	.loc_0x484:
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F630
//  * Size:	0000BC
//  */
// void PikiAI::ActBattle::initApproach(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x40(r1)
// 	  mflr      r0
// 	  stw       r0, 0x44(r1)
// 	  stw       r31, 0x3C(r1)
// 	  mr        r31, r3
// 	  lwz       r4, 0x10(r3)
// 	  cmplwi    r4, 0
// 	  beq-      .loc_0xA8
// 	  lwz       r12, 0x0(r4)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lis       r4, 0x804B
// 	  li        r3, 0
// 	  addi      r0, r4, 0x530
// 	  lfs       f4, 0x8(r1)
// 	  lfs       f3, 0xC(r1)
// 	  lis       r4, 0x804B
// 	  lfs       f2, 0x10(r1)
// 	  addi      r5, r4, 0x4E98
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0x1
// 	  lfs       f1, -0x4018(r2)
// 	  addi      r4, r1, 0x14
// 	  stb       r3, 0x2C(r1)
// 	  lfs       f0, -0x4000(r2)
// 	  stw       r5, 0x14(r1)
// 	  stfs      f4, 0x18(r1)
// 	  stfs      f3, 0x1C(r1)
// 	  stfs      f2, 0x20(r1)
// 	  stfs      f1, 0x24(r1)
// 	  stfs      f0, 0x28(r1)
// 	  stb       r3, 0x2D(r1)
// 	  stb       r0, 0x2C(r1)
// 	  lwz       r3, 0x18(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  li        r0, 0
// 	  stb       r0, 0x14(r31)

// 	.loc_0xA8:
// 	  lwz       r0, 0x44(r1)
// 	  lwz       r31, 0x3C(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x40
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F6EC
//  * Size:	000050
//  */
// void PikiAI::ActBattle::execApproach(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r3, 0x18(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  cmpwi     r3, 0
// 	  bne-      .loc_0x38
// 	  mr        r3, r31
// 	  bl        .loc_0x50

// 	.loc_0x38:
// 	  lwz       r0, 0x14(r1)
// 	  li        r3, 0x1
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr

// 	.loc_0x50:
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F73C
//  * Size:	0000C8
//  */
// void PikiAI::ActBattle::initBattle(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  li        r0, 0x1
// 	  stw       r31, 0x1C(r1)
// 	  mr        r31, r3
// 	  stb       r0, 0x14(r3)
// 	  bl        -0x1661B8
// 	  xoris     r3, r3, 0x8000
// 	  lis       r0, 0x4330
// 	  stw       r3, 0xC(r1)
// 	  lfd       f3, -0x4020(r2)
// 	  stw       r0, 0x8(r1)
// 	  lfs       f1, -0x4038(r2)
// 	  lfd       f2, 0x8(r1)
// 	  lfs       f0, -0x4034(r2)
// 	  fsubs     f2, f2, f3
// 	  fdivs     f1, f2, f1
// 	  fcmpo     cr0, f1, f0
// 	  ble-      .loc_0x84
// 	  cmplwi    r31, 0
// 	  mr        r6, r31
// 	  beq-      .loc_0x60
// 	  lwz       r6, 0xC(r31)

// 	.loc_0x60:
// 	  lwz       r3, 0x4(r31)
// 	  li        r4, 0x40
// 	  li        r5, 0x40
// 	  li        r7, 0
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x208(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  b         .loc_0xB4

// 	.loc_0x84:
// 	  cmplwi    r31, 0
// 	  mr        r6, r31
// 	  beq-      .loc_0x94
// 	  lwz       r6, 0xC(r31)

// 	.loc_0x94:
// 	  lwz       r3, 0x4(r31)
// 	  li        r4, 0x41
// 	  li        r5, 0x41
// 	  li        r7, 0
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x208(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0xB4:
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F804
//  * Size:	0000FC
//  */
// void PikiAI::ActBattle::execBattle(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x40(r1)
// 	  mflr      r0
// 	  li        r4, 0x40
// 	  stw       r0, 0x44(r1)
// 	  stw       r31, 0x3C(r1)
// 	  mr        r31, r3
// 	  lwz       r3, 0x4(r3)
// 	  bl        -0xF28F4
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0xD0
// 	  lwz       r3, 0x4(r31)
// 	  li        r4, 0x41
// 	  bl        -0xF2908
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0xD0
// 	  lwz       r4, 0x10(r31)
// 	  cmplwi    r4, 0
// 	  beq-      .loc_0xD0
// 	  lwz       r12, 0x0(r4)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lis       r4, 0x804B
// 	  li        r3, 0
// 	  addi      r0, r4, 0x530
// 	  lfs       f4, 0x8(r1)
// 	  lfs       f3, 0xC(r1)
// 	  lis       r4, 0x804B
// 	  lfs       f2, 0x10(r1)
// 	  addi      r5, r4, 0x4E98
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0x1
// 	  lfs       f1, -0x4018(r2)
// 	  addi      r4, r1, 0x14
// 	  stb       r3, 0x2C(r1)
// 	  lfs       f0, -0x4000(r2)
// 	  stw       r5, 0x14(r1)
// 	  stfs      f4, 0x18(r1)
// 	  stfs      f3, 0x1C(r1)
// 	  stfs      f2, 0x20(r1)
// 	  stfs      f1, 0x24(r1)
// 	  stfs      f0, 0x28(r1)
// 	  stb       r3, 0x2D(r1)
// 	  stb       r0, 0x2C(r1)
// 	  lwz       r3, 0x18(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  li        r0, 0
// 	  stb       r0, 0x14(r31)

// 	.loc_0xD0:
// 	  lwz       r4, 0x4(r31)
// 	  li        r3, 0x1
// 	  lfs       f0, -0x4028(r2)
// 	  stfs      f0, 0x1E4(r4)
// 	  stfs      f0, 0x1E8(r4)
// 	  stfs      f0, 0x1EC(r4)
// 	  lwz       r31, 0x3C(r1)
// 	  lwz       r0, 0x44(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x40
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000054
//  */
// void PikiAI::ActBattle::initDamage(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	8022F900
//  * Size:	0000E8
//  */
// void PikiAI::ActBattle::execDamage(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x40(r1)
// 	  mflr      r0
// 	  li        r4, 0x4
// 	  stw       r0, 0x44(r1)
// 	  stw       r31, 0x3C(r1)
// 	  mr        r31, r3
// 	  lwz       r3, 0x4(r3)
// 	  bl        -0xF29F0
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0xBC
// 	  lwz       r4, 0x10(r31)
// 	  cmplwi    r4, 0
// 	  beq-      .loc_0xBC
// 	  lwz       r12, 0x0(r4)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lis       r4, 0x804B
// 	  li        r3, 0
// 	  addi      r0, r4, 0x530
// 	  lfs       f4, 0x8(r1)
// 	  lfs       f3, 0xC(r1)
// 	  lis       r4, 0x804B
// 	  lfs       f2, 0x10(r1)
// 	  addi      r5, r4, 0x4E98
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0x1
// 	  lfs       f1, -0x4018(r2)
// 	  addi      r4, r1, 0x14
// 	  stb       r3, 0x2C(r1)
// 	  lfs       f0, -0x4000(r2)
// 	  stw       r5, 0x14(r1)
// 	  stfs      f4, 0x18(r1)
// 	  stfs      f3, 0x1C(r1)
// 	  stfs      f2, 0x20(r1)
// 	  stfs      f1, 0x24(r1)
// 	  stfs      f0, 0x28(r1)
// 	  stb       r3, 0x2D(r1)
// 	  stb       r0, 0x2C(r1)
// 	  lwz       r3, 0x18(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  li        r0, 0
// 	  stb       r0, 0x14(r31)

// 	.loc_0xBC:
// 	  lwz       r4, 0x4(r31)
// 	  li        r3, 0x1
// 	  lfs       f0, -0x4028(r2)
// 	  stfs      f0, 0x1E4(r4)
// 	  stfs      f0, 0x1E8(r4)
// 	  stfs      f0, 0x1EC(r4)
// 	  lwz       r31, 0x3C(r1)
// 	  lwz       r0, 0x44(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x40
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022F9E8
//  * Size:	000014
//  */
// void @32 @4 @PikiAI::ActBattle::onKeyEvent(SysShape::KeyEvent const&)
// {
// 	/*
// 	.loc_0x0:
// 	  li        r11, 0x4
// 	  lwzx      r11, r3, r11
// 	  add       r3, r3, r11
// 	  subi      r3, r3, 0x20
// 	  b         -0x84C
// 	*/
// }
