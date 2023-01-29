#include "types.h"
#include "Dolphin/pad.h"
#include "Dolphin/math.h"

typedef struct PADClampRegion {
	u8 minTrigger;
	u8 maxTrigger;
	s8 minStick;
	s8 maxStick;
	s8 xyStick;
	s8 minSubstick;
	s8 maxSubstick;
	s8 xySubstick;
	s8 radStick;
	s8 radSubstick;
} PADClampRegion;

static const PADClampRegion ClampRegion = {
	// Triggers
	30,
	180,

	// Left stick
	15,
	72,
	40,

	// Right stick
	15,
	59,
	31,

	// Stick radii
	56,
	44,
};

/*
 * --INFO--
 * Address:	800F3048
 * Size:	000130
 */
void ClampStick(s8* px, s8* py, s8 max, s8 xy, s8 min)
{
	int x = *px;
	int y = *py;
	int signX;
	int signY;
	int d;

	if (0 <= x) {
		signX = 1;
	} else {
		signX = -1;
		x     = -x;
	}

	if (0 <= y) {
		signY = 1;
	} else {
		signY = -1;
		y     = -y;
	}

	if (x <= min) {
		x = 0;
	} else {
		x -= min;
	}
	if (y <= min) {
		y = 0;
	} else {
		y -= min;
	}

	if (x == 0 && y == 0) {
		*px = *py = 0;
		return;
	}

	if (xy * y <= xy * x) {
		d = xy * x + (max - xy) * y;
		if (xy * max < d) {
			x = (s8)(xy * max * x / d);
			y = (s8)(xy * max * y / d);
		}
	} else {
		d = xy * y + (max - xy) * x;
		if (xy * max < d) {
			x = (s8)(xy * max * x / d);
			y = (s8)(xy * max * y / d);
		}
	}

	*px = (s8)(signX * x);
	*py = (s8)(signY * y);
}

/*
 * --INFO--
 * Address:	800F3178
 * Size:	0001A8
 */
void ClampCircle(s8* px, s8* py, s8 radius, s8 min)
{
	int x = *px;
	int y = *py;
	int squared;
	int length;

	if (-min < x && x < min) {
		x = 0;
	} else if (0 < x) {
		x -= min;
	} else {
		x += min;
	}

	if (-min < y && y < min) {
		y = 0;
	} else if (0 < y) {
		y -= min;
	} else {
		y += min;
	}

	squared = x * x + y * y;
	if (radius * radius < squared) {
		length = dolsqrtf(squared); // regswaps
		x      = (x * radius) / length;
		y      = (y * radius) / length;
	}

	*px = x;
	*py = y;
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  extsb     r6, r6
	  neg       r7, r6
	  lbz       r0, 0x0(r3)
	  lbz       r9, 0x0(r4)
	  extsb     r0, r0
	  cmpw      r7, r0
	  extsb     r9, r9
	  bge-      .loc_0x34
	  cmpw      r0, r6
	  bge-      .loc_0x34
	  li        r8, 0
	  b         .loc_0x48

	.loc_0x34:
	  cmpwi     r0, 0
	  ble-      .loc_0x44
	  sub       r8, r0, r6
	  b         .loc_0x48

	.loc_0x44:
	  add       r8, r0, r6

	.loc_0x48:
	  cmpw      r7, r9
	  bge-      .loc_0x60
	  cmpw      r9, r6
	  bge-      .loc_0x60
	  li        r9, 0
	  b         .loc_0x74

	.loc_0x60:
	  cmpwi     r9, 0
	  ble-      .loc_0x70
	  sub       r9, r9, r6
	  b         .loc_0x74

	.loc_0x70:
	  add       r9, r9, r6

	.loc_0x74:
	  extsb     r7, r5
	  mullw     r6, r8, r8
	  mullw     r5, r9, r9
	  mullw     r0, r7, r7
	  add       r5, r6, r5
	  cmpw      r0, r5
	  bge-      .loc_0x190
	  xoris     r5, r5, 0x8000
	  lfd       f7, -0x6BF0(r2)
	  stw       r5, 0x3C(r1)
	  lis       r0, 0x4330
	  lfs       f0, -0x6C08(r2)
	  stw       r0, 0x38(r1)
	  lfd       f1, 0x38(r1)
	  fsubs     f1, f1, f7
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x164
	  stw       r5, 0x3C(r1)
	  lfd       f6, -0x6C00(r2)
	  stw       r0, 0x38(r1)
	  lfd       f5, -0x6BF8(r2)
	  lfd       f0, 0x38(r1)
	  stw       r5, 0x34(r1)
	  fsubs     f0, f0, f7
	  stw       r0, 0x30(r1)
	  fsqrte    f3, f0
	  lfd       f0, 0x30(r1)
	  stw       r5, 0x2C(r1)
	  fsubs     f2, f0, f7
	  fmul      f1, f3, f3
	  stw       r0, 0x28(r1)
	  fmul      f4, f6, f3
	  lfd       f0, 0x28(r1)
	  fmul      f1, f2, f1
	  stw       r5, 0x24(r1)
	  fsubs     f3, f0, f7
	  stw       r0, 0x20(r1)
	  fsub      f1, f5, f1
	  lfd       f0, 0x20(r1)
	  stw       r5, 0x1C(r1)
	  fmul      f4, f4, f1
	  stw       r0, 0x18(r1)
	  fsubs     f2, f0, f7
	  lfd       f0, 0x18(r1)
	  fmul      f1, f4, f4
	  fmul      f4, f6, f4
	  fmul      f1, f3, f1
	  fsubs     f0, f0, f7
	  fsub      f1, f5, f1
	  fmul      f3, f4, f1
	  fmul      f1, f3, f3
	  fmul      f3, f6, f3
	  fmul      f1, f2, f1
	  fsub      f1, f5, f1
	  fmul      f1, f3, f1
	  fmul      f0, f0, f1
	  frsp      f0, f0
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x14(r1)
	  b         .loc_0x174

	.loc_0x164:
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f7

	.loc_0x174:
	  fctiwz    f0, f0
	  mullw     r5, r8, r7
	  stfd      f0, 0x18(r1)
	  lwz       r6, 0x1C(r1)
	  mullw     r0, r9, r7
	  divw      r8, r5, r6
	  divw      r9, r0, r6

	.loc_0x190:
	  extsb     r0, r8
	  stb       r0, 0x0(r3)
	  extsb     r0, r9
	  stb       r0, 0x0(r4)
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
inline void ClampTrigger(u8* trigger, u8 min, u8 max)
{
	if (*trigger <= min) {
		*trigger = 0;
	} else {
		if (max < *trigger) {
			*trigger = max;
		}
		*trigger -= min;
	}

	/*
	 * --INFO--
	 * Address:	800F3320
	 * Size:	000114
	 */
	void PADClamp(PADStatus * status)
	{
		int i;
		for (i = 0; i < PAD_CHANMAX; i++, status++) {
			if (status->err != PAD_ERR_NONE) {
				continue;
			}

			ClampStick(&status->stickX, &status->stickY, ClampRegion.maxStick, ClampRegion.xyStick, ClampRegion.minStick);
			ClampStick(&status->substickX, &status->substickY, ClampRegion.maxSubstick, ClampRegion.xySubstick, ClampRegion.minSubstick);
			ClampTrigger(&status->triggerLeft, ClampRegion.minTrigger, ClampRegion.maxTrigger);
			ClampTrigger(&status->triggerRight, ClampRegion.minTrigger, ClampRegion.maxTrigger);
		}
	}

	/*
	 * --INFO--
	 * Address:	800F3434
	 * Size:	00010C
	 */
	void PADClampCircle(PADStatus * status)
	{
		int i;
		for (i = 0; i < 4; ++i, status++) {
			if (status->err != PAD_ERR_NONE) {
				continue;
			}

			ClampCircle(&status->stickX, &status->stickY, ClampRegion.radStick, ClampRegion.minStick);
			ClampCircle(&status->substickX, &status->substickY, ClampRegion.radSubstick, ClampRegion.minSubstick);
			ClampTrigger(&status->triggerLeft, ClampRegion.minTrigger, ClampRegion.maxTrigger);
			ClampTrigger(&status->triggerRight, ClampRegion.minTrigger, ClampRegion.maxTrigger);
		}
	}
