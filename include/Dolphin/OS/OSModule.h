#ifndef _DOLPHIN_OS_OSMODULE_H
#define _DOLPHIN_OS_OSMODULE_H

#include "types.h"
#include "Dolphin/OS/OSContext.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////////// MODULE TYPES //////////
// Forward declarations.
typedef struct OSModuleQueue OSModuleQueue;
typedef struct OSModuleLink OSModuleLink;
typedef struct OSModuleInfo OSModuleInfo;
typedef struct OSModuleHeader OSModuleHeader;
typedef struct OSSectionInfo OSSectionInfo;
typedef struct OSImportInfo OSImportInfo;
typedef struct OSRel OSRel;

// Convenient typedef for module ID.
typedef u32 OSModuleID;

// Module queue.
struct OSModuleQueue {
	OSModuleInfo* head; // _00
	OSModuleInfo* tail; // _04
};

// Module (doubly) linked list.
struct OSModuleLink {
	OSModuleInfo* next; // _00
	OSModuleInfo* prev; // _04
};

// Struct for module information (size 0x20).
struct OSModuleInfo {
	OSModuleID id;         // _00, unique id for module.
	OSModuleLink link;     // _04
	u32 numSections;       // _0C
	u32 sectionInfoOffset; // _10, section info table offset
	u32 nameOffset;        // _14, module name offset
	u32 nameSize;          // _18
	u32 version;           // _1C
};

// Module header struct.
struct OSModuleHeader {
	OSModuleInfo info;    // _00
	u32 bssSize;          // _20, total size of bss sections (bytes).
	u32 relOffset;        // _24
	u32 impOffset;        // _28
	u32 impSize;          // _2C, in bytes.
	u8 prologSection;     // _30, prolog section #
	u8 epilogSection;     // _31, epilog section #
	u8 unresolvedSection; // _32, unresolved section #
	u32 prolog;           // _34, prolog offset
	u32 epilog;           // 38, epilog offset
	u32 unresolved;       // _3C, unresolved offset

	// may have 0x8 more here? check if needed for P2.
	// u32 align;    // _40
	// u32 bssAlign; // _44
};

// Section information struct.
struct OSSectionInfo {
	u32 offset; // _00
	u32 size;   // _04
};

// Import information struct.
struct OSImportInfo {
	OSModuleID id; // _00
	u32 offset;    // _04, offset to OSRel instructions.
};

// Rel information.
struct OSRel {
	u16 offset; // _00
	u8 type;    // _02
	u8 section; // _03
	u32 addend; // _04
};

//////////////////////////////////

//////// MODULE FUNCTIONS ////////
// Unused/inlined in P2.
void OSSetStringTable(void* stringTable);
BOOL OSLink(OSModuleInfo* newModule, void* bss);
BOOL OSUnlink(OSModuleInfo* oldModule);

OSModuleInfo* OSSearchModule(void* ptr, u32* section, u32* offset);

// Module defines/macros.
#define OSGetSectionInfo(module) ((OSSectionInfo*)(((OSModuleInfo*)(module))->sectionInfoOffset))

#define OS_SECTIONINFO_EXEC           0x1
#define OS_SECTIONINFO_OFFSET(offset) ((offset) & ~0x1)

#define R_DOLPHIN_NOP     201
#define R_DOLPHIN_SECTION 202
#define R_DOLPHIN_END     203

//////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
