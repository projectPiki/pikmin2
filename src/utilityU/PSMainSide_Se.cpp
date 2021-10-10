

/*
 * --INFO--
 * Address:	8046D144
 * Size:	00021C
 */
void PSM::ClusterFactory::partInit((unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bl        -0x12C2A4
	  lwz       r0, 0x8(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x110
	  bge-      .loc_0x1BC
	  cmpwi     r0, 0
	  bge-      .loc_0x48
	  b         .loc_0x1BC

	.loc_0x48:
	  rlwinm    r0,r30,0,24,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x98
	  bge-      .loc_0x64
	  cmpwi     r0, 0
	  bge-      .loc_0x70
	  b         .loc_0xF0

	.loc_0x64:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xF0
	  b         .loc_0xC4

	.loc_0x70:
	  li        r5, 0x19
	  li        r4, 0x16
	  li        r3, 0x10
	  li        r0, 0x3054
	  stb       r5, 0x8(r1)
	  stb       r5, 0xA(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0x9(r1)
	  stw       r0, 0xC(r1)
	  b         .loc_0x1D8

	.loc_0x98:
	  li        r6, 0x16
	  li        r5, 0x10
	  li        r4, 0xE
	  li        r3, 0x8
	  li        r0, 0x3053
	  stb       r6, 0x8(r1)
	  stb       r5, 0xA(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0x9(r1)
	  stw       r0, 0xC(r1)
	  b         .loc_0x1D8

	.loc_0xC4:
	  li        r6, 0xE
	  li        r5, 0x8
	  li        r4, 0x5
	  li        r3, 0
	  li        r0, 0x3052
	  stb       r6, 0x8(r1)
	  stb       r5, 0xA(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0x9(r1)
	  stw       r0, 0xC(r1)
	  b         .loc_0x1D8

	.loc_0xF0:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x25F8
	  li        r4, 0x3E
	  subi      r5, r5, 0x25E4
	  crclr     6, 0x6
	  bl        -0x442C0C
	  b         .loc_0x1D8

	.loc_0x110:
	  rlwinm    r0,r30,0,24,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x154
	  bge-      .loc_0x12C
	  cmpwi     r0, 0
	  bge-      .loc_0x138
	  b         .loc_0x19C

	.loc_0x12C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x19C
	  b         .loc_0x178

	.loc_0x138:
	  li        r4, 0x64
	  li        r3, 0x46
	  li        r0, 0x3C
	  stb       r4, 0x8(r1)
	  stb       r3, 0xB(r1)
	  stb       r0, 0x9(r1)
	  b         .loc_0x1D8

	.loc_0x154:
	  li        r5, 0x46
	  li        r4, 0x3C
	  li        r3, 0x28
	  li        r0, 0x1E
	  stb       r5, 0x8(r1)
	  stb       r4, 0xA(r1)
	  stb       r3, 0xB(r1)
	  stb       r0, 0x9(r1)
	  b         .loc_0x1D8

	.loc_0x178:
	  li        r5, 0x28
	  li        r4, 0x1E
	  li        r3, 0xA
	  li        r0, 0
	  stb       r5, 0x8(r1)
	  stb       r4, 0xA(r1)
	  stb       r3, 0xB(r1)
	  stb       r0, 0x9(r1)
	  b         .loc_0x1D8

	.loc_0x19C:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x25F8
	  li        r4, 0x5F
	  subi      r5, r5, 0x25E4
	  crclr     6, 0x6
	  bl        -0x442CB8
	  b         .loc_0x1D8

	.loc_0x1BC:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x25F8
	  li        r4, 0x64
	  subi      r5, r5, 0x25E4
	  crclr     6, 0x6
	  bl        -0x442CD8

	.loc_0x1D8:
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x0(r31)
	  lbz       r0, 0x9(r1)
	  stb       r0, 0x1(r31)
	  lbz       r0, 0xA(r1)
	  stb       r0, 0x2(r31)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x3(r31)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x4(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046D360
 * Size:	000074
 */
void PSM::WorldMapRocket::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x3B318C
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x78C
	  lfs       f1, 0x2980(r2)
	  stw       r3, 0x0(r31)
	  mr        r3, r31
	  lfs       f0, 0x2984(r2)
	  stw       r0, 0x4(r31)
	  lfs       f2, 0x2988(r2)
	  stfs      f1, 0x8(r31)
	  lfs       f1, 0x298C(r2)
	  stfs      f0, 0xC(r31)
	  lfs       f0, 0x2990(r2)
	  stfs      f2, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  stfs      f0, 0x18(r31)
	  stfs      f2, 0x1C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046D3D4
 * Size:	000060
 */
void PSM::WorldMapRocket::__dt(void)
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
	  subi      r0, r5, 0x78C
	  stw       r0, 0x0(r30)
	  bl        -0x3B3208
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x449360

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
 * Address:	8046D434
 * Size:	000490
 */
void PSM::WorldMapRocket::startRocketSE((float, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f30, f1
	  mr        r30, r3
	  fmr       f31, f2
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1021
	  li        r5, 0
	  bl        -0x134E40
	  mr.       r31, r3
	  beq-      .loc_0x464
	  fmr       f1, f30
	  lfs       f2, 0x8(r30)
	  lfs       f3, 0xC(r30)
	  li        r3, 0
	  lfs       f4, 0x2980(r2)
	  lfs       f5, 0x2994(r2)
	  bl        -0x3B3250
	  lfs       f6, 0x2998(r2)
	  fcmpo     cr0, f1, f6
	  bge-      .loc_0x8C
	  lfs       f2, 0x2980(r2)
	  fmr       f3, f6
	  lfs       f4, 0x10(r30)
	  li        r3, 0x1
	  fmr       f5, f2
	  bl        -0x3B3210
	  b         .loc_0xA8

	.loc_0x8C:
	  lfs       f3, 0x2994(r2)
	  fmr       f2, f6
	  fmr       f5, f6
	  lfs       f4, 0x10(r30)
	  fmr       f6, f3
	  li        r3, 0
	  bl        -0x3B3230

	.loc_0xA8:
	  fmr       f30, f1
	  lfs       f2, 0x14(r30)
	  fmr       f1, f31
	  lfs       f3, 0x18(r30)
	  lfs       f4, 0x2980(r2)
	  li        r3, 0
	  lfs       f5, 0x2994(r2)
	  bl        -0x3B32B4
	  lfs       f6, 0x2998(r2)
	  fcmpo     cr0, f1, f6
	  bge-      .loc_0xF4
	  lfs       f2, 0x2980(r2)
	  fmr       f3, f6
	  lfs       f4, 0x1C(r30)
	  li        r3, 0x1
	  fmr       f5, f2
	  bl        -0x3B3274
	  fmr       f31, f1
	  b         .loc_0x114

	.loc_0xF4:
	  lfs       f3, 0x2994(r2)
	  fmr       f2, f6
	  fmr       f5, f6
	  lfs       f4, 0x1C(r30)
	  fmr       f6, f3
	  li        r3, 0
	  bl        -0x3B3298
	  fmr       f31, f1

	.loc_0x114:
	  lwz       r0, 0x4(r30)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x160
	  mr        r3, r31
	  fmr       f1, f30
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  fmr       f1, f31
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0x7
	  bgt-      .loc_0x464
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x910
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  mr        r3, r31
	  lfs       f1, 0x2994(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x2
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f1, 0x299C(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x2
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x29A0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x464
	  li        r0, 0x4
	  stw       r0, 0x4(r30)
	  b         .loc_0x464
	  mr        r3, r31
	  lfs       f1, 0x2994(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x2
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f1, 0x299C(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x2
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x29A0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x464
	  li        r0, 0x4
	  stw       r0, 0x4(r30)
	  b         .loc_0x464
	  mr        r3, r31
	  lfs       f1, 0x2994(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x5
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f1, 0x29A4(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x5
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x29A8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x464
	  li        r0, 0x4
	  stw       r0, 0x4(r30)
	  b         .loc_0x464
	  mr        r3, r31
	  lfs       f1, 0x2998(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x1E
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f1, 0x29AC(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x1E
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x464
	  mr        r3, r31
	  lfs       f1, 0x29B0(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0xA
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f1, 0x2994(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0xA
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x464
	  lbz       r0, -0x635C(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x398
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  stfs      f1, -0x6360(r13)
	  stb       r0, -0x635C(r13)

	.loc_0x398:
	  mr        r3, r31
	  lfs       f1, 0x29B4(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x2
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x464
	  mr        r3, r31
	  lfs       f1, -0x6360(r13)
	  lwz       r12, 0x10(r31)
	  li        r4, 0x5
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x6360(r13)
	  fcmpu     cr0, f2, f1
	  bne-      .loc_0x464
	  lfs       f0, 0x2998(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x418
	  li        r0, 0x5
	  stw       r0, 0x4(r30)
	  b         .loc_0x464

	.loc_0x418:
	  li        r0, 0x4
	  stw       r0, 0x4(r30)
	  b         .loc_0x464
	  mr        r3, r31
	  lfs       f1, 0x2980(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f1, 0x2980(r2)
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x464:
	  mr        r3, r31
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046D8C4
 * Size:	000008
 */
void PSM::WorldMapRocket::stateChange((PSM::WorldMapRocket::rocketState))
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046D8CC
 * Size:	000004
 */
void PSM::PikiHumming::__ct(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void PSM::PikiHumming::init((PSM::HumType, unsigned long, int, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void PSM::PikiHumming::exec((PSM::HumType, bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void PSM::PikiHumming::play((PSM::Piki*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046D8D0
 * Size:	0000FC
 */
void PSM::PikiHummingMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0xA
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  stw       r0, 0x0(r3)
	  li        r0, 0
	  li        r3, 0x64
	  stw       r0, 0x4(r31)
	  stw       r0, 0x8(r31)
	  bl        -0x449954
	  lis       r4, 0x8047
	  li        r5, 0
	  subi      r4, r4, 0x2734
	  li        r6, 0x1C
	  li        r7, 0x3
	  bl        -0x3ABF28
	  stw       r3, 0xC(r31)
	  li        r12, 0
	  li        r0, 0x287E
	  li        r3, 0x48
	  lwz       r30, 0xC(r31)
	  li        r10, 0x4
	  li        r11, -0x1
	  li        r9, 0x1
	  stw       r12, 0x14(r30)
	  li        r8, 0x2885
	  li        r6, 0x12C
	  li        r7, 0x2
	  stw       r0, 0x4(r30)
	  li        r5, 0x2882
	  li        r4, 0xA0
	  li        r0, 0x3
	  stw       r3, 0x8(r30)
	  mr        r3, r31
	  stw       r10, 0xC(r30)
	  stw       r12, 0x0(r30)
	  stb       r12, 0x18(r30)
	  stw       r11, 0x10(r30)
	  lwz       r10, 0xC(r31)
	  stw       r9, 0x30(r10)
	  stw       r8, 0x20(r10)
	  stw       r6, 0x24(r10)
	  stw       r7, 0x28(r10)
	  stw       r12, 0x1C(r10)
	  stb       r12, 0x34(r10)
	  stw       r11, 0x2C(r10)
	  lwz       r6, 0xC(r31)
	  stw       r7, 0x4C(r6)
	  stw       r5, 0x3C(r6)
	  stw       r4, 0x40(r6)
	  stw       r0, 0x44(r6)
	  stw       r12, 0x38(r6)
	  stb       r12, 0x50(r6)
	  stw       r11, 0x48(r6)
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
 * Address:	8046D9CC
 * Size:	000624
 */
void PSM::PikiHummingMgr::exec(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r4, 0
	  lis       r5, 0x804B
	  stw       r0, 0x44(r1)
	  subi      r5, r5, 0x434C
	  cmplwi    r4, 0
	  lis       r6, 0x804A
	  stmw      r25, 0x24(r1)
	  mr        r26, r3
	  subi      r30, r6, 0x25F8
	  li        r29, 0
	  lwz       r0, -0x6D20(r13)
	  stw       r5, 0x8(r1)
	  stw       r4, 0x14(r1)
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bne-      .loc_0x64
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1E4

	.loc_0x64:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xD4

	.loc_0x80:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xD4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x80
	  b         .loc_0x1E4

	.loc_0xF4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x21C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128
	  li        r29, 0x1
	  b         .loc_0x204

	.loc_0x128:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1E4

	.loc_0x154:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C8

	.loc_0x174:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1C8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x174

	.loc_0x1E4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xF4

	.loc_0x204:
	  lwz       r3, -0x6D20(r13)
	  li        r28, 0
	  bl        -0x312FB8
	  mr.       r31, r3
	  beq-      .loc_0x408
	  lhz       r27, 0x2DC(r31)
	  li        r0, 0
	  cmpwi     r27, 0
	  blt-      .loc_0x234
	  cmpwi     r27, 0x1
	  bgt-      .loc_0x234
	  li        r0, 0x1

	.loc_0x234:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x250
	  addi      r3, r30, 0
	  addi      r5, r30, 0x14
	  li        r4, 0x18A
	  crclr     6, 0x6
	  bl        -0x4435D8

	.loc_0x250:
	  cmpwi     r27, 0
	  li        r0, 0
	  blt-      .loc_0x268
	  cmpwi     r27, 0x7
	  bge-      .loc_0x268
	  li        r0, 0x1

	.loc_0x268:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x284
	  addi      r3, r30, 0x20
	  addi      r5, r30, 0x14
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x44360C

	.loc_0x284:
	  lis       r3, 0x8051
	  rlwinm    r5,r27,5,0,26
	  addi      r0, r3, 0x22EC
	  li        r4, 0x1
	  add       r25, r0, r5
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x14
	  bne-      .loc_0x408
	  cmpwi     r27, 0
	  li        r0, 0
	  blt-      .loc_0x2CC
	  cmpwi     r27, 0x7
	  bge-      .loc_0x2CC
	  li        r0, 0x1

	.loc_0x2CC:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2E8
	  addi      r3, r30, 0x20
	  addi      r5, r30, 0x14
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x443670

	.loc_0x2E8:
	  mr        r3, r25
	  li        r4, 0
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x14
	  bne-      .loc_0x408
	  cmpwi     r27, 0
	  li        r0, 0
	  blt-      .loc_0x320
	  cmpwi     r27, 0x7
	  bge-      .loc_0x320
	  li        r0, 0x1

	.loc_0x320:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x33C
	  addi      r3, r30, 0x20
	  addi      r5, r30, 0x14
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x4436C4

	.loc_0x33C:
	  mr        r3, r25
	  li        r4, 0x2
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x14
	  bne-      .loc_0x408
	  cmpwi     r27, 0
	  li        r0, 0
	  blt-      .loc_0x374
	  cmpwi     r27, 0x7
	  bge-      .loc_0x374
	  li        r0, 0x1

	.loc_0x374:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x390
	  addi      r3, r30, 0x20
	  addi      r5, r30, 0x14
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x443718

	.loc_0x390:
	  mr        r3, r25
	  li        r4, 0x3
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x14
	  bne-      .loc_0x408
	  cmpwi     r27, 0
	  li        r0, 0
	  blt-      .loc_0x3C8
	  cmpwi     r27, 0x7
	  bge-      .loc_0x3C8
	  li        r0, 0x1

	.loc_0x3C8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x3E4
	  addi      r3, r30, 0x20
	  addi      r5, r30, 0x14
	  li        r4, 0x77
	  crclr     6, 0x6
	  bl        -0x44376C

	.loc_0x3E4:
	  mr        r3, r25
	  li        r4, 0x4
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x14
	  bne-      .loc_0x408
	  li        r28, 0x1

	.loc_0x408:
	  cmpwi     r28, 0x1
	  beq-      .loc_0x4F4
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x430
	  addi      r3, r30, 0x2C
	  addi      r5, r30, 0x14
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4437B8

	.loc_0x430:
	  lwz       r27, -0x6780(r13)
	  cmplwi    r27, 0
	  bne-      .loc_0x450
	  addi      r3, r30, 0x2C
	  addi      r5, r30, 0x14
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4437D8

	.loc_0x450:
	  lwz       r0, 0x4(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x470
	  addi      r3, r30, 0x38
	  addi      r5, r30, 0x14
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x4437F8

	.loc_0x470:
	  lwz       r3, 0x4(r27)
	  lwz       r27, 0x4(r3)
	  cmplwi    r27, 0
	  bne-      .loc_0x494
	  addi      r3, r30, 0x38
	  addi      r5, r30, 0x44
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x44381C

	.loc_0x494:
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4B4
	  b         .loc_0x4B8

	.loc_0x4B4:
	  li        r27, 0

	.loc_0x4B8:
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4F4
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x3C
	  ble-      .loc_0x4F4
	  li        r28, 0x2

	.loc_0x4F4:
	  cmplwi    r31, 0
	  beq-      .loc_0x528
	  lwz       r3, 0x254(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x528
	  lwz       r0, 0xBC(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x528
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x528
	  li        r0, 0x1
	  stb       r0, 0x10(r26)
	  b         .loc_0x530

	.loc_0x528:
	  li        r0, 0
	  stb       r0, 0x10(r26)

	.loc_0x530:
	  stw       r28, 0x4(r26)
	  li        r3, 0
	  b         .loc_0x5FC

	.loc_0x53C:
	  rlwinm    r0,r3,0,24,31
	  lwz       r4, 0xC(r26)
	  mulli     r0, r0, 0x1C
	  lwz       r6, 0x4(r26)
	  lbz       r8, 0x10(r26)
	  li        r5, 0x1
	  add       r7, r4, r0
	  lwz       r0, 0x14(r7)
	  sub       r0, r6, r0
	  cntlzw    r0, r0
	  rlwinm.   r0,r0,27,24,31
	  beq-      .loc_0x574
	  cmplwi    r8, 0
	  bne-      .loc_0x58C

	.loc_0x574:
	  lwz       r0, 0x10(r7)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x588
	  li        r0, 0
	  stw       r0, 0x0(r7)

	.loc_0x588:
	  li        r5, 0

	.loc_0x58C:
	  li        r6, 0
	  rlwinm.   r0,r5,0,24,31
	  stb       r6, 0x18(r7)
	  beq-      .loc_0x5CC
	  lwz       r5, 0x0(r7)
	  lwz       r4, 0x8(r7)
	  divwu     r0, r5, r4
	  mullw     r0, r0, r4
	  sub.      r0, r5, r0
	  bne-      .loc_0x5C0
	  li        r0, 0x1
	  stb       r0, 0x18(r7)
	  stw       r6, 0x0(r7)

	.loc_0x5C0:
	  lwz       r4, 0x0(r7)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r7)

	.loc_0x5CC:
	  lwz       r4, 0x10(r7)
	  cmpwi     r4, 0
	  blt-      .loc_0x5F8
	  addi      r0, r4, 0x1
	  stw       r0, 0x10(r7)
	  lwz       r4, 0x10(r7)
	  lwz       r0, 0x8(r7)
	  cmpw      r4, r0
	  blt-      .loc_0x5F8
	  li        r0, -0x1
	  stw       r0, 0x10(r7)

	.loc_0x5F8:
	  addi      r3, r3, 0x1

	.loc_0x5FC:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  blt+      .loc_0x53C
	  li        r0, 0
	  stw       r0, 0x8(r26)
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void PSM::PikiHummingMgr::entryRequest(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046DFF0
 * Size:	0000C4
 */
void PSM::PikiHummingMgr::play((PSM::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lwz       r4, 0x74(r31)
	  lwz       r0, 0x0(r3)
	  cmplw     r4, r0
	  blt-      .loc_0xAC
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0x4
	  bge-      .loc_0xAC
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0xC(r3)
	  mulli     r0, r0, 0x1C
	  add       r30, r3, r0
	  lbz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lwz       r3, 0x2C(r31)
	  bl        -0x326298
	  lwz       r5, 0xC(r30)
	  cmplwi    r31, 0
	  lwz       r6, 0x4(r30)
	  mr        r4, r31
	  divwu     r0, r3, r5
	  mullw     r0, r0, r5
	  sub       r0, r3, r0
	  add       r5, r6, r0
	  beq-      .loc_0x98
	  addi      r4, r31, 0x30

	.loc_0x98:
	  mr        r3, r31
	  li        r6, 0
	  bl        -0xB9CC
	  li        r0, 0
	  stw       r0, 0x10(r30)

	.loc_0xAC:
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
 * Address:	8046E0B4
 * Size:	00015C
 */
void PSStartSoundVec(unsigned long, Vec*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x25F8
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x443ABC

	.loc_0x4C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x6C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x443ADC

	.loc_0x6C:
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x14
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x443AFC

	.loc_0x8C:
	  lwz       r3, 0x8(r30)
	  mr        r5, r28
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB8
	  li        r3, 0
	  b         .loc_0x13C

	.loc_0xB8:
	  lwz       r0, -0x6E4C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xD8
	  addi      r3, r31, 0x68
	  addi      r5, r31, 0x14
	  li        r4, 0x89
	  crclr     6, 0x6
	  bl        -0x443B48

	.loc_0xD8:
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r29, 0
	  mr        r30, r3
	  bne-      .loc_0x110
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x20A
	  crclr     6, 0x6
	  bl        -0x443B80

	.loc_0x110:
	  li        r0, 0
	  lwz       r3, -0x67A8(r13)
	  stw       r0, 0x8(r1)
	  mr        r5, r28
	  mr        r6, r29
	  mr        r9, r30
	  addi      r4, r1, 0x8
	  li        r7, 0
	  li        r8, 0
	  bl        0x1064
	  lwz       r3, 0x8(r1)

	.loc_0x13C:
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
 * Address:	8046E210
 * Size:	00006C
 */
void newPSCluster_SijimiChou(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r4, 0x3
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  bl        -0x12D2DC
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r4, r3, 0x79C
	  stw       r0, 0x10(r1)
	  li        r3, 0x74
	  stw       r4, 0x8(r1)
	  bl        -0x44A3A4
	  mr.       r0, r3
	  beq-      .loc_0x54
	  mr        r4, r31
	  addi      r5, r1, 0x8
	  bl        -0xB228
	  mr        r0, r3

	.loc_0x54:
	  mr        r3, r0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void newPSCluster_Ujamushi(Game::Creature*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046E27C
 * Size:	000198
 */
void PSStartEnemyGhostSE(Game::EnemyBase*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x580A
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x16C
	  mr        r3, r30
	  lfs       f31, 0x2980(r2)
	  lwz       r12, 0x0(r30)
	  fmr       f30, f31
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x54
	  bgt-      .loc_0x12C
	  lis       r4, 0x804F
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x8F0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f31, 0x2994(r2)
	  lfs       f30, 0x29B8(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x2994(r2)
	  lfs       f30, 0x29BC(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x2994(r2)
	  fmr       f30, f31
	  b         .loc_0x12C
	  lfs       f31, 0x2994(r2)
	  lfs       f30, 0x29C0(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x2994(r2)
	  lfs       f30, 0x29C4(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x29BC(r2)
	  lfs       f30, 0x29C8(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x29B8(r2)
	  lfs       f30, 0x29CC(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x29D0(r2)
	  lfs       f30, 0x29AC(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x29D4(r2)
	  lfs       f30, 0x29D8(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x29D4(r2)
	  lfs       f30, 0x29DC(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x29D4(r2)
	  lfs       f30, 0x29E0(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x2998(r2)
	  lfs       f30, 0x29A0(r2)
	  b         .loc_0x12C
	  lfs       f31, 0x29E4(r2)
	  lfs       f30, 0x29A8(r2)

	.loc_0x12C:
	  mr        r3, r31
	  fmr       f1, f31
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  fmr       f1, f30
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x16C:
	  mr        r3, r31
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046E414
 * Size:	00027C
 */
void PSStartEnemyFatalHitSE(Game::EnemyBase*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lis       r4, 0x804A
	  mr        r28, r3
	  lwz       r12, 0x100(r12)
	  subi      r31, r4, 0x25F8
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  mr        r29, r3
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x443E3C

	.loc_0x6C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x8C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x443E5C

	.loc_0x8C:
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x14
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x443E7C

	.loc_0xAC:
	  lwz       r3, 0x8(r30)
	  li        r4, 0
	  li        r5, 0x580B
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD8
	  li        r31, 0
	  b         .loc_0x15C

	.loc_0xD8:
	  lwz       r0, -0x6E4C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF8
	  addi      r3, r31, 0x68
	  addi      r5, r31, 0x14
	  li        r4, 0x89
	  crclr     6, 0x6
	  bl        -0x443EC8

	.loc_0xF8:
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r29, 0
	  mr        r30, r3
	  bne-      .loc_0x130
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x20A
	  crclr     6, 0x6
	  bl        -0x443F00

	.loc_0x130:
	  li        r0, 0
	  lwz       r3, -0x67A8(r13)
	  stw       r0, 0x8(r1)
	  mr        r6, r29
	  mr        r9, r30
	  addi      r4, r1, 0x8
	  li        r5, 0x580B
	  li        r7, 0
	  li        r8, 0
	  bl        0xCE4
	  lwz       r31, 0x8(r1)

	.loc_0x15C:
	  cmplwi    r31, 0
	  beq-      .loc_0x248
	  mr        r3, r28
	  addi      r4, r1, 0xC
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x18(r1)
	  li        r3, 0
	  lfs       f2, 0x29E8(r2)
	  fmr       f1, f31
	  lfs       f3, 0x29EC(r2)
	  fmr       f4, f2
	  lfs       f5, 0x2998(r2)
	  lfs       f6, 0x29AC(r2)
	  bl        -0x3B4308
	  fmr       f30, f1
	  lfs       f0, 0x2994(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x1B4
	  fmr       f30, f0

	.loc_0x1B4:
	  lfs       f0, 0x2998(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x1C4
	  fmr       f30, f0

	.loc_0x1C4:
	  lfs       f3, 0x29E8(r2)
	  fmr       f1, f31
	  lfs       f2, 0x29EC(r2)
	  li        r3, 0x1
	  fmr       f4, f3
	  lfs       f5, 0x29D0(r2)
	  lfs       f6, 0x29DC(r2)
	  bl        -0x3B434C
	  fmr       f31, f1
	  lfs       f0, 0x29DC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x1F8
	  fmr       f31, f0

	.loc_0x1F8:
	  lfs       f0, 0x29D0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x208
	  fmr       f31, f0

	.loc_0x208:
	  mr        r3, r31
	  fmr       f1, f30
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  fmr       f1, f31
	  lwz       r12, 0x10(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x248:
	  mr        r3, r31
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046E690
 * Size:	0001B0
 */
void PSStartEnemyDownSmokeSE(Game::EnemyBase*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  fmr       f31, f1
	  lfs       f0, 0x2980(r2)
	  fcmpu     cr0, f0, f31
	  beq-      .loc_0x30
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x194

	.loc_0x38:
	  lfs       f0, 0x29B0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xB0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x3808
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x190
	  fmr       f1, f31
	  lfs       f2, 0x2980(r2)
	  lfs       f3, 0x29B0(r2)
	  li        r3, 0
	  lfs       f4, 0x2994(r2)
	  lfs       f5, 0x29B8(r2)
	  bl        -0x3B44D8
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x190

	.loc_0xB0:
	  lfs       f0, 0x29D0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x128
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x3809
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x190
	  fmr       f1, f31
	  lfs       f2, 0x29B0(r2)
	  lfs       f3, 0x29D0(r2)
	  li        r3, 0
	  lfs       f4, 0x29AC(r2)
	  lfs       f5, 0x29D4(r2)
	  bl        -0x3B4550
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x190

	.loc_0x128:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x380A
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x190
	  fmr       f1, f31
	  lfs       f2, 0x29D0(r2)
	  lfs       f3, 0x29A0(r2)
	  li        r3, 0
	  lfs       f4, 0x29AC(r2)
	  lfs       f5, 0x29B8(r2)
	  bl        -0x3B45BC
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x190:
	  mr        r3, r31

	.loc_0x194:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046E840
 * Size:	000200
 */
void PSStartEnemyDownWatSE(Game::EnemyBase*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  fmr       f31, f1
	  lfs       f0, 0x2980(r2)
	  fcmpu     cr0, f0, f31
	  beq-      .loc_0x30
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x38

	.loc_0x30:
	  li        r3, 0
	  b         .loc_0x1E4

	.loc_0x38:
	  lfs       f0, 0x29B0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xD8
	  lwz       r31, 0x28C(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x54
	  addi      r31, r31, 0x30

	.loc_0x54:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x25CC
	  li        r4, 0x237
	  subi      r5, r5, 0x25E4
	  crclr     6, 0x6
	  bl        -0x444278

	.loc_0x7C:
	  lwz       r3, -0x6E38(r13)
	  mr        r4, r31
	  li        r5, 0x380B
	  li        r6, 0
	  lwz       r3, 0x1C(r3)
	  bl        -0x12F018
	  mr.       r31, r3
	  beq-      .loc_0x1E0
	  fmr       f1, f31
	  lfs       f2, 0x2980(r2)
	  lfs       f3, 0x29B0(r2)
	  li        r3, 0
	  lfs       f4, 0x2994(r2)
	  lfs       f5, 0x29B8(r2)
	  bl        -0x3B46B0
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E0

	.loc_0xD8:
	  lfs       f0, 0x29D0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x178
	  lwz       r31, 0x28C(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0xF4
	  addi      r31, r31, 0x30

	.loc_0xF4:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x11C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x25CC
	  li        r4, 0x237
	  subi      r5, r5, 0x25E4
	  crclr     6, 0x6
	  bl        -0x444318

	.loc_0x11C:
	  lwz       r3, -0x6E38(r13)
	  mr        r4, r31
	  li        r5, 0x380C
	  li        r6, 0
	  lwz       r3, 0x1C(r3)
	  bl        -0x12F0B8
	  mr.       r31, r3
	  beq-      .loc_0x1E0
	  fmr       f1, f31
	  lfs       f2, 0x29B0(r2)
	  lfs       f3, 0x29D0(r2)
	  li        r3, 0
	  lfs       f4, 0x29AC(r2)
	  lfs       f5, 0x29D4(r2)
	  bl        -0x3B4750
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E0

	.loc_0x178:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x380D
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x1E0
	  fmr       f1, f31
	  lfs       f2, 0x29D0(r2)
	  lfs       f3, 0x29AC(r2)
	  li        r3, 0
	  lfs       f4, 0x29E0(r2)
	  lfs       f5, 0x29B8(r2)
	  bl        -0x3B47BC
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x10(r31)
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E0:
	  mr        r3, r31

	.loc_0x1E4:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046EA40
 * Size:	000260
 */
void PSStartTreasureLaderSE(float)
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
	  fmr       f30, f1
	  lis       r4, 0x804A
	  lwz       r3, -0x67A8(r13)
	  subi      r31, r4, 0x25F8
	  li        r4, 0x1874
	  li        r5, 0
	  bl        -0x136450
	  mr.       r29, r3
	  beq-      .loc_0x230
	  lfs       f0, -0x7950(r13)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x7C
	  fmr       f1, f30
	  lfs       f2, 0x2980(r2)
	  fmr       f3, f0
	  lfs       f4, -0x7948(r13)
	  lfs       f5, -0x7944(r13)
	  li        r3, 0x1
	  lfs       f6, 0x2994(r2)
	  bl        -0x3B480C
	  b         .loc_0x98

	.loc_0x7C:
	  lfs       f3, 0x2994(r2)
	  fmr       f1, f30
	  fmr       f2, f0
	  lfs       f5, 0x29D0(r2)
	  fmr       f4, f3
	  li        r3, 0
	  bl        -0x3B4890

	.loc_0x98:
	  fmr       f31, f1
	  lfs       f2, 0x29B0(r2)
	  fmr       f1, f30
	  lfs       f3, 0x2994(r2)
	  lfs       f4, 0x2980(r2)
	  li        r3, 0
	  lfs       f5, 0x29F0(r2)
	  bl        -0x3B48B0
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r5, 0xC(r1)
	  rlwinm    r0,r5,0,16,31
	  cmplwi    r0, 0x80
	  ble-      .loc_0xD4
	  li        r5, 0x7F

	.loc_0xD4:
	  lwz       r12, 0x10(r29)
	  mr        r3, r29
	  li        r4, 0xC
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x444508

	.loc_0x10C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x12C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x444528

	.loc_0x12C:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x14
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x444548

	.loc_0x14C:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x164
	  li        r31, 0
	  b         .loc_0x16C

	.loc_0x164:
	  bl        -0x139524
	  mr        r31, r3

	.loc_0x16C:
	  cmplwi    r31, 0
	  beq-      .loc_0x1E4
	  mr        r3, r31
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E4
	  mr        r3, r31
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x2980(r2)
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x1E4
	  lfs       f3, 0x2994(r2)
	  li        r3, 0x1
	  lfs       f5, 0x29F4(r2)
	  fmr       f4, f3
	  bl        -0x3B49D8
	  fmuls     f31, f31, f1

	.loc_0x1E4:
	  mr        r3, r29
	  fmr       f1, f31
	  lwz       r12, 0x10(r29)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7950(r13)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x230
	  mr        r3, r29
	  lfs       f1, -0x794C(r13)
	  lwz       r12, 0x10(r29)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x230:
	  mr        r3, r29
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
 * Address:	8046ECA0
 * Size:	000450
 */
void PSStartTresureLaderNoiseSE(unsigned char, float, float)
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
	  rlwinm    r0,r3,0,24,31
	  lis       r3, 0x804A
	  fmr       f31, f1
	  cmpwi     r0, 0x4
	  subi      r31, r3, 0x25F8
	  li        r30, 0
	  beq-      .loc_0x230
	  bge-      .loc_0x428
	  cmpwi     r0, 0x3
	  bge-      .loc_0x50
	  b         .loc_0x428
	  b         .loc_0x428

	.loc_0x50:
	  lhz       r3, -0x635A(r13)
	  lha       r0, -0x6358(r13)
	  addi      r4, r3, 0x1
	  rlwinm    r3,r4,0,16,31
	  sth       r4, -0x635A(r13)
	  cmpw      r3, r0
	  ble-      .loc_0xE8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1887
	  li        r5, 0
	  bl        -0x1366E8
	  lha       r4, -0x793A(r13)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  mr        r30, r3
	  xoris     r0, r4, 0x8000
	  lfd       f1, 0x29F8(r2)
	  stw       r0, 0xC(r1)
	  lfs       f2, -0x72E8(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f3, -0x72E4(r2)
	  fsubs     f1, f0, f1
	  bl        -0x3B4914
	  lha       r4, -0x793C(r13)
	  lis       r3, 0x4330
	  li        r0, 0
	  stw       r3, 0x10(r1)
	  xoris     r3, r4, 0x8000
	  lfd       f2, 0x29F8(r2)
	  stw       r3, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  sth       r0, -0x635A(r13)
	  fsubs     f0, f0, f2
	  fadds     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  sth       r0, -0x6358(r13)

	.loc_0xE8:
	  cmplwi    r30, 0
	  beq-      .loc_0x428
	  fmr       f1, f31
	  lfs       f2, -0x6354(r13)
	  lfs       f3, -0x7938(r13)
	  li        r3, 0x1
	  lfs       f4, -0x7940(r13)
	  lfs       f5, -0x7934(r13)
	  lfs       f6, -0x7930(r13)
	  bl        -0x3B4B04
	  lwz       r0, -0x6780(r13)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  bne-      .loc_0x134
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x444790

	.loc_0x134:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x154
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4447B0

	.loc_0x154:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x174
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x14
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4447D0

	.loc_0x174:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x18C
	  li        r31, 0
	  b         .loc_0x194

	.loc_0x18C:
	  bl        -0x1397AC
	  mr        r31, r3

	.loc_0x194:
	  cmplwi    r31, 0
	  beq-      .loc_0x20C
	  mr        r3, r31
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  mr        r3, r31
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x2980(r2)
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x20C
	  lfs       f3, 0x2994(r2)
	  li        r3, 0x1
	  lfs       f5, 0x29F4(r2)
	  fmr       f4, f3
	  bl        -0x3B4C60
	  fmuls     f31, f31, f1

	.loc_0x20C:
	  mr        r3, r30
	  fmr       f1, f31
	  lwz       r12, 0x10(r30)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x428

	.loc_0x230:
	  lhz       r3, -0x635A(r13)
	  lha       r0, -0x6358(r13)
	  addi      r4, r3, 0x1
	  rlwinm    r3,r4,0,16,31
	  sth       r4, -0x635A(r13)
	  cmpw      r3, r0
	  ble-      .loc_0x2F0
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1887
	  li        r5, 0
	  bl        -0x1368C8
	  lis       r4, 0x2AAB
	  lha       r5, -0x793A(r13)
	  subi      r4, r4, 0x5555
	  lis       r0, 0x4330
	  mulhw     r4, r4, r5
	  stw       r0, 0x18(r1)
	  lfd       f1, 0x29F8(r2)
	  mr        r30, r3
	  lfs       f2, -0x72E8(r2)
	  lfs       f3, -0x72E4(r2)
	  rlwinm    r0,r4,1,31,31
	  add       r0, r4, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f1, f0, f1
	  bl        -0x3B4B08
	  lis       r3, 0x2AAB
	  lha       r0, -0x793C(r13)
	  subi      r4, r3, 0x5555
	  lis       r3, 0x4330
	  mulhw     r4, r4, r0
	  li        r0, 0
	  stw       r3, 0x10(r1)
	  lfd       f2, 0x29F8(r2)
	  sth       r0, -0x635A(r13)
	  rlwinm    r0,r4,1,31,31
	  add       r0, r4, r0
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fadds     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  sth       r0, -0x6358(r13)

	.loc_0x2F0:
	  cmplwi    r30, 0
	  beq-      .loc_0x428
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x318
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x444974

	.loc_0x318:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x338
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x444994

	.loc_0x338:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x358
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x14
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x4449B4

	.loc_0x358:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x370
	  li        r31, 0
	  b         .loc_0x378

	.loc_0x370:
	  bl        -0x139990
	  mr        r31, r3

	.loc_0x378:
	  cmplwi    r31, 0
	  beq-      .loc_0x408
	  mr        r3, r31
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x408
	  mr        r3, r31
	  lwz       r12, 0x10(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x2980(r2)
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x408
	  lfs       f3, 0x2994(r2)
	  li        r3, 0x1
	  lfs       f5, 0x29F4(r2)
	  fmr       f4, f3
	  bl        -0x3B4E44
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x10(r30)
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x408:
	  mr        r3, r30
	  lfs       f1, 0x29C4(r2)
	  lwz       r12, 0x10(r30)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x428:
	  mr        r3, r30
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
 * Address:	8046F0F0
 * Size:	0000B0
 */
void PSMGetWorldMapRocket()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r3, 0x25F8
	  stw       r30, 0x8(r1)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x444AE8

	.loc_0x3C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x5C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x14
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x444B08

	.loc_0x5C:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x14
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x444B28

	.loc_0x7C:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x28(r3)
	  b         .loc_0x98

	.loc_0x94:
	  li        r3, 0

	.loc_0x98:
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
 * Address:	8046F1A0
 * Size:	00007C
 */
void PSPlayCaveHoleSound(PSM::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x307C
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x68
	  lwz       r0, -0x6E48(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x2590
	  li        r4, 0x89
	  subi      r5, r5, 0x25E4
	  crclr     6, 0x6
	  bl        -0x444BB4

	.loc_0x58:
	  lwz       r4, -0x6E48(r13)
	  mr        r3, r31
	  addi      r4, r4, 0x4
	  bl        0x2254

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046F21C
 * Size:	000030
 */
void PSM::ClusterFactory::identifyPart((unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r5,r5,0,24,31
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x20F0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046F24C
 * Size:	000070
 */
void JAIBasic::startSoundVecReturnHandleT<JAISound>(JAISound**, unsigned long,
                                                    Vec*, unsigned long,
                                                    unsigned long,
                                                    unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r10, 0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r5,0,0,1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r10, 0x8(r1)
	  bne-      .loc_0x2C
	  li        r0, 0x1
	  stw       r0, 0x8(r1)

	.loc_0x2C:
	  mr        r4, r5
	  addi      r5, r1, 0x8
	  bl        -0x459A14
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r31)
	  lwz       r3, 0x8(r1)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
