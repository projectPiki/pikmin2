#include "types.h"

#include "id32.h"

/*
 * --INFO--
 * Address:	80413254
 * Size:	00001C
 */

bool ID32::isEof() { return m_id.raw == '_eof'; }
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
ID32::ID32(unsigned long id) { setID(id); }

/*
 * --INFO--
 * Address:	804132D8
 * Size:	000024
 */
void ID32::setID(unsigned long set_id)
{
	m_id.raw = set_id;
	updateString();
}

/*
 * --INFO--
 * Address:	804132FC
 * Size:	0000B8
 */
bool ID32::match(unsigned long _id, char exception)
{
	char* p_id = reinterpret_cast<char*>(&_id);
	char* c_id = reinterpret_cast<char*>(&m_id.raw);

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
	char* c_id = reinterpret_cast<char*>(&m_id.raw);

	for (int i = 0; i < 4; i++) {
		c_id[i] = m_str[i];
	}
}

/*
 * --INFO--
 * Address:	804133D8
 * Size:	00002C
 */
void ID32::updateString()
{
	char* c_id = reinterpret_cast<char*>(&m_id.raw);

	for (int i = 0; i < 4; i++) {
		m_str[i] = c_id[i];
	}
	m_str[4] = '\0';
}

/*
 * --INFO--
 * Address:	80413404
 * Size:	000030
 */
void ID32::operator=(unsigned long _id)
{
	m_id.raw = _id;

	m_str[0] = m_id.str[0];
	m_str[1] = m_id.str[1];
	m_str[2] = m_id.str[2];
	m_str[3] = m_id.str[3];
	m_str[4] = '\0';
}
/*
 * --INFO--
 * Address:	80413434
 * Size:	000014
 */
bool ID32::operator==(unsigned long target) { return m_id.raw == target; }

/*
 * --INFO--
 * Address:	80413448
 * Size:	000018
 */
bool ID32::operator!=(unsigned long _id) { return m_id.raw != _id; }

/*
 * --INFO--
 * Address:	80413460
 * Size:	000090
 */
void ID32::write(Stream& stream)
{
	if (stream.m_isTextMode == TRUE) {
		char str[0x10];
		sprint(str);
		stream.printf("{%s} ", str);
	} else {
		stream.writeByte(m_id.str[3]);
		stream.writeByte(m_id.str[2]);
		stream.writeByte(m_id.str[1]);
		stream.writeByte(m_id.str[0]);
	}
}

/*
 * --INFO--
 * Address:	804134F0
 * Size:	0000EC
 */
void ID32::read(Stream& stream)
{
	if (stream.m_isTextMode == TRUE) {
		char* token = stream.getNextToken();
		m_id.str[3] = token[3];
		m_id.str[2] = token[2];
		m_id.str[1] = token[1];
		m_id.str[0] = token[0];

		m_str[0] = m_id.str[0];
		m_str[1] = m_id.str[1];
		m_str[2] = m_id.str[2];
		m_str[3] = m_id.str[3];
		m_str[4] = '\0';
	} else {
		m_id.str[3] = stream.readByte();
		m_id.str[2] = stream.readByte();
		m_id.str[1] = stream.readByte();
		m_id.str[0] = stream.readByte();

		m_str[0] = m_id.str[0];
		m_str[1] = m_id.str[1];
		m_str[2] = m_id.str[2];
		m_str[3] = m_id.str[3];
		m_str[4] = '\0';
	}
}

/*
 * --INFO--
 * Address:	804135DC
 * Size:	000004
 */
void ID32::print() { return; }

/*
 * --INFO--
 * Address:	804135E0
 * Size:	000038
 */
void ID32::sprint(char* str)
{
	str[0] = m_id.raw >> 24;
	str[1] = static_cast<u8>(m_id.raw >> 16);
	str[2] = static_cast<u8>(m_id.raw >> 8);
	str[3] = static_cast<u8>(m_id.raw);
	str[4] = '\0';
}

ID32 ID32::eof('_eof');
