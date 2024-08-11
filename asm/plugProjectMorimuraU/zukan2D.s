.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_zukan2D_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80492520, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80492520
.balign 4
.obj lbl_8049252C, local
	.asciz "zukan2D.cpp"
.endobj lbl_8049252C
.balign 4
.obj lbl_80492538, local
	.asciz "P2Assert"
.endobj lbl_80492538
.balign 4
.obj lbl_80492544, local
	.asciz "newicon.blo"
.endobj lbl_80492544
.balign 4
.obj lbl_80492550, local
	.asciz "l_btn.bti"
.endobj lbl_80492550
.balign 4
.obj lbl_8049255C, local
	.asciz "mrUtil.h"
.endobj lbl_8049255C
.balign 8
.obj lbl_80492568, local # table of 10 Tmenu00-Tmenu09 char[8] (7 and 6 are swapped) (possibly u64)
	.8byte 0x00546D656E753030
	.8byte 0x00546D656E753031
	.8byte 0x00546D656E753032
	.8byte 0x00546D656E753033
	.8byte 0x00546D656E753034
	.8byte 0x00546D656E753035
	.8byte 0x00546D656E753037
	.8byte 0x00546D656E753036
	.8byte 0x00546D656E753038
	.8byte 0x00546D656E753039
.endobj lbl_80492568
.balign 8
.obj lbl_804925B8, local # table of 120 u64 (char[8]?) elements
	.ascii "Pn00_0_1"
	.ascii "Pn00_1_1"
	.ascii "Pn00_2_1"
	.ascii "Pn00_0_2"
	.ascii "Pn00_1_2"
	.ascii "Pn00_2_2"
	.8byte 0x50696D30305F3030
	.8byte 0x50696D30305F3031
	.8byte 0x50696D30305F3032
	.8byte 0x506D6530305F3030
	.8byte 0x506D6530305F3031
	.8byte 0x506D6530305F3032
	.8byte 0x506E30315F305F31
	.8byte 0x506E30315F315F31
	.8byte 0x506E30315F325F31
	.8byte 0x506E30315F305F32
	.8byte 0x506E30315F315F32
	.8byte 0x506E30315F325F32
	.8byte 0x50696D30315F3030
	.8byte 0x50696D30315F3031
	.8byte 0x50696D30315F3032
	.8byte 0x506D6530315F3030
	.8byte 0x506D6530315F3031
	.8byte 0x506D6530315F3032
	.8byte 0x506E30325F305F31
	.8byte 0x506E30325F315F31
	.8byte 0x506E30325F325F31
	.8byte 0x506E30325F305F32
	.8byte 0x506E30325F315F32
	.8byte 0x506E30325F325F32
	.8byte 0x50696D30325F3030
	.8byte 0x50696D30325F3031
	.8byte 0x50696D30325F3032
	.8byte 0x506D6530325F3030
	.8byte 0x506D6530325F3031
	.8byte 0x506D6530325F3032
	.8byte 0x506E30335F305F31
	.8byte 0x506E30335F315F31
	.8byte 0x506E30335F325F31
	.8byte 0x506E30335F305F32
	.8byte 0x506E30335F315F32
	.8byte 0x506E30335F325F32
	.8byte 0x50696D30335F3030
	.8byte 0x50696D30335F3031
	.8byte 0x50696D30335F3032
	.8byte 0x506D6530335F3030
	.8byte 0x506D6530335F3031
	.8byte 0x506D6530335F3032
	.8byte 0x506E30345F305F31
	.8byte 0x506E30345F315F31
	.8byte 0x506E30345F325F31
	.8byte 0x506E30345F305F32
	.8byte 0x506E30345F315F32
	.8byte 0x506E30345F325F32
	.8byte 0x50696D30345F3030
	.8byte 0x50696D30345F3031
	.8byte 0x50696D30345F3032
	.8byte 0x506D6530345F3030
	.8byte 0x506D6530345F3031
	.8byte 0x506D6530345F3032
	.8byte 0x506E30355F305F31
	.8byte 0x506E30355F315F31
	.8byte 0x506E30355F325F31
	.8byte 0x506E30355F305F32
	.8byte 0x506E30355F315F32
	.8byte 0x506E30355F325F32
	.8byte 0x50696D30355F3030
	.8byte 0x50696D30355F3031
	.8byte 0x50696D30355F3032
	.8byte 0x506D6530355F3030
	.8byte 0x506D6530355F3031
	.8byte 0x506D6530355F3032
	.8byte 0x506E30375F305F31
	.8byte 0x506E30375F315F31
	.8byte 0x506E30375F325F31
	.8byte 0x506E30375F305F32
	.8byte 0x506E30375F315F32
	.8byte 0x506E30375F325F32
	.8byte 0x50696D30375F3030
	.8byte 0x50696D30375F3031
	.8byte 0x50696D30375F3032
	.8byte 0x506D6530375F3030
	.8byte 0x506D6530375F3031
	.8byte 0x506D6530375F3032
	.8byte 0x506E30365F305F31
	.8byte 0x506E30365F315F31
	.8byte 0x506E30365F325F31
	.8byte 0x506E30365F305F32
	.8byte 0x506E30365F315F32
	.8byte 0x506E30365F325F32
	.8byte 0x50696D30365F3030
	.8byte 0x50696D30365F3031
	.8byte 0x50696D30365F3032
	.8byte 0x506D6530365F3030
	.8byte 0x506D6530365F3031
	.8byte 0x506D6530365F3032
	.8byte 0x506E30385F305F31
	.8byte 0x506E30385F315F31
	.8byte 0x506E30385F325F31
	.8byte 0x506E30385F305F32
	.8byte 0x506E30385F315F32
	.8byte 0x506E30385F325F32
	.8byte 0x50696D30385F3030
	.8byte 0x50696D30385F3031
	.8byte 0x50696D30385F3032
	.8byte 0x506D6530385F3030
	.8byte 0x506D6530385F3031
	.8byte 0x506D6530375F3035
	.8byte 0x506E30395F305F31
	.8byte 0x506E30395F315F31
	.8byte 0x506E30395F325F31
	.8byte 0x506E30395F305F32
	.8byte 0x506E30395F315F32
	.8byte 0x506E30395F325F32
	.8byte 0x50696D30395F3030
	.8byte 0x50696D30395F3031
	.8byte 0x50696D30395F3032
	.8byte 0x506D6530395F3030
	.8byte 0x506D6530395F3031
	.8byte 0x506D6530395F3032
.endobj lbl_804925B8
.balign 4
.obj lbl_80492978, local
	.asciz "w08_48_gra.bti"
.endobj lbl_80492978
.balign 4
.obj lbl_80492988, local
	.asciz "timg/flower_icon.bti"
.endobj lbl_80492988
.balign 4
.obj lbl_804929A0, local
	.asciz "enemyZukan"
.endobj lbl_804929A0
.balign 8
.obj lbl_804929B0, local
	.8byte 0x00313330315F3030
	.8byte 0x00313331305F3030
.endobj lbl_804929B0
.balign 8
.obj lbl_804929C0, local
	.8byte 0x00313830315F3030
	.8byte 0x00313831305F3030
.endobj lbl_804929C0
.balign 8
.obj lbl_804929D0, local
	.8byte 0x00313730315F3030
	.8byte 0x00313731305F3030
.endobj lbl_804929D0
.balign 4
.obj lbl_804929E0, local
	.asciz "set DebugHeapParent. mail to morimun.\n"
.endobj lbl_804929E0
.balign 4
.obj lbl_80492A08, local
	.asciz "new_seibutuzukan_main.blo"
.endobj lbl_80492A08
.balign 4
.obj lbl_80492A24, local
	.asciz "new_seibutuzukan_main.bck"
.endobj lbl_80492A24
.balign 4
.obj lbl_80492A40, local
	.asciz "new_seibutuzukan_main.bpk"
.endobj lbl_80492A40
.balign 4
.obj lbl_80492A5C, local
	.asciz "new_seibutuzukan_bg.blo"
.endobj lbl_80492A5C
.balign 4
.obj lbl_80492A74, local
	.asciz "new_seibutuzukan_effect.blo"
.endobj lbl_80492A74
.balign 4
.obj lbl_80492A90, local
	.asciz "new_seibutuzukan_effect.btk"
.endobj lbl_80492A90
.balign 4
.obj lbl_80492AAC, local
	.asciz "new_seibutuzukan_list.blo"
.endobj lbl_80492AAC
.balign 4
.obj lbl_80492AC8, local
	.asciz "new_seibutuzukan_suji.blo"
.endobj lbl_80492AC8
.balign 4
.obj lbl_80492AE4, local
	.asciz "zukan_mess_window.blo"
.endobj lbl_80492AE4
.balign 4
.obj lbl_80492AFC, local
	.asciz "zukan_mess_window.bck"
.endobj lbl_80492AFC
.balign 4
.obj lbl_80492B14, local
	.asciz "zukan_mess_window.bpk"
.endobj lbl_80492B14
.balign 4
.obj lbl_80492B2C, local
	.asciz "new_seibutuzukan_yajirushi.blo"
.endobj lbl_80492B2C
.balign 4
.obj lbl_80492B4C, local
	.asciz "price (%d) = %d\n"
.endobj lbl_80492B4C
.balign 8
.obj lbl_80492B60, local
	.8byte 0x00546D656E753132
	.8byte 0x00546D656E753133
	.8byte 0x00546D656E753030
	.8byte 0x00546D656E753031
	.8byte 0x00546D656E753032
	.8byte 0x00546D656E753033
	.8byte 0x00546D656E753034
	.8byte 0x00546D656E753035
	.8byte 0x00546D656E753037
	.8byte 0x00546D656E753036
	.8byte 0x00546D656E753038
	.8byte 0x00546D656E753039
	.8byte 0x00546D656E753130
	.8byte 0x00546D656E753131
.endobj lbl_80492B60
.balign 8
.obj lbl_80492BD0, local
	.8byte 0x506E31325F305F31
	.8byte 0x506E31325F315F31
	.8byte 0x506E31325F325F31
	.8byte 0x506E31325F305F32
	.8byte 0x506E31325F315F32
	.8byte 0x506E31325F325F32
	.8byte 0x50696D31325F3030
	.8byte 0x50696D31325F3031
	.8byte 0x50696D31325F3032
	.8byte 0x506D6531325F3030
	.8byte 0x506D6531325F3031
	.8byte 0x506D6531325F3032
	.8byte 0x506E31335F305F31
	.8byte 0x506E31335F315F31
	.8byte 0x506E31335F325F31
	.8byte 0x506E31335F305F32
	.8byte 0x506E31335F315F32
	.8byte 0x506E31335F325F32
	.8byte 0x50696D31335F3030
	.8byte 0x50696D31335F3031
	.8byte 0x50696D31335F3032
	.8byte 0x506D6531335F3030
	.8byte 0x506D6531335F3031
	.8byte 0x506D6531335F3032
	.8byte 0x506E30305F305F31
	.8byte 0x506E30305F315F31
	.8byte 0x506E30305F325F31
	.8byte 0x506E30305F305F32
	.8byte 0x506E30305F315F32
	.8byte 0x506E30305F325F32
	.8byte 0x50696D30305F3030
	.8byte 0x50696D30305F3031
	.8byte 0x50696D30305F3032
	.8byte 0x506D6530305F3030
	.8byte 0x506D6530305F3031
	.8byte 0x506D6530305F3032
	.8byte 0x506E30315F305F31
	.8byte 0x506E30315F315F31
	.8byte 0x506E30315F325F31
	.8byte 0x506E30315F305F32
	.8byte 0x506E30315F315F32
	.8byte 0x506E30315F325F32
	.8byte 0x50696D30315F3030
	.8byte 0x50696D30315F3031
	.8byte 0x50696D30315F3032
	.8byte 0x506D6530315F3030
	.8byte 0x506D6530315F3031
	.8byte 0x506D6530315F3032
	.8byte 0x506E30325F305F31
	.8byte 0x506E30325F315F31
	.8byte 0x506E30325F325F31
	.8byte 0x506E30325F305F32
	.8byte 0x506E30325F315F32
	.8byte 0x506E30325F325F32
	.8byte 0x50696D30325F3030
	.8byte 0x50696D30325F3031
	.8byte 0x50696D30325F3032
	.8byte 0x506D6530325F3030
	.8byte 0x506D6530325F3031
	.8byte 0x506D6530325F3032
	.8byte 0x506E30335F305F31
	.8byte 0x506E30335F315F31
	.8byte 0x506E30335F325F31
	.8byte 0x506E30335F305F32
	.8byte 0x506E30335F315F32
	.8byte 0x506E30335F325F32
	.8byte 0x50696D30335F3030
	.8byte 0x50696D30335F3031
	.8byte 0x50696D30335F3032
	.8byte 0x506D6530335F3030
	.8byte 0x506D6530335F3031
	.8byte 0x506D6530335F3032
	.8byte 0x506E30345F305F31
	.8byte 0x506E30345F315F31
	.8byte 0x506E30345F325F31
	.8byte 0x506E30345F305F32
	.8byte 0x506E30345F315F32
	.8byte 0x506E30345F325F32
	.8byte 0x50696D30345F3030
	.8byte 0x50696D30345F3031
	.8byte 0x50696D30345F3032
	.8byte 0x506D6530345F3030
	.8byte 0x506D6530345F3031
	.8byte 0x506D6530345F3032
	.8byte 0x506E30355F305F31
	.8byte 0x506E30355F315F31
	.8byte 0x506E30355F325F31
	.8byte 0x506E30355F305F32
	.8byte 0x506E30355F315F32
	.8byte 0x506E30355F325F32
	.8byte 0x50696D30355F3030
	.8byte 0x50696D30355F3031
	.8byte 0x50696D30355F3032
	.8byte 0x506D6530355F3030
	.8byte 0x506D6530355F3031
	.8byte 0x506D6530355F3032
	.8byte 0x506E30375F305F31
	.8byte 0x506E30375F315F31
	.8byte 0x506E30375F325F31
	.8byte 0x506E30375F305F32
	.8byte 0x506E30375F315F32
	.8byte 0x506E30375F325F32
	.8byte 0x50696D30375F3030
	.8byte 0x50696D30375F3031
	.8byte 0x50696D30375F3032
	.8byte 0x506D6530375F3030
	.8byte 0x506D6530375F3031
	.8byte 0x506D6530375F3032
	.8byte 0x506E30365F305F31
	.8byte 0x506E30365F315F31
	.8byte 0x506E30365F325F31
	.8byte 0x506E30365F305F32
	.8byte 0x506E30365F315F32
	.8byte 0x506E30365F325F32
	.8byte 0x50696D30365F3030
	.8byte 0x50696D30365F3031
	.8byte 0x50696D30365F3032
	.8byte 0x506D6530365F3030
	.8byte 0x506D6530365F3031
	.8byte 0x506D6530365F3032
	.8byte 0x506E30385F305F31
	.8byte 0x506E30385F315F31
	.8byte 0x506E30385F325F31
	.8byte 0x506E30385F305F32
	.8byte 0x506E30385F315F32
	.8byte 0x506E30385F325F32
	.8byte 0x50696D30385F3030
	.8byte 0x50696D30385F3031
	.8byte 0x50696D30385F3032
	.8byte 0x506D6530385F3030
	.8byte 0x506D6530385F3031
	.8byte 0x506D6530375F3035
	.8byte 0x506E30395F305F31
	.8byte 0x506E30395F315F31
	.8byte 0x506E30395F325F31
	.8byte 0x506E30395F305F32
	.8byte 0x506E30395F315F32
	.8byte 0x506E30395F325F32
	.8byte 0x50696D30395F3030
	.8byte 0x50696D30395F3031
	.8byte 0x50696D30395F3032
	.8byte 0x506D6530395F3030
	.8byte 0x506D6530395F3031
	.8byte 0x506D6530395F3032
	.8byte 0x506E31305F305F31
	.8byte 0x506E31305F315F31
	.8byte 0x506E31305F325F31
	.8byte 0x506E31305F305F32
	.8byte 0x506E31305F315F32
	.8byte 0x506E31305F325F32
	.8byte 0x50696D31305F3030
	.8byte 0x50696D31305F3031
	.8byte 0x50696D30395F3033
	.8byte 0x506D6531305F3030
	.8byte 0x506D6531305F3031
	.8byte 0x506D6531305F3032
	.8byte 0x506E31315F305F31
	.8byte 0x506E31315F315F31
	.8byte 0x506E31315F325F31
	.8byte 0x506E31315F305F32
	.8byte 0x506E31315F315F32
	.8byte 0x506E31315F325F32
	.8byte 0x50696D30395F3038
	.8byte 0x50696D31315F3031
	.8byte 0x50696D31315F3032
	.8byte 0x506D6531315F3030
	.8byte 0x506D6531315F3031
	.8byte 0x506D6531315F3032
.endobj lbl_80492BD0
.balign 4
.obj lbl_80493110, local
	.asciz "endWindow"
.endobj lbl_80493110
.balign 4
.obj lbl_8049311C, local
	.asciz "itemZukan"
.endobj lbl_8049311C
.balign 8
.obj lbl_80493128, local
	.8byte 0x00303130315F3030
	.8byte 0x00303131305F3030
	.8byte 0x00303230305F3030
.endobj lbl_80493128
.balign 8
.obj lbl_80493140, local
	.8byte 0x00303430315F3030
	.8byte 0x00303431305F3030
	.8byte 0x00303530305F3030
.endobj lbl_80493140
.balign 8
.obj lbl_80493158, local
	.8byte 0x00303730315F3030
	.8byte 0x00303731305F3030
	.8byte 0x00303830305F3030
.endobj lbl_80493158
.balign 8
.obj lbl_80493170, local
	.8byte 0x00313433315F3030
	.8byte 0x00313434305F3030
.endobj lbl_80493170
.balign 4
.obj lbl_80493180, local
	.asciz "timg/olimar_icon.bti"
.endobj lbl_80493180
.balign 4
.obj lbl_80493198, local
	.asciz "new_otakarazukan_list.blo"
.endobj lbl_80493198
.balign 4
.obj lbl_804931B4, local
	.asciz "new_otakarazukan_main.blo"
.endobj lbl_804931B4
.balign 4
.obj lbl_804931D0, local
	.asciz "new_otakarazukan_main.bck"
.endobj lbl_804931D0
.balign 4
.obj lbl_804931EC, local
	.asciz "new_otakarazukan_main.bpk"
.endobj lbl_804931EC
.balign 4
.obj lbl_80493208, local
	.asciz "new_otakarazukan_bg.blo"
.endobj lbl_80493208
.balign 4
.obj lbl_80493220, local
	.asciz "new_otakarazukan_effect.blo"
.endobj lbl_80493220
.balign 4
.obj lbl_8049323C, local
	.asciz "new_otakarazukan_effect.btk"
.endobj lbl_8049323C
.balign 4
.obj lbl_80493258, local
	.asciz "new_otakarazukan_yajirusi.blo"
.endobj lbl_80493258
.balign 4
.obj lbl_80493278, local
	.asciz "new_otakarazukan_main_suji.blo"
.endobj lbl_80493278
.balign 4
.obj lbl_80493298, local
	.asciz "weight (%d) = %d\n"
.endobj lbl_80493298
.balign 4
.obj lbl_804932AC, local
	.asciz "res_itemZukan.szs"
.endobj lbl_804932AC
.balign 4
.obj lbl_804932C0, local
	.asciz "screenObj.h"
.endobj lbl_804932C0
.balign 4
.obj lbl_804932CC, local
	.asciz "res_enemyZukan.szs"
.endobj lbl_804932CC

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj mCategoryArray__Q28Morimura10TItemZukan, global # treasure id of final category member
	.4byte 7	# Succulent Series
	.4byte 16	# Nature's Candy Series
	.4byte 22	# Xenoflora Series
	.4byte 27	# Gourmet Series
	.4byte 42	# Sweet Tooth Series
	.4byte 51	# Paleontology Series
	.4byte 57	# Ancient Secrets Series
	.4byte 63	# Cook's Arsenal Series
	.4byte 71	# Tortured Artist Series
	.4byte 79	# Modern Amenities Series
	.4byte 86	# Frigid Series
	.4byte 94	# Hyper-technology Series
	.4byte 103	# Industrial Set
	.4byte 109	# Husband's Tears Series
	.4byte 120	# Space Love Series
	.4byte 126	# Crystallized Emotion Series
	.4byte 146	# Dream Series
	.4byte 156	# Blast from the Past Series
	.4byte 160	# Mystical Energy Series
	.4byte 166	# Massive Receptacle Series
	.4byte 168	# Survival Series
	.4byte 176	# Ancient Ad Series
	.4byte 183	# Odd Logo Series
	.4byte 196	# Explorer's Friend Series
	.4byte 201	# Titan Dweevil Series
.endobj mCategoryArray__Q28Morimura10TItemZukan
.obj eIDInfo__8Morimura, global
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte 0x00000001
	.4byte 0x0000002B
	.4byte 0x00000002
	.4byte 0x0000002A
	.4byte 0x00000003
	.4byte 0x00000001
	.4byte 0x00000004
	.4byte 0x0000002D
	.4byte 0x00000005
	.4byte 0x0000002C
	.4byte 0x00000006
	.4byte 0x00000023
	.4byte 0x00000007
	.4byte 0x0000004C
	.4byte 0x00000008
	.4byte 0x0000001F
	.4byte 0x00000009
	.4byte 0x00000021
	.4byte 0x0000000A
	.4byte 0x0000001A
	.4byte 0x0000000B
	.4byte 0x00000043
	.4byte 0x0000000C
	.4byte 0x00000018
	.4byte 0x0000000D
	.4byte 0x00000019
	.4byte 0x0000000E
	.4byte 0x0000004B
	.4byte 0x0000000F
	.4byte 0x0000005F
	.4byte 0x00000010
	.4byte 0x0000001D
	.4byte 0x00000011
	.4byte 0x00000037
	.4byte 0x00000012
	.4byte 0x0000004E
	.4byte 0x00000013
	.4byte 0x00000009
	.4byte 0x00000014
	.4byte 0x0000000A
	.4byte 0x00000015
	.4byte 0x0000000B
	.4byte 0x00000017
	.4byte 0x0000000D
	.4byte 0x00000016
	.4byte 0x0000000C
	.4byte 0x00000018
	.4byte 0x0000000E
	.4byte 0x00000019
	.4byte 0x0000000F
	.4byte 0x0000001A
	.4byte 0x00000041
	.4byte 0x0000001B
	.4byte 0x0000001C
	.4byte 0x0000001C
	.4byte 0x00000044
	.4byte 0x0000001D
	.4byte 0x0000003F
	.4byte 0x0000001E
	.4byte 0x00000017
	.4byte 0x0000001F
	.4byte 0x00000020
	.4byte 0x00000020
	.4byte 0x0000003A
	.4byte 0x00000021
	.4byte 0x00000029
	.4byte 0x00000024
	.4byte 0x0000003B
	.4byte 0x00000025
	.4byte 0x0000003E
	.4byte 0x00000026
	.4byte 0x0000003C
	.4byte 0x00000027
	.4byte 0x0000003D
	.4byte 0x00000028
	.4byte 0x0000005D
	.4byte 0x00000029
	.4byte 0x00000065
	.4byte 0x0000002A
	.4byte 0x00000011
	.4byte 0x0000002B
	.4byte 0x00000012
	.4byte 0x0000002C
	.4byte 0x0000001B
	.4byte 0x00000023
	.4byte 0x00000048
	.4byte 0x00000022
	.4byte 0x00000039
	.4byte 0x00000039
	.4byte 0x00000000
	.4byte 0x0000002D
	.4byte 0x00000003
	.4byte 0x0000002E
	.4byte 0x00000004
	.4byte 0x0000002F
	.4byte 0x00000005
	.4byte 0x00000030
	.4byte 0x00000006
	.4byte 0x00000031
	.4byte 0x00000007
	.4byte 0x00000032
	.4byte 0x00000008
	.4byte 0x00000033
	.4byte 0x00000054
	.4byte 0x00000034
	.4byte 0x0000004F
	.4byte 0x00000035
	.4byte 0x0000004D
	.4byte 0x00000036
	.4byte 0x00000010
	.4byte 0x00000038
	.4byte 0x00000026
	.4byte 0x00000037
	.4byte 0x00000036
	.4byte 0x0000003A
	.4byte 0x00000030
	.4byte 0x0000003B
	.4byte 0x0000002F
	.4byte 0x0000003C
	.4byte 0x00000032
	.4byte 0x0000003D
	.4byte 0x0000002E
	.4byte 0x0000003E
	.4byte 0x00000051
	.4byte 0x0000003F
	.4byte 0x00000050
	.4byte 0x00000040
	.4byte 0x00000058
	.4byte 0x00000041
	.4byte 0x00000055
	.4byte 0x00000042
	.4byte 0x00000057
	.4byte 0x00000043
	.4byte 0x0000005A
	.4byte 0x00000044
	.4byte 0x00000034
	.4byte 0x00000048
	.4byte 0x00000035
	.4byte 0x00000045
	.4byte 0x0000001E
	.4byte 0x00000047
	.4byte 0x00000038
	.4byte 0x0000004F
	.4byte 0x00000045
	.4byte 0x0000004B
	.4byte 0x00000042
	.4byte 0x00000050
	.4byte 0x00000049
	.4byte 0x0000004C
	.4byte 0x00000047
	.4byte 0x00000049
	.4byte 0x00000028
	.4byte 0x00000046
	.4byte 0x00000022
	.4byte 0x0000004A
	.4byte 0x00000046
	.4byte 0x0000004E
	.4byte 0x0000005E
	.4byte 0x0000004D
	.4byte 0x00000063
.endobj eIDInfo__8Morimura
.obj lbl_804E3C20, local
	.4byte .L_80376438
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_80376458
	.4byte .L_80376458
	.4byte .L_803764C8
	.4byte .L_80376458
	.4byte .L_80376458
	.4byte .L_80376438
	.4byte .L_80376448
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_80376448
	.4byte .L_803764C8
	.4byte .L_80376448
	.4byte .L_803764C8
	.4byte .L_80376448
	.4byte .L_80376448
	.4byte .L_803764C8
	.4byte .L_80376448
	.4byte .L_80376438
	.4byte .L_80376438
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_80376448
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_803764C8
	.4byte .L_80376448
	.4byte .L_80376448
	.4byte .L_80376458
	.4byte .L_80376448
	.4byte .L_803764C8
	.4byte .L_80376458
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_80376474
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_80376438
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_803764C8
	.4byte .L_80376438
	.4byte .L_803764C8
	.4byte .L_80376438
	.4byte .L_803764C8
	.4byte .L_80376438
	.4byte .L_80376438
.endobj lbl_804E3C20
.obj __vt__Q28Morimura12TZukanWindow, global
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura12TZukanWindowFPCcUl
	.4byte update__Q28Morimura12TZukanWindowFv
	.4byte draw__Q28Morimura12TZukanWindowFR8GraphicsP13J2DPerspGraph
.endobj __vt__Q28Morimura12TZukanWindow
.obj __vt__Q28Morimura18TCallbackScrollMsg, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura18TCallbackScrollMsgFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q28Morimura18TCallbackScrollMsgFv
	.4byte draw__Q28Morimura18TCallbackScrollMsgFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q28Morimura18TCallbackScrollMsgFv
.endobj __vt__Q28Morimura18TCallbackScrollMsg
.obj __vt__Q28Morimura11TDItemScene, global
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura11TDItemSceneFv
	.4byte getOwnerID__Q28Morimura11TDItemSceneFv
	.4byte getMemberID__Q28Morimura11TDItemSceneFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura11TDItemSceneCFv
	.4byte doCreateObj__Q28Morimura11TDItemSceneFP10JKRArchive
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura11TDItemSceneFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.endobj __vt__Q28Morimura11TDItemScene
.obj __vt__Q25efx2d14T2DChangesmoke, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TSimple1Fv
	.4byte fade__Q25efx2d8TSimple1Fv
	.4byte setGroup__Q25efx2d5TBaseFUc
.endobj __vt__Q25efx2d14T2DChangesmoke
.obj __vt__Q28Morimura10TItemZukan, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura10TItemZukanFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura10TItemZukanFv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura10TItemZukanFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura10TZukanBaseFv
	.4byte doUpdate__Q28Morimura10TItemZukanFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura10TZukanBaseFv
	.4byte doUpdateFadeoutFinish__Q28Morimura10TZukanBaseFv
	.4byte doDraw__Q28Morimura10TZukanBaseFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura10TItemZukanFv
	.4byte isListShow__Q28Morimura10TItemZukanFi
	.4byte paneInit__Q28Morimura10TZukanBaseFv
	.4byte changePaneInfo__Q28Morimura10TZukanBaseFv
	.4byte getIdMax__Q28Morimura10TItemZukanFv
	.4byte getNameID__Q28Morimura10TItemZukanFi
	.4byte getUpdateIndex__Q28Morimura10TItemZukanFRib
	.4byte setShortenIndex__Q28Morimura10TItemZukanFiib
	.4byte doUpdateIn__Q28Morimura10TZukanBaseFv
	.4byte doUpdateOut__Q28Morimura10TItemZukanFv
	.4byte changeTextTevBlock__Q28Morimura11TScrollListFi
	.4byte updateIndex__Q28Morimura11TScrollListFb
	.4byte setPaneCharacter__Q28Morimura11TScrollListFi
	.4byte doDemoDraw__Q28Morimura10TItemZukanFR8Graphics
	.4byte getCategoryColorId__Q28Morimura10TItemZukanFi
	.4byte getDispDataZukan__Q28Morimura10TItemZukanFv
	.4byte indexPaneInit__Q28Morimura10TZukanBaseFP9J2DScreen
	.4byte isComplete__Q28Morimura10TItemZukanFv
	.4byte setXWindow__Q28Morimura10TItemZukanFv
	.4byte setYWindow__Q28Morimura10TItemZukanFv
	.4byte getXMsgID__Q28Morimura10TItemZukanFi
	.4byte getYMsgID__Q28Morimura10TItemZukanFi
	.4byte setDetail__Q28Morimura10TItemZukanFv
	.4byte getModelIndex__Q28Morimura10TItemZukanFi
	.4byte updateButtonAlpha__Q28Morimura10TZukanBaseFUc
	.4byte isOpenConfirmWindow__Q28Morimura10TItemZukanFv
	.4byte openConfirmWindow__Q28Morimura10TItemZukanFv
	.4byte isNewSupply__Q28Morimura10TItemZukanFib
	.4byte isPanelExist__Q28Morimura10TItemZukanFv
.endobj __vt__Q28Morimura10TItemZukan
.obj __vt__Q28Morimura12TDEnemyScene, global
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q28Morimura12TDEnemySceneFv
	.4byte getOwnerID__Q28Morimura12TDEnemySceneFv
	.4byte getMemberID__Q28Morimura12TDEnemySceneFv
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q28Morimura12TDEnemySceneCFv
	.4byte doCreateObj__Q28Morimura12TDEnemySceneFP10JKRArchive
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura12TDEnemySceneFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.endobj __vt__Q28Morimura12TDEnemyScene
.obj __vt__Q28Morimura9THIOScene, weak
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte 0
	.4byte 0
	.4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q26Screen9SceneBaseFv
	.4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q26Screen9SceneBaseFv
.endobj __vt__Q28Morimura9THIOScene
.obj __vt__Q28Morimura11TEnemyZukan, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura11TEnemyZukanFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura11TEnemyZukanFv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura11TEnemyZukanFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura10TZukanBaseFv
	.4byte doUpdate__Q28Morimura10TZukanBaseFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura10TZukanBaseFv
	.4byte doUpdateFadeoutFinish__Q28Morimura10TZukanBaseFv
	.4byte doDraw__Q28Morimura10TZukanBaseFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura11TEnemyZukanFv
	.4byte isListShow__Q28Morimura11TEnemyZukanFi
	.4byte paneInit__Q28Morimura10TZukanBaseFv
	.4byte changePaneInfo__Q28Morimura10TZukanBaseFv
	.4byte getIdMax__Q28Morimura11TEnemyZukanFv
	.4byte getNameID__Q28Morimura11TEnemyZukanFi
	.4byte getUpdateIndex__Q28Morimura11TEnemyZukanFRib
	.4byte setShortenIndex__Q28Morimura11TEnemyZukanFiib
	.4byte doUpdateIn__Q28Morimura10TZukanBaseFv
	.4byte doUpdateOut__Q28Morimura10TZukanBaseFv
	.4byte changeTextTevBlock__Q28Morimura11TScrollListFi
	.4byte updateIndex__Q28Morimura11TScrollListFb
	.4byte setPaneCharacter__Q28Morimura11TScrollListFi
	.4byte doDemoDraw__Q28Morimura10TZukanBaseFR8Graphics
	.4byte getCategoryColorId__Q28Morimura10TZukanBaseFi
	.4byte getDispDataZukan__Q28Morimura11TEnemyZukanFv
	.4byte indexPaneInit__Q28Morimura11TEnemyZukanFP9J2DScreen
	.4byte isComplete__Q28Morimura10TZukanBaseFv
	.4byte setXWindow__Q28Morimura11TEnemyZukanFv
	.4byte setYWindow__Q28Morimura11TEnemyZukanFv
	.4byte getXMsgID__Q28Morimura11TEnemyZukanFi
	.4byte getYMsgID__Q28Morimura11TEnemyZukanFi
	.4byte setDetail__Q28Morimura11TEnemyZukanFv
	.4byte getModelIndex__Q28Morimura11TEnemyZukanFi
	.4byte updateButtonAlpha__Q28Morimura10TZukanBaseFUc
	.4byte isOpenConfirmWindow__Q28Morimura11TEnemyZukanFv
	.4byte openConfirmWindow__Q28Morimura11TEnemyZukanFv
	.4byte isNewSupply__Q28Morimura11TEnemyZukanFib
	.4byte isPanelExist__Q28Morimura11TEnemyZukanFv
.endobj __vt__Q28Morimura11TEnemyZukan
.obj __vt__Q28Morimura10TZukanBase, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura10TZukanBaseFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura10TZukanBaseFv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura10TZukanBaseFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura10TZukanBaseFv
	.4byte doUpdate__Q28Morimura10TZukanBaseFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura10TZukanBaseFv
	.4byte doUpdateFadeoutFinish__Q28Morimura10TZukanBaseFv
	.4byte doDraw__Q28Morimura10TZukanBaseFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte 0
	.4byte isListShow__Q28Morimura11TScrollListFi
	.4byte paneInit__Q28Morimura10TZukanBaseFv
	.4byte changePaneInfo__Q28Morimura10TZukanBaseFv
	.4byte 0
	.4byte 0
	.4byte getUpdateIndex__Q28Morimura11TScrollListFRib
	.4byte setShortenIndex__Q28Morimura10TZukanBaseFiib
	.4byte doUpdateIn__Q28Morimura10TZukanBaseFv
	.4byte doUpdateOut__Q28Morimura10TZukanBaseFv
	.4byte changeTextTevBlock__Q28Morimura11TScrollListFi
	.4byte updateIndex__Q28Morimura11TScrollListFb
	.4byte setPaneCharacter__Q28Morimura11TScrollListFi
	.4byte doDemoDraw__Q28Morimura10TZukanBaseFR8Graphics
	.4byte getCategoryColorId__Q28Morimura10TZukanBaseFi
	.4byte 0
	.4byte indexPaneInit__Q28Morimura10TZukanBaseFP9J2DScreen
	.4byte isComplete__Q28Morimura10TZukanBaseFv
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte updateButtonAlpha__Q28Morimura10TZukanBaseFUc
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte isPanelExist__Q28Morimura10TZukanBaseFv
.endobj __vt__Q28Morimura10TZukanBase

.section .bss  # 0x804EFC20 - 0x8051467C
# zukan2D.cpp
.comm mScrollParm__Q28Morimura10TZukanBase, 0x14, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj mRequestTimerMax__Q28Morimura10TZukanBase, global
	.2byte 0xA
.endobj mRequestTimerMax__Q28Morimura10TZukanBase
.obj mIconMove__Q28Morimura10TZukanBase, global
	.byte 0x1
.endobj mIconMove__Q28Morimura10TZukanBase
.balign 4
.obj mLineSpace__Q28Morimura10TZukanBase, global
	.float 48.0
.endobj mLineSpace__Q28Morimura10TZukanBase
.obj mWarpRadius__Q28Morimura10TZukanBase, global
	.float 15.0
.endobj mWarpRadius__Q28Morimura10TZukanBase
.obj mScrollValueCoe__Q28Morimura10TZukanBase, global
	.float 3.5
.endobj mScrollValueCoe__Q28Morimura10TZukanBase
.obj mScrollSpeedCoe__Q28Morimura10TZukanBase, global
	.float 0.08
.endobj mScrollSpeedCoe__Q28Morimura10TZukanBase
.obj mNewScale__Q28Morimura10TZukanBase, global
	.float 0.7
.endobj mNewScale__Q28Morimura10TZukanBase
.obj mPodIconOffsetX__Q28Morimura10TZukanBase, global
	.float 480.0
.endobj mPodIconOffsetX__Q28Morimura10TZukanBase
.obj mLargeCategoryScale__Q28Morimura10TZukanBase, global
	.float 2.0
.endobj mLargeCategoryScale__Q28Morimura10TZukanBase
.obj mCategoryAlphaRate__Q28Morimura10TZukanBase, global
	.float 0.6
.endobj mCategoryAlphaRate__Q28Morimura10TZukanBase
.obj mDrawLineType__Q28Morimura10TZukanBase, global
	.byte 0x2
.endobj mDrawLineType__Q28Morimura10TZukanBase

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj mShowAllObjects__Q28Morimura10TZukanBase, global
	.skip 0x1
.endobj mShowAllObjects__Q28Morimura10TZukanBase
.obj mAllNewSupply__Q28Morimura10TZukanBase, global
	.skip 0x1
.endobj mAllNewSupply__Q28Morimura10TZukanBase
.obj mZukanShortenTest__Q28Morimura10TZukanBase, global
	.skip 0x1
.endobj mZukanShortenTest__Q28Morimura10TZukanBase
.obj mZukanCategoryTest__Q28Morimura10TZukanBase, global
	.skip 0x1
.endobj mZukanCategoryTest__Q28Morimura10TZukanBase
.balign 4
.obj mRandShowRate__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mRandShowRate__Q28Morimura10TZukanBase
.obj mNewOffset__Q28Morimura10TZukanBase, global
	.skip 0x8
.endobj mNewOffset__Q28Morimura10TZukanBase
.obj mLargeNewOffset__Q28Morimura10TZukanBase, global
	.skip 0x8
.endobj mLargeNewOffset__Q28Morimura10TZukanBase
.obj mNewColor0__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mNewColor0__Q28Morimura10TZukanBase
.obj mNewColor1__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mNewColor1__Q28Morimura10TZukanBase
.obj mCategoryScale__Q28Morimura10TZukanBase, global
	.skip 0x8
.endobj mCategoryScale__Q28Morimura10TZukanBase
.obj mCategoryColor0w__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mCategoryColor0w__Q28Morimura10TZukanBase
.obj mCategoryColor0b__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mCategoryColor0b__Q28Morimura10TZukanBase
.obj mCategoryColor1w__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mCategoryColor1w__Q28Morimura10TZukanBase
.obj mCategoryColor1b__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mCategoryColor1b__Q28Morimura10TZukanBase
.obj mDebugHeapParent__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mDebugHeapParent__Q28Morimura10TZukanBase
.obj mDebugHeap__Q28Morimura10TZukanBase, global
	.skip 0x4
.endobj mDebugHeap__Q28Morimura10TZukanBase

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051EB20, local
	.float 0.0
.endobj lbl_8051EB20
.obj lbl_8051EB24, local
	.float 1.0
.endobj lbl_8051EB24
.obj lbl_8051EB28, local
	.float 0.02
.endobj lbl_8051EB28
.obj lbl_8051EB2C, local
	.float 0.5
.endobj lbl_8051EB2C
.obj lbl_8051EB30, local
	.float 0.25
.endobj lbl_8051EB30
.obj lbl_8051EB34, local
	.float -300.0
.endobj lbl_8051EB34
.obj lbl_8051EB38, local
	.float 0.1
.endobj lbl_8051EB38
.obj lbl_8051EB3C, local
	.float 0.7
.endobj lbl_8051EB3C
.obj lbl_8051EB40, local
	.float 0.3
.endobj lbl_8051EB40
.obj lbl_8051EB44, local
	.float 5.0
.endobj lbl_8051EB44
.obj lbl_8051EB48, local
	.float 2.5
.endobj lbl_8051EB48
.obj lbl_8051EB4C, local
	.float 2.0
.endobj lbl_8051EB4C
.obj lbl_8051EB50, local
	.float 1.2
.endobj lbl_8051EB50
.obj lbl_8051EB54, local
	.float 0.2
.endobj lbl_8051EB54
.obj lbl_8051EB58, local
	.float 25.0
.endobj lbl_8051EB58
.obj lbl_8051EB5C, local
	.float 0.9
.endobj lbl_8051EB5C
.obj lbl_8051EB60, local
	.float 3.0
.endobj lbl_8051EB60
.obj lbl_8051EB64, local
	.float -0.5
.endobj lbl_8051EB64
.obj lbl_8051EB68, local
	.float -1.0
.endobj lbl_8051EB68
.obj lbl_8051EB6C, local
	.float 0.35
.endobj lbl_8051EB6C
.obj lbl_8051EB70, local
	.float 255.0
.endobj lbl_8051EB70
.obj lbl_8051EB74, local
	.float 0.6
.endobj lbl_8051EB74
.obj lbl_8051EB78, local
	.float 0.05
.endobj lbl_8051EB78
.balign 8
.obj lbl_8051EB80, local
	.8byte 0x4330000080000000
.endobj lbl_8051EB80
.obj lbl_8051EB88, local
	.float 120.0
.endobj lbl_8051EB88
.balign 8
.obj lbl_8051EB90, local
	.8byte 0x4330000000000000
.endobj lbl_8051EB90
.obj lbl_8051EB98, local
	.float 10.0
.endobj lbl_8051EB98
.obj lbl_8051EB9C, local
	.float 20.0
.endobj lbl_8051EB9C
.obj lbl_8051EBA0, local # tau
	.float 6.2831855
.endobj lbl_8051EBA0
.obj lbl_8051EBA4, local
	.float 0.85
.endobj lbl_8051EBA4
.obj lbl_8051EBA8, local
	.float -325.9493
.endobj lbl_8051EBA8
.obj lbl_8051EBAC, local
	.float 325.9493
.endobj lbl_8051EBAC
.obj lbl_8051EBB0, local
	.float 62.0
.endobj lbl_8051EBB0
.obj lbl_8051EBB4, local
	.float 32768.0
.endobj lbl_8051EBB4
.obj lbl_8051EBB8, local
	.float 1.1
.endobj lbl_8051EBB8
.obj lbl_8051EBBC, local
	.float 0.99
.endobj lbl_8051EBBC
.obj lbl_8051EBC0, local
	.float 1.5
.endobj lbl_8051EBC0
.obj lbl_8051EBC4, local
	.float 50.0
.endobj lbl_8051EBC4
.obj lbl_8051EBC8, local
	.float 1000.0
.endobj lbl_8051EBC8
.obj lbl_8051EBCC, local
	.float 100000.0
.endobj lbl_8051EBCC
.obj lbl_8051EBD0, local
	.float 30.0
.endobj lbl_8051EBD0
.obj lbl_8051EBD4, local
	.float 1.25
.endobj lbl_8051EBD4
.obj lbl_8051EBD8, local
	.float 150.0
.endobj lbl_8051EBD8
.obj lbl_8051EBDC, local
	.float 8.0
.endobj lbl_8051EBDC
.obj lbl_8051EBE0, local
	.float 48.0
.endobj lbl_8051EBE0
.obj lbl_8051EBE4, local
	.float 15.0
.endobj lbl_8051EBE4
.obj lbl_8051EBE8, local
	.float 640.0
.endobj lbl_8051EBE8
.obj lbl_8051EBEC, local
	.float 480.0
.endobj lbl_8051EBEC
.obj lbl_8051EBF0, local
	.float 12.0
.endobj lbl_8051EBF0
.obj lbl_8051EBF4, local
	.float 100.0
.endobj lbl_8051EBF4
.obj lbl_8051EBF8, local
	.float 86.0
.endobj lbl_8051EBF8
.obj lbl_8051EBFC, local
	.float 13.0
.endobj lbl_8051EBFC
.obj lbl_8051EC00, local
	.float 0.15
.endobj lbl_8051EC00
.obj lbl_8051EC04, local
	.float -12.5
.endobj lbl_8051EC04
.obj lbl_8051EC08, local
	.float -30.0
.endobj lbl_8051EC08
.obj lbl_8051EC0C, local
	.float 1.3
.endobj lbl_8051EC0C
.obj lbl_8051EC10, local
	.float 1.15
.endobj lbl_8051EC10

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q28Morimura10TZukanBaseFPc, global
/* 80370C08 0036DB48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80370C0C 0036DB4C  7C 08 02 A6 */	mflr r0
/* 80370C10 0036DB50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80370C14 0036DB54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80370C18 0036DB58  7C 7F 1B 78 */	mr r31, r3
/* 80370C1C 0036DB5C  48 03 20 9D */	bl __ct__Q28Morimura11TScrollListFPc
/* 80370C20 0036DB60  3C 80 80 4E */	lis r4, __vt__Q28Morimura10TZukanBase@ha
/* 80370C24 0036DB64  38 00 00 00 */	li r0, 0
/* 80370C28 0036DB68  38 84 40 54 */	addi r4, r4, __vt__Q28Morimura10TZukanBase@l
/* 80370C2C 0036DB6C  3C 60 80 05 */	lis r3, __ct__13J2DGXColorS10Fv@ha
/* 80370C30 0036DB70  90 9F 00 00 */	stw r4, 0(r31)
/* 80370C34 0036DB74  38 A4 00 10 */	addi r5, r4, 0x10
/* 80370C38 0036DB78  38 83 A2 C0 */	addi r4, r3, __ct__13J2DGXColorS10Fv@l
/* 80370C3C 0036DB7C  38 7F 01 B0 */	addi r3, r31, 0x1b0
/* 80370C40 0036DB80  90 BF 00 18 */	stw r5, 0x18(r31)
/* 80370C44 0036DB84  38 A0 00 00 */	li r5, 0
/* 80370C48 0036DB88  38 C0 00 08 */	li r6, 8
/* 80370C4C 0036DB8C  38 E0 00 02 */	li r7, 2
/* 80370C50 0036DB90  90 1F 00 B4 */	stw r0, 0xb4(r31)
/* 80370C54 0036DB94  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 80370C58 0036DB98  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 80370C5C 0036DB9C  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 80370C60 0036DBA0  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 80370C64 0036DBA4  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 80370C68 0036DBA8  90 1F 00 CC */	stw r0, 0xcc(r31)
/* 80370C6C 0036DBAC  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 80370C70 0036DBB0  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 80370C74 0036DBB4  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 80370C78 0036DBB8  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 80370C7C 0036DBBC  90 1F 00 E0 */	stw r0, 0xe0(r31)
/* 80370C80 0036DBC0  90 1F 00 E4 */	stw r0, 0xe4(r31)
/* 80370C84 0036DBC4  90 1F 00 E8 */	stw r0, 0xe8(r31)
/* 80370C88 0036DBC8  90 1F 00 EC */	stw r0, 0xec(r31)
/* 80370C8C 0036DBCC  90 1F 00 F0 */	stw r0, 0xf0(r31)
/* 80370C90 0036DBD0  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 80370C94 0036DBD4  90 1F 00 F8 */	stw r0, 0xf8(r31)
/* 80370C98 0036DBD8  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 80370C9C 0036DBDC  90 1F 01 00 */	stw r0, 0x100(r31)
/* 80370CA0 0036DBE0  90 1F 01 04 */	stw r0, 0x104(r31)
/* 80370CA4 0036DBE4  90 1F 01 08 */	stw r0, 0x108(r31)
/* 80370CA8 0036DBE8  90 1F 01 0C */	stw r0, 0x10c(r31)
/* 80370CAC 0036DBEC  90 1F 01 10 */	stw r0, 0x110(r31)
/* 80370CB0 0036DBF0  90 1F 01 14 */	stw r0, 0x114(r31)
/* 80370CB4 0036DBF4  90 1F 01 18 */	stw r0, 0x118(r31)
/* 80370CB8 0036DBF8  90 1F 01 1C */	stw r0, 0x11c(r31)
/* 80370CBC 0036DBFC  90 1F 01 20 */	stw r0, 0x120(r31)
/* 80370CC0 0036DC00  90 1F 01 24 */	stw r0, 0x124(r31)
/* 80370CC4 0036DC04  90 1F 01 28 */	stw r0, 0x128(r31)
/* 80370CC8 0036DC08  90 1F 01 2C */	stw r0, 0x12c(r31)
/* 80370CCC 0036DC0C  90 1F 01 30 */	stw r0, 0x130(r31)
/* 80370CD0 0036DC10  98 1F 01 7C */	stb r0, 0x17c(r31)
/* 80370CD4 0036DC14  90 1F 01 80 */	stw r0, 0x180(r31)
/* 80370CD8 0036DC18  90 1F 01 84 */	stw r0, 0x184(r31)
/* 80370CDC 0036DC1C  90 1F 01 88 */	stw r0, 0x188(r31)
/* 80370CE0 0036DC20  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 80370CE4 0036DC24  90 1F 01 90 */	stw r0, 0x190(r31)
/* 80370CE8 0036DC28  90 1F 01 94 */	stw r0, 0x194(r31)
/* 80370CEC 0036DC2C  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80370CF0 0036DC30  90 1F 01 9C */	stw r0, 0x19c(r31)
/* 80370CF4 0036DC34  4B D5 0B 49 */	bl __construct_array
/* 80370CF8 0036DC38  3C 80 80 05 */	lis r4, __ct__13J2DGXColorS10Fv@ha
/* 80370CFC 0036DC3C  38 7F 01 C0 */	addi r3, r31, 0x1c0
/* 80370D00 0036DC40  38 84 A2 C0 */	addi r4, r4, __ct__13J2DGXColorS10Fv@l
/* 80370D04 0036DC44  38 A0 00 00 */	li r5, 0
/* 80370D08 0036DC48  38 C0 00 08 */	li r6, 8
/* 80370D0C 0036DC4C  38 E0 00 02 */	li r7, 2
/* 80370D10 0036DC50  4B D5 0B 2D */	bl __construct_array
/* 80370D14 0036DC54  3C 80 80 05 */	lis r4, __ct__13J2DGXColorS10Fv@ha
/* 80370D18 0036DC58  38 7F 01 D0 */	addi r3, r31, 0x1d0
/* 80370D1C 0036DC5C  38 84 A2 C0 */	addi r4, r4, __ct__13J2DGXColorS10Fv@l
/* 80370D20 0036DC60  38 A0 00 00 */	li r5, 0
/* 80370D24 0036DC64  38 C0 00 08 */	li r6, 8
/* 80370D28 0036DC68  38 E0 00 02 */	li r7, 2
/* 80370D2C 0036DC6C  4B D5 0B 11 */	bl __construct_array
/* 80370D30 0036DC70  38 E0 00 00 */	li r7, 0
/* 80370D34 0036DC74  C0 82 07 C0 */	lfs f4, lbl_8051EB20@sda21(r2)
/* 80370D38 0036DC78  90 FF 01 E0 */	stw r7, 0x1e0(r31)
/* 80370D3C 0036DC7C  38 C0 00 01 */	li r6, 1
/* 80370D40 0036DC80  C0 62 07 C4 */	lfs f3, lbl_8051EB24@sda21(r2)
/* 80370D44 0036DC84  38 A0 FF FF */	li r5, -1
/* 80370D48 0036DC88  90 FF 01 E4 */	stw r7, 0x1e4(r31)
/* 80370D4C 0036DC8C  38 80 00 0A */	li r4, 0xa
/* 80370D50 0036DC90  C0 42 07 C8 */	lfs f2, lbl_8051EB28@sda21(r2)
/* 80370D54 0036DC94  38 00 00 03 */	li r0, 3
/* 80370D58 0036DC98  90 FF 01 E8 */	stw r7, 0x1e8(r31)
/* 80370D5C 0036DC9C  7F E3 FB 78 */	mr r3, r31
/* 80370D60 0036DCA0  C0 22 07 CC */	lfs f1, lbl_8051EB2C@sda21(r2)
/* 80370D64 0036DCA4  90 FF 01 EC */	stw r7, 0x1ec(r31)
/* 80370D68 0036DCA8  C0 02 07 D0 */	lfs f0, lbl_8051EB30@sda21(r2)
/* 80370D6C 0036DCAC  D0 9F 01 F0 */	stfs f4, 0x1f0(r31)
/* 80370D70 0036DCB0  D0 9F 01 F4 */	stfs f4, 0x1f4(r31)
/* 80370D74 0036DCB4  D0 9F 01 F8 */	stfs f4, 0x1f8(r31)
/* 80370D78 0036DCB8  D0 7F 01 FC */	stfs f3, 0x1fc(r31)
/* 80370D7C 0036DCBC  D0 7F 02 00 */	stfs f3, 0x200(r31)
/* 80370D80 0036DCC0  D0 9F 02 04 */	stfs f4, 0x204(r31)
/* 80370D84 0036DCC4  D0 5F 02 08 */	stfs f2, 0x208(r31)
/* 80370D88 0036DCC8  D0 3F 02 0C */	stfs f1, 0x20c(r31)
/* 80370D8C 0036DCCC  D0 9F 02 10 */	stfs f4, 0x210(r31)
/* 80370D90 0036DCD0  98 FF 02 14 */	stb r7, 0x214(r31)
/* 80370D94 0036DCD4  98 FF 02 15 */	stb r7, 0x215(r31)
/* 80370D98 0036DCD8  98 FF 02 16 */	stb r7, 0x216(r31)
/* 80370D9C 0036DCDC  98 FF 02 17 */	stb r7, 0x217(r31)
/* 80370DA0 0036DCE0  98 FF 02 18 */	stb r7, 0x218(r31)
/* 80370DA4 0036DCE4  98 DF 02 19 */	stb r6, 0x219(r31)
/* 80370DA8 0036DCE8  98 FF 02 1A */	stb r7, 0x21a(r31)
/* 80370DAC 0036DCEC  98 FF 02 1B */	stb r7, 0x21b(r31)
/* 80370DB0 0036DCF0  98 DF 02 1C */	stb r6, 0x21c(r31)
/* 80370DB4 0036DCF4  90 FF 02 2C */	stw r7, 0x22c(r31)
/* 80370DB8 0036DCF8  90 FF 02 30 */	stw r7, 0x230(r31)
/* 80370DBC 0036DCFC  90 BF 02 34 */	stw r5, 0x234(r31)
/* 80370DC0 0036DD00  90 FF 02 38 */	stw r7, 0x238(r31)
/* 80370DC4 0036DD04  90 FF 02 3C */	stw r7, 0x23c(r31)
/* 80370DC8 0036DD08  98 DF 02 40 */	stb r6, 0x240(r31)
/* 80370DCC 0036DD0C  98 FF 02 41 */	stb r7, 0x241(r31)
/* 80370DD0 0036DD10  98 DF 02 42 */	stb r6, 0x242(r31)
/* 80370DD4 0036DD14  98 FF 02 43 */	stb r7, 0x243(r31)
/* 80370DD8 0036DD18  98 FF 02 44 */	stb r7, 0x244(r31)
/* 80370DDC 0036DD1C  B0 9F 00 8E */	sth r4, 0x8e(r31)
/* 80370DE0 0036DD20  90 1F 00 9C */	stw r0, 0x9c(r31)
/* 80370DE4 0036DD24  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80370DE8 0036DD28  90 FF 01 34 */	stw r7, 0x134(r31)
/* 80370DEC 0036DD2C  90 FF 01 38 */	stw r7, 0x138(r31)
/* 80370DF0 0036DD30  90 FF 01 3C */	stw r7, 0x13c(r31)
/* 80370DF4 0036DD34  90 FF 01 40 */	stw r7, 0x140(r31)
/* 80370DF8 0036DD38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80370DFC 0036DD3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80370E00 0036DD40  7C 08 03 A6 */	mtlr r0
/* 80370E04 0036DD44  38 21 00 10 */	addi r1, r1, 0x10
/* 80370E08 0036DD48  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura10TZukanBaseFPc

.fn __dt__Q28Morimura11TScrollListFv, weak
/* 80370E0C 0036DD4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80370E10 0036DD50  7C 08 02 A6 */	mflr r0
/* 80370E14 0036DD54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80370E18 0036DD58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80370E1C 0036DD5C  7C 9F 23 78 */	mr r31, r4
/* 80370E20 0036DD60  93 C1 00 08 */	stw r30, 8(r1)
/* 80370E24 0036DD64  7C 7E 1B 79 */	or. r30, r3, r3
/* 80370E28 0036DD68  41 82 00 8C */	beq .L_80370EB4
/* 80370E2C 0036DD6C  3C 80 80 4E */	lis r4, __vt__Q28Morimura11TScrollList@ha
/* 80370E30 0036DD70  38 84 58 C0 */	addi r4, r4, __vt__Q28Morimura11TScrollList@l
/* 80370E34 0036DD74  90 9E 00 00 */	stw r4, 0(r30)
/* 80370E38 0036DD78  38 04 00 10 */	addi r0, r4, 0x10
/* 80370E3C 0036DD7C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370E40 0036DD80  41 82 00 64 */	beq .L_80370EA4
/* 80370E44 0036DD84  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 80370E48 0036DD88  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 80370E4C 0036DD8C  90 9E 00 00 */	stw r4, 0(r30)
/* 80370E50 0036DD90  38 04 00 10 */	addi r0, r4, 0x10
/* 80370E54 0036DD94  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370E58 0036DD98  41 82 00 4C */	beq .L_80370EA4
/* 80370E5C 0036DD9C  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 80370E60 0036DDA0  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80370E64 0036DDA4  90 9E 00 00 */	stw r4, 0(r30)
/* 80370E68 0036DDA8  38 04 00 10 */	addi r0, r4, 0x10
/* 80370E6C 0036DDAC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370E70 0036DDB0  41 82 00 34 */	beq .L_80370EA4
/* 80370E74 0036DDB4  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80370E78 0036DDB8  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80370E7C 0036DDBC  90 9E 00 00 */	stw r4, 0(r30)
/* 80370E80 0036DDC0  38 04 00 10 */	addi r0, r4, 0x10
/* 80370E84 0036DDC4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370E88 0036DDC8  48 0A 07 49 */	bl del__5CNodeFv
/* 80370E8C 0036DDCC  38 7E 00 18 */	addi r3, r30, 0x18
/* 80370E90 0036DDD0  38 80 00 00 */	li r4, 0
/* 80370E94 0036DDD4  4B CA C1 A1 */	bl __dt__11JKRDisposerFv
/* 80370E98 0036DDD8  7F C3 F3 78 */	mr r3, r30
/* 80370E9C 0036DDDC  38 80 00 00 */	li r4, 0
/* 80370EA0 0036DDE0  48 0A 06 E9 */	bl __dt__5CNodeFv
.L_80370EA4:
/* 80370EA4 0036DDE4  7F E0 07 35 */	extsh. r0, r31
/* 80370EA8 0036DDE8  40 81 00 0C */	ble .L_80370EB4
/* 80370EAC 0036DDEC  7F C3 F3 78 */	mr r3, r30
/* 80370EB0 0036DDF0  4B CB 32 05 */	bl __dl__FPv
.L_80370EB4:
/* 80370EB4 0036DDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80370EB8 0036DDF8  7F C3 F3 78 */	mr r3, r30
/* 80370EBC 0036DDFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80370EC0 0036DE00  83 C1 00 08 */	lwz r30, 8(r1)
/* 80370EC4 0036DE04  7C 08 03 A6 */	mtlr r0
/* 80370EC8 0036DE08  38 21 00 10 */	addi r1, r1, 0x10
/* 80370ECC 0036DE0C  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura11TScrollListFv

.fn __dt__Q28Morimura10TZukanBaseFv, global
/* 80370ED0 0036DE10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80370ED4 0036DE14  7C 08 02 A6 */	mflr r0
/* 80370ED8 0036DE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80370EDC 0036DE1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80370EE0 0036DE20  7C 9F 23 78 */	mr r31, r4
/* 80370EE4 0036DE24  93 C1 00 08 */	stw r30, 8(r1)
/* 80370EE8 0036DE28  7C 7E 1B 79 */	or. r30, r3, r3
/* 80370EEC 0036DE2C  41 82 00 C4 */	beq .L_80370FB0
/* 80370EF0 0036DE30  3C 60 80 4E */	lis r3, __vt__Q28Morimura10TZukanBase@ha
/* 80370EF4 0036DE34  38 63 40 54 */	addi r3, r3, __vt__Q28Morimura10TZukanBase@l
/* 80370EF8 0036DE38  90 7E 00 00 */	stw r3, 0(r30)
/* 80370EFC 0036DE3C  38 03 00 10 */	addi r0, r3, 0x10
/* 80370F00 0036DE40  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370F04 0036DE44  80 6D 99 34 */	lwz r3, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80370F08 0036DE48  28 03 00 00 */	cmplwi r3, 0
/* 80370F0C 0036DE4C  41 82 00 08 */	beq .L_80370F14
/* 80370F10 0036DE50  4B CB 26 A5 */	bl destroy__7JKRHeapFv
.L_80370F14:
/* 80370F14 0036DE54  38 00 00 00 */	li r0, 0
/* 80370F18 0036DE58  28 1E 00 00 */	cmplwi r30, 0
/* 80370F1C 0036DE5C  90 0D 99 34 */	stw r0, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80370F20 0036DE60  41 82 00 80 */	beq .L_80370FA0
/* 80370F24 0036DE64  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TScrollList@ha
/* 80370F28 0036DE68  38 63 58 C0 */	addi r3, r3, __vt__Q28Morimura11TScrollList@l
/* 80370F2C 0036DE6C  90 7E 00 00 */	stw r3, 0(r30)
/* 80370F30 0036DE70  38 03 00 10 */	addi r0, r3, 0x10
/* 80370F34 0036DE74  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370F38 0036DE78  41 82 00 68 */	beq .L_80370FA0
/* 80370F3C 0036DE7C  3C 60 80 4E */	lis r3, __vt__Q28Morimura9TTestBase@ha
/* 80370F40 0036DE80  38 63 B8 F8 */	addi r3, r3, __vt__Q28Morimura9TTestBase@l
/* 80370F44 0036DE84  90 7E 00 00 */	stw r3, 0(r30)
/* 80370F48 0036DE88  38 03 00 10 */	addi r0, r3, 0x10
/* 80370F4C 0036DE8C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370F50 0036DE90  41 82 00 50 */	beq .L_80370FA0
/* 80370F54 0036DE94  3C 60 80 4F */	lis r3, __vt__Q26Screen7ObjBase@ha
/* 80370F58 0036DE98  38 63 D7 58 */	addi r3, r3, __vt__Q26Screen7ObjBase@l
/* 80370F5C 0036DE9C  90 7E 00 00 */	stw r3, 0(r30)
/* 80370F60 0036DEA0  38 03 00 10 */	addi r0, r3, 0x10
/* 80370F64 0036DEA4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370F68 0036DEA8  41 82 00 38 */	beq .L_80370FA0
/* 80370F6C 0036DEAC  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80370F70 0036DEB0  7F C3 F3 78 */	mr r3, r30
/* 80370F74 0036DEB4  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80370F78 0036DEB8  90 9E 00 00 */	stw r4, 0(r30)
/* 80370F7C 0036DEBC  38 04 00 10 */	addi r0, r4, 0x10
/* 80370F80 0036DEC0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80370F84 0036DEC4  48 0A 06 4D */	bl del__5CNodeFv
/* 80370F88 0036DEC8  38 7E 00 18 */	addi r3, r30, 0x18
/* 80370F8C 0036DECC  38 80 00 00 */	li r4, 0
/* 80370F90 0036DED0  4B CA C0 A5 */	bl __dt__11JKRDisposerFv
/* 80370F94 0036DED4  7F C3 F3 78 */	mr r3, r30
/* 80370F98 0036DED8  38 80 00 00 */	li r4, 0
/* 80370F9C 0036DEDC  48 0A 05 ED */	bl __dt__5CNodeFv
.L_80370FA0:
/* 80370FA0 0036DEE0  7F E0 07 35 */	extsh. r0, r31
/* 80370FA4 0036DEE4  40 81 00 0C */	ble .L_80370FB0
/* 80370FA8 0036DEE8  7F C3 F3 78 */	mr r3, r30
/* 80370FAC 0036DEEC  4B CB 31 09 */	bl __dl__FPv
.L_80370FB0:
/* 80370FB0 0036DEF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80370FB4 0036DEF4  7F C3 F3 78 */	mr r3, r30
/* 80370FB8 0036DEF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80370FBC 0036DEFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80370FC0 0036DF00  7C 08 03 A6 */	mtlr r0
/* 80370FC4 0036DF04  38 21 00 10 */	addi r1, r1, 0x10
/* 80370FC8 0036DF08  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura10TZukanBaseFv

.fn doCreate__Q28Morimura10TZukanBaseFP10JKRArchive, global
/* 80370FCC 0036DF0C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80370FD0 0036DF10  7C 08 02 A6 */	mflr r0
/* 80370FD4 0036DF14  90 01 00 44 */	stw r0, 0x44(r1)
/* 80370FD8 0036DF18  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80370FDC 0036DF1C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80370FE0 0036DF20  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80370FE4 0036DF24  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80370FE8 0036DF28  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80370FEC 0036DF2C  3C 80 80 49 */	lis r4, lbl_80492520@ha
/* 80370FF0 0036DF30  7C 7E 1B 78 */	mr r30, r3
/* 80370FF4 0036DF34  3B E4 25 20 */	addi r31, r4, lbl_80492520@l
/* 80370FF8 0036DF38  38 60 01 48 */	li r3, 0x148
/* 80370FFC 0036DF3C  4B CB 2E A9 */	bl __nw__FUl
/* 80371000 0036DF40  7C 60 1B 79 */	or. r0, r3, r3
/* 80371004 0036DF44  41 82 00 0C */	beq .L_80371010
/* 80371008 0036DF48  48 0C 3D A5 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8037100C 0036DF4C  7C 60 1B 78 */	mr r0, r3
.L_80371010:
/* 80371010 0036DF50  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 80371014 0036DF54  38 9F 00 24 */	addi r4, r31, 0x24
/* 80371018 0036DF58  3C A0 00 02 */	lis r5, 2
/* 8037101C 0036DF5C  80 7E 00 C8 */	lwz r3, 0xc8(r30)
/* 80371020 0036DF60  80 DE 00 78 */	lwz r6, 0x78(r30)
/* 80371024 0036DF64  4B CC E6 01 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 80371028 0036DF68  80 7E 00 C8 */	lwz r3, 0xc8(r30)
/* 8037102C 0036DF6C  3C 80 50 6E */	lis r4, 0x506E6577@ha
/* 80371030 0036DF70  38 C4 65 77 */	addi r6, r4, 0x506E6577@l
/* 80371034 0036DF74  38 A0 00 00 */	li r5, 0
/* 80371038 0036DF78  81 83 00 00 */	lwz r12, 0(r3)
/* 8037103C 0036DF7C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371040 0036DF80  7D 89 03 A6 */	mtctr r12
/* 80371044 0036DF84  4E 80 04 21 */	bctrl 
/* 80371048 0036DF88  90 7E 00 F0 */	stw r3, 0xf0(r30)
/* 8037104C 0036DF8C  80 1E 00 F0 */	lwz r0, 0xf0(r30)
/* 80371050 0036DF90  28 00 00 00 */	cmplwi r0, 0
/* 80371054 0036DF94  40 82 00 18 */	bne .L_8037106C
/* 80371058 0036DF98  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037105C 0036DF9C  38 BF 00 18 */	addi r5, r31, 0x18
/* 80371060 0036DFA0  38 80 01 02 */	li r4, 0x102
/* 80371064 0036DFA4  4C C6 31 82 */	crclr 6
/* 80371068 0036DFA8  4B CB 95 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037106C:
/* 8037106C 0036DFAC  80 7E 00 F0 */	lwz r3, 0xf0(r30)
/* 80371070 0036DFB0  C0 22 07 D4 */	lfs f1, lbl_8051EB34@sda21(r2)
/* 80371074 0036DFB4  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80371078 0036DFB8  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 8037107C 0036DFBC  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80371080 0036DFC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80371084 0036DFC4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80371088 0036DFC8  7D 89 03 A6 */	mtctr r12
/* 8037108C 0036DFCC  4E 80 04 21 */	bctrl 
/* 80371090 0036DFD0  38 60 00 38 */	li r3, 0x38
/* 80371094 0036DFD4  4B CB 2E 11 */	bl __nw__FUl
/* 80371098 0036DFD8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037109C 0036DFDC  41 82 00 24 */	beq .L_803710C0
/* 803710A0 0036DFE0  3C A0 75 6D */	lis r5, 0x756D6D79@ha
/* 803710A4 0036DFE4  38 80 00 00 */	li r4, 0
/* 803710A8 0036DFE8  38 C5 6D 79 */	addi r6, r5, 0x756D6D79@l
/* 803710AC 0036DFEC  38 A0 00 64 */	li r5, 0x64
/* 803710B0 0036DFF0  38 E0 00 03 */	li r7, 3
/* 803710B4 0036DFF4  39 00 00 32 */	li r8, 0x32
/* 803710B8 0036DFF8  48 09 AD B9 */	bl __ct__Q32kh6Screen14khUtilColorAnmFPQ29P2DScreen3MgrUxii
/* 803710BC 0036DFFC  7C 60 1B 78 */	mr r0, r3
.L_803710C0:
/* 803710C0 0036E000  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 803710C4 0036E004  38 00 00 01 */	li r0, 1
/* 803710C8 0036E008  38 60 00 48 */	li r3, 0x48
/* 803710CC 0036E00C  80 AD 99 10 */	lwz r5, mNewColor0__Q28Morimura10TZukanBase@sda21(r13)
/* 803710D0 0036E010  80 9E 00 D8 */	lwz r4, 0xd8(r30)
/* 803710D4 0036E014  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803710D8 0036E018  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 803710DC 0036E01C  88 A1 00 10 */	lbz r5, 0x10(r1)
/* 803710E0 0036E020  88 81 00 11 */	lbz r4, 0x11(r1)
/* 803710E4 0036E024  98 A6 00 00 */	stb r5, 0(r6)
/* 803710E8 0036E028  88 A1 00 12 */	lbz r5, 0x12(r1)
/* 803710EC 0036E02C  98 86 00 01 */	stb r4, 1(r6)
/* 803710F0 0036E030  88 81 00 13 */	lbz r4, 0x13(r1)
/* 803710F4 0036E034  98 A6 00 02 */	stb r5, 2(r6)
/* 803710F8 0036E038  98 86 00 03 */	stb r4, 3(r6)
/* 803710FC 0036E03C  80 AD 99 14 */	lwz r5, mNewColor1__Q28Morimura10TZukanBase@sda21(r13)
/* 80371100 0036E040  80 9E 00 D8 */	lwz r4, 0xd8(r30)
/* 80371104 0036E044  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80371108 0036E048  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 8037110C 0036E04C  88 A1 00 0C */	lbz r5, 0xc(r1)
/* 80371110 0036E050  88 81 00 0D */	lbz r4, 0xd(r1)
/* 80371114 0036E054  98 A6 00 04 */	stb r5, 4(r6)
/* 80371118 0036E058  88 A1 00 0E */	lbz r5, 0xe(r1)
/* 8037111C 0036E05C  98 86 00 05 */	stb r4, 5(r6)
/* 80371120 0036E060  88 81 00 0F */	lbz r4, 0xf(r1)
/* 80371124 0036E064  98 A6 00 06 */	stb r5, 6(r6)
/* 80371128 0036E068  98 86 00 07 */	stb r4, 7(r6)
/* 8037112C 0036E06C  80 AD 99 10 */	lwz r5, mNewColor0__Q28Morimura10TZukanBase@sda21(r13)
/* 80371130 0036E070  80 9E 00 D8 */	lwz r4, 0xd8(r30)
/* 80371134 0036E074  90 A1 00 08 */	stw r5, 8(r1)
/* 80371138 0036E078  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 8037113C 0036E07C  88 A1 00 08 */	lbz r5, 8(r1)
/* 80371140 0036E080  88 81 00 09 */	lbz r4, 9(r1)
/* 80371144 0036E084  98 A6 00 08 */	stb r5, 8(r6)
/* 80371148 0036E088  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 8037114C 0036E08C  98 86 00 09 */	stb r4, 9(r6)
/* 80371150 0036E090  88 81 00 0B */	lbz r4, 0xb(r1)
/* 80371154 0036E094  98 A6 00 0A */	stb r5, 0xa(r6)
/* 80371158 0036E098  98 86 00 0B */	stb r4, 0xb(r6)
/* 8037115C 0036E09C  80 9E 00 D8 */	lwz r4, 0xd8(r30)
/* 80371160 0036E0A0  98 04 00 34 */	stb r0, 0x34(r4)
/* 80371164 0036E0A4  4B CB 2D 41 */	bl __nw__FUl
/* 80371168 0036E0A8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037116C 0036E0AC  41 82 00 0C */	beq .L_80371178
/* 80371170 0036E0B0  4B F9 84 A5 */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 80371174 0036E0B4  7C 60 1B 78 */	mr r0, r3
.L_80371178:
/* 80371178 0036E0B8  90 1E 00 CC */	stw r0, 0xcc(r30)
/* 8037117C 0036E0BC  3C 60 50 6E */	lis r3, 0x506E6577@ha
/* 80371180 0036E0C0  38 C3 65 77 */	addi r6, r3, 0x506E6577@l
/* 80371184 0036E0C4  38 A0 00 00 */	li r5, 0
/* 80371188 0036E0C8  80 7E 00 C8 */	lwz r3, 0xc8(r30)
/* 8037118C 0036E0CC  80 FE 00 CC */	lwz r7, 0xcc(r30)
/* 80371190 0036E0D0  48 0C 39 95 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80371194 0036E0D4  38 60 00 1C */	li r3, 0x1c
/* 80371198 0036E0D8  4B CB 2D 0D */	bl __nw__FUl
/* 8037119C 0036E0DC  7C 60 1B 79 */	or. r0, r3, r3
/* 803711A0 0036E0E0  41 82 00 0C */	beq .L_803711AC
/* 803711A4 0036E0E4  4B FB 7C 61 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 803711A8 0036E0E8  7C 60 1B 78 */	mr r0, r3
.L_803711AC:
/* 803711AC 0036E0EC  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 803711B0 0036E0F0  38 60 00 10 */	li r3, 0x10
/* 803711B4 0036E0F4  4B CB 2C F1 */	bl __nw__FUl
/* 803711B8 0036E0F8  28 03 00 00 */	cmplwi r3, 0
/* 803711BC 0036E0FC  41 82 00 24 */	beq .L_803711E0
/* 803711C0 0036E100  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 803711C4 0036E104  C0 02 07 D8 */	lfs f0, lbl_8051EB38@sda21(r2)
/* 803711C8 0036E108  D0 23 00 00 */	stfs f1, 0(r3)
/* 803711CC 0036E10C  C0 22 07 DC */	lfs f1, lbl_8051EB3C@sda21(r2)
/* 803711D0 0036E110  D0 03 00 04 */	stfs f0, 4(r3)
/* 803711D4 0036E114  C0 02 07 E0 */	lfs f0, lbl_8051EB40@sda21(r2)
/* 803711D8 0036E118  D0 23 00 08 */	stfs f1, 8(r3)
/* 803711DC 0036E11C  D0 03 00 0C */	stfs f0, 0xc(r3)
.L_803711E0:
/* 803711E0 0036E120  90 7E 00 FC */	stw r3, 0xfc(r30)
/* 803711E4 0036E124  7F C3 F3 78 */	mr r3, r30
/* 803711E8 0036E128  48 0E 2E 59 */	bl getGamePad__Q26Screen7ObjBaseCFv
/* 803711EC 0036E12C  90 7E 00 80 */	stw r3, 0x80(r30)
/* 803711F0 0036E130  3C 80 69 63 */	lis r4, 0x69636F6E@ha
/* 803711F4 0036E134  3C 60 4E 73 */	lis r3, 0x4E73656C@ha
/* 803711F8 0036E138  80 FE 00 B4 */	lwz r7, 0xb4(r30)
/* 803711FC 0036E13C  38 C4 6F 6E */	addi r6, r4, 0x69636F6E@l
/* 80371200 0036E140  38 A3 65 6C */	addi r5, r3, 0x4E73656C@l
/* 80371204 0036E144  80 67 00 08 */	lwz r3, 8(r7)
/* 80371208 0036E148  81 83 00 00 */	lwz r12, 0(r3)
/* 8037120C 0036E14C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371210 0036E150  7D 89 03 A6 */	mtctr r12
/* 80371214 0036E154  4E 80 04 21 */	bctrl 
/* 80371218 0036E158  90 7E 01 30 */	stw r3, 0x130(r30)
/* 8037121C 0036E15C  80 1E 01 30 */	lwz r0, 0x130(r30)
/* 80371220 0036E160  28 00 00 00 */	cmplwi r0, 0
/* 80371224 0036E164  40 82 00 18 */	bne .L_8037123C
/* 80371228 0036E168  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037122C 0036E16C  38 BF 00 18 */	addi r5, r31, 0x18
/* 80371230 0036E170  38 80 01 18 */	li r4, 0x118
/* 80371234 0036E174  4C C6 31 82 */	crclr 6
/* 80371238 0036E178  4B CB 94 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037123C:
/* 8037123C 0036E17C  80 BE 01 30 */	lwz r5, 0x130(r30)
/* 80371240 0036E180  38 00 00 00 */	li r0, 0
/* 80371244 0036E184  3C 80 6C 5F */	lis r4, 0x6C5F6C75@ha
/* 80371248 0036E188  3C 60 00 50 */	lis r3, 0x00507365@ha
/* 8037124C 0036E18C  98 05 00 B0 */	stb r0, 0xb0(r5)
/* 80371250 0036E190  38 C4 6C 75 */	addi r6, r4, 0x6C5F6C75@l
/* 80371254 0036E194  38 A3 73 65 */	addi r5, r3, 0x00507365@l
/* 80371258 0036E198  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 8037125C 0036E19C  80 63 00 08 */	lwz r3, 8(r3)
/* 80371260 0036E1A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80371264 0036E1A4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371268 0036E1A8  7D 89 03 A6 */	mtctr r12
/* 8037126C 0036E1AC  4E 80 04 21 */	bctrl 
/* 80371270 0036E1B0  90 7E 01 34 */	stw r3, 0x134(r30)
/* 80371274 0036E1B4  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 80371278 0036E1B8  28 00 00 00 */	cmplwi r0, 0
/* 8037127C 0036E1BC  40 82 00 18 */	bne .L_80371294
/* 80371280 0036E1C0  38 7F 00 0C */	addi r3, r31, 0xc
/* 80371284 0036E1C4  38 BF 00 18 */	addi r5, r31, 0x18
/* 80371288 0036E1C8  38 80 01 1D */	li r4, 0x11d
/* 8037128C 0036E1CC  4C C6 31 82 */	crclr 6
/* 80371290 0036E1D0  4B CB 93 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80371294:
/* 80371294 0036E1D4  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 80371298 0036E1D8  3C A0 6C 5F */	lis r5, 0x6C5F7275@ha
/* 8037129C 0036E1DC  3C 80 00 50 */	lis r4, 0x00507365@ha
/* 803712A0 0036E1E0  80 63 00 08 */	lwz r3, 8(r3)
/* 803712A4 0036E1E4  38 C5 72 75 */	addi r6, r5, 0x6C5F7275@l
/* 803712A8 0036E1E8  38 A4 73 65 */	addi r5, r4, 0x00507365@l
/* 803712AC 0036E1EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803712B0 0036E1F0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803712B4 0036E1F4  7D 89 03 A6 */	mtctr r12
/* 803712B8 0036E1F8  4E 80 04 21 */	bctrl 
/* 803712BC 0036E1FC  90 7E 01 38 */	stw r3, 0x138(r30)
/* 803712C0 0036E200  80 1E 01 38 */	lwz r0, 0x138(r30)
/* 803712C4 0036E204  28 00 00 00 */	cmplwi r0, 0
/* 803712C8 0036E208  40 82 00 18 */	bne .L_803712E0
/* 803712CC 0036E20C  38 7F 00 0C */	addi r3, r31, 0xc
/* 803712D0 0036E210  38 BF 00 18 */	addi r5, r31, 0x18
/* 803712D4 0036E214  38 80 01 20 */	li r4, 0x120
/* 803712D8 0036E218  4C C6 31 82 */	crclr 6
/* 803712DC 0036E21C  4B CB 93 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803712E0:
/* 803712E0 0036E220  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 803712E4 0036E224  3C A0 6C 5F */	lis r5, 0x6C5F6C6C@ha
/* 803712E8 0036E228  3C 80 00 50 */	lis r4, 0x00507365@ha
/* 803712EC 0036E22C  80 63 00 08 */	lwz r3, 8(r3)
/* 803712F0 0036E230  38 C5 6C 6C */	addi r6, r5, 0x6C5F6C6C@l
/* 803712F4 0036E234  38 A4 73 65 */	addi r5, r4, 0x00507365@l
/* 803712F8 0036E238  81 83 00 00 */	lwz r12, 0(r3)
/* 803712FC 0036E23C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371300 0036E240  7D 89 03 A6 */	mtctr r12
/* 80371304 0036E244  4E 80 04 21 */	bctrl 
/* 80371308 0036E248  90 7E 01 3C */	stw r3, 0x13c(r30)
/* 8037130C 0036E24C  80 1E 01 3C */	lwz r0, 0x13c(r30)
/* 80371310 0036E250  28 00 00 00 */	cmplwi r0, 0
/* 80371314 0036E254  40 82 00 18 */	bne .L_8037132C
/* 80371318 0036E258  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037131C 0036E25C  38 BF 00 18 */	addi r5, r31, 0x18
/* 80371320 0036E260  38 80 01 23 */	li r4, 0x123
/* 80371324 0036E264  4C C6 31 82 */	crclr 6
/* 80371328 0036E268  4B CB 93 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037132C:
/* 8037132C 0036E26C  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 80371330 0036E270  3C A0 6C 5F */	lis r5, 0x6C5F726C@ha
/* 80371334 0036E274  3C 80 00 50 */	lis r4, 0x00507365@ha
/* 80371338 0036E278  80 63 00 08 */	lwz r3, 8(r3)
/* 8037133C 0036E27C  38 C5 72 6C */	addi r6, r5, 0x6C5F726C@l
/* 80371340 0036E280  38 A4 73 65 */	addi r5, r4, 0x00507365@l
/* 80371344 0036E284  81 83 00 00 */	lwz r12, 0(r3)
/* 80371348 0036E288  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037134C 0036E28C  7D 89 03 A6 */	mtctr r12
/* 80371350 0036E290  4E 80 04 21 */	bctrl 
/* 80371354 0036E294  90 7E 01 40 */	stw r3, 0x140(r30)
/* 80371358 0036E298  80 1E 01 40 */	lwz r0, 0x140(r30)
/* 8037135C 0036E29C  28 00 00 00 */	cmplwi r0, 0
/* 80371360 0036E2A0  40 82 00 18 */	bne .L_80371378
/* 80371364 0036E2A4  38 7F 00 0C */	addi r3, r31, 0xc
/* 80371368 0036E2A8  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037136C 0036E2AC  38 80 01 26 */	li r4, 0x126
/* 80371370 0036E2B0  4C C6 31 82 */	crclr 6
/* 80371374 0036E2B4  4B CB 92 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80371378:
/* 80371378 0036E2B8  80 9E 01 30 */	lwz r4, 0x130(r30)
/* 8037137C 0036E2BC  3C 60 6C 69 */	lis r3, 0x6C697374@ha
/* 80371380 0036E2C0  38 C3 73 74 */	addi r6, r3, 0x6C697374@l
/* 80371384 0036E2C4  38 A0 00 4E */	li r5, 0x4e
/* 80371388 0036E2C8  C0 04 00 D4 */	lfs f0, 0xd4(r4)
/* 8037138C 0036E2CC  D0 1E 01 74 */	stfs f0, 0x174(r30)
/* 80371390 0036E2D0  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 80371394 0036E2D4  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 80371398 0036E2D8  D0 1E 01 78 */	stfs f0, 0x178(r30)
/* 8037139C 0036E2DC  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 803713A0 0036E2E0  80 63 00 08 */	lwz r3, 8(r3)
/* 803713A4 0036E2E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803713A8 0036E2E8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803713AC 0036E2EC  7D 89 03 A6 */	mtctr r12
/* 803713B0 0036E2F0  4E 80 04 21 */	bctrl 
/* 803713B4 0036E2F4  7C 7D 1B 79 */	or. r29, r3, r3
/* 803713B8 0036E2F8  40 82 00 18 */	bne .L_803713D0
/* 803713BC 0036E2FC  38 7F 00 0C */	addi r3, r31, 0xc
/* 803713C0 0036E300  38 BF 00 18 */	addi r5, r31, 0x18
/* 803713C4 0036E304  38 80 01 2E */	li r4, 0x12e
/* 803713C8 0036E308  4C C6 31 82 */	crclr 6
/* 803713CC 0036E30C  4B CB 92 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803713D0:
/* 803713D0 0036E310  7F A3 EB 78 */	mr r3, r29
/* 803713D4 0036E314  4B CC 6F 4D */	bl getBounds__7J2DPaneFv
/* 803713D8 0036E318  C0 03 00 00 */	lfs f0, 0(r3)
/* 803713DC 0036E31C  3C A0 67 77 */	lis r5, 0x6777696E@ha
/* 803713E0 0036E320  3C 80 00 4E */	lis r4, 0x004E6269@ha
/* 803713E4 0036E324  C0 82 07 E4 */	lfs f4, lbl_8051EB44@sda21(r2)
/* 803713E8 0036E328  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 803713EC 0036E32C  38 C5 69 6E */	addi r6, r5, 0x6777696E@l
/* 803713F0 0036E330  C0 02 07 E8 */	lfs f0, lbl_8051EB48@sda21(r2)
/* 803713F4 0036E334  38 A4 62 69 */	addi r5, r4, 0x004E6269@l
/* 803713F8 0036E338  C0 23 00 04 */	lfs f1, 4(r3)
/* 803713FC 0036E33C  C0 42 24 34 */	lfs f2, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80371400 0036E340  D0 3E 01 A4 */	stfs f1, 0x1a4(r30)
/* 80371404 0036E344  C0 22 24 38 */	lfs f1, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80371408 0036E348  C0 63 00 08 */	lfs f3, 8(r3)
/* 8037140C 0036E34C  D0 7E 01 A8 */	stfs f3, 0x1a8(r30)
/* 80371410 0036E350  C0 63 00 0C */	lfs f3, 0xc(r3)
/* 80371414 0036E354  D0 7E 01 AC */	stfs f3, 0x1ac(r30)
/* 80371418 0036E358  C0 7E 01 A8 */	lfs f3, 0x1a8(r30)
/* 8037141C 0036E35C  EC 63 20 2A */	fadds f3, f3, f4
/* 80371420 0036E360  D0 7E 01 A8 */	stfs f3, 0x1a8(r30)
/* 80371424 0036E364  C0 7E 01 A4 */	lfs f3, 0x1a4(r30)
/* 80371428 0036E368  EC 63 20 28 */	fsubs f3, f3, f4
/* 8037142C 0036E36C  D0 7E 01 A4 */	stfs f3, 0x1a4(r30)
/* 80371430 0036E370  C0 7E 01 AC */	lfs f3, 0x1ac(r30)
/* 80371434 0036E374  EC 03 00 28 */	fsubs f0, f3, f0
/* 80371438 0036E378  D0 1E 01 AC */	stfs f0, 0x1ac(r30)
/* 8037143C 0036E37C  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 80371440 0036E380  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80371444 0036E384  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 80371448 0036E388  C0 1E 01 A4 */	lfs f0, 0x1a4(r30)
/* 8037144C 0036E38C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80371450 0036E390  D0 1E 01 A4 */	stfs f0, 0x1a4(r30)
/* 80371454 0036E394  C0 1E 01 A8 */	lfs f0, 0x1a8(r30)
/* 80371458 0036E398  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8037145C 0036E39C  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 80371460 0036E3A0  C0 1E 01 AC */	lfs f0, 0x1ac(r30)
/* 80371464 0036E3A4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80371468 0036E3A8  D0 1E 01 AC */	stfs f0, 0x1ac(r30)
/* 8037146C 0036E3AC  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 80371470 0036E3B0  80 63 00 08 */	lwz r3, 8(r3)
/* 80371474 0036E3B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80371478 0036E3B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037147C 0036E3BC  7D 89 03 A6 */	mtctr r12
/* 80371480 0036E3C0  4E 80 04 21 */	bctrl 
/* 80371484 0036E3C4  90 7E 01 2C */	stw r3, 0x12c(r30)
/* 80371488 0036E3C8  80 1E 01 2C */	lwz r0, 0x12c(r30)
/* 8037148C 0036E3CC  28 00 00 00 */	cmplwi r0, 0
/* 80371490 0036E3D0  40 82 00 18 */	bne .L_803714A8
/* 80371494 0036E3D4  38 7F 00 0C */	addi r3, r31, 0xc
/* 80371498 0036E3D8  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037149C 0036E3DC  38 80 01 3C */	li r4, 0x13c
/* 803714A0 0036E3E0  4C C6 31 82 */	crclr 6
/* 803714A4 0036E3E4  4B CB 91 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803714A8:
/* 803714A8 0036E3E8  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 803714AC 0036E3EC  38 80 00 00 */	li r4, 0
/* 803714B0 0036E3F0  38 A0 00 00 */	li r5, 0
/* 803714B4 0036E3F4  4B CC 78 F9 */	bl setInfluencedAlpha__7J2DPaneFbb
/* 803714B8 0036E3F8  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 803714BC 0036E3FC  38 80 00 02 */	li r4, 2
/* 803714C0 0036E400  4B CC 77 FD */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 803714C4 0036E404  80 BE 01 2C */	lwz r5, 0x12c(r30)
/* 803714C8 0036E408  38 00 00 00 */	li r0, 0
/* 803714CC 0036E40C  3C 80 62 61 */	lis r4, 0x6261636B@ha
/* 803714D0 0036E410  3C 60 50 77 */	lis r3, 0x5077696E@ha
/* 803714D4 0036E414  98 05 00 B0 */	stb r0, 0xb0(r5)
/* 803714D8 0036E418  38 C4 63 6B */	addi r6, r4, 0x6261636B@l
/* 803714DC 0036E41C  38 A3 69 6E */	addi r5, r3, 0x5077696E@l
/* 803714E0 0036E420  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803714E4 0036E424  80 63 00 08 */	lwz r3, 8(r3)
/* 803714E8 0036E428  81 83 00 00 */	lwz r12, 0(r3)
/* 803714EC 0036E42C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803714F0 0036E430  7D 89 03 A6 */	mtctr r12
/* 803714F4 0036E434  4E 80 04 21 */	bctrl 
/* 803714F8 0036E438  90 7E 01 24 */	stw r3, 0x124(r30)
/* 803714FC 0036E43C  80 1E 01 24 */	lwz r0, 0x124(r30)
/* 80371500 0036E440  28 00 00 00 */	cmplwi r0, 0
/* 80371504 0036E444  40 82 00 18 */	bne .L_8037151C
/* 80371508 0036E448  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037150C 0036E44C  38 BF 00 18 */	addi r5, r31, 0x18
/* 80371510 0036E450  38 80 01 43 */	li r4, 0x143
/* 80371514 0036E454  4C C6 31 82 */	crclr 6
/* 80371518 0036E458  4B CB 91 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037151C:
/* 8037151C 0036E45C  80 7E 01 24 */	lwz r3, 0x124(r30)
/* 80371520 0036E460  4B CC 7B 51 */	bl getFirstChildPane__7J2DPaneFv
/* 80371524 0036E464  90 7E 01 28 */	stw r3, 0x128(r30)
/* 80371528 0036E468  80 1E 01 28 */	lwz r0, 0x128(r30)
/* 8037152C 0036E46C  28 00 00 00 */	cmplwi r0, 0
/* 80371530 0036E470  40 82 00 18 */	bne .L_80371548
/* 80371534 0036E474  38 7F 00 0C */	addi r3, r31, 0xc
/* 80371538 0036E478  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037153C 0036E47C  38 80 01 47 */	li r4, 0x147
/* 80371540 0036E480  4C C6 31 82 */	crclr 6
/* 80371544 0036E484  4B CB 90 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80371548:
/* 80371548 0036E488  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8037154C 0036E48C  80 9E 01 28 */	lwz r4, 0x128(r30)
/* 80371550 0036E490  80 63 00 08 */	lwz r3, 8(r3)
/* 80371554 0036E494  4B CC 61 71 */	bl appendChild__7J2DPaneFP7J2DPane
/* 80371558 0036E498  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8037155C 0036E49C  3C A0 65 6C */	lis r5, 0x656C5F73@ha
/* 80371560 0036E4A0  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 80371564 0036E4A4  80 63 00 08 */	lwz r3, 8(r3)
/* 80371568 0036E4A8  38 C5 5F 73 */	addi r6, r5, 0x656C5F73@l
/* 8037156C 0036E4AC  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 80371570 0036E4B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80371574 0036E4B4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371578 0036E4B8  7D 89 03 A6 */	mtctr r12
/* 8037157C 0036E4BC  4E 80 04 21 */	bctrl 
/* 80371580 0036E4C0  90 7E 01 20 */	stw r3, 0x120(r30)
/* 80371584 0036E4C4  80 1E 01 20 */	lwz r0, 0x120(r30)
/* 80371588 0036E4C8  28 00 00 00 */	cmplwi r0, 0
/* 8037158C 0036E4CC  40 82 00 30 */	bne .L_803715BC
/* 80371590 0036E4D0  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 80371594 0036E4D4  3C A0 65 6C */	lis r5, 0x656C5F73@ha
/* 80371598 0036E4D8  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 8037159C 0036E4DC  80 63 00 08 */	lwz r3, 8(r3)
/* 803715A0 0036E4E0  38 C5 5F 73 */	addi r6, r5, 0x656C5F73@l
/* 803715A4 0036E4E4  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 803715A8 0036E4E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803715AC 0036E4EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803715B0 0036E4F0  7D 89 03 A6 */	mtctr r12
/* 803715B4 0036E4F4  4E 80 04 21 */	bctrl 
/* 803715B8 0036E4F8  90 7E 01 20 */	stw r3, 0x120(r30)
.L_803715BC:
/* 803715BC 0036E4FC  80 1E 01 20 */	lwz r0, 0x120(r30)
/* 803715C0 0036E500  28 00 00 00 */	cmplwi r0, 0
/* 803715C4 0036E504  40 82 00 18 */	bne .L_803715DC
/* 803715C8 0036E508  38 7F 00 0C */	addi r3, r31, 0xc
/* 803715CC 0036E50C  38 BF 00 18 */	addi r5, r31, 0x18
/* 803715D0 0036E510  38 80 01 4F */	li r4, 0x14f
/* 803715D4 0036E514  4C C6 31 82 */	crclr 6
/* 803715D8 0036E518  4B CB 90 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803715DC:
/* 803715DC 0036E51C  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 803715E0 0036E520  38 80 00 00 */	li r4, 0
/* 803715E4 0036E524  38 A0 00 00 */	li r5, 0
/* 803715E8 0036E528  4B CC 77 C5 */	bl setInfluencedAlpha__7J2DPaneFbb
/* 803715EC 0036E52C  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 803715F0 0036E530  38 80 00 04 */	li r4, 4
/* 803715F4 0036E534  4B CC 76 C9 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 803715F8 0036E538  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 803715FC 0036E53C  3C A0 62 61 */	lis r5, 0x6261636B@ha
/* 80371600 0036E540  3C 80 50 77 */	lis r4, 0x5077696E@ha
/* 80371604 0036E544  80 63 00 08 */	lwz r3, 8(r3)
/* 80371608 0036E548  38 C5 63 6B */	addi r6, r5, 0x6261636B@l
/* 8037160C 0036E54C  38 A4 69 6E */	addi r5, r4, 0x5077696E@l
/* 80371610 0036E550  81 83 00 00 */	lwz r12, 0(r3)
/* 80371614 0036E554  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371618 0036E558  7D 89 03 A6 */	mtctr r12
/* 8037161C 0036E55C  4E 80 04 21 */	bctrl 
/* 80371620 0036E560  38 80 00 04 */	li r4, 4
/* 80371624 0036E564  4B CC 76 99 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80371628 0036E568  80 7E 01 24 */	lwz r3, 0x124(r30)
/* 8037162C 0036E56C  38 80 00 04 */	li r4, 4
/* 80371630 0036E570  4B CC 76 8D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80371634 0036E574  80 7E 01 28 */	lwz r3, 0x128(r30)
/* 80371638 0036E578  38 80 00 04 */	li r4, 4
/* 8037163C 0036E57C  4B CC 76 81 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80371640 0036E580  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80371644 0036E584  83 BE 01 20 */	lwz r29, 0x120(r30)
/* 80371648 0036E588  28 00 00 00 */	cmplwi r0, 0
/* 8037164C 0036E58C  41 82 00 24 */	beq .L_80371670
/* 80371650 0036E590  7F A3 EB 78 */	mr r3, r29
/* 80371654 0036E594  38 9F 00 30 */	addi r4, r31, 0x30
/* 80371658 0036E598  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037165C 0036E59C  38 A0 00 00 */	li r5, 0
/* 80371660 0036E5A0  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 80371664 0036E5A4  7D 89 03 A6 */	mtctr r12
/* 80371668 0036E5A8  4E 80 04 21 */	bctrl 
/* 8037166C 0036E5AC  48 00 00 38 */	b .L_803716A4
.L_80371670:
/* 80371670 0036E5B0  7F C3 F3 78 */	mr r3, r30
/* 80371674 0036E5B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80371678 0036E5B8  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8037167C 0036E5BC  7D 89 03 A6 */	mtctr r12
/* 80371680 0036E5C0  4E 80 04 21 */	bctrl 
/* 80371684 0036E5C4  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80371688 0036E5C8  7F A3 EB 78 */	mr r3, r29
/* 8037168C 0036E5CC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80371690 0036E5D0  38 A0 00 00 */	li r5, 0
/* 80371694 0036E5D4  80 84 00 20 */	lwz r4, 0x20(r4)
/* 80371698 0036E5D8  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8037169C 0036E5DC  7D 89 03 A6 */	mtctr r12
/* 803716A0 0036E5E0  4E 80 04 21 */	bctrl 
.L_803716A4:
/* 803716A4 0036E5E4  38 00 00 01 */	li r0, 1
/* 803716A8 0036E5E8  7F A3 EB 78 */	mr r3, r29
/* 803716AC 0036E5EC  98 1D 00 B0 */	stb r0, 0xb0(r29)
/* 803716B0 0036E5F0  4B CC 6C 71 */	bl getBounds__7J2DPaneFv
/* 803716B4 0036E5F4  80 E3 00 00 */	lwz r7, 0(r3)
/* 803716B8 0036E5F8  3C A0 65 6C */	lis r5, 0x656C5F6C@ha
/* 803716BC 0036E5FC  80 03 00 04 */	lwz r0, 4(r3)
/* 803716C0 0036E600  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 803716C4 0036E604  38 C5 5F 6C */	addi r6, r5, 0x656C5F6C@l
/* 803716C8 0036E608  90 FE 01 44 */	stw r7, 0x144(r30)
/* 803716CC 0036E60C  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 803716D0 0036E610  90 1E 01 48 */	stw r0, 0x148(r30)
/* 803716D4 0036E614  80 83 00 08 */	lwz r4, 8(r3)
/* 803716D8 0036E618  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803716DC 0036E61C  90 9E 01 4C */	stw r4, 0x14c(r30)
/* 803716E0 0036E620  90 1E 01 50 */	stw r0, 0x150(r30)
/* 803716E4 0036E624  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 803716E8 0036E628  80 63 00 08 */	lwz r3, 8(r3)
/* 803716EC 0036E62C  81 83 00 00 */	lwz r12, 0(r3)
/* 803716F0 0036E630  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803716F4 0036E634  7D 89 03 A6 */	mtctr r12
/* 803716F8 0036E638  4E 80 04 21 */	bctrl 
/* 803716FC 0036E63C  80 DE 00 BC */	lwz r6, 0xbc(r30)
/* 80371700 0036E640  7C 60 1B 78 */	mr r0, r3
/* 80371704 0036E644  3C A0 65 6C */	lis r5, 0x656C5F6C@ha
/* 80371708 0036E648  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 8037170C 0036E64C  80 66 00 08 */	lwz r3, 8(r6)
/* 80371710 0036E650  7C 1D 03 78 */	mr r29, r0
/* 80371714 0036E654  38 C5 5F 6C */	addi r6, r5, 0x656C5F6C@l
/* 80371718 0036E658  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 8037171C 0036E65C  81 83 00 00 */	lwz r12, 0(r3)
/* 80371720 0036E660  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371724 0036E664  7D 89 03 A6 */	mtctr r12
/* 80371728 0036E668  4E 80 04 21 */	bctrl 
/* 8037172C 0036E66C  28 03 00 00 */	cmplwi r3, 0
/* 80371730 0036E670  41 82 00 30 */	beq .L_80371760
/* 80371734 0036E674  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 80371738 0036E678  3C A0 65 6C */	lis r5, 0x656C5F6C@ha
/* 8037173C 0036E67C  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 80371740 0036E680  80 63 00 08 */	lwz r3, 8(r3)
/* 80371744 0036E684  38 C5 5F 6C */	addi r6, r5, 0x656C5F6C@l
/* 80371748 0036E688  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 8037174C 0036E68C  81 83 00 00 */	lwz r12, 0(r3)
/* 80371750 0036E690  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80371754 0036E694  7D 89 03 A6 */	mtctr r12
/* 80371758 0036E698  4E 80 04 21 */	bctrl 
/* 8037175C 0036E69C  7C 7D 1B 78 */	mr r29, r3
.L_80371760:
/* 80371760 0036E6A0  28 1D 00 00 */	cmplwi r29, 0
/* 80371764 0036E6A4  40 82 00 18 */	bne .L_8037177C
/* 80371768 0036E6A8  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037176C 0036E6AC  38 BF 00 18 */	addi r5, r31, 0x18
/* 80371770 0036E6B0  38 80 01 6B */	li r4, 0x16b
/* 80371774 0036E6B4  4C C6 31 82 */	crclr 6
/* 80371778 0036E6B8  4B CB 8E C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037177C:
/* 8037177C 0036E6BC  7F A3 EB 78 */	mr r3, r29
/* 80371780 0036E6C0  4B CC 6B A1 */	bl getBounds__7J2DPaneFv
/* 80371784 0036E6C4  80 83 00 00 */	lwz r4, 0(r3)
/* 80371788 0036E6C8  80 03 00 04 */	lwz r0, 4(r3)
/* 8037178C 0036E6CC  90 9E 01 54 */	stw r4, 0x154(r30)
/* 80371790 0036E6D0  90 1E 01 58 */	stw r0, 0x158(r30)
/* 80371794 0036E6D4  80 83 00 08 */	lwz r4, 8(r3)
/* 80371798 0036E6D8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8037179C 0036E6DC  90 9E 01 5C */	stw r4, 0x15c(r30)
/* 803717A0 0036E6E0  90 1E 01 60 */	stw r0, 0x160(r30)
/* 803717A4 0036E6E4  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 803717A8 0036E6E8  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 803717AC 0036E6EC  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 803717B0 0036E6F0  D0 1E 01 64 */	stfs f0, 0x164(r30)
/* 803717B4 0036E6F4  D0 3E 01 68 */	stfs f1, 0x168(r30)
/* 803717B8 0036E6F8  C0 3D 00 D8 */	lfs f1, 0xd8(r29)
/* 803717BC 0036E6FC  C0 1D 00 D4 */	lfs f0, 0xd4(r29)
/* 803717C0 0036E700  D0 1E 01 6C */	stfs f0, 0x16c(r30)
/* 803717C4 0036E704  D0 3E 01 70 */	stfs f1, 0x170(r30)
/* 803717C8 0036E708  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 803717CC 0036E70C  83 A3 00 08 */	lwz r29, 8(r3)
/* 803717D0 0036E710  28 1D 00 00 */	cmplwi r29, 0
/* 803717D4 0036E714  40 82 00 18 */	bne .L_803717EC
/* 803717D8 0036E718  38 7F 00 0C */	addi r3, r31, 0xc
/* 803717DC 0036E71C  38 BF 00 18 */	addi r5, r31, 0x18
/* 803717E0 0036E720  38 80 01 77 */	li r4, 0x177
/* 803717E4 0036E724  4C C6 31 82 */	crclr 6
/* 803717E8 0036E728  4B CB 8E 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803717EC:
/* 803717EC 0036E72C  38 00 FF CE */	li r0, -50
/* 803717F0 0036E730  7F C3 F3 78 */	mr r3, r30
/* 803717F4 0036E734  90 1E 02 20 */	stw r0, 0x220(r30)
/* 803717F8 0036E738  7F A4 EB 78 */	mr r4, r29
/* 803717FC 0036E73C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80371800 0036E740  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80371804 0036E744  7D 89 03 A6 */	mtctr r12
/* 80371808 0036E748  4E 80 04 21 */	bctrl 
/* 8037180C 0036E74C  80 9E 00 88 */	lwz r4, 0x88(r30)
/* 80371810 0036E750  38 00 00 01 */	li r0, 1
/* 80371814 0036E754  38 60 00 30 */	li r3, 0x30
/* 80371818 0036E758  80 A4 00 00 */	lwz r5, 0(r4)
/* 8037181C 0036E75C  80 84 00 04 */	lwz r4, 4(r4)
/* 80371820 0036E760  80 A5 00 04 */	lwz r5, 4(r5)
/* 80371824 0036E764  80 84 00 04 */	lwz r4, 4(r4)
/* 80371828 0036E768  C0 05 00 D8 */	lfs f0, 0xd8(r5)
/* 8037182C 0036E76C  C0 24 00 D8 */	lfs f1, 0xd8(r4)
/* 80371830 0036E770  EF E1 00 28 */	fsubs f31, f1, f0
/* 80371834 0036E774  98 05 00 B0 */	stb r0, 0xb0(r5)
/* 80371838 0036E778  4B CB 26 6D */	bl __nw__FUl
/* 8037183C 0036E77C  7C 60 1B 79 */	or. r0, r3, r3
/* 80371840 0036E780  41 82 00 0C */	beq .L_8037184C
/* 80371844 0036E784  48 03 09 11 */	bl __ct__Q28Morimura11TIndexGroupFv
/* 80371848 0036E788  7C 60 1B 78 */	mr r0, r3
.L_8037184C:
/* 8037184C 0036E78C  90 1E 00 84 */	stw r0, 0x84(r30)
/* 80371850 0036E790  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura10TZukanBase@ha
/* 80371854 0036E794  38 83 40 1C */	addi r4, r3, mScrollParm__Q28Morimura10TZukanBase@l
/* 80371858 0036E798  7F C3 F3 78 */	mr r3, r30
/* 8037185C 0036E79C  80 BE 00 84 */	lwz r5, 0x84(r30)
/* 80371860 0036E7A0  D3 E5 00 18 */	stfs f31, 0x18(r5)
/* 80371864 0036E7A4  80 BE 00 84 */	lwz r5, 0x84(r30)
/* 80371868 0036E7A8  C0 04 00 00 */	lfs f0, 0(r4)
/* 8037186C 0036E7AC  D0 05 00 00 */	stfs f0, 0(r5)
/* 80371870 0036E7B0  C0 04 00 04 */	lfs f0, 4(r4)
/* 80371874 0036E7B4  D0 05 00 04 */	stfs f0, 4(r5)
/* 80371878 0036E7B8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8037187C 0036E7BC  D0 05 00 08 */	stfs f0, 8(r5)
/* 80371880 0036E7C0  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80371884 0036E7C4  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 80371888 0036E7C8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8037188C 0036E7CC  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 80371890 0036E7D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80371894 0036E7D4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80371898 0036E7D8  7D 89 03 A6 */	mtctr r12
/* 8037189C 0036E7DC  4E 80 04 21 */	bctrl 
/* 803718A0 0036E7E0  7F C3 F3 78 */	mr r3, r30
/* 803718A4 0036E7E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803718A8 0036E7E8  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 803718AC 0036E7EC  7D 89 03 A6 */	mtctr r12
/* 803718B0 0036E7F0  4E 80 04 21 */	bctrl 
/* 803718B4 0036E7F4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 803718B8 0036E7F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803718BC 0036E7FC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 803718C0 0036E800  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803718C4 0036E804  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803718C8 0036E808  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803718CC 0036E80C  7C 08 03 A6 */	mtlr r0
/* 803718D0 0036E810  38 21 00 40 */	addi r1, r1, 0x40
/* 803718D4 0036E814  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura10TZukanBaseFP10JKRArchive

.fn doUpdate__Q28Morimura10TZukanBaseFv, global
/* 803718D8 0036E818  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 803718DC 0036E81C  7C 08 02 A6 */	mflr r0
/* 803718E0 0036E820  90 01 00 84 */	stw r0, 0x84(r1)
/* 803718E4 0036E824  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 803718E8 0036E828  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 803718EC 0036E82C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 803718F0 0036E830  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 803718F4 0036E834  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803718F8 0036E838  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803718FC 0036E83C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80371900 0036E840  93 81 00 50 */	stw r28, 0x50(r1)
/* 80371904 0036E844  7C 7E 1B 78 */	mr r30, r3
/* 80371908 0036E848  88 03 02 44 */	lbz r0, 0x244(r3)
/* 8037190C 0036E84C  28 00 00 00 */	cmplwi r0, 0
/* 80371910 0036E850  40 82 00 14 */	bne .L_80371924
/* 80371914 0036E854  81 83 00 00 */	lwz r12, 0(r3)
/* 80371918 0036E858  81 8C 00 98 */	lwz r12, 0x98(r12)
/* 8037191C 0036E85C  7D 89 03 A6 */	mtctr r12
/* 80371920 0036E860  4E 80 04 21 */	bctrl 
.L_80371924:
/* 80371924 0036E864  88 1E 02 44 */	lbz r0, 0x244(r30)
/* 80371928 0036E868  28 00 00 00 */	cmplwi r0, 0
/* 8037192C 0036E86C  40 82 01 40 */	bne .L_80371A6C
/* 80371930 0036E870  80 1E 01 98 */	lwz r0, 0x198(r30)
/* 80371934 0036E874  2C 00 00 02 */	cmpwi r0, 2
/* 80371938 0036E878  40 80 01 34 */	bge .L_80371A6C
/* 8037193C 0036E87C  38 60 00 00 */	li r3, 0
/* 80371940 0036E880  90 7E 01 98 */	stw r3, 0x198(r30)
/* 80371944 0036E884  88 1E 02 18 */	lbz r0, 0x218(r30)
/* 80371948 0036E888  28 00 00 00 */	cmplwi r0, 0
/* 8037194C 0036E88C  41 82 00 40 */	beq .L_8037198C
/* 80371950 0036E890  38 00 00 01 */	li r0, 1
/* 80371954 0036E894  90 1E 01 98 */	stw r0, 0x198(r30)
/* 80371958 0036E898  98 7E 02 18 */	stb r3, 0x218(r30)
/* 8037195C 0036E89C  98 7E 02 17 */	stb r3, 0x217(r30)
/* 80371960 0036E8A0  88 1E 02 16 */	lbz r0, 0x216(r30)
/* 80371964 0036E8A4  28 00 00 00 */	cmplwi r0, 0
/* 80371968 0036E8A8  41 82 00 14 */	beq .L_8037197C
/* 8037196C 0036E8AC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371970 0036E8B0  38 80 18 0F */	li r4, 0x180f
/* 80371974 0036E8B4  38 A0 00 00 */	li r5, 0
/* 80371978 0036E8B8  4B FC 6C B9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8037197C:
/* 8037197C 0036E8BC  38 00 00 00 */	li r0, 0
/* 80371980 0036E8C0  98 1E 02 16 */	stb r0, 0x216(r30)
/* 80371984 0036E8C4  90 1E 02 20 */	stw r0, 0x220(r30)
/* 80371988 0036E8C8  48 00 00 E4 */	b .L_80371A6C
.L_8037198C:
/* 8037198C 0036E8CC  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80371990 0036E8D0  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80371994 0036E8D4  54 00 10 3A */	slwi r0, r0, 2
/* 80371998 0036E8D8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037199C 0036E8DC  48 03 0C 21 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 803719A0 0036E8E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803719A4 0036E8E4  7C 64 1B 78 */	mr r4, r3
/* 803719A8 0036E8E8  7F C3 F3 78 */	mr r3, r30
/* 803719AC 0036E8EC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803719B0 0036E8F0  7D 89 03 A6 */	mtctr r12
/* 803719B4 0036E8F4  4E 80 04 21 */	bctrl 
/* 803719B8 0036E8F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803719BC 0036E8FC  41 82 00 68 */	beq .L_80371A24
/* 803719C0 0036E900  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 803719C4 0036E904  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 803719C8 0036E908  54 00 10 3A */	slwi r0, r0, 2
/* 803719CC 0036E90C  7C 63 00 2E */	lwzx r3, r3, r0
/* 803719D0 0036E910  48 03 0B ED */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 803719D4 0036E914  80 1E 02 24 */	lwz r0, 0x224(r30)
/* 803719D8 0036E918  7C 00 18 00 */	cmpw r0, r3
/* 803719DC 0036E91C  40 82 00 48 */	bne .L_80371A24
/* 803719E0 0036E920  88 1E 02 17 */	lbz r0, 0x217(r30)
/* 803719E4 0036E924  28 00 00 00 */	cmplwi r0, 0
/* 803719E8 0036E928  40 82 00 84 */	bne .L_80371A6C
/* 803719EC 0036E92C  80 7E 02 20 */	lwz r3, 0x220(r30)
/* 803719F0 0036E930  A8 0D 85 90 */	lha r0, mRequestTimerMax__Q28Morimura10TZukanBase@sda21(r13)
/* 803719F4 0036E934  7C 03 00 00 */	cmpw r3, r0
/* 803719F8 0036E938  40 81 00 20 */	ble .L_80371A18
/* 803719FC 0036E93C  38 60 00 01 */	li r3, 1
/* 80371A00 0036E940  90 7E 01 98 */	stw r3, 0x198(r30)
/* 80371A04 0036E944  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80371A08 0036E948  28 00 00 00 */	cmplwi r0, 0
/* 80371A0C 0036E94C  41 82 00 60 */	beq .L_80371A6C
/* 80371A10 0036E950  98 7E 02 17 */	stb r3, 0x217(r30)
/* 80371A14 0036E954  48 00 00 58 */	b .L_80371A6C
.L_80371A18:
/* 80371A18 0036E958  38 03 00 01 */	addi r0, r3, 1
/* 80371A1C 0036E95C  90 1E 02 20 */	stw r0, 0x220(r30)
/* 80371A20 0036E960  48 00 00 4C */	b .L_80371A6C
.L_80371A24:
/* 80371A24 0036E964  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80371A28 0036E968  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80371A2C 0036E96C  54 00 10 3A */	slwi r0, r0, 2
/* 80371A30 0036E970  7C 63 00 2E */	lwzx r3, r3, r0
/* 80371A34 0036E974  48 03 0B 89 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80371A38 0036E978  90 7E 02 24 */	stw r3, 0x224(r30)
/* 80371A3C 0036E97C  38 00 00 00 */	li r0, 0
/* 80371A40 0036E980  98 1E 02 17 */	stb r0, 0x217(r30)
/* 80371A44 0036E984  88 1E 02 16 */	lbz r0, 0x216(r30)
/* 80371A48 0036E988  28 00 00 00 */	cmplwi r0, 0
/* 80371A4C 0036E98C  41 82 00 14 */	beq .L_80371A60
/* 80371A50 0036E990  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371A54 0036E994  38 80 18 0F */	li r4, 0x180f
/* 80371A58 0036E998  38 A0 00 00 */	li r5, 0
/* 80371A5C 0036E99C  4B FC 6B D5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80371A60:
/* 80371A60 0036E9A0  38 00 00 00 */	li r0, 0
/* 80371A64 0036E9A4  98 1E 02 16 */	stb r0, 0x216(r30)
/* 80371A68 0036E9A8  90 1E 02 20 */	stw r0, 0x220(r30)
.L_80371A6C:
/* 80371A6C 0036E9AC  88 1E 02 16 */	lbz r0, 0x216(r30)
/* 80371A70 0036E9B0  28 00 00 00 */	cmplwi r0, 0
/* 80371A74 0036E9B4  41 82 00 78 */	beq .L_80371AEC
/* 80371A78 0036E9B8  C0 02 07 EC */	lfs f0, lbl_8051EB4C@sda21(r2)
/* 80371A7C 0036E9BC  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 80371A80 0036E9C0  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80371A84 0036E9C4  41 82 00 A0 */	beq .L_80371B24
/* 80371A88 0036E9C8  C0 02 07 F0 */	lfs f0, lbl_8051EB50@sda21(r2)
/* 80371A8C 0036E9CC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80371A90 0036E9D0  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 80371A94 0036E9D4  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 80371A98 0036E9D8  28 03 00 00 */	cmplwi r3, 0
/* 80371A9C 0036E9DC  41 82 00 0C */	beq .L_80371AA8
/* 80371AA0 0036E9E0  38 00 00 01 */	li r0, 1
/* 80371AA4 0036E9E4  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80371AA8:
/* 80371AA8 0036E9E8  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 80371AAC 0036E9EC  C0 02 07 EC */	lfs f0, lbl_8051EB4C@sda21(r2)
/* 80371AB0 0036E9F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80371AB4 0036E9F4  40 81 00 70 */	ble .L_80371B24
/* 80371AB8 0036E9F8  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 80371ABC 0036E9FC  C0 22 07 F4 */	lfs f1, lbl_8051EB54@sda21(r2)
/* 80371AC0 0036EA00  80 7E 01 E0 */	lwz r3, 0x1e0(r30)
/* 80371AC4 0036EA04  C0 42 07 F8 */	lfs f2, lbl_8051EB58@sda21(r2)
/* 80371AC8 0036EA08  C0 62 07 D0 */	lfs f3, lbl_8051EB30@sda21(r2)
/* 80371ACC 0036EA0C  C0 82 07 C0 */	lfs f4, lbl_8051EB20@sda21(r2)
/* 80371AD0 0036EA10  4B FB 74 09 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 80371AD4 0036EA14  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 80371AD8 0036EA18  28 03 00 00 */	cmplwi r3, 0
/* 80371ADC 0036EA1C  41 82 00 48 */	beq .L_80371B24
/* 80371AE0 0036EA20  38 00 00 01 */	li r0, 1
/* 80371AE4 0036EA24  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80371AE8 0036EA28  48 00 00 3C */	b .L_80371B24
.L_80371AEC:
/* 80371AEC 0036EA2C  C0 5E 02 00 */	lfs f2, 0x200(r30)
/* 80371AF0 0036EA30  C0 22 07 FC */	lfs f1, lbl_8051EB5C@sda21(r2)
/* 80371AF4 0036EA34  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80371AF8 0036EA38  EC 22 00 72 */	fmuls f1, f2, f1
/* 80371AFC 0036EA3C  D0 3E 02 00 */	stfs f1, 0x200(r30)
/* 80371B00 0036EA40  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 80371B04 0036EA44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80371B08 0036EA48  40 80 00 1C */	bge .L_80371B24
/* 80371B0C 0036EA4C  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 80371B10 0036EA50  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 80371B14 0036EA54  28 03 00 00 */	cmplwi r3, 0
/* 80371B18 0036EA58  41 82 00 0C */	beq .L_80371B24
/* 80371B1C 0036EA5C  38 00 00 00 */	li r0, 0
/* 80371B20 0036EA60  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80371B24:
/* 80371B24 0036EA64  88 1E 02 44 */	lbz r0, 0x244(r30)
/* 80371B28 0036EA68  3B E0 00 00 */	li r31, 0
/* 80371B2C 0036EA6C  28 00 00 00 */	cmplwi r0, 0
/* 80371B30 0036EA70  40 82 00 24 */	bne .L_80371B54
/* 80371B34 0036EA74  88 1E 00 45 */	lbz r0, 0x45(r30)
/* 80371B38 0036EA78  28 00 00 00 */	cmplwi r0, 0
/* 80371B3C 0036EA7C  40 82 00 18 */	bne .L_80371B54
/* 80371B40 0036EA80  80 1E 01 98 */	lwz r0, 0x198(r30)
/* 80371B44 0036EA84  2C 00 00 02 */	cmpwi r0, 2
/* 80371B48 0036EA88  40 80 00 0C */	bge .L_80371B54
/* 80371B4C 0036EA8C  38 00 00 01 */	li r0, 1
/* 80371B50 0036EA90  98 1E 02 1A */	stb r0, 0x21a(r30)
.L_80371B54:
/* 80371B54 0036EA94  88 1E 02 44 */	lbz r0, 0x244(r30)
/* 80371B58 0036EA98  28 00 00 00 */	cmplwi r0, 0
/* 80371B5C 0036EA9C  40 82 04 8C */	bne .L_80371FE8
/* 80371B60 0036EAA0  88 1E 00 45 */	lbz r0, 0x45(r30)
/* 80371B64 0036EAA4  28 00 00 00 */	cmplwi r0, 0
/* 80371B68 0036EAA8  41 82 04 80 */	beq .L_80371FE8
/* 80371B6C 0036EAAC  80 1E 01 98 */	lwz r0, 0x198(r30)
/* 80371B70 0036EAB0  2C 00 00 02 */	cmpwi r0, 2
/* 80371B74 0036EAB4  40 80 04 74 */	bge .L_80371FE8
/* 80371B78 0036EAB8  7F C3 F3 78 */	mr r3, r30
/* 80371B7C 0036EABC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80371B80 0036EAC0  81 8C 00 DC */	lwz r12, 0xdc(r12)
/* 80371B84 0036EAC4  7D 89 03 A6 */	mtctr r12
/* 80371B88 0036EAC8  4E 80 04 21 */	bctrl 
/* 80371B8C 0036EACC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80371B90 0036EAD0  40 82 04 58 */	bne .L_80371FE8
/* 80371B94 0036EAD4  38 80 00 00 */	li r4, 0
/* 80371B98 0036EAD8  98 9E 02 1A */	stb r4, 0x21a(r30)
/* 80371B9C 0036EADC  88 1E 02 16 */	lbz r0, 0x216(r30)
/* 80371BA0 0036EAE0  28 00 00 00 */	cmplwi r0, 0
/* 80371BA4 0036EAE4  40 82 02 2C */	bne .L_80371DD0
/* 80371BA8 0036EAE8  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371BAC 0036EAEC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80371BB0 0036EAF0  2C 00 00 00 */	cmpwi r0, 0
/* 80371BB4 0036EAF4  40 82 02 1C */	bne .L_80371DD0
/* 80371BB8 0036EAF8  80 BE 00 80 */	lwz r5, 0x80(r30)
/* 80371BBC 0036EAFC  80 65 00 18 */	lwz r3, 0x18(r5)
/* 80371BC0 0036EB00  54 60 01 09 */	rlwinm. r0, r3, 0, 4, 4
/* 80371BC4 0036EB04  41 82 00 68 */	beq .L_80371C2C
/* 80371BC8 0036EB08  88 1E 02 40 */	lbz r0, 0x240(r30)
/* 80371BCC 0036EB0C  28 00 00 00 */	cmplwi r0, 0
/* 80371BD0 0036EB10  41 82 00 50 */	beq .L_80371C20
/* 80371BD4 0036EB14  88 1E 02 42 */	lbz r0, 0x242(r30)
/* 80371BD8 0036EB18  28 00 00 00 */	cmplwi r0, 0
/* 80371BDC 0036EB1C  40 82 00 44 */	bne .L_80371C20
/* 80371BE0 0036EB20  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80371BE4 0036EB24  2C 00 00 00 */	cmpwi r0, 0
/* 80371BE8 0036EB28  40 81 00 10 */	ble .L_80371BF8
/* 80371BEC 0036EB2C  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 80371BF0 0036EB30  48 03 05 B1 */	bl upIndex__Q28Morimura11TIndexGroupFv
/* 80371BF4 0036EB34  48 00 01 DC */	b .L_80371DD0
.L_80371BF8:
/* 80371BF8 0036EB38  88 1E 02 15 */	lbz r0, 0x215(r30)
/* 80371BFC 0036EB3C  28 00 00 00 */	cmplwi r0, 0
/* 80371C00 0036EB40  40 82 01 D0 */	bne .L_80371DD0
/* 80371C04 0036EB44  38 00 00 01 */	li r0, 1
/* 80371C08 0036EB48  38 80 18 07 */	li r4, 0x1807
/* 80371C0C 0036EB4C  98 1E 02 15 */	stb r0, 0x215(r30)
/* 80371C10 0036EB50  38 A0 00 00 */	li r5, 0
/* 80371C14 0036EB54  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371C18 0036EB58  4B FC 6A 19 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80371C1C 0036EB5C  48 00 01 B4 */	b .L_80371DD0
.L_80371C20:
/* 80371C20 0036EB60  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 80371C24 0036EB64  48 03 05 7D */	bl upIndex__Q28Morimura11TIndexGroupFv
/* 80371C28 0036EB68  48 00 01 A8 */	b .L_80371DD0
.L_80371C2C:
/* 80371C2C 0036EB6C  54 60 01 4B */	rlwinm. r0, r3, 0, 5, 5
/* 80371C30 0036EB70  41 82 00 F4 */	beq .L_80371D24
/* 80371C34 0036EB74  88 1E 02 40 */	lbz r0, 0x240(r30)
/* 80371C38 0036EB78  28 00 00 00 */	cmplwi r0, 0
/* 80371C3C 0036EB7C  41 82 00 DC */	beq .L_80371D18
/* 80371C40 0036EB80  88 1E 02 42 */	lbz r0, 0x242(r30)
/* 80371C44 0036EB84  28 00 00 00 */	cmplwi r0, 0
/* 80371C48 0036EB88  40 82 00 D0 */	bne .L_80371D18
/* 80371C4C 0036EB8C  80 1E 02 34 */	lwz r0, 0x234(r30)
/* 80371C50 0036EB90  3B A0 00 01 */	li r29, 1
/* 80371C54 0036EB94  2C 00 00 00 */	cmpwi r0, 0
/* 80371C58 0036EB98  40 80 00 5C */	bge .L_80371CB4
/* 80371C5C 0036EB9C  80 1E 02 38 */	lwz r0, 0x238(r30)
/* 80371C60 0036EBA0  3C 60 43 30 */	lis r3, 0x4330
/* 80371C64 0036EBA4  80 9E 00 94 */	lwz r4, 0x94(r30)
/* 80371C68 0036EBA8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80371C6C 0036EBAC  90 61 00 30 */	stw r3, 0x30(r1)
/* 80371C70 0036EBB0  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 80371C74 0036EBB4  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 80371C78 0036EBB8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80371C7C 0036EBBC  C0 22 08 00 */	lfs f1, lbl_8051EB60@sda21(r2)
/* 80371C80 0036EBC0  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80371C84 0036EBC4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80371C88 0036EBC8  EC 40 18 28 */	fsubs f2, f0, f3
/* 80371C8C 0036EBCC  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80371C90 0036EBD0  90 61 00 28 */	stw r3, 0x28(r1)
/* 80371C94 0036EBD4  EC 22 08 24 */	fdivs f1, f2, f1
/* 80371C98 0036EBD8  C8 41 00 28 */	lfd f2, 0x28(r1)
/* 80371C9C 0036EBDC  EC 42 18 28 */	fsubs f2, f2, f3
/* 80371CA0 0036EBE0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80371CA4 0036EBE4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80371CA8 0036EBE8  40 80 00 34 */	bge .L_80371CDC
/* 80371CAC 0036EBEC  3B A0 00 00 */	li r29, 0
/* 80371CB0 0036EBF0  48 00 00 2C */	b .L_80371CDC
.L_80371CB4:
/* 80371CB4 0036EBF4  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80371CB8 0036EBF8  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80371CBC 0036EBFC  54 00 10 3A */	slwi r0, r0, 2
/* 80371CC0 0036EC00  7C 63 00 2E */	lwzx r3, r3, r0
/* 80371CC4 0036EC04  48 03 09 51 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80371CC8 0036EC08  80 9E 02 30 */	lwz r4, 0x230(r30)
/* 80371CCC 0036EC0C  38 04 FF FF */	addi r0, r4, -1
/* 80371CD0 0036EC10  7C 03 00 00 */	cmpw r3, r0
/* 80371CD4 0036EC14  40 80 00 08 */	bge .L_80371CDC
/* 80371CD8 0036EC18  3B A0 00 00 */	li r29, 0
.L_80371CDC:
/* 80371CDC 0036EC1C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80371CE0 0036EC20  41 82 00 2C */	beq .L_80371D0C
/* 80371CE4 0036EC24  88 1E 02 15 */	lbz r0, 0x215(r30)
/* 80371CE8 0036EC28  28 00 00 00 */	cmplwi r0, 0
/* 80371CEC 0036EC2C  40 82 00 E4 */	bne .L_80371DD0
/* 80371CF0 0036EC30  38 00 00 01 */	li r0, 1
/* 80371CF4 0036EC34  38 80 18 07 */	li r4, 0x1807
/* 80371CF8 0036EC38  98 1E 02 15 */	stb r0, 0x215(r30)
/* 80371CFC 0036EC3C  38 A0 00 00 */	li r5, 0
/* 80371D00 0036EC40  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371D04 0036EC44  4B FC 69 2D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80371D08 0036EC48  48 00 00 C8 */	b .L_80371DD0
.L_80371D0C:
/* 80371D0C 0036EC4C  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 80371D10 0036EC50  48 03 04 FD */	bl downIndex__Q28Morimura11TIndexGroupFv
/* 80371D14 0036EC54  48 00 00 BC */	b .L_80371DD0
.L_80371D18:
/* 80371D18 0036EC58  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 80371D1C 0036EC5C  48 03 04 F1 */	bl downIndex__Q28Morimura11TIndexGroupFv
/* 80371D20 0036EC60  48 00 00 B0 */	b .L_80371DD0
.L_80371D24:
/* 80371D24 0036EC64  80 65 00 1C */	lwz r3, 0x1c(r5)
/* 80371D28 0036EC68  54 60 01 8D */	rlwinm. r0, r3, 0, 6, 6
/* 80371D2C 0036EC6C  41 82 00 64 */	beq .L_80371D90
/* 80371D30 0036EC70  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80371D34 0036EC74  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80371D38 0036EC78  54 00 10 3A */	slwi r0, r0, 2
/* 80371D3C 0036EC7C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80371D40 0036EC80  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80371D44 0036EC84  2C 00 00 00 */	cmpwi r0, 0
/* 80371D48 0036EC88  40 82 00 88 */	bne .L_80371DD0
/* 80371D4C 0036EC8C  7F C3 F3 78 */	mr r3, r30
/* 80371D50 0036EC90  81 9E 00 00 */	lwz r12, 0(r30)
/* 80371D54 0036EC94  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 80371D58 0036EC98  7D 89 03 A6 */	mtctr r12
/* 80371D5C 0036EC9C  4E 80 04 21 */	bctrl 
/* 80371D60 0036ECA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80371D64 0036ECA4  41 82 00 6C */	beq .L_80371DD0
/* 80371D68 0036ECA8  80 6D 99 C8 */	lwz r3, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80371D6C 0036ECAC  38 03 00 01 */	addi r0, r3, 1
/* 80371D70 0036ECB0  2C 00 00 02 */	cmpwi r0, 2
/* 80371D74 0036ECB4  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80371D78 0036ECB8  40 81 00 10 */	ble .L_80371D88
/* 80371D7C 0036ECBC  38 00 00 02 */	li r0, 2
/* 80371D80 0036ECC0  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80371D84 0036ECC4  48 00 00 4C */	b .L_80371DD0
.L_80371D88:
/* 80371D88 0036ECC8  3B E0 00 01 */	li r31, 1
/* 80371D8C 0036ECCC  48 00 00 44 */	b .L_80371DD0
.L_80371D90:
/* 80371D90 0036ECD0  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 80371D94 0036ECD4  41 82 00 3C */	beq .L_80371DD0
/* 80371D98 0036ECD8  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80371D9C 0036ECDC  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80371DA0 0036ECE0  54 00 10 3A */	slwi r0, r0, 2
/* 80371DA4 0036ECE4  7C 63 00 2E */	lwzx r3, r3, r0
/* 80371DA8 0036ECE8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80371DAC 0036ECEC  2C 00 00 00 */	cmpwi r0, 0
/* 80371DB0 0036ECF0  40 82 00 20 */	bne .L_80371DD0
/* 80371DB4 0036ECF4  80 6D 99 C8 */	lwz r3, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80371DB8 0036ECF8  34 03 FF FF */	addic. r0, r3, -1
/* 80371DBC 0036ECFC  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80371DC0 0036ED00  40 80 00 0C */	bge .L_80371DCC
/* 80371DC4 0036ED04  90 8D 99 C8 */	stw r4, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80371DC8 0036ED08  48 00 00 08 */	b .L_80371DD0
.L_80371DCC:
/* 80371DCC 0036ED0C  3B E0 00 01 */	li r31, 1
.L_80371DD0:
/* 80371DD0 0036ED10  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 80371DD4 0036ED14  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80371DD8 0036ED18  2C 00 00 00 */	cmpwi r0, 0
/* 80371DDC 0036ED1C  40 82 02 0C */	bne .L_80371FE8
/* 80371DE0 0036ED20  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80371DE4 0036ED24  40 82 02 04 */	bne .L_80371FE8
/* 80371DE8 0036ED28  80 9E 00 80 */	lwz r4, 0x80(r30)
/* 80371DEC 0036ED2C  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 80371DF0 0036ED30  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 80371DF4 0036ED34  41 82 00 18 */	beq .L_80371E0C
/* 80371DF8 0036ED38  38 00 00 01 */	li r0, 1
/* 80371DFC 0036ED3C  7F C3 F3 78 */	mr r3, r30
/* 80371E00 0036ED40  90 1E 01 98 */	stw r0, 0x198(r30)
/* 80371E04 0036ED44  48 00 24 61 */	bl doPushXButton__Q28Morimura10TZukanBaseFv
/* 80371E08 0036ED48  48 00 01 E0 */	b .L_80371FE8
.L_80371E0C:
/* 80371E0C 0036ED4C  54 60 05 29 */	rlwinm. r0, r3, 0, 0x14, 0x14
/* 80371E10 0036ED50  41 82 00 18 */	beq .L_80371E28
/* 80371E14 0036ED54  38 00 00 01 */	li r0, 1
/* 80371E18 0036ED58  7F C3 F3 78 */	mr r3, r30
/* 80371E1C 0036ED5C  90 1E 01 98 */	stw r0, 0x198(r30)
/* 80371E20 0036ED60  48 00 25 59 */	bl doPushYButton__Q28Morimura10TZukanBaseFv
/* 80371E24 0036ED64  48 00 01 C4 */	b .L_80371FE8
.L_80371E28:
/* 80371E28 0036ED68  54 60 06 75 */	rlwinm. r0, r3, 0, 0x19, 0x1a
/* 80371E2C 0036ED6C  41 82 00 54 */	beq .L_80371E80
/* 80371E30 0036ED70  88 1E 02 16 */	lbz r0, 0x216(r30)
/* 80371E34 0036ED74  28 00 00 00 */	cmplwi r0, 0
/* 80371E38 0036ED78  41 82 00 1C */	beq .L_80371E54
/* 80371E3C 0036ED7C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371E40 0036ED80  38 80 18 0F */	li r4, 0x180f
/* 80371E44 0036ED84  38 A0 00 00 */	li r5, 0
/* 80371E48 0036ED88  4B FC 67 E9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80371E4C 0036ED8C  38 00 00 00 */	li r0, 0
/* 80371E50 0036ED90  98 1E 02 16 */	stb r0, 0x216(r30)
.L_80371E54:
/* 80371E54 0036ED94  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371E58 0036ED98  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80371E5C 0036ED9C  2C 00 00 00 */	cmpwi r0, 0
/* 80371E60 0036EDA0  41 82 01 88 */	beq .L_80371FE8
/* 80371E64 0036EDA4  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371E68 0036EDA8  38 80 18 11 */	li r4, 0x1811
/* 80371E6C 0036EDAC  38 A0 00 00 */	li r5, 0
/* 80371E70 0036EDB0  4B FC 67 C1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80371E74 0036EDB4  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371E78 0036EDB8  48 00 A4 A1 */	bl windowClose__Q28Morimura12TZukanWindowFv
/* 80371E7C 0036EDBC  48 00 01 6C */	b .L_80371FE8
.L_80371E80:
/* 80371E80 0036EDC0  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80371E84 0036EDC4  41 82 00 10 */	beq .L_80371E94
/* 80371E88 0036EDC8  7F C3 F3 78 */	mr r3, r30
/* 80371E8C 0036EDCC  48 00 26 1D */	bl doPushBButton__Q28Morimura10TZukanBaseFv
/* 80371E90 0036EDD0  48 00 01 58 */	b .L_80371FE8
.L_80371E94:
/* 80371E94 0036EDD4  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80371E98 0036EDD8  41 82 00 90 */	beq .L_80371F28
/* 80371E9C 0036EDDC  38 00 00 01 */	li r0, 1
/* 80371EA0 0036EDE0  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 80371EA4 0036EDE4  90 1E 01 98 */	stw r0, 0x198(r30)
/* 80371EA8 0036EDE8  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 80371EAC 0036EDEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80371EB0 0036EDF0  40 80 00 28 */	bge .L_80371ED8
/* 80371EB4 0036EDF4  88 1E 02 16 */	lbz r0, 0x216(r30)
/* 80371EB8 0036EDF8  28 00 00 00 */	cmplwi r0, 0
/* 80371EBC 0036EDFC  40 82 00 14 */	bne .L_80371ED0
/* 80371EC0 0036EE00  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371EC4 0036EE04  38 80 18 0F */	li r4, 0x180f
/* 80371EC8 0036EE08  38 A0 00 00 */	li r5, 0
/* 80371ECC 0036EE0C  4B FC 67 65 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80371ED0:
/* 80371ED0 0036EE10  38 00 00 01 */	li r0, 1
/* 80371ED4 0036EE14  98 1E 02 16 */	stb r0, 0x216(r30)
.L_80371ED8:
/* 80371ED8 0036EE18  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371EDC 0036EE1C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80371EE0 0036EE20  2C 00 00 00 */	cmpwi r0, 0
/* 80371EE4 0036EE24  41 82 01 04 */	beq .L_80371FE8
/* 80371EE8 0036EE28  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80371EEC 0036EE2C  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80371EF0 0036EE30  54 00 10 3A */	slwi r0, r0, 2
/* 80371EF4 0036EE34  7C 63 00 2E */	lwzx r3, r3, r0
/* 80371EF8 0036EE38  48 03 06 C5 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80371EFC 0036EE3C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80371F00 0036EE40  7C 64 1B 78 */	mr r4, r3
/* 80371F04 0036EE44  7F C3 F3 78 */	mr r3, r30
/* 80371F08 0036EE48  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 80371F0C 0036EE4C  7D 89 03 A6 */	mtctr r12
/* 80371F10 0036EE50  4E 80 04 21 */	bctrl 
/* 80371F14 0036EE54  7C 65 1B 78 */	mr r5, r3
/* 80371F18 0036EE58  7F C3 F3 78 */	mr r3, r30
/* 80371F1C 0036EE5C  7C 86 23 78 */	mr r6, r4
/* 80371F20 0036EE60  48 00 28 7D */	bl windowOpenClose__Q28Morimura10TZukanBaseFUx
/* 80371F24 0036EE64  48 00 00 C4 */	b .L_80371FE8
.L_80371F28:
/* 80371F28 0036EE68  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371F2C 0036EE6C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80371F30 0036EE70  7C 00 00 34 */	cntlzw r0, r0
/* 80371F34 0036EE74  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80371F38 0036EE78  40 82 00 B0 */	bne .L_80371FE8
/* 80371F3C 0036EE7C  C0 24 00 4C */	lfs f1, 0x4c(r4)
/* 80371F40 0036EE80  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 80371F44 0036EE84  FF C0 08 90 */	fmr f30, f1
/* 80371F48 0036EE88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80371F4C 0036EE8C  4C 41 13 82 */	cror 2, 1, 2
/* 80371F50 0036EE90  41 82 00 14 */	beq .L_80371F64
/* 80371F54 0036EE94  C0 02 08 04 */	lfs f0, lbl_8051EB64@sda21(r2)
/* 80371F58 0036EE98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80371F5C 0036EE9C  4C 40 13 82 */	cror 2, 0, 2
/* 80371F60 0036EEA0  40 82 00 88 */	bne .L_80371FE8
.L_80371F64:
/* 80371F64 0036EEA4  C0 02 08 04 */	lfs f0, lbl_8051EB64@sda21(r2)
/* 80371F68 0036EEA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80371F6C 0036EEAC  4C 40 13 82 */	cror 2, 0, 2
/* 80371F70 0036EEB0  40 82 00 08 */	bne .L_80371F78
/* 80371F74 0036EEB4  C3 C2 08 08 */	lfs f30, lbl_8051EB68@sda21(r2)
.L_80371F78:
/* 80371F78 0036EEB8  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 80371F7C 0036EEBC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80371F80 0036EEC0  4C 41 13 82 */	cror 2, 1, 2
/* 80371F84 0036EEC4  40 82 00 08 */	bne .L_80371F8C
/* 80371F88 0036EEC8  C3 C2 07 C4 */	lfs f30, lbl_8051EB24@sda21(r2)
.L_80371F8C:
/* 80371F8C 0036EECC  FC 20 F0 90 */	fmr f1, f30
/* 80371F90 0036EED0  48 00 A3 B9 */	bl msgScroll__Q28Morimura12TZukanWindowFf
/* 80371F94 0036EED4  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371F98 0036EED8  48 00 A3 E9 */	bl getPosRate__Q28Morimura12TZukanWindowFv
/* 80371F9C 0036EEDC  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80371FA0 0036EEE0  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80371FA4 0036EEE4  41 82 00 18 */	beq .L_80371FBC
/* 80371FA8 0036EEE8  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371FAC 0036EEEC  48 00 A3 D5 */	bl getPosRate__Q28Morimura12TZukanWindowFv
/* 80371FB0 0036EEF0  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80371FB4 0036EEF4  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80371FB8 0036EEF8  40 82 00 08 */	bne .L_80371FC0
.L_80371FBC:
/* 80371FBC 0036EEFC  C3 C2 07 C0 */	lfs f30, lbl_8051EB20@sda21(r2)
.L_80371FC0:
/* 80371FC0 0036EF00  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80371FC4 0036EF04  FC 00 F0 00 */	fcmpu cr0, f0, f30
/* 80371FC8 0036EF08  41 82 00 14 */	beq .L_80371FDC
/* 80371FCC 0036EF0C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80371FD0 0036EF10  38 80 10 75 */	li r4, 0x1075
/* 80371FD4 0036EF14  38 A0 00 00 */	li r5, 0
/* 80371FD8 0036EF18  4B FC 66 59 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80371FDC:
/* 80371FDC 0036EF1C  FC 20 F0 90 */	fmr f1, f30
/* 80371FE0 0036EF20  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80371FE4 0036EF24  48 00 A5 B5 */	bl moveIcon__Q28Morimura12TZukanWindowFf
.L_80371FE8:
/* 80371FE8 0036EF28  88 7E 02 15 */	lbz r3, 0x215(r30)
/* 80371FEC 0036EF2C  28 03 00 00 */	cmplwi r3, 0
/* 80371FF0 0036EF30  41 82 00 20 */	beq .L_80372010
/* 80371FF4 0036EF34  38 03 00 01 */	addi r0, r3, 1
/* 80371FF8 0036EF38  98 1E 02 15 */	stb r0, 0x215(r30)
/* 80371FFC 0036EF3C  88 1E 02 15 */	lbz r0, 0x215(r30)
/* 80372000 0036EF40  28 00 00 0F */	cmplwi r0, 0xf
/* 80372004 0036EF44  40 81 00 0C */	ble .L_80372010
/* 80372008 0036EF48  38 00 00 00 */	li r0, 0
/* 8037200C 0036EF4C  98 1E 02 15 */	stb r0, 0x215(r30)
.L_80372010:
/* 80372010 0036EF50  7F C3 F3 78 */	mr r3, r30
/* 80372014 0036EF54  81 9E 00 00 */	lwz r12, 0(r30)
/* 80372018 0036EF58  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8037201C 0036EF5C  7D 89 03 A6 */	mtctr r12
/* 80372020 0036EF60  4E 80 04 21 */	bctrl 
/* 80372024 0036EF64  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80372028 0036EF68  80 03 00 08 */	lwz r0, 8(r3)
/* 8037202C 0036EF6C  2C 00 00 01 */	cmpwi r0, 1
/* 80372030 0036EF70  40 82 00 40 */	bne .L_80372070
/* 80372034 0036EF74  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80372038 0036EF78  28 00 00 00 */	cmplwi r0, 0
/* 8037203C 0036EF7C  40 82 00 34 */	bne .L_80372070
/* 80372040 0036EF80  80 1E 01 98 */	lwz r0, 0x198(r30)
/* 80372044 0036EF84  2C 00 00 02 */	cmpwi r0, 2
/* 80372048 0036EF88  40 80 00 28 */	bge .L_80372070
/* 8037204C 0036EF8C  38 00 00 02 */	li r0, 2
/* 80372050 0036EF90  7F C3 F3 78 */	mr r3, r30
/* 80372054 0036EF94  90 1E 01 98 */	stw r0, 0x198(r30)
/* 80372058 0036EF98  81 9E 00 00 */	lwz r12, 0(r30)
/* 8037205C 0036EF9C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80372060 0036EFA0  7D 89 03 A6 */	mtctr r12
/* 80372064 0036EFA4  4E 80 04 21 */	bctrl 
/* 80372068 0036EFA8  38 80 00 00 */	li r4, 0
/* 8037206C 0036EFAC  48 0D FF 25 */	bl endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
.L_80372070:
/* 80372070 0036EFB0  88 1E 02 16 */	lbz r0, 0x216(r30)
/* 80372074 0036EFB4  28 00 00 00 */	cmplwi r0, 0
/* 80372078 0036EFB8  40 82 00 28 */	bne .L_803720A0
/* 8037207C 0036EFBC  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80372080 0036EFC0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80372084 0036EFC4  2C 00 00 00 */	cmpwi r0, 0
/* 80372088 0036EFC8  40 82 00 18 */	bne .L_803720A0
/* 8037208C 0036EFCC  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 80372090 0036EFD0  C0 22 07 EC */	lfs f1, lbl_8051EB4C@sda21(r2)
/* 80372094 0036EFD4  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80372098 0036EFD8  4B F9 36 11 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 8037209C 0036EFDC  48 00 00 14 */	b .L_803720B0
.L_803720A0:
/* 803720A0 0036EFE0  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 803720A4 0036EFE4  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 803720A8 0036EFE8  80 63 00 34 */	lwz r3, 0x34(r3)
/* 803720AC 0036EFEC  4B F9 35 FD */	bl setSpeed__Q32og6Screen9AnimGroupFf
.L_803720B0:
/* 803720B0 0036EFF0  88 1E 02 40 */	lbz r0, 0x240(r30)
/* 803720B4 0036EFF4  28 00 00 00 */	cmplwi r0, 0
/* 803720B8 0036EFF8  41 82 00 20 */	beq .L_803720D8
/* 803720BC 0036EFFC  80 1E 02 30 */	lwz r0, 0x230(r30)
/* 803720C0 0036F000  2C 00 00 03 */	cmpwi r0, 3
/* 803720C4 0036F004  41 81 00 14 */	bgt .L_803720D8
/* 803720C8 0036F008  80 7E 00 E4 */	lwz r3, 0xe4(r30)
/* 803720CC 0036F00C  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 803720D0 0036F010  80 63 00 34 */	lwz r3, 0x34(r3)
/* 803720D4 0036F014  4B F9 35 D5 */	bl setSpeed__Q32og6Screen9AnimGroupFf
.L_803720D8:
/* 803720D8 0036F018  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 803720DC 0036F01C  81 83 00 00 */	lwz r12, 0(r3)
/* 803720E0 0036F020  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803720E4 0036F024  7D 89 03 A6 */	mtctr r12
/* 803720E8 0036F028  4E 80 04 21 */	bctrl 
/* 803720EC 0036F02C  80 7E 00 B4 */	lwz r3, 0xb4(r30)
/* 803720F0 0036F030  81 83 00 00 */	lwz r12, 0(r3)
/* 803720F4 0036F034  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803720F8 0036F038  7D 89 03 A6 */	mtctr r12
/* 803720FC 0036F03C  4E 80 04 21 */	bctrl 
/* 80372100 0036F040  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 80372104 0036F044  81 83 00 00 */	lwz r12, 0(r3)
/* 80372108 0036F048  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037210C 0036F04C  7D 89 03 A6 */	mtctr r12
/* 80372110 0036F050  4E 80 04 21 */	bctrl 
/* 80372114 0036F054  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80372118 0036F058  81 83 00 00 */	lwz r12, 0(r3)
/* 8037211C 0036F05C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80372120 0036F060  7D 89 03 A6 */	mtctr r12
/* 80372124 0036F064  4E 80 04 21 */	bctrl 
/* 80372128 0036F068  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8037212C 0036F06C  81 83 00 00 */	lwz r12, 0(r3)
/* 80372130 0036F070  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80372134 0036F074  7D 89 03 A6 */	mtctr r12
/* 80372138 0036F078  4E 80 04 21 */	bctrl 
/* 8037213C 0036F07C  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80372140 0036F080  28 03 00 00 */	cmplwi r3, 0
/* 80372144 0036F084  41 82 00 14 */	beq .L_80372158
/* 80372148 0036F088  81 83 00 00 */	lwz r12, 0(r3)
/* 8037214C 0036F08C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80372150 0036F090  7D 89 03 A6 */	mtctr r12
/* 80372154 0036F094  4E 80 04 21 */	bctrl 
.L_80372158:
/* 80372158 0036F098  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8037215C 0036F09C  81 83 00 00 */	lwz r12, 0(r3)
/* 80372160 0036F0A0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80372164 0036F0A4  7D 89 03 A6 */	mtctr r12
/* 80372168 0036F0A8  4E 80 04 21 */	bctrl 
/* 8037216C 0036F0AC  80 7E 00 C8 */	lwz r3, 0xc8(r30)
/* 80372170 0036F0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80372174 0036F0B4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80372178 0036F0B8  7D 89 03 A6 */	mtctr r12
/* 8037217C 0036F0BC  4E 80 04 21 */	bctrl 
/* 80372180 0036F0C0  C0 4D 85 A4 */	lfs f2, mNewScale__Q28Morimura10TZukanBase@sda21(r13)
/* 80372184 0036F0C4  C0 22 24 34 */	lfs f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80372188 0036F0C8  C0 02 24 38 */	lfs f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8037218C 0036F0CC  EC 22 00 72 */	fmuls f1, f2, f1
/* 80372190 0036F0D0  80 7E 00 C8 */	lwz r3, 0xc8(r30)
/* 80372194 0036F0D4  EC 02 00 32 */	fmuls f0, f2, f0
/* 80372198 0036F0D8  D0 23 01 38 */	stfs f1, 0x138(r3)
/* 8037219C 0036F0DC  D0 03 01 3C */	stfs f0, 0x13c(r3)
/* 803721A0 0036F0E0  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 803721A4 0036F0E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803721A8 0036F0E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803721AC 0036F0EC  7D 89 03 A6 */	mtctr r12
/* 803721B0 0036F0F0  4E 80 04 21 */	bctrl 
/* 803721B4 0036F0F4  7F C3 F3 78 */	mr r3, r30
/* 803721B8 0036F0F8  48 03 10 95 */	bl updateList__Q28Morimura11TScrollListFv
/* 803721BC 0036F0FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803721C0 0036F100  40 82 00 0C */	bne .L_803721CC
/* 803721C4 0036F104  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803721C8 0036F108  41 82 00 C4 */	beq .L_8037228C
.L_803721CC:
/* 803721CC 0036F10C  7F C3 F3 78 */	mr r3, r30
/* 803721D0 0036F110  81 9E 00 00 */	lwz r12, 0(r30)
/* 803721D4 0036F114  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 803721D8 0036F118  7D 89 03 A6 */	mtctr r12
/* 803721DC 0036F11C  4E 80 04 21 */	bctrl 
/* 803721E0 0036F120  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803721E4 0036F124  38 80 18 02 */	li r4, 0x1802
/* 803721E8 0036F128  38 A0 00 00 */	li r5, 0
/* 803721EC 0036F12C  4B FC 64 45 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803721F0 0036F130  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 803721F4 0036F134  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 803721F8 0036F138  54 00 10 3A */	slwi r0, r0, 2
/* 803721FC 0036F13C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80372200 0036F140  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80372204 0036F144  2C 00 00 00 */	cmpwi r0, 0
/* 80372208 0036F148  41 82 00 6C */	beq .L_80372274
/* 8037220C 0036F14C  3B 80 00 00 */	li r28, 0
/* 80372210 0036F150  3B A0 00 00 */	li r29, 0
/* 80372214 0036F154  48 00 00 50 */	b .L_80372264
.L_80372218:
/* 80372218 0036F158  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 8037221C 0036F15C  7C 63 E8 2E */	lwzx r3, r3, r29
/* 80372220 0036F160  48 03 03 F5 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80372224 0036F164  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80372228 0036F168  7C 7F 1B 78 */	mr r31, r3
/* 8037222C 0036F16C  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80372230 0036F170  54 00 10 3A */	slwi r0, r0, 2
/* 80372234 0036F174  7C 63 00 2E */	lwzx r3, r3, r0
/* 80372238 0036F178  48 03 03 DD */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 8037223C 0036F17C  7C 03 F8 00 */	cmpw r3, r31
/* 80372240 0036F180  40 82 00 1C */	bne .L_8037225C
/* 80372244 0036F184  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80372248 0036F188  C0 22 07 CC */	lfs f1, lbl_8051EB2C@sda21(r2)
/* 8037224C 0036F18C  7C 63 E8 2E */	lwzx r3, r3, r29
/* 80372250 0036F190  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80372254 0036F194  80 63 00 04 */	lwz r3, 4(r3)
/* 80372258 0036F198  48 03 09 3D */	bl startScaleUp__Q28Morimura9TIconInfoFf
.L_8037225C:
/* 8037225C 0036F19C  3B BD 00 04 */	addi r29, r29, 4
/* 80372260 0036F1A0  3B 9C 00 01 */	addi r28, r28, 1
.L_80372264:
/* 80372264 0036F1A4  A8 1E 00 8E */	lha r0, 0x8e(r30)
/* 80372268 0036F1A8  7C 1C 00 00 */	cmpw r28, r0
/* 8037226C 0036F1AC  41 80 FF AC */	blt .L_80372218
/* 80372270 0036F1B0  48 00 00 1C */	b .L_8037228C
.L_80372274:
/* 80372274 0036F1B4  80 0D 99 C8 */	lwz r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80372278 0036F1B8  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037227C 0036F1BC  54 00 10 3A */	slwi r0, r0, 2
/* 80372280 0036F1C0  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 80372284 0036F1C4  7C 63 00 2E */	lwzx r3, r3, r0
/* 80372288 0036F1C8  48 03 09 0D */	bl startScaleUp__Q28Morimura9TIconInfoFf
.L_8037228C:
/* 8037228C 0036F1CC  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 80372290 0036F1D0  80 7E 01 44 */	lwz r3, 0x144(r30)
/* 80372294 0036F1D4  80 1E 01 48 */	lwz r0, 0x148(r30)
/* 80372298 0036F1D8  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 8037229C 0036F1DC  90 61 00 14 */	stw r3, 0x14(r1)
/* 803722A0 0036F1E0  EF E1 00 28 */	fsubs f31, f1, f0
/* 803722A4 0036F1E4  90 01 00 18 */	stw r0, 0x18(r1)
/* 803722A8 0036F1E8  80 7E 01 4C */	lwz r3, 0x14c(r30)
/* 803722AC 0036F1EC  80 1E 01 50 */	lwz r0, 0x150(r30)
/* 803722B0 0036F1F0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803722B4 0036F1F4  90 01 00 20 */	stw r0, 0x20(r1)
/* 803722B8 0036F1F8  80 7E 01 E0 */	lwz r3, 0x1e0(r30)
/* 803722BC 0036F1FC  4B FB 6C C9 */	bl calc__Q32og6Screen8ScaleMgrFv
/* 803722C0 0036F200  C0 3E 01 54 */	lfs f1, 0x154(r30)
/* 803722C4 0036F204  38 81 00 14 */	addi r4, r1, 0x14
/* 803722C8 0036F208  C0 1E 01 44 */	lfs f0, 0x144(r30)
/* 803722CC 0036F20C  C0 A2 07 C4 */	lfs f5, lbl_8051EB24@sda21(r2)
/* 803722D0 0036F210  EC 01 00 28 */	fsubs f0, f1, f0
/* 803722D4 0036F214  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 803722D8 0036F218  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 803722DC 0036F21C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 803722E0 0036F220  EC 9F 00 32 */	fmuls f4, f31, f0
/* 803722E4 0036F224  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 803722E8 0036F228  EC 65 19 3A */	fmadds f3, f5, f4, f3
/* 803722EC 0036F22C  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 803722F0 0036F230  C0 9E 01 58 */	lfs f4, 0x158(r30)
/* 803722F4 0036F234  C0 7E 01 48 */	lfs f3, 0x148(r30)
/* 803722F8 0036F238  EC 64 18 28 */	fsubs f3, f4, f3
/* 803722FC 0036F23C  EC 7F 00 F2 */	fmuls f3, f31, f3
/* 80372300 0036F240  EC 45 10 FA */	fmadds f2, f5, f3, f2
/* 80372304 0036F244  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80372308 0036F248  C0 7E 01 5C */	lfs f3, 0x15c(r30)
/* 8037230C 0036F24C  C0 5E 01 4C */	lfs f2, 0x14c(r30)
/* 80372310 0036F250  EC 43 10 28 */	fsubs f2, f3, f2
/* 80372314 0036F254  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 80372318 0036F258  EC 25 08 BA */	fmadds f1, f5, f2, f1
/* 8037231C 0036F25C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80372320 0036F260  C0 5E 01 60 */	lfs f2, 0x160(r30)
/* 80372324 0036F264  C0 3E 01 50 */	lfs f1, 0x150(r30)
/* 80372328 0036F268  EC 22 08 28 */	fsubs f1, f2, f1
/* 8037232C 0036F26C  EC 3F 00 72 */	fmuls f1, f31, f1
/* 80372330 0036F270  EC 05 00 7A */	fmadds f0, f5, f1, f0
/* 80372334 0036F274  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80372338 0036F278  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 8037233C 0036F27C  4B CC 5B FD */	bl "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
/* 80372340 0036F280  80 7E 01 24 */	lwz r3, 0x124(r30)
/* 80372344 0036F284  38 81 00 14 */	addi r4, r1, 0x14
/* 80372348 0036F288  4B CC 5B F1 */	bl "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
/* 8037234C 0036F28C  80 7E 01 28 */	lwz r3, 0x128(r30)
/* 80372350 0036F290  38 81 00 14 */	addi r4, r1, 0x14
/* 80372354 0036F294  4B CC 5B E5 */	bl "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
/* 80372358 0036F298  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8037235C 0036F29C  28 03 00 00 */	cmplwi r3, 0
/* 80372360 0036F2A0  41 82 00 2C */	beq .L_8037238C
/* 80372364 0036F2A4  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 80372368 0036F2A8  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 8037236C 0036F2AC  EC 21 F8 2A */	fadds f1, f1, f31
/* 80372370 0036F2B0  EC 21 00 32 */	fmuls f1, f1, f0
/* 80372374 0036F2B4  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 80372378 0036F2B8  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 8037237C 0036F2BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80372380 0036F2C0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80372384 0036F2C4  7D 89 03 A6 */	mtctr r12
/* 80372388 0036F2C8  4E 80 04 21 */	bctrl 
.L_8037238C:
/* 8037238C 0036F2CC  88 1E 02 1C */	lbz r0, 0x21c(r30)
/* 80372390 0036F2D0  C3 C2 08 0C */	lfs f30, lbl_8051EB6C@sda21(r2)
/* 80372394 0036F2D4  28 00 00 00 */	cmplwi r0, 0
/* 80372398 0036F2D8  41 82 00 10 */	beq .L_803723A8
/* 8037239C 0036F2DC  80 7E 00 FC */	lwz r3, 0xfc(r30)
/* 803723A0 0036F2E0  4B F8 FB 21 */	bl calc__Q32og6Screen15ArrowAlphaBlinkFv
/* 803723A4 0036F2E4  FF C0 08 90 */	fmr f30, f1
.L_803723A8:
/* 803723A8 0036F2E8  7F C3 F3 78 */	mr r3, r30
/* 803723AC 0036F2EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803723B0 0036F2F0  81 8C 00 DC */	lwz r12, 0xdc(r12)
/* 803723B4 0036F2F4  7D 89 03 A6 */	mtctr r12
/* 803723B8 0036F2F8  4E 80 04 21 */	bctrl 
/* 803723BC 0036F2FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803723C0 0036F300  41 82 00 24 */	beq .L_803723E4
/* 803723C4 0036F304  C0 02 08 0C */	lfs f0, lbl_8051EB6C@sda21(r2)
/* 803723C8 0036F308  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803723CC 0036F30C  4C 40 13 82 */	cror 2, 0, 2
/* 803723D0 0036F310  40 82 00 1C */	bne .L_803723EC
/* 803723D4 0036F314  38 00 00 00 */	li r0, 0
/* 803723D8 0036F318  FF C0 00 90 */	fmr f30, f0
/* 803723DC 0036F31C  98 1E 02 1C */	stb r0, 0x21c(r30)
/* 803723E0 0036F320  48 00 00 0C */	b .L_803723EC
.L_803723E4:
/* 803723E4 0036F324  38 00 00 01 */	li r0, 1
/* 803723E8 0036F328  98 1E 02 1C */	stb r0, 0x21c(r30)
.L_803723EC:
/* 803723EC 0036F32C  C0 02 08 10 */	lfs f0, lbl_8051EB70@sda21(r2)
/* 803723F0 0036F330  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 803723F4 0036F334  EC 00 07 B2 */	fmuls f0, f0, f30
/* 803723F8 0036F338  80 63 00 08 */	lwz r3, 8(r3)
/* 803723FC 0036F33C  FC 00 00 1E */	fctiwz f0, f0
/* 80372400 0036F340  81 83 00 00 */	lwz r12, 0(r3)
/* 80372404 0036F344  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372408 0036F348  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8037240C 0036F34C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80372410 0036F350  7D 89 03 A6 */	mtctr r12
/* 80372414 0036F354  4E 80 04 21 */	bctrl 
/* 80372418 0036F358  80 9E 00 D8 */	lwz r4, 0xd8(r30)
/* 8037241C 0036F35C  80 7E 00 F0 */	lwz r3, 0xf0(r30)
/* 80372420 0036F360  80 04 00 20 */	lwz r0, 0x20(r4)
/* 80372424 0036F364  81 83 00 00 */	lwz r12, 0(r3)
/* 80372428 0036F368  90 01 00 10 */	stw r0, 0x10(r1)
/* 8037242C 0036F36C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372430 0036F370  88 81 00 13 */	lbz r4, 0x13(r1)
/* 80372434 0036F374  7D 89 03 A6 */	mtctr r12
/* 80372438 0036F378  4E 80 04 21 */	bctrl 
/* 8037243C 0036F37C  38 00 00 00 */	li r0, 0
/* 80372440 0036F380  38 81 00 08 */	addi r4, r1, 8
/* 80372444 0036F384  98 01 00 13 */	stb r0, 0x13(r1)
/* 80372448 0036F388  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8037244C 0036F38C  90 01 00 08 */	stw r0, 8(r1)
/* 80372450 0036F390  80 7E 00 F0 */	lwz r3, 0xf0(r30)
/* 80372454 0036F394  81 83 00 00 */	lwz r12, 0(r3)
/* 80372458 0036F398  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8037245C 0036F39C  7D 89 03 A6 */	mtctr r12
/* 80372460 0036F3A0  4E 80 04 21 */	bctrl 
/* 80372464 0036F3A4  83 FE 00 DC */	lwz r31, 0xdc(r30)
/* 80372468 0036F3A8  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8037246C 0036F3AC  2C 00 00 01 */	cmpwi r0, 1
/* 80372470 0036F3B0  40 80 00 1C */	bge .L_8037248C
/* 80372474 0036F3B4  3C 60 80 49 */	lis r3, lbl_8049255C@ha
/* 80372478 0036F3B8  38 80 00 58 */	li r4, 0x58
/* 8037247C 0036F3BC  38 63 25 5C */	addi r3, r3, lbl_8049255C@l
/* 80372480 0036F3C0  38 A0 00 00 */	li r5, 0
/* 80372484 0036F3C4  4C C6 31 82 */	crclr 6
/* 80372488 0036F3C8  4B CB 81 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037248C:
/* 8037248C 0036F3CC  80 7F 00 04 */	lwz r3, 4(r31)
/* 80372490 0036F3D0  38 A1 00 0C */	addi r5, r1, 0xc
/* 80372494 0036F3D4  38 80 00 00 */	li r4, 0
/* 80372498 0036F3D8  80 63 00 04 */	lwz r3, 4(r3)
/* 8037249C 0036F3DC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803724A0 0036F3E0  81 83 00 00 */	lwz r12, 0(r3)
/* 803724A4 0036F3E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803724A8 0036F3E8  7D 89 03 A6 */	mtctr r12
/* 803724AC 0036F3EC  4E 80 04 21 */	bctrl 
/* 803724B0 0036F3F0  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 803724B4 0036F3F4  88 81 00 0F */	lbz r4, 0xf(r1)
/* 803724B8 0036F3F8  80 63 00 44 */	lwz r3, 0x44(r3)
/* 803724BC 0036F3FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803724C0 0036F400  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803724C4 0036F404  7D 89 03 A6 */	mtctr r12
/* 803724C8 0036F408  4E 80 04 21 */	bctrl 
/* 803724CC 0036F40C  88 1E 02 17 */	lbz r0, 0x217(r30)
/* 803724D0 0036F410  28 00 00 00 */	cmplwi r0, 0
/* 803724D4 0036F414  40 82 00 2C */	bne .L_80372500
/* 803724D8 0036F418  C0 5E 01 FC */	lfs f2, 0x1fc(r30)
/* 803724DC 0036F41C  C0 22 07 E0 */	lfs f1, lbl_8051EB40@sda21(r2)
/* 803724E0 0036F420  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 803724E4 0036F424  EC 22 08 2A */	fadds f1, f2, f1
/* 803724E8 0036F428  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 803724EC 0036F42C  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 803724F0 0036F430  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803724F4 0036F434  40 81 00 34 */	ble .L_80372528
/* 803724F8 0036F438  D0 1E 01 FC */	stfs f0, 0x1fc(r30)
/* 803724FC 0036F43C  48 00 00 2C */	b .L_80372528
.L_80372500:
/* 80372500 0036F440  C0 5E 01 FC */	lfs f2, 0x1fc(r30)
/* 80372504 0036F444  C0 22 08 14 */	lfs f1, lbl_8051EB74@sda21(r2)
/* 80372508 0036F448  C0 02 08 18 */	lfs f0, lbl_8051EB78@sda21(r2)
/* 8037250C 0036F44C  EC 22 00 72 */	fmuls f1, f2, f1
/* 80372510 0036F450  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 80372514 0036F454  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 80372518 0036F458  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037251C 0036F45C  40 80 00 0C */	bge .L_80372528
/* 80372520 0036F460  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80372524 0036F464  D0 1E 01 FC */	stfs f0, 0x1fc(r30)
.L_80372528:
/* 80372528 0036F468  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 8037252C 0036F46C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80372530 0036F470  7C 00 00 34 */	cntlzw r0, r0
/* 80372534 0036F474  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80372538 0036F478  40 82 00 F4 */	bne .L_8037262C
/* 8037253C 0036F47C  48 00 9E 45 */	bl getPosRate__Q28Morimura12TZukanWindowFv
/* 80372540 0036F480  C0 02 07 F4 */	lfs f0, lbl_8051EB54@sda21(r2)
/* 80372544 0036F484  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80372548 0036F488  40 80 00 10 */	bge .L_80372558
/* 8037254C 0036F48C  C0 02 07 E4 */	lfs f0, lbl_8051EB44@sda21(r2)
/* 80372550 0036F490  EF C1 00 32 */	fmuls f30, f1, f0
/* 80372554 0036F494  48 00 00 08 */	b .L_8037255C
.L_80372558:
/* 80372558 0036F498  C3 C2 07 C4 */	lfs f30, lbl_8051EB24@sda21(r2)
.L_8037255C:
/* 8037255C 0036F49C  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 80372560 0036F4A0  3C A0 79 61 */	lis r5, 0x79616A69@ha
/* 80372564 0036F4A4  3C 80 00 6D */	lis r4, 0x006D675F@ha
/* 80372568 0036F4A8  80 63 00 08 */	lwz r3, 8(r3)
/* 8037256C 0036F4AC  38 C5 6A 69 */	addi r6, r5, 0x79616A69@l
/* 80372570 0036F4B0  38 A4 67 5F */	addi r5, r4, 0x006D675F@l
/* 80372574 0036F4B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80372578 0036F4B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037257C 0036F4BC  7D 89 03 A6 */	mtctr r12
/* 80372580 0036F4C0  4E 80 04 21 */	bctrl 
/* 80372584 0036F4C4  C0 02 08 10 */	lfs f0, lbl_8051EB70@sda21(r2)
/* 80372588 0036F4C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037258C 0036F4CC  EF C0 07 B2 */	fmuls f30, f0, f30
/* 80372590 0036F4D0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372594 0036F4D4  FC 00 F0 1E */	fctiwz f0, f30
/* 80372598 0036F4D8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8037259C 0036F4DC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 803725A0 0036F4E0  7D 89 03 A6 */	mtctr r12
/* 803725A4 0036F4E4  4E 80 04 21 */	bctrl 
/* 803725A8 0036F4E8  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 803725AC 0036F4EC  3C A0 5F 63 */	lis r5, 0x5F637531@ha
/* 803725B0 0036F4F0  3C 80 50 62 */	lis r4, 0x5062746E@ha
/* 803725B4 0036F4F4  80 63 00 08 */	lwz r3, 8(r3)
/* 803725B8 0036F4F8  38 C5 75 31 */	addi r6, r5, 0x5F637531@l
/* 803725BC 0036F4FC  38 A4 74 6E */	addi r5, r4, 0x5062746E@l
/* 803725C0 0036F500  81 83 00 00 */	lwz r12, 0(r3)
/* 803725C4 0036F504  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803725C8 0036F508  7D 89 03 A6 */	mtctr r12
/* 803725CC 0036F50C  4E 80 04 21 */	bctrl 
/* 803725D0 0036F510  FC 00 F0 1E */	fctiwz f0, f30
/* 803725D4 0036F514  81 83 00 00 */	lwz r12, 0(r3)
/* 803725D8 0036F518  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803725DC 0036F51C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803725E0 0036F520  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 803725E4 0036F524  7D 89 03 A6 */	mtctr r12
/* 803725E8 0036F528  4E 80 04 21 */	bctrl 
/* 803725EC 0036F52C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 803725F0 0036F530  FC 00 F0 1E */	fctiwz f0, f30
/* 803725F4 0036F534  81 83 00 00 */	lwz r12, 0(r3)
/* 803725F8 0036F538  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 803725FC 0036F53C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372600 0036F540  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80372604 0036F544  7D 89 03 A6 */	mtctr r12
/* 80372608 0036F548  4E 80 04 21 */	bctrl 
/* 8037260C 0036F54C  80 7E 01 00 */	lwz r3, 0x100(r30)
/* 80372610 0036F550  FC 00 F0 1E */	fctiwz f0, f30
/* 80372614 0036F554  81 83 00 00 */	lwz r12, 0(r3)
/* 80372618 0036F558  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8037261C 0036F55C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372620 0036F560  80 81 00 44 */	lwz r4, 0x44(r1)
/* 80372624 0036F564  7D 89 03 A6 */	mtctr r12
/* 80372628 0036F568  4E 80 04 21 */	bctrl 
.L_8037262C:
/* 8037262C 0036F56C  88 1E 02 1A */	lbz r0, 0x21a(r30)
/* 80372630 0036F570  28 00 00 00 */	cmplwi r0, 0
/* 80372634 0036F574  41 82 00 0C */	beq .L_80372640
/* 80372638 0036F578  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 8037263C 0036F57C  D0 1E 01 FC */	stfs f0, 0x1fc(r30)
.L_80372640:
/* 80372640 0036F580  C0 22 08 10 */	lfs f1, lbl_8051EB70@sda21(r2)
/* 80372644 0036F584  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 80372648 0036F588  80 7E 00 BC */	lwz r3, 0xbc(r30)
/* 8037264C 0036F58C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80372650 0036F590  80 63 00 08 */	lwz r3, 8(r3)
/* 80372654 0036F594  FC 00 00 1E */	fctiwz f0, f0
/* 80372658 0036F598  81 83 00 00 */	lwz r12, 0(r3)
/* 8037265C 0036F59C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372660 0036F5A0  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 80372664 0036F5A4  80 81 00 44 */	lwz r4, 0x44(r1)
/* 80372668 0036F5A8  7D 89 03 A6 */	mtctr r12
/* 8037266C 0036F5AC  4E 80 04 21 */	bctrl 
/* 80372670 0036F5B0  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 80372674 0036F5B4  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 80372678 0036F5B8  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 8037267C 0036F5BC  EC 01 00 28 */	fsubs f0, f1, f0
/* 80372680 0036F5C0  C0 22 08 10 */	lfs f1, lbl_8051EB70@sda21(r2)
/* 80372684 0036F5C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80372688 0036F5C8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037268C 0036F5CC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372690 0036F5D0  FC 00 00 1E */	fctiwz f0, f0
/* 80372694 0036F5D4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80372698 0036F5D8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8037269C 0036F5DC  7D 89 03 A6 */	mtctr r12
/* 803726A0 0036F5E0  4E 80 04 21 */	bctrl 
/* 803726A4 0036F5E4  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 803726A8 0036F5E8  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 803726AC 0036F5EC  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 803726B0 0036F5F0  EC 01 00 28 */	fsubs f0, f1, f0
/* 803726B4 0036F5F4  C0 22 08 10 */	lfs f1, lbl_8051EB70@sda21(r2)
/* 803726B8 0036F5F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803726BC 0036F5FC  EC 01 00 32 */	fmuls f0, f1, f0
/* 803726C0 0036F600  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803726C4 0036F604  FC 00 00 1E */	fctiwz f0, f0
/* 803726C8 0036F608  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 803726CC 0036F60C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 803726D0 0036F610  7D 89 03 A6 */	mtctr r12
/* 803726D4 0036F614  4E 80 04 21 */	bctrl 
/* 803726D8 0036F618  7F C3 F3 78 */	mr r3, r30
/* 803726DC 0036F61C  38 80 00 FF */	li r4, 0xff
/* 803726E0 0036F620  81 9E 00 00 */	lwz r12, 0(r30)
/* 803726E4 0036F624  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 803726E8 0036F628  7D 89 03 A6 */	mtctr r12
/* 803726EC 0036F62C  4E 80 04 21 */	bctrl 
/* 803726F0 0036F630  C0 5E 01 64 */	lfs f2, 0x164(r30)
/* 803726F4 0036F634  C0 1E 01 6C */	lfs f0, 0x16c(r30)
/* 803726F8 0036F638  C0 7E 01 68 */	lfs f3, 0x168(r30)
/* 803726FC 0036F63C  EC 20 10 28 */	fsubs f1, f0, f2
/* 80372700 0036F640  C0 1E 01 70 */	lfs f0, 0x170(r30)
/* 80372704 0036F644  80 7E 01 20 */	lwz r3, 0x120(r30)
/* 80372708 0036F648  EC 00 18 28 */	fsubs f0, f0, f3
/* 8037270C 0036F64C  EF DF 10 7A */	fmadds f30, f31, f1, f2
/* 80372710 0036F650  EF FF 18 3A */	fmadds f31, f31, f0, f3
/* 80372714 0036F654  D3 C3 00 D4 */	stfs f30, 0xd4(r3)
/* 80372718 0036F658  D3 E3 00 D8 */	stfs f31, 0xd8(r3)
/* 8037271C 0036F65C  81 83 00 00 */	lwz r12, 0(r3)
/* 80372720 0036F660  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80372724 0036F664  7D 89 03 A6 */	mtctr r12
/* 80372728 0036F668  4E 80 04 21 */	bctrl 
/* 8037272C 0036F66C  80 7E 01 24 */	lwz r3, 0x124(r30)
/* 80372730 0036F670  D3 C3 00 D4 */	stfs f30, 0xd4(r3)
/* 80372734 0036F674  D3 E3 00 D8 */	stfs f31, 0xd8(r3)
/* 80372738 0036F678  81 83 00 00 */	lwz r12, 0(r3)
/* 8037273C 0036F67C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80372740 0036F680  7D 89 03 A6 */	mtctr r12
/* 80372744 0036F684  4E 80 04 21 */	bctrl 
/* 80372748 0036F688  80 7E 01 28 */	lwz r3, 0x128(r30)
/* 8037274C 0036F68C  D3 C3 00 D4 */	stfs f30, 0xd4(r3)
/* 80372750 0036F690  D3 E3 00 D8 */	stfs f31, 0xd8(r3)
/* 80372754 0036F694  81 83 00 00 */	lwz r12, 0(r3)
/* 80372758 0036F698  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037275C 0036F69C  7D 89 03 A6 */	mtctr r12
/* 80372760 0036F6A0  4E 80 04 21 */	bctrl 
/* 80372764 0036F6A4  80 1E 01 98 */	lwz r0, 0x198(r30)
/* 80372768 0036F6A8  2C 00 00 01 */	cmpwi r0, 1
/* 8037276C 0036F6AC  40 82 00 48 */	bne .L_803727B4
/* 80372770 0036F6B0  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80372774 0036F6B4  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80372778 0036F6B8  54 00 10 3A */	slwi r0, r0, 2
/* 8037277C 0036F6BC  7C 63 00 2E */	lwzx r3, r3, r0
/* 80372780 0036F6C0  48 02 FE 3D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80372784 0036F6C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80372788 0036F6C8  7C 64 1B 78 */	mr r4, r3
/* 8037278C 0036F6CC  7F C3 F3 78 */	mr r3, r30
/* 80372790 0036F6D0  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80372794 0036F6D4  7D 89 03 A6 */	mtctr r12
/* 80372798 0036F6D8  4E 80 04 21 */	bctrl 
/* 8037279C 0036F6DC  90 7E 01 9C */	stw r3, 0x19c(r30)
/* 803727A0 0036F6E0  88 1E 01 7C */	lbz r0, 0x17c(r30)
/* 803727A4 0036F6E4  28 00 00 00 */	cmplwi r0, 0
/* 803727A8 0036F6E8  40 82 00 0C */	bne .L_803727B4
/* 803727AC 0036F6EC  38 00 FF FF */	li r0, -1
/* 803727B0 0036F6F0  90 1E 01 9C */	stw r0, 0x19c(r30)
.L_803727B4:
/* 803727B4 0036F6F4  7F C3 F3 78 */	mr r3, r30
/* 803727B8 0036F6F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803727BC 0036F6FC  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803727C0 0036F700  7D 89 03 A6 */	mtctr r12
/* 803727C4 0036F704  4E 80 04 21 */	bctrl 
/* 803727C8 0036F708  88 0D 99 CC */	lbz r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
/* 803727CC 0036F70C  28 00 00 00 */	cmplwi r0, 0
/* 803727D0 0036F710  41 82 00 3C */	beq .L_8037280C
/* 803727D4 0036F714  38 00 00 00 */	li r0, 0
/* 803727D8 0036F718  3C 60 80 51 */	lis r3, mScrollParm__Q28Morimura10TZukanBase@ha
/* 803727DC 0036F71C  98 0D 99 CC */	stb r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
/* 803727E0 0036F720  C4 03 40 1C */	lfsu f0, mScrollParm__Q28Morimura10TZukanBase@l(r3)
/* 803727E4 0036F724  80 9E 00 84 */	lwz r4, 0x84(r30)
/* 803727E8 0036F728  D0 04 00 00 */	stfs f0, 0(r4)
/* 803727EC 0036F72C  C0 03 00 04 */	lfs f0, 4(r3)
/* 803727F0 0036F730  D0 04 00 04 */	stfs f0, 4(r4)
/* 803727F4 0036F734  C0 03 00 08 */	lfs f0, 8(r3)
/* 803727F8 0036F738  D0 04 00 08 */	stfs f0, 8(r4)
/* 803727FC 0036F73C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80372800 0036F740  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80372804 0036F744  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80372808 0036F748  D0 04 00 10 */	stfs f0, 0x10(r4)
.L_8037280C:
/* 8037280C 0036F74C  7F C3 F3 78 */	mr r3, r30
/* 80372810 0036F750  81 9E 00 00 */	lwz r12, 0(r30)
/* 80372814 0036F754  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 80372818 0036F758  7D 89 03 A6 */	mtctr r12
/* 8037281C 0036F75C  4E 80 04 21 */	bctrl 
/* 80372820 0036F760  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80372824 0036F764  28 00 00 00 */	cmplwi r0, 0
/* 80372828 0036F768  41 82 00 44 */	beq .L_8037286C
/* 8037282C 0036F76C  88 1E 00 45 */	lbz r0, 0x45(r30)
/* 80372830 0036F770  28 00 00 00 */	cmplwi r0, 0
/* 80372834 0036F774  41 82 00 38 */	beq .L_8037286C
/* 80372838 0036F778  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 8037283C 0036F77C  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80372840 0036F780  54 00 10 3A */	slwi r0, r0, 2
/* 80372844 0036F784  7C 63 00 2E */	lwzx r3, r3, r0
/* 80372848 0036F788  48 02 FD 75 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037284C 0036F78C  7C 7F 1B 78 */	mr r31, r3
/* 80372850 0036F790  7F C3 F3 78 */	mr r3, r30
/* 80372854 0036F794  81 9E 00 00 */	lwz r12, 0(r30)
/* 80372858 0036F798  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8037285C 0036F79C  7D 89 03 A6 */	mtctr r12
/* 80372860 0036F7A0  4E 80 04 21 */	bctrl 
/* 80372864 0036F7A4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80372868 0036F7A8  93 E3 00 00 */	stw r31, 0(r3)
.L_8037286C:
/* 8037286C 0036F7AC  38 60 00 00 */	li r3, 0
/* 80372870 0036F7B0  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80372874 0036F7B4  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80372878 0036F7B8  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8037287C 0036F7BC  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80372880 0036F7C0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80372884 0036F7C4  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80372888 0036F7C8  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8037288C 0036F7CC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80372890 0036F7D0  83 81 00 50 */	lwz r28, 0x50(r1)
/* 80372894 0036F7D4  7C 08 03 A6 */	mtlr r0
/* 80372898 0036F7D8  38 21 00 80 */	addi r1, r1, 0x80
/* 8037289C 0036F7DC  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura10TZukanBaseFv

.fn isListShow__Q28Morimura11TScrollListFi, weak
/* 803728A0 0036F7E0  38 60 00 01 */	li r3, 1
/* 803728A4 0036F7E4  4E 80 00 20 */	blr 
.endfn isListShow__Q28Morimura11TScrollListFi

.fn updateButtonAlpha__Q28Morimura10TZukanBaseFUc, global
/* 803728A8 0036F7E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803728AC 0036F7EC  7C 08 02 A6 */	mflr r0
/* 803728B0 0036F7F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803728B4 0036F7F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803728B8 0036F7F8  7C 9F 23 78 */	mr r31, r4
/* 803728BC 0036F7FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803728C0 0036F800  7C 7E 1B 78 */	mr r30, r3
/* 803728C4 0036F804  88 03 02 19 */	lbz r0, 0x219(r3)
/* 803728C8 0036F808  28 00 00 00 */	cmplwi r0, 0
/* 803728CC 0036F80C  41 82 00 18 */	beq .L_803728E4
/* 803728D0 0036F810  C0 3E 01 F0 */	lfs f1, 0x1f0(r30)
/* 803728D4 0036F814  C0 02 07 F4 */	lfs f0, lbl_8051EB54@sda21(r2)
/* 803728D8 0036F818  EC 01 00 28 */	fsubs f0, f1, f0
/* 803728DC 0036F81C  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
/* 803728E0 0036F820  48 00 00 34 */	b .L_80372914
.L_803728E4:
/* 803728E4 0036F824  88 1E 01 7C */	lbz r0, 0x17c(r30)
/* 803728E8 0036F828  28 00 00 00 */	cmplwi r0, 0
/* 803728EC 0036F82C  41 82 00 18 */	beq .L_80372904
/* 803728F0 0036F830  C0 3E 01 F0 */	lfs f1, 0x1f0(r30)
/* 803728F4 0036F834  C0 02 07 F4 */	lfs f0, lbl_8051EB54@sda21(r2)
/* 803728F8 0036F838  EC 01 00 2A */	fadds f0, f1, f0
/* 803728FC 0036F83C  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
/* 80372900 0036F840  48 00 00 14 */	b .L_80372914
.L_80372904:
/* 80372904 0036F844  C0 3E 01 F0 */	lfs f1, 0x1f0(r30)
/* 80372908 0036F848  C0 02 07 F4 */	lfs f0, lbl_8051EB54@sda21(r2)
/* 8037290C 0036F84C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80372910 0036F850  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
.L_80372914:
/* 80372914 0036F854  88 1E 01 7C */	lbz r0, 0x17c(r30)
/* 80372918 0036F858  28 00 00 00 */	cmplwi r0, 0
/* 8037291C 0036F85C  41 82 00 58 */	beq .L_80372974
/* 80372920 0036F860  7F C3 F3 78 */	mr r3, r30
/* 80372924 0036F864  81 9E 00 00 */	lwz r12, 0(r30)
/* 80372928 0036F868  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8037292C 0036F86C  7D 89 03 A6 */	mtctr r12
/* 80372930 0036F870  4E 80 04 21 */	bctrl 
/* 80372934 0036F874  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80372938 0036F878  41 82 00 18 */	beq .L_80372950
/* 8037293C 0036F87C  C0 3E 01 F8 */	lfs f1, 0x1f8(r30)
/* 80372940 0036F880  C0 02 07 F4 */	lfs f0, lbl_8051EB54@sda21(r2)
/* 80372944 0036F884  EC 01 00 2A */	fadds f0, f1, f0
/* 80372948 0036F888  D0 1E 01 F8 */	stfs f0, 0x1f8(r30)
/* 8037294C 0036F88C  48 00 00 14 */	b .L_80372960
.L_80372950:
/* 80372950 0036F890  C0 3E 01 F8 */	lfs f1, 0x1f8(r30)
/* 80372954 0036F894  C0 02 07 F4 */	lfs f0, lbl_8051EB54@sda21(r2)
/* 80372958 0036F898  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037295C 0036F89C  D0 1E 01 F8 */	stfs f0, 0x1f8(r30)
.L_80372960:
/* 80372960 0036F8A0  C0 3E 01 F4 */	lfs f1, 0x1f4(r30)
/* 80372964 0036F8A4  C0 02 07 F4 */	lfs f0, lbl_8051EB54@sda21(r2)
/* 80372968 0036F8A8  EC 01 00 2A */	fadds f0, f1, f0
/* 8037296C 0036F8AC  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
/* 80372970 0036F8B0  48 00 00 20 */	b .L_80372990
.L_80372974:
/* 80372974 0036F8B4  C0 1E 01 F4 */	lfs f0, 0x1f4(r30)
/* 80372978 0036F8B8  C0 22 07 F4 */	lfs f1, lbl_8051EB54@sda21(r2)
/* 8037297C 0036F8BC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80372980 0036F8C0  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
/* 80372984 0036F8C4  C0 1E 01 F8 */	lfs f0, 0x1f8(r30)
/* 80372988 0036F8C8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8037298C 0036F8CC  D0 1E 01 F8 */	stfs f0, 0x1f8(r30)
.L_80372990:
/* 80372990 0036F8D0  C0 3E 01 F4 */	lfs f1, 0x1f4(r30)
/* 80372994 0036F8D4  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80372998 0036F8D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037299C 0036F8DC  40 81 00 08 */	ble .L_803729A4
/* 803729A0 0036F8E0  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
.L_803729A4:
/* 803729A4 0036F8E4  C0 3E 01 F4 */	lfs f1, 0x1f4(r30)
/* 803729A8 0036F8E8  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 803729AC 0036F8EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803729B0 0036F8F0  40 80 00 08 */	bge .L_803729B8
/* 803729B4 0036F8F4  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
.L_803729B8:
/* 803729B8 0036F8F8  C0 3E 01 F8 */	lfs f1, 0x1f8(r30)
/* 803729BC 0036F8FC  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 803729C0 0036F900  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803729C4 0036F904  40 81 00 08 */	ble .L_803729CC
/* 803729C8 0036F908  D0 1E 01 F8 */	stfs f0, 0x1f8(r30)
.L_803729CC:
/* 803729CC 0036F90C  C0 3E 01 F8 */	lfs f1, 0x1f8(r30)
/* 803729D0 0036F910  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 803729D4 0036F914  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803729D8 0036F918  40 80 00 08 */	bge .L_803729E0
/* 803729DC 0036F91C  D0 1E 01 F8 */	stfs f0, 0x1f8(r30)
.L_803729E0:
/* 803729E0 0036F920  C0 3E 01 F0 */	lfs f1, 0x1f0(r30)
/* 803729E4 0036F924  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 803729E8 0036F928  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803729EC 0036F92C  40 81 00 08 */	ble .L_803729F4
/* 803729F0 0036F930  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
.L_803729F4:
/* 803729F4 0036F934  C0 3E 01 F0 */	lfs f1, 0x1f0(r30)
/* 803729F8 0036F938  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 803729FC 0036F93C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80372A00 0036F940  4C 40 13 82 */	cror 2, 0, 2
/* 80372A04 0036F944  40 82 00 18 */	bne .L_80372A1C
/* 80372A08 0036F948  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
/* 80372A0C 0036F94C  7F C3 F3 78 */	mr r3, r30
/* 80372A10 0036F950  48 00 11 21 */	bl changeName__Q28Morimura10TZukanBaseFv
/* 80372A14 0036F954  38 00 00 00 */	li r0, 0
/* 80372A18 0036F958  98 1E 02 19 */	stb r0, 0x219(r30)
.L_80372A1C:
/* 80372A1C 0036F95C  88 1E 02 44 */	lbz r0, 0x244(r30)
/* 80372A20 0036F960  28 00 00 00 */	cmplwi r0, 0
/* 80372A24 0036F964  41 82 00 14 */	beq .L_80372A38
/* 80372A28 0036F968  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80372A2C 0036F96C  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
/* 80372A30 0036F970  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
/* 80372A34 0036F974  48 00 00 9C */	b .L_80372AD0
.L_80372A38:
/* 80372A38 0036F978  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 80372A3C 0036F97C  28 03 00 00 */	cmplwi r3, 0
/* 80372A40 0036F980  41 82 00 44 */	beq .L_80372A84
/* 80372A44 0036F984  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 80372A48 0036F988  3C 00 43 30 */	lis r0, 0x4330
/* 80372A4C 0036F98C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80372A50 0036F990  81 83 00 00 */	lwz r12, 0(r3)
/* 80372A54 0036F994  90 01 00 08 */	stw r0, 8(r1)
/* 80372A58 0036F998  C8 22 08 30 */	lfd f1, lbl_8051EB90@sda21(r2)
/* 80372A5C 0036F99C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80372A60 0036F9A0  C0 5E 01 F4 */	lfs f2, 0x1f4(r30)
/* 80372A64 0036F9A4  EC 00 08 28 */	fsubs f0, f0, f1
/* 80372A68 0036F9A8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372A6C 0036F9AC  EC 02 00 32 */	fmuls f0, f2, f0
/* 80372A70 0036F9B0  FC 00 00 1E */	fctiwz f0, f0
/* 80372A74 0036F9B4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80372A78 0036F9B8  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80372A7C 0036F9BC  7D 89 03 A6 */	mtctr r12
/* 80372A80 0036F9C0  4E 80 04 21 */	bctrl 
.L_80372A84:
/* 80372A84 0036F9C4  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 80372A88 0036F9C8  28 03 00 00 */	cmplwi r3, 0
/* 80372A8C 0036F9CC  41 82 00 44 */	beq .L_80372AD0
/* 80372A90 0036F9D0  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 80372A94 0036F9D4  3C 00 43 30 */	lis r0, 0x4330
/* 80372A98 0036F9D8  90 81 00 14 */	stw r4, 0x14(r1)
/* 80372A9C 0036F9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 80372AA0 0036F9E0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80372AA4 0036F9E4  C8 22 08 30 */	lfd f1, lbl_8051EB90@sda21(r2)
/* 80372AA8 0036F9E8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80372AAC 0036F9EC  C0 5E 01 F8 */	lfs f2, 0x1f8(r30)
/* 80372AB0 0036F9F0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80372AB4 0036F9F4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372AB8 0036F9F8  EC 02 00 32 */	fmuls f0, f2, f0
/* 80372ABC 0036F9FC  FC 00 00 1E */	fctiwz f0, f0
/* 80372AC0 0036FA00  D8 01 00 08 */	stfd f0, 8(r1)
/* 80372AC4 0036FA04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80372AC8 0036FA08  7D 89 03 A6 */	mtctr r12
/* 80372ACC 0036FA0C  4E 80 04 21 */	bctrl 
.L_80372AD0:
/* 80372AD0 0036FA10  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80372AD4 0036FA14  3C 00 43 30 */	lis r0, 0x4330
/* 80372AD8 0036FA18  90 61 00 14 */	stw r3, 0x14(r1)
/* 80372ADC 0036FA1C  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 80372AE0 0036FA20  90 01 00 10 */	stw r0, 0x10(r1)
/* 80372AE4 0036FA24  C8 22 08 30 */	lfd f1, lbl_8051EB90@sda21(r2)
/* 80372AE8 0036FA28  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80372AEC 0036FA2C  C0 5E 01 F0 */	lfs f2, 0x1f0(r30)
/* 80372AF0 0036FA30  EC 00 08 28 */	fsubs f0, f0, f1
/* 80372AF4 0036FA34  81 83 00 00 */	lwz r12, 0(r3)
/* 80372AF8 0036FA38  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372AFC 0036FA3C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80372B00 0036FA40  FC 00 00 1E */	fctiwz f0, f0
/* 80372B04 0036FA44  D8 01 00 08 */	stfd f0, 8(r1)
/* 80372B08 0036FA48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80372B0C 0036FA4C  7D 89 03 A6 */	mtctr r12
/* 80372B10 0036FA50  4E 80 04 21 */	bctrl 
/* 80372B14 0036FA54  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 80372B18 0036FA58  28 03 00 00 */	cmplwi r3, 0
/* 80372B1C 0036FA5C  41 82 00 2C */	beq .L_80372B48
/* 80372B20 0036FA60  C0 22 08 28 */	lfs f1, lbl_8051EB88@sda21(r2)
/* 80372B24 0036FA64  C0 1E 01 F0 */	lfs f0, 0x1f0(r30)
/* 80372B28 0036FA68  81 83 00 00 */	lwz r12, 0(r3)
/* 80372B2C 0036FA6C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80372B30 0036FA70  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372B34 0036FA74  FC 00 00 1E */	fctiwz f0, f0
/* 80372B38 0036FA78  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80372B3C 0036FA7C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80372B40 0036FA80  7D 89 03 A6 */	mtctr r12
/* 80372B44 0036FA84  4E 80 04 21 */	bctrl 
.L_80372B48:
/* 80372B48 0036FA88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80372B4C 0036FA8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80372B50 0036FA90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80372B54 0036FA94  7C 08 03 A6 */	mtlr r0
/* 80372B58 0036FA98  38 21 00 20 */	addi r1, r1, 0x20
/* 80372B5C 0036FA9C  4E 80 00 20 */	blr 
.endfn updateButtonAlpha__Q28Morimura10TZukanBaseFUc

.fn isComplete__Q28Morimura10TZukanBaseFv, weak
/* 80372B60 0036FAA0  88 63 02 28 */	lbz r3, 0x228(r3)
/* 80372B64 0036FAA4  4E 80 00 20 */	blr 
.endfn isComplete__Q28Morimura10TZukanBaseFv

.fn doDraw__Q28Morimura10TZukanBaseFR8Graphics, global
/* 80372B68 0036FAA8  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80372B6C 0036FAAC  7C 08 02 A6 */	mflr r0
/* 80372B70 0036FAB0  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80372B74 0036FAB4  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80372B78 0036FAB8  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80372B7C 0036FABC  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80372B80 0036FAC0  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80372B84 0036FAC4  BE E1 00 9C */	stmw r23, 0x9c(r1)
/* 80372B88 0036FAC8  7C 77 1B 78 */	mr r23, r3
/* 80372B8C 0036FACC  7C 98 23 78 */	mr r24, r4
/* 80372B90 0036FAD0  80 63 00 B8 */	lwz r3, 0xb8(r3)
/* 80372B94 0036FAD4  3B F8 01 90 */	addi r31, r24, 0x190
/* 80372B98 0036FAD8  7F E5 FB 78 */	mr r5, r31
/* 80372B9C 0036FADC  81 83 00 00 */	lwz r12, 0(r3)
/* 80372BA0 0036FAE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80372BA4 0036FAE4  7D 89 03 A6 */	mtctr r12
/* 80372BA8 0036FAE8  4E 80 04 21 */	bctrl 
/* 80372BAC 0036FAEC  C3 F7 01 A4 */	lfs f31, 0x1a4(r23)
/* 80372BB0 0036FAF0  C0 17 01 AC */	lfs f0, 0x1ac(r23)
/* 80372BB4 0036FAF4  C3 D7 01 A0 */	lfs f30, 0x1a0(r23)
/* 80372BB8 0036FAF8  EC 20 F8 28 */	fsubs f1, f0, f31
/* 80372BBC 0036FAFC  4B D4 EF 91 */	bl __cvt_fp2unsigned
/* 80372BC0 0036FB00  C0 17 01 A8 */	lfs f0, 0x1a8(r23)
/* 80372BC4 0036FB04  7C 7B 1B 78 */	mr r27, r3
/* 80372BC8 0036FB08  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80372BCC 0036FB0C  4B D4 EF 81 */	bl __cvt_fp2unsigned
/* 80372BD0 0036FB10  FC 20 F8 90 */	fmr f1, f31
/* 80372BD4 0036FB14  7C 7A 1B 78 */	mr r26, r3
/* 80372BD8 0036FB18  4B D4 EF 75 */	bl __cvt_fp2unsigned
/* 80372BDC 0036FB1C  FC 20 F0 90 */	fmr f1, f30
/* 80372BE0 0036FB20  7C 79 1B 78 */	mr r25, r3
/* 80372BE4 0036FB24  4B D4 EF 69 */	bl __cvt_fp2unsigned
/* 80372BE8 0036FB28  7F 24 CB 78 */	mr r4, r25
/* 80372BEC 0036FB2C  7F 45 D3 78 */	mr r5, r26
/* 80372BF0 0036FB30  7F 66 DB 78 */	mr r6, r27
/* 80372BF4 0036FB34  4B D7 6B E5 */	bl GXSetScissor
/* 80372BF8 0036FB38  80 77 00 B4 */	lwz r3, 0xb4(r23)
/* 80372BFC 0036FB3C  7F 04 C3 78 */	mr r4, r24
/* 80372C00 0036FB40  7F E5 FB 78 */	mr r5, r31
/* 80372C04 0036FB44  81 83 00 00 */	lwz r12, 0(r3)
/* 80372C08 0036FB48  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80372C0C 0036FB4C  7D 89 03 A6 */	mtctr r12
/* 80372C10 0036FB50  4E 80 04 21 */	bctrl 
/* 80372C14 0036FB54  80 77 00 C8 */	lwz r3, 0xc8(r23)
/* 80372C18 0036FB58  7F 04 C3 78 */	mr r4, r24
/* 80372C1C 0036FB5C  7F E5 FB 78 */	mr r5, r31
/* 80372C20 0036FB60  81 83 00 00 */	lwz r12, 0(r3)
/* 80372C24 0036FB64  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80372C28 0036FB68  7D 89 03 A6 */	mtctr r12
/* 80372C2C 0036FB6C  4E 80 04 21 */	bctrl 
/* 80372C30 0036FB70  3B 40 00 00 */	li r26, 0
/* 80372C34 0036FB74  3B A0 00 00 */	li r29, 0
/* 80372C38 0036FB78  3B 8D 99 00 */	addi r28, r13, mNewOffset__Q28Morimura10TZukanBase@sda21
/* 80372C3C 0036FB7C  3B 6D 99 08 */	addi r27, r13, mLargeNewOffset__Q28Morimura10TZukanBase@sda21
/* 80372C40 0036FB80  48 00 01 A0 */	b .L_80372DE0
.L_80372C44:
/* 80372C44 0036FB84  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80372C48 0036FB88  7C 63 E8 2E */	lwzx r3, r3, r29
/* 80372C4C 0036FB8C  80 83 00 04 */	lwz r4, 4(r3)
/* 80372C50 0036FB90  88 04 00 B0 */	lbz r0, 0xb0(r4)
/* 80372C54 0036FB94  28 00 00 00 */	cmplwi r0, 0
/* 80372C58 0036FB98  41 82 01 80 */	beq .L_80372DD8
/* 80372C5C 0036FB9C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80372C60 0036FBA0  2C 00 00 00 */	cmpwi r0, 0
/* 80372C64 0036FBA4  40 82 00 D8 */	bne .L_80372D3C
/* 80372C68 0036FBA8  3B 20 00 00 */	li r25, 0
/* 80372C6C 0036FBAC  3B C0 00 00 */	li r30, 0
.L_80372C70:
/* 80372C70 0036FBB0  80 17 00 88 */	lwz r0, 0x88(r23)
/* 80372C74 0036FBB4  7C 7D 00 2E */	lwzx r3, r29, r0
/* 80372C78 0036FBB8  48 02 F9 9D */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80372C7C 0036FBBC  80 17 00 88 */	lwz r0, 0x88(r23)
/* 80372C80 0036FBC0  7C 83 CA 14 */	add r4, r3, r25
/* 80372C84 0036FBC4  7C 7D 00 2E */	lwzx r3, r29, r0
/* 80372C88 0036FBC8  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80372C8C 0036FBCC  7C 63 F0 2E */	lwzx r3, r3, r30
/* 80372C90 0036FBD0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80372C94 0036FBD4  28 00 00 00 */	cmplwi r0, 0
/* 80372C98 0036FBD8  41 82 00 90 */	beq .L_80372D28
/* 80372C9C 0036FBDC  81 97 00 00 */	lwz r12, 0(r23)
/* 80372CA0 0036FBE0  7E E3 BB 78 */	mr r3, r23
/* 80372CA4 0036FBE4  38 A0 00 00 */	li r5, 0
/* 80372CA8 0036FBE8  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80372CAC 0036FBEC  7D 89 03 A6 */	mtctr r12
/* 80372CB0 0036FBF0  4E 80 04 21 */	bctrl 
/* 80372CB4 0036FBF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80372CB8 0036FBF8  41 82 00 70 */	beq .L_80372D28
/* 80372CBC 0036FBFC  80 17 00 88 */	lwz r0, 0x88(r23)
/* 80372CC0 0036FC00  7F 04 C3 78 */	mr r4, r24
/* 80372CC4 0036FC04  C0 2D 99 00 */	lfs f1, mNewOffset__Q28Morimura10TZukanBase@sda21(r13)
/* 80372CC8 0036FC08  7F E5 FB 78 */	mr r5, r31
/* 80372CCC 0036FC0C  7C DD 00 2E */	lwzx r6, r29, r0
/* 80372CD0 0036FC10  80 77 00 F0 */	lwz r3, 0xf0(r23)
/* 80372CD4 0036FC14  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 80372CD8 0036FC18  7C C6 F0 2E */	lwzx r6, r6, r30
/* 80372CDC 0036FC1C  80 C6 00 10 */	lwz r6, 0x10(r6)
/* 80372CE0 0036FC20  C0 06 00 8C */	lfs f0, 0x8c(r6)
/* 80372CE4 0036FC24  EC 01 00 2A */	fadds f0, f1, f0
/* 80372CE8 0036FC28  D0 03 00 8C */	stfs f0, 0x8c(r3)
/* 80372CEC 0036FC2C  80 17 00 88 */	lwz r0, 0x88(r23)
/* 80372CF0 0036FC30  C0 3C 00 04 */	lfs f1, 4(r28)
/* 80372CF4 0036FC34  7C DD 00 2E */	lwzx r6, r29, r0
/* 80372CF8 0036FC38  80 77 00 F0 */	lwz r3, 0xf0(r23)
/* 80372CFC 0036FC3C  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 80372D00 0036FC40  7C C6 F0 2E */	lwzx r6, r6, r30
/* 80372D04 0036FC44  80 C6 00 10 */	lwz r6, 0x10(r6)
/* 80372D08 0036FC48  C0 06 00 9C */	lfs f0, 0x9c(r6)
/* 80372D0C 0036FC4C  EC 01 00 2A */	fadds f0, f1, f0
/* 80372D10 0036FC50  D0 03 00 9C */	stfs f0, 0x9c(r3)
/* 80372D14 0036FC54  80 77 00 CC */	lwz r3, 0xcc(r23)
/* 80372D18 0036FC58  81 83 00 00 */	lwz r12, 0(r3)
/* 80372D1C 0036FC5C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80372D20 0036FC60  7D 89 03 A6 */	mtctr r12
/* 80372D24 0036FC64  4E 80 04 21 */	bctrl 
.L_80372D28:
/* 80372D28 0036FC68  3B 39 00 01 */	addi r25, r25, 1
/* 80372D2C 0036FC6C  3B DE 00 04 */	addi r30, r30, 4
/* 80372D30 0036FC70  2C 19 00 03 */	cmpwi r25, 3
/* 80372D34 0036FC74  41 80 FF 3C */	blt .L_80372C70
/* 80372D38 0036FC78  48 00 00 A0 */	b .L_80372DD8
.L_80372D3C:
/* 80372D3C 0036FC7C  2C 00 00 01 */	cmpwi r0, 1
/* 80372D40 0036FC80  41 82 00 98 */	beq .L_80372DD8
/* 80372D44 0036FC84  48 02 F8 D1 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80372D48 0036FC88  81 97 00 00 */	lwz r12, 0(r23)
/* 80372D4C 0036FC8C  7C 64 1B 78 */	mr r4, r3
/* 80372D50 0036FC90  7E E3 BB 78 */	mr r3, r23
/* 80372D54 0036FC94  38 A0 00 00 */	li r5, 0
/* 80372D58 0036FC98  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80372D5C 0036FC9C  7D 89 03 A6 */	mtctr r12
/* 80372D60 0036FCA0  4E 80 04 21 */	bctrl 
/* 80372D64 0036FCA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80372D68 0036FCA8  41 82 00 70 */	beq .L_80372DD8
/* 80372D6C 0036FCAC  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80372D70 0036FCB0  7F 04 C3 78 */	mr r4, r24
/* 80372D74 0036FCB4  C0 2D 99 08 */	lfs f1, mLargeNewOffset__Q28Morimura10TZukanBase@sda21(r13)
/* 80372D78 0036FCB8  7F E5 FB 78 */	mr r5, r31
/* 80372D7C 0036FCBC  7C C3 E8 2E */	lwzx r6, r3, r29
/* 80372D80 0036FCC0  80 77 00 F0 */	lwz r3, 0xf0(r23)
/* 80372D84 0036FCC4  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 80372D88 0036FCC8  80 C6 00 04 */	lwz r6, 4(r6)
/* 80372D8C 0036FCCC  80 C6 00 10 */	lwz r6, 0x10(r6)
/* 80372D90 0036FCD0  C0 06 00 8C */	lfs f0, 0x8c(r6)
/* 80372D94 0036FCD4  EC 01 00 2A */	fadds f0, f1, f0
/* 80372D98 0036FCD8  D0 03 00 8C */	stfs f0, 0x8c(r3)
/* 80372D9C 0036FCDC  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80372DA0 0036FCE0  C0 3B 00 04 */	lfs f1, 4(r27)
/* 80372DA4 0036FCE4  7C C3 E8 2E */	lwzx r6, r3, r29
/* 80372DA8 0036FCE8  80 77 00 F0 */	lwz r3, 0xf0(r23)
/* 80372DAC 0036FCEC  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 80372DB0 0036FCF0  80 C6 00 04 */	lwz r6, 4(r6)
/* 80372DB4 0036FCF4  80 C6 00 10 */	lwz r6, 0x10(r6)
/* 80372DB8 0036FCF8  C0 06 00 9C */	lfs f0, 0x9c(r6)
/* 80372DBC 0036FCFC  EC 01 00 2A */	fadds f0, f1, f0
/* 80372DC0 0036FD00  D0 03 00 9C */	stfs f0, 0x9c(r3)
/* 80372DC4 0036FD04  80 77 00 CC */	lwz r3, 0xcc(r23)
/* 80372DC8 0036FD08  81 83 00 00 */	lwz r12, 0(r3)
/* 80372DCC 0036FD0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80372DD0 0036FD10  7D 89 03 A6 */	mtctr r12
/* 80372DD4 0036FD14  4E 80 04 21 */	bctrl 
.L_80372DD8:
/* 80372DD8 0036FD18  3B BD 00 04 */	addi r29, r29, 4
/* 80372DDC 0036FD1C  3B 5A 00 01 */	addi r26, r26, 1
.L_80372DE0:
/* 80372DE0 0036FD20  A8 17 00 8E */	lha r0, 0x8e(r23)
/* 80372DE4 0036FD24  7C 1A 00 00 */	cmpw r26, r0
/* 80372DE8 0036FD28  41 80 FE 5C */	blt .L_80372C44
/* 80372DEC 0036FD2C  38 60 00 00 */	li r3, 0
/* 80372DF0 0036FD30  38 80 00 00 */	li r4, 0
/* 80372DF4 0036FD34  38 A0 02 80 */	li r5, 0x280
/* 80372DF8 0036FD38  38 C0 01 E0 */	li r6, 0x1e0
/* 80372DFC 0036FD3C  4B D7 69 DD */	bl GXSetScissor
/* 80372E00 0036FD40  80 77 00 7C */	lwz r3, 0x7c(r23)
/* 80372E04 0036FD44  7F 04 C3 78 */	mr r4, r24
/* 80372E08 0036FD48  7F E5 FB 78 */	mr r5, r31
/* 80372E0C 0036FD4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80372E10 0036FD50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80372E14 0036FD54  7D 89 03 A6 */	mtctr r12
/* 80372E18 0036FD58  4E 80 04 21 */	bctrl 
/* 80372E1C 0036FD5C  80 77 00 C0 */	lwz r3, 0xc0(r23)
/* 80372E20 0036FD60  28 03 00 00 */	cmplwi r3, 0
/* 80372E24 0036FD64  41 82 00 1C */	beq .L_80372E40
/* 80372E28 0036FD68  81 83 00 00 */	lwz r12, 0(r3)
/* 80372E2C 0036FD6C  7F 04 C3 78 */	mr r4, r24
/* 80372E30 0036FD70  7F E5 FB 78 */	mr r5, r31
/* 80372E34 0036FD74  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80372E38 0036FD78  7D 89 03 A6 */	mtctr r12
/* 80372E3C 0036FD7C  4E 80 04 21 */	bctrl 
.L_80372E40:
/* 80372E40 0036FD80  88 17 02 44 */	lbz r0, 0x244(r23)
/* 80372E44 0036FD84  28 00 00 00 */	cmplwi r0, 0
/* 80372E48 0036FD88  41 82 00 20 */	beq .L_80372E68
/* 80372E4C 0036FD8C  80 77 00 BC */	lwz r3, 0xbc(r23)
/* 80372E50 0036FD90  7F 04 C3 78 */	mr r4, r24
/* 80372E54 0036FD94  7F E5 FB 78 */	mr r5, r31
/* 80372E58 0036FD98  81 83 00 00 */	lwz r12, 0(r3)
/* 80372E5C 0036FD9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80372E60 0036FDA0  7D 89 03 A6 */	mtctr r12
/* 80372E64 0036FDA4  4E 80 04 21 */	bctrl 
.L_80372E68:
/* 80372E68 0036FDA8  80 77 00 DC */	lwz r3, 0xdc(r23)
/* 80372E6C 0036FDAC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80372E70 0036FDB0  7C 60 00 34 */	cntlzw r0, r3
/* 80372E74 0036FDB4  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80372E78 0036FDB8  40 82 01 48 */	bne .L_80372FC0
/* 80372E7C 0036FDBC  2C 03 00 03 */	cmpwi r3, 3
/* 80372E80 0036FDC0  40 82 00 28 */	bne .L_80372EA8
/* 80372E84 0036FDC4  88 77 02 14 */	lbz r3, 0x214(r23)
/* 80372E88 0036FDC8  28 03 00 14 */	cmplwi r3, 0x14
/* 80372E8C 0036FDCC  40 81 00 10 */	ble .L_80372E9C
/* 80372E90 0036FDD0  38 03 FF EC */	addi r0, r3, -20
/* 80372E94 0036FDD4  98 17 02 14 */	stb r0, 0x214(r23)
/* 80372E98 0036FDD8  48 00 00 30 */	b .L_80372EC8
.L_80372E9C:
/* 80372E9C 0036FDDC  38 00 00 00 */	li r0, 0
/* 80372EA0 0036FDE0  98 17 02 14 */	stb r0, 0x214(r23)
/* 80372EA4 0036FDE4  48 00 00 24 */	b .L_80372EC8
.L_80372EA8:
/* 80372EA8 0036FDE8  88 77 02 14 */	lbz r3, 0x214(r23)
/* 80372EAC 0036FDEC  38 03 00 14 */	addi r0, r3, 0x14
/* 80372EB0 0036FDF0  98 17 02 14 */	stb r0, 0x214(r23)
/* 80372EB4 0036FDF4  88 17 02 14 */	lbz r0, 0x214(r23)
/* 80372EB8 0036FDF8  28 00 00 C8 */	cmplwi r0, 0xc8
/* 80372EBC 0036FDFC  40 81 00 0C */	ble .L_80372EC8
/* 80372EC0 0036FE00  38 00 00 C8 */	li r0, 0xc8
/* 80372EC4 0036FE04  98 17 02 14 */	stb r0, 0x214(r23)
.L_80372EC8:
/* 80372EC8 0036FE08  38 00 FF FF */	li r0, -1
/* 80372ECC 0036FE0C  39 00 00 00 */	li r8, 0
/* 80372ED0 0036FE10  90 01 00 48 */	stw r0, 0x48(r1)
/* 80372ED4 0036FE14  7F E3 FB 78 */	mr r3, r31
/* 80372ED8 0036FE18  88 17 02 14 */	lbz r0, 0x214(r23)
/* 80372EDC 0036FE1C  38 81 00 34 */	addi r4, r1, 0x34
/* 80372EE0 0036FE20  99 01 00 4B */	stb r8, 0x4b(r1)
/* 80372EE4 0036FE24  38 A1 00 38 */	addi r5, r1, 0x38
/* 80372EE8 0036FE28  38 C1 00 3C */	addi r6, r1, 0x3c
/* 80372EEC 0036FE2C  38 E1 00 40 */	addi r7, r1, 0x40
/* 80372EF0 0036FE30  99 01 00 48 */	stb r8, 0x48(r1)
/* 80372EF4 0036FE34  99 01 00 49 */	stb r8, 0x49(r1)
/* 80372EF8 0036FE38  99 01 00 4A */	stb r8, 0x4a(r1)
/* 80372EFC 0036FE3C  98 01 00 4B */	stb r0, 0x4b(r1)
/* 80372F00 0036FE40  80 01 00 48 */	lwz r0, 0x48(r1)
/* 80372F04 0036FE44  90 01 00 10 */	stw r0, 0x10(r1)
/* 80372F08 0036FE48  90 01 00 40 */	stw r0, 0x40(r1)
/* 80372F0C 0036FE4C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80372F10 0036FE50  90 01 00 38 */	stw r0, 0x38(r1)
/* 80372F14 0036FE54  90 01 00 34 */	stw r0, 0x34(r1)
/* 80372F18 0036FE58  4B CC 37 75 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 80372F1C 0036FE5C  38 60 00 00 */	li r3, 0
/* 80372F20 0036FE60  4B D7 62 39 */	bl GXSetAlphaUpdate
/* 80372F24 0036FE64  48 0B 03 01 */	bl getRenderModeObj__6SystemFv
/* 80372F28 0036FE68  A3 23 00 06 */	lhz r25, 6(r3)
/* 80372F2C 0036FE6C  48 0B 02 F9 */	bl getRenderModeObj__6SystemFv
/* 80372F30 0036FE70  A0 83 00 04 */	lhz r4, 4(r3)
/* 80372F34 0036FE74  3C 00 43 30 */	lis r0, 0x4330
/* 80372F38 0036FE78  C0 62 07 C0 */	lfs f3, lbl_8051EB20@sda21(r2)
/* 80372F3C 0036FE7C  7F E3 FB 78 */	mr r3, r31
/* 80372F40 0036FE80  90 81 00 84 */	stw r4, 0x84(r1)
/* 80372F44 0036FE84  38 81 00 6C */	addi r4, r1, 0x6c
/* 80372F48 0036FE88  C8 42 08 30 */	lfd f2, lbl_8051EB90@sda21(r2)
/* 80372F4C 0036FE8C  90 01 00 80 */	stw r0, 0x80(r1)
/* 80372F50 0036FE90  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80372F54 0036FE94  93 21 00 8C */	stw r25, 0x8c(r1)
/* 80372F58 0036FE98  EC 20 10 28 */	fsubs f1, f0, f2
/* 80372F5C 0036FE9C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80372F60 0036FEA0  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80372F64 0036FEA4  EC 23 08 2A */	fadds f1, f3, f1
/* 80372F68 0036FEA8  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 80372F6C 0036FEAC  EC 00 10 28 */	fsubs f0, f0, f2
/* 80372F70 0036FEB0  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 80372F74 0036FEB4  EC 03 00 2A */	fadds f0, f3, f0
/* 80372F78 0036FEB8  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 80372F7C 0036FEBC  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80372F80 0036FEC0  4B CC 38 55 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 80372F84 0036FEC4  38 60 00 01 */	li r3, 1
/* 80372F88 0036FEC8  4B D7 61 D1 */	bl GXSetAlphaUpdate
/* 80372F8C 0036FECC  80 77 01 08 */	lwz r3, 0x108(r23)
/* 80372F90 0036FED0  88 97 02 14 */	lbz r4, 0x214(r23)
/* 80372F94 0036FED4  81 83 00 00 */	lwz r12, 0(r3)
/* 80372F98 0036FED8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80372F9C 0036FEDC  7D 89 03 A6 */	mtctr r12
/* 80372FA0 0036FEE0  4E 80 04 21 */	bctrl 
/* 80372FA4 0036FEE4  80 77 00 D4 */	lwz r3, 0xd4(r23)
/* 80372FA8 0036FEE8  7F 04 C3 78 */	mr r4, r24
/* 80372FAC 0036FEEC  7F E5 FB 78 */	mr r5, r31
/* 80372FB0 0036FEF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80372FB4 0036FEF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80372FB8 0036FEF8  7D 89 03 A6 */	mtctr r12
/* 80372FBC 0036FEFC  4E 80 04 21 */	bctrl 
.L_80372FC0:
/* 80372FC0 0036FF00  88 17 02 44 */	lbz r0, 0x244(r23)
/* 80372FC4 0036FF04  28 00 00 00 */	cmplwi r0, 0
/* 80372FC8 0036FF08  41 82 00 20 */	beq .L_80372FE8
/* 80372FCC 0036FF0C  7E E3 BB 78 */	mr r3, r23
/* 80372FD0 0036FF10  7F 04 C3 78 */	mr r4, r24
/* 80372FD4 0036FF14  81 97 00 00 */	lwz r12, 0(r23)
/* 80372FD8 0036FF18  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80372FDC 0036FF1C  7D 89 03 A6 */	mtctr r12
/* 80372FE0 0036FF20  4E 80 04 21 */	bctrl 
/* 80372FE4 0036FF24  48 00 00 3C */	b .L_80373020
.L_80372FE8:
/* 80372FE8 0036FF28  80 77 00 DC */	lwz r3, 0xdc(r23)
/* 80372FEC 0036FF2C  7F 04 C3 78 */	mr r4, r24
/* 80372FF0 0036FF30  7F E5 FB 78 */	mr r5, r31
/* 80372FF4 0036FF34  81 83 00 00 */	lwz r12, 0(r3)
/* 80372FF8 0036FF38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80372FFC 0036FF3C  7D 89 03 A6 */	mtctr r12
/* 80373000 0036FF40  4E 80 04 21 */	bctrl 
/* 80373004 0036FF44  80 77 00 BC */	lwz r3, 0xbc(r23)
/* 80373008 0036FF48  7F 04 C3 78 */	mr r4, r24
/* 8037300C 0036FF4C  7F E5 FB 78 */	mr r5, r31
/* 80373010 0036FF50  81 83 00 00 */	lwz r12, 0(r3)
/* 80373014 0036FF54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80373018 0036FF58  7D 89 03 A6 */	mtctr r12
/* 8037301C 0036FF5C  4E 80 04 21 */	bctrl 
.L_80373020:
/* 80373020 0036FF60  80 77 00 C4 */	lwz r3, 0xc4(r23)
/* 80373024 0036FF64  7F 04 C3 78 */	mr r4, r24
/* 80373028 0036FF68  7F E5 FB 78 */	mr r5, r31
/* 8037302C 0036FF6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80373030 0036FF70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80373034 0036FF74  7D 89 03 A6 */	mtctr r12
/* 80373038 0036FF78  4E 80 04 21 */	bctrl 
/* 8037303C 0036FF7C  80 97 01 30 */	lwz r4, 0x130(r23)
/* 80373040 0036FF80  38 00 00 01 */	li r0, 1
/* 80373044 0036FF84  7F E3 FB 78 */	mr r3, r31
/* 80373048 0036FF88  98 04 00 B0 */	stb r0, 0xb0(r4)
/* 8037304C 0036FF8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80373050 0036FF90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80373054 0036FF94  7D 89 03 A6 */	mtctr r12
/* 80373058 0036FF98  4E 80 04 21 */	bctrl 
/* 8037305C 0036FF9C  7E E3 BB 78 */	mr r3, r23
/* 80373060 0036FFA0  38 80 FF FF */	li r4, -1
/* 80373064 0036FFA4  81 97 00 00 */	lwz r12, 0(r23)
/* 80373068 0036FFA8  38 00 00 00 */	li r0, 0
/* 8037306C 0036FFAC  90 81 00 44 */	stw r4, 0x44(r1)
/* 80373070 0036FFB0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80373074 0036FFB4  98 01 00 44 */	stb r0, 0x44(r1)
/* 80373078 0036FFB8  98 01 00 45 */	stb r0, 0x45(r1)
/* 8037307C 0036FFBC  98 01 00 46 */	stb r0, 0x46(r1)
/* 80373080 0036FFC0  98 01 00 47 */	stb r0, 0x47(r1)
/* 80373084 0036FFC4  7D 89 03 A6 */	mtctr r12
/* 80373088 0036FFC8  4E 80 04 21 */	bctrl 
/* 8037308C 0036FFCC  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80373090 0036FFD0  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 80373094 0036FFD4  28 00 00 00 */	cmplwi r0, 0
/* 80373098 0036FFD8  41 82 01 14 */	beq .L_803731AC
/* 8037309C 0036FFDC  7E E3 BB 78 */	mr r3, r23
/* 803730A0 0036FFE0  81 97 00 00 */	lwz r12, 0(r23)
/* 803730A4 0036FFE4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803730A8 0036FFE8  7D 89 03 A6 */	mtctr r12
/* 803730AC 0036FFEC  4E 80 04 21 */	bctrl 
/* 803730B0 0036FFF0  80 63 02 24 */	lwz r3, 0x224(r3)
/* 803730B4 0036FFF4  88 03 00 D5 */	lbz r0, 0xd5(r3)
/* 803730B8 0036FFF8  28 00 00 00 */	cmplwi r0, 0
/* 803730BC 0036FFFC  41 82 00 28 */	beq .L_803730E4
/* 803730C0 00370000  88 77 02 14 */	lbz r3, 0x214(r23)
/* 803730C4 00370004  38 03 00 14 */	addi r0, r3, 0x14
/* 803730C8 00370008  98 17 02 14 */	stb r0, 0x214(r23)
/* 803730CC 0037000C  88 17 02 14 */	lbz r0, 0x214(r23)
/* 803730D0 00370010  28 00 00 C8 */	cmplwi r0, 0xc8
/* 803730D4 00370014  40 81 00 30 */	ble .L_80373104
/* 803730D8 00370018  38 00 00 C8 */	li r0, 0xc8
/* 803730DC 0037001C  98 17 02 14 */	stb r0, 0x214(r23)
/* 803730E0 00370020  48 00 00 24 */	b .L_80373104
.L_803730E4:
/* 803730E4 00370024  88 77 02 14 */	lbz r3, 0x214(r23)
/* 803730E8 00370028  28 03 00 14 */	cmplwi r3, 0x14
/* 803730EC 0037002C  40 81 00 10 */	ble .L_803730FC
/* 803730F0 00370030  38 03 FF EC */	addi r0, r3, -20
/* 803730F4 00370034  98 17 02 14 */	stb r0, 0x214(r23)
/* 803730F8 00370038  48 00 00 0C */	b .L_80373104
.L_803730FC:
/* 803730FC 0037003C  38 00 00 00 */	li r0, 0
/* 80373100 00370040  98 17 02 14 */	stb r0, 0x214(r23)
.L_80373104:
/* 80373104 00370044  88 17 02 14 */	lbz r0, 0x214(r23)
/* 80373108 00370048  7F E3 FB 78 */	mr r3, r31
/* 8037310C 0037004C  38 81 00 24 */	addi r4, r1, 0x24
/* 80373110 00370050  38 A1 00 28 */	addi r5, r1, 0x28
/* 80373114 00370054  98 01 00 47 */	stb r0, 0x47(r1)
/* 80373118 00370058  38 C1 00 2C */	addi r6, r1, 0x2c
/* 8037311C 0037005C  38 E1 00 30 */	addi r7, r1, 0x30
/* 80373120 00370060  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80373124 00370064  90 01 00 0C */	stw r0, 0xc(r1)
/* 80373128 00370068  90 01 00 30 */	stw r0, 0x30(r1)
/* 8037312C 0037006C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80373130 00370070  90 01 00 28 */	stw r0, 0x28(r1)
/* 80373134 00370074  90 01 00 24 */	stw r0, 0x24(r1)
/* 80373138 00370078  4B CC 35 55 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8037313C 0037007C  38 60 00 00 */	li r3, 0
/* 80373140 00370080  4B D7 60 19 */	bl GXSetAlphaUpdate
/* 80373144 00370084  48 0B 00 E1 */	bl getRenderModeObj__6SystemFv
/* 80373148 00370088  A3 03 00 06 */	lhz r24, 6(r3)
/* 8037314C 0037008C  48 0B 00 D9 */	bl getRenderModeObj__6SystemFv
/* 80373150 00370090  A0 83 00 04 */	lhz r4, 4(r3)
/* 80373154 00370094  3C 00 43 30 */	lis r0, 0x4330
/* 80373158 00370098  C0 62 07 C0 */	lfs f3, lbl_8051EB20@sda21(r2)
/* 8037315C 0037009C  7F E3 FB 78 */	mr r3, r31
/* 80373160 003700A0  90 81 00 8C */	stw r4, 0x8c(r1)
/* 80373164 003700A4  38 81 00 5C */	addi r4, r1, 0x5c
/* 80373168 003700A8  C8 42 08 30 */	lfd f2, lbl_8051EB90@sda21(r2)
/* 8037316C 003700AC  90 01 00 88 */	stw r0, 0x88(r1)
/* 80373170 003700B0  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80373174 003700B4  93 01 00 84 */	stw r24, 0x84(r1)
/* 80373178 003700B8  EC 20 10 28 */	fsubs f1, f0, f2
/* 8037317C 003700BC  90 01 00 80 */	stw r0, 0x80(r1)
/* 80373180 003700C0  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80373184 003700C4  EC 23 08 2A */	fadds f1, f3, f1
/* 80373188 003700C8  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 8037318C 003700CC  EC 00 10 28 */	fsubs f0, f0, f2
/* 80373190 003700D0  D0 61 00 60 */	stfs f3, 0x60(r1)
/* 80373194 003700D4  EC 03 00 2A */	fadds f0, f3, f0
/* 80373198 003700D8  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 8037319C 003700DC  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 803731A0 003700E0  4B CC 36 35 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 803731A4 003700E4  38 60 00 01 */	li r3, 1
/* 803731A8 003700E8  4B D7 5F B1 */	bl GXSetAlphaUpdate
.L_803731AC:
/* 803731AC 003700EC  88 17 00 44 */	lbz r0, 0x44(r23)
/* 803731B0 003700F0  7F E3 FB 78 */	mr r3, r31
/* 803731B4 003700F4  38 81 00 14 */	addi r4, r1, 0x14
/* 803731B8 003700F8  38 A1 00 18 */	addi r5, r1, 0x18
/* 803731BC 003700FC  20 00 00 FF */	subfic r0, r0, 0xff
/* 803731C0 00370100  38 C1 00 1C */	addi r6, r1, 0x1c
/* 803731C4 00370104  98 01 00 47 */	stb r0, 0x47(r1)
/* 803731C8 00370108  38 E1 00 20 */	addi r7, r1, 0x20
/* 803731CC 0037010C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803731D0 00370110  90 01 00 08 */	stw r0, 8(r1)
/* 803731D4 00370114  90 01 00 20 */	stw r0, 0x20(r1)
/* 803731D8 00370118  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803731DC 0037011C  90 01 00 18 */	stw r0, 0x18(r1)
/* 803731E0 00370120  90 01 00 14 */	stw r0, 0x14(r1)
/* 803731E4 00370124  4B CC 34 A9 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803731E8 00370128  38 60 00 00 */	li r3, 0
/* 803731EC 0037012C  4B D7 5F 6D */	bl GXSetAlphaUpdate
/* 803731F0 00370130  48 0B 00 35 */	bl getRenderModeObj__6SystemFv
/* 803731F4 00370134  A2 E3 00 06 */	lhz r23, 6(r3)
/* 803731F8 00370138  48 0B 00 2D */	bl getRenderModeObj__6SystemFv
/* 803731FC 0037013C  A0 83 00 04 */	lhz r4, 4(r3)
/* 80373200 00370140  3C 00 43 30 */	lis r0, 0x4330
/* 80373204 00370144  C0 62 07 C0 */	lfs f3, lbl_8051EB20@sda21(r2)
/* 80373208 00370148  7F E3 FB 78 */	mr r3, r31
/* 8037320C 0037014C  90 81 00 8C */	stw r4, 0x8c(r1)
/* 80373210 00370150  38 81 00 4C */	addi r4, r1, 0x4c
/* 80373214 00370154  C8 42 08 30 */	lfd f2, lbl_8051EB90@sda21(r2)
/* 80373218 00370158  90 01 00 88 */	stw r0, 0x88(r1)
/* 8037321C 0037015C  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80373220 00370160  92 E1 00 84 */	stw r23, 0x84(r1)
/* 80373224 00370164  EC 20 10 28 */	fsubs f1, f0, f2
/* 80373228 00370168  90 01 00 80 */	stw r0, 0x80(r1)
/* 8037322C 0037016C  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80373230 00370170  EC 23 08 2A */	fadds f1, f3, f1
/* 80373234 00370174  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 80373238 00370178  EC 00 10 28 */	fsubs f0, f0, f2
/* 8037323C 0037017C  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 80373240 00370180  EC 03 00 2A */	fadds f0, f3, f0
/* 80373244 00370184  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80373248 00370188  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8037324C 0037018C  4B CC 35 89 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 80373250 00370190  38 60 00 01 */	li r3, 1
/* 80373254 00370194  4B D7 5F 05 */	bl GXSetAlphaUpdate
/* 80373258 00370198  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 8037325C 0037019C  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80373260 003701A0  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 80373264 003701A4  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80373268 003701A8  BA E1 00 9C */	lmw r23, 0x9c(r1)
/* 8037326C 003701AC  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80373270 003701B0  7C 08 03 A6 */	mtlr r0
/* 80373274 003701B4  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80373278 003701B8  4E 80 00 20 */	blr 
.endfn doDraw__Q28Morimura10TZukanBaseFR8Graphics

.fn doDemoDraw__Q28Morimura10TZukanBaseFR8Graphics, weak
/* 8037327C 003701BC  4E 80 00 20 */	blr 
.endfn doDemoDraw__Q28Morimura10TZukanBaseFR8Graphics

.fn doUpdateFadeoutFinish__Q28Morimura10TZukanBaseFv, global
/* 80373280 003701C0  80 03 01 98 */	lwz r0, 0x198(r3)
/* 80373284 003701C4  2C 00 00 02 */	cmpwi r0, 2
/* 80373288 003701C8  4C 82 00 20 */	bnelr 
/* 8037328C 003701CC  38 00 00 03 */	li r0, 3
/* 80373290 003701D0  90 03 01 98 */	stw r0, 0x198(r3)
/* 80373294 003701D4  4E 80 00 20 */	blr 
.endfn doUpdateFadeoutFinish__Q28Morimura10TZukanBaseFv

.fn indexPaneInit__Q28Morimura10TZukanBaseFP9J2DScreen, global
/* 80373298 003701D8  94 21 FB 90 */	stwu r1, -0x470(r1)
/* 8037329C 003701DC  7C 08 02 A6 */	mflr r0
/* 803732A0 003701E0  3C A0 80 49 */	lis r5, lbl_80492520@ha
/* 803732A4 003701E4  90 01 04 74 */	stw r0, 0x474(r1)
/* 803732A8 003701E8  38 00 00 00 */	li r0, 0
/* 803732AC 003701EC  BE 01 04 30 */	stmw r16, 0x430(r1)
/* 803732B0 003701F0  3A C5 25 20 */	addi r22, r5, lbl_80492520@l
/* 803732B4 003701F4  7C 98 23 78 */	mr r24, r4
/* 803732B8 003701F8  7C 77 1B 78 */	mr r23, r3
/* 803732BC 003701FC  38 A1 00 14 */	addi r5, r1, 0x14
/* 803732C0 00370200  38 96 00 44 */	addi r4, r22, 0x44
/* 803732C4 00370204  90 03 00 90 */	stw r0, 0x90(r3)
/* 803732C8 00370208  38 60 00 04 */	li r3, 4
/* 803732CC 0037020C  38 00 00 0A */	li r0, 0xa
/* 803732D0 00370210  90 77 00 94 */	stw r3, 0x94(r23)
/* 803732D4 00370214  A8 77 00 8E */	lha r3, 0x8e(r23)
/* 803732D8 00370218  38 63 FF FF */	addi r3, r3, -1
/* 803732DC 0037021C  90 77 00 98 */	stw r3, 0x98(r23)
/* 803732E0 00370220  7C 09 03 A6 */	mtctr r0
.L_803732E4:
/* 803732E4 00370224  80 64 00 04 */	lwz r3, 4(r4)
/* 803732E8 00370228  84 04 00 08 */	lwzu r0, 8(r4)
/* 803732EC 0037022C  90 65 00 04 */	stw r3, 4(r5)
/* 803732F0 00370230  94 05 00 08 */	stwu r0, 8(r5)
/* 803732F4 00370234  42 00 FF F0 */	bdnz .L_803732E4
/* 803732F8 00370238  7F 03 C3 78 */	mr r3, r24
/* 803732FC 0037023C  80 97 00 90 */	lwz r4, 0x90(r23)
/* 80373300 00370240  81 98 00 00 */	lwz r12, 0(r24)
/* 80373304 00370244  38 01 00 18 */	addi r0, r1, 0x18
/* 80373308 00370248  54 84 18 38 */	slwi r4, r4, 3
/* 8037330C 0037024C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373310 00370250  7C C0 22 14 */	add r6, r0, r4
/* 80373314 00370254  80 A6 00 00 */	lwz r5, 0(r6)
/* 80373318 00370258  80 C6 00 04 */	lwz r6, 4(r6)
/* 8037331C 0037025C  7D 89 03 A6 */	mtctr r12
/* 80373320 00370260  4E 80 04 21 */	bctrl 
/* 80373324 00370264  7C 71 1B 79 */	or. r17, r3, r3
/* 80373328 00370268  40 82 00 18 */	bne .L_80373340
/* 8037332C 0037026C  38 76 00 0C */	addi r3, r22, 0xc
/* 80373330 00370270  38 B6 00 18 */	addi r5, r22, 0x18
/* 80373334 00370274  38 80 04 3B */	li r4, 0x43b
/* 80373338 00370278  4C C6 31 82 */	crclr 6
/* 8037333C 0037027C  4B CB 73 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80373340:
/* 80373340 00370280  C0 11 00 D8 */	lfs f0, 0xd8(r17)
/* 80373344 00370284  7F 03 C3 78 */	mr r3, r24
/* 80373348 00370288  38 01 00 18 */	addi r0, r1, 0x18
/* 8037334C 0037028C  D0 17 00 A0 */	stfs f0, 0xa0(r23)
/* 80373350 00370290  80 97 00 98 */	lwz r4, 0x98(r23)
/* 80373354 00370294  81 98 00 00 */	lwz r12, 0(r24)
/* 80373358 00370298  54 84 18 38 */	slwi r4, r4, 3
/* 8037335C 0037029C  7C C0 22 14 */	add r6, r0, r4
/* 80373360 003702A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373364 003702A4  80 A6 00 00 */	lwz r5, 0(r6)
/* 80373368 003702A8  80 C6 00 04 */	lwz r6, 4(r6)
/* 8037336C 003702AC  7D 89 03 A6 */	mtctr r12
/* 80373370 003702B0  4E 80 04 21 */	bctrl 
/* 80373374 003702B4  7C 71 1B 79 */	or. r17, r3, r3
/* 80373378 003702B8  40 82 00 18 */	bne .L_80373390
/* 8037337C 003702BC  38 76 00 0C */	addi r3, r22, 0xc
/* 80373380 003702C0  38 B6 00 18 */	addi r5, r22, 0x18
/* 80373384 003702C4  38 80 04 3E */	li r4, 0x43e
/* 80373388 003702C8  4C C6 31 82 */	crclr 6
/* 8037338C 003702CC  4B CB 72 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80373390:
/* 80373390 003702D0  C0 11 00 D8 */	lfs f0, 0xd8(r17)
/* 80373394 003702D4  38 00 00 78 */	li r0, 0x78
/* 80373398 003702D8  38 A1 00 64 */	addi r5, r1, 0x64
/* 8037339C 003702DC  38 96 00 94 */	addi r4, r22, 0x94
/* 803733A0 003702E0  D0 17 00 A4 */	stfs f0, 0xa4(r23)
/* 803733A4 003702E4  7C 09 03 A6 */	mtctr r0
.L_803733A8:
/* 803733A8 003702E8  80 64 00 04 */	lwz r3, 4(r4)
/* 803733AC 003702EC  84 04 00 08 */	lwzu r0, 8(r4)
/* 803733B0 003702F0  90 65 00 04 */	stw r3, 4(r5)
/* 803733B4 003702F4  94 05 00 08 */	stwu r0, 8(r5)
/* 803733B8 003702F8  42 00 FF F0 */	bdnz .L_803733A8
/* 803733BC 003702FC  88 17 02 40 */	lbz r0, 0x240(r23)
/* 803733C0 00370300  3B 80 00 00 */	li r28, 0
/* 803733C4 00370304  28 00 00 00 */	cmplwi r0, 0
/* 803733C8 00370308  41 82 00 14 */	beq .L_803733DC
/* 803733CC 0037030C  80 17 02 30 */	lwz r0, 0x230(r23)
/* 803733D0 00370310  2C 00 00 00 */	cmpwi r0, 0
/* 803733D4 00370314  40 82 00 08 */	bne .L_803733DC
/* 803733D8 00370318  3B 80 00 01 */	li r28, 1
.L_803733DC:
/* 803733DC 0037031C  A8 17 00 8E */	lha r0, 0x8e(r23)
/* 803733E0 00370320  54 03 10 3A */	slwi r3, r0, 2
/* 803733E4 00370324  4B CB 0B C9 */	bl __nwa__FUl
/* 803733E8 00370328  38 A0 00 00 */	li r5, 0
/* 803733EC 0037032C  90 77 00 88 */	stw r3, 0x88(r23)
/* 803733F0 00370330  7C A4 2B 78 */	mr r4, r5
/* 803733F4 00370334  38 C0 00 00 */	li r6, 0
/* 803733F8 00370338  48 00 00 14 */	b .L_8037340C
.L_803733FC:
/* 803733FC 0037033C  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80373400 00370340  38 C6 00 01 */	addi r6, r6, 1
/* 80373404 00370344  7C 83 29 2E */	stwx r4, r3, r5
/* 80373408 00370348  38 A5 00 04 */	addi r5, r5, 4
.L_8037340C:
/* 8037340C 0037034C  A8 17 00 8E */	lha r0, 0x8e(r23)
/* 80373410 00370350  7C 06 00 00 */	cmpw r6, r0
/* 80373414 00370354  41 80 FF E8 */	blt .L_803733FC
/* 80373418 00370358  3B E1 00 18 */	addi r31, r1, 0x18
/* 8037341C 0037035C  3B A1 00 68 */	addi r29, r1, 0x68
/* 80373420 00370360  3B 60 00 00 */	li r27, 0
/* 80373424 00370364  3B 40 00 00 */	li r26, 0
/* 80373428 00370368  3B C0 00 00 */	li r30, 0
/* 8037342C 0037036C  48 00 03 7C */	b .L_803737A8
.L_80373430:
/* 80373430 00370370  38 60 00 28 */	li r3, 0x28
/* 80373434 00370374  4B CB 0A 71 */	bl __nw__FUl
/* 80373438 00370378  7C 71 1B 79 */	or. r17, r3, r3
/* 8037343C 0037037C  41 82 00 54 */	beq .L_80373490
/* 80373440 00370380  7F 03 C3 78 */	mr r3, r24
/* 80373444 00370384  80 BF 00 00 */	lwz r5, 0(r31)
/* 80373448 00370388  81 98 00 00 */	lwz r12, 0(r24)
/* 8037344C 0037038C  80 DF 00 04 */	lwz r6, 4(r31)
/* 80373450 00370390  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373454 00370394  7D 89 03 A6 */	mtctr r12
/* 80373458 00370398  4E 80 04 21 */	bctrl 
/* 8037345C 0037039C  38 00 00 00 */	li r0, 0
/* 80373460 003703A0  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80373464 003703A4  90 11 00 00 */	stw r0, 0(r17)
/* 80373468 003703A8  90 71 00 04 */	stw r3, 4(r17)
/* 8037346C 003703AC  90 11 00 08 */	stw r0, 8(r17)
/* 80373470 003703B0  90 11 00 0C */	stw r0, 0xc(r17)
/* 80373474 003703B4  90 11 00 10 */	stw r0, 0x10(r17)
/* 80373478 003703B8  D0 11 00 18 */	stfs f0, 0x18(r17)
/* 8037347C 003703BC  90 11 00 20 */	stw r0, 0x20(r17)
/* 80373480 003703C0  92 F1 00 24 */	stw r23, 0x24(r17)
/* 80373484 003703C4  80 71 00 04 */	lwz r3, 4(r17)
/* 80373488 003703C8  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037348C 003703CC  D0 11 00 1C */	stfs f0, 0x1c(r17)
.L_80373490:
/* 80373490 003703D0  80 97 00 88 */	lwz r4, 0x88(r23)
/* 80373494 003703D4  7E E3 BB 78 */	mr r3, r23
/* 80373498 003703D8  7E 24 F1 2E */	stwx r17, r4, r30
/* 8037349C 003703DC  81 97 00 00 */	lwz r12, 0(r23)
/* 803734A0 003703E0  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803734A4 003703E4  7D 89 03 A6 */	mtctr r12
/* 803734A8 003703E8  4E 80 04 21 */	bctrl 
/* 803734AC 003703EC  80 D7 00 88 */	lwz r6, 0x88(r23)
/* 803734B0 003703F0  7C 65 1B 78 */	mr r5, r3
/* 803734B4 003703F4  38 80 00 03 */	li r4, 3
/* 803734B8 003703F8  7C 66 F0 2E */	lwzx r3, r6, r30
/* 803734BC 003703FC  48 02 EE 89 */	bl createIconInfo__Q28Morimura10TIndexPaneFii
/* 803734C0 00370400  7F B3 EB 78 */	mr r19, r29
/* 803734C4 00370404  3B 20 00 00 */	li r25, 0
/* 803734C8 00370408  3A 80 00 00 */	li r20, 0
.L_803734CC:
/* 803734CC 0037040C  80 17 00 88 */	lwz r0, 0x88(r23)
/* 803734D0 00370410  7F 03 C3 78 */	mr r3, r24
/* 803734D4 00370414  81 98 00 00 */	lwz r12, 0(r24)
/* 803734D8 00370418  7C BE 00 2E */	lwzx r5, r30, r0
/* 803734DC 0037041C  80 97 00 B4 */	lwz r4, 0xb4(r23)
/* 803734E0 00370420  80 A5 00 20 */	lwz r5, 0x20(r5)
/* 803734E4 00370424  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803734E8 00370428  7E A5 A0 2E */	lwzx r21, r5, r20
/* 803734EC 0037042C  82 04 00 08 */	lwz r16, 8(r4)
/* 803734F0 00370430  80 B3 00 48 */	lwz r5, 0x48(r19)
/* 803734F4 00370434  80 D3 00 4C */	lwz r6, 0x4c(r19)
/* 803734F8 00370438  7D 89 03 A6 */	mtctr r12
/* 803734FC 0037043C  4E 80 04 21 */	bctrl 
/* 80373500 00370440  7C 71 1B 78 */	mr r17, r3
/* 80373504 00370444  7F 03 C3 78 */	mr r3, r24
/* 80373508 00370448  81 98 00 00 */	lwz r12, 0(r24)
/* 8037350C 0037044C  80 B3 00 30 */	lwz r5, 0x30(r19)
/* 80373510 00370450  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373514 00370454  80 D3 00 34 */	lwz r6, 0x34(r19)
/* 80373518 00370458  7D 89 03 A6 */	mtctr r12
/* 8037351C 0037045C  4E 80 04 21 */	bctrl 
/* 80373520 00370460  80 17 00 78 */	lwz r0, 0x78(r23)
/* 80373524 00370464  7C 72 1B 78 */	mr r18, r3
/* 80373528 00370468  7E 03 83 78 */	mr r3, r16
/* 8037352C 0037046C  39 35 00 18 */	addi r9, r21, 0x18
/* 80373530 00370470  90 01 00 08 */	stw r0, 8(r1)
/* 80373534 00370474  39 40 00 03 */	li r10, 3
/* 80373538 00370478  80 B3 00 00 */	lwz r5, 0(r19)
/* 8037353C 0037047C  80 D3 00 04 */	lwz r6, 4(r19)
/* 80373540 00370480  80 F3 00 18 */	lwz r7, 0x18(r19)
/* 80373544 00370484  81 13 00 1C */	lwz r8, 0x1c(r19)
/* 80373548 00370488  48 02 E8 B9 */	bl setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive
/* 8037354C 0037048C  7C 64 1B 78 */	mr r4, r3
/* 80373550 00370490  7E A3 AB 78 */	mr r3, r21
/* 80373554 00370494  7E 45 93 78 */	mr r5, r18
/* 80373558 00370498  7E 26 8B 78 */	mr r6, r17
/* 8037355C 0037049C  48 02 F2 1D */	bl init__Q28Morimura9TIconInfoFPQ28Morimura15TScaleUpCounterP7J2DPaneP7J2DPane
/* 80373560 003704A0  88 17 02 41 */	lbz r0, 0x241(r23)
/* 80373564 003704A4  28 00 00 00 */	cmplwi r0, 0
/* 80373568 003704A8  41 82 00 FC */	beq .L_80373664
/* 8037356C 003704AC  38 60 01 A8 */	li r3, 0x1a8
/* 80373570 003704B0  4B CB 09 35 */	bl __nw__FUl
/* 80373574 003704B4  7C 75 1B 79 */	or. r21, r3, r3
/* 80373578 003704B8  41 82 00 48 */	beq .L_803735C0
/* 8037357C 003704BC  7F 03 C3 78 */	mr r3, r24
/* 80373580 003704C0  80 B3 00 48 */	lwz r5, 0x48(r19)
/* 80373584 003704C4  81 98 00 00 */	lwz r12, 0(r24)
/* 80373588 003704C8  80 D3 00 4C */	lwz r6, 0x4c(r19)
/* 8037358C 003704CC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373590 003704D0  7D 89 03 A6 */	mtctr r12
/* 80373594 003704D4  4E 80 04 21 */	bctrl 
/* 80373598 003704D8  4B CC 4D 89 */	bl getBounds__7J2DPaneFv
/* 8037359C 003704DC  3C 80 74 65 */	lis r4, 0x74657374@ha
/* 803735A0 003704E0  7C 67 1B 78 */	mr r7, r3
/* 803735A4 003704E4  7E A3 AB 78 */	mr r3, r21
/* 803735A8 003704E8  39 16 04 58 */	addi r8, r22, 0x458
/* 803735AC 003704EC  38 C4 73 74 */	addi r6, r4, 0x74657374@l
/* 803735B0 003704F0  38 A0 00 00 */	li r5, 0
/* 803735B4 003704F4  3D 20 01 10 */	lis r9, 0x110
/* 803735B8 003704F8  4B CE 1B 85 */	bl "__ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl"
/* 803735BC 003704FC  7C 75 1B 78 */	mr r21, r3
.L_803735C0:
/* 803735C0 00370500  28 15 00 00 */	cmplwi r21, 0
/* 803735C4 00370504  40 82 00 18 */	bne .L_803735DC
/* 803735C8 00370508  38 76 00 0C */	addi r3, r22, 0xc
/* 803735CC 0037050C  38 B6 00 18 */	addi r5, r22, 0x18
/* 803735D0 00370510  38 80 04 69 */	li r4, 0x469
/* 803735D4 00370514  4C C6 31 82 */	crclr 6
/* 803735D8 00370518  4B CB 70 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803735DC:
/* 803735DC 0037051C  80 17 00 88 */	lwz r0, 0x88(r23)
/* 803735E0 00370520  7F 03 C3 78 */	mr r3, r24
/* 803735E4 00370524  7C 9E 00 2E */	lwzx r4, r30, r0
/* 803735E8 00370528  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803735EC 0037052C  7C 84 A0 2E */	lwzx r4, r4, r20
/* 803735F0 00370530  92 A4 00 04 */	stw r21, 4(r4)
/* 803735F4 00370534  81 98 00 00 */	lwz r12, 0(r24)
/* 803735F8 00370538  80 BF 00 00 */	lwz r5, 0(r31)
/* 803735FC 0037053C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373600 00370540  80 DF 00 04 */	lwz r6, 4(r31)
/* 80373604 00370544  7D 89 03 A6 */	mtctr r12
/* 80373608 00370548  4E 80 04 21 */	bctrl 
/* 8037360C 0037054C  7E A4 AB 78 */	mr r4, r21
/* 80373610 00370550  4B CC 40 B5 */	bl appendChild__7J2DPaneFP7J2DPane
/* 80373614 00370554  7F 03 C3 78 */	mr r3, r24
/* 80373618 00370558  80 B3 00 48 */	lwz r5, 0x48(r19)
/* 8037361C 0037055C  81 98 00 00 */	lwz r12, 0(r24)
/* 80373620 00370560  80 D3 00 4C */	lwz r6, 0x4c(r19)
/* 80373624 00370564  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373628 00370568  7D 89 03 A6 */	mtctr r12
/* 8037362C 0037056C  4E 80 04 21 */	bctrl 
/* 80373630 00370570  7C 72 1B 78 */	mr r18, r3
/* 80373634 00370574  7F 03 C3 78 */	mr r3, r24
/* 80373638 00370578  81 98 00 00 */	lwz r12, 0(r24)
/* 8037363C 0037057C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80373640 00370580  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373644 00370584  80 DF 00 04 */	lwz r6, 4(r31)
/* 80373648 00370588  7D 89 03 A6 */	mtctr r12
/* 8037364C 0037058C  4E 80 04 21 */	bctrl 
/* 80373650 00370590  7E 44 93 78 */	mr r4, r18
/* 80373654 00370594  4B CC 40 71 */	bl appendChild__7J2DPaneFP7J2DPane
/* 80373658 00370598  7E A3 AB 78 */	mr r3, r21
/* 8037365C 0037059C  38 80 00 04 */	li r4, 4
/* 80373660 003705A0  4B CC 56 5D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
.L_80373664:
/* 80373664 003705A4  3B 39 00 01 */	addi r25, r25, 1
/* 80373668 003705A8  3A 73 00 08 */	addi r19, r19, 8
/* 8037366C 003705AC  2C 19 00 03 */	cmpwi r25, 3
/* 80373670 003705B0  3A 94 00 04 */	addi r20, r20, 4
/* 80373674 003705B4  41 80 FE 58 */	blt .L_803734CC
/* 80373678 003705B8  80 17 00 9C */	lwz r0, 0x9c(r23)
/* 8037367C 003705BC  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80373680 003705C0  7C 1A 01 D6 */	mullw r0, r26, r0
/* 80373684 003705C4  7C 63 F0 2E */	lwzx r3, r3, r30
/* 80373688 003705C8  82 63 00 04 */	lwz r19, 4(r3)
/* 8037368C 003705CC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80373690 003705D0  88 17 02 40 */	lbz r0, 0x240(r23)
/* 80373694 003705D4  28 00 00 00 */	cmplwi r0, 0
/* 80373698 003705D8  41 82 00 08 */	beq .L_803736A0
/* 8037369C 003705DC  93 61 00 10 */	stw r27, 0x10(r1)
.L_803736A0:
/* 803736A0 003705E0  88 17 02 40 */	lbz r0, 0x240(r23)
/* 803736A4 003705E4  28 00 00 00 */	cmplwi r0, 0
/* 803736A8 003705E8  41 82 00 9C */	beq .L_80373744
/* 803736AC 003705EC  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 803736B0 003705F0  41 82 00 28 */	beq .L_803736D8
/* 803736B4 003705F4  7E E3 BB 78 */	mr r3, r23
/* 803736B8 003705F8  7F 44 D3 78 */	mr r4, r26
/* 803736BC 003705FC  81 97 00 00 */	lwz r12, 0(r23)
/* 803736C0 00370600  38 A0 FF FF */	li r5, -1
/* 803736C4 00370604  38 C0 00 01 */	li r6, 1
/* 803736C8 00370608  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 803736CC 0037060C  7D 89 03 A6 */	mtctr r12
/* 803736D0 00370610  4E 80 04 21 */	bctrl 
/* 803736D4 00370614  48 00 00 90 */	b .L_80373764
.L_803736D8:
/* 803736D8 00370618  7E E3 BB 78 */	mr r3, r23
/* 803736DC 0037061C  38 81 00 10 */	addi r4, r1, 0x10
/* 803736E0 00370620  81 97 00 00 */	lwz r12, 0(r23)
/* 803736E4 00370624  38 A0 00 01 */	li r5, 1
/* 803736E8 00370628  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 803736EC 0037062C  7D 89 03 A6 */	mtctr r12
/* 803736F0 00370630  4E 80 04 21 */	bctrl 
/* 803736F4 00370634  7E E3 BB 78 */	mr r3, r23
/* 803736F8 00370638  7F 44 D3 78 */	mr r4, r26
/* 803736FC 0037063C  81 97 00 00 */	lwz r12, 0(r23)
/* 80373700 00370640  7F 65 DB 78 */	mr r5, r27
/* 80373704 00370644  38 C0 00 01 */	li r6, 1
/* 80373708 00370648  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8037370C 0037064C  7D 89 03 A6 */	mtctr r12
/* 80373710 00370650  4E 80 04 21 */	bctrl 
/* 80373714 00370654  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80373718 00370658  2C 03 00 00 */	cmpwi r3, 0
/* 8037371C 0037065C  40 82 00 10 */	bne .L_8037372C
/* 80373720 00370660  2C 1B 00 00 */	cmpwi r27, 0
/* 80373724 00370664  41 82 00 08 */	beq .L_8037372C
/* 80373728 00370668  3B 80 00 01 */	li r28, 1
.L_8037372C:
/* 8037372C 0037066C  80 17 02 30 */	lwz r0, 0x230(r23)
/* 80373730 00370670  2C 00 00 03 */	cmpwi r0, 3
/* 80373734 00370674  40 80 00 08 */	bge .L_8037373C
/* 80373738 00370678  3B 80 00 01 */	li r28, 1
.L_8037373C:
/* 8037373C 0037067C  7C 7B 1B 78 */	mr r27, r3
/* 80373740 00370680  48 00 00 24 */	b .L_80373764
.L_80373744:
/* 80373744 00370684  7E E3 BB 78 */	mr r3, r23
/* 80373748 00370688  7F 44 D3 78 */	mr r4, r26
/* 8037374C 0037068C  81 97 00 00 */	lwz r12, 0(r23)
/* 80373750 00370690  38 C0 00 01 */	li r6, 1
/* 80373754 00370694  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 80373758 00370698  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8037375C 0037069C  7D 89 03 A6 */	mtctr r12
/* 80373760 003706A0  4E 80 04 21 */	bctrl 
.L_80373764:
/* 80373764 003706A4  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80373768 003706A8  2C 04 00 00 */	cmpwi r4, 0
/* 8037376C 003706AC  41 80 00 2C */	blt .L_80373798
/* 80373770 003706B0  88 17 00 B0 */	lbz r0, 0xb0(r23)
/* 80373774 003706B4  28 00 00 00 */	cmplwi r0, 0
/* 80373778 003706B8  41 82 00 20 */	beq .L_80373798
/* 8037377C 003706BC  81 97 00 00 */	lwz r12, 0(r23)
/* 80373780 003706C0  7E E3 BB 78 */	mr r3, r23
/* 80373784 003706C4  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80373788 003706C8  7D 89 03 A6 */	mtctr r12
/* 8037378C 003706CC  4E 80 04 21 */	bctrl 
/* 80373790 003706D0  90 93 00 1C */	stw r4, 0x1c(r19)
/* 80373794 003706D4  90 73 00 18 */	stw r3, 0x18(r19)
.L_80373798:
/* 80373798 003706D8  3B FF 00 08 */	addi r31, r31, 8
/* 8037379C 003706DC  3B DE 00 04 */	addi r30, r30, 4
/* 803737A0 003706E0  3B BD 00 60 */	addi r29, r29, 0x60
/* 803737A4 003706E4  3B 5A 00 01 */	addi r26, r26, 1
.L_803737A8:
/* 803737A8 003706E8  A8 97 00 8E */	lha r4, 0x8e(r23)
/* 803737AC 003706EC  7C 1A 20 00 */	cmpw r26, r4
/* 803737B0 003706F0  41 80 FC 80 */	blt .L_80373430
/* 803737B4 003706F4  2C 04 00 00 */	cmpwi r4, 0
/* 803737B8 003706F8  38 A0 00 00 */	li r5, 0
/* 803737BC 003706FC  40 81 00 40 */	ble .L_803737FC
/* 803737C0 00370700  2C 04 00 08 */	cmpwi r4, 8
/* 803737C4 00370704  38 64 FF F8 */	addi r3, r4, -8
/* 803737C8 00370708  40 81 00 20 */	ble .L_803737E8
/* 803737CC 0037070C  38 03 00 07 */	addi r0, r3, 7
/* 803737D0 00370710  54 00 E8 FE */	srwi r0, r0, 3
/* 803737D4 00370714  7C 09 03 A6 */	mtctr r0
/* 803737D8 00370718  2C 03 00 00 */	cmpwi r3, 0
/* 803737DC 0037071C  40 81 00 0C */	ble .L_803737E8
.L_803737E0:
/* 803737E0 00370720  38 A5 00 08 */	addi r5, r5, 8
/* 803737E4 00370724  42 00 FF FC */	bdnz .L_803737E0
.L_803737E8:
/* 803737E8 00370728  7C 05 20 50 */	subf r0, r5, r4
/* 803737EC 0037072C  7C 09 03 A6 */	mtctr r0
/* 803737F0 00370730  7C 05 20 00 */	cmpw r5, r4
/* 803737F4 00370734  40 80 00 08 */	bge .L_803737FC
.L_803737F8:
/* 803737F8 00370738  42 00 00 00 */	bdnz .L_803737F8
.L_803737FC:
/* 803737FC 0037073C  BA 01 04 30 */	lmw r16, 0x430(r1)
/* 80373800 00370740  80 01 04 74 */	lwz r0, 0x474(r1)
/* 80373804 00370744  7C 08 03 A6 */	mtlr r0
/* 80373808 00370748  38 21 04 70 */	addi r1, r1, 0x470
/* 8037380C 0037074C  4E 80 00 20 */	blr 
.endfn indexPaneInit__Q28Morimura10TZukanBaseFP9J2DScreen

.fn paneInit__Q28Morimura10TZukanBaseFv, global
/* 80373810 00370750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80373814 00370754  7C 08 02 A6 */	mflr r0
/* 80373818 00370758  3C 80 54 74 */	lis r4, 0x5474656B@ha
/* 8037381C 0037075C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80373820 00370760  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80373824 00370764  7C 7F 1B 78 */	mr r31, r3
/* 80373828 00370768  3C 60 69 6E */	lis r3, 0x696E616D@ha
/* 8037382C 0037076C  80 BF 00 7C */	lwz r5, 0x7c(r31)
/* 80373830 00370770  38 C3 61 6D */	addi r6, r3, 0x696E616D@l
/* 80373834 00370774  80 65 00 08 */	lwz r3, 8(r5)
/* 80373838 00370778  38 A4 65 6B */	addi r5, r4, 0x5474656B@l
/* 8037383C 0037077C  81 83 00 00 */	lwz r12, 0(r3)
/* 80373840 00370780  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373844 00370784  7D 89 03 A6 */	mtctr r12
/* 80373848 00370788  4E 80 04 21 */	bctrl 
/* 8037384C 0037078C  90 7F 01 08 */	stw r3, 0x108(r31)
/* 80373850 00370790  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 80373854 00370794  28 00 00 00 */	cmplwi r0, 0
/* 80373858 00370798  40 82 00 20 */	bne .L_80373878
/* 8037385C 0037079C  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 80373860 003707A0  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 80373864 003707A4  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 80373868 003707A8  38 80 04 AC */	li r4, 0x4ac
/* 8037386C 003707AC  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 80373870 003707B0  4C C6 31 82 */	crclr 6
/* 80373874 003707B4  4B CB 6D CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80373878:
/* 80373878 003707B8  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 8037387C 003707BC  3C A0 69 6E */	lis r5, 0x696E6131@ha
/* 80373880 003707C0  3C 80 54 74 */	lis r4, 0x5474656B@ha
/* 80373884 003707C4  80 63 00 08 */	lwz r3, 8(r3)
/* 80373888 003707C8  38 C5 61 31 */	addi r6, r5, 0x696E6131@l
/* 8037388C 003707CC  38 A4 65 6B */	addi r5, r4, 0x5474656B@l
/* 80373890 003707D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80373894 003707D4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80373898 003707D8  7D 89 03 A6 */	mtctr r12
/* 8037389C 003707DC  4E 80 04 21 */	bctrl 
/* 803738A0 003707E0  90 7F 01 0C */	stw r3, 0x10c(r31)
/* 803738A4 003707E4  38 60 00 48 */	li r3, 0x48
/* 803738A8 003707E8  4B CB 05 FD */	bl __nw__FUl
/* 803738AC 003707EC  7C 60 1B 79 */	or. r0, r3, r3
/* 803738B0 003707F0  41 82 00 0C */	beq .L_803738BC
/* 803738B4 003707F4  4B F9 5D 61 */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 803738B8 003707F8  7C 60 1B 78 */	mr r0, r3
.L_803738BC:
/* 803738BC 003707FC  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 803738C0 00370800  3C 80 69 6E */	lis r4, 0x696E616D@ha
/* 803738C4 00370804  3C 60 54 74 */	lis r3, 0x5474656B@ha
/* 803738C8 00370808  81 1F 00 7C */	lwz r8, 0x7c(r31)
/* 803738CC 0037080C  38 C4 61 6D */	addi r6, r4, 0x696E616D@l
/* 803738D0 00370810  80 FF 00 D4 */	lwz r7, 0xd4(r31)
/* 803738D4 00370814  38 A3 65 6B */	addi r5, r3, 0x5474656B@l
/* 803738D8 00370818  80 68 00 08 */	lwz r3, 8(r8)
/* 803738DC 0037081C  48 0C 12 49 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803738E0 00370820  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 803738E4 00370824  3C 60 62 74 */	lis r3, 0x62746E30@ha
/* 803738E8 00370828  38 C3 6E 30 */	addi r6, r3, 0x62746E30@l
/* 803738EC 0037082C  38 A0 00 4E */	li r5, 0x4e
/* 803738F0 00370830  80 64 00 08 */	lwz r3, 8(r4)
/* 803738F4 00370834  81 83 00 00 */	lwz r12, 0(r3)
/* 803738F8 00370838  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803738FC 0037083C  7D 89 03 A6 */	mtctr r12
/* 80373900 00370840  4E 80 04 21 */	bctrl 
/* 80373904 00370844  90 7F 01 1C */	stw r3, 0x11c(r31)
/* 80373908 00370848  80 1F 01 1C */	lwz r0, 0x11c(r31)
/* 8037390C 0037084C  28 00 00 00 */	cmplwi r0, 0
/* 80373910 00370850  40 82 00 20 */	bne .L_80373930
/* 80373914 00370854  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 80373918 00370858  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 8037391C 0037085C  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 80373920 00370860  38 80 04 B4 */	li r4, 0x4b4
/* 80373924 00370864  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 80373928 00370868  4C C6 31 82 */	crclr 6
/* 8037392C 0037086C  4B CB 6D 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80373930:
/* 80373930 00370870  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 80373934 00370874  3C 60 62 74 */	lis r3, 0x62746E32@ha
/* 80373938 00370878  38 C3 6E 32 */	addi r6, r3, 0x62746E32@l
/* 8037393C 0037087C  38 A0 00 4E */	li r5, 0x4e
/* 80373940 00370880  80 64 00 08 */	lwz r3, 8(r4)
/* 80373944 00370884  81 83 00 00 */	lwz r12, 0(r3)
/* 80373948 00370888  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037394C 0037088C  7D 89 03 A6 */	mtctr r12
/* 80373950 00370890  4E 80 04 21 */	bctrl 
/* 80373954 00370894  90 7F 01 18 */	stw r3, 0x118(r31)
/* 80373958 00370898  80 1F 01 18 */	lwz r0, 0x118(r31)
/* 8037395C 0037089C  28 00 00 00 */	cmplwi r0, 0
/* 80373960 003708A0  40 82 00 20 */	bne .L_80373980
/* 80373964 003708A4  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 80373968 003708A8  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 8037396C 003708AC  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 80373970 003708B0  38 80 04 B8 */	li r4, 0x4b8
/* 80373974 003708B4  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 80373978 003708B8  4C C6 31 82 */	crclr 6
/* 8037397C 003708BC  4B CB 6C C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80373980:
/* 80373980 003708C0  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 80373984 003708C4  3C 60 62 74 */	lis r3, 0x62746E33@ha
/* 80373988 003708C8  38 C3 6E 33 */	addi r6, r3, 0x62746E33@l
/* 8037398C 003708CC  38 A0 00 4E */	li r5, 0x4e
/* 80373990 003708D0  80 64 00 08 */	lwz r3, 8(r4)
/* 80373994 003708D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80373998 003708D8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037399C 003708DC  7D 89 03 A6 */	mtctr r12
/* 803739A0 003708E0  4E 80 04 21 */	bctrl 
/* 803739A4 003708E4  90 7F 01 14 */	stw r3, 0x114(r31)
/* 803739A8 003708E8  80 1F 01 14 */	lwz r0, 0x114(r31)
/* 803739AC 003708EC  28 00 00 00 */	cmplwi r0, 0
/* 803739B0 003708F0  40 82 00 20 */	bne .L_803739D0
/* 803739B4 003708F4  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 803739B8 003708F8  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 803739BC 003708FC  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 803739C0 00370900  38 80 04 BB */	li r4, 0x4bb
/* 803739C4 00370904  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 803739C8 00370908  4C C6 31 82 */	crclr 6
/* 803739CC 0037090C  4B CB 6C 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803739D0:
/* 803739D0 00370910  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803739D4 00370914  3C A0 64 65 */	lis r5, 0x64656D6F@ha
/* 803739D8 00370918  3C 80 00 6D */	lis r4, 0x006D675F@ha
/* 803739DC 0037091C  80 63 00 08 */	lwz r3, 8(r3)
/* 803739E0 00370920  38 C5 6D 6F */	addi r6, r5, 0x64656D6F@l
/* 803739E4 00370924  38 A4 67 5F */	addi r5, r4, 0x006D675F@l
/* 803739E8 00370928  81 83 00 00 */	lwz r12, 0(r3)
/* 803739EC 0037092C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803739F0 00370930  7D 89 03 A6 */	mtctr r12
/* 803739F4 00370934  4E 80 04 21 */	bctrl 
/* 803739F8 00370938  90 7F 01 10 */	stw r3, 0x110(r31)
/* 803739FC 0037093C  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 80373A00 00370940  28 00 00 00 */	cmplwi r0, 0
/* 80373A04 00370944  40 82 00 20 */	bne .L_80373A24
/* 80373A08 00370948  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 80373A0C 0037094C  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 80373A10 00370950  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 80373A14 00370954  38 80 04 BF */	li r4, 0x4bf
/* 80373A18 00370958  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 80373A1C 0037095C  4C C6 31 82 */	crclr 6
/* 80373A20 00370960  4B CB 6C 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80373A24:
/* 80373A24 00370964  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 80373A28 00370968  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80373A2C 0037096C  54 00 10 3A */	slwi r0, r0, 2
/* 80373A30 00370970  C0 22 08 38 */	lfs f1, lbl_8051EB98@sda21(r2)
/* 80373A34 00370974  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373A38 00370978  C0 02 08 3C */	lfs f0, lbl_8051EB9C@sda21(r2)
/* 80373A3C 0037097C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 80373A40 00370980  EC 22 08 28 */	fsubs f1, f2, f1
/* 80373A44 00370984  D0 3F 00 A8 */	stfs f1, 0xa8(r31)
/* 80373A48 00370988  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 80373A4C 0037098C  EC 01 00 2A */	fadds f0, f1, f0
/* 80373A50 00370990  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 80373A54 00370994  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80373A58 00370998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80373A5C 0037099C  7C 08 03 A6 */	mtlr r0
/* 80373A60 003709A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80373A64 003709A4  4E 80 00 20 */	blr 
.endfn paneInit__Q28Morimura10TZukanBaseFv

.fn changePaneInfo__Q28Morimura10TZukanBaseFv, global
/* 80373A68 003709A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80373A6C 003709AC  7C 08 02 A6 */	mflr r0
/* 80373A70 003709B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80373A74 003709B4  38 00 00 01 */	li r0, 1
/* 80373A78 003709B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80373A7C 003709BC  7C 7F 1B 78 */	mr r31, r3
/* 80373A80 003709C0  98 03 02 15 */	stb r0, 0x215(r3)
/* 80373A84 003709C4  98 03 02 19 */	stb r0, 0x219(r3)
/* 80373A88 003709C8  80 03 00 94 */	lwz r0, 0x94(r3)
/* 80373A8C 003709CC  80 63 00 88 */	lwz r3, 0x88(r3)
/* 80373A90 003709D0  54 00 10 3A */	slwi r0, r0, 2
/* 80373A94 003709D4  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373A98 003709D8  48 02 EB 25 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80373A9C 003709DC  38 03 00 01 */	addi r0, r3, 1
/* 80373AA0 003709E0  7F E3 FB 78 */	mr r3, r31
/* 80373AA4 003709E4  90 1F 01 94 */	stw r0, 0x194(r31)
/* 80373AA8 003709E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80373AAC 003709EC  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 80373AB0 003709F0  7D 89 03 A6 */	mtctr r12
/* 80373AB4 003709F4  4E 80 04 21 */	bctrl 
/* 80373AB8 003709F8  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80373ABC 003709FC  28 00 00 00 */	cmplwi r0, 0
/* 80373AC0 00370A00  41 82 00 5C */	beq .L_80373B1C
/* 80373AC4 00370A04  88 1F 02 42 */	lbz r0, 0x242(r31)
/* 80373AC8 00370A08  28 00 00 00 */	cmplwi r0, 0
/* 80373ACC 00370A0C  40 82 00 50 */	bne .L_80373B1C
/* 80373AD0 00370A10  80 9F 00 94 */	lwz r4, 0x94(r31)
/* 80373AD4 00370A14  2C 04 00 00 */	cmpwi r4, 0
/* 80373AD8 00370A18  40 82 00 10 */	bne .L_80373AE8
/* 80373ADC 00370A1C  80 7F 00 EC */	lwz r3, 0xec(r31)
/* 80373AE0 00370A20  4B FB 99 71 */	bl stickDown__Q32og6Screen12StickAnimMgrFv
/* 80373AE4 00370A24  48 00 00 38 */	b .L_80373B1C
.L_80373AE8:
/* 80373AE8 00370A28  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80373AEC 00370A2C  80 1F 02 38 */	lwz r0, 0x238(r31)
/* 80373AF0 00370A30  38 63 55 56 */	addi r3, r3, 0x55555556@l
/* 80373AF4 00370A34  7C 63 00 96 */	mulhw r3, r3, r0
/* 80373AF8 00370A38  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80373AFC 00370A3C  7C 03 02 14 */	add r0, r3, r0
/* 80373B00 00370A40  7C 04 00 00 */	cmpw r4, r0
/* 80373B04 00370A44  40 82 00 10 */	bne .L_80373B14
/* 80373B08 00370A48  80 7F 00 EC */	lwz r3, 0xec(r31)
/* 80373B0C 00370A4C  4B FB 98 71 */	bl stickUp__Q32og6Screen12StickAnimMgrFv
/* 80373B10 00370A50  48 00 00 0C */	b .L_80373B1C
.L_80373B14:
/* 80373B14 00370A54  80 7F 00 EC */	lwz r3, 0xec(r31)
/* 80373B18 00370A58  4B FB 9A 21 */	bl stickUpDown__Q32og6Screen12StickAnimMgrFv
.L_80373B1C:
/* 80373B1C 00370A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80373B20 00370A60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80373B24 00370A64  7C 08 03 A6 */	mtlr r0
/* 80373B28 00370A68  38 21 00 10 */	addi r1, r1, 0x10
/* 80373B2C 00370A6C  4E 80 00 20 */	blr 
.endfn changePaneInfo__Q28Morimura10TZukanBaseFv

.fn changeName__Q28Morimura10TZukanBaseFv, global
/* 80373B30 00370A70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80373B34 00370A74  7C 08 02 A6 */	mflr r0
/* 80373B38 00370A78  90 01 00 24 */	stw r0, 0x24(r1)
/* 80373B3C 00370A7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80373B40 00370A80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80373B44 00370A84  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80373B48 00370A88  7C 7D 1B 78 */	mr r29, r3
/* 80373B4C 00370A8C  80 03 00 94 */	lwz r0, 0x94(r3)
/* 80373B50 00370A90  80 63 00 88 */	lwz r3, 0x88(r3)
/* 80373B54 00370A94  54 00 10 3A */	slwi r0, r0, 2
/* 80373B58 00370A98  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373B5C 00370A9C  48 02 EA 61 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80373B60 00370AA0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80373B64 00370AA4  41 80 00 58 */	blt .L_80373BBC
/* 80373B68 00370AA8  7F A3 EB 78 */	mr r3, r29
/* 80373B6C 00370AAC  7F E4 FB 78 */	mr r4, r31
/* 80373B70 00370AB0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80373B74 00370AB4  83 DD 01 08 */	lwz r30, 0x108(r29)
/* 80373B78 00370AB8  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80373B7C 00370ABC  7D 89 03 A6 */	mtctr r12
/* 80373B80 00370AC0  4E 80 04 21 */	bctrl 
/* 80373B84 00370AC4  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 80373B88 00370AC8  90 7E 00 18 */	stw r3, 0x18(r30)
/* 80373B8C 00370ACC  80 1D 01 0C */	lwz r0, 0x10c(r29)
/* 80373B90 00370AD0  28 00 00 00 */	cmplwi r0, 0
/* 80373B94 00370AD4  41 82 00 08 */	beq .L_80373B9C
/* 80373B98 00370AD8  7C 1E 03 78 */	mr r30, r0
.L_80373B9C:
/* 80373B9C 00370ADC  7F A3 EB 78 */	mr r3, r29
/* 80373BA0 00370AE0  7F E4 FB 78 */	mr r4, r31
/* 80373BA4 00370AE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80373BA8 00370AE8  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80373BAC 00370AEC  7D 89 03 A6 */	mtctr r12
/* 80373BB0 00370AF0  4E 80 04 21 */	bctrl 
/* 80373BB4 00370AF4  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 80373BB8 00370AF8  90 7E 00 18 */	stw r3, 0x18(r30)
.L_80373BBC:
/* 80373BBC 00370AFC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80373BC0 00370B00  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80373BC4 00370B04  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80373BC8 00370B08  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80373BCC 00370B0C  7C 08 03 A6 */	mtlr r0
/* 80373BD0 00370B10  38 21 00 20 */	addi r1, r1, 0x20
/* 80373BD4 00370B14  4E 80 00 20 */	blr 
.endfn changeName__Q28Morimura10TZukanBaseFv

.fn doUpdateIn__Q28Morimura10TZukanBaseFv, global
/* 80373BD8 00370B18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80373BDC 00370B1C  7C 08 02 A6 */	mflr r0
/* 80373BE0 00370B20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80373BE4 00370B24  80 83 00 DC */	lwz r4, 0xdc(r3)
/* 80373BE8 00370B28  80 04 00 20 */	lwz r0, 0x20(r4)
/* 80373BEC 00370B2C  7C 00 00 34 */	cntlzw r0, r0
/* 80373BF0 00370B30  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80373BF4 00370B34  41 82 00 30 */	beq .L_80373C24
/* 80373BF8 00370B38  88 04 00 18 */	lbz r0, 0x18(r4)
/* 80373BFC 00370B3C  28 00 00 00 */	cmplwi r0, 0
/* 80373C00 00370B40  41 82 00 24 */	beq .L_80373C24
/* 80373C04 00370B44  38 00 00 00 */	li r0, 0
/* 80373C08 00370B48  98 04 00 18 */	stb r0, 0x18(r4)
/* 80373C0C 00370B4C  88 03 02 1B */	lbz r0, 0x21b(r3)
/* 80373C10 00370B50  28 00 00 00 */	cmplwi r0, 0
/* 80373C14 00370B54  41 82 00 0C */	beq .L_80373C20
/* 80373C18 00370B58  48 00 06 4D */	bl doPushXButton__Q28Morimura10TZukanBaseFv
/* 80373C1C 00370B5C  48 00 00 08 */	b .L_80373C24
.L_80373C20:
/* 80373C20 00370B60  48 00 07 59 */	bl doPushYButton__Q28Morimura10TZukanBaseFv
.L_80373C24:
/* 80373C24 00370B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80373C28 00370B68  7C 08 03 A6 */	mtlr r0
/* 80373C2C 00370B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80373C30 00370B70  4E 80 00 20 */	blr 
.endfn doUpdateIn__Q28Morimura10TZukanBaseFv

.fn doUpdateOut__Q28Morimura10TZukanBaseFv, global
/* 80373C34 00370B74  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80373C38 00370B78  7C 08 02 A6 */	mflr r0
/* 80373C3C 00370B7C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80373C40 00370B80  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80373C44 00370B84  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80373C48 00370B88  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 80373C4C 00370B8C  7C 7B 1B 78 */	mr r27, r3
/* 80373C50 00370B90  C0 02 08 40 */	lfs f0, lbl_8051EBA0@sda21(r2)
/* 80373C54 00370B94  C0 43 02 04 */	lfs f2, 0x204(r3)
/* 80373C58 00370B98  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 80373C5C 00370B9C  EC 22 08 2A */	fadds f1, f2, f1
/* 80373C60 00370BA0  D0 23 02 04 */	stfs f1, 0x204(r3)
/* 80373C64 00370BA4  C0 23 02 04 */	lfs f1, 0x204(r3)
/* 80373C68 00370BA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80373C6C 00370BAC  40 81 00 0C */	ble .L_80373C78
/* 80373C70 00370BB0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80373C74 00370BB4  D0 1B 02 04 */	stfs f0, 0x204(r27)
.L_80373C78:
/* 80373C78 00370BB8  C0 3B 02 04 */	lfs f1, 0x204(r27)
/* 80373C7C 00370BBC  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80373C80 00370BC0  C0 5B 02 08 */	lfs f2, 0x208(r27)
/* 80373C84 00370BC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80373C88 00370BC8  40 80 00 30 */	bge .L_80373CB8
/* 80373C8C 00370BCC  C0 02 08 48 */	lfs f0, lbl_8051EBA8@sda21(r2)
/* 80373C90 00370BD0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80373C94 00370BD4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80373C98 00370BD8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80373C9C 00370BDC  FC 00 00 1E */	fctiwz f0, f0
/* 80373CA0 00370BE0  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80373CA4 00370BE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80373CA8 00370BE8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80373CAC 00370BEC  7C 03 04 2E */	lfsx f0, r3, r0
/* 80373CB0 00370BF0  FC 20 00 50 */	fneg f1, f0
/* 80373CB4 00370BF4  48 00 00 28 */	b .L_80373CDC
.L_80373CB8:
/* 80373CB8 00370BF8  C0 02 08 4C */	lfs f0, lbl_8051EBAC@sda21(r2)
/* 80373CBC 00370BFC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80373CC0 00370C00  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80373CC4 00370C04  EC 01 00 32 */	fmuls f0, f1, f0
/* 80373CC8 00370C08  FC 00 00 1E */	fctiwz f0, f0
/* 80373CCC 00370C0C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80373CD0 00370C10  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80373CD4 00370C14  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80373CD8 00370C18  7C 23 04 2E */	lfsx f1, r3, r0
.L_80373CDC:
/* 80373CDC 00370C1C  C0 02 08 44 */	lfs f0, lbl_8051EBA4@sda21(r2)
/* 80373CE0 00370C20  3B 80 00 00 */	li r28, 0
/* 80373CE4 00370C24  3B 40 00 00 */	li r26, 0
/* 80373CE8 00370C28  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80373CEC 00370C2C  D0 1B 02 10 */	stfs f0, 0x210(r27)
/* 80373CF0 00370C30  48 00 00 18 */	b .L_80373D08
.L_80373CF4:
/* 80373CF4 00370C34  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80373CF8 00370C38  7C 63 D0 2E */	lwzx r3, r3, r26
/* 80373CFC 00370C3C  48 02 E5 AD */	bl update__Q28Morimura10TIndexPaneFv
/* 80373D00 00370C40  3B 5A 00 04 */	addi r26, r26, 4
/* 80373D04 00370C44  3B 9C 00 01 */	addi r28, r28, 1
.L_80373D08:
/* 80373D08 00370C48  A8 1B 00 8E */	lha r0, 0x8e(r27)
/* 80373D0C 00370C4C  7C 1C 00 00 */	cmpw r28, r0
/* 80373D10 00370C50  41 80 FF E4 */	blt .L_80373CF4
/* 80373D14 00370C54  80 1B 00 94 */	lwz r0, 0x94(r27)
/* 80373D18 00370C58  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80373D1C 00370C5C  54 00 10 3A */	slwi r0, r0, 2
/* 80373D20 00370C60  83 CD 99 C8 */	lwz r30, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80373D24 00370C64  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373D28 00370C68  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80373D2C 00370C6C  2C 00 00 00 */	cmpwi r0, 0
/* 80373D30 00370C70  41 82 00 38 */	beq .L_80373D68
/* 80373D34 00370C74  C0 22 08 50 */	lfs f1, lbl_8051EBB0@sda21(r2)
/* 80373D38 00370C78  C0 1B 01 74 */	lfs f0, 0x174(r27)
/* 80373D3C 00370C7C  80 7B 01 30 */	lwz r3, 0x130(r27)
/* 80373D40 00370C80  EC 01 00 2A */	fadds f0, f1, f0
/* 80373D44 00370C84  C0 3B 01 78 */	lfs f1, 0x178(r27)
/* 80373D48 00370C88  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80373D4C 00370C8C  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 80373D50 00370C90  81 83 00 00 */	lwz r12, 0(r3)
/* 80373D54 00370C94  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80373D58 00370C98  7D 89 03 A6 */	mtctr r12
/* 80373D5C 00370C9C  4E 80 04 21 */	bctrl 
/* 80373D60 00370CA0  3B C0 00 01 */	li r30, 1
/* 80373D64 00370CA4  48 00 01 00 */	b .L_80373E64
.L_80373D68:
/* 80373D68 00370CA8  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80373D6C 00370CAC  28 00 00 00 */	cmplwi r0, 0
/* 80373D70 00370CB0  41 82 00 A8 */	beq .L_80373E18
/* 80373D74 00370CB4  80 1B 02 30 */	lwz r0, 0x230(r27)
/* 80373D78 00370CB8  2C 00 00 00 */	cmpwi r0, 0
/* 80373D7C 00370CBC  40 81 00 9C */	ble .L_80373E18
/* 80373D80 00370CC0  48 02 E8 3D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80373D84 00370CC4  2C 03 00 00 */	cmpwi r3, 0
/* 80373D88 00370CC8  40 80 00 90 */	bge .L_80373E18
/* 80373D8C 00370CCC  80 1B 02 34 */	lwz r0, 0x234(r27)
/* 80373D90 00370CD0  80 9B 02 30 */	lwz r4, 0x230(r27)
/* 80373D94 00370CD4  2C 00 00 00 */	cmpwi r0, 0
/* 80373D98 00370CD8  41 80 00 08 */	blt .L_80373DA0
/* 80373D9C 00370CDC  7C 04 03 78 */	mr r4, r0
.L_80373DA0:
/* 80373DA0 00370CE0  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80373DA4 00370CE4  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 80373DA8 00370CE8  7C 60 20 96 */	mulhw r3, r0, r4
/* 80373DAC 00370CEC  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80373DB0 00370CF0  7C 03 02 14 */	add r0, r3, r0
/* 80373DB4 00370CF4  1C 00 00 03 */	mulli r0, r0, 3
/* 80373DB8 00370CF8  7F C0 20 50 */	subf r30, r0, r4
/* 80373DBC 00370CFC  37 DE FF FF */	addic. r30, r30, -1
/* 80373DC0 00370D00  40 80 00 08 */	bge .L_80373DC8
/* 80373DC4 00370D04  3B C0 00 00 */	li r30, 0
.L_80373DC8:
/* 80373DC8 00370D08  93 CD 99 C8 */	stw r30, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80373DCC 00370D0C  7F 63 DB 78 */	mr r3, r27
/* 80373DD0 00370D10  81 9B 00 00 */	lwz r12, 0(r27)
/* 80373DD4 00370D14  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80373DD8 00370D18  7D 89 03 A6 */	mtctr r12
/* 80373DDC 00370D1C  4E 80 04 21 */	bctrl 
/* 80373DE0 00370D20  80 1B 00 94 */	lwz r0, 0x94(r27)
/* 80373DE4 00370D24  80 9B 00 88 */	lwz r4, 0x88(r27)
/* 80373DE8 00370D28  54 03 10 3A */	slwi r3, r0, 2
/* 80373DEC 00370D2C  80 0D 99 C8 */	lwz r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80373DF0 00370D30  7C 64 18 2E */	lwzx r3, r4, r3
/* 80373DF4 00370D34  54 00 10 3A */	slwi r0, r0, 2
/* 80373DF8 00370D38  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 80373DFC 00370D3C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80373E00 00370D40  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373E04 00370D44  48 02 ED 91 */	bl startScaleUp__Q28Morimura9TIconInfoFf
/* 80373E08 00370D48  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80373E0C 00370D4C  38 80 18 02 */	li r4, 0x1802
/* 80373E10 00370D50  38 A0 00 00 */	li r5, 0
/* 80373E14 00370D54  4B FC 48 1D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80373E18:
/* 80373E18 00370D58  80 8D 99 C8 */	lwz r4, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80373E1C 00370D5C  3C 00 43 30 */	lis r0, 0x4330
/* 80373E20 00370D60  90 01 00 28 */	stw r0, 0x28(r1)
/* 80373E24 00370D64  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 80373E28 00370D68  C8 42 08 20 */	lfd f2, lbl_8051EB80@sda21(r2)
/* 80373E2C 00370D6C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80373E30 00370D70  C0 62 08 50 */	lfs f3, lbl_8051EBB0@sda21(r2)
/* 80373E34 00370D74  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 80373E38 00370D78  C0 1B 01 74 */	lfs f0, 0x174(r27)
/* 80373E3C 00370D7C  EC 21 10 28 */	fsubs f1, f1, f2
/* 80373E40 00370D80  80 7B 01 30 */	lwz r3, 0x130(r27)
/* 80373E44 00370D84  C0 5B 01 78 */	lfs f2, 0x178(r27)
/* 80373E48 00370D88  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 80373E4C 00370D8C  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80373E50 00370D90  D0 43 00 D8 */	stfs f2, 0xd8(r3)
/* 80373E54 00370D94  81 83 00 00 */	lwz r12, 0(r3)
/* 80373E58 00370D98  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80373E5C 00370D9C  7D 89 03 A6 */	mtctr r12
/* 80373E60 00370DA0  4E 80 04 21 */	bctrl 
.L_80373E64:
/* 80373E64 00370DA4  80 7B 00 94 */	lwz r3, 0x94(r27)
/* 80373E68 00370DA8  57 C0 10 3A */	slwi r0, r30, 2
/* 80373E6C 00370DAC  80 9B 00 88 */	lwz r4, 0x88(r27)
/* 80373E70 00370DB0  3B C0 00 00 */	li r30, 0
/* 80373E74 00370DB4  54 63 10 3A */	slwi r3, r3, 2
/* 80373E78 00370DB8  7C 64 18 2E */	lwzx r3, r4, r3
/* 80373E7C 00370DBC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80373E80 00370DC0  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373E84 00370DC4  83 43 00 10 */	lwz r26, 0x10(r3)
/* 80373E88 00370DC8  48 00 00 A0 */	b .L_80373F28
.L_80373E8C:
/* 80373E8C 00370DCC  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80373E90 00370DD0  28 00 00 00 */	cmplwi r0, 0
/* 80373E94 00370DD4  41 82 00 28 */	beq .L_80373EBC
/* 80373E98 00370DD8  80 1B 02 30 */	lwz r0, 0x230(r27)
/* 80373E9C 00370DDC  2C 00 00 00 */	cmpwi r0, 0
/* 80373EA0 00370DE0  40 82 00 1C */	bne .L_80373EBC
/* 80373EA4 00370DE4  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 80373EA8 00370DE8  38 80 00 00 */	li r4, 0
/* 80373EAC 00370DEC  38 03 01 34 */	addi r0, r3, 0x134
/* 80373EB0 00370DF0  7C 7B 00 2E */	lwzx r3, r27, r0
/* 80373EB4 00370DF4  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 80373EB8 00370DF8  48 00 00 6C */	b .L_80373F24
.L_80373EBC:
/* 80373EBC 00370DFC  7F 44 D3 78 */	mr r4, r26
/* 80373EC0 00370E00  38 61 00 14 */	addi r3, r1, 0x14
/* 80373EC4 00370E04  57 C5 06 3E */	clrlwi r5, r30, 0x18
/* 80373EC8 00370E08  4B CC 50 D1 */	bl getGlbVtx__7J2DPaneCFUc
/* 80373ECC 00370E0C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80373ED0 00370E10  7F 44 D3 78 */	mr r4, r26
/* 80373ED4 00370E14  C0 1A 00 8C */	lfs f0, 0x8c(r26)
/* 80373ED8 00370E18  38 61 00 08 */	addi r3, r1, 8
/* 80373EDC 00370E1C  57 C5 06 3E */	clrlwi r5, r30, 0x18
/* 80373EE0 00370E20  EF E1 00 28 */	fsubs f31, f1, f0
/* 80373EE4 00370E24  4B CC 50 B5 */	bl getGlbVtx__7J2DPaneCFUc
/* 80373EE8 00370E28  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80373EEC 00370E2C  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 80373EF0 00370E30  C0 1A 00 9C */	lfs f0, 0x9c(r26)
/* 80373EF4 00370E34  38 03 01 34 */	addi r0, r3, 0x134
/* 80373EF8 00370E38  C0 5B 02 10 */	lfs f2, 0x210(r27)
/* 80373EFC 00370E3C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80373F00 00370E40  7C 7B 00 2E */	lwzx r3, r27, r0
/* 80373F04 00370E44  EC 02 07 F2 */	fmuls f0, f2, f31
/* 80373F08 00370E48  EC 22 00 72 */	fmuls f1, f2, f1
/* 80373F0C 00370E4C  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80373F10 00370E50  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 80373F14 00370E54  81 83 00 00 */	lwz r12, 0(r3)
/* 80373F18 00370E58  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80373F1C 00370E5C  7D 89 03 A6 */	mtctr r12
/* 80373F20 00370E60  4E 80 04 21 */	bctrl 
.L_80373F24:
/* 80373F24 00370E64  3B DE 00 01 */	addi r30, r30, 1
.L_80373F28:
/* 80373F28 00370E68  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 80373F2C 00370E6C  28 00 00 04 */	cmplwi r0, 4
/* 80373F30 00370E70  41 80 FF 5C */	blt .L_80373E8C
/* 80373F34 00370E74  3B A0 00 00 */	li r29, 0
/* 80373F38 00370E78  3B E0 00 00 */	li r31, 0
/* 80373F3C 00370E7C  3B CD 99 18 */	addi r30, r13, mCategoryScale__Q28Morimura10TZukanBase@sda21
/* 80373F40 00370E80  48 00 02 FC */	b .L_8037423C
.L_80373F44:
/* 80373F44 00370E84  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80373F48 00370E88  28 00 00 00 */	cmplwi r0, 0
/* 80373F4C 00370E8C  41 82 02 04 */	beq .L_80374150
/* 80373F50 00370E90  88 1B 02 42 */	lbz r0, 0x242(r27)
/* 80373F54 00370E94  3B 80 00 01 */	li r28, 1
/* 80373F58 00370E98  28 00 00 00 */	cmplwi r0, 0
/* 80373F5C 00370E9C  40 82 00 B8 */	bne .L_80374014
/* 80373F60 00370EA0  80 1B 00 94 */	lwz r0, 0x94(r27)
/* 80373F64 00370EA4  7C 1D 00 00 */	cmpw r29, r0
/* 80373F68 00370EA8  40 82 00 10 */	bne .L_80373F78
/* 80373F6C 00370EAC  80 1B 02 30 */	lwz r0, 0x230(r27)
/* 80373F70 00370EB0  2C 00 00 00 */	cmpwi r0, 0
/* 80373F74 00370EB4  40 82 00 A0 */	bne .L_80374014
.L_80373F78:
/* 80373F78 00370EB8  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80373F7C 00370EBC  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80373F80 00370EC0  48 02 E6 95 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80373F84 00370EC4  80 1B 00 94 */	lwz r0, 0x94(r27)
/* 80373F88 00370EC8  7C 7A 1B 78 */	mr r26, r3
/* 80373F8C 00370ECC  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80373F90 00370ED0  54 00 10 3A */	slwi r0, r0, 2
/* 80373F94 00370ED4  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373F98 00370ED8  48 02 E6 7D */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80373F9C 00370EDC  2C 1A 00 00 */	cmpwi r26, 0
/* 80373FA0 00370EE0  41 80 00 10 */	blt .L_80373FB0
/* 80373FA4 00370EE4  80 1B 02 38 */	lwz r0, 0x238(r27)
/* 80373FA8 00370EE8  2C 00 00 03 */	cmpwi r0, 3
/* 80373FAC 00370EEC  41 81 00 0C */	bgt .L_80373FB8
.L_80373FB0:
/* 80373FB0 00370EF0  3B 80 00 00 */	li r28, 0
/* 80373FB4 00370EF4  48 00 00 60 */	b .L_80374014
.L_80373FB8:
/* 80373FB8 00370EF8  7C 1A 18 00 */	cmpw r26, r3
/* 80373FBC 00370EFC  40 81 00 30 */	ble .L_80373FEC
/* 80373FC0 00370F00  80 1B 00 94 */	lwz r0, 0x94(r27)
/* 80373FC4 00370F04  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80373FC8 00370F08  54 00 10 3A */	slwi r0, r0, 2
/* 80373FCC 00370F0C  7C 83 F8 2E */	lwzx r4, r3, r31
/* 80373FD0 00370F10  7C 63 00 2E */	lwzx r3, r3, r0
/* 80373FD4 00370F14  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 80373FD8 00370F18  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80373FDC 00370F1C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80373FE0 00370F20  40 81 00 34 */	ble .L_80374014
/* 80373FE4 00370F24  3B 80 00 00 */	li r28, 0
/* 80373FE8 00370F28  48 00 00 2C */	b .L_80374014
.L_80373FEC:
/* 80373FEC 00370F2C  80 1B 00 94 */	lwz r0, 0x94(r27)
/* 80373FF0 00370F30  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80373FF4 00370F34  54 00 10 3A */	slwi r0, r0, 2
/* 80373FF8 00370F38  7C 83 F8 2E */	lwzx r4, r3, r31
/* 80373FFC 00370F3C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80374000 00370F40  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 80374004 00370F44  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80374008 00370F48  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8037400C 00370F4C  40 80 00 08 */	bge .L_80374014
/* 80374010 00370F50  3B 80 00 00 */	li r28, 0
.L_80374014:
/* 80374014 00370F54  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80374018 00370F58  41 82 00 80 */	beq .L_80374098
/* 8037401C 00370F5C  88 0D 85 B4 */	lbz r0, mDrawLineType__Q28Morimura10TZukanBase@sda21(r13)
/* 80374020 00370F60  2C 00 00 02 */	cmpwi r0, 2
/* 80374024 00370F64  41 82 00 44 */	beq .L_80374068
/* 80374028 00370F68  40 80 01 40 */	bge .L_80374168
/* 8037402C 00370F6C  2C 00 00 00 */	cmpwi r0, 0
/* 80374030 00370F70  40 80 00 08 */	bge .L_80374038
/* 80374034 00370F74  48 00 01 34 */	b .L_80374168
.L_80374038:
/* 80374038 00370F78  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 8037403C 00370F7C  38 00 00 01 */	li r0, 1
/* 80374040 00370F80  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80374044 00370F84  80 63 00 04 */	lwz r3, 4(r3)
/* 80374048 00370F88  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037404C 00370F8C  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80374050 00370F90  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80374054 00370F94  80 63 00 04 */	lwz r3, 4(r3)
/* 80374058 00370F98  4B CC 50 19 */	bl getFirstChildPane__7J2DPaneFv
/* 8037405C 00370F9C  38 00 00 01 */	li r0, 1
/* 80374060 00370FA0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80374064 00370FA4  48 00 01 04 */	b .L_80374168
.L_80374068:
/* 80374068 00370FA8  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 8037406C 00370FAC  38 00 00 01 */	li r0, 1
/* 80374070 00370FB0  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80374074 00370FB4  80 63 00 04 */	lwz r3, 4(r3)
/* 80374078 00370FB8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037407C 00370FBC  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80374080 00370FC0  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80374084 00370FC4  80 63 00 04 */	lwz r3, 4(r3)
/* 80374088 00370FC8  4B CC 4F E9 */	bl getFirstChildPane__7J2DPaneFv
/* 8037408C 00370FCC  38 00 00 00 */	li r0, 0
/* 80374090 00370FD0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80374094 00370FD4  48 00 00 D4 */	b .L_80374168
.L_80374098:
/* 80374098 00370FD8  88 0D 85 B4 */	lbz r0, mDrawLineType__Q28Morimura10TZukanBase@sda21(r13)
/* 8037409C 00370FDC  2C 00 00 01 */	cmpwi r0, 1
/* 803740A0 00370FE0  41 82 00 34 */	beq .L_803740D4
/* 803740A4 00370FE4  40 80 00 10 */	bge .L_803740B4
/* 803740A8 00370FE8  2C 00 00 00 */	cmpwi r0, 0
/* 803740AC 00370FEC  40 80 00 10 */	bge .L_803740BC
/* 803740B0 00370FF0  48 00 00 B8 */	b .L_80374168
.L_803740B4:
/* 803740B4 00370FF4  2C 00 00 03 */	cmpwi r0, 3
/* 803740B8 00370FF8  40 80 00 B0 */	bge .L_80374168
.L_803740BC:
/* 803740BC 00370FFC  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 803740C0 00371000  38 00 00 00 */	li r0, 0
/* 803740C4 00371004  7C 63 F8 2E */	lwzx r3, r3, r31
/* 803740C8 00371008  80 63 00 04 */	lwz r3, 4(r3)
/* 803740CC 0037100C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803740D0 00371010  48 00 00 98 */	b .L_80374168
.L_803740D4:
/* 803740D4 00371014  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 803740D8 00371018  38 00 00 01 */	li r0, 1
/* 803740DC 0037101C  7C 63 F8 2E */	lwzx r3, r3, r31
/* 803740E0 00371020  80 63 00 04 */	lwz r3, 4(r3)
/* 803740E4 00371024  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803740E8 00371028  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 803740EC 0037102C  7C 63 F8 2E */	lwzx r3, r3, r31
/* 803740F0 00371030  80 63 00 04 */	lwz r3, 4(r3)
/* 803740F4 00371034  4B CC 4F 7D */	bl getFirstChildPane__7J2DPaneFv
/* 803740F8 00371038  38 80 00 01 */	li r4, 1
/* 803740FC 0037103C  38 00 00 00 */	li r0, 0
/* 80374100 00371040  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 80374104 00371044  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80374108 00371048  7C 63 F8 2E */	lwzx r3, r3, r31
/* 8037410C 0037104C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80374110 00371050  80 63 00 00 */	lwz r3, 0(r3)
/* 80374114 00371054  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80374118 00371058  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037411C 0037105C  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80374120 00371060  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80374124 00371064  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80374128 00371068  80 63 00 04 */	lwz r3, 4(r3)
/* 8037412C 0037106C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80374130 00371070  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80374134 00371074  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80374138 00371078  7C 63 F8 2E */	lwzx r3, r3, r31
/* 8037413C 0037107C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80374140 00371080  80 63 00 08 */	lwz r3, 8(r3)
/* 80374144 00371084  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80374148 00371088  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037414C 0037108C  48 00 00 1C */	b .L_80374168
.L_80374150:
/* 80374150 00371090  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80374154 00371094  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80374158 00371098  80 63 00 04 */	lwz r3, 4(r3)
/* 8037415C 0037109C  4B CC 4F 15 */	bl getFirstChildPane__7J2DPaneFv
/* 80374160 003710A0  38 00 00 00 */	li r0, 0
/* 80374164 003710A4  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80374168:
/* 80374168 003710A8  88 1B 02 41 */	lbz r0, 0x241(r27)
/* 8037416C 003710AC  28 00 00 00 */	cmplwi r0, 0
/* 80374170 003710B0  41 82 00 C4 */	beq .L_80374234
/* 80374174 003710B4  3B 80 00 00 */	li r28, 0
/* 80374178 003710B8  3B 40 00 00 */	li r26, 0
.L_8037417C:
/* 8037417C 003710BC  80 1B 00 88 */	lwz r0, 0x88(r27)
/* 80374180 003710C0  7C 7F 00 2E */	lwzx r3, r31, r0
/* 80374184 003710C4  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80374188 003710C8  7C 83 D0 2E */	lwzx r4, r3, r26
/* 8037418C 003710CC  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80374190 003710D0  80 64 00 04 */	lwz r3, 4(r4)
/* 80374194 003710D4  28 00 00 00 */	cmplwi r0, 0
/* 80374198 003710D8  41 82 00 84 */	beq .L_8037421C
/* 8037419C 003710DC  80 84 00 10 */	lwz r4, 0x10(r4)
/* 803741A0 003710E0  88 04 00 B0 */	lbz r0, 0xb0(r4)
/* 803741A4 003710E4  28 00 00 00 */	cmplwi r0, 0
/* 803741A8 003710E8  41 82 00 74 */	beq .L_8037421C
/* 803741AC 003710EC  38 00 00 01 */	li r0, 1
/* 803741B0 003710F0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803741B4 003710F4  80 1B 00 88 */	lwz r0, 0x88(r27)
/* 803741B8 003710F8  7C 9F 00 2E */	lwzx r4, r31, r0
/* 803741BC 003710FC  80 04 00 0C */	lwz r0, 0xc(r4)
/* 803741C0 00371100  2C 00 00 00 */	cmpwi r0, 0
/* 803741C4 00371104  40 82 00 28 */	bne .L_803741EC
/* 803741C8 00371108  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803741CC 0037110C  C0 0D 99 18 */	lfs f0, mCategoryScale__Q28Morimura10TZukanBase@sda21(r13)
/* 803741D0 00371110  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 803741D4 00371114  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 803741D8 00371118  81 83 00 00 */	lwz r12, 0(r3)
/* 803741DC 0037111C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803741E0 00371120  7D 89 03 A6 */	mtctr r12
/* 803741E4 00371124  4E 80 04 21 */	bctrl 
/* 803741E8 00371128  48 00 00 3C */	b .L_80374224
.L_803741EC:
/* 803741EC 0037112C  C0 4D 85 AC */	lfs f2, mLargeCategoryScale__Q28Morimura10TZukanBase@sda21(r13)
/* 803741F0 00371130  C0 0D 99 18 */	lfs f0, mCategoryScale__Q28Morimura10TZukanBase@sda21(r13)
/* 803741F4 00371134  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803741F8 00371138  EC 00 00 B2 */	fmuls f0, f0, f2
/* 803741FC 0037113C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80374200 00371140  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80374204 00371144  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 80374208 00371148  81 83 00 00 */	lwz r12, 0(r3)
/* 8037420C 0037114C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80374210 00371150  7D 89 03 A6 */	mtctr r12
/* 80374214 00371154  4E 80 04 21 */	bctrl 
/* 80374218 00371158  48 00 00 0C */	b .L_80374224
.L_8037421C:
/* 8037421C 0037115C  38 00 00 00 */	li r0, 0
/* 80374220 00371160  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80374224:
/* 80374224 00371164  3B 9C 00 01 */	addi r28, r28, 1
/* 80374228 00371168  3B 5A 00 04 */	addi r26, r26, 4
/* 8037422C 0037116C  2C 1C 00 03 */	cmpwi r28, 3
/* 80374230 00371170  41 80 FF 4C */	blt .L_8037417C
.L_80374234:
/* 80374234 00371174  3B FF 00 04 */	addi r31, r31, 4
/* 80374238 00371178  3B BD 00 01 */	addi r29, r29, 1
.L_8037423C:
/* 8037423C 0037117C  A8 1B 00 8E */	lha r0, 0x8e(r27)
/* 80374240 00371180  7C 1D 00 00 */	cmpw r29, r0
/* 80374244 00371184  41 80 FD 00 */	blt .L_80373F44
/* 80374248 00371188  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8037424C 0037118C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80374250 00371190  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 80374254 00371194  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80374258 00371198  7C 08 03 A6 */	mtlr r0
/* 8037425C 0037119C  38 21 00 60 */	addi r1, r1, 0x60
/* 80374260 003711A0  4E 80 00 20 */	blr 
.endfn doUpdateOut__Q28Morimura10TZukanBaseFv

.fn doPushXButton__Q28Morimura10TZukanBaseFv, global
/* 80374264 003711A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80374268 003711A8  7C 08 02 A6 */	mflr r0
/* 8037426C 003711AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80374270 003711B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80374274 003711B4  7C 7F 1B 78 */	mr r31, r3
/* 80374278 003711B8  88 03 01 7C */	lbz r0, 0x17c(r3)
/* 8037427C 003711BC  28 00 00 00 */	cmplwi r0, 0
/* 80374280 003711C0  41 82 00 E4 */	beq .L_80374364
/* 80374284 003711C4  88 1F 02 16 */	lbz r0, 0x216(r31)
/* 80374288 003711C8  28 00 00 00 */	cmplwi r0, 0
/* 8037428C 003711CC  41 82 00 14 */	beq .L_803742A0
/* 80374290 003711D0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80374294 003711D4  38 80 18 0F */	li r4, 0x180f
/* 80374298 003711D8  38 A0 00 00 */	li r5, 0
/* 8037429C 003711DC  4B FC 43 95 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803742A0:
/* 803742A0 003711E0  38 80 00 00 */	li r4, 0
/* 803742A4 003711E4  98 9F 02 16 */	stb r4, 0x216(r31)
/* 803742A8 003711E8  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803742AC 003711EC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 803742B0 003711F0  2C 00 00 00 */	cmpwi r0, 0
/* 803742B4 003711F4  40 82 00 5C */	bne .L_80374310
/* 803742B8 003711F8  98 9F 02 1B */	stb r4, 0x21b(r31)
/* 803742BC 003711FC  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 803742C0 00371200  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803742C4 00371204  54 00 10 3A */	slwi r0, r0, 2
/* 803742C8 00371208  7C 63 00 2E */	lwzx r3, r3, r0
/* 803742CC 0037120C  48 02 E2 F1 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 803742D0 00371210  81 9F 00 00 */	lwz r12, 0(r31)
/* 803742D4 00371214  7C 64 1B 78 */	mr r4, r3
/* 803742D8 00371218  7F E3 FB 78 */	mr r3, r31
/* 803742DC 0037121C  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 803742E0 00371220  7D 89 03 A6 */	mtctr r12
/* 803742E4 00371224  4E 80 04 21 */	bctrl 
/* 803742E8 00371228  7C 65 1B 78 */	mr r5, r3
/* 803742EC 0037122C  7F E3 FB 78 */	mr r3, r31
/* 803742F0 00371230  7C 86 23 78 */	mr r6, r4
/* 803742F4 00371234  48 00 04 A9 */	bl windowOpenClose__Q28Morimura10TZukanBaseFUx
/* 803742F8 00371238  7F E3 FB 78 */	mr r3, r31
/* 803742FC 0037123C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80374300 00371240  81 8C 00 C0 */	lwz r12, 0xc0(r12)
/* 80374304 00371244  7D 89 03 A6 */	mtctr r12
/* 80374308 00371248  4E 80 04 21 */	bctrl 
/* 8037430C 0037124C  48 00 00 58 */	b .L_80374364
.L_80374310:
/* 80374310 00371250  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 80374314 00371254  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80374318 00371258  54 00 10 3A */	slwi r0, r0, 2
/* 8037431C 0037125C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80374320 00371260  48 02 E2 9D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80374324 00371264  81 9F 00 00 */	lwz r12, 0(r31)
/* 80374328 00371268  7C 64 1B 78 */	mr r4, r3
/* 8037432C 0037126C  7F E3 FB 78 */	mr r3, r31
/* 80374330 00371270  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 80374334 00371274  7D 89 03 A6 */	mtctr r12
/* 80374338 00371278  4E 80 04 21 */	bctrl 
/* 8037433C 0037127C  7C 65 1B 78 */	mr r5, r3
/* 80374340 00371280  7F E3 FB 78 */	mr r3, r31
/* 80374344 00371284  7C 86 23 78 */	mr r6, r4
/* 80374348 00371288  48 00 04 55 */	bl windowOpenClose__Q28Morimura10TZukanBaseFUx
/* 8037434C 0037128C  88 1F 02 1B */	lbz r0, 0x21b(r31)
/* 80374350 00371290  28 00 00 00 */	cmplwi r0, 0
/* 80374354 00371294  41 82 00 10 */	beq .L_80374364
/* 80374358 00371298  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037435C 0037129C  38 00 00 01 */	li r0, 1
/* 80374360 003712A0  98 03 00 18 */	stb r0, 0x18(r3)
.L_80374364:
/* 80374364 003712A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80374368 003712A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037436C 003712AC  7C 08 03 A6 */	mtlr r0
/* 80374370 003712B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80374374 003712B4  4E 80 00 20 */	blr 
.endfn doPushXButton__Q28Morimura10TZukanBaseFv

.fn doPushYButton__Q28Morimura10TZukanBaseFv, global
/* 80374378 003712B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037437C 003712BC  7C 08 02 A6 */	mflr r0
/* 80374380 003712C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80374384 003712C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80374388 003712C8  7C 7F 1B 78 */	mr r31, r3
/* 8037438C 003712CC  88 03 01 7C */	lbz r0, 0x17c(r3)
/* 80374390 003712D0  28 00 00 00 */	cmplwi r0, 0
/* 80374394 003712D4  41 82 01 00 */	beq .L_80374494
/* 80374398 003712D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037439C 003712DC  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 803743A0 003712E0  7D 89 03 A6 */	mtctr r12
/* 803743A4 003712E4  4E 80 04 21 */	bctrl 
/* 803743A8 003712E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803743AC 003712EC  41 82 00 E8 */	beq .L_80374494
/* 803743B0 003712F0  88 1F 02 16 */	lbz r0, 0x216(r31)
/* 803743B4 003712F4  28 00 00 00 */	cmplwi r0, 0
/* 803743B8 003712F8  41 82 00 14 */	beq .L_803743CC
/* 803743BC 003712FC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803743C0 00371300  38 80 18 0F */	li r4, 0x180f
/* 803743C4 00371304  38 A0 00 00 */	li r5, 0
/* 803743C8 00371308  4B FC 42 69 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803743CC:
/* 803743CC 0037130C  38 00 00 00 */	li r0, 0
/* 803743D0 00371310  98 1F 02 16 */	stb r0, 0x216(r31)
/* 803743D4 00371314  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803743D8 00371318  80 03 00 20 */	lwz r0, 0x20(r3)
/* 803743DC 0037131C  2C 00 00 00 */	cmpwi r0, 0
/* 803743E0 00371320  40 82 00 60 */	bne .L_80374440
/* 803743E4 00371324  38 00 00 01 */	li r0, 1
/* 803743E8 00371328  98 1F 02 1B */	stb r0, 0x21b(r31)
/* 803743EC 0037132C  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 803743F0 00371330  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803743F4 00371334  54 00 10 3A */	slwi r0, r0, 2
/* 803743F8 00371338  7C 63 00 2E */	lwzx r3, r3, r0
/* 803743FC 0037133C  48 02 E1 C1 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80374400 00371340  81 9F 00 00 */	lwz r12, 0(r31)
/* 80374404 00371344  7C 64 1B 78 */	mr r4, r3
/* 80374408 00371348  7F E3 FB 78 */	mr r3, r31
/* 8037440C 0037134C  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80374410 00371350  7D 89 03 A6 */	mtctr r12
/* 80374414 00371354  4E 80 04 21 */	bctrl 
/* 80374418 00371358  7C 65 1B 78 */	mr r5, r3
/* 8037441C 0037135C  7F E3 FB 78 */	mr r3, r31
/* 80374420 00371360  7C 86 23 78 */	mr r6, r4
/* 80374424 00371364  48 00 03 79 */	bl windowOpenClose__Q28Morimura10TZukanBaseFUx
/* 80374428 00371368  7F E3 FB 78 */	mr r3, r31
/* 8037442C 0037136C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80374430 00371370  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80374434 00371374  7D 89 03 A6 */	mtctr r12
/* 80374438 00371378  4E 80 04 21 */	bctrl 
/* 8037443C 0037137C  48 00 00 58 */	b .L_80374494
.L_80374440:
/* 80374440 00371380  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 80374444 00371384  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80374448 00371388  54 00 10 3A */	slwi r0, r0, 2
/* 8037444C 0037138C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80374450 00371390  48 02 E1 6D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80374454 00371394  81 9F 00 00 */	lwz r12, 0(r31)
/* 80374458 00371398  7C 64 1B 78 */	mr r4, r3
/* 8037445C 0037139C  7F E3 FB 78 */	mr r3, r31
/* 80374460 003713A0  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80374464 003713A4  7D 89 03 A6 */	mtctr r12
/* 80374468 003713A8  4E 80 04 21 */	bctrl 
/* 8037446C 003713AC  7C 65 1B 78 */	mr r5, r3
/* 80374470 003713B0  7F E3 FB 78 */	mr r3, r31
/* 80374474 003713B4  7C 86 23 78 */	mr r6, r4
/* 80374478 003713B8  48 00 03 25 */	bl windowOpenClose__Q28Morimura10TZukanBaseFUx
/* 8037447C 003713BC  88 1F 02 1B */	lbz r0, 0x21b(r31)
/* 80374480 003713C0  28 00 00 00 */	cmplwi r0, 0
/* 80374484 003713C4  40 82 00 10 */	bne .L_80374494
/* 80374488 003713C8  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037448C 003713CC  38 00 00 01 */	li r0, 1
/* 80374490 003713D0  98 03 00 18 */	stb r0, 0x18(r3)
.L_80374494:
/* 80374494 003713D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80374498 003713D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037449C 003713DC  7C 08 03 A6 */	mtlr r0
/* 803744A0 003713E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803744A4 003713E4  4E 80 00 20 */	blr 
.endfn doPushYButton__Q28Morimura10TZukanBaseFv

.fn doPushBButton__Q28Morimura10TZukanBaseFv, global
/* 803744A8 003713E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803744AC 003713EC  7C 08 02 A6 */	mflr r0
/* 803744B0 003713F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803744B4 003713F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803744B8 003713F8  7C 7F 1B 78 */	mr r31, r3
/* 803744BC 003713FC  88 03 02 16 */	lbz r0, 0x216(r3)
/* 803744C0 00371400  28 00 00 00 */	cmplwi r0, 0
/* 803744C4 00371404  41 82 00 20 */	beq .L_803744E4
/* 803744C8 00371408  38 00 00 00 */	li r0, 0
/* 803744CC 0037140C  38 80 18 0F */	li r4, 0x180f
/* 803744D0 00371410  98 1F 02 16 */	stb r0, 0x216(r31)
/* 803744D4 00371414  38 A0 00 00 */	li r5, 0
/* 803744D8 00371418  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803744DC 0037141C  4B FC 41 55 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803744E0 00371420  48 00 00 64 */	b .L_80374544
.L_803744E4:
/* 803744E4 00371424  80 9F 00 DC */	lwz r4, 0xdc(r31)
/* 803744E8 00371428  80 04 00 20 */	lwz r0, 0x20(r4)
/* 803744EC 0037142C  2C 00 00 00 */	cmpwi r0, 0
/* 803744F0 00371430  41 82 00 44 */	beq .L_80374534
/* 803744F4 00371434  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 803744F8 00371438  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803744FC 0037143C  54 00 10 3A */	slwi r0, r0, 2
/* 80374500 00371440  7C 63 00 2E */	lwzx r3, r3, r0
/* 80374504 00371444  48 02 E0 B9 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80374508 00371448  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037450C 0037144C  7C 64 1B 78 */	mr r4, r3
/* 80374510 00371450  7F E3 FB 78 */	mr r3, r31
/* 80374514 00371454  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 80374518 00371458  7D 89 03 A6 */	mtctr r12
/* 8037451C 0037145C  4E 80 04 21 */	bctrl 
/* 80374520 00371460  7C 65 1B 78 */	mr r5, r3
/* 80374524 00371464  7F E3 FB 78 */	mr r3, r31
/* 80374528 00371468  7C 86 23 78 */	mr r6, r4
/* 8037452C 0037146C  48 00 02 71 */	bl windowOpenClose__Q28Morimura10TZukanBaseFUx
/* 80374530 00371470  48 00 00 14 */	b .L_80374544
.L_80374534:
/* 80374534 00371474  81 83 00 00 */	lwz r12, 0(r3)
/* 80374538 00371478  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8037453C 0037147C  7D 89 03 A6 */	mtctr r12
/* 80374540 00371480  4E 80 04 21 */	bctrl 
.L_80374544:
/* 80374544 00371484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80374548 00371488  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037454C 0037148C  7C 08 03 A6 */	mtlr r0
/* 80374550 00371490  38 21 00 10 */	addi r1, r1, 0x10
/* 80374554 00371494  4E 80 00 20 */	blr 
.endfn doPushBButton__Q28Morimura10TZukanBaseFv

.fn setShortenIndex__Q28Morimura10TZukanBaseFiib, global
/* 80374558 00371498  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8037455C 0037149C  7C 08 02 A6 */	mflr r0
/* 80374560 003714A0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80374564 003714A4  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 80374568 003714A8  7C 7A 1B 78 */	mr r26, r3
/* 8037456C 003714AC  7C BB 2B 78 */	mr r27, r5
/* 80374570 003714B0  88 03 02 40 */	lbz r0, 0x240(r3)
/* 80374574 003714B4  28 00 00 00 */	cmplwi r0, 0
/* 80374578 003714B8  41 82 01 FC */	beq .L_80374774
/* 8037457C 003714BC  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 80374580 003714C0  54 9E 10 3A */	slwi r30, r4, 2
/* 80374584 003714C4  7C 63 F0 2E */	lwzx r3, r3, r30
/* 80374588 003714C8  80 03 00 00 */	lwz r0, 0(r3)
/* 8037458C 003714CC  2C 00 00 00 */	cmpwi r0, 0
/* 80374590 003714D0  40 80 00 08 */	bge .L_80374598
/* 80374594 003714D4  3B 60 FF FF */	li r27, -1
.L_80374598:
/* 80374598 003714D8  93 63 00 00 */	stw r27, 0(r3)
/* 8037459C 003714DC  88 1A 00 8C */	lbz r0, 0x8c(r26)
/* 803745A0 003714E0  28 00 00 00 */	cmplwi r0, 0
/* 803745A4 003714E4  41 82 00 CC */	beq .L_80374670
/* 803745A8 003714E8  2C 1B 00 00 */	cmpwi r27, 0
/* 803745AC 003714EC  41 80 00 C4 */	blt .L_80374670
/* 803745B0 003714F0  80 1A 02 30 */	lwz r0, 0x230(r26)
/* 803745B4 003714F4  7C 1B 00 00 */	cmpw r27, r0
/* 803745B8 003714F8  40 80 00 B8 */	bge .L_80374670
/* 803745BC 003714FC  80 7A 02 2C */	lwz r3, 0x22c(r26)
/* 803745C0 00371500  57 7F 10 3A */	slwi r31, r27, 2
/* 803745C4 00371504  80 9A 01 84 */	lwz r4, 0x184(r26)
/* 803745C8 00371508  7C 03 F8 2E */	lwzx r0, r3, r31
/* 803745CC 0037150C  7C 04 00 AE */	lbzx r0, r4, r0
/* 803745D0 00371510  28 00 00 00 */	cmplwi r0, 0
/* 803745D4 00371514  41 82 00 9C */	beq .L_80374670
/* 803745D8 00371518  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 803745DC 0037151C  7F 64 DB 78 */	mr r4, r27
/* 803745E0 00371520  7C 63 F0 2E */	lwzx r3, r3, r30
/* 803745E4 00371524  48 02 DD F5 */	bl setIndex__Q28Morimura10TIndexPaneFi
/* 803745E8 00371528  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 803745EC 0037152C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 803745F0 00371530  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803745F4 00371534  2C 00 00 01 */	cmpwi r0, 1
/* 803745F8 00371538  41 82 00 5C */	beq .L_80374654
/* 803745FC 0037153C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80374600 00371540  28 00 00 00 */	cmplwi r0, 0
/* 80374604 00371544  41 82 00 20 */	beq .L_80374624
/* 80374608 00371548  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037460C 0037154C  38 A0 00 00 */	li r5, 0
/* 80374610 00371550  80 9A 02 2C */	lwz r4, 0x22c(r26)
/* 80374614 00371554  80 63 00 04 */	lwz r3, 4(r3)
/* 80374618 00371558  7C 84 F8 2E */	lwzx r4, r4, r31
/* 8037461C 0037155C  48 02 E3 C5 */	bl setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
/* 80374620 00371560  48 00 01 68 */	b .L_80374788
.L_80374624:
/* 80374624 00371564  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 80374628 00371568  7F 43 D3 78 */	mr r3, r26
/* 8037462C 0037156C  80 9A 02 2C */	lwz r4, 0x22c(r26)
/* 80374630 00371570  83 65 00 04 */	lwz r27, 4(r5)
/* 80374634 00371574  7C 84 F8 2E */	lwzx r4, r4, r31
/* 80374638 00371578  48 00 03 39 */	bl getTexInfo__Q28Morimura10TZukanBaseFi
/* 8037463C 0037157C  80 9A 02 2C */	lwz r4, 0x22c(r26)
/* 80374640 00371580  7C 65 1B 78 */	mr r5, r3
/* 80374644 00371584  7F 63 DB 78 */	mr r3, r27
/* 80374648 00371588  7C 84 F8 2E */	lwzx r4, r4, r31
/* 8037464C 0037158C  48 02 E3 95 */	bl setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
/* 80374650 00371590  48 00 01 38 */	b .L_80374788
.L_80374654:
/* 80374654 00371594  80 9A 02 2C */	lwz r4, 0x22c(r26)
/* 80374658 00371598  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037465C 0037159C  7C 84 F8 2E */	lwzx r4, r4, r31
/* 80374660 003715A0  80 63 00 04 */	lwz r3, 4(r3)
/* 80374664 003715A4  38 04 00 01 */	addi r0, r4, 1
/* 80374668 003715A8  90 03 00 18 */	stw r0, 0x18(r3)
/* 8037466C 003715AC  48 00 01 1C */	b .L_80374788
.L_80374670:
/* 80374670 003715B0  3B A0 00 00 */	li r29, 0
/* 80374674 003715B4  3B 80 00 00 */	li r28, 0
/* 80374678 003715B8  3B E0 00 00 */	li r31, 0
.L_8037467C:
/* 8037467C 003715BC  2C 1B 00 00 */	cmpwi r27, 0
/* 80374680 003715C0  41 80 00 B8 */	blt .L_80374738
/* 80374684 003715C4  80 1A 02 30 */	lwz r0, 0x230(r26)
/* 80374688 003715C8  7C 7C DA 14 */	add r3, r28, r27
/* 8037468C 003715CC  7C 03 00 00 */	cmpw r3, r0
/* 80374690 003715D0  40 80 00 A8 */	bge .L_80374738
/* 80374694 003715D4  80 1A 02 34 */	lwz r0, 0x234(r26)
/* 80374698 003715D8  2C 00 00 00 */	cmpwi r0, 0
/* 8037469C 003715DC  41 80 00 2C */	blt .L_803746C8
/* 803746A0 003715E0  7C 03 00 00 */	cmpw r3, r0
/* 803746A4 003715E4  41 80 00 24 */	blt .L_803746C8
/* 803746A8 003715E8  80 1A 00 88 */	lwz r0, 0x88(r26)
/* 803746AC 003715EC  38 80 FF FF */	li r4, -1
/* 803746B0 003715F0  38 A0 00 00 */	li r5, 0
/* 803746B4 003715F4  7C 7E 00 2E */	lwzx r3, r30, r0
/* 803746B8 003715F8  80 63 00 20 */	lwz r3, 0x20(r3)
/* 803746BC 003715FC  7C 63 F8 2E */	lwzx r3, r3, r31
/* 803746C0 00371600  48 02 E3 21 */	bl setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
/* 803746C4 00371604  48 00 00 90 */	b .L_80374754
.L_803746C8:
/* 803746C8 00371608  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803746CC 0037160C  28 00 00 00 */	cmplwi r0, 0
/* 803746D0 00371610  41 82 00 2C */	beq .L_803746FC
/* 803746D4 00371614  80 9A 00 88 */	lwz r4, 0x88(r26)
/* 803746D8 00371618  54 60 10 3A */	slwi r0, r3, 2
/* 803746DC 0037161C  80 7A 02 2C */	lwz r3, 0x22c(r26)
/* 803746E0 00371620  38 A0 00 00 */	li r5, 0
/* 803746E4 00371624  7C DE 20 2E */	lwzx r6, r30, r4
/* 803746E8 00371628  7C 83 00 2E */	lwzx r4, r3, r0
/* 803746EC 0037162C  80 66 00 20 */	lwz r3, 0x20(r6)
/* 803746F0 00371630  7C 63 F8 2E */	lwzx r3, r3, r31
/* 803746F4 00371634  48 02 E2 ED */	bl setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
/* 803746F8 00371638  48 00 00 5C */	b .L_80374754
.L_803746FC:
/* 803746FC 0037163C  80 1A 00 88 */	lwz r0, 0x88(r26)
/* 80374700 00371640  54 78 10 3A */	slwi r24, r3, 2
/* 80374704 00371644  80 9A 02 2C */	lwz r4, 0x22c(r26)
/* 80374708 00371648  7F 43 D3 78 */	mr r3, r26
/* 8037470C 0037164C  7C BE 00 2E */	lwzx r5, r30, r0
/* 80374710 00371650  7C 84 C0 2E */	lwzx r4, r4, r24
/* 80374714 00371654  80 A5 00 20 */	lwz r5, 0x20(r5)
/* 80374718 00371658  7F 25 F8 2E */	lwzx r25, r5, r31
/* 8037471C 0037165C  48 00 02 55 */	bl getTexInfo__Q28Morimura10TZukanBaseFi
/* 80374720 00371660  80 9A 02 2C */	lwz r4, 0x22c(r26)
/* 80374724 00371664  7C 65 1B 78 */	mr r5, r3
/* 80374728 00371668  7F 23 CB 78 */	mr r3, r25
/* 8037472C 0037166C  7C 84 C0 2E */	lwzx r4, r4, r24
/* 80374730 00371670  48 02 E2 B1 */	bl setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
/* 80374734 00371674  48 00 00 20 */	b .L_80374754
.L_80374738:
/* 80374738 00371678  80 1A 00 88 */	lwz r0, 0x88(r26)
/* 8037473C 0037167C  38 80 FF FF */	li r4, -1
/* 80374740 00371680  38 A0 00 00 */	li r5, 0
/* 80374744 00371684  7C 7E 00 2E */	lwzx r3, r30, r0
/* 80374748 00371688  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037474C 0037168C  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80374750 00371690  48 02 E2 91 */	bl setInfo__Q28Morimura9TIconInfoFiPC7ResTIMG
.L_80374754:
/* 80374754 00371694  3B BD 00 01 */	addi r29, r29, 1
/* 80374758 00371698  3B FF 00 04 */	addi r31, r31, 4
/* 8037475C 0037169C  2C 1D 00 02 */	cmpwi r29, 2
/* 80374760 003716A0  41 81 00 28 */	bgt .L_80374788
/* 80374764 003716A4  3B 9C 00 01 */	addi r28, r28, 1
/* 80374768 003716A8  2C 1C 00 03 */	cmpwi r28, 3
/* 8037476C 003716AC  41 80 FF 10 */	blt .L_8037467C
/* 80374770 003716B0  48 00 00 18 */	b .L_80374788
.L_80374774:
/* 80374774 003716B4  80 7A 00 88 */	lwz r3, 0x88(r26)
/* 80374778 003716B8  54 80 10 3A */	slwi r0, r4, 2
/* 8037477C 003716BC  7F 64 DB 78 */	mr r4, r27
/* 80374780 003716C0  7C 63 00 2E */	lwzx r3, r3, r0
/* 80374784 003716C4  48 02 DC 55 */	bl setIndex__Q28Morimura10TIndexPaneFi
.L_80374788:
/* 80374788 003716C8  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 8037478C 003716CC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80374790 003716D0  7C 08 03 A6 */	mtlr r0
/* 80374794 003716D4  38 21 00 30 */	addi r1, r1, 0x30
/* 80374798 003716D8  4E 80 00 20 */	blr 
.endfn setShortenIndex__Q28Morimura10TZukanBaseFiib

.fn windowOpenClose__Q28Morimura10TZukanBaseFUx, global
/* 8037479C 003716DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803747A0 003716E0  7C 08 02 A6 */	mflr r0
/* 803747A4 003716E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803747A8 003716E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803747AC 003716EC  7C 7F 1B 78 */	mr r31, r3
/* 803747B0 003716F0  88 03 01 7C */	lbz r0, 0x17c(r3)
/* 803747B4 003716F4  28 00 00 00 */	cmplwi r0, 0
/* 803747B8 003716F8  41 82 00 58 */	beq .L_80374810
/* 803747BC 003716FC  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803747C0 00371700  80 63 00 20 */	lwz r3, 0x20(r3)
/* 803747C4 00371704  7C 60 00 34 */	cntlzw r0, r3
/* 803747C8 00371708  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803747CC 0037170C  41 82 00 24 */	beq .L_803747F0
/* 803747D0 00371710  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 803747D4 00371714  38 00 00 00 */	li r0, 0
/* 803747D8 00371718  90 C3 00 1C */	stw r6, 0x1c(r3)
/* 803747DC 0037171C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 803747E0 00371720  98 1F 02 14 */	stb r0, 0x214(r31)
/* 803747E4 00371724  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803747E8 00371728  48 00 7A 41 */	bl windowOpen__Q28Morimura12TZukanWindowFv
/* 803747EC 0037172C  48 00 00 24 */	b .L_80374810
.L_803747F0:
/* 803747F0 00371730  2C 03 00 03 */	cmpwi r3, 3
/* 803747F4 00371734  41 82 00 1C */	beq .L_80374810
/* 803747F8 00371738  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803747FC 0037173C  38 80 18 11 */	li r4, 0x1811
/* 80374800 00371740  38 A0 00 00 */	li r5, 0
/* 80374804 00371744  4B FC 3E 2D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80374808 00371748  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037480C 0037174C  48 00 7B 0D */	bl windowClose__Q28Morimura12TZukanWindowFv
.L_80374810:
/* 80374810 00371750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80374814 00371754  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80374818 00371758  7C 08 03 A6 */	mtlr r0
/* 8037481C 0037175C  38 21 00 10 */	addi r1, r1, 0x10
/* 80374820 00371760  4E 80 00 20 */	blr 
.endfn windowOpenClose__Q28Morimura10TZukanBaseFUx

.fn isPanelExist__Q28Morimura10TZukanBaseFv, global
/* 80374824 00371764  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80374828 00371768  7C 08 02 A6 */	mflr r0
/* 8037482C 0037176C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80374830 00371770  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80374834 00371774  93 C1 00 08 */	stw r30, 8(r1)
/* 80374838 00371778  7C 7E 1B 78 */	mr r30, r3
/* 8037483C 0037177C  81 83 00 00 */	lwz r12, 0(r3)
/* 80374840 00371780  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80374844 00371784  7D 89 03 A6 */	mtctr r12
/* 80374848 00371788  4E 80 04 21 */	bctrl 
/* 8037484C 0037178C  80 1E 00 94 */	lwz r0, 0x94(r30)
/* 80374850 00371790  7C 7F 1B 78 */	mr r31, r3
/* 80374854 00371794  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80374858 00371798  54 00 10 3A */	slwi r0, r0, 2
/* 8037485C 0037179C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80374860 003717A0  48 02 DD 5D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80374864 003717A4  80 0D 99 C8 */	lwz r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80374868 003717A8  7C 00 1A 14 */	add r0, r0, r3
/* 8037486C 003717AC  7F E0 02 78 */	xor r0, r31, r0
/* 80374870 003717B0  7C 03 0E 70 */	srawi r3, r0, 1
/* 80374874 003717B4  7C 00 F8 38 */	and r0, r0, r31
/* 80374878 003717B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037487C 003717BC  7C 00 18 50 */	subf r0, r0, r3
/* 80374880 003717C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80374884 003717C4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80374888 003717C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037488C 003717CC  7C 08 03 A6 */	mtlr r0
/* 80374890 003717D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80374894 003717D4  4E 80 00 20 */	blr 
.endfn isPanelExist__Q28Morimura10TZukanBaseFv

.fn requireRequest__Q28Morimura10TZukanBaseFv, global
/* 80374898 003717D8  38 80 00 01 */	li r4, 1
/* 8037489C 003717DC  38 00 00 00 */	li r0, 0
/* 803748A0 003717E0  98 83 02 18 */	stb r4, 0x218(r3)
/* 803748A4 003717E4  90 03 02 20 */	stw r0, 0x220(r3)
/* 803748A8 003717E8  98 03 02 17 */	stb r0, 0x217(r3)
/* 803748AC 003717EC  4E 80 00 20 */	blr 
.endfn requireRequest__Q28Morimura10TZukanBaseFv

.fn requireEffectOff__Q28Morimura10TZukanBaseFv, global
/* 803748B0 003717F0  38 00 00 01 */	li r0, 1
/* 803748B4 003717F4  98 03 02 17 */	stb r0, 0x217(r3)
/* 803748B8 003717F8  4E 80 00 20 */	blr 
.endfn requireEffectOff__Q28Morimura10TZukanBaseFv

.fn isEnlargedWindow__Q28Morimura10TZukanBaseFv, global
/* 803748BC 003717FC  88 03 02 44 */	lbz r0, 0x244(r3)
/* 803748C0 00371800  28 00 00 00 */	cmplwi r0, 0
/* 803748C4 00371804  41 82 00 0C */	beq .L_803748D0
/* 803748C8 00371808  38 60 00 01 */	li r3, 1
/* 803748CC 0037180C  4E 80 00 20 */	blr 
.L_803748D0:
/* 803748D0 00371810  88 63 02 16 */	lbz r3, 0x216(r3)
/* 803748D4 00371814  4E 80 00 20 */	blr 
.endfn isEnlargedWindow__Q28Morimura10TZukanBaseFv

.fn isMemoWindow__Q28Morimura10TZukanBaseFv, global
/* 803748D8 00371818  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 803748DC 0037181C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 803748E0 00371820  2C 00 00 00 */	cmpwi r0, 0
/* 803748E4 00371824  41 82 00 0C */	beq .L_803748F0
/* 803748E8 00371828  38 60 00 01 */	li r3, 1
/* 803748EC 0037182C  4E 80 00 20 */	blr 
.L_803748F0:
/* 803748F0 00371830  38 60 00 00 */	li r3, 0
/* 803748F4 00371834  4E 80 00 20 */	blr 
.endfn isMemoWindow__Q28Morimura10TZukanBaseFv

.fn checkRequest__Q28Morimura10TZukanBaseFRi, global
/* 803748F8 00371838  80 03 01 9C */	lwz r0, 0x19c(r3)
/* 803748FC 0037183C  90 04 00 00 */	stw r0, 0(r4)
/* 80374900 00371840  80 63 01 98 */	lwz r3, 0x198(r3)
/* 80374904 00371844  4E 80 00 20 */	blr 
.endfn checkRequest__Q28Morimura10TZukanBaseFRi

.fn getCurrSelectId__Q28Morimura10TZukanBaseFv, global
/* 80374908 00371848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037490C 0037184C  7C 08 02 A6 */	mflr r0
/* 80374910 00371850  90 01 00 14 */	stw r0, 0x14(r1)
/* 80374914 00371854  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80374918 00371858  7C 7F 1B 78 */	mr r31, r3
/* 8037491C 0037185C  88 03 01 7C */	lbz r0, 0x17c(r3)
/* 80374920 00371860  28 00 00 00 */	cmplwi r0, 0
/* 80374924 00371864  41 82 00 34 */	beq .L_80374958
/* 80374928 00371868  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8037492C 0037186C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80374930 00371870  54 00 10 3A */	slwi r0, r0, 2
/* 80374934 00371874  7C 63 00 2E */	lwzx r3, r3, r0
/* 80374938 00371878  48 02 DC 85 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037493C 0037187C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80374940 00371880  7C 64 1B 78 */	mr r4, r3
/* 80374944 00371884  7F E3 FB 78 */	mr r3, r31
/* 80374948 00371888  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8037494C 0037188C  7D 89 03 A6 */	mtctr r12
/* 80374950 00371890  4E 80 04 21 */	bctrl 
/* 80374954 00371894  48 00 00 08 */	b .L_8037495C
.L_80374958:
/* 80374958 00371898  38 60 FF FF */	li r3, -1
.L_8037495C:
/* 8037495C 0037189C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80374960 003718A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80374964 003718A4  7C 08 03 A6 */	mtlr r0
/* 80374968 003718A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8037496C 003718AC  4E 80 00 20 */	blr 
.endfn getCurrSelectId__Q28Morimura10TZukanBaseFv

.fn getTexInfo__Q28Morimura10TZukanBaseFi, global
/* 80374970 003718B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80374974 003718B4  7C 08 02 A6 */	mflr r0
/* 80374978 003718B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037497C 003718BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80374980 003718C0  7C 9F 23 78 */	mr r31, r4
/* 80374984 003718C4  93 C1 00 08 */	stw r30, 8(r1)
/* 80374988 003718C8  7C 7E 1B 78 */	mr r30, r3
/* 8037498C 003718CC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80374990 003718D0  28 00 00 00 */	cmplwi r0, 0
/* 80374994 003718D4  41 82 00 24 */	beq .L_803749B8
/* 80374998 003718D8  80 7E 00 78 */	lwz r3, 0x78(r30)
/* 8037499C 003718DC  3C 80 80 49 */	lis r4, lbl_80492988@ha
/* 803749A0 003718E0  38 84 29 88 */	addi r4, r4, lbl_80492988@l
/* 803749A4 003718E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803749A8 003718E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803749AC 003718EC  7D 89 03 A6 */	mtctr r12
/* 803749B0 003718F0  4E 80 04 21 */	bctrl 
/* 803749B4 003718F4  48 00 00 C8 */	b .L_80374A7C
.L_803749B8:
/* 803749B8 003718F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803749BC 003718FC  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 803749C0 00371900  7D 89 03 A6 */	mtctr r12
/* 803749C4 00371904  4E 80 04 21 */	bctrl 
/* 803749C8 00371908  81 83 00 00 */	lwz r12, 0(r3)
/* 803749CC 0037190C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803749D0 00371910  7D 89 03 A6 */	mtctr r12
/* 803749D4 00371914  4E 80 04 21 */	bctrl 
/* 803749D8 00371918  3C A0 4E 45 */	lis r5, 0x4E454D59@ha
/* 803749DC 0037191C  38 00 44 45 */	li r0, 0x4445
/* 803749E0 00371920  38 A5 4D 59 */	addi r5, r5, 0x4E454D59@l
/* 803749E4 00371924  7C 84 2A 78 */	xor r4, r4, r5
/* 803749E8 00371928  7C 60 02 78 */	xor r0, r3, r0
/* 803749EC 0037192C  7C 80 03 79 */	or. r0, r4, r0
/* 803749F0 00371930  40 82 00 48 */	bne .L_80374A38
/* 803749F4 00371934  7F C3 F3 78 */	mr r3, r30
/* 803749F8 00371938  7F E4 FB 78 */	mr r4, r31
/* 803749FC 0037193C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80374A00 00371940  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80374A04 00371944  7D 89 03 A6 */	mtctr r12
/* 80374A08 00371948  4E 80 04 21 */	bctrl 
/* 80374A0C 0037194C  7C 7F 1B 78 */	mr r31, r3
/* 80374A10 00371950  7F C3 F3 78 */	mr r3, r30
/* 80374A14 00371954  81 9E 00 00 */	lwz r12, 0(r30)
/* 80374A18 00371958  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 80374A1C 0037195C  7D 89 03 A6 */	mtctr r12
/* 80374A20 00371960  4E 80 04 21 */	bctrl 
/* 80374A24 00371964  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80374A28 00371968  7F E4 FB 78 */	mr r4, r31
/* 80374A2C 0037196C  4B EB ED C5 */	bl getTexture__Q34Game11IconTexture3MgrFi
/* 80374A30 00371970  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80374A34 00371974  48 00 00 48 */	b .L_80374A7C
.L_80374A38:
/* 80374A38 00371978  7F C3 F3 78 */	mr r3, r30
/* 80374A3C 0037197C  7F E4 FB 78 */	mr r4, r31
/* 80374A40 00371980  81 9E 00 00 */	lwz r12, 0(r30)
/* 80374A44 00371984  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80374A48 00371988  7D 89 03 A6 */	mtctr r12
/* 80374A4C 0037198C  4E 80 04 21 */	bctrl 
/* 80374A50 00371990  7C 60 1B 78 */	mr r0, r3
/* 80374A54 00371994  7F C3 F3 78 */	mr r3, r30
/* 80374A58 00371998  81 9E 00 00 */	lwz r12, 0(r30)
/* 80374A5C 0037199C  7C 1F 03 78 */	mr r31, r0
/* 80374A60 003719A0  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 80374A64 003719A4  7D 89 03 A6 */	mtctr r12
/* 80374A68 003719A8  4E 80 04 21 */	bctrl 
/* 80374A6C 003719AC  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80374A70 003719B0  7F E4 FB 78 */	mr r4, r31
/* 80374A74 003719B4  4B EB 2D 95 */	bl getOtakaraItemTexture__Q34Game12ResultTexMgr3MgrFi
/* 80374A78 003719B8  80 63 00 20 */	lwz r3, 0x20(r3)
.L_80374A7C:
/* 80374A7C 003719BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80374A80 003719C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80374A84 003719C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80374A88 003719C8  7C 08 03 A6 */	mtlr r0
/* 80374A8C 003719CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80374A90 003719D0  4E 80 00 20 */	blr 
.endfn getTexInfo__Q28Morimura10TZukanBaseFi

.fn __dt__Q28Morimura11TEnemyZukanFv, global
/* 80374A94 003719D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80374A98 003719D8  7C 08 02 A6 */	mflr r0
/* 80374A9C 003719DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80374AA0 003719E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80374AA4 003719E4  7C 9F 23 78 */	mr r31, r4
/* 80374AA8 003719E8  93 C1 00 08 */	stw r30, 8(r1)
/* 80374AAC 003719EC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80374AB0 003719F0  41 82 00 EC */	beq .L_80374B9C
/* 80374AB4 003719F4  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TEnemyZukan@ha
/* 80374AB8 003719F8  38 63 3F 68 */	addi r3, r3, __vt__Q28Morimura11TEnemyZukan@l
/* 80374ABC 003719FC  90 7E 00 00 */	stw r3, 0(r30)
/* 80374AC0 00371A00  38 03 00 10 */	addi r0, r3, 0x10
/* 80374AC4 00371A04  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80374AC8 00371A08  80 7E 02 48 */	lwz r3, 0x248(r30)
/* 80374ACC 00371A0C  80 63 00 08 */	lwz r3, 8(r3)
/* 80374AD0 00371A10  4B CA EC 61 */	bl freeAll__7JKRHeapFv
/* 80374AD4 00371A14  28 1E 00 00 */	cmplwi r30, 0
/* 80374AD8 00371A18  41 82 00 B4 */	beq .L_80374B8C
/* 80374ADC 00371A1C  3C 60 80 4E */	lis r3, __vt__Q28Morimura10TZukanBase@ha
/* 80374AE0 00371A20  38 63 40 54 */	addi r3, r3, __vt__Q28Morimura10TZukanBase@l
/* 80374AE4 00371A24  90 7E 00 00 */	stw r3, 0(r30)
/* 80374AE8 00371A28  38 03 00 10 */	addi r0, r3, 0x10
/* 80374AEC 00371A2C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80374AF0 00371A30  80 6D 99 34 */	lwz r3, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80374AF4 00371A34  28 03 00 00 */	cmplwi r3, 0
/* 80374AF8 00371A38  41 82 00 08 */	beq .L_80374B00
/* 80374AFC 00371A3C  4B CA EA B9 */	bl destroy__7JKRHeapFv
.L_80374B00:
/* 80374B00 00371A40  38 00 00 00 */	li r0, 0
/* 80374B04 00371A44  28 1E 00 00 */	cmplwi r30, 0
/* 80374B08 00371A48  90 0D 99 34 */	stw r0, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80374B0C 00371A4C  41 82 00 80 */	beq .L_80374B8C
/* 80374B10 00371A50  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TScrollList@ha
/* 80374B14 00371A54  38 63 58 C0 */	addi r3, r3, __vt__Q28Morimura11TScrollList@l
/* 80374B18 00371A58  90 7E 00 00 */	stw r3, 0(r30)
/* 80374B1C 00371A5C  38 03 00 10 */	addi r0, r3, 0x10
/* 80374B20 00371A60  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80374B24 00371A64  41 82 00 68 */	beq .L_80374B8C
/* 80374B28 00371A68  3C 60 80 4E */	lis r3, __vt__Q28Morimura9TTestBase@ha
/* 80374B2C 00371A6C  38 63 B8 F8 */	addi r3, r3, __vt__Q28Morimura9TTestBase@l
/* 80374B30 00371A70  90 7E 00 00 */	stw r3, 0(r30)
/* 80374B34 00371A74  38 03 00 10 */	addi r0, r3, 0x10
/* 80374B38 00371A78  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80374B3C 00371A7C  41 82 00 50 */	beq .L_80374B8C
/* 80374B40 00371A80  3C 60 80 4F */	lis r3, __vt__Q26Screen7ObjBase@ha
/* 80374B44 00371A84  38 63 D7 58 */	addi r3, r3, __vt__Q26Screen7ObjBase@l
/* 80374B48 00371A88  90 7E 00 00 */	stw r3, 0(r30)
/* 80374B4C 00371A8C  38 03 00 10 */	addi r0, r3, 0x10
/* 80374B50 00371A90  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80374B54 00371A94  41 82 00 38 */	beq .L_80374B8C
/* 80374B58 00371A98  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80374B5C 00371A9C  7F C3 F3 78 */	mr r3, r30
/* 80374B60 00371AA0  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80374B64 00371AA4  90 9E 00 00 */	stw r4, 0(r30)
/* 80374B68 00371AA8  38 04 00 10 */	addi r0, r4, 0x10
/* 80374B6C 00371AAC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80374B70 00371AB0  48 09 CA 61 */	bl del__5CNodeFv
/* 80374B74 00371AB4  38 7E 00 18 */	addi r3, r30, 0x18
/* 80374B78 00371AB8  38 80 00 00 */	li r4, 0
/* 80374B7C 00371ABC  4B CA 84 B9 */	bl __dt__11JKRDisposerFv
/* 80374B80 00371AC0  7F C3 F3 78 */	mr r3, r30
/* 80374B84 00371AC4  38 80 00 00 */	li r4, 0
/* 80374B88 00371AC8  48 09 CA 01 */	bl __dt__5CNodeFv
.L_80374B8C:
/* 80374B8C 00371ACC  7F E0 07 35 */	extsh. r0, r31
/* 80374B90 00371AD0  40 81 00 0C */	ble .L_80374B9C
/* 80374B94 00371AD4  7F C3 F3 78 */	mr r3, r30
/* 80374B98 00371AD8  4B CA F5 1D */	bl __dl__FPv
.L_80374B9C:
/* 80374B9C 00371ADC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80374BA0 00371AE0  7F C3 F3 78 */	mr r3, r30
/* 80374BA4 00371AE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80374BA8 00371AE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80374BAC 00371AEC  7C 08 03 A6 */	mtlr r0
/* 80374BB0 00371AF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80374BB4 00371AF4  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura11TEnemyZukanFv

.fn doCreate__Q28Morimura11TEnemyZukanFP10JKRArchive, global
/* 80374BB8 00371AF8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80374BBC 00371AFC  7C 08 02 A6 */	mflr r0
/* 80374BC0 00371B00  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80374BC4 00371B04  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80374BC8 00371B08  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80374BCC 00371B0C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80374BD0 00371B10  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80374BD4 00371B14  BF 21 00 64 */	stmw r25, 0x64(r1)
/* 80374BD8 00371B18  3C E0 80 51 */	lis r7, mScrollParm__Q28Morimura10TZukanBase@ha
/* 80374BDC 00371B1C  C0 82 08 38 */	lfs f4, lbl_8051EB98@sda21(r2)
/* 80374BE0 00371B20  39 60 00 00 */	li r11, 0
/* 80374BE4 00371B24  39 4D 99 20 */	addi r10, r13, mCategoryColor0w__Q28Morimura10TZukanBase@sda21
/* 80374BE8 00371B28  39 20 00 FF */	li r9, 0xff
/* 80374BEC 00371B2C  38 CD 99 28 */	addi r6, r13, mCategoryColor1w__Q28Morimura10TZukanBase@sda21
/* 80374BF0 00371B30  38 AD 99 2C */	addi r5, r13, mCategoryColor1b__Q28Morimura10TZukanBase@sda21
/* 80374BF4 00371B34  39 87 40 1C */	addi r12, r7, mScrollParm__Q28Morimura10TZukanBase@l
/* 80374BF8 00371B38  C0 62 08 58 */	lfs f3, lbl_8051EBB8@sda21(r2)
/* 80374BFC 00371B3C  38 00 00 46 */	li r0, 0x46
/* 80374C00 00371B40  C0 42 08 5C */	lfs f2, lbl_8051EBBC@sda21(r2)
/* 80374C04 00371B44  3F 40 80 49 */	lis r26, lbl_80492520@ha
/* 80374C08 00371B48  C0 22 08 60 */	lfs f1, lbl_8051EBC0@sda21(r2)
/* 80374C0C 00371B4C  39 00 00 DC */	li r8, 0xdc
/* 80374C10 00371B50  38 ED 99 24 */	addi r7, r13, mCategoryColor0b__Q28Morimura10TZukanBase@sda21
/* 80374C14 00371B54  C0 02 07 E8 */	lfs f0, lbl_8051EB48@sda21(r2)
/* 80374C18 00371B58  D0 8C 00 00 */	stfs f4, 0(r12)
/* 80374C1C 00371B5C  7C 7F 1B 78 */	mr r31, r3
/* 80374C20 00371B60  7C 9D 23 78 */	mr r29, r4
/* 80374C24 00371B64  3B DA 25 20 */	addi r30, r26, lbl_80492520@l
/* 80374C28 00371B68  D0 6C 00 08 */	stfs f3, 8(r12)
/* 80374C2C 00371B6C  D0 4C 00 04 */	stfs f2, 4(r12)
/* 80374C30 00371B70  D0 2C 00 0C */	stfs f1, 0xc(r12)
/* 80374C34 00371B74  D0 0C 00 10 */	stfs f0, 0x10(r12)
/* 80374C38 00371B78  99 6D 99 20 */	stb r11, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80374C3C 00371B7C  99 6A 00 01 */	stb r11, 1(r10)
/* 80374C40 00371B80  99 2A 00 02 */	stb r9, 2(r10)
/* 80374C44 00371B84  99 6D 99 24 */	stb r11, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 80374C48 00371B88  99 07 00 01 */	stb r8, 1(r7)
/* 80374C4C 00371B8C  99 07 00 02 */	stb r8, 2(r7)
/* 80374C50 00371B90  98 0D 99 28 */	stb r0, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
/* 80374C54 00371B94  99 26 00 01 */	stb r9, 1(r6)
/* 80374C58 00371B98  99 26 00 02 */	stb r9, 2(r6)
/* 80374C5C 00371B9C  99 2D 99 2C */	stb r9, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
/* 80374C60 00371BA0  99 25 00 01 */	stb r9, 1(r5)
/* 80374C64 00371BA4  99 65 00 02 */	stb r11, 2(r5)
/* 80374C68 00371BA8  93 A3 00 78 */	stw r29, 0x78(r3)
/* 80374C6C 00371BAC  48 0D F3 3D */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80374C70 00371BB0  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 80374C74 00371BB4  3C C0 4E 45 */	lis r6, 0x4E454D59@ha
/* 80374C78 00371BB8  7C 7A 1B 78 */	mr r26, r3
/* 80374C7C 00371BBC  38 A0 44 45 */	li r5, 0x4445
/* 80374C80 00371BC0  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 80374C84 00371BC4  38 C6 4D 59 */	addi r6, r6, 0x4E454D59@l
/* 80374C88 00371BC8  4B F9 A6 95 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80374C8C 00371BCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80374C90 00371BD0  41 82 00 0C */	beq .L_80374C9C
/* 80374C94 00371BD4  93 5F 02 48 */	stw r26, 0x248(r31)
/* 80374C98 00371BD8  48 00 00 0C */	b .L_80374CA4
.L_80374C9C:
/* 80374C9C 00371BDC  38 00 00 01 */	li r0, 1
/* 80374CA0 00371BE0  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_80374CA4:
/* 80374CA4 00371BE4  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80374CA8 00371BE8  28 00 00 00 */	cmplwi r0, 0
/* 80374CAC 00371BEC  41 82 01 EC */	beq .L_80374E98
/* 80374CB0 00371BF0  80 8D 99 30 */	lwz r4, mDebugHeapParent__Q28Morimura10TZukanBase@sda21(r13)
/* 80374CB4 00371BF4  28 04 00 00 */	cmplwi r4, 0
/* 80374CB8 00371BF8  41 82 01 C8 */	beq .L_80374E80
/* 80374CBC 00371BFC  3C 60 00 10 */	lis r3, 0x10
/* 80374CC0 00371C00  38 A0 00 01 */	li r5, 1
/* 80374CC4 00371C04  4B CA B2 05 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80374CC8 00371C08  28 03 00 00 */	cmplwi r3, 0
/* 80374CCC 00371C0C  90 6D 99 34 */	stw r3, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80374CD0 00371C10  40 82 00 18 */	bne .L_80374CE8
/* 80374CD4 00371C14  38 7E 00 0C */	addi r3, r30, 0xc
/* 80374CD8 00371C18  38 BE 00 18 */	addi r5, r30, 0x18
/* 80374CDC 00371C1C  38 80 07 C2 */	li r4, 0x7c2
/* 80374CE0 00371C20  4C C6 31 82 */	crclr 6
/* 80374CE4 00371C24  4B CB 59 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80374CE8:
/* 80374CE8 00371C28  80 8D 99 34 */	lwz r4, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80374CEC 00371C2C  38 60 00 20 */	li r3, 0x20
/* 80374CF0 00371C30  38 A0 00 00 */	li r5, 0
/* 80374CF4 00371C34  4B CA F2 4D */	bl __nw__FUlP7JKRHeapi
/* 80374CF8 00371C38  28 03 00 00 */	cmplwi r3, 0
/* 80374CFC 00371C3C  41 82 00 48 */	beq .L_80374D44
/* 80374D00 00371C40  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80374D04 00371C44  3C A0 80 4C */	lis r5, __vt__Q28Morimura19DispMemberZukanBase@ha
/* 80374D08 00371C48  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80374D0C 00371C4C  3C 80 80 4C */	lis r4, __vt__Q28Morimura20DispMemberZukanEnemy@ha
/* 80374D10 00371C50  90 03 00 00 */	stw r0, 0(r3)
/* 80374D14 00371C54  38 C0 00 00 */	li r6, 0
/* 80374D18 00371C58  38 A5 0B 44 */	addi r5, r5, __vt__Q28Morimura19DispMemberZukanBase@l
/* 80374D1C 00371C5C  38 04 0B 2C */	addi r0, r4, __vt__Q28Morimura20DispMemberZukanEnemy@l
/* 80374D20 00371C60  90 C3 00 04 */	stw r6, 4(r3)
/* 80374D24 00371C64  90 A3 00 00 */	stw r5, 0(r3)
/* 80374D28 00371C68  90 C3 00 08 */	stw r6, 8(r3)
/* 80374D2C 00371C6C  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80374D30 00371C70  90 C3 00 10 */	stw r6, 0x10(r3)
/* 80374D34 00371C74  90 C3 00 14 */	stw r6, 0x14(r3)
/* 80374D38 00371C78  90 C3 00 18 */	stw r6, 0x18(r3)
/* 80374D3C 00371C7C  90 C3 00 1C */	stw r6, 0x1c(r3)
/* 80374D40 00371C80  90 03 00 00 */	stw r0, 0(r3)
.L_80374D44:
/* 80374D44 00371C84  90 7F 02 48 */	stw r3, 0x248(r31)
/* 80374D48 00371C88  38 00 00 01 */	li r0, 1
/* 80374D4C 00371C8C  38 60 00 51 */	li r3, 0x51
/* 80374D50 00371C90  80 AD 99 34 */	lwz r5, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80374D54 00371C94  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80374D58 00371C98  90 A4 00 08 */	stw r5, 8(r4)
/* 80374D5C 00371C9C  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80374D60 00371CA0  4B CA F2 4D */	bl __nwa__FUl
/* 80374D64 00371CA4  90 7F 01 80 */	stw r3, 0x180(r31)
/* 80374D68 00371CA8  3B 20 00 00 */	li r25, 0
/* 80374D6C 00371CAC  CB C2 08 20 */	lfd f30, lbl_8051EB80@sda21(r2)
/* 80374D70 00371CB0  3B 40 00 00 */	li r26, 0
/* 80374D74 00371CB4  C3 E2 08 54 */	lfs f31, lbl_8051EBB4@sda21(r2)
/* 80374D78 00371CB8  3F 80 43 30 */	lis r28, 0x4330
/* 80374D7C 00371CBC  3B 60 00 01 */	li r27, 1
.L_80374D80:
/* 80374D80 00371CC0  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80374D84 00371CC4  7F 43 C9 AE */	stbx r26, r3, r25
/* 80374D88 00371CC8  4B D5 48 19 */	bl rand
/* 80374D8C 00371CCC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80374D90 00371CD0  93 81 00 40 */	stw r28, 0x40(r1)
/* 80374D94 00371CD4  C0 0D 98 FC */	lfs f0, mRandShowRate__Q28Morimura10TZukanBase@sda21(r13)
/* 80374D98 00371CD8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80374D9C 00371CDC  C8 21 00 40 */	lfd f1, 0x40(r1)
/* 80374DA0 00371CE0  EC 21 F0 28 */	fsubs f1, f1, f30
/* 80374DA4 00371CE4  EC 21 F8 24 */	fdivs f1, f1, f31
/* 80374DA8 00371CE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80374DAC 00371CEC  40 80 00 0C */	bge .L_80374DB8
/* 80374DB0 00371CF0  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80374DB4 00371CF4  7F 63 C9 AE */	stbx r27, r3, r25
.L_80374DB8:
/* 80374DB8 00371CF8  3B 39 00 01 */	addi r25, r25, 1
/* 80374DBC 00371CFC  2C 19 00 51 */	cmpwi r25, 0x51
/* 80374DC0 00371D00  41 80 FF C0 */	blt .L_80374D80
/* 80374DC4 00371D04  80 8D 99 34 */	lwz r4, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80374DC8 00371D08  38 60 00 04 */	li r3, 4
/* 80374DCC 00371D0C  38 A0 00 00 */	li r5, 0
/* 80374DD0 00371D10  4B CA F1 71 */	bl __nw__FUlP7JKRHeapi
/* 80374DD4 00371D14  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80374DD8 00371D18  90 64 00 1C */	stw r3, 0x1c(r4)
/* 80374DDC 00371D1C  4B D5 47 C5 */	bl rand
/* 80374DE0 00371D20  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80374DE4 00371D24  38 00 00 00 */	li r0, 0
/* 80374DE8 00371D28  38 60 00 28 */	li r3, 0x28
/* 80374DEC 00371D2C  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 80374DF0 00371D30  90 04 00 00 */	stw r0, 0(r4)
/* 80374DF4 00371D34  4B CA F0 B1 */	bl __nw__FUl
/* 80374DF8 00371D38  28 03 00 00 */	cmplwi r3, 0
/* 80374DFC 00371D3C  41 82 00 5C */	beq .L_80374E58
/* 80374E00 00371D40  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80374E04 00371D44  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 80374E08 00371D48  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80374E0C 00371D4C  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80374E10 00371D50  90 03 00 00 */	stw r0, 0(r3)
/* 80374E14 00371D54  39 00 00 00 */	li r8, 0
/* 80374E18 00371D58  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 80374E1C 00371D5C  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 80374E20 00371D60  91 03 00 04 */	stw r8, 4(r3)
/* 80374E24 00371D64  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 80374E28 00371D68  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80374E2C 00371D6C  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 80374E30 00371D70  90 03 00 00 */	stw r0, 0(r3)
/* 80374E34 00371D74  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 80374E38 00371D78  38 00 00 B4 */	li r0, 0xb4
/* 80374E3C 00371D7C  91 03 00 08 */	stw r8, 8(r3)
/* 80374E40 00371D80  90 C3 00 14 */	stw r6, 0x14(r3)
/* 80374E44 00371D84  90 A3 00 10 */	stw r5, 0x10(r3)
/* 80374E48 00371D88  90 83 00 1C */	stw r4, 0x1c(r3)
/* 80374E4C 00371D8C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 80374E50 00371D90  98 03 00 20 */	stb r0, 0x20(r3)
/* 80374E54 00371D94  99 03 00 21 */	stb r8, 0x21(r3)
.L_80374E58:
/* 80374E58 00371D98  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80374E5C 00371D9C  90 64 00 18 */	stw r3, 0x18(r4)
/* 80374E60 00371DA0  7F E3 FB 78 */	mr r3, r31
/* 80374E64 00371DA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80374E68 00371DA8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80374E6C 00371DAC  7D 89 03 A6 */	mtctr r12
/* 80374E70 00371DB0  4E 80 04 21 */	bctrl 
/* 80374E74 00371DB4  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80374E78 00371DB8  48 0D D2 49 */	bl setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
/* 80374E7C 00371DBC  48 00 00 8C */	b .L_80374F08
.L_80374E80:
/* 80374E80 00371DC0  38 7E 00 0C */	addi r3, r30, 0xc
/* 80374E84 00371DC4  38 BE 04 C0 */	addi r5, r30, 0x4c0
/* 80374E88 00371DC8  38 80 07 DC */	li r4, 0x7dc
/* 80374E8C 00371DCC  4C C6 31 82 */	crclr 6
/* 80374E90 00371DD0  4B CB 57 B1 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80374E94 00371DD4  48 00 00 74 */	b .L_80374F08
.L_80374E98:
/* 80374E98 00371DD8  38 60 00 28 */	li r3, 0x28
/* 80374E9C 00371DDC  4B CA F0 09 */	bl __nw__FUl
/* 80374EA0 00371DE0  28 03 00 00 */	cmplwi r3, 0
/* 80374EA4 00371DE4  41 82 00 5C */	beq .L_80374F00
/* 80374EA8 00371DE8  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80374EAC 00371DEC  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 80374EB0 00371DF0  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80374EB4 00371DF4  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80374EB8 00371DF8  90 03 00 00 */	stw r0, 0(r3)
/* 80374EBC 00371DFC  39 00 00 00 */	li r8, 0
/* 80374EC0 00371E00  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 80374EC4 00371E04  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 80374EC8 00371E08  91 03 00 04 */	stw r8, 4(r3)
/* 80374ECC 00371E0C  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 80374ED0 00371E10  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80374ED4 00371E14  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 80374ED8 00371E18  90 03 00 00 */	stw r0, 0(r3)
/* 80374EDC 00371E1C  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 80374EE0 00371E20  38 00 00 B4 */	li r0, 0xb4
/* 80374EE4 00371E24  91 03 00 08 */	stw r8, 8(r3)
/* 80374EE8 00371E28  90 C3 00 14 */	stw r6, 0x14(r3)
/* 80374EEC 00371E2C  90 A3 00 10 */	stw r5, 0x10(r3)
/* 80374EF0 00371E30  90 83 00 1C */	stw r4, 0x1c(r3)
/* 80374EF4 00371E34  90 A3 00 18 */	stw r5, 0x18(r3)
/* 80374EF8 00371E38  98 03 00 20 */	stb r0, 0x20(r3)
/* 80374EFC 00371E3C  99 03 00 21 */	stb r8, 0x21(r3)
.L_80374F00:
/* 80374F00 00371E40  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80374F04 00371E44  90 64 00 18 */	stw r3, 0x18(r4)
.L_80374F08:
/* 80374F08 00371E48  38 00 00 01 */	li r0, 1
/* 80374F0C 00371E4C  98 1F 00 8C */	stb r0, 0x8c(r31)
/* 80374F10 00371E50  88 1F 00 8C */	lbz r0, 0x8c(r31)
/* 80374F14 00371E54  28 00 00 00 */	cmplwi r0, 0
/* 80374F18 00371E58  41 82 01 68 */	beq .L_80375080
/* 80374F1C 00371E5C  38 60 00 51 */	li r3, 0x51
/* 80374F20 00371E60  4B CA F0 8D */	bl __nwa__FUl
/* 80374F24 00371E64  38 00 00 05 */	li r0, 5
/* 80374F28 00371E68  90 7F 01 84 */	stw r3, 0x184(r31)
/* 80374F2C 00371E6C  39 60 00 00 */	li r11, 0
/* 80374F30 00371E70  7C 09 03 A6 */	mtctr r0
.L_80374F34:
/* 80374F34 00371E74  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374F38 00371E78  39 40 00 00 */	li r10, 0
/* 80374F3C 00371E7C  39 2B 00 01 */	addi r9, r11, 1
/* 80374F40 00371E80  39 0B 00 02 */	addi r8, r11, 2
/* 80374F44 00371E84  7D 43 59 AE */	stbx r10, r3, r11
/* 80374F48 00371E88  38 EB 00 03 */	addi r7, r11, 3
/* 80374F4C 00371E8C  38 CB 00 04 */	addi r6, r11, 4
/* 80374F50 00371E90  38 AB 00 05 */	addi r5, r11, 5
/* 80374F54 00371E94  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374F58 00371E98  38 8B 00 06 */	addi r4, r11, 6
/* 80374F5C 00371E9C  38 0B 00 07 */	addi r0, r11, 7
/* 80374F60 00371EA0  7D 43 49 AE */	stbx r10, r3, r9
/* 80374F64 00371EA4  39 2B 00 09 */	addi r9, r11, 9
/* 80374F68 00371EA8  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374F6C 00371EAC  7D 43 41 AE */	stbx r10, r3, r8
/* 80374F70 00371EB0  39 0B 00 0A */	addi r8, r11, 0xa
/* 80374F74 00371EB4  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374F78 00371EB8  7D 43 39 AE */	stbx r10, r3, r7
/* 80374F7C 00371EBC  38 EB 00 0B */	addi r7, r11, 0xb
/* 80374F80 00371EC0  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374F84 00371EC4  7D 43 31 AE */	stbx r10, r3, r6
/* 80374F88 00371EC8  38 CB 00 0C */	addi r6, r11, 0xc
/* 80374F8C 00371ECC  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374F90 00371ED0  7D 43 29 AE */	stbx r10, r3, r5
/* 80374F94 00371ED4  38 AB 00 0D */	addi r5, r11, 0xd
/* 80374F98 00371ED8  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374F9C 00371EDC  7D 43 21 AE */	stbx r10, r3, r4
/* 80374FA0 00371EE0  38 8B 00 0E */	addi r4, r11, 0xe
/* 80374FA4 00371EE4  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FA8 00371EE8  7D 43 01 AE */	stbx r10, r3, r0
/* 80374FAC 00371EEC  38 0B 00 0F */	addi r0, r11, 0xf
/* 80374FB0 00371EF0  39 6B 00 08 */	addi r11, r11, 8
/* 80374FB4 00371EF4  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FB8 00371EF8  7D 43 59 AE */	stbx r10, r3, r11
/* 80374FBC 00371EFC  39 6B 00 08 */	addi r11, r11, 8
/* 80374FC0 00371F00  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FC4 00371F04  7D 43 49 AE */	stbx r10, r3, r9
/* 80374FC8 00371F08  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FCC 00371F0C  7D 43 41 AE */	stbx r10, r3, r8
/* 80374FD0 00371F10  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FD4 00371F14  7D 43 39 AE */	stbx r10, r3, r7
/* 80374FD8 00371F18  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FDC 00371F1C  7D 43 31 AE */	stbx r10, r3, r6
/* 80374FE0 00371F20  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FE4 00371F24  7D 43 29 AE */	stbx r10, r3, r5
/* 80374FE8 00371F28  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FEC 00371F2C  7D 43 21 AE */	stbx r10, r3, r4
/* 80374FF0 00371F30  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80374FF4 00371F34  7D 43 01 AE */	stbx r10, r3, r0
/* 80374FF8 00371F38  42 00 FF 3C */	bdnz .L_80374F34
/* 80374FFC 00371F3C  20 0B 00 51 */	subfic r0, r11, 0x51
/* 80375000 00371F40  7C 09 03 A6 */	mtctr r0
/* 80375004 00371F44  2C 0B 00 51 */	cmpwi r11, 0x51
/* 80375008 00371F48  40 80 00 14 */	bge .L_8037501C
.L_8037500C:
/* 8037500C 00371F4C  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375010 00371F50  7D 43 59 AE */	stbx r10, r3, r11
/* 80375014 00371F54  39 6B 00 01 */	addi r11, r11, 1
/* 80375018 00371F58  42 00 FF F4 */	bdnz .L_8037500C
.L_8037501C:
/* 8037501C 00371F5C  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375020 00371F60  38 00 00 01 */	li r0, 1
/* 80375024 00371F64  98 03 00 4E */	stb r0, 0x4e(r3)
/* 80375028 00371F68  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 8037502C 00371F6C  98 03 00 4D */	stb r0, 0x4d(r3)
/* 80375030 00371F70  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375034 00371F74  98 03 00 49 */	stb r0, 0x49(r3)
/* 80375038 00371F78  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 8037503C 00371F7C  98 03 00 4A */	stb r0, 0x4a(r3)
/* 80375040 00371F80  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375044 00371F84  98 03 00 46 */	stb r0, 0x46(r3)
/* 80375048 00371F88  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 8037504C 00371F8C  98 03 00 4C */	stb r0, 0x4c(r3)
/* 80375050 00371F90  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375054 00371F94  98 03 00 50 */	stb r0, 0x50(r3)
/* 80375058 00371F98  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 8037505C 00371F9C  98 03 00 4B */	stb r0, 0x4b(r3)
/* 80375060 00371FA0  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375064 00371FA4  98 03 00 4F */	stb r0, 0x4f(r3)
/* 80375068 00371FA8  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 8037506C 00371FAC  98 03 00 47 */	stb r0, 0x47(r3)
/* 80375070 00371FB0  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375074 00371FB4  98 03 00 45 */	stb r0, 0x45(r3)
/* 80375078 00371FB8  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 8037507C 00371FBC  98 03 00 48 */	stb r0, 0x48(r3)
.L_80375080:
/* 80375080 00371FC0  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80375084 00371FC4  28 00 00 00 */	cmplwi r0, 0
/* 80375088 00371FC8  41 82 00 18 */	beq .L_803750A0
/* 8037508C 00371FCC  88 0D 98 FA */	lbz r0, mZukanShortenTest__Q28Morimura10TZukanBase@sda21(r13)
/* 80375090 00371FD0  28 00 00 00 */	cmplwi r0, 0
/* 80375094 00371FD4  40 82 00 0C */	bne .L_803750A0
/* 80375098 00371FD8  38 00 00 00 */	li r0, 0
/* 8037509C 00371FDC  98 1F 02 40 */	stb r0, 0x240(r31)
.L_803750A0:
/* 803750A0 00371FE0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803750A4 00371FE4  28 03 00 00 */	cmplwi r3, 0
/* 803750A8 00371FE8  41 82 00 18 */	beq .L_803750C0
/* 803750AC 00371FEC  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 803750B0 00371FF0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803750B4 00371FF4  41 82 00 0C */	beq .L_803750C0
/* 803750B8 00371FF8  38 00 00 00 */	li r0, 0
/* 803750BC 00371FFC  98 1F 02 40 */	stb r0, 0x240(r31)
.L_803750C0:
/* 803750C0 00372000  38 00 FF FF */	li r0, -1
/* 803750C4 00372004  90 1F 02 34 */	stw r0, 0x234(r31)
/* 803750C8 00372008  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 803750CC 0037200C  28 00 00 00 */	cmplwi r0, 0
/* 803750D0 00372010  41 82 02 60 */	beq .L_80375330
/* 803750D4 00372014  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803750D8 00372018  28 00 00 00 */	cmplwi r0, 0
/* 803750DC 0037201C  41 82 01 5C */	beq .L_80375238
/* 803750E0 00372020  4B D5 44 C1 */	bl rand
/* 803750E4 00372024  7F E3 FB 78 */	mr r3, r31
/* 803750E8 00372028  81 9F 00 00 */	lwz r12, 0(r31)
/* 803750EC 0037202C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803750F0 00372030  7D 89 03 A6 */	mtctr r12
/* 803750F4 00372034  4E 80 04 21 */	bctrl 
/* 803750F8 00372038  7C 7B 1B 78 */	mr r27, r3
/* 803750FC 0037203C  4B D5 44 A5 */	bl rand
/* 80375100 00372040  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80375104 00372044  3C 00 43 30 */	lis r0, 0x4330
/* 80375108 00372048  90 61 00 44 */	stw r3, 0x44(r1)
/* 8037510C 0037204C  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 80375110 00372050  90 01 00 40 */	stw r0, 0x40(r1)
/* 80375114 00372054  C0 22 08 54 */	lfs f1, lbl_8051EBB4@sda21(r2)
/* 80375118 00372058  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 8037511C 0037205C  C0 02 08 64 */	lfs f0, lbl_8051EBC4@sda21(r2)
/* 80375120 00372060  EC 42 18 28 */	fsubs f2, f2, f3
/* 80375124 00372064  EC 22 08 24 */	fdivs f1, f2, f1
/* 80375128 00372068  EC 00 00 72 */	fmuls f0, f0, f1
/* 8037512C 0037206C  FC 00 00 1E */	fctiwz f0, f0
/* 80375130 00372070  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 80375134 00372074  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80375138 00372078  3B 23 00 01 */	addi r25, r3, 1
/* 8037513C 0037207C  4B D5 44 65 */	bl rand
/* 80375140 00372080  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80375144 00372084  3C 00 43 30 */	lis r0, 0x4330
/* 80375148 00372088  90 61 00 54 */	stw r3, 0x54(r1)
/* 8037514C 0037208C  38 80 00 00 */	li r4, 0
/* 80375150 00372090  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 80375154 00372094  90 01 00 50 */	stw r0, 0x50(r1)
/* 80375158 00372098  C0 22 08 54 */	lfs f1, lbl_8051EBB4@sda21(r2)
/* 8037515C 0037209C  C8 41 00 50 */	lfd f2, 0x50(r1)
/* 80375160 003720A0  C0 02 08 38 */	lfs f0, lbl_8051EB98@sda21(r2)
/* 80375164 003720A4  EC 42 18 28 */	fsubs f2, f2, f3
/* 80375168 003720A8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8037516C 003720AC  EC 00 00 72 */	fmuls f0, f0, f1
/* 80375170 003720B0  FC 00 00 1E */	fctiwz f0, f0
/* 80375174 003720B4  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80375178 003720B8  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8037517C 003720BC  23 40 00 55 */	subfic r26, r0, 0x55
/* 80375180 003720C0  7F 69 03 A6 */	mtctr r27
/* 80375184 003720C4  2C 1B 00 00 */	cmpwi r27, 0
/* 80375188 003720C8  40 81 00 28 */	ble .L_803751B0
.L_8037518C:
/* 8037518C 003720CC  7C 04 C8 00 */	cmpw r4, r25
/* 80375190 003720D0  41 80 00 0C */	blt .L_8037519C
/* 80375194 003720D4  7C 04 D0 00 */	cmpw r4, r26
/* 80375198 003720D8  40 81 00 10 */	ble .L_803751A8
.L_8037519C:
/* 8037519C 003720DC  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 803751A0 003720E0  38 03 00 01 */	addi r0, r3, 1
/* 803751A4 003720E4  90 1F 02 30 */	stw r0, 0x230(r31)
.L_803751A8:
/* 803751A8 003720E8  38 84 00 01 */	addi r4, r4, 1
/* 803751AC 003720EC  42 00 FF E0 */	bdnz .L_8037518C
.L_803751B0:
/* 803751B0 003720F0  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803751B4 003720F4  2C 00 00 00 */	cmpwi r0, 0
/* 803751B8 003720F8  40 82 00 10 */	bne .L_803751C8
/* 803751BC 003720FC  38 00 00 00 */	li r0, 0
/* 803751C0 00372100  98 1F 02 42 */	stb r0, 0x242(r31)
/* 803751C4 00372104  48 00 00 10 */	b .L_803751D4
.L_803751C8:
/* 803751C8 00372108  54 03 10 3A */	slwi r3, r0, 2
/* 803751CC 0037210C  4B CA ED E1 */	bl __nwa__FUl
/* 803751D0 00372110  90 7F 02 2C */	stw r3, 0x22c(r31)
.L_803751D4:
/* 803751D4 00372114  38 A0 00 00 */	li r5, 0
/* 803751D8 00372118  38 C0 00 00 */	li r6, 0
/* 803751DC 0037211C  38 80 00 00 */	li r4, 0
/* 803751E0 00372120  7F 69 03 A6 */	mtctr r27
/* 803751E4 00372124  2C 1B 00 00 */	cmpwi r27, 0
/* 803751E8 00372128  40 81 01 48 */	ble .L_80375330
.L_803751EC:
/* 803751EC 0037212C  7C 06 C8 00 */	cmpw r6, r25
/* 803751F0 00372130  41 80 00 0C */	blt .L_803751FC
/* 803751F4 00372134  7C 06 D0 00 */	cmpw r6, r26
/* 803751F8 00372138  40 81 00 34 */	ble .L_8037522C
.L_803751FC:
/* 803751FC 0037213C  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 80375200 00372140  7C C3 21 2E */	stwx r6, r3, r4
/* 80375204 00372144  80 1F 02 34 */	lwz r0, 0x234(r31)
/* 80375208 00372148  2C 00 00 00 */	cmpwi r0, 0
/* 8037520C 0037214C  40 80 00 18 */	bge .L_80375224
/* 80375210 00372150  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 80375214 00372154  7C 03 30 AE */	lbzx r0, r3, r6
/* 80375218 00372158  28 00 00 00 */	cmplwi r0, 0
/* 8037521C 0037215C  41 82 00 08 */	beq .L_80375224
/* 80375220 00372160  90 BF 02 34 */	stw r5, 0x234(r31)
.L_80375224:
/* 80375224 00372164  38 84 00 04 */	addi r4, r4, 4
/* 80375228 00372168  38 A5 00 01 */	addi r5, r5, 1
.L_8037522C:
/* 8037522C 0037216C  38 C6 00 01 */	addi r6, r6, 1
/* 80375230 00372170  42 00 FF BC */	bdnz .L_803751EC
/* 80375234 00372174  48 00 00 FC */	b .L_80375330
.L_80375238:
/* 80375238 00372178  3B 20 00 00 */	li r25, 0
/* 8037523C 0037217C  48 00 00 34 */	b .L_80375270
.L_80375240:
/* 80375240 00372180  7F E3 FB 78 */	mr r3, r31
/* 80375244 00372184  7F 24 CB 78 */	mr r4, r25
/* 80375248 00372188  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037524C 0037218C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80375250 00372190  7D 89 03 A6 */	mtctr r12
/* 80375254 00372194  4E 80 04 21 */	bctrl 
/* 80375258 00372198  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037525C 0037219C  41 82 00 10 */	beq .L_8037526C
/* 80375260 003721A0  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80375264 003721A4  38 03 00 01 */	addi r0, r3, 1
/* 80375268 003721A8  90 1F 02 30 */	stw r0, 0x230(r31)
.L_8037526C:
/* 8037526C 003721AC  3B 39 00 01 */	addi r25, r25, 1
.L_80375270:
/* 80375270 003721B0  7F E3 FB 78 */	mr r3, r31
/* 80375274 003721B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80375278 003721B8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037527C 003721BC  7D 89 03 A6 */	mtctr r12
/* 80375280 003721C0  4E 80 04 21 */	bctrl 
/* 80375284 003721C4  7C 19 18 00 */	cmpw r25, r3
/* 80375288 003721C8  41 80 FF B8 */	blt .L_80375240
/* 8037528C 003721CC  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 80375290 003721D0  2C 00 00 00 */	cmpwi r0, 0
/* 80375294 003721D4  40 82 00 10 */	bne .L_803752A4
/* 80375298 003721D8  38 00 00 00 */	li r0, 0
/* 8037529C 003721DC  98 1F 02 42 */	stb r0, 0x242(r31)
/* 803752A0 003721E0  48 00 00 10 */	b .L_803752B0
.L_803752A4:
/* 803752A4 003721E4  54 03 10 3A */	slwi r3, r0, 2
/* 803752A8 003721E8  4B CA ED 05 */	bl __nwa__FUl
/* 803752AC 003721EC  90 7F 02 2C */	stw r3, 0x22c(r31)
.L_803752B0:
/* 803752B0 003721F0  3B 20 00 00 */	li r25, 0
/* 803752B4 003721F4  3B 60 00 00 */	li r27, 0
/* 803752B8 003721F8  3B 40 00 00 */	li r26, 0
/* 803752BC 003721FC  48 00 00 58 */	b .L_80375314
.L_803752C0:
/* 803752C0 00372200  7F E3 FB 78 */	mr r3, r31
/* 803752C4 00372204  7F 64 DB 78 */	mr r4, r27
/* 803752C8 00372208  81 9F 00 00 */	lwz r12, 0(r31)
/* 803752CC 0037220C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803752D0 00372210  7D 89 03 A6 */	mtctr r12
/* 803752D4 00372214  4E 80 04 21 */	bctrl 
/* 803752D8 00372218  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803752DC 0037221C  41 82 00 34 */	beq .L_80375310
/* 803752E0 00372220  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 803752E4 00372224  7F 63 D1 2E */	stwx r27, r3, r26
/* 803752E8 00372228  80 1F 02 34 */	lwz r0, 0x234(r31)
/* 803752EC 0037222C  2C 00 00 00 */	cmpwi r0, 0
/* 803752F0 00372230  40 80 00 18 */	bge .L_80375308
/* 803752F4 00372234  80 7F 01 84 */	lwz r3, 0x184(r31)
/* 803752F8 00372238  7C 03 D8 AE */	lbzx r0, r3, r27
/* 803752FC 0037223C  28 00 00 00 */	cmplwi r0, 0
/* 80375300 00372240  41 82 00 08 */	beq .L_80375308
/* 80375304 00372244  93 3F 02 34 */	stw r25, 0x234(r31)
.L_80375308:
/* 80375308 00372248  3B 5A 00 04 */	addi r26, r26, 4
/* 8037530C 0037224C  3B 39 00 01 */	addi r25, r25, 1
.L_80375310:
/* 80375310 00372250  3B 7B 00 01 */	addi r27, r27, 1
.L_80375314:
/* 80375314 00372254  7F E3 FB 78 */	mr r3, r31
/* 80375318 00372258  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037531C 0037225C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80375320 00372260  7D 89 03 A6 */	mtctr r12
/* 80375324 00372264  4E 80 04 21 */	bctrl 
/* 80375328 00372268  7C 1B 18 00 */	cmpw r27, r3
/* 8037532C 0037226C  41 80 FF 94 */	blt .L_803752C0
.L_80375330:
/* 80375330 00372270  38 60 00 18 */	li r3, 0x18
/* 80375334 00372274  4B CA EB 71 */	bl __nw__FUl
/* 80375338 00372278  7C 60 1B 79 */	or. r0, r3, r3
/* 8037533C 0037227C  41 82 00 14 */	beq .L_80375350
/* 80375340 00372280  7F A4 EB 78 */	mr r4, r29
/* 80375344 00372284  38 A0 00 02 */	li r5, 2
/* 80375348 00372288  48 02 C0 61 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8037534C 0037228C  7C 60 1B 78 */	mr r0, r3
.L_80375350:
/* 80375350 00372290  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 80375354 00372294  38 9E 04 E8 */	addi r4, r30, 0x4e8
/* 80375358 00372298  3C A0 00 02 */	lis r5, 2
/* 8037535C 0037229C  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 80375360 003722A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80375364 003722A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80375368 003722A8  7D 89 03 A6 */	mtctr r12
/* 8037536C 003722AC  4E 80 04 21 */	bctrl 
/* 80375370 003722B0  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 80375374 003722B4  38 9E 05 04 */	addi r4, r30, 0x504
/* 80375378 003722B8  48 02 C0 E9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 8037537C 003722BC  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 80375380 003722C0  38 9E 05 20 */	addi r4, r30, 0x520
/* 80375384 003722C4  48 02 C0 DD */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80375388 003722C8  80 BF 00 7C */	lwz r5, 0x7c(r31)
/* 8037538C 003722CC  3C 80 61 33 */	lis r4, 0x6133646C@ha
/* 80375390 003722D0  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80375394 003722D4  38 C4 64 6C */	addi r6, r4, 0x6133646C@l
/* 80375398 003722D8  80 85 00 08 */	lwz r4, 8(r5)
/* 8037539C 003722DC  38 A0 6F 74 */	li r5, 0x6f74
/* 803753A0 003722E0  4B FB 7E B1 */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 803753A4 003722E4  90 7F 00 E4 */	stw r3, 0xe4(r31)
/* 803753A8 003722E8  3C 60 61 33 */	lis r3, 0x6133646C@ha
/* 803753AC 003722EC  38 C3 64 6C */	addi r6, r3, 0x6133646C@l
/* 803753B0 003722F0  38 A0 6F 74 */	li r5, 0x6f74
/* 803753B4 003722F4  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803753B8 003722F8  80 63 00 08 */	lwz r3, 8(r3)
/* 803753BC 003722FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803753C0 00372300  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803753C4 00372304  7D 89 03 A6 */	mtctr r12
/* 803753C8 00372308  4E 80 04 21 */	bctrl 
/* 803753CC 0037230C  90 7F 00 F8 */	stw r3, 0xf8(r31)
/* 803753D0 00372310  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 803753D4 00372314  28 00 00 00 */	cmplwi r0, 0
/* 803753D8 00372318  40 82 00 18 */	bne .L_803753F0
/* 803753DC 0037231C  38 7E 00 0C */	addi r3, r30, 0xc
/* 803753E0 00372320  38 BE 00 18 */	addi r5, r30, 0x18
/* 803753E4 00372324  38 80 08 5E */	li r4, 0x85e
/* 803753E8 00372328  4C C6 31 82 */	crclr 6
/* 803753EC 0037232C  4B CB 52 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803753F0:
/* 803753F0 00372330  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 803753F4 00372334  28 00 00 00 */	cmplwi r0, 0
/* 803753F8 00372338  40 82 00 18 */	bne .L_80375410
/* 803753FC 0037233C  38 7E 00 0C */	addi r3, r30, 0xc
/* 80375400 00372340  38 BE 00 18 */	addi r5, r30, 0x18
/* 80375404 00372344  38 80 08 5F */	li r4, 0x85f
/* 80375408 00372348  4C C6 31 82 */	crclr 6
/* 8037540C 0037234C  4B CB 52 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80375410:
/* 80375410 00372350  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80375414 00372354  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 80375418 00372358  80 63 00 34 */	lwz r3, 0x34(r3)
/* 8037541C 0037235C  4B F9 02 8D */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 80375420 00372360  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80375424 00372364  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80375428 00372368  4B F9 04 91 */	bl start__Q32og6Screen9AnimGroupFv
/* 8037542C 0037236C  38 60 00 08 */	li r3, 8
/* 80375430 00372370  4B CA EA 75 */	bl __nw__FUl
/* 80375434 00372374  7C 60 1B 79 */	or. r0, r3, r3
/* 80375438 00372378  41 82 00 10 */	beq .L_80375448
/* 8037543C 0037237C  80 9F 00 E4 */	lwz r4, 0xe4(r31)
/* 80375440 00372380  4B FB 7F 2D */	bl __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
/* 80375444 00372384  7C 60 1B 78 */	mr r0, r3
.L_80375448:
/* 80375448 00372388  90 1F 00 EC */	stw r0, 0xec(r31)
/* 8037544C 0037238C  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 80375450 00372390  28 00 00 00 */	cmplwi r0, 0
/* 80375454 00372394  40 82 00 18 */	bne .L_8037546C
/* 80375458 00372398  38 7E 00 0C */	addi r3, r30, 0xc
/* 8037545C 0037239C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80375460 003723A0  38 80 08 64 */	li r4, 0x864
/* 80375464 003723A4  4C C6 31 82 */	crclr 6
/* 80375468 003723A8  4B CB 51 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037546C:
/* 8037546C 003723AC  38 60 00 18 */	li r3, 0x18
/* 80375470 003723B0  4B CA EA 35 */	bl __nw__FUl
/* 80375474 003723B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80375478 003723B8  41 82 00 14 */	beq .L_8037548C
/* 8037547C 003723BC  7F A4 EB 78 */	mr r4, r29
/* 80375480 003723C0  38 A0 00 00 */	li r5, 0
/* 80375484 003723C4  48 02 BF 25 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80375488 003723C8  7C 60 1B 78 */	mr r0, r3
.L_8037548C:
/* 8037548C 003723CC  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 80375490 003723D0  38 9E 05 3C */	addi r4, r30, 0x53c
/* 80375494 003723D4  3C A0 00 02 */	lis r5, 2
/* 80375498 003723D8  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8037549C 003723DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803754A0 003723E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803754A4 003723E4  7D 89 03 A6 */	mtctr r12
/* 803754A8 003723E8  4E 80 04 21 */	bctrl 
/* 803754AC 003723EC  38 60 00 18 */	li r3, 0x18
/* 803754B0 003723F0  4B CA E9 F5 */	bl __nw__FUl
/* 803754B4 003723F4  7C 60 1B 79 */	or. r0, r3, r3
/* 803754B8 003723F8  41 82 00 14 */	beq .L_803754CC
/* 803754BC 003723FC  7F A4 EB 78 */	mr r4, r29
/* 803754C0 00372400  38 A0 00 01 */	li r5, 1
/* 803754C4 00372404  48 02 BE E5 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 803754C8 00372408  7C 60 1B 78 */	mr r0, r3
.L_803754CC:
/* 803754CC 0037240C  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 803754D0 00372410  38 9E 05 54 */	addi r4, r30, 0x554
/* 803754D4 00372414  3C A0 00 02 */	lis r5, 2
/* 803754D8 00372418  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 803754DC 0037241C  81 83 00 00 */	lwz r12, 0(r3)
/* 803754E0 00372420  81 8C 00 08 */	lwz r12, 8(r12)
/* 803754E4 00372424  7D 89 03 A6 */	mtctr r12
/* 803754E8 00372428  4E 80 04 21 */	bctrl 
/* 803754EC 0037242C  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 803754F0 00372430  38 9E 05 70 */	addi r4, r30, 0x570
/* 803754F4 00372434  48 02 BF 6D */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 803754F8 00372438  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 803754FC 0037243C  3C A0 65 6C */	lis r5, 0x656C5F6C@ha
/* 80375500 00372440  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 80375504 00372444  80 63 00 08 */	lwz r3, 8(r3)
/* 80375508 00372448  38 C5 5F 6C */	addi r6, r5, 0x656C5F6C@l
/* 8037550C 0037244C  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 80375510 00372450  81 83 00 00 */	lwz r12, 0(r3)
/* 80375514 00372454  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375518 00372458  7D 89 03 A6 */	mtctr r12
/* 8037551C 0037245C  4E 80 04 21 */	bctrl 
/* 80375520 00372460  38 00 00 00 */	li r0, 0
/* 80375524 00372464  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375528 00372468  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 8037552C 0037246C  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80375530 00372470  80 63 00 08 */	lwz r3, 8(r3)
/* 80375534 00372474  4B CA E0 71 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80375538 00372478  38 60 00 18 */	li r3, 0x18
/* 8037553C 0037247C  4B CA E9 69 */	bl __nw__FUl
/* 80375540 00372480  7C 7B 1B 79 */	or. r27, r3, r3
/* 80375544 00372484  41 82 00 1C */	beq .L_80375560
/* 80375548 00372488  7F A4 EB 78 */	mr r4, r29
/* 8037554C 0037248C  38 A0 00 00 */	li r5, 0
/* 80375550 00372490  48 02 BE 59 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80375554 00372494  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TListScreen@ha
/* 80375558 00372498  38 03 59 6C */	addi r0, r3, __vt__Q28Morimura11TListScreen@l
/* 8037555C 0037249C  90 1B 00 00 */	stw r0, 0(r27)
.L_80375560:
/* 80375560 003724A0  93 7F 00 B4 */	stw r27, 0xb4(r31)
/* 80375564 003724A4  38 9E 05 8C */	addi r4, r30, 0x58c
/* 80375568 003724A8  3C A0 00 02 */	lis r5, 2
/* 8037556C 003724AC  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 80375570 003724B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80375574 003724B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80375578 003724B8  7D 89 03 A6 */	mtctr r12
/* 8037557C 003724BC  4E 80 04 21 */	bctrl 
/* 80375580 003724C0  38 00 00 00 */	li r0, 0
/* 80375584 003724C4  98 1F 02 28 */	stb r0, 0x228(r31)
/* 80375588 003724C8  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 8037558C 003724CC  28 00 00 00 */	cmplwi r0, 0
/* 80375590 003724D0  41 82 00 10 */	beq .L_803755A0
/* 80375594 003724D4  38 00 00 01 */	li r0, 1
/* 80375598 003724D8  98 1F 02 28 */	stb r0, 0x228(r31)
/* 8037559C 003724DC  48 00 00 20 */	b .L_803755BC
.L_803755A0:
/* 803755A0 003724E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803755A4 003724E4  48 0A D9 8D */	bl getPlayCommonData__6SystemFv
/* 803755A8 003724E8  4B EB F1 71 */	bl isLouieRescued__Q24Game14PlayCommonDataFv
/* 803755AC 003724EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803755B0 003724F0  41 82 00 0C */	beq .L_803755BC
/* 803755B4 003724F4  38 00 00 01 */	li r0, 1
/* 803755B8 003724F8  98 1F 02 28 */	stb r0, 0x228(r31)
.L_803755BC:
/* 803755BC 003724FC  38 60 00 18 */	li r3, 0x18
/* 803755C0 00372500  4B CA E8 E5 */	bl __nw__FUl
/* 803755C4 00372504  7C 60 1B 79 */	or. r0, r3, r3
/* 803755C8 00372508  41 82 00 14 */	beq .L_803755DC
/* 803755CC 0037250C  7F A4 EB 78 */	mr r4, r29
/* 803755D0 00372510  38 A0 00 00 */	li r5, 0
/* 803755D4 00372514  48 02 BD D5 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 803755D8 00372518  7C 60 1B 78 */	mr r0, r3
.L_803755DC:
/* 803755DC 0037251C  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 803755E0 00372520  38 9E 05 A8 */	addi r4, r30, 0x5a8
/* 803755E4 00372524  3C A0 00 02 */	lis r5, 2
/* 803755E8 00372528  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803755EC 0037252C  81 83 00 00 */	lwz r12, 0(r3)
/* 803755F0 00372530  81 8C 00 08 */	lwz r12, 8(r12)
/* 803755F4 00372534  7D 89 03 A6 */	mtctr r12
/* 803755F8 00372538  4E 80 04 21 */	bctrl 
/* 803755FC 0037253C  38 60 00 B0 */	li r3, 0xb0
/* 80375600 00372540  4B CA E8 A5 */	bl __nw__FUl
/* 80375604 00372544  7C 7B 1B 79 */	or. r27, r3, r3
/* 80375608 00372548  41 82 00 40 */	beq .L_80375648
/* 8037560C 0037254C  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 80375610 00372550  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 80375614 00372554  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 80375618 00372558  38 A0 00 04 */	li r5, 4
/* 8037561C 0037255C  38 C0 00 04 */	li r6, 4
/* 80375620 00372560  4B F9 5F 05 */	bl __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
/* 80375624 00372564  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TScaleUpCounter@ha
/* 80375628 00372568  38 00 00 00 */	li r0, 0
/* 8037562C 0037256C  38 63 58 3C */	addi r3, r3, __vt__Q28Morimura15TScaleUpCounter@l
/* 80375630 00372570  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80375634 00372574  90 7B 00 00 */	stw r3, 0(r27)
/* 80375638 00372578  98 1B 00 A8 */	stb r0, 0xa8(r27)
/* 8037563C 0037257C  98 1B 00 A9 */	stb r0, 0xa9(r27)
/* 80375640 00372580  98 1B 00 AA */	stb r0, 0xaa(r27)
/* 80375644 00372584  D0 1B 00 AC */	stfs f0, 0xac(r27)
.L_80375648:
/* 80375648 00372588  93 7F 02 4C */	stw r27, 0x24c(r31)
/* 8037564C 0037258C  3C 80 65 69 */	lis r4, 0x65693135@ha
/* 80375650 00372590  38 1F 01 88 */	addi r0, r31, 0x188
/* 80375654 00372594  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 80375658 00372598  90 01 00 08 */	stw r0, 8(r1)
/* 8037565C 0037259C  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80375660 003725A0  38 00 00 01 */	li r0, 1
/* 80375664 003725A4  38 C4 31 35 */	addi r6, r4, 0x65693135@l
/* 80375668 003725A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8037566C 003725AC  7C A7 2B 78 */	mr r7, r5
/* 80375670 003725B0  7C A9 2B 78 */	mr r9, r5
/* 80375674 003725B4  39 04 31 34 */	addi r8, r4, 0x3134
/* 80375678 003725B8  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 8037567C 003725BC  39 44 31 32 */	addi r10, r4, 0x3132
/* 80375680 003725C0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375684 003725C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80375688 003725C8  80 84 00 08 */	lwz r4, 8(r4)
/* 8037568C 003725CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80375690 003725D0  7D 89 03 A6 */	mtctr r12
/* 80375694 003725D4  4E 80 04 21 */	bctrl 
/* 80375698 003725D8  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 8037569C 003725DC  38 80 00 01 */	li r4, 1
/* 803756A0 003725E0  4B F9 61 39 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 803756A4 003725E4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803756A8 003725E8  3C A0 65 69 */	lis r5, 0x65693135@ha
/* 803756AC 003725EC  3C 80 50 67 */	lis r4, 0x50676973@ha
/* 803756B0 003725F0  80 FF 02 4C */	lwz r7, 0x24c(r31)
/* 803756B4 003725F4  80 63 00 08 */	lwz r3, 8(r3)
/* 803756B8 003725F8  38 C5 31 35 */	addi r6, r5, 0x65693135@l
/* 803756BC 003725FC  38 A4 69 73 */	addi r5, r4, 0x50676973@l
/* 803756C0 00372600  48 0B F4 65 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803756C4 00372604  38 60 00 B0 */	li r3, 0xb0
/* 803756C8 00372608  4B CA E7 DD */	bl __nw__FUl
/* 803756CC 0037260C  7C 7B 1B 79 */	or. r27, r3, r3
/* 803756D0 00372610  41 82 00 40 */	beq .L_80375710
/* 803756D4 00372614  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 803756D8 00372618  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 803756DC 0037261C  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 803756E0 00372620  38 A0 00 0A */	li r5, 0xa
/* 803756E4 00372624  38 C0 00 04 */	li r6, 4
/* 803756E8 00372628  4B F9 5E 3D */	bl __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
/* 803756EC 0037262C  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TScaleUpCounter@ha
/* 803756F0 00372630  38 00 00 00 */	li r0, 0
/* 803756F4 00372634  38 63 58 3C */	addi r3, r3, __vt__Q28Morimura15TScaleUpCounter@l
/* 803756F8 00372638  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 803756FC 0037263C  90 7B 00 00 */	stw r3, 0(r27)
/* 80375700 00372640  98 1B 00 A8 */	stb r0, 0xa8(r27)
/* 80375704 00372644  98 1B 00 A9 */	stb r0, 0xa9(r27)
/* 80375708 00372648  98 1B 00 AA */	stb r0, 0xaa(r27)
/* 8037570C 0037264C  D0 1B 00 AC */	stfs f0, 0xac(r27)
.L_80375710:
/* 80375710 00372650  93 7F 02 54 */	stw r27, 0x254(r31)
/* 80375714 00372654  3C 80 65 69 */	lis r4, 0x65693030@ha
/* 80375718 00372658  38 1F 01 8C */	addi r0, r31, 0x18c
/* 8037571C 0037265C  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 80375720 00372660  90 01 00 08 */	stw r0, 8(r1)
/* 80375724 00372664  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80375728 00372668  38 00 00 01 */	li r0, 1
/* 8037572C 0037266C  38 C4 30 30 */	addi r6, r4, 0x65693030@l
/* 80375730 00372670  90 01 00 0C */	stw r0, 0xc(r1)
/* 80375734 00372674  7C A7 2B 78 */	mr r7, r5
/* 80375738 00372678  7C A9 2B 78 */	mr r9, r5
/* 8037573C 0037267C  39 04 30 31 */	addi r8, r4, 0x3031
/* 80375740 00372680  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80375744 00372684  39 44 30 33 */	addi r10, r4, 0x3033
/* 80375748 00372688  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037574C 0037268C  81 83 00 00 */	lwz r12, 0(r3)
/* 80375750 00372690  80 84 00 08 */	lwz r4, 8(r4)
/* 80375754 00372694  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80375758 00372698  7D 89 03 A6 */	mtctr r12
/* 8037575C 0037269C  4E 80 04 21 */	bctrl 
/* 80375760 003726A0  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80375764 003726A4  38 80 00 01 */	li r4, 1
/* 80375768 003726A8  4B F9 60 71 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 8037576C 003726AC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80375770 003726B0  3C A0 65 69 */	lis r5, 0x65693030@ha
/* 80375774 003726B4  3C 80 50 67 */	lis r4, 0x50676973@ha
/* 80375778 003726B8  80 FF 02 54 */	lwz r7, 0x254(r31)
/* 8037577C 003726BC  80 63 00 08 */	lwz r3, 8(r3)
/* 80375780 003726C0  38 C5 30 30 */	addi r6, r5, 0x65693030@l
/* 80375784 003726C4  38 A4 69 73 */	addi r5, r4, 0x50676973@l
/* 80375788 003726C8  48 0B F3 9D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037578C 003726CC  38 60 00 B0 */	li r3, 0xb0
/* 80375790 003726D0  4B CA E7 15 */	bl __nw__FUl
/* 80375794 003726D4  7C 7B 1B 79 */	or. r27, r3, r3
/* 80375798 003726D8  41 82 00 40 */	beq .L_803757D8
/* 8037579C 003726DC  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 803757A0 003726E0  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 803757A4 003726E4  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 803757A8 003726E8  38 A0 00 0A */	li r5, 0xa
/* 803757AC 003726EC  38 C0 00 04 */	li r6, 4
/* 803757B0 003726F0  4B F9 5D 75 */	bl __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
/* 803757B4 003726F4  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TScaleUpCounter@ha
/* 803757B8 003726F8  38 00 00 00 */	li r0, 0
/* 803757BC 003726FC  38 63 58 3C */	addi r3, r3, __vt__Q28Morimura15TScaleUpCounter@l
/* 803757C0 00372700  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 803757C4 00372704  90 7B 00 00 */	stw r3, 0(r27)
/* 803757C8 00372708  98 1B 00 A8 */	stb r0, 0xa8(r27)
/* 803757CC 0037270C  98 1B 00 A9 */	stb r0, 0xa9(r27)
/* 803757D0 00372710  98 1B 00 AA */	stb r0, 0xaa(r27)
/* 803757D4 00372714  D0 1B 00 AC */	stfs f0, 0xac(r27)
.L_803757D8:
/* 803757D8 00372718  93 7F 02 50 */	stw r27, 0x250(r31)
/* 803757DC 0037271C  3C 80 73 69 */	lis r4, 0x73693030@ha
/* 803757E0 00372720  38 1F 01 90 */	addi r0, r31, 0x190
/* 803757E4 00372724  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 803757E8 00372728  90 01 00 08 */	stw r0, 8(r1)
/* 803757EC 0037272C  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 803757F0 00372730  38 00 00 01 */	li r0, 1
/* 803757F4 00372734  38 C4 30 30 */	addi r6, r4, 0x73693030@l
/* 803757F8 00372738  90 01 00 0C */	stw r0, 0xc(r1)
/* 803757FC 0037273C  7C A7 2B 78 */	mr r7, r5
/* 80375800 00372740  7C A9 2B 78 */	mr r9, r5
/* 80375804 00372744  39 04 30 31 */	addi r8, r4, 0x3031
/* 80375808 00372748  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8037580C 0037274C  39 44 30 33 */	addi r10, r4, 0x3033
/* 80375810 00372750  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375814 00372754  81 83 00 00 */	lwz r12, 0(r3)
/* 80375818 00372758  80 84 00 08 */	lwz r4, 8(r4)
/* 8037581C 0037275C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80375820 00372760  7D 89 03 A6 */	mtctr r12
/* 80375824 00372764  4E 80 04 21 */	bctrl 
/* 80375828 00372768  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8037582C 0037276C  38 80 00 01 */	li r4, 1
/* 80375830 00372770  4B F9 5F A9 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 80375834 00372774  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80375838 00372778  3C A0 73 69 */	lis r5, 0x73693030@ha
/* 8037583C 0037277C  3C 80 50 74 */	lis r4, 0x5074616F@ha
/* 80375840 00372780  80 FF 02 50 */	lwz r7, 0x250(r31)
/* 80375844 00372784  80 63 00 08 */	lwz r3, 8(r3)
/* 80375848 00372788  38 C5 30 30 */	addi r6, r5, 0x73693030@l
/* 8037584C 0037278C  38 A4 61 6F */	addi r5, r4, 0x5074616F@l
/* 80375850 00372790  48 0B F2 D5 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80375854 00372794  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80375858 00372798  3C A0 69 6E */	lis r5, 0x696E6F31@ha
/* 8037585C 0037279C  3C 80 50 74 */	lis r4, 0x5074656B@ha
/* 80375860 003727A0  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80375864 003727A4  80 63 00 08 */	lwz r3, 8(r3)
/* 80375868 003727A8  38 C5 6F 31 */	addi r6, r5, 0x696E6F31@l
/* 8037586C 003727AC  38 A4 65 6B */	addi r5, r4, 0x5074656B@l
/* 80375870 003727B0  38 FF 01 94 */	addi r7, r31, 0x194
/* 80375874 003727B4  39 00 00 03 */	li r8, 3
/* 80375878 003727B8  48 02 C3 E5 */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 8037587C 003727BC  90 7F 00 E0 */	stw r3, 0xe0(r31)
/* 80375880 003727C0  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80375884 003727C4  28 00 00 00 */	cmplwi r0, 0
/* 80375888 003727C8  41 82 00 3C */	beq .L_803758C4
/* 8037588C 003727CC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80375890 003727D0  28 00 00 00 */	cmplwi r0, 0
/* 80375894 003727D4  40 82 00 14 */	bne .L_803758A8
/* 80375898 003727D8  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037589C 003727DC  4B F9 5F 25 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803758A0 003727E0  38 00 00 00 */	li r0, 0
/* 803758A4 003727E4  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803758A8:
/* 803758A8 003727E8  88 0D 98 FB */	lbz r0, mZukanCategoryTest__Q28Morimura10TZukanBase@sda21(r13)
/* 803758AC 003727EC  28 00 00 00 */	cmplwi r0, 0
/* 803758B0 003727F0  41 82 00 14 */	beq .L_803758C4
/* 803758B4 003727F4  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 803758B8 003727F8  4B F9 5F 09 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803758BC 003727FC  38 00 00 01 */	li r0, 1
/* 803758C0 00372800  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803758C4:
/* 803758C4 00372804  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803758C8 00372808  3C A0 65 69 */	lis r5, 0x65693030@ha
/* 803758CC 0037280C  3C 80 50 67 */	lis r4, 0x50676973@ha
/* 803758D0 00372810  80 63 00 08 */	lwz r3, 8(r3)
/* 803758D4 00372814  38 C5 30 30 */	addi r6, r5, 0x65693030@l
/* 803758D8 00372818  38 A4 69 73 */	addi r5, r4, 0x50676973@l
/* 803758DC 0037281C  81 83 00 00 */	lwz r12, 0(r3)
/* 803758E0 00372820  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803758E4 00372824  7D 89 03 A6 */	mtctr r12
/* 803758E8 00372828  4E 80 04 21 */	bctrl 
/* 803758EC 0037282C  38 00 00 00 */	li r0, 0
/* 803758F0 00372830  3C 80 65 69 */	lis r4, 0x65693031@ha
/* 803758F4 00372834  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803758F8 00372838  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 803758FC 0037283C  38 C4 30 31 */	addi r6, r4, 0x65693031@l
/* 80375900 00372840  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375904 00372844  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80375908 00372848  80 64 00 08 */	lwz r3, 8(r4)
/* 8037590C 0037284C  81 83 00 00 */	lwz r12, 0(r3)
/* 80375910 00372850  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375914 00372854  7D 89 03 A6 */	mtctr r12
/* 80375918 00372858  4E 80 04 21 */	bctrl 
/* 8037591C 0037285C  38 00 00 00 */	li r0, 0
/* 80375920 00372860  3C 80 65 69 */	lis r4, 0x65693032@ha
/* 80375924 00372864  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375928 00372868  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037592C 0037286C  38 C4 30 32 */	addi r6, r4, 0x65693032@l
/* 80375930 00372870  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375934 00372874  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80375938 00372878  80 64 00 08 */	lwz r3, 8(r4)
/* 8037593C 0037287C  81 83 00 00 */	lwz r12, 0(r3)
/* 80375940 00372880  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375944 00372884  7D 89 03 A6 */	mtctr r12
/* 80375948 00372888  4E 80 04 21 */	bctrl 
/* 8037594C 0037288C  38 00 00 00 */	li r0, 0
/* 80375950 00372890  3C 80 65 69 */	lis r4, 0x65693033@ha
/* 80375954 00372894  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375958 00372898  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037595C 0037289C  38 C4 30 33 */	addi r6, r4, 0x65693033@l
/* 80375960 003728A0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375964 003728A4  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80375968 003728A8  80 64 00 08 */	lwz r3, 8(r4)
/* 8037596C 003728AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80375970 003728B0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375974 003728B4  7D 89 03 A6 */	mtctr r12
/* 80375978 003728B8  4E 80 04 21 */	bctrl 
/* 8037597C 003728BC  38 00 00 00 */	li r0, 0
/* 80375980 003728C0  3C 80 65 69 */	lis r4, 0x65693132@ha
/* 80375984 003728C4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375988 003728C8  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037598C 003728CC  38 C4 31 32 */	addi r6, r4, 0x65693132@l
/* 80375990 003728D0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375994 003728D4  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80375998 003728D8  80 64 00 08 */	lwz r3, 8(r4)
/* 8037599C 003728DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803759A0 003728E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803759A4 003728E4  7D 89 03 A6 */	mtctr r12
/* 803759A8 003728E8  4E 80 04 21 */	bctrl 
/* 803759AC 003728EC  38 00 00 00 */	li r0, 0
/* 803759B0 003728F0  3C 80 65 69 */	lis r4, 0x65693133@ha
/* 803759B4 003728F4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803759B8 003728F8  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 803759BC 003728FC  38 C4 31 33 */	addi r6, r4, 0x65693133@l
/* 803759C0 00372900  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803759C4 00372904  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 803759C8 00372908  80 64 00 08 */	lwz r3, 8(r4)
/* 803759CC 0037290C  81 83 00 00 */	lwz r12, 0(r3)
/* 803759D0 00372910  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803759D4 00372914  7D 89 03 A6 */	mtctr r12
/* 803759D8 00372918  4E 80 04 21 */	bctrl 
/* 803759DC 0037291C  38 00 00 00 */	li r0, 0
/* 803759E0 00372920  3C 80 65 69 */	lis r4, 0x65693134@ha
/* 803759E4 00372924  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803759E8 00372928  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 803759EC 0037292C  38 C4 31 34 */	addi r6, r4, 0x65693134@l
/* 803759F0 00372930  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803759F4 00372934  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 803759F8 00372938  80 64 00 08 */	lwz r3, 8(r4)
/* 803759FC 0037293C  81 83 00 00 */	lwz r12, 0(r3)
/* 80375A00 00372940  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375A04 00372944  7D 89 03 A6 */	mtctr r12
/* 80375A08 00372948  4E 80 04 21 */	bctrl 
/* 80375A0C 0037294C  38 00 00 00 */	li r0, 0
/* 80375A10 00372950  3C 80 65 69 */	lis r4, 0x65693135@ha
/* 80375A14 00372954  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375A18 00372958  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 80375A1C 0037295C  38 C4 31 35 */	addi r6, r4, 0x65693135@l
/* 80375A20 00372960  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375A24 00372964  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80375A28 00372968  80 64 00 08 */	lwz r3, 8(r4)
/* 80375A2C 0037296C  81 83 00 00 */	lwz r12, 0(r3)
/* 80375A30 00372970  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375A34 00372974  7D 89 03 A6 */	mtctr r12
/* 80375A38 00372978  4E 80 04 21 */	bctrl 
/* 80375A3C 0037297C  38 00 00 00 */	li r0, 0
/* 80375A40 00372980  3C 80 73 69 */	lis r4, 0x73693030@ha
/* 80375A44 00372984  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375A48 00372988  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 80375A4C 0037298C  38 C4 30 30 */	addi r6, r4, 0x73693030@l
/* 80375A50 00372990  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375A54 00372994  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 80375A58 00372998  80 64 00 08 */	lwz r3, 8(r4)
/* 80375A5C 0037299C  81 83 00 00 */	lwz r12, 0(r3)
/* 80375A60 003729A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375A64 003729A4  7D 89 03 A6 */	mtctr r12
/* 80375A68 003729A8  4E 80 04 21 */	bctrl 
/* 80375A6C 003729AC  38 00 00 00 */	li r0, 0
/* 80375A70 003729B0  3C 80 73 69 */	lis r4, 0x73693031@ha
/* 80375A74 003729B4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375A78 003729B8  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 80375A7C 003729BC  38 C4 30 31 */	addi r6, r4, 0x73693031@l
/* 80375A80 003729C0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375A84 003729C4  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 80375A88 003729C8  80 64 00 08 */	lwz r3, 8(r4)
/* 80375A8C 003729CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80375A90 003729D0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375A94 003729D4  7D 89 03 A6 */	mtctr r12
/* 80375A98 003729D8  4E 80 04 21 */	bctrl 
/* 80375A9C 003729DC  38 00 00 00 */	li r0, 0
/* 80375AA0 003729E0  3C 80 73 69 */	lis r4, 0x73693032@ha
/* 80375AA4 003729E4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375AA8 003729E8  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 80375AAC 003729EC  38 C4 30 32 */	addi r6, r4, 0x73693032@l
/* 80375AB0 003729F0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375AB4 003729F4  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 80375AB8 003729F8  80 64 00 08 */	lwz r3, 8(r4)
/* 80375ABC 003729FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80375AC0 00372A00  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375AC4 00372A04  7D 89 03 A6 */	mtctr r12
/* 80375AC8 00372A08  4E 80 04 21 */	bctrl 
/* 80375ACC 00372A0C  38 00 00 00 */	li r0, 0
/* 80375AD0 00372A10  3C 80 73 69 */	lis r4, 0x73693033@ha
/* 80375AD4 00372A14  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375AD8 00372A18  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 80375ADC 00372A1C  38 C4 30 33 */	addi r6, r4, 0x73693033@l
/* 80375AE0 00372A20  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80375AE4 00372A24  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 80375AE8 00372A28  80 64 00 08 */	lwz r3, 8(r4)
/* 80375AEC 00372A2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80375AF0 00372A30  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375AF4 00372A34  7D 89 03 A6 */	mtctr r12
/* 80375AF8 00372A38  4E 80 04 21 */	bctrl 
/* 80375AFC 00372A3C  38 00 00 00 */	li r0, 0
/* 80375B00 00372A40  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80375B04 00372A44  38 60 00 58 */	li r3, 0x58
/* 80375B08 00372A48  4B CA E3 9D */	bl __nw__FUl
/* 80375B0C 00372A4C  7C 60 1B 79 */	or. r0, r3, r3
/* 80375B10 00372A50  41 82 00 14 */	beq .L_80375B24
/* 80375B14 00372A54  7F A4 EB 78 */	mr r4, r29
/* 80375B18 00372A58  38 A0 00 02 */	li r5, 2
/* 80375B1C 00372A5C  48 00 5D 99 */	bl __ct__Q28Morimura12TZukanWindowFP10JKRArchivei
/* 80375B20 00372A60  7C 60 1B 78 */	mr r0, r3
.L_80375B24:
/* 80375B24 00372A64  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 80375B28 00372A68  38 9E 05 C4 */	addi r4, r30, 0x5c4
/* 80375B2C 00372A6C  3C A0 00 02 */	lis r5, 2
/* 80375B30 00372A70  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80375B34 00372A74  81 83 00 00 */	lwz r12, 0(r3)
/* 80375B38 00372A78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80375B3C 00372A7C  7D 89 03 A6 */	mtctr r12
/* 80375B40 00372A80  4E 80 04 21 */	bctrl 
/* 80375B44 00372A84  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80375B48 00372A88  38 9E 05 DC */	addi r4, r30, 0x5dc
/* 80375B4C 00372A8C  48 02 B9 15 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80375B50 00372A90  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80375B54 00372A94  38 9E 05 F4 */	addi r4, r30, 0x5f4
/* 80375B58 00372A98  48 02 B9 09 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80375B5C 00372A9C  80 BF 00 DC */	lwz r5, 0xdc(r31)
/* 80375B60 00372AA0  3C 80 61 33 */	lis r4, 0x61336473@ha
/* 80375B64 00372AA4  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80375B68 00372AA8  38 C4 64 73 */	addi r6, r4, 0x61336473@l
/* 80375B6C 00372AAC  80 85 00 08 */	lwz r4, 8(r5)
/* 80375B70 00372AB0  38 A0 6F 74 */	li r5, 0x6f74
/* 80375B74 00372AB4  4B FB 76 DD */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 80375B78 00372AB8  90 7F 00 E8 */	stw r3, 0xe8(r31)
/* 80375B7C 00372ABC  3C 60 61 33 */	lis r3, 0x61336473@ha
/* 80375B80 00372AC0  38 C3 64 73 */	addi r6, r3, 0x61336473@l
/* 80375B84 00372AC4  38 A0 6F 74 */	li r5, 0x6f74
/* 80375B88 00372AC8  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80375B8C 00372ACC  80 63 00 08 */	lwz r3, 8(r3)
/* 80375B90 00372AD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80375B94 00372AD4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375B98 00372AD8  7D 89 03 A6 */	mtctr r12
/* 80375B9C 00372ADC  4E 80 04 21 */	bctrl 
/* 80375BA0 00372AE0  90 7F 01 00 */	stw r3, 0x100(r31)
/* 80375BA4 00372AE4  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 80375BA8 00372AE8  28 00 00 00 */	cmplwi r0, 0
/* 80375BAC 00372AEC  40 82 00 18 */	bne .L_80375BC4
/* 80375BB0 00372AF0  38 7E 00 0C */	addi r3, r30, 0xc
/* 80375BB4 00372AF4  38 BE 00 18 */	addi r5, r30, 0x18
/* 80375BB8 00372AF8  38 80 08 D9 */	li r4, 0x8d9
/* 80375BBC 00372AFC  4C C6 31 82 */	crclr 6
/* 80375BC0 00372B00  4B CB 4A 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80375BC4:
/* 80375BC4 00372B04  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 80375BC8 00372B08  28 00 00 00 */	cmplwi r0, 0
/* 80375BCC 00372B0C  40 82 00 18 */	bne .L_80375BE4
/* 80375BD0 00372B10  38 7E 00 0C */	addi r3, r30, 0xc
/* 80375BD4 00372B14  38 BE 00 18 */	addi r5, r30, 0x18
/* 80375BD8 00372B18  38 80 08 DA */	li r4, 0x8da
/* 80375BDC 00372B1C  4C C6 31 82 */	crclr 6
/* 80375BE0 00372B20  4B CB 4A 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80375BE4:
/* 80375BE4 00372B24  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 80375BE8 00372B28  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 80375BEC 00372B2C  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80375BF0 00372B30  4B F8 FA B9 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 80375BF4 00372B34  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 80375BF8 00372B38  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80375BFC 00372B3C  4B F8 FC BD */	bl start__Q32og6Screen9AnimGroupFv
/* 80375C00 00372B40  80 9F 00 DC */	lwz r4, 0xdc(r31)
/* 80375C04 00372B44  3C 60 64 63 */	lis r3, 0x64636170@ha
/* 80375C08 00372B48  38 C3 61 70 */	addi r6, r3, 0x64636170@l
/* 80375C0C 00372B4C  38 A0 50 33 */	li r5, 0x5033
/* 80375C10 00372B50  80 64 00 08 */	lwz r3, 8(r4)
/* 80375C14 00372B54  81 83 00 00 */	lwz r12, 0(r3)
/* 80375C18 00372B58  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80375C1C 00372B5C  7D 89 03 A6 */	mtctr r12
/* 80375C20 00372B60  4E 80 04 21 */	bctrl 
/* 80375C24 00372B64  90 7F 01 04 */	stw r3, 0x104(r31)
/* 80375C28 00372B68  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 80375C2C 00372B6C  28 00 00 00 */	cmplwi r0, 0
/* 80375C30 00372B70  40 82 00 18 */	bne .L_80375C48
/* 80375C34 00372B74  38 7E 00 0C */	addi r3, r30, 0xc
/* 80375C38 00372B78  38 BE 00 18 */	addi r5, r30, 0x18
/* 80375C3C 00372B7C  38 80 08 DF */	li r4, 0x8df
/* 80375C40 00372B80  4C C6 31 82 */	crclr 6
/* 80375C44 00372B84  4B CB 49 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80375C48:
/* 80375C48 00372B88  38 60 00 18 */	li r3, 0x18
/* 80375C4C 00372B8C  4B CA E2 59 */	bl __nw__FUl
/* 80375C50 00372B90  7C 60 1B 79 */	or. r0, r3, r3
/* 80375C54 00372B94  41 82 00 14 */	beq .L_80375C68
/* 80375C58 00372B98  7F A4 EB 78 */	mr r4, r29
/* 80375C5C 00372B9C  38 A0 00 00 */	li r5, 0
/* 80375C60 00372BA0  48 02 B7 49 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80375C64 00372BA4  7C 60 1B 78 */	mr r0, r3
.L_80375C68:
/* 80375C68 00372BA8  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 80375C6C 00372BAC  38 9E 06 0C */	addi r4, r30, 0x60c
/* 80375C70 00372BB0  3C A0 00 02 */	lis r5, 2
/* 80375C74 00372BB4  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 80375C78 00372BB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80375C7C 00372BBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80375C80 00372BC0  7D 89 03 A6 */	mtctr r12
/* 80375C84 00372BC4  4E 80 04 21 */	bctrl 
/* 80375C88 00372BC8  C8 3E 04 90 */	lfd f1, 0x490(r30)
/* 80375C8C 00372BCC  38 60 00 18 */	li r3, 0x18
/* 80375C90 00372BD0  C8 1E 04 98 */	lfd f0, 0x498(r30)
/* 80375C94 00372BD4  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 80375C98 00372BD8  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80375C9C 00372BDC  4B CA E2 09 */	bl __nw__FUl
/* 80375CA0 00372BE0  7C 60 1B 79 */	or. r0, r3, r3
/* 80375CA4 00372BE4  41 82 00 24 */	beq .L_80375CC8
/* 80375CA8 00372BE8  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80375CAC 00372BEC  3C A0 00 31 */	lis r5, 0x00313330@ha
/* 80375CB0 00372BF0  38 81 00 30 */	addi r4, r1, 0x30
/* 80375CB4 00372BF4  38 E0 00 02 */	li r7, 2
/* 80375CB8 00372BF8  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80375CBC 00372BFC  38 A5 33 30 */	addi r5, r5, 0x00313330@l
/* 80375CC0 00372C00  48 02 B4 25 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 80375CC4 00372C04  7C 60 1B 78 */	mr r0, r3
.L_80375CC8:
/* 80375CC8 00372C08  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80375CCC 00372C0C  38 60 00 18 */	li r3, 0x18
/* 80375CD0 00372C10  C8 3E 04 A0 */	lfd f1, 0x4a0(r30)
/* 80375CD4 00372C14  C8 1E 04 A8 */	lfd f0, 0x4a8(r30)
/* 80375CD8 00372C18  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 80375CDC 00372C1C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80375CE0 00372C20  4B CA E1 C5 */	bl __nw__FUl
/* 80375CE4 00372C24  7C 60 1B 79 */	or. r0, r3, r3
/* 80375CE8 00372C28  41 82 00 24 */	beq .L_80375D0C
/* 80375CEC 00372C2C  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80375CF0 00372C30  3C A0 00 31 */	lis r5, 0x00313830@ha
/* 80375CF4 00372C34  38 81 00 20 */	addi r4, r1, 0x20
/* 80375CF8 00372C38  38 E0 00 02 */	li r7, 2
/* 80375CFC 00372C3C  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80375D00 00372C40  38 A5 38 30 */	addi r5, r5, 0x00313830@l
/* 80375D04 00372C44  48 02 B3 E1 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 80375D08 00372C48  7C 60 1B 78 */	mr r0, r3
.L_80375D0C:
/* 80375D0C 00372C4C  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 80375D10 00372C50  38 60 00 18 */	li r3, 0x18
/* 80375D14 00372C54  C8 3E 04 B0 */	lfd f1, 0x4b0(r30)
/* 80375D18 00372C58  C8 1E 04 B8 */	lfd f0, 0x4b8(r30)
/* 80375D1C 00372C5C  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 80375D20 00372C60  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80375D24 00372C64  4B CA E1 81 */	bl __nw__FUl
/* 80375D28 00372C68  7C 60 1B 79 */	or. r0, r3, r3
/* 80375D2C 00372C6C  41 82 00 24 */	beq .L_80375D50
/* 80375D30 00372C70  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80375D34 00372C74  3C A0 00 31 */	lis r5, 0x00313730@ha
/* 80375D38 00372C78  38 81 00 10 */	addi r4, r1, 0x10
/* 80375D3C 00372C7C  38 E0 00 02 */	li r7, 2
/* 80375D40 00372C80  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80375D44 00372C84  38 A5 37 30 */	addi r5, r5, 0x00313730@l
/* 80375D48 00372C88  48 02 B3 9D */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 80375D4C 00372C8C  7C 60 1B 78 */	mr r0, r3
.L_80375D50:
/* 80375D50 00372C90  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 80375D54 00372C94  38 00 00 A5 */	li r0, 0xa5
/* 80375D58 00372C98  38 E0 00 00 */	li r7, 0
/* 80375D5C 00372C9C  38 C0 00 FF */	li r6, 0xff
/* 80375D60 00372CA0  B0 1F 01 B0 */	sth r0, 0x1b0(r31)
/* 80375D64 00372CA4  38 A0 00 C3 */	li r5, 0xc3
/* 80375D68 00372CA8  38 80 00 D5 */	li r4, 0xd5
/* 80375D6C 00372CAC  38 60 00 28 */	li r3, 0x28
/* 80375D70 00372CB0  B0 FF 01 B2 */	sth r7, 0x1b2(r31)
/* 80375D74 00372CB4  38 00 00 C8 */	li r0, 0xc8
/* 80375D78 00372CB8  B0 FF 01 B4 */	sth r7, 0x1b4(r31)
/* 80375D7C 00372CBC  B0 DF 01 B6 */	sth r6, 0x1b6(r31)
/* 80375D80 00372CC0  B0 FF 01 B8 */	sth r7, 0x1b8(r31)
/* 80375D84 00372CC4  B0 BF 01 BA */	sth r5, 0x1ba(r31)
/* 80375D88 00372CC8  B0 9F 01 BC */	sth r4, 0x1bc(r31)
/* 80375D8C 00372CCC  B0 DF 01 BE */	sth r6, 0x1be(r31)
/* 80375D90 00372CD0  B0 DF 01 C0 */	sth r6, 0x1c0(r31)
/* 80375D94 00372CD4  B0 7F 01 C2 */	sth r3, 0x1c2(r31)
/* 80375D98 00372CD8  B0 7F 01 C4 */	sth r3, 0x1c4(r31)
/* 80375D9C 00372CDC  B0 FF 01 C6 */	sth r7, 0x1c6(r31)
/* 80375DA0 00372CE0  B0 7F 01 C8 */	sth r3, 0x1c8(r31)
/* 80375DA4 00372CE4  B0 7F 01 CA */	sth r3, 0x1ca(r31)
/* 80375DA8 00372CE8  B0 DF 01 CC */	sth r6, 0x1cc(r31)
/* 80375DAC 00372CEC  B0 FF 01 CE */	sth r7, 0x1ce(r31)
/* 80375DB0 00372CF0  B0 DF 01 D0 */	sth r6, 0x1d0(r31)
/* 80375DB4 00372CF4  B0 1F 01 D2 */	sth r0, 0x1d2(r31)
/* 80375DB8 00372CF8  B0 1F 01 D4 */	sth r0, 0x1d4(r31)
/* 80375DBC 00372CFC  B0 DF 01 D6 */	sth r6, 0x1d6(r31)
/* 80375DC0 00372D00  B0 1F 01 D8 */	sth r0, 0x1d8(r31)
/* 80375DC4 00372D04  B0 1F 01 DA */	sth r0, 0x1da(r31)
/* 80375DC8 00372D08  B0 DF 01 DC */	sth r6, 0x1dc(r31)
/* 80375DCC 00372D0C  B0 DF 01 DE */	sth r6, 0x1de(r31)
/* 80375DD0 00372D10  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80375DD4 00372D14  28 00 00 00 */	cmplwi r0, 0
/* 80375DD8 00372D18  41 82 00 4C */	beq .L_80375E24
/* 80375DDC 00372D1C  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 80375DE0 00372D20  38 C0 00 00 */	li r6, 0
/* 80375DE4 00372D24  7C 09 03 A6 */	mtctr r0
/* 80375DE8 00372D28  2C 00 00 00 */	cmpwi r0, 0
/* 80375DEC 00372D2C  40 81 00 30 */	ble .L_80375E1C
.L_80375DF0:
/* 80375DF0 00372D30  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 80375DF4 00372D34  38 A6 00 01 */	addi r5, r6, 1
/* 80375DF8 00372D38  80 9F 01 84 */	lwz r4, 0x184(r31)
/* 80375DFC 00372D3C  7C 03 38 2E */	lwzx r0, r3, r7
/* 80375E00 00372D40  7C 04 00 AE */	lbzx r0, r4, r0
/* 80375E04 00372D44  28 00 00 00 */	cmplwi r0, 0
/* 80375E08 00372D48  41 82 00 08 */	beq .L_80375E10
/* 80375E0C 00372D4C  38 A6 00 06 */	addi r5, r6, 6
.L_80375E10:
/* 80375E10 00372D50  7C A6 2B 78 */	mr r6, r5
/* 80375E14 00372D54  38 E7 00 04 */	addi r7, r7, 4
/* 80375E18 00372D58  42 00 FF D8 */	bdnz .L_80375DF0
.L_80375E1C:
/* 80375E1C 00372D5C  90 DF 02 38 */	stw r6, 0x238(r31)
/* 80375E20 00372D60  48 00 00 1C */	b .L_80375E3C
.L_80375E24:
/* 80375E24 00372D64  7F E3 FB 78 */	mr r3, r31
/* 80375E28 00372D68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80375E2C 00372D6C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80375E30 00372D70  7D 89 03 A6 */	mtctr r12
/* 80375E34 00372D74  4E 80 04 21 */	bctrl 
/* 80375E38 00372D78  90 7F 02 38 */	stw r3, 0x238(r31)
.L_80375E3C:
/* 80375E3C 00372D7C  7F E3 FB 78 */	mr r3, r31
/* 80375E40 00372D80  7F A4 EB 78 */	mr r4, r29
/* 80375E44 00372D84  4B FF B1 89 */	bl doCreate__Q28Morimura10TZukanBaseFP10JKRArchive
/* 80375E48 00372D88  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80375E4C 00372D8C  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80375E50 00372D90  80 83 00 00 */	lwz r4, 0(r3)
/* 80375E54 00372D94  80 63 00 04 */	lwz r3, 4(r3)
/* 80375E58 00372D98  28 00 00 00 */	cmplwi r0, 0
/* 80375E5C 00372D9C  80 84 00 04 */	lwz r4, 4(r4)
/* 80375E60 00372DA0  80 63 00 04 */	lwz r3, 4(r3)
/* 80375E64 00372DA4  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 80375E68 00372DA8  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 80375E6C 00372DAC  EF C1 00 28 */	fsubs f30, f1, f0
/* 80375E70 00372DB0  41 82 00 24 */	beq .L_80375E94
/* 80375E74 00372DB4  A8 7F 00 8E */	lha r3, 0x8e(r31)
/* 80375E78 00372DB8  80 9F 02 38 */	lwz r4, 0x238(r31)
/* 80375E7C 00372DBC  38 03 FF FF */	addi r0, r3, -1
/* 80375E80 00372DC0  1C 00 00 03 */	mulli r0, r0, 3
/* 80375E84 00372DC4  7C 04 00 00 */	cmpw r4, r0
/* 80375E88 00372DC8  41 81 00 0C */	bgt .L_80375E94
/* 80375E8C 00372DCC  38 00 00 00 */	li r0, 0
/* 80375E90 00372DD0  98 1F 02 42 */	stb r0, 0x242(r31)
.L_80375E94:
/* 80375E94 00372DD4  3B 20 00 00 */	li r25, 0
/* 80375E98 00372DD8  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
.L_80375E9C:
/* 80375E9C 00372DDC  3B 60 00 00 */	li r27, 0
/* 80375EA0 00372DE0  3B 40 00 00 */	li r26, 0
/* 80375EA4 00372DE4  48 00 00 48 */	b .L_80375EEC
.L_80375EA8:
/* 80375EA8 00372DE8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80375EAC 00372DEC  7C 83 D0 2E */	lwzx r4, r3, r26
/* 80375EB0 00372DF0  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 80375EB4 00372DF4  80 64 00 04 */	lwz r3, 4(r4)
/* 80375EB8 00372DF8  EC 00 F0 2A */	fadds f0, f0, f30
/* 80375EBC 00372DFC  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80375EC0 00372E00  81 83 00 00 */	lwz r12, 0(r3)
/* 80375EC4 00372E04  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80375EC8 00372E08  7D 89 03 A6 */	mtctr r12
/* 80375ECC 00372E0C  4E 80 04 21 */	bctrl 
/* 80375ED0 00372E10  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80375ED4 00372E14  3B 7B 00 01 */	addi r27, r27, 1
/* 80375ED8 00372E18  7C 83 D0 2E */	lwzx r4, r3, r26
/* 80375EDC 00372E1C  3B 5A 00 04 */	addi r26, r26, 4
/* 80375EE0 00372E20  80 64 00 04 */	lwz r3, 4(r4)
/* 80375EE4 00372E24  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 80375EE8 00372E28  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_80375EEC:
/* 80375EEC 00372E2C  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 80375EF0 00372E30  7C 1B 00 00 */	cmpw r27, r0
/* 80375EF4 00372E34  41 80 FF B4 */	blt .L_80375EA8
/* 80375EF8 00372E38  7F E3 FB 78 */	mr r3, r31
/* 80375EFC 00372E3C  38 80 00 00 */	li r4, 0
/* 80375F00 00372E40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80375F04 00372E44  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80375F08 00372E48  7D 89 03 A6 */	mtctr r12
/* 80375F0C 00372E4C  4E 80 04 21 */	bctrl 
/* 80375F10 00372E50  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 80375F14 00372E54  38 00 00 00 */	li r0, 0
/* 80375F18 00372E58  7F E3 FB 78 */	mr r3, r31
/* 80375F1C 00372E5C  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 80375F20 00372E60  90 04 00 20 */	stw r0, 0x20(r4)
/* 80375F24 00372E64  81 9F 00 00 */	lwz r12, 0(r31)
/* 80375F28 00372E68  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80375F2C 00372E6C  7D 89 03 A6 */	mtctr r12
/* 80375F30 00372E70  4E 80 04 21 */	bctrl 
/* 80375F34 00372E74  3B 39 00 01 */	addi r25, r25, 1
/* 80375F38 00372E78  2C 19 00 06 */	cmpwi r25, 6
/* 80375F3C 00372E7C  41 80 FF 60 */	blt .L_80375E9C
/* 80375F40 00372E80  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80375F44 00372E84  3B A0 FF FF */	li r29, -1
/* 80375F48 00372E88  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80375F4C 00372E8C  28 00 00 00 */	cmplwi r0, 0
/* 80375F50 00372E90  41 82 00 3C */	beq .L_80375F8C
/* 80375F54 00372E94  81 83 00 00 */	lwz r12, 0(r3)
/* 80375F58 00372E98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80375F5C 00372E9C  7D 89 03 A6 */	mtctr r12
/* 80375F60 00372EA0  4E 80 04 21 */	bctrl 
/* 80375F64 00372EA4  3C A0 4E 45 */	lis r5, 0x4E454D59@ha
/* 80375F68 00372EA8  38 00 44 45 */	li r0, 0x4445
/* 80375F6C 00372EAC  38 A5 4D 59 */	addi r5, r5, 0x4E454D59@l
/* 80375F70 00372EB0  7C 84 2A 78 */	xor r4, r4, r5
/* 80375F74 00372EB4  7C 60 02 78 */	xor r0, r3, r0
/* 80375F78 00372EB8  7C 80 03 79 */	or. r0, r4, r0
/* 80375F7C 00372EBC  40 82 00 10 */	bne .L_80375F8C
/* 80375F80 00372EC0  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80375F84 00372EC4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80375F88 00372EC8  83 A3 00 00 */	lwz r29, 0(r3)
.L_80375F8C:
/* 80375F8C 00372ECC  2C 1D 00 00 */	cmpwi r29, 0
/* 80375F90 00372ED0  40 80 00 70 */	bge .L_80376000
/* 80375F94 00372ED4  3B 20 00 00 */	li r25, 0
/* 80375F98 00372ED8  48 00 00 4C */	b .L_80375FE4
.L_80375F9C:
/* 80375F9C 00372EDC  7F E3 FB 78 */	mr r3, r31
/* 80375FA0 00372EE0  7F 24 CB 78 */	mr r4, r25
/* 80375FA4 00372EE4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80375FA8 00372EE8  38 A0 00 00 */	li r5, 0
/* 80375FAC 00372EEC  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80375FB0 00372EF0  7D 89 03 A6 */	mtctr r12
/* 80375FB4 00372EF4  4E 80 04 21 */	bctrl 
/* 80375FB8 00372EF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80375FBC 00372EFC  41 82 00 24 */	beq .L_80375FE0
/* 80375FC0 00372F00  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80375FC4 00372F04  7F 3D CB 78 */	mr r29, r25
/* 80375FC8 00372F08  28 00 00 00 */	cmplwi r0, 0
/* 80375FCC 00372F0C  41 82 00 34 */	beq .L_80376000
/* 80375FD0 00372F10  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 80375FD4 00372F14  57 20 10 3A */	slwi r0, r25, 2
/* 80375FD8 00372F18  7F A3 00 2E */	lwzx r29, r3, r0
/* 80375FDC 00372F1C  48 00 00 24 */	b .L_80376000
.L_80375FE0:
/* 80375FE0 00372F20  3B 39 00 01 */	addi r25, r25, 1
.L_80375FE4:
/* 80375FE4 00372F24  7F E3 FB 78 */	mr r3, r31
/* 80375FE8 00372F28  81 9F 00 00 */	lwz r12, 0(r31)
/* 80375FEC 00372F2C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80375FF0 00372F30  7D 89 03 A6 */	mtctr r12
/* 80375FF4 00372F34  4E 80 04 21 */	bctrl 
/* 80375FF8 00372F38  7C 19 18 00 */	cmpw r25, r3
/* 80375FFC 00372F3C  41 80 FF A0 */	blt .L_80375F9C
.L_80376000:
/* 80376000 00372F40  2C 1D 00 00 */	cmpwi r29, 0
/* 80376004 00372F44  41 80 02 78 */	blt .L_8037627C
/* 80376008 00372F48  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037600C 00372F4C  28 00 00 00 */	cmplwi r0, 0
/* 80376010 00372F50  41 82 00 40 */	beq .L_80376050
/* 80376014 00372F54  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 80376018 00372F58  38 A0 00 00 */	li r5, 0
/* 8037601C 00372F5C  38 80 00 00 */	li r4, 0
/* 80376020 00372F60  7C 09 03 A6 */	mtctr r0
/* 80376024 00372F64  2C 00 00 00 */	cmpwi r0, 0
/* 80376028 00372F68  40 81 00 28 */	ble .L_80376050
.L_8037602C:
/* 8037602C 00372F6C  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 80376030 00372F70  7C 03 20 2E */	lwzx r0, r3, r4
/* 80376034 00372F74  7C 1D 00 00 */	cmpw r29, r0
/* 80376038 00372F78  40 82 00 0C */	bne .L_80376044
/* 8037603C 00372F7C  7C BD 2B 78 */	mr r29, r5
/* 80376040 00372F80  48 00 00 10 */	b .L_80376050
.L_80376044:
/* 80376044 00372F84  38 84 00 04 */	addi r4, r4, 4
/* 80376048 00372F88  38 A5 00 01 */	addi r5, r5, 1
/* 8037604C 00372F8C  42 00 FF E0 */	bdnz .L_8037602C
.L_80376050:
/* 80376050 00372F90  2C 1D 00 02 */	cmpwi r29, 2
/* 80376054 00372F94  40 81 01 F4 */	ble .L_80376248
/* 80376058 00372F98  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
.L_8037605C:
/* 8037605C 00372F9C  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 80376060 00372FA0  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80376064 00372FA4  54 00 10 3A */	slwi r0, r0, 2
/* 80376068 00372FA8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037606C 00372FAC  48 02 C5 A9 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80376070 00372FB0  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80376074 00372FB4  38 83 00 03 */	addi r4, r3, 3
/* 80376078 00372FB8  28 00 00 00 */	cmplwi r0, 0
/* 8037607C 00372FBC  41 82 00 24 */	beq .L_803760A0
/* 80376080 00372FC0  80 1F 02 34 */	lwz r0, 0x234(r31)
/* 80376084 00372FC4  2C 00 00 00 */	cmpwi r0, 0
/* 80376088 00372FC8  41 80 00 18 */	blt .L_803760A0
/* 8037608C 00372FCC  7C 03 00 00 */	cmpw r3, r0
/* 80376090 00372FD0  40 80 00 10 */	bge .L_803760A0
/* 80376094 00372FD4  7C 04 00 00 */	cmpw r4, r0
/* 80376098 00372FD8  40 81 00 08 */	ble .L_803760A0
/* 8037609C 00372FDC  7C 04 03 78 */	mr r4, r0
.L_803760A0:
/* 803760A0 00372FE0  7C 04 E8 00 */	cmpw r4, r29
/* 803760A4 00372FE4  40 81 01 08 */	ble .L_803761AC
/* 803760A8 00372FE8  7C 03 E8 00 */	cmpw r3, r29
/* 803760AC 00372FEC  41 82 00 20 */	beq .L_803760CC
/* 803760B0 00372FF0  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 803760B4 00372FF4  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 803760B8 00372FF8  54 00 10 3A */	slwi r0, r0, 2
/* 803760BC 00372FFC  7C 84 00 2E */	lwzx r4, r4, r0
/* 803760C0 00373000  80 04 00 0C */	lwz r0, 0xc(r4)
/* 803760C4 00373004  2C 00 00 00 */	cmpwi r0, 0
/* 803760C8 00373008  40 82 00 E4 */	bne .L_803761AC
.L_803760CC:
/* 803760CC 0037300C  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 803760D0 00373010  80 9F 00 88 */	lwz r4, 0x88(r31)
/* 803760D4 00373014  54 00 10 3A */	slwi r0, r0, 2
/* 803760D8 00373018  7C 84 00 2E */	lwzx r4, r4, r0
/* 803760DC 0037301C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 803760E0 00373020  2C 00 00 00 */	cmpwi r0, 0
/* 803760E4 00373024  41 82 00 78 */	beq .L_8037615C
/* 803760E8 00373028  FC 00 F0 50 */	fneg f0, f30
/* 803760EC 0037302C  C0 22 07 CC */	lfs f1, lbl_8051EB2C@sda21(r2)
/* 803760F0 00373030  3B 20 00 00 */	li r25, 0
/* 803760F4 00373034  3B 40 00 00 */	li r26, 0
/* 803760F8 00373038  EF C1 00 32 */	fmuls f30, f1, f0
/* 803760FC 0037303C  48 00 00 48 */	b .L_80376144
.L_80376100:
/* 80376100 00373040  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80376104 00373044  7C 83 D0 2E */	lwzx r4, r3, r26
/* 80376108 00373048  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8037610C 0037304C  80 64 00 04 */	lwz r3, 4(r4)
/* 80376110 00373050  EC 00 F0 2A */	fadds f0, f0, f30
/* 80376114 00373054  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80376118 00373058  81 83 00 00 */	lwz r12, 0(r3)
/* 8037611C 0037305C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80376120 00373060  7D 89 03 A6 */	mtctr r12
/* 80376124 00373064  4E 80 04 21 */	bctrl 
/* 80376128 00373068  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037612C 0037306C  3B 39 00 01 */	addi r25, r25, 1
/* 80376130 00373070  7C 83 D0 2E */	lwzx r4, r3, r26
/* 80376134 00373074  3B 5A 00 04 */	addi r26, r26, 4
/* 80376138 00373078  80 64 00 04 */	lwz r3, 4(r4)
/* 8037613C 0037307C  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 80376140 00373080  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_80376144:
/* 80376144 00373084  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 80376148 00373088  7C 19 00 00 */	cmpw r25, r0
/* 8037614C 0037308C  41 80 FF B4 */	blt .L_80376100
/* 80376150 00373090  38 00 00 01 */	li r0, 1
/* 80376154 00373094  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80376158 00373098  48 00 00 3C */	b .L_80376194
.L_8037615C:
/* 8037615C 0037309C  7C 63 E8 51 */	subf. r3, r3, r29
/* 80376160 003730A0  38 00 00 00 */	li r0, 0
/* 80376164 003730A4  90 6D 99 C8 */	stw r3, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80376168 003730A8  41 80 00 10 */	blt .L_80376178
/* 8037616C 003730AC  2C 03 00 03 */	cmpwi r3, 3
/* 80376170 003730B0  40 80 00 08 */	bge .L_80376178
/* 80376174 003730B4  38 00 00 01 */	li r0, 1
.L_80376178:
/* 80376178 003730B8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8037617C 003730BC  40 82 00 18 */	bne .L_80376194
/* 80376180 003730C0  38 7E 00 0C */	addi r3, r30, 0xc
/* 80376184 003730C4  38 BE 00 18 */	addi r5, r30, 0x18
/* 80376188 003730C8  38 80 09 7F */	li r4, 0x97f
/* 8037618C 003730CC  4C C6 31 82 */	crclr 6
/* 80376190 003730D0  4B CB 44 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80376194:
/* 80376194 003730D4  7F E3 FB 78 */	mr r3, r31
/* 80376198 003730D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037619C 003730DC  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 803761A0 003730E0  7D 89 03 A6 */	mtctr r12
/* 803761A4 003730E4  4E 80 04 21 */	bctrl 
/* 803761A8 003730E8  48 00 00 D4 */	b .L_8037627C
.L_803761AC:
/* 803761AC 003730EC  3B 20 00 00 */	li r25, 0
/* 803761B0 003730F0  3B 40 00 00 */	li r26, 0
/* 803761B4 003730F4  48 00 00 48 */	b .L_803761FC
.L_803761B8:
/* 803761B8 003730F8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803761BC 003730FC  7C 83 D0 2E */	lwzx r4, r3, r26
/* 803761C0 00373100  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 803761C4 00373104  80 64 00 04 */	lwz r3, 4(r4)
/* 803761C8 00373108  EC 00 F0 28 */	fsubs f0, f0, f30
/* 803761CC 0037310C  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 803761D0 00373110  81 83 00 00 */	lwz r12, 0(r3)
/* 803761D4 00373114  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803761D8 00373118  7D 89 03 A6 */	mtctr r12
/* 803761DC 0037311C  4E 80 04 21 */	bctrl 
/* 803761E0 00373120  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 803761E4 00373124  3B 39 00 01 */	addi r25, r25, 1
/* 803761E8 00373128  7C 83 D0 2E */	lwzx r4, r3, r26
/* 803761EC 0037312C  3B 5A 00 04 */	addi r26, r26, 4
/* 803761F0 00373130  80 64 00 04 */	lwz r3, 4(r4)
/* 803761F4 00373134  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 803761F8 00373138  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_803761FC:
/* 803761FC 0037313C  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 80376200 00373140  7C 19 00 00 */	cmpw r25, r0
/* 80376204 00373144  41 80 FF B4 */	blt .L_803761B8
/* 80376208 00373148  7F E3 FB 78 */	mr r3, r31
/* 8037620C 0037314C  38 80 00 01 */	li r4, 1
/* 80376210 00373150  81 9F 00 00 */	lwz r12, 0(r31)
/* 80376214 00373154  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80376218 00373158  7D 89 03 A6 */	mtctr r12
/* 8037621C 0037315C  4E 80 04 21 */	bctrl 
/* 80376220 00373160  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 80376224 00373164  38 00 00 00 */	li r0, 0
/* 80376228 00373168  7F E3 FB 78 */	mr r3, r31
/* 8037622C 0037316C  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 80376230 00373170  90 04 00 20 */	stw r0, 0x20(r4)
/* 80376234 00373174  81 9F 00 00 */	lwz r12, 0(r31)
/* 80376238 00373178  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037623C 0037317C  7D 89 03 A6 */	mtctr r12
/* 80376240 00373180  4E 80 04 21 */	bctrl 
/* 80376244 00373184  4B FF FE 18 */	b .L_8037605C
.L_80376248:
/* 80376248 00373188  3C 80 55 55 */	lis r4, 0x55555556@ha
/* 8037624C 0037318C  7F E3 FB 78 */	mr r3, r31
/* 80376250 00373190  38 04 55 56 */	addi r0, r4, 0x55555556@l
/* 80376254 00373194  7C 80 E8 96 */	mulhw r4, r0, r29
/* 80376258 00373198  54 80 0F FE */	srwi r0, r4, 0x1f
/* 8037625C 0037319C  7C 04 02 14 */	add r0, r4, r0
/* 80376260 003731A0  1C 00 00 03 */	mulli r0, r0, 3
/* 80376264 003731A4  7C 00 E8 50 */	subf r0, r0, r29
/* 80376268 003731A8  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 8037626C 003731AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80376270 003731B0  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80376274 003731B4  7D 89 03 A6 */	mtctr r12
/* 80376278 003731B8  4E 80 04 21 */	bctrl 
.L_8037627C:
/* 8037627C 003731BC  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 80376280 003731C0  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80376284 003731C4  54 00 10 3A */	slwi r0, r0, 2
/* 80376288 003731C8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037628C 003731CC  48 02 C3 31 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80376290 003731D0  90 7F 02 24 */	stw r3, 0x224(r31)
/* 80376294 003731D4  80 9F 02 24 */	lwz r4, 0x224(r31)
/* 80376298 003731D8  2C 04 00 00 */	cmpwi r4, 0
/* 8037629C 003731DC  41 80 00 24 */	blt .L_803762C0
/* 803762A0 003731E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803762A4 003731E4  7F E3 FB 78 */	mr r3, r31
/* 803762A8 003731E8  83 3F 01 10 */	lwz r25, 0x110(r31)
/* 803762AC 003731EC  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 803762B0 003731F0  7D 89 03 A6 */	mtctr r12
/* 803762B4 003731F4  4E 80 04 21 */	bctrl 
/* 803762B8 003731F8  90 99 00 1C */	stw r4, 0x1c(r25)
/* 803762BC 003731FC  90 79 00 18 */	stw r3, 0x18(r25)
.L_803762C0:
/* 803762C0 00373200  7F 83 E3 78 */	mr r3, r28
/* 803762C4 00373204  4B CA D2 E1 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803762C8 00373208  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 803762CC 0037320C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 803762D0 00373210  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 803762D4 00373214  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 803762D8 00373218  BB 21 00 64 */	lmw r25, 0x64(r1)
/* 803762DC 0037321C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 803762E0 00373220  7C 08 03 A6 */	mtlr r0
/* 803762E4 00373224  38 21 00 A0 */	addi r1, r1, 0xa0
/* 803762E8 00373228  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura11TEnemyZukanFP10JKRArchive

.fn init__Q28Morimura15TScaleUpCounterFP9J2DScreenUxUxUxPUlb, weak
/* 803762EC 0037322C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803762F0 00373230  7C 08 02 A6 */	mflr r0
/* 803762F4 00373234  90 01 00 24 */	stw r0, 0x24(r1)
/* 803762F8 00373238  81 61 00 28 */	lwz r11, 0x28(r1)
/* 803762FC 0037323C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80376300 00373240  7C 7F 1B 78 */	mr r31, r3
/* 80376304 00373244  88 01 00 2F */	lbz r0, 0x2f(r1)
/* 80376308 00373248  91 61 00 08 */	stw r11, 8(r1)
/* 8037630C 0037324C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80376310 00373250  4B F9 55 D5 */	bl init__Q32og6Screen18CallBack_CounterRVFP9J2DScreenUxUxUxPUlb
/* 80376314 00373254  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 80376318 00373258  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 8037631C 0037325C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80376320 00373260  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80376324 00373264  7C 08 03 A6 */	mtlr r0
/* 80376328 00373268  38 21 00 20 */	addi r1, r1, 0x20
/* 8037632C 0037326C  4E 80 00 20 */	blr 
.endfn init__Q28Morimura15TScaleUpCounterFP9J2DScreenUxUxUxPUlb

.fn getIdMax__Q28Morimura11TEnemyZukanFv, weak
/* 80376330 00373270  38 60 00 51 */	li r3, 0x51
/* 80376334 00373274  4E 80 00 20 */	blr 
.endfn getIdMax__Q28Morimura11TEnemyZukanFv

.fn setDetail__Q28Morimura11TEnemyZukanFv, global
/* 80376338 00373278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037633C 0037327C  7C 08 02 A6 */	mflr r0
/* 80376340 00373280  90 01 00 14 */	stw r0, 0x14(r1)
/* 80376344 00373284  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80376348 00373288  93 C1 00 08 */	stw r30, 8(r1)
/* 8037634C 0037328C  7C 7E 1B 78 */	mr r30, r3
/* 80376350 00373290  80 03 00 94 */	lwz r0, 0x94(r3)
/* 80376354 00373294  80 63 00 88 */	lwz r3, 0x88(r3)
/* 80376358 00373298  54 00 10 3A */	slwi r0, r0, 2
/* 8037635C 0037329C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80376360 003732A0  48 02 C2 5D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80376364 003732A4  7C 60 1B 78 */	mr r0, r3
/* 80376368 003732A8  7F C3 F3 78 */	mr r3, r30
/* 8037636C 003732AC  7C 1F 03 78 */	mr r31, r0
/* 80376370 003732B0  7F E4 FB 78 */	mr r4, r31
/* 80376374 003732B4  48 00 17 21 */	bl getPrice__Q28Morimura11TEnemyZukanFi
/* 80376378 003732B8  90 7E 01 88 */	stw r3, 0x188(r30)
/* 8037637C 003732BC  80 FE 01 88 */	lwz r7, 0x188(r30)
/* 80376380 003732C0  28 07 27 10 */	cmplwi r7, 0x2710
/* 80376384 003732C4  41 80 00 24 */	blt .L_803763A8
/* 80376388 003732C8  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 8037638C 003732CC  3C 80 80 49 */	lis r4, lbl_80492B4C@ha
/* 80376390 003732D0  38 A4 2B 4C */	addi r5, r4, lbl_80492B4C@l
/* 80376394 003732D4  7F E6 FB 78 */	mr r6, r31
/* 80376398 003732D8  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 8037639C 003732DC  38 80 09 BB */	li r4, 0x9bb
/* 803763A0 003732E0  4C C6 31 82 */	crclr 6
/* 803763A4 003732E4  4B CB 42 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803763A8:
/* 803763A8 003732E8  7F C3 F3 78 */	mr r3, r30
/* 803763AC 003732EC  7F E4 FB 78 */	mr r4, r31
/* 803763B0 003732F0  48 00 19 11 */	bl getKilledNum__Q28Morimura11TEnemyZukanFi
/* 803763B4 003732F4  90 7E 01 8C */	stw r3, 0x18c(r30)
/* 803763B8 003732F8  7F C3 F3 78 */	mr r3, r30
/* 803763BC 003732FC  7F E4 FB 78 */	mr r4, r31
/* 803763C0 00373300  48 00 18 09 */	bl getDefeatNum__Q28Morimura11TEnemyZukanFi
/* 803763C4 00373304  90 7E 01 90 */	stw r3, 0x190(r30)
/* 803763C8 00373308  7F C3 F3 78 */	mr r3, r30
/* 803763CC 0037330C  7F E4 FB 78 */	mr r4, r31
/* 803763D0 00373310  81 9E 00 00 */	lwz r12, 0(r30)
/* 803763D4 00373314  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803763D8 00373318  7D 89 03 A6 */	mtctr r12
/* 803763DC 0037331C  4E 80 04 21 */	bctrl 
/* 803763E0 00373320  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803763E4 00373324  41 82 00 B8 */	beq .L_8037649C
/* 803763E8 00373328  38 00 00 01 */	li r0, 1
/* 803763EC 0037332C  38 80 00 00 */	li r4, 0
/* 803763F0 00373330  98 1E 01 7C */	stb r0, 0x17c(r30)
/* 803763F4 00373334  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 803763F8 00373338  4B F9 53 F1 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803763FC 0037333C  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 80376400 00373340  38 80 00 00 */	li r4, 0
/* 80376404 00373344  4B F9 53 E5 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376408 00373348  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 8037640C 0037334C  38 80 00 00 */	li r4, 0
/* 80376410 00373350  4B F9 53 D9 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376414 00373354  38 1F FF F8 */	addi r0, r31, -8
/* 80376418 00373358  28 00 00 48 */	cmplwi r0, 0x48
/* 8037641C 0037335C  41 81 00 AC */	bgt .L_803764C8
/* 80376420 00373360  3C 60 80 4E */	lis r3, lbl_804E3C20@ha
/* 80376424 00373364  54 00 10 3A */	slwi r0, r0, 2
/* 80376428 00373368  38 63 3C 20 */	addi r3, r3, lbl_804E3C20@l
/* 8037642C 0037336C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80376430 00373370  7C 09 03 A6 */	mtctr r0
/* 80376434 00373374  4E 80 04 20 */	bctr 
.L_80376438:
/* 80376438 00373378  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 8037643C 0037337C  38 80 00 01 */	li r4, 1
/* 80376440 00373380  4B F9 53 A9 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376444 00373384  48 00 00 84 */	b .L_803764C8
.L_80376448:
/* 80376448 00373388  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 8037644C 0037338C  38 80 00 01 */	li r4, 1
/* 80376450 00373390  4B F9 53 99 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376454 00373394  48 00 00 74 */	b .L_803764C8
.L_80376458:
/* 80376458 00373398  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 8037645C 0037339C  38 80 00 01 */	li r4, 1
/* 80376460 003733A0  4B F9 53 89 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376464 003733A4  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 80376468 003733A8  38 80 00 01 */	li r4, 1
/* 8037646C 003733AC  4B F9 53 7D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376470 003733B0  48 00 00 58 */	b .L_803764C8
.L_80376474:
/* 80376474 003733B4  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 80376478 003733B8  38 80 00 01 */	li r4, 1
/* 8037647C 003733BC  4B F9 53 6D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376480 003733C0  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 80376484 003733C4  38 80 00 01 */	li r4, 1
/* 80376488 003733C8  4B F9 53 61 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037648C 003733CC  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 80376490 003733D0  38 80 00 01 */	li r4, 1
/* 80376494 003733D4  4B F9 53 55 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 80376498 003733D8  48 00 00 30 */	b .L_803764C8
.L_8037649C:
/* 8037649C 003733DC  38 00 00 00 */	li r0, 0
/* 803764A0 003733E0  38 80 00 01 */	li r4, 1
/* 803764A4 003733E4  98 1E 01 7C */	stb r0, 0x17c(r30)
/* 803764A8 003733E8  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 803764AC 003733EC  4B F9 53 3D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803764B0 003733F0  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 803764B4 003733F4  38 80 00 01 */	li r4, 1
/* 803764B8 003733F8  4B F9 53 31 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803764BC 003733FC  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 803764C0 00373400  38 80 00 01 */	li r4, 1
/* 803764C4 00373404  4B F9 53 25 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_803764C8:
/* 803764C8 00373408  80 7E 00 E0 */	lwz r3, 0xe0(r30)
/* 803764CC 0037340C  38 80 00 00 */	li r4, 0
/* 803764D0 00373410  48 02 B6 ED */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 803764D4 00373414  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 803764D8 00373418  38 80 00 00 */	li r4, 0
/* 803764DC 0037341C  48 02 B6 E1 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 803764E0 00373420  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 803764E4 00373424  38 80 00 00 */	li r4, 0
/* 803764E8 00373428  48 02 B6 D5 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 803764EC 0037342C  80 7E 02 54 */	lwz r3, 0x254(r30)
/* 803764F0 00373430  38 80 00 00 */	li r4, 0
/* 803764F4 00373434  48 02 B6 C9 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 803764F8 00373438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803764FC 0037343C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80376500 00373440  83 C1 00 08 */	lwz r30, 8(r1)
/* 80376504 00373444  7C 08 03 A6 */	mtlr r0
/* 80376508 00373448  38 21 00 10 */	addi r1, r1, 0x10
/* 8037650C 0037344C  4E 80 00 20 */	blr 
.endfn setDetail__Q28Morimura11TEnemyZukanFv

.fn setShortenIndex__Q28Morimura11TEnemyZukanFiib, global
/* 80376510 00373450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80376514 00373454  7C 08 02 A6 */	mflr r0
/* 80376518 00373458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037651C 0037345C  88 03 02 40 */	lbz r0, 0x240(r3)
/* 80376520 00373460  28 00 00 00 */	cmplwi r0, 0
/* 80376524 00373464  41 82 00 20 */	beq .L_80376544
/* 80376528 00373468  88 03 02 42 */	lbz r0, 0x242(r3)
/* 8037652C 0037346C  28 00 00 00 */	cmplwi r0, 0
/* 80376530 00373470  40 82 00 14 */	bne .L_80376544
/* 80376534 00373474  80 03 02 38 */	lwz r0, 0x238(r3)
/* 80376538 00373478  2C 00 00 12 */	cmpwi r0, 0x12
/* 8037653C 0037347C  41 81 00 08 */	bgt .L_80376544
/* 80376540 00373480  38 A0 FF FF */	li r5, -1
.L_80376544:
/* 80376544 00373484  4B FF E0 15 */	bl setShortenIndex__Q28Morimura10TZukanBaseFiib
/* 80376548 00373488  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037654C 0037348C  7C 08 03 A6 */	mtlr r0
/* 80376550 00373490  38 21 00 10 */	addi r1, r1, 0x10
/* 80376554 00373494  4E 80 00 20 */	blr 
.endfn setShortenIndex__Q28Morimura11TEnemyZukanFiib

.fn isListShow__Q28Morimura11TEnemyZukanFi, global
/* 80376558 00373498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037655C 0037349C  7C 08 02 A6 */	mflr r0
/* 80376560 003734A0  2C 04 00 00 */	cmpwi r4, 0
/* 80376564 003734A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80376568 003734A8  40 80 00 0C */	bge .L_80376574
/* 8037656C 003734AC  38 60 00 00 */	li r3, 0
/* 80376570 003734B0  48 00 00 B0 */	b .L_80376620
.L_80376574:
/* 80376574 003734B4  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 80376578 003734B8  28 00 00 00 */	cmplwi r0, 0
/* 8037657C 003734BC  41 82 00 0C */	beq .L_80376588
/* 80376580 003734C0  38 60 00 01 */	li r3, 1
/* 80376584 003734C4  48 00 00 9C */	b .L_80376620
.L_80376588:
/* 80376588 003734C8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037658C 003734CC  28 00 00 00 */	cmplwi r0, 0
/* 80376590 003734D0  41 82 00 10 */	beq .L_803765A0
/* 80376594 003734D4  80 63 01 80 */	lwz r3, 0x180(r3)
/* 80376598 003734D8  7C 63 20 AE */	lbzx r3, r3, r4
/* 8037659C 003734DC  48 00 00 84 */	b .L_80376620
.L_803765A0:
/* 803765A0 003734E0  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 803765A4 003734E4  28 06 00 00 */	cmplwi r6, 0
/* 803765A8 003734E8  41 82 00 74 */	beq .L_8037661C
/* 803765AC 003734EC  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 803765B0 003734F0  38 00 00 51 */	li r0, 0x51
/* 803765B4 003734F4  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
/* 803765B8 003734F8  38 A0 00 00 */	li r5, 0
/* 803765BC 003734FC  7C 09 03 A6 */	mtctr r0
.L_803765C0:
/* 803765C0 00373500  80 03 00 00 */	lwz r0, 0(r3)
/* 803765C4 00373504  7C 04 00 00 */	cmpw r4, r0
/* 803765C8 00373508  40 82 00 18 */	bne .L_803765E0
/* 803765CC 0037350C  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 803765D0 00373510  54 A4 18 38 */	slwi r4, r5, 3
/* 803765D4 00373514  38 03 39 98 */	addi r0, r3, eIDInfo__8Morimura@l
/* 803765D8 00373518  7C 60 22 14 */	add r3, r0, r4
/* 803765DC 0037351C  48 00 00 18 */	b .L_803765F4
.L_803765E0:
/* 803765E0 00373520  38 63 00 08 */	addi r3, r3, 8
/* 803765E4 00373524  38 A5 00 01 */	addi r5, r5, 1
/* 803765E8 00373528  42 00 FF D8 */	bdnz .L_803765C0
/* 803765EC 0037352C  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 803765F0 00373530  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
.L_803765F4:
/* 803765F4 00373534  80 83 00 04 */	lwz r4, 4(r3)
/* 803765F8 00373538  38 66 00 40 */	addi r3, r6, 0x40
/* 803765FC 0037353C  4B EB D4 C9 */	bl getTekiInfo__Q34Game8TekiStat3MgrFi
/* 80376600 00373540  88 03 00 08 */	lbz r0, 8(r3)
/* 80376604 00373544  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80376608 00373548  41 82 00 0C */	beq .L_80376614
/* 8037660C 0037354C  38 60 00 01 */	li r3, 1
/* 80376610 00373550  48 00 00 10 */	b .L_80376620
.L_80376614:
/* 80376614 00373554  38 60 00 00 */	li r3, 0
/* 80376618 00373558  48 00 00 08 */	b .L_80376620
.L_8037661C:
/* 8037661C 0037355C  38 60 00 01 */	li r3, 1
.L_80376620:
/* 80376620 00373560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80376624 00373564  7C 08 03 A6 */	mtlr r0
/* 80376628 00373568  38 21 00 10 */	addi r1, r1, 0x10
/* 8037662C 0037356C  4E 80 00 20 */	blr 
.endfn isListShow__Q28Morimura11TEnemyZukanFi

.fn indexPaneInit__Q28Morimura11TEnemyZukanFP9J2DScreen, global
/* 80376630 00373570  94 21 F9 F0 */	stwu r1, -0x610(r1)
/* 80376634 00373574  7C 08 02 A6 */	mflr r0
/* 80376638 00373578  38 C0 00 0E */	li r6, 0xe
/* 8037663C 0037357C  90 01 06 14 */	stw r0, 0x614(r1)
/* 80376640 00373580  38 00 00 00 */	li r0, 0
/* 80376644 00373584  38 A1 00 14 */	addi r5, r1, 0x14
/* 80376648 00373588  BE 01 05 D0 */	stmw r16, 0x5d0(r1)
/* 8037664C 0037358C  7C 77 1B 78 */	mr r23, r3
/* 80376650 00373590  7C 98 23 78 */	mr r24, r4
/* 80376654 00373594  90 03 00 90 */	stw r0, 0x90(r3)
/* 80376658 00373598  38 00 00 04 */	li r0, 4
/* 8037665C 0037359C  3C 60 80 49 */	lis r3, lbl_80492520@ha
/* 80376660 003735A0  90 17 00 94 */	stw r0, 0x94(r23)
/* 80376664 003735A4  3A C3 25 20 */	addi r22, r3, lbl_80492520@l
/* 80376668 003735A8  38 00 00 06 */	li r0, 6
/* 8037666C 003735AC  A8 77 00 8E */	lha r3, 0x8e(r23)
/* 80376670 003735B0  38 96 06 3C */	addi r4, r22, 0x63c
/* 80376674 003735B4  38 63 FF FF */	addi r3, r3, -1
/* 80376678 003735B8  90 77 00 98 */	stw r3, 0x98(r23)
/* 8037667C 003735BC  B0 D7 00 8E */	sth r6, 0x8e(r23)
/* 80376680 003735C0  90 17 00 94 */	stw r0, 0x94(r23)
/* 80376684 003735C4  A8 77 00 8E */	lha r3, 0x8e(r23)
/* 80376688 003735C8  38 03 FF FF */	addi r0, r3, -1
/* 8037668C 003735CC  90 17 00 98 */	stw r0, 0x98(r23)
/* 80376690 003735D0  7C C9 03 A6 */	mtctr r6
.L_80376694:
/* 80376694 003735D4  80 64 00 04 */	lwz r3, 4(r4)
/* 80376698 003735D8  84 04 00 08 */	lwzu r0, 8(r4)
/* 8037669C 003735DC  90 65 00 04 */	stw r3, 4(r5)
/* 803766A0 003735E0  94 05 00 08 */	stwu r0, 8(r5)
/* 803766A4 003735E4  42 00 FF F0 */	bdnz .L_80376694
/* 803766A8 003735E8  7F 03 C3 78 */	mr r3, r24
/* 803766AC 003735EC  80 97 00 90 */	lwz r4, 0x90(r23)
/* 803766B0 003735F0  81 98 00 00 */	lwz r12, 0(r24)
/* 803766B4 003735F4  38 01 00 18 */	addi r0, r1, 0x18
/* 803766B8 003735F8  54 84 18 38 */	slwi r4, r4, 3
/* 803766BC 003735FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803766C0 00373600  7C C0 22 14 */	add r6, r0, r4
/* 803766C4 00373604  80 A6 00 00 */	lwz r5, 0(r6)
/* 803766C8 00373608  80 C6 00 04 */	lwz r6, 4(r6)
/* 803766CC 0037360C  7D 89 03 A6 */	mtctr r12
/* 803766D0 00373610  4E 80 04 21 */	bctrl 
/* 803766D4 00373614  7C 71 1B 79 */	or. r17, r3, r3
/* 803766D8 00373618  40 82 00 18 */	bne .L_803766F0
/* 803766DC 0037361C  38 76 00 0C */	addi r3, r22, 0xc
/* 803766E0 00373620  38 B6 00 18 */	addi r5, r22, 0x18
/* 803766E4 00373624  38 80 0A 5A */	li r4, 0xa5a
/* 803766E8 00373628  4C C6 31 82 */	crclr 6
/* 803766EC 0037362C  4B CB 3F 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803766F0:
/* 803766F0 00373630  C0 11 00 D8 */	lfs f0, 0xd8(r17)
/* 803766F4 00373634  7F 03 C3 78 */	mr r3, r24
/* 803766F8 00373638  38 01 00 18 */	addi r0, r1, 0x18
/* 803766FC 0037363C  D0 17 00 A0 */	stfs f0, 0xa0(r23)
/* 80376700 00373640  80 97 00 98 */	lwz r4, 0x98(r23)
/* 80376704 00373644  81 98 00 00 */	lwz r12, 0(r24)
/* 80376708 00373648  54 84 18 38 */	slwi r4, r4, 3
/* 8037670C 0037364C  7C C0 22 14 */	add r6, r0, r4
/* 80376710 00373650  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80376714 00373654  80 A6 00 00 */	lwz r5, 0(r6)
/* 80376718 00373658  80 C6 00 04 */	lwz r6, 4(r6)
/* 8037671C 0037365C  7D 89 03 A6 */	mtctr r12
/* 80376720 00373660  4E 80 04 21 */	bctrl 
/* 80376724 00373664  7C 71 1B 79 */	or. r17, r3, r3
/* 80376728 00373668  40 82 00 18 */	bne .L_80376740
/* 8037672C 0037366C  38 76 00 0C */	addi r3, r22, 0xc
/* 80376730 00373670  38 B6 00 18 */	addi r5, r22, 0x18
/* 80376734 00373674  38 80 0A 5D */	li r4, 0xa5d
/* 80376738 00373678  4C C6 31 82 */	crclr 6
/* 8037673C 0037367C  4B CB 3F 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80376740:
/* 80376740 00373680  C0 11 00 D8 */	lfs f0, 0xd8(r17)
/* 80376744 00373684  38 00 00 A8 */	li r0, 0xa8
/* 80376748 00373688  38 A1 00 84 */	addi r5, r1, 0x84
/* 8037674C 0037368C  38 96 06 AC */	addi r4, r22, 0x6ac
/* 80376750 00373690  D0 17 00 A4 */	stfs f0, 0xa4(r23)
/* 80376754 00373694  7C 09 03 A6 */	mtctr r0
.L_80376758:
/* 80376758 00373698  80 64 00 04 */	lwz r3, 4(r4)
/* 8037675C 0037369C  84 04 00 08 */	lwzu r0, 8(r4)
/* 80376760 003736A0  90 65 00 04 */	stw r3, 4(r5)
/* 80376764 003736A4  94 05 00 08 */	stwu r0, 8(r5)
/* 80376768 003736A8  42 00 FF F0 */	bdnz .L_80376758
/* 8037676C 003736AC  88 17 02 40 */	lbz r0, 0x240(r23)
/* 80376770 003736B0  28 00 00 00 */	cmplwi r0, 0
/* 80376774 003736B4  41 82 00 0C */	beq .L_80376780
/* 80376778 003736B8  38 00 00 01 */	li r0, 1
/* 8037677C 003736BC  98 17 02 43 */	stb r0, 0x243(r23)
.L_80376780:
/* 80376780 003736C0  88 17 02 40 */	lbz r0, 0x240(r23)
/* 80376784 003736C4  3B 80 00 00 */	li r28, 0
/* 80376788 003736C8  28 00 00 00 */	cmplwi r0, 0
/* 8037678C 003736CC  41 82 00 14 */	beq .L_803767A0
/* 80376790 003736D0  80 17 02 30 */	lwz r0, 0x230(r23)
/* 80376794 003736D4  2C 00 00 00 */	cmpwi r0, 0
/* 80376798 003736D8  40 82 00 08 */	bne .L_803767A0
/* 8037679C 003736DC  3B 80 00 01 */	li r28, 1
.L_803767A0:
/* 803767A0 003736E0  A8 17 00 8E */	lha r0, 0x8e(r23)
/* 803767A4 003736E4  54 03 10 3A */	slwi r3, r0, 2
/* 803767A8 003736E8  4B CA D8 05 */	bl __nwa__FUl
/* 803767AC 003736EC  38 A0 00 00 */	li r5, 0
/* 803767B0 003736F0  90 77 00 88 */	stw r3, 0x88(r23)
/* 803767B4 003736F4  7C A4 2B 78 */	mr r4, r5
/* 803767B8 003736F8  38 C0 00 00 */	li r6, 0
/* 803767BC 003736FC  48 00 00 14 */	b .L_803767D0
.L_803767C0:
/* 803767C0 00373700  80 77 00 88 */	lwz r3, 0x88(r23)
/* 803767C4 00373704  38 C6 00 01 */	addi r6, r6, 1
/* 803767C8 00373708  7C 83 29 2E */	stwx r4, r3, r5
/* 803767CC 0037370C  38 A5 00 04 */	addi r5, r5, 4
.L_803767D0:
/* 803767D0 00373710  A8 17 00 8E */	lha r0, 0x8e(r23)
/* 803767D4 00373714  7C 06 00 00 */	cmpw r6, r0
/* 803767D8 00373718  41 80 FF E8 */	blt .L_803767C0
/* 803767DC 0037371C  3B E1 00 18 */	addi r31, r1, 0x18
/* 803767E0 00373720  3B A1 00 88 */	addi r29, r1, 0x88
/* 803767E4 00373724  3B 60 00 00 */	li r27, 0
/* 803767E8 00373728  3B 40 00 00 */	li r26, 0
/* 803767EC 0037372C  3B C0 00 00 */	li r30, 0
/* 803767F0 00373730  48 00 04 E8 */	b .L_80376CD8
.L_803767F4:
/* 803767F4 00373734  38 60 00 28 */	li r3, 0x28
/* 803767F8 00373738  4B CA D6 AD */	bl __nw__FUl
/* 803767FC 0037373C  7C 71 1B 79 */	or. r17, r3, r3
/* 80376800 00373740  41 82 00 54 */	beq .L_80376854
/* 80376804 00373744  7F 03 C3 78 */	mr r3, r24
/* 80376808 00373748  80 BF 00 00 */	lwz r5, 0(r31)
/* 8037680C 0037374C  81 98 00 00 */	lwz r12, 0(r24)
/* 80376810 00373750  80 DF 00 04 */	lwz r6, 4(r31)
/* 80376814 00373754  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80376818 00373758  7D 89 03 A6 */	mtctr r12
/* 8037681C 0037375C  4E 80 04 21 */	bctrl 
/* 80376820 00373760  38 00 00 00 */	li r0, 0
/* 80376824 00373764  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80376828 00373768  90 11 00 00 */	stw r0, 0(r17)
/* 8037682C 0037376C  90 71 00 04 */	stw r3, 4(r17)
/* 80376830 00373770  90 11 00 08 */	stw r0, 8(r17)
/* 80376834 00373774  90 11 00 0C */	stw r0, 0xc(r17)
/* 80376838 00373778  90 11 00 10 */	stw r0, 0x10(r17)
/* 8037683C 0037377C  D0 11 00 18 */	stfs f0, 0x18(r17)
/* 80376840 00373780  90 11 00 20 */	stw r0, 0x20(r17)
/* 80376844 00373784  92 F1 00 24 */	stw r23, 0x24(r17)
/* 80376848 00373788  80 71 00 04 */	lwz r3, 4(r17)
/* 8037684C 0037378C  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 80376850 00373790  D0 11 00 1C */	stfs f0, 0x1c(r17)
.L_80376854:
/* 80376854 00373794  80 97 00 88 */	lwz r4, 0x88(r23)
/* 80376858 00373798  7E E3 BB 78 */	mr r3, r23
/* 8037685C 0037379C  7E 24 F1 2E */	stwx r17, r4, r30
/* 80376860 003737A0  81 97 00 00 */	lwz r12, 0(r23)
/* 80376864 003737A4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80376868 003737A8  7D 89 03 A6 */	mtctr r12
/* 8037686C 003737AC  4E 80 04 21 */	bctrl 
/* 80376870 003737B0  80 D7 00 88 */	lwz r6, 0x88(r23)
/* 80376874 003737B4  7C 65 1B 78 */	mr r5, r3
/* 80376878 003737B8  38 80 00 03 */	li r4, 3
/* 8037687C 003737BC  7C 66 F0 2E */	lwzx r3, r6, r30
/* 80376880 003737C0  48 02 BA C5 */	bl createIconInfo__Q28Morimura10TIndexPaneFii
/* 80376884 003737C4  7F B3 EB 78 */	mr r19, r29
/* 80376888 003737C8  3B 20 00 00 */	li r25, 0
/* 8037688C 003737CC  3A 80 00 00 */	li r20, 0
.L_80376890:
/* 80376890 003737D0  80 17 00 88 */	lwz r0, 0x88(r23)
/* 80376894 003737D4  7F 03 C3 78 */	mr r3, r24
/* 80376898 003737D8  81 98 00 00 */	lwz r12, 0(r24)
/* 8037689C 003737DC  7C BE 00 2E */	lwzx r5, r30, r0
/* 803768A0 003737E0  80 97 00 B4 */	lwz r4, 0xb4(r23)
/* 803768A4 003737E4  80 A5 00 20 */	lwz r5, 0x20(r5)
/* 803768A8 003737E8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803768AC 003737EC  7E A5 A0 2E */	lwzx r21, r5, r20
/* 803768B0 003737F0  82 04 00 08 */	lwz r16, 8(r4)
/* 803768B4 003737F4  80 B3 00 48 */	lwz r5, 0x48(r19)
/* 803768B8 003737F8  80 D3 00 4C */	lwz r6, 0x4c(r19)
/* 803768BC 003737FC  7D 89 03 A6 */	mtctr r12
/* 803768C0 00373800  4E 80 04 21 */	bctrl 
/* 803768C4 00373804  7C 71 1B 78 */	mr r17, r3
/* 803768C8 00373808  7F 03 C3 78 */	mr r3, r24
/* 803768CC 0037380C  81 98 00 00 */	lwz r12, 0(r24)
/* 803768D0 00373810  80 B3 00 30 */	lwz r5, 0x30(r19)
/* 803768D4 00373814  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803768D8 00373818  80 D3 00 34 */	lwz r6, 0x34(r19)
/* 803768DC 0037381C  7D 89 03 A6 */	mtctr r12
/* 803768E0 00373820  4E 80 04 21 */	bctrl 
/* 803768E4 00373824  80 17 00 78 */	lwz r0, 0x78(r23)
/* 803768E8 00373828  7C 72 1B 78 */	mr r18, r3
/* 803768EC 0037382C  7E 03 83 78 */	mr r3, r16
/* 803768F0 00373830  39 35 00 18 */	addi r9, r21, 0x18
/* 803768F4 00373834  90 01 00 08 */	stw r0, 8(r1)
/* 803768F8 00373838  39 40 00 02 */	li r10, 2
/* 803768FC 0037383C  80 B3 00 00 */	lwz r5, 0(r19)
/* 80376900 00373840  80 D3 00 04 */	lwz r6, 4(r19)
/* 80376904 00373844  80 F3 00 18 */	lwz r7, 0x18(r19)
/* 80376908 00373848  81 13 00 1C */	lwz r8, 0x1c(r19)
/* 8037690C 0037384C  48 02 B4 F5 */	bl setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive
/* 80376910 00373850  7C 64 1B 78 */	mr r4, r3
/* 80376914 00373854  7E A3 AB 78 */	mr r3, r21
/* 80376918 00373858  7E 45 93 78 */	mr r5, r18
/* 8037691C 0037385C  7E 26 8B 78 */	mr r6, r17
/* 80376920 00373860  48 02 BE 59 */	bl init__Q28Morimura9TIconInfoFPQ28Morimura15TScaleUpCounterP7J2DPaneP7J2DPane
/* 80376924 00373864  88 17 02 41 */	lbz r0, 0x241(r23)
/* 80376928 00373868  28 00 00 00 */	cmplwi r0, 0
/* 8037692C 0037386C  41 82 00 FC */	beq .L_80376A28
/* 80376930 00373870  38 60 01 A8 */	li r3, 0x1a8
/* 80376934 00373874  4B CA D5 71 */	bl __nw__FUl
/* 80376938 00373878  7C 75 1B 79 */	or. r21, r3, r3
/* 8037693C 0037387C  41 82 00 48 */	beq .L_80376984
/* 80376940 00373880  7F 03 C3 78 */	mr r3, r24
/* 80376944 00373884  80 B3 00 48 */	lwz r5, 0x48(r19)
/* 80376948 00373888  81 98 00 00 */	lwz r12, 0(r24)
/* 8037694C 0037388C  80 D3 00 4C */	lwz r6, 0x4c(r19)
/* 80376950 00373890  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80376954 00373894  7D 89 03 A6 */	mtctr r12
/* 80376958 00373898  4E 80 04 21 */	bctrl 
/* 8037695C 0037389C  4B CC 19 C5 */	bl getBounds__7J2DPaneFv
/* 80376960 003738A0  3C 80 74 65 */	lis r4, 0x74657374@ha
/* 80376964 003738A4  7C 67 1B 78 */	mr r7, r3
/* 80376968 003738A8  7E A3 AB 78 */	mr r3, r21
/* 8037696C 003738AC  39 16 04 58 */	addi r8, r22, 0x458
/* 80376970 003738B0  38 C4 73 74 */	addi r6, r4, 0x74657374@l
/* 80376974 003738B4  38 A0 00 00 */	li r5, 0
/* 80376978 003738B8  3D 20 01 10 */	lis r9, 0x110
/* 8037697C 003738BC  4B CD E7 C1 */	bl "__ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl"
/* 80376980 003738C0  7C 75 1B 78 */	mr r21, r3
.L_80376984:
/* 80376984 003738C4  28 15 00 00 */	cmplwi r21, 0
/* 80376988 003738C8  40 82 00 18 */	bne .L_803769A0
/* 8037698C 003738CC  38 76 00 0C */	addi r3, r22, 0xc
/* 80376990 003738D0  38 B6 00 18 */	addi r5, r22, 0x18
/* 80376994 003738D4  38 80 0A 91 */	li r4, 0xa91
/* 80376998 003738D8  4C C6 31 82 */	crclr 6
/* 8037699C 003738DC  4B CB 3C A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803769A0:
/* 803769A0 003738E0  80 17 00 88 */	lwz r0, 0x88(r23)
/* 803769A4 003738E4  7F 03 C3 78 */	mr r3, r24
/* 803769A8 003738E8  7C 9E 00 2E */	lwzx r4, r30, r0
/* 803769AC 003738EC  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803769B0 003738F0  7C 84 A0 2E */	lwzx r4, r4, r20
/* 803769B4 003738F4  92 A4 00 04 */	stw r21, 4(r4)
/* 803769B8 003738F8  81 98 00 00 */	lwz r12, 0(r24)
/* 803769BC 003738FC  80 BF 00 00 */	lwz r5, 0(r31)
/* 803769C0 00373900  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803769C4 00373904  80 DF 00 04 */	lwz r6, 4(r31)
/* 803769C8 00373908  7D 89 03 A6 */	mtctr r12
/* 803769CC 0037390C  4E 80 04 21 */	bctrl 
/* 803769D0 00373910  7E A4 AB 78 */	mr r4, r21
/* 803769D4 00373914  4B CC 0C F1 */	bl appendChild__7J2DPaneFP7J2DPane
/* 803769D8 00373918  7F 03 C3 78 */	mr r3, r24
/* 803769DC 0037391C  80 B3 00 48 */	lwz r5, 0x48(r19)
/* 803769E0 00373920  81 98 00 00 */	lwz r12, 0(r24)
/* 803769E4 00373924  80 D3 00 4C */	lwz r6, 0x4c(r19)
/* 803769E8 00373928  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803769EC 0037392C  7D 89 03 A6 */	mtctr r12
/* 803769F0 00373930  4E 80 04 21 */	bctrl 
/* 803769F4 00373934  7C 72 1B 78 */	mr r18, r3
/* 803769F8 00373938  7F 03 C3 78 */	mr r3, r24
/* 803769FC 0037393C  81 98 00 00 */	lwz r12, 0(r24)
/* 80376A00 00373940  80 BF 00 00 */	lwz r5, 0(r31)
/* 80376A04 00373944  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80376A08 00373948  80 DF 00 04 */	lwz r6, 4(r31)
/* 80376A0C 0037394C  7D 89 03 A6 */	mtctr r12
/* 80376A10 00373950  4E 80 04 21 */	bctrl 
/* 80376A14 00373954  7E 44 93 78 */	mr r4, r18
/* 80376A18 00373958  4B CC 0C AD */	bl appendChild__7J2DPaneFP7J2DPane
/* 80376A1C 0037395C  7E A3 AB 78 */	mr r3, r21
/* 80376A20 00373960  38 80 00 04 */	li r4, 4
/* 80376A24 00373964  4B CC 22 99 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
.L_80376A28:
/* 80376A28 00373968  3B 39 00 01 */	addi r25, r25, 1
/* 80376A2C 0037396C  3A 73 00 08 */	addi r19, r19, 8
/* 80376A30 00373970  2C 19 00 03 */	cmpwi r25, 3
/* 80376A34 00373974  3A 94 00 04 */	addi r20, r20, 4
/* 80376A38 00373978  41 80 FE 58 */	blt .L_80376890
/* 80376A3C 0037397C  80 77 00 9C */	lwz r3, 0x9c(r23)
/* 80376A40 00373980  38 00 00 00 */	li r0, 0
/* 80376A44 00373984  80 97 00 88 */	lwz r4, 0x88(r23)
/* 80376A48 00373988  7C 7A 19 D6 */	mullw r3, r26, r3
/* 80376A4C 0037398C  7C 84 F0 2E */	lwzx r4, r4, r30
/* 80376A50 00373990  82 64 00 04 */	lwz r19, 4(r4)
/* 80376A54 00373994  90 61 00 10 */	stw r3, 0x10(r1)
/* 80376A58 00373998  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80376A5C 0037399C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 80376A60 003739A0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80376A64 003739A4  88 17 02 40 */	lbz r0, 0x240(r23)
/* 80376A68 003739A8  28 00 00 00 */	cmplwi r0, 0
/* 80376A6C 003739AC  41 82 00 08 */	beq .L_80376A74
/* 80376A70 003739B0  93 61 00 10 */	stw r27, 0x10(r1)
.L_80376A74:
/* 80376A74 003739B4  88 17 00 8C */	lbz r0, 0x8c(r23)
/* 80376A78 003739B8  28 00 00 00 */	cmplwi r0, 0
/* 80376A7C 003739BC  41 82 01 10 */	beq .L_80376B8C
/* 80376A80 003739C0  2C 1A 00 00 */	cmpwi r26, 0
/* 80376A84 003739C4  40 81 01 08 */	ble .L_80376B8C
/* 80376A88 003739C8  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80376A8C 003739CC  38 1E FF FC */	addi r0, r30, -4
/* 80376A90 003739D0  7C 63 00 2E */	lwzx r3, r3, r0
/* 80376A94 003739D4  48 02 BB 81 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80376A98 003739D8  90 61 00 10 */	stw r3, 0x10(r1)
/* 80376A9C 003739DC  38 C0 00 01 */	li r6, 1
/* 80376AA0 003739E0  80 17 00 88 */	lwz r0, 0x88(r23)
/* 80376AA4 003739E4  7C A0 F2 14 */	add r5, r0, r30
/* 80376AA8 003739E8  80 85 FF FC */	lwz r4, -4(r5)
/* 80376AAC 003739EC  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80376AB0 003739F0  2C 00 00 01 */	cmpwi r0, 1
/* 80376AB4 003739F4  41 82 00 44 */	beq .L_80376AF8
/* 80376AB8 003739F8  40 80 00 10 */	bge .L_80376AC8
/* 80376ABC 003739FC  2C 00 00 00 */	cmpwi r0, 0
/* 80376AC0 00373A00  40 80 00 14 */	bge .L_80376AD4
/* 80376AC4 00373A04  48 00 00 50 */	b .L_80376B14
.L_80376AC8:
/* 80376AC8 00373A08  2C 00 00 04 */	cmpwi r0, 4
/* 80376ACC 00373A0C  40 80 00 48 */	bge .L_80376B14
/* 80376AD0 00373A10  48 00 00 34 */	b .L_80376B04
.L_80376AD4:
/* 80376AD4 00373A14  80 17 02 34 */	lwz r0, 0x234(r23)
/* 80376AD8 00373A18  7C 1B 00 00 */	cmpw r27, r0
/* 80376ADC 00373A1C  40 82 00 0C */	bne .L_80376AE8
/* 80376AE0 00373A20  93 61 00 10 */	stw r27, 0x10(r1)
/* 80376AE4 00373A24  48 00 00 30 */	b .L_80376B14
.L_80376AE8:
/* 80376AE8 00373A28  80 17 00 9C */	lwz r0, 0x9c(r23)
/* 80376AEC 00373A2C  7C 03 02 14 */	add r0, r3, r0
/* 80376AF0 00373A30  90 01 00 10 */	stw r0, 0x10(r1)
/* 80376AF4 00373A34  48 00 00 20 */	b .L_80376B14
.L_80376AF8:
/* 80376AF8 00373A38  38 03 00 01 */	addi r0, r3, 1
/* 80376AFC 00373A3C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80376B00 00373A40  48 00 00 14 */	b .L_80376B14
.L_80376B04:
/* 80376B04 00373A44  80 65 00 00 */	lwz r3, 0(r5)
/* 80376B08 00373A48  38 00 00 01 */	li r0, 1
/* 80376B0C 00373A4C  38 C0 00 00 */	li r6, 0
/* 80376B10 00373A50  90 03 00 0C */	stw r0, 0xc(r3)
.L_80376B14:
/* 80376B14 00373A54  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 80376B18 00373A58  41 82 00 74 */	beq .L_80376B8C
/* 80376B1C 00373A5C  88 17 02 40 */	lbz r0, 0x240(r23)
/* 80376B20 00373A60  28 00 00 00 */	cmplwi r0, 0
/* 80376B24 00373A64  41 82 00 44 */	beq .L_80376B68
/* 80376B28 00373A68  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80376B2C 00373A6C  80 17 02 30 */	lwz r0, 0x230(r23)
/* 80376B30 00373A70  7C 04 00 00 */	cmpw r4, r0
/* 80376B34 00373A74  40 80 00 58 */	bge .L_80376B8C
/* 80376B38 00373A78  80 77 02 2C */	lwz r3, 0x22c(r23)
/* 80376B3C 00373A7C  54 80 10 3A */	slwi r0, r4, 2
/* 80376B40 00373A80  80 97 01 84 */	lwz r4, 0x184(r23)
/* 80376B44 00373A84  7C 03 00 2E */	lwzx r0, r3, r0
/* 80376B48 00373A88  7C 04 00 AE */	lbzx r0, r4, r0
/* 80376B4C 00373A8C  28 00 00 00 */	cmplwi r0, 0
/* 80376B50 00373A90  41 82 00 3C */	beq .L_80376B8C
/* 80376B54 00373A94  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80376B58 00373A98  38 00 00 02 */	li r0, 2
/* 80376B5C 00373A9C  7C 63 F0 2E */	lwzx r3, r3, r30
/* 80376B60 00373AA0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80376B64 00373AA4  48 00 00 28 */	b .L_80376B8C
.L_80376B68:
/* 80376B68 00373AA8  80 77 01 84 */	lwz r3, 0x184(r23)
/* 80376B6C 00373AAC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80376B70 00373AB0  7C 03 00 AE */	lbzx r0, r3, r0
/* 80376B74 00373AB4  28 00 00 00 */	cmplwi r0, 0
/* 80376B78 00373AB8  41 82 00 14 */	beq .L_80376B8C
/* 80376B7C 00373ABC  80 77 00 88 */	lwz r3, 0x88(r23)
/* 80376B80 00373AC0  38 00 00 02 */	li r0, 2
/* 80376B84 00373AC4  7C 63 F0 2E */	lwzx r3, r3, r30
/* 80376B88 00373AC8  90 03 00 0C */	stw r0, 0xc(r3)
.L_80376B8C:
/* 80376B8C 00373ACC  88 17 02 40 */	lbz r0, 0x240(r23)
/* 80376B90 00373AD0  28 00 00 00 */	cmplwi r0, 0
/* 80376B94 00373AD4  41 82 00 E0 */	beq .L_80376C74
/* 80376B98 00373AD8  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80376B9C 00373ADC  41 82 00 28 */	beq .L_80376BC4
/* 80376BA0 00373AE0  7E E3 BB 78 */	mr r3, r23
/* 80376BA4 00373AE4  7F 44 D3 78 */	mr r4, r26
/* 80376BA8 00373AE8  81 97 00 00 */	lwz r12, 0(r23)
/* 80376BAC 00373AEC  38 A0 FF FF */	li r5, -1
/* 80376BB0 00373AF0  38 C0 00 01 */	li r6, 1
/* 80376BB4 00373AF4  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 80376BB8 00373AF8  7D 89 03 A6 */	mtctr r12
/* 80376BBC 00373AFC  4E 80 04 21 */	bctrl 
/* 80376BC0 00373B00  48 00 00 8C */	b .L_80376C4C
.L_80376BC4:
/* 80376BC4 00373B04  7E E3 BB 78 */	mr r3, r23
/* 80376BC8 00373B08  38 81 00 10 */	addi r4, r1, 0x10
/* 80376BCC 00373B0C  81 97 00 00 */	lwz r12, 0(r23)
/* 80376BD0 00373B10  38 A0 00 01 */	li r5, 1
/* 80376BD4 00373B14  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 80376BD8 00373B18  7D 89 03 A6 */	mtctr r12
/* 80376BDC 00373B1C  4E 80 04 21 */	bctrl 
/* 80376BE0 00373B20  7E E3 BB 78 */	mr r3, r23
/* 80376BE4 00373B24  7F 44 D3 78 */	mr r4, r26
/* 80376BE8 00373B28  81 97 00 00 */	lwz r12, 0(r23)
/* 80376BEC 00373B2C  7F 65 DB 78 */	mr r5, r27
/* 80376BF0 00373B30  38 C0 00 01 */	li r6, 1
/* 80376BF4 00373B34  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 80376BF8 00373B38  7D 89 03 A6 */	mtctr r12
/* 80376BFC 00373B3C  4E 80 04 21 */	bctrl 
/* 80376C00 00373B40  80 77 02 34 */	lwz r3, 0x234(r23)
/* 80376C04 00373B44  7C 1B 18 00 */	cmpw r27, r3
/* 80376C08 00373B48  40 80 00 18 */	bge .L_80376C20
/* 80376C0C 00373B4C  38 1B 00 03 */	addi r0, r27, 3
/* 80376C10 00373B50  7C 00 18 00 */	cmpw r0, r3
/* 80376C14 00373B54  40 81 00 0C */	ble .L_80376C20
/* 80376C18 00373B58  90 61 00 10 */	stw r3, 0x10(r1)
/* 80376C1C 00373B5C  7C 7B 1B 78 */	mr r27, r3
.L_80376C20:
/* 80376C20 00373B60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80376C24 00373B64  2C 03 00 00 */	cmpwi r3, 0
/* 80376C28 00373B68  40 82 00 10 */	bne .L_80376C38
/* 80376C2C 00373B6C  2C 1B 00 00 */	cmpwi r27, 0
/* 80376C30 00373B70  41 82 00 08 */	beq .L_80376C38
/* 80376C34 00373B74  3B 80 00 01 */	li r28, 1
.L_80376C38:
/* 80376C38 00373B78  80 17 02 38 */	lwz r0, 0x238(r23)
/* 80376C3C 00373B7C  2C 00 00 03 */	cmpwi r0, 3
/* 80376C40 00373B80  40 80 00 08 */	bge .L_80376C48
/* 80376C44 00373B84  3B 80 00 01 */	li r28, 1
.L_80376C48:
/* 80376C48 00373B88  7C 7B 1B 78 */	mr r27, r3
.L_80376C4C:
/* 80376C4C 00373B8C  80 77 00 90 */	lwz r3, 0x90(r23)
/* 80376C50 00373B90  38 03 00 01 */	addi r0, r3, 1
/* 80376C54 00373B94  90 17 00 90 */	stw r0, 0x90(r23)
/* 80376C58 00373B98  80 77 00 90 */	lwz r3, 0x90(r23)
/* 80376C5C 00373B9C  A8 17 00 8E */	lha r0, 0x8e(r23)
/* 80376C60 00373BA0  7C 03 00 00 */	cmpw r3, r0
/* 80376C64 00373BA4  41 80 00 30 */	blt .L_80376C94
/* 80376C68 00373BA8  38 00 00 00 */	li r0, 0
/* 80376C6C 00373BAC  90 17 00 90 */	stw r0, 0x90(r23)
/* 80376C70 00373BB0  48 00 00 24 */	b .L_80376C94
.L_80376C74:
/* 80376C74 00373BB4  7E E3 BB 78 */	mr r3, r23
/* 80376C78 00373BB8  7F 44 D3 78 */	mr r4, r26
/* 80376C7C 00373BBC  81 97 00 00 */	lwz r12, 0(r23)
/* 80376C80 00373BC0  38 C0 00 01 */	li r6, 1
/* 80376C84 00373BC4  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 80376C88 00373BC8  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 80376C8C 00373BCC  7D 89 03 A6 */	mtctr r12
/* 80376C90 00373BD0  4E 80 04 21 */	bctrl 
.L_80376C94:
/* 80376C94 00373BD4  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80376C98 00373BD8  2C 04 00 00 */	cmpwi r4, 0
/* 80376C9C 00373BDC  41 80 00 2C */	blt .L_80376CC8
/* 80376CA0 00373BE0  88 17 00 B0 */	lbz r0, 0xb0(r23)
/* 80376CA4 00373BE4  28 00 00 00 */	cmplwi r0, 0
/* 80376CA8 00373BE8  41 82 00 20 */	beq .L_80376CC8
/* 80376CAC 00373BEC  81 97 00 00 */	lwz r12, 0(r23)
/* 80376CB0 00373BF0  7E E3 BB 78 */	mr r3, r23
/* 80376CB4 00373BF4  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80376CB8 00373BF8  7D 89 03 A6 */	mtctr r12
/* 80376CBC 00373BFC  4E 80 04 21 */	bctrl 
/* 80376CC0 00373C00  90 93 00 1C */	stw r4, 0x1c(r19)
/* 80376CC4 00373C04  90 73 00 18 */	stw r3, 0x18(r19)
.L_80376CC8:
/* 80376CC8 00373C08  3B FF 00 08 */	addi r31, r31, 8
/* 80376CCC 00373C0C  3B DE 00 04 */	addi r30, r30, 4
/* 80376CD0 00373C10  3B BD 00 60 */	addi r29, r29, 0x60
/* 80376CD4 00373C14  3B 5A 00 01 */	addi r26, r26, 1
.L_80376CD8:
/* 80376CD8 00373C18  A8 97 00 8E */	lha r4, 0x8e(r23)
/* 80376CDC 00373C1C  7C 1A 20 00 */	cmpw r26, r4
/* 80376CE0 00373C20  41 80 FB 14 */	blt .L_803767F4
/* 80376CE4 00373C24  2C 04 00 00 */	cmpwi r4, 0
/* 80376CE8 00373C28  38 A0 00 00 */	li r5, 0
/* 80376CEC 00373C2C  40 81 00 40 */	ble .L_80376D2C
/* 80376CF0 00373C30  2C 04 00 08 */	cmpwi r4, 8
/* 80376CF4 00373C34  38 64 FF F8 */	addi r3, r4, -8
/* 80376CF8 00373C38  40 81 00 20 */	ble .L_80376D18
/* 80376CFC 00373C3C  38 03 00 07 */	addi r0, r3, 7
/* 80376D00 00373C40  54 00 E8 FE */	srwi r0, r0, 3
/* 80376D04 00373C44  7C 09 03 A6 */	mtctr r0
/* 80376D08 00373C48  2C 03 00 00 */	cmpwi r3, 0
/* 80376D0C 00373C4C  40 81 00 0C */	ble .L_80376D18
.L_80376D10:
/* 80376D10 00373C50  38 A5 00 08 */	addi r5, r5, 8
/* 80376D14 00373C54  42 00 FF FC */	bdnz .L_80376D10
.L_80376D18:
/* 80376D18 00373C58  7C 05 20 50 */	subf r0, r5, r4
/* 80376D1C 00373C5C  7C 09 03 A6 */	mtctr r0
/* 80376D20 00373C60  7C 05 20 00 */	cmpw r5, r4
/* 80376D24 00373C64  40 80 00 08 */	bge .L_80376D2C
.L_80376D28:
/* 80376D28 00373C68  42 00 00 00 */	bdnz .L_80376D28
.L_80376D2C:
/* 80376D2C 00373C6C  38 00 00 00 */	li r0, 0
/* 80376D30 00373C70  98 17 02 43 */	stb r0, 0x243(r23)
/* 80376D34 00373C74  BA 01 05 D0 */	lmw r16, 0x5d0(r1)
/* 80376D38 00373C78  80 01 06 14 */	lwz r0, 0x614(r1)
/* 80376D3C 00373C7C  7C 08 03 A6 */	mtlr r0
/* 80376D40 00373C80  38 21 06 10 */	addi r1, r1, 0x610
/* 80376D44 00373C84  4E 80 00 20 */	blr 
.endfn indexPaneInit__Q28Morimura11TEnemyZukanFP9J2DScreen

.fn getUpdateIndex__Q28Morimura11TEnemyZukanFRib, global
/* 80376D48 00373C88  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80376D4C 00373C8C  7C 08 02 A6 */	mflr r0
/* 80376D50 00373C90  90 01 00 34 */	stw r0, 0x34(r1)
/* 80376D54 00373C94  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80376D58 00373C98  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 80376D5C 00373C9C  7C BD 2B 78 */	mr r29, r5
/* 80376D60 00373CA0  7C 7B 1B 78 */	mr r27, r3
/* 80376D64 00373CA4  7C 9C 23 78 */	mr r28, r4
/* 80376D68 00373CA8  41 82 03 FC */	beq .L_80377164
/* 80376D6C 00373CAC  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80376D70 00373CB0  28 00 00 00 */	cmplwi r0, 0
/* 80376D74 00373CB4  41 82 00 D8 */	beq .L_80376E4C
/* 80376D78 00373CB8  88 1B 02 43 */	lbz r0, 0x243(r27)
/* 80376D7C 00373CBC  28 00 00 00 */	cmplwi r0, 0
/* 80376D80 00373CC0  41 82 00 CC */	beq .L_80376E4C
/* 80376D84 00373CC4  80 1C 00 00 */	lwz r0, 0(r28)
/* 80376D88 00373CC8  2C 00 00 00 */	cmpwi r0, 0
/* 80376D8C 00373CCC  40 80 00 20 */	bge .L_80376DAC
/* 80376D90 00373CD0  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 80376D94 00373CD4  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 80376D98 00373CD8  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 80376D9C 00373CDC  38 80 0B 25 */	li r4, 0xb25
/* 80376DA0 00373CE0  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 80376DA4 00373CE4  4C C6 31 82 */	crclr 6
/* 80376DA8 00373CE8  4B CB 38 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80376DAC:
/* 80376DAC 00373CEC  80 9C 00 00 */	lwz r4, 0(r28)
/* 80376DB0 00373CF0  80 7B 02 2C */	lwz r3, 0x22c(r27)
/* 80376DB4 00373CF4  54 80 10 3A */	slwi r0, r4, 2
/* 80376DB8 00373CF8  80 BB 01 84 */	lwz r5, 0x184(r27)
/* 80376DBC 00373CFC  7C 03 00 2E */	lwzx r0, r3, r0
/* 80376DC0 00373D00  7C 05 00 AE */	lbzx r0, r5, r0
/* 80376DC4 00373D04  28 00 00 00 */	cmplwi r0, 0
/* 80376DC8 00373D08  41 82 00 3C */	beq .L_80376E04
/* 80376DCC 00373D0C  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 80376DD0 00373D10  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80376DD4 00373D14  54 00 10 3A */	slwi r0, r0, 2
/* 80376DD8 00373D18  7C 63 00 2E */	lwzx r3, r3, r0
/* 80376DDC 00373D1C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80376DE0 00373D20  2C 00 00 02 */	cmpwi r0, 2
/* 80376DE4 00373D24  41 82 00 2C */	beq .L_80376E10
/* 80376DE8 00373D28  40 80 00 28 */	bge .L_80376E10
/* 80376DEC 00373D2C  2C 00 00 01 */	cmpwi r0, 1
/* 80376DF0 00373D30  40 80 00 08 */	bge .L_80376DF8
/* 80376DF4 00373D34  48 00 00 1C */	b .L_80376E10
.L_80376DF8:
/* 80376DF8 00373D38  38 04 00 01 */	addi r0, r4, 1
/* 80376DFC 00373D3C  90 1C 00 00 */	stw r0, 0(r28)
/* 80376E00 00373D40  48 00 00 10 */	b .L_80376E10
.L_80376E04:
/* 80376E04 00373D44  80 1B 00 9C */	lwz r0, 0x9c(r27)
/* 80376E08 00373D48  7C 04 02 14 */	add r0, r4, r0
/* 80376E0C 00373D4C  90 1C 00 00 */	stw r0, 0(r28)
.L_80376E10:
/* 80376E10 00373D50  7F 63 DB 78 */	mr r3, r27
/* 80376E14 00373D54  81 9B 00 00 */	lwz r12, 0(r27)
/* 80376E18 00373D58  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80376E1C 00373D5C  7D 89 03 A6 */	mtctr r12
/* 80376E20 00373D60  4E 80 04 21 */	bctrl 
/* 80376E24 00373D64  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80376E28 00373D68  28 00 00 00 */	cmplwi r0, 0
/* 80376E2C 00373D6C  41 82 00 08 */	beq .L_80376E34
/* 80376E30 00373D70  80 7B 02 30 */	lwz r3, 0x230(r27)
.L_80376E34:
/* 80376E34 00373D74  80 1C 00 00 */	lwz r0, 0(r28)
/* 80376E38 00373D78  7C 00 18 00 */	cmpw r0, r3
/* 80376E3C 00373D7C  41 80 08 68 */	blt .L_803776A4
/* 80376E40 00373D80  38 00 00 00 */	li r0, 0
/* 80376E44 00373D84  90 1C 00 00 */	stw r0, 0(r28)
/* 80376E48 00373D88  48 00 08 5C */	b .L_803776A4
.L_80376E4C:
/* 80376E4C 00373D8C  A8 1B 00 8E */	lha r0, 0x8e(r27)
/* 80376E50 00373D90  80 7B 02 38 */	lwz r3, 0x238(r27)
/* 80376E54 00373D94  1C 00 00 03 */	mulli r0, r0, 3
/* 80376E58 00373D98  7C 03 00 00 */	cmpw r3, r0
/* 80376E5C 00373D9C  41 81 00 20 */	bgt .L_80376E7C
/* 80376E60 00373DA0  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 80376E64 00373DA4  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80376E68 00373DA8  54 00 10 3A */	slwi r0, r0, 2
/* 80376E6C 00373DAC  7C 63 00 2E */	lwzx r3, r3, r0
/* 80376E70 00373DB0  48 02 B7 A5 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80376E74 00373DB4  90 7C 00 00 */	stw r3, 0(r28)
/* 80376E78 00373DB8  48 00 08 2C */	b .L_803776A4
.L_80376E7C:
/* 80376E7C 00373DBC  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 80376E80 00373DC0  38 80 00 00 */	li r4, 0
/* 80376E84 00373DC4  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80376E88 00373DC8  3B E0 00 00 */	li r31, 0
/* 80376E8C 00373DCC  54 00 10 3A */	slwi r0, r0, 2
/* 80376E90 00373DD0  3B C0 00 00 */	li r30, 0
/* 80376E94 00373DD4  7C 63 00 2E */	lwzx r3, r3, r0
/* 80376E98 00373DD8  90 83 00 0C */	stw r4, 0xc(r3)
/* 80376E9C 00373DDC  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 80376EA0 00373DE0  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80376EA4 00373DE4  54 00 10 3A */	slwi r0, r0, 2
/* 80376EA8 00373DE8  7C 63 00 2E */	lwzx r3, r3, r0
/* 80376EAC 00373DEC  48 02 B7 69 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80376EB0 00373DF0  80 1C 00 00 */	lwz r0, 0(r28)
/* 80376EB4 00373DF4  7C 00 18 00 */	cmpw r0, r3
/* 80376EB8 00373DF8  40 82 00 08 */	bne .L_80376EC0
/* 80376EBC 00373DFC  3B C0 00 01 */	li r30, 1
.L_80376EC0:
/* 80376EC0 00373E00  3B 20 00 00 */	li r25, 0
/* 80376EC4 00373E04  3B 00 00 00 */	li r24, 0
/* 80376EC8 00373E08  3B 40 00 00 */	li r26, 0
/* 80376ECC 00373E0C  48 00 00 28 */	b .L_80376EF4
.L_80376ED0:
/* 80376ED0 00373E10  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80376ED4 00373E14  7C 63 D0 2E */	lwzx r3, r3, r26
/* 80376ED8 00373E18  48 02 B7 3D */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80376EDC 00373E1C  80 1C 00 00 */	lwz r0, 0(r28)
/* 80376EE0 00373E20  7C 00 18 00 */	cmpw r0, r3
/* 80376EE4 00373E24  40 82 00 08 */	bne .L_80376EEC
/* 80376EE8 00373E28  3B 39 00 01 */	addi r25, r25, 1
.L_80376EEC:
/* 80376EEC 00373E2C  3B 5A 00 04 */	addi r26, r26, 4
/* 80376EF0 00373E30  3B 18 00 01 */	addi r24, r24, 1
.L_80376EF4:
/* 80376EF4 00373E34  A8 1B 00 8E */	lha r0, 0x8e(r27)
/* 80376EF8 00373E38  7C 18 00 00 */	cmpw r24, r0
/* 80376EFC 00373E3C  41 80 FF D4 */	blt .L_80376ED0
/* 80376F00 00373E40  2C 19 00 02 */	cmpwi r25, 2
/* 80376F04 00373E44  40 82 00 18 */	bne .L_80376F1C
/* 80376F08 00373E48  80 7C 00 00 */	lwz r3, 0(r28)
/* 80376F0C 00373E4C  3B E0 00 01 */	li r31, 1
/* 80376F10 00373E50  38 03 00 01 */	addi r0, r3, 1
/* 80376F14 00373E54  90 1C 00 00 */	stw r0, 0(r28)
/* 80376F18 00373E58  48 00 01 A0 */	b .L_803770B8
.L_80376F1C:
/* 80376F1C 00373E5C  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 80376F20 00373E60  80 BB 00 88 */	lwz r5, 0x88(r27)
/* 80376F24 00373E64  54 00 10 3A */	slwi r0, r0, 2
/* 80376F28 00373E68  7C 65 00 2E */	lwzx r3, r5, r0
/* 80376F2C 00373E6C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80376F30 00373E70  2C 00 00 02 */	cmpwi r0, 2
/* 80376F34 00373E74  41 82 00 24 */	beq .L_80376F58
/* 80376F38 00373E78  40 80 00 14 */	bge .L_80376F4C
/* 80376F3C 00373E7C  2C 00 00 00 */	cmpwi r0, 0
/* 80376F40 00373E80  41 82 00 DC */	beq .L_8037701C
/* 80376F44 00373E84  40 80 00 50 */	bge .L_80376F94
/* 80376F48 00373E88  48 00 01 70 */	b .L_803770B8
.L_80376F4C:
/* 80376F4C 00373E8C  2C 00 00 04 */	cmpwi r0, 4
/* 80376F50 00373E90  40 80 01 68 */	bge .L_803770B8
/* 80376F54 00373E94  48 00 00 40 */	b .L_80376F94
.L_80376F58:
/* 80376F58 00373E98  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80376F5C 00373E9C  41 82 00 1C */	beq .L_80376F78
/* 80376F60 00373EA0  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 80376F64 00373EA4  38 80 00 01 */	li r4, 1
/* 80376F68 00373EA8  54 00 10 3A */	slwi r0, r0, 2
/* 80376F6C 00373EAC  7C 65 00 2E */	lwzx r3, r5, r0
/* 80376F70 00373EB0  90 83 00 0C */	stw r4, 0xc(r3)
/* 80376F74 00373EB4  48 00 01 44 */	b .L_803770B8
.L_80376F78:
/* 80376F78 00373EB8  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 80376F7C 00373EBC  38 80 0B 69 */	li r4, 0xb69
/* 80376F80 00373EC0  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 80376F84 00373EC4  38 A0 00 00 */	li r5, 0
/* 80376F88 00373EC8  4C C6 31 82 */	crclr 6
/* 80376F8C 00373ECC  4B CB 36 B5 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80376F90 00373ED0  48 00 01 28 */	b .L_803770B8
.L_80376F94:
/* 80376F94 00373ED4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80376F98 00373ED8  41 82 00 70 */	beq .L_80377008
/* 80376F9C 00373EDC  38 00 00 02 */	li r0, 2
/* 80376FA0 00373EE0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80376FA4 00373EE4  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80376FA8 00373EE8  28 00 00 00 */	cmplwi r0, 0
/* 80376FAC 00373EEC  41 82 00 28 */	beq .L_80376FD4
/* 80376FB0 00373EF0  7F 63 DB 78 */	mr r3, r27
/* 80376FB4 00373EF4  7F A6 EB 78 */	mr r6, r29
/* 80376FB8 00373EF8  81 9B 00 00 */	lwz r12, 0(r27)
/* 80376FBC 00373EFC  80 9B 00 98 */	lwz r4, 0x98(r27)
/* 80376FC0 00373F00  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 80376FC4 00373F04  80 BC 00 00 */	lwz r5, 0(r28)
/* 80376FC8 00373F08  7D 89 03 A6 */	mtctr r12
/* 80376FCC 00373F0C  4E 80 04 21 */	bctrl 
/* 80376FD0 00373F10  48 00 00 1C */	b .L_80376FEC
.L_80376FD4:
/* 80376FD4 00373F14  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 80376FD8 00373F18  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80376FDC 00373F1C  54 00 10 3A */	slwi r0, r0, 2
/* 80376FE0 00373F20  80 9C 00 00 */	lwz r4, 0(r28)
/* 80376FE4 00373F24  7C 63 00 2E */	lwzx r3, r3, r0
/* 80376FE8 00373F28  48 02 B3 F1 */	bl setIndex__Q28Morimura10TIndexPaneFi
.L_80376FEC:
/* 80376FEC 00373F2C  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 80376FF0 00373F30  38 80 00 01 */	li r4, 1
/* 80376FF4 00373F34  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80376FF8 00373F38  54 00 10 3A */	slwi r0, r0, 2
/* 80376FFC 00373F3C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80377000 00373F40  90 83 00 0C */	stw r4, 0xc(r3)
/* 80377004 00373F44  48 00 00 B4 */	b .L_803770B8
.L_80377008:
/* 80377008 00373F48  80 7C 00 00 */	lwz r3, 0(r28)
/* 8037700C 00373F4C  3B E0 00 01 */	li r31, 1
/* 80377010 00373F50  38 03 00 01 */	addi r0, r3, 1
/* 80377014 00373F54  90 1C 00 00 */	stw r0, 0(r28)
/* 80377018 00373F58  48 00 00 A0 */	b .L_803770B8
.L_8037701C:
/* 8037701C 00373F5C  80 7B 02 34 */	lwz r3, 0x234(r27)
/* 80377020 00373F60  2C 03 00 00 */	cmpwi r3, 0
/* 80377024 00373F64  41 80 00 80 */	blt .L_803770A4
/* 80377028 00373F68  2C 19 00 02 */	cmpwi r25, 2
/* 8037702C 00373F6C  40 80 00 30 */	bge .L_8037705C
/* 80377030 00373F70  80 9C 00 00 */	lwz r4, 0(r28)
/* 80377034 00373F74  80 1B 00 9C */	lwz r0, 0x9c(r27)
/* 80377038 00373F78  7C 04 18 00 */	cmpw r4, r3
/* 8037703C 00373F7C  7C 04 02 14 */	add r0, r4, r0
/* 80377040 00373F80  40 80 00 14 */	bge .L_80377054
/* 80377044 00373F84  7C 00 18 00 */	cmpw r0, r3
/* 80377048 00373F88  40 81 00 0C */	ble .L_80377054
/* 8037704C 00373F8C  90 7C 00 00 */	stw r3, 0(r28)
/* 80377050 00373F90  48 00 00 64 */	b .L_803770B4
.L_80377054:
/* 80377054 00373F94  90 1C 00 00 */	stw r0, 0(r28)
/* 80377058 00373F98  48 00 00 5C */	b .L_803770B4
.L_8037705C:
/* 8037705C 00373F9C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80377060 00373FA0  41 82 00 30 */	beq .L_80377090
/* 80377064 00373FA4  80 7C 00 00 */	lwz r3, 0(r28)
/* 80377068 00373FA8  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 8037706C 00373FAC  54 60 10 3A */	slwi r0, r3, 2
/* 80377070 00373FB0  80 BB 01 84 */	lwz r5, 0x184(r27)
/* 80377074 00373FB4  7C 04 00 2E */	lwzx r0, r4, r0
/* 80377078 00373FB8  7C 05 00 AE */	lbzx r0, r5, r0
/* 8037707C 00373FBC  28 00 00 00 */	cmplwi r0, 0
/* 80377080 00373FC0  41 82 00 10 */	beq .L_80377090
/* 80377084 00373FC4  38 03 00 01 */	addi r0, r3, 1
/* 80377088 00373FC8  90 1C 00 00 */	stw r0, 0(r28)
/* 8037708C 00373FCC  48 00 00 28 */	b .L_803770B4
.L_80377090:
/* 80377090 00373FD0  80 7C 00 00 */	lwz r3, 0(r28)
/* 80377094 00373FD4  80 1B 00 9C */	lwz r0, 0x9c(r27)
/* 80377098 00373FD8  7C 03 02 14 */	add r0, r3, r0
/* 8037709C 00373FDC  90 1C 00 00 */	stw r0, 0(r28)
/* 803770A0 00373FE0  48 00 00 14 */	b .L_803770B4
.L_803770A4:
/* 803770A4 00373FE4  80 7C 00 00 */	lwz r3, 0(r28)
/* 803770A8 00373FE8  80 1B 00 9C */	lwz r0, 0x9c(r27)
/* 803770AC 00373FEC  7C 03 02 14 */	add r0, r3, r0
/* 803770B0 00373FF0  90 1C 00 00 */	stw r0, 0(r28)
.L_803770B4:
/* 803770B4 00373FF4  3B E0 00 01 */	li r31, 1
.L_803770B8:
/* 803770B8 00373FF8  7F 63 DB 78 */	mr r3, r27
/* 803770BC 00373FFC  81 9B 00 00 */	lwz r12, 0(r27)
/* 803770C0 00374000  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803770C4 00374004  7D 89 03 A6 */	mtctr r12
/* 803770C8 00374008  4E 80 04 21 */	bctrl 
/* 803770CC 0037400C  88 9B 02 40 */	lbz r4, 0x240(r27)
/* 803770D0 00374010  28 04 00 00 */	cmplwi r4, 0
/* 803770D4 00374014  41 82 00 08 */	beq .L_803770DC
/* 803770D8 00374018  80 7B 02 30 */	lwz r3, 0x230(r27)
.L_803770DC:
/* 803770DC 0037401C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803770E0 00374020  41 82 00 54 */	beq .L_80377134
/* 803770E4 00374024  80 1C 00 00 */	lwz r0, 0(r28)
/* 803770E8 00374028  7C 00 18 00 */	cmpw r0, r3
/* 803770EC 0037402C  40 80 00 48 */	bge .L_80377134
/* 803770F0 00374030  2C 00 00 00 */	cmpwi r0, 0
/* 803770F4 00374034  41 80 00 40 */	blt .L_80377134
/* 803770F8 00374038  28 04 00 00 */	cmplwi r4, 0
/* 803770FC 0037403C  41 82 00 10 */	beq .L_8037710C
/* 80377100 00374040  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 80377104 00374044  54 00 10 3A */	slwi r0, r0, 2
/* 80377108 00374048  7C 04 00 2E */	lwzx r0, r4, r0
.L_8037710C:
/* 8037710C 0037404C  80 9B 01 84 */	lwz r4, 0x184(r27)
/* 80377110 00374050  7C 04 00 AE */	lbzx r0, r4, r0
/* 80377114 00374054  28 00 00 00 */	cmplwi r0, 0
/* 80377118 00374058  41 82 00 1C */	beq .L_80377134
/* 8037711C 0037405C  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 80377120 00374060  38 A0 00 02 */	li r5, 2
/* 80377124 00374064  80 9B 00 88 */	lwz r4, 0x88(r27)
/* 80377128 00374068  54 00 10 3A */	slwi r0, r0, 2
/* 8037712C 0037406C  7C 84 00 2E */	lwzx r4, r4, r0
/* 80377130 00374070  90 A4 00 0C */	stw r5, 0xc(r4)
.L_80377134:
/* 80377134 00374074  80 1C 00 00 */	lwz r0, 0(r28)
/* 80377138 00374078  7C 00 18 00 */	cmpw r0, r3
/* 8037713C 0037407C  41 80 00 0C */	blt .L_80377148
/* 80377140 00374080  38 00 00 00 */	li r0, 0
/* 80377144 00374084  90 1C 00 00 */	stw r0, 0(r28)
.L_80377148:
/* 80377148 00374088  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 8037714C 0037408C  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80377150 00374090  54 00 10 3A */	slwi r0, r0, 2
/* 80377154 00374094  80 9C 00 00 */	lwz r4, 0(r28)
/* 80377158 00374098  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037715C 0037409C  48 02 B2 7D */	bl setIndex__Q28Morimura10TIndexPaneFi
/* 80377160 003740A0  48 00 05 44 */	b .L_803776A4
.L_80377164:
/* 80377164 003740A4  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80377168 003740A8  28 00 00 00 */	cmplwi r0, 0
/* 8037716C 003740AC  41 82 00 40 */	beq .L_803771AC
/* 80377170 003740B0  88 1B 02 43 */	lbz r0, 0x243(r27)
/* 80377174 003740B4  28 00 00 00 */	cmplwi r0, 0
/* 80377178 003740B8  40 82 00 34 */	bne .L_803771AC
/* 8037717C 003740BC  A8 1B 00 8E */	lha r0, 0x8e(r27)
/* 80377180 003740C0  80 7B 02 38 */	lwz r3, 0x238(r27)
/* 80377184 003740C4  1C 00 00 03 */	mulli r0, r0, 3
/* 80377188 003740C8  7C 03 00 00 */	cmpw r3, r0
/* 8037718C 003740CC  41 81 00 20 */	bgt .L_803771AC
/* 80377190 003740D0  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 80377194 003740D4  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80377198 003740D8  54 00 10 3A */	slwi r0, r0, 2
/* 8037719C 003740DC  7C 63 00 2E */	lwzx r3, r3, r0
/* 803771A0 003740E0  48 02 B4 75 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 803771A4 003740E4  90 7C 00 00 */	stw r3, 0(r28)
/* 803771A8 003740E8  48 00 04 FC */	b .L_803776A4
.L_803771AC:
/* 803771AC 003740EC  80 9B 00 98 */	lwz r4, 0x98(r27)
/* 803771B0 003740F0  37 04 FF FF */	addic. r24, r4, -1
/* 803771B4 003740F4  40 80 00 0C */	bge .L_803771C0
/* 803771B8 003740F8  A8 7B 00 8E */	lha r3, 0x8e(r27)
/* 803771BC 003740FC  3B 03 FF FF */	addi r24, r3, -1
.L_803771C0:
/* 803771C0 00374100  80 BB 00 88 */	lwz r5, 0x88(r27)
/* 803771C4 00374104  57 1F 10 3A */	slwi r31, r24, 2
/* 803771C8 00374108  7C 65 F8 2E */	lwzx r3, r5, r31
/* 803771CC 0037410C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803771D0 00374110  2C 00 00 01 */	cmpwi r0, 1
/* 803771D4 00374114  40 82 00 90 */	bne .L_80377264
/* 803771D8 00374118  54 80 10 3A */	slwi r0, r4, 2
/* 803771DC 0037411C  7C 65 00 2E */	lwzx r3, r5, r0
/* 803771E0 00374120  48 02 B4 35 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 803771E4 00374124  80 9B 00 88 */	lwz r4, 0x88(r27)
/* 803771E8 00374128  7C 7E 1B 78 */	mr r30, r3
/* 803771EC 0037412C  7C 64 F8 2E */	lwzx r3, r4, r31
/* 803771F0 00374130  48 02 B4 25 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 803771F4 00374134  7C 03 F0 00 */	cmpw r3, r30
/* 803771F8 00374138  40 82 00 6C */	bne .L_80377264
/* 803771FC 0037413C  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80377200 00374140  38 00 00 02 */	li r0, 2
/* 80377204 00374144  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80377208 00374148  90 03 00 0C */	stw r0, 0xc(r3)
/* 8037720C 0037414C  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80377210 00374150  28 00 00 00 */	cmplwi r0, 0
/* 80377214 00374154  41 82 00 34 */	beq .L_80377248
/* 80377218 00374158  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 8037721C 0037415C  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80377220 00374160  48 02 B3 F5 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80377224 00374164  81 9B 00 00 */	lwz r12, 0(r27)
/* 80377228 00374168  7C 65 1B 78 */	mr r5, r3
/* 8037722C 0037416C  7F 63 DB 78 */	mr r3, r27
/* 80377230 00374170  7F 04 C3 78 */	mr r4, r24
/* 80377234 00374174  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 80377238 00374178  7F A6 EB 78 */	mr r6, r29
/* 8037723C 0037417C  7D 89 03 A6 */	mtctr r12
/* 80377240 00374180  4E 80 04 21 */	bctrl 
/* 80377244 00374184  48 00 00 20 */	b .L_80377264
.L_80377248:
/* 80377248 00374188  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 8037724C 0037418C  7C 63 F8 2E */	lwzx r3, r3, r31
/* 80377250 00374190  48 02 B3 C5 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80377254 00374194  80 BB 00 88 */	lwz r5, 0x88(r27)
/* 80377258 00374198  7C 64 1B 78 */	mr r4, r3
/* 8037725C 0037419C  7C 65 F8 2E */	lwzx r3, r5, r31
/* 80377260 003741A0  48 02 B1 79 */	bl setIndex__Q28Morimura10TIndexPaneFi
.L_80377264:
/* 80377264 003741A4  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 80377268 003741A8  38 80 00 00 */	li r4, 0
/* 8037726C 003741AC  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80377270 003741B0  3B C0 00 00 */	li r30, 0
/* 80377274 003741B4  54 00 10 3A */	slwi r0, r0, 2
/* 80377278 003741B8  3B E0 00 00 */	li r31, 0
/* 8037727C 003741BC  7C 63 00 2E */	lwzx r3, r3, r0
/* 80377280 003741C0  90 83 00 0C */	stw r4, 0xc(r3)
/* 80377284 003741C4  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 80377288 003741C8  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 8037728C 003741CC  54 00 10 3A */	slwi r0, r0, 2
/* 80377290 003741D0  7C 63 00 2E */	lwzx r3, r3, r0
/* 80377294 003741D4  48 02 B3 81 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 80377298 003741D8  80 1C 00 00 */	lwz r0, 0(r28)
/* 8037729C 003741DC  7C 00 18 00 */	cmpw r0, r3
/* 803772A0 003741E0  40 82 00 08 */	bne .L_803772A8
/* 803772A4 003741E4  3B E0 00 01 */	li r31, 1
.L_803772A8:
/* 803772A8 003741E8  3B 00 00 00 */	li r24, 0
/* 803772AC 003741EC  3B 20 00 00 */	li r25, 0
/* 803772B0 003741F0  3B 40 00 00 */	li r26, 0
/* 803772B4 003741F4  48 00 00 28 */	b .L_803772DC
.L_803772B8:
/* 803772B8 003741F8  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 803772BC 003741FC  7C 63 D0 2E */	lwzx r3, r3, r26
/* 803772C0 00374200  48 02 B3 55 */	bl getListIndex__Q28Morimura10TIndexPaneFv
/* 803772C4 00374204  80 1C 00 00 */	lwz r0, 0(r28)
/* 803772C8 00374208  7C 00 18 00 */	cmpw r0, r3
/* 803772CC 0037420C  40 82 00 08 */	bne .L_803772D4
/* 803772D0 00374210  3B 18 00 01 */	addi r24, r24, 1
.L_803772D4:
/* 803772D4 00374214  3B 5A 00 04 */	addi r26, r26, 4
/* 803772D8 00374218  3B 39 00 01 */	addi r25, r25, 1
.L_803772DC:
/* 803772DC 0037421C  A8 1B 00 8E */	lha r0, 0x8e(r27)
/* 803772E0 00374220  7C 19 00 00 */	cmpw r25, r0
/* 803772E4 00374224  41 80 FF D4 */	blt .L_803772B8
/* 803772E8 00374228  2C 18 00 02 */	cmpwi r24, 2
/* 803772EC 0037422C  40 82 00 C0 */	bne .L_803773AC
/* 803772F0 00374230  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 803772F4 00374234  80 9C 00 00 */	lwz r4, 0(r28)
/* 803772F8 00374238  28 00 00 00 */	cmplwi r0, 0
/* 803772FC 0037423C  38 04 FF FF */	addi r0, r4, -1
/* 80377300 00374240  41 82 00 18 */	beq .L_80377318
/* 80377304 00374244  2C 04 00 00 */	cmpwi r4, 0
/* 80377308 00374248  40 81 00 10 */	ble .L_80377318
/* 8037730C 0037424C  80 7B 02 2C */	lwz r3, 0x22c(r27)
/* 80377310 00374250  54 00 10 3A */	slwi r0, r0, 2
/* 80377314 00374254  7C 03 00 2E */	lwzx r0, r3, r0
.L_80377318:
/* 80377318 00374258  2C 04 00 00 */	cmpwi r4, 0
/* 8037731C 0037425C  40 81 00 24 */	ble .L_80377340
/* 80377320 00374260  80 7B 01 84 */	lwz r3, 0x184(r27)
/* 80377324 00374264  7C 03 00 AE */	lbzx r0, r3, r0
/* 80377328 00374268  28 00 00 00 */	cmplwi r0, 0
/* 8037732C 0037426C  41 82 00 14 */	beq .L_80377340
/* 80377330 00374270  80 7C 00 00 */	lwz r3, 0(r28)
/* 80377334 00374274  38 03 FF FF */	addi r0, r3, -1
/* 80377338 00374278  90 1C 00 00 */	stw r0, 0(r28)
/* 8037733C 0037427C  48 00 00 68 */	b .L_803773A4
.L_80377340:
/* 80377340 00374280  80 BB 02 34 */	lwz r5, 0x234(r27)
/* 80377344 00374284  2C 05 00 00 */	cmpwi r5, 0
/* 80377348 00374288  41 80 00 4C */	blt .L_80377394
/* 8037734C 0037428C  7C 04 28 00 */	cmpw r4, r5
/* 80377350 00374290  40 82 00 44 */	bne .L_80377394
/* 80377354 00374294  2C 05 00 03 */	cmpwi r5, 3
/* 80377358 00374298  40 80 00 0C */	bge .L_80377364
/* 8037735C 0037429C  7C A0 2B 78 */	mr r0, r5
/* 80377360 003742A0  48 00 00 28 */	b .L_80377388
.L_80377364:
/* 80377364 003742A4  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80377368 003742A8  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 8037736C 003742AC  7C 60 28 96 */	mulhw r3, r0, r5
/* 80377370 003742B0  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80377374 003742B4  7C 03 02 14 */	add r0, r3, r0
/* 80377378 003742B8  1C 00 00 03 */	mulli r0, r0, 3
/* 8037737C 003742BC  7C 00 28 51 */	subf. r0, r0, r5
/* 80377380 003742C0  40 82 00 08 */	bne .L_80377388
/* 80377384 003742C4  38 00 00 03 */	li r0, 3
.L_80377388:
/* 80377388 003742C8  7C 00 28 50 */	subf r0, r0, r5
/* 8037738C 003742CC  90 1C 00 00 */	stw r0, 0(r28)
/* 80377390 003742D0  48 00 00 14 */	b .L_803773A4
.L_80377394:
/* 80377394 003742D4  80 7B 00 9C */	lwz r3, 0x9c(r27)
/* 80377398 003742D8  80 1C 00 00 */	lwz r0, 0(r28)
/* 8037739C 003742DC  7C 03 00 50 */	subf r0, r3, r0
/* 803773A0 003742E0  90 1C 00 00 */	stw r0, 0(r28)
.L_803773A4:
/* 803773A4 003742E4  3B C0 00 01 */	li r30, 1
/* 803773A8 003742E8  48 00 02 38 */	b .L_803775E0
.L_803773AC:
/* 803773AC 003742EC  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 803773B0 003742F0  80 BB 00 88 */	lwz r5, 0x88(r27)
/* 803773B4 003742F4  54 00 10 3A */	slwi r0, r0, 2
/* 803773B8 003742F8  7C 65 00 2E */	lwzx r3, r5, r0
/* 803773BC 003742FC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803773C0 00374300  2C 00 00 03 */	cmpwi r0, 3
/* 803773C4 00374304  41 82 00 18 */	beq .L_803773DC
/* 803773C8 00374308  40 80 02 18 */	bge .L_803775E0
/* 803773CC 0037430C  2C 00 00 00 */	cmpwi r0, 0
/* 803773D0 00374310  41 82 00 D0 */	beq .L_803774A0
/* 803773D4 00374314  40 80 00 44 */	bge .L_80377418
/* 803773D8 00374318  48 00 02 08 */	b .L_803775E0
.L_803773DC:
/* 803773DC 0037431C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803773E0 00374320  41 82 00 1C */	beq .L_803773FC
/* 803773E4 00374324  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 803773E8 00374328  38 80 00 01 */	li r4, 1
/* 803773EC 0037432C  54 00 10 3A */	slwi r0, r0, 2
/* 803773F0 00374330  7C 65 00 2E */	lwzx r3, r5, r0
/* 803773F4 00374334  90 83 00 0C */	stw r4, 0xc(r3)
/* 803773F8 00374338  48 00 01 E8 */	b .L_803775E0
.L_803773FC:
/* 803773FC 0037433C  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 80377400 00374340  38 80 0B FC */	li r4, 0xbfc
/* 80377404 00374344  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 80377408 00374348  38 A0 00 00 */	li r5, 0
/* 8037740C 0037434C  4C C6 31 82 */	crclr 6
/* 80377410 00374350  4B CB 32 31 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80377414 00374354  48 00 01 CC */	b .L_803775E0
.L_80377418:
/* 80377418 00374358  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8037741C 0037435C  41 82 00 70 */	beq .L_8037748C
/* 80377420 00374360  38 00 00 03 */	li r0, 3
/* 80377424 00374364  90 03 00 0C */	stw r0, 0xc(r3)
/* 80377428 00374368  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 8037742C 0037436C  28 00 00 00 */	cmplwi r0, 0
/* 80377430 00374370  41 82 00 28 */	beq .L_80377458
/* 80377434 00374374  7F 63 DB 78 */	mr r3, r27
/* 80377438 00374378  7F A6 EB 78 */	mr r6, r29
/* 8037743C 0037437C  81 9B 00 00 */	lwz r12, 0(r27)
/* 80377440 00374380  80 9B 00 90 */	lwz r4, 0x90(r27)
/* 80377444 00374384  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 80377448 00374388  80 BC 00 00 */	lwz r5, 0(r28)
/* 8037744C 0037438C  7D 89 03 A6 */	mtctr r12
/* 80377450 00374390  4E 80 04 21 */	bctrl 
/* 80377454 00374394  48 00 00 1C */	b .L_80377470
.L_80377458:
/* 80377458 00374398  80 1B 00 90 */	lwz r0, 0x90(r27)
/* 8037745C 0037439C  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80377460 003743A0  54 00 10 3A */	slwi r0, r0, 2
/* 80377464 003743A4  80 9C 00 00 */	lwz r4, 0(r28)
/* 80377468 003743A8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037746C 003743AC  48 02 AF 6D */	bl setIndex__Q28Morimura10TIndexPaneFi
.L_80377470:
/* 80377470 003743B0  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 80377474 003743B4  38 80 00 01 */	li r4, 1
/* 80377478 003743B8  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 8037747C 003743BC  54 00 10 3A */	slwi r0, r0, 2
/* 80377480 003743C0  7C 63 00 2E */	lwzx r3, r3, r0
/* 80377484 003743C4  90 83 00 0C */	stw r4, 0xc(r3)
/* 80377488 003743C8  48 00 01 58 */	b .L_803775E0
.L_8037748C:
/* 8037748C 003743CC  80 7C 00 00 */	lwz r3, 0(r28)
/* 80377490 003743D0  3B C0 00 01 */	li r30, 1
/* 80377494 003743D4  38 03 FF FF */	addi r0, r3, -1
/* 80377498 003743D8  90 1C 00 00 */	stw r0, 0(r28)
/* 8037749C 003743DC  48 00 01 44 */	b .L_803775E0
.L_803774A0:
/* 803774A0 003743E0  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 803774A4 003743E4  80 9C 00 00 */	lwz r4, 0(r28)
/* 803774A8 003743E8  28 00 00 00 */	cmplwi r0, 0
/* 803774AC 003743EC  38 04 FF FF */	addi r0, r4, -1
/* 803774B0 003743F0  41 82 00 18 */	beq .L_803774C8
/* 803774B4 003743F4  2C 04 00 00 */	cmpwi r4, 0
/* 803774B8 003743F8  40 81 00 10 */	ble .L_803774C8
/* 803774BC 003743FC  80 7B 02 2C */	lwz r3, 0x22c(r27)
/* 803774C0 00374400  54 00 10 3A */	slwi r0, r0, 2
/* 803774C4 00374404  7C 03 00 2E */	lwzx r0, r3, r0
.L_803774C8:
/* 803774C8 00374408  2C 04 00 00 */	cmpwi r4, 0
/* 803774CC 0037440C  40 81 00 24 */	ble .L_803774F0
/* 803774D0 00374410  80 7B 01 84 */	lwz r3, 0x184(r27)
/* 803774D4 00374414  7C 03 00 AE */	lbzx r0, r3, r0
/* 803774D8 00374418  28 00 00 00 */	cmplwi r0, 0
/* 803774DC 0037441C  41 82 00 14 */	beq .L_803774F0
/* 803774E0 00374420  80 7C 00 00 */	lwz r3, 0(r28)
/* 803774E4 00374424  38 03 FF FF */	addi r0, r3, -1
/* 803774E8 00374428  90 1C 00 00 */	stw r0, 0(r28)
/* 803774EC 0037442C  48 00 00 68 */	b .L_80377554
.L_803774F0:
/* 803774F0 00374430  80 BB 02 34 */	lwz r5, 0x234(r27)
/* 803774F4 00374434  2C 05 00 00 */	cmpwi r5, 0
/* 803774F8 00374438  41 80 00 4C */	blt .L_80377544
/* 803774FC 0037443C  7C 04 28 00 */	cmpw r4, r5
/* 80377500 00374440  40 82 00 44 */	bne .L_80377544
/* 80377504 00374444  2C 05 00 03 */	cmpwi r5, 3
/* 80377508 00374448  40 80 00 0C */	bge .L_80377514
/* 8037750C 0037444C  7C A0 2B 78 */	mr r0, r5
/* 80377510 00374450  48 00 00 28 */	b .L_80377538
.L_80377514:
/* 80377514 00374454  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80377518 00374458  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 8037751C 0037445C  7C 60 28 96 */	mulhw r3, r0, r5
/* 80377520 00374460  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80377524 00374464  7C 03 02 14 */	add r0, r3, r0
/* 80377528 00374468  1C 00 00 03 */	mulli r0, r0, 3
/* 8037752C 0037446C  7C 00 28 51 */	subf. r0, r0, r5
/* 80377530 00374470  40 82 00 08 */	bne .L_80377538
/* 80377534 00374474  38 00 00 03 */	li r0, 3
.L_80377538:
/* 80377538 00374478  7C 00 28 50 */	subf r0, r0, r5
/* 8037753C 0037447C  90 1C 00 00 */	stw r0, 0(r28)
/* 80377540 00374480  48 00 00 14 */	b .L_80377554
.L_80377544:
/* 80377544 00374484  80 7B 00 9C */	lwz r3, 0x9c(r27)
/* 80377548 00374488  80 1C 00 00 */	lwz r0, 0(r28)
/* 8037754C 0037448C  7C 03 00 50 */	subf r0, r3, r0
/* 80377550 00374490  90 1C 00 00 */	stw r0, 0(r28)
.L_80377554:
/* 80377554 00374494  7F 63 DB 78 */	mr r3, r27
/* 80377558 00374498  81 9B 00 00 */	lwz r12, 0(r27)
/* 8037755C 0037449C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80377560 003744A0  7D 89 03 A6 */	mtctr r12
/* 80377564 003744A4  4E 80 04 21 */	bctrl 
/* 80377568 003744A8  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 8037756C 003744AC  38 63 FF FF */	addi r3, r3, -1
/* 80377570 003744B0  28 00 00 00 */	cmplwi r0, 0
/* 80377574 003744B4  41 82 00 58 */	beq .L_803775CC
/* 80377578 003744B8  80 1B 02 34 */	lwz r0, 0x234(r27)
/* 8037757C 003744BC  2C 00 00 00 */	cmpwi r0, 0
/* 80377580 003744C0  41 80 00 10 */	blt .L_80377590
/* 80377584 003744C4  80 7B 02 30 */	lwz r3, 0x230(r27)
/* 80377588 003744C8  38 63 FF FF */	addi r3, r3, -1
/* 8037758C 003744CC  48 00 00 40 */	b .L_803775CC
.L_80377590:
/* 80377590 003744D0  80 9B 02 30 */	lwz r4, 0x230(r27)
/* 80377594 003744D4  2C 04 00 03 */	cmpwi r4, 3
/* 80377598 003744D8  40 80 00 0C */	bge .L_803775A4
/* 8037759C 003744DC  7C 80 23 78 */	mr r0, r4
/* 803775A0 003744E0  48 00 00 28 */	b .L_803775C8
.L_803775A4:
/* 803775A4 003744E4  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 803775A8 003744E8  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 803775AC 003744EC  7C 60 20 96 */	mulhw r3, r0, r4
/* 803775B0 003744F0  54 60 0F FE */	srwi r0, r3, 0x1f
/* 803775B4 003744F4  7C 03 02 14 */	add r0, r3, r0
/* 803775B8 003744F8  1C 00 00 03 */	mulli r0, r0, 3
/* 803775BC 003744FC  7C 00 20 51 */	subf. r0, r0, r4
/* 803775C0 00374500  40 82 00 08 */	bne .L_803775C8
/* 803775C4 00374504  38 00 00 03 */	li r0, 3
.L_803775C8:
/* 803775C8 00374508  7C 60 20 50 */	subf r3, r0, r4
.L_803775CC:
/* 803775CC 0037450C  80 1C 00 00 */	lwz r0, 0(r28)
/* 803775D0 00374510  2C 00 00 00 */	cmpwi r0, 0
/* 803775D4 00374514  40 80 00 08 */	bge .L_803775DC
/* 803775D8 00374518  90 7C 00 00 */	stw r3, 0(r28)
.L_803775DC:
/* 803775DC 0037451C  3B C0 00 01 */	li r30, 1
.L_803775E0:
/* 803775E0 00374520  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803775E4 00374524  41 82 00 5C */	beq .L_80377640
/* 803775E8 00374528  80 7C 00 00 */	lwz r3, 0(r28)
/* 803775EC 0037452C  2C 03 00 00 */	cmpwi r3, 0
/* 803775F0 00374530  41 80 00 50 */	blt .L_80377640
/* 803775F4 00374534  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 803775F8 00374538  7C 65 1B 78 */	mr r5, r3
/* 803775FC 0037453C  28 00 00 00 */	cmplwi r0, 0
/* 80377600 00374540  41 82 00 18 */	beq .L_80377618
/* 80377604 00374544  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 80377608 00374548  28 04 00 00 */	cmplwi r4, 0
/* 8037760C 0037454C  41 82 00 0C */	beq .L_80377618
/* 80377610 00374550  54 60 10 3A */	slwi r0, r3, 2
/* 80377614 00374554  7C A4 00 2E */	lwzx r5, r4, r0
.L_80377618:
/* 80377618 00374558  80 7B 01 84 */	lwz r3, 0x184(r27)
/* 8037761C 0037455C  7C 03 28 AE */	lbzx r0, r3, r5
/* 80377620 00374560  28 00 00 00 */	cmplwi r0, 0
/* 80377624 00374564  41 82 00 1C */	beq .L_80377640
/* 80377628 00374568  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 8037762C 0037456C  38 80 00 03 */	li r4, 3
/* 80377630 00374570  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80377634 00374574  54 00 10 3A */	slwi r0, r0, 2
/* 80377638 00374578  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037763C 0037457C  90 83 00 0C */	stw r4, 0xc(r3)
.L_80377640:
/* 80377640 00374580  80 1C 00 00 */	lwz r0, 0(r28)
/* 80377644 00374584  2C 00 00 00 */	cmpwi r0, 0
/* 80377648 00374588  40 80 00 44 */	bge .L_8037768C
/* 8037764C 0037458C  88 1B 02 40 */	lbz r0, 0x240(r27)
/* 80377650 00374590  28 00 00 00 */	cmplwi r0, 0
/* 80377654 00374594  41 82 00 18 */	beq .L_8037766C
/* 80377658 00374598  80 7B 00 9C */	lwz r3, 0x9c(r27)
/* 8037765C 0037459C  80 1B 02 30 */	lwz r0, 0x230(r27)
/* 80377660 003745A0  7C 03 00 50 */	subf r0, r3, r0
/* 80377664 003745A4  90 1C 00 00 */	stw r0, 0(r28)
/* 80377668 003745A8  48 00 00 24 */	b .L_8037768C
.L_8037766C:
/* 8037766C 003745AC  7F 63 DB 78 */	mr r3, r27
/* 80377670 003745B0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80377674 003745B4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80377678 003745B8  7D 89 03 A6 */	mtctr r12
/* 8037767C 003745BC  4E 80 04 21 */	bctrl 
/* 80377680 003745C0  80 1B 00 9C */	lwz r0, 0x9c(r27)
/* 80377684 003745C4  7C 00 18 50 */	subf r0, r0, r3
/* 80377688 003745C8  90 1C 00 00 */	stw r0, 0(r28)
.L_8037768C:
/* 8037768C 003745CC  80 1B 00 98 */	lwz r0, 0x98(r27)
/* 80377690 003745D0  80 7B 00 88 */	lwz r3, 0x88(r27)
/* 80377694 003745D4  54 00 10 3A */	slwi r0, r0, 2
/* 80377698 003745D8  80 9C 00 00 */	lwz r4, 0(r28)
/* 8037769C 003745DC  7C 63 00 2E */	lwzx r3, r3, r0
/* 803776A0 003745E0  48 02 AD 39 */	bl setIndex__Q28Morimura10TIndexPaneFi
.L_803776A4:
/* 803776A4 003745E4  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 803776A8 003745E8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803776AC 003745EC  7C 08 03 A6 */	mtlr r0
/* 803776B0 003745F0  38 21 00 30 */	addi r1, r1, 0x30
/* 803776B4 003745F4  4E 80 00 20 */	blr 
.endfn getUpdateIndex__Q28Morimura11TEnemyZukanFRib

.fn getNameID__Q28Morimura11TEnemyZukanFi, global
/* 803776B8 003745F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803776BC 003745FC  7C 08 02 A6 */	mflr r0
/* 803776C0 00374600  90 01 00 14 */	stw r0, 0x14(r1)
/* 803776C4 00374604  80 63 01 E4 */	lwz r3, 0x1e4(r3)
/* 803776C8 00374608  48 02 9B 45 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 803776CC 0037460C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803776D0 00374610  7C 08 03 A6 */	mtlr r0
/* 803776D4 00374614  38 21 00 10 */	addi r1, r1, 0x10
/* 803776D8 00374618  4E 80 00 20 */	blr 
.endfn getNameID__Q28Morimura11TEnemyZukanFi

.fn getXMsgID__Q28Morimura11TEnemyZukanFi, global
/* 803776DC 0037461C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803776E0 00374620  7C 08 02 A6 */	mflr r0
/* 803776E4 00374624  90 01 00 14 */	stw r0, 0x14(r1)
/* 803776E8 00374628  80 63 01 E8 */	lwz r3, 0x1e8(r3)
/* 803776EC 0037462C  48 02 9B 21 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 803776F0 00374630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803776F4 00374634  7C 08 03 A6 */	mtlr r0
/* 803776F8 00374638  38 21 00 10 */	addi r1, r1, 0x10
/* 803776FC 0037463C  4E 80 00 20 */	blr 
.endfn getXMsgID__Q28Morimura11TEnemyZukanFi

.fn getYMsgID__Q28Morimura11TEnemyZukanFi, global
/* 80377700 00374640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377704 00374644  7C 08 02 A6 */	mflr r0
/* 80377708 00374648  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037770C 0037464C  80 63 01 EC */	lwz r3, 0x1ec(r3)
/* 80377710 00374650  48 02 9A FD */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 80377714 00374654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377718 00374658  7C 08 03 A6 */	mtlr r0
/* 8037771C 0037465C  38 21 00 10 */	addi r1, r1, 0x10
/* 80377720 00374660  4E 80 00 20 */	blr 
.endfn getYMsgID__Q28Morimura11TEnemyZukanFi

.fn getModelIndex__Q28Morimura11TEnemyZukanFi, global
/* 80377724 00374664  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377728 00374668  38 00 00 51 */	li r0, 0x51
/* 8037772C 0037466C  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
/* 80377730 00374670  38 A0 00 00 */	li r5, 0
/* 80377734 00374674  7C 09 03 A6 */	mtctr r0
.L_80377738:
/* 80377738 00374678  80 03 00 00 */	lwz r0, 0(r3)
/* 8037773C 0037467C  7C 04 00 00 */	cmpw r4, r0
/* 80377740 00374680  40 82 00 18 */	bne .L_80377758
/* 80377744 00374684  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377748 00374688  54 A4 18 38 */	slwi r4, r5, 3
/* 8037774C 0037468C  38 03 39 98 */	addi r0, r3, eIDInfo__8Morimura@l
/* 80377750 00374690  7C 60 22 14 */	add r3, r0, r4
/* 80377754 00374694  48 00 00 18 */	b .L_8037776C
.L_80377758:
/* 80377758 00374698  38 63 00 08 */	addi r3, r3, 8
/* 8037775C 0037469C  38 A5 00 01 */	addi r5, r5, 1
/* 80377760 003746A0  42 00 FF D8 */	bdnz .L_80377738
/* 80377764 003746A4  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377768 003746A8  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
.L_8037776C:
/* 8037776C 003746AC  80 63 00 04 */	lwz r3, 4(r3)
/* 80377770 003746B0  4E 80 00 20 */	blr 
.endfn getModelIndex__Q28Morimura11TEnemyZukanFi

.fn setXWindow__Q28Morimura11TEnemyZukanFv, global
/* 80377774 003746B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377778 003746B8  7C 08 02 A6 */	mflr r0
/* 8037777C 003746BC  38 80 18 36 */	li r4, 0x1836
/* 80377780 003746C0  38 A0 00 00 */	li r5, 0
/* 80377784 003746C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377788 003746C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037778C 003746CC  7C 7F 1B 78 */	mr r31, r3
/* 80377790 003746D0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80377794 003746D4  4B FC 0E 9D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80377798 003746D8  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037779C 003746DC  38 9F 01 B0 */	addi r4, r31, 0x1b0
/* 803777A0 003746E0  48 00 4C 11 */	bl setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10
/* 803777A4 003746E4  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803777A8 003746E8  38 80 00 00 */	li r4, 0
/* 803777AC 003746EC  48 00 4D 61 */	bl onIcon__Q28Morimura12TZukanWindowFi
/* 803777B0 003746F0  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803777B4 003746F4  38 9F 01 C0 */	addi r4, r31, 0x1c0
/* 803777B8 003746F8  38 BF 01 D0 */	addi r5, r31, 0x1d0
/* 803777BC 003746FC  48 00 4C 61 */	bl setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10
/* 803777C0 00374700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803777C4 00374704  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803777C8 00374708  7C 08 03 A6 */	mtlr r0
/* 803777CC 0037470C  38 21 00 10 */	addi r1, r1, 0x10
/* 803777D0 00374710  4E 80 00 20 */	blr 
.endfn setXWindow__Q28Morimura11TEnemyZukanFv

.fn setYWindow__Q28Morimura11TEnemyZukanFv, global
/* 803777D4 00374714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803777D8 00374718  7C 08 02 A6 */	mflr r0
/* 803777DC 0037471C  38 80 18 37 */	li r4, 0x1837
/* 803777E0 00374720  38 A0 00 00 */	li r5, 0
/* 803777E4 00374724  90 01 00 14 */	stw r0, 0x14(r1)
/* 803777E8 00374728  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803777EC 0037472C  7C 7F 1B 78 */	mr r31, r3
/* 803777F0 00374730  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803777F4 00374734  4B FC 0E 3D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803777F8 00374738  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803777FC 0037473C  38 9F 01 B8 */	addi r4, r31, 0x1b8
/* 80377800 00374740  48 00 4B B1 */	bl setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10
/* 80377804 00374744  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80377808 00374748  38 80 00 01 */	li r4, 1
/* 8037780C 0037474C  48 00 4D 01 */	bl onIcon__Q28Morimura12TZukanWindowFi
/* 80377810 00374750  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80377814 00374754  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 80377818 00374758  38 BF 01 D8 */	addi r5, r31, 0x1d8
/* 8037781C 0037475C  48 00 4C 01 */	bl setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10
/* 80377820 00374760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377824 00374764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80377828 00374768  7C 08 03 A6 */	mtlr r0
/* 8037782C 0037476C  38 21 00 10 */	addi r1, r1, 0x10
/* 80377830 00374770  4E 80 00 20 */	blr 
.endfn setYWindow__Q28Morimura11TEnemyZukanFv

.fn isOpenConfirmWindow__Q28Morimura11TEnemyZukanFv, global
/* 80377834 00374774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377838 00374778  7C 08 02 A6 */	mflr r0
/* 8037783C 0037477C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377840 00374780  81 83 00 00 */	lwz r12, 0(r3)
/* 80377844 00374784  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80377848 00374788  7D 89 03 A6 */	mtctr r12
/* 8037784C 0037478C  4E 80 04 21 */	bctrl 
/* 80377850 00374790  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80377854 00374794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377858 00374798  88 63 00 D4 */	lbz r3, 0xd4(r3)
/* 8037785C 0037479C  7C 08 03 A6 */	mtlr r0
/* 80377860 003747A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80377864 003747A4  4E 80 00 20 */	blr 
.endfn isOpenConfirmWindow__Q28Morimura11TEnemyZukanFv

.fn isNewSupply__Q28Morimura11TEnemyZukanFib, global
/* 80377868 003747A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037786C 003747AC  7C 08 02 A6 */	mflr r0
/* 80377870 003747B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377874 003747B4  88 0D 98 F9 */	lbz r0, mAllNewSupply__Q28Morimura10TZukanBase@sda21(r13)
/* 80377878 003747B8  28 00 00 00 */	cmplwi r0, 0
/* 8037787C 003747BC  41 82 00 0C */	beq .L_80377888
/* 80377880 003747C0  38 60 00 01 */	li r3, 1
/* 80377884 003747C4  48 00 00 D0 */	b .L_80377954
.L_80377888:
/* 80377888 003747C8  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 8037788C 003747CC  28 06 00 00 */	cmplwi r6, 0
/* 80377890 003747D0  41 82 00 C0 */	beq .L_80377950
/* 80377894 003747D4  2C 04 00 00 */	cmpwi r4, 0
/* 80377898 003747D8  41 80 00 B8 */	blt .L_80377950
/* 8037789C 003747DC  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 803778A0 003747E0  40 82 00 30 */	bne .L_803778D0
/* 803778A4 003747E4  88 03 02 40 */	lbz r0, 0x240(r3)
/* 803778A8 003747E8  28 00 00 00 */	cmplwi r0, 0
/* 803778AC 003747EC  41 82 00 24 */	beq .L_803778D0
/* 803778B0 003747F0  80 03 02 30 */	lwz r0, 0x230(r3)
/* 803778B4 003747F4  2C 00 00 00 */	cmpwi r0, 0
/* 803778B8 003747F8  40 82 00 0C */	bne .L_803778C4
/* 803778BC 003747FC  38 60 00 00 */	li r3, 0
/* 803778C0 00374800  48 00 00 94 */	b .L_80377954
.L_803778C4:
/* 803778C4 00374804  80 63 02 2C */	lwz r3, 0x22c(r3)
/* 803778C8 00374808  54 80 10 3A */	slwi r0, r4, 2
/* 803778CC 0037480C  7C 83 00 2E */	lwzx r4, r3, r0
.L_803778D0:
/* 803778D0 00374810  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 803778D4 00374814  38 00 00 51 */	li r0, 0x51
/* 803778D8 00374818  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
/* 803778DC 0037481C  38 A0 00 00 */	li r5, 0
/* 803778E0 00374820  7C 09 03 A6 */	mtctr r0
.L_803778E4:
/* 803778E4 00374824  80 03 00 00 */	lwz r0, 0(r3)
/* 803778E8 00374828  7C 04 00 00 */	cmpw r4, r0
/* 803778EC 0037482C  40 82 00 18 */	bne .L_80377904
/* 803778F0 00374830  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 803778F4 00374834  54 A4 18 38 */	slwi r4, r5, 3
/* 803778F8 00374838  38 03 39 98 */	addi r0, r3, eIDInfo__8Morimura@l
/* 803778FC 0037483C  7C 60 22 14 */	add r3, r0, r4
/* 80377900 00374840  48 00 00 18 */	b .L_80377918
.L_80377904:
/* 80377904 00374844  38 63 00 08 */	addi r3, r3, 8
/* 80377908 00374848  38 A5 00 01 */	addi r5, r5, 1
/* 8037790C 0037484C  42 00 FF D8 */	bdnz .L_803778E4
/* 80377910 00374850  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377914 00374854  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
.L_80377918:
/* 80377918 00374858  80 83 00 04 */	lwz r4, 4(r3)
/* 8037791C 0037485C  38 66 00 40 */	addi r3, r6, 0x40
/* 80377920 00374860  4B EB C1 A5 */	bl getTekiInfo__Q34Game8TekiStat3MgrFi
/* 80377924 00374864  28 03 00 00 */	cmplwi r3, 0
/* 80377928 00374868  41 82 00 20 */	beq .L_80377948
/* 8037792C 0037486C  88 63 00 08 */	lbz r3, 8(r3)
/* 80377930 00374870  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80377934 00374874  41 82 00 14 */	beq .L_80377948
/* 80377938 00374878  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 8037793C 0037487C  40 82 00 0C */	bne .L_80377948
/* 80377940 00374880  38 60 00 01 */	li r3, 1
/* 80377944 00374884  48 00 00 10 */	b .L_80377954
.L_80377948:
/* 80377948 00374888  38 60 00 00 */	li r3, 0
/* 8037794C 0037488C  48 00 00 08 */	b .L_80377954
.L_80377950:
/* 80377950 00374890  38 60 00 00 */	li r3, 0
.L_80377954:
/* 80377954 00374894  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377958 00374898  7C 08 03 A6 */	mtlr r0
/* 8037795C 0037489C  38 21 00 10 */	addi r1, r1, 0x10
/* 80377960 003748A0  4E 80 00 20 */	blr 
.endfn isNewSupply__Q28Morimura11TEnemyZukanFib

.fn isPanelExist__Q28Morimura11TEnemyZukanFv, global
/* 80377964 003748A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377968 003748A8  7C 08 02 A6 */	mflr r0
/* 8037796C 003748AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377970 003748B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80377974 003748B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80377978 003748B8  7C 7E 1B 78 */	mr r30, r3
/* 8037797C 003748BC  80 03 00 94 */	lwz r0, 0x94(r3)
/* 80377980 003748C0  80 63 00 88 */	lwz r3, 0x88(r3)
/* 80377984 003748C4  54 00 10 3A */	slwi r0, r0, 2
/* 80377988 003748C8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037798C 003748CC  48 02 AC 31 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 80377990 003748D0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80377994 003748D4  40 80 00 0C */	bge .L_803779A0
/* 80377998 003748D8  38 60 00 00 */	li r3, 0
/* 8037799C 003748DC  48 00 00 94 */	b .L_80377A30
.L_803779A0:
/* 803779A0 003748E0  7F C3 F3 78 */	mr r3, r30
/* 803779A4 003748E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803779A8 003748E8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803779AC 003748EC  7D 89 03 A6 */	mtctr r12
/* 803779B0 003748F0  4E 80 04 21 */	bctrl 
/* 803779B4 003748F4  88 1E 02 40 */	lbz r0, 0x240(r30)
/* 803779B8 003748F8  28 00 00 00 */	cmplwi r0, 0
/* 803779BC 003748FC  41 82 00 48 */	beq .L_80377A04
/* 803779C0 00374900  80 1E 02 30 */	lwz r0, 0x230(r30)
/* 803779C4 00374904  2C 00 00 01 */	cmpwi r0, 1
/* 803779C8 00374908  40 80 00 0C */	bge .L_803779D4
/* 803779CC 0037490C  38 60 00 00 */	li r3, 0
/* 803779D0 00374910  48 00 00 60 */	b .L_80377A30
.L_803779D4:
/* 803779D4 00374914  80 BE 02 2C */	lwz r5, 0x22c(r30)
/* 803779D8 00374918  54 00 10 3A */	slwi r0, r0, 2
/* 803779DC 0037491C  80 9E 02 34 */	lwz r4, 0x234(r30)
/* 803779E0 00374920  38 C5 FF FC */	addi r6, r5, -4
/* 803779E4 00374924  2C 04 00 00 */	cmpwi r4, 0
/* 803779E8 00374928  7C 66 00 2E */	lwzx r3, r6, r0
/* 803779EC 0037492C  41 80 00 18 */	blt .L_80377A04
/* 803779F0 00374930  54 84 10 3A */	slwi r4, r4, 2
/* 803779F4 00374934  7C 05 20 2E */	lwzx r0, r5, r4
/* 803779F8 00374938  7C 1F 00 00 */	cmpw r31, r0
/* 803779FC 0037493C  40 80 00 08 */	bge .L_80377A04
/* 80377A00 00374940  7C 66 20 2E */	lwzx r3, r6, r4
.L_80377A04:
/* 80377A04 00374944  7C 1F 18 00 */	cmpw r31, r3
/* 80377A08 00374948  40 82 00 0C */	bne .L_80377A14
/* 80377A0C 0037494C  38 60 00 00 */	li r3, 0
/* 80377A10 00374950  48 00 00 20 */	b .L_80377A30
.L_80377A14:
/* 80377A14 00374954  80 0D 99 C8 */	lwz r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80377A18 00374958  7C 65 FE 70 */	srawi r5, r3, 0x1f
/* 80377A1C 0037495C  7C 1F 02 14 */	add r0, r31, r0
/* 80377A20 00374960  54 04 0F FE */	srwi r4, r0, 0x1f
/* 80377A24 00374964  7C 00 18 10 */	subfc r0, r0, r3
/* 80377A28 00374968  7C 05 21 14 */	adde r0, r5, r4
/* 80377A2C 0037496C  54 03 06 3E */	clrlwi r3, r0, 0x18
.L_80377A30:
/* 80377A30 00374970  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377A34 00374974  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80377A38 00374978  83 C1 00 08 */	lwz r30, 8(r1)
/* 80377A3C 0037497C  7C 08 03 A6 */	mtlr r0
/* 80377A40 00374980  38 21 00 10 */	addi r1, r1, 0x10
/* 80377A44 00374984  4E 80 00 20 */	blr 
.endfn isPanelExist__Q28Morimura11TEnemyZukanFv

.fn openConfirmWindow__Q28Morimura11TEnemyZukanFv, global
/* 80377A48 00374988  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377A4C 0037498C  7C 08 02 A6 */	mflr r0
/* 80377A50 00374990  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377A54 00374994  38 00 00 00 */	li r0, 0
/* 80377A58 00374998  98 03 02 14 */	stb r0, 0x214(r3)
/* 80377A5C 0037499C  81 83 00 00 */	lwz r12, 0(r3)
/* 80377A60 003749A0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80377A64 003749A4  7D 89 03 A6 */	mtctr r12
/* 80377A68 003749A8  4E 80 04 21 */	bctrl 
/* 80377A6C 003749AC  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80377A70 003749B0  38 80 00 00 */	li r4, 0
/* 80377A74 003749B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80377A78 003749B8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80377A7C 003749BC  7D 89 03 A6 */	mtctr r12
/* 80377A80 003749C0  4E 80 04 21 */	bctrl 
/* 80377A84 003749C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377A88 003749C8  7C 08 03 A6 */	mtlr r0
/* 80377A8C 003749CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80377A90 003749D0  4E 80 00 20 */	blr 
.endfn openConfirmWindow__Q28Morimura11TEnemyZukanFv

.fn getPrice__Q28Morimura11TEnemyZukanFi, global
/* 80377A94 003749D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80377A98 003749D8  7C 08 02 A6 */	mflr r0
/* 80377A9C 003749DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80377AA0 003749E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80377AA4 003749E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80377AA8 003749E8  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 80377AAC 003749EC  28 00 00 00 */	cmplwi r0, 0
/* 80377AB0 003749F0  40 82 00 10 */	bne .L_80377AC0
/* 80377AB4 003749F4  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80377AB8 003749F8  28 00 00 00 */	cmplwi r0, 0
/* 80377ABC 003749FC  41 82 00 40 */	beq .L_80377AFC
.L_80377AC0:
/* 80377AC0 00374A00  4B D5 1A E1 */	bl rand
/* 80377AC4 00374A04  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80377AC8 00374A08  3C 00 43 30 */	lis r0, 0x4330
/* 80377ACC 00374A0C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80377AD0 00374A10  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 80377AD4 00374A14  90 01 00 08 */	stw r0, 8(r1)
/* 80377AD8 00374A18  C0 42 08 54 */	lfs f2, lbl_8051EBB4@sda21(r2)
/* 80377ADC 00374A1C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80377AE0 00374A20  C0 22 08 68 */	lfs f1, lbl_8051EBC8@sda21(r2)
/* 80377AE4 00374A24  EC 60 18 28 */	fsubs f3, f0, f3
/* 80377AE8 00374A28  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80377AEC 00374A2C  EC 43 10 24 */	fdivs f2, f3, f2
/* 80377AF0 00374A30  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 80377AF4 00374A34  4B D4 A0 59 */	bl __cvt_fp2unsigned
/* 80377AF8 00374A38  48 00 00 B8 */	b .L_80377BB0
.L_80377AFC:
/* 80377AFC 00374A3C  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 80377B00 00374A40  28 06 00 00 */	cmplwi r6, 0
/* 80377B04 00374A44  41 82 00 A8 */	beq .L_80377BAC
/* 80377B08 00374A48  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377B0C 00374A4C  38 00 00 51 */	li r0, 0x51
/* 80377B10 00374A50  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
/* 80377B14 00374A54  38 A0 00 00 */	li r5, 0
/* 80377B18 00374A58  7C 09 03 A6 */	mtctr r0
.L_80377B1C:
/* 80377B1C 00374A5C  80 03 00 00 */	lwz r0, 0(r3)
/* 80377B20 00374A60  7C 04 00 00 */	cmpw r4, r0
/* 80377B24 00374A64  40 82 00 18 */	bne .L_80377B3C
/* 80377B28 00374A68  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377B2C 00374A6C  54 A4 18 38 */	slwi r4, r5, 3
/* 80377B30 00374A70  38 03 39 98 */	addi r0, r3, eIDInfo__8Morimura@l
/* 80377B34 00374A74  7C 60 22 14 */	add r3, r0, r4
/* 80377B38 00374A78  48 00 00 18 */	b .L_80377B50
.L_80377B3C:
/* 80377B3C 00374A7C  38 63 00 08 */	addi r3, r3, 8
/* 80377B40 00374A80  38 A5 00 01 */	addi r5, r5, 1
/* 80377B44 00374A84  42 00 FF D8 */	bdnz .L_80377B1C
/* 80377B48 00374A88  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377B4C 00374A8C  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
.L_80377B50:
/* 80377B50 00374A90  83 E3 00 04 */	lwz r31, 4(r3)
/* 80377B54 00374A94  38 66 00 40 */	addi r3, r6, 0x40
/* 80377B58 00374A98  7F E4 FB 78 */	mr r4, r31
/* 80377B5C 00374A9C  4B EB BF 69 */	bl getTekiInfo__Q34Game8TekiStat3MgrFi
/* 80377B60 00374AA0  88 03 00 08 */	lbz r0, 8(r3)
/* 80377B64 00374AA4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80377B68 00374AA8  40 82 00 0C */	bne .L_80377B74
/* 80377B6C 00374AAC  38 60 00 00 */	li r3, 0
/* 80377B70 00374AB0  48 00 00 40 */	b .L_80377BB0
.L_80377B74:
/* 80377B74 00374AB4  38 60 00 01 */	li r3, 1
/* 80377B78 00374AB8  4B EB 01 E5 */	bl getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
/* 80377B7C 00374ABC  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80377B80 00374AC0  7C 7E 1B 78 */	mr r30, r3
/* 80377B84 00374AC4  7F E3 FB 78 */	mr r3, r31
/* 80377B88 00374AC8  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 80377B8C 00374ACC  4B DA B7 51 */	bl getEnemyName__Q24Game13EnemyInfoFuncFii
/* 80377B90 00374AD0  7C 64 1B 78 */	mr r4, r3
/* 80377B94 00374AD4  7F C3 F3 78 */	mr r3, r30
/* 80377B98 00374AD8  4B E3 C8 8D */	bl getPelletConfig__Q24Game16PelletConfigListFPc
/* 80377B9C 00374ADC  28 03 00 00 */	cmplwi r3, 0
/* 80377BA0 00374AE0  41 82 00 0C */	beq .L_80377BAC
/* 80377BA4 00374AE4  80 63 01 70 */	lwz r3, 0x170(r3)
/* 80377BA8 00374AE8  48 00 00 08 */	b .L_80377BB0
.L_80377BAC:
/* 80377BAC 00374AEC  38 60 00 00 */	li r3, 0
.L_80377BB0:
/* 80377BB0 00374AF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80377BB4 00374AF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80377BB8 00374AF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80377BBC 00374AFC  7C 08 03 A6 */	mtlr r0
/* 80377BC0 00374B00  38 21 00 20 */	addi r1, r1, 0x20
/* 80377BC4 00374B04  4E 80 00 20 */	blr 
.endfn getPrice__Q28Morimura11TEnemyZukanFi

.fn getDefeatNum__Q28Morimura11TEnemyZukanFi, global
/* 80377BC8 00374B08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377BCC 00374B0C  7C 08 02 A6 */	mflr r0
/* 80377BD0 00374B10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377BD4 00374B14  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 80377BD8 00374B18  28 00 00 00 */	cmplwi r0, 0
/* 80377BDC 00374B1C  40 82 00 10 */	bne .L_80377BEC
/* 80377BE0 00374B20  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80377BE4 00374B24  28 00 00 00 */	cmplwi r0, 0
/* 80377BE8 00374B28  41 82 00 40 */	beq .L_80377C28
.L_80377BEC:
/* 80377BEC 00374B2C  4B D5 19 B5 */	bl rand
/* 80377BF0 00374B30  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80377BF4 00374B34  3C 00 43 30 */	lis r0, 0x4330
/* 80377BF8 00374B38  90 61 00 0C */	stw r3, 0xc(r1)
/* 80377BFC 00374B3C  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 80377C00 00374B40  90 01 00 08 */	stw r0, 8(r1)
/* 80377C04 00374B44  C0 42 08 54 */	lfs f2, lbl_8051EBB4@sda21(r2)
/* 80377C08 00374B48  C8 01 00 08 */	lfd f0, 8(r1)
/* 80377C0C 00374B4C  C0 22 08 6C */	lfs f1, lbl_8051EBCC@sda21(r2)
/* 80377C10 00374B50  EC 60 18 28 */	fsubs f3, f0, f3
/* 80377C14 00374B54  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80377C18 00374B58  EC 43 10 24 */	fdivs f2, f3, f2
/* 80377C1C 00374B5C  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 80377C20 00374B60  4B D4 9F 2D */	bl __cvt_fp2unsigned
/* 80377C24 00374B64  48 00 00 8C */	b .L_80377CB0
.L_80377C28:
/* 80377C28 00374B68  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 80377C2C 00374B6C  28 06 00 00 */	cmplwi r6, 0
/* 80377C30 00374B70  41 82 00 7C */	beq .L_80377CAC
/* 80377C34 00374B74  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377C38 00374B78  38 00 00 51 */	li r0, 0x51
/* 80377C3C 00374B7C  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
/* 80377C40 00374B80  38 A0 00 00 */	li r5, 0
/* 80377C44 00374B84  7C 09 03 A6 */	mtctr r0
.L_80377C48:
/* 80377C48 00374B88  80 03 00 00 */	lwz r0, 0(r3)
/* 80377C4C 00374B8C  7C 04 00 00 */	cmpw r4, r0
/* 80377C50 00374B90  40 82 00 18 */	bne .L_80377C68
/* 80377C54 00374B94  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377C58 00374B98  54 A4 18 38 */	slwi r4, r5, 3
/* 80377C5C 00374B9C  38 03 39 98 */	addi r0, r3, eIDInfo__8Morimura@l
/* 80377C60 00374BA0  7C 60 22 14 */	add r3, r0, r4
/* 80377C64 00374BA4  48 00 00 18 */	b .L_80377C7C
.L_80377C68:
/* 80377C68 00374BA8  38 63 00 08 */	addi r3, r3, 8
/* 80377C6C 00374BAC  38 A5 00 01 */	addi r5, r5, 1
/* 80377C70 00374BB0  42 00 FF D8 */	bdnz .L_80377C48
/* 80377C74 00374BB4  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377C78 00374BB8  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
.L_80377C7C:
/* 80377C7C 00374BBC  80 83 00 04 */	lwz r4, 4(r3)
/* 80377C80 00374BC0  38 66 00 40 */	addi r3, r6, 0x40
/* 80377C84 00374BC4  4B EB BE 41 */	bl getTekiInfo__Q34Game8TekiStat3MgrFi
/* 80377C88 00374BC8  28 03 00 00 */	cmplwi r3, 0
/* 80377C8C 00374BCC  41 82 00 20 */	beq .L_80377CAC
/* 80377C90 00374BD0  88 03 00 08 */	lbz r0, 8(r3)
/* 80377C94 00374BD4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80377C98 00374BD8  41 82 00 0C */	beq .L_80377CA4
/* 80377C9C 00374BDC  80 63 00 00 */	lwz r3, 0(r3)
/* 80377CA0 00374BE0  48 00 00 10 */	b .L_80377CB0
.L_80377CA4:
/* 80377CA4 00374BE4  38 60 00 00 */	li r3, 0
/* 80377CA8 00374BE8  48 00 00 08 */	b .L_80377CB0
.L_80377CAC:
/* 80377CAC 00374BEC  38 60 00 00 */	li r3, 0
.L_80377CB0:
/* 80377CB0 00374BF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377CB4 00374BF4  7C 08 03 A6 */	mtlr r0
/* 80377CB8 00374BF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80377CBC 00374BFC  4E 80 00 20 */	blr 
.endfn getDefeatNum__Q28Morimura11TEnemyZukanFi

.fn getKilledNum__Q28Morimura11TEnemyZukanFi, global
/* 80377CC0 00374C00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377CC4 00374C04  7C 08 02 A6 */	mflr r0
/* 80377CC8 00374C08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377CCC 00374C0C  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 80377CD0 00374C10  28 00 00 00 */	cmplwi r0, 0
/* 80377CD4 00374C14  40 82 00 10 */	bne .L_80377CE4
/* 80377CD8 00374C18  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80377CDC 00374C1C  28 00 00 00 */	cmplwi r0, 0
/* 80377CE0 00374C20  41 82 00 40 */	beq .L_80377D20
.L_80377CE4:
/* 80377CE4 00374C24  4B D5 18 BD */	bl rand
/* 80377CE8 00374C28  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80377CEC 00374C2C  3C 00 43 30 */	lis r0, 0x4330
/* 80377CF0 00374C30  90 61 00 0C */	stw r3, 0xc(r1)
/* 80377CF4 00374C34  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 80377CF8 00374C38  90 01 00 08 */	stw r0, 8(r1)
/* 80377CFC 00374C3C  C0 42 08 54 */	lfs f2, lbl_8051EBB4@sda21(r2)
/* 80377D00 00374C40  C8 01 00 08 */	lfd f0, 8(r1)
/* 80377D04 00374C44  C0 22 08 6C */	lfs f1, lbl_8051EBCC@sda21(r2)
/* 80377D08 00374C48  EC 60 18 28 */	fsubs f3, f0, f3
/* 80377D0C 00374C4C  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80377D10 00374C50  EC 43 10 24 */	fdivs f2, f3, f2
/* 80377D14 00374C54  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 80377D18 00374C58  4B D4 9E 35 */	bl __cvt_fp2unsigned
/* 80377D1C 00374C5C  48 00 00 C0 */	b .L_80377DDC
.L_80377D20:
/* 80377D20 00374C60  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 80377D24 00374C64  28 06 00 00 */	cmplwi r6, 0
/* 80377D28 00374C68  41 82 00 7C */	beq .L_80377DA4
/* 80377D2C 00374C6C  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377D30 00374C70  38 00 00 51 */	li r0, 0x51
/* 80377D34 00374C74  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
/* 80377D38 00374C78  38 A0 00 00 */	li r5, 0
/* 80377D3C 00374C7C  7C 09 03 A6 */	mtctr r0
.L_80377D40:
/* 80377D40 00374C80  80 03 00 00 */	lwz r0, 0(r3)
/* 80377D44 00374C84  7C 04 00 00 */	cmpw r4, r0
/* 80377D48 00374C88  40 82 00 18 */	bne .L_80377D60
/* 80377D4C 00374C8C  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377D50 00374C90  54 A4 18 38 */	slwi r4, r5, 3
/* 80377D54 00374C94  38 03 39 98 */	addi r0, r3, eIDInfo__8Morimura@l
/* 80377D58 00374C98  7C 60 22 14 */	add r3, r0, r4
/* 80377D5C 00374C9C  48 00 00 18 */	b .L_80377D74
.L_80377D60:
/* 80377D60 00374CA0  38 63 00 08 */	addi r3, r3, 8
/* 80377D64 00374CA4  38 A5 00 01 */	addi r5, r5, 1
/* 80377D68 00374CA8  42 00 FF D8 */	bdnz .L_80377D40
/* 80377D6C 00374CAC  3C 60 80 4E */	lis r3, eIDInfo__8Morimura@ha
/* 80377D70 00374CB0  38 63 39 98 */	addi r3, r3, eIDInfo__8Morimura@l
.L_80377D74:
/* 80377D74 00374CB4  80 83 00 04 */	lwz r4, 4(r3)
/* 80377D78 00374CB8  38 66 00 40 */	addi r3, r6, 0x40
/* 80377D7C 00374CBC  4B EB BD 49 */	bl getTekiInfo__Q34Game8TekiStat3MgrFi
/* 80377D80 00374CC0  28 03 00 00 */	cmplwi r3, 0
/* 80377D84 00374CC4  41 82 00 20 */	beq .L_80377DA4
/* 80377D88 00374CC8  88 03 00 08 */	lbz r0, 8(r3)
/* 80377D8C 00374CCC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80377D90 00374CD0  41 82 00 0C */	beq .L_80377D9C
/* 80377D94 00374CD4  80 63 00 04 */	lwz r3, 4(r3)
/* 80377D98 00374CD8  48 00 00 44 */	b .L_80377DDC
.L_80377D9C:
/* 80377D9C 00374CDC  38 60 00 00 */	li r3, 0
/* 80377DA0 00374CE0  48 00 00 3C */	b .L_80377DDC
.L_80377DA4:
/* 80377DA4 00374CE4  4B D5 17 FD */	bl rand
/* 80377DA8 00374CE8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80377DAC 00374CEC  3C 00 43 30 */	lis r0, 0x4330
/* 80377DB0 00374CF0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80377DB4 00374CF4  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 80377DB8 00374CF8  90 01 00 08 */	stw r0, 8(r1)
/* 80377DBC 00374CFC  C0 42 08 54 */	lfs f2, lbl_8051EBB4@sda21(r2)
/* 80377DC0 00374D00  C8 01 00 08 */	lfd f0, 8(r1)
/* 80377DC4 00374D04  C0 22 08 6C */	lfs f1, lbl_8051EBCC@sda21(r2)
/* 80377DC8 00374D08  EC 60 18 28 */	fsubs f3, f0, f3
/* 80377DCC 00374D0C  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80377DD0 00374D10  EC 43 10 24 */	fdivs f2, f3, f2
/* 80377DD4 00374D14  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 80377DD8 00374D18  4B D4 9D 75 */	bl __cvt_fp2unsigned
.L_80377DDC:
/* 80377DDC 00374D1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377DE0 00374D20  7C 08 03 A6 */	mtlr r0
/* 80377DE4 00374D24  38 21 00 10 */	addi r1, r1, 0x10
/* 80377DE8 00374D28  4E 80 00 20 */	blr 
.endfn getKilledNum__Q28Morimura11TEnemyZukanFi

.fn __ct__Q28Morimura12TDEnemySceneFv, global
/* 80377DEC 00374D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377DF0 00374D30  7C 08 02 A6 */	mflr r0
/* 80377DF4 00374D34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377DF8 00374D38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80377DFC 00374D3C  7C 7F 1B 78 */	mr r31, r3
/* 80377E00 00374D40  48 0D 99 91 */	bl __ct__Q26Screen9SceneBaseFv
/* 80377E04 00374D44  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 80377E08 00374D48  3C 60 80 4E */	lis r3, __vt__Q28Morimura12TDEnemyScene@ha
/* 80377E0C 00374D4C  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 80377E10 00374D50  38 80 00 00 */	li r4, 0
/* 80377E14 00374D54  90 1F 00 00 */	stw r0, 0(r31)
/* 80377E18 00374D58  38 03 3E C8 */	addi r0, r3, __vt__Q28Morimura12TDEnemyScene@l
/* 80377E1C 00374D5C  7F E3 FB 78 */	mr r3, r31
/* 80377E20 00374D60  90 9F 02 20 */	stw r4, 0x220(r31)
/* 80377E24 00374D64  90 1F 00 00 */	stw r0, 0(r31)
/* 80377E28 00374D68  90 9F 02 24 */	stw r4, 0x224(r31)
/* 80377E2C 00374D6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80377E30 00374D70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377E34 00374D74  7C 08 03 A6 */	mtlr r0
/* 80377E38 00374D78  38 21 00 10 */	addi r1, r1, 0x10
/* 80377E3C 00374D7C  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura12TDEnemySceneFv

.fn doCreateObj__Q28Morimura12TDEnemySceneFP10JKRArchive, global
/* 80377E40 00374D80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80377E44 00374D84  7C 08 02 A6 */	mflr r0
/* 80377E48 00374D88  90 01 00 24 */	stw r0, 0x24(r1)
/* 80377E4C 00374D8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80377E50 00374D90  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80377E54 00374D94  7C 9E 23 78 */	mr r30, r4
/* 80377E58 00374D98  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80377E5C 00374D9C  7C 7D 1B 78 */	mr r29, r3
/* 80377E60 00374DA0  38 60 02 58 */	li r3, 0x258
/* 80377E64 00374DA4  4B CA C0 41 */	bl __nw__FUl
/* 80377E68 00374DA8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80377E6C 00374DAC  41 82 00 34 */	beq .L_80377EA0
/* 80377E70 00374DB0  3C 80 80 49 */	lis r4, lbl_804929A0@ha
/* 80377E74 00374DB4  38 84 29 A0 */	addi r4, r4, lbl_804929A0@l
/* 80377E78 00374DB8  4B FF 8D 91 */	bl __ct__Q28Morimura10TZukanBaseFPc
/* 80377E7C 00374DBC  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TEnemyZukan@ha
/* 80377E80 00374DC0  38 00 00 00 */	li r0, 0
/* 80377E84 00374DC4  38 63 3F 68 */	addi r3, r3, __vt__Q28Morimura11TEnemyZukan@l
/* 80377E88 00374DC8  90 7F 00 00 */	stw r3, 0(r31)
/* 80377E8C 00374DCC  38 63 00 10 */	addi r3, r3, 0x10
/* 80377E90 00374DD0  90 7F 00 18 */	stw r3, 0x18(r31)
/* 80377E94 00374DD4  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 80377E98 00374DD8  90 1F 02 50 */	stw r0, 0x250(r31)
/* 80377E9C 00374DDC  90 1F 02 54 */	stw r0, 0x254(r31)
.L_80377EA0:
/* 80377EA0 00374DE0  7F A3 EB 78 */	mr r3, r29
/* 80377EA4 00374DE4  7F E4 FB 78 */	mr r4, r31
/* 80377EA8 00374DE8  7F C5 F3 78 */	mr r5, r30
/* 80377EAC 00374DEC  48 0D 9E C9 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80377EB0 00374DF0  93 FD 02 20 */	stw r31, 0x220(r29)
/* 80377EB4 00374DF4  38 60 00 D8 */	li r3, 0xd8
/* 80377EB8 00374DF8  4B CA BF ED */	bl __nw__FUl
/* 80377EBC 00374DFC  7C 60 1B 79 */	or. r0, r3, r3
/* 80377EC0 00374E00  41 82 00 14 */	beq .L_80377ED4
/* 80377EC4 00374E04  3C 80 80 49 */	lis r4, lbl_80493110@ha
/* 80377EC8 00374E08  38 84 31 10 */	addi r4, r4, lbl_80493110@l
/* 80377ECC 00374E0C  48 02 B7 79 */	bl __ct__Q28Morimura17TConfirmEndWindowFPCc
/* 80377ED0 00374E10  7C 60 1B 78 */	mr r0, r3
.L_80377ED4:
/* 80377ED4 00374E14  90 1D 02 24 */	stw r0, 0x224(r29)
/* 80377ED8 00374E18  7F A3 EB 78 */	mr r3, r29
/* 80377EDC 00374E1C  7F C5 F3 78 */	mr r5, r30
/* 80377EE0 00374E20  80 9D 02 24 */	lwz r4, 0x224(r29)
/* 80377EE4 00374E24  48 0D 9E 91 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80377EE8 00374E28  3C A0 38 5F */	lis r5, 0x385F3030@ha
/* 80377EEC 00374E2C  3C 80 00 36 */	lis r4, 0x00363031@ha
/* 80377EF0 00374E30  80 7D 02 24 */	lwz r3, 0x224(r29)
/* 80377EF4 00374E34  38 C5 30 30 */	addi r6, r5, 0x385F3030@l
/* 80377EF8 00374E38  38 A4 30 31 */	addi r5, r4, 0x00363031@l
/* 80377EFC 00374E3C  48 02 B8 ED */	bl setRetireMsg__Q28Morimura17TConfirmEndWindowFUx
/* 80377F00 00374E40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80377F04 00374E44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80377F08 00374E48  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80377F0C 00374E4C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80377F10 00374E50  7C 08 03 A6 */	mtlr r0
/* 80377F14 00374E54  38 21 00 20 */	addi r1, r1, 0x20
/* 80377F18 00374E58  4E 80 00 20 */	blr 
.endfn doCreateObj__Q28Morimura12TDEnemySceneFP10JKRArchive

.fn doStart__Q28Morimura12TDEnemySceneFPQ26Screen13StartSceneArg, global
/* 80377F1C 00374E5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377F20 00374E60  7C 08 02 A6 */	mflr r0
/* 80377F24 00374E64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377F28 00374E68  80 63 02 20 */	lwz r3, 0x220(r3)
/* 80377F2C 00374E6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80377F30 00374E70  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80377F34 00374E74  7D 89 03 A6 */	mtctr r12
/* 80377F38 00374E78  4E 80 04 21 */	bctrl 
/* 80377F3C 00374E7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80377F40 00374E80  38 60 00 01 */	li r3, 1
/* 80377F44 00374E84  7C 08 03 A6 */	mtlr r0
/* 80377F48 00374E88  38 21 00 10 */	addi r1, r1, 0x10
/* 80377F4C 00374E8C  4E 80 00 20 */	blr 
.endfn doStart__Q28Morimura12TDEnemySceneFPQ26Screen13StartSceneArg

.fn isAppearConfirmWindow__Q28Morimura12TDEnemySceneFv, global
/* 80377F50 00374E90  80 63 02 24 */	lwz r3, 0x224(r3)
/* 80377F54 00374E94  28 03 00 00 */	cmplwi r3, 0
/* 80377F58 00374E98  41 82 00 18 */	beq .L_80377F70
/* 80377F5C 00374E9C  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 80377F60 00374EA0  28 00 00 00 */	cmplwi r0, 0
/* 80377F64 00374EA4  41 82 00 0C */	beq .L_80377F70
/* 80377F68 00374EA8  38 60 00 01 */	li r3, 1
/* 80377F6C 00374EAC  4E 80 00 20 */	blr 
.L_80377F70:
/* 80377F70 00374EB0  38 60 00 00 */	li r3, 0
/* 80377F74 00374EB4  4E 80 00 20 */	blr 
.endfn isAppearConfirmWindow__Q28Morimura12TDEnemySceneFv

.fn __dt__Q28Morimura10TItemZukanFv, global
/* 80377F78 00374EB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80377F7C 00374EBC  7C 08 02 A6 */	mflr r0
/* 80377F80 00374EC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80377F84 00374EC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80377F88 00374EC8  7C 9F 23 78 */	mr r31, r4
/* 80377F8C 00374ECC  93 C1 00 08 */	stw r30, 8(r1)
/* 80377F90 00374ED0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80377F94 00374ED4  41 82 00 EC */	beq .L_80378080
/* 80377F98 00374ED8  3C 60 80 4E */	lis r3, __vt__Q28Morimura10TItemZukan@ha
/* 80377F9C 00374EDC  38 63 3D DC */	addi r3, r3, __vt__Q28Morimura10TItemZukan@l
/* 80377FA0 00374EE0  90 7E 00 00 */	stw r3, 0(r30)
/* 80377FA4 00374EE4  38 03 00 10 */	addi r0, r3, 0x10
/* 80377FA8 00374EE8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80377FAC 00374EEC  80 7E 02 48 */	lwz r3, 0x248(r30)
/* 80377FB0 00374EF0  80 63 00 08 */	lwz r3, 8(r3)
/* 80377FB4 00374EF4  4B CA B7 7D */	bl freeAll__7JKRHeapFv
/* 80377FB8 00374EF8  28 1E 00 00 */	cmplwi r30, 0
/* 80377FBC 00374EFC  41 82 00 B4 */	beq .L_80378070
/* 80377FC0 00374F00  3C 60 80 4E */	lis r3, __vt__Q28Morimura10TZukanBase@ha
/* 80377FC4 00374F04  38 63 40 54 */	addi r3, r3, __vt__Q28Morimura10TZukanBase@l
/* 80377FC8 00374F08  90 7E 00 00 */	stw r3, 0(r30)
/* 80377FCC 00374F0C  38 03 00 10 */	addi r0, r3, 0x10
/* 80377FD0 00374F10  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80377FD4 00374F14  80 6D 99 34 */	lwz r3, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80377FD8 00374F18  28 03 00 00 */	cmplwi r3, 0
/* 80377FDC 00374F1C  41 82 00 08 */	beq .L_80377FE4
/* 80377FE0 00374F20  4B CA B5 D5 */	bl destroy__7JKRHeapFv
.L_80377FE4:
/* 80377FE4 00374F24  38 00 00 00 */	li r0, 0
/* 80377FE8 00374F28  28 1E 00 00 */	cmplwi r30, 0
/* 80377FEC 00374F2C  90 0D 99 34 */	stw r0, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80377FF0 00374F30  41 82 00 80 */	beq .L_80378070
/* 80377FF4 00374F34  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TScrollList@ha
/* 80377FF8 00374F38  38 63 58 C0 */	addi r3, r3, __vt__Q28Morimura11TScrollList@l
/* 80377FFC 00374F3C  90 7E 00 00 */	stw r3, 0(r30)
/* 80378000 00374F40  38 03 00 10 */	addi r0, r3, 0x10
/* 80378004 00374F44  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80378008 00374F48  41 82 00 68 */	beq .L_80378070
/* 8037800C 00374F4C  3C 60 80 4E */	lis r3, __vt__Q28Morimura9TTestBase@ha
/* 80378010 00374F50  38 63 B8 F8 */	addi r3, r3, __vt__Q28Morimura9TTestBase@l
/* 80378014 00374F54  90 7E 00 00 */	stw r3, 0(r30)
/* 80378018 00374F58  38 03 00 10 */	addi r0, r3, 0x10
/* 8037801C 00374F5C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80378020 00374F60  41 82 00 50 */	beq .L_80378070
/* 80378024 00374F64  3C 60 80 4F */	lis r3, __vt__Q26Screen7ObjBase@ha
/* 80378028 00374F68  38 63 D7 58 */	addi r3, r3, __vt__Q26Screen7ObjBase@l
/* 8037802C 00374F6C  90 7E 00 00 */	stw r3, 0(r30)
/* 80378030 00374F70  38 03 00 10 */	addi r0, r3, 0x10
/* 80378034 00374F74  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80378038 00374F78  41 82 00 38 */	beq .L_80378070
/* 8037803C 00374F7C  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80378040 00374F80  7F C3 F3 78 */	mr r3, r30
/* 80378044 00374F84  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80378048 00374F88  90 9E 00 00 */	stw r4, 0(r30)
/* 8037804C 00374F8C  38 04 00 10 */	addi r0, r4, 0x10
/* 80378050 00374F90  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80378054 00374F94  48 09 95 7D */	bl del__5CNodeFv
/* 80378058 00374F98  38 7E 00 18 */	addi r3, r30, 0x18
/* 8037805C 00374F9C  38 80 00 00 */	li r4, 0
/* 80378060 00374FA0  4B CA 4F D5 */	bl __dt__11JKRDisposerFv
/* 80378064 00374FA4  7F C3 F3 78 */	mr r3, r30
/* 80378068 00374FA8  38 80 00 00 */	li r4, 0
/* 8037806C 00374FAC  48 09 95 1D */	bl __dt__5CNodeFv
.L_80378070:
/* 80378070 00374FB0  7F E0 07 35 */	extsh. r0, r31
/* 80378074 00374FB4  40 81 00 0C */	ble .L_80378080
/* 80378078 00374FB8  7F C3 F3 78 */	mr r3, r30
/* 8037807C 00374FBC  4B CA C0 39 */	bl __dl__FPv
.L_80378080:
/* 80378080 00374FC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378084 00374FC4  7F C3 F3 78 */	mr r3, r30
/* 80378088 00374FC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037808C 00374FCC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80378090 00374FD0  7C 08 03 A6 */	mtlr r0
/* 80378094 00374FD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80378098 00374FD8  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura10TItemZukanFv

.fn doUpdate__Q28Morimura10TItemZukanFv, global
/* 8037809C 00374FDC  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803780A0 00374FE0  7C 08 02 A6 */	mflr r0
/* 803780A4 00374FE4  90 01 00 94 */	stw r0, 0x94(r1)
/* 803780A8 00374FE8  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803780AC 00374FEC  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803780B0 00374FF0  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803780B4 00374FF4  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803780B8 00374FF8  BE C1 00 48 */	stmw r22, 0x48(r1)
/* 803780BC 00374FFC  7C 7F 1B 78 */	mr r31, r3
/* 803780C0 00375000  88 03 02 44 */	lbz r0, 0x244(r3)
/* 803780C4 00375004  28 00 00 00 */	cmplwi r0, 0
/* 803780C8 00375008  41 82 03 CC */	beq .L_80378494
/* 803780CC 0037500C  88 1F 00 45 */	lbz r0, 0x45(r31)
/* 803780D0 00375010  28 00 00 00 */	cmplwi r0, 0
/* 803780D4 00375014  41 82 03 C0 */	beq .L_80378494
/* 803780D8 00375018  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 803780DC 0037501C  81 83 00 00 */	lwz r12, 0(r3)
/* 803780E0 00375020  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803780E4 00375024  7D 89 03 A6 */	mtctr r12
/* 803780E8 00375028  4E 80 04 21 */	bctrl 
/* 803780EC 0037502C  80 1F 03 AC */	lwz r0, 0x3ac(r31)
/* 803780F0 00375030  2C 00 00 02 */	cmpwi r0, 2
/* 803780F4 00375034  41 82 03 A0 */	beq .L_80378494
/* 803780F8 00375038  40 80 00 14 */	bge .L_8037810C
/* 803780FC 0037503C  2C 00 00 00 */	cmpwi r0, 0
/* 80378100 00375040  41 82 00 1C */	beq .L_8037811C
/* 80378104 00375044  40 80 01 38 */	bge .L_8037823C
/* 80378108 00375048  48 00 03 8C */	b .L_80378494
.L_8037810C:
/* 8037810C 0037504C  2C 00 00 04 */	cmpwi r0, 4
/* 80378110 00375050  41 82 02 28 */	beq .L_80378338
/* 80378114 00375054  40 80 03 80 */	bge .L_80378494
/* 80378118 00375058  48 00 01 30 */	b .L_80378248
.L_8037811C:
/* 8037811C 0037505C  80 9F 02 3C */	lwz r4, 0x23c(r31)
/* 80378120 00375060  54 80 10 3A */	slwi r0, r4, 2
/* 80378124 00375064  7C 7F 02 14 */	add r3, r31, r0
/* 80378128 00375068  80 03 02 DC */	lwz r0, 0x2dc(r3)
/* 8037812C 0037506C  2C 00 00 00 */	cmpwi r0, 0
/* 80378130 00375070  41 82 00 EC */	beq .L_8037821C
/* 80378134 00375074  38 60 00 00 */	li r3, 0
/* 80378138 00375078  38 00 00 01 */	li r0, 1
/* 8037813C 0037507C  90 7F 03 A8 */	stw r3, 0x3a8(r31)
/* 80378140 00375080  38 60 00 00 */	li r3, 0
/* 80378144 00375084  90 1F 03 AC */	stw r0, 0x3ac(r31)
/* 80378148 00375088  80 1F 02 3C */	lwz r0, 0x23c(r31)
/* 8037814C 0037508C  2C 00 00 00 */	cmpwi r0, 0
/* 80378150 00375090  40 81 00 18 */	ble .L_80378168
/* 80378154 00375094  3C 60 80 4E */	lis r3, mCategoryArray__Q28Morimura10TItemZukan@ha
/* 80378158 00375098  54 00 10 3A */	slwi r0, r0, 2
/* 8037815C 0037509C  38 63 39 34 */	addi r3, r3, mCategoryArray__Q28Morimura10TItemZukan@l
/* 80378160 003750A0  7C 63 02 14 */	add r3, r3, r0
/* 80378164 003750A4  80 63 FF FC */	lwz r3, -4(r3)
.L_80378168:
/* 80378168 003750A8  90 7F 03 B0 */	stw r3, 0x3b0(r31)
/* 8037816C 003750AC  3C 60 80 4E */	lis r3, mCategoryArray__Q28Morimura10TItemZukan@ha
/* 80378170 003750B0  38 63 39 34 */	addi r3, r3, mCategoryArray__Q28Morimura10TItemZukan@l
/* 80378174 003750B4  80 1F 02 3C */	lwz r0, 0x23c(r31)
/* 80378178 003750B8  54 00 10 3A */	slwi r0, r0, 2
/* 8037817C 003750BC  7C 63 00 2E */	lwzx r3, r3, r0
/* 80378180 003750C0  38 03 FF FF */	addi r0, r3, -1
/* 80378184 003750C4  90 1F 03 B0 */	stw r0, 0x3b0(r31)
/* 80378188 003750C8  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037818C 003750CC  28 00 00 00 */	cmplwi r0, 0
/* 80378190 003750D0  41 82 00 64 */	beq .L_803781F4
/* 80378194 003750D4  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 80378198 003750D8  38 C0 00 00 */	li r6, 0
/* 8037819C 003750DC  38 A0 00 00 */	li r5, 0
/* 803781A0 003750E0  7C 09 03 A6 */	mtctr r0
/* 803781A4 003750E4  2C 00 00 00 */	cmpwi r0, 0
/* 803781A8 003750E8  40 81 02 EC */	ble .L_80378494
.L_803781AC:
/* 803781AC 003750EC  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 803781B0 003750F0  80 9F 03 B0 */	lwz r4, 0x3b0(r31)
/* 803781B4 003750F4  7C 03 28 2E */	lwzx r0, r3, r5
/* 803781B8 003750F8  7C 04 00 00 */	cmpw r4, r0
/* 803781BC 003750FC  40 82 00 28 */	bne .L_803781E4
/* 803781C0 00375100  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 803781C4 00375104  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 803781C8 00375108  7C 60 30 96 */	mulhw r3, r0, r6
/* 803781CC 0037510C  54 60 0F FE */	srwi r0, r3, 0x1f
/* 803781D0 00375110  7C 03 02 14 */	add r0, r3, r0
/* 803781D4 00375114  1C 00 00 03 */	mulli r0, r0, 3
/* 803781D8 00375118  7C 00 30 50 */	subf r0, r0, r6
/* 803781DC 0037511C  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 803781E0 00375120  48 00 02 B4 */	b .L_80378494
.L_803781E4:
/* 803781E4 00375124  38 A5 00 04 */	addi r5, r5, 4
/* 803781E8 00375128  38 C6 00 01 */	addi r6, r6, 1
/* 803781EC 0037512C  42 00 FF C0 */	bdnz .L_803781AC
/* 803781F0 00375130  48 00 02 A4 */	b .L_80378494
.L_803781F4:
/* 803781F4 00375134  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 803781F8 00375138  80 9F 03 B0 */	lwz r4, 0x3b0(r31)
/* 803781FC 0037513C  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 80378200 00375140  7C 60 20 96 */	mulhw r3, r0, r4
/* 80378204 00375144  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80378208 00375148  7C 03 02 14 */	add r0, r3, r0
/* 8037820C 0037514C  1C 00 00 03 */	mulli r0, r0, 3
/* 80378210 00375150  7C 00 20 50 */	subf r0, r0, r4
/* 80378214 00375154  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 80378218 00375158  48 00 02 7C */	b .L_80378494
.L_8037821C:
/* 8037821C 0037515C  38 04 00 01 */	addi r0, r4, 1
/* 80378220 00375160  90 1F 02 3C */	stw r0, 0x23c(r31)
/* 80378224 00375164  80 1F 02 3C */	lwz r0, 0x23c(r31)
/* 80378228 00375168  2C 00 00 19 */	cmpwi r0, 0x19
/* 8037822C 0037516C  41 80 02 68 */	blt .L_80378494
/* 80378230 00375170  38 00 00 00 */	li r0, 0
/* 80378234 00375174  98 1F 02 44 */	stb r0, 0x244(r31)
/* 80378238 00375178  48 00 02 5C */	b .L_80378494
.L_8037823C:
/* 8037823C 0037517C  7F E3 FB 78 */	mr r3, r31
/* 80378240 00375180  48 00 02 81 */	bl demoSet__Q28Morimura10TItemZukanFv
/* 80378244 00375184  48 00 02 50 */	b .L_80378494
.L_80378248:
/* 80378248 00375188  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8037824C 0037518C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80378250 00375190  54 00 05 AF */	rlwinm. r0, r0, 0, 0x16, 0x17
/* 80378254 00375194  41 82 00 2C */	beq .L_80378280
/* 80378258 00375198  38 60 00 00 */	li r3, 0
/* 8037825C 0037519C  38 00 00 04 */	li r0, 4
/* 80378260 003751A0  90 7F 03 A8 */	stw r3, 0x3a8(r31)
/* 80378264 003751A4  38 80 18 11 */	li r4, 0x1811
/* 80378268 003751A8  38 A0 00 00 */	li r5, 0
/* 8037826C 003751AC  90 1F 03 AC */	stw r0, 0x3ac(r31)
/* 80378270 003751B0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80378274 003751B4  4B FC 03 BD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80378278 003751B8  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037827C 003751BC  48 00 40 9D */	bl windowClose__Q28Morimura12TZukanWindowFv
.L_80378280:
/* 80378280 003751C0  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80378284 003751C4  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 80378288 003751C8  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 8037828C 003751CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80378290 003751D0  FF C0 08 90 */	fmr f30, f1
/* 80378294 003751D4  4C 41 13 82 */	cror 2, 1, 2
/* 80378298 003751D8  41 82 00 14 */	beq .L_803782AC
/* 8037829C 003751DC  C0 02 08 04 */	lfs f0, lbl_8051EB64@sda21(r2)
/* 803782A0 003751E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803782A4 003751E4  4C 40 13 82 */	cror 2, 0, 2
/* 803782A8 003751E8  40 82 01 EC */	bne .L_80378494
.L_803782AC:
/* 803782AC 003751EC  C0 02 08 04 */	lfs f0, lbl_8051EB64@sda21(r2)
/* 803782B0 003751F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803782B4 003751F4  4C 40 13 82 */	cror 2, 0, 2
/* 803782B8 003751F8  40 82 00 08 */	bne .L_803782C0
/* 803782BC 003751FC  C3 C2 08 08 */	lfs f30, lbl_8051EB68@sda21(r2)
.L_803782C0:
/* 803782C0 00375200  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 803782C4 00375204  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803782C8 00375208  4C 41 13 82 */	cror 2, 1, 2
/* 803782CC 0037520C  40 82 00 08 */	bne .L_803782D4
/* 803782D0 00375210  C3 C2 07 C4 */	lfs f30, lbl_8051EB24@sda21(r2)
.L_803782D4:
/* 803782D4 00375214  FC 20 F0 90 */	fmr f1, f30
/* 803782D8 00375218  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803782DC 0037521C  48 00 40 6D */	bl msgScroll__Q28Morimura12TZukanWindowFf
/* 803782E0 00375220  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803782E4 00375224  48 00 40 9D */	bl getPosRate__Q28Morimura12TZukanWindowFv
/* 803782E8 00375228  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 803782EC 0037522C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803782F0 00375230  41 82 00 18 */	beq .L_80378308
/* 803782F4 00375234  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 803782F8 00375238  48 00 40 89 */	bl getPosRate__Q28Morimura12TZukanWindowFv
/* 803782FC 0037523C  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80378300 00375240  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80378304 00375244  40 82 00 08 */	bne .L_8037830C
.L_80378308:
/* 80378308 00375248  C3 C2 07 C0 */	lfs f30, lbl_8051EB20@sda21(r2)
.L_8037830C:
/* 8037830C 0037524C  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80378310 00375250  FC 00 F0 00 */	fcmpu cr0, f0, f30
/* 80378314 00375254  41 82 00 14 */	beq .L_80378328
/* 80378318 00375258  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8037831C 0037525C  38 80 10 75 */	li r4, 0x1075
/* 80378320 00375260  38 A0 00 00 */	li r5, 0
/* 80378324 00375264  4B FC 03 0D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80378328:
/* 80378328 00375268  FC 20 F0 90 */	fmr f1, f30
/* 8037832C 0037526C  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80378330 00375270  48 00 42 69 */	bl moveIcon__Q28Morimura12TZukanWindowFf
/* 80378334 00375274  48 00 01 60 */	b .L_80378494
.L_80378338:
/* 80378338 00375278  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037833C 0037527C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80378340 00375280  2C 00 00 00 */	cmpwi r0, 0
/* 80378344 00375284  40 82 01 50 */	bne .L_80378494
/* 80378348 00375288  80 1F 03 A8 */	lwz r0, 0x3a8(r31)
/* 8037834C 0037528C  2C 00 00 00 */	cmpwi r0, 0
/* 80378350 00375290  40 82 00 F8 */	bne .L_80378448
/* 80378354 00375294  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 80378358 00375298  38 80 18 7F */	li r4, 0x187f
/* 8037835C 0037529C  C0 42 07 EC */	lfs f2, lbl_8051EB4C@sda21(r2)
/* 80378360 003752A0  38 A0 00 00 */	li r5, 0
/* 80378364 003752A4  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 80378368 003752A8  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8037836C 003752AC  C0 63 00 9C */	lfs f3, 0x9c(r3)
/* 80378370 003752B0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80378374 003752B4  C0 23 00 8C */	lfs f1, 0x8c(r3)
/* 80378378 003752B8  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8037837C 003752BC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80378380 003752C0  EC 02 18 3C */	fnmsubs f0, f2, f0, f3
/* 80378384 003752C4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80378388 003752C8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8037838C 003752CC  4B FC 02 A5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80378390 003752D0  3C E0 80 4C */	lis r7, __vt__Q25efx2d3Arg@ha
/* 80378394 003752D4  3C C0 80 4C */	lis r6, __vt__Q25efx2d7TBaseIF@ha
/* 80378398 003752D8  3C A0 80 4C */	lis r5, __vt__Q25efx2d5TBase@ha
/* 8037839C 003752DC  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 803783A0 003752E0  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChangesmoke@ha
/* 803783A4 003752E4  82 E1 00 10 */	lwz r23, 0x10(r1)
/* 803783A8 003752E8  83 01 00 14 */	lwz r24, 0x14(r1)
/* 803783AC 003752EC  3B 27 15 14 */	addi r25, r7, __vt__Q25efx2d3Arg@l
/* 803783B0 003752F0  C3 C2 08 70 */	lfs f30, lbl_8051EBD0@sda21(r2)
/* 803783B4 003752F4  3B 66 14 F0 */	addi r27, r6, __vt__Q25efx2d7TBaseIF@l
/* 803783B8 003752F8  CB E2 08 20 */	lfd f31, lbl_8051EB80@sda21(r2)
/* 803783BC 003752FC  3B 85 14 D8 */	addi r28, r5, __vt__Q25efx2d5TBase@l
/* 803783C0 00375300  3B A4 74 88 */	addi r29, r4, __vt__Q25efx2d8TSimple1@l
/* 803783C4 00375304  3B C3 3D C4 */	addi r30, r3, __vt__Q25efx2d14T2DChangesmoke@l
/* 803783C8 00375308  3A C0 00 00 */	li r22, 0
/* 803783CC 0037530C  3F 40 43 30 */	lis r26, 0x4330
.L_803783D0:
/* 803783D0 00375310  6E C0 80 00 */	xoris r0, r22, 0x8000
/* 803783D4 00375314  38 A0 00 00 */	li r5, 0
/* 803783D8 00375318  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803783DC 0037531C  38 00 00 07 */	li r0, 7
/* 803783E0 00375320  38 61 00 18 */	addi r3, r1, 0x18
/* 803783E4 00375324  38 81 00 28 */	addi r4, r1, 0x28
/* 803783E8 00375328  93 41 00 38 */	stw r26, 0x38(r1)
/* 803783EC 0037532C  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803783F0 00375330  92 E1 00 08 */	stw r23, 8(r1)
/* 803783F4 00375334  EC 00 F8 28 */	fsubs f0, f0, f31
/* 803783F8 00375338  C0 41 00 08 */	lfs f2, 8(r1)
/* 803783FC 0037533C  93 61 00 18 */	stw r27, 0x18(r1)
/* 80378400 00375340  EC 1E 10 3A */	fmadds f0, f30, f0, f2
/* 80378404 00375344  93 01 00 0C */	stw r24, 0xc(r1)
/* 80378408 00375348  93 81 00 18 */	stw r28, 0x18(r1)
/* 8037840C 0037534C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80378410 00375350  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80378414 00375354  93 A1 00 18 */	stw r29, 0x18(r1)
/* 80378418 00375358  93 21 00 30 */	stw r25, 0x30(r1)
/* 8037841C 0037535C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80378420 00375360  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80378424 00375364  98 A1 00 1C */	stb r5, 0x1c(r1)
/* 80378428 00375368  98 A1 00 1D */	stb r5, 0x1d(r1)
/* 8037842C 0037536C  B0 01 00 20 */	sth r0, 0x20(r1)
/* 80378430 00375370  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80378434 00375374  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80378438 00375378  48 04 13 F9 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
/* 8037843C 0037537C  3A D6 00 01 */	addi r22, r22, 1
/* 80378440 00375380  2C 16 00 05 */	cmpwi r22, 5
/* 80378444 00375384  41 80 FF 8C */	blt .L_803783D0
.L_80378448:
/* 80378448 00375388  80 7F 03 A8 */	lwz r3, 0x3a8(r31)
/* 8037844C 0037538C  38 03 00 01 */	addi r0, r3, 1
/* 80378450 00375390  90 1F 03 A8 */	stw r0, 0x3a8(r31)
/* 80378454 00375394  80 1F 03 A8 */	lwz r0, 0x3a8(r31)
/* 80378458 00375398  2C 00 00 1E */	cmpwi r0, 0x1e
/* 8037845C 0037539C  40 81 00 38 */	ble .L_80378494
/* 80378460 003753A0  80 7F 02 3C */	lwz r3, 0x23c(r31)
/* 80378464 003753A4  38 03 00 01 */	addi r0, r3, 1
/* 80378468 003753A8  90 1F 02 3C */	stw r0, 0x23c(r31)
/* 8037846C 003753AC  80 1F 02 3C */	lwz r0, 0x23c(r31)
/* 80378470 003753B0  2C 00 00 19 */	cmpwi r0, 0x19
/* 80378474 003753B4  41 80 00 18 */	blt .L_8037848C
/* 80378478 003753B8  38 00 00 00 */	li r0, 0
/* 8037847C 003753BC  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80378480 003753C0  98 1F 02 44 */	stb r0, 0x244(r31)
/* 80378484 003753C4  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 80378488 003753C8  48 00 00 0C */	b .L_80378494
.L_8037848C:
/* 8037848C 003753CC  38 00 00 00 */	li r0, 0
/* 80378490 003753D0  90 1F 03 AC */	stw r0, 0x3ac(r31)
.L_80378494:
/* 80378494 003753D4  7F E3 FB 78 */	mr r3, r31
/* 80378498 003753D8  4B FF 94 41 */	bl doUpdate__Q28Morimura10TZukanBaseFv
/* 8037849C 003753DC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803784A0 003753E0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803784A4 003753E4  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803784A8 003753E8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803784AC 003753EC  BA C1 00 48 */	lmw r22, 0x48(r1)
/* 803784B0 003753F0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803784B4 003753F4  7C 08 03 A6 */	mtlr r0
/* 803784B8 003753F8  38 21 00 90 */	addi r1, r1, 0x90
/* 803784BC 003753FC  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura10TItemZukanFv

.fn demoSet__Q28Morimura10TItemZukanFv, global
/* 803784C0 00375400  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803784C4 00375404  7C 08 02 A6 */	mflr r0
/* 803784C8 00375408  90 01 00 14 */	stw r0, 0x14(r1)
/* 803784CC 0037540C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803784D0 00375410  7C 7F 1B 78 */	mr r31, r3
/* 803784D4 00375414  80 03 00 94 */	lwz r0, 0x94(r3)
/* 803784D8 00375418  80 63 00 88 */	lwz r3, 0x88(r3)
/* 803784DC 0037541C  54 00 10 3A */	slwi r0, r0, 2
/* 803784E0 00375420  7C 63 00 2E */	lwzx r3, r3, r0
/* 803784E4 00375424  48 02 A0 D9 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 803784E8 00375428  80 1F 03 B0 */	lwz r0, 0x3b0(r31)
/* 803784EC 0037542C  7C 00 18 00 */	cmpw r0, r3
/* 803784F0 00375430  41 82 00 10 */	beq .L_80378500
/* 803784F4 00375434  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803784F8 00375438  48 02 9D 15 */	bl downIndex__Q28Morimura11TIndexGroupFv
/* 803784FC 0037543C  48 00 00 58 */	b .L_80378554
.L_80378500:
/* 80378500 00375440  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80378504 00375444  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80378508 00375448  2C 00 00 00 */	cmpwi r0, 0
/* 8037850C 0037544C  40 82 00 48 */	bne .L_80378554
/* 80378510 00375450  80 7F 03 A4 */	lwz r3, 0x3a4(r31)
/* 80378514 00375454  80 9F 02 3C */	lwz r4, 0x23c(r31)
/* 80378518 00375458  48 02 8C F5 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 8037851C 0037545C  80 BF 01 10 */	lwz r5, 0x110(r31)
/* 80378520 00375460  38 00 00 00 */	li r0, 0
/* 80378524 00375464  90 85 00 1C */	stw r4, 0x1c(r5)
/* 80378528 00375468  90 65 00 18 */	stw r3, 0x18(r5)
/* 8037852C 0037546C  98 1F 02 14 */	stb r0, 0x214(r31)
/* 80378530 00375470  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80378534 00375474  48 00 3C F5 */	bl windowOpen__Q28Morimura12TZukanWindowFv
/* 80378538 00375478  7F E3 FB 78 */	mr r3, r31
/* 8037853C 0037547C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80378540 00375480  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80378544 00375484  7D 89 03 A6 */	mtctr r12
/* 80378548 00375488  4E 80 04 21 */	bctrl 
/* 8037854C 0037548C  38 00 00 03 */	li r0, 3
/* 80378550 00375490  90 1F 03 AC */	stw r0, 0x3ac(r31)
.L_80378554:
/* 80378554 00375494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378558 00375498  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037855C 0037549C  7C 08 03 A6 */	mtlr r0
/* 80378560 003754A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80378564 003754A4  4E 80 00 20 */	blr 
.endfn demoSet__Q28Morimura10TItemZukanFv

.fn setShortenIndex__Q28Morimura10TItemZukanFiib, global
/* 80378568 003754A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8037856C 003754AC  7C 08 02 A6 */	mflr r0
/* 80378570 003754B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80378574 003754B4  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 80378578 003754B8  7C 7D 1B 78 */	mr r29, r3
/* 8037857C 003754BC  7C 9E 23 78 */	mr r30, r4
/* 80378580 003754C0  7C DF 33 78 */	mr r31, r6
/* 80378584 003754C4  4B FF BF D5 */	bl setShortenIndex__Q28Morimura10TZukanBaseFiib
/* 80378588 003754C8  88 1D 02 42 */	lbz r0, 0x242(r29)
/* 8037858C 003754CC  38 E0 00 00 */	li r7, 0
/* 80378590 003754D0  38 80 00 01 */	li r4, 1
/* 80378594 003754D4  28 00 00 00 */	cmplwi r0, 0
/* 80378598 003754D8  41 82 00 6C */	beq .L_80378604
/* 8037859C 003754DC  80 1D 03 B4 */	lwz r0, 0x3b4(r29)
/* 803785A0 003754E0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803785A4 003754E4  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 803785A8 003754E8  7C 00 1A 78 */	xor r0, r0, r3
/* 803785AC 003754EC  7C 03 00 50 */	subf r0, r3, r0
/* 803785B0 003754F0  2C 00 00 01 */	cmpwi r0, 1
/* 803785B4 003754F4  40 82 00 50 */	bne .L_80378604
/* 803785B8 003754F8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803785BC 003754FC  41 82 00 28 */	beq .L_803785E4
/* 803785C0 00375500  34 BE FF FF */	addic. r5, r30, -1
/* 803785C4 00375504  38 80 00 03 */	li r4, 3
/* 803785C8 00375508  40 80 00 0C */	bge .L_803785D4
/* 803785CC 0037550C  A8 7D 00 8E */	lha r3, 0x8e(r29)
/* 803785D0 00375510  38 A3 FF FF */	addi r5, r3, -1
.L_803785D4:
/* 803785D4 00375514  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 803785D8 00375518  54 A0 10 3A */	slwi r0, r5, 2
/* 803785DC 0037551C  7C E3 00 2E */	lwzx r7, r3, r0
/* 803785E0 00375520  48 00 00 24 */	b .L_80378604
.L_803785E4:
/* 803785E4 00375524  A8 1D 00 8E */	lha r0, 0x8e(r29)
/* 803785E8 00375528  38 BE 00 01 */	addi r5, r30, 1
/* 803785EC 0037552C  7C 05 00 00 */	cmpw r5, r0
/* 803785F0 00375530  41 80 00 08 */	blt .L_803785F8
/* 803785F4 00375534  38 A0 00 00 */	li r5, 0
.L_803785F8:
/* 803785F8 00375538  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 803785FC 0037553C  54 A0 10 3A */	slwi r0, r5, 2
/* 80378600 00375540  7C E3 00 2E */	lwzx r7, r3, r0
.L_80378604:
/* 80378604 00375544  28 07 00 00 */	cmplwi r7, 0
/* 80378608 00375548  38 00 00 00 */	li r0, 0
/* 8037860C 0037554C  41 82 02 14 */	beq .L_80378820
/* 80378610 00375550  38 60 FF FF */	li r3, -1
/* 80378614 00375554  38 A0 00 00 */	li r5, 0
/* 80378618 00375558  7C 89 03 A6 */	mtctr r4
/* 8037861C 0037555C  2C 04 00 00 */	cmpwi r4, 0
/* 80378620 00375560  40 81 00 24 */	ble .L_80378644
.L_80378624:
/* 80378624 00375564  80 87 00 20 */	lwz r4, 0x20(r7)
/* 80378628 00375568  7C C4 28 2E */	lwzx r6, r4, r5
/* 8037862C 0037556C  80 86 00 18 */	lwz r4, 0x18(r6)
/* 80378630 00375570  28 04 00 00 */	cmplwi r4, 0
/* 80378634 00375574  41 82 00 08 */	beq .L_8037863C
/* 80378638 00375578  80 66 00 00 */	lwz r3, 0(r6)
.L_8037863C:
/* 8037863C 0037557C  38 A5 00 04 */	addi r5, r5, 4
/* 80378640 00375580  42 00 FF E4 */	bdnz .L_80378624
.L_80378644:
/* 80378644 00375584  2C 03 00 00 */	cmpwi r3, 0
/* 80378648 00375588  41 80 01 D8 */	blt .L_80378820
/* 8037864C 0037558C  57 E4 06 3F */	clrlwi. r4, r31, 0x18
/* 80378650 00375590  41 82 00 EC */	beq .L_8037873C
/* 80378654 00375594  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 80378658 00375598  57 C6 10 3A */	slwi r6, r30, 2
/* 8037865C 0037559C  7C 86 20 2E */	lwzx r4, r6, r4
/* 80378660 003755A0  80 84 00 20 */	lwz r4, 0x20(r4)
/* 80378664 003755A4  80 84 00 00 */	lwz r4, 0(r4)
/* 80378668 003755A8  80 E4 00 00 */	lwz r7, 0(r4)
/* 8037866C 003755AC  7C 03 38 00 */	cmpw r3, r7
/* 80378670 003755B0  41 82 00 34 */	beq .L_803786A4
/* 80378674 003755B4  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80378678 003755B8  28 04 00 00 */	cmplwi r4, 0
/* 8037867C 003755BC  41 82 00 28 */	beq .L_803786A4
/* 80378680 003755C0  54 63 10 3A */	slwi r3, r3, 2
/* 80378684 003755C4  54 E4 10 3A */	slwi r4, r7, 2
/* 80378688 003755C8  38 A3 03 40 */	addi r5, r3, 0x340
/* 8037868C 003755CC  7C E3 3B 78 */	mr r3, r7
/* 80378690 003755D0  7C BD 28 2E */	lwzx r5, r29, r5
/* 80378694 003755D4  38 84 03 40 */	addi r4, r4, 0x340
/* 80378698 003755D8  38 00 00 01 */	li r0, 1
/* 8037869C 003755DC  20 A5 00 01 */	subfic r5, r5, 1
/* 803786A0 003755E0  7C BD 21 2E */	stwx r5, r29, r4
.L_803786A4:
/* 803786A4 003755E4  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 803786A8 003755E8  7C 86 20 2E */	lwzx r4, r6, r4
/* 803786AC 003755EC  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803786B0 003755F0  80 84 00 04 */	lwz r4, 4(r4)
/* 803786B4 003755F4  80 E4 00 00 */	lwz r7, 0(r4)
/* 803786B8 003755F8  7C 03 38 00 */	cmpw r3, r7
/* 803786BC 003755FC  41 82 00 34 */	beq .L_803786F0
/* 803786C0 00375600  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803786C4 00375604  28 04 00 00 */	cmplwi r4, 0
/* 803786C8 00375608  41 82 00 28 */	beq .L_803786F0
/* 803786CC 0037560C  54 63 10 3A */	slwi r3, r3, 2
/* 803786D0 00375610  54 E4 10 3A */	slwi r4, r7, 2
/* 803786D4 00375614  38 A3 03 40 */	addi r5, r3, 0x340
/* 803786D8 00375618  7C E3 3B 78 */	mr r3, r7
/* 803786DC 0037561C  7C BD 28 2E */	lwzx r5, r29, r5
/* 803786E0 00375620  38 84 03 40 */	addi r4, r4, 0x340
/* 803786E4 00375624  38 00 00 01 */	li r0, 1
/* 803786E8 00375628  20 A5 00 01 */	subfic r5, r5, 1
/* 803786EC 0037562C  7C BD 21 2E */	stwx r5, r29, r4
.L_803786F0:
/* 803786F0 00375630  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 803786F4 00375634  7C 86 20 2E */	lwzx r4, r6, r4
/* 803786F8 00375638  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803786FC 0037563C  80 84 00 08 */	lwz r4, 8(r4)
/* 80378700 00375640  80 E4 00 00 */	lwz r7, 0(r4)
/* 80378704 00375644  7C 03 38 00 */	cmpw r3, r7
/* 80378708 00375648  41 82 01 18 */	beq .L_80378820
/* 8037870C 0037564C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80378710 00375650  28 04 00 00 */	cmplwi r4, 0
/* 80378714 00375654  41 82 01 0C */	beq .L_80378820
/* 80378718 00375658  54 63 10 3A */	slwi r3, r3, 2
/* 8037871C 0037565C  54 E4 10 3A */	slwi r4, r7, 2
/* 80378720 00375660  38 A3 03 40 */	addi r5, r3, 0x340
/* 80378724 00375664  38 00 00 01 */	li r0, 1
/* 80378728 00375668  7C BD 28 2E */	lwzx r5, r29, r5
/* 8037872C 0037566C  38 84 03 40 */	addi r4, r4, 0x340
/* 80378730 00375670  20 A5 00 01 */	subfic r5, r5, 1
/* 80378734 00375674  7C BD 21 2E */	stwx r5, r29, r4
/* 80378738 00375678  48 00 00 E8 */	b .L_80378820
.L_8037873C:
/* 8037873C 0037567C  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 80378740 00375680  57 C6 10 3A */	slwi r6, r30, 2
/* 80378744 00375684  7C 86 20 2E */	lwzx r4, r6, r4
/* 80378748 00375688  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8037874C 0037568C  80 84 00 08 */	lwz r4, 8(r4)
/* 80378750 00375690  80 E4 00 00 */	lwz r7, 0(r4)
/* 80378754 00375694  7C 03 38 00 */	cmpw r3, r7
/* 80378758 00375698  41 82 00 34 */	beq .L_8037878C
/* 8037875C 0037569C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80378760 003756A0  28 04 00 00 */	cmplwi r4, 0
/* 80378764 003756A4  41 82 00 28 */	beq .L_8037878C
/* 80378768 003756A8  54 63 10 3A */	slwi r3, r3, 2
/* 8037876C 003756AC  54 E4 10 3A */	slwi r4, r7, 2
/* 80378770 003756B0  38 A3 03 40 */	addi r5, r3, 0x340
/* 80378774 003756B4  7C E3 3B 78 */	mr r3, r7
/* 80378778 003756B8  7C BD 28 2E */	lwzx r5, r29, r5
/* 8037877C 003756BC  38 84 03 40 */	addi r4, r4, 0x340
/* 80378780 003756C0  38 00 00 01 */	li r0, 1
/* 80378784 003756C4  20 A5 00 01 */	subfic r5, r5, 1
/* 80378788 003756C8  7C BD 21 2E */	stwx r5, r29, r4
.L_8037878C:
/* 8037878C 003756CC  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 80378790 003756D0  7C 86 20 2E */	lwzx r4, r6, r4
/* 80378794 003756D4  80 84 00 20 */	lwz r4, 0x20(r4)
/* 80378798 003756D8  80 84 00 04 */	lwz r4, 4(r4)
/* 8037879C 003756DC  80 E4 00 00 */	lwz r7, 0(r4)
/* 803787A0 003756E0  7C 03 38 00 */	cmpw r3, r7
/* 803787A4 003756E4  41 82 00 34 */	beq .L_803787D8
/* 803787A8 003756E8  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803787AC 003756EC  28 04 00 00 */	cmplwi r4, 0
/* 803787B0 003756F0  41 82 00 28 */	beq .L_803787D8
/* 803787B4 003756F4  54 63 10 3A */	slwi r3, r3, 2
/* 803787B8 003756F8  54 E4 10 3A */	slwi r4, r7, 2
/* 803787BC 003756FC  38 A3 03 40 */	addi r5, r3, 0x340
/* 803787C0 00375700  7C E3 3B 78 */	mr r3, r7
/* 803787C4 00375704  7C BD 28 2E */	lwzx r5, r29, r5
/* 803787C8 00375708  38 84 03 40 */	addi r4, r4, 0x340
/* 803787CC 0037570C  38 00 00 01 */	li r0, 1
/* 803787D0 00375710  20 A5 00 01 */	subfic r5, r5, 1
/* 803787D4 00375714  7C BD 21 2E */	stwx r5, r29, r4
.L_803787D8:
/* 803787D8 00375718  80 9D 00 88 */	lwz r4, 0x88(r29)
/* 803787DC 0037571C  7C 86 20 2E */	lwzx r4, r6, r4
/* 803787E0 00375720  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803787E4 00375724  80 84 00 00 */	lwz r4, 0(r4)
/* 803787E8 00375728  80 E4 00 00 */	lwz r7, 0(r4)
/* 803787EC 0037572C  7C 03 38 00 */	cmpw r3, r7
/* 803787F0 00375730  41 82 00 30 */	beq .L_80378820
/* 803787F4 00375734  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803787F8 00375738  28 04 00 00 */	cmplwi r4, 0
/* 803787FC 0037573C  41 82 00 24 */	beq .L_80378820
/* 80378800 00375740  54 63 10 3A */	slwi r3, r3, 2
/* 80378804 00375744  54 E4 10 3A */	slwi r4, r7, 2
/* 80378808 00375748  38 A3 03 40 */	addi r5, r3, 0x340
/* 8037880C 0037574C  38 00 00 01 */	li r0, 1
/* 80378810 00375750  7C BD 28 2E */	lwzx r5, r29, r5
/* 80378814 00375754  38 84 03 40 */	addi r4, r4, 0x340
/* 80378818 00375758  20 A5 00 01 */	subfic r5, r5, 1
/* 8037881C 0037575C  7C BD 21 2E */	stwx r5, r29, r4
.L_80378820:
/* 80378820 00375760  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80378824 00375764  41 82 00 E0 */	beq .L_80378904
/* 80378828 00375768  3B 80 00 00 */	li r28, 0
/* 8037882C 0037576C  3B E0 00 00 */	li r31, 0
/* 80378830 00375770  48 00 00 C4 */	b .L_803788F4
.L_80378834:
/* 80378834 00375774  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 80378838 00375778  7C 03 F8 2E */	lwzx r0, r3, r31
/* 8037883C 0037577C  28 00 00 00 */	cmplwi r0, 0
/* 80378840 00375780  41 82 01 70 */	beq .L_803789B0
/* 80378844 00375784  3B 60 00 00 */	li r27, 0
/* 80378848 00375788  3B C0 00 00 */	li r30, 0
.L_8037884C:
/* 8037884C 0037578C  80 1D 00 88 */	lwz r0, 0x88(r29)
/* 80378850 00375790  7F A3 EB 78 */	mr r3, r29
/* 80378854 00375794  81 9D 00 00 */	lwz r12, 0(r29)
/* 80378858 00375798  7C 9F 00 2E */	lwzx r4, r31, r0
/* 8037885C 0037579C  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 80378860 003757A0  80 84 00 20 */	lwz r4, 0x20(r4)
/* 80378864 003757A4  7C 84 F0 2E */	lwzx r4, r4, r30
/* 80378868 003757A8  83 44 00 04 */	lwz r26, 4(r4)
/* 8037886C 003757AC  80 84 00 00 */	lwz r4, 0(r4)
/* 80378870 003757B0  7D 89 03 A6 */	mtctr r12
/* 80378874 003757B4  4E 80 04 21 */	bctrl 
/* 80378878 003757B8  2C 03 00 00 */	cmpwi r3, 0
/* 8037887C 003757BC  40 82 00 34 */	bne .L_803788B0
/* 80378880 003757C0  80 AD 99 20 */	lwz r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378884 003757C4  7F 43 D3 78 */	mr r3, r26
/* 80378888 003757C8  80 0D 99 24 */	lwz r0, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 8037888C 003757CC  38 81 00 24 */	addi r4, r1, 0x24
/* 80378890 003757D0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80378894 003757D4  38 A1 00 20 */	addi r5, r1, 0x20
/* 80378898 003757D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037889C 003757DC  81 9A 00 00 */	lwz r12, 0(r26)
/* 803788A0 003757E0  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 803788A4 003757E4  7D 89 03 A6 */	mtctr r12
/* 803788A8 003757E8  4E 80 04 21 */	bctrl 
/* 803788AC 003757EC  48 00 00 30 */	b .L_803788DC
.L_803788B0:
/* 803788B0 003757F0  80 AD 99 28 */	lwz r5, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
/* 803788B4 003757F4  7F 43 D3 78 */	mr r3, r26
/* 803788B8 003757F8  80 0D 99 2C */	lwz r0, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
/* 803788BC 003757FC  38 81 00 1C */	addi r4, r1, 0x1c
/* 803788C0 00375800  90 A1 00 18 */	stw r5, 0x18(r1)
/* 803788C4 00375804  38 A1 00 18 */	addi r5, r1, 0x18
/* 803788C8 00375808  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803788CC 0037580C  81 9A 00 00 */	lwz r12, 0(r26)
/* 803788D0 00375810  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 803788D4 00375814  7D 89 03 A6 */	mtctr r12
/* 803788D8 00375818  4E 80 04 21 */	bctrl 
.L_803788DC:
/* 803788DC 0037581C  3B 7B 00 01 */	addi r27, r27, 1
/* 803788E0 00375820  3B DE 00 04 */	addi r30, r30, 4
/* 803788E4 00375824  2C 1B 00 03 */	cmpwi r27, 3
/* 803788E8 00375828  41 80 FF 64 */	blt .L_8037884C
/* 803788EC 0037582C  3B FF 00 04 */	addi r31, r31, 4
/* 803788F0 00375830  3B 9C 00 01 */	addi r28, r28, 1
.L_803788F4:
/* 803788F4 00375834  A8 1D 00 8E */	lha r0, 0x8e(r29)
/* 803788F8 00375838  7C 1C 00 00 */	cmpw r28, r0
/* 803788FC 0037583C  41 80 FF 38 */	blt .L_80378834
/* 80378900 00375840  48 00 00 B0 */	b .L_803789B0
.L_80378904:
/* 80378904 00375844  57 DF 10 3A */	slwi r31, r30, 2
/* 80378908 00375848  3B 40 00 00 */	li r26, 0
/* 8037890C 0037584C  3B C0 00 00 */	li r30, 0
.L_80378910:
/* 80378910 00375850  80 1D 00 88 */	lwz r0, 0x88(r29)
/* 80378914 00375854  7F A3 EB 78 */	mr r3, r29
/* 80378918 00375858  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037891C 0037585C  7C 9F 00 2E */	lwzx r4, r31, r0
/* 80378920 00375860  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 80378924 00375864  80 84 00 20 */	lwz r4, 0x20(r4)
/* 80378928 00375868  7C 84 F0 2E */	lwzx r4, r4, r30
/* 8037892C 0037586C  83 64 00 04 */	lwz r27, 4(r4)
/* 80378930 00375870  80 84 00 00 */	lwz r4, 0(r4)
/* 80378934 00375874  7D 89 03 A6 */	mtctr r12
/* 80378938 00375878  4E 80 04 21 */	bctrl 
/* 8037893C 0037587C  2C 03 00 00 */	cmpwi r3, 0
/* 80378940 00375880  40 82 00 34 */	bne .L_80378974
/* 80378944 00375884  80 AD 99 20 */	lwz r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378948 00375888  7F 63 DB 78 */	mr r3, r27
/* 8037894C 0037588C  80 0D 99 24 */	lwz r0, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378950 00375890  38 81 00 14 */	addi r4, r1, 0x14
/* 80378954 00375894  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80378958 00375898  38 A1 00 10 */	addi r5, r1, 0x10
/* 8037895C 0037589C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378960 003758A0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80378964 003758A4  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 80378968 003758A8  7D 89 03 A6 */	mtctr r12
/* 8037896C 003758AC  4E 80 04 21 */	bctrl 
/* 80378970 003758B0  48 00 00 30 */	b .L_803789A0
.L_80378974:
/* 80378974 003758B4  80 AD 99 28 */	lwz r5, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378978 003758B8  7F 63 DB 78 */	mr r3, r27
/* 8037897C 003758BC  80 0D 99 2C */	lwz r0, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378980 003758C0  38 81 00 0C */	addi r4, r1, 0xc
/* 80378984 003758C4  90 A1 00 08 */	stw r5, 8(r1)
/* 80378988 003758C8  38 A1 00 08 */	addi r5, r1, 8
/* 8037898C 003758CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80378990 003758D0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80378994 003758D4  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 80378998 003758D8  7D 89 03 A6 */	mtctr r12
/* 8037899C 003758DC  4E 80 04 21 */	bctrl 
.L_803789A0:
/* 803789A0 003758E0  3B 5A 00 01 */	addi r26, r26, 1
/* 803789A4 003758E4  3B DE 00 04 */	addi r30, r30, 4
/* 803789A8 003758E8  2C 1A 00 03 */	cmpwi r26, 3
/* 803789AC 003758EC  41 80 FF 64 */	blt .L_80378910
.L_803789B0:
/* 803789B0 003758F0  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 803789B4 003758F4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803789B8 003758F8  7C 08 03 A6 */	mtlr r0
/* 803789BC 003758FC  38 21 00 40 */	addi r1, r1, 0x40
/* 803789C0 00375900  4E 80 00 20 */	blr 
.endfn setShortenIndex__Q28Morimura10TItemZukanFiib

.fn getCategoryColorId__Q28Morimura10TItemZukanFi, weak
/* 803789C4 00375904  54 80 10 3A */	slwi r0, r4, 2
/* 803789C8 00375908  7C 63 02 14 */	add r3, r3, r0
/* 803789CC 0037590C  80 63 03 40 */	lwz r3, 0x340(r3)
/* 803789D0 00375910  4E 80 00 20 */	blr 
.endfn getCategoryColorId__Q28Morimura10TItemZukanFi

.fn doUpdateOut__Q28Morimura10TItemZukanFv, global
/* 803789D4 00375914  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 803789D8 00375918  7C 08 02 A6 */	mflr r0
/* 803789DC 0037591C  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 803789E0 00375920  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 803789E4 00375924  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 803789E8 00375928  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 803789EC 0037592C  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 803789F0 00375930  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 803789F4 00375934  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 803789F8 00375938  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 803789FC 0037593C  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 80378A00 00375940  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 80378A04 00375944  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 80378A08 00375948  DB 41 00 50 */	stfd f26, 0x50(r1)
/* 80378A0C 0037594C  F3 41 00 58 */	psq_st f26, 88(r1), 0, qr0
/* 80378A10 00375950  DB 21 00 40 */	stfd f25, 0x40(r1)
/* 80378A14 00375954  F3 21 00 48 */	psq_st f25, 72(r1), 0, qr0
/* 80378A18 00375958  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 80378A1C 0037595C  7C 7F 1B 78 */	mr r31, r3
/* 80378A20 00375960  4B FF B2 15 */	bl doUpdateOut__Q28Morimura10TZukanBaseFv
/* 80378A24 00375964  88 1F 02 41 */	lbz r0, 0x241(r31)
/* 80378A28 00375968  28 00 00 00 */	cmplwi r0, 0
/* 80378A2C 0037596C  41 82 01 80 */	beq .L_80378BAC
/* 80378A30 00375970  C3 E2 07 D8 */	lfs f31, lbl_8051EB38@sda21(r2)
/* 80378A34 00375974  3B 60 00 00 */	li r27, 0
/* 80378A38 00375978  CB 62 08 30 */	lfd f27, lbl_8051EB90@sda21(r2)
/* 80378A3C 0037597C  3B 80 00 00 */	li r28, 0
/* 80378A40 00375980  C3 82 08 10 */	lfs f28, lbl_8051EB70@sda21(r2)
/* 80378A44 00375984  3F C0 43 30 */	lis r30, 0x4330
/* 80378A48 00375988  C3 A2 07 C0 */	lfs f29, lbl_8051EB20@sda21(r2)
/* 80378A4C 0037598C  C3 C2 07 C4 */	lfs f30, lbl_8051EB24@sda21(r2)
/* 80378A50 00375990  48 00 01 50 */	b .L_80378BA0
.L_80378A54:
/* 80378A54 00375994  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80378A58 00375998  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80378A5C 0037599C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80378A60 003759A0  90 01 00 08 */	stw r0, 8(r1)
/* 80378A64 003759A4  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80378A68 003759A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378A6C 003759AC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80378A70 003759B0  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80378A74 003759B4  EC 00 E0 24 */	fdivs f0, f0, f28
/* 80378A78 003759B8  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80378A7C 003759BC  40 80 00 08 */	bge .L_80378A84
/* 80378A80 003759C0  FC 00 E8 90 */	fmr f0, f29
.L_80378A84:
/* 80378A84 003759C4  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80378A88 003759C8  40 81 00 08 */	ble .L_80378A90
/* 80378A8C 003759CC  FC 00 F0 90 */	fmr f0, f30
.L_80378A90:
/* 80378A90 003759D0  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80378A94 003759D4  EC 3E 00 28 */	fsubs f1, f30, f0
/* 80378A98 003759D8  40 80 00 08 */	bge .L_80378AA0
/* 80378A9C 003759DC  FC 00 F8 90 */	fmr f0, f31
.L_80378AA0:
/* 80378AA0 003759E0  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80378AA4 003759E4  40 80 00 08 */	bge .L_80378AAC
/* 80378AA8 003759E8  FC 20 F8 90 */	fmr f1, f31
.L_80378AAC:
/* 80378AAC 003759EC  EF 5C 00 32 */	fmuls f26, f28, f0
/* 80378AB0 003759F0  3B 40 00 00 */	li r26, 0
/* 80378AB4 003759F4  EF 3C 00 72 */	fmuls f25, f28, f1
/* 80378AB8 003759F8  3B A0 00 00 */	li r29, 0
.L_80378ABC:
/* 80378ABC 003759FC  80 1F 00 88 */	lwz r0, 0x88(r31)
/* 80378AC0 00375A00  7C 7C 00 2E */	lwzx r3, r28, r0
/* 80378AC4 00375A04  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80378AC8 00375A08  7C 63 E8 2E */	lwzx r3, r3, r29
/* 80378ACC 00375A0C  80 83 00 00 */	lwz r4, 0(r3)
/* 80378AD0 00375A10  83 23 00 04 */	lwz r25, 4(r3)
/* 80378AD4 00375A14  54 83 10 3A */	slwi r3, r4, 2
/* 80378AD8 00375A18  38 03 02 78 */	addi r0, r3, 0x278
/* 80378ADC 00375A1C  7C 1F 00 2E */	lwzx r0, r31, r0
/* 80378AE0 00375A20  2C 00 00 00 */	cmpwi r0, 0
/* 80378AE4 00375A24  41 82 00 34 */	beq .L_80378B18
/* 80378AE8 00375A28  C0 22 08 10 */	lfs f1, lbl_8051EB70@sda21(r2)
/* 80378AEC 00375A2C  7F 23 CB 78 */	mr r3, r25
/* 80378AF0 00375A30  C0 0D 85 B0 */	lfs f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
/* 80378AF4 00375A34  81 99 00 00 */	lwz r12, 0(r25)
/* 80378AF8 00375A38  EC 01 00 32 */	fmuls f0, f1, f0
/* 80378AFC 00375A3C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80378B00 00375A40  FC 00 00 1E */	fctiwz f0, f0
/* 80378B04 00375A44  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80378B08 00375A48  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80378B0C 00375A4C  7D 89 03 A6 */	mtctr r12
/* 80378B10 00375A50  4E 80 04 21 */	bctrl 
/* 80378B14 00375A54  48 00 00 74 */	b .L_80378B88
.L_80378B18:
/* 80378B18 00375A58  81 9F 00 00 */	lwz r12, 0(r31)
/* 80378B1C 00375A5C  7F E3 FB 78 */	mr r3, r31
/* 80378B20 00375A60  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 80378B24 00375A64  7D 89 03 A6 */	mtctr r12
/* 80378B28 00375A68  4E 80 04 21 */	bctrl 
/* 80378B2C 00375A6C  2C 03 00 00 */	cmpwi r3, 0
/* 80378B30 00375A70  40 82 00 30 */	bne .L_80378B60
/* 80378B34 00375A74  C0 0D 85 B0 */	lfs f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
/* 80378B38 00375A78  7F 23 CB 78 */	mr r3, r25
/* 80378B3C 00375A7C  81 99 00 00 */	lwz r12, 0(r25)
/* 80378B40 00375A80  EC 1A 00 32 */	fmuls f0, f26, f0
/* 80378B44 00375A84  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80378B48 00375A88  FC 00 00 1E */	fctiwz f0, f0
/* 80378B4C 00375A8C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80378B50 00375A90  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80378B54 00375A94  7D 89 03 A6 */	mtctr r12
/* 80378B58 00375A98  4E 80 04 21 */	bctrl 
/* 80378B5C 00375A9C  48 00 00 2C */	b .L_80378B88
.L_80378B60:
/* 80378B60 00375AA0  C0 0D 85 B0 */	lfs f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
/* 80378B64 00375AA4  7F 23 CB 78 */	mr r3, r25
/* 80378B68 00375AA8  81 99 00 00 */	lwz r12, 0(r25)
/* 80378B6C 00375AAC  EC 19 00 32 */	fmuls f0, f25, f0
/* 80378B70 00375AB0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80378B74 00375AB4  FC 00 00 1E */	fctiwz f0, f0
/* 80378B78 00375AB8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80378B7C 00375ABC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80378B80 00375AC0  7D 89 03 A6 */	mtctr r12
/* 80378B84 00375AC4  4E 80 04 21 */	bctrl 
.L_80378B88:
/* 80378B88 00375AC8  3B 5A 00 01 */	addi r26, r26, 1
/* 80378B8C 00375ACC  3B BD 00 04 */	addi r29, r29, 4
/* 80378B90 00375AD0  2C 1A 00 03 */	cmpwi r26, 3
/* 80378B94 00375AD4  41 80 FF 28 */	blt .L_80378ABC
/* 80378B98 00375AD8  3B 9C 00 04 */	addi r28, r28, 4
/* 80378B9C 00375ADC  3B 7B 00 01 */	addi r27, r27, 1
.L_80378BA0:
/* 80378BA0 00375AE0  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 80378BA4 00375AE4  7C 1B 00 00 */	cmpw r27, r0
/* 80378BA8 00375AE8  41 80 FE AC */	blt .L_80378A54
.L_80378BAC:
/* 80378BAC 00375AEC  88 1F 02 44 */	lbz r0, 0x244(r31)
/* 80378BB0 00375AF0  28 00 00 00 */	cmplwi r0, 0
/* 80378BB4 00375AF4  41 82 00 A8 */	beq .L_80378C5C
/* 80378BB8 00375AF8  80 1F 03 AC */	lwz r0, 0x3ac(r31)
/* 80378BBC 00375AFC  2C 00 00 01 */	cmpwi r0, 1
/* 80378BC0 00375B00  40 82 00 2C */	bne .L_80378BEC
/* 80378BC4 00375B04  C0 5F 03 B8 */	lfs f2, 0x3b8(r31)
/* 80378BC8 00375B08  C0 22 07 D8 */	lfs f1, lbl_8051EB38@sda21(r2)
/* 80378BCC 00375B0C  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80378BD0 00375B10  EC 22 08 28 */	fsubs f1, f2, f1
/* 80378BD4 00375B14  D0 3F 03 B8 */	stfs f1, 0x3b8(r31)
/* 80378BD8 00375B18  C0 3F 03 B8 */	lfs f1, 0x3b8(r31)
/* 80378BDC 00375B1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80378BE0 00375B20  40 80 00 48 */	bge .L_80378C28
/* 80378BE4 00375B24  D0 1F 03 B8 */	stfs f0, 0x3b8(r31)
/* 80378BE8 00375B28  48 00 00 40 */	b .L_80378C28
.L_80378BEC:
/* 80378BEC 00375B2C  80 7F 03 A8 */	lwz r3, 0x3a8(r31)
/* 80378BF0 00375B30  3C 00 43 30 */	lis r0, 0x4330
/* 80378BF4 00375B34  90 01 00 10 */	stw r0, 0x10(r1)
/* 80378BF8 00375B38  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80378BFC 00375B3C  C8 22 08 20 */	lfd f1, lbl_8051EB80@sda21(r2)
/* 80378C00 00375B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378C04 00375B44  C0 42 07 C0 */	lfs f2, lbl_8051EB20@sda21(r2)
/* 80378C08 00375B48  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80378C0C 00375B4C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80378C10 00375B50  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80378C14 00375B54  40 82 00 0C */	bne .L_80378C20
/* 80378C18 00375B58  D0 5F 03 B8 */	stfs f2, 0x3b8(r31)
/* 80378C1C 00375B5C  48 00 00 0C */	b .L_80378C28
.L_80378C20:
/* 80378C20 00375B60  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 80378C24 00375B64  D0 1F 03 B8 */	stfs f0, 0x3b8(r31)
.L_80378C28:
/* 80378C28 00375B68  C0 1F 03 B8 */	lfs f0, 0x3b8(r31)
/* 80378C2C 00375B6C  C0 22 08 10 */	lfs f1, lbl_8051EB70@sda21(r2)
/* 80378C30 00375B70  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 80378C34 00375B74  C0 1F 03 B8 */	lfs f0, 0x3b8(r31)
/* 80378C38 00375B78  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 80378C3C 00375B7C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80378C40 00375B80  81 83 00 00 */	lwz r12, 0(r3)
/* 80378C44 00375B84  FC 00 00 1E */	fctiwz f0, f0
/* 80378C48 00375B88  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80378C4C 00375B8C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80378C50 00375B90  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80378C54 00375B94  7D 89 03 A6 */	mtctr r12
/* 80378C58 00375B98  4E 80 04 21 */	bctrl 
.L_80378C5C:
/* 80378C5C 00375B9C  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80378C60 00375BA0  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80378C64 00375BA4  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 80378C68 00375BA8  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 80378C6C 00375BAC  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 80378C70 00375BB0  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 80378C74 00375BB4  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 80378C78 00375BB8  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 80378C7C 00375BBC  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 80378C80 00375BC0  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 80378C84 00375BC4  E3 41 00 58 */	psq_l f26, 88(r1), 0, qr0
/* 80378C88 00375BC8  CB 41 00 50 */	lfd f26, 0x50(r1)
/* 80378C8C 00375BCC  E3 21 00 48 */	psq_l f25, 72(r1), 0, qr0
/* 80378C90 00375BD0  CB 21 00 40 */	lfd f25, 0x40(r1)
/* 80378C94 00375BD4  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 80378C98 00375BD8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80378C9C 00375BDC  7C 08 03 A6 */	mtlr r0
/* 80378CA0 00375BE0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80378CA4 00375BE4  4E 80 00 20 */	blr 
.endfn doUpdateOut__Q28Morimura10TItemZukanFv

.fn getUpdateIndex__Q28Morimura10TItemZukanFRib, global
/* 80378CA8 00375BE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80378CAC 00375BEC  7C 08 02 A6 */	mflr r0
/* 80378CB0 00375BF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378CB4 00375BF4  88 03 02 40 */	lbz r0, 0x240(r3)
/* 80378CB8 00375BF8  28 00 00 00 */	cmplwi r0, 0
/* 80378CBC 00375BFC  41 82 00 98 */	beq .L_80378D54
/* 80378CC0 00375C00  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80378CC4 00375C04  41 82 00 30 */	beq .L_80378CF4
/* 80378CC8 00375C08  80 A4 00 00 */	lwz r5, 0(r4)
/* 80378CCC 00375C0C  80 03 00 9C */	lwz r0, 0x9c(r3)
/* 80378CD0 00375C10  7C 05 02 14 */	add r0, r5, r0
/* 80378CD4 00375C14  90 04 00 00 */	stw r0, 0(r4)
/* 80378CD8 00375C18  80 A4 00 00 */	lwz r5, 0(r4)
/* 80378CDC 00375C1C  80 03 02 30 */	lwz r0, 0x230(r3)
/* 80378CE0 00375C20  7C 05 00 00 */	cmpw r5, r0
/* 80378CE4 00375C24  41 80 00 74 */	blt .L_80378D58
/* 80378CE8 00375C28  38 00 00 00 */	li r0, 0
/* 80378CEC 00375C2C  90 04 00 00 */	stw r0, 0(r4)
/* 80378CF0 00375C30  48 00 00 68 */	b .L_80378D58
.L_80378CF4:
/* 80378CF4 00375C34  80 A3 00 9C */	lwz r5, 0x9c(r3)
/* 80378CF8 00375C38  80 04 00 00 */	lwz r0, 0(r4)
/* 80378CFC 00375C3C  7C 05 00 50 */	subf r0, r5, r0
/* 80378D00 00375C40  90 04 00 00 */	stw r0, 0(r4)
/* 80378D04 00375C44  80 04 00 00 */	lwz r0, 0(r4)
/* 80378D08 00375C48  2C 00 00 00 */	cmpwi r0, 0
/* 80378D0C 00375C4C  40 80 00 4C */	bge .L_80378D58
/* 80378D10 00375C50  80 A3 02 30 */	lwz r5, 0x230(r3)
/* 80378D14 00375C54  2C 05 00 03 */	cmpwi r5, 3
/* 80378D18 00375C58  40 80 00 0C */	bge .L_80378D24
/* 80378D1C 00375C5C  7C A0 2B 78 */	mr r0, r5
/* 80378D20 00375C60  48 00 00 28 */	b .L_80378D48
.L_80378D24:
/* 80378D24 00375C64  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80378D28 00375C68  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 80378D2C 00375C6C  7C 60 28 96 */	mulhw r3, r0, r5
/* 80378D30 00375C70  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80378D34 00375C74  7C 03 02 14 */	add r0, r3, r0
/* 80378D38 00375C78  1C 00 00 03 */	mulli r0, r0, 3
/* 80378D3C 00375C7C  7C 00 28 51 */	subf. r0, r0, r5
/* 80378D40 00375C80  40 82 00 08 */	bne .L_80378D48
/* 80378D44 00375C84  38 00 00 03 */	li r0, 3
.L_80378D48:
/* 80378D48 00375C88  7C 00 28 50 */	subf r0, r0, r5
/* 80378D4C 00375C8C  90 04 00 00 */	stw r0, 0(r4)
/* 80378D50 00375C90  48 00 00 08 */	b .L_80378D58
.L_80378D54:
/* 80378D54 00375C94  48 02 A4 1D */	bl getUpdateIndex__Q28Morimura11TScrollListFRib
.L_80378D58:
/* 80378D58 00375C98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378D5C 00375C9C  7C 08 03 A6 */	mtlr r0
/* 80378D60 00375CA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80378D64 00375CA4  4E 80 00 20 */	blr 
.endfn getUpdateIndex__Q28Morimura10TItemZukanFRib

.fn getNameID__Q28Morimura10TItemZukanFi, global
/* 80378D68 00375CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80378D6C 00375CAC  7C 08 02 A6 */	mflr r0
/* 80378D70 00375CB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378D74 00375CB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80378D78 00375CB8  7C 7F 1B 78 */	mr r31, r3
/* 80378D7C 00375CBC  7C 83 23 78 */	mr r3, r4
/* 80378D80 00375CC0  4B EA F4 85 */	bl getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
/* 80378D84 00375CC4  7C 64 1B 78 */	mr r4, r3
/* 80378D88 00375CC8  80 7F 01 E4 */	lwz r3, 0x1e4(r31)
/* 80378D8C 00375CCC  48 02 84 81 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 80378D90 00375CD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378D94 00375CD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80378D98 00375CD8  7C 08 03 A6 */	mtlr r0
/* 80378D9C 00375CDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80378DA0 00375CE0  4E 80 00 20 */	blr 
.endfn getNameID__Q28Morimura10TItemZukanFi

.fn getXMsgID__Q28Morimura10TItemZukanFi, global
/* 80378DA4 00375CE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80378DA8 00375CE8  7C 08 02 A6 */	mflr r0
/* 80378DAC 00375CEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378DB0 00375CF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80378DB4 00375CF4  7C 7F 1B 78 */	mr r31, r3
/* 80378DB8 00375CF8  7C 83 23 78 */	mr r3, r4
/* 80378DBC 00375CFC  4B EA F4 49 */	bl getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
/* 80378DC0 00375D00  7C 64 1B 78 */	mr r4, r3
/* 80378DC4 00375D04  80 7F 01 E8 */	lwz r3, 0x1e8(r31)
/* 80378DC8 00375D08  48 02 84 45 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 80378DCC 00375D0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378DD0 00375D10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80378DD4 00375D14  7C 08 03 A6 */	mtlr r0
/* 80378DD8 00375D18  38 21 00 10 */	addi r1, r1, 0x10
/* 80378DDC 00375D1C  4E 80 00 20 */	blr 
.endfn getXMsgID__Q28Morimura10TItemZukanFi

.fn getYMsgID__Q28Morimura10TItemZukanFi, global
/* 80378DE0 00375D20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80378DE4 00375D24  7C 08 02 A6 */	mflr r0
/* 80378DE8 00375D28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378DEC 00375D2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80378DF0 00375D30  7C 7F 1B 78 */	mr r31, r3
/* 80378DF4 00375D34  7C 83 23 78 */	mr r3, r4
/* 80378DF8 00375D38  4B EA F4 0D */	bl getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
/* 80378DFC 00375D3C  7C 64 1B 78 */	mr r4, r3
/* 80378E00 00375D40  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 80378E04 00375D44  48 02 84 09 */	bl getMsgID__Q28Morimura13TOffsetMsgSetFi
/* 80378E08 00375D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378E0C 00375D4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80378E10 00375D50  7C 08 03 A6 */	mtlr r0
/* 80378E14 00375D54  38 21 00 10 */	addi r1, r1, 0x10
/* 80378E18 00375D58  4E 80 00 20 */	blr 
.endfn getYMsgID__Q28Morimura10TItemZukanFi

.fn getModelIndex__Q28Morimura10TItemZukanFi, global
/* 80378E1C 00375D5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80378E20 00375D60  7C 08 02 A6 */	mflr r0
/* 80378E24 00375D64  2C 04 00 00 */	cmpwi r4, 0
/* 80378E28 00375D68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378E2C 00375D6C  40 80 00 0C */	bge .L_80378E38
/* 80378E30 00375D70  38 60 FF FF */	li r3, -1
/* 80378E34 00375D74  48 00 00 0C */	b .L_80378E40
.L_80378E38:
/* 80378E38 00375D78  7C 83 23 78 */	mr r3, r4
/* 80378E3C 00375D7C  4B EA F3 C9 */	bl getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
.L_80378E40:
/* 80378E40 00375D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378E44 00375D84  7C 08 03 A6 */	mtlr r0
/* 80378E48 00375D88  38 21 00 10 */	addi r1, r1, 0x10
/* 80378E4C 00375D8C  4E 80 00 20 */	blr 
.endfn getModelIndex__Q28Morimura10TItemZukanFi

.fn getIdMax__Q28Morimura10TItemZukanFv, global
/* 80378E50 00375D90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80378E54 00375D94  7C 08 02 A6 */	mflr r0
/* 80378E58 00375D98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80378E5C 00375D9C  4B EA F2 ED */	bl getDictionaryNum__Q34Game10PelletList3MgrFv
/* 80378E60 00375DA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80378E64 00375DA4  7C 08 03 A6 */	mtlr r0
/* 80378E68 00375DA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80378E6C 00375DAC  4E 80 00 20 */	blr 
.endfn getIdMax__Q28Morimura10TItemZukanFv

.if version == 0
.fn doCreate__Q28Morimura10TItemZukanFP10JKRArchive, global
/* 80378E70 00375DB0  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 80378E74 00375DB4  7C 08 02 A6 */	mflr r0
/* 80378E78 00375DB8  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80378E7C 00375DBC  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80378E80 00375DC0  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80378E84 00375DC4  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80378E88 00375DC8  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80378E8C 00375DCC  BE C1 00 88 */	stmw r22, 0x88(r1)
/* 80378E90 00375DD0  3C A0 80 51 */	lis r5, mScrollParm__Q28Morimura10TZukanBase@ha
/* 80378E94 00375DD4  C0 82 08 38 */	lfs f4, lbl_8051EB98@sda21(r2)
/* 80378E98 00375DD8  39 80 00 00 */	li r12, 0
/* 80378E9C 00375DDC  39 4D 99 20 */	addi r10, r13, mCategoryColor0w__Q28Morimura10TZukanBase@sda21
/* 80378EA0 00375DE0  3B 05 40 1C */	addi r24, r5, mScrollParm__Q28Morimura10TZukanBase@l
/* 80378EA4 00375DE4  C0 62 08 58 */	lfs f3, lbl_8051EBB8@sda21(r2)
/* 80378EA8 00375DE8  C0 42 08 5C */	lfs f2, lbl_8051EBBC@sda21(r2)
/* 80378EAC 00375DEC  39 60 00 5F */	li r11, 0x5f
/* 80378EB0 00375DF0  C0 22 08 74 */	lfs f1, lbl_8051EBD4@sda21(r2)
/* 80378EB4 00375DF4  39 20 00 E6 */	li r9, 0xe6
/* 80378EB8 00375DF8  39 0D 99 24 */	addi r8, r13, mCategoryColor0b__Q28Morimura10TZukanBase@sda21
/* 80378EBC 00375DFC  C0 02 07 EC */	lfs f0, lbl_8051EB4C@sda21(r2)
/* 80378EC0 00375E00  38 ED 99 28 */	addi r7, r13, mCategoryColor1w__Q28Morimura10TZukanBase@sda21
/* 80378EC4 00375E04  38 C0 00 FF */	li r6, 0xff
/* 80378EC8 00375E08  38 AD 99 2C */	addi r5, r13, mCategoryColor1b__Q28Morimura10TZukanBase@sda21
/* 80378ECC 00375E0C  38 00 00 80 */	li r0, 0x80
/* 80378ED0 00375E10  3F 20 80 49 */	lis r25, lbl_80492520@ha
/* 80378ED4 00375E14  7C 7F 1B 78 */	mr r31, r3
/* 80378ED8 00375E18  D0 98 00 00 */	stfs f4, 0(r24)
/* 80378EDC 00375E1C  7C 9D 23 78 */	mr r29, r4
/* 80378EE0 00375E20  3B D9 25 20 */	addi r30, r25, lbl_80492520@l
/* 80378EE4 00375E24  38 60 00 38 */	li r3, 0x38
/* 80378EE8 00375E28  D0 78 00 08 */	stfs f3, 8(r24)
/* 80378EEC 00375E2C  D0 58 00 04 */	stfs f2, 4(r24)
/* 80378EF0 00375E30  D0 38 00 0C */	stfs f1, 0xc(r24)
/* 80378EF4 00375E34  D0 18 00 10 */	stfs f0, 0x10(r24)
/* 80378EF8 00375E38  99 8D 99 20 */	stb r12, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378EFC 00375E3C  99 6A 00 01 */	stb r11, 1(r10)
/* 80378F00 00375E40  99 8A 00 02 */	stb r12, 2(r10)
/* 80378F04 00375E44  99 2D 99 24 */	stb r9, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F08 00375E48  99 28 00 01 */	stb r9, 1(r8)
/* 80378F0C 00375E4C  99 88 00 02 */	stb r12, 2(r8)
/* 80378F10 00375E50  99 8D 99 28 */	stb r12, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F14 00375E54  99 87 00 01 */	stb r12, 1(r7)
/* 80378F18 00375E58  98 C7 00 02 */	stb r6, 2(r7)
/* 80378F1C 00375E5C  99 8D 99 2C */	stb r12, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F20 00375E60  98 05 00 01 */	stb r0, 1(r5)
/* 80378F24 00375E64  98 C5 00 02 */	stb r6, 2(r5)
/* 80378F28 00375E68  4B CA AF 7D */	bl __nw__FUl
/* 80378F2C 00375E6C  7C 60 1B 79 */	or. r0, r3, r3
/* 80378F30 00375E70  41 82 00 24 */	beq .L_80378F54
/* 80378F34 00375E74  3C A0 75 6D */	lis r5, 0x756D6D79@ha
/* 80378F38 00375E78  38 80 00 00 */	li r4, 0
/* 80378F3C 00375E7C  38 C5 6D 79 */	addi r6, r5, 0x756D6D79@l
/* 80378F40 00375E80  38 A0 00 64 */	li r5, 0x64
/* 80378F44 00375E84  38 E0 00 03 */	li r7, 3
/* 80378F48 00375E88  39 00 00 32 */	li r8, 0x32
/* 80378F4C 00375E8C  48 09 2F 25 */	bl __ct__Q32kh6Screen14khUtilColorAnmFPQ29P2DScreen3MgrUxii
/* 80378F50 00375E90  7C 60 1B 78 */	mr r0, r3
.L_80378F54:
/* 80378F54 00375E94  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 80378F58 00375E98  38 00 00 01 */	li r0, 1
/* 80378F5C 00375E9C  7F E3 FB 78 */	mr r3, r31
/* 80378F60 00375EA0  80 AD 99 20 */	lwz r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F64 00375EA4  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378F68 00375EA8  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80378F6C 00375EAC  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80378F70 00375EB0  88 A1 00 18 */	lbz r5, 0x18(r1)
/* 80378F74 00375EB4  88 81 00 19 */	lbz r4, 0x19(r1)
/* 80378F78 00375EB8  98 A6 00 00 */	stb r5, 0(r6)
/* 80378F7C 00375EBC  88 A1 00 1A */	lbz r5, 0x1a(r1)
/* 80378F80 00375EC0  98 86 00 01 */	stb r4, 1(r6)
/* 80378F84 00375EC4  88 81 00 1B */	lbz r4, 0x1b(r1)
/* 80378F88 00375EC8  98 A6 00 02 */	stb r5, 2(r6)
/* 80378F8C 00375ECC  98 86 00 03 */	stb r4, 3(r6)
/* 80378F90 00375ED0  80 AD 99 24 */	lwz r5, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F94 00375ED4  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378F98 00375ED8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80378F9C 00375EDC  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80378FA0 00375EE0  88 A1 00 14 */	lbz r5, 0x14(r1)
/* 80378FA4 00375EE4  88 81 00 15 */	lbz r4, 0x15(r1)
/* 80378FA8 00375EE8  98 A6 00 04 */	stb r5, 4(r6)
/* 80378FAC 00375EEC  88 A1 00 16 */	lbz r5, 0x16(r1)
/* 80378FB0 00375EF0  98 86 00 05 */	stb r4, 5(r6)
/* 80378FB4 00375EF4  88 81 00 17 */	lbz r4, 0x17(r1)
/* 80378FB8 00375EF8  98 A6 00 06 */	stb r5, 6(r6)
/* 80378FBC 00375EFC  98 86 00 07 */	stb r4, 7(r6)
/* 80378FC0 00375F00  80 AD 99 20 */	lwz r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378FC4 00375F04  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378FC8 00375F08  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80378FCC 00375F0C  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80378FD0 00375F10  88 A1 00 10 */	lbz r5, 0x10(r1)
/* 80378FD4 00375F14  88 81 00 11 */	lbz r4, 0x11(r1)
/* 80378FD8 00375F18  98 A6 00 08 */	stb r5, 8(r6)
/* 80378FDC 00375F1C  88 A1 00 12 */	lbz r5, 0x12(r1)
/* 80378FE0 00375F20  98 86 00 09 */	stb r4, 9(r6)
/* 80378FE4 00375F24  88 81 00 13 */	lbz r4, 0x13(r1)
/* 80378FE8 00375F28  98 A6 00 0A */	stb r5, 0xa(r6)
/* 80378FEC 00375F2C  98 86 00 0B */	stb r4, 0xb(r6)
/* 80378FF0 00375F30  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378FF4 00375F34  98 04 00 34 */	stb r0, 0x34(r4)
/* 80378FF8 00375F38  93 BF 00 78 */	stw r29, 0x78(r31)
/* 80378FFC 00375F3C  48 0D AF AD */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80379000 00375F40  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 80379004 00375F44  3C C0 49 54 */	lis r6, 0x4954454D@ha
/* 80379008 00375F48  7C 78 1B 78 */	mr r24, r3
/* 8037900C 00375F4C  38 A0 00 44 */	li r5, 0x44
/* 80379010 00375F50  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 80379014 00375F54  38 C6 45 4D */	addi r6, r6, 0x4954454D@l
/* 80379018 00375F58  4B F9 63 05 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8037901C 00375F5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80379020 00375F60  41 82 00 0C */	beq .L_8037902C
/* 80379024 00375F64  93 1F 02 48 */	stw r24, 0x248(r31)
/* 80379028 00375F68  48 00 00 0C */	b .L_80379034
.L_8037902C:
/* 8037902C 00375F6C  38 00 00 01 */	li r0, 1
/* 80379030 00375F70  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_80379034:
/* 80379034 00375F74  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80379038 00375F78  28 00 00 00 */	cmplwi r0, 0
/* 8037903C 00375F7C  41 82 02 28 */	beq .L_80379264
/* 80379040 00375F80  80 8D 99 30 */	lwz r4, mDebugHeapParent__Q28Morimura10TZukanBase@sda21(r13)
/* 80379044 00375F84  28 04 00 00 */	cmplwi r4, 0
/* 80379048 00375F88  41 82 02 04 */	beq .L_8037924C
/* 8037904C 00375F8C  3C 60 00 10 */	lis r3, 0x10
/* 80379050 00375F90  38 A0 00 01 */	li r5, 1
/* 80379054 00375F94  4B CA 6E 75 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80379058 00375F98  28 03 00 00 */	cmplwi r3, 0
/* 8037905C 00375F9C  90 6D 99 34 */	stw r3, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80379060 00375FA0  40 82 00 18 */	bne .L_80379078
/* 80379064 00375FA4  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379068 00375FA8  38 BE 00 18 */	addi r5, r30, 0x18
/* 8037906C 00375FAC  38 80 10 36 */	li r4, 0x103d
/* 80379070 00375FB0  4C C6 31 82 */	crclr 6
/* 80379074 00375FB4  4B CB 15 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379078:
/* 80379078 00375FB8  80 8D 99 34 */	lwz r4, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 8037907C 00375FBC  38 60 00 20 */	li r3, 0x20
/* 80379080 00375FC0  38 A0 00 00 */	li r5, 0
/* 80379084 00375FC4  4B CA AE BD */	bl __nw__FUlP7JKRHeapi
/* 80379088 00375FC8  28 03 00 00 */	cmplwi r3, 0
/* 8037908C 00375FCC  41 82 00 48 */	beq .L_803790D4
/* 80379090 00375FD0  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80379094 00375FD4  3C A0 80 4C */	lis r5, __vt__Q28Morimura19DispMemberZukanBase@ha
/* 80379098 00375FD8  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8037909C 00375FDC  3C 80 80 4C */	lis r4, __vt__Q28Morimura19DispMemberZukanItem@ha
/* 803790A0 00375FE0  90 03 00 00 */	stw r0, 0(r3)
/* 803790A4 00375FE4  38 C0 00 00 */	li r6, 0
/* 803790A8 00375FE8  38 A5 0B 44 */	addi r5, r5, __vt__Q28Morimura19DispMemberZukanBase@l
/* 803790AC 00375FEC  38 04 0B 14 */	addi r0, r4, __vt__Q28Morimura19DispMemberZukanItem@l
/* 803790B0 00375FF0  90 C3 00 04 */	stw r6, 4(r3)
/* 803790B4 00375FF4  90 A3 00 00 */	stw r5, 0(r3)
/* 803790B8 00375FF8  90 C3 00 08 */	stw r6, 8(r3)
/* 803790BC 00375FFC  90 C3 00 0C */	stw r6, 0xc(r3)
/* 803790C0 00376000  90 C3 00 10 */	stw r6, 0x10(r3)
/* 803790C4 00376004  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803790C8 00376008  90 C3 00 18 */	stw r6, 0x18(r3)
/* 803790CC 0037600C  90 C3 00 1C */	stw r6, 0x1c(r3)
/* 803790D0 00376010  90 03 00 00 */	stw r0, 0(r3)
.L_803790D4:
/* 803790D4 00376014  90 7F 02 48 */	stw r3, 0x248(r31)
/* 803790D8 00376018  38 00 00 01 */	li r0, 1
/* 803790DC 0037601C  7F E3 FB 78 */	mr r3, r31
/* 803790E0 00376020  80 AD 99 34 */	lwz r5, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 803790E4 00376024  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 803790E8 00376028  90 A4 00 08 */	stw r5, 8(r4)
/* 803790EC 0037602C  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803790F0 00376030  81 9F 00 00 */	lwz r12, 0(r31)
/* 803790F4 00376034  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803790F8 00376038  7D 89 03 A6 */	mtctr r12
/* 803790FC 0037603C  4E 80 04 21 */	bctrl 
/* 80379100 00376040  4B CA AE AD */	bl __nwa__FUl
/* 80379104 00376044  90 7F 01 80 */	stw r3, 0x180(r31)
/* 80379108 00376048  3B 60 00 00 */	li r27, 0
/* 8037910C 0037604C  CB C2 08 20 */	lfd f30, lbl_8051EB80@sda21(r2)
/* 80379110 00376050  3F 20 43 30 */	lis r25, 0x4330
/* 80379114 00376054  C3 E2 08 54 */	lfs f31, lbl_8051EBB4@sda21(r2)
/* 80379118 00376058  3B 40 00 00 */	li r26, 0
/* 8037911C 0037605C  3B 00 00 01 */	li r24, 1
/* 80379120 00376060  48 00 00 40 */	b .L_80379160
.L_80379124:
/* 80379124 00376064  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80379128 00376068  7F 43 D9 AE */	stbx r26, r3, r27
/* 8037912C 0037606C  4B D5 04 75 */	bl rand
/* 80379130 00376070  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80379134 00376074  93 21 00 78 */	stw r25, 0x78(r1)
/* 80379138 00376078  C0 0D 98 FC */	lfs f0, mRandShowRate__Q28Morimura10TZukanBase@sda21(r13)
/* 8037913C 0037607C  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80379140 00376080  C8 21 00 78 */	lfd f1, 0x78(r1)
/* 80379144 00376084  EC 21 F0 28 */	fsubs f1, f1, f30
/* 80379148 00376088  EC 21 F8 24 */	fdivs f1, f1, f31
/* 8037914C 0037608C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80379150 00376090  40 80 00 0C */	bge .L_8037915C
/* 80379154 00376094  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80379158 00376098  7F 03 D9 AE */	stbx r24, r3, r27
.L_8037915C:
/* 8037915C 0037609C  3B 7B 00 01 */	addi r27, r27, 1
.L_80379160:
/* 80379160 003760A0  7F E3 FB 78 */	mr r3, r31
/* 80379164 003760A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80379168 003760A8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037916C 003760AC  7D 89 03 A6 */	mtctr r12
/* 80379170 003760B0  4E 80 04 21 */	bctrl 
/* 80379174 003760B4  7C 1B 18 00 */	cmpw r27, r3
/* 80379178 003760B8  41 80 FF AC */	blt .L_80379124
/* 8037917C 003760BC  80 8D 99 34 */	lwz r4, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80379180 003760C0  38 60 00 04 */	li r3, 4
/* 80379184 003760C4  38 A0 00 00 */	li r5, 0
/* 80379188 003760C8  4B CA AD B9 */	bl __nw__FUlP7JKRHeapi
/* 8037918C 003760CC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80379190 003760D0  90 64 00 1C */	stw r3, 0x1c(r4)
/* 80379194 003760D4  4B D5 04 0D */	bl rand
/* 80379198 003760D8  7F E3 FB 78 */	mr r3, r31
/* 8037919C 003760DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803791A0 003760E0  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803791A4 003760E4  7D 89 03 A6 */	mtctr r12
/* 803791A8 003760E8  4E 80 04 21 */	bctrl 
/* 803791AC 003760EC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 803791B0 003760F0  38 00 00 00 */	li r0, 0
/* 803791B4 003760F4  38 60 00 28 */	li r3, 0x28
/* 803791B8 003760F8  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 803791BC 003760FC  90 04 00 00 */	stw r0, 0(r4)
/* 803791C0 00376100  4B CA AC E5 */	bl __nw__FUl
/* 803791C4 00376104  28 03 00 00 */	cmplwi r3, 0
/* 803791C8 00376108  41 82 00 5C */	beq .L_80379224
/* 803791CC 0037610C  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 803791D0 00376110  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 803791D4 00376114  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 803791D8 00376118  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 803791DC 0037611C  90 03 00 00 */	stw r0, 0(r3)
/* 803791E0 00376120  39 00 00 00 */	li r8, 0
/* 803791E4 00376124  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 803791E8 00376128  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 803791EC 0037612C  91 03 00 04 */	stw r8, 4(r3)
/* 803791F0 00376130  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 803791F4 00376134  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 803791F8 00376138  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 803791FC 0037613C  90 03 00 00 */	stw r0, 0(r3)
/* 80379200 00376140  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 80379204 00376144  38 00 00 B4 */	li r0, 0xb4
/* 80379208 00376148  91 03 00 08 */	stw r8, 8(r3)
/* 8037920C 0037614C  90 C3 00 14 */	stw r6, 0x14(r3)
/* 80379210 00376150  90 A3 00 10 */	stw r5, 0x10(r3)
/* 80379214 00376154  90 83 00 1C */	stw r4, 0x1c(r3)
/* 80379218 00376158  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8037921C 0037615C  98 03 00 20 */	stb r0, 0x20(r3)
/* 80379220 00376160  99 03 00 21 */	stb r8, 0x21(r3)
.L_80379224:
/* 80379224 00376164  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80379228 00376168  90 64 00 18 */	stw r3, 0x18(r4)
/* 8037922C 0037616C  7F E3 FB 78 */	mr r3, r31
/* 80379230 00376170  81 9F 00 00 */	lwz r12, 0(r31)
/* 80379234 00376174  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80379238 00376178  7D 89 03 A6 */	mtctr r12
/* 8037923C 0037617C  4E 80 04 21 */	bctrl 
/* 80379240 00376180  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80379244 00376184  48 0D 8E 7D */	bl setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
/* 80379248 00376188  48 00 00 8C */	b .L_803792D4
.L_8037924C:
/* 8037924C 0037618C  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379250 00376190  38 BE 04 C0 */	addi r5, r30, 0x4c0
/* 80379254 00376194  38 80 10 4E */	li r4, 0x1055
/* 80379258 00376198  4C C6 31 82 */	crclr 6
/* 8037925C 0037619C  4B CB 13 E5 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80379260 003761A0  48 00 00 74 */	b .L_803792D4
.L_80379264:
/* 80379264 003761A4  38 60 00 28 */	li r3, 0x28
/* 80379268 003761A8  4B CA AC 3D */	bl __nw__FUl
/* 8037926C 003761AC  28 03 00 00 */	cmplwi r3, 0
/* 80379270 003761B0  41 82 00 5C */	beq .L_803792CC
/* 80379274 003761B4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80379278 003761B8  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8037927C 003761BC  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80379280 003761C0  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379284 003761C4  90 03 00 00 */	stw r0, 0(r3)
/* 80379288 003761C8  39 00 00 00 */	li r8, 0
/* 8037928C 003761CC  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 80379290 003761D0  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 80379294 003761D4  91 03 00 04 */	stw r8, 4(r3)
/* 80379298 003761D8  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8037929C 003761DC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 803792A0 003761E0  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 803792A4 003761E4  90 03 00 00 */	stw r0, 0(r3)
/* 803792A8 003761E8  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 803792AC 003761EC  38 00 00 B4 */	li r0, 0xb4
/* 803792B0 003761F0  91 03 00 08 */	stw r8, 8(r3)
/* 803792B4 003761F4  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803792B8 003761F8  90 A3 00 10 */	stw r5, 0x10(r3)
/* 803792BC 003761FC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 803792C0 00376200  90 A3 00 18 */	stw r5, 0x18(r3)
/* 803792C4 00376204  98 03 00 20 */	stb r0, 0x20(r3)
/* 803792C8 00376208  99 03 00 21 */	stb r8, 0x21(r3)
.L_803792CC:
/* 803792CC 0037620C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 803792D0 00376210  90 64 00 18 */	stw r3, 0x18(r4)
.L_803792D4:
/* 803792D4 00376214  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803792D8 00376218  28 00 00 00 */	cmplwi r0, 0
/* 803792DC 0037621C  41 82 00 18 */	beq .L_803792F4
/* 803792E0 00376220  88 0D 98 FA */	lbz r0, mZukanShortenTest__Q28Morimura10TZukanBase@sda21(r13)
/* 803792E4 00376224  28 00 00 00 */	cmplwi r0, 0
/* 803792E8 00376228  40 82 00 0C */	bne .L_803792F4
/* 803792EC 0037622C  38 00 00 00 */	li r0, 0
/* 803792F0 00376230  98 1F 02 40 */	stb r0, 0x240(r31)
.L_803792F4:
/* 803792F4 00376234  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803792F8 00376238  28 03 00 00 */	cmplwi r3, 0
/* 803792FC 0037623C  41 82 00 18 */	beq .L_80379314
/* 80379300 00376240  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80379304 00376244  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80379308 00376248  41 82 00 0C */	beq .L_80379314
/* 8037930C 0037624C  38 00 00 00 */	li r0, 0
/* 80379310 00376250  98 1F 02 40 */	stb r0, 0x240(r31)
.L_80379314:
/* 80379314 00376254  38 00 00 01 */	li r0, 1
/* 80379318 00376258  98 1F 02 41 */	stb r0, 0x241(r31)
/* 8037931C 0037625C  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80379320 00376260  28 00 00 00 */	cmplwi r0, 0
/* 80379324 00376264  41 82 01 B8 */	beq .L_803794DC
/* 80379328 00376268  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037932C 0037626C  28 00 00 00 */	cmplwi r0, 0
/* 80379330 00376270  41 82 00 DC */	beq .L_8037940C
/* 80379334 00376274  4B D5 02 6D */	bl rand
/* 80379338 00376278  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037933C 0037627C  3C 00 43 30 */	lis r0, 0x4330
/* 80379340 00376280  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80379344 00376284  38 80 00 00 */	li r4, 0
/* 80379348 00376288  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 8037934C 0037628C  90 01 00 78 */	stw r0, 0x78(r1)
/* 80379350 00376290  C0 22 08 54 */	lfs f1, lbl_8051EBB4@sda21(r2)
/* 80379354 00376294  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 80379358 00376298  C0 02 08 78 */	lfs f0, lbl_8051EBD8@sda21(r2)
/* 8037935C 0037629C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80379360 003762A0  EC 22 08 24 */	fdivs f1, f2, f1
/* 80379364 003762A4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80379368 003762A8  FC 00 00 1E */	fctiwz f0, f0
/* 8037936C 003762AC  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 80379370 003762B0  83 01 00 84 */	lwz r24, 0x84(r1)
/* 80379374 003762B4  7F 09 03 A6 */	mtctr r24
/* 80379378 003762B8  2C 18 00 00 */	cmpwi r24, 0
/* 8037937C 003762BC  40 81 00 2C */	ble .L_803793A8
.L_80379380:
/* 80379380 003762C0  54 83 0F FE */	srwi r3, r4, 0x1f
/* 80379384 003762C4  54 80 07 FE */	clrlwi r0, r4, 0x1f
/* 80379388 003762C8  7C 00 1A 78 */	xor r0, r0, r3
/* 8037938C 003762CC  7C 03 00 51 */	subf. r0, r3, r0
/* 80379390 003762D0  40 82 00 10 */	bne .L_803793A0
/* 80379394 003762D4  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80379398 003762D8  38 03 00 01 */	addi r0, r3, 1
/* 8037939C 003762DC  90 1F 02 30 */	stw r0, 0x230(r31)
.L_803793A0:
/* 803793A0 003762E0  38 84 00 01 */	addi r4, r4, 1
/* 803793A4 003762E4  42 00 FF DC */	bdnz .L_80379380
.L_803793A8:
/* 803793A8 003762E8  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803793AC 003762EC  2C 00 00 00 */	cmpwi r0, 0
/* 803793B0 003762F0  40 82 00 10 */	bne .L_803793C0
/* 803793B4 003762F4  38 00 00 00 */	li r0, 0
/* 803793B8 003762F8  98 1F 02 42 */	stb r0, 0x242(r31)
/* 803793BC 003762FC  48 00 00 10 */	b .L_803793CC
.L_803793C0:
/* 803793C0 00376300  54 03 10 3A */	slwi r3, r0, 2
/* 803793C4 00376304  4B CA AB E9 */	bl __nwa__FUl
/* 803793C8 00376308  90 7F 02 2C */	stw r3, 0x22c(r31)
.L_803793CC:
/* 803793CC 0037630C  38 A0 00 00 */	li r5, 0
/* 803793D0 00376310  38 80 00 00 */	li r4, 0
/* 803793D4 00376314  7F 09 03 A6 */	mtctr r24
/* 803793D8 00376318  2C 18 00 00 */	cmpwi r24, 0
/* 803793DC 0037631C  40 81 01 00 */	ble .L_803794DC
.L_803793E0:
/* 803793E0 00376320  54 A3 0F FE */	srwi r3, r5, 0x1f
/* 803793E4 00376324  54 A0 07 FE */	clrlwi r0, r5, 0x1f
/* 803793E8 00376328  7C 00 1A 78 */	xor r0, r0, r3
/* 803793EC 0037632C  7C 03 00 51 */	subf. r0, r3, r0
/* 803793F0 00376330  40 82 00 10 */	bne .L_80379400
/* 803793F4 00376334  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 803793F8 00376338  7C A3 21 2E */	stwx r5, r3, r4
/* 803793FC 0037633C  38 84 00 04 */	addi r4, r4, 4
.L_80379400:
/* 80379400 00376340  38 A5 00 01 */	addi r5, r5, 1
/* 80379404 00376344  42 00 FF DC */	bdnz .L_803793E0
/* 80379408 00376348  48 00 00 D4 */	b .L_803794DC
.L_8037940C:
/* 8037940C 0037634C  3B 00 00 00 */	li r24, 0
/* 80379410 00376350  48 00 00 34 */	b .L_80379444
.L_80379414:
/* 80379414 00376354  7F E3 FB 78 */	mr r3, r31
/* 80379418 00376358  7F 04 C3 78 */	mr r4, r24
/* 8037941C 0037635C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80379420 00376360  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80379424 00376364  7D 89 03 A6 */	mtctr r12
/* 80379428 00376368  4E 80 04 21 */	bctrl 
/* 8037942C 0037636C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80379430 00376370  41 82 00 10 */	beq .L_80379440
/* 80379434 00376374  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80379438 00376378  38 03 00 01 */	addi r0, r3, 1
/* 8037943C 0037637C  90 1F 02 30 */	stw r0, 0x230(r31)
.L_80379440:
/* 80379440 00376380  3B 18 00 01 */	addi r24, r24, 1
.L_80379444:
/* 80379444 00376384  7F E3 FB 78 */	mr r3, r31
/* 80379448 00376388  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037944C 0037638C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80379450 00376390  7D 89 03 A6 */	mtctr r12
/* 80379454 00376394  4E 80 04 21 */	bctrl 
/* 80379458 00376398  7C 18 18 00 */	cmpw r24, r3
/* 8037945C 0037639C  41 80 FF B8 */	blt .L_80379414
/* 80379460 003763A0  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 80379464 003763A4  2C 00 00 00 */	cmpwi r0, 0
/* 80379468 003763A8  40 82 00 10 */	bne .L_80379478
/* 8037946C 003763AC  38 00 00 00 */	li r0, 0
/* 80379470 003763B0  98 1F 02 42 */	stb r0, 0x242(r31)
/* 80379474 003763B4  48 00 00 10 */	b .L_80379484
.L_80379478:
/* 80379478 003763B8  54 03 10 3A */	slwi r3, r0, 2
/* 8037947C 003763BC  4B CA AB 31 */	bl __nwa__FUl
/* 80379480 003763C0  90 7F 02 2C */	stw r3, 0x22c(r31)
.L_80379484:
/* 80379484 003763C4  3B 20 00 00 */	li r25, 0
/* 80379488 003763C8  3B 00 00 00 */	li r24, 0
/* 8037948C 003763CC  48 00 00 34 */	b .L_803794C0
.L_80379490:
/* 80379490 003763D0  7F E3 FB 78 */	mr r3, r31
/* 80379494 003763D4  7F 24 CB 78 */	mr r4, r25
/* 80379498 003763D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037949C 003763DC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803794A0 003763E0  7D 89 03 A6 */	mtctr r12
/* 803794A4 003763E4  4E 80 04 21 */	bctrl 
/* 803794A8 003763E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803794AC 003763EC  41 82 00 10 */	beq .L_803794BC
/* 803794B0 003763F0  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 803794B4 003763F4  7F 23 C1 2E */	stwx r25, r3, r24
/* 803794B8 003763F8  3B 18 00 04 */	addi r24, r24, 4
.L_803794BC:
/* 803794BC 003763FC  3B 39 00 01 */	addi r25, r25, 1
.L_803794C0:
/* 803794C0 00376400  7F E3 FB 78 */	mr r3, r31
/* 803794C4 00376404  81 9F 00 00 */	lwz r12, 0(r31)
/* 803794C8 00376408  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803794CC 0037640C  7D 89 03 A6 */	mtctr r12
/* 803794D0 00376410  4E 80 04 21 */	bctrl 
/* 803794D4 00376414  7C 19 18 00 */	cmpw r25, r3
/* 803794D8 00376418  41 80 FF B8 */	blt .L_80379490
.L_803794DC:
/* 803794DC 0037641C  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 803794E0 00376420  28 00 00 00 */	cmplwi r0, 0
/* 803794E4 00376424  41 82 00 24 */	beq .L_80379508
/* 803794E8 00376428  A8 7F 00 8E */	lha r3, 0x8e(r31)
/* 803794EC 0037642C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 803794F0 00376430  38 03 FF FF */	addi r0, r3, -1
/* 803794F4 00376434  1C 00 00 03 */	mulli r0, r0, 3
/* 803794F8 00376438  7C 04 00 00 */	cmpw r4, r0
/* 803794FC 0037643C  41 81 00 0C */	bgt .L_80379508
/* 80379500 00376440  38 00 00 00 */	li r0, 0
/* 80379504 00376444  98 1F 02 42 */	stb r0, 0x242(r31)
.L_80379508:
/* 80379508 00376448  C8 5E 0C 08 */	lfd f2, 0xc08(r30)
/* 8037950C 0037644C  38 60 00 18 */	li r3, 0x18
/* 80379510 00376450  C8 3E 0C 10 */	lfd f1, 0xc10(r30)
/* 80379514 00376454  C8 1E 0C 18 */	lfd f0, 0xc18(r30)
/* 80379518 00376458  D8 41 00 60 */	stfd f2, 0x60(r1)
/* 8037951C 0037645C  D8 21 00 68 */	stfd f1, 0x68(r1)
/* 80379520 00376460  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 80379524 00376464  4B CA A9 81 */	bl __nw__FUl
/* 80379528 00376468  7C 60 1B 79 */	or. r0, r3, r3
/* 8037952C 0037646C  41 82 00 24 */	beq .L_80379550
/* 80379530 00376470  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379534 00376474  3C A0 00 30 */	lis r5, 0x00303130@ha
/* 80379538 00376478  38 81 00 60 */	addi r4, r1, 0x60
/* 8037953C 0037647C  38 E0 00 03 */	li r7, 3
/* 80379540 00376480  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80379544 00376484  38 A5 31 30 */	addi r5, r5, 0x00303130@l
/* 80379548 00376488  48 02 7B 9D */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 8037954C 0037648C  7C 60 1B 78 */	mr r0, r3
.L_80379550:
/* 80379550 00376490  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80379554 00376494  38 60 00 18 */	li r3, 0x18
/* 80379558 00376498  C8 5E 0C 20 */	lfd f2, 0xc20(r30)
/* 8037955C 0037649C  C8 3E 0C 28 */	lfd f1, 0xc28(r30)
/* 80379560 003764A0  C8 1E 0C 30 */	lfd f0, 0xc30(r30)
/* 80379564 003764A4  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 80379568 003764A8  D8 21 00 50 */	stfd f1, 0x50(r1)
/* 8037956C 003764AC  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80379570 003764B0  4B CA A9 35 */	bl __nw__FUl
/* 80379574 003764B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80379578 003764B8  41 82 00 24 */	beq .L_8037959C
/* 8037957C 003764BC  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379580 003764C0  3C A0 00 30 */	lis r5, 0x00303430@ha
/* 80379584 003764C4  38 81 00 48 */	addi r4, r1, 0x48
/* 80379588 003764C8  38 E0 00 03 */	li r7, 3
/* 8037958C 003764CC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80379590 003764D0  38 A5 34 30 */	addi r5, r5, 0x00303430@l
/* 80379594 003764D4  48 02 7B 51 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 80379598 003764D8  7C 60 1B 78 */	mr r0, r3
.L_8037959C:
/* 8037959C 003764DC  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 803795A0 003764E0  38 60 00 18 */	li r3, 0x18
/* 803795A4 003764E4  C8 5E 0C 38 */	lfd f2, 0xc38(r30)
/* 803795A8 003764E8  C8 3E 0C 40 */	lfd f1, 0xc40(r30)
/* 803795AC 003764EC  C8 1E 0C 48 */	lfd f0, 0xc48(r30)
/* 803795B0 003764F0  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 803795B4 003764F4  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 803795B8 003764F8  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 803795BC 003764FC  4B CA A8 E9 */	bl __nw__FUl
/* 803795C0 00376500  7C 60 1B 79 */	or. r0, r3, r3
/* 803795C4 00376504  41 82 00 24 */	beq .L_803795E8
/* 803795C8 00376508  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 803795CC 0037650C  3C A0 00 30 */	lis r5, 0x00303730@ha
/* 803795D0 00376510  38 81 00 30 */	addi r4, r1, 0x30
/* 803795D4 00376514  38 E0 00 03 */	li r7, 3
/* 803795D8 00376518  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 803795DC 0037651C  38 A5 37 30 */	addi r5, r5, 0x00303730@l
/* 803795E0 00376520  48 02 7B 05 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 803795E4 00376524  7C 60 1B 78 */	mr r0, r3
.L_803795E8:
/* 803795E8 00376528  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 803795EC 0037652C  38 60 00 18 */	li r3, 0x18
/* 803795F0 00376530  C8 3E 0C 50 */	lfd f1, 0xc50(r30)
/* 803795F4 00376534  C8 1E 0C 58 */	lfd f0, 0xc58(r30)
/* 803795F8 00376538  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 803795FC 0037653C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80379600 00376540  4B CA A8 A5 */	bl __nw__FUl
/* 80379604 00376544  7C 64 1B 79 */	or. r4, r3, r3
/* 80379608 00376548  41 82 00 24 */	beq .L_8037962C
/* 8037960C 0037654C  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379610 00376550  3C A0 00 31 */	lis r5, 0x00313433@ha
/* 80379614 00376554  38 81 00 20 */	addi r4, r1, 0x20
/* 80379618 00376558  38 E0 00 02 */	li r7, 2
/* 8037961C 0037655C  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80379620 00376560  38 A5 34 33 */	addi r5, r5, 0x00313433@l
/* 80379624 00376564  48 02 7A C1 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 80379628 00376568  7C 64 1B 78 */	mr r4, r3
.L_8037962C:
/* 8037962C 0037656C  38 00 00 05 */	li r0, 5
/* 80379630 00376570  7F E5 FB 78 */	mr r5, r31
/* 80379634 00376574  90 9F 03 A4 */	stw r4, 0x3a4(r31)
/* 80379638 00376578  7C 09 03 A6 */	mtctr r0
/* 8037963C 0037657C  38 60 00 01 */	li r3, 1
/* 80379640 00376580  38 80 00 00 */	li r4, 0
/* 80379644 00376584  38 00 FF FF */	li r0, -1
.L_80379648:
/* 80379648 00376588  90 65 02 78 */	stw r3, 0x278(r5)
/* 8037964C 0037658C  90 85 02 DC */	stw r4, 0x2dc(r5)
/* 80379650 00376590  90 05 03 40 */	stw r0, 0x340(r5)
/* 80379654 00376594  90 65 02 7C */	stw r3, 0x27c(r5)
/* 80379658 00376598  90 85 02 E0 */	stw r4, 0x2e0(r5)
/* 8037965C 0037659C  90 05 03 44 */	stw r0, 0x344(r5)
/* 80379660 003765A0  90 65 02 80 */	stw r3, 0x280(r5)
/* 80379664 003765A4  90 85 02 E4 */	stw r4, 0x2e4(r5)
/* 80379668 003765A8  90 05 03 48 */	stw r0, 0x348(r5)
/* 8037966C 003765AC  90 65 02 84 */	stw r3, 0x284(r5)
/* 80379670 003765B0  90 85 02 E8 */	stw r4, 0x2e8(r5)
/* 80379674 003765B4  90 05 03 4C */	stw r0, 0x34c(r5)
/* 80379678 003765B8  90 65 02 88 */	stw r3, 0x288(r5)
/* 8037967C 003765BC  90 85 02 EC */	stw r4, 0x2ec(r5)
/* 80379680 003765C0  90 05 03 50 */	stw r0, 0x350(r5)
/* 80379684 003765C4  38 A5 00 14 */	addi r5, r5, 0x14
/* 80379688 003765C8  42 00 FF C0 */	bdnz .L_80379648
/* 8037968C 003765CC  3C 60 80 4E */	lis r3, mCategoryArray__Q28Morimura10TItemZukan@ha
/* 80379690 003765D0  90 9F 03 B4 */	stw r4, 0x3b4(r31)
/* 80379694 003765D4  3B 83 39 34 */	addi r28, r3, mCategoryArray__Q28Morimura10TItemZukan@l
/* 80379698 003765D8  7F FB FB 78 */	mr r27, r31
/* 8037969C 003765DC  3B 40 00 00 */	li r26, 0
/* 803796A0 003765E0  3B 20 00 00 */	li r25, 0
.L_803796A4:
/* 803796A4 003765E4  2C 19 00 00 */	cmpwi r25, 0
/* 803796A8 003765E8  3B 00 00 00 */	li r24, 0
/* 803796AC 003765EC  40 81 00 08 */	ble .L_803796B4
/* 803796B0 003765F0  83 1C FF FC */	lwz r24, -4(r28)
.L_803796B4:
/* 803796B4 003765F4  7F 16 C3 78 */	mr r22, r24
/* 803796B8 003765F8  3A E0 00 00 */	li r23, 0
/* 803796BC 003765FC  48 00 00 60 */	b .L_8037971C
.L_803796C0:
/* 803796C0 00376600  7F E3 FB 78 */	mr r3, r31
/* 803796C4 00376604  7E C4 B3 78 */	mr r4, r22
/* 803796C8 00376608  81 9F 00 00 */	lwz r12, 0(r31)
/* 803796CC 0037660C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803796D0 00376610  7D 89 03 A6 */	mtctr r12
/* 803796D4 00376614  4E 80 04 21 */	bctrl 
/* 803796D8 00376618  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803796DC 0037661C  40 82 00 14 */	bne .L_803796F0
/* 803796E0 00376620  38 00 00 00 */	li r0, 0
/* 803796E4 00376624  3A E0 00 00 */	li r23, 0
/* 803796E8 00376628  90 1B 02 78 */	stw r0, 0x278(r27)
/* 803796EC 0037662C  48 00 00 3C */	b .L_80379728
.L_803796F0:
/* 803796F0 00376630  7F E3 FB 78 */	mr r3, r31
/* 803796F4 00376634  7E C4 B3 78 */	mr r4, r22
/* 803796F8 00376638  81 9F 00 00 */	lwz r12, 0(r31)
/* 803796FC 0037663C  38 A0 00 01 */	li r5, 1
/* 80379700 00376640  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80379704 00376644  7D 89 03 A6 */	mtctr r12
/* 80379708 00376648  4E 80 04 21 */	bctrl 
/* 8037970C 0037664C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80379710 00376650  41 82 00 08 */	beq .L_80379718
/* 80379714 00376654  3A E0 00 01 */	li r23, 1
.L_80379718:
/* 80379718 00376658  3A D6 00 01 */	addi r22, r22, 1
.L_8037971C:
/* 8037971C 0037665C  80 1C 00 00 */	lwz r0, 0(r28)
/* 80379720 00376660  7C 16 00 00 */	cmpw r22, r0
/* 80379724 00376664  41 80 FF 9C */	blt .L_803796C0
.L_80379728:
/* 80379728 00376668  56 E0 06 3F */	clrlwi. r0, r23, 0x18
/* 8037972C 0037666C  41 82 00 5C */	beq .L_80379788
/* 80379730 00376670  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80379734 00376674  28 00 00 00 */	cmplwi r0, 0
/* 80379738 00376678  40 82 00 44 */	bne .L_8037977C
/* 8037973C 0037667C  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80379740 00376680  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 80379744 00376684  80 04 00 00 */	lwz r0, 0(r4)
/* 80379748 00376688  2C 00 00 00 */	cmpwi r0, 0
/* 8037974C 0037668C  40 80 00 3C */	bge .L_80379788
/* 80379750 00376690  81 83 00 00 */	lwz r12, 0(r3)
/* 80379754 00376694  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80379758 00376698  7D 89 03 A6 */	mtctr r12
/* 8037975C 0037669C  4E 80 04 21 */	bctrl 
/* 80379760 003766A0  3C A0 49 54 */	lis r5, 0x4954454D@ha
/* 80379764 003766A4  38 00 00 44 */	li r0, 0x44
/* 80379768 003766A8  38 A5 45 4D */	addi r5, r5, 0x4954454D@l
/* 8037976C 003766AC  7C 84 2A 78 */	xor r4, r4, r5
/* 80379770 003766B0  7C 60 02 78 */	xor r0, r3, r0
/* 80379774 003766B4  7C 80 03 79 */	or. r0, r4, r0
/* 80379778 003766B8  40 82 00 10 */	bne .L_80379788
.L_8037977C:
/* 8037977C 003766BC  38 00 00 01 */	li r0, 1
/* 80379780 003766C0  90 1B 02 DC */	stw r0, 0x2dc(r27)
/* 80379784 003766C4  98 1F 02 44 */	stb r0, 0x244(r31)
.L_80379788:
/* 80379788 003766C8  88 1F 02 41 */	lbz r0, 0x241(r31)
/* 8037978C 003766CC  28 00 00 00 */	cmplwi r0, 0
/* 80379790 003766D0  41 82 00 90 */	beq .L_80379820
/* 80379794 003766D4  7F 16 C3 78 */	mr r22, r24
/* 80379798 003766D8  48 00 00 7C */	b .L_80379814
.L_8037979C:
/* 8037979C 003766DC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803797A0 003766E0  28 00 00 00 */	cmplwi r0, 0
/* 803797A4 003766E4  41 82 00 34 */	beq .L_803797D8
/* 803797A8 003766E8  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 803797AC 003766EC  28 00 00 00 */	cmplwi r0, 0
/* 803797B0 003766F0  41 82 00 28 */	beq .L_803797D8
/* 803797B4 003766F4  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803797B8 003766F8  2C 00 00 00 */	cmpwi r0, 0
/* 803797BC 003766FC  41 82 00 1C */	beq .L_803797D8
/* 803797C0 00376700  54 03 10 3A */	slwi r3, r0, 2
/* 803797C4 00376704  80 9F 02 2C */	lwz r4, 0x22c(r31)
/* 803797C8 00376708  38 03 FF FC */	addi r0, r3, -4
/* 803797CC 0037670C  7C 04 00 2E */	lwzx r0, r4, r0
/* 803797D0 00376710  7C 16 00 00 */	cmpw r22, r0
/* 803797D4 00376714  41 81 00 4C */	bgt .L_80379820
.L_803797D8:
/* 803797D8 00376718  7F E3 FB 78 */	mr r3, r31
/* 803797DC 0037671C  7E C4 B3 78 */	mr r4, r22
/* 803797E0 00376720  81 9F 00 00 */	lwz r12, 0(r31)
/* 803797E4 00376724  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803797E8 00376728  7D 89 03 A6 */	mtctr r12
/* 803797EC 0037672C  4E 80 04 21 */	bctrl 
/* 803797F0 00376730  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803797F4 00376734  41 82 00 1C */	beq .L_80379810
/* 803797F8 00376738  80 7F 03 B4 */	lwz r3, 0x3b4(r31)
/* 803797FC 0037673C  38 03 00 01 */	addi r0, r3, 1
/* 80379800 00376740  90 1F 03 B4 */	stw r0, 0x3b4(r31)
/* 80379804 00376744  93 5B 03 40 */	stw r26, 0x340(r27)
/* 80379808 00376748  23 5A 00 01 */	subfic r26, r26, 1
/* 8037980C 0037674C  48 00 00 14 */	b .L_80379820
.L_80379810:
/* 80379810 00376750  3A D6 00 01 */	addi r22, r22, 1
.L_80379814:
/* 80379814 00376754  80 1C 00 00 */	lwz r0, 0(r28)
/* 80379818 00376758  7C 16 00 00 */	cmpw r22, r0
/* 8037981C 0037675C  41 80 FF 80 */	blt .L_8037979C
.L_80379820:
/* 80379820 00376760  3B 39 00 01 */	addi r25, r25, 1
/* 80379824 00376764  3B 7B 00 04 */	addi r27, r27, 4
/* 80379828 00376768  2C 19 00 19 */	cmpwi r25, 0x19
/* 8037982C 0037676C  3B 9C 00 04 */	addi r28, r28, 4
/* 80379830 00376770  41 80 FE 74 */	blt .L_803796A4
/* 80379834 00376774  39 20 00 78 */	li r9, 0x78
/* 80379838 00376778  39 00 00 FF */	li r8, 0xff
/* 8037983C 0037677C  B1 3F 01 B0 */	sth r9, 0x1b0(r31)
/* 80379840 00376780  38 E0 00 F0 */	li r7, 0xf0
/* 80379844 00376784  38 C0 00 00 */	li r6, 0
/* 80379848 00376788  38 A0 00 C8 */	li r5, 0xc8
/* 8037984C 0037678C  B1 3F 01 B2 */	sth r9, 0x1b2(r31)
/* 80379850 00376790  38 60 00 28 */	li r3, 0x28
/* 80379854 00376794  38 00 00 A5 */	li r0, 0xa5
/* 80379858 00376798  38 9E 0C 60 */	addi r4, r30, 0xc60
/* 8037985C 0037679C  B1 3F 01 B4 */	sth r9, 0x1b4(r31)
/* 80379860 003767A0  B1 1F 01 B6 */	sth r8, 0x1b6(r31)
/* 80379864 003767A4  B0 FF 01 B8 */	sth r7, 0x1b8(r31)
/* 80379868 003767A8  B0 FF 01 BA */	sth r7, 0x1ba(r31)
/* 8037986C 003767AC  B0 FF 01 BC */	sth r7, 0x1bc(r31)
/* 80379870 003767B0  B1 1F 01 BE */	sth r8, 0x1be(r31)
/* 80379874 003767B4  A8 FF 01 B0 */	lha r7, 0x1b0(r31)
/* 80379878 003767B8  B0 FF 01 B8 */	sth r7, 0x1b8(r31)
/* 8037987C 003767BC  A8 FF 01 B2 */	lha r7, 0x1b2(r31)
/* 80379880 003767C0  B0 FF 01 BA */	sth r7, 0x1ba(r31)
/* 80379884 003767C4  A8 FF 01 B4 */	lha r7, 0x1b4(r31)
/* 80379888 003767C8  B0 FF 01 BC */	sth r7, 0x1bc(r31)
/* 8037988C 003767CC  A8 FF 01 B6 */	lha r7, 0x1b6(r31)
/* 80379890 003767D0  B0 FF 01 BE */	sth r7, 0x1be(r31)
/* 80379894 003767D4  B1 1F 01 C0 */	sth r8, 0x1c0(r31)
/* 80379898 003767D8  B1 1F 01 C2 */	sth r8, 0x1c2(r31)
/* 8037989C 003767DC  B0 DF 01 C4 */	sth r6, 0x1c4(r31)
/* 803798A0 003767E0  B0 DF 01 C6 */	sth r6, 0x1c6(r31)
/* 803798A4 003767E4  B1 1F 01 D0 */	sth r8, 0x1d0(r31)
/* 803798A8 003767E8  B0 BF 01 D2 */	sth r5, 0x1d2(r31)
/* 803798AC 003767EC  B0 BF 01 D4 */	sth r5, 0x1d4(r31)
/* 803798B0 003767F0  B1 1F 01 D6 */	sth r8, 0x1d6(r31)
/* 803798B4 003767F4  B1 1F 01 C8 */	sth r8, 0x1c8(r31)
/* 803798B8 003767F8  B0 7F 01 CA */	sth r3, 0x1ca(r31)
/* 803798BC 003767FC  B0 7F 01 CC */	sth r3, 0x1cc(r31)
/* 803798C0 00376800  B0 DF 01 CE */	sth r6, 0x1ce(r31)
/* 803798C4 00376804  B1 1F 01 D8 */	sth r8, 0x1d8(r31)
/* 803798C8 00376808  B0 BF 01 DA */	sth r5, 0x1da(r31)
/* 803798CC 0037680C  B0 BF 01 DC */	sth r5, 0x1dc(r31)
/* 803798D0 00376810  B1 1F 01 DE */	sth r8, 0x1de(r31)
/* 803798D4 00376814  B0 1F 02 58 */	sth r0, 0x258(r31)
/* 803798D8 00376818  B0 DF 02 5A */	sth r6, 0x25a(r31)
/* 803798DC 0037681C  B0 DF 02 5C */	sth r6, 0x25c(r31)
/* 803798E0 00376820  B1 1F 02 5E */	sth r8, 0x25e(r31)
/* 803798E4 00376824  B1 1F 02 60 */	sth r8, 0x260(r31)
/* 803798E8 00376828  B0 7F 02 62 */	sth r3, 0x262(r31)
/* 803798EC 0037682C  B0 7F 02 64 */	sth r3, 0x264(r31)
/* 803798F0 00376830  B0 DF 02 66 */	sth r6, 0x266(r31)
/* 803798F4 00376834  B1 1F 02 68 */	sth r8, 0x268(r31)
/* 803798F8 00376838  B0 BF 02 6A */	sth r5, 0x26a(r31)
/* 803798FC 0037683C  B0 BF 02 6C */	sth r5, 0x26c(r31)
/* 80379900 00376840  B1 1F 02 6E */	sth r8, 0x26e(r31)
/* 80379904 00376844  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379908 00376848  81 83 00 00 */	lwz r12, 0(r3)
/* 8037990C 0037684C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80379910 00376850  7D 89 03 A6 */	mtctr r12
/* 80379914 00376854  4E 80 04 21 */	bctrl 
/* 80379918 00376858  90 7F 02 70 */	stw r3, 0x270(r31)
/* 8037991C 0037685C  80 1F 02 70 */	lwz r0, 0x270(r31)
/* 80379920 00376860  28 00 00 00 */	cmplwi r0, 0
/* 80379924 00376864  40 82 00 18 */	bne .L_8037993C
/* 80379928 00376868  38 7E 00 0C */	addi r3, r30, 0xc
/* 8037992C 0037686C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379930 00376870  38 80 11 0B */	li r4, 0x1112
/* 80379934 00376874  4C C6 31 82 */	crclr 6
/* 80379938 00376878  4B CB 0D 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037993C:
/* 8037993C 0037687C  38 60 00 18 */	li r3, 0x18
/* 80379940 00376880  4B CA A5 65 */	bl __nw__FUl
/* 80379944 00376884  7C 78 1B 79 */	or. r24, r3, r3
/* 80379948 00376888  41 82 00 1C */	beq .L_80379964
/* 8037994C 0037688C  7F A4 EB 78 */	mr r4, r29
/* 80379950 00376890  38 A0 00 00 */	li r5, 0
/* 80379954 00376894  48 02 7A 55 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379958 00376898  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TListScreen@ha
/* 8037995C 0037689C  38 03 59 6C */	addi r0, r3, __vt__Q28Morimura11TListScreen@l
/* 80379960 003768A0  90 18 00 00 */	stw r0, 0(r24)
.L_80379964:
/* 80379964 003768A4  93 1F 00 B4 */	stw r24, 0xb4(r31)
/* 80379968 003768A8  38 9E 0C 78 */	addi r4, r30, 0xc78
/* 8037996C 003768AC  3C A0 00 02 */	lis r5, 2
/* 80379970 003768B0  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 80379974 003768B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80379978 003768B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8037997C 003768BC  7D 89 03 A6 */	mtctr r12
/* 80379980 003768C0  4E 80 04 21 */	bctrl 
/* 80379984 003768C4  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80379988 003768C8  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8037998C 003768CC  80 63 00 08 */	lwz r3, 8(r3)
/* 80379990 003768D0  4B CA 9C 15 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80379994 003768D4  38 60 00 18 */	li r3, 0x18
/* 80379998 003768D8  4B CA A5 0D */	bl __nw__FUl
/* 8037999C 003768DC  7C 60 1B 79 */	or. r0, r3, r3
/* 803799A0 003768E0  41 82 00 14 */	beq .L_803799B4
/* 803799A4 003768E4  7F A4 EB 78 */	mr r4, r29
/* 803799A8 003768E8  38 A0 00 02 */	li r5, 2
/* 803799AC 003768EC  48 02 79 FD */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 803799B0 003768F0  7C 60 1B 78 */	mr r0, r3
.L_803799B4:
/* 803799B4 003768F4  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 803799B8 003768F8  38 9E 0C 94 */	addi r4, r30, 0xc94
/* 803799BC 003768FC  3C A0 00 02 */	lis r5, 2
/* 803799C0 00376900  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799C4 00376904  81 83 00 00 */	lwz r12, 0(r3)
/* 803799C8 00376908  81 8C 00 08 */	lwz r12, 8(r12)
/* 803799CC 0037690C  7D 89 03 A6 */	mtctr r12
/* 803799D0 00376910  4E 80 04 21 */	bctrl 
/* 803799D4 00376914  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799D8 00376918  38 9E 0C B0 */	addi r4, r30, 0xcb0
/* 803799DC 0037691C  48 02 7A 85 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 803799E0 00376920  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799E4 00376924  38 9E 0C CC */	addi r4, r30, 0xccc
/* 803799E8 00376928  48 02 7A 79 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 803799EC 0037692C  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799F0 00376930  3C A0 65 6E */	lis r5, 0x656E7531@ha
/* 803799F4 00376934  3C 80 00 54 */	lis r4, 0x00546C6D@ha
/* 803799F8 00376938  80 63 00 08 */	lwz r3, 8(r3)
/* 803799FC 0037693C  38 C5 75 31 */	addi r6, r5, 0x656E7531@l
/* 80379A00 00376940  38 A4 6C 6D */	addi r5, r4, 0x00546C6D@l
/* 80379A04 00376944  81 83 00 00 */	lwz r12, 0(r3)
/* 80379A08 00376948  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379A0C 0037694C  7D 89 03 A6 */	mtctr r12
/* 80379A10 00376950  4E 80 04 21 */	bctrl 
/* 80379A14 00376954  90 7F 00 F4 */	stw r3, 0xf4(r31)
/* 80379A18 00376958  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80379A1C 0037695C  28 00 00 00 */	cmplwi r0, 0
/* 80379A20 00376960  40 82 00 18 */	bne .L_80379A38
/* 80379A24 00376964  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379A28 00376968  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379A2C 0037696C  38 80 11 2C */	li r4, 0x1133
/* 80379A30 00376970  4C C6 31 82 */	crclr 6
/* 80379A34 00376974  4B CB 0C 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379A38:
/* 80379A38 00376978  38 60 00 48 */	li r3, 0x48
/* 80379A3C 0037697C  4B CA A4 69 */	bl __nw__FUl
/* 80379A40 00376980  7C 60 1B 79 */	or. r0, r3, r3
/* 80379A44 00376984  41 82 00 0C */	beq .L_80379A50
/* 80379A48 00376988  4B F8 FB CD */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 80379A4C 0037698C  7C 60 1B 78 */	mr r0, r3
.L_80379A50:
/* 80379A50 00376990  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 80379A54 00376994  3C 80 65 6E */	lis r4, 0x656E7531@ha
/* 80379A58 00376998  3C 60 00 54 */	lis r3, 0x00546C6D@ha
/* 80379A5C 0037699C  81 1F 00 7C */	lwz r8, 0x7c(r31)
/* 80379A60 003769A0  38 C4 75 31 */	addi r6, r4, 0x656E7531@l
/* 80379A64 003769A4  80 FF 00 D0 */	lwz r7, 0xd0(r31)
/* 80379A68 003769A8  38 A3 6C 6D */	addi r5, r3, 0x00546C6D@l
/* 80379A6C 003769AC  80 68 00 08 */	lwz r3, 8(r8)
/* 80379A70 003769B0  48 0B B0 B5 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80379A74 003769B4  80 BF 00 7C */	lwz r5, 0x7c(r31)
/* 80379A78 003769B8  3C 80 61 33 */	lis r4, 0x6133646C@ha
/* 80379A7C 003769BC  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379A80 003769C0  38 C4 64 6C */	addi r6, r4, 0x6133646C@l
/* 80379A84 003769C4  80 85 00 08 */	lwz r4, 8(r5)
/* 80379A88 003769C8  38 A0 6F 74 */	li r5, 0x6f74
/* 80379A8C 003769CC  4B FB 37 C5 */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 80379A90 003769D0  90 7F 00 E4 */	stw r3, 0xe4(r31)
/* 80379A94 003769D4  3C 60 61 33 */	lis r3, 0x6133646C@ha
/* 80379A98 003769D8  38 C3 64 6C */	addi r6, r3, 0x6133646C@l
/* 80379A9C 003769DC  38 A0 6F 74 */	li r5, 0x6f74
/* 80379AA0 003769E0  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 80379AA4 003769E4  80 63 00 08 */	lwz r3, 8(r3)
/* 80379AA8 003769E8  81 83 00 00 */	lwz r12, 0(r3)
/* 80379AAC 003769EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379AB0 003769F0  7D 89 03 A6 */	mtctr r12
/* 80379AB4 003769F4  4E 80 04 21 */	bctrl 
/* 80379AB8 003769F8  90 7F 00 F8 */	stw r3, 0xf8(r31)
/* 80379ABC 003769FC  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 80379AC0 00376A00  28 00 00 00 */	cmplwi r0, 0
/* 80379AC4 00376A04  40 82 00 18 */	bne .L_80379ADC
/* 80379AC8 00376A08  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379ACC 00376A0C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379AD0 00376A10  38 80 11 37 */	li r4, 0x113e
/* 80379AD4 00376A14  4C C6 31 82 */	crclr 6
/* 80379AD8 00376A18  4B CB 0B 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379ADC:
/* 80379ADC 00376A1C  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 80379AE0 00376A20  28 00 00 00 */	cmplwi r0, 0
/* 80379AE4 00376A24  40 82 00 18 */	bne .L_80379AFC
/* 80379AE8 00376A28  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379AEC 00376A2C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379AF0 00376A30  38 80 11 38 */	li r4, 0x113f
/* 80379AF4 00376A34  4C C6 31 82 */	crclr 6
/* 80379AF8 00376A38  4B CB 0B 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379AFC:
/* 80379AFC 00376A3C  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80379B00 00376A40  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 80379B04 00376A44  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379B08 00376A48  4B F8 BB A1 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 80379B0C 00376A4C  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80379B10 00376A50  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379B14 00376A54  4B F8 BD A5 */	bl start__Q32og6Screen9AnimGroupFv
/* 80379B18 00376A58  38 60 00 08 */	li r3, 8
/* 80379B1C 00376A5C  4B CA A3 89 */	bl __nw__FUl
/* 80379B20 00376A60  7C 60 1B 79 */	or. r0, r3, r3
/* 80379B24 00376A64  41 82 00 10 */	beq .L_80379B34
/* 80379B28 00376A68  80 9F 00 E4 */	lwz r4, 0xe4(r31)
/* 80379B2C 00376A6C  4B FB 38 41 */	bl __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
/* 80379B30 00376A70  7C 60 1B 78 */	mr r0, r3
.L_80379B34:
/* 80379B34 00376A74  90 1F 00 EC */	stw r0, 0xec(r31)
/* 80379B38 00376A78  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 80379B3C 00376A7C  28 00 00 00 */	cmplwi r0, 0
/* 80379B40 00376A80  40 82 00 18 */	bne .L_80379B58
/* 80379B44 00376A84  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379B48 00376A88  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379B4C 00376A8C  38 80 11 3E */	li r4, 0x1145
/* 80379B50 00376A90  4C C6 31 82 */	crclr 6
/* 80379B54 00376A94  4B CB 0A ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379B58:
/* 80379B58 00376A98  38 60 00 18 */	li r3, 0x18
/* 80379B5C 00376A9C  4B CA A3 49 */	bl __nw__FUl
/* 80379B60 00376AA0  7C 60 1B 79 */	or. r0, r3, r3
/* 80379B64 00376AA4  41 82 00 14 */	beq .L_80379B78
/* 80379B68 00376AA8  7F A4 EB 78 */	mr r4, r29
/* 80379B6C 00376AAC  38 A0 00 00 */	li r5, 0
/* 80379B70 00376AB0  48 02 78 39 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379B74 00376AB4  7C 60 1B 78 */	mr r0, r3
.L_80379B78:
/* 80379B78 00376AB8  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 80379B7C 00376ABC  38 9E 0C E8 */	addi r4, r30, 0xce8
/* 80379B80 00376AC0  3C A0 00 02 */	lis r5, 2
/* 80379B84 00376AC4  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 80379B88 00376AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80379B8C 00376ACC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379B90 00376AD0  7D 89 03 A6 */	mtctr r12
/* 80379B94 00376AD4  4E 80 04 21 */	bctrl 
/* 80379B98 00376AD8  38 60 00 18 */	li r3, 0x18
/* 80379B9C 00376ADC  4B CA A3 09 */	bl __nw__FUl
/* 80379BA0 00376AE0  7C 60 1B 79 */	or. r0, r3, r3
/* 80379BA4 00376AE4  41 82 00 14 */	beq .L_80379BB8
/* 80379BA8 00376AE8  7F A4 EB 78 */	mr r4, r29
/* 80379BAC 00376AEC  38 A0 00 01 */	li r5, 1
/* 80379BB0 00376AF0  48 02 77 F9 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379BB4 00376AF4  7C 60 1B 78 */	mr r0, r3
.L_80379BB8:
/* 80379BB8 00376AF8  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 80379BBC 00376AFC  38 9E 0D 00 */	addi r4, r30, 0xd00
/* 80379BC0 00376B00  3C A0 00 02 */	lis r5, 2
/* 80379BC4 00376B04  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80379BC8 00376B08  81 83 00 00 */	lwz r12, 0(r3)
/* 80379BCC 00376B0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379BD0 00376B10  7D 89 03 A6 */	mtctr r12
/* 80379BD4 00376B14  4E 80 04 21 */	bctrl 
/* 80379BD8 00376B18  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80379BDC 00376B1C  38 9E 0D 1C */	addi r4, r30, 0xd1c
/* 80379BE0 00376B20  48 02 78 81 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80379BE4 00376B24  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80379BE8 00376B28  3C A0 65 6C */	lis r5, 0x656C5F6C@ha
/* 80379BEC 00376B2C  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 80379BF0 00376B30  80 63 00 08 */	lwz r3, 8(r3)
/* 80379BF4 00376B34  38 C5 5F 6C */	addi r6, r5, 0x656C5F6C@l
/* 80379BF8 00376B38  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 80379BFC 00376B3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80379C00 00376B40  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379C04 00376B44  7D 89 03 A6 */	mtctr r12
/* 80379C08 00376B48  4E 80 04 21 */	bctrl 
/* 80379C0C 00376B4C  38 00 00 00 */	li r0, 0
/* 80379C10 00376B50  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80379C14 00376B54  38 60 00 58 */	li r3, 0x58
/* 80379C18 00376B58  4B CA A2 8D */	bl __nw__FUl
/* 80379C1C 00376B5C  7C 60 1B 79 */	or. r0, r3, r3
/* 80379C20 00376B60  41 82 00 14 */	beq .L_80379C34
/* 80379C24 00376B64  7F A4 EB 78 */	mr r4, r29
/* 80379C28 00376B68  38 A0 00 02 */	li r5, 2
/* 80379C2C 00376B6C  48 00 1C 89 */	bl __ct__Q28Morimura12TZukanWindowFP10JKRArchivei
/* 80379C30 00376B70  7C 60 1B 78 */	mr r0, r3
.L_80379C34:
/* 80379C34 00376B74  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 80379C38 00376B78  38 9E 05 C4 */	addi r4, r30, 0x5c4
/* 80379C3C 00376B7C  3C A0 00 02 */	lis r5, 2
/* 80379C40 00376B80  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C44 00376B84  81 83 00 00 */	lwz r12, 0(r3)
/* 80379C48 00376B88  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379C4C 00376B8C  7D 89 03 A6 */	mtctr r12
/* 80379C50 00376B90  4E 80 04 21 */	bctrl 
/* 80379C54 00376B94  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C58 00376B98  38 9E 05 DC */	addi r4, r30, 0x5dc
/* 80379C5C 00376B9C  48 02 78 05 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80379C60 00376BA0  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C64 00376BA4  38 9E 05 F4 */	addi r4, r30, 0x5f4
/* 80379C68 00376BA8  48 02 77 F9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80379C6C 00376BAC  80 BF 00 DC */	lwz r5, 0xdc(r31)
/* 80379C70 00376BB0  3C 80 61 33 */	lis r4, 0x61336473@ha
/* 80379C74 00376BB4  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379C78 00376BB8  38 C4 64 73 */	addi r6, r4, 0x61336473@l
/* 80379C7C 00376BBC  80 85 00 08 */	lwz r4, 8(r5)
/* 80379C80 00376BC0  38 A0 6F 74 */	li r5, 0x6f74
/* 80379C84 00376BC4  4B FB 35 CD */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 80379C88 00376BC8  90 7F 00 E8 */	stw r3, 0xe8(r31)
/* 80379C8C 00376BCC  3C 60 61 33 */	lis r3, 0x61336473@ha
/* 80379C90 00376BD0  38 C3 64 73 */	addi r6, r3, 0x61336473@l
/* 80379C94 00376BD4  38 A0 6F 74 */	li r5, 0x6f74
/* 80379C98 00376BD8  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C9C 00376BDC  80 63 00 08 */	lwz r3, 8(r3)
/* 80379CA0 00376BE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80379CA4 00376BE4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379CA8 00376BE8  7D 89 03 A6 */	mtctr r12
/* 80379CAC 00376BEC  4E 80 04 21 */	bctrl 
/* 80379CB0 00376BF0  90 7F 01 00 */	stw r3, 0x100(r31)
/* 80379CB4 00376BF4  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 80379CB8 00376BF8  28 00 00 00 */	cmplwi r0, 0
/* 80379CBC 00376BFC  40 82 00 18 */	bne .L_80379CD4
/* 80379CC0 00376C00  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379CC4 00376C04  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379CC8 00376C08  38 80 11 54 */	li r4, 0x115b
/* 80379CCC 00376C0C  4C C6 31 82 */	crclr 6
/* 80379CD0 00376C10  4B CB 09 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379CD4:
/* 80379CD4 00376C14  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 80379CD8 00376C18  28 00 00 00 */	cmplwi r0, 0
/* 80379CDC 00376C1C  40 82 00 18 */	bne .L_80379CF4
/* 80379CE0 00376C20  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379CE4 00376C24  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379CE8 00376C28  38 80 11 55 */	li r4, 0x115c
/* 80379CEC 00376C2C  4C C6 31 82 */	crclr 6
/* 80379CF0 00376C30  4B CB 09 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379CF4:
/* 80379CF4 00376C34  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 80379CF8 00376C38  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 80379CFC 00376C3C  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379D00 00376C40  4B F8 B9 A9 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 80379D04 00376C44  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 80379D08 00376C48  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379D0C 00376C4C  4B F8 BB AD */	bl start__Q32og6Screen9AnimGroupFv
/* 80379D10 00376C50  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379D14 00376C54  3C A0 5F 63 */	lis r5, 0x5F637570@ha
/* 80379D18 00376C58  3C 80 50 62 */	lis r4, 0x5062746E@ha
/* 80379D1C 00376C5C  80 63 00 08 */	lwz r3, 8(r3)
/* 80379D20 00376C60  38 C5 75 70 */	addi r6, r5, 0x5F637570@l
/* 80379D24 00376C64  38 A4 74 6E */	addi r5, r4, 0x5062746E@l
/* 80379D28 00376C68  81 83 00 00 */	lwz r12, 0(r3)
/* 80379D2C 00376C6C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379D30 00376C70  7D 89 03 A6 */	mtctr r12
/* 80379D34 00376C74  4E 80 04 21 */	bctrl 
/* 80379D38 00376C78  90 7F 01 04 */	stw r3, 0x104(r31)
/* 80379D3C 00376C7C  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 80379D40 00376C80  28 00 00 00 */	cmplwi r0, 0
/* 80379D44 00376C84  40 82 00 18 */	bne .L_80379D5C
/* 80379D48 00376C88  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379D4C 00376C8C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379D50 00376C90  38 80 11 5A */	li r4, 0x1161
/* 80379D54 00376C94  4C C6 31 82 */	crclr 6
/* 80379D58 00376C98  4B CB 08 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379D5C:
/* 80379D5C 00376C9C  38 60 00 18 */	li r3, 0x18
/* 80379D60 00376CA0  4B CA A1 45 */	bl __nw__FUl
/* 80379D64 00376CA4  7C 60 1B 79 */	or. r0, r3, r3
/* 80379D68 00376CA8  41 82 00 14 */	beq .L_80379D7C
/* 80379D6C 00376CAC  7F A4 EB 78 */	mr r4, r29
/* 80379D70 00376CB0  38 A0 00 00 */	li r5, 0
/* 80379D74 00376CB4  48 02 76 35 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379D78 00376CB8  7C 60 1B 78 */	mr r0, r3
.L_80379D7C:
/* 80379D7C 00376CBC  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 80379D80 00376CC0  38 9E 0D 38 */	addi r4, r30, 0xd38
/* 80379D84 00376CC4  3C A0 00 02 */	lis r5, 2
/* 80379D88 00376CC8  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 80379D8C 00376CCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80379D90 00376CD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379D94 00376CD4  7D 89 03 A6 */	mtctr r12
/* 80379D98 00376CD8  4E 80 04 21 */	bctrl 
/* 80379D9C 00376CDC  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 80379DA0 00376CE0  28 00 00 00 */	cmplwi r0, 0
/* 80379DA4 00376CE4  40 82 00 1C */	bne .L_80379DC0
/* 80379DA8 00376CE8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80379DAC 00376CEC  28 03 00 00 */	cmplwi r3, 0
/* 80379DB0 00376CF0  41 82 00 40 */	beq .L_80379DF0
/* 80379DB4 00376CF4  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80379DB8 00376CF8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80379DBC 00376CFC  41 82 00 34 */	beq .L_80379DF0
.L_80379DC0:
/* 80379DC0 00376D00  38 00 00 00 */	li r0, 0
/* 80379DC4 00376D04  38 9F 01 B8 */	addi r4, r31, 0x1b8
/* 80379DC8 00376D08  90 1F 02 74 */	stw r0, 0x274(r31)
/* 80379DCC 00376D0C  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DD0 00376D10  48 00 25 E1 */	bl setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10
/* 80379DD4 00376D14  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DD8 00376D18  38 80 00 01 */	li r4, 1
/* 80379DDC 00376D1C  48 00 27 31 */	bl onIcon__Q28Morimura12TZukanWindowFi
/* 80379DE0 00376D20  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DE4 00376D24  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 80379DE8 00376D28  38 BF 01 D8 */	addi r5, r31, 0x1d8
/* 80379DEC 00376D2C  48 00 26 31 */	bl setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10
.L_80379DF0:
/* 80379DF0 00376D30  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DF4 00376D34  80 9F 02 74 */	lwz r4, 0x274(r31)
/* 80379DF8 00376D38  80 BF 02 70 */	lwz r5, 0x270(r31)
/* 80379DFC 00376D3C  48 00 28 71 */	bl changeIconTexture__Q28Morimura12TZukanWindowFiP7ResTIMG
/* 80379E00 00376D40  38 60 00 18 */	li r3, 0x18
/* 80379E04 00376D44  4B CA A0 A1 */	bl __nw__FUl
/* 80379E08 00376D48  7C 60 1B 79 */	or. r0, r3, r3
/* 80379E0C 00376D4C  41 82 00 14 */	beq .L_80379E20
/* 80379E10 00376D50  7F A4 EB 78 */	mr r4, r29
/* 80379E14 00376D54  38 A0 00 00 */	li r5, 0
/* 80379E18 00376D58  48 02 75 91 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379E1C 00376D5C  7C 60 1B 78 */	mr r0, r3
.L_80379E20:
/* 80379E20 00376D60  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 80379E24 00376D64  38 9E 0D 58 */	addi r4, r30, 0xd58
/* 80379E28 00376D68  3C A0 00 02 */	lis r5, 2
/* 80379E2C 00376D6C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379E30 00376D70  81 83 00 00 */	lwz r12, 0(r3)
/* 80379E34 00376D74  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379E38 00376D78  7D 89 03 A6 */	mtctr r12
/* 80379E3C 00376D7C  4E 80 04 21 */	bctrl 
/* 80379E40 00376D80  38 60 00 B0 */	li r3, 0xb0
/* 80379E44 00376D84  4B CA A0 61 */	bl __nw__FUl
/* 80379E48 00376D88  7C 78 1B 79 */	or. r24, r3, r3
/* 80379E4C 00376D8C  41 82 00 40 */	beq .L_80379E8C
/* 80379E50 00376D90  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 80379E54 00376D94  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 80379E58 00376D98  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 80379E5C 00376D9C  38 A0 00 04 */	li r5, 4
/* 80379E60 00376DA0  38 C0 00 04 */	li r6, 4
/* 80379E64 00376DA4  4B F9 16 C1 */	bl __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
/* 80379E68 00376DA8  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TScaleUpCounter@ha
/* 80379E6C 00376DAC  38 00 00 00 */	li r0, 0
/* 80379E70 00376DB0  38 63 58 3C */	addi r3, r3, __vt__Q28Morimura15TScaleUpCounter@l
/* 80379E74 00376DB4  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80379E78 00376DB8  90 78 00 00 */	stw r3, 0(r24)
/* 80379E7C 00376DBC  98 18 00 A8 */	stb r0, 0xa8(r24)
/* 80379E80 00376DC0  98 18 00 A9 */	stb r0, 0xa9(r24)
/* 80379E84 00376DC4  98 18 00 AA */	stb r0, 0xaa(r24)
/* 80379E88 00376DC8  D0 18 00 AC */	stfs f0, 0xac(r24)
.L_80379E8C:
/* 80379E8C 00376DCC  93 1F 02 50 */	stw r24, 0x250(r31)
/* 80379E90 00376DD0  3C 80 65 69 */	lis r4, 0x65693135@ha
/* 80379E94 00376DD4  38 1F 01 88 */	addi r0, r31, 0x188
/* 80379E98 00376DD8  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 80379E9C 00376DDC  90 01 00 08 */	stw r0, 8(r1)
/* 80379EA0 00376DE0  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80379EA4 00376DE4  38 00 00 01 */	li r0, 1
/* 80379EA8 00376DE8  38 C4 31 35 */	addi r6, r4, 0x65693135@l
/* 80379EAC 00376DEC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80379EB0 00376DF0  7C A7 2B 78 */	mr r7, r5
/* 80379EB4 00376DF4  7C A9 2B 78 */	mr r9, r5
/* 80379EB8 00376DF8  39 04 31 34 */	addi r8, r4, 0x3134
/* 80379EBC 00376DFC  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80379EC0 00376E00  39 44 31 32 */	addi r10, r4, 0x3132
/* 80379EC4 00376E04  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80379EC8 00376E08  81 83 00 00 */	lwz r12, 0(r3)
/* 80379ECC 00376E0C  80 84 00 08 */	lwz r4, 8(r4)
/* 80379ED0 00376E10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80379ED4 00376E14  7D 89 03 A6 */	mtctr r12
/* 80379ED8 00376E18  4E 80 04 21 */	bctrl 
/* 80379EDC 00376E1C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80379EE0 00376E20  38 80 00 01 */	li r4, 1
/* 80379EE4 00376E24  4B F9 18 F5 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 80379EE8 00376E28  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379EEC 00376E2C  3C A0 65 69 */	lis r5, 0x65693135@ha
/* 80379EF0 00376E30  3C 80 50 67 */	lis r4, 0x50676973@ha
/* 80379EF4 00376E34  80 FF 02 50 */	lwz r7, 0x250(r31)
/* 80379EF8 00376E38  80 63 00 08 */	lwz r3, 8(r3)
/* 80379EFC 00376E3C  38 C5 31 35 */	addi r6, r5, 0x65693135@l
/* 80379F00 00376E40  38 A4 69 73 */	addi r5, r4, 0x50676973@l
/* 80379F04 00376E44  48 0B AC 21 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80379F08 00376E48  38 60 00 B0 */	li r3, 0xb0
/* 80379F0C 00376E4C  4B CA 9F 99 */	bl __nw__FUl
/* 80379F10 00376E50  7C 78 1B 79 */	or. r24, r3, r3
/* 80379F14 00376E54  41 82 00 40 */	beq .L_80379F54
/* 80379F18 00376E58  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 80379F1C 00376E5C  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 80379F20 00376E60  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 80379F24 00376E64  38 A0 00 04 */	li r5, 4
/* 80379F28 00376E68  38 C0 00 02 */	li r6, 2
/* 80379F2C 00376E6C  4B F9 15 F9 */	bl __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
/* 80379F30 00376E70  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TScaleUpCounter@ha
/* 80379F34 00376E74  38 00 00 00 */	li r0, 0
/* 80379F38 00376E78  38 63 58 3C */	addi r3, r3, __vt__Q28Morimura15TScaleUpCounter@l
/* 80379F3C 00376E7C  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80379F40 00376E80  90 78 00 00 */	stw r3, 0(r24)
/* 80379F44 00376E84  98 18 00 A8 */	stb r0, 0xa8(r24)
/* 80379F48 00376E88  98 18 00 A9 */	stb r0, 0xa9(r24)
/* 80379F4C 00376E8C  98 18 00 AA */	stb r0, 0xaa(r24)
/* 80379F50 00376E90  D0 18 00 AC */	stfs f0, 0xac(r24)
.L_80379F54:
/* 80379F54 00376E94  93 1F 02 54 */	stw r24, 0x254(r31)
/* 80379F58 00376E98  3C 80 73 69 */	lis r4, 0x73693031@ha
/* 80379F5C 00376E9C  38 1F 01 8C */	addi r0, r31, 0x18c
/* 80379F60 00376EA0  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 80379F64 00376EA4  90 01 00 08 */	stw r0, 8(r1)
/* 80379F68 00376EA8  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 80379F6C 00376EAC  39 04 30 31 */	addi r8, r4, 0x73693031@l
/* 80379F70 00376EB0  38 C4 30 30 */	addi r6, r4, 0x3030
/* 80379F74 00376EB4  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379F78 00376EB8  7C A7 2B 78 */	mr r7, r5
/* 80379F7C 00376EBC  7D 0A 43 78 */	mr r10, r8
/* 80379F80 00376EC0  7C A9 2B 78 */	mr r9, r5
/* 80379F84 00376EC4  7C 03 00 D0 */	neg r0, r3
/* 80379F88 00376EC8  7C 00 1B 78 */	or r0, r0, r3
/* 80379F8C 00376ECC  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80379F90 00376ED0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80379F94 00376ED4  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80379F98 00376ED8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80379F9C 00376EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80379FA0 00376EE0  80 84 00 08 */	lwz r4, 8(r4)
/* 80379FA4 00376EE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80379FA8 00376EE8  7D 89 03 A6 */	mtctr r12
/* 80379FAC 00376EEC  4E 80 04 21 */	bctrl 
/* 80379FB0 00376EF0  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80379FB4 00376EF4  38 80 00 01 */	li r4, 1
/* 80379FB8 00376EF8  4B F9 18 21 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 80379FBC 00376EFC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379FC0 00376F00  3C A0 73 69 */	lis r5, 0x73693030@ha
/* 80379FC4 00376F04  3C 80 50 74 */	lis r4, 0x5074616F@ha
/* 80379FC8 00376F08  80 FF 02 54 */	lwz r7, 0x254(r31)
/* 80379FCC 00376F0C  80 63 00 08 */	lwz r3, 8(r3)
/* 80379FD0 00376F10  38 C5 30 30 */	addi r6, r5, 0x73693030@l
/* 80379FD4 00376F14  38 A4 61 6F */	addi r5, r4, 0x5074616F@l
/* 80379FD8 00376F18  48 0B AB 4D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80379FDC 00376F1C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379FE0 00376F20  3C A0 69 6E */	lis r5, 0x696E6F31@ha
/* 80379FE4 00376F24  3C 80 50 74 */	lis r4, 0x5074656B@ha
/* 80379FE8 00376F28  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80379FEC 00376F2C  80 63 00 08 */	lwz r3, 8(r3)
/* 80379FF0 00376F30  38 C5 6F 31 */	addi r6, r5, 0x696E6F31@l
/* 80379FF4 00376F34  38 A4 65 6B */	addi r5, r4, 0x5074656B@l
/* 80379FF8 00376F38  38 FF 01 94 */	addi r7, r31, 0x194
/* 80379FFC 00376F3C  39 00 00 03 */	li r8, 3
/* 8037A000 00376F40  48 02 7C 5D */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 8037A004 00376F44  90 7F 00 E0 */	stw r3, 0xe0(r31)
/* 8037A008 00376F48  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A00C 00376F4C  28 00 00 00 */	cmplwi r0, 0
/* 8037A010 00376F50  41 82 00 3C */	beq .L_8037A04C
/* 8037A014 00376F54  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037A018 00376F58  28 00 00 00 */	cmplwi r0, 0
/* 8037A01C 00376F5C  40 82 00 14 */	bne .L_8037A030
/* 8037A020 00376F60  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037A024 00376F64  4B F9 17 9D */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037A028 00376F68  38 00 00 00 */	li r0, 0
/* 8037A02C 00376F6C  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037A030:
/* 8037A030 00376F70  88 0D 98 FB */	lbz r0, mZukanCategoryTest__Q28Morimura10TZukanBase@sda21(r13)
/* 8037A034 00376F74  28 00 00 00 */	cmplwi r0, 0
/* 8037A038 00376F78  41 82 00 14 */	beq .L_8037A04C
/* 8037A03C 00376F7C  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037A040 00376F80  4B F9 17 81 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037A044 00376F84  38 00 00 01 */	li r0, 1
/* 8037A048 00376F88  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037A04C:
/* 8037A04C 00376F8C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8037A050 00376F90  3C A0 73 69 */	lis r5, 0x73693030@ha
/* 8037A054 00376F94  3C 80 50 74 */	lis r4, 0x5074616F@ha
/* 8037A058 00376F98  80 63 00 08 */	lwz r3, 8(r3)
/* 8037A05C 00376F9C  38 C5 30 30 */	addi r6, r5, 0x73693030@l
/* 8037A060 00376FA0  38 A4 61 6F */	addi r5, r4, 0x5074616F@l
/* 8037A064 00376FA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A068 00376FA8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A06C 00376FAC  7D 89 03 A6 */	mtctr r12
/* 8037A070 00376FB0  4E 80 04 21 */	bctrl 
/* 8037A074 00376FB4  38 00 00 00 */	li r0, 0
/* 8037A078 00376FB8  3C 80 73 69 */	lis r4, 0x73693031@ha
/* 8037A07C 00376FBC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A080 00376FC0  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 8037A084 00376FC4  38 C4 30 31 */	addi r6, r4, 0x73693031@l
/* 8037A088 00376FC8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A08C 00376FCC  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 8037A090 00376FD0  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A094 00376FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A098 00376FD8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A09C 00376FDC  7D 89 03 A6 */	mtctr r12
/* 8037A0A0 00376FE0  4E 80 04 21 */	bctrl 
/* 8037A0A4 00376FE4  38 00 00 00 */	li r0, 0
/* 8037A0A8 00376FE8  3C 80 65 69 */	lis r4, 0x65693132@ha
/* 8037A0AC 00376FEC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A0B0 00376FF0  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A0B4 00376FF4  38 C4 31 32 */	addi r6, r4, 0x65693132@l
/* 8037A0B8 00376FF8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A0BC 00376FFC  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A0C0 00377000  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A0C4 00377004  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A0C8 00377008  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A0CC 0037700C  7D 89 03 A6 */	mtctr r12
/* 8037A0D0 00377010  4E 80 04 21 */	bctrl 
/* 8037A0D4 00377014  38 00 00 00 */	li r0, 0
/* 8037A0D8 00377018  3C 80 65 69 */	lis r4, 0x65693133@ha
/* 8037A0DC 0037701C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A0E0 00377020  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A0E4 00377024  38 C4 31 33 */	addi r6, r4, 0x65693133@l
/* 8037A0E8 00377028  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A0EC 0037702C  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A0F0 00377030  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A0F4 00377034  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A0F8 00377038  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A0FC 0037703C  7D 89 03 A6 */	mtctr r12
/* 8037A100 00377040  4E 80 04 21 */	bctrl 
/* 8037A104 00377044  38 00 00 00 */	li r0, 0
/* 8037A108 00377048  3C 80 65 69 */	lis r4, 0x65693134@ha
/* 8037A10C 0037704C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A110 00377050  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A114 00377054  38 C4 31 34 */	addi r6, r4, 0x65693134@l
/* 8037A118 00377058  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A11C 0037705C  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A120 00377060  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A124 00377064  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A128 00377068  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A12C 0037706C  7D 89 03 A6 */	mtctr r12
/* 8037A130 00377070  4E 80 04 21 */	bctrl 
/* 8037A134 00377074  38 00 00 00 */	li r0, 0
/* 8037A138 00377078  3C 80 65 69 */	lis r4, 0x65693135@ha
/* 8037A13C 0037707C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A140 00377080  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A144 00377084  38 C4 31 35 */	addi r6, r4, 0x65693135@l
/* 8037A148 00377088  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A14C 0037708C  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A150 00377090  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A154 00377094  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A158 00377098  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A15C 0037709C  7D 89 03 A6 */	mtctr r12
/* 8037A160 003770A0  4E 80 04 21 */	bctrl 
/* 8037A164 003770A4  38 00 00 00 */	li r0, 0
/* 8037A168 003770A8  7F A4 EB 78 */	mr r4, r29
/* 8037A16C 003770AC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A170 003770B0  7F E3 FB 78 */	mr r3, r31
/* 8037A174 003770B4  4B FF 6E 59 */	bl doCreate__Q28Morimura10TZukanBaseFP10JKRArchive
/* 8037A178 003770B8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A17C 003770BC  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8037A180 003770C0  80 83 00 00 */	lwz r4, 0(r3)
/* 8037A184 003770C4  80 63 00 04 */	lwz r3, 4(r3)
/* 8037A188 003770C8  80 84 00 04 */	lwz r4, 4(r4)
/* 8037A18C 003770CC  80 63 00 04 */	lwz r3, 4(r3)
/* 8037A190 003770D0  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 8037A194 003770D4  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 8037A198 003770D8  90 1F 02 38 */	stw r0, 0x238(r31)
/* 8037A19C 003770DC  EF C1 00 28 */	fsubs f30, f1, f0
/* 8037A1A0 003770E0  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A1A4 003770E4  28 00 00 00 */	cmplwi r0, 0
/* 8037A1A8 003770E8  40 82 00 1C */	bne .L_8037A1C4
/* 8037A1AC 003770EC  7F E3 FB 78 */	mr r3, r31
/* 8037A1B0 003770F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A1B4 003770F4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037A1B8 003770F8  7D 89 03 A6 */	mtctr r12
/* 8037A1BC 003770FC  4E 80 04 21 */	bctrl 
/* 8037A1C0 00377100  90 7F 02 38 */	stw r3, 0x238(r31)
.L_8037A1C4:
/* 8037A1C4 00377104  3A C0 00 00 */	li r22, 0
/* 8037A1C8 00377108  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
.L_8037A1CC:
/* 8037A1CC 0037710C  3A E0 00 00 */	li r23, 0
/* 8037A1D0 00377110  3B 00 00 00 */	li r24, 0
/* 8037A1D4 00377114  48 00 00 48 */	b .L_8037A21C
.L_8037A1D8:
/* 8037A1D8 00377118  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A1DC 0037711C  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A1E0 00377120  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8037A1E4 00377124  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A1E8 00377128  EC 00 F0 2A */	fadds f0, f0, f30
/* 8037A1EC 0037712C  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8037A1F0 00377130  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A1F4 00377134  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A1F8 00377138  7D 89 03 A6 */	mtctr r12
/* 8037A1FC 0037713C  4E 80 04 21 */	bctrl 
/* 8037A200 00377140  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A204 00377144  3A F7 00 01 */	addi r23, r23, 1
/* 8037A208 00377148  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A20C 0037714C  3B 18 00 04 */	addi r24, r24, 4
/* 8037A210 00377150  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A214 00377154  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037A218 00377158  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_8037A21C:
/* 8037A21C 0037715C  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037A220 00377160  7C 17 00 00 */	cmpw r23, r0
/* 8037A224 00377164  41 80 FF B4 */	blt .L_8037A1D8
/* 8037A228 00377168  7F E3 FB 78 */	mr r3, r31
/* 8037A22C 0037716C  38 80 00 00 */	li r4, 0
/* 8037A230 00377170  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A234 00377174  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8037A238 00377178  7D 89 03 A6 */	mtctr r12
/* 8037A23C 0037717C  4E 80 04 21 */	bctrl 
/* 8037A240 00377180  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8037A244 00377184  38 00 00 00 */	li r0, 0
/* 8037A248 00377188  7F E3 FB 78 */	mr r3, r31
/* 8037A24C 0037718C  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 8037A250 00377190  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037A254 00377194  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A258 00377198  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037A25C 0037719C  7D 89 03 A6 */	mtctr r12
/* 8037A260 003771A0  4E 80 04 21 */	bctrl 
/* 8037A264 003771A4  3A D6 00 01 */	addi r22, r22, 1
/* 8037A268 003771A8  2C 16 00 04 */	cmpwi r22, 4
/* 8037A26C 003771AC  41 80 FF 60 */	blt .L_8037A1CC
/* 8037A270 003771B0  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 8037A274 003771B4  3B 00 FF FF */	li r24, -1
/* 8037A278 003771B8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8037A27C 003771BC  28 00 00 00 */	cmplwi r0, 0
/* 8037A280 003771C0  41 82 00 3C */	beq .L_8037A2BC
/* 8037A284 003771C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A288 003771C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8037A28C 003771CC  7D 89 03 A6 */	mtctr r12
/* 8037A290 003771D0  4E 80 04 21 */	bctrl 
/* 8037A294 003771D4  3C A0 49 54 */	lis r5, 0x4954454D@ha
/* 8037A298 003771D8  38 00 00 44 */	li r0, 0x44
/* 8037A29C 003771DC  38 A5 45 4D */	addi r5, r5, 0x4954454D@l
/* 8037A2A0 003771E0  7C 84 2A 78 */	xor r4, r4, r5
/* 8037A2A4 003771E4  7C 60 02 78 */	xor r0, r3, r0
/* 8037A2A8 003771E8  7C 80 03 79 */	or. r0, r4, r0
/* 8037A2AC 003771EC  40 82 00 10 */	bne .L_8037A2BC
/* 8037A2B0 003771F0  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 8037A2B4 003771F4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8037A2B8 003771F8  83 03 00 00 */	lwz r24, 0(r3)
.L_8037A2BC:
/* 8037A2BC 003771FC  2C 18 00 00 */	cmpwi r24, 0
/* 8037A2C0 00377200  40 80 00 90 */	bge .L_8037A350
/* 8037A2C4 00377204  3A C0 00 00 */	li r22, 0
/* 8037A2C8 00377208  48 00 00 6C */	b .L_8037A334
.L_8037A2CC:
/* 8037A2CC 0037720C  7F E3 FB 78 */	mr r3, r31
/* 8037A2D0 00377210  7E C4 B3 78 */	mr r4, r22
/* 8037A2D4 00377214  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A2D8 00377218  38 A0 00 00 */	li r5, 0
/* 8037A2DC 0037721C  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8037A2E0 00377220  7D 89 03 A6 */	mtctr r12
/* 8037A2E4 00377224  4E 80 04 21 */	bctrl 
/* 8037A2E8 00377228  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037A2EC 0037722C  41 82 00 44 */	beq .L_8037A330
/* 8037A2F0 00377230  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A2F4 00377234  7E D8 B3 78 */	mr r24, r22
/* 8037A2F8 00377238  28 00 00 00 */	cmplwi r0, 0
/* 8037A2FC 0037723C  41 82 00 54 */	beq .L_8037A350
/* 8037A300 00377240  80 1F 02 2C */	lwz r0, 0x22c(r31)
/* 8037A304 00377244  28 00 00 00 */	cmplwi r0, 0
/* 8037A308 00377248  40 82 00 18 */	bne .L_8037A320
/* 8037A30C 0037724C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8037A310 00377250  38 BE 00 18 */	addi r5, r30, 0x18
/* 8037A314 00377254  38 80 11 B5 */	li r4, 0x11bc
/* 8037A318 00377258  4C C6 31 82 */	crclr 6
/* 8037A31C 0037725C  4B CB 03 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037A320:
/* 8037A320 00377260  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 8037A324 00377264  56 C0 10 3A */	slwi r0, r22, 2
/* 8037A328 00377268  7F 03 00 2E */	lwzx r24, r3, r0
/* 8037A32C 0037726C  48 00 00 24 */	b .L_8037A350
.L_8037A330:
/* 8037A330 00377270  3A D6 00 01 */	addi r22, r22, 1
.L_8037A334:
/* 8037A334 00377274  7F E3 FB 78 */	mr r3, r31
/* 8037A338 00377278  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A33C 0037727C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037A340 00377280  7D 89 03 A6 */	mtctr r12
/* 8037A344 00377284  4E 80 04 21 */	bctrl 
/* 8037A348 00377288  7C 16 18 00 */	cmpw r22, r3
/* 8037A34C 0037728C  41 80 FF 80 */	blt .L_8037A2CC
.L_8037A350:
/* 8037A350 00377290  2C 18 00 00 */	cmpwi r24, 0
/* 8037A354 00377294  41 80 01 3C */	blt .L_8037A490
/* 8037A358 00377298  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A35C 0037729C  28 00 00 00 */	cmplwi r0, 0
/* 8037A360 003772A0  41 82 00 40 */	beq .L_8037A3A0
/* 8037A364 003772A4  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8037A368 003772A8  38 A0 00 00 */	li r5, 0
/* 8037A36C 003772AC  38 80 00 00 */	li r4, 0
/* 8037A370 003772B0  7C 09 03 A6 */	mtctr r0
/* 8037A374 003772B4  2C 00 00 00 */	cmpwi r0, 0
/* 8037A378 003772B8  40 81 00 28 */	ble .L_8037A3A0
.L_8037A37C:
/* 8037A37C 003772BC  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 8037A380 003772C0  7C 03 20 2E */	lwzx r0, r3, r4
/* 8037A384 003772C4  7C 18 00 00 */	cmpw r24, r0
/* 8037A388 003772C8  40 82 00 0C */	bne .L_8037A394
/* 8037A38C 003772CC  7C B8 2B 78 */	mr r24, r5
/* 8037A390 003772D0  48 00 00 10 */	b .L_8037A3A0
.L_8037A394:
/* 8037A394 003772D4  38 84 00 04 */	addi r4, r4, 4
/* 8037A398 003772D8  38 A5 00 01 */	addi r5, r5, 1
/* 8037A39C 003772DC  42 00 FF E0 */	bdnz .L_8037A37C
.L_8037A3A0:
/* 8037A3A0 003772E0  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 8037A3A4 003772E4  2C 18 00 02 */	cmpwi r24, 2
/* 8037A3A8 003772E8  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 8037A3AC 003772EC  7C 60 C0 96 */	mulhw r3, r0, r24
/* 8037A3B0 003772F0  54 60 0F FE */	srwi r0, r3, 0x1f
/* 8037A3B4 003772F4  7F 23 02 14 */	add r25, r3, r0
/* 8037A3B8 003772F8  1C 19 00 03 */	mulli r0, r25, 3
/* 8037A3BC 003772FC  7C 00 C0 50 */	subf r0, r0, r24
/* 8037A3C0 00377300  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 8037A3C4 00377304  40 81 00 B8 */	ble .L_8037A47C
/* 8037A3C8 00377308  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
/* 8037A3CC 0037730C  3A C0 00 00 */	li r22, 0
/* 8037A3D0 00377310  48 00 00 A0 */	b .L_8037A470
.L_8037A3D4:
/* 8037A3D4 00377314  3A E0 00 00 */	li r23, 0
/* 8037A3D8 00377318  3B 00 00 00 */	li r24, 0
/* 8037A3DC 0037731C  48 00 00 48 */	b .L_8037A424
.L_8037A3E0:
/* 8037A3E0 00377320  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A3E4 00377324  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A3E8 00377328  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8037A3EC 0037732C  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A3F0 00377330  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8037A3F4 00377334  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8037A3F8 00377338  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A3FC 0037733C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A400 00377340  7D 89 03 A6 */	mtctr r12
/* 8037A404 00377344  4E 80 04 21 */	bctrl 
/* 8037A408 00377348  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A40C 0037734C  3A F7 00 01 */	addi r23, r23, 1
/* 8037A410 00377350  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A414 00377354  3B 18 00 04 */	addi r24, r24, 4
/* 8037A418 00377358  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A41C 0037735C  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037A420 00377360  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_8037A424:
/* 8037A424 00377364  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037A428 00377368  7C 17 00 00 */	cmpw r23, r0
/* 8037A42C 0037736C  41 80 FF B4 */	blt .L_8037A3E0
/* 8037A430 00377370  7F E3 FB 78 */	mr r3, r31
/* 8037A434 00377374  38 80 00 01 */	li r4, 1
/* 8037A438 00377378  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A43C 0037737C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8037A440 00377380  7D 89 03 A6 */	mtctr r12
/* 8037A444 00377384  4E 80 04 21 */	bctrl 
/* 8037A448 00377388  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8037A44C 0037738C  38 00 00 00 */	li r0, 0
/* 8037A450 00377390  7F E3 FB 78 */	mr r3, r31
/* 8037A454 00377394  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 8037A458 00377398  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037A45C 0037739C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A460 003773A0  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037A464 003773A4  7D 89 03 A6 */	mtctr r12
/* 8037A468 003773A8  4E 80 04 21 */	bctrl 
/* 8037A46C 003773AC  3A D6 00 01 */	addi r22, r22, 1
.L_8037A470:
/* 8037A470 003773B0  7C 16 C8 00 */	cmpw r22, r25
/* 8037A474 003773B4  41 80 FF 60 */	blt .L_8037A3D4
/* 8037A478 003773B8  48 00 00 18 */	b .L_8037A490
.L_8037A47C:
/* 8037A47C 003773BC  7F E3 FB 78 */	mr r3, r31
/* 8037A480 003773C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A484 003773C4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037A488 003773C8  7D 89 03 A6 */	mtctr r12
/* 8037A48C 003773CC  4E 80 04 21 */	bctrl 
.L_8037A490:
/* 8037A490 003773D0  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8037A494 003773D4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A498 003773D8  54 00 10 3A */	slwi r0, r0, 2
/* 8037A49C 003773DC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037A4A0 003773E0  48 02 81 1D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037A4A4 003773E4  90 7F 02 24 */	stw r3, 0x224(r31)
/* 8037A4A8 003773E8  80 9F 02 24 */	lwz r4, 0x224(r31)
/* 8037A4AC 003773EC  2C 04 00 00 */	cmpwi r4, 0
/* 8037A4B0 003773F0  41 80 00 24 */	blt .L_8037A4D4
/* 8037A4B4 003773F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A4B8 003773F8  7F E3 FB 78 */	mr r3, r31
/* 8037A4BC 003773FC  82 DF 01 10 */	lwz r22, 0x110(r31)
/* 8037A4C0 00377400  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 8037A4C4 00377404  7D 89 03 A6 */	mtctr r12
/* 8037A4C8 00377408  4E 80 04 21 */	bctrl 
/* 8037A4CC 0037740C  90 96 00 1C */	stw r4, 0x1c(r22)
/* 8037A4D0 00377410  90 76 00 18 */	stw r3, 0x18(r22)
.L_8037A4D4:
/* 8037A4D4 00377414  7F 83 E3 78 */	mr r3, r28
/* 8037A4D8 00377418  4B CA 90 CD */	bl becomeCurrentHeap__7JKRHeapFv
/* 8037A4DC 0037741C  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 8037A4E0 00377420  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8037A4E4 00377424  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 8037A4E8 00377428  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8037A4EC 0037742C  BA C1 00 88 */	lmw r22, 0x88(r1)
/* 8037A4F0 00377430  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8037A4F4 00377434  7C 08 03 A6 */	mtlr r0
/* 8037A4F8 00377438  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8037A4FC 0037743C  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura10TItemZukanFP10JKRArchive
.else
.fn doCreate__Q28Morimura10TItemZukanFP10JKRArchive, global
/* 80378E70 00375DB0  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 80378E74 00375DB4  7C 08 02 A6 */	mflr r0
/* 80378E78 00375DB8  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80378E7C 00375DBC  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80378E80 00375DC0  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80378E84 00375DC4  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80378E88 00375DC8  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80378E8C 00375DCC  BE C1 00 88 */	stmw r22, 0x88(r1)
/* 80378E90 00375DD0  3C A0 80 51 */	lis r5, mScrollParm__Q28Morimura10TZukanBase@ha
/* 80378E94 00375DD4  C0 82 08 38 */	lfs f4, lbl_8051EB98@sda21(r2)
/* 80378E98 00375DD8  39 80 00 00 */	li r12, 0
/* 80378E9C 00375DDC  39 4D 99 20 */	addi r10, r13, mCategoryColor0w__Q28Morimura10TZukanBase@sda21
/* 80378EA0 00375DE0  3B 05 40 1C */	addi r24, r5, mScrollParm__Q28Morimura10TZukanBase@l
/* 80378EA4 00375DE4  C0 62 08 58 */	lfs f3, lbl_8051EBB8@sda21(r2)
/* 80378EA8 00375DE8  C0 42 08 5C */	lfs f2, lbl_8051EBBC@sda21(r2)
/* 80378EAC 00375DEC  39 60 00 5F */	li r11, 0x5f
/* 80378EB0 00375DF0  C0 22 08 74 */	lfs f1, lbl_8051EBD4@sda21(r2)
/* 80378EB4 00375DF4  39 20 00 E6 */	li r9, 0xe6
/* 80378EB8 00375DF8  39 0D 99 24 */	addi r8, r13, mCategoryColor0b__Q28Morimura10TZukanBase@sda21
/* 80378EBC 00375DFC  C0 02 07 EC */	lfs f0, lbl_8051EB4C@sda21(r2)
/* 80378EC0 00375E00  38 ED 99 28 */	addi r7, r13, mCategoryColor1w__Q28Morimura10TZukanBase@sda21
/* 80378EC4 00375E04  38 C0 00 FF */	li r6, 0xff
/* 80378EC8 00375E08  38 AD 99 2C */	addi r5, r13, mCategoryColor1b__Q28Morimura10TZukanBase@sda21
/* 80378ECC 00375E0C  38 00 00 80 */	li r0, 0x80
/* 80378ED0 00375E10  3F 20 80 49 */	lis r25, lbl_80492520@ha
/* 80378ED4 00375E14  7C 7F 1B 78 */	mr r31, r3
/* 80378ED8 00375E18  D0 98 00 00 */	stfs f4, 0(r24)
/* 80378EDC 00375E1C  7C 9D 23 78 */	mr r29, r4
/* 80378EE0 00375E20  3B D9 25 20 */	addi r30, r25, lbl_80492520@l
/* 80378EE4 00375E24  38 60 00 38 */	li r3, 0x38
/* 80378EE8 00375E28  D0 78 00 08 */	stfs f3, 8(r24)
/* 80378EEC 00375E2C  D0 58 00 04 */	stfs f2, 4(r24)
/* 80378EF0 00375E30  D0 38 00 0C */	stfs f1, 0xc(r24)
/* 80378EF4 00375E34  D0 18 00 10 */	stfs f0, 0x10(r24)
/* 80378EF8 00375E38  99 8D 99 20 */	stb r12, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378EFC 00375E3C  99 6A 00 01 */	stb r11, 1(r10)
/* 80378F00 00375E40  99 8A 00 02 */	stb r12, 2(r10)
/* 80378F04 00375E44  99 2D 99 24 */	stb r9, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F08 00375E48  99 28 00 01 */	stb r9, 1(r8)
/* 80378F0C 00375E4C  99 88 00 02 */	stb r12, 2(r8)
/* 80378F10 00375E50  99 8D 99 28 */	stb r12, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F14 00375E54  99 87 00 01 */	stb r12, 1(r7)
/* 80378F18 00375E58  98 C7 00 02 */	stb r6, 2(r7)
/* 80378F1C 00375E5C  99 8D 99 2C */	stb r12, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F20 00375E60  98 05 00 01 */	stb r0, 1(r5)
/* 80378F24 00375E64  98 C5 00 02 */	stb r6, 2(r5)
/* 80378F28 00375E68  4B CA AF 7D */	bl __nw__FUl
/* 80378F2C 00375E6C  7C 60 1B 79 */	or. r0, r3, r3
/* 80378F30 00375E70  41 82 00 24 */	beq .L_80378F54
/* 80378F34 00375E74  3C A0 75 6D */	lis r5, 0x756D6D79@ha
/* 80378F38 00375E78  38 80 00 00 */	li r4, 0
/* 80378F3C 00375E7C  38 C5 6D 79 */	addi r6, r5, 0x756D6D79@l
/* 80378F40 00375E80  38 A0 00 64 */	li r5, 0x64
/* 80378F44 00375E84  38 E0 00 03 */	li r7, 3
/* 80378F48 00375E88  39 00 00 32 */	li r8, 0x32
/* 80378F4C 00375E8C  48 09 2F 25 */	bl __ct__Q32kh6Screen14khUtilColorAnmFPQ29P2DScreen3MgrUxii
/* 80378F50 00375E90  7C 60 1B 78 */	mr r0, r3
.L_80378F54:
/* 80378F54 00375E94  90 1F 02 4C */	stw r0, 0x24c(r31)
/* 80378F58 00375E98  38 00 00 01 */	li r0, 1
/* 80378F5C 00375E9C  7F E3 FB 78 */	mr r3, r31
/* 80378F60 00375EA0  80 AD 99 20 */	lwz r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F64 00375EA4  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378F68 00375EA8  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80378F6C 00375EAC  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80378F70 00375EB0  88 A1 00 18 */	lbz r5, 0x18(r1)
/* 80378F74 00375EB4  88 81 00 19 */	lbz r4, 0x19(r1)
/* 80378F78 00375EB8  98 A6 00 00 */	stb r5, 0(r6)
/* 80378F7C 00375EBC  88 A1 00 1A */	lbz r5, 0x1a(r1)
/* 80378F80 00375EC0  98 86 00 01 */	stb r4, 1(r6)
/* 80378F84 00375EC4  88 81 00 1B */	lbz r4, 0x1b(r1)
/* 80378F88 00375EC8  98 A6 00 02 */	stb r5, 2(r6)
/* 80378F8C 00375ECC  98 86 00 03 */	stb r4, 3(r6)
/* 80378F90 00375ED0  80 AD 99 24 */	lwz r5, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 80378F94 00375ED4  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378F98 00375ED8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80378F9C 00375EDC  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80378FA0 00375EE0  88 A1 00 14 */	lbz r5, 0x14(r1)
/* 80378FA4 00375EE4  88 81 00 15 */	lbz r4, 0x15(r1)
/* 80378FA8 00375EE8  98 A6 00 04 */	stb r5, 4(r6)
/* 80378FAC 00375EEC  88 A1 00 16 */	lbz r5, 0x16(r1)
/* 80378FB0 00375EF0  98 86 00 05 */	stb r4, 5(r6)
/* 80378FB4 00375EF4  88 81 00 17 */	lbz r4, 0x17(r1)
/* 80378FB8 00375EF8  98 A6 00 06 */	stb r5, 6(r6)
/* 80378FBC 00375EFC  98 86 00 07 */	stb r4, 7(r6)
/* 80378FC0 00375F00  80 AD 99 20 */	lwz r5, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 80378FC4 00375F04  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378FC8 00375F08  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80378FCC 00375F0C  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 80378FD0 00375F10  88 A1 00 10 */	lbz r5, 0x10(r1)
/* 80378FD4 00375F14  88 81 00 11 */	lbz r4, 0x11(r1)
/* 80378FD8 00375F18  98 A6 00 08 */	stb r5, 8(r6)
/* 80378FDC 00375F1C  88 A1 00 12 */	lbz r5, 0x12(r1)
/* 80378FE0 00375F20  98 86 00 09 */	stb r4, 9(r6)
/* 80378FE4 00375F24  88 81 00 13 */	lbz r4, 0x13(r1)
/* 80378FE8 00375F28  98 A6 00 0A */	stb r5, 0xa(r6)
/* 80378FEC 00375F2C  98 86 00 0B */	stb r4, 0xb(r6)
/* 80378FF0 00375F30  80 9F 02 4C */	lwz r4, 0x24c(r31)
/* 80378FF4 00375F34  98 04 00 34 */	stb r0, 0x34(r4)
/* 80378FF8 00375F38  93 BF 00 78 */	stw r29, 0x78(r31)
/* 80378FFC 00375F3C  48 0D AF AD */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80379000 00375F40  3C 80 4D 52 */	lis r4, 0x4D524D52@ha
/* 80379004 00375F44  3C C0 49 54 */	lis r6, 0x4954454D@ha
/* 80379008 00375F48  7C 78 1B 78 */	mr r24, r3
/* 8037900C 00375F4C  38 A0 00 44 */	li r5, 0x44
/* 80379010 00375F50  38 84 4D 52 */	addi r4, r4, 0x4D524D52@l
/* 80379014 00375F54  38 C6 45 4D */	addi r6, r6, 0x4954454D@l
/* 80379018 00375F58  4B F9 63 05 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8037901C 00375F5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80379020 00375F60  41 82 00 0C */	beq .L_8037902C
/* 80379024 00375F64  93 1F 02 48 */	stw r24, 0x248(r31)
/* 80379028 00375F68  48 00 00 0C */	b .L_80379034
.L_8037902C:
/* 8037902C 00375F6C  38 00 00 01 */	li r0, 1
/* 80379030 00375F70  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_80379034:
/* 80379034 00375F74  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80379038 00375F78  28 00 00 00 */	cmplwi r0, 0
/* 8037903C 00375F7C  41 82 02 28 */	beq .L_80379264
/* 80379040 00375F80  80 8D 99 30 */	lwz r4, mDebugHeapParent__Q28Morimura10TZukanBase@sda21(r13)
/* 80379044 00375F84  28 04 00 00 */	cmplwi r4, 0
/* 80379048 00375F88  41 82 02 04 */	beq .L_8037924C
/* 8037904C 00375F8C  3C 60 00 10 */	lis r3, 0x10
/* 80379050 00375F90  38 A0 00 01 */	li r5, 1
/* 80379054 00375F94  4B CA 6E 75 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 80379058 00375F98  28 03 00 00 */	cmplwi r3, 0
/* 8037905C 00375F9C  90 6D 99 34 */	stw r3, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80379060 00375FA0  40 82 00 18 */	bne .L_80379078
/* 80379064 00375FA4  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379068 00375FA8  38 BE 00 18 */	addi r5, r30, 0x18
/* 8037906C 00375FAC  38 80 10 36 */	li r4, 0x1036
/* 80379070 00375FB0  4C C6 31 82 */	crclr 6
/* 80379074 00375FB4  4B CB 15 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379078:
/* 80379078 00375FB8  80 8D 99 34 */	lwz r4, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 8037907C 00375FBC  38 60 00 20 */	li r3, 0x20
/* 80379080 00375FC0  38 A0 00 00 */	li r5, 0
/* 80379084 00375FC4  4B CA AE BD */	bl __nw__FUlP7JKRHeapi
/* 80379088 00375FC8  28 03 00 00 */	cmplwi r3, 0
/* 8037908C 00375FCC  41 82 00 48 */	beq .L_803790D4
/* 80379090 00375FD0  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80379094 00375FD4  3C A0 80 4C */	lis r5, __vt__Q28Morimura19DispMemberZukanBase@ha
/* 80379098 00375FD8  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8037909C 00375FDC  3C 80 80 4C */	lis r4, __vt__Q28Morimura19DispMemberZukanItem@ha
/* 803790A0 00375FE0  90 03 00 00 */	stw r0, 0(r3)
/* 803790A4 00375FE4  38 C0 00 00 */	li r6, 0
/* 803790A8 00375FE8  38 A5 0B 44 */	addi r5, r5, __vt__Q28Morimura19DispMemberZukanBase@l
/* 803790AC 00375FEC  38 04 0B 14 */	addi r0, r4, __vt__Q28Morimura19DispMemberZukanItem@l
/* 803790B0 00375FF0  90 C3 00 04 */	stw r6, 4(r3)
/* 803790B4 00375FF4  90 A3 00 00 */	stw r5, 0(r3)
/* 803790B8 00375FF8  90 C3 00 08 */	stw r6, 8(r3)
/* 803790BC 00375FFC  90 C3 00 0C */	stw r6, 0xc(r3)
/* 803790C0 00376000  90 C3 00 10 */	stw r6, 0x10(r3)
/* 803790C4 00376004  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803790C8 00376008  90 C3 00 18 */	stw r6, 0x18(r3)
/* 803790CC 0037600C  90 C3 00 1C */	stw r6, 0x1c(r3)
/* 803790D0 00376010  90 03 00 00 */	stw r0, 0(r3)
.L_803790D4:
/* 803790D4 00376014  90 7F 02 48 */	stw r3, 0x248(r31)
/* 803790D8 00376018  38 00 00 01 */	li r0, 1
/* 803790DC 0037601C  7F E3 FB 78 */	mr r3, r31
/* 803790E0 00376020  80 AD 99 34 */	lwz r5, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 803790E4 00376024  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 803790E8 00376028  90 A4 00 08 */	stw r5, 8(r4)
/* 803790EC 0037602C  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803790F0 00376030  81 9F 00 00 */	lwz r12, 0(r31)
/* 803790F4 00376034  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803790F8 00376038  7D 89 03 A6 */	mtctr r12
/* 803790FC 0037603C  4E 80 04 21 */	bctrl 
/* 80379100 00376040  4B CA AE AD */	bl __nwa__FUl
/* 80379104 00376044  90 7F 01 80 */	stw r3, 0x180(r31)
/* 80379108 00376048  3B 60 00 00 */	li r27, 0
/* 8037910C 0037604C  CB C2 08 20 */	lfd f30, lbl_8051EB80@sda21(r2)
/* 80379110 00376050  3F 20 43 30 */	lis r25, 0x4330
/* 80379114 00376054  C3 E2 08 54 */	lfs f31, lbl_8051EBB4@sda21(r2)
/* 80379118 00376058  3B 40 00 00 */	li r26, 0
/* 8037911C 0037605C  3B 00 00 01 */	li r24, 1
/* 80379120 00376060  48 00 00 40 */	b .L_80379160
.L_80379124:
/* 80379124 00376064  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80379128 00376068  7F 43 D9 AE */	stbx r26, r3, r27
/* 8037912C 0037606C  4B D5 04 75 */	bl rand
/* 80379130 00376070  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80379134 00376074  93 21 00 78 */	stw r25, 0x78(r1)
/* 80379138 00376078  C0 0D 98 FC */	lfs f0, mRandShowRate__Q28Morimura10TZukanBase@sda21(r13)
/* 8037913C 0037607C  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80379140 00376080  C8 21 00 78 */	lfd f1, 0x78(r1)
/* 80379144 00376084  EC 21 F0 28 */	fsubs f1, f1, f30
/* 80379148 00376088  EC 21 F8 24 */	fdivs f1, f1, f31
/* 8037914C 0037608C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80379150 00376090  40 80 00 0C */	bge .L_8037915C
/* 80379154 00376094  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 80379158 00376098  7F 03 D9 AE */	stbx r24, r3, r27
.L_8037915C:
/* 8037915C 0037609C  3B 7B 00 01 */	addi r27, r27, 1
.L_80379160:
/* 80379160 003760A0  7F E3 FB 78 */	mr r3, r31
/* 80379164 003760A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80379168 003760A8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037916C 003760AC  7D 89 03 A6 */	mtctr r12
/* 80379170 003760B0  4E 80 04 21 */	bctrl 
/* 80379174 003760B4  7C 1B 18 00 */	cmpw r27, r3
/* 80379178 003760B8  41 80 FF AC */	blt .L_80379124
/* 8037917C 003760BC  80 8D 99 34 */	lwz r4, mDebugHeap__Q28Morimura10TZukanBase@sda21(r13)
/* 80379180 003760C0  38 60 00 04 */	li r3, 4
/* 80379184 003760C4  38 A0 00 00 */	li r5, 0
/* 80379188 003760C8  4B CA AD B9 */	bl __nw__FUlP7JKRHeapi
/* 8037918C 003760CC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80379190 003760D0  90 64 00 1C */	stw r3, 0x1c(r4)
/* 80379194 003760D4  4B D5 04 0D */	bl rand
/* 80379198 003760D8  7F E3 FB 78 */	mr r3, r31
/* 8037919C 003760DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803791A0 003760E0  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803791A4 003760E4  7D 89 03 A6 */	mtctr r12
/* 803791A8 003760E8  4E 80 04 21 */	bctrl 
/* 803791AC 003760EC  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 803791B0 003760F0  38 00 00 00 */	li r0, 0
/* 803791B4 003760F4  38 60 00 28 */	li r3, 0x28
/* 803791B8 003760F8  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 803791BC 003760FC  90 04 00 00 */	stw r0, 0(r4)
/* 803791C0 00376100  4B CA AC E5 */	bl __nw__FUl
/* 803791C4 00376104  28 03 00 00 */	cmplwi r3, 0
/* 803791C8 00376108  41 82 00 5C */	beq .L_80379224
/* 803791CC 0037610C  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 803791D0 00376110  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 803791D4 00376114  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 803791D8 00376118  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 803791DC 0037611C  90 03 00 00 */	stw r0, 0(r3)
/* 803791E0 00376120  39 00 00 00 */	li r8, 0
/* 803791E4 00376124  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 803791E8 00376128  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 803791EC 0037612C  91 03 00 04 */	stw r8, 4(r3)
/* 803791F0 00376130  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 803791F4 00376134  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 803791F8 00376138  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 803791FC 0037613C  90 03 00 00 */	stw r0, 0(r3)
/* 80379200 00376140  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 80379204 00376144  38 00 00 B4 */	li r0, 0xb4
/* 80379208 00376148  91 03 00 08 */	stw r8, 8(r3)
/* 8037920C 0037614C  90 C3 00 14 */	stw r6, 0x14(r3)
/* 80379210 00376150  90 A3 00 10 */	stw r5, 0x10(r3)
/* 80379214 00376154  90 83 00 1C */	stw r4, 0x1c(r3)
/* 80379218 00376158  90 A3 00 18 */	stw r5, 0x18(r3)
/* 8037921C 0037615C  98 03 00 20 */	stb r0, 0x20(r3)
/* 80379220 00376160  99 03 00 21 */	stb r8, 0x21(r3)
.L_80379224:
/* 80379224 00376164  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80379228 00376168  90 64 00 18 */	stw r3, 0x18(r4)
/* 8037922C 0037616C  7F E3 FB 78 */	mr r3, r31
/* 80379230 00376170  81 9F 00 00 */	lwz r12, 0(r31)
/* 80379234 00376174  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80379238 00376178  7D 89 03 A6 */	mtctr r12
/* 8037923C 0037617C  4E 80 04 21 */	bctrl 
/* 80379240 00376180  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 80379244 00376184  48 0D 8E 7D */	bl setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
/* 80379248 00376188  48 00 00 8C */	b .L_803792D4
.L_8037924C:
/* 8037924C 0037618C  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379250 00376190  38 BE 04 C0 */	addi r5, r30, 0x4c0
/* 80379254 00376194  38 80 10 4E */	li r4, 0x104e
/* 80379258 00376198  4C C6 31 82 */	crclr 6
/* 8037925C 0037619C  4B CB 13 E5 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80379260 003761A0  48 00 00 74 */	b .L_803792D4
.L_80379264:
/* 80379264 003761A4  38 60 00 28 */	li r3, 0x28
/* 80379268 003761A8  4B CA AC 3D */	bl __nw__FUl
/* 8037926C 003761AC  28 03 00 00 */	cmplwi r3, 0
/* 80379270 003761B0  41 82 00 5C */	beq .L_803792CC
/* 80379274 003761B4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80379278 003761B8  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 8037927C 003761BC  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80379280 003761C0  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379284 003761C4  90 03 00 00 */	stw r0, 0(r3)
/* 80379288 003761C8  39 00 00 00 */	li r8, 0
/* 8037928C 003761CC  3C A0 00 34 */	lis r5, 0x00343731@ha
/* 80379290 003761D0  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 80379294 003761D4  91 03 00 04 */	stw r8, 4(r3)
/* 80379298 003761D8  38 07 9E 08 */	addi r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 8037929C 003761DC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 803792A0 003761E0  38 A5 37 31 */	addi r5, r5, 0x00343731@l
/* 803792A4 003761E4  90 03 00 00 */	stw r0, 0(r3)
/* 803792A8 003761E8  38 84 30 30 */	addi r4, r4, 0x315F3030@l
/* 803792AC 003761EC  38 00 00 B4 */	li r0, 0xb4
/* 803792B0 003761F0  91 03 00 08 */	stw r8, 8(r3)
/* 803792B4 003761F4  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803792B8 003761F8  90 A3 00 10 */	stw r5, 0x10(r3)
/* 803792BC 003761FC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 803792C0 00376200  90 A3 00 18 */	stw r5, 0x18(r3)
/* 803792C4 00376204  98 03 00 20 */	stb r0, 0x20(r3)
/* 803792C8 00376208  99 03 00 21 */	stb r8, 0x21(r3)
.L_803792CC:
/* 803792CC 0037620C  80 9F 02 48 */	lwz r4, 0x248(r31)
/* 803792D0 00376210  90 64 00 18 */	stw r3, 0x18(r4)
.L_803792D4:
/* 803792D4 00376214  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803792D8 00376218  28 00 00 00 */	cmplwi r0, 0
/* 803792DC 0037621C  41 82 00 18 */	beq .L_803792F4
/* 803792E0 00376220  88 0D 98 FA */	lbz r0, mZukanShortenTest__Q28Morimura10TZukanBase@sda21(r13)
/* 803792E4 00376224  28 00 00 00 */	cmplwi r0, 0
/* 803792E8 00376228  40 82 00 0C */	bne .L_803792F4
/* 803792EC 0037622C  38 00 00 00 */	li r0, 0
/* 803792F0 00376230  98 1F 02 40 */	stb r0, 0x240(r31)
.L_803792F4:
/* 803792F4 00376234  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803792F8 00376238  28 03 00 00 */	cmplwi r3, 0
/* 803792FC 0037623C  41 82 00 18 */	beq .L_80379314
/* 80379300 00376240  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80379304 00376244  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80379308 00376248  41 82 00 0C */	beq .L_80379314
/* 8037930C 0037624C  38 00 00 00 */	li r0, 0
/* 80379310 00376250  98 1F 02 40 */	stb r0, 0x240(r31)
.L_80379314:
/* 80379314 00376254  38 00 00 01 */	li r0, 1
/* 80379318 00376258  98 1F 02 41 */	stb r0, 0x241(r31)
/* 8037931C 0037625C  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 80379320 00376260  28 00 00 00 */	cmplwi r0, 0
/* 80379324 00376264  41 82 01 B8 */	beq .L_803794DC
/* 80379328 00376268  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037932C 0037626C  28 00 00 00 */	cmplwi r0, 0
/* 80379330 00376270  41 82 00 DC */	beq .L_8037940C
/* 80379334 00376274  4B D5 02 6D */	bl rand
/* 80379338 00376278  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037933C 0037627C  3C 00 43 30 */	lis r0, 0x4330
/* 80379340 00376280  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80379344 00376284  38 80 00 00 */	li r4, 0
/* 80379348 00376288  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 8037934C 0037628C  90 01 00 78 */	stw r0, 0x78(r1)
/* 80379350 00376290  C0 22 08 54 */	lfs f1, lbl_8051EBB4@sda21(r2)
/* 80379354 00376294  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 80379358 00376298  C0 02 08 78 */	lfs f0, lbl_8051EBD8@sda21(r2)
/* 8037935C 0037629C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80379360 003762A0  EC 22 08 24 */	fdivs f1, f2, f1
/* 80379364 003762A4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80379368 003762A8  FC 00 00 1E */	fctiwz f0, f0
/* 8037936C 003762AC  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 80379370 003762B0  83 01 00 84 */	lwz r24, 0x84(r1)
/* 80379374 003762B4  7F 09 03 A6 */	mtctr r24
/* 80379378 003762B8  2C 18 00 00 */	cmpwi r24, 0
/* 8037937C 003762BC  40 81 00 2C */	ble .L_803793A8
.L_80379380:
/* 80379380 003762C0  54 83 0F FE */	srwi r3, r4, 0x1f
/* 80379384 003762C4  54 80 07 FE */	clrlwi r0, r4, 0x1f
/* 80379388 003762C8  7C 00 1A 78 */	xor r0, r0, r3
/* 8037938C 003762CC  7C 03 00 51 */	subf. r0, r3, r0
/* 80379390 003762D0  40 82 00 10 */	bne .L_803793A0
/* 80379394 003762D4  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80379398 003762D8  38 03 00 01 */	addi r0, r3, 1
/* 8037939C 003762DC  90 1F 02 30 */	stw r0, 0x230(r31)
.L_803793A0:
/* 803793A0 003762E0  38 84 00 01 */	addi r4, r4, 1
/* 803793A4 003762E4  42 00 FF DC */	bdnz .L_80379380
.L_803793A8:
/* 803793A8 003762E8  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803793AC 003762EC  2C 00 00 00 */	cmpwi r0, 0
/* 803793B0 003762F0  40 82 00 10 */	bne .L_803793C0
/* 803793B4 003762F4  38 00 00 00 */	li r0, 0
/* 803793B8 003762F8  98 1F 02 42 */	stb r0, 0x242(r31)
/* 803793BC 003762FC  48 00 00 10 */	b .L_803793CC
.L_803793C0:
/* 803793C0 00376300  54 03 10 3A */	slwi r3, r0, 2
/* 803793C4 00376304  4B CA AB E9 */	bl __nwa__FUl
/* 803793C8 00376308  90 7F 02 2C */	stw r3, 0x22c(r31)
.L_803793CC:
/* 803793CC 0037630C  38 A0 00 00 */	li r5, 0
/* 803793D0 00376310  38 80 00 00 */	li r4, 0
/* 803793D4 00376314  7F 09 03 A6 */	mtctr r24
/* 803793D8 00376318  2C 18 00 00 */	cmpwi r24, 0
/* 803793DC 0037631C  40 81 01 00 */	ble .L_803794DC
.L_803793E0:
/* 803793E0 00376320  54 A3 0F FE */	srwi r3, r5, 0x1f
/* 803793E4 00376324  54 A0 07 FE */	clrlwi r0, r5, 0x1f
/* 803793E8 00376328  7C 00 1A 78 */	xor r0, r0, r3
/* 803793EC 0037632C  7C 03 00 51 */	subf. r0, r3, r0
/* 803793F0 00376330  40 82 00 10 */	bne .L_80379400
/* 803793F4 00376334  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 803793F8 00376338  7C A3 21 2E */	stwx r5, r3, r4
/* 803793FC 0037633C  38 84 00 04 */	addi r4, r4, 4
.L_80379400:
/* 80379400 00376340  38 A5 00 01 */	addi r5, r5, 1
/* 80379404 00376344  42 00 FF DC */	bdnz .L_803793E0
/* 80379408 00376348  48 00 00 D4 */	b .L_803794DC
.L_8037940C:
/* 8037940C 0037634C  3B 00 00 00 */	li r24, 0
/* 80379410 00376350  48 00 00 34 */	b .L_80379444
.L_80379414:
/* 80379414 00376354  7F E3 FB 78 */	mr r3, r31
/* 80379418 00376358  7F 04 C3 78 */	mr r4, r24
/* 8037941C 0037635C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80379420 00376360  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80379424 00376364  7D 89 03 A6 */	mtctr r12
/* 80379428 00376368  4E 80 04 21 */	bctrl 
/* 8037942C 0037636C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80379430 00376370  41 82 00 10 */	beq .L_80379440
/* 80379434 00376374  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 80379438 00376378  38 03 00 01 */	addi r0, r3, 1
/* 8037943C 0037637C  90 1F 02 30 */	stw r0, 0x230(r31)
.L_80379440:
/* 80379440 00376380  3B 18 00 01 */	addi r24, r24, 1
.L_80379444:
/* 80379444 00376384  7F E3 FB 78 */	mr r3, r31
/* 80379448 00376388  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037944C 0037638C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80379450 00376390  7D 89 03 A6 */	mtctr r12
/* 80379454 00376394  4E 80 04 21 */	bctrl 
/* 80379458 00376398  7C 18 18 00 */	cmpw r24, r3
/* 8037945C 0037639C  41 80 FF B8 */	blt .L_80379414
/* 80379460 003763A0  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 80379464 003763A4  2C 00 00 00 */	cmpwi r0, 0
/* 80379468 003763A8  40 82 00 10 */	bne .L_80379478
/* 8037946C 003763AC  38 00 00 00 */	li r0, 0
/* 80379470 003763B0  98 1F 02 42 */	stb r0, 0x242(r31)
/* 80379474 003763B4  48 00 00 10 */	b .L_80379484
.L_80379478:
/* 80379478 003763B8  54 03 10 3A */	slwi r3, r0, 2
/* 8037947C 003763BC  4B CA AB 31 */	bl __nwa__FUl
/* 80379480 003763C0  90 7F 02 2C */	stw r3, 0x22c(r31)
.L_80379484:
/* 80379484 003763C4  3B 20 00 00 */	li r25, 0
/* 80379488 003763C8  3B 00 00 00 */	li r24, 0
/* 8037948C 003763CC  48 00 00 34 */	b .L_803794C0
.L_80379490:
/* 80379490 003763D0  7F E3 FB 78 */	mr r3, r31
/* 80379494 003763D4  7F 24 CB 78 */	mr r4, r25
/* 80379498 003763D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037949C 003763DC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803794A0 003763E0  7D 89 03 A6 */	mtctr r12
/* 803794A4 003763E4  4E 80 04 21 */	bctrl 
/* 803794A8 003763E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803794AC 003763EC  41 82 00 10 */	beq .L_803794BC
/* 803794B0 003763F0  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 803794B4 003763F4  7F 23 C1 2E */	stwx r25, r3, r24
/* 803794B8 003763F8  3B 18 00 04 */	addi r24, r24, 4
.L_803794BC:
/* 803794BC 003763FC  3B 39 00 01 */	addi r25, r25, 1
.L_803794C0:
/* 803794C0 00376400  7F E3 FB 78 */	mr r3, r31
/* 803794C4 00376404  81 9F 00 00 */	lwz r12, 0(r31)
/* 803794C8 00376408  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803794CC 0037640C  7D 89 03 A6 */	mtctr r12
/* 803794D0 00376410  4E 80 04 21 */	bctrl 
/* 803794D4 00376414  7C 19 18 00 */	cmpw r25, r3
/* 803794D8 00376418  41 80 FF B8 */	blt .L_80379490
.L_803794DC:
/* 803794DC 0037641C  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 803794E0 00376420  28 00 00 00 */	cmplwi r0, 0
/* 803794E4 00376424  41 82 00 24 */	beq .L_80379508
/* 803794E8 00376428  A8 7F 00 8E */	lha r3, 0x8e(r31)
/* 803794EC 0037642C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 803794F0 00376430  38 03 FF FF */	addi r0, r3, -1
/* 803794F4 00376434  1C 00 00 03 */	mulli r0, r0, 3
/* 803794F8 00376438  7C 04 00 00 */	cmpw r4, r0
/* 803794FC 0037643C  41 81 00 0C */	bgt .L_80379508
/* 80379500 00376440  38 00 00 00 */	li r0, 0
/* 80379504 00376444  98 1F 02 42 */	stb r0, 0x242(r31)
.L_80379508:
/* 80379508 00376448  C8 5E 0C 08 */	lfd f2, 0xc08(r30)
/* 8037950C 0037644C  38 60 00 18 */	li r3, 0x18
/* 80379510 00376450  C8 3E 0C 10 */	lfd f1, 0xc10(r30)
/* 80379514 00376454  C8 1E 0C 18 */	lfd f0, 0xc18(r30)
/* 80379518 00376458  D8 41 00 60 */	stfd f2, 0x60(r1)
/* 8037951C 0037645C  D8 21 00 68 */	stfd f1, 0x68(r1)
/* 80379520 00376460  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 80379524 00376464  4B CA A9 81 */	bl __nw__FUl
/* 80379528 00376468  7C 60 1B 79 */	or. r0, r3, r3
/* 8037952C 0037646C  41 82 00 24 */	beq .L_80379550
/* 80379530 00376470  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379534 00376474  3C A0 00 30 */	lis r5, 0x00303130@ha
/* 80379538 00376478  38 81 00 60 */	addi r4, r1, 0x60
/* 8037953C 0037647C  38 E0 00 03 */	li r7, 3
/* 80379540 00376480  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80379544 00376484  38 A5 31 30 */	addi r5, r5, 0x00303130@l
/* 80379548 00376488  48 02 7B 9D */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 8037954C 0037648C  7C 60 1B 78 */	mr r0, r3
.L_80379550:
/* 80379550 00376490  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 80379554 00376494  38 60 00 18 */	li r3, 0x18
/* 80379558 00376498  C8 5E 0C 20 */	lfd f2, 0xc20(r30)
/* 8037955C 0037649C  C8 3E 0C 28 */	lfd f1, 0xc28(r30)
/* 80379560 003764A0  C8 1E 0C 30 */	lfd f0, 0xc30(r30)
/* 80379564 003764A4  D8 41 00 48 */	stfd f2, 0x48(r1)
/* 80379568 003764A8  D8 21 00 50 */	stfd f1, 0x50(r1)
/* 8037956C 003764AC  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80379570 003764B0  4B CA A9 35 */	bl __nw__FUl
/* 80379574 003764B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80379578 003764B8  41 82 00 24 */	beq .L_8037959C
/* 8037957C 003764BC  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379580 003764C0  3C A0 00 30 */	lis r5, 0x00303430@ha
/* 80379584 003764C4  38 81 00 48 */	addi r4, r1, 0x48
/* 80379588 003764C8  38 E0 00 03 */	li r7, 3
/* 8037958C 003764CC  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80379590 003764D0  38 A5 34 30 */	addi r5, r5, 0x00303430@l
/* 80379594 003764D4  48 02 7B 51 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 80379598 003764D8  7C 60 1B 78 */	mr r0, r3
.L_8037959C:
/* 8037959C 003764DC  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 803795A0 003764E0  38 60 00 18 */	li r3, 0x18
/* 803795A4 003764E4  C8 5E 0C 38 */	lfd f2, 0xc38(r30)
/* 803795A8 003764E8  C8 3E 0C 40 */	lfd f1, 0xc40(r30)
/* 803795AC 003764EC  C8 1E 0C 48 */	lfd f0, 0xc48(r30)
/* 803795B0 003764F0  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 803795B4 003764F4  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 803795B8 003764F8  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 803795BC 003764FC  4B CA A8 E9 */	bl __nw__FUl
/* 803795C0 00376500  7C 60 1B 79 */	or. r0, r3, r3
/* 803795C4 00376504  41 82 00 24 */	beq .L_803795E8
/* 803795C8 00376508  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 803795CC 0037650C  3C A0 00 30 */	lis r5, 0x00303730@ha
/* 803795D0 00376510  38 81 00 30 */	addi r4, r1, 0x30
/* 803795D4 00376514  38 E0 00 03 */	li r7, 3
/* 803795D8 00376518  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 803795DC 0037651C  38 A5 37 30 */	addi r5, r5, 0x00303730@l
/* 803795E0 00376520  48 02 7B 05 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 803795E4 00376524  7C 60 1B 78 */	mr r0, r3
.L_803795E8:
/* 803795E8 00376528  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 803795EC 0037652C  38 60 00 18 */	li r3, 0x18
/* 803795F0 00376530  C8 3E 0C 50 */	lfd f1, 0xc50(r30)
/* 803795F4 00376534  C8 1E 0C 58 */	lfd f0, 0xc58(r30)
/* 803795F8 00376538  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 803795FC 0037653C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80379600 00376540  4B CA A8 A5 */	bl __nw__FUl
/* 80379604 00376544  7C 64 1B 79 */	or. r4, r3, r3
/* 80379608 00376548  41 82 00 24 */	beq .L_8037962C
/* 8037960C 0037654C  3C C0 30 5F */	lis r6, 0x305F3030@ha
/* 80379610 00376550  3C A0 00 31 */	lis r5, 0x00313433@ha
/* 80379614 00376554  38 81 00 20 */	addi r4, r1, 0x20
/* 80379618 00376558  38 E0 00 02 */	li r7, 2
/* 8037961C 0037655C  38 C6 30 30 */	addi r6, r6, 0x305F3030@l
/* 80379620 00376560  38 A5 34 33 */	addi r5, r5, 0x00313433@l
/* 80379624 00376564  48 02 7A C1 */	bl __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
/* 80379628 00376568  7C 64 1B 78 */	mr r4, r3
.L_8037962C:
/* 8037962C 0037656C  38 00 00 05 */	li r0, 5
/* 80379630 00376570  7F E5 FB 78 */	mr r5, r31
/* 80379634 00376574  90 9F 03 A4 */	stw r4, 0x3a4(r31)
/* 80379638 00376578  7C 09 03 A6 */	mtctr r0
/* 8037963C 0037657C  38 60 00 01 */	li r3, 1
/* 80379640 00376580  38 80 00 00 */	li r4, 0
/* 80379644 00376584  38 00 FF FF */	li r0, -1
.L_80379648:
/* 80379648 00376588  90 65 02 78 */	stw r3, 0x278(r5)
/* 8037964C 0037658C  90 85 02 DC */	stw r4, 0x2dc(r5)
/* 80379650 00376590  90 05 03 40 */	stw r0, 0x340(r5)
/* 80379654 00376594  90 65 02 7C */	stw r3, 0x27c(r5)
/* 80379658 00376598  90 85 02 E0 */	stw r4, 0x2e0(r5)
/* 8037965C 0037659C  90 05 03 44 */	stw r0, 0x344(r5)
/* 80379660 003765A0  90 65 02 80 */	stw r3, 0x280(r5)
/* 80379664 003765A4  90 85 02 E4 */	stw r4, 0x2e4(r5)
/* 80379668 003765A8  90 05 03 48 */	stw r0, 0x348(r5)
/* 8037966C 003765AC  90 65 02 84 */	stw r3, 0x284(r5)
/* 80379670 003765B0  90 85 02 E8 */	stw r4, 0x2e8(r5)
/* 80379674 003765B4  90 05 03 4C */	stw r0, 0x34c(r5)
/* 80379678 003765B8  90 65 02 88 */	stw r3, 0x288(r5)
/* 8037967C 003765BC  90 85 02 EC */	stw r4, 0x2ec(r5)
/* 80379680 003765C0  90 05 03 50 */	stw r0, 0x350(r5)
/* 80379684 003765C4  38 A5 00 14 */	addi r5, r5, 0x14
/* 80379688 003765C8  42 00 FF C0 */	bdnz .L_80379648
/* 8037968C 003765CC  3C 60 80 4E */	lis r3, mCategoryArray__Q28Morimura10TItemZukan@ha
/* 80379690 003765D0  90 9F 03 B4 */	stw r4, 0x3b4(r31)
/* 80379694 003765D4  3B 83 39 34 */	addi r28, r3, mCategoryArray__Q28Morimura10TItemZukan@l
/* 80379698 003765D8  7F FB FB 78 */	mr r27, r31
/* 8037969C 003765DC  3B 40 00 00 */	li r26, 0
/* 803796A0 003765E0  3B 20 00 00 */	li r25, 0
.L_803796A4:
/* 803796A4 003765E4  2C 19 00 00 */	cmpwi r25, 0
/* 803796A8 003765E8  3B 00 00 00 */	li r24, 0
/* 803796AC 003765EC  40 81 00 08 */	ble .L_803796B4
/* 803796B0 003765F0  83 1C FF FC */	lwz r24, -4(r28)
.L_803796B4:
/* 803796B4 003765F4  7F 16 C3 78 */	mr r22, r24
/* 803796B8 003765F8  3A E0 00 00 */	li r23, 0
/* 803796BC 003765FC  48 00 00 60 */	b .L_8037971C
.L_803796C0:
/* 803796C0 00376600  7F E3 FB 78 */	mr r3, r31
/* 803796C4 00376604  7E C4 B3 78 */	mr r4, r22
/* 803796C8 00376608  81 9F 00 00 */	lwz r12, 0(r31)
/* 803796CC 0037660C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803796D0 00376610  7D 89 03 A6 */	mtctr r12
/* 803796D4 00376614  4E 80 04 21 */	bctrl 
/* 803796D8 00376618  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803796DC 0037661C  40 82 00 14 */	bne .L_803796F0
/* 803796E0 00376620  38 00 00 00 */	li r0, 0
/* 803796E4 00376624  3A E0 00 00 */	li r23, 0
/* 803796E8 00376628  90 1B 02 78 */	stw r0, 0x278(r27)
/* 803796EC 0037662C  48 00 00 3C */	b .L_80379728
.L_803796F0:
/* 803796F0 00376630  7F E3 FB 78 */	mr r3, r31
/* 803796F4 00376634  7E C4 B3 78 */	mr r4, r22
/* 803796F8 00376638  81 9F 00 00 */	lwz r12, 0(r31)
/* 803796FC 0037663C  38 A0 00 01 */	li r5, 1
/* 80379700 00376640  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80379704 00376644  7D 89 03 A6 */	mtctr r12
/* 80379708 00376648  4E 80 04 21 */	bctrl 
/* 8037970C 0037664C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80379710 00376650  41 82 00 08 */	beq .L_80379718
/* 80379714 00376654  3A E0 00 01 */	li r23, 1
.L_80379718:
/* 80379718 00376658  3A D6 00 01 */	addi r22, r22, 1
.L_8037971C:
/* 8037971C 0037665C  80 1C 00 00 */	lwz r0, 0(r28)
/* 80379720 00376660  7C 16 00 00 */	cmpw r22, r0
/* 80379724 00376664  41 80 FF 9C */	blt .L_803796C0
.L_80379728:
/* 80379728 00376668  56 E0 06 3F */	clrlwi. r0, r23, 0x18
/* 8037972C 0037666C  41 82 00 5C */	beq .L_80379788
/* 80379730 00376670  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80379734 00376674  28 00 00 00 */	cmplwi r0, 0
/* 80379738 00376678  40 82 00 44 */	bne .L_8037977C
/* 8037973C 0037667C  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80379740 00376680  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 80379744 00376684  80 04 00 00 */	lwz r0, 0(r4)
/* 80379748 00376688  2C 00 00 00 */	cmpwi r0, 0
/* 8037974C 0037668C  40 80 00 3C */	bge .L_80379788
/* 80379750 00376690  81 83 00 00 */	lwz r12, 0(r3)
/* 80379754 00376694  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80379758 00376698  7D 89 03 A6 */	mtctr r12
/* 8037975C 0037669C  4E 80 04 21 */	bctrl 
/* 80379760 003766A0  3C A0 49 54 */	lis r5, 0x4954454D@ha
/* 80379764 003766A4  38 00 00 44 */	li r0, 0x44
/* 80379768 003766A8  38 A5 45 4D */	addi r5, r5, 0x4954454D@l
/* 8037976C 003766AC  7C 84 2A 78 */	xor r4, r4, r5
/* 80379770 003766B0  7C 60 02 78 */	xor r0, r3, r0
/* 80379774 003766B4  7C 80 03 79 */	or. r0, r4, r0
/* 80379778 003766B8  40 82 00 10 */	bne .L_80379788
.L_8037977C:
/* 8037977C 003766BC  38 00 00 01 */	li r0, 1
/* 80379780 003766C0  90 1B 02 DC */	stw r0, 0x2dc(r27)
/* 80379784 003766C4  98 1F 02 44 */	stb r0, 0x244(r31)
.L_80379788:
/* 80379788 003766C8  88 1F 02 41 */	lbz r0, 0x241(r31)
/* 8037978C 003766CC  28 00 00 00 */	cmplwi r0, 0
/* 80379790 003766D0  41 82 00 90 */	beq .L_80379820
/* 80379794 003766D4  7F 16 C3 78 */	mr r22, r24
/* 80379798 003766D8  48 00 00 7C */	b .L_80379814
.L_8037979C:
/* 8037979C 003766DC  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803797A0 003766E0  28 00 00 00 */	cmplwi r0, 0
/* 803797A4 003766E4  41 82 00 34 */	beq .L_803797D8
/* 803797A8 003766E8  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 803797AC 003766EC  28 00 00 00 */	cmplwi r0, 0
/* 803797B0 003766F0  41 82 00 28 */	beq .L_803797D8
/* 803797B4 003766F4  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803797B8 003766F8  2C 00 00 00 */	cmpwi r0, 0
/* 803797BC 003766FC  41 82 00 1C */	beq .L_803797D8
/* 803797C0 00376700  54 03 10 3A */	slwi r3, r0, 2
/* 803797C4 00376704  80 9F 02 2C */	lwz r4, 0x22c(r31)
/* 803797C8 00376708  38 03 FF FC */	addi r0, r3, -4
/* 803797CC 0037670C  7C 04 00 2E */	lwzx r0, r4, r0
/* 803797D0 00376710  7C 16 00 00 */	cmpw r22, r0
/* 803797D4 00376714  41 81 00 4C */	bgt .L_80379820
.L_803797D8:
/* 803797D8 00376718  7F E3 FB 78 */	mr r3, r31
/* 803797DC 0037671C  7E C4 B3 78 */	mr r4, r22
/* 803797E0 00376720  81 9F 00 00 */	lwz r12, 0(r31)
/* 803797E4 00376724  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803797E8 00376728  7D 89 03 A6 */	mtctr r12
/* 803797EC 0037672C  4E 80 04 21 */	bctrl 
/* 803797F0 00376730  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803797F4 00376734  41 82 00 1C */	beq .L_80379810
/* 803797F8 00376738  80 7F 03 B4 */	lwz r3, 0x3b4(r31)
/* 803797FC 0037673C  38 03 00 01 */	addi r0, r3, 1
/* 80379800 00376740  90 1F 03 B4 */	stw r0, 0x3b4(r31)
/* 80379804 00376744  93 5B 03 40 */	stw r26, 0x340(r27)
/* 80379808 00376748  23 5A 00 01 */	subfic r26, r26, 1
/* 8037980C 0037674C  48 00 00 14 */	b .L_80379820
.L_80379810:
/* 80379810 00376750  3A D6 00 01 */	addi r22, r22, 1
.L_80379814:
/* 80379814 00376754  80 1C 00 00 */	lwz r0, 0(r28)
/* 80379818 00376758  7C 16 00 00 */	cmpw r22, r0
/* 8037981C 0037675C  41 80 FF 80 */	blt .L_8037979C
.L_80379820:
/* 80379820 00376760  3B 39 00 01 */	addi r25, r25, 1
/* 80379824 00376764  3B 7B 00 04 */	addi r27, r27, 4
/* 80379828 00376768  2C 19 00 19 */	cmpwi r25, 0x19
/* 8037982C 0037676C  3B 9C 00 04 */	addi r28, r28, 4
/* 80379830 00376770  41 80 FE 74 */	blt .L_803796A4
/* 80379834 00376774  39 20 00 78 */	li r9, 0x78
/* 80379838 00376778  39 00 00 FF */	li r8, 0xff
/* 8037983C 0037677C  B1 3F 01 B0 */	sth r9, 0x1b0(r31)
/* 80379840 00376780  38 E0 00 F0 */	li r7, 0xf0
/* 80379844 00376784  38 C0 00 00 */	li r6, 0
/* 80379848 00376788  38 A0 00 C8 */	li r5, 0xc8
/* 8037984C 0037678C  B1 3F 01 B2 */	sth r9, 0x1b2(r31)
/* 80379850 00376790  38 60 00 28 */	li r3, 0x28
/* 80379854 00376794  38 00 00 A5 */	li r0, 0xa5
/* 80379858 00376798  38 9E 0C 60 */	addi r4, r30, 0xc60
/* 8037985C 0037679C  B1 3F 01 B4 */	sth r9, 0x1b4(r31)
/* 80379860 003767A0  B1 1F 01 B6 */	sth r8, 0x1b6(r31)
/* 80379864 003767A4  B0 FF 01 B8 */	sth r7, 0x1b8(r31)
/* 80379868 003767A8  B0 FF 01 BA */	sth r7, 0x1ba(r31)
/* 8037986C 003767AC  B0 FF 01 BC */	sth r7, 0x1bc(r31)
/* 80379870 003767B0  B1 1F 01 BE */	sth r8, 0x1be(r31)
/* 80379874 003767B4  A8 FF 01 B0 */	lha r7, 0x1b0(r31)
/* 80379878 003767B8  B0 FF 01 B8 */	sth r7, 0x1b8(r31)
/* 8037987C 003767BC  A8 FF 01 B2 */	lha r7, 0x1b2(r31)
/* 80379880 003767C0  B0 FF 01 BA */	sth r7, 0x1ba(r31)
/* 80379884 003767C4  A8 FF 01 B4 */	lha r7, 0x1b4(r31)
/* 80379888 003767C8  B0 FF 01 BC */	sth r7, 0x1bc(r31)
/* 8037988C 003767CC  A8 FF 01 B6 */	lha r7, 0x1b6(r31)
/* 80379890 003767D0  B0 FF 01 BE */	sth r7, 0x1be(r31)
/* 80379894 003767D4  B1 1F 01 C0 */	sth r8, 0x1c0(r31)
/* 80379898 003767D8  B1 1F 01 C2 */	sth r8, 0x1c2(r31)
/* 8037989C 003767DC  B0 DF 01 C4 */	sth r6, 0x1c4(r31)
/* 803798A0 003767E0  B0 DF 01 C6 */	sth r6, 0x1c6(r31)
/* 803798A4 003767E4  B1 1F 01 D0 */	sth r8, 0x1d0(r31)
/* 803798A8 003767E8  B0 BF 01 D2 */	sth r5, 0x1d2(r31)
/* 803798AC 003767EC  B0 BF 01 D4 */	sth r5, 0x1d4(r31)
/* 803798B0 003767F0  B1 1F 01 D6 */	sth r8, 0x1d6(r31)
/* 803798B4 003767F4  B1 1F 01 C8 */	sth r8, 0x1c8(r31)
/* 803798B8 003767F8  B0 7F 01 CA */	sth r3, 0x1ca(r31)
/* 803798BC 003767FC  B0 7F 01 CC */	sth r3, 0x1cc(r31)
/* 803798C0 00376800  B0 DF 01 CE */	sth r6, 0x1ce(r31)
/* 803798C4 00376804  B1 1F 01 D8 */	sth r8, 0x1d8(r31)
/* 803798C8 00376808  B0 BF 01 DA */	sth r5, 0x1da(r31)
/* 803798CC 0037680C  B0 BF 01 DC */	sth r5, 0x1dc(r31)
/* 803798D0 00376810  B1 1F 01 DE */	sth r8, 0x1de(r31)
/* 803798D4 00376814  B0 1F 02 58 */	sth r0, 0x258(r31)
/* 803798D8 00376818  B0 DF 02 5A */	sth r6, 0x25a(r31)
/* 803798DC 0037681C  B0 DF 02 5C */	sth r6, 0x25c(r31)
/* 803798E0 00376820  B1 1F 02 5E */	sth r8, 0x25e(r31)
/* 803798E4 00376824  B1 1F 02 60 */	sth r8, 0x260(r31)
/* 803798E8 00376828  B0 7F 02 62 */	sth r3, 0x262(r31)
/* 803798EC 0037682C  B0 7F 02 64 */	sth r3, 0x264(r31)
/* 803798F0 00376830  B0 DF 02 66 */	sth r6, 0x266(r31)
/* 803798F4 00376834  B1 1F 02 68 */	sth r8, 0x268(r31)
/* 803798F8 00376838  B0 BF 02 6A */	sth r5, 0x26a(r31)
/* 803798FC 0037683C  B0 BF 02 6C */	sth r5, 0x26c(r31)
/* 80379900 00376840  B1 1F 02 6E */	sth r8, 0x26e(r31)
/* 80379904 00376844  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379908 00376848  81 83 00 00 */	lwz r12, 0(r3)
/* 8037990C 0037684C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80379910 00376850  7D 89 03 A6 */	mtctr r12
/* 80379914 00376854  4E 80 04 21 */	bctrl 
/* 80379918 00376858  90 7F 02 70 */	stw r3, 0x270(r31)
/* 8037991C 0037685C  80 1F 02 70 */	lwz r0, 0x270(r31)
/* 80379920 00376860  28 00 00 00 */	cmplwi r0, 0
/* 80379924 00376864  40 82 00 18 */	bne .L_8037993C
/* 80379928 00376868  38 7E 00 0C */	addi r3, r30, 0xc
/* 8037992C 0037686C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379930 00376870  38 80 11 0B */	li r4, 0x110b
/* 80379934 00376874  4C C6 31 82 */	crclr 6
/* 80379938 00376878  4B CB 0D 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037993C:
/* 8037993C 0037687C  38 60 00 18 */	li r3, 0x18
/* 80379940 00376880  4B CA A5 65 */	bl __nw__FUl
/* 80379944 00376884  7C 78 1B 79 */	or. r24, r3, r3
/* 80379948 00376888  41 82 00 1C */	beq .L_80379964
/* 8037994C 0037688C  7F A4 EB 78 */	mr r4, r29
/* 80379950 00376890  38 A0 00 00 */	li r5, 0
/* 80379954 00376894  48 02 7A 55 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379958 00376898  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TListScreen@ha
/* 8037995C 0037689C  38 03 59 6C */	addi r0, r3, __vt__Q28Morimura11TListScreen@l
/* 80379960 003768A0  90 18 00 00 */	stw r0, 0(r24)
.L_80379964:
/* 80379964 003768A4  93 1F 00 B4 */	stw r24, 0xb4(r31)
/* 80379968 003768A8  38 9E 0C 78 */	addi r4, r30, 0xc78
/* 8037996C 003768AC  3C A0 00 02 */	lis r5, 2
/* 80379970 003768B0  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 80379974 003768B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80379978 003768B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8037997C 003768BC  7D 89 03 A6 */	mtctr r12
/* 80379980 003768C0  4E 80 04 21 */	bctrl 
/* 80379984 003768C4  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80379988 003768C8  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8037998C 003768CC  80 63 00 08 */	lwz r3, 8(r3)
/* 80379990 003768D0  4B CA 9C 15 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80379994 003768D4  38 60 00 18 */	li r3, 0x18
/* 80379998 003768D8  4B CA A5 0D */	bl __nw__FUl
/* 8037999C 003768DC  7C 60 1B 79 */	or. r0, r3, r3
/* 803799A0 003768E0  41 82 00 14 */	beq .L_803799B4
/* 803799A4 003768E4  7F A4 EB 78 */	mr r4, r29
/* 803799A8 003768E8  38 A0 00 02 */	li r5, 2
/* 803799AC 003768EC  48 02 79 FD */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 803799B0 003768F0  7C 60 1B 78 */	mr r0, r3
.L_803799B4:
/* 803799B4 003768F4  90 1F 00 7C */	stw r0, 0x7c(r31)
/* 803799B8 003768F8  38 9E 0C 94 */	addi r4, r30, 0xc94
/* 803799BC 003768FC  3C A0 00 02 */	lis r5, 2
/* 803799C0 00376900  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799C4 00376904  81 83 00 00 */	lwz r12, 0(r3)
/* 803799C8 00376908  81 8C 00 08 */	lwz r12, 8(r12)
/* 803799CC 0037690C  7D 89 03 A6 */	mtctr r12
/* 803799D0 00376910  4E 80 04 21 */	bctrl 
/* 803799D4 00376914  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799D8 00376918  38 9E 0C B0 */	addi r4, r30, 0xcb0
/* 803799DC 0037691C  48 02 7A 85 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 803799E0 00376920  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799E4 00376924  38 9E 0C CC */	addi r4, r30, 0xccc
/* 803799E8 00376928  48 02 7A 79 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 803799EC 0037692C  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803799F0 00376930  3C A0 65 6E */	lis r5, 0x656E7531@ha
/* 803799F4 00376934  3C 80 00 54 */	lis r4, 0x00546C6D@ha
/* 803799F8 00376938  80 63 00 08 */	lwz r3, 8(r3)
/* 803799FC 0037693C  38 C5 75 31 */	addi r6, r5, 0x656E7531@l
/* 80379A00 00376940  38 A4 6C 6D */	addi r5, r4, 0x00546C6D@l
/* 80379A04 00376944  81 83 00 00 */	lwz r12, 0(r3)
/* 80379A08 00376948  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379A0C 0037694C  7D 89 03 A6 */	mtctr r12
/* 80379A10 00376950  4E 80 04 21 */	bctrl 
/* 80379A14 00376954  90 7F 00 F4 */	stw r3, 0xf4(r31)
/* 80379A18 00376958  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80379A1C 0037695C  28 00 00 00 */	cmplwi r0, 0
/* 80379A20 00376960  40 82 00 18 */	bne .L_80379A38
/* 80379A24 00376964  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379A28 00376968  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379A2C 0037696C  38 80 11 2C */	li r4, 0x112c
/* 80379A30 00376970  4C C6 31 82 */	crclr 6
/* 80379A34 00376974  4B CB 0C 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379A38:
/* 80379A38 00376978  38 60 00 48 */	li r3, 0x48
/* 80379A3C 0037697C  4B CA A4 69 */	bl __nw__FUl
/* 80379A40 00376980  7C 60 1B 79 */	or. r0, r3, r3
/* 80379A44 00376984  41 82 00 0C */	beq .L_80379A50
/* 80379A48 00376988  4B F8 FB CD */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 80379A4C 0037698C  7C 60 1B 78 */	mr r0, r3
.L_80379A50:
/* 80379A50 00376990  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 80379A54 00376994  3C 80 65 6E */	lis r4, 0x656E7531@ha
/* 80379A58 00376998  3C 60 00 54 */	lis r3, 0x00546C6D@ha
/* 80379A5C 0037699C  81 1F 00 7C */	lwz r8, 0x7c(r31)
/* 80379A60 003769A0  38 C4 75 31 */	addi r6, r4, 0x656E7531@l
/* 80379A64 003769A4  80 FF 00 D0 */	lwz r7, 0xd0(r31)
/* 80379A68 003769A8  38 A3 6C 6D */	addi r5, r3, 0x00546C6D@l
/* 80379A6C 003769AC  80 68 00 08 */	lwz r3, 8(r8)
/* 80379A70 003769B0  48 0B B0 B5 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80379A74 003769B4  80 BF 00 7C */	lwz r5, 0x7c(r31)
/* 80379A78 003769B8  3C 80 61 33 */	lis r4, 0x6133646C@ha
/* 80379A7C 003769BC  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379A80 003769C0  38 C4 64 6C */	addi r6, r4, 0x6133646C@l
/* 80379A84 003769C4  80 85 00 08 */	lwz r4, 8(r5)
/* 80379A88 003769C8  38 A0 6F 74 */	li r5, 0x6f74
/* 80379A8C 003769CC  4B FB 37 C5 */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 80379A90 003769D0  90 7F 00 E4 */	stw r3, 0xe4(r31)
/* 80379A94 003769D4  3C 60 61 33 */	lis r3, 0x6133646C@ha
/* 80379A98 003769D8  38 C3 64 6C */	addi r6, r3, 0x6133646C@l
/* 80379A9C 003769DC  38 A0 6F 74 */	li r5, 0x6f74
/* 80379AA0 003769E0  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 80379AA4 003769E4  80 63 00 08 */	lwz r3, 8(r3)
/* 80379AA8 003769E8  81 83 00 00 */	lwz r12, 0(r3)
/* 80379AAC 003769EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379AB0 003769F0  7D 89 03 A6 */	mtctr r12
/* 80379AB4 003769F4  4E 80 04 21 */	bctrl 
/* 80379AB8 003769F8  90 7F 00 F8 */	stw r3, 0xf8(r31)
/* 80379ABC 003769FC  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 80379AC0 00376A00  28 00 00 00 */	cmplwi r0, 0
/* 80379AC4 00376A04  40 82 00 18 */	bne .L_80379ADC
/* 80379AC8 00376A08  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379ACC 00376A0C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379AD0 00376A10  38 80 11 37 */	li r4, 0x1137
/* 80379AD4 00376A14  4C C6 31 82 */	crclr 6
/* 80379AD8 00376A18  4B CB 0B 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379ADC:
/* 80379ADC 00376A1C  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 80379AE0 00376A20  28 00 00 00 */	cmplwi r0, 0
/* 80379AE4 00376A24  40 82 00 18 */	bne .L_80379AFC
/* 80379AE8 00376A28  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379AEC 00376A2C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379AF0 00376A30  38 80 11 38 */	li r4, 0x1138
/* 80379AF4 00376A34  4C C6 31 82 */	crclr 6
/* 80379AF8 00376A38  4B CB 0B 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379AFC:
/* 80379AFC 00376A3C  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80379B00 00376A40  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 80379B04 00376A44  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379B08 00376A48  4B F8 BB A1 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 80379B0C 00376A4C  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80379B10 00376A50  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379B14 00376A54  4B F8 BD A5 */	bl start__Q32og6Screen9AnimGroupFv
/* 80379B18 00376A58  38 60 00 08 */	li r3, 8
/* 80379B1C 00376A5C  4B CA A3 89 */	bl __nw__FUl
/* 80379B20 00376A60  7C 60 1B 79 */	or. r0, r3, r3
/* 80379B24 00376A64  41 82 00 10 */	beq .L_80379B34
/* 80379B28 00376A68  80 9F 00 E4 */	lwz r4, 0xe4(r31)
/* 80379B2C 00376A6C  4B FB 38 41 */	bl __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
/* 80379B30 00376A70  7C 60 1B 78 */	mr r0, r3
.L_80379B34:
/* 80379B34 00376A74  90 1F 00 EC */	stw r0, 0xec(r31)
/* 80379B38 00376A78  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 80379B3C 00376A7C  28 00 00 00 */	cmplwi r0, 0
/* 80379B40 00376A80  40 82 00 18 */	bne .L_80379B58
/* 80379B44 00376A84  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379B48 00376A88  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379B4C 00376A8C  38 80 11 3E */	li r4, 0x113e
/* 80379B50 00376A90  4C C6 31 82 */	crclr 6
/* 80379B54 00376A94  4B CB 0A ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379B58:
/* 80379B58 00376A98  38 60 00 18 */	li r3, 0x18
/* 80379B5C 00376A9C  4B CA A3 49 */	bl __nw__FUl
/* 80379B60 00376AA0  7C 60 1B 79 */	or. r0, r3, r3
/* 80379B64 00376AA4  41 82 00 14 */	beq .L_80379B78
/* 80379B68 00376AA8  7F A4 EB 78 */	mr r4, r29
/* 80379B6C 00376AAC  38 A0 00 00 */	li r5, 0
/* 80379B70 00376AB0  48 02 78 39 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379B74 00376AB4  7C 60 1B 78 */	mr r0, r3
.L_80379B78:
/* 80379B78 00376AB8  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 80379B7C 00376ABC  38 9E 0C E8 */	addi r4, r30, 0xce8
/* 80379B80 00376AC0  3C A0 00 02 */	lis r5, 2
/* 80379B84 00376AC4  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 80379B88 00376AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80379B8C 00376ACC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379B90 00376AD0  7D 89 03 A6 */	mtctr r12
/* 80379B94 00376AD4  4E 80 04 21 */	bctrl 
/* 80379B98 00376AD8  38 60 00 18 */	li r3, 0x18
/* 80379B9C 00376ADC  4B CA A3 09 */	bl __nw__FUl
/* 80379BA0 00376AE0  7C 60 1B 79 */	or. r0, r3, r3
/* 80379BA4 00376AE4  41 82 00 14 */	beq .L_80379BB8
/* 80379BA8 00376AE8  7F A4 EB 78 */	mr r4, r29
/* 80379BAC 00376AEC  38 A0 00 01 */	li r5, 1
/* 80379BB0 00376AF0  48 02 77 F9 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379BB4 00376AF4  7C 60 1B 78 */	mr r0, r3
.L_80379BB8:
/* 80379BB8 00376AF8  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 80379BBC 00376AFC  38 9E 0D 00 */	addi r4, r30, 0xd00
/* 80379BC0 00376B00  3C A0 00 02 */	lis r5, 2
/* 80379BC4 00376B04  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80379BC8 00376B08  81 83 00 00 */	lwz r12, 0(r3)
/* 80379BCC 00376B0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379BD0 00376B10  7D 89 03 A6 */	mtctr r12
/* 80379BD4 00376B14  4E 80 04 21 */	bctrl 
/* 80379BD8 00376B18  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80379BDC 00376B1C  38 9E 0D 1C */	addi r4, r30, 0xd1c
/* 80379BE0 00376B20  48 02 78 81 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80379BE4 00376B24  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80379BE8 00376B28  3C A0 65 6C */	lis r5, 0x656C5F6C@ha
/* 80379BEC 00376B2C  3C 80 50 6D */	lis r4, 0x506D6F64@ha
/* 80379BF0 00376B30  80 63 00 08 */	lwz r3, 8(r3)
/* 80379BF4 00376B34  38 C5 5F 6C */	addi r6, r5, 0x656C5F6C@l
/* 80379BF8 00376B38  38 A4 6F 64 */	addi r5, r4, 0x506D6F64@l
/* 80379BFC 00376B3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80379C00 00376B40  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379C04 00376B44  7D 89 03 A6 */	mtctr r12
/* 80379C08 00376B48  4E 80 04 21 */	bctrl 
/* 80379C0C 00376B4C  38 00 00 00 */	li r0, 0
/* 80379C10 00376B50  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80379C14 00376B54  38 60 00 58 */	li r3, 0x58
/* 80379C18 00376B58  4B CA A2 8D */	bl __nw__FUl
/* 80379C1C 00376B5C  7C 60 1B 79 */	or. r0, r3, r3
/* 80379C20 00376B60  41 82 00 14 */	beq .L_80379C34
/* 80379C24 00376B64  7F A4 EB 78 */	mr r4, r29
/* 80379C28 00376B68  38 A0 00 02 */	li r5, 2
/* 80379C2C 00376B6C  48 00 1C 89 */	bl __ct__Q28Morimura12TZukanWindowFP10JKRArchivei
/* 80379C30 00376B70  7C 60 1B 78 */	mr r0, r3
.L_80379C34:
/* 80379C34 00376B74  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 80379C38 00376B78  38 9E 05 C4 */	addi r4, r30, 0x5c4
/* 80379C3C 00376B7C  3C A0 00 02 */	lis r5, 2
/* 80379C40 00376B80  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C44 00376B84  81 83 00 00 */	lwz r12, 0(r3)
/* 80379C48 00376B88  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379C4C 00376B8C  7D 89 03 A6 */	mtctr r12
/* 80379C50 00376B90  4E 80 04 21 */	bctrl 
/* 80379C54 00376B94  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C58 00376B98  38 9E 05 DC */	addi r4, r30, 0x5dc
/* 80379C5C 00376B9C  48 02 78 05 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80379C60 00376BA0  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C64 00376BA4  38 9E 05 F4 */	addi r4, r30, 0x5f4
/* 80379C68 00376BA8  48 02 77 F9 */	bl addAnim__Q28Morimura11TScreenBaseFPc
/* 80379C6C 00376BAC  80 BF 00 DC */	lwz r5, 0xdc(r31)
/* 80379C70 00376BB0  3C 80 61 33 */	lis r4, 0x61336473@ha
/* 80379C74 00376BB4  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379C78 00376BB8  38 C4 64 73 */	addi r6, r4, 0x61336473@l
/* 80379C7C 00376BBC  80 85 00 08 */	lwz r4, 8(r5)
/* 80379C80 00376BC0  38 A0 6F 74 */	li r5, 0x6f74
/* 80379C84 00376BC4  4B FB 35 CD */	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
/* 80379C88 00376BC8  90 7F 00 E8 */	stw r3, 0xe8(r31)
/* 80379C8C 00376BCC  3C 60 61 33 */	lis r3, 0x61336473@ha
/* 80379C90 00376BD0  38 C3 64 73 */	addi r6, r3, 0x61336473@l
/* 80379C94 00376BD4  38 A0 6F 74 */	li r5, 0x6f74
/* 80379C98 00376BD8  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379C9C 00376BDC  80 63 00 08 */	lwz r3, 8(r3)
/* 80379CA0 00376BE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80379CA4 00376BE4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379CA8 00376BE8  7D 89 03 A6 */	mtctr r12
/* 80379CAC 00376BEC  4E 80 04 21 */	bctrl 
/* 80379CB0 00376BF0  90 7F 01 00 */	stw r3, 0x100(r31)
/* 80379CB4 00376BF4  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 80379CB8 00376BF8  28 00 00 00 */	cmplwi r0, 0
/* 80379CBC 00376BFC  40 82 00 18 */	bne .L_80379CD4
/* 80379CC0 00376C00  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379CC4 00376C04  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379CC8 00376C08  38 80 11 54 */	li r4, 0x1154
/* 80379CCC 00376C0C  4C C6 31 82 */	crclr 6
/* 80379CD0 00376C10  4B CB 09 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379CD4:
/* 80379CD4 00376C14  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 80379CD8 00376C18  28 00 00 00 */	cmplwi r0, 0
/* 80379CDC 00376C1C  40 82 00 18 */	bne .L_80379CF4
/* 80379CE0 00376C20  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379CE4 00376C24  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379CE8 00376C28  38 80 11 55 */	li r4, 0x1155
/* 80379CEC 00376C2C  4C C6 31 82 */	crclr 6
/* 80379CF0 00376C30  4B CB 09 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379CF4:
/* 80379CF4 00376C34  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 80379CF8 00376C38  C0 22 07 C4 */	lfs f1, lbl_8051EB24@sda21(r2)
/* 80379CFC 00376C3C  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379D00 00376C40  4B F8 B9 A9 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 80379D04 00376C44  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 80379D08 00376C48  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80379D0C 00376C4C  4B F8 BB AD */	bl start__Q32og6Screen9AnimGroupFv
/* 80379D10 00376C50  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379D14 00376C54  3C A0 5F 63 */	lis r5, 0x5F637570@ha
/* 80379D18 00376C58  3C 80 50 62 */	lis r4, 0x5062746E@ha
/* 80379D1C 00376C5C  80 63 00 08 */	lwz r3, 8(r3)
/* 80379D20 00376C60  38 C5 75 70 */	addi r6, r5, 0x5F637570@l
/* 80379D24 00376C64  38 A4 74 6E */	addi r5, r4, 0x5062746E@l
/* 80379D28 00376C68  81 83 00 00 */	lwz r12, 0(r3)
/* 80379D2C 00376C6C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80379D30 00376C70  7D 89 03 A6 */	mtctr r12
/* 80379D34 00376C74  4E 80 04 21 */	bctrl 
/* 80379D38 00376C78  90 7F 01 04 */	stw r3, 0x104(r31)
/* 80379D3C 00376C7C  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 80379D40 00376C80  28 00 00 00 */	cmplwi r0, 0
/* 80379D44 00376C84  40 82 00 18 */	bne .L_80379D5C
/* 80379D48 00376C88  38 7E 00 0C */	addi r3, r30, 0xc
/* 80379D4C 00376C8C  38 BE 00 18 */	addi r5, r30, 0x18
/* 80379D50 00376C90  38 80 11 5A */	li r4, 0x115a
/* 80379D54 00376C94  4C C6 31 82 */	crclr 6
/* 80379D58 00376C98  4B CB 08 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80379D5C:
/* 80379D5C 00376C9C  38 60 00 18 */	li r3, 0x18
/* 80379D60 00376CA0  4B CA A1 45 */	bl __nw__FUl
/* 80379D64 00376CA4  7C 60 1B 79 */	or. r0, r3, r3
/* 80379D68 00376CA8  41 82 00 14 */	beq .L_80379D7C
/* 80379D6C 00376CAC  7F A4 EB 78 */	mr r4, r29
/* 80379D70 00376CB0  38 A0 00 00 */	li r5, 0
/* 80379D74 00376CB4  48 02 76 35 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379D78 00376CB8  7C 60 1B 78 */	mr r0, r3
.L_80379D7C:
/* 80379D7C 00376CBC  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 80379D80 00376CC0  38 9E 0D 38 */	addi r4, r30, 0xd38
/* 80379D84 00376CC4  3C A0 00 02 */	lis r5, 2
/* 80379D88 00376CC8  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 80379D8C 00376CCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80379D90 00376CD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379D94 00376CD4  7D 89 03 A6 */	mtctr r12
/* 80379D98 00376CD8  4E 80 04 21 */	bctrl 
/* 80379D9C 00376CDC  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 80379DA0 00376CE0  28 00 00 00 */	cmplwi r0, 0
/* 80379DA4 00376CE4  40 82 00 1C */	bne .L_80379DC0
/* 80379DA8 00376CE8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80379DAC 00376CEC  28 03 00 00 */	cmplwi r3, 0
/* 80379DB0 00376CF0  41 82 00 40 */	beq .L_80379DF0
/* 80379DB4 00376CF4  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80379DB8 00376CF8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80379DBC 00376CFC  41 82 00 34 */	beq .L_80379DF0
.L_80379DC0:
/* 80379DC0 00376D00  38 00 00 00 */	li r0, 0
/* 80379DC4 00376D04  38 9F 01 B8 */	addi r4, r31, 0x1b8
/* 80379DC8 00376D08  90 1F 02 74 */	stw r0, 0x274(r31)
/* 80379DCC 00376D0C  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DD0 00376D10  48 00 25 E1 */	bl setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10
/* 80379DD4 00376D14  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DD8 00376D18  38 80 00 01 */	li r4, 1
/* 80379DDC 00376D1C  48 00 27 31 */	bl onIcon__Q28Morimura12TZukanWindowFi
/* 80379DE0 00376D20  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DE4 00376D24  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 80379DE8 00376D28  38 BF 01 D8 */	addi r5, r31, 0x1d8
/* 80379DEC 00376D2C  48 00 26 31 */	bl setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10
.L_80379DF0:
/* 80379DF0 00376D30  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 80379DF4 00376D34  80 9F 02 74 */	lwz r4, 0x274(r31)
/* 80379DF8 00376D38  80 BF 02 70 */	lwz r5, 0x270(r31)
/* 80379DFC 00376D3C  48 00 28 71 */	bl changeIconTexture__Q28Morimura12TZukanWindowFiP7ResTIMG
/* 80379E00 00376D40  38 60 00 18 */	li r3, 0x18
/* 80379E04 00376D44  4B CA A0 A1 */	bl __nw__FUl
/* 80379E08 00376D48  7C 60 1B 79 */	or. r0, r3, r3
/* 80379E0C 00376D4C  41 82 00 14 */	beq .L_80379E20
/* 80379E10 00376D50  7F A4 EB 78 */	mr r4, r29
/* 80379E14 00376D54  38 A0 00 00 */	li r5, 0
/* 80379E18 00376D58  48 02 75 91 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 80379E1C 00376D5C  7C 60 1B 78 */	mr r0, r3
.L_80379E20:
/* 80379E20 00376D60  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 80379E24 00376D64  38 9E 0D 58 */	addi r4, r30, 0xd58
/* 80379E28 00376D68  3C A0 00 02 */	lis r5, 2
/* 80379E2C 00376D6C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379E30 00376D70  81 83 00 00 */	lwz r12, 0(r3)
/* 80379E34 00376D74  81 8C 00 08 */	lwz r12, 8(r12)
/* 80379E38 00376D78  7D 89 03 A6 */	mtctr r12
/* 80379E3C 00376D7C  4E 80 04 21 */	bctrl 
/* 80379E40 00376D80  38 60 00 B0 */	li r3, 0xb0
/* 80379E44 00376D84  4B CA A0 61 */	bl __nw__FUl
/* 80379E48 00376D88  7C 78 1B 79 */	or. r24, r3, r3
/* 80379E4C 00376D8C  41 82 00 40 */	beq .L_80379E8C
/* 80379E50 00376D90  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 80379E54 00376D94  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 80379E58 00376D98  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 80379E5C 00376D9C  38 A0 00 04 */	li r5, 4
/* 80379E60 00376DA0  38 C0 00 04 */	li r6, 4
/* 80379E64 00376DA4  4B F9 16 C1 */	bl __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
/* 80379E68 00376DA8  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TScaleUpCounter@ha
/* 80379E6C 00376DAC  38 00 00 00 */	li r0, 0
/* 80379E70 00376DB0  38 63 58 3C */	addi r3, r3, __vt__Q28Morimura15TScaleUpCounter@l
/* 80379E74 00376DB4  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80379E78 00376DB8  90 78 00 00 */	stw r3, 0(r24)
/* 80379E7C 00376DBC  98 18 00 A8 */	stb r0, 0xa8(r24)
/* 80379E80 00376DC0  98 18 00 A9 */	stb r0, 0xa9(r24)
/* 80379E84 00376DC4  98 18 00 AA */	stb r0, 0xaa(r24)
/* 80379E88 00376DC8  D0 18 00 AC */	stfs f0, 0xac(r24)
.L_80379E8C:
/* 80379E8C 00376DCC  93 1F 02 50 */	stw r24, 0x250(r31)
/* 80379E90 00376DD0  3C 80 65 69 */	lis r4, 0x65693135@ha
/* 80379E94 00376DD4  38 1F 01 88 */	addi r0, r31, 0x188
/* 80379E98 00376DD8  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 80379E9C 00376DDC  90 01 00 08 */	stw r0, 8(r1)
/* 80379EA0 00376DE0  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 80379EA4 00376DE4  38 00 00 01 */	li r0, 1
/* 80379EA8 00376DE8  38 C4 31 35 */	addi r6, r4, 0x65693135@l
/* 80379EAC 00376DEC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80379EB0 00376DF0  7C A7 2B 78 */	mr r7, r5
/* 80379EB4 00376DF4  7C A9 2B 78 */	mr r9, r5
/* 80379EB8 00376DF8  39 04 31 34 */	addi r8, r4, 0x3134
/* 80379EBC 00376DFC  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80379EC0 00376E00  39 44 31 32 */	addi r10, r4, 0x3132
/* 80379EC4 00376E04  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80379EC8 00376E08  81 83 00 00 */	lwz r12, 0(r3)
/* 80379ECC 00376E0C  80 84 00 08 */	lwz r4, 8(r4)
/* 80379ED0 00376E10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80379ED4 00376E14  7D 89 03 A6 */	mtctr r12
/* 80379ED8 00376E18  4E 80 04 21 */	bctrl 
/* 80379EDC 00376E1C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80379EE0 00376E20  38 80 00 01 */	li r4, 1
/* 80379EE4 00376E24  4B F9 18 F5 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 80379EE8 00376E28  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379EEC 00376E2C  3C A0 65 69 */	lis r5, 0x65693135@ha
/* 80379EF0 00376E30  3C 80 50 67 */	lis r4, 0x50676973@ha
/* 80379EF4 00376E34  80 FF 02 50 */	lwz r7, 0x250(r31)
/* 80379EF8 00376E38  80 63 00 08 */	lwz r3, 8(r3)
/* 80379EFC 00376E3C  38 C5 31 35 */	addi r6, r5, 0x65693135@l
/* 80379F00 00376E40  38 A4 69 73 */	addi r5, r4, 0x50676973@l
/* 80379F04 00376E44  48 0B AC 21 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80379F08 00376E48  38 60 00 B0 */	li r3, 0xb0
/* 80379F0C 00376E4C  4B CA 9F 99 */	bl __nw__FUl
/* 80379F10 00376E50  7C 78 1B 79 */	or. r24, r3, r3
/* 80379F14 00376E54  41 82 00 40 */	beq .L_80379F54
/* 80379F18 00376E58  3C 80 80 4D */	lis r4, SujiTex32__Q22og6Screen@ha
/* 80379F1C 00376E5C  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 80379F20 00376E60  38 84 7E 18 */	addi r4, r4, SujiTex32__Q22og6Screen@l
/* 80379F24 00376E64  38 A0 00 04 */	li r5, 4
/* 80379F28 00376E68  38 C0 00 02 */	li r6, 2
/* 80379F2C 00376E6C  4B F9 15 F9 */	bl __ct__Q32og6Screen18CallBack_CounterRVFPPcUsUsP10JKRArchive
/* 80379F30 00376E70  3C 60 80 4E */	lis r3, __vt__Q28Morimura15TScaleUpCounter@ha
/* 80379F34 00376E74  38 00 00 00 */	li r0, 0
/* 80379F38 00376E78  38 63 58 3C */	addi r3, r3, __vt__Q28Morimura15TScaleUpCounter@l
/* 80379F3C 00376E7C  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 80379F40 00376E80  90 78 00 00 */	stw r3, 0(r24)
/* 80379F44 00376E84  98 18 00 A8 */	stb r0, 0xa8(r24)
/* 80379F48 00376E88  98 18 00 A9 */	stb r0, 0xa9(r24)
/* 80379F4C 00376E8C  98 18 00 AA */	stb r0, 0xaa(r24)
/* 80379F50 00376E90  D0 18 00 AC */	stfs f0, 0xac(r24)
.L_80379F54:
/* 80379F54 00376E94  93 1F 02 54 */	stw r24, 0x254(r31)
/* 80379F58 00376E98  3C 80 73 69 */	lis r4, 0x73693031@ha
/* 80379F5C 00376E9C  38 1F 01 8C */	addi r0, r31, 0x18c
/* 80379F60 00376EA0  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 80379F64 00376EA4  90 01 00 08 */	stw r0, 8(r1)
/* 80379F68 00376EA8  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 80379F6C 00376EAC  39 04 30 31 */	addi r8, r4, 0x73693031@l
/* 80379F70 00376EB0  38 C4 30 30 */	addi r6, r4, 0x3030
/* 80379F74 00376EB4  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 80379F78 00376EB8  7C A7 2B 78 */	mr r7, r5
/* 80379F7C 00376EBC  7D 0A 43 78 */	mr r10, r8
/* 80379F80 00376EC0  7C A9 2B 78 */	mr r9, r5
/* 80379F84 00376EC4  7C 03 00 D0 */	neg r0, r3
/* 80379F88 00376EC8  7C 00 1B 78 */	or r0, r0, r3
/* 80379F8C 00376ECC  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80379F90 00376ED0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80379F94 00376ED4  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80379F98 00376ED8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80379F9C 00376EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80379FA0 00376EE0  80 84 00 08 */	lwz r4, 8(r4)
/* 80379FA4 00376EE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80379FA8 00376EE8  7D 89 03 A6 */	mtctr r12
/* 80379FAC 00376EEC  4E 80 04 21 */	bctrl 
/* 80379FB0 00376EF0  80 7F 02 54 */	lwz r3, 0x254(r31)
/* 80379FB4 00376EF4  38 80 00 01 */	li r4, 1
/* 80379FB8 00376EF8  4B F9 18 21 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 80379FBC 00376EFC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379FC0 00376F00  3C A0 73 69 */	lis r5, 0x73693030@ha
/* 80379FC4 00376F04  3C 80 50 74 */	lis r4, 0x5074616F@ha
/* 80379FC8 00376F08  80 FF 02 54 */	lwz r7, 0x254(r31)
/* 80379FCC 00376F0C  80 63 00 08 */	lwz r3, 8(r3)
/* 80379FD0 00376F10  38 C5 30 30 */	addi r6, r5, 0x73693030@l
/* 80379FD4 00376F14  38 A4 61 6F */	addi r5, r4, 0x5074616F@l
/* 80379FD8 00376F18  48 0B AB 4D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80379FDC 00376F1C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80379FE0 00376F20  3C A0 69 6E */	lis r5, 0x696E6F31@ha
/* 80379FE4 00376F24  3C 80 50 74 */	lis r4, 0x5074656B@ha
/* 80379FE8 00376F28  81 3F 00 78 */	lwz r9, 0x78(r31)
/* 80379FEC 00376F2C  80 63 00 08 */	lwz r3, 8(r3)
/* 80379FF0 00376F30  38 C5 6F 31 */	addi r6, r5, 0x696E6F31@l
/* 80379FF4 00376F34  38 A4 65 6B */	addi r5, r4, 0x5074656B@l
/* 80379FF8 00376F38  38 FF 01 94 */	addi r7, r31, 0x194
/* 80379FFC 00376F3C  39 00 00 03 */	li r8, 3
/* 8037A000 00376F40  48 02 7C 5D */	bl setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
/* 8037A004 00376F44  90 7F 00 E0 */	stw r3, 0xe0(r31)
/* 8037A008 00376F48  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A00C 00376F4C  28 00 00 00 */	cmplwi r0, 0
/* 8037A010 00376F50  41 82 00 3C */	beq .L_8037A04C
/* 8037A014 00376F54  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037A018 00376F58  28 00 00 00 */	cmplwi r0, 0
/* 8037A01C 00376F5C  40 82 00 14 */	bne .L_8037A030
/* 8037A020 00376F60  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037A024 00376F64  4B F9 17 9D */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037A028 00376F68  38 00 00 00 */	li r0, 0
/* 8037A02C 00376F6C  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037A030:
/* 8037A030 00376F70  88 0D 98 FB */	lbz r0, mZukanCategoryTest__Q28Morimura10TZukanBase@sda21(r13)
/* 8037A034 00376F74  28 00 00 00 */	cmplwi r0, 0
/* 8037A038 00376F78  41 82 00 14 */	beq .L_8037A04C
/* 8037A03C 00376F7C  80 7F 00 E0 */	lwz r3, 0xe0(r31)
/* 8037A040 00376F80  4B F9 17 81 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 8037A044 00376F84  38 00 00 01 */	li r0, 1
/* 8037A048 00376F88  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037A04C:
/* 8037A04C 00376F8C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8037A050 00376F90  3C A0 73 69 */	lis r5, 0x73693030@ha
/* 8037A054 00376F94  3C 80 50 74 */	lis r4, 0x5074616F@ha
/* 8037A058 00376F98  80 63 00 08 */	lwz r3, 8(r3)
/* 8037A05C 00376F9C  38 C5 30 30 */	addi r6, r5, 0x73693030@l
/* 8037A060 00376FA0  38 A4 61 6F */	addi r5, r4, 0x5074616F@l
/* 8037A064 00376FA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A068 00376FA8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A06C 00376FAC  7D 89 03 A6 */	mtctr r12
/* 8037A070 00376FB0  4E 80 04 21 */	bctrl 
/* 8037A074 00376FB4  38 00 00 00 */	li r0, 0
/* 8037A078 00376FB8  3C 80 73 69 */	lis r4, 0x73693031@ha
/* 8037A07C 00376FBC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A080 00376FC0  3C 60 50 74 */	lis r3, 0x5074616F@ha
/* 8037A084 00376FC4  38 C4 30 31 */	addi r6, r4, 0x73693031@l
/* 8037A088 00376FC8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A08C 00376FCC  38 A3 61 6F */	addi r5, r3, 0x5074616F@l
/* 8037A090 00376FD0  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A094 00376FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A098 00376FD8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A09C 00376FDC  7D 89 03 A6 */	mtctr r12
/* 8037A0A0 00376FE0  4E 80 04 21 */	bctrl 
/* 8037A0A4 00376FE4  38 00 00 00 */	li r0, 0
/* 8037A0A8 00376FE8  3C 80 65 69 */	lis r4, 0x65693132@ha
/* 8037A0AC 00376FEC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A0B0 00376FF0  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A0B4 00376FF4  38 C4 31 32 */	addi r6, r4, 0x65693132@l
/* 8037A0B8 00376FF8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A0BC 00376FFC  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A0C0 00377000  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A0C4 00377004  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A0C8 00377008  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A0CC 0037700C  7D 89 03 A6 */	mtctr r12
/* 8037A0D0 00377010  4E 80 04 21 */	bctrl 
/* 8037A0D4 00377014  38 00 00 00 */	li r0, 0
/* 8037A0D8 00377018  3C 80 65 69 */	lis r4, 0x65693133@ha
/* 8037A0DC 0037701C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A0E0 00377020  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A0E4 00377024  38 C4 31 33 */	addi r6, r4, 0x65693133@l
/* 8037A0E8 00377028  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A0EC 0037702C  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A0F0 00377030  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A0F4 00377034  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A0F8 00377038  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A0FC 0037703C  7D 89 03 A6 */	mtctr r12
/* 8037A100 00377040  4E 80 04 21 */	bctrl 
/* 8037A104 00377044  38 00 00 00 */	li r0, 0
/* 8037A108 00377048  3C 80 65 69 */	lis r4, 0x65693134@ha
/* 8037A10C 0037704C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A110 00377050  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A114 00377054  38 C4 31 34 */	addi r6, r4, 0x65693134@l
/* 8037A118 00377058  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A11C 0037705C  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A120 00377060  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A124 00377064  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A128 00377068  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A12C 0037706C  7D 89 03 A6 */	mtctr r12
/* 8037A130 00377070  4E 80 04 21 */	bctrl 
/* 8037A134 00377074  38 00 00 00 */	li r0, 0
/* 8037A138 00377078  3C 80 65 69 */	lis r4, 0x65693135@ha
/* 8037A13C 0037707C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A140 00377080  3C 60 50 67 */	lis r3, 0x50676973@ha
/* 8037A144 00377084  38 C4 31 35 */	addi r6, r4, 0x65693135@l
/* 8037A148 00377088  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8037A14C 0037708C  38 A3 69 73 */	addi r5, r3, 0x50676973@l
/* 8037A150 00377090  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A154 00377094  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A158 00377098  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A15C 0037709C  7D 89 03 A6 */	mtctr r12
/* 8037A160 003770A0  4E 80 04 21 */	bctrl 
/* 8037A164 003770A4  38 00 00 00 */	li r0, 0
/* 8037A168 003770A8  7F A4 EB 78 */	mr r4, r29
/* 8037A16C 003770AC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037A170 003770B0  7F E3 FB 78 */	mr r3, r31
/* 8037A174 003770B4  4B FF 6E 59 */	bl doCreate__Q28Morimura10TZukanBaseFP10JKRArchive
/* 8037A178 003770B8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A17C 003770BC  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8037A180 003770C0  80 83 00 00 */	lwz r4, 0(r3)
/* 8037A184 003770C4  80 63 00 04 */	lwz r3, 4(r3)
/* 8037A188 003770C8  80 84 00 04 */	lwz r4, 4(r4)
/* 8037A18C 003770CC  80 63 00 04 */	lwz r3, 4(r3)
/* 8037A190 003770D0  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 8037A194 003770D4  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 8037A198 003770D8  90 1F 02 38 */	stw r0, 0x238(r31)
/* 8037A19C 003770DC  EF C1 00 28 */	fsubs f30, f1, f0
/* 8037A1A0 003770E0  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A1A4 003770E4  28 00 00 00 */	cmplwi r0, 0
/* 8037A1A8 003770E8  40 82 00 1C */	bne .L_8037A1C4
/* 8037A1AC 003770EC  7F E3 FB 78 */	mr r3, r31
/* 8037A1B0 003770F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A1B4 003770F4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037A1B8 003770F8  7D 89 03 A6 */	mtctr r12
/* 8037A1BC 003770FC  4E 80 04 21 */	bctrl 
/* 8037A1C0 00377100  90 7F 02 38 */	stw r3, 0x238(r31)
.L_8037A1C4:
/* 8037A1C4 00377104  3A C0 00 00 */	li r22, 0
/* 8037A1C8 00377108  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
.L_8037A1CC:
/* 8037A1CC 0037710C  3A E0 00 00 */	li r23, 0
/* 8037A1D0 00377110  3B 00 00 00 */	li r24, 0
/* 8037A1D4 00377114  48 00 00 48 */	b .L_8037A21C
.L_8037A1D8:
/* 8037A1D8 00377118  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A1DC 0037711C  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A1E0 00377120  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8037A1E4 00377124  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A1E8 00377128  EC 00 F0 2A */	fadds f0, f0, f30
/* 8037A1EC 0037712C  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8037A1F0 00377130  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A1F4 00377134  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A1F8 00377138  7D 89 03 A6 */	mtctr r12
/* 8037A1FC 0037713C  4E 80 04 21 */	bctrl 
/* 8037A200 00377140  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A204 00377144  3A F7 00 01 */	addi r23, r23, 1
/* 8037A208 00377148  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A20C 0037714C  3B 18 00 04 */	addi r24, r24, 4
/* 8037A210 00377150  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A214 00377154  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037A218 00377158  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_8037A21C:
/* 8037A21C 0037715C  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037A220 00377160  7C 17 00 00 */	cmpw r23, r0
/* 8037A224 00377164  41 80 FF B4 */	blt .L_8037A1D8
/* 8037A228 00377168  7F E3 FB 78 */	mr r3, r31
/* 8037A22C 0037716C  38 80 00 00 */	li r4, 0
/* 8037A230 00377170  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A234 00377174  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8037A238 00377178  7D 89 03 A6 */	mtctr r12
/* 8037A23C 0037717C  4E 80 04 21 */	bctrl 
/* 8037A240 00377180  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8037A244 00377184  38 00 00 00 */	li r0, 0
/* 8037A248 00377188  7F E3 FB 78 */	mr r3, r31
/* 8037A24C 0037718C  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 8037A250 00377190  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037A254 00377194  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A258 00377198  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037A25C 0037719C  7D 89 03 A6 */	mtctr r12
/* 8037A260 003771A0  4E 80 04 21 */	bctrl 
/* 8037A264 003771A4  3A D6 00 01 */	addi r22, r22, 1
/* 8037A268 003771A8  2C 16 00 04 */	cmpwi r22, 4
/* 8037A26C 003771AC  41 80 FF 60 */	blt .L_8037A1CC
/* 8037A270 003771B0  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 8037A274 003771B4  3B 00 FF FF */	li r24, -1
/* 8037A278 003771B8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8037A27C 003771BC  28 00 00 00 */	cmplwi r0, 0
/* 8037A280 003771C0  41 82 00 3C */	beq .L_8037A2BC
/* 8037A284 003771C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A288 003771C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8037A28C 003771CC  7D 89 03 A6 */	mtctr r12
/* 8037A290 003771D0  4E 80 04 21 */	bctrl 
/* 8037A294 003771D4  3C A0 49 54 */	lis r5, 0x4954454D@ha
/* 8037A298 003771D8  38 00 00 44 */	li r0, 0x44
/* 8037A29C 003771DC  38 A5 45 4D */	addi r5, r5, 0x4954454D@l
/* 8037A2A0 003771E0  7C 84 2A 78 */	xor r4, r4, r5
/* 8037A2A4 003771E4  7C 60 02 78 */	xor r0, r3, r0
/* 8037A2A8 003771E8  7C 80 03 79 */	or. r0, r4, r0
/* 8037A2AC 003771EC  40 82 00 10 */	bne .L_8037A2BC
/* 8037A2B0 003771F0  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 8037A2B4 003771F4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8037A2B8 003771F8  83 03 00 00 */	lwz r24, 0(r3)
.L_8037A2BC:
/* 8037A2BC 003771FC  2C 18 00 00 */	cmpwi r24, 0
/* 8037A2C0 00377200  40 80 00 90 */	bge .L_8037A350
/* 8037A2C4 00377204  3A C0 00 00 */	li r22, 0
/* 8037A2C8 00377208  48 00 00 6C */	b .L_8037A334
.L_8037A2CC:
/* 8037A2CC 0037720C  7F E3 FB 78 */	mr r3, r31
/* 8037A2D0 00377210  7E C4 B3 78 */	mr r4, r22
/* 8037A2D4 00377214  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A2D8 00377218  38 A0 00 00 */	li r5, 0
/* 8037A2DC 0037721C  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8037A2E0 00377220  7D 89 03 A6 */	mtctr r12
/* 8037A2E4 00377224  4E 80 04 21 */	bctrl 
/* 8037A2E8 00377228  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037A2EC 0037722C  41 82 00 44 */	beq .L_8037A330
/* 8037A2F0 00377230  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A2F4 00377234  7E D8 B3 78 */	mr r24, r22
/* 8037A2F8 00377238  28 00 00 00 */	cmplwi r0, 0
/* 8037A2FC 0037723C  41 82 00 54 */	beq .L_8037A350
/* 8037A300 00377240  80 1F 02 2C */	lwz r0, 0x22c(r31)
/* 8037A304 00377244  28 00 00 00 */	cmplwi r0, 0
/* 8037A308 00377248  40 82 00 18 */	bne .L_8037A320
/* 8037A30C 0037724C  38 7E 00 0C */	addi r3, r30, 0xc
/* 8037A310 00377250  38 BE 00 18 */	addi r5, r30, 0x18
/* 8037A314 00377254  38 80 11 B5 */	li r4, 0x11b5
/* 8037A318 00377258  4C C6 31 82 */	crclr 6
/* 8037A31C 0037725C  4B CB 03 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037A320:
/* 8037A320 00377260  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 8037A324 00377264  56 C0 10 3A */	slwi r0, r22, 2
/* 8037A328 00377268  7F 03 00 2E */	lwzx r24, r3, r0
/* 8037A32C 0037726C  48 00 00 24 */	b .L_8037A350
.L_8037A330:
/* 8037A330 00377270  3A D6 00 01 */	addi r22, r22, 1
.L_8037A334:
/* 8037A334 00377274  7F E3 FB 78 */	mr r3, r31
/* 8037A338 00377278  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A33C 0037727C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037A340 00377280  7D 89 03 A6 */	mtctr r12
/* 8037A344 00377284  4E 80 04 21 */	bctrl 
/* 8037A348 00377288  7C 16 18 00 */	cmpw r22, r3
/* 8037A34C 0037728C  41 80 FF 80 */	blt .L_8037A2CC
.L_8037A350:
/* 8037A350 00377290  2C 18 00 00 */	cmpwi r24, 0
/* 8037A354 00377294  41 80 01 3C */	blt .L_8037A490
/* 8037A358 00377298  88 1F 02 40 */	lbz r0, 0x240(r31)
/* 8037A35C 0037729C  28 00 00 00 */	cmplwi r0, 0
/* 8037A360 003772A0  41 82 00 40 */	beq .L_8037A3A0
/* 8037A364 003772A4  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8037A368 003772A8  38 A0 00 00 */	li r5, 0
/* 8037A36C 003772AC  38 80 00 00 */	li r4, 0
/* 8037A370 003772B0  7C 09 03 A6 */	mtctr r0
/* 8037A374 003772B4  2C 00 00 00 */	cmpwi r0, 0
/* 8037A378 003772B8  40 81 00 28 */	ble .L_8037A3A0
.L_8037A37C:
/* 8037A37C 003772BC  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 8037A380 003772C0  7C 03 20 2E */	lwzx r0, r3, r4
/* 8037A384 003772C4  7C 18 00 00 */	cmpw r24, r0
/* 8037A388 003772C8  40 82 00 0C */	bne .L_8037A394
/* 8037A38C 003772CC  7C B8 2B 78 */	mr r24, r5
/* 8037A390 003772D0  48 00 00 10 */	b .L_8037A3A0
.L_8037A394:
/* 8037A394 003772D4  38 84 00 04 */	addi r4, r4, 4
/* 8037A398 003772D8  38 A5 00 01 */	addi r5, r5, 1
/* 8037A39C 003772DC  42 00 FF E0 */	bdnz .L_8037A37C
.L_8037A3A0:
/* 8037A3A0 003772E0  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 8037A3A4 003772E4  2C 18 00 02 */	cmpwi r24, 2
/* 8037A3A8 003772E8  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 8037A3AC 003772EC  7C 60 C0 96 */	mulhw r3, r0, r24
/* 8037A3B0 003772F0  54 60 0F FE */	srwi r0, r3, 0x1f
/* 8037A3B4 003772F4  7F 23 02 14 */	add r25, r3, r0
/* 8037A3B8 003772F8  1C 19 00 03 */	mulli r0, r25, 3
/* 8037A3BC 003772FC  7C 00 C0 50 */	subf r0, r0, r24
/* 8037A3C0 00377300  90 0D 99 C8 */	stw r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 8037A3C4 00377304  40 81 00 B8 */	ble .L_8037A47C
/* 8037A3C8 00377308  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
/* 8037A3CC 0037730C  3A C0 00 00 */	li r22, 0
/* 8037A3D0 00377310  48 00 00 A0 */	b .L_8037A470
.L_8037A3D4:
/* 8037A3D4 00377314  3A E0 00 00 */	li r23, 0
/* 8037A3D8 00377318  3B 00 00 00 */	li r24, 0
/* 8037A3DC 0037731C  48 00 00 48 */	b .L_8037A424
.L_8037A3E0:
/* 8037A3E0 00377320  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A3E4 00377324  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A3E8 00377328  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8037A3EC 0037732C  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A3F0 00377330  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8037A3F4 00377334  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 8037A3F8 00377338  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A3FC 0037733C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A400 00377340  7D 89 03 A6 */	mtctr r12
/* 8037A404 00377344  4E 80 04 21 */	bctrl 
/* 8037A408 00377348  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A40C 0037734C  3A F7 00 01 */	addi r23, r23, 1
/* 8037A410 00377350  7C 83 C0 2E */	lwzx r4, r3, r24
/* 8037A414 00377354  3B 18 00 04 */	addi r24, r24, 4
/* 8037A418 00377358  80 64 00 04 */	lwz r3, 4(r4)
/* 8037A41C 0037735C  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 8037A420 00377360  D0 04 00 1C */	stfs f0, 0x1c(r4)
.L_8037A424:
/* 8037A424 00377364  A8 1F 00 8E */	lha r0, 0x8e(r31)
/* 8037A428 00377368  7C 17 00 00 */	cmpw r23, r0
/* 8037A42C 0037736C  41 80 FF B4 */	blt .L_8037A3E0
/* 8037A430 00377370  7F E3 FB 78 */	mr r3, r31
/* 8037A434 00377374  38 80 00 01 */	li r4, 1
/* 8037A438 00377378  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A43C 0037737C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8037A440 00377380  7D 89 03 A6 */	mtctr r12
/* 8037A444 00377384  4E 80 04 21 */	bctrl 
/* 8037A448 00377388  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8037A44C 0037738C  38 00 00 00 */	li r0, 0
/* 8037A450 00377390  7F E3 FB 78 */	mr r3, r31
/* 8037A454 00377394  D3 E4 00 14 */	stfs f31, 0x14(r4)
/* 8037A458 00377398  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037A45C 0037739C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A460 003773A0  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037A464 003773A4  7D 89 03 A6 */	mtctr r12
/* 8037A468 003773A8  4E 80 04 21 */	bctrl 
/* 8037A46C 003773AC  3A D6 00 01 */	addi r22, r22, 1
.L_8037A470:
/* 8037A470 003773B0  7C 16 C8 00 */	cmpw r22, r25
/* 8037A474 003773B4  41 80 FF 60 */	blt .L_8037A3D4
/* 8037A478 003773B8  48 00 00 18 */	b .L_8037A490
.L_8037A47C:
/* 8037A47C 003773BC  7F E3 FB 78 */	mr r3, r31
/* 8037A480 003773C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A484 003773C4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8037A488 003773C8  7D 89 03 A6 */	mtctr r12
/* 8037A48C 003773CC  4E 80 04 21 */	bctrl 
.L_8037A490:
/* 8037A490 003773D0  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 8037A494 003773D4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8037A498 003773D8  54 00 10 3A */	slwi r0, r0, 2
/* 8037A49C 003773DC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037A4A0 003773E0  48 02 81 1D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037A4A4 003773E4  90 7F 02 24 */	stw r3, 0x224(r31)
/* 8037A4A8 003773E8  80 9F 02 24 */	lwz r4, 0x224(r31)
/* 8037A4AC 003773EC  2C 04 00 00 */	cmpwi r4, 0
/* 8037A4B0 003773F0  41 80 00 24 */	blt .L_8037A4D4
/* 8037A4B4 003773F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A4B8 003773F8  7F E3 FB 78 */	mr r3, r31
/* 8037A4BC 003773FC  82 DF 01 10 */	lwz r22, 0x110(r31)
/* 8037A4C0 00377400  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 8037A4C4 00377404  7D 89 03 A6 */	mtctr r12
/* 8037A4C8 00377408  4E 80 04 21 */	bctrl 
/* 8037A4CC 0037740C  90 96 00 1C */	stw r4, 0x1c(r22)
/* 8037A4D0 00377410  90 76 00 18 */	stw r3, 0x18(r22)
.L_8037A4D4:
/* 8037A4D4 00377414  7F 83 E3 78 */	mr r3, r28
/* 8037A4D8 00377418  4B CA 90 CD */	bl becomeCurrentHeap__7JKRHeapFv
/* 8037A4DC 0037741C  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 8037A4E0 00377420  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 8037A4E4 00377424  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 8037A4E8 00377428  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 8037A4EC 0037742C  BA C1 00 88 */	lmw r22, 0x88(r1)
/* 8037A4F0 00377430  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8037A4F4 00377434  7C 08 03 A6 */	mtlr r0
/* 8037A4F8 00377438  38 21 00 D0 */	addi r1, r1, 0xd0
/* 8037A4FC 0037743C  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura10TItemZukanFP10JKRArchive
.endif

.fn doDemoDraw__Q28Morimura10TItemZukanFR8Graphics, global
/* 8037A500 00377440  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8037A504 00377444  7C 08 02 A6 */	mflr r0
/* 8037A508 00377448  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8037A50C 0037744C  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8037A510 00377450  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 8037A514 00377454  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 8037A518 00377458  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 8037A51C 0037745C  BE E1 00 9C */	stmw r23, 0x9c(r1)
/* 8037A520 00377460  7C 78 1B 78 */	mr r24, r3
/* 8037A524 00377464  7C 99 23 78 */	mr r25, r4
/* 8037A528 00377468  C0 22 08 10 */	lfs f1, lbl_8051EB70@sda21(r2)
/* 8037A52C 0037746C  38 79 00 BC */	addi r3, r25, 0xbc
/* 8037A530 00377470  C0 18 03 B8 */	lfs f0, 0x3b8(r24)
/* 8037A534 00377474  3B F9 01 90 */	addi r31, r25, 0x190
/* 8037A538 00377478  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 8037A53C 0037747C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037A540 00377480  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037A544 00377484  FC 00 00 1E */	fctiwz f0, f0
/* 8037A548 00377488  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 8037A54C 0037748C  83 41 00 8C */	lwz r26, 0x8c(r1)
/* 8037A550 00377490  7D 89 03 A6 */	mtctr r12
/* 8037A554 00377494  4E 80 04 21 */	bctrl 
/* 8037A558 00377498  80 98 00 7C */	lwz r4, 0x7c(r24)
/* 8037A55C 0037749C  3C 60 62 74 */	lis r3, 0x62746E33@ha
/* 8037A560 003774A0  38 C3 6E 33 */	addi r6, r3, 0x62746E33@l
/* 8037A564 003774A4  38 A0 50 7A */	li r5, 0x507a
/* 8037A568 003774A8  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A56C 003774AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A570 003774B0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A574 003774B4  7D 89 03 A6 */	mtctr r12
/* 8037A578 003774B8  4E 80 04 21 */	bctrl 
/* 8037A57C 003774BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A580 003774C0  7C 77 1B 78 */	mr r23, r3
/* 8037A584 003774C4  7F 44 D3 78 */	mr r4, r26
/* 8037A588 003774C8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A58C 003774CC  7D 89 03 A6 */	mtctr r12
/* 8037A590 003774D0  4E 80 04 21 */	bctrl 
/* 8037A594 003774D4  7E E4 BB 78 */	mr r4, r23
/* 8037A598 003774D8  38 61 00 70 */	addi r3, r1, 0x70
/* 8037A59C 003774DC  38 A0 00 01 */	li r5, 1
/* 8037A5A0 003774E0  4B CB E9 F9 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A5A4 003774E4  7E E4 BB 78 */	mr r4, r23
/* 8037A5A8 003774E8  38 61 00 7C */	addi r3, r1, 0x7c
/* 8037A5AC 003774EC  38 A0 00 00 */	li r5, 0
/* 8037A5B0 003774F0  4B CB E9 E9 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A5B4 003774F4  7E E3 BB 78 */	mr r3, r23
/* 8037A5B8 003774F8  C0 77 00 28 */	lfs f3, 0x28(r23)
/* 8037A5BC 003774FC  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A5C0 00377500  38 80 00 00 */	li r4, 0
/* 8037A5C4 00377504  C0 57 00 20 */	lfs f2, 0x20(r23)
/* 8037A5C8 00377508  38 A0 00 00 */	li r5, 0
/* 8037A5CC 0037750C  C0 37 00 2C */	lfs f1, 0x2c(r23)
/* 8037A5D0 00377510  38 C0 00 00 */	li r6, 0
/* 8037A5D4 00377514  C0 17 00 24 */	lfs f0, 0x24(r23)
/* 8037A5D8 00377518  EC 63 10 28 */	fsubs f3, f3, f2
/* 8037A5DC 0037751C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8037A5E0 00377520  EC 81 00 28 */	fsubs f4, f1, f0
/* 8037A5E4 00377524  C0 21 00 7C */	lfs f1, 0x7c(r1)
/* 8037A5E8 00377528  C0 41 00 74 */	lfs f2, 0x74(r1)
/* 8037A5EC 0037752C  7D 89 03 A6 */	mtctr r12
/* 8037A5F0 00377530  4E 80 04 21 */	bctrl 
/* 8037A5F4 00377534  7E E3 BB 78 */	mr r3, r23
/* 8037A5F8 00377538  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A5FC 0037753C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A600 00377540  7D 89 03 A6 */	mtctr r12
/* 8037A604 00377544  4E 80 04 21 */	bctrl 
/* 8037A608 00377548  7E E3 BB 78 */	mr r3, r23
/* 8037A60C 0037754C  38 80 00 FF */	li r4, 0xff
/* 8037A610 00377550  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A614 00377554  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A618 00377558  7D 89 03 A6 */	mtctr r12
/* 8037A61C 0037755C  4E 80 04 21 */	bctrl 
/* 8037A620 00377560  80 98 00 7C */	lwz r4, 0x7c(r24)
/* 8037A624 00377564  3C 60 62 74 */	lis r3, 0x62746E32@ha
/* 8037A628 00377568  38 C3 6E 32 */	addi r6, r3, 0x62746E32@l
/* 8037A62C 0037756C  38 A0 50 7A */	li r5, 0x507a
/* 8037A630 00377570  80 64 00 08 */	lwz r3, 8(r4)
/* 8037A634 00377574  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A638 00377578  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037A63C 0037757C  7D 89 03 A6 */	mtctr r12
/* 8037A640 00377580  4E 80 04 21 */	bctrl 
/* 8037A644 00377584  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A648 00377588  7C 77 1B 78 */	mr r23, r3
/* 8037A64C 0037758C  7F 44 D3 78 */	mr r4, r26
/* 8037A650 00377590  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A654 00377594  7D 89 03 A6 */	mtctr r12
/* 8037A658 00377598  4E 80 04 21 */	bctrl 
/* 8037A65C 0037759C  7E E4 BB 78 */	mr r4, r23
/* 8037A660 003775A0  38 61 00 58 */	addi r3, r1, 0x58
/* 8037A664 003775A4  38 A0 00 01 */	li r5, 1
/* 8037A668 003775A8  4B CB E9 31 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A66C 003775AC  7E E4 BB 78 */	mr r4, r23
/* 8037A670 003775B0  38 61 00 64 */	addi r3, r1, 0x64
/* 8037A674 003775B4  38 A0 00 00 */	li r5, 0
/* 8037A678 003775B8  4B CB E9 21 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A67C 003775BC  7E E3 BB 78 */	mr r3, r23
/* 8037A680 003775C0  C0 77 00 28 */	lfs f3, 0x28(r23)
/* 8037A684 003775C4  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A688 003775C8  38 80 00 00 */	li r4, 0
/* 8037A68C 003775CC  C0 57 00 20 */	lfs f2, 0x20(r23)
/* 8037A690 003775D0  38 A0 00 00 */	li r5, 0
/* 8037A694 003775D4  C0 37 00 2C */	lfs f1, 0x2c(r23)
/* 8037A698 003775D8  38 C0 00 00 */	li r6, 0
/* 8037A69C 003775DC  C0 17 00 24 */	lfs f0, 0x24(r23)
/* 8037A6A0 003775E0  EC 63 10 28 */	fsubs f3, f3, f2
/* 8037A6A4 003775E4  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8037A6A8 003775E8  EC 81 00 28 */	fsubs f4, f1, f0
/* 8037A6AC 003775EC  C0 21 00 64 */	lfs f1, 0x64(r1)
/* 8037A6B0 003775F0  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 8037A6B4 003775F4  7D 89 03 A6 */	mtctr r12
/* 8037A6B8 003775F8  4E 80 04 21 */	bctrl 
/* 8037A6BC 003775FC  7E E3 BB 78 */	mr r3, r23
/* 8037A6C0 00377600  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A6C4 00377604  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A6C8 00377608  7D 89 03 A6 */	mtctr r12
/* 8037A6CC 0037760C  4E 80 04 21 */	bctrl 
/* 8037A6D0 00377610  7E E3 BB 78 */	mr r3, r23
/* 8037A6D4 00377614  38 80 00 FF */	li r4, 0xff
/* 8037A6D8 00377618  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A6DC 0037761C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A6E0 00377620  7D 89 03 A6 */	mtctr r12
/* 8037A6E4 00377624  4E 80 04 21 */	bctrl 
/* 8037A6E8 00377628  81 9F 00 00 */	lwz r12, 0(r31)
/* 8037A6EC 0037762C  7F E3 FB 78 */	mr r3, r31
/* 8037A6F0 00377630  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037A6F4 00377634  7D 89 03 A6 */	mtctr r12
/* 8037A6F8 00377638  4E 80 04 21 */	bctrl 
/* 8037A6FC 0037763C  80 78 00 F4 */	lwz r3, 0xf4(r24)
/* 8037A700 00377640  7F 44 D3 78 */	mr r4, r26
/* 8037A704 00377644  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A708 00377648  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A70C 0037764C  7D 89 03 A6 */	mtctr r12
/* 8037A710 00377650  4E 80 04 21 */	bctrl 
/* 8037A714 00377654  80 78 00 D0 */	lwz r3, 0xd0(r24)
/* 8037A718 00377658  7F 24 CB 78 */	mr r4, r25
/* 8037A71C 0037765C  7F E5 FB 78 */	mr r5, r31
/* 8037A720 00377660  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A724 00377664  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037A728 00377668  7D 89 03 A6 */	mtctr r12
/* 8037A72C 0037766C  4E 80 04 21 */	bctrl 
/* 8037A730 00377670  80 78 00 F4 */	lwz r3, 0xf4(r24)
/* 8037A734 00377674  38 80 00 FF */	li r4, 0xff
/* 8037A738 00377678  81 83 00 00 */	lwz r12, 0(r3)
/* 8037A73C 0037767C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A740 00377680  7D 89 03 A6 */	mtctr r12
/* 8037A744 00377684  4E 80 04 21 */	bctrl 
/* 8037A748 00377688  38 79 00 BC */	addi r3, r25, 0xbc
/* 8037A74C 0037768C  81 99 00 BC */	lwz r12, 0xbc(r25)
/* 8037A750 00377690  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037A754 00377694  7D 89 03 A6 */	mtctr r12
/* 8037A758 00377698  4E 80 04 21 */	bctrl 
/* 8037A75C 0037769C  C3 F8 01 A4 */	lfs f31, 0x1a4(r24)
/* 8037A760 003776A0  C0 18 01 AC */	lfs f0, 0x1ac(r24)
/* 8037A764 003776A4  C3 D8 01 A0 */	lfs f30, 0x1a0(r24)
/* 8037A768 003776A8  EC 20 F8 28 */	fsubs f1, f0, f31
/* 8037A76C 003776AC  4B D4 73 E1 */	bl __cvt_fp2unsigned
/* 8037A770 003776B0  C0 18 01 A8 */	lfs f0, 0x1a8(r24)
/* 8037A774 003776B4  7C 7C 1B 78 */	mr r28, r3
/* 8037A778 003776B8  EC 20 F0 28 */	fsubs f1, f0, f30
/* 8037A77C 003776BC  4B D4 73 D1 */	bl __cvt_fp2unsigned
/* 8037A780 003776C0  FC 20 F8 90 */	fmr f1, f31
/* 8037A784 003776C4  7C 7B 1B 78 */	mr r27, r3
/* 8037A788 003776C8  4B D4 73 C5 */	bl __cvt_fp2unsigned
/* 8037A78C 003776CC  FC 20 F0 90 */	fmr f1, f30
/* 8037A790 003776D0  7C 7A 1B 78 */	mr r26, r3
/* 8037A794 003776D4  4B D4 73 B9 */	bl __cvt_fp2unsigned
/* 8037A798 003776D8  7F 44 D3 78 */	mr r4, r26
/* 8037A79C 003776DC  7F 65 DB 78 */	mr r5, r27
/* 8037A7A0 003776E0  7F 86 E3 78 */	mr r6, r28
/* 8037A7A4 003776E4  4B D6 F0 35 */	bl GXSetScissor
/* 8037A7A8 003776E8  3B 80 00 00 */	li r28, 0
/* 8037A7AC 003776EC  3B A0 00 00 */	li r29, 0
/* 8037A7B0 003776F0  48 00 02 B8 */	b .L_8037AA68
.L_8037A7B4:
/* 8037A7B4 003776F4  3B 60 00 00 */	li r27, 0
/* 8037A7B8 003776F8  3B C0 00 00 */	li r30, 0
.L_8037A7BC:
/* 8037A7BC 003776FC  80 18 00 88 */	lwz r0, 0x88(r24)
/* 8037A7C0 00377700  80 78 02 3C */	lwz r3, 0x23c(r24)
/* 8037A7C4 00377704  7C 9D 00 2E */	lwzx r4, r29, r0
/* 8037A7C8 00377708  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8037A7CC 0037770C  7C 84 F0 2E */	lwzx r4, r4, r30
/* 8037A7D0 00377710  80 04 00 00 */	lwz r0, 0(r4)
/* 8037A7D4 00377714  7C 03 00 00 */	cmpw r3, r0
/* 8037A7D8 00377718  40 82 02 78 */	bne .L_8037AA50
/* 8037A7DC 0037771C  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8037A7E0 00377720  88 03 00 B0 */	lbz r0, 0xb0(r3)
/* 8037A7E4 00377724  28 00 00 00 */	cmplwi r0, 0
/* 8037A7E8 00377728  41 82 02 68 */	beq .L_8037AA50
/* 8037A7EC 0037772C  88 78 02 14 */	lbz r3, 0x214(r24)
/* 8037A7F0 00377730  3C 00 43 30 */	lis r0, 0x4330
/* 8037A7F4 00377734  82 E4 00 04 */	lwz r23, 4(r4)
/* 8037A7F8 00377738  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8037A7FC 0037773C  7E E3 BB 78 */	mr r3, r23
/* 8037A800 00377740  C8 42 08 30 */	lfd f2, lbl_8051EB90@sda21(r2)
/* 8037A804 00377744  90 01 00 88 */	stw r0, 0x88(r1)
/* 8037A808 00377748  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A80C 0037774C  C8 21 00 88 */	lfd f1, 0x88(r1)
/* 8037A810 00377750  C0 0D 85 B0 */	lfs f0, mCategoryAlphaRate__Q28Morimura10TZukanBase@sda21(r13)
/* 8037A814 00377754  EC 21 10 28 */	fsubs f1, f1, f2
/* 8037A818 00377758  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A81C 0037775C  8B 57 00 B2 */	lbz r26, 0xb2(r23)
/* 8037A820 00377760  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037A824 00377764  FC 00 00 1E */	fctiwz f0, f0
/* 8037A828 00377768  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 8037A82C 0037776C  80 81 00 94 */	lwz r4, 0x94(r1)
/* 8037A830 00377770  7D 89 03 A6 */	mtctr r12
/* 8037A834 00377774  4E 80 04 21 */	bctrl 
/* 8037A838 00377778  7E E4 BB 78 */	mr r4, r23
/* 8037A83C 0037777C  38 61 00 40 */	addi r3, r1, 0x40
/* 8037A840 00377780  38 A0 00 00 */	li r5, 0
/* 8037A844 00377784  4B CB E7 55 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A848 00377788  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 8037A84C 0037778C  7E E4 BB 78 */	mr r4, r23
/* 8037A850 00377790  C0 02 07 E8 */	lfs f0, lbl_8051EB48@sda21(r2)
/* 8037A854 00377794  38 61 00 4C */	addi r3, r1, 0x4c
/* 8037A858 00377798  38 A0 00 00 */	li r5, 0
/* 8037A85C 0037779C  EF E0 08 2A */	fadds f31, f0, f1
/* 8037A860 003777A0  4B CB E7 39 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A864 003777A4  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 8037A868 003777A8  FC 40 F8 90 */	fmr f2, f31
/* 8037A86C 003777AC  C0 02 08 7C */	lfs f0, lbl_8051EBDC@sda21(r2)
/* 8037A870 003777B0  7E E3 BB 78 */	mr r3, r23
/* 8037A874 003777B4  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A878 003777B8  38 80 00 00 */	li r4, 0
/* 8037A87C 003777BC  EC 20 08 2A */	fadds f1, f0, f1
/* 8037A880 003777C0  C0 B7 00 28 */	lfs f5, 0x28(r23)
/* 8037A884 003777C4  38 A0 00 00 */	li r5, 0
/* 8037A888 003777C8  C0 77 00 20 */	lfs f3, 0x20(r23)
/* 8037A88C 003777CC  38 C0 00 00 */	li r6, 0
/* 8037A890 003777D0  C0 97 00 2C */	lfs f4, 0x2c(r23)
/* 8037A894 003777D4  C0 17 00 24 */	lfs f0, 0x24(r23)
/* 8037A898 003777D8  EC 65 18 28 */	fsubs f3, f5, f3
/* 8037A89C 003777DC  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8037A8A0 003777E0  EC 84 00 28 */	fsubs f4, f4, f0
/* 8037A8A4 003777E4  7D 89 03 A6 */	mtctr r12
/* 8037A8A8 003777E8  4E 80 04 21 */	bctrl 
/* 8037A8AC 003777EC  7E E3 BB 78 */	mr r3, r23
/* 8037A8B0 003777F0  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A8B4 003777F4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A8B8 003777F8  7D 89 03 A6 */	mtctr r12
/* 8037A8BC 003777FC  4E 80 04 21 */	bctrl 
/* 8037A8C0 00377800  7E E3 BB 78 */	mr r3, r23
/* 8037A8C4 00377804  7F 44 D3 78 */	mr r4, r26
/* 8037A8C8 00377808  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A8CC 0037780C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A8D0 00377810  7D 89 03 A6 */	mtctr r12
/* 8037A8D4 00377814  4E 80 04 21 */	bctrl 
/* 8037A8D8 00377818  80 18 00 88 */	lwz r0, 0x88(r24)
/* 8037A8DC 0037781C  88 98 02 14 */	lbz r4, 0x214(r24)
/* 8037A8E0 00377820  7C 7D 00 2E */	lwzx r3, r29, r0
/* 8037A8E4 00377824  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037A8E8 00377828  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037A8EC 0037782C  82 E3 00 10 */	lwz r23, 0x10(r3)
/* 8037A8F0 00377830  7E E3 BB 78 */	mr r3, r23
/* 8037A8F4 00377834  8B 57 00 B2 */	lbz r26, 0xb2(r23)
/* 8037A8F8 00377838  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A8FC 0037783C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A900 00377840  7D 89 03 A6 */	mtctr r12
/* 8037A904 00377844  4E 80 04 21 */	bctrl 
/* 8037A908 00377848  7E E4 BB 78 */	mr r4, r23
/* 8037A90C 0037784C  38 61 00 28 */	addi r3, r1, 0x28
/* 8037A910 00377850  38 A0 00 00 */	li r5, 0
/* 8037A914 00377854  4B CB E6 85 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A918 00377858  7E E4 BB 78 */	mr r4, r23
/* 8037A91C 0037785C  38 61 00 34 */	addi r3, r1, 0x34
/* 8037A920 00377860  38 A0 00 00 */	li r5, 0
/* 8037A924 00377864  4B CB E6 75 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A928 00377868  7E E3 BB 78 */	mr r3, r23
/* 8037A92C 0037786C  C0 77 00 28 */	lfs f3, 0x28(r23)
/* 8037A930 00377870  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A934 00377874  38 80 00 00 */	li r4, 0
/* 8037A938 00377878  C0 57 00 20 */	lfs f2, 0x20(r23)
/* 8037A93C 0037787C  38 A0 00 00 */	li r5, 0
/* 8037A940 00377880  C0 37 00 2C */	lfs f1, 0x2c(r23)
/* 8037A944 00377884  38 C0 00 00 */	li r6, 0
/* 8037A948 00377888  C0 17 00 24 */	lfs f0, 0x24(r23)
/* 8037A94C 0037788C  EC 63 10 28 */	fsubs f3, f3, f2
/* 8037A950 00377890  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8037A954 00377894  EC 81 00 28 */	fsubs f4, f1, f0
/* 8037A958 00377898  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8037A95C 0037789C  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8037A960 003778A0  7D 89 03 A6 */	mtctr r12
/* 8037A964 003778A4  4E 80 04 21 */	bctrl 
/* 8037A968 003778A8  7E E3 BB 78 */	mr r3, r23
/* 8037A96C 003778AC  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A970 003778B0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037A974 003778B4  7D 89 03 A6 */	mtctr r12
/* 8037A978 003778B8  4E 80 04 21 */	bctrl 
/* 8037A97C 003778BC  7E E3 BB 78 */	mr r3, r23
/* 8037A980 003778C0  7F 44 D3 78 */	mr r4, r26
/* 8037A984 003778C4  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A988 003778C8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A98C 003778CC  7D 89 03 A6 */	mtctr r12
/* 8037A990 003778D0  4E 80 04 21 */	bctrl 
/* 8037A994 003778D4  80 18 00 88 */	lwz r0, 0x88(r24)
/* 8037A998 003778D8  88 98 02 14 */	lbz r4, 0x214(r24)
/* 8037A99C 003778DC  7C 7D 00 2E */	lwzx r3, r29, r0
/* 8037A9A0 003778E0  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037A9A4 003778E4  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037A9A8 003778E8  82 E3 00 0C */	lwz r23, 0xc(r3)
/* 8037A9AC 003778EC  7E E3 BB 78 */	mr r3, r23
/* 8037A9B0 003778F0  8B 57 00 B2 */	lbz r26, 0xb2(r23)
/* 8037A9B4 003778F4  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A9B8 003778F8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037A9BC 003778FC  7D 89 03 A6 */	mtctr r12
/* 8037A9C0 00377900  4E 80 04 21 */	bctrl 
/* 8037A9C4 00377904  7E E4 BB 78 */	mr r4, r23
/* 8037A9C8 00377908  38 61 00 10 */	addi r3, r1, 0x10
/* 8037A9CC 0037790C  38 A0 00 00 */	li r5, 0
/* 8037A9D0 00377910  4B CB E5 C9 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A9D4 00377914  7E E4 BB 78 */	mr r4, r23
/* 8037A9D8 00377918  38 61 00 1C */	addi r3, r1, 0x1c
/* 8037A9DC 0037791C  38 A0 00 00 */	li r5, 0
/* 8037A9E0 00377920  4B CB E5 B9 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037A9E4 00377924  7E E3 BB 78 */	mr r3, r23
/* 8037A9E8 00377928  C0 77 00 28 */	lfs f3, 0x28(r23)
/* 8037A9EC 0037792C  81 97 00 00 */	lwz r12, 0(r23)
/* 8037A9F0 00377930  38 80 00 00 */	li r4, 0
/* 8037A9F4 00377934  C0 57 00 20 */	lfs f2, 0x20(r23)
/* 8037A9F8 00377938  38 A0 00 00 */	li r5, 0
/* 8037A9FC 0037793C  C0 37 00 2C */	lfs f1, 0x2c(r23)
/* 8037AA00 00377940  38 C0 00 00 */	li r6, 0
/* 8037AA04 00377944  C0 17 00 24 */	lfs f0, 0x24(r23)
/* 8037AA08 00377948  EC 63 10 28 */	fsubs f3, f3, f2
/* 8037AA0C 0037794C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8037AA10 00377950  EC 81 00 28 */	fsubs f4, f1, f0
/* 8037AA14 00377954  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8037AA18 00377958  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8037AA1C 0037795C  7D 89 03 A6 */	mtctr r12
/* 8037AA20 00377960  4E 80 04 21 */	bctrl 
/* 8037AA24 00377964  7E E3 BB 78 */	mr r3, r23
/* 8037AA28 00377968  81 97 00 00 */	lwz r12, 0(r23)
/* 8037AA2C 0037796C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037AA30 00377970  7D 89 03 A6 */	mtctr r12
/* 8037AA34 00377974  4E 80 04 21 */	bctrl 
/* 8037AA38 00377978  7E E3 BB 78 */	mr r3, r23
/* 8037AA3C 0037797C  7F 44 D3 78 */	mr r4, r26
/* 8037AA40 00377980  81 97 00 00 */	lwz r12, 0(r23)
/* 8037AA44 00377984  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037AA48 00377988  7D 89 03 A6 */	mtctr r12
/* 8037AA4C 0037798C  4E 80 04 21 */	bctrl 
.L_8037AA50:
/* 8037AA50 00377990  3B 7B 00 01 */	addi r27, r27, 1
/* 8037AA54 00377994  3B DE 00 04 */	addi r30, r30, 4
/* 8037AA58 00377998  2C 1B 00 03 */	cmpwi r27, 3
/* 8037AA5C 0037799C  41 80 FD 60 */	blt .L_8037A7BC
/* 8037AA60 003779A0  3B BD 00 04 */	addi r29, r29, 4
/* 8037AA64 003779A4  3B 9C 00 01 */	addi r28, r28, 1
.L_8037AA68:
/* 8037AA68 003779A8  A8 18 00 8E */	lha r0, 0x8e(r24)
/* 8037AA6C 003779AC  7C 1C 00 00 */	cmpw r28, r0
/* 8037AA70 003779B0  41 80 FD 44 */	blt .L_8037A7B4
/* 8037AA74 003779B4  38 79 01 90 */	addi r3, r25, 0x190
/* 8037AA78 003779B8  81 99 01 90 */	lwz r12, 0x190(r25)
/* 8037AA7C 003779BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037AA80 003779C0  7D 89 03 A6 */	mtctr r12
/* 8037AA84 003779C4  4E 80 04 21 */	bctrl 
/* 8037AA88 003779C8  80 18 03 AC */	lwz r0, 0x3ac(r24)
/* 8037AA8C 003779CC  2C 00 00 03 */	cmpwi r0, 3
/* 8037AA90 003779D0  40 82 01 E4 */	bne .L_8037AC74
/* 8037AA94 003779D4  C3 D8 01 A4 */	lfs f30, 0x1a4(r24)
/* 8037AA98 003779D8  C0 18 01 AC */	lfs f0, 0x1ac(r24)
/* 8037AA9C 003779DC  C3 F8 01 A0 */	lfs f31, 0x1a0(r24)
/* 8037AAA0 003779E0  EC 20 F0 28 */	fsubs f1, f0, f30
/* 8037AAA4 003779E4  4B D4 70 A9 */	bl __cvt_fp2unsigned
/* 8037AAA8 003779E8  C0 18 01 A8 */	lfs f0, 0x1a8(r24)
/* 8037AAAC 003779EC  7C 7C 1B 78 */	mr r28, r3
/* 8037AAB0 003779F0  EC 20 F8 28 */	fsubs f1, f0, f31
/* 8037AAB4 003779F4  4B D4 70 99 */	bl __cvt_fp2unsigned
/* 8037AAB8 003779F8  FC 20 F0 90 */	fmr f1, f30
/* 8037AABC 003779FC  7C 7B 1B 78 */	mr r27, r3
/* 8037AAC0 00377A00  4B D4 70 8D */	bl __cvt_fp2unsigned
/* 8037AAC4 00377A04  FC 20 F8 90 */	fmr f1, f31
/* 8037AAC8 00377A08  7C 7A 1B 78 */	mr r26, r3
/* 8037AACC 00377A0C  4B D4 70 81 */	bl __cvt_fp2unsigned
/* 8037AAD0 00377A10  7F 44 D3 78 */	mr r4, r26
/* 8037AAD4 00377A14  7F 65 DB 78 */	mr r5, r27
/* 8037AAD8 00377A18  7F 86 E3 78 */	mr r6, r28
/* 8037AADC 00377A1C  4B D6 EC FD */	bl GXSetScissor
/* 8037AAE0 00377A20  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 8037AAE4 00377A24  80 78 00 F0 */	lwz r3, 0xf0(r24)
/* 8037AAE8 00377A28  38 04 30 30 */	addi r0, r4, 0x315F3030@l
/* 8037AAEC 00377A2C  3C 80 00 39 */	lis r4, 0x00393030@ha
/* 8037AAF0 00377A30  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8037AAF4 00377A34  38 04 30 30 */	addi r0, r4, 0x00393030@l
/* 8037AAF8 00377A38  90 03 00 18 */	stw r0, 0x18(r3)
/* 8037AAFC 00377A3C  80 98 02 4C */	lwz r4, 0x24c(r24)
/* 8037AB00 00377A40  80 78 00 F0 */	lwz r3, 0xf0(r24)
/* 8037AB04 00377A44  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8037AB08 00377A48  81 83 00 00 */	lwz r12, 0(r3)
/* 8037AB0C 00377A4C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8037AB10 00377A50  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037AB14 00377A54  88 81 00 0F */	lbz r4, 0xf(r1)
/* 8037AB18 00377A58  7D 89 03 A6 */	mtctr r12
/* 8037AB1C 00377A5C  4E 80 04 21 */	bctrl 
/* 8037AB20 00377A60  38 00 00 00 */	li r0, 0
/* 8037AB24 00377A64  38 81 00 08 */	addi r4, r1, 8
/* 8037AB28 00377A68  98 01 00 0F */	stb r0, 0xf(r1)
/* 8037AB2C 00377A6C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8037AB30 00377A70  90 01 00 08 */	stw r0, 8(r1)
/* 8037AB34 00377A74  80 78 00 F0 */	lwz r3, 0xf0(r24)
/* 8037AB38 00377A78  81 83 00 00 */	lwz r12, 0(r3)
/* 8037AB3C 00377A7C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8037AB40 00377A80  7D 89 03 A6 */	mtctr r12
/* 8037AB44 00377A84  4E 80 04 21 */	bctrl 
/* 8037AB48 00377A88  80 78 00 C8 */	lwz r3, 0xc8(r24)
/* 8037AB4C 00377A8C  7F 24 CB 78 */	mr r4, r25
/* 8037AB50 00377A90  7F E5 FB 78 */	mr r5, r31
/* 8037AB54 00377A94  81 83 00 00 */	lwz r12, 0(r3)
/* 8037AB58 00377A98  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8037AB5C 00377A9C  7D 89 03 A6 */	mtctr r12
/* 8037AB60 00377AA0  4E 80 04 21 */	bctrl 
/* 8037AB64 00377AA4  3B 60 00 00 */	li r27, 0
/* 8037AB68 00377AA8  3B C0 00 00 */	li r30, 0
/* 8037AB6C 00377AAC  3B 8D 99 00 */	addi r28, r13, mNewOffset__Q28Morimura10TZukanBase@sda21
/* 8037AB70 00377AB0  48 00 00 C8 */	b .L_8037AC38
.L_8037AB74:
/* 8037AB74 00377AB4  80 78 00 88 */	lwz r3, 0x88(r24)
/* 8037AB78 00377AB8  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037AB7C 00377ABC  80 63 00 04 */	lwz r3, 4(r3)
/* 8037AB80 00377AC0  88 03 00 B0 */	lbz r0, 0xb0(r3)
/* 8037AB84 00377AC4  28 00 00 00 */	cmplwi r0, 0
/* 8037AB88 00377AC8  41 82 00 A8 */	beq .L_8037AC30
/* 8037AB8C 00377ACC  3B 40 00 00 */	li r26, 0
/* 8037AB90 00377AD0  3B A0 00 00 */	li r29, 0
.L_8037AB94:
/* 8037AB94 00377AD4  80 18 00 88 */	lwz r0, 0x88(r24)
/* 8037AB98 00377AD8  80 98 02 3C */	lwz r4, 0x23c(r24)
/* 8037AB9C 00377ADC  7C 7E 00 2E */	lwzx r3, r30, r0
/* 8037ABA0 00377AE0  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8037ABA4 00377AE4  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8037ABA8 00377AE8  80 03 00 00 */	lwz r0, 0(r3)
/* 8037ABAC 00377AEC  7C 04 00 00 */	cmpw r4, r0
/* 8037ABB0 00377AF0  40 82 00 70 */	bne .L_8037AC20
/* 8037ABB4 00377AF4  40 82 00 6C */	bne .L_8037AC20
/* 8037ABB8 00377AF8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8037ABBC 00377AFC  28 00 00 00 */	cmplwi r0, 0
/* 8037ABC0 00377B00  41 82 00 60 */	beq .L_8037AC20
/* 8037ABC4 00377B04  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8037ABC8 00377B08  7F 24 CB 78 */	mr r4, r25
/* 8037ABCC 00377B0C  C0 2D 99 00 */	lfs f1, mNewOffset__Q28Morimura10TZukanBase@sda21(r13)
/* 8037ABD0 00377B10  7F E5 FB 78 */	mr r5, r31
/* 8037ABD4 00377B14  C0 03 00 8C */	lfs f0, 0x8c(r3)
/* 8037ABD8 00377B18  80 78 00 F0 */	lwz r3, 0xf0(r24)
/* 8037ABDC 00377B1C  EC 01 00 2A */	fadds f0, f1, f0
/* 8037ABE0 00377B20  D0 03 00 8C */	stfs f0, 0x8c(r3)
/* 8037ABE4 00377B24  80 18 00 88 */	lwz r0, 0x88(r24)
/* 8037ABE8 00377B28  C0 3C 00 04 */	lfs f1, 4(r28)
/* 8037ABEC 00377B2C  7C DE 00 2E */	lwzx r6, r30, r0
/* 8037ABF0 00377B30  80 78 00 F0 */	lwz r3, 0xf0(r24)
/* 8037ABF4 00377B34  80 C6 00 20 */	lwz r6, 0x20(r6)
/* 8037ABF8 00377B38  7C C6 E8 2E */	lwzx r6, r6, r29
/* 8037ABFC 00377B3C  80 C6 00 10 */	lwz r6, 0x10(r6)
/* 8037AC00 00377B40  C0 06 00 9C */	lfs f0, 0x9c(r6)
/* 8037AC04 00377B44  EC 01 00 2A */	fadds f0, f1, f0
/* 8037AC08 00377B48  D0 03 00 9C */	stfs f0, 0x9c(r3)
/* 8037AC0C 00377B4C  80 78 00 CC */	lwz r3, 0xcc(r24)
/* 8037AC10 00377B50  81 83 00 00 */	lwz r12, 0(r3)
/* 8037AC14 00377B54  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037AC18 00377B58  7D 89 03 A6 */	mtctr r12
/* 8037AC1C 00377B5C  4E 80 04 21 */	bctrl 
.L_8037AC20:
/* 8037AC20 00377B60  3B 5A 00 01 */	addi r26, r26, 1
/* 8037AC24 00377B64  3B BD 00 04 */	addi r29, r29, 4
/* 8037AC28 00377B68  2C 1A 00 03 */	cmpwi r26, 3
/* 8037AC2C 00377B6C  41 80 FF 68 */	blt .L_8037AB94
.L_8037AC30:
/* 8037AC30 00377B70  3B DE 00 04 */	addi r30, r30, 4
/* 8037AC34 00377B74  3B 7B 00 01 */	addi r27, r27, 1
.L_8037AC38:
/* 8037AC38 00377B78  A8 18 00 8E */	lha r0, 0x8e(r24)
/* 8037AC3C 00377B7C  7C 1B 00 00 */	cmpw r27, r0
/* 8037AC40 00377B80  41 80 FF 34 */	blt .L_8037AB74
/* 8037AC44 00377B84  3C 60 30 5F */	lis r3, 0x305F3030@ha
/* 8037AC48 00377B88  80 B8 00 F0 */	lwz r5, 0xf0(r24)
/* 8037AC4C 00377B8C  38 03 30 30 */	addi r0, r3, 0x305F3030@l
/* 8037AC50 00377B90  3C 60 00 39 */	lis r3, 0x00393030@ha
/* 8037AC54 00377B94  90 05 00 1C */	stw r0, 0x1c(r5)
/* 8037AC58 00377B98  38 03 30 30 */	addi r0, r3, 0x00393030@l
/* 8037AC5C 00377B9C  38 60 00 00 */	li r3, 0
/* 8037AC60 00377BA0  38 80 00 00 */	li r4, 0
/* 8037AC64 00377BA4  90 05 00 18 */	stw r0, 0x18(r5)
/* 8037AC68 00377BA8  38 A0 02 80 */	li r5, 0x280
/* 8037AC6C 00377BAC  38 C0 01 E0 */	li r6, 0x1e0
/* 8037AC70 00377BB0  4B D6 EB 69 */	bl GXSetScissor
.L_8037AC74:
/* 8037AC74 00377BB4  80 78 00 DC */	lwz r3, 0xdc(r24)
/* 8037AC78 00377BB8  7F 24 CB 78 */	mr r4, r25
/* 8037AC7C 00377BBC  7F E5 FB 78 */	mr r5, r31
/* 8037AC80 00377BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037AC84 00377BC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8037AC88 00377BC8  7D 89 03 A6 */	mtctr r12
/* 8037AC8C 00377BCC  4E 80 04 21 */	bctrl 
/* 8037AC90 00377BD0  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 8037AC94 00377BD4  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 8037AC98 00377BD8  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 8037AC9C 00377BDC  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 8037ACA0 00377BE0  BA E1 00 9C */	lmw r23, 0x9c(r1)
/* 8037ACA4 00377BE4  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8037ACA8 00377BE8  7C 08 03 A6 */	mtlr r0
/* 8037ACAC 00377BEC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8037ACB0 00377BF0  4E 80 00 20 */	blr 
.endfn doDemoDraw__Q28Morimura10TItemZukanFR8Graphics

.if version == 0
.fn setDetail__Q28Morimura10TItemZukanFv, global
/* 8037ACB4 00377BF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037ACB8 00377BF8  7C 08 02 A6 */	mflr r0
/* 8037ACBC 00377BFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037ACC0 00377C00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037ACC4 00377C04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037ACC8 00377C08  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8037ACCC 00377C0C  7C 7D 1B 78 */	mr r29, r3
/* 8037ACD0 00377C10  3C 60 80 49 */	lis r3, lbl_80492520@ha
/* 8037ACD4 00377C14  80 1D 00 94 */	lwz r0, 0x94(r29)
/* 8037ACD8 00377C18  3B E3 25 20 */	addi r31, r3, lbl_80492520@l
/* 8037ACDC 00377C1C  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 8037ACE0 00377C20  54 00 10 3A */	slwi r0, r0, 2
/* 8037ACE4 00377C24  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037ACE8 00377C28  48 02 78 D5 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037ACEC 00377C2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037ACF0 00377C30  40 80 00 28 */	bge .L_8037AD18
/* 8037ACF4 00377C34  38 00 00 00 */	li r0, 0
/* 8037ACF8 00377C38  38 80 00 01 */	li r4, 1
/* 8037ACFC 00377C3C  98 1D 01 7C */	stb r0, 0x17c(r29)
/* 8037AD00 00377C40  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037AD04 00377C44  4B F9 0A E5 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037AD08 00377C48  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037AD0C 00377C4C  38 80 00 01 */	li r4, 1
/* 8037AD10 00377C50  4B F9 0A D9 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037AD14 00377C54  48 00 00 F4 */	b .L_8037AE08
.L_8037AD18:
/* 8037AD18 00377C58  7F A3 EB 78 */	mr r3, r29
/* 8037AD1C 00377C5C  7F C4 F3 78 */	mr r4, r30
/* 8037AD20 00377C60  48 00 03 29 */	bl getPrice__Q28Morimura10TItemZukanFi
/* 8037AD24 00377C64  90 7D 01 88 */	stw r3, 0x188(r29)
/* 8037AD28 00377C68  80 FD 01 88 */	lwz r7, 0x188(r29)
/* 8037AD2C 00377C6C  28 07 27 10 */	cmplwi r7, 0x2710
/* 8037AD30 00377C70  41 80 00 1C */	blt .L_8037AD4C
/* 8037AD34 00377C74  7F C6 F3 78 */	mr r6, r30
/* 8037AD38 00377C78  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037AD3C 00377C7C  38 BF 06 2C */	addi r5, r31, 0x62c
/* 8037AD40 00377C80  38 80 12 76 */	li r4, 0x127d
/* 8037AD44 00377C84  4C C6 31 82 */	crclr 6
/* 8037AD48 00377C88  4B CA F8 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037AD4C:
/* 8037AD4C 00377C8C  7F A3 EB 78 */	mr r3, r29
/* 8037AD50 00377C90  7F C4 F3 78 */	mr r4, r30
/* 8037AD54 00377C94  48 00 03 B5 */	bl getWeight__Q28Morimura10TItemZukanFi
/* 8037AD58 00377C98  90 7D 01 8C */	stw r3, 0x18c(r29)
/* 8037AD5C 00377C9C  80 FD 01 8C */	lwz r7, 0x18c(r29)
/* 8037AD60 00377CA0  28 07 27 10 */	cmplwi r7, 0x2710
/* 8037AD64 00377CA4  41 80 00 1C */	blt .L_8037AD80
/* 8037AD68 00377CA8  7F C6 F3 78 */	mr r6, r30
/* 8037AD6C 00377CAC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037AD70 00377CB0  38 BF 0D 78 */	addi r5, r31, 0xd78
/* 8037AD74 00377CB4  38 80 12 78 */	li r4, 0x127f
/* 8037AD78 00377CB8  4C C6 31 82 */	crclr 6
/* 8037AD7C 00377CBC  4B CA F8 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037AD80:
/* 8037AD80 00377CC0  7F A3 EB 78 */	mr r3, r29
/* 8037AD84 00377CC4  7F C4 F3 78 */	mr r4, r30
/* 8037AD88 00377CC8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037AD8C 00377CCC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8037AD90 00377CD0  7D 89 03 A6 */	mtctr r12
/* 8037AD94 00377CD4  4E 80 04 21 */	bctrl 
/* 8037AD98 00377CD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037AD9C 00377CDC  41 82 00 28 */	beq .L_8037ADC4
/* 8037ADA0 00377CE0  38 00 00 01 */	li r0, 1
/* 8037ADA4 00377CE4  38 80 00 00 */	li r4, 0
/* 8037ADA8 00377CE8  98 1D 01 7C */	stb r0, 0x17c(r29)
/* 8037ADAC 00377CEC  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037ADB0 00377CF0  4B F9 0A 39 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037ADB4 00377CF4  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037ADB8 00377CF8  38 80 00 00 */	li r4, 0
/* 8037ADBC 00377CFC  4B F9 0A 2D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037ADC0 00377D00  48 00 00 24 */	b .L_8037ADE4
.L_8037ADC4:
/* 8037ADC4 00377D04  38 00 00 00 */	li r0, 0
/* 8037ADC8 00377D08  38 80 00 01 */	li r4, 1
/* 8037ADCC 00377D0C  98 1D 01 7C */	stb r0, 0x17c(r29)
/* 8037ADD0 00377D10  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037ADD4 00377D14  4B F9 0A 15 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037ADD8 00377D18  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037ADDC 00377D1C  38 80 00 01 */	li r4, 1
/* 8037ADE0 00377D20  4B F9 0A 09 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_8037ADE4:
/* 8037ADE4 00377D24  80 7D 00 E0 */	lwz r3, 0xe0(r29)
/* 8037ADE8 00377D28  38 80 00 00 */	li r4, 0
/* 8037ADEC 00377D2C  48 02 6D D1 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8037ADF0 00377D30  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037ADF4 00377D34  38 80 00 00 */	li r4, 0
/* 8037ADF8 00377D38  48 02 6D C5 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8037ADFC 00377D3C  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037AE00 00377D40  38 80 00 00 */	li r4, 0
/* 8037AE04 00377D44  48 02 6D B9 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
.L_8037AE08:
/* 8037AE08 00377D48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037AE0C 00377D4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037AE10 00377D50  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037AE14 00377D54  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8037AE18 00377D58  7C 08 03 A6 */	mtlr r0
/* 8037AE1C 00377D5C  38 21 00 20 */	addi r1, r1, 0x20
/* 8037AE20 00377D60  4E 80 00 20 */	blr 
.endfn setDetail__Q28Morimura10TItemZukanFv
.else
.fn setDetail__Q28Morimura10TItemZukanFv, global
/* 8037ACB4 00377BF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037ACB8 00377BF8  7C 08 02 A6 */	mflr r0
/* 8037ACBC 00377BFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037ACC0 00377C00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037ACC4 00377C04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037ACC8 00377C08  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8037ACCC 00377C0C  7C 7D 1B 78 */	mr r29, r3
/* 8037ACD0 00377C10  3C 60 80 49 */	lis r3, lbl_80492520@ha
/* 8037ACD4 00377C14  80 1D 00 94 */	lwz r0, 0x94(r29)
/* 8037ACD8 00377C18  3B E3 25 20 */	addi r31, r3, lbl_80492520@l
/* 8037ACDC 00377C1C  80 7D 00 88 */	lwz r3, 0x88(r29)
/* 8037ACE0 00377C20  54 00 10 3A */	slwi r0, r0, 2
/* 8037ACE4 00377C24  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037ACE8 00377C28  48 02 78 D5 */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037ACEC 00377C2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037ACF0 00377C30  40 80 00 28 */	bge .L_8037AD18
/* 8037ACF4 00377C34  38 00 00 00 */	li r0, 0
/* 8037ACF8 00377C38  38 80 00 01 */	li r4, 1
/* 8037ACFC 00377C3C  98 1D 01 7C */	stb r0, 0x17c(r29)
/* 8037AD00 00377C40  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037AD04 00377C44  4B F9 0A E5 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037AD08 00377C48  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037AD0C 00377C4C  38 80 00 01 */	li r4, 1
/* 8037AD10 00377C50  4B F9 0A D9 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037AD14 00377C54  48 00 00 F4 */	b .L_8037AE08
.L_8037AD18:
/* 8037AD18 00377C58  7F A3 EB 78 */	mr r3, r29
/* 8037AD1C 00377C5C  7F C4 F3 78 */	mr r4, r30
/* 8037AD20 00377C60  48 00 03 29 */	bl getPrice__Q28Morimura10TItemZukanFi
/* 8037AD24 00377C64  90 7D 01 88 */	stw r3, 0x188(r29)
/* 8037AD28 00377C68  80 FD 01 88 */	lwz r7, 0x188(r29)
/* 8037AD2C 00377C6C  28 07 27 10 */	cmplwi r7, 0x2710
/* 8037AD30 00377C70  41 80 00 1C */	blt .L_8037AD4C
/* 8037AD34 00377C74  7F C6 F3 78 */	mr r6, r30
/* 8037AD38 00377C78  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037AD3C 00377C7C  38 BF 06 2C */	addi r5, r31, 0x62c
/* 8037AD40 00377C80  38 80 12 76 */	li r4, 0x1276
/* 8037AD44 00377C84  4C C6 31 82 */	crclr 6
/* 8037AD48 00377C88  4B CA F8 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037AD4C:
/* 8037AD4C 00377C8C  7F A3 EB 78 */	mr r3, r29
/* 8037AD50 00377C90  7F C4 F3 78 */	mr r4, r30
/* 8037AD54 00377C94  48 00 03 B5 */	bl getWeight__Q28Morimura10TItemZukanFi
/* 8037AD58 00377C98  90 7D 01 8C */	stw r3, 0x18c(r29)
/* 8037AD5C 00377C9C  80 FD 01 8C */	lwz r7, 0x18c(r29)
/* 8037AD60 00377CA0  28 07 27 10 */	cmplwi r7, 0x2710
/* 8037AD64 00377CA4  41 80 00 1C */	blt .L_8037AD80
/* 8037AD68 00377CA8  7F C6 F3 78 */	mr r6, r30
/* 8037AD6C 00377CAC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037AD70 00377CB0  38 BF 0D 78 */	addi r5, r31, 0xd78
/* 8037AD74 00377CB4  38 80 12 78 */	li r4, 0x1278
/* 8037AD78 00377CB8  4C C6 31 82 */	crclr 6
/* 8037AD7C 00377CBC  4B CA F8 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037AD80:
/* 8037AD80 00377CC0  7F A3 EB 78 */	mr r3, r29
/* 8037AD84 00377CC4  7F C4 F3 78 */	mr r4, r30
/* 8037AD88 00377CC8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8037AD8C 00377CCC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8037AD90 00377CD0  7D 89 03 A6 */	mtctr r12
/* 8037AD94 00377CD4  4E 80 04 21 */	bctrl 
/* 8037AD98 00377CD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037AD9C 00377CDC  41 82 00 28 */	beq .L_8037ADC4
/* 8037ADA0 00377CE0  38 00 00 01 */	li r0, 1
/* 8037ADA4 00377CE4  38 80 00 00 */	li r4, 0
/* 8037ADA8 00377CE8  98 1D 01 7C */	stb r0, 0x17c(r29)
/* 8037ADAC 00377CEC  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037ADB0 00377CF0  4B F9 0A 39 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037ADB4 00377CF4  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037ADB8 00377CF8  38 80 00 00 */	li r4, 0
/* 8037ADBC 00377CFC  4B F9 0A 2D */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037ADC0 00377D00  48 00 00 24 */	b .L_8037ADE4
.L_8037ADC4:
/* 8037ADC4 00377D04  38 00 00 00 */	li r0, 0
/* 8037ADC8 00377D08  38 80 00 01 */	li r4, 1
/* 8037ADCC 00377D0C  98 1D 01 7C */	stb r0, 0x17c(r29)
/* 8037ADD0 00377D10  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037ADD4 00377D14  4B F9 0A 15 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 8037ADD8 00377D18  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037ADDC 00377D1C  38 80 00 01 */	li r4, 1
/* 8037ADE0 00377D20  4B F9 0A 09 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
.L_8037ADE4:
/* 8037ADE4 00377D24  80 7D 00 E0 */	lwz r3, 0xe0(r29)
/* 8037ADE8 00377D28  38 80 00 00 */	li r4, 0
/* 8037ADEC 00377D2C  48 02 6D D1 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8037ADF0 00377D30  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 8037ADF4 00377D34  38 80 00 00 */	li r4, 0
/* 8037ADF8 00377D38  48 02 6D C5 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
/* 8037ADFC 00377D3C  80 7D 02 54 */	lwz r3, 0x254(r29)
/* 8037AE00 00377D40  38 80 00 00 */	li r4, 0
/* 8037AE04 00377D44  48 02 6D B9 */	bl forceScaleUp__Q28Morimura15TScaleUpCounterFb
.L_8037AE08:
/* 8037AE08 00377D48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037AE0C 00377D4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037AE10 00377D50  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037AE14 00377D54  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8037AE18 00377D58  7C 08 03 A6 */	mtlr r0
/* 8037AE1C 00377D5C  38 21 00 20 */	addi r1, r1, 0x20
/* 8037AE20 00377D60  4E 80 00 20 */	blr 
.endfn setDetail__Q28Morimura10TItemZukanFv
.endif

.fn isComplete__Q28Morimura10TItemZukanFv, global
/* 8037AE24 00377D64  88 03 02 41 */	lbz r0, 0x241(r3)
/* 8037AE28 00377D68  28 00 00 00 */	cmplwi r0, 0
/* 8037AE2C 00377D6C  41 82 00 80 */	beq .L_8037AEAC
/* 8037AE30 00377D70  80 03 00 94 */	lwz r0, 0x94(r3)
/* 8037AE34 00377D74  80 A3 00 88 */	lwz r5, 0x88(r3)
/* 8037AE38 00377D78  54 04 10 3A */	slwi r4, r0, 2
/* 8037AE3C 00377D7C  80 0D 99 C8 */	lwz r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 8037AE40 00377D80  7C 85 20 2E */	lwzx r4, r5, r4
/* 8037AE44 00377D84  54 00 10 3A */	slwi r0, r0, 2
/* 8037AE48 00377D88  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8037AE4C 00377D8C  7C 84 00 2E */	lwzx r4, r4, r0
/* 8037AE50 00377D90  80 04 00 00 */	lwz r0, 0(r4)
/* 8037AE54 00377D94  2C 00 00 00 */	cmpwi r0, 0
/* 8037AE58 00377D98  40 80 00 0C */	bge .L_8037AE64
/* 8037AE5C 00377D9C  38 60 00 00 */	li r3, 0
/* 8037AE60 00377DA0  4E 80 00 20 */	blr 
.L_8037AE64:
/* 8037AE64 00377DA4  54 00 10 3A */	slwi r0, r0, 2
/* 8037AE68 00377DA8  7C 83 02 14 */	add r4, r3, r0
/* 8037AE6C 00377DAC  80 04 02 78 */	lwz r0, 0x278(r4)
/* 8037AE70 00377DB0  2C 00 00 00 */	cmpwi r0, 0
/* 8037AE74 00377DB4  41 82 00 30 */	beq .L_8037AEA4
/* 8037AE78 00377DB8  88 03 02 44 */	lbz r0, 0x244(r3)
/* 8037AE7C 00377DBC  28 00 00 00 */	cmplwi r0, 0
/* 8037AE80 00377DC0  41 82 00 1C */	beq .L_8037AE9C
/* 8037AE84 00377DC4  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8037AE88 00377DC8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8037AE8C 00377DCC  2C 00 00 02 */	cmpwi r0, 2
/* 8037AE90 00377DD0  40 82 00 14 */	bne .L_8037AEA4
/* 8037AE94 00377DD4  38 60 00 01 */	li r3, 1
/* 8037AE98 00377DD8  4E 80 00 20 */	blr 
.L_8037AE9C:
/* 8037AE9C 00377DDC  38 60 00 01 */	li r3, 1
/* 8037AEA0 00377DE0  4E 80 00 20 */	blr 
.L_8037AEA4:
/* 8037AEA4 00377DE4  38 60 00 00 */	li r3, 0
/* 8037AEA8 00377DE8  4E 80 00 20 */	blr 
.L_8037AEAC:
/* 8037AEAC 00377DEC  38 60 00 01 */	li r3, 1
/* 8037AEB0 00377DF0  4E 80 00 20 */	blr 
.endfn isComplete__Q28Morimura10TItemZukanFv

.fn isListShow__Q28Morimura10TItemZukanFi, global
/* 8037AEB4 00377DF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037AEB8 00377DF8  7C 08 02 A6 */	mflr r0
/* 8037AEBC 00377DFC  2C 04 00 00 */	cmpwi r4, 0
/* 8037AEC0 00377E00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037AEC4 00377E04  40 80 00 0C */	bge .L_8037AED0
/* 8037AEC8 00377E08  38 60 00 00 */	li r3, 0
/* 8037AECC 00377E0C  48 00 00 58 */	b .L_8037AF24
.L_8037AED0:
/* 8037AED0 00377E10  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 8037AED4 00377E14  28 00 00 00 */	cmplwi r0, 0
/* 8037AED8 00377E18  41 82 00 0C */	beq .L_8037AEE4
/* 8037AEDC 00377E1C  38 60 00 01 */	li r3, 1
/* 8037AEE0 00377E20  48 00 00 44 */	b .L_8037AF24
.L_8037AEE4:
/* 8037AEE4 00377E24  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037AEE8 00377E28  28 00 00 00 */	cmplwi r0, 0
/* 8037AEEC 00377E2C  41 82 00 10 */	beq .L_8037AEFC
/* 8037AEF0 00377E30  80 63 01 80 */	lwz r3, 0x180(r3)
/* 8037AEF4 00377E34  7C 63 20 AE */	lbzx r3, r3, r4
/* 8037AEF8 00377E38  48 00 00 2C */	b .L_8037AF24
.L_8037AEFC:
/* 8037AEFC 00377E3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8037AF00 00377E40  28 03 00 00 */	cmplwi r3, 0
/* 8037AF04 00377E44  41 82 00 1C */	beq .L_8037AF20
/* 8037AF08 00377E48  4B E6 CD 95 */	bl isPelletZukanVisible__Q24Game8PlayDataFi
/* 8037AF0C 00377E4C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8037AF10 00377E50  7C 03 00 D0 */	neg r0, r3
/* 8037AF14 00377E54  7C 00 1B 78 */	or r0, r0, r3
/* 8037AF18 00377E58  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8037AF1C 00377E5C  48 00 00 08 */	b .L_8037AF24
.L_8037AF20:
/* 8037AF20 00377E60  38 60 00 01 */	li r3, 1
.L_8037AF24:
/* 8037AF24 00377E64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037AF28 00377E68  7C 08 03 A6 */	mtlr r0
/* 8037AF2C 00377E6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8037AF30 00377E70  4E 80 00 20 */	blr 
.endfn isListShow__Q28Morimura10TItemZukanFi

.fn setXWindow__Q28Morimura10TItemZukanFv, global
/* 8037AF34 00377E74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037AF38 00377E78  7C 08 02 A6 */	mflr r0
/* 8037AF3C 00377E7C  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037AF40 00377E80  38 80 18 36 */	li r4, 0x1836
/* 8037AF44 00377E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037AF48 00377E88  38 A0 00 00 */	li r5, 0
/* 8037AF4C 00377E8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037AF50 00377E90  7C 7F 1B 78 */	mr r31, r3
/* 8037AF54 00377E94  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8037AF58 00377E98  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8037AF5C 00377E9C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8037AF60 00377EA0  4B FB D6 D1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8037AF64 00377EA4  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037AF68 00377EA8  38 9F 02 58 */	addi r4, r31, 0x258
/* 8037AF6C 00377EAC  48 00 14 45 */	bl setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10
/* 8037AF70 00377EB0  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037AF74 00377EB4  80 9F 02 74 */	lwz r4, 0x274(r31)
/* 8037AF78 00377EB8  48 00 15 95 */	bl onIcon__Q28Morimura12TZukanWindowFi
/* 8037AF7C 00377EBC  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8037AF80 00377EC0  38 9F 02 60 */	addi r4, r31, 0x260
/* 8037AF84 00377EC4  38 BF 02 68 */	addi r5, r31, 0x268
/* 8037AF88 00377EC8  48 00 14 95 */	bl setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10
/* 8037AF8C 00377ECC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037AF90 00377ED0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037AF94 00377ED4  7C 08 03 A6 */	mtlr r0
/* 8037AF98 00377ED8  38 21 00 10 */	addi r1, r1, 0x10
/* 8037AF9C 00377EDC  4E 80 00 20 */	blr 
.endfn setXWindow__Q28Morimura10TItemZukanFv

.fn setYWindow__Q28Morimura10TItemZukanFv, global
/* 8037AFA0 00377EE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037AFA4 00377EE4  7C 08 02 A6 */	mflr r0
/* 8037AFA8 00377EE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037AFAC 00377EEC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037AFB0 00377EF0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037AFB4 00377EF4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8037AFB8 00377EF8  7C 7D 1B 78 */	mr r29, r3
/* 8037AFBC 00377EFC  88 03 02 44 */	lbz r0, 0x244(r3)
/* 8037AFC0 00377F00  28 00 00 00 */	cmplwi r0, 0
/* 8037AFC4 00377F04  41 82 00 14 */	beq .L_8037AFD8
/* 8037AFC8 00377F08  C0 0D 85 A8 */	lfs f0, mPodIconOffsetX__Q28Morimura10TZukanBase@sda21(r13)
/* 8037AFCC 00377F0C  80 7D 00 DC */	lwz r3, 0xdc(r29)
/* 8037AFD0 00377F10  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8037AFD4 00377F14  48 00 00 10 */	b .L_8037AFE4
.L_8037AFD8:
/* 8037AFD8 00377F18  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037AFDC 00377F1C  80 7D 00 DC */	lwz r3, 0xdc(r29)
/* 8037AFE0 00377F20  D0 03 00 1C */	stfs f0, 0x1c(r3)
.L_8037AFE4:
/* 8037AFE4 00377F24  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8037AFE8 00377F28  38 80 18 38 */	li r4, 0x1838
/* 8037AFEC 00377F2C  38 A0 00 00 */	li r5, 0
/* 8037AFF0 00377F30  4B FB D6 41 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8037AFF4 00377F34  80 1D 02 74 */	lwz r0, 0x274(r29)
/* 8037AFF8 00377F38  80 7D 00 DC */	lwz r3, 0xdc(r29)
/* 8037AFFC 00377F3C  23 C0 00 01 */	subfic r30, r0, 1
/* 8037B000 00377F40  57 C0 18 38 */	slwi r0, r30, 3
/* 8037B004 00377F44  7F FD 02 14 */	add r31, r29, r0
/* 8037B008 00377F48  38 9F 01 B0 */	addi r4, r31, 0x1b0
/* 8037B00C 00377F4C  48 00 13 A5 */	bl setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10
/* 8037B010 00377F50  80 7D 00 DC */	lwz r3, 0xdc(r29)
/* 8037B014 00377F54  7F C4 F3 78 */	mr r4, r30
/* 8037B018 00377F58  48 00 14 F5 */	bl onIcon__Q28Morimura12TZukanWindowFi
/* 8037B01C 00377F5C  80 7D 00 DC */	lwz r3, 0xdc(r29)
/* 8037B020 00377F60  38 9F 01 C0 */	addi r4, r31, 0x1c0
/* 8037B024 00377F64  38 BF 01 D0 */	addi r5, r31, 0x1d0
/* 8037B028 00377F68  48 00 13 F5 */	bl setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10
/* 8037B02C 00377F6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037B030 00377F70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037B034 00377F74  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037B038 00377F78  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8037B03C 00377F7C  7C 08 03 A6 */	mtlr r0
/* 8037B040 00377F80  38 21 00 20 */	addi r1, r1, 0x20
/* 8037B044 00377F84  4E 80 00 20 */	blr 
.endfn setYWindow__Q28Morimura10TItemZukanFv

.fn getPrice__Q28Morimura10TItemZukanFi, global
/* 8037B048 00377F88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037B04C 00377F8C  7C 08 02 A6 */	mflr r0
/* 8037B050 00377F90  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037B054 00377F94  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037B058 00377F98  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037B05C 00377F9C  7C 9E 23 78 */	mr r30, r4
/* 8037B060 00377FA0  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037B064 00377FA4  28 00 00 00 */	cmplwi r0, 0
/* 8037B068 00377FA8  40 82 00 50 */	bne .L_8037B0B8
/* 8037B06C 00377FAC  80 0D 94 90 */	lwz r0, playData__4Game@sda21(r13)
/* 8037B070 00377FB0  28 00 00 00 */	cmplwi r0, 0
/* 8037B074 00377FB4  41 82 00 44 */	beq .L_8037B0B8
/* 8037B078 00377FB8  7F C3 F3 78 */	mr r3, r30
/* 8037B07C 00377FBC  4B EA D0 E5 */	bl getConfigFromDictionaryNo__Q34Game10PelletList3MgrFi
/* 8037B080 00377FC0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8037B084 00377FC4  41 82 00 2C */	beq .L_8037B0B0
/* 8037B088 00377FC8  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B08C 00377FCC  28 00 00 00 */	cmplwi r0, 0
/* 8037B090 00377FD0  40 82 00 18 */	bne .L_8037B0A8
/* 8037B094 00377FD4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8037B098 00377FD8  7F C4 F3 78 */	mr r4, r30
/* 8037B09C 00377FDC  4B E6 CC 01 */	bl isPelletZukanVisible__Q24Game8PlayDataFi
/* 8037B0A0 00377FE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037B0A4 00377FE4  41 82 00 0C */	beq .L_8037B0B0
.L_8037B0A8:
/* 8037B0A8 00377FE8  80 7F 01 70 */	lwz r3, 0x170(r31)
/* 8037B0AC 00377FEC  48 00 00 44 */	b .L_8037B0F0
.L_8037B0B0:
/* 8037B0B0 00377FF0  38 60 00 00 */	li r3, 0
/* 8037B0B4 00377FF4  48 00 00 3C */	b .L_8037B0F0
.L_8037B0B8:
/* 8037B0B8 00377FF8  4B D4 E4 E9 */	bl rand
/* 8037B0BC 00377FFC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037B0C0 00378000  3C 00 43 30 */	lis r0, 0x4330
/* 8037B0C4 00378004  90 61 00 0C */	stw r3, 0xc(r1)
/* 8037B0C8 00378008  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 8037B0CC 0037800C  90 01 00 08 */	stw r0, 8(r1)
/* 8037B0D0 00378010  C0 42 08 54 */	lfs f2, lbl_8051EBB4@sda21(r2)
/* 8037B0D4 00378014  C8 01 00 08 */	lfd f0, 8(r1)
/* 8037B0D8 00378018  C0 22 08 68 */	lfs f1, lbl_8051EBC8@sda21(r2)
/* 8037B0DC 0037801C  EC 60 18 28 */	fsubs f3, f0, f3
/* 8037B0E0 00378020  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 8037B0E4 00378024  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037B0E8 00378028  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 8037B0EC 0037802C  4B D4 6A 61 */	bl __cvt_fp2unsigned
.L_8037B0F0:
/* 8037B0F0 00378030  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037B0F4 00378034  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037B0F8 00378038  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037B0FC 0037803C  7C 08 03 A6 */	mtlr r0
/* 8037B100 00378040  38 21 00 20 */	addi r1, r1, 0x20
/* 8037B104 00378044  4E 80 00 20 */	blr 
.endfn getPrice__Q28Morimura10TItemZukanFi

.fn getWeight__Q28Morimura10TItemZukanFi, global
/* 8037B108 00378048  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037B10C 0037804C  7C 08 02 A6 */	mflr r0
/* 8037B110 00378050  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037B114 00378054  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037B118 00378058  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037B11C 0037805C  7C 9E 23 78 */	mr r30, r4
/* 8037B120 00378060  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037B124 00378064  28 00 00 00 */	cmplwi r0, 0
/* 8037B128 00378068  40 82 00 5C */	bne .L_8037B184
/* 8037B12C 0037806C  80 0D 94 90 */	lwz r0, playData__4Game@sda21(r13)
/* 8037B130 00378070  28 00 00 00 */	cmplwi r0, 0
/* 8037B134 00378074  41 82 00 50 */	beq .L_8037B184
/* 8037B138 00378078  7F C3 F3 78 */	mr r3, r30
/* 8037B13C 0037807C  4B EA D0 25 */	bl getConfigFromDictionaryNo__Q34Game10PelletList3MgrFi
/* 8037B140 00378080  7C 7F 1B 79 */	or. r31, r3, r3
/* 8037B144 00378084  41 82 00 38 */	beq .L_8037B17C
/* 8037B148 00378088  88 0D 98 F8 */	lbz r0, mShowAllObjects__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B14C 0037808C  28 00 00 00 */	cmplwi r0, 0
/* 8037B150 00378090  40 82 00 18 */	bne .L_8037B168
/* 8037B154 00378094  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8037B158 00378098  7F C4 F3 78 */	mr r4, r30
/* 8037B15C 0037809C  4B E6 CB 41 */	bl isPelletZukanVisible__Q24Game8PlayDataFi
/* 8037B160 003780A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8037B164 003780A4  41 82 00 18 */	beq .L_8037B17C
.L_8037B168:
/* 8037B168 003780A8  80 7F 01 20 */	lwz r3, 0x120(r31)
/* 8037B16C 003780AC  28 03 00 80 */	cmplwi r3, 0x80
/* 8037B170 003780B0  40 82 00 48 */	bne .L_8037B1B8
/* 8037B174 003780B4  38 60 03 E8 */	li r3, 0x3e8
/* 8037B178 003780B8  48 00 00 40 */	b .L_8037B1B8
.L_8037B17C:
/* 8037B17C 003780BC  38 60 00 00 */	li r3, 0
/* 8037B180 003780C0  48 00 00 38 */	b .L_8037B1B8
.L_8037B184:
/* 8037B184 003780C4  4B D4 E4 1D */	bl rand
/* 8037B188 003780C8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8037B18C 003780CC  3C 00 43 30 */	lis r0, 0x4330
/* 8037B190 003780D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8037B194 003780D4  C8 62 08 20 */	lfd f3, lbl_8051EB80@sda21(r2)
/* 8037B198 003780D8  90 01 00 08 */	stw r0, 8(r1)
/* 8037B19C 003780DC  C0 22 08 54 */	lfs f1, lbl_8051EBB4@sda21(r2)
/* 8037B1A0 003780E0  C8 41 00 08 */	lfd f2, 8(r1)
/* 8037B1A4 003780E4  C0 02 08 68 */	lfs f0, lbl_8051EBC8@sda21(r2)
/* 8037B1A8 003780E8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8037B1AC 003780EC  EC 22 08 24 */	fdivs f1, f2, f1
/* 8037B1B0 003780F0  EC 20 00 72 */	fmuls f1, f0, f1
/* 8037B1B4 003780F4  4B D4 69 99 */	bl __cvt_fp2unsigned
.L_8037B1B8:
/* 8037B1B8 003780F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037B1BC 003780FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037B1C0 00378100  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037B1C4 00378104  7C 08 03 A6 */	mtlr r0
/* 8037B1C8 00378108  38 21 00 20 */	addi r1, r1, 0x20
/* 8037B1CC 0037810C  4E 80 00 20 */	blr 
.endfn getWeight__Q28Morimura10TItemZukanFi

.fn isNewSupply__Q28Morimura10TItemZukanFib, global
/* 8037B1D0 00378110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B1D4 00378114  7C 08 02 A6 */	mflr r0
/* 8037B1D8 00378118  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B1DC 0037811C  88 0D 98 F9 */	lbz r0, mAllNewSupply__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B1E0 00378120  28 00 00 00 */	cmplwi r0, 0
/* 8037B1E4 00378124  41 82 00 0C */	beq .L_8037B1F0
/* 8037B1E8 00378128  38 60 00 01 */	li r3, 1
/* 8037B1EC 0037812C  48 00 00 6C */	b .L_8037B258
.L_8037B1F0:
/* 8037B1F0 00378130  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 8037B1F4 00378134  28 06 00 00 */	cmplwi r6, 0
/* 8037B1F8 00378138  41 82 00 5C */	beq .L_8037B254
/* 8037B1FC 0037813C  2C 04 00 00 */	cmpwi r4, 0
/* 8037B200 00378140  41 80 00 54 */	blt .L_8037B254
/* 8037B204 00378144  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8037B208 00378148  40 82 00 30 */	bne .L_8037B238
/* 8037B20C 0037814C  88 03 02 40 */	lbz r0, 0x240(r3)
/* 8037B210 00378150  28 00 00 00 */	cmplwi r0, 0
/* 8037B214 00378154  41 82 00 24 */	beq .L_8037B238
/* 8037B218 00378158  80 03 02 30 */	lwz r0, 0x230(r3)
/* 8037B21C 0037815C  2C 00 00 00 */	cmpwi r0, 0
/* 8037B220 00378160  40 82 00 0C */	bne .L_8037B22C
/* 8037B224 00378164  38 60 00 00 */	li r3, 0
/* 8037B228 00378168  48 00 00 30 */	b .L_8037B258
.L_8037B22C:
/* 8037B22C 0037816C  80 63 02 2C */	lwz r3, 0x22c(r3)
/* 8037B230 00378170  54 80 10 3A */	slwi r0, r4, 2
/* 8037B234 00378174  7C 83 00 2E */	lwzx r4, r3, r0
.L_8037B238:
/* 8037B238 00378178  7C C3 33 78 */	mr r3, r6
/* 8037B23C 0037817C  4B E6 CB 89 */	bl isPelletZukanWhatsNew__Q24Game8PlayDataFi
/* 8037B240 00378180  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8037B244 00378184  7C 03 00 D0 */	neg r0, r3
/* 8037B248 00378188  7C 00 1B 78 */	or r0, r0, r3
/* 8037B24C 0037818C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8037B250 00378190  48 00 00 08 */	b .L_8037B258
.L_8037B254:
/* 8037B254 00378194  38 60 00 00 */	li r3, 0
.L_8037B258:
/* 8037B258 00378198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B25C 0037819C  7C 08 03 A6 */	mtlr r0
/* 8037B260 003781A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B264 003781A4  4E 80 00 20 */	blr 
.endfn isNewSupply__Q28Morimura10TItemZukanFib

.fn isPanelExist__Q28Morimura10TItemZukanFv, global
/* 8037B268 003781A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B26C 003781AC  7C 08 02 A6 */	mflr r0
/* 8037B270 003781B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B274 003781B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037B278 003781B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8037B27C 003781BC  7C 7E 1B 78 */	mr r30, r3
/* 8037B280 003781C0  80 03 00 94 */	lwz r0, 0x94(r3)
/* 8037B284 003781C4  80 63 00 88 */	lwz r3, 0x88(r3)
/* 8037B288 003781C8  54 00 10 3A */	slwi r0, r0, 2
/* 8037B28C 003781CC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8037B290 003781D0  48 02 73 2D */	bl getIndex__Q28Morimura10TIndexPaneFv
/* 8037B294 003781D4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8037B298 003781D8  40 80 00 0C */	bge .L_8037B2A4
/* 8037B29C 003781DC  38 60 00 00 */	li r3, 0
/* 8037B2A0 003781E0  48 00 00 74 */	b .L_8037B314
.L_8037B2A4:
/* 8037B2A4 003781E4  7F C3 F3 78 */	mr r3, r30
/* 8037B2A8 003781E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8037B2AC 003781EC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8037B2B0 003781F0  7D 89 03 A6 */	mtctr r12
/* 8037B2B4 003781F4  4E 80 04 21 */	bctrl 
/* 8037B2B8 003781F8  88 1E 02 40 */	lbz r0, 0x240(r30)
/* 8037B2BC 003781FC  28 00 00 00 */	cmplwi r0, 0
/* 8037B2C0 00378200  41 82 00 28 */	beq .L_8037B2E8
/* 8037B2C4 00378204  80 1E 02 30 */	lwz r0, 0x230(r30)
/* 8037B2C8 00378208  2C 00 00 01 */	cmpwi r0, 1
/* 8037B2CC 0037820C  40 80 00 0C */	bge .L_8037B2D8
/* 8037B2D0 00378210  38 60 00 00 */	li r3, 0
/* 8037B2D4 00378214  48 00 00 40 */	b .L_8037B314
.L_8037B2D8:
/* 8037B2D8 00378218  80 7E 02 2C */	lwz r3, 0x22c(r30)
/* 8037B2DC 0037821C  54 00 10 3A */	slwi r0, r0, 2
/* 8037B2E0 00378220  7C 63 02 14 */	add r3, r3, r0
/* 8037B2E4 00378224  80 63 FF FC */	lwz r3, -4(r3)
.L_8037B2E8:
/* 8037B2E8 00378228  7C 1F 18 00 */	cmpw r31, r3
/* 8037B2EC 0037822C  40 82 00 0C */	bne .L_8037B2F8
/* 8037B2F0 00378230  38 60 00 00 */	li r3, 0
/* 8037B2F4 00378234  48 00 00 20 */	b .L_8037B314
.L_8037B2F8:
/* 8037B2F8 00378238  80 0D 99 C8 */	lwz r0, mRightOffset__Q28Morimura11TScrollList@sda21(r13)
/* 8037B2FC 0037823C  7C 65 FE 70 */	srawi r5, r3, 0x1f
/* 8037B300 00378240  7C 1F 02 14 */	add r0, r31, r0
/* 8037B304 00378244  54 04 0F FE */	srwi r4, r0, 0x1f
/* 8037B308 00378248  7C 00 18 10 */	subfc r0, r0, r3
/* 8037B30C 0037824C  7C 05 21 14 */	adde r0, r5, r4
/* 8037B310 00378250  54 03 06 3E */	clrlwi r3, r0, 0x18
.L_8037B314:
/* 8037B314 00378254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B318 00378258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037B31C 0037825C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8037B320 00378260  7C 08 03 A6 */	mtlr r0
/* 8037B324 00378264  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B328 00378268  4E 80 00 20 */	blr 
.endfn isPanelExist__Q28Morimura10TItemZukanFv

.fn isOpenConfirmWindow__Q28Morimura10TItemZukanFv, global
/* 8037B32C 0037826C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B330 00378270  7C 08 02 A6 */	mflr r0
/* 8037B334 00378274  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B338 00378278  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B33C 0037827C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8037B340 00378280  7D 89 03 A6 */	mtctr r12
/* 8037B344 00378284  4E 80 04 21 */	bctrl 
/* 8037B348 00378288  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8037B34C 0037828C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B350 00378290  88 63 00 D4 */	lbz r3, 0xd4(r3)
/* 8037B354 00378294  7C 08 03 A6 */	mtlr r0
/* 8037B358 00378298  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B35C 0037829C  4E 80 00 20 */	blr 
.endfn isOpenConfirmWindow__Q28Morimura10TItemZukanFv

.fn openConfirmWindow__Q28Morimura10TItemZukanFv, global
/* 8037B360 003782A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B364 003782A4  7C 08 02 A6 */	mflr r0
/* 8037B368 003782A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B36C 003782AC  38 00 00 00 */	li r0, 0
/* 8037B370 003782B0  98 03 02 14 */	stb r0, 0x214(r3)
/* 8037B374 003782B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B378 003782B8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8037B37C 003782BC  7D 89 03 A6 */	mtctr r12
/* 8037B380 003782C0  4E 80 04 21 */	bctrl 
/* 8037B384 003782C4  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8037B388 003782C8  38 80 00 00 */	li r4, 0
/* 8037B38C 003782CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B390 003782D0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037B394 003782D4  7D 89 03 A6 */	mtctr r12
/* 8037B398 003782D8  4E 80 04 21 */	bctrl 
/* 8037B39C 003782DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B3A0 003782E0  7C 08 03 A6 */	mtlr r0
/* 8037B3A4 003782E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B3A8 003782E8  4E 80 00 20 */	blr 
.endfn openConfirmWindow__Q28Morimura10TItemZukanFv

.fn __ct__Q28Morimura11TDItemSceneFv, global
/* 8037B3AC 003782EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B3B0 003782F0  7C 08 02 A6 */	mflr r0
/* 8037B3B4 003782F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B3B8 003782F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037B3BC 003782FC  7C 7F 1B 78 */	mr r31, r3
/* 8037B3C0 00378300  48 0D 63 D1 */	bl __ct__Q26Screen9SceneBaseFv
/* 8037B3C4 00378304  3C 80 80 4E */	lis r4, __vt__Q28Morimura9THIOScene@ha
/* 8037B3C8 00378308  3C 60 80 4E */	lis r3, __vt__Q28Morimura11TDItemScene@ha
/* 8037B3CC 0037830C  38 04 3F 18 */	addi r0, r4, __vt__Q28Morimura9THIOScene@l
/* 8037B3D0 00378310  38 80 00 00 */	li r4, 0
/* 8037B3D4 00378314  90 1F 00 00 */	stw r0, 0(r31)
/* 8037B3D8 00378318  38 03 3D 74 */	addi r0, r3, __vt__Q28Morimura11TDItemScene@l
/* 8037B3DC 0037831C  7F E3 FB 78 */	mr r3, r31
/* 8037B3E0 00378320  90 9F 02 20 */	stw r4, 0x220(r31)
/* 8037B3E4 00378324  90 1F 00 00 */	stw r0, 0(r31)
/* 8037B3E8 00378328  90 9F 02 24 */	stw r4, 0x224(r31)
/* 8037B3EC 0037832C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037B3F0 00378330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B3F4 00378334  7C 08 03 A6 */	mtlr r0
/* 8037B3F8 00378338  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B3FC 0037833C  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura11TDItemSceneFv

.fn doCreateObj__Q28Morimura11TDItemSceneFP10JKRArchive, global
/* 8037B400 00378340  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037B404 00378344  7C 08 02 A6 */	mflr r0
/* 8037B408 00378348  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037B40C 0037834C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037B410 00378350  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037B414 00378354  7C 9E 23 78 */	mr r30, r4
/* 8037B418 00378358  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8037B41C 0037835C  7C 7D 1B 78 */	mr r29, r3
/* 8037B420 00378360  38 60 03 BC */	li r3, 0x3bc
/* 8037B424 00378364  4B CA 8A 81 */	bl __nw__FUl
/* 8037B428 00378368  7C 7F 1B 79 */	or. r31, r3, r3
/* 8037B42C 0037836C  41 82 01 20 */	beq .L_8037B54C
/* 8037B430 00378370  3C 80 80 49 */	lis r4, lbl_8049311C@ha
/* 8037B434 00378374  38 84 31 1C */	addi r4, r4, lbl_8049311C@l
/* 8037B438 00378378  4B FF 57 D1 */	bl __ct__Q28Morimura10TZukanBaseFPc
/* 8037B43C 0037837C  3C 80 80 4E */	lis r4, __vt__Q28Morimura10TItemZukan@ha
/* 8037B440 00378380  38 60 00 00 */	li r3, 0
/* 8037B444 00378384  38 84 3D DC */	addi r4, r4, __vt__Q28Morimura10TItemZukan@l
/* 8037B448 00378388  38 00 00 01 */	li r0, 1
/* 8037B44C 0037838C  90 9F 00 00 */	stw r4, 0(r31)
/* 8037B450 00378390  38 84 00 10 */	addi r4, r4, 0x10
/* 8037B454 00378394  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037B458 00378398  90 9F 00 18 */	stw r4, 0x18(r31)
/* 8037B45C 0037839C  90 7F 02 4C */	stw r3, 0x24c(r31)
/* 8037B460 003783A0  90 7F 02 50 */	stw r3, 0x250(r31)
/* 8037B464 003783A4  90 7F 02 54 */	stw r3, 0x254(r31)
/* 8037B468 003783A8  90 7F 02 70 */	stw r3, 0x270(r31)
/* 8037B46C 003783AC  90 1F 02 74 */	stw r0, 0x274(r31)
/* 8037B470 003783B0  90 7F 03 A4 */	stw r3, 0x3a4(r31)
/* 8037B474 003783B4  90 7F 03 A8 */	stw r3, 0x3a8(r31)
/* 8037B478 003783B8  90 7F 03 AC */	stw r3, 0x3ac(r31)
/* 8037B47C 003783BC  90 7F 03 B0 */	stw r3, 0x3b0(r31)
/* 8037B480 003783C0  D0 1F 03 B8 */	stfs f0, 0x3b8(r31)
/* 8037B484 003783C4  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 8037B488 003783C8  90 7F 02 78 */	stw r3, 0x278(r31)
/* 8037B48C 003783CC  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 8037B490 003783D0  90 7F 02 7C */	stw r3, 0x27c(r31)
/* 8037B494 003783D4  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 8037B498 003783D8  90 7F 02 80 */	stw r3, 0x280(r31)
/* 8037B49C 003783DC  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 8037B4A0 003783E0  90 7F 02 84 */	stw r3, 0x284(r31)
/* 8037B4A4 003783E4  90 7F 02 EC */	stw r3, 0x2ec(r31)
/* 8037B4A8 003783E8  90 7F 02 88 */	stw r3, 0x288(r31)
/* 8037B4AC 003783EC  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 8037B4B0 003783F0  90 7F 02 8C */	stw r3, 0x28c(r31)
/* 8037B4B4 003783F4  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 8037B4B8 003783F8  90 7F 02 90 */	stw r3, 0x290(r31)
/* 8037B4BC 003783FC  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 8037B4C0 00378400  90 7F 02 94 */	stw r3, 0x294(r31)
/* 8037B4C4 00378404  90 7F 02 FC */	stw r3, 0x2fc(r31)
/* 8037B4C8 00378408  90 7F 02 98 */	stw r3, 0x298(r31)
/* 8037B4CC 0037840C  90 7F 03 00 */	stw r3, 0x300(r31)
/* 8037B4D0 00378410  90 7F 02 9C */	stw r3, 0x29c(r31)
/* 8037B4D4 00378414  90 7F 03 04 */	stw r3, 0x304(r31)
/* 8037B4D8 00378418  90 7F 02 A0 */	stw r3, 0x2a0(r31)
/* 8037B4DC 0037841C  90 7F 03 08 */	stw r3, 0x308(r31)
/* 8037B4E0 00378420  90 7F 02 A4 */	stw r3, 0x2a4(r31)
/* 8037B4E4 00378424  90 7F 03 0C */	stw r3, 0x30c(r31)
/* 8037B4E8 00378428  90 7F 02 A8 */	stw r3, 0x2a8(r31)
/* 8037B4EC 0037842C  90 7F 03 10 */	stw r3, 0x310(r31)
/* 8037B4F0 00378430  90 7F 02 AC */	stw r3, 0x2ac(r31)
/* 8037B4F4 00378434  90 7F 03 14 */	stw r3, 0x314(r31)
/* 8037B4F8 00378438  90 7F 02 B0 */	stw r3, 0x2b0(r31)
/* 8037B4FC 0037843C  90 7F 03 18 */	stw r3, 0x318(r31)
/* 8037B500 00378440  90 7F 02 B4 */	stw r3, 0x2b4(r31)
/* 8037B504 00378444  90 7F 03 1C */	stw r3, 0x31c(r31)
/* 8037B508 00378448  90 7F 02 B8 */	stw r3, 0x2b8(r31)
/* 8037B50C 0037844C  90 7F 03 20 */	stw r3, 0x320(r31)
/* 8037B510 00378450  90 7F 02 BC */	stw r3, 0x2bc(r31)
/* 8037B514 00378454  90 7F 03 24 */	stw r3, 0x324(r31)
/* 8037B518 00378458  90 7F 02 C0 */	stw r3, 0x2c0(r31)
/* 8037B51C 0037845C  90 7F 03 28 */	stw r3, 0x328(r31)
/* 8037B520 00378460  90 7F 02 C4 */	stw r3, 0x2c4(r31)
/* 8037B524 00378464  90 7F 03 2C */	stw r3, 0x32c(r31)
/* 8037B528 00378468  90 7F 02 C8 */	stw r3, 0x2c8(r31)
/* 8037B52C 0037846C  90 7F 03 30 */	stw r3, 0x330(r31)
/* 8037B530 00378470  90 7F 02 CC */	stw r3, 0x2cc(r31)
/* 8037B534 00378474  90 7F 03 34 */	stw r3, 0x334(r31)
/* 8037B538 00378478  90 7F 02 D0 */	stw r3, 0x2d0(r31)
/* 8037B53C 0037847C  90 7F 03 38 */	stw r3, 0x338(r31)
/* 8037B540 00378480  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8037B544 00378484  90 7F 03 3C */	stw r3, 0x33c(r31)
/* 8037B548 00378488  90 7F 02 D8 */	stw r3, 0x2d8(r31)
.L_8037B54C:
/* 8037B54C 0037848C  7F A3 EB 78 */	mr r3, r29
/* 8037B550 00378490  7F E4 FB 78 */	mr r4, r31
/* 8037B554 00378494  7F C5 F3 78 */	mr r5, r30
/* 8037B558 00378498  48 0D 68 1D */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8037B55C 0037849C  93 FD 02 20 */	stw r31, 0x220(r29)
/* 8037B560 003784A0  38 60 00 D8 */	li r3, 0xd8
/* 8037B564 003784A4  4B CA 89 41 */	bl __nw__FUl
/* 8037B568 003784A8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037B56C 003784AC  41 82 00 14 */	beq .L_8037B580
/* 8037B570 003784B0  3C 80 80 49 */	lis r4, lbl_80493110@ha
/* 8037B574 003784B4  38 84 31 10 */	addi r4, r4, lbl_80493110@l
/* 8037B578 003784B8  48 02 80 CD */	bl __ct__Q28Morimura17TConfirmEndWindowFPCc
/* 8037B57C 003784BC  7C 60 1B 78 */	mr r0, r3
.L_8037B580:
/* 8037B580 003784C0  90 1D 02 24 */	stw r0, 0x224(r29)
/* 8037B584 003784C4  7F A3 EB 78 */	mr r3, r29
/* 8037B588 003784C8  7F C5 F3 78 */	mr r5, r30
/* 8037B58C 003784CC  80 9D 02 24 */	lwz r4, 0x224(r29)
/* 8037B590 003784D0  48 0D 67 E5 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 8037B594 003784D4  3C A0 38 5F */	lis r5, 0x385F3030@ha
/* 8037B598 003784D8  3C 80 00 36 */	lis r4, 0x00363031@ha
/* 8037B59C 003784DC  80 7D 02 24 */	lwz r3, 0x224(r29)
/* 8037B5A0 003784E0  38 C5 30 30 */	addi r6, r5, 0x385F3030@l
/* 8037B5A4 003784E4  38 A4 30 31 */	addi r5, r4, 0x00363031@l
/* 8037B5A8 003784E8  48 02 82 41 */	bl setRetireMsg__Q28Morimura17TConfirmEndWindowFUx
/* 8037B5AC 003784EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037B5B0 003784F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037B5B4 003784F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037B5B8 003784F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8037B5BC 003784FC  7C 08 03 A6 */	mtlr r0
/* 8037B5C0 00378500  38 21 00 20 */	addi r1, r1, 0x20
/* 8037B5C4 00378504  4E 80 00 20 */	blr 
.endfn doCreateObj__Q28Morimura11TDItemSceneFP10JKRArchive

.fn doStart__Q28Morimura11TDItemSceneFPQ26Screen13StartSceneArg, global
/* 8037B5C8 00378508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B5CC 0037850C  7C 08 02 A6 */	mflr r0
/* 8037B5D0 00378510  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B5D4 00378514  80 63 02 20 */	lwz r3, 0x220(r3)
/* 8037B5D8 00378518  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B5DC 0037851C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8037B5E0 00378520  7D 89 03 A6 */	mtctr r12
/* 8037B5E4 00378524  4E 80 04 21 */	bctrl 
/* 8037B5E8 00378528  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B5EC 0037852C  38 60 00 01 */	li r3, 1
/* 8037B5F0 00378530  7C 08 03 A6 */	mtlr r0
/* 8037B5F4 00378534  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B5F8 00378538  4E 80 00 20 */	blr 
.endfn doStart__Q28Morimura11TDItemSceneFPQ26Screen13StartSceneArg

.fn isAppearConfirmWindow__Q28Morimura11TDItemSceneFv, global
/* 8037B5FC 0037853C  80 63 02 24 */	lwz r3, 0x224(r3)
/* 8037B600 00378540  28 03 00 00 */	cmplwi r3, 0
/* 8037B604 00378544  41 82 00 18 */	beq .L_8037B61C
/* 8037B608 00378548  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 8037B60C 0037854C  28 00 00 00 */	cmplwi r0, 0
/* 8037B610 00378550  41 82 00 0C */	beq .L_8037B61C
/* 8037B614 00378554  38 60 00 01 */	li r3, 1
/* 8037B618 00378558  4E 80 00 20 */	blr 
.L_8037B61C:
/* 8037B61C 0037855C  38 60 00 00 */	li r3, 0
/* 8037B620 00378560  4E 80 00 20 */	blr 
.endfn isAppearConfirmWindow__Q28Morimura11TDItemSceneFv

.fn __ct__Q28Morimura18TCallbackScrollMsgFv, global
/* 8037B624 00378564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B628 00378568  7C 08 02 A6 */	mflr r0
/* 8037B62C 0037856C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B630 00378570  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037B634 00378574  7C 7F 1B 78 */	mr r31, r3
/* 8037B638 00378578  4B F8 DF DD */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 8037B63C 0037857C  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TCallbackScrollMsg@ha
/* 8037B640 00378580  C0 42 07 C0 */	lfs f2, lbl_8051EB20@sda21(r2)
/* 8037B644 00378584  38 03 3D 58 */	addi r0, r3, __vt__Q28Morimura18TCallbackScrollMsg@l
/* 8037B648 00378588  C0 22 08 80 */	lfs f1, lbl_8051EBE0@sda21(r2)
/* 8037B64C 0037858C  90 1F 00 00 */	stw r0, 0(r31)
/* 8037B650 00378590  38 60 00 74 */	li r3, 0x74
/* 8037B654 00378594  C0 02 08 84 */	lfs f0, lbl_8051EBE4@sda21(r2)
/* 8037B658 00378598  D0 5F 00 48 */	stfs f2, 0x48(r31)
/* 8037B65C 0037859C  D0 2D 85 94 */	stfs f1, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B660 003785A0  D0 0D 85 98 */	stfs f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B664 003785A4  4B CA 88 41 */	bl __nw__FUl
/* 8037B668 003785A8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037B66C 003785AC  41 82 00 0C */	beq .L_8037B678
/* 8037B670 003785B0  48 0D 99 D5 */	bl __ct__Q35P2JME15IllustratedBook8TControlFv
/* 8037B674 003785B4  7C 60 1B 78 */	mr r0, r3
.L_8037B678:
/* 8037B678 003785B8  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8037B67C 003785BC  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8037B680 003785C0  48 0B D5 55 */	bl init__Q25P2JME8TControlFv
/* 8037B684 003785C4  7F E3 FB 78 */	mr r3, r31
/* 8037B688 003785C8  48 00 00 C5 */	bl reset__Q28Morimura18TCallbackScrollMsgFv
/* 8037B68C 003785CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B690 003785D0  7F E3 FB 78 */	mr r3, r31
/* 8037B694 003785D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037B698 003785D8  7C 08 03 A6 */	mtlr r0
/* 8037B69C 003785DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B6A0 003785E0  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura18TCallbackScrollMsgFv

.if version == 0
.fn doInit__Q28Morimura18TCallbackScrollMsgFv, global
/* 8037B6A4 003785E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B6A8 003785E8  7C 08 02 A6 */	mflr r0
/* 8037B6AC 003785EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B6B0 003785F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037B6B4 003785F4  7C 7F 1B 78 */	mr r31, r3
/* 8037B6B8 003785F8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8037B6BC 003785FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B6C0 00378600  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037B6C4 00378604  7D 89 03 A6 */	mtctr r12
/* 8037B6C8 00378608  4E 80 04 21 */	bctrl 
/* 8037B6CC 0037860C  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8037B6D0 00378610  28 00 00 13 */	cmplwi r0, 0x13
/* 8037B6D4 00378614  41 82 00 20 */	beq .L_8037B6F4
/* 8037B6D8 00378618  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 8037B6DC 0037861C  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 8037B6E0 00378620  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 8037B6E4 00378624  38 80 13 A1 */	li r4, 0x13a8
/* 8037B6E8 00378628  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 8037B6EC 0037862C  4C C6 31 82 */	crclr 6
/* 8037B6F0 00378630  4B CA EF 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037B6F4:
/* 8037B6F4 00378634  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8037B6F8 00378638  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8037B6FC 0037863C  48 0D 9C 0D */	bl setTextBoxInfo__Q35P2JME15IllustratedBook8TControlFP10J2DTextBox
/* 8037B700 00378640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B704 00378644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037B708 00378648  7C 08 03 A6 */	mtlr r0
/* 8037B70C 0037864C  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B710 00378650  4E 80 00 20 */	blr 
.endfn doInit__Q28Morimura18TCallbackScrollMsgFv
.else
.fn doInit__Q28Morimura18TCallbackScrollMsgFv, global
/* 8037B6A4 003785E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B6A8 003785E8  7C 08 02 A6 */	mflr r0
/* 8037B6AC 003785EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B6B0 003785F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037B6B4 003785F4  7C 7F 1B 78 */	mr r31, r3
/* 8037B6B8 003785F8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8037B6BC 003785FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B6C0 00378600  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037B6C4 00378604  7D 89 03 A6 */	mtctr r12
/* 8037B6C8 00378608  4E 80 04 21 */	bctrl 
/* 8037B6CC 0037860C  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8037B6D0 00378610  28 00 00 13 */	cmplwi r0, 0x13
/* 8037B6D4 00378614  41 82 00 20 */	beq .L_8037B6F4
/* 8037B6D8 00378618  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 8037B6DC 0037861C  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 8037B6E0 00378620  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 8037B6E4 00378624  38 80 13 A1 */	li r4, 0x13a1
/* 8037B6E8 00378628  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 8037B6EC 0037862C  4C C6 31 82 */	crclr 6
/* 8037B6F0 00378630  4B CA EF 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037B6F4:
/* 8037B6F4 00378634  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8037B6F8 00378638  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8037B6FC 0037863C  48 0D 9C 0D */	bl setTextBoxInfo__Q35P2JME15IllustratedBook8TControlFP10J2DTextBox
/* 8037B700 00378640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B704 00378644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037B708 00378648  7C 08 03 A6 */	mtlr r0
/* 8037B70C 0037864C  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B710 00378650  4E 80 00 20 */	blr 
.endfn doInit__Q28Morimura18TCallbackScrollMsgFv
.endif

.fn update__Q28Morimura18TCallbackScrollMsgFv, global
/* 8037B714 00378654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B718 00378658  7C 08 02 A6 */	mflr r0
/* 8037B71C 0037865C  38 80 00 00 */	li r4, 0
/* 8037B720 00378660  38 A0 00 00 */	li r5, 0
/* 8037B724 00378664  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B728 00378668  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8037B72C 0037866C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B730 00378670  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8037B734 00378674  7D 89 03 A6 */	mtctr r12
/* 8037B738 00378678  4E 80 04 21 */	bctrl 
/* 8037B73C 0037867C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B740 00378680  7C 08 03 A6 */	mtlr r0
/* 8037B744 00378684  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B748 00378688  4E 80 00 20 */	blr 
.endfn update__Q28Morimura18TCallbackScrollMsgFv

.fn reset__Q28Morimura18TCallbackScrollMsgFv, global
/* 8037B74C 0037868C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B750 00378690  7C 08 02 A6 */	mflr r0
/* 8037B754 00378694  C0 02 08 3C */	lfs f0, lbl_8051EB9C@sda21(r2)
/* 8037B758 00378698  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B75C 0037869C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037B760 003786A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8037B764 003786A4  7C 7E 1B 78 */	mr r30, r3
/* 8037B768 003786A8  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8037B76C 003786AC  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8037B770 003786B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B774 003786B4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037B778 003786B8  7D 89 03 A6 */	mtctr r12
/* 8037B77C 003786BC  4E 80 04 21 */	bctrl 
/* 8037B780 003786C0  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8037B784 003786C4  28 04 00 00 */	cmplwi r4, 0
/* 8037B788 003786C8  41 82 00 74 */	beq .L_8037B7FC
/* 8037B78C 003786CC  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8037B790 003786D0  38 BE 00 28 */	addi r5, r30, 0x28
/* 8037B794 003786D4  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8037B798 003786D8  38 DE 00 2C */	addi r6, r30, 0x2c
/* 8037B79C 003786DC  48 0C 1B 91 */	bl convertU64ToMessageID__5P2JMEFUxPUlPUl
/* 8037B7A0 003786E0  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037B7A4 003786E4  80 9E 00 28 */	lwz r4, 0x28(r30)
/* 8037B7A8 003786E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B7AC 003786EC  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 8037B7B0 003786F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8037B7B4 003786F4  7D 89 03 A6 */	mtctr r12
/* 8037B7B8 003786F8  4E 80 04 21 */	bctrl 
/* 8037B7BC 003786FC  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037B7C0 00378700  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8037B7C4 00378704  83 E3 00 40 */	lwz r31, 0x40(r3)
/* 8037B7C8 00378708  7F E3 FB 78 */	mr r3, r31
/* 8037B7CC 0037870C  48 0C 16 A1 */	bl setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane
/* 8037B7D0 00378710  C0 0D 85 94 */	lfs f0, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B7D4 00378714  D0 1F 00 C0 */	stfs f0, 0xc0(r31)
/* 8037B7D8 00378718  D0 1F 00 C8 */	stfs f0, 0xc8(r31)
/* 8037B7DC 0037871C  C0 0D 85 98 */	lfs f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B7E0 00378720  D0 1F 01 40 */	stfs f0, 0x140(r31)
/* 8037B7E4 00378724  C0 0D 85 9C */	lfs f0, mScrollValueCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B7E8 00378728  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037B7EC 0037872C  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8037B7F0 00378730  C0 0D 85 A0 */	lfs f0, mScrollSpeedCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037B7F4 00378734  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037B7F8 00378738  D0 03 00 70 */	stfs f0, 0x70(r3)
.L_8037B7FC:
/* 8037B7FC 0037873C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B800 00378740  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037B804 00378744  83 C1 00 08 */	lwz r30, 8(r1)
/* 8037B808 00378748  7C 08 03 A6 */	mtlr r0
/* 8037B80C 0037874C  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B810 00378750  4E 80 00 20 */	blr 
.endfn reset__Q28Morimura18TCallbackScrollMsgFv

.fn scroll__Q28Morimura18TCallbackScrollMsgFf, global
/* 8037B814 00378754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B818 00378758  7C 08 02 A6 */	mflr r0
/* 8037B81C 0037875C  C0 02 07 E4 */	lfs f0, lbl_8051EB44@sda21(r2)
/* 8037B820 00378760  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B824 00378764  C0 43 00 48 */	lfs f2, 0x48(r3)
/* 8037B828 00378768  EC 02 00 2A */	fadds f0, f2, f0
/* 8037B82C 0037876C  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8037B830 00378770  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8037B834 00378774  48 0D 99 11 */	bl scroll__Q35P2JME15IllustratedBook8TControlFf
/* 8037B838 00378778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B83C 0037877C  7C 08 03 A6 */	mtlr r0
/* 8037B840 00378780  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B844 00378784  4E 80 00 20 */	blr 
.endfn scroll__Q28Morimura18TCallbackScrollMsgFf

.fn draw__Q28Morimura18TCallbackScrollMsgFR8GraphicsR14J2DGrafContext, global
/* 8037B848 00378788  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B84C 0037878C  7C 08 02 A6 */	mflr r0
/* 8037B850 00378790  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B854 00378794  80 83 00 18 */	lwz r4, 0x18(r3)
/* 8037B858 00378798  88 04 00 B0 */	lbz r0, 0xb0(r4)
/* 8037B85C 0037879C  28 00 00 00 */	cmplwi r0, 0
/* 8037B860 003787A0  41 82 00 20 */	beq .L_8037B880
/* 8037B864 003787A4  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8037B868 003787A8  38 A5 00 80 */	addi r5, r5, 0x80
/* 8037B86C 003787AC  38 80 00 00 */	li r4, 0
/* 8037B870 003787B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037B874 003787B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8037B878 003787B8  7D 89 03 A6 */	mtctr r12
/* 8037B87C 003787BC  4E 80 04 21 */	bctrl 
.L_8037B880:
/* 8037B880 003787C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B884 003787C4  7C 08 03 A6 */	mtlr r0
/* 8037B888 003787C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B88C 003787CC  4E 80 00 20 */	blr 
.endfn draw__Q28Morimura18TCallbackScrollMsgFR8GraphicsR14J2DGrafContext

.fn getPosRate__Q28Morimura18TCallbackScrollMsgFv, global
/* 8037B890 003787D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B894 003787D4  7C 08 02 A6 */	mflr r0
/* 8037B898 003787D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B89C 003787DC  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8037B8A0 003787E0  48 0D 98 7D */	bl getScrollPosition__Q35P2JME15IllustratedBook8TControlFv
/* 8037B8A4 003787E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B8A8 003787E8  7C 08 03 A6 */	mtlr r0
/* 8037B8AC 003787EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B8B0 003787F0  4E 80 00 20 */	blr 
.endfn getPosRate__Q28Morimura18TCallbackScrollMsgFv

.fn __ct__Q28Morimura12TZukanWindowFP10JKRArchivei, global
/* 8037B8B4 003787F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037B8B8 003787F8  7C 08 02 A6 */	mflr r0
/* 8037B8BC 003787FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037B8C0 00378800  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037B8C4 00378804  7C 7F 1B 78 */	mr r31, r3
/* 8037B8C8 00378808  48 02 5A E1 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 8037B8CC 0037880C  3C 60 80 4E */	lis r3, __vt__Q28Morimura12TZukanWindow@ha
/* 8037B8D0 00378810  38 00 00 00 */	li r0, 0
/* 8037B8D4 00378814  38 63 3D 44 */	addi r3, r3, __vt__Q28Morimura12TZukanWindow@l
/* 8037B8D8 00378818  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037B8DC 0037881C  90 7F 00 00 */	stw r3, 0(r31)
/* 8037B8E0 00378820  7F E3 FB 78 */	mr r3, r31
/* 8037B8E4 00378824  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8037B8E8 00378828  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8037B8EC 0037882C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8037B8F0 00378830  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8037B8F4 00378834  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8037B8F8 00378838  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8037B8FC 0037883C  90 1F 00 34 */	stw r0, 0x34(r31)
/* 8037B900 00378840  90 1F 00 38 */	stw r0, 0x38(r31)
/* 8037B904 00378844  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 8037B908 00378848  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8037B90C 0037884C  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8037B910 00378850  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8037B914 00378854  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 8037B918 00378858  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8037B91C 0037885C  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8037B920 00378860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037B924 00378864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037B928 00378868  7C 08 03 A6 */	mtlr r0
/* 8037B92C 0037886C  38 21 00 10 */	addi r1, r1, 0x10
/* 8037B930 00378870  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura12TZukanWindowFP10JKRArchivei

.if version == 0
.fn create__Q28Morimura12TZukanWindowFPCcUl, global
/* 8037B934 00378874  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8037B938 00378878  7C 08 02 A6 */	mflr r0
/* 8037B93C 0037887C  3C C0 80 49 */	lis r6, lbl_80492520@ha
/* 8037B940 00378880  90 01 00 44 */	stw r0, 0x44(r1)
/* 8037B944 00378884  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8037B948 00378888  3B E6 25 20 */	addi r31, r6, lbl_80492520@l
/* 8037B94C 0037888C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8037B950 00378890  7C 7E 1B 78 */	mr r30, r3
/* 8037B954 00378894  38 60 01 48 */	li r3, 0x148
/* 8037B958 00378898  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8037B95C 0037889C  7C BD 2B 78 */	mr r29, r5
/* 8037B960 003788A0  93 81 00 30 */	stw r28, 0x30(r1)
/* 8037B964 003788A4  7C 9C 23 78 */	mr r28, r4
/* 8037B968 003788A8  4B CA 85 3D */	bl __nw__FUl
/* 8037B96C 003788AC  7C 60 1B 79 */	or. r0, r3, r3
/* 8037B970 003788B0  41 82 00 0C */	beq .L_8037B97C
/* 8037B974 003788B4  48 0B 94 39 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8037B978 003788B8  7C 60 1B 78 */	mr r0, r3
.L_8037B97C:
/* 8037B97C 003788BC  90 1E 00 08 */	stw r0, 8(r30)
/* 8037B980 003788C0  7F 84 E3 78 */	mr r4, r28
/* 8037B984 003788C4  7F A5 EB 78 */	mr r5, r29
/* 8037B988 003788C8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037B98C 003788CC  80 DE 00 0C */	lwz r6, 0xc(r30)
/* 8037B990 003788D0  4B CC 3C 95 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8037B994 003788D4  38 60 00 2C */	li r3, 0x2c
/* 8037B998 003788D8  4B CA 85 0D */	bl __nw__FUl
/* 8037B99C 003788DC  7C 7D 1B 79 */	or. r29, r3, r3
/* 8037B9A0 003788E0  41 82 00 48 */	beq .L_8037B9E8
/* 8037B9A4 003788E4  48 09 59 ED */	bl __ct__5CNodeFv
/* 8037B9A8 003788E8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8037B9AC 003788EC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8037B9B0 003788F0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8037B9B4 003788F4  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8037B9B8 003788F8  90 1D 00 00 */	stw r0, 0(r29)
/* 8037B9BC 003788FC  38 A0 00 00 */	li r5, 0
/* 8037B9C0 00378900  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8037B9C4 00378904  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8037B9C8 00378908  90 BD 00 18 */	stw r5, 0x18(r29)
/* 8037B9CC 0037890C  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037B9D0 00378910  90 9D 00 00 */	stw r4, 0(r29)
/* 8037B9D4 00378914  90 1D 00 00 */	stw r0, 0(r29)
/* 8037B9D8 00378918  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8037B9DC 0037891C  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8037B9E0 00378920  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8037B9E4 00378924  D0 1D 00 28 */	stfs f0, 0x28(r29)
.L_8037B9E8:
/* 8037B9E8 00378928  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 8037B9EC 0037892C  3C 80 64 65 */	lis r4, 0x64656D6F@ha
/* 8037B9F0 00378930  93 BE 00 34 */	stw r29, 0x34(r30)
/* 8037B9F4 00378934  3C 60 00 6D */	lis r3, 0x006D675F@ha
/* 8037B9F8 00378938  C0 02 08 88 */	lfs f0, lbl_8051EBE8@sda21(r2)
/* 8037B9FC 0037893C  38 C4 6D 6F */	addi r6, r4, 0x64656D6F@l
/* 8037BA00 00378940  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8037BA04 00378944  38 A3 67 5F */	addi r5, r3, 0x006D675F@l
/* 8037BA08 00378948  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 8037BA0C 0037894C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8037BA10 00378950  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8037BA14 00378954  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8037BA18 00378958  C0 02 08 8C */	lfs f0, lbl_8051EBEC@sda21(r2)
/* 8037BA1C 0037895C  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8037BA20 00378960  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8037BA24 00378964  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8037BA28 00378968  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8037BA2C 0037896C  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037BA30 00378970  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037BA34 00378974  90 64 00 24 */	stw r3, 0x24(r4)
/* 8037BA38 00378978  90 04 00 28 */	stw r0, 0x28(r4)
/* 8037BA3C 0037897C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BA40 00378980  80 FE 00 34 */	lwz r7, 0x34(r30)
/* 8037BA44 00378984  48 0B 90 E1 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037BA48 00378988  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BA4C 0037898C  3C A0 6E 63 */	lis r5, 0x6E636170@ha
/* 8037BA50 00378990  3C 80 00 57 */	lis r4, 0x00577769@ha
/* 8037BA54 00378994  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BA58 00378998  38 C5 61 70 */	addi r6, r5, 0x6E636170@l
/* 8037BA5C 0037899C  38 A4 77 69 */	addi r5, r4, 0x00577769@l
/* 8037BA60 003789A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BA64 003789A4  7D 89 03 A6 */	mtctr r12
/* 8037BA68 003789A8  4E 80 04 21 */	bctrl 
/* 8037BA6C 003789AC  90 7E 00 38 */	stw r3, 0x38(r30)
/* 8037BA70 003789B0  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8037BA74 003789B4  28 00 00 00 */	cmplwi r0, 0
/* 8037BA78 003789B8  40 82 00 18 */	bne .L_8037BA90
/* 8037BA7C 003789BC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BA80 003789C0  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BA84 003789C4  38 80 14 39 */	li r4, 0x1440
/* 8037BA88 003789C8  4C C6 31 82 */	crclr 6
/* 8037BA8C 003789CC  4B CA EB B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BA90:
/* 8037BA90 003789D0  38 60 00 58 */	li r3, 0x58
/* 8037BA94 003789D4  4B CA 84 11 */	bl __nw__FUl
/* 8037BA98 003789D8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BA9C 003789DC  41 82 00 F0 */	beq .L_8037BB8C
/* 8037BAA0 003789E0  7C 1C 03 78 */	mr r28, r0
/* 8037BAA4 003789E4  4B F8 DB 71 */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 8037BAA8 003789E8  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TCallbackScrollMsg@ha
/* 8037BAAC 003789EC  C0 42 07 C0 */	lfs f2, lbl_8051EB20@sda21(r2)
/* 8037BAB0 003789F0  38 03 3D 58 */	addi r0, r3, __vt__Q28Morimura18TCallbackScrollMsg@l
/* 8037BAB4 003789F4  C0 22 08 80 */	lfs f1, lbl_8051EBE0@sda21(r2)
/* 8037BAB8 003789F8  90 1C 00 00 */	stw r0, 0(r28)
/* 8037BABC 003789FC  38 60 00 74 */	li r3, 0x74
/* 8037BAC0 00378A00  C0 02 08 84 */	lfs f0, lbl_8051EBE4@sda21(r2)
/* 8037BAC4 00378A04  D0 5C 00 48 */	stfs f2, 0x48(r28)
/* 8037BAC8 00378A08  D0 2D 85 94 */	stfs f1, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BACC 00378A0C  D0 0D 85 98 */	stfs f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BAD0 00378A10  4B CA 83 D5 */	bl __nw__FUl
/* 8037BAD4 00378A14  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BAD8 00378A18  41 82 00 0C */	beq .L_8037BAE4
/* 8037BADC 00378A1C  48 0D 95 69 */	bl __ct__Q35P2JME15IllustratedBook8TControlFv
/* 8037BAE0 00378A20  7C 60 1B 78 */	mr r0, r3
.L_8037BAE4:
/* 8037BAE4 00378A24  90 1C 00 50 */	stw r0, 0x50(r28)
/* 8037BAE8 00378A28  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BAEC 00378A2C  48 0B D0 E9 */	bl init__Q25P2JME8TControlFv
/* 8037BAF0 00378A30  C0 02 08 3C */	lfs f0, lbl_8051EB9C@sda21(r2)
/* 8037BAF4 00378A34  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8037BAF8 00378A38  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BAFC 00378A3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BB00 00378A40  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037BB04 00378A44  7D 89 03 A6 */	mtctr r12
/* 8037BB08 00378A48  4E 80 04 21 */	bctrl 
/* 8037BB0C 00378A4C  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 8037BB10 00378A50  28 04 00 00 */	cmplwi r4, 0
/* 8037BB14 00378A54  41 82 00 74 */	beq .L_8037BB88
/* 8037BB18 00378A58  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8037BB1C 00378A5C  38 BC 00 28 */	addi r5, r28, 0x28
/* 8037BB20 00378A60  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8037BB24 00378A64  38 DC 00 2C */	addi r6, r28, 0x2c
/* 8037BB28 00378A68  48 0C 18 05 */	bl convertU64ToMessageID__5P2JMEFUxPUlPUl
/* 8037BB2C 00378A6C  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB30 00378A70  80 9C 00 28 */	lwz r4, 0x28(r28)
/* 8037BB34 00378A74  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BB38 00378A78  80 BC 00 2C */	lwz r5, 0x2c(r28)
/* 8037BB3C 00378A7C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8037BB40 00378A80  7D 89 03 A6 */	mtctr r12
/* 8037BB44 00378A84  4E 80 04 21 */	bctrl 
/* 8037BB48 00378A88  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB4C 00378A8C  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 8037BB50 00378A90  83 A3 00 40 */	lwz r29, 0x40(r3)
/* 8037BB54 00378A94  7F A3 EB 78 */	mr r3, r29
/* 8037BB58 00378A98  48 0C 13 15 */	bl setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane
/* 8037BB5C 00378A9C  C0 0D 85 94 */	lfs f0, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB60 00378AA0  D0 1D 00 C0 */	stfs f0, 0xc0(r29)
/* 8037BB64 00378AA4  D0 1D 00 C8 */	stfs f0, 0xc8(r29)
/* 8037BB68 00378AA8  C0 0D 85 98 */	lfs f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB6C 00378AAC  D0 1D 01 40 */	stfs f0, 0x140(r29)
/* 8037BB70 00378AB0  C0 0D 85 9C */	lfs f0, mScrollValueCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB74 00378AB4  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB78 00378AB8  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8037BB7C 00378ABC  C0 0D 85 A0 */	lfs f0, mScrollSpeedCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB80 00378AC0  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB84 00378AC4  D0 03 00 70 */	stfs f0, 0x70(r3)
.L_8037BB88:
/* 8037BB88 00378AC8  7F 80 E3 78 */	mr r0, r28
.L_8037BB8C:
/* 8037BB8C 00378ACC  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 8037BB90 00378AD0  3C A0 64 65 */	lis r5, 0x64656D6F@ha
/* 8037BB94 00378AD4  3C 80 00 6D */	lis r4, 0x006D675F@ha
/* 8037BB98 00378AD8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BB9C 00378ADC  38 C5 6D 6F */	addi r6, r5, 0x64656D6F@l
/* 8037BBA0 00378AE0  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 8037BBA4 00378AE4  38 A4 67 5F */	addi r5, r4, 0x006D675F@l
/* 8037BBA8 00378AE8  48 0B 8F 7D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037BBAC 00378AEC  38 60 00 2C */	li r3, 0x2c
/* 8037BBB0 00378AF0  4B CA 82 F5 */	bl __nw__FUl
/* 8037BBB4 00378AF4  7C 7D 1B 79 */	or. r29, r3, r3
/* 8037BBB8 00378AF8  41 82 00 48 */	beq .L_8037BC00
/* 8037BBBC 00378AFC  48 09 57 D5 */	bl __ct__5CNodeFv
/* 8037BBC0 00378B00  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8037BBC4 00378B04  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8037BBC8 00378B08  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8037BBCC 00378B0C  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8037BBD0 00378B10  90 1D 00 00 */	stw r0, 0(r29)
/* 8037BBD4 00378B14  38 A0 00 00 */	li r5, 0
/* 8037BBD8 00378B18  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8037BBDC 00378B1C  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8037BBE0 00378B20  90 BD 00 18 */	stw r5, 0x18(r29)
/* 8037BBE4 00378B24  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037BBE8 00378B28  90 9D 00 00 */	stw r4, 0(r29)
/* 8037BBEC 00378B2C  90 1D 00 00 */	stw r0, 0(r29)
/* 8037BBF0 00378B30  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8037BBF4 00378B34  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8037BBF8 00378B38  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8037BBFC 00378B3C  D0 1D 00 28 */	stfs f0, 0x28(r29)
.L_8037BC00:
/* 8037BC00 00378B40  C0 42 07 C0 */	lfs f2, lbl_8051EB20@sda21(r2)
/* 8037BC04 00378B44  3C 80 64 65 */	lis r4, 0x64656D6F@ha
/* 8037BC08 00378B48  C0 22 08 88 */	lfs f1, lbl_8051EBE8@sda21(r2)
/* 8037BC0C 00378B4C  3C 60 00 6D */	lis r3, 0x006D675F@ha
/* 8037BC10 00378B50  D0 41 00 08 */	stfs f2, 8(r1)
/* 8037BC14 00378B54  7F A7 EB 78 */	mr r7, r29
/* 8037BC18 00378B58  C0 02 08 8C */	lfs f0, lbl_8051EBEC@sda21(r2)
/* 8037BC1C 00378B5C  38 C4 6D 6F */	addi r6, r4, 0x64656D6F@l
/* 8037BC20 00378B60  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8037BC24 00378B64  38 A3 67 5F */	addi r5, r3, 0x006D675F@l
/* 8037BC28 00378B68  80 61 00 08 */	lwz r3, 8(r1)
/* 8037BC2C 00378B6C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8037BC30 00378B70  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8037BC34 00378B74  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 8037BC38 00378B78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8037BC3C 00378B7C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8037BC40 00378B80  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8037BC44 00378B84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037BC48 00378B88  90 7D 00 24 */	stw r3, 0x24(r29)
/* 8037BC4C 00378B8C  90 1D 00 28 */	stw r0, 0x28(r29)
/* 8037BC50 00378B90  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BC54 00378B94  48 0B 8E D1 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037BC58 00378B98  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8037BC5C 00378B9C  54 03 10 3A */	slwi r3, r0, 2
/* 8037BC60 00378BA0  4B CA 83 4D */	bl __nwa__FUl
/* 8037BC64 00378BA4  90 7E 00 04 */	stw r3, 4(r30)
/* 8037BC68 00378BA8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BC6C 00378BAC  4B F8 76 A9 */	bl setAlphaScreen__Q22og6ScreenFP7J2DPane
/* 8037BC70 00378BB0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BC74 00378BB4  3C 80 69 63 */	lis r4, 0x69636F6E@ha
/* 8037BC78 00378BB8  38 C4 6F 6E */	addi r6, r4, 0x69636F6E@l
/* 8037BC7C 00378BBC  38 A0 00 4E */	li r5, 0x4e
/* 8037BC80 00378BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BC84 00378BC4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BC88 00378BC8  7D 89 03 A6 */	mtctr r12
/* 8037BC8C 00378BCC  4E 80 04 21 */	bctrl 
/* 8037BC90 00378BD0  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8037BC94 00378BD4  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 8037BC98 00378BD8  28 00 00 00 */	cmplwi r0, 0
/* 8037BC9C 00378BDC  40 82 00 18 */	bne .L_8037BCB4
/* 8037BCA0 00378BE0  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BCA4 00378BE4  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BCA8 00378BE8  38 80 14 49 */	li r4, 0x1450
/* 8037BCAC 00378BEC  4C C6 31 82 */	crclr 6
/* 8037BCB0 00378BF0  4B CA E9 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BCB4:
/* 8037BCB4 00378BF4  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BCB8 00378BF8  3C A0 6E 6D */	lis r5, 0x6E6D6170@ha
/* 8037BCBC 00378BFC  3C 80 00 50 */	lis r4, 0x00507769@ha
/* 8037BCC0 00378C00  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BCC4 00378C04  38 C5 61 70 */	addi r6, r5, 0x6E6D6170@l
/* 8037BCC8 00378C08  38 A4 77 69 */	addi r5, r4, 0x00507769@l
/* 8037BCCC 00378C0C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BCD0 00378C10  7D 89 03 A6 */	mtctr r12
/* 8037BCD4 00378C14  4E 80 04 21 */	bctrl 
/* 8037BCD8 00378C18  90 7E 00 40 */	stw r3, 0x40(r30)
/* 8037BCDC 00378C1C  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 8037BCE0 00378C20  28 00 00 00 */	cmplwi r0, 0
/* 8037BCE4 00378C24  40 82 00 18 */	bne .L_8037BCFC
/* 8037BCE8 00378C28  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BCEC 00378C2C  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BCF0 00378C30  38 80 14 4D */	li r4, 0x1454
/* 8037BCF4 00378C34  4C C6 31 82 */	crclr 6
/* 8037BCF8 00378C38  4B CA E9 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BCFC:
/* 8037BCFC 00378C3C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BD00 00378C40  3C A0 6F 6E */	lis r5, 0x6F6E5F6C@ha
/* 8037BD04 00378C44  3C 80 50 5F */	lis r4, 0x505F6963@ha
/* 8037BD08 00378C48  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BD0C 00378C4C  38 C5 5F 6C */	addi r6, r5, 0x6F6E5F6C@l
/* 8037BD10 00378C50  38 A4 69 63 */	addi r5, r4, 0x505F6963@l
/* 8037BD14 00378C54  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BD18 00378C58  7D 89 03 A6 */	mtctr r12
/* 8037BD1C 00378C5C  4E 80 04 21 */	bctrl 
/* 8037BD20 00378C60  90 7E 00 44 */	stw r3, 0x44(r30)
/* 8037BD24 00378C64  80 1E 00 44 */	lwz r0, 0x44(r30)
/* 8037BD28 00378C68  28 00 00 00 */	cmplwi r0, 0
/* 8037BD2C 00378C6C  40 82 00 18 */	bne .L_8037BD44
/* 8037BD30 00378C70  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BD34 00378C74  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BD38 00378C78  38 80 14 51 */	li r4, 0x1458
/* 8037BD3C 00378C7C  4C C6 31 82 */	crclr 6
/* 8037BD40 00378C80  4B CA E9 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BD44:
/* 8037BD44 00378C84  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8037BD48 00378C88  38 80 00 00 */	li r4, 0
/* 8037BD4C 00378C8C  38 A0 00 00 */	li r5, 0
/* 8037BD50 00378C90  4B CB D0 5D */	bl setInfluencedAlpha__7J2DPaneFbb
/* 8037BD54 00378C94  38 60 00 44 */	li r3, 0x44
/* 8037BD58 00378C98  4B CA 81 4D */	bl __nw__FUl
/* 8037BD5C 00378C9C  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BD60 00378CA0  41 82 00 0C */	beq .L_8037BD6C
/* 8037BD64 00378CA4  4B F8 94 15 */	bl __ct__Q32og6Screen8AnimPaneFv
/* 8037BD68 00378CA8  7C 60 1B 78 */	mr r0, r3
.L_8037BD6C:
/* 8037BD6C 00378CAC  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8037BD70 00378CB0  3C 80 6F 6E */	lis r4, 0x6F6E5F6C@ha
/* 8037BD74 00378CB4  3C A0 50 5F */	lis r5, 0x505F6963@ha
/* 8037BD78 00378CB8  39 3F 05 DC */	addi r9, r31, 0x5dc
/* 8037BD7C 00378CBC  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 8037BD80 00378CC0  39 04 5F 6C */	addi r8, r4, 0x6F6E5F6C@l
/* 8037BD84 00378CC4  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8037BD88 00378CC8  38 E5 69 63 */	addi r7, r5, 0x505F6963@l
/* 8037BD8C 00378CCC  80 BE 00 08 */	lwz r5, 8(r30)
/* 8037BD90 00378CD0  4B F8 94 89 */	bl init__Q32og6Screen8AnimPaneFP10JKRArchiveP9J2DScreenUxPc
/* 8037BD94 00378CD4  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 8037BD98 00378CD8  38 60 00 44 */	li r3, 0x44
/* 8037BD9C 00378CDC  80 9E 00 28 */	lwz r4, 0x28(r30)
/* 8037BDA0 00378CE0  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 8037BDA4 00378CE4  4B CA 81 01 */	bl __nw__FUl
/* 8037BDA8 00378CE8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BDAC 00378CEC  41 82 00 0C */	beq .L_8037BDB8
/* 8037BDB0 00378CF0  4B F8 93 C9 */	bl __ct__Q32og6Screen8AnimPaneFv
/* 8037BDB4 00378CF4  7C 60 1B 78 */	mr r0, r3
.L_8037BDB8:
/* 8037BDB8 00378CF8  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8037BDBC 00378CFC  3C 80 79 61 */	lis r4, 0x79616A69@ha
/* 8037BDC0 00378D00  3C A0 00 6D */	lis r5, 0x006D675F@ha
/* 8037BDC4 00378D04  39 3F 05 DC */	addi r9, r31, 0x5dc
/* 8037BDC8 00378D08  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8037BDCC 00378D0C  39 04 6A 69 */	addi r8, r4, 0x79616A69@l
/* 8037BDD0 00378D10  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8037BDD4 00378D14  38 E5 67 5F */	addi r7, r5, 0x006D675F@l
/* 8037BDD8 00378D18  80 BE 00 08 */	lwz r5, 8(r30)
/* 8037BDDC 00378D1C  4B F8 94 3D */	bl init__Q32og6Screen8AnimPaneFP10JKRArchiveP9J2DScreenUxPc
/* 8037BDE0 00378D20  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BDE4 00378D24  3C A0 6F 6E */	lis r5, 0x6F6E5F61@ha
/* 8037BDE8 00378D28  3C 80 50 5F */	lis r4, 0x505F6963@ha
/* 8037BDEC 00378D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BDF0 00378D30  38 C5 5F 61 */	addi r6, r5, 0x6F6E5F61@l
/* 8037BDF4 00378D34  38 A4 69 63 */	addi r5, r4, 0x505F6963@l
/* 8037BDF8 00378D38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BDFC 00378D3C  7D 89 03 A6 */	mtctr r12
/* 8037BE00 00378D40  4E 80 04 21 */	bctrl 
/* 8037BE04 00378D44  90 7E 00 48 */	stw r3, 0x48(r30)
/* 8037BE08 00378D48  3C A0 6F 6E */	lis r5, 0x6F6E5F62@ha
/* 8037BE0C 00378D4C  3C 80 50 5F */	lis r4, 0x505F6963@ha
/* 8037BE10 00378D50  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BE14 00378D54  38 C5 5F 62 */	addi r6, r5, 0x6F6E5F62@l
/* 8037BE18 00378D58  38 A4 69 63 */	addi r5, r4, 0x505F6963@l
/* 8037BE1C 00378D5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BE20 00378D60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BE24 00378D64  7D 89 03 A6 */	mtctr r12
/* 8037BE28 00378D68  4E 80 04 21 */	bctrl 
/* 8037BE2C 00378D6C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8037BE30 00378D70  38 60 00 1C */	li r3, 0x1c
/* 8037BE34 00378D74  4B CA 80 71 */	bl __nw__FUl
/* 8037BE38 00378D78  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BE3C 00378D7C  41 82 00 0C */	beq .L_8037BE48
/* 8037BE40 00378D80  4B FA CF C5 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 8037BE44 00378D84  7C 60 1B 78 */	mr r0, r3
.L_8037BE48:
/* 8037BE48 00378D88  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8037BE4C 00378D8C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8037BE50 00378D90  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8037BE54 00378D94  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8037BE58 00378D98  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8037BE5C 00378D9C  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8037BE60 00378DA0  7C 08 03 A6 */	mtlr r0
/* 8037BE64 00378DA4  38 21 00 40 */	addi r1, r1, 0x40
/* 8037BE68 00378DA8  4E 80 00 20 */	blr 
.endfn create__Q28Morimura12TZukanWindowFPCcUl
.else
.fn create__Q28Morimura12TZukanWindowFPCcUl, global
/* 8037B934 00378874  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8037B938 00378878  7C 08 02 A6 */	mflr r0
/* 8037B93C 0037887C  3C C0 80 49 */	lis r6, lbl_80492520@ha
/* 8037B940 00378880  90 01 00 44 */	stw r0, 0x44(r1)
/* 8037B944 00378884  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8037B948 00378888  3B E6 25 20 */	addi r31, r6, lbl_80492520@l
/* 8037B94C 0037888C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8037B950 00378890  7C 7E 1B 78 */	mr r30, r3
/* 8037B954 00378894  38 60 01 48 */	li r3, 0x148
/* 8037B958 00378898  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8037B95C 0037889C  7C BD 2B 78 */	mr r29, r5
/* 8037B960 003788A0  93 81 00 30 */	stw r28, 0x30(r1)
/* 8037B964 003788A4  7C 9C 23 78 */	mr r28, r4
/* 8037B968 003788A8  4B CA 85 3D */	bl __nw__FUl
/* 8037B96C 003788AC  7C 60 1B 79 */	or. r0, r3, r3
/* 8037B970 003788B0  41 82 00 0C */	beq .L_8037B97C
/* 8037B974 003788B4  48 0B 94 39 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8037B978 003788B8  7C 60 1B 78 */	mr r0, r3
.L_8037B97C:
/* 8037B97C 003788BC  90 1E 00 08 */	stw r0, 8(r30)
/* 8037B980 003788C0  7F 84 E3 78 */	mr r4, r28
/* 8037B984 003788C4  7F A5 EB 78 */	mr r5, r29
/* 8037B988 003788C8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037B98C 003788CC  80 DE 00 0C */	lwz r6, 0xc(r30)
/* 8037B990 003788D0  4B CC 3C 95 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8037B994 003788D4  38 60 00 2C */	li r3, 0x2c
/* 8037B998 003788D8  4B CA 85 0D */	bl __nw__FUl
/* 8037B99C 003788DC  7C 7D 1B 79 */	or. r29, r3, r3
/* 8037B9A0 003788E0  41 82 00 48 */	beq .L_8037B9E8
/* 8037B9A4 003788E4  48 09 59 ED */	bl __ct__5CNodeFv
/* 8037B9A8 003788E8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8037B9AC 003788EC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8037B9B0 003788F0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8037B9B4 003788F4  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8037B9B8 003788F8  90 1D 00 00 */	stw r0, 0(r29)
/* 8037B9BC 003788FC  38 A0 00 00 */	li r5, 0
/* 8037B9C0 00378900  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8037B9C4 00378904  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8037B9C8 00378908  90 BD 00 18 */	stw r5, 0x18(r29)
/* 8037B9CC 0037890C  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037B9D0 00378910  90 9D 00 00 */	stw r4, 0(r29)
/* 8037B9D4 00378914  90 1D 00 00 */	stw r0, 0(r29)
/* 8037B9D8 00378918  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8037B9DC 0037891C  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8037B9E0 00378920  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8037B9E4 00378924  D0 1D 00 28 */	stfs f0, 0x28(r29)
.L_8037B9E8:
/* 8037B9E8 00378928  C0 22 07 C0 */	lfs f1, lbl_8051EB20@sda21(r2)
/* 8037B9EC 0037892C  3C 80 64 65 */	lis r4, 0x64656D6F@ha
/* 8037B9F0 00378930  93 BE 00 34 */	stw r29, 0x34(r30)
/* 8037B9F4 00378934  3C 60 00 6D */	lis r3, 0x006D675F@ha
/* 8037B9F8 00378938  C0 02 08 88 */	lfs f0, lbl_8051EBE8@sda21(r2)
/* 8037B9FC 0037893C  38 C4 6D 6F */	addi r6, r4, 0x64656D6F@l
/* 8037BA00 00378940  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8037BA04 00378944  38 A3 67 5F */	addi r5, r3, 0x006D675F@l
/* 8037BA08 00378948  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 8037BA0C 0037894C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8037BA10 00378950  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8037BA14 00378954  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8037BA18 00378958  C0 02 08 8C */	lfs f0, lbl_8051EBEC@sda21(r2)
/* 8037BA1C 0037895C  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8037BA20 00378960  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8037BA24 00378964  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8037BA28 00378968  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8037BA2C 0037896C  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037BA30 00378970  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037BA34 00378974  90 64 00 24 */	stw r3, 0x24(r4)
/* 8037BA38 00378978  90 04 00 28 */	stw r0, 0x28(r4)
/* 8037BA3C 0037897C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BA40 00378980  80 FE 00 34 */	lwz r7, 0x34(r30)
/* 8037BA44 00378984  48 0B 90 E1 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037BA48 00378988  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BA4C 0037898C  3C A0 6E 63 */	lis r5, 0x6E636170@ha
/* 8037BA50 00378990  3C 80 00 57 */	lis r4, 0x00577769@ha
/* 8037BA54 00378994  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BA58 00378998  38 C5 61 70 */	addi r6, r5, 0x6E636170@l
/* 8037BA5C 0037899C  38 A4 77 69 */	addi r5, r4, 0x00577769@l
/* 8037BA60 003789A0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BA64 003789A4  7D 89 03 A6 */	mtctr r12
/* 8037BA68 003789A8  4E 80 04 21 */	bctrl 
/* 8037BA6C 003789AC  90 7E 00 38 */	stw r3, 0x38(r30)
/* 8037BA70 003789B0  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8037BA74 003789B4  28 00 00 00 */	cmplwi r0, 0
/* 8037BA78 003789B8  40 82 00 18 */	bne .L_8037BA90
/* 8037BA7C 003789BC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BA80 003789C0  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BA84 003789C4  38 80 14 39 */	li r4, 0x1439
/* 8037BA88 003789C8  4C C6 31 82 */	crclr 6
/* 8037BA8C 003789CC  4B CA EB B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BA90:
/* 8037BA90 003789D0  38 60 00 58 */	li r3, 0x58
/* 8037BA94 003789D4  4B CA 84 11 */	bl __nw__FUl
/* 8037BA98 003789D8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BA9C 003789DC  41 82 00 F0 */	beq .L_8037BB8C
/* 8037BAA0 003789E0  7C 1C 03 78 */	mr r28, r0
/* 8037BAA4 003789E4  4B F8 DB 71 */	bl __ct__Q32og6Screen16CallBack_MessageFv
/* 8037BAA8 003789E8  3C 60 80 4E */	lis r3, __vt__Q28Morimura18TCallbackScrollMsg@ha
/* 8037BAAC 003789EC  C0 42 07 C0 */	lfs f2, lbl_8051EB20@sda21(r2)
/* 8037BAB0 003789F0  38 03 3D 58 */	addi r0, r3, __vt__Q28Morimura18TCallbackScrollMsg@l
/* 8037BAB4 003789F4  C0 22 08 80 */	lfs f1, lbl_8051EBE0@sda21(r2)
/* 8037BAB8 003789F8  90 1C 00 00 */	stw r0, 0(r28)
/* 8037BABC 003789FC  38 60 00 74 */	li r3, 0x74
/* 8037BAC0 00378A00  C0 02 08 84 */	lfs f0, lbl_8051EBE4@sda21(r2)
/* 8037BAC4 00378A04  D0 5C 00 48 */	stfs f2, 0x48(r28)
/* 8037BAC8 00378A08  D0 2D 85 94 */	stfs f1, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BACC 00378A0C  D0 0D 85 98 */	stfs f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BAD0 00378A10  4B CA 83 D5 */	bl __nw__FUl
/* 8037BAD4 00378A14  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BAD8 00378A18  41 82 00 0C */	beq .L_8037BAE4
/* 8037BADC 00378A1C  48 0D 95 69 */	bl __ct__Q35P2JME15IllustratedBook8TControlFv
/* 8037BAE0 00378A20  7C 60 1B 78 */	mr r0, r3
.L_8037BAE4:
/* 8037BAE4 00378A24  90 1C 00 50 */	stw r0, 0x50(r28)
/* 8037BAE8 00378A28  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BAEC 00378A2C  48 0B D0 E9 */	bl init__Q25P2JME8TControlFv
/* 8037BAF0 00378A30  C0 02 08 3C */	lfs f0, lbl_8051EB9C@sda21(r2)
/* 8037BAF4 00378A34  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8037BAF8 00378A38  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BAFC 00378A3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BB00 00378A40  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037BB04 00378A44  7D 89 03 A6 */	mtctr r12
/* 8037BB08 00378A48  4E 80 04 21 */	bctrl 
/* 8037BB0C 00378A4C  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 8037BB10 00378A50  28 04 00 00 */	cmplwi r4, 0
/* 8037BB14 00378A54  41 82 00 74 */	beq .L_8037BB88
/* 8037BB18 00378A58  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8037BB1C 00378A5C  38 BC 00 28 */	addi r5, r28, 0x28
/* 8037BB20 00378A60  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8037BB24 00378A64  38 DC 00 2C */	addi r6, r28, 0x2c
/* 8037BB28 00378A68  48 0C 18 05 */	bl convertU64ToMessageID__5P2JMEFUxPUlPUl
/* 8037BB2C 00378A6C  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB30 00378A70  80 9C 00 28 */	lwz r4, 0x28(r28)
/* 8037BB34 00378A74  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BB38 00378A78  80 BC 00 2C */	lwz r5, 0x2c(r28)
/* 8037BB3C 00378A7C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8037BB40 00378A80  7D 89 03 A6 */	mtctr r12
/* 8037BB44 00378A84  4E 80 04 21 */	bctrl 
/* 8037BB48 00378A88  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB4C 00378A8C  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 8037BB50 00378A90  83 A3 00 40 */	lwz r29, 0x40(r3)
/* 8037BB54 00378A94  7F A3 EB 78 */	mr r3, r29
/* 8037BB58 00378A98  48 0C 13 15 */	bl setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane
/* 8037BB5C 00378A9C  C0 0D 85 94 */	lfs f0, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB60 00378AA0  D0 1D 00 C0 */	stfs f0, 0xc0(r29)
/* 8037BB64 00378AA4  D0 1D 00 C8 */	stfs f0, 0xc8(r29)
/* 8037BB68 00378AA8  C0 0D 85 98 */	lfs f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB6C 00378AAC  D0 1D 01 40 */	stfs f0, 0x140(r29)
/* 8037BB70 00378AB0  C0 0D 85 9C */	lfs f0, mScrollValueCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB74 00378AB4  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB78 00378AB8  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8037BB7C 00378ABC  C0 0D 85 A0 */	lfs f0, mScrollSpeedCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037BB80 00378AC0  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8037BB84 00378AC4  D0 03 00 70 */	stfs f0, 0x70(r3)
.L_8037BB88:
/* 8037BB88 00378AC8  7F 80 E3 78 */	mr r0, r28
.L_8037BB8C:
/* 8037BB8C 00378ACC  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 8037BB90 00378AD0  3C A0 64 65 */	lis r5, 0x64656D6F@ha
/* 8037BB94 00378AD4  3C 80 00 6D */	lis r4, 0x006D675F@ha
/* 8037BB98 00378AD8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BB9C 00378ADC  38 C5 6D 6F */	addi r6, r5, 0x64656D6F@l
/* 8037BBA0 00378AE0  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 8037BBA4 00378AE4  38 A4 67 5F */	addi r5, r4, 0x006D675F@l
/* 8037BBA8 00378AE8  48 0B 8F 7D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037BBAC 00378AEC  38 60 00 2C */	li r3, 0x2c
/* 8037BBB0 00378AF0  4B CA 82 F5 */	bl __nw__FUl
/* 8037BBB4 00378AF4  7C 7D 1B 79 */	or. r29, r3, r3
/* 8037BBB8 00378AF8  41 82 00 48 */	beq .L_8037BC00
/* 8037BBBC 00378AFC  48 09 57 D5 */	bl __ct__5CNodeFv
/* 8037BBC0 00378B00  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8037BBC4 00378B04  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8037BBC8 00378B08  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 8037BBCC 00378B0C  3C 60 80 4E */	lis r3, __vt__Q28Morimura16TCallbackScissor@ha
/* 8037BBD0 00378B10  90 1D 00 00 */	stw r0, 0(r29)
/* 8037BBD4 00378B14  38 A0 00 00 */	li r5, 0
/* 8037BBD8 00378B18  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8037BBDC 00378B1C  38 03 58 A4 */	addi r0, r3, __vt__Q28Morimura16TCallbackScissor@l
/* 8037BBE0 00378B20  90 BD 00 18 */	stw r5, 0x18(r29)
/* 8037BBE4 00378B24  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037BBE8 00378B28  90 9D 00 00 */	stw r4, 0(r29)
/* 8037BBEC 00378B2C  90 1D 00 00 */	stw r0, 0(r29)
/* 8037BBF0 00378B30  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8037BBF4 00378B34  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 8037BBF8 00378B38  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8037BBFC 00378B3C  D0 1D 00 28 */	stfs f0, 0x28(r29)
.L_8037BC00:
/* 8037BC00 00378B40  C0 42 07 C0 */	lfs f2, lbl_8051EB20@sda21(r2)
/* 8037BC04 00378B44  3C 80 64 65 */	lis r4, 0x64656D6F@ha
/* 8037BC08 00378B48  C0 22 08 88 */	lfs f1, lbl_8051EBE8@sda21(r2)
/* 8037BC0C 00378B4C  3C 60 00 6D */	lis r3, 0x006D675F@ha
/* 8037BC10 00378B50  D0 41 00 08 */	stfs f2, 8(r1)
/* 8037BC14 00378B54  7F A7 EB 78 */	mr r7, r29
/* 8037BC18 00378B58  C0 02 08 8C */	lfs f0, lbl_8051EBEC@sda21(r2)
/* 8037BC1C 00378B5C  38 C4 6D 6F */	addi r6, r4, 0x64656D6F@l
/* 8037BC20 00378B60  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8037BC24 00378B64  38 A3 67 5F */	addi r5, r3, 0x006D675F@l
/* 8037BC28 00378B68  80 61 00 08 */	lwz r3, 8(r1)
/* 8037BC2C 00378B6C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8037BC30 00378B70  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8037BC34 00378B74  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 8037BC38 00378B78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8037BC3C 00378B7C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8037BC40 00378B80  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8037BC44 00378B84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037BC48 00378B88  90 7D 00 24 */	stw r3, 0x24(r29)
/* 8037BC4C 00378B8C  90 1D 00 28 */	stw r0, 0x28(r29)
/* 8037BC50 00378B90  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BC54 00378B94  48 0B 8E D1 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 8037BC58 00378B98  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8037BC5C 00378B9C  54 03 10 3A */	slwi r3, r0, 2
/* 8037BC60 00378BA0  4B CA 83 4D */	bl __nwa__FUl
/* 8037BC64 00378BA4  90 7E 00 04 */	stw r3, 4(r30)
/* 8037BC68 00378BA8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BC6C 00378BAC  4B F8 76 A9 */	bl setAlphaScreen__Q22og6ScreenFP7J2DPane
/* 8037BC70 00378BB0  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BC74 00378BB4  3C 80 69 63 */	lis r4, 0x69636F6E@ha
/* 8037BC78 00378BB8  38 C4 6F 6E */	addi r6, r4, 0x69636F6E@l
/* 8037BC7C 00378BBC  38 A0 00 4E */	li r5, 0x4e
/* 8037BC80 00378BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BC84 00378BC4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BC88 00378BC8  7D 89 03 A6 */	mtctr r12
/* 8037BC8C 00378BCC  4E 80 04 21 */	bctrl 
/* 8037BC90 00378BD0  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8037BC94 00378BD4  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 8037BC98 00378BD8  28 00 00 00 */	cmplwi r0, 0
/* 8037BC9C 00378BDC  40 82 00 18 */	bne .L_8037BCB4
/* 8037BCA0 00378BE0  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BCA4 00378BE4  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BCA8 00378BE8  38 80 14 49 */	li r4, 0x1449
/* 8037BCAC 00378BEC  4C C6 31 82 */	crclr 6
/* 8037BCB0 00378BF0  4B CA E9 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BCB4:
/* 8037BCB4 00378BF4  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BCB8 00378BF8  3C A0 6E 6D */	lis r5, 0x6E6D6170@ha
/* 8037BCBC 00378BFC  3C 80 00 50 */	lis r4, 0x00507769@ha
/* 8037BCC0 00378C00  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BCC4 00378C04  38 C5 61 70 */	addi r6, r5, 0x6E6D6170@l
/* 8037BCC8 00378C08  38 A4 77 69 */	addi r5, r4, 0x00507769@l
/* 8037BCCC 00378C0C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BCD0 00378C10  7D 89 03 A6 */	mtctr r12
/* 8037BCD4 00378C14  4E 80 04 21 */	bctrl 
/* 8037BCD8 00378C18  90 7E 00 40 */	stw r3, 0x40(r30)
/* 8037BCDC 00378C1C  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 8037BCE0 00378C20  28 00 00 00 */	cmplwi r0, 0
/* 8037BCE4 00378C24  40 82 00 18 */	bne .L_8037BCFC
/* 8037BCE8 00378C28  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BCEC 00378C2C  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BCF0 00378C30  38 80 14 4D */	li r4, 0x144d
/* 8037BCF4 00378C34  4C C6 31 82 */	crclr 6
/* 8037BCF8 00378C38  4B CA E9 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BCFC:
/* 8037BCFC 00378C3C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BD00 00378C40  3C A0 6F 6E */	lis r5, 0x6F6E5F6C@ha
/* 8037BD04 00378C44  3C 80 50 5F */	lis r4, 0x505F6963@ha
/* 8037BD08 00378C48  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BD0C 00378C4C  38 C5 5F 6C */	addi r6, r5, 0x6F6E5F6C@l
/* 8037BD10 00378C50  38 A4 69 63 */	addi r5, r4, 0x505F6963@l
/* 8037BD14 00378C54  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BD18 00378C58  7D 89 03 A6 */	mtctr r12
/* 8037BD1C 00378C5C  4E 80 04 21 */	bctrl 
/* 8037BD20 00378C60  90 7E 00 44 */	stw r3, 0x44(r30)
/* 8037BD24 00378C64  80 1E 00 44 */	lwz r0, 0x44(r30)
/* 8037BD28 00378C68  28 00 00 00 */	cmplwi r0, 0
/* 8037BD2C 00378C6C  40 82 00 18 */	bne .L_8037BD44
/* 8037BD30 00378C70  38 7F 00 0C */	addi r3, r31, 0xc
/* 8037BD34 00378C74  38 BF 00 18 */	addi r5, r31, 0x18
/* 8037BD38 00378C78  38 80 14 51 */	li r4, 0x1451
/* 8037BD3C 00378C7C  4C C6 31 82 */	crclr 6
/* 8037BD40 00378C80  4B CA E9 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037BD44:
/* 8037BD44 00378C84  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8037BD48 00378C88  38 80 00 00 */	li r4, 0
/* 8037BD4C 00378C8C  38 A0 00 00 */	li r5, 0
/* 8037BD50 00378C90  4B CB D0 5D */	bl setInfluencedAlpha__7J2DPaneFbb
/* 8037BD54 00378C94  38 60 00 44 */	li r3, 0x44
/* 8037BD58 00378C98  4B CA 81 4D */	bl __nw__FUl
/* 8037BD5C 00378C9C  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BD60 00378CA0  41 82 00 0C */	beq .L_8037BD6C
/* 8037BD64 00378CA4  4B F8 94 15 */	bl __ct__Q32og6Screen8AnimPaneFv
/* 8037BD68 00378CA8  7C 60 1B 78 */	mr r0, r3
.L_8037BD6C:
/* 8037BD6C 00378CAC  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8037BD70 00378CB0  3C 80 6F 6E */	lis r4, 0x6F6E5F6C@ha
/* 8037BD74 00378CB4  3C A0 50 5F */	lis r5, 0x505F6963@ha
/* 8037BD78 00378CB8  39 3F 05 DC */	addi r9, r31, 0x5dc
/* 8037BD7C 00378CBC  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 8037BD80 00378CC0  39 04 5F 6C */	addi r8, r4, 0x6F6E5F6C@l
/* 8037BD84 00378CC4  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8037BD88 00378CC8  38 E5 69 63 */	addi r7, r5, 0x505F6963@l
/* 8037BD8C 00378CCC  80 BE 00 08 */	lwz r5, 8(r30)
/* 8037BD90 00378CD0  4B F8 94 89 */	bl init__Q32og6Screen8AnimPaneFP10JKRArchiveP9J2DScreenUxPc
/* 8037BD94 00378CD4  C0 02 07 CC */	lfs f0, lbl_8051EB2C@sda21(r2)
/* 8037BD98 00378CD8  38 60 00 44 */	li r3, 0x44
/* 8037BD9C 00378CDC  80 9E 00 28 */	lwz r4, 0x28(r30)
/* 8037BDA0 00378CE0  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 8037BDA4 00378CE4  4B CA 81 01 */	bl __nw__FUl
/* 8037BDA8 00378CE8  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BDAC 00378CEC  41 82 00 0C */	beq .L_8037BDB8
/* 8037BDB0 00378CF0  4B F8 93 C9 */	bl __ct__Q32og6Screen8AnimPaneFv
/* 8037BDB4 00378CF4  7C 60 1B 78 */	mr r0, r3
.L_8037BDB8:
/* 8037BDB8 00378CF8  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8037BDBC 00378CFC  3C 80 79 61 */	lis r4, 0x79616A69@ha
/* 8037BDC0 00378D00  3C A0 00 6D */	lis r5, 0x006D675F@ha
/* 8037BDC4 00378D04  39 3F 05 DC */	addi r9, r31, 0x5dc
/* 8037BDC8 00378D08  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8037BDCC 00378D0C  39 04 6A 69 */	addi r8, r4, 0x79616A69@l
/* 8037BDD0 00378D10  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8037BDD4 00378D14  38 E5 67 5F */	addi r7, r5, 0x006D675F@l
/* 8037BDD8 00378D18  80 BE 00 08 */	lwz r5, 8(r30)
/* 8037BDDC 00378D1C  4B F8 94 3D */	bl init__Q32og6Screen8AnimPaneFP10JKRArchiveP9J2DScreenUxPc
/* 8037BDE0 00378D20  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BDE4 00378D24  3C A0 6F 6E */	lis r5, 0x6F6E5F61@ha
/* 8037BDE8 00378D28  3C 80 50 5F */	lis r4, 0x505F6963@ha
/* 8037BDEC 00378D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BDF0 00378D30  38 C5 5F 61 */	addi r6, r5, 0x6F6E5F61@l
/* 8037BDF4 00378D34  38 A4 69 63 */	addi r5, r4, 0x505F6963@l
/* 8037BDF8 00378D38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BDFC 00378D3C  7D 89 03 A6 */	mtctr r12
/* 8037BE00 00378D40  4E 80 04 21 */	bctrl 
/* 8037BE04 00378D44  90 7E 00 48 */	stw r3, 0x48(r30)
/* 8037BE08 00378D48  3C A0 6F 6E */	lis r5, 0x6F6E5F62@ha
/* 8037BE0C 00378D4C  3C 80 50 5F */	lis r4, 0x505F6963@ha
/* 8037BE10 00378D50  80 7E 00 08 */	lwz r3, 8(r30)
/* 8037BE14 00378D54  38 C5 5F 62 */	addi r6, r5, 0x6F6E5F62@l
/* 8037BE18 00378D58  38 A4 69 63 */	addi r5, r4, 0x505F6963@l
/* 8037BE1C 00378D5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BE20 00378D60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8037BE24 00378D64  7D 89 03 A6 */	mtctr r12
/* 8037BE28 00378D68  4E 80 04 21 */	bctrl 
/* 8037BE2C 00378D6C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8037BE30 00378D70  38 60 00 1C */	li r3, 0x1c
/* 8037BE34 00378D74  4B CA 80 71 */	bl __nw__FUl
/* 8037BE38 00378D78  7C 60 1B 79 */	or. r0, r3, r3
/* 8037BE3C 00378D7C  41 82 00 0C */	beq .L_8037BE48
/* 8037BE40 00378D80  4B FA CF C5 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 8037BE44 00378D84  7C 60 1B 78 */	mr r0, r3
.L_8037BE48:
/* 8037BE48 00378D88  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8037BE4C 00378D8C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8037BE50 00378D90  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8037BE54 00378D94  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8037BE58 00378D98  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8037BE5C 00378D9C  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8037BE60 00378DA0  7C 08 03 A6 */	mtlr r0
/* 8037BE64 00378DA4  38 21 00 40 */	addi r1, r1, 0x40
/* 8037BE68 00378DA8  4E 80 00 20 */	blr 
.endfn create__Q28Morimura12TZukanWindowFPCcUl
.endif

.fn update__Q28Morimura12TZukanWindowFv, global
/* 8037BE6C 00378DAC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8037BE70 00378DB0  7C 08 02 A6 */	mflr r0
/* 8037BE74 00378DB4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8037BE78 00378DB8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8037BE7C 00378DBC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8037BE80 00378DC0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8037BE84 00378DC4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8037BE88 00378DC8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8037BE8C 00378DCC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8037BE90 00378DD0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8037BE94 00378DD4  7C 7F 1B 78 */	mr r31, r3
/* 8037BE98 00378DD8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8037BE9C 00378DDC  2C 00 00 02 */	cmpwi r0, 2
/* 8037BEA0 00378DE0  41 82 00 78 */	beq .L_8037BF18
/* 8037BEA4 00378DE4  40 80 00 14 */	bge .L_8037BEB8
/* 8037BEA8 00378DE8  2C 00 00 00 */	cmpwi r0, 0
/* 8037BEAC 00378DEC  41 82 03 24 */	beq .L_8037C1D0
/* 8037BEB0 00378DF0  40 80 00 18 */	bge .L_8037BEC8
/* 8037BEB4 00378DF4  48 00 00 B0 */	b .L_8037BF64
.L_8037BEB8:
/* 8037BEB8 00378DF8  2C 00 00 04 */	cmpwi r0, 4
/* 8037BEBC 00378DFC  40 80 00 A8 */	bge .L_8037BF64
/* 8037BEC0 00378E00  48 00 00 78 */	b .L_8037BF38
/* 8037BEC4 00378E04  48 00 03 0C */	b .L_8037C1D0
.L_8037BEC8:
/* 8037BEC8 00378E08  80 7F 00 04 */	lwz r3, 4(r31)
/* 8037BECC 00378E0C  C0 82 07 C0 */	lfs f4, lbl_8051EB20@sda21(r2)
/* 8037BED0 00378E10  80 63 00 00 */	lwz r3, 0(r3)
/* 8037BED4 00378E14  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8037BED8 00378E18  FC 04 00 00 */	fcmpu cr0, f4, f0
/* 8037BEDC 00378E1C  40 82 00 18 */	bne .L_8037BEF4
/* 8037BEE0 00378E20  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8037BEE4 00378E24  C0 22 07 CC */	lfs f1, lbl_8051EB2C@sda21(r2)
/* 8037BEE8 00378E28  C0 42 08 70 */	lfs f2, lbl_8051EBD0@sda21(r2)
/* 8037BEEC 00378E2C  C0 62 08 14 */	lfs f3, lbl_8051EB74@sda21(r2)
/* 8037BEF0 00378E30  4B FA CF E9 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_8037BEF4:
/* 8037BEF4 00378E34  80 7F 00 04 */	lwz r3, 4(r31)
/* 8037BEF8 00378E38  C0 02 08 90 */	lfs f0, lbl_8051EBF0@sda21(r2)
/* 8037BEFC 00378E3C  80 63 00 00 */	lwz r3, 0(r3)
/* 8037BF00 00378E40  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8037BF04 00378E44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037BF08 00378E48  40 81 00 5C */	ble .L_8037BF64
/* 8037BF0C 00378E4C  38 00 00 02 */	li r0, 2
/* 8037BF10 00378E50  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8037BF14 00378E54  48 00 00 50 */	b .L_8037BF64
.L_8037BF18:
/* 8037BF18 00378E58  80 7F 00 04 */	lwz r3, 4(r31)
/* 8037BF1C 00378E5C  C0 02 08 90 */	lfs f0, lbl_8051EBF0@sda21(r2)
/* 8037BF20 00378E60  80 63 00 00 */	lwz r3, 0(r3)
/* 8037BF24 00378E64  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8037BF28 00378E68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037BF2C 00378E6C  40 81 00 38 */	ble .L_8037BF64
/* 8037BF30 00378E70  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8037BF34 00378E74  48 00 00 30 */	b .L_8037BF64
.L_8037BF38:
/* 8037BF38 00378E78  80 7F 00 04 */	lwz r3, 4(r31)
/* 8037BF3C 00378E7C  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 8037BF40 00378E80  80 63 00 00 */	lwz r3, 0(r3)
/* 8037BF44 00378E84  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8037BF48 00378E88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037BF4C 00378E8C  4C 40 13 82 */	cror 2, 0, 2
/* 8037BF50 00378E90  40 82 00 14 */	bne .L_8037BF64
/* 8037BF54 00378E94  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037BF58 00378E98  38 00 00 00 */	li r0, 0
/* 8037BF5C 00378E9C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8037BF60 00378EA0  90 1F 00 20 */	stw r0, 0x20(r31)
.L_8037BF64:
/* 8037BF64 00378EA4  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037BF68 00378EA8  28 03 00 00 */	cmplwi r3, 0
/* 8037BF6C 00378EAC  41 82 01 E8 */	beq .L_8037C154
/* 8037BF70 00378EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037BF74 00378EB4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8037BF78 00378EB8  7D 89 03 A6 */	mtctr r12
/* 8037BF7C 00378EBC  4E 80 04 21 */	bctrl 
/* 8037BF80 00378EC0  C3 C2 08 94 */	lfs f30, lbl_8051EBF4@sda21(r2)
/* 8037BF84 00378EC4  3B A0 00 00 */	li r29, 0
/* 8037BF88 00378EC8  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
/* 8037BF8C 00378ECC  3B C0 00 00 */	li r30, 0
/* 8037BF90 00378ED0  48 00 00 38 */	b .L_8037BFC8
.L_8037BF94:
/* 8037BF94 00378ED4  80 7F 00 04 */	lwz r3, 4(r31)
/* 8037BF98 00378ED8  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037BF9C 00378EDC  4B F8 8E 75 */	bl update__Q32og6Screen12AnimBaseBaseFv
/* 8037BFA0 00378EE0  2C 1D 00 00 */	cmpwi r29, 0
/* 8037BFA4 00378EE4  40 81 00 1C */	ble .L_8037BFC0
/* 8037BFA8 00378EE8  80 7F 00 04 */	lwz r3, 4(r31)
/* 8037BFAC 00378EEC  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8037BFB0 00378EF0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8037BFB4 00378EF4  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8037BFB8 00378EF8  40 81 00 08 */	ble .L_8037BFC0
/* 8037BFBC 00378EFC  D3 E3 00 18 */	stfs f31, 0x18(r3)
.L_8037BFC0:
/* 8037BFC0 00378F00  3B DE 00 04 */	addi r30, r30, 4
/* 8037BFC4 00378F04  3B BD 00 01 */	addi r29, r29, 1
.L_8037BFC8:
/* 8037BFC8 00378F08  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8037BFCC 00378F0C  7C 1D 00 00 */	cmpw r29, r0
/* 8037BFD0 00378F10  41 80 FF C4 */	blt .L_8037BF94
/* 8037BFD4 00378F14  80 9F 00 04 */	lwz r4, 4(r31)
/* 8037BFD8 00378F18  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8037BFDC 00378F1C  80 84 00 04 */	lwz r4, 4(r4)
/* 8037BFE0 00378F20  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8037BFE4 00378F24  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8037BFE8 00378F28  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8037BFEC 00378F2C  4B F8 8E 25 */	bl update__Q32og6Screen12AnimBaseBaseFv
/* 8037BFF0 00378F30  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8037BFF4 00378F34  4B F8 8E 1D */	bl update__Q32og6Screen12AnimBaseBaseFv
/* 8037BFF8 00378F38  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8037BFFC 00378F3C  C0 02 08 98 */	lfs f0, lbl_8051EBF8@sda21(r2)
/* 8037C000 00378F40  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8037C004 00378F44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037C008 00378F48  40 81 00 0C */	ble .L_8037C014
/* 8037C00C 00378F4C  C0 02 08 9C */	lfs f0, lbl_8051EBFC@sda21(r2)
/* 8037C010 00378F50  D0 03 00 18 */	stfs f0, 0x18(r3)
.L_8037C014:
/* 8037C014 00378F54  80 7F 00 08 */	lwz r3, 8(r31)
/* 8037C018 00378F58  4B CC 4B 15 */	bl animation__9J2DScreenFv
/* 8037C01C 00378F5C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8037C020 00378F60  4B FA CF 65 */	bl calc__Q32og6Screen8ScaleMgrFv
/* 8037C024 00378F64  80 7F 00 04 */	lwz r3, 4(r31)
/* 8037C028 00378F68  C0 82 07 EC */	lfs f4, lbl_8051EB4C@sda21(r2)
/* 8037C02C 00378F6C  80 63 00 00 */	lwz r3, 0(r3)
/* 8037C030 00378F70  C0 42 08 90 */	lfs f2, lbl_8051EBF0@sda21(r2)
/* 8037C034 00378F74  C0 63 00 18 */	lfs f3, 0x18(r3)
/* 8037C038 00378F78  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 8037C03C 00378F7C  EC 64 00 F2 */	fmuls f3, f4, f3
/* 8037C040 00378F80  EC 43 10 24 */	fdivs f2, f3, f2
/* 8037C044 00378F84  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8037C048 00378F88  40 81 00 08 */	ble .L_8037C050
/* 8037C04C 00378F8C  FC 40 00 90 */	fmr f2, f0
.L_8037C050:
/* 8037C050 00378F90  EC 02 00 72 */	fmuls f0, f2, f1
/* 8037C054 00378F94  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8037C058 00378F98  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 8037C05C 00378F9C  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8037C060 00378FA0  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C064 00378FA4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037C068 00378FA8  7D 89 03 A6 */	mtctr r12
/* 8037C06C 00378FAC  4E 80 04 21 */	bctrl 
/* 8037C070 00378FB0  C0 5F 00 54 */	lfs f2, 0x54(r31)
/* 8037C074 00378FB4  C0 22 07 E0 */	lfs f1, lbl_8051EB40@sda21(r2)
/* 8037C078 00378FB8  C0 02 08 40 */	lfs f0, lbl_8051EBA0@sda21(r2)
/* 8037C07C 00378FBC  EC 22 08 2A */	fadds f1, f2, f1
/* 8037C080 00378FC0  D0 3F 00 54 */	stfs f1, 0x54(r31)
/* 8037C084 00378FC4  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8037C088 00378FC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037C08C 00378FCC  40 81 00 0C */	ble .L_8037C098
/* 8037C090 00378FD0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037C094 00378FD4  D0 1F 00 54 */	stfs f0, 0x54(r31)
.L_8037C098:
/* 8037C098 00378FD8  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 8037C09C 00378FDC  88 0D 85 92 */	lbz r0, mIconMove__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C0A0 00378FE0  FC 00 02 10 */	fabs f0, f0
/* 8037C0A4 00378FE4  C0 22 08 84 */	lfs f1, lbl_8051EBE4@sda21(r2)
/* 8037C0A8 00378FE8  28 00 00 00 */	cmplwi r0, 0
/* 8037C0AC 00378FEC  FC 00 00 18 */	frsp f0, f0
/* 8037C0B0 00378FF0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8037C0B4 00378FF4  EC A0 08 24 */	fdivs f5, f0, f1
/* 8037C0B8 00378FF8  41 82 00 9C */	beq .L_8037C154
/* 8037C0BC 00378FFC  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8037C0C0 00379000  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037C0C4 00379004  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8037C0C8 00379008  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037C0CC 0037900C  C0 83 00 D8 */	lfs f4, 0xd8(r3)
/* 8037C0D0 00379010  40 80 00 30 */	bge .L_8037C100
/* 8037C0D4 00379014  C0 02 08 48 */	lfs f0, lbl_8051EBA8@sda21(r2)
/* 8037C0D8 00379018  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8037C0DC 0037901C  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 8037C0E0 00379020  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037C0E4 00379024  FC 00 00 1E */	fctiwz f0, f0
/* 8037C0E8 00379028  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8037C0EC 0037902C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8037C0F0 00379030  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8037C0F4 00379034  7C 04 04 2E */	lfsx f0, r4, r0
/* 8037C0F8 00379038  FC 60 00 50 */	fneg f3, f0
/* 8037C0FC 0037903C  48 00 00 28 */	b .L_8037C124
.L_8037C100:
/* 8037C100 00379040  C0 02 08 4C */	lfs f0, lbl_8051EBAC@sda21(r2)
/* 8037C104 00379044  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8037C108 00379048  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 8037C10C 0037904C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8037C110 00379050  FC 00 00 1E */	fctiwz f0, f0
/* 8037C114 00379054  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8037C118 00379058  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8037C11C 0037905C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8037C120 00379060  7C 64 04 2E */	lfsx f3, r4, r0
.L_8037C124:
/* 8037C124 00379064  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 8037C128 00379068  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8037C12C 0037906C  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8037C130 00379070  EC 42 20 2A */	fadds f2, f2, f4
/* 8037C134 00379074  EC 01 00 2A */	fadds f0, f1, f0
/* 8037C138 00379078  EC 25 10 FA */	fmadds f1, f5, f3, f2
/* 8037C13C 0037907C  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 8037C140 00379080  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8037C144 00379084  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C148 00379088  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8037C14C 0037908C  7D 89 03 A6 */	mtctr r12
/* 8037C150 00379090  4E 80 04 21 */	bctrl 
.L_8037C154:
/* 8037C154 00379094  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8037C158 00379098  38 61 00 14 */	addi r3, r1, 0x14
/* 8037C15C 0037909C  38 A0 00 00 */	li r5, 0
/* 8037C160 003790A0  4B CB CE 39 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037C164 003790A4  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 8037C168 003790A8  38 61 00 08 */	addi r3, r1, 8
/* 8037C16C 003790AC  C3 E1 00 18 */	lfs f31, 0x18(r1)
/* 8037C170 003790B0  38 A0 00 03 */	li r5, 3
/* 8037C174 003790B4  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8037C178 003790B8  4B CB CE 21 */	bl getGlbVtx__7J2DPaneCFUc
/* 8037C17C 003790BC  C0 22 08 38 */	lfs f1, lbl_8051EB98@sda21(r2)
/* 8037C180 003790C0  C0 02 07 E4 */	lfs f0, lbl_8051EB44@sda21(r2)
/* 8037C184 003790C4  EF DE 08 2A */	fadds f30, f30, f1
/* 8037C188 003790C8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8037C18C 003790CC  EF FF 00 2A */	fadds f31, f31, f0
/* 8037C190 003790D0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8037C194 003790D4  EC 42 08 28 */	fsubs f2, f2, f1
/* 8037C198 003790D8  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 8037C19C 003790DC  D3 C1 00 20 */	stfs f30, 0x20(r1)
/* 8037C1A0 003790E0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8037C1A4 003790E4  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 8037C1A8 003790E8  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8037C1AC 003790EC  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8037C1B0 003790F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037C1B4 003790F4  90 64 00 1C */	stw r3, 0x1c(r4)
/* 8037C1B8 003790F8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8037C1BC 003790FC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8037C1C0 00379100  90 04 00 20 */	stw r0, 0x20(r4)
/* 8037C1C4 00379104  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8037C1C8 00379108  90 64 00 24 */	stw r3, 0x24(r4)
/* 8037C1CC 0037910C  90 04 00 28 */	stw r0, 0x28(r4)
.L_8037C1D0:
/* 8037C1D0 00379110  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8037C1D4 00379114  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8037C1D8 00379118  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8037C1DC 0037911C  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8037C1E0 00379120  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8037C1E4 00379124  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8037C1E8 00379128  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8037C1EC 0037912C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8037C1F0 00379130  7C 08 03 A6 */	mtlr r0
/* 8037C1F4 00379134  38 21 00 70 */	addi r1, r1, 0x70
/* 8037C1F8 00379138  4E 80 00 20 */	blr 
.endfn update__Q28Morimura12TZukanWindowFv

.fn draw__Q28Morimura12TZukanWindowFR8GraphicsP13J2DPerspGraph, global
/* 8037C1FC 0037913C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C200 00379140  7C 08 02 A6 */	mflr r0
/* 8037C204 00379144  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C208 00379148  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8037C20C 0037914C  2C 00 00 00 */	cmpwi r0, 0
/* 8037C210 00379150  41 82 00 08 */	beq .L_8037C218
/* 8037C214 00379154  48 02 53 85 */	bl draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
.L_8037C218:
/* 8037C218 00379158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C21C 0037915C  7C 08 03 A6 */	mtlr r0
/* 8037C220 00379160  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C224 00379164  4E 80 00 20 */	blr 
.endfn draw__Q28Morimura12TZukanWindowFR8GraphicsP13J2DPerspGraph

.fn windowOpen__Q28Morimura12TZukanWindowFv, global
/* 8037C228 00379168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C22C 0037916C  7C 08 02 A6 */	mflr r0
/* 8037C230 00379170  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037C234 00379174  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C238 00379178  38 00 00 01 */	li r0, 1
/* 8037C23C 0037917C  C0 22 07 CC */	lfs f1, lbl_8051EB2C@sda21(r2)
/* 8037C240 00379180  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037C244 00379184  93 C1 00 08 */	stw r30, 8(r1)
/* 8037C248 00379188  80 83 00 04 */	lwz r4, 4(r3)
/* 8037C24C 0037918C  80 84 00 00 */	lwz r4, 0(r4)
/* 8037C250 00379190  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 8037C254 00379194  C0 02 08 3C */	lfs f0, lbl_8051EB9C@sda21(r2)
/* 8037C258 00379198  80 83 00 04 */	lwz r4, 4(r3)
/* 8037C25C 0037919C  80 84 00 00 */	lwz r4, 0(r4)
/* 8037C260 003791A0  D0 24 00 20 */	stfs f1, 0x20(r4)
/* 8037C264 003791A4  90 03 00 20 */	stw r0, 0x20(r3)
/* 8037C268 003791A8  83 C3 00 2C */	lwz r30, 0x2c(r3)
/* 8037C26C 003791AC  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 8037C270 003791B0  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037C274 003791B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C278 003791B8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8037C27C 003791BC  7D 89 03 A6 */	mtctr r12
/* 8037C280 003791C0  4E 80 04 21 */	bctrl 
/* 8037C284 003791C4  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8037C288 003791C8  28 04 00 00 */	cmplwi r4, 0
/* 8037C28C 003791CC  41 82 00 74 */	beq .L_8037C300
/* 8037C290 003791D0  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8037C294 003791D4  38 BE 00 28 */	addi r5, r30, 0x28
/* 8037C298 003791D8  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8037C29C 003791DC  38 DE 00 2C */	addi r6, r30, 0x2c
/* 8037C2A0 003791E0  48 0C 10 8D */	bl convertU64ToMessageID__5P2JMEFUxPUlPUl
/* 8037C2A4 003791E4  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037C2A8 003791E8  80 9E 00 28 */	lwz r4, 0x28(r30)
/* 8037C2AC 003791EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C2B0 003791F0  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 8037C2B4 003791F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8037C2B8 003791F8  7D 89 03 A6 */	mtctr r12
/* 8037C2BC 003791FC  4E 80 04 21 */	bctrl 
/* 8037C2C0 00379200  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037C2C4 00379204  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 8037C2C8 00379208  83 E3 00 40 */	lwz r31, 0x40(r3)
/* 8037C2CC 0037920C  7F E3 FB 78 */	mr r3, r31
/* 8037C2D0 00379210  48 0C 0B 9D */	bl setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane
/* 8037C2D4 00379214  C0 0D 85 94 */	lfs f0, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C2D8 00379218  D0 1F 00 C0 */	stfs f0, 0xc0(r31)
/* 8037C2DC 0037921C  D0 1F 00 C8 */	stfs f0, 0xc8(r31)
/* 8037C2E0 00379220  C0 0D 85 98 */	lfs f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C2E4 00379224  D0 1F 01 40 */	stfs f0, 0x140(r31)
/* 8037C2E8 00379228  C0 0D 85 9C */	lfs f0, mScrollValueCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C2EC 0037922C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037C2F0 00379230  D0 03 00 6C */	stfs f0, 0x6c(r3)
/* 8037C2F4 00379234  C0 0D 85 A0 */	lfs f0, mScrollSpeedCoe__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C2F8 00379238  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8037C2FC 0037923C  D0 03 00 70 */	stfs f0, 0x70(r3)
.L_8037C300:
/* 8037C300 00379240  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C304 00379244  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037C308 00379248  83 C1 00 08 */	lwz r30, 8(r1)
/* 8037C30C 0037924C  7C 08 03 A6 */	mtlr r0
/* 8037C310 00379250  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C314 00379254  4E 80 00 20 */	blr 
.endfn windowOpen__Q28Morimura12TZukanWindowFv

.fn windowClose__Q28Morimura12TZukanWindowFv, global
/* 8037C318 00379258  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8037C31C 0037925C  2C 00 00 02 */	cmpwi r0, 2
/* 8037C320 00379260  41 82 00 0C */	beq .L_8037C32C
/* 8037C324 00379264  2C 00 00 01 */	cmpwi r0, 1
/* 8037C328 00379268  40 82 00 14 */	bne .L_8037C33C
.L_8037C32C:
/* 8037C32C 0037926C  80 83 00 04 */	lwz r4, 4(r3)
/* 8037C330 00379270  C0 02 08 04 */	lfs f0, lbl_8051EB64@sda21(r2)
/* 8037C334 00379274  80 84 00 00 */	lwz r4, 0(r4)
/* 8037C338 00379278  D0 04 00 20 */	stfs f0, 0x20(r4)
.L_8037C33C:
/* 8037C33C 0037927C  38 00 00 03 */	li r0, 3
/* 8037C340 00379280  90 03 00 20 */	stw r0, 0x20(r3)
/* 8037C344 00379284  4E 80 00 20 */	blr 
.endfn windowClose__Q28Morimura12TZukanWindowFv

.fn msgScroll__Q28Morimura12TZukanWindowFf, global
/* 8037C348 00379288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C34C 0037928C  7C 08 02 A6 */	mflr r0
/* 8037C350 00379290  C0 02 07 E4 */	lfs f0, lbl_8051EB44@sda21(r2)
/* 8037C354 00379294  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C358 00379298  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8037C35C 0037929C  C0 43 00 48 */	lfs f2, 0x48(r3)
/* 8037C360 003792A0  EC 02 00 2A */	fadds f0, f2, f0
/* 8037C364 003792A4  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8037C368 003792A8  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8037C36C 003792AC  48 0D 8D D9 */	bl scroll__Q35P2JME15IllustratedBook8TControlFf
/* 8037C370 003792B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C374 003792B4  7C 08 03 A6 */	mtlr r0
/* 8037C378 003792B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C37C 003792BC  4E 80 00 20 */	blr 
.endfn msgScroll__Q28Morimura12TZukanWindowFf

.fn getPosRate__Q28Morimura12TZukanWindowFv, global
/* 8037C380 003792C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C384 003792C4  7C 08 02 A6 */	mflr r0
/* 8037C388 003792C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C38C 003792CC  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8037C390 003792D0  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8037C394 003792D4  48 0D 8D 89 */	bl getScrollPosition__Q35P2JME15IllustratedBook8TControlFv
/* 8037C398 003792D8  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 8037C39C 003792DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C3A0 003792E0  EC 20 08 28 */	fsubs f1, f0, f1
/* 8037C3A4 003792E4  7C 08 03 A6 */	mtlr r0
/* 8037C3A8 003792E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C3AC 003792EC  4E 80 00 20 */	blr 
.endfn getPosRate__Q28Morimura12TZukanWindowFv

.fn setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10, global
/* 8037C3B0 003792F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C3B4 003792F4  7C 08 02 A6 */	mflr r0
/* 8037C3B8 003792F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C3BC 003792FC  A8 04 00 00 */	lha r0, 0(r4)
/* 8037C3C0 00379300  B0 01 00 08 */	sth r0, 8(r1)
/* 8037C3C4 00379304  A8 04 00 02 */	lha r0, 2(r4)
/* 8037C3C8 00379308  B0 01 00 0A */	sth r0, 0xa(r1)
/* 8037C3CC 0037930C  A8 04 00 04 */	lha r0, 4(r4)
/* 8037C3D0 00379310  B0 01 00 0C */	sth r0, 0xc(r1)
/* 8037C3D4 00379314  A8 04 00 06 */	lha r0, 6(r4)
/* 8037C3D8 00379318  B0 01 00 0E */	sth r0, 0xe(r1)
/* 8037C3DC 0037931C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8037C3E0 00379320  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C3E4 00379324  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037C3E8 00379328  7D 89 03 A6 */	mtctr r12
/* 8037C3EC 0037932C  4E 80 04 21 */	bctrl 
/* 8037C3F0 00379330  80 63 00 70 */	lwz r3, 0x70(r3)
/* 8037C3F4 00379334  38 A1 00 08 */	addi r5, r1, 8
/* 8037C3F8 00379338  38 80 00 01 */	li r4, 1
/* 8037C3FC 0037933C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C400 00379340  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8037C404 00379344  7D 89 03 A6 */	mtctr r12
/* 8037C408 00379348  4E 80 04 21 */	bctrl 
/* 8037C40C 0037934C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C410 00379350  7C 08 03 A6 */	mtlr r0
/* 8037C414 00379354  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C418 00379358  4E 80 00 20 */	blr 
.endfn setWindowColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10

.fn setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10, global
/* 8037C41C 0037935C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037C420 00379360  7C 08 02 A6 */	mflr r0
/* 8037C424 00379364  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037C428 00379368  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8037C42C 0037936C  7C BF 2B 78 */	mr r31, r5
/* 8037C430 00379370  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8037C434 00379374  7C 7E 1B 78 */	mr r30, r3
/* 8037C438 00379378  A8 04 00 00 */	lha r0, 0(r4)
/* 8037C43C 0037937C  B0 01 00 10 */	sth r0, 0x10(r1)
/* 8037C440 00379380  A8 04 00 02 */	lha r0, 2(r4)
/* 8037C444 00379384  B0 01 00 12 */	sth r0, 0x12(r1)
/* 8037C448 00379388  A8 04 00 04 */	lha r0, 4(r4)
/* 8037C44C 0037938C  B0 01 00 14 */	sth r0, 0x14(r1)
/* 8037C450 00379390  A8 04 00 06 */	lha r0, 6(r4)
/* 8037C454 00379394  B0 01 00 16 */	sth r0, 0x16(r1)
/* 8037C458 00379398  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8037C45C 0037939C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C460 003793A0  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037C464 003793A4  7D 89 03 A6 */	mtctr r12
/* 8037C468 003793A8  4E 80 04 21 */	bctrl 
/* 8037C46C 003793AC  80 63 00 70 */	lwz r3, 0x70(r3)
/* 8037C470 003793B0  38 A1 00 10 */	addi r5, r1, 0x10
/* 8037C474 003793B4  38 80 00 00 */	li r4, 0
/* 8037C478 003793B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C47C 003793BC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8037C480 003793C0  7D 89 03 A6 */	mtctr r12
/* 8037C484 003793C4  4E 80 04 21 */	bctrl 
/* 8037C488 003793C8  A8 1F 00 00 */	lha r0, 0(r31)
/* 8037C48C 003793CC  B0 01 00 08 */	sth r0, 8(r1)
/* 8037C490 003793D0  A8 1F 00 02 */	lha r0, 2(r31)
/* 8037C494 003793D4  B0 01 00 0A */	sth r0, 0xa(r1)
/* 8037C498 003793D8  A8 1F 00 04 */	lha r0, 4(r31)
/* 8037C49C 003793DC  B0 01 00 0C */	sth r0, 0xc(r1)
/* 8037C4A0 003793E0  A8 1F 00 06 */	lha r0, 6(r31)
/* 8037C4A4 003793E4  B0 01 00 0E */	sth r0, 0xe(r1)
/* 8037C4A8 003793E8  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8037C4AC 003793EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C4B0 003793F0  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037C4B4 003793F4  7D 89 03 A6 */	mtctr r12
/* 8037C4B8 003793F8  4E 80 04 21 */	bctrl 
/* 8037C4BC 003793FC  80 63 00 70 */	lwz r3, 0x70(r3)
/* 8037C4C0 00379400  38 A1 00 08 */	addi r5, r1, 8
/* 8037C4C4 00379404  38 80 00 01 */	li r4, 1
/* 8037C4C8 00379408  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C4CC 0037940C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8037C4D0 00379410  7D 89 03 A6 */	mtctr r12
/* 8037C4D4 00379414  4E 80 04 21 */	bctrl 
/* 8037C4D8 00379418  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8037C4DC 0037941C  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C4E0 00379420  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 8037C4E4 00379424  7D 89 03 A6 */	mtctr r12
/* 8037C4E8 00379428  4E 80 04 21 */	bctrl 
/* 8037C4EC 0037942C  38 00 00 01 */	li r0, 1
/* 8037C4F0 00379430  98 03 00 0F */	stb r0, 0xf(r3)
/* 8037C4F4 00379434  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037C4F8 00379438  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8037C4FC 0037943C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8037C500 00379440  7C 08 03 A6 */	mtlr r0
/* 8037C504 00379444  38 21 00 20 */	addi r1, r1, 0x20
/* 8037C508 00379448  4E 80 00 20 */	blr 
.endfn setIconColor__Q28Morimura12TZukanWindowFR13J2DGXColorS10R13J2DGXColorS10

.if version == 0
.fn onIcon__Q28Morimura12TZukanWindowFi, global
/* 8037C50C 0037944C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C510 00379450  7C 08 02 A6 */	mflr r0
/* 8037C514 00379454  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C518 00379458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037C51C 0037945C  7C 9F 23 78 */	mr r31, r4
/* 8037C520 00379460  2C 1F 00 02 */	cmpwi r31, 2
/* 8037C524 00379464  93 C1 00 08 */	stw r30, 8(r1)
/* 8037C528 00379468  7C 7E 1B 78 */	mr r30, r3
/* 8037C52C 0037946C  41 80 00 20 */	blt .L_8037C54C
/* 8037C530 00379470  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 8037C534 00379474  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 8037C538 00379478  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 8037C53C 0037947C  38 80 15 27 */	li r4, 0x152e
/* 8037C540 00379480  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 8037C544 00379484  4C C6 31 82 */	crclr 6
/* 8037C548 00379488  4B CA E0 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037C54C:
/* 8037C54C 0037948C  57 E0 10 3A */	slwi r0, r31, 2
/* 8037C550 00379490  7C 7E 02 14 */	add r3, r30, r0
/* 8037C554 00379494  80 83 00 48 */	lwz r4, 0x48(r3)
/* 8037C558 00379498  28 04 00 00 */	cmplwi r4, 0
/* 8037C55C 0037949C  41 82 00 24 */	beq .L_8037C580
/* 8037C560 003794A0  20 1F 00 01 */	subfic r0, r31, 1
/* 8037C564 003794A4  38 60 00 01 */	li r3, 1
/* 8037C568 003794A8  54 00 10 3A */	slwi r0, r0, 2
/* 8037C56C 003794AC  98 64 00 B0 */	stb r3, 0xb0(r4)
/* 8037C570 003794B0  7C 7E 02 14 */	add r3, r30, r0
/* 8037C574 003794B4  38 00 00 00 */	li r0, 0
/* 8037C578 003794B8  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8037C57C 003794BC  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037C580:
/* 8037C580 003794C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C584 003794C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037C588 003794C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8037C58C 003794CC  7C 08 03 A6 */	mtlr r0
/* 8037C590 003794D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C594 003794D4  4E 80 00 20 */	blr 
.endfn onIcon__Q28Morimura12TZukanWindowFi
.else
.fn onIcon__Q28Morimura12TZukanWindowFi, global
/* 8037C50C 0037944C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C510 00379450  7C 08 02 A6 */	mflr r0
/* 8037C514 00379454  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C518 00379458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037C51C 0037945C  7C 9F 23 78 */	mr r31, r4
/* 8037C520 00379460  2C 1F 00 02 */	cmpwi r31, 2
/* 8037C524 00379464  93 C1 00 08 */	stw r30, 8(r1)
/* 8037C528 00379468  7C 7E 1B 78 */	mr r30, r3
/* 8037C52C 0037946C  41 80 00 20 */	blt .L_8037C54C
/* 8037C530 00379470  3C 60 80 49 */	lis r3, lbl_8049252C@ha
/* 8037C534 00379474  3C A0 80 49 */	lis r5, lbl_80492538@ha
/* 8037C538 00379478  38 63 25 2C */	addi r3, r3, lbl_8049252C@l
/* 8037C53C 0037947C  38 80 15 27 */	li r4, 0x1527
/* 8037C540 00379480  38 A5 25 38 */	addi r5, r5, lbl_80492538@l
/* 8037C544 00379484  4C C6 31 82 */	crclr 6
/* 8037C548 00379488  4B CA E0 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8037C54C:
/* 8037C54C 0037948C  57 E0 10 3A */	slwi r0, r31, 2
/* 8037C550 00379490  7C 7E 02 14 */	add r3, r30, r0
/* 8037C554 00379494  80 83 00 48 */	lwz r4, 0x48(r3)
/* 8037C558 00379498  28 04 00 00 */	cmplwi r4, 0
/* 8037C55C 0037949C  41 82 00 24 */	beq .L_8037C580
/* 8037C560 003794A0  20 1F 00 01 */	subfic r0, r31, 1
/* 8037C564 003794A4  38 60 00 01 */	li r3, 1
/* 8037C568 003794A8  54 00 10 3A */	slwi r0, r0, 2
/* 8037C56C 003794AC  98 64 00 B0 */	stb r3, 0xb0(r4)
/* 8037C570 003794B0  7C 7E 02 14 */	add r3, r30, r0
/* 8037C574 003794B4  38 00 00 00 */	li r0, 0
/* 8037C578 003794B8  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8037C57C 003794BC  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8037C580:
/* 8037C580 003794C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C584 003794C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037C588 003794C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8037C58C 003794CC  7C 08 03 A6 */	mtlr r0
/* 8037C590 003794D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C594 003794D4  4E 80 00 20 */	blr 
.endfn onIcon__Q28Morimura12TZukanWindowFi
.endif

.fn moveIcon__Q28Morimura12TZukanWindowFf, global
/* 8037C598 003794D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037C59C 003794DC  7C 08 02 A6 */	mflr r0
/* 8037C5A0 003794E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8037C5A4 003794E4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8037C5A8 003794E8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8037C5AC 003794EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037C5B0 003794F0  88 0D 85 92 */	lbz r0, mIconMove__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C5B4 003794F4  FF E0 08 90 */	fmr f31, f1
/* 8037C5B8 003794F8  7C 7F 1B 78 */	mr r31, r3
/* 8037C5BC 003794FC  28 00 00 00 */	cmplwi r0, 0
/* 8037C5C0 00379500  41 82 00 90 */	beq .L_8037C650
/* 8037C5C4 00379504  FC 20 FA 10 */	fabs f1, f31
/* 8037C5C8 00379508  C0 02 07 D8 */	lfs f0, lbl_8051EB38@sda21(r2)
/* 8037C5CC 0037950C  FC 20 08 18 */	frsp f1, f1
/* 8037C5D0 00379510  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037C5D4 00379514  40 80 00 08 */	bge .L_8037C5DC
/* 8037C5D8 00379518  C3 E2 07 C0 */	lfs f31, lbl_8051EB20@sda21(r2)
.L_8037C5DC:
/* 8037C5DC 0037951C  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8037C5E0 00379520  C0 02 07 C4 */	lfs f0, lbl_8051EB24@sda21(r2)
/* 8037C5E4 00379524  FC 20 0A 10 */	fabs f1, f1
/* 8037C5E8 00379528  FC 20 08 18 */	frsp f1, f1
/* 8037C5EC 0037952C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8037C5F0 00379530  40 80 00 0C */	bge .L_8037C5FC
/* 8037C5F4 00379534  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037C5F8 00379538  D0 1F 00 50 */	stfs f0, 0x50(r31)
.L_8037C5FC:
/* 8037C5FC 0037953C  C0 82 07 C0 */	lfs f4, lbl_8051EB20@sda21(r2)
/* 8037C600 00379540  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 8037C604 00379544  FC 04 00 00 */	fcmpu cr0, f4, f0
/* 8037C608 00379548  40 82 00 20 */	bne .L_8037C628
/* 8037C60C 0037954C  FC 04 F8 00 */	fcmpu cr0, f4, f31
/* 8037C610 00379550  41 82 00 18 */	beq .L_8037C628
/* 8037C614 00379554  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8037C618 00379558  C0 22 08 18 */	lfs f1, lbl_8051EB78@sda21(r2)
/* 8037C61C 0037955C  C0 42 07 C4 */	lfs f2, lbl_8051EB24@sda21(r2)
/* 8037C620 00379560  C0 62 07 F4 */	lfs f3, lbl_8051EB54@sda21(r2)
/* 8037C624 00379564  4B FA C8 B5 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_8037C628:
/* 8037C628 00379568  C0 02 07 C0 */	lfs f0, lbl_8051EB20@sda21(r2)
/* 8037C62C 0037956C  C0 42 07 D8 */	lfs f2, lbl_8051EB38@sda21(r2)
/* 8037C630 00379570  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 8037C634 00379574  40 82 00 08 */	bne .L_8037C63C
/* 8037C638 00379578  C0 42 08 A0 */	lfs f2, lbl_8051EC00@sda21(r2)
.L_8037C63C:
/* 8037C63C 0037957C  C0 02 07 E4 */	lfs f0, lbl_8051EB44@sda21(r2)
/* 8037C640 00379580  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8037C644 00379584  EC 00 0F F8 */	fmsubs f0, f0, f31, f1
/* 8037C648 00379588  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8037C64C 0037958C  D0 1F 00 50 */	stfs f0, 0x50(r31)
.L_8037C650:
/* 8037C650 00379590  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8037C654 00379594  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8037C658 00379598  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8037C65C 0037959C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037C660 003795A0  7C 08 03 A6 */	mtlr r0
/* 8037C664 003795A4  38 21 00 20 */	addi r1, r1, 0x20
/* 8037C668 003795A8  4E 80 00 20 */	blr 
.endfn moveIcon__Q28Morimura12TZukanWindowFf

.fn changeIconTexture__Q28Morimura12TZukanWindowFiP7ResTIMG, global
/* 8037C66C 003795AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C670 003795B0  7C 08 02 A6 */	mflr r0
/* 8037C674 003795B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C678 003795B8  54 80 10 3A */	slwi r0, r4, 2
/* 8037C67C 003795BC  7C 63 02 14 */	add r3, r3, r0
/* 8037C680 003795C0  7C A4 2B 78 */	mr r4, r5
/* 8037C684 003795C4  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8037C688 003795C8  38 A0 00 00 */	li r5, 0
/* 8037C68C 003795CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8037C690 003795D0  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8037C694 003795D4  7D 89 03 A6 */	mtctr r12
/* 8037C698 003795D8  4E 80 04 21 */	bctrl 
/* 8037C69C 003795DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C6A0 003795E0  7C 08 03 A6 */	mtlr r0
/* 8037C6A4 003795E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C6A8 003795E8  4E 80 00 20 */	blr 
.endfn changeIconTexture__Q28Morimura12TZukanWindowFiP7ResTIMG

.fn __dt__Q28Morimura18TCallbackScrollMsgFv, weak
/* 8037C6AC 003795EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C6B0 003795F0  7C 08 02 A6 */	mflr r0
/* 8037C6B4 003795F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C6B8 003795F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8037C6BC 003795FC  7C 9F 23 78 */	mr r31, r4
/* 8037C6C0 00379600  93 C1 00 08 */	stw r30, 8(r1)
/* 8037C6C4 00379604  7C 7E 1B 79 */	or. r30, r3, r3
/* 8037C6C8 00379608  41 82 00 58 */	beq .L_8037C720
/* 8037C6CC 0037960C  3C 80 80 4E */	lis r4, __vt__Q28Morimura18TCallbackScrollMsg@ha
/* 8037C6D0 00379610  38 04 3D 58 */	addi r0, r4, __vt__Q28Morimura18TCallbackScrollMsg@l
/* 8037C6D4 00379614  90 1E 00 00 */	stw r0, 0(r30)
/* 8037C6D8 00379618  41 82 00 38 */	beq .L_8037C710
/* 8037C6DC 0037961C  3C 80 80 4E */	lis r4, __vt__Q32og6Screen16CallBack_Message@ha
/* 8037C6E0 00379620  38 04 81 88 */	addi r0, r4, __vt__Q32og6Screen16CallBack_Message@l
/* 8037C6E4 00379624  90 1E 00 00 */	stw r0, 0(r30)
/* 8037C6E8 00379628  41 82 00 28 */	beq .L_8037C710
/* 8037C6EC 0037962C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8037C6F0 00379630  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8037C6F4 00379634  90 1E 00 00 */	stw r0, 0(r30)
/* 8037C6F8 00379638  41 82 00 18 */	beq .L_8037C710
/* 8037C6FC 0037963C  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 8037C700 00379640  38 80 00 00 */	li r4, 0
/* 8037C704 00379644  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 8037C708 00379648  90 1E 00 00 */	stw r0, 0(r30)
/* 8037C70C 0037964C  48 09 4E 7D */	bl __dt__5CNodeFv
.L_8037C710:
/* 8037C710 00379650  7F E0 07 35 */	extsh. r0, r31
/* 8037C714 00379654  40 81 00 0C */	ble .L_8037C720
/* 8037C718 00379658  7F C3 F3 78 */	mr r3, r30
/* 8037C71C 0037965C  4B CA 79 99 */	bl __dl__FPv
.L_8037C720:
/* 8037C720 00379660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C724 00379664  7F C3 F3 78 */	mr r3, r30
/* 8037C728 00379668  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8037C72C 0037966C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8037C730 00379670  7C 08 03 A6 */	mtlr r0
/* 8037C734 00379674  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C738 00379678  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura18TCallbackScrollMsgFv

.fn getResName__Q28Morimura11TDItemSceneCFv, weak
/* 8037C73C 0037967C  3C 60 80 49 */	lis r3, lbl_804932AC@ha
/* 8037C740 00379680  38 63 32 AC */	addi r3, r3, lbl_804932AC@l
/* 8037C744 00379684  4E 80 00 20 */	blr 
.endfn getResName__Q28Morimura11TDItemSceneCFv

.fn getSceneType__Q28Morimura11TDItemSceneFv, weak
/* 8037C748 00379688  38 60 27 35 */	li r3, 0x2735
/* 8037C74C 0037968C  4E 80 00 20 */	blr 
.endfn getSceneType__Q28Morimura11TDItemSceneFv

.fn getOwnerID__Q28Morimura11TDItemSceneFv, weak
/* 8037C750 00379690  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 8037C754 00379694  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 8037C758 00379698  4E 80 00 20 */	blr 
.endfn getOwnerID__Q28Morimura11TDItemSceneFv

.fn getMemberID__Q28Morimura11TDItemSceneFv, weak
/* 8037C75C 0037969C  3C 80 49 54 */	lis r4, 0x4954454D@ha
/* 8037C760 003796A0  38 60 00 44 */	li r3, 0x44
/* 8037C764 003796A4  38 84 45 4D */	addi r4, r4, 0x4954454D@l
/* 8037C768 003796A8  4E 80 00 20 */	blr 
.endfn getMemberID__Q28Morimura11TDItemSceneFv

.fn getDispMemberBase__Q28Morimura10TItemZukanFv, weak
/* 8037C76C 003796AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C770 003796B0  7C 08 02 A6 */	mflr r0
/* 8037C774 003796B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C778 003796B8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037C77C 003796BC  28 00 00 00 */	cmplwi r0, 0
/* 8037C780 003796C0  41 82 00 0C */	beq .L_8037C78C
/* 8037C784 003796C4  80 63 02 48 */	lwz r3, 0x248(r3)
/* 8037C788 003796C8  48 00 00 08 */	b .L_8037C790
.L_8037C78C:
/* 8037C78C 003796CC  48 0D 78 1D */	bl getDispMember__Q26Screen7ObjBaseFv
.L_8037C790:
/* 8037C790 003796D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C794 003796D4  7C 08 03 A6 */	mtlr r0
/* 8037C798 003796D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C79C 003796DC  4E 80 00 20 */	blr 
.endfn getDispMemberBase__Q28Morimura10TItemZukanFv

.fn getDispDataZukan__Q28Morimura10TItemZukanFv, weak
/* 8037C7A0 003796E0  80 63 02 48 */	lwz r3, 0x248(r3)
/* 8037C7A4 003796E4  4E 80 00 20 */	blr 
.endfn getDispDataZukan__Q28Morimura10TItemZukanFv

.fn doUpdateFadeinFinish__Q28Morimura10TZukanBaseFv, weak
/* 8037C7A8 003796E8  38 00 00 01 */	li r0, 1
/* 8037C7AC 003796EC  98 03 00 45 */	stb r0, 0x45(r3)
/* 8037C7B0 003796F0  80 63 01 30 */	lwz r3, 0x130(r3)
/* 8037C7B4 003796F4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8037C7B8 003796F8  4E 80 00 20 */	blr 
.endfn doUpdateFadeinFinish__Q28Morimura10TZukanBaseFv

.fn doUpdateFadeout__Q28Morimura10TZukanBaseFv, weak
/* 8037C7BC 003796FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C7C0 00379700  7C 08 02 A6 */	mflr r0
/* 8037C7C4 00379704  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C7C8 00379708  38 00 00 00 */	li r0, 0
/* 8037C7CC 0037970C  98 03 00 45 */	stb r0, 0x45(r3)
/* 8037C7D0 00379710  4B FC CB 69 */	bl doUpdateFadeout__Q28Morimura9TTestBaseFv
/* 8037C7D4 00379714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C7D8 00379718  7C 08 03 A6 */	mtlr r0
/* 8037C7DC 0037971C  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C7E0 00379720  4E 80 00 20 */	blr 
.endfn doUpdateFadeout__Q28Morimura10TZukanBaseFv

.fn changeTextTevBlock__Q28Morimura11TScrollListFi, weak
/* 8037C7E4 00379724  4E 80 00 20 */	blr 
.endfn changeTextTevBlock__Q28Morimura11TScrollListFi

.fn setPaneCharacter__Q28Morimura11TScrollListFi, weak
/* 8037C7E8 00379728  4E 80 00 20 */	blr 
.endfn setPaneCharacter__Q28Morimura11TScrollListFi

.fn getResName__Q28Morimura12TDEnemySceneCFv, weak
/* 8037C7EC 0037972C  3C 60 80 49 */	lis r3, lbl_804932CC@ha
/* 8037C7F0 00379730  38 63 32 CC */	addi r3, r3, lbl_804932CC@l
/* 8037C7F4 00379734  4E 80 00 20 */	blr 
.endfn getResName__Q28Morimura12TDEnemySceneCFv

.fn getSceneType__Q28Morimura12TDEnemySceneFv, weak
/* 8037C7F8 00379738  38 60 27 34 */	li r3, 0x2734
/* 8037C7FC 0037973C  4E 80 00 20 */	blr 
.endfn getSceneType__Q28Morimura12TDEnemySceneFv

.fn getOwnerID__Q28Morimura12TDEnemySceneFv, weak
/* 8037C800 00379740  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 8037C804 00379744  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 8037C808 00379748  4E 80 00 20 */	blr 
.endfn getOwnerID__Q28Morimura12TDEnemySceneFv

.fn getMemberID__Q28Morimura12TDEnemySceneFv, weak
/* 8037C80C 0037974C  3C 80 4E 45 */	lis r4, 0x4E454D59@ha
/* 8037C810 00379750  38 60 44 45 */	li r3, 0x4445
/* 8037C814 00379754  38 84 4D 59 */	addi r4, r4, 0x4E454D59@l
/* 8037C818 00379758  4E 80 00 20 */	blr 
.endfn getMemberID__Q28Morimura12TDEnemySceneFv

.fn getDispMemberBase__Q28Morimura11TEnemyZukanFv, weak
/* 8037C81C 0037975C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8037C820 00379760  7C 08 02 A6 */	mflr r0
/* 8037C824 00379764  90 01 00 14 */	stw r0, 0x14(r1)
/* 8037C828 00379768  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 8037C82C 0037976C  28 00 00 00 */	cmplwi r0, 0
/* 8037C830 00379770  41 82 00 0C */	beq .L_8037C83C
/* 8037C834 00379774  80 63 02 48 */	lwz r3, 0x248(r3)
/* 8037C838 00379778  48 00 00 08 */	b .L_8037C840
.L_8037C83C:
/* 8037C83C 0037977C  48 0D 77 6D */	bl getDispMember__Q26Screen7ObjBaseFv
.L_8037C840:
/* 8037C840 00379780  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8037C844 00379784  7C 08 03 A6 */	mtlr r0
/* 8037C848 00379788  38 21 00 10 */	addi r1, r1, 0x10
/* 8037C84C 0037978C  4E 80 00 20 */	blr 
.endfn getDispMemberBase__Q28Morimura11TEnemyZukanFv

.fn getDispDataZukan__Q28Morimura11TEnemyZukanFv, weak
/* 8037C850 00379790  80 63 02 48 */	lwz r3, 0x248(r3)
/* 8037C854 00379794  4E 80 00 20 */	blr 
.endfn getDispDataZukan__Q28Morimura11TEnemyZukanFv

.fn getCategoryColorId__Q28Morimura10TZukanBaseFi, weak
/* 8037C858 00379798  38 60 00 00 */	li r3, 0
/* 8037C85C 0037979C  4E 80 00 20 */	blr 
.endfn getCategoryColorId__Q28Morimura10TZukanBaseFi

.fn __sinit_zukan2D_cpp, local
/* 8037C860 003797A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8037C864 003797A4  3C 60 80 51 */	lis r3, __float_nan@ha
/* 8037C868 003797A8  39 43 48 B0 */	addi r10, r3, __float_nan@l
/* 8037C86C 003797AC  3C E0 80 4E */	lis r7, govNAN___Q24Game5P2JST@ha
/* 8037C870 003797B0  BF 41 00 08 */	stmw r26, 8(r1)
/* 8037C874 003797B4  3B E0 00 FF */	li r31, 0xff
/* 8037C878 003797B8  38 8D 99 28 */	addi r4, r13, mCategoryColor1w__Q28Morimura10TZukanBase@sda21
/* 8037C87C 003797BC  C0 82 07 C0 */	lfs f4, lbl_8051EB20@sda21(r2)
/* 8037C880 003797C0  38 CD 99 20 */	addi r6, r13, mCategoryColor0w__Q28Morimura10TZukanBase@sda21
/* 8037C884 003797C4  39 20 00 00 */	li r9, 0
/* 8037C888 003797C8  39 0D 99 14 */	addi r8, r13, mNewColor1__Q28Morimura10TZukanBase@sda21
/* 8037C88C 003797CC  38 AD 99 24 */	addi r5, r13, mCategoryColor0b__Q28Morimura10TZukanBase@sda21
/* 8037C890 003797D0  38 6D 99 2C */	addi r3, r13, mCategoryColor1b__Q28Morimura10TZukanBase@sda21
/* 8037C894 003797D4  3B 67 39 28 */	addi r27, r7, govNAN___Q24Game5P2JST@l
/* 8037C898 003797D8  C0 22 08 AC */	lfs f1, lbl_8051EC0C@sda21(r2)
/* 8037C89C 003797DC  3C E0 80 51 */	lis r7, mScrollParm__Q28Morimura10TZukanBase@ha
/* 8037C8A0 003797E0  39 6D 99 10 */	addi r11, r13, mNewColor0__Q28Morimura10TZukanBase@sda21
/* 8037C8A4 003797E4  39 80 00 60 */	li r12, 0x60
/* 8037C8A8 003797E8  C1 22 08 7C */	lfs f9, lbl_8051EBDC@sda21(r2)
/* 8037C8AC 003797EC  3B 87 40 1C */	addi r28, r7, mScrollParm__Q28Morimura10TZukanBase@l
/* 8037C8B0 003797F0  C1 4A 00 00 */	lfs f10, 0(r10)
/* 8037C8B4 003797F4  39 40 00 50 */	li r10, 0x50
/* 8037C8B8 003797F8  C1 02 07 FC */	lfs f8, lbl_8051EB5C@sda21(r2)
/* 8037C8BC 003797FC  38 00 00 E1 */	li r0, 0xe1
/* 8037C8C0 00379800  C0 E2 08 58 */	lfs f7, lbl_8051EBB8@sda21(r2)
/* 8037C8C4 00379804  3B 40 FF FF */	li r26, -1
/* 8037C8C8 00379808  C0 C2 08 60 */	lfs f6, lbl_8051EBC0@sda21(r2)
/* 8037C8CC 0037980C  3B AD 99 00 */	addi r29, r13, mNewOffset__Q28Morimura10TZukanBase@sda21
/* 8037C8D0 00379810  C0 A2 07 EC */	lfs f5, lbl_8051EB4C@sda21(r2)
/* 8037C8D4 00379814  3B CD 99 08 */	addi r30, r13, mLargeNewOffset__Q28Morimura10TZukanBase@sda21
/* 8037C8D8 00379818  C0 62 08 A4 */	lfs f3, lbl_8051EC04@sda21(r2)
/* 8037C8DC 0037981C  38 ED 99 18 */	addi r7, r13, mCategoryScale__Q28Morimura10TZukanBase@sda21
/* 8037C8E0 00379820  C0 42 08 A8 */	lfs f2, lbl_8051EC08@sda21(r2)
/* 8037C8E4 00379824  C0 02 08 B0 */	lfs f0, lbl_8051EC10@sda21(r2)
/* 8037C8E8 00379828  D1 3C 00 00 */	stfs f9, 0(r28)
/* 8037C8EC 0037982C  D1 1C 00 04 */	stfs f8, 4(r28)
/* 8037C8F0 00379830  D0 FC 00 08 */	stfs f7, 8(r28)
/* 8037C8F4 00379834  D0 DC 00 0C */	stfs f6, 0xc(r28)
/* 8037C8F8 00379838  D0 BC 00 10 */	stfs f5, 0x10(r28)
/* 8037C8FC 0037983C  D0 8D 99 00 */	stfs f4, mNewOffset__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C900 00379840  D0 7D 00 04 */	stfs f3, 4(r29)
/* 8037C904 00379844  D0 8D 99 08 */	stfs f4, mLargeNewOffset__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C908 00379848  D0 5E 00 04 */	stfs f2, 4(r30)
/* 8037C90C 0037984C  9B ED 99 10 */	stb r31, mNewColor0__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C910 00379850  99 8B 00 01 */	stb r12, 1(r11)
/* 8037C914 00379854  99 4B 00 02 */	stb r10, 2(r11)
/* 8037C918 00379858  99 2B 00 03 */	stb r9, 3(r11)
/* 8037C91C 0037985C  98 0D 99 14 */	stb r0, mNewColor1__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C920 00379860  99 28 00 01 */	stb r9, 1(r8)
/* 8037C924 00379864  99 28 00 02 */	stb r9, 2(r8)
/* 8037C928 00379868  9B E8 00 03 */	stb r31, 3(r8)
/* 8037C92C 0037986C  D0 2D 99 18 */	stfs f1, mCategoryScale__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C930 00379870  D0 07 00 04 */	stfs f0, 4(r7)
/* 8037C934 00379874  99 2D 99 20 */	stb r9, mCategoryColor0w__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C938 00379878  99 26 00 01 */	stb r9, 1(r6)
/* 8037C93C 0037987C  9B E6 00 02 */	stb r31, 2(r6)
/* 8037C940 00379880  9B E6 00 03 */	stb r31, 3(r6)
/* 8037C944 00379884  9B ED 99 24 */	stb r31, mCategoryColor0b__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C948 00379888  9B E5 00 01 */	stb r31, 1(r5)
/* 8037C94C 0037988C  9B E5 00 02 */	stb r31, 2(r5)
/* 8037C950 00379890  99 25 00 03 */	stb r9, 3(r5)
/* 8037C954 00379894  9B ED 99 28 */	stb r31, mCategoryColor1w__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C958 00379898  9B E4 00 01 */	stb r31, 1(r4)
/* 8037C95C 0037989C  9B E4 00 02 */	stb r31, 2(r4)
/* 8037C960 003798A0  9B E4 00 03 */	stb r31, 3(r4)
/* 8037C964 003798A4  9B ED 99 2C */	stb r31, mCategoryColor1b__Q28Morimura10TZukanBase@sda21(r13)
/* 8037C968 003798A8  9B E3 00 01 */	stb r31, 1(r3)
/* 8037C96C 003798AC  9B E3 00 02 */	stb r31, 2(r3)
/* 8037C970 003798B0  99 23 00 03 */	stb r9, 3(r3)
/* 8037C974 003798B4  93 4D 98 F0 */	stw r26, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8037C978 003798B8  D1 5B 00 00 */	stfs f10, 0(r27)
/* 8037C97C 003798BC  D1 5B 00 04 */	stfs f10, 4(r27)
/* 8037C980 003798C0  D1 5B 00 08 */	stfs f10, 8(r27)
/* 8037C984 003798C4  BB 41 00 08 */	lmw r26, 8(r1)
/* 8037C988 003798C8  D1 4D 98 F4 */	stfs f10, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8037C98C 003798CC  38 21 00 20 */	addi r1, r1, 0x20
/* 8037C990 003798D0  4E 80 00 20 */	blr 
.endfn __sinit_zukan2D_cpp

.fn "@24@__dt__Q28Morimura10TZukanBaseFv", weak
/* 8037C994 003798D4  38 63 FF E8 */	addi r3, r3, -24
/* 8037C998 003798D8  4B FF 45 38 */	b __dt__Q28Morimura10TZukanBaseFv
.endfn "@24@__dt__Q28Morimura10TZukanBaseFv"

.fn "@24@__dt__Q28Morimura11TEnemyZukanFv", weak
/* 8037C99C 003798DC  38 63 FF E8 */	addi r3, r3, -24
/* 8037C9A0 003798E0  4B FF 80 F4 */	b __dt__Q28Morimura11TEnemyZukanFv
.endfn "@24@__dt__Q28Morimura11TEnemyZukanFv"

.fn "@24@__dt__Q28Morimura10TItemZukanFv", weak
/* 8037C9A4 003798E4  38 63 FF E8 */	addi r3, r3, -24
/* 8037C9A8 003798E8  4B FF B5 D0 */	b __dt__Q28Morimura10TItemZukanFv
.endfn "@24@__dt__Q28Morimura10TItemZukanFv"
