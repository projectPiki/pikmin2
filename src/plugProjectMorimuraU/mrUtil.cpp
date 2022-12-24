#include "types.h"
#include "Morimura/mrUtil.h"
#include "Morimura/Bases.h"
#include "og/Screen/ogScreen.h"

namespace Morimura {
/*
 * --INFO--
 * Address:	803A102C
 * Size:	0000B8
 */
void TCallbackScissor::draw(Graphics& gfx, J2DGrafContext& graf)
{
	gfx.m_perspGraph.setPort();
	GXSetScissor(m_X1, m_Y1, m_X2 - m_X1, m_Y2 - m_Y1);
}

/*
 * --INFO--
 * Address:	803A10E4
 * Size:	0000C0
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size)
{
	m_tagList = nullptr;
	m_msgID   = newtag;
	m_size    = size;

	m_tagList = new u64[size];
	_04       = new int[size];
	for (int i = 0; i < m_size; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &m_tagList[i];

		*currTag = temp - m_msgID;
	}
}

/*
 * --INFO--
 * Address:	803A11A4
 * Size:	000068
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size, u64* taglist2, int* alloc)
{
	m_tagList = nullptr;
	m_msgID   = newtag;
	m_size    = size;
	m_tagList = taglist2;
	_04       = alloc;

	for (int i = 0; i < m_size; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &m_tagList[i];

		*currTag = temp - m_msgID;
	}
}

/*
 * --INFO--
 * Address:	803A120C
 * Size:	00019C
 */
u64 TOffsetMsgSet::getMsgID(int index)
{
	for (int i = 0; i < m_size; i++) {
		_04[i] = 0;
	}

	int counter = 1;
	for (int i = index + 1; i >= 10; i /= 10) {
		counter++;
	}

	JUT_ASSERTLINE(91, counter <= m_size, nullptr);

	int offset = index + 1;
	for (int i = counter; i > 1; i--) {
		calcOffset(offset, i - 1);
	}

	_04[0]     = offset;
	u64 retTag = m_msgID;

	for (int i = 0; i < m_size; i++) {
		int curr = _04[i];
		if (curr) {
			u64* currTag = &m_tagList[i];

			retTag += *currTag * curr;
		}
	}
	return retTag;
}

/*
 * --INFO--
 * Address:	803A13A8
 * Size:	000028
 */
TScreenBase::TScreenBase(JKRArchive* arc, int anims)
{
	m_animScreens        = nullptr;
	m_screenObj          = nullptr;
	m_archive            = arc;
	m_animScreenCountMax = anims;
	m_currEntries        = 0;
}

/*
 * --INFO--
 * Address:	803A13D0
 * Size:	000090
 */
void TScreenBase::create(const char* name, u32 flags)
{
	m_screenObj = new P2DScreen::Mgr_tuning;
	m_screenObj->set(name, flags, m_archive);
	::og::Screen::setCallBackMessage(m_screenObj);

	m_animScreens = new ::og::Screen::AnimScreen*[m_animScreenCountMax];

	::og::Screen::setAlphaScreen(m_screenObj);
}

/*
 * --INFO--
 * Address:	803A1460
 * Size:	0000B0
 */
void TScreenBase::addAnim(char* name)
{
	m_animScreens[m_currEntries] = new TTestAnimScreen;

	m_animScreens[m_currEntries]->init(m_archive, m_screenObj, name);
	m_animScreens[m_currEntries]->m_speed = 0.5f;
	m_currEntries++;
}

/*
 * --INFO--
 * Address:	803A1510
 * Size:	000088
 */
void TScreenBase::update()
{
	if (m_screenObj) {
		m_screenObj->update();
		for (int i = 0; i < m_animScreenCountMax; i++) {
			m_animScreens[i]->update();
		}
		m_screenObj->animation();
	}
}

/*
 * --INFO--
 * Address:	803A1598
 * Size:	000038
 */
void TScreenBase::draw(Graphics& gfx, J2DPerspGraph* graf)
{
	if (m_screenObj) {
		m_screenObj->draw(gfx, *graf);
	}
}

/*
 * --INFO--
 * Address:	803A15D0
 * Size:	000124
 */
TIndPane::TIndPane(char const* name, f32 x, f32 y)
    : CNode("indpane")
{
	m_texture1 = nullptr;
	m_texture2 = nullptr;
	m_texture3 = nullptr;
	_34        = 0.0f;
	_38        = 0.0f;
	_3C        = 0;
	_40        = 0.0f;
	_44        = true;
	m_texture1 = new JUTTexture(name);

	_38      = 0.02f;
	_34      = 0.02f;
	m_minPos = Vector2f(0.0f, 0.0f);
	m_maxPos = Vector2f(x, y);
}

/*
 * --INFO--
 * Address:	803A16F4
 * Size:	0000A4
 */
void TIndPane::createIndTexture(char const* name)
{
	m_texture2 = new JUTTexture(name);
	P2ASSERTLINE(232, m_texture2);
}

/*
 * --INFO--
 * Address:	803A1798
 * Size:	000074
 */
void TIndPane::createCaptureTexture(_GXTexFmt fmt) { m_texture3 = new JUTTexture(m_maxPos.x, m_maxPos.y, fmt); }

/*
 * --INFO--
 * Address:	803A180C
 * Size:	000308
 */
void TIndPane::draw()
{
	J2DOrthoGraph graf(0.0, 0.0, 640.0, 480.0, -1.0, 1.0);
	graf.setPort();
	P2ASSERTLINE(261, m_texture1);
	P2ASSERTLINE(262, m_texture2);
	m_texture1->load(GX_TEXMAP0);
	m_texture2->load(GX_TEXMAP1);

	GXSetNumTevStages(1);
	GXSetNumIndStages(1);
	GXSetNumChans(0);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x1e, GX_FALSE, 0x7d);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_ID_0, GX_TEXCOORD0, GX_TEXMAP1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_ID_0, GX_IND_TEX_SCALE_0, GX_IND_TEX_SCALE_0);
	f32 mtx[6];

	if (_44) {
		mtx[0] = _34;
		mtx[1] = 0.0f;
		mtx[2] = 0.0f;
		mtx[3] = 0.0f;
		mtx[4] = _38;
		mtx[5] = 0.0f;
	} else {
		Matrixf temp;
		PSMTXRotRad(temp.m_matrix.mtxView, 'z', MTXDegToRad(_40));
		mtx[0] = temp.m_matrix.structView.xx * 0.5f;
		mtx[1] = temp.m_matrix.structView.yx * 0.5f;
		mtx[2] = 0.0f;
		mtx[3] = temp.m_matrix.structView.xy * 0.5f;
		mtx[4] = temp.m_matrix.structView.yy * 0.5f;
		mtx[5] = 0.0f;
	}

	GXSetIndTexMtx(GX_IND_TEX_MTX_ID_1, mtx, _3C);
	GXSetTevIndWarp(GX_TEVSTAGE0, GX_IND_TEX_STAGE_ID_0, 1, 0, GX_IND_TEX_MTX_ID_1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);

	Matrixf mtx2;
	PSMTXIdentity(mtx2.m_matrix.mtxView);
	GXLoadPosMtxImm(mtx2.m_matrix.mtxView, 0);
	GXLoadTexMtxImm(mtx2.m_matrix.mtxView, 0x1e, GX_MTX2x4);
	GXSetCurrentMtx(0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	// bottom left
	GXPosition3f32(m_minPos.x, m_minPos.y, 0.0f);
	GXTexCoord2f32(0.0f, 0.0f);

	// bottom right
	GXPosition3f32(m_maxPos.x, m_minPos.y, 0.0f);
	GXTexCoord2f32(1.0f, 0.0f);

	// top right
	GXPosition3f32(m_maxPos.x, m_maxPos.y, 0.0f);
	GXTexCoord2f32(1.0f, 1.0f);

	// top left
	GXPosition3f32(m_minPos.x, m_maxPos.y, 0.0f);
	GXTexCoord2f32(0.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	803A1B14
 * Size:	0000A8
 */
void TScaleUpCounter::setValue(bool flag1, bool flag2)
{
	if (_A9) {
		og::Screen::CallBack_CounterRV::setValue(false, false);

	} else {
		if (flag1 || flag2 || _A8) {
			_A8 = false;
			if (_AA) {
				og::Screen::CallBack_CounterRV::setValue(true, false);
				_AA = false;
			} else {
				og::Screen::CallBack_CounterRV::setValue(false, true);
			}

		} else {
			og::Screen::CallBack_CounterRV::setValue(flag1, flag2);
		}
	}
}

/*
 * --INFO--
 * Address:	803A1BBC
 * Size:	000060
 */
void TScaleUpCounter::forceScaleUp(bool flag)
{
	if (!m_isBlind) {
		setPuyoAnim(true);
		_A8 = true;
	} else {
		setPuyoAnim(false);
	}

	_AA = flag;
}

/*
 * --INFO--
 * Address:	803A1C1C
 * Size:	000040
 */
void TScaleUpCounter::setScale(f32 scale, f32 scalesub)
{
	m_pane12DistX = _AC * scale;
	for (int i = 0; i < m_currCounters; i++) {
		og::Screen::CounterKeta* keta = m_counters[i];
		keta->m_size.x                = scale;
		keta->m_size.y                = scalesub;
	}
}

/*
 * --INFO--
 * Address:	803A1C5C
 * Size:	0001A4
 */
TScaleUpCounter* setScaleUpCounter(P2DScreen::Mgr* screen, u64 inTag, u32* data, u16 flag, JKRArchive* arc)
{
	u64 tagSub1 = og::Screen::maskTag(inTag, 1, 1);
	u64 tagSub2 = og::Screen::maskTag(inTag, 1, 2);
	u64 tagSub3 = tagSub2;
	u16 offs    = 1;

	for (u16 i = 3; i <= 10; i++) {
		u64 tag       = og::Screen::maskTag(inTag, 1, i);
		J2DPane* pane = screen->search(tag);
		if (!pane) {
			offs = i - 1;
			break;
		}

		tagSub3           = tag;
		pane->m_isVisible = false;
	}

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, offs, arc);
	counter->init(screen, tagSub1, tagSub2, tagSub3, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
}

/*
 * --INFO--
 * Address:	803A1E00
 * Size:	00012C
 */
TScaleUpCounter* setScaleUpCounter2(P2DScreen::Mgr* screen, u64 inTag, u64 searchTag, u32* data, u16 flag, JKRArchive* arc)
{
	J2DPane* pane     = screen->search(inTag);
	pane->m_isVisible = false;
	pane              = screen->search(searchTag);
	pane->m_isVisible = false;

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, 2, arc);
	counter->init(screen, inTag, searchTag, searchTag, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
}

/*
 * --INFO--
 * Address:	803A1F2C
 * Size:	0000B8
 */
void TScissorPane::drawSelf(f32, f32, Mtx*)
{
	Matrixf mtx;
	PSMTXIdentity(mtx.m_matrix.mtxView);
	GXLoadPosMtxImm(mtx.m_matrix.mtxView, 0);

	GXSetScissor(_1A8, _1AC, _1B0 - _1A8, _1B4 - _1AC);
}
} // namespace Morimura
