.include "macros.inc"
.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global sTableSize__14JASWaveBankMgr
sTableSize__14JASWaveBankMgr:
	.skip 0x4
.global sWaveBank__14JASWaveBankMgr
sWaveBank__14JASWaveBankMgr:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__14JASWaveBankMgrFi
init__14JASWaveBankMgrFi:
/* 8009C044 00098F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009C048 00098F88  7C 08 02 A6 */	mflr r0
/* 8009C04C 00098F8C  38 A0 00 00 */	li r5, 0
/* 8009C050 00098F90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009C054 00098F94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009C058 00098F98  54 7F 10 3A */	slwi r31, r3, 2
/* 8009C05C 00098F9C  93 C1 00 08 */	stw r30, 8(r1)
/* 8009C060 00098FA0  7C 7E 1B 78 */	mr r30, r3
/* 8009C064 00098FA4  7F E3 FB 78 */	mr r3, r31
/* 8009C068 00098FA8  80 8D 8A B8 */	lwz r4, JASDram@sda21(r13)
/* 8009C06C 00098FAC  4B F8 7F DD */	bl __nwa__FUlP7JKRHeapi
/* 8009C070 00098FB0  90 6D 8A 54 */	stw r3, sWaveBank__14JASWaveBankMgr@sda21(r13)
/* 8009C074 00098FB4  7F E4 FB 78 */	mr r4, r31
/* 8009C078 00098FB8  48 00 A1 ED */	bl bzero__7JASCalcFPvUl
/* 8009C07C 00098FBC  93 CD 8A 50 */	stw r30, sTableSize__14JASWaveBankMgr@sda21(r13)
/* 8009C080 00098FC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009C084 00098FC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009C088 00098FC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009C08C 00098FCC  7C 08 03 A6 */	mtlr r0
/* 8009C090 00098FD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009C094 00098FD4  4E 80 00 20 */	blr 

.global getWaveBank__14JASWaveBankMgrFi
getWaveBank__14JASWaveBankMgrFi:
/* 8009C098 00098FD8  2C 03 00 00 */	cmpwi r3, 0
/* 8009C09C 00098FDC  40 80 00 0C */	bge lbl_8009C0A8
/* 8009C0A0 00098FE0  38 60 00 00 */	li r3, 0
/* 8009C0A4 00098FE4  4E 80 00 20 */	blr 
lbl_8009C0A8:
/* 8009C0A8 00098FE8  80 0D 8A 50 */	lwz r0, sTableSize__14JASWaveBankMgr@sda21(r13)
/* 8009C0AC 00098FEC  7C 03 00 00 */	cmpw r3, r0
/* 8009C0B0 00098FF0  41 80 00 0C */	blt lbl_8009C0BC
/* 8009C0B4 00098FF4  38 60 00 00 */	li r3, 0
/* 8009C0B8 00098FF8  4E 80 00 20 */	blr 
lbl_8009C0BC:
/* 8009C0BC 00098FFC  80 8D 8A 54 */	lwz r4, sWaveBank__14JASWaveBankMgr@sda21(r13)
/* 8009C0C0 00099000  54 60 10 3A */	slwi r0, r3, 2
/* 8009C0C4 00099004  7C 64 00 2E */	lwzx r3, r4, r0
/* 8009C0C8 00099008  4E 80 00 20 */	blr 

.global registWaveBankWS__14JASWaveBankMgrFiPv
registWaveBankWS__14JASWaveBankMgrFiPv:
/* 8009C0CC 0009900C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009C0D0 00099010  7C 08 02 A6 */	mflr r0
/* 8009C0D4 00099014  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009C0D8 00099018  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009C0DC 0009901C  7C 9F 23 78 */	mr r31, r4
/* 8009C0E0 00099020  93 C1 00 08 */	stw r30, 8(r1)
/* 8009C0E4 00099024  7C 7E 1B 78 */	mr r30, r3
/* 8009C0E8 00099028  7F E3 FB 78 */	mr r3, r31
/* 8009C0EC 0009902C  4B FF C9 7D */	bl getGroupCount__11JASWSParserFPv
/* 8009C0F0 00099030  28 03 00 01 */	cmplwi r3, 1
/* 8009C0F4 00099034  40 82 00 14 */	bne lbl_8009C108
/* 8009C0F8 00099038  7F E3 FB 78 */	mr r3, r31
/* 8009C0FC 0009903C  4B FF CB 99 */	bl createSimpleWaveBank__11JASWSParserFPv
/* 8009C100 00099040  7C 65 1B 78 */	mr r5, r3
/* 8009C104 00099044  48 00 00 10 */	b lbl_8009C114
lbl_8009C108:
/* 8009C108 00099048  7F E3 FB 78 */	mr r3, r31
/* 8009C10C 0009904C  4B FF C9 85 */	bl createBasicWaveBank__11JASWSParserFPv
/* 8009C110 00099050  7C 65 1B 78 */	mr r5, r3
lbl_8009C114:
/* 8009C114 00099054  28 05 00 00 */	cmplwi r5, 0
/* 8009C118 00099058  40 82 00 0C */	bne lbl_8009C124
/* 8009C11C 0009905C  38 60 00 00 */	li r3, 0
/* 8009C120 00099060  48 00 00 14 */	b lbl_8009C134
lbl_8009C124:
/* 8009C124 00099064  80 8D 8A 54 */	lwz r4, sWaveBank__14JASWaveBankMgr@sda21(r13)
/* 8009C128 00099068  57 C0 10 3A */	slwi r0, r30, 2
/* 8009C12C 0009906C  38 60 00 01 */	li r3, 1
/* 8009C130 00099070  7C A4 01 2E */	stwx r5, r4, r0
lbl_8009C134:
/* 8009C134 00099074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009C138 00099078  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009C13C 0009907C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009C140 00099080  7C 08 03 A6 */	mtlr r0
/* 8009C144 00099084  38 21 00 10 */	addi r1, r1, 0x10
/* 8009C148 00099088  4E 80 00 20 */	blr 

.global loadWave__14JASWaveBankMgrFiiP7JASHeap
loadWave__14JASWaveBankMgrFiiP7JASHeap:
/* 8009C14C 0009908C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009C150 00099090  7C 08 02 A6 */	mflr r0
/* 8009C154 00099094  2C 03 00 00 */	cmpwi r3, 0
/* 8009C158 00099098  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009C15C 0009909C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009C160 000990A0  7C BF 2B 78 */	mr r31, r5
/* 8009C164 000990A4  40 80 00 0C */	bge lbl_8009C170
/* 8009C168 000990A8  38 60 00 00 */	li r3, 0
/* 8009C16C 000990AC  48 00 00 24 */	b lbl_8009C190
lbl_8009C170:
/* 8009C170 000990B0  80 0D 8A 50 */	lwz r0, sTableSize__14JASWaveBankMgr@sda21(r13)
/* 8009C174 000990B4  7C 03 00 00 */	cmpw r3, r0
/* 8009C178 000990B8  41 80 00 0C */	blt lbl_8009C184
/* 8009C17C 000990BC  38 60 00 00 */	li r3, 0
/* 8009C180 000990C0  48 00 00 10 */	b lbl_8009C190
lbl_8009C184:
/* 8009C184 000990C4  80 AD 8A 54 */	lwz r5, sWaveBank__14JASWaveBankMgr@sda21(r13)
/* 8009C188 000990C8  54 60 10 3A */	slwi r0, r3, 2
/* 8009C18C 000990CC  7C 65 00 2E */	lwzx r3, r5, r0
lbl_8009C190:
/* 8009C190 000990D0  28 03 00 00 */	cmplwi r3, 0
/* 8009C194 000990D4  40 82 00 0C */	bne lbl_8009C1A0
/* 8009C198 000990D8  38 60 00 00 */	li r3, 0
/* 8009C19C 000990DC  48 00 00 14 */	b lbl_8009C1B0
lbl_8009C1A0:
/* 8009C1A0 000990E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8009C1A4 000990E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8009C1A8 000990E8  7D 89 03 A6 */	mtctr r12
/* 8009C1AC 000990EC  4E 80 04 21 */	bctrl 
lbl_8009C1B0:
/* 8009C1B0 000990F0  28 03 00 00 */	cmplwi r3, 0
/* 8009C1B4 000990F4  40 82 00 0C */	bne lbl_8009C1C0
/* 8009C1B8 000990F8  38 60 00 00 */	li r3, 0
/* 8009C1BC 000990FC  48 00 00 0C */	b lbl_8009C1C8
lbl_8009C1C0:
/* 8009C1C0 00099100  7F E4 FB 78 */	mr r4, r31
/* 8009C1C4 00099104  4B FF FA 7D */	bl load__10JASWaveArcFP7JASHeap
lbl_8009C1C8:
/* 8009C1C8 00099108  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009C1CC 0009910C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009C1D0 00099110  7C 08 03 A6 */	mtlr r0
/* 8009C1D4 00099114  38 21 00 10 */	addi r1, r1, 0x10
/* 8009C1D8 00099118  4E 80 00 20 */	blr 

.global loadWaveTail__14JASWaveBankMgrFiiP7JASHeap
loadWaveTail__14JASWaveBankMgrFiiP7JASHeap:
/* 8009C1DC 0009911C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009C1E0 00099120  7C 08 02 A6 */	mflr r0
/* 8009C1E4 00099124  2C 03 00 00 */	cmpwi r3, 0
/* 8009C1E8 00099128  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009C1EC 0009912C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009C1F0 00099130  7C BF 2B 78 */	mr r31, r5
/* 8009C1F4 00099134  40 80 00 0C */	bge lbl_8009C200
/* 8009C1F8 00099138  38 60 00 00 */	li r3, 0
/* 8009C1FC 0009913C  48 00 00 24 */	b lbl_8009C220
lbl_8009C200:
/* 8009C200 00099140  80 0D 8A 50 */	lwz r0, sTableSize__14JASWaveBankMgr@sda21(r13)
/* 8009C204 00099144  7C 03 00 00 */	cmpw r3, r0
/* 8009C208 00099148  41 80 00 0C */	blt lbl_8009C214
/* 8009C20C 0009914C  38 60 00 00 */	li r3, 0
/* 8009C210 00099150  48 00 00 10 */	b lbl_8009C220
lbl_8009C214:
/* 8009C214 00099154  80 AD 8A 54 */	lwz r5, sWaveBank__14JASWaveBankMgr@sda21(r13)
/* 8009C218 00099158  54 60 10 3A */	slwi r0, r3, 2
/* 8009C21C 0009915C  7C 65 00 2E */	lwzx r3, r5, r0
lbl_8009C220:
/* 8009C220 00099160  28 03 00 00 */	cmplwi r3, 0
/* 8009C224 00099164  40 82 00 0C */	bne lbl_8009C230
/* 8009C228 00099168  38 60 00 00 */	li r3, 0
/* 8009C22C 0009916C  48 00 00 14 */	b lbl_8009C240
lbl_8009C230:
/* 8009C230 00099170  81 83 00 00 */	lwz r12, 0(r3)
/* 8009C234 00099174  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8009C238 00099178  7D 89 03 A6 */	mtctr r12
/* 8009C23C 0009917C  4E 80 04 21 */	bctrl 
lbl_8009C240:
/* 8009C240 00099180  28 03 00 00 */	cmplwi r3, 0
/* 8009C244 00099184  40 82 00 0C */	bne lbl_8009C250
/* 8009C248 00099188  38 60 00 00 */	li r3, 0
/* 8009C24C 0009918C  48 00 00 0C */	b lbl_8009C258
lbl_8009C250:
/* 8009C250 00099190  7F E4 FB 78 */	mr r4, r31
/* 8009C254 00099194  4B FF FB 15 */	bl loadTail__10JASWaveArcFP7JASHeap
lbl_8009C258:
/* 8009C258 00099198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009C25C 0009919C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009C260 000991A0  7C 08 03 A6 */	mtlr r0
/* 8009C264 000991A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8009C268 000991A8  4E 80 00 20 */	blr 

.global eraseWave__14JASWaveBankMgrFii
eraseWave__14JASWaveBankMgrFii:
/* 8009C26C 000991AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009C270 000991B0  7C 08 02 A6 */	mflr r0
/* 8009C274 000991B4  2C 03 00 00 */	cmpwi r3, 0
/* 8009C278 000991B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009C27C 000991BC  40 80 00 0C */	bge lbl_8009C288
/* 8009C280 000991C0  38 60 00 00 */	li r3, 0
/* 8009C284 000991C4  48 00 00 24 */	b lbl_8009C2A8
lbl_8009C288:
/* 8009C288 000991C8  80 0D 8A 50 */	lwz r0, sTableSize__14JASWaveBankMgr@sda21(r13)
/* 8009C28C 000991CC  7C 03 00 00 */	cmpw r3, r0
/* 8009C290 000991D0  41 80 00 0C */	blt lbl_8009C29C
/* 8009C294 000991D4  38 60 00 00 */	li r3, 0
/* 8009C298 000991D8  48 00 00 10 */	b lbl_8009C2A8
lbl_8009C29C:
/* 8009C29C 000991DC  80 AD 8A 54 */	lwz r5, sWaveBank__14JASWaveBankMgr@sda21(r13)
/* 8009C2A0 000991E0  54 60 10 3A */	slwi r0, r3, 2
/* 8009C2A4 000991E4  7C 65 00 2E */	lwzx r3, r5, r0
lbl_8009C2A8:
/* 8009C2A8 000991E8  28 03 00 00 */	cmplwi r3, 0
/* 8009C2AC 000991EC  40 82 00 0C */	bne lbl_8009C2B8
/* 8009C2B0 000991F0  38 60 00 00 */	li r3, 0
/* 8009C2B4 000991F4  48 00 00 14 */	b lbl_8009C2C8
lbl_8009C2B8:
/* 8009C2B8 000991F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8009C2BC 000991FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8009C2C0 00099200  7D 89 03 A6 */	mtctr r12
/* 8009C2C4 00099204  4E 80 04 21 */	bctrl 
lbl_8009C2C8:
/* 8009C2C8 00099208  28 03 00 00 */	cmplwi r3, 0
/* 8009C2CC 0009920C  40 82 00 0C */	bne lbl_8009C2D8
/* 8009C2D0 00099210  38 60 00 00 */	li r3, 0
/* 8009C2D4 00099214  48 00 00 18 */	b lbl_8009C2EC
lbl_8009C2D8:
/* 8009C2D8 00099218  4B FF FB B9 */	bl erase__10JASWaveArcFv
/* 8009C2DC 0009921C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009C2E0 00099220  7C 03 00 D0 */	neg r0, r3
/* 8009C2E4 00099224  7C 00 1B 78 */	or r0, r0, r3
/* 8009C2E8 00099228  54 03 0F FE */	srwi r3, r0, 0x1f
lbl_8009C2EC:
/* 8009C2EC 0009922C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009C2F0 00099230  7C 08 03 A6 */	mtlr r0
/* 8009C2F4 00099234  38 21 00 10 */	addi r1, r1, 0x10
/* 8009C2F8 00099238  4E 80 00 20 */	blr 
