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
		if (_18) {
			_18->_1C = _1C;
		}
		if (_1C) {
			_1C->_18 = _18;
		}
		_1C = nullptr;
		_18 = nullptr;
	}
	virtual void init() { }          // _0C
	virtual void update() { }        // _10
	virtual void draw(Graphics&) { } // _14
	virtual bool isFinish() = 0;     // _18

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	List* _18;     // _18
	List* _1C;     // _1C
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
	List* next = (mActiveList)._1C;
	List* current;
	while (current = next, current) {
		next = current->_1C;
		current->update();
		if (current->isFinish()) {
			addInactiveList(current);
		}
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::draw(Graphics& gfx)
{
	List* list = (mActiveList)._1C;
	if (list) {
		for (; list != nullptr; list = list->_1C) {
			list->draw(gfx);
		}
	}
}

template <typename Owner, typename List>
List* InfoMgr<Owner, List>::search(List* list, Owner* owner)
{
	while (true) {
		if (list == nullptr) {
			return nullptr;
		}
		if (((InfoListBase<Owner, List>*)list)->mOwner == owner) {
			return list;
		}
		list = ((InfoListBase<Owner, List>*)list)->_1C;
	}
}

template <typename Owner, typename List>
List* InfoMgr<Owner, List>::regist(Owner* owner)
{
	List* list;
	for (list = (mActiveList)._1C; list != nullptr; list = list->_1C) {
		if (list->mOwner == owner) {
			break;
		}
	}
	if (list == nullptr) {
		list = (mActiveList)._1C;
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
	List* list = search(mActiveList._1C, owner); // search(&mActiveList, owner); // this I cant get to work
	if (list) {
		addInactiveList(list);
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::addActiveList(List* list)
{
	if (list->_18) {
		list->_18->_1C = list->_1C;
	}
}

template <typename Owner, typename List>
void InfoMgr<Owner, List>::addInactiveList(List* list)
{
	if (list->_18) {
		list->_18->_1C = list->_1C;
	}
}

template <typename Owner, typename List>
InfoMgr<Owner, List>::InfoMgr(int)
{
}

#endif
