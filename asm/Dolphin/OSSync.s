.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
SystemCallVector:
.global __OSSystemCallVectorStart
__OSSystemCallVectorStart:
/* 800F17D4 000EE714  7D 30 FA A6 */	mfspr r9, 0x3f0
/* 800F17D8 000EE718  61 2A 00 08 */	ori r10, r9, 8
/* 800F17DC 000EE71C  7D 50 FB A6 */	mtspr 0x3f0, r10
/* 800F17E0 000EE720  4C 00 01 2C */	isync 
/* 800F17E4 000EE724  7C 00 04 AC */	sync 0
/* 800F17E8 000EE728  7D 30 FB A6 */	mtspr 0x3f0, r9
/* 800F17EC 000EE72C  4C 00 00 64 */	rfi 
.global __OSSystemCallVectorEnd
__OSSystemCallVectorEnd:
/* 800F17F0 000EE730  60 00 00 00 */	nop 

.global __OSInitSystemCall
__OSInitSystemCall:
/* 800F17F4 000EE734  7C 08 02 A6 */	mflr r0
/* 800F17F8 000EE738  90 01 00 04 */	stw r0, 4(r1)
/* 800F17FC 000EE73C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800F1800 000EE740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800F1804 000EE744  3C A0 80 00 */	lis r5, 0x80000C00@ha
/* 800F1808 000EE748  3C 80 80 0F */	lis r4, SystemCallVector@ha
/* 800F180C 000EE74C  3C 60 80 0F */	lis r3, __OSSystemCallVectorEnd@ha
/* 800F1810 000EE750  3B E5 0C 00 */	addi r31, r5, 0x80000C00@l
/* 800F1814 000EE754  38 03 17 F0 */	addi r0, r3, __OSSystemCallVectorEnd@l
/* 800F1818 000EE758  38 84 17 D4 */	addi r4, r4, SystemCallVector@l
/* 800F181C 000EE75C  7F E3 FB 78 */	mr r3, r31
/* 800F1820 000EE760  7C A4 00 50 */	subf r5, r4, r0
/* 800F1824 000EE764  4B F1 39 79 */	bl memcpy
/* 800F1828 000EE768  7F E3 FB 78 */	mr r3, r31
/* 800F182C 000EE76C  38 80 01 00 */	li r4, 0x100
/* 800F1830 000EE770  4B FF AF 49 */	bl DCFlushRangeNoSync
/* 800F1834 000EE774  7C 00 04 AC */	sync 0
/* 800F1838 000EE778  7F E3 FB 78 */	mr r3, r31
/* 800F183C 000EE77C  38 80 01 00 */	li r4, 0x100
/* 800F1840 000EE780  4B FF AF BD */	bl ICInvalidateRange
/* 800F1844 000EE784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800F1848 000EE788  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800F184C 000EE78C  38 21 00 10 */	addi r1, r1, 0x10
/* 800F1850 000EE790  7C 08 03 A6 */	mtlr r0
/* 800F1854 000EE794  4E 80 00 20 */	blr 
