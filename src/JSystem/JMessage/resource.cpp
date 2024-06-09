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

/**
 * @note Address: 0x800065A8
 * @note Size: 0x74
 */
JMessage::TResourceContainer::TCResource::~TCResource()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80006600
	lis      r4, __vt__Q38JMessage18TResourceContainer10TCResource@ha
	addi     r0, r4, __vt__Q38JMessage18TResourceContainer10TCResource@l
	stw      r0, 0xc(r30)
	beq      lbl_800065F0
	lis      r4,
"__vt__Q27JGadget42TLinkList_factory<Q28JMessage9TResource,0>"@ha addi     r0,
r4, "__vt__Q27JGadget42TLinkList_factory<Q28JMessage9TResource,0>"@l stw r0,
0xc(r30) beq      lbl_800065F0 li       r4, 0 bl
__dt__Q27JGadget13TNodeLinkListFv

lbl_800065F0:
	extsh.   r0, r31
	ble      lbl_80006600
	mr       r3, r30
	bl       __dl__FPv

lbl_80006600:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
JMessage::TResource* JMessage::TResourceContainer::TCResource::Do_create() { return new JMessage::TResource; }

/**
 * @note Address: 0x800066EC
 * @note Size: 0x24
 */
void JMessage::TResourceContainer::TCResource::Do_destroy(JMessage::TResource* res) { delete res; }

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
JMessage::TParse::~TParse() { }

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
		mResourceContainer->setEncoding(encoding); // not quite right
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
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r6
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  stw       r28, 0x30(r1)
	  lwz       r31, 0x0(r4)
	  addi      r0, r31, 0x20
	  mr        r3, r31
	  stw       r0, 0x0(r4)
	  subi      r4, r2, 0x7FC8
	  lwz       r0, 0xC(r31)
	  stw       r0, 0x0(r5)
	  li        r5, 0x4
	  bl        0xC0784
	  cmpwi     r3, 0
	  beq-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x16C

	.loc_0x58:
	  lwz       r3, 0x4(r31)
	  subis     r0, r3, 0x626D
	  cmplwi    r0, 0x6731
	  beq-      .loc_0x70
	  li        r3, 0
	  b         .loc_0x16C

	.loc_0x70:
	  lbz       r4, 0x10(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0xF4
	  lwz       r5, 0x4(r29)
	  li        r0, 0
	  lbz       r3, 0x0(r5)
	  cmplw     r3, r4
	  beq-      .loc_0x98
	  cmplwi    r3, 0
	  bne-      .loc_0x9C

	.loc_0x98:
	  li        r0, 0x1

	.loc_0x9C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xAC
	  li        r3, 0
	  b         .loc_0x16C

	.loc_0xAC:
	  cmplwi    r4, 0
	  bne-      .loc_0xC4
	  stb       r4, 0x0(r5)
	  li        r0, 0
	  stw       r0, 0x4(r5)
	  b         .loc_0xF4

	.loc_0xC4:
	  stb       r4, 0x0(r5)
	  li        r0, 0
	  lis       r3, 0x804A
	  cmplwi    r4, 0x4
	  stw       r0, 0x18(r1)
	  rlwinm    r4,r4,2,22,29
	  subi      r0, r3, 0x1D18
	  add       r3, r0, r4
	  blt-      .loc_0xEC
	  addi      r3, r1, 0x18

	.loc_0xEC:
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x4(r5)

	.loc_0xF4:
	  rlwinm.   r0,r30,0,27,27
	  beq-      .loc_0x104
	  li        r3, 0x1
	  b         .loc_0x16C

	.loc_0x104:
	  lwz       r3, 0x4(r29)
	  addi      r28, r3, 0x8
	  mr        r3, r28
	  lwz       r12, 0xC(r28)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x8(r29)
	  lwz       r6, 0x8(r29)
	  cmplwi    r6, 0
	  bne-      .loc_0x138
	  rlwinm    r3,r30,27,31,31
	  b         .loc_0x16C

	.loc_0x138:
	  addi      r0, r28, 0x4
	  mr        r4, r28
	  stw       r0, 0xC(r1)
	  addi      r3, r1, 0x10
	  addi      r5, r1, 0x14
	  stw       r0, 0x8(r1)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  bl        0x209A4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stw       r31, 0x8(r4)

	.loc_0x16C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/**
 * @note Address: 0x800069AC
 * @note Size: 0x17C
 */
bool JMessage::TParse::parseBlock_next(const void** dataPtr, u32* outSize, u32 flag)
{
	data::TParse_THeader* header = (data::TParse_THeader*)dataPtr;
	*(u32*)dataPtr += (u32)(((u32*)header)[1]);
	*outSize = header->getType();

	TResourceContainer::TCResource& container = mResourceContainer->mContainer;
	switch (header->getType()) {
	case 'INF1':
		mResource->setData_block_info(header);
		mResource = nullptr;
		break;
	case 'DAT1':
		mResource->setData_block_messageData((char*)&header[1]);
		TResource* res = mResourceContainer->getResource_groupID(mResource->mInfo.getGroupID());
		if (res != mResource && !!(flag & 0x80)) {
			container.Erase_destroy(res);
		}
		mResource = nullptr;
		break;
	case 'STR1':
		mResource->setData_block_stringAttribute((char*)&header[1]);
		mResource = nullptr;
		break;
	case 'MID1':
		mResource->setData_block_messageID(header);
		mResource = nullptr;
		break;
	default:
		if (!(flag & 0x40))
			return false;
		break;
	}

	return true;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r7, 0x4D49
	  stw       r0, 0x34(r1)
	  addi      r0, r7, 0x4431
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  lwz       r8, 0x0(r4)
	  lwz       r3, 0x4(r8)
	  add       r3, r8, r3
	  stw       r3, 0x0(r4)
	  lwz       r3, 0x4(r8)
	  stw       r3, 0x0(r5)
	  lwz       r4, 0x0(r8)
	  lwz       r3, 0x4(r30)
	  cmpw      r4, r0
	  addi      r31, r3, 0x8
	  beq-      .loc_0x13C
	  bge-      .loc_0x80
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x94
	  bge-      .loc_0x148
	  lis       r3, 0x4441
	  addi      r0, r3, 0x5431
	  cmpw      r4, r0
	  beq-      .loc_0xA0
	  b         .loc_0x148

	.loc_0x80:
	  lis       r3, 0x5354
	  addi      r0, r3, 0x5231
	  cmpw      r4, r0
	  beq-      .loc_0x12C
	  b         .loc_0x148

	.loc_0x94:
	  lwz       r3, 0x8(r30)
	  stw       r8, 0xC(r3)
	  b         .loc_0x158

	.loc_0xA0:
	  lwz       r3, 0x8(r30)
	  addi      r4, r8, 0x8
	  rlwinm.   r0,r6,0,24,24
	  stw       r4, 0x10(r3)
	  lwz       r3, 0x8(r30)
	  lwz       r3, 0xC(r3)
	  lhz       r29, 0xC(r3)
	  beq-      .loc_0x158
	  lwz       r28, 0x4(r31)
	  stw       r28, 0x14(r1)
	  stw       r28, 0x10(r1)
	  b         .loc_0x11C

	.loc_0xD0:
	  lwz       r3, 0xC(r28)
	  lhz       r0, 0xC(r3)
	  cmplw     r29, r0
	  beq-      .loc_0xE8
	  lwz       r28, 0x0(r28)
	  b         .loc_0x11C

	.loc_0xE8:
	  mr        r4, r31
	  mr        r5, r28
	  addi      r3, r1, 0xC
	  bl        0x208AC
	  mr        r3, r31
	  lwz       r0, 0xC(r1)
	  lwz       r12, 0xC(r31)
	  mr        r4, r28
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r28, 0x8(r1)

	.loc_0x11C:
	  lwz       r0, 0x8(r30)
	  cmplw     r28, r0
	  bne+      .loc_0xD0
	  b         .loc_0x158

	.loc_0x12C:
	  lwz       r3, 0x8(r30)
	  addi      r0, r8, 0x8
	  stw       r0, 0x14(r3)
	  b         .loc_0x158

	.loc_0x13C:
	  lwz       r3, 0x8(r30)
	  stw       r8, 0x18(r3)
	  b         .loc_0x158

	.loc_0x148:
	  rlwinm.   r0,r6,0,25,25
	  bne-      .loc_0x158
	  li        r3, 0
	  b         .loc_0x15C

	.loc_0x158:
	  li        r3, 0x1

	.loc_0x15C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/**
 * @note Address: 0x80006B28
 * @note Size: 0x20
 */
JMessage::TParse_color::TParse_color(JMessage::TResourceContainer* container) { mResourceContainer = container; }

/**
 * @note Address: 0x80006B48
 * @note Size: 0x60
 */
JMessage::TParse_color::~TParse_color() { }

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
