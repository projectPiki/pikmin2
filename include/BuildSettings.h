#ifndef _BUILDSETTINGS_H
#define _BUILDSETTINGS_H

#include "Version.h"

// TODO: These should probably go into a precompiled header or build flags or
// something.
#define LOCALIZED   true
#define MATCHING    true
#define BUGFIX      false
#define FOR_MODDING false

// The following are constants that mods might be interested in tweaking.
#define CHALLENGE_COURSE_COUNT 30

// Game Heap sizes, these often need to be adjusted with modding (TODO: some of these are used in files that are not yet linked, and thus
// these defines will not work)

#define SYSTEM_HEAP_SIZE               (0x428000) // Contains pikmin/navi/onion models and anims, game text, fonts, and other global things
#define RESOURCE_MGR2D_HEAP_SIZE       (0xD4800)  // A subset of the system heap, contains the active 2d screen
#define PSM_FACTORY_HEAP_SIZE          (0x900000) // Used for some global sound effect data
#define SYSFACTORY_HEAP_SIZE           (0x151800) // Also seems to be for sound effect data?
#define PARTICLE_MGR_HEAP_SIZE         (0x180000) // Global heap for particle effects that spawn in the game world
#define PARTICLE_MGR2D_HEAP_SIZE       (0x3E800)  // Global heap for particle effects used in 2d menus
#define TITLESCREEN_PARTICLE_HEAP_SIZE (0x100000) // 2d Particle heap for the title screen and bootup screen
#define GENERATOR_CACHE_HEAP_SIZE      (0xA000)   // Max size of generator cache as read from save data
#define MOVIEPLAYER_HEAP_SIZE          (0x60400)  // Max size of the MoviePlayer (cutscene) manager
#define THP_PLAYER_HEAP_SIZE           (0x300000) // Max size of THP (pre-rendered movie) player manager
#define ENEMY_HEAP_SIZE_STORY          (0x200800) // Enemy heap for story mode
#define ENEMY_HEAP_SIZE_CM             (0x177000) // Enemy heap for challenge mode
#define ENEMY_HEAP_SIZE_VS             (0x1C2000) // Enemy heap for 2 player battle
#define ENEMY_HEAP_SIZE_ZUKAN          (0xFA000)  // Enemy heap for piklopedia (file not linked)

#define SCREEN_WIDTH  (608.0f)
#define SCREEN_HEIGHT (480.0f)

#define SCREEN_SCISSOR_WIDTH  (608)
#define SCREEN_SCISSOR_HEIGHT (448)

#endif
