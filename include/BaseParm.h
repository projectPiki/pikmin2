#ifndef _BASEPARM_H
#define _BASEPARM_H

#include "types.h"
#include "id32.h"
#include "Parameters.h"

/**
 * @brief The BaseParm struct represents a base parameter.
 *
 * This struct serves as the base class for all parameter types.
 * It contains common members and virtual functions that can be overridden by derived classes.
 */
struct BaseParm {
	/**
	 * @brief Constructs a BaseParm object.
	 *
	 * @param parameters Pointer to the Parameters object.
	 * @param id The ID of the parameter.
	 * @param name The name of the parameter.
	 */
	BaseParm(Parameters* parameters, u32 id, char* name);

	/**
	 * @brief Gets the size of the parameter.
	 *
	 * @return The size of the parameter in bytes.
	 */
	virtual int size() = 0;

	/**
	 * @brief Writes the parameter to a stream.
	 *
	 * @param stream The stream to write the parameter to.
	 */
	virtual void write(Stream& stream) { }

	/**
	 * @brief Reads the parameter from a stream.
	 *
	 * @param stream The stream to read the parameter from.
	 */
	virtual void read(Stream& stream) { }

	ID32 mId;        // _04
	BaseParm* mNext; // _10
	char* mName;     // _14
};

/**
 * @brief The Parm struct represents a parameter of a specific type.
 *
 * This struct is derived from the BaseParm struct and adds members specific to the parameter type.
 * It also overrides the virtual functions of the base class.
 *
 * @tparam T The type of the parameter value.
 */
template <typename T>
struct Parm : public BaseParm {
	/**
	 * @brief Constructs a Parm object.
	 *
	 * @param parameters Pointer to the Parameters object.
	 * @param id The ID of the parameter.
	 * @param comment A comment for the parameter.
	 * @param value The initial value of the parameter.
	 * @param min The minimum value of the parameter.
	 * @param max The maximum value of the parameter.
	 */
	inline Parm(Parameters* parameters, u32 id, char* comment, T value, T min, T max)
	    : BaseParm(parameters, id, comment)
	    , mValue(value)
	    , mMin(min)
	    , mMax(max)
	{
	}

	/**
	 * @brief Converts the Parm object to its underlying value type.
	 *
	 * @return The underlying value of the parameter.
	 */
	inline operator T() { return mValue; }

	/**
	 * @brief Assigns a new value to the Parm object.
	 *
	 * @param rhs The new value to assign.
	 */
	void operator=(const T& rhs) { mValue = rhs; }

	/**
	 * @brief Returns a reference to the underlying value of the Parm object.
	 *
	 * @return A reference to the underlying value of the parameter.
	 */
	T& operator()() { return mValue; }

	/**
	 * @brief Gets the size of the parameter.
	 *
	 * @return The size of the parameter in bytes.
	 */
	virtual int size() { return sizeof(T); }

	/**
	 * @brief Writes the parameter to a stream.
	 *
	 * @param stream The stream to write the parameter to.
	 */
	virtual void write(Stream& stream);

	/**
	 * @brief Reads the parameter from a stream.
	 *
	 * @param stream The stream to read the parameter from.
	 */
	virtual void read(Stream& stream);

	T mValue; // _18
	T _1C;    // _1C, unused in the entire game!
	T mMin;   // _20
	T mMax;   // _24
};

/**
 * @brief The ParmString struct represents a string parameter.
 *
 * This struct is derived from the BaseParm struct and adds members specific to string parameters.
 * It also overrides the virtual functions of the base class.
 */
struct ParmString : public BaseParm {
	/**
	 * @brief Constructs a ParmString object.
	 *
	 * @param parameters Pointer to the Parameters object.
	 * @param name The name of the parameter.
	 * @param length The length of the string.
	 * @param id The ID of the parameter.
	 * @param comment A comment for the parameter.
	 */
	ParmString(Parameters* parameters, char* name, int length, u32 id, char* comment);

	/**
	 * @brief Gets the size of the parameter.
	 *
	 * @return -1, indicating that the size is variable.
	 */
	virtual int size() { return -1; }

	/**
	 * @brief Writes the parameter to a stream.
	 *
	 * @param stream The stream to write the parameter to.
	 */
	virtual void write(Stream& stream);

	/**
	 * @brief Reads the parameter from a stream.
	 *
	 * @param stream The stream to read the parameter from.
	 */
	virtual void read(Stream& stream);

	char* mValue; // _18
	int mLength;  // _1C
};

/**
 * @brief The ParmEnum struct represents an enumerated parameter.
 *
 * This struct is derived from the BaseParm struct and adds members specific to enumerated parameters.
 * It also overrides the virtual functions of the base class.
 */
struct ParmEnum : public BaseParm {
	/**
	 * @brief Constructs a ParmEnum object.
	 *
	 * @param parameters Pointer to the Parameters object.
	 * @param enumValues An array of strings representing the enumeration values.
	 * @param id The ID of the parameter.
	 * @param enumElemSize The size of each enumeration element.
	 * @param value The initial value of the parameter.
	 * @param comment A comment for the parameter.
	 */
	ParmEnum(Parameters* parameters, char** enumValues, u32 id, int enumElemSize, s32 value, char* comment);

	/**
	 * @brief Gets the size of the parameter.
	 *
	 * @return 4, indicating that the size is fixed.
	 */
	virtual int size() { return 4; }

	/**
	 * @brief Writes the parameter to a stream.
	 *
	 * @param stream The stream to write the parameter to.
	 */
	virtual void write(Stream& stream);

	/**
	 * @brief Reads the parameter from a stream.
	 *
	 * @param stream The stream to read the parameter from.
	 */
	virtual void read(Stream& stream);

	inline operator u32() { return mValue; }

	u32 mValue;         // _18
	int mEnumElemSize;  // _1C
	char** mEnumValues; // _20
};

#endif
