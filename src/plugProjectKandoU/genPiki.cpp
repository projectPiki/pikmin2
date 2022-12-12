#include "Game/gameGenerator.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	801AC3C0
 * Size:	000128
 */
Game::GenObject* makeObjectPiki() { return new Game::GenObjectPiki(); }

namespace Game {
/*
 * --INFO--
 * Address:	801AC4E8
 * Size:	00008C
 */
void GenObjectPiki::initialise()
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (factory->m_count < factory->m_limit) {
		factory->m_factories[factory->m_count].m_typeID       = 'piki';
		factory->m_factories[factory->m_count].m_makeFunction = makeObjectPiki;
		factory->m_factories[factory->m_count].m_name         = "ƒsƒNƒ~ƒ“‚ð”­¶"; // generate Pikmin
		factory->m_factories[factory->m_count].m_version      = '0001';
		factory->m_count++;
	}
}

/*
 * --INFO--
 * Address:	801AC574
 * Size:	00002C
 */
void GenObjectPiki::ramSaveParameters(Stream& stream) { stream.writeByte(m_colourParm.m_value); }

/*
 * --INFO--
 * Address:	801AC5A0
 * Size:	000038
 */
void GenObjectPiki::ramLoadParameters(Stream& stream) { m_colourParm.m_value = stream.readByte(); }

/*
 * --INFO--
 * Address:	801AC5D8
 * Size:	000258
 */
Creature* GenObjectPiki::generate(Generator* gen)
{

	Vector3f pos = gen->m_position + gen->m_offset;

	for (int i = 0; i < m_amountParm.m_value; i++) {
		f32 randRot    = TAU * randFloat();
		f32 randRadius = 10.0f * randFloat();

		if (m_colourParm.m_value == Yellow && m_isWildPikminParm.m_value == 1) {
			randRadius = 0.0f;
		}

		Vector3f offsetPos = Vector3f(randRadius * pikmin2_sinf(randRot), 0.0f, randRadius * pikmin2_cosf(randRot));
		Game::GenArg genArg;
		genArg.m_position = offsetPos + pos;
		birth(&genArg);
	}

	return nullptr;
}

static const char unusedGenPikiArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	801AC830
 * Size:	0001B0
 */
Creature* GenObjectPiki::birth(GenArg* arg)
{
	if (m_isWildPikminParm.m_value == 1) {
		int color = m_colourParm.m_value;

		if (playData->hasBootContainer(color)) {
			return nullptr;
		} else if (playData->hasMetPikmin(color)) {
			return nullptr;
		}

		Piki* newPiki = pikiMgr->birth();
		if (newPiki) {
			newPiki->init(nullptr);
			newPiki->setPosition(arg->m_position, false);
			newPiki->changeShape(color);
			newPiki->changeHappa(Leaf);

			newPiki->setZikatu(true);
			GameStat::zikatuPikis.inc(color);
		}

		return newPiki;
	} else if (!playData->_18) {
		return nullptr;
	}

	getLatestVersion();
	int color = m_colourParm.m_value;

	Piki* newPiki = pikiMgr->birth();
	if (newPiki) {
		newPiki->init(nullptr);
		newPiki->setPosition(arg->m_position, false);
		newPiki->changeShape(color);
		newPiki->changeHappa(Leaf);
		JUT_ASSERTLINE(184, !newPiki->isZikatu(), "dame\n"); // 'not good' lol
	}

	return newPiki;
}

} // namespace Game
