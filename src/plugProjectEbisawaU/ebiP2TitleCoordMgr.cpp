#include "types.h"

#include "Vector2.h"

namespace ebi {
namespace title {

	namespace ebi {

namespace title {

		/*
		 * --INFO--
		 * Address:	803E396C
		 * Size:	0001A4
		 */
void TCoordMgr::TCoordMgr(void)
		{
			/*
			.loc_0x0:
			  stwu      r1, -0x10(r1)
			  mflr      r0
			  lis       r6, 0x8049
			  lis       r4, 0x804F
			  stw       r0, 0x14(r1)
			  addi      r8, r6, 0x7138
			  subi      r0, r4, 0x4AD8
			  li        r9, 0
			  stw       r31, 0xC(r1)
			  mr        r31, r3
			  lis       r5, 0x804E
			  li        r6, 0x8
			  stw       r0, 0x0(r3)
			  addi      r0, r5, 0x78AC
			  lis       r3, 0x8038
			  li        r5, 0
			  stw       r9, 0x10(r31)
			  subi      r4, r3, 0x2F48
			  addi      r3, r31, 0x2C
			  li        r7, 0x1F4
			  stw       r9, 0xC(r31)
			  stw       r9, 0x8(r31)
			  stw       r9, 0x4(r31)
			  stw       r8, 0x14(r31)
			  stw       r0, 0x0(r31)
			  bl        -0x322194
			  addi      r0, r31, 0x1078
			  lis       r5, 0x7467
			  stw       r0, 0xFCC(r31)
			  li        r0, 0
			  lis       r3, 0x8049
			  addi      r4, r31, 0xFCC
			  stw       r0, 0xFD0(r31)
			  addi      r0, r3, 0x7144
			  addi      r3, r4, 0xC
			  addi      r5, r5, 0x6130
			  stw       r0, 0xFD4(r31)
			  addi      r6, r2, 0x18C0
			  bl        0x2FC54
			  lis       r3, 0x804B
			  lis       r5, 0x7467
			  subi      r0, r3, 0x5344
			  addi      r4, r31, 0xFCC
			  stw       r0, 0xFD8(r31)
			  addi      r3, r4, 0x34
			  lfs       f0, 0x18C8(r2)
			  addi      r5, r5, 0x6131
			  lfs       f1, 0x18CC(r2)
			  addi      r6, r2, 0x18D4
			  stfs      f0, 0xFF0(r31)
			  lfs       f0, 0x18D0(r2)
			  stfs      f1, 0xFF8(r31)
			  stfs      f0, 0xFFC(r31)
			  bl        0x2FC18
			  lis       r3, 0x804B
			  lis       r5, 0x7467
			  subi      r0, r3, 0x5344
			  addi      r4, r31, 0xFCC
			  stw       r0, 0x1000(r31)
			  addi      r3, r4, 0x5C
			  lfs       f0, 0x18DC(r2)
			  addi      r5, r5, 0x6132
			  lfs       f1, 0x18CC(r2)
			  addi      r6, r2, 0x18E0
			  stfs      f0, 0x1018(r31)
			  lfs       f0, 0x18D0(r2)
			  stfs      f1, 0x1020(r31)
			  stfs      f0, 0x1024(r31)
			  bl        0x2FBDC
			  lis       r3, 0x804B
			  lis       r5, 0x7467
			  subi      r0, r3, 0x5344
			  addi      r4, r31, 0xFCC
			  stw       r0, 0x1028(r31)
			  addi      r3, r4, 0x84
			  lfs       f0, 0x18E8(r2)
			  addi      r5, r5, 0x6133
			  lfs       f1, 0x18EC(r2)
			  addi      r6, r2, 0x18F4
			  stfs      f0, 0x1040(r31)
			  lfs       f0, 0x18F0(r2)
			  stfs      f1, 0x1048(r31)
			  stfs      f0, 0x104C(r31)
			  bl        0x2FBA0
			  lis       r3, 0x804B
			  lfs       f2, 0x18E8(r2)
			  subi      r0, r3, 0x5344
			  lfs       f1, 0x18EC(r2)
			  stw       r0, 0x1050(r31)
			  li        r0, 0
			  lfs       f0, 0x18F0(r2)
			  mr        r3, r31
			  stfs      f2, 0x1068(r31)
			  stfs      f1, 0x1070(r31)
			  stfs      f0, 0x1074(r31)
			  stw       r0, 0x18(r31)
			  stw       r0, 0x1C(r31)
			  stw       r0, 0x20(r31)
			  stw       r0, 0x24(r31)
			  stw       r0, 0x28(r31)
			  lwz       r31, 0xC(r1)
			  lwz       r0, 0x14(r1)
			  mtlr      r0
			  addi      r1, r1, 0x10
			  blr
			*/
		}

		/*
		 * --INFO--
		 * Address:	........
		 * Size:	000090
		 */
void TCoordMgr::getDestPos(long)
		{
			// UNUSED FUNCTION
		}

		/*
		 * --INFO--
		 * Address:	803E3B10
		 * Size:	000118
		 */
void TCoordMgr::copyCoordinate(Vector2<float>*)
		{
			/*
			.loc_0x0:
			  mr        r5, r3
			  li        r7, 0
			  mr        r6, r4
			  b         .loc_0x2C

			.loc_0x10:
			  lfs       f0, 0x34C(r5)
			  addi      r7, r7, 0x1
			  stfs      f0, 0x320(r6)
			  lfs       f0, 0x350(r5)
			  addi      r5, r5, 0x8
			  stfs      f0, 0x324(r6)
			  addi      r6, r6, 0x8

			.loc_0x2C:
			  lwz       r0, 0x1C(r3)
			  cmpw      r7, r0
			  blt+      .loc_0x10
			  mr        r5, r3
			  mr        r6, r4
			  li        r7, 0
			  b         .loc_0x64

			.loc_0x48:
			  lfs       f0, 0x66C(r5)
			  addi      r7, r7, 0x1
			  stfs      f0, 0x640(r6)
			  lfs       f0, 0x670(r5)
			  addi      r5, r5, 0x8
			  stfs      f0, 0x644(r6)
			  addi      r6, r6, 0x8

			.loc_0x64:
			  lwz       r0, 0x20(r3)
			  cmpw      r7, r0
			  blt+      .loc_0x48
			  mr        r5, r3
			  mr        r6, r4
			  li        r7, 0
			  b         .loc_0x9C

			.loc_0x80:
			  lfs       f0, 0x2C(r5)
			  addi      r7, r7, 0x1
			  stfs      f0, 0x0(r6)
			  lfs       f0, 0x30(r5)
			  addi      r5, r5, 0x8
			  stfs      f0, 0x4(r6)
			  addi      r6, r6, 0x8

			.loc_0x9C:
			  lwz       r0, 0x18(r3)
			  cmpw      r7, r0
			  blt+      .loc_0x80
			  mr        r5, r3
			  mr        r6, r4
			  li        r7, 0
			  b         .loc_0xD4

			.loc_0xB8:
			  lfs       f0, 0x98C(r5)
			  addi      r7, r7, 0x1
			  stfs      f0, 0x960(r6)
			  lfs       f0, 0x990(r5)
			  addi      r5, r5, 0x8
			  stfs      f0, 0x964(r6)
			  addi      r6, r6, 0x8

			.loc_0xD4:
			  lwz       r0, 0x24(r3)
			  cmpw      r7, r0
			  blt+      .loc_0xB8
			  mr        r5, r3
			  li        r6, 0
			  b         .loc_0x108

			.loc_0xEC:
			  lfs       f0, 0xCAC(r5)
			  addi      r6, r6, 0x1
			  stfs      f0, 0xC80(r4)
			  lfs       f0, 0xCB0(r5)
			  addi      r5, r5, 0x8
			  stfs      f0, 0xC84(r4)
			  addi      r4, r4, 0x8

			.loc_0x108:
			  lwz       r0, 0x28(r3)
			  cmpw      r6, r0
			  blt+      .loc_0xEC
			  blr
			*/
		}

		/*
		 * --INFO--
		 * Address:	803E3C28
		 * Size:	00007C
		 */
void TCoordMgr::readCoordinate(JKRArchive*, char*)
		{
			/*
			.loc_0x0:
			  stwu      r1, -0x430(r1)
			  mflr      r0
			  stw       r0, 0x434(r1)
			  stw       r31, 0x42C(r1)
			  mr        r31, r3
			  mr        r3, r4
			  lwz       r12, 0x0(r4)
			  mr        r4, r5
			  lwz       r12, 0x14(r12)
			  mtctr     r12
			  bctrl
			  cmplwi    r3, 0
			  beq-      .loc_0x68
			  mr        r4, r3
			  addi      r3, r1, 0x8
			  li        r5, -0x1
			  bl        0x31C90
			  li        r0, 0x1
			  cmpwi     r0, 0x1
			  stw       r0, 0x14(r1)
			  bne-      .loc_0x5C
			  li        r0, 0
			  stw       r0, 0x41C(r1)

			.loc_0x5C:
			  mr        r3, r31
			  addi      r4, r1, 0x8
			  bl        .loc_0x7C

			.loc_0x68:
			  lwz       r0, 0x434(r1)
			  lwz       r31, 0x42C(r1)
			  mtlr      r0
			  addi      r1, r1, 0x430
			  blr

			.loc_0x7C:
			*/
		}

		/*
		 * --INFO--
		 * Address:	803E3CA4
		 * Size:	000144
		 */
void TCoordMgr::readCoordinate(Stream&)
		{
			/*
			.loc_0x0:
			  stwu      r1, -0x30(r1)
			  mflr      r0
			  stw       r0, 0x34(r1)
			  stmw      r25, 0x14(r1)
			  mr        r28, r3
			  mr        r29, r4
			  li        r31, 0
			  mr        r27, r28

			.loc_0x20:
			  mr        r3, r29
			  bl        0x30DC8
			  cmpwi     r31, 0x2
			  stw       r3, 0x18(r27)
			  li        r30, 0
			  beq-      .loc_0x94
			  bge-      .loc_0x4C
			  cmpwi     r31, 0
			  beq-      .loc_0x78
			  bge-      .loc_0x5C
			  b         .loc_0xE4

			.loc_0x4C:
			  cmpwi     r31, 0x4
			  beq-      .loc_0xCC
			  bge-      .loc_0xE4
			  b         .loc_0xB0

			.loc_0x5C:
			  lwz       r0, 0x18(r27)
			  li        r30, 0x64
			  cmpwi     r0, 0x64
			  ble-      .loc_0xE4
			  li        r0, 0x64
			  stw       r0, 0x18(r27)
			  b         .loc_0xE4

			.loc_0x78:
			  lwz       r0, 0x18(r27)
			  li        r30, 0
			  cmpwi     r0, 0x64
			  ble-      .loc_0xE4
			  li        r0, 0x64
			  stw       r0, 0x18(r27)
			  b         .loc_0xE4

			.loc_0x94:
			  lwz       r0, 0x18(r27)
			  li        r30, 0xC8
			  cmpwi     r0, 0x64
			  ble-      .loc_0xE4
			  li        r0, 0x64
			  stw       r0, 0x18(r27)
			  b         .loc_0xE4

			.loc_0xB0:
			  lwz       r0, 0x18(r27)
			  li        r30, 0x12C
			  cmpwi     r0, 0x64
			  ble-      .loc_0xE4
			  li        r0, 0x64
			  stw       r0, 0x18(r27)
			  b         .loc_0xE4

			.loc_0xCC:
			  lwz       r0, 0x18(r27)
			  li        r30, 0x190
			  cmpwi     r0, 0x64
			  ble-      .loc_0xE4
			  li        r0, 0x64
			  stw       r0, 0x18(r27)

			.loc_0xE4:
			  li        r25, 0
			  b         .loc_0x114

			.loc_0xEC:
			  mr        r3, r29
			  bl        0x31018
			  add       r0, r25, r30
			  mr        r3, r29
			  rlwinm    r0,r0,3,0,28
			  add       r26, r28, r0
			  stfs      f1, 0x2C(r26)
			  bl        0x31000
			  stfs      f1, 0x30(r26)
			  addi      r25, r25, 0x1

			.loc_0x114:
			  lwz       r0, 0x18(r27)
			  cmpw      r25, r0
			  blt+      .loc_0xEC
			  addi      r31, r31, 0x1
			  addi      r27, r27, 0x4
			  cmpwi     r31, 0x5
			  blt+      .loc_0x20
			  lmw       r25, 0x14(r1)
			  lwz       r0, 0x34(r1)
			  mtlr      r0
			  addi      r1, r1, 0x30
			  blr
			*/
		}
	} // namespace ebi
} // namespace title
} // namespace ebi
} // title

