#include "og/newScreen/SMenu.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "Game/gamePlayData.h"
#include "trig.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace Game {
namespace Equip {
int EquipItemList[12] = {
	OlimarData::ODII_AmplifiedAmplifier, OlimarData::ODII_ProfessionalNoisemaker, OlimarData::ODII_StellarOrb,        // row 1
	OlimarData::ODII_JusticeAlloy,       OlimarData::ODII_ForgedCourage,          OlimarData::ODII_DreamMaterial,     // row 2
	OlimarData::ODII_RepugnantAppendage, OlimarData::ODII_BruteKnuckles,          OlimarData::ODII_PrototypeDetector, // row 3
	OlimarData::ODII_SphericalAtlas,     OlimarData::ODII_GeographicProjection,   OlimarData::ODII_FiveManNapsack,    // row 4
};
} // namespace Equip
} // namespace Game

namespace og {
namespace newScreen {
// NB: same order as EquipItemList above
u64 ItemMsgID_List[12] = {
	'6122_00', // "Mega Tweeter"
	'6119_00', // "Pluckaphone"
	'6126_00', // "Solar System"

	'6116_00', // "Metal Suit Z"
	'6117_00', // "Scorch Guard"
	'6129_00', // "Anti-Electrifier"

	'6120_00', // "Rush Boots"
	'6118_00', // "Rocket Fist"
	'6121_00', // "Treasure Gauge"

	'6127_00', // "Sphere Chart"
	'6128_00', // "Survey Chart"
	'6123_00', // "Napsack"
};

/**
 * @note Address: 0x80312EF8
 * @note Size: 0x7C
 */
ObjSMenuItem::ObjSMenuItem(char const* name)
{
	mDisp         = nullptr;
	mScreenItems  = nullptr;
	mItemAnims    = nullptr;
	mSprayAnims   = nullptr;
	mScreenSprays = nullptr;

	mBitterSprayPane    = nullptr;
	mSpicySprayPane     = nullptr;
	mBitterSpraySubPane = nullptr;
	mSpicySpraySubPane  = nullptr;
	mName               = name;
}

/**
 * @note Address: 0x80312F74
 * @note Size: 0xC4
 */
ObjSMenuItem::~ObjSMenuItem() { }

/**
 * @note Address: 0x80313038
 * @note Size: 0x924
 */
void ObjSMenuItem::doCreate(JKRArchive* arc)
{
	mDisp = static_cast<og::Screen::DispMemberSMenuItem*>(getDispMember()->getSubMember(OWNER_OGA, MEMBER_START_MENU_ITEM));
	if (!mDisp) {
		og::Screen::DispMemberSMenuAll* newdisp = new og::Screen::DispMemberSMenuAll;
		mDisp = static_cast<og::Screen::DispMemberSMenuItem*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_ITEM));
	}

	mScreenItems = new P2DScreen::Mgr_tuning;
	mScreenItems->set("s_menu_item_l.blo", 0x1040000, arc); // main item menu screen

	J2DScreen* itemIconScreen = new J2DScreen;
	itemIconScreen->set("s_menu_powerup_icon.blo", 0x1040000, arc);

	// set up all Exploration Kit icons
	for (int i = 0; i < 12; i++) {
		u64 itemPaneTag = 'Nitem00' + (i % 10) + (i / 10) % 10 * 256;  // each item's individual pane
		u64 itemIconTag = 'Picon00' + (i % 10) + (i / 10) % 10 * 256;  // each item's actual icon
		u64 itemBgTag   = 'Pitemb00' + (i % 10) + (i / 10) % 10 * 256; // each item's background picture

		J2DPane* itemPane = og::Screen::TagSearch(mScreenItems, itemPaneTag);
		J2DPane* iconPane = og::Screen::TagSearch(itemIconScreen, itemIconTag);
		J2DPane* bgPane   = og::Screen::TagSearch(mScreenItems, itemBgTag);

		// attach icon to pane + center on background pane
		iconPane->setBasePosition((J2DBasePosition)bgPane->mBasePosition);
		itemPane->appendChild(iconPane);
		JGeometry::TBox2f* box = bgPane->getBounds();
		iconPane->place(*box);
	}

	mScreenSprays = new P2DScreen::Mgr;
	mScreenSprays->set("s_menu_item_spray.blo", 0x1040000, arc);

	mBitterSprayPane    = og::Screen::TagSearch(mScreenItems, 'Nspray00');  // bitter spray
	mSpicySprayPane     = og::Screen::TagSearch(mScreenItems, 'Nspray01');  // spicy spray
	mBitterSpraySubPane = og::Screen::TagSearch(mScreenSprays, 'Nspray00'); // bitter spray
	mSpicySpraySubPane  = og::Screen::TagSearch(mScreenSprays, 'Nspray01'); // spicy spray

	mBitterSprayPane->move(msVal.mBitterSprayOffset.x, msVal.mBitterSprayOffset.y);
	mSpicySprayPane->move(msVal.mSpicySprayOffset.x, msVal.mSpicySprayOffset.y);

	if (!mDisp->mIsBitterUnlocked && !mDisp->mIsSpicyUnlocked) {
		// neither spicies nor bitters
		og::Screen::TagSearch(mScreenItems, 'Nwin0')->hide();               // hide bitter window
		og::Screen::TagSearch(mScreenItems, 'Nwin1')->hide();               // hide spicy window
		og::Screen::TagSearch(mScreenItems, 'NULL_002')->add(-96.0f, 0.0f); // move item pane to center
		mBitterSpraySubPane->hide();
		mSpicySpraySubPane->hide();

	} else if (!mDisp->mIsBitterUnlocked) {
		// no bitters
		og::Screen::TagSearch(mScreenItems, 'Nwin0')->hide();             // hide bitter window
		og::Screen::TagSearch(mScreenItems, 'Nwin1')->add(0.0f, -100.0f); // move spicy window to (vertical) center
		mBitterSpraySubPane->hide();

	} else if (!mDisp->mIsSpicyUnlocked) {
		// no spicies
		og::Screen::TagSearch(mScreenItems, 'Nwin0')->add(0.0f, 80.0f); // move bitter window to (vertical) center
		og::Screen::TagSearch(mScreenItems, 'Nwin1')->hide();           // hide spicy window
		mSpicySpraySubPane->hide();
	}

	// set up general pane animations
	mItemAnims = new og::Screen::AnimGroup(5);
	og::Screen::registAnimGroupScreen(mItemAnims, arc, mScreenItems, "s_menu_item_l.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mItemAnims, arc, mScreenItems, "s_menu_item_l_02.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mItemAnims, arc, mScreenItems, "s_menu_item_l_03.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mItemAnims, arc, mScreenItems, "s_menu_item_l_04.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mItemAnims, arc, mScreenItems, "s_menu_item_l_05.btk", msBaseVal.mAnimSpeed);

	// set up spray animations
	mSprayAnims = new og::Screen::AnimGroup(1);
	og::Screen::registAnimGroupScreen(mSprayAnims, arc, mScreenSprays, "s_menu_item_spray.btk", 1.0f);

	// set up bitter spray and berry counters
	og::Screen::setCallBack_CounterRV(mScreenItems, 'Pup_1', 'Pup_2', 'Pup_2', &mDisp->mBitterSprayCount, 3, 3, false, arc);
	og::Screen::setCallBack_CounterRV(mScreenItems, 'PupS_1', 'PupS_2', 'PupS_2', &mDisp->mBitterBerryCount, 2, 2, false, arc);

	// set up spicy spray and berry counters
	og::Screen::setCallBack_CounterRV(mScreenItems, 'Pdown_1', 'Pdown_2', 'Pdown_2', &mDisp->mSpicySprayCount, 3, 3, false, arc);
	og::Screen::setCallBack_CounterRV(mScreenItems, 'PdownS_1', 'PdownS_2', 'PdownS_2', &mDisp->mSpicyBerryCount, 2, 2, false, arc);

	J2DPictureEx* iconList[12];
	JUtility::TColor greyedWhite(255, 255, 255, 160);
	JUtility::TColor greyedBlack(0, 0, 0, 0);

	// show each Exploration Kit item as "Incomplete" or named
	for (int i = 0; i < 12; i++) {
		u64 itemTag            = 'Pitemb00' + (i % 10) + (i / 10) % 10 * 256;
		J2DPane* itemPaneP     = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mScreenItems, itemTag));
		J2DPictureEx* itemPane = static_cast<J2DPictureEx*>(itemPaneP); // this is really dumb but necessary

		u64 itemNameTag          = 'Titem000' + (i % 10) + (i / 10) % 10 * 256;
		J2DTextBox* itemNameTBox = static_cast<J2DTextBox*>(og::Screen::TagSearch(mScreenItems, itemNameTag));
		itemNameTBox->setMsgID(ItemMsgID_List[i]);

		u64 iconTag = 'Picon00' + (i % 10) + (i / 10) % 10 * 256;
		iconList[i] = static_cast<J2DPictureEx*>(og::Screen::TagSearch(mScreenItems, iconTag));
		if (iconList[i]) {
			int id = Game::Equip::EquipItemList[i];

			itemPane->setWhite(msVal.mItemColorWhite);
			itemPane->setBlack(msVal.mItemColorBlack);

			if (mDisp->mExplorationKitInventory[id]) {
				// we have the item, display it and the name
				iconList[i]->show();
				if (itemNameTBox) {
					itemNameTBox->show();
				}
			} else {
				// we don't have the item, gray it out and label as "Incomplete"
				iconList[i]->show();
				iconList[i]->setWhite(greyedWhite);
				iconList[i]->setBlack(greyedBlack);
				if (itemNameTBox) {
					itemNameTBox->show();
					itemNameTBox->setMsgID('6130_00'); // "Incomplete"
					itemNameTBox->setAlpha(128);       // grey out label

				} else {
					char buf[12];
					og::Screen::TagToName(itemNameTag, buf); // debug
				}
			}

		} else {
			JUT_PANICLINE(386, "icon tag not found !!\n");
		}
	}

	doCreateAfter(arc, mScreenItems);
}

/**
 * @note Address: 0x8031395C
 * @note Size: 0x128
 */
void ObjSMenuItem::doUpdateLAction()
{
	// LEFT = CONTROL OR PAUSE
	if (msBaseVal.mUseControlMenu) {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_CONTROLS, getDispMember());
		jump_L(arg);
		return;
	}

	og::Screen::DispMemberSMenuAll* disp = static_cast<og::Screen::DispMemberSMenuAll*>(getDispMember());
	if (disp->mSMenuMap.mInCave) {
		// different pause menu in cave
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_DOUKUTU, getDispMember());
		jump_L(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU, getDispMember());
		jump_L(arg);
	}
}

/**
 * @note Address: 0x80313A84
 * @note Size: 0x6C
 */
void ObjSMenuItem::doUpdateRAction()
{
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_MAP, getDispMember());
	jump_R(arg);
}

/**
 * @note Address: 0x80313AF0
 * @note Size: 0xE8
 */
void ObjSMenuItem::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal.mItemMenuScale.x, msVal.mItemMenuScale.y);
	mBitterSprayPane->move(msVal.mBitterSprayOffset.x, msVal.mBitterSprayOffset.y);
	mSpicySprayPane->move(msVal.mSpicySprayOffset.x, msVal.mSpicySprayOffset.y);
	mItemAnims->update();
	mSprayAnims->update();
	mScreenItems->setXY(mMovePos, 0.0f);
	mScreenItems->update();
	mScreenSprays->update();
}

/**
 * @note Address: 0x80313BD8
 * @note Size: 0x54
 */
bool ObjSMenuItem::doUpdate()
{
	commonUpdate();
	bool ret = ObjSMenuBase::doUpdate();
	mScreenItems->animation();
	return ret;
}

/**
 * @note Address: 0x80313C2C
 * @note Size: 0xD4
 */
void ObjSMenuItem::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();
	if (mScreenItems) {
		mScreenItems->draw(gfx, *graf);
	}
	if (mScreenSprays) {
		PSMTXCopy(mBitterSprayPane->mGlobalMtx, mBitterSpraySubPane->mPositionMtx);
		PSMTXCopy(mSpicySprayPane->mGlobalMtx, mSpicySpraySubPane->mPositionMtx);
		mScreenSprays->draw(gfx, *graf);
	}
	drawYaji(gfx);
}

/**
 * @note Address: 0x80313D00
 * @note Size: 0x14
 */
void ObjSMenuItem::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0f;
}

/**
 * @note Address: 0x80313D14
 * @note Size: 0x14
 */
void ObjSMenuItem::in_R()
{
	mState = MENUSTATE_OpenR;
	mAngle = 15.0f;
}

/**
 * @note Address: 0x80313D28
 * @note Size: 0xC
 */
void ObjSMenuItem::wait() { mState = MENUSTATE_Default; }

/**
 * @note Address: 0x80313D34
 * @note Size: 0x2C
 */
void ObjSMenuItem::out_L()
{
	mState = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/**
 * @note Address: 0x80313D60
 * @note Size: 0x2C
 */
void ObjSMenuItem::out_R()
{
	mState = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

/**
 * @note Address: 0x80313D8C
 * @note Size: 0xD0
 */
bool ObjSMenuItem::doStart(::Screen::StartSceneArg const* arg)
{
	mItemAnims->setFrame(0.0f);
	mItemAnims->setRepeat(true);
	mItemAnims->setSpeed(1.0f);
	mItemAnims->start();

	mSprayAnims->setFrame(0.0f);
	mSprayAnims->setRepeat(true);
	mSprayAnims->setSpeed(1.0f);
	mSprayAnims->start();

	setYajiName('6052_00', '6050_00', '6051_00'); // "Menu" "Radar" "Items"
	stopYaji();
	return start_LR(arg);
}

/**
 * @note Address: 0x80313E5C
 * @note Size: 0x8
 */
bool ObjSMenuItem::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x80313E64
 * @note Size: 0x20
 */
void ObjSMenuItem::doUpdateFinish() { ObjSMenuBase::doUpdateFinish(); }

/**
 * @note Address: 0x80313E84
 * @note Size: 0x4C
 */
bool ObjSMenuItem::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

ObjSMenuItem::StaticValues ObjSMenuItem::msVal;

} // namespace newScreen
} // namespace og
