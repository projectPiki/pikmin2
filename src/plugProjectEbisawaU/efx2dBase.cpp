

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
 * Address:	803B9830
 * Size:	000098
 */
void efx2d::TSimple1::create( (efx2d::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr.       r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5B48
  li        r4, 0xA
  addi      r5, r5, 0x5B58
  crclr     6, 0x6
  bl        -0x38F228

.loc_0x3C:
  lfs       f0, 0x0(r31)
  addi      r5, r1, 0x8
  lwz       r3, -0x65F8(r13)
  stfs      f0, 0x8(r1)
  lfs       f0, 0x4(r31)
  stfs      f0, 0xC(r1)
  lhz       r4, 0x8(r30)
  lbz       r6, 0x5(r30)
  lbz       r7, 0x4(r30)
  bl        -0x174
  stw       r3, 0xC(r30)
  lwz       r0, 0xC(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  li        r3, 0
  b         .loc_0x80

.loc_0x7C:
  li        r3, 0x1

.loc_0x80:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803B98C8
 * Size:	0000B0
 */
void efx2d::TSimple2::create( (efx2d::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr.       r28, r4
  mr        r27, r3
  bne-      .loc_0x38
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5B48
  li        r4, 0x19
  addi      r5, r5, 0x5B58
  crclr     6, 0x6
  bl        -0x38F2BC

.loc_0x38:
  lfs       f0, 0x0(r28)
  mr        r31, r27
  mr        r30, r27
  li        r29, 0
  stfs      f0, 0x8(r1)
  lfs       f0, 0x4(r28)
  stfs      f0, 0xC(r1)

.loc_0x54:
  lwz       r3, -0x65F8(r13)
  addi      r5, r1, 0x8
  lhz       r4, 0x8(r31)
  lbz       r6, 0x5(r27)
  lbz       r7, 0x4(r27)
  bl        -0x214
  stw       r3, 0xC(r30)
  lwz       r0, 0xC(r30)
  cmplwi    r0, 0
  bne-      .loc_0x84
  li        r3, 0
  b         .loc_0x9C

.loc_0x84:
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x2
  addi      r31, r31, 0x2
  blt+      .loc_0x54
  li        r3, 0x1

.loc_0x9C:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9978
 * Size:	0000B0
 */
void efx2d::TSimple3::create( (efx2d::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr.       r28, r4
  mr        r27, r3
  bne-      .loc_0x38
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5B48
  li        r4, 0x28
  addi      r5, r5, 0x5B58
  crclr     6, 0x6
  bl        -0x38F36C

.loc_0x38:
  lfs       f0, 0x0(r28)
  mr        r31, r27
  mr        r30, r27
  li        r29, 0
  stfs      f0, 0x8(r1)
  lfs       f0, 0x4(r28)
  stfs      f0, 0xC(r1)

.loc_0x54:
  lwz       r3, -0x65F8(r13)
  addi      r5, r1, 0x8
  lhz       r4, 0x8(r31)
  lbz       r6, 0x5(r27)
  lbz       r7, 0x4(r27)
  bl        -0x2C4
  stw       r3, 0x10(r30)
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  bne-      .loc_0x84
  li        r3, 0
  b         .loc_0x9C

.loc_0x84:
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x3
  addi      r31, r31, 0x2
  blt+      .loc_0x54
  li        r3, 0x1

.loc_0x9C:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9A28
 * Size:	0000A4
 */
void efx2d::TForever::create( (efx2d::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr.       r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5B48
  li        r4, 0x36
  addi      r5, r5, 0x5B58
  crclr     6, 0x6
  bl        -0x38F420

.loc_0x3C:
  lfs       f0, 0x0(r31)
  stfs      f0, 0x8(r1)
  lfs       f0, 0x4(r31)
  stfs      f0, 0xC(r1)
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  beq-      .loc_0x60
  li        r3, 0
  b         .loc_0x8C

.loc_0x60:
  lwz       r3, -0x65F8(r13)
  addi      r5, r1, 0x8
  lhz       r4, 0xC(r30)
  lbz       r6, 0x5(r30)
  lbz       r7, 0x4(r30)
  bl        -0x380
  stw       r3, 0x10(r30)
  lwz       r3, 0x10(r30)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31

.loc_0x8C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9ACC
 * Size:	00003C
 */
void efx2d::TForever::kill(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, -0x65F8(r13)
  lwz       r4, 0x10(r31)
  bl        -0x380
  li        r0, 0
  stw       r0, 0x10(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9B08
 * Size:	00003C
 */
void efx2d::TForever::fade(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, -0x65F8(r13)
  lwz       r4, 0x10(r31)
  bl        -0x390
  li        r0, 0
  stw       r0, 0x10(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9B44
 * Size:	000024
 */
void efx2d::TForever::setGlobalScale( (float))
{
/*
.loc_0x0:
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beqlr-    
  stfs      f1, 0x98(r3)
  stfs      f1, 0x9C(r3)
  stfs      f1, 0xA0(r3)
  stfs      f1, 0xB0(r3)
  stfs      f1, 0xB4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void setGlobalTranslation__Q25efx2d8TForeverFR10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9B68
 * Size:	000028
 */
void efx2d::TForever::setGlobalEnvColor( (JUtility::TColor &))
{
/*
.loc_0x0:
  lwz       r6, 0x10(r3)
  cmplwi    r6, 0
  beqlr-    
  lbz       r5, 0x2(r4)
  lbz       r3, 0x1(r4)
  lbz       r0, 0x0(r4)
  stb       r0, 0xBC(r6)
  stb       r3, 0xBD(r6)
  stb       r5, 0xBE(r6)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9B90
 * Size:	000014
 */
void efx2d::TForever::setGlobalAlpha( (unsigned char))
{
/*
.loc_0x0:
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beqlr-    
  stb       r4, 0xBB(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9BA4
 * Size:	000080
 */
void efx2d::TForeverN::__ct( (unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r6, 0x804C
  lis       r5, 0x804E
  stw       r0, 0x14(r1)
  addi      r0, r5, 0x7408
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r3, r6, 0x14F0
  stw       r3, 0x0(r30)
  stw       r0, 0x0(r30)
  stb       r4, 0x4(r30)
  lbz       r31, 0x4(r30)
  mulli     r3, r31, 0x14
  addi      r3, r3, 0x10
  bl        -0x395C38
  lis       r4, 0x803C
  lis       r5, 0x8031
  subi      r4, r4, 0x63DC
  mr        r7, r31
  subi      r5, r5, 0x5F6C
  li        r6, 0x14
  bl        -0x2F8210
  stw       r3, 0x8(r30)
  mr        r3, r30
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
 * Address:	803B9C24
 * Size:	000050
 */
void efx2d::TForever::__ct(void)
{
/*
.loc_0x0:
  lis       r4, 0x804C
  lis       r5, 0x804A
  addi      r0, r4, 0x14F0
  lis       r6, 0x804C
  stw       r0, 0x0(r3)
  addi      r0, r6, 0x14D8
  lis       r4, 0x804E
  li        r6, 0
  stw       r0, 0x0(r3)
  addi      r4, r4, 0x7420
  subi      r5, r5, 0x1D84
  stb       r6, 0x4(r3)
  addi      r0, r4, 0x18
  stb       r6, 0x5(r3)
  stw       r5, 0x8(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x8(r3)
  sth       r6, 0xC(r3)
  stw       r6, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9C74
 * Size:	000098
 */
void efx2d::TForeverN::create( (efx2d::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0x1
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x64

.loc_0x30:
  rlwinm    r0,r30,0,24,31
  lwz       r3, 0x8(r28)
  mulli     r0, r0, 0x14
  mr        r4, r29
  add       r3, r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60
  li        r31, 0

.loc_0x60:
  addi      r30, r30, 0x1

.loc_0x64:
  lbz       r0, 0x4(r28)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x30
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	803B9D0C
 * Size:	00006C
 */
void efx2d::TForeverN::kill(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  b         .loc_0x44

.loc_0x20:
  rlwinm    r0,r31,0,24,31
  lwz       r3, 0x8(r30)
  mulli     r0, r0, 0x14
  add       r3, r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x44:
  lbz       r0, 0x4(r30)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x20
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
 * Address:	803B9D78
 * Size:	00006C
 */
void efx2d::TForeverN::fade(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  b         .loc_0x44

.loc_0x20:
  rlwinm    r0,r31,0,24,31
  lwz       r3, 0x8(r30)
  mulli     r0, r0, 0x14
  add       r3, r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x44:
  lbz       r0, 0x4(r30)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x20
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
 * Address:	803B9DE4
 * Size:	00007C
 */
void efx2d::TForeverN::setGroup( (unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x50

.loc_0x28:
  rlwinm    r0,r31,0,24,31
  lwz       r3, 0x8(r29)
  mulli     r0, r0, 0x14
  mr        r4, r30
  add       r3, r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x50:
  lbz       r0, 0x4(r29)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x28
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
 * Size:	000050
 */
void efx2d::TForeverN::setGlobalScale( (float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void setGlobalTranslation__Q25efx2d9TForeverNFR10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void efx2d::TForeverN::setGlobalEnvColor( (JUtility::TColor &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9E60
 * Size:	000040
 */
void efx2d::TForeverN::setGlobalAlpha( (unsigned char))
{
/*
.loc_0x0:
  li        r7, 0
  b         .loc_0x2C

.loc_0x8:
  rlwinm    r0,r7,0,24,31
  lwz       r6, 0x8(r3)
  mulli     r5, r0, 0x14
  addi      r0, r5, 0x10
  lwzx      r5, r6, r0
  cmplwi    r5, 0
  beq-      .loc_0x28
  stb       r4, 0xBB(r5)

.loc_0x28:
  addi      r7, r7, 0x1

.loc_0x2C:
  lbz       r0, 0x4(r3)
  rlwinm    r5,r7,0,24,31
  cmplw     r5, r0
  blt+      .loc_0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	803B9EA0
 * Size:	000088
 */
void efx2d::TChasePos::create( (efx2d::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  li        r3, 0
  b         .loc_0x74

.loc_0x28:
  lwz       r3, -0x65F8(r13)
  lhz       r4, 0xC(r31)
  lwz       r5, 0x14(r31)
  lbz       r6, 0x5(r31)
  lbz       r7, 0x4(r31)
  bl        -0x7C0
  stw       r3, 0x10(r31)
  lwz       r3, 0x10(r31)
  cmplwi    r3, 0
  beq-      .loc_0x68
  cmplwi    r31, 0
  mr        r0, r31
  beq-      .loc_0x60
  addi      r0, r31, 0x8

.loc_0x60:
  stw       r0, 0xEC(r3)
  b         .loc_0x70

.loc_0x68:
  li        r3, 0
  b         .loc_0x74

.loc_0x70:
  li        r3, 0x1

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
 * Address:	803B9F28
 * Size:	000078
 */
void efx2d::TChasePos::execute( (JPABaseEmitter *))
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
  lwz       r0, 0x14(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5B48
  li        r4, 0xD6
  addi      r5, r5, 0x5B58
  crclr     6, 0x6
  bl        -0x38F928

.loc_0x44:
  lwz       r3, 0x14(r30)
  lfs       f0, 0x1378(r2)
  lfs       f2, 0x4(r3)
  lfs       f1, 0x0(r3)
  stfs      f1, 0xA4(r31)
  stfs      f2, 0xA8(r31)
  stfs      f0, 0xAC(r31)
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
 * Address:	803B9FA0
 * Size:	000088
 */
void efx2d::TChasePosDir::create( (efx2d::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  li        r3, 0
  b         .loc_0x74

.loc_0x28:
  lwz       r3, -0x65F8(r13)
  lhz       r4, 0xC(r31)
  lwz       r5, 0x14(r31)
  lbz       r6, 0x5(r31)
  lbz       r7, 0x4(r31)
  bl        -0x8C0
  stw       r3, 0x10(r31)
  lwz       r3, 0x10(r31)
  cmplwi    r3, 0
  beq-      .loc_0x68
  cmplwi    r31, 0
  mr        r0, r31
  beq-      .loc_0x60
  addi      r0, r31, 0x8

.loc_0x60:
  stw       r0, 0xEC(r3)
  b         .loc_0x70

.loc_0x68:
  li        r3, 0
  b         .loc_0x74

.loc_0x70:
  li        r3, 0x1

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
 * Address:	803BA028
 * Size:	0000B8
 */
void efx2d::TChasePosDir::execute( (JPABaseEmitter *))
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
  lwz       r0, 0x14(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5B48
  li        r4, 0xF4
  addi      r5, r5, 0x5B58
  crclr     6, 0x6
  bl        -0x38FA28

.loc_0x44:
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5B48
  li        r4, 0xF5
  addi      r5, r5, 0x5B58
  crclr     6, 0x6
  bl        -0x38FA50

.loc_0x6C:
  lwz       r4, 0x14(r30)
  lwz       r3, 0x18(r30)
  lfs       f2, 0x4(r4)
  lfs       f3, 0x0(r3)
  lfs       f4, 0x4(r3)
  lfs       f1, 0x0(r4)
  lfs       f0, 0x1378(r2)
  stfs      f1, 0xA4(r31)
  stfs      f2, 0xA8(r31)
  stfs      f0, 0xAC(r31)
  stfs      f3, 0x18(r31)
  stfs      f4, 0x1C(r31)
  stfs      f0, 0x20(r31)
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
 * Address:	803BA0E0
 * Size:	000084
 */
void efx2d::TChasePosDir::__dt(void)
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
  lis       r3, 0x804E
  addi      r3, r3, 0x7390
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x32A498

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x396090

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
 * Address:	803BA164
 * Size:	000008
 */
void @8@efx2d::TForever::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0xB00D4
*/
}

/*
 * --INFO--
 * Address:	803BA16C
 * Size:	000008
 */
void @8@efx2d::TChasePos::execute( (JPABaseEmitter *))
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x248
*/
}

/*
 * --INFO--
 * Address:	803BA174
 * Size:	000008
 */
void @8@efx2d::TChasePos::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0xB0168
*/
}

/*
 * --INFO--
 * Address:	803BA17C
 * Size:	000008
 */
void @8@efx2d::TChasePosDir::execute( (JPABaseEmitter *))
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x158
*/
}

/*
 * --INFO--
 * Address:	803BA184
 * Size:	000008
 */
void @8@efx2d::TChasePosDir::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0xA8
*/
}
