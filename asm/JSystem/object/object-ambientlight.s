.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q214JStudio_JStage21TAdaptor_ambientLight
__vt__Q214JStudio_JStage21TAdaptor_ambientLight:
	.4byte 0
	.4byte 0
	.4byte __dt__Q214JStudio_JStage21TAdaptor_ambientLightFv
	.4byte adaptor_do_prepare__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
	.4byte adaptor_do_begin__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
	.4byte adaptor_do_end__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
	.4byte adaptor_do_update__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectUl
	.4byte adaptor_do_data__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectPCvUlPCvUl

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ26JStage7TSystemPQ26JStage13TAmbientLight
__ct__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ26JStage7TSystemPQ26JStage13TAmbientLight:
/* 8001318C 000100CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80013190 000100D0  7C 08 02 A6 */	mflr r0
/* 80013194 000100D4  3C C0 80 4A */	lis r6, __vt__Q27JStudio8TAdaptor@ha
/* 80013198 000100D8  3C E0 80 4A */	lis r7, __vt__Q27JStudio21TAdaptor_ambientLight@ha
/* 8001319C 000100DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800131A0 000100E0  38 06 F4 68 */	addi r0, r6, __vt__Q27JStudio8TAdaptor@l
/* 800131A4 000100E4  3C C0 80 00 */	lis r6, __ct__Q27JStudio14TVariableValueFv@ha
/* 800131A8 000100E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800131AC 000100EC  7C BF 2B 78 */	mr r31, r5
/* 800131B0 000100F0  38 A7 F3 B8 */	addi r5, r7, __vt__Q27JStudio21TAdaptor_ambientLight@l
/* 800131B4 000100F4  38 E0 00 04 */	li r7, 4
/* 800131B8 000100F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800131BC 000100FC  7C 9E 23 78 */	mr r30, r4
/* 800131C0 00010100  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800131C4 00010104  7C 7D 1B 78 */	mr r29, r3
/* 800131C8 00010108  7F A8 EB 78 */	mr r8, r29
/* 800131CC 0001010C  90 03 00 00 */	stw r0, 0(r3)
/* 800131D0 00010110  38 68 00 0C */	addi r3, r8, 0xc
/* 800131D4 00010114  38 00 00 04 */	li r0, 4
/* 800131D8 00010118  90 7D 00 04 */	stw r3, 4(r29)
/* 800131DC 0001011C  90 1D 00 08 */	stw r0, 8(r29)
/* 800131E0 00010120  38 06 58 08 */	addi r0, r6, __ct__Q27JStudio14TVariableValueFv@l
/* 800131E4 00010124  7C 04 03 78 */	mr r4, r0
/* 800131E8 00010128  38 C0 00 14 */	li r6, 0x14
/* 800131EC 0001012C  90 BD 00 00 */	stw r5, 0(r29)
/* 800131F0 00010130  38 A0 00 00 */	li r5, 0
/* 800131F4 00010134  48 0A E6 49 */	bl __construct_array
/* 800131F8 00010138  3C 80 80 4A */	lis r4, __vt__Q214JStudio_JStage21TAdaptor_ambientLight@ha
/* 800131FC 0001013C  7F A3 EB 78 */	mr r3, r29
/* 80013200 00010140  38 04 F7 08 */	addi r0, r4, __vt__Q214JStudio_JStage21TAdaptor_ambientLight@l
/* 80013204 00010144  90 1D 00 00 */	stw r0, 0(r29)
/* 80013208 00010148  93 DD 00 5C */	stw r30, 0x5c(r29)
/* 8001320C 0001014C  93 FD 00 60 */	stw r31, 0x60(r29)
/* 80013210 00010150  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80013214 00010154  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80013218 00010158  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8001321C 0001015C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80013220 00010160  7C 08 03 A6 */	mtlr r0
/* 80013224 00010164  38 21 00 20 */	addi r1, r1, 0x20
/* 80013228 00010168  4E 80 00 20 */	blr 

.global __dt__Q214JStudio_JStage21TAdaptor_ambientLightFv
__dt__Q214JStudio_JStage21TAdaptor_ambientLightFv:
/* 8001322C 0001016C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80013230 00010170  7C 08 02 A6 */	mflr r0
/* 80013234 00010174  90 01 00 14 */	stw r0, 0x14(r1)
/* 80013238 00010178  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001323C 0001017C  7C 9F 23 78 */	mr r31, r4
/* 80013240 00010180  93 C1 00 08 */	stw r30, 8(r1)
/* 80013244 00010184  7C 7E 1B 79 */	or. r30, r3, r3
/* 80013248 00010188  41 82 00 40 */	beq lbl_80013288
/* 8001324C 0001018C  3C A0 80 4A */	lis r5, __vt__Q214JStudio_JStage21TAdaptor_ambientLight@ha
/* 80013250 00010190  38 80 00 00 */	li r4, 0
/* 80013254 00010194  38 05 F7 08 */	addi r0, r5, __vt__Q214JStudio_JStage21TAdaptor_ambientLight@l
/* 80013258 00010198  90 1E 00 00 */	stw r0, 0(r30)
/* 8001325C 0001019C  81 83 00 00 */	lwz r12, 0(r3)
/* 80013260 000101A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80013264 000101A4  7D 89 03 A6 */	mtctr r12
/* 80013268 000101A8  4E 80 04 21 */	bctrl 
/* 8001326C 000101AC  7F C3 F3 78 */	mr r3, r30
/* 80013270 000101B0  38 80 00 00 */	li r4, 0
/* 80013274 000101B4  4B FF AB 61 */	bl __dt__Q27JStudio21TAdaptor_ambientLightFv
/* 80013278 000101B8  7F E0 07 35 */	extsh. r0, r31
/* 8001327C 000101BC  40 81 00 0C */	ble lbl_80013288
/* 80013280 000101C0  7F C3 F3 78 */	mr r3, r30
/* 80013284 000101C4  48 01 0E 31 */	bl __dl__FPv
lbl_80013288:
/* 80013288 000101C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001328C 000101CC  7F C3 F3 78 */	mr r3, r30
/* 80013290 000101D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80013294 000101D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80013298 000101D8  7C 08 03 A6 */	mtlr r0
/* 8001329C 000101DC  38 21 00 10 */	addi r1, r1, 0x10
/* 800132A0 000101E0  4E 80 00 20 */	blr 

.global adaptor_do_prepare__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
adaptor_do_prepare__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject:
/* 800132A4 000101E4  4E 80 00 20 */	blr 

.global adaptor_do_begin__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
adaptor_do_begin__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject:
/* 800132A8 000101E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800132AC 000101EC  7C 08 02 A6 */	mflr r0
/* 800132B0 000101F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800132B4 000101F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800132B8 000101F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800132BC 000101FC  7C 7E 1B 78 */	mr r30, r3
/* 800132C0 00010200  83 E3 00 60 */	lwz r31, 0x60(r3)
/* 800132C4 00010204  81 9F 00 00 */	lwz r12, 0(r31)
/* 800132C8 00010208  7F E3 FB 78 */	mr r3, r31
/* 800132CC 0001020C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800132D0 00010210  7D 89 03 A6 */	mtctr r12
/* 800132D4 00010214  4E 80 04 21 */	bctrl 
/* 800132D8 00010218  81 9F 00 00 */	lwz r12, 0(r31)
/* 800132DC 0001021C  60 64 00 01 */	ori r4, r3, 1
/* 800132E0 00010220  7F E3 FB 78 */	mr r3, r31
/* 800132E4 00010224  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800132E8 00010228  7D 89 03 A6 */	mtctr r12
/* 800132EC 0001022C  4E 80 04 21 */	bctrl 
/* 800132F0 00010230  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 800132F4 00010234  81 83 00 00 */	lwz r12, 0(r3)
/* 800132F8 00010238  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 800132FC 0001023C  7D 89 03 A6 */	mtctr r12
/* 80013300 00010240  4E 80 04 21 */	bctrl 
/* 80013304 00010244  3C 80 80 47 */	lis r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio21TAdaptor_ambientLight@ha
/* 80013308 00010248  90 61 00 08 */	stw r3, 8(r1)
/* 8001330C 0001024C  38 84 33 80 */	addi r4, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio21TAdaptor_ambientLight@l
/* 80013310 00010250  7F C3 F3 78 */	mr r3, r30
/* 80013314 00010254  38 A1 00 08 */	addi r5, r1, 8
/* 80013318 00010258  4B FF A0 4D */	bl adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor
/* 8001331C 0001025C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80013320 00010260  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80013324 00010264  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80013328 00010268  7C 08 03 A6 */	mtlr r0
/* 8001332C 0001026C  38 21 00 20 */	addi r1, r1, 0x20
/* 80013330 00010270  4E 80 00 20 */	blr 

.global adaptor_do_end__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject
adaptor_do_end__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObject:
/* 80013334 00010274  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80013338 00010278  7C 08 02 A6 */	mflr r0
/* 8001333C 0001027C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80013340 00010280  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80013344 00010284  83 E3 00 60 */	lwz r31, 0x60(r3)
/* 80013348 00010288  81 9F 00 00 */	lwz r12, 0(r31)
/* 8001334C 0001028C  7F E3 FB 78 */	mr r3, r31
/* 80013350 00010290  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80013354 00010294  7D 89 03 A6 */	mtctr r12
/* 80013358 00010298  4E 80 04 21 */	bctrl 
/* 8001335C 0001029C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80013360 000102A0  54 64 00 3C */	rlwinm r4, r3, 0, 0, 0x1e
/* 80013364 000102A4  7F E3 FB 78 */	mr r3, r31
/* 80013368 000102A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8001336C 000102AC  7D 89 03 A6 */	mtctr r12
/* 80013370 000102B0  4E 80 04 21 */	bctrl 
/* 80013374 000102B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80013378 000102B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001337C 000102BC  7C 08 03 A6 */	mtlr r0
/* 80013380 000102C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80013384 000102C4  4E 80 00 20 */	blr 

.global adaptor_do_update__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectUl
adaptor_do_update__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectUl:
/* 80013388 000102C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8001338C 000102CC  7C 08 02 A6 */	mflr r0
/* 80013390 000102D0  3C 80 80 47 */	lis r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio21TAdaptor_ambientLight@ha
/* 80013394 000102D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80013398 000102D8  38 A4 33 80 */	addi r5, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio21TAdaptor_ambientLight@l
/* 8001339C 000102DC  38 81 00 0C */	addi r4, r1, 0xc
/* 800133A0 000102E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800133A4 000102E4  7C 7F 1B 78 */	mr r31, r3
/* 800133A8 000102E8  4B FF A0 9D */	bl adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl
/* 800133AC 000102EC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800133B0 000102F0  38 81 00 08 */	addi r4, r1, 8
/* 800133B4 000102F4  90 01 00 08 */	stw r0, 8(r1)
/* 800133B8 000102F8  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 800133BC 000102FC  81 83 00 00 */	lwz r12, 0(r3)
/* 800133C0 00010300  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 800133C4 00010304  7D 89 03 A6 */	mtctr r12
/* 800133C8 00010308  4E 80 04 21 */	bctrl 
/* 800133CC 0001030C  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 800133D0 00010310  81 83 00 00 */	lwz r12, 0(r3)
/* 800133D4 00010314  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800133D8 00010318  7D 89 03 A6 */	mtctr r12
/* 800133DC 0001031C  4E 80 04 21 */	bctrl 
/* 800133E0 00010320  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800133E4 00010324  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800133E8 00010328  7C 08 03 A6 */	mtlr r0
/* 800133EC 0001032C  38 21 00 20 */	addi r1, r1, 0x20
/* 800133F0 00010330  4E 80 00 20 */	blr 

.global adaptor_do_data__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectPCvUlPCvUl
adaptor_do_data__Q214JStudio_JStage21TAdaptor_ambientLightFPCQ27JStudio7TObjectPCvUlPCvUl:
/* 800133F4 00010334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800133F8 00010338  7C 08 02 A6 */	mflr r0
/* 800133FC 0001033C  7C A4 2B 78 */	mr r4, r5
/* 80013400 00010340  7C C5 33 78 */	mr r5, r6
/* 80013404 00010344  90 01 00 14 */	stw r0, 0x14(r1)
/* 80013408 00010348  7C E6 3B 78 */	mr r6, r7
/* 8001340C 0001034C  7D 07 43 78 */	mr r7, r8
/* 80013410 00010350  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80013414 00010354  4B FF EC 31 */	bl adaptor_data___Q214JStudio_JStage16TAdaptor_object_FPQ26JStage7TObjectPCvUlPCvUl
/* 80013418 00010358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001341C 0001035C  7C 08 03 A6 */	mtlr r0
/* 80013420 00010360  38 21 00 10 */	addi r1, r1, 0x10
/* 80013424 00010364  4E 80 00 20 */	blr 
