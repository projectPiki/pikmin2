.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049ABE8, local
	.asciz "messageRendering.cpp"
.endobj lbl_8049ABE8
.balign 4
.obj lbl_8049AC00, local
	.asciz "P2Assert"
.endobj lbl_8049AC00
.balign 4
.obj lbl_8049AC0C, local
	.asciz "messageRendering.h"
.endobj lbl_8049AC0C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
# array of 11 TColor[2]
.obj "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@", local
	.4byte 0xFFFFFFFF
	.4byte 0x00A60000
	.4byte 0xFFFFFFFF
	.4byte 0xFF000000
	.4byte 0x000000FF
	.4byte 0xFFFF0000
	.4byte 0x000000FF
	.4byte 0xC8C8C800
	.4byte 0x000000FF
	.4byte 0xC8C8C800
	.4byte 0x0000FFFF
	.4byte 0xFFFFFF00
	.4byte 0x000000FF
	.4byte 0xC8C8C800
	.4byte 0x000000FF
	.4byte 0xC8C8C800
	.4byte 0xE1E1E1FF
	.4byte 0x888888FF
	.4byte 0xE1E1E1FF
	.4byte 0x888888FF
	.4byte 0xE1E1E1FF
	.4byte 0x888888FF
.endobj "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@"
.obj lbl_804ECA90, local
	.4byte .L_8043A50C
	.4byte .L_8043A518
	.4byte .L_8043A544
	.4byte .L_8043A830
	.4byte .L_8043AB3C
	.4byte .L_8043AB48
	.4byte .L_8043AB74
	.4byte .L_8043AB80
.endobj lbl_804ECA90
.obj __vt__Q25P2JME19TRenderingProcessor, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q25P2JME19TRenderingProcessorFv
	.4byte do_reset__Q28JMessage10TProcessorFv
	.4byte do_character__Q25P2JME19TRenderingProcessorFi
	.4byte do_tag__Q25P2JME19TRenderingProcessorFUlPCvUl
	.4byte do_systemTagCode__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte do_select_begin__Q25P2JME19TRenderingProcessorFUl
	.4byte do_select_end__Q25P2JME19TRenderingProcessorFv
	.4byte do_select_separate__Q25P2JME19TRenderingProcessorFv
	.4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
	.4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
	.4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
	.4byte do_end___Q28JMessage19TRenderingProcessorFv
	.4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
	.4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
	.4byte do_begin__Q25P2JME19TRenderingProcessorFPCvPCc
	.4byte do_end__Q28JMessage19TRenderingProcessorFv
	.4byte tagColor__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagSize__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagRuby__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagFont__Q25P2JME19TRenderingProcessorFPCvUl
	.4byte tagImage__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte tagColorEX__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte tagControl__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte tagPosition__Q25P2JME19TRenderingProcessorFUsPCvUl
	.4byte update__Q25P2JME19TRenderingProcessorFv
	.4byte reset__Q25P2JME19TRenderingProcessorFv
	.4byte newParagraph__Q25P2JME19TRenderingProcessorFv
	.4byte doDrawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff
	.4byte doDrawRuby__Q25P2JME19TRenderingProcessorFffffib
	.4byte doDrawLetter__Q25P2JME19TRenderingProcessorFffffib
	.4byte doTagControlAbtnWait__Q25P2JME19TRenderingProcessorFv
.endobj __vt__Q25P2JME19TRenderingProcessor
.obj __vt__Q25P2JME23TRenderingProcessorBase, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q25P2JME23TRenderingProcessorBaseFv
	.4byte do_reset__Q28JMessage10TProcessorFv
	.4byte do_character__Q25P2JME23TRenderingProcessorBaseFi
	.4byte do_tag__Q25P2JME23TRenderingProcessorBaseFUlPCvUl
	.4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
	.4byte do_select_begin__Q28JMessage10TProcessorFUl
	.4byte do_select_end__Q28JMessage10TProcessorFv
	.4byte do_select_separate__Q28JMessage10TProcessorFv
	.4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
	.4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
	.4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
	.4byte do_end___Q28JMessage19TRenderingProcessorFv
	.4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
	.4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
	.4byte do_begin__Q28JMessage19TRenderingProcessorFPCvPCc
	.4byte do_end__Q28JMessage19TRenderingProcessorFv
	.4byte tagColor__Q25P2JME23TRenderingProcessorBaseFPCvUl
	.4byte tagSize__Q25P2JME23TRenderingProcessorBaseFPCvUl
	.4byte tagRuby__Q25P2JME23TRenderingProcessorBaseFPCvUl
	.4byte tagFont__Q25P2JME23TRenderingProcessorBaseFPCvUl
	.4byte tagImage__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
	.4byte tagColorEX__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
	.4byte tagControl__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
	.4byte tagPosition__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
.endobj __vt__Q25P2JME23TRenderingProcessorBase

.section .bss  # 0x804EFC20 - 0x8051467C
.balign 8
.lcomm sRubyDataBuffer__5P2JME, 0x21, 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj cPageInfoBufferNum__Q25P2JME19TRenderingProcessor, global
	.4byte 10
.endobj cPageInfoBufferNum__Q25P2JME19TRenderingProcessor
.obj lbl_805208BC, local
	.float 100.0
.endobj lbl_805208BC
.obj lbl_805208C0, local
	.float 0.0
.endobj lbl_805208C0
.obj lbl_805208C4, local
	.float 1.0
.endobj lbl_805208C4
.obj lbl_805208C8, local
	.float 42.0
.endobj lbl_805208C8
.obj lbl_805208CC, local
	.float 0.5
.endobj lbl_805208CC
.balign 8
.obj lbl_805208D0, local
	.8byte 0x4330000080000000
.endobj lbl_805208D0
.balign 8
.obj lbl_805208D8, local
	.8byte 0x4330000000000000
.endobj lbl_805208D8
.obj lbl_805208E0, local
	.float 32.0
.endobj lbl_805208E0
.obj lbl_805208E4, local
	.float 255.0
.endobj lbl_805208E4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q25P2JME23TRenderingProcessorBaseFPCQ28JMessage10TReference, global
/* 804391F0 00436130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804391F4 00436134  7C 08 02 A6 */	mflr r0
/* 804391F8 00436138  90 01 00 14 */	stw r0, 0x14(r1)
/* 804391FC 0043613C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80439200 00436140  7C 7F 1B 78 */	mr r31, r3
/* 80439204 00436144  4B BC EE BD */	bl __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference
/* 80439208 00436148  3C 80 80 4F */	lis r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
/* 8043920C 0043614C  7F E3 FB 78 */	mr r3, r31
/* 80439210 00436150  38 04 CB 34 */	addi r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
/* 80439214 00436154  90 1F 00 00 */	stw r0, 0(r31)
/* 80439218 00436158  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043921C 0043615C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80439220 00436160  7C 08 03 A6 */	mtlr r0
/* 80439224 00436164  38 21 00 10 */	addi r1, r1, 0x10
/* 80439228 00436168  4E 80 00 20 */	blr 
.endfn __ct__Q25P2JME23TRenderingProcessorBaseFPCQ28JMessage10TReference

.fn do_tag__Q25P2JME23TRenderingProcessorBaseFUlPCvUl, global
/* 8043922C 0043616C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80439230 00436170  7C 08 02 A6 */	mflr r0
/* 80439234 00436174  54 87 86 3E */	rlwinm r7, r4, 0x10, 0x18, 0x1f
/* 80439238 00436178  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 8043923C 0043617C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80439240 00436180  28 07 00 C0 */	cmplwi r7, 0xc0
/* 80439244 00436184  38 00 00 00 */	li r0, 0
/* 80439248 00436188  40 80 00 94 */	bge .L_804392DC
/* 8043924C 0043618C  2C 07 00 02 */	cmpwi r7, 2
/* 80439250 00436190  41 82 00 54 */	beq .L_804392A4
/* 80439254 00436194  40 80 00 14 */	bge .L_80439268
/* 80439258 00436198  2C 07 00 00 */	cmpwi r7, 0
/* 8043925C 0043619C  41 82 00 18 */	beq .L_80439274
/* 80439260 004361A0  40 80 00 2C */	bge .L_8043928C
/* 80439264 004361A4  48 00 00 70 */	b .L_804392D4
.L_80439268:
/* 80439268 004361A8  2C 07 00 04 */	cmpwi r7, 4
/* 8043926C 004361AC  40 80 00 68 */	bge .L_804392D4
/* 80439270 004361B0  48 00 00 4C */	b .L_804392BC
.L_80439274:
/* 80439274 004361B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80439278 004361B8  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8043927C 004361BC  7D 89 03 A6 */	mtctr r12
/* 80439280 004361C0  4E 80 04 21 */	bctrl 
/* 80439284 004361C4  7C 60 1B 78 */	mr r0, r3
/* 80439288 004361C8  48 00 01 04 */	b .L_8043938C
.L_8043928C:
/* 8043928C 004361CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80439290 004361D0  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80439294 004361D4  7D 89 03 A6 */	mtctr r12
/* 80439298 004361D8  4E 80 04 21 */	bctrl 
/* 8043929C 004361DC  7C 60 1B 78 */	mr r0, r3
/* 804392A0 004361E0  48 00 00 EC */	b .L_8043938C
.L_804392A4:
/* 804392A4 004361E4  81 83 00 00 */	lwz r12, 0(r3)
/* 804392A8 004361E8  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 804392AC 004361EC  7D 89 03 A6 */	mtctr r12
/* 804392B0 004361F0  4E 80 04 21 */	bctrl 
/* 804392B4 004361F4  7C 60 1B 78 */	mr r0, r3
/* 804392B8 004361F8  48 00 00 D4 */	b .L_8043938C
.L_804392BC:
/* 804392BC 004361FC  81 83 00 00 */	lwz r12, 0(r3)
/* 804392C0 00436200  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 804392C4 00436204  7D 89 03 A6 */	mtctr r12
/* 804392C8 00436208  4E 80 04 21 */	bctrl 
/* 804392CC 0043620C  7C 60 1B 78 */	mr r0, r3
/* 804392D0 00436210  48 00 00 BC */	b .L_8043938C
.L_804392D4:
/* 804392D4 00436214  38 00 00 01 */	li r0, 1
/* 804392D8 00436218  48 00 00 B4 */	b .L_8043938C
.L_804392DC:
/* 804392DC 0043621C  28 07 00 FF */	cmplwi r7, 0xff
/* 804392E0 00436220  40 82 00 AC */	bne .L_8043938C
/* 804392E4 00436224  2C 04 00 02 */	cmpwi r4, 2
/* 804392E8 00436228  41 82 00 68 */	beq .L_80439350
/* 804392EC 0043622C  40 80 00 14 */	bge .L_80439300
/* 804392F0 00436230  2C 04 00 00 */	cmpwi r4, 0
/* 804392F4 00436234  41 82 00 1C */	beq .L_80439310
/* 804392F8 00436238  40 80 00 38 */	bge .L_80439330
/* 804392FC 0043623C  48 00 00 90 */	b .L_8043938C
.L_80439300:
/* 80439300 00436240  2C 04 00 04 */	cmpwi r4, 4
/* 80439304 00436244  41 82 00 88 */	beq .L_8043938C
/* 80439308 00436248  40 80 00 84 */	bge .L_8043938C
/* 8043930C 0043624C  48 00 00 64 */	b .L_80439370
.L_80439310:
/* 80439310 00436250  81 83 00 00 */	lwz r12, 0(r3)
/* 80439314 00436254  7C A4 2B 78 */	mr r4, r5
/* 80439318 00436258  7C C5 33 78 */	mr r5, r6
/* 8043931C 0043625C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80439320 00436260  7D 89 03 A6 */	mtctr r12
/* 80439324 00436264  4E 80 04 21 */	bctrl 
/* 80439328 00436268  7C 60 1B 78 */	mr r0, r3
/* 8043932C 0043626C  48 00 00 60 */	b .L_8043938C
.L_80439330:
/* 80439330 00436270  81 83 00 00 */	lwz r12, 0(r3)
/* 80439334 00436274  7C A4 2B 78 */	mr r4, r5
/* 80439338 00436278  7C C5 33 78 */	mr r5, r6
/* 8043933C 0043627C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80439340 00436280  7D 89 03 A6 */	mtctr r12
/* 80439344 00436284  4E 80 04 21 */	bctrl 
/* 80439348 00436288  7C 60 1B 78 */	mr r0, r3
/* 8043934C 0043628C  48 00 00 40 */	b .L_8043938C
.L_80439350:
/* 80439350 00436290  81 83 00 00 */	lwz r12, 0(r3)
/* 80439354 00436294  7C A4 2B 78 */	mr r4, r5
/* 80439358 00436298  7C C5 33 78 */	mr r5, r6
/* 8043935C 0043629C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80439360 004362A0  7D 89 03 A6 */	mtctr r12
/* 80439364 004362A4  4E 80 04 21 */	bctrl 
/* 80439368 004362A8  7C 60 1B 78 */	mr r0, r3
/* 8043936C 004362AC  48 00 00 20 */	b .L_8043938C
.L_80439370:
/* 80439370 004362B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80439374 004362B4  7C A4 2B 78 */	mr r4, r5
/* 80439378 004362B8  7C C5 33 78 */	mr r5, r6
/* 8043937C 004362BC  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80439380 004362C0  7D 89 03 A6 */	mtctr r12
/* 80439384 004362C4  4E 80 04 21 */	bctrl 
/* 80439388 004362C8  7C 60 1B 78 */	mr r0, r3
.L_8043938C:
/* 8043938C 004362CC  7C 03 03 78 */	mr r3, r0
/* 80439390 004362D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80439394 004362D4  7C 08 03 A6 */	mtlr r0
/* 80439398 004362D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8043939C 004362DC  4E 80 00 20 */	blr 
.endfn do_tag__Q25P2JME23TRenderingProcessorBaseFUlPCvUl

.fn tagFont__Q25P2JME23TRenderingProcessorBaseFPCvUl, weak
/* 804393A0 004362E0  38 60 00 01 */	li r3, 1
/* 804393A4 004362E4  4E 80 00 20 */	blr 
.endfn tagFont__Q25P2JME23TRenderingProcessorBaseFPCvUl

.fn tagRuby__Q25P2JME23TRenderingProcessorBaseFPCvUl, weak
/* 804393A8 004362E8  38 60 00 01 */	li r3, 1
/* 804393AC 004362EC  4E 80 00 20 */	blr 
.endfn tagRuby__Q25P2JME23TRenderingProcessorBaseFPCvUl

.fn tagSize__Q25P2JME23TRenderingProcessorBaseFPCvUl, weak
/* 804393B0 004362F0  38 60 00 01 */	li r3, 1
/* 804393B4 004362F4  4E 80 00 20 */	blr 
.endfn tagSize__Q25P2JME23TRenderingProcessorBaseFPCvUl

.fn tagColor__Q25P2JME23TRenderingProcessorBaseFPCvUl, weak
/* 804393B8 004362F8  38 60 00 01 */	li r3, 1
/* 804393BC 004362FC  4E 80 00 20 */	blr 
.endfn tagColor__Q25P2JME23TRenderingProcessorBaseFPCvUl

.fn tagPosition__Q25P2JME23TRenderingProcessorBaseFUsPCvUl, weak
/* 804393C0 00436300  38 60 00 01 */	li r3, 1
/* 804393C4 00436304  4E 80 00 20 */	blr 
.endfn tagPosition__Q25P2JME23TRenderingProcessorBaseFUsPCvUl

.fn tagControl__Q25P2JME23TRenderingProcessorBaseFUsPCvUl, weak
/* 804393C8 00436308  38 60 00 01 */	li r3, 1
/* 804393CC 0043630C  4E 80 00 20 */	blr 
.endfn tagControl__Q25P2JME23TRenderingProcessorBaseFUsPCvUl

.fn tagColorEX__Q25P2JME23TRenderingProcessorBaseFUsPCvUl, weak
/* 804393D0 00436310  38 60 00 01 */	li r3, 1
/* 804393D4 00436314  4E 80 00 20 */	blr 
.endfn tagColorEX__Q25P2JME23TRenderingProcessorBaseFUsPCvUl

.fn tagImage__Q25P2JME23TRenderingProcessorBaseFUsPCvUl, weak
/* 804393D8 00436318  38 60 00 01 */	li r3, 1
/* 804393DC 0043631C  4E 80 00 20 */	blr 
.endfn tagImage__Q25P2JME23TRenderingProcessorBaseFUsPCvUl

.fn __ct__Q25P2JME19TRenderingProcessorFPCQ28JMessage10TReference, global
/* 804393E0 00436320  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804393E4 00436324  7C 08 02 A6 */	mflr r0
/* 804393E8 00436328  90 01 00 14 */	stw r0, 0x14(r1)
/* 804393EC 0043632C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804393F0 00436330  7C 7F 1B 78 */	mr r31, r3
/* 804393F4 00436334  7F E0 FB 78 */	mr r0, r31
/* 804393F8 00436338  93 C1 00 08 */	stw r30, 8(r1)
/* 804393FC 0043633C  7C 1E 03 78 */	mr r30, r0
/* 80439400 00436340  4B BC EC C1 */	bl __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference
/* 80439404 00436344  3C 80 80 4F */	lis r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
/* 80439408 00436348  3C 60 80 4F */	lis r3, __vt__Q25P2JME19TRenderingProcessor@ha
/* 8043940C 0043634C  38 04 CB 34 */	addi r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
/* 80439410 00436350  C0 02 25 5C */	lfs f0, lbl_805208BC@sda21(r2)
/* 80439414 00436354  90 1E 00 00 */	stw r0, 0(r30)
/* 80439418 00436358  38 03 CA B0 */	addi r0, r3, __vt__Q25P2JME19TRenderingProcessor@l
/* 8043941C 0043635C  38 80 00 00 */	li r4, 0
/* 80439420 00436360  C0 62 25 60 */	lfs f3, lbl_805208C0@sda21(r2)
/* 80439424 00436364  90 1F 00 00 */	stw r0, 0(r31)
/* 80439428 00436368  38 60 FF FF */	li r3, -1
/* 8043942C 0043636C  38 00 00 FF */	li r0, 0xff
/* 80439430 00436370  C0 42 25 64 */	lfs f2, lbl_805208C4@sda21(r2)
/* 80439434 00436374  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80439438 00436378  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8043943C 0043637C  90 9F 00 44 */	stw r4, 0x44(r31)
/* 80439440 00436380  90 9F 00 48 */	stw r4, 0x48(r31)
/* 80439444 00436384  90 9F 00 4C */	stw r4, 0x4c(r31)
/* 80439448 00436388  90 9F 00 50 */	stw r4, 0x50(r31)
/* 8043944C 0043638C  D0 7F 00 54 */	stfs f3, 0x54(r31)
/* 80439450 00436390  D0 7F 00 58 */	stfs f3, 0x58(r31)
/* 80439454 00436394  90 9F 00 5C */	stw r4, 0x5c(r31)
/* 80439458 00436398  90 7F 00 60 */	stw r3, 0x60(r31)
/* 8043945C 0043639C  98 1F 00 64 */	stb r0, 0x64(r31)
/* 80439460 004363A0  98 1F 00 65 */	stb r0, 0x65(r31)
/* 80439464 004363A4  98 1F 00 66 */	stb r0, 0x66(r31)
/* 80439468 004363A8  98 1F 00 67 */	stb r0, 0x67(r31)
/* 8043946C 004363AC  98 1F 00 68 */	stb r0, 0x68(r31)
/* 80439470 004363B0  98 1F 00 69 */	stb r0, 0x69(r31)
/* 80439474 004363B4  98 1F 00 6A */	stb r0, 0x6a(r31)
/* 80439478 004363B8  98 1F 00 6B */	stb r0, 0x6b(r31)
/* 8043947C 004363BC  98 1F 00 6C */	stb r0, 0x6c(r31)
/* 80439480 004363C0  98 1F 00 6D */	stb r0, 0x6d(r31)
/* 80439484 004363C4  98 1F 00 6E */	stb r0, 0x6e(r31)
/* 80439488 004363C8  98 1F 00 6F */	stb r0, 0x6f(r31)
/* 8043948C 004363CC  98 1F 00 70 */	stb r0, 0x70(r31)
/* 80439490 004363D0  98 1F 00 71 */	stb r0, 0x71(r31)
/* 80439494 004363D4  98 1F 00 72 */	stb r0, 0x72(r31)
/* 80439498 004363D8  98 1F 00 73 */	stb r0, 0x73(r31)
/* 8043949C 004363DC  98 1F 00 74 */	stb r0, 0x74(r31)
/* 804394A0 004363E0  98 1F 00 75 */	stb r0, 0x75(r31)
/* 804394A4 004363E4  98 1F 00 76 */	stb r0, 0x76(r31)
/* 804394A8 004363E8  98 1F 00 77 */	stb r0, 0x77(r31)
/* 804394AC 004363EC  D0 5F 00 78 */	stfs f2, 0x78(r31)
/* 804394B0 004363F0  D0 5F 00 7C */	stfs f2, 0x7c(r31)
/* 804394B4 004363F4  D0 5F 00 80 */	stfs f2, 0x80(r31)
/* 804394B8 004363F8  D0 5F 00 84 */	stfs f2, 0x84(r31)
/* 804394BC 004363FC  D0 5F 00 88 */	stfs f2, 0x88(r31)
/* 804394C0 00436400  98 9F 00 8C */	stb r4, 0x8c(r31)
/* 804394C4 00436404  98 9F 00 8D */	stb r4, 0x8d(r31)
/* 804394C8 00436408  98 9F 00 8E */	stb r4, 0x8e(r31)
/* 804394CC 0043640C  98 9F 00 8F */	stb r4, 0x8f(r31)
/* 804394D0 00436410  D0 7F 00 90 */	stfs f3, 0x90(r31)
/* 804394D4 00436414  D0 7F 00 94 */	stfs f3, 0x94(r31)
/* 804394D8 00436418  D0 7F 00 98 */	stfs f3, 0x98(r31)
/* 804394DC 0043641C  D0 7F 00 9C */	stfs f3, 0x9c(r31)
/* 804394E0 00436420  98 9F 00 A4 */	stb r4, 0xa4(r31)
/* 804394E4 00436424  98 9F 00 A5 */	stb r4, 0xa5(r31)
/* 804394E8 00436428  98 9F 00 A6 */	stb r4, 0xa6(r31)
/* 804394EC 0043642C  D0 7F 00 BC */	stfs f3, 0xbc(r31)
/* 804394F0 00436430  38 60 01 00 */	li r3, 0x100
/* 804394F4 00436434  C0 22 25 68 */	lfs f1, lbl_805208C8@sda21(r2)
/* 804394F8 00436438  C0 02 25 6C */	lfs f0, lbl_805208CC@sda21(r2)
/* 804394FC 0043643C  D0 3F 00 C0 */	stfs f1, 0xc0(r31)
/* 80439500 00436440  D0 7F 00 C4 */	stfs f3, 0xc4(r31)
/* 80439504 00436444  D0 3F 00 C8 */	stfs f1, 0xc8(r31)
/* 80439508 00436448  98 9F 00 CC */	stb r4, 0xcc(r31)
/* 8043950C 0043644C  98 9F 00 CD */	stb r4, 0xcd(r31)
/* 80439510 00436450  98 9F 00 CE */	stb r4, 0xce(r31)
/* 80439514 00436454  98 9F 00 CF */	stb r4, 0xcf(r31)
/* 80439518 00436458  98 1F 00 D0 */	stb r0, 0xd0(r31)
/* 8043951C 0043645C  98 1F 00 D1 */	stb r0, 0xd1(r31)
/* 80439520 00436460  98 1F 00 D2 */	stb r0, 0xd2(r31)
/* 80439524 00436464  98 1F 00 D3 */	stb r0, 0xd3(r31)
/* 80439528 00436468  98 1F 00 D4 */	stb r0, 0xd4(r31)
/* 8043952C 0043646C  98 1F 00 D5 */	stb r0, 0xd5(r31)
/* 80439530 00436470  98 1F 00 D6 */	stb r0, 0xd6(r31)
/* 80439534 00436474  98 1F 00 D7 */	stb r0, 0xd7(r31)
/* 80439538 00436478  98 1F 00 D8 */	stb r0, 0xd8(r31)
/* 8043953C 0043647C  98 1F 00 D9 */	stb r0, 0xd9(r31)
/* 80439540 00436480  98 1F 00 DA */	stb r0, 0xda(r31)
/* 80439544 00436484  98 1F 00 DB */	stb r0, 0xdb(r31)
/* 80439548 00436488  D0 5F 00 E0 */	stfs f2, 0xe0(r31)
/* 8043954C 0043648C  D0 5F 00 E4 */	stfs f2, 0xe4(r31)
/* 80439550 00436490  D0 5F 00 E8 */	stfs f2, 0xe8(r31)
/* 80439554 00436494  D0 5F 00 EC */	stfs f2, 0xec(r31)
/* 80439558 00436498  98 9F 00 F2 */	stb r4, 0xf2(r31)
/* 8043955C 0043649C  D0 1F 01 0C */	stfs f0, 0x10c(r31)
/* 80439560 004364A0  98 9F 00 8C */	stb r4, 0x8c(r31)
/* 80439564 004364A4  98 9F 00 8D */	stb r4, 0x8d(r31)
/* 80439568 004364A8  98 9F 00 8E */	stb r4, 0x8e(r31)
/* 8043956C 004364AC  98 9F 00 8F */	stb r4, 0x8f(r31)
/* 80439570 004364B0  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 80439574 004364B4  54 00 07 30 */	rlwinm r0, r0, 0, 0x1c, 0x18
/* 80439578 004364B8  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 8043957C 004364BC  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 80439580 004364C0  60 00 00 10 */	ori r0, r0, 0x10
/* 80439584 004364C4  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 80439588 004364C8  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 8043958C 004364CC  54 00 06 28 */	rlwinm r0, r0, 0, 0x18, 0x14
/* 80439590 004364D0  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 80439594 004364D4  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 80439598 004364D8  60 00 01 00 */	ori r0, r0, 0x100
/* 8043959C 004364DC  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 804395A0 004364E0  4B BE AA 0D */	bl __nwa__FUl
/* 804395A4 004364E4  90 7F 00 A8 */	stw r3, 0xa8(r31)
/* 804395A8 004364E8  7F E3 FB 78 */	mr r3, r31
/* 804395AC 004364EC  48 00 2E B5 */	bl resetLineWidth__Q25P2JME19TRenderingProcessorFv
/* 804395B0 004364F0  38 60 00 40 */	li r3, 0x40
/* 804395B4 004364F4  4B BE A9 F9 */	bl __nwa__FUl
/* 804395B8 004364F8  90 7F 00 AC */	stw r3, 0xac(r31)
/* 804395BC 004364FC  7F E3 FB 78 */	mr r3, r31
/* 804395C0 00436500  48 00 2F B9 */	bl resetOnePageLine__Q25P2JME19TRenderingProcessorFv
/* 804395C4 00436504  3C 80 80 4F */	lis r4, sRubyDataBuffer__5P2JME@ha
/* 804395C8 00436508  38 60 00 14 */	li r3, 0x14
/* 804395CC 0043650C  38 04 7C 48 */	addi r0, r4, sRubyDataBuffer__5P2JME@l
/* 804395D0 00436510  90 1F 01 00 */	stw r0, 0x100(r31)
/* 804395D4 00436514  4B BE A9 D9 */	bl __nwa__FUl
/* 804395D8 00436518  90 7F 00 B0 */	stw r3, 0xb0(r31)
/* 804395DC 0043651C  7F E3 FB 78 */	mr r3, r31
/* 804395E0 00436520  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804395E4 00436524  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804395E8 00436528  83 C1 00 08 */	lwz r30, 8(r1)
/* 804395EC 0043652C  7C 08 03 A6 */	mtlr r0
/* 804395F0 00436530  38 21 00 10 */	addi r1, r1, 0x10
/* 804395F4 00436534  4E 80 00 20 */	blr 
.endfn __ct__Q25P2JME19TRenderingProcessorFPCQ28JMessage10TReference

.fn __dt__Q25P2JME23TRenderingProcessorBaseFv, weak
/* 804395F8 00436538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804395FC 0043653C  7C 08 02 A6 */	mflr r0
/* 80439600 00436540  90 01 00 14 */	stw r0, 0x14(r1)
/* 80439604 00436544  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80439608 00436548  7C 9F 23 78 */	mr r31, r4
/* 8043960C 0043654C  93 C1 00 08 */	stw r30, 8(r1)
/* 80439610 00436550  7C 7E 1B 79 */	or. r30, r3, r3
/* 80439614 00436554  41 82 00 28 */	beq .L_8043963C
/* 80439618 00436558  3C A0 80 4F */	lis r5, __vt__Q25P2JME23TRenderingProcessorBase@ha
/* 8043961C 0043655C  38 80 00 00 */	li r4, 0
/* 80439620 00436560  38 05 CB 34 */	addi r0, r5, __vt__Q25P2JME23TRenderingProcessorBase@l
/* 80439624 00436564  90 1E 00 00 */	stw r0, 0(r30)
/* 80439628 00436568  4B BC EA D5 */	bl __dt__Q28JMessage19TRenderingProcessorFv
/* 8043962C 0043656C  7F E0 07 35 */	extsh. r0, r31
/* 80439630 00436570  40 81 00 0C */	ble .L_8043963C
/* 80439634 00436574  7F C3 F3 78 */	mr r3, r30
/* 80439638 00436578  4B BE AA 7D */	bl __dl__FPv
.L_8043963C:
/* 8043963C 0043657C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80439640 00436580  7F C3 F3 78 */	mr r3, r30
/* 80439644 00436584  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80439648 00436588  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043964C 0043658C  7C 08 03 A6 */	mtlr r0
/* 80439650 00436590  38 21 00 10 */	addi r1, r1, 0x10
/* 80439654 00436594  4E 80 00 20 */	blr 
.endfn __dt__Q25P2JME23TRenderingProcessorBaseFv

.fn do_begin__Q25P2JME19TRenderingProcessorFPCvPCc, global
/* 80439658 00436598  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8043965C 0043659C  7C 08 02 A6 */	mflr r0
/* 80439660 004365A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80439664 004365A4  38 00 00 00 */	li r0, 0
/* 80439668 004365A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8043966C 004365AC  7C 9F 23 78 */	mr r31, r4
/* 80439670 004365B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80439674 004365B4  7C 7E 1B 78 */	mr r30, r3
/* 80439678 004365B8  C0 03 00 E8 */	lfs f0, 0xe8(r3)
/* 8043967C 004365BC  D0 03 00 E0 */	stfs f0, 0xe0(r3)
/* 80439680 004365C0  C0 03 00 EC */	lfs f0, 0xec(r3)
/* 80439684 004365C4  D0 03 00 E4 */	stfs f0, 0xe4(r3)
/* 80439688 004365C8  98 03 00 F0 */	stb r0, 0xf0(r3)
/* 8043968C 004365CC  98 03 00 F1 */	stb r0, 0xf1(r3)
/* 80439690 004365D0  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 80439694 004365D4  90 03 00 40 */	stw r0, 0x40(r3)
/* 80439698 004365D8  48 00 15 41 */	bl initRuby__Q25P2JME19TRenderingProcessorFv
/* 8043969C 004365DC  88 7F 00 04 */	lbz r3, 4(r31)
/* 804396A0 004365E0  3C 00 43 30 */	lis r0, 0x4330
/* 804396A4 004365E4  90 01 00 10 */	stw r0, 0x10(r1)
/* 804396A8 004365E8  38 00 00 00 */	li r0, 0
/* 804396AC 004365EC  7C 63 07 74 */	extsb r3, r3
/* 804396B0 004365F0  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 804396B4 004365F4  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 804396B8 004365F8  7F C3 F3 78 */	mr r3, r30
/* 804396BC 004365FC  90 81 00 14 */	stw r4, 0x14(r1)
/* 804396C0 00436600  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 804396C4 00436604  EC 00 08 28 */	fsubs f0, f0, f1
/* 804396C8 00436608  D0 1E 00 BC */	stfs f0, 0xbc(r30)
/* 804396CC 0043660C  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 804396D0 00436610  C0 1E 00 C0 */	lfs f0, 0xc0(r30)
/* 804396D4 00436614  D0 1E 00 C8 */	stfs f0, 0xc8(r30)
/* 804396D8 00436618  80 9E 00 8C */	lwz r4, 0x8c(r30)
/* 804396DC 0043661C  54 84 01 04 */	rlwinm r4, r4, 0, 4, 2
/* 804396E0 00436620  90 9E 00 8C */	stw r4, 0x8c(r30)
/* 804396E4 00436624  98 1E 00 A6 */	stb r0, 0xa6(r30)
/* 804396E8 00436628  98 1E 00 A4 */	stb r0, 0xa4(r30)
/* 804396EC 0043662C  98 1E 00 A5 */	stb r0, 0xa5(r30)
/* 804396F0 00436630  48 00 00 51 */	bl setDrawLocate__Q25P2JME19TRenderingProcessorFv
/* 804396F4 00436634  38 00 00 00 */	li r0, 0
/* 804396F8 00436638  38 81 00 0C */	addi r4, r1, 0xc
/* 804396FC 0043663C  98 1E 00 DC */	stb r0, 0xdc(r30)
/* 80439700 00436640  38 A1 00 08 */	addi r5, r1, 8
/* 80439704 00436644  80 1E 00 D0 */	lwz r0, 0xd0(r30)
/* 80439708 00436648  90 01 00 08 */	stw r0, 8(r1)
/* 8043970C 0043664C  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 80439710 00436650  90 01 00 0C */	stw r0, 0xc(r1)
/* 80439714 00436654  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80439718 00436658  81 83 00 00 */	lwz r12, 0(r3)
/* 8043971C 0043665C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80439720 00436660  7D 89 03 A6 */	mtctr r12
/* 80439724 00436664  4E 80 04 21 */	bctrl 
/* 80439728 00436668  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8043972C 0043666C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80439730 00436670  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80439734 00436674  7C 08 03 A6 */	mtlr r0
/* 80439738 00436678  38 21 00 20 */	addi r1, r1, 0x20
/* 8043973C 0043667C  4E 80 00 20 */	blr 
.endfn do_begin__Q25P2JME19TRenderingProcessorFPCvPCc

.fn setDrawLocate__Q25P2JME19TRenderingProcessorFv, weak
/* 80439740 00436680  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80439744 00436684  7C 08 02 A6 */	mflr r0
/* 80439748 00436688  90 01 00 64 */	stw r0, 0x64(r1)
/* 8043974C 0043668C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80439750 00436690  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80439754 00436694  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80439758 00436698  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8043975C 0043669C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80439760 004366A0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80439764 004366A4  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80439768 004366A8  7C 7F 1B 78 */	mr r31, r3
/* 8043976C 004366AC  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 80439770 004366B0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80439774 004366B4  41 82 00 10 */	beq .L_80439784
/* 80439778 004366B8  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 8043977C 004366BC  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 80439780 004366C0  48 00 00 64 */	b .L_804397E4
.L_80439784:
/* 80439784 004366C4  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 80439788 004366C8  41 82 00 2C */	beq .L_804397B4
/* 8043978C 004366CC  88 1F 00 A4 */	lbz r0, 0xa4(r31)
/* 80439790 004366D0  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 80439794 004366D4  54 00 10 3A */	slwi r0, r0, 2
/* 80439798 004366D8  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 8043979C 004366DC  7C 03 04 2E */	lfsx f0, r3, r0
/* 804397A0 004366E0  C0 42 25 6C */	lfs f2, lbl_805208CC@sda21(r2)
/* 804397A4 004366E4  EC 01 00 28 */	fsubs f0, f1, f0
/* 804397A8 004366E8  EC 02 00 32 */	fmuls f0, f2, f0
/* 804397AC 004366EC  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 804397B0 004366F0  48 00 00 34 */	b .L_804397E4
.L_804397B4:
/* 804397B4 004366F4  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 804397B8 004366F8  41 82 00 24 */	beq .L_804397DC
/* 804397BC 004366FC  88 1F 00 A4 */	lbz r0, 0xa4(r31)
/* 804397C0 00436700  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 804397C4 00436704  54 00 10 3A */	slwi r0, r0, 2
/* 804397C8 00436708  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 804397CC 0043670C  7C 03 04 2E */	lfsx f0, r3, r0
/* 804397D0 00436710  EC 01 00 28 */	fsubs f0, f1, f0
/* 804397D4 00436714  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 804397D8 00436718  48 00 00 0C */	b .L_804397E4
.L_804397DC:
/* 804397DC 0043671C  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 804397E0 00436720  D0 1F 00 90 */	stfs f0, 0x90(r31)
.L_804397E4:
/* 804397E4 00436724  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 804397E8 00436728  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 804397EC 0043672C  41 82 00 84 */	beq .L_80439870
/* 804397F0 00436730  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 804397F4 00436734  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 804397F8 00436738  81 83 00 00 */	lwz r12, 0(r3)
/* 804397FC 0043673C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80439800 00436740  7D 89 03 A6 */	mtctr r12
/* 80439804 00436744  4E 80 04 21 */	bctrl 
/* 80439808 00436748  3C 80 43 30 */	lis r4, 0x4330
/* 8043980C 0043674C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80439810 00436750  90 01 00 0C */	stw r0, 0xc(r1)
/* 80439814 00436754  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 80439818 00436758  90 81 00 08 */	stw r4, 8(r1)
/* 8043981C 0043675C  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 80439820 00436760  C8 01 00 08 */	lfd f0, 8(r1)
/* 80439824 00436764  90 01 00 14 */	stw r0, 0x14(r1)
/* 80439828 00436768  EC 80 08 28 */	fsubs f4, f0, f1
/* 8043982C 0043676C  C0 5F 00 EC */	lfs f2, 0xec(r31)
/* 80439830 00436770  90 81 00 10 */	stw r4, 0x10(r1)
/* 80439834 00436774  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 80439838 00436778  C8 62 25 78 */	lfd f3, lbl_805208D8@sda21(r2)
/* 8043983C 0043677C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80439840 00436780  EC A2 09 3A */	fmadds f5, f2, f4, f1
/* 80439844 00436784  93 C1 00 1C */	stw r30, 0x1c(r1)
/* 80439848 00436788  EC 40 18 28 */	fsubs f2, f0, f3
/* 8043984C 0043678C  C0 9F 00 3C */	lfs f4, 0x3c(r31)
/* 80439850 00436790  90 81 00 18 */	stw r4, 0x18(r1)
/* 80439854 00436794  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 80439858 00436798  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043985C 0043679C  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 80439860 004367A0  EC 00 18 28 */	fsubs f0, f0, f3
/* 80439864 004367A4  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80439868 004367A8  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043986C 004367AC  48 00 02 58 */	b .L_80439AC4
.L_80439870:
/* 80439870 004367B0  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80439874 004367B4  41 82 01 2C */	beq .L_804399A0
/* 80439878 004367B8  8B BF 00 A6 */	lbz r29, 0xa6(r31)
/* 8043987C 004367BC  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 80439880 004367C0  57 A0 0D FC */	rlwinm r0, r29, 1, 0x17, 0x1e
/* 80439884 004367C4  C0 42 25 60 */	lfs f2, lbl_805208C0@sda21(r2)
/* 80439888 004367C8  7C 63 02 14 */	add r3, r3, r0
/* 8043988C 004367CC  88 A3 00 01 */	lbz r5, 1(r3)
/* 80439890 004367D0  FC 20 10 90 */	fmr f1, f2
/* 80439894 004367D4  88 63 00 00 */	lbz r3, 0(r3)
/* 80439898 004367D8  38 05 00 01 */	addi r0, r5, 1
/* 8043989C 004367DC  7C 03 00 50 */	subf r0, r3, r0
/* 804398A0 004367E0  54 64 10 3A */	slwi r4, r3, 2
/* 804398A4 004367E4  7C 09 03 A6 */	mtctr r0
/* 804398A8 004367E8  7C 03 28 00 */	cmpw r3, r5
/* 804398AC 004367EC  41 81 00 24 */	bgt .L_804398D0
.L_804398B0:
/* 804398B0 004367F0  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 804398B4 004367F4  7C 03 24 2E */	lfsx f0, r3, r4
/* 804398B8 004367F8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 804398BC 004367FC  40 81 00 0C */	ble .L_804398C8
/* 804398C0 00436800  C0 1F 00 C8 */	lfs f0, 0xc8(r31)
/* 804398C4 00436804  EC 42 00 2A */	fadds f2, f2, f0
.L_804398C8:
/* 804398C8 00436808  38 84 00 04 */	addi r4, r4, 4
/* 804398CC 0043680C  42 00 FF E4 */	bdnz .L_804398B0
.L_804398D0:
/* 804398D0 00436810  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 804398D4 00436814  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 804398D8 00436818  EC 00 10 28 */	fsubs f0, f0, f2
/* 804398DC 0043681C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 804398E0 00436820  81 83 00 00 */	lwz r12, 0(r3)
/* 804398E4 00436824  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 804398E8 00436828  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804398EC 0043682C  EF E1 00 32 */	fmuls f31, f1, f0
/* 804398F0 00436830  7D 89 03 A6 */	mtctr r12
/* 804398F4 00436834  4E 80 04 21 */	bctrl 
/* 804398F8 00436838  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804398FC 0043683C  3C 00 43 30 */	lis r0, 0x4330
/* 80439900 00436840  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80439904 00436844  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 80439908 00436848  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043990C 0043684C  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 80439910 00436850  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80439914 00436854  81 83 00 00 */	lwz r12, 0(r3)
/* 80439918 00436858  EC 40 08 28 */	fsubs f2, f0, f1
/* 8043991C 0043685C  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 80439920 00436860  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 80439924 00436864  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80439928 00436868  EF C1 00 BA */	fmadds f30, f1, f2, f0
/* 8043992C 0043686C  7D 89 03 A6 */	mtctr r12
/* 80439930 00436870  4E 80 04 21 */	bctrl 
/* 80439934 00436874  3C 00 43 30 */	lis r0, 0x4330
/* 80439938 00436878  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043993C 0043687C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80439940 00436880  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 80439944 00436884  90 01 00 10 */	stw r0, 0x10(r1)
/* 80439948 00436888  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 8043994C 0043688C  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 80439950 00436890  C0 BF 00 C8 */	lfs f5, 0xc8(r31)
/* 80439954 00436894  EC 41 10 28 */	fsubs f2, f1, f2
/* 80439958 00436898  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8043995C 0043689C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 80439960 004368A0  90 01 00 08 */	stw r0, 8(r1)
/* 80439964 004368A4  EC 60 28 BC */	fnmsubs f3, f0, f2, f5
/* 80439968 004368A8  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043996C 004368AC  C8 01 00 08 */	lfd f0, 8(r1)
/* 80439970 004368B0  93 C1 00 24 */	stw r30, 0x24(r1)
/* 80439974 004368B4  EC 81 F0 FA */	fmadds f4, f1, f3, f30
/* 80439978 004368B8  C0 7F 00 3C */	lfs f3, 0x3c(r31)
/* 8043997C 004368BC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80439980 004368C0  EC 20 10 28 */	fsubs f1, f0, f2
/* 80439984 004368C4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80439988 004368C8  EC 23 20 7A */	fmadds f1, f3, f1, f4
/* 8043998C 004368CC  EC 00 10 28 */	fsubs f0, f0, f2
/* 80439990 004368D0  EC 05 F8 3A */	fmadds f0, f5, f0, f31
/* 80439994 004368D4  EC 00 08 2A */	fadds f0, f0, f1
/* 80439998 004368D8  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043999C 004368DC  48 00 01 28 */	b .L_80439AC4
.L_804399A0:
/* 804399A0 004368E0  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 804399A4 004368E4  41 82 00 A4 */	beq .L_80439A48
/* 804399A8 004368E8  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 804399AC 004368EC  81 83 00 00 */	lwz r12, 0(r3)
/* 804399B0 004368F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 804399B4 004368F4  7D 89 03 A6 */	mtctr r12
/* 804399B8 004368F8  4E 80 04 21 */	bctrl 
/* 804399BC 004368FC  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 804399C0 00436900  3C A0 43 30 */	lis r5, 0x4330
/* 804399C4 00436904  7C 83 00 D0 */	neg r4, r3
/* 804399C8 00436908  88 7F 00 A5 */	lbz r3, 0xa5(r31)
/* 804399CC 0043690C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 804399D0 00436910  6C 86 80 00 */	xoris r6, r4, 0x8000
/* 804399D4 00436914  C8 22 25 78 */	lfd f1, lbl_805208D8@sda21(r2)
/* 804399D8 00436918  38 83 00 01 */	addi r4, r3, 1
/* 804399DC 0043691C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 804399E0 00436920  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 804399E4 00436924  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 804399E8 00436928  88 1F 00 A4 */	lbz r0, 0xa4(r31)
/* 804399EC 0043692C  EC 00 08 28 */	fsubs f0, f0, f1
/* 804399F0 00436930  C0 22 25 64 */	lfs f1, lbl_805208C4@sda21(r2)
/* 804399F4 00436934  7C 03 00 AE */	lbzx r0, r3, r0
/* 804399F8 00436938  90 C1 00 24 */	stw r6, 0x24(r1)
/* 804399FC 0043693C  7C 04 00 50 */	subf r0, r4, r0
/* 80439A00 00436940  EC 01 00 2A */	fadds f0, f1, f0
/* 80439A04 00436944  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80439A08 00436948  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80439A0C 0043694C  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 80439A10 00436950  C8 A2 25 70 */	lfd f5, lbl_805208D0@sda21(r2)
/* 80439A14 00436954  C8 61 00 20 */	lfd f3, 0x20(r1)
/* 80439A18 00436958  EC 41 00 32 */	fmuls f2, f1, f0
/* 80439A1C 0043695C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80439A20 00436960  EC 83 28 28 */	fsubs f4, f3, f5
/* 80439A24 00436964  C0 7F 00 EC */	lfs f3, 0xec(r31)
/* 80439A28 00436968  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80439A2C 0043696C  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 80439A30 00436970  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80439A34 00436974  EC 43 11 3A */	fmadds f2, f3, f4, f2
/* 80439A38 00436978  EC 00 28 28 */	fsubs f0, f0, f5
/* 80439A3C 0043697C  EC 01 10 3C */	fnmsubs f0, f1, f0, f2
/* 80439A40 00436980  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 80439A44 00436984  48 00 00 80 */	b .L_80439AC4
.L_80439A48:
/* 80439A48 00436988  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 80439A4C 0043698C  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 80439A50 00436990  81 83 00 00 */	lwz r12, 0(r3)
/* 80439A54 00436994  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80439A58 00436998  7D 89 03 A6 */	mtctr r12
/* 80439A5C 0043699C  4E 80 04 21 */	bctrl 
/* 80439A60 004369A0  3C 80 43 30 */	lis r4, 0x4330
/* 80439A64 004369A4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80439A68 004369A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80439A6C 004369AC  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 80439A70 004369B0  90 81 00 20 */	stw r4, 0x20(r1)
/* 80439A74 004369B4  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 80439A78 004369B8  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80439A7C 004369BC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80439A80 004369C0  EC 80 08 28 */	fsubs f4, f0, f1
/* 80439A84 004369C4  C0 5F 00 EC */	lfs f2, 0xec(r31)
/* 80439A88 004369C8  90 81 00 18 */	stw r4, 0x18(r1)
/* 80439A8C 004369CC  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 80439A90 004369D0  C8 62 25 78 */	lfd f3, lbl_805208D8@sda21(r2)
/* 80439A94 004369D4  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80439A98 004369D8  EC A2 09 3A */	fmadds f5, f2, f4, f1
/* 80439A9C 004369DC  93 C1 00 14 */	stw r30, 0x14(r1)
/* 80439AA0 004369E0  EC 40 18 28 */	fsubs f2, f0, f3
/* 80439AA4 004369E4  C0 9F 00 3C */	lfs f4, 0x3c(r31)
/* 80439AA8 004369E8  90 81 00 10 */	stw r4, 0x10(r1)
/* 80439AAC 004369EC  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 80439AB0 004369F0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80439AB4 004369F4  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 80439AB8 004369F8  EC 00 18 28 */	fsubs f0, f0, f3
/* 80439ABC 004369FC  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 80439AC0 00436A00  D0 1F 00 94 */	stfs f0, 0x94(r31)
.L_80439AC4:
/* 80439AC4 00436A04  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80439AC8 00436A08  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80439ACC 00436A0C  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80439AD0 00436A10  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80439AD4 00436A14  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80439AD8 00436A18  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80439ADC 00436A1C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80439AE0 00436A20  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80439AE4 00436A24  7C 08 03 A6 */	mtlr r0
/* 80439AE8 00436A28  38 21 00 60 */	addi r1, r1, 0x60
/* 80439AEC 00436A2C  4E 80 00 20 */	blr 
.endfn setDrawLocate__Q25P2JME19TRenderingProcessorFv

.fn newParagraph__Q25P2JME19TRenderingProcessorFv, global
/* 80439AF0 00436A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80439AF4 00436A34  7C 08 02 A6 */	mflr r0
/* 80439AF8 00436A38  3C 80 80 4A */	lis r4, lbl_8049ABE8@ha
/* 80439AFC 00436A3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80439B00 00436A40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80439B04 00436A44  3B E4 AB E8 */	addi r31, r4, lbl_8049ABE8@l
/* 80439B08 00436A48  93 C1 00 08 */	stw r30, 8(r1)
/* 80439B0C 00436A4C  7C 7E 1B 78 */	mr r30, r3
/* 80439B10 00436A50  48 00 29 2D */	bl setLineWidth__Q25P2JME19TRenderingProcessorFv
/* 80439B14 00436A54  88 7E 00 A4 */	lbz r3, 0xa4(r30)
/* 80439B18 00436A58  38 03 00 01 */	addi r0, r3, 1
/* 80439B1C 00436A5C  98 1E 00 A4 */	stb r0, 0xa4(r30)
/* 80439B20 00436A60  88 1E 00 A4 */	lbz r0, 0xa4(r30)
/* 80439B24 00436A64  28 00 00 40 */	cmplwi r0, 0x40
/* 80439B28 00436A68  41 80 00 18 */	blt .L_80439B40
/* 80439B2C 00436A6C  38 7F 00 00 */	addi r3, r31, 0
/* 80439B30 00436A70  38 BF 00 18 */	addi r5, r31, 0x18
/* 80439B34 00436A74  38 80 01 FD */	li r4, 0x1fd
/* 80439B38 00436A78  4C C6 31 82 */	crclr 6
/* 80439B3C 00436A7C  4B BF 0B 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80439B40:
/* 80439B40 00436A80  88 7E 00 A5 */	lbz r3, 0xa5(r30)
/* 80439B44 00436A84  38 03 00 01 */	addi r0, r3, 1
/* 80439B48 00436A88  98 1E 00 A5 */	stb r0, 0xa5(r30)
/* 80439B4C 00436A8C  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 80439B50 00436A90  54 00 00 C7 */	rlwinm. r0, r0, 0, 3, 3
/* 80439B54 00436A94  41 82 00 58 */	beq .L_80439BAC
/* 80439B58 00436A98  7F C3 F3 78 */	mr r3, r30
/* 80439B5C 00436A9C  48 00 2A F5 */	bl setPageInfo__Q25P2JME19TRenderingProcessorFv
/* 80439B60 00436AA0  7F C3 F3 78 */	mr r3, r30
/* 80439B64 00436AA4  48 00 29 D5 */	bl setOnePageLine__Q25P2JME19TRenderingProcessorFv
/* 80439B68 00436AA8  38 60 00 00 */	li r3, 0
/* 80439B6C 00436AAC  80 02 25 58 */	lwz r0, cPageInfoBufferNum__Q25P2JME19TRenderingProcessor@sda21(r2)
/* 80439B70 00436AB0  98 7E 00 A5 */	stb r3, 0xa5(r30)
/* 80439B74 00436AB4  88 7E 00 A6 */	lbz r3, 0xa6(r30)
/* 80439B78 00436AB8  38 63 00 01 */	addi r3, r3, 1
/* 80439B7C 00436ABC  98 7E 00 A6 */	stb r3, 0xa6(r30)
/* 80439B80 00436AC0  88 7E 00 A6 */	lbz r3, 0xa6(r30)
/* 80439B84 00436AC4  7C 03 00 40 */	cmplw r3, r0
/* 80439B88 00436AC8  41 80 00 18 */	blt .L_80439BA0
/* 80439B8C 00436ACC  38 7F 00 24 */	addi r3, r31, 0x24
/* 80439B90 00436AD0  38 BF 00 18 */	addi r5, r31, 0x18
/* 80439B94 00436AD4  38 80 01 EA */	li r4, 0x1ea
/* 80439B98 00436AD8  4C C6 31 82 */	crclr 6
/* 80439B9C 00436ADC  4B BF 0A A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80439BA0:
/* 80439BA0 00436AE0  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 80439BA4 00436AE4  54 00 01 04 */	rlwinm r0, r0, 0, 4, 2
/* 80439BA8 00436AE8  90 1E 00 8C */	stw r0, 0x8c(r30)
.L_80439BAC:
/* 80439BAC 00436AEC  7F C3 F3 78 */	mr r3, r30
/* 80439BB0 00436AF0  4B FF FB 91 */	bl setDrawLocate__Q25P2JME19TRenderingProcessorFv
/* 80439BB4 00436AF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80439BB8 00436AF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80439BBC 00436AFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80439BC0 00436B00  7C 08 03 A6 */	mtlr r0
/* 80439BC4 00436B04  38 21 00 10 */	addi r1, r1, 0x10
/* 80439BC8 00436B08  4E 80 00 20 */	blr 
.endfn newParagraph__Q25P2JME19TRenderingProcessorFv

.fn do_character__Q25P2JME19TRenderingProcessorFi, global
/* 80439BCC 00436B0C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80439BD0 00436B10  7C 08 02 A6 */	mflr r0
/* 80439BD4 00436B14  90 01 00 44 */	stw r0, 0x44(r1)
/* 80439BD8 00436B18  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80439BDC 00436B1C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80439BE0 00436B20  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80439BE4 00436B24  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80439BE8 00436B28  7C 9F 23 78 */	mr r31, r4
/* 80439BEC 00436B2C  7C 7E 1B 78 */	mr r30, r3
/* 80439BF0 00436B30  2C 1F 00 0A */	cmpwi r31, 0xa
/* 80439BF4 00436B34  40 82 00 18 */	bne .L_80439C0C
/* 80439BF8 00436B38  81 83 00 00 */	lwz r12, 0(r3)
/* 80439BFC 00436B3C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80439C00 00436B40  7D 89 03 A6 */	mtctr r12
/* 80439C04 00436B44  4E 80 04 21 */	bctrl 
/* 80439C08 00436B48  48 00 02 98 */	b .L_80439EA0
.L_80439C0C:
/* 80439C0C 00436B4C  88 9E 00 F0 */	lbz r4, 0xf0(r30)
/* 80439C10 00436B50  28 04 00 00 */	cmplwi r4, 0
/* 80439C14 00436B54  40 82 00 28 */	bne .L_80439C3C
/* 80439C18 00436B58  88 1E 00 D4 */	lbz r0, 0xd4(r30)
/* 80439C1C 00436B5C  98 1E 00 64 */	stb r0, 0x64(r30)
/* 80439C20 00436B60  88 1E 00 D5 */	lbz r0, 0xd5(r30)
/* 80439C24 00436B64  98 1E 00 65 */	stb r0, 0x65(r30)
/* 80439C28 00436B68  88 1E 00 D6 */	lbz r0, 0xd6(r30)
/* 80439C2C 00436B6C  98 1E 00 66 */	stb r0, 0x66(r30)
/* 80439C30 00436B70  88 1E 00 D7 */	lbz r0, 0xd7(r30)
/* 80439C34 00436B74  98 1E 00 67 */	stb r0, 0x67(r30)
/* 80439C38 00436B78  48 00 00 68 */	b .L_80439CA0
.L_80439C3C:
/* 80439C3C 00436B7C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80439C40 00436B80  28 03 00 00 */	cmplwi r3, 0
/* 80439C44 00436B84  40 82 00 0C */	bne .L_80439C50
/* 80439C48 00436B88  38 60 00 00 */	li r3, 0
/* 80439C4C 00436B8C  48 00 00 08 */	b .L_80439C54
.L_80439C50:
/* 80439C50 00436B90  80 63 00 04 */	lwz r3, 4(r3)
.L_80439C54:
/* 80439C54 00436B94  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80439C58 00436B98  28 00 00 00 */	cmplwi r0, 0
/* 80439C5C 00436B9C  41 82 00 0C */	beq .L_80439C68
/* 80439C60 00436BA0  38 63 00 18 */	addi r3, r3, 0x18
/* 80439C64 00436BA4  48 00 00 08 */	b .L_80439C6C
.L_80439C68:
/* 80439C68 00436BA8  38 60 00 00 */	li r3, 0
.L_80439C6C:
/* 80439C6C 00436BAC  80 63 00 04 */	lwz r3, 4(r3)
/* 80439C70 00436BB0  54 80 10 3A */	slwi r0, r4, 2
/* 80439C74 00436BB4  7C 63 02 14 */	add r3, r3, r0
/* 80439C78 00436BB8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80439C7C 00436BBC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80439C80 00436BC0  88 61 00 0C */	lbz r3, 0xc(r1)
/* 80439C84 00436BC4  88 01 00 0D */	lbz r0, 0xd(r1)
/* 80439C88 00436BC8  98 7E 00 64 */	stb r3, 0x64(r30)
/* 80439C8C 00436BCC  88 61 00 0E */	lbz r3, 0xe(r1)
/* 80439C90 00436BD0  98 1E 00 65 */	stb r0, 0x65(r30)
/* 80439C94 00436BD4  88 01 00 0F */	lbz r0, 0xf(r1)
/* 80439C98 00436BD8  98 7E 00 66 */	stb r3, 0x66(r30)
/* 80439C9C 00436BDC  98 1E 00 67 */	stb r0, 0x67(r30)
.L_80439CA0:
/* 80439CA0 00436BE0  88 7E 00 67 */	lbz r3, 0x67(r30)
/* 80439CA4 00436BE4  3C 00 43 30 */	lis r0, 0x4330
/* 80439CA8 00436BE8  90 01 00 10 */	stw r0, 0x10(r1)
/* 80439CAC 00436BEC  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 80439CB0 00436BF0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80439CB4 00436BF4  C0 1E 00 78 */	lfs f0, 0x78(r30)
/* 80439CB8 00436BF8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 80439CBC 00436BFC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80439CC0 00436C00  EC 01 00 32 */	fmuls f0, f1, f0
/* 80439CC4 00436C04  FC 00 00 1E */	fctiwz f0, f0
/* 80439CC8 00436C08  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80439CCC 00436C0C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80439CD0 00436C10  98 1E 00 67 */	stb r0, 0x67(r30)
/* 80439CD4 00436C14  88 9E 00 F1 */	lbz r4, 0xf1(r30)
/* 80439CD8 00436C18  28 04 00 00 */	cmplwi r4, 0
/* 80439CDC 00436C1C  40 82 00 28 */	bne .L_80439D04
/* 80439CE0 00436C20  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 80439CE4 00436C24  98 1E 00 68 */	stb r0, 0x68(r30)
/* 80439CE8 00436C28  88 1E 00 D9 */	lbz r0, 0xd9(r30)
/* 80439CEC 00436C2C  98 1E 00 69 */	stb r0, 0x69(r30)
/* 80439CF0 00436C30  88 1E 00 DA */	lbz r0, 0xda(r30)
/* 80439CF4 00436C34  98 1E 00 6A */	stb r0, 0x6a(r30)
/* 80439CF8 00436C38  88 1E 00 DB */	lbz r0, 0xdb(r30)
/* 80439CFC 00436C3C  98 1E 00 6B */	stb r0, 0x6b(r30)
/* 80439D00 00436C40  48 00 00 68 */	b .L_80439D68
.L_80439D04:
/* 80439D04 00436C44  80 7E 00 04 */	lwz r3, 4(r30)
/* 80439D08 00436C48  28 03 00 00 */	cmplwi r3, 0
/* 80439D0C 00436C4C  40 82 00 0C */	bne .L_80439D18
/* 80439D10 00436C50  38 60 00 00 */	li r3, 0
/* 80439D14 00436C54  48 00 00 08 */	b .L_80439D1C
.L_80439D18:
/* 80439D18 00436C58  80 63 00 04 */	lwz r3, 4(r3)
.L_80439D1C:
/* 80439D1C 00436C5C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80439D20 00436C60  28 00 00 00 */	cmplwi r0, 0
/* 80439D24 00436C64  41 82 00 0C */	beq .L_80439D30
/* 80439D28 00436C68  38 63 00 18 */	addi r3, r3, 0x18
/* 80439D2C 00436C6C  48 00 00 08 */	b .L_80439D34
.L_80439D30:
/* 80439D30 00436C70  38 60 00 00 */	li r3, 0
.L_80439D34:
/* 80439D34 00436C74  80 63 00 04 */	lwz r3, 4(r3)
/* 80439D38 00436C78  54 80 10 3A */	slwi r0, r4, 2
/* 80439D3C 00436C7C  7C 63 02 14 */	add r3, r3, r0
/* 80439D40 00436C80  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80439D44 00436C84  90 01 00 08 */	stw r0, 8(r1)
/* 80439D48 00436C88  88 61 00 08 */	lbz r3, 8(r1)
/* 80439D4C 00436C8C  88 01 00 09 */	lbz r0, 9(r1)
/* 80439D50 00436C90  98 7E 00 68 */	stb r3, 0x68(r30)
/* 80439D54 00436C94  88 61 00 0A */	lbz r3, 0xa(r1)
/* 80439D58 00436C98  98 1E 00 69 */	stb r0, 0x69(r30)
/* 80439D5C 00436C9C  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80439D60 00436CA0  98 7E 00 6A */	stb r3, 0x6a(r30)
/* 80439D64 00436CA4  98 1E 00 6B */	stb r0, 0x6b(r30)
.L_80439D68:
/* 80439D68 00436CA8  88 7E 00 6B */	lbz r3, 0x6b(r30)
/* 80439D6C 00436CAC  3C 00 43 30 */	lis r0, 0x4330
/* 80439D70 00436CB0  90 01 00 18 */	stw r0, 0x18(r1)
/* 80439D74 00436CB4  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 80439D78 00436CB8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80439D7C 00436CBC  C0 1E 00 78 */	lfs f0, 0x78(r30)
/* 80439D80 00436CC0  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 80439D84 00436CC4  EC 21 10 28 */	fsubs f1, f1, f2
/* 80439D88 00436CC8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80439D8C 00436CCC  FC 00 00 1E */	fctiwz f0, f0
/* 80439D90 00436CD0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80439D94 00436CD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80439D98 00436CD8  98 1E 00 6B */	stb r0, 0x6b(r30)
/* 80439D9C 00436CDC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80439DA0 00436CE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80439DA4 00436CE4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80439DA8 00436CE8  7D 89 03 A6 */	mtctr r12
/* 80439DAC 00436CEC  4E 80 04 21 */	bctrl 
/* 80439DB0 00436CF0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80439DB4 00436CF4  3C 60 43 30 */	lis r3, 0x4330
/* 80439DB8 00436CF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80439DBC 00436CFC  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 80439DC0 00436D00  90 61 00 20 */	stw r3, 0x20(r1)
/* 80439DC4 00436D04  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 80439DC8 00436D08  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80439DCC 00436D0C  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 80439DD0 00436D10  C0 1E 00 E0 */	lfs f0, 0xe0(r30)
/* 80439DD4 00436D14  EC 21 10 28 */	fsubs f1, f1, f2
/* 80439DD8 00436D18  EF E0 00 72 */	fmuls f31, f0, f1
/* 80439DDC 00436D1C  41 82 00 2C */	beq .L_80439E08
/* 80439DE0 00436D20  FC 20 F8 90 */	fmr f1, f31
/* 80439DE4 00436D24  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 80439DE8 00436D28  7F C3 F3 78 */	mr r3, r30
/* 80439DEC 00436D2C  7F E5 FB 78 */	mr r5, r31
/* 80439DF0 00436D30  38 C0 00 01 */	li r6, 1
/* 80439DF4 00436D34  48 00 25 21 */	bl calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb
/* 80439DF8 00436D38  C0 1E 00 90 */	lfs f0, 0x90(r30)
/* 80439DFC 00436D3C  EC 00 08 2A */	fadds f0, f0, f1
/* 80439E00 00436D40  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 80439E04 00436D44  48 00 00 80 */	b .L_80439E84
.L_80439E08:
/* 80439E08 00436D48  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 80439E0C 00436D4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80439E10 00436D50  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80439E14 00436D54  7D 89 03 A6 */	mtctr r12
/* 80439E18 00436D58  4E 80 04 21 */	bctrl 
/* 80439E1C 00436D5C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80439E20 00436D60  3C 00 43 30 */	lis r0, 0x4330
/* 80439E24 00436D64  90 61 00 24 */	stw r3, 0x24(r1)
/* 80439E28 00436D68  FC 60 F8 90 */	fmr f3, f31
/* 80439E2C 00436D6C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80439E30 00436D70  7F C3 F3 78 */	mr r3, r30
/* 80439E34 00436D74  90 01 00 20 */	stw r0, 0x20(r1)
/* 80439E38 00436D78  7F E4 FB 78 */	mr r4, r31
/* 80439E3C 00436D7C  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 80439E40 00436D80  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 80439E44 00436D84  38 A0 00 01 */	li r5, 1
/* 80439E48 00436D88  C0 1E 00 E4 */	lfs f0, 0xe4(r30)
/* 80439E4C 00436D8C  EC 81 10 28 */	fsubs f4, f1, f2
/* 80439E50 00436D90  C0 BE 00 90 */	lfs f5, 0x90(r30)
/* 80439E54 00436D94  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 80439E58 00436D98  C0 5E 00 94 */	lfs f2, 0x94(r30)
/* 80439E5C 00436D9C  EC 80 01 32 */	fmuls f4, f0, f4
/* 80439E60 00436DA0  C0 1E 00 58 */	lfs f0, 0x58(r30)
/* 80439E64 00436DA4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80439E68 00436DA8  EC 25 08 2A */	fadds f1, f5, f1
/* 80439E6C 00436DAC  EC 42 00 2A */	fadds f2, f2, f0
/* 80439E70 00436DB0  7D 89 03 A6 */	mtctr r12
/* 80439E74 00436DB4  4E 80 04 21 */	bctrl 
/* 80439E78 00436DB8  C0 1E 00 90 */	lfs f0, 0x90(r30)
/* 80439E7C 00436DBC  EC 00 08 2A */	fadds f0, f0, f1
/* 80439E80 00436DC0  D0 1E 00 90 */	stfs f0, 0x90(r30)
.L_80439E84:
/* 80439E84 00436DC4  C0 3E 00 90 */	lfs f1, 0x90(r30)
/* 80439E88 00436DC8  C0 1E 00 C4 */	lfs f0, 0xc4(r30)
/* 80439E8C 00436DCC  EC 01 00 2A */	fadds f0, f1, f0
/* 80439E90 00436DD0  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 80439E94 00436DD4  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80439E98 00436DD8  38 03 00 01 */	addi r0, r3, 1
/* 80439E9C 00436DDC  90 1E 00 40 */	stw r0, 0x40(r30)
.L_80439EA0:
/* 80439EA0 00436DE0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80439EA4 00436DE4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80439EA8 00436DE8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80439EAC 00436DEC  28 00 00 00 */	cmplwi r0, 0
/* 80439EB0 00436DF0  41 82 00 0C */	beq .L_80439EBC
/* 80439EB4 00436DF4  7F C3 F3 78 */	mr r3, r30
/* 80439EB8 00436DF8  48 00 0D 3D */	bl drawRuby__Q25P2JME19TRenderingProcessorFv
.L_80439EBC:
/* 80439EBC 00436DFC  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 80439EC0 00436E00  38 03 00 01 */	addi r0, r3, 1
/* 80439EC4 00436E04  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 80439EC8 00436E08  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80439ECC 00436E0C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80439ED0 00436E10  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80439ED4 00436E14  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80439ED8 00436E18  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80439EDC 00436E1C  7C 08 03 A6 */	mtlr r0
/* 80439EE0 00436E20  38 21 00 40 */	addi r1, r1, 0x40
/* 80439EE4 00436E24  4E 80 00 20 */	blr 
.endfn do_character__Q25P2JME19TRenderingProcessorFi

.fn do_select_begin__Q25P2JME19TRenderingProcessorFUl, global
/* 80439EE8 00436E28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80439EEC 00436E2C  7C 08 02 A6 */	mflr r0
/* 80439EF0 00436E30  90 01 00 24 */	stw r0, 0x24(r1)
/* 80439EF4 00436E34  38 00 00 00 */	li r0, 0
/* 80439EF8 00436E38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80439EFC 00436E3C  7C 7F 1B 78 */	mr r31, r3
/* 80439F00 00436E40  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 80439F04 00436E44  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80439F08 00436E48  81 83 00 00 */	lwz r12, 0(r3)
/* 80439F0C 00436E4C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80439F10 00436E50  7D 89 03 A6 */	mtctr r12
/* 80439F14 00436E54  4E 80 04 21 */	bctrl 
/* 80439F18 00436E58  1C 63 00 03 */	mulli r3, r3, 3
/* 80439F1C 00436E5C  3C 00 43 30 */	lis r0, 0x4330
/* 80439F20 00436E60  90 01 00 08 */	stw r0, 8(r1)
/* 80439F24 00436E64  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 80439F28 00436E68  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80439F2C 00436E6C  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 80439F30 00436E70  90 01 00 0C */	stw r0, 0xc(r1)
/* 80439F34 00436E74  C8 21 00 08 */	lfd f1, 8(r1)
/* 80439F38 00436E78  EC 21 10 28 */	fsubs f1, f1, f2
/* 80439F3C 00436E7C  EC 00 08 2A */	fadds f0, f0, f1
/* 80439F40 00436E80  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 80439F44 00436E84  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 80439F48 00436E88  81 83 00 00 */	lwz r12, 0(r3)
/* 80439F4C 00436E8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80439F50 00436E90  7D 89 03 A6 */	mtctr r12
/* 80439F54 00436E94  4E 80 04 21 */	bctrl 
/* 80439F58 00436E98  80 9F 00 A0 */	lwz r4, 0xa0(r31)
/* 80439F5C 00436E9C  3C 00 43 30 */	lis r0, 0x4330
/* 80439F60 00436EA0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80439F64 00436EA4  38 04 00 03 */	addi r0, r4, 3
/* 80439F68 00436EA8  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 80439F6C 00436EAC  7C 00 19 D6 */	mullw r0, r0, r3
/* 80439F70 00436EB0  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 80439F74 00436EB4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80439F78 00436EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80439F7C 00436EBC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 80439F80 00436EC0  EC 21 10 28 */	fsubs f1, f1, f2
/* 80439F84 00436EC4  EC 00 08 2A */	fadds f0, f0, f1
/* 80439F88 00436EC8  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 80439F8C 00436ECC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80439F90 00436ED0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80439F94 00436ED4  7C 08 03 A6 */	mtlr r0
/* 80439F98 00436ED8  38 21 00 20 */	addi r1, r1, 0x20
/* 80439F9C 00436EDC  4E 80 00 20 */	blr 
.endfn do_select_begin__Q25P2JME19TRenderingProcessorFUl

.fn do_select_end__Q25P2JME19TRenderingProcessorFv, global
/* 80439FA0 00436EE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80439FA4 00436EE4  7C 08 02 A6 */	mflr r0
/* 80439FA8 00436EE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80439FAC 00436EEC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80439FB0 00436EF0  7C 7F 1B 78 */	mr r31, r3
/* 80439FB4 00436EF4  C0 03 00 98 */	lfs f0, 0x98(r3)
/* 80439FB8 00436EF8  D0 03 00 90 */	stfs f0, 0x90(r3)
/* 80439FBC 00436EFC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80439FC0 00436F00  81 83 00 00 */	lwz r12, 0(r3)
/* 80439FC4 00436F04  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80439FC8 00436F08  7D 89 03 A6 */	mtctr r12
/* 80439FCC 00436F0C  4E 80 04 21 */	bctrl 
/* 80439FD0 00436F10  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80439FD4 00436F14  3C 00 43 30 */	lis r0, 0x4330
/* 80439FD8 00436F18  90 61 00 0C */	stw r3, 0xc(r1)
/* 80439FDC 00436F1C  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 80439FE0 00436F20  90 01 00 08 */	stw r0, 8(r1)
/* 80439FE4 00436F24  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 80439FE8 00436F28  C8 21 00 08 */	lfd f1, 8(r1)
/* 80439FEC 00436F2C  EC 21 10 28 */	fsubs f1, f1, f2
/* 80439FF0 00436F30  EC 00 08 2A */	fadds f0, f0, f1
/* 80439FF4 00436F34  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 80439FF8 00436F38  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80439FFC 00436F3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8043A000 00436F40  7C 08 03 A6 */	mtlr r0
/* 8043A004 00436F44  38 21 00 20 */	addi r1, r1, 0x20
/* 8043A008 00436F48  4E 80 00 20 */	blr 
.endfn do_select_end__Q25P2JME19TRenderingProcessorFv

.fn do_select_separate__Q25P2JME19TRenderingProcessorFv, global
/* 8043A00C 00436F4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8043A010 00436F50  7C 08 02 A6 */	mflr r0
/* 8043A014 00436F54  90 01 00 24 */	stw r0, 0x24(r1)
/* 8043A018 00436F58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8043A01C 00436F5C  7C 7F 1B 78 */	mr r31, r3
/* 8043A020 00436F60  80 63 00 A0 */	lwz r3, 0xa0(r3)
/* 8043A024 00436F64  38 03 00 01 */	addi r0, r3, 1
/* 8043A028 00436F68  90 1F 00 A0 */	stw r0, 0xa0(r31)
/* 8043A02C 00436F6C  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A030 00436F70  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A034 00436F74  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8043A038 00436F78  7D 89 03 A6 */	mtctr r12
/* 8043A03C 00436F7C  4E 80 04 21 */	bctrl 
/* 8043A040 00436F80  1C 63 00 03 */	mulli r3, r3, 3
/* 8043A044 00436F84  3C 00 43 30 */	lis r0, 0x4330
/* 8043A048 00436F88  90 01 00 08 */	stw r0, 8(r1)
/* 8043A04C 00436F8C  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 8043A050 00436F90  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8043A054 00436F94  C0 1F 00 98 */	lfs f0, 0x98(r31)
/* 8043A058 00436F98  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043A05C 00436F9C  C8 21 00 08 */	lfd f1, 8(r1)
/* 8043A060 00436FA0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043A064 00436FA4  EC 00 08 2A */	fadds f0, f0, f1
/* 8043A068 00436FA8  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 8043A06C 00436FAC  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A070 00436FB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A074 00436FB4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8043A078 00436FB8  7D 89 03 A6 */	mtctr r12
/* 8043A07C 00436FBC  4E 80 04 21 */	bctrl 
/* 8043A080 00436FC0  80 9F 00 A0 */	lwz r4, 0xa0(r31)
/* 8043A084 00436FC4  3C 00 43 30 */	lis r0, 0x4330
/* 8043A088 00436FC8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043A08C 00436FCC  38 04 00 03 */	addi r0, r4, 3
/* 8043A090 00436FD0  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 8043A094 00436FD4  7C 00 19 D6 */	mullw r0, r0, r3
/* 8043A098 00436FD8  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 8043A09C 00436FDC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043A0A0 00436FE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043A0A4 00436FE4  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8043A0A8 00436FE8  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043A0AC 00436FEC  EC 00 08 2A */	fadds f0, f0, f1
/* 8043A0B0 00436FF0  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043A0B4 00436FF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8043A0B8 00436FF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8043A0BC 00436FFC  7C 08 03 A6 */	mtlr r0
/* 8043A0C0 00437000  38 21 00 20 */	addi r1, r1, 0x20
/* 8043A0C4 00437004  4E 80 00 20 */	blr 
.endfn do_select_separate__Q25P2JME19TRenderingProcessorFv

.fn do_tag__Q25P2JME19TRenderingProcessorFUlPCvUl, global
/* 8043A0C8 00437008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043A0CC 0043700C  7C 08 02 A6 */	mflr r0
/* 8043A0D0 00437010  38 E0 00 00 */	li r7, 0
/* 8043A0D4 00437014  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043A0D8 00437018  54 80 86 3E */	rlwinm r0, r4, 0x10, 0x18, 0x1f
/* 8043A0DC 0043701C  28 00 00 C0 */	cmplwi r0, 0xc0
/* 8043A0E0 00437020  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 8043A0E4 00437024  40 80 00 94 */	bge .L_8043A178
/* 8043A0E8 00437028  2C 00 00 02 */	cmpwi r0, 2
/* 8043A0EC 0043702C  41 82 00 54 */	beq .L_8043A140
/* 8043A0F0 00437030  40 80 00 14 */	bge .L_8043A104
/* 8043A0F4 00437034  2C 00 00 00 */	cmpwi r0, 0
/* 8043A0F8 00437038  41 82 00 18 */	beq .L_8043A110
/* 8043A0FC 0043703C  40 80 00 2C */	bge .L_8043A128
/* 8043A100 00437040  48 00 00 70 */	b .L_8043A170
.L_8043A104:
/* 8043A104 00437044  2C 00 00 04 */	cmpwi r0, 4
/* 8043A108 00437048  40 80 00 68 */	bge .L_8043A170
/* 8043A10C 0043704C  48 00 00 4C */	b .L_8043A158
.L_8043A110:
/* 8043A110 00437050  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A114 00437054  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8043A118 00437058  7D 89 03 A6 */	mtctr r12
/* 8043A11C 0043705C  4E 80 04 21 */	bctrl 
/* 8043A120 00437060  7C 67 1B 78 */	mr r7, r3
/* 8043A124 00437064  48 00 01 04 */	b .L_8043A228
.L_8043A128:
/* 8043A128 00437068  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A12C 0043706C  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8043A130 00437070  7D 89 03 A6 */	mtctr r12
/* 8043A134 00437074  4E 80 04 21 */	bctrl 
/* 8043A138 00437078  7C 67 1B 78 */	mr r7, r3
/* 8043A13C 0043707C  48 00 00 EC */	b .L_8043A228
.L_8043A140:
/* 8043A140 00437080  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A144 00437084  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8043A148 00437088  7D 89 03 A6 */	mtctr r12
/* 8043A14C 0043708C  4E 80 04 21 */	bctrl 
/* 8043A150 00437090  7C 67 1B 78 */	mr r7, r3
/* 8043A154 00437094  48 00 00 D4 */	b .L_8043A228
.L_8043A158:
/* 8043A158 00437098  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A15C 0043709C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8043A160 004370A0  7D 89 03 A6 */	mtctr r12
/* 8043A164 004370A4  4E 80 04 21 */	bctrl 
/* 8043A168 004370A8  7C 67 1B 78 */	mr r7, r3
/* 8043A16C 004370AC  48 00 00 BC */	b .L_8043A228
.L_8043A170:
/* 8043A170 004370B0  38 E0 00 01 */	li r7, 1
/* 8043A174 004370B4  48 00 00 B4 */	b .L_8043A228
.L_8043A178:
/* 8043A178 004370B8  28 00 00 FF */	cmplwi r0, 0xff
/* 8043A17C 004370BC  40 82 00 AC */	bne .L_8043A228
/* 8043A180 004370C0  2C 04 00 02 */	cmpwi r4, 2
/* 8043A184 004370C4  41 82 00 68 */	beq .L_8043A1EC
/* 8043A188 004370C8  40 80 00 14 */	bge .L_8043A19C
/* 8043A18C 004370CC  2C 04 00 00 */	cmpwi r4, 0
/* 8043A190 004370D0  41 82 00 1C */	beq .L_8043A1AC
/* 8043A194 004370D4  40 80 00 38 */	bge .L_8043A1CC
/* 8043A198 004370D8  48 00 00 90 */	b .L_8043A228
.L_8043A19C:
/* 8043A19C 004370DC  2C 04 00 04 */	cmpwi r4, 4
/* 8043A1A0 004370E0  41 82 00 88 */	beq .L_8043A228
/* 8043A1A4 004370E4  40 80 00 84 */	bge .L_8043A228
/* 8043A1A8 004370E8  48 00 00 64 */	b .L_8043A20C
.L_8043A1AC:
/* 8043A1AC 004370EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A1B0 004370F0  7C A4 2B 78 */	mr r4, r5
/* 8043A1B4 004370F4  7C C5 33 78 */	mr r5, r6
/* 8043A1B8 004370F8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8043A1BC 004370FC  7D 89 03 A6 */	mtctr r12
/* 8043A1C0 00437100  4E 80 04 21 */	bctrl 
/* 8043A1C4 00437104  7C 67 1B 78 */	mr r7, r3
/* 8043A1C8 00437108  48 00 00 60 */	b .L_8043A228
.L_8043A1CC:
/* 8043A1CC 0043710C  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A1D0 00437110  7C A4 2B 78 */	mr r4, r5
/* 8043A1D4 00437114  7C C5 33 78 */	mr r5, r6
/* 8043A1D8 00437118  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8043A1DC 0043711C  7D 89 03 A6 */	mtctr r12
/* 8043A1E0 00437120  4E 80 04 21 */	bctrl 
/* 8043A1E4 00437124  7C 67 1B 78 */	mr r7, r3
/* 8043A1E8 00437128  48 00 00 40 */	b .L_8043A228
.L_8043A1EC:
/* 8043A1EC 0043712C  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A1F0 00437130  7C A4 2B 78 */	mr r4, r5
/* 8043A1F4 00437134  7C C5 33 78 */	mr r5, r6
/* 8043A1F8 00437138  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8043A1FC 0043713C  7D 89 03 A6 */	mtctr r12
/* 8043A200 00437140  4E 80 04 21 */	bctrl 
/* 8043A204 00437144  7C 67 1B 78 */	mr r7, r3
/* 8043A208 00437148  48 00 00 20 */	b .L_8043A228
.L_8043A20C:
/* 8043A20C 0043714C  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A210 00437150  7C A4 2B 78 */	mr r4, r5
/* 8043A214 00437154  7C C5 33 78 */	mr r5, r6
/* 8043A218 00437158  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8043A21C 0043715C  7D 89 03 A6 */	mtctr r12
/* 8043A220 00437160  4E 80 04 21 */	bctrl 
/* 8043A224 00437164  7C 67 1B 78 */	mr r7, r3
.L_8043A228:
/* 8043A228 00437168  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043A22C 0043716C  7C E3 3B 78 */	mr r3, r7
/* 8043A230 00437170  7C 08 03 A6 */	mtlr r0
/* 8043A234 00437174  38 21 00 10 */	addi r1, r1, 0x10
/* 8043A238 00437178  4E 80 00 20 */	blr 
.endfn do_tag__Q25P2JME19TRenderingProcessorFUlPCvUl

.fn do_systemTagCode__Q25P2JME19TRenderingProcessorFUsPCvUl, global
/* 8043A23C 0043717C  38 60 00 00 */	li r3, 0
/* 8043A240 00437180  4E 80 00 20 */	blr 
.endfn do_systemTagCode__Q25P2JME19TRenderingProcessorFUsPCvUl

.fn tagColor__Q25P2JME19TRenderingProcessorFPCvUl, global
/* 8043A244 00437184  88 84 00 00 */	lbz r4, 0(r4)
/* 8043A248 00437188  28 04 00 00 */	cmplwi r4, 0
/* 8043A24C 0043718C  40 82 00 10 */	bne .L_8043A25C
/* 8043A250 00437190  98 83 00 F0 */	stb r4, 0xf0(r3)
/* 8043A254 00437194  98 83 00 F1 */	stb r4, 0xf1(r3)
/* 8043A258 00437198  48 00 00 10 */	b .L_8043A268
.L_8043A25C:
/* 8043A25C 0043719C  98 83 00 F0 */	stb r4, 0xf0(r3)
/* 8043A260 004371A0  38 04 00 01 */	addi r0, r4, 1
/* 8043A264 004371A4  98 03 00 F1 */	stb r0, 0xf1(r3)
.L_8043A268:
/* 8043A268 004371A8  38 60 00 01 */	li r3, 1
/* 8043A26C 004371AC  4E 80 00 20 */	blr 
.endfn tagColor__Q25P2JME19TRenderingProcessorFPCvUl

.fn tagSize__Q25P2JME19TRenderingProcessorFPCvUl, global
/* 8043A270 004371B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043A274 004371B4  3C 00 43 30 */	lis r0, 0x4330
/* 8043A278 004371B8  A0 84 00 00 */	lhz r4, 0(r4)
/* 8043A27C 004371BC  90 01 00 08 */	stw r0, 8(r1)
/* 8043A280 004371C0  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043A284 004371C4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8043A288 004371C8  C0 02 25 5C */	lfs f0, lbl_805208BC@sda21(r2)
/* 8043A28C 004371CC  C8 21 00 08 */	lfd f1, 8(r1)
/* 8043A290 004371D0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043A294 004371D4  EC 01 00 24 */	fdivs f0, f1, f0
/* 8043A298 004371D8  D0 03 00 E0 */	stfs f0, 0xe0(r3)
/* 8043A29C 004371DC  D0 03 00 E4 */	stfs f0, 0xe4(r3)
/* 8043A2A0 004371E0  38 60 00 01 */	li r3, 1
/* 8043A2A4 004371E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8043A2A8 004371E8  4E 80 00 20 */	blr 
.endfn tagSize__Q25P2JME19TRenderingProcessorFPCvUl

.fn tagRuby__Q25P2JME19TRenderingProcessorFPCvUl, global
/* 8043A2AC 004371EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8043A2B0 004371F0  7C 08 02 A6 */	mflr r0
/* 8043A2B4 004371F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8043A2B8 004371F8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8043A2BC 004371FC  7C 7F 1B 78 */	mr r31, r3
/* 8043A2C0 00437200  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8043A2C4 00437204  7C BE 2B 78 */	mr r30, r5
/* 8043A2C8 00437208  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8043A2CC 0043720C  7C 9D 23 78 */	mr r29, r4
/* 8043A2D0 00437210  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8043A2D4 00437214  80 66 00 60 */	lwz r3, 0x60(r6)
/* 8043A2D8 00437218  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8043A2DC 0043721C  28 00 00 00 */	cmplwi r0, 0
/* 8043A2E0 00437220  41 82 01 10 */	beq .L_8043A3F0
/* 8043A2E4 00437224  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 8043A2E8 00437228  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043A2EC 0043722C  40 82 01 04 */	bne .L_8043A3F0
/* 8043A2F0 00437230  28 1E 00 21 */	cmplwi r30, 0x21
/* 8043A2F4 00437234  41 80 00 20 */	blt .L_8043A314
/* 8043A2F8 00437238  3C 60 80 4A */	lis r3, lbl_8049ABE8@ha
/* 8043A2FC 0043723C  3C A0 80 4A */	lis r5, lbl_8049AC00@ha
/* 8043A300 00437240  38 63 AB E8 */	addi r3, r3, lbl_8049ABE8@l
/* 8043A304 00437244  38 80 03 47 */	li r4, 0x347
/* 8043A308 00437248  38 A5 AC 00 */	addi r5, r5, lbl_8049AC00@l
/* 8043A30C 0043724C  4C C6 31 82 */	crclr 6
/* 8043A310 00437250  4B BF 03 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043A314:
/* 8043A314 00437254  80 7F 01 00 */	lwz r3, 0x100(r31)
/* 8043A318 00437258  38 9D 00 01 */	addi r4, r29, 1
/* 8043A31C 0043725C  38 BE FF FF */	addi r5, r30, -1
/* 8043A320 00437260  4B C9 04 F5 */	bl strncpy
/* 8043A324 00437264  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 8043A328 00437268  38 C0 00 00 */	li r6, 0
/* 8043A32C 0043726C  38 80 00 01 */	li r4, 1
/* 8043A330 00437270  88 7D 00 00 */	lbz r3, 0(r29)
/* 8043A334 00437274  7C A0 F2 14 */	add r5, r0, r30
/* 8043A338 00437278  38 1E FF FF */	addi r0, r30, -1
/* 8043A33C 0043727C  98 C5 FF FF */	stb r6, -1(r5)
/* 8043A340 00437280  98 9F 00 F2 */	stb r4, 0xf2(r31)
/* 8043A344 00437284  80 9F 00 B8 */	lwz r4, 0xb8(r31)
/* 8043A348 00437288  38 84 FF FF */	addi r4, r4, -1
/* 8043A34C 0043728C  90 9F 00 F4 */	stw r4, 0xf4(r31)
/* 8043A350 00437290  98 7F 00 F8 */	stb r3, 0xf8(r31)
/* 8043A354 00437294  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 8043A358 00437298  C0 1F 00 90 */	lfs f0, 0x90(r31)
/* 8043A35C 0043729C  D0 1F 01 04 */	stfs f0, 0x104(r31)
/* 8043A360 004372A0  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A364 004372A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A368 004372A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043A36C 004372AC  7D 89 03 A6 */	mtctr r12
/* 8043A370 004372B0  4E 80 04 21 */	bctrl 
/* 8043A374 004372B4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043A378 004372B8  3C 00 43 30 */	lis r0, 0x4330
/* 8043A37C 004372BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8043A380 004372C0  C8 62 25 70 */	lfd f3, lbl_805208D0@sda21(r2)
/* 8043A384 004372C4  90 01 00 08 */	stw r0, 8(r1)
/* 8043A388 004372C8  C0 3F 00 E4 */	lfs f1, 0xe4(r31)
/* 8043A38C 004372CC  C8 41 00 08 */	lfd f2, 8(r1)
/* 8043A390 004372D0  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043A394 004372D4  EC 62 18 28 */	fsubs f3, f2, f3
/* 8043A398 004372D8  C0 5F 00 94 */	lfs f2, 0x94(r31)
/* 8043A39C 004372DC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8043A3A0 004372E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8043A3A4 004372E4  4C 41 13 82 */	cror 2, 1, 2
/* 8043A3A8 004372E8  40 82 00 10 */	bne .L_8043A3B8
/* 8043A3AC 004372EC  C0 02 25 6C */	lfs f0, lbl_805208CC@sda21(r2)
/* 8043A3B0 004372F0  EC 00 08 2A */	fadds f0, f0, f1
/* 8043A3B4 004372F4  48 00 00 0C */	b .L_8043A3C0
.L_8043A3B8:
/* 8043A3B8 004372F8  C0 02 25 6C */	lfs f0, lbl_805208CC@sda21(r2)
/* 8043A3BC 004372FC  EC 01 00 28 */	fsubs f0, f1, f0
.L_8043A3C0:
/* 8043A3C0 00437300  FC 00 00 1E */	fctiwz f0, f0
/* 8043A3C4 00437304  3C 00 43 30 */	lis r0, 0x4330
/* 8043A3C8 00437308  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043A3CC 0043730C  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A3D0 00437310  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8043A3D4 00437314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043A3D8 00437318  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043A3DC 0043731C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043A3E0 00437320  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043A3E4 00437324  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043A3E8 00437328  EC 02 00 28 */	fsubs f0, f2, f0
/* 8043A3EC 0043732C  D0 1F 01 08 */	stfs f0, 0x108(r31)
.L_8043A3F0:
/* 8043A3F0 00437330  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8043A3F4 00437334  38 60 00 01 */	li r3, 1
/* 8043A3F8 00437338  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8043A3FC 0043733C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8043A400 00437340  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8043A404 00437344  7C 08 03 A6 */	mtlr r0
/* 8043A408 00437348  38 21 00 30 */	addi r1, r1, 0x30
/* 8043A40C 0043734C  4E 80 00 20 */	blr 
.endfn tagRuby__Q25P2JME19TRenderingProcessorFPCvUl

.fn tagFont__Q25P2JME19TRenderingProcessorFPCvUl, global
/* 8043A410 00437350  38 60 00 01 */	li r3, 1
/* 8043A414 00437354  4E 80 00 20 */	blr 
.endfn tagFont__Q25P2JME19TRenderingProcessorFPCvUl

.fn tagColorEX__Q25P2JME19TRenderingProcessorFUsPCvUl, global
/* 8043A418 00437358  54 80 04 3F */	clrlwi. r0, r4, 0x10
/* 8043A41C 0043735C  41 82 00 08 */	beq .L_8043A424
/* 8043A420 00437360  48 00 00 14 */	b .L_8043A434
.L_8043A424:
/* 8043A424 00437364  88 85 00 00 */	lbz r4, 0(r5)
/* 8043A428 00437368  88 05 00 01 */	lbz r0, 1(r5)
/* 8043A42C 0043736C  98 83 00 F0 */	stb r4, 0xf0(r3)
/* 8043A430 00437370  98 03 00 F1 */	stb r0, 0xf1(r3)
.L_8043A434:
/* 8043A434 00437374  38 60 00 01 */	li r3, 1
/* 8043A438 00437378  4E 80 00 20 */	blr 
.endfn tagColorEX__Q25P2JME19TRenderingProcessorFUsPCvUl

.fn tagControl__Q25P2JME19TRenderingProcessorFUsPCvUl, global
/* 8043A43C 0043737C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043A440 00437380  7C 08 02 A6 */	mflr r0
/* 8043A444 00437384  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043A448 00437388  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 8043A44C 0043738C  2C 00 00 01 */	cmpwi r0, 1
/* 8043A450 00437390  38 80 00 01 */	li r4, 1
/* 8043A454 00437394  41 82 00 40 */	beq .L_8043A494
/* 8043A458 00437398  40 80 00 10 */	bge .L_8043A468
/* 8043A45C 0043739C  2C 00 00 00 */	cmpwi r0, 0
/* 8043A460 004373A0  40 80 00 14 */	bge .L_8043A474
/* 8043A464 004373A4  48 00 00 30 */	b .L_8043A494
.L_8043A468:
/* 8043A468 004373A8  2C 00 00 03 */	cmpwi r0, 3
/* 8043A46C 004373AC  40 80 00 28 */	bge .L_8043A494
/* 8043A470 004373B0  48 00 00 1C */	b .L_8043A48C
.L_8043A474:
/* 8043A474 004373B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A478 004373B8  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8043A47C 004373BC  7D 89 03 A6 */	mtctr r12
/* 8043A480 004373C0  4E 80 04 21 */	bctrl 
/* 8043A484 004373C4  7C 64 1B 78 */	mr r4, r3
/* 8043A488 004373C8  48 00 00 0C */	b .L_8043A494
.L_8043A48C:
/* 8043A48C 004373CC  88 05 00 00 */	lbz r0, 0(r5)
/* 8043A490 004373D0  98 03 00 DC */	stb r0, 0xdc(r3)
.L_8043A494:
/* 8043A494 004373D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043A498 004373D8  7C 83 23 78 */	mr r3, r4
/* 8043A49C 004373DC  7C 08 03 A6 */	mtlr r0
/* 8043A4A0 004373E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8043A4A4 004373E4  4E 80 00 20 */	blr 
.endfn tagControl__Q25P2JME19TRenderingProcessorFUsPCvUl

.fn doTagControlAbtnWait__Q25P2JME19TRenderingProcessorFv, weak
/* 8043A4A8 004373E8  80 03 00 8C */	lwz r0, 0x8c(r3)
/* 8043A4AC 004373EC  64 00 10 00 */	oris r0, r0, 0x1000
/* 8043A4B0 004373F0  90 03 00 8C */	stw r0, 0x8c(r3)
/* 8043A4B4 004373F4  38 60 00 01 */	li r3, 1
/* 8043A4B8 004373F8  4E 80 00 20 */	blr 
.endfn doTagControlAbtnWait__Q25P2JME19TRenderingProcessorFv

.fn tagPosition__Q25P2JME19TRenderingProcessorFUsPCvUl, global
/* 8043A4BC 004373FC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8043A4C0 00437400  7C 08 02 A6 */	mflr r0
/* 8043A4C4 00437404  90 01 00 64 */	stw r0, 0x64(r1)
/* 8043A4C8 00437408  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8043A4CC 0043740C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8043A4D0 00437410  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8043A4D4 00437414  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8043A4D8 00437418  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8043A4DC 0043741C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8043A4E0 00437420  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8043A4E4 00437424  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 8043A4E8 00437428  7C 7F 1B 78 */	mr r31, r3
/* 8043A4EC 0043742C  28 00 00 07 */	cmplwi r0, 7
/* 8043A4F0 00437430  41 81 06 B8 */	bgt .L_8043ABA8
/* 8043A4F4 00437434  3C 60 80 4F */	lis r3, lbl_804ECA90@ha
/* 8043A4F8 00437438  54 00 10 3A */	slwi r0, r0, 2
/* 8043A4FC 0043743C  38 63 CA 90 */	addi r3, r3, lbl_804ECA90@l
/* 8043A500 00437440  7C 03 00 2E */	lwzx r0, r3, r0
/* 8043A504 00437444  7C 09 03 A6 */	mtctr r0
/* 8043A508 00437448  4E 80 04 20 */	bctr 
.L_8043A50C:
/* 8043A50C 0043744C  C0 1F 00 BC */	lfs f0, 0xbc(r31)
/* 8043A510 00437450  D0 1F 00 C4 */	stfs f0, 0xc4(r31)
/* 8043A514 00437454  48 00 06 94 */	b .L_8043ABA8
.L_8043A518:
/* 8043A518 00437458  88 65 00 00 */	lbz r3, 0(r5)
/* 8043A51C 0043745C  3C 00 43 30 */	lis r0, 0x4330
/* 8043A520 00437460  90 01 00 08 */	stw r0, 8(r1)
/* 8043A524 00437464  7C 60 07 74 */	extsb r0, r3
/* 8043A528 00437468  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A52C 0043746C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043A530 00437470  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043A534 00437474  C8 01 00 08 */	lfd f0, 8(r1)
/* 8043A538 00437478  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043A53C 0043747C  D0 1F 00 C4 */	stfs f0, 0xc4(r31)
/* 8043A540 00437480  48 00 06 68 */	b .L_8043ABA8
.L_8043A544:
/* 8043A544 00437484  C0 1F 00 C0 */	lfs f0, 0xc0(r31)
/* 8043A548 00437488  D0 1F 00 C8 */	stfs f0, 0xc8(r31)
/* 8043A54C 0043748C  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8043A550 00437490  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 8043A554 00437494  41 82 00 84 */	beq .L_8043A5D8
/* 8043A558 00437498  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A55C 0043749C  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 8043A560 004374A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A564 004374A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043A568 004374A8  7D 89 03 A6 */	mtctr r12
/* 8043A56C 004374AC  4E 80 04 21 */	bctrl 
/* 8043A570 004374B0  3C 80 43 30 */	lis r4, 0x4330
/* 8043A574 004374B4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8043A578 004374B8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043A57C 004374BC  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043A580 004374C0  90 81 00 08 */	stw r4, 8(r1)
/* 8043A584 004374C4  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A588 004374C8  C8 01 00 08 */	lfd f0, 8(r1)
/* 8043A58C 004374CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043A590 004374D0  EC 80 08 28 */	fsubs f4, f0, f1
/* 8043A594 004374D4  C0 5F 00 EC */	lfs f2, 0xec(r31)
/* 8043A598 004374D8  90 81 00 10 */	stw r4, 0x10(r1)
/* 8043A59C 004374DC  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8043A5A0 004374E0  C8 62 25 78 */	lfd f3, lbl_805208D8@sda21(r2)
/* 8043A5A4 004374E4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043A5A8 004374E8  EC A2 09 3A */	fmadds f5, f2, f4, f1
/* 8043A5AC 004374EC  93 C1 00 1C */	stw r30, 0x1c(r1)
/* 8043A5B0 004374F0  EC 40 18 28 */	fsubs f2, f0, f3
/* 8043A5B4 004374F4  C0 9F 00 3C */	lfs f4, 0x3c(r31)
/* 8043A5B8 004374F8  90 81 00 18 */	stw r4, 0x18(r1)
/* 8043A5BC 004374FC  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 8043A5C0 00437500  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043A5C4 00437504  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 8043A5C8 00437508  EC 00 18 28 */	fsubs f0, f0, f3
/* 8043A5CC 0043750C  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8043A5D0 00437510  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043A5D4 00437514  48 00 05 D4 */	b .L_8043ABA8
.L_8043A5D8:
/* 8043A5D8 00437518  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 8043A5DC 0043751C  41 82 01 2C */	beq .L_8043A708
/* 8043A5E0 00437520  8B BF 00 A6 */	lbz r29, 0xa6(r31)
/* 8043A5E4 00437524  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8043A5E8 00437528  57 A0 0D FC */	rlwinm r0, r29, 1, 0x17, 0x1e
/* 8043A5EC 0043752C  C0 42 25 60 */	lfs f2, lbl_805208C0@sda21(r2)
/* 8043A5F0 00437530  7C 63 02 14 */	add r3, r3, r0
/* 8043A5F4 00437534  88 A3 00 01 */	lbz r5, 1(r3)
/* 8043A5F8 00437538  FC 20 10 90 */	fmr f1, f2
/* 8043A5FC 0043753C  88 63 00 00 */	lbz r3, 0(r3)
/* 8043A600 00437540  38 05 00 01 */	addi r0, r5, 1
/* 8043A604 00437544  7C 03 00 50 */	subf r0, r3, r0
/* 8043A608 00437548  54 64 10 3A */	slwi r4, r3, 2
/* 8043A60C 0043754C  7C 09 03 A6 */	mtctr r0
/* 8043A610 00437550  7C 03 28 00 */	cmpw r3, r5
/* 8043A614 00437554  41 81 00 24 */	bgt .L_8043A638
.L_8043A618:
/* 8043A618 00437558  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 8043A61C 0043755C  7C 03 24 2E */	lfsx f0, r3, r4
/* 8043A620 00437560  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043A624 00437564  40 81 00 0C */	ble .L_8043A630
/* 8043A628 00437568  C0 1F 00 C8 */	lfs f0, 0xc8(r31)
/* 8043A62C 0043756C  EC 42 00 2A */	fadds f2, f2, f0
.L_8043A630:
/* 8043A630 00437570  38 84 00 04 */	addi r4, r4, 4
/* 8043A634 00437574  42 00 FF E4 */	bdnz .L_8043A618
.L_8043A638:
/* 8043A638 00437578  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 8043A63C 0043757C  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A640 00437580  EC 00 10 28 */	fsubs f0, f0, f2
/* 8043A644 00437584  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043A648 00437588  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A64C 0043758C  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 8043A650 00437590  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043A654 00437594  EF E1 00 32 */	fmuls f31, f1, f0
/* 8043A658 00437598  7D 89 03 A6 */	mtctr r12
/* 8043A65C 0043759C  4E 80 04 21 */	bctrl 
/* 8043A660 004375A0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043A664 004375A4  3C 00 43 30 */	lis r0, 0x4330
/* 8043A668 004375A8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8043A66C 004375AC  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A670 004375B0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043A674 004375B4  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A678 004375B8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043A67C 004375BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A680 004375C0  EC 40 08 28 */	fsubs f2, f0, f1
/* 8043A684 004375C4  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 8043A688 004375C8  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 8043A68C 004375CC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8043A690 004375D0  EF C1 00 BA */	fmadds f30, f1, f2, f0
/* 8043A694 004375D4  7D 89 03 A6 */	mtctr r12
/* 8043A698 004375D8  4E 80 04 21 */	bctrl 
/* 8043A69C 004375DC  3C 00 43 30 */	lis r0, 0x4330
/* 8043A6A0 004375E0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043A6A4 004375E4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8043A6A8 004375E8  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 8043A6AC 004375EC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043A6B0 004375F0  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 8043A6B4 004375F4  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8043A6B8 004375F8  C0 BF 00 C8 */	lfs f5, 0xc8(r31)
/* 8043A6BC 004375FC  EC 41 10 28 */	fsubs f2, f1, f2
/* 8043A6C0 00437600  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8043A6C4 00437604  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043A6C8 00437608  90 01 00 08 */	stw r0, 8(r1)
/* 8043A6CC 0043760C  EC 60 28 BC */	fnmsubs f3, f0, f2, f5
/* 8043A6D0 00437610  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043A6D4 00437614  C8 01 00 08 */	lfd f0, 8(r1)
/* 8043A6D8 00437618  93 C1 00 24 */	stw r30, 0x24(r1)
/* 8043A6DC 0043761C  EC 81 F0 FA */	fmadds f4, f1, f3, f30
/* 8043A6E0 00437620  C0 7F 00 3C */	lfs f3, 0x3c(r31)
/* 8043A6E4 00437624  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043A6E8 00437628  EC 20 10 28 */	fsubs f1, f0, f2
/* 8043A6EC 0043762C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8043A6F0 00437630  EC 23 20 7A */	fmadds f1, f3, f1, f4
/* 8043A6F4 00437634  EC 00 10 28 */	fsubs f0, f0, f2
/* 8043A6F8 00437638  EC 05 F8 3A */	fmadds f0, f5, f0, f31
/* 8043A6FC 0043763C  EC 00 08 2A */	fadds f0, f0, f1
/* 8043A700 00437640  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043A704 00437644  48 00 04 A4 */	b .L_8043ABA8
.L_8043A708:
/* 8043A708 00437648  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 8043A70C 0043764C  41 82 00 A4 */	beq .L_8043A7B0
/* 8043A710 00437650  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A714 00437654  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A718 00437658  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8043A71C 0043765C  7D 89 03 A6 */	mtctr r12
/* 8043A720 00437660  4E 80 04 21 */	bctrl 
/* 8043A724 00437664  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043A728 00437668  3C A0 43 30 */	lis r5, 0x4330
/* 8043A72C 0043766C  7C 83 00 D0 */	neg r4, r3
/* 8043A730 00437670  88 7F 00 A5 */	lbz r3, 0xa5(r31)
/* 8043A734 00437674  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043A738 00437678  6C 86 80 00 */	xoris r6, r4, 0x8000
/* 8043A73C 0043767C  C8 22 25 78 */	lfd f1, lbl_805208D8@sda21(r2)
/* 8043A740 00437680  38 83 00 01 */	addi r4, r3, 1
/* 8043A744 00437684  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8043A748 00437688  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8043A74C 0043768C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043A750 00437690  88 1F 00 A4 */	lbz r0, 0xa4(r31)
/* 8043A754 00437694  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043A758 00437698  C0 22 25 64 */	lfs f1, lbl_805208C4@sda21(r2)
/* 8043A75C 0043769C  7C 03 00 AE */	lbzx r0, r3, r0
/* 8043A760 004376A0  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8043A764 004376A4  7C 04 00 50 */	subf r0, r4, r0
/* 8043A768 004376A8  EC 01 00 2A */	fadds f0, f1, f0
/* 8043A76C 004376AC  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8043A770 004376B0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043A774 004376B4  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 8043A778 004376B8  C8 A2 25 70 */	lfd f5, lbl_805208D0@sda21(r2)
/* 8043A77C 004376BC  C8 61 00 20 */	lfd f3, 0x20(r1)
/* 8043A780 004376C0  EC 41 00 32 */	fmuls f2, f1, f0
/* 8043A784 004376C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043A788 004376C8  EC 83 28 28 */	fsubs f4, f3, f5
/* 8043A78C 004376CC  C0 7F 00 EC */	lfs f3, 0xec(r31)
/* 8043A790 004376D0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8043A794 004376D4  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 8043A798 004376D8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043A79C 004376DC  EC 43 11 3A */	fmadds f2, f3, f4, f2
/* 8043A7A0 004376E0  EC 00 28 28 */	fsubs f0, f0, f5
/* 8043A7A4 004376E4  EC 01 10 3C */	fnmsubs f0, f1, f0, f2
/* 8043A7A8 004376E8  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043A7AC 004376EC  48 00 03 FC */	b .L_8043ABA8
.L_8043A7B0:
/* 8043A7B0 004376F0  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A7B4 004376F4  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 8043A7B8 004376F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A7BC 004376FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043A7C0 00437700  7D 89 03 A6 */	mtctr r12
/* 8043A7C4 00437704  4E 80 04 21 */	bctrl 
/* 8043A7C8 00437708  3C 80 43 30 */	lis r4, 0x4330
/* 8043A7CC 0043770C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8043A7D0 00437710  90 01 00 24 */	stw r0, 0x24(r1)
/* 8043A7D4 00437714  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043A7D8 00437718  90 81 00 20 */	stw r4, 0x20(r1)
/* 8043A7DC 0043771C  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A7E0 00437720  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8043A7E4 00437724  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043A7E8 00437728  EC 80 08 28 */	fsubs f4, f0, f1
/* 8043A7EC 0043772C  C0 5F 00 EC */	lfs f2, 0xec(r31)
/* 8043A7F0 00437730  90 81 00 18 */	stw r4, 0x18(r1)
/* 8043A7F4 00437734  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8043A7F8 00437738  C8 62 25 78 */	lfd f3, lbl_805208D8@sda21(r2)
/* 8043A7FC 0043773C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043A800 00437740  EC A2 09 3A */	fmadds f5, f2, f4, f1
/* 8043A804 00437744  93 C1 00 14 */	stw r30, 0x14(r1)
/* 8043A808 00437748  EC 40 18 28 */	fsubs f2, f0, f3
/* 8043A80C 0043774C  C0 9F 00 3C */	lfs f4, 0x3c(r31)
/* 8043A810 00437750  90 81 00 10 */	stw r4, 0x10(r1)
/* 8043A814 00437754  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 8043A818 00437758  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043A81C 0043775C  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 8043A820 00437760  EC 00 18 28 */	fsubs f0, f0, f3
/* 8043A824 00437764  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8043A828 00437768  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043A82C 0043776C  48 00 03 7C */	b .L_8043ABA8
.L_8043A830:
/* 8043A830 00437770  88 65 00 00 */	lbz r3, 0(r5)
/* 8043A834 00437774  3C 00 43 30 */	lis r0, 0x4330
/* 8043A838 00437778  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043A83C 0043777C  7C 60 07 74 */	extsb r0, r3
/* 8043A840 00437780  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A844 00437784  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043A848 00437788  90 01 00 24 */	stw r0, 0x24(r1)
/* 8043A84C 0043778C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8043A850 00437790  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043A854 00437794  D0 1F 00 C8 */	stfs f0, 0xc8(r31)
/* 8043A858 00437798  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8043A85C 0043779C  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 8043A860 004377A0  41 82 00 84 */	beq .L_8043A8E4
/* 8043A864 004377A4  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A868 004377A8  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 8043A86C 004377AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A870 004377B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043A874 004377B4  7D 89 03 A6 */	mtctr r12
/* 8043A878 004377B8  4E 80 04 21 */	bctrl 
/* 8043A87C 004377BC  3C 80 43 30 */	lis r4, 0x4330
/* 8043A880 004377C0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8043A884 004377C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8043A888 004377C8  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043A88C 004377CC  90 81 00 20 */	stw r4, 0x20(r1)
/* 8043A890 004377D0  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A894 004377D4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8043A898 004377D8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043A89C 004377DC  EC 80 08 28 */	fsubs f4, f0, f1
/* 8043A8A0 004377E0  C0 5F 00 EC */	lfs f2, 0xec(r31)
/* 8043A8A4 004377E4  90 81 00 18 */	stw r4, 0x18(r1)
/* 8043A8A8 004377E8  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8043A8AC 004377EC  C8 62 25 78 */	lfd f3, lbl_805208D8@sda21(r2)
/* 8043A8B0 004377F0  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043A8B4 004377F4  EC A2 09 3A */	fmadds f5, f2, f4, f1
/* 8043A8B8 004377F8  93 C1 00 14 */	stw r30, 0x14(r1)
/* 8043A8BC 004377FC  EC 40 18 28 */	fsubs f2, f0, f3
/* 8043A8C0 00437800  C0 9F 00 3C */	lfs f4, 0x3c(r31)
/* 8043A8C4 00437804  90 81 00 10 */	stw r4, 0x10(r1)
/* 8043A8C8 00437808  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 8043A8CC 0043780C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043A8D0 00437810  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 8043A8D4 00437814  EC 00 18 28 */	fsubs f0, f0, f3
/* 8043A8D8 00437818  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8043A8DC 0043781C  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043A8E0 00437820  48 00 02 C8 */	b .L_8043ABA8
.L_8043A8E4:
/* 8043A8E4 00437824  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 8043A8E8 00437828  41 82 01 2C */	beq .L_8043AA14
/* 8043A8EC 0043782C  8B BF 00 A6 */	lbz r29, 0xa6(r31)
/* 8043A8F0 00437830  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8043A8F4 00437834  57 A0 0D FC */	rlwinm r0, r29, 1, 0x17, 0x1e
/* 8043A8F8 00437838  C0 42 25 60 */	lfs f2, lbl_805208C0@sda21(r2)
/* 8043A8FC 0043783C  7C 63 02 14 */	add r3, r3, r0
/* 8043A900 00437840  88 A3 00 01 */	lbz r5, 1(r3)
/* 8043A904 00437844  FC 20 10 90 */	fmr f1, f2
/* 8043A908 00437848  88 63 00 00 */	lbz r3, 0(r3)
/* 8043A90C 0043784C  38 05 00 01 */	addi r0, r5, 1
/* 8043A910 00437850  7C 03 00 50 */	subf r0, r3, r0
/* 8043A914 00437854  54 64 10 3A */	slwi r4, r3, 2
/* 8043A918 00437858  7C 09 03 A6 */	mtctr r0
/* 8043A91C 0043785C  7C 03 28 00 */	cmpw r3, r5
/* 8043A920 00437860  41 81 00 24 */	bgt .L_8043A944
.L_8043A924:
/* 8043A924 00437864  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 8043A928 00437868  7C 03 24 2E */	lfsx f0, r3, r4
/* 8043A92C 0043786C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043A930 00437870  40 81 00 0C */	ble .L_8043A93C
/* 8043A934 00437874  C0 1F 00 C8 */	lfs f0, 0xc8(r31)
/* 8043A938 00437878  EC 42 00 2A */	fadds f2, f2, f0
.L_8043A93C:
/* 8043A93C 0043787C  38 84 00 04 */	addi r4, r4, 4
/* 8043A940 00437880  42 00 FF E4 */	bdnz .L_8043A924
.L_8043A944:
/* 8043A944 00437884  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 8043A948 00437888  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A94C 0043788C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8043A950 00437890  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043A954 00437894  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A958 00437898  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 8043A95C 0043789C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043A960 004378A0  EF E1 00 32 */	fmuls f31, f1, f0
/* 8043A964 004378A4  7D 89 03 A6 */	mtctr r12
/* 8043A968 004378A8  4E 80 04 21 */	bctrl 
/* 8043A96C 004378AC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043A970 004378B0  3C 00 43 30 */	lis r0, 0x4330
/* 8043A974 004378B4  90 61 00 24 */	stw r3, 0x24(r1)
/* 8043A978 004378B8  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043A97C 004378BC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043A980 004378C0  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043A984 004378C4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8043A988 004378C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8043A98C 004378CC  EC 40 08 28 */	fsubs f2, f0, f1
/* 8043A990 004378D0  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 8043A994 004378D4  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 8043A998 004378D8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8043A99C 004378DC  EF C1 00 BA */	fmadds f30, f1, f2, f0
/* 8043A9A0 004378E0  7D 89 03 A6 */	mtctr r12
/* 8043A9A4 004378E4  4E 80 04 21 */	bctrl 
/* 8043A9A8 004378E8  3C 00 43 30 */	lis r0, 0x4330
/* 8043A9AC 004378EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043A9B0 004378F0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8043A9B4 004378F4  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 8043A9B8 004378F8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043A9BC 004378FC  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 8043A9C0 00437900  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8043A9C4 00437904  C0 BF 00 C8 */	lfs f5, 0xc8(r31)
/* 8043A9C8 00437908  EC 41 10 28 */	fsubs f2, f1, f2
/* 8043A9CC 0043790C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8043A9D0 00437910  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043A9D4 00437914  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043A9D8 00437918  EC 60 28 BC */	fnmsubs f3, f0, f2, f5
/* 8043A9DC 0043791C  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043A9E0 00437920  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043A9E4 00437924  93 C1 00 0C */	stw r30, 0xc(r1)
/* 8043A9E8 00437928  EC 81 F0 FA */	fmadds f4, f1, f3, f30
/* 8043A9EC 0043792C  C0 7F 00 3C */	lfs f3, 0x3c(r31)
/* 8043A9F0 00437930  90 01 00 08 */	stw r0, 8(r1)
/* 8043A9F4 00437934  EC 20 10 28 */	fsubs f1, f0, f2
/* 8043A9F8 00437938  C8 01 00 08 */	lfd f0, 8(r1)
/* 8043A9FC 0043793C  EC 23 20 7A */	fmadds f1, f3, f1, f4
/* 8043AA00 00437940  EC 00 10 28 */	fsubs f0, f0, f2
/* 8043AA04 00437944  EC 05 F8 3A */	fmadds f0, f5, f0, f31
/* 8043AA08 00437948  EC 00 08 2A */	fadds f0, f0, f1
/* 8043AA0C 0043794C  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043AA10 00437950  48 00 01 98 */	b .L_8043ABA8
.L_8043AA14:
/* 8043AA14 00437954  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 8043AA18 00437958  41 82 00 A4 */	beq .L_8043AABC
/* 8043AA1C 0043795C  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043AA20 00437960  81 83 00 00 */	lwz r12, 0(r3)
/* 8043AA24 00437964  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8043AA28 00437968  7D 89 03 A6 */	mtctr r12
/* 8043AA2C 0043796C  4E 80 04 21 */	bctrl 
/* 8043AA30 00437970  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043AA34 00437974  3C A0 43 30 */	lis r5, 0x4330
/* 8043AA38 00437978  7C 83 00 D0 */	neg r4, r3
/* 8043AA3C 0043797C  88 7F 00 A5 */	lbz r3, 0xa5(r31)
/* 8043AA40 00437980  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043AA44 00437984  6C 86 80 00 */	xoris r6, r4, 0x8000
/* 8043AA48 00437988  C8 22 25 78 */	lfd f1, lbl_805208D8@sda21(r2)
/* 8043AA4C 0043798C  38 83 00 01 */	addi r4, r3, 1
/* 8043AA50 00437990  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8043AA54 00437994  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8043AA58 00437998  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043AA5C 0043799C  88 1F 00 A4 */	lbz r0, 0xa4(r31)
/* 8043AA60 004379A0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043AA64 004379A4  C0 22 25 64 */	lfs f1, lbl_805208C4@sda21(r2)
/* 8043AA68 004379A8  7C 03 00 AE */	lbzx r0, r3, r0
/* 8043AA6C 004379AC  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8043AA70 004379B0  7C 04 00 50 */	subf r0, r4, r0
/* 8043AA74 004379B4  EC 01 00 2A */	fadds f0, f1, f0
/* 8043AA78 004379B8  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8043AA7C 004379BC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043AA80 004379C0  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 8043AA84 004379C4  C8 A2 25 70 */	lfd f5, lbl_805208D0@sda21(r2)
/* 8043AA88 004379C8  C8 61 00 20 */	lfd f3, 0x20(r1)
/* 8043AA8C 004379CC  EC 41 00 32 */	fmuls f2, f1, f0
/* 8043AA90 004379D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043AA94 004379D4  EC 83 28 28 */	fsubs f4, f3, f5
/* 8043AA98 004379D8  C0 7F 00 EC */	lfs f3, 0xec(r31)
/* 8043AA9C 004379DC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8043AAA0 004379E0  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 8043AAA4 004379E4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043AAA8 004379E8  EC 43 11 3A */	fmadds f2, f3, f4, f2
/* 8043AAAC 004379EC  EC 00 28 28 */	fsubs f0, f0, f5
/* 8043AAB0 004379F0  EC 01 10 3C */	fnmsubs f0, f1, f0, f2
/* 8043AAB4 004379F4  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043AAB8 004379F8  48 00 00 F0 */	b .L_8043ABA8
.L_8043AABC:
/* 8043AABC 004379FC  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043AAC0 00437A00  8B DF 00 A5 */	lbz r30, 0xa5(r31)
/* 8043AAC4 00437A04  81 83 00 00 */	lwz r12, 0(r3)
/* 8043AAC8 00437A08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043AACC 00437A0C  7D 89 03 A6 */	mtctr r12
/* 8043AAD0 00437A10  4E 80 04 21 */	bctrl 
/* 8043AAD4 00437A14  3C 80 43 30 */	lis r4, 0x4330
/* 8043AAD8 00437A18  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8043AADC 00437A1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8043AAE0 00437A20  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043AAE4 00437A24  90 81 00 20 */	stw r4, 0x20(r1)
/* 8043AAE8 00437A28  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043AAEC 00437A2C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8043AAF0 00437A30  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043AAF4 00437A34  EC 80 08 28 */	fsubs f4, f0, f1
/* 8043AAF8 00437A38  C0 5F 00 EC */	lfs f2, 0xec(r31)
/* 8043AAFC 00437A3C  90 81 00 18 */	stw r4, 0x18(r1)
/* 8043AB00 00437A40  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 8043AB04 00437A44  C8 62 25 78 */	lfd f3, lbl_805208D8@sda21(r2)
/* 8043AB08 00437A48  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8043AB0C 00437A4C  EC A2 09 3A */	fmadds f5, f2, f4, f1
/* 8043AB10 00437A50  93 C1 00 14 */	stw r30, 0x14(r1)
/* 8043AB14 00437A54  EC 40 18 28 */	fsubs f2, f0, f3
/* 8043AB18 00437A58  C0 9F 00 3C */	lfs f4, 0x3c(r31)
/* 8043AB1C 00437A5C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8043AB20 00437A60  C0 3F 00 C8 */	lfs f1, 0xc8(r31)
/* 8043AB24 00437A64  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043AB28 00437A68  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 8043AB2C 00437A6C  EC 00 18 28 */	fsubs f0, f0, f3
/* 8043AB30 00437A70  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8043AB34 00437A74  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 8043AB38 00437A78  48 00 00 70 */	b .L_8043ABA8
.L_8043AB3C:
/* 8043AB3C 00437A7C  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 8043AB40 00437A80  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 8043AB44 00437A84  48 00 00 64 */	b .L_8043ABA8
.L_8043AB48:
/* 8043AB48 00437A88  A0 65 00 00 */	lhz r3, 0(r5)
/* 8043AB4C 00437A8C  3C 00 43 30 */	lis r0, 0x4330
/* 8043AB50 00437A90  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043AB54 00437A94  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043AB58 00437A98  90 61 00 24 */	stw r3, 0x24(r1)
/* 8043AB5C 00437A9C  C0 02 25 5C */	lfs f0, lbl_805208BC@sda21(r2)
/* 8043AB60 00437AA0  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 8043AB64 00437AA4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043AB68 00437AA8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8043AB6C 00437AAC  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 8043AB70 00437AB0  48 00 00 38 */	b .L_8043ABA8
.L_8043AB74:
/* 8043AB74 00437AB4  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 8043AB78 00437AB8  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 8043AB7C 00437ABC  48 00 00 2C */	b .L_8043ABA8
.L_8043AB80:
/* 8043AB80 00437AC0  A0 65 00 00 */	lhz r3, 0(r5)
/* 8043AB84 00437AC4  3C 00 43 30 */	lis r0, 0x4330
/* 8043AB88 00437AC8  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043AB8C 00437ACC  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043AB90 00437AD0  90 61 00 24 */	stw r3, 0x24(r1)
/* 8043AB94 00437AD4  C0 02 25 5C */	lfs f0, lbl_805208BC@sda21(r2)
/* 8043AB98 00437AD8  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 8043AB9C 00437ADC  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043ABA0 00437AE0  EC 01 00 24 */	fdivs f0, f1, f0
/* 8043ABA4 00437AE4  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
.L_8043ABA8:
/* 8043ABA8 00437AE8  38 60 00 01 */	li r3, 1
/* 8043ABAC 00437AEC  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8043ABB0 00437AF0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8043ABB4 00437AF4  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8043ABB8 00437AF8  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8043ABBC 00437AFC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8043ABC0 00437B00  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8043ABC4 00437B04  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8043ABC8 00437B08  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8043ABCC 00437B0C  7C 08 03 A6 */	mtlr r0
/* 8043ABD0 00437B10  38 21 00 60 */	addi r1, r1, 0x60
/* 8043ABD4 00437B14  4E 80 00 20 */	blr 
.endfn tagPosition__Q25P2JME19TRenderingProcessorFUsPCvUl

.fn initRuby__Q25P2JME19TRenderingProcessorFv, global
/* 8043ABD8 00437B18  38 00 00 00 */	li r0, 0
/* 8043ABDC 00437B1C  98 03 00 F2 */	stb r0, 0xf2(r3)
/* 8043ABE0 00437B20  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 8043ABE4 00437B24  98 03 00 F8 */	stb r0, 0xf8(r3)
/* 8043ABE8 00437B28  80 63 01 00 */	lwz r3, 0x100(r3)
/* 8043ABEC 00437B2C  98 03 00 00 */	stb r0, 0(r3)
/* 8043ABF0 00437B30  4E 80 00 20 */	blr 
.endfn initRuby__Q25P2JME19TRenderingProcessorFv

.fn drawRuby__Q25P2JME19TRenderingProcessorFv, global
/* 8043ABF4 00437B34  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 8043ABF8 00437B38  7C 08 02 A6 */	mflr r0
/* 8043ABFC 00437B3C  90 01 01 14 */	stw r0, 0x114(r1)
/* 8043AC00 00437B40  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 8043AC04 00437B44  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 8043AC08 00437B48  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 8043AC0C 00437B4C  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 8043AC10 00437B50  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 8043AC14 00437B54  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 8043AC18 00437B58  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 8043AC1C 00437B5C  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 8043AC20 00437B60  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 8043AC24 00437B64  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 8043AC28 00437B68  BF 41 00 A8 */	stmw r26, 0xa8(r1)
/* 8043AC2C 00437B6C  7C 7B 1B 78 */	mr r27, r3
/* 8043AC30 00437B70  88 03 00 F2 */	lbz r0, 0xf2(r3)
/* 8043AC34 00437B74  28 00 00 00 */	cmplwi r0, 0
/* 8043AC38 00437B78  41 82 02 E0 */	beq .L_8043AF18
/* 8043AC3C 00437B7C  80 1B 00 8C */	lwz r0, 0x8c(r27)
/* 8043AC40 00437B80  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043AC44 00437B84  41 82 00 10 */	beq .L_8043AC54
/* 8043AC48 00437B88  38 00 00 00 */	li r0, 0
/* 8043AC4C 00437B8C  98 1B 00 F2 */	stb r0, 0xf2(r27)
/* 8043AC50 00437B90  48 00 02 C8 */	b .L_8043AF18
.L_8043AC54:
/* 8043AC54 00437B94  80 7B 00 4C */	lwz r3, 0x4c(r27)
/* 8043AC58 00437B98  81 83 00 00 */	lwz r12, 0(r3)
/* 8043AC5C 00437B9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8043AC60 00437BA0  7D 89 03 A6 */	mtctr r12
/* 8043AC64 00437BA4  4E 80 04 21 */	bctrl 
/* 8043AC68 00437BA8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043AC6C 00437BAC  3C 00 43 30 */	lis r0, 0x4330
/* 8043AC70 00437BB0  90 61 00 94 */	stw r3, 0x94(r1)
/* 8043AC74 00437BB4  C8 62 25 70 */	lfd f3, lbl_805208D0@sda21(r2)
/* 8043AC78 00437BB8  90 01 00 90 */	stw r0, 0x90(r1)
/* 8043AC7C 00437BBC  C0 3B 00 E4 */	lfs f1, 0xe4(r27)
/* 8043AC80 00437BC0  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 8043AC84 00437BC4  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043AC88 00437BC8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8043AC8C 00437BCC  C0 7B 00 94 */	lfs f3, 0x94(r27)
/* 8043AC90 00437BD0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8043AC94 00437BD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8043AC98 00437BD8  4C 41 13 82 */	cror 2, 1, 2
/* 8043AC9C 00437BDC  40 82 00 10 */	bne .L_8043ACAC
/* 8043ACA0 00437BE0  C0 02 25 6C */	lfs f0, lbl_805208CC@sda21(r2)
/* 8043ACA4 00437BE4  EC 00 08 2A */	fadds f0, f0, f1
/* 8043ACA8 00437BE8  48 00 00 0C */	b .L_8043ACB4
.L_8043ACAC:
/* 8043ACAC 00437BEC  C0 02 25 6C */	lfs f0, lbl_805208CC@sda21(r2)
/* 8043ACB0 00437BF0  EC 01 00 28 */	fsubs f0, f1, f0
.L_8043ACB4:
/* 8043ACB4 00437BF4  FC 00 00 1E */	fctiwz f0, f0
/* 8043ACB8 00437BF8  3C 00 43 30 */	lis r0, 0x4330
/* 8043ACBC 00437BFC  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8043ACC0 00437C00  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 8043ACC4 00437C04  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 8043ACC8 00437C08  C0 1B 01 08 */	lfs f0, 0x108(r27)
/* 8043ACCC 00437C0C  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 8043ACD0 00437C10  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043ACD4 00437C14  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8043ACD8 00437C18  C8 21 00 A0 */	lfd f1, 0xa0(r1)
/* 8043ACDC 00437C1C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043ACE0 00437C20  EC 23 08 28 */	fsubs f1, f3, f1
/* 8043ACE4 00437C24  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043ACE8 00437C28  40 81 00 08 */	ble .L_8043ACF0
/* 8043ACEC 00437C2C  D0 3B 01 08 */	stfs f1, 0x108(r27)
.L_8043ACF0:
/* 8043ACF0 00437C30  80 7B 00 F4 */	lwz r3, 0xf4(r27)
/* 8043ACF4 00437C34  88 1B 00 F8 */	lbz r0, 0xf8(r27)
/* 8043ACF8 00437C38  80 9B 00 B8 */	lwz r4, 0xb8(r27)
/* 8043ACFC 00437C3C  7C 03 02 14 */	add r0, r3, r0
/* 8043AD00 00437C40  7C 04 00 00 */	cmpw r4, r0
/* 8043AD04 00437C44  40 82 02 14 */	bne .L_8043AF18
/* 8043AD08 00437C48  80 7B 00 50 */	lwz r3, 0x50(r27)
/* 8043AD0C 00437C4C  C3 FB 01 0C */	lfs f31, 0x10c(r27)
/* 8043AD10 00437C50  81 83 00 00 */	lwz r12, 0(r3)
/* 8043AD14 00437C54  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8043AD18 00437C58  7D 89 03 A6 */	mtctr r12
/* 8043AD1C 00437C5C  4E 80 04 21 */	bctrl 
/* 8043AD20 00437C60  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043AD24 00437C64  3C 00 43 30 */	lis r0, 0x4330
/* 8043AD28 00437C68  90 61 00 A4 */	stw r3, 0xa4(r1)
/* 8043AD2C 00437C6C  3B C1 00 08 */	addi r30, r1, 8
/* 8043AD30 00437C70  C8 62 25 70 */	lfd f3, lbl_805208D0@sda21(r2)
/* 8043AD34 00437C74  7F DF F3 78 */	mr r31, r30
/* 8043AD38 00437C78  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8043AD3C 00437C7C  3B 80 00 00 */	li r28, 0
/* 8043AD40 00437C80  C0 5B 00 90 */	lfs f2, 0x90(r27)
/* 8043AD44 00437C84  3B A0 00 00 */	li r29, 0
/* 8043AD48 00437C88  C8 01 00 A0 */	lfd f0, 0xa0(r1)
/* 8043AD4C 00437C8C  C0 3B 00 C4 */	lfs f1, 0xc4(r27)
/* 8043AD50 00437C90  EC 60 18 28 */	fsubs f3, f0, f3
/* 8043AD54 00437C94  C0 1B 01 04 */	lfs f0, 0x104(r27)
/* 8043AD58 00437C98  EC 22 08 28 */	fsubs f1, f2, f1
/* 8043AD5C 00437C9C  C3 82 25 60 */	lfs f28, lbl_805208C0@sda21(r2)
/* 8043AD60 00437CA0  EF DF 00 F2 */	fmuls f30, f31, f3
/* 8043AD64 00437CA4  EF 61 00 28 */	fsubs f27, f1, f0
/* 8043AD68 00437CA8  48 00 00 9C */	b .L_8043AE04
.L_8043AD6C:
/* 8043AD6C 00437CAC  80 7B 00 50 */	lwz r3, 0x50(r27)
/* 8043AD70 00437CB0  80 9B 01 00 */	lwz r4, 0x100(r27)
/* 8043AD74 00437CB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8043AD78 00437CB8  7C 84 E8 AE */	lbzx r4, r4, r29
/* 8043AD7C 00437CBC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8043AD80 00437CC0  7C 9A 23 78 */	mr r26, r4
/* 8043AD84 00437CC4  7D 89 03 A6 */	mtctr r12
/* 8043AD88 00437CC8  4E 80 04 21 */	bctrl 
/* 8043AD8C 00437CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8043AD90 00437CD0  41 82 00 24 */	beq .L_8043ADB4
/* 8043AD94 00437CD4  80 7B 01 00 */	lwz r3, 0x100(r27)
/* 8043AD98 00437CD8  38 1D 00 01 */	addi r0, r29, 1
/* 8043AD9C 00437CDC  57 44 44 2E */	rlwinm r4, r26, 8, 0x10, 0x17
/* 8043ADA0 00437CE0  3B BD 00 01 */	addi r29, r29, 1
/* 8043ADA4 00437CE4  7C 03 00 AE */	lbzx r0, r3, r0
/* 8043ADA8 00437CE8  7C 9A 23 78 */	mr r26, r4
/* 8043ADAC 00437CEC  50 1A 06 3E */	rlwimi r26, r0, 0, 0x18, 0x1f
/* 8043ADB0 00437CF0  48 00 00 28 */	b .L_8043ADD8
.L_8043ADB4:
/* 8043ADB4 00437CF4  2C 1A 00 FF */	cmpwi r26, 0xff
/* 8043ADB8 00437CF8  41 81 00 20 */	bgt .L_8043ADD8
/* 8043ADBC 00437CFC  3C 60 80 4A */	lis r3, __ctype_map@ha
/* 8043ADC0 00437D00  57 40 06 3E */	clrlwi r0, r26, 0x18
/* 8043ADC4 00437D04  38 63 6B F0 */	addi r3, r3, __ctype_map@l
/* 8043ADC8 00437D08  7C 03 00 AE */	lbzx r0, r3, r0
/* 8043ADCC 00437D0C  70 00 00 DC */	andi. r0, r0, 0xdc
/* 8043ADD0 00437D10  40 82 00 08 */	bne .L_8043ADD8
/* 8043ADD4 00437D14  3B 40 00 3F */	li r26, 0x3f
.L_8043ADD8:
/* 8043ADD8 00437D18  FC 20 F0 90 */	fmr f1, f30
/* 8043ADDC 00437D1C  80 9B 00 50 */	lwz r4, 0x50(r27)
/* 8043ADE0 00437D20  7F 63 DB 78 */	mr r3, r27
/* 8043ADE4 00437D24  7F 45 D3 78 */	mr r5, r26
/* 8043ADE8 00437D28  38 C0 00 01 */	li r6, 1
/* 8043ADEC 00437D2C  48 00 15 29 */	bl calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb
/* 8043ADF0 00437D30  EF 9C 08 2A */	fadds f28, f28, f1
/* 8043ADF4 00437D34  93 5F 00 00 */	stw r26, 0(r31)
/* 8043ADF8 00437D38  3B FF 00 04 */	addi r31, r31, 4
/* 8043ADFC 00437D3C  3B 9C 00 01 */	addi r28, r28, 1
/* 8043AE00 00437D40  3B BD 00 01 */	addi r29, r29, 1
.L_8043AE04:
/* 8043AE04 00437D44  80 1B 00 FC */	lwz r0, 0xfc(r27)
/* 8043AE08 00437D48  7C 1D 00 40 */	cmplw r29, r0
/* 8043AE0C 00437D4C  41 80 FF 60 */	blt .L_8043AD6C
/* 8043AE10 00437D50  38 7C 00 01 */	addi r3, r28, 1
/* 8043AE14 00437D54  3C 00 43 30 */	lis r0, 0x4330
/* 8043AE18 00437D58  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043AE1C 00437D5C  C0 1B 00 C4 */	lfs f0, 0xc4(r27)
/* 8043AE20 00437D60  90 61 00 A4 */	stw r3, 0xa4(r1)
/* 8043AE24 00437D64  EC 3B E0 28 */	fsubs f1, f27, f28
/* 8043AE28 00437D68  C8 42 25 70 */	lfd f2, lbl_805208D0@sda21(r2)
/* 8043AE2C 00437D6C  EC 60 07 F2 */	fmuls f3, f0, f31
/* 8043AE30 00437D70  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8043AE34 00437D74  C8 01 00 A0 */	lfd f0, 0xa0(r1)
/* 8043AE38 00437D78  EC 00 10 28 */	fsubs f0, f0, f2
/* 8043AE3C 00437D7C  EF A1 00 24 */	fdivs f29, f1, f0
/* 8043AE40 00437D80  FC 1D 18 40 */	fcmpo cr0, f29, f3
/* 8043AE44 00437D84  40 80 00 08 */	bge .L_8043AE4C
/* 8043AE48 00437D88  FF A0 18 90 */	fmr f29, f3
.L_8043AE4C:
/* 8043AE4C 00437D8C  EC 3D E0 3A */	fmadds f1, f29, f0, f28
/* 8043AE50 00437D90  C0 42 25 6C */	lfs f2, lbl_805208CC@sda21(r2)
/* 8043AE54 00437D94  C0 1B 01 04 */	lfs f0, 0x104(r27)
/* 8043AE58 00437D98  3B E0 00 00 */	li r31, 0
/* 8043AE5C 00437D9C  CB 82 25 70 */	lfd f28, lbl_805208D0@sda21(r2)
/* 8043AE60 00437DA0  3F A0 43 30 */	lis r29, 0x4330
/* 8043AE64 00437DA4  EC 3B 08 28 */	fsubs f1, f27, f1
/* 8043AE68 00437DA8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8043AE6C 00437DAC  EC 1D 00 2A */	fadds f0, f29, f0
/* 8043AE70 00437DB0  D0 1B 01 04 */	stfs f0, 0x104(r27)
/* 8043AE74 00437DB4  48 00 00 94 */	b .L_8043AF08
.L_8043AE78:
/* 8043AE78 00437DB8  80 7B 00 50 */	lwz r3, 0x50(r27)
/* 8043AE7C 00437DBC  81 83 00 00 */	lwz r12, 0(r3)
/* 8043AE80 00437DC0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8043AE84 00437DC4  7D 89 03 A6 */	mtctr r12
/* 8043AE88 00437DC8  4E 80 04 21 */	bctrl 
/* 8043AE8C 00437DCC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8043AE90 00437DD0  81 9B 00 00 */	lwz r12, 0(r27)
/* 8043AE94 00437DD4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8043AE98 00437DD8  FC 60 F0 90 */	fmr f3, f30
/* 8043AE9C 00437DDC  C0 9B 01 04 */	lfs f4, 0x104(r27)
/* 8043AEA0 00437DE0  7F 63 DB 78 */	mr r3, r27
/* 8043AEA4 00437DE4  93 A1 00 A0 */	stw r29, 0xa0(r1)
/* 8043AEA8 00437DE8  38 A0 00 01 */	li r5, 1
/* 8043AEAC 00437DEC  C0 3B 00 54 */	lfs f1, 0x54(r27)
/* 8043AEB0 00437DF0  C8 01 00 A0 */	lfd f0, 0xa0(r1)
/* 8043AEB4 00437DF4  C0 5B 01 08 */	lfs f2, 0x108(r27)
/* 8043AEB8 00437DF8  EC 24 08 2A */	fadds f1, f4, f1
/* 8043AEBC 00437DFC  EC A0 E0 28 */	fsubs f5, f0, f28
/* 8043AEC0 00437E00  C0 1B 00 58 */	lfs f0, 0x58(r27)
/* 8043AEC4 00437E04  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8043AEC8 00437E08  EC 42 00 2A */	fadds f2, f2, f0
/* 8043AECC 00437E0C  80 9E 00 00 */	lwz r4, 0(r30)
/* 8043AED0 00437E10  EC 9F 01 72 */	fmuls f4, f31, f5
/* 8043AED4 00437E14  7D 89 03 A6 */	mtctr r12
/* 8043AED8 00437E18  4E 80 04 21 */	bctrl 
/* 8043AEDC 00437E1C  C0 1B 01 04 */	lfs f0, 0x104(r27)
/* 8043AEE0 00437E20  3B DE 00 04 */	addi r30, r30, 4
/* 8043AEE4 00437E24  3B FF 00 01 */	addi r31, r31, 1
/* 8043AEE8 00437E28  EC 00 08 2A */	fadds f0, f0, f1
/* 8043AEEC 00437E2C  D0 1B 01 04 */	stfs f0, 0x104(r27)
/* 8043AEF0 00437E30  C0 1B 01 04 */	lfs f0, 0x104(r27)
/* 8043AEF4 00437E34  EC 00 E8 2A */	fadds f0, f0, f29
/* 8043AEF8 00437E38  D0 1B 01 04 */	stfs f0, 0x104(r27)
/* 8043AEFC 00437E3C  80 7B 00 40 */	lwz r3, 0x40(r27)
/* 8043AF00 00437E40  38 03 00 01 */	addi r0, r3, 1
/* 8043AF04 00437E44  90 1B 00 40 */	stw r0, 0x40(r27)
.L_8043AF08:
/* 8043AF08 00437E48  7C 1F E0 00 */	cmpw r31, r28
/* 8043AF0C 00437E4C  41 80 FF 6C */	blt .L_8043AE78
/* 8043AF10 00437E50  38 00 00 00 */	li r0, 0
/* 8043AF14 00437E54  98 1B 00 F2 */	stb r0, 0xf2(r27)
.L_8043AF18:
/* 8043AF18 00437E58  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 8043AF1C 00437E5C  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 8043AF20 00437E60  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 8043AF24 00437E64  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 8043AF28 00437E68  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 8043AF2C 00437E6C  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 8043AF30 00437E70  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 8043AF34 00437E74  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 8043AF38 00437E78  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 8043AF3C 00437E7C  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 8043AF40 00437E80  BB 41 00 A8 */	lmw r26, 0xa8(r1)
/* 8043AF44 00437E84  80 01 01 14 */	lwz r0, 0x114(r1)
/* 8043AF48 00437E88  7C 08 03 A6 */	mtlr r0
/* 8043AF4C 00437E8C  38 21 01 10 */	addi r1, r1, 0x110
/* 8043AF50 00437E90  4E 80 00 20 */	blr 
.endfn drawRuby__Q25P2JME19TRenderingProcessorFv

.fn tagImage__Q25P2JME19TRenderingProcessorFUsPCvUl, global
/* 8043AF54 00437E94  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8043AF58 00437E98  7C 08 02 A6 */	mflr r0
/* 8043AF5C 00437E9C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8043AF60 00437EA0  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8043AF64 00437EA4  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8043AF68 00437EA8  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8043AF6C 00437EAC  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8043AF70 00437EB0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8043AF74 00437EB4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8043AF78 00437EB8  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8043AF7C 00437EBC  93 81 00 40 */	stw r28, 0x40(r1)
/* 8043AF80 00437EC0  28 06 00 01 */	cmplwi r6, 1
/* 8043AF84 00437EC4  7C 7E 1B 78 */	mr r30, r3
/* 8043AF88 00437EC8  7C 9C 23 78 */	mr r28, r4
/* 8043AF8C 00437ECC  7C BD 2B 78 */	mr r29, r5
/* 8043AF90 00437ED0  41 82 00 20 */	beq .L_8043AFB0
/* 8043AF94 00437ED4  3C 60 80 4A */	lis r3, lbl_8049ABE8@ha
/* 8043AF98 00437ED8  3C A0 80 4A */	lis r5, lbl_8049AC00@ha
/* 8043AF9C 00437EDC  38 63 AB E8 */	addi r3, r3, lbl_8049ABE8@l
/* 8043AFA0 00437EE0  38 80 04 5A */	li r4, 0x45a
/* 8043AFA4 00437EE4  38 A5 AC 00 */	addi r5, r5, lbl_8049AC00@l
/* 8043AFA8 00437EE8  4C C6 31 82 */	crclr 6
/* 8043AFAC 00437EEC  4B BE F6 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043AFB0:
/* 8043AFB0 00437EF0  57 80 04 3F */	clrlwi. r0, r28, 0x10
/* 8043AFB4 00437EF4  8B BD 00 00 */	lbz r29, 0(r29)
/* 8043AFB8 00437EF8  41 82 00 08 */	beq .L_8043AFC0
/* 8043AFBC 00437EFC  48 00 00 20 */	b .L_8043AFDC
.L_8043AFC0:
/* 8043AFC0 00437F00  C0 42 25 80 */	lfs f2, lbl_805208E0@sda21(r2)
/* 8043AFC4 00437F04  3B E0 00 00 */	li r31, 0
/* 8043AFC8 00437F08  C0 3E 00 E0 */	lfs f1, 0xe0(r30)
/* 8043AFCC 00437F0C  C0 1E 00 E4 */	lfs f0, 0xe4(r30)
/* 8043AFD0 00437F10  EF E2 00 72 */	fmuls f31, f2, f1
/* 8043AFD4 00437F14  EF C2 00 32 */	fmuls f30, f2, f0
/* 8043AFD8 00437F18  48 00 00 20 */	b .L_8043AFF8
.L_8043AFDC:
/* 8043AFDC 00437F1C  3C 60 80 4A */	lis r3, lbl_8049ABE8@ha
/* 8043AFE0 00437F20  3C A0 80 4A */	lis r5, lbl_8049AC00@ha
/* 8043AFE4 00437F24  38 63 AB E8 */	addi r3, r3, lbl_8049ABE8@l
/* 8043AFE8 00437F28  38 80 04 6E */	li r4, 0x46e
/* 8043AFEC 00437F2C  38 A5 AC 00 */	addi r5, r5, lbl_8049AC00@l
/* 8043AFF0 00437F30  4C C6 31 82 */	crclr 6
/* 8043AFF4 00437F34  4B BE F6 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043AFF8:
/* 8043AFF8 00437F38  80 6D 9B D8 */	lwz r3, gP2JMEMgr@sda21(r13)
/* 8043AFFC 00437F3C  28 03 00 00 */	cmplwi r3, 0
/* 8043B000 00437F40  41 82 03 14 */	beq .L_8043B314
/* 8043B004 00437F44  7F A5 EB 78 */	mr r5, r29
/* 8043B008 00437F48  38 80 00 00 */	li r4, 0
/* 8043B00C 00437F4C  4B FF D7 65 */	bl getImage__Q25P2JME3MgrFQ35P2JME10ImageGroup3EIDi
/* 8043B010 00437F50  7C 64 1B 79 */	or. r4, r3, r3
/* 8043B014 00437F54  41 82 03 00 */	beq .L_8043B314
/* 8043B018 00437F58  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043B01C 00437F5C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043B020 00437F60  40 82 02 F4 */	bne .L_8043B314
/* 8043B024 00437F64  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8043B028 00437F68  2C 1F 00 00 */	cmpwi r31, 0
/* 8043B02C 00437F6C  80 1E 00 5C */	lwz r0, 0x5c(r30)
/* 8043B030 00437F70  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8043B034 00437F74  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043B038 00437F78  41 82 00 08 */	beq .L_8043B040
/* 8043B03C 00437F7C  48 00 00 D0 */	b .L_8043B10C
.L_8043B040:
/* 8043B040 00437F80  3C 60 80 4F */	lis r3, "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@"@ha
/* 8043B044 00437F84  28 1D 00 08 */	cmplwi r29, 8
/* 8043B048 00437F88  57 A5 1D 78 */	rlwinm r5, r29, 3, 0x15, 0x1c
/* 8043B04C 00437F8C  38 03 CA 38 */	addi r0, r3, "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@"@l
/* 8043B050 00437F90  7D 20 2A 14 */	add r9, r0, r5
/* 8043B054 00437F94  39 49 00 04 */	addi r10, r9, 4
/* 8043B058 00437F98  40 80 00 70 */	bge .L_8043B0C8
/* 8043B05C 00437F9C  89 09 00 03 */	lbz r8, 3(r9)
/* 8043B060 00437FA0  38 60 00 FF */	li r3, 0xff
/* 8043B064 00437FA4  88 E9 00 02 */	lbz r7, 2(r9)
/* 8043B068 00437FA8  38 00 00 CD */	li r0, 0xcd
/* 8043B06C 00437FAC  88 C9 00 01 */	lbz r6, 1(r9)
/* 8043B070 00437FB0  88 A9 00 00 */	lbz r5, 0(r9)
/* 8043B074 00437FB4  98 BE 00 60 */	stb r5, 0x60(r30)
/* 8043B078 00437FB8  98 DE 00 61 */	stb r6, 0x61(r30)
/* 8043B07C 00437FBC  98 FE 00 62 */	stb r7, 0x62(r30)
/* 8043B080 00437FC0  99 1E 00 63 */	stb r8, 0x63(r30)
/* 8043B084 00437FC4  89 0A 00 03 */	lbz r8, 3(r10)
/* 8043B088 00437FC8  88 EA 00 02 */	lbz r7, 2(r10)
/* 8043B08C 00437FCC  88 CA 00 01 */	lbz r6, 1(r10)
/* 8043B090 00437FD0  88 AA 00 00 */	lbz r5, 0(r10)
/* 8043B094 00437FD4  98 BE 00 5C */	stb r5, 0x5c(r30)
/* 8043B098 00437FD8  98 DE 00 5D */	stb r6, 0x5d(r30)
/* 8043B09C 00437FDC  98 FE 00 5E */	stb r7, 0x5e(r30)
/* 8043B0A0 00437FE0  99 1E 00 5F */	stb r8, 0x5f(r30)
/* 8043B0A4 00437FE4  98 7E 00 70 */	stb r3, 0x70(r30)
/* 8043B0A8 00437FE8  98 7E 00 71 */	stb r3, 0x71(r30)
/* 8043B0AC 00437FEC  98 7E 00 72 */	stb r3, 0x72(r30)
/* 8043B0B0 00437FF0  98 7E 00 73 */	stb r3, 0x73(r30)
/* 8043B0B4 00437FF4  98 1E 00 74 */	stb r0, 0x74(r30)
/* 8043B0B8 00437FF8  98 1E 00 75 */	stb r0, 0x75(r30)
/* 8043B0BC 00437FFC  98 1E 00 76 */	stb r0, 0x76(r30)
/* 8043B0C0 00438000  98 7E 00 77 */	stb r3, 0x77(r30)
/* 8043B0C4 00438004  48 00 01 70 */	b .L_8043B234
.L_8043B0C8:
/* 8043B0C8 00438008  88 C9 00 03 */	lbz r6, 3(r9)
/* 8043B0CC 0043800C  88 A9 00 02 */	lbz r5, 2(r9)
/* 8043B0D0 00438010  88 69 00 01 */	lbz r3, 1(r9)
/* 8043B0D4 00438014  88 09 00 00 */	lbz r0, 0(r9)
/* 8043B0D8 00438018  98 1E 00 70 */	stb r0, 0x70(r30)
/* 8043B0DC 0043801C  98 7E 00 71 */	stb r3, 0x71(r30)
/* 8043B0E0 00438020  98 BE 00 72 */	stb r5, 0x72(r30)
/* 8043B0E4 00438024  98 DE 00 73 */	stb r6, 0x73(r30)
/* 8043B0E8 00438028  88 CA 00 03 */	lbz r6, 3(r10)
/* 8043B0EC 0043802C  88 AA 00 02 */	lbz r5, 2(r10)
/* 8043B0F0 00438030  88 6A 00 01 */	lbz r3, 1(r10)
/* 8043B0F4 00438034  88 0A 00 00 */	lbz r0, 0(r10)
/* 8043B0F8 00438038  98 1E 00 74 */	stb r0, 0x74(r30)
/* 8043B0FC 0043803C  98 7E 00 75 */	stb r3, 0x75(r30)
/* 8043B100 00438040  98 BE 00 76 */	stb r5, 0x76(r30)
/* 8043B104 00438044  98 DE 00 77 */	stb r6, 0x77(r30)
/* 8043B108 00438048  48 00 01 2C */	b .L_8043B234
.L_8043B10C:
/* 8043B10C 0043804C  88 BE 00 F0 */	lbz r5, 0xf0(r30)
/* 8043B110 00438050  28 05 00 00 */	cmplwi r5, 0
/* 8043B114 00438054  40 82 00 28 */	bne .L_8043B13C
/* 8043B118 00438058  88 1E 00 D4 */	lbz r0, 0xd4(r30)
/* 8043B11C 0043805C  98 1E 00 70 */	stb r0, 0x70(r30)
/* 8043B120 00438060  88 1E 00 D5 */	lbz r0, 0xd5(r30)
/* 8043B124 00438064  98 1E 00 71 */	stb r0, 0x71(r30)
/* 8043B128 00438068  88 1E 00 D6 */	lbz r0, 0xd6(r30)
/* 8043B12C 0043806C  98 1E 00 72 */	stb r0, 0x72(r30)
/* 8043B130 00438070  88 1E 00 D7 */	lbz r0, 0xd7(r30)
/* 8043B134 00438074  98 1E 00 73 */	stb r0, 0x73(r30)
/* 8043B138 00438078  48 00 00 68 */	b .L_8043B1A0
.L_8043B13C:
/* 8043B13C 0043807C  80 7E 00 04 */	lwz r3, 4(r30)
/* 8043B140 00438080  28 03 00 00 */	cmplwi r3, 0
/* 8043B144 00438084  40 82 00 0C */	bne .L_8043B150
/* 8043B148 00438088  38 60 00 00 */	li r3, 0
/* 8043B14C 0043808C  48 00 00 08 */	b .L_8043B154
.L_8043B150:
/* 8043B150 00438090  80 63 00 04 */	lwz r3, 4(r3)
.L_8043B154:
/* 8043B154 00438094  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8043B158 00438098  28 00 00 00 */	cmplwi r0, 0
/* 8043B15C 0043809C  41 82 00 0C */	beq .L_8043B168
/* 8043B160 004380A0  38 63 00 18 */	addi r3, r3, 0x18
/* 8043B164 004380A4  48 00 00 08 */	b .L_8043B16C
.L_8043B168:
/* 8043B168 004380A8  38 60 00 00 */	li r3, 0
.L_8043B16C:
/* 8043B16C 004380AC  80 63 00 04 */	lwz r3, 4(r3)
/* 8043B170 004380B0  54 A0 10 3A */	slwi r0, r5, 2
/* 8043B174 004380B4  7C 63 02 14 */	add r3, r3, r0
/* 8043B178 004380B8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8043B17C 004380BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043B180 004380C0  88 61 00 14 */	lbz r3, 0x14(r1)
/* 8043B184 004380C4  88 01 00 15 */	lbz r0, 0x15(r1)
/* 8043B188 004380C8  98 7E 00 70 */	stb r3, 0x70(r30)
/* 8043B18C 004380CC  88 61 00 16 */	lbz r3, 0x16(r1)
/* 8043B190 004380D0  98 1E 00 71 */	stb r0, 0x71(r30)
/* 8043B194 004380D4  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8043B198 004380D8  98 7E 00 72 */	stb r3, 0x72(r30)
/* 8043B19C 004380DC  98 1E 00 73 */	stb r0, 0x73(r30)
.L_8043B1A0:
/* 8043B1A0 004380E0  88 BE 00 F1 */	lbz r5, 0xf1(r30)
/* 8043B1A4 004380E4  28 05 00 00 */	cmplwi r5, 0
/* 8043B1A8 004380E8  40 82 00 28 */	bne .L_8043B1D0
/* 8043B1AC 004380EC  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 8043B1B0 004380F0  98 1E 00 74 */	stb r0, 0x74(r30)
/* 8043B1B4 004380F4  88 1E 00 D9 */	lbz r0, 0xd9(r30)
/* 8043B1B8 004380F8  98 1E 00 75 */	stb r0, 0x75(r30)
/* 8043B1BC 004380FC  88 1E 00 DA */	lbz r0, 0xda(r30)
/* 8043B1C0 00438100  98 1E 00 76 */	stb r0, 0x76(r30)
/* 8043B1C4 00438104  88 1E 00 DB */	lbz r0, 0xdb(r30)
/* 8043B1C8 00438108  98 1E 00 77 */	stb r0, 0x77(r30)
/* 8043B1CC 0043810C  48 00 00 68 */	b .L_8043B234
.L_8043B1D0:
/* 8043B1D0 00438110  80 7E 00 04 */	lwz r3, 4(r30)
/* 8043B1D4 00438114  28 03 00 00 */	cmplwi r3, 0
/* 8043B1D8 00438118  40 82 00 0C */	bne .L_8043B1E4
/* 8043B1DC 0043811C  38 60 00 00 */	li r3, 0
/* 8043B1E0 00438120  48 00 00 08 */	b .L_8043B1E8
.L_8043B1E4:
/* 8043B1E4 00438124  80 63 00 04 */	lwz r3, 4(r3)
.L_8043B1E8:
/* 8043B1E8 00438128  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8043B1EC 0043812C  28 00 00 00 */	cmplwi r0, 0
/* 8043B1F0 00438130  41 82 00 0C */	beq .L_8043B1FC
/* 8043B1F4 00438134  38 63 00 18 */	addi r3, r3, 0x18
/* 8043B1F8 00438138  48 00 00 08 */	b .L_8043B200
.L_8043B1FC:
/* 8043B1FC 0043813C  38 60 00 00 */	li r3, 0
.L_8043B200:
/* 8043B200 00438140  80 63 00 04 */	lwz r3, 4(r3)
/* 8043B204 00438144  54 A0 10 3A */	slwi r0, r5, 2
/* 8043B208 00438148  7C 63 02 14 */	add r3, r3, r0
/* 8043B20C 0043814C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8043B210 00438150  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043B214 00438154  88 61 00 10 */	lbz r3, 0x10(r1)
/* 8043B218 00438158  88 01 00 11 */	lbz r0, 0x11(r1)
/* 8043B21C 0043815C  98 7E 00 74 */	stb r3, 0x74(r30)
/* 8043B220 00438160  88 61 00 12 */	lbz r3, 0x12(r1)
/* 8043B224 00438164  98 1E 00 75 */	stb r0, 0x75(r30)
/* 8043B228 00438168  88 01 00 13 */	lbz r0, 0x13(r1)
/* 8043B22C 0043816C  98 7E 00 76 */	stb r3, 0x76(r30)
/* 8043B230 00438170  98 1E 00 77 */	stb r0, 0x77(r30)
.L_8043B234:
/* 8043B234 00438174  88 BE 00 73 */	lbz r5, 0x73(r30)
/* 8043B238 00438178  3C 00 43 30 */	lis r0, 0x4330
/* 8043B23C 0043817C  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043B240 00438180  FC 60 F8 90 */	fmr f3, f31
/* 8043B244 00438184  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043B248 00438188  FC 80 F0 90 */	fmr f4, f30
/* 8043B24C 0043818C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8043B250 00438190  7F C3 F3 78 */	mr r3, r30
/* 8043B254 00438194  C0 1E 00 78 */	lfs f0, 0x78(r30)
/* 8043B258 00438198  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 8043B25C 0043819C  90 01 00 30 */	stw r0, 0x30(r1)
/* 8043B260 004381A0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043B264 004381A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8043B268 004381A8  FC 00 00 1E */	fctiwz f0, f0
/* 8043B26C 004381AC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8043B270 004381B0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8043B274 004381B4  98 1E 00 73 */	stb r0, 0x73(r30)
/* 8043B278 004381B8  88 1E 00 77 */	lbz r0, 0x77(r30)
/* 8043B27C 004381BC  C0 1E 00 78 */	lfs f0, 0x78(r30)
/* 8043B280 004381C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8043B284 004381C4  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 8043B288 004381C8  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043B28C 004381CC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8043B290 004381D0  FC 00 00 1E */	fctiwz f0, f0
/* 8043B294 004381D4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8043B298 004381D8  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8043B29C 004381DC  98 1E 00 77 */	stb r0, 0x77(r30)
/* 8043B2A0 004381E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8043B2A4 004381E4  C0 BE 00 90 */	lfs f5, 0x90(r30)
/* 8043B2A8 004381E8  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 8043B2AC 004381EC  C0 5E 00 94 */	lfs f2, 0x94(r30)
/* 8043B2B0 004381F0  C0 1E 00 58 */	lfs f0, 0x58(r30)
/* 8043B2B4 004381F4  EC 25 08 2A */	fadds f1, f5, f1
/* 8043B2B8 004381F8  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8043B2BC 004381FC  EC 42 00 2A */	fadds f2, f2, f0
/* 8043B2C0 00438200  7D 89 03 A6 */	mtctr r12
/* 8043B2C4 00438204  4E 80 04 21 */	bctrl 
/* 8043B2C8 00438208  2C 1F 00 00 */	cmpwi r31, 0
/* 8043B2CC 0043820C  41 82 00 08 */	beq .L_8043B2D4
/* 8043B2D0 00438210  48 00 00 44 */	b .L_8043B314
.L_8043B2D4:
/* 8043B2D4 00438214  88 61 00 1C */	lbz r3, 0x1c(r1)
/* 8043B2D8 00438218  88 01 00 1D */	lbz r0, 0x1d(r1)
/* 8043B2DC 0043821C  98 7E 00 60 */	stb r3, 0x60(r30)
/* 8043B2E0 00438220  88 61 00 1E */	lbz r3, 0x1e(r1)
/* 8043B2E4 00438224  98 1E 00 61 */	stb r0, 0x61(r30)
/* 8043B2E8 00438228  88 01 00 1F */	lbz r0, 0x1f(r1)
/* 8043B2EC 0043822C  98 7E 00 62 */	stb r3, 0x62(r30)
/* 8043B2F0 00438230  88 61 00 18 */	lbz r3, 0x18(r1)
/* 8043B2F4 00438234  98 1E 00 63 */	stb r0, 0x63(r30)
/* 8043B2F8 00438238  88 01 00 19 */	lbz r0, 0x19(r1)
/* 8043B2FC 0043823C  98 7E 00 5C */	stb r3, 0x5c(r30)
/* 8043B300 00438240  88 61 00 1A */	lbz r3, 0x1a(r1)
/* 8043B304 00438244  98 1E 00 5D */	stb r0, 0x5d(r30)
/* 8043B308 00438248  88 01 00 1B */	lbz r0, 0x1b(r1)
/* 8043B30C 0043824C  98 7E 00 5E */	stb r3, 0x5e(r30)
/* 8043B310 00438250  98 1E 00 5F */	stb r0, 0x5f(r30)
.L_8043B314:
/* 8043B314 00438254  C0 1E 00 90 */	lfs f0, 0x90(r30)
/* 8043B318 00438258  38 81 00 0C */	addi r4, r1, 0xc
/* 8043B31C 0043825C  38 A1 00 08 */	addi r5, r1, 8
/* 8043B320 00438260  EC 00 F8 2A */	fadds f0, f0, f31
/* 8043B324 00438264  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 8043B328 00438268  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 8043B32C 0043826C  38 03 00 01 */	addi r0, r3, 1
/* 8043B330 00438270  90 1E 00 40 */	stw r0, 0x40(r30)
/* 8043B334 00438274  80 1E 00 D0 */	lwz r0, 0xd0(r30)
/* 8043B338 00438278  90 01 00 08 */	stw r0, 8(r1)
/* 8043B33C 0043827C  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 8043B340 00438280  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043B344 00438284  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8043B348 00438288  81 83 00 00 */	lwz r12, 0(r3)
/* 8043B34C 0043828C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8043B350 00438290  7D 89 03 A6 */	mtctr r12
/* 8043B354 00438294  4E 80 04 21 */	bctrl 
/* 8043B358 00438298  38 60 00 01 */	li r3, 1
/* 8043B35C 0043829C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8043B360 004382A0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8043B364 004382A4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8043B368 004382A8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8043B36C 004382AC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8043B370 004382B0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8043B374 004382B4  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8043B378 004382B8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8043B37C 004382BC  83 81 00 40 */	lwz r28, 0x40(r1)
/* 8043B380 004382C0  7C 08 03 A6 */	mtlr r0
/* 8043B384 004382C4  38 21 00 70 */	addi r1, r1, 0x70
/* 8043B388 004382C8  4E 80 00 20 */	blr 
.endfn tagImage__Q25P2JME19TRenderingProcessorFUsPCvUl

.fn doDrawLetter__Q25P2JME19TRenderingProcessorFffffib, global
/* 8043B38C 004382CC  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8043B390 004382D0  7C 08 02 A6 */	mflr r0
/* 8043B394 004382D4  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8043B398 004382D8  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8043B39C 004382DC  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8043B3A0 004382E0  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8043B3A4 004382E4  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 8043B3A8 004382E8  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 8043B3AC 004382EC  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 8043B3B0 004382F0  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 8043B3B4 004382F4  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 8043B3B8 004382F8  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8043B3BC 004382FC  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8043B3C0 00438300  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 8043B3C4 00438304  7C 7D 1B 78 */	mr r29, r3
/* 8043B3C8 00438308  38 C0 FF FF */	li r6, -1
/* 8043B3CC 0043830C  88 63 00 64 */	lbz r3, 0x64(r3)
/* 8043B3D0 00438310  3C 00 43 30 */	lis r0, 0x4330
/* 8043B3D4 00438314  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043B3D8 00438318  FF 80 08 90 */	fmr f28, f1
/* 8043B3DC 0043831C  C8 A2 25 78 */	lfd f5, lbl_805208D8@sda21(r2)
/* 8043B3E0 00438320  FF A0 10 90 */	fmr f29, f2
/* 8043B3E4 00438324  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8043B3E8 00438328  FF C0 18 90 */	fmr f30, f3
/* 8043B3EC 0043832C  C0 1D 00 7C */	lfs f0, 0x7c(r29)
/* 8043B3F0 00438330  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 8043B3F4 00438334  FF E0 20 90 */	fmr f31, f4
/* 8043B3F8 00438338  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B3FC 0043833C  7C 9E 23 78 */	mr r30, r4
/* 8043B400 00438340  EC 42 28 28 */	fsubs f2, f2, f5
/* 8043B404 00438344  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8043B408 00438348  7C BF 2B 78 */	mr r31, r5
/* 8043B40C 0043834C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8043B410 00438350  EC 02 00 32 */	fmuls f0, f2, f0
/* 8043B414 00438354  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043B418 00438358  40 81 00 08 */	ble .L_8043B420
/* 8043B41C 0043835C  FC 00 08 90 */	fmr f0, f1
.L_8043B420:
/* 8043B420 00438360  88 7D 00 65 */	lbz r3, 0x65(r29)
/* 8043B424 00438364  3C 00 43 30 */	lis r0, 0x4330
/* 8043B428 00438368  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043B42C 0043836C  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B430 00438370  90 61 00 24 */	stw r3, 0x24(r1)
/* 8043B434 00438374  C0 5D 00 80 */	lfs f2, 0x80(r29)
/* 8043B438 00438378  C8 61 00 20 */	lfd f3, 0x20(r1)
/* 8043B43C 0043837C  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B440 00438380  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B444 00438384  EC C3 00 B2 */	fmuls f6, f3, f2
/* 8043B448 00438388  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043B44C 0043838C  40 81 00 08 */	ble .L_8043B454
/* 8043B450 00438390  FC C0 08 90 */	fmr f6, f1
.L_8043B454:
/* 8043B454 00438394  88 7D 00 66 */	lbz r3, 0x66(r29)
/* 8043B458 00438398  3C 00 43 30 */	lis r0, 0x4330
/* 8043B45C 0043839C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8043B460 004383A0  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B464 004383A4  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8043B468 004383A8  C0 5D 00 84 */	lfs f2, 0x84(r29)
/* 8043B46C 004383AC  C8 61 00 28 */	lfd f3, 0x28(r1)
/* 8043B470 004383B0  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B474 004383B4  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B478 004383B8  EC A3 00 B2 */	fmuls f5, f3, f2
/* 8043B47C 004383BC  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043B480 004383C0  40 81 00 08 */	ble .L_8043B488
/* 8043B484 004383C4  FC A0 08 90 */	fmr f5, f1
.L_8043B488:
/* 8043B488 004383C8  88 7D 00 67 */	lbz r3, 0x67(r29)
/* 8043B48C 004383CC  3C 00 43 30 */	lis r0, 0x4330
/* 8043B490 004383D0  90 01 00 30 */	stw r0, 0x30(r1)
/* 8043B494 004383D4  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B498 004383D8  90 61 00 34 */	stw r3, 0x34(r1)
/* 8043B49C 004383DC  C0 5D 00 88 */	lfs f2, 0x88(r29)
/* 8043B4A0 004383E0  C8 61 00 30 */	lfd f3, 0x30(r1)
/* 8043B4A4 004383E4  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B4A8 004383E8  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B4AC 004383EC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8043B4B0 004383F0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043B4B4 004383F4  40 81 00 08 */	ble .L_8043B4BC
/* 8043B4B8 004383F8  FC 40 08 90 */	fmr f2, f1
.L_8043B4BC:
/* 8043B4BC 004383FC  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B4C0 00438400  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043B4C4 00438404  4C 41 13 82 */	cror 2, 1, 2
/* 8043B4C8 00438408  40 82 00 10 */	bne .L_8043B4D8
/* 8043B4CC 0043840C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B4D0 00438410  EC 21 10 2A */	fadds f1, f1, f2
/* 8043B4D4 00438414  48 00 00 0C */	b .L_8043B4E0
.L_8043B4D8:
/* 8043B4D8 00438418  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B4DC 0043841C  EC 22 08 28 */	fsubs f1, f2, f1
.L_8043B4E0:
/* 8043B4E0 00438420  FC 40 08 1E */	fctiwz f2, f1
/* 8043B4E4 00438424  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B4E8 00438428  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043B4EC 0043842C  D8 41 00 38 */	stfd f2, 0x38(r1)
/* 8043B4F0 00438430  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8043B4F4 00438434  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8043B4F8 00438438  4C 41 13 82 */	cror 2, 1, 2
/* 8043B4FC 0043843C  40 82 00 10 */	bne .L_8043B50C
/* 8043B500 00438440  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B504 00438444  EC 21 28 2A */	fadds f1, f1, f5
/* 8043B508 00438448  48 00 00 0C */	b .L_8043B514
.L_8043B50C:
/* 8043B50C 0043844C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B510 00438450  EC 25 08 28 */	fsubs f1, f5, f1
.L_8043B514:
/* 8043B514 00438454  FC 40 08 1E */	fctiwz f2, f1
/* 8043B518 00438458  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B51C 0043845C  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043B520 00438460  D8 41 00 40 */	stfd f2, 0x40(r1)
/* 8043B524 00438464  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8043B528 00438468  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8043B52C 0043846C  4C 41 13 82 */	cror 2, 1, 2
/* 8043B530 00438470  40 82 00 10 */	bne .L_8043B540
/* 8043B534 00438474  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B538 00438478  EC 21 30 2A */	fadds f1, f1, f6
/* 8043B53C 0043847C  48 00 00 0C */	b .L_8043B548
.L_8043B540:
/* 8043B540 00438480  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B544 00438484  EC 26 08 28 */	fsubs f1, f6, f1
.L_8043B548:
/* 8043B548 00438488  FC 40 08 1E */	fctiwz f2, f1
/* 8043B54C 0043848C  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B550 00438490  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043B554 00438494  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 8043B558 00438498  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8043B55C 0043849C  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8043B560 004384A0  4C 41 13 82 */	cror 2, 1, 2
/* 8043B564 004384A4  40 82 00 10 */	bne .L_8043B574
/* 8043B568 004384A8  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B56C 004384AC  EC 01 00 2A */	fadds f0, f1, f0
/* 8043B570 004384B0  48 00 00 0C */	b .L_8043B57C
.L_8043B574:
/* 8043B574 004384B4  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B578 004384B8  EC 00 08 28 */	fsubs f0, f0, f1
.L_8043B57C:
/* 8043B57C 004384BC  88 7D 00 68 */	lbz r3, 0x68(r29)
/* 8043B580 004384C0  FC 60 00 1E */	fctiwz f3, f0
/* 8043B584 004384C4  3C 00 43 30 */	lis r0, 0x4330
/* 8043B588 004384C8  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043B58C 004384CC  90 01 00 58 */	stw r0, 0x58(r1)
/* 8043B590 004384D0  C0 1D 00 7C */	lfs f0, 0x7c(r29)
/* 8043B594 004384D4  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8043B598 004384D8  C8 21 00 58 */	lfd f1, 0x58(r1)
/* 8043B59C 004384DC  D8 61 00 50 */	stfd f3, 0x50(r1)
/* 8043B5A0 004384E0  EC 41 10 28 */	fsubs f2, f1, f2
/* 8043B5A4 004384E4  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B5A8 004384E8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8043B5AC 004384EC  98 81 00 15 */	stb r4, 0x15(r1)
/* 8043B5B0 004384F0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8043B5B4 004384F4  98 01 00 14 */	stb r0, 0x14(r1)
/* 8043B5B8 004384F8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043B5BC 004384FC  98 A1 00 16 */	stb r5, 0x16(r1)
/* 8043B5C0 00438500  98 C1 00 17 */	stb r6, 0x17(r1)
/* 8043B5C4 00438504  40 81 00 08 */	ble .L_8043B5CC
/* 8043B5C8 00438508  FC 00 08 90 */	fmr f0, f1
.L_8043B5CC:
/* 8043B5CC 0043850C  88 7D 00 69 */	lbz r3, 0x69(r29)
/* 8043B5D0 00438510  3C 00 43 30 */	lis r0, 0x4330
/* 8043B5D4 00438514  90 01 00 60 */	stw r0, 0x60(r1)
/* 8043B5D8 00438518  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B5DC 0043851C  90 61 00 64 */	stw r3, 0x64(r1)
/* 8043B5E0 00438520  C0 5D 00 80 */	lfs f2, 0x80(r29)
/* 8043B5E4 00438524  C8 61 00 60 */	lfd f3, 0x60(r1)
/* 8043B5E8 00438528  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B5EC 0043852C  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B5F0 00438530  EC C3 00 B2 */	fmuls f6, f3, f2
/* 8043B5F4 00438534  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043B5F8 00438538  40 81 00 08 */	ble .L_8043B600
/* 8043B5FC 0043853C  FC C0 08 90 */	fmr f6, f1
.L_8043B600:
/* 8043B600 00438540  88 7D 00 6A */	lbz r3, 0x6a(r29)
/* 8043B604 00438544  3C 00 43 30 */	lis r0, 0x4330
/* 8043B608 00438548  90 01 00 68 */	stw r0, 0x68(r1)
/* 8043B60C 0043854C  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B610 00438550  90 61 00 6C */	stw r3, 0x6c(r1)
/* 8043B614 00438554  C0 5D 00 84 */	lfs f2, 0x84(r29)
/* 8043B618 00438558  C8 61 00 68 */	lfd f3, 0x68(r1)
/* 8043B61C 0043855C  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B620 00438560  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B624 00438564  EC A3 00 B2 */	fmuls f5, f3, f2
/* 8043B628 00438568  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043B62C 0043856C  40 81 00 08 */	ble .L_8043B634
/* 8043B630 00438570  FC A0 08 90 */	fmr f5, f1
.L_8043B634:
/* 8043B634 00438574  88 7D 00 6B */	lbz r3, 0x6b(r29)
/* 8043B638 00438578  3C 00 43 30 */	lis r0, 0x4330
/* 8043B63C 0043857C  90 01 00 70 */	stw r0, 0x70(r1)
/* 8043B640 00438580  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B644 00438584  90 61 00 74 */	stw r3, 0x74(r1)
/* 8043B648 00438588  C0 5D 00 88 */	lfs f2, 0x88(r29)
/* 8043B64C 0043858C  C8 61 00 70 */	lfd f3, 0x70(r1)
/* 8043B650 00438590  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B654 00438594  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B658 00438598  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8043B65C 0043859C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043B660 004385A0  40 81 00 08 */	ble .L_8043B668
/* 8043B664 004385A4  FC 40 08 90 */	fmr f2, f1
.L_8043B668:
/* 8043B668 004385A8  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B66C 004385AC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043B670 004385B0  4C 41 13 82 */	cror 2, 1, 2
/* 8043B674 004385B4  40 82 00 10 */	bne .L_8043B684
/* 8043B678 004385B8  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B67C 004385BC  EC 21 10 2A */	fadds f1, f1, f2
/* 8043B680 004385C0  48 00 00 0C */	b .L_8043B68C
.L_8043B684:
/* 8043B684 004385C4  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B688 004385C8  EC 22 08 28 */	fsubs f1, f2, f1
.L_8043B68C:
/* 8043B68C 004385CC  FC 40 08 1E */	fctiwz f2, f1
/* 8043B690 004385D0  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B694 004385D4  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043B698 004385D8  D8 41 00 78 */	stfd f2, 0x78(r1)
/* 8043B69C 004385DC  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8043B6A0 004385E0  54 07 06 3E */	clrlwi r7, r0, 0x18
/* 8043B6A4 004385E4  4C 41 13 82 */	cror 2, 1, 2
/* 8043B6A8 004385E8  40 82 00 10 */	bne .L_8043B6B8
/* 8043B6AC 004385EC  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B6B0 004385F0  EC 21 28 2A */	fadds f1, f1, f5
/* 8043B6B4 004385F4  48 00 00 0C */	b .L_8043B6C0
.L_8043B6B8:
/* 8043B6B8 004385F8  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B6BC 004385FC  EC 25 08 28 */	fsubs f1, f5, f1
.L_8043B6C0:
/* 8043B6C0 00438600  FC 40 08 1E */	fctiwz f2, f1
/* 8043B6C4 00438604  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B6C8 00438608  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043B6CC 0043860C  D8 41 00 80 */	stfd f2, 0x80(r1)
/* 8043B6D0 00438610  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8043B6D4 00438614  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8043B6D8 00438618  4C 41 13 82 */	cror 2, 1, 2
/* 8043B6DC 0043861C  40 82 00 10 */	bne .L_8043B6EC
/* 8043B6E0 00438620  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B6E4 00438624  EC 21 30 2A */	fadds f1, f1, f6
/* 8043B6E8 00438628  48 00 00 0C */	b .L_8043B6F4
.L_8043B6EC:
/* 8043B6EC 0043862C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B6F0 00438630  EC 26 08 28 */	fsubs f1, f6, f1
.L_8043B6F4:
/* 8043B6F4 00438634  FC 40 08 1E */	fctiwz f2, f1
/* 8043B6F8 00438638  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B6FC 0043863C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043B700 00438640  D8 41 00 88 */	stfd f2, 0x88(r1)
/* 8043B704 00438644  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 8043B708 00438648  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8043B70C 0043864C  4C 41 13 82 */	cror 2, 1, 2
/* 8043B710 00438650  40 82 00 10 */	bne .L_8043B720
/* 8043B714 00438654  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B718 00438658  EC 01 00 2A */	fadds f0, f1, f0
/* 8043B71C 0043865C  48 00 00 0C */	b .L_8043B728
.L_8043B720:
/* 8043B720 00438660  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B724 00438664  EC 00 08 28 */	fsubs f0, f0, f1
.L_8043B728:
/* 8043B728 00438668  FC 00 00 1E */	fctiwz f0, f0
/* 8043B72C 0043866C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043B730 00438670  98 61 00 11 */	stb r3, 0x11(r1)
/* 8043B734 00438674  38 81 00 0C */	addi r4, r1, 0xc
/* 8043B738 00438678  38 A1 00 08 */	addi r5, r1, 8
/* 8043B73C 0043867C  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 8043B740 00438680  80 61 00 94 */	lwz r3, 0x94(r1)
/* 8043B744 00438684  98 C1 00 12 */	stb r6, 0x12(r1)
/* 8043B748 00438688  98 61 00 10 */	stb r3, 0x10(r1)
/* 8043B74C 0043868C  98 E1 00 13 */	stb r7, 0x13(r1)
/* 8043B750 00438690  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8043B754 00438694  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043B758 00438698  90 61 00 08 */	stw r3, 8(r1)
/* 8043B75C 0043869C  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8043B760 004386A0  4B BF 1A B1 */	bl setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
/* 8043B764 004386A4  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8043B768 004386A8  FC 20 E0 90 */	fmr f1, f28
/* 8043B76C 004386AC  FC 40 E8 90 */	fmr f2, f29
/* 8043B770 004386B0  7F C4 F3 78 */	mr r4, r30
/* 8043B774 004386B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8043B778 004386B8  FC 60 F0 90 */	fmr f3, f30
/* 8043B77C 004386BC  FC 80 F8 90 */	fmr f4, f31
/* 8043B780 004386C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8043B784 004386C4  7F E5 FB 78 */	mr r5, r31
/* 8043B788 004386C8  7D 89 03 A6 */	mtctr r12
/* 8043B78C 004386CC  4E 80 04 21 */	bctrl 
/* 8043B790 004386D0  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8043B794 004386D4  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8043B798 004386D8  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 8043B79C 004386DC  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 8043B7A0 004386E0  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 8043B7A4 004386E4  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 8043B7A8 004386E8  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 8043B7AC 004386EC  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 8043B7B0 004386F0  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 8043B7B4 004386F4  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 8043B7B8 004386F8  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8043B7BC 004386FC  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 8043B7C0 00438700  7C 08 03 A6 */	mtlr r0
/* 8043B7C4 00438704  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8043B7C8 00438708  4E 80 00 20 */	blr 
.endfn doDrawLetter__Q25P2JME19TRenderingProcessorFffffib

.fn doDrawRuby__Q25P2JME19TRenderingProcessorFffffib, global
/* 8043B7CC 0043870C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8043B7D0 00438710  7C 08 02 A6 */	mflr r0
/* 8043B7D4 00438714  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8043B7D8 00438718  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8043B7DC 0043871C  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8043B7E0 00438720  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8043B7E4 00438724  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 8043B7E8 00438728  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8043B7EC 0043872C  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 8043B7F0 00438730  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 8043B7F4 00438734  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 8043B7F8 00438738  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8043B7FC 0043873C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8043B800 00438740  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8043B804 00438744  7C 7D 1B 78 */	mr r29, r3
/* 8043B808 00438748  3C 00 43 30 */	lis r0, 0x4330
/* 8043B80C 0043874C  C0 A2 25 84 */	lfs f5, lbl_805208E4@sda21(r2)
/* 8043B810 00438750  38 60 FF FF */	li r3, -1
/* 8043B814 00438754  C0 1D 00 78 */	lfs f0, 0x78(r29)
/* 8043B818 00438758  FF 80 08 90 */	fmr f28, f1
/* 8043B81C 0043875C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8043B820 00438760  FF A0 10 90 */	fmr f29, f2
/* 8043B824 00438764  EC 05 00 32 */	fmuls f0, f5, f0
/* 8043B828 00438768  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043B82C 0043876C  FF C0 18 90 */	fmr f30, f3
/* 8043B830 00438770  FF E0 20 90 */	fmr f31, f4
/* 8043B834 00438774  90 61 00 0C */	stw r3, 0xc(r1)
/* 8043B838 00438778  FC 00 00 1E */	fctiwz f0, f0
/* 8043B83C 0043877C  7C 9E 23 78 */	mr r30, r4
/* 8043B840 00438780  7C BF 2B 78 */	mr r31, r5
/* 8043B844 00438784  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8043B848 00438788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043B84C 0043878C  98 1D 00 6F */	stb r0, 0x6f(r29)
/* 8043B850 00438790  88 1D 00 6C */	lbz r0, 0x6c(r29)
/* 8043B854 00438794  C0 1D 00 7C */	lfs f0, 0x7c(r29)
/* 8043B858 00438798  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043B85C 0043879C  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8043B860 004387A0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043B864 004387A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8043B868 004387A8  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 8043B86C 004387AC  40 81 00 08 */	ble .L_8043B874
/* 8043B870 004387B0  FC 00 28 90 */	fmr f0, f5
.L_8043B874:
/* 8043B874 004387B4  88 7D 00 6D */	lbz r3, 0x6d(r29)
/* 8043B878 004387B8  3C 00 43 30 */	lis r0, 0x4330
/* 8043B87C 004387BC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043B880 004387C0  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B884 004387C4  90 61 00 24 */	stw r3, 0x24(r1)
/* 8043B888 004387C8  C0 5D 00 80 */	lfs f2, 0x80(r29)
/* 8043B88C 004387CC  C8 61 00 20 */	lfd f3, 0x20(r1)
/* 8043B890 004387D0  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B894 004387D4  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B898 004387D8  EC C3 00 B2 */	fmuls f6, f3, f2
/* 8043B89C 004387DC  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043B8A0 004387E0  40 81 00 08 */	ble .L_8043B8A8
/* 8043B8A4 004387E4  FC C0 08 90 */	fmr f6, f1
.L_8043B8A8:
/* 8043B8A8 004387E8  88 7D 00 6E */	lbz r3, 0x6e(r29)
/* 8043B8AC 004387EC  3C 00 43 30 */	lis r0, 0x4330
/* 8043B8B0 004387F0  90 01 00 28 */	stw r0, 0x28(r1)
/* 8043B8B4 004387F4  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B8B8 004387F8  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8043B8BC 004387FC  C0 5D 00 84 */	lfs f2, 0x84(r29)
/* 8043B8C0 00438800  C8 61 00 28 */	lfd f3, 0x28(r1)
/* 8043B8C4 00438804  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B8C8 00438808  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B8CC 0043880C  EC A3 00 B2 */	fmuls f5, f3, f2
/* 8043B8D0 00438810  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043B8D4 00438814  40 81 00 08 */	ble .L_8043B8DC
/* 8043B8D8 00438818  FC A0 08 90 */	fmr f5, f1
.L_8043B8DC:
/* 8043B8DC 0043881C  88 7D 00 6F */	lbz r3, 0x6f(r29)
/* 8043B8E0 00438820  3C 00 43 30 */	lis r0, 0x4330
/* 8043B8E4 00438824  90 01 00 30 */	stw r0, 0x30(r1)
/* 8043B8E8 00438828  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043B8EC 0043882C  90 61 00 34 */	stw r3, 0x34(r1)
/* 8043B8F0 00438830  C0 5D 00 88 */	lfs f2, 0x88(r29)
/* 8043B8F4 00438834  C8 61 00 30 */	lfd f3, 0x30(r1)
/* 8043B8F8 00438838  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043B8FC 0043883C  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043B900 00438840  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8043B904 00438844  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043B908 00438848  40 81 00 08 */	ble .L_8043B910
/* 8043B90C 0043884C  FC 40 08 90 */	fmr f2, f1
.L_8043B910:
/* 8043B910 00438850  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B914 00438854  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043B918 00438858  4C 41 13 82 */	cror 2, 1, 2
/* 8043B91C 0043885C  40 82 00 10 */	bne .L_8043B92C
/* 8043B920 00438860  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B924 00438864  EC 21 10 2A */	fadds f1, f1, f2
/* 8043B928 00438868  48 00 00 0C */	b .L_8043B934
.L_8043B92C:
/* 8043B92C 0043886C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B930 00438870  EC 22 08 28 */	fsubs f1, f2, f1
.L_8043B934:
/* 8043B934 00438874  FC 40 08 1E */	fctiwz f2, f1
/* 8043B938 00438878  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B93C 0043887C  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043B940 00438880  D8 41 00 38 */	stfd f2, 0x38(r1)
/* 8043B944 00438884  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8043B948 00438888  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8043B94C 0043888C  4C 41 13 82 */	cror 2, 1, 2
/* 8043B950 00438890  40 82 00 10 */	bne .L_8043B960
/* 8043B954 00438894  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B958 00438898  EC 21 28 2A */	fadds f1, f1, f5
/* 8043B95C 0043889C  48 00 00 0C */	b .L_8043B968
.L_8043B960:
/* 8043B960 004388A0  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B964 004388A4  EC 25 08 28 */	fsubs f1, f5, f1
.L_8043B968:
/* 8043B968 004388A8  FC 40 08 1E */	fctiwz f2, f1
/* 8043B96C 004388AC  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B970 004388B0  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043B974 004388B4  D8 41 00 40 */	stfd f2, 0x40(r1)
/* 8043B978 004388B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8043B97C 004388BC  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8043B980 004388C0  4C 41 13 82 */	cror 2, 1, 2
/* 8043B984 004388C4  40 82 00 10 */	bne .L_8043B994
/* 8043B988 004388C8  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B98C 004388CC  EC 21 30 2A */	fadds f1, f1, f6
/* 8043B990 004388D0  48 00 00 0C */	b .L_8043B99C
.L_8043B994:
/* 8043B994 004388D4  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B998 004388D8  EC 26 08 28 */	fsubs f1, f6, f1
.L_8043B99C:
/* 8043B99C 004388DC  FC 40 08 1E */	fctiwz f2, f1
/* 8043B9A0 004388E0  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043B9A4 004388E4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043B9A8 004388E8  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 8043B9AC 004388EC  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8043B9B0 004388F0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8043B9B4 004388F4  4C 41 13 82 */	cror 2, 1, 2
/* 8043B9B8 004388F8  40 82 00 10 */	bne .L_8043B9C8
/* 8043B9BC 004388FC  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B9C0 00438900  EC 01 00 2A */	fadds f0, f1, f0
/* 8043B9C4 00438904  48 00 00 0C */	b .L_8043B9D0
.L_8043B9C8:
/* 8043B9C8 00438908  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043B9CC 0043890C  EC 00 08 28 */	fsubs f0, f0, f1
.L_8043B9D0:
/* 8043B9D0 00438910  FC 00 00 1E */	fctiwz f0, f0
/* 8043B9D4 00438914  98 01 00 0D */	stb r0, 0xd(r1)
/* 8043B9D8 00438918  38 81 00 08 */	addi r4, r1, 8
/* 8043B9DC 0043891C  98 61 00 0E */	stb r3, 0xe(r1)
/* 8043B9E0 00438920  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8043B9E4 00438924  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8043B9E8 00438928  98 A1 00 0F */	stb r5, 0xf(r1)
/* 8043B9EC 0043892C  98 01 00 0C */	stb r0, 0xc(r1)
/* 8043B9F0 00438930  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8043B9F4 00438934  90 01 00 08 */	stw r0, 8(r1)
/* 8043B9F8 00438938  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8043B9FC 0043893C  4B BF 17 C1 */	bl setCharColor__7JUTFontFQ28JUtility6TColor
/* 8043BA00 00438940  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8043BA04 00438944  FC 20 E0 90 */	fmr f1, f28
/* 8043BA08 00438948  FC 40 E8 90 */	fmr f2, f29
/* 8043BA0C 0043894C  7F C4 F3 78 */	mr r4, r30
/* 8043BA10 00438950  81 83 00 00 */	lwz r12, 0(r3)
/* 8043BA14 00438954  FC 60 F0 90 */	fmr f3, f30
/* 8043BA18 00438958  FC 80 F8 90 */	fmr f4, f31
/* 8043BA1C 0043895C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8043BA20 00438960  7F E5 FB 78 */	mr r5, r31
/* 8043BA24 00438964  7D 89 03 A6 */	mtctr r12
/* 8043BA28 00438968  4E 80 04 21 */	bctrl 
/* 8043BA2C 0043896C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8043BA30 00438970  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8043BA34 00438974  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8043BA38 00438978  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8043BA3C 0043897C  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 8043BA40 00438980  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 8043BA44 00438984  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 8043BA48 00438988  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 8043BA4C 0043898C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8043BA50 00438990  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8043BA54 00438994  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8043BA58 00438998  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8043BA5C 0043899C  7C 08 03 A6 */	mtlr r0
/* 8043BA60 004389A0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8043BA64 004389A4  4E 80 00 20 */	blr 
.endfn doDrawRuby__Q25P2JME19TRenderingProcessorFffffib

.fn doDrawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff, global
/* 8043BA68 004389A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8043BA6C 004389AC  7C 08 02 A6 */	mflr r0
/* 8043BA70 004389B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8043BA74 004389B4  39 61 00 30 */	addi r11, r1, 0x30
/* 8043BA78 004389B8  4B C8 61 69 */	bl _savefpr_28
/* 8043BA7C 004389BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043BA80 004389C0  93 C1 00 08 */	stw r30, 8(r1)
/* 8043BA84 004389C4  FF 80 08 90 */	fmr f28, f1
/* 8043BA88 004389C8  7C 7E 1B 78 */	mr r30, r3
/* 8043BA8C 004389CC  FF A0 10 90 */	fmr f29, f2
/* 8043BA90 004389D0  7C 9F 23 78 */	mr r31, r4
/* 8043BA94 004389D4  FF C0 18 90 */	fmr f30, f3
/* 8043BA98 004389D8  FF E0 20 90 */	fmr f31, f4
/* 8043BA9C 004389DC  48 00 00 41 */	bl setImageGX__Q25P2JME19TRenderingProcessorFv
/* 8043BAA0 004389E0  FC 20 E0 90 */	fmr f1, f28
/* 8043BAA4 004389E4  7F C3 F3 78 */	mr r3, r30
/* 8043BAA8 004389E8  FC 40 E8 90 */	fmr f2, f29
/* 8043BAAC 004389EC  7F E4 FB 78 */	mr r4, r31
/* 8043BAB0 004389F0  FC 60 F0 90 */	fmr f3, f30
/* 8043BAB4 004389F4  FC 80 F8 90 */	fmr f4, f31
/* 8043BAB8 004389F8  48 00 03 59 */	bl drawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff
/* 8043BABC 004389FC  39 61 00 30 */	addi r11, r1, 0x30
/* 8043BAC0 00438A00  4B C8 61 6D */	bl _restfpr_28
/* 8043BAC4 00438A04  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8043BAC8 00438A08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043BACC 00438A0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043BAD0 00438A10  7C 08 03 A6 */	mtlr r0
/* 8043BAD4 00438A14  38 21 00 30 */	addi r1, r1, 0x30
/* 8043BAD8 00438A18  4E 80 00 20 */	blr 
.endfn doDrawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff

.fn setImageGX__Q25P2JME19TRenderingProcessorFv, global
/* 8043BADC 00438A1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8043BAE0 00438A20  7C 08 02 A6 */	mflr r0
/* 8043BAE4 00438A24  90 01 00 24 */	stw r0, 0x24(r1)
/* 8043BAE8 00438A28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8043BAEC 00438A2C  7C 7F 1B 78 */	mr r31, r3
/* 8043BAF0 00438A30  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 8043BAF4 00438A34  28 00 00 00 */	cmplwi r0, 0
/* 8043BAF8 00438A38  40 82 01 28 */	bne .L_8043BC20
/* 8043BAFC 00438A3C  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 8043BB00 00438A40  3C 03 00 01 */	addis r0, r3, 1
/* 8043BB04 00438A44  28 00 FF FF */	cmplwi r0, 0xffff
/* 8043BB08 00438A48  40 82 01 18 */	bne .L_8043BC20
/* 8043BB0C 00438A4C  38 60 00 01 */	li r3, 1
/* 8043BB10 00438A50  4B CA B3 55 */	bl GXSetNumChans
/* 8043BB14 00438A54  38 60 00 04 */	li r3, 4
/* 8043BB18 00438A58  38 80 00 00 */	li r4, 0
/* 8043BB1C 00438A5C  38 A0 00 01 */	li r5, 1
/* 8043BB20 00438A60  38 C0 00 01 */	li r6, 1
/* 8043BB24 00438A64  38 E0 00 01 */	li r7, 1
/* 8043BB28 00438A68  39 00 00 02 */	li r8, 2
/* 8043BB2C 00438A6C  39 20 00 02 */	li r9, 2
/* 8043BB30 00438A70  4B CA B3 71 */	bl GXSetChanCtrl
/* 8043BB34 00438A74  4B CA 8B 9D */	bl GXClearVtxDesc
/* 8043BB38 00438A78  38 60 00 01 */	li r3, 1
/* 8043BB3C 00438A7C  4B CA D0 7D */	bl GXSetNumTevStages
/* 8043BB40 00438A80  38 60 00 00 */	li r3, 0
/* 8043BB44 00438A84  38 80 00 00 */	li r4, 0
/* 8043BB48 00438A88  38 A0 00 00 */	li r5, 0
/* 8043BB4C 00438A8C  38 C0 00 04 */	li r6, 4
/* 8043BB50 00438A90  4B CA CE CD */	bl GXSetTevOrder
/* 8043BB54 00438A94  38 60 00 00 */	li r3, 0
/* 8043BB58 00438A98  38 80 00 00 */	li r4, 0
/* 8043BB5C 00438A9C  4B CA C9 21 */	bl GXSetTevOp
/* 8043BB60 00438AA0  38 60 00 01 */	li r3, 1
/* 8043BB64 00438AA4  4B CA 94 39 */	bl GXSetNumTexGens
/* 8043BB68 00438AA8  38 60 00 00 */	li r3, 0
/* 8043BB6C 00438AAC  38 80 00 01 */	li r4, 1
/* 8043BB70 00438AB0  38 A0 00 04 */	li r5, 4
/* 8043BB74 00438AB4  38 C0 00 3C */	li r6, 0x3c
/* 8043BB78 00438AB8  38 E0 00 00 */	li r7, 0
/* 8043BB7C 00438ABC  39 00 00 7D */	li r8, 0x7d
/* 8043BB80 00438AC0  4B CA 91 9D */	bl GXSetTexCoordGen2
/* 8043BB84 00438AC4  38 60 00 09 */	li r3, 9
/* 8043BB88 00438AC8  38 80 00 01 */	li r4, 1
/* 8043BB8C 00438ACC  4B CA 86 F9 */	bl GXSetVtxDesc
/* 8043BB90 00438AD0  38 60 00 0B */	li r3, 0xb
/* 8043BB94 00438AD4  38 80 00 01 */	li r4, 1
/* 8043BB98 00438AD8  4B CA 86 ED */	bl GXSetVtxDesc
/* 8043BB9C 00438ADC  38 60 00 0D */	li r3, 0xd
/* 8043BBA0 00438AE0  38 80 00 01 */	li r4, 1
/* 8043BBA4 00438AE4  4B CA 86 E1 */	bl GXSetVtxDesc
/* 8043BBA8 00438AE8  38 60 00 00 */	li r3, 0
/* 8043BBAC 00438AEC  38 80 00 09 */	li r4, 9
/* 8043BBB0 00438AF0  38 A0 00 01 */	li r5, 1
/* 8043BBB4 00438AF4  38 C0 00 04 */	li r6, 4
/* 8043BBB8 00438AF8  38 E0 00 00 */	li r7, 0
/* 8043BBBC 00438AFC  4B CA 8B 4D */	bl GXSetVtxAttrFmt
/* 8043BBC0 00438B00  38 60 00 00 */	li r3, 0
/* 8043BBC4 00438B04  38 80 00 0B */	li r4, 0xb
/* 8043BBC8 00438B08  38 A0 00 01 */	li r5, 1
/* 8043BBCC 00438B0C  38 C0 00 05 */	li r6, 5
/* 8043BBD0 00438B10  38 E0 00 00 */	li r7, 0
/* 8043BBD4 00438B14  4B CA 8B 35 */	bl GXSetVtxAttrFmt
/* 8043BBD8 00438B18  38 60 00 00 */	li r3, 0
/* 8043BBDC 00438B1C  38 80 00 0D */	li r4, 0xd
/* 8043BBE0 00438B20  38 A0 00 01 */	li r5, 1
/* 8043BBE4 00438B24  38 C0 00 01 */	li r6, 1
/* 8043BBE8 00438B28  38 E0 00 04 */	li r7, 4
/* 8043BBEC 00438B2C  4B CA 8B 1D */	bl GXSetVtxAttrFmt
/* 8043BBF0 00438B30  38 60 00 02 */	li r3, 2
/* 8043BBF4 00438B34  4B CA 9F B5 */	bl GXSetCullMode
/* 8043BBF8 00438B38  38 60 00 00 */	li r3, 0
/* 8043BBFC 00438B3C  38 80 00 00 */	li r4, 0
/* 8043BC00 00438B40  38 A0 00 00 */	li r5, 0
/* 8043BC04 00438B44  4B CA D5 81 */	bl GXSetZMode
/* 8043BC08 00438B48  38 60 00 01 */	li r3, 1
/* 8043BC0C 00438B4C  38 80 00 04 */	li r4, 4
/* 8043BC10 00438B50  38 A0 00 05 */	li r5, 5
/* 8043BC14 00438B54  38 C0 00 00 */	li r6, 0
/* 8043BC18 00438B58  4B CA D4 C1 */	bl GXSetBlendMode
/* 8043BC1C 00438B5C  48 00 01 E0 */	b .L_8043BDFC
.L_8043BC20:
/* 8043BC20 00438B60  38 60 00 01 */	li r3, 1
/* 8043BC24 00438B64  4B CA B2 41 */	bl GXSetNumChans
/* 8043BC28 00438B68  38 60 00 02 */	li r3, 2
/* 8043BC2C 00438B6C  4B CA CF 8D */	bl GXSetNumTevStages
/* 8043BC30 00438B70  38 60 00 01 */	li r3, 1
/* 8043BC34 00438B74  4B CA 93 69 */	bl GXSetNumTexGens
/* 8043BC38 00438B78  38 60 00 00 */	li r3, 0
/* 8043BC3C 00438B7C  38 80 00 00 */	li r4, 0
/* 8043BC40 00438B80  38 A0 00 00 */	li r5, 0
/* 8043BC44 00438B84  38 C0 00 FF */	li r6, 0xff
/* 8043BC48 00438B88  4B CA CD D5 */	bl GXSetTevOrder
/* 8043BC4C 00438B8C  38 60 00 04 */	li r3, 4
/* 8043BC50 00438B90  38 80 00 00 */	li r4, 0
/* 8043BC54 00438B94  38 A0 00 00 */	li r5, 0
/* 8043BC58 00438B98  38 C0 00 01 */	li r6, 1
/* 8043BC5C 00438B9C  38 E0 00 00 */	li r7, 0
/* 8043BC60 00438BA0  39 00 00 00 */	li r8, 0
/* 8043BC64 00438BA4  39 20 00 02 */	li r9, 2
/* 8043BC68 00438BA8  4B CA B2 39 */	bl GXSetChanCtrl
/* 8043BC6C 00438BAC  80 1F 00 5C */	lwz r0, 0x5c(r31)
/* 8043BC70 00438BB0  38 81 00 0C */	addi r4, r1, 0xc
/* 8043BC74 00438BB4  38 60 00 01 */	li r3, 1
/* 8043BC78 00438BB8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8043BC7C 00438BBC  4B CA C9 E5 */	bl GXSetTevColor
/* 8043BC80 00438BC0  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 8043BC84 00438BC4  38 81 00 08 */	addi r4, r1, 8
/* 8043BC88 00438BC8  38 60 00 02 */	li r3, 2
/* 8043BC8C 00438BCC  90 01 00 08 */	stw r0, 8(r1)
/* 8043BC90 00438BD0  4B CA C9 D1 */	bl GXSetTevColor
/* 8043BC94 00438BD4  38 60 00 00 */	li r3, 0
/* 8043BC98 00438BD8  38 80 00 02 */	li r4, 2
/* 8043BC9C 00438BDC  38 A0 00 04 */	li r5, 4
/* 8043BCA0 00438BE0  38 C0 00 08 */	li r6, 8
/* 8043BCA4 00438BE4  38 E0 00 0F */	li r7, 0xf
/* 8043BCA8 00438BE8  4B CA C8 61 */	bl GXSetTevColorIn
/* 8043BCAC 00438BEC  38 60 00 00 */	li r3, 0
/* 8043BCB0 00438BF0  38 80 00 01 */	li r4, 1
/* 8043BCB4 00438BF4  38 A0 00 02 */	li r5, 2
/* 8043BCB8 00438BF8  38 C0 00 04 */	li r6, 4
/* 8043BCBC 00438BFC  38 E0 00 07 */	li r7, 7
/* 8043BCC0 00438C00  4B CA C8 8D */	bl GXSetTevAlphaIn
/* 8043BCC4 00438C04  38 60 00 00 */	li r3, 0
/* 8043BCC8 00438C08  38 80 00 00 */	li r4, 0
/* 8043BCCC 00438C0C  38 A0 00 00 */	li r5, 0
/* 8043BCD0 00438C10  38 C0 00 00 */	li r6, 0
/* 8043BCD4 00438C14  38 E0 00 01 */	li r7, 1
/* 8043BCD8 00438C18  39 00 00 00 */	li r8, 0
/* 8043BCDC 00438C1C  4B CA C8 B5 */	bl GXSetTevColorOp
/* 8043BCE0 00438C20  38 60 00 00 */	li r3, 0
/* 8043BCE4 00438C24  38 80 00 00 */	li r4, 0
/* 8043BCE8 00438C28  38 A0 00 00 */	li r5, 0
/* 8043BCEC 00438C2C  38 C0 00 00 */	li r6, 0
/* 8043BCF0 00438C30  38 E0 00 01 */	li r7, 1
/* 8043BCF4 00438C34  39 00 00 00 */	li r8, 0
/* 8043BCF8 00438C38  4B CA C9 01 */	bl GXSetTevAlphaOp
/* 8043BCFC 00438C3C  38 60 00 01 */	li r3, 1
/* 8043BD00 00438C40  38 80 00 FF */	li r4, 0xff
/* 8043BD04 00438C44  38 A0 00 FF */	li r5, 0xff
/* 8043BD08 00438C48  38 C0 00 04 */	li r6, 4
/* 8043BD0C 00438C4C  4B CA CD 11 */	bl GXSetTevOrder
/* 8043BD10 00438C50  38 60 00 01 */	li r3, 1
/* 8043BD14 00438C54  38 80 00 0F */	li r4, 0xf
/* 8043BD18 00438C58  38 A0 00 00 */	li r5, 0
/* 8043BD1C 00438C5C  38 C0 00 0A */	li r6, 0xa
/* 8043BD20 00438C60  38 E0 00 0F */	li r7, 0xf
/* 8043BD24 00438C64  4B CA C7 E5 */	bl GXSetTevColorIn
/* 8043BD28 00438C68  38 60 00 01 */	li r3, 1
/* 8043BD2C 00438C6C  38 80 00 07 */	li r4, 7
/* 8043BD30 00438C70  38 A0 00 00 */	li r5, 0
/* 8043BD34 00438C74  38 C0 00 05 */	li r6, 5
/* 8043BD38 00438C78  38 E0 00 07 */	li r7, 7
/* 8043BD3C 00438C7C  4B CA C8 11 */	bl GXSetTevAlphaIn
/* 8043BD40 00438C80  38 60 00 01 */	li r3, 1
/* 8043BD44 00438C84  38 80 00 00 */	li r4, 0
/* 8043BD48 00438C88  38 A0 00 00 */	li r5, 0
/* 8043BD4C 00438C8C  38 C0 00 00 */	li r6, 0
/* 8043BD50 00438C90  38 E0 00 01 */	li r7, 1
/* 8043BD54 00438C94  39 00 00 00 */	li r8, 0
/* 8043BD58 00438C98  4B CA C8 39 */	bl GXSetTevColorOp
/* 8043BD5C 00438C9C  38 60 00 01 */	li r3, 1
/* 8043BD60 00438CA0  38 80 00 00 */	li r4, 0
/* 8043BD64 00438CA4  38 A0 00 00 */	li r5, 0
/* 8043BD68 00438CA8  38 C0 00 00 */	li r6, 0
/* 8043BD6C 00438CAC  38 E0 00 01 */	li r7, 1
/* 8043BD70 00438CB0  39 00 00 00 */	li r8, 0
/* 8043BD74 00438CB4  4B CA C8 85 */	bl GXSetTevAlphaOp
/* 8043BD78 00438CB8  38 60 00 01 */	li r3, 1
/* 8043BD7C 00438CBC  38 80 00 04 */	li r4, 4
/* 8043BD80 00438CC0  38 A0 00 05 */	li r5, 5
/* 8043BD84 00438CC4  38 C0 00 0F */	li r6, 0xf
/* 8043BD88 00438CC8  4B CA D3 51 */	bl GXSetBlendMode
/* 8043BD8C 00438CCC  38 60 00 00 */	li r3, 0
/* 8043BD90 00438CD0  38 80 00 09 */	li r4, 9
/* 8043BD94 00438CD4  38 A0 00 01 */	li r5, 1
/* 8043BD98 00438CD8  38 C0 00 04 */	li r6, 4
/* 8043BD9C 00438CDC  38 E0 00 00 */	li r7, 0
/* 8043BDA0 00438CE0  4B CA 89 69 */	bl GXSetVtxAttrFmt
/* 8043BDA4 00438CE4  38 60 00 00 */	li r3, 0
/* 8043BDA8 00438CE8  38 80 00 0B */	li r4, 0xb
/* 8043BDAC 00438CEC  38 A0 00 01 */	li r5, 1
/* 8043BDB0 00438CF0  38 C0 00 05 */	li r6, 5
/* 8043BDB4 00438CF4  38 E0 00 00 */	li r7, 0
/* 8043BDB8 00438CF8  4B CA 89 51 */	bl GXSetVtxAttrFmt
/* 8043BDBC 00438CFC  38 60 00 00 */	li r3, 0
/* 8043BDC0 00438D00  38 80 00 0D */	li r4, 0xd
/* 8043BDC4 00438D04  38 A0 00 01 */	li r5, 1
/* 8043BDC8 00438D08  38 C0 00 01 */	li r6, 1
/* 8043BDCC 00438D0C  38 E0 00 04 */	li r7, 4
/* 8043BDD0 00438D10  4B CA 89 39 */	bl GXSetVtxAttrFmt
/* 8043BDD4 00438D14  4B CA 88 FD */	bl GXClearVtxDesc
/* 8043BDD8 00438D18  38 60 00 09 */	li r3, 9
/* 8043BDDC 00438D1C  38 80 00 01 */	li r4, 1
/* 8043BDE0 00438D20  4B CA 84 A5 */	bl GXSetVtxDesc
/* 8043BDE4 00438D24  38 60 00 0B */	li r3, 0xb
/* 8043BDE8 00438D28  38 80 00 01 */	li r4, 1
/* 8043BDEC 00438D2C  4B CA 84 99 */	bl GXSetVtxDesc
/* 8043BDF0 00438D30  38 60 00 0D */	li r3, 0xd
/* 8043BDF4 00438D34  38 80 00 01 */	li r4, 1
/* 8043BDF8 00438D38  4B CA 84 8D */	bl GXSetVtxDesc
.L_8043BDFC:
/* 8043BDFC 00438D3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8043BE00 00438D40  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8043BE04 00438D44  7C 08 03 A6 */	mtlr r0
/* 8043BE08 00438D48  38 21 00 20 */	addi r1, r1, 0x20
/* 8043BE0C 00438D4C  4E 80 00 20 */	blr 
.endfn setImageGX__Q25P2JME19TRenderingProcessorFv

.fn drawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff, global
/* 8043BE10 00438D50  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8043BE14 00438D54  7C 08 02 A6 */	mflr r0
/* 8043BE18 00438D58  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8043BE1C 00438D5C  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8043BE20 00438D60  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 8043BE24 00438D64  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 8043BE28 00438D68  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 8043BE2C 00438D6C  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 8043BE30 00438D70  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 8043BE34 00438D74  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 8043BE38 00438D78  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 8043BE3C 00438D7C  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8043BE40 00438D80  FF 80 08 90 */	fmr f28, f1
/* 8043BE44 00438D84  7C 7F 1B 78 */	mr r31, r3
/* 8043BE48 00438D88  FF A0 10 90 */	fmr f29, f2
/* 8043BE4C 00438D8C  7C 83 23 78 */	mr r3, r4
/* 8043BE50 00438D90  FF E0 18 90 */	fmr f31, f3
/* 8043BE54 00438D94  38 80 00 00 */	li r4, 0
/* 8043BE58 00438D98  FF C0 20 90 */	fmr f30, f4
/* 8043BE5C 00438D9C  4B BF 77 D5 */	bl load__10JUTTextureF11_GXTexMapID
/* 8043BE60 00438DA0  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8043BE64 00438DA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8043BE68 00438DA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8043BE6C 00438DAC  7D 89 03 A6 */	mtctr r12
/* 8043BE70 00438DB0  4E 80 04 21 */	bctrl 
/* 8043BE74 00438DB4  88 1F 00 70 */	lbz r0, 0x70(r31)
/* 8043BE78 00438DB8  3C 80 43 30 */	lis r4, 0x4330
/* 8043BE7C 00438DBC  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 8043BE80 00438DC0  38 60 FF FF */	li r3, -1
/* 8043BE84 00438DC4  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8043BE88 00438DC8  EF FC F8 2A */	fadds f31, f28, f31
/* 8043BE8C 00438DCC  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043BE90 00438DD0  90 81 00 10 */	stw r4, 0x10(r1)
/* 8043BE94 00438DD4  C8 62 25 78 */	lfd f3, lbl_805208D8@sda21(r2)
/* 8043BE98 00438DD8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043BE9C 00438DDC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043BEA0 00438DE0  EC 80 08 28 */	fsubs f4, f0, f1
/* 8043BEA4 00438DE4  C0 3F 00 E4 */	lfs f1, 0xe4(r31)
/* 8043BEA8 00438DE8  90 81 00 18 */	stw r4, 0x18(r1)
/* 8043BEAC 00438DEC  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 8043BEB0 00438DF0  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 8043BEB4 00438DF4  EF A1 E9 3A */	fmadds f29, f1, f4, f29
/* 8043BEB8 00438DF8  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043BEBC 00438DFC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8043BEC0 00438E00  90 61 00 0C */	stw r3, 0xc(r1)
/* 8043BEC4 00438E04  EF DD F0 28 */	fsubs f30, f29, f30
/* 8043BEC8 00438E08  90 61 00 08 */	stw r3, 8(r1)
/* 8043BECC 00438E0C  EC 02 00 32 */	fmuls f0, f2, f0
/* 8043BED0 00438E10  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043BED4 00438E14  40 81 00 08 */	ble .L_8043BEDC
/* 8043BED8 00438E18  FC 00 08 90 */	fmr f0, f1
.L_8043BEDC:
/* 8043BEDC 00438E1C  88 7F 00 71 */	lbz r3, 0x71(r31)
/* 8043BEE0 00438E20  3C 00 43 30 */	lis r0, 0x4330
/* 8043BEE4 00438E24  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043BEE8 00438E28  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043BEEC 00438E2C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8043BEF0 00438E30  C0 5F 00 80 */	lfs f2, 0x80(r31)
/* 8043BEF4 00438E34  C8 61 00 20 */	lfd f3, 0x20(r1)
/* 8043BEF8 00438E38  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043BEFC 00438E3C  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043BF00 00438E40  EC C3 00 B2 */	fmuls f6, f3, f2
/* 8043BF04 00438E44  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043BF08 00438E48  40 81 00 08 */	ble .L_8043BF10
/* 8043BF0C 00438E4C  FC C0 08 90 */	fmr f6, f1
.L_8043BF10:
/* 8043BF10 00438E50  88 7F 00 72 */	lbz r3, 0x72(r31)
/* 8043BF14 00438E54  3C 00 43 30 */	lis r0, 0x4330
/* 8043BF18 00438E58  90 01 00 28 */	stw r0, 0x28(r1)
/* 8043BF1C 00438E5C  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043BF20 00438E60  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8043BF24 00438E64  C0 5F 00 84 */	lfs f2, 0x84(r31)
/* 8043BF28 00438E68  C8 61 00 28 */	lfd f3, 0x28(r1)
/* 8043BF2C 00438E6C  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043BF30 00438E70  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043BF34 00438E74  EC A3 00 B2 */	fmuls f5, f3, f2
/* 8043BF38 00438E78  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043BF3C 00438E7C  40 81 00 08 */	ble .L_8043BF44
/* 8043BF40 00438E80  FC A0 08 90 */	fmr f5, f1
.L_8043BF44:
/* 8043BF44 00438E84  88 7F 00 73 */	lbz r3, 0x73(r31)
/* 8043BF48 00438E88  3C 00 43 30 */	lis r0, 0x4330
/* 8043BF4C 00438E8C  90 01 00 30 */	stw r0, 0x30(r1)
/* 8043BF50 00438E90  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043BF54 00438E94  90 61 00 34 */	stw r3, 0x34(r1)
/* 8043BF58 00438E98  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8043BF5C 00438E9C  C8 61 00 30 */	lfd f3, 0x30(r1)
/* 8043BF60 00438EA0  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043BF64 00438EA4  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043BF68 00438EA8  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8043BF6C 00438EAC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043BF70 00438EB0  40 81 00 08 */	ble .L_8043BF78
/* 8043BF74 00438EB4  FC 40 08 90 */	fmr f2, f1
.L_8043BF78:
/* 8043BF78 00438EB8  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043BF7C 00438EBC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043BF80 00438EC0  4C 41 13 82 */	cror 2, 1, 2
/* 8043BF84 00438EC4  40 82 00 10 */	bne .L_8043BF94
/* 8043BF88 00438EC8  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043BF8C 00438ECC  EC 21 10 2A */	fadds f1, f1, f2
/* 8043BF90 00438ED0  48 00 00 0C */	b .L_8043BF9C
.L_8043BF94:
/* 8043BF94 00438ED4  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043BF98 00438ED8  EC 22 08 28 */	fsubs f1, f2, f1
.L_8043BF9C:
/* 8043BF9C 00438EDC  FC 40 08 1E */	fctiwz f2, f1
/* 8043BFA0 00438EE0  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043BFA4 00438EE4  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043BFA8 00438EE8  D8 41 00 38 */	stfd f2, 0x38(r1)
/* 8043BFAC 00438EEC  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8043BFB0 00438EF0  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8043BFB4 00438EF4  4C 41 13 82 */	cror 2, 1, 2
/* 8043BFB8 00438EF8  40 82 00 10 */	bne .L_8043BFC8
/* 8043BFBC 00438EFC  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043BFC0 00438F00  EC 21 28 2A */	fadds f1, f1, f5
/* 8043BFC4 00438F04  48 00 00 0C */	b .L_8043BFD0
.L_8043BFC8:
/* 8043BFC8 00438F08  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043BFCC 00438F0C  EC 25 08 28 */	fsubs f1, f5, f1
.L_8043BFD0:
/* 8043BFD0 00438F10  FC 40 08 1E */	fctiwz f2, f1
/* 8043BFD4 00438F14  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043BFD8 00438F18  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043BFDC 00438F1C  D8 41 00 40 */	stfd f2, 0x40(r1)
/* 8043BFE0 00438F20  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8043BFE4 00438F24  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8043BFE8 00438F28  4C 41 13 82 */	cror 2, 1, 2
/* 8043BFEC 00438F2C  40 82 00 10 */	bne .L_8043BFFC
/* 8043BFF0 00438F30  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043BFF4 00438F34  EC 21 30 2A */	fadds f1, f1, f6
/* 8043BFF8 00438F38  48 00 00 0C */	b .L_8043C004
.L_8043BFFC:
/* 8043BFFC 00438F3C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C000 00438F40  EC 26 08 28 */	fsubs f1, f6, f1
.L_8043C004:
/* 8043C004 00438F44  FC 40 08 1E */	fctiwz f2, f1
/* 8043C008 00438F48  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043C00C 00438F4C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043C010 00438F50  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 8043C014 00438F54  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8043C018 00438F58  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8043C01C 00438F5C  4C 41 13 82 */	cror 2, 1, 2
/* 8043C020 00438F60  40 82 00 10 */	bne .L_8043C030
/* 8043C024 00438F64  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C028 00438F68  EC 01 00 2A */	fadds f0, f1, f0
/* 8043C02C 00438F6C  48 00 00 0C */	b .L_8043C038
.L_8043C030:
/* 8043C030 00438F70  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C034 00438F74  EC 00 08 28 */	fsubs f0, f0, f1
.L_8043C038:
/* 8043C038 00438F78  88 7F 00 74 */	lbz r3, 0x74(r31)
/* 8043C03C 00438F7C  FC 60 00 1E */	fctiwz f3, f0
/* 8043C040 00438F80  3C 00 43 30 */	lis r0, 0x4330
/* 8043C044 00438F84  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043C048 00438F88  90 01 00 58 */	stw r0, 0x58(r1)
/* 8043C04C 00438F8C  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 8043C050 00438F90  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8043C054 00438F94  C8 21 00 58 */	lfd f1, 0x58(r1)
/* 8043C058 00438F98  D8 61 00 50 */	stfd f3, 0x50(r1)
/* 8043C05C 00438F9C  EC 41 10 28 */	fsubs f2, f1, f2
/* 8043C060 00438FA0  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043C064 00438FA4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8043C068 00438FA8  98 81 00 0D */	stb r4, 0xd(r1)
/* 8043C06C 00438FAC  EC 02 00 32 */	fmuls f0, f2, f0
/* 8043C070 00438FB0  98 01 00 0C */	stb r0, 0xc(r1)
/* 8043C074 00438FB4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043C078 00438FB8  98 A1 00 0E */	stb r5, 0xe(r1)
/* 8043C07C 00438FBC  98 C1 00 0F */	stb r6, 0xf(r1)
/* 8043C080 00438FC0  40 81 00 08 */	ble .L_8043C088
/* 8043C084 00438FC4  FC 00 08 90 */	fmr f0, f1
.L_8043C088:
/* 8043C088 00438FC8  88 7F 00 75 */	lbz r3, 0x75(r31)
/* 8043C08C 00438FCC  3C 00 43 30 */	lis r0, 0x4330
/* 8043C090 00438FD0  90 01 00 60 */	stw r0, 0x60(r1)
/* 8043C094 00438FD4  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043C098 00438FD8  90 61 00 64 */	stw r3, 0x64(r1)
/* 8043C09C 00438FDC  C0 5F 00 80 */	lfs f2, 0x80(r31)
/* 8043C0A0 00438FE0  C8 61 00 60 */	lfd f3, 0x60(r1)
/* 8043C0A4 00438FE4  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043C0A8 00438FE8  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043C0AC 00438FEC  EC C3 00 B2 */	fmuls f6, f3, f2
/* 8043C0B0 00438FF0  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043C0B4 00438FF4  40 81 00 08 */	ble .L_8043C0BC
/* 8043C0B8 00438FF8  FC C0 08 90 */	fmr f6, f1
.L_8043C0BC:
/* 8043C0BC 00438FFC  88 7F 00 76 */	lbz r3, 0x76(r31)
/* 8043C0C0 00439000  3C 00 43 30 */	lis r0, 0x4330
/* 8043C0C4 00439004  90 01 00 68 */	stw r0, 0x68(r1)
/* 8043C0C8 00439008  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043C0CC 0043900C  90 61 00 6C */	stw r3, 0x6c(r1)
/* 8043C0D0 00439010  C0 5F 00 84 */	lfs f2, 0x84(r31)
/* 8043C0D4 00439014  C8 61 00 68 */	lfd f3, 0x68(r1)
/* 8043C0D8 00439018  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043C0DC 0043901C  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043C0E0 00439020  EC A3 00 B2 */	fmuls f5, f3, f2
/* 8043C0E4 00439024  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043C0E8 00439028  40 81 00 08 */	ble .L_8043C0F0
/* 8043C0EC 0043902C  FC A0 08 90 */	fmr f5, f1
.L_8043C0F0:
/* 8043C0F0 00439030  88 7F 00 77 */	lbz r3, 0x77(r31)
/* 8043C0F4 00439034  3C 00 43 30 */	lis r0, 0x4330
/* 8043C0F8 00439038  90 01 00 70 */	stw r0, 0x70(r1)
/* 8043C0FC 0043903C  C8 82 25 78 */	lfd f4, lbl_805208D8@sda21(r2)
/* 8043C100 00439040  90 61 00 74 */	stw r3, 0x74(r1)
/* 8043C104 00439044  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 8043C108 00439048  C8 61 00 70 */	lfd f3, 0x70(r1)
/* 8043C10C 0043904C  C0 22 25 84 */	lfs f1, lbl_805208E4@sda21(r2)
/* 8043C110 00439050  EC 63 20 28 */	fsubs f3, f3, f4
/* 8043C114 00439054  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8043C118 00439058  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043C11C 0043905C  40 81 00 08 */	ble .L_8043C124
/* 8043C120 00439060  FC 40 08 90 */	fmr f2, f1
.L_8043C124:
/* 8043C124 00439064  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043C128 00439068  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8043C12C 0043906C  4C 41 13 82 */	cror 2, 1, 2
/* 8043C130 00439070  40 82 00 10 */	bne .L_8043C140
/* 8043C134 00439074  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C138 00439078  EC 21 10 2A */	fadds f1, f1, f2
/* 8043C13C 0043907C  48 00 00 0C */	b .L_8043C148
.L_8043C140:
/* 8043C140 00439080  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C144 00439084  EC 22 08 28 */	fsubs f1, f2, f1
.L_8043C148:
/* 8043C148 00439088  FC 40 08 1E */	fctiwz f2, f1
/* 8043C14C 0043908C  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043C150 00439090  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 8043C154 00439094  D8 41 00 78 */	stfd f2, 0x78(r1)
/* 8043C158 00439098  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8043C15C 0043909C  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8043C160 004390A0  4C 41 13 82 */	cror 2, 1, 2
/* 8043C164 004390A4  40 82 00 10 */	bne .L_8043C174
/* 8043C168 004390A8  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C16C 004390AC  EC 21 28 2A */	fadds f1, f1, f5
/* 8043C170 004390B0  48 00 00 0C */	b .L_8043C17C
.L_8043C174:
/* 8043C174 004390B4  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C178 004390B8  EC 25 08 28 */	fsubs f1, f5, f1
.L_8043C17C:
/* 8043C17C 004390BC  FC 40 08 1E */	fctiwz f2, f1
/* 8043C180 004390C0  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043C184 004390C4  FC 06 08 40 */	fcmpo cr0, f6, f1
/* 8043C188 004390C8  D8 41 00 80 */	stfd f2, 0x80(r1)
/* 8043C18C 004390CC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8043C190 004390D0  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8043C194 004390D4  4C 41 13 82 */	cror 2, 1, 2
/* 8043C198 004390D8  40 82 00 10 */	bne .L_8043C1A8
/* 8043C19C 004390DC  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C1A0 004390E0  EC 21 30 2A */	fadds f1, f1, f6
/* 8043C1A4 004390E4  48 00 00 0C */	b .L_8043C1B0
.L_8043C1A8:
/* 8043C1A8 004390E8  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C1AC 004390EC  EC 26 08 28 */	fsubs f1, f6, f1
.L_8043C1B0:
/* 8043C1B0 004390F0  FC 40 08 1E */	fctiwz f2, f1
/* 8043C1B4 004390F4  C0 22 25 60 */	lfs f1, lbl_805208C0@sda21(r2)
/* 8043C1B8 004390F8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8043C1BC 004390FC  D8 41 00 88 */	stfd f2, 0x88(r1)
/* 8043C1C0 00439100  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 8043C1C4 00439104  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8043C1C8 00439108  4C 41 13 82 */	cror 2, 1, 2
/* 8043C1CC 0043910C  40 82 00 10 */	bne .L_8043C1DC
/* 8043C1D0 00439110  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C1D4 00439114  EC 01 00 2A */	fadds f0, f1, f0
/* 8043C1D8 00439118  48 00 00 0C */	b .L_8043C1E4
.L_8043C1DC:
/* 8043C1DC 0043911C  C0 22 25 6C */	lfs f1, lbl_805208CC@sda21(r2)
/* 8043C1E0 00439120  EC 00 08 28 */	fsubs f0, f0, f1
.L_8043C1E4:
/* 8043C1E4 00439124  FC 00 00 1E */	fctiwz f0, f0
/* 8043C1E8 00439128  98 A1 00 0A */	stb r5, 0xa(r1)
/* 8043C1EC 0043912C  38 60 00 80 */	li r3, 0x80
/* 8043C1F0 00439130  38 80 00 00 */	li r4, 0
/* 8043C1F4 00439134  98 01 00 09 */	stb r0, 9(r1)
/* 8043C1F8 00439138  38 A0 00 04 */	li r5, 4
/* 8043C1FC 0043913C  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 8043C200 00439140  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8043C204 00439144  98 C1 00 0B */	stb r6, 0xb(r1)
/* 8043C208 00439148  98 01 00 08 */	stb r0, 8(r1)
/* 8043C20C 0043914C  4B CA 97 7D */	bl GXBegin
/* 8043C210 00439150  3D 80 CC 01 */	lis r12, 0xCC008000@ha
/* 8043C214 00439154  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043C218 00439158  D3 8C 80 00 */	stfs f28, 0xCC008000@l(r12)
/* 8043C21C 0043915C  38 E0 00 00 */	li r7, 0
/* 8043C220 00439160  89 61 00 08 */	lbz r11, 8(r1)
/* 8043C224 00439164  38 C0 00 10 */	li r6, 0x10
/* 8043C228 00439168  D3 AC 80 00 */	stfs f29, 0xCC008000@l(r12)
/* 8043C22C 0043916C  89 41 00 09 */	lbz r10, 9(r1)
/* 8043C230 00439170  D0 0C 80 00 */	stfs f0, 0xCC008000@l(r12)
/* 8043C234 00439174  89 21 00 0A */	lbz r9, 0xa(r1)
/* 8043C238 00439178  99 6C 80 00 */	stb r11, 0xCC008000@l(r12)
/* 8043C23C 0043917C  89 01 00 0B */	lbz r8, 0xb(r1)
/* 8043C240 00439180  99 4C 80 00 */	stb r10, 0xCC008000@l(r12)
/* 8043C244 00439184  88 A1 00 0C */	lbz r5, 0xc(r1)
/* 8043C248 00439188  99 2C 80 00 */	stb r9, 0xCC008000@l(r12)
/* 8043C24C 0043918C  88 81 00 0D */	lbz r4, 0xd(r1)
/* 8043C250 00439190  99 0C 80 00 */	stb r8, 0xCC008000@l(r12)
/* 8043C254 00439194  88 61 00 0E */	lbz r3, 0xe(r1)
/* 8043C258 00439198  98 EC 80 00 */	stb r7, 0xCC008000@l(r12)
/* 8043C25C 0043919C  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8043C260 004391A0  98 CC 80 00 */	stb r6, 0xCC008000@l(r12)
/* 8043C264 004391A4  D3 8C 80 00 */	stfs f28, 0xCC008000@l(r12)
/* 8043C268 004391A8  D3 CC 80 00 */	stfs f30, 0xCC008000@l(r12)
/* 8043C26C 004391AC  D0 0C 80 00 */	stfs f0, 0xCC008000@l(r12)
/* 8043C270 004391B0  98 AC 80 00 */	stb r5, 0xCC008000@l(r12)
/* 8043C274 004391B4  98 8C 80 00 */	stb r4, 0xCC008000@l(r12)
/* 8043C278 004391B8  98 6C 80 00 */	stb r3, 0xCC008000@l(r12)
/* 8043C27C 004391BC  98 0C 80 00 */	stb r0, 0xCC008000@l(r12)
/* 8043C280 004391C0  98 EC 80 00 */	stb r7, 0xCC008000@l(r12)
/* 8043C284 004391C4  98 EC 80 00 */	stb r7, 0xCC008000@l(r12)
/* 8043C288 004391C8  D3 EC 80 00 */	stfs f31, 0xCC008000@l(r12)
/* 8043C28C 004391CC  D3 CC 80 00 */	stfs f30, 0xCC008000@l(r12)
/* 8043C290 004391D0  D0 0C 80 00 */	stfs f0, 0xCC008000@l(r12)
/* 8043C294 004391D4  98 AC 80 00 */	stb r5, 0xCC008000@l(r12)
/* 8043C298 004391D8  98 8C 80 00 */	stb r4, 0xCC008000@l(r12)
/* 8043C29C 004391DC  98 6C 80 00 */	stb r3, 0xCC008000@l(r12)
/* 8043C2A0 004391E0  98 0C 80 00 */	stb r0, 0xCC008000@l(r12)
/* 8043C2A4 004391E4  98 CC 80 00 */	stb r6, 0xCC008000@l(r12)
/* 8043C2A8 004391E8  98 EC 80 00 */	stb r7, 0xCC008000@l(r12)
/* 8043C2AC 004391EC  D3 EC 80 00 */	stfs f31, 0xCC008000@l(r12)
/* 8043C2B0 004391F0  D3 AC 80 00 */	stfs f29, 0xCC008000@l(r12)
/* 8043C2B4 004391F4  D0 0C 80 00 */	stfs f0, 0xCC008000@l(r12)
/* 8043C2B8 004391F8  99 6C 80 00 */	stb r11, 0xCC008000@l(r12)
/* 8043C2BC 004391FC  99 4C 80 00 */	stb r10, 0xCC008000@l(r12)
/* 8043C2C0 00439200  99 2C 80 00 */	stb r9, 0xCC008000@l(r12)
/* 8043C2C4 00439204  99 0C 80 00 */	stb r8, 0xCC008000@l(r12)
/* 8043C2C8 00439208  98 CC 80 00 */	stb r6, 0xCC008000@l(r12)
/* 8043C2CC 0043920C  98 CC 80 00 */	stb r6, 0xCC008000@l(r12)
/* 8043C2D0 00439210  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 8043C2D4 00439214  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 8043C2D8 00439218  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 8043C2DC 0043921C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 8043C2E0 00439220  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 8043C2E4 00439224  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 8043C2E8 00439228  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 8043C2EC 0043922C  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 8043C2F0 00439230  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8043C2F4 00439234  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8043C2F8 00439238  7C 08 03 A6 */	mtlr r0
/* 8043C2FC 0043923C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8043C300 00439240  4E 80 00 20 */	blr 
.endfn drawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff

.fn reset__Q25P2JME19TRenderingProcessorFv, global
/* 8043C304 00439244  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043C308 00439248  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 8043C30C 0043924C  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 8043C310 00439250  4E 80 00 20 */	blr 
.endfn reset__Q25P2JME19TRenderingProcessorFv

.fn calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb, global
/* 8043C314 00439254  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8043C318 00439258  7C 08 02 A6 */	mflr r0
/* 8043C31C 0043925C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8043C320 00439260  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8043C324 00439264  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8043C328 00439268  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8043C32C 0043926C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8043C330 00439270  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8043C334 00439274  7C 9D 23 78 */	mr r29, r4
/* 8043C338 00439278  FF E0 08 90 */	fmr f31, f1
/* 8043C33C 0043927C  7F A3 EB 78 */	mr r3, r29
/* 8043C340 00439280  7C BE 2B 78 */	mr r30, r5
/* 8043C344 00439284  81 9D 00 00 */	lwz r12, 0(r29)
/* 8043C348 00439288  7C DF 33 78 */	mr r31, r6
/* 8043C34C 0043928C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8043C350 00439290  7D 89 03 A6 */	mtctr r12
/* 8043C354 00439294  4E 80 04 21 */	bctrl 
/* 8043C358 00439298  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8043C35C 0043929C  3C 60 43 30 */	lis r3, 0x4330
/* 8043C360 004392A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043C364 004392A4  88 1D 00 05 */	lbz r0, 5(r29)
/* 8043C368 004392A8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8043C36C 004392AC  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043C370 004392B0  28 00 00 00 */	cmplwi r0, 0
/* 8043C374 004392B4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043C378 004392B8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043C37C 004392BC  EF FF 00 24 */	fdivs f31, f31, f0
/* 8043C380 004392C0  41 82 00 24 */	beq .L_8043C3A4
/* 8043C384 004392C4  80 1D 00 08 */	lwz r0, 8(r29)
/* 8043C388 004392C8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8043C38C 004392CC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043C390 004392D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043C394 004392D4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043C398 004392D8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043C39C 004392DC  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8043C3A0 004392E0  48 00 00 78 */	b .L_8043C418
.L_8043C3A4:
/* 8043C3A4 004392E4  7F A3 EB 78 */	mr r3, r29
/* 8043C3A8 004392E8  7F C4 F3 78 */	mr r4, r30
/* 8043C3AC 004392EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8043C3B0 004392F0  38 A1 00 08 */	addi r5, r1, 8
/* 8043C3B4 004392F4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8043C3B8 004392F8  7D 89 03 A6 */	mtctr r12
/* 8043C3BC 004392FC  4E 80 04 21 */	bctrl 
/* 8043C3C0 00439300  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8043C3C4 00439304  40 82 00 34 */	bne .L_8043C3F8
/* 8043C3C8 00439308  88 81 00 09 */	lbz r4, 9(r1)
/* 8043C3CC 0043930C  3C 00 43 30 */	lis r0, 0x4330
/* 8043C3D0 00439310  88 61 00 08 */	lbz r3, 8(r1)
/* 8043C3D4 00439314  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043C3D8 00439318  7C 04 1A 14 */	add r0, r4, r3
/* 8043C3DC 0043931C  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043C3E0 00439320  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043C3E4 00439324  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043C3E8 00439328  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043C3EC 0043932C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043C3F0 00439330  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8043C3F4 00439334  48 00 00 24 */	b .L_8043C418
.L_8043C3F8:
/* 8043C3F8 00439338  88 61 00 09 */	lbz r3, 9(r1)
/* 8043C3FC 0043933C  3C 00 43 30 */	lis r0, 0x4330
/* 8043C400 00439340  90 01 00 10 */	stw r0, 0x10(r1)
/* 8043C404 00439344  C8 22 25 78 */	lfd f1, lbl_805208D8@sda21(r2)
/* 8043C408 00439348  90 61 00 14 */	stw r3, 0x14(r1)
/* 8043C40C 0043934C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043C410 00439350  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043C414 00439354  EC 20 07 F2 */	fmuls f1, f0, f31
.L_8043C418:
/* 8043C418 00439358  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8043C41C 0043935C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8043C420 00439360  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8043C424 00439364  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8043C428 00439368  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8043C42C 0043936C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8043C430 00439370  7C 08 03 A6 */	mtlr r0
/* 8043C434 00439374  38 21 00 40 */	addi r1, r1, 0x40
/* 8043C438 00439378  4E 80 00 20 */	blr 
.endfn calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb

.fn setLineWidth__Q25P2JME19TRenderingProcessorFv, global
/* 8043C43C 0043937C  80 03 00 8C */	lwz r0, 0x8c(r3)
/* 8043C440 00439380  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043C444 00439384  4D 82 00 20 */	beqlr 
/* 8043C448 00439388  88 03 00 A4 */	lbz r0, 0xa4(r3)
/* 8043C44C 0043938C  C0 03 00 90 */	lfs f0, 0x90(r3)
/* 8043C450 00439390  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 8043C454 00439394  54 00 10 3A */	slwi r0, r0, 2
/* 8043C458 00439398  7C 03 05 2E */	stfsx f0, r3, r0
/* 8043C45C 0043939C  4E 80 00 20 */	blr 
.endfn setLineWidth__Q25P2JME19TRenderingProcessorFv

.fn resetLineWidth__Q25P2JME19TRenderingProcessorFv, global
/* 8043C460 004393A0  38 00 00 04 */	li r0, 4
/* 8043C464 004393A4  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043C468 004393A8  39 60 00 00 */	li r11, 0
/* 8043C46C 004393AC  7C 09 03 A6 */	mtctr r0
.L_8043C470:
/* 8043C470 004393B0  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C474 004393B4  39 4B 00 04 */	addi r10, r11, 4
/* 8043C478 004393B8  39 2B 00 08 */	addi r9, r11, 8
/* 8043C47C 004393BC  39 0B 00 0C */	addi r8, r11, 0xc
/* 8043C480 004393C0  7C 04 5D 2E */	stfsx f0, r4, r11
/* 8043C484 004393C4  38 EB 00 10 */	addi r7, r11, 0x10
/* 8043C488 004393C8  38 CB 00 14 */	addi r6, r11, 0x14
/* 8043C48C 004393CC  38 AB 00 18 */	addi r5, r11, 0x18
/* 8043C490 004393D0  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C494 004393D4  38 0B 00 1C */	addi r0, r11, 0x1c
/* 8043C498 004393D8  7C 04 55 2E */	stfsx f0, r4, r10
/* 8043C49C 004393DC  39 4B 00 24 */	addi r10, r11, 0x24
/* 8043C4A0 004393E0  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4A4 004393E4  7C 04 4D 2E */	stfsx f0, r4, r9
/* 8043C4A8 004393E8  39 2B 00 28 */	addi r9, r11, 0x28
/* 8043C4AC 004393EC  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4B0 004393F0  7C 04 45 2E */	stfsx f0, r4, r8
/* 8043C4B4 004393F4  39 0B 00 2C */	addi r8, r11, 0x2c
/* 8043C4B8 004393F8  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4BC 004393FC  7C 04 3D 2E */	stfsx f0, r4, r7
/* 8043C4C0 00439400  38 EB 00 30 */	addi r7, r11, 0x30
/* 8043C4C4 00439404  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4C8 00439408  7C 04 35 2E */	stfsx f0, r4, r6
/* 8043C4CC 0043940C  38 CB 00 34 */	addi r6, r11, 0x34
/* 8043C4D0 00439410  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4D4 00439414  7C 04 2D 2E */	stfsx f0, r4, r5
/* 8043C4D8 00439418  38 AB 00 38 */	addi r5, r11, 0x38
/* 8043C4DC 0043941C  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4E0 00439420  7C 04 05 2E */	stfsx f0, r4, r0
/* 8043C4E4 00439424  38 0B 00 3C */	addi r0, r11, 0x3c
/* 8043C4E8 00439428  39 6B 00 20 */	addi r11, r11, 0x20
/* 8043C4EC 0043942C  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4F0 00439430  7C 04 5D 2E */	stfsx f0, r4, r11
/* 8043C4F4 00439434  39 6B 00 20 */	addi r11, r11, 0x20
/* 8043C4F8 00439438  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C4FC 0043943C  7C 04 55 2E */	stfsx f0, r4, r10
/* 8043C500 00439440  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C504 00439444  7C 04 4D 2E */	stfsx f0, r4, r9
/* 8043C508 00439448  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C50C 0043944C  7C 04 45 2E */	stfsx f0, r4, r8
/* 8043C510 00439450  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C514 00439454  7C 04 3D 2E */	stfsx f0, r4, r7
/* 8043C518 00439458  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C51C 0043945C  7C 04 35 2E */	stfsx f0, r4, r6
/* 8043C520 00439460  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C524 00439464  7C 04 2D 2E */	stfsx f0, r4, r5
/* 8043C528 00439468  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 8043C52C 0043946C  7C 04 05 2E */	stfsx f0, r4, r0
/* 8043C530 00439470  42 00 FF 40 */	bdnz .L_8043C470
/* 8043C534 00439474  4E 80 00 20 */	blr 
.endfn resetLineWidth__Q25P2JME19TRenderingProcessorFv

.fn setOnePageLine__Q25P2JME19TRenderingProcessorFv, global
/* 8043C538 00439478  80 03 00 8C */	lwz r0, 0x8c(r3)
/* 8043C53C 0043947C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043C540 00439480  4D 82 00 20 */	beqlr 
/* 8043C544 00439484  38 A0 00 00 */	li r5, 0
/* 8043C548 00439488  48 00 00 20 */	b .L_8043C568
.L_8043C54C:
/* 8043C54C 0043948C  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C550 00439490  7C 04 28 AE */	lbzx r0, r4, r5
/* 8043C554 00439494  28 00 00 00 */	cmplwi r0, 0
/* 8043C558 00439498  40 82 00 0C */	bne .L_8043C564
/* 8043C55C 0043949C  88 03 00 A5 */	lbz r0, 0xa5(r3)
/* 8043C560 004394A0  7C 04 29 AE */	stbx r0, r4, r5
.L_8043C564:
/* 8043C564 004394A4  38 A5 00 01 */	addi r5, r5, 1
.L_8043C568:
/* 8043C568 004394A8  88 03 00 A4 */	lbz r0, 0xa4(r3)
/* 8043C56C 004394AC  7C 05 00 00 */	cmpw r5, r0
/* 8043C570 004394B0  41 80 FF DC */	blt .L_8043C54C
/* 8043C574 004394B4  4E 80 00 20 */	blr 
.endfn setOnePageLine__Q25P2JME19TRenderingProcessorFv

.fn resetOnePageLine__Q25P2JME19TRenderingProcessorFv, global
/* 8043C578 004394B8  38 00 00 04 */	li r0, 4
/* 8043C57C 004394BC  39 80 00 00 */	li r12, 0
/* 8043C580 004394C0  7C 09 03 A6 */	mtctr r0
.L_8043C584:
/* 8043C584 004394C4  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C588 004394C8  39 60 00 00 */	li r11, 0
/* 8043C58C 004394CC  39 4C 00 01 */	addi r10, r12, 1
/* 8043C590 004394D0  39 2C 00 02 */	addi r9, r12, 2
/* 8043C594 004394D4  7D 64 61 AE */	stbx r11, r4, r12
/* 8043C598 004394D8  39 0C 00 03 */	addi r8, r12, 3
/* 8043C59C 004394DC  38 EC 00 04 */	addi r7, r12, 4
/* 8043C5A0 004394E0  38 CC 00 05 */	addi r6, r12, 5
/* 8043C5A4 004394E4  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C5A8 004394E8  38 AC 00 06 */	addi r5, r12, 6
/* 8043C5AC 004394EC  38 0C 00 07 */	addi r0, r12, 7
/* 8043C5B0 004394F0  7D 64 51 AE */	stbx r11, r4, r10
/* 8043C5B4 004394F4  39 4C 00 09 */	addi r10, r12, 9
/* 8043C5B8 004394F8  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C5BC 004394FC  7D 64 49 AE */	stbx r11, r4, r9
/* 8043C5C0 00439500  39 2C 00 0A */	addi r9, r12, 0xa
/* 8043C5C4 00439504  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C5C8 00439508  7D 64 41 AE */	stbx r11, r4, r8
/* 8043C5CC 0043950C  39 0C 00 0B */	addi r8, r12, 0xb
/* 8043C5D0 00439510  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C5D4 00439514  7D 64 39 AE */	stbx r11, r4, r7
/* 8043C5D8 00439518  38 EC 00 0C */	addi r7, r12, 0xc
/* 8043C5DC 0043951C  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C5E0 00439520  7D 64 31 AE */	stbx r11, r4, r6
/* 8043C5E4 00439524  38 CC 00 0D */	addi r6, r12, 0xd
/* 8043C5E8 00439528  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C5EC 0043952C  7D 64 29 AE */	stbx r11, r4, r5
/* 8043C5F0 00439530  38 AC 00 0E */	addi r5, r12, 0xe
/* 8043C5F4 00439534  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C5F8 00439538  7D 64 01 AE */	stbx r11, r4, r0
/* 8043C5FC 0043953C  38 0C 00 0F */	addi r0, r12, 0xf
/* 8043C600 00439540  39 8C 00 08 */	addi r12, r12, 8
/* 8043C604 00439544  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C608 00439548  7D 64 61 AE */	stbx r11, r4, r12
/* 8043C60C 0043954C  39 8C 00 08 */	addi r12, r12, 8
/* 8043C610 00439550  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C614 00439554  7D 64 51 AE */	stbx r11, r4, r10
/* 8043C618 00439558  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C61C 0043955C  7D 64 49 AE */	stbx r11, r4, r9
/* 8043C620 00439560  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C624 00439564  7D 64 41 AE */	stbx r11, r4, r8
/* 8043C628 00439568  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C62C 0043956C  7D 64 39 AE */	stbx r11, r4, r7
/* 8043C630 00439570  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C634 00439574  7D 64 31 AE */	stbx r11, r4, r6
/* 8043C638 00439578  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C63C 0043957C  7D 64 29 AE */	stbx r11, r4, r5
/* 8043C640 00439580  80 83 00 AC */	lwz r4, 0xac(r3)
/* 8043C644 00439584  7D 64 01 AE */	stbx r11, r4, r0
/* 8043C648 00439588  42 00 FF 3C */	bdnz .L_8043C584
/* 8043C64C 0043958C  4E 80 00 20 */	blr 
.endfn resetOnePageLine__Q25P2JME19TRenderingProcessorFv

.fn setPageInfo__Q25P2JME19TRenderingProcessorFv, global
/* 8043C650 00439590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043C654 00439594  7C 08 02 A6 */	mflr r0
/* 8043C658 00439598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043C65C 0043959C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043C660 004395A0  7C 7F 1B 78 */	mr r31, r3
/* 8043C664 004395A4  88 03 00 A6 */	lbz r0, 0xa6(r3)
/* 8043C668 004395A8  28 00 00 0A */	cmplwi r0, 0xa
/* 8043C66C 004395AC  41 80 00 20 */	blt .L_8043C68C
/* 8043C670 004395B0  3C 60 80 4A */	lis r3, lbl_8049ABE8@ha
/* 8043C674 004395B4  3C A0 80 4A */	lis r5, lbl_8049AC00@ha
/* 8043C678 004395B8  38 63 AB E8 */	addi r3, r3, lbl_8049ABE8@l
/* 8043C67C 004395BC  38 80 06 25 */	li r4, 0x625
/* 8043C680 004395C0  38 A5 AC 00 */	addi r5, r5, lbl_8049AC00@l
/* 8043C684 004395C4  4C C6 31 82 */	crclr 6
/* 8043C688 004395C8  4B BE DF B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043C68C:
/* 8043C68C 004395CC  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043C690 004395D0  88 9F 00 A4 */	lbz r4, 0xa4(r31)
/* 8043C694 004395D4  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8043C698 004395D8  54 00 08 3C */	slwi r0, r0, 1
/* 8043C69C 004395DC  38 84 FF FF */	addi r4, r4, -1
/* 8043C6A0 004395E0  7C 63 02 14 */	add r3, r3, r0
/* 8043C6A4 004395E4  98 83 00 01 */	stb r4, 1(r3)
/* 8043C6A8 004395E8  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8043C6AC 004395EC  28 00 00 09 */	cmplwi r0, 9
/* 8043C6B0 004395F0  40 80 00 18 */	bge .L_8043C6C8
/* 8043C6B4 004395F4  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8043C6B8 004395F8  54 00 0D FC */	rlwinm r0, r0, 1, 0x17, 0x1e
/* 8043C6BC 004395FC  88 9F 00 A4 */	lbz r4, 0xa4(r31)
/* 8043C6C0 00439600  7C 63 02 14 */	add r3, r3, r0
/* 8043C6C4 00439604  98 83 00 02 */	stb r4, 2(r3)
.L_8043C6C8:
/* 8043C6C8 00439608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043C6CC 0043960C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043C6D0 00439610  7C 08 03 A6 */	mtlr r0
/* 8043C6D4 00439614  38 21 00 10 */	addi r1, r1, 0x10
/* 8043C6D8 00439618  4E 80 00 20 */	blr 
.endfn setPageInfo__Q25P2JME19TRenderingProcessorFv

.fn preProcCode__Q25P2JME19TRenderingProcessorFUi, global
/* 8043C6DC 0043961C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043C6E0 00439620  7C 08 02 A6 */	mflr r0
/* 8043C6E4 00439624  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043C6E8 00439628  48 00 00 35 */	bl preProcCenteringCode__Q25P2JME19TRenderingProcessorFUi
/* 8043C6EC 0043962C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043C6F0 00439630  7C 08 03 A6 */	mtlr r0
/* 8043C6F4 00439634  38 21 00 10 */	addi r1, r1, 0x10
/* 8043C6F8 00439638  4E 80 00 20 */	blr 
.endfn preProcCode__Q25P2JME19TRenderingProcessorFUi

.fn preProcID__Q25P2JME19TRenderingProcessorFUiUi, global
/* 8043C6FC 0043963C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043C700 00439640  7C 08 02 A6 */	mflr r0
/* 8043C704 00439644  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043C708 00439648  48 00 03 B1 */	bl preProcCenteringID__Q25P2JME19TRenderingProcessorFUiUi
/* 8043C70C 0043964C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043C710 00439650  7C 08 03 A6 */	mtlr r0
/* 8043C714 00439654  38 21 00 10 */	addi r1, r1, 0x10
/* 8043C718 00439658  4E 80 00 20 */	blr 
.endfn preProcID__Q25P2JME19TRenderingProcessorFUiUi

.fn preProcCenteringCode__Q25P2JME19TRenderingProcessorFUi, global
/* 8043C71C 0043965C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043C720 00439660  7C 08 02 A6 */	mflr r0
/* 8043C724 00439664  39 40 00 00 */	li r10, 0
/* 8043C728 00439668  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043C72C 0043966C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043C730 00439670  38 00 00 04 */	li r0, 4
/* 8043C734 00439674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043C738 00439678  7C 9F 23 78 */	mr r31, r4
/* 8043C73C 0043967C  93 C1 00 08 */	stw r30, 8(r1)
/* 8043C740 00439680  7C 7E 1B 78 */	mr r30, r3
/* 8043C744 00439684  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 8043C748 00439688  60 63 00 01 */	ori r3, r3, 1
/* 8043C74C 0043968C  90 7E 00 8C */	stw r3, 0x8c(r30)
/* 8043C750 00439690  99 5E 00 A4 */	stb r10, 0xa4(r30)
/* 8043C754 00439694  7C 09 03 A6 */	mtctr r0
.L_8043C758:
/* 8043C758 00439698  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C75C 0043969C  39 2A 00 04 */	addi r9, r10, 4
/* 8043C760 004396A0  39 0A 00 08 */	addi r8, r10, 8
/* 8043C764 004396A4  38 EA 00 0C */	addi r7, r10, 0xc
/* 8043C768 004396A8  7C 03 55 2E */	stfsx f0, r3, r10
/* 8043C76C 004396AC  38 CA 00 10 */	addi r6, r10, 0x10
/* 8043C770 004396B0  38 AA 00 14 */	addi r5, r10, 0x14
/* 8043C774 004396B4  38 8A 00 18 */	addi r4, r10, 0x18
/* 8043C778 004396B8  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C77C 004396BC  38 0A 00 1C */	addi r0, r10, 0x1c
/* 8043C780 004396C0  7C 03 4D 2E */	stfsx f0, r3, r9
/* 8043C784 004396C4  39 2A 00 24 */	addi r9, r10, 0x24
/* 8043C788 004396C8  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C78C 004396CC  7C 03 45 2E */	stfsx f0, r3, r8
/* 8043C790 004396D0  39 0A 00 28 */	addi r8, r10, 0x28
/* 8043C794 004396D4  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C798 004396D8  7C 03 3D 2E */	stfsx f0, r3, r7
/* 8043C79C 004396DC  38 EA 00 2C */	addi r7, r10, 0x2c
/* 8043C7A0 004396E0  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7A4 004396E4  7C 03 35 2E */	stfsx f0, r3, r6
/* 8043C7A8 004396E8  38 CA 00 30 */	addi r6, r10, 0x30
/* 8043C7AC 004396EC  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7B0 004396F0  7C 03 2D 2E */	stfsx f0, r3, r5
/* 8043C7B4 004396F4  38 AA 00 34 */	addi r5, r10, 0x34
/* 8043C7B8 004396F8  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7BC 004396FC  7C 03 25 2E */	stfsx f0, r3, r4
/* 8043C7C0 00439700  38 8A 00 38 */	addi r4, r10, 0x38
/* 8043C7C4 00439704  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7C8 00439708  7C 03 05 2E */	stfsx f0, r3, r0
/* 8043C7CC 0043970C  38 0A 00 3C */	addi r0, r10, 0x3c
/* 8043C7D0 00439710  39 4A 00 20 */	addi r10, r10, 0x20
/* 8043C7D4 00439714  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7D8 00439718  7C 03 55 2E */	stfsx f0, r3, r10
/* 8043C7DC 0043971C  39 4A 00 20 */	addi r10, r10, 0x20
/* 8043C7E0 00439720  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7E4 00439724  7C 03 4D 2E */	stfsx f0, r3, r9
/* 8043C7E8 00439728  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7EC 0043972C  7C 03 45 2E */	stfsx f0, r3, r8
/* 8043C7F0 00439730  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7F4 00439734  7C 03 3D 2E */	stfsx f0, r3, r7
/* 8043C7F8 00439738  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C7FC 0043973C  7C 03 35 2E */	stfsx f0, r3, r6
/* 8043C800 00439740  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C804 00439744  7C 03 2D 2E */	stfsx f0, r3, r5
/* 8043C808 00439748  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C80C 0043974C  7C 03 25 2E */	stfsx f0, r3, r4
/* 8043C810 00439750  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C814 00439754  7C 03 05 2E */	stfsx f0, r3, r0
/* 8043C818 00439758  42 00 FF 40 */	bdnz .L_8043C758
/* 8043C81C 0043975C  39 60 00 00 */	li r11, 0
/* 8043C820 00439760  38 00 00 04 */	li r0, 4
/* 8043C824 00439764  99 7E 00 A5 */	stb r11, 0xa5(r30)
/* 8043C828 00439768  7C 09 03 A6 */	mtctr r0
.L_8043C82C:
/* 8043C82C 0043976C  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C830 00439770  38 60 00 00 */	li r3, 0
/* 8043C834 00439774  39 4B 00 01 */	addi r10, r11, 1
/* 8043C838 00439778  39 2B 00 02 */	addi r9, r11, 2
/* 8043C83C 0043977C  7C 64 59 AE */	stbx r3, r4, r11
/* 8043C840 00439780  39 0B 00 03 */	addi r8, r11, 3
/* 8043C844 00439784  38 EB 00 04 */	addi r7, r11, 4
/* 8043C848 00439788  38 CB 00 05 */	addi r6, r11, 5
/* 8043C84C 0043978C  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C850 00439790  38 AB 00 06 */	addi r5, r11, 6
/* 8043C854 00439794  38 0B 00 07 */	addi r0, r11, 7
/* 8043C858 00439798  7C 64 51 AE */	stbx r3, r4, r10
/* 8043C85C 0043979C  39 4B 00 09 */	addi r10, r11, 9
/* 8043C860 004397A0  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C864 004397A4  7C 64 49 AE */	stbx r3, r4, r9
/* 8043C868 004397A8  39 2B 00 0A */	addi r9, r11, 0xa
/* 8043C86C 004397AC  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C870 004397B0  7C 64 41 AE */	stbx r3, r4, r8
/* 8043C874 004397B4  39 0B 00 0B */	addi r8, r11, 0xb
/* 8043C878 004397B8  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C87C 004397BC  7C 64 39 AE */	stbx r3, r4, r7
/* 8043C880 004397C0  38 EB 00 0C */	addi r7, r11, 0xc
/* 8043C884 004397C4  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C888 004397C8  7C 64 31 AE */	stbx r3, r4, r6
/* 8043C88C 004397CC  38 CB 00 0D */	addi r6, r11, 0xd
/* 8043C890 004397D0  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C894 004397D4  7C 64 29 AE */	stbx r3, r4, r5
/* 8043C898 004397D8  38 AB 00 0E */	addi r5, r11, 0xe
/* 8043C89C 004397DC  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8A0 004397E0  7C 64 01 AE */	stbx r3, r4, r0
/* 8043C8A4 004397E4  38 0B 00 0F */	addi r0, r11, 0xf
/* 8043C8A8 004397E8  39 6B 00 08 */	addi r11, r11, 8
/* 8043C8AC 004397EC  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8B0 004397F0  7C 64 59 AE */	stbx r3, r4, r11
/* 8043C8B4 004397F4  39 6B 00 08 */	addi r11, r11, 8
/* 8043C8B8 004397F8  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8BC 004397FC  7C 64 51 AE */	stbx r3, r4, r10
/* 8043C8C0 00439800  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8C4 00439804  7C 64 49 AE */	stbx r3, r4, r9
/* 8043C8C8 00439808  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8CC 0043980C  7C 64 41 AE */	stbx r3, r4, r8
/* 8043C8D0 00439810  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8D4 00439814  7C 64 39 AE */	stbx r3, r4, r7
/* 8043C8D8 00439818  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8DC 0043981C  7C 64 31 AE */	stbx r3, r4, r6
/* 8043C8E0 00439820  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8E4 00439824  7C 64 29 AE */	stbx r3, r4, r5
/* 8043C8E8 00439828  80 9E 00 AC */	lwz r4, 0xac(r30)
/* 8043C8EC 0043982C  7C 64 01 AE */	stbx r3, r4, r0
/* 8043C8F0 00439830  42 00 FF 3C */	bdnz .L_8043C82C
/* 8043C8F4 00439834  38 00 00 02 */	li r0, 2
/* 8043C8F8 00439838  7C 09 03 A6 */	mtctr r0
.L_8043C8FC:
/* 8043C8FC 0043983C  80 9E 00 B0 */	lwz r4, 0xb0(r30)
/* 8043C900 00439840  39 80 00 00 */	li r12, 0
/* 8043C904 00439844  38 03 00 01 */	addi r0, r3, 1
/* 8043C908 00439848  39 43 00 02 */	addi r10, r3, 2
/* 8043C90C 0043984C  7D 84 19 AE */	stbx r12, r4, r3
/* 8043C910 00439850  39 23 00 03 */	addi r9, r3, 3
/* 8043C914 00439854  39 03 00 04 */	addi r8, r3, 4
/* 8043C918 00439858  38 E3 00 05 */	addi r7, r3, 5
/* 8043C91C 0043985C  81 7E 00 B0 */	lwz r11, 0xb0(r30)
/* 8043C920 00439860  38 C3 00 06 */	addi r6, r3, 6
/* 8043C924 00439864  38 A3 00 07 */	addi r5, r3, 7
/* 8043C928 00439868  38 83 00 08 */	addi r4, r3, 8
/* 8043C92C 0043986C  7D 8B 01 AE */	stbx r12, r11, r0
/* 8043C930 00439870  38 03 00 09 */	addi r0, r3, 9
/* 8043C934 00439874  38 63 00 0A */	addi r3, r3, 0xa
/* 8043C938 00439878  81 7E 00 B0 */	lwz r11, 0xb0(r30)
/* 8043C93C 0043987C  7D 8B 51 AE */	stbx r12, r11, r10
/* 8043C940 00439880  81 5E 00 B0 */	lwz r10, 0xb0(r30)
/* 8043C944 00439884  7D 8A 49 AE */	stbx r12, r10, r9
/* 8043C948 00439888  81 3E 00 B0 */	lwz r9, 0xb0(r30)
/* 8043C94C 0043988C  7D 89 41 AE */	stbx r12, r9, r8
/* 8043C950 00439890  81 1E 00 B0 */	lwz r8, 0xb0(r30)
/* 8043C954 00439894  7D 88 39 AE */	stbx r12, r8, r7
/* 8043C958 00439898  80 FE 00 B0 */	lwz r7, 0xb0(r30)
/* 8043C95C 0043989C  7D 87 31 AE */	stbx r12, r7, r6
/* 8043C960 004398A0  80 DE 00 B0 */	lwz r6, 0xb0(r30)
/* 8043C964 004398A4  7D 86 29 AE */	stbx r12, r6, r5
/* 8043C968 004398A8  80 BE 00 B0 */	lwz r5, 0xb0(r30)
/* 8043C96C 004398AC  7D 85 21 AE */	stbx r12, r5, r4
/* 8043C970 004398B0  80 9E 00 B0 */	lwz r4, 0xb0(r30)
/* 8043C974 004398B4  7D 84 01 AE */	stbx r12, r4, r0
/* 8043C978 004398B8  42 00 FF 84 */	bdnz .L_8043C8FC
/* 8043C97C 004398BC  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043C980 004398C0  7F C3 F3 78 */	mr r3, r30
/* 8043C984 004398C4  38 80 00 00 */	li r4, 0
/* 8043C988 004398C8  D0 1E 00 B4 */	stfs f0, 0xb4(r30)
/* 8043C98C 004398CC  4B BC A7 CD */	bl reset___Q28JMessage10TProcessorFPCc
/* 8043C990 004398D0  57 E4 84 3E */	srwi r4, r31, 0x10
/* 8043C994 004398D4  7F C3 F3 78 */	mr r3, r30
/* 8043C998 004398D8  57 E5 04 3E */	clrlwi r5, r31, 0x10
/* 8043C99C 004398DC  4B BC A4 09 */	bl setBegin_messageCode__Q28JMessage10TProcessorFUsUs
/* 8043C9A0 004398E0  7F C3 F3 78 */	mr r3, r30
/* 8043C9A4 004398E4  38 80 00 00 */	li r4, 0
/* 8043C9A8 004398E8  4B BC B7 B1 */	bl process__Q28JMessage19TRenderingProcessorFPCc
/* 8043C9AC 004398EC  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043C9B0 004398F0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043C9B4 004398F4  41 82 00 18 */	beq .L_8043C9CC
/* 8043C9B8 004398F8  88 1E 00 A4 */	lbz r0, 0xa4(r30)
/* 8043C9BC 004398FC  C0 1E 00 90 */	lfs f0, 0x90(r30)
/* 8043C9C0 00439900  80 7E 00 A8 */	lwz r3, 0xa8(r30)
/* 8043C9C4 00439904  54 00 10 3A */	slwi r0, r0, 2
/* 8043C9C8 00439908  7C 03 05 2E */	stfsx f0, r3, r0
.L_8043C9CC:
/* 8043C9CC 0043990C  7F C3 F3 78 */	mr r3, r30
/* 8043C9D0 00439910  81 9E 00 00 */	lwz r12, 0(r30)
/* 8043C9D4 00439914  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8043C9D8 00439918  7D 89 03 A6 */	mtctr r12
/* 8043C9DC 0043991C  4E 80 04 21 */	bctrl 
/* 8043C9E0 00439920  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043C9E4 00439924  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043C9E8 00439928  41 82 00 34 */	beq .L_8043CA1C
/* 8043C9EC 0043992C  38 80 00 00 */	li r4, 0
/* 8043C9F0 00439930  48 00 00 20 */	b .L_8043CA10
.L_8043C9F4:
/* 8043C9F4 00439934  80 7E 00 AC */	lwz r3, 0xac(r30)
/* 8043C9F8 00439938  7C 03 20 AE */	lbzx r0, r3, r4
/* 8043C9FC 0043993C  28 00 00 00 */	cmplwi r0, 0
/* 8043CA00 00439940  40 82 00 0C */	bne .L_8043CA0C
/* 8043CA04 00439944  88 1E 00 A5 */	lbz r0, 0xa5(r30)
/* 8043CA08 00439948  7C 03 21 AE */	stbx r0, r3, r4
.L_8043CA0C:
/* 8043CA0C 0043994C  38 84 00 01 */	addi r4, r4, 1
.L_8043CA10:
/* 8043CA10 00439950  88 1E 00 A4 */	lbz r0, 0xa4(r30)
/* 8043CA14 00439954  7C 04 00 00 */	cmpw r4, r0
/* 8043CA18 00439958  41 80 FF DC */	blt .L_8043C9F4
.L_8043CA1C:
/* 8043CA1C 0043995C  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043CA20 00439960  54 00 00 C7 */	rlwinm. r0, r0, 0, 3, 3
/* 8043CA24 00439964  40 82 00 68 */	bne .L_8043CA8C
/* 8043CA28 00439968  88 1E 00 A6 */	lbz r0, 0xa6(r30)
/* 8043CA2C 0043996C  28 00 00 0A */	cmplwi r0, 0xa
/* 8043CA30 00439970  41 80 00 20 */	blt .L_8043CA50
/* 8043CA34 00439974  3C 60 80 4A */	lis r3, lbl_8049ABE8@ha
/* 8043CA38 00439978  3C A0 80 4A */	lis r5, lbl_8049AC00@ha
/* 8043CA3C 0043997C  38 63 AB E8 */	addi r3, r3, lbl_8049ABE8@l
/* 8043CA40 00439980  38 80 06 25 */	li r4, 0x625
/* 8043CA44 00439984  38 A5 AC 00 */	addi r5, r5, lbl_8049AC00@l
/* 8043CA48 00439988  4C C6 31 82 */	crclr 6
/* 8043CA4C 0043998C  4B BE DB F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043CA50:
/* 8043CA50 00439990  88 1E 00 A6 */	lbz r0, 0xa6(r30)
/* 8043CA54 00439994  88 9E 00 A4 */	lbz r4, 0xa4(r30)
/* 8043CA58 00439998  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8043CA5C 0043999C  54 00 08 3C */	slwi r0, r0, 1
/* 8043CA60 004399A0  38 84 FF FF */	addi r4, r4, -1
/* 8043CA64 004399A4  7C 63 02 14 */	add r3, r3, r0
/* 8043CA68 004399A8  98 83 00 01 */	stb r4, 1(r3)
/* 8043CA6C 004399AC  88 1E 00 A6 */	lbz r0, 0xa6(r30)
/* 8043CA70 004399B0  28 00 00 09 */	cmplwi r0, 9
/* 8043CA74 004399B4  40 80 00 18 */	bge .L_8043CA8C
/* 8043CA78 004399B8  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 8043CA7C 004399BC  54 00 0D FC */	rlwinm r0, r0, 1, 0x17, 0x1e
/* 8043CA80 004399C0  88 9E 00 A4 */	lbz r4, 0xa4(r30)
/* 8043CA84 004399C4  7C 63 02 14 */	add r3, r3, r0
/* 8043CA88 004399C8  98 83 00 02 */	stb r4, 2(r3)
.L_8043CA8C:
/* 8043CA8C 004399CC  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043CA90 004399D0  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8043CA94 004399D4  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043CA98 004399D8  C0 1E 00 94 */	lfs f0, 0x94(r30)
/* 8043CA9C 004399DC  D0 1E 00 B4 */	stfs f0, 0xb4(r30)
/* 8043CAA0 004399E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043CAA4 004399E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043CAA8 004399E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043CAAC 004399EC  7C 08 03 A6 */	mtlr r0
/* 8043CAB0 004399F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8043CAB4 004399F4  4E 80 00 20 */	blr 
.endfn preProcCenteringCode__Q25P2JME19TRenderingProcessorFUi

.fn preProcCenteringID__Q25P2JME19TRenderingProcessorFUiUi, global
/* 8043CAB8 004399F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8043CABC 004399FC  7C 08 02 A6 */	mflr r0
/* 8043CAC0 00439A00  39 40 00 00 */	li r10, 0
/* 8043CAC4 00439A04  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043CAC8 00439A08  90 01 00 24 */	stw r0, 0x24(r1)
/* 8043CACC 00439A0C  38 00 00 04 */	li r0, 4
/* 8043CAD0 00439A10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8043CAD4 00439A14  7C BF 2B 78 */	mr r31, r5
/* 8043CAD8 00439A18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8043CADC 00439A1C  7C 9E 23 78 */	mr r30, r4
/* 8043CAE0 00439A20  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8043CAE4 00439A24  7C 7D 1B 78 */	mr r29, r3
/* 8043CAE8 00439A28  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 8043CAEC 00439A2C  60 63 00 01 */	ori r3, r3, 1
/* 8043CAF0 00439A30  90 7D 00 8C */	stw r3, 0x8c(r29)
/* 8043CAF4 00439A34  99 5D 00 A4 */	stb r10, 0xa4(r29)
/* 8043CAF8 00439A38  7C 09 03 A6 */	mtctr r0
.L_8043CAFC:
/* 8043CAFC 00439A3C  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB00 00439A40  39 2A 00 04 */	addi r9, r10, 4
/* 8043CB04 00439A44  39 0A 00 08 */	addi r8, r10, 8
/* 8043CB08 00439A48  38 EA 00 0C */	addi r7, r10, 0xc
/* 8043CB0C 00439A4C  7C 03 55 2E */	stfsx f0, r3, r10
/* 8043CB10 00439A50  38 CA 00 10 */	addi r6, r10, 0x10
/* 8043CB14 00439A54  38 AA 00 14 */	addi r5, r10, 0x14
/* 8043CB18 00439A58  38 8A 00 18 */	addi r4, r10, 0x18
/* 8043CB1C 00439A5C  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB20 00439A60  38 0A 00 1C */	addi r0, r10, 0x1c
/* 8043CB24 00439A64  7C 03 4D 2E */	stfsx f0, r3, r9
/* 8043CB28 00439A68  39 2A 00 24 */	addi r9, r10, 0x24
/* 8043CB2C 00439A6C  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB30 00439A70  7C 03 45 2E */	stfsx f0, r3, r8
/* 8043CB34 00439A74  39 0A 00 28 */	addi r8, r10, 0x28
/* 8043CB38 00439A78  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB3C 00439A7C  7C 03 3D 2E */	stfsx f0, r3, r7
/* 8043CB40 00439A80  38 EA 00 2C */	addi r7, r10, 0x2c
/* 8043CB44 00439A84  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB48 00439A88  7C 03 35 2E */	stfsx f0, r3, r6
/* 8043CB4C 00439A8C  38 CA 00 30 */	addi r6, r10, 0x30
/* 8043CB50 00439A90  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB54 00439A94  7C 03 2D 2E */	stfsx f0, r3, r5
/* 8043CB58 00439A98  38 AA 00 34 */	addi r5, r10, 0x34
/* 8043CB5C 00439A9C  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB60 00439AA0  7C 03 25 2E */	stfsx f0, r3, r4
/* 8043CB64 00439AA4  38 8A 00 38 */	addi r4, r10, 0x38
/* 8043CB68 00439AA8  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB6C 00439AAC  7C 03 05 2E */	stfsx f0, r3, r0
/* 8043CB70 00439AB0  38 0A 00 3C */	addi r0, r10, 0x3c
/* 8043CB74 00439AB4  39 4A 00 20 */	addi r10, r10, 0x20
/* 8043CB78 00439AB8  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB7C 00439ABC  7C 03 55 2E */	stfsx f0, r3, r10
/* 8043CB80 00439AC0  39 4A 00 20 */	addi r10, r10, 0x20
/* 8043CB84 00439AC4  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB88 00439AC8  7C 03 4D 2E */	stfsx f0, r3, r9
/* 8043CB8C 00439ACC  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB90 00439AD0  7C 03 45 2E */	stfsx f0, r3, r8
/* 8043CB94 00439AD4  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CB98 00439AD8  7C 03 3D 2E */	stfsx f0, r3, r7
/* 8043CB9C 00439ADC  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CBA0 00439AE0  7C 03 35 2E */	stfsx f0, r3, r6
/* 8043CBA4 00439AE4  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CBA8 00439AE8  7C 03 2D 2E */	stfsx f0, r3, r5
/* 8043CBAC 00439AEC  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CBB0 00439AF0  7C 03 25 2E */	stfsx f0, r3, r4
/* 8043CBB4 00439AF4  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CBB8 00439AF8  7C 03 05 2E */	stfsx f0, r3, r0
/* 8043CBBC 00439AFC  42 00 FF 40 */	bdnz .L_8043CAFC
/* 8043CBC0 00439B00  39 60 00 00 */	li r11, 0
/* 8043CBC4 00439B04  38 00 00 04 */	li r0, 4
/* 8043CBC8 00439B08  99 7D 00 A5 */	stb r11, 0xa5(r29)
/* 8043CBCC 00439B0C  7C 09 03 A6 */	mtctr r0
.L_8043CBD0:
/* 8043CBD0 00439B10  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CBD4 00439B14  38 60 00 00 */	li r3, 0
/* 8043CBD8 00439B18  39 4B 00 01 */	addi r10, r11, 1
/* 8043CBDC 00439B1C  39 2B 00 02 */	addi r9, r11, 2
/* 8043CBE0 00439B20  7C 64 59 AE */	stbx r3, r4, r11
/* 8043CBE4 00439B24  39 0B 00 03 */	addi r8, r11, 3
/* 8043CBE8 00439B28  38 EB 00 04 */	addi r7, r11, 4
/* 8043CBEC 00439B2C  38 CB 00 05 */	addi r6, r11, 5
/* 8043CBF0 00439B30  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CBF4 00439B34  38 AB 00 06 */	addi r5, r11, 6
/* 8043CBF8 00439B38  38 0B 00 07 */	addi r0, r11, 7
/* 8043CBFC 00439B3C  7C 64 51 AE */	stbx r3, r4, r10
/* 8043CC00 00439B40  39 4B 00 09 */	addi r10, r11, 9
/* 8043CC04 00439B44  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC08 00439B48  7C 64 49 AE */	stbx r3, r4, r9
/* 8043CC0C 00439B4C  39 2B 00 0A */	addi r9, r11, 0xa
/* 8043CC10 00439B50  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC14 00439B54  7C 64 41 AE */	stbx r3, r4, r8
/* 8043CC18 00439B58  39 0B 00 0B */	addi r8, r11, 0xb
/* 8043CC1C 00439B5C  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC20 00439B60  7C 64 39 AE */	stbx r3, r4, r7
/* 8043CC24 00439B64  38 EB 00 0C */	addi r7, r11, 0xc
/* 8043CC28 00439B68  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC2C 00439B6C  7C 64 31 AE */	stbx r3, r4, r6
/* 8043CC30 00439B70  38 CB 00 0D */	addi r6, r11, 0xd
/* 8043CC34 00439B74  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC38 00439B78  7C 64 29 AE */	stbx r3, r4, r5
/* 8043CC3C 00439B7C  38 AB 00 0E */	addi r5, r11, 0xe
/* 8043CC40 00439B80  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC44 00439B84  7C 64 01 AE */	stbx r3, r4, r0
/* 8043CC48 00439B88  38 0B 00 0F */	addi r0, r11, 0xf
/* 8043CC4C 00439B8C  39 6B 00 08 */	addi r11, r11, 8
/* 8043CC50 00439B90  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC54 00439B94  7C 64 59 AE */	stbx r3, r4, r11
/* 8043CC58 00439B98  39 6B 00 08 */	addi r11, r11, 8
/* 8043CC5C 00439B9C  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC60 00439BA0  7C 64 51 AE */	stbx r3, r4, r10
/* 8043CC64 00439BA4  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC68 00439BA8  7C 64 49 AE */	stbx r3, r4, r9
/* 8043CC6C 00439BAC  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC70 00439BB0  7C 64 41 AE */	stbx r3, r4, r8
/* 8043CC74 00439BB4  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC78 00439BB8  7C 64 39 AE */	stbx r3, r4, r7
/* 8043CC7C 00439BBC  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC80 00439BC0  7C 64 31 AE */	stbx r3, r4, r6
/* 8043CC84 00439BC4  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC88 00439BC8  7C 64 29 AE */	stbx r3, r4, r5
/* 8043CC8C 00439BCC  80 9D 00 AC */	lwz r4, 0xac(r29)
/* 8043CC90 00439BD0  7C 64 01 AE */	stbx r3, r4, r0
/* 8043CC94 00439BD4  42 00 FF 3C */	bdnz .L_8043CBD0
/* 8043CC98 00439BD8  38 00 00 02 */	li r0, 2
/* 8043CC9C 00439BDC  7C 09 03 A6 */	mtctr r0
.L_8043CCA0:
/* 8043CCA0 00439BE0  80 9D 00 B0 */	lwz r4, 0xb0(r29)
/* 8043CCA4 00439BE4  39 80 00 00 */	li r12, 0
/* 8043CCA8 00439BE8  38 03 00 01 */	addi r0, r3, 1
/* 8043CCAC 00439BEC  39 43 00 02 */	addi r10, r3, 2
/* 8043CCB0 00439BF0  7D 84 19 AE */	stbx r12, r4, r3
/* 8043CCB4 00439BF4  39 23 00 03 */	addi r9, r3, 3
/* 8043CCB8 00439BF8  39 03 00 04 */	addi r8, r3, 4
/* 8043CCBC 00439BFC  38 E3 00 05 */	addi r7, r3, 5
/* 8043CCC0 00439C00  81 7D 00 B0 */	lwz r11, 0xb0(r29)
/* 8043CCC4 00439C04  38 C3 00 06 */	addi r6, r3, 6
/* 8043CCC8 00439C08  38 A3 00 07 */	addi r5, r3, 7
/* 8043CCCC 00439C0C  38 83 00 08 */	addi r4, r3, 8
/* 8043CCD0 00439C10  7D 8B 01 AE */	stbx r12, r11, r0
/* 8043CCD4 00439C14  38 03 00 09 */	addi r0, r3, 9
/* 8043CCD8 00439C18  38 63 00 0A */	addi r3, r3, 0xa
/* 8043CCDC 00439C1C  81 7D 00 B0 */	lwz r11, 0xb0(r29)
/* 8043CCE0 00439C20  7D 8B 51 AE */	stbx r12, r11, r10
/* 8043CCE4 00439C24  81 5D 00 B0 */	lwz r10, 0xb0(r29)
/* 8043CCE8 00439C28  7D 8A 49 AE */	stbx r12, r10, r9
/* 8043CCEC 00439C2C  81 3D 00 B0 */	lwz r9, 0xb0(r29)
/* 8043CCF0 00439C30  7D 89 41 AE */	stbx r12, r9, r8
/* 8043CCF4 00439C34  81 1D 00 B0 */	lwz r8, 0xb0(r29)
/* 8043CCF8 00439C38  7D 88 39 AE */	stbx r12, r8, r7
/* 8043CCFC 00439C3C  80 FD 00 B0 */	lwz r7, 0xb0(r29)
/* 8043CD00 00439C40  7D 87 31 AE */	stbx r12, r7, r6
/* 8043CD04 00439C44  80 DD 00 B0 */	lwz r6, 0xb0(r29)
/* 8043CD08 00439C48  7D 86 29 AE */	stbx r12, r6, r5
/* 8043CD0C 00439C4C  80 BD 00 B0 */	lwz r5, 0xb0(r29)
/* 8043CD10 00439C50  7D 85 21 AE */	stbx r12, r5, r4
/* 8043CD14 00439C54  80 9D 00 B0 */	lwz r4, 0xb0(r29)
/* 8043CD18 00439C58  7D 84 01 AE */	stbx r12, r4, r0
/* 8043CD1C 00439C5C  42 00 FF 84 */	bdnz .L_8043CCA0
/* 8043CD20 00439C60  C0 02 25 60 */	lfs f0, lbl_805208C0@sda21(r2)
/* 8043CD24 00439C64  7F A3 EB 78 */	mr r3, r29
/* 8043CD28 00439C68  38 80 00 00 */	li r4, 0
/* 8043CD2C 00439C6C  D0 1D 00 B4 */	stfs f0, 0xb4(r29)
/* 8043CD30 00439C70  4B BC A4 29 */	bl reset___Q28JMessage10TProcessorFPCc
/* 8043CD34 00439C74  7F A3 EB 78 */	mr r3, r29
/* 8043CD38 00439C78  7F C4 F3 78 */	mr r4, r30
/* 8043CD3C 00439C7C  7F E5 FB 78 */	mr r5, r31
/* 8043CD40 00439C80  38 C0 00 00 */	li r6, 0
/* 8043CD44 00439C84  4B BC A1 1D */	bl setBegin_messageID__Q28JMessage10TProcessorFUlUlPb
/* 8043CD48 00439C88  7F A3 EB 78 */	mr r3, r29
/* 8043CD4C 00439C8C  38 80 00 00 */	li r4, 0
/* 8043CD50 00439C90  4B BC B4 09 */	bl process__Q28JMessage19TRenderingProcessorFPCc
/* 8043CD54 00439C94  80 1D 00 8C */	lwz r0, 0x8c(r29)
/* 8043CD58 00439C98  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043CD5C 00439C9C  41 82 00 18 */	beq .L_8043CD74
/* 8043CD60 00439CA0  88 1D 00 A4 */	lbz r0, 0xa4(r29)
/* 8043CD64 00439CA4  C0 1D 00 90 */	lfs f0, 0x90(r29)
/* 8043CD68 00439CA8  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8043CD6C 00439CAC  54 00 10 3A */	slwi r0, r0, 2
/* 8043CD70 00439CB0  7C 03 05 2E */	stfsx f0, r3, r0
.L_8043CD74:
/* 8043CD74 00439CB4  7F A3 EB 78 */	mr r3, r29
/* 8043CD78 00439CB8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8043CD7C 00439CBC  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8043CD80 00439CC0  7D 89 03 A6 */	mtctr r12
/* 8043CD84 00439CC4  4E 80 04 21 */	bctrl 
/* 8043CD88 00439CC8  80 1D 00 8C */	lwz r0, 0x8c(r29)
/* 8043CD8C 00439CCC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8043CD90 00439CD0  41 82 00 34 */	beq .L_8043CDC4
/* 8043CD94 00439CD4  38 80 00 00 */	li r4, 0
/* 8043CD98 00439CD8  48 00 00 20 */	b .L_8043CDB8
.L_8043CD9C:
/* 8043CD9C 00439CDC  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8043CDA0 00439CE0  7C 03 20 AE */	lbzx r0, r3, r4
/* 8043CDA4 00439CE4  28 00 00 00 */	cmplwi r0, 0
/* 8043CDA8 00439CE8  40 82 00 0C */	bne .L_8043CDB4
/* 8043CDAC 00439CEC  88 1D 00 A5 */	lbz r0, 0xa5(r29)
/* 8043CDB0 00439CF0  7C 03 21 AE */	stbx r0, r3, r4
.L_8043CDB4:
/* 8043CDB4 00439CF4  38 84 00 01 */	addi r4, r4, 1
.L_8043CDB8:
/* 8043CDB8 00439CF8  88 1D 00 A4 */	lbz r0, 0xa4(r29)
/* 8043CDBC 00439CFC  7C 04 00 00 */	cmpw r4, r0
/* 8043CDC0 00439D00  41 80 FF DC */	blt .L_8043CD9C
.L_8043CDC4:
/* 8043CDC4 00439D04  80 1D 00 8C */	lwz r0, 0x8c(r29)
/* 8043CDC8 00439D08  54 00 00 C7 */	rlwinm. r0, r0, 0, 3, 3
/* 8043CDCC 00439D0C  40 82 00 68 */	bne .L_8043CE34
/* 8043CDD0 00439D10  88 1D 00 A6 */	lbz r0, 0xa6(r29)
/* 8043CDD4 00439D14  28 00 00 0A */	cmplwi r0, 0xa
/* 8043CDD8 00439D18  41 80 00 20 */	blt .L_8043CDF8
/* 8043CDDC 00439D1C  3C 60 80 4A */	lis r3, lbl_8049ABE8@ha
/* 8043CDE0 00439D20  3C A0 80 4A */	lis r5, lbl_8049AC00@ha
/* 8043CDE4 00439D24  38 63 AB E8 */	addi r3, r3, lbl_8049ABE8@l
/* 8043CDE8 00439D28  38 80 06 25 */	li r4, 0x625
/* 8043CDEC 00439D2C  38 A5 AC 00 */	addi r5, r5, lbl_8049AC00@l
/* 8043CDF0 00439D30  4C C6 31 82 */	crclr 6
/* 8043CDF4 00439D34  4B BE D8 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043CDF8:
/* 8043CDF8 00439D38  88 1D 00 A6 */	lbz r0, 0xa6(r29)
/* 8043CDFC 00439D3C  88 9D 00 A4 */	lbz r4, 0xa4(r29)
/* 8043CE00 00439D40  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 8043CE04 00439D44  54 00 08 3C */	slwi r0, r0, 1
/* 8043CE08 00439D48  38 84 FF FF */	addi r4, r4, -1
/* 8043CE0C 00439D4C  7C 63 02 14 */	add r3, r3, r0
/* 8043CE10 00439D50  98 83 00 01 */	stb r4, 1(r3)
/* 8043CE14 00439D54  88 1D 00 A6 */	lbz r0, 0xa6(r29)
/* 8043CE18 00439D58  28 00 00 09 */	cmplwi r0, 9
/* 8043CE1C 00439D5C  40 80 00 18 */	bge .L_8043CE34
/* 8043CE20 00439D60  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 8043CE24 00439D64  54 00 0D FC */	rlwinm r0, r0, 1, 0x17, 0x1e
/* 8043CE28 00439D68  88 9D 00 A4 */	lbz r4, 0xa4(r29)
/* 8043CE2C 00439D6C  7C 63 02 14 */	add r3, r3, r0
/* 8043CE30 00439D70  98 83 00 02 */	stb r4, 2(r3)
.L_8043CE34:
/* 8043CE34 00439D74  80 1D 00 8C */	lwz r0, 0x8c(r29)
/* 8043CE38 00439D78  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8043CE3C 00439D7C  90 1D 00 8C */	stw r0, 0x8c(r29)
/* 8043CE40 00439D80  C0 1D 00 94 */	lfs f0, 0x94(r29)
/* 8043CE44 00439D84  D0 1D 00 B4 */	stfs f0, 0xb4(r29)
/* 8043CE48 00439D88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8043CE4C 00439D8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8043CE50 00439D90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8043CE54 00439D94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8043CE58 00439D98  7C 08 03 A6 */	mtlr r0
/* 8043CE5C 00439D9C  38 21 00 20 */	addi r1, r1, 0x20
/* 8043CE60 00439DA0  4E 80 00 20 */	blr 
.endfn preProcCenteringID__Q25P2JME19TRenderingProcessorFUiUi

.fn setFont__Q25P2JME19TRenderingProcessorFP7JUTFont, global
/* 8043CE64 00439DA4  90 83 00 4C */	stw r4, 0x4c(r3)
/* 8043CE68 00439DA8  4E 80 00 20 */	blr 
.endfn setFont__Q25P2JME19TRenderingProcessorFP7JUTFont

.fn setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane, global
/* 8043CE6C 00439DAC  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8043CE70 00439DB0  7C 08 02 A6 */	mflr r0
/* 8043CE74 00439DB4  90 01 00 94 */	stw r0, 0x94(r1)
/* 8043CE78 00439DB8  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8043CE7C 00439DBC  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8043CE80 00439DC0  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8043CE84 00439DC4  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8043CE88 00439DC8  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8043CE8C 00439DCC  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8043CE90 00439DD0  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8043CE94 00439DD4  93 81 00 60 */	stw r28, 0x60(r1)
/* 8043CE98 00439DD8  7C 9F 23 78 */	mr r31, r4
/* 8043CE9C 00439DDC  7C 7E 1B 78 */	mr r30, r3
/* 8043CEA0 00439DE0  7F E3 FB 78 */	mr r3, r31
/* 8043CEA4 00439DE4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8043CEA8 00439DE8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8043CEAC 00439DEC  7D 89 03 A6 */	mtctr r12
/* 8043CEB0 00439DF0  4E 80 04 21 */	bctrl 
/* 8043CEB4 00439DF4  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8043CEB8 00439DF8  28 00 00 13 */	cmplwi r0, 0x13
/* 8043CEBC 00439DFC  41 82 00 20 */	beq .L_8043CEDC
/* 8043CEC0 00439E00  3C 60 80 4A */	lis r3, lbl_8049ABE8@ha
/* 8043CEC4 00439E04  3C A0 80 4A */	lis r5, lbl_8049AC00@ha
/* 8043CEC8 00439E08  38 63 AB E8 */	addi r3, r3, lbl_8049ABE8@l
/* 8043CECC 00439E0C  38 80 06 97 */	li r4, 0x697
/* 8043CED0 00439E10  38 A5 AC 00 */	addi r5, r5, lbl_8049AC00@l
/* 8043CED4 00439E14  4C C6 31 82 */	crclr 6
/* 8043CED8 00439E18  4B BE D7 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043CEDC:
/* 8043CEDC 00439E1C  7F E3 FB 78 */	mr r3, r31
/* 8043CEE0 00439E20  81 9F 00 00 */	lwz r12, 0(r31)
/* 8043CEE4 00439E24  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8043CEE8 00439E28  7D 89 03 A6 */	mtctr r12
/* 8043CEEC 00439E2C  4E 80 04 21 */	bctrl 
/* 8043CEF0 00439E30  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8043CEF4 00439E34  28 00 00 13 */	cmplwi r0, 0x13
/* 8043CEF8 00439E38  40 82 03 90 */	bne .L_8043D288
/* 8043CEFC 00439E3C  7F E4 FB 78 */	mr r4, r31
/* 8043CF00 00439E40  3B 80 FF FF */	li r28, -1
/* 8043CF04 00439E44  81 9F 00 00 */	lwz r12, 0(r31)
/* 8043CF08 00439E48  38 61 00 34 */	addi r3, r1, 0x34
/* 8043CF0C 00439E4C  93 81 00 40 */	stw r28, 0x40(r1)
/* 8043CF10 00439E50  89 7F 01 04 */	lbz r11, 0x104(r31)
/* 8043CF14 00439E54  89 5F 01 05 */	lbz r10, 0x105(r31)
/* 8043CF18 00439E58  89 3F 01 06 */	lbz r9, 0x106(r31)
/* 8043CF1C 00439E5C  89 1F 01 07 */	lbz r8, 0x107(r31)
/* 8043CF20 00439E60  93 81 00 44 */	stw r28, 0x44(r1)
/* 8043CF24 00439E64  88 FF 01 08 */	lbz r7, 0x108(r31)
/* 8043CF28 00439E68  88 DF 01 09 */	lbz r6, 0x109(r31)
/* 8043CF2C 00439E6C  88 BF 01 0A */	lbz r5, 0x10a(r31)
/* 8043CF30 00439E70  88 1F 01 0B */	lbz r0, 0x10b(r31)
/* 8043CF34 00439E74  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 8043CF38 00439E78  99 61 00 40 */	stb r11, 0x40(r1)
/* 8043CF3C 00439E7C  99 41 00 41 */	stb r10, 0x41(r1)
/* 8043CF40 00439E80  99 21 00 42 */	stb r9, 0x42(r1)
/* 8043CF44 00439E84  99 01 00 43 */	stb r8, 0x43(r1)
/* 8043CF48 00439E88  98 E1 00 44 */	stb r7, 0x44(r1)
/* 8043CF4C 00439E8C  98 C1 00 45 */	stb r6, 0x45(r1)
/* 8043CF50 00439E90  98 A1 00 46 */	stb r5, 0x46(r1)
/* 8043CF54 00439E94  98 01 00 47 */	stb r0, 0x47(r1)
/* 8043CF58 00439E98  93 81 00 3C */	stw r28, 0x3c(r1)
/* 8043CF5C 00439E9C  93 81 00 38 */	stw r28, 0x38(r1)
/* 8043CF60 00439EA0  7D 89 03 A6 */	mtctr r12
/* 8043CF64 00439EA4  4E 80 04 21 */	bctrl 
/* 8043CF68 00439EA8  7F E4 FB 78 */	mr r4, r31
/* 8043CF6C 00439EAC  88 E1 00 34 */	lbz r7, 0x34(r1)
/* 8043CF70 00439EB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8043CF74 00439EB4  38 61 00 30 */	addi r3, r1, 0x30
/* 8043CF78 00439EB8  88 C1 00 35 */	lbz r6, 0x35(r1)
/* 8043CF7C 00439EBC  88 A1 00 36 */	lbz r5, 0x36(r1)
/* 8043CF80 00439EC0  88 01 00 37 */	lbz r0, 0x37(r1)
/* 8043CF84 00439EC4  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8043CF88 00439EC8  98 E1 00 38 */	stb r7, 0x38(r1)
/* 8043CF8C 00439ECC  98 C1 00 39 */	stb r6, 0x39(r1)
/* 8043CF90 00439ED0  98 A1 00 3A */	stb r5, 0x3a(r1)
/* 8043CF94 00439ED4  98 01 00 3B */	stb r0, 0x3b(r1)
/* 8043CF98 00439ED8  7D 89 03 A6 */	mtctr r12
/* 8043CF9C 00439EDC  4E 80 04 21 */	bctrl 
/* 8043CFA0 00439EE0  88 7F 00 B3 */	lbz r3, 0xb3(r31)
/* 8043CFA4 00439EE4  3C 00 43 30 */	lis r0, 0x4330
/* 8043CFA8 00439EE8  83 81 00 38 */	lwz r28, 0x38(r1)
/* 8043CFAC 00439EEC  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8043CFB0 00439EF0  83 A1 00 40 */	lwz r29, 0x40(r1)
/* 8043CFB4 00439EF4  90 01 00 48 */	stw r0, 0x48(r1)
/* 8043CFB8 00439EF8  C8 42 25 78 */	lfd f2, lbl_805208D8@sda21(r2)
/* 8043CFBC 00439EFC  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 8043CFC0 00439F00  C0 02 25 84 */	lfs f0, lbl_805208E4@sda21(r2)
/* 8043CFC4 00439F04  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043CFC8 00439F08  93 81 00 18 */	stw r28, 0x18(r1)
/* 8043CFCC 00439F0C  81 81 00 44 */	lwz r12, 0x44(r1)
/* 8043CFD0 00439F10  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8043CFD4 00439F14  EC 01 00 24 */	fdivs f0, f1, f0
/* 8043CFD8 00439F18  88 A1 00 30 */	lbz r5, 0x30(r1)
/* 8043CFDC 00439F1C  91 81 00 10 */	stw r12, 0x10(r1)
/* 8043CFE0 00439F20  88 81 00 31 */	lbz r4, 0x31(r1)
/* 8043CFE4 00439F24  93 81 00 0C */	stw r28, 0xc(r1)
/* 8043CFE8 00439F28  88 61 00 32 */	lbz r3, 0x32(r1)
/* 8043CFEC 00439F2C  88 01 00 33 */	lbz r0, 0x33(r1)
/* 8043CFF0 00439F30  98 A1 00 3C */	stb r5, 0x3c(r1)
/* 8043CFF4 00439F34  88 A1 00 18 */	lbz r5, 0x18(r1)
/* 8043CFF8 00439F38  98 81 00 3D */	stb r4, 0x3d(r1)
/* 8043CFFC 00439F3C  88 81 00 19 */	lbz r4, 0x19(r1)
/* 8043D000 00439F40  98 61 00 3E */	stb r3, 0x3e(r1)
/* 8043D004 00439F44  88 61 00 1A */	lbz r3, 0x1a(r1)
/* 8043D008 00439F48  98 01 00 3F */	stb r0, 0x3f(r1)
/* 8043D00C 00439F4C  89 41 00 1B */	lbz r10, 0x1b(r1)
/* 8043D010 00439F50  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8043D014 00439F54  D0 1E 00 78 */	stfs f0, 0x78(r30)
/* 8043D018 00439F58  89 21 00 14 */	lbz r9, 0x14(r1)
/* 8043D01C 00439F5C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8043D020 00439F60  89 01 00 15 */	lbz r8, 0x15(r1)
/* 8043D024 00439F64  88 E1 00 1C */	lbz r7, 0x1c(r1)
/* 8043D028 00439F68  88 C1 00 1D */	lbz r6, 0x1d(r1)
/* 8043D02C 00439F6C  98 FE 00 60 */	stb r7, 0x60(r30)
/* 8043D030 00439F70  88 E1 00 1E */	lbz r7, 0x1e(r1)
/* 8043D034 00439F74  98 DE 00 61 */	stb r6, 0x61(r30)
/* 8043D038 00439F78  88 C1 00 1F */	lbz r6, 0x1f(r1)
/* 8043D03C 00439F7C  98 FE 00 62 */	stb r7, 0x62(r30)
/* 8043D040 00439F80  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8043D044 00439F84  98 DE 00 63 */	stb r6, 0x63(r30)
/* 8043D048 00439F88  88 C1 00 17 */	lbz r6, 0x17(r1)
/* 8043D04C 00439F8C  98 BE 00 5C */	stb r5, 0x5c(r30)
/* 8043D050 00439F90  88 A1 00 10 */	lbz r5, 0x10(r1)
/* 8043D054 00439F94  98 9E 00 5D */	stb r4, 0x5d(r30)
/* 8043D058 00439F98  88 81 00 11 */	lbz r4, 0x11(r1)
/* 8043D05C 00439F9C  98 7E 00 5E */	stb r3, 0x5e(r30)
/* 8043D060 00439FA0  88 61 00 12 */	lbz r3, 0x12(r1)
/* 8043D064 00439FA4  99 5E 00 5F */	stb r10, 0x5f(r30)
/* 8043D068 00439FA8  89 61 00 13 */	lbz r11, 0x13(r1)
/* 8043D06C 00439FAC  99 3E 00 D4 */	stb r9, 0xd4(r30)
/* 8043D070 00439FB0  89 41 00 0C */	lbz r10, 0xc(r1)
/* 8043D074 00439FB4  99 1E 00 D5 */	stb r8, 0xd5(r30)
/* 8043D078 00439FB8  89 21 00 0D */	lbz r9, 0xd(r1)
/* 8043D07C 00439FBC  90 01 00 08 */	stw r0, 8(r1)
/* 8043D080 00439FC0  89 01 00 0E */	lbz r8, 0xe(r1)
/* 8043D084 00439FC4  98 FE 00 D6 */	stb r7, 0xd6(r30)
/* 8043D088 00439FC8  88 E1 00 0F */	lbz r7, 0xf(r1)
/* 8043D08C 00439FCC  98 DE 00 D7 */	stb r6, 0xd7(r30)
/* 8043D090 00439FD0  88 C1 00 08 */	lbz r6, 8(r1)
/* 8043D094 00439FD4  98 BE 00 D8 */	stb r5, 0xd8(r30)
/* 8043D098 00439FD8  88 A1 00 09 */	lbz r5, 9(r1)
/* 8043D09C 00439FDC  98 9E 00 D9 */	stb r4, 0xd9(r30)
/* 8043D0A0 00439FE0  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8043D0A4 00439FE4  98 7E 00 DA */	stb r3, 0xda(r30)
/* 8043D0A8 00439FE8  88 61 00 0B */	lbz r3, 0xb(r1)
/* 8043D0AC 00439FEC  99 7E 00 DB */	stb r11, 0xdb(r30)
/* 8043D0B0 00439FF0  99 5E 00 CC */	stb r10, 0xcc(r30)
/* 8043D0B4 00439FF4  99 3E 00 CD */	stb r9, 0xcd(r30)
/* 8043D0B8 00439FF8  99 1E 00 CE */	stb r8, 0xce(r30)
/* 8043D0BC 00439FFC  98 FE 00 CF */	stb r7, 0xcf(r30)
/* 8043D0C0 0043A000  98 DE 00 D0 */	stb r6, 0xd0(r30)
/* 8043D0C4 0043A004  98 BE 00 D1 */	stb r5, 0xd1(r30)
/* 8043D0C8 0043A008  98 9E 00 D2 */	stb r4, 0xd2(r30)
/* 8043D0CC 0043A00C  98 7E 00 D3 */	stb r3, 0xd3(r30)
/* 8043D0D0 0043A010  C0 1F 01 14 */	lfs f0, 0x114(r31)
/* 8043D0D4 0043A014  93 A1 00 2C */	stw r29, 0x2c(r1)
/* 8043D0D8 0043A018  D0 1E 00 BC */	stfs f0, 0xbc(r30)
/* 8043D0DC 0043A01C  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 8043D0E0 0043A020  C0 1F 01 18 */	lfs f0, 0x118(r31)
/* 8043D0E4 0043A024  91 81 00 28 */	stw r12, 0x28(r1)
/* 8043D0E8 0043A028  D0 1E 00 C0 */	stfs f0, 0xc0(r30)
/* 8043D0EC 0043A02C  D0 1E 00 C8 */	stfs f0, 0xc8(r30)
/* 8043D0F0 0043A030  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8043D0F4 0043A034  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 8043D0F8 0043A038  93 81 00 24 */	stw r28, 0x24(r1)
/* 8043D0FC 0043A03C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8043D100 0043A040  90 01 00 20 */	stw r0, 0x20(r1)
/* 8043D104 0043A044  D0 1E 00 38 */	stfs f0, 0x38(r30)
/* 8043D108 0043A048  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 8043D10C 0043A04C  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 8043D110 0043A050  EC 01 00 28 */	fsubs f0, f1, f0
/* 8043D114 0043A054  D0 1E 00 3C */	stfs f0, 0x3c(r30)
/* 8043D118 0043A058  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8043D11C 0043A05C  C3 FF 01 1C */	lfs f31, 0x11c(r31)
/* 8043D120 0043A060  81 83 00 00 */	lwz r12, 0(r3)
/* 8043D124 0043A064  C3 DF 01 20 */	lfs f30, 0x120(r31)
/* 8043D128 0043A068  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8043D12C 0043A06C  7D 89 03 A6 */	mtctr r12
/* 8043D130 0043A070  4E 80 04 21 */	bctrl 
/* 8043D134 0043A074  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043D138 0043A078  3C 00 43 30 */	lis r0, 0x4330
/* 8043D13C 0043A07C  90 61 00 54 */	stw r3, 0x54(r1)
/* 8043D140 0043A080  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043D144 0043A084  90 01 00 50 */	stw r0, 0x50(r1)
/* 8043D148 0043A088  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8043D14C 0043A08C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043D150 0043A090  EC 1F 00 24 */	fdivs f0, f31, f0
/* 8043D154 0043A094  D0 1E 00 E8 */	stfs f0, 0xe8(r30)
/* 8043D158 0043A098  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8043D15C 0043A09C  81 83 00 00 */	lwz r12, 0(r3)
/* 8043D160 0043A0A0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8043D164 0043A0A4  7D 89 03 A6 */	mtctr r12
/* 8043D168 0043A0A8  4E 80 04 21 */	bctrl 
/* 8043D16C 0043A0AC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8043D170 0043A0B0  3C 00 43 30 */	lis r0, 0x4330
/* 8043D174 0043A0B4  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8043D178 0043A0B8  C8 22 25 70 */	lfd f1, lbl_805208D0@sda21(r2)
/* 8043D17C 0043A0BC  90 01 00 58 */	stw r0, 0x58(r1)
/* 8043D180 0043A0C0  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 8043D184 0043A0C4  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043D188 0043A0C8  EC 1E 00 24 */	fdivs f0, f30, f0
/* 8043D18C 0043A0CC  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 8043D190 0043A0D0  88 1F 01 30 */	lbz r0, 0x130(r31)
/* 8043D194 0043A0D4  54 00 F7 BE */	rlwinm r0, r0, 0x1e, 0x1e, 0x1f
/* 8043D198 0043A0D8  2C 00 00 01 */	cmpwi r0, 1
/* 8043D19C 0043A0DC  41 82 00 58 */	beq .L_8043D1F4
/* 8043D1A0 0043A0E0  40 80 00 10 */	bge .L_8043D1B0
/* 8043D1A4 0043A0E4  2C 00 00 00 */	cmpwi r0, 0
/* 8043D1A8 0043A0E8  40 80 00 14 */	bge .L_8043D1BC
/* 8043D1AC 0043A0EC  48 00 00 60 */	b .L_8043D20C
.L_8043D1B0:
/* 8043D1B0 0043A0F0  2C 00 00 03 */	cmpwi r0, 3
/* 8043D1B4 0043A0F4  40 80 00 58 */	bge .L_8043D20C
/* 8043D1B8 0043A0F8  48 00 00 20 */	b .L_8043D1D8
.L_8043D1BC:
/* 8043D1BC 0043A0FC  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D1C0 0043A100  54 00 07 30 */	rlwinm r0, r0, 0, 0x1c, 0x18
/* 8043D1C4 0043A104  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D1C8 0043A108  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D1CC 0043A10C  60 00 00 20 */	ori r0, r0, 0x20
/* 8043D1D0 0043A110  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D1D4 0043A114  48 00 00 38 */	b .L_8043D20C
.L_8043D1D8:
/* 8043D1D8 0043A118  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D1DC 0043A11C  54 00 07 30 */	rlwinm r0, r0, 0, 0x1c, 0x18
/* 8043D1E0 0043A120  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D1E4 0043A124  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D1E8 0043A128  60 00 00 10 */	ori r0, r0, 0x10
/* 8043D1EC 0043A12C  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D1F0 0043A130  48 00 00 1C */	b .L_8043D20C
.L_8043D1F4:
/* 8043D1F4 0043A134  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D1F8 0043A138  54 00 07 30 */	rlwinm r0, r0, 0, 0x1c, 0x18
/* 8043D1FC 0043A13C  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D200 0043A140  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D204 0043A144  60 00 00 40 */	ori r0, r0, 0x40
/* 8043D208 0043A148  90 1E 00 8C */	stw r0, 0x8c(r30)
.L_8043D20C:
/* 8043D20C 0043A14C  88 1F 01 30 */	lbz r0, 0x130(r31)
/* 8043D210 0043A150  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 8043D214 0043A154  2C 00 00 01 */	cmpwi r0, 1
/* 8043D218 0043A158  41 82 00 3C */	beq .L_8043D254
/* 8043D21C 0043A15C  40 80 00 10 */	bge .L_8043D22C
/* 8043D220 0043A160  2C 00 00 00 */	cmpwi r0, 0
/* 8043D224 0043A164  40 80 00 14 */	bge .L_8043D238
/* 8043D228 0043A168  48 00 00 60 */	b .L_8043D288
.L_8043D22C:
/* 8043D22C 0043A16C  2C 00 00 03 */	cmpwi r0, 3
/* 8043D230 0043A170  40 80 00 58 */	bge .L_8043D288
/* 8043D234 0043A174  48 00 00 3C */	b .L_8043D270
.L_8043D238:
/* 8043D238 0043A178  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D23C 0043A17C  54 00 06 28 */	rlwinm r0, r0, 0, 0x18, 0x14
/* 8043D240 0043A180  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D244 0043A184  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D248 0043A188  60 00 02 00 */	ori r0, r0, 0x200
/* 8043D24C 0043A18C  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D250 0043A190  48 00 00 38 */	b .L_8043D288
.L_8043D254:
/* 8043D254 0043A194  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D258 0043A198  54 00 06 28 */	rlwinm r0, r0, 0, 0x18, 0x14
/* 8043D25C 0043A19C  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D260 0043A1A0  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D264 0043A1A4  60 00 04 00 */	ori r0, r0, 0x400
/* 8043D268 0043A1A8  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D26C 0043A1AC  48 00 00 1C */	b .L_8043D288
.L_8043D270:
/* 8043D270 0043A1B0  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D274 0043A1B4  54 00 06 28 */	rlwinm r0, r0, 0, 0x18, 0x14
/* 8043D278 0043A1B8  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043D27C 0043A1BC  80 1E 00 8C */	lwz r0, 0x8c(r30)
/* 8043D280 0043A1C0  60 00 01 00 */	ori r0, r0, 0x100
/* 8043D284 0043A1C4  90 1E 00 8C */	stw r0, 0x8c(r30)
.L_8043D288:
/* 8043D288 0043A1C8  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8043D28C 0043A1CC  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8043D290 0043A1D0  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8043D294 0043A1D4  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8043D298 0043A1D8  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8043D29C 0043A1DC  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8043D2A0 0043A1E0  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8043D2A4 0043A1E4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8043D2A8 0043A1E8  83 81 00 60 */	lwz r28, 0x60(r1)
/* 8043D2AC 0043A1EC  7C 08 03 A6 */	mtlr r0
/* 8043D2B0 0043A1F0  38 21 00 90 */	addi r1, r1, 0x90
/* 8043D2B4 0043A1F4  4E 80 00 20 */	blr 
.endfn setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane

.fn __dt__Q25P2JME19TRenderingProcessorFv, weak
/* 8043D2B8 0043A1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043D2BC 0043A1FC  7C 08 02 A6 */	mflr r0
/* 8043D2C0 0043A200  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043D2C4 0043A204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043D2C8 0043A208  7C 9F 23 78 */	mr r31, r4
/* 8043D2CC 0043A20C  93 C1 00 08 */	stw r30, 8(r1)
/* 8043D2D0 0043A210  7C 7E 1B 79 */	or. r30, r3, r3
/* 8043D2D4 0043A214  41 82 00 38 */	beq .L_8043D30C
/* 8043D2D8 0043A218  3C 80 80 4F */	lis r4, __vt__Q25P2JME19TRenderingProcessor@ha
/* 8043D2DC 0043A21C  38 04 CA B0 */	addi r0, r4, __vt__Q25P2JME19TRenderingProcessor@l
/* 8043D2E0 0043A220  90 1E 00 00 */	stw r0, 0(r30)
/* 8043D2E4 0043A224  41 82 00 18 */	beq .L_8043D2FC
/* 8043D2E8 0043A228  3C A0 80 4F */	lis r5, __vt__Q25P2JME23TRenderingProcessorBase@ha
/* 8043D2EC 0043A22C  38 80 00 00 */	li r4, 0
/* 8043D2F0 0043A230  38 05 CB 34 */	addi r0, r5, __vt__Q25P2JME23TRenderingProcessorBase@l
/* 8043D2F4 0043A234  90 1E 00 00 */	stw r0, 0(r30)
/* 8043D2F8 0043A238  4B BC AE 05 */	bl __dt__Q28JMessage19TRenderingProcessorFv
.L_8043D2FC:
/* 8043D2FC 0043A23C  7F E0 07 35 */	extsh. r0, r31
/* 8043D300 0043A240  40 81 00 0C */	ble .L_8043D30C
/* 8043D304 0043A244  7F C3 F3 78 */	mr r3, r30
/* 8043D308 0043A248  4B BE 6D AD */	bl __dl__FPv
.L_8043D30C:
/* 8043D30C 0043A24C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043D310 0043A250  7F C3 F3 78 */	mr r3, r30
/* 8043D314 0043A254  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043D318 0043A258  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043D31C 0043A25C  7C 08 03 A6 */	mtlr r0
/* 8043D320 0043A260  38 21 00 10 */	addi r1, r1, 0x10
/* 8043D324 0043A264  4E 80 00 20 */	blr 
.endfn __dt__Q25P2JME19TRenderingProcessorFv

.fn do_character__Q25P2JME23TRenderingProcessorBaseFi, weak
/* 8043D328 0043A268  4E 80 00 20 */	blr 
.endfn do_character__Q25P2JME23TRenderingProcessorBaseFi
