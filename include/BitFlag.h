#ifndef _BITFLAG_H
#define _BITFLAG_H

#include "types.h"
#include "stream.h"

/**
 * @brief A template struct representing a bit flag.
 *
 * This struct provides functionality for manipulating and working with bit flags.
 * It allows setting, unsetting, clearing, reading, and writing bit flags.
 *
 * @tparam T The type of the bit flag.
 */
template <typename T>
struct BitFlag {
	/**
	 * @brief Default constructor.
	 *
	 * Initializes the byte view of the bit flag to all zeros.
	 */
	BitFlag()
	{
		for (int i = 0; i < sizeof(T); i++) {
			byteView[i] = 0;
		}
	}

	/**
	 * @brief Clears the bit flag.
	 *
	 * Sets all bytes of the byte view to zero.
	 */
	inline void clear()
	{
		for (int i = 0; i < sizeof(T); i++) {
			byteView[i] = 0;
		}
	}

	/**
	 * @brief Reads the bit flag from a stream.
	 *
	 * Reads each byte of the byte view from the given stream.
	 *
	 * @param stream The stream to read from.
	 */
	inline void readBytes(Stream& stream)
	{
		for (int i = 0; i < sizeof(T); i++) {
			byteView[i] = stream.readByte();
		}
	}

	/**
	 * @brief Writes the bit flag to a stream.
	 *
	 * Writes each byte of the byte view to the given stream.
	 *
	 * @param stream The stream to write to.
	 */
	inline void writeBytes(Stream& stream)
	{
		for (int i = 0; i < sizeof(T); i++) {
			stream.writeByte(byteView[i]);
		}
	}

	/**
	 * @brief Checks if a specific bit is set in the bit flag.
	 *
	 * @param value The value of the bit to check.
	 * @return true if the bit is set, false otherwise.
	 */
	inline bool isSet(T value) { return (typeView & value) != 0; }

	/**
	 * @brief Sets a specific bit in the bit flag.
	 *
	 * @param value The value of the bit to set.
	 */
	inline void set(T value) { typeView |= value; }

	/**
	 * @brief Unsets a specific bit in the bit flag.
	 *
	 * @param value The value of the bit to unset.
	 */
	inline void unset(T value) { typeView &= ~value; }

	union {
		u8 byteView[sizeof(T)]; /**< The byte view of the bit flag. */
		T typeView;             /**< The type view of the bit flag. */
	};
};

/**
 * @brief A template struct representing an array of bit flags.
 *
 * This struct provides a convenient way to manage an array of bit flags, where each flag is represented by a single bit.
 * The template parameters are the type of the flag (T) and the number of flags in the array (I).
 *
 * The BitFlagArray struct provides functions to initialize the flags to zero and to clear all the flags.
 *
 * Example usage:
 * ```
 * BitFlagArray<int, 8> flags; // Create an array of 8 integer flags
 * flags.clear(); // Clear all the flags
 * ```
 */
template <typename T, int I>
struct BitFlagArray {
	inline BitFlagArray()
	{
		for (int i = 0; i < I; i++) {
			for (int j = 0; j < sizeof(T); j++) {
				mFlags[i].byteView[j] = 0;
			}
		}
	}

	inline void clear()
	{
		for (int i = 0; i < I; i++) {
			for (int j = 0; j < sizeof(T); j++) {
				mFlags[i].byteView[j] = 0;
			}
		}
	}

	BitFlag<T> mFlags[I]; // _00
};

#endif
