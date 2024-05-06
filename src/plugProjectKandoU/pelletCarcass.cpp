#include "Game/Entities/PelletCarcass.h"

namespace Game {
namespace PelletCarcass {

Mgr* mgr;

/**
 * @note Address: 0x801FB8CC
 * @note Size: 0xB0
 */
Mgr::Mgr()
    : FixedSizePelletMgr<Object>(PelletList::PLK_Carcass)
{
}

/**
 * @note Address: 0x801FBC28
 * @note Size: 0x64
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
