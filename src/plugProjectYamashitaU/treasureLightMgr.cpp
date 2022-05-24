#include "types.h"
#include "nans.h"
#include "Light.h"
#include "sysMath.h"

static const char beans[0xC] = "";
namespace TreasureLight {
/*
 * --INFO--
 * Address:	8013286C
 * Size:	000150
 */
Mgr::Mgr()
    : LightMgr("お宝ライト")
{
	m_float_pos               = 300.0f;
	m_float_offset            = 330.0f;
	m_lightObj_50             = new LightObj("メインライト", GX_LIGHT0, TYPE_2, JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
	m_lightObj_50->m_spotType = 3;
	m_lightObj_50->m_offset   = Vector3f(0.0f, -1.0f, 0.0f);
	this->registLightObj(m_lightObj_50);
	m_lightObj_54           = new LightObj("スペキュラ-ライト", GX_LIGHT7, TYPE_4, JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
	m_lightObj_54->m_kScale = 40.0f;
	this->registLightObj(m_lightObj_54);
	m_ambientLightColor.r = 0x32;
	m_ambientLightColor.g = 0x32;
	m_ambientLightColor.b = 0x32;
	m_ambientLightColor.a = 0xff;
}

/*
 * --INFO--
 * Address:	801329BC
 * Size:	000004
 */
void Mgr::update() { return; }

/*
 * --INFO--
 * Address:	801329C0
 * Size:	000044
 */
void Mgr::set(Graphics& param_1)
{
	setCommonProc();
	LightMgr::set(param_1);
}

/*
 * --INFO--
 * Address:	80132A04
 * Size:	000044
 */
void Mgr::set(Matrixf& param_1)
{
	setCommonProc();
	LightMgr::set(param_1);
}

/*
 * --INFO--
 * Address:	80132A48
 * Size:	000184
 */
void Mgr::setCommonProc()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stfd     f27, 0x20(r1)
	psq_st   f27, 40(r1), 0, qr0
	stfd     f26, 0x10(r1)
	psq_st   f26, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f2, lbl_805181E8@sda21(r2)
	lfs      f1, 0x58(r3)
	lfs      f0, 0x5c(r3)
	fmuls    f1, f2, f1
	lfs      f3, lbl_805181E4@sda21(r2)
	fmuls    f0, f2, f0
	fmuls    f26, f3, f1
	fmuls    f27, f3, f0
	fmr      f1, f26
	bl       pikmin2_sinf__Ff
	fmr      f31, f1
	fmr      f1, f27
	bl       pikmin2_cosf__Ff
	lfs      f0, lbl_805181EC@sda21(r2)
	fmuls    f0, f0, f1
	fmr      f1, f27
	fmuls    f30, f0, f31
	bl       pikmin2_sinf__Ff
	lfs      f0, lbl_805181EC@sda21(r2)
	fneg     f0, f0
	fmuls    f29, f0, f1
	fmr      f1, f26
	bl       pikmin2_cosf__Ff
	fmr      f31, f1
	fmr      f1, f27
	bl       pikmin2_cosf__Ff
	lfs      f0, lbl_805181EC@sda21(r2)
	fneg     f27, f29
	fneg     f28, f30
	fmuls    f1, f0, f1
	fmuls    f0, f27, f27
	fmuls    f31, f1, f31
	fmadds   f0, f28, f28, f0
	fneg     f26, f31
	fmadds   f1, f26, f26, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_805181D8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80132B3C
	lfs      f0, lbl_805181F0@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0

lbl_80132B3C:
	lwz      r3, 0x50(r31)
	lfs      f0, lbl_805181F4@sda21(r2)
	stfs     f30, 0x1c(r3)
	stfs     f29, 0x20(r3)
	stfs     f31, 0x24(r3)
	lwz      r3, 0x50(r31)
	stfs     f28, 0x28(r3)
	stfs     f27, 0x2c(r3)
	stfs     f26, 0x30(r3)
	lwz      r3, 0x50(r31)
	stfs     f0, 0x40(r3)
	lwz      r3, 0x54(r31)
	stfs     f30, 0x1c(r3)
	stfs     f29, 0x20(r3)
	stfs     f31, 0x24(r3)
	lwz      r3, 0x54(r31)
	stfs     f28, 0x28(r3)
	stfs     f27, 0x2c(r3)
	stfs     f26, 0x30(r3)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	psq_l    f27, 40(r1), 0, qr0
	lfd      f27, 0x20(r1)
	psq_l    f26, 24(r1), 0, qr0
	lfd      f26, 0x10(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80132BCC
 * Size:	000020
 */
void Mgr::drawDebugInfo(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       drawDebugInfo__8LightMgrFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace TreasureLight
