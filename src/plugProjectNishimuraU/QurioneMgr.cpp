#include "Game/Entities/Qurione.h"

namespace Game {
namespace Qurione {

static const char qurioneMgrName[] = "246-QurioneMgr";

/*
 * --INFO--
 * Address:	8025FA8C
 * Size:	000094
 */
Generator::Generator()
    : EnemyGeneratorBase("クリオネジェネレータ") // clione (sea angel) generator
    , m_fly(200.0f)
    , m_slide(30.0f)
{
}

/*
 * --INFO--
 * Address:	8025FB20
 * Size:	00000C
 */
u32 Generator::getLatestVersion() { return '0000'; }

/*
 * --INFO--
 * Address:	8025FB2C
 * Size:	000074
 */
void Generator::doRead(Stream& stream)
{
	if (m_version == getLatestVersion()) {
		doReadLatestVersion(stream);
		return;
	}
	// if not latest version, use old read function
	doReadOldVersion(stream);
}

/*
 * --INFO--
 * Address:	8025FBA0
 * Size:	000080
 */
void Generator::doWrite(Stream& stream)
{
	stream.textWriteTab(stream.m_tabCount);
	stream.writeFloat(m_fly);
	stream.textWriteText("\t\t# fly \r\n");
	stream.writeFloat(m_slide);
	stream.textWriteText("\t\t# slide \r\n");
}

/*
 * --INFO--
 * Address:	8025FC20
 * Size:	00004C
 */
void Generator::doReadLatestVersion(Stream& stream)
{
	m_fly   = stream.readFloat();
	m_slide = stream.readFloat();
}

/*
 * --INFO--
 * Address:	8025FC6C
 * Size:	000004
 */
void Generator::doReadOldVersion(Stream&) { }

/*
 * --INFO--
 * Address:	8025FC70
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "クリオネマネージャ"; // clione (sea angel) manager
}

/*
 * --INFO--
 * Address:	8025FCC0
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8025FE98
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8025FFB4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

} // namespace Qurione
} // namespace Game
