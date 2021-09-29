

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
 * Address:	801F7970
 * Size:	000134
 */
void init__Q34Game10ItemBarrel3FSMFPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x3
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1480
  li        r3, 0x10
  bl        -0x1D3AEC
  mr.       r4, r3
  beq-      .loc_0x68
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x2ACC
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r7, 0
  lis       r3, 0x804C
  subi      r6, r6, 0x2B00
  stw       r7, 0x4(r4)
  subi      r5, r5, 0x2B34
  subi      r0, r3, 0x2B68
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x68:
  mr        r3, r31
  bl        0x152C
  li        r3, 0x14
  bl        -0x1D3B40
  mr.       r4, r3
  beq-      .loc_0xC0
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x2ACC
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x1
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x2B00
  subi      r5, r5, 0x2B34
  subi      r0, r3, 0x2BE4
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0xC0:
  mr        r3, r31
  bl        0x14D4
  li        r3, 0x14
  bl        -0x1D3B98
  mr.       r4, r3
  beq-      .loc_0x118
  lis       r3, 0x804C
  lis       r6, 0x804C
  subi      r0, r3, 0x2ACC
  lis       r5, 0x804C
  stw       r0, 0x0(r4)
  li        r0, 0x2
  lis       r3, 0x804C
  li        r7, 0
  stw       r0, 0x4(r4)
  subi      r6, r6, 0x2B00
  subi      r5, r5, 0x2B34
  subi      r0, r3, 0x2B9C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0x0(r4)
  stw       r0, 0x0(r4)

.loc_0x118:
  mr        r3, r31
  bl        0x147C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7AA4
 * Size:	00000C
 */
void init__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  lfs       f0, -0x46D0(r2)
  stfs      f0, 0x1D4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7AB0
 * Size:	000004
 */
void exec__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7AB4
 * Size:	000004
 */
void cleanup__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7AB8
 * Size:	000064
 */
void onDamage__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Itemf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f2, -0x46D0(r2)
  stw       r0, 0x14(r1)
  lfs       f0, 0x1F4(r4)
  fadds     f0, f0, f1
  stfs      f0, 0x1F4(r4)
  lfs       f1, 0x1EC(r4)
  lfs       f0, 0x1F4(r4)
  fsubs     f0, f1, f0
  stfs      f0, 0x1EC(r4)
  stfs      f2, 0x1F4(r4)
  lfs       f0, 0x1EC(r4)
  fcmpo     cr0, f0, f2
  bge-      .loc_0x54
  lwz       r12, 0x0(r3)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x54:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7B1C
 * Size:	000030
 */
void transit__Q24Game34FSMState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
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
 * Address:	801F7B4C
 * Size:	000004
 */
void onKeyEvent__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7B50
 * Size:	000170
 */
void init__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr.       r31, r4
  mr        r5, r31
  beq-      .loc_0x20
  addi      r5, r5, 0x178

.loc_0x20:
  addi      r3, r31, 0x1A8
  li        r4, 0x1
  bl        0x231110
  lfs       f0, -0x46CC(r2)
  mr        r3, r31
  li        r4, 0
  stfs      f0, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x1E0
  bl        0x37090
  lwz       r3, 0x17C(r31)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0xA
  beq-      .loc_0x8C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x19E0
  li        r4, 0x90
  addi      r5, r5, 0x19F0
  crclr     6, 0x6
  bl        -0x1CD598

.loc_0x8C:
  lwz       r3, 0x17C(r31)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x94(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x67A8(r13)
  li        r4, 0x181C
  li        r5, 0
  bl        0x140A34
  mr        r3, r31
  li        r4, 0x586B
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804B
  li        r5, 0
  subi      r0, r3, 0x5808
  lis       r3, 0x804E
  stw       r0, 0x24(r1)
  addi      r0, r3, 0x6A50
  lis       r3, 0x804C
  li        r4, 0x5
  stw       r0, 0x24(r1)
  subi      r0, r3, 0x2BB0
  li        r7, 0x6
  li        r6, 0x7
  sth       r4, 0x28(r1)
  mr        r4, r31
  addi      r3, r1, 0x8
  sth       r7, 0x2A(r1)
  sth       r6, 0x2C(r1)
  stw       r5, 0x30(r1)
  stw       r5, 0x34(r1)
  stw       r5, 0x38(r1)
  stw       r0, 0x24(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  lis       r3, 0x804B
  lfs       f1, 0xC(r1)
  subi      r0, r3, 0x5814
  lfs       f0, 0x10(r1)
  addi      r3, r1, 0x24
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x14
  stfs      f2, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f0, 0x20(r1)
  bl        0x1B7414
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7CC0
 * Size:	000004
 */
void exec__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7CC4
 * Size:	000004
 */
void cleanup__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7CC8
 * Size:	000004
 */
void onDamage__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4Itemf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7CCC
 * Size:	000148
 */
void onKeyEvent__Q34Game10ItemBarrel9DeadStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  mr        r30, r4
  addi      r4, r30, 0x1C4
  lwz       r3, -0x6CF8(r13)
  bl        -0x943C4
  mr.       r31, r3
  beq-      .loc_0x110
  lwz       r3, -0x6C18(r13)
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x110
  lfs       f0, -0x46D0(r2)
  lis       r3, 0x8048
  li        r0, 0
  mr        r4, r30
  addi      r5, r3, 0x19FC
  stw       r0, 0x18(r1)
  addi      r3, r1, 0x8
  stw       r5, 0x14(r1)
  stw       r0, 0x20(r1)
  stfs      f0, 0x2C(r1)
  stfs      f0, 0x30(r1)
  stfs      f0, 0x34(r1)
  stfs      f0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x44(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  mr        r3, r30
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x38(r1)
  addi      r4, r1, 0x14
  lwz       r3, -0x64AC(r13)
  stw       r30, 0x194(r3)
  lwz       r3, -0x64AC(r13)
  bl        0x234C2C
  lwz       r3, 0x17C(r30)
  li        r4, 0x3847
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lfs       f1, -0x46C8(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x110:
  lfs       f0, -0x46D0(r2)
  mr        r4, r30
  stfs      f0, 0x1D4(r30)
  lwz       r3, -0x6B10(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
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
 * Address:	801F7E14
 * Size:	000004
 */
void init__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7E18
 * Size:	000004
 */
void exec__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7E1C
 * Size:	000004
 */
void cleanup__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7E20
 * Size:	000010
 */
void onDamage__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4Itemf(void)
{
/*
.loc_0x0:
  lfs       f0, 0x1F4(r4)
  fadds     f0, f0, f1
  stfs      f0, 0x1F4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7E30
 * Size:	000004
 */
void onKeyEvent__Q34Game10ItemBarrel12DamagedStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7E34
 * Size:	000044
 */
void doSave__Q34Game10ItemBarrel4ItemFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm    r4,r3,0,24,31
  mr        r3, r31
  bl        0x21D810
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7E78
 * Size:	0000BC
 */
void doLoad__Q34Game10ItemBarrel4ItemFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        0x21C60C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA8
  cmplwi    r31, 0
  mr        r5, r31
  beq-      .loc_0x34
  addi      r5, r31, 0x178

.loc_0x34:
  addi      r3, r31, 0x1A8
  li        r4, 0x1
  bl        0x230DD4
  addi      r3, r31, 0x1A8
  bl        0x231044
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6CF8(r13)
  addi      r4, r31, 0x1C4
  bl        -0x945B8
  cmplwi    r3, 0
  beq-      .loc_0x88
  lwz       r12, 0x0(r3)
  lfs       f1, -0x46C8(r2)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x88:
  lfs       f0, -0x46D0(r2)
  mr        r4, r31
  stfs      f0, 0x1D4(r31)
  lwz       r3, -0x6B10(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
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
void __ct__Q34Game10ItemBarrel4ItemFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F7F34
 * Size:	000048
 */
void constructor__Q34Game10ItemBarrel4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x84
  bl        -0x1D40A8
  mr.       r0, r3
  beq-      .loc_0x30
  mr        r4, r31
  bl        0x2696C4
  mr        r0, r3

.loc_0x30:
  stw       r0, 0x17C(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F7F7C
 * Size:	000140
 */
void onInit__Q34Game10ItemBarrel4ItemFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x14
  bl        -0x1D40F4
  mr.       r31, r3
  beq-      .loc_0x4C
  lwz       r3, -0x6B10(r13)
  li        r4, 0
  bl        -0x2AE5C
  mr        r4, r3
  mr        r3, r31
  lis       r5, 0x2
  li        r6, 0x2
  bl        0x246218
  mr        r31, r3

.loc_0x4C:
  stw       r31, 0x174(r30)
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  bl        -0x1916E0
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  bl        -0x19181C
  lwz       r3, 0x1D8(r30)
  mr        r4, r30
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x0(r30)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        0x428
  lfs       f0, -0x46D0(r2)
  cmplwi    r30, 0
  mr        r5, r30
  stfs      f0, 0x1D4(r30)
  lwz       r3, -0x6B10(r13)
  lwz       r0, 0x20(r3)
  stw       r0, 0x1B8(r30)
  beq-      .loc_0xFC
  addi      r5, r30, 0x178

.loc_0xFC:
  addi      r3, r30, 0x1A8
  li        r4, 0x1
  bl        0x230C08
  lwz       r5, -0x6B10(r13)
  li        r6, 0
  lwz       r3, 0x114(r30)
  lwz       r4, 0x174(r30)
  lwz       r5, 0x24(r5)
  bl        -0xC402C
  lfs       f0, -0x46D0(r2)
  stfs      f0, 0x1F4(r30)
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
 * Address:	801F80BC
 * Size:	000034
 */
void start__Q24Game38StateMachine<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r0, 0x1DC(r4)
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
 * Address:	801F80F0
 * Size:	00004C
 */
void onSetPosition__Q34Game10ItemBarrel4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x210(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F813C
 * Size:	000048
 */
void updateBoundSphere__Q34Game10ItemBarrel4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x20C
  lfs       f0, 0x19C(r31)
  stfs      f0, 0x1C4(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0x1C8(r31)
  lfs       f0, 0x1A4(r31)
  stfs      f0, 0x1CC(r31)
  stfs      f1, 0x1D0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8184
 * Size:	0000C4
 */
void doAI__Q34Game10ItemBarrel4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r4, r30
  lwz       r3, 0x1D8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        -0x2BBAC
  lwz       r4, 0x114(r30)
  mr        r3, r30
  lwz       r31, 0x0(r4)
  bl        0x194
  stfs      f1, 0x1C(r31)
  addi      r3, r30, 0x1E0
  bl        0x36A6C
  cmpwi     r3, 0x2
  beq-      .loc_0x60
  b         .loc_0xAC

.loc_0x60:
  lwz       r3, 0x17C(r30)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0xA
  beq-      .loc_0x98
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x19E0
  li        r4, 0x12A
  addi      r5, r5, 0x19F0
  crclr     6, 0x6
  bl        -0x1CDBD8

.loc_0x98:
  lwz       r3, 0x17C(r30)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x90(r12)
  mtctr     r12
  bctrl     

.loc_0xAC:
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
 * Address:	801F8248
 * Size:	000114
 */
void getVectorField__Q34Game10ItemBarrel4ItemFRQ23Sys6SphereR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stfd      f28, 0x10(r1)
  psq_st    f28,0x18(r1),0,0
  stw       r31, 0xC(r1)
  lfs       f0, 0x4(r4)
  mr        r31, r5
  lfs       f1, 0x1A0(r3)
  lfs       f3, 0x1A4(r3)
  fsubs     f29, f1, f0
  lfs       f2, 0x8(r4)
  lfs       f1, 0x19C(r3)
  fsubs     f28, f3, f2
  lfs       f0, 0x0(r4)
  fmuls     f2, f29, f29
  fsubs     f30, f1, f0
  lfs       f0, -0x46D0(r2)
  fmuls     f3, f28, f28
  fmadds    f1, f30, f30, f2
  fadds     f31, f3, f1
  fcmpo     cr0, f31, f0
  ble-      .loc_0x84
  ble-      .loc_0x88
  fsqrte    f0, f31
  fmuls     f31, f0, f31
  b         .loc_0x88

.loc_0x84:
  fmr       f31, f0

.loc_0x88:
  lfs       f0, -0x46D0(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0xAC
  lfs       f0, -0x46C4(r2)
  fdivs     f0, f0, f31
  fmuls     f30, f30, f0
  fmuls     f29, f29, f0
  fmuls     f28, f28, f0
  b         .loc_0xB0

.loc_0xAC:
  fmr       f31, f0

.loc_0xB0:
  bl        .loc_0x114
  fcmpo     cr0, f31, f1
  ble-      .loc_0xCC
  stfs      f30, 0x0(r31)
  stfs      f29, 0x4(r31)
  stfs      f28, 0x8(r31)
  b         .loc_0xDC

.loc_0xCC:
  lfs       f0, -0x46D0(r2)
  stfs      f0, 0x0(r31)
  stfs      f0, 0x4(r31)
  stfs      f0, 0x8(r31)

.loc_0xDC:
  li        r3, 0x1
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  psq_l     f28,0x18(r1),0,0
  lfd       f28, 0x10(r1)
  lwz       r0, 0x54(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr       

.loc_0x114:
*/
}

/*
 * --INFO--
 * Address:	801F835C
 * Size:	000058
 */
void getWorkRadius__Q34Game10ItemBarrel4ItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  lwz       r3, 0x114(r31)
  addi      r4, r1, 0x8
  bl        -0xC1750
  lfs       f1, 0x14(r1)
  b         .loc_0x44

.loc_0x40:
  lfs       f1, -0x46D0(r2)

.loc_0x44:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801F83B4
 * Size:	0000C4
 */
void getWorkDistance__Q34Game10ItemBarrel4ItemFRQ23Sys6Sphere(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfs       f0, 0x4(r4)
  lfs       f1, 0x1A0(r3)
  lfs       f3, 0x1A4(r3)
  fsubs     f4, f1, f0
  lfs       f2, 0x8(r4)
  lfs       f1, 0x19C(r3)
  lfs       f0, 0x0(r4)
  fsubs     f2, f3, f2
  fmuls     f3, f4, f4
  fsubs     f1, f1, f0
  lfs       f0, -0x46D0(r2)
  fmuls     f2, f2, f2
  fmadds    f1, f1, f1, f3
  fadds     f31, f2, f1
  fcmpo     cr0, f31, f0
  ble-      .loc_0x6C
  ble-      .loc_0x70
  fsqrte    f0, f31
  fmuls     f31, f0, f31
  b         .loc_0x70

.loc_0x6C:
  fmr       f31, f0

.loc_0x70:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA0
  lwz       r3, 0x114(r31)
  addi      r4, r1, 0x8
  bl        -0xC1808
  lfs       f0, 0x14(r1)
  b         .loc_0xA4

.loc_0xA0:
  lfs       f0, -0x46D0(r2)

.loc_0xA4:
  fsubs     f1, f31, f0
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8478
 * Size:	000024
 */
void createBarrel__Q34Game10ItemBarrel4ItemFv(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6B10(r13)
  lfs       f0, -0x46D0(r2)
  lwz       r4, 0x88(r4)
  lfs       f1, 0x100(r4)
  stfs      f1, 0x1EC(r3)
  lfs       f1, 0x1EC(r3)
  stfs      f1, 0x1F0(r3)
  stfs      f0, 0x1F4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F849C
 * Size:	000148
 */
void interactAttack__Q34Game10ItemBarrel4ItemFRQ24Game14InteractAttack(void)
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
  lwz       r3, 0x4(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0x130

.loc_0x40:
  lwz       r3, 0x1DC(r30)
  cmplwi    r3, 0
  beq-      .loc_0x12C
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lfs       f1, 0x8(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x1E0
  bl        0x366E4
  cmpwi     r3, 0x2
  beq-      .loc_0x12C
  bge-      .loc_0x84
  cmpwi     r3, 0x1
  bge-      .loc_0x90
  b         .loc_0x12C

.loc_0x84:
  cmpwi     r3, 0x4
  bge-      .loc_0x12C
  b         .loc_0xE0

.loc_0x90:
  lwz       r3, 0x17C(r30)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0xA
  beq-      .loc_0xC8
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x19E0
  li        r4, 0x169
  addi      r5, r5, 0x19F0
  crclr     6, 0x6
  bl        -0x1CDF20

.loc_0xC8:
  lwz       r3, 0x17C(r30)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x12C

.loc_0xE0:
  lwz       r3, 0x17C(r30)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0xA
  beq-      .loc_0x118
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x19E0
  li        r4, 0x170
  addi      r5, r5, 0x19F0
  crclr     6, 0x6
  bl        -0x1CDF70

.loc_0x118:
  lwz       r3, 0x17C(r30)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     

.loc_0x12C:
  li        r3, 0x1

.loc_0x130:
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
 * Address:	801F85E4
 * Size:	000004
 */
void onDamage__Q34Game10ItemBarrel5StateFPQ34Game10ItemBarrel4Itemf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F85E8
 * Size:	000120
 */
void __ct__Q34Game10ItemBarrel3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  stw       r0, 0x444(r1)
  extsh.    r0, r4
  stw       r31, 0x43C(r1)
  mr        r31, r3
  stw       r30, 0x438(r1)
  beq-      .loc_0x28
  addi      r0, r31, 0x8C
  stw       r0, 0x4(r31)

.loc_0x28:
  mr        r3, r31
  li        r4, 0
  bl        -0x2B1F8
  lis       r3, 0x804C
  subi      r0, r2, 0x46C0
  subi      r4, r3, 0x334C
  mr        r3, r31
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x74
  li        r4, 0x1
  stw       r5, 0x30(r31)
  stw       r0, 0x8(r31)
  bl        -0x2B874
  lis       r4, 0x8048
  li        r3, 0x114
  addi      r0, r4, 0x1A0C
  stw       r0, 0x28(r31)
  bl        -0x1D47B0
  mr.       r0, r3
  beq-      .loc_0x80
  bl        0xCC
  mr        r0, r3

.loc_0x80:
  stw       r0, 0x88(r31)
  li        r0, 0
  lis       r3, 0x8048
  li        r4, 0
  stw       r0, 0x8(r1)
  addi      r3, r3, 0x1A28
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0x2
  li        r9, 0
  li        r10, 0
  bl        -0x1D9510
  mr.       r30, r3
  beq-      .loc_0x104
  mr        r4, r30
  addi      r3, r1, 0x10
  li        r5, -0x1
  bl        0x21D248
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x1C(r1)
  bne-      .loc_0xE4
  li        r0, 0
  stw       r0, 0x424(r1)

.loc_0xE4:
  lwz       r3, 0x88(r31)
  addi      r4, r1, 0x10
  lwz       r12, 0xD8(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        -0x1D4610

.loc_0x104:
  lwz       r0, 0x444(r1)
  mr        r3, r31
  lwz       r31, 0x43C(r1)
  lwz       r30, 0x438(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8708
 * Size:	000024
 */
void read__Q34Game10ItemBarrel11BarrelParmsFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0xDC
  stw       r0, 0x14(r1)
  bl        0x21B0DC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F872C
 * Size:	0001EC
 */
void __ct__Q34Game10ItemBarrel11BarrelParmsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x7330
  lis       r4, 0x804B
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x5350
  addi      r5, r5, 0x3030
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lis       r3, 0x8048
  stw       r0, 0xD8(r30)
  addi      r31, r3, 0x19C8
  addi      r0, r30, 0xD4
  li        r3, 0
  stw       r0, 0x0(r30)
  addi      r0, r31, 0x80
  mr        r4, r30
  addi      r6, r31, 0x94
  stw       r3, 0x4(r30)
  addi      r3, r30, 0xC
  stw       r0, 0x8(r30)
  bl        0x21AED4
  lis       r3, 0x804B
  lis       r5, 0x7330
  subi      r0, r3, 0x5344
  lfs       f0, -0x46B8(r2)
  stw       r0, 0xC(r30)
  mr        r4, r30
  lfs       f1, -0x46D0(r2)
  addi      r3, r30, 0x34
  stfs      f0, 0x24(r30)
  addi      r5, r5, 0x3031
  lfs       f0, -0x46C4(r2)
  addi      r6, r31, 0xA8
  stfs      f1, 0x2C(r30)
  stfs      f0, 0x30(r30)
  bl        0x21AE98
  lis       r3, 0x804B
  lis       r5, 0x7330
  subi      r0, r3, 0x5344
  lfs       f0, -0x46B8(r2)
  stw       r0, 0x34(r30)
  mr        r4, r30
  lfs       f1, -0x46D0(r2)
  addi      r3, r30, 0x5C
  stfs      f0, 0x4C(r30)
  addi      r5, r5, 0x3032
  lfs       f0, -0x46C4(r2)
  addi      r6, r31, 0xB8
  stfs      f1, 0x54(r30)
  stfs      f0, 0x58(r30)
  bl        0x21AE5C
  lis       r3, 0x804B
  lis       r5, 0x7330
  subi      r0, r3, 0x5344
  lfs       f0, -0x46B4(r2)
  stw       r0, 0x5C(r30)
  mr        r4, r30
  lfs       f1, -0x46D0(r2)
  addi      r3, r30, 0x84
  stfs      f0, 0x74(r30)
  addi      r5, r5, 0x3033
  lfs       f0, -0x46C4(r2)
  subi      r6, r2, 0x46B0
  stfs      f1, 0x7C(r30)
  stfs      f0, 0x80(r30)
  bl        0x21AE20
  lis       r3, 0x804B
  lis       r5, 0x7330
  subi      r0, r3, 0x5344
  lfs       f0, -0x46A8(r2)
  stw       r0, 0x84(r30)
  mr        r4, r30
  lfs       f1, -0x46A4(r2)
  addi      r3, r30, 0xAC
  stfs      f0, 0x9C(r30)
  addi      r5, r5, 0x3034
  lfs       f0, -0x46A0(r2)
  addi      r6, r31, 0xC8
  stfs      f1, 0xA4(r30)
  stfs      f0, 0xA8(r30)
  bl        0x21ADE4
  lis       r4, 0x804B
  lis       r3, 0x804C
  subi      r0, r4, 0x5344
  lis       r5, 0x7030
  stw       r0, 0xAC(r30)
  subi      r9, r3, 0x328C
  lfs       f0, -0x469C(r2)
  addi      r8, r30, 0x110
  lfs       f1, -0x46A4(r2)
  li        r7, 0
  stfs      f0, 0xC4(r30)
  addi      r0, r31, 0xD8
  lfs       f0, -0x46A0(r2)
  addi      r3, r30, 0xE8
  stfs      f1, 0xCC(r30)
  addi      r4, r30, 0xDC
  addi      r5, r5, 0x3030
  subi      r6, r2, 0x4698
  stfs      f0, 0xD0(r30)
  stw       r9, 0xD8(r30)
  stw       r8, 0xDC(r30)
  stw       r7, 0xE0(r30)
  stw       r0, 0xE4(r30)
  bl        0x21AD84
  lis       r3, 0x804B
  lfs       f2, -0x4690(r2)
  subi      r0, r3, 0x5344
  lfs       f1, -0x46C4(r2)
  stw       r0, 0xE8(r30)
  mr        r3, r30
  lfs       f0, -0x468C(r2)
  stfs      f2, 0x100(r30)
  stfs      f1, 0x108(r30)
  stfs      f0, 0x10C(r30)
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
 * Address:	801F8918
 * Size:	000108
 */
void birth__Q34Game10ItemBarrel3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x1FC
  bl        -0x1D4A90
  mr.       r31, r3
  beq-      .loc_0xE0
  li        r4, 0x410
  bl        -0x2C95C
  lis       r3, 0x804C
  li        r0, 0
  subi      r4, r3, 0x2E08
  li        r3, 0x1C
  stw       r4, 0x0(r31)
  addi      r4, r4, 0x1B0
  stw       r4, 0x178(r31)
  stw       r0, 0x1D8(r31)
  stw       r0, 0x1DC(r31)
  bl        -0x1D4AC8
  cmplwi    r3, 0
  beq-      .loc_0x8C
  lis       r4, 0x804C
  lis       r5, 0x804C
  subi      r0, r4, 0x2E20
  lis       r4, 0x804C
  stw       r0, 0x0(r3)
  li        r6, -0x1
  subi      r5, r5, 0x2E38
  subi      r0, r4, 0x2AAC
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0x0(r3)

.loc_0x8C:
  stw       r3, 0x1D8(r31)
  mr        r4, r31
  lwz       r3, 0x1D8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804C
  addi      r3, r31, 0x1E0
  subi      r4, r4, 0x305C
  stw       r4, 0x0(r31)
  addi      r0, r4, 0x1B0
  stw       r0, 0x178(r31)
  bl        0x361F4
  lis       r3, 0x804C
  lfs       f0, -0x46D0(r2)
  subi      r3, r3, 0x3280
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x1B0
  stw       r0, 0x178(r31)
  stfs      f0, 0x118(r31)

.loc_0xE0:
  mr        r3, r30
  mr        r4, r31
  bl        -0x2B1D8
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
 * Address:	801F8A20
 * Size:	000060
 */
void generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<float>R10Vector3<float>PQ24Game11GenItemParm(void)
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
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  mr        r31, r3
  bl        -0xBDA88
  mr        r3, r31
  mr        r4, r30
  li        r5, 0
  bl        -0xBD8B8
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
 * Address:	801F8A80
 * Size:	0000B8
 */
void onLoadResources__Q34Game10ItemBarrel3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0x19C8
  subi      r4, r2, 0x4688
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x2BBD4
  mr        r3, r29
  addi      r4, r31, 0xE8
  li        r5, 0
  lis       r6, 0x2
  bl        -0x2BB6C
  lwz       r3, 0x1C(r29)
  lis       r4, 0x4
  lwz       r3, 0x0(r3)
  bl        -0x1751F4
  lwz       r3, 0x1C(r29)
  lwz       r3, 0x0(r3)
  bl        -0x1750A8
  mr        r3, r29
  addi      r4, r31, 0xF4
  bl        -0x2B918
  mr        r0, r3
  mr        r3, r29
  mr        r30, r0
  addi      r5, r31, 0x100
  mr        r4, r30
  bl        -0x2BB00
  mr        r3, r29
  mr        r4, r30
  addi      r5, r31, 0x10C
  bl        -0x2BA90
  mr        r3, r29
  mr        r4, r30
  bl        -0x2B8C8
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
 * Address:	801F8B38
 * Size:	000134
 */
void __dt__Q34Game10ItemBarrel3MgrFv(void)
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
  beq-      .loc_0x118
  lis       r3, 0x804C
  subi      r3, r3, 0x334C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0x108
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r3, r3, 0x7180
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x74
  stw       r0, 0x30(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addic.    r3, r30, 0x6C
  addi      r4, r4, 0x724C
  stw       r4, 0x4C(r30)
  addi      r0, r4, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r0, r4, 0x723C
  stw       r0, 0x6C(r30)
  li        r4, 0
  bl        0x2189D0

.loc_0x84:
  addic.    r0, r30, 0x4C
  beq-      .loc_0xD4
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r3, r3, 0x72CC
  stw       r3, 0x4C(r30)
  addi      r0, r3, 0x2C
  stw       r0, 0x68(r30)
  beq-      .loc_0xD4
  lis       r3, 0x804B
  addic.    r0, r30, 0x4C
  addi      r0, r3, 0x7348
  stw       r0, 0x4C(r30)
  beq-      .loc_0xD4
  lis       r4, 0x804B
  addi      r3, r30, 0x4C
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4C(r30)
  bl        0x218980

.loc_0xD4:
  addic.    r0, r30, 0x30
  beq-      .loc_0x108
  lis       r3, 0x804B
  addic.    r0, r30, 0x30
  addi      r0, r3, 0x7348
  stw       r0, 0x30(r30)
  beq-      .loc_0x108
  lis       r4, 0x804B
  addi      r3, r30, 0x30
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x30(r30)
  bl        0x21894C

.loc_0x108:
  extsh.    r0, r31
  ble-      .loc_0x118
  mr        r3, r30
  bl        -0x1D4B98

.loc_0x118:
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
 * Address:	801F8C6C
 * Size:	0000F0
 */
void doNew__Q34Game10ItemBarrel3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x1FC
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  bl        -0x1D4DDC
  mr.       r31, r3
  beq-      .loc_0xD8
  li        r4, 0x410
  bl        -0x2CCA8
  lis       r3, 0x804C
  li        r0, 0
  subi      r4, r3, 0x2E08
  li        r3, 0x1C
  stw       r4, 0x0(r31)
  addi      r4, r4, 0x1B0
  stw       r4, 0x178(r31)
  stw       r0, 0x1D8(r31)
  stw       r0, 0x1DC(r31)
  bl        -0x1D4E14
  cmplwi    r3, 0
  beq-      .loc_0x84
  lis       r4, 0x804C
  lis       r5, 0x804C
  subi      r0, r4, 0x2E20
  lis       r4, 0x804C
  stw       r0, 0x0(r3)
  li        r6, -0x1
  subi      r5, r5, 0x2E38
  subi      r0, r4, 0x2AAC
  stw       r6, 0x18(r3)
  stw       r5, 0x0(r3)
  stw       r0, 0x0(r3)

.loc_0x84:
  stw       r3, 0x1D8(r31)
  mr        r4, r31
  lwz       r3, 0x1D8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804C
  addi      r3, r31, 0x1E0
  subi      r4, r4, 0x305C
  stw       r4, 0x0(r31)
  addi      r0, r4, 0x1B0
  stw       r0, 0x178(r31)
  bl        0x35EA8
  lis       r3, 0x804C
  lfs       f0, -0x46D0(r2)
  subi      r3, r3, 0x3280
  stw       r3, 0x0(r31)
  addi      r0, r3, 0x1B0
  stw       r0, 0x178(r31)
  stfs      f0, 0x118(r31)

.loc_0xD8:
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
 * Address:	801F8D5C
 * Size:	00000C
 */
void generatorGetID__Q34Game10ItemBarrel3MgrFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x6261
  addi      r3, r3, 0x726C
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8D68
 * Size:	000008
 */
void getCreatureName__Q34Game10ItemBarrel4ItemFv(void)
{
/*
.loc_0x0:
  subi      r3, r2, 0x46C0
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8D70
 * Size:	000034
 */
void doAI__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x1D8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
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
 * Address:	801F8DA4
 * Size:	000004
 */
void onDamage__Q24Game35ItemState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4Itemf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DA8
 * Size:	000004
 */
void onKeyEvent__Q24Game35ItemState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DAC
 * Size:	000004
 */
void onBounce__Q24Game35ItemState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DB0
 * Size:	000004
 */
void onPlatCollision__Q24Game35ItemState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DB4
 * Size:	000004
 */
void onCollision__Q24Game35ItemState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DB8
 * Size:	000004
 */
void init__Q24Game34FSMState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DBC
 * Size:	000004
 */
void exec__Q24Game34FSMState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DC0
 * Size:	000004
 */
void cleanup__Q24Game34FSMState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DC4
 * Size:	000004
 */
void resume__Q24Game34FSMState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DC8
 * Size:	000004
 */
void restart__Q24Game34FSMState<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DCC
 * Size:	000004
 */
void init__Q24Game38StateMachine<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8DD0
 * Size:	000038
 */
void exec__Q24Game38StateMachine<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4Item(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r4)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
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
 * Address:	801F8E08
 * Size:	000064
 */
void create__Q24Game38StateMachine<Game::ItemBarrel::Item>Fi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0xC(r3)
  stw       r0, 0x8(r3)
  lwz       r0, 0xC(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x1D4E84
  stw       r3, 0x4(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1D4E94
  stw       r3, 0x10(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x1D4EA4
  stw       r3, 0x14(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8E6C
 * Size:	00009C
 */
void transit__Q24Game38StateMachine<Game::ItemBarrel::Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r5,2,0,29
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r6
  lwz       r30, 0x1DC(r4)
  lwz       r3, 0x14(r3)
  cmplwi    r30, 0
  lwzx      r31, r3, r0
  beq-      .loc_0x50
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r30)
  stw       r0, 0x18(r27)

.loc_0x50:
  lwz       r0, 0xC(r27)
  cmpw      r31, r0
  blt-      .loc_0x60

.loc_0x5C:
  b         .loc_0x5C

.loc_0x60:
  lwz       r3, 0x4(r27)
  rlwinm    r0,r31,2,0,29
  mr        r4, r28
  mr        r5, r29
  lwzx      r3, r3, r0
  stw       r3, 0x1DC(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8F08
 * Size:	000084
 */
void registerState__Q24Game38StateMachine<Game::ItemBarrel::Item>FPQ24Game34FSMState<Game::ItemBarrel::Item>(void)
{
/*
.loc_0x0:
  lwz       r6, 0x8(r3)
  lwz       r0, 0xC(r3)
  cmpw      r6, r0
  bgelr-    
  lwz       r5, 0x4(r3)
  rlwinm    r0,r6,2,0,29
  stwx      r4, r5, r0
  lwz       r5, 0x4(r4)
  cmpwi     r5, 0
  blt-      .loc_0x34
  lwz       r0, 0xC(r3)
  cmpw      r5, r0
  blt-      .loc_0x3C

.loc_0x34:
  li        r0, 0
  b         .loc_0x40

.loc_0x3C:
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  beqlr-    
  stw       r3, 0x8(r4)
  lwz       r0, 0x8(r3)
  lwz       r6, 0x4(r4)
  lwz       r5, 0x10(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r6, r5, r0
  lwz       r0, 0x4(r4)
  lwz       r5, 0x8(r3)
  lwz       r4, 0x14(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r5, r4, r0
  lwz       r4, 0x8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8F8C
 * Size:	000044
 */
void onKeyEvent__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>FRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F8FD0
 * Size:	000044
 */
void platCallback__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>FRQ24Game9PlatEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9014
 * Size:	000044
 */
void collisionCallback__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>FRQ24Game9CollEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F9058
 * Size:	000044
 */
void bounceCallback__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>FPQ23Sys8Triangle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r3
  mr        r5, r4
  stw       r0, 0x14(r1)
  lwz       r3, 0x1DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  mr        r4, r6
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F909C
 * Size:	000028
 */
void __sinit_itemBarrel_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6B18(r13)
  stfsu     f0, -0x3358(r3)
  stfs      f0, -0x6B14(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F90C4
 * Size:	000008
 */
void @376@onKeyEvent__Q24Game83FSMItem<Game::ItemBarrel::Item, Game::ItemBarrel::FSM, Game::ItemBarrel::State>FRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x178
  b         -0x13C
*/
}

/*
 * --INFO--
 * Address:	801F90CC
 * Size:	000008
 */
void @48@__dt__Q34Game10ItemBarrel3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x30
  b         -0x598
*/
}