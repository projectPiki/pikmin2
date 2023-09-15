#include "types.h"
#include "JSystem/JAudio/DSP.h"

static volatile int flag;
// static u32 waitflag;
// static u32 d_waitflag;
static u16 DSP_MIXERLEVEL = 0x4000;

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void DSPSendCommands(u32* p1, u32 p2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void DSPReleaseHalt3(u32 p1, u16 p2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AA760
 * Size:	000048
 */
void DSPReleaseHalt2(u32 msg)
{
	u32 msgs[5];
	msgs[0] = (msg << 16) | DSP_CreateMap2(msg);
	DSPSendCommands2__FPUlUlPFUs_v(msgs, 0, NULL);

	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x4C7C
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  rlwimi    r0,r31,16,0,15
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  bl        0x270
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
 * Size:	000034
 */
void DSPReleaseHalt()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void DSPWaitFinish()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Dswap(u32 p1, u32 p2, u32 p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Dmix(u32 p1, u32 p2, u32 p3, short p4)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Dcopy(u32 p1, u32 p2, u32 p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void DloadBuffer1(u32 p1, u32 p2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void DloadBuffer(u32 p1, u32 p2, u32 p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void DsaveBuffer(u16 p1, u32 p2, u32 p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AA7C0
 * Size:	00000C
 */
void setup_callback(u16 p1) { flag = 0; }

/*
 * --INFO--
 * Address:	800AA7E0
 * Size:	000064
 */
void DsetupTable(u32 p1, u32 p2, u32 p3, u32 p4, u32 p5)
{
	u32 commands[5];
	commands[0] = p1 & 0xFFFF | 0x81000000;
	commands[1] = p2;
	commands[2] = p3;
	commands[3] = p4;
	commands[4] = p5;
	flag        = 1;
	DSPSendCommands2(commands, 5, setup_callback);
	while (flag != 0)
		;
}

/*
 * --INFO--
 * Address:	800AA860
 * Size:	000024
 */
void DsetMixerLevel(f32 mixerLevel) { DSP_MIXERLEVEL = 4096.0f * mixerLevel; }

/*
 * --INFO--
 * Address:	800AA8A0
 * Size:	000048
 */
void DsyncFrame(u32 p1, u32 p2, u32 p3)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  rlwinm    r3,r3,16,8,15
	  stw       r0, 0x24(r1)
	  oris      r3, r3, 0x8200
	  lhz       r0, -0x7EC8(r13)
	  stw       r4, 0xC(r1)
	  li        r4, 0x3
	  or        r0, r3, r0
	  addi      r3, r1, 0x8
	  stw       r5, 0x10(r1)
	  li        r5, 0
	  stw       r0, 0x8(r1)
	  bl        0x12C
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void wait_callback(u16 p1)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void DwaitFrame()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void DiplSec(u32 p1, void (*p2)(u16))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void DagbSec(u32 p1, void (*p2)(u16))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void dummy_callback(u16 p1)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void DsetDolbyDelay(u32 p1, u16 p2)
{
	// UNUSED FUNCTION
}
