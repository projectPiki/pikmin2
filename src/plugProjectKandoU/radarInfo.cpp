

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
 * Address:	8021E28C
 * Size:	000068
 */
void Radar::Point::getPosition(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r4, 0x1C(r4)
  cmplwi    r4, 0
  beq-      .loc_0x48
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  b         .loc_0x54

.loc_0x48:
  lfs       f0, -0x42D0(r2)
  stfs      f0, 0x0(r31)
  stfs      f0, 0x4(r31)

.loc_0x54:
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
 * Size:	000010
 */
void Radar::Point::entry( (Game::TPositionObject *, Radar::cRadarType, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Radar::Point::clear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021E2F4
 * Size:	0000F4
 */
void Radar::Mgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r0, r30
  stw       r29, 0x14(r1)
  mr        r31, r0
  bl        0x1F3078
  lis       r3, 0x804C
  addi      r29, r30, 0x24
  addi      r0, r3, 0x86C
  li        r4, 0x17
  stw       r0, 0x0(r31)
  li        r0, 0
  mr        r3, r29
  stw       r4, 0x18(r31)
  stw       r0, 0x1C(r31)
  stw       r0, 0x20(r31)
  bl        0x1F304C
  lis       r3, 0x804C
  li        r4, 0x17
  addi      r0, r3, 0x86C
  li        r3, 0
  stw       r0, 0x0(r29)
  li        r0, 0xA0
  stw       r4, 0x18(r29)
  stw       r3, 0x1C(r29)
  stw       r3, 0x20(r29)
  stw       r3, 0x10(r30)
  stw       r3, 0xC(r30)
  stw       r3, 0x8(r30)
  stw       r3, 0x4(r30)
  stw       r3, 0x34(r30)
  stw       r3, 0x30(r30)
  stw       r3, 0x2C(r30)
  stw       r3, 0x28(r30)
  stw       r0, 0x4C(r30)
  lwz       r31, 0x4C(r30)
  mulli     r3, r31, 0x24
  addi      r3, r3, 0x10
  bl        -0x1FA3F0
  lis       r4, 0x8022
  lis       r5, 0x8022
  subi      r4, r4, 0x1C18
  mr        r7, r31
  subi      r5, r5, 0x1BC8
  li        r6, 0x24
  bl        -0x15C9C8
  stw       r3, 0x48(r30)
  mr        r3, r30
  bl        0xD4
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	8021E3E8
 * Size:	000050
 */
void Radar::Point::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1F2F94
  lis       r3, 0x804C
  li        r4, 0x17
  addi      r3, r3, 0x86C
  li        r0, 0
  stw       r3, 0x0(r31)
  mr        r3, r31
  stw       r4, 0x18(r31)
  stw       r0, 0x1C(r31)
  stw       r0, 0x20(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E438
 * Size:	000060
 */
void Radar::Point::__dt(void)
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
  addi      r0, r5, 0x86C
  stw       r0, 0x0(r30)
  bl        0x1F3120
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x1FA3C4

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
 * Address:	8021E498
 * Size:	0000B4
 */
void Radar::Mgr::clear(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  li        r30, 0
  mr        r27, r3
  li        r28, 0
  mr        r29, r30
  li        r31, 0x17
  stw       r30, 0x10(r3)
  stw       r30, 0xC(r3)
  stw       r30, 0x8(r3)
  stw       r30, 0x4(r3)
  stw       r30, 0x34(r3)
  stw       r30, 0x30(r3)
  stw       r30, 0x2C(r3)
  stw       r30, 0x28(r3)
  b         .loc_0x84

.loc_0x48:
  lwz       r0, 0x48(r27)
  addi      r3, r27, 0x24
  add       r4, r0, r29
  stw       r30, 0x10(r4)
  stw       r30, 0xC(r4)
  stw       r30, 0x8(r4)
  stw       r30, 0x4(r4)
  stw       r30, 0x1C(r4)
  stw       r31, 0x18(r4)
  stw       r30, 0x20(r4)
  lwz       r0, 0x48(r27)
  add       r4, r0, r29
  bl        0x1F2EF8
  addi      r29, r29, 0x24
  addi      r28, r28, 0x1

.loc_0x84:
  lwz       r0, 0x4C(r27)
  cmpw      r28, r0
  blt+      .loc_0x48
  li        r0, 0
  stw       r0, 0x50(r27)
  stw       r0, 0x54(r27)
  stw       r0, 0x58(r27)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E54C
 * Size:	000010
 */
void Radar::Mgr::bornFuefuki(void)
{
/*
.loc_0x0:
  lwz       r4, 0x54(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x54(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E55C
 * Size:	000018
 */
void Radar::Mgr::dieFuefuki(void)
{
/*
.loc_0x0:
  lwz       r4, 0x54(r3)
  cmpwi     r4, 0
  blelr-    
  subi      r0, r4, 0x1
  stw       r0, 0x54(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E574
 * Size:	000010
 */
void Radar::Mgr::fuefuki(void)
{
/*
.loc_0x0:
  lwz       r4, 0x58(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E584
 * Size:	000070
 */
void Radar::Mgr::entry( (Game::TPositionObject *, Radar::cRadarType, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r7, r3
  mr        r6, r5
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r0, -0x6A50(r13)
  cmplwi    r0, 0
  beq-      .loc_0x5C
  mr        r3, r0
  mr        r4, r7
  mr        r5, r31
  bl        0x94
  subi      r0, r31, 0x10
  cmplwi    r0, 0x1
  ble-      .loc_0x4C
  cmpwi     r31, 0x12
  bne-      .loc_0x5C

.loc_0x4C:
  lwz       r4, -0x6A50(r13)
  lwz       r3, 0x50(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x50(r4)

.loc_0x5C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E5F4
 * Size:	00003C
 */
void Radar::Mgr::exit( (Game::TPositionObject *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r0, -0x6A50(r13)
  cmplwi    r0, 0
  beq-      .loc_0x28
  mr        r3, r0
  bl        0x9C
  b         .loc_0x2C

.loc_0x28:
  li        r3, 0

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E630
 * Size:	00001C
 */
void Radar::Mgr::getNumOtakaraItems(void)
{
/*
.loc_0x0:
  lwz       r3, -0x6A50(r13)
  cmplwi    r3, 0
  beq-      .loc_0x14
  lwz       r3, 0x50(r3)
  blr       

.loc_0x14:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E64C
 * Size:	000064
 */
void Radar::Mgr::attach( (Game::TPositionObject *, Radar::cRadarType, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  mr        r30, r6
  bl        .loc_0x64
  lwz       r31, 0x34(r27)
  cmplwi    r31, 0
  beq-      .loc_0x50
  mr        r3, r31
  bl        0x1F2F50
  stw       r28, 0x1C(r31)
  mr        r3, r27
  mr        r4, r31
  stw       r29, 0x18(r31)
  stw       r30, 0x20(r31)
  bl        0x1F2D70

.loc_0x50:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x64:
*/
}

/*
 * --INFO--
 * Address:	8021E6B0
 * Size:	0000C4
 */
void Radar::Mgr::detach( (Game::TPositionObject *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r31, 0x10(r3)
  b         .loc_0x9C

.loc_0x24:
  lwz       r0, 0x1C(r31)
  cmplw     r0, r4
  bne-      .loc_0x98
  lwz       r30, 0x18(r31)
  mr        r3, r31
  bl        0x1F2EE8
  li        r4, 0
  subi      r0, r30, 0x10
  stw       r4, 0x10(r31)
  li        r3, 0x17
  cmplwi    r0, 0x1
  stw       r4, 0xC(r31)
  stw       r4, 0x8(r31)
  stw       r4, 0x4(r31)
  stw       r4, 0x1C(r31)
  stw       r3, 0x18(r31)
  stw       r4, 0x20(r31)
  ble-      .loc_0x74
  cmpwi     r30, 0x12
  bne-      .loc_0x84

.loc_0x74:
  lwz       r4, -0x6A50(r13)
  lwz       r3, 0x50(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x50(r4)

.loc_0x84:
  mr        r4, r31
  addi      r3, r29, 0x24
  bl        0x1F2CCC
  li        r3, 0x1
  b         .loc_0xA8

.loc_0x98:
  lwz       r31, 0x4(r31)

.loc_0x9C:
  cmplwi    r31, 0
  bne+      .loc_0x24
  li        r3, 0

.loc_0xA8:
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
 * Address:	8021E774
 * Size:	0001E0
 */
void calcNearestTreasure__Q25Radar3MgrFR10Vector3<float>fR10Vector3<float>Rf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stfd      f29, 0x50(r1)
  psq_st    f29,0x58(r1),0,0
  stmw      r25, 0x34(r1)
  lwz       r0, 0x54(r3)
  mr        r25, r4
  mr        r26, r5
  mr        r27, r6
  cmpwi     r0, 0
  ble-      .loc_0x64
  lwz       r4, 0x58(r3)
  cmpwi     r4, 0
  ble-      .loc_0x5C
  subi      r0, r4, 0x1
  stw       r0, 0x58(r3)
  li        r3, 0x4
  b         .loc_0x1B4

.loc_0x5C:
  li        r3, 0x3
  b         .loc_0x1B4

.loc_0x64:
  fmr       f29, f1
  lwz       r29, 0x10(r3)
  li        r31, 0
  li        r30, 0
  b         .loc_0x190

.loc_0x78:
  lwz       r0, 0x18(r29)
  cmpwi     r0, 0x10
  beq-      .loc_0x94
  cmpwi     r0, 0x11
  beq-      .loc_0x94
  cmpwi     r0, 0x12
  bne-      .loc_0x18C

.loc_0x94:
  lwz       r28, 0x1C(r29)
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  addi      r30, r30, 0x1
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xCC
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     

.loc_0xCC:
  mr        r4, r28
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r28
  lfs       f31, 0x14(r1)
  lwz       r12, 0x0(r28)
  addi      r4, r1, 0x20
  lfs       f1, 0x0(r25)
  lfs       f30, 0x1C(r1)
  lfs       f0, 0x8(r25)
  fsubs     f31, f31, f1
  lwz       r12, 0x10(r12)
  fsubs     f30, f30, f0
  mtctr     r12
  bctrl     
  fmuls     f1, f30, f30
  lfs       f0, -0x42D0(r2)
  fmadds    f1, f31, f31, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x138
  ble-      .loc_0x13C
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x13C

.loc_0x138:
  fmr       f1, f0

.loc_0x13C:
  lfs       f0, 0x2C(r1)
  fsubs     f30, f1, f0
  fcmpo     cr0, f30, f29
  cror      2, 0, 0x2
  bne-      .loc_0x18C
  mr        r4, r28
  fmr       f29, f30
  lwz       r12, 0x0(r28)
  mr        r31, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x8(r1)
  stfs      f0, 0x0(r26)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x4(r26)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x8(r26)
  stfs      f30, 0x0(r27)

.loc_0x18C:
  lwz       r29, 0x4(r29)

.loc_0x190:
  cmplwi    r29, 0
  bne+      .loc_0x78
  cmplwi    r31, 0
  beq-      .loc_0x1A8
  li        r3, 0x2
  b         .loc_0x1B4

.loc_0x1A8:
  neg       r0, r30
  andc      r0, r0, r30
  rlwinm    r3,r0,1,31,31

.loc_0x1B4:
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  lmw       r25, 0x34(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8021E954
 * Size:	000568
 */
void Radar::Mgr::ogDummpyInit(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r3, 0x10
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  bl        -0x1FAAD4
  mr.       r30, r3
  beq-      .loc_0x58
  lis       r4, 0x804B
  lis       r3, 0x804C
  addi      r0, r4, 0x2A4
  lfs       f0, -0x42D0(r2)
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x860
  stw       r0, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)
  stfs      f0, 0xC(r30)

.loc_0x58:
  lfs       f0, -0x42CC(r2)
  lfs       f1, -0x42C8(r2)
  stfs      f0, 0x4(r30)
  lfs       f0, -0x42C4(r2)
  stfs      f1, 0x8(r30)
  stfs      f0, 0xC(r30)
  lwz       r28, 0x10(r31)
  b         .loc_0xEC

.loc_0x78:
  lwz       r0, 0x1C(r28)
  cmplw     r0, r30
  bne-      .loc_0xE8
  lwz       r29, 0x18(r28)
  mr        r3, r28
  bl        0x1F2BF0
  li        r4, 0
  subi      r0, r29, 0x10
  stw       r4, 0x10(r28)
  li        r3, 0x17
  cmplwi    r0, 0x1
  stw       r4, 0xC(r28)
  stw       r4, 0x8(r28)
  stw       r4, 0x4(r28)
  stw       r4, 0x1C(r28)
  stw       r3, 0x18(r28)
  stw       r4, 0x20(r28)
  ble-      .loc_0xC8
  cmpwi     r29, 0x12
  bne-      .loc_0xD8

.loc_0xC8:
  lwz       r4, -0x6A50(r13)
  lwz       r3, 0x50(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x50(r4)

.loc_0xD8:
  mr        r4, r28
  addi      r3, r31, 0x24
  bl        0x1F29D4
  b         .loc_0xF4

.loc_0xE8:
  lwz       r28, 0x4(r28)

.loc_0xEC:
  cmplwi    r28, 0
  bne+      .loc_0x78

.loc_0xF4:
  lwz       r28, 0x34(r31)
  cmplwi    r28, 0
  beq-      .loc_0x128
  mr        r3, r28
  bl        0x1F2B78
  stw       r30, 0x1C(r28)
  li        r4, 0xF
  li        r0, 0
  mr        r3, r31
  stw       r4, 0x18(r28)
  mr        r4, r28
  stw       r0, 0x20(r28)
  bl        0x1F2990

.loc_0x128:
  li        r3, 0x10
  bl        -0x1FABDC
  mr.       r30, r3
  beq-      .loc_0x160
  lis       r4, 0x804B
  lis       r3, 0x804C
  addi      r0, r4, 0x2A4
  lfs       f0, -0x42D0(r2)
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x860
  stw       r0, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)
  stfs      f0, 0xC(r30)

.loc_0x160:
  lfs       f0, -0x42C0(r2)
  lfs       f1, -0x42C8(r2)
  stfs      f0, 0x4(r30)
  lfs       f0, -0x42BC(r2)
  stfs      f1, 0x8(r30)
  stfs      f0, 0xC(r30)
  lwz       r29, 0x10(r31)
  b         .loc_0x1F4

.loc_0x180:
  lwz       r0, 0x1C(r29)
  cmplw     r0, r30
  bne-      .loc_0x1F0
  lwz       r28, 0x18(r29)
  mr        r3, r29
  bl        0x1F2AE8
  li        r4, 0
  subi      r0, r28, 0x10
  stw       r4, 0x10(r29)
  li        r3, 0x17
  cmplwi    r0, 0x1
  stw       r4, 0xC(r29)
  stw       r4, 0x8(r29)
  stw       r4, 0x4(r29)
  stw       r4, 0x1C(r29)
  stw       r3, 0x18(r29)
  stw       r4, 0x20(r29)
  ble-      .loc_0x1D0
  cmpwi     r28, 0x12
  bne-      .loc_0x1E0

.loc_0x1D0:
  lwz       r4, -0x6A50(r13)
  lwz       r3, 0x50(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x50(r4)

.loc_0x1E0:
  mr        r4, r29
  addi      r3, r31, 0x24
  bl        0x1F28CC
  b         .loc_0x1FC

.loc_0x1F0:
  lwz       r29, 0x4(r29)

.loc_0x1F4:
  cmplwi    r29, 0
  bne+      .loc_0x180

.loc_0x1FC:
  lwz       r28, 0x34(r31)
  cmplwi    r28, 0
  beq-      .loc_0x230
  mr        r3, r28
  bl        0x1F2A70
  stw       r30, 0x1C(r28)
  li        r4, 0x1
  li        r0, 0
  mr        r3, r31
  stw       r4, 0x18(r28)
  mr        r4, r28
  stw       r0, 0x20(r28)
  bl        0x1F2888

.loc_0x230:
  li        r3, 0x10
  bl        -0x1FACE4
  mr.       r30, r3
  beq-      .loc_0x268
  lis       r4, 0x804B
  lis       r3, 0x804C
  addi      r0, r4, 0x2A4
  lfs       f0, -0x42D0(r2)
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x860
  stw       r0, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)
  stfs      f0, 0xC(r30)

.loc_0x268:
  lfs       f0, -0x42B8(r2)
  lfs       f1, -0x42C8(r2)
  stfs      f0, 0x4(r30)
  lfs       f0, -0x42B4(r2)
  stfs      f1, 0x8(r30)
  stfs      f0, 0xC(r30)
  lwz       r29, 0x10(r31)
  b         .loc_0x2FC

.loc_0x288:
  lwz       r0, 0x1C(r29)
  cmplw     r0, r30
  bne-      .loc_0x2F8
  lwz       r28, 0x18(r29)
  mr        r3, r29
  bl        0x1F29E0
  li        r4, 0
  subi      r0, r28, 0x10
  stw       r4, 0x10(r29)
  li        r3, 0x17
  cmplwi    r0, 0x1
  stw       r4, 0xC(r29)
  stw       r4, 0x8(r29)
  stw       r4, 0x4(r29)
  stw       r4, 0x1C(r29)
  stw       r3, 0x18(r29)
  stw       r4, 0x20(r29)
  ble-      .loc_0x2D8
  cmpwi     r28, 0x12
  bne-      .loc_0x2E8

.loc_0x2D8:
  lwz       r4, -0x6A50(r13)
  lwz       r3, 0x50(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x50(r4)

.loc_0x2E8:
  mr        r4, r29
  addi      r3, r31, 0x24
  bl        0x1F27C4
  b         .loc_0x304

.loc_0x2F8:
  lwz       r29, 0x4(r29)

.loc_0x2FC:
  cmplwi    r29, 0
  bne+      .loc_0x288

.loc_0x304:
  lwz       r28, 0x34(r31)
  cmplwi    r28, 0
  beq-      .loc_0x338
  mr        r3, r28
  bl        0x1F2968
  stw       r30, 0x1C(r28)
  li        r4, 0x1
  li        r0, 0
  mr        r3, r31
  stw       r4, 0x18(r28)
  mr        r4, r28
  stw       r0, 0x20(r28)
  bl        0x1F2780

.loc_0x338:
  li        r3, 0x10
  bl        -0x1FADEC
  mr.       r30, r3
  beq-      .loc_0x370
  lis       r4, 0x804B
  lis       r3, 0x804C
  addi      r0, r4, 0x2A4
  lfs       f0, -0x42D0(r2)
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x860
  stw       r0, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)
  stfs      f0, 0xC(r30)

.loc_0x370:
  lfs       f0, -0x42B0(r2)
  lfs       f1, -0x42C8(r2)
  stfs      f0, 0x4(r30)
  lfs       f0, -0x42AC(r2)
  stfs      f1, 0x8(r30)
  stfs      f0, 0xC(r30)
  lwz       r29, 0x10(r31)
  b         .loc_0x404

.loc_0x390:
  lwz       r0, 0x1C(r29)
  cmplw     r0, r30
  bne-      .loc_0x400
  lwz       r28, 0x18(r29)
  mr        r3, r29
  bl        0x1F28D8
  li        r4, 0
  subi      r0, r28, 0x10
  stw       r4, 0x10(r29)
  li        r3, 0x17
  cmplwi    r0, 0x1
  stw       r4, 0xC(r29)
  stw       r4, 0x8(r29)
  stw       r4, 0x4(r29)
  stw       r4, 0x1C(r29)
  stw       r3, 0x18(r29)
  stw       r4, 0x20(r29)
  ble-      .loc_0x3E0
  cmpwi     r28, 0x12
  bne-      .loc_0x3F0

.loc_0x3E0:
  lwz       r4, -0x6A50(r13)
  lwz       r3, 0x50(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x50(r4)

.loc_0x3F0:
  mr        r4, r29
  addi      r3, r31, 0x24
  bl        0x1F26BC
  b         .loc_0x40C

.loc_0x400:
  lwz       r29, 0x4(r29)

.loc_0x404:
  cmplwi    r29, 0
  bne+      .loc_0x390

.loc_0x40C:
  lwz       r28, 0x34(r31)
  cmplwi    r28, 0
  beq-      .loc_0x440
  mr        r3, r28
  bl        0x1F2860
  stw       r30, 0x1C(r28)
  li        r4, 0x1
  li        r0, 0
  mr        r3, r31
  stw       r4, 0x18(r28)
  mr        r4, r28
  stw       r0, 0x20(r28)
  bl        0x1F2678

.loc_0x440:
  li        r3, 0x10
  bl        -0x1FAEF4
  mr.       r30, r3
  beq-      .loc_0x478
  lis       r4, 0x804B
  lis       r3, 0x804C
  addi      r0, r4, 0x2A4
  lfs       f0, -0x42D0(r2)
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x860
  stw       r0, 0x0(r30)
  stfs      f0, 0x4(r30)
  stfs      f0, 0x8(r30)
  stfs      f0, 0xC(r30)

.loc_0x478:
  lfs       f0, -0x42A8(r2)
  lfs       f1, -0x42C8(r2)
  stfs      f0, 0x4(r30)
  lfs       f0, -0x42A4(r2)
  stfs      f1, 0x8(r30)
  stfs      f0, 0xC(r30)
  lwz       r29, 0x10(r31)
  b         .loc_0x50C

.loc_0x498:
  lwz       r0, 0x1C(r29)
  cmplw     r0, r30
  bne-      .loc_0x508
  lwz       r28, 0x18(r29)
  mr        r3, r29
  bl        0x1F27D0
  li        r4, 0
  subi      r0, r28, 0x10
  stw       r4, 0x10(r29)
  li        r3, 0x17
  cmplwi    r0, 0x1
  stw       r4, 0xC(r29)
  stw       r4, 0x8(r29)
  stw       r4, 0x4(r29)
  stw       r4, 0x1C(r29)
  stw       r3, 0x18(r29)
  stw       r4, 0x20(r29)
  ble-      .loc_0x4E8
  cmpwi     r28, 0x12
  bne-      .loc_0x4F8

.loc_0x4E8:
  lwz       r4, -0x6A50(r13)
  lwz       r3, 0x50(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x50(r4)

.loc_0x4F8:
  mr        r4, r29
  addi      r3, r31, 0x24
  bl        0x1F25B4
  b         .loc_0x514

.loc_0x508:
  lwz       r29, 0x4(r29)

.loc_0x50C:
  cmplwi    r29, 0
  bne+      .loc_0x498

.loc_0x514:
  lwz       r28, 0x34(r31)
  cmplwi    r28, 0
  beq-      .loc_0x548
  mr        r3, r28
  bl        0x1F2758
  stw       r30, 0x1C(r28)
  li        r4, 0x3
  li        r0, 0
  mr        r3, r31
  stw       r4, 0x18(r28)
  mr        r4, r28
  stw       r0, 0x20(r28)
  bl        0x1F2570

.loc_0x548:
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
 * Address:	8021EEBC
 * Size:	00001C
 */
void OgDummy::getPosition()
{
/*
.loc_0x0:
  lfs       f0, 0x4(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}
