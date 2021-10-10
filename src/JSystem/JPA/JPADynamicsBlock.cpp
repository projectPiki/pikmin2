

/*
 * --INFO--
 * Address:	8008EFD0
 * Size:	0000DC
 */
void JPAVolumePoint(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x19
	  lfs       f3, -0x77E8(r2)
	  addi      r5, r4, 0x660D
	  lfs       f2, -0x77E4(r2)
	  stfs      f3, 0x18(r3)
	  lfs       f1, -0x77E0(r2)
	  stfs      f3, 0x14(r3)
	  stfs      f3, 0x10(r3)
	  lwz       r6, 0x0(r3)
	  lwz       r0, 0xC4(r6)
	  mullw     r4, r0, r5
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r6)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  lwz       r6, 0x0(r3)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0xC4(r6)
	  lfs       f0, 0x10(r1)
	  mullw     r4, r0, r5
	  fsubs     f0, f0, f2
	  fsubs     f4, f0, f1
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r6)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  lwz       r6, 0x0(r3)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0xC4(r6)
	  lfs       f0, 0xC(r1)
	  mullw     r4, r0, r5
	  fsubs     f0, f0, f2
	  fsubs     f5, f0, f1
	  addis     r4, r4, 0x3C6F
	  subi      r4, r4, 0xCA1
	  rlwinm    r0,r4,23,9,31
	  stw       r4, 0xC4(r6)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fsubs     f0, f0, f1
	  stfs      f0, 0x1C(r3)
	  stfs      f5, 0x20(r3)
	  stfs      f4, 0x24(r3)
	  lfs       f1, 0x24(r3)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x28(r3)
	  stfs      f3, 0x2C(r3)
	  stfs      f1, 0x30(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008F0AC
 * Size:	00011C
 */
void JPAVolumeLine(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r6, 0x0(r3)
	  lwz       r4, 0xE8(r6)
	  lwz       r4, 0x2C(r4)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x94
	  lwz       r0, 0x40(r3)
	  lis       r4, 0x4330
	  lwz       r5, 0x44(r3)
	  xoris     r0, r0, 0x8000
	  stw       r4, 0x18(r1)
	  xoris     r5, r5, 0x8000
	  lfd       f4, -0x77D8(r2)
	  stw       r0, 0x1C(r1)
	  lfs       f0, -0x77E4(r2)
	  lfd       f1, 0x18(r1)
	  stw       r5, 0x14(r1)
	  fsubs     f2, f1, f4
	  lfs       f1, -0x77E0(r2)
	  stw       r4, 0x10(r1)
	  lfs       f5, 0x34(r3)
	  lfd       f3, 0x10(r1)
	  fsubs     f2, f2, f0
	  lfs       f0, -0x77E8(r2)
	  fsubs     f3, f3, f4
	  stfs      f0, 0x10(r3)
	  fdivs     f2, f3, f2
	  stfs      f0, 0x14(r3)
	  fsubs     f0, f2, f1
	  fmuls     f0, f5, f0
	  stfs      f0, 0x18(r3)
	  lwz       r4, 0x44(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x44(r3)
	  b         .loc_0xE8

	.loc_0x94:
	  lis       r4, 0x19
	  lwz       r5, 0xC4(r6)
	  addi      r0, r4, 0x660D
	  lfs       f2, -0x77E4(r2)
	  mullw     r4, r5, r0
	  lfs       f1, -0x77E0(r2)
	  lfs       f0, -0x77E8(r2)
	  addis     r4, r4, 0x3C6F
	  subi      r4, r4, 0xCA1
	  rlwinm    r0,r4,23,9,31
	  stw       r4, 0xC4(r6)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  lfs       f4, 0x34(r3)
	  lfs       f3, 0x8(r1)
	  stfs      f0, 0x10(r3)
	  fsubs     f2, f3, f2
	  stfs      f0, 0x14(r3)
	  fsubs     f0, f2, f1
	  fmuls     f0, f4, f0
	  stfs      f0, 0x18(r3)

	.loc_0xE8:
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x11C(r3)
	  lfs       f0, -0x77E8(r2)
	  fmuls     f1, f2, f1
	  stfs      f0, 0x1C(r3)
	  stfs      f0, 0x20(r3)
	  stfs      f1, 0x24(r3)
	  lfs       f1, 0x18(r3)
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f1, 0x30(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008F1C8
 * Size:	0001B4
 */
void JPAVolumeCircle(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r6, 0x0(r3)
	  lwz       r4, 0xE8(r6)
	  lwz       r4, 0x2C(r4)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x70
	  lwz       r6, 0x44(r3)
	  lis       r0, 0x4330
	  lwz       r4, 0x40(r3)
	  rlwinm    r5,r6,16,0,15
	  stw       r0, 0x10(r1)
	  divw      r4, r5, r4
	  lfd       f2, -0x77D8(r2)
	  lfs       f0, 0x3C(r3)
	  addi      r0, r6, 0x1
	  stw       r0, 0x44(r3)
	  extsh     r0, r4
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r6, 0x1C(r1)
	  b         .loc_0xC4

	.loc_0x70:
	  lis       r4, 0x19
	  lwz       r5, 0xC4(r6)
	  addi      r4, r4, 0x660D
	  lis       r0, 0x4330
	  mullw     r4, r5, r4
	  stw       r0, 0x18(r1)
	  lfd       f1, -0x77D8(r2)
	  addis     r4, r4, 0x3C6F
	  subi      r4, r4, 0xCA1
	  rlwinm    r0,r4,16,16,31
	  stw       r4, 0xC4(r6)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  lfs       f2, 0x3C(r3)
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r6, 0x14(r1)

	.loc_0xC4:
	  lwz       r5, 0x0(r3)
	  lis       r4, 0x19
	  addi      r0, r4, 0x660D
	  lfs       f0, -0x77E4(r2)
	  lwz       r4, 0xC4(r5)
	  mullw     r4, r4, r0
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r5)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  lwz       r4, 0x0(r3)
	  stw       r0, 0x8(r1)
	  lwz       r4, 0xE8(r4)
	  lfs       f1, 0x8(r1)
	  lwz       r4, 0x2C(r4)
	  fsubs     f1, f1, f0
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  fmr       f5, f1
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x120
	  fnmsubs   f5, f1, f1, f0

	.loc_0x120:
	  lfs       f3, 0x38(r3)
	  lis       r4, 0x8050
	  lfs       f0, -0x77E4(r2)
	  addi      r5, r4, 0x71A0
	  rlwinm    r0,r6,30,18,28
	  lfs       f4, 0x34(r3)
	  fsubs     f2, f0, f3
	  add       r4, r5, r0
	  lfsx      f0, r5, r0
	  lfs       f1, 0x4(r4)
	  fmadds    f3, f5, f2, f3
	  lfs       f2, -0x77E8(r2)
	  fmuls     f3, f4, f3
	  fmuls     f0, f3, f0
	  fmuls     f1, f3, f1
	  stfs      f0, 0x10(r3)
	  stfs      f2, 0x14(r3)
	  stfs      f1, 0x18(r3)
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0x114(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1C(r3)
	  lfs       f1, 0x14(r3)
	  lfs       f0, 0x118(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x20(r3)
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x11C(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x24(r3)
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x28(r3)
	  stfs      f2, 0x2C(r3)
	  stfs      f1, 0x30(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008F37C
 * Size:	000118
 */
void JPAVolumeCube(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x19
	  addi      r5, r4, 0x660D
	  lfs       f4, -0x77E4(r2)
	  lwz       r6, 0x0(r3)
	  lfs       f3, -0x77E0(r2)
	  lwz       r0, 0xC4(r6)
	  lfs       f0, -0x77E8(r2)
	  mullw     r4, r0, r5
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r6)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  lwz       r6, 0x0(r3)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0xC4(r6)
	  lfs       f1, 0x10(r1)
	  mullw     r4, r0, r5
	  lfs       f2, 0x34(r3)
	  fsubs     f1, f1, f4
	  fsubs     f1, f1, f3
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r6)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  fmuls     f6, f2, f1
	  lwz       r6, 0x0(r3)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0xC4(r6)
	  lfs       f1, 0xC(r1)
	  mullw     r4, r0, r5
	  lfs       f2, 0x34(r3)
	  fsubs     f1, f1, f4
	  fsubs     f1, f1, f3
	  addis     r4, r4, 0x3C6F
	  subi      r4, r4, 0xCA1
	  rlwinm    r0,r4,23,9,31
	  fmuls     f5, f2, f1
	  oris      r0, r0, 0x3F80
	  stw       r4, 0xC4(r6)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0x34(r3)
	  lfs       f1, 0x8(r1)
	  fsubs     f1, f1, f4
	  fsubs     f1, f1, f3
	  fmuls     f1, f2, f1
	  stfs      f1, 0x10(r3)
	  stfs      f5, 0x14(r3)
	  stfs      f6, 0x18(r3)
	  lfs       f2, 0x10(r3)
	  lfs       f1, 0x114(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x1C(r3)
	  lfs       f2, 0x14(r3)
	  lfs       f1, 0x118(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x20(r3)
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x11C(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x24(r3)
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x10(r3)
	  stfs      f1, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f2, 0x30(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008F494
 * Size:	00028C
 */
void JPAVolumeSphere(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r7, 0x0(r3)
	  lwz       r4, 0xE8(r7)
	  lwz       r4, 0x2C(r4)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x108
	  lwz       r6, 0x1EC(r3)
	  lis       r0, 0x4330
	  lwz       r4, 0x1F0(r3)
	  rlwinm    r5,r6,16,0,15
	  lwz       r8, 0x1F4(r3)
	  subi      r4, r4, 0x1
	  lwz       r7, 0x1F8(r3)
	  divw      r4, r5, r4
	  rlwinm    r8,r8,15,0,16
	  subi      r5, r7, 0x1
	  stw       r0, 0x10(r1)
	  lfd       f3, -0x77C8(r2)
	  addi      r0, r6, 0x1
	  divw      r5, r8, r5
	  rlwinm    r4,r4,0,16,31
	  stw       r4, 0x14(r1)
	  lfs       f1, 0x3C(r3)
	  lfd       f2, 0x10(r1)
	  lfs       f0, -0x77D0(r2)
	  stw       r0, 0x1EC(r3)
	  fsubs     f2, f2, f3
	  addi      r0, r5, 0x4000
	  rlwinm    r0,r0,0,16,31
	  lwz       r5, 0x1EC(r3)
	  fmadds    f0, f2, f1, f0
	  lwz       r4, 0x1F0(r3)
	  extsh     r0, r0
	  cmpw      r5, r4
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  bne-      .loc_0x184
	  li        r5, 0
	  stw       r5, 0x1EC(r3)
	  lwz       r5, 0x1F4(r3)
	  addi      r5, r5, 0x1
	  stw       r5, 0x1F4(r3)
	  lwz       r6, 0x1F4(r3)
	  lwz       r5, 0x1F8(r3)
	  rlwinm    r6,r6,1,0,30
	  cmpw      r6, r5
	  bge-      .loc_0xE8
	  lwz       r5, 0x1F0(r3)
	  cmpwi     r5, 0x1
	  beq-      .loc_0xDC
	  addi      r5, r5, 0x4
	  b         .loc_0xE0

	.loc_0xDC:
	  addi      r5, r5, 0x3

	.loc_0xE0:
	  stw       r5, 0x1F0(r3)
	  b         .loc_0x184

	.loc_0xE8:
	  lwz       r5, 0x1F0(r3)
	  cmpwi     r5, 0x4
	  beq-      .loc_0xFC
	  subi      r5, r5, 0x4
	  b         .loc_0x100

	.loc_0xFC:
	  li        r5, 0x1

	.loc_0x100:
	  stw       r5, 0x1F0(r3)
	  b         .loc_0x184

	.loc_0x108:
	  lis       r4, 0x19
	  lwz       r6, 0xC4(r7)
	  addi      r5, r4, 0x660D
	  lis       r0, 0x4330
	  mullw     r4, r6, r5
	  stw       r0, 0x18(r1)
	  lfd       f1, -0x77D8(r2)
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r7)
	  rlwinm    r0,r0,16,16,31
	  extsh     r0, r0
	  lwz       r6, 0x0(r3)
	  srawi     r0, r0, 0x1
	  extsh     r0, r0
	  lwz       r4, 0xC4(r6)
	  mullw     r4, r4, r5
	  addis     r4, r4, 0x3C6F
	  subi      r5, r4, 0xCA1
	  rlwinm    r4,r5,16,16,31
	  stw       r5, 0xC4(r6)
	  extsh     r4, r4
	  xoris     r4, r4, 0x8000
	  lfs       f2, 0x3C(r3)
	  stw       r4, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)

	.loc_0x184:
	  lwz       r7, 0x0(r3)
	  lis       r5, 0x19
	  addi      r5, r5, 0x660D
	  lfs       f1, -0x77E4(r2)
	  lwz       r6, 0xC4(r7)
	  mullw     r5, r6, r5
	  addis     r5, r5, 0x3C6F
	  subi      r5, r5, 0xCA1
	  stw       r5, 0xC4(r7)
	  rlwinm    r5,r5,23,9,31
	  oris      r6, r5, 0x3F80
	  lwz       r5, 0x0(r3)
	  stw       r6, 0x8(r1)
	  lwz       r5, 0xE8(r5)
	  lfs       f0, 0x8(r1)
	  lwz       r5, 0x2C(r5)
	  fsubs     f2, f0, f1
	  lwz       r5, 0x0(r5)
	  lwz       r5, 0x8(r5)
	  rlwinm.   r5,r5,0,31,31
	  beq-      .loc_0x1E0
	  fmuls     f0, f2, f2
	  fnmsubs   f2, f2, f0, f1

	.loc_0x1E0:
	  lfs       f1, 0x38(r3)
	  lis       r5, 0x8050
	  lfs       f0, -0x77E4(r2)
	  addi      r5, r5, 0x71A0
	  rlwinm    r6,r4,30,18,28
	  lfs       f5, 0x34(r3)
	  fsubs     f0, f0, f1
	  addi      r4, r5, 0x4
	  rlwinm    r0,r0,30,18,28
	  lfsx      f4, r4, r6
	  lfsx      f3, r4, r0
	  fmadds    f0, f2, f0, f1
	  lfsx      f1, r5, r6
	  lfsx      f2, r5, r0
	  fmuls     f6, f5, f0
	  lfs       f0, -0x77E8(r2)
	  fmuls     f5, f6, f3
	  fneg      f3, f6
	  fmuls     f1, f5, f1
	  fmuls     f2, f3, f2
	  fmuls     f3, f5, f4
	  stfs      f1, 0x10(r3)
	  stfs      f2, 0x14(r3)
	  stfs      f3, 0x18(r3)
	  lfs       f2, 0x10(r3)
	  lfs       f1, 0x114(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x1C(r3)
	  lfs       f2, 0x14(r3)
	  lfs       f1, 0x118(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x20(r3)
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x11C(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x24(r3)
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x10(r3)
	  stfs      f1, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f2, 0x30(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008F720
 * Size:	000184
 */
void JPAVolumeCylinder(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x19
	  lis       r0, 0x4330
	  lfd       f2, -0x77D8(r2)
	  lwz       r7, 0x0(r3)
	  addi      r5, r4, 0x660D
	  stw       r0, 0x10(r1)
	  lwz       r6, 0xC4(r7)
	  lfs       f0, -0x77E4(r2)
	  mullw     r4, r6, r5
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r7)
	  rlwinm    r0,r0,16,16,31
	  extsh     r0, r0
	  lwz       r6, 0x0(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xC4(r6)
	  lfd       f1, 0x10(r1)
	  mullw     r4, r0, r5
	  lfs       f3, 0x3C(r3)
	  fsubs     f1, f1, f2
	  fmuls     f1, f3, f1
	  addis     r4, r4, 0x3C6F
	  subi      r0, r4, 0xCA1
	  stw       r0, 0xC4(r6)
	  rlwinm    r0,r0,23,9,31
	  oris      r0, r0, 0x3F80
	  fctiwz    f2, f1
	  lwz       r7, 0x0(r3)
	  stw       r0, 0xC(r1)
	  lwz       r4, 0xE8(r7)
	  lfs       f1, 0xC(r1)
	  lwz       r4, 0x2C(r4)
	  stfd      f2, 0x18(r1)
	  fsubs     f1, f1, f0
	  lwz       r4, 0x0(r4)
	  lwz       r8, 0x1C(r1)
	  lwz       r0, 0x8(r4)
	  fmr       f2, f1
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB0
	  fnmsubs   f2, f1, f1, f0

	.loc_0xB0:
	  lis       r4, 0x19
	  lwz       r5, 0xC4(r7)
	  addi      r0, r4, 0x660D
	  lis       r6, 0x8050
	  mullw     r4, r5, r0
	  lfs       f1, 0x38(r3)
	  lfs       f5, -0x77E4(r2)
	  addi      r6, r6, 0x71A0
	  rlwinm    r8,r8,30,18,28
	  lfs       f3, 0x34(r3)
	  addis     r4, r4, 0x3C6F
	  fsubs     f0, f5, f1
	  subi      r4, r4, 0xCA1
	  add       r5, r6, r8
	  rlwinm    r0,r4,23,9,31
	  lfs       f4, 0x4(r5)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  fmadds    f2, f2, f0, f1
	  lfs       f0, -0x77E8(r2)
	  lfs       f1, 0x8(r1)
	  fmuls     f7, f3, f2
	  stw       r4, 0xC4(r7)
	  fsubs     f6, f1, f5
	  lfsx      f1, r6, r8
	  lfs       f3, 0x34(r3)
	  fmuls     f4, f7, f4
	  fadds     f2, f6, f6
	  fmuls     f1, f7, f1
	  fsubs     f2, f2, f5
	  stfs      f1, 0x10(r3)
	  fmuls     f1, f3, f2
	  stfs      f1, 0x14(r3)
	  stfs      f4, 0x18(r3)
	  lfs       f2, 0x10(r3)
	  lfs       f1, 0x114(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x1C(r3)
	  lfs       f2, 0x14(r3)
	  lfs       f1, 0x118(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x20(r3)
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x11C(r3)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x24(r3)
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x10(r3)
	  stfs      f1, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f2, 0x30(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008F8A4
 * Size:	000128
 */
void JPAVolumeTorus(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r5, 0x19
	  lis       r0, 0x4330
	  lis       r4, 0x8050
	  lwz       r8, 0x0(r3)
	  addi      r4, r4, 0x71A0
	  addi      r6, r5, 0x660D
	  stw       r0, 0x8(r1)
	  lwz       r7, 0xC4(r8)
	  addi      r9, r4, 0x4
	  lfd       f1, -0x77D8(r2)
	  mullw     r5, r7, r6
	  addis     r5, r5, 0x3C6F
	  subi      r5, r5, 0xCA1
	  rlwinm    r0,r5,16,16,31
	  stw       r5, 0xC4(r8)
	  extsh     r0, r0
	  xoris     r0, r0, 0x8000
	  lwz       r7, 0x0(r3)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0xC4(r7)
	  lfd       f0, 0x8(r1)
	  mullw     r5, r0, r6
	  lfs       f2, 0x3C(r3)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  addis     r5, r5, 0x3C6F
	  subi      r0, r5, 0xCA1
	  fctiwz    f0, f0
	  stw       r0, 0xC4(r7)
	  rlwinm    r0,r0,14,18,28
	  lfs       f1, 0x34(r3)
	  stfd      f0, 0x10(r1)
	  lfs       f0, 0x38(r3)
	  lwz       r5, 0x14(r1)
	  fmuls     f5, f1, f0
	  lfsx      f1, r4, r0
	  rlwinm    r5,r5,30,18,28
	  lfsx      f4, r9, r0
	  lfsx      f0, r4, r5
	  lfsx      f2, r9, r5
	  fmuls     f0, f5, f0
	  fmuls     f3, f5, f1
	  fmuls     f1, f5, f2
	  fmuls     f0, f0, f4
	  fmuls     f1, f1, f4
	  stfs      f0, 0x28(r3)
	  stfs      f3, 0x2C(r3)
	  stfs      f1, 0x30(r3)
	  lfs       f4, 0x34(r3)
	  lfsx      f1, r4, r5
	  lfs       f0, 0x28(r3)
	  lfsx      f3, r9, r5
	  fmadds    f0, f4, f1, f0
	  lfs       f2, 0x30(r3)
	  lfs       f1, 0x2C(r3)
	  fmadds    f2, f4, f3, f2
	  stfs      f0, 0x10(r3)
	  stfs      f1, 0x14(r3)
	  stfs      f2, 0x18(r3)
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0x114(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1C(r3)
	  lfs       f1, 0x14(r3)
	  lfs       f0, 0x118(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x20(r3)
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x11C(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x24(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008F9CC
 * Size:	000034
 */
void JPADynamicsBlock::JPADynamicsBlock(const unsigned char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x0(r3)
	  bl        .loc_0x34
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x34:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void JPADynamicsBlock::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008FA00
 * Size:	00009C
 */
void JPADynamicsBlock::init()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x0(r3)
	  lwz       r0, 0x8(r4)
	  rlwinm    r0,r0,24,29,31
	  cmplwi    r0, 0x6
	  bgtlr-
	  lis       r4, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r4, r4, 0x3248
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  lis       r4, 0x8009
	  subi      r0, r4, 0xC84
	  stw       r0, 0x4(r3)
	  blr
	  lis       r4, 0x8009
	  subi      r0, r4, 0xB6C
	  stw       r0, 0x4(r3)
	  blr
	  lis       r4, 0x8009
	  subi      r0, r4, 0x8E0
	  stw       r0, 0x4(r3)
	  blr
	  lis       r4, 0x8009
	  subi      r0, r4, 0x75C
	  stw       r0, 0x4(r3)
	  blr
	  lis       r4, 0x8009
	  subi      r0, r4, 0x1030
	  stw       r0, 0x4(r3)
	  blr
	  lis       r4, 0x8009
	  subi      r0, r4, 0xE38
	  stw       r0, 0x4(r3)
	  blr
	  lis       r4, 0x8009
	  subi      r0, r4, 0xF54
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008FA9C
 * Size:	000200
 */
void JPADynamicsBlock::create(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  lwz       r6, 0x0(r4)
	  lwz       r0, 0xF4(r6)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x178
	  lwz       r4, 0xE8(r6)
	  lwz       r4, 0x2C(r4)
	  lwz       r4, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x7C
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x8(r3)
	  rlwinm    r0,r0,24,29,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x68
	  lhz       r3, 0x76(r3)
	  rlwinm    r0,r3,2,0,29
	  mullw     r3, r3, r0
	  addi      r3, r3, 0x2
	  b         .loc_0x6C

	.loc_0x68:
	  lhz       r3, 0x76(r3)

	.loc_0x6C:
	  li        r0, 0
	  mr        r4, r3
	  stw       r0, 0x44(r31)
	  b         .loc_0x13C

	.loc_0x7C:
	  lis       r4, 0x19
	  lwz       r5, 0xC4(r6)
	  addi      r4, r4, 0x660D
	  lis       r0, 0x4330
	  mullw     r4, r5, r4
	  stw       r0, 0x18(r1)
	  lfs       f5, -0x77E4(r2)
	  lfd       f1, -0x77D8(r2)
	  addis     r4, r4, 0x3C6F
	  subi      r4, r4, 0xCA1
	  rlwinm    r0,r4,23,9,31
	  stw       r4, 0xC4(r6)
	  oris      r0, r0, 0x3F80
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x0(r3)
	  lfs       f0, 0x8(r1)
	  lwz       r4, 0x0(r31)
	  fsubs     f2, f0, f5
	  lfs       f3, 0x50(r3)
	  lfs       f4, 0x28(r4)
	  lfs       f0, 0xF8(r4)
	  fadds     f2, f2, f2
	  fsubs     f2, f2, f5
	  fmadds    f2, f3, f2, f5
	  fmuls     f3, f4, f2
	  fadds     f2, f0, f3
	  fctiwz    f0, f2
	  stfs      f2, 0xF8(r4)
	  lwz       r3, 0x0(r31)
	  stfd      f0, 0x10(r1)
	  lfs       f2, 0xF8(r3)
	  lwz       r4, 0x14(r1)
	  xoris     r0, r4, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f2, f0
	  stfs      f0, 0xF8(r3)
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0xF4(r3)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x13C
	  lfs       f0, -0x77E8(r2)
	  fcmpo     cr0, f0, f3
	  bge-      .loc_0x13C
	  fcmpo     cr0, f3, f5
	  bge-      .loc_0x13C
	  li        r4, 0x1

	.loc_0x13C:
	  stw       r4, 0x40(r31)
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0xF4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x154
	  li        r4, 0

	.loc_0x154:
	  mr        r30, r4
	  b         .loc_0x170

	.loc_0x15C:
	  lwz       r3, 0x0(r31)
	  bl        0x444
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  subi      r30, r30, 0x1

	.loc_0x170:
	  cmpwi     r30, 0
	  bgt+      .loc_0x15C

	.loc_0x178:
	  lwz       r5, 0x0(r31)
	  lha       r3, 0x106(r5)
	  addi      r0, r3, 0x1
	  sth       r0, 0x106(r5)
	  extsh     r4, r0
	  lbz       r3, 0x56(r5)
	  addi      r0, r3, 0x1
	  cmpw      r4, r0
	  blt-      .loc_0x1C8
	  lwz       r4, 0x0(r31)
	  lbz       r3, 0x56(r4)
	  lha       r0, 0x106(r4)
	  addi      r3, r3, 0x1
	  sub       r0, r0, r3
	  sth       r0, 0x106(r4)
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0xF4(r3)
	  ori       r0, r0, 0x20
	  stw       r0, 0xF4(r3)
	  b         .loc_0x1D8

	.loc_0x1C8:
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0xF4(r3)
	  rlwinm    r0,r0,0,27,25
	  stw       r0, 0xF4(r3)

	.loc_0x1D8:
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0xF4(r3)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0xF4(r3)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}