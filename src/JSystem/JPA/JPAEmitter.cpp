#include "Dolphin/mtx.h"
#include "JSystem/JPA/JPABlock.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAResource.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516BA0
    lbl_80516BA0:
        .4byte 0x42000000
    .global lbl_80516BA4
    lbl_80516BA4:
        .4byte 0x00000000
    .global lbl_80516BA8
    lbl_80516BA8:
        .float 0.5
    .global lbl_80516BAC
    lbl_80516BAC:
        .4byte 0x40400000
    .global lbl_80516BB0
    lbl_80516BB0:
        .float 1.0
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8008FC9C
 * Size:	000048
 */
JPAEmitterCallBack::~JPAEmitterCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8008FCCC
	lis      r5, __vt__18JPAEmitterCallBack@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	stw      r0, 0(r31)
	ble      lbl_8008FCCC
	bl       __dl__FPv

lbl_8008FCCC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008FCE4
 * Size:	00035C
 */
void JPABaseEmitter::init(JPAEmitterManager* manager, JPAResource* resource)
{
	m_manager  = manager;
	m_resource = resource;
	m_resource->_2C->m_data;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516BA0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, __float_epsilon@ha
	stw      r4, 0xe4(r30)
	stw      r31, 0xe8(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f3, 0x18(r4)
	lfs      f2, 0x14(r4)
	lfs      f0, 0x10(r4)
	stfs     f0, 0(r30)
	stfs     f2, 4(r30)
	stfs     f3, 8(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f3, 0x24(r4)
	lfs      f2, 0x20(r4)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0xc(r30)
	stfs     f2, 0x10(r30)
	stfs     f3, 0x14(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f3, 0x30(r4)
	lfs      f2, 0x2c(r4)
	lfs      f0, 0x28(r4)
	stfs     f0, 0x18(r30)
	stfs     f2, 0x1c(r30)
	stfs     f3, 0x20(r30)
	lfs      f2, 0x18(r30)
	lfs      f4, 0x20(r30)
	lfs      f0, 0x1c(r30)
	fmuls    f3, f2, f2
	fmuls    f4, f4, f4
	fmuls    f2, f0, f0
	lfs      f0, __float_epsilon@l(r3)
	fmuls    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f4, f4, f1
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	beq      lbl_8008FE08
	lfs      f0, lbl_80516BA4@sda21(r2)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_8008FDC4
	b        lbl_8008FDE4

lbl_8008FDC4:
	frsqrte  f3, f4
	lfs      f2, lbl_80516BA8@sda21(r2)
	lfs      f0, lbl_80516BAC@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_8008FDE4:
	lfs      f0, 0x18(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x18(r30)
	lfs      f0, 0x1c(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x20(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x20(r30)

lbl_8008FE08:
	lwz      r4, 0xe8(r30)
	lis      r3, 0x0019660D@ha
	addi     r0, r3, 0x0019660D@l
	addi     r3, r30, 0x68
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lha      r6, 0x6c(r4)
	lha      r5, 0x6a(r4)
	lha      r4, 0x68(r4)
	sth      r4, 0x4c(r30)
	sth      r5, 0x4e(r30)
	sth      r6, 0x50(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lha      r4, 0x6e(r4)
	stw      r4, 0x24(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lha      r4, 0x72(r4)
	sth      r4, 0x52(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lhz      r4, 0x74(r4)
	sth      r4, 0x54(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x28(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lbz      r4, 0x78(r4)
	stb      r4, 0x56(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x58(r4)
	stfs     f0, 0x2c(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x5c(r4)
	stfs     f0, 0x30(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x34(r4)
	stfs     f0, 0x34(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x38(r4)
	stfs     f0, 0x38(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x40(r4)
	stfs     f0, 0x3c(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x44(r4)
	stfs     f0, 0x40(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x3c(r4)
	stfs     f0, 0x44(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x60(r4)
	stfs     f0, 0x48(r30)
	lwz      r4, 0xe4(r30)
	lwz      r5, 0x20(r4)
	lwz      r4, 0xc(r5)
	mullw    r4, r4, r0
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc(r5)
	stw      r0, 0xc4(r30)
	bl       PSMTXIdentity
	lfs      f1, lbl_80516BB0@sda21(r2)
	li       r5, 0xff
	lfs      f0, lbl_80516BA4@sda21(r2)
	li       r4, 0
	stfs     f1, 0x98(r30)
	li       r3, 0x30
	li       r0, 1
	stfs     f1, 0x9c(r30)
	stfs     f1, 0xa0(r30)
	stfs     f0, 0xac(r30)
	stfs     f0, 0xa8(r30)
	stfs     f0, 0xa4(r30)
	stfs     f1, 0xb0(r30)
	stfs     f1, 0xb4(r30)
	stb      r5, 0xbf(r30)
	stb      r5, 0xbe(r30)
	stb      r5, 0xbd(r30)
	stb      r5, 0xbc(r30)
	stb      r5, 0xbb(r30)
	stb      r5, 0xba(r30)
	stb      r5, 0xb9(r30)
	stb      r5, 0xb8(r30)
	lwz      r5, 0x1c(r31)
	lwz      r6, 0(r5)
	lbz      r5, 0x26(r6)
	stb      r5, 0x108(r30)
	lbz      r5, 0x27(r6)
	stb      r5, 0x109(r30)
	lbz      r5, 0x28(r6)
	stb      r5, 0x10a(r30)
	lbz      r5, 0x29(r6)
	stb      r5, 0x10b(r30)
	lwz      r5, 0x1c(r31)
	lwz      r6, 0(r5)
	lbz      r5, 0x2a(r6)
	stb      r5, 0x10c(r30)
	lbz      r5, 0x2b(r6)
	stb      r5, 0x10d(r30)
	lbz      r5, 0x2c(r6)
	stb      r5, 0x10e(r30)
	lbz      r5, 0x2d(r6)
	stb      r5, 0x10f(r30)
	stw      r4, 0xc0(r30)
	stfs     f1, 0xfc(r30)
	stfs     f0, 0xf8(r30)
	stw      r3, 0xf4(r30)
	stb      r0, 0x110(r30)
	stw      r4, 0x100(r30)
	sth      r4, 0x104(r30)
	sth      r4, 0x106(r30)
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
 * Address:	80090040
 * Size:	00011C
 */
JPABaseParticle* JPABaseEmitter::createParticle()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0xe0(r3)
	lwz      r0, 8(r4)
	cmplwi   r0, 0
	beq      lbl_80090140
	cmplwi   r0, 1
	li       r31, 0
	bne      lbl_80090094
	lwz      r31, 0(r4)
	li       r0, 0
	stw      r0, 4(r4)
	stw      r0, 0(r4)
	lwz      r3, 8(r4)
	addi     r0, r3, -1
	stw      r0, 8(r4)
	b        lbl_800900C0

lbl_80090094:
	cmplwi   r0, 0
	beq      lbl_800900C0
	lwz      r31, 0(r4)
	li       r0, 0
	lwz      r3, 4(r31)
	stw      r0, 0(r3)
	lwz      r0, 4(r31)
	stw      r0, 0(r4)
	lwz      r3, 8(r4)
	addi     r0, r3, -1
	stw      r0, 8(r4)

lbl_800900C0:
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_800900EC
	li       r0, 0
	stw      r0, 0(r31)
	lwz      r0, 0xc8(r30)
	stw      r0, 4(r31)
	lwz      r3, 0xc8(r30)
	stw      r31, 0(r3)
	stw      r31, 0xc8(r30)
	b        lbl_80090100

lbl_800900EC:
	stw      r31, 0xcc(r30)
	li       r0, 0
	stw      r31, 0xc8(r30)
	stw      r0, 0(r31)
	stw      r0, 4(r31)

lbl_80090100:
	lwz      r3, 0xd0(r30)
	addi     r0, r3, 1
	stw      r0, 0xd0(r30)
	lwz      r3, 0xe8(r30)
	lwz      r5, 0xe4(r30)
	lwz      r4, 0x2c(r3)
	lwz      r3, 0x20(r5)
	lwz      r12, 4(r4)
	mtctr    r12
	bctrl
	lwz      r4, 0xe4(r30)
	addi     r3, r31, 8
	lwz      r4, 0x20(r4)
	bl       init_p__15JPABaseParticleFP18JPAEmitterWorkData
	addi     r3, r31, 8
	b        lbl_80090144

lbl_80090140:
	li       r3, 0

lbl_80090144:
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
 * Address:	8009015C
 * Size:	0000FC
 */
JPABaseParticle* JPABaseEmitter::createChild(JPABaseParticle*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r3
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r5, 0xe0(r3)
	lwz      r0, 8(r5)
	cmplwi   r0, 0
	beq      lbl_80090240
	cmplwi   r0, 1
	li       r31, 0
	bne      lbl_800901AC
	lwz      r31, 0(r5)
	li       r0, 0
	stw      r0, 4(r5)
	stw      r0, 0(r5)
	lwz      r3, 8(r5)
	addi     r0, r3, -1
	stw      r0, 8(r5)
	b        lbl_800901D8

lbl_800901AC:
	cmplwi   r0, 0
	beq      lbl_800901D8
	lwz      r31, 0(r5)
	li       r0, 0
	lwz      r3, 4(r31)
	stw      r0, 0(r3)
	lwz      r0, 4(r31)
	stw      r0, 0(r5)
	lwz      r3, 8(r5)
	addi     r0, r3, -1
	stw      r0, 8(r5)

lbl_800901D8:
	lwz      r0, 0xd4(r7)
	cmplwi   r0, 0
	beq      lbl_80090204
	li       r0, 0
	stw      r0, 0(r31)
	lwz      r0, 0xd4(r7)
	stw      r0, 4(r31)
	lwz      r3, 0xd4(r7)
	stw      r31, 0(r3)
	stw      r31, 0xd4(r7)
	b        lbl_80090218

lbl_80090204:
	stw      r31, 0xd8(r7)
	li       r0, 0
	stw      r31, 0xd4(r7)
	stw      r0, 0(r31)
	stw      r0, 4(r31)

lbl_80090218:
	lwz      r6, 0xdc(r7)
	mr       r5, r4
	addi     r3, r31, 8
	addi     r0, r6, 1
	stw      r0, 0xdc(r7)
	lwz      r4, 0xe4(r7)
	lwz      r4, 0x20(r4)
	bl       init_c__15JPABaseParticleFP18JPAEmitterWorkDataP15JPABaseParticle
	addi     r3, r31, 8
	b        lbl_80090244

lbl_80090240:
	li       r3, 0

lbl_80090244:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090258
 * Size:	000174
 */
void JPABaseEmitter::deleteAllParticle()
{
	/*
	b        lbl_80090304

lbl_8009025C:
	cmplwi   r0, 1
	li       r6, 0
	bne      lbl_80090288
	lwz      r6, 0xcc(r3)
	li       r0, 0
	stw      r0, 0xcc(r3)
	stw      r0, 0xc8(r3)
	lwz      r4, 0xd0(r3)
	addi     r0, r4, -1
	stw      r0, 0xd0(r3)
	b        lbl_800902B4

lbl_80090288:
	cmplwi   r0, 0
	beq      lbl_800902B4
	lwz      r6, 0xcc(r3)
	li       r0, 0
	lwz      r4, 0(r6)
	stw      r0, 4(r4)
	lwz      r0, 0(r6)
	stw      r0, 0xcc(r3)
	lwz      r4, 0xd0(r3)
	addi     r0, r4, -1
	stw      r0, 0xd0(r3)

lbl_800902B4:
	lwz      r5, 0xe0(r3)
	lwz      r0, 0(r5)
	cmplwi   r0, 0
	beq      lbl_800902E4
	li       r0, 0
	stw      r0, 0(r6)
	lwz      r0, 0(r5)
	stw      r0, 4(r6)
	lwz      r4, 0(r5)
	stw      r6, 0(r4)
	stw      r6, 0(r5)
	b        lbl_800902F8

lbl_800902E4:
	stw      r6, 4(r5)
	li       r0, 0
	stw      r6, 0(r5)
	stw      r0, 0(r6)
	stw      r0, 4(r6)

lbl_800902F8:
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)

lbl_80090304:
	lwz      r0, 0xd0(r3)
	cmplwi   r0, 0
	bne      lbl_8009025C
	b        lbl_800903BC

lbl_80090314:
	cmplwi   r0, 1
	li       r6, 0
	bne      lbl_80090340
	lwz      r6, 0xd8(r3)
	li       r0, 0
	stw      r0, 0xd8(r3)
	stw      r0, 0xd4(r3)
	lwz      r4, 0xdc(r3)
	addi     r0, r4, -1
	stw      r0, 0xdc(r3)
	b        lbl_8009036C

lbl_80090340:
	cmplwi   r0, 0
	beq      lbl_8009036C
	lwz      r6, 0xd8(r3)
	li       r0, 0
	lwz      r4, 0(r6)
	stw      r0, 4(r4)
	lwz      r0, 0(r6)
	stw      r0, 0xd8(r3)
	lwz      r4, 0xdc(r3)
	addi     r0, r4, -1
	stw      r0, 0xdc(r3)

lbl_8009036C:
	lwz      r5, 0xe0(r3)
	lwz      r0, 0(r5)
	cmplwi   r0, 0
	beq      lbl_8009039C
	li       r0, 0
	stw      r0, 0(r6)
	lwz      r0, 0(r5)
	stw      r0, 4(r6)
	lwz      r4, 0(r5)
	stw      r6, 0(r4)
	stw      r6, 0(r5)
	b        lbl_800903B0

lbl_8009039C:
	stw      r6, 4(r5)
	li       r0, 0
	stw      r6, 0(r5)
	stw      r0, 0(r6)
	stw      r0, 4(r6)

lbl_800903B0:
	lwz      r4, 8(r5)
	addi     r0, r4, 1
	stw      r0, 8(r5)

lbl_800903BC:
	lwz      r0, 0xdc(r3)
	cmplwi   r0, 0
	bne      lbl_80090314
	blr
	*/
}

/*
 * --INFO--
 * Address:	800903CC
 * Size:	000040
 */
bool JPABaseEmitter::processTillStartFrame()
{
	if (_104 >= m_resource->_2C->castData()->_70) {
		return true;
	}
	if ((_F4 & 2) == 0) {
		_104++;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8009040C
 * Size:	00009C
 */
bool JPABaseEmitter::processTermination()
{
	if (is100()) {
		// if ((_F4 & 0x100) != 0) {
		return true;
	}
	if (_24 == 0) {
		return false;
	}
	if (_24 < 0) {
		setFlag(8);
		// _F4 = _F4 | 8;
		return !(_D0 + _DC);
	}
	if (_100 >= _24) {
		setFlag(8);
		// _F4 = _F4 | 8;
		if (isFlag(0x40)) {
			// if ((_F4 & 0x40) != 0) {
			return false;
		}
		return !(_D0 + _DC);
	}
	return false;
	/*
	lwz      r0, 0xf4(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80090420
	li       r3, 1
	blr

lbl_80090420:
	lwz      r4, 0x24(r3)
	cmpwi    r4, 0
	bne      lbl_80090434
	li       r3, 0
	blr

lbl_80090434:
	bge      lbl_8009045C
	lwz      r0, 0xf4(r3)
	ori      r0, r0, 8
	stw      r0, 0xf4(r3)
	lwz      r4, 0xd0(r3)
	lwz      r0, 0xdc(r3)
	add      r0, r4, r0
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr

lbl_8009045C:
	lwz      r0, 0x100(r3)
	cmplw    r0, r4
	blt      lbl_800904A0
	lwz      r0, 0xf4(r3)
	ori      r0, r0, 8
	stw      r0, 0xf4(r3)
	lwz      r0, 0xf4(r3)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_80090488
	li       r3, 0
	blr

lbl_80090488:
	lwz      r4, 0xd0(r3)
	lwz      r0, 0xdc(r3)
	add      r0, r4, r0
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr

lbl_800904A0:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800904A8
 * Size:	000080
 */
void JPABaseEmitter::calcEmitterGlobalPosition(JGeometry::TVec3<float>* p1) const
{
	Mtx mtx;
	PSMTXScale(mtx, _98.x, _98.y, _98.z);
	PSMTXConcat(_68, mtx, mtx);
	mtx[0][3] = _A4.x;
	mtx[1][3] = _A4.y;
	mtx[2][3] = _A4.z;
	PSMTXMultVec(mtx, (Vec*)&_0C, (Vec*)p1);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisX(JGeometry::TVec3<float>*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisY(JGeometry::TVec3<float>*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisZ(JGeometry::TVec3<float>*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090528
 * Size:	000010
 */
int JPABaseEmitter::getCurrentCreateNumber() const { return m_manager->_20->m_createNumber; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
int JPABaseEmitter::getDrawCount() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JPABaseEmitter::loadTexture(unsigned char, _GXTexMapID)
{
	// UNUSED FUNCTION
}
