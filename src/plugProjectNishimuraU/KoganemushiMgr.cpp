#include "Game/Entities/Koganemushi.h"
#include "LoadResource.h"

namespace Game {
namespace Koganemushi {

namespace {
static const char* cKoganeChangeTexName = "/enemy/data/Kogane/kogane_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	8029D9F0
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Kogane::Mgr(objLimit, modelType)
{
	mName = "コガネマネージャ"; // kogane manager
}

/*
 * --INFO--
 * Address:	8029DA40
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Kogane::Parms); }

/*
 * --INFO--
 * Address:	8029DA88
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8029DBD4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	8029DBE4
 * Size:	000080
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
