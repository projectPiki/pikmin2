#include "Game/Entities/GasOtakara.h"
#include "LoadResource.h"

namespace Game {
namespace GasOtakara {

namespace {
static const char* cOtakaraChangeTexName = "/enemy/data/GasOtakara/otakara_purple_s3tc.bti";
} // namespace

/**
 * @note Address: 0x802B8F3C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : OtakaraBase::Mgr(objLimit, modelType)
{
	mName = "ガスオタカラムシマネージャ"; // gas otakara manager
}

/**
 * @note Address: 0x802B8F8C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new OtakaraBase::Parms); }

/**
 * @note Address: 0x802B8FD4
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802B9124
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802B9134
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

} // namespace GasOtakara
} // namespace Game
