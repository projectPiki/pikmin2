#include "efx/TPk.h"
#include "Game/Piki.h"

efx::TPkEffectMgr* pkEffectMgr;

namespace efx {

/**
 * @note Address: 0x803C4E0C
 * @note Size: 0xB4
 */
bool TPkOneEmitterSimple::create(Arg*)
{
	if (mEmitter)
		return false;

	mEmitter = particleMgr->create(mEffectID, Vector3f::zero, 0);

	if (mEmitter) {
		mEmitter->setFlag(JPAEMIT_Immortal);
		mEmitter->setFlag(JPAEMIT_StopEmitting);
		mEmitter->mMaxFrame        = 0;
		mEmitter->mEmitterCallback = this;
	}

	return mEmitter;
}

/**
 * @note Address: 0x803C4EC0
 * @note Size: 0xD4
 */
void TPkOneEmitterSimple::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	FOREACH_NODE(JSUPtrLink, mPtrList.mHead, ptrLink)
	{
		TOEContextS* context = static_cast<TOEContextS*>(ptrLink->mValue);
		Vector3f pos         = context->mPosition;
		mPtrList.remove(ptrLink);
		bool cullSuccess = particleMgr->cullByResFlg(pos, mEffectID);
		if (!cullSuccess) {
			int count = emitter->mRate;
			for (int i = 0; i < count; i++) {
				JPABaseParticle* particle = emitter->createParticle();
				if (particle) {
					particle->mOffsetPosition.set(pos.x, pos.y, pos.z);
				}
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void TPkOneEmitterSimple::add(Vector3f& position)
{
	int& nextContext = pkEffectMgr->mNextOpenContext;

	if (nextContext >= 49) {
		return;
	}
	TOEContextS* context = &pkEffectMgr->mTOEContextArray[nextContext];
	context->mPosition   = position;
	mPtrList.append(context);
	nextContext++;
}

/**
 * @note Address: 0x803C4F94
 * @note Size: 0x24
 */
void TPkEffectMgr::globalInstance() { pkEffectMgr = Instance(); }

/**
 * @note Address: 0x803C4FB8
 * @note Size: 0x50
 */
TPkEffectMgr* TPkEffectMgr::_instance;

void TPkEffectMgr::deleteInstance()
{
	if (_instance) {
		delete _instance;
		_instance = nullptr;
	}
	pkEffectMgr = nullptr;
}

/**
 * @note Address: 0x803C5008
 * @note Size: 0x48
 */
TPkEffectMgr* TPkEffectMgr::Instance()
{
	if (!_instance) {
		_instance = new TPkEffectMgr;
	}
	return _instance;
}

/**
 * @note Address: 0x803C5050
 * @note Size: 0x13BC
 */
TPkEffectMgr::TPkEffectMgr()
{
	mTOneEmitters.mToeKourinBlue   = new TOneEmitterChasePos(PID_PkToeKourin_Blue);
	mTOneEmitters.mToeKourinRed    = new TOneEmitterChasePos(PID_PkToeKourin_Red);
	mTOneEmitters.mToeKourinYellow = new TOneEmitterChasePos(PID_PkToeKourin_Yellow);
	mTOneEmitters.mToeKourinPurple = new TOneEmitterChasePos(PID_PkToeKourin_Purple);
	mTOneEmitters.mToeKourinWhite  = new TOneEmitterChasePos(PID_PkToeKourin_White);
	mTOneEmitters.mToeKourinGreen  = new TOneEmitterChasePos(PID_PkToeKourin_Green);

	mTOneEmitters.mToeDoping = new TOneEmitterChasePos(PID_PkToeDoping);

	mTOneEmitters.mToeNageKira = new TOneEmitterChasePos(PID_PkToeNageKira);

	mTOneEmitters.mToeTaneKira = new TOneEmitterChasePos(PID_PkToeTaneKira_2);
	mTOneEmitters.mToeMoeBC1   = new TOneEmitterChasePos(PID_PkToeTanekira);
	mTOneEmitters.mToeMoeBC2   = new TOneEmitterChasePos(PID_PkToeMoeBC);

	mTOneEmitters.mToeChudoku = new TOneEmitterChasePos(PID_PkToeChudoku);

	mTOneEmitters.mToeWater1 = new TOneEmitterChasePos(PID_PkToeWater_1);
	mTOneEmitters.mToeWater2 = new TOneEmitterChasePos(PID_PkToeWater_2);

	mTOneEmitters.mToeHamonA = new TOneEmitterChasePos(PID_PkToeHamonA);
	mTOneEmitters.mToeHamonB = new TOneEmitterChasePos(PID_PkToeHamonB);

	mTOneEmitters.mToeMoeSmoke = new TOneEmitterChasePos(PID_PkToeMoeSmoke);

	mTPkOneEmitters.mPikiDeadBlue   = new TPkOneEmitterSimple(PID_PkS_Dead_Blue);
	mTPkOneEmitters.mPikiDeadRed    = new TPkOneEmitterSimple(PID_PkS_Dead_Red);
	mTPkOneEmitters.mPikiDeadYellow = new TPkOneEmitterSimple(PID_PkS_Dead_Yellow);
	mTPkOneEmitters.mPikiDeadPurple = new TPkOneEmitterSimple(PID_PkS_Dead_Purple);
	mTPkOneEmitters.mPikiDeadWhite  = new TPkOneEmitterSimple(PID_PkS_Dead_White);

	mTPkOneEmitters.mPikiDamage = new TPkOneEmitterSimple(PID_PikiDamage);
	mTPkOneEmitters.mAttackDP   = new TPkOneEmitterSimple(PID_PkAttackDP);

	mTPkOneEmitters.mKanden1 = new TPkOneEmitterSimple(PID_PkKanden_1);
	mTPkOneEmitters.mKanden2 = new TPkOneEmitterSimple(PID_PkKanden_2);
	mTPkOneEmitters.mKanden4 = new TPkOneEmitterSimple(PID_PkKanden_4);
	mTPkOneEmitters.mKanden3 = new TPkOneEmitterSimple(PID_PkKanden_3);

	mTPkOneEmitters.mChinka1 = new TPkOneEmitterSimple(PID_PkS_Chinka_1);
	mTPkOneEmitters.mChinka2 = new TPkOneEmitterSimple(PID_PkS_Chinka_2);

	mTPkOneEmitters.mGedoku1 = new TPkOneEmitterSimple(PID_PkS_Gedoku_1);
	mTPkOneEmitters.mGedoku2 = new TPkOneEmitterSimple(PID_PkS_Gedoku_2);

	mTPkOneEmitters.mWaterOff1 = new TPkOneEmitterSimple(PID_PkS_WaterOff_1);
	mTPkOneEmitters.mWaterOff2 = new TPkOneEmitterSimple(PID_PkS_WaterOff_2);

	mTPkOneEmitters.mEnemyDive1 = new TPkOneEmitterSimple(PID_EnemyDive_1);
	mTPkOneEmitters.mEnemyDive2 = new TPkOneEmitterSimple(PID_EnemyDive_2);

	mTPkOneEmitters.mChiru = new TPkOneEmitterSimple(PID_PkS_Chiru);

	mTPkOneEmitters.mInAttack  = new TPkOneEmitterSimple(PID_PkS_InAttack);
	mTPkOneEmitters.mWalkSmoke = new TPkOneEmitterSimple(PID_PkS_WalkSmoke);

	mTPkOneEmitters.mDig = new TPkOneEmitterSimple(PID_PkS_Dig);

	mTPkOneEmitters.mChiruRed = new TPkOneEmitterSimple(PID_PkS_ChiruRed);

	mTPkOneEmitters.mGate3Attack = new TPkOneEmitterSimple(PID_PKS_Gate3Attack);

	mTPkOneEmitters.mWalkWater1 = new TPkOneEmitterSimple(PID_PkS_Walkwater_1);
	mTPkOneEmitters.mWalkWater2 = new TPkOneEmitterSimple(PID_PkS_Walkwater_2);

	mNextOpenContext = 0;
}

/**
 * @note Address: 0x803C6498
 * @note Size: 0x108
 */
TPkEffectMgr::~TPkEffectMgr()
{
	for (int i = 0; i < 17; i++) {
		delete mTOneEmitterArray[i];
	}

	for (int i = 0; i < 27; i++) {
		delete mTPkOneEmitterArray[i];
	}

	_instance   = nullptr;
	pkEffectMgr = nullptr;
}

/**
 * @note Address: 0x803C6620
 * @note Size: 0x98
 */
void TPkEffectMgr::startMgr()
{
	for (int i = 0; i < 17; i++) {
		mTOneEmitterArray[i]->create(nullptr);
	}
	for (int i = 0; i < 27; i++) {
		mTPkOneEmitterArray[i]->create(nullptr);
	}
}

/**
 * @note Address: 0x803C66B8
 * @note Size: 0x90
 */
void TPkEffectMgr::exitMgr()
{
	for (int i = 0; i < 17; i++) {
		mTOneEmitterArray[i]->forceKill();
	}
	for (int i = 0; i < 27; i++) {
		mTPkOneEmitterArray[i]->forceKill();
	}
}

/**
 * @note Address: 0x803C678C
 * @note Size: 0xC
 */
void TPkEffectMgr::resetContextS() { mNextOpenContext = 0; }

void TPkEffectMgr::createS_Dead(Vector3f& position, s32 pikiKind)
{
	switch (pikiKind) {
	case Game::Blue:
		pkEffectMgr->mTPkOneEmitters.mPikiDeadBlue->add(position);
		break;
	case Game::Red:
		pkEffectMgr->mTPkOneEmitters.mPikiDeadRed->add(position);
		break;
	case Game::Yellow:
		pkEffectMgr->mTPkOneEmitters.mPikiDeadYellow->add(position);
		break;
	case Game::Purple:
		pkEffectMgr->mTPkOneEmitters.mPikiDeadPurple->add(position);
		break;
	case Game::White:
		pkEffectMgr->mTPkOneEmitters.mPikiDeadWhite->add(position);
		break;
	case Game::Bulbmin:
	case Game::Carrot:
		break;
	default:
		JUT_PANICLINE(232, "unknown color");
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_Attack(Vector3f& position) { pkEffectMgr->mTPkOneEmitters.mPikiDamage->add(position); }

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_AttackDp(Vector3f& position) { pkEffectMgr->mTPkOneEmitters.mAttackDP->add(position); }

/**
 * @note Address: N/A
 * @note Size: 0x160
 */
void TPkEffectMgr::createS_Kanden(Vector3f& position)
{
	pkEffectMgr->mTPkOneEmitters.mKanden1->add(position);
	pkEffectMgr->mTPkOneEmitters.mKanden2->add(position);
	pkEffectMgr->mTPkOneEmitters.mKanden3->add(position);
	pkEffectMgr->mTPkOneEmitters.mKanden4->add(position);
}

/**
 * @note Address: 0x803C69B4
 * @note Size: 0xC8
 */
void TPkEffectMgr::createS_Chinka(Vector3f& position)
{
	pkEffectMgr->mTPkOneEmitters.mChinka1->add(position);
	pkEffectMgr->mTPkOneEmitters.mChinka2->add(position);
}

/**
 * @note Address: 0x803C6A7C
 * @note Size: 0xC8
 */
void TPkEffectMgr::createS_Gedoku(Vector3f& position)
{
	pkEffectMgr->mTPkOneEmitters.mGedoku1->add(position);
	pkEffectMgr->mTPkOneEmitters.mGedoku2->add(position);
}

/**
 * @note Address: 0x803C6B44
 * @note Size: 0xC8
 */
void TPkEffectMgr::createS_WaterOff(Vector3f& position)
{
	pkEffectMgr->mTPkOneEmitters.mWaterOff1->add(position);
	pkEffectMgr->mTPkOneEmitters.mWaterOff2->add(position);
}

/**
 * @note Address: 0x803C6C0C
 * @note Size: 0xC8
 */
void TPkEffectMgr::createS_Dive(Vector3f& position)
{
	// These are probably not "Enemy" dives...
	pkEffectMgr->mTPkOneEmitters.mEnemyDive1->add(position);
	pkEffectMgr->mTPkOneEmitters.mEnemyDive2->add(position);
}

/**
 * @note Address: 0x803C6CD4
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_Chiru(Vector3f& position) { pkEffectMgr->mTPkOneEmitters.mChiru->add(position); }

/**
 * @note Address: 0x803C6D48
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_Inattack(Vector3f& position) { pkEffectMgr->mTPkOneEmitters.mInAttack->add(position); }

/**
 * @note Address: 0x803C6DBC
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_Walksmoke(Vector3f& position) { pkEffectMgr->mTPkOneEmitters.mWalkSmoke->add(position); }

/**
 * @note Address: 0x803C6E30
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_Dig(Vector3f& position) { pkEffectMgr->mTPkOneEmitters.mDig->add(position); }

/**
 * @note Address: 0x803C6EA4
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_ChiruRed(Vector3f& position) { pkEffectMgr->mTPkOneEmitters.mChiruRed->add(position); }

/**
 * @note Address: 0x803C6F18
 * @note Size: 0x74
 */
void TPkEffectMgr::createS_Gate3Attack(Vector3f& position)
{
	// "Gate3" is probably referring to an electric gate
	pkEffectMgr->mTPkOneEmitters.mGate3Attack->add(position);
}

/**
 * @note Address: 0x803C6F8C
 * @note Size: 0xC8
 */
void TPkEffectMgr::createS_Walkwater(Vector3f& position)
{
	pkEffectMgr->mTPkOneEmitters.mWalkWater1->add(position);
	pkEffectMgr->mTPkOneEmitters.mWalkWater2->add(position);
}

/**
 * @note Address: 0x803C7054
 * @note Size: 0x128
 */
void ToeKourin::create(Vector3f* chasePos, s32 pikiKind)
{
	P2ASSERTLINE(320, chasePos);
	mPikiKind             = pikiKind;
	mContext[0].mPosition = chasePos;

	switch (mPikiKind) {
	case Game::Blue:
		pkEffectMgr->mTOneEmitters.mToeKourinBlue->add(&mContext[0]);
		break;
	case Game::Red:
		pkEffectMgr->mTOneEmitters.mToeKourinRed->add(&mContext[0]);
		break;
	case Game::Yellow:
		pkEffectMgr->mTOneEmitters.mToeKourinYellow->add(&mContext[0]);
		break;
	case Game::Purple:
		pkEffectMgr->mTOneEmitters.mToeKourinPurple->add(&mContext[0]);
		break;
	case Game::White:
		pkEffectMgr->mTOneEmitters.mToeKourinWhite->add(&mContext[0]);
		break;
	case Game::Bulbmin:
	case Game::Carrot:
		pkEffectMgr->mTOneEmitters.mToeKourinGreen->add(&mContext[0]);
		break;
	default:
		JUT_PANICLINE(348, "illegal kourin color %d\n", pikiKind);
		break;
	case -1:
		break;
	}
}

/**
 * @note Address: 0x803C717C
 * @note Size: 0xB8
 */
void ToeKourin::kill()
{
	switch (mPikiKind) {
	case Game::Blue:
		pkEffectMgr->mTOneEmitters.mToeKourinBlue->del(&mContext[0]);
		break;
	case Game::Red:
		pkEffectMgr->mTOneEmitters.mToeKourinRed->del(&mContext[0]);
		break;
	case Game::Yellow:
		pkEffectMgr->mTOneEmitters.mToeKourinYellow->del(&mContext[0]);
		break;
	case Game::Purple:
		pkEffectMgr->mTOneEmitters.mToeKourinPurple->del(&mContext[0]);
		break;
	case Game::White:
		pkEffectMgr->mTOneEmitters.mToeKourinWhite->del(&mContext[0]);
		break;
	case Game::Bulbmin:
	case Game::Carrot:
		pkEffectMgr->mTOneEmitters.mToeKourinGreen->del(&mContext[0]);
		break;
	default:
		break;
	case -1:
		break;
	}
}

/**
 * @note Address: 0x803C7234
 * @note Size: 0x68
 */
void ToeDoping::create(Vector3f* chasePos)
{
	P2ASSERTLINE(385, chasePos);
	mContext[0].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeDoping->add(mContext);
}

/**
 * @note Address: 0x803C729C
 * @note Size: 0x2C
 */
void ToeDoping::kill() { pkEffectMgr->mTOneEmitters.mToeDoping->del(mContext); }

/**
 * @note Address: 0x803C72C8
 * @note Size: 0x68
 */
void ToeNagekira::create(Vector3f* chasePos)
{
	P2ASSERTLINE(399, chasePos);
	mContext[0].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeNageKira->add(mContext);
}

/**
 * @note Address: 0x803C7330
 * @note Size: 0x2C
 */
void ToeNagekira::kill() { pkEffectMgr->mTOneEmitters.mToeNageKira->del(mContext); }

/**
 * @note Address: 0x803C735C
 * @note Size: 0x7C
 */
void ToeMoeBC::create(Vector3f* chasePos)
{
	P2ASSERTLINE(412, chasePos);
	mContexts[0].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeMoeBC1->add(&mContexts[0]);

	mContexts[1].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeMoeBC2->add(&mContexts[1]);
}

/**
 * @note Address: 0x803C73D8
 * @note Size: 0x48
 */
void ToeMoeBC::kill()
{
	pkEffectMgr->mTOneEmitters.mToeMoeBC1->del(&mContexts[0]);
	pkEffectMgr->mTOneEmitters.mToeMoeBC2->del(&mContexts[1]);
}

/**
 * @note Address: 0x803C7420
 * @note Size: 0x68
 */
void ToeChudoku::create(Vector3f* chasePos)
{
	P2ASSERTLINE(429, chasePos);
	mContext[0].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeChudoku->add(mContext);
}

/**
 * @note Address: 0x803C7488
 * @note Size: 0x2C
 */
void ToeChudoku::kill() { pkEffectMgr->mTOneEmitters.mToeChudoku->del(mContext); }

/**
 * @note Address: 0x803C74B4
 * @note Size: 0x7C
 */
void ToeWater::create(Vector3f* chasePos)
{
	P2ASSERTLINE(444, chasePos);
	mContexts[0].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeWater1->add(&mContexts[0]);

	mContexts[1].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeWater2->add(&mContexts[1]);
}

/**
 * @note Address: 0x803C7530
 * @note Size: 0x48
 */
void ToeWater::kill()
{
	pkEffectMgr->mTOneEmitters.mToeWater1->del(&mContexts[0]);
	pkEffectMgr->mTOneEmitters.mToeWater2->del(&mContexts[1]);
}

/**
 * @note Address: 0x803C7578
 * @note Size: 0x74
 */
void ToeHamonA::create(Vector3f* chasePos)
{
	P2ASSERTLINE(461, chasePos);
	if (!mContext[0].mParent) {
		mContext[0].mPosition = chasePos;
		pkEffectMgr->mTOneEmitters.mToeHamonA->add(mContext);
	}
}

/**
 * @note Address: 0x803C75EC
 * @note Size: 0x2C
 */
void ToeHamonA::kill() { pkEffectMgr->mTOneEmitters.mToeHamonA->del(mContext); }

/**
 * @note Address: 0x803C7618
 * @note Size: 0x74
 */
void ToeHamonB::create(Vector3f* chasePos)
{
	P2ASSERTLINE(478, chasePos);
	if (!mContext[0].mParent) {
		mContext[0].mPosition = chasePos;
		pkEffectMgr->mTOneEmitters.mToeHamonB->add(mContext);
	}
}

/**
 * @note Address: 0x803C768C
 * @note Size: 0x2C
 */
void ToeHamonB::kill() { pkEffectMgr->mTOneEmitters.mToeHamonB->del(mContext); }

/**
 * @note Address: 0x803C76B8
 * @note Size: 0x68
 */
void ToeMoeSmoke::create(Vector3f* chasePos)
{
	P2ASSERTLINE(495, chasePos);
	mContext[0].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeMoeSmoke->add(mContext);
}

/**
 * @note Address: 0x803C7720
 * @note Size: 0x2C
 */
void ToeMoeSmoke::kill() { pkEffectMgr->mTOneEmitters.mToeMoeSmoke->del(mContext); }

/**
 * @note Address: 0x803C774C
 * @note Size: 0x68
 */
void ToeTanekira::create(Vector3f* chasePos)
{
	P2ASSERTLINE(508, chasePos);
	mContext[0].mPosition = chasePos;
	pkEffectMgr->mTOneEmitters.mToeTaneKira->add(&mContext[0]);
}

/**
 * @note Address: 0x803C77B4
 * @note Size: 0x2C
 */
void ToeTanekira::kill() { pkEffectMgr->mTOneEmitters.mToeTaneKira->del(&mContext[0]); }

} // namespace efx
