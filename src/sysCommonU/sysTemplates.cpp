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

void BitFlags::reset()
{
/*
.loc_0x0:
  li        r6, 0
  li        r5, 0
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x0(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x6(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  blr

}

/*
* --INFO--
* Address:	8041C34C
* Size:	000028

void BitFlags::all_zero()
{
/*
.loc_0x0:
  li        r6, 0
  mr        r5, r6
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x0(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x6(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  blr

}

/*
* --INFO--
* Address:	8041C374
* Size:	000028

void BitFlags::all_one()
{
/*
.loc_0x0:
  li        r6, 0
  li        r5, 0xFF
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x0(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x6(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  blr

}

/*
* --INFO--
* Address:	8041C39C
* Size:	000030

void BitFlags::setFlag(unsigned short)
{
/*
.loc_0x0:
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

void BitFlags::resetFlag(unsigned short)
{
/*
.loc_0x0:
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

void BitFlags::isFlag(unsigned short)
{
/*
.loc_0x0:
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
*/