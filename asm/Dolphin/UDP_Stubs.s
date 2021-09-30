.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global udp_cc_post_stop
udp_cc_post_stop:
/* 800C0C08 000BDB48  38 60 FF FF */	li r3, -1
/* 800C0C0C 000BDB4C  4E 80 00 20 */	blr 

.global udp_cc_pre_continue
udp_cc_pre_continue:
/* 800C0C10 000BDB50  38 60 FF FF */	li r3, -1
/* 800C0C14 000BDB54  4E 80 00 20 */	blr 

.global udp_cc_peek
udp_cc_peek:
/* 800C0C18 000BDB58  38 60 00 00 */	li r3, 0
/* 800C0C1C 000BDB5C  4E 80 00 20 */	blr 

.global udp_cc_write
udp_cc_write:
/* 800C0C20 000BDB60  38 60 00 00 */	li r3, 0
/* 800C0C24 000BDB64  4E 80 00 20 */	blr 

.global udp_cc_read
udp_cc_read:
/* 800C0C28 000BDB68  38 60 00 00 */	li r3, 0
/* 800C0C2C 000BDB6C  4E 80 00 20 */	blr 

.global udp_cc_close
udp_cc_close:
/* 800C0C30 000BDB70  38 60 FF FF */	li r3, -1
/* 800C0C34 000BDB74  4E 80 00 20 */	blr 

.global udp_cc_open
udp_cc_open:
/* 800C0C38 000BDB78  38 60 FF FF */	li r3, -1
/* 800C0C3C 000BDB7C  4E 80 00 20 */	blr 

.global udp_cc_shutdown
udp_cc_shutdown:
/* 800C0C40 000BDB80  38 60 FF FF */	li r3, -1
/* 800C0C44 000BDB84  4E 80 00 20 */	blr 

.global udp_cc_initialize
udp_cc_initialize:
/* 800C0C48 000BDB88  38 60 FF FF */	li r3, -1
/* 800C0C4C 000BDB8C  4E 80 00 20 */	blr 
