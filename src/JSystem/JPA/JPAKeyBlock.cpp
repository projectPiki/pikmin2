#include "types.h"
#include "JSystem/JPA/JPABlock.h"
#include "JSystem/JPA/JPAMath.h"

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
    : m_dataStart(data)
    , _04(reinterpret_cast<const float*>(&data[0xC]))
{
}

/*
 * @notDone
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JPAKeyBlock::init_jpa(const unsigned char*, JKRHeap*)
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
	if (m_dataStart[0xB] != '\0') {
		int v1 = (int)_04[(m_dataStart[9] - 1) * 4] + 1;
		// p1 -= (v1 * ((int)p1 / v1));
		int v2 = ((int)p1 / v1);
		p1     = p1 - (v2 * v1);
	}
	JPACalcKeyAnmValue(p1, m_dataStart[9], _04);
}
