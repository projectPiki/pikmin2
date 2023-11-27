#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	800E9984
 * Size:	000848
 */
void GXSetGPMetric(GXPerf0 perf0, GXPerf1 perf1)
{
	switch (gx->perf0) {
	case GX_PERF0_VERTICES:
	case GX_PERF0_CLIP_VTX:
	case GX_PERF0_CLIP_CLKS:
	case GX_PERF0_XF_WAIT_IN:
	case GX_PERF0_XF_WAIT_OUT:
	case GX_PERF0_XF_XFRM_CLKS:
	case GX_PERF0_XF_LIT_CLKS:
	case GX_PERF0_XF_BOT_CLKS:
	case GX_PERF0_XF_REGLD_CLKS:
	case GX_PERF0_XF_REGRD_CLKS:
	case GX_PERF0_CLIP_RATIO:
	case GX_PERF0_CLOCKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0);
		break;

	case GX_PERF0_TRIANGLES:
	case GX_PERF0_TRIANGLES_CULLED:
	case GX_PERF0_TRIANGLES_PASSED:
	case GX_PERF0_TRIANGLES_SCISSORED:
	case GX_PERF0_TRIANGLES_0TEX:
	case GX_PERF0_TRIANGLES_1TEX:
	case GX_PERF0_TRIANGLES_2TEX:
	case GX_PERF0_TRIANGLES_3TEX:
	case GX_PERF0_TRIANGLES_4TEX:
	case GX_PERF0_TRIANGLES_5TEX:
	case GX_PERF0_TRIANGLES_6TEX:
	case GX_PERF0_TRIANGLES_7TEX:
	case GX_PERF0_TRIANGLES_8TEX:
	case GX_PERF0_TRIANGLES_0CLR:
	case GX_PERF0_TRIANGLES_1CLR:
	case GX_PERF0_TRIANGLES_2CLR:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x23000000);
		break;

	case GX_PERF0_QUAD_0CVG:
	case GX_PERF0_QUAD_NON0CVG:
	case GX_PERF0_QUAD_1CVG:
	case GX_PERF0_QUAD_2CVG:
	case GX_PERF0_QUAD_3CVG:
	case GX_PERF0_QUAD_4CVG:
	case GX_PERF0_AVG_QUAD_CNT:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x24000000);
		break;

	case GX_PERF0_NONE:
		break;
	}

	switch (gx->perf1) {
	case GX_PERF1_TEXELS:
	case GX_PERF1_TX_IDLE:
	case GX_PERF1_TX_REGS:
	case GX_PERF1_TX_MEMSTALL:
	case GX_PERF1_TC_CHECK1_2:
	case GX_PERF1_TC_CHECK3_4:
	case GX_PERF1_TC_CHECK5_6:
	case GX_PERF1_TC_CHECK7_8:
	case GX_PERF1_TC_MISS:
	case GX_PERF1_CLOCKS:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000000);
		break;

	case GX_PERF1_VC_ELEMQ_FULL:
	case GX_PERF1_VC_MISSQ_FULL:
	case GX_PERF1_VC_MEMREQ_FULL:
	case GX_PERF1_VC_STATUS7:
	case GX_PERF1_VC_MISSREP_FULL:
	case GX_PERF1_VC_STREAMBUF_LOW:
	case GX_PERF1_VC_ALL_STALLS:
	case GX_PERF1_VERTICES:
		FAST_FLAG_SET(gx->perfSel, 0, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;

	case GX_PERF1_FIFO_REQ:
	case GX_PERF1_CALL_REQ:
	case GX_PERF1_VC_MISS_REQ:
	case GX_PERF1_CP_ALL_REQ:
		GX_SET_CP_REG(3, 0);
		break;

	case GX_PERF1_NONE:
		break;
	}

	gx->perf0 = perf0;

	switch (gx->perf0) {
	case GX_PERF0_VERTICES:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x273);
		break;
	case GX_PERF0_CLIP_VTX:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x14A);
		break;
	case GX_PERF0_CLIP_CLKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x16B);
		break;
	case GX_PERF0_XF_WAIT_IN:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x84);
		break;
	case GX_PERF0_XF_WAIT_OUT:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0xC6);
		break;
	case GX_PERF0_XF_XFRM_CLKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x210);
		break;
	case GX_PERF0_XF_LIT_CLKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x252);
		break;
	case GX_PERF0_XF_BOT_CLKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x231);
		break;
	case GX_PERF0_XF_REGLD_CLKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x1AD);
		break;
	case GX_PERF0_XF_REGRD_CLKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x1CE);
		break;
	case GX_PERF0_CLOCKS:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x21);
		break;
	case GX_PERF0_CLIP_RATIO:
		GX_WRITE_U8(0x10);
		GX_WRITE_U32(0x1006);
		GX_WRITE_U32(0x153);
		break;

	case GX_PERF0_TRIANGLES:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300AE7F);
		break;
	case GX_PERF0_TRIANGLES_CULLED:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x23008E7F);
		break;
	case GX_PERF0_TRIANGLES_PASSED:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x23009E7F);
		break;
	case GX_PERF0_TRIANGLES_SCISSORED:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x23001E7F);
		break;
	case GX_PERF0_TRIANGLES_0TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300AC3F);
		break;
	case GX_PERF0_TRIANGLES_1TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300AC7F);
		break;
	case GX_PERF0_TRIANGLES_2TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300ACBF);
		break;
	case GX_PERF0_TRIANGLES_3TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300ACFF);
		break;
	case GX_PERF0_TRIANGLES_4TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300AD3F);
		break;
	case GX_PERF0_TRIANGLES_5TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300AD7F);
		break;
	case GX_PERF0_TRIANGLES_6TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300ADBF);
		break;
	case GX_PERF0_TRIANGLES_7TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300ADFF);
		break;
	case GX_PERF0_TRIANGLES_8TEX:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300AE3F);
		break;
	case GX_PERF0_TRIANGLES_0CLR:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300A27F);
		break;
	case GX_PERF0_TRIANGLES_1CLR:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300A67F);
		break;
	case GX_PERF0_TRIANGLES_2CLR:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2300AA7F);
		break;

	case GX_PERF0_QUAD_0CVG:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2402C0C6);
		break;
	case GX_PERF0_QUAD_NON0CVG:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2402C16B);
		break;
	case GX_PERF0_QUAD_1CVG:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2402C0E7);
		break;
	case GX_PERF0_QUAD_2CVG:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2402C108);
		break;
	case GX_PERF0_QUAD_3CVG:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2402C129);
		break;
	case GX_PERF0_QUAD_4CVG:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2402C14A);
		break;
	case GX_PERF0_AVG_QUAD_CNT:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x2402C1AD);
		break;

	case GX_PERF0_NONE:
		break;
	}

	gx->perf1 = perf1;

	switch (gx->perf1) {
	case GX_PERF1_TEXELS:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000042);
		break;
	case GX_PERF1_TX_IDLE:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000084);
		break;
	case GX_PERF1_TX_REGS:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000063);
		break;
	case GX_PERF1_TX_MEMSTALL:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000129);
		break;
	case GX_PERF1_TC_MISS:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000252);
		break;
	case GX_PERF1_CLOCKS:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000021);
		break;
	case GX_PERF1_TC_CHECK1_2:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x6700014B);
		break;
	case GX_PERF1_TC_CHECK3_4:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x6700018D);
		break;
	case GX_PERF1_TC_CHECK5_6:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x670001CF);
		break;
	case GX_PERF1_TC_CHECK7_8:
		GX_WRITE_U8(0x61);
		GX_WRITE_U32(0x67000211);
		break;

	case GX_PERF1_VC_ELEMQ_FULL:
		FAST_FLAG_SET(gx->perfSel, 2, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;
	case GX_PERF1_VC_MISSQ_FULL:
		FAST_FLAG_SET(gx->perfSel, 3, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;
	case GX_PERF1_VC_MEMREQ_FULL:
		FAST_FLAG_SET(gx->perfSel, 4, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;
	case GX_PERF1_VC_STATUS7:
		FAST_FLAG_SET(gx->perfSel, 5, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;
	case GX_PERF1_VC_MISSREP_FULL:
		FAST_FLAG_SET(gx->perfSel, 6, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;
	case GX_PERF1_VC_STREAMBUF_LOW:
		FAST_FLAG_SET(gx->perfSel, 7, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;
	case GX_PERF1_VC_ALL_STALLS:
		FAST_FLAG_SET(gx->perfSel, 9, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;
	case GX_PERF1_VERTICES:
		FAST_FLAG_SET(gx->perfSel, 8, 4, 4);
		GX_WRITE_U8(8);
		GX_WRITE_U8(32);
		GX_WRITE_U32(gx->perfSel);
		break;

	case GX_PERF1_FIFO_REQ:
		GX_SET_CP_REG(3, 2);
		break;
	case GX_PERF1_CALL_REQ:
		GX_SET_CP_REG(3, 3);
		break;
	case GX_PERF1_VC_MISS_REQ:
		GX_SET_CP_REG(3, 4);
		break;
	case GX_PERF1_CP_ALL_REQ:
		GX_SET_CP_REG(3, 5);
		break;

	case GX_PERF1_NONE:
		break;
	}

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A8
 */
void GXReadGPMetric(u32* count0, u32* count1)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA1CC
 * Size:	000010
 */
void GXClearGPMetric(void) { GX_SET_CP_REG(2, 4); }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
u32 GXReadGP0Metric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
u32 GXReadGP1Metric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
void GXReadMemMetric(u32* cpReq, u32* tcReq, u32* cpuReadReq, u32* cpuWriteReq, u32* dspReq, u32* ioReq, u32* viReq, u32* peReq, u32* rfReq,
                     u32* fiReq)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void GXClearMemMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
void GXReadPixMetric(u32* topIn, u32* topOut, u32* bottomIn, u32* bottomOut, u32* clearIn, u32* copyClocks)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void GXClearPixMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXSetVCacheMetric(GXVCachePerf attr)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void GXReadVCacheMetric(u32* check, u32* miss, u32* stall)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXClearVCacheMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXInitXfRasMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA1DC
 * Size:	0000C4
 */
void GXReadXfRasMetric(u32* xfWaitIn, u32* xfWaitOut, u32* rasBusy, u32* clocks)
{
	*rasBusy   = GXReadCPReg(32, 33);
	*clocks    = GXReadCPReg(34, 35);
	*xfWaitIn  = GXReadCPReg(36, 37);
	*xfWaitOut = GXReadCPReg(38, 39);
	/*
	.loc_0x0:
	  lwz       r7, -0x714C(r13)
	  addi      r10, r7, 0x42
	  lhz       r8, 0x42(r7)
	  addi      r9, r7, 0x40

	.loc_0x10:
	  mr        r0, r8
	  lhz       r7, 0x0(r9)
	  lhz       r8, 0x0(r10)
	  cmplw     r8, r0
	  bne+      .loc_0x10
	  rlwinm    r0,r8,16,0,15
	  or        r0, r0, r7
	  stw       r0, 0x0(r5)
	  lwz       r5, -0x714C(r13)
	  addi      r9, r5, 0x46
	  lhz       r7, 0x46(r5)
	  addi      r8, r5, 0x44

	.loc_0x40:
	  mr        r0, r7
	  lhz       r5, 0x0(r8)
	  lhz       r7, 0x0(r9)
	  cmplw     r7, r0
	  bne+      .loc_0x40
	  rlwinm    r0,r7,16,0,15
	  or        r0, r0, r5
	  stw       r0, 0x0(r6)
	  lwz       r5, -0x714C(r13)
	  addi      r8, r5, 0x4A
	  lhz       r6, 0x4A(r5)
	  addi      r7, r5, 0x48

	.loc_0x70:
	  mr        r0, r6
	  lhz       r5, 0x0(r7)
	  lhz       r6, 0x0(r8)
	  cmplw     r6, r0
	  bne+      .loc_0x70
	  rlwinm    r0,r6,16,0,15
	  or        r0, r0, r5
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x714C(r13)
	  addi      r7, r3, 0x4E
	  lhz       r5, 0x4E(r3)
	  addi      r6, r3, 0x4C

	.loc_0xA0:
	  mr        r0, r5
	  lhz       r3, 0x0(r6)
	  lhz       r5, 0x0(r7)
	  cmplw     r5, r0
	  bne+      .loc_0xA0
	  rlwinm    r0,r5,16,0,15
	  or        r0, r0, r3
	  stw       r0, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
u32 GXReadClksPerVtx(void)
{
	// UNUSED FUNCTION
}
