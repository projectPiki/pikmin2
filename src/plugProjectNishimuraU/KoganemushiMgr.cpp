#include "Game/Entities/Koganemushi.h"
#include "LoadResource.h"

namespace Game {
namespace Koganemushi {

namespace {
static const char* cKoganeChangeTexName = "/enemy/data/Kogane/kogane_s3tc.bti";
} // namespace

/**
 * @note Address: 0x8029D9F0
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Kogane::Mgr(objLimit, modelType)
{
	mName = "コガネマネージャ"; // kogane manager
}

/**
 * @note Address: 0x8029DA40
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Kogane::Parms); }

/**
 * @note Address: 0x8029DA88
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x8029DBD4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x8029DBE4
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

} // namespace Koganemushi
} // namespace Game
