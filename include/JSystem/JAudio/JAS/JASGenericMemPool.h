#ifndef _JSYSTEM_JAS_JASGENERICMEMPOOL_H
#define _JSYSTEM_JAS_JASGENERICMEMPOOL_H

#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "types.h"

struct JASGenericMem { };

struct JASGenericMemPool {
	JASGenericMemPool();

	void newMemPool(u32, int);
	void* alloc(u32);
	void free(void*, u32);

	// unused/inlined:
	~JASGenericMemPool();

	void** mNextFreeBlock;  // _00
	void** mFirstFreeBlock; // _04
	int mFreeMemCount;      // _08
};

namespace JASCreationPolicy {
struct NewFromRootHeap { };
struct NewFromSystemHeap { };
} // namespace JASCreationPolicy

namespace JASThreadingModel {
struct SingleThreaded { };

struct MultiThreaded { };
}; // namespace JASThreadingModel

template <typename T, typename ThreadingModel>
struct JASMemPool : public JASGenericMemPool { };

template <typename T, typename CreationPolicy>
struct JASSingletonHolder {
	static T* createInstance()
	{
		JASCriticalSection a;
		if (sInstance == nullptr) {
			sInstance = new (JASDram, 0) T();
		}
		return sInstance;
	}

	static T* getInstance()
	{
		T* instance;
		if (sInstance == nullptr) {
			instance = createInstance();
			instance = sInstance;
		}
		return sInstance;
	}

	static T* sInstance;
};

template <typename T, typename CreationPolicy, typename ThreadingModel>
struct JASPoolAllocObject {
	typedef JASMemPool<T, ThreadingModel> Pool;
	typedef JASSingletonHolder<Pool, CreationPolicy> SingletonHolder;

	void operator delete(void* ptr, size_t size) { SingletonHolder::getInstance()->free(ptr, size); }
	static inline void* alloc() { return (SingletonHolder::getInstance()->alloc(sizeof(T))); }

	virtual ~JASPoolAllocObject<T, CreationPolicy, ThreadingModel>() // _08
	{
	}

protected:
	inline JASPoolAllocObject<T, CreationPolicy, ThreadingModel>()
	{
	}
};

#endif
