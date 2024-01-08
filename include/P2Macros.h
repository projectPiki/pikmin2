#ifndef _P2MACROS_H
#define _P2MACROS_H

#include "JSystem/JUtility/JUTException.h"

#define P2ASSERT(cond) JUT_ASSERT(cond, "P2Assert")

#define P2ASSERTLINE(line, cond) JUT_ASSERTLINE(line, cond, "P2Assert")

#define P2ASSERTBOUNDSLINE(line, lowerLimitInclusive, var, upperLimitExclusive) \
	bool check##line = false;                                                   \
	if (lowerLimitInclusive <= var && var < upperLimitExclusive) {              \
		check##line = true;                                                     \
	}                                                                           \
	P2ASSERTLINE(line, check##line)

// Used in some UtilityU
#define P2ASSERTBOUNDSLINE2(line, lowerLimitExclusive, var, upperLimitInclusive) \
	bool check##line = false;                                                    \
	if (var > lowerLimitExclusive && var <= upperLimitInclusive) {               \
		check##line = true;                                                      \
	}                                                                            \
	P2ASSERTLINE(line, check##line)

#define P2ASSERTBOUNDSINCLUSIVELINE(line, lowerLimitInclusive, var, upperLimitInclusive) \
	bool check##line = false;                                                            \
	if (lowerLimitInclusive <= var && var <= upperLimitInclusive) {                      \
		check##line = true;                                                              \
	}                                                                                    \
	P2ASSERTLINE(line, check##line)

#define P2ASSERTBOUNDSINCLUSIVELINE2(line, lowerLimitInclusive, var, upperLimitInclusive) \
	bool check##line = false;                                                             \
	if (var >= lowerLimitInclusive && var <= upperLimitInclusive) {                       \
		check##line = true;                                                               \
	}                                                                                     \
	P2ASSERTLINE(line, check##line)

#define P2ASSERTBOOLLINE(line, var) \
	bool check##line = false;       \
	if (var) {                      \
		check##line = true;         \
	}                               \
	P2ASSERTLINE(line, check##line)

// clang-format off
#define FORCE_DONT_INLINE \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; \
	(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
// clang-format on

#if DEBUG
// TODO: Reasonable definition of a debug print function
#define P2DEBUG(...) __VA_ARGS__
#else
#define P2DEBUG(...) __VA_ARGS__
#endif

#endif
