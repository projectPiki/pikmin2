#include "types.h"

namespace og {

/*
 * --INFO--
 * Address:	80318244
 * Size:	000120
 */
newScreen::ObjKantei::ObjKantei(char const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x13B888
	  lis       r4, 0x804E
	  lis       r3, 0x8051
	  subi      r4, r4, 0x73C4
	  lfs       f2, -0xA28(r2)
	  stw       r4, 0x0(r30)
	  addi      r4, r4, 0x10
	  li        r5, 0
	  li        r0, 0x1
	  stw       r4, 0x18(r30)
	  addi      r4, r3, 0x3D20
	  lfs       f0, -0xA24(r2)
	  mr        r3, r30
	  stfs      f2, 0x7C(r30)
	  stfs      f2, 0x80(r30)
	  stw       r31, 0x14(r30)
	  stw       r5, 0x38(r30)
	  stw       r0, 0x4C(r30)
	  stw       r5, 0x3C(r30)
	  stw       r5, 0x40(r30)
	  stw       r5, 0x44(r30)
	  stw       r5, 0x48(r30)
	  stw       r5, 0x50(r30)
	  stw       r5, 0x54(r30)
	  stfs      f2, 0x58(r30)
	  stfs      f2, 0x5C(r30)
	  stfs      f2, 0x60(r30)
	  stfs      f2, 0x64(r30)
	  stb       r0, 0x68(r30)
	  stw       r5, 0x74(r30)
	  stw       r5, 0x70(r30)
	  stb       r5, 0x78(r30)
	  stw       r5, 0x84(r30)
	  stfs      f2, 0x8C(r30)
	  stw       r5, 0x90(r30)
	  stw       r5, 0x94(r30)
	  stw       r5, 0x98(r30)
	  stw       r5, 0x9C(r30)
	  stw       r5, 0xA0(r30)
	  stw       r5, 0xAC(r30)
	  stw       r5, 0xB0(r30)
	  stw       r5, 0xB4(r30)
	  stw       r5, 0xB8(r30)
	  stw       r5, 0xBC(r30)
	  stfs      f2, 0xC0(r30)
	  stb       r5, 0xC8(r30)
	  lfs       f1, 0x24(r4)
	  stfs      f1, 0xC4(r30)
	  stw       r5, 0xD4(r30)
	  stw       r5, 0xD0(r30)
	  stb       r0, 0xD8(r30)
	  stfs      f2, 0xDC(r30)
	  stw       r5, 0xCC(r30)
	  lfs       f1, 0x3C(r4)
	  stfs      f1, 0xE0(r30)
	  stb       r5, 0xE4(r30)
	  stfs      f0, 0xE8(r30)
	  stw       r5, 0xEC(r30)
	  stb       r5, 0xF0(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80318364
 * Size:	0000AC
 */
newScreen::ObjKantei::~ObjKantei(void)
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
	  beq-      .loc_0x90
	  lis       r4, 0x804E
	  subi      r4, r4, 0x73C4
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0xF9208
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x2FB3A0
	  mr        r3, r30
	  li        r4, 0
	  bl        0xF91A8

	.loc_0x80:
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x2F433C

	.loc_0x90:
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
 * Address:	........
 * Size:	000050
 */
void newScreen::ObjKantei::startItemName(unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80318410
 * Size:	0007CC
 */
void newScreen::ObjKantei::doCreate(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  stw       r30, 0x58(r1)
	  subi      r30, r5, 0x1670
	  stw       r29, 0x54(r1)
	  mr        r29, r4
	  stw       r28, 0x50(r1)
	  bl        0x13BB6C
	  lis       r4, 0x4F
	  lis       r6, 0x4E54
	  li        r5, 0x4B41
	  mr        r28, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4549
	  bl        -0x913C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  stw       r28, 0x38(r31)
	  b         .loc_0x114

	.loc_0x5C:
	  lis       r4, 0x4F
	  lis       r6, 0x554D
	  mr        r3, r28
	  li        r5, 0x44
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4D59
	  bl        -0x9168
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100
	  li        r3, 0x40
	  bl        -0x2F45F0
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lis       r5, 0x804B
	  lis       r4, 0x804C
	  addi      r0, r5, 0x1148
	  li        r8, 0
	  stw       r0, 0x0(r3)
	  addi      r7, r4, 0x172C
	  li        r6, 0x7B
	  li        r5, 0x1388
	  stw       r8, 0x4(r3)
	  li        r4, 0x15B3
	  li        r0, 0x1
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r8, 0x34(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x1C(r3)
	  stw       r8, 0x18(r3)
	  stw       r8, 0x20(r3)
	  stw       r4, 0x24(r3)
	  stb       r8, 0x28(r3)
	  stw       r8, 0x2C(r3)
	  stb       r8, 0x29(r3)
	  stb       r8, 0x30(r3)
	  stb       r8, 0x38(r3)
	  stb       r0, 0x39(r3)

	.loc_0xF8:
	  stw       r3, 0x38(r31)
	  b         .loc_0x114

	.loc_0x100:
	  addi      r3, r30, 0
	  addi      r5, r30, 0x28
	  li        r4, 0x102
	  crclr     6, 0x6
	  bl        -0x2EDEE0

	.loc_0x114:
	  lwz       r4, 0x38(r31)
	  li        r3, 0x148
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x98(r31)
	  lwz       r4, 0x38(r31)
	  lwz       r0, 0xC(r4)
	  stw       r0, 0x9C(r31)
	  lwz       r4, 0x38(r31)
	  lwz       r0, 0x24(r4)
	  stw       r0, 0xA0(r31)
	  lwz       r4, 0x98(r31)
	  lwz       r0, 0x9C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xA4(r31)
	  lwz       r4, 0x98(r31)
	  lwz       r0, 0xA0(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xA8(r31)
	  lwz       r0, 0xA4(r31)
	  lwz       r4, 0x38(r31)
	  stw       r0, 0xC(r4)
	  lwz       r0, 0xA8(r31)
	  lwz       r4, 0x38(r31)
	  stw       r0, 0x24(r4)
	  lwz       r4, 0x38(r31)
	  lwz       r28, 0x34(r4)
	  bl        -0x2F46E8
	  mr.       r0, r3
	  beq-      .loc_0x190
	  bl        0x11C814
	  mr        r0, r3

	.loc_0x190:
	  stw       r0, 0x44(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x48
	  lis       r5, 0x104
	  lwz       r3, 0x44(r31)
	  bl        -0x2D8F90
	  li        r3, 0x148
	  bl        -0x2F4718
	  mr.       r0, r3
	  beq-      .loc_0x1C0
	  bl        0x11C7E4
	  mr        r0, r3

	.loc_0x1C0:
	  stw       r0, 0x48(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x58
	  lis       r5, 0x104
	  lwz       r3, 0x48(r31)
	  bl        -0x2D8FC0
	  cmpwi     r28, 0x1
	  beq-      .loc_0x254
	  bge-      .loc_0x2B8
	  cmpwi     r28, 0
	  bge-      .loc_0x1F0
	  b         .loc_0x2B8

	.loc_0x1F0:
	  li        r3, 0x148
	  bl        -0x2F4760
	  mr.       r0, r3
	  beq-      .loc_0x208
	  bl        0x11C79C
	  mr        r0, r3

	.loc_0x208:
	  stw       r0, 0x3C(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x74
	  lis       r5, 0x104
	  lwz       r3, 0x3C(r31)
	  bl        -0x2D9008
	  stw       r29, 0x8(r1)
	  lis       r3, 0x7368
	  addi      r6, r3, 0x6131
	  li        r5, 0x5053
	  lwz       r4, 0x38(r31)
	  li        r8, 0x9
	  lwz       r3, 0x3C(r31)
	  li        r9, 0
	  addi      r7, r4, 0xC
	  li        r10, 0x1
	  bl        -0xC050
	  stw       r3, 0x94(r31)
	  b         .loc_0x2D4

	.loc_0x254:
	  li        r3, 0x148
	  bl        -0x2F47C4
	  mr.       r0, r3
	  beq-      .loc_0x26C
	  bl        0x11C738
	  mr        r0, r3

	.loc_0x26C:
	  stw       r0, 0x3C(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x8C
	  lis       r5, 0x104
	  lwz       r3, 0x3C(r31)
	  bl        -0x2D906C
	  stw       r29, 0x8(r1)
	  lis       r3, 0x7368
	  addi      r6, r3, 0x6131
	  li        r5, 0x5053
	  lwz       r4, 0x38(r31)
	  li        r8, 0x9
	  lwz       r3, 0x3C(r31)
	  li        r9, 0
	  addi      r7, r4, 0xC
	  li        r10, 0x1
	  bl        -0xC0B4
	  stw       r3, 0x94(r31)
	  b         .loc_0x2D4

	.loc_0x2B8:
	  li        r0, 0
	  addi      r3, r30, 0
	  stw       r0, 0x3C(r31)
	  addi      r5, r30, 0xA4
	  li        r4, 0x131
	  crclr     6, 0x6
	  bl        -0x2EE0A0

	.loc_0x2D4:
	  lwz       r3, 0x38(r31)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x320
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x756B
	  addi      r6, r4, 0x616E
	  li        r5, 0x547A
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x315F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3535
	  stw       r0, 0x18(r3)
	  b         .loc_0x358

	.loc_0x320:
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x756B
	  addi      r6, r4, 0x616E
	  li        r5, 0x547A
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x305F
	  lis       r4, 0x38
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3535
	  stw       r0, 0x18(r3)

	.loc_0x358:
	  lwz       r4, 0x38(r31)
	  li        r3, 0x18
	  lfd       f2, 0x10(r30)
	  lwz       r28, 0x20(r4)
	  lfd       f1, 0x18(r30)
	  lfd       f0, 0x20(r30)
	  stfd      f2, 0x30(r1)
	  stfd      f1, 0x38(r1)
	  stfd      f0, 0x40(r1)
	  bl        -0x2F48E8
	  mr.       r0, r3
	  beq-      .loc_0x3A8
	  lis       r6, 0x305F
	  lis       r5, 0x30
	  addi      r4, r1, 0x30
	  li        r7, 0x3
	  addi      r6, r6, 0x3031
	  addi      r5, r5, 0x3130
	  bl        0x88934
	  mr        r0, r3

	.loc_0x3A8:
	  mr        r3, r0
	  mr        r4, r28
	  bl        0x88A4C
	  stw       r4, 0xD4(r31)
	  lis       r5, 0x4E61
	  lis       r4, 0x4974
	  stw       r3, 0xD0(r31)
	  addi      r6, r5, 0x6D65
	  addi      r5, r4, 0x656D
	  lwz       r3, 0x44(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB8(r31)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x3D20
	  lwz       r3, 0xB8(r31)
	  lfs       f1, 0x18(r4)
	  lwz       r12, 0x0(r3)
	  lfs       f2, 0x1C(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB8(r31)
	  li        r4, 0x4
	  bl        -0x2DFB64
	  lis       r4, 0x375F
	  lwz       r3, 0xB8(r31)
	  addi      r0, r4, 0x3030
	  lfs       f0, -0xA28(r2)
	  lis       r4, 0x38
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3535
	  stw       r0, 0x18(r3)
	  stfs      f0, 0xC0(r31)
	  lwz       r3, 0xB8(r31)
	  lfs       f0, 0xC0(r31)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1C
	  bl        -0x2F49C8
	  mr.       r0, r3
	  beq-      .loc_0x470
	  bl        0x1058C
	  mr        r0, r3

	.loc_0x470:
	  stw       r0, 0xBC(r31)
	  lis       r3, 0x6F74
	  addi      r6, r3, 0x6131
	  li        r5, 0x5053
	  stw       r29, 0x8(r1)
	  li        r8, 0x4
	  li        r9, 0x1
	  li        r10, 0x1
	  lwz       r4, 0x38(r31)
	  lwz       r3, 0x3C(r31)
	  addi      r7, r4, 0x8
	  bl        0x12800
	  stw       r3, 0x90(r31)
	  lwz       r3, 0x90(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  lwz       r3, 0x90(r31)
	  addi      r4, r4, 0x3D20
	  lfs       f1, 0xC(r4)
	  lfs       f2, 0x10(r4)
	  lfs       f3, 0x14(r4)
	  bl        0x11EA4
	  lwz       r4, 0x90(r31)
	  li        r0, 0x181E
	  li        r3, 0x148
	  stw       r0, 0xC8(r4)
	  bl        -0x2F4A50
	  mr.       r0, r3
	  beq-      .loc_0x4F8
	  bl        0x11C4AC
	  mr        r0, r3

	.loc_0x4F8:
	  stw       r0, 0x40(r31)
	  mr        r6, r29
	  addi      r4, r30, 0xC0
	  lis       r5, 0x104
	  lwz       r3, 0x40(r31)
	  bl        -0x2D92F8
	  lwz       r3, 0x3C(r31)
	  bl        -0x15610
	  lwz       r3, 0x40(r31)
	  bl        -0x15618
	  lwz       r3, 0x44(r31)
	  bl        -0x15620
	  lwz       r3, 0x48(r31)
	  bl        -0x15628
	  lwz       r3, 0x3C(r31)
	  lis       r4, 0x4D73
	  addi      r6, r4, 0x6861
	  li        r5, 0x4E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x84(r31)
	  lis       r5, 0x756B
	  lis       r4, 0x4E
	  lwz       r3, 0x3C(r31)
	  addi      r6, r5, 0x616E
	  addi      r5, r4, 0x4D7A
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r31)
	  lis       r3, 0x6974
	  li        r0, 0
	  li        r5, 0
	  lwz       r4, 0x88(r31)
	  addi      r6, r3, 0x656D
	  stb       r0, 0xB0(r4)
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x5B8
	  li        r0, 0
	  stb       r0, 0xB0(r3)

	.loc_0x5B8:
	  lwz       r3, 0x40(r31)
	  lis       r5, 0x7365
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x7470
	  addi      r5, r4, 0x6F74
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r31)
	  lwz       r3, 0x3C(r31)
	  bl        -0xEBF4
	  lwz       r3, 0x44(r31)
	  bl        -0xEBFC
	  lwz       r3, 0x48(r31)
	  bl        -0xEC04
	  li        r3, 0x78
	  bl        -0x2F4B68
	  mr.       r0, r3
	  beq-      .loc_0x610
	  bl        0x11CF84
	  mr        r0, r3

	.loc_0x610:
	  stw       r0, 0x50(r31)
	  lwz       r3, 0x50(r31)
	  bl        0x1201AC
	  lwz       r8, 0x50(r31)
	  lis       r4, 0x6133
	  li        r0, 0
	  mr        r3, r29
	  lwz       r7, 0x70(r8)
	  addi      r6, r4, 0x646C
	  li        r5, 0x6F74
	  rlwinm    r4,r7,0,0,30
	  stw       r4, 0x70(r8)
	  stb       r0, 0x78(r31)
	  lwz       r4, 0x48(r31)
	  bl        0x146DC
	  mr        r0, r3
	  li        r3, 0x8
	  mr        r28, r0
	  bl        -0x2F4BC4
	  mr.       r0, r3
	  beq-      .loc_0x670
	  mr        r4, r28
	  bl        0x148F4
	  mr        r0, r3

	.loc_0x670:
	  stw       r0, 0xAC(r31)
	  lwz       r3, 0xAC(r31)
	  bl        0x14AB0
	  lwz       r3, 0x48(r31)
	  lis       r5, 0x7469
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x636B
	  addi      r5, r4, 0x6373
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  stb       r4, 0xB0(r3)
	  stw       r4, 0xB4(r31)
	  lwz       r3, 0x38(r31)
	  lwz       r0, 0x18(r3)
	  lwz       r3, 0x1C(r3)
	  xor       r0, r0, r4
	  xor       r3, r3, r4
	  or.       r0, r3, r0
	  beq-      .loc_0x7A4
	  li        r3, 0xC
	  bl        -0x2F4C38
	  mr.       r29, r3
	  beq-      .loc_0x734
	  li        r4, 0x5
	  bl        0xA10B8
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x73DC
	  li        r9, 0x1D
	  stw       r0, 0x0(r29)
	  li        r7, 0x1E
	  li        r6, 0x1F
	  li        r5, 0x20
	  lwz       r8, 0x8(r29)
	  li        r4, 0x21
	  subi      r0, r3, 0x73F4
	  sth       r9, 0xC(r8)
	  lwz       r3, 0x8(r29)
	  sth       r7, 0x20(r3)
	  lwz       r3, 0x8(r29)
	  sth       r6, 0x34(r3)
	  lwz       r3, 0x8(r29)
	  sth       r5, 0x48(r3)
	  lwz       r3, 0x8(r29)
	  sth       r4, 0x5C(r3)
	  stw       r0, 0x0(r29)

	.loc_0x734:
	  lfs       f1, -0xA20(r2)
	  lis       r3, 0x804C
	  lfs       f0, -0xA1C(r2)
	  addi      r0, r3, 0x1514
	  stfs      f1, 0x18(r1)
	  li        r4, 0x2
	  stfs      f0, 0x1C(r1)
	  lwz       r5, 0x18(r1)
	  lwz       r3, 0x1C(r1)
	  stw       r5, 0x10(r1)
	  stw       r3, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stw       r29, 0xB4(r31)
	  lfs       f0, 0x14(r1)
	  stw       r0, 0x28(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r3, 0xB4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB4(r31)
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7A4:
	  mr        r3, r31
	  bl        0x27C
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void newScreen::ObjKantei::startKanteiVoice(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void newScreen::ObjKantei::updateKanteiVoice(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80318BDC
 * Size:	000258
 */
void newScreen::ObjKantei::scaleAnimItemName(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xBC(r3)
	  bl        0x10390
	  lfs       f0, 0xC0(r31)
	  lwz       r3, 0xB8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x244
	  lwz       r0, 0xCC(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x178
	  bge-      .loc_0x6C
	  cmpwi     r0, 0
	  beq-      .loc_0x78
	  bge-      .loc_0xB8
	  b         .loc_0x244

	.loc_0x6C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x244
	  b         .loc_0x1BC

	.loc_0x78:
	  lfs       f2, 0xC4(r31)
	  lfs       f1, -0xA28(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xAC
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xC4(r31)
	  lfs       f0, 0xC4(r31)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xAC
	  li        r0, 0x1
	  stw       r0, 0xCC(r31)

	.loc_0xAC:
	  lfs       f0, -0xA28(r2)
	  stfs      f0, 0xC0(r31)
	  b         .loc_0x244

	.loc_0xB8:
	  lis       r3, 0x8051
	  lfs       f2, 0xC0(r31)
	  addi      r4, r3, 0x3D20
	  lfs       f0, -0xA18(r2)
	  lfs       f1, 0x34(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0xC0(r31)
	  lfs       f1, 0xC0(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x244
	  stfs      f0, 0xC0(r31)
	  lfs       f4, -0xA28(r2)
	  lwz       r3, 0xBC(r31)
	  lfs       f1, 0x28(r4)
	  lfs       f2, 0x2C(r4)
	  lfs       f3, 0x30(r4)
	  bl        0x10200
	  lbz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x15C
	  li        r0, 0x1
	  lfs       f0, -0xA24(r2)
	  stb       r0, 0xE4(r31)
	  li        r0, 0xA
	  stfs      f0, 0xE8(r31)
	  stw       r0, 0xEC(r31)
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EE6E4

	.loc_0x14C:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x1846
	  li        r5, 0
	  bl        0x26634

	.loc_0x15C:
	  li        r0, 0x2
	  lis       r3, 0x8051
	  stw       r0, 0xCC(r31)
	  addi      r3, r3, 0x3D20
	  lfs       f0, 0x38(r3)
	  stfs      f0, 0xDC(r31)
	  b         .loc_0x244

	.loc_0x178:
	  lfs       f2, 0xDC(r31)
	  lfs       f1, -0xA28(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x244
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xDC(r31)
	  lbz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x244
	  lfs       f0, 0xDC(r31)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x244
	  li        r0, 0x3
	  stw       r0, 0xCC(r31)
	  b         .loc_0x244

	.loc_0x1BC:
	  lfs       f2, 0xC0(r31)
	  lfs       f1, -0xA28(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x244
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3D20
	  lfs       f0, 0x34(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xC0(r31)
	  lfs       f0, 0xC0(r31)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x244
	  stfs      f1, 0xC0(r31)
	  lbz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x244
	  li        r0, 0
	  stb       r0, 0xD8(r31)
	  lwz       r0, 0xD0(r31)
	  lwz       r4, 0xD4(r31)
	  lwz       r3, 0xB8(r31)
	  stw       r4, 0x1C(r3)
	  stw       r0, 0x18(r3)
	  stfs      f1, 0xC0(r31)
	  lwz       r3, 0xB8(r31)
	  lfs       f0, 0xC0(r31)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stw       r0, 0xCC(r31)

	.loc_0x244:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80318E34
 * Size:	000154
 */
void newScreen::ObjKantei::commonUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x26C
	  lbz       r0, 0xE4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lfs       f2, 0xE8(r31)
	  lfs       f1, -0xA28(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xF0
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xE8(r31)
	  lfs       f0, 0xE8(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xF0
	  lfs       f0, -0xA24(r2)
	  stfs      f0, 0xE8(r31)
	  lwz       r3, 0xEC(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0xEC(r31)
	  lwz       r0, 0xEC(r31)
	  cmpwi     r0, 0
	  bgt-      .loc_0xB8
	  li        r0, 0
	  stb       r0, 0xE4(r31)
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EE894

	.loc_0xA4:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x185F
	  li        r5, 0
	  bl        0x26484
	  b         .loc_0xF0

	.loc_0xB8:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xE0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EE8D0

	.loc_0xE0:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x1850
	  li        r5, 0
	  bl        0x26448

	.loc_0xF0:
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80318F88
 * Size:	00040C
 */
void newScreen::ObjKantei::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        0x13B0A4
	  lwz       r0, 0x4C(r31)
	  mr        r4, r3
	  cmplwi    r0, 0x8
	  bgt-      .loc_0x2C4
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x7418
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x2
	  lfs       f0, -0xA28(r2)
	  stw       r0, 0x4C(r31)
	  stfs      f0, 0x8C(r31)
	  b         .loc_0x2C4
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8051
	  lfs       f1, 0x8C(r31)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8C(r31)
	  lfs       f1, 0x8C(r31)
	  lfs       f0, 0x3D20(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  beq-      .loc_0xA8
	  lwz       r0, 0x1C(r4)
	  rlwinm.   r0,r0,0,23,23
	  bne-      .loc_0xA8
	  lwz       r3, 0x38(r31)
	  lwz       r3, 0x2C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C4
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x2C4

	.loc_0xA8:
	  li        r0, 0x3
	  lis       r3, 0x8051
	  stw       r0, 0x4C(r31)
	  li        r0, 0
	  addi      r4, r3, 0x3D20
	  lwz       r3, 0x38(r31)
	  stw       r0, 0x8(r3)
	  lwz       r3, 0x90(r31)
	  lfs       f1, 0x8(r4)
	  bl        0x11A44
	  lwz       r3, 0x90(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2C4
	  li        r0, 0x4
	  lfs       f0, -0xA28(r2)
	  stw       r0, 0x4C(r31)
	  stfs      f0, 0x8C(r31)
	  lwz       r0, 0x98(r31)
	  lwz       r3, 0x38(r31)
	  stw       r0, 0x8(r3)
	  b         .loc_0x2C4
	  lwz       r4, -0x6514(r13)
	  lis       r3, 0x8051
	  lfs       f1, 0x8C(r31)
	  addi      r3, r3, 0x3D20
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8C(r31)
	  lfs       f1, 0x8C(r31)
	  lfs       f0, 0x4(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2C4
	  li        r0, 0x6
	  lfs       f0, -0xA28(r2)
	  stw       r0, 0x4C(r31)
	  li        r0, 0
	  li        r4, 0x1
	  stfs      f0, 0x8C(r31)
	  lwz       r3, 0x38(r31)
	  stw       r0, 0xC(r3)
	  lwz       r3, 0x38(r31)
	  stw       r0, 0x24(r3)
	  lwz       r3, 0x94(r31)
	  bl        -0xD914
	  b         .loc_0x2C4
	  li        r0, 0x7
	  stw       r0, 0x4C(r31)
	  lwz       r0, 0x9C(r31)
	  lwz       r3, 0x38(r31)
	  stw       r0, 0xC(r3)
	  lwz       r0, 0xA0(r31)
	  lwz       r3, 0x38(r31)
	  stw       r0, 0x24(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0xC318
	  li        r0, 0x1
	  stb       r0, 0xC8(r31)
	  b         .loc_0x2C4
	  lfs       f1, 0xE0(r31)
	  lfs       f0, -0xA28(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C4
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0xE0(r31)
	  b         .loc_0x2C4

	.loc_0x1C4:
	  cmplwi    r4, 0
	  beq-      .loc_0x1D8
	  lwz       r0, 0x1C(r4)
	  rlwinm.   r0,r0,0,23,23
	  bne-      .loc_0x1F4

	.loc_0x1D8:
	  lwz       r3, 0x38(r31)
	  lwz       r3, 0x2C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C4
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x2C4

	.loc_0x1F4:
	  lwz       r3, 0x38(r31)
	  li        r4, 0
	  lwz       r0, 0x18(r3)
	  lwz       r3, 0x1C(r3)
	  stw       r3, 0x74(r31)
	  stw       r0, 0x70(r31)
	  lwz       r0, 0x70(r31)
	  lwz       r3, 0x74(r31)
	  xor       r0, r0, r4
	  xor       r3, r3, r4
	  or.       r0, r3, r0
	  beq-      .loc_0x284
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x1C8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x284
	  stw       r4, 0xC(r1)
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x8
	  stw       r4, 0x8(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r4, 0x74(r31)
	  bl        0x124154
	  lwz       r3, 0x50(r31)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x8(r1)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  li        r0, 0x8
	  stb       r3, 0x78(r31)
	  stw       r0, 0x4C(r31)
	  b         .loc_0x2C4

	.loc_0x284:
	  mr        r3, r31
	  bl        .loc_0x40C
	  b         .loc_0x2C4
	  lwz       r3, 0x50(r31)
	  lwz       r5, 0x38(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x2C(r5)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x50(r31)
	  lbz       r0, 0x68(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C4
	  mr        r3, r31
	  bl        .loc_0x40C

	.loc_0x2C4:
	  mr        r3, r31
	  bl        -0x674
	  lbz       r0, 0xE4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x3A4
	  lfs       f2, 0xE8(r31)
	  lfs       f1, -0xA28(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x3A4
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xE8(r31)
	  lfs       f0, 0xE8(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x3A4
	  lfs       f0, -0xA24(r2)
	  stfs      f0, 0xE8(r31)
	  lwz       r3, 0xEC(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0xEC(r31)
	  lwz       r0, 0xEC(r31)
	  cmpwi     r0, 0
	  bgt-      .loc_0x36C
	  li        r0, 0
	  stb       r0, 0xE4(r31)
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x358
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EEC9C

	.loc_0x358:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x185F
	  li        r5, 0
	  bl        0x2607C
	  b         .loc_0x3A4

	.loc_0x36C:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x394
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EECD8

	.loc_0x394:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x1850
	  li        r5, 0
	  bl        0x26040

	.loc_0x3A4:
	  lwz       r3, 0x40(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  li        r3, 0
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x40C:
	*/
}

/*
 * --INFO--
 * Address:	80319394
 * Size:	000040
 */
void newScreen::ObjKantei::finishKantei(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x38(r3)
	  stb       r5, 0x30(r4)
	  lbz       r0, 0xF0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  stb       r5, 0xF0(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0xC460

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803193D4
 * Size:	000290
 */
void newScreen::ObjKantei::doDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2D0(r1)
	  mflr      r0
	  stw       r0, 0x2D4(r1)
	  stw       r31, 0x2CC(r1)
	  stw       r30, 0x2C8(r1)
	  mr        r30, r4
	  addi      r31, r30, 0x190
	  stw       r29, 0x2C4(r1)
	  mr        r29, r3
	  addi      r3, r1, 0x8
	  bl        0x10DFC8
	  lfs       f1, -0xA14(r2)
	  lfs       f0, 0x80(r29)
	  lwz       r3, 0x40(r29)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x2A8(r1)
	  lwz       r4, 0x2AC(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r29)
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xB4(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x2
	  li        r5, 0
	  bl        0xA0160

	.loc_0xA4:
	  lwz       r0, 0x4C(r29)
	  cmpwi     r0, 0x8
	  beq-      .loc_0x16C
	  lfs       f1, -0xA14(r2)
	  lfs       f0, 0x80(r29)
	  lwz       r3, 0x3C(r29)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x2A8(r1)
	  lwz       r4, 0x2AC(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r29)
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8051
	  lfs       f2, -0xA28(r2)
	  lfs       f1, 0x243C(r2)
	  addi      r3, r3, 0x3D20
	  lfs       f3, 0x20(r3)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f2, f1
	  lwz       r3, 0x48(r29)
	  fadds     f0, f3, f0
	  lfs       f1, -0xA14(r2)
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lfs       f0, 0x80(r29)
	  lwz       r3, 0x48(r29)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x2B0(r1)
	  lwz       r4, 0x2B4(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r29)
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x16C:
	  lbz       r0, 0x68(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D0
	  lwz       r3, 0x38(r29)
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D0
	  lwz       r3, 0x54(r29)
	  addi      r4, r29, 0x58
	  lfs       f3, 0x3C(r3)
	  lfs       f2, 0x38(r3)
	  lfs       f1, 0x34(r3)
	  lfs       f0, 0x30(r3)
	  stfs      f0, 0x58(r29)
	  stfs      f1, 0x5C(r29)
	  stfs      f2, 0x60(r29)
	  stfs      f3, 0x64(r29)
	  lwz       r3, 0x38(r29)
	  lwz       r3, 0x10(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x68(r29)

	.loc_0x1D0:
	  lfs       f1, -0xA14(r2)
	  lfs       f0, 0x80(r29)
	  lwz       r3, 0x44(r29)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x2B0(r1)
	  lwz       r4, 0x2B4(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r29)
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804E
	  addic.    r4, r1, 0x198
	  subi      r0, r3, 0x7CA0
	  stw       r0, 0x274(r1)
	  beq-      .loc_0x24C
	  lis       r3, 0x804A
	  cmplwi    r4, 0
	  addi      r0, r3, 0x628
	  stw       r0, 0x0(r4)
	  beq-      .loc_0x24C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r4)

	.loc_0x24C:
	  addic.    r4, r1, 0xC4
	  beq-      .loc_0x274
	  lis       r3, 0x804A
	  cmplwi    r4, 0
	  addi      r0, r3, 0x600
	  stw       r0, 0x0(r4)
	  beq-      .loc_0x274
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r4)

	.loc_0x274:
	  lwz       r0, 0x2D4(r1)
	  lwz       r31, 0x2CC(r1)
	  lwz       r30, 0x2C8(r1)
	  lwz       r29, 0x2C4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80319664
 * Size:	00003C
 */
void newScreen::ObjKantei::doDrawMsg(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x4C(r3)
	  cmpwi     r0, 0x8
	  bne-      .loc_0x2C
	  lwz       r3, 0x50(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803196A0
 * Size:	00010C
 */
void newScreen::ObjKantei::doStart(Screen::StartSceneArg const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0xA28(r2)
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x1670
	  stw       r30, 0x8(r1)
	  stfs      f0, 0x7C(r3)
	  stfs      f0, 0x80(r3)
	  lwz       r3, 0x38(r3)
	  lbz       r0, 0x39(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  addi      r3, r31, 0xD4
	  addi      r5, r31, 0xE0
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x2EF0B4

	.loc_0x58:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x78
	  addi      r3, r31, 0xD4
	  addi      r5, r31, 0xE0
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x2EF0D4

	.loc_0x78:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x98
	  addi      r3, r31, 0xEC
	  addi      r5, r31, 0xE0
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x2EF0F4

	.loc_0x98:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0xBC
	  addi      r3, r31, 0xEC
	  addi      r5, r31, 0xF8
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x2EF118

	.loc_0xBC:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  addi      r3, r31, 0xEC
	  addi      r5, r31, 0xE0
	  li        r4, 0x5A
	  crclr     6, 0x6
	  bl        -0x2EF138

	.loc_0xDC:
	  lwz       r3, 0x4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803197AC
 * Size:	000010
 */
void newScreen::ObjKantei::doEnd(Screen::EndSceneArg const*)
{
	/*
	.loc_0x0:
	  lfs       f0, -0xA28(r2)
	  stfs      f0, 0x7C(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803197BC
 * Size:	000004
 */
void newScreen::ObjKantei::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	803197C0
 * Size:	000040
 */
void newScreen::ObjKantei::doUpdateFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0xA28(r2)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x7C(r3)
	  lwz       r3, 0xB4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80319800
 * Size:	000004
 */
void newScreen::ObjKantei::doUpdateFadeoutFinish(void) { }

/*
 * --INFO--
 * Address:	80319804
 * Size:	0001A4
 */
void newScreen::ObjKantei::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0xA10(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x6514(r13)
	  lfs       f2, 0x7C(r3)
	  lfs       f1, 0x54(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x7C(r3)
	  lfs       f1, 0x7C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  stfs      f0, 0x7C(r30)
	  li        r31, 0x1

	.loc_0x48:
	  lfs       f1, 0x7C(r30)
	  mr        r3, r30
	  lfs       f0, -0xA10(r2)
	  fdivs     f0, f1, f0
	  stfs      f0, 0x80(r30)
	  bl        -0xC84
	  lbz       r0, 0xE4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lfs       f2, 0xE8(r30)
	  lfs       f1, -0xA28(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x138
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xE8(r30)
	  lfs       f0, 0xE8(r30)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x138
	  lfs       f0, -0xA24(r2)
	  stfs      f0, 0xE8(r30)
	  lwz       r3, 0xEC(r30)
	  subi      r0, r3, 0x1
	  stw       r0, 0xEC(r30)
	  lwz       r0, 0xEC(r30)
	  cmpwi     r0, 0
	  bgt-      .loc_0x100
	  li        r0, 0
	  stb       r0, 0xE4(r30)
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xEC
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EF2AC

	.loc_0xEC:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x185F
	  li        r5, 0
	  bl        0x25A6C
	  b         .loc_0x138

	.loc_0x100:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EF2E8

	.loc_0x128:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x1850
	  li        r5, 0
	  bl        0x25A30

	.loc_0x138:
	  lwz       r3, 0x40(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803199A8
 * Size:	0001AC
 */
void newScreen::ObjKantei::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0xA0C(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x6514(r13)
	  lfs       f2, 0x7C(r3)
	  lfs       f1, 0x54(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x7C(r3)
	  lfs       f1, 0x7C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  stfs      f0, 0x7C(r30)
	  li        r31, 0x1

	.loc_0x48:
	  lfs       f1, 0x7C(r30)
	  mr        r3, r30
	  lfs       f0, -0xA0C(r2)
	  lfs       f2, -0xA18(r2)
	  fdivs     f0, f1, f0
	  fsubs     f0, f2, f0
	  stfs      f0, 0x80(r30)
	  bl        -0xE30
	  lbz       r0, 0xE4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  lfs       f2, 0xE8(r30)
	  lfs       f1, -0xA28(r2)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x140
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xE8(r30)
	  lfs       f0, 0xE8(r30)
	  fcmpo     cr0, f0, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x140
	  lfs       f0, -0xA24(r2)
	  stfs      f0, 0xE8(r30)
	  lwz       r3, 0xEC(r30)
	  subi      r0, r3, 0x1
	  stw       r0, 0xEC(r30)
	  lwz       r0, 0xEC(r30)
	  cmpwi     r0, 0
	  bgt-      .loc_0x108
	  li        r0, 0
	  stb       r0, 0xE4(r30)
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EF458

	.loc_0xF4:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x185F
	  li        r5, 0
	  bl        0x258C0
	  b         .loc_0x140

	.loc_0x108:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x159C
	  li        r4, 0x237
	  subi      r5, r5, 0x1590
	  crclr     6, 0x6
	  bl        -0x2EF494

	.loc_0x130:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x1850
	  li        r5, 0
	  bl        0x25884

	.loc_0x140:
	  lwz       r3, 0x40(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace og

/*
 * --INFO--
 * Address:	80319B54
 * Size:	000080
 */
void __sinit_ogObjKantei_cpp(void)
{
	/*
	.loc_0x0:
	  lfs       f13, -0xA08(r2)
	  lis       r3, 0x8051
	  lfs       f11, -0xA10(r2)
	  stfsu     f13, 0x3D20(r3)
	  lfs       f8, -0x9FC(r2)
	  lfs       f12, -0xA18(r2)
	  lfs       f10, -0xA04(r2)
	  lfs       f9, -0xA00(r2)
	  lfs       f7, -0x9F8(r2)
	  lfs       f6, -0x9F4(r2)
	  lfs       f5, -0xA28(r2)
	  lfs       f4, -0x9F0(r2)
	  lfs       f3, -0xA24(r2)
	  lfs       f2, -0x9EC(r2)
	  lfs       f1, -0x9E8(r2)
	  lfs       f0, -0x9E4(r2)
	  stfs      f12, 0x4(r3)
	  stfs      f11, 0x8(r3)
	  stfs      f10, 0xC(r3)
	  stfs      f9, 0x10(r3)
	  stfs      f8, 0x14(r3)
	  stfs      f7, 0x18(r3)
	  stfs      f6, 0x1C(r3)
	  stfs      f5, 0x20(r3)
	  stfs      f4, 0x24(r3)
	  stfs      f3, 0x28(r3)
	  stfs      f2, 0x2C(r3)
	  stfs      f8, 0x30(r3)
	  stfs      f11, 0x34(r3)
	  stfs      f1, 0x38(r3)
	  stfs      f0, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80319BD4
 * Size:	000008
 */
@24 @og::newScreen::ObjKantei::~ObjKantei(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x1874
	*/
}
