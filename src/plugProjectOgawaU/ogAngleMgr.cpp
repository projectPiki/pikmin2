#include "og/Screen/AngleMgr.h"

namespace og {
namespace Screen {

	/*
	 * --INFO--
	 * Address:	8033028C
	 * Size:	00002C
	 */
	AngleMgr::AngleMgr(void)
	{
		_00 = 0.0f;
		_04 = 0.0f;
		_08 = 0.0f;
		_0C = 0.3f;
		_10 = 1.0f;
		_14 = 0;
	}

	/*
	 * --INFO--
	 * Address:	803302B8
	 * Size:	000010
	 */
	void AngleMgr::init(float f1, float f2, float f3)
	{
		_00 = f1;
		_0C = f2;
		_10 = f3;
	}

	/*
	 * --INFO--
	 * Address:	803302C8
	 * Size:	000080
	 */
	void AngleMgr::chase(float f1, float f2)
	{
		{
			_08 = f1;
			while (_08 < 0.0f) {
				_08 += TAU;
			}
			while (_08 > TAU) {
				_08 -= TAU;
			}
			_04 = f2;
			if (_04 > HPI) {
				_04 = HPI;
			}
			if (_04 < NEG_HPI) {
				_04 = NEG_HPI;
			}
			_14 = 1;
		}
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000030
	 */
	void AngleMgr::reverseSpeed(float)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80330348
	 * Size:	0001A8
	 */
	double AngleMgr::calc(void)
	{
		return 1.0;
		/*
		.loc_0x0:
		  lwz       r0, 0x14(r3)
		  cmpwi     r0, 0x1
		  bne-      .loc_0x1A0
		  lfs       f2, 0x0(r3)
		  lfs       f1, 0x4(r3)
		  lfs       f0, -0x2F0(r2)
		  fadds     f1, f2, f1
		  stfs      f1, 0x0(r3)
		  lfs       f1, 0x0(r3)
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0x3C
		  lfs       f0, -0x2E4(r2)
		  fadds     f0, f1, f0
		  stfs      f0, 0x0(r3)
		  b         .loc_0x54

		.loc_0x3C:
		  lfs       f0, -0x2E4(r2)
		  fcmpo     cr0, f1, f0
		  cror      2, 0x1, 0x2
		  bne-      .loc_0x54
		  fsubs     f0, f1, f0
		  stfs      f0, 0x0(r3)

		.loc_0x54:
		  lfs       f2, 0x8(r3)
		  lfs       f1, 0x0(r3)
		  lfs       f0, -0x2D8(r2)
		  fsubs     f3, f2, f1
		  fabs      f1, f3
		  frsp      f2, f1
		  fcmpo     cr0, f2, f0
		  ble-      .loc_0xF8
		  lfs       f1, -0x2E4(r2)
		  lfs       f0, -0x2F0(r2)
		  fsubs     f2, f1, f2
		  fcmpo     cr0, f3, f0
		  ble-      .loc_0xC0
		  lfs       f1, 0x4(r3)
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x170
		  lfs       f0, 0x10(r3)
		  fmuls     f0, f1, f0
		  fabs      f0, f0
		  frsp      f0, f0
		  fcmpo     cr0, f2, f0
		  ble-      .loc_0x170
		  fneg      f1, f1
		  lfs       f0, 0xC(r3)
		  fmuls     f0, f1, f0
		  stfs      f0, 0x4(r3)
		  b         .loc_0x170

		.loc_0xC0:
		  lfs       f1, 0x4(r3)
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0x170
		  lfs       f0, 0x10(r3)
		  fmuls     f0, f1, f0
		  fabs      f0, f0
		  frsp      f0, f0
		  fcmpo     cr0, f2, f0
		  ble-      .loc_0x170
		  fneg      f1, f1
		  lfs       f0, 0xC(r3)
		  fmuls     f0, f1, f0
		  stfs      f0, 0x4(r3)
		  b         .loc_0x170

		.loc_0xF8:
		  lfs       f0, -0x2F0(r2)
		  fcmpo     cr0, f3, f0
		  ble-      .loc_0x13C
		  lfs       f1, 0x4(r3)
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0x170
		  lfs       f0, 0x10(r3)
		  fmuls     f0, f1, f0
		  fabs      f0, f0
		  frsp      f0, f0
		  fcmpo     cr0, f2, f0
		  ble-      .loc_0x170
		  fneg      f1, f1
		  lfs       f0, 0xC(r3)
		  fmuls     f0, f1, f0
		  stfs      f0, 0x4(r3)
		  b         .loc_0x170

		.loc_0x13C:
		  lfs       f1, 0x4(r3)
		  fcmpo     cr0, f1, f0
		  ble-      .loc_0x170
		  lfs       f0, 0x10(r3)
		  fmuls     f0, f1, f0
		  fabs      f0, f0
		  frsp      f0, f0
		  fcmpo     cr0, f2, f0
		  ble-      .loc_0x170
		  fneg      f1, f1
		  lfs       f0, 0xC(r3)
		  fmuls     f0, f1, f0
		  stfs      f0, 0x4(r3)

		.loc_0x170:
		  lfs       f1, 0x4(r3)
		  lfs       f0, -0x2D4(r2)
		  fabs      f1, f1
		  frsp      f1, f1
		  fcmpo     cr0, f1, f0
		  bge-      .loc_0x1A0
		  li        r0, 0x2
		  lfs       f0, -0x2F0(r2)
		  stw       r0, 0x14(r3)
		  lfs       f1, 0x8(r3)
		  stfs      f1, 0x0(r3)
		  stfs      f0, 0x4(r3)

		.loc_0x1A0:
		  lfs       f1, 0x0(r3)
		  blr
		*/
	}
} // namespace Screen
} // namespace og
