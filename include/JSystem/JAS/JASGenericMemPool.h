#ifndef _JSYSTEM_JAS_JASGENERICMEMPOOL_H
#define _JSYSTEM_JAS_JASGENERICMEMPOOL_H

#include "Dolphin/os.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASMutexLock.h"
#include "types.h"

struct JASGenericMemPool {
	JASGenericMemPool(); // unused/inlined

	void newMemPool(unsigned long, int);
	void* alloc(unsigned long);
	void free(void*, unsigned long);

	// unused/inlined:
	~JASGenericMemPool();

	u32 _00; // _00
	u32 _04; // _04
	u32 _08; // _08
};

// TODO: each of these is probably a struct
enum JASCreationPolicy {
	NewFromRootHeap,
	/** @fabricated */
	NewFromSystemHeap
};

// TODO: each of these is probably a struct
enum JASThreadingModel {
	SingleThreaded,
	/** @fabricated */
	MultiThreaded
};

template <typename T, JASThreadingModel ThreadingModel>
struct JASMemPool : public JASGenericMemPool {
};

template <typename T, JASCreationPolicy CreationPolicy>
struct JASSingletonHolder {
	static T* createInstance()
	{
		JASCriticalSection a;
		if (sInstance == nullptr) {
			sInstance = new (JASDram, 0) T();
		}
		return sInstance;
	}
	/**
	 * @fabricated
	 */
	static T* getInstance()
	{
		T* instance = sInstance;
		if (!instance) {
			// int interrupts = OSDisableInterrupts();
			instance = createInstance();
			// OSRestoreInterrupts(interrupts);
			instance = sInstance;
		}
		return instance;
	}

	static T* sInstance;
};

template <typename T, JASCreationPolicy CreationPolicy, JASThreadingModel ThreadingModel>
struct JASPoolAllocObject {
	typedef JASMemPool<T, ThreadingModel> Pool;
	typedef JASSingletonHolder<Pool, CreationPolicy> SingletonHolder;

	/**
	 * @fabricated
	 */
	// void* operator new(size_t size) { return ::new (SingletonHolder::getInstance()->alloc(size)) T(); }

	// static inline T* alloc() { return ::new (SingletonHolder::getInstance()->alloc(sizeof(T))) T(); }
	static inline void* alloc() { return (SingletonHolder::getInstance()->alloc(sizeof(T))); }

	inline virtual ~JASPoolAllocObject<T, CreationPolicy, ThreadingModel>() // _08
	{
		SingletonHolder::getInstance()->free(this, 4);
	}

	/**
	 * @fabricated
	 */
protected:
	inline JASPoolAllocObject<T, CreationPolicy, ThreadingModel>()
	{
		// TODO: This probably isn't quite right...
		// this = SingletonHolder::getInstance()->alloc(sizeof(T));
	}
};

#endif
