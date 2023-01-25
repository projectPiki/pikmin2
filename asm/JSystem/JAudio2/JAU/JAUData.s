.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q210JADUtility10PrmSetBase
__vt__Q210JADUtility10PrmSetBase:
	.4byte 0
	.4byte 0
	.4byte __dt__Q210JADUtility10PrmSetBaseFv
	.4byte appendAfter__Q210JADUtility10PrmSetBaseFv
	.4byte load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
	.4byte afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
	.4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
	.4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
.global __vt__Q210JADUtility10PrmSetTree
__vt__Q210JADUtility10PrmSetTree:
	.4byte 0
	.4byte 0
	.4byte "beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
	.4byte "beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
	.4byte "afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
	.4byte "afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase"
.global "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"
"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>":
	.4byte 0
	.4byte 0
	.4byte "beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
	.4byte "beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
	.4byte "afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
	.4byte "afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q210JADUtility10PrmSetBaseFb
__ct__Q210JADUtility10PrmSetBaseFb:
/* 800BA564 000B74A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BA568 000B74A8  7C 08 02 A6 */	mflr r0
/* 800BA56C 000B74AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BA570 000B74B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BA574 000B74B4  7C 9F 23 78 */	mr r31, r4
/* 800BA578 000B74B8  93 C1 00 08 */	stw r30, 8(r1)
/* 800BA57C 000B74BC  7C 7E 1B 78 */	mr r30, r3
/* 800BA580 000B74C0  4B F6 2A 4D */	bl __ct__11JKRDisposerFv
/* 800BA584 000B74C4  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetBase@ha
/* 800BA588 000B74C8  38 00 00 00 */	li r0, 0
/* 800BA58C 000B74CC  38 83 66 E0 */	addi r4, r3, __vt__Q210JADUtility10PrmSetBase@l
/* 800BA590 000B74D0  38 7E 00 1C */	addi r3, r30, 0x1c
/* 800BA594 000B74D4  90 9E 00 00 */	stw r4, 0(r30)
/* 800BA598 000B74D8  98 1E 00 18 */	stb r0, 0x18(r30)
/* 800BA59C 000B74DC  98 1E 00 19 */	stb r0, 0x19(r30)
/* 800BA5A0 000B74E0  9B FE 00 1A */	stb r31, 0x1a(r30)
/* 800BA5A4 000B74E4  4B F6 C3 2D */	bl initiate__10JSUPtrListFv
/* 800BA5A8 000B74E8  3B FE 00 2C */	addi r31, r30, 0x2c
/* 800BA5AC 000B74EC  7F E3 FB 78 */	mr r3, r31
/* 800BA5B0 000B74F0  4B F6 C3 21 */	bl initiate__10JSUPtrListFv
/* 800BA5B4 000B74F4  7F C4 F3 78 */	mr r4, r30
/* 800BA5B8 000B74F8  38 7F 00 0C */	addi r3, r31, 0xc
/* 800BA5BC 000B74FC  4B F6 C1 FD */	bl __ct__10JSUPtrLinkFPv
/* 800BA5C0 000B7500  3C 80 80 4A */	lis r4, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
/* 800BA5C4 000B7504  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetTree@ha
/* 800BA5C8 000B7508  38 04 67 1C */	addi r0, r4, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l
/* 800BA5CC 000B750C  38 80 00 00 */	li r4, 0
/* 800BA5D0 000B7510  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 800BA5D4 000B7514  38 03 67 04 */	addi r0, r3, __vt__Q210JADUtility10PrmSetTree@l
/* 800BA5D8 000B7518  7F C3 F3 78 */	mr r3, r30
/* 800BA5DC 000B751C  90 9F 00 20 */	stw r4, 0x20(r31)
/* 800BA5E0 000B7520  90 9F 00 24 */	stw r4, 0x24(r31)
/* 800BA5E4 000B7524  90 9F 00 28 */	stw r4, 0x28(r31)
/* 800BA5E8 000B7528  90 9F 00 2C */	stw r4, 0x2c(r31)
/* 800BA5EC 000B752C  90 9F 00 30 */	stw r4, 0x30(r31)
/* 800BA5F0 000B7530  90 9F 00 34 */	stw r4, 0x34(r31)
/* 800BA5F4 000B7534  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 800BA5F8 000B7538  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BA5FC 000B753C  83 C1 00 08 */	lwz r30, 8(r1)
/* 800BA600 000B7540  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BA604 000B7544  7C 08 03 A6 */	mtlr r0
/* 800BA608 000B7548  38 21 00 10 */	addi r1, r1, 0x10
/* 800BA60C 000B754C  4E 80 00 20 */	blr 

.global load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream:
/* 800BA610 000B7550  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800BA614 000B7554  7C 08 02 A6 */	mflr r0
/* 800BA618 000B7558  90 01 00 24 */	stw r0, 0x24(r1)
/* 800BA61C 000B755C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800BA620 000B7560  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800BA624 000B7564  7C 9E 23 78 */	mr r30, r4
/* 800BA628 000B7568  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800BA62C 000B756C  7C 7D 1B 78 */	mr r29, r3
/* 800BA630 000B7570  7F C3 F3 78 */	mr r3, r30
/* 800BA634 000B7574  81 9E 00 00 */	lwz r12, 0(r30)
/* 800BA638 000B7578  88 9D 00 18 */	lbz r4, 0x18(r29)
/* 800BA63C 000B757C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800BA640 000B7580  7D 89 03 A6 */	mtctr r12
/* 800BA644 000B7584  4E 80 04 21 */	bctrl 
/* 800BA648 000B7588  83 FD 00 1C */	lwz r31, 0x1c(r29)
/* 800BA64C 000B758C  48 00 00 20 */	b .L_800BA66C
.L_800BA650:
/* 800BA650 000B7590  80 7F 00 00 */	lwz r3, 0(r31)
/* 800BA654 000B7594  7F C4 F3 78 */	mr r4, r30
/* 800BA658 000B7598  81 83 00 00 */	lwz r12, 0(r3)
/* 800BA65C 000B759C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800BA660 000B75A0  7D 89 03 A6 */	mtctr r12
/* 800BA664 000B75A4  4E 80 04 21 */	bctrl 
/* 800BA668 000B75A8  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_800BA66C:
/* 800BA66C 000B75AC  28 1F 00 00 */	cmplwi r31, 0
/* 800BA670 000B75B0  40 82 FF E0 */	bne .L_800BA650
/* 800BA674 000B75B4  7F C3 F3 78 */	mr r3, r30
/* 800BA678 000B75B8  88 9D 00 19 */	lbz r4, 0x19(r29)
/* 800BA67C 000B75BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 800BA680 000B75C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800BA684 000B75C4  7D 89 03 A6 */	mtctr r12
/* 800BA688 000B75C8  4E 80 04 21 */	bctrl 
/* 800BA68C 000B75CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800BA690 000B75D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800BA694 000B75D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800BA698 000B75D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800BA69C 000B75DC  7C 08 03 A6 */	mtlr r0
/* 800BA6A0 000B75E0  38 21 00 20 */	addi r1, r1, 0x20
/* 800BA6A4 000B75E4  4E 80 00 20 */	blr 

.global load__Q210JADUtility7PrmBaseFR20JSUMemoryInputStream
load__Q210JADUtility7PrmBaseFR20JSUMemoryInputStream:
/* 800BA6A8 000B75E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BA6AC 000B75EC  7C 08 02 A6 */	mflr r0
/* 800BA6B0 000B75F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BA6B4 000B75F4  88 03 00 18 */	lbz r0, 0x18(r3)
/* 800BA6B8 000B75F8  28 00 00 00 */	cmplwi r0, 0
/* 800BA6BC 000B75FC  41 82 00 1C */	beq .L_800BA6D8
/* 800BA6C0 000B7600  7C 83 23 78 */	mr r3, r4
/* 800BA6C4 000B7604  7C 04 03 78 */	mr r4, r0
/* 800BA6C8 000B7608  81 83 00 00 */	lwz r12, 0(r3)
/* 800BA6CC 000B760C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800BA6D0 000B7610  7D 89 03 A6 */	mtctr r12
/* 800BA6D4 000B7614  4E 80 04 21 */	bctrl 
.L_800BA6D8:
/* 800BA6D8 000B7618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BA6DC 000B761C  7C 08 03 A6 */	mtlr r0
/* 800BA6E0 000B7620  38 21 00 10 */	addi r1, r1, 0x10
/* 800BA6E4 000B7624  4E 80 00 20 */	blr 

.global __dt__Q210JADUtility10PrmSetBaseFv
__dt__Q210JADUtility10PrmSetBaseFv:
/* 800BA6E8 000B7628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BA6EC 000B762C  7C 08 02 A6 */	mflr r0
/* 800BA6F0 000B7630  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BA6F4 000B7634  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BA6F8 000B7638  7C 9F 23 78 */	mr r31, r4
/* 800BA6FC 000B763C  93 C1 00 08 */	stw r30, 8(r1)
/* 800BA700 000B7640  7C 7E 1B 79 */	or. r30, r3, r3
/* 800BA704 000B7644  41 82 00 B0 */	beq .L_800BA7B4
/* 800BA708 000B7648  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetBase@ha
/* 800BA70C 000B764C  38 03 66 E0 */	addi r0, r3, __vt__Q210JADUtility10PrmSetBase@l
/* 800BA710 000B7650  90 1E 00 00 */	stw r0, 0(r30)
/* 800BA714 000B7654  48 00 00 0C */	b .L_800BA720
.L_800BA718:
/* 800BA718 000B7658  38 7E 00 1C */	addi r3, r30, 0x1c
/* 800BA71C 000B765C  4B F6 C5 09 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_800BA720:
/* 800BA720 000B7660  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 800BA724 000B7664  28 04 00 00 */	cmplwi r4, 0
/* 800BA728 000B7668  40 82 FF F0 */	bne .L_800BA718
/* 800BA72C 000B766C  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 800BA730 000B7670  41 82 00 54 */	beq .L_800BA784
/* 800BA734 000B7674  3C 60 80 4A */	lis r3, __vt__Q210JADUtility10PrmSetTree@ha
/* 800BA738 000B7678  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 800BA73C 000B767C  38 03 67 04 */	addi r0, r3, __vt__Q210JADUtility10PrmSetTree@l
/* 800BA740 000B7680  90 1E 00 48 */	stw r0, 0x48(r30)
/* 800BA744 000B7684  41 82 00 40 */	beq .L_800BA784
/* 800BA748 000B7688  3C 60 80 4A */	lis r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
/* 800BA74C 000B768C  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 800BA750 000B7690  38 03 67 1C */	addi r0, r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l
/* 800BA754 000B7694  90 1E 00 48 */	stw r0, 0x48(r30)
/* 800BA758 000B7698  41 82 00 2C */	beq .L_800BA784
/* 800BA75C 000B769C  34 1E 00 38 */	addic. r0, r30, 0x38
/* 800BA760 000B76A0  41 82 00 10 */	beq .L_800BA770
/* 800BA764 000B76A4  38 7E 00 38 */	addi r3, r30, 0x38
/* 800BA768 000B76A8  38 80 00 00 */	li r4, 0
/* 800BA76C 000B76AC  4B F6 C0 65 */	bl __dt__10JSUPtrLinkFv
.L_800BA770:
/* 800BA770 000B76B0  34 1E 00 2C */	addic. r0, r30, 0x2c
/* 800BA774 000B76B4  41 82 00 10 */	beq .L_800BA784
/* 800BA778 000B76B8  38 7E 00 2C */	addi r3, r30, 0x2c
/* 800BA77C 000B76BC  38 80 00 00 */	li r4, 0
/* 800BA780 000B76C0  4B F6 C0 E9 */	bl __dt__10JSUPtrListFv
.L_800BA784:
/* 800BA784 000B76C4  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 800BA788 000B76C8  41 82 00 10 */	beq .L_800BA798
/* 800BA78C 000B76CC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 800BA790 000B76D0  38 80 00 00 */	li r4, 0
/* 800BA794 000B76D4  4B F6 C0 D5 */	bl __dt__10JSUPtrListFv
.L_800BA798:
/* 800BA798 000B76D8  7F C3 F3 78 */	mr r3, r30
/* 800BA79C 000B76DC  38 80 00 00 */	li r4, 0
/* 800BA7A0 000B76E0  4B F6 28 95 */	bl __dt__11JKRDisposerFv
/* 800BA7A4 000B76E4  7F E0 07 35 */	extsh. r0, r31
/* 800BA7A8 000B76E8  40 81 00 0C */	ble .L_800BA7B4
/* 800BA7AC 000B76EC  7F C3 F3 78 */	mr r3, r30
/* 800BA7B0 000B76F0  4B F6 99 05 */	bl __dl__FPv
.L_800BA7B4:
/* 800BA7B4 000B76F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BA7B8 000B76F8  7F C3 F3 78 */	mr r3, r30
/* 800BA7BC 000B76FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BA7C0 000B7700  83 C1 00 08 */	lwz r30, 8(r1)
/* 800BA7C4 000B7704  7C 08 03 A6 */	mtlr r0
/* 800BA7C8 000B7708  38 21 00 10 */	addi r1, r1, 0x10
/* 800BA7CC 000B770C  4E 80 00 20 */	blr 

.global appendAfter__Q210JADUtility10PrmSetBaseFv
appendAfter__Q210JADUtility10PrmSetBaseFv:
/* 800BA7D0 000B7710  4E 80 00 20 */	blr 

.global afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase:
/* 800BA7D4 000B7714  4E 80 00 20 */	blr 

.global afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase:
/* 800BA7D8 000B7718  4E 80 00 20 */	blr 

.global getEraseLink__Q210JADUtility10PrmSetBaseFv
getEraseLink__Q210JADUtility10PrmSetBaseFv:
/* 800BA7DC 000B771C  38 60 00 00 */	li r3, 0
/* 800BA7E0 000B7720  4E 80 00 20 */	blr 

.global afterGetFromFree__Q210JADUtility10PrmSetBaseFv
afterGetFromFree__Q210JADUtility10PrmSetBaseFv:
/* 800BA7E4 000B7724  4E 80 00 20 */	blr 

.global "beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
"beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase":
/* 800BA7E8 000B7728  4E 80 00 20 */	blr 

.global "beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
"beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase":
/* 800BA7EC 000B772C  4E 80 00 20 */	blr 

.global "afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
"afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase":
/* 800BA7F0 000B7730  4E 80 00 20 */	blr 

.global "afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase"
"afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase":
/* 800BA7F4 000B7734  4E 80 00 20 */	blr 
