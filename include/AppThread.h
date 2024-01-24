#ifndef _APPTHREAD_H
#define _APPTHREAD_H

#include "JSystem/JKernel/JKRThread.h"

/**
 * @brief Represents an application thread.
 *
 * This class is derived from JKRThread, with a specific use for application threads.
 */
struct AppThread : public JKRThread {
	/**
	 * @brief Constructs an AppThread object.
	 *
	 * @param stackSize The size of the thread's stack.
	 * @param msgCount The number of messages the thread can hold.
	 * @param threadPriority The priority of the thread.
	 */
	AppThread(u32 stackSize, int msgCount, int threadPriority);

	/**
	 * @brief Destructor for the AppThread object.
	 */
	virtual ~AppThread() { } // _08 (weak)

	// _00  	= VTBL
	// _00-_7C 	= JKRThread
};

#endif
