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
	if (factory->mCount < factory->mLimit) {
		factory->mFactories[factory->mCount].mTypeID       = 'navi';
		factory->mFactories[factory->mCount].mMakeFunction = makeObjectNavi;
		factory->mFactories[factory->mCount].mName         = "ƒiƒr‚ð”­¶"; // generate navi(gation)
		factory->mFactories[factory->mCount].mVersion      = '0000';
		factory->mCount++;
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
	Vector3f finalPos(gen->mPosition.x + gen->mOffset.x, gen->mPosition.y + gen->mOffset.y, gen->mPosition.z + gen->mOffset.z);

	GenArg arg;
	arg.mPosition = finalPos;
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

		newNavi->mAnimator.mSelfAnimator.getCalc();
		newNavi->mAnimator.mBoundAnimator.getCalc();

		// fabricated inline that has a futile loop in it?
		newNavi->setCalcs();

		SysShape::Model* tempModel = newNavi->mModel;

		// fabricated inlined futile loops??
		newNavi->mModel->loopTimer();
		tempModel->loopTimer();

		newNavi->setPosition(arg->mPosition, false);
		newNavi->mFaceDir = PI * (DEG2RAD * mRotation.mValue);
	}
	return newNavi;
}
} // namespace Game
