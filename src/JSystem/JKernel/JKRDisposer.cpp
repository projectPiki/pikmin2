#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"

/**
 * @note Address: 0x8001CFCC
 * @note Size: 0x68
 */
JKRDisposer::JKRDisposer()
    : mLink(this)
{
	mHeap = JKRHeap::findFromRoot(this);
	if (mHeap) {
		mHeap->mDisposerList.append(&mLink);
	}
}

/**
 * @note Address: 0x8001D034
 * @note Size: 0x84
 */
JKRDisposer::~JKRDisposer()
{
	if (mHeap) {
		mHeap->mDisposerList.remove(&mLink);
	}
}
