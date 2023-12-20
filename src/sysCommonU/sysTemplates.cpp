#include "types.h"

#include "BitFlags.h"

/**
 * @note Address: 0x8041C1A8
 * @note Size: 0x10
 */
BitFlags::BitFlags()
    : mFlagArr(0)
    , mFlagCnt(0)
{
}

/**
 * @note Address: 0x8041C1B8
 * @note Size: 0x50
 */
void BitFlags::dump()
{
	for (s32 i = 0; i < mFlagCnt; i++) { }
}

/**
 * @note Address: 0x8041C208
 * @note Size: 0x64
 */
void BitFlags::read(Stream& stream)
{
	for (s32 i = 0; i < mFlagCnt; i++) {
		mFlagArr[i] = stream.readByte();
	}
}

/**
 * @note Address: 0x8041C26C
 * @note Size: 0x64
 */
void BitFlags::write(Stream& stream)
{
	for (s32 i = 0; i < mFlagCnt; i++) {
		stream.writeByte(mFlagArr[i]);
	}
}

/**
 * @note Address: 0x8041C2D0
 * @note Size: 0x54
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

/**
 * @note Address: 0x8041C324
 * @note Size: 0x28
 */
void BitFlags::reset()
{
	for (s32 i = 0; i < mFlagCnt; i++) {
		mFlagArr[i] = 0;
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
	mFlagArr[index] |= 1 << input;
}

/**
 * @note Address: 0x8041C3CC
 * @note Size: 0x30
 */
void BitFlags::resetFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	mFlagArr[index] &= ~(1 << input);
}

/**
 * @note Address: 0x8041C3FC
 * @note Size: 0x38
 */
bool BitFlags::isFlag(u16 input)
{
	u16 index = input >> 3;
	input     = (input - (input & ~7));
	return (mFlagArr[index] & (1 << input)) != 0;
}
