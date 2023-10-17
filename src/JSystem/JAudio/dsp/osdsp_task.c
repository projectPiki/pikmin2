#include "JSystem/JAudio/DSP.h"

static u8 DSP_prior_yield;
static int AUDIO_UPDATE_REQUEST;
DSPTaskInfo* DSP_prior_task;
static u32 sync_stack[3];

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DebugPrint_TaskInfo(DSPTaskInfo* task)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Check_Broken(DSPTaskInfo* task)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void Check_PriorBroken()
{
	// UNUSED FUNCTION
}

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus
/*
 * --INFO--
 * Address:	800AAD00
 * Size:	000304
 */
void __DSPHandler(__OSInterrupt interrupt, OSContext* context)
{
	OSContext funcContext;
	//__DSPRegs[5] = ((u16)(__DSPRegs[5]) & ~0x28) | 0x80;
	OSClearContext(&funcContext);
	OSSetCurrentContext(&funcContext);

	if (DSP_prior_yield == 1 || DSP_prior_yield == 0) {
		__DSP_curr_task = DSP_prior_task;
	}

	while (DSPCheckMailFromDSP() == 0)
		;
	u32 mail = DSPReadMailFromDSP();

	if ((__DSP_curr_task->flags & 2) && mail == 0xDCD10002) {
		mail = 0xDCD10003;
	}

	switch (mail) {
	case 0xDCD10000:
		__DSP_curr_task->state = 1;
		if (__DSP_curr_task == DSP_prior_task) {
			DSP_prior_yield = 1;
		}
		if (__DSP_curr_task->init_cb != nullptr) {
			__DSP_curr_task->init_cb(__DSP_curr_task);
		}
		break;
	case 0xDCD10001:
		__DSP_curr_task->state = 1;
		if (__DSP_curr_task == DSP_prior_task) {
			DSP_prior_yield = 1;
			Dsp_Update_Request();
		}
		if (__DSP_curr_task->res_cb != nullptr) {
			__DSP_curr_task->res_cb(__DSP_curr_task);
		}
		break;
	case 0xDCD10002:
		DSPSendMailToDSP(0xCDD10001);
		while (DSPCheckMailToDSP() != 0)
			;
		__DSP_curr_task->state = 2;
		if (__DSP_curr_task->next == nullptr && AUDIO_UPDATE_REQUEST) {
			__DSP_exec_task(__DSP_curr_task, DSP_prior_task);
			AUDIO_UPDATE_REQUEST = 0;
			__DSP_curr_task      = DSP_prior_task;
		} else {
			__DSP_exec_task(__DSP_curr_task, __DSP_curr_task->next);
			__DSP_curr_task = __DSP_curr_task->next;
		}
		break;
	case 0xDCD10003:
		if (__DSP_curr_task->done_cb) {
			__DSP_curr_task->done_cb(__DSP_curr_task);
		}
		DSPSendMailToDSP(0xCDD10001);
		while (DSPCheckMailToDSP() != 0)
			;
		__DSP_curr_task->state = 3;
		if (__DSP_curr_task->next == nullptr) {
			__DSP_exec_task(nullptr, DSP_prior_task);
			__DSP_remove_task(__DSP_curr_task);
			__DSP_curr_task = DSP_prior_task;
		} else {
			__DSP_exec_task(nullptr, __DSP_curr_task->next);
			__DSP_curr_task = __DSP_curr_task->next;
			__DSP_remove_task(__DSP_curr_task->prev);
		}
		break;
	case 0xDCD10004:
		if (__DSP_curr_task->req_cb != nullptr) {
			__DSP_curr_task->req_cb(__DSP_curr_task);
		}
		break;
	case 0xDCD10005:
		if (__DSP_first_task == nullptr || AUDIO_UPDATE_REQUEST) {
			DSPSendMailToDSP(0xCDD10003);
			while (DSPCheckMailToDSP() != 0)
				;
			AUDIO_UPDATE_REQUEST = 0;
			__DSP_curr_task      = DSP_prior_task;
			Dsp_Update_Request();
		} else {
			DSP_prior_yield = 3;
			DSPSendMailToDSP(0xCDD10001);
			while (DSPCheckMailToDSP() != 0)
				;
			__DSP_exec_task(DSP_prior_task, __DSP_first_task);
			__DSP_curr_task = __DSP_first_task;
		}
		break;
	}

	OSClearContext(&funcContext);
	OSSetCurrentContext(context);
	/*
	.loc_0x0:
	  stwu      r1, -0x2E0(r1)
	  mflr      r0
	  lis       r6, 0xCC00
	  stw       r0, 0x2E4(r1)
	  li        r0, -0x29
	  addi      r3, r1, 0x8
	  stw       r31, 0x2DC(r1)
	  mr        r31, r4
	  lhz       r5, 0x500A(r6)
	  rlwinm    r4,r5,0,16,31
	  and       r0, r4, r0
	  ori       r0, r0, 0x80
	  sth       r0, 0x500A(r6)
	  bl        0x42438
	  addi      r3, r1, 0x8
	  bl        0x42268
	  lbz       r0, -0x74C0(r13)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x58
	  lbz       r0, -0x74C0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x60

	.loc_0x58:
	  lwz       r0, -0x74B8(r13)
	  stw       r0, -0x723C(r13)

	.loc_0x60:
	  bl        0x2FF60
	  cmplwi    r3, 0
	  beq+      .loc_0x60
	  bl        0x2FF64
	  lwz       r5, -0x723C(r13)
	  lwz       r0, 0x8(r5)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x94
	  addis     r0, r3, 0x232F
	  cmplwi    r0, 0x2
	  bne-      .loc_0x94
	  lis       r3, 0xDCD1
	  addi      r3, r3, 0x3

	.loc_0x94:
	  lis       r4, 0xDCD1
	  addi      r0, r4, 0x3
	  cmpw      r3, r0
	  beq-      .loc_0x1BC
	  bge-      .loc_0xC4
	  addi      r0, r4, 0x1
	  cmpw      r3, r0
	  beq-      .loc_0x10C
	  bge-      .loc_0x148
	  cmpw      r3, r4
	  bge-      .loc_0xD8
	  b         .loc_0x2E0

	.loc_0xC4:
	  addi      r0, r4, 0x5
	  cmpw      r3, r0
	  beq-      .loc_0x264
	  bge-      .loc_0x2E0
	  b         .loc_0x248

	.loc_0xD8:
	  li        r4, 0x1
	  stw       r4, 0x0(r5)
	  lwz       r3, -0x723C(r13)
	  lwz       r0, -0x74B8(r13)
	  cmplw     r3, r0
	  bne-      .loc_0xF4
	  stb       r4, -0x74C0(r13)

	.loc_0xF4:
	  lwz       r12, 0x28(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x2E0
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E0

	.loc_0x10C:
	  li        r4, 0x1
	  stw       r4, 0x0(r5)
	  lwz       r3, -0x723C(r13)
	  lwz       r0, -0x74B8(r13)
	  cmplw     r3, r0
	  bne-      .loc_0x12C
	  stb       r4, -0x74C0(r13)
	  bl        0x258

	.loc_0x12C:
	  lwz       r3, -0x723C(r13)
	  lwz       r12, 0x2C(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x2E0
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E0

	.loc_0x148:
	  lis       r3, 0xCDD1
	  addi      r3, r3, 0x1
	  bl        0x2FE98
	  nop

	.loc_0x158:
	  bl        0x2FE58
	  cmplwi    r3, 0
	  bne+      .loc_0x158
	  lwz       r3, -0x723C(r13)
	  li        r0, 0x2
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x723C(r13)
	  lwz       r4, 0x38(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x1A8
	  lwz       r0, -0x74BC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x1A8
	  lwz       r4, -0x74B8(r13)
	  bl        0x2FFC0
	  lwz       r0, -0x74B8(r13)
	  li        r3, 0
	  stw       r3, -0x74BC(r13)
	  stw       r0, -0x723C(r13)
	  b         .loc_0x2E0

	.loc_0x1A8:
	  bl        0x2FFA8
	  lwz       r3, -0x723C(r13)
	  lwz       r0, 0x38(r3)
	  stw       r0, -0x723C(r13)
	  b         .loc_0x2E0

	.loc_0x1BC:
	  lwz       r12, 0x30(r5)
	  cmplwi    r12, 0
	  beq-      .loc_0x1D4
	  mr        r3, r5
	  mtctr     r12
	  bctrl

	.loc_0x1D4:
	  lis       r3, 0xCDD1
	  addi      r3, r3, 0x1
	  bl        0x2FE0C

	.loc_0x1E0:
	  bl        0x2FDD0
	  cmplwi    r3, 0
	  bne+      .loc_0x1E0
	  lwz       r3, -0x723C(r13)
	  li        r0, 0x3
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x723C(r13)
	  lwz       r4, 0x38(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x228
	  lwz       r4, -0x74B8(r13)
	  li        r3, 0
	  bl        0x2FF40
	  lwz       r3, -0x723C(r13)
	  bl        0x30304
	  lwz       r0, -0x74B8(r13)
	  stw       r0, -0x723C(r13)
	  b         .loc_0x2E0

	.loc_0x228:
	  li        r3, 0
	  bl        0x2FF24
	  lwz       r3, -0x723C(r13)
	  lwz       r3, 0x38(r3)
	  stw       r3, -0x723C(r13)
	  lwz       r3, 0x3C(r3)
	  bl        0x302DC
	  b         .loc_0x2E0

	.loc_0x248:
	  lwz       r12, 0x34(r5)
	  cmplwi    r12, 0
	  beq-      .loc_0x2E0
	  mr        r3, r5
	  mtctr     r12
	  bctrl
	  b         .loc_0x2E0

	.loc_0x264:
	  lwz       r0, -0x7240(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x27C
	  lwz       r0, -0x74BC(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x2AC

	.loc_0x27C:
	  lis       r3, 0xCDD1
	  addi      r3, r3, 0x3
	  bl        0x2FD64

	.loc_0x288:
	  bl        0x2FD28
	  cmplwi    r3, 0
	  bne+      .loc_0x288
	  lwz       r0, -0x74B8(r13)
	  li        r3, 0
	  stw       r3, -0x74BC(r13)
	  stw       r0, -0x723C(r13)
	  bl        0xDC
	  b         .loc_0x2E0

	.loc_0x2AC:
	  li        r0, 0x3
	  lis       r3, 0xCDD1
	  stb       r0, -0x74C0(r13)
	  addi      r3, r3, 0x1
	  bl        0x2FD2C

	.loc_0x2C0:
	  bl        0x2FCF0
	  cmplwi    r3, 0
	  bne+      .loc_0x2C0
	  lwz       r3, -0x74B8(r13)
	  lwz       r4, -0x7240(r13)
	  bl        0x2FE7C
	  lwz       r0, -0x7240(r13)
	  stw       r0, -0x723C(r13)

	.loc_0x2E0:
	  addi      r3, r1, 0x8
	  bl        0x42188
	  mr        r3, r31
	  bl        0x41FB8
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2E0
	  blr
	*/
}
#ifdef __cplusplus
}
#endif // ifdef __cplusplus

/*
 * --INFO--
 * Address:	800AB020
 * Size:	000050
 */
void DsyncFrame2(u32 p1, u32 p2, u32 p3)
{
	if (DSP_prior_yield != TRUE) {
		sync_stack[0]        = p1;
		sync_stack[1]        = p2;
		sync_stack[2]        = p3;
		AUDIO_UPDATE_REQUEST = TRUE;
	} else {
		DsyncFrame(p1, p2, p3);
		AUDIO_UPDATE_REQUEST = FALSE;
	}
}

/*
 * --INFO--
 * Address:	800AB080
 * Size:	000040
 */
void Dsp_Update_Request()
{
	if (AUDIO_UPDATE_REQUEST != 0) {
		DsyncFrame2(sync_stack[0], sync_stack[1], sync_stack[2]);
	}
}

/*
 * --INFO--
 * Address:	800AB0C0
 * Size:	000014
 */
BOOL Dsp_Running_Check() { return (DSP_prior_yield == TRUE); }

/*
 * --INFO--
 * Address:	800AB0E0
 * Size:	00000C
 */
void Dsp_Running_Start() { DSP_prior_yield = 1; }
