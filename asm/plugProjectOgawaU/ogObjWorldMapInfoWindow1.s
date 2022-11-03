.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048F648:
	.asciz "SMenuPauseVS screen"
.balign 4
lbl_8048F65C:
	.asciz "info_window.blo"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og9newScreen22ObjWorldMapInfoWindow1
__vt__Q32og9newScreen22ObjWorldMapInfoWindow1:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q32og9newScreen22ObjWorldMapInfoWindow1FPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32og9newScreen22ObjWorldMapInfoWindow1FP10JKRArchive
	.4byte doUpdateFadein__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	.4byte doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte in_L__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte in_R__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte wait__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte out_L__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	.4byte out_R__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte loop__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
	.4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
	.4byte commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	.4byte out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	.4byte out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	.4byte out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
	.4byte getResult__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
.global __vt__Q32og6Screen26DispMemberWorldMapInfoWin1
__vt__Q32og6Screen26DispMemberWorldMapInfoWin1:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
	.4byte getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
	.4byte getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051DF18:
	.float 0.5
lbl_8051DF1C:
	.float 0.6
lbl_8051DF20:
	.float 0.7

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen22ObjWorldMapInfoWindow1FPCc
__ct__Q32og9newScreen22ObjWorldMapInfoWindow1FPCc:
/* 8032BC48 00328B88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032BC4C 00328B8C  7C 08 02 A6 */	mflr r0
/* 8032BC50 00328B90  3C A0 80 49 */	lis r5, lbl_8048F648@ha
/* 8032BC54 00328B94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032BC58 00328B98  38 05 F6 48 */	addi r0, r5, lbl_8048F648@l
/* 8032BC5C 00328B9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032BC60 00328BA0  7C 9F 23 78 */	mr r31, r4
/* 8032BC64 00328BA4  7C 04 03 78 */	mr r4, r0
/* 8032BC68 00328BA8  93 C1 00 08 */	stw r30, 8(r1)
/* 8032BC6C 00328BAC  7C 7E 1B 78 */	mr r30, r3
/* 8032BC70 00328BB0  4B FF D5 21 */	bl __ct__Q32og9newScreen15ObjSMenuPauseVSFPCc
/* 8032BC74 00328BB4  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@ha
/* 8032BC78 00328BB8  38 00 00 00 */	li r0, 0
/* 8032BC7C 00328BBC  38 83 9E 80 */	addi r4, r3, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@l
/* 8032BC80 00328BC0  7F C3 F3 78 */	mr r3, r30
/* 8032BC84 00328BC4  90 9E 00 00 */	stw r4, 0(r30)
/* 8032BC88 00328BC8  38 84 00 10 */	addi r4, r4, 0x10
/* 8032BC8C 00328BCC  90 9E 00 18 */	stw r4, 0x18(r30)
/* 8032BC90 00328BD0  90 1E 00 CC */	stw r0, 0xcc(r30)
/* 8032BC94 00328BD4  93 FE 00 14 */	stw r31, 0x14(r30)
/* 8032BC98 00328BD8  90 1E 00 AC */	stw r0, 0xac(r30)
/* 8032BC9C 00328BDC  90 1E 00 B0 */	stw r0, 0xb0(r30)
/* 8032BCA0 00328BE0  90 1E 00 B4 */	stw r0, 0xb4(r30)
/* 8032BCA4 00328BE4  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 8032BCA8 00328BE8  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 8032BCAC 00328BEC  90 1E 00 BC */	stw r0, 0xbc(r30)
/* 8032BCB0 00328BF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032BCB4 00328BF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032BCB8 00328BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032BCBC 00328BFC  7C 08 03 A6 */	mtlr r0
/* 8032BCC0 00328C00  38 21 00 10 */	addi r1, r1, 0x10
/* 8032BCC4 00328C04  4E 80 00 20 */	blr 

.global doCreate__Q32og9newScreen22ObjWorldMapInfoWindow1FP10JKRArchive
doCreate__Q32og9newScreen22ObjWorldMapInfoWindow1FP10JKRArchive:
/* 8032BCC8 00328C08  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8032BCCC 00328C0C  7C 08 02 A6 */	mflr r0
/* 8032BCD0 00328C10  90 01 00 44 */	stw r0, 0x44(r1)
/* 8032BCD4 00328C14  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8032BCD8 00328C18  7C 9F 23 78 */	mr r31, r4
/* 8032BCDC 00328C1C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8032BCE0 00328C20  7C 7E 1B 78 */	mr r30, r3
/* 8032BCE4 00328C24  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8032BCE8 00328C28  48 12 82 C1 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8032BCEC 00328C2C  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8032BCF0 00328C30  3C C0 57 69 */	lis r6, 0x57696E31@ha
/* 8032BCF4 00328C34  3C A0 57 4D */	lis r5, 0x574D6170@ha
/* 8032BCF8 00328C38  7C 7D 1B 78 */	mr r29, r3
/* 8032BCFC 00328C3C  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8032BD00 00328C40  38 C6 6E 31 */	addi r6, r6, 0x57696E31@l
/* 8032BD04 00328C44  38 A5 61 70 */	addi r5, r5, 0x574D6170@l
/* 8032BD08 00328C48  4B FE 36 15 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8032BD0C 00328C4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8032BD10 00328C50  41 82 00 08 */	beq .L_8032BD18
/* 8032BD14 00328C54  93 BE 00 CC */	stw r29, 0xcc(r30)
.L_8032BD18:
/* 8032BD18 00328C58  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 8032BD1C 00328C5C  28 00 00 00 */	cmplwi r0, 0
/* 8032BD20 00328C60  40 82 00 44 */	bne .L_8032BD64
/* 8032BD24 00328C64  38 60 00 10 */	li r3, 0x10
/* 8032BD28 00328C68  4B CF 81 7D */	bl __nw__FUl
/* 8032BD2C 00328C6C  28 03 00 00 */	cmplwi r3, 0
/* 8032BD30 00328C70  41 82 00 30 */	beq .L_8032BD60
/* 8032BD34 00328C74  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 8032BD38 00328C78  3C 80 80 4E */	lis r4, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@ha
/* 8032BD3C 00328C7C  38 05 11 48 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 8032BD40 00328C80  38 A0 00 00 */	li r5, 0
/* 8032BD44 00328C84  90 03 00 00 */	stw r0, 0(r3)
/* 8032BD48 00328C88  38 84 9F 38 */	addi r4, r4, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@l
/* 8032BD4C 00328C8C  38 00 00 B4 */	li r0, 0xb4
/* 8032BD50 00328C90  90 A3 00 04 */	stw r5, 4(r3)
/* 8032BD54 00328C94  90 83 00 00 */	stw r4, 0(r3)
/* 8032BD58 00328C98  90 A3 00 08 */	stw r5, 8(r3)
/* 8032BD5C 00328C9C  98 03 00 0C */	stb r0, 0xc(r3)
.L_8032BD60:
/* 8032BD60 00328CA0  90 7E 00 CC */	stw r3, 0xcc(r30)
.L_8032BD64:
/* 8032BD64 00328CA4  38 60 01 48 */	li r3, 0x148
/* 8032BD68 00328CA8  4B CF 81 3D */	bl __nw__FUl
/* 8032BD6C 00328CAC  7C 60 1B 79 */	or. r0, r3, r3
/* 8032BD70 00328CB0  41 82 00 0C */	beq .L_8032BD7C
/* 8032BD74 00328CB4  48 10 90 39 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8032BD78 00328CB8  7C 60 1B 78 */	mr r0, r3
.L_8032BD7C:
/* 8032BD7C 00328CBC  90 1E 00 B0 */	stw r0, 0xb0(r30)
/* 8032BD80 00328CC0  3C 60 80 49 */	lis r3, lbl_8048F65C@ha
/* 8032BD84 00328CC4  38 83 F6 5C */	addi r4, r3, lbl_8048F65C@l
/* 8032BD88 00328CC8  7F E6 FB 78 */	mr r6, r31
/* 8032BD8C 00328CCC  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BD90 00328CD0  3C A0 01 10 */	lis r5, 0x110
/* 8032BD94 00328CD4  4B D1 38 91 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8032BD98 00328CD8  3C A0 6E 75 */	lis r5, 0x6E753031@ha
/* 8032BD9C 00328CDC  3C 80 00 4E */	lis r4, 0x004E6D65@ha
/* 8032BDA0 00328CE0  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BDA4 00328CE4  38 C5 30 31 */	addi r6, r5, 0x6E753031@l
/* 8032BDA8 00328CE8  38 A4 6D 65 */	addi r5, r4, 0x004E6D65@l
/* 8032BDAC 00328CEC  4B FD 71 01 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 8032BDB0 00328CF0  38 00 00 00 */	li r0, 0
/* 8032BDB4 00328CF4  3C A0 6E 75 */	lis r5, 0x6E753032@ha
/* 8032BDB8 00328CF8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8032BDBC 00328CFC  3C 80 00 4E */	lis r4, 0x004E6D65@ha
/* 8032BDC0 00328D00  38 C5 30 32 */	addi r6, r5, 0x6E753032@l
/* 8032BDC4 00328D04  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BDC8 00328D08  38 A4 6D 65 */	addi r5, r4, 0x004E6D65@l
/* 8032BDCC 00328D0C  4B FD 70 E1 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 8032BDD0 00328D10  38 00 00 00 */	li r0, 0
/* 8032BDD4 00328D14  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8032BDD8 00328D18  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BDDC 00328D1C  4B FF E6 65 */	bl setFurikoScreen__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8032BDE0 00328D20  38 60 00 78 */	li r3, 0x78
/* 8032BDE4 00328D24  4B CF 80 C1 */	bl __nw__FUl
/* 8032BDE8 00328D28  7C 60 1B 79 */	or. r0, r3, r3
/* 8032BDEC 00328D2C  41 82 00 0C */	beq .L_8032BDF8
/* 8032BDF0 00328D30  4B FD E0 39 */	bl __ct__Q32og6Screen7MenuMgrFv
/* 8032BDF4 00328D34  7C 60 1B 78 */	mr r0, r3
.L_8032BDF8:
/* 8032BDF8 00328D38  3D 40 79 5F */	lis r10, 0x795F6972@ha
/* 8032BDFC 00328D3C  90 1E 00 B4 */	stw r0, 0xb4(r30)
/* 8032BE00 00328D40  38 0A 69 72 */	addi r0, r10, 0x795F6972@l
/* 8032BE04 00328D44  3C 80 6D 30 */	lis r4, 0x6D303079@ha
/* 8032BE08 00328D48  3C 60 50 6D */	lis r3, 0x506D3030@ha
/* 8032BE0C 00328D4C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8032BE10 00328D50  39 23 30 30 */	addi r9, r3, 0x506D3030@l
/* 8032BE14 00328D54  38 C4 30 79 */	addi r6, r4, 0x6D303079@l
/* 8032BE18 00328D58  91 21 00 08 */	stw r9, 8(r1)
/* 8032BE1C 00328D5C  38 E4 30 6E */	addi r7, r4, 0x306e
/* 8032BE20 00328D60  3C 60 6E 5F */	lis r3, 0x6E5F696C@ha
/* 8032BE24 00328D64  38 A0 00 4E */	li r5, 0x4e
/* 8032BE28 00328D68  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8032BE2C 00328D6C  39 60 00 54 */	li r11, 0x54
/* 8032BE30 00328D70  38 83 69 6C */	addi r4, r3, 0x6E5F696C@l
/* 8032BE34 00328D74  38 03 69 72 */	addi r0, r3, 0x6972
/* 8032BE38 00328D78  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8032BE3C 00328D7C  7C C8 33 78 */	mr r8, r6
/* 8032BE40 00328D80  39 4A 69 6C */	addi r10, r10, 0x696c
/* 8032BE44 00328D84  38 A0 00 4E */	li r5, 0x4e
/* 8032BE48 00328D88  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 8032BE4C 00328D8C  38 E0 00 54 */	li r7, 0x54
/* 8032BE50 00328D90  91 61 00 18 */	stw r11, 0x18(r1)
/* 8032BE54 00328D94  90 81 00 24 */	stw r4, 0x24(r1)
/* 8032BE58 00328D98  91 21 00 20 */	stw r9, 0x20(r1)
/* 8032BE5C 00328D9C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8032BE60 00328DA0  91 21 00 28 */	stw r9, 0x28(r1)
/* 8032BE64 00328DA4  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 8032BE68 00328DA8  80 9E 00 B0 */	lwz r4, 0xb0(r30)
/* 8032BE6C 00328DAC  4B FD E5 B5 */	bl init2takuTitle__Q32og6Screen7MenuMgrFP9J2DScreenUxUxUxUxUxUxUxUx
/* 8032BE70 00328DB0  38 00 00 00 */	li r0, 0
/* 8032BE74 00328DB4  3C 60 6D 30 */	lis r3, 0x6D303071@ha
/* 8032BE78 00328DB8  90 1E 00 AC */	stw r0, 0xac(r30)
/* 8032BE7C 00328DBC  38 C3 30 71 */	addi r6, r3, 0x6D303071@l
/* 8032BE80 00328DC0  38 A0 00 54 */	li r5, 0x54
/* 8032BE84 00328DC4  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BE88 00328DC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8032BE8C 00328DCC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8032BE90 00328DD0  7D 89 03 A6 */	mtctr r12
/* 8032BE94 00328DD4  4E 80 04 21 */	bctrl 
/* 8032BE98 00328DD8  3C 80 32 5F */	lis r4, 0x325F3030@ha
/* 8032BE9C 00328DDC  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8032BEA0 00328DE0  38 04 30 30 */	addi r0, r4, 0x325F3030@l
/* 8032BEA4 00328DE4  3C 80 6D 30 */	lis r4, 0x6D303079@ha
/* 8032BEA8 00328DE8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8032BEAC 00328DEC  38 05 37 31 */	addi r0, r5, 0x00343731@l
/* 8032BEB0 00328DF0  38 C4 30 79 */	addi r6, r4, 0x6D303079@l
/* 8032BEB4 00328DF4  38 A0 00 54 */	li r5, 0x54
/* 8032BEB8 00328DF8  90 03 00 18 */	stw r0, 0x18(r3)
/* 8032BEBC 00328DFC  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BEC0 00328E00  81 83 00 00 */	lwz r12, 0(r3)
/* 8032BEC4 00328E04  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8032BEC8 00328E08  7D 89 03 A6 */	mtctr r12
/* 8032BECC 00328E0C  4E 80 04 21 */	bctrl 
/* 8032BED0 00328E10  3C 80 33 5F */	lis r4, 0x335F3030@ha
/* 8032BED4 00328E14  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 8032BED8 00328E18  38 04 30 30 */	addi r0, r4, 0x335F3030@l
/* 8032BEDC 00328E1C  3C 80 6D 30 */	lis r4, 0x6D30306E@ha
/* 8032BEE0 00328E20  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8032BEE4 00328E24  38 05 37 31 */	addi r0, r5, 0x00343731@l
/* 8032BEE8 00328E28  38 C4 30 6E */	addi r6, r4, 0x6D30306E@l
/* 8032BEEC 00328E2C  38 A0 00 54 */	li r5, 0x54
/* 8032BEF0 00328E30  90 03 00 18 */	stw r0, 0x18(r3)
/* 8032BEF4 00328E34  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BEF8 00328E38  81 83 00 00 */	lwz r12, 0(r3)
/* 8032BEFC 00328E3C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8032BF00 00328E40  7D 89 03 A6 */	mtctr r12
/* 8032BF04 00328E44  4E 80 04 21 */	bctrl 
/* 8032BF08 00328E48  3C A0 34 5F */	lis r5, 0x345F3030@ha
/* 8032BF0C 00328E4C  3C 80 00 34 */	lis r4, 0x00343731@ha
/* 8032BF10 00328E50  38 05 30 30 */	addi r0, r5, 0x345F3030@l
/* 8032BF14 00328E54  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8032BF18 00328E58  38 04 37 31 */	addi r0, r4, 0x00343731@l
/* 8032BF1C 00328E5C  90 03 00 18 */	stw r0, 0x18(r3)
/* 8032BF20 00328E60  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8032BF24 00328E64  4B FD DE DD */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8032BF28 00328E68  3C C0 6D 30 */	lis r6, 0x6D303071@ha
/* 8032BF2C 00328E6C  80 9E 00 B0 */	lwz r4, 0xb0(r30)
/* 8032BF30 00328E70  7F E3 FB 78 */	mr r3, r31
/* 8032BF34 00328E74  38 A0 00 54 */	li r5, 0x54
/* 8032BF38 00328E78  38 C6 30 71 */	addi r6, r6, 0x6D303071@l
/* 8032BF3C 00328E7C  4B FD CA ED */	bl setMenuTitleScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8032BF40 00328E80  90 7E 00 D0 */	stw r3, 0xd0(r30)
/* 8032BF44 00328E84  3C C0 6D 30 */	lis r6, 0x6D303079@ha
/* 8032BF48 00328E88  7F E3 FB 78 */	mr r3, r31
/* 8032BF4C 00328E8C  38 A0 00 54 */	li r5, 0x54
/* 8032BF50 00328E90  80 9E 00 B0 */	lwz r4, 0xb0(r30)
/* 8032BF54 00328E94  38 C6 30 79 */	addi r6, r6, 0x6D303079@l
/* 8032BF58 00328E98  4B FD C9 95 */	bl setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8032BF5C 00328E9C  90 7E 00 B8 */	stw r3, 0xb8(r30)
/* 8032BF60 00328EA0  3C C0 6D 30 */	lis r6, 0x6D30306E@ha
/* 8032BF64 00328EA4  7F E3 FB 78 */	mr r3, r31
/* 8032BF68 00328EA8  38 A0 00 54 */	li r5, 0x54
/* 8032BF6C 00328EAC  80 9E 00 B0 */	lwz r4, 0xb0(r30)
/* 8032BF70 00328EB0  38 C6 30 6E */	addi r6, r6, 0x6D30306E@l
/* 8032BF74 00328EB4  4B FD C9 79 */	bl setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 8032BF78 00328EB8  90 7E 00 BC */	stw r3, 0xbc(r30)
/* 8032BF7C 00328EBC  C0 22 FB B8 */	lfs f1, lbl_8051DF18@sda21(r2)
/* 8032BF80 00328EC0  80 7E 00 D0 */	lwz r3, 0xd0(r30)
/* 8032BF84 00328EC4  4B FD D4 D1 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 8032BF88 00328EC8  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 8032BF8C 00328ECC  C0 22 FB BC */	lfs f1, lbl_8051DF1C@sda21(r2)
/* 8032BF90 00328ED0  4B FD D4 C5 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 8032BF94 00328ED4  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8032BF98 00328ED8  C0 22 FB C0 */	lfs f1, lbl_8051DF20@sda21(r2)
/* 8032BF9C 00328EDC  4B FD D4 B9 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 8032BFA0 00328EE0  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8032BFA4 00328EE4  7F C3 F3 78 */	mr r3, r30
/* 8032BFA8 00328EE8  4B FF D6 61 */	bl blink_Menu__Q32og9newScreen15ObjSMenuPauseVSFi
/* 8032BFAC 00328EEC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8032BFB0 00328EF0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8032BFB4 00328EF4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8032BFB8 00328EF8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8032BFBC 00328EFC  7C 08 03 A6 */	mtlr r0
/* 8032BFC0 00328F00  38 21 00 40 */	addi r1, r1, 0x40
/* 8032BFC4 00328F04  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen22ObjWorldMapInfoWindow1FPCQ26Screen13StartSceneArg
doStart__Q32og9newScreen22ObjWorldMapInfoWindow1FPCQ26Screen13StartSceneArg:
/* 8032BFC8 00328F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032BFCC 00328F0C  7C 08 02 A6 */	mflr r0
/* 8032BFD0 00328F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032BFD4 00328F14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032BFD8 00328F18  7C 7F 1B 78 */	mr r31, r3
/* 8032BFDC 00328F1C  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 8032BFE0 00328F20  4B FE 0D 9D */	bl setOpenWMapMenu__Q22og5SoundFv
/* 8032BFE4 00328F24  3C A0 6B 6F */	lis r5, 0x6B6F3030@ha
/* 8032BFE8 00328F28  3C 80 66 75 */	lis r4, 0x66757269@ha
/* 8032BFEC 00328F2C  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8032BFF0 00328F30  38 C5 30 30 */	addi r6, r5, 0x6B6F3030@l
/* 8032BFF4 00328F34  38 A4 72 69 */	addi r5, r4, 0x66757269@l
/* 8032BFF8 00328F38  4B FF E6 B9 */	bl getFurikoPtr__Q22og6ScreenFPQ29P2DScreen3MgrUx
/* 8032BFFC 00328F3C  4B FF DF 1D */	bl stop__Q32og6Screen15CallBack_FurikoFv
/* 8032C000 00328F40  7F E3 FB 78 */	mr r3, r31
/* 8032C004 00328F44  38 80 00 00 */	li r4, 0
/* 8032C008 00328F48  4B FE A9 B9 */	bl start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg
/* 8032C00C 00328F4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C010 00328F50  38 60 00 01 */	li r3, 1
/* 8032C014 00328F54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C018 00328F58  7C 08 03 A6 */	mtlr r0
/* 8032C01C 00328F5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C020 00328F60  4E 80 00 20 */	blr 

.global commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C024 00328F64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C028 00328F68  7C 08 02 A6 */	mflr r0
/* 8032C02C 00328F6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C030 00328F70  4B FF D6 4D */	bl commonUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
/* 8032C034 00328F74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C038 00328F78  7C 08 03 A6 */	mtlr r0
/* 8032C03C 00328F7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C040 00328F80  4E 80 00 20 */	blr 

.global out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C044 00328F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C048 00328F88  7C 08 02 A6 */	mflr r0
/* 8032C04C 00328F8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C050 00328F90  38 00 00 01 */	li r0, 1
/* 8032C054 00328F94  80 83 00 CC */	lwz r4, 0xcc(r3)
/* 8032C058 00328F98  90 04 00 08 */	stw r0, 8(r4)
/* 8032C05C 00328F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8032C060 00328FA0  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8032C064 00328FA4  7D 89 03 A6 */	mtctr r12
/* 8032C068 00328FA8  4E 80 04 21 */	bctrl 
/* 8032C06C 00328FAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C070 00328FB0  7C 08 03 A6 */	mtlr r0
/* 8032C074 00328FB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C078 00328FB8  4E 80 00 20 */	blr 

.global out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C07C 00328FBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C080 00328FC0  7C 08 02 A6 */	mflr r0
/* 8032C084 00328FC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C088 00328FC8  38 00 00 00 */	li r0, 0
/* 8032C08C 00328FCC  80 83 00 CC */	lwz r4, 0xcc(r3)
/* 8032C090 00328FD0  90 04 00 08 */	stw r0, 8(r4)
/* 8032C094 00328FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8032C098 00328FD8  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8032C09C 00328FDC  7D 89 03 A6 */	mtctr r12
/* 8032C0A0 00328FE0  4E 80 04 21 */	bctrl 
/* 8032C0A4 00328FE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C0A8 00328FE8  7C 08 03 A6 */	mtlr r0
/* 8032C0AC 00328FEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C0B0 00328FF0  4E 80 00 20 */	blr 

.global out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C0B4 00328FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C0B8 00328FF8  7C 08 02 A6 */	mflr r0
/* 8032C0BC 00328FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C0C0 00329000  38 00 00 01 */	li r0, 1
/* 8032C0C4 00329004  80 83 00 CC */	lwz r4, 0xcc(r3)
/* 8032C0C8 00329008  90 04 00 08 */	stw r0, 8(r4)
/* 8032C0CC 0032900C  81 83 00 00 */	lwz r12, 0(r3)
/* 8032C0D0 00329010  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8032C0D4 00329014  7D 89 03 A6 */	mtctr r12
/* 8032C0D8 00329018  4E 80 04 21 */	bctrl 
/* 8032C0DC 0032901C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C0E0 00329020  7C 08 03 A6 */	mtlr r0
/* 8032C0E4 00329024  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C0E8 00329028  4E 80 00 20 */	blr 

.global out_L__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
out_L__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C0EC 0032902C  38 00 00 02 */	li r0, 2
/* 8032C0F0 00329030  90 03 00 38 */	stw r0, 0x38(r3)
/* 8032C0F4 00329034  4E 80 00 20 */	blr 

.global doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C0F8 00329038  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C0FC 0032903C  7C 08 02 A6 */	mflr r0
/* 8032C100 00329040  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C104 00329044  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032C108 00329048  7C 7F 1B 78 */	mr r31, r3
/* 8032C10C 0032904C  81 83 00 00 */	lwz r12, 0(r3)
/* 8032C110 00329050  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8032C114 00329054  7D 89 03 A6 */	mtctr r12
/* 8032C118 00329058  4E 80 04 21 */	bctrl 
/* 8032C11C 0032905C  7C 64 1B 78 */	mr r4, r3
/* 8032C120 00329060  7F E3 FB 78 */	mr r3, r31
/* 8032C124 00329064  4B FE A1 D9 */	bl setFinishState__Q32og9newScreen12ObjSMenuBaseFl
/* 8032C128 00329068  7F E3 FB 78 */	mr r3, r31
/* 8032C12C 0032906C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8032C130 00329070  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8032C134 00329074  7D 89 03 A6 */	mtctr r12
/* 8032C138 00329078  4E 80 04 21 */	bctrl 
/* 8032C13C 0032907C  38 80 00 00 */	li r4, 0
/* 8032C140 00329080  38 A0 00 00 */	li r5, 0
/* 8032C144 00329084  38 C0 00 00 */	li r6, 0
/* 8032C148 00329088  38 E0 00 00 */	li r7, 0
/* 8032C14C 0032908C  48 12 61 39 */	bl setColorBG__Q26Screen9SceneBaseFUcUcUcUc
/* 8032C150 00329090  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C154 00329094  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C158 00329098  7C 08 03 A6 */	mtlr r0
/* 8032C15C 0032909C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C160 003290A0  4E 80 00 20 */	blr 

.global getResult__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
getResult__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C164 003290A4  80 63 00 CC */	lwz r3, 0xcc(r3)
/* 8032C168 003290A8  80 63 00 08 */	lwz r3, 8(r3)
/* 8032C16C 003290AC  4E 80 00 20 */	blr 

.global __dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
__dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv:
/* 8032C170 003290B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C174 003290B4  7C 08 02 A6 */	mflr r0
/* 8032C178 003290B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C17C 003290BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032C180 003290C0  7C 9F 23 78 */	mr r31, r4
/* 8032C184 003290C4  93 C1 00 08 */	stw r30, 8(r1)
/* 8032C188 003290C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8032C18C 003290CC  41 82 00 30 */	beq .L_8032C1BC
/* 8032C190 003290D0  3C A0 80 4E */	lis r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@ha
/* 8032C194 003290D4  38 80 00 00 */	li r4, 0
/* 8032C198 003290D8  38 A5 9E 80 */	addi r5, r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow1@l
/* 8032C19C 003290DC  90 BE 00 00 */	stw r5, 0(r30)
/* 8032C1A0 003290E0  38 05 00 10 */	addi r0, r5, 0x10
/* 8032C1A4 003290E4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8032C1A8 003290E8  4B FF D0 69 */	bl __dt__Q32og9newScreen15ObjSMenuPauseVSFv
/* 8032C1AC 003290EC  7F E0 07 35 */	extsh. r0, r31
/* 8032C1B0 003290F0  40 81 00 0C */	ble .L_8032C1BC
/* 8032C1B4 003290F4  7F C3 F3 78 */	mr r3, r30
/* 8032C1B8 003290F8  4B CF 7E FD */	bl __dl__FPv
.L_8032C1BC:
/* 8032C1BC 003290FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C1C0 00329100  7F C3 F3 78 */	mr r3, r30
/* 8032C1C4 00329104  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C1C8 00329108  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032C1CC 0032910C  7C 08 03 A6 */	mtlr r0
/* 8032C1D0 00329110  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C1D4 00329114  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
getSize__Q32og6Screen26DispMemberWorldMapInfoWin1Fv:
/* 8032C1D8 00329118  38 60 00 10 */	li r3, 0x10
/* 8032C1DC 0032911C  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv:
/* 8032C1E0 00329120  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8032C1E4 00329124  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8032C1E8 00329128  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv
getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin1Fv:
/* 8032C1EC 0032912C  3C 80 57 69 */	lis r4, 0x57696E31@ha
/* 8032C1F0 00329130  3C 60 57 4D */	lis r3, 0x574D6170@ha
/* 8032C1F4 00329134  38 84 6E 31 */	addi r4, r4, 0x57696E31@l
/* 8032C1F8 00329138  38 63 61 70 */	addi r3, r3, 0x574D6170@l
/* 8032C1FC 0032913C  4E 80 00 20 */	blr 

"@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv":
/* 8032C200 00329140  38 63 FF E8 */	addi r3, r3, -24
/* 8032C204 00329144  4B FF FF 6C */	b __dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
