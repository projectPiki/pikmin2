#include "types.h"

#include "Parameters.h"
#include "stream.h"
#include "BaseParm.h"
#include "Dolphin/string.h"

/*
 * --INFO--
 * Address:	80413658
 * Size:	0000AC
 */
BaseParm::BaseParm(Parameters* parameters, u32 rawID, char* name)
    : m_id()
    , m_name(name)
{
	BaseParm* parm1;
	BaseParm* parm2 = nullptr;
	for (parm1 = parameters->m_parmsHead; parm1 != NULL; parm1 = parm2->m_next) {
		parm2 = parm1;
	}
	if (parm2) {
		parm2->m_next = this;
	} else {
		parameters->m_parmsHead = this;
	}
	m_id   = rawID;
	m_next = nullptr;
}

/*
 * --INFO--
 * Address:	80413704
 * Size:	0000EC
 */
void Parameters::write(Stream& stream)
{
	stream.textBeginGroup(m_name);

	for (BaseParm* parm = m_parmsHead; parm; parm = parm->m_next) {
		stream.writePadding(STREAM_MODE_TEXT);
		parm->m_id.write(stream);
		stream.writeInt(parm->size());
		parm->write(stream);
		stream.textWriteText("\t# %s\r\n", parm->m_name);
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
	for (BaseParm* parm = m_parmsHead; parm != nullptr; parm = parm->m_next) {
		if (parm->m_id == rawID) {
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
	m_value = stream.readInt();
}

/*
 * --INFO--
 * Address:	80413958
 * Size:	00002C
 */
template <>
void Parm<int>::write(Stream& stream)
{
	stream.writeInt(m_value);
}

/*
 * --INFO--
 * Address:	80413984
 * Size:	000034
 */
template <>
void Parm<unsigned char>::read(Stream& stream)
{
	m_value = stream.readByte();
}

/*
 * --INFO--
 * Address:	804139B8
 * Size:	00002C
 */
template <>
void Parm<unsigned char>::write(Stream& stream)
{
	stream.writeByte((u8)m_value);
}

/*
 * --INFO--
 * Address:	804139E4
 * Size:	000044
 */
template <>
void Parm<bool>::read(Stream& stream)
{
	m_value = (bool)stream.readByte();
}

/*
 * --INFO--
 * Address:	80413A28
 * Size:	000034
 */
template <>
void Parm<bool>::write(Stream& stream)
{
	stream.writeByte(m_value ? 1 : 0);
}

/*
 * --INFO--
 * Address:	80413A5C
 * Size:	000034
 */
template <>
void Parm<float>::read(Stream& stream)
{
	m_value = stream.readFloat();
}

/*
 * --INFO--
 * Address:	80413A90
 * Size:	000028
 */
template <>
void Parm<float>::write(Stream& stream)
{
	stream.writeFloat(m_value);
}

/*
 * --INFO--
 * Address:	80413AB8
 * Size:	0001B0
 */
ParmString::ParmString(Parameters* parameters, char* value, int length, u32 rawID, char* comment)
    : BaseParm(parameters, rawID, comment)
    , m_length(length)
{
	char* buffer = new char[m_length + 1];
	m_value      = buffer;

	int valueLen = strlen(value);
	int i        = 0;
	while (i < valueLen) {
		m_value[i] = value[i];
		i++;
	}
	m_value[i] = '\0';
}

/*
 * --INFO--
 * Address:	80413C68
 * Size:	00002C
 */
void ParmString::write(Stream& stream) { stream.writeString(m_value); }

/*
 * --INFO--
 * Address:	80413C94
 * Size:	000030
 */
void ParmString::read(Stream& stream) { stream.readString(m_value, m_length); }

/*
 * --INFO--
 * Address:	80413CC4
 * Size:	0000B8
 */
ParmEnum::ParmEnum(Parameters* parameters, char** enumValues, u32 value, int length, long rawID, char* comment)
    : BaseParm(parameters, rawID, comment)
{
	m_value        = value;
	m_enumElemSize = length;
	m_enumValues   = enumValues;
}

/*
 * --INFO--
 * Address:	80413D7C
 * Size:	00002C
 */
void ParmEnum::write(Stream& stream) { stream.writeInt(m_value); }

/*
 * --INFO--
 * Address:	80413DA8
 * Size:	000034
 */
void ParmEnum::read(Stream& stream) { m_value = stream.readInt(); }
