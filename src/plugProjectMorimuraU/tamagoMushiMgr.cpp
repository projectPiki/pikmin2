

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
 * Address:	8036D988
 * Size:	000050
 */
void Game::TamagoMushi::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x23ED08
  lis       r3, 0x804E
  lis       r4, 0x8049
  addi      r5, r3, 0x34D8
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  addi      r0, r4, 0x2180
  stw       r5, 0x4(r31)
  stw       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8036D9D8
 * Size:	000100
 */
void Game::TamagoMushi::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r3, 0x94C
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  bl        -0x349B58
  mr.       r4, r3
  beq-      .loc_0x38
  bl        0x128
  mr        r4, r3

.loc_0x38:
  mr        r3, r31
  bl        -0x23E178
  li        r3, 0x8
  bl        -0x349B78
  mr.       r30, r3
  beq-      .loc_0xDC
  lwz       r3, 0x20(r31)
  lwz       r4, 0x2C(r3)
  b         .loc_0x70

.loc_0x5C:
  lha       r0, 0x20(r4)
  cmpwi     r0, 0x2
  bne-      .loc_0x6C
  b         .loc_0x7C

.loc_0x6C:
  lwz       r4, 0x4(r4)

.loc_0x70:
  cmplwi    r4, 0
  bne+      .loc_0x5C
  li        r4, 0

.loc_0x7C:
  mr        r3, r31
  lwz       r29, 0x18(r4)
  lwz       r12, 0x0(r31)
  li        r4, 0
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x174(r3)
  li        r3, 0x10
  lwz       r28, 0x8(r4)
  bl        -0x349BD8
  mr.       r5, r3
  beq-      .loc_0xC0
  mr        r4, r28
  mr        r5, r29
  bl        -0x356248
  mr        r5, r3

.loc_0xC0:
  lis       r4, 0x804E
  lis       r3, 0x804E
  addi      r0, r4, 0x35D4
  stw       r0, 0x0(r30)
  addi      r0, r3, 0x35C4
  stw       r0, 0x0(r30)
  stw       r5, 0x4(r30)

.loc_0xDC:
  stw       r30, 0x44(r31)
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
 * Address:	8036DAD8
 * Size:	000048
 */
void J3DUMtxCacheBase::~J3DUMtxCacheBase()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804E
  extsh.    r0, r4
  addi      r0, r5, 0x35D4
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x349A50

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
 * Address:	8036DB20
 * Size:	000010
 */
void Game::TamagoMushi::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x31C
  lwz       r3, 0x48(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8036DB30
 * Size:	000260
 */
void Game::TamagoMushi::Parms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x2170
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x2643B4
  lis       r3, 0x804E
  lis       r5, 0x6670
  addi      r0, r3, 0x35B8
  addi      r4, r30, 0x91C
  stw       r0, 0xD8(r30)
  li        r7, 0
  addi      r0, r31, 0x28
  addi      r3, r30, 0x804
  stw       r4, 0x7F8(r30)
  addi      r4, r30, 0x7F8
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x38
  stw       r7, 0x7FC(r30)
  stw       r0, 0x800(r30)
  bl        0xA5ACC
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x6F0(r2)
  stw       r0, 0x804(r30)
  addi      r3, r30, 0x82C
  lfs       f1, 0x6F4(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x81C(r30)
  addi      r5, r5, 0x3032
  lfs       f0, 0x6F8(r2)
  addi      r6, r31, 0x44
  stfs      f1, 0x824(r30)
  stfs      f0, 0x828(r30)
  bl        0xA5A90
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x6FC(r2)
  stw       r0, 0x82C(r30)
  addi      r3, r30, 0x854
  lfs       f1, 0x6F4(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x844(r30)
  addi      r5, r5, 0x3033
  lfs       f0, 0x700(r2)
  addi      r6, r31, 0x50
  stfs      f1, 0x84C(r30)
  stfs      f0, 0x850(r30)
  bl        0xA5A54
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5344
  lfs       f1, 0x704(r2)
  stw       r0, 0x854(r30)
  addi      r3, r30, 0x87C
  lfs       f0, 0x6F4(r2)
  addi      r4, r30, 0x7F8
  stfs      f1, 0x86C(r30)
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x5C
  stfs      f0, 0x874(r30)
  stfs      f1, 0x878(r30)
  bl        0xA5A1C
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r4, 0x3C
  stw       r0, 0x87C(r30)
  li        r7, 0
  li        r0, 0x12C
  addi      r3, r30, 0x8A4
  stw       r4, 0x894(r30)
  addi      r4, r30, 0x7F8
  addi      r5, r5, 0x3032
  addi      r6, r31, 0x6C
  stw       r7, 0x89C(r30)
  stw       r0, 0x8A0(r30)
  bl        0xA59E0
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r4, 0x64
  stw       r0, 0x8A4(r30)
  li        r7, 0
  li        r0, 0x258
  addi      r3, r30, 0x8CC
  stw       r4, 0x8BC(r30)
  addi      r4, r30, 0x7F8
  addi      r5, r5, 0x3033
  addi      r6, r31, 0x7C
  stw       r7, 0x8C4(r30)
  stw       r0, 0x8C8(r30)
  bl        0xA59A4
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r4, 0xA
  stw       r0, 0x8CC(r30)
  li        r7, 0
  li        r0, 0x64
  addi      r3, r30, 0x8F4
  stw       r4, 0x8E4(r30)
  addi      r4, r30, 0x7F8
  addi      r5, r5, 0x3034
  addi      r6, r31, 0x8C
  stw       r7, 0x8EC(r30)
  stw       r0, 0x8F0(r30)
  bl        0xA5968
  lis       r3, 0x804B
  li        r5, 0x32
  subi      r0, r3, 0x5370
  li        r4, 0
  stw       r0, 0x8F4(r30)
  li        r0, 0xC8
  lfs       f0, 0x708(r2)
  mr        r3, r30
  stw       r5, 0x90C(r30)
  lfs       f7, 0x70C(r2)
  stw       r4, 0x914(r30)
  lfs       f6, 0x710(r2)
  stw       r0, 0x918(r30)
  lfs       f5, 0x714(r2)
  stb       r4, 0x920(r30)
  lfs       f4, 0x718(r2)
  stb       r4, 0x921(r30)
  lfs       f3, 0x6FC(r2)
  stb       r4, 0x922(r30)
  lfs       f2, 0x6F4(r2)
  stb       r4, 0x923(r30)
  lfs       f1, 0x71C(r2)
  stfs      f0, 0x924(r30)
  lfs       f0, 0x720(r2)
  stfs      f7, 0x928(r30)
  stfs      f6, 0x92C(r30)
  stfs      f5, 0x930(r30)
  stfs      f4, 0x934(r30)
  stfs      f3, 0x938(r30)
  stfs      f3, 0x93C(r30)
  stfs      f2, 0x940(r30)
  stfs      f1, 0x944(r30)
  stfs      f0, 0x948(r30)
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
 * Address:	8036DD90
 * Size:	000048
 */
void Game::TamagoMushi::Mgr::birth( (Game::EnemyBirthArg &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  bl        -0x23E9D8
  mr.       r31, r3
  beq-      .loc_0x30
  li        r4, 0
  bl        -0x232DE8
  mr        r3, r31
  mr        r4, r31
  bl        0x242C

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
 * Address:	8036DDD8
 * Size:	000058
 */
void Game::TamagoMushi::Mgr::fetch( (J3DModel *, float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r5, 0x44(r3)
  cmplwi    r5, 0
  beq-      .loc_0x48
  lfs       f0, 0x724(r2)
  lwz       r5, 0x4(r5)
  fadds     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x0(r5)
  lwz       r3, 0x44(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void Game::TamagoMushi::Mgr::getFreeNum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8036DE30
 * Size:	0000F8
 */
void createGroup__Q34Game11TamagoMushi3MgrFRQ24Game13EnemyBirthArgiR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  li        r30, 0
  mr        r26, r3
  mr        r27, r4
  mr        r28, r5
  mr        r29, r6
  mr        r31, r30
  b         .loc_0x58

.loc_0x2C:
  mr        r3, r26
  mr        r4, r31
  lwz       r12, 0x0(r26)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r3)
  rlwinm.   r0,r0,0,3,3
  bne-      .loc_0x54
  addi      r30, r30, 0x1

.loc_0x54:
  addi      r31, r31, 0x1

.loc_0x58:
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     
  cmpw      r31, r3
  blt+      .loc_0x2C
  cmpw      r30, r28
  bge-      .loc_0x84
  li        r3, 0
  b         .loc_0xE4

.loc_0x84:
  mr        r3, r26
  mr        r4, r27
  bl        -0x23EAF4
  mr.       r0, r3
  beq-      .loc_0xE0
  mr        r30, r0
  li        r4, 0
  bl        -0x232F08
  mr        r3, r30
  bl        0x2368
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  mr        r3, r26
  mr        r4, r30
  mr        r5, r28
  li        r6, 0x1
  bl        0xD4
  mr        r3, r30
  b         .loc_0xE4

.loc_0xE0:
  li        r3, 0

.loc_0xE4:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8036DF28
 * Size:	0000B0
 */
void createGroupByBigFoot__Q34Game11TamagoMushi3MgrFRQ24Game13EnemyBirthArgiR10Vector3<float>f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  stw       r30, 0x10(r1)
  mr        r30, r6
  stw       r29, 0xC(r1)
  mr        r29, r5
  stw       r28, 0x8(r1)
  mr        r28, r3
  bl        -0x23EB90
  mr.       r0, r3
  beq-      .loc_0x88
  mr        r31, r0
  li        r4, 0
  bl        -0x232FA4
  mr        r3, r31
  bl        0x22CC
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  fmr       f1, f31
  mr        r3, r28
  mr        r4, r31
  mr        r5, r29
  li        r6, 0x1
  bl        0x3E0
  mr        r3, r31
  b         .loc_0x8C

.loc_0x88:
  li        r3, 0

.loc_0x8C:
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  lwz       r29, 0xC(r1)
  lwz       r28, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8036DFD8
 * Size:	0003AC
 */
void Game::TamagoMushi::Mgr::createGroup( (Game::TamagoMushi::Obj *, int, bool))
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stfd      f31, 0x130(r1)
  psq_st    f31,0x138(r1),0,0
  stfd      f30, 0x120(r1)
  psq_st    f30,0x128(r1),0,0
  stfd      f29, 0x110(r1)
  psq_st    f29,0x118(r1),0,0
  stfd      f28, 0x100(r1)
  psq_st    f28,0x108(r1),0,0
  stfd      f27, 0xF0(r1)
  psq_st    f27,0xF8(r1),0,0
  stfd      f26, 0xE0(r1)
  psq_st    f26,0xE8(r1),0,0
  stfd      f25, 0xD0(r1)
  psq_st    f25,0xD8(r1),0,0
  stfd      f24, 0xC0(r1)
  psq_st    f24,0xC8(r1),0,0
  stfd      f23, 0xB0(r1)
  psq_st    f23,0xB8(r1),0,0
  stmw      r22, 0x88(r1)
  rlwinm.   r0,r6,0,24,31
  lfs       f24, 0x728(r2)
  mr        r27, r6
  mr        r25, r3
  mr        r26, r4
  mr        r22, r5
  beq-      .loc_0x78
  lfs       f24, 0x72C(r2)

.loc_0x78:
  cmplwi    r26, 0
  bne-      .loc_0x9C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x24C4
  li        r4, 0xAA
  addi      r5, r5, 0x24D8
  crclr     6, 0x6
  bl        -0x343A30

.loc_0x9C:
  mr        r3, r26
  mr        r4, r26
  bl        0x216C
  addi      r3, r1, 0x2C
  bl        -0x23F460
  mr        r4, r26
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r26)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f27, 0x14(r1)
  lfs       f26, 0x18(r1)
  lfs       f25, 0x1C(r1)
  bl        -0x2A4B0C
  xoris     r0, r3, 0x8000
  lis       r3, 0x4330
  stw       r0, 0x64(r1)
  rlwinm.   r0,r27,0,24,31
  lfd       f3, 0x748(r2)
  stw       r3, 0x60(r1)
  lfs       f1, 0x730(r2)
  lfd       f2, 0x60(r1)
  lfs       f0, 0x724(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fmadds    f23, f0, f1, f0
  beq-      .loc_0x110
  lfs       f23, 0x704(r2)

.loc_0x110:
  lfs       f0, 0x6F4(r2)
  mr        r3, r26
  stfs      f27, 0x2C(r1)
  addi      r4, r1, 0x2C
  stfs      f0, 0x38(r1)
  stfs      f26, 0x30(r1)
  stfs      f25, 0x34(r1)
  lwz       r12, 0x0(r26)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x38(r1)
  lis       r3, 0x8050
  lfs       f28, 0x738(r2)
  rlwinm    r29,r27,0,24,31
  stfs      f0, 0x1FC(r26)
  xoris     r31, r22, 0x8000
  lfd       f29, 0x748(r2)
  addi      r23, r3, 0x71A0
  lfs       f0, 0x1FC(r26)
  subi      r24, r22, 0x1
  lfs       f30, 0x6F4(r2)
  li        r28, 0
  stfs      f0, 0x1A8(r26)
  lis       r30, 0x4330
  lfs       f31, 0x740(r2)
  b         .loc_0x348

.loc_0x17C:
  cmplwi    r29, 0
  bne-      .loc_0x1B8
  bl        -0x2A4BBC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x64(r1)
  lfd       f3, 0x748(r2)
  stw       r0, 0x60(r1)
  lfs       f2, 0x730(r2)
  lfd       f0, 0x60(r1)
  lfs       f1, 0x734(r2)
  fsubs     f3, f0, f3
  lfs       f0, 0x714(r2)
  fdivs     f2, f3, f2
  fmadds    f23, f1, f2, f0

.loc_0x1B8:
  xoris     r0, r28, 0x8000
  stw       r30, 0x60(r1)
  stw       r0, 0x64(r1)
  lfd       f0, 0x60(r1)
  stw       r31, 0x6C(r1)
  fsubs     f1, f0, f29
  stw       r30, 0x68(r1)
  lfd       f0, 0x68(r1)
  fmuls     f1, f28, f1
  stfs      f27, 0x2C(r1)
  fsubs     f0, f0, f29
  stfs      f26, 0x30(r1)
  fdivs     f1, f1, f0
  stfs      f25, 0x34(r1)
  fcmpo     cr0, f1, f30
  stfs      f1, 0x38(r1)
  bge-      .loc_0x228
  lfs       f0, 0x73C(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x70(r1)
  lwz       r0, 0x74(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x24C

.loc_0x228:
  lfs       f0, 0x740(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x78(r1)
  lwz       r0, 0x7C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x24C:
  fmuls     f1, f24, f0
  lfs       f0, 0x2C(r1)
  lfs       f2, 0x38(r1)
  fmadds    f0, f23, f1, f0
  fcmpo     cr0, f2, f30
  stfs      f0, 0x2C(r1)
  bge-      .loc_0x26C
  fneg      f2, f2

.loc_0x26C:
  fmuls     f1, f2, f31
  lfs       f0, 0x34(r1)
  cmplwi    r29, 0
  fctiwz    f1, f1
  stfd      f1, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r23, r0
  lfs       f1, 0x4(r3)
  fmuls     f1, f24, f1
  fmadds    f0, f23, f1, f0
  stfs      f0, 0x34(r1)
  bne-      .loc_0x2B8
  rlwinm    r3,r28,1,31,31
  rlwinm    r0,r28,0,31,31
  xor       r0, r0, r3
  sub       r0, r0, r3
  cmpwi     r0, 0x1
  bne-      .loc_0x2C8

.loc_0x2B8:
  lfs       f1, 0x38(r1)
  lfs       f0, 0x744(r2)
  fmuls     f0, f1, f0
  stfs      f0, 0x38(r1)

.loc_0x2C8:
  mr        r3, r25
  addi      r4, r1, 0x2C
  bl        -0x23EEE0
  mr.       r0, r3
  beq-      .loc_0x344
  mr        r22, r0
  li        r4, 0
  bl        -0x2332F4
  rlwinm.   r0,r27,0,24,31
  beq-      .loc_0x338
  mr        r4, r26
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r26)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  mr        r3, r22
  lfs       f1, 0xC(r1)
  addi      r4, r1, 0x20
  lfs       f0, 0x10(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r12, 0x0(r22)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     

.loc_0x338:
  mr        r3, r22
  mr        r4, r26
  bl        0x1ED0

.loc_0x344:
  addi      r28, r28, 0x1

.loc_0x348:
  cmpw      r28, r24
  blt+      .loc_0x17C
  psq_l     f31,0x138(r1),0,0
  lfd       f31, 0x130(r1)
  psq_l     f30,0x128(r1),0,0
  lfd       f30, 0x120(r1)
  psq_l     f29,0x118(r1),0,0
  lfd       f29, 0x110(r1)
  psq_l     f28,0x108(r1),0,0
  lfd       f28, 0x100(r1)
  psq_l     f27,0xF8(r1),0,0
  lfd       f27, 0xF0(r1)
  psq_l     f26,0xE8(r1),0,0
  lfd       f26, 0xE0(r1)
  psq_l     f25,0xD8(r1),0,0
  lfd       f25, 0xD0(r1)
  psq_l     f24,0xC8(r1),0,0
  lfd       f24, 0xC0(r1)
  psq_l     f23,0xB8(r1),0,0
  lfd       f23, 0xB0(r1)
  lmw       r22, 0x88(r1)
  lwz       r0, 0x144(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	8036E384
 * Size:	000484
 */
void Game::TamagoMushi::Mgr::createGroupByBigFoot( (Game::TamagoMushi::Obj *, int, bool, float))
{
/*
.loc_0x0:
  stwu      r1, -0x1A0(r1)
  mflr      r0
  stw       r0, 0x1A4(r1)
  stfd      f31, 0x190(r1)
  psq_st    f31,0x198(r1),0,0
  stfd      f30, 0x180(r1)
  psq_st    f30,0x188(r1),0,0
  stfd      f29, 0x170(r1)
  psq_st    f29,0x178(r1),0,0
  stfd      f28, 0x160(r1)
  psq_st    f28,0x168(r1),0,0
  stfd      f27, 0x150(r1)
  psq_st    f27,0x158(r1),0,0
  stfd      f26, 0x140(r1)
  psq_st    f26,0x148(r1),0,0
  stfd      f25, 0x130(r1)
  psq_st    f25,0x138(r1),0,0
  stfd      f24, 0x120(r1)
  psq_st    f24,0x128(r1),0,0
  stfd      f23, 0x110(r1)
  psq_st    f23,0x118(r1),0,0
  stfd      f22, 0x100(r1)
  psq_st    f22,0x108(r1),0,0
  stfd      f21, 0xF0(r1)
  psq_st    f21,0xF8(r1),0,0
  stfd      f20, 0xE0(r1)
  psq_st    f20,0xE8(r1),0,0
  stfd      f19, 0xD0(r1)
  psq_st    f19,0xD8(r1),0,0
  stfd      f18, 0xC0(r1)
  psq_st    f18,0xC8(r1),0,0
  stmw      r23, 0x9C(r1)
  mr.       r25, r4
  fmr       f19, f1
  mr        r24, r3
  mr        r23, r5
  mr        r26, r6
  bne-      .loc_0xB4
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x24C4
  li        r4, 0xDF
  addi      r5, r5, 0x24D8
  crclr     6, 0x6
  bl        -0x343DF4

.loc_0xB4:
  mr        r3, r25
  mr        r4, r25
  bl        0x1DA8
  addi      r3, r1, 0x2C
  bl        -0x23F824
  mr        r4, r25
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r25)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f20, 0x14(r1)
  mr        r3, r25
  lfs       f22, 0x18(r1)
  addi      r4, r1, 0x2C
  lfs       f21, 0x1C(r1)
  lfs       f0, 0x6F4(r2)
  stfs      f20, 0x2C(r1)
  stfs      f0, 0x38(r1)
  stfs      f22, 0x30(r1)
  stfs      f21, 0x34(r1)
  lwz       r12, 0x0(r25)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x38(r1)
  lis       r3, 0x8050
  lfd       f24, 0x748(r2)
  xoris     r30, r23, 0x8000
  stfs      f0, 0x1FC(r25)
  addi      r31, r3, 0x71A0
  lfs       f25, 0x730(r2)
  subi      r23, r23, 0x1
  lfs       f0, 0x1FC(r25)
  li        r28, 0
  lfs       f26, 0x734(r2)
  lis       r29, 0x4330
  stfs      f0, 0x1A8(r25)
  lfs       f27, 0x714(r2)
  lfs       f28, 0x738(r2)
  lfs       f29, 0x718(r2)
  lfs       f30, 0x6F4(r2)
  lfs       f31, 0x740(r2)
  b         .loc_0x3F8

.loc_0x164:
  bl        -0x2A4F48
  xoris     r0, r3, 0x8000
  stw       r29, 0x60(r1)
  stw       r0, 0x64(r1)
  lfd       f0, 0x60(r1)
  fsubs     f0, f0, f24
  fdivs     f0, f0, f25
  fmadds    f23, f26, f0, f27
  bl        -0x2A4F68
  xoris     r0, r28, 0x8000
  xoris     r3, r3, 0x8000
  stw       r0, 0x74(r1)
  stw       r29, 0x70(r1)
  lfd       f0, 0x70(r1)
  stw       r3, 0x6C(r1)
  fsubs     f0, f0, f24
  stw       r29, 0x68(r1)
  lfd       f2, 0x68(r1)
  fmuls     f1, f28, f0
  stw       r30, 0x7C(r1)
  fsubs     f2, f2, f24
  stw       r29, 0x78(r1)
  lfd       f0, 0x78(r1)
  fdivs     f2, f2, f25
  stfs      f20, 0x2C(r1)
  stfs      f22, 0x30(r1)
  stfs      f21, 0x34(r1)
  fsubs     f0, f0, f24
  fmuls     f2, f28, f2
  fdivs     f3, f1, f0
  stfs      f2, 0x38(r1)
  fcmpo     cr0, f3, f30
  bge-      .loc_0x214
  lfs       f0, 0x73C(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x238

.loc_0x214:
  lfs       f0, 0x740(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x238:
  fmuls     f1, f29, f0
  lfs       f0, 0x2C(r1)
  fmr       f2, f3
  fcmpo     cr0, f3, f30
  fmadds    f0, f23, f1, f0
  stfs      f0, 0x2C(r1)
  bge-      .loc_0x258
  fneg      f2, f3

.loc_0x258:
  fmuls     f1, f2, f31
  lfs       f0, 0x34(r1)
  mr        r3, r24
  addi      r4, r1, 0x2C
  fctiwz    f1, f1
  stfd      f1, 0x90(r1)
  lwz       r0, 0x94(r1)
  rlwinm    r0,r0,3,18,28
  add       r5, r31, r0
  lfs       f1, 0x4(r5)
  fmuls     f1, f29, f1
  fmadds    f0, f23, f1, f0
  stfs      f0, 0x34(r1)
  bl        -0x23F248
  mr.       r27, r3
  beq-      .loc_0x3F4
  li        r4, 0
  bl        -0x233658
  rlwinm.   r0,r26,0,24,31
  beq-      .loc_0x37C
  mr        r4, r25
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r25)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x5555
  lfs       f2, 0x8(r1)
  addi      r0, r3, 0x5556
  lfs       f1, 0xC(r1)
  mulhw     r3, r0, r28
  lfs       f0, 0x10(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  rlwinm    r0,r3,1,31,31
  stfs      f0, 0x28(r1)
  add       r0, r3, r0
  mulli     r0, r0, 0x3
  sub.      r0, r28, r0
  beq-      .loc_0x330
  bl        -0x2A50DC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x94(r1)
  lfd       f3, 0x748(r2)
  stw       r0, 0x90(r1)
  lfs       f1, 0x730(r2)
  lfd       f2, 0x90(r1)
  lfs       f0, 0x24(r1)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fnmsubs   f0, f19, f1, f0
  stfs      f0, 0x24(r1)
  b         .loc_0x364

.loc_0x330:
  bl        -0x2A5114
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x94(r1)
  lfd       f3, 0x748(r2)
  stw       r0, 0x90(r1)
  lfs       f1, 0x730(r2)
  lfd       f2, 0x90(r1)
  lfs       f0, 0x24(r1)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fmadds    f0, f19, f1, f0
  stfs      f0, 0x24(r1)

.loc_0x364:
  mr        r3, r27
  addi      r4, r1, 0x20
  lwz       r12, 0x0(r27)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     

.loc_0x37C:
  mr        r3, r27
  mr        r4, r25
  bl        0x1AE0
  bl        -0x2A516C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x94(r1)
  lfd       f2, 0x748(r2)
  stw       r0, 0x90(r1)
  lfs       f0, 0x730(r2)
  lfd       f1, 0x90(r1)
  lfs       f23, 0x38(r1)
  fsubs     f1, f1, f2
  fdivs     f18, f1, f0
  bl        -0x2A5198
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x8C(r1)
  lfs       f1, 0x738(r2)
  stw       r0, 0x88(r1)
  lfd       f4, 0x748(r2)
  fmuls     f0, f1, f18
  lfd       f3, 0x88(r1)
  lfs       f2, 0x730(r2)
  fsubs     f3, f3, f4
  fdivs     f2, f3, f2
  fmuls     f1, f1, f2
  stfs      f1, 0x1A4(r27)
  stfs      f23, 0x1A8(r27)
  stfs      f0, 0x1AC(r27)

.loc_0x3F4:
  addi      r28, r28, 0x1

.loc_0x3F8:
  cmpw      r28, r23
  blt+      .loc_0x164
  psq_l     f31,0x198(r1),0,0
  lfd       f31, 0x190(r1)
  psq_l     f30,0x188(r1),0,0
  lfd       f30, 0x180(r1)
  psq_l     f29,0x178(r1),0,0
  lfd       f29, 0x170(r1)
  psq_l     f28,0x168(r1),0,0
  lfd       f28, 0x160(r1)
  psq_l     f27,0x158(r1),0,0
  lfd       f27, 0x150(r1)
  psq_l     f26,0x148(r1),0,0
  lfd       f26, 0x140(r1)
  psq_l     f25,0x138(r1),0,0
  lfd       f25, 0x130(r1)
  psq_l     f24,0x128(r1),0,0
  lfd       f24, 0x120(r1)
  psq_l     f23,0x118(r1),0,0
  lfd       f23, 0x110(r1)
  psq_l     f22,0x108(r1),0,0
  lfd       f22, 0x100(r1)
  psq_l     f21,0xF8(r1),0,0
  lfd       f21, 0xF0(r1)
  psq_l     f20,0xE8(r1),0,0
  lfd       f20, 0xE0(r1)
  psq_l     f19,0xD8(r1),0,0
  lfd       f19, 0xD0(r1)
  psq_l     f18,0xC8(r1),0,0
  lfd       f18, 0xC0(r1)
  lmw       r23, 0x9C(r1)
  lwz       r0, 0x1A4(r1)
  mtlr      r0
  addi      r1, r1, 0x1A0
  blr
*/
}

/*
 * --INFO--
 * Address:	8036E808
 * Size:	0000B0
 */
void Game::TamagoMushi::Mgr::__dt(void)
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
  beq-      .loc_0x94
  lis       r3, 0x804E
  addi      r3, r3, 0x34D8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  subi      r3, r3, 0x760
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r3, r3, 0x5304
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4(r30)
  bl        0xA2D00

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x34A7E4

.loc_0x94:
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
 * Address:	8036E8B8
 * Size:	000008
 */
void Game::TamagoMushi::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x44
  blr
*/
}

/*
 * --INFO--
 * Address:	8036E8C0
 * Size:	000060
 */
void Game::TamagoMushi::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x31C
  addi      r3, r3, 0x10
  bl        -0x34A938
  lis       r4, 0x8037
  lis       r5, 0x8037
  subi      r4, r4, 0x1148
  mr        r7, r31
  subi      r5, r5, 0x16E0
  li        r6, 0x31C
  bl        -0x2ACF10
  stw       r3, 0x48(r30)
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
 * Address:	8036E920
 * Size:	0000BC
 */
void Game::TamagoMushi::Obj::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xA0
  lis       r3, 0x804E
  addi      r0, r31, 0x30C
  addi      r4, r3, 0x35FC
  stw       r4, 0x0(r31)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x2FC
  stw       r3, 0x178(r31)
  lwz       r3, 0x17C(r31)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r31)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0x90
  lis       r3, 0x804B
  addi      r0, r31, 0x2BC
  subi      r4, r3, 0x5CDC
  addi      r3, r31, 0x290
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x1B0
  addi      r6, r4, 0x2F8
  li        r4, -0x1
  stw       r5, 0x178(r31)
  lwz       r5, 0x17C(r31)
  stw       r6, 0x0(r5)
  lwz       r5, 0x17C(r31)
  sub       r0, r0, r5
  stw       r0, 0xC(r5)
  bl        0xA2BDC

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x34A908

.loc_0xA0:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8036E9DC
 * Size:	000050
 */
void Game::TamagoMushi::Parms::read( (Stream &))
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
  bl        0xA4DFC
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0xA4DF0
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0xA4DE4
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
 * Address:	8036EA2C
 * Size:	0000DC
 */
void J3DUMtxCacheRef<J3DUMtxAnmCacheTable>::fetch(J3DModel *) const
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r30, r4
  lwz       r0, 0x8(r4)
  lwz       r4, 0x4(r4)
  rlwinm.   r0,r0,0,30,30
  lhz       r31, 0x2C(r4)
  beq-      .loc_0x78
  lwz       r29, 0x4(r3)
  li        r27, 0
  li        r28, 0
  b         .loc_0x6C

.loc_0x38:
  lwz       r4, 0x0(r29)
  lwz       r0, 0x4(r29)
  lwz       r3, 0x84(r30)
  mullw     r5, r4, r0
  lwz       r6, 0xC(r29)
  lwz       r0, 0xC(r3)
  add       r4, r0, r28
  add       r0, r27, r5
  mulli     r0, r0, 0x30
  add       r3, r6, r0
  bl        -0x2847C0
  addi      r28, r28, 0x30
  addi      r27, r27, 0x1

.loc_0x6C:
  cmpw      r27, r31
  blt+      .loc_0x38
  b         .loc_0xC8

.loc_0x78:
  lwz       r29, 0x4(r3)
  li        r27, 0
  li        r28, 0
  b         .loc_0xC0

.loc_0x88:
  lwz       r5, 0x0(r29)
  addi      r3, r30, 0x24
  lwz       r0, 0x4(r29)
  lwz       r4, 0x84(r30)
  mullw     r6, r5, r0
  lwz       r7, 0xC(r29)
  lwz       r0, 0xC(r4)
  add       r5, r0, r28
  add       r0, r27, r6
  mulli     r0, r0, 0x30
  add       r4, r7, r0
  bl        -0x2847E0
  addi      r28, r28, 0x30
  addi      r27, r27, 0x1

.loc_0xC0:
  cmpw      r27, r31
  blt+      .loc_0x88

.loc_0xC8:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8036EB08
 * Size:	000098
 */
void J3DUMtxCacheRef<J3DUMtxAnmCacheTable>::~J3DUMtxCacheRef()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr.       r29, r3
  beq-      .loc_0x78
  lis       r3, 0x804E
  addi      r0, r3, 0x35C4
  stw       r0, 0x0(r29)
  lwz       r31, 0x4(r29)
  cmplwi    r31, 0
  beq-      .loc_0x54
  beq-      .loc_0x54
  mr        r3, r31
  li        r4, 0
  bl        -0x357364
  mr        r3, r31
  bl        -0x34AAA4

.loc_0x54:
  cmplwi    r29, 0
  beq-      .loc_0x68
  lis       r3, 0x804E
  addi      r0, r3, 0x35D4
  stw       r0, 0x0(r29)

.loc_0x68:
  extsh.    r0, r30
  ble-      .loc_0x78
  mr        r3, r29
  bl        -0x34AAC8

.loc_0x78:
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	8036EBA0
 * Size:	000008
 */
void @4@Game::TamagoMushi::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x39C
*/
}
