#ifndef _JSYSTEM_JPA_JPANODE_H
#define _JSYSTEM_JPA_JPANODE_H

#include "types.h"

struct JPABaseParticle;

template <typename T>
struct JPANode {
	JPANode()
	{
		mPrev = nullptr;
		mNext = nullptr;
	}

	~JPANode() { }

	JPANode<T>* getPrev() { return mPrev; }
	JPANode<T>* getNext() { return mNext; }
	T* getObject() { return &mData; }

	JPANode<T>* mPrev; // _00
	JPANode<T>* mNext; // _04
	T mData;           // _08
};

typedef JPANode<JPABaseParticle>* (*getNodeFunc)(JPANode<JPABaseParticle>*);

template <typename T>
struct JPAList {
	JPANode<T>* mFirst; // _00
	JPANode<T>* mLast;  // _04
	u32 mNum;           // _08

	JPAList()
	    : mFirst(nullptr)
	    , mLast(nullptr)
	    , mNum()
	{
	}

	JPANode<T>* getEnd() { return nullptr; }
	JPANode<T>* getFirst() const { return mFirst; }
	JPANode<T>* getLast() const { return mLast; }
	u32 getNum() const { return mNum; }

	void push_front(JPANode<T>* node)
	{
		if (mFirst != nullptr) {
			node->mPrev   = nullptr;
			node->mNext   = mFirst;
			mFirst->mPrev = node;
			mFirst        = node;
		} else {
			mLast       = node;
			mFirst      = node;
			node->mPrev = nullptr;
			node->mNext = nullptr;
		}

		mNum++;
	}

	void push_back(JPANode<T>* node)
	{
		if (mLast != nullptr) {
			node->mPrev  = mLast;
			node->mNext  = nullptr;
			mLast->mNext = node;
			mLast        = node;
		} else {
			mFirst      = node;
			mLast       = node;
			node->mPrev = nullptr;
			node->mNext = nullptr;
		}

		mNum++;
	}

	JPANode<T>* pop_front()
	{
		JPANode<T>* ret = nullptr;

		if (mNum == 1) {
			ret    = mFirst;
			mLast  = nullptr;
			mFirst = nullptr;
			mNum--;
		} else if (mNum) {
			ret               = mFirst;
			ret->mNext->mPrev = nullptr;
			mFirst            = ret->mNext;
			mNum--;
		}

		return ret;
	}

	JPANode<T>* pop_back()
	{
		JPANode<T>* ret = nullptr;

		if (mNum == 1) {
			ret    = mLast;
			mLast  = nullptr;
			mFirst = nullptr;
			mNum--;
		} else if (mNum) {
			ret               = mLast;
			ret->mPrev->mNext = nullptr;
			mLast             = ret->mPrev;
			mNum--;
		}

		return ret;
	}
};

#endif
