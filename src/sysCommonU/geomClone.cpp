

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
 * Address:	80421ACC
 * Size:	000120
 */
void Sys::TriDivider::clone( (Matrixf &))
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
  li        r3, 0x50
  bl        -0x3FDC50
  mr.       r31, r3
  beq-      .loc_0xA4
  bl        -0x10770
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r4, 0x804B
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x2C
  lis       r3, 0x804F
  li        r6, 0
  stw       r0, 0x0(r31)
  subi      r5, r4, 0x1C
  li        r4, 0x1
  subi      r0, r3, 0x4A40
  stb       r6, 0x18(r31)
  lfs       f1, 0x2098(r2)
  stw       r5, 0x0(r31)
  lfs       f0, 0x209C(r2)
  stb       r4, 0x18(r31)
  stw       r6, 0x20(r31)
  stw       r6, 0x1C(r31)
  stw       r6, 0x24(r31)
  stw       r0, 0x0(r31)
  stfs      f1, 0x28(r31)
  stfs      f1, 0x2C(r31)
  stfs      f1, 0x30(r31)
  stfs      f0, 0x34(r31)
  stfs      f0, 0x38(r31)
  stfs      f0, 0x3C(r31)

.loc_0xA4:
  lwz       r5, 0x18(r28)
  mr        r3, r31
  mr        r4, r29
  bl        .loc_0x120
  li        r3, 0x28
  bl        -0x3FDCE0
  mr.       r30, r3
  beq-      .loc_0xCC
  bl        -0x8214
  mr        r30, r3

.loc_0xCC:
  lwz       r5, 0x1C(r28)
  mr        r3, r30
  mr        r4, r29
  mr        r6, r31
  bl        0x1A4
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  mr        r5, r31
  mr        r6, r30
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x120:
*/
}

/*
 * --INFO--
 * Address:	80421BEC
 * Size:	000160
 */
void Sys::VertexTable::cloneFrom( (Matrixf &, Sys::VertexTable *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r28, r4
  mr        r29, r5
  mr        r27, r3
  lwz       r12, 0x0(r3)
  lwz       r4, 0x20(r5)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r29)
  li        r30, 0
  li        r31, 0
  stw       r0, 0x1C(r27)
  b         .loc_0x80

.loc_0x44:
  lwz       r0, 0x24(r29)
  mr        r3, r28
  addi      r5, r1, 0x8
  add       r4, r0, r31
  bl        -0x337068
  lwz       r0, 0x24(r27)
  addi      r30, r30, 0x1
  lfs       f1, 0xC(r1)
  add       r3, r0, r31
  lfs       f2, 0x10(r1)
  lfs       f0, 0x8(r1)
  addi      r31, r31, 0xC
  stfs      f0, 0x0(r3)
  stfs      f1, 0x4(r3)
  stfs      f2, 0x8(r3)

.loc_0x80:
  lwz       r0, 0x20(r27)
  cmpw      r30, r0
  blt+      .loc_0x44
  lfs       f1, 0x2098(r2)
  li        r3, 0
  lfs       f0, 0x209C(r2)
  mr        r5, r3
  stfs      f1, 0x28(r27)
  stfs      f1, 0x2C(r27)
  stfs      f1, 0x30(r27)
  stfs      f0, 0x34(r27)
  stfs      f0, 0x38(r27)
  stfs      f0, 0x3C(r27)
  b         .loc_0x140

.loc_0xB8:
  lwz       r0, 0x24(r27)
  lfs       f0, 0x28(r27)
  add       r4, r0, r5
  lfs       f1, 0x0(r4)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xD4
  stfs      f1, 0x28(r27)

.loc_0xD4:
  lfs       f1, 0x4(r4)
  lfs       f0, 0x2C(r27)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE8
  stfs      f1, 0x2C(r27)

.loc_0xE8:
  lfs       f1, 0x8(r4)
  lfs       f0, 0x30(r27)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xFC
  stfs      f1, 0x30(r27)

.loc_0xFC:
  lfs       f1, 0x0(r4)
  lfs       f0, 0x34(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x110
  stfs      f1, 0x34(r27)

.loc_0x110:
  lfs       f1, 0x4(r4)
  lfs       f0, 0x38(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x124
  stfs      f1, 0x38(r27)

.loc_0x124:
  lfs       f1, 0x8(r4)
  lfs       f0, 0x3C(r27)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x138
  stfs      f1, 0x3C(r27)

.loc_0x138:
  addi      r5, r5, 0xC
  addi      r3, r3, 0x1

.loc_0x140:
  lwz       r0, 0x1C(r27)
  cmpw      r3, r0
  blt+      .loc_0xB8
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80421D4C
 * Size:	0000B4
 */
void Sys::TriangleTable::cloneFrom( (Matrixf &, Sys::TriangleTable *, Sys::VertexTable *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r27, r5
  mr        r26, r3
  mr        r28, r6
  lwz       r12, 0x0(r3)
  lwz       r4, 0x20(r5)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r27)
  li        r29, 0
  li        r30, 0
  stw       r0, 0x1C(r26)
  b         .loc_0x94

.loc_0x44:
  lwz       r0, 0x24(r27)
  mr        r4, r28
  lwz       r3, 0x24(r26)
  add       r5, r0, r30
  lwz       r0, 0x0(r5)
  add       r31, r3, r30
  mr        r3, r31
  stw       r0, 0x0(r31)
  lwz       r0, 0x4(r5)
  stw       r0, 0x4(r31)
  lwz       r0, 0x8(r5)
  stw       r0, 0x8(r31)
  lbz       r0, 0x5C(r5)
  stb       r0, 0x5C(r31)
  bl        -0xA154
  mr        r3, r31
  mr        r4, r28
  bl        -0xB47C
  addi      r30, r30, 0x60
  addi      r29, r29, 0x1

.loc_0x94:
  lwz       r0, 0x20(r26)
  cmpw      r29, r0
  blt+      .loc_0x44
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80421E00
 * Size:	0000C4
 */
void Sys::GridDivider::do_clone( (Matrixf &, Sys::VertexTable *, Sys::TriangleTable *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x4C
  bl        -0x3FDF88
  mr.       r31, r3
  beq-      .loc_0x84
  bl        -0x10AA8
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x45F0
  lfs       f1, 0x2098(r2)
  stw       r0, 0x0(r31)
  subi      r3, r3, 0x493C
  lfs       f0, 0x209C(r2)
  li        r0, 0
  stw       r3, 0x0(r31)
  stfs      f1, 0x2C(r31)
  stfs      f1, 0x30(r31)
  stfs      f1, 0x34(r31)
  stfs      f0, 0x38(r31)
  stfs      f0, 0x3C(r31)
  stfs      f0, 0x40(r31)
  stw       r0, 0x28(r31)
  stw       r0, 0x24(r31)
  stw       r0, 0x20(r31)

.loc_0x84:
  lwz       r5, 0x20(r28)
  mr        r3, r31
  lwz       r6, 0x24(r28)
  mr        r7, r29
  mr        r8, r30
  addi      r4, r29, 0x28
  bl        -0x92BC
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}
