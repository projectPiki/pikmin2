#include "JSystem/JAudio/JAD/JADUtility.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800BA564
 * Size:	0000AC
 */
JADUtility::PrmSetBase::PrmSetBase(bool p1)
    : JKRDisposer()
    , _18(0)
    , _19(0)
    , _1A(p1)
    , mList()
    , mTree(this)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
// JADUtility::PrmSetTree::~PrmSetTree()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
// JADUtility::NodeTree<JADUtility::PrmSetBase>::~NodeTree()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
// void JSUTree<JADUtility::PrmSetBase>::~JSUTree()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JADUtility::PrmSetBase>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSUList<JADUtility::PrmSetBase>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSUList<JADUtility::PrmBase>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// void JADUtility::PrmSetBase::appendDummy(u8)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800BA610
 * Size:	000098
 */
void JADUtility::PrmSetBase::load(JSUMemoryInputStream& input)
{
	input.skip(_18);
	for (JSULink<PrmBase>* link = mList.getFirst(); link != nullptr; link = link->getNext()) {
		link->getObject()->load(input);
	}
	input.skip(_19);
}

/*
 * --INFO--
 * Address:	800BA6A8
 * Size:	000040
 */
// void JADUtility::PrmBase::load(JSUMemoryInputStream&)
// {
// }

/*
 * --INFO--
 * Address:	800BA6E8
 * Size:	0000E8
 */
// JADUtility::PrmSetBase::~PrmSetBase()
// {
// 	JSULink<PrmBase>* link;
// 	while ((link = _1C.getFirst()) != nullptr) {
// 		_1C.remove(link);
// 	}
// }

/*
 * --INFO--
 * Address:	800BA7D0
 * Size:	000004
 */
// void JADUtility::PrmSetBase::appendAfter() { }

/*
 * --INFO--
 * Address:	800BA7D4
 * Size:	000004
 */
// void JADUtility::PrmSetBase::afterRemovingChildButton(JADUtility::PrmSetBase*) { }

/*
 * --INFO--
 * Address:	800BA7D8
 * Size:	000004
 */
// void JADUtility::PrmSetBase::afterRemovingThisButton(JADUtility::PrmSetBase*) { }

/*
 * --INFO--
 * Address:	800BA7DC
 * Size:	000008
 */
// void* JADUtility::PrmSetBase::getEraseLink() { return nullptr; }

/*
 * --INFO--
 * Address:	800BA7E4
 * Size:	000004
 */
// void JADUtility::PrmSetBase::afterGetFromFree() { }

/*
 * --INFO--
 * Address:	800BA7E8
 * Size:	000004
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::beforeRemovingChild(JADUtility::PrmSetBase*) { }

/*
 * --INFO--
 * Address:	800BA7EC
 * Size:	000004
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::beforeRemovingThis(JADUtility::PrmSetBase*) { }

/*
 * --INFO--
 * Address:	800BA7F0
 * Size:	000004
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::afterRemovingChildButton(JADUtility::PrmSetBase*) { }

/*
 * --INFO--
 * Address:	800BA7F4
 * Size:	000004
 */
// void JADUtility::NodeTree<JADUtility::PrmSetBase>::afterRemovingThisButton(JADUtility::PrmSetBase*, JADUtility::PrmSetBase*) { }
