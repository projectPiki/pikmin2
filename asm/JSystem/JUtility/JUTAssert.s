.include "macros.inc"
.section .bss  # 0x804EFC20 - 0x8051467C
.balign 8
.lcomm "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@", 0x40, 4
.lcomm "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@", 0x100, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
"sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@": # local object
	.byte 1

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
"sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@": # local object
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80516550:
	.float 30.0
lbl_80516554:
	.float 36.0
lbl_80516558:
	.float 54.0
.balign 8
lbl_80516560:
	.4byte 0x43300000
	.4byte 0x80000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global create__12JUTAssertionFv
create__12JUTAssertionFv:
/* 80027DC0 00024D00  4E 80 00 20 */	blr 

.global flushMessage__12JUTAssertionFv
flushMessage__12JUTAssertionFv:
/* 80027DC4 00024D04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80027DC8 00024D08  7C 08 02 A6 */	mflr r0
/* 80027DCC 00024D0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80027DD0 00024D10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80027DD4 00024D14  80 6D 88 68 */	lwz r3, "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
/* 80027DD8 00024D18  28 03 00 00 */	cmplwi r3, 0
/* 80027DDC 00024D1C  40 82 00 0C */	bne .L_80027DE8
/* 80027DE0 00024D20  38 00 00 00 */	li r0, 0
/* 80027DE4 00024D24  48 00 00 28 */	b .L_80027E0C
.L_80027DE8:
/* 80027DE8 00024D28  3C 03 00 01 */	addis r0, r3, 1
/* 80027DEC 00024D2C  28 00 FF FF */	cmplwi r0, 0xffff
/* 80027DF0 00024D30  41 82 00 0C */	beq .L_80027DFC
/* 80027DF4 00024D34  38 03 FF FF */	addi r0, r3, -1
/* 80027DF8 00024D38  90 0D 88 68 */	stw r0, "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
.L_80027DFC:
/* 80027DFC 00024D3C  80 0D 88 68 */	lwz r0, "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
/* 80027E00 00024D40  28 00 00 05 */	cmplwi r0, 5
/* 80027E04 00024D44  40 80 00 08 */	bge .L_80027E0C
/* 80027E08 00024D48  38 00 00 00 */	li r0, 0
.L_80027E0C:
/* 80027E0C 00024D4C  28 00 00 00 */	cmplwi r0, 0
/* 80027E10 00024D50  41 82 00 8C */	beq .L_80027E9C
/* 80027E14 00024D54  88 0D 80 28 */	lbz r0, "sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
/* 80027E18 00024D58  28 00 00 01 */	cmplwi r0, 1
/* 80027E1C 00024D5C  40 82 00 80 */	bne .L_80027E9C
/* 80027E20 00024D60  38 A0 00 FF */	li r5, 0xff
/* 80027E24 00024D64  38 00 00 C8 */	li r0, 0xc8
/* 80027E28 00024D68  83 ED 88 88 */	lwz r31, sDirectPrint__14JUTDirectPrint@sda21(r13)
/* 80027E2C 00024D6C  38 81 00 10 */	addi r4, r1, 0x10
/* 80027E30 00024D70  98 A1 00 0C */	stb r5, 0xc(r1)
/* 80027E34 00024D74  80 DF 00 18 */	lwz r6, 0x18(r31)
/* 80027E38 00024D78  7F E3 FB 78 */	mr r3, r31
/* 80027E3C 00024D7C  98 01 00 0D */	stb r0, 0xd(r1)
/* 80027E40 00024D80  98 01 00 0E */	stb r0, 0xe(r1)
/* 80027E44 00024D84  98 A1 00 0F */	stb r5, 0xf(r1)
/* 80027E48 00024D88  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80027E4C 00024D8C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80027E50 00024D90  90 01 00 10 */	stw r0, 0x10(r1)
/* 80027E54 00024D94  48 00 23 0D */	bl setCharColor__14JUTDirectPrintFQ28JUtility6TColor
/* 80027E58 00024D98  3C 80 80 4F */	lis r4, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
/* 80027E5C 00024D9C  7F E3 FB 78 */	mr r3, r31
/* 80027E60 00024DA0  38 C4 FF C8 */	addi r6, r4, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l
/* 80027E64 00024DA4  38 A0 00 10 */	li r5, 0x10
/* 80027E68 00024DA8  38 80 00 10 */	li r4, 0x10
/* 80027E6C 00024DAC  48 00 21 55 */	bl drawString__14JUTDirectPrintFUsUsPc
/* 80027E70 00024DB0  3C 80 80 4F */	lis r4, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
/* 80027E74 00024DB4  7F E3 FB 78 */	mr r3, r31
/* 80027E78 00024DB8  38 C4 00 08 */	addi r6, r4, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l
/* 80027E7C 00024DBC  38 A0 00 18 */	li r5, 0x18
/* 80027E80 00024DC0  38 80 00 10 */	li r4, 0x10
/* 80027E84 00024DC4  48 00 21 3D */	bl drawString__14JUTDirectPrintFUsUsPc
/* 80027E88 00024DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80027E8C 00024DCC  7F E3 FB 78 */	mr r3, r31
/* 80027E90 00024DD0  38 81 00 08 */	addi r4, r1, 8
/* 80027E94 00024DD4  90 01 00 08 */	stw r0, 8(r1)
/* 80027E98 00024DD8  48 00 22 C9 */	bl setCharColor__14JUTDirectPrintFQ28JUtility6TColor
.L_80027E9C:
/* 80027E9C 00024DDC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80027EA0 00024DE0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80027EA4 00024DE4  7C 08 03 A6 */	mtlr r0
/* 80027EA8 00024DE8  38 21 00 20 */	addi r1, r1, 0x20
/* 80027EAC 00024DEC  4E 80 00 20 */	blr 

.global flushMessage_dbPrint__12JUTAssertionFv
flushMessage_dbPrint__12JUTAssertionFv:
/* 80027EB0 00024DF0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80027EB4 00024DF4  7C 08 02 A6 */	mflr r0
/* 80027EB8 00024DF8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80027EBC 00024DFC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80027EC0 00024E00  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80027EC4 00024E04  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80027EC8 00024E08  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80027ECC 00024E0C  80 6D 88 68 */	lwz r3, "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
/* 80027ED0 00024E10  28 03 00 00 */	cmplwi r3, 0
/* 80027ED4 00024E14  40 82 00 0C */	bne .L_80027EE0
/* 80027ED8 00024E18  38 00 00 00 */	li r0, 0
/* 80027EDC 00024E1C  48 00 00 28 */	b .L_80027F04
.L_80027EE0:
/* 80027EE0 00024E20  3C 03 00 01 */	addis r0, r3, 1
/* 80027EE4 00024E24  28 00 FF FF */	cmplwi r0, 0xffff
/* 80027EE8 00024E28  41 82 00 0C */	beq .L_80027EF4
/* 80027EEC 00024E2C  38 03 FF FF */	addi r0, r3, -1
/* 80027EF0 00024E30  90 0D 88 68 */	stw r0, "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
.L_80027EF4:
/* 80027EF4 00024E34  80 0D 88 68 */	lwz r0, "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
/* 80027EF8 00024E38  28 00 00 05 */	cmplwi r0, 5
/* 80027EFC 00024E3C  40 80 00 08 */	bge .L_80027F04
/* 80027F00 00024E40  38 00 00 00 */	li r0, 0
.L_80027F04:
/* 80027F04 00024E44  28 00 00 00 */	cmplwi r0, 0
/* 80027F08 00024E48  41 82 01 9C */	beq .L_800280A4
/* 80027F0C 00024E4C  88 0D 80 28 */	lbz r0, "sVisible__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
/* 80027F10 00024E50  28 00 00 01 */	cmplwi r0, 1
/* 80027F14 00024E54  40 82 01 90 */	bne .L_800280A4
/* 80027F18 00024E58  80 6D 88 80 */	lwz r3, sDebugPrint__10JUTDbPrint@sda21(r13)
/* 80027F1C 00024E5C  28 03 00 00 */	cmplwi r3, 0
/* 80027F20 00024E60  41 82 01 84 */	beq .L_800280A4
/* 80027F24 00024E64  83 E3 00 04 */	lwz r31, 4(r3)
/* 80027F28 00024E68  28 1F 00 00 */	cmplwi r31, 0
/* 80027F2C 00024E6C  41 82 01 78 */	beq .L_800280A4
/* 80027F30 00024E70  48 0A A2 15 */	bl VIGetRetraceCount
/* 80027F34 00024E74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80027F38 00024E78  54 60 16 36 */	rlwinm r0, r3, 2, 0x18, 0x1b
/* 80027F3C 00024E7C  60 00 00 0F */	ori r0, r0, 0xf
/* 80027F40 00024E80  7F E3 FB 78 */	mr r3, r31
/* 80027F44 00024E84  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80027F48 00024E88  54 1E 06 3E */	clrlwi r30, r0, 0x18
/* 80027F4C 00024E8C  7D 89 03 A6 */	mtctr r12
/* 80027F50 00024E90  4E 80 04 21 */	bctrl 
/* 80027F54 00024E94  38 00 00 FF */	li r0, 0xff
/* 80027F58 00024E98  9B C1 00 09 */	stb r30, 9(r1)
/* 80027F5C 00024E9C  7F E3 FB 78 */	mr r3, r31
/* 80027F60 00024EA0  38 81 00 0C */	addi r4, r1, 0xc
/* 80027F64 00024EA4  98 01 00 08 */	stb r0, 8(r1)
/* 80027F68 00024EA8  9B C1 00 0A */	stb r30, 0xa(r1)
/* 80027F6C 00024EAC  98 01 00 0B */	stb r0, 0xb(r1)
/* 80027F70 00024EB0  80 01 00 08 */	lwz r0, 8(r1)
/* 80027F74 00024EB4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80027F78 00024EB8  48 00 52 45 */	bl setCharColor__7JUTFontFQ28JUtility6TColor
/* 80027F7C 00024EBC  3C 60 80 4F */	lis r3, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
/* 80027F80 00024EC0  38 63 FF C8 */	addi r3, r3, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l
/* 80027F84 00024EC4  48 0A 29 8D */	bl strlen
/* 80027F88 00024EC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80027F8C 00024ECC  7C 7E 1B 78 */	mr r30, r3
/* 80027F90 00024ED0  7F E3 FB 78 */	mr r3, r31
/* 80027F94 00024ED4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80027F98 00024ED8  7D 89 03 A6 */	mtctr r12
/* 80027F9C 00024EDC  4E 80 04 21 */	bctrl 
/* 80027FA0 00024EE0  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 80027FA4 00024EE4  3C 00 43 30 */	lis r0, 0x4330
/* 80027FA8 00024EE8  7F E3 FB 78 */	mr r3, r31
/* 80027FAC 00024EEC  90 81 00 14 */	stw r4, 0x14(r1)
/* 80027FB0 00024EF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80027FB4 00024EF4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80027FB8 00024EF8  C8 22 82 00 */	lfd f1, lbl_80516560@sda21(r2)
/* 80027FBC 00024EFC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80027FC0 00024F00  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80027FC4 00024F04  EF E0 08 28 */	fsubs f31, f0, f1
/* 80027FC8 00024F08  7D 89 03 A6 */	mtctr r12
/* 80027FCC 00024F0C  4E 80 04 21 */	bctrl 
/* 80027FD0 00024F10  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80027FD4 00024F14  3C 00 43 30 */	lis r0, 0x4330
/* 80027FD8 00024F18  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80027FDC 00024F1C  3C 60 80 4F */	lis r3, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
/* 80027FE0 00024F20  38 83 FF C8 */	addi r4, r3, "sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l
/* 80027FE4 00024F24  C8 62 82 00 */	lfd f3, lbl_80516560@sda21(r2)
/* 80027FE8 00024F28  90 01 00 18 */	stw r0, 0x18(r1)
/* 80027FEC 00024F2C  FC 80 F8 90 */	fmr f4, f31
/* 80027FF0 00024F30  C0 22 81 F0 */	lfs f1, lbl_80516550@sda21(r2)
/* 80027FF4 00024F34  7F E3 FB 78 */	mr r3, r31
/* 80027FF8 00024F38  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80027FFC 00024F3C  7F C5 F3 78 */	mr r5, r30
/* 80028000 00024F40  C0 42 81 F4 */	lfs f2, lbl_80516554@sda21(r2)
/* 80028004 00024F44  EC 60 18 28 */	fsubs f3, f0, f3
/* 80028008 00024F48  38 C0 00 01 */	li r6, 1
/* 8002800C 00024F4C  48 00 52 69 */	bl drawString_size_scale__7JUTFontFffffPCcUlb
/* 80028010 00024F50  3C 60 80 4F */	lis r3, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
/* 80028014 00024F54  38 63 00 08 */	addi r3, r3, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l
/* 80028018 00024F58  48 0A 28 F9 */	bl strlen
/* 8002801C 00024F5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80028020 00024F60  7C 7E 1B 78 */	mr r30, r3
/* 80028024 00024F64  7F E3 FB 78 */	mr r3, r31
/* 80028028 00024F68  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8002802C 00024F6C  7D 89 03 A6 */	mtctr r12
/* 80028030 00024F70  4E 80 04 21 */	bctrl 
/* 80028034 00024F74  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 80028038 00024F78  3C 00 43 30 */	lis r0, 0x4330
/* 8002803C 00024F7C  7F E3 FB 78 */	mr r3, r31
/* 80028040 00024F80  90 81 00 24 */	stw r4, 0x24(r1)
/* 80028044 00024F84  81 9F 00 00 */	lwz r12, 0(r31)
/* 80028048 00024F88  90 01 00 20 */	stw r0, 0x20(r1)
/* 8002804C 00024F8C  C8 22 82 00 */	lfd f1, lbl_80516560@sda21(r2)
/* 80028050 00024F90  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80028054 00024F94  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80028058 00024F98  EF E0 08 28 */	fsubs f31, f0, f1
/* 8002805C 00024F9C  7D 89 03 A6 */	mtctr r12
/* 80028060 00024FA0  4E 80 04 21 */	bctrl 
/* 80028064 00024FA4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80028068 00024FA8  3C 00 43 30 */	lis r0, 0x4330
/* 8002806C 00024FAC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80028070 00024FB0  3C 60 80 4F */	lis r3, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@ha
/* 80028074 00024FB4  38 83 00 08 */	addi r4, r3, "sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@l
/* 80028078 00024FB8  C8 62 82 00 */	lfd f3, lbl_80516560@sda21(r2)
/* 8002807C 00024FBC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80028080 00024FC0  FC 80 F8 90 */	fmr f4, f31
/* 80028084 00024FC4  C0 22 81 F0 */	lfs f1, lbl_80516550@sda21(r2)
/* 80028088 00024FC8  7F E3 FB 78 */	mr r3, r31
/* 8002808C 00024FCC  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80028090 00024FD0  7F C5 F3 78 */	mr r5, r30
/* 80028094 00024FD4  C0 42 81 F8 */	lfs f2, lbl_80516558@sda21(r2)
/* 80028098 00024FD8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8002809C 00024FDC  38 C0 00 01 */	li r6, 1
/* 800280A0 00024FE0  48 00 51 D5 */	bl drawString_size_scale__7JUTFontFffffPCcUlb
.L_800280A4:
/* 800280A4 00024FE4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 800280A8 00024FE8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 800280AC 00024FEC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 800280B0 00024FF0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 800280B4 00024FF4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 800280B8 00024FF8  7C 08 03 A6 */	mtlr r0
/* 800280BC 00024FFC  38 21 00 50 */	addi r1, r1, 0x50
/* 800280C0 00025000  4E 80 00 20 */	blr 

.global setMessageCount__12JUTAssertionFi
setMessageCount__12JUTAssertionFi:
/* 800280C4 00025004  7C 03 00 D0 */	neg r0, r3
/* 800280C8 00025008  7C 60 03 38 */	orc r0, r3, r0
/* 800280CC 0002500C  7C 00 FE 70 */	srawi r0, r0, 0x1f
/* 800280D0 00025010  7C 60 00 78 */	andc r0, r3, r0
/* 800280D4 00025014  90 0D 88 68 */	stw r0, "sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@"@sda21(r13)
/* 800280D8 00025018  4E 80 00 20 */	blr 
