#include "types.h"
#include "Dolphin/rand.h"
#include "Game/VsGame.h"
#include "efx2d/Arg.h"
#include "efx2d/T2DSprayset.h"
#include "Light.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "PSSystem/PSSystemIF.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Stickers.h"
#include "Game/pelletMgr.h"
#include "Game/GameConfig.h"
#include "Game/AIConstants.h"
#include "nans.h"

namespace Game {
namespace VsGame {

static const int unusedVsCardArray[] = { 0, 0, 0 };
static const char unusedVsCardName[] = "vsCardMgr";

namespace {
// this is just straight up never used lol
static const CardData cardData[12] = {
	{ "pikmin_5.bti", 1 },   { "pikmin_10.bti", 1 }, { "all_flower.bti", 1 },   { "pikmin_xlu.bti", 1 },
	{ "dope_black.bti", 1 }, { "dope_red.bti", 1 },  { "reset_bedama.bti", 1 }, { "teki_hanachirashi", 1 },
	{ "teki_sarai.bti", 1 }, { "teki_rock.bti", 1 }, { "teki_tank.bti", 1 },    { 0, 0 },
};

static const char* tex_names[] = {
	"pikmin_5.bti",   "pikmin_10.bti", "all_flower.bti",
	"pikmin_xlu.bti", // ghost powerup
	"dope_black.bti", "dope_red.bti",  "reset_bedama.bti",     "teki_hanachirashi.bti",
	"teki_sarai.bti", "teki_rock.bti", "teki_bombotakara.bti", "teki_tank.bti",
};
} // namespace

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
CardSelector::CardSelector()
{
	for (int i = 0; i < CARD_ID_COUNT; i++) {
		mValues[i] = 100;
	}
	mValues[RESET_BEDAMA] = 30;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
int VsGame::CardSelector::getTotalWeight()
{
	int sum = 0;
	for (int i = 0; i < CARD_ID_COUNT; i++) {
		sum += mValues[i];
	}
	return sum;
}

/**
 * @note Address: N/A
 * @note Size: 0x274
 */
int VsGame::CardSelector::selectCard()
{
	f32 fullCumulative = 0.0f;
	int arraySum       = getTotalWeight();
	for (int i = 0; i < CARD_ID_COUNT; i++) {
		fullCumulative += (f32)mValues[i] / arraySum;
		if (mValues[i] == 0) {
			mCumulative[i] = -99.9f;
		} else {
			mCumulative[i] = fullCumulative;
		}
	}
	f32 value = randFloat();
	for (int i = 0; i < CARD_ID_COUNT; i++) {
		if (value < mCumulative[i])
			return i;
	}
	return (int)(randFloat() * CARD_ID_COUNT);
}

/**
 * @note Address: 0x8023550C
 * @note Size: 0x148
 */
VsGame::CardMgr::CardMgr(Game::VsGameSection* section, Game::VsGame::TekiMgr* tekiMgr)
{
	mSection                      = section;
	mTekiMgr                      = tekiMgr;
	mSlotNum                      = 0;
	mSlotTextures                 = nullptr;
	mSlotMachines[0].mPlayerIndex = 0;
	mSlotMachines[1].mPlayerIndex = 1;
	mSlotMachines[0].mCardMgr     = this;
	mSlotMachines[1].mCardMgr     = this;
	mRollSoundMinSpeed            = 40.0f;

	initDraw();

	JUtility::TColor color(0xFF, 0xFF, 0xFF, 0xFF);
	mLightObj = new LightObj("test", GX_LIGHT0, TYPE_Spot, color);

	mLightObj->mElevation     = Vector3f(0.0f, 0.0f, -1.0f);
	mLightObj->mPosition      = Vector3f(555.0f, -250.0f, 4500.0f);
	mLightObj->mCutoffAngle   = 40.0f;
	mLightObj->mColor         = Color4(0xFF, 0xFF, 0xFF, 0xFF);
	mLightObj->mRefBrightness = 0.98f;
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void VsGame::CardMgr::clear()
{
	mSlotMachines[0].clear();
	mSlotMachines[1].clear();
}

void VsGame::CardMgr::loadResource()
{
	JKRArchive* arch = JKRMountArchive("user/Kando/vstex/arc.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);

	JUT_ASSERTLINE(258, arch, "vstex/arc.szs not found !\n");

	mSlotNum      = 12;
	mSlotTextures = new JUTTexture*[mSlotNum];

	for (int i = 0; i < mSlotNum; i++) {
		ResTIMG* img = (ResTIMG*)arch->getResource(tex_names[i]);
		if (img) {
			mSlotTextures[i] = new JUTTexture(img);
		} else {
			JUT_PANICLINE(269, "%s not found !\n", tex_names[i]);
		}
	}

	ResTIMG* pressY = (ResTIMG*)arch->getResource("press_y.bti");
	JUT_ASSERTLINE(274, pressY, "press_y.bti");
	mYButtonTexture = new JUTTexture(pressY);

	ResTIMG* lampOn = (ResTIMG*)arch->getResource("lamp_on.bti");
	JUT_ASSERTLINE(279, lampOn, "lamp_on.bti");
	mLampOnTexture = new JUTTexture(lampOn);

	ResTIMG* lampOff = (ResTIMG*)arch->getResource("lamp_off.bti");
	JUT_ASSERTLINE(284, lampOff, "lamp_off.bti");
	mLampOffTexture = new JUTTexture(lampOff);

	ResTIMG* highlight = (ResTIMG*)arch->getResource("hl.bti");
	JUT_ASSERTLINE(289, highlight, "hl.bti");
	mHighlightTexture = new JUTTexture(highlight);
}

/**
 * @note Address: 0x80235964
 * @note Size: 0x48
 */
void VsGame::CardMgr::update()
{
	if (!gameSystem->paused()) {
		mSlotMachines[0].update();
		mSlotMachines[1].update();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
Vector3f VsGame::CardMgr::getSlotOrigin(int playerIdx)
{
	return (playerIdx == 0) ? Vector3f(515.0f, 115.0f, 0.0f) : Vector3f(515.0f, 315.0f, 0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
Vector2f VsGame::CardMgr::getLampPos(int user, int cherries)
{
	Vector2f lampOrigin;
	if (user == 0) {
		lampOrigin = Vector2f(515.0f, 115.0f);
	} else {
		lampOrigin = Vector2f(515.0f, 315.0f);
	}

	lampOrigin -= Vector2f(80.0f, 22.4f);
	f32 lampWidth = 8.0f;
	lampOrigin.x += cherries * lampWidth * 2.0f;
	return lampOrigin;
}

/**
 * @note Address: 0x802359AC
 * @note Size: 0xA4
 */
void VsGame::CardMgr::draw(Graphics& gfx)
{
	if (!moviePlayer->isFlag(MVP_IsActive)) {
		Vector3f olimarSlotPos = getSlotOrigin(0);
		Vector3f louieSlotPos  = getSlotOrigin(1);
		if (mSlotMachines[0].mSpinState) {
			drawSlot(gfx, olimarSlotPos, mSlotMachines[0]);
		}
		if (mSlotMachines[1].mSpinState) {
			drawSlot(gfx, louieSlotPos, mSlotMachines[1]);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
Vector3f VsGame::CardMgr::getPlayerCard(int user) { }

/**
 * @note Address: 0x80235A50
 * @note Size: 0x30
 */
void VsGame::CardMgr::stopSlot(int idx) { mSlotMachines[idx].startStop(); }

/**
 * @note Address: 0x80235A80
 * @note Size: 0xD8C
 */
bool VsGame::CardMgr::usePlayerCard(int user, Game::VsGame::TekiMgr* tekiMgr)
{
	tekiMgr    = mTekiMgr;
	int slotID = mSlotMachines[user].mSlotID;

	bool used = true;

	if (mSlotMachines[user]._18) {
		return false;
	}

	switch (slotID) {
	case UNRESOLVED: {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
		used = false;
		break;
	}
	case PIKMIN_5: {
		Onyon* onyon = ItemOnyon::mgr->getOnyon(1 - user);
		if (onyon) {
			for (int i = 0; i < 5; i++) {
				onyon->vsChargePikmin();
			}
		}
		break;
	}
	case PIKMIN_10: {
		Onyon* onyon = ItemOnyon::mgr->getOnyon(1 - user);
		if (onyon) {
			for (int i = 0; i < 10; i++) {
				onyon->vsChargePikmin();
			}
		}
		break;
	}
	case DOPE_BLACK: {
		Navi* navi = naviMgr->getAt(user);
		if (navi) {
			navi->incDopeCount(SPRAY_TYPE_BITTER);
		}
		break;
	}
	case DOPE_RED: {
		Navi* navi = naviMgr->getAt(user);
		if (navi) {
			navi->incDopeCount(SPRAY_TYPE_SPICY);
		}
		break;
	}
	case PIKMIN_XLU: {
		Navi* navi = naviMgr->getAt(user);
		if (navi && mSection->mGhostIconTimers[user] <= 0.0f) {
			efx::TNaviEffect* naviEffect = navi->mEffectsObj;
			if (!naviEffect->isFlag(efx::NAVIFX_IsSaved)) {
				naviEffect->saveFlags();
			}
			naviEffect->mLight.forceKill();
			naviEffect->mLightAct.forceKill();
			naviEffect->mDamage.forceKill();
			naviEffect->killHamonA_();
			naviEffect->killHamonB_();
			naviEffect->killLight_();
			naviEffect->killLightAct_();
			naviEffect->killCursor_();
			naviEffect->killFueact_();
		}
		mSection->mGhostIconTimers[user] = 60.0f;
		break;
	}
	case ALL_FLOWER: {
		Iterator<Piki> IPiki = pikiMgr;
		CI_LOOP(IPiki)
		{
			Piki* piki = *IPiki;
			if (piki->getKind() == (1 - user) && piki->isAlive() && piki->getHappa() != Flower) {
				piki->changeHappa(Flower);
				Vector3f vec = piki->mLeafStemOffset;
				efx::TPkGlow2 particle;
				efx::Arg arg = vec;
				particle.create(&arg);
				piki->startSound(PSSE_PK_FLOWER_VOICE, true);
			}
		}
		break;
	}
	case RESET_BEDAMA: {
		int color      = 1 - user;
		Onyon* onyon   = ItemOnyon::mgr->getOnyon(color);
		Pellet* bedama = nullptr;
		PelletIterator IPellet;

		CI_LOOP(IPellet)
		{
			Pellet* pellet = *IPellet;
			if (color == pellet->getBedamaColor()) {
				bedama = pellet;
				break;
			}
		}
		if (bedama && bedama->isAlive()) {
			{ // needed for stickers to call dtor
				Stickers stickers            = bedama;
				Iterator<Creature> ICreature = &stickers;
				CI_LOOP(ICreature) { (*ICreature)->endStick(); }
			}
			Vector3f onyonPos  = onyon->getFlagSetPos();
			Vector3f bedamaPos = bedama->getPosition();
			if (_distanceXZflag(bedamaPos, onyonPos) > 30.0f) {
				onyonPos.y += bedama->getCylinderHeight() * 0.5f;
				PelletReturnArg end = onyonPos;

				bedama->mPelletSM->transit(bedama, PELSTATE_Return, &end);
			}
		}
		break;
	}
	case TEKI_HANACHIRASHI:
	case TEKI_SARAI: {
		int tekiID   = slotID - 7;
		Onyon* onyon = ItemOnyon::mgr->getOnyon(user);
		Vector3f onyonPos;
		if (onyon) {
			onyonPos = onyon->getPosition();

			f32 faceDir = onyon->getFaceDir();

			f32 radius = 50.0f + randFloat() * 100.0f;
			f32 angle  = randFloat() * TAU;
			f32 height = 0.0f;

			Vector3f spawnOffset = Vector3f(radius * sinf(angle), height, radius * cosf(angle));

			onyonPos += spawnOffset;
		}
		tekiMgr->birth(tekiID, onyonPos, true);
		break;
	}
	case TEKI_ROCK:
	case TEKI_BOMBOTAKRA: {

		f32 radiusVariance = 1.0f;
		f32 enemyHeight    = 0.0f;
		int num;
		if (slotID == TEKI_ROCK) {
			num = 8;
		} else {
			num            = 1;
			radiusVariance = 0.0f;
			enemyHeight    = 90.0f;
		}

		int tekiID = slotID - 7;
		Navi* navi = naviMgr->getAt(1 - user);
		for (int i = 0; i < num; i++) {
			Vector3f spawnNaviPos;
			if (navi) {
				spawnNaviPos = navi->getPosition();

				f32 faceDir = navi->getFaceDir();
				f32 radius  = randFloat() * 150.0f * radiusVariance;

				f32 angle  = randFloat() * TAU;
				f32 height = enemyHeight;

				Vector3f spawnOffset = Vector3f(radius * sinf(angle), height, radius * cosf(angle));

				spawnNaviPos += spawnOffset;
			}
			tekiMgr->birth(tekiID, spawnNaviPos, true);
		}
		break;
	}
	case TEKI_TANK: {
		u32 TekiID = (!user) ? 4 : 5;

		Onyon* onyon = ItemOnyon::mgr->getOnyon(user);
		Vector3f onyonPos;
		if (onyon) {

			onyonPos = onyon->getPosition();

			f32 faceDir = onyon->getFaceDir();

			f32 radius = randFloat() * 100.0f + 50.0f;
			f32 angle  = randFloat() * TAU;
			f32 height = 0.0f;

			angle = faceDir;

			Vector3f spawnOffset = Vector3f(radius * sinf(angle), height, radius * cosf(angle));

			onyonPos += spawnOffset;
		}
		tekiMgr->birth(TekiID, onyonPos, true);
		break;
	}
	}

	if (used) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_2PSLOT_GO, 0);
		if (mSlotMachines[user].mCherryStock > 0) {
			mSlotMachines[user].mCherryStock--;
			mSlotMachines[user].start();
			mSlotMachines[user]._18 = 0;
		} else {
			mSlotMachines[user].mSpinSpeed   = 0.0f;
			mSlotMachines[user].mSpinAccel   = 0.0f;
			mSlotMachines[user].mAppearState = 2;
			mSlotMachines[user].mSlotID      = UNRESOLVED;
			mSlotMachines[user].startZoomUse();
			mSlotMachines[user]._18 = 1;
		}
	}

	return used;
}

/**
 * @note Address: 0x8023680C
 * @note Size: 0x1BC
 */
void VsGame::CardMgr::gotPlayerCard(int user)
{

	if (mSlotMachines[user].mSpinState == 0) {
		mSlotMachines[user].start();
		mSlotMachines[user]._18 = 0;
		return;
	}

	if (mSlotMachines[user].mCherryStock < 4) {
		Vector2f lampPos = getLampPos(user, mSlotMachines[user].mCherryStock);

		JUtility::TColor color1(0xff, 0x96, 0x64, 0xff);
		JUtility::TColor color2(0xff, 0x46, 0x46, 0xff);

		efx2d::ArgScaleColorColor spraysetArg(lampPos, 0.4f, color1, color2);
		efx2d::T2DSprayset_forVS vsSpraySet;

		vsSpraySet.create(&spraysetArg);
		PSSystem::spSysIF->playSystemSe(PSSE_SY_2P_SLOT_STOC, 0);
		mSlotMachines[user].mCherryStock++;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void VsGame::CardMgr::clearPlayerCard()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802369C8
 * @note Size: 0x58
 */
void VsGame::CardMgr::SlotMachine::clear()
{
	mSpinTimer     = 0.0f;
	mSpinState     = 0;
	mSpinAccel     = 0.0f;
	mSpinAngle     = 0.0f;
	mSpinSpeed     = 0.0f;
	mPrevCardIndex = 0;
	mCurrCardIndex = 0;
	mSpinProgress  = 0.0f;
	_4C            = UNRESOLVED;
	mSlotID        = UNRESOLVED;
	mAppearValue   = 100.0f;
	mAppearState   = 3;
	_38            = 0;
	mCherryStock   = 0;
	_51            = 0;
}

/**
 * @note Address: 0x80236A20
 * @note Size: 0x5F0
 */
void VsGame::CardMgr::SlotMachine::start()
{
	_51 = false;

	CardSelector selector;

	int pikminCounts[2];
	f32 redBlueScoreCount = mCardMgr->mSection->mRedBlueScore[mPlayerIndex];

	int dopeCount0;
	int dopeCount1;

	f32 scoreCount0 = mCardMgr->mSection->mYellowScore[mPlayerIndex];
	f32 scoreCount1 = mCardMgr->mSection->mYellowScore[1 - mPlayerIndex];

	pikminCounts[NAVIID_Olimar] = GameStat::getMapPikmins(Red);
	pikminCounts[NAVIID_Louie]  = GameStat::getMapPikmins(Blue);

	if (pikminCounts[mPlayerIndex] < 4) {
		selector.mValues[PIKMIN_5]  = 200;
		selector.mValues[PIKMIN_10] = 150;
	}

	dopeCount0 = mCardMgr->mSection->getGetDopeCount(mPlayerIndex, 0);
	dopeCount1 = mCardMgr->mSection->getGetDopeCount(1 - mPlayerIndex, 0);

	if (dopeCount0 > dopeCount1 + 2) {
		selector.mValues[DOPE_RED] /= 2;
	}

	dopeCount0 = mCardMgr->mSection->getGetDopeCount(mPlayerIndex, 1);
	dopeCount1 = mCardMgr->mSection->getGetDopeCount(1 - mPlayerIndex, 1);

	if (dopeCount0 > dopeCount1 + 2) {
		selector.mValues[DOPE_BLACK] /= 2;
	}

	if (mPrevSelected != UNRESOLVED) {
		selector.mValues[mPrevSelected] = 10;
	}

	if (mCardMgr->mSection->mGhostIconTimers[mPlayerIndex] > 5.0f) {
		selector.mValues[PIKMIN_XLU] = 0;
	}

	int total = selector.getTotalWeight();

	f32 resetBedamaProb = 0.0f;

	if (redBlueScoreCount < 0.2f) {

	} else if (redBlueScoreCount < 0.4f) {
		resetBedamaProb = 0.2f;
	} else if (redBlueScoreCount < 0.7f) {
		resetBedamaProb = 0.5f;
	} else {
		resetBedamaProb = 0.8f;
	}

	if (scoreCount0 - scoreCount1 >= 4.0f) {
		resetBedamaProb *= 0.7f;
	}

	if (resetBedamaProb > 0.0f) {
		selector.mValues[RESET_BEDAMA] = total * resetBedamaProb;
	}

	mSelectedSlot = selector.selectCard();

	mPrevSelected = mSelectedSlot;
	_28           = randFloat();
	mSlotID       = UNRESOLVED;
	mAppearState  = 0;

	PSSystem::spSysIF->playSystemSe(PSSE_SY_2PSLOT_APPEAR, 0);
	switch (mSpinState) {
	case SPIN_END:
	case SPIN_UNSTARTED:
		mSpinSpeed = 72.0f * (PI / 180.0f);
		mSpinState = SPIN_WAIT_START;
		mSpinAccel = -TAU;
		return;
	case SPIN_WAIT_START:
	case SPIN_START:
		break;
	default:
		mSpinState = SPIN_START;
		return;
	}
}

/**
 * @note Address: 0x80237010
 * @note Size: 0x50
 */
void VsGame::CardMgr::SlotMachine::startStop()
{
	if (mSpinTimer > 0.0f) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
	}
	mSpinTimer = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
bool VsGame::CardMgr::SlotMachine::equalTo(int slot)
{
	int nextCardBottom = getNextCard(slot);

	f32 distanceToBottom = FABS(nextCardBottom - mSpinProgress);

	int nextCardTop = nextCardBottom + CARD_ID_COUNT;

	f32 distanceToTop = FABS(nextCardTop - mSpinProgress);

	f32 distance = distanceToBottom;
	if (distanceToTop < distanceToBottom) {
		distance = distanceToTop;
	}

	return (distance < 0.07f && distance >= 0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
bool CardMgr::SlotMachine::goodPlace() { }

/**
 * @note Address: 0x80237060
 * @note Size: 0x7B8
 */
void VsGame::CardMgr::SlotMachine::update()
{
	updateAppear();
	f32 deltaTime = sys->mDeltaTime;
	switch (mSpinState) { // await spin stop
	case SPIN_WAIT_START:
		mSpinAccel = -TAU;
		if (mSpinSpeed < 0.0f) {
			mSpinState = SPIN_START;
			mSpinTimer = 1.0f;
		}
		break;
	case SPIN_START:
		if (mCherryStock >= 1) { // start spin
			mSpinAccel = -TAU * 2.0f;
		} else {
			mSpinAccel = -TAU;
		}
		if (gGameConfig.mParms.mVsY.mData == 1) {
			mSpinAccel *= 3.0f;
		}
		if (mSpinSpeed < -TAU * 2.0f) {
			mSpinSpeed = -TAU * 2.0f;
			mSpinState = SPIN_WAIT_MAX_SPEED;
			if (gGameConfig.mParms.mVsY.mData == 0) {
				mSpinTimer = randFloat() * 0.4f + 0.7f;
				if (mCherryStock >= 1) {
					mSpinTimer = 0.0f;
				}
			} else if (mSpinTimer > 0.0f) {
				mSpinTimer = randFloat() * 0.4f + 2.7f;
			}
		}
		break;
	case SPIN_WAIT_MAX_SPEED: // await spining max speed
		mSpinSpeed = -TAU * 2.0f;
		mSpinAccel = 0.0f;
		mSpinTimer -= deltaTime;
		if (mSpinTimer <= 0.0f) {
			if (getNextCard(mSelectedSlot) == mCurrCardIndex) {
				mSpinState = SPIN_DECELERATE;
				mSpinAccel = TAU; // nice
			}
		}
		break;
	case SPIN_DECELERATE: // begin decelerate
		mSpinAccel = TAU;
		if (mCherryStock >= 1) {
			if (mSpinSpeed > -0.44f * PI) {
				mSpinAccel = 0.0f;
				mSpinState = SPIN_DECELERATE_END;
				_2C        = 0.0f;
			}
		} else if (mSpinSpeed > -0.44f * PI) {
			mSpinAccel = 0.0f;
			mSpinState = SPIN_DECELERATE_END;
			_2C        = 0.0f;
		}
		break;
	case SPIN_DECELERATE_END:                                              // on decelerate end
		_2C += deltaTime;                                                  // wait 3 seconds
		if (_2C >= 3.0f && FABS(mSpinProgress - mCurrCardIndex) < 0.07f) { // can jump to previous card
			_6C           = 0.0f;
			_68           = 0.0f;
			mSelectedSlot = (CARD_ID_COUNT + mCurrCardIndex - 1) % CARD_ID_COUNT;
			_2C           = 0.0f;
			mSpinAccel    = 0.0f;
			mSpinSpeed    = 0.0f;
			mSpinState    = SPIN_END;
			_4C           = mSelectedSlot;
			mSpinTimer    = 0.8f;
			startZoomIn();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		} else if (equalTo(mSelectedSlot)) { // can jump to this card
			_6C        = 0.0f;
			_68        = 0.0f;
			mSpinSpeed = 0.0f;
			mSpinAccel = 0.0f;
			mSpinState = SPIN_END;
			_4C        = mSelectedSlot;
			mSpinTimer = 0.8f;
			startZoomIn();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		}
		break;
	case SPIN_DOWN_TO_CARD:
		mSpinTimer -= deltaTime;
		if (mSpinTimer <= 0.0f) {
			mSpinSpeed = 0.0f;
			mSpinAccel = -TAU;
			mSpinState = SPIN_WAIT_CARD_ROLL;
		}
		break;
	case SPIN_WAIT_CARD_STOP:
		if (equalTo(mSelectedSlot)) {
			mSpinSpeed = 0.0f;
			mSpinAccel = 0.0f;
			mSpinState = SPIN_END;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		}
		break;
	case SPIN_UP_TO_CARD:
		mSpinTimer -= deltaTime;
		if (mSpinTimer <= 0.0f) {
			mSpinSpeed = 0.0f;
			mSpinAccel = TAU;
			mSpinState = SPIN_WAIT_CARD_STOP;
		}
		break;
	case SPIN_WAIT_CARD_ROLL:
		if (equalTo(mSelectedSlot)) {
			mSpinSpeed = 0.0f;
			mSpinAccel = 0.0f;
			mSpinState = SPIN_END;
			mSpinTimer = 1.2f;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		}
		break;
	case SPIN_END: // on roll end
		_51        = true;
		mSlotID    = mSelectedSlot;
		mSpinSpeed = 0.0f;
		mSpinAccel = 0.0f;
		if (gGameConfig.mParms.mVsY.mData == 1) {
			mSpinTimer -= sys->mDeltaTime;
			if (mSpinTimer <= 0.0f) {
				mCardMgr->usePlayerCard(mPlayerIndex, nullptr); // nice tekimgr dumbass
			}
		}
		break;
	}
	mSpinAngle += mSpinSpeed * deltaTime;
	if (mSpinAngle > TAU) {
		mSpinAngle -= TAU;
	}
	if (mSpinAngle < 0.0f) {
		mSpinAngle += TAU;
	}
	mSpinSpeed += mSpinAccel * deltaTime;
	int prevIndex  = mCurrCardIndex;
	mPrevCardIndex = mCurrCardIndex;
	f32 loopValue  = TAU / CARD_ID_COUNT;
	mSpinProgress  = roundAng(mSpinAngle + loopValue) / loopValue;
	mCurrCardIndex = (int)mSpinProgress;
	if (mSpinState != 10 && mSpinState != 0) {
		if (mSpinSpeed > mCardMgr->mRollSoundMinSpeed) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_2PSLOT_ROLL, 0);
		} else if (prevIndex != mCurrCardIndex) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
	}
}

/**
 * @note Address: 0x80237818
 * @note Size: 0x150
 */
void VsGame::CardMgr::SlotMachine::updateAppear()
{
	switch (mAppearState) {
	case APPEAR_LEAVE:
		mAppearValue -= sys->mDeltaTime * 300.0f;
		if (mAppearValue <= 0.0f) {
			mAppearValue = 0.0f;
			mAppearState = APPEAR_AWAIT;
		}
		break;
	case APPEAR_AWAIT:
		mAppearValue = 0.0f;
		break;
	case APPEAR_ENTER:
		mAppearValue += sys->mDeltaTime * 300.0f;
		if (mAppearValue >= 150.0f) {
			mAppearValue = 150.0f;
			if (mCherryStock > 0) {
				mCherryStock -= 1;
				start();
				_18 = 0;
			} else {
				mAppearState = APPEAR_RESET;
			}
		}
		break;
	case APPEAR_RESET:
		mSpinTimer     = 0.0f;
		mSpinState     = SPIN_UNSTARTED;
		mSpinAccel     = 0.0f;
		mSpinAngle     = 0.0f;
		mSpinSpeed     = 0.0f;
		mPrevCardIndex = 0;
		mCurrCardIndex = 0;
		mSpinProgress  = 0.0f;
		_4C            = UNRESOLVED;
		mSlotID        = UNRESOLVED;
		mAppearValue   = 100.0f;
		mAppearState   = APPEAR_RESET;
		_38            = 0;
		mCherryStock   = 0;
		_51            = false;
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
JUTTexture* VsGame::CardMgr::getTexture(eCardType card)
{
	P2ASSERTLINE(999, card < mSlotNum); // line number made up, needs assert for correct rodata
	return mSlotTextures[card];
}

/**
 * @note Address: 0x80237968
 * @note Size: 0x354
 */

void VsGame::CardMgr::initDraw()
{
	int countA  = CARD_ID_COUNT;
	int countB  = 64;
	mPointCount = countA * countB;
	mVertices   = new Vector3f[mPointCount];
	mNormals    = new Vector3f[mPointCount];
	f32 phi     = TAU / countA;
	f32 s       = sinf(phi * 0.5f);
	f32 x, y, z;

	x = 20.0f;

	for (int i = 0; i < countA * countB / 2; i++) {
		f32 theta = i * TAU / countA / (countB / 2);

		z = x / s * cosf(theta);
		y = x / s * sinf(theta);

		mVertices[2 * i] = Vector3f(-x, y, z);
		mNormals[2 * i]  = Vector3f(0.0f, sinf(theta), cosf(theta));

		mVertices[2 * i + 1] = Vector3f(x, y, z);
		mNormals[2 * i + 1]  = Vector3f(0.0f, sinf(theta), cosf(theta));
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void VsGame::CardMgr::vert(int id) { GXPosition3f32(mVertices[id].x, mVertices[id].y, mVertices[id].z); }

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void VsGame::CardMgr::norm(int id) { GXPosition3f32(mNormals[id].x, mNormals[id].y, mNormals[id].z); }

/**
 * @note Address: 0x80237CBC
 * @note Size: 0xE4C
 */
void VsGame::CardMgr::drawSlot(Graphics& gfx, Vector3f& place, SlotMachine& machine)
{

	f32 spinAngle = machine.mSpinAngle;
	Vector3f pos  = place;
	gfx.initPrimDraw(0);
	gfx.mDrawColor = Color4(250, 250, 250, 255);
	GXSetLineWidth(40, GX_TO_ZERO);
	gfx.mOrthoGraph.setPort();
	Matrixf* matrix = (Matrixf*)&gfx.mOrthoGraph.mPosMtx;
	Matrixf mtxCopy1;
	Matrixf mtxCopy2;
	Vector3f vec = Vector3f(spinAngle + PI / CARD_ID_COUNT, 0.0f, 0.0f);
	matrix->makeTR(pos, vec);
	PSMTXConcat(*(Mtx*)matrix, *(Mtx*)&mtxCopy1, *(Mtx*)&mtxCopy2);
	GXLoadPosMtxImm(*(Mtx*)&mtxCopy2, 0);
	GXLoadNrmMtxImm(*(Mtx*)&mtxCopy2, 0);
	GXSetNumTevStages(1);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_TEXC, GX_CC_RASC, GX_CC_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_TEXA, GX_CA_RASA, GX_CA_ZERO);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetNumChans(1);
	GXSetChanCtrl(GX_COLOR0, GX_TRUE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT0, GX_DF_CLAMP, GX_AF_SPOT);
	GXSetChanCtrl(GX_ALPHA0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT0, GX_DF_NONE, GX_AF_NONE);

	// I didn't even know you could do this lmao
	GXSetChanAmbColor(GX_COLOR0A0, (GXColor) { 0x14, 0x14, 0x14, 0x80 });
	GXSetChanMatColor(GX_COLOR0A0, (GXColor) { 0xff, 0xff, 0xff, 0xca });

	mLightObj->update();
	mLightObj->set(*matrix);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_NRM, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, GX_POS_XY, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetColorUpdate(1);
	GXSetZMode(0, GX_LESS, 0);
	GXSetZMode(1, GX_LESS, 1);
	GXSetCurrentMtx(nullptr);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEXCOORD0, 0x3c, 0, 0x7d);
	GXSetCullMode(GX_CULL_BACK);

	int cardNum = CARD_ID_COUNT;

	// r21 - this

	// r29 - i ?

	for (int i = 0; i < CARD_ID_COUNT; i++) {
		mSlotTextures[i]->load(GX_TEXMAP0);
		int vectorsPerCard = 0x100 / CARD_ID_COUNT;
		for (int j = 0; j < 0x40; j += 0x4) {

			GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 0x4);

			vert(mPointCount / i - j * mPointCount);
			norm(mPointCount / i - j * mPointCount);
			GXTexCoord2f32(0.0f, 0.0f);

			vert(mPointCount / i - j * mPointCount);
			norm(mPointCount / i - j * mPointCount);
			GXTexCoord2f32(0.0f, 0.0f);

			vert(mPointCount / i - j * mPointCount);
			norm(mPointCount / i - j * mPointCount);
			GXTexCoord2f32(0.0f, 0.0f);

			vert(mPointCount / i - j * mPointCount);
			norm(mPointCount / i - j * mPointCount);
			GXTexCoord2f32(0.0f, 0.0f);
		}
	}

	if (machine._38 == 1) {
		machine.updateZoomIn();
	} else if (machine._38 == 2) {
		machine.updateZoomUse();
	}

	Vector3f newvec;

	if (machine._38 != 0 && machine._51) {
		newvec = pos;
		if (gGameConfig.mParms.mVsY.mData != 0) {
			newvec = Vector3f(place.z, place.y, machine.mAppearValue / 2 + place.x);
		}

		GXSetChanMatColor(GX_COLOR0A0, (JUtility::TColor)0xffffffff);
		GXSetZMode(0, GX_LESS, 0);
		Matrixf matrix2;
		Vector3f anotherVec = Vector3f(0.0f, 0.0f, machine.mRotationZ);
		matrix2.makeTR(newvec, anotherVec);
		Matrixf* anotherMtx = new Matrixf;
		PSMTXConcat(*(Mtx*)matrix, *(Mtx*)&matrix2, *(Mtx*)anotherMtx);
		GXLoadPosMtxImm(*(Mtx*)anotherMtx, 0);
		GXLoadNrmMtxImm(*(Mtx*)anotherMtx, 0);
		JUTASSERTBOUNDSLINE(1818, 0, machine._4C, CARD_ID_COUNT, "%d");
		mSlotTextures[machine._4C]->load(GX_TEXMAP0);
		GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
		GXSetNumTevStages(2);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
		GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD1, GX_TEXMAP1, GX_COLOR0A0);
		mHighlightTexture->load(GX_TEXMAP1);
		GXSetNumTexGens(2);
		GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3C, 0x0, 0x7D);
		GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX3X4, GX_TG_TEX1, 0x3C, 0x0, 0x7D);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_NRM, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX1, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, GX_POS_XY, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX1, GX_POS_XYZ, GX_F32, 0);
		GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_C0, GX_CC_CPREV);
		GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
		GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_APREV);
		GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);

		GXSetTevColor(GX_TEVREG1, (JUtility::TColor)0x00000000);

		if (machine._68 > 1.0f) {
			machine._68 -= 1.0f;
		}
		if (machine._6C > 1.0f) {
			machine._6C -= 1.0f;
		}
		machine._68 += sys->mDeltaTime;
		machine._6C += sys->mDeltaTime / 2;

		// this bunch seems good
		f32 pos = machine._44;
		f32 neg = -machine._44;

		GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 0x4);

		f32 z = 0.0f;
		// --------------------------
		GXPosition3f32(neg, neg, z);
		GXPosition2f32(z, z);
		GXPosition3f32(1.0f, z, z);
		GXPosition2f32(machine._68, z);

		GXPosition3f32(pos, neg, z);
		GXPosition2f32(z, z);
		GXPosition3f32(1.0f, 1.0f, z);
		GXPosition2f32(machine._68 + 1.0f, z);

		GXPosition3f32(neg, pos, z);
		GXPosition2f32(z, z);
		GXPosition3f32(1.0f, z, 1.0f);
		GXPosition2f32(machine._68, z);

		GXPosition3f32(pos, pos, z);
		GXPosition2f32(z, z);
		GXPosition3f32(1.0f, 1.0f, 1.0f);
		GXPosition2f32(machine._68 + 1.0f, z);
		// --------------------------

		GXSetNumTevStages(1);
		GXSetNumTexGens(1);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_NRM, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, GX_POS_XY, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);

		if (gGameConfig.mParms.mVsY.mData == 0 && machine._38 != 0 && machine._51) {
			mYButtonTexture->load(GX_TEXMAP0);
			GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 0x4);
		}
	} // end "if (machine._38 != 0 && machine._51)"

	f32 machineY;

	if (machine.mPlayerIndex == 0) {
		machineY = 115.0f;
	} else {
		machineY = 315.0f;
	}

	for (int i = 0; i < 4; i++) { }
}

/**
 * @note Address: 0x80238B0C
 * @note Size: 0x28
 */
void VsGame::CardMgr::SlotMachine::startZoomIn()
{
	_44        = 20.0f;
	mRotationZ = 0.0f;
	_38        = 1;
	mTimer     = 0.0f;
	_50        = 0;
}

/**
 * @note Address: 0x80238B34
 * @note Size: 0x20
 */
void VsGame::CardMgr::SlotMachine::startZoomUse()
{
	mRotationZ = 0.0f;
	_38        = 2;
	mTimer     = 0.0f;
	_48        = 30.0f;
}

/**
 * @note Address: 0x80238B54
 * @note Size: 0x1F0
 */
void VsGame::CardMgr::SlotMachine::updateZoomIn()
{
	if (_50 == 0) {
		mTimer += sys->mDeltaTime * 4.0f;
		_44 = mTimer * 10.0f + 20.0f;
		_48 = 0.0f;
		if (mTimer > 1.0f) {
			mTimer = 0.0f;
			_50    = 1;
		}
	} else {
		mTimer += sys->mDeltaTime;
		if (mTimer > 1.0f) {
			mTimer -= 1.0f;
		}

		_44 = sinf(mTimer * TAU) * 5.0f + 30.0f;
		_48 = sinf(mTimer * TAU * 2.0f) * 5.0f + 30.0f;
	}
	mRotationZ = cosf(mTimer * TAU) * 10.0f * DEG2RAD * PI;
}

/**
 * @note Address: 0x80238D44
 * @note Size: 0x128
 */
void VsGame::CardMgr::SlotMachine::updateZoomUse()
{
	mTimer += sys->mDeltaTime * 3.0f;
	if (mTimer > 1.0f) {
		mTimer -= 1.0f;
	}

	_44        = sinf(mTimer * TAU) * 5.0f + 30.0f;
	_48        = -(mTimer * 30.0f - 30.0f);
	mRotationZ = (cosf(mTimer * TAU) * 5.0f + 5.0f) * 360.0f * DEG2RAD * PI;
}
} // namespace VsGame
} // namespace Game
