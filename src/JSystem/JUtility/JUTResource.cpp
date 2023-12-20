#include "JSystem/JUtility/JUTResource.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "mem.h"

/**
 * @note Address: 0x80032478
 * @note Size: 0xB8
 */
void* JUTResReference::getResource(JSUInputStream* stream, u32 resType, JKRArchive* archive)
{
	stream->read(&mType, 1);
	stream->read(&mNameLength, 1);
	stream->read(&mName, mNameLength);

	if (mType == RESTYPE_Unk2 || mType == RESTYPE_Unk3 || mType == RESTYPE_Unk4) {
		mName[mNameLength] = 0;
	}

	return getResource(resType, archive);
}

/**
 * @note Address: 0x80032530
 * @note Size: 0xA4
 */
void* JUTResReference::getResource(const void* data, u32 resType, JKRArchive* archive)
{
	setInfo(((u8*)data)[0], ((u8*)data)[1]);

	if (mNameLength != 0) {
		memcpy(&mName, &((u8*)data)[2], mNameLength);
	}

	if (mType == RESTYPE_Unk2 || mType == RESTYPE_Unk3 || mType == RESTYPE_Unk4) {
		mName[mNameLength] = 0;
	}

	return getResource(resType, archive);
}

/**
 * @note Address: 0x800325D4
 * @note Size: 0x78
 */
void* JUTResReference::getResource(u32 resType, JKRArchive* archive)
{
	void* res = nullptr;
	switch (mType) {
	case RESTYPE_Unk1:
		break;
	case RESTYPE_Unk2:
		res = JKRArchive::getGlbResource(resType, mName, archive);
		break;
	case RESTYPE_Unk3:
		res = JKRFileLoader::getGlbResource(mName, archive);
		break;
	case RESTYPE_Unk4:
		res = JKRFileLoader::getGlbResource(mName);
		break;
	}

	return res;
}
