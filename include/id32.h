#ifndef _ID32_H
#define _ID32_H

#include "PowerPC_EABI_Support/Runtime/runtime.h"
#include "types.h"
#include "stream.h"

/**
 * @class ID32
 *
 * @brief The ID32 class represents a 32-bit identifier.
 *
 * This class provides functionality to store and manipulate 32-bit identifiers.
 * The identifier can be represented as a string or an integer.
 *
 * The class also provides methods to read and write the identifier from/to a stream,
 * as well as printing and formatting operations.
 *
 * @note The maximum length of the string representation is 4 characters.
 */
class ID32 {
private:
	char mStringID[5]; // _00

	union {
		char mStrView[4];
		u32 mIntView;
	} mId; // _08

	void updateString();

public:
	/**
	 * @brief Default constructor.
	 *
	 * Initializes the ID32 object with an empty identifier.
	 */
	ID32();

	/**
	 * @brief Constructor with integer parameter.
	 *
	 * Initializes the ID32 object with the specified integer identifier.
	 *
	 * @param id The integer identifier.
	 */
	ID32(u32 id);

	/**
	 * @brief Assignment operator.
	 *
	 * Assigns the identifier from another ID32 object.
	 *
	 * @param other The ID32 object to assign from.
	 * @return A reference to the assigned ID32 object.
	 */
	inline ID32& operator=(const ID32& other)
	{
		__copy(mStringID, const_cast<char*>(other.mStringID), 5);
		mId = other.mId;
		return *this;
	}

	/**
	 * @brief Assignment operator with integer parameter.
	 *
	 * Assigns the specified integer identifier to the ID32 object.
	 *
	 * @param id The integer identifier to assign.
	 */
	void operator=(u32 id);

	/**
	 * @brief Equality comparison operator with integer parameter.
	 *
	 * Checks if the ID32 object is equal to the specified integer identifier.
	 *
	 * @param id The integer identifier to compare.
	 * @return True if the ID32 object is equal to the specified identifier, false otherwise.
	 */
	bool operator==(u32 id);

	/**
	 * @brief Inequality comparison operator with integer parameter.
	 *
	 * Checks if the ID32 object is not equal to the specified integer identifier.
	 *
	 * @param id The integer identifier to compare.
	 * @return True if the ID32 object is not equal to the specified identifier, false otherwise.
	 */
	bool operator!=(u32 id);

	/**
	 * @brief Matches the ID32 object against an integer identifier with an exception.
	 *
	 * Checks if the ID32 object matches the specified integer identifier,
	 * except for a specific character position.
	 *
	 * @param id The integer identifier to match.
	 * @param exception The character position to exclude from the matching.
	 * @return True if the ID32 object matches the specified identifier, false otherwise.
	 */
	bool match(u32 id, char exception);

	/**
	 * @brief Checks if the ID32 object represents the end-of-file identifier.
	 *
	 * @return True if the ID32 object represents the end-of-file identifier, false otherwise.
	 */
	bool isEof();

	/**
	 * @brief Sets the ID32 object to the specified integer identifier.
	 *
	 * @param id The integer identifier to set.
	 */
	void setID(u32 id);

	/**
	 * @brief Updates the string representation of the ID32 object.
	 *
	 * This method updates the string representation of the ID32 object
	 * based on the current integer identifier.
	 */
	void updateID();

	/**
	 * @brief Reads the ID32 object from a stream.
	 *
	 * @param stream The stream to read from.
	 */
	void read(Stream& stream);

	/**
	 * @brief Writes the ID32 object to a stream.
	 *
	 * @param stream The stream to write to.
	 */
	void write(Stream& stream);

	/**
	 * @brief Formats the ID32 object as a string.
	 *
	 * @param str The buffer to store the formatted string.
	 */
	void sprint(char* str);

	/**
	 * @brief Prints the ID32 object to the standard output.
	 */
	void print();

	/**
	 * @brief Gets the string representation of the ID32 object.
	 *
	 * @return The string representation of the ID32 object.
	 */
	inline char* getStrID() { return mId.mStrView; }

	/**
	 * @brief Gets the integer representation of the ID32 object.
	 *
	 * @return The integer representation of the ID32 object.
	 */
	inline u32 getID() { return mId.mIntView; }

	/**
	 * @brief Gets the string identifier of the ID32 object.
	 *
	 * @return The string identifier of the ID32 object.
	 */
	inline char* getStr() { return mStringID; }

	/**
	 * @brief End-of-file identifier.
	 *
	 * This static member represents the end-of-file identifier.
	 */
	static ID32 eof; // BSS
};

#endif
