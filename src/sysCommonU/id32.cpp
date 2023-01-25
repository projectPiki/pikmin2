#include "id32.h"

/*
 * --INFO--
 * Address:	80413254
 * Size:	00001C
 */
bool ID32::isEof() { return mId.intView == '_eof'; }

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
	mId.intView = set_id;
	updateString();
}

/*
 * --INFO--
 * Address:	804132FC
 * Size:	0000B8
 */
bool ID32::match(u32 _id, char exception)
{
	char* p_id = reinterpret_cast<char*>(&_id);
	char* c_id = reinterpret_cast<char*>(&mId.intView);

	for (int i = 0; i < 4; i++) {
		if (p_id[i] != exception && p_id[i] != c_id[i]) {
			return false;
		}
	}

	return true;
}

/*
 * --INFO--
 * Address:	804133B4
 * Size:	000024
 */
void ID32::updateID()
{
	for (int i = 0; i < 4; i++) {
		mId.strView[i] = mStr[i];
	}
}

/*
 * --INFO--
 * Address:	804133D8
 * Size:	00002C
 */
void ID32::updateString()
{
	char* c_id = reinterpret_cast<char*>(&mId.intView);

	for (int i = 0; i < 4; i++) {
		mStr[i] = c_id[i];
	}
	mStr[4] = '\0';
}

/*
 * --INFO--
 * Address:	80413404
 * Size:	000030
 */
void ID32::operator=(u32 _id)
{
	mId.intView = _id;
	updateString();
}
/*
 * --INFO--
 * Address:	80413434
 * Size:	000014
 */
bool ID32::operator==(u32 target) { return mId.intView == target; }

/*
 * --INFO--
 * Address:	80413448
 * Size:	000018
 */
bool ID32::operator!=(u32 _id) { return mId.intView != _id; }

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

	stream.writeByte(mId.strView[3]);
	stream.writeByte(mId.strView[2]);
	stream.writeByte(mId.strView[1]);
	stream.writeByte(mId.strView[0]);
}

/*
 * --INFO--
 * Address:	804134F0
 * Size:	0000EC
 */
void ID32::read(Stream& stream)
{
	if (stream.mMode == STREAM_MODE_TEXT) {
		char* token    = stream.getNextToken();
		mId.strView[3] = token[3];
		mId.strView[2] = token[2];
		mId.strView[1] = token[1];
		mId.strView[0] = token[0];
		updateString();
		return;
	}

	mId.strView[3] = stream.readByte();
	mId.strView[2] = stream.readByte();
	mId.strView[1] = stream.readByte();
	mId.strView[0] = stream.readByte();
	updateString();
}

/*
 * --INFO--
 * Address:	804135DC
 * Size:	000004
 */
void ID32::print() { }

/*
 * --INFO--
 * Address:	804135E0
 * Size:	000038
 */
void ID32::sprint(char* str)
{
	str[0] = mId.intView >> 24;
	str[1] = static_cast<u8>(mId.intView >> 16);
	str[2] = static_cast<u8>(mId.intView >> 8);
	str[3] = static_cast<u8>(mId.intView);
	str[4] = '\0';
}
// static initializer
ID32 ID32::eof('_eof');
