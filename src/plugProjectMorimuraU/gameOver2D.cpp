

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
 * Address:	80347F48
 * Size:	00006C
 */
void Morimura::TGameOverBase::__ct( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x126C
  lis       r3, 0x804E
  li        r5, 0
  subi      r3, r3, 0x4788
  li        r4, 0x1
  stw       r3, 0x0(r31)
  addi      r6, r3, 0x10
  li        r0, 0x96
  mr        r3, r31
  stw       r6, 0x18(r31)
  stw       r5, 0x7C(r31)
  stb       r5, 0x84(r31)
  stb       r4, 0x85(r31)
  sth       r5, 0x86(r31)
  stw       r5, 0x88(r31)
  sth       r4, 0x8C(r31)
  sth       r0, 0x8E(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80347FB4
 * Size:	0000F0
 */
void Morimura::TGameOverBase::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r3, 0x7C(r3)
  cmplwi    r3, 0
  beq-      .loc_0xD8
  bl        0x948
  lha       r4, 0x86(r31)
  lha       r0, 0x8E(r31)
  lfs       f2, -0x90(r2)
  cmpw      r4, r0
  bge-      .loc_0x6C
  lis       r3, 0x4330
  xoris     r4, r4, 0x8000
  xoris     r0, r0, 0x8000
  stw       r4, 0xC(r1)
  lfd       f2, -0x88(r2)
  stw       r3, 0x8(r1)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f1, f0, f2
  stw       r3, 0x10(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f2
  fdivs     f2, f1, f0

.loc_0x6C:
  lfs       f1, -0x8C(r2)
  lfs       f0, 0x40(r31)
  fmuls     f1, f1, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  stb       r0, 0x84(r31)
  lwz       r3, 0x7C(r31)
  cmplwi    r3, 0
  beq-      .loc_0xA0
  lbz       r4, 0x84(r31)
  bl        0x9EC

.loc_0xA0:
  lha       r3, 0x86(r31)
  lha       r0, 0x8C(r31)
  add       r0, r3, r0
  sth       r0, 0x86(r31)
  lha       r0, 0x86(r31)
  cmpwi     r0, 0
  bge-      .loc_0xC4
  li        r0, 0
  sth       r0, 0x86(r31)

.loc_0xC4:
  lha       r0, 0x86(r31)
  lha       r3, 0x8E(r31)
  cmpw      r0, r3
  ble-      .loc_0xD8
  sth       r3, 0x86(r31)

.loc_0xD8:
  lwz       r0, 0x34(r1)
  li        r3, 0
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803480A4
 * Size:	000240
 */
void Morimura::TGameOverBase::doDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r28, r3
  mr        r29, r4
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x30
  li        r3, 0x1
  li        r4, 0
  bl        -0x25EEE4

.loc_0x30:
  lbz       r0, 0x85(r28)
  addi      r31, r29, 0x190
  cmplwi    r0, 0
  bne-      .loc_0x54
  lwz       r3, 0x7C(r28)
  mr        r4, r29
  mr        r5, r31
  bl        0x914
  b         .loc_0x22C

.loc_0x54:
  bl        -0x263A28
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x263E80
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x2
  li        r7, 0
  bl        -0x263A14
  li        r3, 0x1
  bl        -0x2612C0
  li        r3, 0x4
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x2612A4
  li        r3, 0x1
  bl        -0x25F594
  li        r3, 0
  li        r4, 0xFF
  li        r5, 0xFF
  li        r6, 0x4
  bl        -0x25F744
  li        r3, 0
  li        r4, 0x4
  bl        -0x25FCF0
  li        r3, 0
  bl        -0x25F048
  li        r3, 0x1
  bl        -0x25F024
  lbz       r0, 0x84(r28)
  li        r3, 0x1
  subfic    r0, r0, 0xFF
  rlwinm    r4,r0,0,24,31
  bl        -0x25EEA4
  li        r24, 0
  bl        0xDB08C
  lwz       r0, 0x88(r28)
  lhz       r3, 0x6(r3)
  cmpwi     r0, 0x2
  mr        r30, r3
  beq-      .loc_0x128
  bge-      .loc_0x130
  cmpwi     r0, 0x1
  bge-      .loc_0x11C
  b         .loc_0x130

.loc_0x11C:
  rlwinm    r0,r3,31,17,31
  mr        r30, r0
  b         .loc_0x130

.loc_0x128:
  rlwinm    r0,r3,31,17,31
  mr        r24, r0

.loc_0x130:
  bl        0xDB050
  lhz       r5, 0x4(r3)
  rlwinm    r25,r24,0,16,31
  rlwinm    r26,r30,0,16,31
  li        r3, 0
  mr        r4, r25
  mr        r6, r26
  bl        -0x25EA18
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x262878
  li        r0, 0
  lis       r3, 0xCC01
  sth       r0, -0x8000(r3)
  mr        r27, r25
  sth       r24, -0x8000(r3)
  sth       r0, -0x8000(r3)
  bl        0xDB008
  lhz       r4, 0x4(r3)
  lis       r3, 0xCC01
  li        r0, 0
  sth       r4, -0x8000(r3)
  sth       r27, -0x8000(r3)
  sth       r0, -0x8000(r3)
  bl        0xDAFEC
  lhz       r3, 0x4(r3)
  lis       r4, 0xCC01
  li        r0, 0
  sth       r3, -0x8000(r4)
  li        r3, 0
  sth       r30, -0x8000(r4)
  sth       r0, -0x8000(r4)
  sth       r0, -0x8000(r4)
  sth       r30, -0x8000(r4)
  sth       r0, -0x8000(r4)
  lbz       r4, 0x84(r28)
  bl        -0x25EF7C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  bl        0xDAFA4
  lhz       r5, 0x4(r3)
  mr        r4, r25
  mr        r6, r26
  li        r3, 0
  bl        -0x25EABC
  lwz       r3, 0x7C(r28)
  cmplwi    r3, 0
  beq-      .loc_0x20C
  mr        r4, r29
  mr        r5, r31
  bl        0x720

.loc_0x20C:
  bl        0xDAF74
  lhz       r28, 0x6(r3)
  bl        0xDAF6C
  lhz       r5, 0x4(r3)
  mr        r6, r28
  li        r3, 0
  li        r4, 0
  bl        -0x25EAF4

.loc_0x22C:
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Morimura::TGameOverBase::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803482E4
 * Size:	0000AC
 */
void Morimura::TGameOver2D::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r31, r4, 0x2F8
  stw       r30, 0x78(r3)
  li        r3, 0x20
  sth       r0, 0x86(r29)
  stb       r0, 0x84(r29)
  bl        -0x32447C
  mr.       r0, r3
  beq-      .loc_0x58
  mr        r4, r30
  li        r5, 0x3
  bl        0x2DC
  mr        r0, r3

.loc_0x58:
  stw       r0, 0x7C(r29)
  addi      r4, r31, 0xC
  lis       r5, 0x104
  lwz       r3, 0x7C(r29)
  bl        0x2E8
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x24
  bl        0x4F4
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x3C
  bl        0x4E8
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x54
  bl        0x4DC
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
 * Address:	80348390
 * Size:	0000A0
 */
void Morimura::TOrimaDown2D::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r31, r4, 0x2F8
  stw       r30, 0x78(r3)
  li        r3, 0x20
  sth       r0, 0x86(r29)
  stb       r0, 0x84(r29)
  bl        -0x324528
  mr.       r0, r3
  beq-      .loc_0x58
  mr        r4, r30
  li        r5, 0x2
  bl        0x230
  mr        r0, r3

.loc_0x58:
  stw       r0, 0x7C(r29)
  addi      r4, r31, 0x70
  lis       r5, 0x104
  lwz       r3, 0x7C(r29)
  bl        0x23C
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x84
  bl        0x448
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x98
  bl        0x43C
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
 * Address:	80348430
 * Size:	0000A0
 */
void Morimura::TLujiDown2D::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r31, r4, 0x2F8
  stw       r30, 0x78(r3)
  li        r3, 0x20
  sth       r0, 0x86(r29)
  stb       r0, 0x84(r29)
  bl        -0x3245C8
  mr.       r0, r3
  beq-      .loc_0x58
  mr        r4, r30
  li        r5, 0x2
  bl        0x190
  mr        r0, r3

.loc_0x58:
  stw       r0, 0x7C(r29)
  addi      r4, r31, 0xB0
  lis       r5, 0x104
  lwz       r3, 0x7C(r29)
  bl        0x19C
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0xC4
  bl        0x3A8
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0xD8
  bl        0x39C
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
 * Address:	803484D0
 * Size:	0000A0
 */
void Morimura::TPresidentDown2D::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r31, r4, 0x2F8
  stw       r30, 0x78(r3)
  li        r3, 0x20
  sth       r0, 0x86(r29)
  stb       r0, 0x84(r29)
  bl        -0x324668
  mr.       r0, r3
  beq-      .loc_0x58
  mr        r4, r30
  li        r5, 0x2
  bl        0xF0
  mr        r0, r3

.loc_0x58:
  stw       r0, 0x7C(r29)
  addi      r4, r31, 0xF0
  lis       r5, 0x104
  lwz       r3, 0x7C(r29)
  bl        0xFC
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x108
  bl        0x308
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x120
  bl        0x2FC
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
 * Address:	80348570
 * Size:	0000A0
 */
void Morimura::TPikminDown2D::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r31, r4, 0x2F8
  stw       r30, 0x78(r3)
  li        r3, 0x20
  sth       r0, 0x86(r29)
  stb       r0, 0x84(r29)
  bl        -0x324708
  mr.       r0, r3
  beq-      .loc_0x58
  mr        r4, r30
  li        r5, 0x2
  bl        .loc_0xA0
  mr        r0, r3

.loc_0x58:
  stw       r0, 0x7C(r29)
  addi      r4, r31, 0x13C
  lis       r5, 0x104
  lwz       r3, 0x7C(r29)
  bl        0x5C
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x150
  bl        0x268
  lwz       r3, 0x7C(r29)
  addi      r4, r31, 0x164
  bl        0x25C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xA0:
*/
}

/*
 * --INFO--
 * Address:	80348610
 * Size:	000024
 */
void Morimura::TGameOverScreen::__ct( (JKRArchive *, int))
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  li        r0, 0
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r5, 0x10(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80348634
 * Size:	000218
 */
void Morimura::TGameOverScreen::init( (char const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  lis       r6, 0x8049
  stw       r0, 0x84(r1)
  stmw      r27, 0x6C(r1)
  mr        r30, r3
  mr        r28, r4
  mr        r27, r5
  addi      r31, r6, 0x2F8
  li        r3, 0x148
  bl        -0x3247B8
  mr.       r0, r3
  beq-      .loc_0x3C
  bl        0xEC744
  mr        r0, r3

.loc_0x3C:
  stw       r0, 0x4(r30)
  mr        r4, r28
  mr        r5, r27
  lwz       r3, 0x4(r30)
  lwz       r6, 0x0(r30)
  bl        -0x309060
  li        r3, 0x148
  bl        -0x3247E8
  mr.       r0, r3
  beq-      .loc_0x6C
  bl        0xEC714
  mr        r0, r3

.loc_0x6C:
  stw       r0, 0x18(r30)
  mr        r4, r28
  mr        r5, r27
  lwz       r3, 0x18(r30)
  lwz       r6, 0x0(r30)
  bl        -0x309090
  li        r4, 0x1
  li        r7, 0x7
  li        r6, 0x6
  li        r3, 0
  li        r0, 0x9
  stb       r4, 0xC(r1)
  addi      r5, r1, 0x1C
  addi      r4, r31, 0x17C
  stb       r7, 0xD(r1)
  stb       r6, 0xE(r1)
  stb       r3, 0xF(r1)
  mtctr     r0

.loc_0xB4:
  lwz       r3, 0x4(r4)
  lwzu      r0, 0x8(r4)
  stw       r3, 0x4(r5)
  stwu      r0, 0x8(r5)
  bdnz+     .loc_0xB4
  li        r3, 0x1A8
  bl        -0x32485C
  mr.       r29, r3
  beq-      .loc_0x118
  lfs       f1, -0x80(r2)
  lis       r4, 0x7465
  lfs       f0, -0x7C(r2)
  addi      r6, r4, 0x7374
  stfs      f1, 0x10(r1)
  addi      r7, r1, 0x10
  li        r5, 0
  subi      r8, r2, 0x78
  stfs      f1, 0x14(r1)
  lis       r9, 0x110
  stfs      f0, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x2F3600
  lis       r3, 0x804E
  subi      r0, r3, 0x4B40
  stw       r0, 0x0(r29)

.loc_0x118:
  stw       r29, 0xC(r30)
  lwz       r3, 0x4(r30)
  lwz       r4, 0xC(r30)
  bl        -0x311094
  li        r28, 0
  addi      r29, r1, 0x20

.loc_0x130:
  cmpwi     r28, 0x3
  blt-      .loc_0x140
  cmpwi     r28, 0x8
  blt-      .loc_0x1D4

.loc_0x140:
  lwz       r3, 0x4(r30)
  lwz       r5, 0x0(r29)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r27, r3
  bne-      .loc_0x178
  addi      r3, r31, 0x1C8
  addi      r5, r31, 0x1D8
  li        r4, 0x12A
  crclr     6, 0x6
  bl        -0x31E168

.loc_0x178:
  lwz       r3, 0x4(r30)
  mr        r4, r27
  bl        -0x310F80
  lwz       r3, 0x4(r30)
  mr        r4, r27
  bl        -0x3110FC
  cmpwi     r28, 0x3
  bge-      .loc_0x1D4
  mr        r3, r27
  lwz       r0, 0xC(r1)
  lwz       r12, 0x0(r27)
  stw       r0, 0x8(r1)
  lwz       r12, 0x13C(r12)
  mtctr     r12
  bctrl     
  lbz       r4, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r4, 0x7C(r3)
  lbz       r4, 0xA(r1)
  stb       r0, 0x7D(r3)
  lbz       r0, 0xB(r1)
  stb       r4, 0x7E(r3)
  stb       r0, 0x7F(r3)

.loc_0x1D4:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x8
  cmpwi     r28, 0x9
  blt+      .loc_0x130
  lwz       r0, 0x10(r30)
  rlwinm    r3,r0,2,0,29
  bl        -0x324874
  stw       r3, 0x8(r30)
  lwz       r0, 0x10(r30)
  rlwinm    r3,r0,2,0,29
  bl        -0x324884
  stw       r3, 0x1C(r30)
  lmw       r27, 0x6C(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8034884C
 * Size:	0000D0
 */
void Morimura::TGameOverScreen::addAnim( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x44
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        -0x3249C8
  mr.       r4, r3
  beq-      .loc_0x34
  bl        -0x439F0
  mr        r4, r3

.loc_0x34:
  lwz       r0, 0x14(r31)
  mr        r6, r30
  lwz       r3, 0x8(r31)
  rlwinm    r0,r0,2,0,29
  stwx      r4, r3, r0
  lwz       r0, 0x14(r31)
  lwz       r3, 0x8(r31)
  rlwinm    r0,r0,2,0,29
  lwz       r4, 0x0(r31)
  lwzx      r3, r3, r0
  lwz       r5, 0x4(r31)
  bl        -0x43988
  li        r3, 0x44
  bl        -0x324A10
  mr.       r4, r3
  beq-      .loc_0x7C
  bl        -0x43A38
  mr        r4, r3

.loc_0x7C:
  lwz       r0, 0x14(r31)
  mr        r6, r30
  lwz       r3, 0x1C(r31)
  rlwinm    r0,r0,2,0,29
  stwx      r4, r3, r0
  lwz       r0, 0x14(r31)
  lwz       r3, 0x1C(r31)
  rlwinm    r0,r0,2,0,29
  lwz       r4, 0x0(r31)
  lwzx      r3, r3, r0
  lwz       r5, 0x18(r31)
  bl        -0x439D0
  lwz       r3, 0x14(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x14(r31)
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
 * Address:	8034891C
 * Size:	00008C
 */
void Morimura::TGameOverScreen::update(void)
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
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x70
  li        r30, 0
  li        r31, 0
  b         .loc_0x54

.loc_0x34:
  lwz       r3, 0x8(r29)
  lwzx      r3, r3, r31
  bl        -0x43B48
  lwz       r3, 0x1C(r29)
  lwzx      r3, r3, r31
  bl        -0x43B54
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x54:
  lwz       r0, 0x10(r29)
  cmpw      r30, r0
  blt+      .loc_0x34
  lwz       r3, 0x4(r29)
  bl        -0x307E54
  lwz       r3, 0x18(r29)
  bl        -0x307E5C

.loc_0x70:
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
 * Size:	00023C
 */
void Morimura::addYPos(J2DPane *, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803489A8
 * Size:	000024
 */
void Morimura::TGameOverScreen::setPosY( (float))
{
/*
.loc_0x0:
  lfs       f3, -0x80(r2)
  lfs       f2, 0x243C(r2)
  lfs       f0, 0x2440(r2)
  fadds     f2, f3, f2
  lwz       r3, 0x4(r3)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803489CC
 * Size:	000038
 */
void Morimura::TGameOverScreen::draw( (Graphics &, J2DPerspGraph *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80348A04
 * Size:	000038
 */
void Morimura::TGameOverScreen::orgdraw( (Graphics &, J2DPerspGraph *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x18(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80348A3C
 * Size:	000184
 */
void Morimura::TGameOverScreen::setFadeAlpha( (unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r6, 0x745F
  lis       r5, 0x6566
  stw       r0, 0x14(r1)
  addi      r6, r6, 0x3030
  addi      r5, r5, 0x6563
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r30)
  lis       r5, 0x745F
  lis       r4, 0x6566
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6563
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r30)
  lis       r5, 0x7573
  lis       r4, 0x63
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x656C
  addi      r5, r4, 0x6170
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r30)
  lis       r5, 0x745F
  lis       r4, 0x6566
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x6563
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r30)
  lis       r5, 0x745F
  lis       r4, 0x6566
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6563
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r30)
  lis       r5, 0x7573
  lis       r4, 0x63
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x656C
  addi      r5, r4, 0x6170
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r4, r31
  lwz       r12, 0x24(r12)
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
 * Address:	80348BC0
 * Size:	000060
 */
void Morimura::TGXSetPane::__dt(void)
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
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4B40
  stw       r0, 0x0(r30)
  bl        -0x2F39A4
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x324B4C

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
 * Address:	80348C20
 * Size:	00002C
 */
void Morimura::TGXSetPane::drawSelf( (float, float, float (*)[3][4]))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x1
  stw       r0, 0x14(r1)
  bl        -0x25FB04
  li        r3, 0
  bl        -0x25FAE0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80348C4C
 * Size:	0000DC
 */
void Morimura::TPikminDown2D::__dt(void)
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
  beq-      .loc_0xC0
  lis       r4, 0x804E
  subi      r4, r4, 0x49F4
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4788
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xC88F0
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x32BCB8
  mr        r3, r30
  li        r4, 0
  bl        0xC8890

.loc_0xB0:
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0x324C54

.loc_0xC0:
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
 * Address:	80348D28
 * Size:	000008
 */
void Morimura::TGameOverBase::getDispMemberBase(void)
{
/*
.loc_0x0:
  lwz       r3, 0x80(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80348D30
 * Size:	000034
 */
void Morimura::TGameOverBase::doUpdateFadeout(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x20
  bl        0x5F0
  b         .loc_0x24

.loc_0x20:
  li        r3, 0x1

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80348D64
 * Size:	0000DC
 */
void Morimura::TPresidentDown2D::__dt(void)
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
  beq-      .loc_0xC0
  lis       r4, 0x804E
  subi      r4, r4, 0x4978
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4788
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xC87D8
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x32BDD0
  mr        r3, r30
  li        r4, 0
  bl        0xC8778

.loc_0xB0:
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0x324D6C

.loc_0xC0:
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
 * Address:	80348E40
 * Size:	0000DC
 */
void Morimura::TLujiDown2D::__dt(void)
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
  beq-      .loc_0xC0
  lis       r4, 0x804E
  subi      r4, r4, 0x48FC
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4788
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xC86FC
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x32BEAC
  mr        r3, r30
  li        r4, 0
  bl        0xC869C

.loc_0xB0:
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0x324E48

.loc_0xC0:
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
 * Address:	80348F1C
 * Size:	0000DC
 */
void Morimura::TOrimaDown2D::__dt(void)
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
  beq-      .loc_0xC0
  lis       r4, 0x804E
  subi      r4, r4, 0x4880
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4788
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xC8620
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x32BF88
  mr        r3, r30
  li        r4, 0
  bl        0xC85C0

.loc_0xB0:
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0x324F24

.loc_0xC0:
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
 * Address:	80348FF8
 * Size:	0000DC
 */
void Morimura::TGameOver2D::__dt(void)
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
  beq-      .loc_0xC0
  lis       r4, 0x804E
  subi      r4, r4, 0x4804
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4788
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xB0
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xC8544
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x32C064
  mr        r3, r30
  li        r4, 0
  bl        0xC84E4

.loc_0xB0:
  extsh.    r0, r31
  ble-      .loc_0xC0
  mr        r3, r30
  bl        -0x325000

.loc_0xC0:
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
 * Address:	803490D4
 * Size:	0000C4
 */
void Morimura::TGameOverBase::__dt(void)
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
  beq-      .loc_0xA8
  lis       r4, 0x804E
  subi      r4, r4, 0x4788
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x4708
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xC8480
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x32C128
  mr        r3, r30
  li        r4, 0
  bl        0xC8420

.loc_0x98:
  extsh.    r0, r31
  ble-      .loc_0xA8
  mr        r3, r30
  bl        -0x3250C4

.loc_0xA8:
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
 * Address:	80349198
 * Size:	000008
 */
void @24@Morimura::TGameOverBase::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xC8
*/
}

/*
 * --INFO--
 * Address:	803491A0
 * Size:	000008
 */
void @24@Morimura::TGameOver2D::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x1AC
*/
}

/*
 * --INFO--
 * Address:	803491A8
 * Size:	000008
 */
void @24@Morimura::TOrimaDown2D::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x290
*/
}

/*
 * --INFO--
 * Address:	803491B0
 * Size:	000008
 */
void @24@Morimura::TLujiDown2D::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x374
*/
}

/*
 * --INFO--
 * Address:	803491B8
 * Size:	000008
 */
void @24@Morimura::TPresidentDown2D::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x458
*/
}

/*
 * --INFO--
 * Address:	803491C0
 * Size:	000008
 */
void @24@Morimura::TPikminDown2D::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x578
*/
}
