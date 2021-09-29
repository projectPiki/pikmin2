

/*
 * --INFO--
 * Address:	80083C4C
 * Size:	000028
 */
void J3DMaterialTable::clear()
{
/*
.loc_0x0:
  li        r0, 0
  sth       r0, 0x4(r3)
  sth       r0, 0x6(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  sth       r0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80083C74
 * Size:	000034
 */
void J3DMaterialTable::J3DMaterialTable()
{
/*
.loc_0x0:
  lis       r4, 0x804A
  li        r0, 0
  addi      r4, r4, 0x2C88
  stw       r4, 0x0(r3)
  sth       r0, 0x4(r3)
  sth       r0, 0x6(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  sth       r0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80083CA8
 * Size:	000048
 */
void J3DMaterialTable::~J3DMaterialTable()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x2C88
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x5FC20

.loc_0x30:
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
 * Size:	0001AC
 */
void J3DMaterialTable::allocMatColorAnimator(J3DAnmColor *, J3DMatColorAnm **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80083CF0
 * Size:	000018
 */
void J3DMatColorAnm::J3DMatColorAnm()
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  sth       r4, 0x0(r3)
  sth       r0, 0x2(r3)
  stw       r4, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001BC
 */
void J3DMaterialTable::allocTexNoAnimator(J3DAnmTexPattern *, J3DTexNoAnm **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80083D08
 * Size:	000024
 */
void J3DTexNoAnm::J3DTexNoAnm()
{
/*
.loc_0x0:
  lis       r5, 0x804A
  li        r4, 0
  addi      r5, r5, 0x1B20
  li        r0, 0x1
  stw       r5, 0x0(r3)
  sth       r4, 0x4(r3)
  sth       r0, 0x6(r3)
  stw       r4, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80083D2C
 * Size:	0001C4
 */
void J3DMaterialTable::allocTexMtxAnimator(J3DAnmTextureSRTKey *, J3DTexMtxAnm **)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r3, 0x5555
  stw       r0, 0x44(r1)
  addi      r3, r3, 0x5556
  stmw      r19, 0xC(r1)
  mr        r29, r4
  mr        r30, r5
  lhz       r0, 0x14(r4)
  mulhw     r3, r3, r0
  rlwinm    r0,r3,1,31,31
  add       r0, r3, r0
  rlwinm    r3,r0,3,13,28
  rlwinm    r31,r0,0,16,31
  addi      r3, r3, 0x10
  bl        -0x5FDBC
  lis       r4, 0x8008
  lis       r5, 0x8007
  addi      r4, r4, 0x3EF0
  mr        r7, r31
  subi      r5, r5, 0x5B60
  li        r6, 0x8
  bl        0x3DC6C
  stw       r3, 0x0(r30)
  lwz       r0, 0x0(r30)
  cmplwi    r0, 0
  bne-      .loc_0x74
  li        r3, 0x4
  b         .loc_0x1B0

.loc_0x74:
  cmplwi    r31, 0
  li        r3, 0
  ble-      .loc_0x1AC
  cmplwi    r31, 0x8
  subi      r0, r31, 0x8
  ble-      .loc_0x1A0
  rlwinm    r0,r0,0,16,31
  b         .loc_0x174

.loc_0x94:
  lwz       r4, 0x0(r30)
  rlwinm    r7,r3,3,13,28
  addi      r21, r7, 0x10
  addi      r9, r3, 0x1
  sthx      r3, r4, r7
  addi      r24, r7, 0x18
  addi      r27, r7, 0x20
  addi      r4, r7, 0x4
  lwz       r5, 0x0(r30)
  addi      r6, r7, 0x8
  addi      r11, r7, 0x28
  addi      r8, r7, 0x30
  stwx      r29, r5, r4
  addi      r5, r7, 0x38
  addi      r4, r6, 0x4
  addi      r19, r3, 0x2
  lwz       r7, 0x0(r30)
  addi      r23, r21, 0x4
  addi      r22, r3, 0x3
  addi      r26, r24, 0x4
  sthx      r9, r7, r6
  addi      r25, r3, 0x4
  addi      r12, r27, 0x4
  addi      r28, r3, 0x5
  lwz       r7, 0x0(r30)
  addi      r9, r11, 0x4
  addi      r10, r3, 0x6
  addi      r6, r8, 0x4
  stwx      r29, r7, r4
  addi      r7, r3, 0x7
  addi      r4, r5, 0x4
  addi      r3, r3, 0x8
  lwz       r20, 0x0(r30)
  sthx      r19, r20, r21
  lwz       r21, 0x0(r30)
  stwx      r29, r21, r23
  lwz       r23, 0x0(r30)
  sthx      r22, r23, r24
  lwz       r24, 0x0(r30)
  stwx      r29, r24, r26
  lwz       r26, 0x0(r30)
  sthx      r25, r26, r27
  lwz       r27, 0x0(r30)
  stwx      r29, r27, r12
  lwz       r12, 0x0(r30)
  sthx      r28, r12, r11
  lwz       r11, 0x0(r30)
  stwx      r29, r11, r9
  lwz       r9, 0x0(r30)
  sthx      r10, r9, r8
  lwz       r8, 0x0(r30)
  stwx      r29, r8, r6
  lwz       r6, 0x0(r30)
  sthx      r7, r6, r5
  lwz       r5, 0x0(r30)
  stwx      r29, r5, r4

.loc_0x174:
  rlwinm    r4,r3,0,16,31
  cmplw     r4, r0
  blt+      .loc_0x94
  b         .loc_0x1A0

.loc_0x184:
  lwz       r4, 0x0(r30)
  rlwinm    r5,r3,3,13,28
  addi      r0, r5, 0x4
  sthx      r3, r4, r5
  addi      r3, r3, 0x1
  lwz       r4, 0x0(r30)
  stwx      r29, r4, r0

.loc_0x1A0:
  rlwinm    r0,r3,0,16,31
  cmplw     r0, r31
  blt+      .loc_0x184

.loc_0x1AC:
  li        r3, 0

.loc_0x1B0:
  lmw       r19, 0xC(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80083EF0
 * Size:	000018
 */
void J3DTexMtxAnm::J3DTexMtxAnm()
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  sth       r4, 0x0(r3)
  sth       r0, 0x2(r3)
  stw       r4, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80083F08
 * Size:	00032C
 */
void J3DMaterialTable::allocTevRegAnimator(J3DAnmTevRegKey *, J3DTevColorAnm **, J3DTevKColorAnm **)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stmw      r17, 0x14(r1)
  mr        r27, r4
  mr        r28, r5
  mr        r29, r6
  lhz       r31, 0xC(r4)
  lhz       r30, 0xE(r4)
  rlwinm    r3,r31,3,13,28
  addi      r3, r3, 0x10
  bl        -0x5FF88
  lis       r4, 0x8008
  lis       r5, 0x8007
  addi      r4, r4, 0x424C
  mr        r7, r31
  subi      r5, r5, 0x5ADC
  li        r6, 0x8
  bl        0x3DAA0
  stw       r3, 0x0(r28)
  lwz       r0, 0x0(r28)
  cmplwi    r0, 0
  bne-      .loc_0x64
  li        r3, 0x4
  b         .loc_0x318

.loc_0x64:
  cmplwi    r31, 0
  li        r3, 0
  ble-      .loc_0x19C
  cmplwi    r31, 0x8
  subi      r0, r31, 0x8
  ble-      .loc_0x190
  rlwinm    r0,r0,0,16,31
  b         .loc_0x164

.loc_0x84:
  lwz       r4, 0x0(r28)
  rlwinm    r7,r3,3,13,28
  addi      r26, r7, 0x10
  addi      r9, r3, 0x1
  sthx      r3, r4, r7
  addi      r23, r7, 0x18
  addi      r20, r7, 0x20
  addi      r4, r7, 0x4
  lwz       r5, 0x0(r28)
  addi      r6, r7, 0x8
  addi      r11, r7, 0x28
  addi      r8, r7, 0x30
  stwx      r27, r5, r4
  addi      r5, r7, 0x38
  addi      r4, r6, 0x4
  addi      r17, r3, 0x2
  lwz       r7, 0x0(r28)
  addi      r24, r26, 0x4
  addi      r25, r3, 0x3
  addi      r21, r23, 0x4
  sthx      r9, r7, r6
  addi      r22, r3, 0x4
  addi      r12, r20, 0x4
  addi      r19, r3, 0x5
  lwz       r7, 0x0(r28)
  addi      r9, r11, 0x4
  addi      r10, r3, 0x6
  addi      r6, r8, 0x4
  stwx      r27, r7, r4
  addi      r7, r3, 0x7
  addi      r4, r5, 0x4
  addi      r3, r3, 0x8
  lwz       r18, 0x0(r28)
  sthx      r17, r18, r26
  lwz       r26, 0x0(r28)
  stwx      r27, r26, r24
  lwz       r24, 0x0(r28)
  sthx      r25, r24, r23
  lwz       r23, 0x0(r28)
  stwx      r27, r23, r21
  lwz       r21, 0x0(r28)
  sthx      r22, r21, r20
  lwz       r20, 0x0(r28)
  stwx      r27, r20, r12
  lwz       r12, 0x0(r28)
  sthx      r19, r12, r11
  lwz       r11, 0x0(r28)
  stwx      r27, r11, r9
  lwz       r9, 0x0(r28)
  sthx      r10, r9, r8
  lwz       r8, 0x0(r28)
  stwx      r27, r8, r6
  lwz       r6, 0x0(r28)
  sthx      r7, r6, r5
  lwz       r5, 0x0(r28)
  stwx      r27, r5, r4

.loc_0x164:
  rlwinm    r4,r3,0,16,31
  cmplw     r4, r0
  blt+      .loc_0x84
  b         .loc_0x190

.loc_0x174:
  lwz       r4, 0x0(r28)
  rlwinm    r5,r3,3,13,28
  addi      r0, r5, 0x4
  sthx      r3, r4, r5
  addi      r3, r3, 0x1
  lwz       r4, 0x0(r28)
  stwx      r27, r4, r0

.loc_0x190:
  rlwinm    r0,r3,0,16,31
  cmplw     r0, r31
  blt+      .loc_0x174

.loc_0x19C:
  rlwinm    r3,r30,3,13,28
  addi      r3, r3, 0x10
  bl        -0x60100
  lis       r4, 0x8008
  lis       r5, 0x8007
  addi      r4, r4, 0x4234
  mr        r7, r30
  subi      r5, r5, 0x5AA0
  li        r6, 0x8
  bl        0x3D928
  stw       r3, 0x0(r29)
  lwz       r0, 0x0(r29)
  cmplwi    r0, 0
  bne-      .loc_0x1DC
  li        r3, 0x4
  b         .loc_0x318

.loc_0x1DC:
  cmplwi    r30, 0
  li        r3, 0
  ble-      .loc_0x314
  cmplwi    r30, 0x8
  subi      r0, r30, 0x8
  ble-      .loc_0x308
  rlwinm    r0,r0,0,16,31
  b         .loc_0x2DC

.loc_0x1FC:
  lwz       r4, 0x0(r29)
  rlwinm    r7,r3,3,13,28
  addi      r21, r7, 0x10
  addi      r9, r3, 0x1
  sthx      r3, r4, r7
  addi      r24, r7, 0x18
  addi      r31, r7, 0x20
  addi      r4, r7, 0x4
  lwz       r5, 0x0(r29)
  addi      r6, r7, 0x8
  addi      r11, r7, 0x28
  addi      r8, r7, 0x30
  stwx      r27, r5, r4
  addi      r5, r7, 0x38
  addi      r4, r6, 0x4
  addi      r19, r3, 0x2
  lwz       r7, 0x0(r29)
  addi      r23, r21, 0x4
  addi      r22, r3, 0x3
  addi      r26, r24, 0x4
  sthx      r9, r7, r6
  addi      r25, r3, 0x4
  addi      r12, r31, 0x4
  addi      r28, r3, 0x5
  lwz       r7, 0x0(r29)
  addi      r9, r11, 0x4
  addi      r10, r3, 0x6
  addi      r6, r8, 0x4
  stwx      r27, r7, r4
  addi      r7, r3, 0x7
  addi      r4, r5, 0x4
  addi      r3, r3, 0x8
  lwz       r20, 0x0(r29)
  sthx      r19, r20, r21
  lwz       r21, 0x0(r29)
  stwx      r27, r21, r23
  lwz       r23, 0x0(r29)
  sthx      r22, r23, r24
  lwz       r24, 0x0(r29)
  stwx      r27, r24, r26
  lwz       r26, 0x0(r29)
  sthx      r25, r26, r31
  lwz       r31, 0x0(r29)
  stwx      r27, r31, r12
  lwz       r12, 0x0(r29)
  sthx      r28, r12, r11
  lwz       r11, 0x0(r29)
  stwx      r27, r11, r9
  lwz       r9, 0x0(r29)
  sthx      r10, r9, r8
  lwz       r8, 0x0(r29)
  stwx      r27, r8, r6
  lwz       r6, 0x0(r29)
  sthx      r7, r6, r5
  lwz       r5, 0x0(r29)
  stwx      r27, r5, r4

.loc_0x2DC:
  rlwinm    r4,r3,0,16,31
  cmplw     r4, r0
  blt+      .loc_0x1FC
  b         .loc_0x308

.loc_0x2EC:
  lwz       r4, 0x0(r29)
  rlwinm    r5,r3,3,13,28
  addi      r0, r5, 0x4
  sthx      r3, r4, r5
  addi      r3, r3, 0x1
  lwz       r4, 0x0(r29)
  stwx      r27, r4, r0

.loc_0x308:
  rlwinm    r0,r3,0,16,31
  cmplw     r0, r30
  blt+      .loc_0x2EC

.loc_0x314:
  li        r3, 0

.loc_0x318:
  lmw       r17, 0x14(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80084234
 * Size:	000018
 */
void J3DTevKColorAnm::J3DTevKColorAnm()
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  sth       r4, 0x0(r3)
  sth       r0, 0x2(r3)
  stw       r4, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8008424C
 * Size:	000018
 */
void J3DTevColorAnm::J3DTevColorAnm()
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  sth       r4, 0x0(r3)
  sth       r0, 0x2(r3)
  stw       r4, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void J3DMaterialTable::removeMatColorAnimator(J3DAnmColor *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void J3DMaterialTable::removeTexNoAnimator(J3DAnmTexPattern *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80084264
 * Size:	0000AC
 */
void J3DMaterialTable::removeTexMtxAnimator(J3DAnmTextureSRTKey *)
{
/*
.loc_0x0:
  lis       r5, 0x5555
  lhz       r0, 0x14(r4)
  addi      r5, r5, 0x5556
  li        r10, 0
  mulhw     r5, r5, r0
  li        r11, 0
  rlwinm    r0,r5,1,31,31
  add       r0, r5, r0
  rlwinm    r7,r0,0,16,31
  b         .loc_0x98

.loc_0x28:
  lwz       r5, 0x2C(r4)
  rlwinm    r0,r11,1,15,30
  rlwinm    r9,r11,0,16,31
  lhzx      r0, r5, r0
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x94
  lwz       r6, 0x8(r3)
  rlwinm    r5,r0,2,14,29
  lis       r0, 0xC000
  lwzx      r5, r6, r5
  lwz       r8, 0x3C(r5)
  cmplw     r8, r0
  bge-      .loc_0x60
  b         .loc_0x64

.loc_0x60:
  li        r8, 0

.loc_0x64:
  lwz       r5, 0x28(r4)
  cmplwi    r8, 0
  lbzx      r0, r5, r9
  bne-      .loc_0x7C
  li        r10, 0x1
  b         .loc_0x94

.loc_0x7C:
  cmplwi    r0, 0xFF
  beq-      .loc_0x94
  rlwinm    r5,r0,3,21,28
  li        r6, 0
  addi      r0, r5, 0x16
  sthx      r6, r8, r0

.loc_0x94:
  addi      r11, r11, 0x1

.loc_0x98:
  rlwinm    r0,r11,0,16,31
  cmplw     r0, r7
  blt+      .loc_0x28
  mr        r3, r10
  blr
*/
}

/*
 * --INFO--
 * Address:	80084310
 * Size:	00011C
 */
void J3DMaterialTable::removeTevRegAnimator(J3DAnmTevRegKey *)
{
/*
.loc_0x0:
  lhz       r9, 0xC(r4)
  li        r5, 0
  lhz       r0, 0xE(r4)
  li        r11, 0
  b         .loc_0x84

.loc_0x14:
  lwz       r7, 0x20(r4)
  rlwinm    r6,r11,1,15,30
  rlwinm    r10,r11,0,16,31
  lhzx      r6, r7, r6
  cmplwi    r6, 0xFFFF
  beq-      .loc_0x80
  lwz       r8, 0x8(r3)
  rlwinm    r7,r6,2,14,29
  lis       r6, 0xC000
  lwzx      r7, r8, r7
  lwz       r8, 0x3C(r7)
  cmplw     r8, r6
  bge-      .loc_0x4C
  b         .loc_0x50

.loc_0x4C:
  li        r8, 0

.loc_0x50:
  mulli     r6, r10, 0x1C
  lwz       r7, 0x48(r4)
  cmplwi    r8, 0
  addi      r6, r6, 0x18
  lbzx      r6, r7, r6
  bne-      .loc_0x70
  li        r5, 0x1
  b         .loc_0x80

.loc_0x70:
  rlwinm    r6,r6,3,21,28
  li        r7, 0
  addi      r6, r6, 0xB6
  sthx      r7, r8, r6

.loc_0x80:
  addi      r11, r11, 0x1

.loc_0x84:
  rlwinm    r6,r11,0,16,31
  cmplw     r6, r9
  blt+      .loc_0x14
  li        r10, 0
  b         .loc_0x108

.loc_0x98:
  lwz       r7, 0x34(r4)
  rlwinm    r6,r10,1,15,30
  rlwinm    r9,r10,0,16,31
  lhzx      r6, r7, r6
  cmplwi    r6, 0xFFFF
  beq-      .loc_0x104
  lwz       r8, 0x8(r3)
  rlwinm    r7,r6,2,14,29
  lis       r6, 0xC000
  lwzx      r7, r8, r7
  lwz       r8, 0x3C(r7)
  cmplw     r8, r6
  bge-      .loc_0xD0
  b         .loc_0xD4

.loc_0xD0:
  li        r8, 0

.loc_0xD4:
  mulli     r6, r9, 0x1C
  lwz       r7, 0x4C(r4)
  cmplwi    r8, 0
  addi      r6, r6, 0x18
  lbzx      r6, r7, r6
  bne-      .loc_0xF4
  li        r5, 0x1
  b         .loc_0x104

.loc_0xF4:
  rlwinm    r6,r6,3,21,28
  li        r7, 0
  addi      r6, r6, 0xD6
  sthx      r7, r8, r6

.loc_0x104:
  addi      r10, r10, 0x1

.loc_0x108:
  rlwinm    r6,r10,0,16,31
  cmplw     r6, r0
  blt+      .loc_0x98
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000204
 */
void J3DMaterialTable::createTexMtxForAnimator(J3DAnmTextureSRTKey *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008442C
 * Size:	0000BC
 */
void J3DMaterialTable::entryMatColorAnimator(J3DAnmColor *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  li        r8, 0
  lhz       r0, 0x1C(r3)
  lhz       r7, 0x14(r4)
  cmplwi    r0, 0x1
  bne-      .loc_0x20
  li        r3, 0x2
  b         .loc_0xB4

.loc_0x20:
  li        r9, 0
  b         .loc_0xA4

.loc_0x28:
  lwz       r5, 0x18(r4)
  rlwinm    r0,r9,1,15,30
  lhzx      r0, r5, r0
  cmplwi    r0, 0xFFFF
  beq-      .loc_0xA0
  lwz       r6, 0x8(r3)
  rlwinm    r5,r0,2,14,29
  lis       r0, 0xC000
  lwzx      r5, r6, r5
  lwz       r6, 0x3C(r5)
  cmplw     r6, r0
  bge-      .loc_0x5C
  b         .loc_0x60

.loc_0x5C:
  li        r6, 0

.loc_0x60:
  cmplwi    r6, 0
  bne-      .loc_0x70
  li        r8, 0x1
  b         .loc_0xA0

.loc_0x70:
  li        r5, 0x1
  addic.    r0, r1, 0x8
  sth       r9, 0x8(r1)
  sth       r5, 0xA(r1)
  stw       r4, 0xC(r1)
  bne-      .loc_0x94
  li        r0, 0
  sth       r0, 0x6(r6)
  b         .loc_0xA0

.loc_0x94:
  stw       r4, 0x8(r6)
  sth       r9, 0x4(r6)
  sth       r5, 0x6(r6)

.loc_0xA0:
  addi      r9, r9, 0x1

.loc_0xA4:
  rlwinm    r0,r9,0,16,31
  cmplw     r0, r7
  blt+      .loc_0x28
  mr        r3, r8

.loc_0xB4:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void J3DMaterialTable::entryTexNoAnimator(J3DAnmTexPattern *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800844E8
 * Size:	000380
 */
void J3DMaterialTable::entryTexMtxAnimator(J3DAnmTextureSRTKey *)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r23, 0x1C(r1)
  mr        r31, r4
  lis       r4, 0x5555
  mr        r30, r3
  addi      r4, r4, 0x5556
  li        r27, 0
  lhz       r0, 0x14(r31)
  mulhw     r3, r4, r0
  lhz       r0, 0x1C(r30)
  cmplwi    r0, 0x1
  rlwinm    r0,r3,1,31,31
  add       r0, r3, r0
  rlwinm    r26,r0,0,16,31
  bne-      .loc_0x4C
  li        r27, 0x2
  b         .loc_0x1EC

.loc_0x4C:
  lis       r3, 0x8048
  mr        r28, r27
  subi      r29, r3, 0x7738
  b         .loc_0x1E0

.loc_0x5C:
  lwz       r3, 0x2C(r31)
  rlwinm    r0,r28,1,15,30
  rlwinm    r6,r28,0,16,31
  lhzx      r0, r3, r0
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x1DC
  lwz       r5, 0x8(r30)
  rlwinm    r4,r0,2,14,29
  lwz       r3, 0x28(r31)
  lis       r0, 0xC000
  lwzx      r25, r5, r4
  lbzx      r24, r3, r6
  lwz       r3, 0x3C(r25)
  cmplw     r3, r0
  bge-      .loc_0x9C
  b         .loc_0xA0

.loc_0x9C:
  li        r3, 0

.loc_0xA0:
  cmplwi    r3, 0
  bne-      .loc_0xB0
  li        r27, 0x1
  b         .loc_0x1DC

.loc_0xB0:
  cmplwi    r24, 0xFF
  beq-      .loc_0x1DC
  lwz       r3, 0x28(r25)
  mr        r4, r24
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x1DC
  li        r3, 0x94
  bl        -0x60720
  mr.       r5, r3
  beq-      .loc_0x1C0
  lis       r3, 0x8048
  subi      r3, r3, 0x7738
  lfs       f0, 0x24(r3)
  stfs      f0, 0x24(r5)
  lfs       f0, 0x28(r3)
  stfs      f0, 0x28(r5)
  lfs       f0, 0x2C(r3)
  stfs      f0, 0x2C(r5)
  lfs       f0, 0x30(r3)
  stfs      f0, 0x30(r5)
  lfs       f0, 0x34(r3)
  stfs      f0, 0x34(r5)
  lfs       f0, 0x38(r3)
  stfs      f0, 0x38(r5)
  lfs       f0, 0x3C(r3)
  stfs      f0, 0x3C(r5)
  lfs       f0, 0x40(r3)
  stfs      f0, 0x40(r5)
  lfs       f0, 0x44(r3)
  stfs      f0, 0x44(r5)
  lfs       f0, 0x48(r3)
  stfs      f0, 0x48(r5)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x4C(r5)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x50(r5)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x54(r5)
  lfs       f0, 0x58(r3)
  stfs      f0, 0x58(r5)
  lfs       f0, 0x5C(r3)
  stfs      f0, 0x5C(r5)
  lfs       f0, 0x60(r3)
  stfs      f0, 0x60(r5)
  lfs       f0, 0x4(r29)
  stfs      f0, 0x4(r5)
  lfs       f0, 0x8(r29)
  stfs      f0, 0x8(r5)
  lfs       f0, 0xC(r29)
  stfs      f0, 0xC(r5)
  lbz       r0, 0x0(r3)
  stb       r0, 0x0(r5)
  lbz       r0, 0x1(r29)
  stb       r0, 0x1(r5)
  lfs       f0, 0x10(r29)
  stfs      f0, 0x10(r5)
  lfs       f0, 0x14(r29)
  stfs      f0, 0x14(r5)
  lha       r0, 0x18(r29)
  sth       r0, 0x18(r5)
  lfs       f0, 0x1C(r29)
  stfs      f0, 0x1C(r5)
  lfs       f0, 0x20(r29)
  stfs      f0, 0x20(r5)

.loc_0x1C0:
  lwz       r3, 0x28(r25)
  mr        r4, r24
  li        r27, 0x4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     

.loc_0x1DC:
  addi      r28, r28, 0x1

.loc_0x1E0:
  rlwinm    r0,r28,0,16,31
  cmplw     r0, r26
  blt+      .loc_0x5C

.loc_0x1EC:
  cmpwi     r27, 0
  mr        r28, r27
  beq-      .loc_0x200
  mr        r3, r27
  b         .loc_0x36C

.loc_0x200:
  lhz       r0, 0x1C(r30)
  cmplwi    r0, 0x1
  bne-      .loc_0x214
  li        r3, 0x2
  b         .loc_0x36C

.loc_0x214:
  li        r29, 0
  b         .loc_0x35C

.loc_0x21C:
  lwz       r3, 0x2C(r31)
  rlwinm    r0,r29,1,15,30
  rlwinm    r25,r29,0,16,31
  lhzx      r0, r3, r0
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x358
  lwz       r4, 0x8(r30)
  rlwinm    r3,r0,2,14,29
  lis       r0, 0xC000
  lwzx      r23, r4, r3
  lwz       r24, 0x3C(r23)
  cmplw     r24, r0
  bge-      .loc_0x254
  b         .loc_0x258

.loc_0x254:
  li        r24, 0

.loc_0x258:
  lwz       r3, 0x28(r31)
  cmplwi    r24, 0
  lbzx      r27, r3, r25
  bne-      .loc_0x270
  li        r28, 0x1
  b         .loc_0x358

.loc_0x270:
  cmplwi    r27, 0xFF
  beq-      .loc_0x358
  lwz       r3, 0x28(r23)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x2BC
  lwz       r3, 0x28(r23)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  mulli     r4, r27, 0x3
  addi      r0, r4, 0x1E
  stb       r0, 0x2(r3)

.loc_0x2BC:
  lwz       r3, 0x28(r23)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x78(r31)
  mulli     r8, r25, 0xC
  lbz       r5, 0x1(r3)
  li        r4, 0x1
  rlwinm    r0,r0,7,0,24
  sth       r29, 0x8(r1)
  rlwimi    r0,r5,0,26,31
  stb       r0, 0x1(r3)
  addi      r6, r8, 0x4
  addi      r5, r8, 0x8
  addic.    r0, r1, 0x8
  lwz       r7, 0x40(r31)
  sth       r4, 0xA(r1)
  lfsx      f0, r7, r8
  stw       r31, 0xC(r1)
  stfs      f0, 0x4(r3)
  lwz       r7, 0x40(r31)
  lfsx      f0, r7, r6
  stfs      f0, 0x8(r3)
  lwz       r6, 0x40(r31)
  lfsx      f0, r6, r5
  stfs      f0, 0xC(r3)
  bne-      .loc_0x344
  rlwinm    r3,r27,3,21,28
  li        r4, 0
  addi      r0, r3, 0x16
  sthx      r4, r24, r0
  b         .loc_0x358

.loc_0x344:
  rlwinm    r0,r27,3,21,28
  add       r3, r24, r0
  stw       r31, 0x18(r3)
  sth       r29, 0x14(r3)
  sth       r4, 0x16(r3)

.loc_0x358:
  addi      r29, r29, 0x1

.loc_0x35C:
  rlwinm    r0,r29,0,16,31
  cmplw     r0, r26
  blt+      .loc_0x21C
  mr        r3, r28

.loc_0x36C:
  lmw       r23, 0x1C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80084868
 * Size:	000198
 */
void J3DMaterialTable::entryTevRegAnimator(J3DAnmTevRegKey *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  li        r5, 0
  lhz       r0, 0x1C(r3)
  lhz       r9, 0xC(r4)
  cmplwi    r0, 0x1
  lhz       r0, 0xE(r4)
  bne-      .loc_0x24
  li        r3, 0x2
  b         .loc_0x190

.loc_0x24:
  li        r11, 0
  b         .loc_0xCC

.loc_0x2C:
  lwz       r7, 0x20(r4)
  rlwinm    r6,r11,1,15,30
  rlwinm    r10,r11,0,16,31
  lhzx      r6, r7, r6
  cmplwi    r6, 0xFFFF
  beq-      .loc_0xC8
  lwz       r8, 0x8(r3)
  rlwinm    r7,r6,2,14,29
  lis       r6, 0xC000
  lwzx      r7, r8, r7
  lwz       r8, 0x3C(r7)
  cmplw     r8, r6
  bge-      .loc_0x64
  b         .loc_0x68

.loc_0x64:
  li        r8, 0

.loc_0x68:
  mulli     r6, r10, 0x1C
  lwz       r7, 0x48(r4)
  cmplwi    r8, 0
  addi      r6, r6, 0x18
  lbzx      r10, r7, r6
  bne-      .loc_0x88
  li        r5, 0x1
  b         .loc_0xC8

.loc_0x88:
  li        r7, 0x1
  addic.    r6, r1, 0x10
  sth       r11, 0x10(r1)
  sth       r7, 0x12(r1)
  stw       r4, 0x14(r1)
  bne-      .loc_0xB4
  rlwinm    r6,r10,3,21,28
  li        r7, 0
  addi      r6, r6, 0xB6
  sthx      r7, r8, r6
  b         .loc_0xC8

.loc_0xB4:
  rlwinm    r6,r10,3,21,28
  add       r6, r8, r6
  stw       r4, 0xB8(r6)
  sth       r11, 0xB4(r6)
  sth       r7, 0xB6(r6)

.loc_0xC8:
  addi      r11, r11, 0x1

.loc_0xCC:
  rlwinm    r6,r11,0,16,31
  cmplw     r6, r9
  blt+      .loc_0x2C
  li        r10, 0
  b         .loc_0x180

.loc_0xE0:
  lwz       r7, 0x34(r4)
  rlwinm    r6,r10,1,15,30
  rlwinm    r9,r10,0,16,31
  lhzx      r6, r7, r6
  cmplwi    r6, 0xFFFF
  beq-      .loc_0x17C
  lwz       r8, 0x8(r3)
  rlwinm    r7,r6,2,14,29
  lis       r6, 0xC000
  lwzx      r7, r8, r7
  lwz       r8, 0x3C(r7)
  cmplw     r8, r6
  bge-      .loc_0x118
  b         .loc_0x11C

.loc_0x118:
  li        r8, 0

.loc_0x11C:
  mulli     r6, r9, 0x1C
  lwz       r7, 0x4C(r4)
  cmplwi    r8, 0
  addi      r6, r6, 0x18
  lbzx      r9, r7, r6
  bne-      .loc_0x13C
  li        r5, 0x1
  b         .loc_0x17C

.loc_0x13C:
  li        r7, 0x1
  addic.    r6, r1, 0x8
  sth       r10, 0x8(r1)
  sth       r7, 0xA(r1)
  stw       r4, 0xC(r1)
  bne-      .loc_0x168
  rlwinm    r6,r9,3,21,28
  li        r7, 0
  addi      r6, r6, 0xD6
  sthx      r7, r8, r6
  b         .loc_0x17C

.loc_0x168:
  rlwinm    r6,r9,3,21,28
  add       r6, r8, r6
  stw       r4, 0xD8(r6)
  sth       r10, 0xD4(r6)
  sth       r7, 0xD6(r6)

.loc_0x17C:
  addi      r10, r10, 0x1

.loc_0x180:
  rlwinm    r6,r10,0,16,31
  cmplw     r6, r0
  blt+      .loc_0xE0
  mr        r3, r5

.loc_0x190:
  addi      r1, r1, 0x20
  blr
*/
}