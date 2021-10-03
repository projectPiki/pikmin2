

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
 * Address:	803B57BC
 * Size:	000108
 */
void efx::TOtakaraDive::create( (efx::Arg *))
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
  addi      r31, r4, 0x5988
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2EB148
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x7B
  crclr     6, 0x6
  bl        -0x38B1E8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  lfs       f0, 0x12F0(r2)
  mr        r4, r30
  fdivs     f31, f31, f0
  bl        -0x6784
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE0
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
  b         .loc_0xE4

.loc_0xE0:
  li        r3, 0

.loc_0xE4:
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
 * Address:	803B58C4
 * Size:	000108
 */
void efx::TTsuyuGrow0::create( (efx::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stfd      f29, 0x40(r1)
  psq_st    f29,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r2, 0x12F4
  bl        -0x2EB254
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x7C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5988
  li        r4, 0x8F
  addi      r5, r5, 0x59A4
  crclr     6, 0x6
  bl        -0x38B2FC

.loc_0x7C:
  lfs       f31, 0x4(r31)
  addi      r3, r1, 0x8
  lfs       f30, 0x8(r31)
  li        r4, 0x79
  lfs       f29, 0xC(r31)
  lfs       f1, 0x10(r31)
  bl        -0x2CB444
  stfs      f31, 0x14(r1)
  mr        r3, r30
  mr        r4, r31
  stfs      f30, 0x24(r1)
  stfs      f29, 0x34(r1)
  bl        -0x69EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD4
  lwz       r5, 0x8(r30)
  addi      r3, r1, 0x8
  addi      r4, r5, 0x68
  addi      r5, r5, 0xA4
  bl        -0x321C70
  li        r3, 0x1
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0

.loc_0xD8:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r0, 0x74(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803B59CC
 * Size:	000100
 */
void efx::TOtakaraApL::create( (efx::Arg *))
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
  addi      r31, r4, 0x5988
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2EB358
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xA6
  crclr     6, 0x6
  bl        -0x38B3F8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x698C
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
 * Address:	803B5ACC
 * Size:	0000E8
 */
void efx::TOtakaraApS::create( (efx::Arg *))
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
  addi      r31, r4, 0x5988
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2EB458
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xB7
  crclr     6, 0x6
  bl        -0x38B4F8

.loc_0x70:
  lfs       f31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x6B34
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
 * Address:	803B5BB4
 * Size:	000314
 */
void efx::TOtakaraAp::create( (efx::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stw       r31, 0x8C(r1)
  stw       r30, 0x88(r1)
  mr        r30, r4
  lis       r4, 0x8049
  mr        r3, r30
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5988
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2EB538
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xC8
  crclr     6, 0x6
  bl        -0x38B5D8

.loc_0x68:
  lfs       f4, 0x10(r30)
  lfs       f0, 0x12F0(r2)
  lfs       f3, 0x4(r30)
  fdivs     f5, f4, f0
  lfs       f2, 0x8(r30)
  lfs       f1, 0xC(r30)
  stfs      f3, 0x30(r1)
  stfs      f2, 0x34(r1)
  stfs      f1, 0x38(r1)
  fcmpo     cr0, f4, f0
  bge-      .loc_0x1B4
  lwz       r0, 0x30(r1)
  lis       r3, 0x804B
  subi      r9, r3, 0x5808
  lwz       r5, 0x34(r1)
  lwz       r4, 0x38(r1)
  lis       r8, 0x804E
  stw       r5, 0x18(r1)
  lis       r3, 0x804B
  addi      r8, r8, 0x6A64
  lis       r6, 0x804E
  stw       r0, 0x14(r1)
  subi      r0, r3, 0x5814
  li        r7, 0
  lis       r3, 0x804B
  stw       r4, 0x1C(r1)
  subi      r12, r3, 0x5D24
  lfs       f2, 0x14(r1)
  li        r5, 0x12A
  stw       r0, 0x68(r1)
  li        r4, 0x12B
  lfs       f1, 0x18(r1)
  addi      r0, r6, 0x7150
  stw       r9, 0x20(r1)
  addi      r3, r1, 0x68
  lfs       f0, 0x1C(r1)
  stw       r8, 0x20(r1)
  sth       r5, 0x24(r1)
  sth       r4, 0x26(r1)
  stw       r7, 0x28(r1)
  stw       r7, 0x2C(r1)
  stw       r0, 0x20(r1)
  stfs      f2, 0x6C(r1)
  stfs      f1, 0x70(r1)
  stfs      f0, 0x74(r1)
  stw       r12, 0x68(r1)
  stfs      f5, 0x78(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2EB62C
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x15C
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xB7
  crclr     6, 0x6
  bl        -0x38B6CC

.loc_0x15C:
  lfs       f31, 0x78(r1)
  addi      r4, r1, 0x68
  addi      r3, r1, 0x20
  bl        -0x6D08
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1AC
  lwz       r4, 0x28(r1)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x2C(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0x2F4

.loc_0x1AC:
  li        r3, 0
  b         .loc_0x2F4

.loc_0x1B4:
  lwz       r0, 0x30(r1)
  lis       r3, 0x804B
  subi      r10, r3, 0x5808
  lwz       r5, 0x34(r1)
  lwz       r4, 0x38(r1)
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  subi      r0, r3, 0x5814
  lis       r3, 0x804B
  lis       r9, 0x804E
  li        r7, 0
  stw       r5, 0xC(r1)
  subi      r12, r3, 0x5D24
  lfs       f2, 0x8(r1)
  stw       r4, 0x10(r1)
  li        r8, 0x127
  lfs       f1, 0xC(r1)
  li        r5, 0x128
  stw       r0, 0x3C(r1)
  lis       r6, 0x804E
  lfs       f0, 0x10(r1)
  li        r4, 0x129
  stw       r10, 0x50(r1)
  addi      r3, r9, 0x6A50
  addi      r0, r6, 0x7164
  stw       r3, 0x50(r1)
  addi      r3, r1, 0x3C
  sth       r8, 0x54(r1)
  sth       r5, 0x56(r1)
  sth       r4, 0x58(r1)
  stw       r7, 0x5C(r1)
  stw       r7, 0x60(r1)
  stw       r7, 0x64(r1)
  stw       r0, 0x50(r1)
  stfs      f2, 0x40(r1)
  stfs      f1, 0x44(r1)
  stfs      f0, 0x48(r1)
  stw       r12, 0x3C(r1)
  stfs      f5, 0x4C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x10
  bl        -0x2EB758
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x288
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xA6
  crclr     6, 0x6
  bl        -0x38B7F8

.loc_0x288:
  lfs       f31, 0x4C(r1)
  addi      r4, r1, 0x3C
  addi      r3, r1, 0x50
  bl        -0x6D8C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2F0
  lwz       r4, 0x5C(r1)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x60(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x64(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0x2F4

.loc_0x2F0:
  li        r3, 0

.loc_0x2F4:
  psq_l     f31,0x98(r1),0,0
  lwz       r0, 0xA4(r1)
  lfd       f31, 0x90(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	803B5EC8
 * Size:	000124
 */
void efx::TEgateBC::create( (efx::Arg *))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stfd      f29, 0x40(r1)
  psq_st    f29,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r30, r4
  mr        r31, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r2, 0x12F4
  bl        -0x2EB858
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x7C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5988
  li        r4, 0xDF
  addi      r5, r5, 0x59A4
  crclr     6, 0x6
  bl        -0x38B900

.loc_0x7C:
  lfs       f31, 0x4(r30)
  addi      r3, r1, 0x8
  lfs       f30, 0x8(r30)
  li        r4, 0x79
  lfs       f29, 0xC(r30)
  lfs       f1, 0x10(r30)
  bl        -0x2CBA48
  stfs      f31, 0x14(r1)
  mr        r3, r31
  mr        r4, r30
  stfs      f30, 0x24(r1)
  stfs      f29, 0x34(r1)
  bl        -0x3480
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF0
  li        r30, 0

.loc_0xBC:
  lwz       r5, 0xC(r31)
  cmplwi    r5, 0
  beq-      .loc_0xD8
  addi      r3, r1, 0x8
  addi      r4, r5, 0x68
  addi      r5, r5, 0xA4
  bl        -0x322280

.loc_0xD8:
  addi      r30, r30, 0x1
  addi      r31, r31, 0x10
  cmpwi     r30, 0x2
  blt+      .loc_0xBC
  li        r3, 0x1
  b         .loc_0xF4

.loc_0xF0:
  li        r3, 0

.loc_0xF4:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r0, 0x74(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	803B5FEC
 * Size:	000124
 */
void efx::TKouhaiDamage::create( (efx::Arg *))
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
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x0(r30)
  addi      r31, r4, 0x5988
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x28
  bl        -0x2EB980
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x78
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0xF9
  crclr     6, 0x6
  bl        -0x38BA20

.loc_0x78:
  lwz       r31, 0x10(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x70EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF4
  cmpwi     r31, 0x1
  beq-      .loc_0xC0
  bge-      .loc_0xA8
  cmpwi     r31, 0
  bge-      .loc_0xB4
  b         .loc_0xD4

.loc_0xA8:
  cmpwi     r31, 0x3
  bge-      .loc_0xD4
  b         .loc_0xCC

.loc_0xB4:
  lfs       f31, 0x12FC(r2)
  fmr       f30, f31
  b         .loc_0xD4

.loc_0xC0:
  lfs       f31, 0x1300(r2)
  fmr       f30, f31
  b         .loc_0xD4

.loc_0xCC:
  lfs       f31, 0x1304(r2)
  fmr       f30, f31

.loc_0xD4:
  lwz       r4, 0x8(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f30, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  b         .loc_0xF8

.loc_0xF4:
  li        r3, 0

.loc_0xF8:
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
 * Address:	803B6110
 * Size:	0000E8
 */
void efx::TPelkira_ver01::create( (efx::Arg *))
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
  addi      r31, r4, 0x5988
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x34
  bl        -0x2EBA94
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0x1C
  li        r4, 0x113
  crclr     6, 0x6
  bl        -0x38BB34

.loc_0x68:
  lwz       r0, 0x10(r30)
  mr        r4, r30
  cmpwi     r0, 0x2
  beq-      .loc_0xB0
  bge-      .loc_0x8C
  cmpwi     r0, 0
  beq-      .loc_0x98
  bge-      .loc_0xA4
  b         .loc_0xC4

.loc_0x8C:
  cmpwi     r0, 0x4
  bge-      .loc_0xC4
  b         .loc_0xBC

.loc_0x98:
  li        r0, 0x142
  sth       r0, 0xC(r29)
  b         .loc_0xC4

.loc_0xA4:
  li        r0, 0x145
  sth       r0, 0xC(r29)
  b         .loc_0xC4

.loc_0xB0:
  li        r0, 0x143
  sth       r0, 0xC(r29)
  b         .loc_0xC4

.loc_0xBC:
  li        r0, 0x144
  sth       r0, 0xC(r29)

.loc_0xC4:
  mr        r3, r29
  bl        -0x6AEC
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
 * Address:	803B61F8
 * Size:	0000D0
 */
void efx::Container::create( (efx::Arg *))
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
  addi      r3, r2, 0x1308
  bl        -0x2EBB70
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x64
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5988
  li        r4, 0x12D
  addi      r5, r5, 0x59A4
  crclr     6, 0x6
  bl        -0x38BC18

.loc_0x64:
  lhz       r0, 0x10(r31)
  mr        r4, r31
  cmpwi     r0, 0x1
  beq-      .loc_0x9C
  bge-      .loc_0x84
  cmpwi     r0, 0
  bge-      .loc_0x90
  b         .loc_0xB0

.loc_0x84:
  cmpwi     r0, 0x3
  bge-      .loc_0xB0
  b         .loc_0xA8

.loc_0x90:
  li        r0, 0x105
  sth       r0, 0xC(r30)
  b         .loc_0xB0

.loc_0x9C:
  li        r0, 0x106
  sth       r0, 0xC(r30)
  b         .loc_0xB0

.loc_0xA8:
  li        r0, 0x107
  sth       r0, 0xC(r30)

.loc_0xB0:
  mr        r3, r30
  bl        -0x6BC0
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
 * Address:	803B62C8
 * Size:	0000E8
 */
void efx::ContainerAct::create( (efx::Arg *))
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
  addi      r3, r2, 0x1308
  bl        -0x2EBC40
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x64
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x5988
  li        r4, 0x142
  addi      r5, r5, 0x59A4
  crclr     6, 0x6
  bl        -0x38BCE8

.loc_0x64:
  lhz       r0, 0x10(r31)
  mr        r4, r31
  cmpwi     r0, 0x1
  beq-      .loc_0xA4
  bge-      .loc_0x84
  cmpwi     r0, 0
  bge-      .loc_0x90
  b         .loc_0xC8

.loc_0x84:
  cmpwi     r0, 0x3
  bge-      .loc_0xC8
  b         .loc_0xB8

.loc_0x90:
  li        r3, 0xF8
  li        r0, 0xF9
  sth       r3, 0x10(r30)
  sth       r0, 0x20(r30)
  b         .loc_0xC8

.loc_0xA4:
  li        r3, 0xFA
  li        r0, 0xFB
  sth       r3, 0x10(r30)
  sth       r0, 0x20(r30)
  b         .loc_0xC8

.loc_0xB8:
  li        r3, 0xFC
  li        r0, 0xFD
  sth       r3, 0x10(r30)
  sth       r0, 0x20(r30)

.loc_0xC8:
  mr        r3, r30
  bl        -0x38A0
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
 * Address:	803B63B0
 * Size:	0001B0
 */
void efx::WarpZone::setRateLOD( (int, bool))
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  rlwinm.   r0,r5,0,24,31
  stmw      r27, 0x6C(r1)
  bne-      .loc_0xDC
  lis       r5, 0x8049
  lwz       r28, 0xC(r3)
  addi      r31, r5, 0x59C8
  rlwinm    r0,r4,2,0,29
  addi      r27, r1, 0x38
  lwz       r30, 0x0(r31)
  lwz       r29, 0x4(r31)
  add       r27, r27, r0
  lwz       r12, 0x8(r31)
  cmplwi    r28, 0
  lwz       r11, 0xC(r31)
  lwz       r10, 0x10(r31)
  lwz       r9, 0x14(r31)
  lwz       r8, 0x18(r31)
  lwz       r7, 0x1C(r31)
  lwz       r6, 0x20(r31)
  lwz       r5, 0x24(r31)
  lwz       r4, 0x28(r31)
  lwz       r0, 0x2C(r31)
  stw       r30, 0x38(r1)
  stw       r29, 0x3C(r1)
  stw       r12, 0x40(r1)
  stw       r11, 0x44(r1)
  stw       r10, 0x48(r1)
  stw       r9, 0x4C(r1)
  stw       r8, 0x50(r1)
  stw       r7, 0x54(r1)
  stw       r6, 0x58(r1)
  stw       r5, 0x5C(r1)
  stw       r4, 0x60(r1)
  stw       r0, 0x64(r1)
  beq-      .loc_0x98
  lfs       f0, 0x0(r27)
  stfs      f0, 0x28(r28)

.loc_0x98:
  lwz       r28, 0x1C(r3)
  cmplwi    r28, 0
  beq-      .loc_0xAC
  lfs       f0, 0xC(r27)
  stfs      f0, 0x28(r28)

.loc_0xAC:
  addi      r3, r3, 0x20
  lwz       r28, 0xC(r3)
  cmplwi    r28, 0
  beq-      .loc_0xC4
  lfs       f0, 0x18(r27)
  stfs      f0, 0x28(r28)

.loc_0xC4:
  lwz       r28, 0x1C(r3)
  cmplwi    r28, 0
  beq-      .loc_0x1A4
  lfs       f0, 0x24(r27)
  stfs      f0, 0x28(r28)
  b         .loc_0x1A4

.loc_0xDC:
  lis       r5, 0x8049
  lwz       r28, 0xC(r3)
  addi      r29, r5, 0x59F8
  rlwinm    r0,r4,2,0,29
  addi      r27, r1, 0x8
  lwz       r30, 0x0(r29)
  lwz       r31, 0x4(r29)
  add       r27, r27, r0
  lwz       r12, 0x8(r29)
  cmplwi    r28, 0
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
  beq-      .loc_0x164
  lfs       f0, 0x0(r27)
  stfs      f0, 0x28(r28)

.loc_0x164:
  lwz       r28, 0x1C(r3)
  cmplwi    r28, 0
  beq-      .loc_0x178
  lfs       f0, 0xC(r27)
  stfs      f0, 0x28(r28)

.loc_0x178:
  addi      r3, r3, 0x20
  lwz       r28, 0xC(r3)
  cmplwi    r28, 0
  beq-      .loc_0x190
  lfs       f0, 0x18(r27)
  stfs      f0, 0x28(r28)

.loc_0x190:
  lwz       r28, 0x1C(r3)
  cmplwi    r28, 0
  beq-      .loc_0x1A4
  lfs       f0, 0x24(r27)
  stfs      f0, 0x28(r28)

.loc_0x1A4:
  lmw       r27, 0x6C(r1)
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	803B6560
 * Size:	00009C
 */
void efx::Container::__dt(void)
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
  addi      r3, r3, 0x7074
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
  bl        -0x326930

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x392528

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
 * Address:	803B65FC
 * Size:	00009C
 */
void efx::TPelkira_ver01::__dt(void)
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
  addi      r3, r3, 0x70C0
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
  bl        -0x3269CC

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x3925C4

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
 * Address:	803B6698
 * Size:	000004
 */
void efx::TOtakaraAp::forceKill(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803B669C
 * Size:	000004
 */
void efx::TOtakaraAp::fade(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803B66A0
 * Size:	000008
 */
void @4@efx::TPelkira_ver01::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xA8
*/
}

/*
 * --INFO--
 * Address:	803B66A8
 * Size:	000008
 */
void @4@efx::Container::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x14C
*/
}
