

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
 * Address:	8021B94C
 * Size:	0000E4
 */
void __ct__Q34Game10SingleGame11SelectStateFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  li        r5, 0
  stw       r0, 0x24(r1)
  addi      r0, r4, 0x1318
  lis       r4, 0x804B
  stw       r31, 0x1C(r1)
  mr        r31, r3
  addi      r4, r4, 0x12D0
  stw       r0, 0x0(r3)
  li        r0, 0x1
  lis       r3, 0x804C
  stw       r0, 0x4(r31)
  addi      r0, r3, 0x788
  li        r3, 0xB0
  stw       r5, 0x8(r31)
  stw       r4, 0x0(r31)
  stw       r0, 0x0(r31)
  bl        -0x1F7AF4
  mr.       r0, r3
  beq-      .loc_0x64
  li        r4, 0
  bl        0x2094AC
  mr        r0, r3

.loc_0x64:
  stw       r0, 0x20(r31)
  li        r3, 0x14
  bl        -0x1F7B14
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lis       r4, 0x804C
  lis       r5, 0x804B
  addi      r8, r4, 0x77C
  lis       r4, 0x804C
  lwz       r7, 0x0(r8)
  addi      r5, r5, 0xF00
  lwz       r6, 0x4(r8)
  addi      r0, r4, 0x7D0
  lwz       r4, 0x8(r8)
  stw       r7, 0x8(r1)
  stw       r5, 0x0(r3)
  stw       r0, 0x0(r3)
  stw       r31, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r6, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r4, 0x10(r3)

.loc_0xC0:
  stw       r3, 0x14(r31)
  li        r0, -0x1
  mr        r3, r31
  stw       r0, 0x28(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8021BA30
 * Size:	000098
 */
void init__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSectionPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, -0x64AC(r13)
  bl        0x210E68
  li        r0, 0
  stw       r0, 0x24(r31)
  stw       r0, 0x1C(r31)
  stw       r0, 0x18(r31)
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6A68(r13)
  lwz       r3, -0x77D4(r13)
  stw       r0, -0x6A64(r13)
  bl        -0x1F82CC
  stw       r3, -0x6A68(r13)
  lwz       r3, -0x77D4(r13)
  bl        -0x1F82D8
  lwz       r3, -0x77D4(r13)
  bl        -0x1F82B4
  lwz       r3, -0x6B70(r13)
  li        r0, 0
  stb       r0, 0x20(r3)
  lwz       r3, -0x6D20(r13)
  bl        -0xC08B8
  li        r0, 0
  stb       r0, 0x2C(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8021BAC8
 * Size:	000260
 */
void initNext__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSection(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  li        r4, 0x1
  stw       r30, 0x28(r1)
  mr        r30, r3
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  lwz       r3, -0x6514(r13)
  bl        0x207A38
  li        r0, 0x1
  stw       r0, 0x24(r30)
  lwz       r0, -0x77D4(r13)
  stw       r0, 0x1C(r30)
  lwz       r3, 0x1C(r30)
  bl        -0x1F8358
  lwz       r3, 0x1C(r30)
  bl        -0x1F8360
  stw       r3, -0x6A68(r13)
  lwz       r3, 0x1C(r30)
  bl        -0x1F836C
  lwz       r3, 0x1C(r30)
  bl        -0x1F8348
  lwz       r29, 0x1C(r30)
  mr        r3, r29
  bl        -0x1F8380
  mr        r4, r29
  li        r5, 0x1
  bl        -0x1FBC78
  stw       r3, 0x18(r30)
  lwz       r3, 0x18(r30)
  bl        -0x1F85A8
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2
  bl        -0x326D8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x2F(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xC8
  li        r4, 0x3
  bl        -0x326F8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  lwz       r3, -0x6B70(r13)
  li        r4, 0x3
  bl        -0x32824

.loc_0xC8:
  lwz       r3, -0x6B70(r13)
  li        r4, 0x1
  bl        -0x32718
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF4
  lwz       r3, -0x6B70(r13)
  li        r4, 0x12
  bl        -0x34808
  lwz       r3, -0x6B70(r13)
  li        r4, 0x6
  bl        -0x34814

.loc_0xF4:
  li        r29, 0
  li        r28, 0

.loc_0xFC:
  lwz       r3, -0x6B70(r13)
  mr        r4, r28
  bl        -0x325E8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x114
  li        r29, 0x1

.loc_0x114:
  addi      r28, r28, 0x1
  cmpwi     r28, 0x4
  blt+      .loc_0xFC
  stb       r29, 0x2C(r30)
  li        r3, 0x184
  bl        -0x1F7D4C
  mr.       r0, r3
  beq-      .loc_0x13C
  bl        0x1D60F8
  mr        r0, r3

.loc_0x13C:
  stw       r0, 0x10(r30)
  li        r4, 0
  stw       r4, 0x8(r1)
  lwz       r3, -0x6C18(r13)
  stw       r4, 0x10(r1)
  lwz       r0, -0x6C38(r13)
  stw       r4, 0xC(r1)
  stw       r4, 0x14(r1)
  stw       r4, 0x18(r1)
  stb       r4, 0x1D(r1)
  stb       r4, 0x1C(r1)
  stb       r4, 0x1E(r1)
  lwz       r3, 0x40(r3)
  lwz       r3, 0x218(r3)
  addi      r3, r3, 0x1
  stw       r0, 0xC(r1)
  stw       r3, 0x14(r1)
  lwz       r0, 0x18(r30)
  stw       r0, 0x8(r1)
  lwz       r0, 0x20(r30)
  stw       r0, 0x10(r1)
  lwz       r0, 0x28(r30)
  cmpwi     r0, -0x1
  bne-      .loc_0x1AC
  lwz       r3, -0x6B70(r13)
  bl        -0x3478C
  stw       r3, 0x18(r1)
  b         .loc_0x1B0

.loc_0x1AC:
  stw       r0, 0x18(r1)

.loc_0x1B0:
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x40
  bl        0x17C08
  stb       r3, 0x1C(r1)
  lwz       r3, -0x6B70(r13)
  bl        -0x33D90
  stb       r3, 0x1D(r1)
  li        r0, 0x1
  addi      r4, r1, 0x8
  lbz       r3, 0x228(r31)
  stb       r3, 0x1E(r1)
  stb       r0, 0x228(r31)
  lwz       r3, 0x10(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xD4(r31)
  lfs       f1, -0x4310(r2)
  stw       r0, 0x18(r31)
  lwz       r3, 0xD4(r31)
  bl        0x21009C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x20(r30)
  lis       r4, 0x300
  li        r5, 0x1E
  li        r6, 0x1
  bl        -0x1ED50C
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x1B8
  lwz       r5, 0x14(r30)
  bl        0x207234
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8021BD28
 * Size:	000004
 */
void init__Q34Game8WorldMap4BaseFRQ34Game8WorldMap7InitArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8021BD2C
 * Size:	00030C
 */
void dvdload__Q34Game10SingleGame11SelectStateFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x64(r1)
  stw       r31, 0x5C(r1)
  addi      r31, r4, 0x2658
  stw       r30, 0x58(r1)
  mr        r30, r3
  addi      r3, r1, 0x10
  stw       r29, 0x54(r1)
  stw       r28, 0x50(r1)
  bl        0x119758
  lbz       r0, 0x2C(r30)
  cmplwi    r0, 0
  beq-      .loc_0x48
  li        r0, 0xC
  stb       r0, 0x16(r1)
  b         .loc_0x50

.loc_0x48:
  li        r0, 0xB
  stb       r0, 0x16(r1)

.loc_0x50:
  lwz       r0, -0x6780(r13)
  li        r3, 0
  stb       r3, 0x17(r1)
  cmplwi    r0, 0
  bne-      .loc_0x78
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F1760

.loc_0x78:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x98
  addi      r3, r31, 0x34
  addi      r5, r31, 0x4C
  li        r4, 0x18A
  crclr     6, 0x6
  bl        -0x1F1780

.loc_0x98:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0xB8
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F17A0

.loc_0xB8:
  lwz       r3, -0x6780(r13)
  addi      r4, r1, 0x10
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0xF0
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F17D8

.loc_0xF0:
  lwz       r29, -0x6780(r13)
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x114
  addi      r3, r31, 0x60
  addi      r5, r31, 0x28
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x1F17FC

.loc_0x114:
  lwz       r3, 0x4(r29)
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x14C
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F1834

.loc_0x14C:
  lwz       r29, -0x6780(r13)
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x170
  addi      r3, r31, 0x60
  addi      r5, r31, 0x28
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x1F1858

.loc_0x170:
  lwz       r3, 0x4(r29)
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x77D4(r13)
  lwz       r0, 0x18(r30)
  cmplw     r3, r0
  beq-      .loc_0x1AC
  addi      r3, r31, 0x34
  addi      r5, r31, 0x6C
  li        r4, 0x191
  crclr     6, 0x6
  bl        -0x1F1894

.loc_0x1AC:
  li        r0, 0
  addi      r3, r31, 0x84
  stw       r0, 0x8(r1)
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0x1
  li        r9, 0
  li        r10, 0
  bl        -0x1FCD78
  mr.       r28, r3
  bne-      .loc_0x1F4
  addi      r3, r31, 0x34
  addi      r5, r31, 0xAC
  li        r4, 0x19A
  crclr     6, 0x6
  bl        -0x1F18DC

.loc_0x1F4:
  li        r3, 0x14
  bl        -0x1F8080
  mr.       r29, r3
  beq-      .loc_0x214
  lwz       r5, -0x77D4(r13)
  mr        r4, r28
  bl        -0x183A68
  mr        r29, r3

.loc_0x214:
  li        r3, 0x30
  bl        -0x1F80A0
  mr.       r28, r3
  beq-      .loc_0x240
  lwz       r6, -0x77D4(r13)
  li        r4, 0x3E8
  li        r5, 0x100
  li        r7, 0x8
  li        r8, 0x8
  bl        -0x18BA2C
  mr        r28, r3

.loc_0x240:
  lwz       r0, -0x65F8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x260
  addi      r3, r31, 0x34
  addi      r5, r31, 0xBC
  li        r4, 0x1A0
  crclr     6, 0x6
  bl        -0x1F1948

.loc_0x260:
  lwz       r3, -0x65F8(r13)
  mr        r4, r28
  mr        r5, r29
  bl        0x19D47C
  lwz       r3, -0x77D4(r13)
  lwz       r0, 0x18(r30)
  cmplw     r3, r0
  beq-      .loc_0x294
  addi      r3, r31, 0x34
  addi      r5, r31, 0x6C
  li        r4, 0x1A4
  crclr     6, 0x6
  bl        -0x1F197C

.loc_0x294:
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  bne-      .loc_0x2B4
  addi      r3, r31, 0x34
  addi      r5, r31, 0xD0
  li        r4, 0x1A7
  crclr     6, 0x6
  bl        -0x1F199C

.loc_0x2B4:
  lwz       r3, 0x10(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x77D4(r13)
  lwz       r0, 0x18(r30)
  cmplw     r3, r0
  beq-      .loc_0x2EC
  addi      r3, r31, 0x34
  addi      r5, r31, 0x6C
  li        r4, 0x1AB
  crclr     6, 0x6
  bl        -0x1F19D4

.loc_0x2EC:
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  lwz       r28, 0x50(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C038
 * Size:	000004
 */
void loadResource__Q34Game8WorldMap4BaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C03C
 * Size:	0002AC
 */
void exec__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSection(void)
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
  stw       r29, 0x34(r1)
  lwz       r0, 0x24(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x44
  bge-      .loc_0x5C
  cmpwi     r0, 0
  bge-      .loc_0x3C
  b         .loc_0x5C

.loc_0x3C:
  bl        -0x5B0
  b         .loc_0x290

.loc_0x44:
  lwz       r0, 0x1D0(r31)
  cmpwi     r0, 0x2
  bne-      .loc_0x290
  li        r0, 0x2
  stw       r0, 0x24(r30)
  b         .loc_0x290

.loc_0x5C:
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  beq-      .loc_0x290
  mr        r3, r31
  bl        -0xB7100
  li        r0, 0
  addi      r4, r1, 0x28
  stw       r0, 0x28(r1)
  stw       r0, 0x2C(r1)
  lwz       r3, 0x10(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x2C(r1)
  cmpwi     r0, 0x3
  beq-      .loc_0x19C
  bge-      .loc_0xB4
  cmpwi     r0, 0x1
  beq-      .loc_0xC4
  bge-      .loc_0x168
  b         .loc_0x280

.loc_0xB4:
  cmpwi     r0, 0x5
  beq-      .loc_0x1F4
  bge-      .loc_0x280
  b         .loc_0x230

.loc_0xC4:
  li        r0, -0x1
  li        r4, 0xA
  stw       r0, 0x28(r30)
  lwz       r3, 0x24C(r31)
  bl        -0xC9BC8
  cmplwi    r3, 0
  beq-      .loc_0xEC
  li        r0, -0x1
  stw       r0, 0x110(r3)
  stw       r0, 0x114(r3)

.loc_0xEC:
  lwz       r29, 0x28(r1)
  cmplwi    r29, 0
  beq-      .loc_0x280
  li        r0, 0
  stb       r0, 0x228(r31)
  lwz       r3, -0x6B70(r13)
  bl        -0x34088
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x40
  bl        0x177C0
  lwz       r0, 0xD4(r31)
  lfs       f1, -0x430C(r2)
  stw       r0, 0x18(r31)
  lwz       r3, 0xD4(r31)
  bl        0x20FC08
  stw       r29, 0x22C(r31)
  li        r7, 0
  li        r0, 0x1
  mr        r3, r30
  stb       r7, 0x20(r1)
  mr        r4, r31
  addi      r6, r1, 0x20
  li        r5, 0x2
  stb       r0, 0x21(r1)
  stb       r7, 0x22(r1)
  sth       r7, 0x24(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x280

.loc_0x168:
  li        r3, 0x1
  li        r0, 0
  stb       r3, 0x18(r1)
  mr        r3, r30
  mr        r4, r31
  addi      r6, r1, 0x18
  stw       r0, 0x1C(r1)
  li        r5, 0xA
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x280

.loc_0x19C:
  lwz       r4, 0x28(r1)
  li        r3, 0x1
  li        r0, 0
  stb       r3, 0x10(r1)
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  beq-      .loc_0x1C8
  lwz       r0, 0x48(r4)
  stw       r0, 0x14(r1)
  stw       r0, 0x28(r30)
  b         .loc_0x1D0

.loc_0x1C8:
  li        r0, 0x2
  stw       r0, 0x14(r1)

.loc_0x1D0:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  addi      r6, r1, 0x10
  li        r5, 0xA
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x280

.loc_0x1F4:
  li        r0, -0x1
  li        r4, 0xA
  stw       r0, 0x28(r30)
  lwz       r3, 0x24C(r31)
  bl        -0xC9CF8
  cmplwi    r3, 0
  beq-      .loc_0x21C
  li        r0, -0x1
  stw       r0, 0x110(r3)
  stw       r0, 0x114(r3)

.loc_0x21C:
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x228(r31)
  bl        -0xC9710
  b         .loc_0x290

.loc_0x230:
  lwz       r3, 0x28(r1)
  li        r0, 0
  stb       r0, 0x8(r1)
  cmplwi    r3, 0
  stw       r0, 0xC(r1)
  beq-      .loc_0x258
  lwz       r0, 0x48(r3)
  stw       r0, 0xC(r1)
  stw       r0, 0x28(r30)
  b         .loc_0x260

.loc_0x258:
  li        r0, 0x2
  stw       r0, 0xC(r1)

.loc_0x260:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  addi      r6, r1, 0x8
  li        r5, 0xA
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x280:
  lwz       r3, -0x65F8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x290
  bl        0x19D2E8

.loc_0x290:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C2E8
 * Size:	000004
 */
void update__Q34Game8WorldMap4BaseFRQ34Game8WorldMap9UpdateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C2EC
 * Size:	0002D0
 */
void draw__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSectionR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  mr        r31, r5
  stw       r30, 0x78(r1)
  mr        r30, r3
  lwz       r0, 0x18(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2B8
  lwz       r0, 0x24(r30)
  cmpwi     r0, 0x2
  bne-      .loc_0x2B8
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
  lwz       r3, 0x10(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0x3
  li        r5, 0
  bl        0x19D254
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0x2
  li        r5, 0
  bl        0x19D204
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0x4
  li        r5, 0
  bl        0x19D1B4
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0x1
  li        r5, 0
  bl        0x19D164
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0
  li        r5, 0
  bl        0x19D140
  lwz       r3, -0x6A68(r13)
  cmpwi     r3, 0
  beq-      .loc_0x2B8
  lwz       r0, -0x6A64(r13)
  cmpwi     r0, 0
  beq-      .loc_0x2B8
  cmpw      r3, r0
  beq-      .loc_0x2B8
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r4, -0x7628(r13)
  addi      r3, r1, 0x18
  lfs       f1, -0x4308(r2)
  bl        -0x1DED88
  addi      r3, r1, 0x18
  bl        -0x1DEB88
  li        r9, 0xFF
  li        r6, 0x13
  li        r5, 0x37
  stb       r6, 0x11(r1)
  li        r0, 0
  lfs       f0, -0x4304(r2)
  stb       r9, 0x10(r1)
  lis       r3, 0x8048
  addi      r4, r3, 0x2738
  lwz       r7, -0x6A68(r13)
  stb       r5, 0x12(r1)
  addi      r3, r1, 0x18
  lwz       r6, -0x6A64(r13)
  stb       r9, 0x13(r1)
  lfs       f1, -0x4300(r2)
  sub       r5, r6, r7
  lwz       r8, 0x10(r1)
  stb       r0, 0x8(r1)
  lfs       f2, -0x42FC(r2)
  stw       r8, 0x14(r1)
  lbz       r8, 0x14(r1)
  lbz       r31, 0x15(r1)
  lbz       r12, 0x16(r1)
  lbz       r11, 0x17(r1)
  stb       r0, 0x9(r1)
  stb       r0, 0xA(r1)
  stb       r9, 0xB(r1)
  lwz       r0, 0x8(r1)
  stb       r8, 0x58(r1)
  stw       r0, 0xC(r1)
  lbz       r10, 0xC(r1)
  lbz       r9, 0xD(r1)
  lbz       r8, 0xE(r1)
  lbz       r0, 0xF(r1)
  stb       r31, 0x59(r1)
  stb       r12, 0x5A(r1)
  stb       r11, 0x5B(r1)
  stb       r10, 0x5C(r1)
  stb       r9, 0x5D(r1)
  stb       r8, 0x5E(r1)
  stb       r0, 0x5F(r1)
  stfs      f0, 0x68(r1)
  stfs      f0, 0x6C(r1)
  crset     6, 0x6
  bl        -0x1DE89C
  addi      r3, r1, 0x18
  li        r4, -0x1
  bl        -0x1DEC90

.loc_0x2B8:
  lwz       r0, 0x84(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C5BC
 * Size:	000004
 */
void draw4th__Q34Game8WorldMap4BaseFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C5C0
 * Size:	000004
 */
void draw3rd__Q34Game8WorldMap4BaseFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C5C4
 * Size:	000004
 */
void draw2nd__Q34Game8WorldMap4BaseFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C5C8
 * Size:	000004
 */
void draw1st__Q34Game8WorldMap4BaseFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C5CC
 * Size:	0000F4
 */
void cleanup__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSection(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0x2658
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x44
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x1F1FCC

.loc_0x44:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x64
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x28
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x1F1FEC

.loc_0x64:
  mr        r3, r30
  bl        0x125BAC
  lwz       r3, -0x6B70(r13)
  bl        -0x32E10
  lwz       r3, -0x65F8(r13)
  bl        0x19D170
  lwz       r3, -0x65F8(r13)
  bl        0x19CE74
  lwz       r3, 0x18(r29)
  bl        -0x1F8F24
  lwz       r3, 0x18(r29)
  bl        -0x1F90A8
  li        r0, 0
  stw       r0, 0x18(r29)
  lwz       r3, 0x1C(r29)
  bl        -0x1F90C8
  lwz       r3, -0x6514(r13)
  li        r4, 0x2
  bl        0x206EB4
  lwz       r3, 0x1C(r29)
  bl        -0x1F8ECC
  lwz       r0, -0x6A68(r13)
  cmpw      r0, r3
  beq-      .loc_0xD8
  addi      r3, r31, 0x34
  li        r4, 0x2DC
  subi      r5, r2, 0x42F8
  crclr     6, 0x6
  bl        -0x1F2060

.loc_0xD8:
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
 * Address:	8021C6C0
 * Size:	000030
 */
void Delegate<Game::SingleGame::SelectState>::invoke()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  addi      r12, r4, 0x8
  lwz       r3, 0x4(r3)
  bl        -0x15ABB4
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8021C6F0
 * Size:	000028
 */
void __sinit_singleGS_WorldMap_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6A70(r13)
  stfsu     f0, 0x770(r3)
  stfs      f0, -0x6A6C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}