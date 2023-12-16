#include "id32.h"

ID32 ID32::eof('_eof');

/*
 * --INFO--
 * Address:	80413254
 * Size:	00001C
 */
bool ID32::isEof() { return mId.mIntView == '_eof'; }

/*
 * --INFO--
 * Address:	80413270
 * Size:	000038
 */
ID32::ID32() { setID('none'); }

/*
 * --INFO--
 * Address:	804132A8
 * Size:	000030
 */
ID32::ID32(u32 id) { setID(id); }

/*
 * --INFO--
 * Address:	804132D8
 * Size:	000024
 */
void ID32::setID(u32 set_id)
{
	mId.mIntView = set_id;
	updateString();
}

/**
 * @brief Checks if the given ID matches the ID stored, with an exception for a specific character.
 *
 * @param _id The ID to be checked.
 * @param exception The character that is exempted from the comparison.
 * @return true if the ID matches the stored ID, false otherwise.
 */
/*
 * --INFO--
 * Address:	804132FC
 * Size:	0000B8
 */
bool ID32::match(u32 id, char exception)
{
	char* p_id = reinterpret_cast<char*>(&id);
	char* c_id = reinterpret_cast<char*>(&mId.mIntView);

	for (int i = 0; i < 4; i++) {
		if (p_id[i] != exception && p_id[i] != c_id[i]) {
			return false;
		}
	}

	return true;
}

/**
 * @brief Updates the number ID using the string ID.
 */
/*
 * --INFO--
 * Address:	804133B4
 * Size:	000024
 */
void ID32::updateID()
{
	for (int i = 0; i < 4; i++) {
		mId.mStrView[i] = mStringID[i];
	}
}

/*
 * --INFO--
 * Address:	804133D8
 * Size:	00002C
 */
void ID32::updateString()
{
	char* c_id = reinterpret_cast<char*>(&mId.mIntView);

	for (int i = 0; i < 4; i++) {
		mStringID[i] = c_id[i];
	}
	mStringID[4] = '\0';
}

/*
 * --INFO--
 * Address:	80413404
 * Size:	000030
 */
void ID32::operator=(u32 id)
{
	mId.mIntView = id;
	updateString();
}
/*
 * --INFO--
 * Address:	80413434
 * Size:	000014
 */
bool ID32::operator==(u32 id) { return mId.mIntView == id; }

/*
 * --INFO--
 * Address:	80413448
 * Size:	000018
 */
bool ID32::operator!=(u32 id) { return mId.mIntView != id; }

/**
 * @brief Writes the ID32 object to the given stream.
 *
 * @note If in text mode, it converts to a string and writes in the format "{str}". Otherwise, 4 bytes are written.
 *
 * @param stream The stream to write the ID32 object to.
 */
/*
 * --INFO--
 * Address:	80413460
 * Size:	000090
 */
void ID32::write(Stream& stream)
{
	if (stream.mMode == STREAM_MODE_TEXT) {
		char str[0x10];
		sprint(str);
		stream.printf("{%s} ", str);
		return;
	}

	stream.writeByte(mId.mStrView[3]);
	stream.writeByte(mId.mStrView[2]);
	stream.writeByte(mId.mStrView[1]);
	stream.writeByte(mId.mStrView[0]);
}

/**
 * @brief Reads the ID32 data from the given stream.
 *
 * @note If in text mode, the function reads the next token to update the ID32 string. Otherwise, it reads four bytes.
 *
 * @param stream The stream to read from.
 */
/*
 * --INFO--
 * Address:	804134F0
 * Size:	0000EC
 */
void ID32::read(Stream& stream)
{
	if (stream.mMode == STREAM_MODE_TEXT) {
		char* token     = stream.getNextToken();
		mId.mStrView[3] = token[3];
		mId.mStrView[2] = token[2];
		mId.mStrView[1] = token[1];
		mId.mStrView[0] = token[0];
		updateString();
		return;
	}

	mId.mStrView[3] = stream.readByte();
	mId.mStrView[2] = stream.readByte();
	mId.mStrView[1] = stream.readByte();
	mId.mStrView[0] = stream.readByte();
	updateString();
}

/*
 * --INFO--
 * Address:	804135DC
 * Size:	000004
 */
void ID32::print() { }

/**
 * @brief Converts the ID32 value to a string representation.
 *
 * @note The resulting string will be null-terminated.
 *
 * @param output The character array to store the string representation.
 */
/*
 * --INFO--
 * Address:	804135E0
 * Size:	000038
 */
void ID32::sprint(char* output)
{
	output[0] = mId.mIntView >> 24;
	output[1] = static_cast<u8>(mId.mIntView >> 16);
	output[2] = static_cast<u8>(mId.mIntView >> 8);
	output[3] = static_cast<u8>(mId.mIntView);
	output[4] = '\0';
}
