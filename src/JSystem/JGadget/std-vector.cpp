#include "JSystem/JGadget/allocator.h"
#include "JSystem/JGadget/vector.h"
#include "types.h"
#include "PowerPC_EABI_Support/MSL_C++/MSL_Common/Include/algorithm.h"
#include "PowerPC_EABI_Support/MSL_C++/MSL_Common/Include/msl_memory.h"

// clang-format off
typedef JGadget::TVector<void*, JGadget::TAllocator<void*> > TVPVBase;
// clang-format on

namespace JGadget {
/**
 * @note Address: 0x8002766C
 * @note Size: 0x8
 */
u32 vector::extend_default(u32 p1, u32 p2, u32 p3) { return p2 * 2; }

/**
 * @note Address: 0x80027674
 * @note Size: 0x2C
 * __ct__Q27JGadget20TVector_pointer_voidFRCQ27JGadget14TAllocator<Pv>
 */
TVector_pointer_void::TVector_pointer_void(const TVoidAllocator& allocator)
{
	mAllocator = allocator;
	mBegin     = nullptr;
	mEnd       = mBegin;
	mCapacity  = 0;
	mExtend    = vector::extend_default;
}

template <>
size_t TVPVBase::GetSize_extend_(size_t count) const
{
	u32 oldSize        = size();
	u32 neededNewSpace = oldSize + count;
	u32 extendedSize   = mExtend(capacity(), oldSize, count);

	return neededNewSpace > extendedSize ? neededNewSpace : extendedSize;
}

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
template <>
TVPVBase::~TVector()
{
	// UNUSED FUNCTION
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x30
//  */
// TVector_pointer_void::TVector_pointer_void(u32, void* const&, const JGadget::TAllocator<void*>& allocator)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x64
//  */
// template <>
// TVPVBase::TVector(u32, void* const&, const TAllocator<void*>&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800276A0
 * @note Size: 0x78
 */
template <>
inline void TVPVBase::DestroyElement_(void** pFirst, void** pLast)
{
    void** iter = pFirst;
	while (iter != pLast) {
        mAllocator.destroy(iter);
		++iter;
	}
}

template <>
inline void TVPVBase::DestroyElement_all_()
{
	DestroyElement_(mBegin, mEnd);
}

template <>
void TVPVBase::insert(void** values, u32 count, void* const& defaultValue)
{
	if (!count) {
		return;
	}

	void** v = Insert_raw(values, count);

	if (v != this->mEnd) {
		for (int i = 0; i != count; i++) {
			if (v) {
				*v = defaultValue;
			}
			v++;
		}
	}
}

/**
 * @note Address: 0x80027718
 * @note Size: 0x470
 */
template <>
void** TVPVBase::Insert_raw(void** pItFirst, u32 count)
{
	// purpose: to make space for `count` many elements at the supplied location
    // returns: pointer to location for new items
    
    void** const pItFirst_ = pItFirst;

    // JUT_DEBUG_ASSERT((mBegin<=pItFirst_)&&(pItFirst_<=mEnd), 0x1be);
    
    // it's assumed the pointer is to something already in the vector, or pointing to the end

    if (count == 0) {
        return pItFirst;
    }

    // can we fit in the space already allocated?
    if (count + size() <= mCapacity) {

        // get the theoretical new end
        void** newEnd = pItFirst_ + count;

        // if there exists items in the current vector past where we will insert these items
        // then we need to move them to be at the end of the vector
        if (newEnd < mEnd) {

            // get a pointer to the `count` many values that need to be pushed to the end
            void** pOverwrittenValues = mEnd - count;

            // copy `count` many values to the end of the vector
            std::uninitialized_copy(pOverwrittenValues, mEnd, mEnd);

            // copy the remaining values that need to be shifted
            // copying backwards so we don't move a value into the range we're copying from, erasing data
            std::copy_backward(pItFirst_, pOverwrittenValues, mEnd);

            // destroy everything from pItFirst_ -> newEnd, this treats the inserted items as "uninitialized"
            DestroyElement_(pItFirst_, newEnd);

            // increment count
            mEnd += count;

            // return pointer to new items
            return pItFirst;
        } else {
            // pItFirst + count >= mEnd
            // else our values that we want to add will write beyond the current mEnd

            // copy the values that exist at our pointer to the newEnd, which is pItFirst + count, making room for our `count` many
            // items
            std::uninitialized_copy(pItFirst_, mEnd, newEnd);

            // uninitialize the values that used to be there
            DestroyElement_(pItFirst_, mEnd);

            // increment count
            mEnd += count;

            // return pointer to new items
            return pItFirst;
        }
    }
    
    // count + size() > mCapacity
    // we need more space

    // figure out how much space we'll need
    u32 newSize = GetSize_extend_(count);

    // allocate that space
    void** newDataPointer = mAllocator.allocate(newSize, 0);

    // make sure that data was actually allocated
    if (!newDataPointer) {
        // return end pointer?
        return end();
    }

    // this struct will deallocate the specified data pointer when destroyed
	// If we end up throwing an exception, it'll deallocate our new data pointer, no leaks!
    TDestructed_deallocate_ destructionDeallocator(mAllocator, newDataPointer);

    // copy all the beginning of our data up to our pointer to the new data
    void** const endOfCopy = std::uninitialized_copy(mBegin, pItFirst_, newDataPointer);

    // copy the rest of the data to fit at the end of our new data
    // this leaves a gap of `count` many items in our new data
    std::uninitialized_copy(pItFirst_, mEnd, endOfCopy + count);

    // destroy all our current elements, the other elements should be living in the new data
	// and we're about to deallocate our 
    DestroyElement_all_();

    // everything should be set, so now we can deallocate our old data pointer
	// when this func exits
    destructionDeallocator.set(mBegin);

    // set our new vector member variables
    mEnd      = newDataPointer + (mEnd - mBegin + count);
    mBegin    = newDataPointer;
    mCapacity = newSize;

    // return where the gap of `count` many items lives
    return endOfCopy;
}

/**
 * @note Address: 0x80027B88
 * @note Size: 0x108
 */
TVector_pointer_void::~TVector_pointer_void()
{
	if (this) {
		// copy from mEnd to mEnd and output to beginning? what??
		void** v = std::copy(mEnd, mEnd, mBegin);

		DestroyElement_(v, mEnd);
		mEnd = v;
		delete mBegin;
	}
}

/**
 * @note Address: 0x80027C90
 * @note Size: 0x20
 */
void TVector_pointer_void::insert(void** p1, void* const& p2) { TVector::insert(p1, p2); }

/**
 * @note Address: 0x80027CB0
 * @note Size: 0x58
 */
template <>
void** TVPVBase::insert(void** p1, void* const& p2)
{
	u32 c = p1 - mBegin;
	insert(p1, 1, p2);
	return mBegin + c;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r5
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x4(r3)
	  sub       r0, r4, r0
	  srawi     r0, r0, 0x2
	  addze     r31, r0
	  bl        -0x640
	  lwz       r3, 0x4(r30)
	  rlwinm    r0,r31,2,0,29
	  add       r3, r3, r0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x20
//  */
// void TVector_pointer_void::insert(void**, u32, void* const&)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0xBC
//  */
// void TVector_pointer_void::erase(void**)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80027D08
 * @note Size: 0xB8
 */

void** TVector_pointer_void::erase(void** start, void** end)
{
	void** vectorEnd = mEnd;
	void** ppvVar3   = std::copy(end, vectorEnd, start);
	DestroyElement_(ppvVar3, mEnd);
	mEnd = ppvVar3;
	return start;
}
// void TVector_pointer_void::erase(void**, void**)
// {
// 	/*
// 	lwz      r7, 8(r3)
// 	addi     r6, r7, 3
// 	cmplw    r5, r7
// 	subf     r6, r5, r6
// 	mr       r7, r4
// 	srwi     r6, r6, 2
// 	bge      lbl_80027D9C
// 	rlwinm.  r0, r6, 0x1d, 3, 0x1f
// 	mtctr    r0
// 	beq      lbl_80027D84

// lbl_80027D30:
// 	lwz      r0, 0(r5)
// 	stw      r0, 0(r7)
// 	lwz      r0, 4(r5)
// 	stw      r0, 4(r7)
// 	lwz      r0, 8(r5)
// 	stw      r0, 8(r7)
// 	lwz      r0, 0xc(r5)
// 	stw      r0, 0xc(r7)
// 	lwz      r0, 0x10(r5)
// 	stw      r0, 0x10(r7)
// 	lwz      r0, 0x14(r5)
// 	stw      r0, 0x14(r7)
// 	lwz      r0, 0x18(r5)
// 	stw      r0, 0x18(r7)
// 	lwz      r0, 0x1c(r5)
// 	addi     r5, r5, 0x20
// 	stw      r0, 0x1c(r7)
// 	addi     r7, r7, 0x20
// 	bdnz     lbl_80027D30
// 	andi.    r6, r6, 7
// 	beq      lbl_80027D9C

// lbl_80027D84:
// 	mtctr    r6

// lbl_80027D88:
// 	lwz      r0, 0(r5)
// 	addi     r5, r5, 4
// 	stw      r0, 0(r7)
// 	addi     r7, r7, 4
// 	bdnz     lbl_80027D88

// lbl_80027D9C:
// 	lwz      r0, 8(r3)
// 	mr       r5, r7
// 	b        lbl_80027DAC

// lbl_80027DA8:
// 	addi     r5, r5, 4

// lbl_80027DAC:
// 	cmplw    r5, r0
// 	bne      lbl_80027DA8
// 	stw      r7, 8(r3)
// 	mr       r3, r4
// 	blr
// 	*/
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x20
//  */
// void TVector_pointer_void::assign(u32, void* const&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
template <>
void TVPVBase::assign(u32, void* const&)
{
	// UNUSED FUNCTION
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x20
//  */
// void TVector_pointer_void::resize(u32, void* const&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
template <>
void TVPVBase::resize(u32, void* const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x13C
 */
template <>
void TVPVBase::Resize_raw(u32)
{
	// UNUSED FUNCTION
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x13C
//  */
// void JGadget::TVector_pointer_void::reserve(u32)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x30
//  */
// void JGadget::TVector_pointer_void::operator=(TVector_pointer_void const&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x368
 */
template <>
void TVPVBase::operator=(const TVPVBase& rhs)
{
	// UNUSED FUNCTION
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x20
//  */
// void JGadget::TVector_pointer_void::Insert_raw(void**, u32)
// {
// 	// UNUSED FUNCTION
// }

// /**
//  * @note Address: N/A
//  * @note Size: 0x20
//  */
// void JGadget::TVector_pointer_void::Resize_raw(u32)
// {
// 	// UNUSED FUNCTION
// }
} // namespace JGadget
