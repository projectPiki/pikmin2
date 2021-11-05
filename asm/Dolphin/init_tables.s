.include "macros.inc"
.section .init, "ax"  # 0x80003100 - 0x80005600

.global lbl_80005544 #_rom_copy_info
lbl_80005544:
/* 80005544 00002544  80 00 31 00 */	.4byte _f_init_rom
/* 80005548 00002548  80 00 31 00 */	.4byte _f_init
/* 8000554C 0000254C  00 00 24 E8 */	.4byte _size_init_reduced
/* 80005550 00002550  80 00 56 00 */	.4byte _f__extab_rom
/* 80005554 00002554  80 00 56 00 */	.4byte _f__extab
/* 80005558 00002558  00 00 00 48 */	.4byte _size_extab_reduced
/* 8000555C 0000255C  80 00 56 60 */	.4byte _f__exidx_rom
/* 80005560 00002560  80 00 56 60 */	.4byte _f__exidx
/* 80005564 00002564  00 00 00 5C */	.4byte _size_extabindex_reduced
/* 80005568 00002568  80 00 56 C0 */	.4byte _f_text_rom
/* 8000556C 0000256C  80 00 56 C0 */	.4byte _f_text
/* 80005570 00002570  00 46 D8 24 */	.4byte _size_text_reduced
/* 80005574 00002574  80 47 2F 00 */	.4byte _f_ctors_rom
/* 80005578 00002578  80 47 2F 00 */	.4byte _f_ctors
/* 8000557C 0000257C  00 00 03 C0 */	.4byte _size_ctors
/* 80005580 00002580  80 47 32 C0 */	.4byte _f_dtors_rom
/* 80005584 00002584  80 47 32 C0 */	.4byte _f_dtors
/* 80005588 00002588  00 00 00 10 */	.4byte _size_dtors_reduced
/* 8000558C 0000258C  80 47 32 E0 */	.4byte _f_rodata_rom
/* 80005590 00002590  80 47 32 E0 */	.4byte _f_rodata
/* 80005594 00002594  00 02 AF 32 */	.4byte _size_rodata_reduced
/* 80005598 00002598  80 49 E2 20 */	.4byte _f_data_rom
/* 8000559C 0000259C  80 49 E2 20 */	.4byte _f_data
/* 800055A0 000025A0  00 05 19 E8 */	.4byte _size_data_reduced
/* 800055A4 000025A4  80 51 46 80 */	.4byte _f_sdata_rom
/* 800055A8 000025A8  80 51 46 80 */	.4byte _f_sdata
/* 800055AC 000025AC  00 00 07 00 */	.4byte _size_sdata
/* 800055B0 000025B0  80 51 63 60 */	.4byte _f_sdata2_rom
/* 800055B4 000025B4  80 51 63 60 */	.4byte _f_sdata2
/* 800055B8 000025B8  00 00 AA D0 */	.4byte _size_sdata2_reduced
/* 800055BC 000025BC  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055C0 000025C0  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055C4 000025C4  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */

.global lbl_800055C8 #_bss_init_info
lbl_800055C8:
/* 800055C8 000025C8  80 4E FC 20 */	.4byte _f_bss
/* 800055CC 000025CC  00 02 4A 5C */	.4byte _size_bss_reduced
/* 800055D0 000025D0  80 51 4D 80 */	.4byte _f_sbss
/* 800055D4 000025D4  00 00 15 C4 */	.4byte _size_sbss_reduced
/* 800055D8 000025D8  80 52 0E 40 */	.4byte _f_sbss2
/* 800055DC 000025DC  00 00 00 98 */	.4byte _size_sbss2
/* 800055E0 000025E0  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055E4 000025E4  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055E8 000025E8  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055EC 000025EC  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055F0 000025F0  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055F4 000025F4  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055F8 000025F8  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */
/* 800055FC 000025FC  00 00 00 00 */	.4byte 0x00000000  /* unknown instruction */