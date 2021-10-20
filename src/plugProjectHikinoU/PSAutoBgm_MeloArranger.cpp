

/*
 * --INFO--
 * Address:	8033EE9C
 * Size:	00003C
 */
void PSAutoBgm::MeloArr_RandomAvoid::avoidChk(PSAutoBgm::MeloArrArg &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2849BC
  lfs       f0, 0x1C(r31)
  fcmpo     cr0, f1, f0
  mfcr      r0
  lwz       r31, 0xC(r1)
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	8033EED8
 * Size:	000138
 */
void PSAutoBgm::MeloArrMgr::isToAvoid(PSAutoBgm::MeloArrArg &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  lbz       r0, 0x0(r4)
  cmplwi    r0, 0x10
  blt-      .loc_0x48
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x10
  li        r4, 0x59
  addi      r5, r5, 0x2C
  crclr     6, 0x6
  bl        -0x3148DC

.loc_0x48:
  lbz       r0, 0x1(r31)
  cmplwi    r0, 0xFF
  bne-      .loc_0x70
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x10
  li        r4, 0x5A
  addi      r5, r5, 0x2C
  crclr     6, 0x6
  bl        -0x314904

.loc_0x70:
  lbz       r0, 0x12(r30)
  cmplwi    r0, 0
  bne-      .loc_0x84
  li        r3, 0
  b         .loc_0x11C

.loc_0x84:
  lhz       r3, 0x10(r30)
  li        r29, 0
  lbz       r0, 0x0(r31)
  sraw      r0, r3, r0
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x118
  lwz       r30, 0x4(r30)
  b         .loc_0x110

.loc_0xA4:
  lwz       r3, 0x0(r30)
  mr        r4, r31
  lwz       r12, 0x14(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0xF4
  lwz       r3, 0x0(r30)
  lbz       r0, 0x19(r3)
  cmplwi    r0, 0x1
  bne-      .loc_0xEC
  lwz       r12, 0x14(r3)
  mr        r4, r31
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xF0

.loc_0xEC:
  li        r3, 0

.loc_0xF0:
  mr        r29, r3

.loc_0xF4:
  lwz       r3, 0x0(r30)
  mr        r4, r31
  lwz       r12, 0x14(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r30, 0xC(r30)

.loc_0x110:
  cmplwi    r30, 0
  bne+      .loc_0xA4

.loc_0x118:
  mr        r3, r29

.loc_0x11C:
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
 * Address:	8033F010
 * Size:	000004
 */
void PSAutoBgm::MeloArrBase::post(PSAutoBgm::MeloArrArg &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	8033F014
 * Size:	000004
 */
void PSAutoBgm::MeloArrBase::pre(PSAutoBgm::MeloArrArg &)
{
/*
.loc_0x0:
  blr
*/
}


/*
 * --INFO--
 * Address:	8033F018
 * Size:	00000C
 */
void PSAutoBgm::MeloArrBase::directOn(PSAutoBgm::Track *)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x19(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8033F024
 * Size:	00000C
 */
void PSAutoBgm::MeloArrBase::directOff(PSAutoBgm::Track *)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x19(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	8033F030
 * Size:	000080
 */
void PSAutoBgm::MeloArrBase::~MeloArrBase()
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
  beq-      .loc_0x64
  lis       r4, 0x804E
  addi      r3, r30, 0x10
  subi      r5, r4, 0x5218
  li        r4, 0
  stw       r5, 0x14(r30)
  addi      r0, r5, 0x8
  stw       r0, 0x10(r30)
  bl        -0x284E70
  cmplwi    r30, 0
  beq-      .loc_0x54
  mr        r3, r30
  li        r4, 0
  bl        -0x3188B0

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x31AFDC

.loc_0x64:
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
 * Address:	8033F0B0
 * Size:	000098
 */
void PSAutoBgm::MeloArr_RandomAvoid::~MeloArr_RandomAvoid()
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
  beq-      .loc_0x7C
  lis       r3, 0x804E
  subi      r3, r3, 0x51EC
  stw       r3, 0x14(r30)
  addi      r0, r3, 0x8
  stw       r0, 0x10(r30)
  beq-      .loc_0x6C
  lis       r4, 0x804E
  addi      r3, r30, 0x10
  subi      r5, r4, 0x5218
  li        r4, 0
  stw       r5, 0x14(r30)
  addi      r0, r5, 0x8
  stw       r0, 0x10(r30)
  bl        -0x284F08
  cmplwi    r30, 0
  beq-      .loc_0x6C
  mr        r3, r30
  li        r4, 0
  bl        -0x318948

.loc_0x6C:
  extsh.    r0, r31
  ble-      .loc_0x7C
  mr        r3, r30
  bl        -0x31B074

.loc_0x7C:
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
 * Address:	8033F148
 * Size:	000008
 */
void PSAutoBgm::MeloArr_RandomAvoid::@16@__dt()
{
/*
.loc_0x0:
  subi      r3, r3, 0x10
  b         -0x9C
*/
}


/*
 * --INFO--
 * Address:	8033F150
 * Size:	000008
 */
void PSAutoBgm::MeloArrBase::@16@__dt()
{
/*
.loc_0x0:
  subi      r3, r3, 0x10
  b         -0x124
*/
}
