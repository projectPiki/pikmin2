#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80245664
 * Size:	000008
 */
Cave::RandMapChecker::RandMapChecker(Game::Cave::MapNode*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024566C
 * Size:	00007C
 */
void Cave::RandMapChecker::isPutOnMap(Game::Cave::MapNode*)
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
	  bl        .loc_0x7C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x64

	.loc_0x30:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x134
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x64

	.loc_0x4C:
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x338
	  rlwinm    r0,r3,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x7C:
	*/
}

/*
 * --INFO--
 * Address:	802456E8
 * Size:	0000F0
 */
void Cave::RandMapChecker::isPartsOnParts(Game::Cave::MapNode*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r23, 0x1C(r1)
	  mr        r24, r4
	  mr        r23, r3
	  mr        r3, r24
	  bl        -0x1D68
	  mr        r0, r3
	  mr        r3, r24
	  mr        r31, r0
	  bl        -0x1D70
	  mr        r0, r3
	  lwz       r3, 0x18(r24)
	  mr        r30, r0
	  bl        -0x2BA0
	  add       r29, r31, r3
	  lwz       r3, 0x18(r24)
	  bl        -0x2BA4
	  lwz       r4, 0x0(r23)
	  add       r28, r30, r3
	  lwz       r24, 0x10(r4)
	  b         .loc_0xD0

	.loc_0x5C:
	  mr        r3, r24
	  bl        -0x1DAC
	  mr        r0, r3
	  mr        r3, r24
	  mr        r27, r0
	  bl        -0x1DB4
	  mr        r0, r3
	  lwz       r3, 0x18(r24)
	  mr        r26, r0
	  bl        -0x2BE4
	  add       r25, r27, r3
	  lwz       r3, 0x18(r24)
	  bl        -0x2BE8
	  add       r0, r26, r3
	  mr        r3, r23
	  stw       r0, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        0x440
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  li        r3, 0x1
	  b         .loc_0xDC

	.loc_0xCC:
	  lwz       r24, 0x4(r24)

	.loc_0xD0:
	  cmplwi    r24, 0
	  bne+      .loc_0x5C
	  li        r3, 0

	.loc_0xDC:
	  lmw       r23, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802457D8
 * Size:	000220
 */
void Cave::RandMapChecker::isDoorOnParts(Game::Cave::MapNode*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r23, 0x2C(r1)
	  mr        r29, r4
	  mr        r28, r3
	  mr        r3, r29
	  bl        -0x1794
	  mr        r31, r3
	  mr        r3, r29
	  bl        -0x1E64
	  stw       r3, 0x1C(r1)
	  mr        r3, r29
	  bl        -0x1E68
	  stw       r3, 0x18(r1)
	  li        r30, 0
	  b         .loc_0x200

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r1, 0x1C
	  addi      r6, r1, 0x18
	  li        r25, 0
	  bl        -0x27E4
	  lwz       r3, 0x0(r28)
	  lwz       r24, 0x10(r3)
	  b         .loc_0x10C

	.loc_0x68:
	  mr        r3, r24
	  bl        -0x17E4
	  mr        r26, r3
	  li        r23, 0
	  b         .loc_0x100

	.loc_0x7C:
	  rlwinm.   r0,r25,0,24,31
	  bne-      .loc_0xFC
	  mr        r3, r24
	  mr        r4, r23
	  bl        -0x254C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xFC
	  mr        r3, r24
	  mr        r4, r23
	  bl        -0x23F4
	  mr        r27, r3
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x2404
	  mr        r4, r27
	  bl        0x614C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  mr        r3, r24
	  mr        r4, r23
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  bl        -0x2860
	  lwz       r3, 0x1C(r1)
	  lwz       r0, 0x14(r1)
	  cmpw      r3, r0
	  bne-      .loc_0xFC
	  lwz       r3, 0x18(r1)
	  lwz       r0, 0x10(r1)
	  cmpw      r3, r0
	  bne-      .loc_0xFC
	  li        r25, 0x1

	.loc_0xFC:
	  addi      r23, r23, 0x1

	.loc_0x100:
	  cmpw      r23, r26
	  blt+      .loc_0x7C
	  lwz       r24, 0x4(r24)

	.loc_0x10C:
	  cmplwi    r24, 0
	  bne+      .loc_0x68
	  rlwinm.   r0,r25,0,24,31
	  bne-      .loc_0x1FC
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x28D4
	  cmpwi     r3, 0x3
	  beq-      .loc_0x150
	  bge-      .loc_0x15C
	  cmpwi     r3, 0
	  beq-      .loc_0x140
	  b         .loc_0x15C

	.loc_0x140:
	  lwz       r3, 0x18(r1)
	  subi      r0, r3, 0x1
	  stw       r0, 0x18(r1)
	  b         .loc_0x15C

	.loc_0x150:
	  lwz       r3, 0x1C(r1)
	  subi      r0, r3, 0x1
	  stw       r0, 0x1C(r1)

	.loc_0x15C:
	  lwz       r4, 0x1C(r1)
	  lwz       r3, 0x18(r1)
	  addi      r4, r4, 0x1
	  addi      r0, r3, 0x1
	  stw       r4, 0x14(r1)
	  stw       r0, 0x10(r1)
	  lwz       r3, 0x0(r28)
	  lwz       r23, 0x10(r3)
	  b         .loc_0x1F4

	.loc_0x180:
	  mr        r3, r23
	  bl        -0x1FC0
	  mr        r0, r3
	  mr        r3, r23
	  mr        r26, r0
	  bl        -0x1FC8
	  mr        r0, r3
	  lwz       r3, 0x18(r23)
	  mr        r27, r0
	  bl        -0x2DF8
	  add       r25, r26, r3
	  lwz       r3, 0x18(r23)
	  bl        -0x2DFC
	  add       r0, r27, r3
	  mr        r3, r28
	  stw       r0, 0x8(r1)
	  mr        r8, r26
	  mr        r9, r27
	  mr        r10, r25
	  lwz       r4, 0x1C(r1)
	  lwz       r5, 0x18(r1)
	  lwz       r6, 0x14(r1)
	  lwz       r7, 0x10(r1)
	  bl        0x22C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  li        r3, 0x1
	  b         .loc_0x20C

	.loc_0x1F0:
	  lwz       r23, 0x4(r23)

	.loc_0x1F4:
	  cmplwi    r23, 0
	  bne+      .loc_0x180

	.loc_0x1FC:
	  addi      r30, r30, 0x1

	.loc_0x200:
	  cmpw      r30, r31
	  blt+      .loc_0x44
	  li        r3, 0

	.loc_0x20C:
	  lmw       r23, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802459F8
 * Size:	0001E8
 */
void Cave::RandMapChecker::isPartsOnDoor(Game::Cave::MapNode*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r19, 0x2C(r1)
	  mr        r21, r4
	  mr        r20, r3
	  mr        r3, r21
	  bl        -0x2078
	  mr        r0, r3
	  mr        r3, r21
	  mr        r29, r0
	  bl        -0x2080
	  mr        r0, r3
	  lwz       r3, 0x18(r21)
	  mr        r28, r0
	  bl        -0x2EB0
	  add       r27, r29, r3
	  lwz       r3, 0x18(r21)
	  bl        -0x2EB4
	  lwz       r4, 0x0(r20)
	  add       r26, r28, r3
	  lwz       r25, 0x10(r4)
	  b         .loc_0x1C8

	.loc_0x5C:
	  mr        r3, r25
	  bl        -0x19F8
	  mr        r30, r3
	  li        r24, 0
	  b         .loc_0x1BC

	.loc_0x70:
	  mr        r3, r25
	  mr        r4, r24
	  bl        -0x2758
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B8
	  mr        r3, r21
	  li        r23, 0
	  bl        -0x1A24
	  mr        r31, r3
	  mr        r3, r25
	  mr        r4, r24
	  addi      r5, r1, 0x1C
	  addi      r6, r1, 0x18
	  bl        -0x2A50
	  li        r22, 0
	  b         .loc_0x120

	.loc_0xB0:
	  rlwinm.   r0,r23,0,24,31
	  bne-      .loc_0x11C
	  mr        r3, r21
	  mr        r4, r22
	  bl        -0x2634
	  mr        r19, r3
	  mr        r3, r25
	  mr        r4, r24
	  bl        -0x2644
	  mr        r4, r19
	  bl        0x5F0C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x11C
	  mr        r3, r21
	  mr        r4, r22
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  bl        -0x2AA0
	  lwz       r3, 0x1C(r1)
	  lwz       r0, 0x14(r1)
	  cmpw      r3, r0
	  bne-      .loc_0x11C
	  lwz       r3, 0x18(r1)
	  lwz       r0, 0x10(r1)
	  cmpw      r3, r0
	  bne-      .loc_0x11C
	  li        r23, 0x1

	.loc_0x11C:
	  addi      r22, r22, 0x1

	.loc_0x120:
	  cmpw      r22, r31
	  blt+      .loc_0xB0
	  rlwinm.   r0,r23,0,24,31
	  bne-      .loc_0x1B8
	  mr        r3, r25
	  mr        r4, r24
	  bl        -0x2B08
	  cmpwi     r3, 0x3
	  beq-      .loc_0x164
	  bge-      .loc_0x170
	  cmpwi     r3, 0
	  beq-      .loc_0x154
	  b         .loc_0x170

	.loc_0x154:
	  lwz       r3, 0x18(r1)
	  subi      r0, r3, 0x1
	  stw       r0, 0x18(r1)
	  b         .loc_0x170

	.loc_0x164:
	  lwz       r3, 0x1C(r1)
	  subi      r0, r3, 0x1
	  stw       r0, 0x1C(r1)

	.loc_0x170:
	  lwz       r8, 0x1C(r1)
	  mr        r3, r20
	  lwz       r9, 0x18(r1)
	  mr        r4, r29
	  addi      r6, r8, 0x1
	  mr        r5, r28
	  addi      r0, r9, 0x1
	  stw       r6, 0x14(r1)
	  mr        r6, r27
	  mr        r7, r26
	  stw       r0, 0x10(r1)
	  stw       r0, 0x8(r1)
	  lwz       r10, 0x14(r1)
	  bl        .loc_0x1E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B8
	  li        r3, 0x1
	  b         .loc_0x1D4

	.loc_0x1B8:
	  addi      r24, r24, 0x1

	.loc_0x1BC:
	  cmpw      r24, r30
	  blt+      .loc_0x70
	  lwz       r25, 0x4(r25)

	.loc_0x1C8:
	  cmplwi    r25, 0
	  bne+      .loc_0x5C
	  li        r3, 0

	.loc_0x1D4:
	  lmw       r19, 0x2C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x1E8:
	*/
}

/*
 * --INFO--
 * Address:	80245BE0
 * Size:	00007C
 */
void Cave::RandMapChecker::isInnerBox(int, int, int, int, int, int, int, int)
{
	/*
	.loc_0x0:
	  cmpw      r4, r8
	  lwz       r0, 0x8(r1)
	  bge-      .loc_0x44
	  cmpw      r5, r9
	  bge-      .loc_0x2C
	  cmpw      r6, r8
	  ble-      .loc_0x74
	  cmpw      r7, r9
	  ble-      .loc_0x74
	  li        r3, 0x1
	  blr

	.loc_0x2C:
	  cmpw      r5, r0
	  bge-      .loc_0x74
	  cmpw      r6, r8
	  ble-      .loc_0x74
	  li        r3, 0x1
	  blr

	.loc_0x44:
	  cmpw      r4, r10
	  bge-      .loc_0x74
	  cmpw      r5, r9
	  bge-      .loc_0x64
	  cmpw      r7, r9
	  ble-      .loc_0x74
	  li        r3, 0x1
	  blr

	.loc_0x64:
	  cmpw      r5, r0
	  bge-      .loc_0x74
	  li        r3, 0x1
	  blr

	.loc_0x74:
	  li        r3, 0
	  blr
	*/
}
} // namespace Game
