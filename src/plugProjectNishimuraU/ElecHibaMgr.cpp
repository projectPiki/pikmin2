#include "Game/Entities/ElecHiba.h"

namespace Game {
namespace ElecHiba {

static const char elecHibaMgrName[] = "246-ElecHibaMgr";

/*
 * --INFO--
 * Address:	8026EA08
 * Size:	00008C
 */
Generator::Generator()
    : EnemyGeneratorBase("電撃ヒバジェネレータ") // electric hiba generator
    , m_distance(100.0f)
{
}

/*
 * --INFO--
 * Address:	8026EA94
 * Size:	00000C
 */
u32 Generator::getLatestVersion() { return '0000'; }

/*
 * --INFO--
 * Address:	8026EAA0
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
 * Address:	8026EB14
 * Size:	000060
 */
void Generator::doWrite(Stream& stream)
{
	stream.textWriteTab(stream.m_tabCount);
	stream.writeFloat(m_distance);
	stream.textWriteText("\t\t# distance \r\n");
}

/*
 * --INFO--
 * Address:	8026EB74
 * Size:	000034
 */
void Generator::doReadLatestVersion(Stream& stream) { m_distance = stream.readFloat(); }

/*
 * --INFO--
 * Address:	8026EBA8
 * Size:	000004
 */
void Generator::doReadOldVersion(Stream&) { }

/*
 * --INFO--
 * Address:	8026EBAC
 * Size:	000064
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBaseAlwaysMovieActor(objLimit, modelType)
{
	m_name = "電撃ヒバマネージャ"; // electric hiba manager
}

/*
 * --INFO--
 * Address:	8026EC10
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	8026EE24
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8026EF64
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	8026EF74
 * Size:	0000E4
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	TeamList* teamList;
	InitialParam param;
	param._00     = 100.0f;
	Obj* elecHiba = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (elecHiba) {
		elecHiba->_2E4 = birthArg.m_position;
		elecHiba->setElecHibaPosition(&param, 1.0f);
		teamList = &elecHiba->m_teamList;
		elecHiba->createEffect(true);

		EnemyBase* potentialPartner = EnemyMgrBase::birth(birthArg);
		if (potentialPartner) {
			Obj* elecHibaPartner  = static_cast<Obj*>(potentialPartner);
			elecHibaPartner->_2E4 = birthArg.m_position;
			elecHibaPartner->setElecHibaPosition(&param, -1.0f);
			elecHibaPartner->createEffect(false);
			teamList->add(&elecHibaPartner->m_teamList);
		}
	}

	return elecHiba;
}

} // namespace ElecHiba
} // namespace Game
