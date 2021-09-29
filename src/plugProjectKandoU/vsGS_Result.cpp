

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
 * Address:	8022C7F4
 * Size:	000104
 */
void __ct__Q34Game6VsGame11ResultStateFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804C
  li        r5, 0
  stw       r0, 0x24(r1)
  addi      r0, r4, 0xEE4
  lis       r4, 0x804C
  stw       r31, 0x1C(r1)
  mr        r31, r3
  addi      r4, r4, 0xE98
  stw       r0, 0x0(r3)
  li        r0, 0x4
  lis       r3, 0x804C
  stw       r0, 0x4(r31)
  addi      r0, r3, 0x1010
  li        r3, 0xB0
  stw       r5, 0x8(r31)
  stw       r4, 0x0(r31)
  stw       r0, 0x0(r31)
  stb       r5, 0x34(r31)
  stb       r5, 0x34(r31)
  bl        -0x2089A4
  mr.       r0, r3
  beq-      .loc_0x6C
  li        r4, 0
  bl        0x1F85FC
  mr        r0, r3

.loc_0x6C:
  stw       r0, 0x10(r31)
  li        r3, 0xB0
  bl        -0x2089C4
  mr.       r0, r3
  beq-      .loc_0x8C
  li        r4, 0x1
  bl        0x1F85DC
  mr        r0, r3

.loc_0x8C:
  stw       r0, 0x14(r31)
  li        r3, 0x14
  bl        -0x2089E4
  cmplwi    r3, 0
  beq-      .loc_0xE8
  lis       r4, 0x804C
  lis       r5, 0x804B
  addi      r8, r4, 0xFEC
  lis       r4, 0x804C
  lwz       r7, 0x0(r8)
  addi      r5, r5, 0xF00
  lwz       r6, 0x4(r8)
  addi      r0, r4, 0x105C
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

.loc_0xE8:
  stw       r3, 0x24(r31)
  mr        r3, r31
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8022C8F8
 * Size:	0000BC
 */
void init__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSectionPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r6, -0x6560(r13)
  lwz       r3, 0x18(r6)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6560(r13)
  lwz       r4, 0x10(r29)
  bl        0x1CF73C
  lwz       r3, -0x64AC(r13)
  bl        0x200644
  cmplwi    r31, 0
  bne-      .loc_0x74
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3738
  li        r4, 0x30
  addi      r5, r5, 0x3748
  crclr     6, 0x6
  bl        -0x202328

.loc_0x74:
  lbz       r4, 0x0(r31)
  li        r0, 0
  mr        r3, r30
  stb       r4, 0x34(r29)
  stw       r0, 0x20(r29)
  stw       r0, 0x1C(r29)
  stb       r0, 0x18(r29)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8022C9B4
 * Size:	0002A8
 */
void prepareMorimuraInfo__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection(void)
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
  lbz       r0, 0x34(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x38
  lfs       f0, -0x40A0(r2)
  stfs      f0, 0x3C0(r29)

.loc_0x38:
  lis       r3, 0x8051
  lwzu      r12, 0x25EC(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x28(r28)
  li        r30, 0
  li        r3, 0
  lfs       f0, 0x3C0(r29)
  lwz       r4, 0x3BC(r29)
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  add       r0, r4, r0
  stw       r0, 0x30(r28)
  lwz       r4, -0x6C18(r13)
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x1
  beq-      .loc_0x8C
  cmpwi     r0, 0x3
  bne-      .loc_0x90

.loc_0x8C:
  li        r3, 0x1

.loc_0x90:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  li        r30, 0x1

.loc_0x9C:
  lwz       r3, -0x6514(r13)
  bl        0x1F64DC
  lwz       r4, 0x338(r29)
  mr        r5, r30
  bl        0x80E0
  lwz       r30, 0x338(r29)
  mr        r31, r3
  li        r3, 0x20
  bl        -0x208BCC
  mr.       r0, r3
  beq-      .loc_0xD0
  bl        0x884C
  mr        r0, r3

.loc_0xD0:
  stw       r0, 0x38(r28)
  mr        r4, r30
  lwz       r3, 0x20C(r29)
  bl        0x1054
  lwz       r5, 0x38(r28)
  li        r4, 0
  stb       r4, 0x0(r5)
  lwz       r5, -0x6C18(r13)
  lwz       r0, 0x44(r5)
  cmpwi     r0, 0x1
  beq-      .loc_0x104
  cmpwi     r0, 0x3
  bne-      .loc_0x108

.loc_0x104:
  li        r4, 0x1

.loc_0x108:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x120
  lwz       r4, 0x38(r28)
  lbz       r0, 0x0(r4)
  ori       r0, r0, 0x1
  stb       r0, 0x0(r4)

.loc_0x120:
  lbz       r0, 0x34(r28)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x158
  lwz       r4, 0x38(r28)
  lbz       r0, 0x0(r4)
  ori       r0, r0, 0x2
  stb       r0, 0x0(r4)
  lbz       r0, 0x205(r29)
  cmplwi    r0, 0
  beq-      .loc_0x158
  lwz       r4, 0x38(r28)
  lbz       r0, 0x0(r4)
  ori       r0, r0, 0x4
  stb       r0, 0x0(r4)

.loc_0x158:
  lwz       r0, 0x74(r3)
  lwz       r3, 0x38(r28)
  stw       r0, 0x18(r3)
  lwz       r3, 0x38(r28)
  stw       r30, 0x4(r3)
  lfs       f0, 0x3C0(r29)
  lwz       r3, 0x38(r28)
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r3)
  lwz       r0, 0x3BC(r29)
  lwz       r3, 0x38(r28)
  mulli     r0, r0, 0xA
  stw       r0, 0xC(r3)
  lwz       r0, 0x28(r28)
  lwz       r3, 0x38(r28)
  mulli     r0, r0, 0xA
  stw       r0, 0x10(r3)
  lwz       r5, 0x38(r28)
  lwz       r4, 0x10(r5)
  lwz       r0, 0x8(r5)
  lwz       r3, 0xC(r5)
  add       r0, r0, r4
  add       r0, r3, r0
  stw       r0, 0x14(r5)
  lwz       r3, 0x38(r28)
  stw       r31, 0x1C(r3)
  lwz       r3, -0x6514(r13)
  bl        0x1F63B0
  mr        r4, r30
  bl        0x7D08
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1F0
  lwz       r3, 0x38(r28)
  lbz       r0, 0x0(r3)
  ori       r0, r0, 0x8
  stb       r0, 0x0(r3)

.loc_0x1F0:
  lwz       r3, -0x6514(r13)
  bl        0x1F6388
  mr        r4, r30
  bl        0x7D0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x218
  lwz       r3, 0x38(r28)
  lbz       r0, 0x0(r3)
  ori       r0, r0, 0x10
  stb       r0, 0x0(r3)

.loc_0x218:
  lbz       r0, 0x34(r28)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x288
  lwz       r3, -0x6514(r13)
  bl        0x1F6354
  mr        r4, r30
  bl        0x7CAC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x26C
  lwz       r3, -0x6514(r13)
  bl        0x1F633C
  bl        0x7DD4
  lis       r5, 0x8048
  mr        r4, r3
  addi      r3, r5, 0x3754
  crclr     6, 0x6
  bl        -0x13F520
  lwz       r3, -0x6514(r13)
  bl        0x1F631C
  mr        r4, r30
  bl        0x7E44

.loc_0x26C:
  lbz       r0, 0x205(r29)
  cmplwi    r0, 0
  beq-      .loc_0x288
  lwz       r3, -0x6514(r13)
  bl        0x1F6300
  mr        r4, r30
  bl        0x7E88

.loc_0x288:
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
 * Address:	........
 * Size:	000094
 */
void initNext__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022CC5C
 * Size:	00013C
 */
void dvdload__Q34Game6VsGame11ResultStateFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x54(r1)
  addi      r3, r1, 0x8
  stw       r31, 0x4C(r1)
  addi      r31, r4, 0x3720
  stw       r30, 0x48(r1)
  bl        0x108834
  lwz       r0, -0x6780(r13)
  li        r4, 0x10
  li        r3, 0
  stb       r4, 0xE(r1)
  cmplwi    r0, 0
  stb       r3, 0xF(r1)
  bne-      .loc_0x54
  addi      r3, r31, 0x50
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x20266C

.loc_0x54:
  lwz       r3, -0x6780(r13)
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x8C
  addi      r3, r31, 0x50
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x2026A4

.loc_0x8C:
  lwz       r30, -0x6780(r13)
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0xB0
  addi      r3, r31, 0x5C
  addi      r5, r31, 0x28
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x2026C8

.loc_0xB0:
  lwz       r3, 0x4(r30)
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0xE8
  addi      r3, r31, 0x50
  addi      r5, r31, 0x28
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x202700

.loc_0xE8:
  lwz       r30, -0x6780(r13)
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x10C
  addi      r3, r31, 0x5C
  addi      r5, r31, 0x28
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x202724

.loc_0x10C:
  lwz       r3, 0x4(r30)
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8022CD98
 * Size:	00017C
 */
void exec__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection(void)
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
  lbz       r0, 0x18(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0xA4
  bge-      .loc_0x3C
  cmpwi     r0, 0
  bge-      .loc_0x48
  b         .loc_0x158

.loc_0x3C:
  cmpwi     r0, 0x3
  bge-      .loc_0x158
  b         .loc_0x110

.loc_0x48:
  mr        r3, r31
  bl        -0xDD040
  lwz       r0, -0x77D4(r13)
  stw       r0, 0x20(r30)
  lwz       r29, 0x20(r30)
  mr        r3, r29
  bl        -0x209644
  mr        r4, r29
  li        r5, 0x1
  bl        -0x20CF3C
  stw       r3, 0x1C(r30)
  lwz       r3, 0x1C(r30)
  bl        -0x20986C
  mr        r3, r30
  mr        r4, r31
  bl        -0x468
  li        r0, 0x1
  addi      r4, r31, 0x184
  stb       r0, 0x18(r30)
  lwz       r3, -0x6514(r13)
  lwz       r5, 0x24(r30)
  bl        0x1F6104
  b         .loc_0x160

.loc_0xA4:
  lwz       r0, 0x19C(r31)
  cmpwi     r0, 0x2
  bne-      .loc_0x158
  li        r0, 0x2
  lis       r3, 0x804B
  stb       r0, 0x18(r30)
  li        r4, 0
  addi      r0, r3, 0x1148
  lis       r3, 0x804C
  stw       r0, 0x8(r1)
  addi      r0, r3, 0xFF8
  lwz       r3, -0x6560(r13)
  stw       r4, 0xC(r1)
  stw       r0, 0x8(r1)
  stw       r4, 0x10(r1)
  stw       r4, 0x14(r1)
  stw       r4, 0x18(r1)
  lwz       r0, 0x38(r30)
  stw       r0, 0x10(r1)
  lwz       r0, 0x1C(r30)
  stw       r0, 0x14(r1)
  lwz       r4, 0x10(r30)
  bl        0x1CF1E4
  lwz       r3, -0x6560(r13)
  addi      r4, r1, 0x8
  bl        0x1D2EF8
  b         .loc_0x158

.loc_0x110:
  lwz       r3, -0x6560(r13)
  bl        0x1CF180
  lwz       r3, -0x65F8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x128
  bl        0x18C6F4

.loc_0x128:
  lwz       r3, -0x6560(r13)
  bl        0x1D2F70
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x158
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x158:
  mr        r3, r31
  bl        -0xC7F4C

.loc_0x160:
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
 * Address:	8022CF14
 * Size:	000088
 */
void draw__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSectionR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  lbz       r0, 0x18(r3)
  cmplwi    r0, 0x2
  bne-      .loc_0x74
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0x1
  li        r5, 0
  bl        0x18C680
  lwz       r3, -0x6560(r13)
  mr        r4, r31
  bl        0x1CF0F0
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0
  li        r5, 0
  bl        0x18C650

.loc_0x74:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8022CF9C
 * Size:	0000CC
 */
void cleanup__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection(void)
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
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x48
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3770
  li        r4, 0x1D3
  addi      r5, r5, 0x3748
  crclr     6, 0x6
  bl        -0x2029A0

.loc_0x48:
  lwz       r31, -0x6780(r13)
  cmplwi    r31, 0
  bne-      .loc_0x70
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3770
  li        r4, 0x1DC
  addi      r5, r5, 0x3748
  crclr     6, 0x6
  bl        -0x2029C8

.loc_0x70:
  mr        r3, r31
  bl        0x1151D0
  lwz       r3, -0x65F8(r13)
  bl        0x18C79C
  lwz       r3, 0x1C(r29)
  bl        -0x2098F0
  lwz       r3, 0x1C(r29)
  bl        -0x209A74
  li        r0, 0
  stw       r0, 0x1C(r29)
  lwz       r3, 0x20(r29)
  bl        -0x209A94
  li        r0, 0
  lfs       f0, -0x40A0(r2)
  stw       r0, 0x3BC(r30)
  stfs      f0, 0x3C0(r30)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8022D068
 * Size:	000008
 */
void getSize__Q28Morimura25DispMemberChallengeResultFv(void)
{
/*
.loc_0x0:
  li        r3, 0x14
  blr
*/
}

/*
 * --INFO--
 * Address:	8022D070
 * Size:	00000C
 */
void getOwnerID__Q28Morimura25DispMemberChallengeResultFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x4D52
  addi      r3, r3, 0x4D52
  blr
*/
}

/*
 * --INFO--
 * Address:	8022D07C
 * Size:	000014
 */
void getMemberID__Q28Morimura25DispMemberChallengeResultFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x5355
  lis       r3, 0x4348
  addi      r4, r4, 0x4C54
  addi      r3, r3, 0x5245
  blr
*/
}

/*
 * --INFO--
 * Address:	8022D090
 * Size:	000030
 */
void Delegate<Game::VsGame::ResultState>::invoke()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  addi      r12, r4, 0x8
  lwz       r3, 0x4(r3)
  bl        -0x16B584
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8022D0C0
 * Size:	000028
 */
void __sinit_vsGS_Result_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6A10(r13)
  stfsu     f0, 0xFE0(r3)
  stfs      f0, -0x6A0C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}