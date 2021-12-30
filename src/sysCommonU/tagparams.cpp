#include "types.h"

#include "PrimTagParm.h"
#include "Dolphin/string.h"

/*
 * --INFO--
 * Address:	8041BD38
 * Size:	000034
 */
void PrimTagParm<int>::doRead(Stream& stream) { m_data = stream.readInt(); }

/*
 * --INFO--
 * Address:	8041BD6C
 * Size:	00002C
 */
void PrimTagParm<int>::doWrite(Stream& stream) { stream.writeInt(m_data); }

/*
 * --INFO--
 * Address:	8041BD98
 * Size:	000004
 */
void PrimTagParm<int>::doDump() { }

/*
 * --INFO--
 * Address:	8041BD9C
 * Size:	000034
 */
void PrimTagParm<u16>::doRead(Stream& stream) { m_data = stream.readShort(); }

/*
 * --INFO--
 * Address:	8041BDD0
 * Size:	00002C
 */
void PrimTagParm<u16>::doWrite(Stream& stream) { stream.writeShort(m_data); }

/*
 * --INFO--
 * Address:	8041BDFC
 * Size:	000004
 */
void PrimTagParm<u16>::doDump() { }

/*
 * --INFO--
 * Address: 8041BE00
 * Size:    000078
 */
void PrimTagParm<u64>::doRead(Stream& stream)
{
	char* str = stream.readString(nullptr, 0);
	for (int i = 0; i < 8; i++) {
		((char*)&m_data)[i] = str[i];
	}
}

/*
 * --INFO--
 * Address: 8041BE78
 * Size:    00006C
 */
void PrimTagParm<u64>::doWrite(Stream& stream)
{
	char data[8];
	for (int i = 0; i < 8; i++) {
		data[i] = ((char*)&m_data)[i];
	}
	stream.writeString(data);
}

/*
 * --INFO--
 * Address:	8041BEE4
 * Size:	000004
 */
void PrimTagParm<u64>::doDump() { }

/*
 * --INFO--
 * Address:	8041BEE8
 * Size:	000034
 */
void PrimTagParm<f32>::doRead(Stream& stream) { m_data = stream.readFloat(); }

/*
 * --INFO--
 * Address:	8041BF1C
 * Size:	000028
 */
void PrimTagParm<f32>::doWrite(Stream& stream) { stream.writeFloat(m_data); }

/*
 * --INFO--
 * Address:	8041BF44
 * Size:	000004
 */
void PrimTagParm<f32>::doDump() { }

/*
 * --INFO--
 * Address:	8041BF48
 * Size:	000024
 */
void PrimTagParm<Vector3f>::doRead(Stream& stream) { m_data.read(stream); }

/*
 * --INFO--
 * Address:	8041BF6C
 * Size:	000024
 */
void PrimTagParm<Vector3f>::doWrite(Stream& stream) { m_data.write(stream); }

/*
 * --INFO--
 * Address:	8041BF90
 * Size:	000004
 */
void PrimTagParm<Vector3f>::doDump() { }

/*
 * --INFO--
 * Address:	8041BF94
 * Size:	000044
 */
StringTagParm::StringTagParm(TagParameters* params, char* name)
    : TagParm(params, name)
{
	m_data = nullptr;
}

/*
 * --INFO--
 * Address:	8041BFD8
 * Size:	000004
 */
void StringTagParm::flushValue() { }

/*
 * --INFO--
 * Address:	8041BFDC
 * Size:	00003C
 */
void StringTagParm::doRead(Stream& stream)
{
	m_data = stream.readString(nullptr, 0);
}

/*
 * --INFO--
 * Address:	8041C018
 * Size:	00002C
 */
void StringTagParm::doWrite(Stream& stream) { stream.writeString(m_data); }

/*
 * --INFO--
 * Address:	8041C044
 * Size:	000004
 */
void StringTagParm::doDump() { }

/*
 * --INFO--
 * Address:	8041C048
 * Size:	000054
 */
TagParameters::TagParameters(char* name)
{
	m_head = nullptr;
	m_name = name;
}

/*
 * --INFO--
 * Address:	8041C09C
 * Size:	000038
 */
TagParm::TagParm(TagParameters* container, char* name)
{
	m_name = name;
	m_next = nullptr;
	if (container->m_head) {
		this->m_next      = container->m_head;
		container->m_head = this;
		return;
	}

	container->m_head = this;
}

/*
 * --INFO--
 * Address:	8041C0D4
 * Size:	0000D4
 */

void TagParameters::read(Stream& stream)
{
	// More cleanup
	while (true) {
		char* str   = stream.readString(nullptr, 0);
		int strLen  = strlen("end");
		bool is_end = ((strncmp("end", str, strLen)) == 0);
		if (is_end)
			break;

		for (TagParm* node = this->m_head; node; node = node->m_next) {
			strLen          = strlen(str);
			int nodeNameLen = strlen(node->m_name);
			if (strLen != nodeNameLen) {
				continue;
			}

			strLen = strlen(str);
			if (strncmp(node->m_name, str, strLen) == 0) {
				node->doRead(stream);
			}
		}
	}
}
