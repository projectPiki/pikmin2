#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049CD78
    lbl_8049CD78:
        .4byte 0x6D656E75
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8049CD84
    lbl_8049CD84:
        .4byte 0x4D656E75
        .4byte 0x4C697374
        .4byte 0x20697320
        .4byte 0x77726F6E
        .4byte 0x672E0A00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EDCC8
    lbl_804EDCC8:
        .4byte lbl_80456ACC
        .4byte lbl_80456954
        .4byte lbl_80456970
        .4byte lbl_80456ACC
        .4byte lbl_8045698C
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_804569BC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_804569F4
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_80456ACC
        .4byte lbl_804569BC
        .4byte 0x00000000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520BE8
    lbl_80520BE8:
        .4byte 0x726F6F74
        .4byte 0x00000000
    .global lbl_80520BF0
    lbl_80520BF0:
        .4byte 0x00000000
    .global lbl_80520BF4
    lbl_80520BF4:
        .float 1.0
    .global lbl_80520BF8
    lbl_80520BF8:
        .4byte 0x40E00000
    .global lbl_80520BFC
    lbl_80520BFC:
        .4byte 0x41000000
*/

/*
 * --INFO--
 * Address:	80456184
 * Size:	00012C
 */
Menu::Menu(JUTGamePad*, JUTFont*, bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r6
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	stw      r28, 0x20(r1)
	mr       r28, r3
	addi     r3, r28, 0x18
	bl       initiate__10JSUPtrListFv
	stw      r29, 0(r28)
	lis      r4, 0xc00
	li       r5, 0xf
	li       r6, 3
	lwz      r3, 0(r28)
	bl       setButtonRepeat__10JUTGamePadFUlUlUl
	stw      r30, 4(r28)
	li       r0, 0
	li       r3, 0x30
	stb      r31, 8(r28)
	stw      r0, 0xc(r28)
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80456204
	li       r4, 0
	li       r5, 0
	addi     r6, r2, lbl_80520BE8@sda21
	bl       __ct__Q24Menu8MenuItemFQ34Menu8MenuItem9cTypeFlagiPc
	mr       r4, r3

lbl_80456204:
	li       r0, 0
	addi     r3, r28, 0x18
	stb      r0, 4(r4)
	addi     r4, r4, 0x20
	bl       append__10JSUPtrListFP10JSUPtrLink
	li       r8, 0
	li       r7, 0xbe
	stw      r8, 0x2c(r28)
	li       r6, 0xdc
	li       r5, 0x104
	li       r4, 1
	stw      r8, 0x30(r28)
	li       r0, 0x100
	lfs      f0, lbl_80520BF0@sda21(r2)
	mr       r3, r28
	stw      r8, 0x28(r28)
	stw      r8, 0x24(r28)
	stw      r8, 0x14(r28)
	stw      r8, 0x10(r28)
	stw      r8, 0x4c(r28)
	stw      r8, 0x50(r28)
	stw      r8, 0x54(r28)
	stw      r7, 0x40(r28)
	stw      r6, 0x44(r28)
	stw      r5, 0x48(r28)
	stb      r4, 0x58(r28)
	stb      r4, 0x59(r28)
	stw      r8, 0x34(r28)
	stfs     f0, 0x38(r28)
	stfs     f0, 0x3c(r28)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 0x5c(r28)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804562B0
 * Size:	0000C0
 */
void Menu::addOption(int, char*, IDelegate1<Menu&>*, bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	mr       r30, r6
	mr       r31, r7
	li       r3, 0x30
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804562F8
	mr       r5, r28
	mr       r6, r29
	li       r4, 1
	bl       __ct__Q24Menu8MenuItemFQ34Menu8MenuItem9cTypeFlagiPc
	mr       r0, r3

lbl_804562F8:
	stw      r0, 0x28(r27)
	addi     r3, r27, 0x18
	lwz      r4, 0x28(r27)
	stb      r31, 4(r4)
	lwz      r4, 0x28(r27)
	addi     r4, r4, 0x20
	bl       append__10JSUPtrListFP10JSUPtrLink
	cmplwi   r30, 0
	beq      lbl_80456330
	lwz      r5, 0x5c(r27)
	mr       r3, r27
	mr       r6, r30
	li       r4, 0x10
	bl "addKeyEvent__4MenuFQ34Menu8KeyEvent9cTypeFlagUlP18IDelegate1<R4Menu>"

lbl_80456330:
	lwz      r0, 0x24(r27)
	cmplwi   r0, 0
	bne      lbl_80456350
	lwz      r3, 0x28(r27)
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80456350
	stw      r3, 0x24(r27)

lbl_80456350:
	lwz      r3, 0x30(r27)
	addi     r0, r3, 1
	stw      r0, 0x30(r27)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80456370
 * Size:	0000C8
 */
void Menu::addKeyEvent(Menu::KeyEvent::cTypeFlag, unsigned long, IDelegate1<Menu&>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x1C
	  bl        -0x4324FC
	  mr.       r4, r3
	  beq-      .loc_0x50
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0x420
	  mr        r4, r3

	.loc_0x50:
	  lwz       r3, 0x28(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  addi      r3, r3, 0x14
	  addi      r4, r4, 0xC
	  bl        -0x42FAF0
	  b         .loc_0xA8

	.loc_0x6C:
	  lwz       r3, 0x18(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r3, 0x0(r3)
	  addi      r4, r4, 0xC
	  addi      r3, r3, 0x14
	  bl        -0x42FB10
	  b         .loc_0xA8

	.loc_0x8C:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3288
	  li        r4, 0xB7
	  subi      r5, r5, 0x327C
	  crclr     6, 0x6
	  bl        -0x42BDD4

	.loc_0xA8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80456438
 * Size:	0003A0
 */
void Menu::doUpdate(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f2, lbl_80520BF8@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r31, r30
	stw      r29, 0x14(r1)
	stw      r30, 0x10(r3)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x3c(r30)
	lfs      f1, 0x54(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x3c(r30)
	lwz      r0, 0x34(r30)
	cmpwi    r0, 2
	beq      lbl_80456514
	bge      lbl_80456490
	cmpwi    r0, 1
	bge      lbl_8045649C
	b        lbl_804567B8

lbl_80456490:
	cmpwi    r0, 4
	bge      lbl_804567B8
	b        lbl_804564D8

lbl_8045649C:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80520BFC@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x38(r30)
	lfs      f0, lbl_80520BF4@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x38(r30)
	lfs      f1, 0x38(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804567B8
	stfs     f0, 0x38(r30)
	li       r0, 2
	stw      r0, 0x34(r30)
	b        lbl_804567B8

lbl_804564D8:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80520BFC@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x38(r30)
	lfs      f0, lbl_80520BF0@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x38(r30)
	lfs      f1, 0x38(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_804567B8
	stfs     f0, 0x38(r30)
	li       r0, 0
	stw      r0, 0x34(r30)
	lwz      r31, 0x14(r30)
	b        lbl_804567B8

lbl_80456514:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80456524
	li       r0, 1
	stb      r0, 0x59(r30)

lbl_80456524:
	lwz      r4, 0(r30)
	lis      r3, 0x04000004@ha
	addi     r0, r3, 0x04000004@l
	lwz      r4, 0x30(r4)
	and.     r0, r4, r0
	beq      lbl_804565CC
	lwz      r3, 0x24(r30)
	mr       r4, r30
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r3, 0x24(r30)
	bl       getNext__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456594
	lwz      r3, 0x18(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)
	b        lbl_80456594

lbl_80456574:
	bl       getNext__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456594
	lwz      r3, 0x18(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)

lbl_80456594:
	lwz      r3, 0x24(r30)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80456574
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80456574
	li       r0, 1
	li       r4, 0x1802
	stb      r0, 0x59(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80456660

lbl_804565CC:
	lis      r3, 0x08000008@ha
	addi     r0, r3, 0x08000008@l
	and.     r0, r4, r0
	beq      lbl_80456660
	lwz      r3, 0x24(r30)
	mr       r4, r30
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r3, 0x24(r30)
	bl       getPrev__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456634
	lwz      r3, 0x1c(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)
	b        lbl_80456634

lbl_80456614:
	bl       getPrev__Q24Menu8MenuItemFv
	stw      r3, 0x24(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_80456634
	lwz      r3, 0x1c(r30)
	lwz      r0, 0(r3)
	stw      r0, 0x24(r30)

lbl_80456634:
	lwz      r3, 0x24(r30)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_80456614
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80456614
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1802
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80456660:
	lbz      r0, 0x58(r30)
	cmplwi   r0, 0
	beq      lbl_8045669C
	lwz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_8045668C
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8045668C:
	li       r3, 0
	li       r0, 1
	stb      r3, 0x58(r30)
	stb      r0, 0x59(r30)

lbl_8045669C:
	lbz      r0, 0x59(r30)
	lis      r3, 0x0000FFFC@ha
	addi     r29, r3, 0x0000FFFC@l
	cmplwi   r0, 0
	beq      lbl_804566E4
	lwz      r3, 0x54(r30)
	ori      r29, r29, 1
	cmplwi   r3, 0
	beq      lbl_804566D4
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_804566D4:
	lfs      f0, lbl_80520BF0@sda21(r2)
	li       r0, 0
	stfs     f0, 0x3c(r30)
	stb      r0, 0x59(r30)

lbl_804566E4:
	lwz      r3, 0x24(r30)
	mr       r4, r30
	mr       r5, r29
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	clrlwi.  r0, r3, 0x18
	bne      lbl_80456710
	lwz      r3, 0x18(r30)
	mr       r4, r30
	mr       r5, r29
	lwz      r3, 0(r3)
	bl       checkEvents__Q24Menu8MenuItemFP4Menui

lbl_80456710:
	lwz      r0, 0x10(r30)
	cmplw    r0, r30
	beq      lbl_804567B8
	lwz      r3, 0x24(r30)
	mr       r4, r30
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8045674C
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8045674C:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_80456790
	lfs      f0, lbl_80520BF0@sda21(r2)
	li       r0, 1
	stfs     f0, 0x38(r3)
	stw      r0, 0x34(r3)
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	bne      lbl_80456788
	lwz      r4, 0x18(r3)
	cmplwi   r4, 0
	bne      lbl_80456788
	lwz      r0, 0(r4)
	stw      r0, 0x24(r3)

lbl_80456788:
	lwz      r31, 0x10(r30)
	b        lbl_804567B0

lbl_80456790:
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_804567A0
	stw      r0, 0x10(r30)

lbl_804567A0:
	lfs      f0, lbl_80520BF4@sda21(r2)
	li       r0, 3
	stfs     f0, 0x38(r30)
	stw      r0, 0x34(r30)

lbl_804567B0:
	lwz      r0, 0x10(r30)
	stw      r0, 0x14(r30)

lbl_804567B8:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804567D8
 * Size:	000068
 */
Menu::KeyEvent::KeyEvent(Menu::KeyEvent::cTypeFlag, unsigned long, IDelegate1<Menu&>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r4, r28
	  addi      r3, r28, 0xC
	  bl        -0x430054
	  stw       r29, 0x0(r28)
	  mr        r3, r28
	  stw       r30, 0x4(r28)
	  stw       r31, 0x8(r28)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80456840
 * Size:	000080
 */
Menu::MenuItem::MenuItem(Menu::MenuItem::cTypeFlag, int, char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r3, r28, 0x14
	bl       initiate__10JSUPtrListFv
	mr       r4, r28
	addi     r3, r28, 0x20
	bl       __ct__10JSUPtrLinkFPv
	li       r3, 1
	li       r0, 0
	stb      r3, 4(r28)
	mr       r3, r28
	stw      r31, 8(r28)
	stw      r30, 0xc(r28)
	stw      r29, 0x10(r28)
	stw      r0, 0(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804568C0
 * Size:	00001C
 */
void Menu::MenuItem::getNext()
{
	/*
	lwz      r3, 0x2c(r3)
	cmplwi   r3, 0
	beq      lbl_804568D4
	lwz      r3, 0(r3)
	blr

lbl_804568D4:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	804568DC
 * Size:	00001C
 */
void Menu::MenuItem::getPrev()
{
	/*
	lwz      r3, 0x28(r3)
	cmplwi   r3, 0
	beq      lbl_804568F0
	lwz      r3, 0(r3)
	blr

lbl_804568F0:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	804568F8
 * Size:	000200
 */
void Menu::MenuItem::checkEvents(Menu*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	li       r30, 0
	lwz      r31, 0x14(r3)
	b        lbl_80456AD8

lbl_80456920:
	lwz      r4, 0(r31)
	li       r29, 0
	lwz      r5, 0(r4)
	and.     r0, r28, r5
	beq      lbl_80456AD4
	cmplwi   r5, 0x20
	bgt      lbl_80456ACC
	lis      r3, lbl_804EDCC8@ha
	slwi     r0, r5, 2
	addi     r3, r3, lbl_804EDCC8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_80456954:
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80456ACC

lbl_80456970:
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80456ACC

lbl_8045698C:
	lwz      r3, 0(r27)
	lwz      r0, 4(r4)
	lwz      r3, 0x18(r3)
	and.     r0, r3, r0
	beq      lbl_80456ACC
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80456ACC

lbl_804569BC:

lbl_804569BC:
	lwz      r3, 0(r27)
	lwz      r0, 4(r4)
	lwz      r3, 0x1c(r3)
	and.     r0, r3, r0
	beq      lbl_80456ACC
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r30, 1
	li       r29, 1
	b        lbl_80456ACC

lbl_804569F4:
	lwz      r3, 0(r27)
	lwz      r0, 4(r4)
	lwz      r3, 0x1c(r3)
	and.     r0, r3, r0
	beq      lbl_80456ACC
	lwz      r3, 0x24(r27)
	lwz      r0, 0x10(r3)
	cmpwi    r0, 2
	bne      lbl_80456AAC
	mr       r3, r26
	mr       r4, r27
	li       r5, 2
	bl       checkEvents__Q24Menu8MenuItemFP4Menui
	lwz      r0, 0xc(r27)
	cmplwi   r0, 0
	bne      lbl_80456A38
	stw      r0, 0x10(r27)

lbl_80456A38:
	lfs      f1, lbl_80520BF4@sda21(r2)
	li       r3, 3
	lfs      f0, lbl_80520BF0@sda21(r2)
	li       r0, 1
	stfs     f1, 0x38(r27)
	stw      r3, 0x34(r27)
	stw      r27, 0x10(r27)
	lwz      r3, 0x24(r27)
	lwz      r3, 0(r3)
	stw      r3, 0x14(r27)
	lwz      r3, 0x14(r27)
	stfs     f0, 0x38(r3)
	stw      r0, 0x34(r3)
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	bne      lbl_80456A8C
	lwz      r4, 0x18(r3)
	cmplwi   r4, 0
	bne      lbl_80456A8C
	lwz      r0, 0(r4)
	stw      r0, 0x24(r3)

lbl_80456A8C:
	li       r0, 1
	li       r30, 0
	stb      r0, 0x58(r27)
	li       r29, 1
	lwz      r3, 0x24(r27)
	lwz      r3, 0(r3)
	stb      r0, 0x58(r3)
	b        lbl_80456ACC

lbl_80456AAC:
	lwz      r3, 8(r4)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r30, 1
	li       r29, 1

lbl_80456ACC:
	clrlwi.  r0, r29, 0x18
	bne      lbl_80456AE0

lbl_80456AD4:
	lwz      r31, 0xc(r31)

lbl_80456AD8:
	cmplwi   r31, 0
	bne      lbl_80456920

lbl_80456AE0:
	mr       r3, r30
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
