#include "types.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAMath.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C10
    lbl_80516C10:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	80093A40
 * Size:	000010
 */
JPAKeyBlock::JPAKeyBlock(const u8* data)
    : mDataStart(data)
    , _04(reinterpret_cast<const float*>(&data[0xC]))
{
}

/*
 * @notDone
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JPAKeyBlock::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80093A50
 * Size:	000094
 */
void JPAKeyBlock::calc(float p1)
{
	if (mDataStart[0xB] != '\0') {
		int v1 = (int)_04[(mDataStart[9] - 1) * 4] + 1;
		// p1 -= (v1 * ((int)p1 / v1));
		int v2 = ((int)p1 / v1);
		p1     = p1 - (v2 * v1);
	}
	JPACalcKeyAnmValue(p1, mDataStart[9], _04);
}
