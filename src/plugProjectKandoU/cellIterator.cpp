#include "Game/cellPyramid.h"

/*
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80483828:
    .asciz "cellIterator.cpp"
.balign 4
lbl_8048383C:
    .asciz "xy %f %f\n%f %f\n"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051A300:
    .float 0.0
lbl_8051A304:
    .float 1.0
lbl_8051A308:
    .asciz "x %f>%f"
.balign 4
lbl_8051A310:
    .asciz "y %f>%f"
.balign 8
lbl_8051A318:
    .4byte 0x43300000
    .4byte 0x00000000
*/

namespace Game {
/*
 * --INFO--
 * Address:	8022E36C
 * Size:	000034
 * Matches
 */
CellIteratorArg::CellIteratorArg()
{
	_10 = 0;
	_14 = 0;

	m_sphere.m_position.x = 0.0f;
	m_sphere.m_position.y = 0.0f;
	m_sphere.m_position.z = 0.0f;
	m_sphere.m_radius     = 0.0f;

	m_cellMgr = cellMgr;

	_1D = 0;
	_1C = 0;
}

/*
 * --INFO--
 * Address:	8022E3A0
 * Size:	000040
 * Matches
 */
CellIteratorArg::CellIteratorArg(Sys::Sphere& sphere)
{
	m_sphere  = sphere;
	_10       = 0;
	_14       = 0;
	m_cellMgr = Game::cellMgr;
	_1D       = 0;
	_1C       = 0;
}

/*
 * --INFO--
 * Address:	8022E3E0
 * Size:	00007C
 * Matches
 */
CellIterator::CellIterator(Game::CellIteratorArg& arg) { m_arg = arg; }

/*
 * --INFO--
 * Address:	8022E45C
 * Size:	0000A4
 */
void CellIterator::first(void)
{
	// TODO: figure out WTF is going on with the cellMgr->passID access and
	// writes
	CellPyramid* cellMgr = m_arg.m_cellMgr;
	if (cellMgr->m_passID++ >= 0x4000000) {
		cellMgr->m_passID = 0;
	}

	m_passID = cellMgr->m_passID;

	_00 = 0;
	_0C = 0;

	calcExtent();

	// TODO: this is wrong!
	Cell* foundCell = &((Cell*)_0C)[cellMgr->m_passID];
	if (foundCell) {
		_00 = foundCell->_1C;
	}
	find();

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lis      r0, 0x400
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x3c(r3)
	lwz      r3, 0x44(r4)
	addi     r3, r3, 1
	stw      r3, 0x44(r4)
	lwz      r3, 0x44(r4)
	cmplw    r3, r0
	blt      lbl_8022E498
	li       r0, 0
	stw      r0, 0x44(r4)

lbl_8022E498:
	lwz      r4, 0x44(r4)
	li       r0, 0
	mr       r3, r31
	stw      r4, 0x20(r31)
	stw      r0, 0(r31)
	stw      r0, 0xc(r31)
	bl       calcExtent__Q24Game12CellIteratorFv
	lwz      r0, 0xc(r31)
	lwz      r3, 0x3c(r31)
	mulli    r0, r0, 0x38
	lwz      r4, 4(r31)
	lwz      r3, 0x30(r3)
	lwz      r5, 8(r31)
	add      r3, r3, r0
	bl       __cl__Q24Game9CellLayerFii
	cmplwi   r3, 0
	beq      lbl_8022E4E4
	lwz      r0, 0x1c(r3)
	stw      r0, 0(r31)

lbl_8022E4E4:
	mr       r3, r31
	bl       find__Q24Game12CellIteratorFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022E500
 * Size:	000034
 * Matches
 */
bool CellIterator::next()
{
	step();
	return find();
}

/*
 * --INFO--
 * Address:	8022E534
 * Size:	000010
 * Matches
 */
bool CellIterator::isDone(void) { return _00 == 0; }

// /*
//  * --INFO--
//  * Address:	8022E544
//  * Size:	00001C
//  */
// void CellIterator::operator*(void)
// {
// 	/*
// 	lwz      r3, 0(r3)
// 	cmplwi   r3, 0
// 	beq      lbl_8022E558
// 	lwz      r3, 0xc(r3)
// 	blr

// lbl_8022E558:
// 	li       r3, 0
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022E560
//  * Size:	00001C
//  */
// void CellIterator::getCellObject(void)
// {
// 	/*
// 	lwz      r3, 0(r3)
// 	cmplwi   r3, 0
// 	beq      lbl_8022E574
// 	lwz      r3, 0xc(r3)
// 	blr

// lbl_8022E574:
// 	li       r3, 0
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022E57C
//  * Size:	0000EC
//  */
// void CellIterator::step(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r3, 0(r3)
// 	cmplwi   r3, 0
// 	beq      lbl_8022E5A4
// 	lwz      r0, 0(r3)
// 	stw      r0, 0(r31)

// lbl_8022E5A4:
// 	lwz      r0, 0(r31)
// 	cmplwi   r0, 0
// 	bne      lbl_8022E650
// 	lwz      r3, 8(r31)
// 	addi     r0, r3, 1
// 	stw      r0, 8(r31)
// 	lwz      r3, 8(r31)
// 	lwz      r0, 0x1c(r31)
// 	cmpw     r3, r0
// 	ble      lbl_8022E620
// 	lwz      r0, 0x14(r31)
// 	stw      r0, 8(r31)
// 	lwz      r3, 4(r31)
// 	addi     r0, r3, 1
// 	stw      r0, 4(r31)
// 	lwz      r3, 4(r31)
// 	lwz      r0, 0x18(r31)
// 	cmpw     r3, r0
// 	ble      lbl_8022E620
// 	lwz      r3, 0xc(r31)
// 	addi     r0, r3, 1
// 	stw      r0, 0xc(r31)
// 	lwz      r3, 0x3c(r31)
// 	lwz      r4, 0xc(r31)
// 	lwz      r0, 0x2c(r3)
// 	cmpw     r4, r0
// 	blt      lbl_8022E618
// 	li       r3, 0
// 	b        lbl_8022E654

// lbl_8022E618:
// 	mr       r3, r31
// 	bl       calcExtent__Q24Game12CellIteratorFv

// lbl_8022E620:
// 	lwz      r0, 0xc(r31)
// 	lwz      r3, 0x3c(r31)
// 	mulli    r0, r0, 0x38
// 	lwz      r4, 4(r31)
// 	lwz      r3, 0x30(r3)
// 	lwz      r5, 8(r31)
// 	add      r3, r3, r0
// 	bl       __cl__Q24Game9CellLayerFii
// 	cmplwi   r3, 0
// 	beq      lbl_8022E650
// 	lwz      r0, 0x1c(r3)
// 	stw      r0, 0(r31)

// lbl_8022E650:
// 	li       r3, 1

// lbl_8022E654:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022E668
//  * Size:	000110
//  */
// void CellIterator::find(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3

// lbl_8022E67C:
// 	mr       r3, r31
// 	bl       satisfy__Q24Game12CellIteratorFv
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_8022E694
// 	li       r3, 1
// 	b        lbl_8022E764

// lbl_8022E694:
// 	lwz      r3, 0(r31)
// 	cmplwi   r3, 0
// 	beq      lbl_8022E6A8
// 	lwz      r0, 0(r3)
// 	stw      r0, 0(r31)

// lbl_8022E6A8:
// 	lwz      r0, 0(r31)
// 	cmplwi   r0, 0
// 	bne      lbl_8022E754
// 	lwz      r3, 8(r31)
// 	addi     r0, r3, 1
// 	stw      r0, 8(r31)
// 	lwz      r3, 8(r31)
// 	lwz      r0, 0x1c(r31)
// 	cmpw     r3, r0
// 	ble      lbl_8022E724
// 	lwz      r0, 0x14(r31)
// 	stw      r0, 8(r31)
// 	lwz      r3, 4(r31)
// 	addi     r0, r3, 1
// 	stw      r0, 4(r31)
// 	lwz      r3, 4(r31)
// 	lwz      r0, 0x18(r31)
// 	cmpw     r3, r0
// 	ble      lbl_8022E724
// 	lwz      r3, 0xc(r31)
// 	addi     r0, r3, 1
// 	stw      r0, 0xc(r31)
// 	lwz      r3, 0x3c(r31)
// 	lwz      r4, 0xc(r31)
// 	lwz      r0, 0x2c(r3)
// 	cmpw     r4, r0
// 	blt      lbl_8022E71C
// 	li       r0, 0
// 	b        lbl_8022E758

// lbl_8022E71C:
// 	mr       r3, r31
// 	bl       calcExtent__Q24Game12CellIteratorFv

// lbl_8022E724:
// 	lwz      r0, 0xc(r31)
// 	lwz      r3, 0x3c(r31)
// 	mulli    r0, r0, 0x38
// 	lwz      r4, 4(r31)
// 	lwz      r3, 0x30(r3)
// 	lwz      r5, 8(r31)
// 	add      r3, r3, r0
// 	bl       __cl__Q24Game9CellLayerFii
// 	cmplwi   r3, 0
// 	beq      lbl_8022E754
// 	lwz      r0, 0x1c(r3)
// 	stw      r0, 0(r31)

// lbl_8022E754:
// 	li       r0, 1

// lbl_8022E758:
// 	clrlwi.  r0, r0, 0x18
// 	bne      lbl_8022E67C
// 	li       r3, 0

// lbl_8022E764:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022E778
//  * Size:	00018C
//  */
// void CellIterator::satisfy(void)
// {
// 	/*
// 	stwu     r1, -0x50(r1)
// 	mflr     r0
// 	stw      r0, 0x54(r1)
// 	stfd     f31, 0x40(r1)
// 	psq_st   f31, 72(r1), 0, qr0
// 	stfd     f30, 0x30(r1)
// 	psq_st   f30, 56(r1), 0, qr0
// 	stw      r31, 0x2c(r1)
// 	stw      r30, 0x28(r1)
// 	mr       r30, r3
// 	lwz      r3, 0(r3)
// 	cmplwi   r3, 0
// 	bne      lbl_8022E7B4
// 	li       r3, 0
// 	b        lbl_8022E8DC

// lbl_8022E7B4:
// 	beq      lbl_8022E7CC
// 	lwz      r4, 0xc(r3)
// 	lwz      r0, 0x20(r30)
// 	lwz      r3, 0xa4(r4)
// 	cmplw    r3, r0
// 	bne      lbl_8022E7D4

// lbl_8022E7CC:
// 	li       r3, 0
// 	b        lbl_8022E8DC

// lbl_8022E7D4:
// 	lwz      r3, 0x34(r30)
// 	cmplwi   r3, 0
// 	beq      lbl_8022E800
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8022E800
// 	li       r3, 0
// 	b        lbl_8022E8DC

// lbl_8022E800:
// 	lwz      r4, 0(r30)
// 	addi     r3, r1, 8
// 	lwz      r31, 0xc(r4)
// 	mr       r4, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r3, r31
// 	addi     r4, r1, 0x14
// 	lwz      r12, 0(r31)
// 	lfs      f31, 8(r1)
// 	lwz      r12, 0x10(r12)
// 	lfs      f30, 0x10(r1)
// 	mtctr    r12
// 	bctrl
// 	lbz      r0, 0x40(r30)
// 	cmplwi   r0, 0
// 	bne      lbl_8022E8C8
// 	lwz      r0, 0x38(r30)
// 	cmpwi    r0, 0
// 	bne      lbl_8022E890
// 	lfs      f0, 0x2c(r30)
// 	lfs      f2, 0x24(r30)
// 	fsubs    f3, f30, f0
// 	lfs      f1, 0x30(r30)
// 	lfs      f0, 0x20(r1)
// 	fsubs    f2, f31, f2
// 	fadds    f1, f1, f0
// 	fmuls    f0, f3, f3
// 	fmuls    f1, f1, f1
// 	fmadds   f0, f2, f2, f0
// 	fcmpo    cr0, f0, f1
// 	ble      lbl_8022E8C8
// 	li       r3, 0
// 	b        lbl_8022E8DC

// lbl_8022E890:
// 	lfs      f0, 0x2c(r30)
// 	lfs      f2, 0x24(r30)
// 	fsubs    f30, f30, f0
// 	lfs      f1, 0x30(r30)
// 	lfs      f0, 0x20(r1)
// 	fsubs    f31, f31, f2
// 	fadds    f1, f1, f0
// 	fmuls    f0, f30, f30
// 	fmuls    f1, f1, f1
// 	fmadds   f0, f31, f31, f0
// 	fcmpo    cr0, f0, f1
// 	ble      lbl_8022E8C8
// 	li       r3, 0
// 	b        lbl_8022E8DC

// lbl_8022E8C8:
// 	lwz      r4, 0(r30)
// 	li       r3, 1
// 	lwz      r0, 0x20(r30)
// 	lwz      r4, 0xc(r4)
// 	stw      r0, 0xa4(r4)

// lbl_8022E8DC:
// 	psq_l    f31, 72(r1), 0, qr0
// 	lfd      f31, 0x40(r1)
// 	psq_l    f30, 56(r1), 0, qr0
// 	lfd      f30, 0x30(r1)
// 	lwz      r31, 0x2c(r1)
// 	lwz      r0, 0x54(r1)
// 	lwz      r30, 0x28(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x50
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8022E904
//  * Size:	00018C
//  */
// void CellIterator::calcExtent(void)
// {
// 	/*
// 	stwu     r1, -0x40(r1)
// 	mflr     r0
// 	lfd      f2, lbl_8051A318@sda21(r2)
// 	stw      r0, 0x44(r1)
// 	lis      r0, 0x4330
// 	lfs      f3, lbl_8051A304@sda21(r2)
// 	stw      r31, 0x3c(r1)
// 	mr       r31, r3
// 	lwz      r3, 0xc(r3)
// 	lwz      r5, 0x3c(r31)
// 	mulli    r3, r3, 0x38
// 	stw      r0, 8(r1)
// 	lwz      r4, 0x30(r5)
// 	lfs      f0, 0x34(r5)
// 	addi     r0, r3, 4
// 	lfs      f6, 0x30(r31)
// 	lhzx     r0, r4, r0
// 	lfs      f7, 0x2c(r31)
// 	stw      r0, 0xc(r1)
// 	lfs      f4, 0x24(r31)
// 	fsubs    f5, f7, f6
// 	lfd      f1, 8(r1)
// 	lfs      f9, 0x40(r5)
// 	fsubs    f2, f1, f2
// 	lfs      f8, 0x3c(r5)
// 	fsubs    f1, f4, f6
// 	fadds    f4, f4, f6
// 	fmuls    f2, f2, f0
// 	fadds    f0, f7, f6
// 	fsubs    f1, f1, f9
// 	fdivs    f6, f3, f2
// 	fsubs    f2, f5, f8
// 	fmuls    f1, f1, f6
// 	fsubs    f4, f4, f9
// 	fmuls    f2, f2, f6
// 	fctiwz   f3, f1
// 	fsubs    f0, f0, f8
// 	fmuls    f1, f4, f6
// 	fctiwz   f2, f2
// 	stfd     f3, 0x10(r1)
// 	fmuls    f0, f0, f6
// 	fctiwz   f1, f1
// 	lwz      r0, 0x14(r1)
// 	stfd     f2, 0x18(r1)
// 	fctiwz   f0, f0
// 	stfd     f1, 0x20(r1)
// 	lwz      r3, 0x1c(r1)
// 	stw      r0, 0x10(r31)
// 	lwz      r0, 0x24(r1)
// 	stw      r3, 0x14(r31)
// 	stfd     f0, 0x28(r1)
// 	stw      r0, 0x18(r31)
// 	lwz      r0, 0x2c(r1)
// 	stw      r0, 0x1c(r31)
// 	lwz      r6, 0x10(r31)
// 	lwz      r7, 0x18(r31)
// 	cmpw     r6, r7
// 	ble      lbl_8022EA04
// 	lis      r3, lbl_80483828@ha
// 	li       r4, 0xf9
// 	addi     r3, r3, lbl_80483828@l
// 	addi     r5, r2, lbl_8051A308@sda21
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_8022EA04:
// 	lwz      r6, 0x14(r31)
// 	lwz      r7, 0x1c(r31)
// 	cmpw     r6, r7
// 	ble      lbl_8022EA2C
// 	lis      r3, lbl_80483828@ha
// 	li       r4, 0xfc
// 	addi     r3, r3, lbl_80483828@l
// 	addi     r5, r2, lbl_8051A310@sda21
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_8022EA2C:
// 	lwz      r6, 0x10(r31)
// 	lwz      r8, 0x18(r31)
// 	lwz      r7, 0x14(r31)
// 	lwz      r9, 0x1c(r31)
// 	subf     r3, r6, r8
// 	subf     r0, r7, r9
// 	mullw    r0, r3, r0
// 	cmpwi    r0, 0x2710
// 	blt      lbl_8022EA6C
// 	lis      r3, lbl_80483828@ha
// 	lis      r4, lbl_8048383C@ha
// 	addi     r5, r4, lbl_8048383C@l
// 	addi     r3, r3, lbl_80483828@l
// 	li       r4, 0x103
// 	crclr    6
// 	bl       panic_f__12JUTExceptionFPCciPCce

// lbl_8022EA6C:
// 	lwz      r0, 0x10(r31)
// 	stw      r0, 4(r31)
// 	lwz      r0, 0x14(r31)
// 	stw      r0, 8(r31)
// 	lwz      r31, 0x3c(r1)
// 	lwz      r0, 0x44(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x40
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8022EA90
 * Size:	000004
 */
void CellIterator::dump(void) { }
} // namespace Game
