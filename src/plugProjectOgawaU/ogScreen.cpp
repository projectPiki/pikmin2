#include "types.h"
#include "JSystem/JSupport/JSUTreeIterator.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "og/Screen/PictureTreeColor.h"
#include "P2DScreen.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace Screen {

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
	_00 += 30.0f * (m_speed * sys->m_secondsPerFrame);
	if (_00 > TAU) {
		_00 = _00 - TAU;
	}
	float factor = _08 * (1.0f + pikmin2_sinf(_00));
	float scale  = 0.5f;
	float result = factor * scale + _0C;
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

	PictureTreeColorCaptureInfo* resultPtr = nullptr;

	if (count > 0) {
		wkPtr     = new PictureTreeColorInfo[count];
		Max       = count;
		wkMax     = count;
		resultPtr = new PictureTreeColorCaptureInfo(count, wkPtr);
	}

	if ((u16)picture->getTypeID() == 0x12) {
		JUtility::TColor white = static_cast<J2DPicture*>(picture)->getWhite();
		JUtility::TColor black = static_cast<J2DPicture*>(picture)->getBlack();
		if (wkMax > 0) {
			wkPtr->m_pane = picture;
			wkPtr->m_white.set(white.asGXColor.r, white.asGXColor.g, white.asGXColor.b, white.asGXColor.a);
			wkPtr->m_black.set(black.asGXColor.r, black.asGXColor.g, black.asGXColor.b, black.asGXColor.a);
			wkPtr++;
			wkMax--;
		} else {
			JUT_PANICLINE(157, "picture pane overflow!!\n");
		}
	}

	JSUPtrLink* tree = (JSUPtrLink*)picture->m_tree.m_list.m_head;

	if (tree != nullptr) {
		&((JSUTree<J2DPane>*)tree)->m_list -= 1;
	}

	while (tree != nullptr) {
		capturePictureTreeColor((J2DPane*)((JSUTree<J2DPane>*)tree)->m_link.m_value, 0);
		tree = ((JSUTree<J2DPane>*)tree)->m_link.m_next;

		if (tree != nullptr) {
			&((JSUTree<J2DPane>*)tree)->m_list -= 1;
		}
	}

	return resultPtr;
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
	store.asGXColor.r = (color1.asGXColor.r * tCompl) + (color2.asGXColor.r * t);
	store.asGXColor.g = (color1.asGXColor.g * tCompl) + (color2.asGXColor.g * t);
	store.asGXColor.b = (color1.asGXColor.b * tCompl) + (color2.asGXColor.b * t);
	store.asGXColor.a = (color1.asGXColor.a * tCompl) + (color2.asGXColor.a * t);
	outColor->set(store.asGXColor.r, store.asGXColor.g, store.asGXColor.b, store.asGXColor.a);
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
// void calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<float>(void)
void calcGlbCenter(J2DPane*, Vector2f*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	addi     r3, r1, 0x14
	mr       r4, r30
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r5, 0x14(r1)
	mr       r4, r30
	lwz      r6, 0x18(r1)
	addi     r3, r1, 8
	lwz      r0, 0x1c(r1)
	stw      r5, 0x2c(r1)
	li       r5, 3
	stw      r6, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stw      r0, 0x20(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x24(r1)
	lfs      f3, 0x2c(r1)
	lfs      f2, 0x20(r1)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x24(r1)
	fadds    f3, f3, f2
	lfs      f2, lbl_8051D520@sda21(r2)
	fadds    f0, f1, f0
	stw      r0, 0x28(r1)
	fmuls    f1, f3, f2
	fmuls    f0, f0, f2
	stfs     f1, 0(r31)
	stfs     f0, 4(r31)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80302814
 * Size:	00010C
 */
u64 maskTag2(u64, u16)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
clrlwi   r0, r5, 0x10
cmplwi   r0, 0x63
stw      r31, 0x4c(r1)
mr       r31, r3
stw      r30, 0x48(r1)
mr       r30, r5
stw      r29, 0x44(r1)
mr       r29, r4
ble      lbl_80302860
lis      r3, lbl_8048DCCC@ha
lis      r5, lbl_8048DCF8@ha
addi     r3, r3, lbl_8048DCCC@l
li       r4, 0x1c2
addi     r5, r5, lbl_8048DCF8@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80302860:
lis      r4, 0x66666667@ha
lis      r0, 0xffff
clrlwi   r11, r30, 0x10
li       r3, -1
addi     r10, r4, 0x66666667@l
and      r0, r29, r0
mulhw    r4, r10, r11
and      r3, r31, r3
addi     r5, r1, 8
mr       r31, r3
srawi    r8, r4, 2
srawi    r4, r4, 2
srwi     r6, r4, 0x1f
srwi     r9, r8, 0x1f
add      r7, r4, r6
mulhw    r4, r10, r7
add      r8, r8, r9
srawi    r4, r4, 2
srwi     r6, r4, 0x1f
add      r4, r4, r6
mulli    r4, r4, 0xa
mulli    r6, r8, 0xa
subf     r4, r4, r7
subf     r6, r6, r11
slwi     r4, r4, 8
add      r4, r6, r4
addi     r4, r4, 0x3030
or       r30, r4, r0
mr       r4, r30
bl       TagToName__Q22og6ScreenFUxPc
lis      r3, 0x0000FFFF@ha
addi     r5, r1, 0x28
addi     r4, r3, 0x0000FFFF@l
li       r3, 0
bl       TagToHex__Q22og6ScreenFUxPc
addi     r5, r1, 0x14
lis      r4, 0xffff
li       r3, -1
bl       TagToHex__Q22og6ScreenFUxPc
lwz      r0, 0x54(r1)
mr       r3, r31
mr       r4, r30
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	80302920
 * Size:	0000A0
 */
u64 maskTag(u64 arg0, u16 arg1, u16 arg2)
{
	if (arg1 >= 8) {
		return 0;
	}

	int shift    = ((arg1 - 1) * 8) & 0xFFF8;
	u64 val      = 0xFF;
	u64 firstVal = ~(val << shift);

	u64 nextVal;
	if (arg2 <= 9) {
		nextVal = arg2 + 0x30;
	} else {
		nextVal = arg2 + 0x37;
	}

	return (nextVal << shift) | (arg0 & firstVal);
}

/*
 * --INFO--
 * Address:	803029C0
 * Size:	0000B4
 */
u16 CalcKeta(u32 p1)
{
	u16 result = 1;
	for (int i = 1; i < 10; i++) {
		if (p1 >= pow(10.0, (double)i)) {
			short j = i + 1;
			result  = j;
		} else {
			break;
		}
	}

	return result;
}

/*
 * --INFO--
 * Address:	80302A74
 * Size:	000158
 */
u64 MojiToNum(u64 moji, int arg1)
{
	char name1[0xC];
	char name2[0xC];

	if ((arg1 < 1) || (arg1 > 8)) {
		TagToName(moji, name1);
		JUT_PANICLINE(567, "MojiToNum ERR!(keta) [%s]\n", name1);
	}

	u64 result = 0;
	for (int i = 0; i < arg1; i++) {

		int shift = ((moji >> (i * 8)) & 0xFF) - 0x30;
		if ((shift < 0) || (shift > 9)) {
			TagToName(moji, name2);
			JUT_PANICLINE(576, "MojiToNum ERR! [%s]\n", name2);
		}

		double power = pow(10.0, (double)i);
		result       = shift * power + result;
	}

	return result;
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
u64 CharCodeToTag(char*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r4, lbl_8048DE28@ha
stw      r0, 0x24(r1)
addi     r4, r4, lbl_8048DE28@l
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
lbz      r5, 0(r3)
lbz      r6, 1(r3)
addi     r3, r1, 8
crclr    6
bl       sprintf
lbz      r0, 8(r1)
li       r9, 0
lbz      r3, 9(r1)
li       r10, 0xff
extsb    r6, r0
lbz      r0, 0xa(r1)
srawi    r5, r6, 0x1f
extsb    r4, r3
extsb    r3, r0
and      r30, r6, r10
and      r0, r5, r9
srawi    r7, r4, 0x1f
slwi     r8, r0, 8
lbz      r0, 0xb(r1)
and      r31, r4, r10
srawi    r6, r3, 0x1f
extsb    r4, r0
lbz      r0, 0xc(r1)
srawi    r5, r4, 0x1f
rlwimi   r8, r30, 8, 0x18, 0x1f
and      r11, r4, r10
and      r4, r7, r9
or       r4, r8, r4
and      r12, r3, r10
rlwimi   r31, r30, 8, 0x10, 0x17
extsb    r3, r0
slwi     r7, r4, 8
and      r6, r6, r9
rlwimi   r12, r31, 8, 8, 0x17
srawi    r0, r3, 0x1f
rlwimi   r7, r31, 8, 0x18, 0x1f
and      r4, r3, r10
and      r3, r5, r9
rlwimi   r11, r12, 8, 0, 0x17
or       r5, r7, r6
lwz      r31, 0x1c(r1)
slwi     r5, r5, 8
and      r0, r0, r9
rlwimi   r5, r12, 8, 0x18, 0x1f
rlwimi   r4, r11, 8, 0, 0x17
or       r3, r5, r3
lwz      r30, 0x18(r1)
slwi     r3, r3, 8
rlwimi   r3, r11, 8, 0x18, 0x1f
or       r3, r3, r0
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
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
	_08 = (1.0f - _04) / (p1 / sys->m_secondsPerFrame);
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
	_08 = -_04 / (p1 / sys->m_secondsPerFrame);
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
		float frametime = sys->m_secondsPerFrame;
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
				float frametime = sys->m_secondsPerFrame;
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
void setAlphaScreen(J2DPane*)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
li       r4, 1
li       r5, 0
stw      r0, 0x34(r1)
stmw     r25, 0x14(r1)
mr       r25, r3
bl       setInfluencedAlpha__7J2DPaneFbb
lwz      r31, 0xdc(r25)
cmplwi   r31, 0
beq      lbl_803034CC
addi     r31, r31, -12
b        lbl_803034CC

lbl_80303348:
lwz      r28, 0xc(r31)
li       r4, 1
li       r5, 0
mr       r3, r28
bl       setInfluencedAlpha__7J2DPaneFbb
lwz      r30, 0xdc(r28)
cmplwi   r30, 0
beq      lbl_803034B4
addi     r30, r30, -12
b        lbl_803034B4

lbl_80303370:
lwz      r28, 0xc(r30)
li       r4, 1
li       r5, 0
mr       r3, r28
bl       setInfluencedAlpha__7J2DPaneFbb
lwz      r29, 0xdc(r28)
cmplwi   r29, 0
beq      lbl_8030349C
addi     r29, r29, -12
b        lbl_8030349C

lbl_80303398:
lwz      r28, 0xc(r29)
li       r4, 1
li       r5, 0
mr       r3, r28
bl       setInfluencedAlpha__7J2DPaneFbb
addi     r3, r28, 0xdc
bl       getFirstLink__10JSUPtrListCFv
cmplwi   r3, 0
beq      lbl_803033C0
addi     r3, r3, -12

lbl_803033C0:
mr       r26, r3
b        lbl_80303484

lbl_803033C8:
lwz      r28, 0xc(r26)
li       r4, 1
li       r5, 0
mr       r3, r28
bl       setInfluencedAlpha__7J2DPaneFbb
addi     r27, r28, 0xdc
mr       r3, r27
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r25, r3
b        lbl_80303464

lbl_803033F0:
mr       r3, r25
bl       "getObject__17JSUTree<7J2DPane>CFv"
li       r4, 1
mr       r28, r3
li       r5, 0
bl       setInfluencedAlpha__7J2DPaneFbb
mr       r3, r28
bl       getPaneTree__7J2DPaneFv
mr       r28, r3
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
b        lbl_8030343C

lbl_80303428:
addi     r3, r1, 8
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
addi     r3, r1, 8
bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8030343C:
mr       r3, r28
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
clrlwi.  r0, r3, 0x18
bne      lbl_80303428
mr       r3, r25
bl       "getNextChild__17JSUTree<7J2DPane>CFv"
mr       r25, r3

lbl_80303464:
mr       r3, r27
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
cmplw    r25, r3
bne      lbl_803033F0
lwz      r26, 0x18(r26)
cmplwi   r26, 0
beq      lbl_80303484
addi     r26, r26, -12

lbl_80303484:
cmplwi   r26, 0
bne      lbl_803033C8
lwz      r29, 0x18(r29)
cmplwi   r29, 0
beq      lbl_8030349C
addi     r29, r29, -12

lbl_8030349C:
cmplwi   r29, 0
bne      lbl_80303398
lwz      r30, 0x18(r30)
cmplwi   r30, 0
beq      lbl_803034B4
addi     r30, r30, -12

lbl_803034B4:
cmplwi   r30, 0
bne      lbl_80303370
lwz      r31, 0x18(r31)
cmplwi   r31, 0
beq      lbl_803034CC
addi     r31, r31, -12

lbl_803034CC:
cmplwi   r31, 0
bne      lbl_80303348
lmw      r25, 0x14(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

} // namespace Screen

} // namespace og
