#ifndef _JSYSTEM_JUTEXCEPTION_H
#define _JSYSTEM_JUTEXCEPTION_H

#include "Dolphin/os.h"
#include "types.h"

struct JUTException {
	static void panic_f(char const* file, int line, char const* msg, ...);

	static u32* sConsole;
	static u32* sErrorManager;
	static OSMessageQueue sMessageQueue;
};

#define JUT_ASSERT(cond, string_ref) \
	if (!(cond))                     \
	JUTException::panic_f(__FILE__, __LINE__, string_ref)

#define P2ASSERT_BROKEN(cond) JUT_ASSERT(cond, nullptr)
#define P2ASSERT(cond)        JUT_ASSERT(cond, "P2Assert")

#endif
