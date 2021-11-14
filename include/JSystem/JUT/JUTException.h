#ifndef _JSYSTEM_JUT_JUTEXCEPTION_H
#define _JSYSTEM_JUT_JUTEXCEPTION_H

#include "Dolphin/os.h"
#include "types.h"

struct JUTException {
	static void panic_f(char const* file, int line, char const* msg, ...);

	static u32* sConsole;
	static u32* sErrorManager;
	static OSMessageQueue sMessageQueue;
};

#define JUT_PANIC(...) JUTException::panic_f(__FILE__, __LINE__, __VA_ARGS__)

#define JUT_ASSERT(cond, string_ref) \
	if (!(cond))                     \
	JUT_PANIC(string_ref)

#define P2ASSERT_BROKEN(cond) JUT_ASSERT(cond, nullptr)
#define P2ASSERT(cond)        JUT_ASSERT(cond, "P2Assert")

#ifndef MATCHING
#define JUT_PANICLINE(line, ...) JUT_PANIC(__VA_ARGS__)
#else
#define JUT_PANICLINE(line, ...) \
	JUTException::panic_f(__FILE__, line, __VA_ARGS__)
#endif

#define JUT_ASSERTLINE(line, cond, string_ref) \
	if (!(cond))                               \
	JUT_PANICLINE(line, string_ref)

#define P2ASSERTLINE(line, cond) JUT_ASSERTLINE(line, cond, "P2Assert")

#endif
