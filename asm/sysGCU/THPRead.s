.include "macros.inc"
.section .bss  # 0x804EFC20 - 0x8051467C

# presumably OSMessageQueue
.lcomm FreeReadBufferQueue, 0x20, 4
.lcomm ReadedBufferQueue, 0x20, 4
.lcomm ReadedBufferQueue2, 0x20, 4

.lcomm FreeReadBufferMessage, 0x28, 4
.lcomm ReadedBufferMessage, 0x28, 4
.lcomm ReadedBufferMessage2, 0x28, 4
.lcomm ReadThread, 0x318, 8
.lcomm ReadThreadStack, 0x1000, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global gTHPReaderDvdAccess
gTHPReaderDvdAccess:
	.skip 1
.balign 4
# local object
ReadThreadCreated:
	.skip 4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global CreateReadThread
CreateReadThread:
/* 8044F58C 0044C4CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F590 0044C4D0  7C 08 02 A6 */	mflr r0
/* 8044F594 0044C4D4  3C 80 80 45 */	lis r4, Reader__FPv@ha
/* 8044F598 0044C4D8  3C A0 80 50 */	lis r5, FreeReadBufferQueue@ha
/* 8044F59C 0044C4DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F5A0 0044C4E0  38 84 F6 9C */	addi r4, r4, Reader__FPv@l
/* 8044F5A4 0044C4E4  7C 68 1B 78 */	mr r8, r3
/* 8044F5A8 0044C4E8  38 E0 10 00 */	li r7, 0x1000
/* 8044F5AC 0044C4EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044F5B0 0044C4F0  3B E5 43 20 */	addi r31, r5, FreeReadBufferQueue@l
/* 8044F5B4 0044C4F4  38 DF 03 F0 */	addi r6, r31, 0x3f0
/* 8044F5B8 0044C4F8  38 A0 00 00 */	li r5, 0
/* 8044F5BC 0044C4FC  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 8044F5C0 0044C500  39 20 00 01 */	li r9, 1
/* 8044F5C4 0044C504  38 C6 10 00 */	addi r6, r6, 0x1000
/* 8044F5C8 0044C508  4B CA 2A 05 */	bl OSCreateThread
/* 8044F5CC 0044C50C  2C 03 00 00 */	cmpwi r3, 0
/* 8044F5D0 0044C510  40 82 00 0C */	bne .L_8044F5DC
/* 8044F5D4 0044C514  38 60 00 00 */	li r3, 0
/* 8044F5D8 0044C518  48 00 00 40 */	b .L_8044F618
.L_8044F5DC:
/* 8044F5DC 0044C51C  38 7F 00 00 */	addi r3, r31, 0
/* 8044F5E0 0044C520  38 9F 00 60 */	addi r4, r31, 0x60
/* 8044F5E4 0044C524  38 A0 00 0A */	li r5, 0xa
/* 8044F5E8 0044C528  4B C9 FE D5 */	bl OSInitMessageQueue
/* 8044F5EC 0044C52C  38 7F 00 20 */	addi r3, r31, 0x20
/* 8044F5F0 0044C530  38 9F 00 88 */	addi r4, r31, 0x88
/* 8044F5F4 0044C534  38 A0 00 0A */	li r5, 0xa
/* 8044F5F8 0044C538  4B C9 FE C5 */	bl OSInitMessageQueue
/* 8044F5FC 0044C53C  38 7F 00 40 */	addi r3, r31, 0x40
/* 8044F600 0044C540  38 9F 00 B0 */	addi r4, r31, 0xb0
/* 8044F604 0044C544  38 A0 00 0A */	li r5, 0xa
/* 8044F608 0044C548  4B C9 FE B5 */	bl OSInitMessageQueue
/* 8044F60C 0044C54C  38 00 00 01 */	li r0, 1
/* 8044F610 0044C550  38 60 00 01 */	li r3, 1
/* 8044F614 0044C554  90 0D 9C 54 */	stw r0, ReadThreadCreated@sda21(r13)
.L_8044F618:
/* 8044F618 0044C558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F61C 0044C55C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044F620 0044C560  7C 08 03 A6 */	mtlr r0
/* 8044F624 0044C564  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F628 0044C568  4E 80 00 20 */	blr 

.global ReadThreadStart
ReadThreadStart:
/* 8044F62C 0044C56C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F630 0044C570  7C 08 02 A6 */	mflr r0
/* 8044F634 0044C574  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F638 0044C578  80 0D 9C 54 */	lwz r0, ReadThreadCreated@sda21(r13)
/* 8044F63C 0044C57C  2C 00 00 00 */	cmpwi r0, 0
/* 8044F640 0044C580  41 82 00 10 */	beq .L_8044F650
/* 8044F644 0044C584  3C 60 80 50 */	lis r3, ReadThread@ha
/* 8044F648 0044C588  38 63 43 F8 */	addi r3, r3, ReadThread@l
/* 8044F64C 0044C58C  4B CA 2E A9 */	bl OSResumeThread
.L_8044F650:
/* 8044F650 0044C590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F654 0044C594  7C 08 03 A6 */	mtlr r0
/* 8044F658 0044C598  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F65C 0044C59C  4E 80 00 20 */	blr 

.global ReadThreadCancel
ReadThreadCancel:
/* 8044F660 0044C5A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F664 0044C5A4  7C 08 02 A6 */	mflr r0
/* 8044F668 0044C5A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F66C 0044C5AC  80 0D 9C 54 */	lwz r0, ReadThreadCreated@sda21(r13)
/* 8044F670 0044C5B0  2C 00 00 00 */	cmpwi r0, 0
/* 8044F674 0044C5B4  41 82 00 18 */	beq .L_8044F68C
/* 8044F678 0044C5B8  3C 60 80 50 */	lis r3, ReadThread@ha
/* 8044F67C 0044C5BC  38 63 43 F8 */	addi r3, r3, ReadThread@l
/* 8044F680 0044C5C0  4B CA 2C 19 */	bl OSCancelThread
/* 8044F684 0044C5C4  38 00 00 00 */	li r0, 0
/* 8044F688 0044C5C8  90 0D 9C 54 */	stw r0, ReadThreadCreated@sda21(r13)
.L_8044F68C:
/* 8044F68C 0044C5CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F690 0044C5D0  7C 08 03 A6 */	mtlr r0
/* 8044F694 0044C5D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F698 0044C5D8  4E 80 00 20 */	blr 

Reader__FPv: #local func
/* 8044F69C 0044C5DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044F6A0 0044C5E0  7C 08 02 A6 */	mflr r0
/* 8044F6A4 0044C5E4  3C 60 80 51 */	lis r3, ActivePlayer@ha
/* 8044F6A8 0044C5E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044F6AC 0044C5EC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8044F6B0 0044C5F0  3B E3 44 90 */	addi r31, r3, ActivePlayer@l
/* 8044F6B4 0044C5F4  3B 80 00 00 */	li r28, 0
/* 8044F6B8 0044C5F8  83 DF 00 B8 */	lwz r30, 0xb8(r31)
/* 8044F6BC 0044C5FC  83 BF 00 BC */	lwz r29, 0xbc(r31)
.L_8044F6C0:
/* 8044F6C0 0044C600  48 00 01 2D */	bl PopFreeReadBuffer
/* 8044F6C4 0044C604  38 00 00 01 */	li r0, 1
/* 8044F6C8 0044C608  7C 7B 1B 78 */	mr r27, r3
/* 8044F6CC 0044C60C  98 0D 9C 50 */	stb r0, gTHPReaderDvdAccess@sda21(r13)
/* 8044F6D0 0044C610  7F E3 FB 78 */	mr r3, r31
/* 8044F6D4 0044C614  7F A5 EB 78 */	mr r5, r29
/* 8044F6D8 0044C618  7F C6 F3 78 */	mr r6, r30
/* 8044F6DC 0044C61C  80 9B 00 00 */	lwz r4, 0(r27)
/* 8044F6E0 0044C620  38 E0 00 02 */	li r7, 2
/* 8044F6E4 0044C624  4B C8 D3 9D */	bl DVDReadPrio
/* 8044F6E8 0044C628  38 00 00 00 */	li r0, 0
/* 8044F6EC 0044C62C  7C 03 E8 00 */	cmpw r3, r29
/* 8044F6F0 0044C630  98 0D 9C 50 */	stb r0, gTHPReaderDvdAccess@sda21(r13)
/* 8044F6F4 0044C634  41 82 00 30 */	beq .L_8044F724
/* 8044F6F8 0044C638  2C 03 FF FF */	cmpwi r3, -1
/* 8044F6FC 0044C63C  40 82 00 0C */	bne .L_8044F708
/* 8044F700 0044C640  38 00 FF FF */	li r0, -1
/* 8044F704 0044C644  90 1F 00 A8 */	stw r0, 0xa8(r31)
.L_8044F708:
/* 8044F708 0044C648  2C 1C 00 00 */	cmpwi r28, 0
/* 8044F70C 0044C64C  40 82 00 0C */	bne .L_8044F718
/* 8044F710 0044C650  38 60 00 00 */	li r3, 0
/* 8044F714 0044C654  4B FF EF 21 */	bl PrepareReady__Fi
.L_8044F718:
/* 8044F718 0044C658  3C 60 80 50 */	lis r3, ReadThread@ha
/* 8044F71C 0044C65C  38 63 43 F8 */	addi r3, r3, ReadThread@l
/* 8044F720 0044C660  4B CA 30 5D */	bl OSSuspendThread
.L_8044F724:
/* 8044F724 0044C664  93 9B 00 04 */	stw r28, 4(r27)
/* 8044F728 0044C668  7F 63 DB 78 */	mr r3, r27
/* 8044F72C 0044C66C  48 00 00 91 */	bl PushReadedBuffer
/* 8044F730 0044C670  80 1F 00 C0 */	lwz r0, 0xc0(r31)
/* 8044F734 0044C674  7F DE EA 14 */	add r30, r30, r29
/* 8044F738 0044C678  80 DF 00 50 */	lwz r6, 0x50(r31)
/* 8044F73C 0044C67C  7C 9C 02 14 */	add r4, r28, r0
/* 8044F740 0044C680  80 BB 00 00 */	lwz r5, 0(r27)
/* 8044F744 0044C684  7C 64 33 96 */	divwu r3, r4, r6
/* 8044F748 0044C688  38 06 FF FF */	addi r0, r6, -1
/* 8044F74C 0044C68C  83 A5 00 00 */	lwz r29, 0(r5)
/* 8044F750 0044C690  7C 63 31 D6 */	mullw r3, r3, r6
/* 8044F754 0044C694  7C 63 20 50 */	subf r3, r3, r4
/* 8044F758 0044C698  7C 03 00 40 */	cmplw r3, r0
/* 8044F75C 0044C69C  40 82 00 24 */	bne .L_8044F780
/* 8044F760 0044C6A0  88 1F 00 A6 */	lbz r0, 0xa6(r31)
/* 8044F764 0044C6A4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8044F768 0044C6A8  41 82 00 0C */	beq .L_8044F774
/* 8044F76C 0044C6AC  83 DF 00 64 */	lwz r30, 0x64(r31)
/* 8044F770 0044C6B0  48 00 00 10 */	b .L_8044F780
.L_8044F774:
/* 8044F774 0044C6B4  3C 60 80 50 */	lis r3, ReadThread@ha
/* 8044F778 0044C6B8  38 63 43 F8 */	addi r3, r3, ReadThread@l
/* 8044F77C 0044C6BC  4B CA 30 01 */	bl OSSuspendThread
.L_8044F780:
/* 8044F780 0044C6C0  3B 9C 00 01 */	addi r28, r28, 1
/* 8044F784 0044C6C4  4B FF FF 3C */	b .L_8044F6C0

.global PopReadedBuffer
PopReadedBuffer:
/* 8044F788 0044C6C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F78C 0044C6CC  7C 08 02 A6 */	mflr r0
/* 8044F790 0044C6D0  3C 60 80 50 */	lis r3, ReadedBufferQueue@ha
/* 8044F794 0044C6D4  38 A0 00 01 */	li r5, 1
/* 8044F798 0044C6D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F79C 0044C6DC  38 81 00 08 */	addi r4, r1, 8
/* 8044F7A0 0044C6E0  38 63 43 40 */	addi r3, r3, ReadedBufferQueue@l
/* 8044F7A4 0044C6E4  4B C9 FE 41 */	bl OSReceiveMessage
/* 8044F7A8 0044C6E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F7AC 0044C6EC  80 61 00 08 */	lwz r3, 8(r1)
/* 8044F7B0 0044C6F0  7C 08 03 A6 */	mtlr r0
/* 8044F7B4 0044C6F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F7B8 0044C6F8  4E 80 00 20 */	blr 

.global PushReadedBuffer
PushReadedBuffer:
/* 8044F7BC 0044C6FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F7C0 0044C700  7C 08 02 A6 */	mflr r0
/* 8044F7C4 0044C704  3C A0 80 50 */	lis r5, ReadedBufferQueue@ha
/* 8044F7C8 0044C708  7C 64 1B 78 */	mr r4, r3
/* 8044F7CC 0044C70C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F7D0 0044C710  38 65 43 40 */	addi r3, r5, ReadedBufferQueue@l
/* 8044F7D4 0044C714  38 A0 00 01 */	li r5, 1
/* 8044F7D8 0044C718  4B C9 FD 45 */	bl OSSendMessage
/* 8044F7DC 0044C71C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F7E0 0044C720  7C 08 03 A6 */	mtlr r0
/* 8044F7E4 0044C724  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F7E8 0044C728  4E 80 00 20 */	blr 

.global PopFreeReadBuffer
PopFreeReadBuffer:
/* 8044F7EC 0044C72C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F7F0 0044C730  7C 08 02 A6 */	mflr r0
/* 8044F7F4 0044C734  3C 60 80 50 */	lis r3, FreeReadBufferQueue@ha
/* 8044F7F8 0044C738  38 A0 00 01 */	li r5, 1
/* 8044F7FC 0044C73C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F800 0044C740  38 81 00 08 */	addi r4, r1, 8
/* 8044F804 0044C744  38 63 43 20 */	addi r3, r3, FreeReadBufferQueue@l
/* 8044F808 0044C748  4B C9 FD DD */	bl OSReceiveMessage
/* 8044F80C 0044C74C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F810 0044C750  80 61 00 08 */	lwz r3, 8(r1)
/* 8044F814 0044C754  7C 08 03 A6 */	mtlr r0
/* 8044F818 0044C758  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F81C 0044C75C  4E 80 00 20 */	blr 

.global PushFreeReadBuffer
PushFreeReadBuffer:
/* 8044F820 0044C760  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F824 0044C764  7C 08 02 A6 */	mflr r0
/* 8044F828 0044C768  3C A0 80 50 */	lis r5, FreeReadBufferQueue@ha
/* 8044F82C 0044C76C  7C 64 1B 78 */	mr r4, r3
/* 8044F830 0044C770  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F834 0044C774  38 65 43 20 */	addi r3, r5, FreeReadBufferQueue@l
/* 8044F838 0044C778  38 A0 00 01 */	li r5, 1
/* 8044F83C 0044C77C  4B C9 FC E1 */	bl OSSendMessage
/* 8044F840 0044C780  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F844 0044C784  7C 08 03 A6 */	mtlr r0
/* 8044F848 0044C788  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F84C 0044C78C  4E 80 00 20 */	blr 

.global PopReadedBuffer2
PopReadedBuffer2:
/* 8044F850 0044C790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F854 0044C794  7C 08 02 A6 */	mflr r0
/* 8044F858 0044C798  3C 60 80 50 */	lis r3, ReadedBufferQueue2@ha
/* 8044F85C 0044C79C  38 A0 00 01 */	li r5, 1
/* 8044F860 0044C7A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F864 0044C7A4  38 81 00 08 */	addi r4, r1, 8
/* 8044F868 0044C7A8  38 63 43 60 */	addi r3, r3, ReadedBufferQueue2@l
/* 8044F86C 0044C7AC  4B C9 FD 79 */	bl OSReceiveMessage
/* 8044F870 0044C7B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F874 0044C7B4  80 61 00 08 */	lwz r3, 8(r1)
/* 8044F878 0044C7B8  7C 08 03 A6 */	mtlr r0
/* 8044F87C 0044C7BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F880 0044C7C0  4E 80 00 20 */	blr 

.global PushReadedBuffer2
PushReadedBuffer2:
/* 8044F884 0044C7C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044F888 0044C7C8  7C 08 02 A6 */	mflr r0
/* 8044F88C 0044C7CC  3C A0 80 50 */	lis r5, ReadedBufferQueue2@ha
/* 8044F890 0044C7D0  7C 64 1B 78 */	mr r4, r3
/* 8044F894 0044C7D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044F898 0044C7D8  38 65 43 60 */	addi r3, r5, ReadedBufferQueue2@l
/* 8044F89C 0044C7DC  38 A0 00 01 */	li r5, 1
/* 8044F8A0 0044C7E0  4B C9 FC 7D */	bl OSSendMessage
/* 8044F8A4 0044C7E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044F8A8 0044C7E8  7C 08 03 A6 */	mtlr r0
/* 8044F8AC 0044C7EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8044F8B0 0044C7F0  4E 80 00 20 */	blr 
