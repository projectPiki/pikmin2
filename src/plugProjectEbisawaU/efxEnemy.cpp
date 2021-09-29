

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
 * Address:	803B2D84
 * Size:	000124
 */
void create__Q23efx9TChibiHitFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8710
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x17
  crclr     6, 0x6
  bl        -0x3887B0

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x3C9C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xFC
  lwz       r4, 0xC(r29)
  li        r3, 0x1
  stfs      f31, 0x8(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x10(r29)
  stfs      f31, 0xC(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x14(r29)
  stfs      f31, 0x10(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x18(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0x100

.loc_0xFC:
  li        r3, 0

.loc_0x100:
  psq_l     f31,0x38(r1),0,0
  lwz       r0, 0x44(r1)
  lfd       f31, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803B2EA8
 * Size:	0000E0
 */
void create__Q23efx9TChouDownFPQ23efx3Arg(void)
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
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r2, 0x12C0
  bl        -0x2E8820
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x64
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5898
  li        r4, 0x2B
  addi      r5, r5, 0x58B4
  crclr     6, 0x6
  bl        -0x3888C8

.loc_0x64:
  lwz       r0, 0x10(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x98
  bge-      .loc_0x80
  cmpwi     r0, 0
  bge-      .loc_0x8C
  b         .loc_0xAC

.loc_0x80:
  cmpwi     r0, 0x3
  bge-      .loc_0xAC
  b         .loc_0xA4

.loc_0x8C:
  li        r0, 0x17
  sth       r0, 0xC(r30)
  b         .loc_0xAC

.loc_0x98:
  li        r0, 0x16
  sth       r0, 0xC(r30)
  b         .loc_0xAC

.loc_0xA4:
  li        r0, 0x15
  sth       r0, 0xC(r30)

.loc_0xAC:
  mr        r3, r30
  mr        r4, r31
  bl        -0x3870
  rlwinm    r3,r3,0,24,31
  lwz       r31, 0xC(r1)
  neg       r0, r3
  lwz       r30, 0x8(r1)
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B2F88
 * Size:	000044
 */
void setGlobalScale__Q23efx9TUmiHamonFf(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC(r3)
  cmplwi    r4, 0
  beq-      .loc_0x20
  stfs      f1, 0x98(r4)
  stfs      f1, 0x9C(r4)
  stfs      f1, 0xA0(r4)
  stfs      f1, 0xB0(r4)
  stfs      f1, 0xB4(r4)

.loc_0x20:
  lwz       r4, 0x20(r3)
  cmplwi    r4, 0
  beqlr-    
  stfs      f1, 0x98(r4)
  stfs      f1, 0x9C(r4)
  stfs      f1, 0xA0(r4)
  stfs      f1, 0xB0(r4)
  stfs      f1, 0xB4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B2FCC
 * Size:	000100
 */
void create__Q23efx9TUmiFlickFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8958
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x50
  crclr     6, 0x6
  bl        -0x3889F8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x3F8C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  lwz       r4, 0xC(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x10(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x14(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xDC

.loc_0xD8:
  li        r3, 0

.loc_0xDC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B30CC
 * Size:	0000D0
 */
void create__Q23efx10TUmiAttackFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8A58
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x61
  crclr     6, 0x6
  bl        -0x388AF8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x3E94
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B319C
 * Size:	000024
 */
void setGlobalScale__Q23efx7TUmiEatFf(void)
{
/*
.loc_0x0:
  lwz       r3, 0x8(r3)
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
 * Address:	803B31C0
 * Size:	000024
 */
void setGlobalScale__Q23efx11TUmiDeadawaFf(void)
{
/*
.loc_0x0:
  lwz       r3, 0x8(r3)
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
 * Address:	803B31E4
 * Size:	0000D0
 */
void create__Q23efx12TUmiDeadmeltFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8B70
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x86
  crclr     6, 0x6
  bl        -0x388C10

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x42DC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B32B4
 * Size:	0000E8
 */
void create__Q23efx10TJgmAttackFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8C40
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x99
  crclr     6, 0x6
  bl        -0x388CE0

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0xA18
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  lwz       r4, 0xC(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x20(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xC4

.loc_0xC0:
  li        r3, 0

.loc_0xC4:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B339C
 * Size:	000100
 */
void create__Q23efx11TJgmAttackWFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8D28
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xA9
  crclr     6, 0x6
  bl        -0x388DC8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x1804
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  lwz       r4, 0xC(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x24(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x3C(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xDC

.loc_0xD8:
  li        r3, 0

.loc_0xDC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B349C
 * Size:	0000D0
 */
void create__Q23efx8TJgmBackFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8E28
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xB9
  crclr     6, 0x6
  bl        -0x388EC8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x3E2C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B356C
 * Size:	0000E8
 */
void create__Q23efx9TJgmBackWFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E8EF8
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x388F98

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x1264
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  lwz       r4, 0xC(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x24(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xC4

.loc_0xC0:
  li        r3, 0

.loc_0xC4:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3654
 * Size:	0000C0
 */
void create__Q23efx7TImoEatFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  addi      r31, r4, 0x5898
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x28
  bl        -0x2E8FD8
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xD9
  crclr     6, 0x6
  bl        -0x389078

.loc_0x68:
  lwz       r0, 0x10(r30)
  mr        r4, r30
  cmpwi     r0, 0x1
  beq-      .loc_0x94
  bge-      .loc_0x9C
  cmpwi     r0, 0
  bge-      .loc_0x88
  b         .loc_0x9C

.loc_0x88:
  li        r0, 0xB7
  sth       r0, 0xC(r29)
  b         .loc_0x9C

.loc_0x94:
  li        r0, 0xB6
  sth       r0, 0xC(r29)

.loc_0x9C:
  mr        r3, r29
  bl        -0x4008
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
 * Address:	803B3714
 * Size:	000074
 */
void create__Q23efx13TUjinkoHd_ImoFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x4390
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  lwz       r4, 0x8(r31)
  li        r3, 0x1
  lfs       f0, 0x12C8(r2)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  lwz       r4, 0xC(r31)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  b         .loc_0x60

.loc_0x5C:
  li        r3, 0

.loc_0x60:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3788
 * Size:	000074
 */
void create__Q23efx13TUjinkoAp_ImoFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x4404
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  lwz       r4, 0x8(r31)
  li        r3, 0x1
  lfs       f0, 0x12C8(r2)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  lwz       r4, 0xC(r31)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  b         .loc_0x60

.loc_0x5C:
  li        r3, 0

.loc_0x60:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B37FC
 * Size:	0000D0
 */
void create__Q23efx9TImoSmokeFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E9188
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x107
  crclr     6, 0x6
  bl        -0x389228

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x418C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B38CC
 * Size:	0000D0
 */
void create__Q23efx12TOtaPartsoffFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E9258
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x117
  crclr     6, 0x6
  bl        -0x3892F8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x49C4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B399C
 * Size:	000040
 */
void setGlobalTranslation__Q23efx13TNewkurageSuiFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lwz       r5, 0xC(r3)
  lfs       f0, 0x0(r4)
  cmplwi    r5, 0
  lfs       f1, 0x4(r4)
  lfs       f2, 0x8(r4)
  beq-      .loc_0x24
  stfs      f0, 0xA4(r5)
  stfs      f1, 0xA8(r5)
  stfs      f2, 0xAC(r5)

.loc_0x24:
  lwz       r5, 0x1C(r3)
  cmplwi    r5, 0
  beqlr-    
  stfs      f0, 0xA4(r5)
  stfs      f1, 0xA8(r5)
  stfs      f2, 0xAC(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B39DC
 * Size:	000034
 */
void setLifeTime__Q23efx14TNewkurageHireFs(void)
{
/*
.loc_0x0:
  lwz       r5, 0xC(r3)
  cmplwi    r5, 0
  beq-      .loc_0x10
  sth       r4, 0x52(r5)

.loc_0x10:
  lwz       r5, 0x20(r3)
  cmplwi    r5, 0
  beq-      .loc_0x20
  sth       r4, 0x52(r5)

.loc_0x20:
  lwz       r5, 0x34(r3)
  cmplwi    r5, 0
  beqlr-    
  sth       r4, 0x52(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3A10
 * Size:	000040
 */
void setGlobalTranslation__Q23efx10TKurageSuiFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lwz       r5, 0xC(r3)
  lfs       f0, 0x0(r4)
  cmplwi    r5, 0
  lfs       f1, 0x4(r4)
  lfs       f2, 0x8(r4)
  beq-      .loc_0x24
  stfs      f0, 0xA4(r5)
  stfs      f1, 0xA8(r5)
  stfs      f2, 0xAC(r5)

.loc_0x24:
  lwz       r5, 0x1C(r3)
  cmplwi    r5, 0
  beqlr-    
  stfs      f0, 0xA4(r5)
  stfs      f1, 0xA8(r5)
  stfs      f2, 0xAC(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3A50
 * Size:	000034
 */
void setLifeTime__Q23efx11TKurageHireFs(void)
{
/*
.loc_0x0:
  lwz       r5, 0xC(r3)
  cmplwi    r5, 0
  beq-      .loc_0x10
  sth       r4, 0x52(r5)

.loc_0x10:
  lwz       r5, 0x20(r3)
  cmplwi    r5, 0
  beq-      .loc_0x20
  sth       r4, 0x52(r5)

.loc_0x20:
  lwz       r5, 0x34(r3)
  cmplwi    r5, 0
  beqlr-    
  sth       r4, 0x52(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3A84
 * Size:	000024
 */
void setGlobalScale__Q23efx9TQuriGlowFf(void)
{
/*
.loc_0x0:
  lwz       r3, 0x8(r3)
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
 * Address:	803B3AA8
 * Size:	0000A4
 */
void create__Q23efx14THebiAphd_baseFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5898
  li        r4, 0x166
  addi      r5, r5, 0x58B4
  crclr     6, 0x6
  bl        -0x3894A0

.loc_0x3C:
  mr        r3, r30
  mr        r4, r31
  bl        -0x4988
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  lwz       r0, 0x1C(r30)
  li        r3, 0x1
  lwz       r4, 0xC(r30)
  stw       r0, 0x24(r4)
  lwz       r0, 0x1C(r30)
  lwz       r4, 0x10(r30)
  stw       r0, 0x24(r4)
  lwz       r0, 0x1C(r30)
  lwz       r4, 0x14(r30)
  stw       r0, 0x24(r4)
  lwz       r0, 0x1C(r30)
  lwz       r4, 0x18(r30)
  stw       r0, 0x24(r4)
  b         .loc_0x8C

.loc_0x88:
  li        r3, 0

.loc_0x8C:
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
 * Address:	803B3B4C
 * Size:	000034
 */
void setGlobalAlpha__Q23efx13TKechappyTestFUc(void)
{
/*
.loc_0x0:
  lwz       r5, 0xC(r3)
  cmplwi    r5, 0
  beq-      .loc_0x10
  stb       r4, 0xBB(r5)

.loc_0x10:
  lwz       r5, 0x20(r3)
  cmplwi    r5, 0
  beq-      .loc_0x20
  stb       r4, 0xBB(r5)

.loc_0x20:
  lwz       r5, 0x34(r3)
  cmplwi    r5, 0
  beqlr-    
  stb       r4, 0xBB(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3B80
 * Size:	000024
 */
void setGlobalParticleScale__Q23efx13TKechappyTestFf(void)
{
/*
.loc_0x0:
  lwz       r4, 0x20(r3)
  cmplwi    r4, 0
  beq-      .loc_0x10
  stfs      f1, 0xB4(r4)

.loc_0x10:
  lwz       r4, 0x34(r3)
  cmplwi    r4, 0
  beqlr-    
  stfs      f1, 0xB4(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3BA4
 * Size:	000024
 */
void setAwayFromCenterSpeed__Q23efx13TKechappyTestFf(void)
{
/*
.loc_0x0:
  lwz       r4, 0x20(r3)
  cmplwi    r4, 0
  beq-      .loc_0x10
  stfs      f1, 0x34(r4)

.loc_0x10:
  lwz       r4, 0x34(r3)
  cmplwi    r4, 0
  beqlr-    
  stfs      f1, 0x34(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3BC8
 * Size:	000024
 */
void setSpread__Q23efx13TKechappyTestFf(void)
{
/*
.loc_0x0:
  lwz       r4, 0x20(r3)
  cmplwi    r4, 0
  beq-      .loc_0x10
  stfs      f1, 0x40(r4)

.loc_0x10:
  lwz       r4, 0x34(r3)
  cmplwi    r4, 0
  beqlr-    
  stfs      f1, 0x40(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3BEC
 * Size:	00004C
 */
void setGlobalDynamicsScale__Q23efx13TKechappyTestFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lwz       r5, 0x20(r3)
  cmplwi    r5, 0
  beq-      .loc_0x24
  lfs       f0, 0x0(r4)
  stfs      f0, 0x98(r5)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x9C(r5)
  lfs       f0, 0x8(r4)
  stfs      f0, 0xA0(r5)

.loc_0x24:
  lwz       r5, 0x34(r3)
  cmplwi    r5, 0
  beqlr-    
  lfs       f0, 0x0(r4)
  stfs      f0, 0x98(r5)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x9C(r5)
  lfs       f0, 0x8(r4)
  stfs      f0, 0xA0(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3C38
 * Size:	0000DC
 */
void setRateLOD__Q23efx9TYakiBodyFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  lis       r5, 0x8049
  rlwinm    r0,r4,2,0,29
  stmw      r27, 0x3C(r1)
  addi      r29, r5, 0x58CC
  addi      r27, r1, 0x8
  add       r27, r27, r0
  lwz       r28, 0xC(r3)
  lwz       r30, 0x0(r29)
  lwz       r31, 0x4(r29)
  cmplwi    r28, 0
  lwz       r12, 0x8(r29)
  lwz       r11, 0xC(r29)
  lwz       r10, 0x10(r29)
  lwz       r9, 0x14(r29)
  lwz       r8, 0x18(r29)
  lwz       r7, 0x1C(r29)
  lwz       r6, 0x20(r29)
  lwz       r5, 0x24(r29)
  lwz       r4, 0x28(r29)
  lwz       r0, 0x2C(r29)
  stw       r30, 0x8(r1)
  stw       r31, 0xC(r1)
  stw       r12, 0x10(r1)
  stw       r11, 0x14(r1)
  stw       r10, 0x18(r1)
  stw       r9, 0x1C(r1)
  stw       r8, 0x20(r1)
  stw       r7, 0x24(r1)
  stw       r6, 0x28(r1)
  stw       r5, 0x2C(r1)
  stw       r4, 0x30(r1)
  stw       r0, 0x34(r1)
  beq-      .loc_0x90
  lfs       f0, 0x0(r27)
  stfs      f0, 0x28(r28)

.loc_0x90:
  lwz       r28, 0x20(r3)
  cmplwi    r28, 0
  beq-      .loc_0xA4
  lfs       f0, 0xC(r27)
  stfs      f0, 0x28(r28)

.loc_0xA4:
  addi      r3, r3, 0x28
  lwz       r28, 0xC(r3)
  cmplwi    r28, 0
  beq-      .loc_0xBC
  lfs       f0, 0x18(r27)
  stfs      f0, 0x28(r28)

.loc_0xBC:
  lwz       r28, 0x20(r3)
  cmplwi    r28, 0
  beq-      .loc_0xD0
  lfs       f0, 0x24(r27)
  stfs      f0, 0x28(r28)

.loc_0xD0:
  lmw       r27, 0x3C(r1)
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3D14
 * Size:	0000D0
 */
void create__Q23efx7TPanAppFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E96A0
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x1C8
  crclr     6, 0x6
  bl        -0x389740

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x4E0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3DE4
 * Size:	0000D0
 */
void create__Q23efx8TPanHideFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E9770
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x1D9
  crclr     6, 0x6
  bl        -0x389810

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x4774
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3EB4
 * Size:	0000D0
 */
void create__Q23efx9TPanSmokeFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E9840
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x1E9
  crclr     6, 0x6
  bl        -0x3898E0

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x4844
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B3F84
 * Size:	0000D0
 */
void create__Q23efx14TBabaFly_ver01FPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E9910
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x1FA
  crclr     6, 0x6
  bl        -0x3899B0

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x4914
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B4054
 * Size:	000184
 */
void create__Q23efx7TBabaHeFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stfd      f30, 0x70(r1)
  psq_st    f30,0x78(r1),0,0
  stfd      f29, 0x60(r1)
  psq_st    f29,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r2, 0x12CC
  bl        -0x2E99E8
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x80
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5898
  li        r4, 0x209
  addi      r5, r5, 0x58B4
  crclr     6, 0x6
  bl        -0x389A90

.loc_0x80:
  lfs       f31, 0x4(r30)
  addi      r3, r1, 0x14
  lfs       f30, 0x8(r30)
  li        r4, 0x79
  lfs       f29, 0xC(r30)
  lfs       f1, 0x10(r30)
  bl        -0x2C9BD8
  stfs      f31, 0x20(r1)
  mr        r3, r29
  mr        r4, r30
  stfs      f30, 0x30(r1)
  stfs      f29, 0x40(r1)
  bl        -0x50F0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x14C
  li        r30, 0
  mr        r31, r29

.loc_0xC4:
  lwz       r5, 0x8(r31)
  addi      r3, r1, 0x14
  addi      r4, r5, 0x68
  addi      r5, r5, 0xA4
  bl        -0x32040C
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x2
  blt+      .loc_0xC4
  lfs       f1, 0x1C(r1)
  li        r3, 0x1
  lfs       f0, 0x12D4(r2)
  lfs       f5, 0x2C(r1)
  fmuls     f3, f1, f0
  lfs       f4, 0x3C(r1)
  fmuls     f2, f5, f0
  stfs      f1, 0x8(r1)
  fmuls     f1, f4, f0
  lwz       r4, 0xC(r29)
  fadds     f0, f3, f31
  stfs      f5, 0xC(r1)
  fadds     f5, f2, f30
  stfs      f4, 0x10(r1)
  fadds     f4, f1, f29
  stfs      f0, 0xA4(r4)
  stfs      f3, 0x8(r1)
  stfs      f2, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f5, 0xA8(r4)
  stfs      f0, 0x8(r1)
  stfs      f5, 0xC(r1)
  stfs      f4, 0x10(r1)
  stfs      f4, 0xAC(r4)
  b         .loc_0x150

.loc_0x14C:
  li        r3, 0

.loc_0x150:
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r0, 0x94(r1)
  lwz       r29, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	803B41D8
 * Size:	0000E8
 */
void create__Q23efx10TKoganeHitFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E9B64
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x222
  crclr     6, 0x6
  bl        -0x389C04

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x5240
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0xC(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xC4

.loc_0xC0:
  li        r3, 0

.loc_0xC4:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B42C0
 * Size:	0000E8
 */
void create__Q23efx11TKoganeDiveFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5898
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2E9C4C
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x232
  crclr     6, 0x6
  bl        -0x389CEC

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x5328
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0xC(r29)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xC4

.loc_0xC0:
  li        r3, 0

.loc_0xC4:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803B43A8
 * Size:	000004
 */
void init__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803B43AC
 * Size:	000144
 */
void execute__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r31, r5
  mr        r29, r3
  mr        r30, r4
  mr        r3, r31
  bl        -0x31EE1C
  fmr       f30, f1
  mr        r3, r31
  mr        r4, r30
  bl        -0x31EE50
  fmr       f31, f1
  mr        r3, r31
  mr        r4, r30
  bl        -0x31EE84
  lfs       f0, 0xA4(r30)
  lfs       f2, 0xA8(r30)
  fsubs     f4, f0, f1
  lfs       f3, 0xAC(r30)
  fsubs     f2, f2, f31
  lfs       f0, 0x12D8(r2)
  fsubs     f5, f3, f30
  fmuls     f3, f4, f4
  fmuls     f2, f2, f2
  fmuls     f4, f5, f5
  fadds     f2, f3, f2
  fadds     f4, f4, f2
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0x9C
  b         .loc_0xC0

.loc_0x9C:
  fsqrte    f5, f4
  lfs       f3, 0x12DC(r2)
  lfs       f0, 0x12E0(r2)
  frsp      f5, f5
  fmuls     f2, f5, f5
  fmuls     f3, f3, f5
  fnmsubs   f0, f4, f2, f0
  fmuls     f0, f3, f0
  fmuls     f4, f4, f0

.loc_0xC0:
  lfs       f0, 0x4(r29)
  fcmpo     cr0, f4, f0
  ble-      .loc_0x118
  lwz       r0, 0x7C(r31)
  ori       r0, r0, 0x2
  stw       r0, 0x7C(r31)
  lwz       r4, 0x8(r29)
  cmplwi    r4, 0
  beq-      .loc_0x118
  lwz       r3, 0x14(r4)
  lwz       r0, 0x18(r4)
  cmpw      r3, r0
  bge-      .loc_0x118
  mulli     r0, r3, 0xC
  lwz       r3, 0x10(r4)
  add       r3, r3, r0
  stfs      f1, 0x0(r3)
  stfs      f31, 0x4(r3)
  stfs      f30, 0x8(r3)
  lwz       r3, 0x14(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x14(r4)

.loc_0x118:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x44(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803B44F0
 * Size:	000090
 */
void create__Q23efx12TTankFireABCFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r0, r30, 0x4C
  stw       r0, 0x48(r3)
  lwz       r3, 0x48(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x12E4(r2)
  mr        r3, r30
  mr        r4, r31
  stfs      f0, 0x44(r30)
  bl        -0x274C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x74
  lwz       r3, 0xC(r30)
  addi      r0, r30, 0x40
  stw       r0, 0xF0(r3)
  lwz       r3, 0x20(r30)
  stw       r0, 0xF0(r3)
  lwz       r3, 0x34(r30)
  stw       r0, 0xF0(r3)

.loc_0x74:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B4580
 * Size:	000044
 */
void create__Q23efx12TTankFireINDFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x4EA8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2C
  lwz       r3, 0x8(r31)
  addi      r0, r31, 0x14
  stw       r0, 0xF0(r3)

.loc_0x2C:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B45C4
 * Size:	000084
 */
void create__Q23efx9TTankFireFPQ23efx3Arg(void)
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
  addi      r3, r29, 0x4
  lwz       r12, 0x4(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  addi      r3, r29, 0x6C
  mr        r4, r30
  lwz       r12, 0x6C(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  li        r31, 0x1

.loc_0x64:
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	803B4648
 * Size:	000098
 */
void create__Q23efx8TTankWatFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r0, r30, 0x60
  stw       r0, 0x5C(r3)
  lwz       r3, 0x5C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x12E4(r2)
  mr        r3, r30
  mr        r4, r31
  stfs      f0, 0x58(r30)
  bl        -0x33CC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C
  lwz       r3, 0xC(r30)
  addi      r0, r30, 0x54
  stw       r0, 0xF0(r3)
  lwz       r3, 0x20(r30)
  stw       r0, 0xF0(r3)
  lwz       r3, 0x34(r30)
  stw       r0, 0xF0(r3)
  lwz       r3, 0x48(r30)
  stw       r0, 0xF0(r3)

.loc_0x7C:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B46E0
 * Size:	000168
 */
void doExecuteEmitterOperation__Q23efx14TDnkmsThunderAFP14JPABaseEmitter(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r4
  stw       r30, 0x68(r1)
  mr        r30, r3
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5898
  li        r4, 0x284
  addi      r5, r5, 0x58B4
  crclr     6, 0x6
  bl        -0x38A0E0

.loc_0x44:
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5898
  li        r4, 0x285
  addi      r5, r5, 0x58B4
  crclr     6, 0x6
  bl        -0x38A108

.loc_0x6C:
  lwz       r6, 0x10(r30)
  addi      r3, r1, 0x2C
  addi      r4, r1, 0x20
  addi      r5, r1, 0x14
  lfs       f0, 0x0(r6)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x28(r1)
  lwz       r6, 0x14(r30)
  lfs       f0, 0x0(r6)
  stfs      f0, 0x14(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x1C(r1)
  bl        -0x4B10
  addi      r3, r1, 0x2C
  addi      r4, r31, 0x68
  addi      r5, r31, 0xA4
  bl        -0x320A84
  lwz       r4, 0x14(r30)
  lwz       r3, 0x10(r30)
  lfs       f0, 0x4(r4)
  lfs       f1, 0x4(r3)
  lfs       f3, 0x0(r3)
  fsubs     f4, f1, f0
  lfs       f2, 0x0(r4)
  lfs       f1, 0x8(r3)
  lfs       f0, 0x8(r4)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, 0x12D8(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x11C
  ble-      .loc_0x120
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x120

.loc_0x11C:
  fmr       f1, f0

.loc_0x120:
  lfs       f0, 0x12E8(r2)
  lfs       f3, 0x0(r31)
  fdivs     f0, f1, f0
  lfs       f2, 0x4(r31)
  lfs       f1, 0x8(r31)
  stfs      f3, 0x8(r1)
  stfs      f3, 0x0(r31)
  stfs      f1, 0x10(r1)
  stfs      f2, 0x4(r31)
  stfs      f2, 0xC(r1)
  stfs      f0, 0x10(r1)
  stfs      f0, 0x8(r31)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803B4848
 * Size:	000168
 */
void doExecuteEmitterOperation__Q23efx14TDnkmsThunderBFP14JPABaseEmitter(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r4
  stw       r30, 0x68(r1)
  mr        r30, r3
  lwz       r0, 0x10(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5898
  li        r4, 0x29A
  addi      r5, r5, 0x58B4
  crclr     6, 0x6
  bl        -0x38A248

.loc_0x44:
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5898
  li        r4, 0x29B
  addi      r5, r5, 0x58B4
  crclr     6, 0x6
  bl        -0x38A270

.loc_0x6C:
  lwz       r6, 0x10(r30)
  addi      r3, r1, 0x2C
  addi      r4, r1, 0x20
  addi      r5, r1, 0x14
  lfs       f0, 0x0(r6)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x28(r1)
  lwz       r6, 0x14(r30)
  lfs       f0, 0x0(r6)
  stfs      f0, 0x14(r1)
  lfs       f0, 0x4(r6)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x8(r6)
  stfs      f0, 0x1C(r1)
  bl        -0x4C78
  addi      r3, r1, 0x2C
  addi      r4, r31, 0x68
  addi      r5, r31, 0xA4
  bl        -0x320BEC
  lwz       r4, 0x14(r30)
  lwz       r3, 0x10(r30)
  lfs       f0, 0x4(r4)
  lfs       f1, 0x4(r3)
  lfs       f3, 0x0(r3)
  fsubs     f4, f1, f0
  lfs       f2, 0x0(r4)
  lfs       f1, 0x8(r3)
  lfs       f0, 0x8(r4)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, 0x12D8(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x11C
  ble-      .loc_0x120
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x120

.loc_0x11C:
  fmr       f1, f0

.loc_0x120:
  lfs       f0, 0x12E8(r2)
  lfs       f3, 0x0(r31)
  fdivs     f0, f1, f0
  lfs       f2, 0x4(r31)
  lfs       f1, 0x8(r31)
  stfs      f2, 0xC(r1)
  stfs      f3, 0x0(r31)
  stfs      f3, 0x8(r1)
  stfs      f0, 0x4(r31)
  stfs      f1, 0x10(r1)
  stfs      f0, 0xC(r1)
  stfs      f1, 0x8(r31)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803B49B0
 * Size:	0000DC
 */
void setRateLOD__Q23efx9THibaFireFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  lis       r5, 0x8049
  rlwinm    r0,r4,2,0,29
  stmw      r27, 0x3C(r1)
  addi      r29, r5, 0x58FC
  addi      r27, r1, 0x8
  add       r27, r27, r0
  lwz       r28, 0xC(r3)
  lwz       r30, 0x0(r29)
  lwz       r31, 0x4(r29)
  cmplwi    r28, 0
  lwz       r12, 0x8(r29)
  lwz       r11, 0xC(r29)
  lwz       r10, 0x10(r29)
  lwz       r9, 0x14(r29)
  lwz       r8, 0x18(r29)
  lwz       r7, 0x1C(r29)
  lwz       r6, 0x20(r29)
  lwz       r5, 0x24(r29)
  lwz       r4, 0x28(r29)
  lwz       r0, 0x2C(r29)
  stw       r30, 0x8(r1)
  stw       r31, 0xC(r1)
  stw       r12, 0x10(r1)
  stw       r11, 0x14(r1)
  stw       r10, 0x18(r1)
  stw       r9, 0x1C(r1)
  stw       r8, 0x20(r1)
  stw       r7, 0x24(r1)
  stw       r6, 0x28(r1)
  stw       r5, 0x2C(r1)
  stw       r4, 0x30(r1)
  stw       r0, 0x34(r1)
  beq-      .loc_0x90
  lfs       f0, 0x0(r27)
  stfs      f0, 0x28(r28)

.loc_0x90:
  lwz       r28, 0x1C(r3)
  cmplwi    r28, 0
  beq-      .loc_0xA4
  lfs       f0, 0xC(r27)
  stfs      f0, 0x28(r28)

.loc_0xA4:
  addi      r3, r3, 0x20
  lwz       r28, 0xC(r3)
  cmplwi    r28, 0
  beq-      .loc_0xBC
  lfs       f0, 0x18(r27)
  stfs      f0, 0x28(r28)

.loc_0xBC:
  lwz       r28, 0x1C(r3)
  cmplwi    r28, 0
  beq-      .loc_0xD0
  lfs       f0, 0x24(r27)
  stfs      f0, 0x28(r28)

.loc_0xD0:
  lmw       r27, 0x3C(r1)
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803B4A8C
 * Size:	0000C0
 */
void create__Q23efx9TGasuHibaFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  addi      r31, r4, 0x5898
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x94
  bl        -0x2EA410
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x2CA
  crclr     6, 0x6
  bl        -0x38A4B0

.loc_0x68:
  lbz       r0, 0x10(r30)
  mr        r4, r30
  cmplwi    r0, 0
  beq-      .loc_0x8C
  li        r3, 0x2B4
  li        r0, 0x2B5
  sth       r3, 0x10(r29)
  sth       r0, 0x20(r29)
  b         .loc_0x9C

.loc_0x8C:
  li        r3, 0x74
  li        r0, 0x75
  sth       r3, 0x10(r29)
  sth       r0, 0x20(r29)

.loc_0x9C:
  mr        r3, r29
  bl        -0x2038
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
 * Address:	803B4B4C
 * Size:	000078
 */
void setRateLOD__Q23efx9TGasuHibaFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r5, 0x8049
  addi      r9, r5, 0x5938
  rlwinm    r0,r4,2,0,29
  lwz       r10, 0xC(r3)
  addi      r11, r1, 0x8
  lwz       r8, 0x0(r9)
  add       r11, r11, r0
  lwz       r7, 0x4(r9)
  cmplwi    r10, 0
  lwz       r6, 0x8(r9)
  lwz       r5, 0xC(r9)
  lwz       r4, 0x10(r9)
  lwz       r0, 0x14(r9)
  stw       r8, 0x8(r1)
  stw       r7, 0xC(r1)
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r4, 0x18(r1)
  stw       r0, 0x1C(r1)
  beq-      .loc_0x5C
  lfs       f0, 0x0(r11)
  stfs      f0, 0x28(r10)

.loc_0x5C:
  lwz       r10, 0x1C(r3)
  cmplwi    r10, 0
  beq-      .loc_0x70
  lfs       f0, 0xC(r11)
  stfs      f0, 0x28(r10)

.loc_0x70:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803B4BC4
 * Size:	000218
 */
void create__Q23efx10TDenkiHibaFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stmw      r27, 0x6C(r1)
  mr        r27, r4
  lis       r4, 0x8049
  mr        r31, r3
  mr        r3, r27
  addi      r30, r4, 0x5898
  lwz       r12, 0x0(r27)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r30, 0xB8
  bl        -0x2EA540
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x60
  addi      r3, r30, 0
  addi      r5, r30, 0x1C
  li        r4, 0x2EF
  crclr     6, 0x6
  bl        -0x38A5E0

.loc_0x60:
  lfs       f0, 0x10(r27)
  mr        r3, r31
  mr        r4, r27
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x14(r27)
  stfs      f0, 0x30(r1)
  lfs       f0, 0x18(r27)
  stfs      f0, 0x34(r1)
  lfs       f0, 0x1C(r27)
  stfs      f0, 0x20(r1)
  lfs       f0, 0x20(r27)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x24(r27)
  stfs      f0, 0x28(r1)
  bl        -0x2AB4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x200
  addi      r3, r1, 0x38
  addi      r4, r1, 0x2C
  addi      r5, r1, 0x20
  bl        -0x4FF4
  li        r28, 0
  mr        r29, r31

.loc_0xBC:
  lwz       r30, 0xC(r29)
  cmplwi    r30, 0
  beq-      .loc_0x130
  addi      r3, r1, 0x38
  addi      r4, r30, 0x68
  addi      r5, r30, 0xA4
  bl        -0x320F7C
  lwz       r0, 0x28(r27)
  cmpwi     r0, 0x1
  bne-      .loc_0x108
  li        r3, 0xFF
  li        r0, 0
  stb       r3, 0xB8(r30)
  stb       r0, 0xB9(r30)
  stb       r0, 0xBA(r30)
  stb       r3, 0xBC(r30)
  stb       r0, 0xBD(r30)
  stb       r0, 0xBE(r30)
  b         .loc_0x130

.loc_0x108:
  cmpwi     r0, 0x2
  bne-      .loc_0x130
  li        r3, 0
  li        r0, 0xFF
  stb       r3, 0xB8(r30)
  stb       r3, 0xB9(r30)
  stb       r0, 0xBA(r30)
  stb       r3, 0xBC(r30)
  stb       r3, 0xBD(r30)
  stb       r0, 0xBE(r30)

.loc_0x130:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x10
  cmpwi     r28, 0x3
  blt+      .loc_0xBC
  lfs       f1, 0x30(r1)
  lfs       f0, 0x24(r1)
  lfs       f3, 0x2C(r1)
  fsubs     f4, f1, f0
  lfs       f2, 0x20(r1)
  lfs       f1, 0x34(r1)
  lfs       f0, 0x28(r1)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, 0x12D8(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f2, f2, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0x190
  ble-      .loc_0x194
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0x194

.loc_0x190:
  fmr       f2, f0

.loc_0x194:
  lfs       f0, 0x12E8(r2)
  li        r3, 0x1
  lfs       f1, 0x12EC(r2)
  fdivs     f4, f2, f0
  lwz       r4, 0xC(r31)
  stfs      f1, 0x14(r1)
  stfs      f1, 0x0(r4)
  stfs      f1, 0x4(r4)
  stfs      f1, 0x18(r1)
  stfs      f4, 0x8(r4)
  lwz       r4, 0x1C(r31)
  stfs      f4, 0x1C(r1)
  stfs      f1, 0x0(r4)
  stfs      f4, 0x4(r4)
  stfs      f1, 0x8(r4)
  lwz       r4, 0x2C(r31)
  stfs      f1, 0x8(r1)
  lfs       f2, 0x4(r4)
  lfs       f3, 0x8(r4)
  lfs       f0, 0x0(r4)
  fmuls     f2, f2, f4
  stfs      f4, 0xC(r1)
  stfs      f0, 0x0(r4)
  stfs      f2, 0x4(r4)
  stfs      f1, 0x10(r1)
  stfs      f3, 0x8(r4)
  b         .loc_0x204

.loc_0x200:
  li        r3, 0

.loc_0x204:
  lmw       r27, 0x6C(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void setRateLOD__Q23efx10TDenkiHibaFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B4DDC
 * Size:	000128
 */
void create__Q23efx13TDenkiHibaMgrFPQ23efx3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x34(r1)
  mr        r29, r3
  mr        r3, r30
  addi      r31, r4, 0x5898
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0xB8
  bl        -0x2EA760
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x340
  crclr     6, 0x6
  bl        -0x38A800

.loc_0x68:
  lfs       f0, 0x10(r30)
  lis       r3, 0x804B
  subi      r0, r3, 0x5814
  addi      r3, r29, 0x80
  stfs      f0, 0xA0(r29)
  addi      r4, r1, 0x18
  lfs       f0, 0x14(r30)
  stfs      f0, 0xA4(r29)
  lfs       f0, 0x18(r30)
  stfs      f0, 0xA8(r29)
  lfs       f0, 0x1C(r30)
  stfs      f0, 0xAC(r29)
  lfs       f0, 0x20(r30)
  stfs      f0, 0xB0(r29)
  lfs       f0, 0x24(r30)
  stfs      f0, 0xB4(r29)
  stw       r0, 0x18(r1)
  lfs       f0, 0xA0(r29)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0xA4(r29)
  stfs      f0, 0x20(r1)
  lfs       f0, 0xA8(r29)
  stfs      f0, 0x24(r1)
  stw       r0, 0x8(r1)
  lfs       f0, 0xAC(r29)
  stfs      f0, 0xC(r1)
  lfs       f0, 0xB0(r29)
  stfs      f0, 0x10(r1)
  lfs       f0, 0xB4(r29)
  stfs      f0, 0x14(r1)
  lwz       r12, 0x80(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r29, 0x90
  addi      r4, r1, 0x8
  lwz       r12, 0x90(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x44(r1)
  li        r3, 0x1
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
 * Address:	803B4F04
 * Size:	000178
 */
void createHiba__Q23efx13TDenkiHibaMgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  lis       r6, 0x804B
  stw       r0, 0x84(r1)
  subi      r6, r6, 0x5814
  stw       r31, 0x7C(r1)
  mr        r31, r3
  lwz       r12, 0xAC(r3)
  lis       r3, 0x8051
  lwz       r11, 0xB0(r31)
  addi      r5, r3, 0x41E4
  lwz       r10, 0xB4(r31)
  lis       r3, 0x804C
  lwz       r9, 0xA0(r31)
  addi      r0, r3, 0x5F28
  lwz       r8, 0xA4(r31)
  addi      r3, r31, 0x4
  lwz       r7, 0xA8(r31)
  stw       r12, 0x8(r1)
  lfs       f8, 0x0(r5)
  stw       r11, 0xC(r1)
  lfs       f7, 0x4(r5)
  stw       r10, 0x10(r1)
  lfs       f6, 0x8(r5)
  stw       r9, 0x14(r1)
  lfs       f2, 0x8(r1)
  stw       r8, 0x18(r1)
  lfs       f5, 0x14(r1)
  stw       r7, 0x1C(r1)
  lfs       f4, 0x18(r1)
  stw       r6, 0x40(r1)
  lfs       f3, 0x1C(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stw       r4, 0x68(r1)
  addi      r4, r1, 0x40
  stfs      f8, 0x44(r1)
  stfs      f7, 0x48(r1)
  stfs      f6, 0x4C(r1)
  stw       r0, 0x40(r1)
  stfs      f5, 0x50(r1)
  stfs      f4, 0x54(r1)
  stfs      f3, 0x58(r1)
  stfs      f2, 0x5C(r1)
  stfs      f1, 0x60(r1)
  stfs      f0, 0x64(r1)
  lwz       r12, 0x4(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804B
  addi      r3, r31, 0x38
  subi      r0, r4, 0x5814
  addi      r4, r1, 0x30
  stw       r0, 0x30(r1)
  lfs       f0, 0xA0(r31)
  stfs      f0, 0x34(r1)
  lfs       f0, 0xA4(r31)
  stfs      f0, 0x38(r1)
  lfs       f0, 0xA8(r31)
  stfs      f0, 0x3C(r1)
  stw       r0, 0x20(r1)
  lfs       f0, 0xAC(r31)
  stfs      f0, 0x24(r1)
  lfs       f0, 0xB0(r31)
  stfs      f0, 0x28(r1)
  lfs       f0, 0xB4(r31)
  stfs      f0, 0x2C(r1)
  lwz       r12, 0x38(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x5C
  addi      r4, r1, 0x20
  lwz       r12, 0x5C(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x80
  lwz       r12, 0x80(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x90
  lwz       r12, 0x90(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x84(r1)
  li        r3, 0x1
  lwz       r31, 0x7C(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void createHiba__Q23efx13TDenkiHibaMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B507C
 * Size:	00008C
 */
void forceKill__Q23efx13TDenkiHibaMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x4
  lwz       r12, 0x4(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x38
  lwz       r12, 0x38(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x5C
  lwz       r12, 0x5C(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x80
  lwz       r12, 0x80(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x90
  lwz       r12, 0x90(r31)
  lwz       r12, 0xC(r12)
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
 * Address:	803B5108
 * Size:	00008C
 */
void fade__Q23efx13TDenkiHibaMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x4
  lwz       r12, 0x4(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x38
  lwz       r12, 0x38(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x5C
  lwz       r12, 0x5C(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x80
  lwz       r12, 0x80(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x90
  lwz       r12, 0x90(r31)
  lwz       r12, 0x10(r12)
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
 * Address:	803B5194
 * Size:	0000B4
 */
void setRateLOD__Q23efx13TDenkiHibaMgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  lis       r5, 0x8049
  addi      r12, r5, 0x5960
  rlwinm    r0,r4,2,0,29
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  addi      r30, r1, 0x8
  add       r30, r30, r0
  lwz       r31, 0x10(r3)
  lwz       r11, 0x0(r12)
  lwz       r10, 0x4(r12)
  cmplwi    r31, 0
  lwz       r9, 0x8(r12)
  lwz       r8, 0xC(r12)
  lwz       r7, 0x10(r12)
  lwz       r6, 0x14(r12)
  lwz       r5, 0x18(r12)
  lwz       r4, 0x1C(r12)
  lwz       r0, 0x20(r12)
  stw       r11, 0x8(r1)
  stw       r10, 0xC(r1)
  stw       r9, 0x10(r1)
  stw       r8, 0x14(r1)
  stw       r7, 0x18(r1)
  stw       r6, 0x1C(r1)
  stw       r5, 0x20(r1)
  stw       r4, 0x24(r1)
  stw       r0, 0x28(r1)
  beq-      .loc_0x7C
  lfs       f0, 0x0(r30)
  stfs      f0, 0x28(r31)

.loc_0x7C:
  lwz       r31, 0x20(r3)
  cmplwi    r31, 0
  beq-      .loc_0x90
  lfs       f0, 0xC(r30)
  stfs      f0, 0x28(r31)

.loc_0x90:
  lwz       r31, 0x30(r3)
  cmplwi    r31, 0
  beq-      .loc_0xA4
  lfs       f0, 0x18(r30)
  stfs      f0, 0x28(r31)

.loc_0xA4:
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803B5248
 * Size:	000048
 */
void forceKill__Q23efx8TTankWatFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x3EC0
  lwz       r3, 0x5C(r31)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B5290
 * Size:	000050
 */
void forceKill__Q23efx9TTankFireFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x4
  lwz       r12, 0x4(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x6C
  lwz       r12, 0x6C(r31)
  lwz       r12, 0xC(r12)
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
 * Address:	803B52E0
 * Size:	000048
 */
void forceKill__Q23efx12TTankFireABCFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x3430
  lwz       r3, 0x48(r31)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803B5328
 * Size:	00009C
 */
void __dt__Q23efx14TBabaFly_ver01Fv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x6D38
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x3256F8

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3912F0

.loc_0x80:
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
 * Address:	803B53C4
 * Size:	00009C
 */
void __dt__Q23efx9TPanSmokeFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x6D84
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x325794

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x39138C

.loc_0x80:
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
 * Address:	803B5460
 * Size:	00009C
 */
void __dt__Q23efx8TPanHideFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x6DD0
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804B
  addi      r3, r3, 0x2C24
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x325830

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x391428

.loc_0x80:
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
 * Address:	803B54FC
 * Size:	00009C
 */
void __dt__Q23efx9TImoSmokeFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x6E58
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x3258CC

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3914C4

.loc_0x80:
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
 * Address:	803B5598
 * Size:	00009C
 */
void __dt__Q23efx7TImoEatFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x6ECC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x325968

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x391560

.loc_0x80:
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
 * Address:	803B5634
 * Size:	00009C
 */
void __dt__Q23efx8TJgmBackFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x6F34
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x325A04

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3915FC

.loc_0x80:
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
 * Address:	803B56D0
 * Size:	00009C
 */
void __dt__Q23efx9TChouDownFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x6FF4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x325AA0

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x391698

.loc_0x80:
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
 * Address:	803B576C
 * Size:	000008
 */
void @4@__dt__Q23efx9TChouDownFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xA0
*/
}

/*
 * --INFO--
 * Address:	803B5774
 * Size:	000008
 */
void @4@__dt__Q23efx8TJgmBackFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x144
*/
}

/*
 * --INFO--
 * Address:	803B577C
 * Size:	000008
 */
void @4@__dt__Q23efx7TImoEatFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x1E8
*/
}

/*
 * --INFO--
 * Address:	803B5784
 * Size:	000008
 */
void @4@__dt__Q23efx9TImoSmokeFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x28C
*/
}

/*
 * --INFO--
 * Address:	803B578C
 * Size:	000008
 */
void @4@__dt__Q23efx8TPanHideFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x330
*/
}

/*
 * --INFO--
 * Address:	803B5794
 * Size:	000008
 */
void @4@__dt__Q23efx9TPanSmokeFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x3D4
*/
}

/*
 * --INFO--
 * Address:	803B579C
 * Size:	000008
 */
void @4@__dt__Q23efx14TBabaFly_ver01Fv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x478
*/
}

/*
 * --INFO--
 * Address:	803B57A4
 * Size:	000008
 */
void @4@__dt__Q23efx12TTankFireINDFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x116DFC
*/
}

/*
 * --INFO--
 * Address:	803B57AC
 * Size:	000008
 */
void @4@__dt__Q23efx14TDnkmsThunderAFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x139D1C
*/
}

/*
 * --INFO--
 * Address:	803B57B4
 * Size:	000008
 */
void @4@__dt__Q23efx14TDnkmsThunderBFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x139DA8
*/
}