#include "JSystem/JAS/JASSeqCtrl.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	8009C858
 * Size:	000060
 */
void JASSeqCtrl::init()
{
	_00 = nullptr;
	_04 = nullptr;
	_08 = 0;
	_0C = 0;
	for (int i = 0; i < 8; i++) {
		_10[i] = nullptr;
		_30[i] = 0;
	}
	_40 = 0;
	_44 = nullptr;
}

/*
 * --INFO--
 * Address:	8009C8B8
 * Size:	000014
 */
void JASSeqCtrl::start(void* p1, u32 p2)
{
	_00 = static_cast<u8*>(p1);
	_04 = _00 + p2;
}

/*
 * --INFO--
 * Address:	8009C8CC
 * Size:	00006C
 */
bool JASSeqCtrl::loopEnd()
{
	u32 v1 = _0C;
	if (v1 == 0) {
		return false;
	}
	u16 v2 = _30[v1 - 1];
	if (v2 != 0) {
		v2--;
	}
	if (v2 == 0) {
		_0C--;
		return true;
	}
	_30[v1 - 1] = v2;
	_04         = _10[_0C - 1];
	return true;
}

/*
 * --INFO--
 * Address:	8009C938
 * Size:	000030
 */
bool JASSeqCtrl::waitCountDown()
{
	if (0 < _08) {
		_08--;
		if (_08 != 0) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8009C968
 * Size:	000038
 */
bool JASSeqCtrl::callIntr(void* p1)
{
	if (_44 != nullptr) {
		return false;
	}
	_44 = _04;
	_04 = static_cast<u8*>(p1);
	_40 = _08;
	_08 = 0;
	return true;
}

/*
 * --INFO--
 * Address:	8009C9A0
 * Size:	000034
 */
bool JASSeqCtrl::retIntr()
{
	if (_44 == nullptr) {
		return false;
	}
	_08 = _40;
	_04 = _44;
	_44 = nullptr;
	return true;
}

/*
 * --INFO--
 * Address:	8009C9D4
 * Size:	000018
 */
u16 JASSeqCtrl::get16(u32 p1) const
{
	u32 high = _00[p1++];
	return _00[p1] + (high << 0x8);
	// u32 high = ((u32)_00[p1++]) << 0x8;
	// return _00[p1] + high;
	// u32 high = _00[p1++] << 0x8;
	// return _00[p1] + high;
	// u32 high = _00[p1++] << 0x8;
	// return high + _00[p1];
	// u32 high = _00[p1++];
	// u32 low = _00[p1];
	// return (high << 0x8) + low;
	// u32 high = _00[p1++];
	// return (high << 0x8) + _00[p1];
	// return ((u32)_00[p1++] << 0x8) + ((u32)_00[p1]);
	// return ((u32)_00[p1] << 0x8) + ((u32)_00[p1+1]);
	/*
	lwz      r3, 0(r3)
	addi     r0, r4, 1
	lbzx     r4, r3, r4
	lbzx     r3, r3, r0
	rlwimi   r3, r4, 8, 0x10, 0x17
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C9EC
 * Size:	000028
 */
u32 JASSeqCtrl::get24(unsigned long) const
{
	/*
	lwz      r5, 0(r3)
	addi     r6, r4, 1
	lbzx     r4, r5, r4
	lbzx     r3, r5, r6
	addi     r6, r6, 1
	rlwimi   r3, r4, 8, 0x10, 0x17
	lbzx     r0, r5, r6
	slwi     r3, r3, 8
	or       r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009CA14
 * Size:	000038
 */
u32 JASSeqCtrl::get32(unsigned long) const
{
	/*
	lwz      r6, 0(r3)
	addi     r7, r4, 1
	lbzx     r5, r6, r4
	lbzx     r3, r6, r7
	addi     r7, r7, 1
	lbzx     r4, r6, r7
	rlwimi   r3, r5, 8, 0x10, 0x17
	addi     r7, r7, 1
	slwi     r3, r3, 8
	lbzx     r0, r6, r7
	or       r3, r3, r4
	slwi     r3, r3, 8
	or       r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009CA4C
 * Size:	000028
 */
u16 JASSeqCtrl::read16()
{
	/*
	lwz      r5, 4(r3)
	addi     r0, r5, 1
	stw      r0, 4(r3)
	lwz      r4, 4(r3)
	lbz      r5, 0(r5)
	addi     r0, r4, 1
	stw      r0, 4(r3)
	lbz      r3, 0(r4)
	rlwimi   r3, r5, 8, 0x10, 0x17
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009CA74
 * Size:	000044
 */
u32 JASSeqCtrl::read24()
{
	/*
	lwz      r4, 4(r3)
	addi     r0, r4, 1
	stw      r0, 4(r3)
	lwz      r5, 4(r3)
	lbz      r6, 0(r4)
	addi     r0, r5, 1
	stw      r0, 4(r3)
	lwz      r4, 4(r3)
	lbz      r5, 0(r5)
	addi     r0, r4, 1
	stw      r0, 4(r3)
	mr       r3, r5
	rlwimi   r3, r6, 8, 0x10, 0x17
	lbz      r0, 0(r4)
	slwi     r3, r3, 8
	or       r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
u32 JASSeqCtrl::read32()
{
	// UNUSED FUNCTION
}
