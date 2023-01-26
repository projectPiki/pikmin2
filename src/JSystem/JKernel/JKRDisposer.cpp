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

/*
 * --INFO--
 * Address:	8001CFCC
 * Size:	000068
 */
JKRDisposer::JKRDisposer()
    : mLink(this)
{
	mHeap = JKRHeap::findFromRoot(this);
	if (mHeap) {
		mHeap->mDisposerList.append(&mLink);
	}
}

/*
 * --INFO--
 * Address:	8001D034
 * Size:	000084
 */
JKRDisposer::~JKRDisposer()
{
	if (mHeap) {
		mHeap->mDisposerList.remove(&mLink);
	}
}
