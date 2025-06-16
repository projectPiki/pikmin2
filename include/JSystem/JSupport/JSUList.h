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

	void* getObjectPtr() const { return mValue; }
	JSUPtrList* getList() const { return mList; }
	JSUPtrLink* getNext() const { return mNext; }
	JSUPtrLink* getPrev() const { return mPrev; }

	void* mValue;      // _00
	JSUPtrList* mList; // _04
	JSUPtrLink* mPrev; // _08
	JSUPtrLink* mNext; // _0C
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

	JSUPtrLink* getFirstLink() const { return mHead; }
	JSUPtrLink* getLastLink() const { return mTail; }
	u32 getNumLinks() const { return mLinkCount; }

	JSUPtrLink* mHead; // _00
	JSUPtrLink* mTail; // _04
	u32 mLinkCount;    // _08
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

template <typename T>
class JSUListIterator {
public:
	JSUListIterator()
	    : mLink(nullptr)
	{
	}
	JSUListIterator(JSULink<T>* link)
	    : mLink(link)
	{
	}
	JSUListIterator(JSUList<T>* list)
	    : mLink(list->getFirst())
	{
	}

	JSUListIterator<T>& operator=(JSULink<T>* link)
	{
		this->mLink = link;
		return *this;
	}

	T* getObject() { return this->mLink->getObject(); }

	bool operator==(JSULink<T> const* other) const { return this->mLink == other; }
	bool operator!=(JSULink<T> const* other) const { return this->mLink != other; }
	bool operator==(JSUListIterator<T> const& other) const { return this->mLink == other.mLink; }
	bool operator!=(JSUListIterator<T> const& other) const { return this->mLink != other.mLink; }

	JSUListIterator<T> operator++(int)
	{
		JSUListIterator<T> prev = *this;
		this->mLink             = this->mLink->getNext();
		return prev;
	}

	JSUListIterator<T>& operator++()
	{
		this->mLink = this->mLink->getNext();
		return *this;
	}

	JSUListIterator<T> operator--(int)
	{
		JSUListIterator<T> prev = *this;
		this->mLink             = this->mLink->getPrev();
		return prev;
	}

	JSUListIterator<T>& operator--()
	{
		this->mLink = this->mLink->getPrev();
		return *this;
	}

	T& operator*() { return *this->getObject(); }

	T* operator->() { return this->getObject(); }

	// private:
	JSULink<T>* mLink;
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

	// inline JSULink<T>* free() const
	// {
	// 	JSULink<T>* next = getNext();
	// 	delete getObject();
	// 	return next;
	// }
};

/**
 * @fabricated
 * @size{0x4}
 */
template <typename T>
struct JSULinkIterator {
	inline JSULinkIterator()
	    : mLink(nullptr)
	{
	}
	inline JSULinkIterator(JSULink<T>* link)
	    : mLink(link)
	{
	}

	inline bool operator==(JSULink<T>* other) { return mLink == other; }
	inline bool operator!=(const JSULink<T>* other) const { return mLink != other; };

	inline JSULinkIterator<T> operator++(int)
	{
		JSULinkIterator<T> prev = *this;
		mLink                   = mLink->getNext();
		return prev;
	}

	inline JSULinkIterator<T>& operator++()
	{
		mLink = mLink->getNext();
		return *this;
	}

	inline JSULinkIterator<T> operator--(int)
	{
		JSULinkIterator<T> next = *this;
		mLink                   = mLink->getPrev();
		return next;
	}

	inline JSULinkIterator<T>& operator--()
	{
		mLink = mLink->getPrev();
		return *this;
	}

	inline T& operator*() { return *(getObject()); }
	inline T* operator->() const { return mLink->getObject(); }

	inline T* getObject() const { return mLink->getObject(); }

	JSULink<T>* mLink; // _00
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
	bool prependChild(JSUTree<T>* child) { return this->prepend(child); }
	bool removeChild(JSUTree<T>* child) { return this->remove(child); }
	bool insertChild(JSUTree<T>* before, JSUTree<T>* child) { return this->insert(before, child); }

	JSUTree<T>* getFirstChild() const { return (JSUTree<T>*)getFirstLink(); }
	JSUTree<T>* getLastChild() const { return (JSUTree<T>*)getLast(); }
	JSUTree<T>* getNextChild() const { return (JSUTree<T>*)mNext; }
	JSUTree<T>* getPrevChild() const { return (JSUTree<T>*)getPrev(); }
	JSUTree<T>* getEndChild() const { return nullptr; }

	u32 getNumChildren() const { return mLinkCount; }
	T* getObject() const { return (T*)mValue; }
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
	    : mTree(nullptr)
	{
	}
	JSUTreeIterator(JSUTree<T>* tree)
	    : mTree(tree)
	{
	}

	bool operator==(JSUTree<T>* other) { return mTree == other; }
	bool operator!=(const JSUTree<T>* other) const { return mTree != other; };

	inline JSUTreeIterator<T> operator++(int)
	{
		JSUTreeIterator<T> prev = *this;
		mTree                   = mTree->getNextChild();
		return prev;
	}

	inline JSUTreeIterator<T>& operator++()
	{
		mTree = mTree->getNextChild();
		return *this;
	}

	T& operator*() { return *(getObject()); }
	T* operator->() const { return mTree->getObject(); }

	T* getObject() const { return mTree->getObject(); }

	JSUTree<T>* mTree; // _00
};

#endif
