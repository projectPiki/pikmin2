#ifndef _JSYSTEM_JAS_JASCALLBACKMGR_H
#define _JSYSTEM_JAS_JASCALLBACKMGR_H

#include "types.h"

typedef s32 JASCallback(void*);

struct JASCallbackMgr {
	struct TCallback {
		TCallback()
		    : mFunction(nullptr)
		    , mArgument(nullptr)
		{
		}

		/** @fabricated */
		inline bool isMatch(JASCallback* function, void* argument) { return (mFunction == function && mArgument == argument); }

		/** @fabricated */
		inline void clear()
		{
			mFunction = nullptr;
			mArgument = nullptr;
		}

		JASCallback* mFunction; // _00
		void* mArgument;        // _04
	};

	bool regist(JASCallback*, void*);
	bool reject(JASCallback*, void*);
	void callback();

	// Unused/inlined:
	bool reject(JASCallback*);

	TCallback mCallbacks[0x10]; // _00
};

#endif
