#ifndef _INFOLIST_H
#define _INFOLIST_H

#include "JSystem/JKernel/JKRDisposer.h"
#include "types.h"

struct Graphics;

struct InfoMgrBase {
	virtual ~InfoMgrBase();           // _08
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
	virtual void init() {};          // _0C
	virtual void update() {};        // _10
	virtual void draw(Graphics&) {}; // _14
	virtual bool isFinish() = 0;     // _18

	// TODO: These may be just List*?
	InfoListBase<Owner, List>* _18; // _18
	InfoListBase<Owner, List>* _1C; // _1C
	Owner* mOwner;                  // _20
};

template <typename Owner, typename List>
struct InfoMgr : public InfoMgrBase {
	// TODO: ctor
	InfoMgr(int);

	// TODO: dtor
	virtual ~InfoMgr();              // _08
	virtual void loadResource() = 0; // _0C
	virtual void update()            // _10
	{
		// InfoListBase<Owner, List>* next;
		// for (
		// 	InfoListBase<Owner, List>* current = ((InfoListBase<Owner,List>)mList)._1C;
		// 	current != nullptr;
		// 	current = next
		// ) {
		InfoListBase<Owner, List>* next = ((InfoListBase<Owner, List>)mActiveList)._1C;
		InfoListBase<Owner, List>* current;
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
		InfoListBase<Owner, List>* list = ((InfoListBase<Owner, List>)mActiveList)._1C;
		if (list) {
			for (; list != nullptr; list = list->_1C) {
				list->draw(gfx);
			}
		}
	}
	virtual List* regist(Owner* owner) // _18
	{
		InfoListBase<Owner, List>* list;
		for (list = ((InfoListBase<Owner, List>)mActiveList)._1C; list != nullptr; list = list->_1C) {
			if (list->mOwner == owner) {
				break;
			}
		}
		if (list == nullptr) {
			list = ((InfoListBase<Owner, List>)mActiveList)._1C;
		}
		if (list) {
			list->mOwner = owner;
			addActiveList(list);
		}
		return list;
	}
	virtual List* scratch(Owner* owner); // _1C

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

	void addActiveList(List*);
	void addInactiveList(List*);

	List mActiveList;   // _04 when List is CarryInfoList
	List mInactiveList; // _5C when List is CarryInfoList
	int mCount;         // _B4 when List is CarryInfoList
};

#endif
