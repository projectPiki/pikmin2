#include "og/newScreen/SMenu.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/MapCounter.h"
#include "og/Screen/anime.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "Game/Navi.h"
#include "Game/CameraMgr.h"
#include "Game/Cave/RandMapMgr.h"
#include "Radar.h"
#include "nans.h"

static const u32 padding[] = { 0, 0, 0 };

namespace og {
namespace newScreen {

u64 map_icon_tag[22]
    = { 'oniyon_r', 'oniyon_b', 'oniyon_y', 'piki_r',   'piki__b', 'piki_y',   'piki_bl',  'piki_w',   'piki_fr', 'piki_me', 'kanketu',
        'cave',     'pot',      'luji_bs',  'orima_bs', 'ufo',     'takar_bs', 'takar_bs', 'takar_bs', 'cave',    'comp_c',  'cave' };

/**
 * @note Address: N/A
 * @note Size: 0x228
 */
Game::Navi* getNaviPtr(int index)
{
	Iterator<Game::Navi> iter(Game::naviMgr);
	Game::Navi* navi;
	CI_LOOP(iter)
	{
		navi = (*iter);
		if (navi->isAlive() && (int)navi->mNaviIndex == index) {
			return navi;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8030F6F0
 * @note Size: 0x114
 */
ObjSMenuMap::ObjSMenuMap(char const* name)
{
	mMapPosition           = Vector2f(0.0f);
	mCurrentZoom           = 1.0f;
	mMapAngle              = 0.0f;
	mMapTexScale           = Vector2f(1.0f);
	mMapTextureDimensions  = Vector2f(0.0f);
	mMapBounds             = Vector2f(0.0f);
	_108                   = Vector2f(1.0f);
	mMapRotationOrigin     = Vector2f(0.0f);
	mDisp                  = nullptr;
	mMapCounter            = nullptr;
	mAnimGroup             = nullptr;
	mName                  = name;
	mMapAreaPane           = nullptr;
	_B8                    = 0;
	mIconScreen            = nullptr;
	mRadarMapTexture       = nullptr;
	mIconRootPane          = nullptr;
	mCompassPane           = nullptr;
	mMapTexPane            = nullptr;
	mRadarPaneList         = nullptr;
	mOlimarArrow           = nullptr;
	mOlimarObj             = nullptr;
	mLouieArrow            = nullptr;
	mLouieObj              = nullptr;
	mMapIconNum            = 0;
	mUpdateCaveTex         = false;
	mController            = nullptr;
	mIconScreen2           = nullptr;
	mCompassPic            = nullptr;
	mOlimarGlow            = nullptr;
	mLouieGlow             = nullptr;
	mStartZoom             = 1.0f;
	mZoomCaveTextAlpha     = 255;
	mCaveLabelCount        = 0;
	mCaveLabelTextBoxes[0] = nullptr;
	mCaveLabelTextBoxes[1] = nullptr;
	mCaveLabelTextBoxes[2] = nullptr;
	mCaveLabelTextBoxes[3] = nullptr;
	mCaveLabelTextBoxes[4] = nullptr;
}

/**
 * @note Address: 0x8030F8B0
 * @note Size: 0xC4
 */
ObjSMenuMap::~ObjSMenuMap()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void ObjSMenuMap::calcMapScale()
{
	mMapTexScale.x = mMapBounds.x / mMapTextureDimensions.x;
	mMapTexScale.y = mMapBounds.y / mMapTextureDimensions.y;
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void ObjSMenuMap::calcMapPos(Vector2f pos, Vector2f* outPos)
{
	f32 x    = pos.x;
	f32 y    = pos.y;
	f32 mapX = outPos->x;
	f32 mapY = outPos->y;

	if (mDisp->mInCave) {
		mapX += -0.2f + x * 0.047f;
		mapY += -0.6f + y * 0.047f;
	} else {
		f32 xOffset = mapX;
		if (mDisp->mCourseIndex == og::Screen::DispMemberSMenuMap::COURSE_Last) {
			xOffset = (mMapTextureDimensions.x * 1400.0f) / 4705.6f;
		}
		mapX += 24.5f + (mMapTextureDimensions.x / 2 + x * 0.058f) + xOffset;
		mapY += -8.85f + (mMapTextureDimensions.y / 2 + y * 0.058f);
	}

	outPos->x = mapX;
	outPos->y = mapY;
}

/**
 * @note Address: 0x8030F974
 * @note Size: 0x26C
 */
void ObjSMenuMap::setMapTexture()
{
	mMapTexPane = og::Screen::CopyPictureToPane(mMapAreaPane, mIconRootPane, 0.0f, 0.0f, 'new_map');
	mMapTexPane->setAlpha(255);
	mMapAreaPane->hide();

	if (mDisp->mInCave && mDisp->mActiveNavi) {
		if (Game::Cave::randMapMgr) {
			Game::Cave::randMapMgr->setCaptureOn();
			mRadarMapTexture = Game::Cave::randMapMgr->getRadarMapTexture();
			mMapTexPane->changeTexture(mRadarMapTexture->mTexInfo, 0);
			mUpdateCaveTex = 1;
		} else {
#if defined(VERSION_JP)
			JUT_PANICLINE(384, "SMenuMap : randMapMgr is not found!!!\n");
#else
			JUT_PANICLINE(390, "SMenuMap : randMapMgr is not found!!!\n");
#endif
		}
	} else {
		switch (mDisp->mCourseIndex) {
		case og::Screen::DispMemberSMenuMap::COURSE_Tutorial:
			mMapTexPane->changeTexture("map_tutorial.bti", 0);
			break;
		case og::Screen::DispMemberSMenuMap::COURSE_Forest:
			mMapTexPane->changeTexture("map_forest.bti", 0);
			break;
		case og::Screen::DispMemberSMenuMap::COURSE_Yakushima:
			mMapTexPane->changeTexture("map_yakushima.bti", 0);
			break;
		case og::Screen::DispMemberSMenuMap::COURSE_Last:
			mMapTexPane->changeTexture("map_last.bti", 0);
			break;
		}
	}

	mMapTextureDimensions.x = mMapTexPane->getTexture(0)->getSizeX();
	mMapTextureDimensions.y = mMapTexPane->getTexture(0)->getSizeY();
	mMapBounds.x            = mMapTexPane->getWidth();
	mMapBounds.y            = mMapTexPane->getHeight();
	mMapTexPane->resize(mMapTextureDimensions.x, mMapTextureDimensions.y);

	FORCE_DONT_INLINE;
}

/**
 * @note Address: N/A
 * @note Size: 0x1B0
 */
void ObjSMenuMap::setMapPos()
{
	mMapPosition.x = -mMapTextureDimensions.x / 2;
	mMapPosition.y = -mMapTextureDimensions.y / 2;

	if (mDisp->mActiveNavi) {
		Vector3f aNaviPos = Game::naviMgr->getActiveNavi()->getPosition();
		if (mDisp->mInCave) {
			if (Game::Cave::randMapMgr) {
				f32 x, y;
				Game::Cave::randMapMgr->getPositionOnTex(aNaviPos, x, y);
				mMapPosition.x = -(x + -0.2f);
				mMapPosition.y = -(y + -0.6f);
			}
		} else {
			Vector2f naviPos(aNaviPos.x, aNaviPos.z);
			Vector2f mapPos(0.0f, 0.0f);
			calcMapPos(naviPos, &mapPos);

			mMapPosition.x = -mapPos.x;
			mMapPosition.y = -mapPos.y;
		}
	}
	calcMapScale();
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
void ObjSMenuMap::setCompass()
{
	mCompassPane = mMapCounter->search('Ncompas');
	mCompassPic  = static_cast<J2DPictureEx*>(mIconScreen2->search('compass'));

	J2DPane* iconPane   = mIconScreen->search('compass');
	J2DPane* iconParent = iconPane->getParentPane();
	if (iconParent) {
		iconParent = iconPane->getParentPane();
		iconParent->removeChild(iconPane);
	}
}

/**
 * @note Address: 0x8030FBE0
 * @note Size: 0x1B8
 */
void ObjSMenuMap::tuningIcon()
{
	if (mDisp->mActiveNavi) {
		Game::Navi* navi = Game::naviMgr->getActiveNavi();
		if ((int)navi->mNaviIndex == NAVIID_Olimar) {
			if (mLouieArrow)
				mMapTexPane->appendChild(mLouieArrow);
			if (mOlimarArrow)
				mMapTexPane->appendChild(mOlimarArrow);
		} else {
			if (mOlimarArrow)
				mMapTexPane->appendChild(mOlimarArrow);
			if (mLouieArrow)
				mMapTexPane->appendChild(mLouieArrow);
		}
	}

	for (int i = 0; i < 22; i++) {
		u64 tag        = map_icon_tag[i];
		J2DPane* pane1 = mIconScreen->search(tag);
		if (pane1) {
			pane1->removeFromParent();
		}

		J2DPane* pane2 = mIconScreen2->search(tag);
		if (pane2) {
			pane2->removeFromParent();
		}
	}

	u64 naviTags[3] = { 'orima_l', 'luji_l', 'takara_l' };

	for (int i = 0; i < 3; i++) {
		J2DPane* pane = mIconScreen2->search(naviTags[i]);
		if (pane) {
			pane->removeFromParent();
		}
	}
}

/**
 * @note Address: 0x8030FD98
 * @note Size: 0xC74
 */
void ObjSMenuMap::initMapIcon(JKRArchive* arc)
{
	OSInitFastCast();

	mMapCounter->search('map')->removeFromParent();

	// set up icon screen to manage radar icons
	mIconScreen = new P2DScreen::Mgr_tuning;
	mIconScreen->set("map_icon.blo", 0x40000, arc);

	mIconRootPane = mIconScreen->search('ROOT'); // pane with all radar map icons as children

	J2DPictureEx* pikiIcon = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mIconScreen, 'piki__b'));
	pikiIcon->setWhite(msVal.mTempPikiColorWhite);
	pikiIcon->setBlack(msVal.mTempPikiColorBlack);

	// set up second copy of icons?
	mIconScreen2 = new P2DScreen::Mgr_tuning;
	mIconScreen2->set("map_icon.blo", 0x40000, arc);

	setMapTexture();
	setMapPos();
	setCompass();

	// set up list of all radar map icon panes
	mRadarPaneList = new J2DPane**[MAX_RADAR_COUNT];
	for (int i = 0; i < MAX_RADAR_COUNT; i++) {
		J2DPane** pane = new J2DPane*;
		if (pane) {
			*pane = nullptr;
		}
		mRadarPaneList[i] = pane;
	}

	int count       = 0;
	mCaveLabelCount = 0;
	if (Radar::mgr) {
		// why do we not have an active captain? don't worry about it.
		if (!mDisp->mActiveNavi) {
			Radar::mgr->ogDummpyInit();
		}

		FOREACH_NODE(Radar::Point, Radar::mgr->mActiveRadarNodes.mChild, cPoint)
		{
			int objType = cPoint->mObjType;
#if defined(VERSION_JP)
			JUT_ASSERTLINE(563, objType >= 0 && objType < 22, "Radar type ERR!! (%d)\n", objType);
#else
			JUT_ASSERTLINE(569, objType >= 0 && objType < 22, "Radar type ERR!! (%d)\n", objType);
#endif
			Vector2f cPos = cPoint->getPosition();
			Vector2f newPos(0.0f);
			f32 y  = cPos.y;
			cPos.y = cPos.x;
			cPos.x = y;
			calcMapPos(cPos, &newPos);

			u64 tag             = map_icon_tag[objType];
			J2DPictureEx* cPane = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mIconScreen, tag));
			cPane->getTypeID(); // probably debug
			char iconName[16];
			og::Screen::TagToName(tag, iconName); // also probably debug

			// set up relevant map icons
			switch (objType) {
			case Radar::MAP_OLIMAR:
				mOlimarObj = getNaviPtr(NAVIID_Olimar);
				if (mOlimarObj) {
					J2DPictureEx* olimarPane = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mIconScreen, 'orima_l'));
					mOlimarGlow              = og::Screen::CopyPictureToPane(olimarPane, mMapTexPane, newPos.x, newPos.y, 'ie_Orima');
					mOlimarArrow             = og::Screen::CopyPictureToPane(cPane, mMapTexPane, newPos.x, newPos.y, 'ic_Orima');
				}
				break;

			case Radar::MAP_LOUIE_PRESIDENT:
				mLouieObj = getNaviPtr(NAVIID_Louie);
				if (mLouieObj) {
					J2DPictureEx* louiePane = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mIconScreen, 'luji_l'));
					mLouieGlow              = og::Screen::CopyPictureToPane(louiePane, mMapTexPane, newPos.x, newPos.y, 'ie_Luji');
					mLouieArrow             = og::Screen::CopyPictureToPane(cPane, mMapTexPane, newPos.x, newPos.y, 'ic_Luji');
				}
				break;

			case Radar::MAP_TREASURE:
			case Radar::MAP_SWALLOWED_TREASURE:
			case Radar::MAP_UPGRADE:
			case Radar::MAP_UNENTERED_CAVE:
				// don't mark these on the map - there is a rubber duck icon for treasures in mIconScreen though.
				break;

			default:
				// mark everything else - pikmin, ship/pod, geyser/hole, complete/incomplete cave
				u64 tag               = 'icon_000' + (count % 10) + (((count / 10) % 10) * 0x100) + (((count / 100) % 10) * 0x10000);
				J2DPictureEx* copyPic = og::Screen::CopyPictureToPane(cPane, mMapTexPane, newPos.x, newPos.y, tag);
				if (copyPic) {
					if (objType == Radar::MAP_UPGRADE) {
						JUtility::TColor white(msVal.mItemPelletWhiteColor.r, msVal.mItemPelletWhiteColor.g, msVal.mItemPelletWhiteColor.b,
						                       msVal.mItemPelletWhiteColor.a);
						JUtility::TColor black(msVal.mItemPelletBlackColor.r, msVal.mItemPelletBlackColor.g, msVal.mItemPelletBlackColor.b,
						                       msVal.mItemPelletBlackColor.a);
						copyPic->setWhite(white);
						copyPic->setBlack(black);
					}
					if (objType == Radar::MAP_INCOMPLETE_CAVE || objType == Radar::MAP_COMPLETED_CAVE) {
						u64 caveTag = caveIDtoMsgID(cPoint->mCaveID);
						caveTag     = og::Screen::maskTag(caveTag, 1, 3);
						appendCaveName(copyPic, count, caveTag);
					}
					mRadarPaneList[count][0] = copyPic;
					count++;
				}
				break;
			}
			if (count >= MAX_RADAR_COUNT)
				break;
		}
	}

	mMapIconNum = count;
	tuningIcon();
}

/**
 * @note Address: 0x80310A0C
 * @note Size: 0x1E4
 */
void ObjSMenuMap::appendCaveName(J2DPane* parent, u16 caveIndex, u64 tag)
{
	char buf[16];
	u64 newtag = og::Screen::maskTag2('caveTx??', caveIndex);
	og::Screen::TagToName(tag, buf);
	const JGeometry::TBox2f box(30.0f, 0.0f, 40.0f, 10.0f);

	J2DTextBox* pane = new J2DTextBox(newtag, box, (const ResFONT*)nullptr, "", -1, J2DHBIND_Left, J2DVBIND_Top);
	pane->mFontSize  = 24.0f;

	JUtility::TColor charColor(255, 255, 255, 255);
	JUtility::TColor gradColor(255, 255, 255, 255);
	pane->setFontColor(charColor, gradColor);

	JUtility::TColor white(255, 255, 255, 255);
	JUtility::TColor black(0, 0, 0, 0);
	pane->setBlackWhite(black, white);

	parent->appendChild(pane);
	pane->setMsgID(tag);

	if (mCaveLabelCount < MAX_CAVEDISP_NAME) {
		mCaveLabelTextBoxes[mCaveLabelCount] = pane;
		mCaveLabelCount++;
	} else {
#if defined(VERSION_JP)
		JUT_PANICLINE(739, "cave name number is overflow!!\n");
#else
		JUT_PANICLINE(745, "cave name number is overflow!!\n");
#endif
	}
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x4
//  */
void ObjSMenuMap::rotateMap()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80310BF0
 * @note Size: 0x2E8
 */
void ObjSMenuMap::transMap()
{
	f32 factor = msVal.mMapMoveRate;
	if (mRadarMapTexture) {
		factor = msVal.mMapMoveRate2;
	}

	f32 angle    = (mMapAngle * TAU) / 360.0f;
	f32 anglecos = cosf(angle);
	f32 anglesin = sinf(angle);
	Vector2f inputs;
	inputs.x = mController->getMainStickX();
	inputs.y = mController->getMainStickY();

	if (mController->isButtonHeld(JUTGamePad::PRESS_DPAD_UP)) {
		inputs.y = 1.0f;
	}
	if (mController->isButtonHeld(JUTGamePad::PRESS_DPAD_DOWN)) {
		inputs.y = -1.0f;
	}
	if (mController->isButtonHeld(JUTGamePad::PRESS_DPAD_LEFT)) {
		inputs.x = -1.0f;
	}
	if (mController->isButtonHeld(JUTGamePad::PRESS_DPAD_RIGHT)) {
		inputs.x = 1.0f;
	}
	f32 X   = SQUARE(inputs.x);
	f32 Y   = SQUARE(inputs.y);
	f32 mag = sqrtfClamped(X + Y);
	if (mag > 1.0f) {
		mag = 1.0f;
	}
	f32 diff = mag * msVal.mMapMoveInputReduction;
	if (diff < 0.1f)
		diff = 0.0f;
	f32 move = getMapAdjustVal(diff, factor);

	if (inputs.x > 0.1f) {
		mMapPosition.x -= move * anglecos;
		mMapPosition.y -= move * anglesin;
		ogSound->setScroll();
	}
	if (inputs.x < -0.1f) {
		mMapPosition.x += move * anglecos;
		mMapPosition.y += move * anglesin;
		ogSound->setScroll();
	}
	if (inputs.y > 0.1f) {
		mMapPosition.x -= move * anglesin;
		mMapPosition.y += move * anglecos;
		ogSound->setScroll();
	}
	if (inputs.y < -0.1f) {
		mMapPosition.x += move * anglesin;
		mMapPosition.y -= move * anglecos;
		ogSound->setScroll();
	}

	if (mMapPosition.x < -mMapTextureDimensions.x) {
		mMapPosition.x = -mMapTextureDimensions.x;
	}
	if (mMapPosition.x > 0.0f) {
		mMapPosition.x = 0.0f;
	}

	if (mMapPosition.y < -mMapTextureDimensions.y) {
		mMapPosition.y = -mMapTextureDimensions.y;
	}
	if (mMapPosition.y > 0.0f) {
		mMapPosition.y = 0.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void ObjSMenuMap::scaleMap()
{
	bool isUp   = false;
	bool isDown = false;
	f32 cstick  = mController->getSubStickY();
	if (cstick > 0.4f) {
		isUp = true;
	}
	if (cstick < -0.4f) {
		isDown = true;
	}

	if (isUp) {
		mCurrentZoom += mCurrentZoom * 0.03f;
		if (mCurrentZoom > msVal.mMaxZoom)
			mCurrentZoom = msVal.mMaxZoom;
		ogSound->setZoomIn();
	} else if (isDown) {
		mCurrentZoom -= mCurrentZoom * 0.03f;
		if (mCurrentZoom < msVal.mMinZoom)
			mCurrentZoom = msVal.mMinZoom;
		ogSound->setZoomOut();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void ObjSMenuMap::setMapColor()
{
	JUtility::TColor white(msVal.mMapTexColorWhite.r, msVal.mMapTexColorWhite.g, msVal.mMapTexColorWhite.b, msVal.mMapTexColorWhite.a);
	JUtility::TColor black(msVal.mMapTexColorBlack.r, msVal.mMapTexColorBlack.g, msVal.mMapTexColorBlack.b, msVal.mMapTexColorBlack.a);
	mMapTexPane->setWhite(white);
	mMapTexPane->setBlack(black);
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
u8 ObjSMenuMap::calcCaveNameAlpha()
{
	u8 alpha = 255;

	if (mCurrentZoom < mStartZoom) {
		alpha = (1.0 - (mStartZoom - mCurrentZoom) / (mStartZoom - msVal.mMinZoom)) * 255.0f;
	}
	mZoomCaveTextAlpha = alpha;
}

/**
 * @note Address: 0x80310ED8
 * @note Size: 0x960
 */
void ObjSMenuMap::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSMenuAll* dispfull = static_cast<og::Screen::DispMemberSMenuAll*>(getDispMember());
	mDisp = static_cast<og::Screen::DispMemberSMenuMap*>(dispfull->getSubMember(OWNER_OGA, MEMBER_START_MENU_MAP));
	if (!mDisp) {
		dispfull = new og::Screen::DispMemberSMenuAll;
		mDisp    = static_cast<og::Screen::DispMemberSMenuMap*>(dispfull->getSubMember(OWNER_OGA, MEMBER_START_MENU_MAP));
	}

	// set up MapCounter object
	mMapCounter = new og::Screen::MapCounter(&mDisp->mDataMap);
	mMapCounter->set("s_menu_map_l.blo", 0x1040000, arc);
	// load in animations
	mAnimGroup = new og::Screen::AnimGroup(3);
	og::Screen::registAnimGroupScreen(mAnimGroup, arc, mMapCounter, "s_menu_map_l.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnimGroup, arc, mMapCounter, "s_menu_map_l_02.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnimGroup, arc, mMapCounter, "s_menu_map_l_03.btk", msBaseVal.mAnimSpeed);
	mMapCounter->setCallBack(arc);

	mMapAreaPane = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mMapCounter, 'map_cent')); // rectangular area to display map in

	// change start zoom based on cave or above ground
	if (mDisp->mInCave && mDisp->mActiveNavi) {
		mStartZoom = msVal.mCaveZoom;
	} else {
		mStartZoom = msVal.mGroundZoom;
	}
	mCurrentZoom = mStartZoom;

	mMapAngle = 0.0f;

	// set starting map orientation/rotation
	if (mDisp->mActiveNavi) {
		// Game::Navi* navi = Game::naviMgr->getActiveNavi();
		Vector3f naviViewVec = Game::cameraMgr->mCameraObjList[Game::naviMgr->getActiveNavi()->mNaviIndex]->getViewVector();
		mMapAngle            = 180.0f * (JMAAtan2Radian(naviViewVec.x, -naviViewVec.z) / PI); // in degrees
	}

	initMapIcon(arc);
	setMapColor();

	// set up textbox above map
	u64 mapNameTag = 0;
	if (mDisp->mInCave && mDisp->mActiveNavi) {
		char buf[20];
		mapNameTag = caveIDtoMsgID(mDisp->mCurrentCave);
		mapNameTag = og::Screen::maskTag(mapNameTag, 1, 3);
		og::Screen::TagToName(mapNameTag, buf);
	} else {
		int stage = mDisp->mCourseIndex;
		switch (stage) {
		case og::Screen::DispMemberSMenuMap::COURSE_Tutorial:
			mapNameTag = '8390_03'; // "Valley of Repose"
			break;
		case og::Screen::DispMemberSMenuMap::COURSE_Forest:
			mapNameTag = '8391_03'; // "Awakening Wood"
			break;
		case og::Screen::DispMemberSMenuMap::COURSE_Yakushima:
			mapNameTag = '8392_03'; // "Perplexing Pool"
			break;
		case og::Screen::DispMemberSMenuMap::COURSE_Last:
			mapNameTag = '8393_03'; // "Wistful Wild"
			break;
		case og::Screen::DispMemberSMenuMap::COURSE_Test:
			mapNameTag = '8394_03'; // "Test Area (ID 8394_03)"
			break;
		default:
			break;
		}
	}

	J2DPane* mapName    = mMapCounter->search('Tmapti'); // Course/cave name textbox above map
	mapName->mMessageID = mapNameTag;

	og::Screen::setCallBackMessage(mIconScreen);

	// set up panes for onion counts
	J2DPane* paneRedOnyonCnt    = mMapCounter->search('Npk01'); // red pikmin onyon counts
	J2DPane* paneYellowOnyonCnt = mMapCounter->search('Npk02'); // yellow pikmin onyon counts
	J2DPane* paneBlueOnyonCnt   = mMapCounter->search('Npk03'); // blue pikmin onyon counts

	// set up panes for rocket counts
	J2DPane* paneWhiteShipCnt  = mMapCounter->search('Npk04'); // white pikmin rocket counts
	J2DPane* panePurpleShipCnt = mMapCounter->search('Npk05'); // purple pikmin rocket counts

	// set up panes for leader/in-party/formation counts
	J2DPane* paneRedParty    = mMapCounter->search('Npk06'); // red pikmin in party counts
	J2DPane* paneYellowParty = mMapCounter->search('Npk07'); // yellow pikmin in party counts
	J2DPane* paneBlueParty   = mMapCounter->search('Npk08'); // blue pikmin in party counts
	J2DPane* paneWhiteParty  = mMapCounter->search('Npk09'); // white pikmin in party counts
	J2DPane* panePurpleParty = mMapCounter->search('Npk10'); // purple pikmin in party counts

	// set up pane for free pikmin counts
	J2DPane* paneFreePikis = mMapCounter->search('Npk11'); // red pikmin in party counts

	// toggle off pikmin types that haven't been unlocked
	// reds
	if (!mDisp->mUnlockedReds) {
		paneRedOnyonCnt->hide();
		paneRedParty->hide();
		mMapCounter->dispRed(false);
	}
	// yellows
	if (!mDisp->mUnlockedYellows) {
		paneYellowOnyonCnt->hide();
		paneYellowParty->hide();
		mMapCounter->dispYellow(false);
	}
	// blues
	if (!mDisp->mUnlockedBlues) {
		paneBlueOnyonCnt->hide();
		paneBlueParty->hide();
		mMapCounter->dispBlue(false);
	}
	// whites
	if (!mDisp->mUnlockedWhites) {
		paneWhiteShipCnt->hide();
		paneWhiteParty->hide();
		mMapCounter->dispWhite(false);
	}
	// purples
	if (!mDisp->mUnlockedPurples) {
		panePurpleShipCnt->hide();
		panePurpleParty->hide();
		mMapCounter->dispBlack(false);
	}
	// need to have unlocked at least one pikmin type to show "free" pikmin pane
	if (!mDisp->mUnlockedReds && !mDisp->mUnlockedYellows && !mDisp->mUnlockedBlues && !mDisp->mUnlockedWhites
	    && !mDisp->mUnlockedPurples) {
		paneFreePikis->hide();
		mMapCounter->dispFree(false);
	}

	// set up "Rocket" counts pane
	J2DPane* paneRocket = mMapCounter->search('Nrocket');
	if (mDisp->mUnlockedWhites || mDisp->mUnlockedPurples) {
		// display rocket counts if we have whites and/or purples
		paneRocket->show();

		// show correct rocket icon based on if we've paid off the debt
		J2DPane* paneRocketOld  = mMapCounter->search('Nrock_1');
		J2DPane* paneRocketGold = mMapCounter->search('Nrock_2');
		paneRocketOld->hide();
		paneRocketGold->hide();
		og::Screen::DispMemberSMenuPause* disp2
		    = static_cast<og::Screen::DispMemberSMenuPause*>(dispfull->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE));
		if (disp2->mPokoCount >= DEBT_AMOUNT) {
			// debt is paid!
			paneRocketGold->show(); // shiny!
		} else {
			paneRocketOld->show(); // not shiny.
		}
	} else {
		// don't display rocket counts if we haven't unlocked whites or purples
		paneRocket->hide();

		// expand Leader/formation pane to take up the space instead
		paneRocket = mMapCounter->search('Ntairetu');
		paneRocket->add(0.0f, -50.0f);
	}

	// display correct onions in onion icon based on progression
	J2DPane* paneOnyonRed       = mMapCounter->search('Nonyn_1'); // red onion only
	J2DPane* paneOnyonRedYellow = mMapCounter->search('Nonyn_2'); // red and yellow onions only (normal progression!)
	J2DPane* paneOnyonRedBlue   = mMapCounter->search('Nonyn_3'); // red and blue onions only (!! not normal progression !!)
	J2DPane* paneOnyonAll       = mMapCounter->search('Nonyn_4'); // red, yellow and blue onions
	paneOnyonRed->hide();
	paneOnyonRedYellow->hide();
	paneOnyonRedBlue->hide();
	paneOnyonAll->hide();
	if (mDisp->mUnlockedReds && mDisp->mUnlockedYellows && mDisp->mUnlockedBlues) {
		paneOnyonAll->show();
	} else if (mDisp->mUnlockedReds && mDisp->mUnlockedBlues) {
		paneOnyonRedBlue->show();
	} else if (mDisp->mUnlockedReds && mDisp->mUnlockedYellows) {
		paneOnyonRedYellow->show();
	} else if (mDisp->mUnlockedReds) {
		paneOnyonRed->show();
	}

	// if we have blues and/or yellows, replace some reds following olimar in the Leader icon with blues/yellows
	// (last pikmin is always red)
	J2DPane* paneBlueFollow   = mMapCounter->search('Ntai_1'); // blues, immediately following leader
	J2DPane* paneYellowFollow = mMapCounter->search('Ntai_2'); // yellows, in middle following leader
	paneBlueFollow->hide();
	paneYellowFollow->hide();
	if (mDisp->mUnlockedBlues) {
		paneBlueFollow->show();
	}
	if (mDisp->mUnlockedYellows) {
		paneYellowFollow->show();
	}

	// do base start menu pane setup (L/R buttons, etc)
	doCreateAfter(arc, mMapCounter);
}

/**
 * @note Address: 0x80311838
 * @note Size: 0x598
 */
void ObjSMenuMap::updateMap()
{
	mController = getOwner()->getGamePad();

	static f32 nv_frame = 0.0f;
	nv_frame += sys->mDeltaTime;

	if (nv_frame > 1.0f) {
		nv_frame = 0.0f;
	}

	f32 olimarAngle     = TAU * nv_frame;
	u8 olimarArrowAlpha = ((sinf(olimarAngle) + 1.0f) / 2 * 0.6f + 0.4f) * 255.0f;

	f32 louieAngle     = olimarAngle + PI; // this is a load bearing temp float lol
	u8 louieArrowAlpha = ((sinf(louieAngle) + 1.0f) / 2 * 0.6f + 0.4f) * 255.0f;

	calcCaveNameAlpha();

	for (int i = 0; i < mCaveLabelCount; i++) {
		mCaveLabelTextBoxes[i]->setAlpha(mZoomCaveTextAlpha);
	}

	f32 scale = mCurrentZoom;
	if (mDisp->mInCave)
		scale *= 2.0f;
	f32 mapX             = mMapPosition.x;
	f32 mapY             = mMapPosition.y;
	mMapRotationOrigin.x = -mapX;
	mMapRotationOrigin.y = -mapY;
	mMapTexPane->setBasePosition(J2DPOS_Center);
	mMapTexPane->updateScale(scale);
	mMapTexPane->rotate(mMapRotationOrigin.x, mMapRotationOrigin.y, J2DROTATE_Z, mMapAngle);
	mMapTexPane->move(mapX + msVal.mMapTexOffset.x, mapY + msVal.mMapTexOffset.y);

	f32 angleOffs = 360.0f;
	for (int i = 0; i < mMapIconNum; i++) {
		f32 scaleFactor = msVal.mMapIconScaleBase;
		(*mRadarPaneList[i])->updateScale(scaleFactor / scale);
		(*mRadarPaneList[i])->setAngle(angleOffs - mMapAngle);
	}

	if (mOlimarArrow && mOlimarObj) {
		f32 scaleFactor = msVal.mMapNaviArrowScaleMod * (msVal.mMapIconScaleBase / scale);
		f32 facedir     = mOlimarObj->getFaceDir();
		mOlimarArrow->setBasePosition(J2DPOS_Center);
		mOlimarArrow->updateScale(scaleFactor);
		facedir = (facedir * 360.0f) / TAU + 45.0f;
		mOlimarArrow->setAngle(facedir);
		mOlimarGlow->setBasePosition(J2DPOS_Center);
		mOlimarGlow->updateScale(scaleFactor);
		mOlimarGlow->setAngle(facedir);

		mOlimarArrow->setAlpha(olimarArrowAlpha);
		mOlimarGlow->setAlpha(olimarArrowAlpha);
	}

	if (mLouieArrow && mLouieObj) {
		f32 scaleFactor = msVal.mMapNaviArrowScaleMod * (msVal.mMapIconScaleBase / scale);
		f32 facedir     = mLouieObj->getFaceDir();
		mLouieArrow->setBasePosition(J2DPOS_Center);
		mLouieArrow->updateScale(scaleFactor);
		facedir = (facedir * 360.0f) / TAU + 45.0f;
		mLouieArrow->setAngle(facedir);
		mLouieGlow->setBasePosition(J2DPOS_Center);
		mLouieGlow->updateScale(scaleFactor);
		mLouieGlow->setAngle(facedir);

		mLouieArrow->setAlpha(louieArrowAlpha);
		mLouieGlow->setAlpha(louieArrowAlpha);
	}
}

/**
 * @note Address: 0x80311DD0
 * @note Size: 0xA8
 */
void ObjSMenuMap::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal.mMapScreenScale.x, msVal.mMapScreenScale.y);
	mAnimGroup->update();
	updateMap();

	mMapCounter->setXY(mMovePos, 0.0f);

	mMapCounter->animation();
	mMapCounter->update();
	mIconScreen->update();
}

/**
 * @note Address: 0x80311E78
 * @note Size: 0x6C
 */
void ObjSMenuMap::doUpdateLAction()
{
	// LEFT FROM MAP = ITEMS
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_ITEMS, getDispMember());
	jump_L(arg);
}

/**
 * @note Address: 0x80311EE4
 * @note Size: 0xC4
 */
void ObjSMenuMap::doUpdateRAction()
{
	// RIGHT FROM MAP = PAUSE MENU
	if (mDisp->mInCave) {
		// pause menu is different in caves (give up, etc)
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_DOUKUTU, getDispMember());
		jump_R(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU, getDispMember());
		jump_R(arg);
	}
}

/**
 * @note Address: 0x80311FA8
 * @note Size: 0x10C
 */
bool ObjSMenuMap::doUpdate()
{
	::Screen::SceneBase* scene = getOwner();
	mController                = scene->getGamePad();
	transMap();

	scaleMap();
	commonUpdate();
	return ObjSMenuBase::doUpdate();
}

/**
 * @note Address: 0x803120B4
 * @note Size: 0x138
 */
void ObjSMenuMap::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	drawMap(gfx);

	Graphics gfx2;
	mIconScreen->draw(gfx2, *graf);

	if (mCompassPic && mCompassPane) {
		PSMTXCopy(mCompassPane->mGlobalMtx, mCompassPic->mPositionMtx);
	}

	graf->setPort();
	mIconScreen2->draw(gfx, *graf);
	graf->setPort();
	drawYaji(gfx);
}

/**
 * @note Address: 0x803121EC
 * @note Size: 0x32C
 */
void ObjSMenuMap::drawMap(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	if (mUpdateCaveTex) {
		mRadarMapTexture = Game::Cave::randMapMgr->getRadarMapTexture();
		mMapTexPane->changeTexture(mRadarMapTexture->mTexInfo, 0);
		mUpdateCaveTex          = false;
		mMapTextureDimensions.x = (int)mMapTexPane->getTexture(0)->mTexInfo->mSizeX;
		mMapTextureDimensions.y = (int)mMapTexPane->getTexture(0)->mTexInfo->mSizeY;
		mMapTexScale.x          = mMapBounds.x / mMapTextureDimensions.x;
		mMapTexScale.y          = mMapBounds.y / mMapTextureDimensions.y;
	}

	if (mCompassPane) {
		mCompassPane->setAngle(mMapAngle);
	}

	P2DScreen::Mgr_tuning* scrn = mMapCounter;
	if (scrn) {
		scrn->draw(gfx, *graf);
	}
	graf->setPort();

	Graphics* sysGfx = sys->mGfx;
	j3dSys.drawInit();
	sysGfx->initPrimDraw(nullptr);

	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_FALSE);
	GXSetColorUpdate(GX_FALSE);

	Rectf rect;
	rect.p1.x = 0.0f;
	rect.p1.y = 0.0f;
	rect.p2.x = 640.0f;
	rect.p2.y = 480.0f;
	Color4 color(200, 10, 200, 155);
	drawRectZ(*sysGfx, rect, color, 0.999);
	JGeometry::TVec3f btmL = mMapAreaPane->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f btmR = mMapAreaPane->getGlbVtx(GLBVTX_BtmRight);
	JGeometry::TVec3f topL = mMapAreaPane->getGlbVtx(GLBVTX_TopLeft);
	JGeometry::TVec3f topR = mMapAreaPane->getGlbVtx(GLBVTX_TopRight);
	Color4 color2(100, 0, 0, 155);
	drawVecZ(*sysGfx, *(Vec*)&btmL, *(Vec*)&btmR, *(Vec*)&topL, *(Vec*)&topR, color2, -0.999);
	GXSetColorUpdate(GX_TRUE);
	PSMTXCopy(mMapAreaPane->mGlobalMtx, mIconRootPane->mPositionMtx);
	graf->setPort();
	GXSetZCompLoc(GX_TRUE);
	GXSetZMode(GX_TRUE, GX_LESS, GX_FALSE);
}

/**
 * @note Address: 0x80312518
 * @note Size: 0x1E0
 */
void ObjSMenuMap::drawRectZ(Graphics& gfx, Rectf& rect, Color4& color, f32 z)
{
	GXSetZMode(GX_TRUE, GX_ALWAYS, GX_TRUE);
	Mtx44 mtx;
	Mtx mtx2;
	C_MTXOrtho(mtx, 0.0f, 480.0f, 0.0f, 640.0f, -1.0f, 1.0f);
	GXSetProjection(mtx, GX_ORTHOGRAPHIC);
	PSMTXIdentity(mtx2);
	GXLoadPosMtxImm(mtx2, 0);
	GXSetCullMode(GX_CULL_NONE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	GXPosition3f32(rect.p1.x, rect.p1.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXPosition3f32(rect.p1.x, rect.p2.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXPosition3f32(rect.p2.x, rect.p2.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXPosition3f32(rect.p2.x, rect.p1.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXSetZMode(GX_TRUE, GX_LESS, GX_TRUE);
}

/**
 * @note Address: 0x803126F8
 * @note Size: 0x214
 */
void ObjSMenuMap::drawVecZ(Graphics& gfx, Vec& btmL, Vec& btmR, Vec& topL, Vec& topR, Color4& color, f32 z)
{
	u16 wid = System::getRenderModeWidth();
	u16 hei = System::getRenderModeHeight();
	GXSetZMode(GX_TRUE, GX_ALWAYS, GX_TRUE);
	Mtx44 temp;
	Mtx temp2;
	C_MTXOrtho(temp, 0.0f, (f32)hei, 0.0f, (f32)wid, -1.0f, 1.0f);
	GXSetProjection(temp, GX_ORTHOGRAPHIC);
	PSMTXIdentity(temp2);
	GXLoadPosMtxImm(temp2, 0);
	GXSetCullMode(GX_CULL_NONE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	GXPosition3f32(btmL.x, btmL.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXPosition3f32(btmR.x, btmR.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXPosition3f32(topR.x, topR.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXPosition3f32(topL.x, topL.y, z);
	GXColor4u8(color.r, color.g, color.b, color.a);

	GXSetZMode(GX_TRUE, GX_LESS, GX_TRUE);
}

/**
 * @note Address: 0x8031290C
 * @note Size: 0xA4
 */
bool ObjSMenuMap::doStart(::Screen::StartSceneArg const* arg)
{
	mAnimGroup->setFrame(0.0f);
	mAnimGroup->setRepeat(true);
	mAnimGroup->setSpeed(1.0f);
	mAnimGroup->start();
	setYajiName('6051_00', '6052_00', '6050_00'); // "Items" "Menu" "Radar"
	stopYaji();
	start_LR(arg);
}

/**
 * @note Address: 0x803129B0
 * @note Size: 0x8
 */
bool ObjSMenuMap::doEnd(::Screen::EndSceneArg const*)
{
	return true;
}

/**
 * @note Address: 0x803129B8
 * @note Size: 0x20
 */
void ObjSMenuMap::doUpdateFinish()
{
	ObjSMenuBase::doUpdateFinish();
}

/**
 * @note Address: 0x803129D8
 * @note Size: 0x4C
 */
bool ObjSMenuMap::doUpdateFadeout()
{
	commonUpdate();
	updateFadeOut();
}

/**
 * @note Address: 0x80312A24
 * @note Size: 0x14
 */
void ObjSMenuMap::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0f;
}

/**
 * @note Address: 0x80312A38
 * @note Size: 0x14
 */
void ObjSMenuMap::in_R()
{
	mState = MENUSTATE_OpenR;
	mAngle = 15.0f;
}

/**
 * @note Address: 0x80312A4C
 * @note Size: 0xC
 */
void ObjSMenuMap::wait()
{
	mState = MENUSTATE_Default;
}

/**
 * @note Address: 0x80312A58
 * @note Size: 0x2C
 */
void ObjSMenuMap::out_L()
{
	mState = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/**
 * @note Address: 0x80312A84
 * @note Size: 0x2C
 */
void ObjSMenuMap::out_R()
{
	mState = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

ObjSMenuMap::StaticValues ObjSMenuMap::msVal;

} // namespace newScreen
} // namespace og
