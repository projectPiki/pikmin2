.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getAttribute__Q27MapCode4CodeFv
getAttribute__Q27MapCode4CodeFv:
/* 8041C434 00419374  88 03 00 00 */	lbz r0, 0(r3)
/* 8041C438 00419378  54 03 07 3E */	clrlwi r3, r0, 0x1c
/* 8041C43C 0041937C  4E 80 00 20 */	blr 

.global getSlipCode__Q27MapCode4CodeFv
getSlipCode__Q27MapCode4CodeFv:
/* 8041C440 00419380  88 03 00 00 */	lbz r0, 0(r3)
/* 8041C444 00419384  54 03 E7 BE */	rlwinm r3, r0, 0x1c, 0x1e, 0x1f
/* 8041C448 00419388  4E 80 00 20 */	blr 

.global isBald__Q27MapCode4CodeFv
isBald__Q27MapCode4CodeFv:
/* 8041C44C 0041938C  88 03 00 00 */	lbz r0, 0(r3)
/* 8041C450 00419390  54 03 D7 FE */	rlwinm r3, r0, 0x1a, 0x1f, 0x1f
/* 8041C454 00419394  4E 80 00 20 */	blr 

.global setCode__Q27MapCode4CodeFiib
setCode__Q27MapCode4CodeFiib:
/* 8041C458 00419398  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8041C45C 0041939C  54 A5 20 36 */	slwi r5, r5, 4
/* 8041C460 004193A0  7C 06 00 D0 */	neg r0, r6
/* 8041C464 004193A4  7C 00 33 78 */	or r0, r0, r6
/* 8041C468 004193A8  50 85 07 3E */	rlwimi r5, r4, 0, 0x1c, 0x1f
/* 8041C46C 004193AC  54 00 3E 72 */	rlwinm r0, r0, 7, 0x19, 0x19
/* 8041C470 004193B0  7C A0 03 78 */	or r0, r5, r0
/* 8041C474 004193B4  98 03 00 00 */	stb r0, 0(r3)
/* 8041C478 004193B8  4E 80 00 20 */	blr 

.global __ct__Q27MapCode3MgrFv
__ct__Q27MapCode3MgrFv:
/* 8041C47C 004193BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C480 004193C0  7C 08 02 A6 */	mflr r0
/* 8041C484 004193C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C488 004193C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041C48C 004193CC  7C 7F 1B 78 */	mr r31, r3
/* 8041C490 004193D0  4B FF 4F 01 */	bl __ct__5CNodeFv
/* 8041C494 004193D4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8041C498 004193D8  3C 60 80 4F */	lis r3, __vt__26Container$$0Q27MapCode4Code$$1@ha
/* 8041C49C 004193DC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8041C4A0 004193E0  3C 80 80 4F */	lis r4, __vt__31ArrayContainer$$0Q27MapCode4Code$$1@ha
/* 8041C4A4 004193E4  90 1F 00 00 */	stw r0, 0(r31)
/* 8041C4A8 004193E8  38 03 B9 B0 */	addi r0, r3, __vt__26Container$$0Q27MapCode4Code$$1@l
/* 8041C4AC 004193EC  3C 60 80 4F */	lis r3, __vt__Q37MapCode3Mgr9CodeArray@ha
/* 8041C4B0 004193F0  38 C0 00 00 */	li r6, 0
/* 8041C4B4 004193F4  90 1F 00 00 */	stw r0, 0(r31)
/* 8041C4B8 004193F8  38 A4 B9 68 */	addi r5, r4, __vt__31ArrayContainer$$0Q27MapCode4Code$$1@l
/* 8041C4BC 004193FC  38 80 00 01 */	li r4, 1
/* 8041C4C0 00419400  38 03 B9 20 */	addi r0, r3, __vt__Q37MapCode3Mgr9CodeArray@l
/* 8041C4C4 00419404  98 DF 00 18 */	stb r6, 0x18(r31)
/* 8041C4C8 00419408  7F E3 FB 78 */	mr r3, r31
/* 8041C4CC 0041940C  90 BF 00 00 */	stw r5, 0(r31)
/* 8041C4D0 00419410  98 9F 00 18 */	stb r4, 0x18(r31)
/* 8041C4D4 00419414  90 DF 00 20 */	stw r6, 0x20(r31)
/* 8041C4D8 00419418  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 8041C4DC 0041941C  90 DF 00 24 */	stw r6, 0x24(r31)
/* 8041C4E0 00419420  90 1F 00 00 */	stw r0, 0(r31)
/* 8041C4E4 00419424  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041C4E8 00419428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C4EC 0041942C  7C 08 03 A6 */	mtlr r0
/* 8041C4F0 00419430  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C4F4 00419434  4E 80 00 20 */	blr 

.global __dt__Q37MapCode3Mgr9CodeArrayFv
__dt__Q37MapCode3Mgr9CodeArrayFv:
/* 8041C4F8 00419438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C4FC 0041943C  7C 08 02 A6 */	mflr r0
/* 8041C500 00419440  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C504 00419444  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041C508 00419448  7C 9F 23 78 */	mr r31, r4
/* 8041C50C 0041944C  93 C1 00 08 */	stw r30, 8(r1)
/* 8041C510 00419450  7C 7E 1B 79 */	or. r30, r3, r3
/* 8041C514 00419454  41 82 00 58 */	beq lbl_8041C56C
/* 8041C518 00419458  3C 80 80 4F */	lis r4, __vt__Q37MapCode3Mgr9CodeArray@ha
/* 8041C51C 0041945C  38 04 B9 20 */	addi r0, r4, __vt__Q37MapCode3Mgr9CodeArray@l
/* 8041C520 00419460  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C524 00419464  41 82 00 38 */	beq lbl_8041C55C
/* 8041C528 00419468  3C 80 80 4F */	lis r4, __vt__31ArrayContainer$$0Q27MapCode4Code$$1@ha
/* 8041C52C 0041946C  38 04 B9 68 */	addi r0, r4, __vt__31ArrayContainer$$0Q27MapCode4Code$$1@l
/* 8041C530 00419470  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C534 00419474  41 82 00 28 */	beq lbl_8041C55C
/* 8041C538 00419478  3C 80 80 4F */	lis r4, __vt__26Container$$0Q27MapCode4Code$$1@ha
/* 8041C53C 0041947C  38 04 B9 B0 */	addi r0, r4, __vt__26Container$$0Q27MapCode4Code$$1@l
/* 8041C540 00419480  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C544 00419484  41 82 00 18 */	beq lbl_8041C55C
/* 8041C548 00419488  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8041C54C 0041948C  38 80 00 00 */	li r4, 0
/* 8041C550 00419490  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8041C554 00419494  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C558 00419498  4B FF 50 31 */	bl __dt__5CNodeFv
lbl_8041C55C:
/* 8041C55C 0041949C  7F E0 07 35 */	extsh. r0, r31
/* 8041C560 004194A0  40 81 00 0C */	ble lbl_8041C56C
/* 8041C564 004194A4  7F C3 F3 78 */	mr r3, r30
/* 8041C568 004194A8  4B C0 7B 4D */	bl __dl__FPv
lbl_8041C56C:
/* 8041C56C 004194AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C570 004194B0  7F C3 F3 78 */	mr r3, r30
/* 8041C574 004194B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041C578 004194B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041C57C 004194BC  7C 08 03 A6 */	mtlr r0
/* 8041C580 004194C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C584 004194C4  4E 80 00 20 */	blr 

.global __dt__31ArrayContainer$$0Q27MapCode4Code$$1Fv
__dt__31ArrayContainer$$0Q27MapCode4Code$$1Fv:
/* 8041C588 004194C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C58C 004194CC  7C 08 02 A6 */	mflr r0
/* 8041C590 004194D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C594 004194D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041C598 004194D8  7C 9F 23 78 */	mr r31, r4
/* 8041C59C 004194DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8041C5A0 004194E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8041C5A4 004194E4  41 82 00 48 */	beq lbl_8041C5EC
/* 8041C5A8 004194E8  3C 80 80 4F */	lis r4, __vt__31ArrayContainer$$0Q27MapCode4Code$$1@ha
/* 8041C5AC 004194EC  38 04 B9 68 */	addi r0, r4, __vt__31ArrayContainer$$0Q27MapCode4Code$$1@l
/* 8041C5B0 004194F0  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C5B4 004194F4  41 82 00 28 */	beq lbl_8041C5DC
/* 8041C5B8 004194F8  3C 80 80 4F */	lis r4, __vt__26Container$$0Q27MapCode4Code$$1@ha
/* 8041C5BC 004194FC  38 04 B9 B0 */	addi r0, r4, __vt__26Container$$0Q27MapCode4Code$$1@l
/* 8041C5C0 00419500  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C5C4 00419504  41 82 00 18 */	beq lbl_8041C5DC
/* 8041C5C8 00419508  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8041C5CC 0041950C  38 80 00 00 */	li r4, 0
/* 8041C5D0 00419510  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8041C5D4 00419514  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C5D8 00419518  4B FF 4F B1 */	bl __dt__5CNodeFv
lbl_8041C5DC:
/* 8041C5DC 0041951C  7F E0 07 35 */	extsh. r0, r31
/* 8041C5E0 00419520  40 81 00 0C */	ble lbl_8041C5EC
/* 8041C5E4 00419524  7F C3 F3 78 */	mr r3, r30
/* 8041C5E8 00419528  4B C0 7A CD */	bl __dl__FPv
lbl_8041C5EC:
/* 8041C5EC 0041952C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C5F0 00419530  7F C3 F3 78 */	mr r3, r30
/* 8041C5F4 00419534  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041C5F8 00419538  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041C5FC 0041953C  7C 08 03 A6 */	mtlr r0
/* 8041C600 00419540  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C604 00419544  4E 80 00 20 */	blr 

.global __dt__26Container$$0Q27MapCode4Code$$1Fv
__dt__26Container$$0Q27MapCode4Code$$1Fv:
/* 8041C608 00419548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C60C 0041954C  7C 08 02 A6 */	mflr r0
/* 8041C610 00419550  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C614 00419554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041C618 00419558  7C 9F 23 78 */	mr r31, r4
/* 8041C61C 0041955C  93 C1 00 08 */	stw r30, 8(r1)
/* 8041C620 00419560  7C 7E 1B 79 */	or. r30, r3, r3
/* 8041C624 00419564  41 82 00 38 */	beq lbl_8041C65C
/* 8041C628 00419568  3C 80 80 4F */	lis r4, __vt__26Container$$0Q27MapCode4Code$$1@ha
/* 8041C62C 0041956C  38 04 B9 B0 */	addi r0, r4, __vt__26Container$$0Q27MapCode4Code$$1@l
/* 8041C630 00419570  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C634 00419574  41 82 00 18 */	beq lbl_8041C64C
/* 8041C638 00419578  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8041C63C 0041957C  38 80 00 00 */	li r4, 0
/* 8041C640 00419580  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8041C644 00419584  90 1E 00 00 */	stw r0, 0(r30)
/* 8041C648 00419588  4B FF 4F 41 */	bl __dt__5CNodeFv
lbl_8041C64C:
/* 8041C64C 0041958C  7F E0 07 35 */	extsh. r0, r31
/* 8041C650 00419590  40 81 00 0C */	ble lbl_8041C65C
/* 8041C654 00419594  7F C3 F3 78 */	mr r3, r30
/* 8041C658 00419598  4B C0 7A 5D */	bl __dl__FPv
lbl_8041C65C:
/* 8041C65C 0041959C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C660 004195A0  7F C3 F3 78 */	mr r3, r30
/* 8041C664 004195A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041C668 004195A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041C66C 004195AC  7C 08 03 A6 */	mtlr r0
/* 8041C670 004195B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C674 004195B4  4E 80 00 20 */	blr 

.global write__31ArrayContainer$$0Q27MapCode4Code$$1FR6Stream
write__31ArrayContainer$$0Q27MapCode4Code$$1FR6Stream:
/* 8041C678 004195B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041C67C 004195BC  7C 08 02 A6 */	mflr r0
/* 8041C680 004195C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041C684 004195C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041C688 004195C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041C68C 004195CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041C690 004195D0  7C 9D 23 78 */	mr r29, r4
/* 8041C694 004195D4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8041C698 004195D8  7C 7C 1B 78 */	mr r28, r3
/* 8041C69C 004195DC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8041C6A0 004195E0  7F A3 EB 78 */	mr r3, r29
/* 8041C6A4 004195E4  4B FF 79 79 */	bl textBeginGroup__6StreamFPc
/* 8041C6A8 004195E8  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 8041C6AC 004195EC  7F A3 EB 78 */	mr r3, r29
/* 8041C6B0 004195F0  4B FF 7D 85 */	bl textWriteTab__6StreamFi
/* 8041C6B4 004195F4  80 9C 00 20 */	lwz r4, 0x20(r28)
/* 8041C6B8 004195F8  7F A3 EB 78 */	mr r3, r29
/* 8041C6BC 004195FC  4B FF 91 05 */	bl writeInt__6StreamFi
/* 8041C6C0 00419600  7F A3 EB 78 */	mr r3, r29
/* 8041C6C4 00419604  38 82 20 48 */	addi r4, r2, lbl_805203A8@sda21
/* 8041C6C8 00419608  4C C6 31 82 */	crclr 6
/* 8041C6CC 0041960C  4B FF 7B 11 */	bl textWriteText__6StreamFPce
/* 8041C6D0 00419610  3C 60 80 4A */	lis r3, lbl_804997B8@ha
/* 8041C6D4 00419614  3B C0 00 00 */	li r30, 0
/* 8041C6D8 00419618  3B E3 97 B8 */	addi r31, r3, lbl_804997B8@l
/* 8041C6DC 0041961C  48 00 00 4C */	b lbl_8041C728
lbl_8041C6E0:
/* 8041C6E0 00419620  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 8041C6E4 00419624  7F A3 EB 78 */	mr r3, r29
/* 8041C6E8 00419628  4B FF 7D 4D */	bl textWriteTab__6StreamFi
/* 8041C6EC 0041962C  7F 83 E3 78 */	mr r3, r28
/* 8041C6F0 00419630  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 8041C6F4 00419634  81 9C 00 00 */	lwz r12, 0(r28)
/* 8041C6F8 00419638  7F A4 EB 78 */	mr r4, r29
/* 8041C6FC 0041963C  7C A0 F2 14 */	add r5, r0, r30
/* 8041C700 00419640  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8041C704 00419644  7D 89 03 A6 */	mtctr r12
/* 8041C708 00419648  4E 80 04 21 */	bctrl 
/* 8041C70C 0041964C  80 DC 00 20 */	lwz r6, 0x20(r28)
/* 8041C710 00419650  7F A3 EB 78 */	mr r3, r29
/* 8041C714 00419654  7F E4 FB 78 */	mr r4, r31
/* 8041C718 00419658  7F C5 F3 78 */	mr r5, r30
/* 8041C71C 0041965C  4C C6 31 82 */	crclr 6
/* 8041C720 00419660  4B FF 7A BD */	bl textWriteText__6StreamFPce
/* 8041C724 00419664  3B DE 00 01 */	addi r30, r30, 1
lbl_8041C728:
/* 8041C728 00419668  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 8041C72C 0041966C  7C 1E 00 00 */	cmpw r30, r0
/* 8041C730 00419670  41 80 FF B0 */	blt lbl_8041C6E0
/* 8041C734 00419674  7F A3 EB 78 */	mr r3, r29
/* 8041C738 00419678  4B FF 79 69 */	bl textEndGroup__6StreamFv
/* 8041C73C 0041967C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041C740 00419680  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041C744 00419684  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041C748 00419688  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041C74C 0041968C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8041C750 00419690  7C 08 03 A6 */	mtlr r0
/* 8041C754 00419694  38 21 00 20 */	addi r1, r1, 0x20
/* 8041C758 00419698  4E 80 00 20 */	blr 

.global writeObject__31ArrayContainer$$0Q27MapCode4Code$$1FR6StreamRQ27MapCode4Code
writeObject__31ArrayContainer$$0Q27MapCode4Code$$1FR6StreamRQ27MapCode4Code:
/* 8041C75C 0041969C  4E 80 00 20 */	blr 

.global read__Q27MapCode3MgrFR6Stream
read__Q27MapCode3MgrFR6Stream:
/* 8041C760 004196A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C764 004196A4  7C 08 02 A6 */	mflr r0
/* 8041C768 004196A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C76C 004196AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8041C770 004196B0  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8041C774 004196B4  7D 89 03 A6 */	mtctr r12
/* 8041C778 004196B8  4E 80 04 21 */	bctrl 
/* 8041C77C 004196BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C780 004196C0  7C 08 03 A6 */	mtlr r0
/* 8041C784 004196C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C788 004196C8  4E 80 00 20 */	blr 

.global read__31ArrayContainer$$0Q27MapCode4Code$$1FR6Stream
read__31ArrayContainer$$0Q27MapCode4Code$$1FR6Stream:
/* 8041C78C 004196CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041C790 004196D0  7C 08 02 A6 */	mflr r0
/* 8041C794 004196D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041C798 004196D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041C79C 004196DC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041C7A0 004196E0  7C 9E 23 78 */	mr r30, r4
/* 8041C7A4 004196E4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041C7A8 004196E8  7C 7D 1B 78 */	mr r29, r3
/* 8041C7AC 004196EC  7F C3 F3 78 */	mr r3, r30
/* 8041C7B0 004196F0  4B FF 82 E1 */	bl readInt__6StreamFv
/* 8041C7B4 004196F4  90 7D 00 20 */	stw r3, 0x20(r29)
/* 8041C7B8 004196F8  7F A3 EB 78 */	mr r3, r29
/* 8041C7BC 004196FC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8041C7C0 00419700  80 9D 00 20 */	lwz r4, 0x20(r29)
/* 8041C7C4 00419704  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8041C7C8 00419708  7D 89 03 A6 */	mtctr r12
/* 8041C7CC 0041970C  4E 80 04 21 */	bctrl 
/* 8041C7D0 00419710  80 1D 00 20 */	lwz r0, 0x20(r29)
/* 8041C7D4 00419714  3B E0 00 00 */	li r31, 0
/* 8041C7D8 00419718  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 8041C7DC 0041971C  48 00 00 28 */	b lbl_8041C804
lbl_8041C7E0:
/* 8041C7E0 00419720  7F A3 EB 78 */	mr r3, r29
/* 8041C7E4 00419724  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 8041C7E8 00419728  81 9D 00 00 */	lwz r12, 0(r29)
/* 8041C7EC 0041972C  7F C4 F3 78 */	mr r4, r30
/* 8041C7F0 00419730  7C A0 FA 14 */	add r5, r0, r31
/* 8041C7F4 00419734  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8041C7F8 00419738  7D 89 03 A6 */	mtctr r12
/* 8041C7FC 0041973C  4E 80 04 21 */	bctrl 
/* 8041C800 00419740  3B FF 00 01 */	addi r31, r31, 1
lbl_8041C804:
/* 8041C804 00419744  80 1D 00 20 */	lwz r0, 0x20(r29)
/* 8041C808 00419748  7C 1F 00 00 */	cmpw r31, r0
/* 8041C80C 0041974C  41 80 FF D4 */	blt lbl_8041C7E0
/* 8041C810 00419750  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041C814 00419754  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041C818 00419758  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041C81C 0041975C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041C820 00419760  7C 08 03 A6 */	mtlr r0
/* 8041C824 00419764  38 21 00 20 */	addi r1, r1, 0x20
/* 8041C828 00419768  4E 80 00 20 */	blr 

.global readObject__31ArrayContainer$$0Q27MapCode4Code$$1FR6StreamRQ27MapCode4Code
readObject__31ArrayContainer$$0Q27MapCode4Code$$1FR6StreamRQ27MapCode4Code:
/* 8041C82C 0041976C  4E 80 00 20 */	blr 

.global alloc__31ArrayContainer$$0Q27MapCode4Code$$1Fi
alloc__31ArrayContainer$$0Q27MapCode4Code$$1Fi:
/* 8041C830 00419770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C834 00419774  7C 08 02 A6 */	mflr r0
/* 8041C838 00419778  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C83C 0041977C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041C840 00419780  7C 9F 23 78 */	mr r31, r4
/* 8041C844 00419784  93 C1 00 08 */	stw r30, 8(r1)
/* 8041C848 00419788  7C 7E 1B 78 */	mr r30, r3
/* 8041C84C 0041978C  7F E3 FB 78 */	mr r3, r31
/* 8041C850 00419790  4B C0 77 5D */	bl __nwa__FUl
/* 8041C854 00419794  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8041C858 00419798  38 00 00 00 */	li r0, 0
/* 8041C85C 0041979C  93 FE 00 20 */	stw r31, 0x20(r30)
/* 8041C860 004197A0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8041C864 004197A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041C868 004197A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041C86C 004197AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C870 004197B0  7C 08 03 A6 */	mtlr r0
/* 8041C874 004197B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C878 004197B8  4E 80 00 20 */	blr 

.global attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable
attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable:
/* 8041C87C 004197BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C880 004197C0  39 00 00 00 */	li r8, 0
/* 8041C884 004197C4  38 E0 00 00 */	li r7, 0
/* 8041C888 004197C8  48 00 00 24 */	b lbl_8041C8AC
lbl_8041C88C:
/* 8041C88C 004197CC  80 C3 00 24 */	lwz r6, 0x24(r3)
/* 8041C890 004197D0  38 07 00 5C */	addi r0, r7, 0x5c
/* 8041C894 004197D4  80 A4 00 24 */	lwz r5, 0x24(r4)
/* 8041C898 004197D8  38 E7 00 60 */	addi r7, r7, 0x60
/* 8041C89C 004197DC  7C C6 40 AE */	lbzx r6, r6, r8
/* 8041C8A0 004197E0  39 08 00 01 */	addi r8, r8, 1
/* 8041C8A4 004197E4  98 C1 00 08 */	stb r6, 8(r1)
/* 8041C8A8 004197E8  7C C5 01 AE */	stbx r6, r5, r0
lbl_8041C8AC:
/* 8041C8AC 004197EC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8041C8B0 004197F0  7C 08 00 00 */	cmpw r8, r0
/* 8041C8B4 004197F4  41 80 FF D8 */	blt lbl_8041C88C
/* 8041C8B8 004197F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C8BC 004197FC  4E 80 00 20 */	blr 

.global writeObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
writeObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code:
/* 8041C8C0 00419800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C8C4 00419804  7C 08 02 A6 */	mflr r0
/* 8041C8C8 00419808  7C 83 23 78 */	mr r3, r4
/* 8041C8CC 0041980C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C8D0 00419810  88 05 00 00 */	lbz r0, 0(r5)
/* 8041C8D4 00419814  7C 04 03 78 */	mr r4, r0
/* 8041C8D8 00419818  4B FF 8D 99 */	bl writeByte__6StreamFUc
/* 8041C8DC 0041981C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C8E0 00419820  7C 08 03 A6 */	mtlr r0
/* 8041C8E4 00419824  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C8E8 00419828  4E 80 00 20 */	blr 

.global readObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
readObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code:
/* 8041C8EC 0041982C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C8F0 00419830  7C 08 02 A6 */	mflr r0
/* 8041C8F4 00419834  7C 83 23 78 */	mr r3, r4
/* 8041C8F8 00419838  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C8FC 0041983C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041C900 00419840  7C BF 2B 78 */	mr r31, r5
/* 8041C904 00419844  4B FF 7B 99 */	bl readByte__6StreamFv
/* 8041C908 00419848  98 7F 00 00 */	stb r3, 0(r31)
/* 8041C90C 0041984C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C910 00419850  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041C914 00419854  7C 08 03 A6 */	mtlr r0
/* 8041C918 00419858  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C91C 0041985C  4E 80 00 20 */	blr 

.global addOne__31ArrayContainer$$0Q27MapCode4Code$$1FRQ27MapCode4Code
addOne__31ArrayContainer$$0Q27MapCode4Code$$1FRQ27MapCode4Code:
/* 8041C920 00419860  80 C3 00 1C */	lwz r6, 0x1c(r3)
/* 8041C924 00419864  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8041C928 00419868  7C 06 00 00 */	cmpw r6, r0
/* 8041C92C 0041986C  4C 80 00 20 */	bgelr 
/* 8041C930 00419870  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 8041C934 00419874  38 06 00 01 */	addi r0, r6, 1
/* 8041C938 00419878  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8041C93C 0041987C  88 04 00 00 */	lbz r0, 0(r4)
/* 8041C940 00419880  7C 05 31 AE */	stbx r0, r5, r6
/* 8041C944 00419884  4E 80 00 20 */	blr 

.global setArray__31ArrayContainer$$0Q27MapCode4Code$$1FPQ27MapCode4Codei
setArray__31ArrayContainer$$0Q27MapCode4Code$$1FPQ27MapCode4Codei:
/* 8041C948 00419888  90 83 00 24 */	stw r4, 0x24(r3)
/* 8041C94C 0041988C  90 A3 00 20 */	stw r5, 0x20(r3)
/* 8041C950 00419890  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8041C954 00419894  4E 80 00 20 */	blr 

.global get__31ArrayContainer$$0Q27MapCode4Code$$1FPv
get__31ArrayContainer$$0Q27MapCode4Code$$1FPv:
/* 8041C958 00419898  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8041C95C 0041989C  7C 60 22 14 */	add r3, r0, r4
/* 8041C960 004198A0  4E 80 00 20 */	blr 

.global getNext__31ArrayContainer$$0Q27MapCode4Code$$1FPv
getNext__31ArrayContainer$$0Q27MapCode4Code$$1FPv:
/* 8041C964 004198A4  38 64 00 01 */	addi r3, r4, 1
/* 8041C968 004198A8  4E 80 00 20 */	blr 

.global getStart__31ArrayContainer$$0Q27MapCode4Code$$1Fv
getStart__31ArrayContainer$$0Q27MapCode4Code$$1Fv:
/* 8041C96C 004198AC  38 60 00 00 */	li r3, 0
/* 8041C970 004198B0  4E 80 00 20 */	blr 

.global getEnd__31ArrayContainer$$0Q27MapCode4Code$$1Fv
getEnd__31ArrayContainer$$0Q27MapCode4Code$$1Fv:
/* 8041C974 004198B4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8041C978 004198B8  4E 80 00 20 */	blr 

.global getAt__31ArrayContainer$$0Q27MapCode4Code$$1Fi
getAt__31ArrayContainer$$0Q27MapCode4Code$$1Fi:
/* 8041C97C 004198BC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8041C980 004198C0  7C 60 22 14 */	add r3, r0, r4
/* 8041C984 004198C4  4E 80 00 20 */	blr 

.global getTo__31ArrayContainer$$0Q27MapCode4Code$$1Fv
getTo__31ArrayContainer$$0Q27MapCode4Code$$1Fv:
/* 8041C988 004198C8  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8041C98C 004198CC  4E 80 00 20 */	blr 

.global getObject__26Container$$0Q27MapCode4Code$$1FPv
getObject__26Container$$0Q27MapCode4Code$$1FPv:
/* 8041C990 004198D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041C994 004198D4  7C 08 02 A6 */	mflr r0
/* 8041C998 004198D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041C99C 004198DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8041C9A0 004198E0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8041C9A4 004198E4  7D 89 03 A6 */	mtctr r12
/* 8041C9A8 004198E8  4E 80 04 21 */	bctrl 
/* 8041C9AC 004198EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041C9B0 004198F0  7C 08 03 A6 */	mtlr r0
/* 8041C9B4 004198F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8041C9B8 004198F8  4E 80 00 20 */	blr 

.global getAt__26Container$$0Q27MapCode4Code$$1Fi
getAt__26Container$$0Q27MapCode4Code$$1Fi:
/* 8041C9BC 004198FC  38 60 00 00 */	li r3, 0
/* 8041C9C0 00419900  4E 80 00 20 */	blr 

.global getTo__26Container$$0Q27MapCode4Code$$1Fv
getTo__26Container$$0Q27MapCode4Code$$1Fv:
/* 8041C9C4 00419904  38 60 00 00 */	li r3, 0
/* 8041C9C8 00419908  4E 80 00 20 */	blr 
