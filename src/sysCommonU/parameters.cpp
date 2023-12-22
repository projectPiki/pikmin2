#include "types.h"

#include "Parameters.h"
#include "stream.h"
#include "BaseParm.h"
#include "string.h"

/**
 * @note Address: 0x80413658
 * @note Size: 0xAC
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

/**
 * @note Address: 0x80413704
 * @note Size: 0xEC
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

/**
 * @note Address: 0x804137F4
 * @note Size: 0xC8
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

/**
 * @note Address: 0x804138C0
 * @note Size: 0x64
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

/**
 * @note Address: 0x80413924
 * @note Size: 0x34
 */
template <>
void Parm<int>::read(Stream& stream)
{
	mValue = stream.readInt();
}

/**
 * @note Address: 0x80413958
 * @note Size: 0x2C
 */
template <>
void Parm<int>::write(Stream& stream)
{
	stream.writeInt(mValue);
}

/**
 * @note Address: 0x80413984
 * @note Size: 0x34
 */
template <>
void Parm<u8>::read(Stream& stream)
{
	mValue = stream.readByte();
}

/**
 * @note Address: 0x804139B8
 * @note Size: 0x2C
 */
template <>
void Parm<u8>::write(Stream& stream)
{
	stream.writeByte((u8)mValue);
}

/**
 * @note Address: 0x804139E4
 * @note Size: 0x44
 */
template <>
void Parm<bool>::read(Stream& stream)
{
	mValue = (bool)stream.readByte();
}

/**
 * @note Address: 0x80413A28
 * @note Size: 0x34
 */
template <>
void Parm<bool>::write(Stream& stream)
{
	stream.writeByte(mValue ? 1 : 0);
}

/**
 * @note Address: 0x80413A5C
 * @note Size: 0x34
 */
template <>
void Parm<f32>::read(Stream& stream)
{
	mValue = stream.readFloat();
}

/**
 * @note Address: 0x80413A90
 * @note Size: 0x28
 */
template <>
void Parm<f32>::write(Stream& stream)
{
	stream.writeFloat(mValue);
}

/**
 * @note Address: 0x80413AB8
 * @note Size: 0x1B0
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

/**
 * @note Address: 0x80413C68
 * @note Size: 0x2C
 */
void ParmString::write(Stream& stream) { stream.writeString(mValue); }

/**
 * @note Address: 0x80413C94
 * @note Size: 0x30
 */
void ParmString::read(Stream& stream) { stream.readString(mValue, mLength); }

/**
 * @note Address: 0x80413CC4
 * @note Size: 0xB8
 */
ParmEnum::ParmEnum(Parameters* parameters, char** enumValues, u32 value, int length, s32 rawID, char* comment)
    : BaseParm(parameters, rawID, comment)
{
	mValue        = value;
	mEnumElemSize = length;
	mEnumValues   = enumValues;
}

/**
 * @note Address: 0x80413D7C
 * @note Size: 0x2C
 */
void ParmEnum::write(Stream& stream) { stream.writeInt(mValue); }

/**
 * @note Address: 0x80413DA8
 * @note Size: 0x34
 */
void ParmEnum::read(Stream& stream) { mValue = stream.readInt(); }
