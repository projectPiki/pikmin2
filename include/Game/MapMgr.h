#ifndef _GAME_MAPMGR_H
#define _GAME_MAPMGR_H

#include "types.h"
#include "GenericObjectMgr.h"

namespace Game {
struct CourseInfo;
struct RouteMgr;
struct SeaMgr;
// struct GenericObjectMgrReference {
// 	GenericObjectMgr* m_genericObjectMgrPtr;
// };

struct MapMgr : virtual public GenericObjectMgr {
	// _00: ptr to _0x24 (GenericObjectMgr)
	// _04: vtable 1
	RouteMgr* m_routeMgr;     // _08
	CourseInfo* m_courseInfo; // _0C
	SeaMgr* m_seaMgr;         // _10
	u32 _14;                  // _14
	u32 _18;                  // _18
	u32 _1C;                  // _1C
	u32 _20;                  // _20

	// _24: GenericObjectMgr
};
} // namespace Game

#endif
