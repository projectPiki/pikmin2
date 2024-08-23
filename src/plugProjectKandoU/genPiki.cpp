#include "Game/gameGenerator.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "nans.h"

/**
 * @note Address: 0x801AC3C0
 * @note Size: 0x128
 */
Game::GenObject* makeObjectPiki() { return new Game::GenObjectPiki(); }

namespace Game {
/**
 * @note Address: 0x801AC4E8
 * @note Size: 0x8C
 */
void GenObjectPiki::initialise()
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (factory->mCount < factory->mLimit) {
		factory->mFactories[factory->mCount].mTypeID       = 'piki';
		factory->mFactories[factory->mCount].mMakeFunction = makeObjectPiki;
		factory->mFactories[factory->mCount].mName         = "ピクミンを発生"; // generate Pikmin
		factory->mFactories[factory->mCount].mVersion      = '0001';
		factory->mCount++;
	}
}

/**
 * @note Address: 0x801AC574
 * @note Size: 0x2C
 */
void GenObjectPiki::ramSaveParameters(Stream& stream) { stream.writeByte(mColourParm.mValue); }

/**
 * @note Address: 0x801AC5A0
 * @note Size: 0x38
 */
void GenObjectPiki::ramLoadParameters(Stream& stream) { mColourParm.mValue = stream.readByte(); }

/**
 * @note Address: 0x801AC5D8
 * @note Size: 0x258
 */
Creature* GenObjectPiki::generate(Generator* gen)
{

	Vector3f pos = gen->mPosition + gen->mOffset;

	for (int i = 0; i < mAmountParm(); i++) {
		f32 randRot    = TAU * randFloat();
		f32 randRadius = 10.0f * randFloat();

		// For wild yellow pikmin, dont allow any random spawn offset
		// This is done so they stay on the tree in Perplexing Pool
		if (mColourParm() == Yellow && mIsWildPikminParm() == 1) {
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

/**
 * @note Address: 0x801AC830
 * @note Size: 0x1B0
 */
Creature* GenObjectPiki::birth(GenArg* arg)
{
	if (mIsWildPikminParm() == 1) {
		int color = mColourParm();

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
	}

	if (!playData->mDoAllowDebugPikiSpawn) {
		return nullptr;
	}

	getLatestVersion();
	int color = mColourParm();

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
