#include "types.h"
#include "string.h"
#include "JSystem/J2D/J2DManage.h"

/**
 * @note Address: 0x8004985C
 * @note Size: 0x64
 */
void* J2DDataManage::get(const char* name)
{
	for (J2DDataLink* elem = mHead; elem; elem = elem->mNext) {
		if (!strcmp(elem->mName, name)) {
			return elem->mValue;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x800498C0
 * @note Size: 0xC8
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

/**
 * @note Address: 0x80049988
 * @note Size: 0x34
 */
s8* J2DResReference::getResReference(u16 idx) const
{
	if ((mCount <= idx) || (idx == 0xFFFF)) {
		return nullptr;
	}

	return (((s8*)this) + mOffsets[idx]);
}

/**
 * @note Address: 0x800499BC
 * @note Size: 0x164
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
