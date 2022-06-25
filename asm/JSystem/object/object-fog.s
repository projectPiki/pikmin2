.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte "__sinit_object-fog_cpp"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_8049F820
lbl_8049F820:
	.4byte 0x00000000
	.4byte 0x00000048
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000044
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000050
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x0000004C
	.4byte 0x00000000
.global __vt__Q214JStudio_JStage12TAdaptor_fog
__vt__Q214JStudio_JStage12TAdaptor_fog:
	.4byte 0
	.4byte 0
	.4byte __dt__Q214JStudio_JStage12TAdaptor_fogFv
	.4byte adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
	.4byte adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
	.4byte adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
	.4byte adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectUl
	.4byte adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectPCvUlPCvUl
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.global "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"
"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>":
	.4byte 0
	.4byte 0
	.4byte "__cl__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>CFfPQ27JStudio8TAdaptor"
	.4byte "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0

.section .bss  # 0x804EFC20 - 0x8051467C
.global lbl_804EFE68
lbl_804EFE68:
	.skip 0x28

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q214JStudio_JStage12TAdaptor_fogFPCQ26JStage7TSystemPQ26JStage4TFog
__ct__Q214JStudio_JStage12TAdaptor_fogFPCQ26JStage7TSystemPQ26JStage4TFog:
/* 80014134 00011074  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80014138 00011078  7C 08 02 A6 */	mflr r0
/* 8001413C 0001107C  3C C0 80 4A */	lis r6, __vt__Q27JStudio8TAdaptor@ha
/* 80014140 00011080  3C E0 80 4A */	lis r7, __vt__Q27JStudio12TAdaptor_fog@ha
/* 80014144 00011084  90 01 00 24 */	stw r0, 0x24(r1)
/* 80014148 00011088  38 06 F4 68 */	addi r0, r6, __vt__Q27JStudio8TAdaptor@l
/* 8001414C 0001108C  3C C0 80 00 */	lis r6, __ct__Q27JStudio14TVariableValueFv@ha
/* 80014150 00011090  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80014154 00011094  7C BF 2B 78 */	mr r31, r5
/* 80014158 00011098  38 A7 F3 1C */	addi r5, r7, __vt__Q27JStudio12TAdaptor_fog@l
/* 8001415C 0001109C  38 E0 00 06 */	li r7, 6
/* 80014160 000110A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80014164 000110A4  7C 9E 23 78 */	mr r30, r4
/* 80014168 000110A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8001416C 000110AC  7C 7D 1B 78 */	mr r29, r3
/* 80014170 000110B0  7F A8 EB 78 */	mr r8, r29
/* 80014174 000110B4  90 03 00 00 */	stw r0, 0(r3)
/* 80014178 000110B8  38 68 00 0C */	addi r3, r8, 0xc
/* 8001417C 000110BC  38 00 00 06 */	li r0, 6
/* 80014180 000110C0  90 7D 00 04 */	stw r3, 4(r29)
/* 80014184 000110C4  90 1D 00 08 */	stw r0, 8(r29)
/* 80014188 000110C8  38 06 58 08 */	addi r0, r6, __ct__Q27JStudio14TVariableValueFv@l
/* 8001418C 000110CC  7C 04 03 78 */	mr r4, r0
/* 80014190 000110D0  38 C0 00 14 */	li r6, 0x14
/* 80014194 000110D4  90 BD 00 00 */	stw r5, 0(r29)
/* 80014198 000110D8  38 A0 00 00 */	li r5, 0
/* 8001419C 000110DC  48 0A D6 A1 */	bl __construct_array
/* 800141A0 000110E0  3C 80 80 4A */	lis r4, __vt__Q214JStudio_JStage12TAdaptor_fog@ha
/* 800141A4 000110E4  7F A3 EB 78 */	mr r3, r29
/* 800141A8 000110E8  38 04 F8 50 */	addi r0, r4, __vt__Q214JStudio_JStage12TAdaptor_fog@l
/* 800141AC 000110EC  90 1D 00 00 */	stw r0, 0(r29)
/* 800141B0 000110F0  93 DD 00 84 */	stw r30, 0x84(r29)
/* 800141B4 000110F4  93 FD 00 88 */	stw r31, 0x88(r29)
/* 800141B8 000110F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800141BC 000110FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800141C0 00011100  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800141C4 00011104  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800141C8 00011108  7C 08 03 A6 */	mtlr r0
/* 800141CC 0001110C  38 21 00 20 */	addi r1, r1, 0x20
/* 800141D0 00011110  4E 80 00 20 */	blr 

.global __dt__Q214JStudio_JStage12TAdaptor_fogFv
__dt__Q214JStudio_JStage12TAdaptor_fogFv:
/* 800141D4 00011114  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800141D8 00011118  7C 08 02 A6 */	mflr r0
/* 800141DC 0001111C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800141E0 00011120  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800141E4 00011124  7C 9F 23 78 */	mr r31, r4
/* 800141E8 00011128  93 C1 00 08 */	stw r30, 8(r1)
/* 800141EC 0001112C  7C 7E 1B 79 */	or. r30, r3, r3
/* 800141F0 00011130  41 82 00 40 */	beq lbl_80014230
/* 800141F4 00011134  3C A0 80 4A */	lis r5, __vt__Q214JStudio_JStage12TAdaptor_fog@ha
/* 800141F8 00011138  38 80 00 00 */	li r4, 0
/* 800141FC 0001113C  38 05 F8 50 */	addi r0, r5, __vt__Q214JStudio_JStage12TAdaptor_fog@l
/* 80014200 00011140  90 1E 00 00 */	stw r0, 0(r30)
/* 80014204 00011144  81 83 00 00 */	lwz r12, 0(r3)
/* 80014208 00011148  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8001420C 0001114C  7D 89 03 A6 */	mtctr r12
/* 80014210 00011150  4E 80 04 21 */	bctrl 
/* 80014214 00011154  7F C3 F3 78 */	mr r3, r30
/* 80014218 00011158  38 80 00 00 */	li r4, 0
/* 8001421C 0001115C  4B FF A2 F5 */	bl __dt__Q27JStudio12TAdaptor_fogFv
/* 80014220 00011160  7F E0 07 35 */	extsh. r0, r31
/* 80014224 00011164  40 81 00 0C */	ble lbl_80014230
/* 80014228 00011168  7F C3 F3 78 */	mr r3, r30
/* 8001422C 0001116C  48 00 FE 89 */	bl __dl__FPv
lbl_80014230:
/* 80014230 00011170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80014234 00011174  7F C3 F3 78 */	mr r3, r30
/* 80014238 00011178  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001423C 0001117C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80014240 00011180  7C 08 03 A6 */	mtlr r0
/* 80014244 00011184  38 21 00 10 */	addi r1, r1, 0x10
/* 80014248 00011188  4E 80 00 20 */	blr 

.global adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject:
/* 8001424C 0001118C  3C 80 80 50 */	lis r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
/* 80014250 00011190  38 04 6C D4 */	addi r0, r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
/* 80014254 00011194  7C 05 03 78 */	mr r5, r0
/* 80014258 00011198  48 00 00 2C */	b lbl_80014284
lbl_8001425C:
/* 8001425C 0001119C  1C 00 00 14 */	mulli r0, r0, 0x14
/* 80014260 000111A0  80 83 00 04 */	lwz r4, 4(r3)
/* 80014264 000111A4  28 05 00 00 */	cmplwi r5, 0
/* 80014268 000111A8  7C 84 02 14 */	add r4, r4, r0
/* 8001426C 000111AC  41 82 00 0C */	beq lbl_80014278
/* 80014270 000111B0  7C A0 2B 78 */	mr r0, r5
/* 80014274 000111B4  48 00 00 08 */	b lbl_8001427C
lbl_80014278:
/* 80014278 000111B8  38 0D 87 10 */	addi r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21
lbl_8001427C:
/* 8001427C 000111BC  90 04 00 10 */	stw r0, 0x10(r4)
/* 80014280 000111C0  38 A5 00 20 */	addi r5, r5, 0x20
lbl_80014284:
/* 80014284 000111C4  80 05 00 04 */	lwz r0, 4(r5)
/* 80014288 000111C8  2C 00 FF FF */	cmpwi r0, -1
/* 8001428C 000111CC  40 82 FF D0 */	bne lbl_8001425C
/* 80014290 000111D0  4E 80 00 20 */	blr 

.global adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject:
/* 80014294 000111D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80014298 000111D8  7C 08 02 A6 */	mflr r0
/* 8001429C 000111DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800142A0 000111E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800142A4 000111E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800142A8 000111E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800142AC 000111EC  93 81 00 10 */	stw r28, 0x10(r1)
/* 800142B0 000111F0  7C 7C 1B 78 */	mr r28, r3
/* 800142B4 000111F4  83 C3 00 88 */	lwz r30, 0x88(r3)
/* 800142B8 000111F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 800142BC 000111FC  7F C3 F3 78 */	mr r3, r30
/* 800142C0 00011200  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800142C4 00011204  7D 89 03 A6 */	mtctr r12
/* 800142C8 00011208  4E 80 04 21 */	bctrl 
/* 800142CC 0001120C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800142D0 00011210  60 64 00 01 */	ori r4, r3, 1
/* 800142D4 00011214  7F C3 F3 78 */	mr r3, r30
/* 800142D8 00011218  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800142DC 0001121C  7D 89 03 A6 */	mtctr r12
/* 800142E0 00011220  4E 80 04 21 */	bctrl 
/* 800142E4 00011224  80 7C 00 88 */	lwz r3, 0x88(r28)
/* 800142E8 00011228  81 83 00 00 */	lwz r12, 0(r3)
/* 800142EC 0001122C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 800142F0 00011230  7D 89 03 A6 */	mtctr r12
/* 800142F4 00011234  4E 80 04 21 */	bctrl 
/* 800142F8 00011238  3C 80 80 47 */	lis r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@ha
/* 800142FC 0001123C  90 61 00 08 */	stw r3, 8(r1)
/* 80014300 00011240  38 84 33 B4 */	addi r4, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@l
/* 80014304 00011244  7F 83 E3 78 */	mr r3, r28
/* 80014308 00011248  38 A1 00 08 */	addi r5, r1, 8
/* 8001430C 0001124C  4B FF 90 59 */	bl adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor
/* 80014310 00011250  3C 80 80 50 */	lis r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
/* 80014314 00011254  3C 60 80 01 */	lis r3, update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@ha
/* 80014318 00011258  38 04 6C D4 */	addi r0, r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
/* 8001431C 0001125C  3B E0 00 00 */	li r31, 0
/* 80014320 00011260  7C 1D 03 78 */	mr r29, r0
/* 80014324 00011264  3B C3 D0 B0 */	addi r30, r3, update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@l
/* 80014328 00011268  48 00 00 34 */	b lbl_8001435C
lbl_8001432C:
/* 8001432C 0001126C  80 7C 00 88 */	lwz r3, 0x88(r28)
/* 80014330 00011270  39 9D 00 14 */	addi r12, r29, 0x14
/* 80014334 00011274  48 0A D7 F1 */	bl __ptmf_scall
/* 80014338 00011278  60 00 00 00 */	nop 
/* 8001433C 0001127C  80 1D 00 04 */	lwz r0, 4(r29)
/* 80014340 00011280  3B BD 00 20 */	addi r29, r29, 0x20
/* 80014344 00011284  80 7C 00 04 */	lwz r3, 4(r28)
/* 80014348 00011288  1C 00 00 14 */	mulli r0, r0, 0x14
/* 8001434C 0001128C  7C 63 02 14 */	add r3, r3, r0
/* 80014350 00011290  93 C3 00 08 */	stw r30, 8(r3)
/* 80014354 00011294  93 E3 00 04 */	stw r31, 4(r3)
/* 80014358 00011298  D0 23 00 0C */	stfs f1, 0xc(r3)
lbl_8001435C:
/* 8001435C 0001129C  80 1D 00 04 */	lwz r0, 4(r29)
/* 80014360 000112A0  2C 00 FF FF */	cmpwi r0, -1
/* 80014364 000112A4  40 82 FF C8 */	bne lbl_8001432C
/* 80014368 000112A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8001436C 000112AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80014370 000112B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80014374 000112B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80014378 000112B8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8001437C 000112BC  7C 08 03 A6 */	mtlr r0
/* 80014380 000112C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80014384 000112C4  4E 80 00 20 */	blr 

.global adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject:
/* 80014388 000112C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001438C 000112CC  7C 08 02 A6 */	mflr r0
/* 80014390 000112D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80014394 000112D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80014398 000112D8  83 E3 00 88 */	lwz r31, 0x88(r3)
/* 8001439C 000112DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 800143A0 000112E0  7F E3 FB 78 */	mr r3, r31
/* 800143A4 000112E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800143A8 000112E8  7D 89 03 A6 */	mtctr r12
/* 800143AC 000112EC  4E 80 04 21 */	bctrl 
/* 800143B0 000112F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 800143B4 000112F4  54 64 00 3C */	rlwinm r4, r3, 0, 0, 0x1e
/* 800143B8 000112F8  7F E3 FB 78 */	mr r3, r31
/* 800143BC 000112FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800143C0 00011300  7D 89 03 A6 */	mtctr r12
/* 800143C4 00011304  4E 80 04 21 */	bctrl 
/* 800143C8 00011308  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800143CC 0001130C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800143D0 00011310  7C 08 03 A6 */	mtlr r0
/* 800143D4 00011314  38 21 00 10 */	addi r1, r1, 0x10
/* 800143D8 00011318  4E 80 00 20 */	blr 

.global adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectUl
adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectUl:
/* 800143DC 0001131C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800143E0 00011320  7C 08 02 A6 */	mflr r0
/* 800143E4 00011324  3C 80 80 47 */	lis r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@ha
/* 800143E8 00011328  90 01 00 24 */	stw r0, 0x24(r1)
/* 800143EC 0001132C  38 A4 33 B4 */	addi r5, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@l
/* 800143F0 00011330  38 81 00 0C */	addi r4, r1, 0xc
/* 800143F4 00011334  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800143F8 00011338  7C 7F 1B 78 */	mr r31, r3
/* 800143FC 0001133C  4B FF 90 49 */	bl adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl
/* 80014400 00011340  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80014404 00011344  38 81 00 08 */	addi r4, r1, 8
/* 80014408 00011348  90 01 00 08 */	stw r0, 8(r1)
/* 8001440C 0001134C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80014410 00011350  81 83 00 00 */	lwz r12, 0(r3)
/* 80014414 00011354  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80014418 00011358  7D 89 03 A6 */	mtctr r12
/* 8001441C 0001135C  4E 80 04 21 */	bctrl 
/* 80014420 00011360  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80014424 00011364  81 83 00 00 */	lwz r12, 0(r3)
/* 80014428 00011368  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8001442C 0001136C  7D 89 03 A6 */	mtctr r12
/* 80014430 00011370  4E 80 04 21 */	bctrl 
/* 80014434 00011374  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80014438 00011378  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8001443C 0001137C  7C 08 03 A6 */	mtlr r0
/* 80014440 00011380  38 21 00 20 */	addi r1, r1, 0x20
/* 80014444 00011384  4E 80 00 20 */	blr 

.global adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectPCvUlPCvUl
adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectPCvUlPCvUl:
/* 80014448 00011388  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001444C 0001138C  7C 08 02 A6 */	mflr r0
/* 80014450 00011390  7C A4 2B 78 */	mr r4, r5
/* 80014454 00011394  7C C5 33 78 */	mr r5, r6
/* 80014458 00011398  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001445C 0001139C  7C E6 3B 78 */	mr r6, r7
/* 80014460 000113A0  7D 07 43 78 */	mr r7, r8
/* 80014464 000113A4  80 63 00 88 */	lwz r3, 0x88(r3)
/* 80014468 000113A8  4B FF DB DD */	bl adaptor_data___Q214JStudio_JStage16TAdaptor_object_FPQ26JStage7TObjectPCvUlPCvUl
/* 8001446C 000113AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80014470 000113B0  7C 08 03 A6 */	mtlr r0
/* 80014474 000113B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80014478 000113B8  4E 80 00 20 */	blr 

.global "__sinit_object-fog_cpp"
"__sinit_object-fog_cpp":
/* 8001447C 000113BC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80014480 000113C0  7C 08 02 A6 */	mflr r0
/* 80014484 000113C4  3C 60 80 4A */	lis r3, lbl_8049F820@ha
/* 80014488 000113C8  3C 80 80 4A */	lis r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 8001448C 000113CC  90 01 00 84 */	stw r0, 0x84(r1)
/* 80014490 000113D0  3C A0 80 4A */	lis r5, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
/* 80014494 000113D4  3D 80 80 4F */	lis r12, lbl_804EFE68@ha
/* 80014498 000113D8  39 60 00 04 */	li r11, 4
/* 8001449C 000113DC  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 800144A0 000113E0  3B E3 F8 20 */	addi r31, r3, lbl_8049F820@l
/* 800144A4 000113E4  3C 60 80 50 */	lis r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
/* 800144A8 000113E8  93 C1 00 78 */	stw r30, 0x78(r1)
/* 800144AC 000113EC  3B CC FE 68 */	addi r30, r12, lbl_804EFE68@l
/* 800144B0 000113F0  39 85 F8 90 */	addi r12, r5, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
/* 800144B4 000113F4  93 A1 00 74 */	stw r29, 0x74(r1)
/* 800144B8 000113F8  3B A4 F4 98 */	addi r29, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 800144BC 000113FC  3C 80 80 01 */	lis r4, "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@ha
/* 800144C0 00011400  38 BE 00 00 */	addi r5, r30, 0
/* 800144C4 00011404  97 A3 6C D4 */	stwu r29, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l(r3)
/* 800144C8 00011408  38 84 46 A4 */	addi r4, r4, "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@l
/* 800144CC 0001140C  81 5F 00 00 */	lwz r10, 0(r31)
/* 800144D0 00011410  81 3F 00 04 */	lwz r9, 4(r31)
/* 800144D4 00011414  81 1F 00 08 */	lwz r8, 8(r31)
/* 800144D8 00011418  80 FF 00 0C */	lwz r7, 0xc(r31)
/* 800144DC 0001141C  80 DF 00 10 */	lwz r6, 0x10(r31)
/* 800144E0 00011420  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 800144E4 00011424  93 A1 00 48 */	stw r29, 0x48(r1)
/* 800144E8 00011428  91 81 00 48 */	stw r12, 0x48(r1)
/* 800144EC 0001142C  91 61 00 4C */	stw r11, 0x4c(r1)
/* 800144F0 00011430  91 41 00 50 */	stw r10, 0x50(r1)
/* 800144F4 00011434  91 21 00 54 */	stw r9, 0x54(r1)
/* 800144F8 00011438  91 01 00 58 */	stw r8, 0x58(r1)
/* 800144FC 0001143C  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80014500 00011440  90 C1 00 60 */	stw r6, 0x60(r1)
/* 80014504 00011444  90 01 00 64 */	stw r0, 0x64(r1)
/* 80014508 00011448  91 83 00 00 */	stw r12, 0(r3)
/* 8001450C 0001144C  91 63 00 04 */	stw r11, 4(r3)
/* 80014510 00011450  91 43 00 08 */	stw r10, 8(r3)
/* 80014514 00011454  91 23 00 0C */	stw r9, 0xc(r3)
/* 80014518 00011458  91 03 00 10 */	stw r8, 0x10(r3)
/* 8001451C 0001145C  90 E3 00 14 */	stw r7, 0x14(r3)
/* 80014520 00011460  90 C3 00 18 */	stw r6, 0x18(r3)
/* 80014524 00011464  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80014528 00011468  48 0A D1 D9 */	bl __register_global_object
/* 8001452C 0001146C  3C 80 80 4A */	lis r4, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
/* 80014530 00011470  38 61 00 48 */	addi r3, r1, 0x48
/* 80014534 00011474  38 04 F8 90 */	addi r0, r4, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
/* 80014538 00011478  38 80 00 00 */	li r4, 0
/* 8001453C 0001147C  90 01 00 48 */	stw r0, 0x48(r1)
/* 80014540 00011480  4B FF 8B 29 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80014544 00011484  3C 80 80 4A */	lis r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 80014548 00011488  3C 60 80 50 */	lis r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
/* 8001454C 0001148C  3B A4 F4 98 */	addi r29, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 80014550 00011490  81 5F 00 18 */	lwz r10, 0x18(r31)
/* 80014554 00011494  38 63 6C D4 */	addi r3, r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
/* 80014558 00011498  81 3F 00 1C */	lwz r9, 0x1c(r31)
/* 8001455C 0001149C  97 A3 00 20 */	stwu r29, 0x20(r3)
/* 80014560 000114A0  39 60 00 05 */	li r11, 5
/* 80014564 000114A4  81 1F 00 20 */	lwz r8, 0x20(r31)
/* 80014568 000114A8  3C A0 80 4A */	lis r5, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
/* 8001456C 000114AC  80 FF 00 24 */	lwz r7, 0x24(r31)
/* 80014570 000114B0  39 85 F8 90 */	addi r12, r5, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
/* 80014574 000114B4  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 80014578 000114B8  3C 80 80 01 */	lis r4, "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@ha
/* 8001457C 000114BC  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 80014580 000114C0  38 84 46 A4 */	addi r4, r4, "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@l
/* 80014584 000114C4  93 A1 00 28 */	stw r29, 0x28(r1)
/* 80014588 000114C8  38 BE 00 0C */	addi r5, r30, 0xc
/* 8001458C 000114CC  91 81 00 28 */	stw r12, 0x28(r1)
/* 80014590 000114D0  91 61 00 2C */	stw r11, 0x2c(r1)
/* 80014594 000114D4  91 41 00 30 */	stw r10, 0x30(r1)
/* 80014598 000114D8  91 21 00 34 */	stw r9, 0x34(r1)
/* 8001459C 000114DC  91 01 00 38 */	stw r8, 0x38(r1)
/* 800145A0 000114E0  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 800145A4 000114E4  90 C1 00 40 */	stw r6, 0x40(r1)
/* 800145A8 000114E8  90 01 00 44 */	stw r0, 0x44(r1)
/* 800145AC 000114EC  91 83 00 00 */	stw r12, 0(r3)
/* 800145B0 000114F0  91 63 00 04 */	stw r11, 4(r3)
/* 800145B4 000114F4  91 43 00 08 */	stw r10, 8(r3)
/* 800145B8 000114F8  91 23 00 0C */	stw r9, 0xc(r3)
/* 800145BC 000114FC  91 03 00 10 */	stw r8, 0x10(r3)
/* 800145C0 00011500  90 E3 00 14 */	stw r7, 0x14(r3)
/* 800145C4 00011504  90 C3 00 18 */	stw r6, 0x18(r3)
/* 800145C8 00011508  90 03 00 1C */	stw r0, 0x1c(r3)
/* 800145CC 0001150C  48 0A D1 35 */	bl __register_global_object
/* 800145D0 00011510  3C 80 80 4A */	lis r4, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
/* 800145D4 00011514  38 61 00 28 */	addi r3, r1, 0x28
/* 800145D8 00011518  38 04 F8 90 */	addi r0, r4, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
/* 800145DC 0001151C  38 80 00 00 */	li r4, 0
/* 800145E0 00011520  90 01 00 28 */	stw r0, 0x28(r1)
/* 800145E4 00011524  4B FF 8A 85 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 800145E8 00011528  3C 80 80 4A */	lis r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 800145EC 0001152C  3C 60 80 4A */	lis r3, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
/* 800145F0 00011530  39 64 F4 98 */	addi r11, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 800145F4 00011534  39 20 FF FF */	li r9, -1
/* 800145F8 00011538  91 61 00 08 */	stw r11, 8(r1)
/* 800145FC 0001153C  39 43 F8 90 */	addi r10, r3, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
/* 80014600 00011540  3C 80 80 48 */	lis r4, __ptmf_null@ha
/* 80014604 00011544  3C 60 80 50 */	lis r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
/* 80014608 00011548  91 41 00 08 */	stw r10, 8(r1)
/* 8001460C 0001154C  39 04 9F 10 */	addi r8, r4, __ptmf_null@l
/* 80014610 00011550  3C 80 80 01 */	lis r4, "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@ha
/* 80014614 00011554  80 E8 00 00 */	lwz r7, 0(r8)
/* 80014618 00011558  91 21 00 0C */	stw r9, 0xc(r1)
/* 8001461C 0001155C  38 63 6C D4 */	addi r3, r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
/* 80014620 00011560  38 84 46 A4 */	addi r4, r4, "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@l
/* 80014624 00011564  38 BE 00 18 */	addi r5, r30, 0x18
/* 80014628 00011568  80 C8 00 04 */	lwz r6, 4(r8)
/* 8001462C 0001156C  90 E1 00 10 */	stw r7, 0x10(r1)
/* 80014630 00011570  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80014634 00011574  80 08 00 08 */	lwz r0, 8(r8)
/* 80014638 00011578  95 63 00 40 */	stwu r11, 0x40(r3)
/* 8001463C 0001157C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80014640 00011580  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80014644 00011584  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80014648 00011588  90 01 00 24 */	stw r0, 0x24(r1)
/* 8001464C 0001158C  91 43 00 00 */	stw r10, 0(r3)
/* 80014650 00011590  91 23 00 04 */	stw r9, 4(r3)
/* 80014654 00011594  90 E3 00 08 */	stw r7, 8(r3)
/* 80014658 00011598  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8001465C 0001159C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80014660 000115A0  90 E3 00 14 */	stw r7, 0x14(r3)
/* 80014664 000115A4  90 C3 00 18 */	stw r6, 0x18(r3)
/* 80014668 000115A8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8001466C 000115AC  48 0A D0 95 */	bl __register_global_object
/* 80014670 000115B0  3C 80 80 4A */	lis r4, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
/* 80014674 000115B4  38 61 00 08 */	addi r3, r1, 8
/* 80014678 000115B8  38 04 F8 90 */	addi r0, r4, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
/* 8001467C 000115BC  38 80 00 00 */	li r4, 0
/* 80014680 000115C0  90 01 00 08 */	stw r0, 8(r1)
/* 80014684 000115C4  4B FF 89 E5 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80014688 000115C8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8001468C 000115CC  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80014690 000115D0  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80014694 000115D4  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80014698 000115D8  7C 08 03 A6 */	mtlr r0
/* 8001469C 000115DC  38 21 00 80 */	addi r1, r1, 0x80
/* 800146A0 000115E0  4E 80 00 20 */	blr 

.global "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"
"__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv":
/* 800146A4 000115E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800146A8 000115E8  7C 08 02 A6 */	mflr r0
/* 800146AC 000115EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800146B0 000115F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800146B4 000115F4  7C 9F 23 78 */	mr r31, r4
/* 800146B8 000115F8  93 C1 00 08 */	stw r30, 8(r1)
/* 800146BC 000115FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 800146C0 00011600  41 82 00 28 */	beq lbl_800146E8
/* 800146C4 00011604  3C A0 80 4A */	lis r5, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
/* 800146C8 00011608  38 80 00 00 */	li r4, 0
/* 800146CC 0001160C  38 05 F8 90 */	addi r0, r5, "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
/* 800146D0 00011610  90 1E 00 00 */	stw r0, 0(r30)
/* 800146D4 00011614  4B FF 89 95 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 800146D8 00011618  7F E0 07 35 */	extsh. r0, r31
/* 800146DC 0001161C  40 81 00 0C */	ble lbl_800146E8
/* 800146E0 00011620  7F C3 F3 78 */	mr r3, r30
/* 800146E4 00011624  48 00 F9 D1 */	bl __dl__FPv
lbl_800146E8:
/* 800146E8 00011628  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800146EC 0001162C  7F C3 F3 78 */	mr r3, r30
/* 800146F0 00011630  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800146F4 00011634  83 C1 00 08 */	lwz r30, 8(r1)
/* 800146F8 00011638  7C 08 03 A6 */	mtlr r0
/* 800146FC 0001163C  38 21 00 10 */	addi r1, r1, 0x10
/* 80014700 00011640  4E 80 00 20 */	blr 

.global "__cl__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>CFfPQ27JStudio8TAdaptor"
"__cl__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>CFfPQ27JStudio8TAdaptor":
/* 80014704 00011644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80014708 00011648  7C 08 02 A6 */	mflr r0
/* 8001470C 0001164C  7C 65 1B 78 */	mr r5, r3
/* 80014710 00011650  90 01 00 14 */	stw r0, 0x14(r1)
/* 80014714 00011654  39 85 00 08 */	addi r12, r5, 8
/* 80014718 00011658  80 64 00 88 */	lwz r3, 0x88(r4)
/* 8001471C 0001165C  48 0A D4 09 */	bl __ptmf_scall
/* 80014720 00011660  60 00 00 00 */	nop 
/* 80014724 00011664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80014728 00011668  7C 08 03 A6 */	mtlr r0
/* 8001472C 0001166C  38 21 00 10 */	addi r1, r1, 0x10
/* 80014730 00011670  4E 80 00 20 */	blr 
