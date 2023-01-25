#include "JSystem/JAS/JASTrack.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	800A29F8
 * Size:	000044
 */
void JASIntrMgr::init()
{
	_00 = 1;
	_01 = 0;
	_02 = 0;
	_03 = 0;
	_04 = 0;
	_08 = 0;
	for (int i = 0; i < 8; i++) {
		_0C[i] = nullptr;
	}
}

/*
 * --INFO--
 * Address:	800A2A3C
 * Size:	000024
 */
void JASIntrMgr::request(u32 interrupt)
{
	if ((_02 & (1 << interrupt)) == 0) {
		return;
	}
	_01 |= 1 << interrupt;
}

/*
 * --INFO--
 * Address:	800A2A60
 * Size:	000024
 */
void JASIntrMgr::setIntr(u32 interrupt, void* data)
{
	_02 |= 1 << interrupt;
	_0C[interrupt] = data;
}

/*
 * --INFO--
 * Address:	800A2A84
 * Size:	000018
 */
void JASIntrMgr::resetInter(u32 interrupt) { _02 &= ~(1 << interrupt); }

/*
 * --INFO--
 * Address:	800A2A9C
 * Size:	00006C
 */
void* JASIntrMgr::checkIntr()
{
	if (_00 == 0) {
		return nullptr;
	}
	for (u32 i = 0, v1 = _02 & _01; v1 != 0; v1 >>= 1) {
		if (v1 & 1) {
			_01 &= ~(1 << i);
			return _0C[i];
		}
	}
	return nullptr;
	/*
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800A2AB0
	li       r3, 0
	blr

lbl_800A2AB0:
	lbz      r4, 2(r3)
	li       r6, 0
	lbz      r0, 1(r3)
	and      r4, r4, r0
	b        lbl_800A2AF8

lbl_800A2AC4:
	clrlwi.  r0, r4, 0x1f
	beq      lbl_800A2AF0
	li       r0, 1
	lbz      r5, 1(r3)
	slw      r4, r0, r6
	andc     r4, r5, r4
	slwi     r0, r6, 2
	stb      r4, 1(r3)
	add      r3, r3, r0
	lwz      r3, 0xc(r3)
	blr

lbl_800A2AF0:
	srwi     r4, r4, 1
	addi     r6, r6, 1

lbl_800A2AF8:
	cmplwi   r4, 0
	bne      lbl_800A2AC4
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2B08
 * Size:	000070
 */
void JASIntrMgr::timerProcess()
{
	if (_04 == 0) {
		return;
	}
	_04--;
	if (_04 != 0) {
		return;
	}
	if ((_02 & 0x40) != 0) {
		_01 |= 0x40;
	}
	if (_03) {
		_03--;
		if (_03 == 0) {
			return;
		}
		_04 = _08;
		return;
	}
	_04 = _08;
	return;
}
