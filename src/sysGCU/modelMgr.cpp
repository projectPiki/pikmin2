

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042AB00
 * Size:	0001D8
 */
void __ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<SysShape::Model *>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r26, r4
  mr        r25, r3
  mr        r27, r5
  mr        r28, r6
  mr        r29, r7
  mr        r30, r8
  mr        r31, r9
  stw       r26, 0x0(r3)
  rlwinm    r3,r4,2,0,29
  bl        -0x406B88
  cmpwi     r26, 0
  stw       r3, 0x4(r25)
  li        r5, 0
  ble-      .loc_0x12C
  cmpwi     r26, 0x8
  subi      r6, r26, 0x8
  ble-      .loc_0xFC
  addi      r0, r6, 0x7
  mr        r3, r27
  rlwinm    r0,r0,29,3,31
  li        r4, 0
  mtctr     r0
  cmpwi     r6, 0
  ble-      .loc_0xFC

.loc_0x70:
  lwz       r0, 0x0(r3)
  addi      r11, r4, 0x4
  lwz       r6, 0x4(r25)
  addi      r10, r4, 0x8
  addi      r9, r4, 0xC
  addi      r8, r4, 0x10
  stwx      r0, r6, r4
  addi      r7, r4, 0x14
  addi      r6, r4, 0x18
  addi      r0, r4, 0x1C
  lwz       r24, 0x4(r3)
  addi      r4, r4, 0x20
  lwz       r12, 0x4(r25)
  addi      r5, r5, 0x8
  stwx      r24, r12, r11
  lwz       r12, 0x8(r3)
  lwz       r11, 0x4(r25)
  stwx      r12, r11, r10
  lwz       r11, 0xC(r3)
  lwz       r10, 0x4(r25)
  stwx      r11, r10, r9
  lwz       r10, 0x10(r3)
  lwz       r9, 0x4(r25)
  stwx      r10, r9, r8
  lwz       r9, 0x14(r3)
  lwz       r8, 0x4(r25)
  stwx      r9, r8, r7
  lwz       r8, 0x18(r3)
  lwz       r7, 0x4(r25)
  stwx      r8, r7, r6
  lwz       r7, 0x1C(r3)
  addi      r3, r3, 0x20
  lwz       r6, 0x4(r25)
  stwx      r7, r6, r0
  bdnz+     .loc_0x70

.loc_0xFC:
  rlwinm    r6,r5,2,0,29
  sub       r0, r26, r5
  add       r4, r27, r6
  mtctr     r0
  cmpw      r5, r26
  bge-      .loc_0x12C

.loc_0x114:
  lwz       r0, 0x0(r4)
  addi      r4, r4, 0x4
  lwz       r3, 0x4(r25)
  stwx      r0, r3, r6
  addi      r6, r6, 0x4
  bdnz+     .loc_0x114

.loc_0x12C:
  stw       r28, 0x8(r25)
  rlwinm    r3,r28,2,0,29
  stw       r29, 0x10(r25)
  stw       r30, 0x14(r25)
  stw       r31, 0x18(r25)
  bl        -0x406C94
  stw       r3, 0xC(r25)
  mr        r3, r25
  bl        .loc_0x1D8
  addi      r0, r3, 0x1F
  lis       r4, 0x804A
  lis       r3, 0x804A
  li        r30, 0
  rlwinm    r29,r0,0,0,26
  subi      r27, r4, 0x618C
  subi      r26, r3, 0x617C
  li        r24, 0
  b         .loc_0x1B8

.loc_0x174:
  lwz       r4, -0x77D4(r13)
  mr        r3, r29
  li        r5, 0x1
  bl        -0x405F10
  lwz       r4, 0xC(r25)
  stwx      r3, r4, r24
  lwz       r3, 0xC(r25)
  lwzx      r0, r3, r24
  cmplwi    r0, 0
  bne-      .loc_0x1B0
  mr        r3, r27
  mr        r5, r26
  li        r4, 0x52
  crclr     6, 0x6
  bl        -0x40066C

.loc_0x1B0:
  addi      r24, r24, 0x4
  addi      r30, r30, 0x1

.loc_0x1B8:
  cmpw      r30, r28
  blt+      .loc_0x174
  mr        r3, r25
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x1D8:
*/
}

/*
 * --INFO--
 * Address:	8042ACD8
 * Size:	000084
 */
void SysShape::ModelMgr::calcMaximumModelSize(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x54

.loc_0x30:
  lwz       r4, 0x4(r28)
  mr        r3, r28
  lwzx      r4, r4, r31
  bl        .loc_0x84
  cmplw     r3, r30
  ble-      .loc_0x4C
  mr        r30, r3

.loc_0x4C:
  addi      r31, r31, 0x4
  addi      r29, r29, 0x1

.loc_0x54:
  lwz       r0, 0x0(r28)
  cmpw      r29, r0
  blt+      .loc_0x30
  lwz       r0, 0x24(r1)
  addi      r3, r30, 0x7C
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x84:
*/
}

/*
 * --INFO--
 * Address:	8042AD5C
 * Size:	0000A0
 */
void SysShape::ModelMgr::calcModelSize( (J3DModelData *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr.       r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x84

.loc_0x2C:
  lwz       r3, -0x77D4(r13)
  bl        -0x4075AC
  mr        r31, r3
  li        r3, 0x14
  bl        -0x406EF4
  mr.       r4, r3
  beq-      .loc_0x5C
  lwz       r5, 0x10(r29)
  mr        r4, r30
  lwz       r6, 0x14(r29)
  bl        0x13428
  mr        r4, r3

.loc_0x5C:
  lwz       r3, 0x18(r29)
  cmplwi    r3, 0
  beq-      .loc_0x78
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x78:
  lwz       r3, -0x77D4(r13)
  bl        -0x4075F8
  sub       r3, r31, r3

.loc_0x84:
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
 * Address:	8042ADFC
 * Size:	0001C8
 */
void SysShape::ModelMgr::createModel( (int, int))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r27, r3
  rlwinm    r30,r4,2,0,29
  mr        r28, r4
  lis       r4, 0x804A
  mr        r29, r5
  subi      r31, r4, 0x6198
  lwz       r3, 0x4(r3)
  lwzx      r0, r3, r30
  cmplwi    r0, 0
  bne-      .loc_0x40
  li        r3, 0
  b         .loc_0x1B4

.loc_0x40:
  cmpwi     r28, 0
  li        r3, 0
  blt-      .loc_0x5C
  lwz       r0, 0x0(r27)
  cmpw      r28, r0
  bge-      .loc_0x5C
  li        r3, 0x1

.loc_0x5C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  addi      r3, r31, 0xC
  addi      r5, r31, 0x3C
  li        r4, 0x98
  crclr     6, 0x6
  bl        -0x400830

.loc_0x78:
  cmpwi     r29, 0
  li        r3, 0
  blt-      .loc_0x94
  lwz       r0, 0x8(r27)
  cmpw      r29, r0
  bge-      .loc_0x94
  li        r3, 0x1

.loc_0x94:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB0
  addi      r3, r31, 0xC
  addi      r5, r31, 0x3C
  li        r4, 0x99
  crclr     6, 0x6
  bl        -0x400868

.loc_0xB0:
  lwz       r4, 0xC(r27)
  rlwinm    r0,r29,2,0,29
  lwz       r3, -0x6514(r13)
  lwzx      r26, r4, r0
  mr        r4, r26
  bl        -0x7A78
  cmplwi    r26, 0
  beq-      .loc_0xDC
  mr        r3, r26
  bl        -0x4077A0
  b         .loc_0x13C

.loc_0xDC:
  lwz       r4, 0x8(r27)
  li        r5, 0
  cmpwi     r4, 0
  ble-      .loc_0x128
  cmpwi     r4, 0x8
  subi      r3, r4, 0x8
  ble-      .loc_0x114
  addi      r0, r3, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0x114

.loc_0x10C:
  addi      r5, r5, 0x8
  bdnz+     .loc_0x10C

.loc_0x114:
  sub       r0, r4, r5
  mtctr     r0
  cmpw      r5, r4
  bge-      .loc_0x128

.loc_0x124:
  bdnz-     .loc_0x124

.loc_0x128:
  addi      r3, r31, 0xC
  addi      r5, r31, 0x48
  li        r4, 0xAD
  crclr     6, 0x6
  bl        -0x4008F4

.loc_0x13C:
  li        r3, 0x14
  bl        -0x407098
  mr.       r26, r3
  beq-      .loc_0x164
  lwz       r4, 0x4(r27)
  lwz       r5, 0x10(r27)
  lwzx      r4, r4, r30
  lwz       r6, 0x14(r27)
  bl        0x13280
  mr        r26, r3

.loc_0x164:
  lwz       r3, 0x18(r27)
  cmplwi    r3, 0
  beq-      .loc_0x184
  lwz       r12, 0x0(r3)
  mr        r4, r26
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x184:
  cmplwi    r26, 0
  bne-      .loc_0x1A8
  mr        r6, r28
  mr        r7, r29
  addi      r3, r31, 0xC
  addi      r5, r31, 0x5C
  li        r4, 0xB8
  crclr     6, 0x6
  bl        -0x400960

.loc_0x1A8:
  lwz       r3, -0x6514(r13)
  bl        -0x7AF0
  mr        r3, r26

.loc_0x1B4:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}
