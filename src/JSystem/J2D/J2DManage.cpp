#include "types.h"
#include "Dolphin/string.h"
#include "JSystem/J2D/J2DManage.h"

/*
 * --INFO--
 * Address:	8004985C
 * Size:	000064
 */
void* J2DDataManage::get(const char* name)
{
	for (J2DDataLink* elem = m_head; elem; elem = elem->m_next) {
		if (!strcmp(elem->m_name, name)) {
			return elem->m_value;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	800498C0
 * Size:	0000C8
 */
void* J2DDataManage::get(JSUInputStream* stream)
{
	stream->skip(1);

	u8 nameLen = stream->readByte();

	if (nameLen == 0) {
		return nullptr;
	} else {
		char nameBuffer[0x101];
		stream->read(&nameBuffer, nameLen);
		nameBuffer[nameLen] = 0;
		return get(nameBuffer);
	}
}

/*
 * --INFO--
 * Address:	80049988
 * Size:	000034
 */
s8* J2DResReference::getResReference(u16 idx) const
{
	if ((m_count <= idx) || (idx == 0xFFFF)) {
		return nullptr;
	}

	return (((s8*)this) + m_offsets[idx]);
}

/*
 * --INFO--
 * Address:	800499BC
 * Size:	000164
 */
char* J2DResReference::getName(u16 idx) const
{
	static char p_name[0x101];

	s8* ref = getResReference(idx);

	if (ref == nullptr) {
		p_name[0] = 0;
		return p_name;
	}

	switch (ref[0]) {
	case 2:
	case 3:
		for (int i = 0; i < ref[1]; i++) {
			p_name[i] = ref[2 + i];
		}
		p_name[ref[1]] = 0;
		break;
	case 4:
		int refIdx = ref[1] + 1;
		while (refIdx >= 2) {
			if (ref[refIdx] == '\\' || ref[refIdx] == '/') {
				break;
			}
			refIdx--;
		}

		int nameIdx = 0;
		refIdx++;
		while (refIdx < ref[1] + 2) {
			p_name[nameIdx] = ref[refIdx];
			nameIdx++;
			refIdx++;
		}

		p_name[nameIdx] = 0;
		break;
	default:
		p_name[0] = 0;
	}

	return p_name;
}
