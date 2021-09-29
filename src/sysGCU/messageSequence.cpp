

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
 * Address:	80437844
 * Size:	000084
 */
void __ct__Q25P2JME18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x430074
  lis       r3, 0x804F
  lfs       f1, 0x2508(r2)
  subi      r3, r3, 0x3708
  li        r0, 0
  stw       r3, 0x0(r31)
  mr        r3, r31
  lfs       f0, 0x250C(r2)
  stfs      f1, 0x50(r31)
  stw       r0, 0x54(r31)
  stw       r0, 0x58(r31)
  stw       r0, 0x5C(r31)
  stw       r0, 0x60(r31)
  stw       r0, 0x64(r31)
  stb       r0, 0x68(r31)
  stb       r0, 0x69(r31)
  stb       r0, 0x6A(r31)
  stb       r0, 0x6B(r31)
  stb       r0, 0x68(r31)
  stb       r0, 0x69(r31)
  stb       r0, 0x6A(r31)
  stb       r0, 0x6B(r31)
  stfs      f0, 0x4C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804378C8
 * Size:	000034
 */
void do_begin__Q25P2JME18TSequenceProcessorFPCvPCc(void)
{
/*
.loc_0x0:
  lwz       r4, 0x68(r3)
  li        r0, 0
  lfs       f0, 0x250C(r2)
  rlwinm    r4,r4,0,29,27
  stw       r4, 0x68(r3)
  stfs      f0, 0x4C(r3)
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x50(r3)
  stw       r0, 0x5C(r3)
  stw       r0, 0x60(r3)
  stw       r0, 0x64(r3)
  stb       r0, 0x6C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804378FC
 * Size:	000004
 */
void do_end__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void tagColor__Q25P2JME18TSequenceProcessorFPCvUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void tagSize__Q25P2JME18TSequenceProcessorFPCvUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void tagRuby__Q25P2JME18TSequenceProcessorFPCvUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void tagFont__Q25P2JME18TSequenceProcessorFPCvUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80437900
 * Size:	0000A4
 */
void do_tag__Q25P2JME18TSequenceProcessorFUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r7, 0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,16,24,31
  cmplwi    r0, 0xC0
  bge-      .loc_0x40
  cmpwi     r0, 0x2
  rlwinm    r4,r4,0,16,31
  beq-      .loc_0x2C
  b         .loc_0x38

.loc_0x2C:
  bl        0x338
  mr        r7, r3
  b         .loc_0x90

.loc_0x38:
  li        r7, 0x1
  b         .loc_0x90

.loc_0x40:
  cmplwi    r0, 0xFF
  bne-      .loc_0x90
  rlwinm    r0,r4,0,16,31
  cmpwi     r0, 0x2
  beq-      .loc_0x84
  bge-      .loc_0x68
  cmpwi     r0, 0
  beq-      .loc_0x74
  bge-      .loc_0x7C
  b         .loc_0x90

.loc_0x68:
  cmpwi     r0, 0x4
  bge-      .loc_0x90
  b         .loc_0x8C

.loc_0x74:
  li        r7, 0x1
  b         .loc_0x90

.loc_0x7C:
  li        r7, 0x1
  b         .loc_0x90

.loc_0x84:
  li        r7, 0x1
  b         .loc_0x90

.loc_0x8C:
  li        r7, 0x1

.loc_0x90:
  lwz       r0, 0x14(r1)
  mr        r3, r7
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804379A4
 * Size:	000008
 */
void do_systemTagCode__Q25P2JME18TSequenceProcessorFUsPCvUl(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	804379AC
 * Size:	0001D8
 */
void do_isReady__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x68(r3)
  li        r31, 0
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x38
  li        r3, 0
  b         .loc_0x1B8

.loc_0x38:
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0xF4
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x50(r30)
  lfs       f1, 0x54(r3)
  lfs       f0, 0x2508(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x50(r30)
  lfs       f1, 0x50(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1B4
  lwz       r0, 0x54(r30)
  li        r3, 0
  cmplwi    r0, 0
  bne-      .loc_0x84
  lwz       r0, 0x58(r30)
  cmplwi    r0, 0
  beq-      .loc_0x88

.loc_0x84:
  li        r3, 0x1

.loc_0x88:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xAC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5750
  li        r4, 0x17D
  subi      r5, r5, 0x573C
  crclr     6, 0x6
  bl        -0x40D414

.loc_0xAC:
  lwz       r3, 0x54(r30)
  cmplwi    r3, 0
  beq-      .loc_0xC4
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  bne-      .loc_0xDC

.loc_0xC4:
  lwz       r3, 0x58(r30)
  cmplwi    r3, 0
  beq-      .loc_0x1B4
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x1B4

.loc_0xDC:
  mr        r3, r30
  bl        0x31C
  lwz       r0, 0x68(r30)
  rlwinm    r0,r0,0,29,27
  stw       r0, 0x68(r30)
  b         .loc_0x1B4

.loc_0xF4:
  rlwinm.   r0,r3,0,28,28
  lfs       f31, 0x2510(r2)
  beq-      .loc_0x108
  lfs       f31, 0x2514(r2)
  b         .loc_0x188

.loc_0x108:
  lwz       r3, 0x54(r30)
  cmplwi    r3, 0
  beq-      .loc_0x120
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x138

.loc_0x120:
  lwz       r4, 0x58(r30)
  cmplwi    r4, 0
  beq-      .loc_0x15C
  lwz       r0, 0x1C(r4)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x15C

.loc_0x138:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x68(r30)
  ori       r0, r0, 0x8
  stw       r0, 0x68(r30)
  b         .loc_0x188

.loc_0x15C:
  cmplwi    r3, 0
  beq-      .loc_0x170
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,23,23
  bne-      .loc_0x184

.loc_0x170:
  cmplwi    r4, 0
  beq-      .loc_0x188
  lwz       r0, 0x18(r4)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x188

.loc_0x184:
  lfs       f31, 0x2518(r2)

.loc_0x188:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x50(r30)
  lfs       f2, 0x54(r3)
  lfs       f0, 0x2508(r2)
  fnmsubs   f1, f31, f2, f1
  stfs      f1, 0x50(r30)
  lfs       f1, 0x50(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1B4
  li        r31, 0x1

.loc_0x1B4:
  mr        r3, r31

.loc_0x1B8:
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80437B84
 * Size:	000004
 */
void doFastForwardSE__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80437B88
 * Size:	000008
 */
void do_jump_isReady__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80437B90
 * Size:	00000C
 */
void do_jump__Q25P2JME18TSequenceProcessorFPCvPCc(void)
{
/*
.loc_0x0:
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80437B9C
 * Size:	000004
 */
void do_branch_query__Q25P2JME18TSequenceProcessorFUs(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80437BA0
 * Size:	000008
 */
void do_branch_queryResult__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80437BA8
 * Size:	00000C
 */
void do_branch__Q25P2JME18TSequenceProcessorFPCvPCc(void)
{
/*
.loc_0x0:
  lfs       f0, 0x4C(r3)
  stfs      f0, 0x50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80437BB4
 * Size:	0000A8
 */
void do_character__Q25P2JME18TSequenceProcessorFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,0,15
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x1
  bne-      .loc_0x38
  rlwinm.   r0,r4,0,16,23
  bne-      .loc_0x38
  cmpwi     r4, 0xA
  beq-      .loc_0x34
  b         .loc_0x38

.loc_0x34:
  li        r3, 0

.loc_0x38:
  lfs       f1, 0x50(r31)
  rlwinm.   r0,r3,0,24,31
  lfs       f0, 0x4C(r31)
  fadds     f0, f1, f0
  stfs      f0, 0x50(r31)
  beq-      .loc_0x94
  lwz       r0, 0x5C(r31)
  cmpwi     r0, 0
  bne-      .loc_0x74
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x88

.loc_0x74:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     

.loc_0x88:
  lwz       r3, 0x5C(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x5C(r31)

.loc_0x94:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80437C5C
 * Size:	000004
 */
void doCharacterSE__Q25P2JME18TSequenceProcessorFi(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80437C60
 * Size:	000004
 */
void doCharacterSEStart__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80437C64
 * Size:	0000F4
 */
void tagControl__Q25P2JME18TSequenceProcessorFUsPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,0,16,31
  cmpwi     r0, 0x1
  stw       r31, 0x1C(r1)
  mr        r31, r3
  beq-      .loc_0x6C
  bge-      .loc_0x30
  cmpwi     r0, 0
  bge-      .loc_0x3C
  b         .loc_0xC0

.loc_0x30:
  cmpwi     r0, 0x3
  bge-      .loc_0xC0
  b         .loc_0xB4

.loc_0x3C:
  cmplwi    r6, 0
  beq-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5750
  li        r4, 0x260
  subi      r5, r5, 0x573C
  crclr     6, 0x6
  bl        -0x40D680

.loc_0x60:
  mr        r3, r31
  bl        .loc_0xF4
  b         .loc_0xDC

.loc_0x6C:
  lbz       r3, 0x0(r5)
  cmplwi    r3, 0xFF
  bne-      .loc_0x84
  lfs       f0, 0x250C(r2)
  stfs      f0, 0x4C(r31)
  b         .loc_0xA8

.loc_0x84:
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f2, 0x2520(r2)
  stw       r0, 0x8(r1)
  lfs       f0, 0x251C(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fdivs     f0, f1, f0
  stfs      f0, 0x4C(r31)

.loc_0xA8:
  lfs       f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  b         .loc_0xDC

.loc_0xB4:
  lbz       r0, 0x0(r5)
  stb       r0, 0x6C(r31)
  b         .loc_0xDC

.loc_0xC0:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5750
  li        r4, 0x279
  subi      r5, r5, 0x573C
  crclr     6, 0x6
  bl        -0x40D6FC

.loc_0xDC:
  lwz       r0, 0x24(r1)
  li        r3, 0x1
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xF4:
*/
}

/*
 * --INFO--
 * Address:	80437D58
 * Size:	00004C
 */
void setAbtnWait__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x2528(r2)
  stw       r0, 0x14(r1)
  lwz       r0, 0x68(r3)
  ori       r0, r0, 0x2
  stw       r0, 0x68(r3)
  stfs      f0, 0x50(r3)
  lwz       r0, 0x68(r3)
  rlwinm    r0,r0,0,30,28
  stw       r0, 0x68(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
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
 * Address:	80437DA4
 * Size:	000004
 */
void doCharacterSEEnd__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80437DA8
 * Size:	000060
 */
void resetAbtnWait__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x68(r31)
  li        r0, 0
  rlwinm    r3,r3,0,31,29
  stw       r3, 0x68(r31)
  lfs       f0, 0x4C(r31)
  stfs      f0, 0x50(r31)
  lwz       r3, 0x68(r31)
  ori       r3, r3, 0x4
  stw       r3, 0x68(r31)
  stw       r0, 0x5C(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80437E08
 * Size:	00002C
 */
void doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1800
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        -0xFF7F0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80437E34
 * Size:	000018
 */
void reset__Q25P2JME18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x68(r3)
  stb       r0, 0x69(r3)
  stb       r0, 0x6A(r3)
  stb       r0, 0x6B(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80437E4C
 * Size:	000060
 */
void __dt__Q25P2JME18TSequenceProcessorFv(void)
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
  subi      r0, r5, 0x3708
  stw       r0, 0x0(r30)
  bl        -0x430654
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x413DD8

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