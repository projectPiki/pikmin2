

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print__Q24Game10SingleGameFPce(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80239E84
 * Size:	0000B4
 */
void init__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionPQ24Game8StateArg(void)
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
  lwz       r3, -0x64AC(r13)
  bl        0x1F2A0C
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6A50(r13)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  bl        -0x1BA34

.loc_0x4C:
  cmplwi    r31, 0
  bne-      .loc_0x70
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3D50
  li        r4, 0x21
  addi      r5, r5, 0x3D64
  crclr     6, 0x6
  bl        -0x20F8B0

.loc_0x70:
  lhz       r3, 0x4(r31)
  li        r0, 0
  sth       r3, 0x24(r30)
  lbz       r3, 0x1(r31)
  stb       r3, 0x29(r30)
  lbz       r3, 0x0(r31)
  stb       r3, 0x27(r30)
  lbz       r3, 0x2(r31)
  stb       r3, 0x28(r30)
  stb       r0, 0x26(r30)
  stb       r0, 0x14(r30)
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
 * Size:	000160
 */
void initNext__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80239F38
 * Size:	000238
 */
void exec__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection(void)
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
  lbz       r0, 0x26(r3)
  cmplwi    r0, 0
  bne-      .loc_0x158
  li        r0, 0x1
  stb       r0, 0x26(r30)
  lbz       r0, 0x29(r30)
  cmplwi    r0, 0
  bne-      .loc_0x44
  mr        r3, r31
  bl        -0xEA1D4

.loc_0x44:
  lbz       r0, 0x27(r30)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lbz       r0, 0x28(r30)
  cmplwi    r0, 0
  beq-      .loc_0xEC

.loc_0x5C:
  lbz       r0, 0x28(r30)
  cmplwi    r0, 0
  beq-      .loc_0x74
  lwz       r3, 0x248(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x248(r31)

.loc_0x74:
  li        r0, 0x1
  lis       r3, 0x804B
  stb       r0, 0x23C(r31)
  li        r7, 0
  addi      r0, r3, 0x1148
  lis       r4, 0x804C
  lis       r3, 0x745F
  stw       r0, 0x1C(r1)
  addi      r6, r4, 0x1080
  li        r5, 0x37
  addi      r0, r3, 0x3031
  stw       r7, 0x20(r1)
  lwz       r3, -0x6560(r13)
  addi      r4, r1, 0x1C
  stw       r6, 0x1C(r1)
  stw       r5, 0x24(r1)
  stb       r7, 0x2C(r1)
  stb       r7, 0x2D(r1)
  stw       r0, 0x28(r1)
  stb       r7, 0x2E(r1)
  lwz       r5, 0x248(r31)
  addi      r0, r5, 0x1
  stw       r0, 0x24(r1)
  lwz       r0, 0x190(r31)
  stw       r0, 0x28(r1)
  bl        0x1C35C0
  lwz       r3, -0x6C18(r13)
  li        r0, 0x1
  stb       r0, 0x48(r3)
  b         .loc_0x140

.loc_0xEC:
  lwz       r6, 0x22C(r31)
  lis       r4, 0x804B
  lis       r3, 0x804C
  li        r5, 0
  lwz       r6, 0x48(r6)
  addi      r4, r4, 0x1148
  addi      r0, r3, 0x15CC
  lwz       r3, -0x6560(r13)
  stw       r4, 0xC(r1)
  addi      r4, r1, 0xC
  stw       r5, 0x14(r1)
  stw       r5, 0x10(r1)
  stw       r0, 0xC(r1)
  stb       r5, 0x18(r1)
  stb       r5, 0x19(r1)
  stw       r6, 0x14(r1)
  bl        0x1C3758
  li        r0, 0
  stb       r0, 0x23C(r31)
  lwz       r3, -0x6C18(r13)
  stb       r0, 0x48(r3)

.loc_0x140:
  bl        -0x692C0
  li        r0, 0
  stw       r0, 0x10(r30)
  stb       r0, 0x15(r30)
  stb       r0, 0x14(r30)
  b         .loc_0x220

.loc_0x158:
  lbz       r0, 0x14(r30)
  cmplwi    r0, 0
  beq-      .loc_0x188
  lbz       r0, 0x15(r30)
  cmplwi    r0, 0
  bne-      .loc_0x188
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x1B8
  lwz       r5, 0x224(r31)
  bl        0x1E8E84
  li        r0, 0x1
  stb       r0, 0x15(r30)

.loc_0x188:
  lwz       r0, 0x1D0(r31)
  cmpwi     r0, 0x2
  bne-      .loc_0x208
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x124(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x23C(r31)
  cmplwi    r0, 0
  beq-      .loc_0x1D8
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x208

.loc_0x1D8:
  lhz       r7, 0x24(r30)
  li        r0, 0x1
  mr        r3, r30
  mr        r4, r31
  stb       r0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x3
  sth       r7, 0xA(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x208:
  lwz       r3, -0x65F8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x218
  bl        0x17F464

.loc_0x218:
  lwz       r3, -0x6560(r13)
  bl        0x1C1ED8

.loc_0x220:
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
 * Address:	8023A170
 * Size:	000090
 */
void draw__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  lbz       r0, 0x26(r3)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  li        r0, 0x1
  stb       r0, 0x14(r3)
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0x1
  li        r5, 0
  bl        0x17F41C
  lwz       r3, -0x6560(r13)
  mr        r4, r31
  bl        0x1C1E8C
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x65F8(r13)
  li        r4, 0
  li        r5, 0
  bl        0x17F3EC

.loc_0x7C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023A200
 * Size:	000004
 */
void cleanup__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8023A204
 * Size:	000008
 */
void getSize__Q32og6Screen20DispMemberCourseNameFv(void)
{
/*
.loc_0x0:
  li        r3, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8023A20C
 * Size:	00000C
 */
void getOwnerID__Q32og6Screen20DispMemberCourseNameFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x4F
  addi      r3, r3, 0x4741
  blr
*/
}

/*
 * --INFO--
 * Address:	8023A218
 * Size:	000010
 */
void getMemberID__Q32og6Screen20DispMemberCourseNameFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x5552
  li        r3, 0x434F
  addi      r4, r4, 0x5345
  blr
*/
}

/*
 * --INFO--
 * Address:	8023A228
 * Size:	000028
 */
void __sinit_singleGS_Load_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x69C8(r13)
  stfsu     f0, 0x15C0(r3)
  stfs      f0, -0x69C4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}