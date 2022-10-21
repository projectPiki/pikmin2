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
	m_name = "オオガネモチマネージャ"; // oogane manager
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
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802848DC
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802848EC
 * Size:	000080
 */
void Mgr::loadTexData()
{
	m_changeTexture = nullptr;
	LoadResource::Arg loadArg(cKoganeChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		m_changeTexture = static_cast<ResTIMG*>(resource->_30);
	}
	P2ASSERTLINE(83, m_changeTexture);
}

} // namespace Wealthy
} // namespace Game
