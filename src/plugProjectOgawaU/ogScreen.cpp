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
 * Address:	........
 * Size:	000008
 */
// void ArrowAlphaBlink::setAmp(float)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// void ArrowAlphaBlink::setBottom(float)
// {
// 	// UNUSED FUNCTION
// }

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
    float scale = 0.5f;
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
    static int Max = 0;
    static int wkMax = 0;

    PictureTreeColorCaptureInfo* resultPtr = nullptr;
    
    if (count > 0) {
        wkPtr = new PictureTreeColorInfo[count];
        Max = count;
        wkMax = count;
        resultPtr = new PictureTreeColorCaptureInfo(count, wkPtr);
    }
    
    if ((u16) picture->getTypeID() == 0x12) {
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
    
    JSUPtrLink* tree = (JSUPtrLink*) picture->m_tree.m_list.m_head;

    if (tree != nullptr) {
        &((JSUTree<J2DPane>*) tree)->m_list -= 1;
    }
    
    while (tree != nullptr) {
        capturePictureTreeColor((J2DPane*) ((JSUTree<J2DPane>*) tree)->m_link.m_value, 0);
        tree = ((JSUTree<J2DPane>*) tree)->m_link.m_next;
        
        if (tree != nullptr) {
            &((JSUTree<J2DPane>*) tree)->m_list -= 1;
        }
    }
    
    return resultPtr;
}

/*
 * --INFO--
 * Address:	8030219C
 * Size:	00003C
 */
// WEAK - in header
// PictureTreeColorInfo::PictureTreeColorInfo(void)
// {
//     m_pane = 0;
//     m_white.set(0xFF, 0xFF, 0xFF, 0xFF);
//     m_black.set(0, 0, 0, 0);
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
// void recoverPictureTreeColor(og::Screen::PictureTreeColorCaptureInfo*)
// {
// 	// UNUSED FUNCTION
// }

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
 * Address:	........
 * Size:	0003D0
 */
// void setPictureTreeColor(J2DPane*, JUtility::TColor&, JUtility::TColor&, float)
// {
// 	// UNUSED FUNCTION
// }

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
    
    float theta = ((1.0 / (1.0 - (double) limit)) * (double) (HALF_PI * (ratio - limit)));
    float sin = pikmin2_sinf(theta);
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
 * Address:	........
 * Size:	000154
 */
void kakomiPane(J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000224
 */
void centeringPane(J2DPane*, bool, bool)
{
	// UNUSED FUNCTION
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
u64 maskTag(u64, u16, u16)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
clrlwi   r5, r5, 0x10
stw      r0, 0x24(r1)
cmplwi   r5, 8
stmw     r27, 0xc(r1)
mr       r28, r3
mr       r27, r4
mr       r29, r6
blt      lbl_80302954
li       r4, 0
li       r3, 0
b        lbl_803029AC

lbl_80302954:
addi     r0, r5, -1
li       r3, 0
rlwinm   r31, r0, 3, 0x10, 0x1c
li       r4, 0xff
mr       r5, r31
bl       __shl2i
clrlwi   r5, r29, 0x10
nor      r29, r4, r4
cmplwi   r5, 9
nor      r30, r3, r3
bgt      lbl_8030298C
addi     r4, r5, 0x30
srawi    r3, r4, 0x1f
b        lbl_80302994

lbl_8030298C:
addi     r4, r5, 0x37
srawi    r3, r4, 0x1f

lbl_80302994:
mr       r5, r31
bl       __shl2i
and      r5, r27, r29
and      r0, r28, r30
or       r4, r4, r5
or       r3, r3, r0

lbl_803029AC:
lmw      r27, 0xc(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803029C0
 * Size:	0000B4
 */
i32 CalcKeta(u32)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x38(r1)
lfd      f31, lbl_8051D528@sda21(r2)
stfd     f30, 0x30(r1)
lfd      f30, lbl_8051D550@sda21(r2)
stw      r31, 0x2c(r1)
lis      r31, 0x4330
stw      r30, 0x28(r1)
li       r30, 1
stw      r29, 0x24(r1)
li       r29, 1
stw      r28, 0x20(r1)
mr       r28, r3

lbl_803029FC:
xoris    r0, r29, 0x8000
stw      r31, 8(r1)
lfd      f1, lbl_8051D548@sda21(r2)
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsub     f2, f0, f30
bl       pow
stw      r28, 0x14(r1)
stw      r31, 0x10(r1)
lfd      f0, 0x10(r1)
fsub     f0, f0, f31
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_80302A48
addi     r0, r29, 1
addi     r29, r29, 1
cmpwi    r29, 0xa
clrlwi   r30, r0, 0x10
blt      lbl_803029FC

lbl_80302A48:
lwz      r0, 0x44(r1)
mr       r3, r30
lfd      f31, 0x38(r1)
lfd      f30, 0x30(r1)
lwz      r31, 0x2c(r1)
lwz      r30, 0x28(r1)
lwz      r29, 0x24(r1)
lwz      r28, 0x20(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80302A74
 * Size:	000158
 */
void MojiToNum(unsigned long long, int)
{
	/*
stwu     r1, -0x70(r1)
mflr     r0
stw      r0, 0x74(r1)
stfd     f31, 0x68(r1)
stfd     f30, 0x60(r1)
stmw     r22, 0x38(r1)
mr       r26, r5
lis      r5, lbl_8048DCC0@ha
mr       r25, r3
cmpwi    r26, 1
mr       r24, r4
addi     r31, r5, lbl_8048DCC0@l
blt      lbl_80302AB0
cmpwi    r26, 8
ble      lbl_80302AD8

lbl_80302AB0:
mr       r4, r24
mr       r3, r25
addi     r5, r1, 0x14
bl       TagToName__Q22og6ScreenFUxPc
addi     r3, r31, 0xc
addi     r5, r31, 0x134
addi     r6, r1, 0x14
li       r4, 0x237
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80302AD8:
lfd      f30, lbl_8051D550@sda21(r2)
li       r28, 0
li       r29, 0
li       r27, 0
li       r30, 0
lis      r23, 0x4330
b        lbl_80302BA0

lbl_80302AF4:
mr       r3, r25
mr       r4, r24
mr       r5, r30
bl       __shr2u
li       r0, 0xff
and      r4, r4, r0
li       r0, -48
addc.    r22, r4, r0
blt      lbl_80302B20
cmpwi    r22, 9
ble      lbl_80302B48

lbl_80302B20:
mr       r4, r24
mr       r3, r25
addi     r5, r1, 8
bl       TagToName__Q22og6ScreenFUxPc
addi     r3, r31, 0xc
addi     r5, r31, 0x150
addi     r6, r1, 8
li       r4, 0x240
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80302B48:
xoris    r0, r27, 0x8000
stw      r23, 0x20(r1)
lfd      f1, lbl_8051D548@sda21(r2)
stw      r0, 0x24(r1)
lfd      f0, 0x20(r1)
fsub     f2, f0, f30
bl       pow
fmr      f31, f1
mr       r3, r29
mr       r4, r28
bl       __cvt_ull_dbl
xoris    r0, r22, 0x8000
stw      r23, 0x28(r1)
stw      r0, 0x2c(r1)
lfd      f0, 0x28(r1)
fsub     f0, f0, f30
fmadd    f1, f0, f31, f1
bl       __cvt_dbl_usll
mr       r28, r4
mr       r29, r3
addi     r27, r27, 1
addi     r30, r30, 8

lbl_80302BA0:
cmpw     r27, r26
blt      lbl_80302AF4
lfd      f31, 0x68(r1)
mr       r4, r28
mr       r3, r29
lfd      f30, 0x60(r1)
lmw      r22, 0x38(r1)
lwz      r0, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	80302BCC
 * Size:	000158
 */
void TagToName(u64, char*)
{
	/*
li       r8, 0xff
srwi     r0, r3, 0x18
and      r6, r0, r8
li       r9, 0
srwi     r0, r3, 0x10
stb      r6, 0(r5)
and      r6, r0, r8
srwi     r0, r3, 8
stb      r6, 1(r5)
and      r7, r0, r8
rotlwi   r6, r4, 0x10
stb      r7, 2(r5)
and      r7, r3, r8
rotlwi   r0, r4, 8
rlwimi   r6, r3, 0x10, 0, 0xf
rlwimi   r0, r3, 8, 0, 0x17
stb      r7, 3(r5)
and      r7, r0, r8
and      r6, r6, r8
stb      r7, 4(r5)
rotlwi   r0, r4, 0x18
rlwimi   r0, r3, 0x18, 0, 7
and      r3, r4, r8
stb      r6, 5(r5)
and      r0, r0, r8
stb      r0, 6(r5)
li       r0, 0x3f
stb      r3, 7(r5)
stb      r9, 8(r5)
lbz      r3, 0(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302C58
cmpwi    r3, 0x7e
ble      lbl_80302C5C

lbl_80302C58:
stb      r0, 0(r5)

lbl_80302C5C:
lbz      r3, 1(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302C74
cmpwi    r3, 0x7e
ble      lbl_80302C78

lbl_80302C74:
stb      r0, 1(r5)

lbl_80302C78:
lbz      r3, 2(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302C90
cmpwi    r3, 0x7e
ble      lbl_80302C94

lbl_80302C90:
stb      r0, 2(r5)

lbl_80302C94:
lbz      r3, 3(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302CAC
cmpwi    r3, 0x7e
ble      lbl_80302CB0

lbl_80302CAC:
stb      r0, 3(r5)

lbl_80302CB0:
lbz      r3, 4(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302CC8
cmpwi    r3, 0x7e
ble      lbl_80302CCC

lbl_80302CC8:
stb      r0, 4(r5)

lbl_80302CCC:
lbz      r3, 5(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302CE4
cmpwi    r3, 0x7e
ble      lbl_80302CE8

lbl_80302CE4:
stb      r0, 5(r5)

lbl_80302CE8:
lbz      r3, 6(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302D00
cmpwi    r3, 0x7e
ble      lbl_80302D04

lbl_80302D00:
stb      r0, 6(r5)

lbl_80302D04:
lbz      r3, 7(r5)
extsb    r3, r3
cmpwi    r3, 0x20
blt      lbl_80302D1C
cmpwi    r3, 0x7e
blelr

lbl_80302D1C:
stb      r0, 7(r5)
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
u64 NameToTag(char*)
{
	// UNUSED FUNCTION
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
void TagToHex(u64, char*)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stmw     r24, 0x10(r1)
mr       r26, r5
li       r28, 0
mr       r25, r3
mr       r24, r4
mr       r31, r26
mr       r30, r28
li       r27, 0
li       r29, 0xf

lbl_80302E48:
subfic   r5, r28, 0x3c
mr       r3, r25
mr       r4, r24
bl       __shr2u
and      r3, r4, r29
clrlwi   r0, r3, 0x10
cmplwi   r0, 9
addi     r0, r3, 0x57
extsb    r0, r0
bgt      lbl_80302E78
addi     r0, r3, 0x30
extsb    r0, r0

lbl_80302E78:
addi     r27, r27, 1
stb      r0, 0(r31)
cmpwi    r27, 0x10
addi     r28, r28, 4
addi     r31, r31, 1
blt      lbl_80302E48
li       r0, 0
stb      r0, 0x10(r26)
lmw      r24, 0x10(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	80302EAC
 * Size:	00018C
 */
J2DPane* TagSearch(J2DScreen* parentScreen, u64 tag)
{
	/*
stwu     r1, -0x430(r1)
mflr     r0
stw      r0, 0x434(r1)
stw      r31, 0x42c(r1)
stw      r30, 0x428(r1)
mr       r30, r6
stw      r29, 0x424(r1)
stw      r28, 0x420(r1)
mr       r28, r5
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
or.      r31, r3, r3
bne      lbl_80303014
li       r12, 0xff
srwi     r7, r28, 0x18
srwi     r6, r28, 0x10
srwi     r5, r28, 8
rotlwi   r4, r30, 8
rotlwi   r3, r30, 0x10
rotlwi   r0, r30, 0x18
li       r29, 0
and      r11, r7, r12
rlwimi   r4, r28, 8, 0, 0x17
and      r7, r4, r12
and      r10, r6, r12
rlwimi   r3, r28, 0x10, 0, 0xf
and      r9, r5, r12
and      r6, r3, r12
rlwimi   r0, r28, 0x18, 0, 7
and      r5, r0, r12
and      r8, r28, r12
and      r4, r30, r12
stb      r9, 0xa(r1)
li       r0, 2
addi     r9, r1, 8
stb      r11, 8(r1)
li       r3, 0x3f
stb      r10, 9(r1)
stb      r8, 0xb(r1)
stb      r7, 0xc(r1)
stb      r6, 0xd(r1)
stb      r5, 0xe(r1)
stb      r4, 0xf(r1)
stb      r29, 0x10(r1)
mtctr    r0

lbl_80302F68:
lbz      r0, 0(r9)
extsb    r0, r0
cmpwi    r0, 0x20
blt      lbl_80302F80
cmpwi    r0, 0x7e
ble      lbl_80302F84

lbl_80302F80:
stb      r3, 0(r9)

lbl_80302F84:
lbz      r0, 1(r9)
extsb    r0, r0
cmpwi    r0, 0x20
blt      lbl_80302F9C
cmpwi    r0, 0x7e
ble      lbl_80302FA0

lbl_80302F9C:
stb      r3, 1(r9)

lbl_80302FA0:
lbz      r0, 2(r9)
extsb    r0, r0
cmpwi    r0, 0x20
blt      lbl_80302FB8
cmpwi    r0, 0x7e
ble      lbl_80302FBC

lbl_80302FB8:
stb      r3, 2(r9)

lbl_80302FBC:
lbz      r0, 3(r9)
extsb    r0, r0
cmpwi    r0, 0x20
blt      lbl_80302FD4
cmpwi    r0, 0x7e
ble      lbl_80302FD8

lbl_80302FD4:
stb      r3, 3(r9)

lbl_80302FD8:
addi     r9, r9, 4
addi     r29, r29, 3
bdnz     lbl_80302F68
lis      r4, lbl_8048DE34@ha
addi     r3, r1, 0x14
addi     r4, r4, lbl_8048DE34@l
addi     r5, r1, 8
crclr    6
bl       sprintf
lis      r3, lbl_8048DCCC@ha
addi     r5, r1, 0x14
addi     r3, r3, lbl_8048DCCC@l
li       r4, 0x2b0
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80303014:
lwz      r0, 0x434(r1)
mr       r3, r31
lwz      r31, 0x42c(r1)
lwz      r30, 0x428(r1)
lwz      r29, 0x424(r1)
lwz      r28, 0x420(r1)
mtlr     r0
addi     r1, r1, 0x430
blr
	*/
}

/*
 * --INFO--
 * Address:	80303038
 * Size:	000028
 */
AlphaMgr::AlphaMgr(void)
{
	/*
li       r0, 0
lfs      f1, lbl_8051D51C@sda21(r2)
stw      r0, 0(r3)
lfs      f0, lbl_8051D510@sda21(r2)
stfs     f1, 4(r3)
stfs     f1, 8(r3)
stfs     f0, 0xc(r3)
stfs     f1, 0x10(r3)
stfs     f0, 0x14(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303060
 * Size:	00000C
 */
void AlphaMgr::setBlinkArea(float, float)
{
	/*
stfs     f1, 0x10(r3)
stfs     f2, 0x14(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	8030306C
 * Size:	000064
 */
void AlphaMgr::in(float)
{
	/*
lfs      f3, lbl_8051D510@sda21(r2)
lfs      f0, 4(r3)
fcmpu    cr0, f3, f0
bne      lbl_80303088
li       r0, 0
stw      r0, 0(r3)
blr

lbl_80303088:
lfs      f0, lbl_8051D51C@sda21(r2)
fcmpu    cr0, f0, f1
bne      lbl_803030A4
li       r0, 0
stw      r0, 0(r3)
stfs     f3, 4(r3)
blr

lbl_803030A4:
stfs     f0, 4(r3)
li       r0, 1
stw      r0, 0(r3)
lwz      r4, sys@sda21(r13)
lfs      f2, 4(r3)
lfs      f0, 0x54(r4)
fsubs    f2, f3, f2
fdivs    f0, f1, f0
fdivs    f0, f2, f0
stfs     f0, 8(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803030D0
 * Size:	000064
 */
void AlphaMgr::out(float)
{
	/*
lfs      f0, lbl_8051D510@sda21(r2)
lfs      f2, lbl_8051D51C@sda21(r2)
stfs     f0, 4(r3)
lfs      f0, 4(r3)
fcmpu    cr0, f2, f0
bne      lbl_803030F4
li       r0, 0
stw      r0, 0(r3)
blr

lbl_803030F4:
fcmpu    cr0, f2, f1
bne      lbl_8030310C
li       r0, 0
stw      r0, 0(r3)
stfs     f2, 4(r3)
blr

lbl_8030310C:
li       r0, 2
stw      r0, 0(r3)
lwz      r4, sys@sda21(r13)
lfs      f2, 4(r3)
lfs      f0, 0x54(r4)
fneg     f2, f2
fdivs    f0, f1, f0
fdivs    f0, f2, f0
stfs     f0, 8(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303134
 * Size:	000050
 */
void AlphaMgr::blink(float)
{
	/*
lwz      r0, 0(r3)
cmpwi    r0, 0
beq      lbl_80303148
cmpwi    r0, 3
bnelr

lbl_80303148:
li       r0, 3
lfs      f0, lbl_8051D51C@sda21(r2)
stw      r0, 0(r3)
lfs      f2, 8(r3)
lwz      r4, sys@sda21(r13)
fcmpo    cr0, f2, f0
lfs      f0, 0x54(r4)
ble      lbl_80303174
fdivs    f0, f0, f1
stfs     f0, 8(r3)
blr

lbl_80303174:
fdivs    f0, f0, f1
fneg     f0, f0
stfs     f0, 8(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303184
 * Size:	000190
 */
u8 AlphaMgr::calc()
{
	/*
stwu     r1, -0x10(r1)
lwz      r0, 0(r3)
cmpwi    r0, 2
beq      lbl_80303268
bge      lbl_803031A8
cmpwi    r0, 0
beq      lbl_803032F4
bge      lbl_803031B8
b        lbl_803032F4

lbl_803031A8:
cmpwi    r0, 4
beq      lbl_803031EC
bge      lbl_803032F4
b        lbl_8030329C

lbl_803031B8:
lfs      f2, 4(r3)
lfs      f1, 8(r3)
lfs      f0, lbl_8051D510@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 4(r3)
lfs      f1, 4(r3)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_803032F4
stfs     f0, 4(r3)
li       r0, 0
stw      r0, 0(r3)
b        lbl_803032F4

lbl_803031EC:
lfs      f2, 4(r3)
lfs      f1, 8(r3)
lfs      f0, lbl_8051D510@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 4(r3)
lfs      f1, 4(r3)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_803032F4
stfs     f0, 4(r3)
lwz      r0, 0(r3)
lfs      f2, 0xc(r3)
cmpwi    r0, 0
beq      lbl_8030322C
cmpwi    r0, 3
bne      lbl_803032F4

lbl_8030322C:
li       r0, 3
lfs      f0, lbl_8051D51C@sda21(r2)
stw      r0, 0(r3)
lfs      f1, 8(r3)
lwz      r4, sys@sda21(r13)
fcmpo    cr0, f1, f0
lfs      f0, 0x54(r4)
ble      lbl_80303258
fdivs    f0, f0, f2
stfs     f0, 8(r3)
b        lbl_803032F4

lbl_80303258:
fdivs    f0, f0, f2
fneg     f0, f0
stfs     f0, 8(r3)
b        lbl_803032F4

lbl_80303268:
lfs      f2, 4(r3)
lfs      f1, 8(r3)
lfs      f0, lbl_8051D51C@sda21(r2)
fadds    f1, f2, f1
stfs     f1, 4(r3)
lfs      f1, 4(r3)
fcmpo    cr0, f1, f0
cror     2, 0, 2
bne      lbl_803032F4
stfs     f0, 4(r3)
li       r0, 0
stw      r0, 0(r3)
b        lbl_803032F4

lbl_8030329C:
lfs      f1, 4(r3)
lfs      f0, 8(r3)
fadds    f0, f1, f0
stfs     f0, 4(r3)
lfs      f1, 4(r3)
lfs      f0, 0x14(r3)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_803032D4
stfs     f0, 4(r3)
lfs      f0, 8(r3)
fneg     f0, f0
stfs     f0, 8(r3)
b        lbl_803032F4

lbl_803032D4:
lfs      f0, 0x10(r3)
fcmpo    cr0, f1, f0
cror     2, 0, 2
bne      lbl_803032F4
stfs     f0, 4(r3)
lfs      f0, 8(r3)
fneg     f0, f0
stfs     f0, 8(r3)

lbl_803032F4:
lfs      f1, lbl_8051D558@sda21(r2)
lfs      f0, 4(r3)
fmuls    f0, f1, f0
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r3, 0xc(r1)
addi     r1, r1, 0x10
blr
	*/
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

/*
 * --INFO--
 * Address:	803034E8
 * Size:	00000C
 */
void JSUTreeIterator<J2DPane>::getObject() const
{
	/*
	lwz      r3, 0(r3)
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803034F4
 * Size:	000008
 */
JSUTree<J2DPane> J2DPane::getPaneTree()
{
	return m_tree;
	/*
	addi     r3, r3, 0xdc
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000364
 */
// void printPaneTree__Q22og6ScreenFP7J2DPane25JSUTreeIterator<J2DPane>(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// float J2DPane::getTranslateY() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
// float J2DPane::getTranslateX() const
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	803034FC
 * Size:	000010
 */
u64 J2DPane::getTagName() const
{
	return m_tag;
	/*
	mr       r4, r3
	lwz      r3, 0x10(r3)
	lwz      r4, 0x14(r4)
	blr
	*/
}

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// AnimeScreen::AnimeScreen(JKRArchive*, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8030350C
 * Size:	000094
 */
P2DScreen::Mgr_tuning::~Mgr_tuning(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80303584
lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
stw      r0, 0(r30)
beq      lbl_80303574
lis      r3, __vt__Q29P2DScreen3Mgr@ha
addic.   r0, r30, 0x118
addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
stw      r0, 0(r30)
beq      lbl_80303568
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x118
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x118(r30)
bl       __dt__5CNodeFv

lbl_80303568:
mr       r3, r30
li       r4, 0
bl       __dt__9J2DScreenFv

lbl_80303574:
extsh.   r0, r31
ble      lbl_80303584
mr       r3, r30
bl       __dl__FPv

lbl_80303584:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
// void AnimeScreen::addAnim(unsigned long long, char*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
// void setP2DScreen(char*, unsigned long, JKRArchive*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void dumpInfoResTIMG(ResTIMG const*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000200
 */
// void drawPaneFrame(J2DGrafContext&, J2DPane*, JUtility::TColor&)
// {
// 	// UNUSED FUNCTION
// }

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	803035A0
 * Size:	000004
 */
void P2DScreen::Node::update(void) { }

/*
 * --INFO--
 * Address:	803035A4
 * Size:	000004
 */
void P2DScreen::Node::draw(Graphics&, J2DGrafContext&) { }

/*
 * --INFO--
 * Address:	803035A8
 * Size:	000004
 */
void P2DScreen::Node::doInit(void) { }

/*
 * --INFO--
 * Address:	803035AC
 * Size:	000060
 */
P2DScreen::Node::~Node(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803035F0
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_803035F0
	mr       r3, r30
	bl       __dl__FPv

lbl_803035F0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
// AnimeScreen::~AnimeScreen(void)
// {
// 	// UNUSED FUNCTION
// }
} // namespace Screen
} // namespace og
