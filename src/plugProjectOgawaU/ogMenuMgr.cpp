#include "og/Screen/MenuMgr.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "Vector3.h"
#include "efx2d/T2DCursor.h"
#include "System.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80309E28
 * Size:	0001E8
 */
MenuMgr::MenuMgr()
{
	m_elementCount         = 0;
	m_cSelectId            = 0;
	m_timer                = 0.0f;
	m_timerMax             = 1.0f;
	m_paneList1            = nullptr;
	m_paneList2            = nullptr;
	m_paneList3            = nullptr;
	m_scaleMgrs            = nullptr;
	m_paneList4            = nullptr;
	m_paneList5            = nullptr;
	m_efxCursor1           = nullptr;
	m_efxCursor2           = nullptr;
	m_isCursorActive       = false;
	_2D                    = false;
	m_doScale              = false;
	m_cursorState          = 0;
	m_cursorDelayTimer     = 0.0f;
	m_cursorPos1.x         = 0.0f;
	m_cursorPos1.y         = 0.0f;
	m_cursorPos2.x         = 0.0f;
	m_cursorPos2.y         = 0.0f;
	_48                    = false;
	m_transitionPosLeft.x  = 0.0f;
	m_transitionPosLeft.y  = 0.0f;
	m_transitionPosRight.x = 0.0f;
	m_transitionPosRight.y = 0.0f;
	m_selPosLeft.x         = 0.0f;
	m_selPosLeft.y         = 0.0f;
	m_selPosRight.x        = 0.0f;
	m_selPosRight.y        = 0.0f;
	_6C                    = 0.0f;
	m_prevSelected         = 0;
	m_efxCursor1           = new efx2d::T2DCursor(&m_cursorPos1);
	m_efxCursor2           = new efx2d::T2DCursor(&m_cursorPos2);
}

/*
 * --INFO--
 * Address:	8030A100
 * Size:	000094
 */
void MenuMgr::startCursor(f32 time)
{
	m_isCursorActive = true;
	if (time == 0.0f) {
		m_cursorState      = 2;
		m_cursorDelayTimer = 0.0f;
		if (m_efxCursor1)
			m_efxCursor1->create(nullptr);
		if (m_efxCursor2)
			m_efxCursor2->create(nullptr);
	} else {
		m_cursorState      = 1;
		m_cursorDelayTimer = time;
	}
}

/*
 * --INFO--
 * Address:	8030A194
 * Size:	000070
 */
void MenuMgr::killCursor()
{
	m_cursorState    = 3;
	m_isCursorActive = false;
	if (m_efxCursor1) {
		m_efxCursor1->kill();
	}
	if (m_efxCursor2) {
		m_efxCursor2->kill();
	}
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00004C
//  */
// void MenuMgr::initCommon()
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0002F4
//  */
// void MenuMgr::initSub(J2DScreen*, unsigned short, u64, u64, u64)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8030A204
 * Size:	00021C
 * This function and the one below it (init2TakuTitle) are byte for byte identical
 * bravo Ogawa
 */
void MenuMgr::init2taku(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u64 tag4, u64 tag5, u64 tag6, u64 tag7, u64 tag8)
{
	m_elementCount = 2;
	m_paneList1    = new J2DPane*[2];
	m_paneList2    = new J2DPane*[2];
	m_paneList3    = new J2DPane*[2];
	m_scaleMgrs    = new ScaleMgr[2];

	m_paneList1[0]     = og::Screen::TagSearch(screen, tag1);
	m_paneList2[0]     = nullptr;
	m_paneList3[0]     = og::Screen::TagSearch(screen, tag2);
	m_paneList1[1]     = og::Screen::TagSearch(screen, tag5);
	m_paneList2[1]     = nullptr;
	m_paneList3[1]     = og::Screen::TagSearch(screen, tag6);
	m_timer            = 0.0f;
	m_timerMax         = 1.0f;
	m_paneList4        = nullptr;
	m_paneList5        = nullptr;
	m_cSelectId        = 0;
	m_cursorState      = 0;
	m_cursorDelayTimer = 0.0f;
	selectSub(m_cSelectId);

	m_paneList4 = new J2DPane*[2];
	m_paneList5 = new J2DPane*[2];

	m_paneList4[0] = og::Screen::TagSearch(screen, tag3);
	m_paneList5[0] = og::Screen::TagSearch(screen, tag4);
	m_paneList4[0]->hide();
	m_paneList5[0]->hide();

	m_paneList4[1] = og::Screen::TagSearch(screen, tag7);
	m_paneList5[1] = og::Screen::TagSearch(screen, tag8);
	m_paneList4[1]->hide();
	m_paneList5[1]->hide();
}

/*
 * --INFO--
 * Address:	8030A420
 * Size:	00021C
 */
void MenuMgr::init2takuTitle(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u64 tag4, u64 tag5, u64 tag6, u64 tag7, u64 tag8)
{
	m_elementCount = 2;
	m_paneList1    = new J2DPane*[2];
	m_paneList2    = new J2DPane*[2];
	m_paneList3    = new J2DPane*[2];
	m_scaleMgrs    = new ScaleMgr[2];

	m_paneList1[0]     = og::Screen::TagSearch(screen, tag1);
	m_paneList2[0]     = nullptr;
	m_paneList3[0]     = og::Screen::TagSearch(screen, tag2);
	m_paneList1[1]     = og::Screen::TagSearch(screen, tag5);
	m_paneList2[1]     = nullptr;
	m_paneList3[1]     = og::Screen::TagSearch(screen, tag6);
	m_timer            = 0.0f;
	m_timerMax         = 1.0f;
	m_paneList4        = nullptr;
	m_paneList5        = nullptr;
	m_cSelectId        = 0;
	m_cursorState      = 0;
	m_cursorDelayTimer = 0.0f;
	selectSub(m_cSelectId);

	m_paneList4 = new J2DPane*[2];
	m_paneList5 = new J2DPane*[2];

	m_paneList4[0] = og::Screen::TagSearch(screen, tag3);
	m_paneList5[0] = og::Screen::TagSearch(screen, tag4);
	m_paneList4[0]->hide();
	m_paneList5[0]->hide();

	m_paneList4[1] = og::Screen::TagSearch(screen, tag7);
	m_paneList5[1] = og::Screen::TagSearch(screen, tag8);
	m_paneList4[1]->hide();
	m_paneList5[1]->hide();
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0002F0
//  */
// void MenuMgr::init(J2DScreen*, unsigned short, u64, u64, u64)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8030A63C
 * Size:	000494
 */
void MenuMgr::init(J2DScreen* screen, u16 options, u64 tag1, u64 tag2, u64 tag3, u64 tag4, u64 tag5)
{
	m_elementCount = options;
	m_paneList1    = new J2DPane*[options];
	m_paneList2    = new J2DPane*[options];
	m_paneList3    = new J2DPane*[options];
	m_scaleMgrs    = new ScaleMgr[options];

	u64 mesg0 = 0;
	if (tag1)
		mesg0 = MojiToNum(tag1, 2);

	u64 mesg1 = MojiToNum(tag2, 2);
	u64 mesg2 = MojiToNum(tag3, 2);

	for (int i = 0; i < options; i++) {
		u64 cMesg      = mesg0 + i;
		m_paneList1[i] = screen->search(cMesg);

		cMesg          = mesg1 + i;
		m_paneList2[i] = screen->search(cMesg);

		cMesg          = mesg2 + i;
		m_paneList3[i] = screen->search(cMesg);
	}

	m_timer            = 0.0f;
	m_timerMax         = 1.0f;
	m_paneList4        = nullptr;
	m_paneList5        = nullptr;
	m_cSelectId        = 0;
	m_cursorState      = 0;
	m_cursorDelayTimer = 0.0f;
	selectSub(m_cSelectId);

	m_paneList4 = new J2DPane*[options];
	m_paneList5 = new J2DPane*[options];

	mesg1 = MojiToNum(tag2, 2);
	mesg2 = MojiToNum(tag3, 2);

	for (int i = 0; i < options; i++) {
		u64 cMesg      = mesg1 + (i / 10 * 0x100) + i % 10;
		m_paneList4[i] = og::Screen::TagSearch(screen, cMesg);

		cMesg = mesg2 + (i / 10 * 0x100) + i % 10;
		;
		m_paneList5[i] = og::Screen::TagSearch(screen, cMesg);

		m_paneList4[i]->hide();
		m_paneList5[i]->hide();
	}

	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  rlwinm    r0,r5,2,14,29
	  stmw      r14, 0x18(r1)
	  mr        r17, r3
	  lwz       r15, 0x68(r1)
	  mr        r18, r4
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r5,0,16,31
	  lwz       r14, 0x6C(r1)
	  mr        r23, r7
	  sth       r5, 0x8(r1)
	  mr        r20, r8
	  mr        r16, r9
	  mr        r19, r10
	  rlwinm    r21,r5,0,16,31
	  sth       r0, 0x8(r3)
	  lwz       r0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E66EC
	  stw       r3, 0x14(r17)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E66F8
	  stw       r3, 0x18(r17)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E6704
	  mulli     r4, r21, 0x1C
	  stw       r3, 0x1C(r17)
	  addi      r3, r4, 0x10
	  bl        -0x2E6714
	  lis       r4, 0x8033
	  lis       r5, 0x8030
	  subi      r4, r4, 0x71FC
	  mr        r7, r21
	  addi      r5, r5, 0x78A0
	  li        r6, 0x1C
	  bl        -0x248CEC
	  li        r21, 0
	  stw       r3, 0x20(r17)
	  xor       r3, r20, r21
	  xor       r0, r23, r21
	  mr        r22, r21
	  or.       r0, r3, r0
	  beq-      .loc_0xD8
	  mr        r4, r20
	  mr        r3, r23
	  li        r5, 0x2
	  bl        -0x7C94
	  mr        r21, r4
	  mr        r22, r3

	.loc_0xD8:
	  mr        r4, r19
	  mr        r3, r16
	  li        r5, 0x2
	  bl        -0x7CAC
	  mr        r27, r4
	  mr        r28, r3
	  mr        r4, r14
	  mr        r3, r15
	  li        r5, 0x2
	  bl        -0x7CC4
	  lis       r5, 0xFFFF
	  li        r7, -0x1
	  and       r0, r20, r5
	  li        r26, 0
	  and       r6, r19, r5
	  and       r5, r14, r5
	  and       r14, r23, r7
	  ori       r23, r0, 0x3030
	  and       r0, r16, r7
	  mr        r29, r4
	  stw       r0, 0x10(r1)
	  and       r0, r15, r7
	  mr        r30, r3
	  mr        r20, r26
	  stw       r0, 0x14(r1)
	  ori       r24, r6, 0x3030
	  ori       r25, r5, 0x3030
	  b         .loc_0x2B8

	.loc_0x148:
	  srawi     r19, r26, 0x1F
	  li        r5, 0
	  addc      r31, r21, r26
	  li        r6, 0xA
	  adde      r16, r22, r19
	  mr        r3, r16
	  mr        r4, r31
	  bl        -0x248AC8
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x2488B0
	  rlwinm    r15,r3,8,0,23
	  mr        r3, r16
	  rlwinm    r16,r4,8,0,23
	  li        r5, 0
	  rlwimi    r15,r4,8,24,31
	  mr        r4, r31
	  li        r6, 0xA
	  bl        -0x2488D0
	  lwz       r12, 0x0(r18)
	  addc      r4, r23, r4
	  adde      r0, r14, r3
	  mr        r3, r18
	  lwz       r12, 0x3C(r12)
	  addc      r6, r4, r16
	  adde      r5, r0, r15
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r17)
	  addc      r31, r27, r26
	  adde      r15, r28, r19
	  li        r5, 0
	  stwx      r3, r4, r20
	  mr        r3, r15
	  mr        r4, r31
	  li        r6, 0xA
	  bl        -0x248B3C
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x248924
	  rlwinm    r16,r3,8,0,23
	  mr        r3, r15
	  rlwinm    r15,r4,8,0,23
	  li        r5, 0
	  rlwimi    r16,r4,8,24,31
	  mr        r4, r31
	  li        r6, 0xA
	  bl        -0x248944
	  lwz       r12, 0x0(r18)
	  addc      r4, r24, r4
	  lwz       r0, 0x10(r1)
	  lwz       r12, 0x3C(r12)
	  adde      r0, r0, r3
	  mr        r3, r18
	  addc      r6, r4, r15
	  adde      r5, r0, r16
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r17)
	  addc      r15, r29, r26
	  adde      r19, r30, r19
	  li        r5, 0
	  stwx      r3, r4, r20
	  mr        r3, r19
	  mr        r4, r15
	  li        r6, 0xA
	  bl        -0x248BB4
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x24899C
	  rlwinm    r16,r3,8,0,23
	  mr        r3, r19
	  rlwinm    r19,r4,8,0,23
	  li        r5, 0
	  rlwimi    r16,r4,8,24,31
	  mr        r4, r15
	  li        r6, 0xA
	  bl        -0x2489BC
	  lwz       r12, 0x0(r18)
	  addc      r4, r25, r4
	  lwz       r0, 0x14(r1)
	  lwz       r12, 0x3C(r12)
	  adde      r0, r0, r3
	  mr        r3, r18
	  addc      r6, r4, r19
	  adde      r5, r0, r16
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1C(r17)
	  addi      r26, r26, 0x1
	  stwx      r3, r4, r20
	  addi      r20, r20, 0x4

	.loc_0x2B8:
	  lhz       r0, 0x8(r17)
	  cmpw      r26, r0
	  blt+      .loc_0x148
	  lfs       f1, -0xCE0(r2)
	  li        r0, 0
	  lfs       f0, -0xCDC(r2)
	  mr        r3, r17
	  stfs      f1, 0xC(r17)
	  stfs      f0, 0x10(r17)
	  stw       r0, 0x24(r17)
	  stw       r0, 0x28(r17)
	  sth       r0, 0xA(r17)
	  stw       r0, 0x0(r17)
	  stfs      f1, 0x4(r17)
	  lhz       r4, 0xA(r17)
	  bl        .loc_0x494
	  lwz       r4, 0x74(r1)
	  li        r5, 0x2
	  lwz       r3, 0x70(r1)
	  bl        -0x7ECC
	  mr        r21, r4
	  mr        r20, r3
	  lwz       r4, 0x7C(r1)
	  li        r5, 0x2
	  lwz       r3, 0x78(r1)
	  bl        -0x7EE4
	  lwz       r0, 0x74(r1)
	  lis       r5, 0xFFFF
	  mr        r16, r3
	  li        r7, -0x1
	  and       r6, r0, r5
	  lwz       r0, 0x7C(r1)
	  lwz       r3, 0xC(r1)
	  mr        r19, r4
	  and       r5, r0, r5
	  lwz       r0, 0x70(r1)
	  ori       r25, r6, 0x3030
	  and       r15, r0, r7
	  lwz       r0, 0x78(r1)
	  ori       r26, r5, 0x3030
	  and       r14, r0, r7
	  bl        -0x2E69EC
	  stw       r3, 0x24(r17)
	  lwz       r3, 0xC(r1)
	  bl        -0x2E69F8
	  stw       r3, 0x28(r17)
	  li        r27, 0
	  lhz       r23, 0x8(r1)
	  li        r22, 0
	  b         .loc_0x478

	.loc_0x380:
	  srawi     r24, r27, 0x1F
	  li        r5, 0
	  addc      r30, r21, r27
	  li        r6, 0xA
	  adde      r29, r20, r24
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x248D00
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x248AE8
	  rlwinm    r28,r3,8,0,23
	  mr        r3, r29
	  rlwinm    r29,r4,8,0,23
	  li        r5, 0
	  rlwimi    r28,r4,8,24,31
	  mr        r4, r30
	  li        r6, 0xA
	  bl        -0x248B08
	  addc      r4, r4, r29
	  adde      r0, r3, r28
	  mr        r3, r18
	  addc      r6, r25, r4
	  adde      r5, r15, r0
	  bl        -0x7B70
	  lwz       r4, 0x24(r17)
	  addc      r29, r19, r27
	  adde      r28, r16, r24
	  li        r5, 0
	  stwx      r3, r4, r22
	  mr        r3, r28
	  mr        r4, r29
	  li        r6, 0xA
	  bl        -0x248D68
	  li        r5, 0
	  li        r6, 0xA
	  bl        -0x248B50
	  rlwinm    r24,r3,8,0,23
	  mr        r3, r28
	  rlwinm    r28,r4,8,0,23
	  li        r5, 0
	  rlwimi    r24,r4,8,24,31
	  mr        r4, r29
	  li        r6, 0xA
	  bl        -0x248B70
	  addc      r4, r4, r28
	  adde      r0, r3, r24
	  mr        r3, r18
	  addc      r6, r26, r4
	  adde      r5, r14, r0
	  bl        -0x7BD8
	  lwz       r4, 0x28(r17)
	  li        r0, 0
	  addi      r27, r27, 0x1
	  stwx      r3, r4, r22
	  lwz       r3, 0x24(r17)
	  lwzx      r3, r3, r22
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x28(r17)
	  lwzx      r3, r3, r22
	  addi      r22, r22, 0x4
	  stb       r0, 0xB0(r3)

	.loc_0x478:
	  cmpw      r27, r23
	  blt+      .loc_0x380
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x494:
	*/
}

/*
 * --INFO--
 * Address:	8030AAD0
 * Size:	000090
 */
void MenuMgr::selectSub(u16 sel)
{
	if (sel < m_elementCount) {
		m_prevSelected = m_cSelectId;
		m_cSelectId    = sel;
		_48            = true;
		_6C            = 0.0f;
		if (_2D) {
			MenuOnOff();
		}
		m_scaleMgrs[m_cSelectId].up(0.2f, 50.0f, 0.5f, 0.0f);
		m_timer = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8030AB60
 * Size:	000098
 * Identical to selectSub minus one extra sound effect, very cool Ogawa
 */
void MenuMgr::select(u16 sel)
{
	if (sel < m_elementCount) {
		m_prevSelected = m_cSelectId;
		m_cSelectId    = sel;
		_48            = true;
		_6C            = 0.0f;
		if (_2D) {
			MenuOnOff();
		}
		m_scaleMgrs[m_cSelectId].up(0.2f, 50.0f, 0.5f, 0.0f);
		m_timer = 0.0f;
	}
	ogSound->setCursor();
}

/*
 * --INFO--
 * Address:	8030ABF8
 * Size:	000014
 */
void MenuMgr::initSelNum(u16 sel)
{
	m_prevSelected = sel;
	m_cSelectId    = sel;
	_6C            = 0.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void MenuMgr::calcCenter(J2DPane* pane, Vector2f* pos)
{
	Vector3f pos1 = pane->getGlbVtx(0);
	Vector3f pos2 = pane->getGlbVtx(3);
	pos->x        = (pos1.x + pos2.x) / 2;
	pos->y        = (pos1.y + pos2.y) / 2;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
// regswaps in here
void MenuMgr::calcPoint(Vector2f& vec1, Vector2f& vec2, f32 scale, Vector2f* outVec)
{
	Vector2f compVec = Vector2f(vec2.x * (1.0f - scale), vec2.y * (1.0f - scale));
	*outVec          = Vector2f(vec1.x * scale + compVec.x, vec1.y * scale + compVec.y);
}

/*
 * --INFO--
 * Address:	8030AC0C
 * Size:	000580
 */
void MenuMgr::update()
{
	switch (m_cursorState) {
	case 0:
		break; // nice one ogawa

	case 1:
		m_cursorDelayTimer -= sys->m_deltaTime;
		if (m_cursorDelayTimer < 0.0f) {
			m_isCursorActive   = true;
			m_cursorState      = 2;
			m_cursorDelayTimer = 0.0f;
			if (m_efxCursor1) {
				m_efxCursor1->create(nullptr);
			}
			if (m_efxCursor2) {
				m_efxCursor2->create(nullptr);
			}
		}
		break;

	case 2:
		if (m_paneList4) {
			calcCenter(m_paneList4[m_cSelectId], &m_selPosLeft);
		}
		if (m_paneList5) {
			calcCenter(m_paneList5[m_cSelectId], &m_selPosRight);
		}
		if (_48) {
			_6C += sys->m_deltaTime;
			if (_6C > 0.2f) {
				m_cursorPos1 = m_selPosLeft;
				m_cursorPos2 = m_selPosRight;
				_48          = false;
			} else {
				f32 scale = _6C / 0.2f;
				if (m_paneList4) {
					calcCenter(m_paneList4[m_prevSelected], &m_transitionPosLeft);
					calcPoint(m_selPosLeft, m_transitionPosLeft, scale, &m_cursorPos1);
				}
				if (m_paneList5) {
					calcCenter(m_paneList5[m_prevSelected], &m_transitionPosRight);
					calcPoint(m_selPosRight, m_transitionPosRight, scale, &m_cursorPos2);
				}
			}
		} else {
			if (m_paneList4) {
				m_cursorPos1 = m_selPosLeft;
			}
			if (m_paneList5) {
				m_cursorPos2 = m_selPosRight;
			}
		}
		break;
	case 3:
		if (m_paneList4) {
			calcCenter(m_paneList4[m_cSelectId], &m_selPosLeft);
			m_cursorPos1.x = m_selPosLeft.x;
			m_cursorPos1.y = m_selPosLeft.y;
		}
		if (m_paneList5) {
			calcCenter(m_paneList5[m_cSelectId], &m_selPosRight);
			m_cursorPos2.x = m_selPosRight.x;
			m_cursorPos2.y = m_selPosRight.y;
		}
		break;
	}
	/*
stwu     r1, -0x140(r1)
mflr     r0
stw      r0, 0x144(r1)
stfd     f31, 0x130(r1)
psq_st   f31, 312(r1), 0, qr0
stw      r31, 0x12c(r1)
stw      r30, 0x128(r1)
mr       r31, r3
lwz      r0, 0(r3)
cmpwi    r0, 2
beq      lbl_8030ACD4
bge      lbl_8030AC4C
cmpwi    r0, 0
beq      lbl_8030B16C
bge      lbl_8030AC58
b        lbl_8030B16C

lbl_8030AC4C:
cmpwi    r0, 4
bge      lbl_8030B16C
b        lbl_8030B024

lbl_8030AC58:
lwz      r3, sys@sda21(r13)
lfs      f2, 4(r31)
lfs      f1, 0x54(r3)
lfs      f0, lbl_8051D680@sda21(r2)
fsubs    f1, f2, f1
stfs     f1, 4(r31)
lfs      f1, 4(r31)
fcmpo    cr0, f1, f0
bge      lbl_8030B16C
li       r3, 1
li       r0, 2
stb      r3, 0x2c(r31)
stw      r0, 0(r31)
stfs     f0, 4(r31)
lwz      r3, 0x40(r31)
cmplwi   r3, 0
beq      lbl_8030ACB0
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 8(r12)
mtctr    r12
bctrl

lbl_8030ACB0:
lwz      r3, 0x44(r31)
cmplwi   r3, 0
beq      lbl_8030B16C
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 8(r12)
mtctr    r12
bctrl
b        lbl_8030B16C

lbl_8030ACD4:
lwz      r4, 0x24(r31)
cmplwi   r4, 0
beq      lbl_8030AD68
lhz      r0, 0xa(r31)
addi     r3, r1, 0x110
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x110(r1)
mr       r4, r30
lwz      r6, 0x114(r1)
addi     r3, r1, 0x11c
lwz      r0, 0x118(r1)
stw      r5, 0xf8(r1)
li       r5, 3
stw      r6, 0xfc(r1)
stw      r0, 0x100(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x11c(r1)
lwz      r3, 0x120(r1)
stw      r0, 0x104(r1)
lwz      r0, 0x124(r1)
stw      r3, 0x108(r1)
lfs      f3, 0xf8(r1)
lfs      f2, 0x104(r1)
lfs      f1, 0xfc(r1)
lfs      f0, 0x108(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0x10c(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x5c(r31)
stfs     f0, 0x60(r31)

lbl_8030AD68:
lwz      r4, 0x28(r31)
cmplwi   r4, 0
beq      lbl_8030ADFC
lhz      r0, 0xa(r31)
addi     r3, r1, 0xe0
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0xe0(r1)
mr       r4, r30
lwz      r6, 0xe4(r1)
addi     r3, r1, 0xec
lwz      r0, 0xe8(r1)
stw      r5, 0xc8(r1)
li       r5, 3
stw      r6, 0xcc(r1)
stw      r0, 0xd0(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0xec(r1)
lwz      r3, 0xf0(r1)
stw      r0, 0xd4(r1)
lwz      r0, 0xf4(r1)
stw      r3, 0xd8(r1)
lfs      f3, 0xc8(r1)
lfs      f2, 0xd4(r1)
lfs      f1, 0xcc(r1)
lfs      f0, 0xd8(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0xdc(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x64(r31)
stfs     f0, 0x68(r31)

lbl_8030ADFC:
lbz      r0, 0x48(r31)
cmplwi   r0, 0
beq      lbl_8030AFE8
lwz      r3, sys@sda21(r13)
lfs      f2, 0x6c(r31)
lfs      f1, 0x54(r3)
lfs      f0, lbl_8051D688@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 0x6c(r31)
lfs      f1, 0x6c(r31)
fcmpo    cr0, f1, f0
ble      lbl_8030AE58
lfs      f0, 0x5c(r31)
li       r0, 0
stfs     f0, 0x30(r31)
lfs      f0, 0x60(r31)
stfs     f0, 0x34(r31)
lfs      f0, 0x64(r31)
stfs     f0, 0x38(r31)
lfs      f0, 0x68(r31)
stfs     f0, 0x3c(r31)
stb      r0, 0x48(r31)
b        lbl_8030B16C

lbl_8030AE58:
fdivs    f31, f1, f0
lwz      r4, 0x24(r31)
cmplwi   r4, 0
beq      lbl_8030AF20
lhz      r0, 0x70(r31)
addi     r3, r1, 0xb0
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0xb0(r1)
mr       r4, r30
lwz      r6, 0xb4(r1)
addi     r3, r1, 0xbc
lwz      r0, 0xb8(r1)
stw      r5, 0x98(r1)
li       r5, 3
stw      r6, 0x9c(r1)
stw      r0, 0xa0(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0xbc(r1)
lwz      r3, 0xc0(r1)
stw      r0, 0xa4(r1)
lwz      r0, 0xc4(r1)
stw      r3, 0xa8(r1)
lfs      f3, 0x98(r1)
lfs      f2, 0xa4(r1)
lfs      f1, 0x9c(r1)
lfs      f0, 0xa8(r1)
fadds    f2, f3, f2
lfs      f3, lbl_8051D690@sda21(r2)
fadds    f1, f1, f0
lfs      f0, lbl_8051D684@sda21(r2)
fmuls    f2, f2, f3
stw      r0, 0xac(r1)
fsubs    f4, f0, f31
fmuls    f0, f1, f3
stfs     f2, 0x4c(r31)
stfs     f0, 0x50(r31)
lfs      f0, 0x4c(r31)
lfs      f3, 0x50(r31)
fmuls    f1, f0, f4
lfs      f2, 0x5c(r31)
fmuls    f0, f3, f4
lfs      f3, 0x60(r31)
fmadds   f1, f2, f31, f1
fmadds   f0, f3, f31, f0
stfs     f1, 0x30(r31)
stfs     f0, 0x34(r31)

lbl_8030AF20:
lwz      r4, 0x28(r31)
cmplwi   r4, 0
beq      lbl_8030B16C
lhz      r0, 0x70(r31)
addi     r3, r1, 0x80
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x80(r1)
mr       r4, r30
lwz      r6, 0x84(r1)
addi     r3, r1, 0x8c
lwz      r0, 0x88(r1)
stw      r5, 0x68(r1)
li       r5, 3
stw      r6, 0x6c(r1)
stw      r0, 0x70(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x8c(r1)
lwz      r3, 0x90(r1)
stw      r0, 0x74(r1)
lwz      r0, 0x94(r1)
stw      r3, 0x78(r1)
lfs      f3, 0x68(r1)
lfs      f2, 0x74(r1)
lfs      f1, 0x6c(r1)
lfs      f0, 0x78(r1)
fadds    f2, f3, f2
lfs      f3, lbl_8051D690@sda21(r2)
fadds    f1, f1, f0
lfs      f0, lbl_8051D684@sda21(r2)
fmuls    f2, f2, f3
stw      r0, 0x7c(r1)
fsubs    f4, f0, f31
fmuls    f0, f1, f3
stfs     f2, 0x54(r31)
stfs     f0, 0x58(r31)
lfs      f0, 0x54(r31)
lfs      f3, 0x58(r31)
fmuls    f1, f0, f4
lfs      f2, 0x64(r31)
fmuls    f0, f3, f4
lfs      f3, 0x68(r31)
fmadds   f1, f2, f31, f1
fmadds   f0, f3, f31, f0
stfs     f1, 0x38(r31)
stfs     f0, 0x3c(r31)
b        lbl_8030B16C

lbl_8030AFE8:
lwz      r0, 0x24(r31)
cmplwi   r0, 0
beq      lbl_8030B004
lfs      f0, 0x5c(r31)
stfs     f0, 0x30(r31)
lfs      f0, 0x60(r31)
stfs     f0, 0x34(r31)

lbl_8030B004:
lwz      r0, 0x28(r31)
cmplwi   r0, 0
beq      lbl_8030B16C
lfs      f0, 0x64(r31)
stfs     f0, 0x38(r31)
lfs      f0, 0x68(r31)
stfs     f0, 0x3c(r31)
b        lbl_8030B16C

lbl_8030B024:
lwz      r4, 0x24(r31)
cmplwi   r4, 0
beq      lbl_8030B0C8
lhz      r0, 0xa(r31)
addi     r3, r1, 0x50
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x50(r1)
mr       r4, r30
lwz      r6, 0x54(r1)
addi     r3, r1, 0x5c
lwz      r0, 0x58(r1)
stw      r5, 0x38(r1)
li       r5, 3
stw      r6, 0x3c(r1)
stw      r0, 0x40(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x5c(r1)
lwz      r3, 0x60(r1)
stw      r0, 0x44(r1)
lwz      r0, 0x64(r1)
stw      r3, 0x48(r1)
lfs      f3, 0x38(r1)
lfs      f2, 0x44(r1)
lfs      f1, 0x3c(r1)
lfs      f0, 0x48(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0x4c(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x5c(r31)
stfs     f0, 0x60(r31)
lfs      f0, 0x5c(r31)
stfs     f0, 0x30(r31)
lfs      f0, 0x60(r31)
stfs     f0, 0x34(r31)

lbl_8030B0C8:
lwz      r4, 0x28(r31)
cmplwi   r4, 0
beq      lbl_8030B16C
lhz      r0, 0xa(r31)
addi     r3, r1, 0x20
li       r5, 0
slwi     r0, r0, 2
lwzx     r30, r4, r0
mr       r4, r30
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x20(r1)
mr       r4, r30
lwz      r6, 0x24(r1)
addi     r3, r1, 0x2c
lwz      r0, 0x28(r1)
stw      r5, 8(r1)
li       r5, 3
stw      r6, 0xc(r1)
stw      r0, 0x10(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x2c(r1)
lwz      r3, 0x30(r1)
stw      r0, 0x14(r1)
lwz      r0, 0x34(r1)
stw      r3, 0x18(r1)
lfs      f3, 8(r1)
lfs      f2, 0x14(r1)
lfs      f1, 0xc(r1)
lfs      f0, 0x18(r1)
fadds    f3, f3, f2
lfs      f2, lbl_8051D690@sda21(r2)
fadds    f0, f1, f0
stw      r0, 0x1c(r1)
fmuls    f1, f3, f2
fmuls    f0, f0, f2
stfs     f1, 0x64(r31)
stfs     f0, 0x68(r31)
lfs      f0, 0x64(r31)
stfs     f0, 0x38(r31)
lfs      f0, 0x68(r31)
stfs     f0, 0x3c(r31)

lbl_8030B16C:
psq_l    f31, 312(r1), 0, qr0
lwz      r0, 0x144(r1)
lfd      f31, 0x130(r1)
lwz      r31, 0x12c(r1)
lwz      r30, 0x128(r1)
mtlr     r0
addi     r1, r1, 0x140
blr
	*/
}

/*
 * --INFO--
 * Address:	8030B18C
 * Size:	0000EC
 */
void MenuMgr::draw(J2DGrafContext* graf)
{
	for (int i = 0; i < m_elementCount; i++) {
		if ((int)m_doScale) {
			f32 scale = m_scaleMgrs[i].calc();
			if (m_cSelectId == i) {
				scale *= _74;
			}
			m_paneList1[i]->updateScale(scale);
		}
	}

	if ((int)m_doScale) {
		m_timer += sys->m_deltaTime;
		if (m_timer > m_timerMax)
			m_timer -= m_timerMax;
	}
}

/*
 * --INFO--
 * Address:	8030B278
 * Size:	0000F8
 */
void MenuMgr::MenuOnOff()
{
	for (int i = 0; i < m_elementCount; i++) {
		if (i == m_cSelectId) {
			J2DPane* pane = m_paneList2[i];
			if (pane)
				pane->setAlpha(255);
			pane = m_paneList3[i];
			if (pane)
				pane->setAlpha(255);
		} else {
			J2DPane* pane = m_paneList2[i];
			if (pane)
				pane->setAlpha(0);
			pane = m_paneList3[i];
			if (pane)
				pane->setAlpha(255);
		}
	}
}
} // namespace Screen
} // namespace og
