

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PSM::THPDinamicsProc::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804724A0
 * Size:	000070
 */
void PSM::THPDinamicsProc::setSetting((PSM::THP_ID))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  cmpwi     r31, 0xC
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x40
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1EEC
	  li        r4, 0x76
	  subi      r5, r5, 0x1ED0
	  crclr     6, 0x6
	  bl        -0x447E9C

	.loc_0x40:
	  mulli     r5, r31, 0x14
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r0, r4, 0x538
	  add       r4, r0, r5
	  bl        .loc_0x70
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x70:
	*/
}

/*
 * --INFO--
 * Address:	80472510
 * Size:	000110
 */
void PSM::THPDinamicsProc::setSetting((PSM::THPDemoDinamics*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r31, 0x0(r3)
	  bne-      .loc_0x38
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1EEC
	  li        r4, 0x7D
	  subi      r5, r5, 0x1ED0
	  crclr     6, 0x6
	  bl        -0x447F04

	.loc_0x38:
	  lfs       f1, 0x4(r31)
	  li        r0, 0
	  lfs       f0, 0x2AA0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x60
	  lfs       f0, 0x2AA4(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x60
	  li        r0, 0x1

	.loc_0x60:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x84
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1EEC
	  li        r4, 0x7E
	  subi      r5, r5, 0x1ED0
	  crclr     6, 0x6
	  bl        -0x447F50

	.loc_0x84:
	  lfs       f1, 0x8(r31)
	  li        r0, 0
	  lfs       f0, 0x2AA0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xAC
	  lfs       f0, 0x2AA4(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xAC
	  li        r0, 0x1

	.loc_0xAC:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xD0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1EEC
	  li        r4, 0x7F
	  subi      r5, r5, 0x1ED0
	  crclr     6, 0x6
	  bl        -0x447F9C

	.loc_0xD0:
	  lfs       f1, 0x0(r31)
	  lfs       f0, 0x2AA0(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0xFC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1EEC
	  li        r4, 0x80
	  subi      r5, r5, 0x1ED0
	  crclr     6, 0x6
	  bl        -0x447FC8

	.loc_0xFC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void PSM::THPDinamicsProc::complessor((float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80472620
 * Size:	000130
 */
void PSM::THPDinamicsProc::dinamics((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lwz       r0, 0x0(r3)
	  fmr       f31, f1
	  mr        r31, r3
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x1EEC
	  li        r4, 0x89
	  subi      r5, r5, 0x1ED0
	  crclr     6, 0x6
	  bl        -0x448024

	.loc_0x48:
	  lwz       r3, 0x0(r31)
	  lbz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x108
	  lfs       f0, 0x2AA0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r0, 0

	.loc_0x70:
	  cmpwi     r0, 0
	  beq-      .loc_0x80
	  lfs       f0, 0x2AA8(r2)
	  fmuls     f31, f31, f0

	.loc_0x80:
	  lfs       f0, 0x4(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xBC
	  lfs       f2, 0x8(r3)
	  fdivs     f0, f2, f0
	  fmuls     f1, f31, f0
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0xA8
	  fmr       f1, f2
	  b         .loc_0xF4

	.loc_0xA8:
	  lfs       f0, 0x2AA0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF4
	  fmr       f1, f0
	  b         .loc_0xF4

	.loc_0xBC:
	  lfs       f3, 0x2AA4(r2)
	  lfs       f4, 0x8(r3)
	  fsubs     f0, f3, f0
	  fsubs     f1, f3, f4
	  fsubs     f2, f31, f3
	  fdivs     f0, f1, f0
	  fmadds    f1, f2, f0, f3
	  fcmpo     cr0, f1, f4
	  bge-      .loc_0xE8
	  fmr       f1, f4
	  b         .loc_0xF4

	.loc_0xE8:
	  fcmpo     cr0, f1, f3
	  ble-      .loc_0xF4
	  fmr       f1, f3

	.loc_0xF4:
	  cmpwi     r0, 0
	  beq-      .loc_0x10C
	  lfs       f0, 0x2AA8(r2)
	  fmuls     f1, f1, f0
	  b         .loc_0x10C

	.loc_0x108:
	  fmr       f1, f31

	.loc_0x10C:
	  lfs       f0, 0x0(r3)
	  fmuls     f1, f1, f0
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
 * Address:	........
 * Size:	000084
 */
void PSM::CreaturePrm::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80472750
 * Size:	000064
 */
void PSM::CreaturePrm::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x4C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x448
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x3C
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x43C
	  stw       r3, 0x0(r31)
	  stw       r0, -0x6E48(r13)

	.loc_0x3C:
	  extsh.    r0, r4
	  ble-      .loc_0x4C
	  mr        r3, r31
	  bl        -0x44E6E4

	.loc_0x4C:
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
 * Address:	804727B4
 * Size:	000050
 */
void __dt__Q28PSSystem34SingletonBase<PSM::CreaturePrm> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x38
	  lis       r5, 0x804F
	  extsh.    r0, r4
	  subi      r4, r5, 0x43C
	  li        r0, 0
	  stw       r4, 0x0(r31)
	  stw       r0, -0x6E48(r13)
	  ble-      .loc_0x38
	  bl        -0x44E734

	.loc_0x38:
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
 * Address:	80472804
 * Size:	0000A0
 */
void __sinit_PSMainSide_CreaturePrm_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x43C
	  lfs       f5, 0x2AA0(r2)
	  lis       r3, 0x804F
	  stw       r31, 0xC(r1)
	  li        r5, 0
	  lfs       f1, 0x2AA4(r2)
	  stwu      r0, 0x4660(r4)
	  subi      r0, r3, 0x448
	  lfs       f2, 0x2AAC(r2)
	  stw       r5, -0x6340(r13)
	  mr        r31, r4
	  lfs       f3, 0x2AB0(r2)
	  addi      r3, r4, 0x4
	  stw       r4, -0x6E48(r13)
	  lfs       f4, 0x2AB4(r2)
	  stw       r0, 0x0(r4)
	  stfs      f1, 0x4(r4)
	  stfs      f5, 0x8(r4)
	  stfs      f5, 0xC(r4)
	  stfs      f5, 0x10(r4)
	  stfs      f5, 0x14(r4)
	  stb       r5, 0x18(r4)
	  stb       r5, 0x19(r4)
	  bl        -0x13DD28
	  lis       r3, 0x8047
	  lis       r5, 0x8050
	  addi      r4, r3, 0x2750
	  mr        r3, r31
	  addi      r5, r5, 0x6A80
	  bl        -0x3B118C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
