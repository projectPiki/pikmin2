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

	// TODO: These may be just List*?
	List* _18;     // _18
	List* _1C;     // _1C
	Owner* mOwner; // _20
};

template <typename Owner, typename List>
struct InfoMgr : public InfoMgrBase {
	// TODO: ctor
	InfoMgr(int) { }

	// TODO: dtor
	virtual ~InfoMgr() { }           // _08
	virtual void loadResource() = 0; // _0C
	virtual void update()            // _10
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

	virtual void draw(Graphics& gfx) // _14
	{
		List* list = (mActiveList)._1C;
		if (list) {
			for (; list != nullptr; list = list->_1C) {
				list->draw(gfx);
			}
		}
	}

	virtual List* regist(Owner* owner) // _18
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
	virtual void scratch(Owner* owner)
	{
		List* list = search(mActiveList._1C, owner); // search(&mActiveList, owner); // this I cant get to work
		if (list) {
			addInactiveList(list);
		}
	}

	List* search(List* list, Owner* owner)
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

	void addActiveList(List* list)
	{
		if (list->_18) {
			list->_18->_1C = list->_1C;
		}
	}
	void addInactiveList(List* list)
	{
		if (list->_18) {
			list->_18->_1C = list->_1C;
		}
	}

	List mActiveList;   // _04 when List is CarryInfoList
	List mInactiveList; // _5C when List is CarryInfoList
	int mCount;         // _B4 when List is CarryInfoList
};

#endif
