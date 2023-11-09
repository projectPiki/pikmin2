#include "types.h"

#include "Parameters.h"
#include "stream.h"
#include "BaseParm.h"
#include "string.h"

/*
 * --INFO--
 * Address:	80413658
 * Size:	0000AC
 */
BaseParm::BaseParm(Parameters* parameters, u32 rawID, char* name)
    : mId()
    , mName(name)
{
	BaseParm* parm1;
	BaseParm* parm2 = nullptr;
	for (parm1 = parameters->mParmsHead; parm1 != NULL; parm1 = parm2->mNext) {
		parm2 = parm1;
	}
	if (parm2) {
		parm2->mNext = this;
	} else {
		parameters->mParmsHead = this;
	}
	mId   = rawID;
	mNext = nullptr;
}

/*
 * --INFO--
 * Address:	80413704
 * Size:	0000EC
 */
void Parameters::write(Stream& stream)
{
	stream.textBeginGroup(mName);

	for (BaseParm* parm = mParmsHead; parm; parm = parm->mNext) {
		stream.writePadding(STREAM_MODE_TEXT);
		parm->mId.write(stream);
		stream.writeInt(parm->size());
		parm->write(stream);
		stream.textWriteText("\t# %s\r\n", parm->mName);
	}
	stream.writePadding(STREAM_MODE_TEXT);
	ID32::eof.write(stream);
	stream.textWriteText("\r\n");

	stream.textEndGroup();
}

/*
 * --INFO--
 * Address:	804137F4
 * Size:	0000C8
 */
void Parameters::read(Stream& stream)
{
	BaseParm* currentParm;
	while (true) {
		ID32 currentID;
		currentID.read(stream);

		if (currentID.isEof()) {
			return;
		}

		char buffer[256];
		currentID.sprint(buffer);

		const int parmSize = stream.readInt();
		// Check if we can find the parameter referenced by the ID in the stream
		if (currentParm = findParm(currentID.getID())) {
			currentParm->read(stream);
		} else if (parmSize != -1) {
			stream.skipReading(parmSize);
		} else {
			stream.skipReadingText();
		}
	}
}

/*
 * --INFO--
 * Address:	804138C0
 * Size:	000064
 */
BaseParm* Parameters::findParm(u32 rawID)
{
	for (BaseParm* parm = mParmsHead; parm != nullptr; parm = parm->mNext) {
		if (parm->mId == rawID) {
			return parm;
		}
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	80413924
 * Size:	000034
 */
template <>
void Parm<int>::read(Stream& stream)
{
	mValue = stream.readInt();
}

/*
 * --INFO--
 * Address:	80413958
 * Size:	00002C
 */
template <>
void Parm<int>::write(Stream& stream)
{
	stream.writeInt(mValue);
}

/*
 * --INFO--
 * Address:	80413984
 * Size:	000034
 */
template <>
void Parm<u8>::read(Stream& stream)
{
	mValue = stream.readByte();
}

/*
 * --INFO--
 * Address:	804139B8
 * Size:	00002C
 */
template <>
void Parm<u8>::write(Stream& stream)
{
	stream.writeByte((u8)mValue);
}

/*
 * --INFO--
 * Address:	804139E4
 * Size:	000044
 */
template <>
void Parm<bool>::read(Stream& stream)
{
	mValue = (bool)stream.readByte();
}

/*
 * --INFO--
 * Address:	80413A28
 * Size:	000034
 */
template <>
void Parm<bool>::write(Stream& stream)
{
	stream.writeByte(mValue ? 1 : 0);
}

/*
 * --INFO--
 * Address:	80413A5C
 * Size:	000034
 */
template <>
void Parm<float>::read(Stream& stream)
{
	mValue = stream.readFloat();
}

/*
 * --INFO--
 * Address:	80413A90
 * Size:	000028
 */
template <>
void Parm<float>::write(Stream& stream)
{
	stream.writeFloat(mValue);
}

/*
 * --INFO--
 * Address:	80413AB8
 * Size:	0001B0
 */
ParmString::ParmString(Parameters* parameters, char* value, int length, u32 rawID, char* comment)
    : BaseParm(parameters, rawID, comment)
    , mLength(length)
{
	char* buffer = new char[mLength + 1];
	mValue       = buffer;

	int valueLen = strlen(value);
	int i        = 0;
	while (i < valueLen) {
		mValue[i] = value[i];
		i++;
	}
	mValue[i] = '\0';
}

/*
 * --INFO--
 * Address:	80413C68
 * Size:	00002C
 */
void ParmString::write(Stream& stream) { stream.writeString(mValue); }

/*
 * --INFO--
 * Address:	80413C94
 * Size:	000030
 */
void ParmString::read(Stream& stream) { stream.readString(mValue, mLength); }

/*
 * --INFO--
 * Address:	80413CC4
 * Size:	0000B8
 */
ParmEnum::ParmEnum(Parameters* parameters, char** enumValues, u32 value, int length, long rawID, char* comment)
    : BaseParm(parameters, rawID, comment)
{
	mValue        = value;
	mEnumElemSize = length;
	mEnumValues   = enumValues;
}

/*
 * --INFO--
 * Address:	80413D7C
 * Size:	00002C
 */
void ParmEnum::write(Stream& stream) { stream.writeInt(mValue); }

/*
 * --INFO--
 * Address:	80413DA8
 * Size:	000034
 */
void ParmEnum::read(Stream& stream) { mValue = stream.readInt(); }
