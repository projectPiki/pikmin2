#include "types.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000CC
	 */
	void setBlendPane(J2DBlendInfo, J2DScreen*, unsigned long long*)
	{
		// UNUSED FUNCTION
	}

	namespace Game {

		/*
		 * --INFO--
		 * Address:	8014ADA0
		 * Size:	00021C
		 */
		BaseGameSection::BaseGameSection(JKRHeap*)
		{
			/*
			.loc_0x0:
			  stwu      r1, -0x30(r1)
			  mflr      r0
			  stw       r0, 0x34(r1)
			  stw       r31, 0x2C(r1)
			  mr        r31, r3
			  stw       r30, 0x28(r1)
			  bl        0x19E38
			  lis       r4, 0x804B
			  addi      r3, r31, 0x5C
			  addi      r0, r4, 0xF0C
			  stw       r0, 0x0(r31)
			  bl        0x2D9A4C
			  li        r0, 0
			  li        r3, 0
			  stb       r0, 0x164(r31)
			  li        r5, 0x2
			  li        r6, 0x1
			  lwz       r4, 0x1C(r31)
			  bl        -0xC12C0
			  mr        r4, r3
			  mr        r3, r31
			  li        r5, 0x1
			  bl        0x19FDC
			  li        r3, 0x2
			  li        r0, 0
			  stw       r3, 0x114(r31)
			  li        r3, 0x14
			  stw       r0, 0x13C(r31)
			  stw       r0, 0x14C(r31)
			  bl        -0x126F70
			  cmplwi    r3, 0
			  beq-      .loc_0xC8
			  lis       r4, 0x804B
			  lis       r5, 0x804B
			  addi      r8, r4, 0xC8C
			  lis       r4, 0x804B
			  lwz       r7, 0x0(r8)
			  addi      r5, r5, 0x1064
			  lwz       r6, 0x4(r8)
			  addi      r0, r4, 0x1058
			  lwz       r4, 0x8(r8)
			  stw       r7, 0x14(r1)
			  stw       r5, 0x0(r3)
			  stw       r0, 0x0(r3)
			  stw       r31, 0x4(r3)
			  stw       r7, 0x8(r3)
			  stw       r6, 0xC(r3)
			  stw       r6, 0x18(r1)
			  stw       r4, 0x1C(r1)
			  stw       r4, 0x10(r3)

			.loc_0xC8:
			  stw       r3, 0x148(r31)
			  li        r3, 0x14
			  bl        -0x126FCC
			  cmplwi    r3, 0
			  beq-      .loc_0x124
			  lis       r4, 0x804B
			  lis       r5, 0x804B
			  addi      r8, r4, 0xC98
			  lis       r4, 0x804B
			  lwz       r7, 0x0(r8)
			  addi      r5, r5, 0x104C
			  lwz       r6, 0x4(r8)
			  addi      r0, r4, 0x1040
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

			.loc_0x124:
			  stw       r3, -0x6D50(r13)
			  li        r0, 0
			  li        r3, 0x2C
			  stw       r0, 0x50(r31)
			  stw       r0, -0x6960(r13)
			  stw       r0, -0x6958(r13)
			  stw       r0, -0x6980(r13)
			  stw       r0, -0x6DF8(r13)
			  stw       r0, -0x6DE8(r13)
			  stw       r0, 0x128(r31)
			  stw       r0, 0x118(r31)
			  stw       r0, 0xFC(r31)
			  stw       r0, -0x6D4C(r13)
			  stw       r0, 0x100(r31)
			  stw       r0, 0x168(r31)
			  stw       r0, 0x158(r31)
			  stw       r0, 0x154(r31)
			  stw       r0, 0x15C(r31)
			  stw       r0, 0x160(r31)
			  stw       r0, 0x170(r31)
			  stw       r0, 0x16C(r31)
			  stw       r0, 0xE0(r31)
			  bl        -0x127078
			  mr.       r0, r3
			  beq-      .loc_0x190
			  bl        0x2E149C
			  mr        r0, r3

			.loc_0x190:
			  stw       r0, 0xD0(r31)
			  li        r3, 0x28
			  bl        -0x127094
			  mr.       r0, r3
			  beq-      .loc_0x1AC
			  bl        0x2E0F74
			  mr        r0, r3

			.loc_0x1AC:
			  stw       r0, 0xD4(r31)
			  li        r3, 0x28
			  bl        -0x1270B0
			  mr.       r0, r3
			  beq-      .loc_0x1C8
			  bl        0x2E1114
			  mr        r0, r3

			.loc_0x1C8:
			  stw       r0, 0xD8(r31)
			  li        r3, 0x78
			  bl        -0x1270CC
			  mr.       r30, r3
			  beq-      .loc_0x1FC
			  bl        0x2E0D90
			  lis       r4, 0x804F
			  addi      r3, r30, 0x24
			  subi      r0, r4, 0x40F4
			  stw       r0, 0x0(r30)
			  bl        0x2E10E4
			  addi      r3, r30, 0x4C
			  bl        0x2E0F20

			.loc_0x1FC:
			  stw       r30, 0xDC(r31)
			  mr        r3, r31
			  lwz       r0, 0x34(r1)
			  lwz       r31, 0x2C(r1)
			  lwz       r30, 0x28(r1)
			  mtlr      r0
			  addi      r1, r1, 0x30
			  blr
			*/
		}

	} // namespace Game

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	8014AFBC
 * Size:	000070
 */
WipeInFader::~WipeInFader()
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
	  subi      r0, r4, 0x40A4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x407C
	  stw       r0, 0x0(r30)
	  bl        0x2C658C

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x126F58

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
 * Address:	8014B02C
 * Size:	000070
 */
WipeOutFader::~WipeOutFader()
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
	  subi      r0, r4, 0x40CC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x407C
	  stw       r0, 0x0(r30)
	  bl        0x2C651C

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x126FC8

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
 * Address:	8014B09C
 * Size:	000060
 */
WipeBase::~WipeBase()
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
	  subi      r0, r5, 0x407C
	  stw       r0, 0x0(r30)
	  bl        0x2C64BC
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x127028

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

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
DvdThreadCommand::~DvdThreadCommand()
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	8014B0FC
 * Size:	000074
 */
void BaseGameSection::useSpecificFBTexture(JUTTexture*)
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
	  lwz       r0, 0x158(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x369C
	  li        r4, 0x5F3
	  subi      r5, r5, 0x3688
	  crclr     6, 0x6
	  bl        -0x120AFC

	.loc_0x44:
	  lwz       r0, 0x154(r30)
	  stw       r0, 0x158(r30)
	  stw       r31, 0x154(r30)
	  lwz       r0, 0x154(r30)
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x54(r3)
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
 * Address:	8014B170
 * Size:	00006C
 */
void BaseGameSection::restoreFBTexture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x158(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x369C
	  li        r4, 0x5FD
	  subi      r5, r5, 0x3678
	  crclr     6, 0x6
	  bl        -0x120B68

	.loc_0x3C:
	  lwz       r3, 0x158(r31)
	  li        r0, 0
	  stw       r3, 0x154(r31)
	  stw       r0, 0x158(r31)
	  lwz       r0, 0x154(r31)
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x54(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014B1DC
 * Size:	000114
 */
BaseGameSection::~BaseGameSection(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  beq-      .loc_0xF4
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r0, r4, 0xF0C
	  stw       r0, 0x0(r31)
	  lwz       r0, -0x6780(r13)
	  stw       r3, -0x6D4C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3654
	  li        r4, 0x1D3
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x120BF8

	.loc_0x60:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x88
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3654
	  li        r4, 0x1DC
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x120C20

	.loc_0x88:
	  mr        r3, r30
	  bl        0x1F6F78
	  bl        0x26DEE8
	  lwz       r3, -0x65E8(r13)
	  bl        0x270434
	  bl        0x26FD3C
	  lwz       r3, -0x6BC8(r13)
	  bl        0x99F7C
	  li        r3, 0
	  addic.    r0, r31, 0x5C
	  stw       r3, -0x6AE0(r13)
	  stw       r3, -0x6AF0(r13)
	  stw       r3, -0x6AD8(r13)
	  stw       r3, -0x6B08(r13)
	  stw       r3, -0x6B00(r13)
	  beq-      .loc_0xD8
	  addic.    r3, r31, 0xB8
	  beq-      .loc_0xD8
	  li        r4, 0
	  bl        -0x124AE0

	.loc_0xD8:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x199F4
	  extsh.    r0, r29
	  ble-      .loc_0xF4
	  mr        r3, r31
	  bl        -0x127218

	.loc_0xF4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	8014B2F0
 * Size:	000050
 */
void BaseGameSection::loadSync(IDelegate*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r5, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r4, r30, 0x5C
	  lwz       r3, -0x6514(r13)
	  bl        0x2D7C20
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x50
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	8014B340
 * Size:	000120
 */
void BaseGameSection::waitSyncLoad(bool)
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
	  lbz       r0, -0x6D44(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x3C
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x6D48(r13)
	  stb       r0, -0x6D44(r13)

	.loc_0x3C:
	  lwz       r4, -0x6D48(r13)
	  mr        r3, r29
	  addi      r0, r4, 0x1
	  stw       r0, -0x6D48(r13)
	  bl        0x2D8C64
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x70
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x363C
	  li        r6, 0x3
	  li        r4, 0x1
	  bl        0x69BE8

	.loc_0x70:
	  lis       r3, 0x8051
	  subi      r31, r3, 0xDD0

	.loc_0x78:
	  mr        r3, r29
	  bl        0x2D8C10
	  mr        r3, r29
	  bl        0x2D8C50
	  mr        r3, r31
	  bl        -0xED7C0
	  lfs       f1, -0x5EC8(r2)
	  lfs       f3, -0x5EC4(r2)
	  fmr       f2, f1
	  lfs       f4, -0x5EC0(r2)
	  fmr       f5, f1
	  lfs       f6, -0x5EBC(r2)
	  bl        -0x61C58
	  li        r3, 0
	  li        r4, 0x10
	  li        r5, 0x260
	  li        r6, 0x1C0
	  bl        -0x61C24
	  mr        r3, r29
	  bl        0x2D8C34
	  lwz       r0, 0x74(r29)
	  cmpwi     r0, 0x2
	  bne-      .loc_0xF8
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x104
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x363C
	  li        r6, 0x3
	  li        r4, 0
	  bl        0x69B64
	  b         .loc_0x104

	.loc_0xF8:
	  mr        r3, r29
	  bl        0x2D8BB4
	  b         .loc_0x78

	.loc_0x104:
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
 * Address:	8014B460
 * Size:	000050
 */
void BaseGameSection::dvdloadGameSystem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x5C
	  bl        -0x1275D4
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x695F8
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, -0x6C18(r13)
	  mr        r3, r0
	  bl        0x697D0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014B4B0
 * Size:	000390
 */
void BaseGameSection::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x64(r1)
	  li        r0, 0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  stw       r28, 0x50(r1)
	  stb       r0, 0x164(r3)
	  lis       r3, 0x8048
	  subi      r31, r3, 0x36B8
	  stw       r0, 0x48(r29)
	  lis       r3, 0x804B
	  addi      r30, r3, 0xC70
	  addi      r4, r31, 0x8C
	  stw       r0, 0x13C(r29)
	  addi      r3, r1, 0x10
	  bl        0x2D6D34
	  addi      r3, r1, 0x8
	  addi      r4, r31, 0x98
	  li        r5, 0
	  bl        0x2D6D24
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0xA4
	  li        r5, 0
	  bl        0x2D7E40
	  addi      r3, r1, 0x8
	  li        r4, -0x1
	  bl        0x2D6D5C
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1E0
	  bl        0x2D6DE8
	  lis       r3, 0x804B
	  lwz       r5, 0x34(r30)
	  addi      r6, r3, 0xF00
	  lwz       r4, 0x38(r30)
	  lwz       r0, 0x3C(r30)
	  lis       r3, 0x804B
	  stw       r6, 0x30(r1)
	  addi      r6, r3, 0xEF4
	  mr        r3, r29
	  stw       r6, 0x30(r1)
	  stw       r29, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r4, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  bl        0x2D8A5C
	  mr        r3, r29
	  bl        0x2D8A9C
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0xED978
	  lfs       f1, -0x5EC8(r2)
	  lfs       f3, -0x5EC4(r2)
	  fmr       f2, f1
	  lfs       f4, -0x5EC0(r2)
	  fmr       f5, f1
	  lfs       f6, -0x5EBC(r2)
	  bl        -0x61E10
	  li        r3, 0
	  li        r4, 0x10
	  li        r5, 0x260
	  li        r6, 0x1C0
	  bl        -0x61DDC
	  lwz       r3, 0x2C(r29)
	  lwzu      r12, 0xBC(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  bl        0x2D8A68
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x5C
	  addi      r5, r1, 0x30
	  bl        0x2D7958
	  lbz       r0, -0x6D44(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x150
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x6D48(r13)
	  stb       r0, -0x6D44(r13)

	.loc_0x150:
	  lwz       r4, -0x6D48(r13)
	  mr        r3, r29
	  addi      r0, r4, 0x1
	  stw       r0, -0x6D48(r13)
	  bl        0x2D89E0
	  lis       r3, 0x8051
	  subi      r28, r3, 0xDD0

	.loc_0x16C:
	  mr        r3, r29
	  bl        0x2D89AC
	  mr        r3, r29
	  bl        0x2D89EC
	  mr        r3, r28
	  bl        -0xEDA24
	  lfs       f1, -0x5EC8(r2)
	  lfs       f3, -0x5EC4(r2)
	  fmr       f2, f1
	  lfs       f4, -0x5EC0(r2)
	  fmr       f5, f1
	  lfs       f6, -0x5EBC(r2)
	  bl        -0x61EBC
	  li        r3, 0
	  li        r4, 0x10
	  li        r5, 0x260
	  li        r6, 0x1C0
	  bl        -0x61E88
	  mr        r3, r29
	  bl        0x2D89D0
	  lwz       r0, 0x74(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1D4
	  mr        r3, r29
	  bl        0x2D8974
	  b         .loc_0x16C

	.loc_0x1D4:
	  mr        r3, r29
	  li        r4, 0
	  bl        0x19898
	  li        r3, 0x60
	  bl        -0x1277F0
	  mr.       r0, r3
	  beq-      .loc_0x1F8
	  bl        -0x18E34
	  mr        r0, r3

	.loc_0x1F8:
	  stw       r0, 0xF8(r29)
	  addi      r3, r31, 0xBC
	  bl        0x2D6C30
	  li        r3, 0x1F8
	  bl        -0x127814
	  mr.       r0, r3
	  beq-      .loc_0x21C
	  bl        0x2E103C
	  mr        r0, r3

	.loc_0x21C:
	  stw       r0, -0x64AC(r13)
	  li        r3, 0x14
	  bl        -0x127830
	  cmplwi    r3, 0
	  beq-      .loc_0x270
	  lwz       r8, 0x40(r30)
	  lis       r4, 0x804B
	  lwz       r7, 0x44(r30)
	  addi      r5, r4, 0xEE8
	  lwz       r6, 0x48(r30)
	  lis       r4, 0x804B
	  addi      r0, r4, 0xEDC
	  stw       r8, 0x24(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r29, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r7, 0xC(r3)
	  stw       r7, 0x28(r1)
	  stw       r6, 0x2C(r1)
	  stw       r6, 0x10(r3)

	.loc_0x270:
	  stw       r3, 0xC8(r29)
	  li        r3, 0x14
	  bl        -0x127884
	  cmplwi    r3, 0
	  beq-      .loc_0x2C4
	  lwz       r8, 0x4C(r30)
	  lis       r4, 0x804B
	  lwz       r7, 0x50(r30)
	  addi      r5, r4, 0xEE8
	  lwz       r6, 0x54(r30)
	  lis       r4, 0x804B
	  addi      r0, r4, 0xEDC
	  stw       r8, 0x18(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r29, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r7, 0xC(r3)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r6, 0x10(r3)

	.loc_0x2C4:
	  stw       r3, 0xCC(r29)
	  li        r4, 0x2
	  lwz       r3, -0x6514(r13)
	  bl        0x2D7DAC
	  addi      r3, r31, 0xD8
	  bl        0x2D6B58
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x11C(r29)
	  addi      r3, r31, 0xF8
	  stw       r0, -0x6CF8(r13)
	  bl        0x2D6B2C
	  addi      r3, r31, 0x114
	  bl        0x2D6B24
	  bl        0x1C3EA8
	  bl        0x2B0728
	  lwz       r4, -0x6560(r13)
	  li        r0, 0x1
	  addi      r3, r31, 0x130
	  lwz       r4, 0x18(r4)
	  stb       r0, 0x90(r4)
	  bl        0x2D6B04
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x160(r29)
	  stw       r0, 0x15C(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xF0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0xA4
	  bl        0x2D7B5C
	  li        r0, 0
	  addi      r3, r1, 0x10
	  stw       r0, 0x134(r29)
	  li        r4, -0x1
	  bl        0x2D6A68
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
 * Address:	8014B840
 * Size:	000004
 */
void BaseGameSection::onInit(void) { }

/*
 * --INFO--
 * Address:	8014B844
 * Size:	000034
 */
void BaseGameSection::drawInit(Graphics&, Section::EDrawInitMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0x2
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x24
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014B878
 * Size:	000004
 */
void BaseGameSection::section_fadeout(void) { }

/*
 * --INFO--
 * Address:	8014B87C
 * Size:	0003A8
 */
void BaseGameSection::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r0, 0
	  mr        r31, r3
	  stw       r0, -0x6400(r13)
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6560(r13)
	  bl        0x2B076C
	  lbz       r0, 0x58(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  mr        r3, r31
	  bl        0x415C

	.loc_0x5C:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EB8
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2DF1FC
	  mr        r3, r31
	  bl        0x3C78
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EB8
	  lwz       r3, 0x28(r3)
	  bl        0x2DF1E8
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EB0
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2DF1D0
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EAC
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2DF1BC
	  mr        r3, r31
	  bl        0x3E5C
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EAC
	  lwz       r3, 0x28(r3)
	  bl        0x2DF1A8
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EA4
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2DF190
	  lwz       r3, -0x6958(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  bl        0x107C34

	.loc_0x100:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x110
	  bl        0xF5D28

	.loc_0x110:
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  bl        -0x30D78

	.loc_0x120:
	  lwz       r3, -0x6DE8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
	  lwz       r3, 0x128(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x158
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x158:
	  bl        0x2F3678
	  li        r30, 0
	  b         .loc_0x194

	.loc_0x164:
	  mr        r4, r30
	  bl        0x2D9C0C
	  mr.       r29, r3
	  beq-      .loc_0x190
	  bl        0x2D9850
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        0x3AC0

	.loc_0x190:
	  addi      r30, r30, 0x1

	.loc_0x194:
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x24(r3)
	  lwz       r0, 0x264(r3)
	  cmpw      r30, r0
	  blt+      .loc_0x164
	  mr        r3, r31
	  bl        0x19580
	  lwz       r3, -0x6BE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  bl        0x7AA58

	.loc_0x1C0:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EA4
	  lwz       r3, 0x28(r3)
	  bl        0x2DF0B4
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5EB0
	  lwz       r3, 0x28(r3)
	  bl        0x2DF0A4
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5E9C
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2DF08C
	  lwz       r3, -0x6C18(r13)
	  bl        0x69554
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x268
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5E94
	  lfs       f0, -0x5EBC(r2)
	  li        r5, 0x1
	  lfs       f1, 0x54(r3)
	  lwz       r3, 0x28(r3)
	  fdivs     f31, f1, f0
	  bl        0x2DF05C
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x24C
	  lwz       r3, -0x6514(r13)
	  bl        0x2D7404
	  lwz       r3, -0x6D38(r13)
	  bl        0xB838
	  li        r0, 0x1
	  stb       r0, -0x6D2B(r13)

	.loc_0x24C:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5E94
	  lwz       r3, 0x28(r3)
	  bl        0x2DF028
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x3A3C

	.loc_0x268:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5E9C
	  lwz       r3, 0x28(r3)
	  bl        0x2DF00C
	  lwz       r6, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x356C
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x2DEFF0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C8
	  bl        0x694AC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C8
	  lwz       r3, -0x65E8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C8:
	  lwz       r3, -0x65F8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  bl        0x26DA60

	.loc_0x2D8:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x356C
	  lwz       r3, 0x28(r5)
	  bl        0x2DEF98
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x35C
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x4D(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x35C
	  lwz       r4, 0x44(r4)
	  li        r0, 0
	  cmpwi     r4, 0x1
	  beq-      .loc_0x334
	  cmpwi     r4, 0x3
	  bne-      .loc_0x338

	.loc_0x334:
	  li        r0, 0x1

	.loc_0x338:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x350
	  lwz       r4, 0x10C(r31)
	  lwz       r5, 0x110(r31)
	  bl        0x2E1AA4
	  b         .loc_0x35C

	.loc_0x350:
	  lwz       r4, 0x10C(r31)
	  li        r5, 0
	  bl        0x2E1A94

	.loc_0x35C:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x36C
	  bl        0xF5A70

	.loc_0x36C:
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x34(r31)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014BC24
 * Size:	000004
 */
void BaseGameSection::onUpdate(void) { }

/*
 * --INFO--
 * Address:	8014BC28
 * Size:	000170
 */
void BaseGameSection::doDraw(Graphics&)
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
	  bl        0x5AF0
	  lwz       r3, -0x6C18(r13)
	  bl        0x6937C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  lwz       r3, -0x6960(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  li        r4, 0x2
	  bl        0x106804
	  lwz       r3, -0x6960(r13)
	  bl        0x10645C
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x2
	  bl        0x106860
	  b         .loc_0x6C

	.loc_0x5C:
	  lwz       r3, -0x6960(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  bl        0x10643C

	.loc_0x6C:
	  lwz       r6, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x3560
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x2DEE50
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x3560
	  lwz       r3, 0x28(r5)
	  bl        0x2DEE28
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x4D(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0xD4
	  mr        r4, r31
	  bl        0x2E28F4

	.loc_0xD4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  subi      r4, r2, 0x5E8C
	  bl        0x2D99F4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x13C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xEF7E8

	.loc_0x128:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r31
	  bl        0x2B4318
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x158
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x4D(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  mr        r4, r31
	  bl        0x2E20DC

	.loc_0x158:
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
 * Address:	8014BD98
 * Size:	000004
 */
void BaseGameSection::pre2dDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8014BD9C
 * Size:	000078
 */
void BaseGameSection::movieDone(Game::MovieConfig*, unsigned long,
                                unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  li        r4, 0x1
	  bl        -0x102E4
	  lwz       r3, 0x13C(r31)
	  li        r4, 0
	  bl        -0x10CEC
	  li        r0, 0
	  stw       r0, 0x13C(r31)
	  lwz       r3, -0x6560(r13)
	  bl        0x2B1760
	  lwz       r3, -0x6560(r13)
	  bl        0x2B15D0
	  li        r0, 0
	  stw       r0, 0x134(r31)

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014BE14
 * Size:	000004
 */
void BaseGameSection::onMovieDone(Game::MovieConfig*, unsigned long,
                                  unsigned long)
{
}

/*
 * --INFO--
 * Address:	8014BE18
 * Size:	00008C
 */
void BaseGameSection::onMovieCommand(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x30
	  bge-      .loc_0x24
	  cmpwi     r4, 0
	  beq-      .loc_0x7C
	  b         .loc_0x7C

	.loc_0x24:
	  cmpwi     r4, 0x4
	  bge-      .loc_0x7C
	  b         .loc_0x50

	.loc_0x30:
	  lwz       r4, -0x64AC(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x1F0(r4)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x7C
	  bl        0x56D4
	  b         .loc_0x7C

	.loc_0x50:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x7C
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0
	  bl        0x13E24

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014BEA4
 * Size:	000450
 */
void BaseGameSection::initJ3D(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  subi      r31, r4, 0x36B8
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  li        r3, 0x20
	  bl        -0x128024
	  mr.       r0, r3
	  beq-      .loc_0x38
	  bl        0x309AA4
	  mr        r0, r3

	.loc_0x38:
	  stw       r0, 0x12C(r30)
	  li        r3, 0x20
	  bl        -0x128040
	  mr.       r0, r3
	  beq-      .loc_0x54
	  bl        0x309A88
	  mr        r0, r3

	.loc_0x54:
	  stw       r0, 0x130(r30)
	  li        r4, 0xA
	  lwz       r3, 0x12C(r30)
	  bl        0x309B28
	  lwz       r3, 0x12C(r30)
	  subi      r0, r2, 0x5E88
	  li        r7, 0
	  li        r6, 0x1
	  stw       r0, 0x14(r3)
	  subi      r5, r2, 0x5E84
	  li        r3, 0x80
	  subi      r0, r2, 0x5E7C
	  stb       r7, 0x28(r1)
	  li        r4, 0
	  stb       r7, 0x29(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x2C(r1)
	  stb       r7, 0x28(r1)
	  stb       r7, 0x29(r1)
	  stw       r7, 0x30(r1)
	  stw       r7, 0x34(r1)
	  stw       r3, 0x24(r1)
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309B6C
	  addi      r4, r1, 0x24
	  bl        0x30985C
	  addi      r0, r31, 0x164
	  li        r3, 0x1
	  stw       r3, 0x24(r1)
	  li        r4, 0x1
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309B48
	  addi      r4, r1, 0x24
	  bl        0x309838
	  li        r4, 0x1
	  subi      r3, r2, 0x5E74
	  li        r0, 0x5
	  stw       r4, 0x24(r1)
	  li        r4, 0x2
	  stw       r3, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309B1C
	  addi      r4, r1, 0x24
	  bl        0x30980C
	  li        r4, 0x1
	  subi      r3, r2, 0x5E70
	  li        r0, 0
	  stw       r4, 0x24(r1)
	  li        r4, 0x3
	  stw       r3, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309AF0
	  addi      r4, r1, 0x24
	  bl        0x3097E0
	  li        r3, 0x1
	  subi      r0, r2, 0x5E68
	  stw       r3, 0x24(r1)
	  li        r4, 0x4
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309ACC
	  addi      r4, r1, 0x24
	  bl        0x3097BC
	  li        r3, 0x1
	  subi      r0, r2, 0x5E8C
	  stw       r3, 0x24(r1)
	  li        r4, 0x5
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309AA8
	  addi      r4, r1, 0x24
	  bl        0x309798
	  li        r3, 0x1
	  subi      r0, r2, 0x5E60
	  stw       r3, 0x24(r1)
	  li        r4, 0x6
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309A84
	  addi      r4, r1, 0x24
	  bl        0x309774
	  addi      r0, r31, 0x174
	  li        r3, 0x1
	  stw       r3, 0x24(r1)
	  li        r4, 0x7
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309A60
	  addi      r4, r1, 0x24
	  bl        0x309750
	  addi      r0, r31, 0x180
	  li        r3, 0x1
	  stw       r3, 0x24(r1)
	  li        r4, 0x8
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309A3C
	  addi      r4, r1, 0x24
	  bl        0x30972C
	  li        r3, 0x1
	  subi      r0, r2, 0x5E58
	  stw       r3, 0x24(r1)
	  li        r4, 0x9
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x12C(r30)
	  bl        0x309A18
	  addi      r4, r1, 0x24
	  bl        0x309708
	  lwz       r3, 0x130(r30)
	  li        r4, 0xA
	  bl        0x30996C
	  lwz       r3, 0x130(r30)
	  subi      r0, r2, 0x5E50
	  li        r8, 0
	  li        r7, 0x1
	  stw       r0, 0x14(r3)
	  subi      r6, r2, 0x5E84
	  li        r3, 0x80
	  subi      r0, r2, 0x5E7C
	  stb       r8, 0x14(r1)
	  li        r4, 0
	  stb       r8, 0x15(r1)
	  stb       r8, 0x14(r1)
	  stb       r8, 0x15(r1)
	  lhz       r5, 0x14(r1)
	  stw       r7, 0x10(r1)
	  ori       r5, r5, 0x1
	  stw       r6, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r8, 0x20(r1)
	  sth       r5, 0x14(r1)
	  stw       r3, 0x10(r1)
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x3099A4
	  addi      r4, r1, 0x10
	  bl        0x309694
	  li        r3, 0x1
	  subi      r0, r2, 0x5E7C
	  stw       r3, 0x10(r1)
	  li        r4, 0x1
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x309980
	  addi      r4, r1, 0x10
	  bl        0x309670
	  li        r3, 0x1
	  subi      r0, r2, 0x5E74
	  stw       r3, 0x10(r1)
	  li        r4, 0x2
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x30995C
	  addi      r4, r1, 0x10
	  bl        0x30964C
	  li        r3, 0x1
	  subi      r0, r2, 0x5E70
	  stw       r3, 0x10(r1)
	  li        r4, 0x3
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x309938
	  addi      r4, r1, 0x10
	  bl        0x309628
	  li        r3, 0x1
	  subi      r0, r2, 0x5E68
	  stw       r3, 0x10(r1)
	  li        r4, 0x4
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x309914
	  addi      r4, r1, 0x10
	  bl        0x309604
	  li        r3, 0x1
	  subi      r0, r2, 0x5E8C
	  stw       r3, 0x10(r1)
	  li        r4, 0x5
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x3098F0
	  addi      r4, r1, 0x10
	  bl        0x3095E0
	  li        r3, 0x1
	  subi      r0, r2, 0x5E60
	  stw       r3, 0x10(r1)
	  li        r4, 0x6
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x3098CC
	  addi      r4, r1, 0x10
	  bl        0x3095BC
	  addi      r0, r31, 0x174
	  li        r3, 0x1
	  stw       r3, 0x10(r1)
	  li        r4, 0x7
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x3098A8
	  addi      r4, r1, 0x10
	  bl        0x309598
	  addi      r0, r31, 0x180
	  li        r3, 0x1
	  stw       r3, 0x10(r1)
	  li        r4, 0x8
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x309884
	  addi      r4, r1, 0x10
	  bl        0x309574
	  li        r3, 0x1
	  subi      r0, r2, 0x5E58
	  stw       r3, 0x10(r1)
	  li        r4, 0x9
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x130(r30)
	  bl        0x309860
	  addi      r4, r1, 0x10
	  bl        0x309550
	  lwz       r4, 0x12C(r30)
	  mr        r3, r30
	  bl        0x18D38
	  lwz       r4, 0x130(r30)
	  mr        r3, r30
	  bl        0x18D2C
	  lwz       r3, 0x12C(r30)
	  li        r4, 0
	  bl        0x309834
	  lis       r4, 0x8051
	  lwz       r0, 0x1C(r3)
	  subi      r3, r4, 0xDD0
	  li        r4, 0
	  stw       r0, 0x48(r3)
	  lwz       r3, 0x130(r30)
	  bl        0x309818
	  lwz       r0, 0x1C(r3)
	  lis       r3, 0x8051
	  subi      r4, r3, 0xDD0
	  addi      r3, r1, 0x8
	  stw       r0, 0x4C(r4)
	  subi      r4, r2, 0x5E4C
	  li        r5, 0
	  bl        0x2D5F64
	  addi      r3, r1, 0x8
	  li        r4, -0x1
	  bl        0x2D5FAC
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014C2F4
 * Size:	000034
 */
void BaseGameSection::initResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x3EA4
	  mr        r3, r31
	  bl        0x4400
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014C328
 * Size:	0001E4
 */
void BaseGameSection::initViewports(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  li        r3, 0x18
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r4
	  bl        -0x1284A8
	  mr.       r0, r3
	  beq-      .loc_0x3C
	  mr        r4, r29
	  bl        0x2D8B34
	  mr        r0, r3

	.loc_0x3C:
	  stw       r0, 0x118(r31)
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3834
	  lwz       r30, 0x104(r31)
	  mr        r3, r29
	  li        r4, 0
	  bl        0x2D9270
	  stw       r30, 0x44(r3)
	  bl        0x2D8F08
	  lwz       r30, 0x108(r31)
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x2D9258
	  stw       r30, 0x44(r3)
	  bl        0x2D8EF0
	  mr        r3, r29
	  li        r4, 0
	  bl        0x2D9244
	  mr        r4, r3
	  lwz       r3, -0x6980(r13)
	  li        r5, 0
	  bl        0xF529C
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x2D9228
	  mr        r4, r3
	  lwz       r3, -0x6980(r13)
	  li        r5, 0x1
	  bl        0xF5280
	  mr        r3, r29
	  li        r4, 0
	  bl        0x2D920C
	  mr        r4, r3
	  lwz       r3, -0x6960(r13)
	  li        r5, 0
	  bl        0x105A50
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x2D91F0
	  mr        r4, r3
	  lwz       r3, -0x6960(r13)
	  li        r5, 0x1
	  bl        0x105A34
	  lwz       r3, -0x6960(r13)
	  li        r4, 0
	  bl        0x105AD0
	  li        r3, 0x1B0
	  bl        -0x128580
	  mr.       r30, r3
	  beq-      .loc_0x118
	  bl        0x2CF068
	  lis       r3, 0x804C
	  addi      r0, r3, 0x1694
	  stw       r0, 0x0(r30)

	.loc_0x118:
	  stw       r30, 0x14C(r31)
	  li        r3, 0x58
	  bl        -0x1285A4
	  mr.       r0, r3
	  beq-      .loc_0x134
	  bl        0x2D8C48
	  mr        r0, r3

	.loc_0x134:
	  stw       r0, 0x138(r31)
	  li        r0, 0x2
	  lwz       r3, 0x138(r31)
	  sth       r0, 0x18(r3)
	  bl        0x2D6DB8
	  lhz       r30, 0x4(r3)
	  bl        0x2D6DB0
	  lhz       r29, 0x6(r3)
	  bl        0x2D6DA8
	  bl        0x2D6DA4
	  lfs       f3, -0x5EC8(r2)
	  lis       r0, 0x4330
	  stw       r30, 0x1C(r1)
	  addi      r4, r1, 0x8
	  fmr       f4, f3
	  lfs       f0, -0x5E44(r2)
	  stw       r0, 0x18(r1)
	  lfd       f2, -0x5E40(r2)
	  fsubs     f4, f4, f0
	  lfd       f1, 0x18(r1)
	  stw       r29, 0x24(r1)
	  fsubs     f1, f1, f2
	  stw       r0, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x8(r1)
	  fsubs     f0, f0, f2
	  stfs      f4, 0xC(r1)
	  fadds     f0, f4, f0
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x138(r31)
	  bl        0x2D8EA4
	  lwz       r3, 0x138(r31)
	  lwz       r0, 0x14C(r31)
	  stw       r0, 0x44(r3)
	  bl        0x2D8DA4
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8014C50C
 * Size:	0000C0
 */
LookAtCamera::~LookAtCamera()
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
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4860
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804F
	  subi      r0, r4, 0x47E0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4764
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2C4FEC

	.loc_0x94:
	  extsh.    r0, r31
	  ble-      .loc_0xA4
	  mr        r3, r30
	  bl        -0x1284F8

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

namespace Game {

/*
 * --INFO--
 * Address:	8014C5CC
 * Size:	001120
 */
void BaseGameSection::initGenerators(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1CA0(r1)
	  mflr      r0
	  stw       r0, 0x1CA4(r1)
	  li        r0, 0x1C98
	  stfd      f31, 0x1C90(r1)
	  vpkuhum   v31, v1, v0
	  stmw      r19, 0x1C5C(r1)
	  mr        r30, r3
	  lis       r4, 0x8048
	  lwz       r3, -0x6B40(r13)
	  subi      r31, r4, 0x36B8
	  bl        0xA5490
	  bl        0x5E1DC
	  li        r3, 0x70
	  bl        -0x128760
	  mr.       r4, r3
	  beq-      .loc_0x4C
	  bl        0x5EE48
	  mr        r4, r3

	.loc_0x4C:
	  stw       r4, -0x6C58(r13)
	  addi      r0, r31, 0x18C
	  mr        r3, r30
	  stw       r0, 0x14(r4)
	  lwz       r4, -0x6C58(r13)
	  bl        0x18984
	  li        r3, 0x70
	  bl        -0x128790
	  mr.       r4, r3
	  beq-      .loc_0x7C
	  bl        0x5EE18
	  mr        r4, r3

	.loc_0x7C:
	  stw       r4, -0x6C54(r13)
	  addi      r0, r31, 0x1A0
	  mr        r3, r30
	  stw       r0, 0x14(r4)
	  lwz       r4, -0x6C54(r13)
	  bl        0x18954
	  li        r3, 0x70
	  bl        -0x1287C0
	  mr.       r5, r3
	  beq-      .loc_0xAC
	  bl        0x5EDE8
	  mr        r5, r3

	.loc_0xAC:
	  stw       r5, -0x6C50(r13)
	  addi      r4, r31, 0x1B0
	  li        r0, 0x1
	  mr        r3, r30
	  stw       r4, 0x14(r5)
	  lwz       r4, -0x6C50(r13)
	  stb       r0, 0x6C(r4)
	  lwz       r4, -0x6C50(r13)
	  bl        0x18918
	  li        r3, 0x70
	  bl        -0x1287FC
	  mr.       r4, r3
	  beq-      .loc_0xE8
	  bl        0x5EDAC
	  mr        r4, r3

	.loc_0xE8:
	  stw       r4, -0x6C4C(r13)
	  addi      r0, r31, 0x1C4
	  mr        r3, r30
	  stw       r0, 0x14(r4)
	  lwz       r4, -0x6C4C(r13)
	  bl        0x188E8
	  li        r3, 0x70
	  bl        -0x12882C
	  mr.       r4, r3
	  beq-      .loc_0x118
	  bl        0x5ED7C
	  mr        r4, r3

	.loc_0x118:
	  stw       r4, -0x6C48(r13)
	  addi      r0, r31, 0x1D4
	  mr        r3, r30
	  stw       r0, 0x14(r4)
	  lwz       r4, -0x6C48(r13)
	  bl        0x188B8
	  li        r3, 0x14
	  bl        -0x12885C
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r8, r4, 0xCC8
	  lis       r4, 0x804B
	  lwz       r7, 0x0(r8)
	  addi      r5, r5, 0xDF4
	  lwz       r6, 0x4(r8)
	  addi      r0, r4, 0xDE8
	  lwz       r4, 0x8(r8)
	  stw       r7, 0x4C(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r30, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r6, 0x50(r1)
	  stw       r4, 0x54(r1)
	  stw       r4, 0x10(r3)

	.loc_0x188:
	  stw       r3, -0x6C44(r13)
	  bl        -0x27ED4
	  bl        0x60660
	  bl        0xB60C8
	  bl        0x5FD84
	  bl        0x60358
	  lwz       r3, -0x6CF8(r13)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x8EC
	  bl        0xF0CA0
	  lwz       r4, -0x6CF8(r13)
	  lwz       r3, -0x6B40(r13)
	  lwz       r4, 0xC(r4)
	  lwz       r4, 0x48(r4)
	  bl        0xA5598
	  lwz       r3, -0x6B40(r13)
	  bl        0xA5A44
	  lwz       r5, -0x6CF8(r13)
	  addi      r3, r1, 0x298
	  addi      r4, r31, 0x1E4
	  li        r29, 0
	  lwz       r5, 0xC(r5)
	  lwz       r5, 0x1C(r5)
	  crclr     6, 0x6
	  bl        -0x85380
	  li        r0, 0
	  addi      r3, r1, 0x298
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x12D65C
	  mr.       r20, r3
	  beq-      .loc_0x274
	  mr        r4, r20
	  addi      r3, r1, 0x1838
	  li        r5, -0x1
	  bl        0x2C90FC
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1844(r1)
	  bne-      .loc_0x24C
	  li        r0, 0
	  stw       r0, 0x1C4C(r1)

	.loc_0x24C:
	  lwz       r3, -0x6C58(r13)
	  addi      r4, r1, 0x1838
	  li        r5, 0
	  bl        0x5F3F4
	  lwz       r3, -0x6C58(r13)
	  bl        0x5EEEC
	  lwz       r0, -0x6C58(r13)
	  li        r29, 0x1
	  stw       r20, 0x198(r1)
	  stw       r0, 0x98(r1)

	.loc_0x274:
	  lwz       r5, -0x6CF8(r13)
	  addi      r3, r1, 0x298
	  addi      r4, r31, 0x1F8
	  lwz       r5, 0xC(r5)
	  lwz       r5, 0x1C(r5)
	  crclr     6, 0x6
	  bl        -0x85420
	  addi      r3, r1, 0x298
	  bl        -0x706FC
	  cmpwi     r3, -0x1
	  beq-      .loc_0x330
	  li        r0, 0
	  addi      r3, r1, 0x298
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x12D70C
	  mr.       r20, r3
	  beq-      .loc_0x330
	  mr        r4, r20
	  addi      r3, r1, 0x1418
	  li        r5, -0x1
	  bl        0x2C904C
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1424(r1)
	  bne-      .loc_0x2FC
	  li        r0, 0
	  stw       r0, 0x182C(r1)

	.loc_0x2FC:
	  lwz       r3, -0x6C4C(r13)
	  addi      r4, r1, 0x1418
	  li        r5, 0
	  bl        0x5F344
	  lwz       r3, -0x6C4C(r13)
	  bl        0x5EE3C
	  lwz       r0, -0x6C4C(r13)
	  rlwinm    r5,r29,2,0,29
	  addi      r4, r1, 0x198
	  addi      r3, r1, 0x98
	  stwx      r20, r4, r5
	  addi      r29, r29, 0x1
	  stwx      r0, r3, r5

	.loc_0x330:
	  lwz       r4, -0x6CF8(r13)
	  lwz       r3, -0x6B70(r13)
	  lwz       r28, 0xC(r4)
	  lwz       r4, 0x48(r28)
	  bl        0x9CDB4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3FC
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x48(r28)
	  bl        0x9CADC
	  lwz       r5, 0x1C(r28)
	  addi      r3, r1, 0x298
	  addi      r4, r31, 0x20C
	  crclr     6, 0x6
	  bl        -0x854FC
	  li        r0, 0
	  addi      r3, r1, 0x298
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x12D7D8
	  mr.       r20, r3
	  beq-      .loc_0x3FC
	  mr        r4, r20
	  addi      r3, r1, 0xFF8
	  li        r5, -0x1
	  bl        0x2C8F80
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1004(r1)
	  bne-      .loc_0x3C8
	  li        r0, 0
	  stw       r0, 0x140C(r1)

	.loc_0x3C8:
	  lwz       r3, -0x6C54(r13)
	  addi      r4, r1, 0xFF8
	  li        r5, 0
	  bl        0x5F278
	  lwz       r3, -0x6C54(r13)
	  bl        0x5ED70
	  lwz       r0, -0x6C54(r13)
	  rlwinm    r5,r29,2,0,29
	  addi      r4, r1, 0x198
	  addi      r3, r1, 0x98
	  stwx      r20, r4, r5
	  addi      r29, r29, 0x1
	  stwx      r0, r3, r5

	.loc_0x3FC:
	  lwz       r3, -0x6C18(r13)
	  rlwinm    r0,r29,2,0,29
	  addi      r24, r1, 0x198
	  addi      r26, r1, 0x98
	  lwz       r3, 0x40(r3)
	  add       r24, r24, r0
	  add       r26, r26, r0
	  li        r21, 0
	  lwz       r27, 0x218(r3)
	  b         .loc_0x568

	.loc_0x424:
	  mr        r4, r21
	  addi      r3, r28, 0x50
	  bl        0x2C4CA4
	  mr        r25, r3
	  lwz       r0, 0x18(r3)
	  cmpw      r0, r27
	  bgt-      .loc_0x564
	  lwz       r0, 0x1C(r25)
	  cmpw      r27, r0
	  bgt-      .loc_0x564
	  lwz       r3, -0x6B70(r13)
	  rlwinm    r4,r21,0,16,31
	  lwz       r0, 0x48(r28)
	  lwz       r3, 0xE4(r3)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  bl        0x2CF9CC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x564
	  lwz       r5, 0x1C(r28)
	  addi      r3, r1, 0x298
	  lwz       r6, 0x14(r25)
	  addi      r4, r31, 0x21C
	  crclr     6, 0x6
	  bl        -0x85618
	  li        r0, 0
	  addi      r3, r1, 0x298
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x12D8F4
	  mr.       r20, r3
	  beq-      .loc_0x564
	  mr        r4, r20
	  addi      r3, r1, 0xBD8
	  li        r5, -0x1
	  bl        0x2C8E64
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0xBE4(r1)
	  bne-      .loc_0x4E4
	  li        r0, 0
	  stw       r0, 0xFEC(r1)

	.loc_0x4E4:
	  li        r3, 0x70
	  bl        -0x128C10
	  mr.       r22, r3
	  beq-      .loc_0x4FC
	  bl        0x5E998
	  mr        r22, r3

	.loc_0x4FC:
	  li        r0, 0x1
	  mr        r3, r22
	  stb       r0, 0x6C(r22)
	  addi      r4, r1, 0xBD8
	  li        r5, 0
	  bl        0x5F13C
	  lwz       r4, 0x20(r25)
	  mr        r3, r22
	  bl        0x5EC14
	  mr        r3, r22
	  bl        0x5EC28
	  stw       r20, 0x0(r24)
	  mr        r4, r22
	  lwz       r3, -0x6C50(r13)
	  addi      r29, r29, 0x1
	  stw       r22, 0x0(r26)
	  addi      r26, r26, 0x4
	  addi      r24, r24, 0x4
	  bl        0x5EA68
	  lwz       r3, -0x6B70(r13)
	  rlwinm    r4,r21,0,16,31
	  lwz       r0, 0x48(r28)
	  lwz       r3, 0xE4(r3)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  bl        0x2CF870

	.loc_0x564:
	  addi      r21, r21, 0x1

	.loc_0x568:
	  lwz       r0, 0x4C(r28)
	  cmpw      r21, r0
	  blt+      .loc_0x424
	  lwz       r3, -0x6C18(r13)
	  lis       r4, 0x8889
	  subi      r25, r4, 0x7777
	  lwz       r3, 0x40(r3)
	  mulhw     r4, r25, r27
	  lwz       r0, 0x218(r3)
	  mulhw     r3, r25, r0
	  add       r4, r4, r27
	  srawi     r4, r4, 0x4
	  add       r0, r3, r0
	  rlwinm    r3,r4,1,31,31
	  srawi     r0, r0, 0x4
	  add       r4, r4, r3
	  rlwinm    r3,r0,1,31,31
	  mulli     r4, r4, 0x1E
	  add       r0, r0, r3
	  cmpwi     r0, 0x1
	  sub       r27, r27, r4
	  blt-      .loc_0x778
	  mulli     r21, r0, 0x1E
	  rlwinm    r0,r29,2,0,29
	  addi      r23, r1, 0x198
	  addi      r22, r1, 0x98
	  add       r23, r23, r0
	  li        r20, 0
	  add       r22, r22, r0
	  b         .loc_0x76C

	.loc_0x5E0:
	  mr        r4, r20
	  addi      r3, r28, 0x78
	  bl        0x2C4AE8
	  mr        r26, r3
	  lwz       r7, 0x1C(r3)
	  lwz       r4, 0x18(r3)
	  mulhw     r3, r25, r7
	  mulhw     r0, r25, r4
	  add       r3, r3, r7
	  srawi     r5, r3, 0x4
	  add       r0, r0, r4
	  rlwinm    r6,r5,1,31,31
	  srawi     r0, r0, 0x4
	  rlwinm    r3,r0,1,31,31
	  add       r5, r5, r6
	  add       r0, r0, r3
	  mulli     r0, r0, 0x1E
	  mulli     r3, r5, 0x1E
	  sub       r0, r4, r0
	  cmpw      r0, r27
	  sub       r0, r7, r3
	  bgt-      .loc_0x768
	  cmpw      r27, r0
	  bgt-      .loc_0x768
	  lwz       r3, -0x6B70(r13)
	  rlwinm    r4,r20,0,16,31
	  lwz       r0, 0x48(r28)
	  lwz       r5, 0xE4(r3)
	  rlwinm    r3,r0,4,0,27
	  addi      r3, r3, 0x8
	  add       r3, r5, r3
	  bl        0x2CF7D4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x768
	  lwz       r5, 0x1C(r28)
	  addi      r3, r1, 0x298
	  lwz       r6, 0x14(r26)
	  addi      r4, r31, 0x22C
	  crclr     6, 0x6
	  bl        -0x85810
	  li        r0, 0
	  addi      r3, r1, 0x298
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x12DAEC
	  mr.       r24, r3
	  beq-      .loc_0x768
	  mr        r4, r24
	  addi      r3, r1, 0x7B8
	  li        r5, -0x1
	  bl        0x2C8C6C
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x7C4(r1)
	  bne-      .loc_0x6DC
	  li        r0, 0
	  stw       r0, 0xBCC(r1)

	.loc_0x6DC:
	  li        r3, 0x70
	  bl        -0x128E08
	  mr.       r19, r3
	  beq-      .loc_0x6F4
	  bl        0x5E7A0
	  mr        r19, r3

	.loc_0x6F4:
	  li        r0, 0x1
	  mr        r3, r19
	  stb       r0, 0x6C(r19)
	  addi      r4, r1, 0x7B8
	  li        r5, 0
	  bl        0x5EF44
	  lwz       r4, 0x20(r26)
	  mr        r3, r19
	  subi      r4, r4, 0x1E
	  add       r4, r4, r21
	  bl        0x5EA14
	  mr        r3, r19
	  bl        0x5EA28
	  stw       r24, 0x0(r23)
	  mr        r4, r19
	  lwz       r3, -0x6C50(r13)
	  addi      r29, r29, 0x1
	  stw       r19, 0x0(r22)
	  addi      r22, r22, 0x4
	  addi      r23, r23, 0x4
	  bl        0x5E868
	  lwz       r3, -0x6B70(r13)
	  rlwinm    r4,r20,0,16,31
	  lwz       r0, 0x48(r28)
	  lwz       r5, 0xE4(r3)
	  rlwinm    r3,r0,4,0,27
	  addi      r3, r3, 0x8
	  add       r3, r5, r3
	  bl        0x2CF66C

	.loc_0x768:
	  addi      r20, r20, 0x1

	.loc_0x76C:
	  lwz       r0, 0x74(r28)
	  cmpw      r20, r0
	  blt+      .loc_0x5E0

	.loc_0x778:
	  lwz       r4, -0x6C18(r13)
	  lis       r3, 0x8889
	  subi      r0, r3, 0x7777
	  lwz       r5, 0x1C(r28)
	  lwz       r6, 0x40(r4)
	  addi      r3, r1, 0x298
	  addi      r4, r31, 0x238
	  lwz       r7, 0x218(r6)
	  mulhw     r0, r0, r7
	  add       r0, r0, r7
	  srawi     r0, r0, 0x4
	  rlwinm    r6,r0,1,31,31
	  add       r0, r0, r6
	  mulli     r0, r0, 0x1E
	  sub       r6, r7, r0
	  crclr     6, 0x6
	  bl        -0x8594C
	  addi      r3, r1, 0x298
	  bl        -0x70C28
	  cmpwi     r3, -0x1
	  beq-      .loc_0x85C
	  li        r0, 0
	  addi      r3, r1, 0x298
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x12DC38
	  mr.       r19, r3
	  beq-      .loc_0x85C
	  mr        r4, r19
	  addi      r3, r1, 0x398
	  li        r5, -0x1
	  bl        0x2C8B20
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x3A4(r1)
	  bne-      .loc_0x828
	  li        r0, 0
	  stw       r0, 0x7AC(r1)

	.loc_0x828:
	  lwz       r3, -0x6C48(r13)
	  addi      r4, r1, 0x398
	  li        r5, 0
	  bl        0x5EE18
	  lwz       r3, -0x6C48(r13)
	  bl        0x5E910
	  lwz       r0, -0x6C48(r13)
	  rlwinm    r5,r29,2,0,29
	  addi      r4, r1, 0x198
	  addi      r3, r1, 0x98
	  stwx      r19, r4, r5
	  addi      r29, r29, 0x1
	  stwx      r0, r3, r5

	.loc_0x85C:
	  lwz       r0, 0x114(r30)
	  li        r5, -0x1
	  lwz       r3, -0x6E20(r13)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x3F840
	  lwz       r3, -0x6E20(r13)
	  bl        -0x3FE8C
	  lwz       r3, -0x6CE0(r13)
	  bl        0x20560
	  subi      r20, r29, 0x1
	  addi      r19, r1, 0x198
	  rlwinm    r0,r20,2,0,29
	  add       r19, r19, r0
	  b         .loc_0x8A4

	.loc_0x894:
	  lwz       r3, 0x0(r19)
	  bl        -0x128D8C
	  subi      r19, r19, 0x4
	  subi      r20, r20, 0x1

	.loc_0x8A4:
	  cmpwi     r20, 0
	  bge+      .loc_0x894
	  addi      r19, r1, 0x98
	  li        r20, 0
	  b         .loc_0x8C8

	.loc_0x8B8:
	  lwz       r3, 0x0(r19)
	  bl        0x5E72C
	  addi      r19, r19, 0x4
	  addi      r20, r20, 0x1

	.loc_0x8C8:
	  cmpw      r20, r29
	  blt+      .loc_0x8B8
	  lwz       r3, -0x6B40(r13)
	  bl        0xA5388
	  lwz       r4, -0x6CF8(r13)
	  lwz       r3, -0x6B40(r13)
	  lwz       r4, 0xC(r4)
	  lwz       r4, 0x48(r4)
	  bl        0xA4F9C

	.loc_0x8EC:
	  bl        0xF0660
	  li        r0, 0
	  lwz       r3, -0x6D20(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x94(r1)
	  subi      r4, r4, 0x434C
	  cmplwi    r0, 0
	  stw       r4, 0x88(r1)
	  li        r19, 0
	  stw       r0, 0x8C(r1)
	  stw       r3, 0x90(r1)
	  bne-      .loc_0x934
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8C(r1)
	  b         .loc_0xA78

	.loc_0x934:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8C(r1)
	  b         .loc_0x9A0

	.loc_0x94C:
	  lwz       r3, 0x90(r1)
	  lwz       r4, 0x8C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA78
	  lwz       r3, 0x90(r1)
	  lwz       r4, 0x8C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8C(r1)

	.loc_0x9A0:
	  lwz       r12, 0x88(r1)
	  addi      r3, r1, 0x88
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x94C
	  b         .loc_0xA78

	.loc_0x9C0:
	  lwz       r0, 0x94(r1)
	  addi      r19, r19, 0x1
	  cmplwi    r0, 0
	  bne-      .loc_0x9EC
	  lwz       r3, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8C(r1)
	  b         .loc_0xA78

	.loc_0x9EC:
	  lwz       r3, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8C(r1)
	  b         .loc_0xA5C

	.loc_0xA08:
	  lwz       r3, 0x90(r1)
	  lwz       r4, 0x8C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA78
	  lwz       r3, 0x90(r1)
	  lwz       r4, 0x8C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8C(r1)

	.loc_0xA5C:
	  lwz       r12, 0x88(r1)
	  addi      r3, r1, 0x88
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xA08

	.loc_0xA78:
	  lwz       r3, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x9C0
	  cmpwi     r19, 0x1
	  beq-      .loc_0xF64
	  bge-      .loc_0xAB0
	  cmpwi     r19, 0
	  bge-      .loc_0xABC
	  b         .loc_0x1100

	.loc_0xAB0:
	  cmpwi     r19, 0x3
	  bge-      .loc_0x1100
	  b         .loc_0x10A0

	.loc_0xABC:
	  lfs       f0, -0x5EC8(r2)
	  li        r22, 0
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  bl        0x15658
	  lfs       f3, -0x5E38(r2)
	  fmr       f31, f1
	  lfs       f2, -0x5EC8(r2)
	  lfs       f0, -0x5E34(r2)
	  stfs      f3, 0x7C(r1)
	  lwz       r3, -0x6C18(r13)
	  stfs      f2, 0x80(r1)
	  stfs      f0, 0x84(r1)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xB60
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0x1
	  bl        0x2E9C4
	  mr.       r19, r3
	  bne-      .loc_0xB2C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x70
	  li        r4, 0xAB3
	  crclr     6, 0x6
	  bl        -0x122AB4

	.loc_0xB2C:
	  mr        r4, r19
	  addi      r3, r1, 0x40
	  lwz       r12, 0x0(r19)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x40(r1)
	  lfs       f1, 0x44(r1)
	  lfs       f0, 0x48(r1)
	  stfs      f2, 0x7C(r1)
	  stfs      f1, 0x80(r1)
	  stfs      f0, 0x84(r1)
	  b         .loc_0xC44

	.loc_0xB60:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xBE0
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x7C
	  li        r5, 0
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x7C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5E30(r2)
	  lfs       f3, 0x7C(r1)
	  lfs       f2, -0x5E2C(r2)
	  fadds     f4, f0, f1
	  lfs       f1, 0x84(r1)
	  lfs       f0, -0x5E28(r2)
	  fadds     f2, f3, f2
	  stfs      f4, 0x80(r1)
	  fadds     f0, f1, f0
	  stfs      f2, 0x7C(r1)
	  stfs      f0, 0x84(r1)
	  b         .loc_0xC44

	.loc_0xBE0:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x7C
	  addi      r5, r1, 0x28
	  bl        -0x625F0
	  lfs       f2, 0x28(r1)
	  addi      r4, r1, 0x7C
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x30(r1)
	  stfs      f2, 0x7C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x80(r1)
	  stfs      f0, 0x84(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5EC8(r2)
	  stfs      f1, 0x80(r1)
	  stfs      f0, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  stfs      f0, 0x78(r1)

	.loc_0xC44:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  mr        r20, r3
	  bl        -0x12264
	  fmr       f1, f31
	  bl        0x2C499C
	  stfs      f1, 0x1FC(r20)
	  mr        r3, r20
	  addi      r4, r1, 0x7C
	  li        r5, 0
	  lwz       r0, 0x104(r30)
	  stw       r0, 0x280(r20)
	  stw       r0, 0x284(r20)
	  lwz       r0, 0x10C(r30)
	  stw       r0, 0x278(r20)
	  stw       r0, 0x27C(r20)
	  bl        -0x120B8
	  mr        r3, r20
	  addi      r4, r1, 0x70
	  lwz       r12, 0x0(r20)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x20(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xCD0
	  mr        r3, r20
	  bl        -0xA56C
	  li        r22, 0x1
	  b         .loc_0xCD8

	.loc_0xCD0:
	  lfs       f0, 0x24(r3)
	  stfs      f0, 0x2A0(r20)

	.loc_0xCD8:
	  lwz       r3, -0x6CF8(r13)
	  bl        0x15450
	  lfs       f3, -0x5E24(r2)
	  fmr       f31, f1
	  lfs       f2, -0x5EC8(r2)
	  lfs       f0, -0x5E20(r2)
	  stfs      f3, 0x7C(r1)
	  lwz       r3, -0x6C18(r13)
	  stfs      f2, 0x80(r1)
	  stfs      f0, 0x84(r1)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xD68
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0
	  bl        0x2E7BC
	  mr.       r19, r3
	  bne-      .loc_0xD34
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x70
	  li        r4, 0xAE7
	  crclr     6, 0x6
	  bl        -0x122CBC

	.loc_0xD34:
	  mr        r4, r19
	  addi      r3, r1, 0x34
	  lwz       r12, 0x0(r19)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x34(r1)
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x3C(r1)
	  stfs      f2, 0x7C(r1)
	  stfs      f1, 0x80(r1)
	  stfs      f0, 0x84(r1)
	  b         .loc_0xE4C

	.loc_0xD68:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xDE8
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x7C
	  li        r5, 0
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x7C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5E30(r2)
	  lfs       f3, 0x7C(r1)
	  lfs       f2, -0x5E1C(r2)
	  fadds     f4, f0, f1
	  lfs       f1, 0x84(r1)
	  lfs       f0, -0x5E18(r2)
	  fadds     f2, f3, f2
	  stfs      f4, 0x80(r1)
	  fadds     f0, f1, f0
	  stfs      f2, 0x7C(r1)
	  stfs      f0, 0x84(r1)
	  b         .loc_0xE4C

	.loc_0xDE8:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x7C
	  addi      r5, r1, 0x1C
	  bl        -0x627F8
	  lfs       f2, 0x1C(r1)
	  addi      r4, r1, 0x7C
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0x24(r1)
	  stfs      f2, 0x7C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x80(r1)
	  stfs      f0, 0x84(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5EC8(r2)
	  stfs      f1, 0x80(r1)
	  stfs      f0, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  stfs      f0, 0x78(r1)

	.loc_0xE4C:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  mr        r21, r3
	  bl        -0x1246C
	  lwz       r0, 0x108(r30)
	  fmr       f1, f31
	  stw       r0, 0x280(r21)
	  stw       r0, 0x284(r21)
	  lwz       r0, 0x110(r30)
	  stw       r0, 0x278(r21)
	  stw       r0, 0x27C(r21)
	  bl        0x2C477C
	  stfs      f1, 0x1FC(r21)
	  mr        r3, r21
	  addi      r4, r1, 0x7C
	  li        r5, 0
	  bl        -0x122C0
	  mr        r3, r21
	  addi      r4, r1, 0x70
	  lwz       r12, 0x0(r21)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x20(r3)
	  rlwinm.   r0,r0,31,31,31
	  bne-      .loc_0xED0
	  lfs       f0, 0x28(r3)
	  stfs      f0, 0x2A0(r21)

	.loc_0xED0:
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x20(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0xEEC
	  mr        r3, r21
	  bl        -0xA78C
	  b         .loc_0x1100

	.loc_0xEEC:
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF08
	  cmpwi     r0, 0x3
	  bne-      .loc_0xF0C

	.loc_0xF08:
	  li        r3, 0x1

	.loc_0xF0C:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1100
	  rlwinm.   r0,r22,0,24,31
	  bne-      .loc_0x1100
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5D00
	  li        r5, 0
	  stw       r0, 0x64(r1)
	  addi      r6, r3, 0x49BC
	  li        r0, 0x1
	  mr        r3, r21
	  stw       r20, 0x68(r1)
	  addi      r4, r1, 0x64
	  stw       r6, 0x64(r1)
	  stb       r5, 0x6C(r1)
	  stb       r0, 0x6D(r1)
	  lwz       r12, 0x0(r21)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1100

	.loc_0xF64:
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x248
	  li        r4, 0xB25
	  crclr     6, 0x6
	  bl        -0x122F00
	  lwz       r3, -0x6CF8(r13)
	  bl        0x151B0
	  lfs       f2, -0x5E24(r2)
	  lfs       f1, -0x5EC8(r2)
	  lfs       f0, -0x5E34(r2)
	  stfs      f2, 0x58(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xFC8
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x254
	  li        r4, 0xB2B
	  crclr     6, 0x6
	  bl        -0x122F50

	.loc_0xFC8:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x58
	  addi      r5, r1, 0x10
	  bl        -0x629D8
	  lfs       f2, 0x10(r1)
	  addi      r4, r1, 0x58
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x58(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5E30(r2)
	  li        r4, 0
	  lwz       r3, -0x6D20(r13)
	  fadds     f0, f0, f1
	  stfs      f0, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x104(r30)
	  stw       r0, 0x280(r3)
	  stw       r0, 0x284(r3)
	  lwz       r0, 0x10C(r30)
	  stw       r0, 0x278(r3)
	  stw       r0, 0x27C(r3)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  mr        r19, r3
	  bl        -0x12674
	  lwz       r0, 0x108(r30)
	  mr        r3, r19
	  addi      r4, r1, 0x58
	  li        r5, 0
	  stw       r0, 0x280(r19)
	  stw       r0, 0x284(r19)
	  lwz       r0, 0x110(r30)
	  stw       r0, 0x278(r19)
	  stw       r0, 0x27C(r19)
	  bl        -0x124BC
	  b         .loc_0x1100

	.loc_0x10A0:
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x104(r30)
	  li        r4, 0x1
	  stw       r0, 0x280(r3)
	  stw       r0, 0x284(r3)
	  lwz       r0, 0x10C(r30)
	  stw       r0, 0x278(r3)
	  stw       r0, 0x27C(r3)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x108(r30)
	  stw       r0, 0x280(r3)
	  stw       r0, 0x284(r3)
	  lwz       r0, 0x110(r30)
	  stw       r0, 0x278(r3)
	  stw       r0, 0x27C(r3)

	.loc_0x1100:
	  li        r0, 0x1C98
	  vmrghb    v31, v1, v0
	  lfd       f31, 0x1C90(r1)
	  lmw       r19, 0x1C5C(r1)
	  lwz       r0, 0x1CA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1CA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014D6EC
 * Size:	0000A4
 */
void BaseGameSection::advanceDayCount(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8889
	  stw       r0, 0x24(r1)
	  subi      r0, r3, 0x7777
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, 0x40(r4)
	  lwz       r3, 0x218(r3)
	  addi      r30, r3, 0x1
	  mulhw     r0, r0, r30
	  add       r0, r0, r30
	  srawi     r0, r0, 0x4
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  mulli     r0, r0, 0x1E
	  sub.      r0, r30, r0
	  bne-      .loc_0x7C
	  li        r29, 0
	  li        r31, 0

	.loc_0x58:
	  lwz       r4, -0x6B70(r13)
	  addi      r3, r31, 0x8
	  lwz       r0, 0xE4(r4)
	  add       r3, r0, r3
	  bl        0x2CEBF8
	  addi      r29, r29, 0x1
	  addi      r31, r31, 0x10
	  cmpwi     r29, 0x4
	  blt+      .loc_0x58

	.loc_0x7C:
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  stw       r30, 0x218(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014D790
 * Size:	0000D4
 */
void BaseGameSection::saveToGeneratorCache(Game::CourseInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  bne-      .loc_0x34
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x369C
	  li        r4, 0xB6B
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x123180

	.loc_0x34:
	  lwz       r3, -0x6B40(r13)
	  lwz       r4, 0x48(r31)
	  bl        0xA4AD4
	  lwz       r3, -0x6B40(r13)
	  bl        0xA4344
	  mr        r31, r3
	  b         .loc_0x6C

	.loc_0x50:
	  lhz       r0, 0x5C(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x68
	  lwz       r3, -0x6B40(r13)
	  mr        r4, r31
	  bl        0xA4C6C

	.loc_0x68:
	  lwz       r31, 0x4(r31)

	.loc_0x6C:
	  cmplwi    r31, 0
	  bne+      .loc_0x50
	  lwz       r3, -0x6B40(r13)
	  bl        0xA4310
	  mr        r31, r3
	  b         .loc_0xA8

	.loc_0x84:
	  lhz       r3, 0x5C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0xA4
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0xA4
	  lwz       r3, -0x6B40(r13)
	  mr        r4, r31
	  bl        0xA4D20

	.loc_0xA4:
	  lwz       r31, 0x4(r31)

	.loc_0xA8:
	  cmplwi    r31, 0
	  bne+      .loc_0x84
	  lwz       r3, -0x6B40(r13)
	  bl        0xA4E4C
	  lwz       r3, -0x6B40(r13)
	  bl        0xA4B4C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014D864
 * Size:	0000AC
 */
void BaseGameSection::pmTogglePlayer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xE4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x50
	  li        r4, 0x1
	  bl        0x90
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  lwz       r3, 0x24(r3)
	  bl        0x2D7D58
	  lwz       r4, -0x64AC(r13)
	  stw       r3, 0x198(r4)
	  lwz       r0, 0x108(r31)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)
	  b         .loc_0x84

	.loc_0x50:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x84
	  li        r4, 0
	  bl        0x58
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r3, 0x24(r3)
	  bl        0x2D7D20
	  lwz       r4, -0x64AC(r13)
	  stw       r3, 0x198(r4)
	  lwz       r0, 0x104(r31)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)

	.loc_0x84:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xE8(r12)
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
 * Address:	8014D910
 * Size:	000004
 */
void BaseGameSection::onTogglePlayer(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void BaseGameSection::pmPlayerJoin(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014D914
 * Size:	000004
 */
void BaseGameSection::onPlayerJoin(void) { }

/*
 * --INFO--
 * Address:	8014D918
 * Size:	0002B8
 */
void BaseGameSection::setPlayerMode(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  mr        r3, r28
	  bl        -0x9E80
	  mr        r3, r29
	  bl        -0x9E88
	  cmpwi     r31, 0x1
	  beq-      .loc_0x168
	  bge-      .loc_0x84
	  cmpwi     r31, 0
	  bge-      .loc_0x90
	  b         .loc_0x294

	.loc_0x84:
	  cmpwi     r31, 0x3
	  bge-      .loc_0x294
	  b         .loc_0x260

	.loc_0x90:
	  lfs       f1, -0x5EBC(r2)
	  lfs       f0, -0x5EC8(r2)
	  stfs      f1, 0xE8(r30)
	  stfs      f0, 0xEC(r30)
	  lwz       r3, 0x118(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x108(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x104(r30)
	  addi      r4, r4, 0x34
	  bl        -0x63720
	  lwz       r3, 0x104(r30)
	  bl        0x2CD3C0
	  lwz       r3, -0x6960(r13)
	  li        r4, 0
	  lwz       r5, -0x6D50(r13)
	  bl        0x104C54
	  lwz       r0, 0x114(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x134
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r29, 0x104(r30)
	  lwz       r28, 0x24(r3)
	  mr        r3, r28
	  bl        0x2D7BC8
	  stw       r29, 0x44(r3)
	  bl        0x2D7860
	  lwz       r29, 0x108(r30)
	  mr        r3, r28
	  li        r4, 0x1
	  bl        0x2D7BB0
	  stw       r29, 0x44(r3)
	  bl        0x2D7848

	.loc_0x134:
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r3, 0x24(r3)
	  bl        0x2D7B98
	  lwz       r4, -0x6514(r13)
	  lwz       r4, 0x24(r4)
	  stw       r3, 0x25C(r4)
	  lwz       r4, -0x6514(r13)
	  lwz       r3, 0x128(r30)
	  lwz       r4, 0x24(r4)
	  lwz       r4, 0x25C(r4)
	  bl        -0x2BAD0
	  b         .loc_0x294

	.loc_0x168:
	  lwz       r0, 0x114(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1CC
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r29, 0x108(r30)
	  lwz       r28, 0x24(r3)
	  mr        r3, r28
	  bl        0x2D7B50
	  stw       r29, 0x44(r3)
	  bl        0x2D77E8
	  lwz       r29, 0x104(r30)
	  mr        r3, r28
	  li        r4, 0x1
	  bl        0x2D7B38
	  stw       r29, 0x44(r3)
	  bl        0x2D77D0
	  lfs       f1, -0x5EBC(r2)
	  stfs      f1, 0xE8(r30)
	  lwz       r3, 0x118(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0x1CC:
	  lfs       f1, -0x5EC8(r2)
	  stfs      f1, 0xE8(r30)
	  lwz       r3, 0x118(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E8:
	  lfs       f0, -0x5EC8(r2)
	  li        r4, 0
	  stfs      f0, 0xEC(r30)
	  lwz       r3, 0x104(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x108(r30)
	  addi      r4, r4, 0x34
	  bl        -0x6385C
	  lwz       r3, 0x108(r30)
	  bl        0x2CD284
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x1
	  lwz       r5, -0x6D50(r13)
	  bl        0x104B18
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x1
	  lwz       r3, 0x24(r3)
	  bl        0x2D7AA0
	  lwz       r4, -0x6514(r13)
	  lwz       r4, 0x24(r4)
	  stw       r3, 0x25C(r4)
	  lwz       r4, -0x6514(r13)
	  lwz       r3, 0x128(r30)
	  lwz       r4, 0x24(r4)
	  lwz       r4, 0x25C(r4)
	  bl        -0x2BBC8
	  b         .loc_0x294

	.loc_0x260:
	  lfs       f1, -0x5E14(r2)
	  lfs       f0, -0x5EC8(r2)
	  stfs      f1, 0xE8(r30)
	  stfs      f0, 0xEC(r30)
	  lwz       r3, 0x118(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x2
	  lwz       r5, -0x6D50(r13)
	  bl        0x104AB0

	.loc_0x294:
	  stw       r31, 0xE4(r30)
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

} // namespace Game

/*
 * --INFO--
 * Address:	8014DBD0
 * Size:	000004
 */
void Splitter::split2(float) { }

namespace Game {

/*
 * --INFO--
 * Address:	8014DBD4
 * Size:	00014C
 */
void BaseGameSection::onCameraBlendFinished(Game::CameraArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  subi      r31, r4, 0x36B8
	  stw       r30, 0x48(r1)
	  bl        0x198
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x134
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x26
	  bl        0x997D4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x134
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x25
	  bl        0x997C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x134
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  bne-      .loc_0x8C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x264
	  li        r4, 0xC10
	  crclr     6, 0x6
	  bl        -0x12361C

	.loc_0x8C:
	  lfs       f0, -0x5EC8(r2)
	  li        r0, 0
	  addi      r5, r31, 0x270
	  stw       r0, 0x18(r1)
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  stw       r5, 0x14(r1)
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r30
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r30, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x2DECD8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x26
	  bl        0x996A0

	.loc_0x134:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014DD20
 * Size:	000068
 */
void BaseGameSection::setFixNearFar(bool, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f2
	  stfd      f30, 0x10(r1)
	  fmr       f30, f1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x104(r3)
	  bl        0x2CCAF0
	  fmr       f1, f30
	  lwz       r3, 0x108(r30)
	  fmr       f2, f31
	  mr        r4, r31
	  bl        0x2CCADC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014DD88
 * Size:	000210
 */
void BaseGameSection::setCamController(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xE4(r31)
	  mr        r30, r3
	  cmpwi     r0, 0x1
	  beq-      .loc_0xFC
	  bge-      .loc_0x70
	  cmpwi     r0, 0
	  bge-      .loc_0x7C
	  b         .loc_0x1DC

	.loc_0x70:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1DC
	  b         .loc_0x180

	.loc_0x7C:
	  lwz       r0, 0x104(r31)
	  stw       r0, 0x280(r29)
	  stw       r0, 0x284(r29)
	  lwz       r0, 0x10C(r31)
	  stw       r0, 0x278(r29)
	  stw       r0, 0x27C(r29)
	  bl        -0xA324
	  lwz       r3, -0x64AC(r13)
	  li        r4, 0
	  stw       r29, 0x18C(r3)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x24(r3)
	  bl        0x2D77BC
	  lwz       r5, -0x64AC(r13)
	  li        r4, 0
	  stw       r3, 0x198(r5)
	  lwz       r0, 0x104(r31)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xE0
	  cmpwi     r0, 0x3
	  bne-      .loc_0xE4

	.loc_0xE0:
	  li        r4, 0x1

	.loc_0xE4:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x1DC
	  li        r3, 0
	  bl        0x315374
	  bl        0x1E9DB0
	  b         .loc_0x1DC

	.loc_0xFC:
	  mr        r3, r29
	  bl        -0xA390
	  lwz       r0, 0x108(r31)
	  li        r4, 0x1
	  stw       r0, 0x280(r30)
	  stw       r0, 0x284(r30)
	  lwz       r0, 0x10C(r31)
	  stw       r0, 0x278(r30)
	  stw       r0, 0x27C(r30)
	  lwz       r3, -0x64AC(r13)
	  stw       r30, 0x18C(r3)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x24(r3)
	  bl        0x2D7738
	  lwz       r5, -0x64AC(r13)
	  li        r4, 0
	  stw       r3, 0x198(r5)
	  lwz       r0, 0x108(r31)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x164
	  cmpwi     r0, 0x3
	  bne-      .loc_0x168

	.loc_0x164:
	  li        r4, 0x1

	.loc_0x168:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x1DC
	  li        r3, 0x1
	  bl        0x3152F0
	  bl        0x1E9ECC
	  b         .loc_0x1DC

	.loc_0x180:
	  lwz       r0, 0x104(r31)
	  stw       r0, 0x280(r29)
	  stw       r0, 0x284(r29)
	  lwz       r0, 0x10C(r31)
	  stw       r0, 0x278(r29)
	  stw       r0, 0x27C(r29)
	  lwz       r0, 0x108(r31)
	  stw       r0, 0x280(r30)
	  stw       r0, 0x284(r30)
	  lwz       r0, 0x110(r31)
	  stw       r0, 0x278(r30)
	  stw       r0, 0x27C(r30)
	  lwz       r3, -0x64AC(r13)
	  stw       r29, 0x18C(r3)
	  lwz       r0, 0x104(r31)
	  lwz       r3, -0x64AC(r13)
	  stw       r0, 0x190(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x1DC
	  li        r3, 0
	  bl        0x31528C

	.loc_0x1DC:
	  mr        r3, r31
	  lwz       r4, 0xE4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xE4(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8014DF98
 * Size:	000004
 */
void BaseGameSection::on_setCamController(int) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void BaseGameSection::getNumWindows(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void BaseGameSection::getActivePlayerID(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014DF9C
 * Size:	000184
 */
void BaseGameSection::setDefaultPSSceneInfo(PSGame::SceneInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r0, 0x104(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x369C
	  li        r4, 0xC7D
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x12399C

	.loc_0x44:
	  lwz       r0, 0x108(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x369C
	  li        r4, 0xC7E
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x1239C4

	.loc_0x6C:
	  li        r0, 0x2
	  stb       r0, 0x7(r31)
	  lwz       r3, 0x104(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8(r31)
	  lwz       r3, 0x104(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x10(r31)
	  lwz       r3, 0x104(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r31)
	  lwz       r3, 0x108(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r31)
	  lwz       r3, 0x108(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r31)
	  lwz       r3, 0x108(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r31)
	  addi      r4, r1, 0x8
	  lfs       f1, -0x5E10(r2)
	  lfs       f0, -0x5E0C(r2)
	  stfs      f1, 0x8(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f3, 0x14(r1)
	  lfs       f4, 0x18(r1)
	  lfs       f5, 0x1C(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x20(r31)
	  stfs      f1, 0x24(r31)
	  stfs      f2, 0x28(r31)
	  stfs      f3, 0x2C(r31)
	  stfs      f4, 0x30(r31)
	  stfs      f5, 0x34(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8014E120
 * Size:	000008
 */
void Camera::getSoundMatrixPtr()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x84
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014E128
 * Size:	000008
 */
void Camera::getSoundPositionPtr()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x78
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014E130
 * Size:	00068C
 */
void prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3f b(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r30, r5
	  stw       r29, 0x74(r1)
	  mr        r29, r4
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  bl        0xD15C
	  rlwinm.   r0,r30,0,24,31
	  mr        r30, r3
	  beq-      .loc_0x298
	  lwz       r3, -0x6B90(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  addi      r3, r3, 0x30

	.loc_0x60:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5A4
	  stw       r0, 0x40(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x34(r1)
	  stw       r0, 0x38(r1)
	  stw       r3, 0x3C(r1)
	  bne-      .loc_0x9C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x278

	.loc_0x9C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x108

	.loc_0xB4:
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x278
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)

	.loc_0x108:
	  lwz       r12, 0x34(r1)
	  addi      r3, r1, 0x34
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB4
	  b         .loc_0x278

	.loc_0x128:
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  li        r3, 0
	  bl        0xE2490
	  li        r3, 0x7
	  bl        0xE2488
	  lwz       r5, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x180
	  cmpwi     r0, 0x3
	  bne-      .loc_0x184

	.loc_0x180:
	  li        r3, 0x1

	.loc_0x184:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x611C
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x58(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1BC:
	  lwz       r0, 0x40(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E8
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x278

	.loc_0x1E8:
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x25C

	.loc_0x208:
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x278
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)

	.loc_0x25C:
	  lwz       r12, 0x34(r1)
	  addi      r3, r1, 0x34
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x208

	.loc_0x278:
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x38(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x128

	.loc_0x298:
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x30(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x24(r1)
	  stw       r0, 0x28(r1)
	  stw       r3, 0x2C(r1)
	  bne-      .loc_0x2D8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x640

	.loc_0x2D8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x344

	.loc_0x2F0:
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x640
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)

	.loc_0x344:
	  lwz       r12, 0x24(r1)
	  addi      r3, r1, 0x24
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2F0
	  b         .loc_0x640

	.loc_0x364:
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r3)
	  mr        r31, r3
	  cmpwi     r0, 0x5
	  bne-      .loc_0x3A0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x584

	.loc_0x3A0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x584
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x3D8
	  mr        r3, r31
	  bl        -0x66B4
	  mr        r3, r31
	  bl        -0x55D0

	.loc_0x3D8:
	  mr        r3, r31
	  bl        0x50F18
	  lwz       r3, 0x28C(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  bl        0x3BB10
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  stw       r30, 0x2C4(r31)
	  bl        -0x84F9C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x4C(r1)
	  lfd       f3, -0x5DF8(r2)
	  stw       r0, 0x48(r1)
	  lfs       f2, -0x5E10(r2)
	  lfd       f0, 0x48(r1)
	  lfs       f1, -0x5E08(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x5EC8(r2)
	  fdivs     f2, f3, f2
	  fmuls     f4, f1, f2
	  fmr       f1, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x450
	  fneg      f1, f4

	.loc_0x450:
	  lfs       f2, -0x5E00(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5EC8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, -0x5E04(r2)
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f5, f3, f0
	  bge-      .loc_0x4B0
	  lfs       f0, -0x5DFC(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x4C8

	.loc_0x4B0:
	  fmuls     f0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x4C8:
	  fmuls     f4, f3, f0
	  lfs       f3, -0x5EC8(r2)
	  stfs      f5, 0x20(r1)
	  addi      r4, r1, 0x18
	  lwz       r3, -0x6CF8(r13)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  lfs       f2, 0x8(r29)
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0x0(r29)
	  fadds     f2, f5, f2
	  fadds     f1, f3, f1
	  fadds     f0, f4, f0
	  stfs      f2, 0x20(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x1C(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x18
	  li        r5, 0
	  bl        -0x134B0
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r0, r4, 0x530
	  lis       r4, 0x804B
	  stw       r0, 0xC(r1)
	  addi      r7, r4, 0x524
	  lis       r4, 0x804B
	  li        r0, 0x1
	  stb       r3, 0x14(r1)
	  addi      r6, r4, 0xD44
	  addi      r5, r1, 0xC
	  li        r4, 0
	  stw       r7, 0xC(r1)
	  stw       r30, 0x10(r1)
	  stw       r6, 0xC(r1)
	  stb       r3, 0x15(r1)
	  stb       r0, 0x14(r1)
	  lwz       r3, 0x294(r31)
	  bl        0x488F0
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x12C60

	.loc_0x584:
	  lwz       r0, 0x30(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x5B0
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x640

	.loc_0x5B0:
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x624

	.loc_0x5D0:
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x640
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)

	.loc_0x624:
	  lwz       r12, 0x24(r1)
	  addi      r3, r1, 0x24
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x5D0

	.loc_0x640:
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x28(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x364
	  cmplwi    r30, 0
	  beq-      .loc_0x670
	  mr        r3, r30
	  bl        -0x95E4

	.loc_0x670:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014E7BC
 * Size:	000714
 */
void prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  lwz       r3, -0x6B50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1E8
	  beq-      .loc_0x2C
	  addi      r3, r3, 0x30

	.loc_0x2C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x48(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  stw       r3, 0x44(r1)
	  bne-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x1C8

	.loc_0x68:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0xD4

	.loc_0x80:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C8
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0xD4:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x80
	  b         .loc_0x1C8

	.loc_0xF4:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  bl        0x9E57C
	  lwz       r0, 0x48(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x1C8

	.loc_0x138:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)
	  b         .loc_0x1AC

	.loc_0x158:
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C8
	  lwz       r3, 0x44(r1)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x40(r1)

	.loc_0x1AC:
	  lwz       r12, 0x3C(r1)
	  addi      r3, r1, 0x3C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x158

	.loc_0x1C8:
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x40(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xF4

	.loc_0x1E8:
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  bl        0xC908
	  lwz       r4, -0x6B90(r13)
	  mr        r31, r3
	  cmplwi    r4, 0
	  beq-      .loc_0x220
	  addi      r4, r4, 0x30

	.loc_0x220:
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r3, r3, 0x5A4
	  stw       r0, 0x38(r1)
	  cmplwi    r0, 0
	  stw       r3, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r4, 0x34(r1)
	  bne-      .loc_0x260
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x440

	.loc_0x260:
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x2D0

	.loc_0x27C:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x440
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0x2D0:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x27C
	  b         .loc_0x440

	.loc_0x2F0:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x384
	  li        r3, 0
	  bl        0xE1C3C
	  li        r3, 0x7
	  bl        0xE1C34
	  lwz       r5, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x348
	  cmpwi     r0, 0x3
	  bne-      .loc_0x34C

	.loc_0x348:
	  li        r3, 0x1

	.loc_0x34C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x384
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  addi      r0, r3, 0x611C
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x58(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x384:
	  lwz       r0, 0x38(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x3B0
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x440

	.loc_0x3B0:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x424

	.loc_0x3D0:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x440
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0x424:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x3D0

	.loc_0x440:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x30(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x2F0
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x43A0
	  lwz       r3, -0x6D0C(r13)
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0xD14
	  lfs       f1, -0x5E04(r2)
	  mr        r4, r30
	  stw       r0, 0x8(r1)
	  addi      r5, r1, 0x8
	  bl        0x10D24
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x28(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  stw       r3, 0x24(r1)
	  bne-      .loc_0x4CC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x6CC

	.loc_0x4CC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x538

	.loc_0x4E4:
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6CC
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)

	.loc_0x538:
	  lwz       r12, 0x1C(r1)
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x4E4
	  b         .loc_0x6CC

	.loc_0x558:
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r3)
	  mr        r30, r3
	  cmpwi     r0, 0x5
	  bne-      .loc_0x588
	  li        r4, 0
	  bl        -0x132EC
	  b         .loc_0x610

	.loc_0x588:
	  bl        0x506E0
	  lwz       r3, 0x28C(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  bl        0x3B2D8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r0, r4, 0x530
	  lis       r4, 0x804B
	  stw       r0, 0x10(r1)
	  addi      r5, r4, 0x524
	  lis       r4, 0x804B
	  li        r0, 0x1
	  stw       r5, 0x10(r1)
	  addi      r6, r4, 0xD44
	  addi      r5, r1, 0x10
	  li        r4, 0
	  stw       r31, 0x14(r1)
	  stw       r6, 0x10(r1)
	  stb       r3, 0x18(r1)
	  stb       r3, 0x19(r1)
	  stw       r31, 0x2C4(r30)
	  stb       r0, 0x18(r1)
	  lwz       r3, 0x294(r30)
	  bl        0x481D8
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x13378

	.loc_0x610:
	  lwz       r0, 0x28(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x63C
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x6CC

	.loc_0x63C:
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x6B0

	.loc_0x65C:
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6CC
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)

	.loc_0x6B0:
	  lwz       r12, 0x1C(r1)
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x65C

	.loc_0x6CC:
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x20(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x558
	  cmplwi    r31, 0
	  beq-      .loc_0x6FC
	  mr        r3, r31
	  bl        -0x9CFC

	.loc_0x6FC:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8014EED0
 * Size:	000074
 */
void BaseGameSection::initLights(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x23A4
	  bl        -0x12B044
	  mr.       r0, r3
	  beq-      .loc_0x34
	  lis       r4, 0x8048
	  subi      r4, r4, 0x3438
	  bl        -0x2FFC0
	  mr        r0, r3

	.loc_0x34:
	  stw       r0, 0x128(r31)
	  mr        r3, r31
	  lwz       r5, -0x6C18(r13)
	  lwz       r4, 0x128(r31)
	  lwz       r0, 0x40(r5)
	  stw       r0, 0x2338(r4)
	  lwz       r4, 0x128(r31)
	  bl        0x16090
	  lwz       r0, 0x128(r31)
	  lwz       r3, -0x65E8(r13)
	  stw       r0, 0x18(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014EF44
 * Size:	000020
 */
void BaseGameSection::draw3D(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xEA988
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014EF64
 * Size:	0001D4
 */
void BaseGameSection::drawParticle(Graphics&, int)
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
	  stw       r28, 0x10(r1)
	  lbz       r0, -0x7B96(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1B4
	  mr        r3, r30
	  mr        r4, r5
	  bl        0x2D6654
	  mr.       r31, r3
	  beq-      .loc_0x1B4
	  bl        0x2D6298
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  b         .loc_0x1B4

	.loc_0x54:
	  mr        r3, r31
	  bl        0x2D61E4
	  mr        r3, r31
	  bl        0x2D6480
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x80
	  cmpwi     r0, 0x3
	  bne-      .loc_0x84

	.loc_0x80:
	  li        r3, 0x1

	.loc_0x84:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD4
	  lwz       r0, 0xE4(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xD4
	  lwz       r3, 0x128(r29)
	  mr        r4, r30
	  lwz       r3, 0x2344(r3)
	  bl        0x2E39B4
	  lwz       r3, -0x65E8(r13)
	  mr        r4, r31
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x128(r29)
	  mr        r4, r30
	  lwz       r3, 0x2344(r3)
	  bl        0x2E39C8

	.loc_0xD4:
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x120
	  li        r28, 0x3
	  b         .loc_0x114

	.loc_0xF4:
	  lwz       r3, -0x65E8(r13)
	  mr        r4, r31
	  mr        r5, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x114:
	  rlwinm    r0,r28,0,24,31
	  cmplwi    r0, 0x5
	  ble+      .loc_0xF4

	.loc_0x120:
	  lwz       r3, -0x65E8(r13)
	  mr        r4, r31
	  li        r5, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x128(r29)
	  mr        r4, r30
	  lwz       r3, 0x2344(r3)
	  bl        0x2E3910
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x198
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x198
	  li        r28, 0x6
	  b         .loc_0x18C

	.loc_0x16C:
	  lwz       r3, -0x65E8(r13)
	  mr        r4, r31
	  mr        r5, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x18C:
	  rlwinm    r0,r28,0,24,31
	  cmplwi    r0, 0x8
	  ble+      .loc_0x16C

	.loc_0x198:
	  lwz       r3, -0x65E8(r13)
	  mr        r4, r31
	  li        r5, 0x2
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B4:
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
 * Address:	8014F138
 * Size:	0000A0
 */
void BaseGameSection::draw_Ogawa2D(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x26A468
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DF0
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x2DB978
	  lwz       r3, -0x6560(r13)
	  mr        r4, r31
	  bl        0x2ACEC4
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DF0
	  lwz       r3, 0x28(r3)
	  bl        0x2DB960
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0
	  li        r5, 0
	  bl        0x26A414
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014F1D8
 * Size:	000004
 */
void BaseGameSection::test_draw_treasure_detector(void) { }

/*
 * --INFO--
 * Address:	8014F1DC
 * Size:	0001BC
 */
void BaseGameSection::draw2D(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r4
	  stw       r30, 0x78(r1)
	  mr        r30, r3
	  subi      r3, r5, 0xDD0
	  bl        -0xF0E3C
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x118(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x168(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r4, 0x16C(r30)
	  li        r6, 0x4
	  lwz       r5, 0x170(r30)
	  li        r7, 0
	  li        r8, 0
	  bl        -0x11BBD0

	.loc_0x78:
	  lwz       r0, 0x168(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  lbz       r0, 0x164(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0xD0
	  lwz       r3, 0x154(r30)
	  li        r6, 0x4
	  lwz       r4, 0x15C(r30)
	  li        r7, 0x1
	  lwz       r5, 0x160(r30)
	  li        r8, 0
	  bl        -0x11BC04
	  lbz       r0, 0x164(r30)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x164(r30)
	  lbz       r0, 0x164(r30)
	  ori       r0, r0, 0x1
	  stb       r0, 0x164(r30)
	  lbz       r0, 0x164(r30)
	  ori       r0, r0, 0x4
	  stb       r0, 0x164(r30)

	.loc_0xD0:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r31
	  bl        0x2ACDC0
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, -0x7628(r13)
	  addi      r3, r1, 0x18
	  lfs       f1, -0x5EC8(r2)
	  bl        -0x111B88
	  addi      r3, r1, 0x18
	  bl        -0x111988
	  li        r10, 0xFF
	  li        r3, 0x9E
	  li        r6, 0xDB
	  li        r5, 0x38
	  li        r4, 0x9F
	  li        r0, 0xF7
	  stb       r3, 0x10(r1)
	  lwz       r3, -0x77D4(r13)
	  stb       r6, 0x11(r1)
	  stb       r10, 0x12(r1)
	  stb       r10, 0x13(r1)
	  lwz       r6, 0x10(r1)
	  stb       r5, 0x8(r1)
	  stw       r6, 0x14(r1)
	  lbz       r5, 0x14(r1)
	  lbz       r9, 0x15(r1)
	  lbz       r8, 0x16(r1)
	  lbz       r7, 0x17(r1)
	  stb       r4, 0x9(r1)
	  stb       r0, 0xA(r1)
	  stb       r10, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stb       r5, 0x58(r1)
	  stw       r0, 0xC(r1)
	  lbz       r6, 0xC(r1)
	  lbz       r5, 0xD(r1)
	  lbz       r4, 0xE(r1)
	  lbz       r0, 0xF(r1)
	  stb       r9, 0x59(r1)
	  stb       r8, 0x5A(r1)
	  stb       r7, 0x5B(r1)
	  stb       r6, 0x5C(r1)
	  stb       r5, 0x5D(r1)
	  stb       r4, 0x5E(r1)
	  stb       r0, 0x5F(r1)
	  bl        -0x12BBBC
	  addi      r3, r1, 0x18
	  li        r4, -0x1
	  bl        -0x111A6C
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::setupViewportMatrix(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F398
 * Size:	0000B8
 */
void BaseGameSection::directDraw(Graphics&, Viewport*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r31
	  bl        0x2D6084
	  mr        r3, r31
	  bl        0x2D5DD8
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x2D5D88
	  mr        r4, r3
	  mr        r3, r30
	  bl        0x2D643C
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x9AC
	  lwz       r0, -0x69B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x2D5D54
	  mr        r4, r3
	  mr        r3, r30
	  bl        0x2D6408
	  lwz       r3, 0x128(r29)
	  mr        r4, r30
	  lwz       r3, 0x2344(r3)
	  bl        0x2E35D8
	  lwz       r3, -0x69B0(r13)
	  mr        r4, r30
	  bl        0xEDD64

	.loc_0x9C:
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
 * Address:	8014F450
 * Size:	000078
 */
void BaseGameSection::directDrawPost(Graphics&, Viewport*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r31
	  bl        0x2D5FCC
	  mr        r3, r31
	  bl        0x2D5D20
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x2D5CD0
	  mr        r4, r3
	  mr        r3, r30
	  bl        0x2D6384
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x89C
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
 * Address:	........
 * Size:	000140
 */
void BaseGameSection::j3dDraw(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawPostShadow(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawObjectLast(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawPost(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawLast(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F4C8
 * Size:	000054
 */
void BaseGameSection::j3dSetView(Viewport*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x2D602C
	  lhz       r4, 0x18(r31)
	  mr        r3, r30
	  bl        0x370
	  mr        r3, r30
	  bl        0x468
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
 * Size:	000068
 */
void BaseGameSection::j3dViewCalc(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F51C
 * Size:	000030
 */
void BaseGameSection::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014F54C
 * Size:	000030
 */
void BaseGameSection::doSimpleDraw(Viewport*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014F57C
 * Size:	0001D8
 */
void BaseGameSection::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xB4
	  lwz       r0, -0x6C58(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x14
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6C58(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x5C1C4
	  lwz       r3, -0x6C54(r13)
	  addi      r4, r1, 0x14
	  bl        0x5C1B8
	  lwz       r3, -0x6C50(r13)
	  addi      r4, r1, 0x14
	  bl        0x5C1AC
	  lwz       r3, -0x6C4C(r13)
	  addi      r4, r1, 0x14
	  bl        0x5C1A0
	  lwz       r3, -0x6C48(r13)
	  addi      r4, r1, 0x14
	  bl        0x5C194

	.loc_0xB4:
	  lwz       r3, -0x6C80(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  bl        0x540F4

	.loc_0xC4:
	  lwz       r6, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x33FC
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x2DB4A4
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x33FC
	  lwz       r3, 0x28(r5)
	  bl        0x2DB480
	  lwz       r3, -0x65E8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x130
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x4A(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x130:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1AC
	  lwz       r3, -0x6C58(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C54(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C50(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C4C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C48(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1C4
	  mr        r3, r31
	  bl        0x4D4

	.loc_0x1C4:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8014F754
 * Size:	00004C
 */
void changeGeneratorCursor__Q24Game15BaseGameSectionFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  li        r5, 0
	  bl        -0x145E0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8014F7A0
 * Size:	0000C8
 */
void BaseGameSection::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1CA4
	  lwz       r6, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x33F0
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x2DB328
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x33F0
	  lwz       r3, 0x28(r5)
	  bl        0x2DB304
	  lwz       r6, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x33E4
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x2DB2E8
	  lwz       r0, -0x65E8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1C34
	  lwz       r3, -0x65E8(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA0:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x33E4
	  lwz       r3, 0x28(r5)
	  bl        0x2DB2AC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014F868
 * Size:	000100
 */
void BaseGameSection::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r0, 0x114(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x24
	  li        r31, 0

	.loc_0x24:
	  lwz       r3, -0x6C18(r13)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65E8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xEC
	  lwz       r3, -0x6C58(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C54(r13)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C50(r13)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C4C(r13)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C48(r13)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014F968
 * Size:	0000C8
 */
void BaseGameSection::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6C18(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65E8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3C:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xB8
	  lwz       r3, -0x6C58(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C54(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C50(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C4C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C48(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void BaseGameSection::initBlendCamera(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FA30
 * Size:	000174
 */
void BaseGameSection::updateBlendCamera(void)
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
	  lwz       r0, 0xE4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x7C
	  lwz       r3, -0x6514(r13)
	  lfs       f0, -0x5DE8(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f2, 0x54(r29)
	  fdivs     f1, f1, f0
	  lfs       f0, -0x5EC8(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x54(r29)
	  lfs       f1, 0x54(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF0
	  stfs      f0, 0x54(r29)
	  li        r0, 0
	  lfs       f1, -0x5EBC(r2)
	  stb       r0, 0x58(r29)
	  lwz       r3, 0x118(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0x7C:
	  lwz       r3, -0x6514(r13)
	  lfs       f0, -0x5DE8(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f2, 0x54(r29)
	  fdivs     f0, f1, f0
	  lfs       f1, -0x5EBC(r2)
	  fadds     f0, f2, f0
	  stfs      f0, 0x54(r29)
	  lfs       f0, 0x54(r29)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xF0
	  stfs      f1, 0x54(r29)
	  li        r0, 0
	  stb       r0, 0x58(r29)
	  lwz       r0, 0x114(r29)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xD8
	  lwz       r3, 0x118(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF0

	.loc_0xD8:
	  lwz       r3, 0x118(r29)
	  lfs       f1, -0x5EC8(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
	  lwz       r3, 0x50(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x10C
	  lfs       f1, 0x54(r29)
	  bl        0x2CBE04
	  lwz       r3, 0x50(r29)
	  bl        0x2CB27C

	.loc_0x10C:
	  lbz       r0, 0x58(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r31, 0x104(r29)
	  lwz       r30, 0x24(r3)
	  mr        r3, r30
	  bl        0x2D5A94
	  stw       r31, 0x44(r3)
	  bl        0x2D572C
	  lwz       r31, 0x108(r29)
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x2D5A7C
	  stw       r31, 0x44(r3)
	  bl        0x2D5714
	  mr        r3, r29
	  bl        -0x1DFC

	.loc_0x158:
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
 * Address:	........
 * Size:	0000DC
 */
void BaseGameSection::blend1to2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void BaseGameSection::blend2to1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FBA4
 * Size:	00006C
 */
void BaseGameSection::setSplitter(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  mr        r4, r3
	  beq-      .loc_0x2C
	  lfs       f0, -0x5E14(r2)
	  li        r0, 0x1
	  stfs      f0, 0xE8(r4)
	  stb       r0, 0xF0(r4)
	  b         .loc_0x3C

	.loc_0x2C:
	  lfs       f0, -0x5EBC(r2)
	  li        r0, 0
	  stfs      f0, 0xE8(r4)
	  stb       r0, 0xF0(r4)

	.loc_0x3C:
	  lfs       f0, -0x5EC8(r2)
	  stfs      f0, 0xEC(r4)
	  lwz       r3, 0x118(r4)
	  lfs       f1, 0xE8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::startSplit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::changeSplit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::endSplit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FC10
 * Size:	000134
 */
void BaseGameSection::updateSplitter(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x5EC8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f2, 0xEC(r3)
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x44
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x44
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x120

	.loc_0x44:
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0xE8(r31)
	  lfs       f1, 0x54(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0xE8(r31)
	  lwz       r0, 0xE4(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x98
	  lfs       f1, 0xE8(r31)
	  lfs       f0, -0x5E14(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x98
	  stfs      f0, 0xE8(r31)
	  li        r0, 0x1
	  lfs       f0, -0x5EC8(r2)
	  mr        r3, r31
	  stfs      f0, 0xEC(r31)
	  stb       r0, 0xF0(r31)
	  bl        -0x1F18
	  b         .loc_0x100

	.loc_0x98:
	  cmpwi     r0, 0
	  bne-      .loc_0xD4
	  lfs       f1, 0xE8(r31)
	  lfs       f0, -0x5EBC(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xD4
	  stfs      f0, 0xE8(r31)
	  li        r0, 0
	  lfs       f0, -0x5EC8(r2)
	  mr        r3, r31
	  stfs      f0, 0xEC(r31)
	  stb       r0, 0xF0(r31)
	  bl        -0x1F54
	  b         .loc_0x100

	.loc_0xD4:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x100
	  lfs       f1, 0xE8(r31)
	  lfs       f0, -0x5EC8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x100
	  stfs      f0, 0xE8(r31)
	  mr        r3, r31
	  stfs      f0, 0xEC(r31)
	  bl        -0x1F84

	.loc_0x100:
	  lwz       r3, 0x118(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0xE8(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014FD44
 * Size:	000058
 */
void BaseGameSection::doDirectDrawPost(Graphics&, Viewport*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  bl        -0x34ED4

	.loc_0x24:
	  lwz       r3, -0x6DE8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014FD9C
 * Size:	000004
 */
void BaseGameSection::doDirectDraw(Graphics&, Viewport*) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void BaseGameSection::startHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FDA0
 * Size:	000004
 */
void BaseGameSection::onStartHeap(void) { }

/*
 * --INFO--
 * Address:	8014FDA4
 * Size:	0002A8
 */
void BaseGameSection::clearHeap(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        0xECD34
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3654
	  li        r4, 0x1D3
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x1257A4

	.loc_0x44:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x3654
	  li        r4, 0x1DC
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x1257CC

	.loc_0x6C:
	  mr        r3, r30
	  bl        0x1F23CC
	  bl        -0x6A928
	  lwz       r3, -0x6BC8(r13)
	  bl        0x953DC
	  li        r0, 0
	  stw       r0, -0x6D34(r13)
	  stw       r0, -0x6D38(r13)
	  lwz       r3, 0x12C(r31)
	  bl        0x305D1C
	  lwz       r3, 0x130(r31)
	  bl        0x305D14
	  lwz       r3, -0x65E8(r13)
	  bl        0x26B950
	  lwz       r3, -0x65E8(r13)
	  bl        0x26B8F0
	  bl        0x5A988
	  lwz       r3, 0x104(r31)
	  bl        0x2C1778
	  lwz       r3, 0x108(r31)
	  bl        0x2C1770
	  lwz       r3, -0x6958(r13)
	  bl        0x2C1768
	  lwz       r3, -0x6960(r13)
	  bl        0x2C1760
	  lwz       r3, -0x6980(r13)
	  bl        0x2C1758
	  lwz       r3, -0x6C58(r13)
	  bl        0x2C1750
	  lwz       r3, -0x6C54(r13)
	  bl        0x2C1748
	  lwz       r3, -0x6C50(r13)
	  bl        0x2C1740
	  lwz       r3, -0x6C4C(r13)
	  bl        0x2C1738
	  lwz       r3, -0x6C48(r13)
	  bl        0x2C1730
	  lwz       r3, -0x6BC8(r13)
	  bl        0x2C1728
	  lwz       r3, -0x6E20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  addi      r3, r3, 0x4
	  bl        0x2C1714

	.loc_0x11C:
	  lwz       r3, 0x128(r31)
	  bl        0x2C170C
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D0C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CE0(r13)
	  bl        0x1D344
	  lwz       r3, -0x6C70(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, -0x6E20(r13)
	  bl        0x660A0
	  lwz       r4, -0x6CF8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x184
	  lwz       r4, 0x0(r4)

	.loc_0x184:
	  lwz       r3, -0x6C18(r13)
	  bl        0x66088
	  lwz       r4, -0x6BC8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x19C
	  addi      r4, r4, 0x1C

	.loc_0x19C:
	  lwz       r3, -0x6C18(r13)
	  bl        0x66070
	  lwz       r4, -0x6CF8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x1B4
	  lwz       r4, 0x0(r4)

	.loc_0x1B4:
	  lwz       r3, -0x6C18(r13)
	  bl        0x66058
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, -0x6CF8(r13)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x130(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, -0x6CF8(r13)
	  stw       r0, -0x6BE0(r13)
	  stw       r0, -0x6960(r13)
	  stw       r0, -0x6980(r13)
	  stw       r0, -0x6DE8(r13)
	  stw       r0, -0x6DF8(r13)
	  stw       r0, 0x50(r31)
	  lwz       r3, 0x10C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x21C
	  beq-      .loc_0x21C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x21C:
	  lwz       r3, 0x110(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  beq-      .loc_0x240
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x240:
	  li        r0, 0
	  stw       r0, 0x110(r31)
	  stw       r0, 0x10C(r31)
	  stw       r0, 0x108(r31)
	  stw       r0, 0x104(r31)
	  stw       r0, -0x6958(r13)
	  stw       r0, -0x6960(r13)
	  stw       r0, -0x6BC8(r13)
	  stw       r0, -0x6E20(r13)
	  stw       r0, -0x6C80(r13)
	  stw       r0, 0x14C(r31)
	  lwz       r3, 0xFC(r31)
	  bl        -0x12CA60
	  li        r0, 0
	  stw       r0, 0xFC(r31)
	  stw       r0, -0x6D4C(r13)
	  lwz       r3, 0x100(r31)
	  bl        -0x12CA84
	  lwz       r3, -0x77D4(r13)
	  bl        -0x12C87C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8015004C
 * Size:	000060
 */
Controller::~Controller()
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
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0xD08
	  stw       r0, 0x0(r30)
	  bl        -0x122B50
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x12BFD8

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

namespace Game {

/*
 * --INFO--
 * Address:	801500AC
 * Size:	000004
 */
void BaseGameSection::onClearHeap(void) { }

/*
 * --INFO--
 * Address:	801500B0
 * Size:	00002C
 */
void BaseGameSection::startFadeout(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xD8(r3)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xD8(r3)
	  bl        0x2DBCA0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801500DC
 * Size:	00002C
 */
void BaseGameSection::startFadein(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xD4(r3)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xD4(r3)
	  bl        0x2DBC74
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80150108
 * Size:	00002C
 */
void BaseGameSection::startFadeoutin(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xDC(r3)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xDC(r3)
	  bl        0x2DBC48
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80150134
 * Size:	00003C
 */
void BaseGameSection::startFadeblack(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x5DE4(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  lwz       r4, 0xD0(r3)
	  stw       r4, 0x18(r3)
	  lwz       r4, 0xD0(r3)
	  stb       r0, 0x28(r4)
	  lwz       r3, 0xD0(r3)
	  bl        0x2DBC0C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80150170
 * Size:	00003C
 */
void BaseGameSection::startFadewhite(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x5DE4(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lwz       r4, 0xD0(r3)
	  stw       r4, 0x18(r3)
	  lwz       r4, 0xD0(r3)
	  stb       r0, 0x28(r4)
	  lwz       r3, 0xD0(r3)
	  bl        0x2DBBD0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801501AC
 * Size:	0001C0
 */
void BaseGameSection::setupFixMemory(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  stw       r30, 0x18(r1)
	  bl        -0x12C324
	  mr.       r30, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r7, r3, 0xCD4
	  lis       r3, 0x804B
	  lwz       r6, 0x0(r7)
	  addi      r4, r4, 0xF00
	  lwz       r5, 0x4(r7)
	  addi      r0, r3, 0xEF4
	  lwz       r3, 0x8(r7)
	  stw       r6, 0x8(r1)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x0(r30)
	  stw       r31, 0x4(r30)
	  stw       r6, 0x8(r30)
	  stw       r5, 0xC(r30)
	  stw       r5, 0xC(r1)
	  stw       r3, 0x10(r1)
	  stw       r3, 0x10(r30)

	.loc_0x70:
	  mr        r3, r31
	  bl        0x2D3DAC
	  mr        r3, r31
	  bl        0x2D3DEC
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0xF2628
	  lfs       f1, -0x5EC8(r2)
	  lfs       f3, -0x5EC4(r2)
	  fmr       f2, f1
	  lfs       f4, -0x5EC0(r2)
	  fmr       f5, f1
	  lfs       f6, -0x5EBC(r2)
	  bl        -0x66AC0
	  li        r3, 0
	  li        r4, 0x10
	  li        r5, 0x260
	  li        r6, 0x1C0
	  bl        -0x66A8C
	  mr        r3, r31
	  bl        0x2D3DCC
	  lwz       r3, -0x6514(r13)
	  mr        r5, r30
	  addi      r4, r31, 0x5C
	  bl        0x2D2CBC
	  lbz       r0, -0x6D44(r13)
	  extsb.    r0, r0
	  bne-      .loc_0xF0
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x6D48(r13)
	  stb       r0, -0x6D44(r13)

	.loc_0xF0:
	  lwz       r4, -0x6D48(r13)
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, -0x6D48(r13)
	  bl        0x2D3D44
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x363C
	  li        r6, 0x3
	  li        r4, 0x1
	  bl        0x64CD0
	  lis       r3, 0x8051
	  subi      r30, r3, 0xDD0

	.loc_0x124:
	  mr        r3, r31
	  bl        0x2D3CF8
	  mr        r3, r31
	  bl        0x2D3D38
	  mr        r3, r30
	  bl        -0xF26D8
	  lfs       f1, -0x5EC8(r2)
	  lfs       f3, -0x5EC4(r2)
	  fmr       f2, f1
	  lfs       f4, -0x5EC0(r2)
	  fmr       f5, f1
	  lfs       f6, -0x5EBC(r2)
	  bl        -0x66B70
	  li        r3, 0
	  li        r4, 0x10
	  li        r5, 0x260
	  li        r6, 0x1C0
	  bl        -0x66B3C
	  mr        r3, r31
	  bl        0x2D3D1C
	  lwz       r0, 0x74(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x19C
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x363C
	  li        r6, 0x3
	  li        r4, 0
	  bl        0x64C54
	  b         .loc_0x1A8

	.loc_0x19C:
	  mr        r3, r31
	  bl        0x2D3CA4
	  b         .loc_0x124

	.loc_0x1A8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015036C
 * Size:	000334
 */
void BaseGameSection::setupFixMemory_dvdload(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x36B8
	  addi      r4, r31, 0x2E0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r3, -0x6514(r13)
	  bl        0x2D2FBC
	  li        r0, 0
	  addi      r3, r31, 0x2F0
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  li        r10, 0
	  bl        -0x131244
	  mr        r0, r3
	  li        r3, 0x40
	  mr        r28, r0
	  bl        -0x12C538
	  mr.       r29, r3
	  beq-      .loc_0x9C
	  li        r0, 0
	  mr        r4, r28
	  stw       r0, 0x28(r29)
	  li        r5, 0
	  bl        -0x11D374
	  lbz       r0, 0x3B(r29)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r29)

	.loc_0x9C:
	  stw       r29, 0xF4(r30)
	  addi      r4, r31, 0x304
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x2D2F44
	  li        r3, 0x40
	  bl        -0x12C57C
	  mr.       r29, r3
	  beq-      .loc_0xE8
	  bl        0x2D2DF8
	  lhz       r28, 0x6(r3)
	  bl        0x2D2DF0
	  lhz       r0, 0x4(r3)
	  mr        r3, r29
	  rlwinm    r5,r28,31,17,31
	  li        r6, 0x4
	  rlwinm    r4,r0,31,17,31
	  bl        -0x11D530
	  mr        r29, r3

	.loc_0xE8:
	  stw       r29, 0x154(r30)
	  addi      r4, r31, 0x304
	  lwz       r0, 0x154(r30)
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x54(r3)
	  lwz       r3, -0x6514(r13)
	  bl        0x2D2EF8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x14C
	  li        r5, 0
	  bl        0x2D2EE0
	  bl        0x26AAF0
	  lwz       r3, -0x65E8(r13)
	  lis       r4, 0x18
	  bl        0x26B040
	  lwz       r3, -0x65E8(r13)
	  addi      r4, r31, 0x310
	  li        r5, 0x7D0
	  li        r6, 0x12C
	  li        r7, 0x80
	  bl        0x26B098
	  lwz       r4, -0x65E8(r13)
	  mr        r3, r30
	  bl        0x14B00
	  bl        0x268C34
	  lis       r4, 0x4
	  lwz       r3, -0x65F8(r13)
	  subi      r4, r4, 0x1800
	  bl        0x268D68
	  lwz       r3, -0x65F8(r13)
	  addi      r4, r31, 0x330
	  li        r5, 0x1D4
	  li        r6, 0x28
	  li        r7, 0x80
	  bl        0x268DE4
	  lwz       r4, -0x65F8(r13)
	  mr        r3, r30
	  bl        0x14AC8
	  lwz       r3, -0x65E8(r13)
	  bl        0x26B1D8
	  li        r3, 0x30
	  bl        -0x12C654
	  mr.       r29, r3
	  beq-      .loc_0x1B4
	  bl        0x2C0E8C
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  addi      r0, r4, 0xCEC
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x10F0
	  stw       r0, 0x0(r29)

	.loc_0x1B4:
	  mr        r3, r29
	  bl        0x2ECF78
	  lwz       r3, -0x65E8(r13)
	  bl        0x26B1C8
	  lwz       r3, -0x65E8(r13)
	  bl        0x26B154
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x14C
	  bl        0x2D2E24
	  li        r3, 0x18
	  bl        -0x12C6A4
	  mr.       r0, r3
	  beq-      .loc_0x1F0
	  bl        0x46224
	  mr        r0, r3

	.loc_0x1F0:
	  stw       r0, -0x6CB0(r13)
	  mr        r3, r0
	  li        r4, 0x3
	  bl        0x46278
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x358
	  li        r5, 0
	  bl        0x2D2DE4
	  li        r3, 0xD0
	  bl        -0x12C6DC
	  mr.       r4, r3
	  beq-      .loc_0x228
	  bl        0x8D00
	  mr        r4, r3

	.loc_0x228:
	  cmplwi    r4, 0
	  stw       r4, -0x6D20(r13)
	  beq-      .loc_0x238
	  addi      r4, r4, 0x1C

	.loc_0x238:
	  lwz       r3, -0x6C18(r13)
	  bl        0x659A0
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x80
	  bl        -0x12C720
	  mr.       r4, r3
	  beq-      .loc_0x26C
	  bl        0xC744
	  mr        r4, r3

	.loc_0x26C:
	  cmplwi    r4, 0
	  stw       r4, -0x6D0C(r13)
	  beq-      .loc_0x27C
	  addi      r4, r4, 0x1C

	.loc_0x27C:
	  lwz       r3, -0x6C18(r13)
	  bl        0x6595C
	  lwz       r4, -0x6D0C(r13)
	  mr        r3, r30
	  bl        0x149B8
	  lwz       r4, -0x6D20(r13)
	  mr        r3, r30
	  bl        0x149AC
	  lwz       r3, -0x6D0C(r13)
	  lwz       r4, 0x114(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x358
	  bl        0x2D2D3C
	  li        r3, 0x40
	  bl        -0x12C78C
	  mr.       r0, r3
	  beq-      .loc_0x2D8
	  bl        0x1C820
	  mr        r0, r3

	.loc_0x2D8:
	  stw       r0, -0x6CE0(r13)
	  mr        r3, r0
	  li        r4, 0
	  bl        0x1CAF8
	  lwz       r4, -0x6CE0(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x2F8
	  addi      r4, r4, 0x1C

	.loc_0x2F8:
	  lwz       r3, -0x6C18(r13)
	  bl        0x658E0
	  mr        r3, r30
	  bl        0x14934
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x2E0
	  bl        0x2D2CE8
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

} // namespace Game

/*
 * --INFO--
 * Address:	801506A0
 * Size:	000060
 */
ModelEffectData::~ModelEffectData()
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
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0xCEC
	  stw       r0, 0x0(r30)
	  bl        0x2C0EB8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x12C62C

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

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void BaseGameAllocCallback(unsigned long, int, JKRHeap*, void*)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	80150700
 * Size:	000008
 */
u32 BaseGameSection::enableAllocHalt(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80150708
 * Size:	000008
 */
u32 BaseGameSection::disableAllocHalt(void) { return 0x0; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void BaseGameSection::isAllocHalt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80150710
 * Size:	000CC0
 */
void BaseGameSection::setupFloatMemory(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2C0(r1)
	  mflr      r0
	  stw       r0, 0x2C4(r1)
	  stfd      f31, 0x2B0(r1)
	  psq_st    f31,0x2B8(r1),0,0
	  stmw      r27, 0x29C(r1)
	  lwz       r4, -0x6C18(r13)
	  lis       r5, 0x8048
	  mr        r31, r3
	  li        r29, 0
	  lbz       r0, 0x3C(r4)
	  subi      r30, r5, 0x36B8
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x3C(r4)
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  addi      r3, r30, 0x380
	  addi      r5, r30, 0x70
	  li        r4, 0x76
	  crclr     6, 0x6
	  bl        -0x126124

	.loc_0x58:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  li        r3, 0x30
	  bl        -0x12C8D4
	  mr.       r5, r3
	  beq-      .loc_0xC8
	  mr        r27, r5
	  bl        -0x129EB8
	  lis       r3, 0x804B
	  addic.    r4, r27, 0xC
	  addi      r0, r3, 0xCE0
	  stw       r0, 0xC(r27)
	  beq-      .loc_0x94
	  subi      r4, r4, 0xC

	.loc_0x94:
	  stw       r4, -0x6E44(r13)
	  addi      r3, r27, 0x10
	  bl        -0x1337E0
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

	.loc_0xC8:
	  stw       r5, -0x6E44(r13)

	.loc_0xCC:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xEC
	  addi      r3, r30, 0x380
	  addi      r5, r30, 0x70
	  li        r4, 0x79
	  crclr     6, 0x6
	  bl        -0x1261B8

	.loc_0xEC:
	  lwz       r0, -0x6E50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x10C
	  addi      r3, r30, 0x380
	  addi      r5, r30, 0x70
	  li        r4, 0x76
	  crclr     6, 0x6
	  bl        -0x1261D8

	.loc_0x10C:
	  lwz       r0, -0x6E50(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x134
	  li        r3, 0x3C
	  bl        -0x12C988
	  mr.       r0, r3
	  beq-      .loc_0x130
	  bl        0x31C094
	  mr        r0, r3

	.loc_0x130:
	  stw       r0, -0x6E50(r13)

	.loc_0x134:
	  lwz       r0, -0x6E50(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  addi      r3, r30, 0x380
	  addi      r5, r30, 0x70
	  li        r4, 0x79
	  crclr     6, 0x6
	  bl        -0x126220

	.loc_0x154:
	  lwz       r28, -0x77D4(r13)
	  mr        r3, r28
	  bl        -0x12D0B8
	  mr        r4, r28
	  li        r5, 0x1
	  bl        -0x1309B0
	  stw       r3, 0xFC(r31)
	  lwz       r0, 0xFC(r31)
	  stw       r0, -0x6D4C(r13)
	  lwz       r3, 0xFC(r31)
	  bl        -0x12D2E8
	  stw       r3, 0x100(r31)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x38C
	  li        r5, 0
	  bl        0x2D2AA8
	  lwz       r3, -0x6D20(r13)
	  bl        0xA7D4
	  li        r3, 0x94
	  bl        -0x12CA20
	  mr.       r0, r3
	  beq-      .loc_0x1C8
	  bl        -0x36100
	  mr        r0, r3

	.loc_0x1C8:
	  stw       r0, -0x6DF8(r13)
	  mr        r3, r0
	  bl        -0x359D0
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x208
	  li        r3, 0xEC
	  bl        -0x12CA54
	  mr.       r0, r3
	  beq-      .loc_0x200
	  li        r4, 0x30
	  bl        -0x34C74
	  mr        r0, r3

	.loc_0x200:
	  stw       r0, -0x6DE8(r13)
	  b         .loc_0x228

	.loc_0x208:
	  li        r3, 0xEC
	  bl        -0x12CA78
	  mr.       r0, r3
	  beq-      .loc_0x224
	  li        r4, 0x40
	  bl        -0x34C98
	  mr        r0, r3

	.loc_0x224:
	  stw       r0, -0x6DE8(r13)

	.loc_0x228:
	  lwz       r3, -0x6DE8(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x3C
	  bl        -0x12CAAC
	  mr.       r0, r3
	  beq-      .loc_0x254
	  bl        0x74C8C
	  mr        r0, r3

	.loc_0x254:
	  stw       r0, -0x6BE0(r13)
	  li        r3, 0x50
	  bl        -0x12CAC8
	  mr.       r4, r3
	  beq-      .loc_0x274
	  li        r4, 0x2
	  bl        0xF0A48
	  mr        r4, r3

	.loc_0x274:
	  stw       r4, -0x6980(r13)
	  mr        r3, r31
	  bl        0x14624
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x108(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0x2
	  bl        0x1388
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, -0x6D20(r13)
	  mr        r28, r0
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  li        r3, 0xB0
	  mr        r27, r0
	  bl        -0x12CB50
	  mr.       r0, r3
	  beq-      .loc_0x2FC
	  li        r4, 0
	  bl        0x2D4450
	  mr        r0, r3

	.loc_0x2FC:
	  stw       r0, 0x10C(r31)
	  li        r3, 0xB0
	  bl        -0x12CB70
	  mr.       r0, r3
	  beq-      .loc_0x31C
	  li        r4, 0x1
	  bl        0x2D4430
	  mr        r0, r3

	.loc_0x31C:
	  stw       r0, 0x110(r31)
	  li        r3, 0x254
	  bl        -0x12CB90
	  mr.       r0, r3
	  beq-      .loc_0x33C
	  mr        r4, r28
	  bl        0xEE9AC
	  mr        r0, r3

	.loc_0x33C:
	  stw       r0, 0x104(r31)
	  li        r3, 0x254
	  bl        -0x12CBB0
	  mr.       r0, r3
	  beq-      .loc_0x35C
	  mr        r4, r27
	  bl        0xEE98C
	  mr        r0, r3

	.loc_0x35C:
	  stw       r0, 0x108(r31)
	  li        r3, 0x3C
	  bl        -0x12CBD0
	  mr.       r0, r3
	  beq-      .loc_0x378
	  bl        0xFFF08
	  mr        r0, r3

	.loc_0x378:
	  stw       r0, -0x6960(r13)
	  mr        r3, r0
	  bl        0xFFF40
	  lwz       r4, -0x6960(r13)
	  mr        r3, r31
	  bl        0x14514
	  lwz       r4, 0x2AF8(r2)
	  li        r3, 0x180
	  lwz       r0, 0x2AFC(r2)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x104(r31)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x108(r31)
	  stw       r0, 0xC(r1)
	  bl        -0x12CC20
	  mr.       r0, r3
	  beq-      .loc_0x3D0
	  addi      r5, r1, 0x8
	  li        r4, 0x2
	  bl        0x2CAC50
	  mr        r0, r3

	.loc_0x3D0:
	  stw       r0, 0x50(r31)
	  li        r0, 0
	  li        r3, 0x34
	  stb       r0, 0x58(r31)
	  lwz       r0, 0x104(r31)
	  lwz       r4, 0x128(r31)
	  stw       r0, 0x233C(r4)
	  bl        -0x12CC58
	  mr.       r0, r3
	  beq-      .loc_0x400
	  bl        0x1027FC
	  mr        r0, r3

	.loc_0x400:
	  stw       r0, -0x6958(r13)
	  mr        r3, r0
	  bl        0x102834
	  lwz       r3, -0x6958(r13)
	  bl        0x102984
	  lwz       r4, -0x6958(r13)
	  mr        r3, r31
	  bl        0x14484
	  lwz       r3, -0x6C18(r13)
	  li        r27, 0
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x438
	  li        r27, 0x1

	.loc_0x438:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DE0
	  li        r5, 0
	  bl        0x2D2808
	  li        r3, 0x3C
	  bl        -0x12CCB8
	  mr.       r0, r3
	  beq-      .loc_0x460
	  bl        0x7CFD4
	  mr        r0, r3

	.loc_0x460:
	  stw       r0, -0x6BC8(r13)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x490
	  lwz       r3, -0x6BC8(r13)
	  li        r4, 0x3
	  bl        0x94000
	  b         .loc_0x4B4

	.loc_0x490:
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x4A8
	  lwz       r3, -0x6BC8(r13)
	  li        r4, 0x1
	  bl        0x93FE8
	  b         .loc_0x4B4

	.loc_0x4A8:
	  lwz       r3, -0x6BC8(r13)
	  li        r4, 0x2
	  bl        0x93FD8

	.loc_0x4B4:
	  lwz       r4, -0x6BC8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x4C4
	  addi      r4, r4, 0x1C

	.loc_0x4C4:
	  lwz       r3, -0x6C18(r13)
	  bl        0x65370
	  lwz       r4, -0x6BC8(r13)
	  mr        r3, r31
	  bl        0x143CC
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DE0
	  bl        0x2D2774
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3A0
	  li        r5, 0
	  bl        0x2D275C
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x64
	  bl        0x12B4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3A0
	  bl        0x2D274C
	  li        r3, 0x90
	  bl        -0x12CD7C
	  mr.       r4, r3
	  beq-      .loc_0x524
	  bl        -0x43F44
	  mr        r4, r3

	.loc_0x524:
	  stw       r4, -0x6E20(r13)
	  lwz       r3, -0x6C18(r13)
	  bl        0x6530C
	  lwz       r4, -0x6E20(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x540
	  addi      r4, r4, 0x4

	.loc_0x540:
	  mr        r3, r31
	  bl        0x1435C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x120(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6CF8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xA48
	  mr        r3, r31
	  li        r29, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  addi      r3, r1, 0x94
	  addi      r4, r30, 0x3B4
	  crclr     6, 0x6
	  bl        -0x89868
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x94
	  bl        0x86870
	  lwz       r4, -0x6C18(r13)
	  mr        r27, r3
	  li        r28, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x65C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  subi      r3, r2, 0x5DD8
	  bl        -0x86634
	  cmpwi     r3, 0
	  beq-      .loc_0x65C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  addi      r3, r1, 0x94
	  addi      r4, r30, 0x3D4
	  crclr     6, 0x6
	  bl        -0x898EC
	  li        r3, 0x20
	  bl        -0x12CE88
	  mr.       r28, r3
	  beq-      .loc_0x630
	  bl        0xF4F24
	  mr        r28, r3

	.loc_0x630:
	  mr        r3, r28
	  addi      r4, r1, 0x94
	  bl        0xF4F44
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r28
	  bl        0xF51C4

	.loc_0x65C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x680
	  mr        r3, r27
	  bl        0x86724

	.loc_0x680:
	  li        r3, 0x120
	  bl        -0x12CEF0
	  mr.       r0, r3
	  beq-      .loc_0x6A0
	  mr        r5, r27
	  li        r4, 0x1
	  bl        0x66D58
	  mr        r0, r3

	.loc_0x6A0:
	  stw       r0, -0x6CF8(r13)
	  subi      r4, r2, 0x5DD0
	  lwz       r3, -0x6514(r13)
	  li        r5, 0
	  bl        0x2D259C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, -0x6CF8(r13)
	  mr        r5, r28
	  bl        0x671F8
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DD0
	  bl        0x2D2574
	  lwz       r4, -0x6CF8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x6F4
	  lwz       r4, 0x0(r4)

	.loc_0x6F4:
	  lwz       r3, -0x6C18(r13)
	  bl        0x65140
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x8CC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  li        r5, 0x37
	  stw       r0, 0x88(r1)
	  addi      r4, r3, 0x616C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r4, 0x88(r1)
	  addi      r4, r1, 0x88
	  stw       r5, 0x8C(r1)
	  stw       r0, 0x90(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  li        r5, 0x17
	  stw       r0, 0x7C(r1)
	  addi      r4, r3, 0x616C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r4, 0x7C(r1)
	  addi      r4, r1, 0x7C
	  stw       r5, 0x80(r1)
	  stw       r0, 0x84(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  li        r5, 0x13
	  stw       r0, 0x70(r1)
	  addi      r4, r3, 0x616C
	  li        r0, 0xC
	  mr        r3, r31
	  stw       r4, 0x70(r1)
	  addi      r4, r1, 0x70
	  stw       r5, 0x74(r1)
	  stw       r0, 0x78(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  li        r5, 0x5D
	  stw       r0, 0x64(r1)
	  addi      r4, r3, 0x616C
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r4, 0x64(r1)
	  addi      r4, r1, 0x64
	  stw       r5, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  li        r5, 0x18
	  stw       r0, 0x58(r1)
	  addi      r4, r3, 0x616C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r4, 0x58(r1)
	  addi      r4, r1, 0x58
	  stw       r5, 0x5C(r1)
	  stw       r0, 0x60(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  li        r5, 0x19
	  stw       r0, 0x4C(r1)
	  addi      r4, r3, 0x616C
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r4, 0x4C(r1)
	  addi      r4, r1, 0x4C
	  stw       r5, 0x50(r1)
	  stw       r0, 0x54(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x590
	  li        r5, 0xE
	  stw       r0, 0x40(r1)
	  addi      r4, r3, 0x616C
	  li        r0, 0x14
	  mr        r3, r31
	  stw       r4, 0x40(r1)
	  addi      r4, r1, 0x40
	  stw       r5, 0x44(r1)
	  stw       r0, 0x48(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8CC:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DC8
	  li        r5, 0
	  bl        0x2D2374
	  lfs       f1, -0x5DC0(r2)
	  addi      r4, r1, 0x30
	  lfs       f0, -0x5DBC(r2)
	  stfs      f1, 0x30(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3E4
	  li        r5, 0
	  bl        0x2D2334
	  li        r3, 0x48
	  bl        -0x12D18C
	  mr.       r0, r3
	  beq-      .loc_0x934
	  bl        0x7280
	  mr        r0, r3

	.loc_0x934:
	  stw       r0, -0x6D34(r13)
	  mr        r3, r0
	  lfs       f1, -0x5DB8(r2)
	  addi      r4, r1, 0x30
	  bl        0x79B8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3E4
	  bl        0x2D2304
	  lfs       f1, -0x5DC0(r2)
	  addi      r4, r1, 0x20
	  lfs       f0, -0x5DBC(r2)
	  stfs      f1, 0x20(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3F0
	  li        r5, 0
	  bl        0x2D22BC
	  li        r3, 0x48
	  bl        -0x12D204
	  mr.       r0, r3
	  beq-      .loc_0x9AC
	  bl        0x7208
	  mr        r0, r3

	.loc_0x9AC:
	  stw       r0, -0x6D30(r13)
	  mr        r3, r0
	  lfs       f1, -0x5DB4(r2)
	  addi      r4, r1, 0x20
	  bl        0x7940
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3F0
	  bl        0x2D228C
	  lwz       r3, -0x6CF8(r13)
	  bl        0x68D60
	  lwz       r3, -0x6CF8(r13)
	  bl        0x69074
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DC8
	  bl        0x2D2270
	  lwz       r0, 0x114(r31)
	  li        r5, -0x1
	  lwz       r3, -0x6E20(r13)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x43B10
	  lwz       r3, -0x6E20(r13)
	  bl        -0x4415C
	  lwz       r3, -0x6CE0(r13)
	  bl        0x1C290
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0xA34
	  lwz       r3, -0x6B70(r13)
	  li        r0, 0x1
	  stb       r0, 0x6C(r3)

	.loc_0xA34:
	  bl        0xEB90C
	  lwz       r3, -0x6CF8(r13)
	  lwz       r3, 0x8(r3)
	  bl        0x22A38
	  b         .loc_0xA4C

	.loc_0xA48:
	  bl        0xEB8F8

	.loc_0xA4C:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA90
	  li        r3, 0x14
	  bl        -0x12D2CC
	  mr.       r0, r3
	  beq-      .loc_0xA74
	  bl        0x52470
	  mr        r0, r3

	.loc_0xA74:
	  stw       r0, -0x6C80(r13)
	  mr        r3, r0
	  lwz       r5, -0x6CF8(r13)
	  li        r4, 0x64
	  lwz       r5, 0x8(r5)
	  bl        0x524B4
	  b         .loc_0xA98

	.loc_0xA90:
	  li        r0, 0
	  stw       r0, -0x6C80(r13)

	.loc_0xA98:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xAAC
	  bl        0x21B58

	.loc_0xAAC:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DC8
	  li        r5, 0
	  bl        0x2D2194
	  li        r3, 0x48
	  bl        -0x12D32C
	  mr.       r0, r3
	  beq-      .loc_0xAD4
	  bl        0x70E0
	  mr        r0, r3

	.loc_0xAD4:
	  lfs       f1, -0x5DC0(r2)
	  addi      r4, r1, 0x10
	  lfs       f0, -0x5DBC(r2)
	  stw       r0, -0x6D38(r13)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x10(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x77D4(r13)
	  bl        -0x12DA68
	  lwz       r3, -0x6D38(r13)
	  addi      r4, r1, 0x10
	  lfs       f1, -0x5DB0(r2)
	  bl        0x77E0
	  rlwinm.   r0,r29,0,24,31
	  bne-      .loc_0xB70
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3E4
	  li        r5, 0
	  bl        0x2D2118
	  li        r3, 0x48
	  bl        -0x12D3A8
	  mr.       r0, r3
	  beq-      .loc_0xB50
	  bl        0x7064
	  mr        r0, r3

	.loc_0xB50:
	  stw       r0, -0x6D34(r13)
	  mr        r3, r0
	  lfs       f1, -0x5DB8(r2)
	  addi      r4, r1, 0x10
	  bl        0x779C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x3E4
	  bl        0x2D20E8

	.loc_0xB70:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x5DC8
	  bl        0x2D20DC
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0xB8C
	  lwz       r3, -0x6CF8(r13)
	  bl        0x684F8

	.loc_0xB8C:
	  mr        r3, r31
	  lwz       r4, -0x6514(r13)
	  lwz       r12, 0x0(r31)
	  lwz       r28, 0x24(r4)
	  lwz       r12, 0xFC(r12)
	  mr        r4, r28
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65E8(r13)
	  mr        r4, r28
	  bl        0x26A864
	  lwz       r3, -0x65E8(r13)
	  bl        0x26A44C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  bl        0x7CA6C
	  lwz       r3, -0x6960(r13)
	  li        r4, 0
	  bl        0x100BF8
	  lwz       r3, -0x6C10(r13)
	  lfs       f1, -0x5DA8(r2)
	  lfs       f0, 0x58(r3)
	  lfs       f2, -0x5DAC(r2)
	  fmuls     f0, f1, f0
	  lwz       r3, -0x6CF8(r13)
	  fmuls     f31, f2, f0
	  bl        0x113E4
	  fadds     f1, f31, f1
	  bl        0x2C08B4
	  fmr       f31, f1
	  lwz       r3, -0x6CF8(r13)
	  bl        0x113D0
	  fmr       f1, f31
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x2
	  bl        0x100D00
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x2
	  bl        0x101198
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x38C
	  bl        0x2D2014
	  lwz       r3, -0x6D0C(r13)
	  bl        0xE4F0
	  lwz       r3, -0x6D20(r13)
	  bl        0xA6C0
	  lwz       r3, -0x6BC8(r13)
	  bl        0x7D75C
	  lwz       r3, -0x6CE0(r13)
	  bl        0x1D844
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6E28(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xC98
	  bl        -0x2D2CC

	.loc_0xC98:
	  addi      r3, r30, 0x400
	  crclr     6, 0x6
	  bl        -0x63CC4
	  psq_l     f31,0x2B8(r1),0,0
	  lfd       f31, 0x2B0(r1)
	  lmw       r27, 0x29C(r1)
	  lwz       r0, 0x2C4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801513D0
 * Size:	000004
 */
void BaseGameSection::onSetSoundScene(void) { }

/*
 * --INFO--
 * Address:	801513D4
 * Size:	000008
 */
s32 BaseGameSection::getCurrFloor(void) { return -0x1; }

/*
 * --INFO--
 * Address:	801513DC
 * Size:	000008
 */
u32 BaseGameSection::challengeDisablePelplant(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801513E4
 * Size:	000008
 */
s32 BaseGameSection::getVsEditNumber(void) { return -0x2; }

/*
 * --INFO--
 * Address:	801513EC
 * Size:	000008
 */
void BaseGameSection::getEditorFilename(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x5DD8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801513F4
 * Size:	00000C
 */
void BaseGameSection::getCaveFilename(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x32A8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151400
 * Size:	000004
 */
void BaseGameSection::onSetupFloatMemory(void) { }

/*
 * --INFO--
 * Address:	80151404
 * Size:	000008
 */
u32 BaseGameSection::isDevelopSection(void) { return 0x1; }

} // namespace Game

/*
 * --INFO--
 * Address:	8015140C
 * Size:	000050
 */
void __dt__Q28PSSystem28SingletonBase<PSM::ObjMgr> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x38
	  lis       r5, 0x804B
	  extsh.    r0, r4
	  addi      r4, r5, 0xCE0
	  li        r0, 0
	  stw       r4, 0x0(r31)
	  stw       r0, -0x6E44(r13)
	  ble-      .loc_0x38
	  bl        -0x12D38C

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<PSM::ObjBase>::~JSUList()
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	8015145C
 * Size:	0000A4
 */
void BaseGameSection::setDrawBuffer(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x30
	  cmpwi     r31, 0xA
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x369C
	  li        r4, 0x14AF
	  subi      r5, r5, 0x3648
	  crclr     6, 0x6
	  bl        -0x126E6C

	.loc_0x54:
	  lwz       r3, 0x12C(r30)
	  mr        r4, r31
	  bl        0x30460C
	  lis       r4, 0x8051
	  lwz       r0, 0x1C(r3)
	  subi      r3, r4, 0xDD0
	  mr        r4, r31
	  stw       r0, 0x48(r3)
	  lwz       r3, 0x130(r30)
	  bl        0x3045F0
	  lis       r4, 0x8051
	  lwz       r0, 0x1C(r3)
	  subi      r3, r4, 0xDD0
	  stw       r0, 0x4C(r3)
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
 * Address:	80151500
 * Size:	000030
 */
void BaseGameSection::postSetupFloatMemory(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151530
 * Size:	000004
 */
void MapMgr::setupJUTTextures(void) { }

/*
 * --INFO--
 * Address:	80151534
 * Size:	000200
 */
void BaseGameSection::createFallPikminSound(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  subi      r4, r4, 0x4364
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  lwz       r3, -0x6D0C(r13)
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1CC

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1CC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1CC

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  li        r4, 0
	  bl        -0x15BDC
	  lwz       r3, 0x250(r31)
	  li        r4, 0x2837
	  li        r5, 0
	  li        r6, 0
	  bl        0x310F40
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x13C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1CC

	.loc_0x13C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B0

	.loc_0x15C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1CC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1B0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x15C

	.loc_0x1CC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151734
 * Size:	000004
 */
void BaseGameSection::captureRadarmap(Graphics&) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::drawRadarmap(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	80151738
 * Size:	000018
 */
void PikiCond_ExceptChappyPikmin::satisfy(Game::Piki*)
{
	/*
	.loc_0x0:
	  lbz       r4, 0x2B8(r4)
	  subfic    r3, r4, 0x5
	  subi      r0, r4, 0x5
	  or        r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151750
 * Size:	000070
 */
void Container<Plane>::~Container()
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
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2BFDF8

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x12D6EC

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
 * Address:	801517C0
 * Size:	000080
 */
void ArrayContainer<Plane>::~ArrayContainer()
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
	  beq-      .loc_0x64
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2BFD78

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x12D76C

	.loc_0x64:
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
 * Address:	80151840
 * Size:	000004
 */
void CullPlane::readObject(Stream&, Plane&) { }

/*
 * --INFO--
 * Address:	80151844
 * Size:	000004
 */
void CullPlane::writeObject(Stream&, Plane&) { }

/*
 * --INFO--
 * Address:	80151848
 * Size:	000090
 */
CullPlane::~CullPlane()
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
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2BFCE0

	.loc_0x64:
	  extsh.    r0, r31
	  ble-      .loc_0x74
	  mr        r3, r30
	  bl        -0x12D804

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801518D8
 * Size:	000010
 */
void BaseGameSection::forceFinish(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x37(r3)
	  lbz       r3, 0x37(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801518E8
 * Size:	000004
 */
void BaseGameSection::addChallengeScore(int) { }

/*
 * --INFO--
 * Address:	801518EC
 * Size:	000004
 */
void BaseGameSection::startMainBgm(void) { }

/*
 * --INFO--
 * Address:	801518F0
 * Size:	000004
 */
void BaseGameSection::goNextFloor(Game::ItemHole::Item*) { }

/*
 * --INFO--
 * Address:	801518F4
 * Size:	000004
 */
void BaseGameSection::goCave(Game::ItemCave::Item*) { }

/*
 * --INFO--
 * Address:	801518F8
 * Size:	000004
 */
void BaseGameSection::goMainMap(Game::ItemBigFountain::Item*) { }

/*
 * --INFO--
 * Address:	801518FC
 * Size:	00000C
 */
void BaseGameSection::getCaveID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x6E6F
	  addi      r3, r3, 0x6E65
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151908
 * Size:	000008
 */
u32 BaseGameSection::getCurrentCourseInfo(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80151910
 * Size:	000008
 */
u32 BaseGameSection::openContainerWindow(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80151918
 * Size:	000004
 */
void BaseGameSection::closeContainerWindow(void) { }

/*
 * --INFO--
 * Address:	8015191C
 * Size:	000004
 */
void BaseGameSection::playMovie_firstexperience(int, Game::Creature*) { }

/*
 * --INFO--
 * Address:	80151920
 * Size:	000004
 */
void BaseGameSection::playMovie_bootup(Game::Onyon*) { }

/*
 * --INFO--
 * Address:	80151924
 * Size:	000004
 */
void BaseGameSection::playMovie_helloPikmin(Game::Piki*) { }

/*
 * --INFO--
 * Address:	80151928
 * Size:	000004
 */
void BaseGameSection::disableTimer(unsigned long) { }

/*
 * --INFO--
 * Address:	8015192C
 * Size:	000004
 */
void BaseGameSection::onMovieStart(Game::MovieConfig*, unsigned long,
                                   unsigned long)
{
}

/*
 * --INFO--
 * Address:	80151930
 * Size:	000004
 */
void BaseGameSection::gmOrimaDown(int) { }

/*
 * --INFO--
 * Address:	80151934
 * Size:	000004
 */
void BaseGameSection::gmPikminZero(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	80151938
 * Size:	000004
 */
void Section::drawInit(Graphics&) { }

/*
 * --INFO--
 * Address:	8015193C
 * Size:	000004
 */
void Section::doExit() { }

/*
 * --INFO--
 * Address:	80151940
 * Size:	000008
 */
u32 Section::forceReset() { return 0x1; }

/*
 * --INFO--
 * Address:	80151948
 * Size:	000004
 */
void Section::getCurrentSection() { }

/*
 * --INFO--
 * Address:	8015194C
 * Size:	000004
 */
void Section::doLoadingStart() { }

/*
 * --INFO--
 * Address:	80151950
 * Size:	000008
 */
u32 Section::doLoading() { return 0x0; }

/*
 * --INFO--
 * Address:	80151958
 * Size:	000008
 */
u32 Section::isFinishable() { return 0x1; }

/*
 * --INFO--
 * Address:	80151960
 * Size:	000004
 */
void ArrayContainer<Plane>::writeObject(Stream&, Plane&) { }

/*
 * --INFO--
 * Address:	80151964
 * Size:	000004
 */
void ArrayContainer<Plane>::readObject(Stream&, Plane&) { }

/*
 * --INFO--
 * Address:	80151968
 * Size:	0000D4
 */
void ArrayContainer<Plane>::write(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r27, r3
	  lwz       r4, 0x14(r3)
	  mr        r3, r28
	  bl        0x2C2694
	  lwz       r4, 0x414(r28)
	  mr        r3, r28
	  bl        0x2C2AA0
	  lwz       r4, 0x20(r27)
	  mr        r3, r28
	  bl        0x2C3E20
	  mr        r3, r28
	  subi      r4, r2, 0x5DA4
	  crclr     6, 0x6
	  bl        0x2C282C
	  lis       r3, 0x8048
	  li        r29, 0
	  subi      r31, r3, 0x3278
	  li        r30, 0
	  b         .loc_0xAC

	.loc_0x60:
	  lwz       r4, 0x414(r28)
	  mr        r3, r28
	  bl        0x2C2A64
	  mr        r3, r27
	  lwz       r0, 0x24(r27)
	  lwz       r12, 0x0(r27)
	  mr        r4, r28
	  add       r5, r0, r30
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x20(r27)
	  mr        r3, r28
	  mr        r4, r31
	  mr        r5, r29
	  crclr     6, 0x6
	  bl        0x2C27D4
	  addi      r30, r30, 0x10
	  addi      r29, r29, 0x1

	.loc_0xAC:
	  lwz       r0, 0x20(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x60
	  mr        r3, r28
	  bl        0x2C267C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151A3C
 * Size:	000068
 */
void ArrayContainer<Plane>::alloc(int)
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
	  rlwinm    r3,r4,4,0,27
	  addi      r3, r3, 0x10
	  bl        -0x12DAB4
	  lis       r4, 0x8015
	  mr        r7, r31
	  addi      r4, r4, 0x1C68
	  li        r5, 0
	  li        r6, 0x10
	  bl        -0x90088
	  stw       r3, 0x24(r30)
	  li        r0, 0
	  stw       r31, 0x20(r30)
	  stw       r0, 0x1C(r30)
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
 * Address:	80151AA4
 * Size:	000010
 */
void ArrayContainer<Plane>::setArray(Plane*, int)
{
	/*
	.loc_0x0:
	  stw       r4, 0x24(r3)
	  stw       r5, 0x20(r3)
	  stw       r5, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151AB4
 * Size:	000010
 */
void ArrayContainer<Plane>::get(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  rlwinm    r0,r4,4,0,27
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151AC4
 * Size:	000008
 */
void ArrayContainer<Plane>::getNext(void*)
{
	/*
	.loc_0x0:
	  addi      r3, r4, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151ACC
 * Size:	000008
 */
u32 ArrayContainer<Plane>::getStart() { return 0x0; }

/*
 * --INFO--
 * Address:	80151AD4
 * Size:	000008
 */
void ArrayContainer<Plane>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151ADC
 * Size:	000010
 */
void ArrayContainer<Plane>::getAt(int)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  rlwinm    r0,r4,4,0,27
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151AEC
 * Size:	000008
 */
void ArrayContainer<Plane>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151AF4
 * Size:	00002C
 */
void Container<Plane>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151B20
 * Size:	000008
 */
u32 Container<Plane>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80151B28
 * Size:	000008
 */
u32 Container<Plane>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	80151B30
 * Size:	000030
 */
void Delegate3<Game::BaseGameSection, Game::MovieConfig*, unsigned long,
               unsigned long>::invoke(Game::MovieConfig*, unsigned long,
                                      unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r7, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r7, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x90024
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151B60
 * Size:	000030
 */
void Delegate1<Game::BaseGameSection, Vector3f&>::invoke(Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x90054
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151B90
 * Size:	000030
 */
void Delegate1<Game::BaseGameSection, Game::CameraArg*>::invoke(
    Game::CameraArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x90084
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151BC0
 * Size:	000030
 */
void Delegate1<Game::BaseGameSection, Rect<float>&>::invoke(Rect<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x900B4
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151BF0
 * Size:	000030
 */
void Delegate<Game::BaseGameSection>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x900E4
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151C20
 * Size:	000048
 */
void ArrayContainer<Plane>::addOne(Plane&)
{
	/*
	.loc_0x0:
	  lwz       r7, 0x1C(r3)
	  lwz       r0, 0x20(r3)
	  cmpw      r7, r0
	  bgelr-
	  lwz       r6, 0x24(r3)
	  addi      r5, r7, 0x1
	  rlwinm    r0,r7,4,0,27
	  stw       r5, 0x1C(r3)
	  add       r3, r6, r0
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151C68
 * Size:	00001C
 */
Plane::Plane()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x5EC8(r2)
	  lfs       f0, -0x5EBC(r2)
	  stfs      f1, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f1, 0x8(r3)
	  stfs      f1, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80151C84
 * Size:	0000B0
 */
void ArrayContainer<Plane>::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        0x2C2DE4
	  stw       r3, 0x20(r28)
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r4, 0x20(r28)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x20(r28)
	  li        r30, 0
	  li        r31, 0
	  stw       r0, 0x1C(r28)
	  b         .loc_0x84

	.loc_0x5C:
	  mr        r3, r28
	  lwz       r0, 0x24(r28)
	  lwz       r12, 0x0(r28)
	  mr        r4, r29
	  add       r5, r0, r31
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x10
	  addi      r30, r30, 0x1

	.loc_0x84:
	  lwz       r0, 0x20(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x5C
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
 * Address:	80151D34
 * Size:	000188
 */
void MonoObjectMgr<Game::Navi>::alloc(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r31
	  mulli     r3, r29, 0x320
	  stw       r28, 0x10(r1)
	  addi      r3, r3, 0x10
	  bl        -0x12DDB8
	  lis       r4, 0x8014
	  mr        r7, r29
	  subi      r4, r4, 0x8B8
	  li        r5, 0
	  li        r6, 0x320
	  bl        -0x9038C
	  stw       r3, 0x28(r30)
	  li        r0, 0
	  mr        r3, r29
	  stw       r31, 0x24(r30)
	  stw       r0, 0x20(r30)
	  bl        -0x12DDE8
	  cmpwi     r31, 0
	  stw       r3, 0x2C(r30)
	  li        r11, 0
	  ble-      .loc_0x120
	  cmpwi     r31, 0x8
	  subi      r3, r31, 0x8
	  ble-      .loc_0xFC
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0xFC

	.loc_0x94:
	  lwz       r3, 0x2C(r30)
	  li        r10, 0x1
	  addi      r8, r11, 0x1
	  addi      r7, r11, 0x2
	  stbx      r10, r3, r11
	  addi      r6, r11, 0x3
	  addi      r5, r11, 0x4
	  addi      r4, r11, 0x5
	  lwz       r9, 0x2C(r30)
	  addi      r3, r11, 0x6
	  addi      r0, r11, 0x7
	  addi      r11, r11, 0x8
	  stbx      r10, r9, r8
	  lwz       r8, 0x2C(r30)
	  stbx      r10, r8, r7
	  lwz       r7, 0x2C(r30)
	  stbx      r10, r7, r6
	  lwz       r6, 0x2C(r30)
	  stbx      r10, r6, r5
	  lwz       r5, 0x2C(r30)
	  stbx      r10, r5, r4
	  lwz       r4, 0x2C(r30)
	  stbx      r10, r4, r3
	  lwz       r3, 0x2C(r30)
	  stbx      r10, r3, r0
	  bdnz+     .loc_0x94

	.loc_0xFC:
	  sub       r0, r31, r11
	  li        r4, 0x1
	  mtctr     r0
	  cmpw      r11, r31
	  bge-      .loc_0x120

	.loc_0x110:
	  lwz       r3, 0x2C(r30)
	  stbx      r4, r3, r11
	  addi      r11, r11, 0x1
	  bdnz+     .loc_0x110

	.loc_0x120:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x160

	.loc_0x140:
	  lwz       r0, 0x28(r30)
	  add       r3, r0, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x320
	  addi      r28, r28, 0x1

	.loc_0x160:
	  cmpw      r28, r31
	  blt+      .loc_0x140
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
 * Address:	80151EBC
 * Size:	000004
 */
void MonoObjectMgr<Game::Navi>::onAlloc() { }

/*
 * --INFO--
 * Address:	80151EC0
 * Size:	000188
 */
void MonoObjectMgr<Game::Piki>::alloc(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r31
	  mulli     r3, r29, 0x2C8
	  stw       r28, 0x10(r1)
	  addi      r3, r3, 0x10
	  bl        -0x12DF44
	  lis       r4, 0x8014
	  mr        r7, r29
	  addi      r4, r4, 0x76DC
	  li        r5, 0
	  li        r6, 0x2C8
	  bl        -0x90518
	  stw       r3, 0x28(r30)
	  li        r0, 0
	  mr        r3, r29
	  stw       r31, 0x24(r30)
	  stw       r0, 0x20(r30)
	  bl        -0x12DF74
	  cmpwi     r31, 0
	  stw       r3, 0x2C(r30)
	  li        r11, 0
	  ble-      .loc_0x120
	  cmpwi     r31, 0x8
	  subi      r3, r31, 0x8
	  ble-      .loc_0xFC
	  addi      r0, r3, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0xFC

	.loc_0x94:
	  lwz       r3, 0x2C(r30)
	  li        r10, 0x1
	  addi      r8, r11, 0x1
	  addi      r7, r11, 0x2
	  stbx      r10, r3, r11
	  addi      r6, r11, 0x3
	  addi      r5, r11, 0x4
	  addi      r4, r11, 0x5
	  lwz       r9, 0x2C(r30)
	  addi      r3, r11, 0x6
	  addi      r0, r11, 0x7
	  addi      r11, r11, 0x8
	  stbx      r10, r9, r8
	  lwz       r8, 0x2C(r30)
	  stbx      r10, r8, r7
	  lwz       r7, 0x2C(r30)
	  stbx      r10, r7, r6
	  lwz       r6, 0x2C(r30)
	  stbx      r10, r6, r5
	  lwz       r5, 0x2C(r30)
	  stbx      r10, r5, r4
	  lwz       r4, 0x2C(r30)
	  stbx      r10, r4, r3
	  lwz       r3, 0x2C(r30)
	  stbx      r10, r3, r0
	  bdnz+     .loc_0x94

	.loc_0xFC:
	  sub       r0, r31, r11
	  li        r4, 0x1
	  mtctr     r0
	  cmpw      r11, r31
	  bge-      .loc_0x120

	.loc_0x110:
	  lwz       r3, 0x2C(r30)
	  stbx      r4, r3, r11
	  addi      r11, r11, 0x1
	  bdnz+     .loc_0x110

	.loc_0x120:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x160

	.loc_0x140:
	  lwz       r0, 0x28(r30)
	  add       r3, r0, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x2C8
	  addi      r28, r28, 0x1

	.loc_0x160:
	  cmpw      r28, r31
	  blt+      .loc_0x140
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
 * Address:	80152048
 * Size:	000004
 */
void MonoObjectMgr<Game::Piki>::onAlloc() { }

/*
 * --INFO--
 * Address:	8015204C
 * Size:	000028
 */
void __sinit_baseGameSection_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6D58(r13)
	  stfsu     f0, 0xC70(r3)
	  stfs      f0, -0x6D54(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
