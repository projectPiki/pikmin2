#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "og/Screen/PictureTreeColor.h"
#include "P2DScreen.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace Screen {

ResTIMG* PikiIconTextureResTIMG[19];

void _Print(char* format, ...)
{
	OSReport("ogScreen");
	char buffer[512];
	va_list args;
	va_start(args, format);
	sprintf(buffer, format, __FILE__, buffer);
	vprintf(buffer, args);
}

/*
 * --INFO--
 * Address:	80301EB8
 * Size:	000008
 */
void ArrowAlphaBlink::setSpeed(float speed) { m_speed = speed; }

/*
 * --INFO--
 * Address:	80301EC0
 * Size:	0000C0
 */
float ArrowAlphaBlink::calc()
{
	_00 += 30.0f * (m_speed * sys->m_deltaTime);
	if (_00 > TAU) {
		_00 = _00 - TAU;
	}
	float factor = _08 * (1.0f + pikmin2_sinf(_00));
	float result = (factor / 2) + _0C;
	return result;
}

/*
 * --INFO--
 * Address:	80301F80
 * Size:	00021C
 */
PictureTreeColorCaptureInfo* capturePictureTreeColor(J2DPane* picture, int count)
{
	static PictureTreeColorInfo* wkPtr = nullptr;
	static int Max                     = 0;
	static int wkMax                   = 0;

	PictureTreeColorCaptureInfo* captureInfo = nullptr;

	if (count > 0) {
		wkPtr       = new PictureTreeColorInfo[count];
		Max         = count;
		wkMax       = count;
		captureInfo = new PictureTreeColorCaptureInfo(count, wkPtr);
	}

	if ((u16)picture->getTypeID() == 0x12) {
		JUtility::TColor white = static_cast<J2DPicture*>(picture)->getWhite();
		JUtility::TColor black = static_cast<J2DPicture*>(picture)->getBlack();
		if (wkMax > 0) {
			wkPtr->m_pane = picture;
			wkPtr->m_white.set(white.r, white.g, white.b, white.a);
			wkPtr->m_black.set(black.r, black.g, black.b, black.a);
			wkPtr++;
			wkMax--;
		} else {
			JUT_PANICLINE(157, "picture pane overflow!!\n");
		}
	}

	JSUTree<J2DPane>* tree = picture->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());

	while (iterator != tree->getEndChild()) {
		capturePictureTreeColor(iterator.getObject(), 0);
		++iterator;
	}

	return captureInfo;
}

/*
 * --INFO--
 * Address:	803021D8
 * Size:	000154
 */
void blendColor(JUtility::TColor& color1, JUtility::TColor& color2, float blendFactor, JUtility::TColor* outColor)
{
	float t = blendFactor;
	if (t < 0.0f) {
		t = 0.0f;
	}
	if (t > 1.0f) {
		t = 1.0f;
	}

	float tCompl = 1.0f - t;

	JUtility::TColor store;
	store.r = (color1.r * tCompl) + (color2.r * t);
	store.g = (color1.g * tCompl) + (color2.g * t);
	store.b = (color1.b * tCompl) + (color2.b * t);
	store.a = (color1.a * tCompl) + (color2.a * t);
	outColor->set(store.r, store.g, store.b, store.a);
}

/*
 * --INFO--
 * Address:	8030232C
 * Size:	000370
 */
void blendPictureTreeColor(PictureTreeColorCaptureInfo* captureInfo, JUtility::TColor& color1, JUtility::TColor& color2, float blendFactor)
{
	PictureTreeColorInfo* colorInfo = captureInfo->m_colorInfoArray;
	for (int i = 0; i < captureInfo->m_count; i++) {

		J2DPicture* picture = static_cast<J2DPicture*>(colorInfo[i].m_pane);
		if (picture == nullptr) {
			return;
		} else {
			JUtility::TColor white = colorInfo[i].m_white;
			JUtility::TColor black = colorInfo[i].m_black;

			blendColor(white, color1, blendFactor, &white);
			blendColor(black, color2, blendFactor, &black);

			picture->setWhite(white);
			picture->setBlack(black);
		}
	}
}

/*
 * --INFO--
 * Address:	8030269C
 * Size:	0000C8
 */
float calcSmooth0to1(float p1, float p2)
{
	float ratio = p1 / p2;

	if (ratio < 0.0f) {
		ratio = 0.0f;
	}
	if (ratio > 1.0f) {
		ratio = 1.0f;
	}

	float limit = 0.8f;

	if (ratio < limit) {
		return ratio;
	}

	float theta = ((1.0 / (1.0 - (double)limit)) * (double)(HALF_PI * (ratio - limit)));
	float sin   = pikmin2_sinf(theta);
	return (0.19999999f * sin) + 0.8f;
}

/*
 * --INFO--
 * Address:	80302764
 * Size:	0000B0
 */
void calcGlbCenter(J2DPane* pane, Vector2f* center)
{
	Vector3f vec1 = pane->getGlbVtx(0);
	Vector3f vec2 = pane->getGlbVtx(3);
	center->x     = (vec1.x + vec2.x) / 2;
	center->y     = (vec1.y + vec2.y) / 2;
}

/*
 * --INFO--
 * Address:	80302814
 * Size:	00010C
 */
u64 maskTag2(u64 tag, u16 num)
{
	JUT_ASSERTLINE(450, num <= 0x63, "num is overflow!\n");
	char name[0xC];           // between 0x9 and 0xC inclusive
	char bottomHex[0x18];     // between 0x11 and 0x18 inclusive
	char complementHex[0x14]; // between 0x11 and 0x14 inclusive

	u32 decimalMask = '00' + num % 10 + (((num / 10) % 10) * 0x100);
	u64 complement  = (tag & 0xFFFFFFFFFFFF0000);
	u64 maskedTag   = (tag & 0xFFFFFFFF00000000) | complement | decimalMask;

	TagToName(maskedTag, name);
	TagToHex(0xFFFF, bottomHex);
	TagToHex(0xFFFFFFFFFFFF0000, complementHex);

	return maskedTag;
}

/*
 * --INFO--
 * Address:	80302920
 * Size:	0000A0
 */
u64 maskTag(u64 tag, u16 num, u16 mask)
{
	if (num >= 8) {
		return 0;
	}

	int shift       = ((num - 1) * 8) & 0xFFF8;
	u64 baseChar    = 0xFF;
	u64 extractChar = ~(baseChar << shift);

	u64 maskedChar;
	if (mask <= 9) {
		maskedChar = mask + 0x30;
	} else {
		maskedChar = mask + 0x37;
	}

	return (maskedChar << shift) | (tag & extractChar);
}

const char* PikiIconTextureName[]
    = { "toumei_piki.bti", "bp_l64.bti", "bp_b64.bti", "bp_f64.bti",  "rp_l64.bti",  "rp_b64.bti",  "rp_f64.bti",
	    "yp_l64.bti",      "yp_b64.bti", "yp_f64.bti", "blp_l64.bti", "blp_b64.bti", "blp_f64.bti", "wp_l64.bti",
	    "wp_b64.bti",      "wp_f64.bti", "cha_l.bti",  "cha_b.bti",   "cha_f.bti" };

/*
 * --INFO--
 * Address:	803029C0
 * Size:	0000B4
 */
u16 CalcKeta(u32 p1)
{
	u16 keta = 1;
	for (int i = 1; i < 10; i++) {
		if (p1 >= pow(10.0, (double)i)) {
			keta = i + 1;
		} else {
			break;
		}
	}

	return keta;
}

/*
 * --INFO--
 * Address:	80302A74
 * Size:	000158
 */
u64 MojiToNum(u64 moji, int length)
{
	char name1[0xC];
	char name2[0xC];

	if ((length < 1) || (length > 8)) {
		TagToName(moji, name1);
		JUT_PANICLINE(567, "MojiToNum ERR!(keta) [%s]\n", name1);
	}

	u64 num = 0;
	for (int i = 0; i < length; i++) {

		int shift = ((moji >> (i * 8)) & 0xFF) - 0x30;
		if ((shift < 0) || (shift > 9)) {
			TagToName(moji, name2);
			JUT_PANICLINE(576, "MojiToNum ERR! [%s]\n", name2);
		}

		double power = pow(10.0, (double)i);
		num          = shift * power + num;
	}

	return num;
}

/*
 * --INFO--
 * Address:	80302BCC
 * Size:	000158
 */
void TagToName(u64 tag, char* name)
{
	name[0] = (char)((tag >> 0x38) & 0xFF);
	name[1] = (char)((tag >> 0x30) & 0xFF);
	name[2] = (char)((tag >> 0x28) & 0xFF);
	name[3] = (char)((tag >> 0x20) & 0xFF);
	name[4] = (char)((tag >> 0x18) & 0xFF);
	name[5] = (char)((tag >> 0x10) & 0xFF);
	name[6] = (char)((tag >> 0x8) & 0xFF);
	name[7] = (char)(tag & 0xFF);
	name[8] = 0;

	for (int i = 0; i < 8; i++) {
		if ((name[i] < ' ') || (name[i] > '~')) {
			name[i] = '?';
		}
	}
}

/*
 * --INFO--
 * Address:	80302D24
 * Size:	0000F4
 */
u64 CharCodeToTag(char* code)
{
	char tagStore[10];
	sprintf(tagStore, "x%02x%02x", (u8)code[0], (u8)code[1]);

	u64 tag = ((u64)tagStore[0]) & 0xFF;
	tag     = (tag << 8) | ((u64)tagStore[1]) & 0xFF;
	tag     = (tag << 8) | ((u64)tagStore[2]) & 0xFF;
	tag     = (tag << 8) | ((u64)tagStore[3]) & 0xFF;
	tag     = (tag << 8) | ((u64)tagStore[4]) & 0xFF;

	return tag;
}

/*
 * --INFO--
 * Address:	80302E18
 * Size:	000094
 */
void TagToHex(u64 tag, char* hex)
{
	for (int i = 0; i < 16; i++) {
		u32 conversion = (u32)((tag >> (0x3C - i * 4)) & 0xF);
		char outChar   = (char)(conversion + 0x57);
		if ((u16)conversion <= 9) {
			outChar = (conversion + 0x30);
		}
		hex[i] = outChar;
	}
	hex[16] = 0;
}

/*
 * --INFO--
 * Address:	80302EAC
 * Size:	00018C
 */
J2DPane* TagSearch(J2DScreen* screen, u64 tag)
{
	J2DPane* searchPane = screen->search(tag);
	if (searchPane == nullptr) {
		char name[0xC];
		TagToName(tag, name);
		char errCode[0x400];
		sprintf(errCode, "tag[%s] is not exist!!\n", name);
		JUT_PANICLINE(688, errCode);
	}
	return searchPane;
}

/*
 * --INFO--
 * Address:	80303038
 * Size:	000028
 */
AlphaMgr::AlphaMgr()
{
	_00 = 0;
	_04 = 0.0f;
	_08 = 0.0f;
	_0C = 1.0f;
	_10 = 0.0f;
	_14 = 1.0f;
}

/*
 * --INFO--
 * Address:	80303060
 * Size:	00000C
 */
void AlphaMgr::setBlinkArea(float arg0, float arg1)
{
	_10 = arg0;
	_14 = arg1;
}

/*
 * --INFO--
 * Address:	8030306C
 * Size:	000064
 */
void AlphaMgr::in(float p1)
{
	if (1.0f == _04) {
		_00 = 0;
		return;
	}

	if (0.0f == p1) {
		_00 = 0;
		_04 = 1.0f;
		return;
	}

	_04 = 0.0f;
	_00 = 1;
	_08 = (1.0f - _04) / (p1 / sys->m_deltaTime);
}

/*
 * --INFO--
 * Address:	803030D0
 * Size:	000064
 */
void AlphaMgr::out(float p1)
{
	_04 = 1.0f;

	if (0.0f == _04) {
		_00 = 0;
		return;
	}

	if (0.0f == p1) {
		_00 = 0;
		_04 = 0.0f;
		return;
	}

	_00 = 2;
	_08 = -_04 / (p1 / sys->m_deltaTime);
}

/*
 * --INFO--
 * Address:	80303134
 * Size:	000050
 */
void AlphaMgr::blink(float p1)
{
	if ((_00 == 0) || (_00 == 3)) {
		_00             = 3;
		float frametime = sys->m_deltaTime;
		if (_08 > 0.0f) {
			_08 = frametime / p1;
			return;
		}
		_08 = -(frametime / p1);
	}
}

/*
 * --INFO--
 * Address:	80303184
 * Size:	000190
 */
u8 AlphaMgr::calc()
{
	switch (_00) {
	case 0:
		break;
	case 1:
		_04 += _08;
		if (_04 >= 1.0f) {
			_04 = 1.0f;
			_00 = 0;
		}
		break;
	case 4:
		_04 += _08;

		if (_04 >= 1.0f) {
			_04         = 1.0f;
			float tempC = _0C;

			if ((_00 == 0) || (_00 == 3)) {
				_00             = 3;
				float frametime = sys->m_deltaTime;
				if (_08 > 0.0f) {
					_08 = frametime / tempC;
				} else {
					_08 = -(frametime / tempC);
				}
			}
		}
		break;
	case 2:
		_04 += _08;
		if (_04 <= 0.0f) {
			_04 = 0.0f;
			_00 = 0;
		}
		break;
	case 3:
		_04 += _08;
		if (_04 >= _14) {
			_04 = _14;
			_08 = -_08;
		} else if (_04 <= _10) {
			_04 = _10;
			_08 = -_08;
		}
		break;
	}

	return 255.0f * _04;
}

/*
 * --INFO--
 * Address:	80303314
 * Size:	0001D4
 */
void setAlphaScreen(J2DPane* pane)
{
	pane->setInfluencedAlpha(1, 0);

	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());

	while (iterator != tree->getEndChild()) {
		J2DPane* nextPane = iterator.getObject();
		setAlphaScreen(nextPane);
		++iterator;
	}
}

} // namespace Screen
} // namespace og

/**
 * NOTE: SHOULD BE WEAK BUT REFUSES TO GENERATE OTHERWISE
 *
 * --INFO--
 * Address:	803034fc
 * Size:	000010
 */
u64 J2DPane::getTagName() const { return m_tag; }

// NOTE: fabricated to generate the P2DScreen::Node vtable and Mgr_tuning dtor
// probably were used in stripped/inlined functions
void fakeogScreen1(P2DScreen::Node* node, P2DScreen::Mgr_tuning* mgr, Graphics& graphics, J2DGrafContext& context)
{
	node->~Node();
	node->doInit();
	node->draw(graphics, context);
	node->update();
	mgr->~Mgr_tuning();
}
