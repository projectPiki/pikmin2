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
	if (factory->mCount < factory->mLimit) {
		factory->mFactories[factory->mCount].mTypeID       = 'piki';
		factory->mFactories[factory->mCount].mMakeFunction = makeObjectPiki;
		factory->mFactories[factory->mCount].mName         = "ƒsƒNƒ~ƒ“‚ð”­¶"; // generate Pikmin
		factory->mFactories[factory->mCount].mVersion      = '0001';
		factory->mCount++;
	}
}

/*
 * --INFO--
 * Address:	801AC574
 * Size:	00002C
 */
void GenObjectPiki::ramSaveParameters(Stream& stream) { stream.writeByte(mColourParm.mValue); }

/*
 * --INFO--
 * Address:	801AC5A0
 * Size:	000038
 */
void GenObjectPiki::ramLoadParameters(Stream& stream) { mColourParm.mValue = stream.readByte(); }

/*
 * --INFO--
 * Address:	801AC5D8
 * Size:	000258
 */
Creature* GenObjectPiki::generate(Generator* gen)
{

	Vector3f pos = gen->mPosition + gen->mOffset;

	for (int i = 0; i < mAmountParm.mValue; i++) {
		f32 randRot    = TAU * randFloat();
		f32 randRadius = 10.0f * randFloat();

		if (mColourParm.mValue == Yellow && mIsWildPikminParm.mValue == 1) {
			randRadius = 0.0f;
		}

		Vector3f offsetPos = Vector3f(randRadius * sinf(randRot), 0.0f, randRadius * cosf(randRot));
		Game::GenArg genArg;
		genArg.mPosition = offsetPos + pos;
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
	if (mIsWildPikminParm.mValue == 1) {
		int color = mColourParm.mValue;

		if (playData->hasBootContainer(color)) {
			return nullptr;
		} else if (playData->hasMetPikmin(color)) {
			return nullptr;
		}

		Piki* newPiki = pikiMgr->birth();
		if (newPiki) {
			newPiki->init(nullptr);
			newPiki->setPosition(arg->mPosition, false);
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
	int color = mColourParm.mValue;

	Piki* newPiki = pikiMgr->birth();
	if (newPiki) {
		newPiki->init(nullptr);
		newPiki->setPosition(arg->mPosition, false);
		newPiki->changeShape(color);
		newPiki->changeHappa(Leaf);
		JUT_ASSERTLINE(184, !newPiki->isZikatu(), "dame\n"); // 'not good' lol
	}

	return newPiki;
}

} // namespace Game
