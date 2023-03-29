.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048CC60, local
	.asciz "246-KabutoState"
.endobj lbl_8048CC60
.balign 4
.obj lbl_8048CC70, local
	.asciz "fixappear"
.endobj lbl_8048CC70
.balign 4
.obj lbl_8048CC7C, local
	.asciz "fixattack"
.endobj lbl_8048CC7C
.balign 4
.obj lbl_8048CC88, local
	.asciz "fixflick"
.endobj lbl_8048CC88

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game6Kabuto13StateFixFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto13StateFixFlick
.obj __vt__Q34Game6Kabuto14StateFixAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto14StateFixAttack
.obj __vt__Q34Game6Kabuto12StateFixTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto12StateFixTurn
.obj __vt__Q34Game6Kabuto12StateFixWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto12StateFixWait
.obj __vt__Q23efx22THebiAphd_kkabuto_dive, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx22THebiAphd_kkabuto_dive
.obj __vt__Q34Game6Kabuto12StateFixHide, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto12StateFixHide
.obj __vt__Q23efx24THebiAphd_kkabuto_appear, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx24THebiAphd_kkabuto_appear
.obj __vt__Q34Game6Kabuto14StateFixAppear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto14StateFixAppear
.obj __vt__Q34Game6Kabuto12StateFixStay, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto12StateFixStay
.obj __vt__Q34Game6Kabuto11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto11StateAttack
.obj __vt__Q34Game6Kabuto10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto10StateFlick
.obj __vt__Q34Game6Kabuto9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto9StateMove
.obj __vt__Q34Game6Kabuto9StateTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto9StateTurn
.obj __vt__Q34Game6Kabuto9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto9StateWait
.obj __vt__Q34Game6Kabuto9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto9StateDead
.obj __vt__Q34Game6Kabuto5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game6Kabuto5State
.obj __vt__Q34Game6Kabuto3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kabuto3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game6Kabuto3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051CD58, local
	.asciz "dead"
.endobj lbl_8051CD58
.balign 4
.obj lbl_8051CD60, local
	.asciz "wait"
.endobj lbl_8051CD60
.balign 4
.obj lbl_8051CD68, local
	.asciz "turn"
.endobj lbl_8051CD68
.balign 4
.obj lbl_8051CD70, local
	.asciz "move"
.endobj lbl_8051CD70
.balign 4
.obj lbl_8051CD78, local
	.asciz "flick"
.endobj lbl_8051CD78
.balign 4
.obj lbl_8051CD80, local
	.asciz "attack"
.endobj lbl_8051CD80
.balign 4
.obj lbl_8051CD88, local
	.asciz "fixstay"
.endobj lbl_8051CD88
.balign 4
.obj lbl_8051CD90, local
	.asciz "fixhide"
.endobj lbl_8051CD90
.balign 4
.obj lbl_8051CD98, local
	.asciz "fixwait"
.endobj lbl_8051CD98
.balign 4
.obj lbl_8051CDA0, local
	.asciz "fixturn"
.endobj lbl_8051CDA0
.balign 4
.obj lbl_8051CDA8, local
	.float 0.0
.endobj lbl_8051CDA8
.obj lbl_8051CDAC, local
	.float 3.0
.endobj lbl_8051CDAC
.obj lbl_8051CDB0, local # pi
	.float 3.1415927
.endobj lbl_8051CDB0
.obj lbl_8051CDB4, local
	.float 0.0055555557
.endobj lbl_8051CDB4
.obj lbl_8051CDB8, local
	.float 0.5235988
.endobj lbl_8051CDB8
.obj lbl_8051CDBC, local
	.float 6.0
.endobj lbl_8051CDBC
.obj lbl_8051CDC0, local
	.float 625.0
.endobj lbl_8051CDC0
.obj lbl_8051CDC4, local
	.float -1000.0
.endobj lbl_8051CDC4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game6Kabuto3FSMFPQ24Game9EnemyBase, global
/* 802E1834 002DE774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1838 002DE778  7C 08 02 A6 */	mflr r0
/* 802E183C 002DE77C  3C 80 80 49 */	lis r4, lbl_8048CC60@ha
/* 802E1840 002DE780  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1844 002DE784  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1848 002DE788  7C 7F 1B 78 */	mr r31, r3
/* 802E184C 002DE78C  93 C1 00 08 */	stw r30, 8(r1)
/* 802E1850 002DE790  3B C4 CC 60 */	addi r30, r4, lbl_8048CC60@l
/* 802E1854 002DE794  38 80 00 0D */	li r4, 0xd
/* 802E1858 002DE798  4B E4 F0 0D */	bl create__Q24Game17EnemyStateMachineFi
/* 802E185C 002DE79C  38 60 00 10 */	li r3, 0x10
/* 802E1860 002DE7A0  4B D4 26 45 */	bl __nw__FUl
/* 802E1864 002DE7A4  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1868 002DE7A8  41 82 00 3C */	beq .L_802E18A4
/* 802E186C 002DE7AC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1870 002DE7B0  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1874 002DE7B4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1878 002DE7B8  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto9StateDead@ha
/* 802E187C 002DE7BC  90 04 00 00 */	stw r0, 0(r4)
/* 802E1880 002DE7C0  38 E0 00 00 */	li r7, 0
/* 802E1884 002DE7C4  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1888 002DE7C8  38 A2 E9 F8 */	addi r5, r2, lbl_8051CD58@sda21
/* 802E188C 002DE7CC  90 E4 00 04 */	stw r7, 4(r4)
/* 802E1890 002DE7D0  38 03 3A C0 */	addi r0, r3, __vt__Q34Game6Kabuto9StateDead@l
/* 802E1894 002DE7D4  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1898 002DE7D8  90 C4 00 00 */	stw r6, 0(r4)
/* 802E189C 002DE7DC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E18A0 002DE7E0  90 04 00 00 */	stw r0, 0(r4)
.L_802E18A4:
/* 802E18A4 002DE7E4  7F E3 FB 78 */	mr r3, r31
/* 802E18A8 002DE7E8  4B E4 F0 61 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E18AC 002DE7EC  38 60 00 10 */	li r3, 0x10
/* 802E18B0 002DE7F0  4B D4 25 F5 */	bl __nw__FUl
/* 802E18B4 002DE7F4  7C 64 1B 79 */	or. r4, r3, r3
/* 802E18B8 002DE7F8  41 82 00 40 */	beq .L_802E18F8
/* 802E18BC 002DE7FC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E18C0 002DE800  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E18C4 002DE804  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E18C8 002DE808  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto9StateWait@ha
/* 802E18CC 002DE80C  90 04 00 00 */	stw r0, 0(r4)
/* 802E18D0 002DE810  38 00 00 01 */	li r0, 1
/* 802E18D4 002DE814  38 E0 00 00 */	li r7, 0
/* 802E18D8 002DE818  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E18DC 002DE81C  90 04 00 04 */	stw r0, 4(r4)
/* 802E18E0 002DE820  38 A2 EA 00 */	addi r5, r2, lbl_8051CD60@sda21
/* 802E18E4 002DE824  38 03 3A 9C */	addi r0, r3, __vt__Q34Game6Kabuto9StateWait@l
/* 802E18E8 002DE828  90 E4 00 08 */	stw r7, 8(r4)
/* 802E18EC 002DE82C  90 C4 00 00 */	stw r6, 0(r4)
/* 802E18F0 002DE830  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E18F4 002DE834  90 04 00 00 */	stw r0, 0(r4)
.L_802E18F8:
/* 802E18F8 002DE838  7F E3 FB 78 */	mr r3, r31
/* 802E18FC 002DE83C  4B E4 F0 0D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1900 002DE840  38 60 00 10 */	li r3, 0x10
/* 802E1904 002DE844  4B D4 25 A1 */	bl __nw__FUl
/* 802E1908 002DE848  7C 64 1B 79 */	or. r4, r3, r3
/* 802E190C 002DE84C  41 82 00 40 */	beq .L_802E194C
/* 802E1910 002DE850  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1914 002DE854  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1918 002DE858  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E191C 002DE85C  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto9StateTurn@ha
/* 802E1920 002DE860  90 04 00 00 */	stw r0, 0(r4)
/* 802E1924 002DE864  38 00 00 02 */	li r0, 2
/* 802E1928 002DE868  38 E0 00 00 */	li r7, 0
/* 802E192C 002DE86C  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1930 002DE870  90 04 00 04 */	stw r0, 4(r4)
/* 802E1934 002DE874  38 A2 EA 08 */	addi r5, r2, lbl_8051CD68@sda21
/* 802E1938 002DE878  38 03 3A 78 */	addi r0, r3, __vt__Q34Game6Kabuto9StateTurn@l
/* 802E193C 002DE87C  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1940 002DE880  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1944 002DE884  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1948 002DE888  90 04 00 00 */	stw r0, 0(r4)
.L_802E194C:
/* 802E194C 002DE88C  7F E3 FB 78 */	mr r3, r31
/* 802E1950 002DE890  4B E4 EF B9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1954 002DE894  38 60 00 10 */	li r3, 0x10
/* 802E1958 002DE898  4B D4 25 4D */	bl __nw__FUl
/* 802E195C 002DE89C  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1960 002DE8A0  41 82 00 40 */	beq .L_802E19A0
/* 802E1964 002DE8A4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1968 002DE8A8  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E196C 002DE8AC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1970 002DE8B0  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto9StateMove@ha
/* 802E1974 002DE8B4  90 04 00 00 */	stw r0, 0(r4)
/* 802E1978 002DE8B8  38 00 00 03 */	li r0, 3
/* 802E197C 002DE8BC  38 E0 00 00 */	li r7, 0
/* 802E1980 002DE8C0  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1984 002DE8C4  90 04 00 04 */	stw r0, 4(r4)
/* 802E1988 002DE8C8  38 A2 EA 10 */	addi r5, r2, lbl_8051CD70@sda21
/* 802E198C 002DE8CC  38 03 3A 54 */	addi r0, r3, __vt__Q34Game6Kabuto9StateMove@l
/* 802E1990 002DE8D0  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1994 002DE8D4  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1998 002DE8D8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E199C 002DE8DC  90 04 00 00 */	stw r0, 0(r4)
.L_802E19A0:
/* 802E19A0 002DE8E0  7F E3 FB 78 */	mr r3, r31
/* 802E19A4 002DE8E4  4B E4 EF 65 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E19A8 002DE8E8  38 60 00 10 */	li r3, 0x10
/* 802E19AC 002DE8EC  4B D4 24 F9 */	bl __nw__FUl
/* 802E19B0 002DE8F0  7C 64 1B 79 */	or. r4, r3, r3
/* 802E19B4 002DE8F4  41 82 00 40 */	beq .L_802E19F4
/* 802E19B8 002DE8F8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E19BC 002DE8FC  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E19C0 002DE900  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E19C4 002DE904  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto10StateFlick@ha
/* 802E19C8 002DE908  90 04 00 00 */	stw r0, 0(r4)
/* 802E19CC 002DE90C  38 00 00 04 */	li r0, 4
/* 802E19D0 002DE910  38 E0 00 00 */	li r7, 0
/* 802E19D4 002DE914  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E19D8 002DE918  90 04 00 04 */	stw r0, 4(r4)
/* 802E19DC 002DE91C  38 A2 EA 18 */	addi r5, r2, lbl_8051CD78@sda21
/* 802E19E0 002DE920  38 03 3A 30 */	addi r0, r3, __vt__Q34Game6Kabuto10StateFlick@l
/* 802E19E4 002DE924  90 E4 00 08 */	stw r7, 8(r4)
/* 802E19E8 002DE928  90 C4 00 00 */	stw r6, 0(r4)
/* 802E19EC 002DE92C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E19F0 002DE930  90 04 00 00 */	stw r0, 0(r4)
.L_802E19F4:
/* 802E19F4 002DE934  7F E3 FB 78 */	mr r3, r31
/* 802E19F8 002DE938  4B E4 EF 11 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E19FC 002DE93C  38 60 00 10 */	li r3, 0x10
/* 802E1A00 002DE940  4B D4 24 A5 */	bl __nw__FUl
/* 802E1A04 002DE944  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1A08 002DE948  41 82 00 40 */	beq .L_802E1A48
/* 802E1A0C 002DE94C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1A10 002DE950  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1A14 002DE954  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1A18 002DE958  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto11StateAttack@ha
/* 802E1A1C 002DE95C  90 04 00 00 */	stw r0, 0(r4)
/* 802E1A20 002DE960  38 00 00 05 */	li r0, 5
/* 802E1A24 002DE964  38 E0 00 00 */	li r7, 0
/* 802E1A28 002DE968  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1A2C 002DE96C  90 04 00 04 */	stw r0, 4(r4)
/* 802E1A30 002DE970  38 A2 EA 20 */	addi r5, r2, lbl_8051CD80@sda21
/* 802E1A34 002DE974  38 03 3A 0C */	addi r0, r3, __vt__Q34Game6Kabuto11StateAttack@l
/* 802E1A38 002DE978  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1A3C 002DE97C  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1A40 002DE980  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1A44 002DE984  90 04 00 00 */	stw r0, 0(r4)
.L_802E1A48:
/* 802E1A48 002DE988  7F E3 FB 78 */	mr r3, r31
/* 802E1A4C 002DE98C  4B E4 EE BD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1A50 002DE990  38 60 00 10 */	li r3, 0x10
/* 802E1A54 002DE994  4B D4 24 51 */	bl __nw__FUl
/* 802E1A58 002DE998  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1A5C 002DE99C  41 82 00 40 */	beq .L_802E1A9C
/* 802E1A60 002DE9A0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1A64 002DE9A4  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1A68 002DE9A8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1A6C 002DE9AC  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto12StateFixStay@ha
/* 802E1A70 002DE9B0  90 04 00 00 */	stw r0, 0(r4)
/* 802E1A74 002DE9B4  38 00 00 06 */	li r0, 6
/* 802E1A78 002DE9B8  38 E0 00 00 */	li r7, 0
/* 802E1A7C 002DE9BC  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1A80 002DE9C0  90 04 00 04 */	stw r0, 4(r4)
/* 802E1A84 002DE9C4  38 A2 EA 28 */	addi r5, r2, lbl_8051CD88@sda21
/* 802E1A88 002DE9C8  38 03 39 E8 */	addi r0, r3, __vt__Q34Game6Kabuto12StateFixStay@l
/* 802E1A8C 002DE9CC  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1A90 002DE9D0  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1A94 002DE9D4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1A98 002DE9D8  90 04 00 00 */	stw r0, 0(r4)
.L_802E1A9C:
/* 802E1A9C 002DE9DC  7F E3 FB 78 */	mr r3, r31
/* 802E1AA0 002DE9E0  4B E4 EE 69 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1AA4 002DE9E4  38 60 00 10 */	li r3, 0x10
/* 802E1AA8 002DE9E8  4B D4 23 FD */	bl __nw__FUl
/* 802E1AAC 002DE9EC  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1AB0 002DE9F0  41 82 00 40 */	beq .L_802E1AF0
/* 802E1AB4 002DE9F4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1AB8 002DE9F8  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1ABC 002DE9FC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1AC0 002DEA00  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto14StateFixAppear@ha
/* 802E1AC4 002DEA04  90 04 00 00 */	stw r0, 0(r4)
/* 802E1AC8 002DEA08  38 00 00 07 */	li r0, 7
/* 802E1ACC 002DEA0C  38 E0 00 00 */	li r7, 0
/* 802E1AD0 002DEA10  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1AD4 002DEA14  90 04 00 04 */	stw r0, 4(r4)
/* 802E1AD8 002DEA18  38 BE 00 10 */	addi r5, r30, 0x10
/* 802E1ADC 002DEA1C  38 03 39 C4 */	addi r0, r3, __vt__Q34Game6Kabuto14StateFixAppear@l
/* 802E1AE0 002DEA20  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1AE4 002DEA24  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1AE8 002DEA28  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1AEC 002DEA2C  90 04 00 00 */	stw r0, 0(r4)
.L_802E1AF0:
/* 802E1AF0 002DEA30  7F E3 FB 78 */	mr r3, r31
/* 802E1AF4 002DEA34  4B E4 EE 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1AF8 002DEA38  38 60 00 10 */	li r3, 0x10
/* 802E1AFC 002DEA3C  4B D4 23 A9 */	bl __nw__FUl
/* 802E1B00 002DEA40  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1B04 002DEA44  41 82 00 40 */	beq .L_802E1B44
/* 802E1B08 002DEA48  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1B0C 002DEA4C  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1B10 002DEA50  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1B14 002DEA54  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto12StateFixHide@ha
/* 802E1B18 002DEA58  90 04 00 00 */	stw r0, 0(r4)
/* 802E1B1C 002DEA5C  38 00 00 08 */	li r0, 8
/* 802E1B20 002DEA60  38 E0 00 00 */	li r7, 0
/* 802E1B24 002DEA64  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1B28 002DEA68  90 04 00 04 */	stw r0, 4(r4)
/* 802E1B2C 002DEA6C  38 A2 EA 30 */	addi r5, r2, lbl_8051CD90@sda21
/* 802E1B30 002DEA70  38 03 39 8C */	addi r0, r3, __vt__Q34Game6Kabuto12StateFixHide@l
/* 802E1B34 002DEA74  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1B38 002DEA78  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1B3C 002DEA7C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1B40 002DEA80  90 04 00 00 */	stw r0, 0(r4)
.L_802E1B44:
/* 802E1B44 002DEA84  7F E3 FB 78 */	mr r3, r31
/* 802E1B48 002DEA88  4B E4 ED C1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1B4C 002DEA8C  38 60 00 10 */	li r3, 0x10
/* 802E1B50 002DEA90  4B D4 23 55 */	bl __nw__FUl
/* 802E1B54 002DEA94  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1B58 002DEA98  41 82 00 40 */	beq .L_802E1B98
/* 802E1B5C 002DEA9C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1B60 002DEAA0  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1B64 002DEAA4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1B68 002DEAA8  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto12StateFixWait@ha
/* 802E1B6C 002DEAAC  90 04 00 00 */	stw r0, 0(r4)
/* 802E1B70 002DEAB0  38 00 00 09 */	li r0, 9
/* 802E1B74 002DEAB4  38 E0 00 00 */	li r7, 0
/* 802E1B78 002DEAB8  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1B7C 002DEABC  90 04 00 04 */	stw r0, 4(r4)
/* 802E1B80 002DEAC0  38 A2 EA 38 */	addi r5, r2, lbl_8051CD98@sda21
/* 802E1B84 002DEAC4  38 03 39 54 */	addi r0, r3, __vt__Q34Game6Kabuto12StateFixWait@l
/* 802E1B88 002DEAC8  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1B8C 002DEACC  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1B90 002DEAD0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1B94 002DEAD4  90 04 00 00 */	stw r0, 0(r4)
.L_802E1B98:
/* 802E1B98 002DEAD8  7F E3 FB 78 */	mr r3, r31
/* 802E1B9C 002DEADC  4B E4 ED 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1BA0 002DEAE0  38 60 00 10 */	li r3, 0x10
/* 802E1BA4 002DEAE4  4B D4 23 01 */	bl __nw__FUl
/* 802E1BA8 002DEAE8  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1BAC 002DEAEC  41 82 00 40 */	beq .L_802E1BEC
/* 802E1BB0 002DEAF0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1BB4 002DEAF4  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1BB8 002DEAF8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1BBC 002DEAFC  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto12StateFixTurn@ha
/* 802E1BC0 002DEB00  90 04 00 00 */	stw r0, 0(r4)
/* 802E1BC4 002DEB04  38 00 00 0A */	li r0, 0xa
/* 802E1BC8 002DEB08  38 E0 00 00 */	li r7, 0
/* 802E1BCC 002DEB0C  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1BD0 002DEB10  90 04 00 04 */	stw r0, 4(r4)
/* 802E1BD4 002DEB14  38 A2 EA 40 */	addi r5, r2, lbl_8051CDA0@sda21
/* 802E1BD8 002DEB18  38 03 39 30 */	addi r0, r3, __vt__Q34Game6Kabuto12StateFixTurn@l
/* 802E1BDC 002DEB1C  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1BE0 002DEB20  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1BE4 002DEB24  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1BE8 002DEB28  90 04 00 00 */	stw r0, 0(r4)
.L_802E1BEC:
/* 802E1BEC 002DEB2C  7F E3 FB 78 */	mr r3, r31
/* 802E1BF0 002DEB30  4B E4 ED 19 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1BF4 002DEB34  38 60 00 10 */	li r3, 0x10
/* 802E1BF8 002DEB38  4B D4 22 AD */	bl __nw__FUl
/* 802E1BFC 002DEB3C  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1C00 002DEB40  41 82 00 40 */	beq .L_802E1C40
/* 802E1C04 002DEB44  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1C08 002DEB48  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1C0C 002DEB4C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1C10 002DEB50  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto14StateFixAttack@ha
/* 802E1C14 002DEB54  90 04 00 00 */	stw r0, 0(r4)
/* 802E1C18 002DEB58  38 00 00 0B */	li r0, 0xb
/* 802E1C1C 002DEB5C  38 E0 00 00 */	li r7, 0
/* 802E1C20 002DEB60  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1C24 002DEB64  90 04 00 04 */	stw r0, 4(r4)
/* 802E1C28 002DEB68  38 BE 00 1C */	addi r5, r30, 0x1c
/* 802E1C2C 002DEB6C  38 03 39 0C */	addi r0, r3, __vt__Q34Game6Kabuto14StateFixAttack@l
/* 802E1C30 002DEB70  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1C34 002DEB74  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1C38 002DEB78  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1C3C 002DEB7C  90 04 00 00 */	stw r0, 0(r4)
.L_802E1C40:
/* 802E1C40 002DEB80  7F E3 FB 78 */	mr r3, r31
/* 802E1C44 002DEB84  4B E4 EC C5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1C48 002DEB88  38 60 00 10 */	li r3, 0x10
/* 802E1C4C 002DEB8C  4B D4 22 59 */	bl __nw__FUl
/* 802E1C50 002DEB90  7C 64 1B 79 */	or. r4, r3, r3
/* 802E1C54 002DEB94  41 82 00 40 */	beq .L_802E1C94
/* 802E1C58 002DEB98  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E1C5C 002DEB9C  3C A0 80 4D */	lis r5, __vt__Q34Game6Kabuto5State@ha
/* 802E1C60 002DEBA0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E1C64 002DEBA4  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto13StateFixFlick@ha
/* 802E1C68 002DEBA8  90 04 00 00 */	stw r0, 0(r4)
/* 802E1C6C 002DEBAC  38 00 00 0C */	li r0, 0xc
/* 802E1C70 002DEBB0  38 E0 00 00 */	li r7, 0
/* 802E1C74 002DEBB4  38 C5 3A E4 */	addi r6, r5, __vt__Q34Game6Kabuto5State@l
/* 802E1C78 002DEBB8  90 04 00 04 */	stw r0, 4(r4)
/* 802E1C7C 002DEBBC  38 BE 00 28 */	addi r5, r30, 0x28
/* 802E1C80 002DEBC0  38 03 38 E8 */	addi r0, r3, __vt__Q34Game6Kabuto13StateFixFlick@l
/* 802E1C84 002DEBC4  90 E4 00 08 */	stw r7, 8(r4)
/* 802E1C88 002DEBC8  90 C4 00 00 */	stw r6, 0(r4)
/* 802E1C8C 002DEBCC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E1C90 002DEBD0  90 04 00 00 */	stw r0, 0(r4)
.L_802E1C94:
/* 802E1C94 002DEBD4  7F E3 FB 78 */	mr r3, r31
/* 802E1C98 002DEBD8  4B E4 EC 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E1C9C 002DEBDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1CA0 002DEBE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E1CA4 002DEBE4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E1CA8 002DEBE8  7C 08 03 A6 */	mtlr r0
/* 802E1CAC 002DEBEC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1CB0 002DEBF0  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto3FSMFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E1CB4 002DEBF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1CB8 002DEBF8  7C 08 02 A6 */	mflr r0
/* 802E1CBC 002DEBFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1CC0 002DEC00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1CC4 002DEC04  7C 9F 23 78 */	mr r31, r4
/* 802E1CC8 002DEC08  7F E3 FB 78 */	mr r3, r31
/* 802E1CCC 002DEC0C  4B E2 3A 55 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802E1CD0 002DEC10  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E1CD4 002DEC14  7F E3 FB 78 */	mr r3, r31
/* 802E1CD8 002DEC18  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E1CDC 002DEC1C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802E1CE0 002DEC20  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E1CE4 002DEC24  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802E1CE8 002DEC28  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802E1CEC 002DEC2C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802E1CF0 002DEC30  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E1CF4 002DEC34  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802E1CF8 002DEC38  7D 89 03 A6 */	mtctr r12
/* 802E1CFC 002DEC3C  4E 80 04 21 */	bctrl 
/* 802E1D00 002DEC40  2C 03 00 60 */	cmpwi r3, 0x60
/* 802E1D04 002DEC44  40 82 00 2C */	bne .L_802E1D30
/* 802E1D08 002DEC48  7F E3 FB 78 */	mr r3, r31
/* 802E1D0C 002DEC4C  38 80 00 0A */	li r4, 0xa
/* 802E1D10 002DEC50  38 A0 00 00 */	li r5, 0
/* 802E1D14 002DEC54  4B E2 32 F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E1D18 002DEC58  7F E3 FB 78 */	mr r3, r31
/* 802E1D1C 002DEC5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E1D20 002DEC60  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 802E1D24 002DEC64  7D 89 03 A6 */	mtctr r12
/* 802E1D28 002DEC68  4E 80 04 21 */	bctrl 
/* 802E1D2C 002DEC6C  48 00 00 14 */	b .L_802E1D40
.L_802E1D30:
/* 802E1D30 002DEC70  7F E3 FB 78 */	mr r3, r31
/* 802E1D34 002DEC74  38 80 00 00 */	li r4, 0
/* 802E1D38 002DEC78  38 A0 00 00 */	li r5, 0
/* 802E1D3C 002DEC7C  4B E2 32 C9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_802E1D40:
/* 802E1D40 002DEC80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1D44 002DEC84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E1D48 002DEC88  7C 08 03 A6 */	mtlr r0
/* 802E1D4C 002DEC8C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1D50 002DEC90  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn finishWaitEffect__Q34Game6Kabuto3ObjFv, weak
/* 802E1D54 002DEC94  4E 80 00 20 */	blr 
.endfn finishWaitEffect__Q34Game6Kabuto3ObjFv

.fn getEnemyTypeID__Q34Game6Kabuto3ObjFv, weak
/* 802E1D58 002DEC98  38 60 00 4B */	li r3, 0x4b
/* 802E1D5C 002DEC9C  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game6Kabuto3ObjFv

.fn exec__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBase, global
/* 802E1D60 002DECA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1D64 002DECA4  7C 08 02 A6 */	mflr r0
/* 802E1D68 002DECA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1D6C 002DECAC  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802E1D70 002DECB0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E1D74 002DECB4  28 00 00 00 */	cmplwi r0, 0
/* 802E1D78 002DECB8  41 82 00 1C */	beq .L_802E1D94
/* 802E1D7C 002DECBC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E1D80 002DECC0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E1D84 002DECC4  40 82 00 10 */	bne .L_802E1D94
/* 802E1D88 002DECC8  7C 83 23 78 */	mr r3, r4
/* 802E1D8C 002DECCC  38 80 00 00 */	li r4, 0
/* 802E1D90 002DECD0  4B E5 93 61 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_802E1D94:
/* 802E1D94 002DECD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1D98 002DECD8  7C 08 03 A6 */	mtlr r0
/* 802E1D9C 002DECDC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1DA0 002DECE0  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBase, global
/* 802E1DA4 002DECE4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E1DA8 002DECE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1DAC 002DECEC  7C 08 02 A6 */	mflr r0
/* 802E1DB0 002DECF0  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E1DB4 002DECF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1DB8 002DECF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1DBC 002DECFC  7C 9F 23 78 */	mr r31, r4
/* 802E1DC0 002DED00  7F E3 FB 78 */	mr r3, r31
/* 802E1DC4 002DED04  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802E1DC8 002DED08  48 00 29 95 */	bl setRandTarget__Q34Game6Kabuto3ObjFv
/* 802E1DCC 002DED0C  38 00 FF FF */	li r0, -1
/* 802E1DD0 002DED10  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E1DD4 002DED14  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E1DD8 002DED18  7F E3 FB 78 */	mr r3, r31
/* 802E1DDC 002DED1C  38 80 00 05 */	li r4, 5
/* 802E1DE0 002DED20  38 A0 00 00 */	li r5, 0
/* 802E1DE4 002DED24  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E1DE8 002DED28  60 00 04 00 */	ori r0, r0, 0x400
/* 802E1DEC 002DED2C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E1DF0 002DED30  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802E1DF4 002DED34  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802E1DF8 002DED38  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802E1DFC 002DED3C  4B E2 32 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E1E00 002DED40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1E04 002DED44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E1E08 002DED48  7C 08 03 A6 */	mtlr r0
/* 802E1E0C 002DED4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1E10 002DED50  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBase, global
/* 802E1E14 002DED54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1E18 002DED58  7C 08 02 A6 */	mflr r0
/* 802E1E1C 002DED5C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E1E20 002DED60  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1E24 002DED64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E1E28 002DED68  7C 9F 23 78 */	mr r31, r4
/* 802E1E2C 002DED6C  93 C1 00 08 */	stw r30, 8(r1)
/* 802E1E30 002DED70  7C 7E 1B 78 */	mr r30, r3
/* 802E1E34 002DED74  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E1E38 002DED78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E1E3C 002DED7C  4C 40 13 82 */	cror 2, 0, 2
/* 802E1E40 002DED80  40 82 00 20 */	bne .L_802E1E60
/* 802E1E44 002DED84  81 83 00 00 */	lwz r12, 0(r3)
/* 802E1E48 002DED88  38 A0 00 00 */	li r5, 0
/* 802E1E4C 002DED8C  38 C0 00 00 */	li r6, 0
/* 802E1E50 002DED90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E1E54 002DED94  7D 89 03 A6 */	mtctr r12
/* 802E1E58 002DED98  4E 80 04 21 */	bctrl 
/* 802E1E5C 002DED9C  48 00 00 AC */	b .L_802E1F08
.L_802E1E60:
/* 802E1E60 002DEDA0  7F E3 FB 78 */	mr r3, r31
/* 802E1E64 002DEDA4  38 80 00 00 */	li r4, 0
/* 802E1E68 002DEDA8  4B E3 27 F1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E1E6C 002DEDAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E1E70 002DEDB0  41 82 00 18 */	beq .L_802E1E88
/* 802E1E74 002DEDB4  38 00 00 04 */	li r0, 4
/* 802E1E78 002DEDB8  7F E3 FB 78 */	mr r3, r31
/* 802E1E7C 002DEDBC  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E1E80 002DEDC0  4B E2 34 21 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E1E84 002DEDC4  48 00 00 34 */	b .L_802E1EB8
.L_802E1E88:
/* 802E1E88 002DEDC8  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802E1E8C 002DEDCC  C0 02 EA 4C */	lfs f0, lbl_8051CDAC@sda21(r2)
/* 802E1E90 002DEDD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E1E94 002DEDD4  41 81 00 14 */	bgt .L_802E1EA8
/* 802E1E98 002DEDD8  7F E3 FB 78 */	mr r3, r31
/* 802E1E9C 002DEDDC  48 00 2A 59 */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E1EA0 002DEDE0  28 03 00 00 */	cmplwi r3, 0
/* 802E1EA4 002DEDE4  41 82 00 14 */	beq .L_802E1EB8
.L_802E1EA8:
/* 802E1EA8 002DEDE8  38 00 00 02 */	li r0, 2
/* 802E1EAC 002DEDEC  7F E3 FB 78 */	mr r3, r31
/* 802E1EB0 002DEDF0  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E1EB4 002DEDF4  4B E2 33 ED */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802E1EB8:
/* 802E1EB8 002DEDF8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802E1EBC 002DEDFC  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802E1EC0 002DEE00  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802E1EC4 002DEE04  EC 01 00 2A */	fadds f0, f1, f0
/* 802E1EC8 002DEE08  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802E1ECC 002DEE0C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E1ED0 002DEE10  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E1ED4 002DEE14  28 00 00 00 */	cmplwi r0, 0
/* 802E1ED8 002DEE18  41 82 00 30 */	beq .L_802E1F08
/* 802E1EDC 002DEE1C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E1EE0 002DEE20  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E1EE4 002DEE24  40 82 00 24 */	bne .L_802E1F08
/* 802E1EE8 002DEE28  7F C3 F3 78 */	mr r3, r30
/* 802E1EEC 002DEE2C  7F E4 FB 78 */	mr r4, r31
/* 802E1EF0 002DEE30  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E1EF4 002DEE34  38 C0 00 00 */	li r6, 0
/* 802E1EF8 002DEE38  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802E1EFC 002DEE3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E1F00 002DEE40  7D 89 03 A6 */	mtctr r12
/* 802E1F04 002DEE44  4E 80 04 21 */	bctrl 
.L_802E1F08:
/* 802E1F08 002DEE48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1F0C 002DEE4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E1F10 002DEE50  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E1F14 002DEE54  7C 08 03 A6 */	mtlr r0
/* 802E1F18 002DEE58  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1F1C 002DEE5C  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBase, global
/* 802E1F20 002DEE60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1F24 002DEE64  7C 08 02 A6 */	mflr r0
/* 802E1F28 002DEE68  7C 83 23 78 */	mr r3, r4
/* 802E1F2C 002DEE6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1F30 002DEE70  4B E2 58 3D */	bl constraintOff__Q24Game9EnemyBaseFv
/* 802E1F34 002DEE74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1F38 002DEE78  7C 08 03 A6 */	mtlr r0
/* 802E1F3C 002DEE7C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1F40 002DEE80  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E1F44 002DEE84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E1F48 002DEE88  7C 08 02 A6 */	mflr r0
/* 802E1F4C 002DEE8C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E1F50 002DEE90  7C 83 23 78 */	mr r3, r4
/* 802E1F54 002DEE94  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E1F58 002DEE98  38 00 FF FF */	li r0, -1
/* 802E1F5C 002DEE9C  38 A0 00 00 */	li r5, 0
/* 802E1F60 002DEEA0  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802E1F64 002DEEA4  38 80 00 04 */	li r4, 4
/* 802E1F68 002DEEA8  90 03 02 CC */	stw r0, 0x2cc(r3)
/* 802E1F6C 002DEEAC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802E1F70 002DEEB0  60 00 04 00 */	ori r0, r0, 0x400
/* 802E1F74 002DEEB4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802E1F78 002DEEB8  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802E1F7C 002DEEBC  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802E1F80 002DEEC0  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802E1F84 002DEEC4  4B E2 30 81 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E1F88 002DEEC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E1F8C 002DEECC  7C 08 03 A6 */	mtlr r0
/* 802E1F90 002DEED0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E1F94 002DEED4  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBase, global
/* 802E1F98 002DEED8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802E1F9C 002DEEDC  7C 08 02 A6 */	mflr r0
/* 802E1FA0 002DEEE0  90 01 00 84 */	stw r0, 0x84(r1)
/* 802E1FA4 002DEEE4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802E1FA8 002DEEE8  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802E1FAC 002DEEEC  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802E1FB0 002DEEF0  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802E1FB4 002DEEF4  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802E1FB8 002DEEF8  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802E1FBC 002DEEFC  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 802E1FC0 002DEF00  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 802E1FC4 002DEF04  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E1FC8 002DEF08  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802E1FCC 002DEF0C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E1FD0 002DEF10  7C 9F 23 78 */	mr r31, r4
/* 802E1FD4 002DEF14  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E1FD8 002DEF18  7C 7E 1B 78 */	mr r30, r3
/* 802E1FDC 002DEF1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E1FE0 002DEF20  4C 40 13 82 */	cror 2, 0, 2
/* 802E1FE4 002DEF24  40 82 00 20 */	bne .L_802E2004
/* 802E1FE8 002DEF28  81 83 00 00 */	lwz r12, 0(r3)
/* 802E1FEC 002DEF2C  38 A0 00 00 */	li r5, 0
/* 802E1FF0 002DEF30  38 C0 00 00 */	li r6, 0
/* 802E1FF4 002DEF34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E1FF8 002DEF38  7D 89 03 A6 */	mtctr r12
/* 802E1FFC 002DEF3C  4E 80 04 21 */	bctrl 
/* 802E2000 002DEF40  48 00 02 A0 */	b .L_802E22A0
.L_802E2004:
/* 802E2004 002DEF44  7F E3 FB 78 */	mr r3, r31
/* 802E2008 002DEF48  38 80 00 00 */	li r4, 0
/* 802E200C 002DEF4C  4B E3 26 4D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E2010 002DEF50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E2014 002DEF54  41 82 00 18 */	beq .L_802E202C
/* 802E2018 002DEF58  38 00 00 04 */	li r0, 4
/* 802E201C 002DEF5C  7F E3 FB 78 */	mr r3, r31
/* 802E2020 002DEF60  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E2024 002DEF64  4B E2 32 7D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E2028 002DEF68  48 00 02 3C */	b .L_802E2264
.L_802E202C:
/* 802E202C 002DEF6C  7F E3 FB 78 */	mr r3, r31
/* 802E2030 002DEF70  48 00 28 C5 */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E2034 002DEF74  28 03 00 00 */	cmplwi r3, 0
/* 802E2038 002DEF78  41 82 01 2C */	beq .L_802E2164
/* 802E203C 002DEF7C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2040 002DEF80  7C 64 1B 78 */	mr r4, r3
/* 802E2044 002DEF84  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E2048 002DEF88  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802E204C 002DEF8C  81 84 00 00 */	lwz r12, 0(r4)
/* 802E2050 002DEF90  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E2054 002DEF94  7D 89 03 A6 */	mtctr r12
/* 802E2058 002DEF98  4E 80 04 21 */	bctrl 
/* 802E205C 002DEF9C  7F E4 FB 78 */	mr r4, r31
/* 802E2060 002DEFA0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E2064 002DEFA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2068 002DEFA8  38 61 00 20 */	addi r3, r1, 0x20
/* 802E206C 002DEFAC  C3 A1 00 2C */	lfs f29, 0x2c(r1)
/* 802E2070 002DEFB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E2074 002DEFB4  C3 81 00 34 */	lfs f28, 0x34(r1)
/* 802E2078 002DEFB8  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 802E207C 002DEFBC  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 802E2080 002DEFC0  7D 89 03 A6 */	mtctr r12
/* 802E2084 002DEFC4  4E 80 04 21 */	bctrl 
/* 802E2088 002DEFC8  C0 81 00 20 */	lfs f4, 0x20(r1)
/* 802E208C 002DEFCC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E2090 002DEFD0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E2094 002DEFD4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E2098 002DEFD8  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 802E209C 002DEFDC  EC 3D 20 28 */	fsubs f1, f29, f4
/* 802E20A0 002DEFE0  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802E20A4 002DEFE4  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 802E20A8 002DEFE8  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 802E20AC 002DEFEC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802E20B0 002DEFF0  4B D5 30 59 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E20B4 002DEFF4  48 12 FB 1D */	bl roundAng__Ff
/* 802E20B8 002DEFF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E20BC 002DEFFC  FF A0 08 90 */	fmr f29, f1
/* 802E20C0 002DF000  7F E3 FB 78 */	mr r3, r31
/* 802E20C4 002DF004  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E20C8 002DF008  7D 89 03 A6 */	mtctr r12
/* 802E20CC 002DF00C  4E 80 04 21 */	bctrl 
/* 802E20D0 002DF010  FC 40 08 90 */	fmr f2, f1
/* 802E20D4 002DF014  FC 20 E8 90 */	fmr f1, f29
/* 802E20D8 002DF018  48 12 FB 25 */	bl angDist__Fff
/* 802E20DC 002DF01C  EF A1 07 F2 */	fmuls f29, f1, f31
/* 802E20E0 002DF020  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E20E4 002DF024  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E20E8 002DF028  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802E20EC 002DF02C  FC 40 EA 10 */	fabs f2, f29
/* 802E20F0 002DF030  EC 21 00 32 */	fmuls f1, f1, f0
/* 802E20F4 002DF034  FC 00 10 18 */	frsp f0, f2
/* 802E20F8 002DF038  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E20FC 002DF03C  40 81 00 1C */	ble .L_802E2118
/* 802E2100 002DF040  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2104 002DF044  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802E2108 002DF048  40 81 00 0C */	ble .L_802E2114
/* 802E210C 002DF04C  FF A0 08 90 */	fmr f29, f1
/* 802E2110 002DF050  48 00 00 08 */	b .L_802E2118
.L_802E2114:
/* 802E2114 002DF054  FF A0 08 50 */	fneg f29, f1
.L_802E2118:
/* 802E2118 002DF058  7F E3 FB 78 */	mr r3, r31
/* 802E211C 002DF05C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2120 002DF060  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E2124 002DF064  7D 89 03 A6 */	mtctr r12
/* 802E2128 002DF068  4E 80 04 21 */	bctrl 
/* 802E212C 002DF06C  EC 3D 08 2A */	fadds f1, f29, f1
/* 802E2130 002DF070  48 12 FA A1 */	bl roundAng__Ff
/* 802E2134 002DF074  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802E2138 002DF078  7F E3 FB 78 */	mr r3, r31
/* 802E213C 002DF07C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802E2140 002DF080  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802E2144 002DF084  48 00 28 09 */	bl isAttackableTarget__Q34Game6Kabuto3ObjFv
/* 802E2148 002DF088  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E214C 002DF08C  41 82 01 18 */	beq .L_802E2264
/* 802E2150 002DF090  38 00 00 05 */	li r0, 5
/* 802E2154 002DF094  7F E3 FB 78 */	mr r3, r31
/* 802E2158 002DF098  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E215C 002DF09C  4B E2 31 45 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E2160 002DF0A0  48 00 01 04 */	b .L_802E2264
.L_802E2164:
/* 802E2164 002DF0A4  7F E4 FB 78 */	mr r4, r31
/* 802E2168 002DF0A8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E216C 002DF0AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2170 002DF0B0  38 61 00 08 */	addi r3, r1, 8
/* 802E2174 002DF0B4  C3 9F 02 D0 */	lfs f28, 0x2d0(r31)
/* 802E2178 002DF0B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E217C 002DF0BC  C3 FF 02 D8 */	lfs f31, 0x2d8(r31)
/* 802E2180 002DF0C0  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 802E2184 002DF0C4  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 802E2188 002DF0C8  7D 89 03 A6 */	mtctr r12
/* 802E218C 002DF0CC  4E 80 04 21 */	bctrl 
/* 802E2190 002DF0D0  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E2194 002DF0D4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E2198 002DF0D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E219C 002DF0DC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E21A0 002DF0E0  EC 3C 08 28 */	fsubs f1, f28, f1
/* 802E21A4 002DF0E4  EC 5F 00 28 */	fsubs f2, f31, f0
/* 802E21A8 002DF0E8  4B D5 2F 61 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E21AC 002DF0EC  48 12 FA 25 */	bl roundAng__Ff
/* 802E21B0 002DF0F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E21B4 002DF0F4  FF E0 08 90 */	fmr f31, f1
/* 802E21B8 002DF0F8  7F E3 FB 78 */	mr r3, r31
/* 802E21BC 002DF0FC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E21C0 002DF100  7D 89 03 A6 */	mtctr r12
/* 802E21C4 002DF104  4E 80 04 21 */	bctrl 
/* 802E21C8 002DF108  FC 40 08 90 */	fmr f2, f1
/* 802E21CC 002DF10C  FC 20 F8 90 */	fmr f1, f31
/* 802E21D0 002DF110  48 12 FA 2D */	bl angDist__Fff
/* 802E21D4 002DF114  FF E0 08 90 */	fmr f31, f1
/* 802E21D8 002DF118  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E21DC 002DF11C  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E21E0 002DF120  EC 00 07 72 */	fmuls f0, f0, f29
/* 802E21E4 002DF124  EF BF 07 B2 */	fmuls f29, f31, f30
/* 802E21E8 002DF128  EC 21 00 32 */	fmuls f1, f1, f0
/* 802E21EC 002DF12C  FC 00 EA 10 */	fabs f0, f29
/* 802E21F0 002DF130  FC 00 00 18 */	frsp f0, f0
/* 802E21F4 002DF134  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E21F8 002DF138  40 81 00 1C */	ble .L_802E2214
/* 802E21FC 002DF13C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2200 002DF140  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802E2204 002DF144  40 81 00 0C */	ble .L_802E2210
/* 802E2208 002DF148  FF A0 08 90 */	fmr f29, f1
/* 802E220C 002DF14C  48 00 00 08 */	b .L_802E2214
.L_802E2210:
/* 802E2210 002DF150  FF A0 08 50 */	fneg f29, f1
.L_802E2214:
/* 802E2214 002DF154  7F E3 FB 78 */	mr r3, r31
/* 802E2218 002DF158  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E221C 002DF15C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E2220 002DF160  7D 89 03 A6 */	mtctr r12
/* 802E2224 002DF164  4E 80 04 21 */	bctrl 
/* 802E2228 002DF168  EC 3D 08 2A */	fadds f1, f29, f1
/* 802E222C 002DF16C  48 12 F9 A5 */	bl roundAng__Ff
/* 802E2230 002DF170  FC 60 FA 10 */	fabs f3, f31
/* 802E2234 002DF174  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802E2238 002DF178  C0 02 EA 58 */	lfs f0, lbl_8051CDB8@sda21(r2)
/* 802E223C 002DF17C  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802E2240 002DF180  FC 20 18 18 */	frsp f1, f3
/* 802E2244 002DF184  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802E2248 002DF188  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E224C 002DF18C  4C 40 13 82 */	cror 2, 0, 2
/* 802E2250 002DF190  40 82 00 14 */	bne .L_802E2264
/* 802E2254 002DF194  38 00 00 03 */	li r0, 3
/* 802E2258 002DF198  7F E3 FB 78 */	mr r3, r31
/* 802E225C 002DF19C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E2260 002DF1A0  4B E2 30 41 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802E2264:
/* 802E2264 002DF1A4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E2268 002DF1A8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E226C 002DF1AC  28 00 00 00 */	cmplwi r0, 0
/* 802E2270 002DF1B0  41 82 00 30 */	beq .L_802E22A0
/* 802E2274 002DF1B4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E2278 002DF1B8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E227C 002DF1BC  40 82 00 24 */	bne .L_802E22A0
/* 802E2280 002DF1C0  7F C3 F3 78 */	mr r3, r30
/* 802E2284 002DF1C4  7F E4 FB 78 */	mr r4, r31
/* 802E2288 002DF1C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E228C 002DF1CC  38 C0 00 00 */	li r6, 0
/* 802E2290 002DF1D0  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802E2294 002DF1D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2298 002DF1D8  7D 89 03 A6 */	mtctr r12
/* 802E229C 002DF1DC  4E 80 04 21 */	bctrl 
.L_802E22A0:
/* 802E22A0 002DF1E0  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802E22A4 002DF1E4  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802E22A8 002DF1E8  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802E22AC 002DF1EC  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802E22B0 002DF1F0  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802E22B4 002DF1F4  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802E22B8 002DF1F8  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 802E22BC 002DF1FC  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 802E22C0 002DF200  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E22C4 002DF204  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802E22C8 002DF208  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802E22CC 002DF20C  7C 08 03 A6 */	mtlr r0
/* 802E22D0 002DF210  38 21 00 80 */	addi r1, r1, 0x80
/* 802E22D4 002DF214  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBase, global
/* 802E22D8 002DF218  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E22DC 002DF21C  7C 08 02 A6 */	mflr r0
/* 802E22E0 002DF220  7C 83 23 78 */	mr r3, r4
/* 802E22E4 002DF224  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E22E8 002DF228  4B E2 54 85 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 802E22EC 002DF22C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E22F0 002DF230  7C 08 03 A6 */	mtlr r0
/* 802E22F4 002DF234  38 21 00 10 */	addi r1, r1, 0x10
/* 802E22F8 002DF238  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto9StateTurnFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E22FC 002DF23C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E2300 002DF240  7C 08 02 A6 */	mflr r0
/* 802E2304 002DF244  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2308 002DF248  7C 83 23 78 */	mr r3, r4
/* 802E230C 002DF24C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E2310 002DF250  38 A0 00 00 */	li r5, 0
/* 802E2314 002DF254  38 00 FF FF */	li r0, -1
/* 802E2318 002DF258  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802E231C 002DF25C  38 80 00 01 */	li r4, 1
/* 802E2320 002DF260  98 A3 02 E0 */	stb r5, 0x2e0(r3)
/* 802E2324 002DF264  38 A0 00 00 */	li r5, 0
/* 802E2328 002DF268  90 03 02 CC */	stw r0, 0x2cc(r3)
/* 802E232C 002DF26C  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802E2330 002DF270  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802E2334 002DF274  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802E2338 002DF278  4B E2 2C CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E233C 002DF27C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E2340 002DF280  7C 08 03 A6 */	mtlr r0
/* 802E2344 002DF284  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2348 002DF288  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBase, global
/* 802E234C 002DF28C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802E2350 002DF290  7C 08 02 A6 */	mflr r0
/* 802E2354 002DF294  90 01 00 84 */	stw r0, 0x84(r1)
/* 802E2358 002DF298  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802E235C 002DF29C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802E2360 002DF2A0  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802E2364 002DF2A4  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802E2368 002DF2A8  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802E236C 002DF2AC  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802E2370 002DF2B0  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 802E2374 002DF2B4  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 802E2378 002DF2B8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E237C 002DF2BC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802E2380 002DF2C0  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2384 002DF2C4  7C 9F 23 78 */	mr r31, r4
/* 802E2388 002DF2C8  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E238C 002DF2CC  7C 7E 1B 78 */	mr r30, r3
/* 802E2390 002DF2D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E2394 002DF2D4  4C 40 13 82 */	cror 2, 0, 2
/* 802E2398 002DF2D8  40 82 00 20 */	bne .L_802E23B8
/* 802E239C 002DF2DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E23A0 002DF2E0  38 A0 00 00 */	li r5, 0
/* 802E23A4 002DF2E4  38 C0 00 00 */	li r6, 0
/* 802E23A8 002DF2E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E23AC 002DF2EC  7D 89 03 A6 */	mtctr r12
/* 802E23B0 002DF2F0  4E 80 04 21 */	bctrl 
/* 802E23B4 002DF2F4  48 00 02 EC */	b .L_802E26A0
.L_802E23B8:
/* 802E23B8 002DF2F8  7F E3 FB 78 */	mr r3, r31
/* 802E23BC 002DF2FC  38 80 00 00 */	li r4, 0
/* 802E23C0 002DF300  4B E3 22 99 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E23C4 002DF304  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E23C8 002DF308  41 82 00 18 */	beq .L_802E23E0
/* 802E23CC 002DF30C  38 00 00 04 */	li r0, 4
/* 802E23D0 002DF310  7F E3 FB 78 */	mr r3, r31
/* 802E23D4 002DF314  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E23D8 002DF318  4B E2 2E C9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E23DC 002DF31C  48 00 02 2C */	b .L_802E2608
.L_802E23E0:
/* 802E23E0 002DF320  7F E3 FB 78 */	mr r3, r31
/* 802E23E4 002DF324  48 00 25 11 */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E23E8 002DF328  28 03 00 00 */	cmplwi r3, 0
/* 802E23EC 002DF32C  41 82 00 40 */	beq .L_802E242C
/* 802E23F0 002DF330  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E23F4 002DF334  38 00 00 02 */	li r0, 2
/* 802E23F8 002DF338  7F E3 FB 78 */	mr r3, r31
/* 802E23FC 002DF33C  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802E2400 002DF340  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E2404 002DF344  4B E2 2E 9D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E2408 002DF348  7F E3 FB 78 */	mr r3, r31
/* 802E240C 002DF34C  48 00 25 41 */	bl isAttackableTarget__Q34Game6Kabuto3ObjFv
/* 802E2410 002DF350  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E2414 002DF354  41 82 01 F4 */	beq .L_802E2608
/* 802E2418 002DF358  38 00 00 05 */	li r0, 5
/* 802E241C 002DF35C  7F E3 FB 78 */	mr r3, r31
/* 802E2420 002DF360  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E2424 002DF364  4B E2 2E 7D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E2428 002DF368  48 00 01 E0 */	b .L_802E2608
.L_802E242C:
/* 802E242C 002DF36C  7F E4 FB 78 */	mr r4, r31
/* 802E2430 002DF370  38 61 00 20 */	addi r3, r1, 0x20
/* 802E2434 002DF374  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2438 002DF378  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E243C 002DF37C  7D 89 03 A6 */	mtctr r12
/* 802E2440 002DF380  4E 80 04 21 */	bctrl 
/* 802E2444 002DF384  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802E2448 002DF388  C0 02 EA 5C */	lfs f0, lbl_8051CDBC@sda21(r2)
/* 802E244C 002DF38C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802E2450 002DF390  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E2454 002DF394  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E2458 002DF398  C3 FF 02 D0 */	lfs f31, 0x2d0(r31)
/* 802E245C 002DF39C  C3 9F 02 D8 */	lfs f28, 0x2d8(r31)
/* 802E2460 002DF3A0  41 81 00 20 */	bgt .L_802E2480
/* 802E2464 002DF3A4  EC 20 E0 28 */	fsubs f1, f0, f28
/* 802E2468 002DF3A8  C0 02 EA 60 */	lfs f0, lbl_8051CDC0@sda21(r2)
/* 802E246C 002DF3AC  EC 42 F8 28 */	fsubs f2, f2, f31
/* 802E2470 002DF3B0  EC 21 00 72 */	fmuls f1, f1, f1
/* 802E2474 002DF3B4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802E2478 002DF3B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E247C 002DF3BC  40 80 00 18 */	bge .L_802E2494
.L_802E2480:
/* 802E2480 002DF3C0  38 00 00 01 */	li r0, 1
/* 802E2484 002DF3C4  7F E3 FB 78 */	mr r3, r31
/* 802E2488 002DF3C8  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E248C 002DF3CC  4B E2 2E 15 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E2490 002DF3D0  48 00 01 78 */	b .L_802E2608
.L_802E2494:
/* 802E2494 002DF3D4  7F E4 FB 78 */	mr r4, r31
/* 802E2498 002DF3D8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E249C 002DF3DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E24A0 002DF3E0  38 61 00 08 */	addi r3, r1, 8
/* 802E24A4 002DF3E4  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 802E24A8 002DF3E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E24AC 002DF3EC  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 802E24B0 002DF3F0  7D 89 03 A6 */	mtctr r12
/* 802E24B4 002DF3F4  4E 80 04 21 */	bctrl 
/* 802E24B8 002DF3F8  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E24BC 002DF3FC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E24C0 002DF400  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E24C4 002DF404  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E24C8 002DF408  EC 3F 08 28 */	fsubs f1, f31, f1
/* 802E24CC 002DF40C  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802E24D0 002DF410  4B D5 2C 39 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E24D4 002DF414  48 12 F6 FD */	bl roundAng__Ff
/* 802E24D8 002DF418  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E24DC 002DF41C  FF E0 08 90 */	fmr f31, f1
/* 802E24E0 002DF420  7F E3 FB 78 */	mr r3, r31
/* 802E24E4 002DF424  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E24E8 002DF428  7D 89 03 A6 */	mtctr r12
/* 802E24EC 002DF42C  4E 80 04 21 */	bctrl 
/* 802E24F0 002DF430  FC 40 08 90 */	fmr f2, f1
/* 802E24F4 002DF434  FC 20 F8 90 */	fmr f1, f31
/* 802E24F8 002DF438  48 12 F7 05 */	bl angDist__Fff
/* 802E24FC 002DF43C  FF E0 08 90 */	fmr f31, f1
/* 802E2500 002DF440  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E2504 002DF444  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E2508 002DF448  EC 00 07 72 */	fmuls f0, f0, f29
/* 802E250C 002DF44C  EF BF 07 B2 */	fmuls f29, f31, f30
/* 802E2510 002DF450  EC 21 00 32 */	fmuls f1, f1, f0
/* 802E2514 002DF454  FC 00 EA 10 */	fabs f0, f29
/* 802E2518 002DF458  FC 00 00 18 */	frsp f0, f0
/* 802E251C 002DF45C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E2520 002DF460  40 81 00 1C */	ble .L_802E253C
/* 802E2524 002DF464  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2528 002DF468  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802E252C 002DF46C  40 81 00 0C */	ble .L_802E2538
/* 802E2530 002DF470  FF A0 08 90 */	fmr f29, f1
/* 802E2534 002DF474  48 00 00 08 */	b .L_802E253C
.L_802E2538:
/* 802E2538 002DF478  FF A0 08 50 */	fneg f29, f1
.L_802E253C:
/* 802E253C 002DF47C  7F E3 FB 78 */	mr r3, r31
/* 802E2540 002DF480  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2544 002DF484  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E2548 002DF488  7D 89 03 A6 */	mtctr r12
/* 802E254C 002DF48C  4E 80 04 21 */	bctrl 
/* 802E2550 002DF490  EC 3D 08 2A */	fadds f1, f29, f1
/* 802E2554 002DF494  48 12 F6 7D */	bl roundAng__Ff
/* 802E2558 002DF498  FC 60 FA 10 */	fabs f3, f31
/* 802E255C 002DF49C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802E2560 002DF4A0  C0 02 EA 58 */	lfs f0, lbl_8051CDB8@sda21(r2)
/* 802E2564 002DF4A4  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802E2568 002DF4A8  FC 20 18 18 */	frsp f1, f3
/* 802E256C 002DF4AC  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802E2570 002DF4B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E2574 002DF4B4  4C 40 13 82 */	cror 2, 0, 2
/* 802E2578 002DF4B8  40 82 00 80 */	bne .L_802E25F8
/* 802E257C 002DF4BC  88 1F 02 E0 */	lbz r0, 0x2e0(r31)
/* 802E2580 002DF4C0  28 00 00 00 */	cmplwi r0, 0
/* 802E2584 002DF4C4  41 82 00 84 */	beq .L_802E2608
/* 802E2588 002DF4C8  7F E3 FB 78 */	mr r3, r31
/* 802E258C 002DF4CC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802E2590 002DF4D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2594 002DF4D4  C3 A4 02 E4 */	lfs f29, 0x2e4(r4)
/* 802E2598 002DF4D8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E259C 002DF4DC  7D 89 03 A6 */	mtctr r12
/* 802E25A0 002DF4E0  4E 80 04 21 */	bctrl 
/* 802E25A4 002DF4E4  4B DE D2 79 */	bl sin
/* 802E25A8 002DF4E8  7F E3 FB 78 */	mr r3, r31
/* 802E25AC 002DF4EC  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802E25B0 002DF4F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E25B4 002DF4F4  FF C0 08 18 */	frsp f30, f1
/* 802E25B8 002DF4F8  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 802E25BC 002DF4FC  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802E25C0 002DF500  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E25C4 002DF504  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802E25C8 002DF508  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 802E25CC 002DF50C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802E25D0 002DF510  7D 89 03 A6 */	mtctr r12
/* 802E25D4 002DF514  4E 80 04 21 */	bctrl 
/* 802E25D8 002DF518  4B DE CC DD */	bl cos
/* 802E25DC 002DF51C  EC 1D 07 B2 */	fmuls f0, f29, f30
/* 802E25E0 002DF520  FC 20 08 18 */	frsp f1, f1
/* 802E25E4 002DF524  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802E25E8 002DF528  EC 1D 00 72 */	fmuls f0, f29, f1
/* 802E25EC 002DF52C  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 802E25F0 002DF530  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802E25F4 002DF534  48 00 00 14 */	b .L_802E2608
.L_802E25F8:
/* 802E25F8 002DF538  38 00 00 02 */	li r0, 2
/* 802E25FC 002DF53C  7F E3 FB 78 */	mr r3, r31
/* 802E2600 002DF540  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E2604 002DF544  4B E2 2C 9D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802E2608:
/* 802E2608 002DF548  7F E3 FB 78 */	mr r3, r31
/* 802E260C 002DF54C  4B E2 4C F5 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802E2610 002DF550  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E2614 002DF554  41 82 00 28 */	beq .L_802E263C
/* 802E2618 002DF558  38 00 00 00 */	li r0, 0
/* 802E261C 002DF55C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2620 002DF560  98 1F 02 E0 */	stb r0, 0x2e0(r31)
/* 802E2624 002DF564  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2628 002DF568  60 00 04 00 */	ori r0, r0, 0x400
/* 802E262C 002DF56C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2630 002DF570  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802E2634 002DF574  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802E2638 002DF578  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802E263C:
/* 802E263C 002DF57C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802E2640 002DF580  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802E2644 002DF584  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802E2648 002DF588  EC 01 00 2A */	fadds f0, f1, f0
/* 802E264C 002DF58C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802E2650 002DF590  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E2654 002DF594  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E2658 002DF598  28 00 00 00 */	cmplwi r0, 0
/* 802E265C 002DF59C  41 82 00 44 */	beq .L_802E26A0
/* 802E2660 002DF5A0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E2664 002DF5A4  28 00 00 00 */	cmplwi r0, 0
/* 802E2668 002DF5A8  40 82 00 10 */	bne .L_802E2678
/* 802E266C 002DF5AC  38 00 00 01 */	li r0, 1
/* 802E2670 002DF5B0  98 1F 02 E0 */	stb r0, 0x2e0(r31)
/* 802E2674 002DF5B4  48 00 00 2C */	b .L_802E26A0
.L_802E2678:
/* 802E2678 002DF5B8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E267C 002DF5BC  40 82 00 24 */	bne .L_802E26A0
/* 802E2680 002DF5C0  7F C3 F3 78 */	mr r3, r30
/* 802E2684 002DF5C4  7F E4 FB 78 */	mr r4, r31
/* 802E2688 002DF5C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E268C 002DF5CC  38 C0 00 00 */	li r6, 0
/* 802E2690 002DF5D0  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802E2694 002DF5D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2698 002DF5D8  7D 89 03 A6 */	mtctr r12
/* 802E269C 002DF5DC  4E 80 04 21 */	bctrl 
.L_802E26A0:
/* 802E26A0 002DF5E0  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802E26A4 002DF5E4  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802E26A8 002DF5E8  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802E26AC 002DF5EC  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802E26B0 002DF5F0  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802E26B4 002DF5F4  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802E26B8 002DF5F8  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 802E26BC 002DF5FC  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 802E26C0 002DF600  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E26C4 002DF604  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802E26C8 002DF608  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802E26CC 002DF60C  7C 08 03 A6 */	mtlr r0
/* 802E26D0 002DF610  38 21 00 80 */	addi r1, r1, 0x80
/* 802E26D4 002DF614  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBase, global
/* 802E26D8 002DF618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E26DC 002DF61C  7C 08 02 A6 */	mflr r0
/* 802E26E0 002DF620  7C 83 23 78 */	mr r3, r4
/* 802E26E4 002DF624  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E26E8 002DF628  4B E2 50 85 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 802E26EC 002DF62C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E26F0 002DF630  7C 08 03 A6 */	mtlr r0
/* 802E26F4 002DF634  38 21 00 10 */	addi r1, r1, 0x10
/* 802E26F8 002DF638  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E26FC 002DF63C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E2700 002DF640  7C 08 02 A6 */	mflr r0
/* 802E2704 002DF644  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2708 002DF648  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E270C 002DF64C  38 00 FF FF */	li r0, -1
/* 802E2710 002DF650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E2714 002DF654  7C 9F 23 78 */	mr r31, r4
/* 802E2718 002DF658  7F E3 FB 78 */	mr r3, r31
/* 802E271C 002DF65C  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802E2720 002DF660  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802E2724 002DF664  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E2728 002DF668  60 00 04 00 */	ori r0, r0, 0x400
/* 802E272C 002DF66C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E2730 002DF670  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802E2734 002DF674  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802E2738 002DF678  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802E273C 002DF67C  4B E1 F2 91 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802E2740 002DF680  7F E3 FB 78 */	mr r3, r31
/* 802E2744 002DF684  38 80 00 02 */	li r4, 2
/* 802E2748 002DF688  38 A0 00 00 */	li r5, 0
/* 802E274C 002DF68C  4B E2 28 B9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E2750 002DF690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E2754 002DF694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E2758 002DF698  7C 08 03 A6 */	mtlr r0
/* 802E275C 002DF69C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2760 002DF6A0  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBase, global
/* 802E2764 002DF6A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E2768 002DF6A8  7C 08 02 A6 */	mflr r0
/* 802E276C 002DF6AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E2770 002DF6B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802E2774 002DF6B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802E2778 002DF6B8  7C 9E 23 78 */	mr r30, r4
/* 802E277C 002DF6BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802E2780 002DF6C0  7C 7D 1B 78 */	mr r29, r3
/* 802E2784 002DF6C4  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802E2788 002DF6C8  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802E278C 002DF6CC  28 00 00 00 */	cmplwi r0, 0
/* 802E2790 002DF6D0  41 82 01 24 */	beq .L_802E28B4
/* 802E2794 002DF6D4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802E2798 002DF6D8  28 00 00 02 */	cmplwi r0, 2
/* 802E279C 002DF6DC  40 82 00 C8 */	bne .L_802E2864
/* 802E27A0 002DF6E0  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802E27A4 002DF6E4  7F C3 F3 78 */	mr r3, r30
/* 802E27A8 002DF6E8  C0 82 EA 64 */	lfs f4, lbl_8051CDC4@sda21(r2)
/* 802E27AC 002DF6EC  38 80 00 00 */	li r4, 0
/* 802E27B0 002DF6F0  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E27B4 002DF6F4  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E27B8 002DF6F8  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E27BC 002DF6FC  4B E3 0F D5 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802E27C0 002DF700  7F C3 F3 78 */	mr r3, r30
/* 802E27C4 002DF704  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 802E27C8 002DF708  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E27CC 002DF70C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E27D0 002DF710  7D 89 03 A6 */	mtctr r12
/* 802E27D4 002DF714  4E 80 04 21 */	bctrl 
/* 802E27D8 002DF718  FC 80 08 90 */	fmr f4, f1
/* 802E27DC 002DF71C  C0 3F 05 14 */	lfs f1, 0x514(r31)
/* 802E27E0 002DF720  C0 5F 04 C4 */	lfs f2, 0x4c4(r31)
/* 802E27E4 002DF724  7F C3 F3 78 */	mr r3, r30
/* 802E27E8 002DF728  C0 7F 04 EC */	lfs f3, 0x4ec(r31)
/* 802E27EC 002DF72C  38 80 00 00 */	li r4, 0
/* 802E27F0 002DF730  4B E3 0C E5 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E27F4 002DF734  7F C3 F3 78 */	mr r3, r30
/* 802E27F8 002DF738  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 802E27FC 002DF73C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E2800 002DF740  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E2804 002DF744  7D 89 03 A6 */	mtctr r12
/* 802E2808 002DF748  4E 80 04 21 */	bctrl 
/* 802E280C 002DF74C  FC 80 08 90 */	fmr f4, f1
/* 802E2810 002DF750  C0 3F 05 3C */	lfs f1, 0x53c(r31)
/* 802E2814 002DF754  C0 5F 04 C4 */	lfs f2, 0x4c4(r31)
/* 802E2818 002DF758  7F C3 F3 78 */	mr r3, r30
/* 802E281C 002DF75C  C0 7F 04 EC */	lfs f3, 0x4ec(r31)
/* 802E2820 002DF760  38 80 00 00 */	li r4, 0
/* 802E2824 002DF764  4B E3 08 F9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E2828 002DF768  C0 22 EA 48 */	lfs f1, lbl_8051CDA8@sda21(r2)
/* 802E282C 002DF76C  D0 3E 02 0C */	stfs f1, 0x20c(r30)
/* 802E2830 002DF770  C0 1E 02 00 */	lfs f0, 0x200(r30)
/* 802E2834 002DF774  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E2838 002DF778  4C 40 13 82 */	cror 2, 0, 2
/* 802E283C 002DF77C  40 82 00 78 */	bne .L_802E28B4
/* 802E2840 002DF780  7F A3 EB 78 */	mr r3, r29
/* 802E2844 002DF784  7F C4 F3 78 */	mr r4, r30
/* 802E2848 002DF788  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E284C 002DF78C  38 A0 00 00 */	li r5, 0
/* 802E2850 002DF790  38 C0 00 00 */	li r6, 0
/* 802E2854 002DF794  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2858 002DF798  7D 89 03 A6 */	mtctr r12
/* 802E285C 002DF79C  4E 80 04 21 */	bctrl 
/* 802E2860 002DF7A0  48 00 00 54 */	b .L_802E28B4
.L_802E2864:
/* 802E2864 002DF7A4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E2868 002DF7A8  40 82 00 4C */	bne .L_802E28B4
/* 802E286C 002DF7AC  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 802E2870 002DF7B0  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2874 002DF7B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E2878 002DF7B8  4C 40 13 82 */	cror 2, 0, 2
/* 802E287C 002DF7BC  40 82 00 20 */	bne .L_802E289C
/* 802E2880 002DF7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E2884 002DF7C4  38 A0 00 00 */	li r5, 0
/* 802E2888 002DF7C8  38 C0 00 00 */	li r6, 0
/* 802E288C 002DF7CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2890 002DF7D0  7D 89 03 A6 */	mtctr r12
/* 802E2894 002DF7D4  4E 80 04 21 */	bctrl 
/* 802E2898 002DF7D8  48 00 00 1C */	b .L_802E28B4
.L_802E289C:
/* 802E289C 002DF7DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E28A0 002DF7E0  38 A0 00 05 */	li r5, 5
/* 802E28A4 002DF7E4  38 C0 00 00 */	li r6, 0
/* 802E28A8 002DF7E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E28AC 002DF7EC  7D 89 03 A6 */	mtctr r12
/* 802E28B0 002DF7F0  4E 80 04 21 */	bctrl 
.L_802E28B4:
/* 802E28B4 002DF7F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E28B8 002DF7F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802E28BC 002DF7FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802E28C0 002DF800  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802E28C4 002DF804  7C 08 03 A6 */	mtlr r0
/* 802E28C8 002DF808  38 21 00 20 */	addi r1, r1, 0x20
/* 802E28CC 002DF80C  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBase, global
/* 802E28D0 002DF810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E28D4 002DF814  7C 08 02 A6 */	mflr r0
/* 802E28D8 002DF818  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E28DC 002DF81C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E28E0 002DF820  7C 9F 23 78 */	mr r31, r4
/* 802E28E4 002DF824  7F E3 FB 78 */	mr r3, r31
/* 802E28E8 002DF828  4B E2 4E 85 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 802E28EC 002DF82C  7F E3 FB 78 */	mr r3, r31
/* 802E28F0 002DF830  4B E1 F0 8D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802E28F4 002DF834  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E28F8 002DF838  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E28FC 002DF83C  7C 08 03 A6 */	mtlr r0
/* 802E2900 002DF840  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2904 002DF844  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto10StateFlickFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E2908 002DF848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E290C 002DF84C  7C 08 02 A6 */	mflr r0
/* 802E2910 002DF850  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2914 002DF854  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E2918 002DF858  38 00 FF FF */	li r0, -1
/* 802E291C 002DF85C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E2920 002DF860  7C 9F 23 78 */	mr r31, r4
/* 802E2924 002DF864  7F E3 FB 78 */	mr r3, r31
/* 802E2928 002DF868  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802E292C 002DF86C  D0 04 02 DC */	stfs f0, 0x2dc(r4)
/* 802E2930 002DF870  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802E2934 002DF874  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E2938 002DF878  60 00 04 00 */	ori r0, r0, 0x400
/* 802E293C 002DF87C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E2940 002DF880  4B E1 F0 8D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802E2944 002DF884  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2948 002DF888  7F E3 FB 78 */	mr r3, r31
/* 802E294C 002DF88C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2950 002DF890  38 80 00 03 */	li r4, 3
/* 802E2954 002DF894  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802E2958 002DF898  38 A0 00 00 */	li r5, 0
/* 802E295C 002DF89C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2960 002DF8A0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802E2964 002DF8A4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802E2968 002DF8A8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802E296C 002DF8AC  4B E2 26 99 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E2970 002DF8B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E2974 002DF8B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E2978 002DF8B8  7C 08 03 A6 */	mtlr r0
/* 802E297C 002DF8BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2980 002DF8C0  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBase, global
/* 802E2984 002DF8C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E2988 002DF8C8  7C 08 02 A6 */	mflr r0
/* 802E298C 002DF8CC  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2990 002DF8D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E2994 002DF8D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E2998 002DF8D8  7C 9F 23 78 */	mr r31, r4
/* 802E299C 002DF8DC  93 C1 00 08 */	stw r30, 8(r1)
/* 802E29A0 002DF8E0  7C 7E 1B 78 */	mr r30, r3
/* 802E29A4 002DF8E4  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E29A8 002DF8E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E29AC 002DF8EC  4C 40 13 82 */	cror 2, 0, 2
/* 802E29B0 002DF8F0  40 82 00 20 */	bne .L_802E29D0
/* 802E29B4 002DF8F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802E29B8 002DF8F8  38 A0 00 00 */	li r5, 0
/* 802E29BC 002DF8FC  38 C0 00 00 */	li r6, 0
/* 802E29C0 002DF900  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E29C4 002DF904  7D 89 03 A6 */	mtctr r12
/* 802E29C8 002DF908  4E 80 04 21 */	bctrl 
/* 802E29CC 002DF90C  48 00 00 C8 */	b .L_802E2A94
.L_802E29D0:
/* 802E29D0 002DF910  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E29D4 002DF914  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E29D8 002DF918  28 00 00 00 */	cmplwi r0, 0
/* 802E29DC 002DF91C  41 82 00 B8 */	beq .L_802E2A94
/* 802E29E0 002DF920  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E29E4 002DF924  28 00 00 02 */	cmplwi r0, 2
/* 802E29E8 002DF928  40 82 00 18 */	bne .L_802E2A00
/* 802E29EC 002DF92C  7F E3 FB 78 */	mr r3, r31
/* 802E29F0 002DF930  48 00 22 19 */	bl createStoneAttack__Q34Game6Kabuto3ObjFv
/* 802E29F4 002DF934  7F E3 FB 78 */	mr r3, r31
/* 802E29F8 002DF938  48 00 23 A9 */	bl createRockEmitEffect__Q34Game6Kabuto3ObjFv
/* 802E29FC 002DF93C  48 00 00 98 */	b .L_802E2A94
.L_802E2A00:
/* 802E2A00 002DF940  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E2A04 002DF944  40 82 00 90 */	bne .L_802E2A94
/* 802E2A08 002DF948  7F E3 FB 78 */	mr r3, r31
/* 802E2A0C 002DF94C  38 80 00 00 */	li r4, 0
/* 802E2A10 002DF950  4B E3 1C 49 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E2A14 002DF954  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E2A18 002DF958  41 82 00 28 */	beq .L_802E2A40
/* 802E2A1C 002DF95C  7F C3 F3 78 */	mr r3, r30
/* 802E2A20 002DF960  7F E4 FB 78 */	mr r4, r31
/* 802E2A24 002DF964  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E2A28 002DF968  38 A0 00 04 */	li r5, 4
/* 802E2A2C 002DF96C  38 C0 00 00 */	li r6, 0
/* 802E2A30 002DF970  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2A34 002DF974  7D 89 03 A6 */	mtctr r12
/* 802E2A38 002DF978  4E 80 04 21 */	bctrl 
/* 802E2A3C 002DF97C  48 00 00 58 */	b .L_802E2A94
.L_802E2A40:
/* 802E2A40 002DF980  7F E3 FB 78 */	mr r3, r31
/* 802E2A44 002DF984  48 00 1E B1 */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E2A48 002DF988  28 03 00 00 */	cmplwi r3, 0
/* 802E2A4C 002DF98C  41 82 00 28 */	beq .L_802E2A74
/* 802E2A50 002DF990  7F C3 F3 78 */	mr r3, r30
/* 802E2A54 002DF994  7F E4 FB 78 */	mr r4, r31
/* 802E2A58 002DF998  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E2A5C 002DF99C  38 A0 00 02 */	li r5, 2
/* 802E2A60 002DF9A0  38 C0 00 00 */	li r6, 0
/* 802E2A64 002DF9A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2A68 002DF9A8  7D 89 03 A6 */	mtctr r12
/* 802E2A6C 002DF9AC  4E 80 04 21 */	bctrl 
/* 802E2A70 002DF9B0  48 00 00 24 */	b .L_802E2A94
.L_802E2A74:
/* 802E2A74 002DF9B4  7F C3 F3 78 */	mr r3, r30
/* 802E2A78 002DF9B8  7F E4 FB 78 */	mr r4, r31
/* 802E2A7C 002DF9BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E2A80 002DF9C0  38 A0 00 01 */	li r5, 1
/* 802E2A84 002DF9C4  38 C0 00 00 */	li r6, 0
/* 802E2A88 002DF9C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2A8C 002DF9CC  7D 89 03 A6 */	mtctr r12
/* 802E2A90 002DF9D0  4E 80 04 21 */	bctrl 
.L_802E2A94:
/* 802E2A94 002DF9D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E2A98 002DF9D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E2A9C 002DF9DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E2AA0 002DF9E0  7C 08 03 A6 */	mtlr r0
/* 802E2AA4 002DF9E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2AA8 002DF9E8  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBase, global
/* 802E2AAC 002DF9EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E2AB0 002DF9F0  7C 08 02 A6 */	mflr r0
/* 802E2AB4 002DF9F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E2AB8 002DF9F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E2ABC 002DF9FC  7C 9F 23 78 */	mr r31, r4
/* 802E2AC0 002DFA00  7F E3 FB 78 */	mr r3, r31
/* 802E2AC4 002DFA04  4B E2 4C A9 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 802E2AC8 002DFA08  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2ACC 002DFA0C  7F E3 FB 78 */	mr r3, r31
/* 802E2AD0 002DFA10  60 00 00 40 */	ori r0, r0, 0x40
/* 802E2AD4 002DFA14  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2AD8 002DFA18  4B E1 EE A5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802E2ADC 002DFA1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E2AE0 002DFA20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E2AE4 002DFA24  7C 08 03 A6 */	mtlr r0
/* 802E2AE8 002DFA28  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2AEC 002DFA2C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E2AF0 002DFA30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E2AF4 002DFA34  7C 08 02 A6 */	mflr r0
/* 802E2AF8 002DFA38  38 60 FF FF */	li r3, -1
/* 802E2AFC 002DFA3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E2B00 002DFA40  38 00 00 01 */	li r0, 1
/* 802E2B04 002DFA44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E2B08 002DFA48  7C 9F 23 78 */	mr r31, r4
/* 802E2B0C 002DFA4C  90 64 02 CC */	stw r3, 0x2cc(r4)
/* 802E2B10 002DFA50  7F E3 FB 78 */	mr r3, r31
/* 802E2B14 002DFA54  38 80 00 00 */	li r4, 0
/* 802E2B18 002DFA58  98 1F 02 E1 */	stb r0, 0x2e1(r31)
/* 802E2B1C 002DFA5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2B20 002DFA60  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802E2B24 002DFA64  7D 89 03 A6 */	mtctr r12
/* 802E2B28 002DFA68  4E 80 04 21 */	bctrl 
/* 802E2B2C 002DFA6C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2B30 002DFA70  7F E3 FB 78 */	mr r3, r31
/* 802E2B34 002DFA74  38 80 00 0B */	li r4, 0xb
/* 802E2B38 002DFA78  38 A0 00 00 */	li r5, 0
/* 802E2B3C 002DFA7C  64 00 00 40 */	oris r0, r0, 0x40
/* 802E2B40 002DFA80  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2B44 002DFA84  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2B48 002DFA88  60 00 00 01 */	ori r0, r0, 1
/* 802E2B4C 002DFA8C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2B50 002DFA90  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2B54 002DFA94  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 802E2B58 002DFA98  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2B5C 002DFA9C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2B60 002DFAA0  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 802E2B64 002DFAA4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2B68 002DFAA8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2B6C 002DFAAC  64 00 40 00 */	oris r0, r0, 0x4000
/* 802E2B70 002DFAB0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2B74 002DFAB4  4B E2 24 91 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E2B78 002DFAB8  7F E3 FB 78 */	mr r3, r31
/* 802E2B7C 002DFABC  4B E2 47 65 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802E2B80 002DFAC0  7F E3 FB 78 */	mr r3, r31
/* 802E2B84 002DFAC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2B88 002DFAC8  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 802E2B8C 002DFACC  7D 89 03 A6 */	mtctr r12
/* 802E2B90 002DFAD0  4E 80 04 21 */	bctrl 
/* 802E2B94 002DFAD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E2B98 002DFAD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E2B9C 002DFADC  7C 08 03 A6 */	mtlr r0
/* 802E2BA0 002DFAE0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2BA4 002DFAE4  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBase, global
/* 802E2BA8 002DFAE8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E2BAC 002DFAEC  7C 08 02 A6 */	mflr r0
/* 802E2BB0 002DFAF0  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E2BB4 002DFAF4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802E2BB8 002DFAF8  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802E2BBC 002DFAFC  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802E2BC0 002DFB00  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 802E2BC4 002DFB04  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802E2BC8 002DFB08  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802E2BCC 002DFB0C  7C 9F 23 78 */	mr r31, r4
/* 802E2BD0 002DFB10  7C 7E 1B 78 */	mr r30, r3
/* 802E2BD4 002DFB14  7F E3 FB 78 */	mr r3, r31
/* 802E2BD8 002DFB18  48 00 1D 1D */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E2BDC 002DFB1C  28 03 00 00 */	cmplwi r3, 0
/* 802E2BE0 002DFB20  41 82 00 84 */	beq .L_802E2C64
/* 802E2BE4 002DFB24  7C 64 1B 78 */	mr r4, r3
/* 802E2BE8 002DFB28  38 61 00 14 */	addi r3, r1, 0x14
/* 802E2BEC 002DFB2C  81 84 00 00 */	lwz r12, 0(r4)
/* 802E2BF0 002DFB30  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E2BF4 002DFB34  7D 89 03 A6 */	mtctr r12
/* 802E2BF8 002DFB38  4E 80 04 21 */	bctrl 
/* 802E2BFC 002DFB3C  7F E4 FB 78 */	mr r4, r31
/* 802E2C00 002DFB40  38 61 00 08 */	addi r3, r1, 8
/* 802E2C04 002DFB44  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2C08 002DFB48  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 802E2C0C 002DFB4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E2C10 002DFB50  C3 C1 00 1C */	lfs f30, 0x1c(r1)
/* 802E2C14 002DFB54  7D 89 03 A6 */	mtctr r12
/* 802E2C18 002DFB58  4E 80 04 21 */	bctrl 
/* 802E2C1C 002DFB5C  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E2C20 002DFB60  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E2C24 002DFB64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E2C28 002DFB68  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E2C2C 002DFB6C  EC 3F 08 28 */	fsubs f1, f31, f1
/* 802E2C30 002DFB70  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802E2C34 002DFB74  4B D5 24 D5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E2C38 002DFB78  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802E2C3C 002DFB7C  7F C3 F3 78 */	mr r3, r30
/* 802E2C40 002DFB80  7F E4 FB 78 */	mr r4, r31
/* 802E2C44 002DFB84  38 A0 00 07 */	li r5, 7
/* 802E2C48 002DFB88  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802E2C4C 002DFB8C  38 C0 00 00 */	li r6, 0
/* 802E2C50 002DFB90  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802E2C54 002DFB94  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E2C58 002DFB98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2C5C 002DFB9C  7D 89 03 A6 */	mtctr r12
/* 802E2C60 002DFBA0  4E 80 04 21 */	bctrl 
.L_802E2C64:
/* 802E2C64 002DFBA4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802E2C68 002DFBA8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802E2C6C 002DFBAC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 802E2C70 002DFBB0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802E2C74 002DFBB4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802E2C78 002DFBB8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E2C7C 002DFBBC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802E2C80 002DFBC0  7C 08 03 A6 */	mtlr r0
/* 802E2C84 002DFBC4  38 21 00 50 */	addi r1, r1, 0x50
/* 802E2C88 002DFBC8  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBase, global
/* 802E2C8C 002DFBCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E2C90 002DFBD0  7C 08 02 A6 */	mflr r0
/* 802E2C94 002DFBD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E2C98 002DFBD8  38 00 00 00 */	li r0, 0
/* 802E2C9C 002DFBDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E2CA0 002DFBE0  7C 9F 23 78 */	mr r31, r4
/* 802E2CA4 002DFBE4  38 80 00 01 */	li r4, 1
/* 802E2CA8 002DFBE8  98 1F 02 E1 */	stb r0, 0x2e1(r31)
/* 802E2CAC 002DFBEC  7F E3 FB 78 */	mr r3, r31
/* 802E2CB0 002DFBF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2CB4 002DFBF4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802E2CB8 002DFBF8  7D 89 03 A6 */	mtctr r12
/* 802E2CBC 002DFBFC  4E 80 04 21 */	bctrl 
/* 802E2CC0 002DFC00  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2CC4 002DFC04  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802E2CC8 002DFC08  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2CCC 002DFC0C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2CD0 002DFC10  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 802E2CD4 002DFC14  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2CD8 002DFC18  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2CDC 002DFC1C  60 00 08 00 */	ori r0, r0, 0x800
/* 802E2CE0 002DFC20  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2CE4 002DFC24  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2CE8 002DFC28  60 00 80 00 */	ori r0, r0, 0x8000
/* 802E2CEC 002DFC2C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2CF0 002DFC30  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2CF4 002DFC34  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 802E2CF8 002DFC38  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2CFC 002DFC3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E2D00 002DFC40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E2D04 002DFC44  7C 08 03 A6 */	mtlr r0
/* 802E2D08 002DFC48  38 21 00 10 */	addi r1, r1, 0x10
/* 802E2D0C 002DFC4C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto12StateFixStayFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E2D10 002DFC50  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E2D14 002DFC54  7C 08 02 A6 */	mflr r0
/* 802E2D18 002DFC58  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E2D1C 002DFC5C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802E2D20 002DFC60  7C 9F 23 78 */	mr r31, r4
/* 802E2D24 002DFC64  7F E3 FB 78 */	mr r3, r31
/* 802E2D28 002DFC68  48 00 20 39 */	bl lifeIncrement__Q34Game6Kabuto3ObjFv
/* 802E2D2C 002DFC6C  38 00 FF FF */	li r0, -1
/* 802E2D30 002DFC70  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2D34 002DFC74  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E2D38 002DFC78  7F E3 FB 78 */	mr r3, r31
/* 802E2D3C 002DFC7C  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802E2D40 002DFC80  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E2D44 002DFC84  64 00 00 20 */	oris r0, r0, 0x20
/* 802E2D48 002DFC88  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E2D4C 002DFC8C  4B E1 EC 81 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802E2D50 002DFC90  7F E3 FB 78 */	mr r3, r31
/* 802E2D54 002DFC94  38 80 00 0B */	li r4, 0xb
/* 802E2D58 002DFC98  38 A0 00 00 */	li r5, 0
/* 802E2D5C 002DFC9C  4B E2 22 A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E2D60 002DFCA0  7F E4 FB 78 */	mr r4, r31
/* 802E2D64 002DFCA4  38 61 00 08 */	addi r3, r1, 8
/* 802E2D68 002DFCA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2D6C 002DFCAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E2D70 002DFCB0  7D 89 03 A6 */	mtctr r12
/* 802E2D74 002DFCB4  4E 80 04 21 */	bctrl 
/* 802E2D78 002DFCB8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802E2D7C 002DFCBC  38 C0 00 00 */	li r6, 0
/* 802E2D80 002DFCC0  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802E2D84 002DFCC4  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 802E2D88 002DFCC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E2D8C 002DFCCC  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 802E2D90 002DFCD0  3C 60 80 4E */	lis r3, __vt__Q23efx14THebiAphd_base@ha
/* 802E2D94 002DFCD4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802E2D98 002DFCD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E2D9C 002DFCDC  38 03 6E 30 */	addi r0, r3, __vt__Q23efx14THebiAphd_base@l
/* 802E2DA0 002DFCE0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802E2DA4 002DFCE4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802E2DA8 002DFCE8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E2DAC 002DFCEC  3C 60 80 4D */	lis r3, __vt__Q23efx24THebiAphd_kkabuto_appear@ha
/* 802E2DB0 002DFCF0  39 64 A7 EC */	addi r11, r4, __vt__Q23efx3Arg@l
/* 802E2DB4 002DFCF4  39 40 00 A0 */	li r10, 0xa0
/* 802E2DB8 002DFCF8  39 20 00 A1 */	li r9, 0xa1
/* 802E2DBC 002DFCFC  39 00 00 A2 */	li r8, 0xa2
/* 802E2DC0 002DFD00  38 E0 00 A3 */	li r7, 0xa3
/* 802E2DC4 002DFD04  38 A0 00 1E */	li r5, 0x1e
/* 802E2DC8 002DFD08  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E2DCC 002DFD0C  38 03 39 B0 */	addi r0, r3, __vt__Q23efx24THebiAphd_kkabuto_appear@l
/* 802E2DD0 002DFD10  38 61 00 24 */	addi r3, r1, 0x24
/* 802E2DD4 002DFD14  38 81 00 14 */	addi r4, r1, 0x14
/* 802E2DD8 002DFD18  91 61 00 14 */	stw r11, 0x14(r1)
/* 802E2DDC 002DFD1C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802E2DE0 002DFD20  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802E2DE4 002DFD24  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802E2DE8 002DFD28  B1 41 00 28 */	sth r10, 0x28(r1)
/* 802E2DEC 002DFD2C  B1 21 00 2A */	sth r9, 0x2a(r1)
/* 802E2DF0 002DFD30  B1 01 00 2C */	sth r8, 0x2c(r1)
/* 802E2DF4 002DFD34  B0 E1 00 2E */	sth r7, 0x2e(r1)
/* 802E2DF8 002DFD38  90 C1 00 30 */	stw r6, 0x30(r1)
/* 802E2DFC 002DFD3C  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802E2E00 002DFD40  90 C1 00 38 */	stw r6, 0x38(r1)
/* 802E2E04 002DFD44  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 802E2E08 002DFD48  90 A1 00 40 */	stw r5, 0x40(r1)
/* 802E2E0C 002DFD4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E2E10 002DFD50  48 0D 0C 99 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 802E2E14 002DFD54  7F E3 FB 78 */	mr r3, r31
/* 802E2E18 002DFD58  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2E1C 002DFD5C  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 802E2E20 002DFD60  7D 89 03 A6 */	mtctr r12
/* 802E2E24 002DFD64  4E 80 04 21 */	bctrl 
/* 802E2E28 002DFD68  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E2E2C 002DFD6C  7F E3 FB 78 */	mr r3, r31
/* 802E2E30 002DFD70  C0 82 EA 64 */	lfs f4, lbl_8051CDC4@sda21(r2)
/* 802E2E34 002DFD74  38 80 00 00 */	li r4, 0
/* 802E2E38 002DFD78  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E2E3C 002DFD7C  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E2E40 002DFD80  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E2E44 002DFD84  4B E3 09 4D */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802E2E48 002DFD88  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E2E4C 002DFD8C  7F E3 FB 78 */	mr r3, r31
/* 802E2E50 002DFD90  C0 82 EA 64 */	lfs f4, lbl_8051CDC4@sda21(r2)
/* 802E2E54 002DFD94  38 80 00 00 */	li r4, 0
/* 802E2E58 002DFD98  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E2E5C 002DFD9C  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E2E60 002DFDA0  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E2E64 002DFDA4  4B E3 06 71 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E2E68 002DFDA8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E2E6C 002DFDAC  7F E3 FB 78 */	mr r3, r31
/* 802E2E70 002DFDB0  C0 82 EA 64 */	lfs f4, lbl_8051CDC4@sda21(r2)
/* 802E2E74 002DFDB4  38 80 00 00 */	li r4, 0
/* 802E2E78 002DFDB8  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802E2E7C 002DFDBC  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E2E80 002DFDC0  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E2E84 002DFDC4  4B E3 02 99 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E2E88 002DFDC8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E2E8C 002DFDCC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802E2E90 002DFDD0  7C 08 03 A6 */	mtlr r0
/* 802E2E94 002DFDD4  38 21 00 50 */	addi r1, r1, 0x50
/* 802E2E98 002DFDD8  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBase, global
/* 802E2E9C 002DFDDC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E2EA0 002DFDE0  7C 08 02 A6 */	mflr r0
/* 802E2EA4 002DFDE4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E2EA8 002DFDE8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802E2EAC 002DFDEC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802E2EB0 002DFDF0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E2EB4 002DFDF4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802E2EB8 002DFDF8  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802E2EBC 002DFDFC  7C 7E 1B 78 */	mr r30, r3
/* 802E2EC0 002DFE00  7C 9F 23 78 */	mr r31, r4
/* 802E2EC4 002DFE04  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802E2EC8 002DFE08  28 00 00 00 */	cmplwi r0, 0
/* 802E2ECC 002DFE0C  41 82 01 F4 */	beq .L_802E30C0
/* 802E2ED0 002DFE10  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802E2ED4 002DFE14  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E2ED8 002DFE18  40 82 01 E8 */	bne .L_802E30C0
/* 802E2EDC 002DFE1C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802E2EE0 002DFE20  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E2EE4 002DFE24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E2EE8 002DFE28  4C 40 13 82 */	cror 2, 0, 2
/* 802E2EEC 002DFE2C  40 82 00 20 */	bne .L_802E2F0C
/* 802E2EF0 002DFE30  81 83 00 00 */	lwz r12, 0(r3)
/* 802E2EF4 002DFE34  38 A0 00 00 */	li r5, 0
/* 802E2EF8 002DFE38  38 C0 00 00 */	li r6, 0
/* 802E2EFC 002DFE3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2F00 002DFE40  7D 89 03 A6 */	mtctr r12
/* 802E2F04 002DFE44  4E 80 04 21 */	bctrl 
/* 802E2F08 002DFE48  48 00 01 B8 */	b .L_802E30C0
.L_802E2F0C:
/* 802E2F0C 002DFE4C  7F E3 FB 78 */	mr r3, r31
/* 802E2F10 002DFE50  38 80 00 00 */	li r4, 0
/* 802E2F14 002DFE54  4B E3 17 45 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E2F18 002DFE58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E2F1C 002DFE5C  41 82 00 28 */	beq .L_802E2F44
/* 802E2F20 002DFE60  7F C3 F3 78 */	mr r3, r30
/* 802E2F24 002DFE64  7F E4 FB 78 */	mr r4, r31
/* 802E2F28 002DFE68  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E2F2C 002DFE6C  38 A0 00 0C */	li r5, 0xc
/* 802E2F30 002DFE70  38 C0 00 00 */	li r6, 0
/* 802E2F34 002DFE74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2F38 002DFE78  7D 89 03 A6 */	mtctr r12
/* 802E2F3C 002DFE7C  4E 80 04 21 */	bctrl 
/* 802E2F40 002DFE80  48 00 01 80 */	b .L_802E30C0
.L_802E2F44:
/* 802E2F44 002DFE84  7F E3 FB 78 */	mr r3, r31
/* 802E2F48 002DFE88  48 00 1A 05 */	bl isAttackableTarget__Q34Game6Kabuto3ObjFv
/* 802E2F4C 002DFE8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E2F50 002DFE90  41 82 00 28 */	beq .L_802E2F78
/* 802E2F54 002DFE94  7F C3 F3 78 */	mr r3, r30
/* 802E2F58 002DFE98  7F E4 FB 78 */	mr r4, r31
/* 802E2F5C 002DFE9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E2F60 002DFEA0  38 A0 00 0B */	li r5, 0xb
/* 802E2F64 002DFEA4  38 C0 00 00 */	li r6, 0
/* 802E2F68 002DFEA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E2F6C 002DFEAC  7D 89 03 A6 */	mtctr r12
/* 802E2F70 002DFEB0  4E 80 04 21 */	bctrl 
/* 802E2F74 002DFEB4  48 00 01 4C */	b .L_802E30C0
.L_802E2F78:
/* 802E2F78 002DFEB8  7F E3 FB 78 */	mr r3, r31
/* 802E2F7C 002DFEBC  48 00 19 79 */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E2F80 002DFEC0  28 03 00 00 */	cmplwi r3, 0
/* 802E2F84 002DFEC4  41 82 01 1C */	beq .L_802E30A0
/* 802E2F88 002DFEC8  7C 64 1B 78 */	mr r4, r3
/* 802E2F8C 002DFECC  38 61 00 20 */	addi r3, r1, 0x20
/* 802E2F90 002DFED0  81 84 00 00 */	lwz r12, 0(r4)
/* 802E2F94 002DFED4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E2F98 002DFED8  7D 89 03 A6 */	mtctr r12
/* 802E2F9C 002DFEDC  4E 80 04 21 */	bctrl 
/* 802E2FA0 002DFEE0  7F E4 FB 78 */	mr r4, r31
/* 802E2FA4 002DFEE4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802E2FA8 002DFEE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E2FAC 002DFEEC  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E2FB0 002DFEF0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802E2FB4 002DFEF4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E2FB8 002DFEF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E2FBC 002DFEFC  D0 41 00 08 */	stfs f2, 8(r1)
/* 802E2FC0 002DFF00  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802E2FC4 002DFF04  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E2FC8 002DFF08  7D 89 03 A6 */	mtctr r12
/* 802E2FCC 002DFF0C  4E 80 04 21 */	bctrl 
/* 802E2FD0 002DFF10  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802E2FD4 002DFF14  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E2FD8 002DFF18  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802E2FDC 002DFF1C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E2FE0 002DFF20  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E2FE4 002DFF24  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E2FE8 002DFF28  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802E2FEC 002DFF2C  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E2FF0 002DFF30  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E2FF4 002DFF34  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802E2FF8 002DFF38  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802E2FFC 002DFF3C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802E3000 002DFF40  4B D5 21 09 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E3004 002DFF44  48 12 EB CD */	bl roundAng__Ff
/* 802E3008 002DFF48  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E300C 002DFF4C  FF E0 08 90 */	fmr f31, f1
/* 802E3010 002DFF50  7F E3 FB 78 */	mr r3, r31
/* 802E3014 002DFF54  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E3018 002DFF58  7D 89 03 A6 */	mtctr r12
/* 802E301C 002DFF5C  4E 80 04 21 */	bctrl 
/* 802E3020 002DFF60  FC 40 08 90 */	fmr f2, f1
/* 802E3024 002DFF64  FC 20 F8 90 */	fmr f1, f31
/* 802E3028 002DFF68  48 12 EB D5 */	bl angDist__Fff
/* 802E302C 002DFF6C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E3030 002DFF70  FC 40 0A 10 */	fabs f2, f1
/* 802E3034 002DFF74  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E3038 002DFF78  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E303C 002DFF7C  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E3040 002DFF80  FC 40 10 18 */	frsp f2, f2
/* 802E3044 002DFF84  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E3048 002DFF88  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E304C 002DFF8C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E3050 002DFF90  4C 40 13 82 */	cror 2, 0, 2
/* 802E3054 002DFF94  40 82 00 28 */	bne .L_802E307C
/* 802E3058 002DFF98  7F C3 F3 78 */	mr r3, r30
/* 802E305C 002DFF9C  7F E4 FB 78 */	mr r4, r31
/* 802E3060 002DFFA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3064 002DFFA4  38 A0 00 09 */	li r5, 9
/* 802E3068 002DFFA8  38 C0 00 00 */	li r6, 0
/* 802E306C 002DFFAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3070 002DFFB0  7D 89 03 A6 */	mtctr r12
/* 802E3074 002DFFB4  4E 80 04 21 */	bctrl 
/* 802E3078 002DFFB8  48 00 00 48 */	b .L_802E30C0
.L_802E307C:
/* 802E307C 002DFFBC  7F C3 F3 78 */	mr r3, r30
/* 802E3080 002DFFC0  7F E4 FB 78 */	mr r4, r31
/* 802E3084 002DFFC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3088 002DFFC8  38 A0 00 0A */	li r5, 0xa
/* 802E308C 002DFFCC  38 C0 00 00 */	li r6, 0
/* 802E3090 002DFFD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3094 002DFFD4  7D 89 03 A6 */	mtctr r12
/* 802E3098 002DFFD8  4E 80 04 21 */	bctrl 
/* 802E309C 002DFFDC  48 00 00 24 */	b .L_802E30C0
.L_802E30A0:
/* 802E30A0 002DFFE0  7F C3 F3 78 */	mr r3, r30
/* 802E30A4 002DFFE4  7F E4 FB 78 */	mr r4, r31
/* 802E30A8 002DFFE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E30AC 002DFFEC  38 A0 00 08 */	li r5, 8
/* 802E30B0 002DFFF0  38 C0 00 00 */	li r6, 0
/* 802E30B4 002DFFF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E30B8 002DFFF8  7D 89 03 A6 */	mtctr r12
/* 802E30BC 002DFFFC  4E 80 04 21 */	bctrl 
.L_802E30C0:
/* 802E30C0 002E0000  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802E30C4 002E0004  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E30C8 002E0008  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802E30CC 002E000C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E30D0 002E0010  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802E30D4 002E0014  7C 08 03 A6 */	mtlr r0
/* 802E30D8 002E0018  38 21 00 50 */	addi r1, r1, 0x50
/* 802E30DC 002E001C  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBase, global
/* 802E30E0 002E0020  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E30E4 002E0024  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802E30E8 002E0028  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E30EC 002E002C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto14StateFixAppearFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E30F0 002E0030  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E30F4 002E0034  7C 08 02 A6 */	mflr r0
/* 802E30F8 002E0038  38 60 FF FF */	li r3, -1
/* 802E30FC 002E003C  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E3100 002E0040  38 00 00 01 */	li r0, 1
/* 802E3104 002E0044  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802E3108 002E0048  7C 9F 23 78 */	mr r31, r4
/* 802E310C 002E004C  90 64 02 CC */	stw r3, 0x2cc(r4)
/* 802E3110 002E0050  7F E3 FB 78 */	mr r3, r31
/* 802E3114 002E0054  98 04 02 E1 */	stb r0, 0x2e1(r4)
/* 802E3118 002E0058  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E311C 002E005C  64 00 00 40 */	oris r0, r0, 0x40
/* 802E3120 002E0060  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E3124 002E0064  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E3128 002E0068  60 00 00 01 */	ori r0, r0, 1
/* 802E312C 002E006C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E3130 002E0070  4B E1 E8 4D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802E3134 002E0074  7F E3 FB 78 */	mr r3, r31
/* 802E3138 002E0078  38 80 00 0C */	li r4, 0xc
/* 802E313C 002E007C  38 A0 00 00 */	li r5, 0
/* 802E3140 002E0080  4B E2 1E C5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E3144 002E0084  7F E4 FB 78 */	mr r4, r31
/* 802E3148 002E0088  38 61 00 08 */	addi r3, r1, 8
/* 802E314C 002E008C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3150 002E0090  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E3154 002E0094  7D 89 03 A6 */	mtctr r12
/* 802E3158 002E0098  4E 80 04 21 */	bctrl 
/* 802E315C 002E009C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802E3160 002E00A0  38 C0 00 00 */	li r6, 0
/* 802E3164 002E00A4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802E3168 002E00A8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 802E316C 002E00AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E3170 002E00B0  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 802E3174 002E00B4  3C 60 80 4E */	lis r3, __vt__Q23efx14THebiAphd_base@ha
/* 802E3178 002E00B8  C0 41 00 08 */	lfs f2, 8(r1)
/* 802E317C 002E00BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E3180 002E00C0  38 03 6E 30 */	addi r0, r3, __vt__Q23efx14THebiAphd_base@l
/* 802E3184 002E00C4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802E3188 002E00C8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802E318C 002E00CC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E3190 002E00D0  3C 60 80 4D */	lis r3, __vt__Q23efx22THebiAphd_kkabuto_dive@ha
/* 802E3194 002E00D4  39 64 A7 EC */	addi r11, r4, __vt__Q23efx3Arg@l
/* 802E3198 002E00D8  39 40 00 A0 */	li r10, 0xa0
/* 802E319C 002E00DC  39 20 00 A1 */	li r9, 0xa1
/* 802E31A0 002E00E0  39 00 00 A2 */	li r8, 0xa2
/* 802E31A4 002E00E4  38 E0 00 A3 */	li r7, 0xa3
/* 802E31A8 002E00E8  38 A0 00 11 */	li r5, 0x11
/* 802E31AC 002E00EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E31B0 002E00F0  38 03 39 78 */	addi r0, r3, __vt__Q23efx22THebiAphd_kkabuto_dive@l
/* 802E31B4 002E00F4  38 61 00 24 */	addi r3, r1, 0x24
/* 802E31B8 002E00F8  38 81 00 14 */	addi r4, r1, 0x14
/* 802E31BC 002E00FC  91 61 00 14 */	stw r11, 0x14(r1)
/* 802E31C0 002E0100  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802E31C4 002E0104  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802E31C8 002E0108  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802E31CC 002E010C  B1 41 00 28 */	sth r10, 0x28(r1)
/* 802E31D0 002E0110  B1 21 00 2A */	sth r9, 0x2a(r1)
/* 802E31D4 002E0114  B1 01 00 2C */	sth r8, 0x2c(r1)
/* 802E31D8 002E0118  B0 E1 00 2E */	sth r7, 0x2e(r1)
/* 802E31DC 002E011C  90 C1 00 30 */	stw r6, 0x30(r1)
/* 802E31E0 002E0120  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802E31E4 002E0124  90 C1 00 38 */	stw r6, 0x38(r1)
/* 802E31E8 002E0128  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 802E31EC 002E012C  90 A1 00 40 */	stw r5, 0x40(r1)
/* 802E31F0 002E0130  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E31F4 002E0134  48 0D 08 B5 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 802E31F8 002E0138  7F E3 FB 78 */	mr r3, r31
/* 802E31FC 002E013C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3200 002E0140  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 802E3204 002E0144  7D 89 03 A6 */	mtctr r12
/* 802E3208 002E0148  4E 80 04 21 */	bctrl 
/* 802E320C 002E014C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E3210 002E0150  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802E3214 002E0154  7C 08 03 A6 */	mtlr r0
/* 802E3218 002E0158  38 21 00 50 */	addi r1, r1, 0x50
/* 802E321C 002E015C  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBase, global
/* 802E3220 002E0160  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E3224 002E0164  7C 08 02 A6 */	mflr r0
/* 802E3228 002E0168  C0 82 EA 64 */	lfs f4, lbl_8051CDC4@sda21(r2)
/* 802E322C 002E016C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E3230 002E0170  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E3234 002E0174  7C 9F 23 78 */	mr r31, r4
/* 802E3238 002E0178  93 C1 00 08 */	stw r30, 8(r1)
/* 802E323C 002E017C  7C 7E 1B 78 */	mr r30, r3
/* 802E3240 002E0180  7F E3 FB 78 */	mr r3, r31
/* 802E3244 002E0184  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 802E3248 002E0188  38 80 00 00 */	li r4, 0
/* 802E324C 002E018C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802E3250 002E0190  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E3254 002E0194  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E3258 002E0198  4B E2 FE C5 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E325C 002E019C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E3260 002E01A0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E3264 002E01A4  28 00 00 00 */	cmplwi r0, 0
/* 802E3268 002E01A8  41 82 00 30 */	beq .L_802E3298
/* 802E326C 002E01AC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E3270 002E01B0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E3274 002E01B4  40 82 00 24 */	bne .L_802E3298
/* 802E3278 002E01B8  7F C3 F3 78 */	mr r3, r30
/* 802E327C 002E01BC  7F E4 FB 78 */	mr r4, r31
/* 802E3280 002E01C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3284 002E01C4  38 A0 00 06 */	li r5, 6
/* 802E3288 002E01C8  38 C0 00 00 */	li r6, 0
/* 802E328C 002E01CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3290 002E01D0  7D 89 03 A6 */	mtctr r12
/* 802E3294 002E01D4  4E 80 04 21 */	bctrl 
.L_802E3298:
/* 802E3298 002E01D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E329C 002E01DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E32A0 002E01E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E32A4 002E01E4  7C 08 03 A6 */	mtlr r0
/* 802E32A8 002E01E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E32AC 002E01EC  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBase, global
/* 802E32B0 002E01F0  38 00 00 00 */	li r0, 0
/* 802E32B4 002E01F4  98 04 02 E1 */	stb r0, 0x2e1(r4)
/* 802E32B8 002E01F8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E32BC 002E01FC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 802E32C0 002E0200  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E32C4 002E0204  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E32C8 002E0208  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802E32CC 002E020C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E32D0 002E0210  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto12StateFixHideFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E32D4 002E0214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E32D8 002E0218  7C 08 02 A6 */	mflr r0
/* 802E32DC 002E021C  38 A0 00 00 */	li r5, 0
/* 802E32E0 002E0220  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E32E4 002E0224  38 00 FF FF */	li r0, -1
/* 802E32E8 002E0228  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E32EC 002E022C  7C 9F 23 78 */	mr r31, r4
/* 802E32F0 002E0230  38 80 00 07 */	li r4, 7
/* 802E32F4 002E0234  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E32F8 002E0238  7F E3 FB 78 */	mr r3, r31
/* 802E32FC 002E023C  4B E2 1D 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E3300 002E0240  7F E3 FB 78 */	mr r3, r31
/* 802E3304 002E0244  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3308 002E0248  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802E330C 002E024C  7D 89 03 A6 */	mtctr r12
/* 802E3310 002E0250  4E 80 04 21 */	bctrl 
/* 802E3314 002E0254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E3318 002E0258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E331C 002E025C  7C 08 03 A6 */	mtlr r0
/* 802E3320 002E0260  38 21 00 10 */	addi r1, r1, 0x10
/* 802E3324 002E0264  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn startWaitEffect__Q34Game6Kabuto3ObjFv, weak
/* 802E3328 002E0268  4E 80 00 20 */	blr 
.endfn startWaitEffect__Q34Game6Kabuto3ObjFv

.fn exec__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBase, global
/* 802E332C 002E026C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E3330 002E0270  7C 08 02 A6 */	mflr r0
/* 802E3334 002E0274  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E3338 002E0278  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802E333C 002E027C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802E3340 002E0280  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E3344 002E0284  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802E3348 002E0288  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E334C 002E028C  7C 9F 23 78 */	mr r31, r4
/* 802E3350 002E0290  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E3354 002E0294  7C 7E 1B 78 */	mr r30, r3
/* 802E3358 002E0298  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E335C 002E029C  4C 40 13 82 */	cror 2, 0, 2
/* 802E3360 002E02A0  40 82 00 20 */	bne .L_802E3380
/* 802E3364 002E02A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802E3368 002E02A8  38 A0 00 00 */	li r5, 0
/* 802E336C 002E02AC  38 C0 00 00 */	li r6, 0
/* 802E3370 002E02B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3374 002E02B4  7D 89 03 A6 */	mtctr r12
/* 802E3378 002E02B8  4E 80 04 21 */	bctrl 
/* 802E337C 002E02BC  48 00 01 94 */	b .L_802E3510
.L_802E3380:
/* 802E3380 002E02C0  7F E3 FB 78 */	mr r3, r31
/* 802E3384 002E02C4  38 80 00 00 */	li r4, 0
/* 802E3388 002E02C8  4B E3 12 D1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E338C 002E02CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E3390 002E02D0  41 82 00 18 */	beq .L_802E33A8
/* 802E3394 002E02D4  38 00 00 0C */	li r0, 0xc
/* 802E3398 002E02D8  7F E3 FB 78 */	mr r3, r31
/* 802E339C 002E02DC  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E33A0 002E02E0  4B E2 1F 01 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E33A4 002E02E4  48 00 01 30 */	b .L_802E34D4
.L_802E33A8:
/* 802E33A8 002E02E8  7F E3 FB 78 */	mr r3, r31
/* 802E33AC 002E02EC  48 00 15 A1 */	bl isAttackableTarget__Q34Game6Kabuto3ObjFv
/* 802E33B0 002E02F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E33B4 002E02F4  41 82 00 18 */	beq .L_802E33CC
/* 802E33B8 002E02F8  38 00 00 0B */	li r0, 0xb
/* 802E33BC 002E02FC  7F E3 FB 78 */	mr r3, r31
/* 802E33C0 002E0300  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E33C4 002E0304  4B E2 1E DD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E33C8 002E0308  48 00 01 0C */	b .L_802E34D4
.L_802E33CC:
/* 802E33CC 002E030C  7F E3 FB 78 */	mr r3, r31
/* 802E33D0 002E0310  48 00 15 25 */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E33D4 002E0314  28 03 00 00 */	cmplwi r3, 0
/* 802E33D8 002E0318  41 82 00 F4 */	beq .L_802E34CC
/* 802E33DC 002E031C  7C 64 1B 78 */	mr r4, r3
/* 802E33E0 002E0320  38 61 00 20 */	addi r3, r1, 0x20
/* 802E33E4 002E0324  81 84 00 00 */	lwz r12, 0(r4)
/* 802E33E8 002E0328  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E33EC 002E032C  7D 89 03 A6 */	mtctr r12
/* 802E33F0 002E0330  4E 80 04 21 */	bctrl 
/* 802E33F4 002E0334  7F E4 FB 78 */	mr r4, r31
/* 802E33F8 002E0338  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802E33FC 002E033C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3400 002E0340  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E3404 002E0344  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802E3408 002E0348  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E340C 002E034C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E3410 002E0350  D0 41 00 08 */	stfs f2, 8(r1)
/* 802E3414 002E0354  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802E3418 002E0358  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E341C 002E035C  7D 89 03 A6 */	mtctr r12
/* 802E3420 002E0360  4E 80 04 21 */	bctrl 
/* 802E3424 002E0364  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802E3428 002E0368  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E342C 002E036C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802E3430 002E0370  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E3434 002E0374  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E3438 002E0378  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E343C 002E037C  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802E3440 002E0380  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E3444 002E0384  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E3448 002E0388  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802E344C 002E038C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802E3450 002E0390  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802E3454 002E0394  4B D5 1C B5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E3458 002E0398  48 12 E7 79 */	bl roundAng__Ff
/* 802E345C 002E039C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3460 002E03A0  FF E0 08 90 */	fmr f31, f1
/* 802E3464 002E03A4  7F E3 FB 78 */	mr r3, r31
/* 802E3468 002E03A8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E346C 002E03AC  7D 89 03 A6 */	mtctr r12
/* 802E3470 002E03B0  4E 80 04 21 */	bctrl 
/* 802E3474 002E03B4  FC 40 08 90 */	fmr f2, f1
/* 802E3478 002E03B8  FC 20 F8 90 */	fmr f1, f31
/* 802E347C 002E03BC  48 12 E7 81 */	bl angDist__Fff
/* 802E3480 002E03C0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E3484 002E03C4  FC 40 0A 10 */	fabs f2, f1
/* 802E3488 002E03C8  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E348C 002E03CC  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E3490 002E03D0  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E3494 002E03D4  FC 40 10 18 */	frsp f2, f2
/* 802E3498 002E03D8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E349C 002E03DC  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E34A0 002E03E0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E34A4 002E03E4  4C 40 13 82 */	cror 2, 0, 2
/* 802E34A8 002E03E8  40 82 00 10 */	bne .L_802E34B8
/* 802E34AC 002E03EC  38 00 00 09 */	li r0, 9
/* 802E34B0 002E03F0  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E34B4 002E03F4  48 00 00 20 */	b .L_802E34D4
.L_802E34B8:
/* 802E34B8 002E03F8  38 00 00 0A */	li r0, 0xa
/* 802E34BC 002E03FC  7F E3 FB 78 */	mr r3, r31
/* 802E34C0 002E0400  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E34C4 002E0404  4B E2 1D DD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E34C8 002E0408  48 00 00 0C */	b .L_802E34D4
.L_802E34CC:
/* 802E34CC 002E040C  38 00 00 08 */	li r0, 8
/* 802E34D0 002E0410  90 1F 02 CC */	stw r0, 0x2cc(r31)
.L_802E34D4:
/* 802E34D4 002E0414  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E34D8 002E0418  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E34DC 002E041C  28 00 00 00 */	cmplwi r0, 0
/* 802E34E0 002E0420  41 82 00 30 */	beq .L_802E3510
/* 802E34E4 002E0424  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E34E8 002E0428  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E34EC 002E042C  40 82 00 24 */	bne .L_802E3510
/* 802E34F0 002E0430  7F C3 F3 78 */	mr r3, r30
/* 802E34F4 002E0434  7F E4 FB 78 */	mr r4, r31
/* 802E34F8 002E0438  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E34FC 002E043C  38 C0 00 00 */	li r6, 0
/* 802E3500 002E0440  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802E3504 002E0444  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3508 002E0448  7D 89 03 A6 */	mtctr r12
/* 802E350C 002E044C  4E 80 04 21 */	bctrl 
.L_802E3510:
/* 802E3510 002E0450  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802E3514 002E0454  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E3518 002E0458  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802E351C 002E045C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E3520 002E0460  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802E3524 002E0464  7C 08 03 A6 */	mtlr r0
/* 802E3528 002E0468  38 21 00 50 */	addi r1, r1, 0x50
/* 802E352C 002E046C  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBase, global
/* 802E3530 002E0470  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto12StateFixWaitFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E3534 002E0474  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E3538 002E0478  7C 08 02 A6 */	mflr r0
/* 802E353C 002E047C  38 A0 00 00 */	li r5, 0
/* 802E3540 002E0480  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E3544 002E0484  38 00 FF FF */	li r0, -1
/* 802E3548 002E0488  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E354C 002E048C  7C 9F 23 78 */	mr r31, r4
/* 802E3550 002E0490  38 80 00 06 */	li r4, 6
/* 802E3554 002E0494  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E3558 002E0498  7F E3 FB 78 */	mr r3, r31
/* 802E355C 002E049C  4B E2 1A A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E3560 002E04A0  7F E3 FB 78 */	mr r3, r31
/* 802E3564 002E04A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3568 002E04A8  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802E356C 002E04AC  7D 89 03 A6 */	mtctr r12
/* 802E3570 002E04B0  4E 80 04 21 */	bctrl 
/* 802E3574 002E04B4  7F E3 FB 78 */	mr r3, r31
/* 802E3578 002E04B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E357C 002E04BC  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 802E3580 002E04C0  7D 89 03 A6 */	mtctr r12
/* 802E3584 002E04C4  4E 80 04 21 */	bctrl 
/* 802E3588 002E04C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E358C 002E04CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E3590 002E04D0  7C 08 03 A6 */	mtlr r0
/* 802E3594 002E04D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E3598 002E04D8  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn startRotateEffect__Q34Game6Kabuto3ObjFv, weak
/* 802E359C 002E04DC  4E 80 00 20 */	blr 
.endfn startRotateEffect__Q34Game6Kabuto3ObjFv

.fn exec__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBase, global
/* 802E35A0 002E04E0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802E35A4 002E04E4  7C 08 02 A6 */	mflr r0
/* 802E35A8 002E04E8  90 01 00 74 */	stw r0, 0x74(r1)
/* 802E35AC 002E04EC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 802E35B0 002E04F0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 802E35B4 002E04F4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 802E35B8 002E04F8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 802E35BC 002E04FC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 802E35C0 002E0500  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 802E35C4 002E0504  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 802E35C8 002E0508  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 802E35CC 002E050C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802E35D0 002E0510  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802E35D4 002E0514  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E35D8 002E0518  7C 9F 23 78 */	mr r31, r4
/* 802E35DC 002E051C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E35E0 002E0520  7C 7E 1B 78 */	mr r30, r3
/* 802E35E4 002E0524  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E35E8 002E0528  4C 40 13 82 */	cror 2, 0, 2
/* 802E35EC 002E052C  40 82 00 20 */	bne .L_802E360C
/* 802E35F0 002E0530  81 83 00 00 */	lwz r12, 0(r3)
/* 802E35F4 002E0534  38 A0 00 00 */	li r5, 0
/* 802E35F8 002E0538  38 C0 00 00 */	li r6, 0
/* 802E35FC 002E053C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3600 002E0540  7D 89 03 A6 */	mtctr r12
/* 802E3604 002E0544  4E 80 04 21 */	bctrl 
/* 802E3608 002E0548  48 00 01 F0 */	b .L_802E37F8
.L_802E360C:
/* 802E360C 002E054C  7F E3 FB 78 */	mr r3, r31
/* 802E3610 002E0550  38 80 00 00 */	li r4, 0
/* 802E3614 002E0554  4B E3 10 45 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E3618 002E0558  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E361C 002E055C  41 82 00 18 */	beq .L_802E3634
/* 802E3620 002E0560  38 00 00 0C */	li r0, 0xc
/* 802E3624 002E0564  7F E3 FB 78 */	mr r3, r31
/* 802E3628 002E0568  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E362C 002E056C  4B E2 1C 75 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E3630 002E0570  48 00 01 8C */	b .L_802E37BC
.L_802E3634:
/* 802E3634 002E0574  7F E3 FB 78 */	mr r3, r31
/* 802E3638 002E0578  48 00 12 BD */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E363C 002E057C  28 03 00 00 */	cmplwi r3, 0
/* 802E3640 002E0580  41 82 01 6C */	beq .L_802E37AC
/* 802E3644 002E0584  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E3648 002E0588  7C 64 1B 78 */	mr r4, r3
/* 802E364C 002E058C  38 61 00 14 */	addi r3, r1, 0x14
/* 802E3650 002E0590  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802E3654 002E0594  81 84 00 00 */	lwz r12, 0(r4)
/* 802E3658 002E0598  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E365C 002E059C  7D 89 03 A6 */	mtctr r12
/* 802E3660 002E05A0  4E 80 04 21 */	bctrl 
/* 802E3664 002E05A4  7F E4 FB 78 */	mr r4, r31
/* 802E3668 002E05A8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E366C 002E05AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3670 002E05B0  38 61 00 08 */	addi r3, r1, 8
/* 802E3674 002E05B4  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 802E3678 002E05B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E367C 002E05BC  C3 81 00 1C */	lfs f28, 0x1c(r1)
/* 802E3680 002E05C0  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 802E3684 002E05C4  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 802E3688 002E05C8  7D 89 03 A6 */	mtctr r12
/* 802E368C 002E05CC  4E 80 04 21 */	bctrl 
/* 802E3690 002E05D0  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E3694 002E05D4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E3698 002E05D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E369C 002E05DC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E36A0 002E05E0  EC 3F 08 28 */	fsubs f1, f31, f1
/* 802E36A4 002E05E4  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802E36A8 002E05E8  4B D5 1A 61 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E36AC 002E05EC  48 12 E5 25 */	bl roundAng__Ff
/* 802E36B0 002E05F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E36B4 002E05F4  FF E0 08 90 */	fmr f31, f1
/* 802E36B8 002E05F8  7F E3 FB 78 */	mr r3, r31
/* 802E36BC 002E05FC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E36C0 002E0600  7D 89 03 A6 */	mtctr r12
/* 802E36C4 002E0604  4E 80 04 21 */	bctrl 
/* 802E36C8 002E0608  FC 40 08 90 */	fmr f2, f1
/* 802E36CC 002E060C  FC 20 F8 90 */	fmr f1, f31
/* 802E36D0 002E0610  48 12 E5 2D */	bl angDist__Fff
/* 802E36D4 002E0614  FF E0 08 90 */	fmr f31, f1
/* 802E36D8 002E0618  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E36DC 002E061C  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E36E0 002E0620  EC 00 07 72 */	fmuls f0, f0, f29
/* 802E36E4 002E0624  EF BF 07 B2 */	fmuls f29, f31, f30
/* 802E36E8 002E0628  EC 21 00 32 */	fmuls f1, f1, f0
/* 802E36EC 002E062C  FC 00 EA 10 */	fabs f0, f29
/* 802E36F0 002E0630  FC 00 00 18 */	frsp f0, f0
/* 802E36F4 002E0634  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E36F8 002E0638  40 81 00 1C */	ble .L_802E3714
/* 802E36FC 002E063C  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E3700 002E0640  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802E3704 002E0644  40 81 00 0C */	ble .L_802E3710
/* 802E3708 002E0648  FF A0 08 90 */	fmr f29, f1
/* 802E370C 002E064C  48 00 00 08 */	b .L_802E3714
.L_802E3710:
/* 802E3710 002E0650  FF A0 08 50 */	fneg f29, f1
.L_802E3714:
/* 802E3714 002E0654  7F E3 FB 78 */	mr r3, r31
/* 802E3718 002E0658  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E371C 002E065C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E3720 002E0660  7D 89 03 A6 */	mtctr r12
/* 802E3724 002E0664  4E 80 04 21 */	bctrl 
/* 802E3728 002E0668  EC 3D 08 2A */	fadds f1, f29, f1
/* 802E372C 002E066C  48 12 E4 A5 */	bl roundAng__Ff
/* 802E3730 002E0670  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802E3734 002E0674  7F E3 FB 78 */	mr r3, r31
/* 802E3738 002E0678  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802E373C 002E067C  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802E3740 002E0680  48 00 12 0D */	bl isAttackableTarget__Q34Game6Kabuto3ObjFv
/* 802E3744 002E0684  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E3748 002E0688  41 82 00 18 */	beq .L_802E3760
/* 802E374C 002E068C  38 00 00 0B */	li r0, 0xb
/* 802E3750 002E0690  7F E3 FB 78 */	mr r3, r31
/* 802E3754 002E0694  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E3758 002E0698  4B E2 1B 49 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E375C 002E069C  48 00 00 60 */	b .L_802E37BC
.L_802E3760:
/* 802E3760 002E06A0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E3764 002E06A4  FC 40 FA 10 */	fabs f2, f31
/* 802E3768 002E06A8  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E376C 002E06AC  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E3770 002E06B0  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E3774 002E06B4  FC 40 10 18 */	frsp f2, f2
/* 802E3778 002E06B8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E377C 002E06BC  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E3780 002E06C0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E3784 002E06C4  4C 40 13 82 */	cror 2, 0, 2
/* 802E3788 002E06C8  40 82 00 18 */	bne .L_802E37A0
/* 802E378C 002E06CC  38 00 00 09 */	li r0, 9
/* 802E3790 002E06D0  7F E3 FB 78 */	mr r3, r31
/* 802E3794 002E06D4  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E3798 002E06D8  4B E2 1B 09 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E379C 002E06DC  48 00 00 20 */	b .L_802E37BC
.L_802E37A0:
/* 802E37A0 002E06E0  38 00 00 0A */	li r0, 0xa
/* 802E37A4 002E06E4  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E37A8 002E06E8  48 00 00 14 */	b .L_802E37BC
.L_802E37AC:
/* 802E37AC 002E06EC  38 00 00 08 */	li r0, 8
/* 802E37B0 002E06F0  7F E3 FB 78 */	mr r3, r31
/* 802E37B4 002E06F4  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E37B8 002E06F8  4B E2 1A E9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802E37BC:
/* 802E37BC 002E06FC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E37C0 002E0700  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E37C4 002E0704  28 00 00 00 */	cmplwi r0, 0
/* 802E37C8 002E0708  41 82 00 30 */	beq .L_802E37F8
/* 802E37CC 002E070C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E37D0 002E0710  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E37D4 002E0714  40 82 00 24 */	bne .L_802E37F8
/* 802E37D8 002E0718  7F C3 F3 78 */	mr r3, r30
/* 802E37DC 002E071C  7F E4 FB 78 */	mr r4, r31
/* 802E37E0 002E0720  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E37E4 002E0724  38 C0 00 00 */	li r6, 0
/* 802E37E8 002E0728  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802E37EC 002E072C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E37F0 002E0730  7D 89 03 A6 */	mtctr r12
/* 802E37F4 002E0734  4E 80 04 21 */	bctrl 
.L_802E37F8:
/* 802E37F8 002E0738  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 802E37FC 002E073C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 802E3800 002E0740  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 802E3804 002E0744  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 802E3808 002E0748  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 802E380C 002E074C  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 802E3810 002E0750  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 802E3814 002E0754  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 802E3818 002E0758  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802E381C 002E075C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802E3820 002E0760  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802E3824 002E0764  7C 08 03 A6 */	mtlr r0
/* 802E3828 002E0768  38 21 00 70 */	addi r1, r1, 0x70
/* 802E382C 002E076C  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBase, global
/* 802E3830 002E0770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E3834 002E0774  7C 08 02 A6 */	mflr r0
/* 802E3838 002E0778  7C 83 23 78 */	mr r3, r4
/* 802E383C 002E077C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E3840 002E0780  81 84 00 00 */	lwz r12, 0(r4)
/* 802E3844 002E0784  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 802E3848 002E0788  7D 89 03 A6 */	mtctr r12
/* 802E384C 002E078C  4E 80 04 21 */	bctrl 
/* 802E3850 002E0790  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E3854 002E0794  7C 08 03 A6 */	mtlr r0
/* 802E3858 002E0798  38 21 00 10 */	addi r1, r1, 0x10
/* 802E385C 002E079C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto12StateFixTurnFPQ24Game9EnemyBase

.fn finishRotateEffect__Q34Game6Kabuto3ObjFv, weak
/* 802E3860 002E07A0  4E 80 00 20 */	blr 
.endfn finishRotateEffect__Q34Game6Kabuto3ObjFv

.fn init__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E3864 002E07A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E3868 002E07A8  7C 08 02 A6 */	mflr r0
/* 802E386C 002E07AC  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E3870 002E07B0  38 A0 00 00 */	li r5, 0
/* 802E3874 002E07B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E3878 002E07B8  38 00 FF FF */	li r0, -1
/* 802E387C 002E07BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E3880 002E07C0  7C 9F 23 78 */	mr r31, r4
/* 802E3884 002E07C4  7F E3 FB 78 */	mr r3, r31
/* 802E3888 002E07C8  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802E388C 002E07CC  38 80 00 08 */	li r4, 8
/* 802E3890 002E07D0  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802E3894 002E07D4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E3898 002E07D8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802E389C 002E07DC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E38A0 002E07E0  4B E2 17 65 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E38A4 002E07E4  7F E3 FB 78 */	mr r3, r31
/* 802E38A8 002E07E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E38AC 002E07EC  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802E38B0 002E07F0  7D 89 03 A6 */	mtctr r12
/* 802E38B4 002E07F4  4E 80 04 21 */	bctrl 
/* 802E38B8 002E07F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E38BC 002E07FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E38C0 002E0800  7C 08 03 A6 */	mtlr r0
/* 802E38C4 002E0804  38 21 00 10 */	addi r1, r1, 0x10
/* 802E38C8 002E0808  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBase, global
/* 802E38CC 002E080C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E38D0 002E0810  7C 08 02 A6 */	mflr r0
/* 802E38D4 002E0814  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E38D8 002E0818  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802E38DC 002E081C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802E38E0 002E0820  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802E38E4 002E0824  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802E38E8 002E0828  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E38EC 002E082C  7C 9F 23 78 */	mr r31, r4
/* 802E38F0 002E0830  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E38F4 002E0834  7C 7E 1B 78 */	mr r30, r3
/* 802E38F8 002E0838  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E38FC 002E083C  4C 40 13 82 */	cror 2, 0, 2
/* 802E3900 002E0840  40 82 00 20 */	bne .L_802E3920
/* 802E3904 002E0844  81 83 00 00 */	lwz r12, 0(r3)
/* 802E3908 002E0848  38 A0 00 00 */	li r5, 0
/* 802E390C 002E084C  38 C0 00 00 */	li r6, 0
/* 802E3910 002E0850  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3914 002E0854  7D 89 03 A6 */	mtctr r12
/* 802E3918 002E0858  4E 80 04 21 */	bctrl 
/* 802E391C 002E085C  48 00 01 F0 */	b .L_802E3B0C
.L_802E3920:
/* 802E3920 002E0860  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E3924 002E0864  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E3928 002E0868  28 00 00 00 */	cmplwi r0, 0
/* 802E392C 002E086C  41 82 01 E0 */	beq .L_802E3B0C
/* 802E3930 002E0870  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E3934 002E0874  28 00 00 02 */	cmplwi r0, 2
/* 802E3938 002E0878  40 82 00 18 */	bne .L_802E3950
/* 802E393C 002E087C  7F E3 FB 78 */	mr r3, r31
/* 802E3940 002E0880  48 00 12 C9 */	bl createStoneAttack__Q34Game6Kabuto3ObjFv
/* 802E3944 002E0884  7F E3 FB 78 */	mr r3, r31
/* 802E3948 002E0888  48 00 14 59 */	bl createRockEmitEffect__Q34Game6Kabuto3ObjFv
/* 802E394C 002E088C  48 00 01 C0 */	b .L_802E3B0C
.L_802E3950:
/* 802E3950 002E0890  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E3954 002E0894  40 82 01 B8 */	bne .L_802E3B0C
/* 802E3958 002E0898  7F E3 FB 78 */	mr r3, r31
/* 802E395C 002E089C  38 80 00 00 */	li r4, 0
/* 802E3960 002E08A0  4B E3 0C F9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E3964 002E08A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E3968 002E08A8  41 82 00 28 */	beq .L_802E3990
/* 802E396C 002E08AC  7F C3 F3 78 */	mr r3, r30
/* 802E3970 002E08B0  7F E4 FB 78 */	mr r4, r31
/* 802E3974 002E08B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3978 002E08B8  38 A0 00 0C */	li r5, 0xc
/* 802E397C 002E08BC  38 C0 00 00 */	li r6, 0
/* 802E3980 002E08C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3984 002E08C4  7D 89 03 A6 */	mtctr r12
/* 802E3988 002E08C8  4E 80 04 21 */	bctrl 
/* 802E398C 002E08CC  48 00 01 80 */	b .L_802E3B0C
.L_802E3990:
/* 802E3990 002E08D0  7F E3 FB 78 */	mr r3, r31
/* 802E3994 002E08D4  48 00 0F B9 */	bl isAttackableTarget__Q34Game6Kabuto3ObjFv
/* 802E3998 002E08D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E399C 002E08DC  41 82 00 28 */	beq .L_802E39C4
/* 802E39A0 002E08E0  7F C3 F3 78 */	mr r3, r30
/* 802E39A4 002E08E4  7F E4 FB 78 */	mr r4, r31
/* 802E39A8 002E08E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E39AC 002E08EC  38 A0 00 0B */	li r5, 0xb
/* 802E39B0 002E08F0  38 C0 00 00 */	li r6, 0
/* 802E39B4 002E08F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E39B8 002E08F8  7D 89 03 A6 */	mtctr r12
/* 802E39BC 002E08FC  4E 80 04 21 */	bctrl 
/* 802E39C0 002E0900  48 00 01 4C */	b .L_802E3B0C
.L_802E39C4:
/* 802E39C4 002E0904  7F E3 FB 78 */	mr r3, r31
/* 802E39C8 002E0908  48 00 0F 2D */	bl getSearchedTarget__Q34Game6Kabuto3ObjFv
/* 802E39CC 002E090C  28 03 00 00 */	cmplwi r3, 0
/* 802E39D0 002E0910  41 82 01 1C */	beq .L_802E3AEC
/* 802E39D4 002E0914  7C 64 1B 78 */	mr r4, r3
/* 802E39D8 002E0918  38 61 00 20 */	addi r3, r1, 0x20
/* 802E39DC 002E091C  81 84 00 00 */	lwz r12, 0(r4)
/* 802E39E0 002E0920  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E39E4 002E0924  7D 89 03 A6 */	mtctr r12
/* 802E39E8 002E0928  4E 80 04 21 */	bctrl 
/* 802E39EC 002E092C  7F E4 FB 78 */	mr r4, r31
/* 802E39F0 002E0930  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802E39F4 002E0934  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E39F8 002E0938  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E39FC 002E093C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802E3A00 002E0940  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E3A04 002E0944  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E3A08 002E0948  D0 41 00 08 */	stfs f2, 8(r1)
/* 802E3A0C 002E094C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802E3A10 002E0950  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E3A14 002E0954  7D 89 03 A6 */	mtctr r12
/* 802E3A18 002E0958  4E 80 04 21 */	bctrl 
/* 802E3A1C 002E095C  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802E3A20 002E0960  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E3A24 002E0964  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802E3A28 002E0968  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E3A2C 002E096C  C0 21 00 08 */	lfs f1, 8(r1)
/* 802E3A30 002E0970  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E3A34 002E0974  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802E3A38 002E0978  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E3A3C 002E097C  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E3A40 002E0980  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802E3A44 002E0984  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802E3A48 002E0988  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802E3A4C 002E098C  4B D5 16 BD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E3A50 002E0990  48 12 E1 81 */	bl roundAng__Ff
/* 802E3A54 002E0994  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3A58 002E0998  FF E0 08 90 */	fmr f31, f1
/* 802E3A5C 002E099C  7F E3 FB 78 */	mr r3, r31
/* 802E3A60 002E09A0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E3A64 002E09A4  7D 89 03 A6 */	mtctr r12
/* 802E3A68 002E09A8  4E 80 04 21 */	bctrl 
/* 802E3A6C 002E09AC  FC 40 08 90 */	fmr f2, f1
/* 802E3A70 002E09B0  FC 20 F8 90 */	fmr f1, f31
/* 802E3A74 002E09B4  48 12 E1 89 */	bl angDist__Fff
/* 802E3A78 002E09B8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E3A7C 002E09BC  FC 40 0A 10 */	fabs f2, f1
/* 802E3A80 002E09C0  C0 02 EA 54 */	lfs f0, lbl_8051CDB4@sda21(r2)
/* 802E3A84 002E09C4  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E3A88 002E09C8  C0 22 EA 50 */	lfs f1, lbl_8051CDB0@sda21(r2)
/* 802E3A8C 002E09CC  FC 40 10 18 */	frsp f2, f2
/* 802E3A90 002E09D0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E3A94 002E09D4  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E3A98 002E09D8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E3A9C 002E09DC  4C 40 13 82 */	cror 2, 0, 2
/* 802E3AA0 002E09E0  40 82 00 28 */	bne .L_802E3AC8
/* 802E3AA4 002E09E4  7F C3 F3 78 */	mr r3, r30
/* 802E3AA8 002E09E8  7F E4 FB 78 */	mr r4, r31
/* 802E3AAC 002E09EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3AB0 002E09F0  38 A0 00 09 */	li r5, 9
/* 802E3AB4 002E09F4  38 C0 00 00 */	li r6, 0
/* 802E3AB8 002E09F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3ABC 002E09FC  7D 89 03 A6 */	mtctr r12
/* 802E3AC0 002E0A00  4E 80 04 21 */	bctrl 
/* 802E3AC4 002E0A04  48 00 00 48 */	b .L_802E3B0C
.L_802E3AC8:
/* 802E3AC8 002E0A08  7F C3 F3 78 */	mr r3, r30
/* 802E3ACC 002E0A0C  7F E4 FB 78 */	mr r4, r31
/* 802E3AD0 002E0A10  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3AD4 002E0A14  38 A0 00 0A */	li r5, 0xa
/* 802E3AD8 002E0A18  38 C0 00 00 */	li r6, 0
/* 802E3ADC 002E0A1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3AE0 002E0A20  7D 89 03 A6 */	mtctr r12
/* 802E3AE4 002E0A24  4E 80 04 21 */	bctrl 
/* 802E3AE8 002E0A28  48 00 00 24 */	b .L_802E3B0C
.L_802E3AEC:
/* 802E3AEC 002E0A2C  7F C3 F3 78 */	mr r3, r30
/* 802E3AF0 002E0A30  7F E4 FB 78 */	mr r4, r31
/* 802E3AF4 002E0A34  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3AF8 002E0A38  38 A0 00 08 */	li r5, 8
/* 802E3AFC 002E0A3C  38 C0 00 00 */	li r6, 0
/* 802E3B00 002E0A40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3B04 002E0A44  7D 89 03 A6 */	mtctr r12
/* 802E3B08 002E0A48  4E 80 04 21 */	bctrl 
.L_802E3B0C:
/* 802E3B0C 002E0A4C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802E3B10 002E0A50  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E3B14 002E0A54  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802E3B18 002E0A58  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802E3B1C 002E0A5C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802E3B20 002E0A60  7C 08 03 A6 */	mtlr r0
/* 802E3B24 002E0A64  38 21 00 50 */	addi r1, r1, 0x50
/* 802E3B28 002E0A68  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBase, global
/* 802E3B2C 002E0A6C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto14StateFixAttackFPQ24Game9EnemyBase

.fn init__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E3B30 002E0A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E3B34 002E0A74  7C 08 02 A6 */	mflr r0
/* 802E3B38 002E0A78  38 A0 00 00 */	li r5, 0
/* 802E3B3C 002E0A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E3B40 002E0A80  38 00 FF FF */	li r0, -1
/* 802E3B44 002E0A84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E3B48 002E0A88  7C 9F 23 78 */	mr r31, r4
/* 802E3B4C 002E0A8C  38 80 00 09 */	li r4, 9
/* 802E3B50 002E0A90  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802E3B54 002E0A94  7F E3 FB 78 */	mr r3, r31
/* 802E3B58 002E0A98  4B E2 14 AD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E3B5C 002E0A9C  7F E3 FB 78 */	mr r3, r31
/* 802E3B60 002E0AA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E3B64 002E0AA4  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 802E3B68 002E0AA8  7D 89 03 A6 */	mtctr r12
/* 802E3B6C 002E0AAC  4E 80 04 21 */	bctrl 
/* 802E3B70 002E0AB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E3B74 002E0AB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E3B78 002E0AB8  7C 08 03 A6 */	mtlr r0
/* 802E3B7C 002E0ABC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E3B80 002E0AC0  4E 80 00 20 */	blr 
.endfn init__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBase, global
/* 802E3B84 002E0AC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E3B88 002E0AC8  7C 08 02 A6 */	mflr r0
/* 802E3B8C 002E0ACC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E3B90 002E0AD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802E3B94 002E0AD4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802E3B98 002E0AD8  7C 9E 23 78 */	mr r30, r4
/* 802E3B9C 002E0ADC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802E3BA0 002E0AE0  7C 7D 1B 78 */	mr r29, r3
/* 802E3BA4 002E0AE4  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802E3BA8 002E0AE8  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802E3BAC 002E0AEC  28 00 00 00 */	cmplwi r0, 0
/* 802E3BB0 002E0AF0  41 82 01 24 */	beq .L_802E3CD4
/* 802E3BB4 002E0AF4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802E3BB8 002E0AF8  28 00 00 02 */	cmplwi r0, 2
/* 802E3BBC 002E0AFC  40 82 00 C8 */	bne .L_802E3C84
/* 802E3BC0 002E0B00  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802E3BC4 002E0B04  7F C3 F3 78 */	mr r3, r30
/* 802E3BC8 002E0B08  C0 82 EA 64 */	lfs f4, lbl_8051CDC4@sda21(r2)
/* 802E3BCC 002E0B0C  38 80 00 00 */	li r4, 0
/* 802E3BD0 002E0B10  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E3BD4 002E0B14  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E3BD8 002E0B18  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E3BDC 002E0B1C  4B E2 FB B5 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802E3BE0 002E0B20  7F C3 F3 78 */	mr r3, r30
/* 802E3BE4 002E0B24  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 802E3BE8 002E0B28  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3BEC 002E0B2C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E3BF0 002E0B30  7D 89 03 A6 */	mtctr r12
/* 802E3BF4 002E0B34  4E 80 04 21 */	bctrl 
/* 802E3BF8 002E0B38  FC 80 08 90 */	fmr f4, f1
/* 802E3BFC 002E0B3C  C0 3F 05 14 */	lfs f1, 0x514(r31)
/* 802E3C00 002E0B40  C0 5F 04 C4 */	lfs f2, 0x4c4(r31)
/* 802E3C04 002E0B44  7F C3 F3 78 */	mr r3, r30
/* 802E3C08 002E0B48  C0 7F 04 EC */	lfs f3, 0x4ec(r31)
/* 802E3C0C 002E0B4C  38 80 00 00 */	li r4, 0
/* 802E3C10 002E0B50  4B E2 F8 C5 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E3C14 002E0B54  7F C3 F3 78 */	mr r3, r30
/* 802E3C18 002E0B58  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 802E3C1C 002E0B5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E3C20 002E0B60  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E3C24 002E0B64  7D 89 03 A6 */	mtctr r12
/* 802E3C28 002E0B68  4E 80 04 21 */	bctrl 
/* 802E3C2C 002E0B6C  FC 80 08 90 */	fmr f4, f1
/* 802E3C30 002E0B70  C0 3F 05 3C */	lfs f1, 0x53c(r31)
/* 802E3C34 002E0B74  C0 5F 04 C4 */	lfs f2, 0x4c4(r31)
/* 802E3C38 002E0B78  7F C3 F3 78 */	mr r3, r30
/* 802E3C3C 002E0B7C  C0 7F 04 EC */	lfs f3, 0x4ec(r31)
/* 802E3C40 002E0B80  38 80 00 00 */	li r4, 0
/* 802E3C44 002E0B84  4B E2 F4 D9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E3C48 002E0B88  C0 22 EA 48 */	lfs f1, lbl_8051CDA8@sda21(r2)
/* 802E3C4C 002E0B8C  D0 3E 02 0C */	stfs f1, 0x20c(r30)
/* 802E3C50 002E0B90  C0 1E 02 00 */	lfs f0, 0x200(r30)
/* 802E3C54 002E0B94  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E3C58 002E0B98  4C 40 13 82 */	cror 2, 0, 2
/* 802E3C5C 002E0B9C  40 82 00 78 */	bne .L_802E3CD4
/* 802E3C60 002E0BA0  7F A3 EB 78 */	mr r3, r29
/* 802E3C64 002E0BA4  7F C4 F3 78 */	mr r4, r30
/* 802E3C68 002E0BA8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E3C6C 002E0BAC  38 A0 00 00 */	li r5, 0
/* 802E3C70 002E0BB0  38 C0 00 00 */	li r6, 0
/* 802E3C74 002E0BB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3C78 002E0BB8  7D 89 03 A6 */	mtctr r12
/* 802E3C7C 002E0BBC  4E 80 04 21 */	bctrl 
/* 802E3C80 002E0BC0  48 00 00 54 */	b .L_802E3CD4
.L_802E3C84:
/* 802E3C84 002E0BC4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E3C88 002E0BC8  40 82 00 4C */	bne .L_802E3CD4
/* 802E3C8C 002E0BCC  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 802E3C90 002E0BD0  C0 02 EA 48 */	lfs f0, lbl_8051CDA8@sda21(r2)
/* 802E3C94 002E0BD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E3C98 002E0BD8  4C 40 13 82 */	cror 2, 0, 2
/* 802E3C9C 002E0BDC  40 82 00 20 */	bne .L_802E3CBC
/* 802E3CA0 002E0BE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802E3CA4 002E0BE4  38 A0 00 00 */	li r5, 0
/* 802E3CA8 002E0BE8  38 C0 00 00 */	li r6, 0
/* 802E3CAC 002E0BEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3CB0 002E0BF0  7D 89 03 A6 */	mtctr r12
/* 802E3CB4 002E0BF4  4E 80 04 21 */	bctrl 
/* 802E3CB8 002E0BF8  48 00 00 1C */	b .L_802E3CD4
.L_802E3CBC:
/* 802E3CBC 002E0BFC  81 83 00 00 */	lwz r12, 0(r3)
/* 802E3CC0 002E0C00  38 A0 00 0B */	li r5, 0xb
/* 802E3CC4 002E0C04  38 C0 00 00 */	li r6, 0
/* 802E3CC8 002E0C08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E3CCC 002E0C0C  7D 89 03 A6 */	mtctr r12
/* 802E3CD0 002E0C10  4E 80 04 21 */	bctrl 
.L_802E3CD4:
/* 802E3CD4 002E0C14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E3CD8 002E0C18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802E3CDC 002E0C1C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802E3CE0 002E0C20  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802E3CE4 002E0C24  7C 08 03 A6 */	mtlr r0
/* 802E3CE8 002E0C28  38 21 00 20 */	addi r1, r1, 0x20
/* 802E3CEC 002E0C2C  4E 80 00 20 */	blr 
.endfn exec__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBase, global
/* 802E3CF0 002E0C30  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game6Kabuto13StateFixFlickFPQ24Game9EnemyBase
