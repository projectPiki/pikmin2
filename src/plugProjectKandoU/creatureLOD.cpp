

/*
 * --INFO--
 * Address:	801D7808
 * Size:	00001C
 */
void Game::AILODParm::AILODParm()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x4C10(r2)
	  li        r0, 0
	  lfs       f0, -0x4C0C(r2)
	  stfs      f1, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stb       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D7824
 * Size:	000018
 */
void Game::AILOD::AILOD()
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0x10
	  stb       r4, 0x0(r3)
	  stb       r4, 0x1(r3)
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D783C
 * Size:	0003A8
 */
void Game::Creature::updateLOD(Game::AILODParm&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stmw      r23, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  mr        r24, r4
	  mr        r23, r3
	  addi      r4, r1, 0x10
	  lwz       r12, 0x140(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x8(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  mr        r3, r23
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x144(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  li        r0, 0
	  addi      r28, r1, 0x8
	  stb       r0, 0xD8(r23)
	  li        r27, 0x1
	  li        r26, 0x2
	  li        r25, 0
	  lwz       r3, -0x6514(r13)
	  lwz       r31, 0x24(r3)
	  lwz       r30, 0x264(r31)
	  b         .loc_0x180

	.loc_0x90:
	  mr        r3, r31
	  mr        r4, r25
	  bl        0x24DD1C
	  mr        r29, r3
	  bl        0x24D964
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB8
	  li        r0, 0x2
	  stw       r0, 0x0(r28)
	  b         .loc_0x178

	.loc_0xB8:
	  lbz       r0, 0x8(r24)
	  lwz       r29, 0x44(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  mr        r3, r29
	  addi      r4, r1, 0x20
	  bl        0x2428F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x124
	  li        r0, 0x10
	  lbz       r3, 0xD8(r23)
	  slw       r0, r0, r25
	  li        r27, 0
	  or        r0, r3, r0
	  stb       r0, 0xD8(r23)
	  b         .loc_0x124

	.loc_0xF8:
	  mr        r3, r29
	  addi      r4, r1, 0x10
	  bl        0x242854
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x124
	  li        r0, 0x10
	  lbz       r3, 0xD8(r23)
	  slw       r0, r0, r25
	  li        r27, 0
	  or        r0, r3, r0
	  stb       r0, 0xD8(r23)

	.loc_0x124:
	  mr        r3, r29
	  addi      r4, r1, 0x10
	  bl        0x243790
	  lfs       f0, 0x0(r24)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x148
	  li        r0, 0
	  stw       r0, 0x0(r28)
	  b         .loc_0x168

	.loc_0x148:
	  lfs       f0, 0x4(r24)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x160
	  li        r0, 0x1
	  stw       r0, 0x0(r28)
	  b         .loc_0x168

	.loc_0x160:
	  li        r0, 0x2
	  stw       r0, 0x0(r28)

	.loc_0x168:
	  lwz       r0, 0x0(r28)
	  cmpw      r0, r26
	  bge-      .loc_0x178
	  mr        r26, r0

	.loc_0x178:
	  addi      r28, r28, 0x4
	  addi      r25, r25, 0x1

	.loc_0x180:
	  cmpw      r25, r30
	  blt+      .loc_0x90
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1A4
	  cmpwi     r0, 0x3
	  bne-      .loc_0x1A8

	.loc_0x1A4:
	  li        r3, 0x1

	.loc_0x1A8:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B8
	  cmpwi     r30, 0x2
	  bge-      .loc_0x1C4

	.loc_0x1B8:
	  li        r0, 0
	  stb       r0, 0xD9(r23)
	  b         .loc_0x30C

	.loc_0x1C4:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x24DBE8
	  mr        r0, r3
	  mr        r3, r31
	  mr        r25, r0
	  li        r4, 0x1
	  bl        0x24DBD4
	  mr        r0, r3
	  mr        r3, r25
	  mr        r28, r0
	  bl        0x24D814
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x208
	  li        r0, 0x1
	  stb       r0, 0xD9(r23)
	  b         .loc_0x30C

	.loc_0x208:
	  mr        r3, r28
	  bl        0x24D7F8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x224
	  li        r0, 0
	  stb       r0, 0xD9(r23)
	  b         .loc_0x30C

	.loc_0x224:
	  lwz       r0, 0x44(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x24C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x7C8
	  li        r4, 0xAF
	  addi      r5, r5, 0x7D8
	  crclr     6, 0x6
	  bl        -0x1AD444

	.loc_0x24C:
	  lwz       r0, 0x44(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x274
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x7C8
	  li        r4, 0xB0
	  addi      r5, r5, 0x7D8
	  crclr     6, 0x6
	  bl        -0x1AD46C

	.loc_0x274:
	  lwz       r3, 0x44(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x0(r3)
	  lfs       f30, 0x4(r3)
	  lfs       f29, 0x8(r3)
	  lwz       r3, 0x44(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x4(r3)
	  fsubs     f0, f30, f2
	  lfs       f6, 0x10(r1)
	  fsubs     f7, f1, f2
	  lfs       f3, 0x0(r3)
	  lfs       f5, 0x18(r1)
	  fsubs     f2, f31, f6
	  fmuls     f1, f0, f0
	  lfs       f4, 0x8(r3)
	  fsubs     f6, f3, f6
	  fmuls     f0, f7, f7
	  fsubs     f3, f29, f5
	  fmadds    f1, f2, f2, f1
	  fsubs     f2, f4, f5
	  fmadds    f0, f6, f6, f0
	  fmadds    f1, f3, f3, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x304
	  li        r0, 0
	  stb       r0, 0xD9(r23)
	  b         .loc_0x30C

	.loc_0x304:
	  li        r0, 0x1
	  stb       r0, 0xD9(r23)

	.loc_0x30C:
	  li        r24, 0
	  b         .loc_0x328

	.loc_0x314:
	  mr        r3, r31
	  mr        r4, r24
	  bl        0x24DA98
	  bl        0x24D6E4
	  addi      r24, r24, 0x1

	.loc_0x328:
	  cmpw      r24, r30
	  blt+      .loc_0x314
	  lbz       r4, 0xD8(r23)
	  rlwinm    r3,r26,0,24,31
	  rlwinm.   r0,r27,0,24,31
	  or        r3, r4, r3
	  stb       r3, 0xD8(r23)
	  bne-      .loc_0x358
	  lbz       r0, 0xD8(r23)
	  ori       r0, r0, 0x4
	  stb       r0, 0xD8(r23)
	  b         .loc_0x360

	.loc_0x358:
	  li        r0, 0x2
	  stb       r0, 0xD8(r23)

	.loc_0x360:
	  mr        r3, r23
	  bl        -0x9BCB8
	  cmpwi     r3, 0
	  ble-      .loc_0x37C
	  lbz       r0, 0xD8(r23)
	  ori       r0, r0, 0x8
	  stb       r0, 0xD8(r23)

	.loc_0x37C:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lmw       r23, 0x4C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D7BE4
 * Size:	000258
 */
void Game::Creature::drawLODInfo(Graphics&, Vector3<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r5
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  stw       r28, 0x50(r1)
	  lbz       r0, -0x6BA0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x238
	  lwz       r3, -0x7628(r13)
	  li        r6, 0
	  li        r0, 0xFF
	  li        r5, 0x66
	  lfs       f0, -0x4BF8(r2)
	  li        r4, 0x99
	  stw       r3, 0x30(r1)
	  mr        r3, r30
	  stw       r6, 0x34(r1)
	  stw       r6, 0x38(r1)
	  stw       r6, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  stb       r5, 0x44(r1)
	  stb       r4, 0x45(r1)
	  stb       r0, 0x46(r1)
	  stb       r0, 0x47(r1)
	  stb       r6, 0x48(r1)
	  stb       r5, 0x49(r1)
	  stb       r0, 0x4A(r1)
	  stb       r0, 0x4B(r1)
	  lwz       r4, 0x25C(r30)
	  bl        0x24FC3C
	  lbz       r0, 0xD8(r29)
	  lis       r3, 0x8048
	  lwzu      r5, 0x7E4(r3)
	  rlwinm    r0,r0,0,30,31
	  lwz       r4, 0x4(r3)
	  cmpwi     r0, 0x1
	  lwz       r3, 0x8(r3)
	  stw       r5, 0x24(r1)
	  stw       r4, 0x28(r1)
	  stw       r3, 0x2C(r1)
	  beq-      .loc_0x108
	  bge-      .loc_0xC8
	  cmpwi     r0, 0
	  bge-      .loc_0xD4
	  b         .loc_0x168

	.loc_0xC8:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x168
	  b         .loc_0x138

	.loc_0xD4:
	  li        r4, 0xFF
	  li        r3, 0xC8
	  li        r6, 0
	  li        r5, 0xA
	  stb       r6, 0x44(r1)
	  stb       r5, 0x45(r1)
	  stb       r4, 0x46(r1)
	  stb       r4, 0x47(r1)
	  stb       r3, 0x48(r1)
	  stb       r3, 0x49(r1)
	  stb       r3, 0x4A(r1)
	  stb       r4, 0x4B(r1)
	  b         .loc_0x168

	.loc_0x108:
	  li        r5, 0xC8
	  li        r3, 0xFF
	  li        r4, 0
	  stb       r5, 0x44(r1)
	  stb       r5, 0x45(r1)
	  stb       r4, 0x46(r1)
	  stb       r3, 0x47(r1)
	  stb       r5, 0x48(r1)
	  stb       r5, 0x49(r1)
	  stb       r5, 0x4A(r1)
	  stb       r3, 0x4B(r1)
	  b         .loc_0x168

	.loc_0x138:
	  li        r6, 0xFF
	  li        r3, 0xC8
	  li        r5, 0xA
	  li        r4, 0
	  stb       r6, 0x44(r1)
	  stb       r5, 0x45(r1)
	  stb       r4, 0x46(r1)
	  stb       r6, 0x47(r1)
	  stb       r3, 0x48(r1)
	  stb       r3, 0x49(r1)
	  stb       r3, 0x4A(r1)
	  stb       r6, 0x4B(r1)

	.loc_0x168:
	  lbz       r4, 0xD8(r29)
	  subi      r9, r2, 0x4BF0
	  rlwinm.   r3,r4,0,28,28
	  beq-      .loc_0x17C
	  subi      r9, r2, 0x4BF4

	.loc_0x17C:
	  rlwinm.   r3,r4,0,26,26
	  subi      r8, r2, 0x4BE8
	  beq-      .loc_0x18C
	  subi      r8, r2, 0x4BEC

	.loc_0x18C:
	  rlwinm.   r3,r4,0,27,27
	  lis       r4, 0x8048
	  addi      r6, r4, 0x7F0
	  mr        r5, r31
	  mr        r3, r30
	  addi      r4, r1, 0x30
	  subi      r7, r2, 0x4BE8
	  beq-      .loc_0x1B0
	  subi      r7, r2, 0x4BEC

	.loc_0x1B0:
	  rlwinm    r0,r0,2,0,29
	  addi      r10, r1, 0x24
	  lwzx      r10, r10, r0
	  crclr     6, 0x6
	  bl        0x24FD38
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r3, 0x24(r3)
	  bl        0x24D83C
	  lwz       r28, 0x44(r3)
	  mr        r3, r29
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x8
	  lfs       f0, -0x4BE4(r2)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0x4(r31)
	  stfs      f1, 0x1C(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x8(r31)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x140(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  bl        0x2432F8
	  mr        r3, r30
	  addi      r4, r1, 0x30
	  addi      r5, r1, 0x18
	  subi      r6, r2, 0x4BE0
	  crset     6, 0x6
	  bl        0x24FCC4

	.loc_0x238:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D7E3C
 * Size:	000028
 */
void __sinit_creatureLOD_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6BA8(r13)
	  stfsu     f0, -0x79F0(r3)
	  stfs      f0, -0x6BA4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
