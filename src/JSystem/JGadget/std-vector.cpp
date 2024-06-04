#include "JSystem/JGadget/allocator.h"
#include "JSystem/JGadget/vector.h"
#include "types.h"

namespace JGadget {
/**
 * @note Address: 0x8002766C
 * @note Size: 0x8
 */
u32 vector::extend_default(u32 capacity, u32 oldSize, u32 count) { return oldSize * 2; }

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

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
TVector_pointer_void::TVector_pointer_void(u32 count, void* const& defaultValue, const JGadget::TAllocator<void*>& allocator)
{
	TVector::insert(nullptr, count, defaultValue);
}

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
 * @note Address: N/A
 * @note Size: 0x104
 */
template <>
TVPVBase::~TVector()
{
	// UNUSED FUNCTION
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
void TVector_pointer_void::insert(void** position, void* const& value) { TVector::insert(position, value); }

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
