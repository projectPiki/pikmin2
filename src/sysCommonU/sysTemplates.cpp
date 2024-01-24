#include "types.h"

#include "BitFlags.h"

/**
 * @note Address: 0x8041C1A8
 * @note Size: 0x10
 */
BitFlags::BitFlags()
    : mFlagList(0)
    , mFlagListSize(0)
{
}

/**
 * @note Address: 0x8041C1B8
 * @note Size: 0x50
 */
void BitFlags::dump()
{
	for (s32 i = 0; i < mFlagListSize; i++) { }
}

/**
 * @note Address: 0x8041C208
 * @note Size: 0x64
 */
void BitFlags::read(Stream& stream)
{
	for (s32 i = 0; i < mFlagListSize; i++) {
		mFlagList[i] = stream.readByte();
	}
}

/**
 * @note Address: 0x8041C26C
 * @note Size: 0x64
 */
void BitFlags::write(Stream& stream)
{
	for (s32 i = 0; i < mFlagListSize; i++) {
		stream.writeByte(mFlagList[i]);
	}
}

/**
 * @note Address: 0x8041C2D0
 * @note Size: 0x54
 */
void BitFlags::create(u16 totalSize, u8* flags)
{
	mTotalValueAmount = totalSize;

	// Divides by 8 and rounds up (to accomodate anything non-divisible by 8), as each u8 contains 8 bits
	mFlagListSize = (totalSize >> 3) + 1;

	if (flags) {
		mFlagList = flags;
	} else {
		mFlagList = new u8[mFlagListSize];
	}
}

/**
 * @note Address: 0x8041C324
 * @note Size: 0x28
 */
void BitFlags::reset()
{
	for (s32 i = 0; i < mFlagListSize; i++) {
		mFlagList[i] = 0;
	}
}

/**
 * @note Address: 0x8041C34C
 * @note Size: 0x28
 */
void BitFlags::all_zero() { set_all(0); }

/**
 * @note Address: 0x8041C374
 * @note Size: 0x28
 */
void BitFlags::all_one() { set_all(0xFF); }

/**
 * @note Address: 0x8041C39C
 * @note Size: 0x30
 */
void BitFlags::setFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	mFlagList[index] |= 1 << input;
}

/**
 * @note Address: 0x8041C3CC
 * @note Size: 0x30
 */
void BitFlags::resetFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	mFlagList[index] &= ~(1 << input);
}

/**
 * @note Address: 0x8041C3FC
 * @note Size: 0x38
 */
bool BitFlags::isFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	return (mFlagList[index] & (1 << input)) != 0;
}
