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
	InfoListBase()
	{
		mOwner = nullptr;
		mNext  = nullptr;
		mPrev  = nullptr;
		init();
	}

	virtual ~InfoListBase() // _08
	{
		// this LOOKS like it should use pop() but IT DOES NOT, doing so destroys carryInfoMgr weak ordering
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

	inline void pop()
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

	inline List* find(Owner* owner)
	{
		FOREACH_NODE(List, mNext, cList)
		{
			if (cList->mOwner == owner) {
				return cList;
			}
		}

		return nullptr;
	}

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	List* mPrev;   // _18
	List* mNext;   // _1C
	Owner* mOwner; // _20
};

template <typename Owner, typename List>
struct InfoMgr : public InfoMgrBase {
	InfoMgr(int);

	virtual List* regist(Owner* owner); // _18
	virtual void scratch(Owner* owner); // _1C
	virtual void loadResource() = 0;    // _0C
	virtual void update();              // _10
	virtual void draw(Graphics& gfx);   // _14

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
	List* current;
	List* next = (mActiveList).mNext;
	current    = next;

	while (current) {
		next = current->mNext;
		current->update();
		if (current->isFinish()) {
			addInactiveList(current);
		}
		current = next;
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::draw(Graphics& gfx)
{
	List* cList = mActiveList.mNext;
	if (mActiveList.mNext) {
		for (cList = mActiveList.mNext; cList; cList = (List*)(cList->mNext)) {
			cList->draw(gfx);
		}
	}
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
	// SHOULD be using search, but wont inline (it needs to not inline in scratch so idk)
	List* list = mActiveList.find(owner);

	if (list == nullptr) {
		list = (mInactiveList).mNext;
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
	List* list = search(mActiveList.mNext, owner);
	if (list) {
		addInactiveList(list);
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::addActiveList(List* list)
{
	list->pop();

	list->mPrev = &mActiveList;
	list->mNext = mActiveList.mNext;

	if (mActiveList.mNext)
		mActiveList.mNext->mPrev = (List*)list;

	mActiveList.mNext = (List*)list;
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::addInactiveList(List* list)
{
	list->mOwner = nullptr;
	list->pop();

	list->mPrev = &mInactiveList;
	list->mNext = mInactiveList.mNext;

	if (mInactiveList.mNext)
		mInactiveList.mNext->mPrev = (List*)list;

	mInactiveList.mNext = (List*)list;
}

template <typename Owner, typename List>
InfoMgr<Owner, List>::InfoMgr(int num)
{
	mCount = num;
	for (int i = 0; i < mCount; i++) {
		List* list = new CarryInfoList;
		addInactiveList(list);
	}
}

#endif
