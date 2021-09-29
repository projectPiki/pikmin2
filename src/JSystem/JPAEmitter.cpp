

/*
 * --INFO--
 * Address:	8008FC9C
 * Size:	000048
 */
void JPAEmitterCallBack::~JPAEmitterCallBack()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  subi      r0, r5, 0x1D84
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x6BC14

.loc_0x30:
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
 * Address:	8008FCE4
 * Size:	00035C
 */
void JPABaseEmitter::init(JPAEmitterManager *, JPAResource *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x77C0(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  lis       r3, 0x8051
  stw       r4, 0xE4(r30)
  stw       r31, 0xE8(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f3, 0x18(r4)
  lfs       f2, 0x14(r4)
  lfs       f0, 0x10(r4)
  stfs      f0, 0x0(r30)
  stfs      f2, 0x4(r30)
  stfs      f3, 0x8(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f3, 0x24(r4)
  lfs       f2, 0x20(r4)
  lfs       f0, 0x1C(r4)
  stfs      f0, 0xC(r30)
  stfs      f2, 0x10(r30)
  stfs      f3, 0x14(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f3, 0x30(r4)
  lfs       f2, 0x2C(r4)
  lfs       f0, 0x28(r4)
  stfs      f0, 0x18(r30)
  stfs      f2, 0x1C(r30)
  stfs      f3, 0x20(r30)
  lfs       f2, 0x18(r30)
  lfs       f4, 0x20(r30)
  lfs       f0, 0x1C(r30)
  fmuls     f3, f2, f2
  fmuls     f4, f4, f4
  fmuls     f2, f0, f0
  lfs       f0, 0x48DC(r3)
  fmuls     f0, f1, f0
  fadds     f1, f3, f2
  fadds     f4, f4, f1
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  beq-      .loc_0x124
  lfs       f0, -0x77BC(r2)
  fcmpo     cr0, f4, f0
  cror      2, 0, 0x2
  bne-      .loc_0xE0
  b         .loc_0x100

.loc_0xE0:
  fsqrte    f3, f4
  lfs       f2, -0x77B8(r2)
  lfs       f0, -0x77B4(r2)
  frsp      f3, f3
  fmuls     f1, f3, f3
  fmuls     f2, f2, f3
  fnmsubs   f0, f4, f1, f0
  fmuls     f4, f2, f0

.loc_0x100:
  lfs       f0, 0x18(r30)
  fmuls     f0, f0, f4
  stfs      f0, 0x18(r30)
  lfs       f0, 0x1C(r30)
  fmuls     f0, f0, f4
  stfs      f0, 0x1C(r30)
  lfs       f0, 0x20(r30)
  fmuls     f0, f0, f4
  stfs      f0, 0x20(r30)

.loc_0x124:
  lwz       r4, 0xE8(r30)
  lis       r3, 0x19
  addi      r0, r3, 0x660D
  addi      r3, r30, 0x68
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lha       r6, 0x6C(r4)
  lha       r5, 0x6A(r4)
  lha       r4, 0x68(r4)
  sth       r4, 0x4C(r30)
  sth       r5, 0x4E(r30)
  sth       r6, 0x50(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lha       r4, 0x6E(r4)
  stw       r4, 0x24(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lha       r4, 0x72(r4)
  sth       r4, 0x52(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lhz       r4, 0x74(r4)
  sth       r4, 0x54(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x4C(r4)
  stfs      f0, 0x28(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lbz       r4, 0x78(r4)
  stb       r4, 0x56(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x58(r4)
  stfs      f0, 0x2C(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x5C(r4)
  stfs      f0, 0x30(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x34(r4)
  stfs      f0, 0x34(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x38(r4)
  stfs      f0, 0x38(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x40(r4)
  stfs      f0, 0x3C(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x44(r4)
  stfs      f0, 0x40(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x3C(r4)
  stfs      f0, 0x44(r30)
  lwz       r4, 0xE8(r30)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lfs       f0, 0x60(r4)
  stfs      f0, 0x48(r30)
  lwz       r4, 0xE4(r30)
  lwz       r5, 0x20(r4)
  lwz       r4, 0xC(r5)
  mullw     r4, r4, r0
  addis     r4, r4, 0x3C6F
  subi      r0, r4, 0xCA1
  stw       r0, 0xC(r5)
  stw       r0, 0xC4(r30)
  bl        0x5A344
  lfs       f1, -0x77B0(r2)
  li        r5, 0xFF
  lfs       f0, -0x77BC(r2)
  li        r4, 0
  stfs      f1, 0x98(r30)
  li        r3, 0x30
  li        r0, 0x1
  stfs      f1, 0x9C(r30)
  stfs      f1, 0xA0(r30)
  stfs      f0, 0xAC(r30)
  stfs      f0, 0xA8(r30)
  stfs      f0, 0xA4(r30)
  stfs      f1, 0xB0(r30)
  stfs      f1, 0xB4(r30)
  stb       r5, 0xBF(r30)
  stb       r5, 0xBE(r30)
  stb       r5, 0xBD(r30)
  stb       r5, 0xBC(r30)
  stb       r5, 0xBB(r30)
  stb       r5, 0xBA(r30)
  stb       r5, 0xB9(r30)
  stb       r5, 0xB8(r30)
  lwz       r5, 0x1C(r31)
  lwz       r6, 0x0(r5)
  lbz       r5, 0x26(r6)
  stb       r5, 0x108(r30)
  lbz       r5, 0x27(r6)
  stb       r5, 0x109(r30)
  lbz       r5, 0x28(r6)
  stb       r5, 0x10A(r30)
  lbz       r5, 0x29(r6)
  stb       r5, 0x10B(r30)
  lwz       r5, 0x1C(r31)
  lwz       r6, 0x0(r5)
  lbz       r5, 0x2A(r6)
  stb       r5, 0x10C(r30)
  lbz       r5, 0x2B(r6)
  stb       r5, 0x10D(r30)
  lbz       r5, 0x2C(r6)
  stb       r5, 0x10E(r30)
  lbz       r5, 0x2D(r6)
  stb       r5, 0x10F(r30)
  stw       r4, 0xC0(r30)
  stfs      f1, 0xFC(r30)
  stfs      f0, 0xF8(r30)
  stw       r3, 0xF4(r30)
  stb       r0, 0x110(r30)
  stw       r4, 0x100(r30)
  sth       r4, 0x104(r30)
  sth       r4, 0x106(r30)
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
 * Address:	80090040
 * Size:	00011C
 */
void JPABaseEmitter::createParticle()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r4, 0xE0(r3)
  lwz       r0, 0x8(r4)
  cmplwi    r0, 0
  beq-      .loc_0x100
  cmplwi    r0, 0x1
  li        r31, 0
  bne-      .loc_0x54
  lwz       r31, 0x0(r4)
  li        r0, 0
  stw       r0, 0x4(r4)
  stw       r0, 0x0(r4)
  lwz       r3, 0x8(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x8(r4)
  b         .loc_0x80

.loc_0x54:
  cmplwi    r0, 0
  beq-      .loc_0x80
  lwz       r31, 0x0(r4)
  li        r0, 0
  lwz       r3, 0x4(r31)
  stw       r0, 0x0(r3)
  lwz       r0, 0x4(r31)
  stw       r0, 0x0(r4)
  lwz       r3, 0x8(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x8(r4)

.loc_0x80:
  lwz       r0, 0xC8(r30)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  li        r0, 0
  stw       r0, 0x0(r31)
  lwz       r0, 0xC8(r30)
  stw       r0, 0x4(r31)
  lwz       r3, 0xC8(r30)
  stw       r31, 0x0(r3)
  stw       r31, 0xC8(r30)
  b         .loc_0xC0

.loc_0xAC:
  stw       r31, 0xCC(r30)
  li        r0, 0
  stw       r31, 0xC8(r30)
  stw       r0, 0x0(r31)
  stw       r0, 0x4(r31)

.loc_0xC0:
  lwz       r3, 0xD0(r30)
  addi      r0, r3, 0x1
  stw       r0, 0xD0(r30)
  lwz       r3, 0xE8(r30)
  lwz       r5, 0xE4(r30)
  lwz       r4, 0x2C(r3)
  lwz       r3, 0x20(r5)
  lwz       r12, 0x4(r4)
  mtctr     r12
  bctrl     
  lwz       r4, 0xE4(r30)
  addi      r3, r31, 0x8
  lwz       r4, 0x20(r4)
  bl        0x3F3C
  addi      r3, r31, 0x8
  b         .loc_0x104

.loc_0x100:
  li        r3, 0

.loc_0x104:
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
 * Address:	8009015C
 * Size:	0000FC
 */
void JPABaseEmitter::createChild(JPABaseParticle *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r7, r3
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r5, 0xE0(r3)
  lwz       r0, 0x8(r5)
  cmplwi    r0, 0
  beq-      .loc_0xE4
  cmplwi    r0, 0x1
  li        r31, 0
  bne-      .loc_0x50
  lwz       r31, 0x0(r5)
  li        r0, 0
  stw       r0, 0x4(r5)
  stw       r0, 0x0(r5)
  lwz       r3, 0x8(r5)
  subi      r0, r3, 0x1
  stw       r0, 0x8(r5)
  b         .loc_0x7C

.loc_0x50:
  cmplwi    r0, 0
  beq-      .loc_0x7C
  lwz       r31, 0x0(r5)
  li        r0, 0
  lwz       r3, 0x4(r31)
  stw       r0, 0x0(r3)
  lwz       r0, 0x4(r31)
  stw       r0, 0x0(r5)
  lwz       r3, 0x8(r5)
  subi      r0, r3, 0x1
  stw       r0, 0x8(r5)

.loc_0x7C:
  lwz       r0, 0xD4(r7)
  cmplwi    r0, 0
  beq-      .loc_0xA8
  li        r0, 0
  stw       r0, 0x0(r31)
  lwz       r0, 0xD4(r7)
  stw       r0, 0x4(r31)
  lwz       r3, 0xD4(r7)
  stw       r31, 0x0(r3)
  stw       r31, 0xD4(r7)
  b         .loc_0xBC

.loc_0xA8:
  stw       r31, 0xD8(r7)
  li        r0, 0
  stw       r31, 0xD4(r7)
  stw       r0, 0x0(r31)
  stw       r0, 0x4(r31)

.loc_0xBC:
  lwz       r6, 0xDC(r7)
  mr        r5, r4
  addi      r3, r31, 0x8
  addi      r0, r6, 0x1
  stw       r0, 0xDC(r7)
  lwz       r4, 0xE4(r7)
  lwz       r4, 0x20(r4)
  bl        0x4700
  addi      r3, r31, 0x8
  b         .loc_0xE8

.loc_0xE4:
  li        r3, 0

.loc_0xE8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80090258
 * Size:	000174
 */
void JPABaseEmitter::deleteAllParticle()
{
/*
.loc_0x0:
  b         .loc_0xAC

.loc_0x4:
  cmplwi    r0, 0x1
  li        r6, 0
  bne-      .loc_0x30
  lwz       r6, 0xCC(r3)
  li        r0, 0
  stw       r0, 0xCC(r3)
  stw       r0, 0xC8(r3)
  lwz       r4, 0xD0(r3)
  subi      r0, r4, 0x1
  stw       r0, 0xD0(r3)
  b         .loc_0x5C

.loc_0x30:
  cmplwi    r0, 0
  beq-      .loc_0x5C
  lwz       r6, 0xCC(r3)
  li        r0, 0
  lwz       r4, 0x0(r6)
  stw       r0, 0x4(r4)
  lwz       r0, 0x0(r6)
  stw       r0, 0xCC(r3)
  lwz       r4, 0xD0(r3)
  subi      r0, r4, 0x1
  stw       r0, 0xD0(r3)

.loc_0x5C:
  lwz       r5, 0xE0(r3)
  lwz       r0, 0x0(r5)
  cmplwi    r0, 0
  beq-      .loc_0x8C
  li        r0, 0
  stw       r0, 0x0(r6)
  lwz       r0, 0x0(r5)
  stw       r0, 0x4(r6)
  lwz       r4, 0x0(r5)
  stw       r6, 0x0(r4)
  stw       r6, 0x0(r5)
  b         .loc_0xA0

.loc_0x8C:
  stw       r6, 0x4(r5)
  li        r0, 0
  stw       r6, 0x0(r5)
  stw       r0, 0x0(r6)
  stw       r0, 0x4(r6)

.loc_0xA0:
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)

.loc_0xAC:
  lwz       r0, 0xD0(r3)
  cmplwi    r0, 0
  bne+      .loc_0x4
  b         .loc_0x164

.loc_0xBC:
  cmplwi    r0, 0x1
  li        r6, 0
  bne-      .loc_0xE8
  lwz       r6, 0xD8(r3)
  li        r0, 0
  stw       r0, 0xD8(r3)
  stw       r0, 0xD4(r3)
  lwz       r4, 0xDC(r3)
  subi      r0, r4, 0x1
  stw       r0, 0xDC(r3)
  b         .loc_0x114

.loc_0xE8:
  cmplwi    r0, 0
  beq-      .loc_0x114
  lwz       r6, 0xD8(r3)
  li        r0, 0
  lwz       r4, 0x0(r6)
  stw       r0, 0x4(r4)
  lwz       r0, 0x0(r6)
  stw       r0, 0xD8(r3)
  lwz       r4, 0xDC(r3)
  subi      r0, r4, 0x1
  stw       r0, 0xDC(r3)

.loc_0x114:
  lwz       r5, 0xE0(r3)
  lwz       r0, 0x0(r5)
  cmplwi    r0, 0
  beq-      .loc_0x144
  li        r0, 0
  stw       r0, 0x0(r6)
  lwz       r0, 0x0(r5)
  stw       r0, 0x4(r6)
  lwz       r4, 0x0(r5)
  stw       r6, 0x0(r4)
  stw       r6, 0x0(r5)
  b         .loc_0x158

.loc_0x144:
  stw       r6, 0x4(r5)
  li        r0, 0
  stw       r6, 0x0(r5)
  stw       r0, 0x0(r6)
  stw       r0, 0x4(r6)

.loc_0x158:
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)

.loc_0x164:
  lwz       r0, 0xDC(r3)
  cmplwi    r0, 0
  bne+      .loc_0xBC
  blr
*/
}

/*
 * --INFO--
 * Address:	800903CC
 * Size:	000040
 */
void JPABaseEmitter::processTillStartFrame()
{
/*
.loc_0x0:
  lwz       r4, 0xE8(r3)
  lha       r5, 0x104(r3)
  lwz       r4, 0x2C(r4)
  lwz       r4, 0x0(r4)
  lha       r0, 0x70(r4)
  cmpw      r5, r0
  blt-      .loc_0x24
  li        r3, 0x1
  blr       

.loc_0x24:
  lwz       r0, 0xF4(r3)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x38
  addi      r0, r5, 0x1
  sth       r0, 0x104(r3)

.loc_0x38:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8009040C
 * Size:	00009C
 */
void JPABaseEmitter::processTermination()
{
/*
.loc_0x0:
  lwz       r0, 0xF4(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x14
  li        r3, 0x1
  blr       

.loc_0x14:
  lwz       r4, 0x24(r3)
  cmpwi     r4, 0
  bne-      .loc_0x28
  li        r3, 0
  blr       

.loc_0x28:
  bge-      .loc_0x50
  lwz       r0, 0xF4(r3)
  ori       r0, r0, 0x8
  stw       r0, 0xF4(r3)
  lwz       r4, 0xD0(r3)
  lwz       r0, 0xDC(r3)
  add       r0, r4, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr       

.loc_0x50:
  lwz       r0, 0x100(r3)
  cmplw     r0, r4
  blt-      .loc_0x94
  lwz       r0, 0xF4(r3)
  ori       r0, r0, 0x8
  stw       r0, 0xF4(r3)
  lwz       r0, 0xF4(r3)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0x7C
  li        r3, 0
  blr       

.loc_0x7C:
  lwz       r4, 0xD0(r3)
  lwz       r0, 0xDC(r3)
  add       r0, r4, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr       

.loc_0x94:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800904A8
 * Size:	000080
 */
void JPABaseEmitter::calcEmitterGlobalPosition(JGeometry::TVec3<float> *) const
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lfs       f1, 0x98(r3)
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  lfs       f2, 0x9C(r30)
  addi      r3, r1, 0x8
  lfs       f3, 0xA0(r30)
  bl        0x5A300
  addi      r4, r1, 0x8
  addi      r3, r30, 0x68
  mr        r5, r4
  bl        0x59E1C
  lfs       f2, 0xA4(r30)
  mr        r5, r31
  lfs       f1, 0xA8(r30)
  addi      r3, r1, 0x8
  lfs       f0, 0xAC(r30)
  addi      r4, r30, 0xC
  stfs      f2, 0x14(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x34(r1)
  bl        0x5A6CC
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
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisX(JGeometry::TVec3<float> *) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisY(JGeometry::TVec3<float> *) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisZ(JGeometry::TVec3<float> *) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090528
 * Size:	000010
 */
void JPABaseEmitter::getCurrentCreateNumber() const
{
/*
.loc_0x0:
  lwz       r3, 0xE4(r3)
  lwz       r3, 0x20(r3)
  lwz       r3, 0x40(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JPABaseEmitter::getDrawCount() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JPABaseEmitter::loadTexture(unsigned char, _GXTexMapID)
{
	// UNUSED FUNCTION
}