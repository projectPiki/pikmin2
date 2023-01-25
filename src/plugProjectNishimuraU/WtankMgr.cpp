#include "Game/Entities/Tank.h"
#include "LoadResource.h"

namespace Game {
namespace Wtank {

namespace {
static const char* cTankChangeTexName = "/enemy/data/Wtank/mizu_butadokkuri_main_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	8027C40C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Tank::Mgr(objLimit, modelType)
{
	mName = "ミズブタドックリマネージャ"; // water pig dog manager
}

/*
 * --INFO--
 * Address:	8027C45C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Tank::Parms); }

/*
 * --INFO--
 * Address:	8027C4FC
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8027C64C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	8027C65C
 * Size:	000080
 */
void Mgr::loadTexData()
{
	mChangeTexture = nullptr;
	LoadResource::Arg loadArg(cTankChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		mChangeTexture = static_cast<ResTIMG*>(resource->mFile);
	}
	P2ASSERTLINE(82, mChangeTexture);
}

} // namespace Wtank
} // namespace Game
