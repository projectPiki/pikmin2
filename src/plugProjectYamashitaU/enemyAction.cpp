#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/Stickers.h"
#include "Game/MoviePlayer.h"
#include "stl/float.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace EnemyFunc {

/**
 * @note Address: 0x801126F4
 * @note Size: 0x424
 */
Navi* getNearestNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* naviDist, Condition<Navi>* condition)
{
	Navi* navi = nullptr;
	f32 minDist;
	searchAngle = TORADIANS(searchAngle);

	if (searchRadius < 0.0f) {
		searchRadius = FLT_MAX;
	} else {
		searchRadius = SQUARE(searchRadius);
	}

	if (naviDist) {
		if (*naviDist < searchRadius) {
			minDist = *naviDist;
		} else {
			minDist = searchRadius;
		}
	} else {
		minDist = searchRadius;
	}

	Iterator<Navi> iter(naviMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Navi* currNavi = *iter;
		if (currNavi->isAlive()) {
			f32 angleDist = creature->getAngDist(currNavi);
			if (FABS(angleDist) <= searchAngle) {
				f32 newDist = sqrDistance2D(currNavi->getPosition().x, currNavi->getPosition().z, creature->getPosition().x,
				                            creature->getPosition().z);
				if (newDist < minDist) {
					navi    = currNavi;
					minDist = newDist;
				}
			}
		}
	}

	if (navi && naviDist) {
		*naviDist = minDist;
	}

	return navi;
}

/**
 * @note Address: 0x80112B64
 * @note Size: 0x484
 */
Piki* getNearestPikmin(Creature* creature, f32 searchAngle, f32 searchRadius, f32* pikiDist, Condition<Piki>* condition)
{
	sys->mTimers->_start("teki-srch", true);
	Piki* piki = nullptr;
	f32 minDist;
	searchAngle = TORADIANS(searchAngle);
	if (searchRadius < 0.0f) {
		searchRadius = FLT_MAX;
	} else {
		searchRadius = SQUARE(searchRadius);
	}

	if (pikiDist) {
		if (*pikiDist < searchRadius) {
			minDist = *pikiDist;
		} else {
			minDist = searchRadius;
		}
	} else {
		minDist = searchRadius;
	}

	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Piki* currPiki = *iter;
		if (currPiki->isSearchable()) {
			f32 angleDist = creature->getAngDist(currPiki);
			if (FABS(angleDist) <= searchAngle) {
				f32 newDist = sqrDistance2D(currPiki->getPosition().x, currPiki->getPosition().z, creature->getPosition().x,
				                            creature->getPosition().z);
				if (newDist < minDist) {
					piki    = currPiki;
					minDist = newDist;
				}
			}
		}
	}

	if (piki && pikiDist) {
		*pikiDist = minDist;
	}

	sys->mTimers->_stop("teki-srch");

	return piki;
}

/**
 * @note Address: 0x80113050
 * @note Size: 0xC4
 */
Creature* getNearestPikminOrNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* targetDist, Condition<Navi>* naviCondition,
                                 Condition<Piki>* pikiCondition)
{
	f32 dist = FLT_MAX;
	if (!targetDist) {
		targetDist = &dist;
	}

	Creature* navi = getNearestNavi(creature, searchAngle, searchRadius, targetDist, naviCondition);
	Creature* piki = getNearestPikmin(creature, searchAngle, searchRadius, targetDist, pikiCondition);

	if (piki) {
		return piki;
	}

	return navi;
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void flickCreature(Creature* flicker, Creature* toFlick, f32 knockback, f32 damage, f32 angle)
{
	if (toFlick->mSticker == flicker && !toFlick->isStickToMouth()) {
		InteractFlick flick(flicker, knockback, damage, angle);
		toFlick->stimulate(flick);
	}
}

/**
 * @note Address: 0x8011311C
 * @note Size: 0x36C
 */
void flickStickPikmin(Creature* creature, f32 flickChance, f32 knockback, f32 damage, f32 angle, Condition<Piki>* condition)
{
	Stickers stickers(creature);

	Iterator<Creature> iter(&stickers);
	angle += PI;
	angle = roundAng(angle);
	CI_LOOP(iter)
	{
		Creature* stuck = *iter;
		if (stuck->isPiki()) {
			if (!condition || (condition && condition->satisfy(static_cast<Piki*>(stuck)))) {
				if (flickChance > randFloat()) {
					flickCreature(creature, *iter, knockback, damage, angle);
				}
			}
		}
	}
}

/**
 * @note Address: 0x801134D4
 * @note Size: 0x2BC
 */
void flickNearbyPikmin(Creature* creature, f32 searchRadius, f32 knockback, f32 damage, f32 angle, Condition<Piki>* condition)
{
	searchRadius *= searchRadius;

	ConditionPikminNearby nearbyCondition(creature, searchRadius);
	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	angle += PI;

	CI_LOOP(iter)
	{
		Piki* piki                 = *iter;
		Condition<Creature>* condi = &nearbyCondition;
		if (condi->satisfy(piki)) {
			InteractFlick flick(creature, knockback, damage, angle);
			piki->stimulate(flick);
		}
	}
}

/**
 * @note Address: 0x80113790
 * @note Size: 0x3A4
 */
void flickNearbyNavi(Creature* creature, f32 searchRadius, f32 knockback, f32 damage, f32 angle, Condition<Navi>* condition)
{
	searchRadius *= searchRadius;

	// ConditionPikminNearby nearbyCondition (creature, searchRadius);
	Iterator<Navi> iter(naviMgr, nullptr, condition);
	angle += PI;

	CI_LOOP(iter)
	{
		Navi* navi = *iter;
		if (sqrDistance(creature->getPosition().x, creature->getPosition().y, creature->getPosition().z, navi->getPosition().x,
		                navi->getPosition().y, navi->getPosition().z)
		    < searchRadius) {
			InteractFlick flick(creature, knockback, damage, angle);
			navi->stimulate(flick);
		}
	}
}

/**
 * @note Address: 0x80113B34
 * @note Size: 0x350
 */
int eatPikmin(EnemyBase* enemy, Condition<Piki>* condition)
{
	int eatCount           = 0;
	MouthSlots* mouthSlots = enemy->getMouthSlots();
	EatPikminDefaultCondition eatCondition(enemy);

	if (!condition) {
		condition = &eatCondition;
	}
	if (mouthSlots) {
		Iterator<Piki> iter(pikiMgr, nullptr, condition);
		CI_LOOP(iter)
		{
			Piki* piki = *iter;
			for (int i = 0; i < mouthSlots->getMax(); i++) {
				MouthCollPart* slot = mouthSlots->getSlot(i);
				if (!slot->mStuckCreature) {
					Vector3f slotPos;
					slot->getPosition(slotPos);
					Vector3f pikiPos = piki->getPosition();

					f32 dist = slotPos.distance(pikiPos);
					if (dist < slot->mRadius) {
						InteractSwallow eat(enemy, 1.0f, slot);
						if (piki->stimulate(eat)) {
							eatCount++;
						}
						break;
					}
				}
			}
		}
	}

	return eatCount;
}

/**
 * @note Address: 0x80113E84
 * @note Size: 0x3DC
 */
void swallowPikmin(Creature* creature, f32 poisonDamage, Condition<Piki>* condition)
{
	Stickers stickers(creature);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		if ((*iter)->isPiki()) {
			Piki* piki = static_cast<Piki*>(*iter);
			if ((!condition || (condition && condition->satisfy(piki))) && piki->isStickToMouth()) {
				InteractKill kill(creature, nullptr);
				if (piki->stimulate(kill) && piki->getKind() == White) {
					static_cast<EnemyBase*>(creature)->eatWhitePikminCallBack(piki, poisonDamage);

					if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_Eat_White_Pikmin) && moviePlayer) {
						MoviePlayArg movie("g2B_white_poison", nullptr, nullptr, 0);
						movie.setTarget(creature);
						moviePlayer->mTargetObject = creature;
						moviePlayer->play(movie);
						playData->setDemoFlag(DEMO_Eat_White_Pikmin);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80114260
 * @note Size: 0x3F8
 */
int attackNavi(Creature* creature, f32 searchRadius, f32 searchAngle, f32 damage, CollPart* part, Condition<Navi>* condition)
{
	searchAngle     = TORADIANS(searchAngle);
	int attackCount = 0;

	Iterator<Navi> iter(naviMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Navi* navi    = *iter;
		f32 angleDist = creature->getAngDist(navi);

		if (FABS(angleDist) < searchAngle) {
			Vector3f naviPos     = navi->getPosition();
			Vector3f creaturePos = creature->getPosition();
			f32 dist             = creaturePos.distance(naviPos);
			if (dist < searchRadius) {
				InteractAttack attack(creature, damage, part);
				navi->stimulate(attack);
				attackCount++;
			}
		}
	}

	return attackCount;
}

/**
 * @note Address: 0x80114658
 * @note Size: 0xDC
 */
bool isStartFlick(EnemyBase* enemy, bool doResetFlickTimer)
{
	EnemyParmsBase* parms;
	bool result  = false;
	f32 flickVal = 0.0f;
	if (enemy->mFlickTimer >= 0.0f) {
		flickVal = enemy->mFlickTimer + 0.5f;
	} else {
		flickVal = enemy->mFlickTimer - 0.5f;
	}

	parms       = static_cast<EnemyParmsBase*>(enemy->mParms);
	u8 flickInt = (int)flickVal;

	if (enemy->mStuckPikminCount < parms->mGeneral.mShakeOffSticking1.mValue) {
		if (flickInt > parms->mGeneral.mShakeOffBlowA.mValue) {
			result = true;
		}
	} else if (enemy->mStuckPikminCount < parms->mGeneral.mShakeOffSticking2.mValue) {
		if (flickInt > parms->mGeneral.mShakeOffBlowB.mValue) {
			result = true;
		}
	} else if (enemy->mStuckPikminCount < parms->mGeneral.mShakeOffSticking3.mValue) {
		if (flickInt > parms->mGeneral.mShakeOffBlowC.mValue) {
			result = true;
		}
	} else if (flickInt > parms->mGeneral.mShakeOffBlowD.mValue) {
		result = true;
	}

	if (result && doResetFlickTimer) {
		enemy->mFlickTimer = 0.0f;
	}

	return result;
}

/**
 * @note Address: 0x80114734
 * @note Size: 0x38C
 */
bool isTherePikmin(Creature* creature, f32 searchRadius, Condition<Piki>* condition)
{
	searchRadius *= searchRadius;
	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isSearchable()) {
			if (sqrDistance(piki->getPosition().x, piki->getPosition().y, piki->getPosition().z, creature->getPosition().x,
			                creature->getPosition().y, creature->getPosition().z)
			    < searchRadius) {
				return true;
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x80114AC0
 * @note Size: 0x330
 */
bool isThereOlimar(Creature* creature, f32 searchRadius, Condition<Navi>* condition)
{
	searchRadius *= searchRadius;
	Iterator<Navi> iter(naviMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Navi* navi = *iter;
		if (sqrDistance(navi->getPosition().x, navi->getPosition().y, navi->getPosition().z, creature->getPosition().x,
		                creature->getPosition().y, creature->getPosition().z)
		    < searchRadius) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x80114DF0
 * @note Size: 0x3C4
 */
int getSurroundPikminNum(Creature* creature, f32 searchRadius, Condition<Piki>* condition)
{
	sys->mTimers->_start("teki-srch", true);
	searchRadius *= searchRadius;
	int pikiCount = 0;
	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isSearchable()) {
			if (sqrDistance(piki->getPosition().x, piki->getPosition().y, piki->getPosition().z, creature->getPosition().x,
			                creature->getPosition().y, creature->getPosition().z)
			    < searchRadius) {
				pikiCount++;
			}
		}
	}

	sys->mTimers->_stop("teki-srch");
	return pikiCount;
}

/**
 * @note Address: 0x801151B4
 * @note Size: 0x24C
 */
int getStickPikminColorNum(Creature* creature, int color)
{
	int num = 0;
	Stickers stickers(creature);
	Iterator<Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		if ((*iter)->isPiki()) {
			Piki* piki = static_cast<Piki*>(*iter);
			if (piki->getKind() == color) {
				num++;
			}
		}
	}

	return num;
}

/**
 * @note Address: 0x80115400
 * @note Size: 0x1DC
 */
void walkToTarget(EnemyBase* enemy, Creature* target, f32 speed, f32 turnFactor, f32 maxTurnSpeed)
{
	enemy->turnToTarget(target, turnFactor, maxTurnSpeed);

	f32 x = sin(enemy->getFaceDir());
	f32 y = enemy->getTargetVelocity().y;
	f32 z = cos(enemy->getFaceDir());

	enemy->mTargetVelocity = Vector3f(speed * x, y, speed * z);
}

/**
 * @note Address: 0x801155DC
 * @note Size: 0x1BC
 */
void walkToTarget(EnemyBase* enemy, Vector3f& targetPos, f32 moveSpeed, f32 turnFactor, f32 maxTurnSpeed)
{
	enemy->turnToTarget(targetPos, turnFactor, maxTurnSpeed);

	enemy->setTargetSpeed(moveSpeed);
}

} // namespace EnemyFunc
} // namespace Game
