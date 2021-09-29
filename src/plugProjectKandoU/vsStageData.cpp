

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
 * Size:	000088
 */
void __ct__Q34Game13ChallengeGame9StageDataFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022D68C
 * Size:	000238
 */
void read__Q34Game13ChallengeGame9StageDataFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r4
  mr        r3, r28
  bl        0x1E73DC
  mr        r30, r3
  mr        r3, r28
  li        r4, 0
  li        r5, 0
  bl        0x1E7A0C
  li        r0, 0x8
  li        r5, 0
  mtctr     r0

.loc_0x4C:
  lbz       r4, 0x0(r3)
  addi      r0, r5, 0x20
  stbx      r4, r31, r0
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  lbz       r4, 0x1(r3)
  addi      r0, r5, 0x21
  stbx      r4, r31, r0
  lbz       r0, 0x1(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  lbz       r4, 0x2(r3)
  addi      r0, r5, 0x22
  stbx      r4, r31, r0
  lbz       r0, 0x2(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  lbz       r4, 0x3(r3)
  addi      r0, r5, 0x23
  stbx      r4, r31, r0
  lbz       r0, 0x3(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  lbz       r4, 0x4(r3)
  addi      r0, r5, 0x24
  stbx      r4, r31, r0
  lbz       r0, 0x4(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  lbz       r4, 0x5(r3)
  addi      r0, r5, 0x25
  stbx      r4, r31, r0
  lbz       r0, 0x5(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  lbz       r4, 0x6(r3)
  addi      r0, r5, 0x26
  stbx      r4, r31, r0
  lbz       r0, 0x6(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  lbz       r4, 0x7(r3)
  addi      r0, r5, 0x27
  stbx      r4, r31, r0
  lbz       r0, 0x7(r3)
  extsb.    r0, r0
  beq-      .loc_0x118
  addi      r5, r5, 0x8
  addi      r3, r3, 0x8
  bdnz+     .loc_0x4C

.loc_0x118:
  addi      r3, r31, 0x18
  mr        r4, r28
  lwz       r12, 0x18(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmplwi    r30, 0x1
  blt-      .loc_0x15C
  mr        r3, r28
  bl        0x1E75E4
  stfs      f1, 0x60(r31)
  mr        r3, r28
  bl        0x1E72BC
  stw       r3, 0x64(r31)
  mr        r3, r28
  bl        0x1E72B0
  stw       r3, 0x68(r31)

.loc_0x15C:
  cmplwi    r30, 0x2
  blt-      .loc_0x17C
  mr        r3, r28
  bl        0x1E729C
  stw       r3, 0x6C(r31)
  mr        r3, r28
  bl        0x1E7290
  stw       r3, 0x70(r31)

.loc_0x17C:
  cmplwi    r30, 0x3
  blt-      .loc_0x190
  mr        r3, r28
  bl        0x1E727C
  stw       r3, 0x74(r31)

.loc_0x190:
  cmplwi    r30, 0x4
  blt-      .loc_0x1DC
  lwz       r0, 0x6C(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x209880
  stw       r3, 0x78(r31)
  li        r29, 0
  li        r30, 0
  b         .loc_0x1CC

.loc_0x1B4:
  mr        r3, r28
  bl        0x1E7568
  lwz       r3, 0x78(r31)
  addi      r29, r29, 0x1
  stfsx     f1, r3, r30
  addi      r30, r30, 0x4

.loc_0x1CC:
  lwz       r0, 0x6C(r31)
  cmpw      r29, r0
  blt+      .loc_0x1B4
  b         .loc_0x218

.loc_0x1DC:
  lwz       r0, 0x6C(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x2098C4
  stw       r3, 0x78(r31)
  li        r5, 0
  lfs       f0, -0x407C(r2)
  li        r4, 0
  b         .loc_0x20C

.loc_0x1FC:
  lwz       r3, 0x78(r31)
  addi      r5, r5, 0x1
  stfsx     f0, r3, r4
  addi      r4, r4, 0x4

.loc_0x20C:
  lwz       r0, 0x6C(r31)
  cmpw      r5, r0
  blt+      .loc_0x1FC

.loc_0x218:
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
 * Size:	0001DC
 */
void write__Q34Game13ChallengeGame9StageDataFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022D8C4
 * Size:	0000B4
 */
void __ct__Q34Game13ChallengeGame9StageListFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        0x1E3AB4
  lis       r3, 0x804C
  addi      r30, r31, 0x18
  addi      r0, r3, 0x111C
  stw       r0, 0x0(r31)
  mr        r3, r30
  bl        0x1E3A9C
  lis       r4, 0x804C
  addi      r3, r30, 0x18
  addi      r0, r4, 0x112C
  stw       r0, 0x0(r30)
  bl        -0x3C6C8
  addi      r3, r30, 0x18
  bl        -0x3C684
  lis       r4, 0x8048
  addi      r3, r30, 0x20
  addi      r4, r4, 0x3788
  crclr     6, 0x6
  bl        -0x1664EC
  lfs       f0, -0x4080(r2)
  lis       r3, 0x8048
  li        r5, 0
  li        r4, 0x1
  stfs      f0, 0x60(r30)
  addi      r0, r3, 0x3798
  mr        r3, r31
  stw       r5, 0x68(r30)
  stw       r5, 0x64(r30)
  stw       r4, 0x6C(r30)
  stw       r5, 0x70(r30)
  stw       r5, 0x74(r30)
  stw       r5, 0x78(r30)
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
 * Address:	8022D978
 * Size:	000060
 */
void __dt__Q34Game13ChallengeGame9StageDataFv(void)
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
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x112C
  stw       r0, 0x0(r30)
  bl        0x1E3BE0
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x209904

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
 * Address:	8022D9D8
 * Size:	00010C
 */
void read__Q34Game13ChallengeGame9StageListFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  mr        r27, r4
  lwz       r5, -0x6C18(r13)
  cmplwi    r5, 0
  beq-      .loc_0x34
  lwz       r3, 0x58(r5)
  bl        -0xDD2F8
  mr        r30, r3
  b         .loc_0x38

.loc_0x34:
  li        r30, 0x1

.loc_0x38:
  mr        r3, r27
  bl        0x1E707C
  mr        r31, r3
  li        r28, 0
  b         .loc_0xD4

.loc_0x4C:
  li        r3, 0x7C
  bl        -0x209B84
  mr.       r29, r3
  beq-      .loc_0xB8
  bl        0x1E395C
  lis       r4, 0x804C
  addi      r3, r29, 0x18
  addi      r0, r4, 0x112C
  stw       r0, 0x0(r29)
  bl        -0x3C808
  addi      r3, r29, 0x18
  bl        -0x3C7C4
  lis       r4, 0x8048
  addi      r3, r29, 0x20
  addi      r4, r4, 0x3788
  crclr     6, 0x6
  bl        -0x16662C
  lfs       f0, -0x4080(r2)
  li        r3, 0
  li        r0, 0x1
  stfs      f0, 0x60(r29)
  stw       r3, 0x68(r29)
  stw       r3, 0x64(r29)
  stw       r0, 0x6C(r29)
  stw       r3, 0x70(r29)
  stw       r3, 0x74(r29)
  stw       r3, 0x78(r29)

.loc_0xB8:
  mr        r3, r29
  mr        r4, r27
  bl        -0x40C
  mr        r4, r29
  addi      r3, r26, 0x18
  bl        0x1E3964
  addi      r28, r28, 0x1

.loc_0xD4:
  cmpw      r28, r31
  blt+      .loc_0x4C
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0xF8
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0xF8
  lwz       r3, 0x58(r3)
  bl        -0xDD3CC

.loc_0xF8:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void write__Q34Game13ChallengeGame9StageListFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DAE4
 * Size:	000084
 */
void getStageData__Q34Game13ChallengeGame9StageListFi(void)
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
  addi      r3, r30, 0x18
  lwz       r12, 0x18(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r31, 0
  blt-      .loc_0x40
  cmpw      r31, r3
  blt-      .loc_0x60

.loc_0x40:
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x37BC
  mr        r6, r31
  addi      r3, r3, 0x37AC
  li        r4, 0xD5
  crclr     6, 0x6
  bl        -0x203500

.loc_0x60:
  mr        r4, r31
  addi      r3, r30, 0x18
  bl        0x1E3B50
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
 * Address:	........
 * Size:	000090
 */
void __ct__Q34Game6VsGame9StageDataFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void read__Q34Game6VsGame9StageDataFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void write__Q34Game6VsGame9StageDataFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DB68
 * Size:	0000BC
 */
void __ct__Q34Game6VsGame9StageListFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        0x1E3810
  lis       r3, 0x804C
  addi      r30, r31, 0x18
  addi      r0, r3, 0x10FC
  stw       r0, 0x0(r31)
  mr        r3, r30
  bl        0x1E37F8
  lis       r4, 0x804C
  addi      r3, r30, 0x18
  addi      r0, r4, 0x110C
  stw       r0, 0x0(r30)
  bl        -0x3C96C
  addi      r3, r30, 0x18
  bl        -0x3C928
  lis       r4, 0x8048
  addi      r3, r30, 0x20
  addi      r4, r4, 0x3788
  crclr     6, 0x6
  bl        -0x166790
  lfs       f0, -0x4080(r2)
  li        r0, 0
  addi      r3, r30, 0x70
  subi      r4, r2, 0x4078
  stfs      f0, 0x60(r30)
  stw       r0, 0x68(r30)
  stw       r0, 0x64(r30)
  stw       r0, 0x6C(r30)
  crclr     6, 0x6
  bl        -0x1667B8
  li        r0, 0x7
  lis       r3, 0x8048
  stw       r0, 0xB0(r30)
  addi      r0, r3, 0x37D4
  mr        r3, r31
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
 * Address:	8022DC24
 * Size:	000060
 */
void __dt__Q34Game6VsGame9StageDataFv(void)
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
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x110C
  stw       r0, 0x0(r30)
  bl        0x1E3934
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x209BB0

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
 * Address:	8022DC84
 * Size:	000350
 */
void read__Q34Game6VsGame9StageListFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r25, r3
  mr        r26, r4
  lwz       r5, -0x6C18(r13)
  cmplwi    r5, 0
  beq-      .loc_0x34
  lwz       r3, 0x58(r5)
  bl        -0xDD5A4
  mr        r29, r3
  b         .loc_0x38

.loc_0x34:
  li        r29, 0x1

.loc_0x38:
  mr        r3, r26
  bl        0x1E6DD0
  mr        r30, r3
  li        r27, 0
  b         .loc_0x318

.loc_0x4C:
  li        r3, 0xB4
  bl        -0x209E30
  mr.       r28, r3
  beq-      .loc_0xC0
  bl        0x1E36B0
  lis       r4, 0x804C
  addi      r3, r28, 0x18
  addi      r0, r4, 0x110C
  stw       r0, 0x0(r28)
  bl        -0x3CAB4
  addi      r3, r28, 0x18
  bl        -0x3CA70
  lis       r4, 0x8048
  addi      r3, r28, 0x20
  addi      r4, r4, 0x3788
  crclr     6, 0x6
  bl        -0x1668D8
  lfs       f0, -0x4080(r2)
  li        r0, 0
  addi      r3, r28, 0x70
  subi      r4, r2, 0x4078
  stfs      f0, 0x60(r28)
  stw       r0, 0x68(r28)
  stw       r0, 0x64(r28)
  stw       r0, 0x6C(r28)
  crclr     6, 0x6
  bl        -0x166900
  li        r0, 0x7
  stw       r0, 0xB0(r28)

.loc_0xC0:
  mr        r3, r26
  bl        0x1E6D48
  mr        r31, r3
  mr        r3, r26
  li        r4, 0
  li        r5, 0
  bl        0x1E7378
  li        r0, 0x8
  li        r5, 0
  mtctr     r0

.loc_0xE8:
  lbz       r4, 0x0(r3)
  addi      r0, r5, 0x20
  stbx      r4, r28, r0
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  lbz       r4, 0x1(r3)
  addi      r0, r5, 0x21
  stbx      r4, r28, r0
  lbz       r0, 0x1(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  lbz       r4, 0x2(r3)
  addi      r0, r5, 0x22
  stbx      r4, r28, r0
  lbz       r0, 0x2(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  lbz       r4, 0x3(r3)
  addi      r0, r5, 0x23
  stbx      r4, r28, r0
  lbz       r0, 0x3(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  lbz       r4, 0x4(r3)
  addi      r0, r5, 0x24
  stbx      r4, r28, r0
  lbz       r0, 0x4(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  lbz       r4, 0x5(r3)
  addi      r0, r5, 0x25
  stbx      r4, r28, r0
  lbz       r0, 0x5(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  lbz       r4, 0x6(r3)
  addi      r0, r5, 0x26
  stbx      r4, r28, r0
  lbz       r0, 0x6(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  lbz       r4, 0x7(r3)
  addi      r0, r5, 0x27
  stbx      r4, r28, r0
  lbz       r0, 0x7(r3)
  extsb.    r0, r0
  beq-      .loc_0x1B4
  addi      r5, r5, 0x8
  addi      r3, r3, 0x8
  bdnz+     .loc_0xE8

.loc_0x1B4:
  addi      r3, r28, 0x18
  mr        r4, r26
  lwz       r12, 0x18(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r26
  bl        0x1E6F58
  stfs      f1, 0x60(r28)
  mr        r3, r26
  bl        0x1E6C30
  stw       r3, 0x64(r28)
  mr        r3, r26
  bl        0x1E6C24
  cmplwi    r31, 0x2
  stw       r3, 0x68(r28)
  blt-      .loc_0x204
  mr        r3, r26
  bl        0x1E6C10
  stw       r3, 0x6C(r28)

.loc_0x204:
  cmplwi    r31, 0x3
  blt-      .loc_0x2F4
  mr        r3, r26
  li        r4, 0
  li        r5, 0
  bl        0x1E7238
  li        r0, 0x8
  li        r5, 0
  mtctr     r0

.loc_0x228:
  lbz       r4, 0x0(r3)
  addi      r0, r5, 0x70
  stbx      r4, r28, r0
  lbz       r0, 0x0(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  lbz       r4, 0x1(r3)
  addi      r0, r5, 0x71
  stbx      r4, r28, r0
  lbz       r0, 0x1(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  lbz       r4, 0x2(r3)
  addi      r0, r5, 0x72
  stbx      r4, r28, r0
  lbz       r0, 0x2(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  lbz       r4, 0x3(r3)
  addi      r0, r5, 0x73
  stbx      r4, r28, r0
  lbz       r0, 0x3(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  lbz       r4, 0x4(r3)
  addi      r0, r5, 0x74
  stbx      r4, r28, r0
  lbz       r0, 0x4(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  lbz       r4, 0x5(r3)
  addi      r0, r5, 0x75
  stbx      r4, r28, r0
  lbz       r0, 0x5(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  lbz       r4, 0x6(r3)
  addi      r0, r5, 0x76
  stbx      r4, r28, r0
  lbz       r0, 0x6(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  lbz       r4, 0x7(r3)
  addi      r0, r5, 0x77
  stbx      r4, r28, r0
  lbz       r0, 0x7(r3)
  extsb.    r0, r0
  beq-      .loc_0x2F4
  addi      r5, r5, 0x8
  addi      r3, r3, 0x8
  bdnz+     .loc_0x228

.loc_0x2F4:
  cmplwi    r31, 0x4
  blt-      .loc_0x308
  mr        r3, r26
  bl        0x1E6B0C
  stw       r3, 0xB0(r28)

.loc_0x308:
  mr        r4, r28
  addi      r3, r25, 0x18
  bl        0x1E3474
  addi      r27, r27, 0x1

.loc_0x318:
  cmpw      r27, r30
  blt+      .loc_0x4C
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x33C
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x33C
  lwz       r3, 0x58(r3)
  bl        -0xDD8BC

.loc_0x33C:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001F8
 */
void write__Q34Game6VsGame9StageListFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DFD4
 * Size:	000084
 */
void getStageData__Q34Game6VsGame9StageListFi(void)
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
  addi      r3, r30, 0x18
  lwz       r12, 0x18(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r31, 0
  blt-      .loc_0x40
  cmpw      r31, r3
  blt-      .loc_0x60

.loc_0x40:
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x37BC
  mr        r6, r31
  addi      r3, r3, 0x37AC
  li        r4, 0x1AB
  crclr     6, 0x6
  bl        -0x2039F0

.loc_0x60:
  mr        r4, r31
  addi      r3, r30, 0x18
  bl        0x1E3660
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
 * Address:	8022E058
 * Size:	000084
 */
void __dt__Q34Game6VsGame9StageListFv(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804C
  addic.    r0, r30, 0x18
  addi      r0, r3, 0x10FC
  stw       r0, 0x0(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804C
  addi      r3, r30, 0x18
  addi      r0, r4, 0x110C
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        0x1E34E8

.loc_0x4C:
  mr        r3, r30
  li        r4, 0
  bl        0x1E34DC
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x20A008

.loc_0x68:
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
 * Address:	8022E0DC
 * Size:	000084
 */
void __dt__Q34Game13ChallengeGame9StageListFv(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804C
  addic.    r0, r30, 0x18
  addi      r0, r3, 0x111C
  stw       r0, 0x0(r30)
  beq-      .loc_0x4C
  lis       r4, 0x804C
  addi      r3, r30, 0x18
  addi      r0, r4, 0x112C
  li        r4, 0
  stw       r0, 0x18(r30)
  bl        0x1E3464

.loc_0x4C:
  mr        r3, r30
  li        r4, 0
  bl        0x1E3458
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x20A08C

.loc_0x68:
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
 * Address:	8022E160
 * Size:	000028
 */
void __sinit_vsStageData_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6A00(r13)
  stfsu     f0, 0x10F0(r3)
  stfs      f0, -0x69FC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}