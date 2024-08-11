#include "Game/gameGenerator.h"
#include "Game/Creature.h"
#include "Game/Navi.h"
#include "SysShape/AnimInfo.h"
#include "BaseParm.h"

/**
 * --LOCAL--
 * @note Address: 0x801ACA08
 * @note Size: 0xB8
 */
Game::GenObject* makeObjectNavi() { return new Game::GenObjectNavi(); }

namespace Game {
/**
 * @note Address: 0x801ACAC0
 * @note Size: 0x8C
 * Matches
 */
void GenObjectNavi::initialise()
{
	GenObjectFactoryFactory* factory = GenObjectFactory::factory;
	if (factory->mCount < factory->mLimit) {
		factory->mFactories[factory->mCount].mTypeID       = 'navi';
		factory->mFactories[factory->mCount].mMakeFunction = makeObjectNavi;
		factory->mFactories[factory->mCount].mName         = "ナビを発生"; // generate navi(gation)
		factory->mFactories[factory->mCount].mVersion      = '0000';
		factory->mCount++;
	}
}

/**
 * @note Address: 0x801ACB4C
 * @note Size: 0x4
 */
void GenObjectNavi::ramSaveParameters(Stream&) { }

/**
 * @note Address: 0x801ACB50
 * @note Size: 0x4
 */
void GenObjectNavi::ramLoadParameters(Stream&) { }

/**
 * @note Address: 0x801ACB54
 * @note Size: 0x78
 * Matches
 */
Creature* GenObjectNavi::generate(Generator* gen)
{
	GenArg arg(gen->mPosition + gen->mOffset);
	return birth(&arg);
}

/**
 * @note Address: 0x801ACBCC
 * @note Size: 0x138
 */
Creature* GenObjectNavi::birth(GenArg* arg)
{
	getLatestVersion();

	Navi* newNavi = naviMgr->birth();
	if (newNavi) {
		newNavi->init(nullptr);

		newNavi->mAnimator.mSelfAnimator.getCalc();
		newNavi->mAnimator.mBoundAnimator.getCalc();

		// fabricated inline that has a futile loop in it?
		newNavi->setCalcs();

		SysShape::Model* tempModel = newNavi->mModel;

		// fabricated inlined futile loops??
		newNavi->mModel->loopTimer();
		tempModel->loopTimer();

		newNavi->setPosition(arg->mPosition, false);
		newNavi->mFaceDir = TORADIANS(mRotation.mValue);
	}
	return newNavi;
}
} // namespace Game
