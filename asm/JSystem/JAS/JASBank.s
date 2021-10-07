.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getCurrentHeap__7JASBankFv
getCurrentHeap__7JASBankFv:
/* 8009C2FC 0009923C  80 6D 8A 58 */	lwz r3, sCurrentHeap__7JASBank@sda21(r13)
/* 8009C300 00099240  28 03 00 00 */	cmplwi r3, 0
/* 8009C304 00099244  4C 82 00 20 */	bnelr 
/* 8009C308 00099248  80 6D 8A B8 */	lwz r3, JASDram@sda21(r13)
/* 8009C30C 0009924C  4E 80 00 20 */	blr 
