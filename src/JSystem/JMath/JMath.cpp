

/*
 * --INFO--
 * Address:	80034F08
 * Size:	0000BC
 */
void JMAEulerToQuat(short, short, short, Quaternion*)
{
	/*
	.loc_0x0:
	  extsh     r8, r3
	  extsh     r7, r4
	  rlwinm    r0,r8,1,31,31
	  extsh     r3, r5
	  add       r0, r0, r8
	  rlwinm    r4,r7,1,31,31
	  srawi     r5, r0, 0x1
	  lis       r8, 0x8050
	  rlwinm    r5,r5,0,16,31
	  add       r4, r4, r7
	  srawi     r5, r5, 0x5
	  rlwinm    r0,r3,1,31,31
	  srawi     r4, r4, 0x1
	  addi      r7, r8, 0x71A0
	  add       r0, r0, r3
	  rlwinm    r5,r5,3,0,28
	  rlwinm    r3,r4,0,16,31
	  addi      r4, r7, 0x4
	  srawi     r3, r3, 0x5
	  lfsx      f9, r7, r5
	  rlwinm    r3,r3,3,0,28
	  srawi     r0, r0, 0x1
	  rlwinm    r0,r0,30,18,28
	  lfsx      f3, r7, r3
	  lfsx      f10, r7, r0
	  lfsx      f7, r4, r3
	  fmuls     f0, f9, f3
	  lfsx      f8, r4, r0
	  fmuls     f4, f3, f10
	  lfsx      f6, r4, r5
	  fmuls     f1, f9, f7
	  fmuls     f11, f7, f8
	  fmuls     f2, f9, f4
	  fmuls     f4, f6, f4
	  fmuls     f3, f6, f3
	  fmadds    f5, f6, f11, f2
	  fmuls     f2, f10, f1
	  fmsubs    f4, f9, f11, f4
	  stfs      f5, 0xC(r6)
	  fmuls     f1, f6, f7
	  fmuls     f0, f8, f0
	  fmadds    f2, f8, f3, f2
	  stfs      f4, 0x0(r6)
	  fmsubs    f0, f10, f1, f0
	  stfs      f2, 0x4(r6)
	  stfs      f0, 0x8(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80034FC4
 * Size:	0000D8
 */
void JMAQuatLerp(const Quaternion*, const Quaternion*, float, Quaternion*)
{
	/*
	.loc_0x0:
	  psq_l     f0,0x0(r3),0,0
	  psq_l     f3,0x0(r4),0,0
	  psq_l     f2,0x8(r3),0,0
	  ps_mul    f4, f0, f3
	  psq_l     f3,0x8(r4),0,0
	  lfd       f0, -0x7C38(r2)
	  ps_madd   f4, f2, f3, f4
	  ps_sum0   f4, f4, f4, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x80
	  lfs       f3, 0x0(r3)
	  fneg      f4, f1
	  lfs       f0, 0x0(r4)
	  lfs       f5, 0x4(r3)
	  fadds     f1, f3, f0
	  lfs       f0, 0x4(r4)
	  lfs       f6, 0x8(r3)
	  fadds     f2, f5, f0
	  lfs       f0, 0x8(r4)
	  fmadds    f3, f4, f1, f3
	  fadds     f1, f6, f0
	  lfs       f7, 0xC(r3)
	  lfs       f0, 0xC(r4)
	  fmadds    f2, f4, f2, f5
	  stfs      f3, 0x0(r5)
	  fadds     f0, f7, f0
	  fmadds    f1, f4, f1, f6
	  stfs      f2, 0x4(r5)
	  fmadds    f0, f4, f0, f7
	  stfs      f1, 0x8(r5)
	  stfs      f0, 0xC(r5)
	  blr

	.loc_0x80:
	  lfs       f3, 0x0(r3)
	  fneg      f4, f1
	  lfs       f0, 0x0(r4)
	  lfs       f5, 0x4(r3)
	  fsubs     f1, f3, f0
	  lfs       f0, 0x4(r4)
	  lfs       f6, 0x8(r3)
	  fsubs     f2, f5, f0
	  lfs       f0, 0x8(r4)
	  fmadds    f3, f4, f1, f3
	  fsubs     f1, f6, f0
	  lfs       f7, 0xC(r3)
	  lfs       f0, 0xC(r4)
	  fmadds    f2, f4, f2, f5
	  stfs      f3, 0x0(r5)
	  fsubs     f0, f7, f0
	  fmadds    f1, f4, f1, f6
	  stfs      f2, 0x4(r5)
	  fmadds    f0, f4, f0, f7
	  stfs      f1, 0x8(r5)
	  stfs      f0, 0xC(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void JMALagrangeInterpolation(int, float*, float*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JMAFastVECMag(const Vec*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JMAFastVECNormalize(const Vec*, Vec*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JMAVECScaleAdd(const Vec*, const Vec*, Vec*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JMAVECLerp(const Vec*, const Vec*, Vec*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8003509C
 * Size:	000064
 */
void JMAMTXApplyScale(const float (*)[4], float (*)[4], float, float, float)
{
	/*
	.loc_0x0:
	  fmr       f6, f1
	  psq_l     f1,0x0(r3),0,0
	  fmr       f0, f2
	  psq_l     f2,0x10(r3),0,0
	  fmr       f5, f3
	  lfs       f4, -0x7C30(r2)
	  ps_merge00f0, f6, f0
	  psq_l     f3,0x20(r3),0,0
	  ps_mul    f1, f1, f0
	  ps_mul    f2, f2, f0
	  ps_mul    f3, f3, f0
	  psq_st    f1,0x0(r4),0,0
	  ps_merge00f0, f5, f4
	  psq_l     f1,0x8(r3),0,0
	  psq_st    f2,0x10(r4),0,0
	  psq_l     f2,0x18(r3),0,0
	  ps_mul    f1, f1, f0
	  psq_st    f3,0x20(r4),0,0
	  psq_l     f3,0x28(r3),0,0
	  ps_mul    f2, f2, f0
	  psq_st    f1,0x8(r4),0,0
	  ps_mul    f3, f3, f0
	  psq_st    f2,0x18(r4),0,0
	  psq_st    f3,0x28(r4),0,0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JMAMTXScaleApply(const float (*)[4], float (*)[4], float, float, float)
{
	// UNUSED FUNCTION
}