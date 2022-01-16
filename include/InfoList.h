#ifndef _INFOLIST_H
#define _INFOLIST_H

#include "JSystem/JKR/JKRDisposer.h"
#include "types.h"

struct Graphics;

struct InfoMgrBase {
	virtual ~InfoMgrBase(); // _00
	virtual void loadResource() = 0;           // _04
	virtual void update() = 0;                 // _08
	virtual void draw(Graphics&) = 0;          // _0C

	// VTBL _00
};

template <typename Owner, typename List> struct InfoListBase : public JKRDisposer {
	virtual ~InfoListBase() // _00
	{
		if (_18 != nullptr) {
			_18->_1C = _1C;
		}
		if (_1C != nullptr) {
			_1C->_18 = _18;
		}
		_1C = nullptr;
		_18 = nullptr;
	}
	virtual void init() {}; // _04
	virtual void update() {}; // _08
	virtual void draw(Graphics&) {}; // _0C
	virtual bool isFinish() = 0; // _10

	// TODO: These may be just List*?
	InfoListBase<Owner, List>* _18; // _18
	InfoListBase<Owner, List>* _1C; // _1C
	Owner* m_owner; // _20
};


template <typename Owner, typename List> struct InfoMgr : public InfoMgrBase {
	// TODO: ctor
	InfoMgr();

	// TODO: dtor
	virtual ~InfoMgr();               // _00

	virtual void loadResource() = 0;           // _04

	virtual void update()                 // _08
	{
		// InfoListBase<Owner, List>* next;
		// for (
		// 	InfoListBase<Owner, List>* current = ((InfoListBase<Owner,List>)m_list)._1C;
		// 	current != nullptr;
		// 	current = next
		// ) {
		InfoListBase<Owner, List>* next = ((InfoListBase<Owner,List>)m_activeList)._1C;
		InfoListBase<Owner, List>* current;
		while (current = next, current != nullptr) {
			next = current->_1C;
			current->update();
			if (current->isFinish()) {
				addInactiveList(current);
			}
		}
	}

	virtual void draw(Graphics& gfx)          // _0C
	{
		InfoListBase<Owner, List>* list = ((InfoListBase<Owner,List>)m_activeList)._1C;
		if (list != nullptr) {
			for (; list != nullptr; list = list->_1C) {
				list->draw(gfx);
			}
		}
	}

	virtual List* regist(Owner* owner) // _10
	{
		InfoListBase<Owner, List>* list;
		for (
			list = ((InfoListBase<Owner,List>)m_activeList)._1C;
			list != nullptr;
			list = list->_1C
		) {
			if (list->m_owner == owner) {
				break;
			}
		}
		if (list == nullptr) {
			list = ((InfoListBase<Owner,List>)m_activeList)._1C;
		}
		if (list != nullptr) {
			list->m_owner = owner;
			addActiveList(list);
		}
		return list;
	}

	virtual List* search(List* list, Owner* owner) // _14
	{
		while (true) {
			if (list == nullptr) {
				return nullptr;
			}
			if (((InfoListBase<Owner, List>*)list)->m_owner == owner) {
				return list;
			}
			list = ((InfoListBase<Owner, List>*)list)->_1C;
		}
	}

	void addActiveList(List*);
	void addInactiveList(List*);

	List m_activeList; // _04 when List is CarryInfoList
	List m_inactiveList; // _5C when List is CarryInfoList
	int m_count; // _B4 when List is CarryInfoList
};

#endif
