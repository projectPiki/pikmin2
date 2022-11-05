#include "Dolphin/math.h"
#include "System.h"
#include "types.h"
#include "LifeGaugeMgr.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_lifeGaugeMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047B238
    lbl_8047B238:
        .4byte 0x2F757365
        .4byte 0x722F5961
        .4byte 0x6D617368
        .4byte 0x6974612F
        .4byte 0x6172632F
        .4byte 0x67616D65
        .4byte 0x5465782E
        .4byte 0x737A7300
    .global lbl_8047B258
    lbl_8047B258:
        .4byte 0x6C696665
        .4byte 0x47617567
        .4byte 0x652E6274
        .4byte 0x69000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804AC308
    lbl_804AC308:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__13LifeGaugeList
    __vt__13LifeGaugeList:
        .4byte 0
        .4byte 0
        .4byte __dt__13LifeGaugeListFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515880
    lbl_80515880:
        .skip 0x4
    .global lbl_80515884
    lbl_80515884:
        .skip 0x4
    .global lifeGaugeMgr
    lifeGaugeMgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517B28
    lbl_80517B28:
        .4byte 0x00000000
    .global lbl_80517B2C
    lbl_80517B2C:
        .float 0.5
    .global lbl_80517B30
    lbl_80517B30:
        .4byte 0x43160000
    .global lbl_80517B34
    lbl_80517B34:
        .4byte 0x3ECCCCCD
    .global lbl_80517B38
    lbl_80517B38:
        .float 1.0
    .global lbl_80517B3C
    lbl_80517B3C:
        .4byte 0x3E4CCCCD
    .global lbl_80517B40
    lbl_80517B40:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80517B48
    lbl_80517B48:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80517B50
    lbl_80517B50:
        .4byte 0xBFC90FDB
    .global lbl_80517B54
    lbl_80517B54:
        .4byte 0x40C90FDB
    .global lbl_80517B58
    lbl_80517B58:
        .4byte 0x3FA00000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80119BFC
 * Size:	000034
 */
LifeGauge::LifeGauge() { init(' '); }

/*
 * --INFO--
 * Address:	80119C30
 * Size:	000014
 */
void LifeGauge::init(u8 c)
{
	_00 = 0.0f;
	_09 = c;
	_08 = c;
	/*
	lfs      f0, lbl_80517B28@sda21(r2)
	stfs     f0, 0(r3)
	stb      r4, 9(r3)
	stb      r4, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80119C44
 * Size:	0001CC
 */
void LifeGauge::update(float p1)
{
	float fullnessMaybe = _09 * p1;
	if (fullnessMaybe < 0.0f) {
		fullnessMaybe -= 0.5f;
	} else {
		fullnessMaybe += 0.5f;
	}
	u32 uVar3 = (int)fullnessMaybe % 256;
	if (_08 != uVar3) {
		fullnessMaybe = sys->m_deltaTime * 150.0f * FABS((float)(uVar3 - _08) / (float)_09);
		if (fullnessMaybe < 0.4f) {
			fullnessMaybe = 0.4f;
		}
		_00 += fullnessMaybe;
		if (1.0f < _00) {
			char cVar5 = -(char)(uint)_00;
			if (_08 < uVar3) {
				cVar5 = (char)(uint)_00;
			}
			_08 += cVar5;
			_00 -= ((uint)_00 % 256);
		}
		if (_08 == '\0' && 0.0f < p1) {
			_08 = '\x01';
		}
	}
	if (0.2 <= p1) {
		if (0.5 <= p1) {
			_04.r = 0;
			_04.g = 0xFF;
			_04.b = 0;
			_04.a = 0xFF;
		} else {
			_04.r = 0xFF;
			_04.g = 0xFF;
			_04.b = 0;
			_04.a = 0xFF;
		}
	} else {
		_04.r = 0xFF;
		_04.g = 0;
		_04.b = 0;
		_04.a = 0xFF;
	}
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f3, lbl_80517B40@sda21(r2)
	lbz      r6, 9(r3)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517B28@sda21(r2)
	stw      r6, 0xc(r1)
	lfd      f2, 8(r1)
	fsubs    f2, f2, f3
	fmuls    f2, f2, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80119C84
	lfs      f0, lbl_80517B2C@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_80119C8C

lbl_80119C84:
	lfs      f0, lbl_80517B2C@sda21(r2)
	fsubs    f0, f2, f0

lbl_80119C8C:
	fctiwz   f0, f0
	lbz      r4, 8(r3)
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	clrlwi   r7, r0, 0x18
	cmplw    r4, r7
	beq      lbl_80119DA0
	subf     r4, r4, r7
	lis      r0, 0x4330
	xoris    r5, r4, 0x8000
	lwz      r4, sys@sda21(r13)
	stw      r5, 0x14(r1)
	lfd      f2, lbl_80517B48@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f5, lbl_80517B40@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r6, 0xc(r1)
	fsubs    f6, f0, f2
	lfs      f2, lbl_80517B30@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, 0x54(r4)
	lfd      f4, 8(r1)
	fmuls    f3, f2, f0
	lfs      f0, lbl_80517B34@sda21(r2)
	fsubs    f2, f4, f5
	fdivs    f2, f6, f2
	fabs     f2, f2
	frsp     f2, f2
	fmuls    f3, f3, f2
	fcmpo    cr0, f3, f0
	bge      lbl_80119D0C
	fmr      f3, f0

lbl_80119D0C:
	lfs      f2, 0(r3)
	lfs      f0, lbl_80517B38@sda21(r2)
	fadds    f2, f2, f3
	stfs     f2, 0(r3)
	lfs      f2, 0(r3)
	fcmpo    cr0, f2, f0
	ble      lbl_80119D80
	fctiwz   f0, f2
	lbz      r0, 8(r3)
	cmplw    r7, r0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	clrlwi   r0, r4, 0x18
	neg      r6, r0
	ble      lbl_80119D4C
	mr       r6, r0

lbl_80119D4C:
	clrlwi   r4, r4, 0x18
	lis      r0, 0x4330
	lbz      r5, 8(r3)
	stw      r4, 0xc(r1)
	add      r4, r5, r6
	lfd      f2, lbl_80517B40@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	stb      r4, 8(r3)
	fsubs    f0, f0, f2
	lfs      f2, 0(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0(r3)

lbl_80119D80:
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	bne      lbl_80119DA0
	lfs      f0, lbl_80517B28@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80119DA0
	li       r0, 1
	stb      r0, 8(r3)

lbl_80119DA0:
	lfs      f0, lbl_80517B3C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80119DC8
	li       r4, 0xff
	li       r0, 0
	stb      r4, 4(r3)
	stb      r0, 5(r3)
	stb      r0, 6(r3)
	stb      r4, 7(r3)
	b        lbl_80119E08

lbl_80119DC8:
	lfs      f0, lbl_80517B2C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80119DF0
	li       r4, 0xff
	li       r0, 0
	stb      r4, 4(r3)
	stb      r4, 5(r3)
	stb      r0, 6(r3)
	stb      r4, 7(r3)
	b        lbl_80119E08

lbl_80119DF0:
	li       r4, 0
	li       r0, 0xff
	stb      r4, 4(r3)
	stb      r0, 5(r3)
	stb      r4, 6(r3)
	stb      r0, 7(r3)

lbl_80119E08:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80119E10
 * Size:	0001BC
 */
void LifeGauge::draw(float, float x, float y)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	lfs      f0, lbl_80517B28@sda21(r2)
	fmr      f27, f1
	stfs     f2, 8(r1)
	mr       r29, r3
	lfs      f28, lbl_80517B54@sda21(r2)
	li       r30, 0
	stfs     f3, 0xc(r1)
	lfd      f29, lbl_80517B48@sda21(r2)
	lis      r31, 0x4330
	stfs     f0, 0x10(r1)
	lfd      f30, lbl_80517B40@sda21(r2)
	lfs      f31, lbl_80517B50@sda21(r2)
	b        lbl_80119F74

lbl_80119E8C:
	lbz      r0, 9(r29)
	xoris    r3, r30, 0x8000
	stw      r3, 0x34(r1)
	stw      r31, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r0, 0x3c(r1)
	fsubs    f1, f0, f29
	stw      r31, 0x38(r1)
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f30
	fdivs    f0, f1, f0
	fnmsubs  f26, f28, f0, f31
	fmr      f1, f26
	bl       cos
	frsp     f2, f1
	lfs      f0, 8(r1)
	fmr      f1, f26
	fmadds   f0, f27, f2, f0
	stfs     f0, 0x14(r1)
	bl       sin
	frsp     f2, f1
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	addi     r0, r30, 1
	xoris    r0, r0, 0x8000
	stw      r31, 0x40(r1)
	fmadds   f1, f27, f2, f1
	stw      r0, 0x44(r1)
	stfs     f0, 0x1c(r1)
	lfd      f0, 0x40(r1)
	stfs     f1, 0x18(r1)
	fsubs    f1, f0, f29
	lbz      r0, 9(r29)
	stw      r31, 0x48(r1)
	stw      r0, 0x4c(r1)
	lfd      f0, 0x48(r1)
	fsubs    f0, f0, f30
	fdivs    f0, f1, f0
	fnmsubs  f26, f28, f0, f31
	fmr      f1, f26
	bl       cos
	frsp     f2, f1
	lfs      f0, 8(r1)
	fmr      f1, f26
	fmadds   f0, f27, f2, f0
	stfs     f0, 0x20(r1)
	bl       sin
	frsp     f2, f1
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	mr       r3, r29
	addi     r4, r1, 8
	addi     r5, r29, 4
	fmadds   f1, f27, f2, f1
	stfs     f0, 0x28(r1)
	stfs     f1, 0x24(r1)
	bl       "drawOneTri__9LifeGaugeFP10Vector3<f>R6Color4"
	addi     r30, r30, 1

lbl_80119F74:
	lbz      r0, 8(r29)
	cmpw     r30, r0
	blt      lbl_80119E8C
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0xc4(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80119FCC
 * Size:	000110
 */
void LifeGauge::initLifeGaugeDraw()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r3, 0
	stw      r0, 0x44(r1)
	bl       GXSetTevDirect
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 0
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r3, 0
	li       r4, 1
	li       r5, 0
	bl       GXSetZMode
	li       r3, 0
	bl       GXSetCurrentMtx
	addi     r3, r1, 8
	bl       PSMTXIdentity
	addi     r3, r1, 8
	li       r4, 0x1e
	li       r5, 1
	bl       GXLoadTexMtxImm
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011A0DC
 * Size:	0000F0
 */
void LifeGauge::drawOneTri(Vector3f*, Color4&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0xa0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	li       r5, 3
	stw      r30, 8(r1)
	mr       r30, r4
	li       r4, 0
	bl       GXBegin
	lfs      f2, 8(r30)
	lis      r6, 0xCC008000@ha
	lfs      f1, 4(r30)
	lfs      f0, 0(r30)
	stfs     f0, 0xCC008000@l(r6)
	stfs     f1, -0x8000(r6)
	stfs     f2, -0x8000(r6)
	lbz      r5, 3(r31)
	lbz      r4, 2(r31)
	lbz      r3, 1(r31)
	lbz      r0, 0(r31)
	stb      r0, -0x8000(r6)
	stb      r3, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r5, -0x8000(r6)
	lfs      f2, 0x14(r30)
	lfs      f1, 0x10(r30)
	lfs      f0, 0xc(r30)
	stfs     f0, -0x8000(r6)
	stfs     f1, -0x8000(r6)
	stfs     f2, -0x8000(r6)
	lbz      r5, 3(r31)
	lbz      r4, 2(r31)
	lbz      r3, 1(r31)
	lbz      r0, 0(r31)
	stb      r0, -0x8000(r6)
	stb      r3, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r5, -0x8000(r6)
	lfs      f2, 0x20(r30)
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x18(r30)
	stfs     f0, -0x8000(r6)
	stfs     f1, -0x8000(r6)
	stfs     f2, -0x8000(r6)
	lbz      r5, 3(r31)
	lbz      r4, 2(r31)
	lbz      r3, 1(r31)
	lbz      r0, 0(r31)
	stb      r0, -0x8000(r6)
	stb      r3, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r5, -0x8000(r6)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011A1CC
 * Size:	000604
 */
void LifeGaugeList::draw(Graphics&)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	stw      r28, 0x110(r1)
	mr       r31, r3
	lbz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_8011A780
	lfs      f1, lbl_80517B58@sda21(r2)
	lfs      f0, 0x34(r31)
	lwz      r28, 0x25c(r4)
	li       r4, 1
	fmuls    f26, f1, f0
	mr       r3, r28
	bl       getMatrix__8ViewportFb
	lfs      f0, 0(r3)
	li       r4, 1
	stfs     f0, 0xbc(r1)
	lfs      f0, 4(r3)
	stfs     f0, 0xcc(r1)
	lfs      f0, 8(r3)
	stfs     f0, 0xdc(r1)
	lfs      f0, 0x10(r3)
	fneg     f0, f0
	stfs     f0, 0xc0(r1)
	lfs      f0, 0x14(r3)
	fneg     f0, f0
	stfs     f0, 0xd0(r1)
	lfs      f0, 0x18(r3)
	fneg     f0, f0
	stfs     f0, 0xe0(r1)
	lfs      f0, 0x20(r3)
	stfs     f0, 0xc4(r1)
	lfs      f0, 0x24(r3)
	stfs     f0, 0xd4(r1)
	lfs      f0, 0x28(r3)
	mr       r3, r28
	stfs     f0, 0xe4(r1)
	lfs      f0, 0x24(r31)
	stfs     f0, 0xc8(r1)
	lfs      f0, 0x28(r31)
	stfs     f0, 0xd8(r1)
	lfs      f0, 0x2c(r31)
	stfs     f0, 0xe8(r1)
	bl       getMatrix__8ViewportFb
	addi     r4, r1, 0xbc
	addi     r5, r1, 0x8c
	bl       PSMTXConcat
	addi     r3, r1, 0x8c
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 0
	bl       GXSetTevDirect
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 0
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 0
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r3, 0
	li       r4, 1
	li       r5, 0
	bl       GXSetZMode
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 0xc
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	addi     r3, r1, 0x5c
	bl       PSMTXIdentity
	addi     r3, r1, 0x5c
	li       r4, 0x1e
	li       r5, 1
	bl       GXLoadTexMtxImm
	li       r3, 0x98
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	fneg     f1, f26
	lis      r6, 0xCC008000@ha
	lfs      f0, lbl_80517B28@sda21(r2)
	li       r5, 0xff
	li       r4, 0
	li       r0, 1
	stfs     f1, 0xCC008000@l(r6)
	li       r3, 0
	stfs     f26, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stfs     f26, -0x8000(r6)
	stfs     f26, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r0, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stfs     f1, -0x8000(r6)
	stfs     f1, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r4, -0x8000(r6)
	stb      r0, -0x8000(r6)
	stfs     f26, -0x8000(r6)
	stfs     f1, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r5, -0x8000(r6)
	stb      r0, -0x8000(r6)
	stb      r0, -0x8000(r6)
	bl       GXSetTevDirect
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 0
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r3, 0
	li       r4, 1
	li       r5, 0
	bl       GXSetZMode
	li       r3, 0
	bl       GXSetCurrentMtx
	addi     r3, r1, 0x2c
	bl       PSMTXIdentity
	addi     r3, r1, 0x2c
	li       r4, 0x1e
	li       r5, 1
	bl       GXLoadTexMtxImm
	lfs      f0, lbl_80517B28@sda21(r2)
	li       r28, 0
	lfs      f27, 0x34(r31)
	lis      r30, 0xcc01
	stfs     f0, 8(r1)
	lis      r29, 0x4330
	lfs      f28, lbl_80517B54@sda21(r2)
	stfs     f0, 0xc(r1)
	lfd      f29, lbl_80517B48@sda21(r2)
	stfs     f0, 0x10(r1)
	lfd      f30, lbl_80517B40@sda21(r2)
	lfs      f31, lbl_80517B50@sda21(r2)
	b        lbl_8011A774

lbl_8011A5E4:
	lbz      r0, 0x45(r31)
	xoris    r3, r28, 0x8000
	stw      r3, 0xf4(r1)
	stw      r29, 0xf0(r1)
	lfd      f0, 0xf0(r1)
	stw      r0, 0xfc(r1)
	fsubs    f1, f0, f29
	stw      r29, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	fsubs    f0, f0, f30
	fdivs    f0, f1, f0
	fnmsubs  f26, f28, f0, f31
	fmr      f1, f26
	bl       cos
	frsp     f2, f1
	lfs      f0, 8(r1)
	fmr      f1, f26
	fmadds   f0, f27, f2, f0
	stfs     f0, 0x14(r1)
	bl       sin
	addi     r3, r28, 1
	lbz      r0, 0x45(r31)
	xoris    r3, r3, 0x8000
	lfs      f2, 0x10(r1)
	stw      r3, 0x104(r1)
	frsp     f1, f1
	lfs      f0, 0xc(r1)
	stw      r29, 0x100(r1)
	fmadds   f3, f27, f1, f0
	lfd      f0, 0x100(r1)
	stw      r0, 0x10c(r1)
	fsubs    f1, f0, f29
	stw      r29, 0x108(r1)
	lfd      f0, 0x108(r1)
	stfs     f3, 0x18(r1)
	fsubs    f0, f0, f30
	stfs     f2, 0x1c(r1)
	fdivs    f0, f1, f0
	fnmsubs  f26, f28, f0, f31
	fmr      f1, f26
	bl       cos
	frsp     f2, f1
	lfs      f0, 8(r1)
	fmr      f1, f26
	fmadds   f0, f27, f2, f0
	stfs     f0, 0x20(r1)
	bl       sin
	frsp     f2, f1
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	li       r3, 0xa0
	li       r4, 0
	li       r5, 3
	fmadds   f1, f27, f2, f1
	stfs     f0, 0x28(r1)
	stfs     f1, 0x24(r1)
	bl       GXBegin
	lfs      f0, 8(r1)
	addi     r28, r28, 1
	lfs      f1, 0xc(r1)
	stfs     f0, -0x8000(r30)
	lfs      f2, 0x10(r1)
	stfs     f1, -0x8000(r30)
	lfs      f0, 0x14(r1)
	stfs     f2, -0x8000(r30)
	lfs      f1, 0x18(r1)
	lbz      r5, 0x43(r31)
	lbz      r4, 0x42(r31)
	lbz      r3, 0x41(r31)
	lbz      r0, 0x40(r31)
	lfs      f2, 0x1c(r1)
	stb      r0, -0x8000(r30)
	stb      r3, -0x8000(r30)
	stb      r4, -0x8000(r30)
	stb      r5, -0x8000(r30)
	stfs     f0, -0x8000(r30)
	lfs      f0, 0x20(r1)
	stfs     f1, -0x8000(r30)
	lfs      f1, 0x24(r1)
	stfs     f2, -0x8000(r30)
	lfs      f2, 0x28(r1)
	lbz      r5, 0x43(r31)
	lbz      r4, 0x42(r31)
	lbz      r3, 0x41(r31)
	lbz      r0, 0x40(r31)
	stb      r0, -0x8000(r30)
	stb      r3, -0x8000(r30)
	stb      r4, -0x8000(r30)
	stb      r5, -0x8000(r30)
	stfs     f0, -0x8000(r30)
	stfs     f1, -0x8000(r30)
	stfs     f2, -0x8000(r30)
	lbz      r5, 0x43(r31)
	lbz      r4, 0x42(r31)
	lbz      r3, 0x41(r31)
	lbz      r0, 0x40(r31)
	stb      r0, -0x8000(r30)
	stb      r3, -0x8000(r30)
	stb      r4, -0x8000(r30)
	stb      r5, -0x8000(r30)

lbl_8011A774:
	lbz      r0, 0x44(r31)
	cmpw     r28, r0
	blt      lbl_8011A5E4

lbl_8011A780:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r0, 0x184(r1)
	lwz      r28, 0x110(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011A7D0
 * Size:	0000DC
 */
LifeGaugeMgr::LifeGaugeMgr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r0, r30
	stw      r29, 0x14(r1)
	mr       r31, r0
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__13LifeGaugeList@ha
	addi     r29, r30, 0x48
	addi     r0, r3, __vt__13LifeGaugeList@l
	li       r4, 0
	stw      r0, 0(r31)
	li       r0, 0x20
	lfs      f0, lbl_80517B28@sda21(r2)
	mr       r3, r29
	stb      r4, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stb      r0, 0x45(r31)
	stb      r0, 0x44(r31)
	stw      r4, 0x20(r31)
	stw      r4, 0x1c(r31)
	stw      r4, 0x18(r31)
	stb      r4, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stb      r0, 0x45(r31)
	stb      r0, 0x44(r31)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__13LifeGaugeList@ha
	li       r4, 0
	addi     r0, r3, __vt__13LifeGaugeList@l
	lfs      f0, lbl_80517B28@sda21(r2)
	stw      r0, 0(r29)
	li       r0, 0x20
	mr       r3, r30
	stb      r4, 0x38(r29)
	stfs     f0, 0x3c(r29)
	stb      r0, 0x45(r29)
	stb      r0, 0x44(r29)
	stw      r4, 0x20(r29)
	stw      r4, 0x1c(r29)
	stw      r4, 0x18(r29)
	stb      r4, 0x38(r29)
	stfs     f0, 0x3c(r29)
	stb      r0, 0x45(r29)
	stb      r0, 0x44(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011A8AC
 * Size:	000098
 */
LifeGaugeList::~LifeGaugeList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8011A928
	lis      r3, __vt__13LifeGaugeList@ha
	addi     r0, r3, __vt__13LifeGaugeList@l
	stw      r0, 0(r30)
	lwz      r3, 0x18(r30)
	cmplwi   r3, 0
	beq      lbl_8011A8EC
	lwz      r0, 0x1c(r30)
	stw      r0, 0x1c(r3)

lbl_8011A8EC:
	lwz      r3, 0x1c(r30)
	cmplwi   r3, 0
	beq      lbl_8011A900
	lwz      r0, 0x18(r30)
	stw      r0, 0x18(r3)

lbl_8011A900:
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x1c(r30)
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8011A928
	mr       r3, r30
	bl       __dl__FPv

lbl_8011A928:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011A944
 * Size:	000150
 */
void LifeGaugeMgr::createLifeGauge(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x1c(r3)
	b        lbl_8011A980

lbl_8011A96C:
	lwz      r0, 0x20(r3)
	cmplw    r0, r29
	bne      lbl_8011A97C
	b        lbl_8011A98C

lbl_8011A97C:
	lwz      r3, 0x1c(r3)

lbl_8011A980:
	cmplwi   r3, 0
	bne      lbl_8011A96C
	li       r3, 0

lbl_8011A98C:
	cmplwi   r3, 0
	bne      lbl_8011AA78
	lwz      r3, 0x64(r31)
	b        lbl_8011A9B0

lbl_8011A99C:
	lwz      r0, 0x20(r3)
	cmplw    r0, r29
	bne      lbl_8011A9AC
	b        lbl_8011A9BC

lbl_8011A9AC:
	lwz      r3, 0x1c(r3)

lbl_8011A9B0:
	cmplwi   r3, 0
	bne      lbl_8011A99C
	li       r3, 0

lbl_8011A9BC:
	cmplwi   r3, 0
	bne      lbl_8011AA78
	li       r3, 0x48
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8011AA1C
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__13LifeGaugeList@ha
	li       r3, 0
	addi     r0, r4, __vt__13LifeGaugeList@l
	lfs      f0, lbl_80517B28@sda21(r2)
	stw      r0, 0(r30)
	li       r0, 0x20
	stb      r3, 0x38(r30)
	stfs     f0, 0x3c(r30)
	stb      r0, 0x45(r30)
	stb      r0, 0x44(r30)
	stw      r29, 0x20(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x18(r30)
	stb      r3, 0x38(r30)
	stfs     f0, 0x3c(r30)
	stb      r0, 0x45(r30)
	stb      r0, 0x44(r30)

lbl_8011AA1C:
	lwz      r4, 0x18(r30)
	mr       r3, r30
	cmplwi   r4, 0
	beq      lbl_8011AA34
	lwz      r0, 0x1c(r30)
	stw      r0, 0x1c(r4)

lbl_8011AA34:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	beq      lbl_8011AA48
	lwz      r0, 0x18(r30)
	stw      r0, 0x18(r4)

lbl_8011AA48:
	li       r4, 0
	addi     r0, r31, 0x48
	stw      r4, 0x1c(r30)
	stw      r4, 0x18(r30)
	stw      r0, 0x18(r30)
	lwz      r0, 0x64(r31)
	stw      r0, 0x1c(r30)
	lwz      r4, 0x64(r31)
	cmplwi   r4, 0
	beq      lbl_8011AA74
	stw      r30, 0x18(r4)

lbl_8011AA74:
	stw      r30, 0x64(r31)

lbl_8011AA78:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011AA94
 * Size:	0000E4
 */
void LifeGaugeMgr::activeLifeGauge(Game::Creature*, float)
{
	/*
	stwu     r1, -0x20(r1)
	lwz      r5, 0x64(r3)
	b        lbl_8011AAB4

lbl_8011AAA0:
	lwz      r0, 0x20(r5)
	cmplw    r0, r4
	bne      lbl_8011AAB0
	b        lbl_8011AAC0

lbl_8011AAB0:
	lwz      r5, 0x1c(r5)

lbl_8011AAB4:
	cmplwi   r5, 0
	bne      lbl_8011AAA0
	li       r5, 0

lbl_8011AAC0:
	cmplwi   r5, 0
	beq      lbl_8011AB70
	lbz      r4, 0x45(r5)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_80517B40@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_80517B28@sda21(r2)
	lfd      f2, 8(r1)
	fsubs    f2, f2, f3
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8011AB04
	lfs      f0, lbl_80517B2C@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8011AB0C

lbl_8011AB04:
	lfs      f0, lbl_80517B2C@sda21(r2)
	fsubs    f0, f1, f0

lbl_8011AB0C:
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	stb      r0, 0x44(r5)
	lwz      r4, 0x18(r5)
	cmplwi   r4, 0
	beq      lbl_8011AB30
	lwz      r0, 0x1c(r5)
	stw      r0, 0x1c(r4)

lbl_8011AB30:
	lwz      r4, 0x1c(r5)
	cmplwi   r4, 0
	beq      lbl_8011AB44
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r4)

lbl_8011AB44:
	li       r0, 0
	stw      r0, 0x1c(r5)
	stw      r0, 0x18(r5)
	stw      r3, 0x18(r5)
	lwz      r0, 0x1c(r3)
	stw      r0, 0x1c(r5)
	lwz      r4, 0x1c(r3)
	cmplwi   r4, 0
	beq      lbl_8011AB6C
	stw      r5, 0x18(r4)

lbl_8011AB6C:
	stw      r5, 0x1c(r3)

lbl_8011AB70:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011AB78
 * Size:	0000A8
 */
void LifeGaugeMgr::inactiveLifeGauge(Game::Creature*)
{
	/*
	lwz      r5, 0x1c(r3)
	b        lbl_8011AB94

lbl_8011AB80:
	lwz      r0, 0x20(r5)
	cmplw    r0, r4
	bne      lbl_8011AB90
	b        lbl_8011ABA0

lbl_8011AB90:
	lwz      r5, 0x1c(r5)

lbl_8011AB94:
	cmplwi   r5, 0
	bne      lbl_8011AB80
	li       r5, 0

lbl_8011ABA0:
	cmplwi   r5, 0
	beqlr
	li       r0, 0
	lfs      f0, lbl_80517B28@sda21(r2)
	stb      r0, 0x38(r5)
	li       r0, 0x20
	stfs     f0, 0x3c(r5)
	stb      r0, 0x45(r5)
	stb      r0, 0x44(r5)
	lwz      r4, 0x18(r5)
	cmplwi   r4, 0
	beq      lbl_8011ABD8
	lwz      r0, 0x1c(r5)
	stw      r0, 0x1c(r4)

lbl_8011ABD8:
	lwz      r4, 0x1c(r5)
	cmplwi   r4, 0
	beq      lbl_8011ABEC
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r4)

lbl_8011ABEC:
	li       r4, 0
	addi     r0, r3, 0x48
	stw      r4, 0x1c(r5)
	stw      r4, 0x18(r5)
	stw      r0, 0x18(r5)
	lwz      r0, 0x64(r3)
	stw      r0, 0x1c(r5)
	lwz      r4, 0x64(r3)
	cmplwi   r4, 0
	beq      lbl_8011AC18
	stw      r5, 0x18(r4)

lbl_8011AC18:
	stw      r5, 0x64(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011AC20
 * Size:	000270
 */
void LifeGaugeMgr::update()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	lwz      r31, 0x1c(r3)
	lfs      f31, lbl_80517B38@sda21(r2)
	b        lbl_8011AE6C

lbl_8011AC44:
	lwz      r3, 0x20(r31)
	addi     r4, r31, 0x24
	lwz      r12, 0(r3)
	lwz      r12, 0x13c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x38(r31)
	cmplwi   r0, 0
	beq      lbl_8011AE54
	lfs      f1, 0x30(r31)
	lfs      f0, lbl_80517B38@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8011AC80
	stfs     f0, 0x30(r31)
	b        lbl_8011AC90

lbl_8011AC80:
	lfs      f0, lbl_80517B28@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8011AC90
	stfs     f0, 0x30(r31)

lbl_8011AC90:
	lbz      r6, 0x45(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_80517B40@sda21(r2)
	stw      r6, 0xc(r1)
	lfs      f0, 0x30(r31)
	lfd      f2, 8(r1)
	lfs      f1, lbl_80517B28@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f2, f2, f0
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8011ACD0
	lfs      f1, lbl_80517B2C@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8011ACD8

lbl_8011ACD0:
	lfs      f1, lbl_80517B2C@sda21(r2)
	fsubs    f1, f2, f1

lbl_8011ACD8:
	fctiwz   f1, f1
	lbz      r3, 0x44(r31)
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	clrlwi   r5, r0, 0x18
	cmplw    r3, r5
	beq      lbl_8011ADEC
	subf     r3, r3, r5
	lis      r0, 0x4330
	xoris    r4, r3, 0x8000
	lwz      r3, sys@sda21(r13)
	stw      r4, 0x14(r1)
	lfd      f2, lbl_80517B48@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f5, lbl_80517B40@sda21(r2)
	lfd      f1, 0x10(r1)
	stw      r6, 0xc(r1)
	fsubs    f6, f1, f2
	lfs      f2, lbl_80517B30@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, 0x54(r3)
	lfd      f4, 8(r1)
	fmuls    f3, f2, f1
	lfs      f1, lbl_80517B34@sda21(r2)
	fsubs    f2, f4, f5
	fdivs    f2, f6, f2
	fabs     f2, f2
	frsp     f2, f2
	fmuls    f3, f3, f2
	fcmpo    cr0, f3, f1
	bge      lbl_8011AD58
	fmr      f3, f1

lbl_8011AD58:
	lfs      f2, 0x3c(r31)
	lfs      f1, lbl_80517B38@sda21(r2)
	fadds    f2, f2, f3
	stfs     f2, 0x3c(r31)
	lfs      f2, 0x3c(r31)
	fcmpo    cr0, f2, f1
	ble      lbl_8011ADCC
	fctiwz   f1, f2
	lbz      r0, 0x44(r31)
	cmplw    r5, r0
	stfd     f1, 0x10(r1)
	lwz      r3, 0x14(r1)
	clrlwi   r0, r3, 0x18
	neg      r5, r0
	ble      lbl_8011AD98
	mr       r5, r0

lbl_8011AD98:
	clrlwi   r3, r3, 0x18
	lis      r0, 0x4330
	lbz      r4, 0x44(r31)
	stw      r3, 0xc(r1)
	add      r3, r4, r5
	lfd      f2, lbl_80517B40@sda21(r2)
	stw      r0, 8(r1)
	lfd      f1, 8(r1)
	stb      r3, 0x44(r31)
	fsubs    f1, f1, f2
	lfs      f2, 0x3c(r31)
	fsubs    f1, f2, f1
	stfs     f1, 0x3c(r31)

lbl_8011ADCC:
	lbz      r0, 0x44(r31)
	cmplwi   r0, 0
	bne      lbl_8011ADEC
	lfs      f1, lbl_80517B28@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_8011ADEC
	li       r0, 1
	stb      r0, 0x44(r31)

lbl_8011ADEC:
	lfs      f1, lbl_80517B3C@sda21(r2)
	fcmpo    cr0, f0, f1
	bge      lbl_8011AE14
	li       r3, 0xff
	li       r0, 0
	stb      r3, 0x40(r31)
	stb      r0, 0x41(r31)
	stb      r0, 0x42(r31)
	stb      r3, 0x43(r31)
	b        lbl_8011AE54

lbl_8011AE14:
	lfs      f1, lbl_80517B2C@sda21(r2)
	fcmpo    cr0, f0, f1
	bge      lbl_8011AE3C
	li       r3, 0xff
	li       r0, 0
	stb      r3, 0x40(r31)
	stb      r3, 0x41(r31)
	stb      r0, 0x42(r31)
	stb      r3, 0x43(r31)
	b        lbl_8011AE54

lbl_8011AE3C:
	li       r3, 0
	li       r0, 0xff
	stb      r3, 0x40(r31)
	stb      r0, 0x41(r31)
	stb      r3, 0x42(r31)
	stb      r0, 0x43(r31)

lbl_8011AE54:
	lfs      f0, 0x30(r31)
	fcmpu    cr0, f31, f0
	bne      lbl_8011AE68
	li       r0, 0
	stb      r0, 0x38(r31)

lbl_8011AE68:
	lwz      r31, 0x1c(r31)

lbl_8011AE6C:
	cmplwi   r31, 0
	bne      lbl_8011AC44
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
 * Address:	8011AE90
 * Size:	000080
 */
void LifeGaugeMgr::draw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r5, moviePlayer__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8011AEC0
	lwz      r0, 0x1f0(r5)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8011AEF8

lbl_8011AEC0:
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_8011AEF8
	lwz      r3, 0x90(r3)
	mr       r31, r0
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	b        lbl_8011AEF0

lbl_8011AEE0:
	mr       r3, r31
	mr       r4, r30
	bl       draw__13LifeGaugeListFR8Graphics
	lwz      r31, 0x1c(r31)

lbl_8011AEF0:
	cmplwi   r31, 0
	bne      lbl_8011AEE0

lbl_8011AEF8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011AF10
 * Size:	000098
 */
void LifeGaugeMgr::loadResource()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8047B238@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	li       r6, 1
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r4, lbl_8047B238@l
	li       r4, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	lis      r5, lbl_8047B258@ha
	mr       r4, r3
	addi     r3, r5, lbl_8047B258@l
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	mr       r30, r3
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8011AF88
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x28(r31)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8011AF88:
	stw      r31, 0x90(r29)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011AFA8
 * Size:	000028
 */
void __sinit_lifeGaugeMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804AC308@ha
	stw      r0, lbl_80515880@sda21(r13)
	stfsu    f0, lbl_804AC308@l(r3)
	stfs     f0, lbl_80515884@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
