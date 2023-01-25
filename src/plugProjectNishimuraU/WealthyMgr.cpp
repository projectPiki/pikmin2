#include "Game/Entities/Wealthy.h"
#include "LoadResource.h"

namespace Game {
namespace Wealthy {

static const char wealthyMgrName[] = "246-WealthyMgr";

namespace {
static const char* cKoganeChangeTexName = "/enemy/data/Wealthy/oogane_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	80284470
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Kogane::Mgr(objLimit, modelType)
{
	mName = "オオガネモチマネージャ"; // oogane manager
}

/*
 * --INFO--
 * Address:	802844C0
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Kogane::Parms); }

/*
 * --INFO--
 * Address:	8028478C
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802848DC
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	802848EC
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

} // namespace Wealthy
} // namespace Game
