#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen10MapCounter
    __vt__Q32og6Screen10MapCounter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen10MapCounterFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q29P2DScreen3MgrFv
        .4byte drawSelf__7J2DPaneFff
        .4byte drawSelf__9J2DScreenFffPA3_A4_f
        .4byte search__9J2DScreenFUx
        .4byte searchUserInfo__9J2DScreenFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__9J2DScreenFPC7ResTIMG
        .4byte isUsed__9J2DScreenFPC7ResFONT
        .4byte clearAnmTransform__9J2DScreenFv
        .4byte rewriteAlpha__7J2DPaneFv
        .4byte setAnimation__9J2DScreenFP10J2DAnmBase
        .4byte setAnimation__9J2DScreenFP15J2DAnmTransform
        .4byte setAnimation__9J2DScreenFP11J2DAnmColor
        .4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
        .4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
        .4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
        .4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
        .4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80307DCC
	 * Size:	0000E4
	 */
	MapCounter::MapCounter(og::Screen::DataMap*)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r4, __vt__Q32og6Screen10MapCounter@ha
	addi     r3, r30, 4
	addi     r4, r4, __vt__Q32og6Screen10MapCounter@l
	addi     r0, r30, 8
	stw      r4, 0(r29)
	addi     r31, r30, 0xc
	addi     r12, r30, 0x10
	addi     r11, r30, 0x14
	stw      r30, 0x148(r29)
	addi     r10, r30, 0x18
	addi     r9, r30, 0x1c
	addi     r8, r30, 0x20
	stw      r3, 0x178(r29)
	addi     r7, r30, 0x24
	addi     r6, r30, 0x28
	addi     r5, r30, 0x2c
	stw      r0, 0x17c(r29)
	addi     r4, r30, 0x30
	li       r0, 0
	mr       r3, r29
	stw      r31, 0x180(r29)
	stw      r12, 0x184(r29)
	stw      r11, 0x188(r29)
	stw      r10, 0x18c(r29)
	stw      r9, 0x190(r29)
	stw      r8, 0x194(r29)
	stw      r7, 0x198(r29)
	stw      r6, 0x19c(r29)
	stw      r5, 0x1a0(r29)
	stw      r4, 0x1a4(r29)
	stw      r0, 0x14c(r29)
	stw      r0, 0x150(r29)
	stw      r0, 0x154(r29)
	stw      r0, 0x158(r29)
	stw      r0, 0x15c(r29)
	stw      r0, 0x160(r29)
	stw      r0, 0x164(r29)
	stw      r0, 0x168(r29)
	stw      r0, 0x16c(r29)
	stw      r0, 0x170(r29)
	stw      r0, 0x174(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80307EB0
	 * Size:	000038
	 */
	void MapCounter::dispRed(bool)
	{
		/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_80307ED0
	lwz      r4, 0x14c(r3)
	li       r0, 1
	stb      r0, 0xb0(r4)
	lwz      r3, 0x160(r3)
	stb      r0, 0xb0(r3)
	blr

lbl_80307ED0:
	lwz      r4, 0x14c(r3)
	li       r0, 0
	stb      r0, 0xb0(r4)
	lwz      r3, 0x160(r3)
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80307EE8
	 * Size:	000038
	 */
	void MapCounter::dispYellow(bool)
	{
		/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_80307F08
	lwz      r4, 0x150(r3)
	li       r0, 1
	stb      r0, 0xb0(r4)
	lwz      r3, 0x164(r3)
	stb      r0, 0xb0(r3)
	blr

lbl_80307F08:
	lwz      r4, 0x150(r3)
	li       r0, 0
	stb      r0, 0xb0(r4)
	lwz      r3, 0x164(r3)
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80307F20
	 * Size:	000038
	 */
	void MapCounter::dispBlue(bool)
	{
		/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_80307F40
	lwz      r4, 0x154(r3)
	li       r0, 1
	stb      r0, 0xb0(r4)
	lwz      r3, 0x168(r3)
	stb      r0, 0xb0(r3)
	blr

lbl_80307F40:
	lwz      r4, 0x154(r3)
	li       r0, 0
	stb      r0, 0xb0(r4)
	lwz      r3, 0x168(r3)
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80307F58
	 * Size:	000038
	 */
	void MapCounter::dispWhite(bool)
	{
		/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_80307F78
	lwz      r4, 0x158(r3)
	li       r0, 1
	stb      r0, 0xb0(r4)
	lwz      r3, 0x16c(r3)
	stb      r0, 0xb0(r3)
	blr

lbl_80307F78:
	lwz      r4, 0x158(r3)
	li       r0, 0
	stb      r0, 0xb0(r4)
	lwz      r3, 0x16c(r3)
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80307F90
	 * Size:	000038
	 */
	void MapCounter::dispBlack(bool)
	{
		/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_80307FB0
	lwz      r4, 0x15c(r3)
	li       r0, 1
	stb      r0, 0xb0(r4)
	lwz      r3, 0x170(r3)
	stb      r0, 0xb0(r3)
	blr

lbl_80307FB0:
	lwz      r4, 0x15c(r3)
	li       r0, 0
	stb      r0, 0xb0(r4)
	lwz      r3, 0x170(r3)
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80307FC8
	 * Size:	000028
	 */
	void MapCounter::dispFree(bool)
	{
		/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_80307FE0
	lwz      r3, 0x174(r3)
	li       r0, 1
	stb      r0, 0xb0(r3)
	blr

lbl_80307FE0:
	lwz      r3, 0x174(r3)
	li       r0, 0
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000E0
	 */
	void setCallBack_CounterMap(P2DScreen::Mgr*, unsigned long long,
	                            unsigned long long, unsigned long long,
	                            unsigned long*, unsigned short, unsigned short,
	                            bool, JKRArchive*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80307FF0
	 * Size:	000724
	 */
	void MapCounter::setCallBack(JKRArchive*)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r29, 0x178(r3)
	li       r3, 0xa8
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80308044
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 6
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_80308044:
	stw      r29, 8(r1)
	lis      r5, 0x6F725F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x6F725F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x6F725F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x6F725F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x14c(r31)
	li       r3, 0xa8
	lwz      r29, 0x17c(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803080E4
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 6
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_803080E4:
	stw      r29, 8(r1)
	lis      r5, 0x6F795F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x6F795F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x6F795F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x6F795F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x150(r31)
	li       r3, 0xa8
	lwz      r29, 0x180(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80308184
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 6
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_80308184:
	stw      r29, 8(r1)
	lis      r5, 0x6F625F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x6F625F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x6F625F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x6F625F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x154(r31)
	li       r3, 0xa8
	lwz      r29, 0x184(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80308224
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 6
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_80308224:
	stw      r29, 8(r1)
	lis      r5, 0x75775F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x75775F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x75775F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x75775F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x158(r31)
	li       r3, 0xa8
	lwz      r29, 0x188(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803082C4
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 6
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_803082C4:
	stw      r29, 8(r1)
	lis      r5, 0x75626B72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x75626B72@l
	addi     r8, r5, 0x6b63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x6b6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x75626B72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x75626B72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x15c(r31)
	li       r3, 0xa8
	lwz      r29, 0x18c(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80308364
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 3
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_80308364:
	stw      r29, 8(r1)
	lis      r5, 0x74725F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x74725F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x74725F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x74725F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x160(r31)
	li       r3, 0xa8
	lwz      r29, 0x190(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80308404
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 3
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_80308404:
	stw      r29, 8(r1)
	lis      r5, 0x74795F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x74795F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x74795F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x74795F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x164(r31)
	li       r3, 0xa8
	lwz      r29, 0x194(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803084A4
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 3
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_803084A4:
	stw      r29, 8(r1)
	lis      r5, 0x74625F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x74625F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x74625F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x74625F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x168(r31)
	li       r3, 0xa8
	lwz      r29, 0x198(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80308544
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 3
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_80308544:
	stw      r29, 8(r1)
	lis      r5, 0x74775F72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x74775F72@l
	addi     r8, r5, 0x5f63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x5f6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x74775F72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x74775F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x16c(r31)
	li       r3, 0xa8
	lwz      r29, 0x19c(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803085E4
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 3
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_803085E4:
	stw      r29, 8(r1)
	lis      r5, 0x74626B72@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x74626B72@l
	addi     r8, r5, 0x6b63
	lwz      r12, 0(r28)
	addi     r10, r5, 0x6b6c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x74626B72@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x74626B72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x170(r31)
	li       r3, 0xa8
	lwz      r29, 0x1a0(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80308684
	lis      r4, SujiTexMap__Q22og6Screen@ha
	mr       r7, r30
	addi     r4, r4, SujiTexMap__Q22og6Screen@l
	li       r5, 3
	li       r6, 3
	bl       __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
	mr       r28, r3

lbl_80308684:
	stw      r29, 8(r1)
	lis      r5, 0x66726572@ha
	li       r0, 1
	mr       r3, r28
	stw      r0, 0xc(r1)
	mr       r4, r31
	addi     r6, r5, 0x66726572@l
	addi     r8, r5, 0x6563
	lwz      r12, 0(r28)
	addi     r10, r5, 0x656c
	li       r5, 0
	li       r7, 0
	lwz      r12, 0x1c(r12)
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r3, r28
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x66726572@ha
	mr       r3, r31
	mr       r7, r28
	li       r5, 0
	addi     r6, r4, 0x66726572@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r28
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	stw      r3, 0x174(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80308714
	 * Size:	0000A4
	 */
	MapCounter::~MapCounter(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8030879C
	lis      r3, __vt__Q32og6Screen10MapCounter@ha
	addi     r0, r3, __vt__Q32og6Screen10MapCounter@l
	stw      r0, 0(r30)
	beq      lbl_8030878C
	lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
	addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
	stw      r0, 0(r30)
	beq      lbl_8030878C
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addic.   r0, r30, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r30)
	beq      lbl_80308780
	lis      r4, __vt__Q29P2DScreen4Node@ha
	addi     r3, r30, 0x118
	addi     r0, r4, __vt__Q29P2DScreen4Node@l
	li       r4, 0
	stw      r0, 0x118(r30)
	bl       __dt__5CNodeFv

lbl_80308780:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9J2DScreenFv

lbl_8030878C:
	extsh.   r0, r31
	ble      lbl_8030879C
	mr       r3, r30
	bl       __dl__FPv

lbl_8030879C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}
} // namespace Screen
} // namespace og
