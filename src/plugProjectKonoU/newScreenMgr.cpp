#include "types.h"

/*
 * --INFO--
 * Address:	804001D8
 * Size:	0003CC
 */
void newScreen::createScene_Ogawa(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x2710
	  cmplwi    r0, 0x1B
	  li        r3, 0
	  bgt-      .loc_0x3BC
	  lis       r4, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r4, r4, 0x5788
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r3, 0x228
	  bl        -0x3DC36C
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  bl        -0xF2810
	  mr        r0, r3

	.loc_0x4C:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC38C
	  mr.       r0, r3
	  beq-      .loc_0x6C
	  bl        -0xED640
	  mr        r0, r3

	.loc_0x6C:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC3AC
	  mr.       r0, r3
	  beq-      .loc_0x8C
	  bl        -0xEC310
	  mr        r0, r3

	.loc_0x8C:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC3CC
	  mr.       r0, r3
	  beq-      .loc_0xAC
	  bl        -0xEC1C8
	  mr        r0, r3

	.loc_0xAC:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC3EC
	  mr.       r0, r3
	  beq-      .loc_0xCC
	  bl        -0xDCD18
	  mr        r0, r3

	.loc_0xCC:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC40C
	  mr.       r0, r3
	  beq-      .loc_0xEC
	  bl        -0xE826C
	  mr        r0, r3

	.loc_0xEC:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC42C
	  mr.       r0, r3
	  beq-      .loc_0x10C
	  bl        -0xE6700
	  mr        r0, r3

	.loc_0x10C:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC44C
	  mr.       r0, r3
	  beq-      .loc_0x12C
	  bl        -0xE605C
	  mr        r0, r3

	.loc_0x12C:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC46C
	  mr.       r0, r3
	  beq-      .loc_0x14C
	  bl        -0xE44BC
	  mr        r0, r3

	.loc_0x14C:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC48C
	  mr.       r0, r3
	  beq-      .loc_0x16C
	  bl        -0xE36AC
	  mr        r0, r3

	.loc_0x16C:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC4AC
	  mr.       r0, r3
	  beq-      .loc_0x190
	  li        r4, 0x271F
	  bl        -0xE1908
	  mr        r0, r3

	.loc_0x190:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC4D0
	  mr.       r0, r3
	  beq-      .loc_0x1B4
	  li        r4, 0x2720
	  bl        -0xE192C
	  mr        r0, r3

	.loc_0x1B4:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC4F4
	  mr.       r0, r3
	  beq-      .loc_0x1D8
	  li        r4, 0x2721
	  bl        -0xE1950
	  mr        r0, r3

	.loc_0x1D8:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC518
	  mr.       r0, r3
	  beq-      .loc_0x1F8
	  bl        -0xE06C4
	  mr        r0, r3

	.loc_0x1F8:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC538
	  mr.       r0, r3
	  beq-      .loc_0x218
	  bl        -0xDBAF4
	  mr        r0, r3

	.loc_0x218:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC558
	  mr.       r0, r3
	  beq-      .loc_0x238
	  bl        -0xDE500
	  mr        r0, r3

	.loc_0x238:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC578
	  mr.       r0, r3
	  beq-      .loc_0x258
	  bl        -0xDE520
	  mr        r0, r3

	.loc_0x258:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC598
	  mr.       r0, r3
	  beq-      .loc_0x278
	  bl        -0xDE540
	  mr        r0, r3

	.loc_0x278:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC5B8
	  mr.       r0, r3
	  beq-      .loc_0x298
	  bl        -0xDE560
	  mr        r0, r3

	.loc_0x298:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC5D8
	  mr.       r0, r3
	  beq-      .loc_0x2B8
	  bl        -0xDE580
	  mr        r0, r3

	.loc_0x2B8:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC5F8
	  mr.       r0, r3
	  beq-      .loc_0x2D8
	  bl        -0xDB6F4
	  mr        r0, r3

	.loc_0x2D8:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC618
	  mr.       r0, r3
	  beq-      .loc_0x2F8
	  bl        -0xDABE0
	  mr        r0, r3

	.loc_0x2F8:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC638
	  mr.       r0, r3
	  beq-      .loc_0x318
	  bl        -0xD888C
	  mr        r0, r3

	.loc_0x318:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC658
	  mr.       r0, r3
	  beq-      .loc_0x338
	  bl        -0xD78D8
	  mr        r0, r3

	.loc_0x338:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC678
	  mr.       r0, r3
	  beq-      .loc_0x358
	  bl        -0xD682C
	  mr        r0, r3

	.loc_0x358:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC698
	  mr.       r0, r3
	  beq-      .loc_0x378
	  bl        -0xD4AA4
	  mr        r0, r3

	.loc_0x378:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x220
	  bl        -0x3DC6B8
	  mr.       r0, r3
	  beq-      .loc_0x398
	  bl        -0xD4360
	  mr        r0, r3

	.loc_0x398:
	  mr        r3, r0
	  b         .loc_0x3BC
	  li        r3, 0x224
	  bl        -0x3DC6D8
	  mr.       r0, r3
	  beq-      .loc_0x3B8
	  bl        -0xD0098
	  mr        r0, r3

	.loc_0x3B8:
	  mr        r3, r0

	.loc_0x3BC:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804005A4
 * Size:	000348
 */
void newScreen::createScene_Morimura(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x272D
	  cmplwi    r0, 0xC
	  li        r3, 0
	  stw       r31, 0xC(r1)
	  bgt-      .loc_0x334
	  lis       r4, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r4, r4, 0x5718
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r3, 0x228
	  bl        -0x3DC73C
	  mr.       r31, r3
	  beq-      .loc_0x70
	  bl        0x511A4
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  addi      r0, r4, 0x3F18
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x4F5C
	  stw       r4, 0x220(r31)
	  stw       r0, 0x0(r31)
	  stw       r4, 0x224(r31)

	.loc_0x70:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DC77C
	  mr.       r31, r3
	  beq-      .loc_0xAC
	  bl        0x51164
	  lis       r4, 0x804E
	  lis       r3, 0x804F
	  addi      r0, r4, 0x3F18
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x54BC
	  stw       r4, 0x220(r31)
	  stw       r0, 0x0(r31)

	.loc_0xAC:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DC7B8
	  mr.       r31, r3
	  beq-      .loc_0xF4
	  bl        0x51128
	  lis       r3, 0x804E
	  lis       r4, 0x804F
	  addi      r0, r3, 0x3F18
	  lis       r3, 0x804F
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  subi      r4, r4, 0x550C
	  subi      r0, r3, 0x555C
	  stw       r5, 0x220(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)

	.loc_0xF4:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DC800
	  mr.       r31, r3
	  beq-      .loc_0x13C
	  bl        0x510E0
	  lis       r3, 0x804E
	  lis       r4, 0x804F
	  addi      r0, r3, 0x3F18
	  lis       r3, 0x804F
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  subi      r4, r4, 0x550C
	  subi      r0, r3, 0x55AC
	  stw       r5, 0x220(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)

	.loc_0x13C:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DC848
	  mr.       r31, r3
	  beq-      .loc_0x184
	  bl        0x51098
	  lis       r3, 0x804E
	  lis       r4, 0x804F
	  addi      r0, r3, 0x3F18
	  lis       r3, 0x804F
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  subi      r4, r4, 0x550C
	  subi      r0, r3, 0x55FC
	  stw       r5, 0x220(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)

	.loc_0x184:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DC890
	  mr.       r31, r3
	  beq-      .loc_0x1CC
	  bl        0x51050
	  lis       r3, 0x804E
	  lis       r4, 0x804F
	  addi      r0, r3, 0x3F18
	  lis       r3, 0x804F
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  subi      r4, r4, 0x550C
	  subi      r0, r3, 0x564C
	  stw       r5, 0x220(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)

	.loc_0x1CC:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DC8D8
	  mr.       r31, r3
	  beq-      .loc_0x214
	  bl        0x51008
	  lis       r3, 0x804E
	  lis       r4, 0x804F
	  addi      r0, r3, 0x3F18
	  lis       r3, 0x804F
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  subi      r4, r4, 0x550C
	  subi      r0, r3, 0x569C
	  stw       r5, 0x220(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)

	.loc_0x214:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x228
	  bl        -0x3DC920
	  mr.       r0, r3
	  beq-      .loc_0x234
	  bl        -0x889E4
	  mr        r0, r3

	.loc_0x234:
	  mr        r3, r0
	  b         .loc_0x334
	  li        r3, 0x228
	  bl        -0x3DC940
	  mr.       r0, r3
	  beq-      .loc_0x254
	  bl        -0x85444
	  mr        r0, r3

	.loc_0x254:
	  mr        r3, r0
	  b         .loc_0x334
	  li        r3, 0x228
	  bl        -0x3DC960
	  mr.       r31, r3
	  beq-      .loc_0x294
	  bl        0x50F80
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  addi      r0, r4, 0x3F18
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x5040
	  stw       r4, 0x220(r31)
	  stw       r0, 0x0(r31)
	  stw       r4, 0x224(r31)

	.loc_0x294:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DC9A0
	  mr.       r31, r3
	  beq-      .loc_0x2D0
	  bl        0x50F40
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  addi      r0, r4, 0x3F18
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x51A8
	  stw       r4, 0x220(r31)
	  stw       r0, 0x0(r31)

	.loc_0x2D0:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x228
	  bl        -0x3DC9DC
	  mr.       r31, r3
	  beq-      .loc_0x310
	  bl        0x50F04
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  addi      r0, r4, 0x3F18
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x5420
	  stw       r4, 0x220(r31)
	  stw       r0, 0x0(r31)
	  stw       r4, 0x224(r31)

	.loc_0x310:
	  mr        r3, r31
	  b         .loc_0x334
	  li        r3, 0x224
	  bl        -0x3DCA1C
	  mr.       r0, r3
	  beq-      .loc_0x330
	  bl        -0x80178
	  mr        r0, r3

	.loc_0x330:
	  mr        r3, r0

	.loc_0x334:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804008EC
 * Size:	000050
 */
void newScreen::Mgr::doGetSceneBase(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x72C
	  cmplwi    r3, 0
	  bne-      .loc_0x2C
	  mr        r3, r31
	  bl        -0x370

	.loc_0x2C:
	  cmplwi    r3, 0
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        -0x4E50

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040093C
 * Size:	0000AC
 */
void newScreen::Mgr::create()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0xA8
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x3DCAAC
	  mr.       r31, r3
	  beq-      .loc_0x54
	  bl        0x519F8
	  lis       r4, 0x804F
	  li        r3, -0x1
	  subi      r4, r4, 0x56E4
	  li        r0, 0
	  stw       r4, 0x0(r31)
	  stw       r3, 0x9C(r31)
	  stw       r3, 0xA0(r31)
	  stb       r0, 0x90(r31)
	  stb       r0, 0x91(r31)
	  stb       r0, 0x92(r31)
	  stw       r0, 0x94(r31)
	  stw       r0, 0x98(r31)

	.loc_0x54:
	  stw       r31, -0x6398(r13)
	  mr        r3, r31
	  bl        0x51BE8
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0xA0(r31)
	  stb       r0, 0xA1(r31)
	  stb       r0, 0xA2(r31)
	  stb       r0, 0xA3(r31)
	  lbz       r0, 0xA0(r31)
	  stb       r0, 0x9C(r31)
	  lbz       r0, 0xA1(r31)
	  stb       r0, 0x9D(r31)
	  lbz       r0, 0xA2(r31)
	  stb       r0, 0x9E(r31)
	  lbz       r0, 0xA3(r31)
	  stb       r0, 0x9F(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Screen {

/*
 * --INFO--
 * Address:	804009E8
 * Size:	0000B0
 */
Mgr::~Mgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x94
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r4, r3, 0x28FC
	  addi      r3, r30, 0x78
	  stw       r4, 0x0(r30)
	  li        r4, -0x1
	  stw       r0, -0x6398(r13)
	  bl        0x10B64
	  addi      r3, r30, 0x60
	  li        r4, -0x1
	  bl        0x10B58
	  addi      r3, r30, 0x44
	  li        r4, -0x1
	  bl        0x10B4C
	  addi      r3, r30, 0x2C
	  li        r4, -0x1
	  bl        0x10B40
	  cmplwi    r30, 0
	  beq-      .loc_0x84
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r0, r4, 0x56B4
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        -0x3E3A34

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x3DC9C4

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Screen

/*
 * --INFO--
 * Address:	80400A98
 * Size:	0001A0
 */
void newScreen::Mgr::drawBG(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  addi      r31, r4, 0x190
	  lbz       r0, 0x9F(r3)
	  lbz       r4, 0xA3(r3)
	  cmplw     r0, r4
	  ble-      .loc_0x64
	  sub       r0, r0, r4
	  srawi     r0, r0, 0x2
	  addze     r3, r0
	  addi      r0, r3, 0x1
	  rlwinm    r0,r0,0,24,31
	  add       r0, r4, r0
	  stb       r0, 0xA3(r30)
	  b         .loc_0x84

	.loc_0x64:
	  bge-      .loc_0x84
	  sub       r0, r4, r0
	  srawi     r0, r0, 0x2
	  addze     r3, r0
	  addi      r0, r3, 0x1
	  rlwinm    r0,r0,0,24,31
	  sub       r0, r4, r0
	  stb       r0, 0xA3(r30)

	.loc_0x84:
	  lbz       r0, 0xA3(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x170
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  bl        0x226E8
	  lhz       r3, 0x4(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x30(r1)
	  lfd       f1, 0x1CF0(r2)
	  stw       r3, 0x34(r1)
	  lfs       f30, 0x1CE8(r2)
	  lfd       f0, 0x30(r1)
	  fsubs     f31, f0, f1
	  bl        0x226C4
	  lhz       r3, 0x6(r3)
	  lis       r0, 0x4330
	  lwz       r4, 0xA4(r30)
	  stw       r3, 0x3C(r1)
	  lfd       f1, 0x1CF0(r2)
	  cmpwi     r4, 0x1
	  stw       r0, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fsubs     f29, f0, f1
	  bne-      .loc_0x100
	  lfs       f0, 0x1CEC(r2)
	  fmuls     f29, f29, f0
	  b         .loc_0x110

	.loc_0x100:
	  cmpwi     r4, 0x2
	  bne-      .loc_0x110
	  lfs       f0, 0x1CEC(r2)
	  fmuls     f30, f0, f29

	.loc_0x110:
	  lwz       r0, 0xA0(r30)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0xC
	  stw       r0, 0x18(r1)
	  addi      r6, r1, 0x10
	  addi      r7, r1, 0x14
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x3CA548
	  li        r3, 0
	  bl        -0x317A84
	  lfs       f2, 0x1CE8(r2)
	  fadds     f0, f30, f29
	  stfs      f30, 0x20(r1)
	  mr        r3, r31
	  fadds     f1, f2, f31
	  addi      r4, r1, 0x1C
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x3CA430

	.loc_0x170:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400C38
 * Size:	000064
 */
void newScreen::Mgr::reset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x519A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r0, 0
	  li        r3, 0x1
	  stb       r0, 0x90(r31)
	  stb       r0, 0x91(r31)
	  stb       r0, 0x92(r31)
	  stw       r0, 0x94(r31)
	  stw       r0, 0x98(r31)
	  stb       r0, 0x9F(r31)
	  stb       r0, 0xA3(r31)
	  stw       r0, 0xA4(r31)
	  b         .loc_0x50

	.loc_0x4C:
	  li        r3, 0

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400C9C
 * Size:	0000C0
 */
newScreen::Mgr::~Mgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0xA4
	  lis       r3, 0x804F
	  subi      r0, r3, 0x56E4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r4, r3, 0x28FC
	  addi      r3, r30, 0x78
	  stw       r4, 0x0(r30)
	  li        r4, -0x1
	  stw       r0, -0x6398(r13)
	  bl        0x108A0
	  addi      r3, r30, 0x60
	  li        r4, -0x1
	  bl        0x10894
	  addi      r3, r30, 0x44
	  li        r4, -0x1
	  bl        0x10888
	  addi      r3, r30, 0x2C
	  li        r4, -0x1
	  bl        0x1087C
	  cmplwi    r30, 0
	  beq-      .loc_0x94
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r0, r4, 0x56B4
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        -0x3E3CF8

	.loc_0x94:
	  extsh.    r0, r31
	  ble-      .loc_0xA4
	  mr        r3, r30
	  bl        -0x3DCC88

	.loc_0xA4:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400D5C
 * Size:	000024
 */
void newScreen::Mgr::setColorBG(JUtility::TColor&)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x9C(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x9D(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x9E(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x9F(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400D80
 * Size:	000008
 */
void newScreen::Mgr::setBGMode(int a1)
{
	// Generated from stw r4, 0xA4(r3)
	_A4 = a1;
}

namespace Screen {

/*
 * --INFO--
 * Address:	80400D88
 * Size:	000004
 */
void Mgr::drawWipe(Graphics&) { }

/*
 * --INFO--
 * Address:	80400D8C
 * Size:	000060
 */
MgrBase::~MgrBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x56B4
	  stw       r0, 0x0(r30)
	  bl        -0x3E3D88
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x3DCD18

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Screen

/*
 * --INFO--
 * Address:	80400DEC
 * Size:	00000C
 */
void Morimura::TPikminDownScene::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x7A48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400DF8
 * Size:	000080
 */
void Morimura::TPikminDownScene::doCreateObj(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x90
	  bl        -0x3DCF78
	  mr.       r31, r3
	  beq-      .loc_0x50
	  lis       r4, 0x804A
	  subi      r4, r4, 0x7A34
	  bl        -0xB8EE8
	  lis       r3, 0x804E
	  subi      r3, r3, 0x49F4
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r31)

	.loc_0x50:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x50F20
	  stw       r31, 0x220(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400E78
 * Size:	000008
 */
u32 Morimura::TPikminDownScene::isUseBackupSceneInfo() { return 0x0; }

/*
 * --INFO--
 * Address:	80400E80
 * Size:	000008
 */
u32 Morimura::TPikminDownScene::getSceneType() { return 0x272F; }

/*
 * --INFO--
 * Address:	80400E88
 * Size:	00000C
 */
void Morimura::TPikminDownScene::getOwnerID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400E94
 * Size:	000014
 */
void Morimura::TPikminDownScene::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x4552
	  lis       r3, 0x47
	  addi      r4, r4, 0x3244
	  addi      r3, r3, 0x4F56
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400EA8
 * Size:	00000C
 */
void Morimura::TPresidentDownScene::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x7A28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400EB4
 * Size:	000080
 */
void Morimura::TPresidentDownScene::doCreateObj(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x90
	  bl        -0x3DD034
	  mr.       r31, r3
	  beq-      .loc_0x50
	  lis       r4, 0x804A
	  subi      r4, r4, 0x7A10
	  bl        -0xB8FA4
	  lis       r3, 0x804E
	  subi      r3, r3, 0x4978
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r31)

	.loc_0x50:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x50E64
	  stw       r31, 0x220(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400F34
 * Size:	000008
 */
u32 Morimura::TPresidentDownScene::getSceneType() { return 0x2732; }

/*
 * --INFO--
 * Address:	80400F3C
 * Size:	00000C
 */
void Morimura::TPresidentDownScene::getOwnerID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400F48
 * Size:	000014
 */
void Morimura::TPresidentDownScene::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x4552
	  lis       r3, 0x47
	  addi      r4, r4, 0x3244
	  addi      r3, r3, 0x4F56
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400F5C
 * Size:	00004C
 */
void Morimura::TGameOverSceneBase::isUseBackupSceneInfo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6D20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  bl        -0x2A5E10
	  li        r0, 0x1
	  srawi     r5, r3, 0x1F
	  rlwinm    r4,r0,1,31,31
	  subc      r0, r3, r0
	  adde      r0, r5, r4
	  rlwinm    r3,r0,0,24,31
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0x1

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400FA8
 * Size:	00000C
 */
void Morimura::TLujiDownScene::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x7A00
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400FB4
 * Size:	000080
 */
void Morimura::TLujiDownScene::doCreateObj(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x90
	  bl        -0x3DD134
	  mr.       r31, r3
	  beq-      .loc_0x50
	  lis       r4, 0x804A
	  subi      r4, r4, 0x79EC
	  bl        -0xB90A4
	  lis       r3, 0x804E
	  subi      r3, r3, 0x48FC
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r31)

	.loc_0x50:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x50D64
	  stw       r31, 0x220(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401034
 * Size:	000008
 */
u32 Morimura::TLujiDownScene::getSceneType() { return 0x2731; }

/*
 * --INFO--
 * Address:	8040103C
 * Size:	00000C
 */
void Morimura::TLujiDownScene::getOwnerID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401048
 * Size:	000014
 */
void Morimura::TLujiDownScene::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x4552
	  lis       r3, 0x47
	  addi      r4, r4, 0x3244
	  addi      r3, r3, 0x4F56
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040105C
 * Size:	00000C
 */
void Morimura::TOrimaDownScene::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x79E0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401068
 * Size:	000080
 */
void Morimura::TOrimaDownScene::doCreateObj(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x90
	  bl        -0x3DD1E8
	  mr.       r31, r3
	  beq-      .loc_0x50
	  lis       r4, 0x804A
	  subi      r4, r4, 0x79CC
	  bl        -0xB9158
	  lis       r3, 0x804E
	  subi      r3, r3, 0x4880
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r31)

	.loc_0x50:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x50CB0
	  stw       r31, 0x220(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804010E8
 * Size:	000008
 */
u32 Morimura::TOrimaDownScene::getSceneType() { return 0x2730; }

/*
 * --INFO--
 * Address:	804010F0
 * Size:	00000C
 */
void Morimura::TOrimaDownScene::getOwnerID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804010FC
 * Size:	000014
 */
void Morimura::TOrimaDownScene::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x4552
	  lis       r3, 0x47
	  addi      r4, r4, 0x3244
	  addi      r3, r3, 0x4F56
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401110
 * Size:	00000C
 */
void Morimura::TGameOverScene::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x79C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040111C
 * Size:	000080
 */
void Morimura::TGameOverScene::doCreateObj(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x90
	  bl        -0x3DD29C
	  mr.       r31, r3
	  beq-      .loc_0x50
	  lis       r4, 0x804A
	  subi      r4, r4, 0x79AC
	  bl        -0xB920C
	  lis       r3, 0x804E
	  subi      r3, r3, 0x4804
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r31)

	.loc_0x50:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x50BFC
	  stw       r31, 0x220(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040119C
 * Size:	000008
 */
u32 Morimura::TGameOverScene::isUseBackupSceneInfo() { return 0x0; }

/*
 * --INFO--
 * Address:	804011A4
 * Size:	000008
 */
u32 Morimura::TGameOverScene::getSceneType() { return 0x272F; }

/*
 * --INFO--
 * Address:	804011AC
 * Size:	00000C
 */
void Morimura::TGameOverScene::getOwnerID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804011B8
 * Size:	000014
 */
void Morimura::TGameOverScene::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x4552
	  lis       r3, 0x47
	  addi      r4, r4, 0x3244
	  addi      r3, r3, 0x4F56
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804011CC
 * Size:	00000C
 */
void Morimura::THurryUpScene::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x79A0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804011D8
 * Size:	000068
 */
void Morimura::THurryUpScene::doCreateObj(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x118
	  bl        -0x3DD358
	  mr.       r31, r3
	  beq-      .loc_0x38
	  bl        -0xBADD8
	  mr        r31, r3

	.loc_0x38:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x50B58
	  stw       r31, 0x220(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401240
 * Size:	000008
 */
u32 Morimura::THurryUpScene::getSceneType() { return 0x272E; }

/*
 * --INFO--
 * Address:	80401248
 * Size:	00000C
 */
void Morimura::THurryUpScene::getOwnerID()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401254
 * Size:	000014
 */
void Morimura::THurryUpScene::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x5259
	  lis       r3, 0x48
	  addi      r4, r4, 0x5550
	  addi      r3, r3, 0x5552
	  blr
	*/
}
