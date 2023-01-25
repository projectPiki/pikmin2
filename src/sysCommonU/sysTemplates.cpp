#include "types.h"

#include "BitFlags.h"

/*
 * --INFO--
 * Address:	8041C1A8
 * Size:	000010
 */
BitFlags::BitFlags()
    : mFlagArr(0)
    , mFlagCnt(0)
{
}

/*
 * --INFO--
 * Address:	8041C1B8
 * Size:	000050
 */
void BitFlags::dump()
{
	for (s32 i = 0; i < mFlagCnt; i++) { }
}

/*
 * --INFO--
 * Address:	8041C208
 * Size:	000064
 */
void BitFlags::read(Stream& stream)
{
	for (s32 i = 0; i < mFlagCnt; i++) {
		mFlagArr[i] = stream.readByte();
	}
}

/*
 * --INFO--
 * Address:	8041C26C
 * Size:	000064
 */
void BitFlags::write(Stream& stream)
{
	for (s32 i = 0; i < mFlagCnt; i++) {
		stream.writeByte(mFlagArr[i]);
	}
}

/*
 * --INFO--
 * Address:	8041C2D0
 * Size:	000054
 */
void BitFlags::create(u16 arg1, u8* flags)
{
	_04      = arg1;
	mFlagCnt = (arg1 >> 3) + 1;

	if (flags) {
		mFlagArr = flags;
	} else {
		mFlagArr = new u8[mFlagCnt];
	}
}

/*
 * --INFO--
 * Address:	8041C324
 * Size:	000028
 */
void BitFlags::reset()
{
	for (s32 i = 0; i < mFlagCnt; i++) {
		mFlagArr[i] = 0;
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
void BitFlags::setFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	mFlagArr[index] |= 1 << input;
}

/*
 * --INFO--
 * Address:	8041C3CC
 * Size:	000030
 */
void BitFlags::resetFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	mFlagArr[index] &= ~(1 << input);
}

/*
 * --INFO--
 * Address:	8041C3FC
 * Size:	000038
 */
bool BitFlags::isFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	return (mFlagArr[index] & (1 << input)) != 0;
}
