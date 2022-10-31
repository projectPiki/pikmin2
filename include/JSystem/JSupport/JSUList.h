#ifndef _JSYSTEM_JSU_JSULIST_H
#define _JSYSTEM_JSU_JSULIST_H

#include "types.h"

struct JSUPtrList;
template <typename T>
struct JSULink;

/**
 * @size{0x10}
 */
struct JSUPtrLink {
	JSUPtrLink(void*);
	~JSUPtrLink();

	void* getObjectPtr() const { return m_value; }
	JSUPtrList* getList() const { return m_list; }
	JSUPtrLink* getNext() const { return m_next; }
	JSUPtrLink* getPrev() const { return m_prev; }

	void* m_value;      // _00
	JSUPtrList* m_list; // _04
	JSUPtrLink* m_prev; // _08
	JSUPtrLink* m_next; // _0C
};

/**
 * @size{0xC}
 */
struct JSUPtrList {
	JSUPtrList() { initiate(); }

	JSUPtrList(bool);

	~JSUPtrList();
	void initiate();
	bool append(JSUPtrLink*);
	bool prepend(JSUPtrLink*);
	bool insert(JSUPtrLink*, JSUPtrLink*);
	bool remove(JSUPtrLink*);
	JSUPtrLink* getNthLink(u32) const;

	JSUPtrLink* getFirstLink() const { return m_head; }
	JSUPtrLink* getLastLink() const { return m_tail; }
	u32 getNumLinks() const { return m_linkCount; }

	JSUPtrLink* m_head; // _00
	JSUPtrLink* m_tail; // _04
	u32 m_linkCount;    // _08
};

/**
 * @size{0xC}
 */
template <typename T>
struct JSUList : public JSUPtrList {
	inline JSUList<T>()
	    : JSUPtrList()
	{
	}

	/** @fabricated */
	inline JSUList<T>(bool initiate)
	    : JSUPtrList(initiate)
	{
	}

	bool append(JSULink<T>* link) { return JSUPtrList::append((JSUPtrLink*)link); }
	bool prepend(JSULink<T>* link) { return JSUPtrList::prepend((JSUPtrLink*)link); }
	bool insert(JSULink<T>* before, JSULink<T>* link) { return JSUPtrList::insert((JSUPtrLink*)before, (JSUPtrLink*)link); }
	bool remove(JSULink<T>* link) { return JSUPtrList::remove((JSUPtrLink*)link); }

	JSULink<T>* getFirst() const { return (JSULink<T>*)getFirstLink(); }
	JSULink<T>* getLast() const { return (JSULink<T>*)getLastLink(); }
	JSULink<T>* getEnd() const { return nullptr; }

	u32 getNumLinks() const { return JSUPtrList::getNumLinks(); }
};

/**
 * @size{0x10}
 */
template <typename T>
struct JSULink : public JSUPtrLink {
	inline JSULink<T>(T* value)
	    : JSUPtrLink((void*)value)
	{
	}

	inline T* getObject() const { return (T*)getObjectPtr(); }
	inline JSUList<T>* getList() const { return (JSUList<T>*)JSUPtrLink::getList(); } // fabricated
	inline JSULink<T>* getNext() const { return (JSULink<T>*)JSUPtrLink::getNext(); }
	inline JSULink<T>* getPrev() const { return (JSULink<T>*)JSUPtrLink::getPrev(); }
};

/**
 * @size{0x1C}
 */
template <typename T>
struct JSUTree : public JSUList<T>, public JSULink<T> {
	inline JSUTree(T* owner)
	    : JSUList<T>()
	    , JSULink<T>(owner) {};

	bool appendChild(JSUTree<T>* child) { return this->append(child); }
	bool removeChild(JSUTree<T>* child) { return this->remove(child); }
	bool insertChild(JSUTree<T>* before, JSUTree<T>* child) { return this->insert(before, child); }

	JSUTree<T>* getFirstChild() const { return (JSUTree<T>*)getFirstLink(); }
	JSUTree<T>* getLastChild() const { return (JSUTree<T>*)getLast(); }
	JSUTree<T>* getNextChild() const { return (JSUTree<T>*)m_next; }
	JSUTree<T>* getPrevChild() const { return (JSUTree<T>*)getPrev(); }
	JSUTree<T>* getEndChild() const { return nullptr; }

	int getNumChildren() const { return getNumLinks(); }
	T* getObject() const { return (T*)m_value; }
	JSUTree<T>* getParent() const { return (JSUTree<T>*)getList(); }

	// JSUList at _00
	// JSULink at _0C
};

/**
 * @size{0x4}
 */
template <typename T>
struct JSUTreeIterator {
	JSUTreeIterator()
	    : m_tree(nullptr)
	{
	}
	JSUTreeIterator(JSUTree<T>* tree)
	    : m_tree(tree)
	{
	}

	bool operator==(JSUTree<T>* other) { return m_tree == other; }
	bool operator!=(const JSUTree<T>* other) const { return m_tree != other; };

	inline JSUTreeIterator<T> operator++(int)
	{
		JSUTreeIterator<T> prev = *this;
		m_tree                  = m_tree->getNextChild();
		return prev;
	}

	inline JSUTreeIterator<T>& operator++()
	{
		m_tree = m_tree->getNextChild();
		return *this;
	}

	T& operator*() { return *(getObject()); }
	T* operator->() const { return m_tree->getObject(); }

	T* getObject() const { return m_tree->getObject(); }

	JSUTree<T>* m_tree; // _00
};

#endif
