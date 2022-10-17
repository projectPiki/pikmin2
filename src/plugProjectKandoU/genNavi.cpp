#include "Game/gameGenerator.h"
#include "Game/Creature.h"
#include "Game/Navi.h"
#include "SysShape/AnimInfo.h"
#include "BaseParm.h"

/*
 * --LOCAL--
 * --INFO--
 * Address:	801ACA08
 * Size:	0000B8
 */
Game::GenObject* makeObjectNavi() { return new Game::GenObjectNavi(); }

namespace Game {
/*
 * --INFO--
 * Address:	801ACAC0
 * Size:	00008C
 * Matches
 */
void GenObjectNavi::initialise()
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (factory->m_count < factory->m_limit) {
		factory->m_factories[factory->m_count].m_typeID       = 'navi';
		factory->m_factories[factory->m_count].m_makeFunction = makeObjectNavi;
		factory->m_factories[factory->m_count].m_name         = "ƒiƒr‚ð”­¶"; // generate navi(gation)
		factory->m_factories[factory->m_count].m_version      = '0000';
		factory->m_count++;
	}
}

/*
 * --INFO--
 * Address:	801ACB4C
 * Size:	000004
 */
void GenObjectNavi::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB50
 * Size:	000004
 */
void GenObjectNavi::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB54
 * Size:	000078
 * Matches
 */
Creature* GenObjectNavi::generate(Generator* gen)
{
	Vector3f finalPos(gen->m_position.x + gen->m_offset.x, gen->m_position.y + gen->m_offset.y, gen->m_position.z + gen->m_offset.z);

	GenArg arg;
	arg.m_position = finalPos;
	return birth(&arg);
}

/*
 * --INFO--
 * Address:	801ACBCC
 * Size:	000138
 */
Creature* GenObjectNavi::birth(GenArg* arg)
{
	getLatestVersion();

	Navi* newNavi = naviMgr->birth();
	if (newNavi) {
		newNavi->init(nullptr);

		newNavi->m_animator.m_animator1.getCalc();
		newNavi->m_animator.m_animator2.getCalc();

		// fabricated inline that has a futile loop in it?
		newNavi->setCalcs();

		SysShape::Model* tempModel = newNavi->m_model;

		// fabricated inlined futile loops??
		newNavi->m_model->loopTimer();
		tempModel->loopTimer();

		newNavi->setPosition(arg->m_position, false);
		newNavi->m_faceDir = PI * (DEG2RAD * m_rotParm.m_value);
	}
	return newNavi;
}
} // namespace Game
