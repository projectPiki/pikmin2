#ifndef _INFOLIST_H
#define _INFOLIST_H

#include "JSystem/JKernel/JKRDisposer.h"
#include "types.h"

struct Graphics;

struct InfoMgrBase {
	virtual ~InfoMgrBase() { }        // _08
	virtual void loadResource()  = 0; // _0C
	virtual void update()        = 0; // _10
	virtual void draw(Graphics&) = 0; // _14

	// VTBL _00
};

template <typename Owner, typename List>
struct InfoListBase : public JKRDisposer {
	virtual ~InfoListBase() // _08
	{
		if (mPrev) {
			mPrev->mNext = mNext;
		}
		if (mNext) {
			mNext->mPrev = mPrev;
		}
		mNext = nullptr;
		mPrev = nullptr;
	}
	virtual void init() { }          // _0C
	virtual void update() { }        // _10
	virtual void draw(Graphics&) { } // _14
	virtual bool isFinish() = 0;     // _18

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	List* mPrev;   // _18
	List* mNext;   // _1C
	Owner* mOwner; // _20
};

template <typename Owner, typename List>
struct InfoMgr : public InfoMgrBase {
	InfoMgr(int);

	virtual ~InfoMgr() { }              // _08
	virtual void loadResource() = 0;    // _0C
	virtual void update();              // _10
	virtual void draw(Graphics& gfx);   // _14
	virtual List* regist(Owner* owner); // _18
	virtual void scratch(Owner* owner); // _1C

	List* search(List* list, Owner* owner);
	void addActiveList(List* list);
	void addInactiveList(List* list);

	// _00     = VTBL
	// _00-_04 = InfoMgrBase
	List mActiveList;   // _04 when List is CarryInfoList
	List mInactiveList; // _5C when List is CarryInfoList
	int mCount;         // _B4 when List is CarryInfoList
};

template <typename Owner, typename List>
void InfoMgr<Owner, List>::update()
{
	List* next = (mActiveList).mNext;
	List* current;
	while (current = next, current) {
		next = current->mNext;
		current->update();
		if (current->isFinish()) {
			addInactiveList(current);
		}
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::draw(Graphics& gfx)
{
	FOREACH_NODE(List, mActiveList.mNext, cList) { cList->draw(gfx); }
}

template <typename Owner, typename List>
List* InfoMgr<Owner, List>::search(List* list, Owner* owner)
{
	FOREACH_NODE(List, list, cList)
	{
		if (cList->mOwner == owner) {
			return cList;
		}
	}
	return nullptr;
}

template <typename Owner, typename List>
List* InfoMgr<Owner, List>::regist(Owner* owner)
{
	List* list;
	for (list = (mActiveList).mNext; list != nullptr; list = list->mNext) {
		if (list->mOwner == owner) {
			break;
		}
	}
	if (list == nullptr) {
		list = (mActiveList).mNext;
	}
	if (list) {
		list->mOwner = owner;
		addActiveList(list);
	}
	return list;
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::scratch(Owner* owner)
{
	List* list = search(mActiveList.mNext, owner); // search(&mActiveList, owner); // this I cant get to work
	if (list) {
		addInactiveList(list);
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::addActiveList(List* list)
{
	if (list->mPrev) {
		list->mPrev->mNext = list->mNext;
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::addInactiveList(List* list)
{
	if (list->mPrev) {
		list->mPrev->mNext = list->mNext;
	}
}

template <typename Owner, typename List>
InfoMgr<Owner, List>::InfoMgr(int)
{
}

#endif
