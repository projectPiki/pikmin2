.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804732E0, local # first rodata entry of the DOL
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_804732E0

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_Fv
	.4byte execute__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_FP14JPABaseEmitter
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
.endobj __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_
.obj __vt__Q217JStudio_JParticle17TAdaptor_particle, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q217JStudio_JParticle17TAdaptor_particleFv
	.4byte adaptor_do_prepare__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject
	.4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
	.4byte adaptor_do_end__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject
	.4byte adaptor_do_update__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObjectUl
	.4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
	.4byte adaptor_do_PARTICLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_BEGIN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_BEGIN_FADE_IN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_END__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_END_FADE_OUT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_PARENT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_PARENT_NODE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_PARENT_ENABLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl
.endobj __vt__Q217JStudio_JParticle17TAdaptor_particle
.obj __vt__18JPAEmitterCallBack, weak
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
.endobj __vt__18JPAEmitterCallBack
.obj __vt__Q27JStudio17TAdaptor_particle, weak
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
	.4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
	.4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
	.4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
	.4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__Q27JStudio17TAdaptor_particle

.section .bss  # 0x804EFC20 - 0x8051467C
.lcomm aoData$1232, 0x90, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj init$1233, local
	.skip 0x1
.endobj init$1233

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516360, local
	.float 0.0
.endobj lbl_80516360
.obj lbl_80516364, local
	.float 1.0
.endobj lbl_80516364
.obj lbl_80516368, local
	.float 255.0
.endobj lbl_80516368
.balign 8
.obj lbl_80516370, local
	.double 1.0
.endobj lbl_80516370
.balign 8
.obj lbl_80516378, local
	.double 65536.0
.endobj lbl_80516378
.balign 8
.obj lbl_80516380, local
	.double 360.0
.endobj lbl_80516380
.balign 8
.obj lbl_80516388, local
	.double 255.0
.endobj lbl_80516388
.balign 8
.obj lbl_80516390, local
	.8byte 0x4330000000000000
.endobj lbl_80516390

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q217JStudio_JParticle17TAdaptor_particleFP17JPAEmitterManagerPCQ26JStage7TSystem, global
/* 800056C0 00002600  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800056C4 00002604  7C 08 02 A6 */	mflr r0
/* 800056C8 00002608  3C C0 80 4A */	lis r6, __vt__Q27JStudio8TAdaptor@ha
/* 800056CC 0000260C  3C E0 80 4A */	lis r7, __vt__Q27JStudio17TAdaptor_particle@ha
/* 800056D0 00002610  90 01 00 24 */	stw r0, 0x24(r1)
/* 800056D4 00002614  38 06 F4 68 */	addi r0, r6, __vt__Q27JStudio8TAdaptor@l
/* 800056D8 00002618  3C C0 80 00 */	lis r6, __ct__Q27JStudio14TVariableValueFv@ha
/* 800056DC 0000261C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800056E0 00002620  7C 7F 1B 78 */	mr r31, r3
/* 800056E4 00002624  7F E8 FB 78 */	mr r8, r31
/* 800056E8 00002628  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800056EC 0000262C  7C BE 2B 78 */	mr r30, r5
/* 800056F0 00002630  38 A7 E2 98 */	addi r5, r7, __vt__Q27JStudio17TAdaptor_particle@l
/* 800056F4 00002634  38 E0 00 12 */	li r7, 0x12
/* 800056F8 00002638  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800056FC 0000263C  7C 9D 23 78 */	mr r29, r4
/* 80005700 00002640  90 03 00 00 */	stw r0, 0(r3)
/* 80005704 00002644  38 68 00 0C */	addi r3, r8, 0xc
/* 80005708 00002648  38 00 00 12 */	li r0, 0x12
/* 8000570C 0000264C  90 7F 00 04 */	stw r3, 4(r31)
/* 80005710 00002650  90 1F 00 08 */	stw r0, 8(r31)
/* 80005714 00002654  38 06 58 08 */	addi r0, r6, __ct__Q27JStudio14TVariableValueFv@l
/* 80005718 00002658  7C 04 03 78 */	mr r4, r0
/* 8000571C 0000265C  38 C0 00 14 */	li r6, 0x14
/* 80005720 00002660  90 BF 00 00 */	stw r5, 0(r31)
/* 80005724 00002664  38 A0 00 00 */	li r5, 0
/* 80005728 00002668  48 0B C1 15 */	bl __construct_array
/* 8000572C 0000266C  3C 60 80 4A */	lis r3, __vt__Q217JStudio_JParticle17TAdaptor_particle@ha
/* 80005730 00002670  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 80005734 00002674  38 03 E2 3C */	addi r0, r3, __vt__Q217JStudio_JParticle17TAdaptor_particle@l
/* 80005738 00002678  3C 60 80 4A */	lis r3, __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_@ha
/* 8000573C 0000267C  90 1F 00 00 */	stw r0, 0(r31)
/* 80005740 00002680  38 C0 00 00 */	li r6, 0
/* 80005744 00002684  38 A4 E2 7C */	addi r5, r4, __vt__18JPAEmitterCallBack@l
/* 80005748 00002688  38 83 E2 20 */	addi r4, r3, __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_@l
/* 8000574C 0000268C  93 BF 01 74 */	stw r29, 0x174(r31)
/* 80005750 00002690  38 00 FF FF */	li r0, -1
/* 80005754 00002694  7F E3 FB 78 */	mr r3, r31
/* 80005758 00002698  90 DF 01 78 */	stw r6, 0x178(r31)
/* 8000575C 0000269C  90 BF 01 7C */	stw r5, 0x17c(r31)
/* 80005760 000026A0  90 9F 01 7C */	stw r4, 0x17c(r31)
/* 80005764 000026A4  93 FF 01 80 */	stw r31, 0x180(r31)
/* 80005768 000026A8  90 DF 01 84 */	stw r6, 0x184(r31)
/* 8000576C 000026AC  90 1F 01 88 */	stw r0, 0x188(r31)
/* 80005770 000026B0  90 DF 01 8C */	stw r6, 0x18c(r31)
/* 80005774 000026B4  90 DF 01 90 */	stw r6, 0x190(r31)
/* 80005778 000026B8  90 DF 01 94 */	stw r6, 0x194(r31)
/* 8000577C 000026BC  93 DF 01 98 */	stw r30, 0x198(r31)
/* 80005780 000026C0  90 DF 01 9C */	stw r6, 0x19c(r31)
/* 80005784 000026C4  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 80005788 000026C8  98 DF 01 A4 */	stb r6, 0x1a4(r31)
/* 8000578C 000026CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80005790 000026D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80005794 000026D4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80005798 000026D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8000579C 000026DC  7C 08 03 A6 */	mtlr r0
/* 800057A0 000026E0  38 21 00 20 */	addi r1, r1, 0x20
/* 800057A4 000026E4  4E 80 00 20 */	blr 
.endfn __ct__Q217JStudio_JParticle17TAdaptor_particleFP17JPAEmitterManagerPCQ26JStage7TSystem

.fn __dt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_Fv, weak
/* 800057A8 000026E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800057AC 000026EC  7C 08 02 A6 */	mflr r0
/* 800057B0 000026F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800057B4 000026F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800057B8 000026F8  7C 9F 23 78 */	mr r31, r4
/* 800057BC 000026FC  93 C1 00 08 */	stw r30, 8(r1)
/* 800057C0 00002700  7C 7E 1B 79 */	or. r30, r3, r3
/* 800057C4 00002704  41 82 00 28 */	beq .L_800057EC
/* 800057C8 00002708  3C A0 80 4A */	lis r5, __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_@ha
/* 800057CC 0000270C  38 80 00 00 */	li r4, 0
/* 800057D0 00002710  38 05 E2 20 */	addi r0, r5, __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_@l
/* 800057D4 00002714  90 1E 00 00 */	stw r0, 0(r30)
/* 800057D8 00002718  48 08 A4 C5 */	bl __dt__18JPAEmitterCallBackFv
/* 800057DC 0000271C  7F E0 07 35 */	extsh. r0, r31
/* 800057E0 00002720  40 81 00 0C */	ble .L_800057EC
/* 800057E4 00002724  7F C3 F3 78 */	mr r3, r30
/* 800057E8 00002728  48 01 E8 CD */	bl __dl__FPv
.L_800057EC:
/* 800057EC 0000272C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800057F0 00002730  7F C3 F3 78 */	mr r3, r30
/* 800057F4 00002734  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800057F8 00002738  83 C1 00 08 */	lwz r30, 8(r1)
/* 800057FC 0000273C  7C 08 03 A6 */	mtlr r0
/* 80005800 00002740  38 21 00 10 */	addi r1, r1, 0x10
/* 80005804 00002744  4E 80 00 20 */	blr 
.endfn __dt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_Fv

.fn __ct__Q27JStudio14TVariableValueFv, weak
/* 80005808 00002748  38 80 00 00 */	li r4, 0
/* 8000580C 0000274C  38 0D 87 10 */	addi r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21
/* 80005810 00002750  90 83 00 04 */	stw r4, 4(r3)
/* 80005814 00002754  90 83 00 08 */	stw r4, 8(r3)
/* 80005818 00002758  90 03 00 10 */	stw r0, 0x10(r3)
/* 8000581C 0000275C  4E 80 00 20 */	blr 
.endfn __ct__Q27JStudio14TVariableValueFv

.fn __dt__Q217JStudio_JParticle17TAdaptor_particleFv, global
/* 80005820 00002760  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80005824 00002764  7C 08 02 A6 */	mflr r0
/* 80005828 00002768  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000582C 0000276C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80005830 00002770  7C 9F 23 78 */	mr r31, r4
/* 80005834 00002774  93 C1 00 08 */	stw r30, 8(r1)
/* 80005838 00002778  7C 7E 1B 79 */	or. r30, r3, r3
/* 8000583C 0000277C  41 82 00 60 */	beq .L_8000589C
/* 80005840 00002780  3C 60 80 4A */	lis r3, __vt__Q217JStudio_JParticle17TAdaptor_particle@ha
/* 80005844 00002784  38 03 E2 3C */	addi r0, r3, __vt__Q217JStudio_JParticle17TAdaptor_particle@l
/* 80005848 00002788  90 1E 00 00 */	stw r0, 0(r30)
/* 8000584C 0000278C  80 9E 01 78 */	lwz r4, 0x178(r30)
/* 80005850 00002790  28 04 00 00 */	cmplwi r4, 0
/* 80005854 00002794  41 82 00 0C */	beq .L_80005860
/* 80005858 00002798  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8000585C 0000279C  48 08 B4 A5 */	bl forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter
.L_80005860:
/* 80005860 000027A0  34 1E 01 7C */	addic. r0, r30, 0x17c
/* 80005864 000027A4  41 82 00 1C */	beq .L_80005880
/* 80005868 000027A8  3C 80 80 4A */	lis r4, __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_@ha
/* 8000586C 000027AC  38 7E 01 7C */	addi r3, r30, 0x17c
/* 80005870 000027B0  38 04 E2 20 */	addi r0, r4, __vt__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_@l
/* 80005874 000027B4  38 80 00 00 */	li r4, 0
/* 80005878 000027B8  90 1E 01 7C */	stw r0, 0x17c(r30)
/* 8000587C 000027BC  48 08 A4 21 */	bl __dt__18JPAEmitterCallBackFv
.L_80005880:
/* 80005880 000027C0  7F C3 F3 78 */	mr r3, r30
/* 80005884 000027C4  38 80 00 00 */	li r4, 0
/* 80005888 000027C8  48 00 94 8D */	bl __dt__Q27JStudio17TAdaptor_particleFv
/* 8000588C 000027CC  7F E0 07 35 */	extsh. r0, r31
/* 80005890 000027D0  40 81 00 0C */	ble .L_8000589C
/* 80005894 000027D4  7F C3 F3 78 */	mr r3, r30
/* 80005898 000027D8  48 01 E8 1D */	bl __dl__FPv
.L_8000589C:
/* 8000589C 000027DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800058A0 000027E0  7F C3 F3 78 */	mr r3, r30
/* 800058A4 000027E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800058A8 000027E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 800058AC 000027EC  7C 08 03 A6 */	mtlr r0
/* 800058B0 000027F0  38 21 00 10 */	addi r1, r1, 0x10
/* 800058B4 000027F4  4E 80 00 20 */	blr 
.endfn __dt__Q217JStudio_JParticle17TAdaptor_particleFv

.fn adaptor_do_prepare__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject, global
/* 800058B8 000027F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800058BC 000027FC  7C 08 02 A6 */	mflr r0
/* 800058C0 00002800  90 01 00 34 */	stw r0, 0x34(r1)
/* 800058C4 00002804  BE C1 00 08 */	stmw r22, 8(r1)
/* 800058C8 00002808  7C 7E 1B 78 */	mr r30, r3
/* 800058CC 0000280C  7C 9F 23 78 */	mr r31, r4
/* 800058D0 00002810  88 0D 87 00 */	lbz r0, init$1233@sda21(r13)
/* 800058D4 00002814  7C 00 07 75 */	extsb. r0, r0
/* 800058D8 00002818  40 82 00 FC */	bne .L_800059D4
/* 800058DC 0000281C  3C 60 80 51 */	lis r3, __float_nan@ha
/* 800058E0 00002820  3C 80 80 4F */	lis r4, aoData$1232@ha
/* 800058E4 00002824  C0 63 48 B0 */	lfs f3, __float_nan@l(r3)
/* 800058E8 00002828  3A E4 FC 20 */	addi r23, r4, aoData$1232@l
/* 800058EC 0000282C  C0 02 80 08 */	lfs f0, lbl_80516368@sda21(r2)
/* 800058F0 00002830  3B 00 00 01 */	li r24, 1
/* 800058F4 00002834  C0 42 80 00 */	lfs f2, lbl_80516360@sda21(r2)
/* 800058F8 00002838  3A C0 00 00 */	li r22, 0
/* 800058FC 0000283C  C0 22 80 04 */	lfs f1, lbl_80516364@sda21(r2)
/* 80005900 00002840  3B 20 00 02 */	li r25, 2
/* 80005904 00002844  3B 40 00 03 */	li r26, 3
/* 80005908 00002848  3B 60 00 04 */	li r27, 4
/* 8000590C 0000284C  3B 80 00 05 */	li r28, 5
/* 80005910 00002850  3B A0 00 06 */	li r29, 6
/* 80005914 00002854  39 80 00 07 */	li r12, 7
/* 80005918 00002858  39 60 00 08 */	li r11, 8
/* 8000591C 0000285C  39 40 00 09 */	li r10, 9
/* 80005920 00002860  39 20 00 0A */	li r9, 0xa
/* 80005924 00002864  39 00 00 0B */	li r8, 0xb
/* 80005928 00002868  38 E0 00 0C */	li r7, 0xc
/* 8000592C 0000286C  38 C0 00 0D */	li r6, 0xd
/* 80005930 00002870  38 A0 00 0E */	li r5, 0xe
/* 80005934 00002874  38 80 00 0F */	li r4, 0xf
/* 80005938 00002878  38 60 00 10 */	li r3, 0x10
/* 8000593C 0000287C  38 00 FF FF */	li r0, -1
/* 80005940 00002880  92 D7 00 00 */	stw r22, 0(r23)
/* 80005944 00002884  D0 57 00 04 */	stfs f2, 4(r23)
/* 80005948 00002888  93 17 00 08 */	stw r24, 8(r23)
/* 8000594C 0000288C  D0 57 00 0C */	stfs f2, 0xc(r23)
/* 80005950 00002890  93 37 00 10 */	stw r25, 0x10(r23)
/* 80005954 00002894  D0 57 00 14 */	stfs f2, 0x14(r23)
/* 80005958 00002898  93 57 00 18 */	stw r26, 0x18(r23)
/* 8000595C 0000289C  D0 57 00 1C */	stfs f2, 0x1c(r23)
/* 80005960 000028A0  93 77 00 20 */	stw r27, 0x20(r23)
/* 80005964 000028A4  D0 57 00 24 */	stfs f2, 0x24(r23)
/* 80005968 000028A8  93 97 00 28 */	stw r28, 0x28(r23)
/* 8000596C 000028AC  D0 57 00 2C */	stfs f2, 0x2c(r23)
/* 80005970 000028B0  93 B7 00 30 */	stw r29, 0x30(r23)
/* 80005974 000028B4  D0 37 00 34 */	stfs f1, 0x34(r23)
/* 80005978 000028B8  91 97 00 38 */	stw r12, 0x38(r23)
/* 8000597C 000028BC  D0 37 00 3C */	stfs f1, 0x3c(r23)
/* 80005980 000028C0  91 77 00 40 */	stw r11, 0x40(r23)
/* 80005984 000028C4  D0 37 00 44 */	stfs f1, 0x44(r23)
/* 80005988 000028C8  91 57 00 48 */	stw r10, 0x48(r23)
/* 8000598C 000028CC  D0 17 00 4C */	stfs f0, 0x4c(r23)
/* 80005990 000028D0  91 37 00 50 */	stw r9, 0x50(r23)
/* 80005994 000028D4  D0 17 00 54 */	stfs f0, 0x54(r23)
/* 80005998 000028D8  91 17 00 58 */	stw r8, 0x58(r23)
/* 8000599C 000028DC  D0 17 00 5C */	stfs f0, 0x5c(r23)
/* 800059A0 000028E0  90 F7 00 60 */	stw r7, 0x60(r23)
/* 800059A4 000028E4  D0 17 00 64 */	stfs f0, 0x64(r23)
/* 800059A8 000028E8  90 D7 00 68 */	stw r6, 0x68(r23)
/* 800059AC 000028EC  D0 17 00 6C */	stfs f0, 0x6c(r23)
/* 800059B0 000028F0  90 B7 00 70 */	stw r5, 0x70(r23)
/* 800059B4 000028F4  D0 17 00 74 */	stfs f0, 0x74(r23)
/* 800059B8 000028F8  90 97 00 78 */	stw r4, 0x78(r23)
/* 800059BC 000028FC  D0 17 00 7C */	stfs f0, 0x7c(r23)
/* 800059C0 00002900  90 77 00 80 */	stw r3, 0x80(r23)
/* 800059C4 00002904  D0 17 00 84 */	stfs f0, 0x84(r23)
/* 800059C8 00002908  90 17 00 88 */	stw r0, 0x88(r23)
/* 800059CC 0000290C  D0 77 00 8C */	stfs f3, 0x8c(r23)
/* 800059D0 00002910  9B 0D 87 00 */	stb r24, init$1233@sda21(r13)
.L_800059D4:
/* 800059D4 00002914  3C 80 80 4F */	lis r4, aoData$1232@ha
/* 800059D8 00002918  7F C3 F3 78 */	mr r3, r30
/* 800059DC 0000291C  38 84 FC 20 */	addi r4, r4, aoData$1232@l
/* 800059E0 00002920  48 00 78 99 */	bl adaptor_setVariableValue_immediate__Q27JStudio8TAdaptorFPCQ37JStudio8TAdaptor27TSetVariableValue_immediate
/* 800059E4 00002924  93 FE 01 84 */	stw r31, 0x184(r30)
/* 800059E8 00002928  BA C1 00 08 */	lmw r22, 8(r1)
/* 800059EC 0000292C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800059F0 00002930  7C 08 03 A6 */	mtlr r0
/* 800059F4 00002934  38 21 00 30 */	addi r1, r1, 0x30
/* 800059F8 00002938  4E 80 00 20 */	blr 
.endfn adaptor_do_prepare__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject

.fn adaptor_do_end__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject, global
/* 800059FC 0000293C  4E 80 00 20 */	blr 
.endfn adaptor_do_end__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObject

.fn adaptor_do_update__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObjectUl, global
/* 80005A00 00002940  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80005A04 00002944  7C 08 02 A6 */	mflr r0
/* 80005A08 00002948  90 01 00 14 */	stw r0, 0x14(r1)
/* 80005A0C 0000294C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80005A10 00002950  7C 7F 1B 78 */	mr r31, r3
/* 80005A14 00002954  80 63 01 90 */	lwz r3, 0x190(r3)
/* 80005A18 00002958  28 03 00 00 */	cmplwi r3, 0
/* 80005A1C 0000295C  41 82 00 80 */	beq .L_80005A9C
/* 80005A20 00002960  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 80005A24 00002964  7C 00 18 40 */	cmplw r0, r3
/* 80005A28 00002968  40 80 00 74 */	bge .L_80005A9C
/* 80005A2C 0000296C  7C 00 2A 14 */	add r0, r0, r5
/* 80005A30 00002970  90 1F 01 94 */	stw r0, 0x194(r31)
/* 80005A34 00002974  80 7F 01 94 */	lwz r3, 0x194(r31)
/* 80005A38 00002978  80 1F 01 90 */	lwz r0, 0x190(r31)
/* 80005A3C 0000297C  7C 03 00 40 */	cmplw r3, r0
/* 80005A40 00002980  41 80 00 5C */	blt .L_80005A9C
/* 80005A44 00002984  80 1F 01 8C */	lwz r0, 0x18c(r31)
/* 80005A48 00002988  2C 00 00 02 */	cmpwi r0, 2
/* 80005A4C 0000298C  41 82 00 44 */	beq .L_80005A90
/* 80005A50 00002990  40 80 00 10 */	bge .L_80005A60
/* 80005A54 00002994  2C 00 00 01 */	cmpwi r0, 1
/* 80005A58 00002998  40 80 00 14 */	bge .L_80005A6C
/* 80005A5C 0000299C  48 00 00 34 */	b .L_80005A90
.L_80005A60:
/* 80005A60 000029A0  2C 00 00 04 */	cmpwi r0, 4
/* 80005A64 000029A4  40 80 00 2C */	bge .L_80005A90
/* 80005A68 000029A8  48 00 00 10 */	b .L_80005A78
.L_80005A6C:
/* 80005A6C 000029AC  38 00 00 02 */	li r0, 2
/* 80005A70 000029B0  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 80005A74 000029B4  48 00 00 1C */	b .L_80005A90
.L_80005A78:
/* 80005A78 000029B8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 80005A7C 000029BC  80 9F 01 78 */	lwz r4, 0x178(r31)
/* 80005A80 000029C0  48 08 B2 81 */	bl forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter
/* 80005A84 000029C4  38 00 00 00 */	li r0, 0
/* 80005A88 000029C8  90 1F 01 78 */	stw r0, 0x178(r31)
/* 80005A8C 000029CC  90 1F 01 8C */	stw r0, 0x18c(r31)
.L_80005A90:
/* 80005A90 000029D0  38 00 00 00 */	li r0, 0
/* 80005A94 000029D4  90 1F 01 90 */	stw r0, 0x190(r31)
/* 80005A98 000029D8  90 1F 01 94 */	stw r0, 0x194(r31)
.L_80005A9C:
/* 80005A9C 000029DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80005AA0 000029E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80005AA4 000029E4  7C 08 03 A6 */	mtlr r0
/* 80005AA8 000029E8  38 21 00 10 */	addi r1, r1, 0x10
/* 80005AAC 000029EC  4E 80 00 20 */	blr 
.endfn adaptor_do_update__Q217JStudio_JParticle17TAdaptor_particleFPCQ27JStudio7TObjectUl

.fn adaptor_do_BEGIN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005AB0 000029F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80005AB4 000029F4  7C 08 02 A6 */	mflr r0
/* 80005AB8 000029F8  2C 04 00 01 */	cmpwi r4, 1
/* 80005ABC 000029FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80005AC0 00002A00  41 82 00 08 */	beq .L_80005AC8
/* 80005AC4 00002A04  48 00 00 0C */	b .L_80005AD0
.L_80005AC8:
/* 80005AC8 00002A08  38 80 00 00 */	li r4, 0
/* 80005ACC 00002A0C  48 00 05 49 */	bl beginParticle_fadeIn___Q217JStudio_JParticle17TAdaptor_particleFUl
.L_80005AD0:
/* 80005AD0 00002A10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80005AD4 00002A14  7C 08 03 A6 */	mtlr r0
/* 80005AD8 00002A18  38 21 00 10 */	addi r1, r1, 0x10
/* 80005ADC 00002A1C  4E 80 00 20 */	blr 
.endfn adaptor_do_BEGIN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_BEGIN_FADE_IN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005AE0 00002A20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80005AE4 00002A24  7C 08 02 A6 */	mflr r0
/* 80005AE8 00002A28  2C 04 00 02 */	cmpwi r4, 2
/* 80005AEC 00002A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80005AF0 00002A30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80005AF4 00002A34  7C 7F 1B 78 */	mr r31, r3
/* 80005AF8 00002A38  41 82 00 08 */	beq .L_80005B00
/* 80005AFC 00002A3C  48 00 00 18 */	b .L_80005B14
.L_80005B00:
/* 80005B00 00002A40  C0 25 00 00 */	lfs f1, 0(r5)
/* 80005B04 00002A44  48 0B C0 49 */	bl __cvt_fp2unsigned
/* 80005B08 00002A48  7C 64 1B 78 */	mr r4, r3
/* 80005B0C 00002A4C  7F E3 FB 78 */	mr r3, r31
/* 80005B10 00002A50  48 00 05 05 */	bl beginParticle_fadeIn___Q217JStudio_JParticle17TAdaptor_particleFUl
.L_80005B14:
/* 80005B14 00002A54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80005B18 00002A58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80005B1C 00002A5C  7C 08 03 A6 */	mtlr r0
/* 80005B20 00002A60  38 21 00 10 */	addi r1, r1, 0x10
/* 80005B24 00002A64  4E 80 00 20 */	blr 
.endfn adaptor_do_BEGIN_FADE_IN__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_END__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005B28 00002A68  2C 04 00 01 */	cmpwi r4, 1
/* 80005B2C 00002A6C  4C 82 00 20 */	bnelr 
/* 80005B30 00002A70  80 83 01 78 */	lwz r4, 0x178(r3)
/* 80005B34 00002A74  28 04 00 00 */	cmplwi r4, 0
/* 80005B38 00002A78  4D 82 00 20 */	beqlr 
/* 80005B3C 00002A7C  80 64 00 F4 */	lwz r3, 0xf4(r4)
/* 80005B40 00002A80  38 00 00 01 */	li r0, 1
/* 80005B44 00002A84  60 63 00 01 */	ori r3, r3, 1
/* 80005B48 00002A88  90 64 00 F4 */	stw r3, 0xf4(r4)
/* 80005B4C 00002A8C  90 04 00 24 */	stw r0, 0x24(r4)
/* 80005B50 00002A90  4E 80 00 20 */	blr 
.endfn adaptor_do_END__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_END_FADE_OUT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005B54 00002A94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80005B58 00002A98  7C 08 02 A6 */	mflr r0
/* 80005B5C 00002A9C  2C 04 00 02 */	cmpwi r4, 2
/* 80005B60 00002AA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80005B64 00002AA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80005B68 00002AA8  7C 7F 1B 78 */	mr r31, r3
/* 80005B6C 00002AAC  41 82 00 08 */	beq .L_80005B74
/* 80005B70 00002AB0  48 00 00 18 */	b .L_80005B88
.L_80005B74:
/* 80005B74 00002AB4  C0 25 00 00 */	lfs f1, 0(r5)
/* 80005B78 00002AB8  48 0B BF D5 */	bl __cvt_fp2unsigned
/* 80005B7C 00002ABC  7C 64 1B 78 */	mr r4, r3
/* 80005B80 00002AC0  7F E3 FB 78 */	mr r3, r31
/* 80005B84 00002AC4  48 00 05 75 */	bl endParticle_fadeOut___Q217JStudio_JParticle17TAdaptor_particleFUl
.L_80005B88:
/* 80005B88 00002AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80005B8C 00002ACC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80005B90 00002AD0  7C 08 03 A6 */	mtlr r0
/* 80005B94 00002AD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80005B98 00002AD8  4E 80 00 20 */	blr 
.endfn adaptor_do_END_FADE_OUT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_PARTICLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005B9C 00002ADC  2C 04 00 19 */	cmpwi r4, 0x19
/* 80005BA0 00002AE0  4C 82 00 20 */	bnelr 
/* 80005BA4 00002AE4  80 05 00 00 */	lwz r0, 0(r5)
/* 80005BA8 00002AE8  90 03 01 88 */	stw r0, 0x188(r3)
/* 80005BAC 00002AEC  4E 80 00 20 */	blr 
.endfn adaptor_do_PARTICLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_PARENT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005BB0 00002AF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80005BB4 00002AF4  7C 08 02 A6 */	mflr r0
/* 80005BB8 00002AF8  2C 04 00 18 */	cmpwi r4, 0x18
/* 80005BBC 00002AFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80005BC0 00002B00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80005BC4 00002B04  7C 7F 1B 78 */	mr r31, r3
/* 80005BC8 00002B08  41 82 00 08 */	beq .L_80005BD0
/* 80005BCC 00002B0C  48 00 00 38 */	b .L_80005C04
.L_80005BD0:
/* 80005BD0 00002B10  38 00 00 00 */	li r0, 0
/* 80005BD4 00002B14  38 81 00 08 */	addi r4, r1, 8
/* 80005BD8 00002B18  90 1F 01 9C */	stw r0, 0x19c(r31)
/* 80005BDC 00002B1C  38 C0 00 00 */	li r6, 0
/* 80005BE0 00002B20  80 7F 01 98 */	lwz r3, 0x198(r31)
/* 80005BE4 00002B24  81 83 00 00 */	lwz r12, 0(r3)
/* 80005BE8 00002B28  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80005BEC 00002B2C  7D 89 03 A6 */	mtctr r12
/* 80005BF0 00002B30  4E 80 04 21 */	bctrl 
/* 80005BF4 00002B34  2C 03 00 00 */	cmpwi r3, 0
/* 80005BF8 00002B38  40 82 00 0C */	bne .L_80005C04
/* 80005BFC 00002B3C  80 01 00 08 */	lwz r0, 8(r1)
/* 80005C00 00002B40  90 1F 01 9C */	stw r0, 0x19c(r31)
.L_80005C04:
/* 80005C04 00002B44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80005C08 00002B48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80005C0C 00002B4C  7C 08 03 A6 */	mtlr r0
/* 80005C10 00002B50  38 21 00 20 */	addi r1, r1, 0x20
/* 80005C14 00002B54  4E 80 00 20 */	blr 
.endfn adaptor_do_PARENT__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_PARENT_NODE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005C18 00002B58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80005C1C 00002B5C  7C 08 02 A6 */	mflr r0
/* 80005C20 00002B60  2C 04 00 19 */	cmpwi r4, 0x19
/* 80005C24 00002B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80005C28 00002B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80005C2C 00002B6C  7C 7F 1B 78 */	mr r31, r3
/* 80005C30 00002B70  41 82 00 4C */	beq .L_80005C7C
/* 80005C34 00002B74  40 80 00 50 */	bge .L_80005C84
/* 80005C38 00002B78  2C 04 00 18 */	cmpwi r4, 0x18
/* 80005C3C 00002B7C  40 80 00 08 */	bge .L_80005C44
/* 80005C40 00002B80  48 00 00 44 */	b .L_80005C84
.L_80005C44:
/* 80005C44 00002B84  80 7F 01 9C */	lwz r3, 0x19c(r31)
/* 80005C48 00002B88  28 03 00 00 */	cmplwi r3, 0
/* 80005C4C 00002B8C  41 82 00 38 */	beq .L_80005C84
/* 80005C50 00002B90  81 83 00 00 */	lwz r12, 0(r3)
/* 80005C54 00002B94  7C A4 2B 78 */	mr r4, r5
/* 80005C58 00002B98  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80005C5C 00002B9C  7D 89 03 A6 */	mtctr r12
/* 80005C60 00002BA0  4E 80 04 21 */	bctrl 
/* 80005C64 00002BA4  90 7F 01 A0 */	stw r3, 0x1a0(r31)
/* 80005C68 00002BA8  80 7F 01 A0 */	lwz r3, 0x1a0(r31)
/* 80005C6C 00002BAC  3C 03 00 01 */	addis r0, r3, 1
/* 80005C70 00002BB0  28 00 FF FF */	cmplwi r0, 0xffff
/* 80005C74 00002BB4  40 82 00 10 */	bne .L_80005C84
/* 80005C78 00002BB8  48 00 00 0C */	b .L_80005C84
.L_80005C7C:
/* 80005C7C 00002BBC  80 05 00 00 */	lwz r0, 0(r5)
/* 80005C80 00002BC0  90 1F 01 A0 */	stw r0, 0x1a0(r31)
.L_80005C84:
/* 80005C84 00002BC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80005C88 00002BC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80005C8C 00002BCC  7C 08 03 A6 */	mtlr r0
/* 80005C90 00002BD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80005C94 00002BD4  4E 80 00 20 */	blr 
.endfn adaptor_do_PARENT_NODE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_PARENT_ENABLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80005C98 00002BD8  2C 04 00 02 */	cmpwi r4, 2
/* 80005C9C 00002BDC  4C 82 00 20 */	bnelr 
/* 80005CA0 00002BE0  80 85 00 00 */	lwz r4, 0(r5)
/* 80005CA4 00002BE4  7C 04 00 D0 */	neg r0, r4
/* 80005CA8 00002BE8  7C 00 23 78 */	or r0, r0, r4
/* 80005CAC 00002BEC  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80005CB0 00002BF0  98 03 01 A4 */	stb r0, 0x1a4(r3)
/* 80005CB4 00002BF4  4E 80 00 20 */	blr 
.endfn adaptor_do_PARENT_ENABLE__Q217JStudio_JParticle17TAdaptor_particleFQ37JStudio4data15TEOperationDataPCvUl

.fn execute__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_FP14JPABaseEmitter, global
/* 80005CB8 00002BF8  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80005CBC 00002BFC  7C 08 02 A6 */	mflr r0
/* 80005CC0 00002C00  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80005CC4 00002C04  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80005CC8 00002C08  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 80005CCC 00002C0C  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80005CD0 00002C10  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80005CD4 00002C14  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80005CD8 00002C18  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 80005CDC 00002C1C  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 80005CE0 00002C20  7C 9F 23 78 */	mr r31, r4
/* 80005CE4 00002C24  7C 7E 1B 78 */	mr r30, r3
/* 80005CE8 00002C28  38 80 00 00 */	li r4, 0
/* 80005CEC 00002C2C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80005CF0 00002C30  41 82 00 18 */	beq .L_80005D08
/* 80005CF4 00002C34  80 7F 00 D0 */	lwz r3, 0xd0(r31)
/* 80005CF8 00002C38  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 80005CFC 00002C3C  7C 03 02 15 */	add. r0, r3, r0
/* 80005D00 00002C40  40 82 00 08 */	bne .L_80005D08
/* 80005D04 00002C44  38 80 00 01 */	li r4, 1
.L_80005D08:
/* 80005D08 00002C48  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80005D0C 00002C4C  41 82 00 3C */	beq .L_80005D48
/* 80005D10 00002C50  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005D14 00002C54  7F E4 FB 78 */	mr r4, r31
/* 80005D18 00002C58  80 63 01 74 */	lwz r3, 0x174(r3)
/* 80005D1C 00002C5C  48 08 AF E5 */	bl forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter
/* 80005D20 00002C60  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005D24 00002C64  38 00 00 00 */	li r0, 0
/* 80005D28 00002C68  90 03 01 78 */	stw r0, 0x178(r3)
/* 80005D2C 00002C6C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005D30 00002C70  90 03 01 8C */	stw r0, 0x18c(r3)
/* 80005D34 00002C74  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005D38 00002C78  90 03 01 90 */	stw r0, 0x190(r3)
/* 80005D3C 00002C7C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005D40 00002C80  90 03 01 94 */	stw r0, 0x194(r3)
/* 80005D44 00002C84  48 00 02 A8 */	b .L_80005FEC
.L_80005D48:
/* 80005D48 00002C88  80 BE 00 04 */	lwz r5, 4(r30)
/* 80005D4C 00002C8C  3C 80 43 30 */	lis r4, 0x4330
/* 80005D50 00002C90  90 81 00 88 */	stw r4, 0x88(r1)
/* 80005D54 00002C94  80 05 01 90 */	lwz r0, 0x190(r5)
/* 80005D58 00002C98  80 65 01 94 */	lwz r3, 0x194(r5)
/* 80005D5C 00002C9C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80005D60 00002CA0  80 05 01 8C */	lwz r0, 0x18c(r5)
/* 80005D64 00002CA4  90 61 00 94 */	stw r3, 0x94(r1)
/* 80005D68 00002CA8  C8 42 80 30 */	lfd f2, lbl_80516390@sda21(r2)
/* 80005D6C 00002CAC  2C 00 00 02 */	cmpwi r0, 2
/* 80005D70 00002CB0  90 81 00 90 */	stw r4, 0x90(r1)
/* 80005D74 00002CB4  C8 21 00 88 */	lfd f1, 0x88(r1)
/* 80005D78 00002CB8  C8 01 00 90 */	lfd f0, 0x90(r1)
/* 80005D7C 00002CBC  FC 21 10 28 */	fsub f1, f1, f2
/* 80005D80 00002CC0  CB E2 80 10 */	lfd f31, lbl_80516370@sda21(r2)
/* 80005D84 00002CC4  FC 00 10 28 */	fsub f0, f0, f2
/* 80005D88 00002CC8  41 82 00 30 */	beq .L_80005DB8
/* 80005D8C 00002CCC  40 80 00 10 */	bge .L_80005D9C
/* 80005D90 00002CD0  2C 00 00 01 */	cmpwi r0, 1
/* 80005D94 00002CD4  40 80 00 14 */	bge .L_80005DA8
/* 80005D98 00002CD8  48 00 00 20 */	b .L_80005DB8
.L_80005D9C:
/* 80005D9C 00002CDC  2C 00 00 04 */	cmpwi r0, 4
/* 80005DA0 00002CE0  40 80 00 18 */	bge .L_80005DB8
/* 80005DA4 00002CE4  48 00 00 0C */	b .L_80005DB0
.L_80005DA8:
/* 80005DA8 00002CE8  FF E0 08 24 */	fdiv f31, f0, f1
/* 80005DAC 00002CEC  48 00 00 0C */	b .L_80005DB8
.L_80005DB0:
/* 80005DB0 00002CF0  FC 01 00 28 */	fsub f0, f1, f0
/* 80005DB4 00002CF4  FF E0 08 24 */	fdiv f31, f0, f1
.L_80005DB8:
/* 80005DB8 00002CF8  80 9E 00 08 */	lwz r4, 8(r30)
/* 80005DBC 00002CFC  3C 60 80 47 */	lis r3, sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio17TAdaptor_particle@ha
/* 80005DC0 00002D00  38 A3 33 F8 */	addi r5, r3, sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio17TAdaptor_particle@l
/* 80005DC4 00002D04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80005DC8 00002D08  83 84 00 14 */	lwz r28, 0x14(r4)
/* 80005DCC 00002D0C  38 81 00 64 */	addi r4, r1, 0x64
/* 80005DD0 00002D10  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005DD4 00002D14  48 00 75 59 */	bl adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl
/* 80005DD8 00002D18  3C 60 80 47 */	lis r3, sauVariableValue_3_ROTATION_XYZ__Q27JStudio17TAdaptor_particle@ha
/* 80005DDC 00002D1C  38 81 00 70 */	addi r4, r1, 0x70
/* 80005DE0 00002D20  38 A3 34 04 */	addi r5, r3, sauVariableValue_3_ROTATION_XYZ__Q27JStudio17TAdaptor_particle@l
/* 80005DE4 00002D24  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005DE8 00002D28  48 00 75 45 */	bl adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl
/* 80005DEC 00002D2C  3C 80 80 47 */	lis r4, sauVariableValue_3_SCALING_XYZ__Q27JStudio17TAdaptor_particle@ha
/* 80005DF0 00002D30  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005DF4 00002D34  38 A4 34 10 */	addi r5, r4, sauVariableValue_3_SCALING_XYZ__Q27JStudio17TAdaptor_particle@l
/* 80005DF8 00002D38  38 81 00 7C */	addi r4, r1, 0x7c
/* 80005DFC 00002D3C  48 00 75 31 */	bl adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl
/* 80005E00 00002D40  80 9E 00 04 */	lwz r4, 4(r30)
/* 80005E04 00002D44  88 04 01 A4 */	lbz r0, 0x1a4(r4)
/* 80005E08 00002D48  28 00 00 00 */	cmplwi r0, 0
/* 80005E0C 00002D4C  40 82 00 E0 */	bne .L_80005EEC
/* 80005E10 00002D50  88 1C 00 74 */	lbz r0, 0x74(r28)
/* 80005E14 00002D54  28 00 00 00 */	cmplwi r0, 0
/* 80005E18 00002D58  40 82 00 0C */	bne .L_80005E24
/* 80005E1C 00002D5C  3B A1 00 64 */	addi r29, r1, 0x64
/* 80005E20 00002D60  48 00 00 38 */	b .L_80005E58
.L_80005E24:
/* 80005E24 00002D64  38 7C 00 98 */	addi r3, r28, 0x98
/* 80005E28 00002D68  38 81 00 64 */	addi r4, r1, 0x64
/* 80005E2C 00002D6C  38 A1 00 40 */	addi r5, r1, 0x40
/* 80005E30 00002D70  48 0E 4D A9 */	bl PSMTXMultVec
/* 80005E34 00002D74  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80005E38 00002D78  3B A1 00 40 */	addi r29, r1, 0x40
/* 80005E3C 00002D7C  C0 41 00 74 */	lfs f2, 0x74(r1)
/* 80005E40 00002D80  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80005E44 00002D84  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 80005E48 00002D88  C0 3C 00 90 */	lfs f1, 0x90(r28)
/* 80005E4C 00002D8C  EC 22 08 2A */	fadds f1, f2, f1
/* 80005E50 00002D90  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80005E54 00002D94  D0 21 00 50 */	stfs f1, 0x50(r1)
.L_80005E58:
/* 80005E58 00002D98  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80005E5C 00002D9C  38 DF 00 68 */	addi r6, r31, 0x68
/* 80005E60 00002DA0  C0 5D 00 08 */	lfs f2, 8(r29)
/* 80005E64 00002DA4  C0 1D 00 00 */	lfs f0, 0(r29)
/* 80005E68 00002DA8  C8 62 80 20 */	lfd f3, lbl_80516380@sda21(r2)
/* 80005E6C 00002DAC  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 80005E70 00002DB0  C8 82 80 18 */	lfd f4, lbl_80516378@sda21(r2)
/* 80005E74 00002DB4  D0 3F 00 A8 */	stfs f1, 0xa8(r31)
/* 80005E78 00002DB8  D0 5F 00 AC */	stfs f2, 0xac(r31)
/* 80005E7C 00002DBC  C0 5D 00 0C */	lfs f2, 0xc(r29)
/* 80005E80 00002DC0  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 80005E84 00002DC4  C0 1D 00 14 */	lfs f0, 0x14(r29)
/* 80005E88 00002DC8  FC 42 18 24 */	fdiv f2, f2, f3
/* 80005E8C 00002DCC  FC 21 18 24 */	fdiv f1, f1, f3
/* 80005E90 00002DD0  FC 00 18 24 */	fdiv f0, f0, f3
/* 80005E94 00002DD4  FC 44 00 B2 */	fmul f2, f4, f2
/* 80005E98 00002DD8  FC 24 00 72 */	fmul f1, f4, f1
/* 80005E9C 00002DDC  FC 04 00 32 */	fmul f0, f4, f0
/* 80005EA0 00002DE0  FC 40 10 1E */	fctiwz f2, f2
/* 80005EA4 00002DE4  FC 20 08 1E */	fctiwz f1, f1
/* 80005EA8 00002DE8  FC 00 00 1E */	fctiwz f0, f0
/* 80005EAC 00002DEC  D8 41 00 90 */	stfd f2, 0x90(r1)
/* 80005EB0 00002DF0  D8 21 00 88 */	stfd f1, 0x88(r1)
/* 80005EB4 00002DF4  80 61 00 94 */	lwz r3, 0x94(r1)
/* 80005EB8 00002DF8  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 80005EBC 00002DFC  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 80005EC0 00002E00  80 A1 00 9C */	lwz r5, 0x9c(r1)
/* 80005EC4 00002E04  48 08 DD 95 */	bl JPAGetXYZRotateMtx__FsssPA4_f
/* 80005EC8 00002E08  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 80005ECC 00002E0C  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 80005ED0 00002E10  C0 5D 00 20 */	lfs f2, 0x20(r29)
/* 80005ED4 00002E14  D0 1F 00 98 */	stfs f0, 0x98(r31)
/* 80005ED8 00002E18  D0 3F 00 9C */	stfs f1, 0x9c(r31)
/* 80005EDC 00002E1C  D0 5F 00 A0 */	stfs f2, 0xa0(r31)
/* 80005EE0 00002E20  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 80005EE4 00002E24  D0 3F 00 B4 */	stfs f1, 0xb4(r31)
/* 80005EE8 00002E28  48 00 00 5C */	b .L_80005F44
.L_80005EEC:
/* 80005EEC 00002E2C  80 A4 01 9C */	lwz r5, 0x19c(r4)
/* 80005EF0 00002E30  38 61 00 10 */	addi r3, r1, 0x10
/* 80005EF4 00002E34  80 C4 01 A0 */	lwz r6, 0x1a0(r4)
/* 80005EF8 00002E38  38 81 00 64 */	addi r4, r1, 0x64
/* 80005EFC 00002E3C  48 00 BE D1 */	bl transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl39TTransform_translation_rotation_scalingPCQ26JStage7TObjectUl
/* 80005F00 00002E40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80005F04 00002E44  40 82 00 1C */	bne .L_80005F20
/* 80005F08 00002E48  7F E3 FB 79 */	or. r3, r31, r31
/* 80005F0C 00002E4C  41 82 00 E0 */	beq .L_80005FEC
/* 80005F10 00002E50  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 80005F14 00002E54  60 00 00 04 */	ori r0, r0, 4
/* 80005F18 00002E58  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 80005F1C 00002E5C  48 00 00 D0 */	b .L_80005FEC
.L_80005F20:
/* 80005F20 00002E60  38 61 00 10 */	addi r3, r1, 0x10
/* 80005F24 00002E64  38 9F 00 68 */	addi r4, r31, 0x68
/* 80005F28 00002E68  38 BF 00 98 */	addi r5, r31, 0x98
/* 80005F2C 00002E6C  38 DF 00 A4 */	addi r6, r31, 0xa4
/* 80005F30 00002E70  48 08 DE 15 */	bl "JPASetRMtxSTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>PQ29JGeometry8TVec3<f>"
/* 80005F34 00002E74  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 80005F38 00002E78  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 80005F3C 00002E7C  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 80005F40 00002E80  D0 3F 00 B4 */	stfs f1, 0xb4(r31)
.L_80005F44:
/* 80005F44 00002E84  3C 80 80 47 */	lis r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio17TAdaptor_particle@ha
/* 80005F48 00002E88  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005F4C 00002E8C  38 A4 34 28 */	addi r5, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio17TAdaptor_particle@l
/* 80005F50 00002E90  38 81 00 08 */	addi r4, r1, 8
/* 80005F54 00002E94  48 00 74 F1 */	bl adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl
/* 80005F58 00002E98  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 80005F5C 00002E9C  3C 00 43 30 */	lis r0, 0x4330
/* 80005F60 00002EA0  88 81 00 09 */	lbz r4, 9(r1)
/* 80005F64 00002EA4  38 C0 00 FF */	li r6, 0xff
/* 80005F68 00002EA8  88 61 00 08 */	lbz r3, 8(r1)
/* 80005F6C 00002EAC  90 01 00 98 */	stw r0, 0x98(r1)
/* 80005F70 00002EB0  C8 42 80 30 */	lfd f2, lbl_80516390@sda21(r2)
/* 80005F74 00002EB4  98 7F 00 B8 */	stb r3, 0xb8(r31)
/* 80005F78 00002EB8  C8 02 80 28 */	lfd f0, lbl_80516388@sda21(r2)
/* 80005F7C 00002EBC  98 9F 00 B9 */	stb r4, 0xb9(r31)
/* 80005F80 00002EC0  98 BF 00 BA */	stb r5, 0xba(r31)
/* 80005F84 00002EC4  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80005F88 00002EC8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80005F8C 00002ECC  C8 21 00 98 */	lfd f1, 0x98(r1)
/* 80005F90 00002ED0  FC 21 10 28 */	fsub f1, f1, f2
/* 80005F94 00002ED4  FF FF 00 72 */	fmul f31, f31, f1
/* 80005F98 00002ED8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80005F9C 00002EDC  40 80 00 10 */	bge .L_80005FAC
/* 80005FA0 00002EE0  FC 00 F8 1E */	fctiwz f0, f31
/* 80005FA4 00002EE4  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 80005FA8 00002EE8  80 C1 00 94 */	lwz r6, 0x94(r1)
.L_80005FAC:
/* 80005FAC 00002EEC  98 DF 00 BB */	stb r6, 0xbb(r31)
/* 80005FB0 00002EF0  3C 60 80 47 */	lis r3, sauVariableValue_4_COLOR1_RGBA__Q27JStudio17TAdaptor_particle@ha
/* 80005FB4 00002EF4  38 A3 34 44 */	addi r5, r3, sauVariableValue_4_COLOR1_RGBA__Q27JStudio17TAdaptor_particle@l
/* 80005FB8 00002EF8  38 81 00 08 */	addi r4, r1, 8
/* 80005FBC 00002EFC  80 7E 00 04 */	lwz r3, 4(r30)
/* 80005FC0 00002F00  48 00 74 85 */	bl adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl
/* 80005FC4 00002F04  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 80005FC8 00002F08  38 60 00 00 */	li r3, 0
/* 80005FCC 00002F0C  88 81 00 09 */	lbz r4, 9(r1)
/* 80005FD0 00002F10  88 01 00 08 */	lbz r0, 8(r1)
/* 80005FD4 00002F14  90 61 00 0C */	stw r3, 0xc(r1)
/* 80005FD8 00002F18  98 1F 00 BC */	stb r0, 0xbc(r31)
/* 80005FDC 00002F1C  98 9F 00 BD */	stb r4, 0xbd(r31)
/* 80005FE0 00002F20  98 BF 00 BE */	stb r5, 0xbe(r31)
/* 80005FE4 00002F24  48 00 00 08 */	b .L_80005FEC
/* 80005FE8 00002F28  90 03 00 F4 */	stw r0, 0xf4(r3)
.L_80005FEC:
/* 80005FEC 00002F2C  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 80005FF0 00002F30  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80005FF4 00002F34  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 80005FF8 00002F38  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80005FFC 00002F3C  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80006000 00002F40  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80006004 00002F44  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 80006008 00002F48  7C 08 03 A6 */	mtlr r0
/* 8000600C 00002F4C  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80006010 00002F50  4E 80 00 20 */	blr 
.endfn execute__Q317JStudio_JParticle17TAdaptor_particle13TJPACallback_FP14JPABaseEmitter

.fn beginParticle_fadeIn___Q217JStudio_JParticle17TAdaptor_particleFUl, global
/* 80006014 00002F54  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80006018 00002F58  7C 08 02 A6 */	mflr r0
/* 8000601C 00002F5C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80006020 00002F60  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80006024 00002F64  7C 9F 23 78 */	mr r31, r4
/* 80006028 00002F68  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8000602C 00002F6C  7C 7E 1B 78 */	mr r30, r3
/* 80006030 00002F70  80 83 01 78 */	lwz r4, 0x178(r3)
/* 80006034 00002F74  28 04 00 00 */	cmplwi r4, 0
/* 80006038 00002F78  41 82 00 0C */	beq .L_80006044
/* 8000603C 00002F7C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80006040 00002F80  48 08 AC C1 */	bl forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter
.L_80006044:
/* 80006044 00002F84  3C 60 80 47 */	lis r3, lbl_804732E0@ha
/* 80006048 00002F88  38 81 00 14 */	addi r4, r1, 0x14
/* 8000604C 00002F8C  38 C3 32 E0 */	addi r6, r3, lbl_804732E0@l
/* 80006050 00002F90  39 1E 01 7C */	addi r8, r30, 0x17c
/* 80006054 00002F94  80 A6 00 00 */	lwz r5, 0(r6)
/* 80006058 00002F98  39 20 00 00 */	li r9, 0
/* 8000605C 00002F9C  80 66 00 04 */	lwz r3, 4(r6)
/* 80006060 00002FA0  80 06 00 08 */	lwz r0, 8(r6)
/* 80006064 00002FA4  90 A1 00 08 */	stw r5, 8(r1)
/* 80006068 00002FA8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8000606C 00002FAC  C0 41 00 08 */	lfs f2, 8(r1)
/* 80006070 00002FB0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80006074 00002FB4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80006078 00002FB8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8000607C 00002FBC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80006080 00002FC0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80006084 00002FC4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80006088 00002FC8  80 1E 01 88 */	lwz r0, 0x188(r30)
/* 8000608C 00002FCC  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 80006090 00002FD0  54 06 46 3E */	srwi r6, r0, 0x18
/* 80006094 00002FD4  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 80006098 00002FD8  54 07 86 3E */	rlwinm r7, r0, 0x10, 0x18, 0x1f
/* 8000609C 00002FDC  48 08 A8 21 */	bl "createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack"
/* 800060A0 00002FE0  90 7E 01 78 */	stw r3, 0x178(r30)
/* 800060A4 00002FE4  80 9E 01 78 */	lwz r4, 0x178(r30)
/* 800060A8 00002FE8  28 04 00 00 */	cmplwi r4, 0
/* 800060AC 00002FEC  41 82 00 34 */	beq .L_800060E0
/* 800060B0 00002FF0  80 64 00 F4 */	lwz r3, 0xf4(r4)
/* 800060B4 00002FF4  28 1F 00 00 */	cmplwi r31, 0
/* 800060B8 00002FF8  38 00 00 01 */	li r0, 1
/* 800060BC 00002FFC  60 63 00 40 */	ori r3, r3, 0x40
/* 800060C0 00003000  90 64 00 F4 */	stw r3, 0xf4(r4)
/* 800060C4 00003004  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 800060C8 00003008  40 82 00 0C */	bne .L_800060D4
/* 800060CC 0000300C  38 00 00 02 */	li r0, 2
/* 800060D0 00003010  90 1E 01 8C */	stw r0, 0x18c(r30)
.L_800060D4:
/* 800060D4 00003014  93 FE 01 90 */	stw r31, 0x190(r30)
/* 800060D8 00003018  38 00 00 00 */	li r0, 0
/* 800060DC 0000301C  90 1E 01 94 */	stw r0, 0x194(r30)
.L_800060E0:
/* 800060E0 00003020  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800060E4 00003024  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800060E8 00003028  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800060EC 0000302C  7C 08 03 A6 */	mtlr r0
/* 800060F0 00003030  38 21 00 30 */	addi r1, r1, 0x30
/* 800060F4 00003034  4E 80 00 20 */	blr 
.endfn beginParticle_fadeIn___Q217JStudio_JParticle17TAdaptor_particleFUl

.fn endParticle_fadeOut___Q217JStudio_JParticle17TAdaptor_particleFUl, global
/* 800060F8 00003038  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800060FC 0000303C  7C 08 02 A6 */	mflr r0
/* 80006100 00003040  90 01 00 34 */	stw r0, 0x34(r1)
/* 80006104 00003044  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80006108 00003048  7C 9F 23 78 */	mr r31, r4
/* 8000610C 0000304C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80006110 00003050  7C 7E 1B 78 */	mr r30, r3
/* 80006114 00003054  80 83 01 78 */	lwz r4, 0x178(r3)
/* 80006118 00003058  28 04 00 00 */	cmplwi r4, 0
/* 8000611C 0000305C  41 82 00 DC */	beq .L_800061F8
/* 80006120 00003060  28 1F 00 00 */	cmplwi r31, 0
/* 80006124 00003064  40 82 00 24 */	bne .L_80006148
/* 80006128 00003068  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8000612C 0000306C  48 08 AB D5 */	bl forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter
/* 80006130 00003070  38 00 00 00 */	li r0, 0
/* 80006134 00003074  90 1E 01 78 */	stw r0, 0x178(r30)
/* 80006138 00003078  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 8000613C 0000307C  90 1E 01 90 */	stw r0, 0x190(r30)
/* 80006140 00003080  90 1E 01 94 */	stw r0, 0x194(r30)
/* 80006144 00003084  48 00 00 B4 */	b .L_800061F8
.L_80006148:
/* 80006148 00003088  80 9E 01 8C */	lwz r4, 0x18c(r30)
/* 8000614C 0000308C  38 00 00 03 */	li r0, 3
/* 80006150 00003090  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 80006154 00003094  80 7E 01 94 */	lwz r3, 0x194(r30)
/* 80006158 00003098  28 03 00 00 */	cmplwi r3, 0
/* 8000615C 0000309C  40 82 00 0C */	bne .L_80006168
/* 80006160 000030A0  93 FE 01 90 */	stw r31, 0x190(r30)
/* 80006164 000030A4  48 00 00 94 */	b .L_800061F8
.L_80006168:
/* 80006168 000030A8  2C 04 00 02 */	cmpwi r4, 2
/* 8000616C 000030AC  38 A0 00 00 */	li r5, 0
/* 80006170 000030B0  41 82 00 30 */	beq .L_800061A0
/* 80006174 000030B4  40 80 00 10 */	bge .L_80006184
/* 80006178 000030B8  2C 04 00 01 */	cmpwi r4, 1
/* 8000617C 000030BC  40 80 00 14 */	bge .L_80006190
/* 80006180 000030C0  48 00 00 20 */	b .L_800061A0
.L_80006184:
/* 80006184 000030C4  2C 04 00 04 */	cmpwi r4, 4
/* 80006188 000030C8  40 80 00 18 */	bge .L_800061A0
/* 8000618C 000030CC  48 00 00 0C */	b .L_80006198
.L_80006190:
/* 80006190 000030D0  7C 65 1B 78 */	mr r5, r3
/* 80006194 000030D4  48 00 00 0C */	b .L_800061A0
.L_80006198:
/* 80006198 000030D8  80 1E 01 90 */	lwz r0, 0x190(r30)
/* 8000619C 000030DC  7C A3 00 50 */	subf r5, r3, r0
.L_800061A0:
/* 800061A0 000030E0  80 1E 01 90 */	lwz r0, 0x190(r30)
/* 800061A4 000030E4  3C 60 43 30 */	lis r3, 0x4330
/* 800061A8 000030E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800061AC 000030EC  C8 62 80 30 */	lfd f3, lbl_80516390@sda21(r2)
/* 800061B0 000030F0  90 61 00 08 */	stw r3, 8(r1)
/* 800061B4 000030F4  C8 01 00 08 */	lfd f0, 8(r1)
/* 800061B8 000030F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800061BC 000030FC  FC 40 18 28 */	fsub f2, f0, f3
/* 800061C0 00003100  90 61 00 10 */	stw r3, 0x10(r1)
/* 800061C4 00003104  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 800061C8 00003108  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 800061CC 0000310C  FC 20 18 28 */	fsub f1, f0, f3
/* 800061D0 00003110  90 61 00 18 */	stw r3, 0x18(r1)
/* 800061D4 00003114  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 800061D8 00003118  FC 22 00 72 */	fmul f1, f2, f1
/* 800061DC 0000311C  FC 00 18 28 */	fsub f0, f0, f3
/* 800061E0 00003120  FC 21 00 24 */	fdiv f1, f1, f0
/* 800061E4 00003124  48 0B B9 69 */	bl __cvt_fp2unsigned
/* 800061E8 00003128  90 7E 01 90 */	stw r3, 0x190(r30)
/* 800061EC 0000312C  80 1E 01 90 */	lwz r0, 0x190(r30)
/* 800061F0 00003130  7C 1F 00 50 */	subf r0, r31, r0
/* 800061F4 00003134  90 1E 01 94 */	stw r0, 0x194(r30)
.L_800061F8:
/* 800061F8 00003138  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800061FC 0000313C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80006200 00003140  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80006204 00003144  7C 08 03 A6 */	mtlr r0
/* 80006208 00003148  38 21 00 30 */	addi r1, r1, 0x30
/* 8000620C 0000314C  4E 80 00 20 */	blr 
.endfn endParticle_fadeOut___Q217JStudio_JParticle17TAdaptor_particleFUl

.fn executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter, weak
/* 80006210 00003150  4E 80 00 20 */	blr 
.endfn executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter

.fn draw__18JPAEmitterCallBackFP14JPABaseEmitter, weak
/* 80006214 00003154  4E 80 00 20 */	blr 
.endfn draw__18JPAEmitterCallBackFP14JPABaseEmitter

.fn drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter, weak
/* 80006218 00003158  4E 80 00 20 */	blr 
.endfn drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter

.fn execute__18JPAEmitterCallBackFP14JPABaseEmitter, weak
/* 8000621C 0000315C  4E 80 00 20 */	blr 
.endfn execute__18JPAEmitterCallBackFP14JPABaseEmitter
