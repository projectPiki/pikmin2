#include "BitFlags.h"

/*
 * --INFO--
 * Address:	8041C1A8
 * Size:	000010
 */
BitFlags::BitFlags()
    : m_flagArr(0)
    , m_flagCnt(0)
{
}

/*
 * --INFO--
 * Address:	8041C1B8
 * Size:	000050
 */
void BitFlags::dump()
{
	for (s32 i = 0; i < m_flagCnt; i++) { }
}

/*
 * --INFO--
 * Address:	8041C208
 * Size:	000064
 */
void BitFlags::read(Stream& stream)
{
	for (s32 i = 0; i < m_flagCnt; i++) {
		m_flagArr[i] = stream.readByte();
	}
}

/*
 * --INFO--
 * Address:	8041C26C
 * Size:	000064
 */
void BitFlags::write(Stream& stream)
{
	for (s32 i = 0; i < m_flagCnt; i++) {
		stream.writeByte(m_flagArr[i]);
	}
}

/*
 * --INFO--
 * Address:	8041C2D0
 * Size:	000054
 */
void BitFlags::create(u16 arg1, u8* flags)
{
	_04       = arg1;
	m_flagCnt = (arg1 >> 3) + 1;

	if (flags) {
		m_flagArr = flags;
	} else {
		m_flagArr = new u8[m_flagCnt];
	}
}

/*
 * --INFO--
 * Address:	8041C324
 * Size:	000028
 */
void BitFlags::reset()
{
	for (s32 i = 0; i < m_flagCnt; i++) {
		m_flagArr[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	8041C34C
 * Size:	000028
 */
void BitFlags::all_zero() { set_all(0); }

/*
 * --INFO--
 * Address:	8041C374
 * Size:	000028
 */
void BitFlags::all_one() { set_all(0xFF); }

/*
 * --INFO--
 * Address:	8041C39C
 * Size:	000030
 */
// TODO: Finish this function
// clang-format off
asm void BitFlags::setFlag(u16 idx)
{
    // m_flagArr[r4 >> 3] |= 1 << (u8)(r4 - (r4 & 0xFFF8) & 0xFFFF);
    nofralloc
    rlwinm    r5,r4,0,16,31
    rlwinm    r0,r4,0,16,28
    sub       r0, r5, r0
    lwz       r5, 0x0(r3)
    rlwinm    r6,r4,29,19,31
    li        r3, 0x1
    rlwinm    r0,r0,0,16,31
    lbzx      r4, r5, r6
    slw       r0, r3, r0
    or        r0, r4, r0
    stbx      r0, r5, r6
    blr
}

/*
* --INFO--
* Address:	8041C3CC
* Size:	000030
*/
asm void BitFlags::resetFlag(u16 idx)
{
    nofralloc
    rlwinm    r5,r4,0,16,31
    rlwinm    r0,r4,0,16,28
    sub       r0, r5, r0
    lwz       r5, 0x0(r3)
    rlwinm    r6,r4,29,19,31
    li        r3, 0x1
    rlwinm    r0,r0,0,16,31
    lbzx      r4, r5, r6
    slw       r0, r3, r0
    andc      r0, r4, r0
    stbx      r0, r5, r6
    blr
}

/*
* --INFO--
* Address:	8041C3FC
* Size:	000038
*/
asm bool BitFlags::isFlag(u16 idx)
{
    nofralloc
    rlwinm    r5,r4,0,16,31
    rlwinm    r0,r4,0,16,28
    sub       r0, r5, r0
    lwz       r3, 0x0(r3)
    rlwinm    r6,r4,29,19,31
    li        r5, 0x1
    rlwinm    r4,r0,0,16,31
    lbzx      r0, r3, r6
    slw       r3, r5, r4
    and       r3, r3, r0
    neg       r0, r3
    or        r0, r0, r3
    rlwinm    r3,r0,1,31,31
    blr
}
// clang-format on
