.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __end_critical_region
__end_critical_region:
/* 800C6258 000C3198  4E 80 00 20 */	blr 

.global __begin_critical_region
__begin_critical_region:
/* 800C625C 000C319C  4E 80 00 20 */	blr 

.global __kill_critical_regions
__kill_critical_regions:
/* 800C6260 000C31A0  4E 80 00 20 */	blr 
