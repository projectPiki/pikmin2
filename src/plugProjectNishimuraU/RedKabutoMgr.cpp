#include "types.h"
#include "Game/Entities/Kabuto.h"
#include "LoadResource.h"

namespace Game {
namespace RedKabuto {

namespace {
char* cKabutoChangeTexName = "/enemy/data/Rkabuto/babykabuto_red_s3tc.bti";
}

/**
 * @note Address: 0x802FFE04
 * @note Size: 0x50
 */
Mgr::Mgr(int p1, u8 p2)
    : Kabuto::Mgr(p1, p2)
{
	mName = "レッドカブトマネージャ"; // red beetle manager
}

/**
 * @note Address: 0x802FFE54
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Kabuto::Parms); }

/**
 * @note Address: 0x802FFE9C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802FFFE8
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int idx) { return &mObj[idx]; }

/**
 * @note Address: 0x802FFFF8
 * @note Size: 0x80
 */
void Mgr::loadTexData()
{
	mChangeTexture = nullptr;

	LoadResource::Arg loadArg(cKabutoChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);

	if (resource) {
		mChangeTexture = static_cast<ResTIMG*>(resource->mFile);
	}

	P2ASSERTLINE(82, mChangeTexture != nullptr);
}

} // namespace RedKabuto
} // namespace Game
