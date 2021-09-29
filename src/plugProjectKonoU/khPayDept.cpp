

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
 * Address:	8040F1E0
 * Size:	00002C
 */
void __ct__Q32kh6Screen11DispPayDeptFQ42kh6Screen11DispPayDept11PayDeptTypei(void)
{
/*
.loc_0x0:
  lis       r7, 0x804B
  lis       r6, 0x804F
  addi      r0, r7, 0x1148
  li        r7, 0
  stw       r0, 0x0(r3)
  subi      r0, r6, 0x4C30
  stw       r7, 0x4(r3)
  stw       r0, 0x0(r3)
  stw       r4, 0x8(r3)
  stw       r5, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void __ct__Q32kh6Screen10ObjPayDeptFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8040F20C
 * Size:	00025C
 */
void doCreate__Q32kh6Screen10ObjPayDeptFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  subi      r31, r5, 0x6EA0
  stw       r30, 0x38(r1)
  mr        r30, r4
  stw       r29, 0x34(r1)
  mr        r29, r3
  stw       r28, 0x30(r1)
  lwz       r11, 0xD0(r31)
  lwz       r10, 0xD4(r31)
  lwz       r9, 0xD8(r31)
  lwz       r8, 0x124(r31)
  lwz       r7, 0x128(r31)
  lwz       r6, 0x12C(r31)
  lwz       r5, 0x178(r31)
  lwz       r4, 0x17C(r31)
  lwz       r0, 0x180(r31)
  stw       r11, 0x20(r1)
  stw       r10, 0x24(r1)
  stw       r9, 0x28(r1)
  stw       r8, 0x14(r1)
  stw       r7, 0x18(r1)
  stw       r6, 0x1C(r1)
  stw       r5, 0x8(r1)
  stw       r4, 0xC(r1)
  stw       r0, 0x10(r1)
  bl        0x44D28
  lis       r4, 0x4445
  lis       r5, 0x5041
  addi      r6, r4, 0x5054
  li        r4, 0x4B48
  addi      r5, r5, 0x595F
  bl        -0xFFF7C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xAC
  addi      r3, r31, 0
  addi      r5, r31, 0x184
  li        r4, 0x5B
  crclr     6, 0x6
  bl        -0x3E4C74

.loc_0xAC:
  mr        r3, r29
  bl        0x44CEC
  mr        r31, r3
  li        r28, 0
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0xEC
  bge-      .loc_0xD8
  cmpwi     r0, 0
  bge-      .loc_0xE4
  b         .loc_0xF8

.loc_0xD8:
  cmpwi     r0, 0x3
  bge-      .loc_0xF8
  b         .loc_0xF4

.loc_0xE4:
  addi      r28, r1, 0x20
  b         .loc_0xF8

.loc_0xEC:
  addi      r28, r1, 0x14
  b         .loc_0xF8

.loc_0xF4:
  addi      r28, r1, 0x8

.loc_0xF8:
  li        r3, 0x148
  bl        -0x3EB464
  mr.       r0, r3
  beq-      .loc_0x110
  bl        0x25A98
  mr        r0, r3

.loc_0x110:
  stw       r0, 0x38(r29)
  mr        r6, r30
  lis       r5, 0x4
  lwz       r3, 0x38(r29)
  lwz       r4, 0x0(r28)
  bl        -0x3CFD0C
  lwz       r3, 0x4(r28)
  mr        r4, r30
  bl        -0x3EC324
  bl        -0x3C7A24
  stw       r3, 0x3C(r29)
  mr        r4, r30
  lwz       r3, 0x8(r28)
  bl        -0x3EC338
  bl        -0x3C7A38
  stw       r3, 0x40(r29)
  lwz       r3, 0x38(r29)
  lwz       r4, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r29)
  lwz       r4, 0x40(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0
  bne-      .loc_0x1E8
  lwz       r3, 0x38(r29)
  lis       r4, 0x524F
  addi      r6, r4, 0x4F54
  lwz       r30, 0xC(r31)
  lwz       r12, 0x0(r3)
  li        r5, 0
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x6666
  mr        r4, r3
  addi      r0, r5, 0x6667
  mr        r3, r29
  mulhw     r0, r0, r30
  srawi     r6, r0, 0x2
  srawi     r0, r0, 0x2
  rlwinm    r5,r0,1,31,31
  rlwinm    r7,r6,1,31,31
  add       r0, r0, r5
  mulli     r0, r0, 0xA
  add       r5, r6, r7
  sub       r6, r30, r0
  bl        0x364

.loc_0x1E8:
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x220
  bge-      .loc_0x204
  cmpwi     r0, 0
  bge-      .loc_0x210
  b         .loc_0x23C

.loc_0x204:
  cmpwi     r0, 0x3
  bge-      .loc_0x23C
  b         .loc_0x230

.loc_0x210:
  lis       r3, 0xC001
  addi      r3, r3, 0x1021
  bl        0x5C34C
  b         .loc_0x23C

.loc_0x220:
  lis       r3, 0xC001
  addi      r3, r3, 0x1020
  bl        0x5C33C
  b         .loc_0x23C

.loc_0x230:
  lis       r3, 0xC001
  addi      r3, r3, 0x1020
  bl        0x5C32C

.loc_0x23C:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8040F468
 * Size:	0000CC
 */
void doUpdateFadein__Q32kh6Screen10ObjPayDeptFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x44B2C
  lis       r4, 0x4445
  lis       r5, 0x5041
  addi      r6, r4, 0x5054
  li        r4, 0x4B48
  addi      r5, r5, 0x595F
  bl        -0x100178
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6EA0
  li        r4, 0x96
  subi      r5, r5, 0x6D1C
  crclr     6, 0x6
  bl        -0x3E4E78

.loc_0x54:
  mr        r3, r31
  bl        0x44AE8
  lwz       r0, 0x8(r3)
  li        r4, -0x1
  cmpwi     r0, 0x1
  beq-      .loc_0x90
  bge-      .loc_0x7C
  cmpwi     r0, 0
  bge-      .loc_0x88
  b         .loc_0x9C

.loc_0x7C:
  cmpwi     r0, 0x3
  bge-      .loc_0x9C
  b         .loc_0x98

.loc_0x88:
  li        r4, 0x1825
  b         .loc_0x9C

.loc_0x90:
  li        r4, 0x1844
  b         .loc_0x9C

.loc_0x98:
  li        r4, 0x1845

.loc_0x9C:
  addis     r0, r4, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0xB4
  lwz       r3, -0x67A8(r13)
  li        r5, 0
  bl        -0xD6EE8

.loc_0xB4:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040F534
 * Size:	000020
 */
void doUpdate__Q32kh6Screen10ObjPayDeptFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x138
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040F554
 * Size:	0000C0
 */
void doUpdateFadeoutFinish__Q32kh6Screen10ObjPayDeptFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x5C308
  mr        r3, r31
  bl        0x44A38
  lis       r4, 0x4445
  lis       r5, 0x5041
  addi      r6, r4, 0x5054
  li        r4, 0x4B48
  addi      r5, r5, 0x595F
  bl        -0x10026C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6EA0
  li        r4, 0xB7
  subi      r5, r5, 0x6D1C
  crclr     6, 0x6
  bl        -0x3E4F6C

.loc_0x5C:
  mr        r3, r31
  bl        0x449F4
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0
  bne-      .loc_0xAC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  bl        0x429E8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xAC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  bl        0x42964

.loc_0xAC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040F614
 * Size:	000064
 */
void doDraw__Q32kh6Screen10ObjPayDeptFR8Graphics(void)
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
  lwz       r3, 0x38(r30)
  mr        r4, r31
  addi      r5, r31, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8040F678
 * Size:	0000DC
 */
void updateAnimation__Q32kh6Screen10ObjPayDeptFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r3
  lfs       f0, 0x44(r3)
  lwz       r3, 0x3C(r3)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x48(r30)
  lwz       r3, 0x40(r30)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r30)
  bl        -0x3CEB84
  lfs       f1, 0x44(r30)
  lis       r0, 0x4330
  lfs       f0, -0x6540(r13)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f2, 0x1E90(r2)
  stfs      f0, 0x44(r30)
  lfs       f1, 0x48(r30)
  lfs       f0, -0x6540(r13)
  fadds     f0, f1, f0
  stfs      f0, 0x48(r30)
  lwz       r3, 0x3C(r30)
  lfs       f1, 0x44(r30)
  lha       r3, 0x6(r3)
  xoris     r3, r3, 0x8000
  stw       r3, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  beq-      .loc_0xBC
  lwz       r3, 0x40(r30)
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfs       f1, 0x48(r30)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f2
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xC0

.loc_0xBC:
  li        r31, 0x1

.loc_0xC0:
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8040F754
 * Size:	00031C
 */
void searchNumPane__Q32kh6Screen10ObjPayDeptFP7J2DPaneii(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  li        r0, 0x32
  stmw      r22, 0x18(r1)
  mr        r22, r4
  lis       r4, 0x6B65
  mr        r30, r3
  addi      r4, r4, 0x7461
  mr        r31, r5
  mr        r29, r6
  lwz       r7, 0x18(r22)
  lwz       r8, 0x1C(r22)
  xor       r0, r7, r0
  xor       r3, r8, r4
  or.       r0, r3, r0
  bne-      .loc_0x68
  lis       r3, 0x804F
  rlwinm    r0,r31,2,0,29
  subi      r4, r3, 0x4D20
  lwz       r3, 0x38(r30)
  lwz       r5, 0x10(r22)
  lwz       r6, 0x14(r22)
  lwzx      r7, r4, r0
  bl        -0x4324
  b         .loc_0x98

.loc_0x68:
  li        r0, 0x31
  xor       r0, r7, r0
  or.       r0, r3, r0
  bne-      .loc_0x98
  lis       r3, 0x804F
  rlwinm    r0,r29,2,0,29
  subi      r4, r3, 0x4D20
  lwz       r3, 0x38(r30)
  lwz       r5, 0x10(r22)
  lwz       r6, 0x14(r22)
  lwzx      r7, r4, r0
  bl        -0x4358

.loc_0x98:
  lwz       r23, 0xDC(r22)
  cmplwi    r23, 0
  beq-      .loc_0xA8
  subi      r23, r23, 0xC

.loc_0xA8:
  lis       r4, 0x804F
  lis       r3, 0x6B65
  rlwinm    r5,r31,2,0,29
  rlwinm    r0,r29,2,0,29
  subi      r4, r4, 0x4D20
  addi      r26, r3, 0x7461
  add       r27, r4, r5
  add       r28, r4, r0
  b         .loc_0x300

.loc_0xCC:
  lwz       r22, 0xC(r23)
  li        r0, 0x32
  lwz       r4, 0x18(r22)
  lwz       r5, 0x1C(r22)
  xor       r0, r4, r0
  xor       r3, r5, r26
  or.       r0, r3, r0
  bne-      .loc_0x104
  lwz       r3, 0x38(r30)
  lwz       r5, 0x10(r22)
  lwz       r6, 0x14(r22)
  lwz       r7, 0x0(r27)
  bl        -0x43C0
  b         .loc_0x134

.loc_0x104:
  lis       r3, 0x6B65
  li        r0, 0x31
  addi      r3, r3, 0x7461
  xor       r3, r5, r3
  xor       r0, r4, r0
  or.       r0, r3, r0
  bne-      .loc_0x134
  lwz       r3, 0x38(r30)
  lwz       r5, 0x10(r22)
  lwz       r6, 0x14(r22)
  lwz       r7, 0x0(r28)
  bl        -0x43F4

.loc_0x134:
  addi      r3, r22, 0xDC
  bl        -0x3EBC6C
  cmplwi    r3, 0
  beq-      .loc_0x148
  subi      r3, r3, 0xC

.loc_0x148:
  mr        r24, r3
  b         .loc_0x2E8

.loc_0x150:
  mr        r3, r24
  bl        -0x3D6F6C
  lwz       r4, 0x18(r3)
  li        r0, 0x32
  lwz       r5, 0x1C(r3)
  mr        r22, r3
  xor       r0, r4, r0
  xor       r3, r5, r26
  or.       r0, r3, r0
  bne-      .loc_0x190
  lwz       r3, 0x38(r30)
  lwz       r5, 0x10(r22)
  lwz       r6, 0x14(r22)
  lwz       r7, 0x0(r27)
  bl        -0x444C
  b         .loc_0x1C0

.loc_0x190:
  lis       r3, 0x6B65
  li        r0, 0x31
  addi      r3, r3, 0x7461
  xor       r3, r5, r3
  xor       r0, r4, r0
  or.       r0, r3, r0
  bne-      .loc_0x1C0
  lwz       r3, 0x38(r30)
  lwz       r5, 0x10(r22)
  lwz       r6, 0x14(r22)
  lwz       r7, 0x0(r28)
  bl        -0x4480

.loc_0x1C0:
  addi      r25, r22, 0xDC
  mr        r3, r25
  bl        -0x3D6FF4
  stw       r3, 0xC(r1)
  b         .loc_0x2C4

.loc_0x1D4:
  addi      r3, r1, 0xC
  bl        -0x10C444
  mr        r22, r3
  bl        -0x105B9C
  li        r0, 0x32
  xor       r4, r4, r26
  xor       r0, r3, r0
  or.       r0, r4, r0
  bne-      .loc_0x218
  mr        r3, r22
  bl        -0x10C454
  mr        r5, r3
  lwz       r3, 0x38(r30)
  lwz       r7, 0x0(r27)
  mr        r6, r4
  bl        -0x44D4
  b         .loc_0x258

.loc_0x218:
  mr        r3, r22
  bl        -0x105BD8
  lis       r5, 0x6B65
  li        r0, 0x31
  addi      r5, r5, 0x7461
  xor       r4, r4, r5
  xor       r0, r3, r0
  or.       r0, r4, r0
  bne-      .loc_0x258
  mr        r3, r22
  bl        -0x10C498
  mr        r5, r3
  lwz       r3, 0x38(r30)
  lwz       r7, 0x0(r28)
  mr        r6, r4
  bl        -0x4518

.loc_0x258:
  mr        r3, r22
  bl        -0x10C4BC
  mr        r22, r3
  bl        -0x3D7090
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x3D70B0
  b         .loc_0x29C

.loc_0x278:
  addi      r3, r1, 0x8
  bl        -0x10C4E8
  mr        r4, r3
  mr        r3, r30
  mr        r5, r31
  mr        r6, r29
  bl        .loc_0x0
  addi      r3, r1, 0x8
  bl        -0x3D70F4

.loc_0x29C:
  mr        r3, r22
  bl        -0x3D7104
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x3D7128
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x278
  lwz       r3, 0xC(r1)
  bl        -0x3D714C
  stw       r3, 0xC(r1)

.loc_0x2C4:
  mr        r3, r25
  bl        -0x3D712C
  lwz       r0, 0xC(r1)
  cmplw     r0, r3
  bne+      .loc_0x1D4
  lwz       r24, 0x18(r24)
  cmplwi    r24, 0
  beq-      .loc_0x2E8
  subi      r24, r24, 0xC

.loc_0x2E8:
  cmplwi    r24, 0
  bne+      .loc_0x150
  lwz       r23, 0x18(r23)
  cmplwi    r23, 0
  beq-      .loc_0x300
  subi      r23, r23, 0xC

.loc_0x300:
  cmplwi    r23, 0
  bne+      .loc_0xCC
  lmw       r22, 0x18(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FA70
 * Size:	00015C
 */
void doUserCallBackFunc__Q32kh6Screen12ScenePayDeptFPQ28Resource10MgrCommand(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r6, 0x804A
  lis       r5, 0x4445
  stw       r0, 0x54(r1)
  lis       r4, 0x5041
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  subi      r30, r6, 0x6EA0
  addi      r6, r5, 0x5054
  addi      r5, r4, 0x595F
  stw       r29, 0x44(r1)
  mr        r29, r3
  li        r4, 0x4B48
  lwz       r3, 0x21C(r3)
  bl        -0x100790
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5C
  addi      r3, r30, 0
  addi      r5, r30, 0x184
  li        r4, 0x103
  crclr     6, 0x6
  bl        -0x3E5488

.loc_0x5C:
  lwz       r3, 0x21C(r29)
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x98
  bge-      .loc_0x7C
  cmpwi     r0, 0
  bge-      .loc_0x88
  b         .loc_0xB4

.loc_0x7C:
  cmpwi     r0, 0x3
  bge-      .loc_0xB4
  b         .loc_0xA8

.loc_0x88:
  addi      r3, r29, 0x4
  addi      r4, r30, 0x194
  bl        -0xF7BB4
  b         .loc_0xB4

.loc_0x98:
  addi      r3, r29, 0x4
  addi      r4, r30, 0x1AC
  bl        -0xF7BC4
  b         .loc_0xB4

.loc_0xA8:
  addi      r3, r29, 0x4
  addi      r4, r30, 0x1C4
  bl        -0xF7BD4

.loc_0xB4:
  addi      r3, r1, 0x8
  addi      r4, r29, 0x4
  bl        0x3CAAC
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x8
  bl        0x3CBDC
  mr.       r31, r3
  beq-      .loc_0x12C
  li        r3, 0x4C
  bl        -0x3EBCA4
  mr.       r30, r3
  beq-      .loc_0x118
  bl        0x43F94
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x4CA8
  lfs       f0, 0x1E88(r2)
  stw       r3, 0x0(r30)
  addi      r3, r3, 0x10
  stw       r3, 0x18(r30)
  stw       r0, 0x38(r30)
  stw       r0, 0x3C(r30)
  stw       r0, 0x40(r30)
  stfs      f0, 0x48(r30)
  stfs      f0, 0x44(r30)

.loc_0x118:
  lwz       r5, 0x34(r31)
  mr        r3, r29
  mr        r4, r30
  bl        0x421E0
  b         .loc_0x140

.loc_0x12C:
  addi      r3, r30, 0
  li        r4, 0x115
  addi      r5, r2, 0x1E98
  crclr     6, 0x6
  bl        -0x3E556C

.loc_0x140:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FBCC
 * Size:	000008
 */
void getResName__Q32kh6Screen12ScenePayDeptCFv(void)
{
/*
.loc_0x0:
  addi      r3, r2, 0x1EA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FBD4
 * Size:	000008
 */
void isUseBackupSceneInfo__Q32kh6Screen12ScenePayDeptFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FBDC
 * Size:	000008
 */
void getSceneType__Q32kh6Screen12ScenePayDeptFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4E27
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FBE4
 * Size:	000008
 */
void getOwnerID__Q32kh6Screen12ScenePayDeptFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FBEC
 * Size:	000014
 */
void getMemberID__Q32kh6Screen12ScenePayDeptFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x4445
  lis       r3, 0x5041
  addi      r4, r4, 0x5054
  addi      r3, r3, 0x595F
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FC00
 * Size:	000004
 */
void doCreateObj__Q32kh6Screen12ScenePayDeptFP10JKRArchive(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FC04
 * Size:	0000AC
 */
void __dt__Q32kh6Screen10ObjPayDeptFv(void)
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
  lis       r4, 0x804F
  subi      r4, r4, 0x4CA8
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
  bl        0x1968
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3F2C40
  mr        r3, r30
  li        r4, 0
  bl        0x1908

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3EBBDC

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
 * Address:	8040FCB0
 * Size:	000008
 */
void getSize__Q32kh6Screen11DispPayDeptFv(void)
{
/*
.loc_0x0:
  li        r3, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FCB8
 * Size:	000008
 */
void getOwnerID__Q32kh6Screen11DispPayDeptFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FCC0
 * Size:	000014
 */
void getMemberID__Q32kh6Screen11DispPayDeptFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x4445
  lis       r3, 0x5041
  addi      r4, r4, 0x5054
  addi      r3, r3, 0x595F
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FCD4
 * Size:	00000C
 */
void __sinit_khPayDept_cpp(void)
{
/*
.loc_0x0:
  lfs       f0, 0x1EA4(r2)
  stfs      f0, -0x6540(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040FCE0
 * Size:	000008
 */
void @24@__dt__Q32kh6Screen10ObjPayDeptFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xE0
*/
}