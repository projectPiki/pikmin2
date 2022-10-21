#include "Game/Entities/Tank.h"
#include "LoadResource.h"

namespace Game {
namespace Ftank {

namespace {
static const char* cTankChangeTexName = "/enemy/data/Tank/fire_butadokkuri_main_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	8029E12C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Tank::Mgr(objLimit, modelType)
{
	m_name = "ブタドックリマネージャ"; // pig dog manager
}

/*
 * --INFO--
 * Address:	8029E17C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Tank::Parms); }

/*
 * --INFO--
 * Address:	8029E1C4
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8029E314
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	8029E324
 * Size:	000080
 */
void Mgr::loadTexData()
{
	m_changeTexture = nullptr;
	LoadResource::Arg loadArg(cTankChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		m_changeTexture = static_cast<ResTIMG*>(resource->_30);
	}
	P2ASSERTLINE(82, m_changeTexture);
}

} // namespace Ftank
} // namespace Game
