

/*
 * --INFO--
 * Address:	80071B20
 * Size:	000058
 */
void J3DJointFactory::J3DJointFactory(const J3DJointBlock &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r4, 0xC(r4)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r31
  bl        0x1B4
  stw       r3, 0x0(r30)
  mr        r3, r31
  lwz       r4, 0x10(r31)
  bl        -0x4C
  stw       r3, 0x4(r30)
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
 * Address:	80071B78
 * Size:	000180
 */
void J3DJointFactory::create(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x5C
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        -0x4DCF4
  mr.       r4, r3
  beq-      .loc_0x34
  bl        -0x62E8
  mr        r4, r3

.loc_0x34:
  sth       r30, 0x14(r4)
  rlwinm    r0,r30,1,0,30
  li        r3, 0
  lwz       r5, 0x4(r31)
  lwz       r6, 0x0(r31)
  lhzx      r5, r5, r0
  rlwinm    r5,r5,6,0,25
  lhzx      r5, r6, r5
  stb       r5, 0x16(r4)
  lwz       r5, 0x4(r31)
  lwz       r6, 0x0(r31)
  lhzx      r5, r5, r0
  rlwinm    r5,r5,6,0,25
  add       r5, r6, r5
  lbz       r5, 0x2(r5)
  stb       r5, 0x17(r4)
  lwz       r5, 0x4(r31)
  lwz       r6, 0x0(r31)
  lhzx      r5, r5, r0
  rlwinm    r5,r5,6,0,25
  addi      r7, r5, 0x4
  add       r7, r6, r7
  lfs       f0, 0x0(r7)
  stfs      f0, 0x18(r4)
  lfs       f0, 0x4(r7)
  stfs      f0, 0x1C(r4)
  lfs       f0, 0x8(r7)
  stfs      f0, 0x20(r4)
  lha       r5, 0xC(r7)
  sth       r5, 0x24(r4)
  lha       r5, 0xE(r7)
  sth       r5, 0x26(r4)
  lha       r5, 0x10(r7)
  sth       r5, 0x28(r4)
  lfs       f0, 0x14(r7)
  stfs      f0, 0x2C(r4)
  lfs       f0, 0x18(r7)
  stfs      f0, 0x30(r4)
  lfs       f0, 0x1C(r7)
  stfs      f0, 0x34(r4)
  lwz       r5, 0x4(r31)
  lwz       r6, 0x0(r31)
  lhzx      r5, r5, r0
  rlwinm    r5,r5,6,0,25
  add       r5, r6, r5
  lfs       f0, 0x24(r5)
  stfs      f0, 0x38(r4)
  lwz       r5, 0x4(r31)
  lwz       r6, 0x0(r31)
  lhzx      r5, r5, r0
  rlwinm    r5,r5,6,0,25
  addi      r5, r5, 0x28
  add       r5, r6, r5
  lfs       f0, 0x0(r5)
  stfs      f0, 0x3C(r4)
  lfs       f0, 0x4(r5)
  stfs      f0, 0x40(r4)
  lfs       f0, 0x8(r5)
  stfs      f0, 0x44(r4)
  lwz       r5, 0x4(r31)
  lwz       r6, 0x0(r31)
  lhzx      r0, r5, r0
  rlwinm    r5,r0,6,0,25
  addi      r5, r5, 0x34
  add       r5, r6, r5
  lfs       f0, 0x0(r5)
  stfs      f0, 0x48(r4)
  lfs       f0, 0x4(r5)
  stfs      f0, 0x4C(r4)
  lfs       f0, 0x8(r5)
  stfs      f0, 0x50(r4)
  stw       r3, 0x54(r4)
  lbz       r0, 0x17(r4)
  cmplwi    r0, 0xFF
  bne-      .loc_0x164
  stb       r3, 0x17(r4)

.loc_0x164:
  lwz       r0, 0x14(r1)
  mr        r3, r4
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80071CF8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DJointInitData>(const void *, unsigned long)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  bne-      .loc_0x10
  li        r3, 0
  blr       

.loc_0x10:
  add       r3, r3, r4
  blr
*/
}