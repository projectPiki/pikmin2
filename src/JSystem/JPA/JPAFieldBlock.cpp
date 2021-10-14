

/*
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
void JPAFieldBase::calcAffect(JPAFieldBlock*, JPABaseParticle*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void JPAFieldBase::calcFadeAffect(JPAFieldBlock*, float) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800915A0
 * Size:	0000A8
 */
void JPAFieldGravity::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
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
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,16,30,30
	  beq-      .loc_0x58
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x1C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x20(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0x24(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)
	  b         .loc_0x90

	.loc_0x58:
	  addi      r3, r4, 0x78
	  addi      r4, r31, 0x1C
	  addi      r5, r30, 0x4
	  bl        0x59628
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x4(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0xC(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)

	.loc_0x90:
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
 * Address:	80091648
 * Size:	0001BC
 */
void JPAFieldGravity::calc(JPAEmitterWorkData*, JPAFieldBlock*,
                           JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r0, 0x7C(r6)
	  lwz       r7, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r3)
	  stw       r7, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0xEC
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0xEC
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r6)
	  lfs       f3, -0x7768(r2)
	  beq-      .loc_0x58
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x70

	.loc_0x58:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x78
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x78

	.loc_0x70:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0xC8

	.loc_0x78:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0xA4
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA4
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0xC8

	.loc_0xA4:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0xC8
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xC8
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0xC8:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xEC:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x150
	  bge-      .loc_0x110
	  cmpwi     r0, 0
	  bge-      .loc_0x11C
	  b         .loc_0x1B4

	.loc_0x110:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1B4
	  b         .loc_0x184

	.loc_0x11C:
	  lfs       f2, 0x3C(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r6)
	  lfs       f2, 0x40(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r6)
	  lfs       f1, 0x44(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r6)
	  b         .loc_0x1B4

	.loc_0x150:
	  lfs       f2, 0x30(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r6)
	  lfs       f2, 0x34(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r6)
	  lfs       f1, 0x38(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r6)
	  b         .loc_0x1B4

	.loc_0x184:
	  lfs       f2, 0x48(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x48(r6)
	  lfs       f2, 0x4C(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r6)
	  lfs       f1, 0x50(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r6)

	.loc_0x1B4:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091804
 * Size:	000150
 */
void JPAFieldAir::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  lis       r5, 0x8051
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lfs       f1, 0x1C(r31)
	  lfs       f0, 0x20(r31)
	  fmuls     f3, f1, f1
	  lfs       f4, 0x24(r31)
	  fmuls     f2, f0, f0
	  lfs       f1, -0x7760(r2)
	  lfs       f0, 0x48DC(r5)
	  fmuls     f4, f4, f4
	  fadds     f2, f3, f2
	  fmuls     f0, f1, f0
	  fadds     f4, f4, f2
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x6C
	  lfs       f0, -0x7764(r2)
	  stfs      f0, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  b         .loc_0xC4

	.loc_0x6C:
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x80
	  b         .loc_0xA0

	.loc_0x80:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0xA0:
	  lfs       f0, 0x1C(r31)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x20(r31)
	  fmuls     f0, f0, f4
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x24(r31)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x10(r1)

	.loc_0xC4:
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,16,30,30
	  beq-      .loc_0x100
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x8(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0xC(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0x10(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)
	  b         .loc_0x138

	.loc_0x100:
	  addi      r3, r4, 0x78
	  addi      r4, r1, 0x8
	  addi      r5, r30, 0x4
	  bl        0x5931C
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x4(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0xC(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r30)

	.loc_0x138:
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
 * Address:	80091954
 * Size:	00025C
 */
void JPAFieldAir::calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r0, 0x7C(r6)
	  lwz       r7, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r3)
	  stw       r7, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0xEC
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0xEC
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r6)
	  lfs       f3, -0x7768(r2)
	  beq-      .loc_0x58
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x70

	.loc_0x58:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x78
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x78

	.loc_0x70:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0xC8

	.loc_0x78:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0xA4
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA4
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0xC8

	.loc_0xA4:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0xC8
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xC8
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0xC8:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xEC:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x150
	  bge-      .loc_0x110
	  cmpwi     r0, 0
	  bge-      .loc_0x11C
	  b         .loc_0x1B4

	.loc_0x110:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1B4
	  b         .loc_0x184

	.loc_0x11C:
	  lfs       f2, 0x3C(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r6)
	  lfs       f2, 0x40(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r6)
	  lfs       f1, 0x44(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r6)
	  b         .loc_0x1B4

	.loc_0x150:
	  lfs       f2, 0x30(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r6)
	  lfs       f2, 0x34(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r6)
	  lfs       f1, 0x38(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r6)
	  b         .loc_0x1B4

	.loc_0x184:
	  lfs       f2, 0x48(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x48(r6)
	  lfs       f2, 0x4C(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r6)
	  lfs       f1, 0x50(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r6)

	.loc_0x1B4:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm.   r0,r0,16,29,29
	  beq-      .loc_0x254
	  lfs       f1, 0x30(r6)
	  lfs       f0, 0x34(r6)
	  fmuls     f2, f1, f1
	  lfs       f3, 0x38(r6)
	  fmuls     f1, f0, f0
	  lfs       f0, -0x7764(r2)
	  fmuls     f3, f3, f3
	  fadds     f1, f2, f1
	  fadds     f4, f3, f1
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1F8
	  b         .loc_0x21C

	.loc_0x1F8:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f4, f4, f0

	.loc_0x21C:
	  lwz       r3, 0x0(r5)
	  lfs       f0, 0x28(r3)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x254
	  fdivs     f1, f0, f4
	  lfs       f0, 0x30(r6)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x30(r6)
	  lfs       f0, 0x34(r6)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x34(r6)
	  lfs       f0, 0x38(r6)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x38(r6)

	.loc_0x254:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091BB0
 * Size:	000060
 */
void JPAFieldMagnet::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  addi      r3, r4, 0x78
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x10(r5)
	  lfs       f0, 0x108(r4)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r6)
	  lfs       f1, 0x14(r5)
	  lfs       f0, 0x10C(r4)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x14(r6)
	  lfs       f0, 0x110(r4)
	  addi      r4, r6, 0x10
	  lfs       f1, 0x18(r5)
	  mr        r5, r4
	  fsubs     f0, f1, f0
	  stfs      f0, 0x18(r6)
	  bl        0x59030
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091C10
 * Size:	000288
 */
void JPAFieldMagnet::calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x8051
	  lfs       f1, -0x7760(r2)
	  lfs       f2, 0x10(r3)
	  lfs       f0, 0xC(r6)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x4(r3)
	  lfs       f2, 0x14(r3)
	  lfs       f0, 0x10(r6)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x8(r3)
	  lfs       f2, 0x18(r3)
	  lfs       f0, 0x14(r6)
	  fsubs     f0, f2, f0
	  stfs      f0, 0xC(r3)
	  lfs       f2, 0x4(r3)
	  lfs       f4, 0xC(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f3, f2, f2
	  fmuls     f4, f4, f4
	  lfs       f5, 0x28(r5)
	  fmuls     f2, f0, f0
	  lfs       f0, 0x48DC(r4)
	  fmuls     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f4, f4, f1
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0xD0
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x88
	  b         .loc_0xA8

	.loc_0x88:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0xA8:
	  fmuls     f1, f4, f5
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r3)

	.loc_0xD0:
	  lwz       r0, 0x7C(r6)
	  lwz       r7, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r3)
	  stw       r7, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x1B8
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0x1B8
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r6)
	  lfs       f3, -0x7768(r2)
	  beq-      .loc_0x124
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x13C

	.loc_0x124:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x144
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x144

	.loc_0x13C:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0x194

	.loc_0x144:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x170
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x170
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0x194

	.loc_0x170:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x194
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x194
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0x194:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x1B8:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x21C
	  bge-      .loc_0x1DC
	  cmpwi     r0, 0
	  bge-      .loc_0x1E8
	  b         .loc_0x280

	.loc_0x1DC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x280
	  b         .loc_0x250

	.loc_0x1E8:
	  lfs       f2, 0x3C(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r6)
	  lfs       f2, 0x40(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r6)
	  lfs       f1, 0x44(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r6)
	  b         .loc_0x280

	.loc_0x21C:
	  lfs       f2, 0x30(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r6)
	  lfs       f2, 0x34(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r6)
	  lfs       f1, 0x38(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r6)
	  b         .loc_0x280

	.loc_0x250:
	  lfs       f2, 0x48(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x48(r6)
	  lfs       f2, 0x4C(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r6)
	  lfs       f1, 0x50(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r6)

	.loc_0x280:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80091E98
 * Size:	000084
 */
void JPAFieldNewton::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
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
	  addi      r3, r4, 0x78
	  lfs       f1, 0x10(r5)
	  lfs       f0, 0x108(r4)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r30)
	  lfs       f1, 0x14(r5)
	  lfs       f0, 0x10C(r4)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x14(r30)
	  lfs       f0, 0x110(r4)
	  addi      r4, r30, 0x10
	  lfs       f1, 0x18(r5)
	  mr        r5, r4
	  fsubs     f0, f1, f0
	  stfs      f0, 0x18(r30)
	  bl        0x58D3C
	  lwz       r3, 0x0(r31)
	  lfs       f0, 0x2C(r3)
	  fmuls     f0, f0, f0
	  stfs      f0, 0x1C(r30)
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
 * Address:	80091F1C
 * Size:	00032C
 */
void JPAFieldNewton::calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0xC(r6)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r3)
	  lfs       f1, 0x14(r3)
	  lfs       f0, 0x10(r6)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x8(r3)
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x14(r6)
	  fsubs     f0, f1, f0
	  stfs      f0, 0xC(r3)
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  lfs       f2, 0xC(r3)
	  fmuls     f1, f1, f1
	  fmuls     f0, f0, f0
	  lfs       f3, 0x1C(r3)
	  fmuls     f2, f2, f2
	  fadds     f0, f1, f0
	  fadds     f5, f2, f0
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0xF0
	  lfs       f2, -0x7754(r2)
	  lis       r4, 0x8051
	  lfs       f0, 0x28(r5)
	  lfs       f1, -0x7760(r2)
	  fmuls     f2, f2, f0
	  lfs       f0, 0x48DC(r4)
	  fmuls     f0, f1, f0
	  fmuls     f1, f3, f2
	  fcmpo     cr0, f5, f0
	  fdivs     f3, f1, f5
	  cror      2, 0, 0x2
	  beq-      .loc_0x174
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f5, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA4
	  b         .loc_0xC4

	.loc_0xA4:
	  fsqrte    f4, f5
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f4, f4
	  fmuls     f1, f4, f4
	  fmuls     f2, f2, f4
	  fnmsubs   f0, f5, f1, f0
	  fmuls     f5, f2, f0

	.loc_0xC4:
	  fmuls     f1, f5, f3
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r3)
	  b         .loc_0x174

	.loc_0xF0:
	  lis       r4, 0x8051
	  lfs       f1, -0x7760(r2)
	  lfs       f0, 0x48DC(r4)
	  lfs       f3, -0x7754(r2)
	  fmuls     f0, f1, f0
	  lfs       f2, 0x28(r5)
	  fmuls     f3, f3, f2
	  fcmpo     cr0, f5, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x174
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f5, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x12C
	  b         .loc_0x14C

	.loc_0x12C:
	  fsqrte    f4, f5
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f4, f4
	  fmuls     f1, f4, f4
	  fmuls     f2, f2, f4
	  fnmsubs   f0, f5, f1, f0
	  fmuls     f5, f2, f0

	.loc_0x14C:
	  fmuls     f1, f5, f3
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r3)

	.loc_0x174:
	  lwz       r0, 0x7C(r6)
	  lwz       r7, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r3)
	  stw       r7, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x25C
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0x25C
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r6)
	  lfs       f3, -0x7768(r2)
	  beq-      .loc_0x1C8
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x1E0

	.loc_0x1C8:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x1E8
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1E8

	.loc_0x1E0:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0x238

	.loc_0x1E8:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x214
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x214
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0x238

	.loc_0x214:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x238
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x238
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0x238:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x25C:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x2C0
	  bge-      .loc_0x280
	  cmpwi     r0, 0
	  bge-      .loc_0x28C
	  b         .loc_0x324

	.loc_0x280:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x324
	  b         .loc_0x2F4

	.loc_0x28C:
	  lfs       f2, 0x3C(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r6)
	  lfs       f2, 0x40(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r6)
	  lfs       f1, 0x44(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r6)
	  b         .loc_0x324

	.loc_0x2C0:
	  lfs       f2, 0x30(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r6)
	  lfs       f2, 0x34(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r6)
	  lfs       f1, 0x38(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r6)
	  b         .loc_0x324

	.loc_0x2F4:
	  lfs       f2, 0x48(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x48(r6)
	  lfs       f2, 0x4C(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r6)
	  lfs       f1, 0x50(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r6)

	.loc_0x324:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80092248
 * Size:	0000F4
 */
void JPAFieldVortex::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
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
	  addi      r3, r4, 0xA8
	  addi      r4, r31, 0x1C
	  addi      r5, r30, 0x10
	  bl        0x589BC
	  lfs       f1, 0x10(r30)
	  lis       r3, 0x8051
	  lfs       f0, 0x14(r30)
	  fmuls     f3, f1, f1
	  lfs       f4, 0x18(r30)
	  fmuls     f2, f0, f0
	  lfs       f1, -0x7760(r2)
	  lfs       f0, 0x48DC(r3)
	  fmuls     f4, f4, f4
	  fadds     f2, f3, f2
	  fmuls     f0, f1, f0
	  fadds     f4, f4, f2
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0xC0
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C
	  b         .loc_0x9C

	.loc_0x7C:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0x9C:
	  lfs       f0, 0x10(r30)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x10(r30)
	  lfs       f0, 0x14(r30)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x14(r30)
	  lfs       f0, 0x18(r30)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x18(r30)

	.loc_0xC0:
	  lfs       f0, 0x18(r31)
	  lfs       f1, -0x7768(r2)
	  fmuls     f0, f0, f0
	  stfs      f0, 0x1C(r30)
	  lfs       f0, 0x1C(r30)
	  fdivs     f0, f1, f0
	  stfs      f0, 0x20(r30)
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
 * Address:	8009233C
 * Size:	0002F0
 */
void JPAFieldVortex::calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lfs       f1, 0x14(r3)
	  lfs       f6, 0x10(r6)
	  lfs       f2, 0x10(r3)
	  fmuls     f0, f1, f6
	  lfs       f5, 0xC(r6)
	  lfs       f4, 0x18(r3)
	  lfs       f7, 0x14(r6)
	  fmadds    f0, f2, f5, f0
	  lfs       f3, 0x1C(r3)
	  fmadds    f0, f4, f7, f0
	  fmuls     f1, f1, f0
	  fmuls     f2, f2, f0
	  fmuls     f4, f4, f0
	  fsubs     f1, f6, f1
	  fsubs     f0, f5, f2
	  fsubs     f2, f7, f4
	  fmuls     f4, f1, f1
	  fmadds    f4, f0, f0, f4
	  fmadds    f7, f2, f2, f4
	  fcmpo     cr0, f7, f3
	  ble-      .loc_0x64
	  lwz       r4, 0x0(r5)
	  lfs       f9, 0x28(r4)
	  b         .loc_0x88

	.loc_0x64:
	  lfs       f3, 0x20(r3)
	  lwz       r4, 0x0(r5)
	  fmuls     f6, f7, f3
	  lfs       f5, -0x7768(r2)
	  lfs       f3, 0x28(r4)
	  lfs       f4, 0x28(r5)
	  fsubs     f5, f5, f6
	  fmuls     f3, f6, f3
	  fmadds    f9, f5, f4, f3

	.loc_0x88:
	  lis       r4, 0x8051
	  lfs       f4, -0x7760(r2)
	  lfs       f3, 0x48DC(r4)
	  fmuls     f3, f4, f3
	  fcmpo     cr0, f7, f3
	  cror      2, 0, 0x2
	  beq-      .loc_0xE4
	  lfs       f3, -0x7764(r2)
	  fcmpo     cr0, f7, f3
	  cror      2, 0, 0x2
	  bne-      .loc_0xB8
	  b         .loc_0xD8

	.loc_0xB8:
	  fsqrte    f6, f7
	  lfs       f5, -0x775C(r2)
	  lfs       f3, -0x7758(r2)
	  frsp      f6, f6
	  fmuls     f4, f6, f6
	  fmuls     f5, f5, f6
	  fnmsubs   f3, f7, f4, f3
	  fmuls     f7, f5, f3

	.loc_0xD8:
	  fmuls     f0, f0, f7
	  fmuls     f1, f1, f7
	  fmuls     f2, f2, f7

	.loc_0xE4:
	  lfs       f7, 0x14(r3)
	  lfs       f8, 0x18(r3)
	  fmuls     f3, f2, f7
	  lfs       f6, 0x10(r3)
	  fmuls     f4, f0, f8
	  fmuls     f5, f1, f6
	  fmsubs    f1, f1, f8, f3
	  fmsubs    f2, f2, f6, f4
	  fmsubs    f0, f0, f7, f5
	  stfs      f1, 0x4(r3)
	  stfs      f2, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f0, f9
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f0, f9
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r3)
	  fmuls     f0, f0, f9
	  stfs      f0, 0xC(r3)
	  lwz       r0, 0x7C(r6)
	  lwz       r7, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r3)
	  stw       r7, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x220
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0x220
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r6)
	  lfs       f3, -0x7768(r2)
	  beq-      .loc_0x18C
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x1A4

	.loc_0x18C:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x1AC
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1AC

	.loc_0x1A4:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0x1FC

	.loc_0x1AC:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x1D8
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1D8
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0x1FC

	.loc_0x1D8:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x1FC
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1FC
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0x1FC:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x220:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x284
	  bge-      .loc_0x244
	  cmpwi     r0, 0
	  bge-      .loc_0x250
	  b         .loc_0x2E8

	.loc_0x244:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x2E8
	  b         .loc_0x2B8

	.loc_0x250:
	  lfs       f2, 0x3C(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r6)
	  lfs       f2, 0x40(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r6)
	  lfs       f1, 0x44(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r6)
	  b         .loc_0x2E8

	.loc_0x284:
	  lfs       f2, 0x30(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r6)
	  lfs       f2, 0x34(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r6)
	  lfs       f1, 0x38(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r6)
	  b         .loc_0x2E8

	.loc_0x2B8:
	  lfs       f2, 0x48(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x48(r6)
	  lfs       f2, 0x4C(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r6)
	  lfs       f1, 0x50(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r6)

	.loc_0x2E8:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009262C
 * Size:	00028C
 */
void JPAFieldConvection::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  addi      r4, r1, 0x14
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  addi      r3, r30, 0xA8
	  lfs       f2, 0x10(r5)
	  lfs       f8, 0x24(r5)
	  lfs       f7, 0x20(r5)
	  lfs       f3, 0x18(r5)
	  fmuls     f1, f2, f8
	  lfs       f6, 0x1C(r5)
	  addi      r5, r29, 0x10
	  lfs       f5, 0x14(r31)
	  fmuls     f0, f3, f7
	  fmsubs    f4, f3, f6, f1
	  fmuls     f1, f5, f6
	  fmsubs    f3, f5, f8, f0
	  fmuls     f0, f8, f4
	  stfs      f4, 0xC(r1)
	  fmsubs    f5, f2, f7, f1
	  fmuls     f2, f7, f3
	  stfs      f3, 0x8(r1)
	  fmuls     f1, f6, f5
	  stfs      f5, 0x10(r1)
	  fmsubs    f2, f6, f4, f2
	  fmsubs    f0, f7, f5, f0
	  fmsubs    f1, f8, f3, f1
	  stfs      f2, 0x1C(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  bl        0x58570
	  addi      r3, r30, 0xA8
	  addi      r4, r31, 0x1C
	  addi      r5, r29, 0x1C
	  bl        0x58560
	  addi      r3, r30, 0xA8
	  addi      r4, r1, 0x8
	  addi      r5, r29, 0x28
	  bl        0x58550
	  lfs       f1, 0x10(r29)
	  lis       r3, 0x8051
	  lfs       f0, 0x14(r29)
	  fmuls     f3, f1, f1
	  lfs       f4, 0x18(r29)
	  fmuls     f2, f0, f0
	  lfs       f1, -0x7760(r2)
	  lfs       f0, 0x48DC(r3)
	  fmuls     f4, f4, f4
	  fadds     f2, f3, f2
	  fmuls     f0, f1, f0
	  fadds     f4, f4, f2
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x148
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x104
	  b         .loc_0x124

	.loc_0x104:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0x124:
	  lfs       f0, 0x10(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x10(r29)
	  lfs       f0, 0x14(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x14(r29)
	  lfs       f0, 0x18(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x18(r29)

	.loc_0x148:
	  lfs       f1, 0x1C(r29)
	  lis       r3, 0x8051
	  lfs       f0, 0x20(r29)
	  fmuls     f3, f1, f1
	  lfs       f4, 0x24(r29)
	  fmuls     f2, f0, f0
	  lfs       f1, -0x7760(r2)
	  lfs       f0, 0x48DC(r3)
	  fmuls     f4, f4, f4
	  fadds     f2, f3, f2
	  fmuls     f0, f1, f0
	  fadds     f4, f4, f2
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x1DC
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x198
	  b         .loc_0x1B8

	.loc_0x198:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0x1B8:
	  lfs       f0, 0x1C(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x1C(r29)
	  lfs       f0, 0x20(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x20(r29)
	  lfs       f0, 0x24(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x24(r29)

	.loc_0x1DC:
	  lfs       f1, 0x28(r29)
	  lis       r3, 0x8051
	  lfs       f0, 0x2C(r29)
	  fmuls     f3, f1, f1
	  lfs       f4, 0x30(r29)
	  fmuls     f2, f0, f0
	  lfs       f1, -0x7760(r2)
	  lfs       f0, 0x48DC(r3)
	  fmuls     f4, f4, f4
	  fadds     f2, f3, f2
	  fmuls     f0, f1, f0
	  fadds     f4, f4, f2
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x270
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x22C
	  b         .loc_0x24C

	.loc_0x22C:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0x24C:
	  lfs       f0, 0x28(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x28(r29)
	  lfs       f0, 0x2C(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x2C(r29)
	  lfs       f0, 0x30(r29)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x30(r29)

	.loc_0x270:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800928B8
 * Size:	00039C
 */
void JPAFieldConvection::calc(JPAEmitterWorkData*, JPAFieldBlock*,
                              JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x8051
	  lfs       f3, 0x14(r3)
	  lfs       f0, 0x10(r6)
	  lfs       f7, 0x2C(r3)
	  fmuls     f1, f3, f0
	  lfs       f5, 0x10(r3)
	  lfs       f2, 0xC(r6)
	  fmuls     f0, f7, f0
	  lfs       f10, 0x28(r3)
	  fmadds    f1, f5, f2, f1
	  fmadds    f0, f10, f2, f0
	  lfs       f9, 0x18(r3)
	  lfs       f2, 0x14(r6)
	  lfs       f11, 0x30(r3)
	  fmadds    f4, f9, f2, f1
	  lfs       f1, 0x48DC(r4)
	  fmadds    f6, f11, f2, f0
	  lfs       f2, -0x7760(r2)
	  lwz       r7, 0x0(r5)
	  fmuls     f8, f3, f4
	  fmuls     f3, f7, f6
	  lfs       f7, 0x2C(r7)
	  fmuls     f0, f5, f4
	  fmuls     f5, f10, f6
	  fadds     f8, f8, f3
	  fmuls     f9, f9, f4
	  fmuls     f4, f11, f6
	  fadds     f0, f0, f5
	  fmuls     f3, f8, f8
	  fmuls     f1, f2, f1
	  fadds     f9, f9, f4
	  fmadds    f2, f0, f0, f3
	  fmadds    f5, f9, f9, f2
	  fcmpo     cr0, f5, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xA4
	  lfs       f9, -0x7764(r2)
	  fmr       f8, f9
	  fmr       f0, f9
	  b         .loc_0xE8

	.loc_0xA4:
	  lfs       f1, -0x7764(r2)
	  fcmpo     cr0, f5, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0xB8
	  b         .loc_0xD8

	.loc_0xB8:
	  fsqrte    f4, f5
	  lfs       f3, -0x775C(r2)
	  lfs       f1, -0x7758(r2)
	  frsp      f4, f4
	  fmuls     f2, f4, f4
	  fmuls     f3, f3, f4
	  fnmsubs   f1, f5, f2, f1
	  fmuls     f5, f3, f1

	.loc_0xD8:
	  fmuls     f1, f5, f7
	  fmuls     f0, f0, f1
	  fmuls     f8, f8, f1
	  fmuls     f9, f9, f1

	.loc_0xE8:
	  lfs       f12, 0x20(r3)
	  lis       r4, 0x8051
	  lfs       f11, 0x24(r3)
	  fmuls     f1, f12, f0
	  lfs       f6, 0x1C(r3)
	  lfs       f5, 0x10(r6)
	  fmuls     f2, f11, f8
	  fmuls     f3, f6, f9
	  lfs       f4, 0x14(r6)
	  fmsubs    f7, f6, f8, f1
	  lfs       f1, -0x7760(r2)
	  fsubs     f10, f5, f8
	  lfs       f5, 0xC(r6)
	  fsubs     f8, f4, f9
	  fmsubs    f4, f12, f9, f2
	  fmsubs    f6, f11, f0, f3
	  fmuls     f3, f7, f10
	  fsubs     f5, f5, f0
	  fmuls     f2, f4, f8
	  fmsubs    f3, f6, f8, f3
	  fmuls     f0, f6, f5
	  fmsubs    f2, f7, f5, f2
	  stfs      f3, 0x4(r3)
	  fmsubs    f0, f4, f10, f0
	  stfs      f2, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  lfs       f2, 0x4(r3)
	  lfs       f4, 0xC(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f3, f2, f2
	  fmuls     f4, f4, f4
	  lfs       f5, 0x28(r5)
	  fmuls     f2, f0, f0
	  lfs       f0, 0x48DC(r4)
	  fmuls     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f4, f4, f1
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x1E4
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x19C
	  b         .loc_0x1BC

	.loc_0x19C:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0x1BC:
	  fmuls     f1, f4, f5
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r3)

	.loc_0x1E4:
	  lwz       r0, 0x7C(r6)
	  lwz       r7, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r3)
	  stw       r7, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x2CC
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0x2CC
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r6)
	  lfs       f3, -0x7768(r2)
	  beq-      .loc_0x238
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x250

	.loc_0x238:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x258
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x258

	.loc_0x250:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0x2A8

	.loc_0x258:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x284
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x284
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0x2A8

	.loc_0x284:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x2A8
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x2A8
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0x2A8:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x2CC:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x330
	  bge-      .loc_0x2F0
	  cmpwi     r0, 0
	  bge-      .loc_0x2FC
	  b         .loc_0x394

	.loc_0x2F0:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x394
	  b         .loc_0x364

	.loc_0x2FC:
	  lfs       f2, 0x3C(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r6)
	  lfs       f2, 0x40(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r6)
	  lfs       f1, 0x44(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r6)
	  b         .loc_0x394

	.loc_0x330:
	  lfs       f2, 0x30(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r6)
	  lfs       f2, 0x34(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r6)
	  lfs       f1, 0x38(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r6)
	  b         .loc_0x394

	.loc_0x364:
	  lfs       f2, 0x48(r6)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x48(r6)
	  lfs       f2, 0x4C(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r6)
	  lfs       f1, 0x50(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r6)

	.loc_0x394:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80092C54
 * Size:	0002B0
 */
void JPAFieldRandom::calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lha       r8, 0x80(r6)
	  extsh.    r0, r8
	  beq-      .loc_0x30
	  lwz       r7, 0x0(r5)
	  lbz       r7, 0x40(r7)
	  cmplwi    r7, 0
	  beq-      .loc_0x2A8
	  divw      r0, r8, r7
	  mullw     r0, r0, r7
	  sub.      r0, r8, r0
	  bne-      .loc_0x2A8

	.loc_0x30:
	  lwz       r8, 0x0(r4)
	  lis       r4, 0x19
	  addi      r7, r4, 0x660D
	  lfs       f3, -0x7768(r2)
	  lwz       r0, 0xC4(r8)
	  lfs       f1, -0x775C(r2)
	  mullw     r4, r0, r7
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r8)
	  rlwinm    r0,r0,23,9,31
	  oris      r4, r0, 0x3F80
	  lwz       r0, 0xC4(r8)
	  stw       r4, 0x10(r1)
	  mullw     r4, r0, r7
	  lfs       f0, 0x10(r1)
	  fsubs     f0, f0, f3
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  fsubs     f2, f0, f1
	  stw       r0, 0xC4(r8)
	  rlwinm    r0,r0,23,9,31
	  oris      r4, r0, 0x3F80
	  lwz       r0, 0xC4(r8)
	  stw       r4, 0xC(r1)
	  mullw     r4, r0, r7
	  lfs       f0, 0xC(r1)
	  fsubs     f0, f0, f3
	  addis     r4, r4, 0x3C6F
	  subi      r4, r4, 0xCA1
	  fsubs     f4, f0, f1
	  rlwinm    r0,r4,23,9,31
	  stw       r4, 0xC4(r8)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fsubs     f0, f0, f1
	  stfs      f0, 0x4(r3)
	  stfs      f4, 0x8(r3)
	  stfs      f2, 0xC(r3)
	  lfs       f1, 0x28(r5)
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r3)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xC(r3)
	  lwz       r0, 0x7C(r6)
	  lwz       r7, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r3)
	  stw       r7, 0x14(r1)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x1E0
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0x1E0
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r6)
	  beq-      .loc_0x14C
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x164

	.loc_0x14C:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x16C
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x16C

	.loc_0x164:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0x1BC

	.loc_0x16C:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x198
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x198
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0x1BC

	.loc_0x198:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x1BC
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1BC
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0x1BC:
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)

	.loc_0x1E0:
	  lwz       r3, 0x0(r5)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x244
	  bge-      .loc_0x204
	  cmpwi     r0, 0
	  bge-      .loc_0x210
	  b         .loc_0x2A8

	.loc_0x204:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x2A8
	  b         .loc_0x278

	.loc_0x210:
	  lfs       f2, 0x3C(r6)
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x3C(r6)
	  lfs       f2, 0x40(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r6)
	  lfs       f1, 0x44(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r6)
	  b         .loc_0x2A8

	.loc_0x244:
	  lfs       f2, 0x30(r6)
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x30(r6)
	  lfs       f2, 0x34(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r6)
	  lfs       f1, 0x38(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r6)
	  b         .loc_0x2A8

	.loc_0x278:
	  lfs       f2, 0x48(r6)
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x48(r6)
	  lfs       f2, 0x4C(r6)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r6)
	  lfs       f1, 0x50(r6)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r6)

	.loc_0x2A8:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80092F04
 * Size:	0000D8
 */
void JPAFieldDrag::calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x7C(r6)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0xC4
	  lwz       r4, 0x0(r5)
	  lfs       f2, 0x84(r6)
	  lwz       r3, 0x8(r4)
	  lfs       f3, -0x7768(r2)
	  rlwinm.   r0,r3,16,28,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0x34
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x4C

	.loc_0x34:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x54
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x54

	.loc_0x4C:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0xA4

	.loc_0x54:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x80
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x80
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r5)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0xA4

	.loc_0x80:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0xA4
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xA4
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r5)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0xA4:
	  lfs       f1, -0x7768(r2)
	  lfs       f0, 0x28(r5)
	  lfs       f2, 0x74(r6)
	  fsubs     f0, f1, f0
	  fnmsubs   f0, f3, f0, f1
	  fmuls     f0, f2, f0
	  stfs      f0, 0x74(r6)
	  blr

	.loc_0xC4:
	  lfs       f1, 0x74(r6)
	  lfs       f0, 0x28(r5)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x74(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80092FDC
 * Size:	000130
 */
void JPAFieldSpin::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  addi      r5, r1, 0x8
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  addi      r3, r4, 0xA8
	  addi      r4, r31, 0x1C
	  bl        0x57C28
	  lfs       f1, 0x8(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0xC(r1)
	  fmuls     f3, f1, f1
	  lfs       f4, 0x10(r1)
	  fmuls     f2, f0, f0
	  lfs       f1, -0x7760(r2)
	  lfs       f0, 0x48DC(r3)
	  fmuls     f4, f4, f4
	  fadds     f2, f3, f2
	  fmuls     f0, f1, f0
	  fadds     f4, f4, f2
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0xC0
	  lfs       f0, -0x7764(r2)
	  fcmpo     cr0, f4, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C
	  b         .loc_0x9C

	.loc_0x7C:
	  fsqrte    f3, f4
	  lfs       f2, -0x775C(r2)
	  lfs       f0, -0x7758(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f4, f1, f0
	  fmuls     f4, f2, f0

	.loc_0x9C:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f4
	  fmuls     f1, f1, f4
	  fmuls     f0, f0, f4
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xC0:
	  lfs       f1, 0x28(r31)
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x8
	  bl        0x5763C
	  lfs       f2, 0x34(r1)
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x10(r30)
	  stfs      f1, 0x14(r30)
	  stfs      f2, 0x18(r30)
	  lfs       f2, 0x38(r1)
	  lfs       f1, 0x28(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x1C(r30)
	  stfs      f1, 0x20(r30)
	  stfs      f2, 0x24(r30)
	  lfs       f2, 0x3C(r1)
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x28(r30)
	  stfs      f1, 0x2C(r30)
	  stfs      f2, 0x30(r30)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009310C
 * Size:	000288
 */
void JPAFieldSpin::calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lfs       f0, -0x7764(r2)
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r6
	  addi      r4, r31, 0xC
	  stw       r30, 0x58(r1)
	  mr        r30, r5
	  addi      r5, r1, 0x14
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  lfs       f1, 0x10(r3)
	  addi      r3, r1, 0x20
	  stfs      f1, 0x20(r1)
	  lfs       f1, 0x14(r29)
	  stfs      f1, 0x30(r1)
	  lfs       f1, 0x18(r29)
	  stfs      f1, 0x40(r1)
	  lfs       f1, 0x1C(r29)
	  stfs      f1, 0x24(r1)
	  lfs       f1, 0x20(r29)
	  stfs      f1, 0x34(r1)
	  lfs       f1, 0x24(r29)
	  stfs      f1, 0x44(r1)
	  lfs       f1, 0x28(r29)
	  stfs      f1, 0x28(r1)
	  lfs       f1, 0x2C(r29)
	  stfs      f1, 0x38(r1)
	  lfs       f1, 0x30(r29)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  stfs      f0, 0x3C(r1)
	  stfs      f0, 0x2C(r1)
	  bl        0x57A98
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0xC(r31)
	  lfs       f3, 0x18(r1)
	  lfs       f2, 0x10(r31)
	  fsubs     f0, f1, f0
	  lfs       f4, 0x1C(r1)
	  lfs       f1, 0x14(r31)
	  fsubs     f2, f3, f2
	  stfs      f0, 0x4(r29)
	  fsubs     f0, f4, f1
	  stfs      f2, 0x8(r29)
	  stfs      f0, 0xC(r29)
	  lwz       r0, 0x7C(r31)
	  lwz       r5, 0x4(r29)
	  lwz       r4, 0x8(r29)
	  rlwinm.   r0,r0,0,29,29
	  lwz       r3, 0xC(r29)
	  stw       r5, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x1A4
	  lwz       r4, 0x0(r30)
	  lwz       r3, 0x8(r4)
	  rlwinm.   r0,r3,16,25,28
	  rlwinm    r3,r3,16,16,31
	  beq-      .loc_0x1A4
	  rlwinm.   r0,r3,0,28,28
	  lfs       f2, 0x84(r31)
	  lfs       f3, -0x7768(r2)
	  beq-      .loc_0x110
	  lfs       f0, 0x38(r4)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x128

	.loc_0x110:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x130
	  lfs       f0, 0x3C(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x130

	.loc_0x128:
	  lfs       f3, -0x7764(r2)
	  b         .loc_0x180

	.loc_0x130:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x15C
	  lfs       f0, 0x34(r4)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x15C
	  lfs       f1, 0x3C(r4)
	  lfs       f0, 0xC(r30)
	  fsubs     f1, f1, f2
	  fmuls     f3, f1, f0
	  b         .loc_0x180

	.loc_0x15C:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x180
	  lfs       f0, 0x30(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x180
	  lfs       f1, 0x38(r4)
	  lfs       f0, 0x8(r30)
	  fsubs     f1, f2, f1
	  fmuls     f3, f1, f0

	.loc_0x180:
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x1A4:
	  lwz       r3, 0x0(r30)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x208
	  bge-      .loc_0x1C8
	  cmpwi     r0, 0
	  bge-      .loc_0x1D4
	  b         .loc_0x26C

	.loc_0x1C8:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x26C
	  b         .loc_0x23C

	.loc_0x1D4:
	  lfs       f2, 0x3C(r31)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r31)
	  lfs       f2, 0x40(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r31)
	  lfs       f1, 0x44(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x44(r31)
	  b         .loc_0x26C

	.loc_0x208:
	  lfs       f2, 0x30(r31)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x30(r31)
	  lfs       f2, 0x34(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r31)
	  lfs       f1, 0x38(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r31)
	  b         .loc_0x26C

	.loc_0x23C:
	  lfs       f2, 0x48(r31)
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x48(r31)
	  lfs       f2, 0x4C(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4C(r31)
	  lfs       f1, 0x50(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r31)

	.loc_0x26C:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80093394
 * Size:	000038
 */
void JPAFieldBlock::JPAFieldBlock(const unsigned char*, JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x0(r3)
	  mr        r4, r5
	  bl        .loc_0x38
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x38:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void JPAFieldBlock::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800933CC
 * Size:	0002EC
 */
void JPAFieldBlock::init(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7764(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x0(r3)
	  lfs       f2, 0x30(r3)
	  lfs       f1, 0x38(r3)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x8(r31)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x44
	  lfs       f0, -0x7768(r2)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x50

	.loc_0x44:
	  lfs       f0, -0x7768(r2)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x8(r31)

	.loc_0x50:
	  lwz       r3, 0x0(r31)
	  lfs       f0, -0x7764(r2)
	  lfs       f2, 0x3C(r3)
	  lfs       f1, 0x34(r3)
	  fsubs     f1, f2, f1
	  stfs      f1, 0xC(r31)
	  lfs       f1, 0xC(r31)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x80
	  lfs       f0, -0x7768(r2)
	  stfs      f0, 0xC(r31)
	  b         .loc_0x8C

	.loc_0x80:
	  lfs       f0, -0x7768(r2)
	  fdivs     f0, f0, f1
	  stfs      f0, 0xC(r31)

	.loc_0x8C:
	  lwz       r3, 0x0(r31)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x10(r31)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x14(r31)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x18(r31)
	  lwz       r3, 0x0(r31)
	  lfs       f0, 0x18(r3)
	  stfs      f0, 0x1C(r31)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x20(r3)
	  stfs      f0, 0x24(r31)
	  lwz       r3, 0x0(r31)
	  lfs       f0, 0x24(r3)
	  stfs      f0, 0x28(r31)
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,0,28,31
	  cmplwi    r0, 0x8
	  bgt-      .loc_0x2D0
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x3268
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r3, 0x10
	  li        r5, 0
	  bl        -0x6F590
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x3340
	  stw       r0, 0x0(r3)

	.loc_0x128:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x10
	  li        r5, 0
	  bl        -0x6F5C4
	  cmplwi    r3, 0
	  beq-      .loc_0x15C
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x332C
	  stw       r0, 0x0(r3)

	.loc_0x15C:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x1C
	  li        r5, 0
	  bl        -0x6F5F8
	  cmplwi    r3, 0
	  beq-      .loc_0x190
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x3318
	  stw       r0, 0x0(r3)

	.loc_0x190:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x20
	  li        r5, 0
	  bl        -0x6F62C
	  cmplwi    r3, 0
	  beq-      .loc_0x1C4
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x3304
	  stw       r0, 0x0(r3)

	.loc_0x1C4:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x24
	  li        r5, 0
	  bl        -0x6F660
	  cmplwi    r3, 0
	  beq-      .loc_0x1F8
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x32F0
	  stw       r0, 0x0(r3)

	.loc_0x1F8:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x10
	  li        r5, 0
	  bl        -0x6F694
	  cmplwi    r3, 0
	  beq-      .loc_0x22C
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x32C8
	  stw       r0, 0x0(r3)

	.loc_0x22C:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x10
	  li        r5, 0
	  bl        -0x6F6C8
	  cmplwi    r3, 0
	  beq-      .loc_0x260
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x32B4
	  stw       r0, 0x0(r3)

	.loc_0x260:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x34
	  li        r5, 0
	  bl        -0x6F6FC
	  cmplwi    r3, 0
	  beq-      .loc_0x294
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x32DC
	  stw       r0, 0x0(r3)

	.loc_0x294:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8
	  li        r3, 0x34
	  li        r5, 0
	  bl        -0x6F730
	  cmplwi    r3, 0
	  beq-      .loc_0x2C8
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x32A0
	  stw       r0, 0x0(r3)

	.loc_0x2C8:
	  stw       r3, 0x4(r31)
	  b         .loc_0x2D8

	.loc_0x2D0:
	  li        r0, 0
	  stw       r0, 0x4(r31)

	.loc_0x2D8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800936B8
 * Size:	000048
 */
void JPAFieldBase::~JPAFieldBase()
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
	  addi      r0, r5, 0x328C
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x6F630

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
 * Address:	80093700
 * Size:	000004
 */
void JPAFieldBase::prepare(JPAEmitterWorkData*, JPAFieldBlock*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80093704
 * Size:	00005C
 */
void JPAFieldSpin::~JPAFieldSpin()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x32A0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F690

	.loc_0x44:
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
 * Address:	80093760
 * Size:	00005C
 */
void JPAFieldDrag::~JPAFieldDrag()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x32B4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F6EC

	.loc_0x44:
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
 * Address:	800937BC
 * Size:	00005C
 */
void JPAFieldRandom::~JPAFieldRandom()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x32C8
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F748

	.loc_0x44:
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
 * Address:	80093818
 * Size:	00005C
 */
void JPAFieldConvection::~JPAFieldConvection()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x32DC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F7A4

	.loc_0x44:
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
 * Address:	80093874
 * Size:	00005C
 */
void JPAFieldVortex::~JPAFieldVortex()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x32F0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F800

	.loc_0x44:
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
 * Address:	800938D0
 * Size:	00005C
 */
void JPAFieldNewton::~JPAFieldNewton()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x3304
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F85C

	.loc_0x44:
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
 * Address:	8009392C
 * Size:	00005C
 */
void JPAFieldMagnet::~JPAFieldMagnet()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x3318
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F8B8

	.loc_0x44:
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
 * Address:	80093988
 * Size:	00005C
 */
void JPAFieldAir::~JPAFieldAir()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x332C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F914

	.loc_0x44:
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
 * Address:	800939E4
 * Size:	00005C
 */
void JPAFieldGravity::~JPAFieldGravity()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x3340
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x328C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x6F970

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
