

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
 * Address:	8021C718
 * Size:	0000A8
 */
void __ct__Q34Game10SingleGame9FileStateFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804B
  li        r5, 0
  stw       r0, 0x14(r1)
  addi      r0, r4, 0x1318
  lis       r4, 0x804B
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r4, r4, 0x12D0
  stw       r0, 0x0(r3)
  lis       r3, 0x804C
  addi      r0, r3, 0x804
  stw       r5, 0x4(r31)
  li        r3, 0xB0
  stw       r5, 0x8(r31)
  stw       r4, 0x0(r31)
  stw       r0, 0x0(r31)
  bl        -0x1F88BC
  mr.       r0, r3
  beq-      .loc_0x60
  li        r4, 0
  bl        0x2086E4
  mr        r0, r3

.loc_0x60:
  stw       r0, 0x14(r31)
  li        r3, 0xB0
  bl        -0x1F88DC
  mr.       r0, r3
  beq-      .loc_0x80
  li        r4, 0x2
  bl        0x2086C4
  mr        r0, r3

.loc_0x80:
  stw       r0, 0x34(r31)
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x20(r31)
  stw       r0, 0x1C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C7C0
 * Size:	00009C
 */
void init__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSectionPQ24Game8StateArg(void)
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
  lwz       r3, -0x64AC(r13)
  bl        0x2100D0
  li        r0, 0x1
  lfs       f1, -0x42F0(r2)
  stb       r0, 0x24(r30)
  lwz       r0, 0xD4(r31)
  stw       r0, 0x18(r31)
  lwz       r3, 0xD4(r31)
  bl        0x20F56C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  li        r4, 0x1
  bl        0x206CF8
  lwz       r3, -0x6B70(r13)
  li        r0, 0
  stb       r0, 0x20(r3)
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
 * Address:	........
 * Size:	0000E4
 */
void first_init__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSection(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021C85C
 * Size:	00019C
 */
void dvdload__Q34Game10SingleGame9FileStateFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  stw       r30, 0x48(r1)
  addi      r30, r4, 0x2748
  stw       r29, 0x44(r1)
  bl        0x118C2C
  lwz       r0, -0x6780(r13)
  li        r4, 0xA
  li        r3, 0
  stb       r4, 0xE(r1)
  cmplwi    r0, 0
  stb       r3, 0xF(r1)
  bne-      .loc_0x5C
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F2274

.loc_0x5C:
  lwz       r3, -0x6780(r13)
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x94
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F22AC

.loc_0x94:
  lwz       r29, -0x6780(r13)
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0xB8
  addi      r3, r30, 0x34
  addi      r5, r30, 0x28
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x1F22D0

.loc_0xB8:
  lwz       r3, 0x4(r29)
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0xF0
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F2308

.loc_0xF0:
  lwz       r29, -0x6780(r13)
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x114
  addi      r3, r30, 0x34
  addi      r5, r30, 0x28
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x1F232C

.loc_0x114:
  lwz       r3, 0x4(r29)
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  bl        0x1C55D4
  stw       r3, 0x2C(r31)
  lwz       r30, 0x2C(r31)
  addi      r3, r30, 0x18
  bl        0x1B89B0
  lwz       r29, -0x77D4(r13)
  addi      r3, r30, 0xC78
  mr        r4, r29
  bl        0x1A5908
  lwz       r3, -0x6514(r13)
  mr        r4, r29
  lwz       r3, 0x5C(r3)
  bl        0x226214
  lwz       r29, 0x14(r31)
  lwz       r30, 0x2C(r31)
  mr        r4, r29
  addi      r3, r30, 0x18
  bl        0x1C3664
  stw       r29, 0xC7C(r30)
  lwz       r3, -0x6B70(r13)
  bl        -0x35F18
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
 * Address:	8021C9F8
 * Size:	000194
 */
void exec__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSection(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  stw       r29, 0x24(r1)
  lbz       r0, 0x24(r3)
  cmplwi    r0, 0
  beq-      .loc_0xD8
  lwz       r0, -0x77D4(r13)
  stw       r0, 0x20(r30)
  lwz       r29, 0x20(r30)
  mr        r3, r29
  bl        -0x1F9280
  mr        r4, r29
  li        r5, 0x1
  bl        -0x1FCB78
  stw       r3, 0x1C(r30)
  lwz       r3, 0x1C(r30)
  bl        -0x1F94A8
  li        r3, 0x14
  bl        -0x1F8BB0
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lis       r4, 0x804C
  lis       r5, 0x804B
  addi      r8, r4, 0x7EC
  lis       r4, 0x804C
  lwz       r7, 0x0(r8)
  addi      r5, r5, 0xF00
  lwz       r6, 0x4(r8)
  addi      r0, r4, 0x7F8
  lwz       r4, 0x8(r8)
  stw       r7, 0x8(r1)
  stw       r5, 0x0(r3)
  stw       r0, 0x0(r3)
  stw       r30, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r6, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r4, 0x10(r3)

.loc_0xB0:
  stw       r3, 0x18(r30)
  mr        r3, r31
  li        r5, 0
  lwz       r4, 0x18(r30)
  bl        -0xD17C8
  lwz       r3, 0x2C(r30)
  bl        0x1C5614
  li        r0, 0
  stb       r0, 0x24(r30)
  b         .loc_0x178

.loc_0xD8:
  lwz       r0, 0x1C(r30)
  cmplwi    r0, 0
  beq-      .loc_0x178
  lwz       r3, -0x65F8(r13)
  cmplwi    r3, 0
  beq-      .loc_0xF4
  bl        0x19CAC8

.loc_0xF4:
  mr        r3, r31
  bl        -0xB7B48
  lwz       r3, 0x2C(r30)
  bl        0x1C5680
  lwz       r3, 0x2C(r30)
  bl        0x1C574C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  lwz       r3, 0x2C(r30)
  lwz       r0, 0xFE4(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x140
  bge-      .loc_0x134
  cmpwi     r0, 0x1
  bge-      .loc_0x150
  b         .loc_0x178

.loc_0x134:
  cmpwi     r0, 0x4
  bge-      .loc_0x178
  b         .loc_0x170

.loc_0x140:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0x194
  b         .loc_0x178

.loc_0x150:
  lwz       r5, -0x6C18(r13)
  li        r0, 0
  mr        r3, r30
  mr        r4, r31
  lwz       r5, 0x40(r5)
  stw       r0, 0x218(r5)
  bl        .loc_0x194
  b         .loc_0x178

.loc_0x170:
  mr        r3, r31
  bl        -0xCA018

.loc_0x178:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x194:
*/
}

/*
 * --INFO--
 * Address:	8021CB8C
 * Size:	00027C
 */
void startGame__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSection(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r6, 0x8048
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  stw       r29, 0x34(r1)
  addi      r29, r6, 0x2748
  stw       r28, 0x30(r1)
  lwz       r0, -0x65F8(r13)
  lwz       r5, -0x6B70(r13)
  cmplwi    r0, 0
  lbz       r28, 0x19(r5)
  beq-      .loc_0x48
  mr        r3, r0
  bl        0x19CBE4

.loc_0x48:
  cmpwi     r28, 0x2
  beq-      .loc_0xC4
  bge-      .loc_0x64
  cmpwi     r28, 0
  beq-      .loc_0x74
  bge-      .loc_0xA0
  b         .loc_0x244

.loc_0x64:
  cmpwi     r28, 0x4
  beq-      .loc_0x218
  bge-      .loc_0x244
  b         .loc_0x160

.loc_0x74:
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x10(r1)
  mr        r4, r31
  addi      r6, r1, 0x10
  li        r5, 0x9
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x25C

.loc_0xA0:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x25C

.loc_0xC4:
  lwz       r0, 0xD4(r31)
  lfs       f1, -0x42EC(r2)
  stw       r0, 0x18(r31)
  lwz       r3, 0xD4(r31)
  bl        0x20F108
  lwz       r3, -0x6B70(r13)
  bl        -0x35784
  stw       r3, 0x22C(r31)
  lwz       r0, 0x22C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x104
  addi      r3, r29, 0x40
  addi      r5, r29, 0x28
  li        r4, 0x1D5
  crclr     6, 0x6
  bl        -0x1F264C

.loc_0x104:
  lwz       r3, -0x6B70(r13)
  li        r8, 0x1
  lbz       r3, 0x20(r3)
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x124
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0x124
  li        r8, 0x2

.loc_0x124:
  li        r7, 0
  li        r0, 0x1
  stb       r7, 0x1C(r1)
  mr        r3, r30
  mr        r4, r31
  addi      r6, r1, 0x1C
  stb       r0, 0x1D(r1)
  li        r5, 0x2
  stb       r7, 0x1E(r1)
  sth       r8, 0x20(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x25C

.loc_0x160:
  addi      r3, r1, 0x24
  bl        0x1F6580
  lwz       r3, -0x6B70(r13)
  bl        -0x35814
  mr        r0, r3
  lwz       r3, -0x6B70(r13)
  mr        r28, r0
  addi      r4, r1, 0x24
  addi      r5, r1, 0xC
  bl        -0x357F4
  stw       r28, 0x22C(r31)
  li        r0, 0x1
  addi      r3, r31, 0x230
  addi      r4, r1, 0x24
  lwz       r6, 0xC(r1)
  li        r5, 0x5
  stw       r6, 0x248(r31)
  lwz       r6, 0x2C(r1)
  stw       r6, 0x190(r31)
  stb       r0, 0x23C(r31)
  bl        -0x15B624
  lwz       r0, 0x2C(r1)
  mr        r3, r28
  addi      r4, r1, 0x24
  stw       r0, 0x238(r31)
  bl        -0x6F1B0
  mr        r4, r3
  addi      r3, r31, 0x195
  bl        -0x152504
  mr        r3, r31
  bl        -0xC8DFC
  li        r5, 0x1
  li        r0, 0
  stb       r5, 0x14(r1)
  mr        r3, r30
  mr        r4, r31
  addi      r6, r1, 0x14
  stb       r5, 0x15(r1)
  li        r5, 0x2
  stb       r0, 0x16(r1)
  sth       r0, 0x18(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x25C

.loc_0x218:
  li        r0, 0x1
  mr        r3, r30
  stb       r0, 0x8(r1)
  mr        r4, r31
  addi      r6, r1, 0x8
  li        r5, 0xB
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x25C

.loc_0x244:
  mr        r6, r28
  addi      r3, r29, 0x40
  addi      r5, r29, 0x58
  li        r4, 0x211
  crclr     6, 0x6
  bl        -0x1F27A4

.loc_0x25C:
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
 * Address:	8021CE08
 * Size:	0000C0
 */
void draw__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSectionR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA8
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0x1
  li        r5, 0
  bl        0x19C784
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2C(r30)
  bl        0x1C5384
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0
  li        r5, 0
  bl        0x19C730
  lwz       r3, 0x2C(r30)
  bl        0x1C539C

.loc_0xA8:
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
 * Address:	8021CEC8
 * Size:	0000D4
 */
void cleanup__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSection(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x2764
  li        r4, 0x1D3
  addi      r5, r5, 0x2770
  crclr     6, 0x6
  bl        -0x1F28C4

.loc_0x40:
  lwz       r31, -0x6780(r13)
  cmplwi    r31, 0
  bne-      .loc_0x68
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x2764
  li        r4, 0x1DC
  addi      r5, r5, 0x2770
  crclr     6, 0x6
  bl        -0x1F28EC

.loc_0x68:
  mr        r3, r31
  bl        0x1252AC
  lwz       r3, 0x2C(r30)
  bl        0x1C51E4
  lwz       r3, 0x1C(r30)
  bl        -0x1F9814
  lwz       r3, 0x1C(r30)
  bl        -0x1F9998
  li        r0, 0
  stw       r0, 0x1C(r30)
  lwz       r3, 0x20(r30)
  bl        -0x1F99B8
  lwz       r3, -0x6514(r13)
  li        r4, 0x2
  bl        0x2065C4
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
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
 * Address:	8021CF9C
 * Size:	000030
 */
void Delegate<Game::SingleGame::FileState>::invoke()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  addi      r12, r4, 0x8
  lwz       r3, 0x4(r3)
  bl        -0x15B490
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8021CFCC
 * Size:	000028
 */
void __sinit_singleGS_FileSelect_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6A60(r13)
  stfsu     f0, 0x7E0(r3)
  stfs      f0, -0x6A5C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}