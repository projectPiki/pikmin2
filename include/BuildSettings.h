#ifndef _BUILDSETTINGS_H
#define _BUILDSETTINGS_H

// TODO: These should probably go into a precompiled header or build flags or
// something.
#define LOCALIZED   true
#define MATCHING    true
#define BUGFIX      false
#define FOR_MODDING false

#define USADEMO1 0
#define USAFINAL 4

#if VERNUM == USAFINAL
#define BUILDTARGET USAFINAL
#elif VERNUM == USADEMO1
#define BUILDTARGET USADEMO1
#endif

// The following are constants that mods might be interested in tweaking.
#define GENERATOR_CACHE_HEAP_SIZE 0xA000
#define CHALLENGE_COURSE_COUNT    30

#define SCREEN_WIDTH  (608.0f)
#define SCREEN_HEIGHT (480.0f)

#define SCREEN_SCISSOR_WIDTH  (608)
#define SCREEN_SCISSOR_HEIGHT (448)

#endif
