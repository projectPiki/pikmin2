

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
 * Address:	........
 * Size:	00004C
 */
void ebi::Screen::TResourceObserver::__ct( (ebi::Screen::TMemoryCard *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C2244
 * Size:	00006C
 */
void ebi::Screen::TResourceObserver::__dt(void)
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
  beq-      .loc_0x50
  lis       r3, 0x804E
  addi      r0, r3, 0x7AB8
  stw       r0, 0x0(r30)
  lwz       r3, 0x18(r30)
  bl        0x66C
  mr        r3, r30
  li        r4, 0
  bl        -0x3A524C
  extsh.    r0, r31
  ble-      .loc_0x50
  mr        r3, r30
  bl        -0x39E1DC

.loc_0x50:
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
 * Address:	803C22B0
 * Size:	0000D8
 */
void ebi::Screen::TMemoryCard::loadResource( (JKRHeap *))
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  stw       r30, 0x118(r1)
  addi      r30, r5, 0x6270
  li        r5, 0
  stw       r29, 0x114(r1)
  mr        r29, r4
  stw       r28, 0x110(r1)
  mr        r28, r3
  li        r3, 0x1C
  bl        -0x39E3A4
  mr.       r31, r3
  beq-      .loc_0x54
  bl        -0x3A5324
  lis       r3, 0x804E
  addi      r0, r3, 0x7AB8
  stw       r0, 0x0(r31)
  stw       r28, 0x18(r31)

.loc_0x54:
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x14
  li        r5, 0
  bl        0x6104C
  addi      r3, r1, 0x8
  addi      r4, r30, 0x34
  bl        -0xAA3D0
  mr        r5, r29
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r6, 0x1
  bl        -0x3A7200
  mr.       r31, r3
  bne-      .loc_0xA0
  addi      r3, r30, 0x44
  addi      r5, r30, 0x5C
  li        r4, 0x36
  crclr     6, 0x6
  bl        -0x397D0C

.loc_0xA0:
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x14
  bl        0x6100C
  mr        r3, r28
  mr        r4, r31
  bl        .loc_0xD8
  lwz       r0, 0x124(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r29, 0x114(r1)
  lwz       r28, 0x110(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr       

.loc_0xD8:
*/
}

/*
 * --INFO--
 * Address:	803C2388
 * Size:	00039C
 */
void ebi::Screen::TMemoryCard::setArchive( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r5, 0x6270
  li        r5, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  addi      r4, r31, 0x68
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r3, -0x6514(r13)
  bl        0x60F9C
  li        r3, 0x148
  bl        -0x39E524
  mr.       r0, r3
  beq-      .loc_0x54
  bl        0x729D8
  mr        r0, r3

.loc_0x54:
  stw       r0, 0x1C(r28)
  mr        r6, r29
  addi      r4, r31, 0x88
  lis       r5, 0x110
  lwz       r3, 0x1C(r28)
  bl        -0x382DCC
  lis       r4, 0x735F
  lwz       r3, 0x1C(r28)
  addi      r6, r4, 0x3030
  li        r5, 0x7965
  bl        0x7F54
  stw       r3, 0x20(r28)
  lis       r3, 0x6F5F
  addi      r6, r3, 0x3030
  li        r5, 0x6E
  lwz       r3, 0x1C(r28)
  bl        0x7F3C
  stw       r3, 0x24(r28)
  lis       r5, 0x6572
  lis       r4, 0x7061
  lwz       r3, 0x1C(r28)
  addi      r6, r5, 0x6E31
  addi      r5, r4, 0x7474
  bl        0x7F20
  stw       r3, 0x28(r28)
  lis       r5, 0x6572
  lis       r4, 0x7061
  lwz       r3, 0x1C(r28)
  addi      r6, r5, 0x6E32
  addi      r5, r4, 0x7474
  bl        0x7F04
  stw       r3, 0x2C(r28)
  lis       r3, 0x6C5F
  addi      r6, r3, 0x3030
  li        r5, 0x69
  lwz       r3, 0x1C(r28)
  bl        0x7EEC
  stw       r3, 0x30(r28)
  lis       r3, 0x725F
  addi      r6, r3, 0x3030
  li        r5, 0x69
  lwz       r3, 0x1C(r28)
  bl        0x7ED4
  stw       r3, 0x38(r28)
  lis       r3, 0x6C5F
  addi      r6, r3, 0x3031
  li        r5, 0x69
  lwz       r3, 0x1C(r28)
  bl        0x7EBC
  stw       r3, 0x34(r28)
  lis       r3, 0x725F
  addi      r6, r3, 0x3031
  li        r5, 0x69
  lwz       r3, 0x1C(r28)
  bl        0x7EA4
  stw       r3, 0x3C(r28)
  lis       r5, 0x6F6C
  lis       r4, 0x73
  lwz       r3, 0x1C(r28)
  addi      r6, r5, 0x6F72
  addi      r5, r4, 0x5F63
  bl        0x7E88
  lwz       r4, 0x20(r28)
  li        r5, 0x31
  li        r0, 0
  mr        r30, r3
  stw       r5, 0x1C(r4)
  stw       r0, 0x18(r4)
  lwz       r3, 0x24(r28)
  stw       r5, 0x1C(r3)
  stw       r0, 0x18(r3)
  lwz       r3, 0x28(r28)
  stw       r5, 0x1C(r3)
  stw       r0, 0x18(r3)
  lwz       r3, 0x2C(r28)
  stw       r5, 0x1C(r3)
  stw       r0, 0x18(r3)
  lwz       r3, 0x1C(r28)
  mr        r4, r3
  bl        0x8404
  lwz       r3, 0x1C(r28)
  bl        0x809C
  li        r0, 0
  li        r4, 0
  stb       r0, 0xB0(r30)
  lwz       r3, 0x30(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r28)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x34(r28)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x3C(r28)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0xD8
  mr        r4, r3
  bl        0x726C4
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0x114
  lwz       r4, 0x28(r28)
  bl        0x726B4
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0x150
  lwz       r4, 0x2C(r28)
  bl        0x726A4
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0x18C
  lwz       r4, 0x20(r28)
  bl        0x72694
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0x1C8
  lwz       r4, 0x24(r28)
  bl        0x72684
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0x204
  mr        r4, r3
  bl        0x72674
  lis       r6, 0x2
  mr        r5, r29
  addi      r3, r28, 0xD8
  addi      r4, r31, 0x98
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        0xE4CC
  lis       r6, 0x2
  mr        r5, r29
  addi      r3, r28, 0x114
  addi      r4, r31, 0xA8
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        0xE4B0
  lis       r6, 0x2
  mr        r5, r29
  addi      r3, r28, 0x150
  addi      r4, r31, 0xC4
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        0xE494
  lis       r6, 0x2
  mr        r5, r29
  addi      r3, r28, 0x18C
  addi      r4, r31, 0xE0
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        0xE478
  lis       r6, 0x2
  mr        r5, r29
  addi      r3, r28, 0x1C8
  addi      r4, r31, 0xF4
  subi      r7, r6, 0x7961
  li        r6, 0
  bl        0xE45C
  lwz       r5, -0x6514(r13)
  addi      r3, r28, 0xD8
  lfs       f1, 0x1548(r2)
  li        r4, 0x2
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        0xE504
  lwz       r4, 0x24(r28)
  mr        r5, r30
  addi      r3, r28, 0x40
  bl        .loc_0x39C
  lwz       r4, 0x24(r28)
  mr        r5, r30
  addi      r3, r28, 0x8C
  bl        .loc_0x39C
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0x40
  lwz       r4, 0x20(r28)
  bl        0x72598
  lwz       r3, 0x1C(r28)
  addi      r5, r28, 0x8C
  lwz       r4, 0x24(r28)
  bl        0x72588
  lwz       r3, 0x34(r28)
  addi      r4, r31, 0x68
  lwz       r0, 0x30(r28)
  stw       r0, 0x254(r28)
  stw       r3, 0x258(r28)
  lwz       r3, 0x3C(r28)
  lwz       r0, 0x38(r28)
  stw       r0, 0x28C(r28)
  stw       r3, 0x290(r28)
  lwz       r3, -0x6514(r13)
  bl        0x60C64
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x39C:
*/
}

/*
 * --INFO--
 * Address:	803C2724
 * Size:	0001BC
 */
void ebi::E2DCallBack_BlinkFontColor::set( (J2DTextBox *, J2DTextBox *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r5
  stw       r30, 0x38(r1)
  mr        r30, r3
  addi      r3, r1, 0x20
  stw       r29, 0x34(r1)
  mr        r29, r4
  lwz       r0, 0x104(r4)
  stw       r0, 0x18(r1)
  lbz       r5, 0x18(r1)
  lbz       r0, 0x19(r1)
  stb       r5, 0x20(r30)
  lbz       r5, 0x1A(r1)
  stb       r0, 0x21(r30)
  lbz       r0, 0x1B(r1)
  stb       r5, 0x22(r30)
  stb       r0, 0x23(r30)
  lwz       r0, 0x108(r4)
  stw       r0, 0x1C(r1)
  lbz       r5, 0x1C(r1)
  lbz       r0, 0x1D(r1)
  stb       r5, 0x24(r30)
  lbz       r5, 0x1E(r1)
  stb       r0, 0x25(r30)
  lbz       r0, 0x1F(r1)
  stb       r5, 0x26(r30)
  stb       r0, 0x27(r30)
  lwz       r12, 0x0(r4)
  lwz       r12, 0xB4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x20(r1)
  mr        r4, r29
  addi      r3, r1, 0x24
  stb       r0, 0x28(r30)
  lbz       r0, 0x21(r1)
  stb       r0, 0x29(r30)
  lbz       r0, 0x22(r1)
  stb       r0, 0x2A(r30)
  lbz       r0, 0x23(r1)
  stb       r0, 0x2B(r30)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xB0(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x24(r1)
  mr        r4, r31
  addi      r3, r1, 0x10
  stb       r0, 0x2C(r30)
  lbz       r0, 0x25(r1)
  stb       r0, 0x2D(r30)
  lbz       r0, 0x26(r1)
  stb       r0, 0x2E(r30)
  lbz       r0, 0x27(r1)
  stb       r0, 0x2F(r30)
  lwz       r0, 0x104(r31)
  stw       r0, 0x8(r1)
  lbz       r5, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r5, 0x30(r30)
  lbz       r5, 0xA(r1)
  stb       r0, 0x31(r30)
  lbz       r0, 0xB(r1)
  stb       r5, 0x32(r30)
  stb       r0, 0x33(r30)
  lwz       r0, 0x108(r31)
  stw       r0, 0xC(r1)
  lbz       r5, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r5, 0x34(r30)
  lbz       r5, 0xE(r1)
  stb       r0, 0x35(r30)
  lbz       r0, 0xF(r1)
  stb       r5, 0x36(r30)
  stb       r0, 0x37(r30)
  lwz       r12, 0x0(r31)
  lwz       r12, 0xB4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x10(r1)
  mr        r4, r31
  addi      r3, r1, 0x14
  stb       r0, 0x38(r30)
  lbz       r0, 0x11(r1)
  stb       r0, 0x39(r30)
  lbz       r0, 0x12(r1)
  stb       r0, 0x3A(r30)
  lbz       r0, 0x13(r1)
  stb       r0, 0x3B(r30)
  lwz       r12, 0x0(r31)
  lwz       r12, 0xB0(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x14(r1)
  stb       r0, 0x3C(r30)
  lbz       r0, 0x15(r1)
  stb       r0, 0x3D(r30)
  lbz       r0, 0x16(r1)
  stb       r0, 0x3E(r30)
  lbz       r0, 0x17(r1)
  stb       r0, 0x3F(r30)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803C28E0
 * Size:	000018
 */
void ebi::Screen::TMemoryCard::destroyResource(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x20(r3)
  stw       r0, 0x24(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803C28F8
 * Size:	001208
 */
void ebi::Screen::TMemoryCard::open( (long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr.       r30, r4
  blt-      .loc_0x30
  cmpwi     r30, 0x2C
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x62B4
  li        r4, 0xA2
  addi      r5, r5, 0x62CC
  crclr     6, 0x6
  bl        -0x398308

.loc_0x54:
  li        r3, 0
  li        r0, 0x1E
  stb       r3, 0x294(r31)
  cmplwi    r30, 0x2B
  stw       r0, 0x10(r31)
  stw       r0, 0x14(r31)
  bgt-      .loc_0x11F0
  lis       r3, 0x804E
  rlwinm    r0,r30,2,0,29
  addi      r3, r3, 0x7A08
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  mr        r3, r31
  li        r4, 0x3
  bl        0x1650
  li        r0, 0
  stw       r0, 0x10(r31)
  stw       r0, 0x14(r31)
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A378
  lis       r3, 0x305F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3435
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x15E4
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A3D8
  lis       r3, 0x315F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3435
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x1584
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A438
  lis       r3, 0x325F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3435
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x1524
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A498
  lis       r3, 0x335F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3435
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x14C4
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A4F8
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x345F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x355F
  lis       r3, 0x365F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3435
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0xFC0
  mr        r3, r31
  li        r4, 0x1
  bl        0x1438
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A584
  lis       r3, 0x375F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3435
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x13D8
  b         .loc_0x11F0
  lis       r3, 0x385F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3435
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x1388
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A634
  lis       r3, 0x395F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3435
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x1328
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0x8A694
  lis       r3, 0x305F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3436
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x12C8
  b         .loc_0x11F0
  li        r0, 0x1
  lis       r3, 0x315F
  stb       r0, 0x294(r31)
  lis       r4, 0x35
  addi      r6, r3, 0x3030
  mr        r3, r31
  lwz       r5, 0x28(r31)
  addi      r0, r4, 0x3436
  li        r4, 0x2
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x1270
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x325F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x335F
  lis       r3, 0x345F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3436
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0xD7C
  mr        r3, r31
  li        r4, 0x1
  bl        0x11F4
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A7C8
  lis       r3, 0x355F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3436
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x1194
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x365F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x375F
  lis       r3, 0x385F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3436
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0xCA0
  mr        r3, r31
  li        r4, 0x1
  bl        0x1118
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r9, r4, 0x3030
  lis       r4, 0x35
  lis       r5, 0x30
  stw       r9, 0x1C(r3)
  addi      r0, r5, 0x3030
  lis       r5, 0x395F
  stw       r0, 0x18(r3)
  lis       r3, 0x315F
  addi      r8, r5, 0x3030
  addi      r7, r4, 0x3436
  lwz       r5, 0x2C(r31)
  addi      r6, r4, 0x3437
  addi      r0, r3, 0x3030
  mr        r3, r31
  stw       r8, 0x1C(r5)
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r9, 0x1C(r5)
  stw       r6, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r6, 0x18(r5)
  bl        0xC28
  mr        r3, r31
  li        r4, 0x1
  bl        0x10A0
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x325F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x335F
  lis       r3, 0x345F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3437
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0xBAC
  mr        r3, r31
  li        r4, 0x1
  bl        0x1024
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A998
  lis       r3, 0x355F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3437
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xFC4
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8A9F8
  lis       r3, 0x365F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3437
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xF64
  b         .loc_0x11F0
  li        r0, 0x1
  lis       r3, 0x375F
  stb       r0, 0x294(r31)
  lis       r4, 0x35
  addi      r6, r3, 0x3030
  mr        r3, r31
  lwz       r5, 0x28(r31)
  addi      r0, r4, 0x3437
  li        r4, 0x2
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xF0C
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0x8AAB0
  lis       r3, 0x385F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3437
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xEAC
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8AB10
  lis       r3, 0x315F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xE4C
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8AB70
  lis       r3, 0x325F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xDEC
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8ABD0
  lis       r3, 0x335F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xD8C
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8AC30
  lis       r3, 0x345F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xD2C
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8AC90
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x325F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x335F
  lis       r3, 0x345F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3539
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0x828
  mr        r3, r31
  li        r4, 0x1
  bl        0xCA0
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8AD1C
  lis       r3, 0x355F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xC40
  b         .loc_0x11F0
  lis       r3, 0x365F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xBF0
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8ADCC
  lis       r3, 0x375F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xB90
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0x8AE2C
  lis       r3, 0x385F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3535
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xB30
  b         .loc_0x11F0
  li        r0, 0x1
  lis       r3, 0x395F
  stb       r0, 0x294(r31)
  lis       r4, 0x35
  addi      r6, r3, 0x3030
  mr        r3, r31
  lwz       r5, 0x28(r31)
  addi      r0, r4, 0x3535
  li        r4, 0x2
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xAD8
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r8, r4, 0x3030
  lis       r4, 0x30
  stw       r8, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x35
  lis       r4, 0x315F
  stw       r0, 0x18(r3)
  lis       r3, 0x325F
  addi      r7, r5, 0x3536
  addi      r6, r4, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r0, r3, 0x3030
  mr        r3, r31
  li        r4, 0
  stw       r8, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0x5EC
  mr        r3, r31
  li        r4, 0x1
  bl        0xA64
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8AF58
  lis       r3, 0x335F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3536
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0xA04
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x345F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x355F
  lis       r3, 0x365F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3536
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0x510
  mr        r3, r31
  li        r4, 0x1
  bl        0x988
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x375F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x385F
  lis       r3, 0x395F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3536
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0x494
  mr        r3, r31
  li        r4, 0x1
  bl        0x90C
  b         .loc_0x11F0
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r8, r4, 0x3030
  lis       r4, 0x30
  stw       r8, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x35
  lis       r4, 0x315F
  stw       r0, 0x18(r3)
  lis       r3, 0x325F
  addi      r7, r5, 0x3537
  addi      r6, r4, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r0, r3, 0x3030
  mr        r3, r31
  li        r4, 0
  stw       r8, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0x420
  mr        r3, r31
  li        r4, 0x1
  bl        0x898
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8B124
  lis       r3, 0x335F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3537
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x838
  b         .loc_0x11F0
  li        r0, 0x1
  lis       r3, 0x345F
  stb       r0, 0x294(r31)
  lis       r4, 0x35
  addi      r6, r3, 0x3030
  mr        r3, r31
  lwz       r5, 0x28(r31)
  addi      r0, r4, 0x3537
  li        r4, 0x2
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x7E0
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8B1DC
  lis       r3, 0x355F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3537
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x780
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0x8B23C
  lis       r3, 0x365F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3537
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x720
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8B29C
  lis       r3, 0x375F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3537
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x6C0
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8B2FC
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r9, r4, 0x3030
  lis       r4, 0x35
  lis       r5, 0x30
  stw       r9, 0x1C(r3)
  addi      r0, r5, 0x3030
  lis       r5, 0x385F
  stw       r0, 0x18(r3)
  lis       r3, 0x395F
  addi      r8, r5, 0x3030
  addi      r7, r4, 0x3537
  lwz       r5, 0x2C(r31)
  addi      r6, r3, 0x3030
  addi      r0, r4, 0x3538
  mr        r3, r31
  stw       r8, 0x1C(r5)
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r9, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x1C0
  mr        r3, r31
  li        r4, 0x1
  bl        0x638
  b         .loc_0x11F0
  li        r0, 0x1
  lis       r3, 0x315F
  stb       r0, 0x294(r31)
  lis       r4, 0x35
  addi      r6, r3, 0x3030
  mr        r3, r31
  lwz       r5, 0x28(r31)
  addi      r0, r4, 0x3538
  li        r4, 0x2
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x5E0
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0x8B3DC
  lis       r4, 0x305F
  lwz       r3, 0x28(r31)
  addi      r0, r4, 0x3030
  lis       r4, 0x30
  stw       r0, 0x1C(r3)
  addi      r0, r4, 0x3030
  lis       r5, 0x325F
  lis       r6, 0x35
  stw       r0, 0x18(r3)
  lis       r4, 0x335F
  lis       r3, 0x345F
  addi      r8, r5, 0x3030
  lwz       r5, 0x2C(r31)
  addi      r7, r6, 0x3538
  addi      r6, r4, 0x3030
  addi      r0, r3, 0x3030
  stw       r8, 0x1C(r5)
  mr        r3, r31
  li        r4, 0
  stw       r7, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r7, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r0, 0x1C(r5)
  stw       r7, 0x18(r5)
  bl        0xDC
  mr        r3, r31
  li        r4, 0x1
  bl        0x554
  b         .loc_0x11F0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0x8B468
  lis       r3, 0x355F
  lwz       r5, 0x28(r31)
  addi      r6, r3, 0x3030
  lis       r3, 0x35
  stw       r6, 0x1C(r5)
  addi      r0, r3, 0x3538
  mr        r3, r31
  li        r4, 0x2
  stw       r0, 0x18(r5)
  lwz       r5, 0x2C(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x20(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  lwz       r5, 0x24(r31)
  stw       r6, 0x1C(r5)
  stw       r0, 0x18(r5)
  bl        0x4F4

.loc_0x11F0:
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
 * Address:	803C3B00
 * Size:	000030
 */
void ebi::Screen::TMemoryCard::close(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x20
  li        r4, 0x3
  bl        0x4BC

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803C3B30
 * Size:	000024
 */
void ebi::Screen::TMemoryCard::killScreen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  bl        0x498
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803C3B54
 * Size:	000334
 */
void ebi::Screen::TMemoryCard::setSelect_( (bool))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r3
  stw       r30, 0x68(r1)
  stb       r4, 0x18(r3)
  lbz       r0, 0x18(r3)
  cmplwi    r0, 0
  beq-      .loc_0x19C
  li        r0, 0
  stb       r0, 0x5C(r31)
  lwz       r3, 0x58(r31)
  cmplwi    r3, 0
  beq-      .loc_0xD4
  lwz       r7, 0x60(r31)
  mr        r30, r3
  addi      r4, r1, 0x60
  stw       r7, 0x24(r1)
  lbz       r5, 0x24(r1)
  lbz       r0, 0x25(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x26(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x27(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0x64(r31)
  stw       r7, 0x58(r1)
  stw       r6, 0x20(r1)
  lbz       r5, 0x20(r1)
  lbz       r0, 0x21(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x22(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x23(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0x68(r31)
  stw       r6, 0x5C(r1)
  stw       r0, 0x60(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x6C(r31)
  mr        r3, r30
  addi      r4, r1, 0x64
  stw       r0, 0x64(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0xD4:
  li        r0, 0
  stb       r0, 0xA8(r31)
  lwz       r3, 0xA4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x180
  lwz       r7, 0xAC(r31)
  mr        r30, r3
  addi      r4, r1, 0x50
  stw       r7, 0x1C(r1)
  lbz       r5, 0x1C(r1)
  lbz       r0, 0x1D(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x1E(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x1F(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0xB0(r31)
  stw       r7, 0x48(r1)
  stw       r6, 0x18(r1)
  lbz       r5, 0x18(r1)
  lbz       r0, 0x19(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x1A(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x1B(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0xB4(r31)
  stw       r6, 0x4C(r1)
  stw       r0, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xB8(r31)
  mr        r3, r30
  addi      r4, r1, 0x54
  stw       r0, 0x54(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x180:
  lfs       f0, 0x154C(r2)
  li        r0, 0x1
  stfs      f0, 0x24C(r31)
  stb       r0, 0x250(r31)
  stfs      f0, 0x284(r31)
  stb       r0, 0x288(r31)
  b         .loc_0x30C

.loc_0x19C:
  li        r0, 0
  stb       r0, 0x5C(r31)
  lwz       r3, 0x58(r31)
  cmplwi    r3, 0
  beq-      .loc_0x248
  lwz       r7, 0x60(r31)
  mr        r30, r3
  addi      r4, r1, 0x40
  stw       r7, 0x14(r1)
  lbz       r5, 0x14(r1)
  lbz       r0, 0x15(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x16(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x17(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0x64(r31)
  stw       r7, 0x38(r1)
  stw       r6, 0x10(r1)
  lbz       r5, 0x10(r1)
  lbz       r0, 0x11(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x12(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x13(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0x68(r31)
  stw       r6, 0x3C(r1)
  stw       r0, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x6C(r31)
  mr        r3, r30
  addi      r4, r1, 0x44
  stw       r0, 0x44(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x248:
  li        r0, 0
  stb       r0, 0xA8(r31)
  lwz       r3, 0xA4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x2F4
  lwz       r7, 0xAC(r31)
  mr        r30, r3
  addi      r4, r1, 0x30
  stw       r7, 0xC(r1)
  lbz       r5, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0xE(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0xF(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0xB0(r31)
  stw       r7, 0x28(r1)
  stw       r6, 0x8(r1)
  lbz       r5, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0xA(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0xB(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0xB4(r31)
  stw       r6, 0x2C(r1)
  stw       r0, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xB8(r31)
  mr        r3, r30
  addi      r4, r1, 0x34
  stw       r0, 0x34(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x2F4:
  lfs       f0, 0x1550(r2)
  li        r0, 0
  stfs      f0, 0x24C(r31)
  stb       r0, 0x250(r31)
  stfs      f0, 0x284(r31)
  stb       r0, 0x288(r31)

.loc_0x30C:
  addi      r3, r31, 0x224
  bl        .loc_0x334
  addi      r3, r31, 0x25C
  bl        .loc_0x334
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr       

.loc_0x334:
*/
}

/*
 * --INFO--
 * Address:	803C3E88
 * Size:	000128
 */
void ebi::TYesNoCursor::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lwz       r4, 0x30(r3)
  cmplwi    r4, 0
  beq-      .loc_0x114
  lwz       r0, 0x34(r31)
  cmplwi    r0, 0
  beq-      .loc_0x114
  addi      r3, r1, 0x20
  bl        0x6E40
  lfs       f1, 0x20(r1)
  addi      r3, r1, 0x18
  lfs       f0, 0x24(r1)
  stfs      f1, 0x30(r1)
  lwz       r4, 0x34(r31)
  stfs      f0, 0x34(r1)
  bl        0x6E24
  lbz       r0, 0x2C(r31)
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  cmplwi    r0, 0
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  beq-      .loc_0x94
  lfs       f2, 0x28(r31)
  lfs       f1, 0x24(r31)
  lfs       f0, 0x154C(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x28(r31)
  lfs       f1, 0x28(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB8
  stfs      f0, 0x28(r31)
  b         .loc_0xB8

.loc_0x94:
  lfs       f2, 0x28(r31)
  lfs       f1, 0x24(r31)
  lfs       f0, 0x1550(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x28(r31)
  lfs       f1, 0x28(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB8
  stfs      f0, 0x28(r31)

.loc_0xB8:
  lwz       r3, 0x28(r1)
  lwz       r0, 0x30(r1)
  stw       r3, 0x8(r1)
  lwz       r3, 0x2C(r1)
  stw       r0, 0x10(r1)
  lwz       r0, 0x34(r1)
  stw       r3, 0xC(r1)
  lfs       f4, 0x28(r31)
  lfs       f0, 0x154C(r2)
  stw       r0, 0x14(r1)
  lfs       f1, 0x10(r1)
  fsubs     f5, f0, f4
  lfs       f0, 0x8(r1)
  lfs       f3, 0xC(r1)
  fmuls     f2, f1, f4
  fmuls     f1, f0, f5
  lfs       f0, 0x14(r1)
  fmuls     f3, f3, f5
  fmuls     f0, f0, f4
  fadds     f1, f2, f1
  fadds     f0, f0, f3
  stfs      f1, 0x1C(r31)
  stfs      f0, 0x20(r31)

.loc_0x114:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803C3FB0
 * Size:	000028
 */
void ebi::Screen::TMemoryCard::isFinish(void)
{
/*
.loc_0x0:
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  bne-      .loc_0x20
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0x3
  bne-      .loc_0x20
  li        r3, 0x1
  blr       

.loc_0x20:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void ebi::Screen::TMemoryCard::isDecide(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C3FD8
 * Size:	0004EC
 */
void ebi::Screen::TMemoryCard::startState( (ebi::Screen::TMemoryCard::enumState))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  stw       r30, 0x38(r1)
  stw       r4, 0x0(r3)
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x3C8
  bge-      .loc_0x3C
  cmpwi     r0, 0
  beq-      .loc_0x48
  bge-      .loc_0x74
  b         .loc_0x4D4

.loc_0x3C:
  cmpwi     r0, 0x4
  bge-      .loc_0x4D4
  b         .loc_0x4C8

.loc_0x48:
  addi      r3, r31, 0x224
  lwz       r12, 0x224(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x25C
  lwz       r12, 0x25C(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x4D4

.loc_0x74:
  addi      r3, r31, 0x224
  lwz       r12, 0x224(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x25C
  lwz       r12, 0x25C(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x28(r31)
  li        r5, 0
  li        r0, 0x1
  li        r4, 0xFF
  stb       r5, 0xB0(r3)
  lwz       r3, 0x2C(r31)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x2C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x20(r31)
  li        r0, 0x1
  li        r4, 0xFF
  stb       r0, 0xB0(r3)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r31)
  li        r0, 0x1
  li        r4, 0xFF
  stb       r0, 0xB0(r3)
  lwz       r3, 0x24(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x18(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x214
  li        r4, 0x1
  lfs       f2, 0x1554(r2)
  stb       r4, 0x5C(r31)
  li        r0, 0
  lfs       f0, 0x1550(r2)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x54(r3)
  fmuls     f1, f2, f1
  stfs      f1, 0x84(r31)
  stfs      f0, 0x80(r31)
  stb       r4, 0x88(r31)
  stb       r0, 0x89(r31)
  stb       r0, 0xA8(r31)
  lwz       r3, 0xA4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x1F8
  lwz       r7, 0xAC(r31)
  mr        r30, r3
  addi      r4, r1, 0x30
  stw       r7, 0x14(r1)
  lbz       r5, 0x14(r1)
  lbz       r0, 0x15(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x16(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x17(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0xB0(r31)
  stw       r7, 0x28(r1)
  stw       r6, 0x10(r1)
  lbz       r5, 0x10(r1)
  lbz       r0, 0x11(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x12(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x13(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0xB4(r31)
  stw       r6, 0x2C(r1)
  stw       r0, 0x30(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xB8(r31)
  mr        r3, r30
  addi      r4, r1, 0x34
  stw       r0, 0x34(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x1F8:
  lfs       f0, 0x154C(r2)
  li        r0, 0x1
  stfs      f0, 0x24C(r31)
  stb       r0, 0x250(r31)
  stfs      f0, 0x284(r31)
  stb       r0, 0x288(r31)
  b         .loc_0x300

.loc_0x214:
  li        r0, 0
  stb       r0, 0x5C(r31)
  lwz       r3, 0x58(r31)
  cmplwi    r3, 0
  beq-      .loc_0x2C0
  lwz       r7, 0x60(r31)
  mr        r30, r3
  addi      r4, r1, 0x20
  stw       r7, 0xC(r1)
  lbz       r5, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0xE(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0xF(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0x64(r31)
  stw       r7, 0x18(r1)
  stw       r6, 0x8(r1)
  lbz       r5, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0xA(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0xB(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0x68(r31)
  stw       r6, 0x1C(r1)
  stw       r0, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x6C(r31)
  mr        r3, r30
  addi      r4, r1, 0x24
  stw       r0, 0x24(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x2C0:
  li        r4, 0x1
  lfs       f2, 0x1554(r2)
  stb       r4, 0xA8(r31)
  li        r0, 0
  lfs       f0, 0x1550(r2)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x54(r3)
  fmuls     f1, f2, f1
  stfs      f1, 0xD0(r31)
  stfs      f0, 0xCC(r31)
  stb       r4, 0xD4(r31)
  stb       r0, 0xD5(r31)
  stfs      f0, 0x24C(r31)
  stb       r0, 0x250(r31)
  stfs      f0, 0x284(r31)
  stb       r0, 0x288(r31)

.loc_0x300:
  addi      r3, r31, 0x224
  li        r4, 0
  lwz       r12, 0x224(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x25C
  li        r4, 0
  lwz       r12, 0x25C(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x14
  lfs       f1, 0x1548(r2)
  stw       r0, 0x8(r31)
  addi      r3, r31, 0x114
  li        r4, 0
  li        r5, 0x1
  stw       r0, 0xC(r31)
  lwz       r6, -0x6514(r13)
  lfs       f0, 0x54(r6)
  fmuls     f1, f1, f0
  bl        0xC868
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x150
  lfs       f1, 0x1548(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        0xC848
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x18C
  lfs       f1, 0x1548(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        0xC828
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x1C8
  lfs       f1, 0x1548(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        0xC808
  lwz       r3, 0x1C(r31)
  bl        -0x38386C
  b         .loc_0x4D4

.loc_0x3C8:
  addi      r3, r31, 0x224
  lwz       r12, 0x224(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x25C
  lwz       r12, 0x25C(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r31)
  li        r5, 0
  li        r0, 0x1
  li        r4, 0xFF
  stb       r5, 0xB0(r3)
  lwz       r3, 0x20(r31)
  stb       r5, 0xB0(r3)
  lwz       r3, 0x24(r31)
  stb       r5, 0xB0(r3)
  lwz       r3, 0x28(r31)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x28(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x14
  lfs       f1, 0x1548(r2)
  stw       r0, 0x8(r31)
  addi      r3, r31, 0x114
  li        r4, 0
  li        r5, 0x1
  stw       r0, 0xC(r31)
  lwz       r6, -0x6514(r13)
  lfs       f0, 0x54(r6)
  fmuls     f1, f1, f0
  bl        0xC768
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x150
  lfs       f1, 0x1548(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        0xC748
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x18C
  lfs       f1, 0x1548(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        0xC728
  lwz       r5, -0x6514(r13)
  addi      r3, r31, 0x1C8
  lfs       f1, 0x1548(r2)
  li        r4, 0
  lfs       f0, 0x54(r5)
  li        r5, 0x1
  fmuls     f1, f1, f0
  bl        0xC708
  lwz       r3, 0x1C(r31)
  bl        -0x38396C
  b         .loc_0x4D4

.loc_0x4C8:
  li        r0, 0x1E
  stw       r0, 0x10(r31)
  stw       r0, 0x14(r31)

.loc_0x4D4:
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
 * Address:	803C44C4
 * Size:	0008C8
 */
void ebi::Screen::TMemoryCard::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0xC0(r1)
  mflr      r0
  stw       r0, 0xC4(r1)
  stw       r31, 0xBC(r1)
  mr        r31, r3
  stw       r30, 0xB8(r1)
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x69C
  bge-      .loc_0x38
  cmpwi     r0, 0
  beq-      .loc_0x8B0
  bge-      .loc_0x44
  b         .loc_0x8B0

.loc_0x38:
  cmpwi     r0, 0x4
  bge-      .loc_0x8B0
  b         .loc_0x74C

.loc_0x44:
  lwz       r3, 0x8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x58
  subi      r0, r3, 0x1
  stw       r0, 0x8(r31)

.loc_0x58:
  lwz       r0, 0x8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x674
  lbz       r0, 0x19(r31)
  cmplwi    r0, 0
  beq-      .loc_0x674
  lwz       r3, 0x4(r31)
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x90
  lfs       f1, 0x48(r3)
  lfs       f0, 0x1558(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x98

.loc_0x90:
  li        r0, 0x1
  b         .loc_0x9C

.loc_0x98:
  li        r0, 0

.loc_0x9C:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x108
  lbz       r0, 0x18(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x674
  li        r6, 0
  li        r0, 0x1
  stb       r6, 0x18(r31)
  li        r4, 0x1802
  lfs       f2, 0x1554(r2)
  li        r5, 0
  stb       r6, 0x88(r31)
  lfs       f0, 0x1550(r2)
  stb       r0, 0x89(r31)
  stb       r0, 0xA8(r31)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x54(r3)
  fmuls     f1, f2, f1
  stfs      f1, 0xD0(r31)
  stfs      f0, 0xCC(r31)
  stb       r0, 0xD4(r31)
  stb       r6, 0xD5(r31)
  stb       r6, 0x250(r31)
  stb       r6, 0x288(r31)
  lwz       r3, -0x67A8(r13)
  bl        -0x8BF94
  b         .loc_0x674

.loc_0x108:
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x124
  lfs       f1, 0x48(r3)
  lfs       f0, 0x155C(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x12C

.loc_0x124:
  li        r0, 0x1
  b         .loc_0x130

.loc_0x12C:
  li        r0, 0

.loc_0x130:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x19C
  lbz       r0, 0x18(r31)
  cmplwi    r0, 0
  bne-      .loc_0x674
  li        r6, 0x1
  lfs       f2, 0x1554(r2)
  stb       r6, 0x18(r31)
  li        r0, 0
  lfs       f0, 0x1550(r2)
  li        r4, 0x1802
  stb       r6, 0x5C(r31)
  li        r5, 0
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x54(r3)
  fmuls     f1, f2, f1
  stfs      f1, 0x84(r31)
  stfs      f0, 0x80(r31)
  stb       r6, 0x88(r31)
  stb       r0, 0x89(r31)
  stb       r0, 0xD4(r31)
  stb       r6, 0xD5(r31)
  stb       r6, 0x250(r31)
  stb       r6, 0x288(r31)
  lwz       r3, -0x67A8(r13)
  bl        -0x8C028
  b         .loc_0x674

.loc_0x19C:
  lwz       r3, 0x1C(r3)
  rlwinm.   r0,r3,0,23,23
  beq-      .loc_0x4C8
  lbz       r0, 0x18(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x328
  li        r0, 0
  stb       r0, 0x5C(r31)
  lwz       r3, 0x58(r31)
  cmplwi    r3, 0
  beq-      .loc_0x260
  lwz       r7, 0x70(r31)
  mr        r30, r3
  addi      r4, r1, 0x90
  stw       r7, 0x34(r1)
  lbz       r5, 0x34(r1)
  lbz       r0, 0x35(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x36(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x37(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0x74(r31)
  stw       r7, 0x88(r1)
  stw       r6, 0x30(r1)
  lbz       r5, 0x30(r1)
  lbz       r0, 0x31(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x32(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x33(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0x78(r31)
  stw       r6, 0x8C(r1)
  stw       r0, 0x90(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x7C(r31)
  mr        r3, r30
  addi      r4, r1, 0x94
  stw       r0, 0x94(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x260:
  li        r0, 0
  stb       r0, 0xA8(r31)
  lwz       r3, 0xA4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x30C
  lwz       r7, 0xAC(r31)
  mr        r30, r3
  addi      r4, r1, 0x80
  stw       r7, 0x2C(r1)
  lbz       r5, 0x2C(r1)
  lbz       r0, 0x2D(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x2E(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x2F(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0xB0(r31)
  stw       r7, 0x78(r1)
  stw       r6, 0x28(r1)
  lbz       r5, 0x28(r1)
  lbz       r0, 0x29(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x2A(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x2B(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0xB4(r31)
  stw       r6, 0x7C(r1)
  stw       r0, 0x80(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xB8(r31)
  mr        r3, r30
  addi      r4, r1, 0x84
  stw       r0, 0x84(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x30C:
  lfs       f0, 0x154C(r2)
  li        r0, 0x1
  stfs      f0, 0x24C(r31)
  stb       r0, 0x250(r31)
  stfs      f0, 0x284(r31)
  stb       r0, 0x288(r31)
  b         .loc_0x498

.loc_0x328:
  li        r0, 0
  stb       r0, 0x5C(r31)
  lwz       r3, 0x58(r31)
  cmplwi    r3, 0
  beq-      .loc_0x3D4
  lwz       r7, 0x60(r31)
  mr        r30, r3
  addi      r4, r1, 0x70
  stw       r7, 0x24(r1)
  lbz       r5, 0x24(r1)
  lbz       r0, 0x25(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x26(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x27(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0x64(r31)
  stw       r7, 0x68(r1)
  stw       r6, 0x20(r1)
  lbz       r5, 0x20(r1)
  lbz       r0, 0x21(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x22(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x23(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0x68(r31)
  stw       r6, 0x6C(r1)
  stw       r0, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x6C(r31)
  mr        r3, r30
  addi      r4, r1, 0x74
  stw       r0, 0x74(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x3D4:
  li        r0, 0
  stb       r0, 0xA8(r31)
  lwz       r3, 0xA4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x480
  lwz       r7, 0xBC(r31)
  mr        r30, r3
  addi      r4, r1, 0x60
  stw       r7, 0x1C(r1)
  lbz       r5, 0x1C(r1)
  lbz       r0, 0x1D(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x1E(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x1F(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0xC0(r31)
  stw       r7, 0x58(r1)
  stw       r6, 0x18(r1)
  lbz       r5, 0x18(r1)
  lbz       r0, 0x19(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x1A(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x1B(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0xC4(r31)
  stw       r6, 0x5C(r1)
  stw       r0, 0x60(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xC8(r31)
  mr        r3, r30
  addi      r4, r1, 0x64
  stw       r0, 0x64(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x480:
  lfs       f0, 0x1550(r2)
  li        r0, 0
  stfs      f0, 0x24C(r31)
  stb       r0, 0x250(r31)
  stfs      f0, 0x284(r31)
  stb       r0, 0x288(r31)

.loc_0x498:
  addi      r3, r31, 0x224
  bl        -0xAD8
  addi      r3, r31, 0x25C
  bl        -0xAE0
  mr        r3, r31
  li        r4, 0x3
  bl        -0x99C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1800
  li        r5, 0
  bl        -0x8C354
  b         .loc_0x8B0

.loc_0x4C8:
  rlwinm.   r0,r3,0,22,22
  beq-      .loc_0x674
  li        r0, 0
  stb       r0, 0x18(r31)
  stb       r0, 0x5C(r31)
  lwz       r3, 0x58(r31)
  cmplwi    r3, 0
  beq-      .loc_0x580
  lwz       r7, 0x60(r31)
  mr        r30, r3
  addi      r4, r1, 0x50
  stw       r7, 0x14(r1)
  lbz       r5, 0x14(r1)
  lbz       r0, 0x15(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0x16(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0x17(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0x64(r31)
  stw       r7, 0x48(r1)
  stw       r6, 0x10(r1)
  lbz       r5, 0x10(r1)
  lbz       r0, 0x11(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0x12(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0x13(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0x68(r31)
  stw       r6, 0x4C(r1)
  stw       r0, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x6C(r31)
  mr        r3, r30
  addi      r4, r1, 0x54
  stw       r0, 0x54(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x580:
  li        r0, 0
  stb       r0, 0xA8(r31)
  lwz       r3, 0xA4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x62C
  lwz       r7, 0xBC(r31)
  mr        r30, r3
  addi      r4, r1, 0x40
  stw       r7, 0xC(r1)
  lbz       r5, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r5, 0x104(r3)
  lbz       r5, 0xE(r1)
  stb       r0, 0x105(r3)
  lbz       r0, 0xF(r1)
  stb       r5, 0x106(r3)
  stb       r0, 0x107(r3)
  lwz       r6, 0xC0(r31)
  stw       r7, 0x38(r1)
  stw       r6, 0x8(r1)
  lbz       r5, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r5, 0x108(r3)
  lbz       r5, 0xA(r1)
  stb       r0, 0x109(r3)
  lbz       r0, 0xB(r1)
  stb       r5, 0x10A(r3)
  stb       r0, 0x10B(r3)
  lwz       r0, 0xC4(r31)
  stw       r6, 0x3C(r1)
  stw       r0, 0x40(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xC8(r31)
  mr        r3, r30
  addi      r4, r1, 0x44
  stw       r0, 0x44(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x62C:
  lfs       f0, 0x1550(r2)
  li        r0, 0
  addi      r3, r31, 0x224
  stfs      f0, 0x24C(r31)
  stb       r0, 0x250(r31)
  stfs      f0, 0x284(r31)
  stb       r0, 0x288(r31)
  bl        -0xC84
  addi      r3, r31, 0x25C
  bl        -0xC8C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1801
  li        r5, 0
  bl        -0x8C4F4
  mr        r3, r31
  li        r4, 0x3
  bl        -0xB58
  b         .loc_0x8B0

.loc_0x674:
  addi      r3, r31, 0x224
  bl        -0xCB4
  addi      r3, r31, 0x25C
  bl        -0xCBC
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x8B0

.loc_0x69C:
  lwz       r3, 0x8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x6B0
  subi      r0, r3, 0x1
  stw       r0, 0x8(r31)

.loc_0x6B0:
  lwz       r0, 0x8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x718
  lwz       r3, 0x4(r31)
  li        r4, 0
  lwz       r3, 0x1C(r3)
  rlwinm.   r0,r3,0,23,23
  bne-      .loc_0x6F0
  rlwinm.   r0,r3,0,22,22
  bne-      .loc_0x6F0
  rlwinm.   r0,r3,0,21,21
  bne-      .loc_0x6F0
  rlwinm.   r0,r3,0,20,20
  bne-      .loc_0x6F0
  rlwinm.   r0,r3,0,19,19
  beq-      .loc_0x6F4

.loc_0x6F0:
  li        r4, 0x1

.loc_0x6F4:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x718
  lbz       r0, 0x19(r31)
  cmplwi    r0, 0
  beq-      .loc_0x718
  mr        r3, r31
  li        r4, 0x3
  bl        -0xBFC
  b         .loc_0x8B0

.loc_0x718:
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x294(r31)
  cmplwi    r0, 0
  beq-      .loc_0x8B0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x100B
  li        r5, 0
  bl        -0x8C5D8
  b         .loc_0x8B0

.loc_0x74C:
  lwz       r3, 0x10(r31)
  cmplwi    r3, 0
  beq-      .loc_0x760
  subi      r0, r3, 0x1
  stw       r0, 0x10(r31)

.loc_0x760:
  lwz       r4, 0x14(r31)
  cmplwi    r4, 0
  beq-      .loc_0x7A0
  lwz       r3, 0x10(r31)
  lis       r0, 0x4330
  stw       r0, 0x98(r1)
  lfd       f2, 0x1568(r2)
  stw       r3, 0x9C(r1)
  lfd       f0, 0x98(r1)
  stw       r4, 0xA4(r1)
  fsubs     f1, f0, f2
  stw       r0, 0xA0(r1)
  lfd       f0, 0xA0(r1)
  fsubs     f0, f0, f2
  fdivs     f1, f1, f0
  b         .loc_0x7A4

.loc_0x7A0:
  lfs       f1, 0x1550(r2)

.loc_0x7A4:
  lfs       f0, 0x1560(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x89C
  addi      r3, r31, 0x224
  lwz       r12, 0x224(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x25C
  lwz       r12, 0x25C(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x14(r31)
  cmplwi    r4, 0
  beq-      .loc_0x818
  lwz       r3, 0x10(r31)
  lis       r0, 0x4330
  stw       r0, 0xA0(r1)
  lfd       f2, 0x1568(r2)
  stw       r3, 0xA4(r1)
  lfd       f0, 0xA0(r1)
  stw       r4, 0x9C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x98(r1)
  lfd       f0, 0x98(r1)
  fsubs     f0, f0, f2
  fdivs     f1, f1, f0
  b         .loc_0x81C

.loc_0x818:
  lfs       f1, 0x1550(r2)

.loc_0x81C:
  lfs       f0, 0x1560(r2)
  lwz       r3, 0x20(r31)
  fdivs     f0, f1, f0
  lfs       f1, 0x1564(r2)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0xA8(r1)
  lwz       r0, 0xAC(r1)
  rlwinm    r30,r0,0,24,31
  mr        r4, r30
  mtctr     r12
  bctrl     
  lwz       r3, 0x24(r31)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x28(r31)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r31)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x89C:
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x8B0:
  lwz       r0, 0xC4(r1)
  lwz       r31, 0xBC(r1)
  lwz       r30, 0xB8(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	803C4D8C
 * Size:	000080
 */
void ebi::Screen::TMemoryCard::draw(void)
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
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0
  beq-      .loc_0x64
  lwz       r3, -0x6514(r13)
  lwz       r31, 0x24(r3)
  addi      r30, r31, 0x190
  lwz       r12, 0x0(r30)
  mr        r3, r30
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1C(r29)
  mr        r4, r31
  mr        r5, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x64:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}
