#ifndef _JSYSTEM_JUT_JUTEXCEPTION_H
#define _JSYSTEM_JUT_JUTEXCEPTION_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRThread.h"
#include "JSystem/JUT/JUTGamePad.h"
#include "types.h"

struct JUTDirectPrint;

/**
 * @size{0xA4}
 */
struct JUTException : public JKRThread {
	static void panic_f(char const* file, int line, char const* msg, ...);

	u8 _78[4];                      // _78
	void* m_frameBuffer;            // _7C
	JUTDirectPrint* m_directPrint;  // _80
	u32 _84;                        // _84
	JUTGamePad::EPadPort m_padPort; // _88
	int _8C;                        // _8C
	int _90;                        // _90
	int _94;                        // _94
	u32 _98;                        // _98
	int _9C;                        // _9C
	void* m_stackPointer;           // _A0

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
#define JUT_PANICLINE(line, ...) JUTException::panic_f(__FILE__, line, __VA_ARGS__)
#endif

#define JUT_ASSERTLINE(line, cond, ...) \
	if (!(cond))                        \
	JUT_PANICLINE(line, __VA_ARGS__)

#define P2ASSERTLINE(line, cond) JUT_ASSERTLINE(line, cond, "P2Assert")

#define P2ASSERTBOUNDSLINE(line, lowerLimitInclusive, var, upperLimitExclusive) \
	bool check##line = false;                                                   \
	if (lowerLimitInclusive <= var && var < upperLimitExclusive) {              \
		check##line = true;                                                     \
	}                                                                           \
	P2ASSERTLINE(line, check##line)

#define P2ASSERTBOUNDSINCLUSIVELINE(line, lowerLimitInclusive, var, upperLimitInclusive) \
	bool check##line = false;                                                   \
	if (lowerLimitInclusive <= var && var <= upperLimitInclusive) {              \
		check##line = true;                                                     \
	}                                                                           \
	P2ASSERTLINE(line, check##line)

#endif
