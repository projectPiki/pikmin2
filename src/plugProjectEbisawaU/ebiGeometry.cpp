#include "Vector2.h"
#include "ebi/Geometry.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F9F0
    lbl_8051F9F0:
        .4byte 0x00000000
    .global lbl_8051F9F4
    lbl_8051F9F4:
        .float 1.0
*/

namespace ebi {

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
bool EGEBox2f::isIn(Vector2f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C9FF4
 * Size:	000058
 */
bool EGEBox2f::isOut(Vector2f& point)
{
	if (point.x < minX) {
		return true;
	}
	if (maxX < point.x) {
		return true;
	}
	if (point.y < minY) {
		return true;
	}
	if (maxY < point.y) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void in__Q23ebi8EGEBox2fFP10Vector2<float>(void)
void EGEBox2f::in(Vector2f*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CA04C
 * Size:	000070
 */
// void isIn__Q23ebi8EGEBox2fFR10Vector2<float> f(void)
bool EGEBox2f::isIn(Vector2f& point, float pointSize) const
{
	if (point.x - pointSize < minX) {
		return false;
	}
	if (maxX < point.x + pointSize) {
		return false;
	}
	if (point.y - pointSize < minY) {
		return false;
	}
	return (maxY < point.y + pointSize) == false;
	/*
	lfs      f3, 0(r4)
	lfs      f0, 0(r3)
	fsubs    f2, f3, f1
	fcmpo    cr0, f2, f0
	bge      lbl_803CA068
	li       r3, 0
	blr

lbl_803CA068:
	fadds    f0, f3, f1
	lfs      f2, 8(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_803CA080
	li       r3, 0
	blr

lbl_803CA080:
	lfs      f3, 4(r4)
	lfs      f0, 4(r3)
	fsubs    f2, f3, f1
	fcmpo    cr0, f2, f0
	bge      lbl_803CA09C
	li       r3, 0
	blr

lbl_803CA09C:
	fadds    f0, f3, f1
	lfs      f1, 0xc(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CA0BC
 * Size:	000068
 */
// void isOut__Q23ebi8EGEBox2fFR10Vector2<float> f(void)
bool EGEBox2f::isOut(Vector2f& point, float pointSize) const
{
	if (point.x + pointSize < minX) {
		return true;
	}
	if (maxX < point.x - pointSize) {
		return true;
	}
	if (point.y + pointSize < minY) {
		return true;
	}
	return (maxY < point.y - pointSize);
	/*
	lfs      f3, 0(r4)
	lfs      f0, 0(r3)
	fadds    f2, f3, f1
	fcmpo    cr0, f2, f0
	bge      lbl_803CA0D8
	li       r3, 1
	blr

lbl_803CA0D8:
	fsubs    f0, f3, f1
	lfs      f2, 8(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_803CA0F0
	li       r3, 1
	blr

lbl_803CA0F0:
	lfs      f3, 4(r4)
	lfs      f0, 4(r3)
	fadds    f2, f3, f1
	fcmpo    cr0, f2, f0
	bge      lbl_803CA10C
	li       r3, 1
	blr

lbl_803CA10C:
	fsubs    f0, f3, f1
	lfs      f1, 0xc(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CA124
 * Size:	000064
 */
// void in__Q23ebi8EGEBox2fFP10Vector2<float> f(void)
void EGEBox2f::in(Vector2f*, float) const
{
	/*
	lfs      f0, 0(r3)
	lfs      f2, 0(r4)
	fadds    f0, f0, f1
	fcmpo    cr0, f2, f0
	bge      lbl_803CA140
	stfs     f0, 0(r4)
	b        lbl_803CA154

lbl_803CA140:
	lfs      f0, 8(r3)
	fsubs    f0, f0, f1
	fcmpo    cr0, f0, f2
	bge      lbl_803CA154
	stfs     f0, 0(r4)

lbl_803CA154:
	lfs      f0, 4(r3)
	lfs      f2, 4(r4)
	fadds    f0, f0, f1
	fcmpo    cr0, f2, f0
	bge      lbl_803CA170
	stfs     f0, 4(r4)
	blr

lbl_803CA170:
	lfs      f0, 0xc(r3)
	fsubs    f0, f0, f1
	fcmpo    cr0, f0, f2
	bgelr
	stfs     f0, 4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CA188
 * Size:	00005C
 */
// void isOut__Q23ebi11EGECircle2fFR10Vector2<float>(void)
bool EGECircle2f::isOut(Vector2f&) const
{
	/*
	lfs      f1, 4(r4)
	lfs      f0, 4(r3)
	lfs      f2, 0(r4)
	fsubs    f3, f1, f0
	lfs      f1, 0(r3)
	lfs      f0, lbl_8051F9F0@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f2, f3, f3
	fmadds   f1, f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_803CA1C4
	ble      lbl_803CA1C8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803CA1C8

lbl_803CA1C4:
	fmr      f1, f0

lbl_803CA1C8:
	lfs      f0, 8(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_803CA1DC
	li       r3, 1
	blr

lbl_803CA1DC:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CA1E4
 * Size:	0000B8
 */
// void in__Q23ebi11EGECircle2fFP10Vector2<float>(void)
void EGECircle2f::in(Vector2f*) const
{
	/*
	lfs      f7, 4(r3)
	lfs      f0, 4(r4)
	lfs      f8, 0(r3)
	fsubs    f3, f7, f0
	lfs      f0, 0(r4)
	lfs      f1, lbl_8051F9F0@sda21(r2)
	fsubs    f2, f8, f0
	fmuls    f4, f3, f3
	fmadds   f5, f2, f2, f4
	fcmpo    cr0, f5, f1
	ble      lbl_803CA224
	ble      lbl_803CA220
	frsqrte  f0, f5
	fmuls    f1, f0, f5
	b        lbl_803CA224

lbl_803CA220:
	fmr      f1, f5

lbl_803CA224:
	lfs      f6, 8(r3)
	fcmpo    cr0, f6, f1
	bge      lbl_803CA294
	lfs      f0, lbl_8051F9F0@sda21(r2)
	fcmpo    cr0, f5, f0
	ble      lbl_803CA254
	fmadds   f1, f2, f2, f4
	fcmpo    cr0, f1, f0
	ble      lbl_803CA258
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803CA258

lbl_803CA254:
	fmr      f1, f0

lbl_803CA258:
	lfs      f0, lbl_8051F9F0@sda21(r2)
	fcmpu    cr0, f0, f1
	beq      lbl_803CA274
	lfs      f0, lbl_8051F9F4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0

lbl_803CA274:
	fmuls    f2, f2, f6
	li       r3, 1
	fmuls    f3, f3, f6
	fsubs    f1, f8, f2
	fsubs    f0, f7, f3
	stfs     f1, 0(r4)
	stfs     f0, 4(r4)
	blr

lbl_803CA294:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CA29C
 * Size:	0000BC
 */
// void out__Q23ebi11EGECircle2fFP10Vector2<float>(void)
void EGECircle2f::out(Vector2f*) const
{
	/*
	lfs      f7, 4(r3)
	lfs      f0, 4(r4)
	lfs      f8, 0(r3)
	fsubs    f3, f7, f0
	lfs      f0, 0(r4)
	lfs      f1, lbl_8051F9F0@sda21(r2)
	fsubs    f2, f8, f0
	fmuls    f4, f3, f3
	fmadds   f5, f2, f2, f4
	fcmpo    cr0, f5, f1
	ble      lbl_803CA2DC
	ble      lbl_803CA2D8
	frsqrte  f0, f5
	fmuls    f1, f0, f5
	b        lbl_803CA2DC

lbl_803CA2D8:
	fmr      f1, f5

lbl_803CA2DC:
	lfs      f6, 8(r3)
	fcmpo    cr0, f6, f1
	cror     2, 0, 2
	bne      lbl_803CA2F4
	li       r3, 0
	blr

lbl_803CA2F4:
	lfs      f0, lbl_8051F9F0@sda21(r2)
	fcmpo    cr0, f5, f0
	ble      lbl_803CA318
	fmadds   f1, f2, f2, f4
	fcmpo    cr0, f1, f0
	ble      lbl_803CA31C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803CA31C

lbl_803CA318:
	fmr      f1, f0

lbl_803CA31C:
	lfs      f0, lbl_8051F9F0@sda21(r2)
	fcmpu    cr0, f0, f1
	beq      lbl_803CA338
	lfs      f0, lbl_8051F9F4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0

lbl_803CA338:
	fmuls    f2, f2, f6
	li       r3, 1
	fmuls    f3, f3, f6
	fsubs    f1, f8, f2
	fsubs    f0, f7, f3
	stfs     f1, 0(r4)
	stfs     f0, 4(r4)
	blr
	*/
}
} // namespace ebi
