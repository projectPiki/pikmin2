#ifndef _BUILDSETTINGS_H
#define _BUILDSETTINGS_H

// TODO: These should probably go into a precompiled header or build flags or
// something.
#define LOCALIZED true
#define MATCHING  true

#define USADEMO1 1
#define USAFINAL 2

#if VERNUM == USAFINAL
#define BUILDTARGET USAFINAL
#elif VERNUM == USADEMO1
#define BUILDTARGET USADEMO1
#endif

// The following are constants that mods might be interested in tweaking.
#define GENERATOR_CACHE_HEAP_SIZE 0xA000
#define CHALLENGE_COURSE_COUNT    30

#endif
