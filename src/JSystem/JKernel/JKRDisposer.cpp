#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__11JKRDisposer
    __vt__11JKRDisposer:
        .4byte 0
        .4byte 0
        .4byte __dt__11JKRDisposerFv
        .4byte 0
*/

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
