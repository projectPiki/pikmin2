#include "JSystem/JKR/Aram.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JKRAramBlock
    __vt__12JKRAramBlock:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRAramBlockFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80019444
 * Size:	00006C
 */
JKRAramBlock::JKRAramBlock(u32 p1, u32 p2, u32 p3, u8 p4, bool p5)
    : mLink(this)
    , _14(p1)
    , _18(p2)
    , _1C(p3)
    , _20(p4)
    , _21(p5)
{
}

/*
 * --INFO--
 * Address:	800194B0
 * Size:	0000BC
 * __dt__12JKRAramBlockFv
 */
JKRAramBlock::~JKRAramBlock()
{
	JSULink<JKRAramBlock>* prev = mLink.getPrev();
	JSUList<JKRAramBlock>* list = mLink.getList();
	if (prev != nullptr) {
		prev->getObject()->_1C += _18 + _1C;
		list->remove(&mLink);
	} else {
		_1C += _18;
		_18 = 0;
	}
}

/*
 * --INFO--
 * Address:	8001956C
 * Size:	0000A8
 */
JKRAramBlock* JKRAramBlock::allocHead(u32 p1, u8 p2, JKRAramHeap* heap)
{
	u32 v1              = _14 + _18;
	u32 v2              = _1C - p1;
	JKRAramBlock* block = new (heap->_30, 0) JKRAramBlock(v1, p1, v2, p2, false);
	_1C                 = 0;
	mLink.mList->insert(mLink.mNext, &block->mLink);
	return block;
}

/*
 * --INFO--
 * Address:	80019614
 * Size:	0000B4
 */
JKRAramBlock* JKRAramBlock::allocTail(u32 p1, u8 p2, JKRAramHeap* heap)
{
	u32 v1              = _14 + _18 + _1C - p1;
	JKRAramBlock* block = new (heap->_30, 0) JKRAramBlock(v1, p1, 0, p2, true);
	_1C -= p1;
	mLink.mList->insert(mLink.mNext, &block->mLink);
	return block;
}
