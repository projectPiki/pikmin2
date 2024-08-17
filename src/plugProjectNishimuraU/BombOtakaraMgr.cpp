#include "Game/Entities/BombOtakara.h"
#include "LoadResource.h"

namespace Game {
namespace BombOtakara {

namespace {
static const char* cOtakaraChangeTexName = "/enemy/data/BombOtakara/otakara_bomb_s3tc.bti";
} // namespace

/**
 * @note Address: 0x802F92D0
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : OtakaraBase::Mgr(objLimit, modelType)
{
	mName = "バクダンオタカラムシマネージャ"; // starburst otakara manager
}

/**
 * @note Address: 0x802F9320
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new OtakaraBase::Parms); }

/**
 * @note Address: 0x802F9368
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802F94B4
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802F94C4
 * @note Size: 0x80
 */
void Mgr::loadTexData()
{
	mChangeTexture = nullptr;
	LoadResource::Arg loadArg(cOtakaraChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		mChangeTexture = static_cast<ResTIMG*>(resource->mFile);
	}
	P2ASSERTLINE(83, mChangeTexture);
}

} // namespace BombOtakara
} // namespace Game
