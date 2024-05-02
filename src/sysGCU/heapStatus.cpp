#include "System.h"

/**
 * @note Address: 0x8042AFC4
 * @note Size: 0xB0
 */
HeapStatus::HeapStatus()
{
	mHeapInfo.mUnused0     = 0;
	mHeapInfo.mUnused1     = -1;
	mHeapInfo.mUnused2     = 0;
	mHeapInfo.mCurrentNode = &mHeapInfo;
	_50                    = 0;
	mHeapInfo.mParent      = &mHeapInfo;
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
void HeapStatus::start(char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void HeapStatus::end(char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void HeapStatus::setCurrentHeapInfoParent()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void HeapStatus::searchHeapInfo(char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void HeapStatus::searchHeapInfo(HeapInfo*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x36C
 */
void HeapStatus::dump(bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void HeapStatus::dumpNode()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042B074
 * @note Size: 0x1A0
 */
HeapInfo::~HeapInfo()
{
	HeapInfo* info1 = mCurrentNode->mParent;
	HeapInfo* info0 = mCurrentNode;
	if (info1 == this) {
		if (info1->mTree.getParent()) {
			info0->mParent  = static_cast<HeapInfo*>(info1->mTree.getParent()->getObject());
			HeapInfo* info2 = info0->mParent;
			info0->mParent  = info0->search(info2);
			if (info2 != info0->mParent) {
				JUT_PANICLINE(277, "EXIT\n");
			}
		}

	} else {
		if (search(info1)) {
			mCurrentNode->mParent = this;
			HeapInfo* info3       = mCurrentNode->mParent;
			HeapInfo* info2       = mCurrentNode; // _r29
			if (info3->mTree.getParent()) {
				info2->mParent  = static_cast<HeapInfo*>(info3->mTree.getParent()->getObject());
				HeapInfo* info4 = info2->mParent;
				info2->mParent  = info2->search(info4);
				if (info4 != info2->mParent) {
					JUT_PANICLINE(277, "EXIT\n");
				}
			}
		}
	}

	mTree.removeChild(&mTree);
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void HeapInfo::getTotalUsedSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x32C
 */
void HeapInfo::dump(int i, bool check)
{
	JSUTreeIterator<CoreNode> iterator;
	for (iterator = mTree.getFirstChild(); iterator != mTree.getEndChild();) {
		HeapInfo* child = static_cast<HeapInfo*>(iterator.getObject());
		child->dump(i, check);
		++iterator;
	}
}

/**
 * @note Address: 0x8042B28C
 * @note Size: 0x1D8
 */
HeapInfo* HeapInfo::search(HeapInfo* info)
{
	HeapInfo* outInfo = nullptr;
	if (info == this) {
		outInfo = this;
	} else {
		JSUTreeIterator<CoreNode> iterator((&mTree)->getFirstChild());
		for (iterator; iterator != (&mTree)->getEndChild();) {
			outInfo = static_cast<HeapInfo*>(iterator.getObject())->search(info);
			if (outInfo) {
				break;
			}
			++iterator;
		}
	}

	return outInfo;
}

/**
 * @note Address: N/A
 * @note Size: 0x2A4
 */
void HeapInfo::search(char*, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void HeapInfo::isInvalidUsedSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void HeapInfo::isValidUsedSize()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
// void CoreNode::getName() const
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void HeapInfo::getUsedSize(bool)
{
	// UNUSED FUNCTION
}
