#include "types.h"

/*
 * --INFO--
 * Address:	8044A03C
 * Size:	0000F0
 */
Title::Section::Section(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x2E5460
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x2DA8
	  lfs       f0, 0x2720(r2)
	  stw       r3, 0x0(r31)
	  addi      r3, r31, 0x54
	  stw       r0, 0x48(r31)
	  stfs      f0, 0x4C(r31)
	  bl        -0x2585C
	  li        r0, 0
	  addi      r3, r31, 0xCC
	  stw       r0, 0xC0(r31)
	  bl        -0x5FF14
	  addi      r3, r31, 0x1730
	  bl        -0x7ACA8
	  addi      r3, r31, 0x2678
	  bl        -0x5AC6C
	  li        r0, -0x1
	  li        r3, 0x14
	  stw       r0, 0x2F3C(r31)
	  bl        -0x426200
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804F
	  lis       r5, 0x804B
	  subi      r8, r4, 0x2E4C
	  lis       r4, 0x804F
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xF00
	  lwz       r6, 0x4(r8)
	  subi      r0, r4, 0x2D54
	  lwz       r4, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r31, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x10(r3)

	.loc_0xBC:
	  stw       r3, 0xC0(r31)
	  bl        -0x13AA94
	  lwz       r3, -0x6380(r13)
	  li        r4, 0x1
	  bl        0xBBA0
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2F44(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

namespace ebi {

/*
 * --INFO--
 * Address:	8044A12C
 * Size:	000070
 */
Omake::TMgr::~TMgr(void)
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
	  beq-      .loc_0x54
	  addi      r3, r30, 0x5DC
	  li        r4, -0x1
	  bl        -0x5A7F4
	  addi      r3, r30, 0x468
	  li        r4, -0x1
	  bl        -0x5A588
	  addi      r3, r30, 0x8
	  li        r4, -0x1
	  bl        -0x5A2B0
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x4260C8

	.loc_0x54:
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
 * Address:	8044A19C
 * Size:	000054
 */
Option::TMgr::~TMgr(void)
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
	  beq-      .loc_0x38
	  li        r4, -0x1
	  bl        -0x7ACE8
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x42611C

	.loc_0x38:
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
 * Address:	8044A1F0
 * Size:	000270
 */
TMainTitleMgr::~TMainTitleMgr(void)
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
	  beq-      .loc_0x254
	  addic.    r0, r30, 0x137C
	  beq-      .loc_0x7C
	  lis       r3, 0x804F
	  lis       r4, 0x803D
	  subi      r0, r3, 0x7320
	  li        r5, 0x20
	  stw       r0, 0x137C(r30)
	  addi      r3, r30, 0x158C
	  subi      r4, r4, 0xFC
	  li        r6, 0x4
	  bl        -0x388A74
	  lis       r4, 0x803D
	  addi      r3, r30, 0x149C
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x4
	  bl        -0x388A8C
	  lis       r4, 0x803D
	  addi      r3, r30, 0x13AC
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x4
	  bl        -0x388AA4

	.loc_0x7C:
	  cmplwi    r30, 0
	  beq-      .loc_0x244
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x135C
	  subi      r0, r3, 0x70D0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0xEC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x135C
	  subi      r0, r3, 0x77F4
	  stw       r0, 0x135C(r30)
	  beq-      .loc_0xEC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x135C
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x135C(r30)
	  beq-      .loc_0xEC
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x135C
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x135C(r30)
	  beq-      .loc_0xEC
	  lis       r4, 0x804D
	  addi      r3, r30, 0x135C
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x135C(r30)
	  bl        -0x38D50

	.loc_0xEC:
	  addic.    r0, r30, 0x1320
	  beq-      .loc_0x15C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x1340
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x1320(r30)
	  beq-      .loc_0x114
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x1340(r30)

	.loc_0x114:
	  addic.    r0, r30, 0x1320
	  beq-      .loc_0x15C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x1320
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x1320(r30)
	  beq-      .loc_0x15C
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x1320
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x1320(r30)
	  beq-      .loc_0x15C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x1320
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x1320(r30)
	  bl        -0x38DC0

	.loc_0x15C:
	  addic.    r0, r30, 0x12E4
	  beq-      .loc_0x1CC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x1304
	  subi      r0, r3, 0x75F4
	  stw       r0, 0x12E4(r30)
	  beq-      .loc_0x184
	  lis       r3, 0x804E
	  addi      r0, r3, 0x798C
	  stw       r0, 0x1304(r30)

	.loc_0x184:
	  addic.    r0, r30, 0x12E4
	  beq-      .loc_0x1CC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x12E4
	  subi      r0, r3, 0x77D0
	  stw       r0, 0x12E4(r30)
	  beq-      .loc_0x1CC
	  lis       r3, 0x804D
	  addic.    r0, r30, 0x12E4
	  addi      r0, r3, 0x7F2C
	  stw       r0, 0x12E4(r30)
	  beq-      .loc_0x1CC
	  lis       r4, 0x804D
	  addi      r3, r30, 0x12E4
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x12E4(r30)
	  bl        -0x38E30

	.loc_0x1CC:
	  lis       r4, 0x803D
	  addi      r3, r30, 0x117C
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x6
	  bl        -0x388C0C
	  lis       r4, 0x803D
	  addi      r3, r30, 0x1014
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x6
	  bl        -0x388C24
	  lis       r4, 0x803D
	  addi      r3, r30, 0xEAC
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x6
	  bl        -0x388C3C
	  lis       r4, 0x803D
	  addi      r3, r30, 0xD44
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0x6
	  bl        -0x388C54
	  lis       r4, 0x803D
	  addi      r3, r30, 0xA74
	  subi      r4, r4, 0x6C
	  li        r5, 0x3C
	  li        r6, 0xC
	  bl        -0x388C6C

	.loc_0x244:
	  extsh.    r0, r31
	  ble-      .loc_0x254
	  mr        r3, r30
	  bl        -0x42638C

	.loc_0x254:
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
 * Address:	8044A460
 * Size:	0000A4
 */
Title::Section::~Section(void)
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
	  beq-      .loc_0x88
	  lis       r3, 0x804F
	  subi      r0, r3, 0x2DA8
	  stw       r0, 0x0(r30)
	  bl        -0x8BCAC
	  addi      r3, r30, 0x2678
	  li        r4, -0x1
	  bl        -0x36C
	  addi      r3, r30, 0x1730
	  li        r4, -0x1
	  bl        -0x308
	  addi      r3, r30, 0xCC
	  li        r4, -0x1
	  bl        -0x2C0
	  addic.    r0, r30, 0x54
	  beq-      .loc_0x6C
	  addic.    r3, r30, 0xB0
	  beq-      .loc_0x6C
	  li        r4, 0
	  bl        -0x423CF8

	.loc_0x6C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x2E5824
	  extsh.    r0, r31
	  ble-      .loc_0x88
	  mr        r3, r30
	  bl        -0x426430

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace ebi

/*
 * --INFO--
 * Address:	8044A504
 * Size:	0000C4
 */
void Title::Section::doExit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x4F00
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x41FF04

	.loc_0x44:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x64
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x41FF24

	.loc_0x64:
	  mr        r3, r30
	  bl        -0x10838C
	  lwz       r3, 0x2F38(r29)
	  bl        0x5FE8
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA8
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x48
	  li        r4, 0x20F
	  crclr     6, 0x6
	  bl        -0x41FF68

	.loc_0xA8:
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
 * Address:	8044A5C8
 * Size:	000104
 */
void Title::Section::loadResident(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r3, 0x4F00
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x6514(r13)
	  lwz       r30, -0x77D4(r13)
	  lwz       r0, 0xD8(r4)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0xD8
	  lwz       r3, 0x38(r4)
	  bl        -0x42705C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x60
	  li        r5, 0
	  bl        -0x272B4
	  addi      r29, r31, 0x7C
	  li        r4, 0x1
	  mr        r3, r29
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x42F4F8
	  cmplwi    r3, 0
	  bne-      .loc_0x84
	  mr        r6, r29
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x98
	  li        r4, 0x246
	  crclr     6, 0x6
	  bl        -0x420008

	.loc_0x84:
	  addi      r29, r31, 0xB0
	  li        r4, 0x1
	  mr        r3, r29
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x42F530
	  cmplwi    r3, 0
	  bne-      .loc_0xBC
	  mr        r6, r29
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x98
	  li        r4, 0x24E
	  crclr     6, 0x6
	  bl        -0x420040

	.loc_0xBC:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x60
	  bl        -0x27328
	  lwz       r3, -0x6514(r13)
	  lwz       r0, 0xD8(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0xD8(r3)

	.loc_0xD8:
	  lwz       r3, -0x6380(r13)
	  bl        0xB60C
	  mr        r3, r30
	  bl        -0x427108
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
 * Address:	8044A6CC
 * Size:	000434
 */
void Title::Section::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r31, r3
	  subi      r30, r4, 0x4F00
	  addi      r4, r30, 0xCC
	  lwz       r3, -0x6514(r13)
	  bl        -0x27398
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xE0
	  li        r5, 0
	  bl        -0x273A8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0xE0
	  bl        -0x273AC
	  li        r3, 0x1C
	  bl        -0x426874
	  mr.       r29, r3
	  beq-      .loc_0x74
	  mr        r4, r31
	  bl        -0x2E5750
	  lis       r3, 0x804F
	  addi      r0, r30, 0xF0
	  subi      r3, r3, 0x2DB8
	  stw       r3, 0x0(r29)
	  stw       r0, 0x14(r29)

	.loc_0x74:
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x104
	  li        r5, 0
	  bl        -0x27408
	  lwz       r4, 0x1C(r31)
	  li        r3, 0
	  li        r5, 0x2
	  li        r6, 0
	  bl        -0x3C0C50
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x1
	  bl        -0x2E59B4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x104
	  bl        -0x27430
	  li        r3, 0xB0
	  bl        -0x4268F8
	  mr.       r0, r3
	  beq-      .loc_0xE8
	  li        r4, 0
	  bl        -0x25958
	  mr        r0, r3

	.loc_0xE8:
	  stw       r0, 0xC4(r31)
	  li        r3, 0xB0
	  bl        -0x426918
	  mr.       r0, r3
	  beq-      .loc_0x108
	  li        r4, 0x1
	  bl        -0x25978
	  mr        r0, r3

	.loc_0x108:
	  stw       r0, 0xC8(r31)
	  li        r4, 0x1
	  lwz       r3, -0x6514(r13)
	  bl        -0x272B4
	  li        r3, 0x60
	  bl        -0x426944
	  mr.       r0, r3
	  beq-      .loc_0x13C
	  lwz       r4, 0xC4(r31)
	  li        r6, 0
	  lwz       r5, -0x7628(r13)
	  bl        0xB984
	  mr        r0, r3

	.loc_0x13C:
	  stw       r0, 0x50(r31)
	  li        r0, 0x104
	  li        r3, 0x14
	  lwz       r4, 0x50(r31)
	  stw       r0, 0x48(r4)
	  bl        -0x426978
	  mr.       r6, r3
	  beq-      .loc_0x1A4
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r8, r3, 0x2E40
	  lis       r3, 0x804F
	  lwz       r7, 0x0(r8)
	  subi      r4, r4, 0x2DC4
	  lwz       r5, 0x4(r8)
	  subi      r0, r3, 0x2DD0
	  lwz       r3, 0x8(r8)
	  stw       r7, 0x24(r1)
	  stw       r4, 0x0(r6)
	  stw       r0, 0x0(r6)
	  stw       r31, 0x4(r6)
	  stw       r7, 0x8(r6)
	  stw       r5, 0xC(r6)
	  stw       r5, 0x28(r1)
	  stw       r3, 0x2C(r1)
	  stw       r3, 0x10(r6)

	.loc_0x1A4:
	  lwz       r3, 0x50(r31)
	  li        r4, 0x20
	  li        r5, 0x200
	  bl        0xBAF4
	  li        r3, 0x14
	  bl        -0x4269E0
	  mr.       r6, r3
	  beq-      .loc_0x20C
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r8, r3, 0x2E34
	  lis       r3, 0x804F
	  lwz       r7, 0x0(r8)
	  subi      r4, r4, 0x2DC4
	  lwz       r5, 0x4(r8)
	  subi      r0, r3, 0x2DD0
	  lwz       r3, 0x8(r8)
	  stw       r7, 0x18(r1)
	  stw       r4, 0x0(r6)
	  stw       r0, 0x0(r6)
	  stw       r31, 0x4(r6)
	  stw       r7, 0x8(r6)
	  stw       r5, 0xC(r6)
	  stw       r5, 0x1C(r1)
	  stw       r3, 0x20(r1)
	  stw       r3, 0x10(r6)

	.loc_0x20C:
	  lwz       r3, 0x50(r31)
	  li        r4, 0x10
	  li        r5, 0x100
	  bl        0xBA8C
	  lis       r3, 0x8051
	  li        r27, 0
	  addi      r29, r3, 0x41FC
	  li        r28, 0

	.loc_0x22C:
	  mr        r3, r28
	  bl        -0x26590
	  mr.       r5, r3
	  beq-      .loc_0x280
	  lwz       r0, 0x1E8(r29)
	  cmpwi     r0, 0
	  beq-      .loc_0x254
	  lbz       r0, 0x6(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x29C

	.loc_0x254:
	  lbz       r0, 0x5(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x29C
	  lwz       r3, 0x50(r31)
	  mr        r4, r28
	  lwz       r5, 0x0(r5)
	  li        r6, 0
	  li        r7, 0x1
	  bl        0xB970
	  addi      r27, r27, 0x1
	  b         .loc_0x29C

	.loc_0x280:
	  lwz       r3, 0x50(r31)
	  mr        r4, r28
	  addi      r5, r2, 0x2724
	  li        r6, 0
	  li        r7, 0x1
	  bl        0xB950
	  addi      r27, r27, 0x1

	.loc_0x29C:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x23
	  blt+      .loc_0x22C
	  lwz       r29, -0x7628(r13)
	  bl        -0x27754
	  lhz       r28, 0x6(r3)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mullw     r3, r27, r3
	  li        r0, 0x12C
	  lwz       r5, 0x50(r31)
	  addi      r4, r30, 0xCC
	  stw       r0, 0x8(r1)
	  stw       r0, 0x40(r5)
	  addi      r3, r3, 0x3C
	  stw       r0, 0x10(r1)
	  sub       r0, r28, r3
	  stw       r0, 0x44(r5)
	  stw       r0, 0xC(r1)
	  lwz       r3, -0x6514(r13)
	  stw       r0, 0x14(r1)
	  bl        -0x27664
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x320
	  addi      r3, r30, 0x110
	  addi      r5, r30, 0x28
	  li        r4, 0x76
	  crclr     6, 0x6
	  bl        -0x4203A8

	.loc_0x320:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x394
	  li        r3, 0x30
	  bl        -0x426B58
	  mr.       r5, r3
	  beq-      .loc_0x390
	  mr        r27, r5
	  bl        -0x42413C
	  lis       r3, 0x804B
	  addic.    r4, r27, 0xC
	  addi      r0, r3, 0xCE0
	  stw       r0, 0xC(r27)
	  beq-      .loc_0x35C
	  subi      r4, r4, 0xC

	.loc_0x35C:
	  stw       r4, -0x6E44(r13)
	  addi      r3, r27, 0x10
	  bl        -0x42DA64
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0xDF4
	  mr        r5, r27
	  stw       r3, 0x28(r27)
	  addi      r4, r3, 0x8
	  addi      r3, r3, 0x14
	  stw       r4, 0xC(r27)
	  stw       r3, 0x10(r27)
	  stw       r0, 0x2C(r27)

	.loc_0x390:
	  stw       r5, -0x6E44(r13)

	.loc_0x394:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3B4
	  addi      r3, r30, 0x110
	  addi      r5, r30, 0x28
	  li        r4, 0x79
	  crclr     6, 0x6
	  bl        -0x42043C

	.loc_0x3B4:
	  li        r3, 0xEC
	  bl        -0x426BE0
	  mr.       r0, r3
	  beq-      .loc_0x3CC
	  bl        0x5360
	  mr        r0, r3

	.loc_0x3CC:
	  stw       r0, 0x2F38(r31)
	  lwz       r3, 0x2F38(r31)
	  lwz       r4, 0x1C(r31)
	  bl        0x5920
	  lwz       r4, 0x2F38(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x3EC
	  addi      r4, r4, 0x18

	.loc_0x3EC:
	  mr        r3, r31
	  bl        -0x2E5B0C
	  bl        -0x4EBD4
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0xC4(r31)
	  bl        -0x4EA54
	  lwz       r3, -0x7708(r13)
	  li        r0, 0
	  lfs       f0, 0x2720(r2)
	  stb       r0, 0x10C(r3)
	  lwz       r3, -0x7708(r13)
	  stb       r0, 0x130(r3)
	  stfs      f0, 0x30(r31)
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044AB00
 * Size:	00002C
 */
void Title::Section::menuCancel(Menu&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1801
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x67A8(r13)
	  bl        -0x1124E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044AB2C
 * Size:	000054
 */
void Title::Section::menuSelect(Menu&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x34(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x20
	  cmpwi     r0, 0x1
	  bne-      .loc_0x44

	.loc_0x20:
	  li        r0, 0
	  li        r5, 0
	  stb       r0, 0x34(r3)
	  lwz       r6, 0x24(r4)
	  li        r4, 0x1800
	  lwz       r3, -0x67A8(r13)
	  lwz       r0, 0xC(r6)
	  stw       r0, -0x7988(r13)
	  bl        -0x11253C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044AB80
 * Size:	000110
 */
void Title::Section::doDraw(Graphics&)
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
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x48(r30)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x7C
	  bge-      .loc_0x54
	  cmpwi     r0, 0x2
	  bge-      .loc_0x70
	  cmpwi     r0, 0
	  bge-      .loc_0x64
	  b         .loc_0xC4

	.loc_0x54:
	  cmpwi     r0, 0x5
	  beq-      .loc_0xC4
	  bge-      .loc_0xC4
	  b         .loc_0xAC

	.loc_0x64:
	  addi      r3, r30, 0xCC
	  bl        -0x5FD68
	  b         .loc_0xC4

	.loc_0x70:
	  addi      r3, r30, 0x1730
	  bl        -0x7A8EC
	  b         .loc_0xC4

	.loc_0x7C:
	  lwz       r0, 0x2F3C(r30)
	  cmpwi     r0, 0
	  blt-      .loc_0xA0
	  lwz       r3, 0x2F38(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA0:
	  addi      r3, r30, 0x2678
	  bl        -0x5B490
	  b         .loc_0xC4

	.loc_0xAC:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r31
	  bl        -0x4EBE4
	  lwz       r3, -0x6560(r13)
	  mr        r4, r31
	  bl        -0x4EBCC

	.loc_0xC4:
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x91690
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0
	  li        r5, 0
	  bl        -0x916A0
	  lwz       r0, 0x14(r1)
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
 * Size:	000200
 */
void Title::Section::drawShortCuts(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void Title::Section::drawShortCut(Graphics&, int, int, int, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Title::Section::drawDebugInfo(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void Title::Section::updateMenu(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044AC90
 * Size:	000688
 */
void Title::Section::doUpdateMainTitle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lis       r3, 0x804A
	  stw       r29, 0x24(r1)
	  subi      r31, r3, 0x4F00
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x4C(r30)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4C(r30)
	  lbz       r0, 0x2F44(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lwz       r3, 0x50(r30)
	  li        r4, 0
	  bl        0xB75C
	  lwz       r3, 0x50(r30)
	  lwz       r0, 0x34(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x68
	  cmpwi     r0, 0x1
	  bne-      .loc_0x128

	.loc_0x68:
	  lwz       r3, 0xC4(r30)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x98
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0xE8(r3)
	  cmpwi     r0, 0
	  blt-      .loc_0x98
	  stw       r0, -0x7988(r13)
	  li        r0, 0
	  stb       r0, 0x34(r30)

	.loc_0x98:
	  lwz       r3, 0xC4(r30)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0xC8
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0xF8(r3)
	  cmpwi     r0, 0
	  blt-      .loc_0xC8
	  stw       r0, -0x7988(r13)
	  li        r0, 0
	  stb       r0, 0x34(r30)

	.loc_0xC8:
	  lwz       r3, 0xC4(r30)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xF8
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x108(r3)
	  cmpwi     r0, 0
	  blt-      .loc_0xF8
	  stw       r0, -0x7988(r13)
	  li        r0, 0
	  stb       r0, 0x34(r30)

	.loc_0xF8:
	  lwz       r3, 0xC4(r30)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x128
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x118(r3)
	  cmpwi     r0, 0
	  blt-      .loc_0x128
	  stw       r0, -0x7988(r13)
	  li        r0, 0
	  stb       r0, 0x34(r30)

	.loc_0x128:
	  addi      r3, r30, 0xCC
	  bl        -0x603EC
	  lwz       r3, 0xC4(r30)
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,0,31
	  beq-      .loc_0x148
	  lfs       f0, 0x2720(r2)
	  stfs      f0, 0x4C(r30)

	.loc_0x148:
	  lwz       r3, 0xC4(r30)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,20,20
	  beq-      .loc_0x198
	  lwz       r4, -0x77C4(r13)
	  addi      r3, r31, 0x11C
	  lwz       r0, -0x77C0(r13)
	  sub       r0, r0, r4
	  srawi     r0, r0, 0xA
	  addze     r4, r0
	  crclr     6, 0x6
	  bl        -0x35D718
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x38(r3)
	  bl        -0x427630
	  srawi     r0, r3, 0xA
	  addi      r3, r31, 0x138
	  addze     r4, r0
	  crclr     6, 0x6
	  bl        -0x35D738

	.loc_0x198:
	  lbz       r0, 0x1720(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2A4
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x420810

	.loc_0x1C4:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x1E4
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x420830

	.loc_0x1E4:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x204
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x420850

	.loc_0x204:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x228
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x420874

	.loc_0x228:
	  addi      r3, r29, 0x10
	  li        r4, 0
	  bl        -0x117024
	  mr.       r29, r3
	  bne-      .loc_0x250
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x42089C

	.loc_0x250:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r29
	  lfs       f2, 0x1AB0(r2)
	  lfs       f1, 0x54(r4)
	  lfs       f0, 0x2720(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x280
	  lfs       f0, 0x2738(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x288

	.loc_0x280:
	  lfs       f0, 0x2738(r2)
	  fsubs     f0, f1, f0

	.loc_0x288:
	  fctiwz    f0, f0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
	  stfd      f0, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  mtctr     r12
	  bctrl

	.loc_0x2A4:
	  addi      r3, r30, 0xCC
	  bl        -0x60580
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x618
	  addi      r3, r30, 0xCC
	  bl        -0x60580
	  addi      r0, r3, 0x1
	  li        r3, 0
	  cmplwi    r0, 0x6
	  stb       r3, 0x34(r30)
	  bgt-      .loc_0x60C
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x2E28
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x2
	  stw       r0, -0x7988(r13)
	  b         .loc_0x66C
	  li        r0, 0x3
	  stw       r0, -0x7988(r13)
	  b         .loc_0x66C
	  li        r0, 0x1E
	  stw       r0, -0x7988(r13)
	  b         .loc_0x66C
	  li        r0, 0x2
	  addi      r3, r30, 0x1730
	  stw       r0, 0x48(r30)
	  bl        -0x7AE14
	  li        r0, 0x1
	  stb       r0, 0x34(r30)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x344
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x420990

	.loc_0x344:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x364
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4209B0

	.loc_0x364:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x384
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4209D0

	.loc_0x384:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x3A8
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x4209F4

	.loc_0x3A8:
	  addi      r3, r29, 0x10
	  li        r4, 0x1
	  bl        -0x1171A4
	  mr.       r29, r3
	  bne-      .loc_0x3D0
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x420A1C

	.loc_0x3D0:
	  mr        r3, r29
	  lwz       r12, 0x10(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x60(r3)
	  lbz       r0, 0x3E(r3)
	  stw       r0, 0x2F48(r30)
	  b         .loc_0x66C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x518
	  li        r0, 0x4
	  lis       r3, 0x804B
	  stw       r0, 0x48(r30)
	  li        r5, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x4290
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  stw       r5, 0x10(r1)
	  stb       r5, 0x14(r1)
	  lwz       r0, 0x2F40(r30)
	  stw       r0, 0x10(r1)
	  bl        -0x4B168
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x478
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x420AC4

	.loc_0x478:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x498
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x420AE4

	.loc_0x498:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x4B8
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x420B04

	.loc_0x4B8:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x4DC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x420B28

	.loc_0x4DC:
	  addi      r3, r29, 0x10
	  li        r4, 0x2
	  bl        -0x1172D8
	  mr.       r29, r3
	  bne-      .loc_0x504
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x420B50

	.loc_0x504:
	  mr        r3, r29
	  lwz       r12, 0x10(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x518:
	  li        r0, 0x1
	  stb       r0, 0x34(r30)
	  b         .loc_0x66C
	  li        r0, 0x3
	  addi      r3, r30, 0x2678
	  stw       r0, 0x48(r30)
	  bl        -0x5BBAC
	  li        r0, 0x1
	  stb       r0, 0x34(r30)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x55C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x420BA8

	.loc_0x55C:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x57C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x420BC8

	.loc_0x57C:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x59C
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x420BE8

	.loc_0x59C:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x5C0
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x420C0C

	.loc_0x5C0:
	  addi      r3, r29, 0x10
	  li        r4, 0x3
	  bl        -0x1173BC
	  mr.       r29, r3
	  bne-      .loc_0x5E8
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x420C34

	.loc_0x5E8:
	  mr        r3, r29
	  lwz       r12, 0x10(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x66C
	  li        r0, 0x1
	  stb       r0, 0x34(r30)
	  b         .loc_0x66C

	.loc_0x60C:
	  li        r0, 0x16
	  stw       r0, -0x7988(r13)
	  b         .loc_0x66C

	.loc_0x618:
	  lfs       f1, 0x4C(r30)
	  lfs       f0, 0x273C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x66C
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x228(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x664
	  lwz       r0, 0x238(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x664
	  addi      r3, r30, 0xCC
	  bl        -0x60930
	  li        r3, 0
	  li        r0, 0x17
	  stb       r3, 0x34(r30)
	  stw       r0, -0x7988(r13)
	  b         .loc_0x66C

	.loc_0x664:
	  lfs       f0, 0x2720(r2)
	  stfs      f0, 0x4C(r30)

	.loc_0x66C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
void Title::Section::doUpdateHiScore(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044B318
 * Size:	0004C8
 */
void Title::Section::doUpdateOmake(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lis       r3, 0x804A
	  stw       r28, 0x10(r1)
	  subi      r31, r3, 0x4F00
	  addi      r3, r29, 0x2678
	  bl        -0x5BC90
	  lbz       r0, 0x2F08(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x420D30

	.loc_0x5C:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x7C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x420D50

	.loc_0x7C:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x420D70

	.loc_0x9C:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0xC0
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x420D94

	.loc_0xC0:
	  addi      r3, r28, 0x10
	  li        r4, 0x3
	  bl        -0x117544
	  mr.       r28, r3
	  bne-      .loc_0xE8
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x420DBC

	.loc_0xE8:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r28
	  lfs       f2, 0x1698(r2)
	  lfs       f1, 0x54(r4)
	  lfs       f0, 0x2720(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x118
	  lfs       f0, 0x2738(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x120

	.loc_0x118:
	  lfs       f0, 0x2738(r2)
	  fsubs     f0, f1, f0

	.loc_0x120:
	  fctiwz    f0, f0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
	  addi      r3, r29, 0x2678
	  bl        -0x5BC44
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C0
	  lwz       r0, 0x2F3C(r29)
	  cmpwi     r0, 0
	  bge-      .loc_0x264
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x178
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x420E4C

	.loc_0x178:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x198
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x420E6C

	.loc_0x198:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B8
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x420E8C

	.loc_0x1B8:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x1DC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x420EB0

	.loc_0x1DC:
	  addi      r3, r28, 0x10
	  li        r4, 0x3
	  bl        -0x117660
	  mr.       r28, r3
	  bne-      .loc_0x204
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x420ED8

	.loc_0x204:
	  mr        r3, r28
	  li        r4, 0
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r29, 0x2678
	  bl        -0x5BCA4
	  subi      r4, r13, 0x7968
	  lbzx      r0, r4, r3
	  stw       r0, 0x2F3C(r29)
	  lwz       r0, 0x2F3C(r29)
	  cmpwi     r0, 0
	  blt-      .loc_0x244
	  cmpwi     r0, 0xC
	  blt-      .loc_0x24C

	.loc_0x244:
	  li        r0, 0x9
	  stw       r0, 0x2F3C(r29)

	.loc_0x24C:
	  lwz       r3, 0x2F38(r29)
	  lwz       r4, 0x2F3C(r29)
	  bl        0x4A34
	  lwz       r3, 0x2F38(r29)
	  bl        0x4FB0
	  b         .loc_0x27C

	.loc_0x264:
	  lwz       r3, 0x2F38(r29)
	  bl        0x52B8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x27C
	  lwz       r3, 0x2F38(r29)
	  bl        0x4EF4

	.loc_0x27C:
	  lwz       r3, 0x2F38(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F38(r29)
	  bl        0x528C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C0
	  lwz       r3, 0x2F38(r29)
	  bl        0x52D8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C0
	  lwz       r3, 0xC4(r29)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x3C0

	.loc_0x2C0:
	  lwz       r3, 0xC4(r29)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x2E0
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1801
	  li        r5, 0
	  bl        -0x112FC4

	.loc_0x2E0:
	  lwz       r3, 0x2F38(r29)
	  bl        0x4F28
	  lwz       r3, 0x2F38(r29)
	  bl        0x4F58
	  addi      r3, r29, 0x2678
	  bl        -0x5BDCC
	  li        r0, -0x1
	  stw       r0, 0x2F3C(r29)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x320
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x420FF4

	.loc_0x320:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x340
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x421014

	.loc_0x340:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x360
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x421034

	.loc_0x360:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x384
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x421058

	.loc_0x384:
	  addi      r3, r28, 0x10
	  li        r4, 0x3
	  bl        -0x117808
	  mr.       r28, r3
	  bne-      .loc_0x3AC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x421080

	.loc_0x3AC:
	  mr        r3, r28
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3C0:
	  addi      r3, r29, 0x2678
	  bl        -0x5C050
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4A8
	  li        r0, 0x1
	  mr        r4, r30
	  stw       r0, 0x48(r29)
	  addi      r3, r29, 0xCC
	  li        r5, 0x5
	  bl        -0x60F40
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x408
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4210DC

	.loc_0x408:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x428
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4210FC

	.loc_0x428:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x448
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x42111C

	.loc_0x448:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x46C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x421140

	.loc_0x46C:
	  addi      r3, r28, 0x10
	  li        r4, 0
	  bl        -0x1178F0
	  mr.       r28, r3
	  bne-      .loc_0x494
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x421168

	.loc_0x494:
	  mr        r3, r28
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4A8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00025C
 */
void Title::Section::doUpdateOption(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044B7E0
 * Size:	000108
 */
void Title::Section::run(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r4, 0x41FC
	  lwz       r0, 0x238(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  lwz       r0, 0x1C8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        -0x8888

	.loc_0x48:
	  li        r30, 0x1
	  b         .loc_0xD4

	.loc_0x50:
	  mr        r3, r29
	  bl        -0x27868
	  mr        r3, r29
	  bl        -0x27828
	  mr        r3, r29
	  bl        -0x2780C
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xA8
	  bl        -0xA8BC
	  cmplwi    r3, 0xB
	  beq-      .loc_0xA8
	  li        r31, 0x1

	.loc_0xA8:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xCC
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        -0xA8DC
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x60(r3)
	  bl        -0x49F0
	  li        r30, 0

	.loc_0xCC:
	  mr        r3, r29
	  bl        -0x278C0

	.loc_0xD4:
	  rlwinm.   r0,r30,0,24,31
	  bne+      .loc_0x50
	  mr        r3, r29
	  bl        -0x27DFC
	  li        r0, 0
	  stb       r0, 0x34(r29)
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
 * Address:	8044B8E8
 * Size:	0005B8
 */
void Title::Section::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x4F00
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r4, -0x6514(r13)
	  lwz       r3, 0x5C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x48(r30)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x2BC
	  bge-      .loc_0x68
	  cmpwi     r0, 0x1
	  beq-      .loc_0x94
	  bge-      .loc_0xA0
	  cmpwi     r0, 0
	  bge-      .loc_0x78
	  b         .loc_0x584

	.loc_0x68:
	  cmpwi     r0, 0x5
	  beq-      .loc_0x498
	  bge-      .loc_0x584
	  b         .loc_0x2C8

	.loc_0x78:
	  addi      r3, r30, 0xCC
	  bl        -0x61268
	  li        r0, 0x1
	  addi      r3, r30, 0xCC
	  stw       r0, 0x48(r30)
	  bl        -0x60FA4
	  b         .loc_0x584

	.loc_0x94:
	  mr        r3, r30
	  bl        -0xCF0
	  b         .loc_0x584

	.loc_0xA0:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x584
	  addi      r3, r30, 0x1730
	  bl        -0x7B734
	  lbz       r0, 0x2650(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x421394

	.loc_0xF0:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x110
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4213B4

	.loc_0x110:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4213D4

	.loc_0x130:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x154
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x4213F8

	.loc_0x154:
	  addi      r3, r29, 0x10
	  li        r4, 0x1
	  bl        -0x117BA8
	  mr.       r29, r3
	  bne-      .loc_0x17C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x421420

	.loc_0x17C:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r29
	  lfs       f2, 0x1698(r2)
	  lfs       f1, 0x54(r4)
	  lfs       f0, 0x2720(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1AC
	  lfs       f0, 0x2738(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x1B4

	.loc_0x1AC:
	  lfs       f0, 0x2738(r2)
	  fsubs     f0, f1, f0

	.loc_0x1B4:
	  fctiwz    f0, f0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mtctr     r12
	  bctrl

	.loc_0x1D0:
	  addi      r3, r30, 0x1730
	  bl        -0x7B8EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x584
	  li        r0, 0x1
	  mr        r4, r28
	  stw       r0, 0x48(r30)
	  addi      r3, r30, 0xCC
	  li        r5, 0x3
	  bl        -0x61320
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x218
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4214BC

	.loc_0x218:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x238
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4214DC

	.loc_0x238:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x258
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4214FC

	.loc_0x258:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x27C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x421520

	.loc_0x27C:
	  addi      r3, r28, 0x10
	  li        r4, 0
	  bl        -0x117CD0
	  mr.       r28, r3
	  bne-      .loc_0x2A4
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x421548

	.loc_0x2A4:
	  mr        r3, r28
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x584

	.loc_0x2BC:
	  mr        r3, r30
	  bl        -0x890
	  b         .loc_0x584

	.loc_0x2C8:
	  lwz       r3, -0x6560(r13)
	  bl        -0x4FB88
	  lwz       r3, -0x6560(r13)
	  bl        -0x4BBA4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x584
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x300
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4215A4

	.loc_0x300:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x320
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4215C4

	.loc_0x320:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x340
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4215E4

	.loc_0x340:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x364
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x421608

	.loc_0x364:
	  addi      r3, r28, 0x10
	  li        r4, 0x2
	  bl        -0x117DB8
	  mr.       r28, r3
	  bne-      .loc_0x38C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x421630

	.loc_0x38C:
	  mr        r3, r28
	  li        r4, 0
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  mr        r4, r29
	  stw       r0, 0x48(r30)
	  addi      r3, r30, 0xCC
	  li        r5, 0x4
	  bl        -0x614E4
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3DC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x421680

	.loc_0x3DC:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x3FC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4216A0

	.loc_0x3FC:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x41C
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4216C0

	.loc_0x41C:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x440
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x4216E4

	.loc_0x440:
	  addi      r3, r28, 0x10
	  li        r4, 0
	  bl        -0x117E94
	  mr.       r28, r3
	  bne-      .loc_0x468
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x42170C

	.loc_0x468:
	  mr        r3, r28
	  lwz       r12, 0x10(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x584

	.loc_0x498:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x54
	  bl        -0x287B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x584
	  li        r0, 0x1
	  mr        r4, r29
	  stw       r0, 0x48(r30)
	  addi      r3, r30, 0xCC
	  li        r5, 0x3
	  bl        -0x615EC
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4E4
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x421788

	.loc_0x4E4:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x504
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4217A8

	.loc_0x504:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x524
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4217C8

	.loc_0x524:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x548
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E5
	  crclr     6, 0x6
	  bl        -0x4217EC

	.loc_0x548:
	  addi      r3, r28, 0x10
	  li        r4, 0
	  bl        -0x117F9C
	  mr.       r29, r3
	  bne-      .loc_0x570
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1E7
	  crclr     6, 0x6
	  bl        -0x421814

	.loc_0x570:
	  mr        r3, r29
	  lwz       r12, 0x10(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x584:
	  mr        r3, r30
	  bl        -0x2E6EC8
	  lwz       r3, -0x65F8(r13)
	  bl        -0x928C8
	  lwz       r0, 0x24(r1)
	  lbz       r3, 0x34(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044BEA0
 * Size:	000040
 */
void Title::Section::isFinishable(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6380(r13)
	  bl        0x9DEC
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x54
	  bl        -0x288F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044BEE0
 * Size:	00008C
 */
void Title::Section::doLoadingStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  bl        -0x428054
	  mr.       r5, r3
	  beq-      .loc_0x6C
	  lis       r3, 0x804F
	  lis       r4, 0x804B
	  subi      r8, r3, 0x2E0C
	  lis       r3, 0x804F
	  lwz       r7, 0x0(r8)
	  addi      r4, r4, 0xF00
	  lwz       r6, 0x4(r8)
	  subi      r0, r3, 0x2D54
	  lwz       r3, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r4, 0x0(r5)
	  stw       r0, 0x0(r5)
	  stw       r31, 0x4(r5)
	  stw       r7, 0x8(r5)
	  stw       r6, 0xC(r5)
	  stw       r6, 0xC(r1)
	  stw       r3, 0x10(r1)
	  stw       r3, 0x10(r5)

	.loc_0x6C:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x54
	  bl        -0x2901C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044BF6C
 * Size:	0000EC
 */
void Title::Section::doLoading(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  subi      r30, r4, 0x4F00
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r4, r29, 0x54
	  lwz       r3, -0x6514(r13)
	  bl        -0x289C4
	  rlwinm.   r0,r3,0,24,31
	  mr        r31, r3
	  beq-      .loc_0xC4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x54
	  lwz       r5, 0xC0(r29)
	  bl        -0x2907C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  addi      r3, r30, 0x1C
	  addi      r5, r30, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x421994

	.loc_0x6C:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x8C
	  addi      r3, r30, 0x1C
	  addi      r5, r30, 0x28
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4219B4

	.loc_0x8C:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  addi      r3, r30, 0x154
	  addi      r5, r30, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4219D4

	.loc_0xAC:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  rlwinm    r0,r31,0,24,31
	  lwz       r31, 0x1C(r1)
	  cntlzw    r0, r0
	  lwz       r30, 0x18(r1)
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x24(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044C058
 * Size:	0003C8
 */
void Title::Section::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  subi      r31, r4, 0x4F00
	  addi      r4, r31, 0x160
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  stw       r29, 0x94(r1)
	  lwz       r3, -0x6514(r13)
	  bl        -0x28D2C
	  mr        r3, r30
	  bl        -0x2E70EC
	  addi      r3, r1, 0x3C
	  bl        -0x116BE8
	  lwz       r0, -0x6780(r13)
	  li        r4, 0x8
	  li        r3, 0
	  stb       r4, 0x42(r1)
	  cmplwi    r0, 0
	  stb       r3, 0x43(r1)
	  bne-      .loc_0x74
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x421A88

	.loc_0x74:
	  lwz       r3, -0x6780(r13)
	  addi      r4, r1, 0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x421AC0

	.loc_0xAC:
	  lwz       r29, -0x6780(r13)
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  addi      r3, r31, 0x154
	  addi      r5, r31, 0x28
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x421AE4

	.loc_0xD0:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x17C
	  li        r5, 0
	  bl        -0x28DF0
	  bl        -0x93068
	  lwz       r3, -0x65F8(r13)
	  lis       r4, 0x10
	  bl        -0x92F30
	  lwz       r3, -0x65F8(r13)
	  addi      r4, r31, 0x18C
	  li        r5, 0x7D0
	  li        r6, 0x80
	  li        r7, 0x80
	  bl        -0x92EB4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x17C
	  bl        -0x28E1C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x1B4
	  li        r5, 0
	  bl        -0x28E34
	  lbz       r0, -0x7961(r13)
	  extsb     r0, r0
	  cmpwi     r0, -0x1
	  bne-      .loc_0x18C
	  bl        -0x382C04
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x7C(r1)
	  lfd       f3, 0x2730(r2)
	  stw       r0, 0x78(r1)
	  lfs       f1, 0x2740(r2)
	  lfd       f2, 0x78(r1)
	  lfs       f0, 0x2744(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  b         .loc_0x190

	.loc_0x18C:
	  li        r0, 0xC

	.loc_0x190:
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x240
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x2E00
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x3
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x3
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x1
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x1
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x1
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x2
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x2
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x2
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260
	  li        r0, 0x3
	  stb       r0, -0x7961(r13)
	  b         .loc_0x260

	.loc_0x240:
	  lbz       r3, -0x7961(r13)
	  addi      r3, r3, 0x1
	  extsb     r0, r3
	  stb       r3, -0x7961(r13)
	  cmpwi     r0, 0x3
	  ble-      .loc_0x260
	  li        r0, 0
	  stb       r0, -0x7961(r13)

	.loc_0x260:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x228(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x284
	  addi      r3, r30, 0xCC
	  li        r4, 0x1
	  bl        -0x61DB0
	  b         .loc_0x294

	.loc_0x284:
	  lbz       r4, -0x7961(r13)
	  addi      r3, r30, 0xCC
	  extsb     r4, r4
	  bl        -0x61DC4

	.loc_0x294:
	  addi      r3, r30, 0xCC
	  bl        -0x61D64
	  lwz       r4, 0xC4(r30)
	  addi      r3, r30, 0xCC
	  bl        -0x61C4C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x1B4
	  bl        -0x28FA4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x1C0
	  li        r5, 0
	  bl        -0x28FBC
	  addi      r3, r30, 0x1730
	  bl        -0x7C260
	  lwz       r4, 0xC4(r30)
	  addi      r3, r30, 0x1730
	  bl        -0x7C1E4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x1C0
	  bl        -0x28FD4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x1CC
	  li        r5, 0
	  bl        -0x28FEC
	  li        r0, 0
	  addi      r4, r31, 0x1DC
	  stw       r0, 0x2F40(r30)
	  addi      r3, r1, 0x8
	  bl        -0x134410
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x431240
	  stw       r3, 0x2F40(r30)
	  lwz       r0, 0x2F40(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x344
	  addi      r3, r31, 0x34
	  addi      r5, r31, 0x1F4
	  addi      r6, r1, 0x8
	  li        r4, 0x6A4
	  crclr     6, 0x6
	  bl        -0x421D58

	.loc_0x344:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x1CC
	  bl        -0x29040
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x204
	  li        r5, 0
	  bl        -0x29058
	  addi      r3, r30, 0x2678
	  bl        -0x5CDF8
	  addi      r3, r30, 0x2678
	  bl        -0x5CEE8
	  lwz       r29, 0xC4(r30)
	  addi      r3, r30, 0x2680
	  stw       r29, 0x2678(r30)
	  mr        r4, r29
	  bl        -0x5DA88
	  stw       r29, 0x2AEC(r30)
	  mr        r4, r29
	  addi      r3, r30, 0x2C54
	  bl        -0x5AB44
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x204
	  bl        -0x29090
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x160
	  bl        -0x2909C
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
TitleDummy::Section::Section(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void TitleDummy::Section::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C0
 */
void TitleDummy::Section::loadResource(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void TitleDummy::Section::doUpdate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void TitleDummy::Section::doDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
TitleDummy::Section::~Section(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C420
 * Size:	000008
 */
u32 Title::Section::forceReset(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8044C428
 * Size:	000070
 */
HIORootNode::~HIORootNode()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804F
	  subi      r0, r4, 0x2DB8
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x19FC
	  stw       r0, 0x0(r30)
	  bl        -0x3AEE0

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x4283C4

	.loc_0x54:
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
 * Address:	8044C498
 * Size:	000030
 */
void Delegate1<Title::Section, Menu&>::invoke(Menu&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x38A98C
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044C4C8
 * Size:	000030
 */
void Delegate<Title::Section>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x38A9BC
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044C4F8
 * Size:	000028
 */
void __sinit_titleSection_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x63E0(r13)
	  stfsu     f0, -0x2E58(r3)
	  stfs      f0, -0x63DC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
