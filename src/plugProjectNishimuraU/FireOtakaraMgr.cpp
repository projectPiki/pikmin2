#include "Game/Entities/FireOtakara.h"
#include "LoadResource.h"

namespace Game {
namespace FireOtakara {

static const char fireOtakaraMgrName[] = "246-FireOtakaraMgr";

namespace {
static const char* cOtakaraChangeTexName = "/enemy/data/FireOtakara/otakara_red_s3tc.bti";
} // namespace

/**
 * @note Address: 0x802B7CCC
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : OtakaraBase::Mgr(objLimit, modelType)
{
	mName = "火オタカラムシマネージャ"; // fire otakara manager
}

/**
 * @note Address: 0x802B7D1C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new OtakaraBase::Parms); }

/**
 * @note Address: 0x802B7EB8
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802B8008
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802B8018
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

} // namespace FireOtakara
} // namespace Game
