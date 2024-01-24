#ifndef _BITFLAGS_H
#define _BITFLAGS_H

#include "stream.h"
#include "types.h"

/**
 * @brief Represents a collection of bit flags.
 */
struct BitFlags {
	u8* mFlagList;         // _00
	u16 mTotalValueAmount; // _04
	u16 mFlagListSize;     // _06

	/**
	 * @brief Default constructor for BitFlags.
	 */
	BitFlags();

	/**
	 * @brief Dumps the bit flags to the console.
	 * @note Stripped in the main game.
	 */
	void dump();

	/**
	 * @brief Reads the bit flags from a stream.
	 * @param stream The stream to read from.
	 */
	void read(Stream& stream);

	/**
	 * @brief Writes the bit flags to a stream.
	 * @param stream The stream to write to.
	 */
	void write(Stream& stream);

	/**
	 * @brief Creates the bit flags with the specified size and initial values.
	 * @param size The size of the bit flags.
	 * @param flags The initial values of the bit flags.
	 */
	void create(u16 totalSize, u8* flags);

	/**
	 * @brief Resets all the bit flags to zero.
	 */
	void reset();

	/**
	 * @brief Sets all the bit flags to zero.
	 */
	void all_zero();

	/**
	 * @brief Sets all the bit flags to one.
	 */
	void all_one();

	/**
	 * @brief Sets the specified bit flag.
	 * @param flag The index of the bit flag to set.
	 */
	void setFlag(u16 flag);

	/**
	 * @brief Resets the specified bit flag.
	 * @param flag The index of the bit flag to reset.
	 */
	void resetFlag(u16 flag);

	/**
	 * @brief Checks if the specified bit flag is set.
	 * @param flag The index of the bit flag to check.
	 * @return True if the bit flag is set, false otherwise.
	 */
	bool isFlag(u16 flag);

	/**
	 * @brief Sets all the bit flags to the specified value.
	 * @param value The value to set all the bit flags to.
	 */
	inline void set_all(u8 value)
	{
		for (s32 i = 0; i < mFlagListSize; i++) {
			mFlagList[i] = value;
		}
	}
};

#endif
