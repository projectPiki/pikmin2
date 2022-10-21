#include "Game/Entities/GasOtakara.h"
#include "LoadResource.h"

namespace Game {
namespace GasOtakara {

namespace {
static const char* cOtakaraChangeTexName = "/enemy/data/GasOtakara/otakara_purple_s3tc.bti";
} // namespace

/*
 * --INFO--
 * Address:	802B8F3C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : OtakaraBase::Mgr(objLimit, modelType)
{
	m_name = "ガスオタカラムシマネージャ"; // gas otakara manager
}

/*
 * --INFO--
 * Address:	802B8F8C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new OtakaraBase::Parms); }

/*
 * --INFO--
 * Address:	802B8FD4
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802B9124
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802B9134
 * Size:	000080
 */
void Mgr::loadTexData()
{
	m_changeTexture = nullptr;
	LoadResource::Arg loadArg(cOtakaraChangeTexName);
	LoadResource::Node* resource = gLoadResourceMgr->load(loadArg);
	if (resource) {
		m_changeTexture = static_cast<ResTIMG*>(resource->_30);
	}
	P2ASSERTLINE(83, m_changeTexture);
}

} // namespace GasOtakara
} // namespace Game
