#ifndef _JSYSTEM_JGADGET_VECTOR_H
#define _JSYSTEM_JGADGET_VECTOR_H

#include "JSystem/JGadget/allocator.h"
#include "types.h"

namespace JGadget {
namespace vector {
u32 extend_default(u32, u32, u32);

typedef u32 (*ExtendFunc)(u32, u32, u32);

} // namespace vector

template <typename T, template <class> class Allocator>
struct TVector {
	// struct Destructed_deallocate_ {
	// 	~Destructed_deallocate_(); // unused/inlined
	// };

	TVector(u32, const T&, const Allocator<T>&);

	TVector(Allocator<T> alloc)
	{
		_00     = nullptr;
		mBegin  = _00;
		_0C     = nullptr;
		mExtend = vector::extend_default;
	}

	~TVector();

	void insert(T*, u32, const T&);
	void Insert_raw(T*, u32);
	void insert(T*, const T&);
	void assign(u32, const T&);
	void resize(u32, const T&);
	void Resize_raw(u32);
	void operator=(const TVector<T, Allocator>& rhs);

	void** begin() { return mBegin; }
	void** end() { return mEnd; }

	void** _00;                 // _00
	void** mBegin;              // _04
	void** mEnd;                // _08
	u32 _0C;                    // _0C
	vector::ExtendFunc mExtend; // _10
};

struct TVector_pointer_void : TVector<void*, TAllocator> {
	TVector_pointer_void(const JGadget::TAllocator<void*>& allocator);
	// 	TVector_pointer_void(u32, void* const&, const JGadget::TAllocator<void*>& allocator); // unused/inlined

	~TVector_pointer_void();

	void insert(void**, void* const&);
	void erase(void**, void**);

	void clear() { erase(begin(), end()); }
	void push_back(const void*& ref) { insert(end(), (void* const&)ref); }

	// unused/inlined:
	// void insert(void**, u32, void* const&);
	// void erase(void**);
	// void assign(u32, void* const&);
	// void resize(u32, void* const&);
	// void reserve(u32);
	// void operator=(const TVector_pointer_void& rhs);
	// void Insert_raw(void**, u32);
	// void Resize_raw(u32);
};

template <typename T>
struct TVector_pointer : TVector_pointer_void {
	~TVector_pointer();

	void begin();
	void end();

	void push_back(const T& ref) { TVector_pointer_void::push_back((const void*&)ref); }
};

} // namespace JGadget

#endif
