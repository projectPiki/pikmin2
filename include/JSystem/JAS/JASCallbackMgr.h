#ifndef _JSYSTEM_JAS_JASCALLBACKMGR_H
#define _JSYSTEM_JAS_JASCALLBACKMGR_H

#include "types.h"

typedef long JASCallback(void*);

struct JASCallbackMgr {
	struct TCallback {
		TCallback()
		    : m_function(nullptr)
		    , m_argument(nullptr)
		{
		}

		/** @fabricated */
		inline bool isMatch(JASCallback* function, void* argument) { return (m_function == function && m_argument == argument); }

		/** @fabricated */
		inline void clear()
		{
			m_function = nullptr;
			m_argument = nullptr;
		}

		JASCallback* m_function; // _00
		void* m_argument;        // _04
	};

	bool regist(JASCallback*, void*);
	bool reject(JASCallback*, void*);
	void callback();

	// Unused/inlined:
	bool reject(JASCallback*);

	TCallback m_callbacks[0x10]; // _00
};

#endif
