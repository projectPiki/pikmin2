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

/**
 * @note Address: 0x80093A40
 * @note Size: 0x10
 */
JPAKeyBlock::JPAKeyBlock(const u8* data)
    : mDataStart(data)
    , _04(reinterpret_cast<const float*>(&data[0xC]))
{
}

/**
 * @notDone
 * @note Address: N/A
 * @note Size: 0xC4
 */
void JPAKeyBlock::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80093A50
 * @note Size: 0x94
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
