#include "types.h"

/*
 * --INFO--
 * Address:	80455C30
 * Size:	000060
 */
void Pikmin2ARAM::Mgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6380(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3BF0
	  li        r4, 0xBE
	  subi      r5, r5, 0x32AC
	  crclr     6, 0x6
	  bl        -0x42B620

	.loc_0x34:
	  li        r3, 0x8
	  bl        -0x431DC4
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  bl        .loc_0x60
	  mr        r0, r3

	.loc_0x4C:
	  stw       r0, -0x6380(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	80455C90
 * Size:	000018
 */
Pikmin2ARAM::Mgr::Mgr(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  li        r0, 0
	  subi      r4, r4, 0x23B0
	  stw       r4, 0x0(r3)
	  stb       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455CA8
 * Size:	000008
 */
void Pikmin2ARAM::Mgr::setLoadPermission(bool a1)
{
	// Generated from stb r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Pikmin2ARAM::Mgr::isEntryOnly(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80455CB0
 * Size:	000060
 */
void Pikmin2ARAM::Mgr::load(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r31, -0x77D4(r13)
	  bl        0x68
	  mr        r3, r30
	  bl        0x204
	  mr        r3, r30
	  bl        0x2B4
	  mr        r3, r30
	  bl        0x324
	  mr        r3, r30
	  bl        .loc_0x60
	  mr        r3, r31
	  bl        -0x432750
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	80455D10
 * Size:	000024
 */
void Pikmin2ARAM::Mgr::dump(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6458(r13)
	  bl        -0x22D58
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455D34
 * Size:	0001A4
 */
void Pikmin2ARAM::Mgr::loadEnemy(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x450(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x454(r1)
	  stmw      r27, 0x43C(r1)
	  mr        r30, r3
	  subi      r28, r4, 0x3BF0
	  bl        -0x367118
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r29,r0,1,31,31
	  bl        -0x36435C
	  lwz       r3, -0x77D8(r13)
	  bl        -0x4325B4
	  subic.    r27, r3, 0x7940
	  bne-      .loc_0x54
	  addi      r3, r28, 0
	  addi      r5, r28, 0x944
	  li        r4, 0x122
	  crclr     6, 0x6
	  bl        -0x42B744

	.loc_0x54:
	  lwz       r4, -0x77D8(r13)
	  mr        r3, r27
	  li        r5, 0x1
	  bl        -0x435ECC
	  mr.       r27, r3
	  bne-      .loc_0x80
	  addi      r3, r28, 0
	  addi      r5, r28, 0x944
	  li        r4, 0x125
	  crclr     6, 0x6
	  bl        -0x42B770

	.loc_0x80:
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x78A0
	  li        r5, 0x1
	  bl        -0x435EF8
	  mr.       r31, r3
	  bne-      .loc_0xAC
	  addi      r3, r28, 0
	  addi      r5, r28, 0x944
	  li        r4, 0x127
	  crclr     6, 0x6
	  bl        -0x42B79C

	.loc_0xAC:
	  mr        r3, r27
	  bl        -0x432830
	  bl        -0x3643A4
	  mr        r3, r29
	  bl        -0x367190
	  mr        r3, r31
	  bl        -0x432854
	  li        r0, 0
	  addi      r3, r28, 0x950
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r7, -0x77D4(r13)
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x436C9C
	  mr        r4, r3
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        -0x4053C
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x11C
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x11C:
	  lwz       r3, -0x78E0(r13)
	  lwz       r3, 0x94(r3)
	  bl        -0x43C490

	.loc_0x128:
	  addi      r3, r1, 0x10
	  li        r4, 0
	  li        r5, 0
	  bl        -0x40D94
	  addi      r4, r2, 0x2880
	  mr        r27, r3
	  bl        -0x38B7B4
	  cmpwi     r3, 0
	  beq-      .loc_0x168
	  lbz       r0, 0x4(r30)
	  mr        r4, r27
	  lwz       r3, -0x6458(r13)
	  cntlzw    r0, r0
	  rlwinm    r5,r0,27,5,31
	  bl        -0x232CC
	  b         .loc_0x128

	.loc_0x168:
	  bl        -0x367264
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r30,r0,1,31,31
	  bl        -0x3644A8
	  mr        r3, r31
	  bl        -0x432900
	  bl        -0x364474
	  mr        r3, r30
	  bl        -0x367260
	  lmw       r27, 0x43C(r1)
	  lwz       r0, 0x454(r1)
	  mtlr      r0
	  addi      r1, r1, 0x450
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455ED8
 * Size:	0000B8
 */
void Pikmin2ARAM::Mgr::load2D(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stw       r31, 0x11C(r1)
	  stw       r30, 0x118(r1)
	  stw       r29, 0x114(r1)
	  mr        r29, r3
	  lwz       r4, -0x78E0(r13)
	  lwz       r3, 0x94(r4)
	  bl        -0x43C534
	  lis       r3, 0x804F
	  li        r30, 0
	  subi      r31, r3, 0x24A0

	.loc_0x34:
	  lwz       r4, 0x0(r31)
	  addi      r3, r1, 0x8
	  bl        -0x13DFC8
	  lbz       r0, 0x4(r29)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x6458(r13)
	  cntlzw    r0, r0
	  rlwinm    r5,r0,27,5,31
	  bl        -0x23364
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0xD
	  blt+      .loc_0x34
	  lis       r3, 0x804F
	  li        r30, 0
	  subi      r31, r3, 0x246C

	.loc_0x74:
	  lbz       r0, 0x4(r29)
	  lwz       r3, -0x6458(r13)
	  cntlzw    r0, r0
	  lwz       r4, 0x0(r31)
	  rlwinm    r5,r0,27,5,31
	  bl        -0x23398
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x4
	  blt+      .loc_0x74
	  lwz       r0, 0x124(r1)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455F90
 * Size:	000078
 */
void Pikmin2ARAM::Mgr::loadDemo(void)
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
	  lwz       r4, -0x78E0(r13)
	  lwz       r3, 0x94(r4)
	  bl        -0x43C5EC
	  lis       r3, 0x804F
	  li        r30, 0
	  subi      r31, r3, 0x245C

	.loc_0x34:
	  lbz       r0, 0x4(r29)
	  lwz       r3, -0x6458(r13)
	  cntlzw    r0, r0
	  lwz       r4, 0x0(r31)
	  rlwinm    r5,r0,27,5,31
	  bl        -0x23410
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x13
	  blt+      .loc_0x34
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
 * Address:	80456008
 * Size:	000078
 */
void Pikmin2ARAM::Mgr::loadItem(void)
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
	  lwz       r4, -0x78E0(r13)
	  lwz       r3, 0x94(r4)
	  bl        -0x43C664
	  lis       r3, 0x804F
	  li        r30, 0
	  subi      r31, r3, 0x2410

	.loc_0x34:
	  lbz       r0, 0x4(r29)
	  lwz       r3, -0x6458(r13)
	  cntlzw    r0, r0
	  lwz       r4, 0x0(r31)
	  rlwinm    r5,r0,27,5,31
	  bl        -0x23488
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x18
	  blt+      .loc_0x34
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
 * Address:	80456080
 * Size:	000048
 */
Pikmin2ARAM::Mgr::~Mgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804F
	  extsh.    r0, r4
	  subi      r0, r5, 0x23B0
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x431FF8

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
