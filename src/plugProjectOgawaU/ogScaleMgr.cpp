#include "types.h"

#include "og/Screen/ScaleMgr.h"
#include "sysMath.h"
#include "System.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DE68
    lbl_8051DE68:
        .float 1.0
    .global lbl_8051DE6C
    lbl_8051DE6C:
        .float 0.5
    .global lbl_8051DE70
    lbl_8051DE70:
        .4byte 0x41F00000
    .global lbl_8051DE74
    lbl_8051DE74:
        .4byte 0x3F4CCCCD
    .global lbl_8051DE78
    lbl_8051DE78:
        .4byte 0x00000000
    .global lbl_8051DE7C
    lbl_8051DE7C:
        .float 0.25
    .global lbl_8051DE80
    lbl_8051DE80:
        .4byte 0x420C0000
    .global lbl_8051DE84
    lbl_8051DE84:
        .4byte 0x3C23D70A
    .global lbl_8051DE88
    lbl_8051DE88:
        .4byte 0xC3A2F983
    .global lbl_8051DE8C
    lbl_8051DE8C:
        .4byte 0x43A2F983
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80328E04
 * Size:	000044
 */
ScaleMgr::ScaleMgr()
    : m_state(SCM_Unknown_0)
{
	setParam(1.0f, 1.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	80328E48
 * Size:	000048
 */
void ScaleMgr::up()
{
	m_state = SCM_Growing;
	setParam(0.5f, 30.0f, 0.8f);
	_18 = 0.0f;
}

/*
 * --INFO--
 * Address:	80328E90
 * Size:	000048
 */
void ScaleMgr::down()
{
	m_state = SCM_Shrinking;
	setParam(0.25f, 35.0f, 0.8f);
	_18 = 0.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
// void og::Screen::ScaleMgr::up(float)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80328ED8
 * Size:	000064
 */
void ScaleMgr::up(float p1, float periodModifier, float durationInSeconds, float p4)
{
	setParam(p1, periodModifier, durationInSeconds);
	_18 = p4;
	if (p4 < 0.01f) {
		m_state = SCM_Growing;
	} else {
		m_state = SCM_OtherGrowingMaybe;
	}
}

/*
 * --INFO--
 * Address:	80328F3C
 * Size:	000028
 */
void ScaleMgr::down(float p1, float periodModifier, float durationInSeconds)
{
	m_state = SCM_Shrinking;
	setParam(p1, periodModifier, durationInSeconds);
}

/*
 * --INFO--
 * Address:	80328F64
 * Size:	000020
 */
void ScaleMgr::setParam(float p1, float periodModifier, float durationInSeconds)
{
	m_elapsedSeconds    = 0.0f;
	m_scale             = 1.0f;
	_0C                 = p1;
	m_periodModifier    = periodModifier;
	m_durationInSeconds = durationInSeconds;
}

/*
 * --INFO--
 * Address:	80328F84
 * Size:	00020C
 */
float ScaleMgr::calc()
{
	float fVar1;
	float fVar2;
	State SVar3;

	switch (m_state) {
	case SCM_Unknown_0:
		m_scale = 1.0f;
		break;
	case SCM_Growing:
		m_elapsedSeconds += sys->m_secondsPerFrame;
		fVar1 = m_elapsedSeconds;
		if (fVar1 <= m_durationInSeconds) {
			fVar2 = fVar1 * m_periodModifier;
			pikmin2_sinf(fVar2);
			// if (0.0 <= fVar2) {
			// 	fVar2 = JSystem::sincosTable___5JMath[(int)(fVar2 *
			// 325.9493) & 0x7ff].sine;
			// }
			// else {
			// 	fVar2 = -JSystem::sincosTable___5JMath[(int)(fVar2 *
			// -325.9493) & 0x7ff].sine;
			// }
			m_scale = (m_durationInSeconds - fVar1) * (_0C * fVar2 + _0C) + 1.0f;
		} else {
			m_state          = SCM_Unknown_0;
			m_scale          = 1.0f;
			m_elapsedSeconds = 0.0f;
		}
		break;
	case SCM_Shrinking:
		m_elapsedSeconds += sys->m_secondsPerFrame;
		fVar1 = m_elapsedSeconds;
		if (fVar1 <= m_durationInSeconds) {
			fVar2 = fVar1 * m_periodModifier;
			pikmin2_sinf(fVar2); // This should get inlined...
			// if (0.0 <= fVar2) {
			// 	fVar2 = JMath::sincosTable_[(int)(fVar2 * 325.9493) &
			// 0x7ff].sine;
			// }
			// else {
			// 	fVar2 = -JMath::sincosTable___5JMath[(int)(fVar2 *
			// -325.9493) & 0x7ff].sine;
			// }
			m_scale = -((m_durationInSeconds - fVar1) * (_0C * fVar2 + _0C) - 1.0f);
		} else {
			m_state          = SCM_Unknown_0;
			m_scale          = 1.0f;
			m_elapsedSeconds = 0.0f;
		}
		break;
	case SCM_OtherGrowingMaybe:
		m_scale = 1.0f;
		_18     = _18 - sys->m_secondsPerFrame;
		if (_18 < 0.0f) {
			m_state = SCM_Growing;
			_18     = 0.0f;
		}

		break;
	default:
		m_scale = 1.0f;
	}
	return m_scale;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xFC
	  bge-      .loc_0x24
	  cmpwi     r0, 0
	  beq-      .loc_0x30
	  bge-      .loc_0x3C
	  b         .loc_0x1F8

	.loc_0x24:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x1F8
	  b         .loc_0x1BC

	.loc_0x30:
	  lfs       f0, -0x4F8(r2)
	  stfs      f0, 0x8(r3)
	  b         .loc_0x200

	.loc_0x3C:
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r3)
	  lfs       f2, 0x4(r3)
	  lfs       f4, 0x14(r3)
	  fcmpo     cr0, f2, f4
	  ble-      .loc_0x7C
	  li        r0, 0
	  lfs       f1, -0x4F8(r2)
	  stw       r0, 0x0(r3)
	  lfs       f0, -0x4E8(r2)
	  stfs      f1, 0x8(r3)
	  stfs      f0, 0x4(r3)
	  b         .loc_0x200

	.loc_0x7C:
	  lfs       f1, 0x10(r3)
	  lfs       f0, -0x4E8(r2)
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xBC
	  lfs       f0, -0x4D8(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0xE0

	.loc_0xBC:
	  lfs       f0, -0x4D4(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0xE0:
	  lfs       f3, 0xC(r3)
	  fsubs     f2, f4, f2
	  lfs       f0, -0x4F8(r2)
	  fmadds    f1, f3, f1, f3
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x8(r3)
	  b         .loc_0x200

	.loc_0xFC:
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r3)
	  lfs       f2, 0x4(r3)
	  lfs       f4, 0x14(r3)
	  fcmpo     cr0, f2, f4
	  ble-      .loc_0x13C
	  li        r0, 0
	  lfs       f1, -0x4F8(r2)
	  stw       r0, 0x0(r3)
	  lfs       f0, -0x4E8(r2)
	  stfs      f1, 0x8(r3)
	  stfs      f0, 0x4(r3)
	  b         .loc_0x200

	.loc_0x13C:
	  lfs       f1, 0x10(r3)
	  lfs       f0, -0x4E8(r2)
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x17C
	  lfs       f0, -0x4D8(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x1A0

	.loc_0x17C:
	  lfs       f0, -0x4D4(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x1A0:
	  lfs       f3, 0xC(r3)
	  fsubs     f2, f4, f2
	  lfs       f0, -0x4F8(r2)
	  fmadds    f1, f3, f1, f3
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x8(r3)
	  b         .loc_0x200

	.loc_0x1BC:
	  lfs       f1, -0x4F8(r2)
	  lfs       f0, -0x4E8(r2)
	  stfs      f1, 0x8(r3)
	  lwz       r4, -0x6514(r13)
	  lfs       f2, 0x18(r3)
	  lfs       f1, 0x54(r4)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x18(r3)
	  lfs       f1, 0x18(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x200
	  li        r0, 0x1
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x18(r3)
	  b         .loc_0x200

	.loc_0x1F8:
	  lfs       f0, -0x4F8(r2)
	  stfs      f0, 0x8(r3)

	.loc_0x200:
	  lfs       f1, 0x8(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace Screen
} // namespace og
