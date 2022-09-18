#ifndef _JSYSTEM_JAS_JASGENERICMEMPOOL_H
#define _JSYSTEM_JAS_JASGENERICMEMPOOL_H

#include "Dolphin/os.h"
#include "JSystem/JAS/JASHeap.h"
#include "types.h"

struct JASGenericMemPool {
	JASGenericMemPool(); // unused/inlined

	void newMemPool(unsigned long, int);
	void* alloc(unsigned long);
	void free(void*, unsigned long);

	// unused/inlined:
	~JASGenericMemPool();
};

enum JASCreationPolicy {
	NewFromRootHeap,
	/** @fabricated */
	NewFromSystemHeap
};

enum JASThreadingModel {
	SingleThreaded,
	/** @fabricated */
	MultiThreaded
};

template <typename T, JASThreadingModel ThreadingModel> struct JASMemPool : public JASGenericMemPool {
};

template <typename T, JASCreationPolicy CreationPolicy> struct JASSingletonHolder {
	/**
	 * @fabricated
	 */
	static T* getInstance()
	{
		T* instance = sInstance;
		if (!instance) {
			int interrupts = OSDisableInterrupts();
			sInstance      = new (JASDram, 0) T();
			OSRestoreInterrupts(interrupts);
			instance = sInstance;
		}
		return instance;
	}

	static T* sInstance;
};

template <typename T, JASCreationPolicy CreationPolicy, JASThreadingModel ThreadingModel> struct JASPoolAllocObject {
	typedef JASMemPool<T, ThreadingModel> Pool;
	typedef JASSingletonHolder<Pool, CreationPolicy> SingletonHolder;

	/**
	 * @fabricated
	 */
	void* operator new(size_t size) { return ::new (SingletonHolder::getInstance()->alloc(size)) T(); }

	virtual ~JASPoolAllocObject<T, CreationPolicy, ThreadingModel>() // _08
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
