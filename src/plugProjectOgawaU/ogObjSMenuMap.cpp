#include "types.h"
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

bool resetArrowAlphaTimer; // these are used in updateMap
float arrowAlphaTimer;
float maxZoom, minZoom;

namespace og {

namespace newScreen {

u64 map_icon_tag[22]
    = { 'oniyon_r', 'oniyon_b', 'oniyon_y', 'piki_r',   'piki__b', 'piki_y',   'piki_bl',  'piki_w',   'piki_fr', 'piki_me', 'kanketu',
	    'cave',     'pot',      'luji_bs',  'orima_bs', 'ufo',     'takar_bs', 'takar_bs', 'takar_bs', 'cave',    'comp_c',  'cave' };

static const char someObjSMenuMapArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	........
 * Size:	000228
 */
Game::Navi* getNaviPtr(int index)
{
	Iterator<Game::Navi> iter(Game::naviMgr);
	Game::Navi* navi;
	CI_LOOP(iter)
	{
		navi = (*iter);
		if (navi->isAlive() && (int)navi->m_naviIndex.typeView == index) {
			return navi;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8030F6F0
 * Size:	000114
 */
ObjSMenuMap::ObjSMenuMap(char const* name)
{
	m_mapPosition.x          = 0.0f;
	m_mapPosition.y          = 0.0f;
	m_currentZoom            = 1.0f;
	m_mapAngle               = 0.0f;
	m_mapTexScale.x          = 1.0f;
	m_mapTexScale.y          = 1.0f;
	m_mapTextureDimensions.x = 0.0f;
	m_mapTextureDimensions.y = 0.0f;
	m_mapBounds.x            = 0.0f;
	m_mapBounds.y            = 0.0f;
	_108.x                   = 1.0f;
	_108.y                   = 1.0f;
	m_mapRotationOrigin.x    = 0.0f;
	m_mapRotationOrigin.y    = 0.0f;
	m_disp                   = nullptr;
	m_mapCounter             = nullptr;
	m_animGroup              = nullptr;
	m_name                   = name;
	m_pane_map               = nullptr;
	_B8                      = 0;
	m_iconScreen             = nullptr;
	m_radarMapTexture        = nullptr;
	m_rootPane               = nullptr;
	m_pane_Ncompas           = nullptr;
	m_mapTexPane             = nullptr;
	m_radarPaneList          = nullptr;
	m_olimarArrow            = nullptr;
	m_olimarObj              = nullptr;
	m_louieArrow             = nullptr;
	m_louieObj               = nullptr;
	m_mapIconNum             = 0;
	m_updateCaveTex          = false;
	m_controller             = nullptr;
	m_iconScreen2            = nullptr;
	m_compassPic             = nullptr;
	m_olimarGlow             = nullptr;
	m_louieGlow              = nullptr;
	m_startZoom              = 1.0f;
	m_zoomCaveTextAlpha      = 255;
	m_caveLabelCount         = 0;
	m_caveLabelTextBoxes[0]  = nullptr;
	m_caveLabelTextBoxes[1]  = nullptr;
	m_caveLabelTextBoxes[2]  = nullptr;
	m_caveLabelTextBoxes[3]  = nullptr;
	m_caveLabelTextBoxes[4]  = nullptr;
}

/*
 * --INFO--
 * Address:	8030F8B0
 * Size:	0000C4
 */
ObjSMenuMap::~ObjSMenuMap() { }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000024
//  */
// void ObjSMenuMap::calcMapScale()
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000AC
//  */
// void ObjSMenuMap::calcMapPos(Vector2f&)
// {
// 	// UNUSED FUNCTION
// }

#pragma dont_inline on
/*
 * --INFO--
 * Address:	8030F974
 * Size:	00026C
 */
void ObjSMenuMap::setMapTexture()
{
	m_mapTexPane = og::Screen::CopyPictureToPane(m_pane_map, m_rootPane, 0.0f, 0.0f, 'new_map');
	m_mapTexPane->setAlpha(255);
	m_pane_map->m_isVisible = false;

	if (m_disp->m_inCave && m_disp->m_activeNavi) {
		if (Game::Cave::randMapMgr) {
			Game::Cave::randMapMgr->setCaptureOn();
			m_radarMapTexture = Game::Cave::randMapMgr->getRadarMapTexture();
			m_mapTexPane->changeTexture(m_radarMapTexture->_20, 0);
			m_updateCaveTex = 1;
		} else {
			JUT_PANICLINE(390, "SMenuMap : randMapMgr is not found!!!\n");
		}
	} else {
		switch (m_disp->m_courseIndex) {
		case 0:
			m_mapTexPane->changeTexture("map_tutorial.bti", 0);
			break;
		case 1:
			m_mapTexPane->changeTexture("map_forest.bti", 0);
			break;
		case 2:
			m_mapTexPane->changeTexture("map_yakushima.bti", 0);
			break;
		case 3:
			m_mapTexPane->changeTexture("map_last.bti", 0);
			break;
		}
	}

	JUTTexture* tex          = m_mapTexPane->getTexture(0);
	m_mapTextureDimensions.x = (int)tex->_20->m_sizeX;
	tex                      = m_mapTexPane->getTexture(0);
	m_mapTextureDimensions.y = (int)tex->_20->m_sizeY;
	m_mapBounds.x            = m_mapTexPane->_020.f.x - m_mapTexPane->_020.i.x;
	m_mapBounds.y            = m_mapTexPane->_020.f.y - m_mapTexPane->_020.i.y;
	m_mapTexPane->resize(m_mapTextureDimensions.x, m_mapTextureDimensions.y);
}
#pragma dont_inline reset

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0001B0
//  */
// void ObjSMenuMap::setMapPos(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000BC
//  */
// void ObjSMenuMap::setCompass(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8030FBE0
 * Size:	0001B8
 */
void ObjSMenuMap::tuningIcon()
{
	if (m_disp->m_activeNavi) {
		Game::Navi* navi = Game::naviMgr->getActiveNavi();
		if ((int)navi->m_naviIndex.typeView == 0) {
			if (m_louieArrow)
				m_mapTexPane->appendChild(m_louieArrow);
			if (m_olimarArrow)
				m_mapTexPane->appendChild(m_olimarArrow);
		} else {
			if (m_olimarArrow)
				m_mapTexPane->appendChild(m_olimarArrow);
			if (m_louieArrow)
				m_mapTexPane->appendChild(m_louieArrow);
		}
	}

	for (int i = 0; i < 22; i++) {
		u64 tag        = map_icon_tag[i];
		J2DPane* pane1 = m_iconScreen->search(tag);
		if (pane1) {
			J2DPane* parent = pane1->getParentPane();
			if (parent) {
				parent = pane1->getParentPane();
				parent->removeChild(pane1);
			}
		}

		J2DPane* pane2 = m_iconScreen2->search(tag);
		if (pane2) {
			J2DPane* parent = pane2->getParentPane();
			if (parent) {
				parent = pane2->getParentPane();
				parent->removeChild(pane2);
			}
		}
	}

	u64 naviTags[3] = { 'orima_l', 'luji_l', 'takara_l' };

	for (int i = 0; i < 3; i++) {
		J2DPane* pane = m_iconScreen2->search(naviTags[i]);
		if (pane) {
			J2DPane* parent = pane->getParentPane();
			if (parent) {
				parent = pane->getParentPane();
				parent->removeChild(pane);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8030FD98
 * Size:	000C74
 */
void ObjSMenuMap::initMapIcon(JKRArchive* arc)
{
	OSInitFastCast();

	J2DPane* pane  = m_mapCounter->search('map');
	J2DPane* pane2 = pane->getParentPane();
	if (pane2) {
		pane2 = pane->getParentPane();
		pane2->removeChild(pane);
	}

	m_iconScreen = new P2DScreen::Mgr_tuning;
	m_iconScreen->set("map_icon.blo", 0x40000, arc);

	m_rootPane = m_iconScreen->search('ROOT');

	J2DPictureEx* pic = static_cast<J2DPictureEx*>(og::Screen::TagSearch(m_iconScreen, 'piki__b'));
	pic->setWhite(msVal.m_tempPikiColorWhite);
	pic->setBlack(msVal.m_tempPikiColorBlack);

	m_iconScreen2 = new P2DScreen::Mgr_tuning;
	m_iconScreen2->set("map_icon.blo", 0x40000, arc);
	setMapTexture();

	m_mapPosition.x = -m_mapTextureDimensions.x / 2;
	m_mapPosition.y = -m_mapTextureDimensions.y / 2;

	if (m_disp->m_activeNavi) {
		Vector3f aNaviPos = Game::naviMgr->getActiveNavi()->getPosition();
		f32 xpos;
		f32 ypos;
		if (m_disp->m_inCave) {
			if (Game::Cave::randMapMgr) {
				Game::Cave::randMapMgr->getPositionOnTex(aNaviPos, xpos, ypos);
				m_mapPosition.x = -(xpos + 0.2f);
				m_mapPosition.y = -(ypos + 0.6f);
			}

		} else {
			// xpos = 0.0f;
			if (m_disp->m_inCave) {
				ypos = aNaviPos.z * 0.047f + -0.6f;
				xpos = aNaviPos.x * 0.047f + -0.2f;

			} else {
				if (m_disp->m_courseIndex == 3) {
					xpos = (m_mapBounds.x * 1400.0f) / 4705.6f;
				}
				ypos = m_mapBounds.y * 0.5f + aNaviPos.z * 0.058f + -8.85f;
				xpos += m_mapBounds.x * 0.5f + aNaviPos.x * 0.058f + 24.5f;
			}
			m_mapPosition.x = -(xpos);
			m_mapPosition.y = -(ypos);
		}
	}
	m_mapTexScale.x = m_mapBounds.x / m_mapTextureDimensions.x;
	m_mapTexScale.y = m_mapBounds.y / m_mapTextureDimensions.y;
	m_pane_Ncompas  = m_mapCounter->search('Ncompas');
	m_compassPic    = static_cast<J2DPictureEx*>(m_iconScreen2->search('compass'));

	J2DPane* iconPane   = m_iconScreen->search('compass');
	J2DPane* iconParent = iconPane->getParentPane();
	if (iconParent) {
		iconParent = iconPane->getParentPane();
		iconParent->removeChild(iconPane);
	}

	m_radarPaneList = new J2DPane**[MAX_RADAR_COUNT];
	for (int i = 0; i < MAX_RADAR_COUNT; i++) {
		J2DPane** pane = new J2DPane*;
		if (pane) {
			*pane = nullptr;
		}
		m_radarPaneList[i] = pane;
	}

	int count        = 0;
	m_caveLabelCount = 0;
	if (Radar::mgr) {
		if (!m_disp->m_activeNavi) {
			Radar::mgr->ogDummpyInit();
		}

		FOREACH_NODE(Radar::Point, Radar::mgr->m_pointNode1.m_child, cPoint)
		{
			int id = cPoint->m_objType;
			JUT_ASSERTLINE(569, id >= 0 && id < 22, "Radar type ERR!! (%d)\n", id);
			Vector2f cPos = cPoint->getPosition();

			f32 xpos, ypos;
			xpos = 0.0f;
			if (m_disp->m_inCave) {
				ypos = cPos.y * 0.047f + -0.6f;
				xpos = cPos.x * 0.047f + -0.2f;

			} else {
				if (m_disp->m_courseIndex == 3) {
					xpos = (m_mapBounds.x * 1400.0f) / 4705.6f;
				}
				ypos = m_mapBounds.y * 0.5f + cPos.y * 0.058f + -8.85f;
				xpos += m_mapBounds.x * 0.5f + cPos.x * 0.058f + 24.5f;
			}

			xpos = -(xpos + 0.0f);
			ypos = -(ypos + 0.0f);

			u64 tag        = map_icon_tag[id];
			J2DPane* cPane = og::Screen::TagSearch(m_iconScreen, map_icon_tag[id]);
			cPane->getTypeID();
			char buf[28];
			og::Screen::TagToName(tag, buf);

			switch (id) {
			case Radar::MAP_OLIMAR:
				Game::Navi* olimar = getNaviPtr(0);
				m_olimarObj        = olimar;
				if (m_olimarObj) {
					J2DPictureEx* olimarPane = static_cast<J2DPictureEx*>(og::Screen::TagSearch(m_iconScreen, 'orima_l'));
					m_olimarGlow             = og::Screen::CopyPictureToPane(olimarPane, m_mapTexPane, xpos, ypos, 'ie_Orima');
					m_olimarArrow = og::Screen::CopyPictureToPane(static_cast<J2DPictureEx*>(cPane), m_mapTexPane, xpos, ypos, 'ic_Orima');
				}
				break;

			case Radar::MAP_LOUIE_PRESIDENT:
				Game::Navi* louie = getNaviPtr(1);
				m_louieObj        = louie;
				if (m_louieObj) {
					J2DPictureEx* louiePane = static_cast<J2DPictureEx*>(og::Screen::TagSearch(m_iconScreen, 'luji_l'));
					m_louieGlow             = og::Screen::CopyPictureToPane(louiePane, m_mapTexPane, xpos, ypos, 'ie_Luji');
					m_louieArrow = og::Screen::CopyPictureToPane(static_cast<J2DPictureEx*>(cPane), m_mapTexPane, xpos, ypos, 'ic_Luji');
				}
				break;

			case Radar::MAP_TREASURE:
			case Radar::MAP_SWALLOWED_TREASURE:
			case Radar::MAP_UPGRADE:
			case Radar::MAP_INCOMPLETE_CAVE:
				if (id == Radar::MAP_UPGRADE) { }
				if (id == Radar::MAP_COMPLETED_CAVE || id == Radar::MAP_INCOMPLETE_CAVE) {
					appendCaveName(pane, count & 0xffff, og::Screen::maskTag(caveIDtoMsgID(cPoint->_20), 1, 3));
				}
				m_radarPaneList[count][0] = pane;
				count++;
				break;
			}
			if (count >= MAX_RADAR_COUNT)
				break;
		}
	}

	m_mapIconNum = count;
	tuningIcon();
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stmw     r21, 0xa4(r1)
	mr       r31, r3
	lis      r5, lbl_8048E1A8@ha
	li       r3, 4
	mr       r23, r4
	addi     r25, r5, lbl_8048E1A8@l
	oris     r3, r3, 4
	mtspr    0x392, r3
	li       r3, 5
	oris     r3, r3, 5
	mtspr    0x393, r3
	li       r3, 6
	oris     r3, r3, 6
	mtspr    0x394, r3
	li       r3, 7
	oris     r3, r3, 7
	mtspr    0x395, r3
	lwz      r3, 0xac(r31)
	lis      r4, 0x006D6170@ha
	li       r5, 0
	lwz      r12, 0(r3)
	addi     r6, r4, 0x006D6170@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r24, r3
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_8030FE38
	mr       r3, r24
	bl       getParentPane__7J2DPaneFv
	mr       r4, r24
	bl       removeChild__7J2DPaneFP7J2DPane

lbl_8030FE38:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030FE50
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8030FE50:
	stw      r0, 0xbc(r31)
	mr       r6, r23
	addi     r4, r25, 0xa8
	lis      r5, 4
	lwz      r3, 0xbc(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r3, 0xbc(r31)
	lis      r4, 0x524F4F54@ha
	addi     r6, r4, 0x524F4F54@l
	li       r5, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc4(r31)
	lis      r5, 0x695F5F62@ha
	lis      r4, 0x0070696B@ha
	lwz      r3, 0xbc(r31)
	addi     r6, r5, 0x695F5F62@l
	addi     r5, r4, 0x0070696B@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	lis      r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
	mr       r24, r3
	addi     r5, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
	lwz      r0, 0x48(r5)
	addi     r4, r1, 0x1c
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
	mr       r3, r24
	addi     r5, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
	addi     r4, r1, 0x18
	lwz      r0, 0x4c(r5)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r24)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8030FF0C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8030FF0C:
	stw      r0, 0x124(r31)
	mr       r6, r23
	addi     r4, r25, 0xa8
	lis      r5, 4
	lwz      r3, 0x124(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	mr       r3, r31
	bl       setMapTexture__Q32og9newScreen11ObjSMenuMapFv
	lfs      f0, 0xf8(r31)
	lfs      f1, lbl_8051D760@sda21(r2)
	fneg     f0, f0
	fmuls    f0, f0, f1
	stfs     f0, 0xe0(r31)
	lfs      f0, 0xfc(r31)
	fneg     f0, f0
	fmuls    f0, f0, f1
	stfs     f0, 0xe4(r31)
	lwz      r4, 0xa8(r31)
	lbz      r0, 0x4a(r4)
	cmplwi   r0, 0
	beq      lbl_803100B0
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	mr       r4, r3
	addi     r3, r1, 0x7c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x7c(r1)
	lfs      f1, 0x80(r1)
	lfs      f0, 0x84(r1)
	stfs     f2, 0x70(r1)
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	lwz      r5, 0xa8(r31)
	lbz      r0, 0x49(r5)
	cmplwi   r0, 0
	beq      lbl_8030FFF0
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803100B0
	addi     r4, r1, 0x70
	addi     r5, r1, 8
	addi     r6, r1, 0xc
	bl       "getPositionOnTex__Q34Game4Cave10RandMapMgrFR10Vector3<f>RfRf"
	lfs      f2, lbl_8051D748@sda21(r2)
	lfs      f0, 8(r1)
	lfs      f1, lbl_8051D750@sda21(r2)
	fadds    f0, f2, f0
	fneg     f0, f0
	stfs     f0, 0xe0(r31)
	lfs      f0, 0xc(r1)
	fadds    f0, f1, f0
	fneg     f0, f0
	stfs     f0, 0xe4(r31)
	b        lbl_803100B0

lbl_8030FFF0:
	stfs     f0, 0x2c(r1)
	lfs      f8, lbl_8051D740@sda21(r2)
	stfs     f2, 0x28(r1)
	lwz      r0, 0x2c(r1)
	fmr      f7, f8
	lwz      r4, 0x28(r1)
	stw      r0, 0x34(r1)
	stw      r4, 0x30(r1)
	lfs      f4, 0x34(r1)
	beq      lbl_8031003C
	lfs      f3, lbl_8051D74C@sda21(r2)
	lfs      f0, lbl_8051D750@sda21(r2)
	lfs      f2, 0x30(r1)
	lfs      f1, lbl_8051D748@sda21(r2)
	fmadds   f0, f3, f4, f0
	fmadds   f1, f3, f2, f1
	fadds    f7, f7, f0
	fadds    f8, f8, f1
	b        lbl_803100A0

lbl_8031003C:
	lwz      r0, 0x3c(r5)
	fmr      f6, f8
	cmpwi    r0, 3
	bne      lbl_80310060
	lfs      f2, lbl_8051D754@sda21(r2)
	lfs      f1, 0xf8(r31)
	lfs      f0, lbl_8051D758@sda21(r2)
	fmuls    f1, f2, f1
	fdivs    f6, f1, f0

lbl_80310060:
	lfs      f2, lbl_8051D764@sda21(r2)
	lfs      f1, 0x30(r1)
	lfs      f3, 0xf8(r31)
	fmuls    f0, f2, f4
	fmuls    f2, f2, f1
	lfs      f4, lbl_8051D760@sda21(r2)
	lfs      f1, 0xfc(r31)
	lfs      f5, lbl_8051D75C@sda21(r2)
	fmadds   f3, f3, f4, f2
	lfs      f2, lbl_8051D768@sda21(r2)
	fmadds   f0, f1, f4, f0
	fadds    f1, f5, f3
	fadds    f0, f2, f0
	fadds    f1, f6, f1
	fadds    f7, f7, f0
	fadds    f8, f8, f1

lbl_803100A0:
	fneg     f1, f8
	fneg     f0, f7
	stfs     f1, 0xe0(r31)
	stfs     f0, 0xe4(r31)

lbl_803100B0:
	lfs      f1, 0x100(r31)
	lis      r5, 0x6D706173@ha
	lfs      f0, 0xf8(r31)
	lis      r4, 0x004E636F@ha
	addi     r6, r5, 0x6D706173@l
	fdivs    f0, f1, f0
	addi     r5, r4, 0x004E636F@l
	stfs     f0, 0xf0(r31)
	lfs      f1, 0x104(r31)
	lfs      f0, 0xfc(r31)
	fdivs    f0, f1, f0
	stfs     f0, 0xf4(r31)
	lwz      r3, 0xac(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x128(r31)
	lis      r5, 0x70617373@ha
	lis      r4, 0x00636F6D@ha
	lwz      r3, 0x124(r31)
	addi     r6, r5, 0x70617373@l
	addi     r5, r4, 0x00636F6D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x12c(r31)
	lis      r5, 0x70617373@ha
	lis      r4, 0x00636F6D@ha
	lwz      r3, 0xbc(r31)
	addi     r6, r5, 0x70617373@l
	addi     r5, r4, 0x00636F6D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r23, r3
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_80310164
	mr       r3, r23
	bl       getParentPane__7J2DPaneFv
	mr       r4, r23
	bl       removeChild__7J2DPaneFP7J2DPane

lbl_80310164:
	li       r3, 0x320
	bl       __nwa__FUl
	li       r24, 0
	stw      r3, 0xcc(r31)
	mr       r23, r24
	li       r26, 0

lbl_8031017C:
	li       r3, 4
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80310190
	stw      r23, 0(r3)

lbl_80310190:
	lwz      r4, 0xcc(r31)
	addi     r26, r26, 1
	cmpwi    r26, 0xc8
	stwx     r3, r4, r24
	addi     r24, r24, 4
	blt      lbl_8031017C
	li       r0, 0
	li       r29, 0
	stw      r0, 0x154(r31)
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803109DC
	lwz      r4, 0xa8(r31)
	lbz      r0, 0x4a(r4)
	cmplwi   r0, 0
	bne      lbl_803101D4
	bl       ogDummpyInit__Q25Radar3MgrFv

lbl_803101D4:
	lwz      r6, mgr__5Radar@sda21(r13)
	lis      r5, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lis      r4, map_icon_tag__Q22og9newScreen@ha
	li       r26, 0
	lwz      r28, 0x10(r6)
	addi     r30, r5, msVal__Q32og9newScreen11ObjSMenuMap@l
	addi     r24, r4, map_icon_tag__Q22og9newScreen@l
	b        lbl_803109D4

lbl_803101F4:
	lwz      r23, 0x18(r28)
	cmpwi    r23, 0
	blt      lbl_80310208
	cmpwi    r23, 0x16
	blt      lbl_80310220

lbl_80310208:
	mr       r6, r23
	addi     r3, r25, 0xc
	addi     r5, r25, 0xb8
	li       r4, 0x239
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80310220:
	mr       r4, r28
	addi     r3, r1, 0x40
	bl       getPosition__Q25Radar5PointFv
	lfs      f0, 0x44(r1)
	lfs      f1, 0x40(r1)
	stfs     f0, 0x4c(r1)
	lwz      r5, 0xa8(r31)
	stfs     f1, 0x48(r1)
	lfs      f30, lbl_8051D740@sda21(r2)
	stfs     f1, 0x4c(r1)
	lbz      r0, 0x49(r5)
	fmr      f31, f30
	stfs     f0, 0x48(r1)
	lwz      r4, 0x4c(r1)
	cmplwi   r0, 0
	lwz      r0, 0x48(r1)
	stw      r4, 0x3c(r1)
	stw      r0, 0x38(r1)
	lfs      f4, 0x3c(r1)
	beq      lbl_80310294
	lfs      f3, lbl_8051D74C@sda21(r2)
	lfs      f0, lbl_8051D750@sda21(r2)
	lfs      f2, 0x38(r1)
	lfs      f1, lbl_8051D748@sda21(r2)
	fmadds   f0, f3, f4, f0
	fmadds   f1, f3, f2, f1
	fadds    f31, f31, f0
	fadds    f30, f30, f1
	b        lbl_803102F8

lbl_80310294:
	lwz      r0, 0x3c(r5)
	fmr      f6, f30
	cmpwi    r0, 3
	bne      lbl_803102B8
	lfs      f2, lbl_8051D754@sda21(r2)
	lfs      f1, 0xf8(r31)
	lfs      f0, lbl_8051D758@sda21(r2)
	fmuls    f1, f2, f1
	fdivs    f6, f1, f0

lbl_803102B8:
	lfs      f2, lbl_8051D764@sda21(r2)
	lfs      f1, 0x38(r1)
	lfs      f3, 0xf8(r31)
	fmuls    f0, f2, f4
	fmuls    f2, f2, f1
	lfs      f4, lbl_8051D760@sda21(r2)
	lfs      f1, 0xfc(r31)
	lfs      f5, lbl_8051D75C@sda21(r2)
	fmadds   f3, f3, f4, f2
	lfs      f2, lbl_8051D768@sda21(r2)
	fmadds   f0, f1, f4, f0
	fadds    f1, f5, f3
	fadds    f0, f2, f0
	fadds    f1, f6, f1
	fadds    f31, f31, f0
	fadds    f30, f30, f1

lbl_803102F8:
	slwi     r0, r23, 3
	lwz      r3, 0xbc(r31)
	add      r4, r24, r0
	lwz      r22, 0(r4)
	lwz      r21, 4(r4)
	mr       r5, r22
	mr       r6, r21
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r21
	mr       r3, r22
	addi     r5, r1, 0x88
	bl       TagToName__Q22og6ScreenFUxPc
	cmpwi    r23, 0xf
	beq      lbl_80310828
	bge      lbl_80310358
	cmpwi    r23, 0xd
	beq      lbl_803105C8
	bge      lbl_80310364
	b        lbl_80310828

lbl_80310358:
	cmpwi    r23, 0x14
	bge      lbl_80310828
	b        lbl_803109C8

lbl_80310364:
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x6c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x60(r1)
	stw      r0, 0x64(r1)
	stw      r3, 0x68(r1)
	bne      lbl_803103A4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_8031052C

lbl_803103A4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_80310410

lbl_803103BC:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8031052C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_80310410:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803103BC
	b        lbl_8031052C

lbl_80310430:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r23, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80310470
	lhz      r0, 0x2dc(r23)
	cmpwi    r0, 0
	bne      lbl_80310470
	b        lbl_80310550

lbl_80310470:
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	bne      lbl_8031049C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_8031052C

lbl_8031049C:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_80310510

lbl_803104BC:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8031052C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_80310510:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803104BC

lbl_8031052C:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x64(r1)
	cmplw    r4, r3
	bne      lbl_80310430
	li       r23, 0

lbl_80310550:
	stw      r23, 0xd4(r31)
	lwz      r0, 0xd4(r31)
	cmplwi   r0, 0
	beq      lbl_803109C8
	lis      r5, 0x6D615F6C@ha
	lis      r4, 0x006F7269@ha
	lwz      r3, 0xbc(r31)
	addi     r6, r5, 0x6D615F6C@l
	addi     r5, r4, 0x006F7269@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	fmr      f1, f30
	lis      r6, 0x72696D61@ha
	lis      r5, 0x69655F4F@ha
	fmr      f2, f31
	lwz      r4, 0xc8(r31)
	addi     r6, r6, 0x72696D61@l
	addi     r5, r5, 0x69655F4F@l
	bl       CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
	stw      r3, 0x130(r31)
	lis      r6, 0x72696D61@ha
	fmr      f1, f30
	lis      r5, 0x69635F4F@ha
	fmr      f2, f31
	lwz      r4, 0xc8(r31)
	mr       r3, r27
	addi     r6, r6, 0x72696D61@l
	addi     r5, r5, 0x69635F4F@l
	bl       CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
	stw      r3, 0xd0(r31)
	b        lbl_803109C8

lbl_803105C8:
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x5c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x50(r1)
	stw      r0, 0x54(r1)
	stw      r3, 0x58(r1)
	bne      lbl_80310608
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80310790

lbl_80310608:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80310674

lbl_80310620:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80310790
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80310674:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80310620
	b        lbl_80310790

lbl_80310694:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r23, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803106D4
	lhz      r0, 0x2dc(r23)
	cmpwi    r0, 1
	bne      lbl_803106D4
	b        lbl_803107B4

lbl_803106D4:
	lwz      r0, 0x5c(r1)
	cmplwi   r0, 0
	bne      lbl_80310700
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80310790

lbl_80310700:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80310774

lbl_80310720:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80310790
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80310774:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80310720

lbl_80310790:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r1)
	cmplw    r4, r3
	bne      lbl_80310694
	li       r23, 0

lbl_803107B4:
	stw      r23, 0xdc(r31)
	lwz      r0, 0xdc(r31)
	cmplwi   r0, 0
	beq      lbl_803109C8
	lis      r4, 0x6A695F6C@ha
	lwz      r3, 0xbc(r31)
	addi     r6, r4, 0x6A695F6C@l
	li       r5, 0x6c75
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	fmr      f1, f30
	lis      r6, 0x4C756A69@ha
	lis      r5, 0x0069655F@ha
	fmr      f2, f31
	lwz      r4, 0xc8(r31)
	addi     r6, r6, 0x4C756A69@l
	addi     r5, r5, 0x0069655F@l
	bl       CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
	stw      r3, 0x134(r31)
	lis      r6, 0x4C756A69@ha
	fmr      f1, f30
	lis      r5, 0x0069635F@ha
	fmr      f2, f31
	lwz      r4, 0xc8(r31)
	mr       r3, r27
	addi     r6, r6, 0x4C756A69@l
	addi     r5, r5, 0x0069635F@l
	bl       CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
	stw      r3, 0xd8(r31)
	b        lbl_803109C8

lbl_80310828:
	lis      r4, 0x66666667@ha
	lis      r5, 0x5F303030@ha
	addi     r0, r4, 0x66666667@l
	lis      r6, 0x69636F6E@ha
	mulhw    r11, r0, r29
	addi     r7, r5, 0x5F303030@l
	lis      r4, 0x51EB851F@ha
	fmr      f1, f30
	addi     r6, r6, 0x69636F6E@l
	fmr      f2, f31
	srawi    r8, r11, 2
	addi     r5, r4, 0x51EB851F@l
	srwi     r9, r8, 0x1f
	lwz      r4, 0xc8(r31)
	add      r8, r8, r9
	mr       r3, r27
	mulli    r8, r8, 0xa
	subf     r9, r8, r29
	srawi    r8, r9, 0x1f
	addc     r10, r9, r7
	adde     r9, r8, r6
	srawi    r6, r11, 2
	srwi     r7, r6, 0x1f
	add      r8, r6, r7
	mulhw    r6, r0, r8
	srawi    r6, r6, 2
	srwi     r7, r6, 0x1f
	add      r6, r6, r7
	mulli    r6, r6, 0xa
	subf     r6, r6, r8
	slwi     r7, r6, 8
	srawi    r6, r7, 0x1f
	addc     r8, r10, r7
	mulhw    r5, r5, r29
	adde     r7, r9, r6
	srawi    r5, r5, 5
	srwi     r6, r5, 0x1f
	add      r6, r5, r6
	mulhw    r0, r0, r6
	srawi    r0, r0, 2
	srwi     r5, r0, 0x1f
	add      r0, r0, r5
	mulli    r0, r0, 0xa
	subf     r0, r0, r6
	slwi     r5, r0, 0x10
	srawi    r0, r5, 0x1f
	addc     r6, r8, r5
	adde     r5, r7, r0
	bl       CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
	or.      r27, r3, r3
	beq      lbl_803109C8
	cmpwi    r23, 0x12
	bne      lbl_80310978
	lbz      r7, 0x13(r30)
	addi     r4, r1, 0x14
	lbz      r6, 0x14(r30)
	lbz      r5, 0x15(r30)
	lbz      r0, 0x16(r30)
	stb      r7, 0x24(r1)
	lbz      r8, 0x17(r30)
	stb      r6, 0x25(r1)
	lbz      r7, 0x18(r30)
	stb      r5, 0x26(r1)
	lbz      r6, 0x19(r30)
	stb      r0, 0x27(r1)
	lbz      r5, 0x1a(r30)
	lwz      r0, 0x24(r1)
	stb      r8, 0x20(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	stb      r7, 0x21(r1)
	lwz      r12, 0x12c(r12)
	stb      r6, 0x22(r1)
	stb      r5, 0x23(r1)
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r1)
	mr       r3, r27
	addi     r4, r1, 0x10
	stw      r0, 0x10(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl

lbl_80310978:
	cmpwi    r23, 0xb
	beq      lbl_80310988
	cmpwi    r23, 0x14
	bne      lbl_803109B4

lbl_80310988:
	lwz      r3, 0x20(r28)
	bl       caveIDtoMsgID__Q22og9newScreenFUl
	li       r5, 1
	li       r6, 3
	bl       maskTag__Q22og6ScreenFUxUsUs
	mr       r7, r3
	mr       r8, r4
	mr       r3, r31
	mr       r4, r27
	clrlwi   r5, r29, 0x10
	bl       appendCaveName__Q32og9newScreen11ObjSMenuMapFP7J2DPaneUsUx

lbl_803109B4:
	lwz      r4, 0xcc(r31)
	addi     r29, r29, 1
	lwzx     r4, r4, r26
	addi     r26, r26, 4
	stw      r27, 0(r4)

lbl_803109C8:
	cmpwi    r29, 0xc8
	bge      lbl_803109DC
	lwz      r28, 4(r28)

lbl_803109D4:
	cmplwi   r28, 0
	bne      lbl_803101F4

lbl_803109DC:
	stw      r29, 0x11c(r31)
	mr       r3, r31
	bl       tuningIcon__Q32og9newScreen11ObjSMenuMapFv
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	lmw      r21, 0xa4(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80310A0C
 * Size:	0001E4
 */
void ObjSMenuMap::appendCaveName(J2DPane* parent, u16 caveIndex, u64 tag)
{
	char buf[60];
	u64 newtag = og::Screen::maskTag2('caveTx??', caveIndex);
	og::Screen::TagToName(tag, buf);
	const JGeometry::TBox2f box(30.0f, 0.0f, 40.0f, 10.0f);

	J2DTextBox* pane = new J2DTextBox(newtag, box, nullptr, "", -1, J2DTextBoxHBinding(2), J2DTextBoxVBinding(2));
	pane->_11C       = 24.0f;
	pane->_120       = 24.0f;
	pane->m_color1   = JUtility::TColor(-1);
	pane->m_color2   = JUtility::TColor(-1);
	pane->setBlackWhite(JUtility::TColor(0), JUtility::TColor(-1));
	parent->appendChild(pane);
	pane->m_messageID = tag;

	if (m_caveLabelCount < MAX_CAVEDISP_NAME) {
		m_caveLabelTextBoxes[m_caveLabelCount] = pane;
		m_caveLabelCount++;
	} else {
		JUT_PANICLINE(745, "cave name number is overflow!!\n");
	}

	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  lis       r9, 0x5478
	  lis       r6, 0x6361
	  stw       r0, 0x74(r1)
	  stmw      r25, 0x54(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r30, r7
	  mr        r29, r8
	  addi      r4, r9, 0x3F3F
	  addi      r3, r6, 0x7665
	  bl        -0xE228
	  mr        r25, r4
	  mr        r26, r3
	  mr        r4, r29
	  mr        r3, r30
	  addi      r5, r1, 0x40
	  bl        -0xDE88
	  lfs       f3, -0xBE8(r2)
	  li        r3, 0x138
	  lfs       f2, -0xC20(r2)
	  lfs       f1, -0xBE4(r2)
	  lfs       f0, -0xBE0(r2)
	  stfs      f3, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x2ECBD8
	  mr.       r31, r3
	  beq-      .loc_0xA8
	  li        r0, 0x2
	  mr        r6, r25
	  stw       r0, 0x8(r1)
	  mr        r5, r26
	  addi      r7, r1, 0x30
	  li        r8, 0
	  stw       r0, 0xC(r1)
	  subi      r9, r2, 0xBDC
	  li        r10, -0x1
	  bl        -0x2CF5C0
	  mr        r31, r3

	.loc_0xA8:
	  li        r8, 0xFF
	  li        r0, 0
	  stb       r8, 0x2C(r1)
	  mr        r3, r31
	  lfs       f0, -0xBD8(r2)
	  addi      r4, r1, 0x14
	  stb       r8, 0x2D(r1)
	  addi      r5, r1, 0x10
	  stfs      f0, 0x11C(r31)
	  stb       r8, 0x2E(r1)
	  stb       r8, 0x2F(r1)
	  lwz       r6, 0x2C(r1)
	  stfs      f0, 0x120(r31)
	  stw       r6, 0x1C(r1)
	  lbz       r7, 0x1C(r1)
	  stb       r8, 0x28(r1)
	  lbz       r6, 0x1D(r1)
	  stb       r7, 0x104(r31)
	  lbz       r7, 0x1E(r1)
	  stb       r6, 0x105(r31)
	  lbz       r6, 0x1F(r1)
	  stb       r7, 0x106(r31)
	  stb       r8, 0x29(r1)
	  stb       r8, 0x2A(r1)
	  stb       r8, 0x2B(r1)
	  lwz       r7, 0x28(r1)
	  stb       r6, 0x107(r31)
	  stw       r7, 0x18(r1)
	  lbz       r6, 0x18(r1)
	  lbz       r7, 0x19(r1)
	  stb       r6, 0x108(r31)
	  lbz       r6, 0x1A(r1)
	  stb       r7, 0x109(r31)
	  lbz       r7, 0x1B(r1)
	  stb       r6, 0x10A(r31)
	  stb       r8, 0x24(r1)
	  stb       r8, 0x25(r1)
	  stb       r8, 0x26(r1)
	  stb       r8, 0x27(r1)
	  stb       r0, 0x20(r1)
	  lwz       r6, 0x24(r1)
	  stb       r7, 0x10B(r31)
	  stb       r0, 0x21(r1)
	  stb       r0, 0x22(r1)
	  stb       r0, 0x23(r1)
	  lwz       r0, 0x20(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x2D94C8
	  stw       r29, 0x1C(r31)
	  stw       r30, 0x18(r31)
	  lwz       r0, 0x154(r27)
	  cmpwi     r0, 0x5
	  bge-      .loc_0x1B4
	  rlwinm    r0,r0,2,0,29
	  add       r3, r27, r0
	  stw       r31, 0x140(r3)
	  lwz       r3, 0x154(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x154(r27)
	  b         .loc_0x1D0

	.loc_0x1B4:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1E4C
	  li        r4, 0x2E9
	  subi      r5, r5, 0x1D88
	  crclr     6, 0x6
	  bl        -0x2E6598

	.loc_0x1D0:
	  lmw       r25, 0x54(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void ObjSMenuMap::rotateMap(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80310BF0
 * Size:	0002E8
 */
void ObjSMenuMap::transMap()
{
	f32 factor = msVal.m_mapMoveRate;
	if (m_radarMapTexture) {
		factor = msVal.m_mapMoveRate2;
	}

	f32 angle    = (m_mapAngle * TAU) / 360.0f;
	f32 anglesin = pikmin2_sinf(angle) * 2.0f;
	f32 anglecos = pikmin2_cosf(angle) * 2.0f;
	int buttons  = m_controller->m_padButton.m_mask;
	f32 inputx   = m_controller->m_padMStick.m_xPos;
	f32 inputz   = m_controller->m_padMStick.m_xPos;

	if (buttons & JUTGamePad::PRESS_DPAD_UP) {
		inputz = 1.0f;
	}
	if (buttons & JUTGamePad::PRESS_DPAD_DOWN) {
		inputz = -1.0f;
	}
	if (buttons & JUTGamePad::PRESS_DPAD_LEFT) {
		inputx = -1.0f;
	}
	if (buttons & JUTGamePad::PRESS_DPAD_RIGHT) {
		inputx = 1.0f;
	}
	f32 diff;
	_sqrtf(inputx * inputx + inputz * inputz, &diff);
	if (diff > 1.0f)
		diff = 1.0f;
	diff *= msVal.m_mapMoveInputReduction;
	if (diff < 0.1f)
		diff = 0.0f;
	f32 move = factor * diff * (1.0f / m_currentZoom);

	if (inputx > 0.1f) {
		m_mapPosition.x += move * anglesin;
		m_mapPosition.y += move * anglecos;
		ogSound->setScroll();
	}
	if (inputx < -0.1f) {
		m_mapPosition.x -= move * anglesin;
		m_mapPosition.y -= move * anglecos;
		ogSound->setScroll();
	}
	if (inputz > 0.1f) {
		m_mapPosition.x += move * anglecos;
		m_mapPosition.y += move * anglesin;
		ogSound->setScroll();
	}
	if (inputx < -0.1f) {
		m_mapPosition.x -= move * anglecos;
		m_mapPosition.y -= move * anglesin;
		ogSound->setScroll();
	}

	if (m_mapPosition.x < -m_mapTextureDimensions.x)
		m_mapPosition.x = -m_mapTextureDimensions.x;
	if (m_mapPosition.x > 0.0f)
		m_mapPosition.x = 0.0f;

	if (m_mapPosition.y < -m_mapTextureDimensions.y)
		m_mapPosition.y = -m_mapTextureDimensions.y;
	if (m_mapPosition.y > 0.0f)
		m_mapPosition.y = 0.0f;
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stfd     f27, 0x30(r1)
	psq_st   f27, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lwz      r0, 0xc0(r31)
	addi     r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	lfs      f0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_80310C48
	lfs      f0, 0x20(r3)

lbl_80310C48:
	lfs      f3, lbl_8051D78C@sda21(r2)
	lfs      f1, 0xec(r31)
	lfs      f2, lbl_8051D790@sda21(r2)
	fmuls    f3, f3, f1
	lfs      f1, lbl_8051D740@sda21(r2)
	fdivs    f4, f3, f2
	fmr      f2, f4
	fcmpo    cr0, f4, f1
	bge      lbl_80310C70
	fneg     f2, f4

lbl_80310C70:
	lfs      f3, lbl_8051D794@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f1, lbl_8051D740@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f4, f1
	fctiwz   f1, f2
	stfd     f1, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f31, 4(r3)
	bge      lbl_80310CC8
	lfs      f1, lbl_8051D798@sda21(r2)
	fmuls    f1, f4, f1
	fctiwz   f1, f1
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0
	fneg     f30, f1
	b        lbl_80310CE0

lbl_80310CC8:
	fmuls    f1, f4, f3
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_80310CE0:
	lwz      r3, 0x118(r31)
	lwz      r4, 0x18(r3)
	lfs      f28, 0x48(r3)
	rlwinm.  r0, r4, 0, 0x1c, 0x1c
	lfs      f27, 0x4c(r3)
	beq      lbl_80310CFC
	lfs      f27, lbl_8051D744@sda21(r2)

lbl_80310CFC:
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_80310D08
	lfs      f27, lbl_8051D79C@sda21(r2)

lbl_80310D08:
	clrlwi.  r0, r4, 0x1f
	beq      lbl_80310D14
	lfs      f28, lbl_8051D79C@sda21(r2)

lbl_80310D14:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_80310D20
	lfs      f28, lbl_8051D744@sda21(r2)

lbl_80310D20:
	fmuls    f3, f28, f28
	lfs      f1, lbl_8051D740@sda21(r2)
	fmuls    f2, f27, f27
	fadds    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_80310D48
	ble      lbl_80310D4C
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_80310D4C

lbl_80310D48:
	fmr      f2, f1

lbl_80310D4C:
	lfs      f1, lbl_8051D744@sda21(r2)
	fmr      f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_80310D60
	fmr      f3, f1

lbl_80310D60:
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lfs      f1, lbl_8051D7A0@sda21(r2)
	addi     r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	lfs      f2, 0x3c(r3)
	fmuls    f4, f3, f2
	fcmpo    cr0, f4, f1
	bge      lbl_80310D80
	lfs      f4, lbl_8051D740@sda21(r2)

lbl_80310D80:
	lfs      f3, lbl_8051D744@sda21(r2)
	lfs      f2, 0xe8(r31)
	lfs      f1, lbl_8051D7A0@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f0, f0, f2
	fcmpo    cr0, f28, f1
	fmuls    f29, f4, f0
	ble      lbl_80310DC0
	lfs      f0, 0xe0(r31)
	fnmsubs  f0, f29, f31, f0
	stfs     f0, 0xe0(r31)
	lfs      f0, 0xe4(r31)
	fnmsubs  f0, f29, f30, f0
	stfs     f0, 0xe4(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setScroll__Q22og5SoundFv

lbl_80310DC0:
	lfs      f0, lbl_8051D7A4@sda21(r2)
	fcmpo    cr0, f28, f0
	bge      lbl_80310DEC
	lfs      f0, 0xe0(r31)
	fmadds   f0, f29, f31, f0
	stfs     f0, 0xe0(r31)
	lfs      f0, 0xe4(r31)
	fmadds   f0, f29, f30, f0
	stfs     f0, 0xe4(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setScroll__Q22og5SoundFv

lbl_80310DEC:
	lfs      f0, lbl_8051D7A0@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_80310E18
	lfs      f0, 0xe0(r31)
	fnmsubs  f0, f29, f30, f0
	stfs     f0, 0xe0(r31)
	lfs      f0, 0xe4(r31)
	fmadds   f0, f29, f31, f0
	stfs     f0, 0xe4(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setScroll__Q22og5SoundFv

lbl_80310E18:
	lfs      f0, lbl_8051D7A4@sda21(r2)
	fcmpo    cr0, f27, f0
	bge      lbl_80310E44
	lfs      f0, 0xe0(r31)
	fmadds   f0, f29, f30, f0
	stfs     f0, 0xe0(r31)
	lfs      f0, 0xe4(r31)
	fnmsubs  f0, f29, f31, f0
	stfs     f0, 0xe4(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setScroll__Q22og5SoundFv

lbl_80310E44:
	lfs      f0, 0xf8(r31)
	lfs      f1, 0xe0(r31)
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80310E5C
	stfs     f0, 0xe0(r31)

lbl_80310E5C:
	lfs      f1, 0xe0(r31)
	lfs      f0, lbl_8051D740@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80310E70
	stfs     f0, 0xe0(r31)

lbl_80310E70:
	lfs      f0, 0xfc(r31)
	lfs      f1, 0xe4(r31)
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80310E88
	stfs     f0, 0xe4(r31)

lbl_80310E88:
	lfs      f1, 0xe4(r31)
	lfs      f0, lbl_8051D740@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80310E9C
	stfs     f0, 0xe4(r31)

lbl_80310E9C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	psq_l    f27, 56(r1), 0, qr0
	lfd      f27, 0x30(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void ObjSMenuMap::scaleMap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void ObjSMenuMap::setMapColor(void)
{
	// UNUSED FUNCTION
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000054
//  */
// void ObjSMenuMap::calcCaveNameAlpha(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80310ED8
 * Size:	000960
 */
void ObjSMenuMap::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSMenuAll* dispfull = static_cast<og::Screen::DispMemberSMenuAll*>(getDispMember());
	m_disp = static_cast<og::Screen::DispMemberSMenuMap*>(dispfull->getSubMember(OWNER_OGA, MEMBER_START_MENU_MAP));
	if (!m_disp) {
		og::Screen::DispMemberSMenuAll* newdisp = new og::Screen::DispMemberSMenuAll;
		m_disp = static_cast<og::Screen::DispMemberSMenuMap*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_MAP));
	}

	m_mapCounter = new og::Screen::MapCounter(&m_disp->m_dataMap);
	m_mapCounter->set("s_menu_map_l.blo", 0x1040000, arc);
	m_animGroup = new og::Screen::AnimGroup(3);
	og::Screen::registAnimGroupScreen(m_animGroup, arc, m_mapCounter, "s_menu_map_l.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_animGroup, arc, m_mapCounter, "s_menu_map_l_02.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_animGroup, arc, m_mapCounter, "s_menu_map_l_03.btk", msBaseVal._00);
	m_mapCounter->setCallBack(arc);
	m_pane_map = static_cast<J2DPictureEx*>(og::Screen::TagSearch(m_mapCounter, 'map_cent'));

	if (m_disp->m_inCave && m_disp->m_activeNavi) {
		m_startZoom = msVal.m_caveZoom;
	} else {
		m_startZoom = msVal.m_groundZoom;
	}
	m_currentZoom = m_startZoom;
	m_mapAngle    = 0.0f;
	if (m_disp->m_activeNavi) {
		Game::Navi* navi = Game::naviMgr->getActiveNavi();
		Vector3f vec     = Game::cameraMgr->_24[navi->m_naviIndex.typeView]->getViewVector();
		m_mapAngle       = pikmin2_atan2f(vec.x, vec.z);
	}
	initMapIcon(arc);
	JUtility::TColor color  = msVal.m_mapTexColorWhite;
	JUtility::TColor color2 = msVal.m_mapTexColorBlack;
	m_mapTexPane->setWhite(color);
	m_mapTexPane->setBlack(color2);

	u64 tag;
	if (!m_disp->m_inCave || !m_disp->m_activeNavi) {
		int stage = m_disp->m_courseIndex;
		switch (stage) {
		case 0:
			tag = '8390_03';
			break;
		case 1:
			tag = '8391_03';
			break;
		case 2:
			tag = '8392_03';
			break;
		case 3:
			tag = '8393_03';
			break;
		case 4:
			tag = '8394_03';
			break;
		default:
			break;
		}
	} else {
		char buf[20];
		tag = caveIDtoMsgID(m_disp->m_currentCave);
		tag = og::Screen::maskTag(tag, 1, 3);
		og::Screen::TagToName(tag, buf);
	}
	J2DPane* pane     = m_mapCounter->search('Tmapti');
	pane->m_messageID = tag;
	og::Screen::setCallBackMessage(m_iconScreen);

	J2DPane* pane_red    = m_mapCounter->search('Npk01');
	J2DPane* pane_yellow = m_mapCounter->search('Npk02');
	J2DPane* pane_blue   = m_mapCounter->search('Npk03');
	J2DPane* pane_white  = m_mapCounter->search('Npk04');
	J2DPane* pane_purple = m_mapCounter->search('Npk05');

	J2DPane* pane_red2    = m_mapCounter->search('Npk06');
	J2DPane* pane_yellow2 = m_mapCounter->search('Npk07');
	J2DPane* pane_blue2   = m_mapCounter->search('Npk08');
	J2DPane* pane_white2  = m_mapCounter->search('Npk09');
	J2DPane* pane_purple2 = m_mapCounter->search('Npk10');
	J2DPane* pane_free    = m_mapCounter->search('Npk11');

	if (!m_disp->m_unlockedReds) {
		pane_red->m_isVisible  = false;
		pane_red2->m_isVisible = false;
		m_mapCounter->dispRed(false);
	}
	if (!m_disp->m_unlockedYellows) {
		pane_yellow->m_isVisible  = false;
		pane_yellow2->m_isVisible = false;
		m_mapCounter->dispYellow(false);
	}
	if (!m_disp->m_unlockedBlues) {
		pane_blue->m_isVisible  = false;
		pane_blue2->m_isVisible = false;
		m_mapCounter->dispBlue(false);
	}
	if (!m_disp->m_unlockedWhites) {
		pane_white->m_isVisible  = false;
		pane_white2->m_isVisible = false;
		m_mapCounter->dispWhite(false);
	}
	if (!m_disp->m_unlockedPurples) {
		pane_purple->m_isVisible  = false;
		pane_purple2->m_isVisible = false;
		m_mapCounter->dispBlack(false);
	}
	if (!m_disp->m_unlockedReds && !m_disp->m_unlockedYellows && !m_disp->m_unlockedBlues && !m_disp->m_unlockedWhites
	    && !m_disp->m_unlockedPurples) {
		pane_free->m_isVisible = false;
		m_mapCounter->dispFree(false);
	}

	J2DPane* pane_rocket = m_mapCounter->search('Nrocket');
	if (!m_disp->m_unlockedWhites && !m_disp->m_unlockedPurples) {
		pane_rocket->m_isVisible = false;
		pane_rocket              = m_mapCounter->search('Ntairetu');
		pane_rocket->add(0.0f, 0.0f);
	} else {
		pane_rocket->m_isVisible              = true;
		J2DPane* pane_rock1                   = m_mapCounter->search('Nrock_1');
		J2DPane* pane_rock2                   = m_mapCounter->search('Nrock_2');
		pane_rock1->m_isVisible               = false;
		pane_rock2->m_isVisible               = false;
		og::Screen::DispMemberSMenuMap* disp2 = static_cast<og::Screen::DispMemberSMenuMap*>(dispfull->getSubMember('SM', '_MAP'));
		if (disp2->m_dataMap.m_pokos < 10000) {
			pane_rock1->m_isVisible = true;
		} else {
			pane_rock2->m_isVisible = true;
		}
	}
	J2DPane* pane_onyn1     = m_mapCounter->search('Nonyn_1');
	J2DPane* pane_onyn2     = m_mapCounter->search('Nonyn_2');
	J2DPane* pane_onyn3     = m_mapCounter->search('Nonyn_3');
	J2DPane* pane_onyn4     = m_mapCounter->search('Nonyn_4');
	pane_onyn1->m_isVisible = false;
	pane_onyn2->m_isVisible = false;
	pane_onyn3->m_isVisible = false;
	pane_onyn4->m_isVisible = false;
	if (m_disp->m_unlockedReds && m_disp->m_unlockedYellows && m_disp->m_unlockedBlues) {
		pane_onyn4->m_isVisible = true;
	} else if (m_disp->m_unlockedReds && m_disp->m_unlockedBlues) {
		pane_onyn3->m_isVisible = true;
	} else if (m_disp->m_unlockedReds && m_disp->m_unlockedYellows) {
		pane_onyn2->m_isVisible = true;
	} else if (m_disp->m_unlockedReds) {
		pane_onyn1->m_isVisible = true;
	}

	J2DPane* pane_ntai1     = m_mapCounter->search('Ntai_1');
	J2DPane* pane_ntai2     = m_mapCounter->search('Ntai_2');
	pane_ntai1->m_isVisible = false;
	pane_ntai2->m_isVisible = false;
	if (m_disp->m_unlockedBlues) {
		pane_ntai1->m_isVisible = true;
	}
	if (m_disp->m_unlockedYellows) {
		pane_ntai2->m_isVisible = true;
	}
	doCreateAfter(arc, m_mapCounter);

	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	lis      r5, lbl_8048E1A8@ha
	stw      r0, 0x74(r1)
	stmw     r18, 0x38(r1)
	mr       r29, r3
	mr       r30, r4
	addi     r18, r5, lbl_8048E1A8@l
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x5F4D4150@ha
	li       r5, 0x534d
	mr       r31, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x5F4D4150@l
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	stw      r3, 0xa8(r29)
	lwz      r0, 0xa8(r29)
	cmplwi   r0, 0
	bne      lbl_80310F64
	li       r3, 0xc4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80310F40
	bl       __ct__Q32og6Screen18DispMemberSMenuAllFv
	mr       r0, r3

lbl_80310F40:
	lis      r4, 0x004F4741@ha
	lis      r5, 0x5F4D4150@ha
	mr       r31, r0
	mr       r3, r0
	addi     r4, r4, 0x004F4741@l
	addi     r6, r5, 0x5F4D4150@l
	li       r5, 0x534d
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	stw      r3, 0xa8(r29)

lbl_80310F64:
	li       r3, 0x1a8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80310F84
	lwz      r4, 0xa8(r29)
	addi     r4, r4, 8
	bl       __ct__Q32og6Screen10MapCounterFPQ32og6Screen7DataMap
	mr       r0, r3

lbl_80310F84:
	stw      r0, 0xac(r29)
	mr       r6, r30
	addi     r4, r18, 0xf0
	lis      r5, 0x104
	lwz      r3, 0xac(r29)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80310FB8
	li       r4, 3
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_80310FB8:
	stw      r0, 0xb0(r29)
	lis      r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	addi     r7, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
	mr       r4, r30
	lwz      r3, 0xb0(r29)
	addi     r6, r18, 0x104
	lwz      r5, 0xac(r29)
	lfs      f1, 0(r7)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lis      r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lwz      r3, 0xb0(r29)
	lfs      f1, msBaseVal__Q32og9newScreen12ObjSMenuBase@l(r4)
	mr       r4, r30
	lwz      r5, 0xac(r29)
	addi     r6, r18, 0x118
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lis      r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
	lwz      r3, 0xb0(r29)
	lfs      f1, msBaseVal__Q32og9newScreen12ObjSMenuBase@l(r4)
	mr       r4, r30
	lwz      r5, 0xac(r29)
	addi     r6, r18, 0x12c
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwz      r3, 0xac(r29)
	mr       r4, r30
	bl       setCallBack__Q32og6Screen10MapCounterFP10JKRArchive
	lis      r5, 0x63656E74@ha
	lis      r4, 0x6D61705F@ha
	lwz      r3, 0xac(r29)
	addi     r6, r5, 0x63656E74@l
	addi     r5, r4, 0x6D61705F@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0xb4(r29)
	lwz      r3, 0xa8(r29)
	lbz      r0, 0x49(r3)
	cmplwi   r0, 0
	beq      lbl_8031106C
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	beq      lbl_8031106C
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	addi     r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	lfs      f0, 0x30(r3)
	stfs     f0, 0x138(r29)
	b        lbl_8031107C

lbl_8031106C:
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	addi     r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x138(r29)

lbl_8031107C:
	lfs      f1, 0x138(r29)
	lfs      f0, lbl_8051D740@sda21(r2)
	stfs     f1, 0xe8(r29)
	stfs     f0, 0xec(r29)
	lwz      r3, 0xa8(r29)
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	beq      lbl_803110EC
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lwz      r4, cameraMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r3)
	addi     r3, r1, 0x18
	lwz      r4, 0x24(r4)
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	bl       getViewVector__11CullFrustumFv
	lfs      f0, 0x20(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x18(r1)
	addi     r3, r3, atanTable___5JMath@l
	fneg     f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f0, lbl_8051D7CC@sda21(r2)
	lfs      f2, lbl_8051D7C8@sda21(r2)
	fdivs    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0xec(r29)

lbl_803110EC:
	mr       r3, r29
	mr       r4, r30
	bl       initMapIcon__Q32og9newScreen11ObjSMenuMapFP10JKRArchive
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	addi     r4, r1, 0x10
	addi     r8, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	lbz      r3, 0xb(r8)
	lbz      r6, 0xc(r8)
	lbz      r5, 0xd(r8)
	lbz      r0, 0xe(r8)
	stb      r3, 8(r1)
	lbz      r3, 0xf(r8)
	stb      r6, 9(r1)
	lbz      r7, 0x10(r8)
	stb      r5, 0xa(r1)
	lbz      r6, 0x11(r8)
	stb      r0, 0xb(r1)
	lbz      r5, 0x12(r8)
	lwz      r0, 8(r1)
	stb      r3, 0xc(r1)
	stw      r0, 0x10(r1)
	lwz      r3, 0xc8(r29)
	stb      r7, 0xd(r1)
	lwz      r12, 0(r3)
	stb      r6, 0xe(r1)
	lwz      r12, 0x12c(r12)
	stb      r5, 0xf(r1)
	mtctr    r12
	bctrl
	lwz      r0, 0xc(r1)
	addi     r4, r1, 0x14
	stw      r0, 0x14(r1)
	lwz      r3, 0xc8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xa8(r29)
	li       r19, 0
	mr       r18, r19
	lbz      r0, 0x49(r3)
	cmplwi   r0, 0
	beq      lbl_803111CC
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	beq      lbl_803111CC
	lwz      r3, 0x40(r3)
	bl       caveIDtoMsgID__Q22og9newScreenFUl
	li       r5, 1
	li       r6, 3
	bl       maskTag__Q22og6ScreenFUxUsUs
	mr       r19, r4
	addi     r5, r1, 0x24
	mr       r18, r3
	bl       TagToName__Q22og6ScreenFUxPc
	b        lbl_8031125C

lbl_803111CC:
	lwz      r0, 0x3c(r3)
	cmpwi    r0, 2
	beq      lbl_80311224
	bge      lbl_803111EC
	cmpwi    r0, 0
	beq      lbl_803111FC
	bge      lbl_80311210
	b        lbl_8031125C

lbl_803111EC:
	cmpwi    r0, 4
	beq      lbl_8031124C
	bge      lbl_8031125C
	b        lbl_80311238

lbl_803111FC:
	lis      r4, 0x305F3033@ha
	lis      r3, 0x00383339@ha
	addi     r19, r4, 0x305F3033@l
	addi     r18, r3, 0x00383339@l
	b        lbl_8031125C

lbl_80311210:
	lis      r4, 0x315F3033@ha
	lis      r3, 0x00383339@ha
	addi     r19, r4, 0x315F3033@l
	addi     r18, r3, 0x00383339@l
	b        lbl_8031125C

lbl_80311224:
	lis      r4, 0x325F3033@ha
	lis      r3, 0x00383339@ha
	addi     r19, r4, 0x325F3033@l
	addi     r18, r3, 0x00383339@l
	b        lbl_8031125C

lbl_80311238:
	lis      r4, 0x335F3033@ha
	lis      r3, 0x00383339@ha
	addi     r19, r4, 0x335F3033@l
	addi     r18, r3, 0x00383339@l
	b        lbl_8031125C

lbl_8031124C:
	lis      r4, 0x345F3033@ha
	lis      r3, 0x00383339@ha
	addi     r19, r4, 0x345F3033@l
	addi     r18, r3, 0x00383339@l

lbl_8031125C:
	lwz      r3, 0xac(r29)
	lis      r4, 0x61707469@ha
	addi     r6, r4, 0x61707469@l
	li       r5, 0x546d
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r19, 0x1c(r3)
	stw      r18, 0x18(r3)
	lwz      r3, 0xbc(r29)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3031@ha
	addi     r6, r4, 0x706B3031@l
	li       r5, 0x4e
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r18, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3032@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3032@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r19, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3033@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3033@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r20, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3034@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3034@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r21, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3035@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3035@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r22, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3036@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3036@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r23, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3037@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3037@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r24, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3038@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3038@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r25, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3039@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3039@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r26, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3130@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3130@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x706B3131@ha
	li       r5, 0x4e
	lwz      r12, 0(r3)
	addi     r6, r4, 0x706B3131@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa8(r29)
	mr       r28, r3
	lbz      r0, 0x44(r4)
	cmplwi   r0, 0
	bne      lbl_80311440
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r18)
	stb      r0, 0xb0(r23)
	lwz      r3, 0xac(r29)
	bl       dispRed__Q32og6Screen10MapCounterFb

lbl_80311440:
	lwz      r3, 0xa8(r29)
	lbz      r0, 0x45(r3)
	cmplwi   r0, 0
	bne      lbl_80311468
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r19)
	stb      r0, 0xb0(r24)
	lwz      r3, 0xac(r29)
	bl       dispYellow__Q32og6Screen10MapCounterFb

lbl_80311468:
	lwz      r3, 0xa8(r29)
	lbz      r0, 0x46(r3)
	cmplwi   r0, 0
	bne      lbl_80311490
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r20)
	stb      r0, 0xb0(r25)
	lwz      r3, 0xac(r29)
	bl       dispBlue__Q32og6Screen10MapCounterFb

lbl_80311490:
	lwz      r3, 0xa8(r29)
	lbz      r0, 0x47(r3)
	cmplwi   r0, 0
	bne      lbl_803114B8
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r21)
	stb      r0, 0xb0(r26)
	lwz      r3, 0xac(r29)
	bl       dispWhite__Q32og6Screen10MapCounterFb

lbl_803114B8:
	lwz      r3, 0xa8(r29)
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_803114E0
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r22)
	stb      r0, 0xb0(r27)
	lwz      r3, 0xac(r29)
	bl       dispBlack__Q32og6Screen10MapCounterFb

lbl_803114E0:
	lwz      r3, 0xa8(r29)
	lbz      r0, 0x44(r3)
	cmplwi   r0, 0
	bne      lbl_80311534
	lbz      r0, 0x45(r3)
	cmplwi   r0, 0
	bne      lbl_80311534
	lbz      r0, 0x46(r3)
	cmplwi   r0, 0
	bne      lbl_80311534
	lbz      r0, 0x47(r3)
	cmplwi   r0, 0
	bne      lbl_80311534
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_80311534
	li       r0, 0
	li       r4, 0
	stb      r0, 0xb0(r28)
	lwz      r3, 0xac(r29)
	bl       dispFree__Q32og6Screen10MapCounterFb

lbl_80311534:
	lwz      r3, 0xac(r29)
	lis      r5, 0x636B6574@ha
	lis      r4, 0x004E726F@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x636B6574@l
	addi     r5, r4, 0x004E726F@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa8(r29)
	lbz      r0, 0x47(r4)
	cmplwi   r0, 0
	bne      lbl_80311574
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_8031161C

lbl_80311574:
	li       r0, 1
	lis      r5, 0x636B5F31@ha
	stb      r0, 0xb0(r3)
	lis      r4, 0x004E726F@ha
	addi     r6, r5, 0x636B5F31@l
	lwz      r3, 0xac(r29)
	addi     r5, r4, 0x004E726F@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r19, r3
	lwz      r3, 0xac(r29)
	lis      r5, 0x636B5F32@ha
	lis      r4, 0x004E726F@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x636B5F32@l
	addi     r5, r4, 0x004E726F@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r18, r3
	stb      r0, 0xb0(r19)
	lis      r4, 0x004F4741@ha
	lis      r6, 0x41555345@ha
	lis      r5, 0x534D5F50@ha
	stb      r0, 0xb0(r3)
	mr       r3, r31
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x41555345@l
	addi     r5, r5, 0x534D5F50@l
	bl       getSubMember__Q32og6Screen14DispMemberBaseFUlUx
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0x2710
	blt      lbl_80311610
	li       r0, 1
	stb      r0, 0xb0(r18)
	b        lbl_80311660

lbl_80311610:
	li       r0, 1
	stb      r0, 0xb0(r19)
	b        lbl_80311660

lbl_8031161C:
	li       r0, 0
	lis      r5, 0x72657475@ha
	stb      r0, 0xb0(r3)
	lis      r4, 0x4E746169@ha
	addi     r6, r5, 0x72657475@l
	lwz      r3, 0xac(r29)
	addi     r5, r4, 0x4E746169@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lfs      f1, lbl_8051D740@sda21(r2)
	lwz      r12, 0x14(r12)
	lfs      f2, lbl_8051D7D0@sda21(r2)
	mtctr    r12
	bctrl

lbl_80311660:
	lwz      r3, 0xac(r29)
	lis      r5, 0x796E5F31@ha
	lis      r4, 0x004E6F6E@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x796E5F31@l
	addi     r5, r4, 0x004E6F6E@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r20, r3
	lwz      r3, 0xac(r29)
	lis      r5, 0x796E5F32@ha
	lis      r4, 0x004E6F6E@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x796E5F32@l
	addi     r5, r4, 0x004E6F6E@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r19, r3
	lwz      r3, 0xac(r29)
	lis      r5, 0x796E5F33@ha
	lis      r4, 0x004E6F6E@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x796E5F33@l
	addi     r5, r4, 0x004E6F6E@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r18, r3
	lwz      r3, 0xac(r29)
	lis      r5, 0x796E5F34@ha
	lis      r4, 0x004E6F6E@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x796E5F34@l
	addi     r5, r4, 0x004E6F6E@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0xb0(r20)
	stb      r0, 0xb0(r19)
	stb      r0, 0xb0(r18)
	stb      r0, 0xb0(r3)
	lwz      r4, 0xa8(r29)
	lbz      r5, 0x44(r4)
	cmplwi   r5, 0
	beq      lbl_80311744
	lbz      r0, 0x45(r4)
	cmplwi   r0, 0
	beq      lbl_80311744
	lbz      r0, 0x46(r4)
	cmplwi   r0, 0
	beq      lbl_80311744
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_80311794

lbl_80311744:
	cmplwi   r5, 0
	beq      lbl_80311764
	lbz      r0, 0x46(r4)
	cmplwi   r0, 0
	beq      lbl_80311764
	li       r0, 1
	stb      r0, 0xb0(r18)
	b        lbl_80311794

lbl_80311764:
	cmplwi   r5, 0
	beq      lbl_80311784
	lbz      r0, 0x45(r4)
	cmplwi   r0, 0
	beq      lbl_80311784
	li       r0, 1
	stb      r0, 0xb0(r19)
	b        lbl_80311794

lbl_80311784:
	cmplwi   r5, 0
	beq      lbl_80311794
	li       r0, 1
	stb      r0, 0xb0(r20)

lbl_80311794:
	lwz      r3, 0xac(r29)
	lis      r4, 0x61695F31@ha
	addi     r6, r4, 0x61695F31@l
	li       r5, 0x4e74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r18, r3
	lwz      r3, 0xac(r29)
	lis      r4, 0x61695F32@ha
	li       r5, 0x4e74
	lwz      r12, 0(r3)
	addi     r6, r4, 0x61695F32@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0xb0(r18)
	stb      r0, 0xb0(r3)
	lwz      r4, 0xa8(r29)
	lbz      r0, 0x46(r4)
	cmplwi   r0, 0
	beq      lbl_803117FC
	li       r0, 1
	stb      r0, 0xb0(r18)

lbl_803117FC:
	lwz      r4, 0xa8(r29)
	lbz      r0, 0x45(r4)
	cmplwi   r0, 0
	beq      lbl_80311814
	li       r0, 1
	stb      r0, 0xb0(r3)

lbl_80311814:
	lwz      r5, 0xac(r29)
	mr       r3, r29
	mr       r4, r30
	bl
doCreateAfter__Q32og9newScreen12ObjSMenuBaseFP10JKRArchivePQ29P2DScreen3Mgr
lmw r18, 0x38(r1) lwz      r0, 0x74(r1) mtlr     r0 addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	80311838
 * Size:	000598
 */
void ObjSMenuMap::updateMap()
{
	::Screen::SceneBase* scene = getOwner();
	m_controller               = scene->m_controller;

	if (!resetArrowAlphaTimer) {
		resetArrowAlphaTimer = true;
		arrowAlphaTimer      = 0.0f;
	}
	arrowAlphaTimer += sys->m_deltaTime;

	if (arrowAlphaTimer > 1.0f)
		arrowAlphaTimer = 1.0f;

	f32 angle    = arrowAlphaTimer * TAU;
	f32 angleSin = pikmin2_sinf(angle * 2.0f);
	angle += PI;
	u8 louieArrowAlpha  = ((angleSin + 1.0f) * 0.5f * 0.6f + 0.4f) * 255.0f;
	f32 angleCos        = pikmin2_cosf(angle * 2.0f);
	u8 alpha            = 255;
	f32 defaultZoom     = m_startZoom;
	u8 olimarArrowAlpha = ((angleCos + 1.0f) * 0.5f * 0.6f + 0.4f) * 255.0f;

	if (m_currentZoom < defaultZoom) {
		alpha = (u8)(1.0f - (defaultZoom - m_currentZoom) / (defaultZoom - maxZoom)) * 255.0f;
	}
	m_zoomCaveTextAlpha = alpha;
	for (int i = 0; i < m_caveLabelCount; i++) {
		m_caveLabelTextBoxes[i]->setAlpha(m_zoomCaveTextAlpha);
	}

	float scale = m_currentZoom;
	if (m_disp->m_inCave)
		scale *= 2.0f;
	f32 mapX              = m_mapPosition.x;
	f32 mapY              = m_mapPosition.y;
	m_mapRotationOrigin.x = -mapX;
	m_mapRotationOrigin.y = -mapY;
	m_mapTexPane->setBasePosition(POS_CENTER);
	m_mapTexPane->m_scale.x = scale;
	m_mapTexPane->m_scale.y = scale;
	m_mapTexPane->calcMtx();
	m_mapTexPane->rotate(m_mapRotationOrigin.x, m_mapRotationOrigin.y, J2DROTATE_Y, m_mapAngle);
	m_mapTexPane->move(mapX + msVal.m_mapTexOffset.x, mapY + msVal.m_mapTexOffset.y);

	f32 angleOffs = 360.0f;
	for (int i = 0; i < m_mapIconNum; i++) {
		f32 scaleFactor  = msVal.m_mapIconScaleBase;
		J2DPane* cPane   = *m_radarPaneList[i];
		cPane->m_scale.x = scaleFactor / scale;
		cPane->m_scale.y = scaleFactor / scale;
		cPane->calcMtx();
		cPane          = *m_radarPaneList[i];
		cPane->m_angle = angleOffs - m_mapAngle;
		cPane->calcMtx();
	}

	if (m_louieArrow && m_louieObj) {
		f32 scaleFactor = msVal.m_mapIconScaleBase * (msVal.m_mapNaviArrowScaleMod / scale);
		f32 facedir     = m_louieObj->getFaceDir();
		m_louieArrow->setBasePosition(POS_CENTER);
		J2DPane* pane   = m_louieArrow;
		pane->m_scale.x = scaleFactor;
		pane->m_scale.y = scaleFactor;
		pane->calcMtx();
		pane          = m_louieArrow;
		pane->m_angle = (facedir * 360.0f) / TAU + 45.0f;
		facedir       = pane->m_angle;
		pane->calcMtx();
		m_louieArrow->setBasePosition(POS_CENTER);
		pane            = m_louieArrow;
		pane->m_scale.x = scaleFactor;
		pane->m_scale.y = scaleFactor;
		pane->calcMtx();
		pane          = m_louieArrow;
		pane->m_angle = facedir;
		pane->calcMtx();
		m_louieArrow->setAlpha(louieArrowAlpha);
		m_louieGlow->setAlpha(louieArrowAlpha);
	}

	if (m_olimarArrow && m_olimarObj) {
		f32 scaleFactor = msVal.m_mapIconScaleBase * (msVal.m_mapNaviArrowScaleMod / scale);
		f32 facedir     = m_olimarObj->getFaceDir();
		m_louieArrow->setBasePosition(POS_CENTER);
		J2DPane* pane   = m_olimarArrow;
		pane->m_scale.x = scaleFactor;
		pane->m_scale.y = scaleFactor;
		pane->calcMtx();
		pane          = m_olimarArrow;
		pane->m_angle = (facedir * 360.0f) / TAU + 45.0f;
		facedir       = pane->m_angle;
		pane->calcMtx();
		m_olimarArrow->setBasePosition(POS_CENTER);
		pane            = m_olimarArrow;
		pane->m_scale.x = scaleFactor;
		pane->m_scale.y = scaleFactor;
		pane->calcMtx();
		pane          = m_olimarArrow;
		pane->m_angle = facedir;
		pane->calcMtx();
		m_olimarArrow->setAlpha(olimarArrowAlpha);
		m_olimarGlow->setAlpha(olimarArrowAlpha);
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stmw     r26, 0x48(r1)
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	bl       getGamePad__Q26Screen9SceneBaseCFv
	stw      r3, 0x118(r28)
	lbz      r0, init$4825@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80311898
	lfs      f0, lbl_8051D740@sda21(r2)
	li       r0, 1
	stb      r0, init$4825@sda21(r13)
	stfs     f0, nv_frame$4824@sda21(r13)

lbl_80311898:
	lwz      r3, sys@sda21(r13)
	lfs      f2, nv_frame$4824@sda21(r13)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051D744@sda21(r2)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	stfs     f1, nv_frame$4824@sda21(r13)
	ble      lbl_803118C0
	lfs      f0, lbl_8051D740@sda21(r2)
	stfs     f0, nv_frame$4824@sda21(r13)

lbl_803118C0:
	lfs      f2, lbl_8051D78C@sda21(r2)
	lfs      f1, nv_frame$4824@sda21(r13)
	lfs      f0, lbl_8051D740@sda21(r2)
	fmuls    f4, f2, f1
	lfs      f7, lbl_8051D7D4@sda21(r2)
	lfs      f6, lbl_8051D7D8@sda21(r2)
	lfs      f1, lbl_8051D744@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_80311910
	lfs      f0, lbl_8051D798@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80311934

lbl_80311910:
	lfs      f0, lbl_8051D794@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80311934:
	fadds    f3, f1, f0
	lfs      f0, lbl_8051D760@sda21(r2)
	lfs      f1, lbl_8051D7CC@sda21(r2)
	lfs      f2, lbl_8051D7A8@sda21(r2)
	fmuls    f5, f3, f0
	lfs      f0, lbl_8051D740@sda21(r2)
	fadds    f8, f1, f4
	lfs      f4, lbl_8051D7D4@sda21(r2)
	lfs      f3, lbl_8051D7D8@sda21(r2)
	fmadds   f2, f6, f5, f2
	fcmpo    cr0, f8, f0
	lfs      f1, lbl_8051D744@sda21(r2)
	fmuls    f0, f7, f2
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r30, 0x1c(r1)
	bge      lbl_803119A4
	lfs      f0, lbl_8051D798@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f8, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803119C8

lbl_803119A4:
	lfs      f0, lbl_8051D794@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f8, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803119C8:
	fadds    f2, f1, f0
	lfs      f1, lbl_8051D760@sda21(r2)
	lfs      f0, lbl_8051D7A8@sda21(r2)
	li       r0, 0xff
	lfs      f6, 0xe8(r28)
	fmuls    f1, f2, f1
	lfs      f5, 0x138(r28)
	fmadds   f0, f3, f1, f0
	fcmpo    cr0, f6, f5
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r29, 0x34(r1)
	bge      lbl_80311A30
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	fsubs    f1, f5, f6
	lfs      f0, msVal__Q32og9newScreen11ObjSMenuMap@l(r3)
	lfd      f2, lbl_8051D7C0@sda21(r2)
	fsubs    f0, f5, f0
	lfd      f3, lbl_8051D7B8@sda21(r2)
	fdivs    f0, f1, f0
	fsub     f0, f2, f0
	fmul     f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)

lbl_80311A30:
	stb      r0, 0x13c(r28)
	mr       r31, r28
	li       r27, 0
	b        lbl_80311A60

lbl_80311A40:
	lwz      r3, 0x140(r31)
	lbz      r4, 0x13c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 4
	addi     r27, r27, 1

lbl_80311A60:
	lwz      r0, 0x154(r28)
	cmpw     r27, r0
	blt      lbl_80311A40
	lwz      r3, 0xa8(r28)
	lfs      f31, 0xe8(r28)
	lbz      r0, 0x49(r3)
	cmplwi   r0, 0
	beq      lbl_80311A88
	lfs      f0, lbl_8051D7DC@sda21(r2)
	fmuls    f31, f31, f0

lbl_80311A88:
	lfs      f30, 0xe0(r28)
	li       r4, 4
	lfs      f29, 0xe4(r28)
	fneg     f1, f30
	fneg     f0, f29
	stfs     f1, 0x110(r28)
	stfs     f0, 0x114(r28)
	lwz      r3, 0xc8(r28)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0xc8(r28)
	stfs     f31, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc8(r28)
	li       r4, 0x7a
	lfs      f1, 0x110(r28)
	lfs      f2, 0x114(r28)
	lfs      f3, 0xec(r28)
	bl       rotate__7J2DPaneFff13J2DRotateAxisf
	lwz      r3, 0xc8(r28)
	lis      r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
	addi     r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
	lwz      r12, 0(r3)
	lfs      f1, 0x34(r4)
	lfs      f0, 0x38(r4)
	lwz      r12, 0x10(r12)
	fadds    f1, f30, f1
	fadds    f2, f29, f0
	mtctr    r12
	bctrl
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lfs      f30, lbl_8051D790@sda21(r2)
	addi     r31, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	li       r26, 0
	li       r27, 0
	b        lbl_80311B80

lbl_80311B24:
	lfs      f0, 0x24(r31)
	lwz      r3, 0xcc(r28)
	fdivs    f0, f0, f31
	lwzx     r3, r3, r27
	lwz      r3, 0(r3)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xcc(r28)
	lfs      f0, 0xec(r28)
	lwzx     r3, r3, r27
	fsubs    f0, f30, f0
	lwz      r3, 0(r3)
	stfs     f0, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 4
	addi     r26, r26, 1

lbl_80311B80:
	lwz      r0, 0x11c(r28)
	cmpw     r26, r0
	blt      lbl_80311B24
	lwz      r0, 0xd0(r28)
	cmplwi   r0, 0
	beq      lbl_80311C98
	lwz      r3, 0xd4(r28)
	cmplwi   r3, 0
	beq      lbl_80311C98
	lfs      f0, 0x24(r31)
	lis      r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lwz      r12, 0(r3)
	addi     r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
	fdivs    f0, f0, f31
	lfs      f1, 0x28(r4)
	lwz      r12, 0x64(r12)
	fmuls    f29, f1, f0
	mtctr    r12
	bctrl
	fmr      f30, f1
	lwz      r3, 0xd0(r28)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0xd0(r28)
	stfs     f29, 0xcc(r3)
	stfs     f29, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051D790@sda21(r2)
	lfs      f2, lbl_8051D7E0@sda21(r2)
	fmuls    f1, f0, f30
	lfs      f0, lbl_8051D78C@sda21(r2)
	lwz      r3, 0xd0(r28)
	fdivs    f0, f1, f0
	fadds    f30, f2, f0
	stfs     f30, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x130(r28)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x130(r28)
	stfs     f29, 0xcc(r3)
	stfs     f29, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x130(r28)
	stfs     f30, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd0(r28)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x130(r28)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80311C98:
	lwz      r0, 0xd8(r28)
	cmplwi   r0, 0
	beq      lbl_80311DA4
	lwz      r3, 0xdc(r28)
	cmplwi   r3, 0
	beq      lbl_80311DA4
	lfs      f0, 0x24(r31)
	lis      r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lwz      r12, 0(r3)
	addi     r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
	fdivs    f0, f0, f31
	lfs      f1, 0x28(r4)
	lwz      r12, 0x64(r12)
	fmuls    f29, f1, f0
	mtctr    r12
	bctrl
	fmr      f31, f1
	lwz      r3, 0xd8(r28)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0xd8(r28)
	stfs     f29, 0xcc(r3)
	stfs     f29, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051D790@sda21(r2)
	lfs      f2, lbl_8051D7E0@sda21(r2)
	fmuls    f1, f0, f31
	lfs      f0, lbl_8051D78C@sda21(r2)
	lwz      r3, 0xd8(r28)
	fdivs    f0, f1, f0
	fadds    f30, f2, f0
	stfs     f30, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x134(r28)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x134(r28)
	stfs     f29, 0xcc(r3)
	stfs     f29, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x134(r28)
	stfs     f30, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd8(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x134(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80311DA4:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lmw      r26, 0x48(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80311DD0
 * Size:	0000A8
 */
void ObjSMenuMap::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal.m_mapScreenScale.x, msVal.m_mapScreenScale.y);
	m_animGroup->update();
	updateMap();

	P2DScreen::Mgr_tuning* screen = m_mapCounter;
	screen->m_someX               = _40 + -15.2f;
	screen->m_someY               = -15.2f;

	m_mapCounter->animation();
	m_mapCounter->update();
	m_iconScreen->update();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       commonUpdateBase__Q32og9newScreen12ObjSMenuBaseFv
	lis      r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
	mr       r3, r31
	addi     r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
	lfs      f1, 0x40(r4)
	lfs      f2, 0x44(r4)
	bl       setSMenuScale__Q32og9newScreen12ObjSMenuBaseFff
	lwz      r3, 0xb0(r31)
	bl       update__Q32og6Screen9AnimGroupFv
	mr       r3, r31
	bl       updateMap__Q32og9newScreen11ObjSMenuMapFv
	lfs      f3, 0x40(r31)
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f1, lbl_8051D740@sda21(r2)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0xac(r31)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0xac(r31)
	bl       animation__9J2DScreenFv
	lwz      r3, 0xac(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xbc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80311E78
 * Size:	00006C
 */
void ObjSMenuMap::doUpdateLAction()
{
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_ITEMS, getDispMember(), 0, true);
	jump_L(arg);
}

/*
 * --INFO--
 * Address:	80311EE4
 * Size:	0000C4
 */
void ObjSMenuMap::doUpdateRAction()
{
	if (m_disp->m_inCave) {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_DOUKUTU, getDispMember(), 0, true);
		jump_R(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU, getDispMember(), 0, true);
		jump_R(arg);
	}
}

/*
 * --INFO--
 * Address:	80311FA8
 * Size:	00010C
 */
bool ObjSMenuMap::doUpdate()
{
	::Screen::SceneBase* scene = getOwner();
	m_controller               = scene->getGamePad();
	transMap();

	float cstick = m_controller->m_padSStick.m_yPos;

	if (cstick > 0.4f) {
		m_currentZoom = -(m_currentZoom * 0.03f - m_currentZoom);
		if (m_currentZoom < maxZoom)
			m_currentZoom = maxZoom;
		ogSound->setZoomOut();
	} else if (cstick < -0.4f) {
		m_currentZoom += m_currentZoom * 0.03f;
		if (m_currentZoom > minZoom)
			m_currentZoom = minZoom;
		ogSound->setZoomIn();
	}
	commonUpdate();
	ObjSMenuBase::doUpdate();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	bl       getGamePad__Q26Screen9SceneBaseCFv
	stw      r3, 0x118(r31)
	mr       r3, r31
	bl       transMap__Q32og9newScreen11ObjSMenuMapFv
	lwz      r3, 0x118(r31)
	li       r0, 0
	lfs      f0, lbl_8051D7A8@sda21(r2)
	mr       r4, r0
	lfs      f1, 0x5c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80311FFC
	li       r0, 1

lbl_80311FFC:
	lfs      f0, lbl_8051D7AC@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8031200C
	li       r4, 1

lbl_8031200C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8031204C
	lfs      f1, lbl_8051D7B0@sda21(r2)
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lfs      f0, 0xe8(r31)
	addi     r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	fmadds   f0, f1, f0, f0
	stfs     f0, 0xe8(r31)
	lfs      f0, 0xe8(r31)
	lfs      f1, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_80312040
	stfs     f1, 0xe8(r31)

lbl_80312040:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setZoomIn__Q22og5SoundFv
	b        lbl_80312084

lbl_8031204C:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80312084
	lfs      f1, lbl_8051D7B0@sda21(r2)
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lfs      f0, 0xe8(r31)
	fnmsubs  f0, f1, f0, f0
	stfs     f0, 0xe8(r31)
	lfs      f0, 0xe8(r31)
	lfs      f1, msVal__Q32og9newScreen11ObjSMenuMap@l(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_8031207C
	stfs     f1, 0xe8(r31)

lbl_8031207C:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setZoomOut__Q22og5SoundFv

lbl_80312084:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doUpdate__Q32og9newScreen12ObjSMenuBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803120B4
 * Size:	000138
 */
void ObjSMenuMap::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.m_perspGraph;
	drawMap(gfx);

	Graphics gfx2;
	m_iconScreen->draw(gfx2, *graf);

	if (m_compassPic && m_pane_Ncompas) {
		PSMTXCopy(m_pane_Ncompas->_080, m_compassPic->_050);
	}

	graf->setPort();
	m_iconScreen2->draw(gfx, *graf);
	graf->setPort();
	drawYaji(gfx);
}

/*
 * --INFO--
 * Address:	803121EC
 * Size:	00032C
 */
void ObjSMenuMap::drawMap(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.m_perspGraph;
	if (m_updateCaveTex) {
		m_radarMapTexture = Game::Cave::randMapMgr->getRadarMapTexture();
		m_mapTexPane->changeTexture(m_radarMapTexture->_20, 0);
		m_updateCaveTex          = false;
		m_mapTextureDimensions.x = m_mapTexPane->getTexture(0)->_20->m_sizeX;
		m_mapTextureDimensions.y = m_mapTexPane->getTexture(0)->_20->m_sizeY;
		m_mapTexScale.x          = m_mapBounds.x / m_mapTextureDimensions.x;
		m_mapTexScale.y          = m_mapBounds.y / m_mapTextureDimensions.y;
	}

	if (m_mapTexPane) {
		m_mapTexPane->m_angle = m_mapAngle;
		m_mapTexPane->calcMtx();
	}

	P2DScreen::Mgr_tuning* scrn = m_mapCounter;
	if (scrn) {
		scrn->draw(gfx, *graf);
	}
	graf->setPort();
	j3dSys.drawInit();
	sys->m_gfx->initPrimDraw(nullptr);

	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_FALSE);
	GXSetColorUpdate(GX_FALSE);

	Rectf rect;
	rect.p1.x = 0.0f;
	rect.p1.y = 0.0f;
	rect.p2.x = 640.0f;
	rect.p2.y = 480.0f;
	Color4 color(200, 10, 200, 155);
	drawRectZ(gfx, rect, color, 0.999);
	Vec vec1 = m_pane_map->getGlbVtx(0);
	Vec vec2 = m_pane_map->getGlbVtx(1);
	Vec vec3 = m_pane_map->getGlbVtx(2);
	Vec vec4 = m_pane_map->getGlbVtx(3);
	Color4 color2(100, 0, 0, 155);
	drawVecZ(gfx, vec1, vec2, vec3, vec4, color2, -0.999);
	GXSetColorUpdate(GX_TRUE);
	PSMTXCopy(m_pane_map->_080, m_rootPane->_050);
	graf->setPort();
	GXSetZCompLoc(GX_TRUE);
	GXSetZMode(GX_TRUE, GX_LESS, GX_FALSE);
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r4
	addi     r31, r30, 0x190
	stw      r29, 0x94(r1)
	mr       r29, r3
	lbz      r0, 0x120(r3)
	cmplwi   r0, 0
	beq      lbl_803122F0
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	bl       getRadarMapTexture__Q34Game4Cave10RandMapMgrFv
	stw      r3, 0xc0(r29)
	li       r5, 0
	lwz      r3, 0xc8(r29)
	lwz      r4, 0xc0(r29)
	lwz      r12, 0(r3)
	lwz      r4, 0x20(r4)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	li       r4, 0
	stb      r0, 0x120(r29)
	lwz      r3, 0xc8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r3)
	lis      r0, 0x4330
	stw      r0, 0x80(r1)
	li       r4, 0
	lhz      r0, 2(r3)
	lfd      f1, lbl_8051D770@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x84(r1)
	lfd      f0, 0x80(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xf8(r29)
	lwz      r3, 0xc8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r3)
	lis      r0, 0x4330
	stw      r0, 0x88(r1)
	lhz      r0, 4(r3)
	lfd      f1, lbl_8051D770@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x8c(r1)
	lfd      f0, 0x88(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xfc(r29)
	lfs      f1, 0x100(r29)
	lfs      f0, 0xf8(r29)
	fdivs    f0, f1, f0
	stfs     f0, 0xf0(r29)
	lfs      f1, 0x104(r29)
	lfs      f0, 0xfc(r29)
	fdivs    f0, f1, f0
	stfs     f0, 0xf4(r29)

lbl_803122F0:
	lwz      r3, 0x128(r29)
	cmplwi   r3, 0
	beq      lbl_80312314
	lfs      f0, 0xec(r29)
	stfs     f0, 0xc0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80312314:
	lwz      r3, 0xac(r29)
	cmplwi   r3, 0
	beq      lbl_80312338
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_80312338:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r30, 0x24(r4)
	bl       drawInit__6J3DSysFv
	mr       r3, r30
	li       r4, 0
	bl       initPrimDraw__8GraphicsFP7Matrixf
	li       r3, 0
	bl       GXSetColorUpdate
	li       r3, 0
	bl       GXSetAlphaUpdate
	li       r3, 0
	bl       GXSetColorUpdate
	lfs      f3, lbl_8051D740@sda21(r2)
	li       r8, 0xc8
	lfs      f2, lbl_8051D7E4@sda21(r2)
	li       r7, 0xa
	lfs      f0, lbl_8051D7E8@sda21(r2)
	li       r0, 0x9b
	stfs     f3, 0x70(r1)
	mr       r3, r29
	lfs      f1, lbl_8051D7EC@sda21(r2)
	mr       r4, r30
	stfs     f3, 0x74(r1)
	addi     r5, r1, 0x70
	addi     r6, r1, 0xc
	stfs     f2, 0x78(r1)
	stfs     f0, 0x7c(r1)
	stb      r8, 0xc(r1)
	stb      r7, 0xd(r1)
	stb      r8, 0xe(r1)
	stb      r0, 0xf(r1)
	bl
"drawRectZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR7Rect<f>R6Color4f" lwz
r4, 0xb4(r29) addi     r3, r1, 0x34 li       r5, 0 bl
getGlbVtx__7J2DPaneCFUc lwz      r6, 0x34(r1) addi     r3, r1, 0x28 lwz r4,
0x38(r1) li       r5, 1 lwz      r0, 0x3c(r1) stw      r6, 0x64(r1) stw r4,
0x68(r1) stw      r0, 0x6c(r1) lwz      r4, 0xb4(r29) bl
getGlbVtx__7J2DPaneCFUc lwz      r6, 0x28(r1) addi     r3, r1, 0x1c lwz r4,
0x2c(r1) li       r5, 2 lwz      r0, 0x30(r1) stw      r6, 0x58(r1) stw r4,
0x5c(r1) stw      r0, 0x60(r1) lwz      r4, 0xb4(r29) bl
getGlbVtx__7J2DPaneCFUc lwz      r6, 0x1c(r1) addi     r3, r1, 0x10 lwz r4,
0x20(r1) li       r5, 3 lwz      r0, 0x24(r1) stw      r6, 0x4c(r1) stw r4,
0x50(r1) stw      r0, 0x54(r1) lwz      r4, 0xb4(r29) bl
getGlbVtx__7J2DPaneCFUc lwz      r3, 0x10(r1) li       r10, 0 lwz      r5,
0x14(r1) li       r11, 0x64 lwz      r8, 0x18(r1) li       r0, 0x9b stw r3,
0x40(r1) mr       r3, r29 lfs      f1, lbl_8051D7F0@sda21(r2) mr       r4,
r30 stw      r5, 0x44(r1) addi     r5, r1, 0x64 addi     r6, r1, 0x58 addi
r7, r1, 0x4c stw      r8, 0x48(r1) addi     r8, r1, 0x40 addi     r9, r1, 8
	stb      r11, 8(r1)
	stb      r10, 9(r1)
	stb      r10, 0xa(r1)
	stb      r0, 0xb(r1)
	bl
drawVecZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR3VecR3VecR3VecR3VecR6Color4f
	li       r3, 1
	bl       GXSetColorUpdate
	lwz      r3, 0xb4(r29)
	lwz      r4, 0xc4(r29)
	addi     r3, r3, 0x80
	addi     r4, r4, 0x50
	bl       PSMTXCopy
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	bl       GXSetZCompLoc
	li       r3, 1
	li       r4, 1
	li       r5, 0
	bl       GXSetZMode
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80312518
 * Size:	0001E0
 */
void ObjSMenuMap::drawRectZ(Graphics& gfx, Rectf& rect, Color4& color, f32)
{
	GXSetZMode(GX_TRUE, GX_ALWAYS, GX_TRUE);
	Mtx temp, temp2;
	C_MTXOrtho(temp, 0.0f, 480.0f, 0.0f, 640.0f, -1.0f, 1.0f);
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

	// lots of GX register setting

	GXSetZMode(GX_TRUE, GX_LESS, GX_TRUE);

	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  fmr       f31, f1
	  mr        r30, r5
	  mr        r31, r6
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0x1
	  bl        -0x2293C8
	  lfs       f1, -0xC20(r2)
	  addi      r3, r1, 0x38
	  lfs       f2, -0xB78(r2)
	  fmr       f3, f1
	  lfs       f4, -0xB7C(r2)
	  lfs       f5, -0xBC4(r2)
	  lfs       f6, -0xC1C(r2)
	  bl        -0x227794
	  addi      r3, r1, 0x38
	  li        r4, 0x1
	  bl        -0x229130
	  addi      r3, r1, 0x8
	  bl        -0x2282E0
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x229014
	  li        r3, 0
	  bl        -0x22C9EC
	  bl        -0x22DEC8
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x22E320
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x22E32C
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x22DEC0
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x22DED8
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0x22CC68
	  lfs       f1, 0x4(r30)
	  lis       r9, 0xCC01
	  lfs       f0, 0x0(r30)
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0x1
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0xC(r30)
	  lfs       f0, 0x0(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0xC(r30)
	  lfs       f0, 0x8(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  bl        -0x229550
	  psq_l     f31,0x88(r1),0,0
	  lwz       r0, 0x94(r1)
	  lfd       f31, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803126F8
 * Size:	000214
 */
void ObjSMenuMap::drawVecZ(Graphics& gfx, Vec& vec1, Vec& vec2, Vec& vec3, Vec&, Color4&, float)
{
	int wid = System::getRenderModeObj()->fbWidth;
	int hei = System::getRenderModeObj()->viHeight;
	GXSetZMode(GX_TRUE, GX_ALWAYS, GX_TRUE);
	Mtx temp, temp2;
	C_MTXOrtho(temp, 0.0f, (f32)wid, 0.0f, (f32)hei, -1.0f, 1.0f);
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

	GXSetZMode(GX_TRUE, GX_LESS, GX_TRUE);

	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stmw      r25, 0x94(r1)
	  fmr       f31, f1
	  mr        r25, r5
	  mr        r26, r6
	  mr        r30, r7
	  mr        r27, r8
	  mr        r31, r9
	  bl        0x110AFC
	  lhz       r29, 0x4(r3)
	  bl        0x110AF4
	  lhz       r28, 0x6(r3)
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0x1
	  bl        -0x2295C0
	  lis       r0, 0x4330
	  lfs       f1, -0xC20(r2)
	  stw       r28, 0x7C(r1)
	  addi      r3, r1, 0x38
	  lfd       f4, -0xB68(r2)
	  fmr       f3, f1
	  stw       r0, 0x78(r1)
	  lfs       f5, -0xBC4(r2)
	  lfd       f0, 0x78(r1)
	  stw       r29, 0x84(r1)
	  fsubs     f2, f0, f4
	  lfs       f6, -0xC1C(r2)
	  stw       r0, 0x80(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f4, f0, f4
	  bl        -0x2279AC
	  addi      r3, r1, 0x38
	  li        r4, 0x1
	  bl        -0x229348
	  addi      r3, r1, 0x8
	  bl        -0x2284F8
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x22922C
	  li        r3, 0
	  bl        -0x22CC04
	  bl        -0x22E0E0
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x22E538
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x22E544
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x22E0D8
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x22E0F0
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0x22CE80
	  lfs       f1, 0x4(r25)
	  lis       r9, 0xCC01
	  lfs       f0, 0x0(r25)
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0x1
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r26)
	  lfs       f0, 0x0(r26)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r27)
	  lfs       f0, 0x0(r27)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x0(r30)
	  stfs      f0, -0x8000(r9)
	  stfs      f1, -0x8000(r9)
	  stfs      f31, -0x8000(r9)
	  lbz       r8, 0x3(r31)
	  lbz       r7, 0x2(r31)
	  lbz       r6, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r9)
	  stb       r6, -0x8000(r9)
	  stb       r7, -0x8000(r9)
	  stb       r8, -0x8000(r9)
	  bl        -0x229768
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  lmw       r25, 0x94(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031290C
 * Size:	0000A4
 */
bool ObjSMenuMap::doStart(::Screen::StartSceneArg const* arg)
{
	m_animGroup->setFrame(0.0f);
	m_animGroup->setRepeat(true);
	m_animGroup->setSpeed(1.0f);
	m_animGroup->start();
	setYajiName('6051_00', '6052_00', '6050_00');
	stopYaji();
	start_LR(arg);
}

/*
 * --INFO--
 * Address:	803129B0
 * Size:	000008
 */
bool ObjSMenuMap::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	803129B8
 * Size:	000020
 */
void ObjSMenuMap::doUpdateFinish() { ObjSMenuBase::doUpdateFinish(); }

/*
 * --INFO--
 * Address:	803129D8
 * Size:	00004C
 */
bool ObjSMenuMap::doUpdateFadeout()
{
	commonUpdate();
	updateFadeOut();
}

/*
 * --INFO--
 * Address:	80312A24
 * Size:	000014
 */
void ObjSMenuMap::in_L()
{
	_38 = 0;
	_4C = 15.0f;
}

/*
 * --INFO--
 * Address:	80312A38
 * Size:	000014
 */
void ObjSMenuMap::in_R()
{
	_38 = 1;
	_4C = 15.0f;
}

/*
 * --INFO--
 * Address:	80312A4C
 * Size:	00000C
 */
void ObjSMenuMap::wait() { _38 = 4; }

/*
 * --INFO--
 * Address:	80312A58
 * Size:	00002C
 */
void ObjSMenuMap::out_L()
{
	_38 = 2;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80312A84
 * Size:	00002C
 */
void ObjSMenuMap::out_R()
{
	_38 = 3;
	ogSound->setSMenuLR();
}

} // namespace newScreen

} // namespace og

namespace Screen {

/*
 * --INFO--
 * Address:	80312AB0
 * Size:	000008
 */
int SetSceneArg::getClassSize(void) { return 0x10; }

/*
 * --INFO--
 * Address:	80312AB8
 * Size:	000008
 */
SceneType SetSceneArg::getSceneType() const
{
	return m_sceneType;
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80312AC0
 * Size:	000008
 */
SceneType SceneArgBase::getSceneType() const { return (SceneType)0; }

} // namespace Screen
namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	80312AC8
 * Size:	000004
 */
void ObjSMenuMap::doUpdateCancelAction(void) { }

} // namespace newScreen

} // namespace og

/*
 * --INFO--
 * Address:	80312ACC
 * Size:	000128
 */
void __sinit_ogObjSMenuMap_cpp(void)
{
	/*
	lis      r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
	lis      r4, __float_nan@ha
	li       r11, -1
	lfs      f11, __float_nan@l(r4)
	addi     r9, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
	lfs      f8, lbl_8051D808@sda21(r2)
	li       r8, 0xff
	li       r5, 0
	stw      r11, 0x4c(r9)
	li       r6, 0xdc
	lis      r3, lbl_804D8398@ha
	lfs      f10, lbl_8051D804@sda21(r2)
	addi     r10, r3, lbl_804D8398@l
	stw      r11, 0x48(r9)
	lfs      f9, lbl_8051D7DC@sda21(r2)
	li       r7, 0xd2
	lfs      f7, lbl_8051D760@sda21(r2)
	li       r4, 0x32
	lfs      f6, lbl_8051D80C@sda21(r2)
	li       r3, 0x84
	lfs      f5, lbl_8051D810@sda21(r2)
	li       r0, 0x80
	lfs      f4, lbl_8051D814@sda21(r2)
	lfs      f3, lbl_8051D818@sda21(r2)
	lfs      f2, lbl_8051D81C@sda21(r2)
	lfs      f1, lbl_8051D744@sda21(r2)
	lfs      f0, lbl_8051D820@sda21(r2)
	stw      r11, lbl_80515E48@sda21(r13)
	stfs     f11, lbl_80515E4C@sda21(r13)
	stfs     f11, 0(r10)
	stfs     f11, 4(r10)
	stfs     f11, 8(r10)
	stb      r8, 8(r9)
	stb      r8, 9(r9)
	stb      r8, 0xa(r9)
	stb      r7, 0xb(r9)
	stb      r6, 0xc(r9)
	stb      r8, 0xd(r9)
	stb      r8, 0xe(r9)
	stb      r5, 0xf(r9)
	stb      r5, 0x10(r9)
	stb      r4, 0x11(r9)
	stb      r5, 0x12(r9)
	stb      r8, 0x13(r9)
	stb      r3, 0x14(r9)
	stb      r5, 0x15(r9)
	stb      r8, 0x16(r9)
	stb      r8, 0x17(r9)
	stb      r5, 0x18(r9)
	stb      r5, 0x19(r9)
	stb      r5, 0x1a(r9)
	stfs     f10, 0x1c(r9)
	stfs     f9, 0x20(r9)
	stfs     f8, 0x3c(r9)
	stb      r6, 0x1b(r9)
	stfs     f7, 0(r9)
	stfs     f6, 4(r9)
	stfs     f5, 0x24(r9)
	stfs     f4, 0x28(r9)
	stfs     f8, 0x2c(r9)
	stfs     f8, 0x30(r9)
	stfs     f3, 0x34(r9)
	stfs     f2, 0x38(r9)
	stfs     f1, 0x40(r9)
	stfs     f0, 0x44(r9)
	stb      r5, 0x48(r9)
	stb      r0, 0x49(r9)
	stb      r8, 0x4a(r9)
	stb      r8, 0x4b(r9)
	stb      r5, 0x4c(r9)
	stb      r8, 0x4d(r9)
	stb      r8, 0x4e(r9)
	stb      r5, 0x4f(r9)
	blr
	*/
}
