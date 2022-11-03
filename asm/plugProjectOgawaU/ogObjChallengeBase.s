.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_ogObjChallengeBase_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804DA058
lbl_804DA058:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q32og9newScreen16ObjChallengeBase
__vt__Q32og9newScreen16ObjChallengeBase:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og9newScreen16ObjChallengeBaseFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32og9newScreen16ObjChallengeBaseFv"
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
	.4byte doStart__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q26Screen7ObjBaseFP10JKRArchive
	.4byte doUpdateFadein__Q26Screen7ObjBaseFv
	.4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
	.4byte doUpdate__Q26Screen7ObjBaseFv
	.4byte doUpdateFinish__Q26Screen7ObjBaseFv
	.4byte doUpdateFadeout__Q26Screen7ObjBaseFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q26Screen7ObjBaseFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte doCreateAfter__Q32og9newScreen16ObjChallengeBaseFP10JKRArchivePQ32og6Screen18CallBack_CounterRV

.section .bss  # 0x804EFC20 - 0x8051467C
# ogObjChallengeBase.cpp
.comm msBaseVal__Q32og9newScreen16ObjChallengeBase, 0x1C, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515EB0
lbl_80515EB0:
	.skip 0x4
.global lbl_80515EB4
lbl_80515EB4:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051DF40
lbl_8051DF40:
	.4byte 0x00000000
.global lbl_8051DF44
lbl_8051DF44:
	.float 0.3
.global lbl_8051DF48
lbl_8051DF48:
	.float 0.1
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen16ObjChallengeBaseFv
__ct__Q32og9newScreen16ObjChallengeBaseFv:
/* 8032C8A0 003297E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C8A4 003297E4  7C 08 02 A6 */	mflr r0
/* 8032C8A8 003297E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C8AC 003297EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032C8B0 003297F0  7C 7F 1B 78 */	mr r31, r3
/* 8032C8B4 003297F4  48 12 72 35 */	bl __ct__Q26Screen7ObjBaseFv
/* 8032C8B8 003297F8  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen16ObjChallengeBase@ha
/* 8032C8BC 003297FC  C0 02 FB E0 */	lfs f0, lbl_8051DF40@sda21(r2)
/* 8032C8C0 00329800  38 63 A0 64 */	addi r3, r3, __vt__Q32og9newScreen16ObjChallengeBase@l
/* 8032C8C4 00329804  38 A0 FF FF */	li r5, -1
/* 8032C8C8 00329808  90 7F 00 00 */	stw r3, 0(r31)
/* 8032C8CC 0032980C  38 63 00 10 */	addi r3, r3, 0x10
/* 8032C8D0 00329810  38 80 00 00 */	li r4, 0
/* 8032C8D4 00329814  38 00 00 FF */	li r0, 0xff
/* 8032C8D8 00329818  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8032C8DC 0032981C  7F E3 FB 78 */	mr r3, r31
/* 8032C8E0 00329820  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8032C8E4 00329824  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8032C8E8 00329828  90 BF 00 54 */	stw r5, 0x54(r31)
/* 8032C8EC 0032982C  90 BF 00 58 */	stw r5, 0x58(r31)
/* 8032C8F0 00329830  98 9F 00 48 */	stb r4, 0x48(r31)
/* 8032C8F4 00329834  98 9F 00 49 */	stb r4, 0x49(r31)
/* 8032C8F8 00329838  90 9F 00 4C */	stw r4, 0x4c(r31)
/* 8032C8FC 0032983C  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8032C900 00329840  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8032C904 00329844  98 1F 00 54 */	stb r0, 0x54(r31)
/* 8032C908 00329848  98 1F 00 55 */	stb r0, 0x55(r31)
/* 8032C90C 0032984C  98 1F 00 56 */	stb r0, 0x56(r31)
/* 8032C910 00329850  98 1F 00 57 */	stb r0, 0x57(r31)
/* 8032C914 00329854  98 9F 00 58 */	stb r4, 0x58(r31)
/* 8032C918 00329858  98 9F 00 59 */	stb r4, 0x59(r31)
/* 8032C91C 0032985C  98 9F 00 5A */	stb r4, 0x5a(r31)
/* 8032C920 00329860  98 9F 00 5B */	stb r4, 0x5b(r31)
/* 8032C924 00329864  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C928 00329868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C92C 0032986C  7C 08 03 A6 */	mtlr r0
/* 8032C930 00329870  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C934 00329874  4E 80 00 20 */	blr 

.global __dt__Q32og9newScreen16ObjChallengeBaseFv
__dt__Q32og9newScreen16ObjChallengeBaseFv:
/* 8032C938 00329878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032C93C 0032987C  7C 08 02 A6 */	mflr r0
/* 8032C940 00329880  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032C944 00329884  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032C948 00329888  7C 9F 23 78 */	mr r31, r4
/* 8032C94C 0032988C  93 C1 00 08 */	stw r30, 8(r1)
/* 8032C950 00329890  7C 7E 1B 79 */	or. r30, r3, r3
/* 8032C954 00329894  41 82 00 74 */	beq .L_8032C9C8
/* 8032C958 00329898  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen16ObjChallengeBase@ha
/* 8032C95C 0032989C  38 84 A0 64 */	addi r4, r4, __vt__Q32og9newScreen16ObjChallengeBase@l
/* 8032C960 003298A0  90 9E 00 00 */	stw r4, 0(r30)
/* 8032C964 003298A4  38 04 00 10 */	addi r0, r4, 0x10
/* 8032C968 003298A8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8032C96C 003298AC  41 82 00 4C */	beq .L_8032C9B8
/* 8032C970 003298B0  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 8032C974 003298B4  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 8032C978 003298B8  90 9E 00 00 */	stw r4, 0(r30)
/* 8032C97C 003298BC  38 04 00 10 */	addi r0, r4, 0x10
/* 8032C980 003298C0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8032C984 003298C4  41 82 00 34 */	beq .L_8032C9B8
/* 8032C988 003298C8  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8032C98C 003298CC  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8032C990 003298D0  90 9E 00 00 */	stw r4, 0(r30)
/* 8032C994 003298D4  38 04 00 10 */	addi r0, r4, 0x10
/* 8032C998 003298D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8032C99C 003298DC  48 0E 4C 35 */	bl del__5CNodeFv
/* 8032C9A0 003298E0  38 7E 00 18 */	addi r3, r30, 0x18
/* 8032C9A4 003298E4  38 80 00 00 */	li r4, 0
/* 8032C9A8 003298E8  4B CF 06 8D */	bl __dt__11JKRDisposerFv
/* 8032C9AC 003298EC  7F C3 F3 78 */	mr r3, r30
/* 8032C9B0 003298F0  38 80 00 00 */	li r4, 0
/* 8032C9B4 003298F4  48 0E 4B D5 */	bl __dt__5CNodeFv
.L_8032C9B8:
/* 8032C9B8 003298F8  7F E0 07 35 */	extsh. r0, r31
/* 8032C9BC 003298FC  40 81 00 0C */	ble .L_8032C9C8
/* 8032C9C0 00329900  7F C3 F3 78 */	mr r3, r30
/* 8032C9C4 00329904  4B CF 76 F1 */	bl __dl__FPv
.L_8032C9C8:
/* 8032C9C8 00329908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032C9CC 0032990C  7F C3 F3 78 */	mr r3, r30
/* 8032C9D0 00329910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032C9D4 00329914  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032C9D8 00329918  7C 08 03 A6 */	mtlr r0
/* 8032C9DC 0032991C  38 21 00 10 */	addi r1, r1, 0x10
/* 8032C9E0 00329920  4E 80 00 20 */	blr 

.global doCreateAfter__Q32og9newScreen16ObjChallengeBaseFP10JKRArchivePQ32og6Screen18CallBack_CounterRV
doCreateAfter__Q32og9newScreen16ObjChallengeBaseFP10JKRArchivePQ32og6Screen18CallBack_CounterRV:
/* 8032C9E4 00329924  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8032C9E8 00329928  7C 08 02 A6 */	mflr r0
/* 8032C9EC 0032992C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8032C9F0 00329930  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8032C9F4 00329934  7C 7F 1B 78 */	mr r31, r3
/* 8032C9F8 00329938  38 61 00 0C */	addi r3, r1, 0xc
/* 8032C9FC 0032993C  80 05 00 6C */	lwz r0, 0x6c(r5)
/* 8032CA00 00329940  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8032CA04 00329944  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 8032CA08 00329948  81 84 00 00 */	lwz r12, 0(r4)
/* 8032CA0C 0032994C  81 8C 01 38 */	lwz r12, 0x138(r12)
/* 8032CA10 00329950  7D 89 03 A6 */	mtctr r12
/* 8032CA14 00329954  4E 80 04 21 */	bctrl 
/* 8032CA18 00329958  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8032CA1C 0032995C  38 61 00 08 */	addi r3, r1, 8
/* 8032CA20 00329960  98 1F 00 54 */	stb r0, 0x54(r31)
/* 8032CA24 00329964  88 01 00 0D */	lbz r0, 0xd(r1)
/* 8032CA28 00329968  98 1F 00 55 */	stb r0, 0x55(r31)
/* 8032CA2C 0032996C  88 01 00 0E */	lbz r0, 0xe(r1)
/* 8032CA30 00329970  98 1F 00 56 */	stb r0, 0x56(r31)
/* 8032CA34 00329974  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8032CA38 00329978  98 1F 00 57 */	stb r0, 0x57(r31)
/* 8032CA3C 0032997C  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 8032CA40 00329980  81 84 00 00 */	lwz r12, 0(r4)
/* 8032CA44 00329984  81 8C 01 34 */	lwz r12, 0x134(r12)
/* 8032CA48 00329988  7D 89 03 A6 */	mtctr r12
/* 8032CA4C 0032998C  4E 80 04 21 */	bctrl 
/* 8032CA50 00329990  88 01 00 08 */	lbz r0, 8(r1)
/* 8032CA54 00329994  98 1F 00 58 */	stb r0, 0x58(r31)
/* 8032CA58 00329998  88 01 00 09 */	lbz r0, 9(r1)
/* 8032CA5C 0032999C  98 1F 00 59 */	stb r0, 0x59(r31)
/* 8032CA60 003299A0  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8032CA64 003299A4  98 1F 00 5A */	stb r0, 0x5a(r31)
/* 8032CA68 003299A8  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8032CA6C 003299AC  98 1F 00 5B */	stb r0, 0x5b(r31)
/* 8032CA70 003299B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8032CA74 003299B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8032CA78 003299B8  7C 08 03 A6 */	mtlr r0
/* 8032CA7C 003299BC  38 21 00 20 */	addi r1, r1, 0x20
/* 8032CA80 003299C0  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen13StartSceneArg
doStart__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen13StartSceneArg:
/* 8032CA84 003299C4  C0 02 FB E0 */	lfs f0, lbl_8051DF40@sda21(r2)
/* 8032CA88 003299C8  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8032CA8C 003299CC  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 8032CA90 003299D0  38 60 00 01 */	li r3, 1
/* 8032CA94 003299D4  4E 80 00 20 */	blr 

.global doEnd__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen11EndSceneArg
doEnd__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen11EndSceneArg:
/* 8032CA98 003299D8  C0 02 FB E0 */	lfs f0, lbl_8051DF40@sda21(r2)
/* 8032CA9C 003299DC  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8032CAA0 003299E0  38 60 00 01 */	li r3, 1
/* 8032CAA4 003299E4  4E 80 00 20 */	blr 

.global updateTimer__Q32og9newScreen16ObjChallengeBaseFff
updateTimer__Q32og9newScreen16ObjChallengeBaseFff:
/* 8032CAA8 003299E8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8032CAAC 003299EC  7C 08 02 A6 */	mflr r0
/* 8032CAB0 003299F0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8032CAB4 003299F4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8032CAB8 003299F8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8032CABC 003299FC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8032CAC0 00329A00  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8032CAC4 00329A04  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8032CAC8 00329A08  7C 7F 1B 78 */	mr r31, r3
/* 8032CACC 00329A0C  FF C0 08 90 */	fmr f30, f1
/* 8032CAD0 00329A10  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 8032CAD4 00329A14  FF E0 10 90 */	fmr f31, f2
/* 8032CAD8 00329A18  28 00 00 00 */	cmplwi r0, 0
/* 8032CADC 00329A1C  41 82 00 60 */	beq .L_8032CB3C
/* 8032CAE0 00329A20  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 8032CAE4 00329A24  C0 22 FB E0 */	lfs f1, lbl_8051DF40@sda21(r2)
/* 8032CAE8 00329A28  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8032CAEC 00329A2C  40 81 00 50 */	ble .L_8032CB3C
/* 8032CAF0 00329A30  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8032CAF4 00329A34  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8032CAF8 00329A38  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8032CAFC 00329A3C  EC 02 00 28 */	fsubs f0, f2, f0
/* 8032CB00 00329A40  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8032CB04 00329A44  40 81 00 18 */	ble .L_8032CB1C
/* 8032CB08 00329A48  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 8032CB0C 00329A4C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8032CB10 00329A50  40 80 00 0C */	bge .L_8032CB1C
/* 8032CB14 00329A54  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 8032CB18 00329A58  4B FE 03 6D */	bl setTimeCarry__Q22og5SoundFv
.L_8032CB1C:
/* 8032CB1C 00329A5C  C0 02 FB E0 */	lfs f0, lbl_8051DF40@sda21(r2)
/* 8032CB20 00329A60  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8032CB24 00329A64  40 81 00 10 */	ble .L_8032CB34
/* 8032CB28 00329A68  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8032CB2C 00329A6C  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8032CB30 00329A70  48 00 00 10 */	b .L_8032CB40
.L_8032CB34:
/* 8032CB34 00329A74  D3 DF 00 44 */	stfs f30, 0x44(r31)
/* 8032CB38 00329A78  48 00 00 08 */	b .L_8032CB40
.L_8032CB3C:
/* 8032CB3C 00329A7C  D3 DF 00 44 */	stfs f30, 0x44(r31)
.L_8032CB40:
/* 8032CB40 00329A80  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8032CB44 00329A84  4B D9 50 09 */	bl __cvt_fp2unsigned
/* 8032CB48 00329A88  90 7F 00 40 */	stw r3, 0x40(r31)
/* 8032CB4C 00329A8C  3C 60 80 51 */	lis r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@ha
/* 8032CB50 00329A90  38 63 3F E0 */	addi r3, r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@l
/* 8032CB54 00329A94  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 8032CB58 00329A98  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8032CB5C 00329A9C  7C 04 00 40 */	cmplw r4, r0
/* 8032CB60 00329AA0  41 81 00 50 */	bgt .L_8032CBB0
/* 8032CB64 00329AA4  80 03 00 08 */	lwz r0, 8(r3)
/* 8032CB68 00329AA8  38 81 00 14 */	addi r4, r1, 0x14
/* 8032CB6C 00329AAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032CB70 00329AB0  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8032CB74 00329AB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8032CB78 00329AB8  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 8032CB7C 00329ABC  7D 89 03 A6 */	mtctr r12
/* 8032CB80 00329AC0  4E 80 04 21 */	bctrl 
/* 8032CB84 00329AC4  3C 60 80 51 */	lis r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@ha
/* 8032CB88 00329AC8  38 81 00 10 */	addi r4, r1, 0x10
/* 8032CB8C 00329ACC  38 63 3F E0 */	addi r3, r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@l
/* 8032CB90 00329AD0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8032CB94 00329AD4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8032CB98 00329AD8  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8032CB9C 00329ADC  81 83 00 00 */	lwz r12, 0(r3)
/* 8032CBA0 00329AE0  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8032CBA4 00329AE4  7D 89 03 A6 */	mtctr r12
/* 8032CBA8 00329AE8  4E 80 04 21 */	bctrl 
/* 8032CBAC 00329AEC  48 00 00 44 */	b .L_8032CBF0
.L_8032CBB0:
/* 8032CBB0 00329AF0  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 8032CBB4 00329AF4  38 81 00 0C */	addi r4, r1, 0xc
/* 8032CBB8 00329AF8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8032CBBC 00329AFC  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8032CBC0 00329B00  81 83 00 00 */	lwz r12, 0(r3)
/* 8032CBC4 00329B04  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 8032CBC8 00329B08  7D 89 03 A6 */	mtctr r12
/* 8032CBCC 00329B0C  4E 80 04 21 */	bctrl 
/* 8032CBD0 00329B10  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 8032CBD4 00329B14  38 81 00 08 */	addi r4, r1, 8
/* 8032CBD8 00329B18  90 01 00 08 */	stw r0, 8(r1)
/* 8032CBDC 00329B1C  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8032CBE0 00329B20  81 83 00 00 */	lwz r12, 0(r3)
/* 8032CBE4 00329B24  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8032CBE8 00329B28  7D 89 03 A6 */	mtctr r12
/* 8032CBEC 00329B2C  4E 80 04 21 */	bctrl 
.L_8032CBF0:
/* 8032CBF0 00329B30  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8032CBF4 00329B34  C0 02 FB E0 */	lfs f0, lbl_8051DF40@sda21(r2)
/* 8032CBF8 00329B38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8032CBFC 00329B3C  4C 40 13 82 */	cror 2, 0, 2
/* 8032CC00 00329B40  40 82 00 54 */	bne .L_8032CC54
/* 8032CC04 00329B44  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 8032CC08 00329B48  28 00 00 1E */	cmplwi r0, 0x1e
/* 8032CC0C 00329B4C  40 82 00 20 */	bne .L_8032CC2C
/* 8032CC10 00329B50  88 1F 00 48 */	lbz r0, 0x48(r31)
/* 8032CC14 00329B54  28 00 00 00 */	cmplwi r0, 0
/* 8032CC18 00329B58  40 82 00 14 */	bne .L_8032CC2C
/* 8032CC1C 00329B5C  38 00 00 01 */	li r0, 1
/* 8032CC20 00329B60  98 1F 00 48 */	stb r0, 0x48(r31)
/* 8032CC24 00329B64  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 8032CC28 00329B68  4B FD FE D1 */	bl setChime__Q22og5SoundFv
.L_8032CC2C:
/* 8032CC2C 00329B6C  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 8032CC30 00329B70  28 00 00 0A */	cmplwi r0, 0xa
/* 8032CC34 00329B74  40 82 00 20 */	bne .L_8032CC54
/* 8032CC38 00329B78  88 1F 00 49 */	lbz r0, 0x49(r31)
/* 8032CC3C 00329B7C  28 00 00 00 */	cmplwi r0, 0
/* 8032CC40 00329B80  40 82 00 14 */	bne .L_8032CC54
/* 8032CC44 00329B84  38 00 00 01 */	li r0, 1
/* 8032CC48 00329B88  98 1F 00 49 */	stb r0, 0x49(r31)
/* 8032CC4C 00329B8C  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 8032CC50 00329B90  4B FD FE A9 */	bl setChime__Q22og5SoundFv
.L_8032CC54:
/* 8032CC54 00329B94  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8032CC58 00329B98  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8032CC5C 00329B9C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8032CC60 00329BA0  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8032CC64 00329BA4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8032CC68 00329BA8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8032CC6C 00329BAC  7C 08 03 A6 */	mtlr r0
/* 8032CC70 00329BB0  38 21 00 40 */	addi r1, r1, 0x40
/* 8032CC74 00329BB4  4E 80 00 20 */	blr 

.global setSubLevel__Q32og9newScreen16ObjChallengeBaseFUl
setSubLevel__Q32og9newScreen16ObjChallengeBaseFUl:
/* 8032CC78 00329BB8  90 83 00 5C */	stw r4, 0x5c(r3)
/* 8032CC7C 00329BBC  4E 80 00 20 */	blr 

.global doUpdateFadein__Q26Screen7ObjBaseFv
doUpdateFadein__Q26Screen7ObjBaseFv:
/* 8032CC80 00329BC0  38 60 00 01 */	li r3, 1
/* 8032CC84 00329BC4  4E 80 00 20 */	blr 

.global doUpdateFadeinFinish__Q26Screen7ObjBaseFv
doUpdateFadeinFinish__Q26Screen7ObjBaseFv:
/* 8032CC88 00329BC8  4E 80 00 20 */	blr 

.global doUpdate__Q26Screen7ObjBaseFv
doUpdate__Q26Screen7ObjBaseFv:
/* 8032CC8C 00329BCC  38 60 00 00 */	li r3, 0
/* 8032CC90 00329BD0  4E 80 00 20 */	blr 

.global doUpdateFinish__Q26Screen7ObjBaseFv
doUpdateFinish__Q26Screen7ObjBaseFv:
/* 8032CC94 00329BD4  4E 80 00 20 */	blr 

.global doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
doUpdateFadeoutFinish__Q26Screen7ObjBaseFv:
/* 8032CC98 00329BD8  4E 80 00 20 */	blr 

.global __sinit_ogObjChallengeBase_cpp
__sinit_ogObjChallengeBase_cpp:
/* 8032CC9C 00329BDC  3C 60 80 51 */	lis r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@ha
/* 8032CCA0 00329BE0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8032CCA4 00329BE4  39 20 FF FF */	li r9, -1
/* 8032CCA8 00329BE8  C0 44 48 B0 */	lfs f2, __float_nan@l(r4)
/* 8032CCAC 00329BEC  38 E3 3F E0 */	addi r7, r3, msBaseVal__Q32og9newScreen16ObjChallengeBase@l
/* 8032CCB0 00329BF0  C0 22 FB E4 */	lfs f1, lbl_8051DF44@sda21(r2)
/* 8032CCB4 00329BF4  38 60 00 0A */	li r3, 0xa
/* 8032CCB8 00329BF8  C0 02 FB E8 */	lfs f0, lbl_8051DF48@sda21(r2)
/* 8032CCBC 00329BFC  3C 80 80 4E */	lis r4, lbl_804DA058@ha
/* 8032CCC0 00329C00  38 00 00 1E */	li r0, 0x1e
/* 8032CCC4 00329C04  39 04 A0 58 */	addi r8, r4, lbl_804DA058@l
/* 8032CCC8 00329C08  91 27 00 08 */	stw r9, 8(r7)
/* 8032CCCC 00329C0C  38 C0 00 FF */	li r6, 0xff
/* 8032CCD0 00329C10  38 A0 00 00 */	li r5, 0
/* 8032CCD4 00329C14  91 27 00 0C */	stw r9, 0xc(r7)
/* 8032CCD8 00329C18  38 80 00 40 */	li r4, 0x40
/* 8032CCDC 00329C1C  91 2D 98 30 */	stw r9, lbl_80515EB0@sda21(r13)
/* 8032CCE0 00329C20  D0 4D 98 34 */	stfs f2, lbl_80515EB4@sda21(r13)
/* 8032CCE4 00329C24  D0 48 00 00 */	stfs f2, 0(r8)
/* 8032CCE8 00329C28  D0 48 00 04 */	stfs f2, 4(r8)
/* 8032CCEC 00329C2C  D0 48 00 08 */	stfs f2, 8(r8)
/* 8032CCF0 00329C30  D0 27 00 00 */	stfs f1, 0(r7)
/* 8032CCF4 00329C34  D0 07 00 04 */	stfs f0, 4(r7)
/* 8032CCF8 00329C38  98 C7 00 08 */	stb r6, 8(r7)
/* 8032CCFC 00329C3C  98 A7 00 09 */	stb r5, 9(r7)
/* 8032CD00 00329C40  98 A7 00 0A */	stb r5, 0xa(r7)
/* 8032CD04 00329C44  98 C7 00 0B */	stb r6, 0xb(r7)
/* 8032CD08 00329C48  98 87 00 0C */	stb r4, 0xc(r7)
/* 8032CD0C 00329C4C  98 A7 00 0D */	stb r5, 0xd(r7)
/* 8032CD10 00329C50  98 A7 00 0E */	stb r5, 0xe(r7)
/* 8032CD14 00329C54  98 A7 00 0F */	stb r5, 0xf(r7)
/* 8032CD18 00329C58  90 67 00 10 */	stw r3, 0x10(r7)
/* 8032CD1C 00329C5C  90 07 00 14 */	stw r0, 0x14(r7)
/* 8032CD20 00329C60  90 67 00 18 */	stw r3, 0x18(r7)
/* 8032CD24 00329C64  4E 80 00 20 */	blr 

.global "@24@__dt__Q32og9newScreen16ObjChallengeBaseFv"
"@24@__dt__Q32og9newScreen16ObjChallengeBaseFv":
/* 8032CD28 00329C68  38 63 FF E8 */	addi r3, r3, -24
/* 8032CD2C 00329C6C  4B FF FC 0C */	b __dt__Q32og9newScreen16ObjChallengeBaseFv
