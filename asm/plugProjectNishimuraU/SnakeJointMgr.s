.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@", local
	.float 0.0
	.float 0.2
	.float 0.4
	.float 0.6
	.float 0.8
	.float 1.0
.endobj "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"
.balign 4
.obj lbl_8048BCD8, local
	.asciz "bodyjnt3"
.endobj lbl_8048BCD8
.balign 4
.obj lbl_8048BCE4, local
	.asciz "bodyjnt4"
.endobj lbl_8048BCE4
.balign 4
.obj lbl_8048BCF0, local
	.asciz "bodyjnt5"
.endobj lbl_8048BCF0
.balign 4
.obj lbl_8048BCFC, local
	.asciz "bodyjnt6"
.endobj lbl_8048BCFC
.balign 4
.obj lbl_8048BD08, local
	.asciz "bodyjnt7"
.endobj lbl_8048BD08
.balign 4
.obj lbl_8048BD14, local
	.asciz "bodyjnt8"
.endobj lbl_8048BD14
.balign 4
.obj lbl_8048BD20, local
	.4byte lbl_8048BCD8
	.4byte lbl_8048BCE4
	.4byte lbl_8048BCF0
	.4byte lbl_8048BCFC
	.4byte lbl_8048BD08
	.4byte lbl_8048BD14
.endobj lbl_8048BD20

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj sSnakeJointMgr__4Game, local
	.skip 0x4
.endobj sSnakeJointMgr__4Game

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051C8D8, local
	.float 0.0
.endobj lbl_8051C8D8
.obj lbl_8051C8DC, local
	.float 1.0
.endobj lbl_8051C8DC
.obj lbl_8051C8E0, local
	.float 30.0
.endobj lbl_8051C8E0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn SnakeJointCallBack__4GameFP8J3DJointi, local
/* 802D1634 002CE574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1638 002CE578  7C 08 02 A6 */	mflr r0
/* 802D163C 002CE57C  2C 04 00 00 */	cmpwi r4, 0
/* 802D1640 002CE580  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1644 002CE584  40 82 00 14 */	bne .L_802D1658
/* 802D1648 002CE588  80 6D 97 40 */	lwz r3, sSnakeJointMgr__4Game@sda21(r13)
/* 802D164C 002CE58C  28 03 00 00 */	cmplwi r3, 0
/* 802D1650 002CE590  41 82 00 08 */	beq .L_802D1658
/* 802D1654 002CE594  48 00 01 E1 */	bl makeMatrix__Q24Game13SnakeJointMgrFv
.L_802D1658:
/* 802D1658 002CE598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D165C 002CE59C  38 60 00 00 */	li r3, 0
/* 802D1660 002CE5A0  7C 08 03 A6 */	mtlr r0
/* 802D1664 002CE5A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1668 002CE5A8  4E 80 00 20 */	blr 
.endfn SnakeJointCallBack__4GameFP8J3DJointi

.fn __ct__Q24Game13SnakeJointMgrFPQ24Game9EnemyBase, global
/* 802D166C 002CE5AC  38 00 00 00 */	li r0, 0
/* 802D1670 002CE5B0  C0 02 E5 78 */	lfs f0, lbl_8051C8D8@sda21(r2)
/* 802D1674 002CE5B4  90 0D 97 40 */	stw r0, sSnakeJointMgr__4Game@sda21(r13)
/* 802D1678 002CE5B8  90 83 00 00 */	stw r4, 0(r3)
/* 802D167C 002CE5BC  90 03 00 04 */	stw r0, 4(r3)
/* 802D1680 002CE5C0  90 03 00 08 */	stw r0, 8(r3)
/* 802D1684 002CE5C4  90 03 00 0C */	stw r0, 0xc(r3)
/* 802D1688 002CE5C8  90 03 00 10 */	stw r0, 0x10(r3)
/* 802D168C 002CE5CC  90 03 00 14 */	stw r0, 0x14(r3)
/* 802D1690 002CE5D0  90 03 00 18 */	stw r0, 0x18(r3)
/* 802D1694 002CE5D4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802D1698 002CE5D8  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802D169C 002CE5DC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802D16A0 002CE5E0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802D16A4 002CE5E4  4E 80 00 20 */	blr 
.endfn __ct__Q24Game13SnakeJointMgrFPQ24Game9EnemyBase

.fn setupCallBackJoint__Q24Game13SnakeJointMgrFv, global
/* 802D16A8 002CE5E8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D16AC 002CE5EC  7C 08 02 A6 */	mflr r0
/* 802D16B0 002CE5F0  3C 80 80 49 */	lis r4, lbl_8048BD20@ha
/* 802D16B4 002CE5F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D16B8 002CE5F8  39 44 BD 20 */	addi r10, r4, lbl_8048BD20@l
/* 802D16BC 002CE5FC  3C 80 80 2D */	lis r4, SnakeJointCallBack__4GameFP8J3DJointi@ha
/* 802D16C0 002CE600  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 802D16C4 002CE604  7C 7B 1B 78 */	mr r27, r3
/* 802D16C8 002CE608  3B 81 00 08 */	addi r28, r1, 8
/* 802D16CC 002CE60C  3B E4 16 34 */	addi r31, r4, SnakeJointCallBack__4GameFP8J3DJointi@l
/* 802D16D0 002CE610  3B 40 00 00 */	li r26, 0
/* 802D16D4 002CE614  80 A3 00 00 */	lwz r5, 0(r3)
/* 802D16D8 002CE618  81 2A 00 00 */	lwz r9, 0(r10)
/* 802D16DC 002CE61C  81 0A 00 04 */	lwz r8, 4(r10)
/* 802D16E0 002CE620  80 EA 00 08 */	lwz r7, 8(r10)
/* 802D16E4 002CE624  80 CA 00 0C */	lwz r6, 0xc(r10)
/* 802D16E8 002CE628  80 6A 00 10 */	lwz r3, 0x10(r10)
/* 802D16EC 002CE62C  80 0A 00 14 */	lwz r0, 0x14(r10)
/* 802D16F0 002CE630  91 21 00 08 */	stw r9, 8(r1)
/* 802D16F4 002CE634  83 A5 01 74 */	lwz r29, 0x174(r5)
/* 802D16F8 002CE638  91 01 00 0C */	stw r8, 0xc(r1)
/* 802D16FC 002CE63C  90 E1 00 10 */	stw r7, 0x10(r1)
/* 802D1700 002CE640  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802D1704 002CE644  90 61 00 18 */	stw r3, 0x18(r1)
/* 802D1708 002CE648  90 01 00 1C */	stw r0, 0x1c(r1)
.L_802D170C:
/* 802D170C 002CE64C  80 9C 00 00 */	lwz r4, 0(r28)
/* 802D1710 002CE650  7F A3 EB 78 */	mr r3, r29
/* 802D1714 002CE654  48 16 D8 D1 */	bl getJoint__Q28SysShape5ModelFPc
/* 802D1718 002CE658  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D171C 002CE65C  41 82 00 1C */	beq .L_802D1738
/* 802D1720 002CE660  48 15 81 81 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802D1724 002CE664  2C 1A 00 05 */	cmpwi r26, 5
/* 802D1728 002CE668  90 7B 00 04 */	stw r3, 4(r27)
/* 802D172C 002CE66C  40 82 00 0C */	bne .L_802D1738
/* 802D1730 002CE670  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 802D1734 002CE674  93 E3 00 04 */	stw r31, 4(r3)
.L_802D1738:
/* 802D1738 002CE678  3B 5A 00 01 */	addi r26, r26, 1
/* 802D173C 002CE67C  3B 7B 00 04 */	addi r27, r27, 4
/* 802D1740 002CE680  2C 1A 00 06 */	cmpwi r26, 6
/* 802D1744 002CE684  3B 9C 00 04 */	addi r28, r28, 4
/* 802D1748 002CE688  41 80 FF C4 */	blt .L_802D170C
/* 802D174C 002CE68C  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 802D1750 002CE690  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D1754 002CE694  7C 08 03 A6 */	mtlr r0
/* 802D1758 002CE698  38 21 00 40 */	addi r1, r1, 0x40
/* 802D175C 002CE69C  4E 80 00 20 */	blr 
.endfn setupCallBackJoint__Q24Game13SnakeJointMgrFv

.fn startModify__Q24Game13SnakeJointMgrFff, global
/* 802D1760 002CE6A0  38 00 00 01 */	li r0, 1
/* 802D1764 002CE6A4  C0 02 E5 78 */	lfs f0, lbl_8051C8D8@sda21(r2)
/* 802D1768 002CE6A8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802D176C 002CE6AC  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 802D1770 002CE6B0  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 802D1774 002CE6B4  D0 43 00 24 */	stfs f2, 0x24(r3)
/* 802D1778 002CE6B8  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802D177C 002CE6BC  4E 80 00 20 */	blr 
.endfn startModify__Q24Game13SnakeJointMgrFff

.fn returnModify__Q24Game13SnakeJointMgrFf, global
/* 802D1780 002CE6C0  38 00 00 02 */	li r0, 2
/* 802D1784 002CE6C4  C0 02 E5 7C */	lfs f0, lbl_8051C8DC@sda21(r2)
/* 802D1788 002CE6C8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802D178C 002CE6CC  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 802D1790 002CE6D0  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 802D1794 002CE6D4  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802D1798 002CE6D8  4E 80 00 20 */	blr 
.endfn returnModify__Q24Game13SnakeJointMgrFf

.fn finishModify__Q24Game13SnakeJointMgrFv, global
/* 802D179C 002CE6DC  38 00 00 00 */	li r0, 0
/* 802D17A0 002CE6E0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802D17A4 002CE6E4  4E 80 00 20 */	blr 
.endfn finishModify__Q24Game13SnakeJointMgrFv

.fn doAnimation__Q24Game13SnakeJointMgrFv, global
/* 802D17A8 002CE6E8  90 6D 97 40 */	stw r3, sSnakeJointMgr__4Game@sda21(r13)
/* 802D17AC 002CE6EC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D17B0 002CE6F0  2C 00 00 00 */	cmpwi r0, 0
/* 802D17B4 002CE6F4  4D 82 00 20 */	beqlr 
/* 802D17B8 002CE6F8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802D17BC 002CE6FC  C0 62 E5 80 */	lfs f3, lbl_8051C8E0@sda21(r2)
/* 802D17C0 002CE700  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802D17C4 002CE704  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802D17C8 002CE708  C0 02 E5 78 */	lfs f0, lbl_8051C8D8@sda21(r2)
/* 802D17CC 002CE70C  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 802D17D0 002CE710  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 802D17D4 002CE714  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802D17D8 002CE718  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D17DC 002CE71C  40 80 00 08 */	bge .L_802D17E4
/* 802D17E0 002CE720  D0 03 00 28 */	stfs f0, 0x28(r3)
.L_802D17E4:
/* 802D17E4 002CE724  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D17E8 002CE728  2C 00 00 01 */	cmpwi r0, 1
/* 802D17EC 002CE72C  40 82 00 20 */	bne .L_802D180C
/* 802D17F0 002CE730  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802D17F4 002CE734  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 802D17F8 002CE738  C0 42 E5 7C */	lfs f2, lbl_8051C8DC@sda21(r2)
/* 802D17FC 002CE73C  EC 01 00 24 */	fdivs f0, f1, f0
/* 802D1800 002CE740  EC 02 00 28 */	fsubs f0, f2, f0
/* 802D1804 002CE744  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802D1808 002CE748  4E 80 00 20 */	blr 
.L_802D180C:
/* 802D180C 002CE74C  2C 00 00 02 */	cmpwi r0, 2
/* 802D1810 002CE750  4C 82 00 20 */	bnelr 
/* 802D1814 002CE754  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802D1818 002CE758  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 802D181C 002CE75C  EC 01 00 24 */	fdivs f0, f1, f0
/* 802D1820 002CE760  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802D1824 002CE764  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game13SnakeJointMgrFv

.fn finishAnimation__Q24Game13SnakeJointMgrFv, global
/* 802D1828 002CE768  38 00 00 00 */	li r0, 0
/* 802D182C 002CE76C  90 0D 97 40 */	stw r0, sSnakeJointMgr__4Game@sda21(r13)
/* 802D1830 002CE770  4E 80 00 20 */	blr 
.endfn finishAnimation__Q24Game13SnakeJointMgrFv

.fn makeMatrix__Q24Game13SnakeJointMgrFv, global
/* 802D1834 002CE774  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D1838 002CE778  7C 08 02 A6 */	mflr r0
/* 802D183C 002CE77C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D1840 002CE780  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802D1844 002CE784  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802D1848 002CE788  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D184C 002CE78C  2C 00 00 00 */	cmpwi r0, 0
/* 802D1850 002CE790  41 82 02 78 */	beq .L_802D1AC8
/* 802D1854 002CE794  3C 80 80 49 */	lis r4, "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"@ha
/* 802D1858 002CE798  39 01 00 08 */	addi r8, r1, 8
/* 802D185C 002CE79C  38 00 00 06 */	li r0, 6
/* 802D1860 002CE7A0  7C 65 1B 78 */	mr r5, r3
/* 802D1864 002CE7A4  38 E4 BC C0 */	addi r7, r4, "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"@l
/* 802D1868 002CE7A8  7D 06 43 78 */	mr r6, r8
/* 802D186C 002CE7AC  39 20 00 00 */	li r9, 0
/* 802D1870 002CE7B0  7C 09 03 A6 */	mtctr r0
.L_802D1874:
/* 802D1874 002CE7B4  80 85 00 04 */	lwz r4, 4(r5)
/* 802D1878 002CE7B8  2C 09 00 05 */	cmpwi r9, 5
/* 802D187C 002CE7BC  C0 84 00 0C */	lfs f4, 0xc(r4)
/* 802D1880 002CE7C0  C0 A4 00 1C */	lfs f5, 0x1c(r4)
/* 802D1884 002CE7C4  C0 C4 00 2C */	lfs f6, 0x2c(r4)
/* 802D1888 002CE7C8  40 80 00 54 */	bge .L_802D18DC
/* 802D188C 002CE7CC  80 85 00 08 */	lwz r4, 8(r5)
/* 802D1890 002CE7D0  C0 02 E5 78 */	lfs f0, lbl_8051C8D8@sda21(r2)
/* 802D1894 002CE7D4  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 802D1898 002CE7D8  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 802D189C 002CE7DC  EC 65 08 28 */	fsubs f3, f5, f1
/* 802D18A0 002CE7E0  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 802D18A4 002CE7E4  EC 44 10 28 */	fsubs f2, f4, f2
/* 802D18A8 002CE7E8  EC 26 08 28 */	fsubs f1, f6, f1
/* 802D18AC 002CE7EC  EC 63 00 F2 */	fmuls f3, f3, f3
/* 802D18B0 002CE7F0  EC E1 00 72 */	fmuls f7, f1, f1
/* 802D18B4 002CE7F4  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 802D18B8 002CE7F8  EC 27 08 2A */	fadds f1, f7, f1
/* 802D18BC 002CE7FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D18C0 002CE800  40 81 00 14 */	ble .L_802D18D4
/* 802D18C4 002CE804  40 81 00 14 */	ble .L_802D18D8
/* 802D18C8 002CE808  FC 00 08 34 */	frsqrte f0, f1
/* 802D18CC 002CE80C  EC 20 00 72 */	fmuls f1, f0, f1
/* 802D18D0 002CE810  48 00 00 08 */	b .L_802D18D8
.L_802D18D4:
/* 802D18D4 002CE814  FC 20 00 90 */	fmr f1, f0
.L_802D18D8:
/* 802D18D8 002CE818  D0 26 00 00 */	stfs f1, 0(r6)
.L_802D18DC:
/* 802D18DC 002CE81C  C0 07 00 00 */	lfs f0, 0(r7)
/* 802D18E0 002CE820  38 C6 00 04 */	addi r6, r6, 4
/* 802D18E4 002CE824  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 802D18E8 002CE828  38 E7 00 04 */	addi r7, r7, 4
/* 802D18EC 002CE82C  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802D18F0 002CE830  39 29 00 01 */	addi r9, r9, 1
/* 802D18F4 002CE834  EC 01 00 32 */	fmuls f0, f1, f0
/* 802D18F8 002CE838  84 85 00 04 */	lwzu r4, 4(r5)
/* 802D18FC 002CE83C  D0 84 00 0C */	stfs f4, 0xc(r4)
/* 802D1900 002CE840  EC A2 28 3A */	fmadds f5, f2, f0, f5
/* 802D1904 002CE844  D0 A4 00 1C */	stfs f5, 0x1c(r4)
/* 802D1908 002CE848  D0 C4 00 2C */	stfs f6, 0x2c(r4)
/* 802D190C 002CE84C  42 00 FF 68 */	bdnz .L_802D1874
/* 802D1910 002CE850  C1 82 E5 78 */	lfs f12, lbl_8051C8D8@sda21(r2)
/* 802D1914 002CE854  38 00 00 05 */	li r0, 5
/* 802D1918 002CE858  7C 65 1B 78 */	mr r5, r3
/* 802D191C 002CE85C  FD 60 60 90 */	fmr f11, f12
/* 802D1920 002CE860  FD 40 60 90 */	fmr f10, f12
/* 802D1924 002CE864  7C 09 03 A6 */	mtctr r0
.L_802D1928:
/* 802D1928 002CE868  80 C5 00 04 */	lwz r6, 4(r5)
/* 802D192C 002CE86C  80 85 00 08 */	lwz r4, 8(r5)
/* 802D1930 002CE870  C0 06 00 0C */	lfs f0, 0xc(r6)
/* 802D1934 002CE874  C0 64 00 0C */	lfs f3, 0xc(r4)
/* 802D1938 002CE878  C0 44 00 1C */	lfs f2, 0x1c(r4)
/* 802D193C 002CE87C  C0 26 00 1C */	lfs f1, 0x1c(r6)
/* 802D1940 002CE880  EC 03 00 28 */	fsubs f0, f3, f0
/* 802D1944 002CE884  C0 E6 00 18 */	lfs f7, 0x18(r6)
/* 802D1948 002CE888  EC 22 08 28 */	fsubs f1, f2, f1
/* 802D194C 002CE88C  C1 06 00 28 */	lfs f8, 0x28(r6)
/* 802D1950 002CE890  C0 64 00 2C */	lfs f3, 0x2c(r4)
/* 802D1954 002CE894  EC 87 00 32 */	fmuls f4, f7, f0
/* 802D1958 002CE898  C0 46 00 2C */	lfs f2, 0x2c(r6)
/* 802D195C 002CE89C  C0 A6 00 08 */	lfs f5, 8(r6)
/* 802D1960 002CE8A0  EC 43 10 28 */	fsubs f2, f3, f2
/* 802D1964 002CE8A4  EC 68 00 72 */	fmuls f3, f8, f1
/* 802D1968 002CE8A8  ED A1 00 72 */	fmuls f13, f1, f1
/* 802D196C 002CE8AC  EC C5 00 B2 */	fmuls f6, f5, f2
/* 802D1970 002CE8B0  EC 67 18 B8 */	fmsubs f3, f7, f2, f3
/* 802D1974 002CE8B4  EC A5 20 78 */	fmsubs f5, f5, f1, f4
/* 802D1978 002CE8B8  EC 88 30 38 */	fmsubs f4, f8, f0, f6
/* 802D197C 002CE8BC  ED 21 00 F2 */	fmuls f9, f1, f3
/* 802D1980 002CE8C0  EC E0 01 72 */	fmuls f7, f0, f5
/* 802D1984 002CE8C4  EC C2 01 32 */	fmuls f6, f2, f4
/* 802D1988 002CE8C8  EF E2 00 B2 */	fmuls f31, f2, f2
/* 802D198C 002CE8CC  ED 00 68 3A */	fmadds f8, f0, f0, f13
/* 802D1990 002CE8D0  EC C1 31 78 */	fmsubs f6, f1, f5, f6
/* 802D1994 002CE8D4  EC E2 38 F8 */	fmsubs f7, f2, f3, f7
/* 802D1998 002CE8D8  ED BF 40 2A */	fadds f13, f31, f8
/* 802D199C 002CE8DC  ED 00 49 38 */	fmsubs f8, f0, f4, f9
/* 802D19A0 002CE8E0  FC 0D 60 40 */	fcmpo cr0, f13, f12
/* 802D19A4 002CE8E4  40 81 00 14 */	ble .L_802D19B8
/* 802D19A8 002CE8E8  40 81 00 14 */	ble .L_802D19BC
/* 802D19AC 002CE8EC  FD 20 68 34 */	frsqrte f9, f13
/* 802D19B0 002CE8F0  ED A9 03 72 */	fmuls f13, f9, f13
/* 802D19B4 002CE8F4  48 00 00 08 */	b .L_802D19BC
.L_802D19B8:
/* 802D19B8 002CE8F8  FD A0 60 90 */	fmr f13, f12
.L_802D19BC:
/* 802D19BC 002CE8FC  FC 0D 60 40 */	fcmpo cr0, f13, f12
/* 802D19C0 002CE900  40 81 00 1C */	ble .L_802D19DC
/* 802D19C4 002CE904  C1 22 E5 7C */	lfs f9, lbl_8051C8DC@sda21(r2)
/* 802D19C8 002CE908  ED 29 68 24 */	fdivs f9, f9, f13
/* 802D19CC 002CE90C  EC 00 02 72 */	fmuls f0, f0, f9
/* 802D19D0 002CE910  EC 21 02 72 */	fmuls f1, f1, f9
/* 802D19D4 002CE914  EC 42 02 72 */	fmuls f2, f2, f9
/* 802D19D8 002CE918  48 00 00 08 */	b .L_802D19E0
.L_802D19DC:
/* 802D19DC 002CE91C  FD A0 60 90 */	fmr f13, f12
.L_802D19E0:
/* 802D19E0 002CE920  ED 24 01 32 */	fmuls f9, f4, f4
/* 802D19E4 002CE924  EF E5 01 72 */	fmuls f31, f5, f5
/* 802D19E8 002CE928  ED 23 48 FA */	fmadds f9, f3, f3, f9
/* 802D19EC 002CE92C  EF FF 48 2A */	fadds f31, f31, f9
/* 802D19F0 002CE930  FC 1F 58 40 */	fcmpo cr0, f31, f11
/* 802D19F4 002CE934  40 81 00 14 */	ble .L_802D1A08
/* 802D19F8 002CE938  40 81 00 14 */	ble .L_802D1A0C
/* 802D19FC 002CE93C  FD 20 F8 34 */	frsqrte f9, f31
/* 802D1A00 002CE940  EF E9 07 F2 */	fmuls f31, f9, f31
/* 802D1A04 002CE944  48 00 00 08 */	b .L_802D1A0C
.L_802D1A08:
/* 802D1A08 002CE948  FF E0 58 90 */	fmr f31, f11
.L_802D1A0C:
/* 802D1A0C 002CE94C  FC 1F 60 40 */	fcmpo cr0, f31, f12
/* 802D1A10 002CE950  40 81 00 18 */	ble .L_802D1A28
/* 802D1A14 002CE954  C1 22 E5 7C */	lfs f9, lbl_8051C8DC@sda21(r2)
/* 802D1A18 002CE958  ED 29 F8 24 */	fdivs f9, f9, f31
/* 802D1A1C 002CE95C  EC 63 02 72 */	fmuls f3, f3, f9
/* 802D1A20 002CE960  EC 84 02 72 */	fmuls f4, f4, f9
/* 802D1A24 002CE964  EC A5 02 72 */	fmuls f5, f5, f9
.L_802D1A28:
/* 802D1A28 002CE968  ED 27 01 F2 */	fmuls f9, f7, f7
/* 802D1A2C 002CE96C  EF E8 02 32 */	fmuls f31, f8, f8
/* 802D1A30 002CE970  ED 26 49 BA */	fmadds f9, f6, f6, f9
/* 802D1A34 002CE974  EF FF 48 2A */	fadds f31, f31, f9
/* 802D1A38 002CE978  FC 1F 50 40 */	fcmpo cr0, f31, f10
/* 802D1A3C 002CE97C  40 81 00 14 */	ble .L_802D1A50
/* 802D1A40 002CE980  40 81 00 14 */	ble .L_802D1A54
/* 802D1A44 002CE984  FD 20 F8 34 */	frsqrte f9, f31
/* 802D1A48 002CE988  EF E9 07 F2 */	fmuls f31, f9, f31
/* 802D1A4C 002CE98C  48 00 00 08 */	b .L_802D1A54
.L_802D1A50:
/* 802D1A50 002CE990  FF E0 50 90 */	fmr f31, f10
.L_802D1A54:
/* 802D1A54 002CE994  FC 1F 60 40 */	fcmpo cr0, f31, f12
/* 802D1A58 002CE998  40 81 00 18 */	ble .L_802D1A70
/* 802D1A5C 002CE99C  C1 22 E5 7C */	lfs f9, lbl_8051C8DC@sda21(r2)
/* 802D1A60 002CE9A0  ED 29 F8 24 */	fdivs f9, f9, f31
/* 802D1A64 002CE9A4  EC C6 02 72 */	fmuls f6, f6, f9
/* 802D1A68 002CE9A8  EC E7 02 72 */	fmuls f7, f7, f9
/* 802D1A6C 002CE9AC  ED 08 02 72 */	fmuls f8, f8, f9
.L_802D1A70:
/* 802D1A70 002CE9B0  C1 28 00 00 */	lfs f9, 0(r8)
/* 802D1A74 002CE9B4  39 08 00 04 */	addi r8, r8, 4
/* 802D1A78 002CE9B8  ED 2D 48 24 */	fdivs f9, f13, f9
/* 802D1A7C 002CE9BC  EC 00 02 72 */	fmuls f0, f0, f9
/* 802D1A80 002CE9C0  EC 21 02 72 */	fmuls f1, f1, f9
/* 802D1A84 002CE9C4  EC 42 02 72 */	fmuls f2, f2, f9
/* 802D1A88 002CE9C8  D0 06 00 00 */	stfs f0, 0(r6)
/* 802D1A8C 002CE9CC  D0 26 00 10 */	stfs f1, 0x10(r6)
/* 802D1A90 002CE9D0  D0 46 00 20 */	stfs f2, 0x20(r6)
/* 802D1A94 002CE9D4  80 85 00 04 */	lwz r4, 4(r5)
/* 802D1A98 002CE9D8  D0 64 00 04 */	stfs f3, 4(r4)
/* 802D1A9C 002CE9DC  D0 84 00 14 */	stfs f4, 0x14(r4)
/* 802D1AA0 002CE9E0  D0 A4 00 24 */	stfs f5, 0x24(r4)
/* 802D1AA4 002CE9E4  84 85 00 04 */	lwzu r4, 4(r5)
/* 802D1AA8 002CE9E8  D0 C4 00 08 */	stfs f6, 8(r4)
/* 802D1AAC 002CE9EC  D0 E4 00 18 */	stfs f7, 0x18(r4)
/* 802D1AB0 002CE9F0  D1 04 00 28 */	stfs f8, 0x28(r4)
/* 802D1AB4 002CE9F4  42 00 FE 74 */	bdnz .L_802D1928
/* 802D1AB8 002CE9F8  3C 80 80 51 */	lis r4, mCurrentMtx__6J3DSys@ha
/* 802D1ABC 002CE9FC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802D1AC0 002CEA00  38 84 F3 D4 */	addi r4, r4, mCurrentMtx__6J3DSys@l
/* 802D1AC4 002CEA04  4B E1 88 09 */	bl PSMTXCopy
.L_802D1AC8:
/* 802D1AC8 002CEA08  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802D1ACC 002CEA0C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D1AD0 002CEA10  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802D1AD4 002CEA14  7C 08 03 A6 */	mtlr r0
/* 802D1AD8 002CEA18  38 21 00 30 */	addi r1, r1, 0x30
/* 802D1ADC 002CEA1C  4E 80 00 20 */	blr 
.endfn makeMatrix__Q24Game13SnakeJointMgrFv
