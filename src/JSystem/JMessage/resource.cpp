#include "types.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JMessage/TResource.h"
#include "JSystem/JMessage/TParse.h"
#include "JSystem/JGadget/enumerator.h"
#include "PowerPC_EABI_Support/MSL_C++/MSL_Common/Include/algorithm.h"

/**
 * @note Address: 0x800063C4
 * @note Size: 0x1E4
 */
u16 JMessage::TResource::toMessageIndex_messageID(u32 lowerHalf, u32 upperHalf, bool* isMsgValid) const
{
	if (!mMessageID.get()) {
		return 0xFFFF;
	}

	u32 val    = -1;
	bool check = true;

	switch (mMessageID.get_formSupplement()) {
	case 0:
		if (upperHalf) {
			check = false;
		}
		val = lowerHalf;
		break;
	case 1:
		if (lowerHalf > 0xFFFFFF || upperHalf > 0xFF) {
			check = false;
		}
		val = ((lowerHalf << 8) & 0xFFFFFF00) | (upperHalf & 0xFF);
		break;
	case 2:
		if (lowerHalf > 0xFFFF || upperHalf > 0xFFFF) {
			check = false;
		}
		val = ((lowerHalf << 16) & 0xFFFF0000) | (upperHalf & 0xFFFF);
		break;
	case 3:
		if (lowerHalf > 0xFF || upperHalf > 0xFFFFFF) {
			check = false;
		}
		val = ((lowerHalf << 24) & 0xFF000000) | (upperHalf & 0x00FFFFFF);
		break;
	case 4:
		if (lowerHalf) {
			check = false;
		}
		val = upperHalf;
		break;
	default:
		return 0xFFFF;
	}

	if (isMsgValid) {
		*isMsgValid = check;
	}

	if (val == 0xFFFFFFFF) {
		return 0xFFFF;
	}

	const u32* first = (u32*)mMessageID.getContent();
	const u32* last  = (u32*)(first + mMessageID.get_number());

	const u32* lower;
	if (mMessageID.get_isOrdered()) {
		lower = std::lower_bound<const u32*, u32>(first, last, val);

		if (lower == last || *lower != val) {
			return 0xFFFF;
		}
	} else {
		lower = first;
		while (lower != last && *lower != val) {
			lower++;
		}
		if (lower == last) {
			return 0xFFFF;
		}
	}
	return (lower - first);
}

// This isn't meant to exist but it fixes vtable order :)
JMessage::TResourceContainer::TCResource::TCResource()
{
}

/**
 * @note Address: 0x800065A8
 * @note Size: 0x74
 */
JMessage::TResourceContainer::TCResource::~TCResource()
{
}

/**
 * @note Address: 0x8000661C
 * @note Size: 0x84
 */
JMessage::TResource* JMessage::TResourceContainer::TCResource::Get_groupID(u16 groupID)
{
	JGadget::TContainerEnumerator<TResource, 0> enumerator(this);
	while (enumerator) {
		const TResource* res = &(*enumerator);
		if (res->mInfo.getGroupID() == groupID)
			return (TResource*)res;
	}
	return nullptr;
}

/**
 * @note Address: 0x800066A0
 * @note Size: 0x4C
 */
JMessage::TResource* JMessage::TResourceContainer::TCResource::Do_create()
{
	return new JMessage::TResource;
}

/**
 * @note Address: 0x800066EC
 * @note Size: 0x24
 */
void JMessage::TResourceContainer::TCResource::Do_destroy(JMessage::TResource* res)
{
	delete res;
}

/**
 * @note Address: 0x80006710
 * @note Size: 0x48
 */
JMessage::TResourceContainer::TResourceContainer()
    : mEncoding(0)
    , isLeadByte(nullptr)
{
}

JMessage::TResourceContainer::IsLeadByteFunc JMessage::TResourceContainer::sapfnIsLeadByte_[4] = {
	nullptr,
	JUTFont::isLeadByte_1Byte,
	JUTFont::isLeadByte_2Byte,
	JUTFont::isLeadByte_ShiftJIS,
};

/**
 * @note Address: 0x80006798
 * @note Size: 0x28
 */
JMessage::TParse::TParse(JMessage::TResourceContainer* container)
{
	mResourceContainer = container;
	mResource          = nullptr;
}

/**
 * @note Address: 0x800067C0
 * @note Size: 0x60
 */
JMessage::TParse::~TParse()
{
}

/**
 * @note Address: 0x80006820
 * @note Size: 0x18C
 */
bool JMessage::TParse::parseHeader_next(const void** dataPtr, u32* outSize, u32 flag)
{
	const void* pData = *dataPtr;

	data::TParse_THeader header(pData);
	*dataPtr = header.getContent();
	*outSize = header.getBlockNumber();

	if (memcmp(header.getSignature(), &data::ga4cSignature, sizeof(data::ga4cSignature)) != 0)
		return false;

	if (header.getType() != 'bmg1')
		return false;

	u8 encoding = header.getEncoding();
	if (encoding != 0) {
		if (!mResourceContainer->isEncodingSettable(encoding)) {
			return false;
		}
		mResourceContainer->setEncoding(encoding);
	}

	if (flag & 0x10)
		return true;

	TResourceContainer::TCResource* container = &mResourceContainer->mContainer;
	mResource                                 = container->Do_create();
	if (mResource == nullptr)
		return flag & 0x20 ? true : false;

	container->Push_back(mResource);
	mResource->setData_header(header.getRaw());
	return true;
}

/**
 * @note Address: 0x800069AC
 * @note Size: 0x17C
 */
bool JMessage::TParse::parseBlock_next(const void** dataPtr, u32* outSize, u32 flag)
{
	data::TParse_THeader* header = (data::TParse_THeader*)*dataPtr;

	data::TParse_TBlock oBlock(header);
	*dataPtr = oBlock.getNext();
	*outSize = oBlock.get_size();

	TResourceContainer::TCResource& container = mResourceContainer->mContainer;
	switch (oBlock.get_type()) {
	case 'INF1':
		mResource->setData_block_info(header);
		break;
	case 'DAT1':
		mResource->setData_block_messageData((char*)&header[2]);

		u16 group = mResource->getGroupID();
		if (flag & 0x80) {
			JGadget::TLinkList<TResource, 0>::iterator iResource(container.begin());
			TResource* pResource;
			while ((pResource = &*iResource) != mResource) {
				if (group != pResource->getGroupID()) {
					iResource++;
				} else {
					iResource = container.Erase_destroy(pResource);
				}
			}
		}
		break;
	case 'STR1':
		mResource->setData_block_stringAttribute((char*)&header[2]);
		break;
	case 'MID1':
		mResource->setData_block_messageID(header);
		break;
	default:
		if (!(flag & 0x40))
			return false;
		break;
	}

	return true;
}

/**
 * @note Address: 0x80006B28
 * @note Size: 0x20
 */
JMessage::TParse_color::TParse_color(JMessage::TResourceContainer* container)
{
	mResourceContainer = container;
}

/**
 * @note Address: 0x80006B48
 * @note Size: 0x60
 */
JMessage::TParse_color::~TParse_color()
{
}

/**
 * @note Address: 0x80006BA8
 * @note Size: 0xBC
 */
bool JMessage::TParse_color::parseHeader_next(const void** dataPtr, u32* outSize, u32 flag)
{
	const void* pData = *dataPtr;
	data::TParse_THeader header(pData);
	*dataPtr = header.getContent();
	*outSize = header.getBlockNumber();

	if (memcmp(header.getSignature(), &data::ga4cSignature_color, sizeof(data::ga4cSignature_color)) != 0)
		return false;

	if (header.getType() != 'bmc1')
		return false;

	TResourceContainer* container = mResourceContainer;
	if (container->isResourceContained_color() && !(flag & 0x20)) {
		return false;
	}

	container->mColor.reset();
	container->mColor.setData_header(header.getRaw());

	return true;
}

/**
 * @note Address: 0x80006C64
 * @note Size: 0x54
 */
bool JMessage::TParse_color::parseBlock_next(const void** dataPtr, u32* outSize, u32 flag)
{
	const void* pData = *dataPtr;
	data::TParse_TBlock block(pData);
	*dataPtr = (const void*)((u32)pData + ((u32*)pData)[1]);
	*outSize = ((u32*)pData)[1];

	TResourceContainer* container = mResourceContainer;
	switch (((int*)pData)[0]) {
	case 'CLT1':
		container->mColor.mBlock.setRaw(pData);
		break;
	default:
		if (!(flag & 0x10)) {
			return false;
		}
		break;
	}
	return true;
}
