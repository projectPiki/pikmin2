#include "Game/Entities/PelletCarcass.h"

namespace Game {
namespace PelletCarcass {

Mgr* mgr;

/*
 * --INFO--
 * Address:	801FB8CC
 * Size:	0000B0
 */
Mgr::Mgr()
    : FixedSizePelletMgr<Object>(PelletList::CARCASS)
{
}

/*
 * --INFO--
 * Address:	801FBC28
 * Size:	000064
 */
void Mgr::setupResources()
{
	sys->heapStatusStart("Carcass", nullptr);
	alloc(PELLET_CARCASS_MAXCOUNT);
	load();
	mCollPartMgr.alloc(PELLET_CARCASS_MAXCOLLPART);
	sys->heapStatusEnd("Carcass");
}

} // namespace PelletCarcass
} // namespace Game
