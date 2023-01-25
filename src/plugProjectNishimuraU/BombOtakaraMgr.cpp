#include "Game/Entities/BombOtakara.h"
#include "LoadResource.h"

namespace Game {
namespace BombOtakara {

namespace {
static const char* cOtakaraChangeTexName = "/enemy/data/BombOtakara/otakara_bomb_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	802F92D0
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : OtakaraBase::Mgr(objLimit, modelType)
{
	mName = "バクダンオタカラムシマネージャ"; // starburst otakara manager
}

/*
 * --INFO--
 * Address:	802F9320
 * Size:	000048
 */
void Mgr::doAlloc() { init(new OtakaraBase::Parms); }

/*
 * --INFO--
 * Address:	802F9368
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802F94B4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	802F94C4
 * Size:	000080
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
