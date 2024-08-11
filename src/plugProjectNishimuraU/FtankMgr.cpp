#include "Game/Entities/Tank.h"
#include "LoadResource.h"

namespace Game {
namespace Ftank {

namespace {
static const char* cTankChangeTexName = "/enemy/data/Tank/fire_butadokkuri_main_s3tc.bti";
} // namespace

/**
 * @note Address: 0x8029E12C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Tank::Mgr(objLimit, modelType)
{
	mName = "ブタドックリマネージャ"; // pig dog manager
}

/**
 * @note Address: 0x8029E17C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Tank::Parms); }

/**
 * @note Address: 0x8029E1C4
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8029E314
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x8029E324
 * @note Size: 0x80
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

} // namespace Ftank
} // namespace Game
