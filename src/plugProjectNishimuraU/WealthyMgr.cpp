#include "Game/Entities/Wealthy.h"
#include "LoadResource.h"

namespace Game {
namespace Wealthy {

static const char wealthyMgrName[] = "246-WealthyMgr";

namespace {
static const char* cKoganeChangeTexName = "/enemy/data/Wealthy/oogane_s3tc.bti";
} // namespace

/**
 * @note Address: 0x80284470
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Kogane::Mgr(objLimit, modelType)
{
	mName = "オオガネモチマネージャ"; // oogane manager
}

/**
 * @note Address: 0x802844C0
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Kogane::Parms); }

/**
 * @note Address: 0x8028478C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802848DC
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802848EC
 * @note Size: 0x80
 */
void Mgr::loadTexData()
{
	mChangeTexture = nullptr;
	LoadResource::Arg loadArg(cKoganeChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		mChangeTexture = static_cast<ResTIMG*>(resource->mFile);
	}
	P2ASSERTLINE(83, mChangeTexture);
}

} // namespace Wealthy
} // namespace Game
