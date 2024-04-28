#include "JSystem/JAudio/JAD/JADUtility.h"
#include "types.h"

/**
 * @note Address: 0x800BA564
 * @note Size: 0xAC
 */
JADUtility::PrmSetBase::PrmSetBase(bool p1)
    : JKRDisposer()
    , mPreDataByteSize(0)
    , mPostDataByteSize(0)
    , _1A(p1)
    , mList()
    , mTree(this)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
// JADUtility::PrmSetTree::~PrmSetTree()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
// JADUtility::NodeTree<JADUtility::PrmSetBase>::~NodeTree()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
// void JSUTree<JADUtility::PrmSetBase>::~JSUTree()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<JADUtility::PrmSetBase>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSUList<JADUtility::PrmSetBase>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSUList<JADUtility::PrmBase>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// void JADUtility::PrmSetBase::appendDummy(u8)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800BA610
 * @note Size: 0x98
 */
void JADUtility::PrmSetBase::load(JSUMemoryInputStream& input)
{
	input.skip(mPreDataByteSize);
	for (JSULink<PrmBase>* link = mList.getFirst(); link != nullptr; link = link->getNext()) {
		link->getObject()->load(input);
	}
	input.skip(mPostDataByteSize);
}

/**
 * @note Address: 0x800BA6A8
 * @note Size: 0x40
 */
// void JADUtility::PrmBase::load(JSUMemoryInputStream&)
// {
// }

/**
 * @note Address: 0x800BA6E8
 * @note Size: 0xE8
 */
// JADUtility::PrmSetBase::~PrmSetBase()
// {
// 	JSULink<PrmBase>* link;
// 	while ((link = _1C.getFirst()) != nullptr) {
// 		_1C.remove(link);
// 	}
// }

/**
 * @note Address: 0x800BA7D0
 * @note Size: 0x4
 */
// void JADUtility::PrmSetBase::appendAfter() { }

/**
 * @note Address: 0x800BA7D4
 * @note Size: 0x4
 */
// void JADUtility::PrmSetBase::afterRemovingChildButton(JADUtility::PrmSetBase*) { }

/**
 * @note Address: 0x800BA7D8
 * @note Size: 0x4
 */
// void JADUtility::PrmSetBase::afterRemovingThisButton(JADUtility::PrmSetBase*) { }

/**
 * @note Address: 0x800BA7DC
 * @note Size: 0x8
 */
// void* JADUtility::PrmSetBase::getEraseLink() { return nullptr; }

/**
 * @note Address: 0x800BA7E4
 * @note Size: 0x4
 */
// void JADUtility::PrmSetBase::afterGetFromFree() { }

/**
 * @note Address: 0x800BA7E8
 * @note Size: 0x4
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::beforeRemovingChild(JADUtility::PrmSetBase*) { }

/**
 * @note Address: 0x800BA7EC
 * @note Size: 0x4
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::beforeRemovingThis(JADUtility::PrmSetBase*) { }

/**
 * @note Address: 0x800BA7F0
 * @note Size: 0x4
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::afterRemovingChildButton(JADUtility::PrmSetBase*) { }

/**
 * @note Address: 0x800BA7F4
 * @note Size: 0x4
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::afterRemovingThisButton(JADUtility::PrmSetBase*, JADUtility::PrmSetBase*) { }
