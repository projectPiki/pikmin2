#include "JSystem/JAS/JASOscillator.h"
#include "JSystem/JAS/JASDriver.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global relTableSampleCell__13JASOscillator
    relTableSampleCell__13JASOscillator:
        .float 1.0
        .4byte 0x3F7871F8
        .4byte 0x3F480193
        .4byte 0x3F0BD912
        .4byte 0x3ECCB189
        .4byte 0x3E942118
        .4byte 0x3E5931CA
        .4byte 0x3E214163
        .4byte 0x3DE6A1A5
        .4byte 0x3DA7814E
        .4byte 0x3D6D81E4
        .4byte 0x3D32C16E
        .4byte 0x3CFC81FC
        .4byte 0x3CC2418E
        .4byte 0x3C7A0225
        .4byte 0x3C160129
        .4byte 0x00000000
    .global relTableSqRoot__13JASOscillator
    relTableSqRoot__13JASOscillator:
        .float 1.0
        .4byte 0x3F60FFFC
        .4byte 0x3F440000
        .4byte 0x3F28FFFC
        .4byte 0x3F100000
        .4byte 0x3EF1FFF8
        .4byte 0x3EC80000
        .4byte 0x3EA1FFF8
        .float 0.25
        .4byte 0x3E43FFEF
        .4byte 0x3E100000
        .4byte 0x3DC7FFF9
        .4byte 0x3D800000
        .4byte 0x3D0FFFF3
        .4byte 0x3C800000
        .4byte 0x3B800000
        .4byte 0x00000000
    .global relTableSquare__13JASOscillator
    relTableSquare__13JASOscillator:
        .float 1.0
        .4byte 0x3F77DEF8
        .4byte 0x3F6F774B
        .4byte 0x3F66C15D
        .4byte 0x3F5DB3D0
        .4byte 0x3F544391
        .4byte 0x3F4A62BB
        .4byte 0x3F400000
        .4byte 0x3F3504F7
        .4byte 0x3F295400
        .4byte 0x3F1CC469
        .4byte 0x3F0F1BBD
        .float 0.5
        .4byte 0x3EDDB3E1
        .4byte 0x3EB504E6
        .float 0.25
        .4byte 0x00000000
    .global oscTableForceStop__13JASOscillator
    oscTableForceStop__13JASOscillator:
        .4byte 0x0000000F
        .4byte 0x0000000F
        .4byte 0x00000000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516DD8
    lbl_80516DD8:
        .4byte 0x00000000
    .global lbl_80516DDC
    lbl_80516DDC:
        .float 1.0
    .global lbl_80516DE0
    lbl_80516DE0:
        .4byte 0x42A00000
    .global lbl_80516DE4
    lbl_80516DE4:
        .4byte 0x44160000
    .global lbl_80516DE8
    lbl_80516DE8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516DF0
    lbl_80516DF0:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_80516DF8
    lbl_80516DF8:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516E00
    lbl_80516E00:
        .4byte 0x41800000
        .4byte 0x00000000
    .global lbl_80516E08
    lbl_80516E08:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800A2B78
 * Size:	000034
 */
void JASOscillator::init()
{
	m_data = nullptr;
	_1C    = 0;
	_1D    = 0;
	_18    = 0;
	_04    = 0.0f;
	_08    = 0.0f;
	_0C    = 0.0f;
	_10    = 0.0f;
	_1A    = 0;
	_14    = 0.0f;
}

/*
 * --INFO--
 * Address:	800A2BAC
 * Size:	000088
 */
void JASOscillator::initStart(const Data* data)
{
	if (!data) {
		_1C = 0;
	} else {
		_1C    = 1;
		m_data = data;
		_1A    = 0;
		if (!m_data->_08) {
			_08 = 0.0f;
		} else {
			_18 = 0;
			_04 = 0.0f;
			_0C = 0.0f;
			_04 -= m_data->_04;
			incCounter();
		}
	}
}

/*
 * --INFO--
 * Address:	800A2C34
 * Size:	0000C8
 */
void JASOscillator::incCounter()
{
	const short* v1;
	switch (_1C) {
	case 0:
	case 2:
		return;
	case 1:
		break;
	}
	if (_1C == 3) {
		v1 = m_data->_0C;
	} else if (_1C == 4) {
		v1 = oscTableForceStop;
	} else {
		v1 = m_data->_08;
	}
	if (v1 == nullptr && _1C != 5) {
		_08 = 1.0f;
	} else {
		if (_1C == 4) {
			_04 -= 1.0f;
		} else {
			_04 -= m_data->_04;
		}
		calc(v1);
	}
}

/*
 * --INFO--
 * Address:	800A2CFC
 * Size:	00002C
 */
f32 JASOscillator::getValue() const
{
	if (_1C == 0) {
		return 1.0f;
	}
	return _08 * m_data->_10 + m_data->_14;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JASOscillator::forceStop()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A2D28
 * Size:	000168
 */
bool JASOscillator::release()
{
	if (_1C == 4) {
		return false;
	}
	if (m_data->_08 != m_data->_0C) {
		_18 = 0;
		_04 = 0.0f;
		_0C = _08;
	}
	if (m_data->_0C == nullptr && _1A == 0) {
		_1A = 0x10;
	}
	if (_1A != 0) {
		_1C    = 5;
		_1D    = _1A >> 0xE;
		u16 v1 = (_1A & 0x3FFF ^ 0x80000000);
		_04    = ((JASDriver::getDacRate() / 80.0f) / 600.0f) * v1;
		if (_04 < 1.0f) {
			_04 = 1.0f;
		}
		_14 = _04;
		_0C = 0.0f;
		if (_1D == 0) {
			_10 = (_0C - _08) / _04;
		} else {
			_10 = _0C - _08;
		}
	} else {
		_1C = 3;
	}
	return true;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 4
	bne      lbl_800A2D58
	li       r3, 0
	b        lbl_800A2E74

lbl_800A2D58:
	lwz      r4, 0(r31)
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	cmplw    r3, r0
	beq      lbl_800A2D84
	li       r0, 0
	lfs      f0, lbl_80516DD8@sda21(r2)
	sth      r0, 0x18(r31)
	stfs     f0, 4(r31)
	lfs      f0, 8(r31)
	stfs     f0, 0xc(r31)

lbl_800A2D84:
	lwz      r3, 0(r31)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_800A2DA8
	lhz      r0, 0x1a(r31)
	cmplwi   r0, 0
	bne      lbl_800A2DA8
	li       r0, 0x10
	sth      r0, 0x1a(r31)

lbl_800A2DA8:
	lhz      r0, 0x1a(r31)
	cmplwi   r0, 0
	beq      lbl_800A2E68
	li       r3, 5
	lis      r0, 0x4330
	stb      r3, 0x1c(r31)
	lfd      f1, lbl_80516DE8@sda21(r2)
	lhz      r3, 0x1a(r31)
	stw      r0, 8(r1)
	rlwinm   r0, r3, 0x12, 0x1e, 0x1f
	stb      r0, 0x1d(r31)
	lhz      r0, 0x1a(r31)
	clrlwi   r0, r0, 0x12
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f31, f0, f1
	bl       getDacRate__9JASDriverFv
	lfs      f0, lbl_80516DE0@sda21(r2)
	lfs      f2, lbl_80516DE4@sda21(r2)
	fdivs    f1, f1, f0
	lfs      f0, lbl_80516DDC@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f31, f31, f1
	stfs     f31, 4(r31)
	lfs      f1, 4(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_800A2E1C
	stfs     f0, 4(r31)

lbl_800A2E1C:
	lfs      f1, 4(r31)
	lfs      f0, lbl_80516DD8@sda21(r2)
	stfs     f1, 0x14(r31)
	stfs     f0, 0xc(r31)
	lbz      r0, 0x1d(r31)
	cmplwi   r0, 0
	bne      lbl_800A2E54
	lfs      f2, 0xc(r31)
	lfs      f1, 8(r31)
	lfs      f0, 4(r31)
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x10(r31)
	b        lbl_800A2E70

lbl_800A2E54:
	lfs      f1, 0xc(r31)
	lfs      f0, 8(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r31)
	b        lbl_800A2E70

lbl_800A2E68:
	li       r0, 3
	stb      r0, 0x1c(r31)

lbl_800A2E70:
	li       r3, 1

lbl_800A2E74:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2E90
 * Size:	000374
 */
f32 JASOscillator::calc(const short*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stmw     r27, 0x1c(r1)
	lis      r5, relTableSampleCell__13JASOscillator@ha
	lfs      f31, lbl_80516DD8@sda21(r2)
	mr       r29, r3
	mr       r30, r4
	addi     r31, r5, relTableSampleCell__13JASOscillator@l
	b        lbl_800A3038

lbl_800A2EC8:
	lhz      r0, 0x18(r29)
	lfs      f0, 0xc(r29)
	mulli    r3, r0, 3
	stfs     f0, 8(r29)
	lbz      r0, 0x1c(r29)
	cmplwi   r0, 5
	bne      lbl_800A2EF0
	li       r0, 0
	stb      r0, 0x1c(r29)
	b        lbl_800A3048

lbl_800A2EF0:
	slwi     r0, r3, 1
	add      r3, r30, r0
	lha      r4, 0(r3)
	lha      r28, 2(r3)
	cmpwi    r4, 0xd
	lha      r27, 4(r3)
	bne      lbl_800A2F14
	sth      r27, 0x18(r29)
	b        lbl_800A3038

lbl_800A2F14:
	cmpwi    r4, 0xf
	bne      lbl_800A2F28
	li       r0, 0
	stb      r0, 0x1c(r29)
	b        lbl_800A3048

lbl_800A2F28:
	cmpwi    r4, 0xe
	bne      lbl_800A2F50
	li       r0, 2
	stb      r0, 0x1c(r29)
	lwz      r3, 0(r29)
	lfs      f2, 8(r29)
	lfs      f1, 0x10(r3)
	lfs      f0, 0x14(r3)
	fmadds   f1, f2, f1, f0
	b        lbl_800A31E0

lbl_800A2F50:
	extsh.   r0, r28
	stb      r4, 0x1d(r29)
	bne      lbl_800A2F94
	xoris    r3, r27, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_80516DE8@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80516DF0@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0xc(r29)
	lhz      r3, 0x18(r29)
	addi     r0, r3, 1
	sth      r0, 0x18(r29)
	b        lbl_800A3038

lbl_800A2F94:
	bl       getDacRate__9JASDriverFv
	lfs      f0, lbl_80516DE0@sda21(r2)
	lis      r3, 0x4330
	xoris    r0, r27, 0x8000
	xoris    r4, r28, 0x8000
	fdivs    f2, f1, f0
	lfs      f1, lbl_80516DE4@sda21(r2)
	stw      r0, 0x14(r1)
	lfd      f3, lbl_80516DE8@sda21(r2)
	stw      r3, 0x10(r1)
	lfs      f0, lbl_80516DF0@sda21(r2)
	fdivs    f4, f2, f1
	lfd      f1, 0x10(r1)
	stw      r4, 0xc(r1)
	stw      r3, 8(r1)
	lfd      f2, 8(r1)
	fsubs    f1, f1, f3
	fsubs    f2, f2, f3
	fdivs    f0, f1, f0
	fmuls    f1, f2, f4
	stfs     f1, 4(r29)
	lfs      f1, 4(r29)
	stfs     f1, 0x14(r29)
	stfs     f0, 0xc(r29)
	lbz      r0, 0x1d(r29)
	cmplwi   r0, 0
	bne      lbl_800A301C
	lfs      f2, 0xc(r29)
	lfs      f1, 8(r29)
	lfs      f0, 4(r29)
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x10(r29)
	b        lbl_800A302C

lbl_800A301C:
	lfs      f1, 0xc(r29)
	lfs      f0, 8(r29)
	fsubs    f0, f1, f0
	stfs     f0, 0x10(r29)

lbl_800A302C:
	lhz      r3, 0x18(r29)
	addi     r0, r3, 1
	sth      r0, 0x18(r29)

lbl_800A3038:
	lfs      f0, 4(r29)
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	beq      lbl_800A2EC8

lbl_800A3048:
	lwz      r3, 0(r29)
	lfs      f1, lbl_80516DD8@sda21(r2)
	lfs      f0, 0x10(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_800A3064
	lfs      f1, 0x14(r3)
	b        lbl_800A31E0

lbl_800A3064:
	lfd      f0, lbl_80516DF8@sda21(r2)
	lfs      f2, 0x14(r29)
	fcmpu    cr0, f0, f2
	bne      lbl_800A3084
	lfs      f0, 0xc(r29)
	fmr      f2, f0
	stfs     f0, 8(r29)
	b        lbl_800A31D0

lbl_800A3084:
	lbz      r0, 0x1d(r29)
	cmplwi   r0, 0
	beq      lbl_800A309C
	lfs      f31, 0x10(r29)
	fcmpu    cr0, f1, f31
	bne      lbl_800A30B4

lbl_800A309C:
	lfs      f2, 0x10(r29)
	lfs      f1, 4(r29)
	lfs      f0, 0xc(r29)
	fnmsubs  f2, f2, f1, f0
	stfs     f2, 8(r29)
	b        lbl_800A31D0

lbl_800A30B4:
	cmplwi   r0, 3
	beq      lbl_800A30CC
	cmplwi   r0, 1
	beq      lbl_800A30CC
	cmplwi   r0, 2
	bne      lbl_800A31C0

lbl_800A30CC:
	cmpwi    r0, 2
	li       r27, 0
	beq      lbl_800A3100
	bge      lbl_800A30E8
	cmpwi    r0, 1
	bge      lbl_800A30F8
	b        lbl_800A3104

lbl_800A30E8:
	cmpwi    r0, 4
	bge      lbl_800A3104
	addi     r27, r31, 0
	b        lbl_800A3104

lbl_800A30F8:
	addi     r27, r31, 0x88
	b        lbl_800A3104

lbl_800A3100:
	addi     r27, r31, 0x44

lbl_800A3104:
	lfs      f0, lbl_80516DD8@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800A312C
	lfs      f0, 4(r29)
	lfs      f1, lbl_80516DDC@sda21(r2)
	fdivs    f0, f0, f2
	lfs      f2, lbl_80516E00@sda21(r2)
	fsubs    f0, f1, f0
	fmuls    f30, f2, f0
	b        lbl_800A313C

lbl_800A312C:
	lfs      f0, 4(r29)
	lfs      f1, lbl_80516E00@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f30, f1, f0

lbl_800A313C:
	fmr      f1, f30
	bl       __cvt_fp2unsigned
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f1, lbl_80516E08@sda21(r2)
	cmplwi   r3, 0x10
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fsubs    f4, f30, f0
	blt      lbl_800A3170
	li       r3, 0xf
	lfs      f4, lbl_80516DDC@sda21(r2)

lbl_800A3170:
	slwi     r0, r3, 2
	lfs      f3, 0x10(r29)
	add      r3, r27, r0
	lfs      f0, lbl_80516DD8@sda21(r2)
	lfsx     f2, r27, r0
	lfs      f1, 4(r3)
	fcmpo    cr0, f3, f0
	fsubs    f0, f1, f2
	fmadds   f0, f4, f0, f2
	fmuls    f0, f31, f0
	fabs     f1, f0
	bge      lbl_800A31AC
	lfs      f0, 0xc(r29)
	fadds    f2, f0, f1
	b        lbl_800A31B8

lbl_800A31AC:
	fsubs    f0, f3, f1
	lfs      f1, 0xc(r29)
	fsubs    f2, f1, f0

lbl_800A31B8:
	stfs     f2, 8(r29)
	b        lbl_800A31D0

lbl_800A31C0:
	lfs      f1, 4(r29)
	lfs      f0, 0xc(r29)
	fnmsubs  f2, f31, f1, f0
	stfs     f2, 8(r29)

lbl_800A31D0:
	lwz      r3, 0(r29)
	lfs      f1, 0x10(r3)
	lfs      f0, 0x14(r3)
	fmadds   f1, f2, f1, f0

lbl_800A31E0:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}
