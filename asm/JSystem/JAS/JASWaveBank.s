.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getCurrentHeap__11JASWaveBankFv
getCurrentHeap__11JASWaveBankFv:
/* 8009C030 00098F70  80 6D 8A 48 */	lwz r3, sCurrentHeap__11JASWaveBank@sda21(r13)
/* 8009C034 00098F74  28 03 00 00 */	cmplwi r3, 0
/* 8009C038 00098F78  4C 82 00 20 */	bnelr 
/* 8009C03C 00098F7C  80 6D 8A B8 */	lwz r3, JASDram@sda21(r13)
/* 8009C040 00098F80  4E 80 00 20 */	blr 
