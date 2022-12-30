#include "Game/Navi.h"
#include "Game/NaviState.h"
#include "Game/Interaction.h"
#include "Game/Entities/Sarai.h"

#include "PSM/Navi.h"

#include "Dolphin/rand.h"

namespace Game {

/*
 * --INFO--
 * Address:	801D7E64
 * Size:	000074
 */
bool Navi::stimulate(Game::Interaction& interaction)
{
	if (interaction.actCommon(this)) {
		return interaction.actNavi(this);
	}

	return false;
}

/*
 * --INFO--
 * Address:	801D7ED8
 * Size:	00008C
 */
bool InteractSarai::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & GAMESYS_Unk6) {
		if (!navi->isStickTo()) {
			navi->startStick(m_creature, m_collPart);
			navi->transit(NSID_Sarai, nullptr);
		}

		return true;
	}
}

/*
 * --INFO--
 * Address:	801D7F64
 * Size:	000080
 */
bool InteractBomb::actNavi(Game::Navi* navi)
{
	if ((gameSystem->m_flags & GAMESYS_Unk6) == FALSE) {
		return false;
	}

	NaviFlickArg flickArg(m_creature, m_direction, m_damage);
	navi->transit(NSID_Flick, &flickArg);
	return true;
}

/*
 * --INFO--
 * Address:	801D7FE4
 * Size:	0000E0
 */
bool InteractWind::actNavi(Game::Navi* navi)
{
	OlimarData* oData = navi->getOlimarData();
	if (oData->hasItem(OlimarData::ODII_RepugnantAppendage)) {
		return false;
	}

	NaviFlickArg flickArg(m_creature, m_direction, m_damage);

	if (navi->m_currentState->m_id == NSID_Flick && ((NaviFlickState*)navi->m_currentState)->m_flicker == m_creature) {
		return false;
	}

	if (navi->m_currentState->m_id == NSID_KokeDamage && ((NaviKokeDamageState*)navi->m_currentState)->m_creature == m_creature) {
		return false;
	}

	navi->transit(NSID_Flick, &flickArg);
	return true;
}

/*
 * --INFO--
 * Address:	801D80C4
 * Size:	0000B4
 */
bool InteractDenki::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & 0x20) {
		if (!playData->m_olimarData->hasItem(OlimarData::ODII_DreamMaterial)) {
			NaviFlickArg flickArg(m_creature, m_direction, m_damage);
			navi->transit(NSID_Flick, &flickArg);
			return true;
		}

		return false;
	}
}

/*
 * --INFO--
 * Address:	801D8178
 * Size:	000044
 */
bool InteractFallMeck::actNavi(Game::Navi* navi)
{
	NaviFallMeckArg fmArg(m_damage);
	navi->transit(NSID_FallMeck, &fmArg);
	return true;
}

/*
 * --INFO--
 * Address:	801D81BC
 * Size:	0001F8
 */
bool InteractFlick::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & GAMESYS_Unk6) {
		if (!playData->isDemoFlag(DEMO_Reunite_Captains)) {
			return false;
		}

		f32 dir = m_angle;
		if (dir < -10.0f) {
			dir = navi->getFaceDir();
		}

		f32 zRot = -pikmin2_cosf(dir);
		f32 xRot = -pikmin2_sinf(dir);

		f32 knockBack = (m_knockback * 0.1f) * randFloat() + m_knockback;

		Vector3f direction(xRot * knockBack, randFloat() * 50.0f + 100.0f, zRot * knockBack);
		NaviFlickArg flickArg(m_creature, direction, m_intensity);
		navi->transit(NSID_Flick, &flickArg);
		return true;
	}
}

/*
 * --INFO--
 * Address:	801D83B4
 * Size:	0000F4
 */
bool InteractPress::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & GAMESYS_Unk6) {
		bool alive = navi->isAlive();
		if (!alive) {
			return false;
		}

		NaviState* naviState = navi->m_currentState;

		if (!naviState->invincible() && naviState->pressable()) {
			navi->addDamage(m_damage, true);
			navi->m_fsm->transit(navi, NSID_Pressed, nullptr);
		} else {
			return false;
		}

		return true;
	}
}

/*
 * --INFO--
 * Address:	801D84A8
 * Size:	0000B8
 */
bool InteractFire::actNavi(Game::Navi* navi)
{
	if (playData->m_olimarData[0].hasItem(OlimarData::ODII_ForgedCourage)) {
		return false;
	}

	if (gameSystem && gameSystem->isVersusMode()) {
		return false;
	}

	if (navi->invincible()) {
		return false;
	}

	navi->m_soundObj->startSound(PSSE_PL_ORIMA_FIRED, 0);
	navi->startDamage(m_damage);
	return true;
}

/*
 * --INFO--
 * Address:	801D8560
 * Size:	000090
 */
bool InteractBubble::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & GAMESYS_Unk6) {
		if (gameSystem && gameSystem->isVersusMode()) {
			return false;
		}

		if (navi->invincible()) {
			return false;
		}

		navi->startDamage(m_damage);
		return true;
	}
}

/*
 * --INFO--
 * Address:	801D85F0
 * Size:	000008
 */
bool InteractGas::actNavi(Game::Navi*) { return false; }

/*
 * --INFO--
 * Address:	801D85F8
 * Size:	00005C
 */
bool InteractBury::actNavi(Game::Navi* navi)
{
	if (navi->invincible()) {
		return false;
	}

	navi->startDamage(m_damage);
	return true;
}

/*
 * --INFO--
 * Address:	801D8654
 * Size:	000358
 * Whistling another navigator
 */
bool InteractFue::actNavi(Game::Navi* navi)
{
	NaviState* naviState = navi->m_currentState;

	if (!navi->isAlive()) {
		return false;
	}

	if (navi->m_controller1) {
		return false;
	}

	if (!naviState->callable()) {
		return false;
	}

	if (!gameSystem->m_mode && !gameSystem->m_timeMgr->m_dayCount && !playData->isDemoFlag(DEMO_Reunite_Captains)) {
		return false;
	}

	if (navi->getStateID() != NSID_Follow) {
		FollowStateArg followArg;
		followArg._00 = _09;
		navi->transit(NSID_Follow, &followArg);

		Navi* otherNavi = naviMgr->getAt(1 - navi->m_naviIndex);
		InteractFue fue(otherNavi, true, true);

		Iterator<Creature> cellIt((Container<Creature>*)navi->m_cPlateMgr);

		Creature* entities[110];

		int index = 0;
		CI_LOOP(cellIt) { entities[index++] = *cellIt; }

		for (int i = 0; i < index; i++) {
			entities[i]->stimulate(fue);
		}
	}

	return true;
}

/*
 * --INFO--
 * Address:	801D89AC
 * Size:	000074
 */
bool InteractKaisan::actNavi(Game::Navi* navi)
{
	if (navi->m_controller1) {
		return false;
	}

	if (navi->getStateID() == NSID_Follow) {
		navi->transit(NSID_Walk, nullptr);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	801D8A20
 * Size:	00009C
 */
bool InteractAttack::actNavi(Game::Navi* navi)
{
	if (!playData->isDemoFlag(DEMO_Reunite_Captains)) {
		return false;
	}

	if (navi->invincible()) {
		return false;
	}

	if (m_creature->isPiki()) {
		m_damage = 0.0f;
	}

	navi->startDamage(m_damage);
	return true;
}
} // namespace Game
