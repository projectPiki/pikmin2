#include "types.h"

#include "JSystem/JSupport/JSUList.h"

/*
 * Decompilation of this file is derived from https://github.com/shibbo/Petari
 */

/*
 * __ct__10JSUPtrLinkFPv
 * --INFO--
 * Address:	800267B8
 * Size:	000018
 */
JSUPtrLink::JSUPtrLink(void* pData)
{
	mList  = nullptr;
	mValue = pData;
	mPrev  = nullptr;
	mNext  = nullptr;
}

/*
 * __dt__10JSUPtrLinkFv
 * --INFO--
 * Address:	800267D0
 * Size:	000060
 */
JSUPtrLink::~JSUPtrLink()
{
	if (mList) {
		mList->remove(this);
	}
}

/*
 * __ct__10JSUPtrListFb
 * --INFO--
 * Address:	80026830
 * Size:	000038
 */
JSUPtrList::JSUPtrList(bool doInitialize)
{
	if (doInitialize) {
		initiate();
	}
}

/*
 * __dt__10JSUPtrListFv
 * --INFO--
 * Address:	80026868
 * Size:	000068
 */
JSUPtrList::~JSUPtrList()
{
	JSUPtrLink* curHead = mHead;
	for (int i = 0; i < mLinkCount; i++) {
		curHead->mList = nullptr;
		curHead        = curHead->mNext;
	}
}

/*
 * --INFO--
 * Address:	800268D0
 * Size:	000014
 */
void JSUPtrList::initiate()
{
	mHead      = nullptr;
	mTail      = nullptr;
	mLinkCount = 0;
}

/*
 * --INFO--
 * Address:	800268E4
 * Size:	0000B8
 */
bool JSUPtrList::append(JSUPtrLink* pLink)
{
	bool validity = (pLink->mList == nullptr);

	if (!validity) {
		validity = pLink->mList->remove(pLink);
	}

	if (validity) {
		if (mLinkCount == 0) {
			pLink->mList = this;
			pLink->mPrev = nullptr;
			pLink->mNext = nullptr;
			mTail        = pLink;
			mHead        = pLink;
			mLinkCount   = 1;
		} else {
			pLink->mList = this;
			pLink->mPrev = mTail;
			pLink->mNext = nullptr;
			mTail->mNext = pLink;
			mTail        = pLink;
			mLinkCount   = mLinkCount + 1;
		}
	}
	return validity;
}

/*
 * --INFO--
 * Address:	8002699C
 * Size:	0000B8
 */
bool JSUPtrList::prepend(JSUPtrLink* pLink)
{
	bool validity = (pLink->mList == nullptr);

	if (!validity) {
		validity = pLink->mList->remove(pLink);
	}

	if (validity) {
		if (mLinkCount == 0) {
			pLink->mList = this;
			pLink->mPrev = nullptr;
			pLink->mNext = nullptr;
			mTail        = pLink;
			mHead        = pLink;
			mLinkCount   = 1;
		} else {
			pLink->mList = this;
			pLink->mPrev = nullptr;
			pLink->mNext = mHead;
			mHead->mPrev = pLink;
			mHead        = pLink;
			mLinkCount   = mLinkCount + 1;
		}
	}
	return validity;
}

/*
 * --INFO--
 * Address:	80026A54
 * Size:	0001D0
 */
bool JSUPtrList::insert(JSUPtrLink* pLink1, JSUPtrLink* pLink2)
{
	if (pLink1 == mHead) {
		return prepend(pLink2);
	}
	if (!pLink1) {
		return append(pLink2);
	}
	if (pLink1->mList != this) {
		return false;
	}

	JSUPtrList* pLink2List = pLink2->mList;

	bool validity = (pLink2List == 0);

	if (!validity) {
		validity = pLink2List->remove(pLink2);
	}

	if (validity) {
		JSUPtrLink* prev = pLink1->mPrev;
		pLink2->mList    = this;
		pLink2->mPrev    = prev;
		pLink2->mNext    = pLink1;
		prev->mNext      = pLink2;
		pLink1->mPrev    = pLink2;
		mLinkCount++;
	}

	return validity;
}

/*
 * --INFO--
 * Address:	80026C24
 * Size:	0000B0
 */
bool JSUPtrList::remove(JSUPtrLink* pLink)
{
	bool isSameList = (pLink->mList == this);

	if (isSameList) {
		if (mLinkCount == 1) {
			mHead = nullptr;
			mTail = nullptr;
		} else if (pLink == mHead) {
			pLink->mNext->mPrev = nullptr;
			mHead               = pLink->mNext;
		} else if (pLink == mTail) {
			pLink->mPrev->mNext = nullptr;
			mTail               = pLink->mPrev;
		} else {
			pLink->mPrev->mNext = pLink->mNext;
			pLink->mNext->mPrev = pLink->mPrev;
		}

		pLink->mList = nullptr;
		mLinkCount--;
	}

	return isSameList;
}

/*
 * --INFO--
 * Address:	80026CD4
 * Size:	000088
 */
JSUPtrLink* JSUPtrList::getNthLink(u32 n) const
{
	if (n >= mLinkCount) {
		return nullptr;
	}
	JSUPtrLink* curHead = mHead;
	for (int i = 0; i < n; i++) {
		curHead = curHead->mNext;
	}
	return curHead;
}
