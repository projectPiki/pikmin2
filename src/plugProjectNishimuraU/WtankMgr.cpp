#include "Game/Entities/Tank.h"
#include "LoadResource.h"

namespace Game {
namespace Wtank {

namespace {
static const char* cTankChangeTexName = "/enemy/data/Wtank/mizu_butadokkuri_main_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	8027C40C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : Tank::Mgr(objLimit, modelType)
{
	m_name = "ミズブタドックリマネージャ"; // water pig dog manager
}

/*
 * --INFO--
 * Address:	8027C45C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Tank::Parms); }

/*
 * --INFO--
 * Address:	8027C4FC
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8027C64C
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	8027C65C
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

} // namespace Wtank
} // namespace Game
