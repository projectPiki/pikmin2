

/*
 * --INFO--
 * Address:	8009C5B4
 * Size:	00001C
 */
void JASPlayer::extend8to16(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r3,0,24,24
	  rlwinm    r3,r3,0,24,31
	  beqlr-
	  addis     r3, r3, 0x1
	  subi      r0, r3, 0x100
	  extsh     r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C5D0
 * Size:	0000D4
 */
void JASPlayer::pitchToCent(float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  lfs       f0, -0x7648(r2)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  fmuls     f1, f0, f1
	  lfd       f3, -0x7638(r2)
	  lfs       f0, -0x7644(r2)
	  fmuls     f2, f1, f2
	  fctiwz    f1, f2
	  fcmpo     cr0, f2, f0
	  stfd      f1, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  extsh     r0, r3
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f3
	  fsubs     f31, f2, f1
	  bge-      .loc_0x70
	  fcmpu     cr0, f0, f31
	  beq-      .loc_0x70
	  lfs       f0, -0x7640(r2)
	  subi      r3, r3, 0x1
	  fadds     f31, f31, f0

	.loc_0x70:
	  lfs       f0, -0x7640(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x88
	  fsubs     f31, f31, f0
	  addi      r3, r3, 0x1

	.loc_0x88:
	  extsh     r3, r3
	  addi      r3, r3, 0x3C
	  bl        0x8178
	  lfs       f0, -0x763C(r2)
	  lis       r3, 0x8048
	  subi      r3, r3, 0x7520
	  fmuls     f0, f0, f31
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,2,14,29
	  lfsx      f0, r3, r0
	  fmuls     f1, f0, f1
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C6A4
 * Size:	000070
 */
void JASPlayer::getRandomS32()
{
	/*
	.loc_0x0:
	  lbz       r0, -0x759C(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x1C
	  li        r3, 0x1000
	  li        r0, 0x1
	  stw       r3, -0x75A0(r13)
	  stb       r0, -0x759C(r13)

	.loc_0x1C:
	  lbz       r0, -0x7594(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x38
	  li        r3, 0x5555
	  li        r0, 0x1
	  stw       r3, -0x7598(r13)
	  stb       r0, -0x7594(r13)

	.loc_0x38:
	  lis       r3, 0x1358
	  lwz       r4, -0x75A0(r13)
	  subi      r0, r3, 0x6422
	  lwz       r5, -0x7598(r13)
	  lis       r3, 0x9876
	  addi      r3, r3, 0x5432
	  stw       r5, -0x75A0(r13)
	  mullw     r0, r4, r0
	  mullw     r3, r5, r3
	  srawi     r0, r0, 0x4
	  add       r3, r3, r0
	  addi      r3, r3, 0x1
	  stw       r3, -0x7598(r13)
	  blr
	*/
}