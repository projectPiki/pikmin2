

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
 * Address:	801A04CC
 * Size:	000070
 */
void getInfo__Q26PikiAI9ActAttackFPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x24(r1)
  lwzu      r11, -0xD54(r5)
  lhz       r0, 0x18(r3)
  lis       r3, 0x8048
  lwz       r10, 0x4(r5)
  subi      r6, r3, 0xD40
  lwz       r9, 0x8(r5)
  mr        r3, r4
  lwz       r8, 0xC(r5)
  rlwinm    r0,r0,2,0,29
  lwz       r7, 0x10(r5)
  addi      r5, r1, 0x8
  stw       r11, 0x8(r1)
  mr        r4, r6
  stw       r10, 0xC(r1)
  stw       r9, 0x10(r1)
  stw       r8, 0x14(r1)
  stw       r7, 0x18(r1)
  lwzx      r5, r5, r0
  crclr     6, 0x6
  bl        -0xD90F0
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801A053C
 * Size:	000044
 */
void emotion_success__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x13
  stw       r0, 0x14(r1)
  li        r0, 0x1
  addi      r6, r1, 0x8
  sth       r0, 0x8(r1)
  lwz       r4, 0x4(r3)
  lwz       r3, 0x28C(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
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
 * Address:	801A0580
 * Size:	0000D4
 */
void __ct__Q26PikiAI9ActAttackFPQ24Game4Piki(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r5
  beq-      .loc_0x38
  addi      r0, r31, 0x38
  lis       r3, 0x804B
  stw       r0, 0xC(r31)
  subi      r0, r3, 0x5994
  stw       r0, 0x38(r31)

.loc_0x38:
  mr        r3, r31
  mr        r4, r30
  bl        -0x9BA8
  lis       r3, 0x804B
  addi      r0, r31, 0x38
  addi      r4, r3, 0x4EB0
  li        r3, 0x2C
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x40
  lwz       r4, 0xC(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0xC(r31)
  sub       r0, r0, r4
  stw       r0, 0x4(r4)
  bl        -0x17C74C
  mr.       r0, r3
  beq-      .loc_0x8C
  mr        r5, r30
  li        r4, 0x1
  bl        -0x494C
  mr        r0, r3

.loc_0x8C:
  stw       r0, 0x1C(r31)
  li        r3, 0x28
  bl        -0x17C770
  mr.       r0, r3
  beq-      .loc_0xAC
  mr        r4, r30
  bl        -0x9174
  mr        r0, r3

.loc_0xAC:
  stw       r0, 0x20(r31)
  subi      r0, r2, 0x52D4
  mr        r3, r31
  stw       r0, 0x8(r31)
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
 * Address:	801A0654
 * Size:	00011C
 */
void init__Q26PikiAI9ActAttackFPQ26PikiAI9ActionArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr.       r29, r4
  lis       r4, 0x8048
  stw       r28, 0x10(r1)
  mr        r28, r3
  subi      r31, r4, 0xD60
  beq-      .loc_0x64
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x2C
  bl        -0xD5FE4
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  beq-      .loc_0x64
  li        r30, 0x1

.loc_0x64:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x80
  addi      r3, r31, 0x3C
  addi      r5, r31, 0x4C
  li        r4, 0x90
  crclr     6, 0x6
  bl        -0x176090

.loc_0x80:
  lwz       r0, 0x4(r29)
  stw       r0, 0x10(r28)
  lwz       r0, 0x8(r29)
  stw       r0, 0x14(r28)
  lwz       r3, 0x4(r28)
  bl        -0x1174
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xAC
  mr        r3, r28
  bl        .loc_0x11C
  b         .loc_0xF4

.loc_0xAC:
  bl        -0xD7160
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f3, -0x52C0(r2)
  stw       r0, 0x8(r1)
  lfs       f1, -0x52CC(r2)
  lfd       f2, 0x8(r1)
  lfs       f0, -0x52C8(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xEC
  mr        r3, r28
  bl        0x164
  b         .loc_0xF4

.loc_0xEC:
  mr        r3, r28
  bl        0xB0

.loc_0xF4:
  li        r0, 0
  stb       r0, 0x36(r28)
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x11C:
*/
}

/*
 * --INFO--
 * Address:	801A0770
 * Size:	000084
 */
void initStickAttack__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r3, 0x4(r3)
  bl        -0x5729C
  lwz       r5, 0x10(r31)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r4, r3, 0x4EA4
  li        r3, 0x2
  li        r0, 0
  stw       r4, 0x8(r1)
  addi      r4, r1, 0x8
  stfs      f1, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r3, 0x14(r1)
  stb       r0, 0x18(r1)
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  sth       r0, 0x18(r31)
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801A07F4
 * Size:	0000A8
 */
void initAdjust__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  bl        0x1CC
  lis       r3, 0x804B
  lfs       f1, 0x30(r31)
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x4E98
  lfs       f0, -0x52B8(r2)
  li        r3, 0
  stw       r0, 0x8(r1)
  li        r0, 0x1
  fadds     f1, f0, f1
  lfs       f0, -0x52B4(r2)
  lfs       f2, 0x24(r31)
  addi      r4, r1, 0x8
  stfs      f2, 0xC(r1)
  lfs       f2, 0x28(r31)
  stfs      f2, 0x10(r1)
  lfs       f2, 0x2C(r31)
  stb       r3, 0x20(r1)
  stb       r3, 0x21(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  stb       r0, 0x20(r1)
  stb       r0, 0x21(r1)
  sth       r0, 0x18(r31)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801A089C
 * Size:	0000AC
 */
void initJumpAdjust__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  bl        0x124
  lis       r3, 0x804B
  lfs       f1, 0x30(r31)
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x4E98
  lfs       f0, -0x52B8(r2)
  li        r5, 0
  stw       r0, 0x8(r1)
  li        r3, 0x1
  fadds     f1, f0, f1
  lfs       f0, -0x52B0(r2)
  lfs       f2, 0x24(r31)
  li        r0, 0x2
  addi      r4, r1, 0x8
  stfs      f2, 0xC(r1)
  lfs       f2, 0x28(r31)
  stfs      f2, 0x10(r1)
  lfs       f2, 0x2C(r31)
  stb       r5, 0x20(r1)
  stb       r5, 0x21(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  stb       r3, 0x20(r1)
  stb       r3, 0x21(r1)
  sth       r0, 0x18(r31)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801A0948
 * Size:	00008C
 */
void applicable__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r3, 0x4(r3)
  bl        -0x13EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2C
  li        r3, 0x1
  b         .loc_0x78

.loc_0x2C:
  mr        r3, r31
  bl        .loc_0x8C
  lwz       r4, 0x4(r31)
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x28(r31)
  lfs       f1, 0xC(r1)
  lfs       f0, -0x52AC(r2)
  fsubs     f1, f2, f1
  fabs      f1, f1
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r0,r0,2,31,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31

.loc_0x78:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x8C:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void initJump__Q26PikiAI9ActAttackFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A09D4
 * Size:	0001C4
 */
void calcAttackPos__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  li        r31, 0
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r29, r3
  lwz       r3, 0x10(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x98
  lwz       r30, 0x10(r29)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x38
  beq-      .loc_0x94
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x45
  beq-      .loc_0x94
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x42
  bne-      .loc_0x98

.loc_0x94:
  li        r31, 0x1

.loc_0x98:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x160
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r4, r4, 0x4E8C
  addi      r0, r1, 0x8
  stw       r4, 0x8(r1)
  addi      r3, r3, 0x4E80
  addi      r4, r1, 0x28
  stw       r3, 0x8(r1)
  stw       r0, 0x24(r1)
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r29)
  addi      r4, r1, 0x24
  lwz       r3, 0x114(r3)
  bl        -0x6A0B4
  cmplwi    r3, 0
  beq-      .loc_0x114
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x24(r29)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x28(r29)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x2C(r29)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x30(r29)
  b         .loc_0x1A8

.loc_0x114:
  lwz       r4, 0x10(r29)
  addi      r3, r1, 0x18
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x18(r1)
  stfs      f0, 0x24(r29)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x28(r29)
  lfs       f0, 0x20(r1)
  stfs      f0, 0x2C(r29)
  lwz       r3, 0x10(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r29)
  b         .loc_0x1A8

.loc_0x160:
  lwz       r4, 0x10(r29)
  addi      r3, r1, 0xC
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  stfs      f0, 0x24(r29)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x28(r29)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x2C(r29)
  lwz       r3, 0x10(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r29)

.loc_0x1A8:
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
 * Address:	801A0B98
 * Size:	00094C
 */
void exec__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stw       r31, 0x10C(r1)
  mr        r31, r3
  stw       r30, 0x108(r1)
  stw       r29, 0x104(r1)
  lwz       r3, 0x10(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x40
  li        r3, 0
  b         .loc_0x930

.loc_0x40:
  lhz       r0, 0x18(r31)
  cmplwi    r0, 0x4
  beq-      .loc_0x11C
  lwz       r3, 0x4(r31)
  bl        -0x1674
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x11C
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xCC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x94
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xD0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C

.loc_0x94:
  li        r0, 0x4
  sth       r0, 0x18(r31)
  bl        -0xD7694
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xF4(r1)
  lfd       f3, -0x52C0(r2)
  stw       r0, 0xF0(r1)
  lfs       f1, -0x52CC(r2)
  lfd       f2, 0xF0(r1)
  lfs       f0, -0x5298(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xDC
  li        r0, 0x36
  sth       r0, 0x34(r31)
  b         .loc_0xE4

.loc_0xDC:
  li        r0, 0x35
  sth       r0, 0x34(r31)

.loc_0xE4:
  cmplwi    r31, 0
  mr        r6, r31
  beq-      .loc_0xF4
  lwz       r6, 0xC(r31)

.loc_0xF4:
  lwz       r3, 0x4(r31)
  li        r7, 0
  lha       r4, 0x34(r31)
  lwz       r12, 0x0(r3)
  mr        r5, r4
  lwz       r12, 0x208(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0x36(r31)

.loc_0x11C:
  lwz       r3, -0x6C18(r13)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x160
  lwz       r3, 0x10(r31)
  cmplwi    r3, 0
  beq-      .loc_0x160
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  bl        0x2B8738
  lbz       r4, 0x54(r3)
  addi      r0, r4, 0x1
  stb       r0, 0x54(r3)

.loc_0x160:
  lhz       r0, 0x18(r31)
  cmpwi     r0, 0x3
  beq-      .loc_0x6CC
  bge-      .loc_0x180
  cmpwi     r0, 0
  beq-      .loc_0x18C
  bge-      .loc_0x3D8
  b         .loc_0x92C

.loc_0x180:
  cmpwi     r0, 0x5
  bge-      .loc_0x92C
  b         .loc_0x8E8

.loc_0x18C:
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x1B0
  li        r3, 0
  b         .loc_0x930

.loc_0x1B0:
  cmpwi     r3, 0x2
  bne-      .loc_0x92C
  lwz       r3, 0x4(r31)
  bl        -0x17E0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x92C
  lwz       r3, 0x10(r31)
  li        r30, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x244
  lwz       r29, 0x10(r31)
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x38
  beq-      .loc_0x240
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x45
  beq-      .loc_0x240
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x42
  bne-      .loc_0x244

.loc_0x240:
  li        r30, 0x1

.loc_0x244:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x30C
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r4, r4, 0x4E8C
  addi      r0, r1, 0xC
  stw       r4, 0xC(r1)
  addi      r3, r3, 0x4E80
  addi      r4, r1, 0x80
  stw       r3, 0xC(r1)
  stw       r0, 0x7C(r1)
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  addi      r4, r1, 0x7C
  lwz       r3, 0x114(r3)
  bl        -0x6A424
  cmplwi    r3, 0
  beq-      .loc_0x2C0
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x2C(r31)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x30(r31)
  b         .loc_0x354

.loc_0x2C0:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0x2C
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x2C(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x30(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x34(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)
  b         .loc_0x354

.loc_0x30C:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x38(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x3C(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x40(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)

.loc_0x354:
  lis       r3, 0x804B
  lfs       f0, 0x30(r31)
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0xD4(r1)
  addi      r0, r3, 0x4E98
  lfs       f1, -0x52B8(r2)
  li        r5, 0
  stw       r0, 0xD4(r1)
  li        r3, 0x1
  fadds     f2, f1, f0
  lfs       f0, -0x52B0(r2)
  lfs       f1, 0x24(r31)
  li        r0, 0x2
  addi      r4, r1, 0xD4
  stfs      f1, 0xD8(r1)
  lfs       f1, 0x28(r31)
  stfs      f1, 0xDC(r1)
  lfs       f1, 0x2C(r31)
  stb       r5, 0xEC(r1)
  stb       r5, 0xED(r1)
  stfs      f1, 0xE0(r1)
  stfs      f2, 0xE4(r1)
  stfs      f0, 0xE8(r1)
  stb       r3, 0xEC(r1)
  stb       r3, 0xED(r1)
  sth       r0, 0x18(r31)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x92C

.loc_0x3D8:
  lwz       r3, 0x10(r31)
  li        r29, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x454
  lwz       r30, 0x10(r31)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x38
  beq-      .loc_0x450
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x45
  beq-      .loc_0x450
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x42
  bne-      .loc_0x454

.loc_0x450:
  li        r29, 0x1

.loc_0x454:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x51C
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r4, r4, 0x4E8C
  addi      r0, r1, 0x10
  stw       r4, 0x10(r1)
  addi      r3, r3, 0x4E80
  addi      r4, r1, 0xC4
  stw       r3, 0x10(r1)
  stw       r0, 0xC0(r1)
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  addi      r4, r1, 0xC0
  lwz       r3, 0x114(r3)
  bl        -0x6A634
  cmplwi    r3, 0
  beq-      .loc_0x4D0
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x2C(r31)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x30(r31)
  b         .loc_0x564

.loc_0x4D0:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0x50
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x50(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x54(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x58(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)
  b         .loc_0x564

.loc_0x51C:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0x5C
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x5C(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x60(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x64(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)

.loc_0x564:
  lwz       r3, 0x20(r31)
  lfs       f0, 0x24(r31)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x28(r31)
  stfs      f0, 0x14(r3)
  lfs       f0, 0x2C(r31)
  stfs      f0, 0x18(r3)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x6BC
  lhz       r0, 0x18(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x608
  lwz       r3, 0x4(r31)
  bl        -0x57C58
  lwz       r5, 0x10(r31)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0xAC(r1)
  addi      r4, r3, 0x4EA4
  li        r3, 0x2
  li        r0, 0
  stw       r4, 0xAC(r1)
  addi      r4, r1, 0xAC
  stfs      f1, 0xB0(r1)
  stw       r5, 0xB4(r1)
  stw       r3, 0xB8(r1)
  stb       r0, 0xBC(r1)
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  sth       r0, 0x18(r31)
  b         .loc_0x92C

.loc_0x608:
  li        r0, 0x3
  addi      r3, r1, 0x44
  sth       r0, 0x18(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x28(r31)
  lfs       f0, 0x48(r1)
  lfs       f2, 0x2C(r31)
  fsubs     f3, f1, f0
  lfs       f0, 0x4C(r1)
  lfs       f1, 0x24(r31)
  fsubs     f4, f2, f0
  lfs       f0, 0x44(r1)
  fmuls     f3, f3, f3
  fsubs     f2, f1, f0
  lfs       f0, -0x52A8(r2)
  fmuls     f5, f4, f4
  fmadds    f1, f2, f2, f3
  fadds     f1, f5, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x678
  ble-      .loc_0x67C
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x67C

.loc_0x678:
  fmr       f1, f0

.loc_0x67C:
  lfs       f0, -0x52A8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x698
  lfs       f0, -0x52A4(r2)
  fdivs     f0, f0, f1
  fmuls     f2, f2, f0
  fmuls     f4, f4, f0

.loc_0x698:
  lfs       f0, -0x52A0(r2)
  lwz       r3, 0x4(r31)
  fmuls     f2, f0, f2
  lfs       f1, -0x529C(r2)
  fmuls     f0, f0, f4
  stfs      f2, 0x200(r3)
  stfs      f1, 0x204(r3)
  stfs      f0, 0x208(r3)
  b         .loc_0x92C

.loc_0x6BC:
  cmpwi     r3, 0x2
  bne-      .loc_0x92C
  li        r3, 0x2
  b         .loc_0x930

.loc_0x6CC:
  lwz       r3, 0x4(r31)
  lwz       r0, 0xC8(r3)
  cmplwi    r0, 0
  beq-      .loc_0x92C
  lwz       r3, 0x10(r31)
  li        r30, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x758
  lwz       r29, 0x10(r31)
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x38
  beq-      .loc_0x754
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x45
  beq-      .loc_0x754
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x42
  bne-      .loc_0x758

.loc_0x754:
  li        r30, 0x1

.loc_0x758:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x820
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r4, r4, 0x4E8C
  addi      r0, r1, 0x8
  stw       r4, 0x8(r1)
  addi      r3, r3, 0x4E80
  addi      r4, r1, 0x6C
  stw       r3, 0x8(r1)
  stw       r0, 0x68(r1)
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  addi      r4, r1, 0x68
  lwz       r3, 0x114(r3)
  bl        -0x6A938
  cmplwi    r3, 0
  beq-      .loc_0x7D4
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x2C(r31)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x30(r31)
  b         .loc_0x868

.loc_0x7D4:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x14(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x18(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)
  b         .loc_0x868

.loc_0x820:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x20(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x24(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)

.loc_0x868:
  lis       r3, 0x804B
  lfs       f0, 0x30(r31)
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x90(r1)
  addi      r0, r3, 0x4E98
  lfs       f1, -0x52B8(r2)
  li        r3, 0
  stw       r0, 0x90(r1)
  li        r0, 0x1
  fadds     f2, f1, f0
  lfs       f0, -0x52B4(r2)
  lfs       f1, 0x24(r31)
  addi      r4, r1, 0x90
  stfs      f1, 0x94(r1)
  lfs       f1, 0x28(r31)
  stfs      f1, 0x98(r1)
  lfs       f1, 0x2C(r31)
  stb       r3, 0xA8(r1)
  stb       r3, 0xA9(r1)
  stfs      f1, 0x9C(r1)
  stfs      f2, 0xA0(r1)
  stfs      f0, 0xA4(r1)
  stb       r0, 0xA8(r1)
  stb       r0, 0xA9(r1)
  sth       r0, 0x18(r31)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x92C

.loc_0x8E8:
  lwz       r3, 0x4(r31)
  lha       r4, 0x34(r31)
  bl        -0x6455C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x904
  li        r0, 0x1
  stb       r0, 0x36(r31)

.loc_0x904:
  lwz       r3, 0x4(r31)
  lfs       f0, -0x52A8(r2)
  stfs      f0, 0x1E4(r3)
  stfs      f0, 0x1E8(r3)
  stfs      f0, 0x1EC(r3)
  lbz       r0, 0x36(r31)
  cmplwi    r0, 0
  beq-      .loc_0x92C
  li        r3, 0x2
  b         .loc_0x930

.loc_0x92C:
  li        r3, 0x1

.loc_0x930:
  lwz       r0, 0x114(r1)
  lwz       r31, 0x10C(r1)
  lwz       r30, 0x108(r1)
  lwz       r29, 0x104(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	801A14E4
 * Size:	000054
 */
void cleanup__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x52A8(r2)
  stw       r0, 0x14(r1)
  lwz       r4, 0x4(r3)
  stfs      f0, 0x1E4(r4)
  stfs      f0, 0x1E8(r4)
  stfs      f0, 0x1EC(r4)
  lhz       r0, 0x18(r3)
  cmpwi     r0, 0
  beq-      .loc_0x30
  b         .loc_0x44

.loc_0x30:
  lwz       r3, 0x1C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x44:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801A1538
 * Size:	0000E0
 */
void collisionCallback__Q26PikiAI9ActAttackFPQ24Game4PikiRQ24Game9CollEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r5
  stw       r30, 0x28(r1)
  mr        r30, r4
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r3, 0x0(r5)
  lwz       r0, 0x10(r29)
  cmplw     r3, r0
  bne-      .loc_0xC4
  lhz       r0, 0x18(r29)
  cmplwi    r0, 0x3
  bne-      .loc_0xC4
  lwz       r3, 0x4(r31)
  cmplwi    r3, 0
  beq-      .loc_0xC4
  bl        -0x6A7D4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC4
  lwz       r4, 0x0(r31)
  mr        r3, r30
  lwz       r5, 0x4(r31)
  bl        -0x26A8
  lwz       r3, 0x4(r29)
  bl        -0x580B8
  lwz       r5, 0x10(r29)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r4, r3, 0x4EA4
  li        r3, 0x2
  li        r0, 0
  stw       r4, 0x8(r1)
  addi      r4, r1, 0x8
  stfs      f1, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r3, 0x14(r1)
  stb       r0, 0x18(r1)
  lwz       r3, 0x1C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  sth       r0, 0x18(r29)

.loc_0xC4:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801A1618
 * Size:	00024C
 */
void bounceCallback__Q26PikiAI9ActAttackFPQ24Game4PikiPQ23Sys8Triangle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r3
  stw       r30, 0x68(r1)
  stw       r29, 0x64(r1)
  lhz       r0, 0x18(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0x230
  lwz       r3, 0x10(r31)
  li        r29, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  lwz       r30, 0x10(r31)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x38
  beq-      .loc_0xA0
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x45
  beq-      .loc_0xA0
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x42
  bne-      .loc_0xA4

.loc_0xA0:
  li        r29, 0x1

.loc_0xA4:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x16C
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r4, r4, 0x4E8C
  addi      r0, r1, 0x8
  stw       r4, 0x8(r1)
  addi      r3, r3, 0x4E80
  addi      r4, r1, 0x28
  stw       r3, 0x8(r1)
  stw       r0, 0x24(r1)
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  addi      r4, r1, 0x24
  lwz       r3, 0x114(r3)
  bl        -0x6AD04
  cmplwi    r3, 0
  beq-      .loc_0x120
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x50(r3)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x54(r3)
  stfs      f0, 0x2C(r31)
  lfs       f0, 0x1C(r3)
  stfs      f0, 0x30(r31)
  b         .loc_0x1B4

.loc_0x120:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0xC
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x14(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)
  b         .loc_0x1B4

.loc_0x16C:
  lwz       r4, 0x10(r31)
  addi      r3, r1, 0x18
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x18(r1)
  stfs      f0, 0x24(r31)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x28(r31)
  lfs       f0, 0x20(r1)
  stfs      f0, 0x2C(r31)
  lwz       r3, 0x10(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x30(r31)

.loc_0x1B4:
  lis       r3, 0x804B
  lfs       f0, 0x30(r31)
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x38(r1)
  addi      r0, r3, 0x4E98
  lfs       f1, -0x52B8(r2)
  li        r3, 0
  stw       r0, 0x38(r1)
  li        r0, 0x1
  fadds     f2, f1, f0
  lfs       f0, -0x52B4(r2)
  lfs       f1, 0x24(r31)
  addi      r4, r1, 0x38
  stfs      f1, 0x3C(r1)
  lfs       f1, 0x28(r31)
  stfs      f1, 0x40(r1)
  lfs       f1, 0x2C(r31)
  stb       r3, 0x50(r1)
  stb       r3, 0x51(r1)
  stfs      f1, 0x44(r1)
  stfs      f2, 0x48(r1)
  stfs      f0, 0x4C(r1)
  stb       r0, 0x50(r1)
  stb       r0, 0x51(r1)
  sth       r0, 0x18(r31)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x230:
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	801A1864
 * Size:	000024
 */
void onKeyEvent__Q26PikiAI9ActAttackFRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  lwz       r0, 0x1C(r4)
  cmplwi    r0, 0x3E8
  bnelr-    
  lhz       r0, 0x18(r3)
  cmplwi    r0, 0x4
  bnelr-    
  li        r0, 0x1
  stb       r0, 0x36(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801A1888
 * Size:	000058
 */
void FindCondition::satisfy(CollPart *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  lwz       r0, 0x10(r4)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lis       r5, 0x2A2A
  addi      r3, r4, 0x30
  addi      r4, r5, 0x2A2A
  li        r5, 0x2A
  bl        0x271A44
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  li        r31, 0x1

.loc_0x40:
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
 * Address:	801A18E0
 * Size:	00000C
 */
void getName__Q26PikiAI20ApproachPosActionArgFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  subi      r3, r3, 0xCFC
  blr
*/
}

/*
 * --INFO--
 * Address:	801A18EC
 * Size:	00000C
 */
void getName__Q26PikiAI20StickAttackActionArgFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  subi      r3, r3, 0xCE4
  blr
*/
}

/*
 * --INFO--
 * Address:	801A18F8
 * Size:	000008
 */
void getNextAIType__Q26PikiAI9ActAttackFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801A1900
 * Size:	000014
 */
void @56@4@onKeyEvent__Q26PikiAI9ActAttackFRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x38
  b         -0xAC
*/
}