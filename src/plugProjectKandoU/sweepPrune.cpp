#include "types.h"
#include "SweepPrune.h"

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
inline void SweepPrune::Node::insertBefore(SweepPrune::Node* prev)
{
	// UNUSED FUNCTION
	Node* next = prev->mNext;
	mPrev      = prev;
	mNext      = next;
	if (next) {
		next->mPrev = this;
	}
	// This function kind of assumes prev is nonnull earlier...
	if (prev) {
		prev->mNext = this;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
inline void SweepPrune::Node::insertAfter(SweepPrune::Node* next)
{
	// UNUSED FUNCTION
	Node* prev  = next->mPrev;
	next->mPrev = this;
	mPrev       = prev;
	mNext       = next;
	if (prev) {
		prev->mNext = this;
	}
}

/**
 * Inserts `this` into the node chain `chain` according to its
 * radius. The chain is assumed to be pre-sorted as such.
 *
 * @note Address: 0x8023C5B0
 * @note Size: 0x1C8
 */
void SweepPrune::Node::insertSort(SweepPrune::Node& chain)
{
	if (mNext) {
		if (mNext->mRadius > mRadius) {
			for (Node* iNode = mNext; iNode != nullptr; iNode = iNode->mNext) {
				if (iNode->mRadius <= mRadius) {
					if (mNext) {
						mNext->mPrev = mPrev;
					}
					if (mPrev) {
						mPrev->mNext = mNext;
					}
					mNext = nullptr;
					mPrev = nullptr;
					insertAfter(iNode);
					return;
				}
			}
			return;
		}
		if (mPrev == nullptr) {
			return;
		}

		if (mPrev->mRadius < mRadius) {
			for (Node* iNode = mPrev; iNode != nullptr; iNode = iNode->mPrev) {
				if (iNode->mRadius >= mRadius) {
					if (mNext) {
						mNext->mPrev = mPrev;
					}
					if (mPrev) {
						mPrev->mNext = mNext;
					}
					mNext = nullptr;
					mPrev = nullptr;
					insertBefore(iNode);
					return;
				}
			}
		}

		return;
	}

	if (chain.mPrev == nullptr) {
		insertAfter(&chain);
		return;
	}

	Node* next = nullptr;
	for (Node* prev = chain.mPrev; prev != nullptr; prev = prev->mPrev) {
		next = prev;
		if (prev->mRadius > mRadius) {
			insertBefore(prev);
			return;
		}
	}

	if (next == nullptr) {
		return;
	}

	insertAfter(next);
}

/**
 * __ct
 *
 * @note Address: 0x8023C778
 * @note Size: 0x70
 */
SweepPrune::Object::Object()
{
	mMinX.mRadius = 0.0f;
	mMinX.mObject = nullptr;
	mMinX.mNext   = nullptr;
	mMinX.mPrev   = nullptr;
	mMaxX.mRadius = 0.0f;
	mMaxX.mObject = nullptr;
	mMaxX.mNext   = nullptr;
	mMaxX.mPrev   = nullptr;
	mMinZ.mRadius = 0.0f;
	mMinZ.mObject = nullptr;
	mMinZ.mNext   = nullptr;
	mMinZ.mPrev   = nullptr;
	mMaxZ.mRadius = 0.0f;
	mMaxZ.mObject = nullptr;
	mMaxZ.mNext   = nullptr;
	mMaxZ.mPrev   = nullptr;
	mMinX.mFlags  = 0;
	mMaxX.mFlags  = 1;
	mMinZ.mFlags  = 0;
	mMaxZ.mFlags  = 1;
	mMaxZ.mObject = this;
	mMinZ.mObject = this;
	mMaxX.mObject = this;
	mMinX.mObject = this;
}

/**
 * __ct__Q210SweepPrune5WorldFv
 *
 * @note Address: 0x8023C7E8
 * @note Size: 0x2C
 */
SweepPrune::World::World()
{
	mXNode.mRadius = 0.0f;
	mXNode.mObject = nullptr;
	mXNode.mNext   = nullptr;
	mXNode.mPrev   = nullptr;
	mZNode.mRadius = 0.0f;
	mZNode.mObject = nullptr;
	mZNode.mNext   = nullptr;
	mZNode.mPrev   = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
SweepPrune::World::~World()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8023C814
 * @note Size: 0x148
 */
void SweepPrune::World::resolve(SweepPrune::World::ResolveArg& arg)
{
	arg.mCollisionCount  = 0;
	arg.mComparisonCount = 0;

	Object* o1;
	Node* n1 = mXNode.mPrev;
	Node* prev;

	while (n1) {
		prev = nullptr;
		o1   = n1->mObject;
		for (Node* n2 = n1->mPrev; n2 != nullptr; n2 = n2->mPrev) {
			arg.mComparisonCount++;
			Object* o2 = n2->mObject;
			if ((o1 == o2) && (n2->mFlags == 1))
				break;
			if (n2->mFlags == 0) {
				if (prev == nullptr) {
					prev = n2;
				}
				f32 min1 = o1->mMinZ.mRadius;
				f32 max1 = o1->mMaxZ.mRadius;
				f32 min2 = o2->mMinZ.mRadius;
				f32 max2 = o2->mMaxZ.mRadius;
				if (((((min1 <= min2) && (min2 <= max1)) || ((min1 <= max2 && (max2 <= max1)))) || ((min2 <= min1 && (min1 <= max2))))
				    || ((min2 <= max1 && (max1 <= max2)))) {
					arg.mCallback->invoke(o1, o2);
					arg.mCollisionCount++;
				}
			}
		}
		if (prev == nullptr) {
			n1 = n1->mPrev;
		}
		if (prev) {
			n1 = prev;
		}
	}
}
