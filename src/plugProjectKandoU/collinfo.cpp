

/*
 * --INFO--
 * Address:	801336A8
 * Size:	000044
 */
void Platform::Platform()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x2DDCD4
  lis       r3, 0x804B
  li        r0, 0
  addi      r4, r3, 0x58
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801336EC
 * Size:	000008
 */
void Platform::getTriDivider()
{
/*
.loc_0x0:
  lwz       r3, 0x18(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801336F4
 * Size:	00003C
 */
void Platform::setMapCodeAll(MapCode::Code &)
{
/*
.loc_0x0:
  lwz       r3, 0x18(r3)
  li        r8, 0
  li        r6, 0
  lwz       r7, 0x1C(r3)
  b         .loc_0x2C

.loc_0x14:
  lbz       r5, 0x0(r4)
  addi      r0, r6, 0x5C
  lwz       r3, 0x24(r7)
  addi      r6, r6, 0x60
  addi      r8, r8, 0x1
  stbx      r5, r3, r0

.loc_0x2C:
  lwz       r0, 0x1C(r7)
  cmpw      r8, r0
  blt+      .loc_0x14
  blr
*/
}


/*
 * --INFO--
 * Address:	80133730
 * Size:	000084
 */
void Platform::clone(Matrixf &)
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
  li        r3, 0x1C
  bl        -0x10F8B0
  mr.       r31, r3
  beq-      .loc_0x48
  bl        0x2DDC30
  lis       r3, 0x804B
  li        r0, 0
  addi      r3, r3, 0x58
  stw       r3, 0x0(r31)
  stw       r0, 0x18(r31)

.loc_0x48:
  lwz       r3, 0x18(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r31)
  mr        r3, r31
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
 * Address:	801337B4
 * Size:	0000AC
 */
void Platform::load(JKRFileLoader *, char *)
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  mr        r31, r5
  stw       r30, 0x428(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x1107BC
  cmplwi    r3, 0
  bne-      .loc_0x50
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x3A50
  mr        r6, r31
  subi      r3, r3, 0x3A60
  li        r4, 0xEC
  crclr     6, 0x6
  bl        -0x1091BC
  b         .loc_0x94

.loc_0x50:
  mr        r4, r3
  addi      r3, r1, 0x8
  li        r5, -0x1
  bl        0x2E20E8
  li        r3, 0x130
  bl        -0x10F974
  mr.       r0, r3
  beq-      .loc_0x78
  bl        0x2EA830
  mr        r0, r3

.loc_0x78:
  stw       r0, 0x18(r30)
  addi      r4, r1, 0x8
  lwz       r3, 0x18(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x94:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  lwz       r30, 0x428(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr
*/
}


/*
 * --INFO--
 * Address:	80133860
 * Size:	000014
 */
void PlatAttacher::PlatAttacher()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80133874
 * Size:	000064
 */
void PlatAttacher::setMapCodeAll(MapCode::Code &)
{
/*
.loc_0x0:
  li        r11, 0
  li        r10, 0
  b         .loc_0x54

.loc_0xC:
  lwz       r5, 0x8(r3)
  addi      r0, r10, 0x18
  li        r7, 0
  lwzx      r5, r5, r0
  mr        r9, r7
  lwz       r8, 0x1C(r5)
  b         .loc_0x40

.loc_0x28:
  lbz       r6, 0x0(r4)
  addi      r0, r9, 0x5C
  lwz       r5, 0x24(r8)
  addi      r9, r9, 0x60
  addi      r7, r7, 0x1
  stbx      r6, r5, r0

.loc_0x40:
  lwz       r0, 0x1C(r8)
  cmpw      r7, r0
  blt+      .loc_0x28
  addi      r10, r10, 0x1C
  addi      r11, r11, 0x1

.loc_0x54:
  lwz       r0, 0x0(r3)
  cmpw      r11, r0
  blt+      .loc_0xC
  blr
*/
}


/*
 * --INFO--
 * Address:	801338D8
 * Size:	000060
 */
void Platform::~Platform()
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
  addi      r0, r5, 0x58
  stw       r0, 0x0(r30)
  bl        0x2DDC80
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x10F864

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
 * Address:	80133938
 * Size:	000190
 */
void PlatAttacher::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  bl        0x2E113C
  stw       r3, 0x0(r30)
  lwz       r0, 0x0(r30)
  rlwinm    r3,r0,1,0,30
  bl        -0x10F9B8
  stw       r3, 0x4(r30)
  li        r29, 0
  li        r28, 0
  b         .loc_0x58

.loc_0x40:
  mr        r3, r31
  bl        0x2E0DE8
  lwz       r4, 0x4(r30)
  addi      r29, r29, 0x1
  sthx      r3, r4, r28
  addi      r28, r28, 0x2

.loc_0x58:
  lwz       r27, 0x0(r30)
  cmpw      r29, r27
  blt+      .loc_0x40
  mulli     r3, r27, 0x1C
  addi      r3, r3, 0x10
  bl        -0x10F9F8
  lis       r4, 0x8013
  lis       r5, 0x8013
  addi      r4, r4, 0x36A8
  mr        r7, r27
  addi      r5, r5, 0x38D8
  li        r6, 0x1C
  bl        -0x71FD0
  stw       r3, 0x8(r30)
  li        r3, 0x50
  bl        -0x10FB28
  mr.       r29, r3
  beq-      .loc_0x110
  bl        0x2DD9B8
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r0, r4, 0x5324
  lis       r4, 0x804B
  stw       r0, 0x0(r29)
  addi      r0, r3, 0x2C
  lis       r3, 0x804F
  li        r6, 0
  stw       r0, 0x0(r29)
  subi      r5, r4, 0x1C
  li        r4, 0x1
  subi      r0, r3, 0x4A40
  stb       r6, 0x18(r29)
  lfs       f1, -0x6158(r2)
  stw       r5, 0x0(r29)
  lfs       f0, -0x6154(r2)
  stb       r4, 0x18(r29)
  stw       r6, 0x20(r29)
  stw       r6, 0x1C(r29)
  stw       r6, 0x24(r29)
  stw       r0, 0x0(r29)
  stfs      f1, 0x28(r29)
  stfs      f1, 0x2C(r29)
  stfs      f1, 0x30(r29)
  stfs      f0, 0x34(r29)
  stfs      f0, 0x38(r29)
  stfs      f0, 0x3C(r29)

.loc_0x110:
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  li        r26, 0
  li        r27, 0
  b         .loc_0x170

.loc_0x134:
  li        r3, 0x130
  bl        -0x10FBCC
  mr.       r28, r3
  beq-      .loc_0x14C
  bl        0x2EA5D8
  mr        r28, r3

.loc_0x14C:
  mr        r3, r28
  mr        r4, r31
  mr        r5, r29
  bl        0x2EAF08
  lwz       r3, 0x8(r30)
  addi      r0, r27, 0x18
  addi      r27, r27, 0x1C
  addi      r26, r26, 0x1
  stwx      r28, r3, r0

.loc_0x170:
  lwz       r0, 0x0(r30)
  cmpw      r26, r0
  blt+      .loc_0x134
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	80133AC8
 * Size:	0000B0
 */
void ArrayContainer<Vector3<float>>::read(Stream &)
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
  bl        0x2E0FA0
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
  addi      r31, r31, 0xC
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
 * Address:	80133B78
 * Size:	000004
 */
void ArrayContainer<Vector3<float>>::readObject(Stream &, Vector3<float> &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80133B7C
 * Size:	000068
 */
void ArrayContainer<Vector3<float>>::alloc(int)
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
  mulli     r3, r31, 0xC
  addi      r3, r3, 0x10
  bl        -0x10FBF4
  lis       r4, 0x8012
  mr        r7, r31
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  bl        -0x721C8
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
 * Address:	80133BE4
 * Size:	000080
 */
void ArrayContainer<Vector3<float>>::~ArrayContainer()
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
  subi      r0, r4, 0x1C
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804B
  addi      r0, r4, 0x2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x2DD954

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x10FB90

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
 * Address:	80133C64
 * Size:	000070
 */
void Container<Vector3<float>>::~Container()
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
  addi      r0, r4, 0x2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x2DD8E4

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x10FC00

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
 * Address:	80133CD4
 * Size:	000008
 */
void PlatAttacher::getNumShapes()
{
/*
.loc_0x0:
  lwz       r3, 0x0(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80133CDC
 * Size:	00007C
 */
void PlatAttacher::getJointIndex(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0
  blt-      .loc_0x34
  lwz       r0, 0x0(r30)
  cmpw      r31, r0
  bge-      .loc_0x34
  li        r3, 0x1

.loc_0x34:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x138
  subi      r5, r5, 0x3A34
  crclr     6, 0x6
  bl        -0x1096F0

.loc_0x58:
  lwz       r3, 0x4(r30)
  rlwinm    r0,r31,1,0,30
  lhzx      r3, r3, r0
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
 * Address:	80133D58
 * Size:	00007C
 */
void PlatAttacher::getPlatform(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0
  blt-      .loc_0x34
  lwz       r0, 0x0(r30)
  cmpw      r31, r0
  bge-      .loc_0x34
  li        r3, 0x1

.loc_0x34:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x13E
  subi      r5, r5, 0x3A34
  crclr     6, 0x6
  bl        -0x10976C

.loc_0x58:
  mulli     r0, r31, 0x1C
  lwz       r3, 0x8(r30)
  add       r3, r3, r0
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
 * Address:	80133DD4
 * Size:	000090
 */
void Sys::GridDivider::~GridDivider()
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
  lis       r3, 0x804F
  addic.    r0, r30, 0x20
  subi      r0, r3, 0x493C
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r4, 0x8013
  lwz       r3, 0x28(r30)
  addi      r4, r4, 0x3E64
  bl        -0x726CC

.loc_0x44:
  cmplwi    r30, 0
  beq-      .loc_0x64
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x45F0
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        0x2DD754

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x10FD90

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


/*
 * --INFO--
 * Address:	80133E64
 * Size:	0000A0
 */
void Sys::TriIndexList::~TriIndexList()
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
  beq-      .loc_0x84
  lis       r4, 0x804B
  subi      r0, r4, 0x64
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804B
  subi      r0, r4, 0xAC
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804B
  subi      r0, r4, 0xF4
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804B
  subi      r0, r4, 0x120
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x2DD6B4

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x10FE30

.loc_0x84:
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
 * Address:	80133F04
 * Size:	000060
 */
void Sys::TriDivider::~TriDivider()
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
  subi      r0, r5, 0x45F0
  stw       r0, 0x0(r30)
  bl        0x2DD654
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x10FE90

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
 * Address:	80133F64
 * Size:	0000F8
 */
void Sys::OBBTree::~OBBTree()
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
  beq-      .loc_0xDC
  lis       r3, 0x804F
  addic.    r0, r30, 0x20
  subi      r0, r3, 0x4620
  stw       r0, 0x0(r30)
  beq-      .loc_0xAC
  lis       r4, 0x804B
  addic.    r3, r30, 0xF8
  subi      r0, r4, 0x130
  stw       r0, 0x20(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804B
  cmplwi    r3, 0
  subi      r0, r4, 0x64
  stw       r0, 0xF8(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804B
  subi      r0, r4, 0xAC
  stw       r0, 0xF8(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804B
  subi      r0, r4, 0xF4
  stw       r0, 0xF8(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804B
  subi      r0, r4, 0x120
  stw       r0, 0xF8(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804B
  subi      r0, r4, 0x5324
  stw       r0, 0xF8(r30)
  li        r4, 0
  bl        0x2DD588

.loc_0xA0:
  addi      r3, r30, 0x20
  li        r4, 0
  bl        0x2DD57C

.loc_0xAC:
  cmplwi    r30, 0
  beq-      .loc_0xCC
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x45F0
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        0x2DD55C

.loc_0xCC:
  extsh.    r0, r31
  ble-      .loc_0xDC
  mr        r3, r30
  bl        -0x10FF88

.loc_0xDC:
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
 * Address:	8013405C
 * Size:	000010
 */
void CollTree::CollTree()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8013406C
 * Size:	000044
 */
void CollTree::createFromFactory(SysShape::MtxObject *, CollPartFactory *, CollPartMgr *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r6, 0x4(r3)
  beq-      .loc_0x30
  mr        r3, r5
  mr        r5, r6
  bl        0x49D8
  stw       r3, 0x0(r31)

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801340B0
 * Size:	000104
 */
void CollTree::createSingleSphere(SysShape::MtxObject *, int, Sys::Sphere &, CollPartMgr *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmplwi    r7, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r4
  stw       r7, 0x4(r3)
  beq-      .loc_0x70
  mr        r3, r7
  bl        0x49A0
  stw       r3, 0x0(r31)
  lwz       r0, 0x0(r31)
  cmplwi    r0, 0
  bne-      .loc_0x90
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x1BE
  subi      r5, r5, 0x3A28
  crclr     6, 0x6
  bl        -0x109AD8
  b         .loc_0x90

.loc_0x70:
  li        r3, 0x64
  bl        -0x110280
  mr.       r0, r3
  beq-      .loc_0x8C
  mr        r4, r28
  bl        0x2B40
  mr        r0, r3

.loc_0x8C:
  stw       r0, 0x0(r31)

.loc_0x90:
  lfs       f1, 0xC(r30)
  lis       r3, 0x726F
  lwz       r5, 0x0(r31)
  li        r0, 0
  lfs       f0, -0x6150(r2)
  addi      r4, r3, 0x6F74
  stfs      f1, 0x1C(r5)
  lfs       f1, 0xC(r30)
  lwz       r3, 0x0(r31)
  stfs      f1, 0x18(r3)
  lwz       r3, 0x0(r31)
  stfs      f0, 0x20(r3)
  stfs      f0, 0x24(r3)
  stfs      f0, 0x28(r3)
  lwz       r3, 0x0(r31)
  stw       r29, 0x2C(r3)
  lwz       r3, 0x0(r31)
  sth       r0, 0x48(r3)
  lwz       r3, 0x0(r31)
  addi      r3, r3, 0x30
  bl        0x2DF148
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
 * Address:	801341B4
 * Size:	000044
 */
void CollTree::release()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x30
  lwz       r4, 0x0(r31)
  bl        .loc_0x44
  li        r0, 0
  stw       r0, 0x4(r31)

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x44:
*/
}


/*
 * --INFO--
 * Address:	801341F8
 * Size:	000348
 */
void CollTree::releaseRec(CollPart *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r29, r4
  mr        r31, r3
  lwz       r27, 0x10(r4)
  lwz       r30, 0x4(r4)
  cmplwi    r27, 0
  beq-      .loc_0x1A4
  lwz       r25, 0x10(r27)
  lwz       r26, 0x4(r27)
  cmplwi    r25, 0
  beq-      .loc_0xE4
  lwz       r23, 0x10(r25)
  lwz       r24, 0x4(r25)
  cmplwi    r23, 0
  beq-      .loc_0x8C
  mr        r3, r23
  bl        0x304
  mr        r28, r3
  mr        r3, r23
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0x6C
  mr        r3, r31
  bl        .loc_0x0

.loc_0x6C:
  lwz       r3, 0x4(r31)
  mr        r4, r23
  bl        0x5680
  cmplwi    r28, 0
  beq-      .loc_0x8C
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0x8C:
  lwz       r3, 0x4(r31)
  mr        r4, r25
  bl        0x5660
  cmplwi    r24, 0
  beq-      .loc_0xE4
  mr        r3, r24
  bl        0x2AC
  mr        r28, r3
  mr        r3, r24
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0xC4
  mr        r3, r31
  bl        .loc_0x0

.loc_0xC4:
  lwz       r3, 0x4(r31)
  mr        r4, r24
  bl        0x5628
  cmplwi    r28, 0
  beq-      .loc_0xE4
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0xE4:
  lwz       r3, 0x4(r31)
  mr        r4, r27
  bl        0x5608
  cmplwi    r26, 0
  beq-      .loc_0x1A4
  lwz       r24, 0x10(r26)
  lwz       r23, 0x4(r26)
  cmplwi    r24, 0
  beq-      .loc_0x14C
  mr        r3, r24
  bl        0x244
  mr        r28, r3
  mr        r3, r24
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0x12C
  mr        r3, r31
  bl        .loc_0x0

.loc_0x12C:
  lwz       r3, 0x4(r31)
  mr        r4, r24
  bl        0x55C0
  cmplwi    r28, 0
  beq-      .loc_0x14C
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0x14C:
  lwz       r3, 0x4(r31)
  mr        r4, r26
  bl        0x55A0
  cmplwi    r23, 0
  beq-      .loc_0x1A4
  mr        r3, r23
  bl        0x1EC
  mr        r28, r3
  mr        r3, r23
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0x184
  mr        r3, r31
  bl        .loc_0x0

.loc_0x184:
  lwz       r3, 0x4(r31)
  mr        r4, r23
  bl        0x5568
  cmplwi    r28, 0
  beq-      .loc_0x1A4
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0x1A4:
  lwz       r3, 0x4(r31)
  mr        r4, r29
  bl        0x5548
  cmplwi    r30, 0
  beq-      .loc_0x334
  lwz       r24, 0x10(r30)
  lwz       r23, 0x4(r30)
  cmplwi    r24, 0
  beq-      .loc_0x274
  lwz       r26, 0x10(r24)
  lwz       r25, 0x4(r24)
  cmplwi    r26, 0
  beq-      .loc_0x21C
  mr        r3, r26
  bl        0x174
  mr        r28, r3
  mr        r3, r26
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0x1FC
  mr        r3, r31
  bl        .loc_0x0

.loc_0x1FC:
  lwz       r3, 0x4(r31)
  mr        r4, r26
  bl        0x54F0
  cmplwi    r28, 0
  beq-      .loc_0x21C
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0x21C:
  lwz       r3, 0x4(r31)
  mr        r4, r24
  bl        0x54D0
  cmplwi    r25, 0
  beq-      .loc_0x274
  mr        r3, r25
  bl        0x11C
  mr        r28, r3
  mr        r3, r25
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0x254
  mr        r3, r31
  bl        .loc_0x0

.loc_0x254:
  lwz       r3, 0x4(r31)
  mr        r4, r25
  bl        0x5498
  cmplwi    r28, 0
  beq-      .loc_0x274
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0x274:
  lwz       r3, 0x4(r31)
  mr        r4, r30
  bl        0x5478
  cmplwi    r23, 0
  beq-      .loc_0x334
  lwz       r25, 0x10(r23)
  lwz       r24, 0x4(r23)
  cmplwi    r25, 0
  beq-      .loc_0x2DC
  mr        r3, r25
  bl        0xB4
  mr        r28, r3
  mr        r3, r25
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0x2BC
  mr        r3, r31
  bl        .loc_0x0

.loc_0x2BC:
  lwz       r3, 0x4(r31)
  mr        r4, r25
  bl        0x5430
  cmplwi    r28, 0
  beq-      .loc_0x2DC
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0x2DC:
  lwz       r3, 0x4(r31)
  mr        r4, r23
  bl        0x5410
  cmplwi    r24, 0
  beq-      .loc_0x334
  mr        r3, r24
  bl        0x5C
  mr        r28, r3
  mr        r3, r24
  bl        .loc_0x348
  mr.       r4, r3
  beq-      .loc_0x314
  mr        r3, r31
  bl        .loc_0x0

.loc_0x314:
  lwz       r3, 0x4(r31)
  mr        r4, r24
  bl        0x53D8
  cmplwi    r28, 0
  beq-      .loc_0x334
  mr        r3, r31
  mr        r4, r28
  bl        .loc_0x0

.loc_0x334:
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x348:
*/
}


/*
 * --INFO--
 * Address:	80134540
 * Size:	000008
 */
void CollPart::getChild()
{
/*
.loc_0x0:
  lwz       r3, 0x10(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80134548
 * Size:	000008
 */
void CollPart::getNext()
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80134550
 * Size:	00003C
 */
void CollTree::checkCollision(CollTree *, CollPart **, CollPart **, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r9, r4
  mr        r8, r7
  stw       r0, 0x14(r1)
  mr        r0, r6
  mr        r6, r5
  lwz       r4, 0x0(r3)
  mr        r7, r0
  lwz       r5, 0x0(r9)
  bl        .loc_0x3C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x3C:
*/
}


/*
 * --INFO--
 * Address:	8013458C
 * Size:	000604
 */
void CollTree::checkCollisionRec(CollPart *, CollPart *, CollPart **, CollPart **, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr.       r25, r4
  mr        r28, r3
  mr        r26, r5
  mr        r31, r6
  mr        r29, r7
  mr        r30, r8
  beq-      .loc_0x34
  cmplwi    r26, 0
  bne-      .loc_0x3C

.loc_0x34:
  li        r3, 0
  b         .loc_0x5F0

.loc_0x3C:
  mr        r3, r25
  mr        r4, r26
  mr        r5, r30
  bl        0x1318
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x34C
  lwz       r27, 0x10(r25)
  li        r3, 0
  cmplwi    r27, 0
  beq-      .loc_0x78
  lbz       r0, 0x58(r25)
  cmplwi    r0, 0x1
  beq-      .loc_0x78
  cmplwi    r0, 0x2
  bne-      .loc_0x7C

.loc_0x78:
  li        r3, 0x1

.loc_0x7C:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC4
  lwz       r0, 0x10(r26)
  li        r3, 0
  cmplwi    r0, 0
  beq-      .loc_0xA8
  lbz       r0, 0x58(r26)
  cmplwi    r0, 0x1
  beq-      .loc_0xA8
  cmplwi    r0, 0x2
  bne-      .loc_0xAC

.loc_0xA8:
  li        r3, 0x1

.loc_0xAC:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC4
  stw       r25, 0x0(r31)
  li        r3, 0x1
  stw       r26, 0x0(r29)
  b         .loc_0x5F0

.loc_0xC4:
  cmplwi    r27, 0
  beq-      .loc_0x208
  beq-      .loc_0xD8
  cmplwi    r26, 0
  bne-      .loc_0xE0

.loc_0xD8:
  li        r3, 0
  b         .loc_0x5F0

.loc_0xE0:
  mr        r3, r27
  mr        r4, r26
  mr        r5, r30
  bl        0x1274
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x188
  mr        r3, r27
  bl        0x518
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x128
  mr        r3, r26
  bl        0x508
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x128
  stw       r27, 0x0(r31)
  li        r3, 0x1
  stw       r26, 0x0(r29)
  b         .loc_0x5F0

.loc_0x128:
  mr        r3, r27
  bl        .loc_0x604
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x160
  mr        r3, r27
  bl        -0x188
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x160:
  mr        r3, r26
  bl        -0x1B0
  mr        r5, r3
  mr        r3, r28
  mr        r4, r27
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x188:
  mr        r3, r27
  bl        -0x1D0
  cmplwi    r3, 0
  beq-      .loc_0x1C0
  mr        r3, r27
  bl        -0x1E0
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x1C0:
  mr        r3, r26
  bl        -0x208
  cmplwi    r3, 0
  beq-      .loc_0x1F8
  mr        r3, r26
  bl        -0x218
  mr        r5, r3
  mr        r3, r28
  mr        r4, r27
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x1F8:
  li        r3, 0
  stw       r3, 0x0(r31)
  stw       r3, 0x0(r29)
  b         .loc_0x5F0

.loc_0x208:
  cmplwi    r25, 0
  lwz       r26, 0x10(r26)
  beq-      .loc_0x21C
  cmplwi    r26, 0
  bne-      .loc_0x224

.loc_0x21C:
  li        r3, 0
  b         .loc_0x5F0

.loc_0x224:
  mr        r3, r25
  mr        r4, r26
  mr        r5, r30
  bl        0x1130
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2CC
  mr        r3, r25
  bl        0x3D4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x26C
  mr        r3, r26
  bl        0x3C4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x26C
  stw       r25, 0x0(r31)
  li        r3, 0x1
  stw       r26, 0x0(r29)
  b         .loc_0x5F0

.loc_0x26C:
  mr        r3, r25
  bl        .loc_0x604
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2A4
  mr        r3, r25
  bl        -0x2CC
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x2A4:
  mr        r3, r26
  bl        -0x2F4
  mr        r5, r3
  mr        r3, r28
  mr        r4, r25
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x2CC:
  mr        r3, r25
  bl        -0x314
  cmplwi    r3, 0
  beq-      .loc_0x304
  mr        r3, r25
  bl        -0x324
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x304:
  mr        r3, r26
  bl        -0x34C
  cmplwi    r3, 0
  beq-      .loc_0x33C
  mr        r3, r26
  bl        -0x35C
  mr        r5, r3
  mr        r3, r28
  mr        r4, r25
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x33C:
  li        r3, 0
  stw       r3, 0x0(r31)
  stw       r3, 0x0(r29)
  b         .loc_0x5F0

.loc_0x34C:
  lwz       r27, 0x4(r25)
  cmplwi    r27, 0
  beq-      .loc_0x494
  beq-      .loc_0x364
  cmplwi    r26, 0
  bne-      .loc_0x36C

.loc_0x364:
  li        r3, 0
  b         .loc_0x5F0

.loc_0x36C:
  mr        r3, r27
  mr        r4, r26
  mr        r5, r30
  bl        0xFE8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x414
  mr        r3, r27
  bl        0x28C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3B4
  mr        r3, r26
  bl        0x27C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3B4
  stw       r27, 0x0(r31)
  li        r3, 0x1
  stw       r26, 0x0(r29)
  b         .loc_0x5F0

.loc_0x3B4:
  mr        r3, r27
  bl        .loc_0x604
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3EC
  mr        r3, r27
  bl        -0x414
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x3EC:
  mr        r3, r26
  bl        -0x43C
  mr        r5, r3
  mr        r3, r28
  mr        r4, r27
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x414:
  mr        r3, r27
  bl        -0x45C
  cmplwi    r3, 0
  beq-      .loc_0x44C
  mr        r3, r27
  bl        -0x46C
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x44C:
  mr        r3, r26
  bl        -0x494
  cmplwi    r3, 0
  beq-      .loc_0x484
  mr        r3, r26
  bl        -0x4A4
  mr        r5, r3
  mr        r3, r28
  mr        r4, r27
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x484:
  li        r3, 0
  stw       r3, 0x0(r31)
  stw       r3, 0x0(r29)
  b         .loc_0x5F0

.loc_0x494:
  lwz       r26, 0x4(r26)
  cmplwi    r26, 0
  beq-      .loc_0x5E0
  cmplwi    r25, 0
  beq-      .loc_0x4B0
  cmplwi    r26, 0
  bne-      .loc_0x4B8

.loc_0x4B0:
  li        r3, 0
  b         .loc_0x5F0

.loc_0x4B8:
  mr        r3, r25
  mr        r4, r26
  mr        r5, r30
  bl        0xE9C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x560
  mr        r3, r25
  bl        0x140
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x500
  mr        r3, r26
  bl        0x130
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x500
  stw       r25, 0x0(r31)
  li        r3, 0x1
  stw       r26, 0x0(r29)
  b         .loc_0x5F0

.loc_0x500:
  mr        r3, r25
  bl        .loc_0x604
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x538
  mr        r3, r25
  bl        -0x560
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x538:
  mr        r3, r26
  bl        -0x588
  mr        r5, r3
  mr        r3, r28
  mr        r4, r25
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x560:
  mr        r3, r25
  bl        -0x5A8
  cmplwi    r3, 0
  beq-      .loc_0x598
  mr        r3, r25
  bl        -0x5B8
  mr        r4, r3
  mr        r3, r28
  mr        r5, r26
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x598:
  mr        r3, r26
  bl        -0x5E0
  cmplwi    r3, 0
  beq-      .loc_0x5D0
  mr        r3, r26
  bl        -0x5F0
  mr        r5, r3
  mr        r3, r28
  mr        r4, r25
  mr        r6, r31
  mr        r7, r29
  mr        r8, r30
  bl        .loc_0x0
  b         .loc_0x5F0

.loc_0x5D0:
  li        r3, 0
  stw       r3, 0x0(r31)
  stw       r3, 0x0(r29)
  b         .loc_0x5F0

.loc_0x5E0:
  li        r0, 0
  li        r3, 0
  stw       r0, 0x0(r31)
  stw       r0, 0x0(r29)

.loc_0x5F0:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x604:
*/
}


/*
 * --INFO--
 * Address:	80134B90
 * Size:	000010
 */
void CollPart::isLeaf()
{
/*
.loc_0x0:
  lwz       r0, 0x10(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}


/*
 * --INFO--
 * Address:	80134BA0
 * Size:	000030
 */
void CollPart::isPrim()
{
/*
.loc_0x0:
  lwz       r0, 0x10(r3)
  li        r4, 0
  cmplwi    r0, 0
  beq-      .loc_0x24
  lbz       r0, 0x58(r3)
  cmplwi    r0, 0x1
  beq-      .loc_0x24
  cmplwi    r0, 0x2
  bne-      .loc_0x28

.loc_0x24:
  li        r4, 0x1

.loc_0x28:
  mr        r3, r4
  blr
*/
}


/*
 * --INFO--
 * Address:	80134BD0
 * Size:	00002C
 */
void CollTree::checkCollision(Sys::Sphere &, IDelegate1<CollPart *> *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        .loc_0x2C

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x2C:
*/
}


/*
 * --INFO--
 * Address:	80134BFC
 * Size:	0008B8
 */
void CollPart::checkCollision(Sys::Sphere &, IDelegate1<CollPart *> *)
{
/*
.loc_0x0:
  stwu      r1, -0x200(r1)
  mflr      r0
  stw       r0, 0x204(r1)
  stfd      f31, 0x1F0(r1)
  psq_st    f31,0x1F8(r1),0,0
  stfd      f30, 0x1E0(r1)
  psq_st    f30,0x1E8(r1),0,0
  stmw      r26, 0x1C8(r1)
  mr        r28, r3
  mr        r29, r4
  lwz       r7, 0x10(r3)
  mr        r30, r5
  li        r3, 0
  cmplwi    r7, 0
  beq-      .loc_0x50
  lbz       r0, 0x58(r28)
  cmplwi    r0, 0x1
  beq-      .loc_0x50
  cmplwi    r0, 0x2
  bne-      .loc_0x54

.loc_0x50:
  li        r3, 0x1

.loc_0x54:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  lbz       r0, 0x58(r28)
  cmplwi    r0, 0
  bne-      .loc_0xB8
  lfs       f1, 0x1C(r28)
  mr        r4, r29
  lfs       f0, 0x4C(r28)
  addi      r3, r1, 0xD8
  stfs      f0, 0xD8(r1)
  lfs       f0, 0x50(r28)
  stfs      f0, 0xDC(r1)
  lfs       f0, 0x54(r28)
  stfs      f0, 0xE0(r1)
  stfs      f1, 0xE4(r1)
  bl        0x2E1288
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  mr        r3, r30
  mr        r4, r28
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x13C

.loc_0xB8:
  cmplwi    r0, 0x1
  beq-      .loc_0xC8
  cmplwi    r0, 0x2
  bne-      .loc_0x13C

.loc_0xC8:
  lfs       f2, 0x1C(r7)
  mr        r4, r29
  lfs       f1, 0x1C(r28)
  addi      r3, r1, 0x1A8
  lfs       f0, 0x4C(r28)
  addi      r5, r1, 0xCC
  addi      r6, r1, 0x20
  stfs      f0, 0x1A8(r1)
  lfs       f0, 0x50(r28)
  stfs      f0, 0x1AC(r1)
  lfs       f0, 0x54(r28)
  stfs      f0, 0x1B0(r1)
  lfs       f0, 0x4C(r7)
  stfs      f0, 0x1B4(r1)
  lfs       f0, 0x50(r7)
  stfs      f0, 0x1B8(r1)
  lfs       f0, 0x54(r7)
  stfs      f0, 0x1BC(r1)
  stfs      f1, 0x1C0(r1)
  stfs      f2, 0x1C4(r1)
  bl        0x2E0E44
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  mr        r3, r30
  mr        r4, r28
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x13C:
  lwz       r31, 0x10(r28)
  cmplwi    r31, 0
  beq-      .loc_0x4E8
  mr        r3, r31
  li        r27, 0
  bl        -0x80C
  cmplwi    r3, 0
  beq-      .loc_0x17C
  mr        r3, r31
  bl        0x7F4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x17C
  mr        r3, r31
  bl        0x7D0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x180

.loc_0x17C:
  li        r27, 0x1

.loc_0x180:
  rlwinm.   r0,r27,0,24,31
  beq-      .loc_0x258
  lbz       r0, 0x58(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1D8
  lfs       f31, 0x1C(r31)
  addi      r3, r1, 0xB0
  addi      r4, r31, 0x4C
  bl        0x784
  stfs      f31, 0xBC(r1)
  mr        r4, r29
  addi      r3, r1, 0xB0
  bl        0x2E1168
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x258
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x258

.loc_0x1D8:
  cmplwi    r0, 0x1
  beq-      .loc_0x1E8
  cmplwi    r0, 0x2
  bne-      .loc_0x258

.loc_0x1E8:
  mr        r3, r31
  bl        -0x8A8
  lfs       f30, 0x1C(r3)
  mr        r3, r31
  lfs       f31, 0x1C(r31)
  bl        -0x8B8
  addi      r27, r3, 0x4C
  addi      r3, r1, 0x188
  addi      r4, r31, 0x4C
  bl        0x718
  mr        r4, r27
  addi      r3, r1, 0x194
  bl        0x70C
  stfs      f31, 0x1A0(r1)
  mr        r4, r29
  addi      r3, r1, 0x188
  addi      r5, r1, 0xC0
  stfs      f30, 0x1A4(r1)
  addi      r6, r1, 0x1C
  bl        0x2E0D28
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x258
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x258:
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0x3A0
  mr        r3, r31
  bl        -0x924
  mr        r26, r3
  bl        -0x2CC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x358
  mr        r3, r26
  bl        0x694
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2CC
  lfs       f1, 0x1C(r26)
  addi      r3, r1, 0x78
  addi      r4, r26, 0x4C
  bl        0x65C
  mr        r4, r29
  addi      r3, r1, 0x78
  bl        0x2E1074
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x358
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x358

.loc_0x2CC:
  mr        r3, r26
  bl        0x684
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2EC
  mr        r3, r26
  bl        0x660
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x358

.loc_0x2EC:
  mr        r3, r26
  bl        -0x9AC
  mr        r27, r3
  mr        r3, r26
  bl        -0x9B8
  mr        r5, r3
  lfs       f1, 0x1C(r26)
  lfs       f2, 0x1C(r27)
  addi      r3, r1, 0x148
  addi      r4, r26, 0x4C
  addi      r5, r5, 0x4C
  bl        .loc_0x8B8
  addi      r3, r1, 0x88
  bl        -0x15BD4
  mr        r4, r29
  addi      r3, r1, 0x148
  addi      r5, r1, 0x88
  addi      r6, r1, 0x14
  bl        0x2E0C28
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x358
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x358:
  mr        r3, r26
  bl        -0xA18
  cmplwi    r3, 0
  beq-      .loc_0x37C
  mr        r3, r26
  bl        -0xA28
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x37C:
  mr        r3, r26
  bl        -0xA34
  cmplwi    r3, 0
  beq-      .loc_0x3A0
  mr        r3, r26
  bl        -0xA44
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x3A0:
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  beq-      .loc_0x4E8
  mr        r3, r31
  bl        -0xA64
  mr        r26, r3
  bl        -0x414
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4A0
  mr        r3, r26
  bl        0x54C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x414
  lfs       f1, 0x1C(r26)
  addi      r3, r1, 0x5C
  addi      r4, r26, 0x4C
  bl        0x514
  mr        r4, r29
  addi      r3, r1, 0x5C
  bl        0x2E0F2C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4A0
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x4A0

.loc_0x414:
  mr        r3, r26
  bl        0x53C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x434
  mr        r3, r26
  bl        0x518
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4A0

.loc_0x434:
  mr        r3, r26
  bl        -0xAF4
  mr        r31, r3
  mr        r3, r26
  bl        -0xB00
  mr        r5, r3
  lfs       f1, 0x1C(r26)
  lfs       f2, 0x1C(r31)
  addi      r3, r1, 0x128
  addi      r4, r26, 0x4C
  addi      r5, r5, 0x4C
  bl        .loc_0x8B8
  addi      r3, r1, 0x6C
  bl        -0x15D1C
  mr        r4, r29
  addi      r3, r1, 0x128
  addi      r5, r1, 0x6C
  addi      r6, r1, 0x10
  bl        0x2E0AE0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4A0
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x4A0:
  mr        r3, r26
  bl        -0xB60
  cmplwi    r3, 0
  beq-      .loc_0x4C4
  mr        r3, r26
  bl        -0xB70
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x4C4:
  mr        r3, r26
  bl        -0xB7C
  cmplwi    r3, 0
  beq-      .loc_0x4E8
  mr        r3, r26
  bl        -0xB8C
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x4E8:
  lwz       r31, 0x4(r28)
  cmplwi    r31, 0
  beq-      .loc_0x894
  mr        r3, r31
  li        r28, 0
  bl        -0xBB8
  cmplwi    r3, 0
  beq-      .loc_0x528
  mr        r3, r31
  bl        0x448
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x528
  mr        r3, r31
  bl        0x424
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x52C

.loc_0x528:
  li        r28, 0x1

.loc_0x52C:
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x604
  lbz       r0, 0x58(r31)
  cmplwi    r0, 0
  bne-      .loc_0x584
  lfs       f30, 0x1C(r31)
  addi      r3, r1, 0x94
  addi      r4, r31, 0x4C
  bl        0x3D8
  stfs      f30, 0xA0(r1)
  mr        r4, r29
  addi      r3, r1, 0x94
  bl        0x2E0DBC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x604
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x604

.loc_0x584:
  cmplwi    r0, 0x1
  beq-      .loc_0x594
  cmplwi    r0, 0x2
  bne-      .loc_0x604

.loc_0x594:
  mr        r3, r31
  bl        -0xC54
  lfs       f31, 0x1C(r3)
  mr        r3, r31
  lfs       f30, 0x1C(r31)
  bl        -0xC64
  addi      r26, r3, 0x4C
  addi      r3, r1, 0x168
  addi      r4, r31, 0x4C
  bl        0x36C
  mr        r4, r26
  addi      r3, r1, 0x174
  bl        0x360
  stfs      f30, 0x180(r1)
  mr        r4, r29
  addi      r3, r1, 0x168
  addi      r5, r1, 0xA4
  stfs      f31, 0x184(r1)
  addi      r6, r1, 0x18
  bl        0x2E097C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x604
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x604:
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0x74C
  mr        r3, r31
  bl        -0xCD0
  mr        r26, r3
  bl        -0x678
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x704
  mr        r3, r26
  bl        0x2E8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x678
  lfs       f1, 0x1C(r26)
  addi      r3, r1, 0x40
  addi      r4, r26, 0x4C
  bl        0x2B0
  mr        r4, r29
  addi      r3, r1, 0x40
  bl        0x2E0CC8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x704
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x704

.loc_0x678:
  mr        r3, r26
  bl        0x2D8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x698
  mr        r3, r26
  bl        0x2B4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x704

.loc_0x698:
  mr        r3, r26
  bl        -0xD58
  mr        r28, r3
  mr        r3, r26
  bl        -0xD64
  mr        r5, r3
  lfs       f1, 0x1C(r26)
  lfs       f2, 0x1C(r28)
  addi      r3, r1, 0x108
  addi      r4, r26, 0x4C
  addi      r5, r5, 0x4C
  bl        .loc_0x8B8
  addi      r3, r1, 0x50
  bl        -0x15F80
  mr        r4, r29
  addi      r3, r1, 0x108
  addi      r5, r1, 0x50
  addi      r6, r1, 0xC
  bl        0x2E087C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x704
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x704:
  mr        r3, r26
  bl        -0xDC4
  cmplwi    r3, 0
  beq-      .loc_0x728
  mr        r3, r26
  bl        -0xDD4
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x728:
  mr        r3, r26
  bl        -0xDE0
  cmplwi    r3, 0
  beq-      .loc_0x74C
  mr        r3, r26
  bl        -0xDF0
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x74C:
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  beq-      .loc_0x894
  mr        r3, r31
  bl        -0xE10
  mr        r26, r3
  bl        -0x7C0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x84C
  mr        r3, r26
  bl        0x1A0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C0
  lfs       f1, 0x1C(r26)
  addi      r3, r1, 0x24
  addi      r4, r26, 0x4C
  bl        0x168
  mr        r4, r29
  addi      r3, r1, 0x24
  bl        0x2E0B80
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x84C
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x84C

.loc_0x7C0:
  mr        r3, r26
  bl        0x190
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x7E0
  mr        r3, r26
  bl        0x16C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x84C

.loc_0x7E0:
  mr        r3, r26
  bl        -0xEA0
  mr        r28, r3
  mr        r3, r26
  bl        -0xEAC
  mr        r5, r3
  lfs       f1, 0x1C(r26)
  lfs       f2, 0x1C(r28)
  addi      r3, r1, 0xE8
  addi      r4, r26, 0x4C
  addi      r5, r5, 0x4C
  bl        .loc_0x8B8
  addi      r3, r1, 0x34
  bl        -0x160C8
  mr        r4, r29
  addi      r3, r1, 0xE8
  addi      r5, r1, 0x34
  addi      r6, r1, 0x8
  bl        0x2E0734
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x84C
  mr        r3, r30
  mr        r4, r26
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x84C:
  mr        r3, r26
  bl        -0xF0C
  cmplwi    r3, 0
  beq-      .loc_0x870
  mr        r3, r26
  bl        -0xF1C
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x870:
  mr        r3, r26
  bl        -0xF28
  cmplwi    r3, 0
  beq-      .loc_0x894
  mr        r3, r26
  bl        -0xF38
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0

.loc_0x894:
  psq_l     f31,0x1F8(r1),0,0
  lfd       f31, 0x1F0(r1)
  psq_l     f30,0x1E8(r1),0,0
  lfd       f30, 0x1E0(r1)
  lmw       r26, 0x1C8(r1)
  lwz       r0, 0x204(r1)
  mtlr      r0
  addi      r1, r1, 0x200
  blr       

.loc_0x8B8:
*/
}


/*
 * --INFO--
 * Address:	801354B4
 * Size:	00003C
 */
void Sys::Tube::Tube(Vector3<float> &, Vector3<float> &, float, float)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x0(r5)
  stfs      f0, 0xC(r3)
  lfs       f0, 0x4(r5)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x8(r5)
  stfs      f0, 0x14(r3)
  stfs      f1, 0x18(r3)
  stfs      f2, 0x1C(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	801354F0
 * Size:	000020
 */
void Sys::Sphere::Sphere(Vector3<float> &, float)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x8(r3)
  stfs      f1, 0xC(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80135510
 * Size:	000010
 */
void CollPart::isSphere()
{
/*
.loc_0x0:
  lbz       r0, 0x58(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}


/*
 * --INFO--
 * Address:	80135520
 * Size:	00001C
 */
void Vector3<float>::Vector3(const Vector3<float> &)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  lfs       f1, 0x4(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x8(r4)
  stfs      f1, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8013553C
 * Size:	000014
 */
void CollPart::isTubeTree()
{
/*
.loc_0x0:
  lbz       r0, 0x58(r3)
  subfic    r0, r0, 0x2
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}


/*
 * --INFO--
 * Address:	80135550
 * Size:	000014
 */
void CollPart::isTube()
{
/*
.loc_0x0:
  lbz       r0, 0x58(r3)
  subfic    r0, r0, 0x1
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}


/*
 * --INFO--
 * Address:	80135564
 * Size:	000198
 */
void CollTree::checkCollisionMulti(CollTree *, IDelegate3<CollPart *, CollPart *, Vector3<float> &> *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  mr        r28, r5
  lwz       r31, 0x0(r4)
  lwz       r30, 0x0(r3)
  b         .loc_0x170

.loc_0x2C:
  mr        r29, r31
  b         .loc_0x164

.loc_0x34:
  mr        r3, r30
  mr        r4, r29
  addi      r5, r1, 0x8
  bl        0x348
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  lwz       r3, 0x10(r30)
  li        r4, 0
  cmplwi    r3, 0
  beq-      .loc_0x70
  lbz       r0, 0x58(r30)
  cmplwi    r0, 0x1
  beq-      .loc_0x70
  cmplwi    r0, 0x2
  bne-      .loc_0x74

.loc_0x70:
  li        r4, 0x1

.loc_0x74:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x104
  lwz       r0, 0x10(r29)
  li        r4, 0
  cmplwi    r0, 0
  beq-      .loc_0xA0
  lbz       r0, 0x58(r29)
  cmplwi    r0, 0x1
  beq-      .loc_0xA0
  cmplwi    r0, 0x2
  bne-      .loc_0xA4

.loc_0xA0:
  li        r4, 0x1

.loc_0xA4:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x104
  mr        r3, r28
  mr        r4, r30
  lwz       r12, 0x0(r28)
  mr        r5, r29
  addi      r6, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r30)
  cmplwi    r3, 0
  beq-      .loc_0xE8
  mr        r4, r29
  mr        r5, r28
  bl        .loc_0x198
  b         .loc_0x160

.loc_0xE8:
  lwz       r4, 0x10(r29)
  cmplwi    r4, 0
  beq-      .loc_0x160
  mr        r3, r30
  mr        r5, r28
  bl        .loc_0x198
  b         .loc_0x160

.loc_0x104:
  cmplwi    r3, 0
  bne-      .loc_0x120
  lwz       r4, 0x10(r29)
  mr        r3, r30
  mr        r5, r28
  bl        .loc_0x198
  b         .loc_0x160

.loc_0x120:
  lwz       r4, 0x10(r29)
  cmplwi    r4, 0
  bne-      .loc_0x13C
  mr        r4, r29
  mr        r5, r28
  bl        .loc_0x198
  b         .loc_0x160

.loc_0x13C:
  cmplwi    r3, 0
  beq-      .loc_0x154
  mr        r4, r29
  mr        r5, r28
  bl        .loc_0x198
  b         .loc_0x160

.loc_0x154:
  mr        r3, r30
  mr        r5, r28
  bl        .loc_0x198

.loc_0x160:
  lwz       r29, 0x4(r29)

.loc_0x164:
  cmplwi    r29, 0
  bne+      .loc_0x34
  lwz       r30, 0x4(r30)

.loc_0x170:
  cmplwi    r30, 0
  bne+      .loc_0x2C
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x198:
*/
}


/*
 * --INFO--
 * Address:	801356FC
 * Size:	0001F0
 */
void CollPart::checkCollisionMulti(CollPart *, IDelegate3<CollPart *, CollPart *, Vector3<float> &> *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r5
  stw       r28, 0x20(r1)
  mr        r28, r4
  b         .loc_0x1C8

.loc_0x2C:
  mr        r30, r28
  b         .loc_0x1BC

.loc_0x34:
  mr        r3, r31
  mr        r4, r30
  addi      r5, r1, 0x8
  bl        .loc_0x1F0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x16C
  lwz       r4, 0x10(r31)
  li        r3, 0
  cmplwi    r4, 0
  beq-      .loc_0x70
  lbz       r0, 0x58(r31)
  cmplwi    r0, 0x1
  beq-      .loc_0x70
  cmplwi    r0, 0x2
  bne-      .loc_0x74

.loc_0x70:
  li        r3, 0x1

.loc_0x74:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x104
  lwz       r0, 0x10(r30)
  li        r3, 0
  cmplwi    r0, 0
  beq-      .loc_0xA0
  lbz       r0, 0x58(r30)
  cmplwi    r0, 0x1
  beq-      .loc_0xA0
  cmplwi    r0, 0x2
  bne-      .loc_0xA4

.loc_0xA0:
  li        r3, 0x1

.loc_0xA4:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x104
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  mr        r5, r30
  addi      r6, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x10(r30)
  cmplwi    r4, 0
  beq-      .loc_0xE8
  mr        r3, r31
  mr        r5, r29
  bl        .loc_0x0
  b         .loc_0x1B8

.loc_0xE8:
  lwz       r4, 0x10(r31)
  cmplwi    r4, 0
  beq-      .loc_0x1B8
  mr        r3, r30
  mr        r5, r29
  bl        .loc_0x0
  b         .loc_0x1B8

.loc_0x104:
  cmplwi    r4, 0
  bne-      .loc_0x120
  lwz       r4, 0x10(r30)
  mr        r3, r31
  mr        r5, r29
  bl        .loc_0x0
  b         .loc_0x1B8

.loc_0x120:
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  bne-      .loc_0x13C
  mr        r3, r30
  mr        r5, r29
  bl        .loc_0x0
  b         .loc_0x1B8

.loc_0x13C:
  cmplwi    r4, 0
  beq-      .loc_0x158
  mr        r3, r4
  mr        r4, r30
  mr        r5, r29
  bl        .loc_0x0
  b         .loc_0x1B8

.loc_0x158:
  mr        r3, r31
  mr        r4, r0
  mr        r5, r29
  bl        .loc_0x0
  b         .loc_0x1B8

.loc_0x16C:
  lbz       r0, 0x58(r31)
  cmplwi    r0, 0x1
  beq-      .loc_0x180
  cmplwi    r0, 0x2
  bne-      .loc_0x194

.loc_0x180:
  lwz       r4, 0x10(r31)
  mr        r3, r30
  mr        r5, r29
  bl        .loc_0x0
  b         .loc_0x1B8

.loc_0x194:
  lbz       r0, 0x58(r30)
  cmplwi    r0, 0x1
  beq-      .loc_0x1A8
  cmplwi    r0, 0x2
  bne-      .loc_0x1B8

.loc_0x1A8:
  lwz       r4, 0x10(r30)
  mr        r3, r31
  mr        r5, r29
  bl        .loc_0x0

.loc_0x1B8:
  lwz       r30, 0x4(r30)

.loc_0x1BC:
  cmplwi    r30, 0
  bne+      .loc_0x34
  lwz       r31, 0x4(r31)

.loc_0x1C8:
  cmplwi    r31, 0
  bne+      .loc_0x2C
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x1F0:
*/
}


/*
 * --INFO--
 * Address:	801358EC
 * Size:	0001B0
 */
void CollPart::collide(CollPart *, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  lbz       r6, 0x58(r3)
  cmplwi    r6, 0
  bne-      .loc_0x74
  lbz       r0, 0x58(r4)
  cmplwi    r0, 0
  bne-      .loc_0x74
  lfs       f1, 0x1C(r3)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x40(r1)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x44(r1)
  lfs       f0, 0x54(r3)
  addi      r3, r1, 0x40
  stfs      f0, 0x48(r1)
  stfs      f1, 0x4C(r1)
  lfs       f1, 0x1C(r4)
  lfs       f0, 0x4C(r4)
  stfs      f0, 0x30(r1)
  lfs       f0, 0x50(r4)
  stfs      f0, 0x34(r1)
  lfs       f0, 0x54(r4)
  addi      r4, r1, 0x30
  stfs      f0, 0x38(r1)
  stfs      f1, 0x3C(r1)
  bl        0x2E0614
  b         .loc_0x1A0

.loc_0x74:
  cmplwi    r6, 0
  bne-      .loc_0x108
  lbz       r0, 0x58(r4)
  cmplwi    r0, 0x1
  beq-      .loc_0x90
  cmplwi    r0, 0x2
  bne-      .loc_0x108

.loc_0x90:
  lfs       f1, 0x1C(r3)
  addi      r6, r1, 0xC
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x54(r3)
  addi      r3, r1, 0x70
  stfs      f0, 0x28(r1)
  stfs      f1, 0x2C(r1)
  lwz       r7, 0x10(r4)
  lfs       f1, 0x1C(r4)
  lfs       f2, 0x1C(r7)
  lfs       f0, 0x4C(r4)
  stfs      f0, 0x70(r1)
  lfs       f0, 0x50(r4)
  stfs      f0, 0x74(r1)
  lfs       f0, 0x54(r4)
  addi      r4, r1, 0x20
  stfs      f0, 0x78(r1)
  lfs       f0, 0x4C(r7)
  stfs      f0, 0x7C(r1)
  lfs       f0, 0x50(r7)
  stfs      f0, 0x80(r1)
  lfs       f0, 0x54(r7)
  stfs      f0, 0x84(r1)
  stfs      f1, 0x88(r1)
  stfs      f2, 0x8C(r1)
  bl        0x2E016C
  b         .loc_0x1A0

.loc_0x108:
  cmplwi    r6, 0x1
  beq-      .loc_0x118
  cmplwi    r6, 0x2
  bne-      .loc_0x19C

.loc_0x118:
  lbz       r0, 0x58(r4)
  cmplwi    r0, 0
  bne-      .loc_0x19C
  lwz       r7, 0x10(r3)
  addi      r6, r1, 0x8
  lfs       f1, 0x1C(r3)
  lfs       f2, 0x1C(r7)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x50(r1)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x54(r1)
  lfs       f0, 0x54(r3)
  addi      r3, r1, 0x50
  stfs      f0, 0x58(r1)
  lfs       f0, 0x4C(r7)
  stfs      f0, 0x5C(r1)
  lfs       f0, 0x50(r7)
  stfs      f0, 0x60(r1)
  lfs       f0, 0x54(r7)
  stfs      f0, 0x64(r1)
  stfs      f1, 0x68(r1)
  stfs      f2, 0x6C(r1)
  lfs       f1, 0x1C(r4)
  lfs       f0, 0x4C(r4)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x50(r4)
  stfs      f0, 0x14(r1)
  lfs       f0, 0x54(r4)
  addi      r4, r1, 0x10
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  bl        0x2E00D8
  b         .loc_0x1A0

.loc_0x19C:
  li        r3, 0

.loc_0x1A0:
  lwz       r0, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}


/*
 * --INFO--
 * Address:	80135A9C
 * Size:	00002C
 */
void CollTree::update()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        0x132C

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80135AC8
 * Size:	00002C
 */
void CollTree::attachModel(SysShape::MtxObject *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        .loc_0x2C

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x2C:
*/
}


/*
 * --INFO--
 * Address:	80135AF4
 * Size:	000350
 */
void CollPart::attachModel(SysShape::MtxObject *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r31, r4
  mr        r30, r3
  stw       r31, 0x5C(r3)
  lwz       r28, 0x4(r3)
  cmplwi    r28, 0
  beq-      .loc_0x1AC
  stw       r31, 0x5C(r28)
  lwz       r27, 0x4(r28)
  cmplwi    r27, 0
  beq-      .loc_0xEC
  stw       r31, 0x5C(r27)
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  beq-      .loc_0x94
  mr        r3, r27
  bl        -0x15F8
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x1604
  cmplwi    r3, 0
  beq-      .loc_0x74
  mr        r3, r29
  bl        -0x1614
  mr        r4, r31
  bl        .loc_0x0

.loc_0x74:
  mr        r3, r29
  bl        -0x162C
  cmplwi    r3, 0
  beq-      .loc_0x94
  mr        r3, r29
  bl        -0x163C
  mr        r4, r31
  bl        .loc_0x0

.loc_0x94:
  lwz       r0, 0x10(r27)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  mr        r3, r27
  bl        -0x1658
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x165C
  cmplwi    r3, 0
  beq-      .loc_0xCC
  mr        r3, r29
  bl        -0x166C
  mr        r4, r31
  bl        .loc_0x0

.loc_0xCC:
  mr        r3, r29
  bl        -0x1684
  cmplwi    r3, 0
  beq-      .loc_0xEC
  mr        r3, r29
  bl        -0x1694
  mr        r4, r31
  bl        .loc_0x0

.loc_0xEC:
  lwz       r27, 0x10(r28)
  cmplwi    r27, 0
  beq-      .loc_0x1AC
  stw       r31, 0x5C(r27)
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  beq-      .loc_0x154
  mr        r3, r27
  bl        -0x16B8
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x16C4
  cmplwi    r3, 0
  beq-      .loc_0x134
  mr        r3, r29
  bl        -0x16D4
  mr        r4, r31
  bl        .loc_0x0

.loc_0x134:
  mr        r3, r29
  bl        -0x16EC
  cmplwi    r3, 0
  beq-      .loc_0x154
  mr        r3, r29
  bl        -0x16FC
  mr        r4, r31
  bl        .loc_0x0

.loc_0x154:
  lwz       r0, 0x10(r27)
  cmplwi    r0, 0
  beq-      .loc_0x1AC
  mr        r3, r27
  bl        -0x1718
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x171C
  cmplwi    r3, 0
  beq-      .loc_0x18C
  mr        r3, r29
  bl        -0x172C
  mr        r4, r31
  bl        .loc_0x0

.loc_0x18C:
  mr        r3, r29
  bl        -0x1744
  cmplwi    r3, 0
  beq-      .loc_0x1AC
  mr        r3, r29
  bl        -0x1754
  mr        r4, r31
  bl        .loc_0x0

.loc_0x1AC:
  lwz       r27, 0x10(r30)
  cmplwi    r27, 0
  beq-      .loc_0x33C
  stw       r31, 0x5C(r27)
  lwz       r28, 0x4(r27)
  cmplwi    r28, 0
  beq-      .loc_0x27C
  stw       r31, 0x5C(r28)
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x224
  mr        r3, r28
  bl        -0x1788
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x1794
  cmplwi    r3, 0
  beq-      .loc_0x204
  mr        r3, r29
  bl        -0x17A4
  mr        r4, r31
  bl        .loc_0x0

.loc_0x204:
  mr        r3, r29
  bl        -0x17BC
  cmplwi    r3, 0
  beq-      .loc_0x224
  mr        r3, r29
  bl        -0x17CC
  mr        r4, r31
  bl        .loc_0x0

.loc_0x224:
  lwz       r0, 0x10(r28)
  cmplwi    r0, 0
  beq-      .loc_0x27C
  mr        r3, r28
  bl        -0x17E8
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x17EC
  cmplwi    r3, 0
  beq-      .loc_0x25C
  mr        r3, r29
  bl        -0x17FC
  mr        r4, r31
  bl        .loc_0x0

.loc_0x25C:
  mr        r3, r29
  bl        -0x1814
  cmplwi    r3, 0
  beq-      .loc_0x27C
  mr        r3, r29
  bl        -0x1824
  mr        r4, r31
  bl        .loc_0x0

.loc_0x27C:
  lwz       r27, 0x10(r27)
  cmplwi    r27, 0
  beq-      .loc_0x33C
  stw       r31, 0x5C(r27)
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  beq-      .loc_0x2E4
  mr        r3, r27
  bl        -0x1848
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x1854
  cmplwi    r3, 0
  beq-      .loc_0x2C4
  mr        r3, r29
  bl        -0x1864
  mr        r4, r31
  bl        .loc_0x0

.loc_0x2C4:
  mr        r3, r29
  bl        -0x187C
  cmplwi    r3, 0
  beq-      .loc_0x2E4
  mr        r3, r29
  bl        -0x188C
  mr        r4, r31
  bl        .loc_0x0

.loc_0x2E4:
  lwz       r0, 0x10(r27)
  cmplwi    r0, 0
  beq-      .loc_0x33C
  mr        r3, r27
  bl        -0x18A8
  stw       r31, 0x5C(r3)
  mr        r29, r3
  bl        -0x18AC
  cmplwi    r3, 0
  beq-      .loc_0x31C
  mr        r3, r29
  bl        -0x18BC
  mr        r4, r31
  bl        .loc_0x0

.loc_0x31C:
  mr        r3, r29
  bl        -0x18D4
  cmplwi    r3, 0
  beq-      .loc_0x33C
  mr        r3, r29
  bl        -0x18E4
  mr        r4, r31
  bl        .loc_0x0

.loc_0x33C:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	80135E44
 * Size:	000034
 */
void CollTree::getCollPart(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x20
  bl        .loc_0x34
  b         .loc_0x24

.loc_0x20:
  li        r3, 0

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x34:
*/
}


/*
 * --INFO--
 * Address:	80135E78
 * Size:	000640
 */
void CollPart::getCollPart(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r29, r3
  mr        r30, r4
  addi      r3, r29, 0x30
  bl        0x2DD5A0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x30
  mr        r3, r29
  b         .loc_0x62C

.loc_0x30:
  lwz       r31, 0x4(r29)
  cmplwi    r31, 0
  beq-      .loc_0x32C
  mr        r4, r30
  addi      r3, r31, 0x30
  bl        0x2DD578
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x54
  b         .loc_0x31C

.loc_0x54:
  lwz       r27, 0x4(r31)
  cmplwi    r27, 0
  beq-      .loc_0x1B8
  mr        r4, r30
  addi      r3, r27, 0x30
  bl        0x2DD554
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x78
  b         .loc_0x1A8

.loc_0x78:
  lwz       r28, 0x4(r27)
  cmplwi    r28, 0
  beq-      .loc_0x110
  mr        r4, r30
  addi      r3, r28, 0x30
  bl        0x2DD530
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  b         .loc_0x100

.loc_0x9C:
  mr        r3, r28
  bl        -0x19D0
  cmplwi    r3, 0
  beq-      .loc_0xCC
  mr        r3, r28
  bl        -0x19E0
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0xCC
  mr        r28, r3
  b         .loc_0x100

.loc_0xCC:
  mr        r3, r28
  bl        -0x1A08
  cmplwi    r3, 0
  beq-      .loc_0xFC
  mr        r3, r28
  bl        -0x1A18
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0xFC
  mr        r28, r3
  b         .loc_0x100

.loc_0xFC:
  li        r28, 0

.loc_0x100:
  cmplwi    r28, 0
  beq-      .loc_0x110
  mr        r27, r28
  b         .loc_0x1A8

.loc_0x110:
  lwz       r27, 0x10(r27)
  cmplwi    r27, 0
  beq-      .loc_0x1A4
  mr        r4, r30
  addi      r3, r27, 0x30
  bl        0x2DD498
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x134
  b         .loc_0x198

.loc_0x134:
  mr        r3, r27
  bl        -0x1A68
  cmplwi    r3, 0
  beq-      .loc_0x164
  mr        r3, r27
  bl        -0x1A78
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x164
  mr        r27, r3
  b         .loc_0x198

.loc_0x164:
  mr        r3, r27
  bl        -0x1AA0
  cmplwi    r3, 0
  beq-      .loc_0x194
  mr        r3, r27
  bl        -0x1AB0
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x194
  mr        r27, r3
  b         .loc_0x198

.loc_0x194:
  li        r27, 0

.loc_0x198:
  cmplwi    r27, 0
  beq-      .loc_0x1A4
  b         .loc_0x1A8

.loc_0x1A4:
  li        r27, 0

.loc_0x1A8:
  cmplwi    r27, 0
  beq-      .loc_0x1B8
  mr        r31, r27
  b         .loc_0x31C

.loc_0x1B8:
  lwz       r31, 0x10(r31)
  cmplwi    r31, 0
  beq-      .loc_0x318
  mr        r4, r30
  addi      r3, r31, 0x30
  bl        0x2DD3F0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1DC
  b         .loc_0x30C

.loc_0x1DC:
  lwz       r27, 0x4(r31)
  cmplwi    r27, 0
  beq-      .loc_0x274
  mr        r4, r30
  addi      r3, r27, 0x30
  bl        0x2DD3CC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x200
  b         .loc_0x264

.loc_0x200:
  mr        r3, r27
  bl        -0x1B34
  cmplwi    r3, 0
  beq-      .loc_0x230
  mr        r3, r27
  bl        -0x1B44
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x230
  mr        r27, r3
  b         .loc_0x264

.loc_0x230:
  mr        r3, r27
  bl        -0x1B6C
  cmplwi    r3, 0
  beq-      .loc_0x260
  mr        r3, r27
  bl        -0x1B7C
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x260
  mr        r27, r3
  b         .loc_0x264

.loc_0x260:
  li        r27, 0

.loc_0x264:
  cmplwi    r27, 0
  beq-      .loc_0x274
  mr        r31, r27
  b         .loc_0x30C

.loc_0x274:
  lwz       r31, 0x10(r31)
  cmplwi    r31, 0
  beq-      .loc_0x308
  mr        r4, r30
  addi      r3, r31, 0x30
  bl        0x2DD334
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x298
  b         .loc_0x2FC

.loc_0x298:
  mr        r3, r31
  bl        -0x1BCC
  cmplwi    r3, 0
  beq-      .loc_0x2C8
  mr        r3, r31
  bl        -0x1BDC
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x2C8
  mr        r31, r3
  b         .loc_0x2FC

.loc_0x2C8:
  mr        r3, r31
  bl        -0x1C04
  cmplwi    r3, 0
  beq-      .loc_0x2F8
  mr        r3, r31
  bl        -0x1C14
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x2F8
  mr        r31, r3
  b         .loc_0x2FC

.loc_0x2F8:
  li        r31, 0

.loc_0x2FC:
  cmplwi    r31, 0
  beq-      .loc_0x308
  b         .loc_0x30C

.loc_0x308:
  li        r31, 0

.loc_0x30C:
  cmplwi    r31, 0
  beq-      .loc_0x318
  b         .loc_0x31C

.loc_0x318:
  li        r31, 0

.loc_0x31C:
  cmplwi    r31, 0
  beq-      .loc_0x32C
  mr        r3, r31
  b         .loc_0x62C

.loc_0x32C:
  lwz       r31, 0x10(r29)
  cmplwi    r31, 0
  beq-      .loc_0x628
  mr        r4, r30
  addi      r3, r31, 0x30
  bl        0x2DD27C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x350
  b         .loc_0x618

.loc_0x350:
  lwz       r28, 0x4(r31)
  cmplwi    r28, 0
  beq-      .loc_0x4B4
  mr        r4, r30
  addi      r3, r28, 0x30
  bl        0x2DD258
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x374
  b         .loc_0x4A4

.loc_0x374:
  lwz       r27, 0x4(r28)
  cmplwi    r27, 0
  beq-      .loc_0x40C
  mr        r4, r30
  addi      r3, r27, 0x30
  bl        0x2DD234
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x398
  b         .loc_0x3FC

.loc_0x398:
  mr        r3, r27
  bl        -0x1CCC
  cmplwi    r3, 0
  beq-      .loc_0x3C8
  mr        r3, r27
  bl        -0x1CDC
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x3C8
  mr        r27, r3
  b         .loc_0x3FC

.loc_0x3C8:
  mr        r3, r27
  bl        -0x1D04
  cmplwi    r3, 0
  beq-      .loc_0x3F8
  mr        r3, r27
  bl        -0x1D14
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x3F8
  mr        r27, r3
  b         .loc_0x3FC

.loc_0x3F8:
  li        r27, 0

.loc_0x3FC:
  cmplwi    r27, 0
  beq-      .loc_0x40C
  mr        r28, r27
  b         .loc_0x4A4

.loc_0x40C:
  lwz       r28, 0x10(r28)
  cmplwi    r28, 0
  beq-      .loc_0x4A0
  mr        r4, r30
  addi      r3, r28, 0x30
  bl        0x2DD19C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x430
  b         .loc_0x494

.loc_0x430:
  mr        r3, r28
  bl        -0x1D64
  cmplwi    r3, 0
  beq-      .loc_0x460
  mr        r3, r28
  bl        -0x1D74
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x460
  mr        r28, r3
  b         .loc_0x494

.loc_0x460:
  mr        r3, r28
  bl        -0x1D9C
  cmplwi    r3, 0
  beq-      .loc_0x490
  mr        r3, r28
  bl        -0x1DAC
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x490
  mr        r28, r3
  b         .loc_0x494

.loc_0x490:
  li        r28, 0

.loc_0x494:
  cmplwi    r28, 0
  beq-      .loc_0x4A0
  b         .loc_0x4A4

.loc_0x4A0:
  li        r28, 0

.loc_0x4A4:
  cmplwi    r28, 0
  beq-      .loc_0x4B4
  mr        r31, r28
  b         .loc_0x618

.loc_0x4B4:
  lwz       r31, 0x10(r31)
  cmplwi    r31, 0
  beq-      .loc_0x614
  mr        r4, r30
  addi      r3, r31, 0x30
  bl        0x2DD0F4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4D8
  b         .loc_0x608

.loc_0x4D8:
  lwz       r27, 0x4(r31)
  cmplwi    r27, 0
  beq-      .loc_0x570
  mr        r4, r30
  addi      r3, r27, 0x30
  bl        0x2DD0D0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4FC
  b         .loc_0x560

.loc_0x4FC:
  mr        r3, r27
  bl        -0x1E30
  cmplwi    r3, 0
  beq-      .loc_0x52C
  mr        r3, r27
  bl        -0x1E40
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x52C
  mr        r27, r3
  b         .loc_0x560

.loc_0x52C:
  mr        r3, r27
  bl        -0x1E68
  cmplwi    r3, 0
  beq-      .loc_0x55C
  mr        r3, r27
  bl        -0x1E78
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x55C
  mr        r27, r3
  b         .loc_0x560

.loc_0x55C:
  li        r27, 0

.loc_0x560:
  cmplwi    r27, 0
  beq-      .loc_0x570
  mr        r31, r27
  b         .loc_0x608

.loc_0x570:
  lwz       r31, 0x10(r31)
  cmplwi    r31, 0
  beq-      .loc_0x604
  mr        r4, r30
  addi      r3, r31, 0x30
  bl        0x2DD038
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x594
  b         .loc_0x5F8

.loc_0x594:
  mr        r3, r31
  bl        -0x1EC8
  cmplwi    r3, 0
  beq-      .loc_0x5C4
  mr        r3, r31
  bl        -0x1ED8
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x5C4
  mr        r31, r3
  b         .loc_0x5F8

.loc_0x5C4:
  mr        r3, r31
  bl        -0x1F00
  cmplwi    r3, 0
  beq-      .loc_0x5F4
  mr        r3, r31
  bl        -0x1F10
  mr        r4, r30
  bl        .loc_0x0
  cmplwi    r3, 0
  beq-      .loc_0x5F4
  mr        r31, r3
  b         .loc_0x5F8

.loc_0x5F4:
  li        r31, 0

.loc_0x5F8:
  cmplwi    r31, 0
  beq-      .loc_0x604
  b         .loc_0x608

.loc_0x604:
  li        r31, 0

.loc_0x608:
  cmplwi    r31, 0
  beq-      .loc_0x614
  b         .loc_0x618

.loc_0x614:
  li        r31, 0

.loc_0x618:
  cmplwi    r31, 0
  beq-      .loc_0x628
  mr        r3, r31
  b         .loc_0x62C

.loc_0x628:
  li        r3, 0

.loc_0x62C:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	801364B8
 * Size:	00054C
 */
void CollPart::getAllCollPartToArray(CollPart **, int, int &)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r29, r5
  mr        r30, r6
  mr        r27, r3
  mr        r28, r4
  lwz       r5, 0x0(r6)
  cmpw      r5, r29
  blt-      .loc_0x34
  mr        r3, r5
  b         .loc_0x538

.loc_0x34:
  addi      r3, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r3, 0x0(r30)
  stwx      r27, r28, r0
  lwz       r31, 0x4(r27)
  cmplwi    r31, 0
  beq-      .loc_0x2BC
  lwz       r4, 0x0(r30)
  cmpw      r4, r29
  bge-      .loc_0x2BC
  addi      r3, r4, 0x1
  rlwinm    r0,r4,2,0,29
  stw       r3, 0x0(r30)
  stwx      r31, r28, r0
  lwz       r25, 0x4(r31)
  cmplwi    r25, 0
  beq-      .loc_0x194
  lwz       r4, 0x0(r30)
  cmpw      r4, r29
  bge-      .loc_0x194
  addi      r3, r4, 0x1
  rlwinm    r0,r4,2,0,29
  stw       r3, 0x0(r30)
  stwx      r25, r28, r0
  lwz       r0, 0x4(r25)
  cmplwi    r0, 0
  beq-      .loc_0x114
  mr        r3, r25
  bl        -0x2014
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x114
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x2038
  cmplwi    r3, 0
  beq-      .loc_0xEC
  mr        r3, r26
  bl        -0x2048
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0xEC:
  mr        r3, r26
  bl        -0x2068
  cmplwi    r3, 0
  beq-      .loc_0x114
  mr        r3, r26
  bl        -0x2078
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x114:
  lwz       r0, 0x10(r25)
  cmplwi    r0, 0
  beq-      .loc_0x194
  mr        r3, r25
  bl        -0x209C
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x194
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x20B8
  cmplwi    r3, 0
  beq-      .loc_0x16C
  mr        r3, r26
  bl        -0x20C8
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x16C:
  mr        r3, r26
  bl        -0x20E8
  cmplwi    r3, 0
  beq-      .loc_0x194
  mr        r3, r26
  bl        -0x20F8
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x194:
  lwz       r25, 0x10(r31)
  cmplwi    r25, 0
  beq-      .loc_0x2BC
  lwz       r4, 0x0(r30)
  cmpw      r4, r29
  bge-      .loc_0x2BC
  addi      r3, r4, 0x1
  rlwinm    r0,r4,2,0,29
  stw       r3, 0x0(r30)
  stwx      r25, r28, r0
  lwz       r0, 0x4(r25)
  cmplwi    r0, 0
  beq-      .loc_0x23C
  mr        r3, r25
  bl        -0x213C
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x23C
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x2160
  cmplwi    r3, 0
  beq-      .loc_0x214
  mr        r3, r26
  bl        -0x2170
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x214:
  mr        r3, r26
  bl        -0x2190
  cmplwi    r3, 0
  beq-      .loc_0x23C
  mr        r3, r26
  bl        -0x21A0
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x23C:
  lwz       r0, 0x10(r25)
  cmplwi    r0, 0
  beq-      .loc_0x2BC
  mr        r3, r25
  bl        -0x21C4
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x2BC
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x21E0
  cmplwi    r3, 0
  beq-      .loc_0x294
  mr        r3, r26
  bl        -0x21F0
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x294:
  mr        r3, r26
  bl        -0x2210
  cmplwi    r3, 0
  beq-      .loc_0x2BC
  mr        r3, r26
  bl        -0x2220
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x2BC:
  lwz       r31, 0x10(r27)
  cmplwi    r31, 0
  beq-      .loc_0x534
  lwz       r4, 0x0(r30)
  cmpw      r4, r29
  bge-      .loc_0x534
  addi      r3, r4, 0x1
  rlwinm    r0,r4,2,0,29
  stw       r3, 0x0(r30)
  stwx      r31, r28, r0
  lwz       r25, 0x4(r31)
  cmplwi    r25, 0
  beq-      .loc_0x40C
  lwz       r4, 0x0(r30)
  cmpw      r4, r29
  bge-      .loc_0x40C
  addi      r3, r4, 0x1
  rlwinm    r0,r4,2,0,29
  stw       r3, 0x0(r30)
  stwx      r25, r28, r0
  lwz       r0, 0x4(r25)
  cmplwi    r0, 0
  beq-      .loc_0x38C
  mr        r3, r25
  bl        -0x228C
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x38C
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x22B0
  cmplwi    r3, 0
  beq-      .loc_0x364
  mr        r3, r26
  bl        -0x22C0
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x364:
  mr        r3, r26
  bl        -0x22E0
  cmplwi    r3, 0
  beq-      .loc_0x38C
  mr        r3, r26
  bl        -0x22F0
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x38C:
  lwz       r0, 0x10(r25)
  cmplwi    r0, 0
  beq-      .loc_0x40C
  mr        r3, r25
  bl        -0x2314
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x40C
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x2330
  cmplwi    r3, 0
  beq-      .loc_0x3E4
  mr        r3, r26
  bl        -0x2340
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x3E4:
  mr        r3, r26
  bl        -0x2360
  cmplwi    r3, 0
  beq-      .loc_0x40C
  mr        r3, r26
  bl        -0x2370
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x40C:
  lwz       r25, 0x10(r31)
  cmplwi    r25, 0
  beq-      .loc_0x534
  lwz       r4, 0x0(r30)
  cmpw      r4, r29
  bge-      .loc_0x534
  addi      r3, r4, 0x1
  rlwinm    r0,r4,2,0,29
  stw       r3, 0x0(r30)
  stwx      r25, r28, r0
  lwz       r0, 0x4(r25)
  cmplwi    r0, 0
  beq-      .loc_0x4B4
  mr        r3, r25
  bl        -0x23B4
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x4B4
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x23D8
  cmplwi    r3, 0
  beq-      .loc_0x48C
  mr        r3, r26
  bl        -0x23E8
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x48C:
  mr        r3, r26
  bl        -0x2408
  cmplwi    r3, 0
  beq-      .loc_0x4B4
  mr        r3, r26
  bl        -0x2418
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x4B4:
  lwz       r0, 0x10(r25)
  cmplwi    r0, 0
  beq-      .loc_0x534
  mr        r3, r25
  bl        -0x243C
  lwz       r5, 0x0(r30)
  mr        r26, r3
  cmpw      r5, r29
  bge-      .loc_0x534
  addi      r4, r5, 0x1
  rlwinm    r0,r5,2,0,29
  stw       r4, 0x0(r30)
  stwx      r26, r28, r0
  bl        -0x2458
  cmplwi    r3, 0
  beq-      .loc_0x50C
  mr        r3, r26
  bl        -0x2468
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x50C:
  mr        r3, r26
  bl        -0x2488
  cmplwi    r3, 0
  beq-      .loc_0x534
  mr        r3, r26
  bl        -0x2498
  mr        r4, r28
  mr        r5, r29
  mr        r6, r30
  bl        .loc_0x0

.loc_0x534:
  lwz       r3, 0x0(r30)

.loc_0x538:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}


/*
 * --INFO--
 * Address:	80136A04
 * Size:	000118
 */
void CollTree::findCollPart(FindCollPartArg &)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  stw       r0, 0x444(r1)
  stfd      f31, 0x430(r1)
  psq_st    f31,0x438(r1),0,0
  stmw      r26, 0x418(r1)
  lwz       r0, 0x0(r3)
  mr        r26, r4
  cmplwi    r0, 0
  beq-      .loc_0xF8
  li        r0, 0
  addi      r4, r1, 0xC
  stw       r0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x100
  lwz       r3, 0x0(r3)
  bl        -0x58C
  lfs       f31, -0x614C(r2)
  mr        r31, r3
  addi      r30, r1, 0xC
  li        r29, 0
  li        r28, 0
  b         .loc_0xE8

.loc_0x5C:
  lwz       r3, 0x0(r26)
  lwz       r27, 0x0(r30)
  cmplwi    r3, 0
  beq-      .loc_0x88
  lwz       r12, 0x0(r3)
  mr        r4, r27
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE0

.loc_0x88:
  lbz       r0, 0x58(r27)
  cmplwi    r0, 0
  bne-      .loc_0xE0
  lfs       f1, 0x8(r26)
  lfs       f0, 0x50(r27)
  lfs       f2, 0x1C(r27)
  fsubs     f5, f1, f0
  lfs       f3, 0x4(r26)
  lfs       f1, 0x4C(r27)
  fmuls     f0, f2, f2
  lfs       f4, 0xC(r26)
  lfs       f2, 0x54(r27)
  fsubs     f3, f3, f1
  fmuls     f1, f5, f5
  fsubs     f2, f4, f2
  fmadds    f1, f3, f3, f1
  fmadds    f1, f2, f2, f1
  fsubs     f0, f1, f0
  fcmpo     cr0, f0, f31
  bge-      .loc_0xE0
  mr        r29, r27
  fmr       f31, f0

.loc_0xE0:
  addi      r30, r30, 0x4
  addi      r28, r28, 0x1

.loc_0xE8:
  cmpw      r28, r31
  blt+      .loc_0x5C
  mr        r3, r29
  b         .loc_0xFC

.loc_0xF8:
  li        r3, 0

.loc_0xFC:
  psq_l     f31,0x438(r1),0,0
  lfd       f31, 0x430(r1)
  lmw       r26, 0x418(r1)
  lwz       r0, 0x444(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}


/*
 * --INFO--
 * Address:	80136B1C
 * Size:	000124
 */
void CollTree::getRandomCollPart()
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  stw       r29, 0x74(r1)
  stw       r28, 0x70(r1)
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x100
  li        r0, 0
  addi      r4, r1, 0xC
  stw       r0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x10
  lwz       r3, 0x0(r3)
  bl        -0x6A4
  mr        r29, r3
  bl        -0x6D5C4
  lis       r4, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0x54(r1)
  xoris     r0, r29, 0x8000
  lfd       f2, -0x6148(r2)
  addi      r30, r1, 0xC
  stw       r4, 0x50(r1)
  lfs       f0, -0x6158(r2)
  lfd       f1, 0x50(r1)
  stw       r0, 0x5C(r1)
  fsubs     f1, f1, f2
  stw       r4, 0x58(r1)
  fdivs     f1, f1, f0
  lfd       f0, 0x58(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x60(r1)
  lwz       r28, 0x64(r1)
  rlwinm    r31,r28,2,0,29
  lwzx      r0, r30, r31
  cmplwi    r0, 0
  bne-      .loc_0xCC
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x3A00
  mr        r6, r29
  subi      r3, r3, 0x3A60
  mr        r7, r28
  li        r4, 0x376
  crclr     6, 0x6
  bl        -0x10C5A4

.loc_0xCC:
  cmpwi     r28, 0x10
  blt-      .loc_0xF8
  lis       r3, 0x8048
  lis       r4, 0x8048
  subi      r5, r4, 0x3A00
  mr        r6, r29
  subi      r3, r3, 0x3A60
  mr        r7, r28
  li        r4, 0x379
  crclr     6, 0x6
  bl        -0x10C5D0

.loc_0xF8:
  lwzx      r3, r30, r31
  b         .loc_0x104

.loc_0x100:
  li        r3, 0

.loc_0x104:
  lwz       r0, 0x84(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r29, 0x74(r1)
  lwz       r28, 0x70(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}


/*
 * --INFO--
 * Address:	80136C40
 * Size:	000034
 */
void CollTree::getBoundingSphere(Sys::Sphere &)
{
/*
.loc_0x0:
  lwz       r5, 0x0(r3)
  cmplwi    r5, 0
  beqlr-    
  lfs       f0, 0x4C(r5)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x50(r5)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x54(r5)
  stfs      f0, 0x8(r4)
  lwz       r3, 0x0(r3)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0xC(r4)
  blr
*/
}


/*
 * --INFO--
 * Address:	80136C74
 * Size:	000064
 */
void CollPart::CollPart(SysShape::MtxObject *)
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
  bl        0x2DA700
  lis       r4, 0x804B
  addi      r3, r30, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r30)
  bl        0x2DC5CC
  addi      r3, r30, 0x3C
  bl        0x2DC5C4
  mr        r3, r30
  mr        r4, r31
  bl        0x78
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
 * Address:	80136CD8
 * Size:	000058
 */
void CollPart::CollPart()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x2DA6A4
  lis       r4, 0x804B
  addi      r3, r31, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r31)
  bl        0x2DC570
  addi      r3, r31, 0x3C
  bl        0x2DC568
  mr        r3, r31
  li        r4, 0
  bl        .loc_0x58
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x58:
*/
}


/*
 * --INFO--
 * Address:	80136D30
 * Size:	000080
 */
void CollPart::init(SysShape::MtxObject *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r6, 0
  mr        r7, r3
  stw       r0, 0x14(r1)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  lis       r5, 0x5F5F
  stw       r6, 0x10(r3)
  stw       r6, 0xC(r3)
  addi      r3, r7, 0x3C
  stw       r6, 0x8(r7)
  stw       r6, 0x4(r7)
  stfs      f0, 0x1C(r7)
  stfs      f0, 0x18(r7)
  stfs      f0, 0x20(r7)
  stfs      f0, 0x24(r7)
  stfs      f0, 0x28(r7)
  stfs      f0, 0x4C(r7)
  stfs      f0, 0x50(r7)
  stfs      f0, 0x54(r7)
  stw       r4, 0x5C(r7)
  addi      r4, r5, 0x5F5F
  stw       r0, 0x2C(r7)
  stw       r6, 0x60(r7)
  sth       r6, 0x48(r7)
  stb       r6, 0x58(r7)
  bl        0x2DC53C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80136DB0
 * Size:	000030
 */
void CollPart::isStickable()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x732A
  addi      r3, r3, 0x3C
  stw       r0, 0x14(r1)
  li        r5, 0x2A
  addi      r4, r4, 0x2A2A
  bl        0x2DC530
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80136DE0
 * Size:	0004E0
 */
void CollPart::update()
{
/*
.loc_0x0:
  stwu      r1, -0x2F0(r1)
  mflr      r0
  stw       r0, 0x2F4(r1)
  addi      r4, r1, 0x2A8
  stw       r31, 0x2EC(r1)
  mr        r31, r3
  stw       r30, 0x2E8(r1)
  stw       r29, 0x2E4(r1)
  stw       r28, 0x2E0(r1)
  bl        0x514
  lfs       f0, 0x2B4(r1)
  stfs      f0, 0x4C(r31)
  lfs       f0, 0x2C4(r1)
  stfs      f0, 0x50(r31)
  lfs       f0, 0x2D4(r1)
  stfs      f0, 0x54(r31)
  lwz       r29, 0x4(r31)
  cmplwi    r29, 0
  beq-      .loc_0x280
  mr        r3, r29
  addi      r4, r1, 0x278
  bl        0x4E4
  addi      r3, r1, 0x278
  li        r4, 0
  li        r5, 0x3
  bl        0x4BC
  lfs       f0, 0x0(r3)
  addi      r3, r1, 0x278
  li        r4, 0x1
  li        r5, 0x3
  stfs      f0, 0x4C(r29)
  bl        0x4A4
  lfs       f0, 0x0(r3)
  addi      r3, r1, 0x278
  li        r4, 0x2
  li        r5, 0x3
  stfs      f0, 0x50(r29)
  bl        0x48C
  lfs       f0, 0x0(r3)
  stfs      f0, 0x54(r29)
  lwz       r28, 0x4(r29)
  cmplwi    r28, 0
  beq-      .loc_0x190
  mr        r3, r28
  addi      r4, r1, 0x218
  bl        0x484
  addi      r3, r1, 0x218
  addi      r5, r28, 0x4C
  li        r4, 0x3
  bl        0x438
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x12C
  mr        r3, r28
  bl        -0x2970
  addi      r4, r1, 0x158
  mr        r30, r3
  bl        0x454
  addi      r3, r1, 0x158
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x2990
  cmplwi    r3, 0
  beq-      .loc_0x110
  mr        r3, r30
  bl        -0x29A0
  bl        .loc_0x0

.loc_0x110:
  mr        r3, r30
  bl        -0x29B4
  cmplwi    r3, 0
  beq-      .loc_0x12C
  mr        r3, r30
  bl        -0x29C4
  bl        .loc_0x0

.loc_0x12C:
  lwz       r0, 0x10(r28)
  cmplwi    r0, 0
  beq-      .loc_0x190
  mr        r3, r28
  bl        -0x29DC
  addi      r4, r1, 0x128
  mr        r30, r3
  bl        0x3F0
  addi      r3, r1, 0x128
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x29F4
  cmplwi    r3, 0
  beq-      .loc_0x174
  mr        r3, r30
  bl        -0x2A04
  bl        .loc_0x0

.loc_0x174:
  mr        r3, r30
  bl        -0x2A18
  cmplwi    r3, 0
  beq-      .loc_0x190
  mr        r3, r30
  bl        -0x2A28
  bl        .loc_0x0

.loc_0x190:
  lwz       r28, 0x10(r29)
  cmplwi    r28, 0
  beq-      .loc_0x280
  mr        r3, r28
  addi      r4, r1, 0x1E8
  bl        0x394
  addi      r3, r1, 0x1E8
  addi      r5, r28, 0x4C
  li        r4, 0x3
  bl        0x348
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x21C
  mr        r3, r28
  bl        -0x2A60
  addi      r4, r1, 0xF8
  mr        r30, r3
  bl        0x364
  addi      r3, r1, 0xF8
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x2A80
  cmplwi    r3, 0
  beq-      .loc_0x200
  mr        r3, r30
  bl        -0x2A90
  bl        .loc_0x0

.loc_0x200:
  mr        r3, r30
  bl        -0x2AA4
  cmplwi    r3, 0
  beq-      .loc_0x21C
  mr        r3, r30
  bl        -0x2AB4
  bl        .loc_0x0

.loc_0x21C:
  lwz       r0, 0x10(r28)
  cmplwi    r0, 0
  beq-      .loc_0x280
  mr        r3, r28
  bl        -0x2ACC
  addi      r4, r1, 0xC8
  mr        r30, r3
  bl        0x300
  addi      r3, r1, 0xC8
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x2AE4
  cmplwi    r3, 0
  beq-      .loc_0x264
  mr        r3, r30
  bl        -0x2AF4
  bl        .loc_0x0

.loc_0x264:
  mr        r3, r30
  bl        -0x2B08
  cmplwi    r3, 0
  beq-      .loc_0x280
  mr        r3, r30
  bl        -0x2B18
  bl        .loc_0x0

.loc_0x280:
  lwz       r28, 0x10(r31)
  cmplwi    r28, 0
  beq-      .loc_0x4C0
  mr        r3, r28
  addi      r4, r1, 0x248
  bl        0x2A4
  addi      r3, r1, 0x248
  li        r4, 0
  li        r5, 0x3
  bl        0x27C
  lfs       f0, 0x0(r3)
  addi      r3, r1, 0x248
  li        r4, 0x1
  li        r5, 0x3
  stfs      f0, 0x4C(r28)
  bl        0x264
  lfs       f0, 0x0(r3)
  addi      r3, r1, 0x248
  li        r4, 0x2
  li        r5, 0x3
  stfs      f0, 0x50(r28)
  bl        0x24C
  lfs       f0, 0x0(r3)
  stfs      f0, 0x54(r28)
  lwz       r29, 0x4(r28)
  cmplwi    r29, 0
  beq-      .loc_0x3D0
  mr        r3, r29
  addi      r4, r1, 0x1B8
  bl        0x244
  addi      r3, r1, 0x1B8
  addi      r5, r29, 0x4C
  li        r4, 0x3
  bl        0x1F8
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  beq-      .loc_0x36C
  mr        r3, r29
  bl        -0x2BB0
  addi      r4, r1, 0x98
  mr        r30, r3
  bl        0x214
  addi      r3, r1, 0x98
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x2BD0
  cmplwi    r3, 0
  beq-      .loc_0x350
  mr        r3, r30
  bl        -0x2BE0
  bl        .loc_0x0

.loc_0x350:
  mr        r3, r30
  bl        -0x2BF4
  cmplwi    r3, 0
  beq-      .loc_0x36C
  mr        r3, r30
  bl        -0x2C04
  bl        .loc_0x0

.loc_0x36C:
  lwz       r0, 0x10(r29)
  cmplwi    r0, 0
  beq-      .loc_0x3D0
  mr        r3, r29
  bl        -0x2C1C
  addi      r4, r1, 0x68
  mr        r30, r3
  bl        0x1B0
  addi      r3, r1, 0x68
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x2C34
  cmplwi    r3, 0
  beq-      .loc_0x3B4
  mr        r3, r30
  bl        -0x2C44
  bl        .loc_0x0

.loc_0x3B4:
  mr        r3, r30
  bl        -0x2C58
  cmplwi    r3, 0
  beq-      .loc_0x3D0
  mr        r3, r30
  bl        -0x2C68
  bl        .loc_0x0

.loc_0x3D0:
  lwz       r28, 0x10(r28)
  cmplwi    r28, 0
  beq-      .loc_0x4C0
  mr        r3, r28
  addi      r4, r1, 0x188
  bl        0x154
  addi      r3, r1, 0x188
  addi      r5, r28, 0x4C
  li        r4, 0x3
  bl        0x108
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x45C
  mr        r3, r28
  bl        -0x2CA0
  addi      r4, r1, 0x38
  mr        r30, r3
  bl        0x124
  addi      r3, r1, 0x38
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x2CC0
  cmplwi    r3, 0
  beq-      .loc_0x440
  mr        r3, r30
  bl        -0x2CD0
  bl        .loc_0x0

.loc_0x440:
  mr        r3, r30
  bl        -0x2CE4
  cmplwi    r3, 0
  beq-      .loc_0x45C
  mr        r3, r30
  bl        -0x2CF4
  bl        .loc_0x0

.loc_0x45C:
  lwz       r0, 0x10(r28)
  cmplwi    r0, 0
  beq-      .loc_0x4C0
  mr        r3, r28
  bl        -0x2D0C
  addi      r4, r1, 0x8
  mr        r30, r3
  bl        0xC0
  addi      r3, r1, 0x8
  addi      r4, r30, 0x4C
  bl        .loc_0x4E0
  mr        r3, r30
  bl        -0x2D24
  cmplwi    r3, 0
  beq-      .loc_0x4A4
  mr        r3, r30
  bl        -0x2D34
  bl        .loc_0x0

.loc_0x4A4:
  mr        r3, r30
  bl        -0x2D48
  cmplwi    r3, 0
  beq-      .loc_0x4C0
  mr        r3, r30
  bl        -0x2D58
  bl        .loc_0x0

.loc_0x4C0:
  lwz       r0, 0x2F4(r1)
  lwz       r31, 0x2EC(r1)
  lwz       r30, 0x2E8(r1)
  lwz       r29, 0x2E4(r1)
  lwz       r28, 0x2E0(r1)
  mtlr      r0
  addi      r1, r1, 0x2F0
  blr       

.loc_0x4E0:
*/
}


/*
 * --INFO--
 * Address:	801372C0
 * Size:	00001C
 */
void Matrixf::getTranslation(Vector3<float> &)
{
/*
.loc_0x0:
  lfs       f0, 0xC(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x2C(r3)
  stfs      f0, 0x8(r4)
  blr
*/
}


/*
 * --INFO--
 * Address:	801372DC
 * Size:	000024
 */
void Matrixf::getBasis(int, Vector3<float> &)
{
/*
.loc_0x0:
  rlwinm    r0,r4,2,0,29
  lfsx      f0, r3, r0
  add       r3, r3, r0
  stfs      f0, 0x0(r5)
  lfs       f0, 0x10(r3)
  stfs      f0, 0x4(r5)
  lfs       f0, 0x20(r3)
  stfs      f0, 0x8(r5)
  blr
*/
}


/*
 * --INFO--
 * Address:	80137300
 * Size:	000018
 */
void Matrixf::operator() (int, int)
{
/*
.loc_0x0:
  rlwinm    r4,r4,4,0,27
  rlwinm    r0,r5,2,0,29
  mr        r5, r3
  add       r3, r4, r0
  add       r3, r5, r3
  blr
*/
}


/*
 * --INFO--
 * Address:	80137318
 * Size:	000084
 */
void CollPart::makeMatrixTo(Matrixf &)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  lwz       r0, 0x2C(r3)
  cmpwi     r0, -0x1
  beq-      .loc_0x6C
  addi      r3, r1, 0x8
  bl        -0x4D0A4
  lfs       f0, 0x20(r30)
  stfs      f0, 0x14(r1)
  lfs       f0, 0x24(r30)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x28(r30)
  stfs      f0, 0x34(r1)
  lwz       r3, 0x5C(r30)
  lwz       r4, 0x2C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r5, r31
  addi      r4, r1, 0x8
  bl        -0x4D080

.loc_0x6C:
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
 * Address:	8013739C
 * Size:	000214
 */
void CollPart::makeTubeTree()
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  li        r0, 0x2
  stb       r0, 0x58(r3)
  b         .loc_0x30

.loc_0x28:
  li        r0, 0
  stb       r0, 0x58(r3)

.loc_0x30:
  lwz       r28, 0x10(r3)
  b         .loc_0x1F8

.loc_0x38:
  lwz       r0, 0x10(r28)
  cmplwi    r0, 0
  beq-      .loc_0x50
  li        r0, 0x2
  stb       r0, 0x58(r28)
  b         .loc_0x58

.loc_0x50:
  li        r0, 0
  stb       r0, 0x58(r28)

.loc_0x58:
  lwz       r31, 0x10(r28)
  b         .loc_0x1EC

.loc_0x60:
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0x78
  li        r0, 0x2
  stb       r0, 0x58(r31)
  b         .loc_0x80

.loc_0x78:
  li        r0, 0
  stb       r0, 0x58(r31)

.loc_0x80:
  lwz       r30, 0x10(r31)
  b         .loc_0x1E0

.loc_0x88:
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  beq-      .loc_0xA0
  li        r0, 0x2
  stb       r0, 0x58(r30)
  b         .loc_0xA8

.loc_0xA0:
  li        r0, 0
  stb       r0, 0x58(r30)

.loc_0xA8:
  lwz       r29, 0x10(r30)
  b         .loc_0x1D4

.loc_0xB0:
  lwz       r0, 0x10(r29)
  cmplwi    r0, 0
  beq-      .loc_0xC8
  li        r0, 0x2
  stb       r0, 0x58(r29)
  b         .loc_0xD0

.loc_0xC8:
  li        r0, 0
  stb       r0, 0x58(r29)

.loc_0xD0:
  lwz       r27, 0x10(r29)
  b         .loc_0x1C8

.loc_0xD8:
  lwz       r0, 0x10(r27)
  cmplwi    r0, 0
  beq-      .loc_0xF0
  li        r0, 0x2
  stb       r0, 0x58(r27)
  b         .loc_0xF8

.loc_0xF0:
  li        r0, 0
  stb       r0, 0x58(r27)

.loc_0xF8:
  lwz       r26, 0x10(r27)
  b         .loc_0x1BC

.loc_0x100:
  lwz       r0, 0x10(r26)
  cmplwi    r0, 0
  beq-      .loc_0x118
  li        r0, 0x2
  stb       r0, 0x58(r26)
  b         .loc_0x120

.loc_0x118:
  li        r0, 0
  stb       r0, 0x58(r26)

.loc_0x120:
  lwz       r25, 0x10(r26)
  b         .loc_0x1B0

.loc_0x128:
  lwz       r0, 0x10(r25)
  cmplwi    r0, 0
  beq-      .loc_0x140
  li        r0, 0x2
  stb       r0, 0x58(r25)
  b         .loc_0x148

.loc_0x140:
  li        r0, 0
  stb       r0, 0x58(r25)

.loc_0x148:
  lwz       r24, 0x10(r25)
  b         .loc_0x1A4

.loc_0x150:
  mr        r3, r24
  bl        -0x2FB0
  cmplwi    r3, 0
  beq-      .loc_0x16C
  li        r0, 0x2
  stb       r0, 0x58(r24)
  b         .loc_0x174

.loc_0x16C:
  li        r0, 0
  stb       r0, 0x58(r24)

.loc_0x174:
  mr        r3, r24
  bl        -0x2FD4
  mr        r23, r3
  b         .loc_0x198

.loc_0x184:
  mr        r3, r23
  bl        .loc_0x0
  mr        r3, r23
  bl        -0x2FE4
  mr        r23, r3

.loc_0x198:
  cmplwi    r23, 0
  bne+      .loc_0x184
  lwz       r24, 0x4(r24)

.loc_0x1A4:
  cmplwi    r24, 0
  bne+      .loc_0x150
  lwz       r25, 0x4(r25)

.loc_0x1B0:
  cmplwi    r25, 0
  bne+      .loc_0x128
  lwz       r26, 0x4(r26)

.loc_0x1BC:
  cmplwi    r26, 0
  bne+      .loc_0x100
  lwz       r27, 0x4(r27)

.loc_0x1C8:
  cmplwi    r27, 0
  bne+      .loc_0xD8
  lwz       r29, 0x4(r29)

.loc_0x1D4:
  cmplwi    r29, 0
  bne+      .loc_0xB0
  lwz       r30, 0x4(r30)

.loc_0x1E0:
  cmplwi    r30, 0
  bne+      .loc_0x88
  lwz       r31, 0x4(r31)

.loc_0x1EC:
  cmplwi    r31, 0
  bne+      .loc_0x60
  lwz       r28, 0x4(r28)

.loc_0x1F8:
  cmplwi    r28, 0
  bne+      .loc_0x38
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}


/*
 * --INFO--
 * Address:	801375B0
 * Size:	00022C
 */
void CollPart::calcStickLocal(Vector3<float> &, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0xF0(r1)
  mflr      r0
  stw       r0, 0xF4(r1)
  stfd      f31, 0xE0(r1)
  psq_st    f31,0xE8(r1),0,0
  stw       r31, 0xDC(r1)
  stw       r30, 0xD8(r1)
  stw       r29, 0xD4(r1)
  mr        r29, r3
  mr        r30, r4
  lbz       r0, 0x58(r3)
  mr        r31, r5
  cmpwi     r0, 0
  beq-      .loc_0x48
  blt-      .loc_0x208
  cmpwi     r0, 0x3
  bge-      .loc_0x208
  b         .loc_0x1F0

.loc_0x48:
  lwz       r0, 0x2C(r29)
  cmpwi     r0, -0x1
  beq-      .loc_0x98
  addi      r3, r1, 0x34
  bl        -0x4D368
  lfs       f0, 0x20(r29)
  stfs      f0, 0x40(r1)
  lfs       f0, 0x24(r29)
  stfs      f0, 0x50(r1)
  lfs       f0, 0x28(r29)
  stfs      f0, 0x60(r1)
  lwz       r3, 0x5C(r29)
  lwz       r4, 0x2C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x34
  addi      r5, r1, 0x94
  bl        -0x4D344

.loc_0x98:
  addi      r3, r1, 0x94
  addi      r4, r1, 0x64
  bl        -0x4D234
  lfs       f0, 0x94(r1)
  lfs       f1, 0x98(r1)
  fmuls     f3, f0, f0
  lfs       f4, 0x9C(r1)
  fmuls     f2, f1, f1
  lfs       f0, -0x6150(r2)
  fmuls     f1, f4, f4
  fadds     f3, f3, f2
  fadds     f3, f3, f1
  fcmpo     cr0, f3, f0
  ble-      .loc_0xE0
  ble-      .loc_0xE4
  fsqrte    f0, f3
  fmuls     f3, f0, f3
  b         .loc_0xE4

.loc_0xE0:
  fmr       f3, f0

.loc_0xE4:
  fabs      f1, f3
  lfs       f0, -0x6140(r2)
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x10C
  lfs       f0, -0x6150(r2)
  stfs      f0, 0x0(r31)
  stfs      f0, 0x4(r31)
  stfs      f0, 0x8(r31)
  b         .loc_0x208

.loc_0x10C:
  lfs       f0, -0x613C(r2)
  mr        r4, r30
  addi      r3, r1, 0x64
  addi      r5, r1, 0x8
  fdivs     f31, f0, f3
  bl        -0x4CAF8
  lfs       f2, 0xC(r1)
  lfs       f3, 0x10(r1)
  lfs       f0, 0x8(r1)
  lfs       f1, -0x6150(r2)
  stfs      f0, 0x0(r31)
  stfs      f2, 0x4(r31)
  stfs      f3, 0x8(r31)
  lfs       f3, 0x0(r31)
  lfs       f2, 0x4(r31)
  lfs       f4, 0x8(r31)
  fmuls     f0, f3, f3
  fmuls     f2, f2, f2
  fmuls     f4, f4, f4
  fadds     f0, f0, f2
  fadds     f0, f4, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x184
  fmadds    f0, f3, f3, f2
  fadds     f2, f4, f0
  fcmpo     cr0, f2, f1
  ble-      .loc_0x188
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0x188

.loc_0x184:
  fmr       f2, f1

.loc_0x188:
  lfs       f0, -0x6150(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x1C0
  lfs       f1, -0x613C(r2)
  lfs       f0, 0x0(r31)
  fdivs     f1, f1, f2
  fmuls     f0, f0, f1
  stfs      f0, 0x0(r31)
  lfs       f0, 0x4(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x4(r31)
  lfs       f0, 0x8(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x8(r31)

.loc_0x1C0:
  lfs       f1, 0x1C(r29)
  lfs       f0, 0x0(r31)
  fmuls     f3, f1, f31
  lfs       f1, 0x4(r31)
  lfs       f2, 0x8(r31)
  fmuls     f0, f0, f3
  fmuls     f1, f1, f3
  fmuls     f2, f2, f3
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f2, 0x8(r31)
  b         .loc_0x208

.loc_0x1F0:
  addi      r4, r1, 0x14
  bl        0xAD4
  mr        r4, r30
  addi      r3, r1, 0x14
  bl        0x2DE624
  stfs      f1, 0x4(r31)

.loc_0x208:
  psq_l     f31,0xE8(r1),0,0
  lwz       r0, 0xF4(r1)
  lfd       f31, 0xE0(r1)
  lwz       r31, 0xDC(r1)
  lwz       r30, 0xD8(r1)
  lwz       r29, 0xD4(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}


/*
 * --INFO--
 * Address:	801377DC
 * Size:	000168
 */
void CollPart::calcStickGlobal(Vector3<float> &, Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stw       r31, 0xDC(r1)
  mr        r31, r5
  stw       r30, 0xD8(r1)
  mr        r30, r4
  stw       r29, 0xD4(r1)
  mr        r29, r3
  lbz       r0, 0x58(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0xC8
  bge-      .loc_0x40
  cmpwi     r0, 0
  bge-      .loc_0x4C
  b         .loc_0x14C

.loc_0x40:
  cmpwi     r0, 0x3
  bge-      .loc_0x14C
  b         .loc_0x10C

.loc_0x4C:
  lwz       r0, 0x2C(r29)
  cmpwi     r0, -0x1
  beq-      .loc_0x9C
  addi      r3, r1, 0x6C
  bl        -0x4D598
  lfs       f0, 0x20(r29)
  stfs      f0, 0x78(r1)
  lfs       f0, 0x24(r29)
  stfs      f0, 0x88(r1)
  lfs       f0, 0x28(r29)
  stfs      f0, 0x98(r1)
  lwz       r3, 0x5C(r29)
  lwz       r4, 0x2C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x6C
  addi      r5, r1, 0x9C
  bl        -0x4D574

.loc_0x9C:
  mr        r4, r30
  addi      r3, r1, 0x9C
  addi      r5, r1, 0x8
  bl        -0x4CCAC
  lfs       f1, 0xC(r1)
  lfs       f2, 0x10(r1)
  lfs       f0, 0x8(r1)
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f2, 0x8(r31)
  b         .loc_0x14C

.loc_0xC8:
  mr        r4, r31
  mr        r5, r30
  bl        -0x2FC
  mr        r3, r29
  addi      r4, r1, 0x4C
  bl        0x9C0
  lfs       f1, 0x4(r30)
  addi      r3, r1, 0x20
  addi      r4, r1, 0x4C
  bl        0x2DE600
  lfs       f0, 0x20(r1)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x24(r1)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x8(r31)
  b         .loc_0x14C

.loc_0x10C:
  mr        r4, r31
  mr        r5, r30
  bl        -0x340
  mr        r3, r29
  addi      r4, r1, 0x2C
  bl        0x97C
  lfs       f1, 0x4(r30)
  addi      r3, r1, 0x14
  addi      r4, r1, 0x2C
  bl        0x2DE5BC
  lfs       f0, 0x14(r1)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x8(r31)

.loc_0x14C:
  lwz       r0, 0xE4(r1)
  lwz       r31, 0xDC(r1)
  lwz       r30, 0xD8(r1)
  lwz       r29, 0xD4(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}


/*
 * --INFO--
 * Address:	80137944
 * Size:	0004C8
 */
void CollPart::calcPoseMatrix(Vector3<float> &, Matrixf &)
{
/*
.loc_0x0:
  stwu      r1, -0xF0(r1)
  mflr      r0
  stw       r0, 0xF4(r1)
  stw       r31, 0xEC(r1)
  mr        r31, r5
  stw       r30, 0xE8(r1)
  mr        r30, r4
  stw       r29, 0xE4(r1)
  mr        r29, r3
  lbz       r0, 0x58(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x35C
  bge-      .loc_0x40
  cmpwi     r0, 0
  bge-      .loc_0x4C
  b         .loc_0x4AC

.loc_0x40:
  cmpwi     r0, 0x3
  bge-      .loc_0x4AC
  b         .loc_0x1D8

.loc_0x4C:
  lwz       r0, 0x2C(r29)
  cmpwi     r0, -0x1
  beq-      .loc_0x9C
  addi      r3, r1, 0x4C
  bl        -0x4D700
  lfs       f0, 0x20(r29)
  stfs      f0, 0x58(r1)
  lfs       f0, 0x24(r29)
  stfs      f0, 0x68(r1)
  lfs       f0, 0x28(r29)
  stfs      f0, 0x78(r1)
  lwz       r3, 0x5C(r29)
  lwz       r4, 0x2C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x4C
  addi      r5, r1, 0xAC
  bl        -0x4D6DC

.loc_0x9C:
  lfs       f1, 0xC8(r1)
  lfs       f0, 0x4(r30)
  lfs       f4, 0xB8(r1)
  fsubs     f1, f1, f0
  lfs       f0, 0x0(r30)
  lfs       f3, 0xD8(r1)
  lfs       f2, 0x8(r30)
  fsubs     f0, f4, f0
  fmuls     f4, f1, f1
  fsubs     f2, f3, f2
  lfs       f3, -0x6150(r2)
  fmadds    f4, f0, f0, f4
  fmuls     f5, f2, f2
  fadds     f4, f5, f4
  fcmpo     cr0, f4, f3
  ble-      .loc_0xEC
  ble-      .loc_0xF0
  fsqrte    f3, f4
  fmuls     f4, f3, f4
  b         .loc_0xF0

.loc_0xEC:
  fmr       f4, f3

.loc_0xF0:
  lfs       f3, -0x6150(r2)
  fcmpo     cr0, f4, f3
  ble-      .loc_0x114
  lfs       f3, -0x613C(r2)
  fdivs     f3, f3, f4
  fmuls     f0, f0, f3
  fmuls     f1, f1, f3
  fmuls     f2, f2, f3
  b         .loc_0x118

.loc_0x114:
  fmr       f4, f3

.loc_0x118:
  lfs       f3, -0x6150(r2)
  fcmpu     cr0, f3, f4
  bne-      .loc_0x130
  fmr       f0, f3
  lfs       f2, -0x613C(r2)
  fmr       f1, f3

.loc_0x130:
  lfs       f4, -0x6150(r2)
  lfs       f5, -0x613C(r2)
  fmuls     f3, f4, f2
  fmuls     f6, f4, f1
  fmsubs    f7, f4, f0, f3
  fnmsubs   f8, f5, f0, f6
  fmsubs    f6, f5, f2, f6
  fmuls     f3, f7, f7
  fmuls     f5, f8, f8
  fmadds    f3, f6, f6, f3
  fadds     f5, f5, f3
  fcmpo     cr0, f5, f4
  ble-      .loc_0x174
  ble-      .loc_0x178
  fsqrte    f3, f5
  fmuls     f5, f3, f5
  b         .loc_0x178

.loc_0x174:
  fmr       f5, f4

.loc_0x178:
  lfs       f3, -0x6150(r2)
  fcmpo     cr0, f5, f3
  ble-      .loc_0x198
  lfs       f3, -0x613C(r2)
  fdivs     f3, f3, f5
  fmuls     f6, f6, f3
  fmuls     f7, f7, f3
  fmuls     f8, f8, f3

.loc_0x198:
  stfs      f6, 0x0(r31)
  fmuls     f5, f2, f7
  fmuls     f4, f0, f8
  stfs      f7, 0x10(r31)
  fmuls     f3, f1, f6
  fmsubs    f5, f1, f8, f5
  stfs      f8, 0x20(r31)
  fmsubs    f4, f2, f6, f4
  fmsubs    f3, f0, f7, f3
  stfs      f5, 0x4(r31)
  stfs      f4, 0x14(r31)
  stfs      f3, 0x24(r31)
  stfs      f0, 0x8(r31)
  stfs      f1, 0x18(r31)
  stfs      f2, 0x28(r31)
  b         .loc_0x4AC

.loc_0x1D8:
  lfs       f0, 0x4C(r29)
  stfs      f0, 0x88(r1)
  lfs       f0, 0x50(r29)
  stfs      f0, 0x8C(r1)
  lfs       f0, 0x54(r29)
  stfs      f0, 0x90(r1)
  lwz       r3, 0x10(r29)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x94(r1)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x98(r1)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x9C(r1)
  lwz       r3, 0xC(r29)
  cmplwi    r3, 0
  beq-      .loc_0x240
  lbz       r0, 0x58(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x240
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x7C(r1)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x80(r1)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x84(r1)
  b         .loc_0x258

.loc_0x240:
  lfs       f2, 0x88(r1)
  lfs       f1, 0x8C(r1)
  lfs       f0, 0x90(r1)
  stfs      f2, 0x7C(r1)
  stfs      f1, 0x80(r1)
  stfs      f0, 0x84(r1)

.loc_0x258:
  lwz       r3, 0x10(r29)
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0x290
  lbz       r0, 0x58(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x290
  lfs       f0, 0x4C(r3)
  stfs      f0, 0xA0(r1)
  lfs       f0, 0x50(r3)
  stfs      f0, 0xA4(r1)
  lfs       f0, 0x54(r3)
  stfs      f0, 0xA8(r1)
  b         .loc_0x2A8

.loc_0x290:
  lfs       f2, 0x94(r1)
  lfs       f1, 0x98(r1)
  lfs       f0, 0x9C(r1)
  stfs      f2, 0xA0(r1)
  stfs      f1, 0xA4(r1)
  stfs      f0, 0xA8(r1)

.loc_0x2A8:
  lfs       f1, 0x4(r30)
  addi      r3, r1, 0x8
  addi      r4, r1, 0x7C
  bl        0x2D9C60
  lfs       f4, 0x8(r1)
  lfs       f3, 0xC(r1)
  fmuls     f0, f4, f4
  lfs       f2, 0x10(r1)
  fmuls     f5, f3, f3
  lfs       f1, -0x6150(r2)
  fmuls     f6, f2, f2
  stfs      f4, 0x20(r1)
  fadds     f0, f0, f5
  stfs      f3, 0x24(r1)
  stfs      f2, 0x28(r1)
  fadds     f0, f6, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x30C
  fmadds    f0, f4, f4, f5
  fadds     f3, f6, f0
  fcmpo     cr0, f3, f1
  ble-      .loc_0x310
  fsqrte    f0, f3
  fmuls     f3, f0, f3
  b         .loc_0x310

.loc_0x30C:
  fmr       f3, f1

.loc_0x310:
  lfs       f0, -0x6150(r2)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x348
  lfs       f0, -0x613C(r2)
  lfs       f2, 0x20(r1)
  fdivs     f3, f0, f3
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)

.loc_0x348:
  lfs       f1, 0x0(r30)
  mr        r3, r31
  addi      r4, r1, 0x20
  bl        0x2F02F8
  b         .loc_0x4AC

.loc_0x35C:
  addi      r4, r1, 0x2C
  bl        0x5D4
  addi      r3, r1, 0x2C
  addi      r4, r1, 0x14
  bl        0x2DDDF4
  lfs       f0, 0x14(r1)
  lfs       f1, 0x18(r1)
  fneg      f3, f0
  lfs       f0, 0x1C(r1)
  fneg      f2, f1
  lfs       f4, -0x6150(r2)
  fneg      f1, f0
  stfs      f3, 0x14(r1)
  frsp      f9, f3
  stfs      f2, 0x18(r1)
  frsp      f8, f1
  frsp      f0, f2
  stfs      f1, 0x1C(r1)
  lfs       f3, 0x0(r30)
  lfs       f6, 0x4(r30)
  lfs       f7, 0x8(r30)
  fmuls     f2, f3, f8
  fmuls     f1, f6, f9
  fmuls     f5, f7, f0
  fmsubs    f2, f7, f9, f2
  fmsubs    f3, f3, f0, f1
  fmsubs    f1, f6, f8, f5
  fmuls     f5, f2, f2
  fmuls     f6, f3, f3
  fmadds    f5, f1, f1, f5
  fadds     f5, f6, f5
  fcmpo     cr0, f5, f4
  ble-      .loc_0x3F0
  ble-      .loc_0x3F4
  fsqrte    f4, f5
  fmuls     f5, f4, f5
  b         .loc_0x3F4

.loc_0x3F0:
  fmr       f5, f4

.loc_0x3F4:
  lfs       f4, -0x6150(r2)
  fcmpo     cr0, f5, f4
  ble-      .loc_0x414
  lfs       f4, -0x613C(r2)
  fdivs     f4, f4, f5
  fmuls     f1, f1, f4
  fmuls     f2, f2, f4
  fmuls     f3, f3, f4

.loc_0x414:
  fmuls     f6, f1, f8
  lfs       f4, -0x6150(r2)
  fmuls     f5, f2, f9
  fmuls     f7, f3, f0
  fmsubs    f9, f3, f9, f6
  fmsubs    f6, f2, f8, f7
  fmsubs    f7, f1, f0, f5
  fmuls     f0, f9, f9
  fmuls     f5, f7, f7
  fmadds    f0, f6, f6, f0
  fadds     f5, f5, f0
  fcmpo     cr0, f5, f4
  ble-      .loc_0x458
  ble-      .loc_0x45C
  fsqrte    f0, f5
  fmuls     f5, f0, f5
  b         .loc_0x45C

.loc_0x458:
  fmr       f5, f4

.loc_0x45C:
  lfs       f0, -0x6150(r2)
  fcmpo     cr0, f5, f0
  ble-      .loc_0x47C
  lfs       f0, -0x613C(r2)
  fdivs     f0, f0, f5
  fmuls     f6, f6, f0
  fmuls     f9, f9, f0
  fmuls     f7, f7, f0

.loc_0x47C:
  stfs      f1, 0x0(r31)
  stfs      f2, 0x10(r31)
  stfs      f3, 0x20(r31)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x14(r31)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x24(r31)
  stfs      f6, 0x8(r31)
  stfs      f9, 0x18(r31)
  stfs      f7, 0x28(r31)

.loc_0x4AC:
  lwz       r0, 0xF4(r1)
  lwz       r31, 0xEC(r1)
  lwz       r30, 0xE8(r1)
  lwz       r29, 0xE4(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}


/*
 * --INFO--
 * Address:	80137E0C
 * Size:	0003F0
 */
void CollPart::setScale(float)
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
  stw       r28, 0x10(r1)
  mr        r28, r3
  fmr       f31, f1
  lfs       f0, 0x18(r3)
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  lwz       r30, 0x10(r3)
  cmplwi    r30, 0
  beq-      .loc_0x200
  lfs       f0, 0x18(r30)
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r30)
  lwz       r29, 0x10(r30)
  cmplwi    r29, 0
  beq-      .loc_0x128
  lfs       f0, 0x18(r29)
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r29)
  lwz       r0, 0x10(r29)
  cmplwi    r0, 0
  beq-      .loc_0xC8
  mr        r3, r29
  bl        -0x3944
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x3958
  cmplwi    r3, 0
  beq-      .loc_0xA8
  mr        r3, r31
  bl        -0x3968
  fmr       f1, f31
  bl        .loc_0x0

.loc_0xA8:
  mr        r3, r31
  bl        -0x3970
  cmplwi    r3, 0
  beq-      .loc_0xC8
  mr        r3, r31
  bl        -0x3980
  fmr       f1, f31
  bl        .loc_0x0

.loc_0xC8:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  beq-      .loc_0x128
  mr        r3, r29
  bl        -0x399C
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x39B8
  cmplwi    r3, 0
  beq-      .loc_0x108
  mr        r3, r31
  bl        -0x39C8
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x108:
  mr        r3, r31
  bl        -0x39D0
  cmplwi    r3, 0
  beq-      .loc_0x128
  mr        r3, r31
  bl        -0x39E0
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x128:
  lwz       r29, 0x4(r30)
  cmplwi    r29, 0
  beq-      .loc_0x200
  lfs       f0, 0x18(r29)
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r29)
  lwz       r0, 0x10(r29)
  cmplwi    r0, 0
  beq-      .loc_0x1A0
  mr        r3, r29
  bl        -0x3A1C
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x3A30
  cmplwi    r3, 0
  beq-      .loc_0x180
  mr        r3, r31
  bl        -0x3A40
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x180:
  mr        r3, r31
  bl        -0x3A48
  cmplwi    r3, 0
  beq-      .loc_0x1A0
  mr        r3, r31
  bl        -0x3A58
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x1A0:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  beq-      .loc_0x200
  mr        r3, r29
  bl        -0x3A74
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x3A90
  cmplwi    r3, 0
  beq-      .loc_0x1E0
  mr        r3, r31
  bl        -0x3AA0
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x1E0:
  mr        r3, r31
  bl        -0x3AA8
  cmplwi    r3, 0
  beq-      .loc_0x200
  mr        r3, r31
  bl        -0x3AB8
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x200:
  lwz       r29, 0x4(r28)
  cmplwi    r29, 0
  beq-      .loc_0x3C8
  lfs       f0, 0x18(r29)
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r29)
  lwz       r30, 0x10(r29)
  cmplwi    r30, 0
  beq-      .loc_0x2F0
  lfs       f0, 0x18(r30)
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r30)
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  beq-      .loc_0x290
  mr        r3, r30
  bl        -0x3B0C
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x3B20
  cmplwi    r3, 0
  beq-      .loc_0x270
  mr        r3, r31
  bl        -0x3B30
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x270:
  mr        r3, r31
  bl        -0x3B38
  cmplwi    r3, 0
  beq-      .loc_0x290
  mr        r3, r31
  bl        -0x3B48
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x290:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x2F0
  mr        r3, r30
  bl        -0x3B64
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x3B80
  cmplwi    r3, 0
  beq-      .loc_0x2D0
  mr        r3, r31
  bl        -0x3B90
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x2D0:
  mr        r3, r31
  bl        -0x3B98
  cmplwi    r3, 0
  beq-      .loc_0x2F0
  mr        r3, r31
  bl        -0x3BA8
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x2F0:
  lwz       r29, 0x4(r29)
  cmplwi    r29, 0
  beq-      .loc_0x3C8
  lfs       f0, 0x18(r29)
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r29)
  lwz       r0, 0x10(r29)
  cmplwi    r0, 0
  beq-      .loc_0x368
  mr        r3, r29
  bl        -0x3BE4
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x3BF8
  cmplwi    r3, 0
  beq-      .loc_0x348
  mr        r3, r31
  bl        -0x3C08
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x348:
  mr        r3, r31
  bl        -0x3C10
  cmplwi    r3, 0
  beq-      .loc_0x368
  mr        r3, r31
  bl        -0x3C20
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x368:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  beq-      .loc_0x3C8
  mr        r3, r29
  bl        -0x3C3C
  lfs       f0, 0x18(r3)
  mr        r31, r3
  fmuls     f0, f0, f31
  stfs      f0, 0x1C(r3)
  bl        -0x3C58
  cmplwi    r3, 0
  beq-      .loc_0x3A8
  mr        r3, r31
  bl        -0x3C68
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x3A8:
  mr        r3, r31
  bl        -0x3C70
  cmplwi    r3, 0
  beq-      .loc_0x3C8
  mr        r3, r31
  bl        -0x3C80
  fmr       f1, f31
  bl        .loc_0x0

.loc_0x3C8:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}


/*
 * --INFO--
 * Address:	801381FC
 * Size:	00007C
 */
void CollPart::getSphere(Sys::Sphere &)
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
  lbz       r0, 0x58(r3)
  cmplwi    r0, 0
  beq-      .loc_0x44
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x509
  subi      r5, r5, 0x3A34
  crclr     6, 0x6
  bl        -0x10DBFC

.loc_0x44:
  lfs       f1, 0x1C(r30)
  lfs       f0, 0x4C(r30)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x50(r30)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x54(r30)
  stfs      f0, 0x8(r31)
  stfs      f1, 0xC(r31)
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
 * Address:	80138278
 * Size:	0000B8
 */
void CollPart::getTube(Sys::Tube &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lbz       r3, 0x58(r3)
  cmplwi    r3, 0x1
  beq-      .loc_0x34
  cmplwi    r3, 0x2
  bne-      .loc_0x38

.loc_0x34:
  li        r0, 0x1

.loc_0x38:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x50F
  subi      r5, r5, 0x3A34
  crclr     6, 0x6
  bl        -0x10DC90

.loc_0x5C:
  lwz       r3, 0x10(r30)
  lfs       f1, 0x1C(r30)
  lfs       f2, 0x1C(r3)
  lfs       f0, 0x4C(r30)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x50(r30)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x54(r30)
  stfs      f0, 0x8(r31)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0xC(r31)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x10(r31)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x14(r31)
  stfs      f1, 0x18(r31)
  stfs      f2, 0x1C(r31)
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
 * Address:	80138330
 * Size:	000004
 */
void CollPart::draw(Graphics &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80138334
 * Size:	000134
 */
void MouthCollPart::MouthCollPart()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r0, r30
  mr        r31, r0
  bl        0x2D903C
  lis       r4, 0x804B
  addi      r3, r31, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r31)
  bl        0x2DAF08
  addi      r3, r31, 0x3C
  bl        0x2DAF00
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r31)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r31, 0x3C
  stw       r5, 0xC(r31)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r31)
  stw       r5, 0x4(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  stw       r5, 0x5C(r31)
  stw       r0, 0x2C(r31)
  stw       r5, 0x60(r31)
  sth       r5, 0x48(r31)
  stb       r5, 0x58(r31)
  bl        0x2DAF08
  lis       r3, 0x804B
  lis       r4, 0x5F5F
  subi      r0, r3, 0x198
  li        r5, 0
  stw       r0, 0x0(r30)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r30, 0x3C
  stw       r5, 0x10(r30)
  addi      r4, r4, 0x5F5F
  stw       r5, 0xC(r30)
  stw       r5, 0x8(r30)
  stw       r5, 0x4(r30)
  stfs      f0, 0x1C(r30)
  stfs      f0, 0x18(r30)
  stfs      f0, 0x20(r30)
  stfs      f0, 0x24(r30)
  stfs      f0, 0x28(r30)
  stfs      f0, 0x4C(r30)
  stfs      f0, 0x50(r30)
  stfs      f0, 0x54(r30)
  stw       r5, 0x5C(r30)
  stw       r0, 0x2C(r30)
  stw       r5, 0x60(r30)
  sth       r5, 0x48(r30)
  stb       r5, 0x58(r30)
  bl        0x2DAE9C
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x64(r30)
  stb       r0, 0x6C(r30)
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
 * Address:	80138468
 * Size:	000060
 */
void CollPart::~CollPart()
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
  subi      r0, r5, 0x164
  stw       r0, 0x0(r30)
  bl        0x2D90F0
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x1143F4

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
 * Address:	801384C8
 * Size:	000048
 */
void MouthCollPart::getPosition(Vector3<float> &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r3, 0x68(r3)
  bl        0x2F13C0
  lfs       f0, 0xC(r3)
  stfs      f0, 0x0(r31)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x4(r31)
  lfs       f0, 0x2C(r3)
  stfs      f0, 0x8(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80138510
 * Size:	000038
 */
void MouthCollPart::copyMatrixTo(Matrixf &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r3, 0x68(r3)
  bl        0x2F1378
  mr        r4, r31
  bl        -0x4E264
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80138548
 * Size:	000010
 */
void MouthSlots::MouthSlots()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80138558
 * Size:	000064
 */
void MouthSlots::alloc(int)
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
  stw       r4, 0x0(r3)
  mulli     r3, r31, 0x70
  addi      r3, r3, 0x10
  bl        -0x1145D4
  lis       r4, 0x8014
  lis       r5, 0x8014
  subi      r4, r4, 0x7CCC
  mr        r7, r31
  subi      r5, r5, 0x7A44
  li        r6, 0x70
  bl        -0x76BAC
  stw       r3, 0x4(r30)
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
 * Address:	801385BC
 * Size:	000070
 */
void MouthCollPart::~MouthCollPart()
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
  subi      r0, r4, 0x198
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x164
  stw       r0, 0x0(r30)
  bl        0x2D8F8C

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x114558

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
 * Address:	8013862C
 * Size:	000064
 */
void MouthSlots::update()
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
  mr        r29, r3
  b         .loc_0x3C

.loc_0x28:
  lwz       r0, 0x4(r29)
  add       r3, r0, r31
  bl        -0x187C
  addi      r31, r31, 0x70
  addi      r30, r30, 0x1

.loc_0x3C:
  lwz       r0, 0x0(r29)
  cmpw      r30, r0
  blt+      .loc_0x28
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
 * Address:	80138690
 * Size:	0000E8
 */
void MouthSlots::setup(int, SysShape::Model *, char *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr.       r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0
  blt-      .loc_0x44
  lwz       r0, 0x0(r28)
  cmpw      r29, r0
  bge-      .loc_0x44
  li        r3, 0x1

.loc_0x44:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x5CD
  subi      r5, r5, 0x3A34
  crclr     6, 0x6
  bl        -0x10E0B4

.loc_0x68:
  mulli     r0, r29, 0x70
  lwz       r3, 0x4(r28)
  mr        r4, r31
  add       r31, r3, r0
  stw       r30, 0x5C(r31)
  lwz       r3, 0x5C(r31)
  bl        0x3068D4
  lis       r4, 0x8051
  stw       r3, 0x68(r31)
  addi      r3, r4, 0x41E4
  lfs       f0, -0x6150(r2)
  lfs       f1, 0x0(r3)
  li        r0, 0
  stfs      f1, 0x20(r31)
  lfs       f1, 0x4(r3)
  stfs      f1, 0x24(r31)
  lfs       f1, 0x8(r3)
  stfs      f1, 0x28(r31)
  lwz       r3, 0x68(r31)
  lwz       r3, 0x18(r3)
  lhz       r3, 0x14(r3)
  stw       r3, 0x2C(r31)
  stfs      f0, 0x1C(r31)
  stw       r0, 0x64(r31)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	80138778
 * Size:	00007C
 */
void MouthSlots::getSlot(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0
  blt-      .loc_0x34
  lwz       r0, 0x0(r30)
  cmpw      r31, r0
  bge-      .loc_0x34
  li        r3, 0x1

.loc_0x34:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x5D3
  subi      r5, r5, 0x3A34
  crclr     6, 0x6
  bl        -0x10E18C

.loc_0x58:
  mulli     r0, r31, 0x70
  lwz       r3, 0x4(r30)
  add       r3, r3, r0
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
 * Address:	801387F4
 * Size:	000150
 */
void CollPartFactory::load(char *)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  li        r4, 0
  li        r5, 0
  stw       r0, 0x444(r1)
  li        r0, 0
  li        r6, 0
  li        r8, 0x2
  stw       r31, 0x43C(r1)
  li        r9, 0
  li        r10, 0
  stw       r30, 0x438(r1)
  stw       r29, 0x434(r1)
  stw       r0, 0x8(r1)
  lwz       r7, -0x77D8(r13)
  bl        -0x1196A8
  mr.       r30, r3
  bne-      .loc_0x50
  li        r3, 0
  b         .loc_0x134

.loc_0x50:
  mr        r4, r30
  addi      r3, r1, 0x10
  li        r5, -0x1
  bl        0x2DD0A8
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x1C(r1)
  bne-      .loc_0x78
  li        r0, 0
  stw       r0, 0x424(r1)

.loc_0x78:
  li        r3, 0x64
  bl        -0x1149CC
  mr.       r31, r3
  beq-      .loc_0x128
  mr        r29, r31
  bl        0x2D8B10
  lis       r4, 0x804B
  addi      r3, r31, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r31)
  bl        0x2DA9DC
  addi      r3, r31, 0x3C
  bl        0x2DA9D4
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r31)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r31, 0x3C
  stw       r5, 0xC(r31)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r31)
  stw       r5, 0x4(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  stw       r5, 0x5C(r31)
  stw       r0, 0x2C(r31)
  stw       r5, 0x60(r31)
  sth       r5, 0x48(r31)
  stb       r5, 0x58(r31)
  bl        0x2DA9DC
  lis       r4, 0x804B
  mr        r3, r29
  subi      r0, r4, 0x1CC
  addi      r4, r1, 0x10
  stw       r0, 0x0(r29)
  li        r5, 0
  bl        0x4E8

.loc_0x128:
  mr        r3, r30
  bl        -0x114848
  mr        r3, r31

.loc_0x134:
  lwz       r0, 0x444(r1)
  lwz       r31, 0x43C(r1)
  lwz       r30, 0x438(r1)
  lwz       r29, 0x434(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}


/*
 * --INFO--
 * Address:	80138944
 * Size:	000128
 */
void CollPartFactory::load(JKRFileLoader *, char *)
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  stw       r30, 0x428(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x34
  li        r3, 0
  b         .loc_0x110

.loc_0x34:
  mr        r4, r3
  addi      r3, r1, 0x8
  li        r5, -0x1
  bl        0x2DCF74
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x5C
  li        r0, 0
  stw       r0, 0x41C(r1)

.loc_0x5C:
  li        r3, 0x64
  bl        -0x114B00
  mr.       r31, r3
  beq-      .loc_0x10C
  mr        r30, r31
  bl        0x2D89DC
  lis       r4, 0x804B
  addi      r3, r31, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r31)
  bl        0x2DA8A8
  addi      r3, r31, 0x3C
  bl        0x2DA8A0
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r31)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r31, 0x3C
  stw       r5, 0xC(r31)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r31)
  stw       r5, 0x4(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  stw       r5, 0x5C(r31)
  stw       r0, 0x2C(r31)
  stw       r5, 0x60(r31)
  sth       r5, 0x48(r31)
  stb       r5, 0x58(r31)
  bl        0x2DA8A8
  lis       r4, 0x804B
  mr        r3, r30
  subi      r0, r4, 0x1CC
  addi      r4, r1, 0x8
  stw       r0, 0x0(r30)
  li        r5, 0
  bl        0x3B4

.loc_0x10C:
  mr        r3, r31

.loc_0x110:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  lwz       r30, 0x428(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr
*/
}


/*
 * --INFO--
 * Address:	80138A6C
 * Size:	000020
 */
void CollPartFactory::createInstance(SysShape::MtxObject *, CollPartMgr *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0xC0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80138A8C
 * Size:	0000AC
 */
void CollPartMgr::createOne(SysShape::MtxObject *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  beq-      .loc_0x90
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r31)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r31, 0x3C
  stw       r5, 0xC(r31)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r31)
  stw       r5, 0x4(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  stw       r30, 0x5C(r31)
  stw       r0, 0x2C(r31)
  stw       r5, 0x60(r31)
  sth       r5, 0x48(r31)
  stb       r5, 0x58(r31)
  bl        0x2DA7C0

.loc_0x90:
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
 * Address:	80138B38
 * Size:	0002A8
 */
void CollPart::clone(SysShape::MtxObject *, CollPartMgr *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr.       r30, r5
  mr        r28, r3
  mr        r29, r4
  beq-      .loc_0x124
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  beq-      .loc_0x9C
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r31)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r31, 0x3C
  stw       r5, 0xC(r31)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r31)
  stw       r5, 0x4(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  stw       r29, 0x5C(r31)
  stw       r0, 0x2C(r31)
  stw       r5, 0x60(r31)
  sth       r5, 0x48(r31)
  stb       r5, 0x58(r31)
  bl        0x2DA708

.loc_0x9C:
  cmplwi    r31, 0
  bne-      .loc_0xC0
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A60
  li        r4, 0x623
  subi      r5, r5, 0x39EC
  crclr     6, 0x6
  bl        -0x10E5B4

.loc_0xC0:
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r31)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r31, 0x3C
  stw       r5, 0xC(r31)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r31)
  stw       r5, 0x4(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  stw       r29, 0x5C(r31)
  stw       r0, 0x2C(r31)
  stw       r5, 0x60(r31)
  sth       r5, 0x48(r31)
  stb       r5, 0x58(r31)
  bl        0x2DA684
  b         .loc_0x1B8

.loc_0x124:
  li        r3, 0x64
  bl        -0x114DBC
  mr.       r31, r3
  beq-      .loc_0x1B8
  mr        r26, r31
  bl        0x2D8720
  lis       r4, 0x804B
  addi      r3, r26, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r26)
  bl        0x2DA5EC
  addi      r3, r26, 0x3C
  bl        0x2DA5E4
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r26)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r26, 0x3C
  stw       r5, 0xC(r26)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r26)
  stw       r5, 0x4(r26)
  stfs      f0, 0x1C(r26)
  stfs      f0, 0x18(r26)
  stfs      f0, 0x20(r26)
  stfs      f0, 0x24(r26)
  stfs      f0, 0x28(r26)
  stfs      f0, 0x4C(r26)
  stfs      f0, 0x50(r26)
  stfs      f0, 0x54(r26)
  stw       r29, 0x5C(r26)
  stw       r0, 0x2C(r26)
  stw       r5, 0x60(r26)
  sth       r5, 0x48(r26)
  stb       r5, 0x58(r26)
  bl        0x2DA5EC

.loc_0x1B8:
  lfs       f0, 0x1C(r28)
  addi      r3, r31, 0x30
  addi      r4, r28, 0x30
  li        r5, 0x5
  stfs      f0, 0x1C(r31)
  lfs       f0, 0x1C(r31)
  stfs      f0, 0x18(r31)
  bl        -0x775F4
  lwz       r0, 0x38(r28)
  addi      r3, r31, 0x3C
  addi      r4, r28, 0x3C
  li        r5, 0x5
  stw       r0, 0x38(r31)
  bl        -0x7760C
  lwz       r0, 0x44(r28)
  mr        r3, r28
  stw       r0, 0x44(r31)
  lfs       f0, 0x20(r28)
  stfs      f0, 0x20(r31)
  lfs       f0, 0x24(r28)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x28(r28)
  stfs      f0, 0x28(r31)
  lbz       r0, 0x58(r28)
  stb       r0, 0x58(r31)
  lwz       r0, 0x2C(r28)
  stw       r0, 0x2C(r31)
  lwz       r0, 0x5C(r28)
  stw       r0, 0x5C(r31)
  lwz       r0, 0x60(r28)
  stw       r0, 0x60(r31)
  lhz       r0, 0x48(r28)
  sth       r0, 0x48(r31)
  stw       r29, 0x5C(r31)
  lwz       r12, 0x0(r28)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r27, 0x10(r28)
  mr        r28, r3
  li        r26, 0
  b         .loc_0x288

.loc_0x260:
  mr        r3, r27
  mr        r4, r29
  mr        r5, r30
  bl        .loc_0x0
  mr        r0, r3
  mr        r3, r31
  mr        r4, r0
  bl        0x2D8654
  lwz       r27, 0x4(r27)
  addi      r26, r26, 0x1

.loc_0x288:
  cmpw      r26, r28
  blt+      .loc_0x260
  mr        r3, r31
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	80138DE0
 * Size:	000020
 */
void CollPart::getChildCount()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2D887C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80138E00
 * Size:	00035C
 */
void CollPart::read(Stream &, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r18, 0x8(r1)
  mr        r30, r4
  mr        r24, r3
  mr        r31, r5
  mr        r3, r30
  bl        0x2DBC70
  mr        r19, r3
  mr        r3, r30
  bl        0x2DBF80
  stfs      f1, 0x1C(r24)
  mr        r4, r30
  addi      r3, r24, 0x30
  lfs       f0, 0x1C(r24)
  stfs      f0, 0x18(r24)
  bl        0x2DA6AC
  mr        r4, r30
  addi      r3, r24, 0x3C
  bl        0x2DA6A0
  mr        r4, r30
  addi      r3, r24, 0x20
  bl        0x2D8B34
  mr        r3, r30
  bl        0x2DBC2C
  stw       r3, 0x2C(r24)
  mr        r3, r30
  bl        0x2DB8F4
  lis       r4, 0x8048
  sth       r3, 0x48(r24)
  rlwinm    r28,r31,0,24,31
  li        r23, 0
  subi      r29, r4, 0x39D0
  b         .loc_0x340

.loc_0x8C:
  cmplwi    r28, 0
  beq-      .loc_0xB8
  li        r3, 0x68
  bl        -0x114FF4
  mr.       r0, r3
  beq-      .loc_0xB0
  lwz       r4, 0x5C(r24)
  bl        0x40C
  mr        r0, r3

.loc_0xB0:
  mr        r25, r0
  b         .loc_0x154

.loc_0xB8:
  li        r3, 0x64
  bl        -0x115018
  mr.       r20, r3
  beq-      .loc_0x150
  lwz       r21, 0x5C(r24)
  mr        r18, r20
  bl        0x2D84C0
  lis       r4, 0x804B
  addi      r3, r18, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r18)
  bl        0x2DA38C
  addi      r3, r18, 0x3C
  bl        0x2DA384
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r18)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r18, 0x3C
  stw       r5, 0xC(r18)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r18)
  stw       r5, 0x4(r18)
  stfs      f0, 0x1C(r18)
  stfs      f0, 0x18(r18)
  stfs      f0, 0x20(r18)
  stfs      f0, 0x24(r18)
  stfs      f0, 0x28(r18)
  stfs      f0, 0x4C(r18)
  stfs      f0, 0x50(r18)
  stfs      f0, 0x54(r18)
  stw       r21, 0x5C(r18)
  stw       r0, 0x2C(r18)
  stw       r5, 0x60(r18)
  sth       r5, 0x48(r18)
  stb       r5, 0x58(r18)
  bl        0x2DA38C

.loc_0x150:
  mr        r25, r20

.loc_0x154:
  mr        r3, r30
  bl        0x2DBB38
  mr        r27, r3
  mr        r3, r30
  bl        0x2DBE48
  stfs      f1, 0x1C(r25)
  mr        r4, r30
  addi      r3, r25, 0x30
  lfs       f0, 0x1C(r25)
  stfs      f0, 0x18(r25)
  bl        0x2DA574
  mr        r4, r30
  addi      r3, r25, 0x3C
  bl        0x2DA568
  mr        r4, r30
  addi      r3, r25, 0x20
  bl        0x2D89FC
  mr        r3, r30
  bl        0x2DBAF4
  stw       r3, 0x2C(r25)
  mr        r3, r30
  bl        0x2DB7BC
  sth       r3, 0x48(r25)
  li        r26, 0
  b         .loc_0x324

.loc_0x1B8:
  cmplwi    r28, 0
  beq-      .loc_0x1E0
  li        r3, 0x68
  bl        -0x115120
  mr.       r20, r3
  beq-      .loc_0x234
  lwz       r4, 0x5C(r25)
  bl        0x2E0
  mr        r20, r3
  b         .loc_0x234

.loc_0x1E0:
  li        r3, 0x64
  bl        -0x115140
  mr.       r20, r3
  beq-      .loc_0x234
  lwz       r21, 0x5C(r25)
  mr        r18, r20
  bl        0x2D8398
  lis       r4, 0x804B
  addi      r3, r18, 0x20
  subi      r0, r4, 0x164
  stw       r0, 0x0(r18)
  bl        -0x19CC4
  addi      r3, r18, 0x30
  bl        0x2DA25C
  addi      r3, r18, 0x3C
  bl        0x2DA254
  addi      r3, r18, 0x4C
  bl        -0x19CDC
  mr        r3, r18
  mr        r4, r21
  bl        -0x2300

.loc_0x234:
  mr        r3, r30
  bl        0x2DBA58
  mr        r22, r3
  mr        r3, r30
  bl        0x2DBD68
  stfs      f1, 0x1C(r20)
  mr        r4, r30
  addi      r3, r20, 0x30
  lfs       f0, 0x1C(r20)
  stfs      f0, 0x18(r20)
  bl        0x2DA494
  mr        r4, r30
  addi      r3, r20, 0x3C
  bl        0x2DA488
  mr        r4, r30
  addi      r3, r20, 0x20
  bl        0x2D891C
  mr        r3, r30
  bl        0x2DBA14
  stw       r3, 0x2C(r20)
  mr        r3, r30
  bl        0xFC
  sth       r3, 0x48(r20)
  li        r21, 0
  b         .loc_0x308

.loc_0x298:
  cmplwi    r28, 0
  beq-      .loc_0x2C0
  li        r3, 0x68
  bl        -0x115200
  mr.       r18, r3
  beq-      .loc_0x2DC
  lwz       r4, 0x5C(r20)
  bl        0x200
  mr        r18, r3
  b         .loc_0x2DC

.loc_0x2C0:
  li        r3, 0x64
  bl        -0x115220
  mr.       r18, r3
  beq-      .loc_0x2DC
  lwz       r4, 0x5C(r20)
  bl        -0x2460
  mr        r18, r3

.loc_0x2DC:
  mr        r3, r18
  mr        r4, r30
  mr        r5, r31
  bl        .loc_0x0
  mr        r3, r18
  mr        r4, r29
  bl        0x88
  mr        r3, r20
  mr        r4, r18
  bl        .loc_0x35C
  addi      r21, r21, 0x1

.loc_0x308:
  cmpw      r21, r22
  blt+      .loc_0x298
  stw       r29, 0x14(r20)
  mr        r3, r25
  mr        r4, r20
  bl        0x2D82EC
  addi      r26, r26, 0x1

.loc_0x324:
  cmpw      r26, r27
  blt+      .loc_0x1B8
  stw       r29, 0x14(r25)
  mr        r3, r24
  mr        r4, r25
  bl        0x2D82D0
  addi      r23, r23, 0x1

.loc_0x340:
  cmpw      r23, r19
  blt+      .loc_0x8C
  lmw       r18, 0x8(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x35C:
*/
}


/*
 * --INFO--
 * Address:	8013915C
 * Size:	000020
 */
void CollPart::addChild(CollPart *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2D82A0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	8013917C
 * Size:	000008
 */
void CNode::setName(char *)
{
/*
.loc_0x0:
  stw       r4, 0x14(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80139184
 * Size:	000024
 */
void Stream::readU16()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2DB5D4
  lwz       r0, 0x14(r1)
  rlwinm    r3,r3,0,16,31
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801391A8
 * Size:	00010C
 */
void AgeCollPart::draw(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  stw       r29, 0x74(r1)
  mr        r29, r3
  mr        r30, r4
  lwz       r4, 0x2C(r3)
  cmpwi     r4, -0x1
  beq-      .loc_0xE8
  lwz       r3, 0x5C(r29)
  mulli     r0, r4, 0x3C
  lwz       r3, 0x10(r3)
  add.      r31, r3, r0
  beq-      .loc_0xE8
  cmpwi     r4, -0x1
  beq-      .loc_0x94
  addi      r3, r1, 0x8
  bl        -0x4EF5C
  lfs       f0, 0x20(r29)
  stfs      f0, 0x14(r1)
  lfs       f0, 0x24(r29)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x28(r29)
  stfs      f0, 0x34(r1)
  lwz       r3, 0x5C(r29)
  lwz       r4, 0x2C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x8
  addi      r5, r1, 0x38
  bl        -0x4EF38

.loc_0x94:
  lbz       r0, 0x64(r29)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xE8
  lwz       r3, 0x18(r31)
  lfs       f0, -0x6134(r2)
  lfs       f1, 0x38(r3)
  fmr       f31, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xD0
  lwz       r3, 0x5C(r29)
  lfs       f1, -0x6138(r2)
  lwz       r3, 0x10(r3)
  lwz       r3, 0x18(r3)
  lfs       f0, 0x38(r3)
  fmuls     f31, f1, f0

.loc_0xD0:
  mr        r3, r31
  bl        0x2F0624
  fmr       f1, f31
  mr        r4, r3
  mr        r3, r30
  bl        0x2ED380

.loc_0xE8:
  psq_l     f31,0x88(r1),0,0
  lwz       r0, 0x94(r1)
  lfd       f31, 0x80(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r29, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}


/*
 * --INFO--
 * Address:	801392B4
 * Size:	0000CC
 */
void AgeCollPart::AgeCollPart(SysShape::Model *)
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
  bl        0x2D80C0
  lis       r4, 0x804B
  addi      r3, r30, 0x30
  subi      r0, r4, 0x164
  stw       r0, 0x0(r30)
  bl        0x2D9F8C
  addi      r3, r30, 0x3C
  bl        0x2D9F84
  li        r5, 0
  lis       r4, 0x5F5F
  stw       r5, 0x10(r30)
  li        r0, -0x1
  lfs       f0, -0x6150(r2)
  addi      r3, r30, 0x3C
  stw       r5, 0xC(r30)
  addi      r4, r4, 0x5F5F
  stw       r5, 0x8(r30)
  stw       r5, 0x4(r30)
  stfs      f0, 0x1C(r30)
  stfs      f0, 0x18(r30)
  stfs      f0, 0x20(r30)
  stfs      f0, 0x24(r30)
  stfs      f0, 0x28(r30)
  stfs      f0, 0x4C(r30)
  stfs      f0, 0x50(r30)
  stfs      f0, 0x54(r30)
  stw       r31, 0x5C(r30)
  stw       r0, 0x2C(r30)
  stw       r5, 0x60(r30)
  sth       r5, 0x48(r30)
  stb       r5, 0x58(r30)
  bl        0x2D9F8C
  lis       r3, 0x804B
  li        r0, 0
  subi      r4, r3, 0x200
  mr        r3, r30
  stw       r4, 0x0(r30)
  stb       r0, 0x64(r30)
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
 * Address:	80139380
 * Size:	000070
 */
void AgeCollPart::~AgeCollPart()
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
  subi      r0, r4, 0x200
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x164
  stw       r0, 0x0(r30)
  bl        0x2D81C8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x11531C

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
 * Address:	801393F0
 * Size:	000008
 */
void CollPart::isMouth()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	801393F8
 * Size:	000004
 */
void CollPart::constructor()
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	801393FC
 * Size:	000004
 */
void CollPart::doAnimation()
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139400
 * Size:	000004
 */
void CollPart::doEntry()
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139404
 * Size:	000004
 */
void CollPart::doSetView(unsigned long)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139408
 * Size:	000004
 */
void CollPart::doViewCalc()
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	8013940C
 * Size:	000004
 */
void CollPart::doSimulation(float)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139410
 * Size:	000004
 */
void CollPart::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139414
 * Size:	000070
 */
void CollPartFactory::~CollPartFactory()
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
  subi      r0, r4, 0x1CC
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x164
  stw       r0, 0x0(r30)
  bl        0x2D8134

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x1153B0

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
 * Address:	80139484
 * Size:	000008
 */
void MouthCollPart::isMouth()
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}


/*
 * --INFO--
 * Address:	8013948C
 * Size:	0000D4
 */
void Sys::OBB::~OBB()
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
  beq-      .loc_0xB8
  lis       r3, 0x804B
  addic.    r0, r30, 0xD8
  subi      r0, r3, 0x130
  stw       r0, 0x0(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addic.    r0, r30, 0xD8
  subi      r0, r3, 0x64
  stw       r0, 0xD8(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addic.    r0, r30, 0xD8
  subi      r0, r3, 0xAC
  stw       r0, 0xD8(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addic.    r0, r30, 0xD8
  subi      r0, r3, 0xF4
  stw       r0, 0xD8(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addic.    r0, r30, 0xD8
  subi      r0, r3, 0x120
  stw       r0, 0xD8(r30)
  beq-      .loc_0x9C
  lis       r4, 0x804B
  addi      r3, r30, 0xD8
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0xD8(r30)
  bl        0x2D8064

.loc_0x9C:
  mr        r3, r30
  li        r4, 0
  bl        0x2D8058
  extsh.    r0, r31
  ble-      .loc_0xB8
  mr        r3, r30
  bl        -0x11548C

.loc_0xB8:
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
 * Address:	80139560
 * Size:	000070
 */
void Container<int>::~Container()
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
  subi      r0, r4, 0x120
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x2D7FE8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x1154FC

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
 * Address:	801395D0
 * Size:	000080
 */
void ArrayContainer<int>::~ArrayContainer()
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
  subi      r0, r4, 0xF4
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804B
  subi      r0, r4, 0x120
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x2D7F68

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x11557C

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
 * Address:	80139650
 * Size:	00004C
 */
void ArrayContainer<int>::alloc(int)
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
  rlwinm    r3,r4,2,0,29
  bl        -0x1156C4
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
 * Address:	8013969C
 * Size:	0000B0
 */
void ArrayContainer<int>::read(Stream &)
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
  bl        0x2DB3CC
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
  addi      r31, r31, 0x4
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
 * Address:	8013974C
 * Size:	000004
 */
void ArrayContainer<int>::readObject(Stream &, int &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139750
 * Size:	000034
 */
void Sys::IndexList::readObject(Stream &, int &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  bl        0x2DB328
  stw       r3, 0x0(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80139784
 * Size:	000028
 */
void Sys::IndexList::writeObject(Stream &, int &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  lwz       r4, 0x0(r5)
  bl        0x2DC028
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801397AC
 * Size:	000090
 */
void Sys::IndexList::~IndexList()
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
  subi      r0, r4, 0xAC
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804B
  subi      r0, r4, 0xF4
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804B
  subi      r0, r4, 0x120
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x5324
  stw       r0, 0x0(r30)
  bl        0x2D7D7C

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x115768

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


/*
 * --INFO--
 * Address:	8013983C
 * Size:	000010
 */
void ArrayContainer<Vector3<float>>::setArray(Vector3<float> *, int)
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
 * Address:	8013984C
 * Size:	000040
 */
void ArrayContainer<Vector3<float>>::addOne(Vector3<float> &)
{
/*
.loc_0x0:
  lwz       r7, 0x1C(r3)
  lwz       r0, 0x20(r3)
  cmpw      r7, r0
  bgelr-    
  lwz       r6, 0x24(r3)
  addi      r5, r7, 0x1
  mulli     r0, r7, 0xC
  stw       r5, 0x1C(r3)
  lfs       f0, 0x0(r4)
  add       r3, r6, r0
  stfs      f0, 0x0(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8013988C
 * Size:	000060
 */
void MonoObjectMgr<CollPart>::birth()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0xA0
  cmpwi     r3, -0x1
  beq-      .loc_0x48
  lwz       r6, 0x28(r31)
  li        r0, 0
  lwz       r4, 0x2C(r31)
  mulli     r5, r3, 0x64
  stbx      r0, r4, r3
  add       r3, r6, r5
  lwz       r4, 0x20(r31)
  addi      r0, r4, 0x1
  stw       r0, 0x20(r31)
  b         .loc_0x4C

.loc_0x48:
  li        r3, 0

.loc_0x4C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	801398EC
 * Size:	000054
 */
void MonoObjectMgr<CollPart>::kill(CollPart *)
{
/*
.loc_0x0:
  lwz       r0, 0x24(r3)
  li        r6, 0
  li        r5, 0
  mtctr     r0
  cmpwi     r0, 0
  blelr-    

.loc_0x18:
  lwz       r0, 0x28(r3)
  add       r0, r0, r5
  cmplw     r0, r4
  bne-      .loc_0x44
  lwz       r4, 0x2C(r3)
  li        r0, 0x1
  stbx      r0, r4, r6
  lwz       r4, 0x20(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x20(r3)
  blr       

.loc_0x44:
  addi      r5, r5, 0x64
  addi      r6, r6, 0x1
  bdnz+     .loc_0x18
  blr
*/
}


/*
 * --INFO--
 * Address:	80139940
 * Size:	00003C
 */
void MonoObjectMgr<CollPart>::getEmptyIndex()
{
/*
.loc_0x0:
  lwz       r0, 0x24(r3)
  li        r5, 0
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x34

.loc_0x14:
  lwz       r4, 0x2C(r3)
  lbzx      r0, r4, r5
  cmplwi    r0, 0x1
  bne-      .loc_0x2C
  mr        r3, r5
  blr       

.loc_0x2C:
  addi      r5, r5, 0x1
  bdnz+     .loc_0x14

.loc_0x34:
  li        r3, -0x1
  blr
*/
}


/*
 * --INFO--
 * Address:	8013997C
 * Size:	000004
 */
void ArrayContainer<Vector3<float>>::writeObject(Stream &, Vector3<float> &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139980
 * Size:	0000D4
 */
void ArrayContainer<Vector3<float>>::write(Stream &)
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
  bl        0x2DA67C
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        0x2DAA88
  lwz       r4, 0x20(r27)
  mr        r3, r28
  bl        0x2DBE08
  mr        r3, r28
  subi      r4, r2, 0x6130
  crclr     6, 0x6
  bl        0x2DA814
  lis       r3, 0x8048
  li        r29, 0
  subi      r31, r3, 0x39C4
  li        r30, 0
  b         .loc_0xAC

.loc_0x60:
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        0x2DAA4C
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
  bl        0x2DA7BC
  addi      r30, r30, 0xC
  addi      r29, r29, 0x1

.loc_0xAC:
  lwz       r0, 0x20(r27)
  cmpw      r29, r0
  blt+      .loc_0x60
  mr        r3, r28
  bl        0x2DA664
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A54
 * Size:	000010
 */
void ArrayContainer<Vector3<float>>::get(void *)
{
/*
.loc_0x0:
  mulli     r0, r4, 0xC
  lwz       r3, 0x24(r3)
  add       r3, r3, r0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A64
 * Size:	000008
 */
void ArrayContainer<Vector3<float>>::getNext(void *)
{
/*
.loc_0x0:
  addi      r3, r4, 0x1
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A6C
 * Size:	000008
 */
void ArrayContainer<Vector3<float>>::getStart()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A74
 * Size:	000008
 */
void ArrayContainer<Vector3<float>>::getEnd()
{
/*
.loc_0x0:
  lwz       r3, 0x1C(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A7C
 * Size:	000010
 */
void ArrayContainer<Vector3<float>>::getAt(int)
{
/*
.loc_0x0:
  mulli     r0, r4, 0xC
  lwz       r3, 0x24(r3)
  add       r3, r3, r0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A8C
 * Size:	000008
 */
void ArrayContainer<Vector3<float>>::getTo()
{
/*
.loc_0x0:
  lwz       r3, 0x20(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A94
 * Size:	000004
 */
void ArrayContainer<int>::writeObject(Stream &, int &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	80139A98
 * Size:	0000D4
 */
void ArrayContainer<int>::write(Stream &)
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
  bl        0x2DA564
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        0x2DA970
  lwz       r4, 0x20(r27)
  mr        r3, r28
  bl        0x2DBCF0
  mr        r3, r28
  subi      r4, r2, 0x6130
  crclr     6, 0x6
  bl        0x2DA6FC
  lis       r3, 0x8048
  li        r29, 0
  subi      r31, r3, 0x39C4
  li        r30, 0
  b         .loc_0xAC

.loc_0x60:
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        0x2DA934
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
  bl        0x2DA6A4
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0xAC:
  lwz       r0, 0x20(r27)
  cmpw      r29, r0
  blt+      .loc_0x60
  mr        r3, r28
  bl        0x2DA54C
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	80139B6C
 * Size:	00002C
 */
void ArrayContainer<int>::addOne(int &)
{
/*
.loc_0x0:
  lwz       r7, 0x1C(r3)
  lwz       r0, 0x20(r3)
  cmpw      r7, r0
  bgelr-    
  lwz       r6, 0x0(r4)
  addi      r4, r7, 0x1
  lwz       r5, 0x24(r3)
  rlwinm    r0,r7,2,0,29
  stw       r4, 0x1C(r3)
  stwx      r6, r5, r0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139B98
 * Size:	000010
 */
void ArrayContainer<int>::setArray(int *, int)
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
 * Address:	80139BA8
 * Size:	000010
 */
void ArrayContainer<int>::get(void *)
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  rlwinm    r0,r4,2,0,29
  add       r3, r3, r0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139BB8
 * Size:	000008
 */
void ArrayContainer<int>::getNext(void *)
{
/*
.loc_0x0:
  addi      r3, r4, 0x1
  blr
*/
}


/*
 * --INFO--
 * Address:	80139BC0
 * Size:	000008
 */
void ArrayContainer<int>::getStart()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139BC8
 * Size:	000008
 */
void ArrayContainer<int>::getEnd()
{
/*
.loc_0x0:
  lwz       r3, 0x1C(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80139BD0
 * Size:	000010
 */
void ArrayContainer<int>::getAt(int)
{
/*
.loc_0x0:
  lwz       r3, 0x24(r3)
  rlwinm    r0,r4,2,0,29
  add       r3, r3, r0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139BE0
 * Size:	000008
 */
void ArrayContainer<int>::getTo()
{
/*
.loc_0x0:
  lwz       r3, 0x20(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80139BE8
 * Size:	00002C
 */
void Container<Vector3<float>>::getObject(void *)
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
 * Address:	80139C14
 * Size:	000008
 */
void Container<Vector3<float>>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139C1C
 * Size:	000008
 */
void Container<Vector3<float>>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139C24
 * Size:	00002C
 */
void Container<int>::getObject(void *)
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
 * Address:	80139C50
 * Size:	000008
 */
void Container<int>::getAt(int)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}


/*
 * --INFO--
 * Address:	80139C58
 * Size:	000008
 */
void Container<int>::getTo()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}
