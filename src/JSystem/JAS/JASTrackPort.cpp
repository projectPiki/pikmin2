#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	8009C310
 * Size:	000088
 */
void JASTrackPort::init()
{
	/*
	li       r0, 2
	mr       r4, r3
	li       r6, 0
	mtctr    r0

lbl_8009C320:
	add      r5, r3, r6
	li       r0, 0
	stb      r0, 0(r5)
	addi     r6, r6, 8
	stb      r0, 0x10(r5)
	sth      r0, 0x20(r4)
	stb      r0, 1(r5)
	stb      r0, 0x11(r5)
	sth      r0, 0x22(r4)
	stb      r0, 2(r5)
	stb      r0, 0x12(r5)
	sth      r0, 0x24(r4)
	stb      r0, 3(r5)
	stb      r0, 0x13(r5)
	sth      r0, 0x26(r4)
	stb      r0, 4(r5)
	stb      r0, 0x14(r5)
	sth      r0, 0x28(r4)
	stb      r0, 5(r5)
	stb      r0, 0x15(r5)
	sth      r0, 0x2a(r4)
	stb      r0, 6(r5)
	stb      r0, 0x16(r5)
	sth      r0, 0x2c(r4)
	stb      r0, 7(r5)
	stb      r0, 0x17(r5)
	sth      r0, 0x2e(r4)
	addi     r4, r4, 0x10
	bdnz     lbl_8009C320
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C398
 * Size:	000018
 */
void JASTrackPort::readImport(int)
{
	/*
	li       r5, 0
	slwi     r0, r4, 1
	stbx     r5, r3, r4
	add      r3, r3, r0
	lhz      r3, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C3B0
 * Size:	00001C
 */
void JASTrackPort::readExport(int)
{
	/*
	add      r5, r3, r4
	li       r6, 0
	slwi     r0, r4, 1
	stb      r6, 0x10(r5)
	add      r3, r3, r0
	lhz      r3, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C3CC
 * Size:	000018
 */
void JASTrackPort::writeImport(int, unsigned short)
{
	/*
	li       r6, 1
	slwi     r0, r4, 1
	stbx     r6, r3, r4
	add      r3, r3, r0
	sth      r5, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C3E4
 * Size:	00001C
 */
void JASTrackPort::writeExport(int, unsigned short)
{
	/*
	add      r6, r3, r4
	li       r7, 1
	slwi     r0, r4, 1
	stb      r7, 0x10(r6)
	add      r3, r3, r0
	sth      r5, 0x20(r3)
	blr
	*/
}
