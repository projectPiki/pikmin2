#include "Game/Entities/PelletCarcass.h"

#define MAX_CARCASS_COUNT     64
#define MAX_CARCASS_COLLPARTS 128

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
	alloc(MAX_CARCASS_COUNT);
	load();
	mCollPartMgr.alloc(MAX_CARCASS_COLLPARTS);
	sys->heapStatusEnd("Carcass");
}

} // namespace PelletCarcass

} // namespace Game
