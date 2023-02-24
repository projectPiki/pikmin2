.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_khWorldMap_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80497C70, local
	.asciz "khWorldMap.cpp"
.endobj lbl_80497C70
.balign 4
.obj cOpenMinFrm__Q22kh6Screen, local
	.float 0.0
	.float 300.0
	.float 600.0
	.float 900.0
.endobj cOpenMinFrm__Q22kh6Screen
.obj cOpenMaxFrm__Q22kh6Screen, local
	.float 300.0
	.float 600.0
	.float 900.0
	.float 1100.0
.endobj cOpenMaxFrm__Q22kh6Screen
.balign 4
.obj lbl_80497CA0, local
	.asciz "P2Assert"
.endobj lbl_80497CA0
.balign 4
.obj lbl_80497CAC, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80497CAC
.balign 4
.obj lbl_80497D2C, local
	.asciz "worldmap_icon.blo"
.endobj lbl_80497D2C
.balign 4
.obj lbl_80497D40, local
	.asciz "worldmap_icon.bck"
.endobj lbl_80497D40
.balign 4
.obj lbl_80497D54, local
	.asciz "worldmap_icon.btp"
.endobj lbl_80497D54
.balign 4
.obj lbl_80497D68, local
	.asciz "worldmap_gicon.blo"
.endobj lbl_80497D68
.balign 4
.obj lbl_80497D7C, local
	.asciz "worldmap_gicon.bck"
.endobj lbl_80497D7C
.balign 4
.obj lbl_80497D90, local
	.asciz "worldmap_gicon.btp"
.endobj lbl_80497D90
.balign 4
.obj lbl_80497DA4, local
	.4byte lbl_80497D2C
	.4byte lbl_80497D40
	.4byte lbl_80497D54
	.4byte lbl_80497D68
	.4byte lbl_80497D7C
	.4byte lbl_80497D90
.endobj lbl_80497DA4
.balign 4
.obj lbl_80497DBC, local
	.asciz "world_map_info.blo"
.endobj lbl_80497DBC
.balign 4
.obj lbl_80497DD0, local
	.asciz "world_map_info.btk"
.endobj lbl_80497DD0
.balign 4
.obj lbl_80497DE4, local
	.asciz "world_map_info_02.btk"
.endobj lbl_80497DE4
.balign 4
.obj lbl_80497DFC, local
	.asciz "world_map_info_03.btk"
.endobj lbl_80497DFC
.balign 4
.obj lbl_80497E14, local
	.4byte lbl_80497DBC
	.4byte lbl_80497DD0
	.4byte lbl_80497DE4
	.4byte lbl_80497DFC
.endobj lbl_80497E14
.balign 8
.obj lbl_80497E28, local
	.8byte 0x504943545F303435
	.8byte 0x0050675F705F3031
	.8byte 0x0050675F705F3032
	.8byte 0x0050675F635F3031
	.8byte 0x0050675F635F3032
	.8byte 0x50636176655F3030
	.8byte 0x0050305F705F3031
	.8byte 0x0050305F705F3032
	.8byte 0x0050305F635F3031
	.8byte 0x0050305F635F3032
	.8byte 0x50636176655F3031
	.8byte 0x0050315F705F3031
	.8byte 0x0050315F705F3032
	.8byte 0x0050315F635F3031
	.8byte 0x0050315F635F3032
	.8byte 0x50636176655F3032
	.8byte 0x0050325F705F3031
	.8byte 0x0050325F705F3032
	.8byte 0x0050325F635F3031
	.8byte 0x0050325F635F3032
	.8byte 0x50636176655F3033
	.8byte 0x0050335F705F3031
	.8byte 0x0050335F705F3032
	.8byte 0x0050335F635F3031
	.8byte 0x0050335F635F3032
.endobj lbl_80497E28
.balign 8
.obj lbl_80497EF0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80497EF0
.obj lbl_80497F18, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80497F18
.balign 4
.obj lbl_80497F28, local
	.asciz "worldmap.szs"
.endobj lbl_80497F28
.balign 4
.obj lbl_80497F38, local
	.asciz "world_map_kitagawa.blo"
.endobj lbl_80497F38
.balign 4
.obj lbl_80497F50, local
	.asciz "world_map_kitagawa.bck"
.endobj lbl_80497F50
.balign 4
.obj lbl_80497F68, local
	.asciz "world_map_kitagawa.bpk"
.endobj lbl_80497F68
.balign 4
.obj lbl_80497F80, local
	.asciz "world_map_kitagawa.btk"
.endobj lbl_80497F80
.balign 4
.obj lbl_80497F98, local
	.asciz "world_map_kitagawa_02.btk"
.endobj lbl_80497F98
.balign 4
.obj lbl_80497FB4, local
	.asciz "user/Ebisawa/effect/eff2d_world_map.jpc"
.endobj lbl_80497FB4
.balign 8
.obj lbl_80497FE0, local # u64 char literal array?
	.8byte 0x00004E7761697430
	.8byte 0x00004E7761697431
	.8byte 0x00004E7761697432
	.8byte 0x00004E7761697433
.endobj lbl_80497FE0
.balign 8
.obj lbl_80498000, local
	.8byte 0x004E706F696E7430
	.8byte 0x004E706F696E7431
	.8byte 0x004E706F696E7432
	.8byte 0x004E706F696E7433
.endobj lbl_80498000
.balign 8
.obj lbl_80498020, local
	.8byte 0x00545F6E65775F6C
	.8byte 0x00545F6E65775F72
.endobj lbl_80498020
.balign 4
.obj lbl_80498030, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80498030
.balign 4
.obj lbl_8049803C, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8049803C
.balign 8
.obj lbl_80498048, local
	.8byte 0x00383339305F3031
	.8byte 0x00383339315F3031
	.8byte 0x00383339325F3031
	.8byte 0x00383339335F3031
.endobj lbl_80498048
.balign 8
.obj lbl_80498068, local
	.8byte 0x00383339355F3031
	.8byte 0x00383339395F3031
	.8byte 0x00383430305F3031
	.8byte 0x006E6F5F64617461
.endobj lbl_80498068
.balign 8
.obj lbl_80498088, local
	.8byte 0x00383339365F3031
	.8byte 0x00383339385F3031
	.8byte 0x00383430315F3031
	.8byte 0x00383431305F3031
.endobj lbl_80498088
.balign 8
.obj lbl_804980A8, local
	.8byte 0x00383339375F3031
	.8byte 0x00383430325F3031
	.8byte 0x00383430335F3031
	.8byte 0x00383431315F3031
.endobj lbl_804980A8
.balign 8
.obj lbl_804980C8, local
	.8byte 0x00383431325F3031
	.8byte 0x00383431335F3031
	.8byte 0x00383431345F3031
	.8byte 0x006E6F5F64617461
.endobj lbl_804980C8
.balign 4
.obj lbl_804980E8, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_804980E8
.balign 8
.obj lbl_804980F8, local
	.8byte 0x0050675F705F3031
	.8byte 0x0050675F705F3032
	.8byte 0x0050675F635F3031
	.8byte 0x0050675F635F3032
.endobj lbl_804980F8
.balign 8
.obj lbl_80498118, local
	.8byte 0x0050305F705F3031
	.8byte 0x0050305F705F3032
	.8byte 0x0050305F635F3031
	.8byte 0x0050305F635F3032
	.8byte 0x0050315F705F3031
	.8byte 0x0050315F705F3032
	.8byte 0x0050315F635F3031
	.8byte 0x0050315F635F3032
	.8byte 0x0050325F705F3031
	.8byte 0x0050325F705F3032
	.8byte 0x0050325F635F3031
	.8byte 0x0050325F635F3032
	.8byte 0x0050335F705F3031
	.8byte 0x0050335F705F3032
	.8byte 0x0050335F635F3031
	.8byte 0x0050335F635F3032
.endobj lbl_80498118
.balign 8
.obj lbl_80498198, local
	.8byte 0x004E63615F666C30
	.8byte 0x004E63615F666C31
	.8byte 0x004E63615F666C32
	.8byte 0x004E63615F666C33
.endobj lbl_80498198
.balign 8
.obj lbl_804981B8, local
	.8byte 0x000050305F737261
	.8byte 0x0050315F73757261
	.8byte 0x0050325F73757261
	.8byte 0x000050335F737261
.endobj lbl_804981B8
.balign 8
.obj lbl_804981D8, local
	.8byte 0x00383339305F3031
	.8byte 0x00383339315F3031
	.8byte 0x00383339325F3031
	.8byte 0x00383339335F3031
.endobj lbl_804981D8
.balign 8
.obj lbl_804981F8, local
	.8byte 0x00383339355F3031
	.8byte 0x00383339395F3031
	.8byte 0x00383430305F3031
	.8byte 0x006E6F5F64617461
.endobj lbl_804981F8
.balign 8
.obj lbl_80498218, local
	.8byte 0x00383339365F3031
	.8byte 0x00383339385F3031
	.8byte 0x00383430315F3031
	.8byte 0x00383431305F3031
.endobj lbl_80498218
.balign 8
.obj lbl_80498238, local
	.8byte 0x00383339375F3031
	.8byte 0x00383430325F3031
	.8byte 0x00383430335F3031
	.8byte 0x00383431315F3031
.endobj lbl_80498238
.balign 8
.obj lbl_80498258, local
	.8byte 0x00383431325F3031
	.8byte 0x00383431335F3031
	.8byte 0x00383431345F3031
	.8byte 0x006E6F5F64617461
.endobj lbl_80498258
.balign 4
.obj lbl_80498278, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80498278
.balign 8
.obj lbl_80498288, local
	.8byte 0x0050675F705F3031
	.8byte 0x0050675F705F3032
	.8byte 0x0050675F635F3031
	.8byte 0x0050675F635F3032
.endobj lbl_80498288
.balign 8
.obj lbl_804982A8, local
	.8byte 0x0050305F705F3031
	.8byte 0x0050305F705F3032
	.8byte 0x0050305F635F3031
	.8byte 0x0050305F635F3032
	.8byte 0x0050315F705F3031
	.8byte 0x0050315F705F3032
	.8byte 0x0050315F635F3031
	.8byte 0x0050315F635F3032
	.8byte 0x0050325F705F3031
	.8byte 0x0050325F705F3032
	.8byte 0x0050325F635F3031
	.8byte 0x0050325F635F3032
	.8byte 0x0050335F705F3031
	.8byte 0x0050335F705F3032
	.8byte 0x0050335F635F3031
	.8byte 0x0050335F635F3032
.endobj lbl_804982A8
.balign 8
.obj lbl_80498328, local
	.8byte 0x00004E7761697430
	.8byte 0x00004E7761697431
	.8byte 0x00004E7761697432
	.8byte 0x00004E7761697433
.endobj lbl_80498328
.balign 4
.obj lbl_80498348, local
	.asciz "ArgDirScale"
.endobj lbl_80498348
.balign 4
.obj lbl_80498354, local
	.asciz "ArgScale"
.endobj lbl_80498354

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804EA3A0, local
	.4byte .L_803F3D80
	.4byte .L_803F4084
	.4byte .L_803F40E8
	.4byte .L_803F4108
	.4byte .L_803F44A8
	.4byte .L_803F4554
	.4byte .L_803F4698
	.4byte .L_803F472C
	.4byte .L_803F47C0
	.4byte .L_803F4864
	.4byte .L_803F4908
	.4byte .L_803F4D90
	.4byte .L_803F503C
	.4byte .L_803F5098
	.4byte .L_803F4420
.endobj lbl_804EA3A0
.obj __vt__Q35efx2d8WorldMap10T2DRocketA, weak
	.4byte 0
	.4byte 0
	.4byte create__Q35efx2d8WorldMap19TSimple_ArgDirScaleFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TSimple1Fv
	.4byte fade__Q25efx2d8TSimple1Fv
	.4byte setGroup__Q25efx2d5TBaseFUc
.endobj __vt__Q35efx2d8WorldMap10T2DRocketA
.obj __vt__Q35efx2d8WorldMap11ArgDirScale, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q35efx2d8WorldMap11ArgDirScaleFv
.endobj __vt__Q35efx2d8WorldMap11ArgDirScale
.obj __vt__Q35efx2d8WorldMap10T2DShstar1, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d9TChasePosFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d8WorldMap10T2DShstar1Fv"
	.4byte "@8@execute__Q25efx2d9TChasePosFP14JPABaseEmitter"
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d8WorldMap10T2DShstar1Fv
	.4byte execute__Q25efx2d9TChasePosFP14JPABaseEmitter
.endobj __vt__Q35efx2d8WorldMap10T2DShstar1
.obj __vt__Q35efx2d8WorldMap11T2DMapFlare, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d9TChasePosFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d8WorldMap11T2DMapFlareFv"
	.4byte "@8@execute__Q25efx2d9TChasePosFP14JPABaseEmitter"
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d8WorldMap11T2DMapFlareFv
	.4byte execute__Q25efx2d9TChasePosFP14JPABaseEmitter
.endobj __vt__Q35efx2d8WorldMap11T2DMapFlare
.obj __vt__Q35efx2d8WorldMap13T2DRocketGlow, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d12TChasePosDirFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d8WorldMap13T2DRocketGlowFv"
	.4byte "@8@execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter"
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d8WorldMap13T2DRocketGlowFv
	.4byte execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter
.endobj __vt__Q35efx2d8WorldMap13T2DRocketGlow
.obj __vt__Q32kh6Screen8WorldMap, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q32kh6Screen8WorldMapFv
	.4byte loadResource__Q32kh6Screen8WorldMapFv
	.4byte init__Q32kh6Screen8WorldMapFRQ34Game8WorldMap7InitArg
	.4byte update__Q32kh6Screen8WorldMapFRQ34Game8WorldMap9UpdateArg
	.4byte draw__Q34Game8WorldMap4BaseFR8Graphics
	.4byte draw1st__Q32kh6Screen8WorldMapFR8Graphics
	.4byte draw2nd__Q32kh6Screen8WorldMapFR8Graphics
	.4byte draw3rd__Q32kh6Screen8WorldMapFR8Graphics
	.4byte draw4th__Q32kh6Screen8WorldMapFR8Graphics
.endobj __vt__Q32kh6Screen8WorldMap
.obj __vt__Q34Game8WorldMap4Base, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game8WorldMap4BaseFv
	.4byte loadResource__Q34Game8WorldMap4BaseFv
	.4byte init__Q34Game8WorldMap4BaseFRQ34Game8WorldMap7InitArg
	.4byte update__Q34Game8WorldMap4BaseFRQ34Game8WorldMap9UpdateArg
	.4byte draw__Q34Game8WorldMap4BaseFR8Graphics
	.4byte draw1st__Q34Game8WorldMap4BaseFR8Graphics
	.4byte draw2nd__Q34Game8WorldMap4BaseFR8Graphics
	.4byte draw3rd__Q34Game8WorldMap4BaseFR8Graphics
	.4byte draw4th__Q34Game8WorldMap4BaseFR8Graphics
.endobj __vt__Q34Game8WorldMap4Base
.obj __vt__Q32kh6Screen16khUtilColorAnmWM, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q32kh6Screen16khUtilColorAnmWMFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q32kh6Screen14khUtilColorAnmFv
	.4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q29P2DScreen4NodeFv
	.4byte do_update__Q32kh6Screen16khUtilColorAnmWMFv
.endobj __vt__Q32kh6Screen16khUtilColorAnmWM
.obj __vt__Q32kh6Screen16khUtilFadePaneWM, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q32kh6Screen16khUtilFadePaneWMFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q32kh6Screen14khUtilFadePaneFv
	.4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q29P2DScreen4NodeFv
	.4byte fadein_finish__Q32kh6Screen14khUtilFadePaneFv
	.4byte fadeout_finish__Q32kh6Screen16khUtilFadePaneWMFv
.endobj __vt__Q32kh6Screen16khUtilFadePaneWM
.obj __vt__Q42kh6Screen14khUtilFadePane10khPaneNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q42kh6Screen14khUtilFadePane10khPaneNodeFv
.endobj __vt__Q42kh6Screen14khUtilFadePane10khPaneNode

.section .bss  # 0x804EFC20 - 0x8051467C
# khWorldMap.cpp
.comm msVal__Q32kh6Screen8WorldMap, 0x7C, 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051FEF0, local
	.float 1.0
.endobj lbl_8051FEF0
.obj lbl_8051FEF4, local
	.float 0.0
.endobj lbl_8051FEF4
.obj lbl_8051FEF8, local
	.float -1.0
.endobj lbl_8051FEF8
.balign 4
.obj lbl_8051FEFC, local
	.asciz "failed"
.endobj lbl_8051FEFC
.balign 4
.obj lbl_8051FF04, local
	.float 0.1
.endobj lbl_8051FF04
.obj lbl_8051FF08, local
	.float 0.7
.endobj lbl_8051FF08
.obj lbl_8051FF0C, local
	.float 0.3
.endobj lbl_8051FF0C
.obj lbl_8051FF10, local
	.float 1000.0
.endobj lbl_8051FF10
.obj lbl_8051FF14, local
	.float 0.5
.endobj lbl_8051FF14
.obj lbl_8051FF18, local
	.float 1.5
.endobj lbl_8051FF18
.obj lbl_8051FF1C, local
	.float -0.1
.endobj lbl_8051FF1C
.obj lbl_8051FF20, local
	.float 32.0
.endobj lbl_8051FF20
.obj lbl_8051FF24, local
	.float 3.0
.endobj lbl_8051FF24
.obj lbl_8051FF28, local # tau
	.float 6.2831855
.endobj lbl_8051FF28
.obj lbl_8051FF2C, local
	.float 0.95
.endobj lbl_8051FF2C
.obj lbl_8051FF30, local
	.float 0.01
.endobj lbl_8051FF30
.obj lbl_8051FF34, local
	.float 57.295776
.endobj lbl_8051FF34
.obj lbl_8051FF38, local
	.float 2.0
.endobj lbl_8051FF38
.obj lbl_8051FF3C, local
	.float 255.0
.endobj lbl_8051FF3C
.balign 8
.obj lbl_8051FF40, local
	.8byte 0x4330000080000000
.endobj lbl_8051FF40
.balign 8
.obj lbl_8051FF48, local
	.8byte 0x4330000000000000
.endobj lbl_8051FF48
.obj lbl_8051FF50, local
	.float 0.99
.endobj lbl_8051FF50
.obj lbl_8051FF54, local # pi
	.float 3.1415927
.endobj lbl_8051FF54
.obj lbl_8051FF58, local
	.float 0.02
.endobj lbl_8051FF58
.obj lbl_8051FF5C, local
	.float -0.05
.endobj lbl_8051FF5C
.obj lbl_8051FF60, local
	.float 0.05
.endobj lbl_8051FF60
.obj lbl_8051FF64, local
	.float 0.2
.endobj lbl_8051FF64
.obj lbl_8051FF68, local
	.float 12.5
.endobj lbl_8051FF68
.obj lbl_8051FF6C, local
	.float 11.5
.endobj lbl_8051FF6C
.obj lbl_8051FF70, local
	.float 0.25
.endobj lbl_8051FF70
.obj lbl_8051FF74, local
	.float 20.0
.endobj lbl_8051FF74
.obj lbl_8051FF78, local
	.float 50.0
.endobj lbl_8051FF78
.obj lbl_8051FF7C, local
	.float 4500.0
.endobj lbl_8051FF7C
.obj lbl_8051FF80, local
	.float 0.001
.endobj lbl_8051FF80
.obj lbl_8051FF84, local
	.float 0.92
.endobj lbl_8051FF84
.obj lbl_8051FF88, local
	.float 800.0
.endobj lbl_8051FF88
.obj lbl_8051FF8C, local
	.float 0.97
.endobj lbl_8051FF8C
.obj lbl_8051FF90, local
	.float 6000.0
.endobj lbl_8051FF90
.obj lbl_8051FF94, local
	.float 0.8
.endobj lbl_8051FF94
.obj lbl_8051FF98, local
	.float 0.9
.endobj lbl_8051FF98
.obj lbl_8051FF9C, local
	.float 1.2
.endobj lbl_8051FF9C
.obj lbl_8051FFA0, local
	.float -0.01
.endobj lbl_8051FFA0
.obj lbl_8051FFA4, local
	.float 0.88
.endobj lbl_8051FFA4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __dt__Q32kh6Screen14khUtilFadePaneFv, weak
/* 803F1B04 003EEA44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F1B08 003EEA48  7C 08 02 A6 */	mflr r0
/* 803F1B0C 003EEA4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F1B10 003EEA50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F1B14 003EEA54  7C 9F 23 78 */	mr r31, r4
/* 803F1B18 003EEA58  93 C1 00 08 */	stw r30, 8(r1)
/* 803F1B1C 003EEA5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F1B20 003EEA60  41 82 00 64 */	beq .L_803F1B84
/* 803F1B24 003EEA64  3C 60 80 4F */	lis r3, __vt__Q32kh6Screen14khUtilFadePane@ha
/* 803F1B28 003EEA68  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 803F1B2C 003EEA6C  38 03 B1 D8 */	addi r0, r3, __vt__Q32kh6Screen14khUtilFadePane@l
/* 803F1B30 003EEA70  90 1E 00 00 */	stw r0, 0(r30)
/* 803F1B34 003EEA74  41 82 00 10 */	beq .L_803F1B44
/* 803F1B38 003EEA78  3C 60 80 4F */	lis r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
/* 803F1B3C 003EEA7C  38 03 A5 50 */	addi r0, r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
/* 803F1B40 003EEA80  90 1E 00 1C */	stw r0, 0x1c(r30)
.L_803F1B44:
/* 803F1B44 003EEA84  28 1E 00 00 */	cmplwi r30, 0
/* 803F1B48 003EEA88  41 82 00 2C */	beq .L_803F1B74
/* 803F1B4C 003EEA8C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803F1B50 003EEA90  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803F1B54 003EEA94  90 1E 00 00 */	stw r0, 0(r30)
/* 803F1B58 003EEA98  41 82 00 1C */	beq .L_803F1B74
/* 803F1B5C 003EEA9C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803F1B60 003EEAA0  7F C3 F3 78 */	mr r3, r30
/* 803F1B64 003EEAA4  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803F1B68 003EEAA8  38 80 00 00 */	li r4, 0
/* 803F1B6C 003EEAAC  90 1E 00 00 */	stw r0, 0(r30)
/* 803F1B70 003EEAB0  48 01 FA 19 */	bl __dt__5CNodeFv
.L_803F1B74:
/* 803F1B74 003EEAB4  7F E0 07 35 */	extsh. r0, r31
/* 803F1B78 003EEAB8  40 81 00 0C */	ble .L_803F1B84
/* 803F1B7C 003EEABC  7F C3 F3 78 */	mr r3, r30
/* 803F1B80 003EEAC0  4B C3 25 35 */	bl __dl__FPv
.L_803F1B84:
/* 803F1B84 003EEAC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F1B88 003EEAC8  7F C3 F3 78 */	mr r3, r30
/* 803F1B8C 003EEACC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F1B90 003EEAD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F1B94 003EEAD4  7C 08 03 A6 */	mtlr r0
/* 803F1B98 003EEAD8  38 21 00 10 */	addi r1, r1, 0x10
/* 803F1B9C 003EEADC  4E 80 00 20 */	blr 
.endfn __dt__Q32kh6Screen14khUtilFadePaneFv

.fn fadeout_finish__Q32kh6Screen16khUtilFadePaneWMFv, global
/* 803F1BA0 003EEAE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F1BA4 003EEAE4  7C 08 02 A6 */	mflr r0
/* 803F1BA8 003EEAE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F1BAC 003EEAEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F1BB0 003EEAF0  7C 7F 1B 78 */	mr r31, r3
/* 803F1BB4 003EEAF4  88 03 00 34 */	lbz r0, 0x34(r3)
/* 803F1BB8 003EEAF8  28 00 00 00 */	cmplwi r0, 0
/* 803F1BBC 003EEAFC  41 82 00 20 */	beq .L_803F1BDC
/* 803F1BC0 003EEB00  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F1BC4 003EEB04  48 00 4E A5 */	bl changeInfo__Q32kh6Screen8WorldMapFv
/* 803F1BC8 003EEB08  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F1BCC 003EEB0C  48 00 58 E9 */	bl effectFirstTime__Q32kh6Screen8WorldMapFv
/* 803F1BD0 003EEB10  38 00 00 00 */	li r0, 0
/* 803F1BD4 003EEB14  90 1F 00 28 */	stw r0, 0x28(r31)
/* 803F1BD8 003EEB18  48 00 00 0C */	b .L_803F1BE4
.L_803F1BDC:
/* 803F1BDC 003EEB1C  38 00 00 02 */	li r0, 2
/* 803F1BE0 003EEB20  90 1F 00 28 */	stw r0, 0x28(r31)
.L_803F1BE4:
/* 803F1BE4 003EEB24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F1BE8 003EEB28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F1BEC 003EEB2C  7C 08 03 A6 */	mtlr r0
/* 803F1BF0 003EEB30  38 21 00 10 */	addi r1, r1, 0x10
/* 803F1BF4 003EEB34  4E 80 00 20 */	blr 
.endfn fadeout_finish__Q32kh6Screen16khUtilFadePaneWMFv

.fn __dt__Q32kh6Screen14khUtilColorAnmFv, weak
/* 803F1BF8 003EEB38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F1BFC 003EEB3C  7C 08 02 A6 */	mflr r0
/* 803F1C00 003EEB40  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F1C04 003EEB44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F1C08 003EEB48  7C 9F 23 78 */	mr r31, r4
/* 803F1C0C 003EEB4C  93 C1 00 08 */	stw r30, 8(r1)
/* 803F1C10 003EEB50  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F1C14 003EEB54  41 82 00 48 */	beq .L_803F1C5C
/* 803F1C18 003EEB58  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen14khUtilColorAnm@ha
/* 803F1C1C 003EEB5C  38 04 B1 B8 */	addi r0, r4, __vt__Q32kh6Screen14khUtilColorAnm@l
/* 803F1C20 003EEB60  90 1E 00 00 */	stw r0, 0(r30)
/* 803F1C24 003EEB64  41 82 00 28 */	beq .L_803F1C4C
/* 803F1C28 003EEB68  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803F1C2C 003EEB6C  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803F1C30 003EEB70  90 1E 00 00 */	stw r0, 0(r30)
/* 803F1C34 003EEB74  41 82 00 18 */	beq .L_803F1C4C
/* 803F1C38 003EEB78  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803F1C3C 003EEB7C  38 80 00 00 */	li r4, 0
/* 803F1C40 003EEB80  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803F1C44 003EEB84  90 1E 00 00 */	stw r0, 0(r30)
/* 803F1C48 003EEB88  48 01 F9 41 */	bl __dt__5CNodeFv
.L_803F1C4C:
/* 803F1C4C 003EEB8C  7F E0 07 35 */	extsh. r0, r31
/* 803F1C50 003EEB90  40 81 00 0C */	ble .L_803F1C5C
/* 803F1C54 003EEB94  7F C3 F3 78 */	mr r3, r30
/* 803F1C58 003EEB98  4B C3 24 5D */	bl __dl__FPv
.L_803F1C5C:
/* 803F1C5C 003EEB9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F1C60 003EEBA0  7F C3 F3 78 */	mr r3, r30
/* 803F1C64 003EEBA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F1C68 003EEBA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F1C6C 003EEBAC  7C 08 03 A6 */	mtlr r0
/* 803F1C70 003EEBB0  38 21 00 10 */	addi r1, r1, 0x10
/* 803F1C74 003EEBB4  4E 80 00 20 */	blr 
.endfn __dt__Q32kh6Screen14khUtilColorAnmFv

.fn do_update__Q32kh6Screen16khUtilColorAnmWMFv, global
/* 803F1C78 003EEBB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803F1C7C 003EEBBC  7C 08 02 A6 */	mflr r0
/* 803F1C80 003EEBC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803F1C84 003EEBC4  38 81 00 08 */	addi r4, r1, 8
/* 803F1C88 003EEBC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803F1C8C 003EEBCC  7C 7F 1B 78 */	mr r31, r3
/* 803F1C90 003EEBD0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 803F1C94 003EEBD4  90 01 00 08 */	stw r0, 8(r1)
/* 803F1C98 003EEBD8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 803F1C9C 003EEBDC  90 01 00 0C */	stw r0, 0xc(r1)
/* 803F1CA0 003EEBE0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F1CA4 003EEBE4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803F1CA8 003EEBE8  7D 89 03 A6 */	mtctr r12
/* 803F1CAC 003EEBEC  4E 80 04 21 */	bctrl 
/* 803F1CB0 003EEBF0  88 1F 00 34 */	lbz r0, 0x34(r31)
/* 803F1CB4 003EEBF4  28 00 00 00 */	cmplwi r0, 0
/* 803F1CB8 003EEBF8  41 82 00 28 */	beq .L_803F1CE0
/* 803F1CBC 003EEBFC  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 803F1CC0 003EEC00  2C 00 00 00 */	cmpwi r0, 0
/* 803F1CC4 003EEC04  40 82 00 1C */	bne .L_803F1CE0
/* 803F1CC8 003EEC08  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 803F1CCC 003EEC0C  C0 22 1B 90 */	lfs f1, lbl_8051FEF0@sda21(r2)
/* 803F1CD0 003EEC10  4B F1 9B 29 */	bl startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
/* 803F1CD4 003EEC14  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 803F1CD8 003EEC18  C0 22 1B 90 */	lfs f1, lbl_8051FEF0@sda21(r2)
/* 803F1CDC 003EEC1C  4B F1 9B 1D */	bl startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
.L_803F1CE0:
/* 803F1CE0 003EEC20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803F1CE4 003EEC24  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803F1CE8 003EEC28  7C 08 03 A6 */	mtlr r0
/* 803F1CEC 003EEC2C  38 21 00 20 */	addi r1, r1, 0x20
/* 803F1CF0 003EEC30  4E 80 00 20 */	blr 
.endfn do_update__Q32kh6Screen16khUtilColorAnmWMFv

.fn __ct__Q32kh6Screen8WorldMapFv, global
/* 803F1CF4 003EEC34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F1CF8 003EEC38  7C 08 02 A6 */	mflr r0
/* 803F1CFC 003EEC3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F1D00 003EEC40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F1D04 003EEC44  7C 7F 1B 78 */	mr r31, r3
/* 803F1D08 003EEC48  4B C2 B2 C5 */	bl __ct__11JKRDisposerFv
/* 803F1D0C 003EEC4C  3C 80 80 4F */	lis r4, __vt__Q34Game8WorldMap4Base@ha
/* 803F1D10 003EEC50  3C 60 80 4F */	lis r3, __vt__Q32kh6Screen8WorldMap@ha
/* 803F1D14 003EEC54  38 04 A4 E0 */	addi r0, r4, __vt__Q34Game8WorldMap4Base@l
/* 803F1D18 003EEC58  38 C0 00 00 */	li r6, 0
/* 803F1D1C 003EEC5C  90 1F 00 00 */	stw r0, 0(r31)
/* 803F1D20 003EEC60  38 03 A4 B4 */	addi r0, r3, __vt__Q32kh6Screen8WorldMap@l
/* 803F1D24 003EEC64  C0 42 1B 94 */	lfs f2, lbl_8051FEF4@sda21(r2)
/* 803F1D28 003EEC68  90 1F 00 00 */	stw r0, 0(r31)
/* 803F1D2C 003EEC6C  C0 22 1B 90 */	lfs f1, lbl_8051FEF0@sda21(r2)
/* 803F1D30 003EEC70  90 DF 00 18 */	stw r6, 0x18(r31)
/* 803F1D34 003EEC74  C0 02 1B 98 */	lfs f0, lbl_8051FEF8@sda21(r2)
/* 803F1D38 003EEC78  90 DF 00 20 */	stw r6, 0x20(r31)
/* 803F1D3C 003EEC7C  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 803F1D40 003EEC80  90 DF 00 24 */	stw r6, 0x24(r31)
/* 803F1D44 003EEC84  90 DF 00 28 */	stw r6, 0x28(r31)
/* 803F1D48 003EEC88  98 DF 00 2D */	stb r6, 0x2d(r31)
/* 803F1D4C 003EEC8C  98 DF 00 2C */	stb r6, 0x2c(r31)
/* 803F1D50 003EEC90  98 DF 00 2E */	stb r6, 0x2e(r31)
/* 803F1D54 003EEC94  90 DF 00 30 */	stw r6, 0x30(r31)
/* 803F1D58 003EEC98  90 DF 00 38 */	stw r6, 0x38(r31)
/* 803F1D5C 003EEC9C  90 DF 00 34 */	stw r6, 0x34(r31)
/* 803F1D60 003EECA0  90 DF 00 3C */	stw r6, 0x3c(r31)
/* 803F1D64 003EECA4  90 DF 00 44 */	stw r6, 0x44(r31)
/* 803F1D68 003EECA8  90 DF 00 40 */	stw r6, 0x40(r31)
/* 803F1D6C 003EECAC  90 DF 00 48 */	stw r6, 0x48(r31)
/* 803F1D70 003EECB0  90 DF 00 4C */	stw r6, 0x4c(r31)
/* 803F1D74 003EECB4  90 DF 00 50 */	stw r6, 0x50(r31)
/* 803F1D78 003EECB8  90 DF 00 54 */	stw r6, 0x54(r31)
/* 803F1D7C 003EECBC  90 DF 00 60 */	stw r6, 0x60(r31)
/* 803F1D80 003EECC0  90 DF 00 5C */	stw r6, 0x5c(r31)
/* 803F1D84 003EECC4  90 DF 00 58 */	stw r6, 0x58(r31)
/* 803F1D88 003EECC8  D0 5F 00 8C */	stfs f2, 0x8c(r31)
/* 803F1D8C 003EECCC  D0 5F 00 88 */	stfs f2, 0x88(r31)
/* 803F1D90 003EECD0  D0 5F 00 84 */	stfs f2, 0x84(r31)
/* 803F1D94 003EECD4  D0 5F 00 80 */	stfs f2, 0x80(r31)
/* 803F1D98 003EECD8  D0 5F 00 7C */	stfs f2, 0x7c(r31)
/* 803F1D9C 003EECDC  D0 5F 00 78 */	stfs f2, 0x78(r31)
/* 803F1DA0 003EECE0  D0 5F 00 74 */	stfs f2, 0x74(r31)
/* 803F1DA4 003EECE4  D0 5F 00 70 */	stfs f2, 0x70(r31)
/* 803F1DA8 003EECE8  D0 5F 00 6C */	stfs f2, 0x6c(r31)
/* 803F1DAC 003EECEC  D0 5F 00 68 */	stfs f2, 0x68(r31)
/* 803F1DB0 003EECF0  D0 5F 00 94 */	stfs f2, 0x94(r31)
/* 803F1DB4 003EECF4  D0 5F 00 90 */	stfs f2, 0x90(r31)
/* 803F1DB8 003EECF8  D0 3F 00 98 */	stfs f1, 0x98(r31)
/* 803F1DBC 003EECFC  D0 5F 00 9C */	stfs f2, 0x9c(r31)
/* 803F1DC0 003EED00  D0 5F 00 A0 */	stfs f2, 0xa0(r31)
/* 803F1DC4 003EED04  D0 5F 00 A4 */	stfs f2, 0xa4(r31)
/* 803F1DC8 003EED08  D0 5F 00 A8 */	stfs f2, 0xa8(r31)
/* 803F1DCC 003EED0C  D0 5F 00 AC */	stfs f2, 0xac(r31)
/* 803F1DD0 003EED10  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 803F1DD4 003EED14  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F1DD8 003EED18  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 803F1DDC 003EED1C  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F1DE0 003EED20  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 803F1DE4 003EED24  D0 5F 00 BC */	stfs f2, 0xbc(r31)
/* 803F1DE8 003EED28  90 DF 00 C0 */	stw r6, 0xc0(r31)
/* 803F1DEC 003EED2C  90 DF 00 C4 */	stw r6, 0xc4(r31)
/* 803F1DF0 003EED30  90 DF 00 C8 */	stw r6, 0xc8(r31)
/* 803F1DF4 003EED34  90 DF 00 CC */	stw r6, 0xcc(r31)
/* 803F1DF8 003EED38  D0 5F 00 D0 */	stfs f2, 0xd0(r31)
/* 803F1DFC 003EED3C  D0 5F 00 D4 */	stfs f2, 0xd4(r31)
/* 803F1E00 003EED40  D0 5F 00 D8 */	stfs f2, 0xd8(r31)
/* 803F1E04 003EED44  D0 3F 00 DC */	stfs f1, 0xdc(r31)
/* 803F1E08 003EED48  D0 5F 00 E0 */	stfs f2, 0xe0(r31)
/* 803F1E0C 003EED4C  D0 5F 00 E4 */	stfs f2, 0xe4(r31)
/* 803F1E10 003EED50  D0 5F 00 E8 */	stfs f2, 0xe8(r31)
/* 803F1E14 003EED54  D0 5F 00 EC */	stfs f2, 0xec(r31)
/* 803F1E18 003EED58  38 A0 00 0D */	li r5, 0xd
/* 803F1E1C 003EED5C  38 80 00 01 */	li r4, 1
/* 803F1E20 003EED60  38 00 00 04 */	li r0, 4
/* 803F1E24 003EED64  90 DF 00 F0 */	stw r6, 0xf0(r31)
/* 803F1E28 003EED68  7F E3 FB 78 */	mr r3, r31
/* 803F1E2C 003EED6C  90 DF 00 F4 */	stw r6, 0xf4(r31)
/* 803F1E30 003EED70  90 DF 00 F8 */	stw r6, 0xf8(r31)
/* 803F1E34 003EED74  90 DF 00 FC */	stw r6, 0xfc(r31)
/* 803F1E38 003EED78  90 DF 01 08 */	stw r6, 0x108(r31)
/* 803F1E3C 003EED7C  90 DF 01 04 */	stw r6, 0x104(r31)
/* 803F1E40 003EED80  90 DF 01 00 */	stw r6, 0x100(r31)
/* 803F1E44 003EED84  90 DF 01 30 */	stw r6, 0x130(r31)
/* 803F1E48 003EED88  90 DF 01 2C */	stw r6, 0x12c(r31)
/* 803F1E4C 003EED8C  90 DF 01 1C */	stw r6, 0x11c(r31)
/* 803F1E50 003EED90  90 DF 01 0C */	stw r6, 0x10c(r31)
/* 803F1E54 003EED94  90 DF 01 44 */	stw r6, 0x144(r31)
/* 803F1E58 003EED98  90 DF 01 34 */	stw r6, 0x134(r31)
/* 803F1E5C 003EED9C  90 DF 01 20 */	stw r6, 0x120(r31)
/* 803F1E60 003EEDA0  90 DF 01 10 */	stw r6, 0x110(r31)
/* 803F1E64 003EEDA4  90 DF 01 48 */	stw r6, 0x148(r31)
/* 803F1E68 003EEDA8  90 DF 01 38 */	stw r6, 0x138(r31)
/* 803F1E6C 003EEDAC  90 DF 01 24 */	stw r6, 0x124(r31)
/* 803F1E70 003EEDB0  90 DF 01 14 */	stw r6, 0x114(r31)
/* 803F1E74 003EEDB4  90 DF 01 4C */	stw r6, 0x14c(r31)
/* 803F1E78 003EEDB8  90 DF 01 3C */	stw r6, 0x13c(r31)
/* 803F1E7C 003EEDBC  90 DF 01 28 */	stw r6, 0x128(r31)
/* 803F1E80 003EEDC0  90 DF 01 18 */	stw r6, 0x118(r31)
/* 803F1E84 003EEDC4  90 DF 01 50 */	stw r6, 0x150(r31)
/* 803F1E88 003EEDC8  90 DF 01 40 */	stw r6, 0x140(r31)
/* 803F1E8C 003EEDCC  90 DF 01 54 */	stw r6, 0x154(r31)
/* 803F1E90 003EEDD0  90 DF 01 58 */	stw r6, 0x158(r31)
/* 803F1E94 003EEDD4  90 DF 01 5C */	stw r6, 0x15c(r31)
/* 803F1E98 003EEDD8  90 DF 01 60 */	stw r6, 0x160(r31)
/* 803F1E9C 003EEDDC  90 DF 01 64 */	stw r6, 0x164(r31)
/* 803F1EA0 003EEDE0  90 DF 01 68 */	stw r6, 0x168(r31)
/* 803F1EA4 003EEDE4  90 DF 01 6C */	stw r6, 0x16c(r31)
/* 803F1EA8 003EEDE8  90 DF 01 70 */	stw r6, 0x170(r31)
/* 803F1EAC 003EEDEC  90 BF 01 74 */	stw r5, 0x174(r31)
/* 803F1EB0 003EEDF0  90 9F 01 78 */	stw r4, 0x178(r31)
/* 803F1EB4 003EEDF4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F1EB8 003EEDF8  98 9F 01 80 */	stb r4, 0x180(r31)
/* 803F1EBC 003EEDFC  98 DF 01 82 */	stb r6, 0x182(r31)
/* 803F1EC0 003EEE00  98 DF 01 81 */	stb r6, 0x181(r31)
/* 803F1EC4 003EEE04  98 DF 01 83 */	stb r6, 0x183(r31)
/* 803F1EC8 003EEE08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F1ECC 003EEE0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F1ED0 003EEE10  7C 08 03 A6 */	mtlr r0
/* 803F1ED4 003EEE14  38 21 00 10 */	addi r1, r1, 0x10
/* 803F1ED8 003EEE18  4E 80 00 20 */	blr 
.endfn __ct__Q32kh6Screen8WorldMapFv

.fn __dt__Q34Game8WorldMap4BaseFv, weak
/* 803F1EDC 003EEE1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F1EE0 003EEE20  7C 08 02 A6 */	mflr r0
/* 803F1EE4 003EEE24  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F1EE8 003EEE28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F1EEC 003EEE2C  7C 9F 23 78 */	mr r31, r4
/* 803F1EF0 003EEE30  93 C1 00 08 */	stw r30, 8(r1)
/* 803F1EF4 003EEE34  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F1EF8 003EEE38  41 82 00 28 */	beq .L_803F1F20
/* 803F1EFC 003EEE3C  3C A0 80 4F */	lis r5, __vt__Q34Game8WorldMap4Base@ha
/* 803F1F00 003EEE40  38 80 00 00 */	li r4, 0
/* 803F1F04 003EEE44  38 05 A4 E0 */	addi r0, r5, __vt__Q34Game8WorldMap4Base@l
/* 803F1F08 003EEE48  90 1E 00 00 */	stw r0, 0(r30)
/* 803F1F0C 003EEE4C  4B C2 B1 29 */	bl __dt__11JKRDisposerFv
/* 803F1F10 003EEE50  7F E0 07 35 */	extsh. r0, r31
/* 803F1F14 003EEE54  40 81 00 0C */	ble .L_803F1F20
/* 803F1F18 003EEE58  7F C3 F3 78 */	mr r3, r30
/* 803F1F1C 003EEE5C  4B C3 21 99 */	bl __dl__FPv
.L_803F1F20:
/* 803F1F20 003EEE60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F1F24 003EEE64  7F C3 F3 78 */	mr r3, r30
/* 803F1F28 003EEE68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F1F2C 003EEE6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F1F30 003EEE70  7C 08 03 A6 */	mtlr r0
/* 803F1F34 003EEE74  38 21 00 10 */	addi r1, r1, 0x10
/* 803F1F38 003EEE78  4E 80 00 20 */	blr 
.endfn __dt__Q34Game8WorldMap4BaseFv

.fn init__Q32kh6Screen8WorldMapFRQ34Game8WorldMap7InitArg, global
/* 803F1F3C 003EEE7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F1F40 003EEE80  7C 08 02 A6 */	mflr r0
/* 803F1F44 003EEE84  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F1F48 003EEE88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F1F4C 003EEE8C  7C 7F 1B 78 */	mr r31, r3
/* 803F1F50 003EEE90  93 C1 00 08 */	stw r30, 8(r1)
/* 803F1F54 003EEE94  3B C0 00 00 */	li r30, 0
/* 803F1F58 003EEE98  80 04 00 00 */	lwz r0, 0(r4)
/* 803F1F5C 003EEE9C  90 03 00 18 */	stw r0, 0x18(r3)
/* 803F1F60 003EEEA0  80 04 00 04 */	lwz r0, 4(r4)
/* 803F1F64 003EEEA4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803F1F68 003EEEA8  80 04 00 08 */	lwz r0, 8(r4)
/* 803F1F6C 003EEEAC  90 03 00 20 */	stw r0, 0x20(r3)
/* 803F1F70 003EEEB0  80 04 00 0C */	lwz r0, 0xc(r4)
/* 803F1F74 003EEEB4  90 03 00 24 */	stw r0, 0x24(r3)
/* 803F1F78 003EEEB8  80 04 00 10 */	lwz r0, 0x10(r4)
/* 803F1F7C 003EEEBC  90 03 00 28 */	stw r0, 0x28(r3)
/* 803F1F80 003EEEC0  88 04 00 14 */	lbz r0, 0x14(r4)
/* 803F1F84 003EEEC4  98 03 00 2C */	stb r0, 0x2c(r3)
/* 803F1F88 003EEEC8  88 04 00 15 */	lbz r0, 0x15(r4)
/* 803F1F8C 003EEECC  98 03 00 2D */	stb r0, 0x2d(r3)
/* 803F1F90 003EEED0  88 04 00 16 */	lbz r0, 0x16(r4)
/* 803F1F94 003EEED4  98 03 00 2E */	stb r0, 0x2e(r3)
.L_803F1F98:
/* 803F1F98 003EEED8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F1F9C 003EEEDC  7F C4 F3 78 */	mr r4, r30
/* 803F1FA0 003EEEE0  4B DF 74 E1 */	bl courseOpen__Q24Game8PlayDataFi
/* 803F1FA4 003EEEE4  88 1F 01 81 */	lbz r0, 0x181(r31)
/* 803F1FA8 003EEEE8  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 803F1FAC 003EEEEC  7F C4 F3 78 */	mr r4, r30
/* 803F1FB0 003EEEF0  7C 00 1A 14 */	add r0, r0, r3
/* 803F1FB4 003EEEF4  98 1F 01 81 */	stb r0, 0x181(r31)
/* 803F1FB8 003EEEF8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F1FBC 003EEEFC  4B DF 75 45 */	bl courseJustOpen__Q24Game8PlayDataFi
/* 803F1FC0 003EEF00  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 803F1FC4 003EEF04  88 1F 01 82 */	lbz r0, 0x182(r31)
/* 803F1FC8 003EEF08  7C 63 F0 30 */	slw r3, r3, r30
/* 803F1FCC 003EEF0C  3B DE 00 01 */	addi r30, r30, 1
/* 803F1FD0 003EEF10  7C 00 1B 78 */	or r0, r0, r3
/* 803F1FD4 003EEF14  2C 1E 00 04 */	cmpwi r30, 4
/* 803F1FD8 003EEF18  98 1F 01 82 */	stb r0, 0x182(r31)
/* 803F1FDC 003EEF1C  41 80 FF BC */	blt .L_803F1F98
/* 803F1FE0 003EEF20  88 7F 01 82 */	lbz r3, 0x182(r31)
/* 803F1FE4 003EEF24  54 60 20 36 */	slwi r0, r3, 4
/* 803F1FE8 003EEF28  7C 60 03 78 */	or r0, r3, r0
/* 803F1FEC 003EEF2C  98 1F 01 82 */	stb r0, 0x182(r31)
/* 803F1FF0 003EEF30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F1FF4 003EEF34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F1FF8 003EEF38  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F1FFC 003EEF3C  7C 08 03 A6 */	mtlr r0
/* 803F2000 003EEF40  38 21 00 10 */	addi r1, r1, 0x10
/* 803F2004 003EEF44  4E 80 00 20 */	blr 
.endfn init__Q32kh6Screen8WorldMapFRQ34Game8WorldMap7InitArg

.fn loadResource__Q32kh6Screen8WorldMapFv, global
/* 803F2008 003EEF48  94 21 FD A0 */	stwu r1, -0x260(r1)
/* 803F200C 003EEF4C  7C 08 02 A6 */	mflr r0
/* 803F2010 003EEF50  90 01 02 64 */	stw r0, 0x264(r1)
/* 803F2014 003EEF54  BE 61 02 2C */	stmw r19, 0x22c(r1)
/* 803F2018 003EEF58  7C 7F 1B 78 */	mr r31, r3
/* 803F201C 003EEF5C  3C 60 80 49 */	lis r3, lbl_80497C70@ha
/* 803F2020 003EEF60  3B C3 7C 70 */	addi r30, r3, lbl_80497C70@l
/* 803F2024 003EEF64  83 AD 88 2C */	lwz r29, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803F2028 003EEF68  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 803F202C 003EEF6C  4B C3 15 79 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803F2030 003EEF70  38 00 00 10 */	li r0, 0x10
/* 803F2034 003EEF74  38 A1 00 DC */	addi r5, r1, 0xdc
/* 803F2038 003EEF78  38 9E 00 38 */	addi r4, r30, 0x38
/* 803F203C 003EEF7C  3A 80 00 00 */	li r20, 0
/* 803F2040 003EEF80  7C 09 03 A6 */	mtctr r0
.L_803F2044:
/* 803F2044 003EEF84  80 64 00 04 */	lwz r3, 4(r4)
/* 803F2048 003EEF88  84 04 00 08 */	lwzu r0, 8(r4)
/* 803F204C 003EEF8C  90 65 00 04 */	stw r3, 4(r5)
/* 803F2050 003EEF90  94 05 00 08 */	stwu r0, 8(r5)
/* 803F2054 003EEF94  42 00 FF F0 */	bdnz .L_803F2044
/* 803F2058 003EEF98  38 61 00 E0 */	addi r3, r1, 0xe0
/* 803F205C 003EEF9C  38 9E 02 B8 */	addi r4, r30, 0x2b8
/* 803F2060 003EEFA0  4B F2 5E ED */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 803F2064 003EEFA4  38 61 00 B0 */	addi r3, r1, 0xb0
/* 803F2068 003EEFA8  38 81 00 E0 */	addi r4, r1, 0xe0
/* 803F206C 003EEFAC  48 05 A5 6D */	bl __ct__Q212LoadResource3ArgFPCc
/* 803F2070 003EEFB0  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 803F2074 003EEFB4  38 81 00 B0 */	addi r4, r1, 0xb0
/* 803F2078 003EEFB8  48 05 A6 9D */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 803F207C 003EEFBC  28 03 00 00 */	cmplwi r3, 0
/* 803F2080 003EEFC0  41 82 00 0C */	beq .L_803F208C
/* 803F2084 003EEFC4  82 83 00 34 */	lwz r20, 0x34(r3)
/* 803F2088 003EEFC8  48 00 00 18 */	b .L_803F20A0
.L_803F208C:
/* 803F208C 003EEFCC  38 7E 00 00 */	addi r3, r30, 0
/* 803F2090 003EEFD0  38 80 01 16 */	li r4, 0x116
/* 803F2094 003EEFD4  38 A2 1B 9C */	addi r5, r2, lbl_8051FEFC@sda21
/* 803F2098 003EEFD8  4C C6 31 82 */	crclr 6
/* 803F209C 003EEFDC  4B C3 85 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803F20A0:
/* 803F20A0 003EEFE0  28 14 00 00 */	cmplwi r20, 0
/* 803F20A4 003EEFE4  40 82 00 18 */	bne .L_803F20BC
/* 803F20A8 003EEFE8  38 7E 00 00 */	addi r3, r30, 0
/* 803F20AC 003EEFEC  38 BE 00 30 */	addi r5, r30, 0x30
/* 803F20B0 003EEFF0  38 80 01 17 */	li r4, 0x117
/* 803F20B4 003EEFF4  4C C6 31 82 */	crclr 6
/* 803F20B8 003EEFF8  4B C3 85 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803F20BC:
/* 803F20BC 003EEFFC  38 60 01 48 */	li r3, 0x148
/* 803F20C0 003EF000  4B C3 1D E5 */	bl __nw__FUl
/* 803F20C4 003EF004  7C 60 1B 79 */	or. r0, r3, r3
/* 803F20C8 003EF008  41 82 00 0C */	beq .L_803F20D4
/* 803F20CC 003EF00C  48 04 2C E1 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 803F20D0 003EF010  7C 60 1B 78 */	mr r0, r3
.L_803F20D4:
/* 803F20D4 003EF014  90 1F 00 30 */	stw r0, 0x30(r31)
/* 803F20D8 003EF018  7E 86 A3 78 */	mr r6, r20
/* 803F20DC 003EF01C  38 9E 02 C8 */	addi r4, r30, 0x2c8
/* 803F20E0 003EF020  3C A0 01 04 */	lis r5, 0x104
/* 803F20E4 003EF024  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F20E8 003EF028  4B C4 D5 3D */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803F20EC 003EF02C  7E 84 A3 78 */	mr r4, r20
/* 803F20F0 003EF030  38 7E 02 E0 */	addi r3, r30, 0x2e0
/* 803F20F4 003EF034  4B C3 0F 25 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F20F8 003EF038  7C 73 1B 78 */	mr r19, r3
/* 803F20FC 003EF03C  4B C5 58 21 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F2100 003EF040  90 7F 00 34 */	stw r3, 0x34(r31)
/* 803F2104 003EF044  7E 63 9B 78 */	mr r3, r19
/* 803F2108 003EF048  4B C5 58 15 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F210C 003EF04C  90 7F 00 38 */	stw r3, 0x38(r31)
/* 803F2110 003EF050  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F2114 003EF054  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803F2118 003EF058  81 83 00 00 */	lwz r12, 0(r3)
/* 803F211C 003EF05C  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 803F2120 003EF060  7D 89 03 A6 */	mtctr r12
/* 803F2124 003EF064  4E 80 04 21 */	bctrl 
/* 803F2128 003EF068  3A E0 00 00 */	li r23, 0
/* 803F212C 003EF06C  3E C0 61 6E */	lis r22, 0x616E6430@ha
/* 803F2130 003EF070  3E A0 67 68 */	lis r21, 0x6768
/* 803F2134 003EF074  3E 60 00 50 */	lis r19, 0x50
.L_803F2138:
/* 803F2138 003EF078  7E E5 BB 78 */	mr r5, r23
/* 803F213C 003EF07C  38 96 64 30 */	addi r4, r22, 0x616E6430@l
/* 803F2140 003EF080  38 60 50 6C */	li r3, 0x506c
/* 803F2144 003EF084  48 01 92 B1 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F2148 003EF088  7C 65 1B 78 */	mr r5, r3
/* 803F214C 003EF08C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F2150 003EF090  7C 86 23 78 */	mr r6, r4
/* 803F2154 003EF094  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2158 003EF098  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F215C 003EF09C  7D 89 03 A6 */	mtctr r12
/* 803F2160 003EF0A0  4E 80 04 21 */	bctrl 
/* 803F2164 003EF0A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2168 003EF0A8  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 803F216C 003EF0AC  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 803F2170 003EF0B0  7D 89 03 A6 */	mtctr r12
/* 803F2174 003EF0B4  4E 80 04 21 */	bctrl 
/* 803F2178 003EF0B8  7E E5 BB 78 */	mr r5, r23
/* 803F217C 003EF0BC  38 95 74 30 */	addi r4, r21, 0x7430
/* 803F2180 003EF0C0  38 73 6C 69 */	addi r3, r19, 0x6c69
/* 803F2184 003EF0C4  48 01 92 71 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F2188 003EF0C8  7C 65 1B 78 */	mr r5, r3
/* 803F218C 003EF0CC  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F2190 003EF0D0  7C 86 23 78 */	mr r6, r4
/* 803F2194 003EF0D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2198 003EF0D8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F219C 003EF0DC  7D 89 03 A6 */	mtctr r12
/* 803F21A0 003EF0E0  4E 80 04 21 */	bctrl 
/* 803F21A4 003EF0E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F21A8 003EF0E8  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 803F21AC 003EF0EC  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 803F21B0 003EF0F0  7D 89 03 A6 */	mtctr r12
/* 803F21B4 003EF0F4  4E 80 04 21 */	bctrl 
/* 803F21B8 003EF0F8  3A F7 00 01 */	addi r23, r23, 1
/* 803F21BC 003EF0FC  2C 17 00 04 */	cmpwi r23, 4
/* 803F21C0 003EF100  41 80 FF 78 */	blt .L_803F2138
/* 803F21C4 003EF104  7E 84 A3 78 */	mr r4, r20
/* 803F21C8 003EF108  38 7E 02 F8 */	addi r3, r30, 0x2f8
/* 803F21CC 003EF10C  4B C3 0E 4D */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F21D0 003EF110  4B C5 57 4D */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F21D4 003EF114  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 803F21D8 003EF118  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F21DC 003EF11C  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 803F21E0 003EF120  81 83 00 00 */	lwz r12, 0(r3)
/* 803F21E4 003EF124  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803F21E8 003EF128  7D 89 03 A6 */	mtctr r12
/* 803F21EC 003EF12C  4E 80 04 21 */	bctrl 
/* 803F21F0 003EF130  7E 84 A3 78 */	mr r4, r20
/* 803F21F4 003EF134  38 7E 03 10 */	addi r3, r30, 0x310
/* 803F21F8 003EF138  4B C3 0E 21 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F21FC 003EF13C  4B C5 57 21 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F2200 003EF140  90 7F 00 40 */	stw r3, 0x40(r31)
/* 803F2204 003EF144  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F2208 003EF148  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 803F220C 003EF14C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2210 003EF150  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803F2214 003EF154  7D 89 03 A6 */	mtctr r12
/* 803F2218 003EF158  4E 80 04 21 */	bctrl 
/* 803F221C 003EF15C  7E 84 A3 78 */	mr r4, r20
/* 803F2220 003EF160  38 7E 03 28 */	addi r3, r30, 0x328
/* 803F2224 003EF164  4B C3 0D F5 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F2228 003EF168  4B C5 56 F5 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F222C 003EF16C  90 7F 00 44 */	stw r3, 0x44(r31)
/* 803F2230 003EF170  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F2234 003EF174  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 803F2238 003EF178  81 83 00 00 */	lwz r12, 0(r3)
/* 803F223C 003EF17C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803F2240 003EF180  7D 89 03 A6 */	mtctr r12
/* 803F2244 003EF184  4E 80 04 21 */	bctrl 
/* 803F2248 003EF188  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F224C 003EF18C  3A 61 00 70 */	addi r19, r1, 0x70
/* 803F2250 003EF190  80 FE 01 34 */	lwz r7, 0x134(r30)
/* 803F2254 003EF194  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 803F2258 003EF198  80 DE 01 38 */	lwz r6, 0x138(r30)
/* 803F225C 003EF19C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803F2260 003EF1A0  80 BE 01 3C */	lwz r5, 0x13c(r30)
/* 803F2264 003EF1A4  80 9E 01 40 */	lwz r4, 0x140(r30)
/* 803F2268 003EF1A8  80 7E 01 44 */	lwz r3, 0x144(r30)
/* 803F226C 003EF1AC  80 1E 01 48 */	lwz r0, 0x148(r30)
/* 803F2270 003EF1B0  90 E1 00 70 */	stw r7, 0x70(r1)
/* 803F2274 003EF1B4  90 C1 00 74 */	stw r6, 0x74(r1)
/* 803F2278 003EF1B8  90 A1 00 78 */	stw r5, 0x78(r1)
/* 803F227C 003EF1BC  90 81 00 7C */	stw r4, 0x7c(r1)
/* 803F2280 003EF1C0  90 61 00 80 */	stw r3, 0x80(r1)
/* 803F2284 003EF1C4  90 01 00 84 */	stw r0, 0x84(r1)
/* 803F2288 003EF1C8  41 82 00 08 */	beq .L_803F2290
/* 803F228C 003EF1CC  3A 61 00 7C */	addi r19, r1, 0x7c
.L_803F2290:
/* 803F2290 003EF1D0  38 60 01 38 */	li r3, 0x138
/* 803F2294 003EF1D4  4B C3 1C 11 */	bl __nw__FUl
/* 803F2298 003EF1D8  7C 60 1B 79 */	or. r0, r3, r3
/* 803F229C 003EF1DC  41 82 00 0C */	beq .L_803F22A8
/* 803F22A0 003EF1E0  48 04 28 21 */	bl __ct__Q29P2DScreen3MgrFv
/* 803F22A4 003EF1E4  7C 60 1B 78 */	mr r0, r3
.L_803F22A8:
/* 803F22A8 003EF1E8  90 1F 00 48 */	stw r0, 0x48(r31)
/* 803F22AC 003EF1EC  7E 86 A3 78 */	mr r6, r20
/* 803F22B0 003EF1F0  80 93 00 00 */	lwz r4, 0(r19)
/* 803F22B4 003EF1F4  3C A0 00 04 */	lis r5, 4
/* 803F22B8 003EF1F8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F22BC 003EF1FC  4B C4 D3 69 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803F22C0 003EF200  80 73 00 04 */	lwz r3, 4(r19)
/* 803F22C4 003EF204  7E 84 A3 78 */	mr r4, r20
/* 803F22C8 003EF208  4B C3 0D 51 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F22CC 003EF20C  4B C5 56 51 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F22D0 003EF210  90 7F 00 4C */	stw r3, 0x4c(r31)
/* 803F22D4 003EF214  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F22D8 003EF218  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 803F22DC 003EF21C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F22E0 003EF220  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 803F22E4 003EF224  7D 89 03 A6 */	mtctr r12
/* 803F22E8 003EF228  4E 80 04 21 */	bctrl 
/* 803F22EC 003EF22C  80 73 00 08 */	lwz r3, 8(r19)
/* 803F22F0 003EF230  7E 84 A3 78 */	mr r4, r20
/* 803F22F4 003EF234  4B C3 0D 25 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F22F8 003EF238  4B C5 56 25 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F22FC 003EF23C  90 7F 00 50 */	stw r3, 0x50(r31)
/* 803F2300 003EF240  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F2304 003EF244  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 803F2308 003EF248  81 83 00 00 */	lwz r12, 0(r3)
/* 803F230C 003EF24C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 803F2310 003EF250  7D 89 03 A6 */	mtctr r12
/* 803F2314 003EF254  4E 80 04 21 */	bctrl 
/* 803F2318 003EF258  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F231C 003EF25C  38 80 00 01 */	li r4, 1
/* 803F2320 003EF260  4B DF 4D B9 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 803F2324 003EF264  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F2328 003EF268  41 82 00 14 */	beq .L_803F233C
/* 803F232C 003EF26C  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 803F2330 003EF270  38 03 00 01 */	addi r0, r3, 1
/* 803F2334 003EF274  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 803F2338 003EF278  48 00 00 2C */	b .L_803F2364
.L_803F233C:
/* 803F233C 003EF27C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F2340 003EF280  3C 80 4E 52 */	lis r4, 0x4E524544@ha
/* 803F2344 003EF284  38 C4 45 44 */	addi r6, r4, 0x4E524544@l
/* 803F2348 003EF288  38 A0 00 00 */	li r5, 0
/* 803F234C 003EF28C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2350 003EF290  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2354 003EF294  7D 89 03 A6 */	mtctr r12
/* 803F2358 003EF298  4E 80 04 21 */	bctrl 
/* 803F235C 003EF29C  38 00 00 00 */	li r0, 0
/* 803F2360 003EF2A0  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F2364:
/* 803F2364 003EF2A4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F2368 003EF2A8  38 80 00 02 */	li r4, 2
/* 803F236C 003EF2AC  4B DF 4D 6D */	bl hasBootContainer__Q24Game8PlayDataFi
/* 803F2370 003EF2B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F2374 003EF2B4  41 82 00 14 */	beq .L_803F2388
/* 803F2378 003EF2B8  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 803F237C 003EF2BC  38 03 00 01 */	addi r0, r3, 1
/* 803F2380 003EF2C0  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 803F2384 003EF2C4  48 00 00 30 */	b .L_803F23B4
.L_803F2388:
/* 803F2388 003EF2C8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F238C 003EF2CC  3C A0 4C 4C */	lis r5, 0x4C4C4F57@ha
/* 803F2390 003EF2D0  3C 80 00 4E */	lis r4, 0x004E5945@ha
/* 803F2394 003EF2D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2398 003EF2D8  38 C5 4F 57 */	addi r6, r5, 0x4C4C4F57@l
/* 803F239C 003EF2DC  38 A4 59 45 */	addi r5, r4, 0x004E5945@l
/* 803F23A0 003EF2E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F23A4 003EF2E4  7D 89 03 A6 */	mtctr r12
/* 803F23A8 003EF2E8  4E 80 04 21 */	bctrl 
/* 803F23AC 003EF2EC  38 00 00 00 */	li r0, 0
/* 803F23B0 003EF2F0  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F23B4:
/* 803F23B4 003EF2F4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F23B8 003EF2F8  38 80 00 00 */	li r4, 0
/* 803F23BC 003EF2FC  4B DF 4D 1D */	bl hasBootContainer__Q24Game8PlayDataFi
/* 803F23C0 003EF300  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F23C4 003EF304  41 82 00 14 */	beq .L_803F23D8
/* 803F23C8 003EF308  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 803F23CC 003EF30C  38 03 00 01 */	addi r0, r3, 1
/* 803F23D0 003EF310  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 803F23D4 003EF314  48 00 00 2C */	b .L_803F2400
.L_803F23D8:
/* 803F23D8 003EF318  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F23DC 003EF31C  3C 80 42 4C */	lis r4, 0x424C5545@ha
/* 803F23E0 003EF320  38 C4 55 45 */	addi r6, r4, 0x424C5545@l
/* 803F23E4 003EF324  38 A0 00 4E */	li r5, 0x4e
/* 803F23E8 003EF328  81 83 00 00 */	lwz r12, 0(r3)
/* 803F23EC 003EF32C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F23F0 003EF330  7D 89 03 A6 */	mtctr r12
/* 803F23F4 003EF334  4E 80 04 21 */	bctrl 
/* 803F23F8 003EF338  38 00 00 00 */	li r0, 0
/* 803F23FC 003EF33C  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F2400:
/* 803F2400 003EF340  82 7F 00 F4 */	lwz r19, 0xf4(r31)
/* 803F2404 003EF344  1C 73 00 34 */	mulli r3, r19, 0x34
/* 803F2408 003EF348  38 63 00 10 */	addi r3, r3, 0x10
/* 803F240C 003EF34C  4B C3 1B A1 */	bl __nwa__FUl
/* 803F2410 003EF350  3C 80 80 3F */	lis r4, __ct__Q42kh6Screen8WorldMap13OnyonDynamicsFv@ha
/* 803F2414 003EF354  3C A0 80 3F */	lis r5, __dt__Q42kh6Screen8WorldMap13OnyonDynamicsFv@ha
/* 803F2418 003EF358  38 84 7A 04 */	addi r4, r4, __ct__Q42kh6Screen8WorldMap13OnyonDynamicsFv@l
/* 803F241C 003EF35C  7E 67 9B 78 */	mr r7, r19
/* 803F2420 003EF360  38 A5 37 98 */	addi r5, r5, __dt__Q42kh6Screen8WorldMap13OnyonDynamicsFv@l
/* 803F2424 003EF364  38 C0 00 34 */	li r6, 0x34
/* 803F2428 003EF368  4B CC F5 C9 */	bl __construct_new_array
/* 803F242C 003EF36C  90 7F 00 F0 */	stw r3, 0xf0(r31)
/* 803F2430 003EF370  3A 60 00 00 */	li r19, 0
/* 803F2434 003EF374  38 80 00 01 */	li r4, 1
/* 803F2438 003EF378  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F243C 003EF37C  4B DF 4C 9D */	bl hasBootContainer__Q24Game8PlayDataFi
/* 803F2440 003EF380  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F2444 003EF384  41 82 00 34 */	beq .L_803F2478
/* 803F2448 003EF388  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F244C 003EF38C  3C 80 4E 52 */	lis r4, 0x4E524544@ha
/* 803F2450 003EF390  38 C4 45 44 */	addi r6, r4, 0x4E524544@l
/* 803F2454 003EF394  38 A0 00 00 */	li r5, 0
/* 803F2458 003EF398  81 83 00 00 */	lwz r12, 0(r3)
/* 803F245C 003EF39C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2460 003EF3A0  7D 89 03 A6 */	mtctr r12
/* 803F2464 003EF3A4  4E 80 04 21 */	bctrl 
/* 803F2468 003EF3A8  1C 13 00 34 */	mulli r0, r19, 0x34
/* 803F246C 003EF3AC  80 9F 00 F0 */	lwz r4, 0xf0(r31)
/* 803F2470 003EF3B0  3A 60 00 01 */	li r19, 1
/* 803F2474 003EF3B4  7C 64 01 2E */	stwx r3, r4, r0
.L_803F2478:
/* 803F2478 003EF3B8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F247C 003EF3BC  38 80 00 02 */	li r4, 2
/* 803F2480 003EF3C0  4B DF 4C 59 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 803F2484 003EF3C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F2488 003EF3C8  41 82 00 38 */	beq .L_803F24C0
/* 803F248C 003EF3CC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F2490 003EF3D0  3C A0 4C 4C */	lis r5, 0x4C4C4F57@ha
/* 803F2494 003EF3D4  3C 80 00 4E */	lis r4, 0x004E5945@ha
/* 803F2498 003EF3D8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F249C 003EF3DC  38 C5 4F 57 */	addi r6, r5, 0x4C4C4F57@l
/* 803F24A0 003EF3E0  38 A4 59 45 */	addi r5, r4, 0x004E5945@l
/* 803F24A4 003EF3E4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F24A8 003EF3E8  7D 89 03 A6 */	mtctr r12
/* 803F24AC 003EF3EC  4E 80 04 21 */	bctrl 
/* 803F24B0 003EF3F0  1C 13 00 34 */	mulli r0, r19, 0x34
/* 803F24B4 003EF3F4  80 9F 00 F0 */	lwz r4, 0xf0(r31)
/* 803F24B8 003EF3F8  3A 73 00 01 */	addi r19, r19, 1
/* 803F24BC 003EF3FC  7C 64 01 2E */	stwx r3, r4, r0
.L_803F24C0:
/* 803F24C0 003EF400  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F24C4 003EF404  38 80 00 00 */	li r4, 0
/* 803F24C8 003EF408  4B DF 4C 11 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 803F24CC 003EF40C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F24D0 003EF410  41 82 00 30 */	beq .L_803F2500
/* 803F24D4 003EF414  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F24D8 003EF418  3C 80 42 4C */	lis r4, 0x424C5545@ha
/* 803F24DC 003EF41C  38 C4 55 45 */	addi r6, r4, 0x424C5545@l
/* 803F24E0 003EF420  38 A0 00 4E */	li r5, 0x4e
/* 803F24E4 003EF424  81 83 00 00 */	lwz r12, 0(r3)
/* 803F24E8 003EF428  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F24EC 003EF42C  7D 89 03 A6 */	mtctr r12
/* 803F24F0 003EF430  4E 80 04 21 */	bctrl 
/* 803F24F4 003EF434  1C 13 00 34 */	mulli r0, r19, 0x34
/* 803F24F8 003EF438  80 9F 00 F0 */	lwz r4, 0xf0(r31)
/* 803F24FC 003EF43C  7C 64 01 2E */	stwx r3, r4, r0
.L_803F2500:
/* 803F2500 003EF440  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 803F2504 003EF444  38 E0 00 01 */	li r7, 1
/* 803F2508 003EF448  38 A3 FF FF */	addi r5, r3, 0x0000FFFF@l
/* 803F250C 003EF44C  38 C0 00 34 */	li r6, 0x34
/* 803F2510 003EF450  48 00 00 24 */	b .L_803F2534
.L_803F2514:
/* 803F2514 003EF454  7C 85 03 D6 */	divw r4, r5, r0
/* 803F2518 003EF458  38 06 00 30 */	addi r0, r6, 0x30
/* 803F251C 003EF45C  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 803F2520 003EF460  3C A5 00 01 */	addis r5, r5, 1
/* 803F2524 003EF464  38 E7 00 01 */	addi r7, r7, 1
/* 803F2528 003EF468  38 C6 00 34 */	addi r6, r6, 0x34
/* 803F252C 003EF46C  7C 83 03 2E */	sthx r4, r3, r0
/* 803F2530 003EF470  38 A5 FF FF */	addi r5, r5, -1
.L_803F2534:
/* 803F2534 003EF474  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803F2538 003EF478  7C 07 00 00 */	cmpw r7, r0
/* 803F253C 003EF47C  41 80 FF D8 */	blt .L_803F2514
/* 803F2540 003EF480  80 DE 01 A4 */	lwz r6, 0x1a4(r30)
/* 803F2544 003EF484  38 60 01 48 */	li r3, 0x148
/* 803F2548 003EF488  80 BE 01 A8 */	lwz r5, 0x1a8(r30)
/* 803F254C 003EF48C  80 9E 01 AC */	lwz r4, 0x1ac(r30)
/* 803F2550 003EF490  80 1E 01 B0 */	lwz r0, 0x1b0(r30)
/* 803F2554 003EF494  90 C1 00 60 */	stw r6, 0x60(r1)
/* 803F2558 003EF498  90 A1 00 64 */	stw r5, 0x64(r1)
/* 803F255C 003EF49C  90 81 00 68 */	stw r4, 0x68(r1)
/* 803F2560 003EF4A0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 803F2564 003EF4A4  4B C3 19 41 */	bl __nw__FUl
/* 803F2568 003EF4A8  7C 60 1B 79 */	or. r0, r3, r3
/* 803F256C 003EF4AC  41 82 00 0C */	beq .L_803F2578
/* 803F2570 003EF4B0  48 04 28 3D */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 803F2574 003EF4B4  7C 60 1B 78 */	mr r0, r3
.L_803F2578:
/* 803F2578 003EF4B8  90 1F 00 54 */	stw r0, 0x54(r31)
/* 803F257C 003EF4BC  7E 86 A3 78 */	mr r6, r20
/* 803F2580 003EF4C0  80 81 00 60 */	lwz r4, 0x60(r1)
/* 803F2584 003EF4C4  3C A0 00 04 */	lis r5, 4
/* 803F2588 003EF4C8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F258C 003EF4CC  4B C4 D0 99 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803F2590 003EF4D0  80 61 00 64 */	lwz r3, 0x64(r1)
/* 803F2594 003EF4D4  7E 84 A3 78 */	mr r4, r20
/* 803F2598 003EF4D8  4B C3 0A 81 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F259C 003EF4DC  4B C5 53 81 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F25A0 003EF4E0  90 7F 00 58 */	stw r3, 0x58(r31)
/* 803F25A4 003EF4E4  7E 84 A3 78 */	mr r4, r20
/* 803F25A8 003EF4E8  80 61 00 68 */	lwz r3, 0x68(r1)
/* 803F25AC 003EF4EC  4B C3 0A 6D */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F25B0 003EF4F0  4B C5 53 6D */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F25B4 003EF4F4  90 7F 00 5C */	stw r3, 0x5c(r31)
/* 803F25B8 003EF4F8  7E 84 A3 78 */	mr r4, r20
/* 803F25BC 003EF4FC  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 803F25C0 003EF500  4B C3 0A 59 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 803F25C4 003EF504  4B C5 53 59 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 803F25C8 003EF508  90 7F 00 60 */	stw r3, 0x60(r31)
/* 803F25CC 003EF50C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F25D0 003EF510  80 9F 00 58 */	lwz r4, 0x58(r31)
/* 803F25D4 003EF514  81 83 00 00 */	lwz r12, 0(r3)
/* 803F25D8 003EF518  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803F25DC 003EF51C  7D 89 03 A6 */	mtctr r12
/* 803F25E0 003EF520  4E 80 04 21 */	bctrl 
/* 803F25E4 003EF524  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F25E8 003EF528  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 803F25EC 003EF52C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F25F0 003EF530  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803F25F4 003EF534  7D 89 03 A6 */	mtctr r12
/* 803F25F8 003EF538  4E 80 04 21 */	bctrl 
/* 803F25FC 003EF53C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2600 003EF540  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 803F2604 003EF544  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2608 003EF548  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 803F260C 003EF54C  7D 89 03 A6 */	mtctr r12
/* 803F2610 003EF550  4E 80 04 21 */	bctrl 
/* 803F2614 003EF554  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2618 003EF558  4B F1 77 E9 */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 803F261C 003EF55C  38 1F 00 24 */	addi r0, r31, 0x24
/* 803F2620 003EF560  3C 60 61 79 */	lis r3, 0x61795F72@ha
/* 803F2624 003EF564  90 01 00 08 */	stw r0, 8(r1)
/* 803F2628 003EF568  38 00 00 03 */	li r0, 3
/* 803F262C 003EF56C  38 C3 5F 72 */	addi r6, r3, 0x61795F72@l
/* 803F2630 003EF570  39 03 5F 6C */	addi r8, r3, 0x5f6c
/* 803F2634 003EF574  90 01 00 0C */	stw r0, 0xc(r1)
/* 803F2638 003EF578  39 43 5F 63 */	addi r10, r3, 0x5f63
/* 803F263C 003EF57C  38 A0 50 64 */	li r5, 0x5064
/* 803F2640 003EF580  38 E0 50 64 */	li r7, 0x5064
/* 803F2644 003EF584  92 81 00 10 */	stw r20, 0x10(r1)
/* 803F2648 003EF588  39 20 50 64 */	li r9, 0x5064
/* 803F264C 003EF58C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2650 003EF590  4B F1 AF D5 */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803F2654 003EF594  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F2658 003EF598  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 803F265C 003EF59C  82 A3 00 E8 */	lwz r21, 0xe8(r3)
/* 803F2660 003EF5A0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803F2664 003EF5A4  41 82 00 90 */	beq .L_803F26F4
/* 803F2668 003EF5A8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F266C 003EF5AC  3C A0 61 6C */	lis r5, 0x616C5F66@ha
/* 803F2670 003EF5B0  3C 80 4E 66 */	lis r4, 0x4E66696E@ha
/* 803F2674 003EF5B4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2678 003EF5B8  38 C5 5F 66 */	addi r6, r5, 0x616C5F66@l
/* 803F267C 003EF5BC  38 A4 69 6E */	addi r5, r4, 0x4E66696E@l
/* 803F2680 003EF5C0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2684 003EF5C4  7D 89 03 A6 */	mtctr r12
/* 803F2688 003EF5C8  4E 80 04 21 */	bctrl 
/* 803F268C 003EF5CC  38 00 00 00 */	li r0, 0
/* 803F2690 003EF5D0  3C A0 6D 70 */	lis r5, 0x6D705F66@ha
/* 803F2694 003EF5D4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F2698 003EF5D8  3C 80 00 4E */	lis r4, 0x004E636F@ha
/* 803F269C 003EF5DC  38 C5 5F 66 */	addi r6, r5, 0x6D705F66@l
/* 803F26A0 003EF5E0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F26A4 003EF5E4  38 A4 63 6F */	addi r5, r4, 0x004E636F@l
/* 803F26A8 003EF5E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F26AC 003EF5EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F26B0 003EF5F0  7D 89 03 A6 */	mtctr r12
/* 803F26B4 003EF5F4  4E 80 04 21 */	bctrl 
/* 803F26B8 003EF5F8  38 00 00 01 */	li r0, 1
/* 803F26BC 003EF5FC  3C 80 6D 70 */	lis r4, 0x6D703030@ha
/* 803F26C0 003EF600  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F26C4 003EF604  3C 60 00 50 */	lis r3, 0x0050636F@ha
/* 803F26C8 003EF608  7E A7 AB 78 */	mr r7, r21
/* 803F26CC 003EF60C  38 C4 30 30 */	addi r6, r4, 0x6D703030@l
/* 803F26D0 003EF610  92 81 00 08 */	stw r20, 8(r1)
/* 803F26D4 003EF614  38 A3 63 6F */	addi r5, r3, 0x0050636F@l
/* 803F26D8 003EF618  39 00 00 0A */	li r8, 0xa
/* 803F26DC 003EF61C  39 20 00 00 */	li r9, 0
/* 803F26E0 003EF620  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F26E4 003EF624  39 40 00 01 */	li r10, 1
/* 803F26E8 003EF628  4B F1 A0 9D */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUlUsbbP10JKRArchive
/* 803F26EC 003EF62C  90 7F 01 00 */	stw r3, 0x100(r31)
/* 803F26F0 003EF630  48 00 00 8C */	b .L_803F277C
.L_803F26F4:
/* 803F26F4 003EF634  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F26F8 003EF638  3C A0 61 6C */	lis r5, 0x616C5F66@ha
/* 803F26FC 003EF63C  3C 80 4E 66 */	lis r4, 0x4E66696E@ha
/* 803F2700 003EF640  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2704 003EF644  38 C5 5F 66 */	addi r6, r5, 0x616C5F66@l
/* 803F2708 003EF648  38 A4 69 6E */	addi r5, r4, 0x4E66696E@l
/* 803F270C 003EF64C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2710 003EF650  7D 89 03 A6 */	mtctr r12
/* 803F2714 003EF654  4E 80 04 21 */	bctrl 
/* 803F2718 003EF658  38 00 00 01 */	li r0, 1
/* 803F271C 003EF65C  3C A0 6D 70 */	lis r5, 0x6D705F66@ha
/* 803F2720 003EF660  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F2724 003EF664  3C 80 00 4E */	lis r4, 0x004E636F@ha
/* 803F2728 003EF668  38 C5 5F 66 */	addi r6, r5, 0x6D705F66@l
/* 803F272C 003EF66C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2730 003EF670  38 A4 63 6F */	addi r5, r4, 0x004E636F@l
/* 803F2734 003EF674  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2738 003EF678  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F273C 003EF67C  7D 89 03 A6 */	mtctr r12
/* 803F2740 003EF680  4E 80 04 21 */	bctrl 
/* 803F2744 003EF684  38 00 00 00 */	li r0, 0
/* 803F2748 003EF688  3C 80 6B 6F */	lis r4, 0x6B6F3031@ha
/* 803F274C 003EF68C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F2750 003EF690  3C 60 00 50 */	lis r3, 0x0050706F@ha
/* 803F2754 003EF694  7E A7 AB 78 */	mr r7, r21
/* 803F2758 003EF698  38 C4 30 31 */	addi r6, r4, 0x6B6F3031@l
/* 803F275C 003EF69C  92 81 00 08 */	stw r20, 8(r1)
/* 803F2760 003EF6A0  38 A3 70 6F */	addi r5, r3, 0x0050706F@l
/* 803F2764 003EF6A4  39 00 00 05 */	li r8, 5
/* 803F2768 003EF6A8  39 20 00 00 */	li r9, 0
/* 803F276C 003EF6AC  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2770 003EF6B0  39 40 00 00 */	li r10, 0
/* 803F2774 003EF6B4  4B F1 A0 11 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUlUsbbP10JKRArchive
/* 803F2778 003EF6B8  90 7F 01 00 */	stw r3, 0x100(r31)
.L_803F277C:
/* 803F277C 003EF6BC  92 81 00 08 */	stw r20, 8(r1)
/* 803F2780 003EF6C0  3C A0 63 5F */	lis r5, 0x635F3031@ha
/* 803F2784 003EF6C4  3C 80 00 50 */	lis r4, 0x0050675F@ha
/* 803F2788 003EF6C8  38 FF 01 2C */	addi r7, r31, 0x12c
/* 803F278C 003EF6CC  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2790 003EF6D0  38 C5 30 31 */	addi r6, r5, 0x635F3031@l
/* 803F2794 003EF6D4  38 A4 67 5F */	addi r5, r4, 0x0050675F@l
/* 803F2798 003EF6D8  39 00 00 02 */	li r8, 2
/* 803F279C 003EF6DC  39 20 00 00 */	li r9, 0
/* 803F27A0 003EF6E0  39 40 00 01 */	li r10, 1
/* 803F27A4 003EF6E4  4B F1 9E 65 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F27A8 003EF6E8  90 7F 01 04 */	stw r3, 0x104(r31)
/* 803F27AC 003EF6EC  3C 80 70 5F */	lis r4, 0x705F3031@ha
/* 803F27B0 003EF6F0  3C 60 00 50 */	lis r3, 0x0050675F@ha
/* 803F27B4 003EF6F4  38 FF 01 30 */	addi r7, r31, 0x130
/* 803F27B8 003EF6F8  92 81 00 08 */	stw r20, 8(r1)
/* 803F27BC 003EF6FC  38 C4 30 31 */	addi r6, r4, 0x705F3031@l
/* 803F27C0 003EF700  38 A3 67 5F */	addi r5, r3, 0x0050675F@l
/* 803F27C4 003EF704  39 00 00 02 */	li r8, 2
/* 803F27C8 003EF708  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F27CC 003EF70C  39 20 00 00 */	li r9, 0
/* 803F27D0 003EF710  39 40 00 01 */	li r10, 1
/* 803F27D4 003EF714  4B F1 9E 35 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F27D8 003EF718  90 7F 01 08 */	stw r3, 0x108(r31)
/* 803F27DC 003EF71C  3C 80 63 5F */	lis r4, 0x635F3031@ha
/* 803F27E0 003EF720  3C 60 00 50 */	lis r3, 0x0050305F@ha
/* 803F27E4 003EF724  38 FF 01 34 */	addi r7, r31, 0x134
/* 803F27E8 003EF728  92 81 00 08 */	stw r20, 8(r1)
/* 803F27EC 003EF72C  38 C4 30 31 */	addi r6, r4, 0x635F3031@l
/* 803F27F0 003EF730  38 A3 30 5F */	addi r5, r3, 0x0050305F@l
/* 803F27F4 003EF734  39 00 00 02 */	li r8, 2
/* 803F27F8 003EF738  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F27FC 003EF73C  39 20 00 00 */	li r9, 0
/* 803F2800 003EF740  39 40 00 01 */	li r10, 1
/* 803F2804 003EF744  4B F1 9E 05 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F2808 003EF748  90 7F 01 0C */	stw r3, 0x10c(r31)
/* 803F280C 003EF74C  3C 80 70 5F */	lis r4, 0x705F3031@ha
/* 803F2810 003EF750  3C 60 00 50 */	lis r3, 0x0050305F@ha
/* 803F2814 003EF754  38 FF 01 44 */	addi r7, r31, 0x144
/* 803F2818 003EF758  92 81 00 08 */	stw r20, 8(r1)
/* 803F281C 003EF75C  38 C4 30 31 */	addi r6, r4, 0x705F3031@l
/* 803F2820 003EF760  38 A3 30 5F */	addi r5, r3, 0x0050305F@l
/* 803F2824 003EF764  39 00 00 02 */	li r8, 2
/* 803F2828 003EF768  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F282C 003EF76C  39 20 00 00 */	li r9, 0
/* 803F2830 003EF770  39 40 00 01 */	li r10, 1
/* 803F2834 003EF774  4B F1 9D D5 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F2838 003EF778  90 7F 01 1C */	stw r3, 0x11c(r31)
/* 803F283C 003EF77C  3C 80 63 5F */	lis r4, 0x635F3031@ha
/* 803F2840 003EF780  3C 60 00 50 */	lis r3, 0x0050315F@ha
/* 803F2844 003EF784  38 FF 01 38 */	addi r7, r31, 0x138
/* 803F2848 003EF788  92 81 00 08 */	stw r20, 8(r1)
/* 803F284C 003EF78C  38 C4 30 31 */	addi r6, r4, 0x635F3031@l
/* 803F2850 003EF790  38 A3 31 5F */	addi r5, r3, 0x0050315F@l
/* 803F2854 003EF794  39 00 00 02 */	li r8, 2
/* 803F2858 003EF798  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F285C 003EF79C  39 20 00 00 */	li r9, 0
/* 803F2860 003EF7A0  39 40 00 01 */	li r10, 1
/* 803F2864 003EF7A4  4B F1 9D A5 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F2868 003EF7A8  90 7F 01 10 */	stw r3, 0x110(r31)
/* 803F286C 003EF7AC  3C 80 70 5F */	lis r4, 0x705F3031@ha
/* 803F2870 003EF7B0  3C 60 00 50 */	lis r3, 0x0050315F@ha
/* 803F2874 003EF7B4  38 FF 01 48 */	addi r7, r31, 0x148
/* 803F2878 003EF7B8  92 81 00 08 */	stw r20, 8(r1)
/* 803F287C 003EF7BC  38 C4 30 31 */	addi r6, r4, 0x705F3031@l
/* 803F2880 003EF7C0  38 A3 31 5F */	addi r5, r3, 0x0050315F@l
/* 803F2884 003EF7C4  39 00 00 02 */	li r8, 2
/* 803F2888 003EF7C8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F288C 003EF7CC  39 20 00 00 */	li r9, 0
/* 803F2890 003EF7D0  39 40 00 01 */	li r10, 1
/* 803F2894 003EF7D4  4B F1 9D 75 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F2898 003EF7D8  90 7F 01 20 */	stw r3, 0x120(r31)
/* 803F289C 003EF7DC  3C 80 63 5F */	lis r4, 0x635F3031@ha
/* 803F28A0 003EF7E0  3C 60 00 50 */	lis r3, 0x0050325F@ha
/* 803F28A4 003EF7E4  38 FF 01 3C */	addi r7, r31, 0x13c
/* 803F28A8 003EF7E8  92 81 00 08 */	stw r20, 8(r1)
/* 803F28AC 003EF7EC  38 C4 30 31 */	addi r6, r4, 0x635F3031@l
/* 803F28B0 003EF7F0  38 A3 32 5F */	addi r5, r3, 0x0050325F@l
/* 803F28B4 003EF7F4  39 00 00 02 */	li r8, 2
/* 803F28B8 003EF7F8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F28BC 003EF7FC  39 20 00 00 */	li r9, 0
/* 803F28C0 003EF800  39 40 00 01 */	li r10, 1
/* 803F28C4 003EF804  4B F1 9D 45 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F28C8 003EF808  90 7F 01 14 */	stw r3, 0x114(r31)
/* 803F28CC 003EF80C  3C 80 70 5F */	lis r4, 0x705F3031@ha
/* 803F28D0 003EF810  3C 60 00 50 */	lis r3, 0x0050325F@ha
/* 803F28D4 003EF814  38 FF 01 4C */	addi r7, r31, 0x14c
/* 803F28D8 003EF818  92 81 00 08 */	stw r20, 8(r1)
/* 803F28DC 003EF81C  38 C4 30 31 */	addi r6, r4, 0x705F3031@l
/* 803F28E0 003EF820  38 A3 32 5F */	addi r5, r3, 0x0050325F@l
/* 803F28E4 003EF824  39 00 00 02 */	li r8, 2
/* 803F28E8 003EF828  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F28EC 003EF82C  39 20 00 00 */	li r9, 0
/* 803F28F0 003EF830  39 40 00 01 */	li r10, 1
/* 803F28F4 003EF834  4B F1 9D 15 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F28F8 003EF838  90 7F 01 24 */	stw r3, 0x124(r31)
/* 803F28FC 003EF83C  3C 80 63 5F */	lis r4, 0x635F3031@ha
/* 803F2900 003EF840  3C 60 00 50 */	lis r3, 0x0050335F@ha
/* 803F2904 003EF844  38 FF 01 40 */	addi r7, r31, 0x140
/* 803F2908 003EF848  92 81 00 08 */	stw r20, 8(r1)
/* 803F290C 003EF84C  38 C4 30 31 */	addi r6, r4, 0x635F3031@l
/* 803F2910 003EF850  38 A3 33 5F */	addi r5, r3, 0x0050335F@l
/* 803F2914 003EF854  39 00 00 02 */	li r8, 2
/* 803F2918 003EF858  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F291C 003EF85C  39 20 00 00 */	li r9, 0
/* 803F2920 003EF860  39 40 00 01 */	li r10, 1
/* 803F2924 003EF864  4B F1 9C E5 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F2928 003EF868  90 7F 01 18 */	stw r3, 0x118(r31)
/* 803F292C 003EF86C  3C 80 70 5F */	lis r4, 0x705F3031@ha
/* 803F2930 003EF870  3C 60 00 50 */	lis r3, 0x0050335F@ha
/* 803F2934 003EF874  38 FF 01 50 */	addi r7, r31, 0x150
/* 803F2938 003EF878  92 81 00 08 */	stw r20, 8(r1)
/* 803F293C 003EF87C  38 C4 30 31 */	addi r6, r4, 0x705F3031@l
/* 803F2940 003EF880  38 A3 33 5F */	addi r5, r3, 0x0050335F@l
/* 803F2944 003EF884  39 00 00 02 */	li r8, 2
/* 803F2948 003EF888  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F294C 003EF88C  39 20 00 00 */	li r9, 0
/* 803F2950 003EF890  39 40 00 01 */	li r10, 1
/* 803F2954 003EF894  4B F1 9C B5 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 803F2958 003EF898  90 7F 01 28 */	stw r3, 0x128(r31)
/* 803F295C 003EF89C  3C A0 65 77 */	lis r5, 0x65775F6C@ha
/* 803F2960 003EF8A0  3C 80 00 54 */	lis r4, 0x00545F6E@ha
/* 803F2964 003EF8A4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2968 003EF8A8  38 C5 5F 6C */	addi r6, r5, 0x65775F6C@l
/* 803F296C 003EF8AC  38 A4 5F 6E */	addi r5, r4, 0x00545F6E@l
/* 803F2970 003EF8B0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2974 003EF8B4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2978 003EF8B8  7D 89 03 A6 */	mtctr r12
/* 803F297C 003EF8BC  4E 80 04 21 */	bctrl 
/* 803F2980 003EF8C0  38 00 00 00 */	li r0, 0
/* 803F2984 003EF8C4  3C A0 65 77 */	lis r5, 0x65775F72@ha
/* 803F2988 003EF8C8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F298C 003EF8CC  3C 80 00 54 */	lis r4, 0x00545F6E@ha
/* 803F2990 003EF8D0  38 C5 5F 72 */	addi r6, r5, 0x65775F72@l
/* 803F2994 003EF8D4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2998 003EF8D8  38 A4 5F 6E */	addi r5, r4, 0x00545F6E@l
/* 803F299C 003EF8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F29A0 003EF8E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F29A4 003EF8E4  7D 89 03 A6 */	mtctr r12
/* 803F29A8 003EF8E8  4E 80 04 21 */	bctrl 
/* 803F29AC 003EF8EC  38 00 00 00 */	li r0, 0
/* 803F29B0 003EF8F0  3C 80 6C 77 */	lis r4, 0x6C77696E@ha
/* 803F29B4 003EF8F4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F29B8 003EF8F8  38 C4 69 6E */	addi r6, r4, 0x6C77696E@l
/* 803F29BC 003EF8FC  38 A0 00 4E */	li r5, 0x4e
/* 803F29C0 003EF900  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F29C4 003EF904  81 83 00 00 */	lwz r12, 0(r3)
/* 803F29C8 003EF908  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F29CC 003EF90C  7D 89 03 A6 */	mtctr r12
/* 803F29D0 003EF910  4E 80 04 21 */	bctrl 
/* 803F29D4 003EF914  38 00 00 00 */	li r0, 0
/* 803F29D8 003EF918  3C 80 72 77 */	lis r4, 0x7277696E@ha
/* 803F29DC 003EF91C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F29E0 003EF920  38 C4 69 6E */	addi r6, r4, 0x7277696E@l
/* 803F29E4 003EF924  38 A0 00 4E */	li r5, 0x4e
/* 803F29E8 003EF928  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F29EC 003EF92C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F29F0 003EF930  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F29F4 003EF934  7D 89 03 A6 */	mtctr r12
/* 803F29F8 003EF938  4E 80 04 21 */	bctrl 
/* 803F29FC 003EF93C  38 00 00 00 */	li r0, 0
/* 803F2A00 003EF940  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F2A04 003EF944  38 60 00 38 */	li r3, 0x38
/* 803F2A08 003EF948  4B C3 14 9D */	bl __nw__FUl
/* 803F2A0C 003EF94C  7C 64 1B 79 */	or. r4, r3, r3
/* 803F2A10 003EF950  41 82 00 24 */	beq .L_803F2A34
/* 803F2A14 003EF954  3C A0 75 6D */	lis r5, 0x756D6D79@ha
/* 803F2A18 003EF958  38 80 00 00 */	li r4, 0
/* 803F2A1C 003EF95C  38 C5 6D 79 */	addi r6, r5, 0x756D6D79@l
/* 803F2A20 003EF960  38 A0 00 64 */	li r5, 0x64
/* 803F2A24 003EF964  38 E0 00 03 */	li r7, 3
/* 803F2A28 003EF968  39 00 00 64 */	li r8, 0x64
/* 803F2A2C 003EF96C  48 01 94 45 */	bl __ct__Q32kh6Screen14khUtilColorAnmFPQ29P2DScreen3MgrUxii
/* 803F2A30 003EF970  7C 64 1B 78 */	mr r4, r3
.L_803F2A34:
/* 803F2A34 003EF974  39 60 00 FF */	li r11, 0xff
/* 803F2A38 003EF978  39 40 00 60 */	li r10, 0x60
/* 803F2A3C 003EF97C  39 20 00 50 */	li r9, 0x50
/* 803F2A40 003EF980  39 00 00 00 */	li r8, 0
/* 803F2A44 003EF984  99 61 00 48 */	stb r11, 0x48(r1)
/* 803F2A48 003EF988  38 C0 00 A0 */	li r6, 0xa0
/* 803F2A4C 003EF98C  38 A0 00 20 */	li r5, 0x20
/* 803F2A50 003EF990  38 00 00 01 */	li r0, 1
/* 803F2A54 003EF994  90 9F 01 6C */	stw r4, 0x16c(r31)
/* 803F2A58 003EF998  38 60 00 1C */	li r3, 0x1c
/* 803F2A5C 003EF99C  80 9F 01 6C */	lwz r4, 0x16c(r31)
/* 803F2A60 003EF9A0  99 41 00 49 */	stb r10, 0x49(r1)
/* 803F2A64 003EF9A4  81 84 00 1C */	lwz r12, 0x1c(r4)
/* 803F2A68 003EF9A8  99 21 00 4A */	stb r9, 0x4a(r1)
/* 803F2A6C 003EF9AC  99 01 00 4B */	stb r8, 0x4b(r1)
/* 803F2A70 003EF9B0  80 81 00 48 */	lwz r4, 0x48(r1)
/* 803F2A74 003EF9B4  99 61 00 40 */	stb r11, 0x40(r1)
/* 803F2A78 003EF9B8  90 81 00 4C */	stw r4, 0x4c(r1)
/* 803F2A7C 003EF9BC  88 E1 00 4C */	lbz r7, 0x4c(r1)
/* 803F2A80 003EF9C0  88 81 00 4D */	lbz r4, 0x4d(r1)
/* 803F2A84 003EF9C4  98 EC 00 00 */	stb r7, 0(r12)
/* 803F2A88 003EF9C8  88 E1 00 4E */	lbz r7, 0x4e(r1)
/* 803F2A8C 003EF9CC  98 8C 00 01 */	stb r4, 1(r12)
/* 803F2A90 003EF9D0  88 81 00 4F */	lbz r4, 0x4f(r1)
/* 803F2A94 003EF9D4  98 EC 00 02 */	stb r7, 2(r12)
/* 803F2A98 003EF9D8  98 8C 00 03 */	stb r4, 3(r12)
/* 803F2A9C 003EF9DC  80 9F 01 6C */	lwz r4, 0x16c(r31)
/* 803F2AA0 003EF9E0  98 C1 00 41 */	stb r6, 0x41(r1)
/* 803F2AA4 003EF9E4  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 803F2AA8 003EF9E8  98 A1 00 42 */	stb r5, 0x42(r1)
/* 803F2AAC 003EF9EC  99 61 00 43 */	stb r11, 0x43(r1)
/* 803F2AB0 003EF9F0  80 81 00 40 */	lwz r4, 0x40(r1)
/* 803F2AB4 003EF9F4  99 61 00 38 */	stb r11, 0x38(r1)
/* 803F2AB8 003EF9F8  90 81 00 44 */	stw r4, 0x44(r1)
/* 803F2ABC 003EF9FC  88 A1 00 44 */	lbz r5, 0x44(r1)
/* 803F2AC0 003EFA00  88 81 00 45 */	lbz r4, 0x45(r1)
/* 803F2AC4 003EFA04  98 A6 00 04 */	stb r5, 4(r6)
/* 803F2AC8 003EFA08  88 A1 00 46 */	lbz r5, 0x46(r1)
/* 803F2ACC 003EFA0C  98 86 00 05 */	stb r4, 5(r6)
/* 803F2AD0 003EFA10  88 81 00 47 */	lbz r4, 0x47(r1)
/* 803F2AD4 003EFA14  98 A6 00 06 */	stb r5, 6(r6)
/* 803F2AD8 003EFA18  98 86 00 07 */	stb r4, 7(r6)
/* 803F2ADC 003EFA1C  80 9F 01 6C */	lwz r4, 0x16c(r31)
/* 803F2AE0 003EFA20  99 41 00 39 */	stb r10, 0x39(r1)
/* 803F2AE4 003EFA24  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 803F2AE8 003EFA28  99 21 00 3A */	stb r9, 0x3a(r1)
/* 803F2AEC 003EFA2C  99 01 00 3B */	stb r8, 0x3b(r1)
/* 803F2AF0 003EFA30  80 81 00 38 */	lwz r4, 0x38(r1)
/* 803F2AF4 003EFA34  90 81 00 3C */	stw r4, 0x3c(r1)
/* 803F2AF8 003EFA38  88 A1 00 3C */	lbz r5, 0x3c(r1)
/* 803F2AFC 003EFA3C  88 81 00 3D */	lbz r4, 0x3d(r1)
/* 803F2B00 003EFA40  98 A6 00 08 */	stb r5, 8(r6)
/* 803F2B04 003EFA44  88 A1 00 3E */	lbz r5, 0x3e(r1)
/* 803F2B08 003EFA48  98 86 00 09 */	stb r4, 9(r6)
/* 803F2B0C 003EFA4C  88 81 00 3F */	lbz r4, 0x3f(r1)
/* 803F2B10 003EFA50  98 A6 00 0A */	stb r5, 0xa(r6)
/* 803F2B14 003EFA54  98 86 00 0B */	stb r4, 0xb(r6)
/* 803F2B18 003EFA58  80 9F 01 6C */	lwz r4, 0x16c(r31)
/* 803F2B1C 003EFA5C  98 04 00 34 */	stb r0, 0x34(r4)
/* 803F2B20 003EFA60  4B C3 13 85 */	bl __nw__FUl
/* 803F2B24 003EFA64  7C 60 1B 79 */	or. r0, r3, r3
/* 803F2B28 003EFA68  41 82 00 0C */	beq .L_803F2B34
/* 803F2B2C 003EFA6C  4B F3 62 D9 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 803F2B30 003EFA70  7C 60 1B 78 */	mr r0, r3
.L_803F2B34:
/* 803F2B34 003EFA74  90 1F 00 64 */	stw r0, 0x64(r31)
/* 803F2B38 003EFA78  38 60 00 10 */	li r3, 0x10
/* 803F2B3C 003EFA7C  4B C3 13 69 */	bl __nw__FUl
/* 803F2B40 003EFA80  28 03 00 00 */	cmplwi r3, 0
/* 803F2B44 003EFA84  41 82 00 24 */	beq .L_803F2B68
/* 803F2B48 003EFA88  C0 22 1B 94 */	lfs f1, lbl_8051FEF4@sda21(r2)
/* 803F2B4C 003EFA8C  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F2B50 003EFA90  D0 23 00 00 */	stfs f1, 0(r3)
/* 803F2B54 003EFA94  C0 22 1B A8 */	lfs f1, lbl_8051FF08@sda21(r2)
/* 803F2B58 003EFA98  D0 03 00 04 */	stfs f0, 4(r3)
/* 803F2B5C 003EFA9C  C0 02 1B AC */	lfs f0, lbl_8051FF0C@sda21(r2)
/* 803F2B60 003EFAA0  D0 23 00 08 */	stfs f1, 8(r3)
/* 803F2B64 003EFAA4  D0 03 00 0C */	stfs f0, 0xc(r3)
.L_803F2B68:
/* 803F2B68 003EFAA8  90 7F 01 70 */	stw r3, 0x170(r31)
/* 803F2B6C 003EFAAC  3C 60 6C 62 */	lis r3, 0x6C62746E@ha
/* 803F2B70 003EFAB0  38 C3 74 6E */	addi r6, r3, 0x6C62746E@l
/* 803F2B74 003EFAB4  38 A0 00 4E */	li r5, 0x4e
/* 803F2B78 003EFAB8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2B7C 003EFABC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2B80 003EFAC0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2B84 003EFAC4  7D 89 03 A6 */	mtctr r12
/* 803F2B88 003EFAC8  4E 80 04 21 */	bctrl 
/* 803F2B8C 003EFACC  48 01 8B 65 */	bl setInfAlpha__Q22kh6ScreenFP7J2DPane
/* 803F2B90 003EFAD0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2B94 003EFAD4  3C 80 72 62 */	lis r4, 0x7262746E@ha
/* 803F2B98 003EFAD8  38 C4 74 6E */	addi r6, r4, 0x7262746E@l
/* 803F2B9C 003EFADC  38 A0 00 4E */	li r5, 0x4e
/* 803F2BA0 003EFAE0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2BA4 003EFAE4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2BA8 003EFAE8  7D 89 03 A6 */	mtctr r12
/* 803F2BAC 003EFAEC  4E 80 04 21 */	bctrl 
/* 803F2BB0 003EFAF0  48 01 8B 41 */	bl setInfAlpha__Q22kh6ScreenFP7J2DPane
/* 803F2BB4 003EFAF4  38 00 00 00 */	li r0, 0
/* 803F2BB8 003EFAF8  38 7E 03 44 */	addi r3, r30, 0x344
/* 803F2BBC 003EFAFC  90 01 00 08 */	stw r0, 8(r1)
/* 803F2BC0 003EFB00  38 80 00 00 */	li r4, 0
/* 803F2BC4 003EFB04  38 A0 00 00 */	li r5, 0
/* 803F2BC8 003EFB08  38 C0 00 00 */	li r6, 0
/* 803F2BCC 003EFB0C  38 E0 00 00 */	li r7, 0
/* 803F2BD0 003EFB10  39 00 00 01 */	li r8, 1
/* 803F2BD4 003EFB14  39 20 00 00 */	li r9, 0
/* 803F2BD8 003EFB18  39 40 00 00 */	li r10, 0
/* 803F2BDC 003EFB1C  4B C2 C5 AD */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 803F2BE0 003EFB20  7C 73 1B 79 */	or. r19, r3, r3
/* 803F2BE4 003EFB24  40 82 00 18 */	bne .L_803F2BFC
/* 803F2BE8 003EFB28  38 7E 00 00 */	addi r3, r30, 0
/* 803F2BEC 003EFB2C  38 BE 00 30 */	addi r5, r30, 0x30
/* 803F2BF0 003EFB30  38 80 01 CE */	li r4, 0x1ce
/* 803F2BF4 003EFB34  4C C6 31 82 */	crclr 6
/* 803F2BF8 003EFB38  4B C3 7A 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803F2BFC:
/* 803F2BFC 003EFB3C  38 60 00 14 */	li r3, 0x14
/* 803F2C00 003EFB40  4B C3 12 A5 */	bl __nw__FUl
/* 803F2C04 003EFB44  7C 64 1B 79 */	or. r4, r3, r3
/* 803F2C08 003EFB48  41 82 00 14 */	beq .L_803F2C1C
/* 803F2C0C 003EFB4C  80 AD 88 2C */	lwz r5, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803F2C10 003EFB50  7E 64 9B 78 */	mr r4, r19
/* 803F2C14 003EFB54  4B CA 58 BD */	bl __ct__18JPAResourceManagerFPCvP7JKRHeap
/* 803F2C18 003EFB58  7C 64 1B 78 */	mr r4, r3
.L_803F2C1C:
/* 803F2C1C 003EFB5C  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 803F2C20 003EFB60  4B FC 69 19 */	bl setSceneResourceManager__14TParticle2dMgrFP18JPAResourceManager
/* 803F2C24 003EFB64  38 60 00 28 */	li r3, 0x28
/* 803F2C28 003EFB68  4B C3 12 7D */	bl __nw__FUl
/* 803F2C2C 003EFB6C  28 03 00 00 */	cmplwi r3, 0
/* 803F2C30 003EFB70  41 82 00 94 */	beq .L_803F2CC4
/* 803F2C34 003EFB74  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803F2C38 003EFB78  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803F2C3C 003EFB7C  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803F2C40 003EFB80  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803F2C44 003EFB84  90 03 00 00 */	stw r0, 0(r3)
/* 803F2C48 003EFB88  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803F2C4C 003EFB8C  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 803F2C50 003EFB90  3C 80 80 4E */	lis r4, __vt__Q25efx2d12TChasePosDir@ha
/* 803F2C54 003EFB94  90 03 00 00 */	stw r0, 0(r3)
/* 803F2C58 003EFB98  3A 60 00 00 */	li r19, 0
/* 803F2C5C 003EFB9C  39 85 74 20 */	addi r12, r5, __vt__Q25efx2d8TForever@l
/* 803F2C60 003EFBA0  39 24 73 90 */	addi r9, r4, __vt__Q25efx2d12TChasePosDir@l
/* 803F2C64 003EFBA4  9A 63 00 04 */	stb r19, 4(r3)
/* 803F2C68 003EFBA8  3C 80 80 4E */	lis r4, __vt__Q35efx2d8WorldMap10T2DRocketB@ha
/* 803F2C6C 003EFBAC  38 A4 74 A0 */	addi r5, r4, __vt__Q35efx2d8WorldMap10T2DRocketB@l
/* 803F2C70 003EFBB0  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803F2C74 003EFBB4  9A 63 00 05 */	stb r19, 5(r3)
/* 803F2C78 003EFBB8  39 6C 00 18 */	addi r11, r12, 0x18
/* 803F2C7C 003EFBBC  39 40 00 02 */	li r10, 2
/* 803F2C80 003EFBC0  39 09 00 18 */	addi r8, r9, 0x18
/* 803F2C84 003EFBC4  90 03 00 08 */	stw r0, 8(r3)
/* 803F2C88 003EFBC8  38 FF 00 D0 */	addi r7, r31, 0xd0
/* 803F2C8C 003EFBCC  38 DF 00 D8 */	addi r6, r31, 0xd8
/* 803F2C90 003EFBD0  38 85 00 18 */	addi r4, r5, 0x18
/* 803F2C94 003EFBD4  91 83 00 00 */	stw r12, 0(r3)
/* 803F2C98 003EFBD8  38 00 00 01 */	li r0, 1
/* 803F2C9C 003EFBDC  91 63 00 08 */	stw r11, 8(r3)
/* 803F2CA0 003EFBE0  B1 43 00 0C */	sth r10, 0xc(r3)
/* 803F2CA4 003EFBE4  92 63 00 10 */	stw r19, 0x10(r3)
/* 803F2CA8 003EFBE8  91 23 00 00 */	stw r9, 0(r3)
/* 803F2CAC 003EFBEC  91 03 00 08 */	stw r8, 8(r3)
/* 803F2CB0 003EFBF0  90 E3 00 14 */	stw r7, 0x14(r3)
/* 803F2CB4 003EFBF4  90 C3 00 18 */	stw r6, 0x18(r3)
/* 803F2CB8 003EFBF8  90 A3 00 00 */	stw r5, 0(r3)
/* 803F2CBC 003EFBFC  90 83 00 08 */	stw r4, 8(r3)
/* 803F2CC0 003EFC00  98 03 00 04 */	stb r0, 4(r3)
.L_803F2CC4:
/* 803F2CC4 003EFC04  90 7F 00 C4 */	stw r3, 0xc4(r31)
/* 803F2CC8 003EFC08  38 60 00 1C */	li r3, 0x1c
/* 803F2CCC 003EFC0C  4B C3 11 D9 */	bl __nw__FUl
/* 803F2CD0 003EFC10  28 03 00 00 */	cmplwi r3, 0
/* 803F2CD4 003EFC14  41 82 00 94 */	beq .L_803F2D68
/* 803F2CD8 003EFC18  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803F2CDC 003EFC1C  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803F2CE0 003EFC20  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803F2CE4 003EFC24  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803F2CE8 003EFC28  90 03 00 00 */	stw r0, 0(r3)
/* 803F2CEC 003EFC2C  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803F2CF0 003EFC30  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 803F2CF4 003EFC34  3C 80 80 4E */	lis r4, __vt__Q25efx2d12TChasePosDir@ha
/* 803F2CF8 003EFC38  90 03 00 00 */	stw r0, 0(r3)
/* 803F2CFC 003EFC3C  3A 60 00 00 */	li r19, 0
/* 803F2D00 003EFC40  39 85 74 20 */	addi r12, r5, __vt__Q25efx2d8TForever@l
/* 803F2D04 003EFC44  39 24 73 90 */	addi r9, r4, __vt__Q25efx2d12TChasePosDir@l
/* 803F2D08 003EFC48  9A 63 00 04 */	stb r19, 4(r3)
/* 803F2D0C 003EFC4C  3C 80 80 4F */	lis r4, __vt__Q35efx2d8WorldMap13T2DRocketGlow@ha
/* 803F2D10 003EFC50  38 A4 A4 78 */	addi r5, r4, __vt__Q35efx2d8WorldMap13T2DRocketGlow@l
/* 803F2D14 003EFC54  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803F2D18 003EFC58  9A 63 00 05 */	stb r19, 5(r3)
/* 803F2D1C 003EFC5C  39 6C 00 18 */	addi r11, r12, 0x18
/* 803F2D20 003EFC60  39 40 00 03 */	li r10, 3
/* 803F2D24 003EFC64  39 09 00 18 */	addi r8, r9, 0x18
/* 803F2D28 003EFC68  90 03 00 08 */	stw r0, 8(r3)
/* 803F2D2C 003EFC6C  38 FF 00 D0 */	addi r7, r31, 0xd0
/* 803F2D30 003EFC70  38 DF 00 D8 */	addi r6, r31, 0xd8
/* 803F2D34 003EFC74  38 85 00 18 */	addi r4, r5, 0x18
/* 803F2D38 003EFC78  91 83 00 00 */	stw r12, 0(r3)
/* 803F2D3C 003EFC7C  38 00 00 01 */	li r0, 1
/* 803F2D40 003EFC80  91 63 00 08 */	stw r11, 8(r3)
/* 803F2D44 003EFC84  B1 43 00 0C */	sth r10, 0xc(r3)
/* 803F2D48 003EFC88  92 63 00 10 */	stw r19, 0x10(r3)
/* 803F2D4C 003EFC8C  91 23 00 00 */	stw r9, 0(r3)
/* 803F2D50 003EFC90  91 03 00 08 */	stw r8, 8(r3)
/* 803F2D54 003EFC94  90 E3 00 14 */	stw r7, 0x14(r3)
/* 803F2D58 003EFC98  90 C3 00 18 */	stw r6, 0x18(r3)
/* 803F2D5C 003EFC9C  90 A3 00 00 */	stw r5, 0(r3)
/* 803F2D60 003EFCA0  90 83 00 08 */	stw r4, 8(r3)
/* 803F2D64 003EFCA4  98 03 00 04 */	stb r0, 4(r3)
.L_803F2D68:
/* 803F2D68 003EFCA8  90 7F 00 C0 */	stw r3, 0xc0(r31)
/* 803F2D6C 003EFCAC  38 80 00 03 */	li r4, 3
/* 803F2D70 003EFCB0  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 803F2D74 003EFCB4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2D78 003EFCB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F2D7C 003EFCBC  7D 89 03 A6 */	mtctr r12
/* 803F2D80 003EFCC0  4E 80 04 21 */	bctrl 
/* 803F2D84 003EFCC4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803F2D88 003EFCC8  38 80 00 02 */	li r4, 2
/* 803F2D8C 003EFCCC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2D90 003EFCD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F2D94 003EFCD4  7D 89 03 A6 */	mtctr r12
/* 803F2D98 003EFCD8  4E 80 04 21 */	bctrl 
/* 803F2D9C 003EFCDC  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 803F2DA0 003EFCE0  38 80 00 00 */	li r4, 0
/* 803F2DA4 003EFCE4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2DA8 003EFCE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F2DAC 003EFCEC  7D 89 03 A6 */	mtctr r12
/* 803F2DB0 003EFCF0  4E 80 04 21 */	bctrl 
/* 803F2DB4 003EFCF4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803F2DB8 003EFCF8  38 80 00 00 */	li r4, 0
/* 803F2DBC 003EFCFC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2DC0 003EFD00  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F2DC4 003EFD04  7D 89 03 A6 */	mtctr r12
/* 803F2DC8 003EFD08  4E 80 04 21 */	bctrl 
/* 803F2DCC 003EFD0C  3A 80 00 00 */	li r20, 0
/* 803F2DD0 003EFD10  3A 60 00 00 */	li r19, 0
/* 803F2DD4 003EFD14  48 00 00 18 */	b .L_803F2DEC
.L_803F2DD8:
/* 803F2DD8 003EFD18  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 803F2DDC 003EFD1C  7C 60 9A 14 */	add r3, r0, r19
/* 803F2DE0 003EFD20  48 00 4C 69 */	bl initPtcl__Q42kh6Screen8WorldMap13OnyonDynamicsFv
/* 803F2DE4 003EFD24  3A 73 00 34 */	addi r19, r19, 0x34
/* 803F2DE8 003EFD28  3A 94 00 01 */	addi r20, r20, 1
.L_803F2DEC:
/* 803F2DEC 003EFD2C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803F2DF0 003EFD30  7C 14 00 00 */	cmpw r20, r0
/* 803F2DF4 003EFD34  41 80 FF E4 */	blt .L_803F2DD8
/* 803F2DF8 003EFD38  38 60 00 18 */	li r3, 0x18
/* 803F2DFC 003EFD3C  4B C3 10 A9 */	bl __nw__FUl
/* 803F2E00 003EFD40  28 03 00 00 */	cmplwi r3, 0
/* 803F2E04 003EFD44  41 82 00 8C */	beq .L_803F2E90
/* 803F2E08 003EFD48  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803F2E0C 003EFD4C  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803F2E10 003EFD50  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803F2E14 003EFD54  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803F2E18 003EFD58  90 03 00 00 */	stw r0, 0(r3)
/* 803F2E1C 003EFD5C  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803F2E20 003EFD60  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 803F2E24 003EFD64  3C 80 80 4E */	lis r4, __vt__Q25efx2d9TChasePos@ha
/* 803F2E28 003EFD68  90 03 00 00 */	stw r0, 0(r3)
/* 803F2E2C 003EFD6C  39 80 00 00 */	li r12, 0
/* 803F2E30 003EFD70  39 65 74 20 */	addi r11, r5, __vt__Q25efx2d8TForever@l
/* 803F2E34 003EFD74  39 04 73 CC */	addi r8, r4, __vt__Q25efx2d9TChasePos@l
/* 803F2E38 003EFD78  99 83 00 04 */	stb r12, 4(r3)
/* 803F2E3C 003EFD7C  3C 80 80 4F */	lis r4, __vt__Q35efx2d8WorldMap11T2DMapFlare@ha
/* 803F2E40 003EFD80  38 A4 A4 3C */	addi r5, r4, __vt__Q35efx2d8WorldMap11T2DMapFlare@l
/* 803F2E44 003EFD84  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803F2E48 003EFD88  99 83 00 05 */	stb r12, 5(r3)
/* 803F2E4C 003EFD8C  39 4B 00 18 */	addi r10, r11, 0x18
/* 803F2E50 003EFD90  39 20 00 04 */	li r9, 4
/* 803F2E54 003EFD94  38 E8 00 18 */	addi r7, r8, 0x18
/* 803F2E58 003EFD98  90 03 00 08 */	stw r0, 8(r3)
/* 803F2E5C 003EFD9C  38 DF 00 E0 */	addi r6, r31, 0xe0
/* 803F2E60 003EFDA0  38 85 00 18 */	addi r4, r5, 0x18
/* 803F2E64 003EFDA4  38 00 00 01 */	li r0, 1
/* 803F2E68 003EFDA8  91 63 00 00 */	stw r11, 0(r3)
/* 803F2E6C 003EFDAC  91 43 00 08 */	stw r10, 8(r3)
/* 803F2E70 003EFDB0  B1 23 00 0C */	sth r9, 0xc(r3)
/* 803F2E74 003EFDB4  91 83 00 10 */	stw r12, 0x10(r3)
/* 803F2E78 003EFDB8  91 03 00 00 */	stw r8, 0(r3)
/* 803F2E7C 003EFDBC  90 E3 00 08 */	stw r7, 8(r3)
/* 803F2E80 003EFDC0  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803F2E84 003EFDC4  90 A3 00 00 */	stw r5, 0(r3)
/* 803F2E88 003EFDC8  90 83 00 08 */	stw r4, 8(r3)
/* 803F2E8C 003EFDCC  98 03 00 04 */	stb r0, 4(r3)
.L_803F2E90:
/* 803F2E90 003EFDD0  90 7F 00 C8 */	stw r3, 0xc8(r31)
/* 803F2E94 003EFDD4  38 60 00 18 */	li r3, 0x18
/* 803F2E98 003EFDD8  4B C3 10 0D */	bl __nw__FUl
/* 803F2E9C 003EFDDC  28 03 00 00 */	cmplwi r3, 0
/* 803F2EA0 003EFDE0  41 82 00 8C */	beq .L_803F2F2C
/* 803F2EA4 003EFDE4  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803F2EA8 003EFDE8  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803F2EAC 003EFDEC  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803F2EB0 003EFDF0  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803F2EB4 003EFDF4  90 03 00 00 */	stw r0, 0(r3)
/* 803F2EB8 003EFDF8  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803F2EBC 003EFDFC  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 803F2EC0 003EFE00  3C 80 80 4E */	lis r4, __vt__Q25efx2d9TChasePos@ha
/* 803F2EC4 003EFE04  90 03 00 00 */	stw r0, 0(r3)
/* 803F2EC8 003EFE08  39 80 00 00 */	li r12, 0
/* 803F2ECC 003EFE0C  39 65 74 20 */	addi r11, r5, __vt__Q25efx2d8TForever@l
/* 803F2ED0 003EFE10  39 04 73 CC */	addi r8, r4, __vt__Q25efx2d9TChasePos@l
/* 803F2ED4 003EFE14  99 83 00 04 */	stb r12, 4(r3)
/* 803F2ED8 003EFE18  3C 80 80 4F */	lis r4, __vt__Q35efx2d8WorldMap10T2DShstar1@ha
/* 803F2EDC 003EFE1C  38 A4 A4 00 */	addi r5, r4, __vt__Q35efx2d8WorldMap10T2DShstar1@l
/* 803F2EE0 003EFE20  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803F2EE4 003EFE24  99 83 00 05 */	stb r12, 5(r3)
/* 803F2EE8 003EFE28  39 4B 00 18 */	addi r10, r11, 0x18
/* 803F2EEC 003EFE2C  39 20 00 07 */	li r9, 7
/* 803F2EF0 003EFE30  38 E8 00 18 */	addi r7, r8, 0x18
/* 803F2EF4 003EFE34  90 03 00 08 */	stw r0, 8(r3)
/* 803F2EF8 003EFE38  38 DF 00 E8 */	addi r6, r31, 0xe8
/* 803F2EFC 003EFE3C  38 85 00 18 */	addi r4, r5, 0x18
/* 803F2F00 003EFE40  38 00 00 01 */	li r0, 1
/* 803F2F04 003EFE44  91 63 00 00 */	stw r11, 0(r3)
/* 803F2F08 003EFE48  91 43 00 08 */	stw r10, 8(r3)
/* 803F2F0C 003EFE4C  B1 23 00 0C */	sth r9, 0xc(r3)
/* 803F2F10 003EFE50  91 83 00 10 */	stw r12, 0x10(r3)
/* 803F2F14 003EFE54  91 03 00 00 */	stw r8, 0(r3)
/* 803F2F18 003EFE58  90 E3 00 08 */	stw r7, 8(r3)
/* 803F2F1C 003EFE5C  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803F2F20 003EFE60  90 A3 00 00 */	stw r5, 0(r3)
/* 803F2F24 003EFE64  90 83 00 08 */	stw r4, 8(r3)
/* 803F2F28 003EFE68  98 03 00 04 */	stb r0, 4(r3)
.L_803F2F2C:
/* 803F2F2C 003EFE6C  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 803F2F30 003EFE70  38 80 00 02 */	li r4, 2
/* 803F2F34 003EFE74  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 803F2F38 003EFE78  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2F3C 003EFE7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F2F40 003EFE80  7D 89 03 A6 */	mtctr r12
/* 803F2F44 003EFE84  4E 80 04 21 */	bctrl 
/* 803F2F48 003EFE88  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 803F2F4C 003EFE8C  38 80 00 02 */	li r4, 2
/* 803F2F50 003EFE90  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2F54 003EFE94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F2F58 003EFE98  7D 89 03 A6 */	mtctr r12
/* 803F2F5C 003EFE9C  4E 80 04 21 */	bctrl 
/* 803F2F60 003EFEA0  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 803F2F64 003EFEA4  38 80 00 00 */	li r4, 0
/* 803F2F68 003EFEA8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2F6C 003EFEAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F2F70 003EFEB0  7D 89 03 A6 */	mtctr r12
/* 803F2F74 003EFEB4  4E 80 04 21 */	bctrl 
/* 803F2F78 003EFEB8  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 803F2F7C 003EFEBC  38 80 00 00 */	li r4, 0
/* 803F2F80 003EFEC0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2F84 003EFEC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F2F88 003EFEC8  7D 89 03 A6 */	mtctr r12
/* 803F2F8C 003EFECC  4E 80 04 21 */	bctrl 
/* 803F2F90 003EFED0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F2F94 003EFED4  3C 80 61 76 */	lis r4, 0x61766530@ha
/* 803F2F98 003EFED8  38 C4 65 30 */	addi r6, r4, 0x61766530@l
/* 803F2F9C 003EFEDC  38 A0 4E 63 */	li r5, 0x4e63
/* 803F2FA0 003EFEE0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F2FA4 003EFEE4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F2FA8 003EFEE8  7D 89 03 A6 */	mtctr r12
/* 803F2FAC 003EFEEC  4E 80 04 21 */	bctrl 
/* 803F2FB0 003EFEF0  82 7F 00 54 */	lwz r19, 0x54(r31)
/* 803F2FB4 003EFEF4  82 83 00 10 */	lwz r20, 0x10(r3)
/* 803F2FB8 003EFEF8  28 13 00 00 */	cmplwi r19, 0
/* 803F2FBC 003EFEFC  82 A3 00 14 */	lwz r21, 0x14(r3)
/* 803F2FC0 003EFF00  40 82 00 0C */	bne .L_803F2FCC
/* 803F2FC4 003EFF04  3A C0 00 00 */	li r22, 0
/* 803F2FC8 003EFF08  48 00 00 70 */	b .L_803F3038
.L_803F2FCC:
/* 803F2FCC 003EFF0C  38 60 00 38 */	li r3, 0x38
/* 803F2FD0 003EFF10  4B C3 0E D5 */	bl __nw__FUl
/* 803F2FD4 003EFF14  7C 76 1B 79 */	or. r22, r3, r3
/* 803F2FD8 003EFF18  41 82 00 24 */	beq .L_803F2FFC
/* 803F2FDC 003EFF1C  38 80 00 10 */	li r4, 0x10
/* 803F2FE0 003EFF20  48 01 8B A9 */	bl __ct__Q32kh6Screen14khUtilFadePaneFUc
/* 803F2FE4 003EFF24  3C 60 80 4F */	lis r3, __vt__Q32kh6Screen16khUtilFadePaneWM@ha
/* 803F2FE8 003EFF28  38 00 00 00 */	li r0, 0
/* 803F2FEC 003EFF2C  38 63 A5 2C */	addi r3, r3, __vt__Q32kh6Screen16khUtilFadePaneWM@l
/* 803F2FF0 003EFF30  90 76 00 00 */	stw r3, 0(r22)
/* 803F2FF4 003EFF34  90 16 00 30 */	stw r0, 0x30(r22)
/* 803F2FF8 003EFF38  98 16 00 34 */	stb r0, 0x34(r22)
.L_803F2FFC:
/* 803F2FFC 003EFF3C  28 16 00 00 */	cmplwi r22, 0
/* 803F3000 003EFF40  40 82 00 18 */	bne .L_803F3018
/* 803F3004 003EFF44  38 7E 00 00 */	addi r3, r30, 0
/* 803F3008 003EFF48  38 BE 00 30 */	addi r5, r30, 0x30
/* 803F300C 003EFF4C  38 80 00 3C */	li r4, 0x3c
/* 803F3010 003EFF50  4C C6 31 82 */	crclr 6
/* 803F3014 003EFF54  4B C3 76 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803F3018:
/* 803F3018 003EFF58  7E 63 9B 78 */	mr r3, r19
/* 803F301C 003EFF5C  7E A6 AB 78 */	mr r6, r21
/* 803F3020 003EFF60  7E 85 A3 78 */	mr r5, r20
/* 803F3024 003EFF64  7E C7 B3 78 */	mr r7, r22
/* 803F3028 003EFF68  48 04 1A FD */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803F302C 003EFF6C  7C 64 1B 78 */	mr r4, r3
/* 803F3030 003EFF70  7E C3 B3 78 */	mr r3, r22
/* 803F3034 003EFF74  48 01 8C E5 */	bl add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
.L_803F3038:
/* 803F3038 003EFF78  92 DF 01 54 */	stw r22, 0x154(r31)
/* 803F303C 003EFF7C  3C 60 61 76 */	lis r3, 0x61766531@ha
/* 803F3040 003EFF80  38 C3 65 31 */	addi r6, r3, 0x61766531@l
/* 803F3044 003EFF84  38 A0 4E 63 */	li r5, 0x4e63
/* 803F3048 003EFF88  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F304C 003EFF8C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3050 003EFF90  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3054 003EFF94  7D 89 03 A6 */	mtctr r12
/* 803F3058 003EFF98  4E 80 04 21 */	bctrl 
/* 803F305C 003EFF9C  7C 64 1B 78 */	mr r4, r3
/* 803F3060 003EFFA0  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F3064 003EFFA4  48 01 8C B5 */	bl add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
/* 803F3068 003EFFA8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F306C 003EFFAC  3C 80 61 76 */	lis r4, 0x61766532@ha
/* 803F3070 003EFFB0  38 C4 65 32 */	addi r6, r4, 0x61766532@l
/* 803F3074 003EFFB4  38 A0 4E 63 */	li r5, 0x4e63
/* 803F3078 003EFFB8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F307C 003EFFBC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3080 003EFFC0  7D 89 03 A6 */	mtctr r12
/* 803F3084 003EFFC4  4E 80 04 21 */	bctrl 
/* 803F3088 003EFFC8  7C 64 1B 78 */	mr r4, r3
/* 803F308C 003EFFCC  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F3090 003EFFD0  48 01 8C 89 */	bl add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
/* 803F3094 003EFFD4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F3098 003EFFD8  3C 80 61 76 */	lis r4, 0x61766533@ha
/* 803F309C 003EFFDC  38 C4 65 33 */	addi r6, r4, 0x61766533@l
/* 803F30A0 003EFFE0  38 A0 4E 63 */	li r5, 0x4e63
/* 803F30A4 003EFFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F30A8 003EFFE8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F30AC 003EFFEC  7D 89 03 A6 */	mtctr r12
/* 803F30B0 003EFFF0  4E 80 04 21 */	bctrl 
/* 803F30B4 003EFFF4  7C 64 1B 78 */	mr r4, r3
/* 803F30B8 003EFFF8  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F30BC 003EFFFC  48 01 8C 5D */	bl add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
/* 803F30C0 003F0000  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F30C4 003F0004  3C A0 6E 61 */	lis r5, 0x6E616D65@ha
/* 803F30C8 003F0008  3C 80 00 50 */	lis r4, 0x0050635F@ha
/* 803F30CC 003F000C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F30D0 003F0010  38 C5 6D 65 */	addi r6, r5, 0x6E616D65@l
/* 803F30D4 003F0014  38 A4 63 5F */	addi r5, r4, 0x0050635F@l
/* 803F30D8 003F0018  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F30DC 003F001C  7D 89 03 A6 */	mtctr r12
/* 803F30E0 003F0020  4E 80 04 21 */	bctrl 
/* 803F30E4 003F0024  7C 64 1B 78 */	mr r4, r3
/* 803F30E8 003F0028  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F30EC 003F002C  48 01 8C 2D */	bl add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
/* 803F30F0 003F0030  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F30F4 003F0034  3C 80 72 61 */	lis r4, 0x72616E64@ha
/* 803F30F8 003F0038  38 C4 6E 64 */	addi r6, r4, 0x72616E64@l
/* 803F30FC 003F003C  38 A0 4E 67 */	li r5, 0x4e67
/* 803F3100 003F0040  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3104 003F0044  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3108 003F0048  7D 89 03 A6 */	mtctr r12
/* 803F310C 003F004C  4E 80 04 21 */	bctrl 
/* 803F3110 003F0050  7C 64 1B 78 */	mr r4, r3
/* 803F3114 003F0054  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F3118 003F0058  48 01 8C 01 */	bl add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
/* 803F311C 003F005C  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F3120 003F0060  38 80 00 00 */	li r4, 0
/* 803F3124 003F0064  93 E3 00 30 */	stw r31, 0x30(r3)
/* 803F3128 003F0068  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F312C 003F006C  48 01 8C E5 */	bl set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc
/* 803F3130 003F0070  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F3134 003F0074  48 01 8C BD */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 803F3138 003F0078  38 00 00 19 */	li r0, 0x19
/* 803F313C 003F007C  38 A1 01 5C */	addi r5, r1, 0x15c
/* 803F3140 003F0080  38 9E 01 B4 */	addi r4, r30, 0x1b4
/* 803F3144 003F0084  7C 09 03 A6 */	mtctr r0
.L_803F3148:
/* 803F3148 003F0088  80 64 00 04 */	lwz r3, 4(r4)
/* 803F314C 003F008C  84 04 00 08 */	lwzu r0, 8(r4)
/* 803F3150 003F0090  90 65 00 04 */	stw r3, 4(r5)
/* 803F3154 003F0094  94 05 00 08 */	stwu r0, 8(r5)
/* 803F3158 003F0098  42 00 FF F0 */	bdnz .L_803F3148
/* 803F315C 003F009C  81 7E 02 80 */	lwz r11, 0x280(r30)
/* 803F3160 003F00A0  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803F3164 003F00A4  81 5E 02 84 */	lwz r10, 0x284(r30)
/* 803F3168 003F00A8  3C 60 80 4E */	lis r3, __vt__Q25efx2d12T2DCountKira@ha
/* 803F316C 003F00AC  81 3E 02 88 */	lwz r9, 0x288(r30)
/* 803F3170 003F00B0  38 84 74 20 */	addi r4, r4, __vt__Q25efx2d8TForever@l
/* 803F3174 003F00B4  81 1E 02 8C */	lwz r8, 0x28c(r30)
/* 803F3178 003F00B8  38 63 76 10 */	addi r3, r3, __vt__Q25efx2d12T2DCountKira@l
/* 803F317C 003F00BC  80 FE 02 90 */	lwz r7, 0x290(r30)
/* 803F3180 003F00C0  7F F7 FB 78 */	mr r23, r31
/* 803F3184 003F00C4  80 DE 02 94 */	lwz r6, 0x294(r30)
/* 803F3188 003F00C8  3B 01 01 60 */	addi r24, r1, 0x160
/* 803F318C 003F00CC  80 BE 02 98 */	lwz r5, 0x298(r30)
/* 803F3190 003F00D0  3A C1 00 88 */	addi r22, r1, 0x88
/* 803F3194 003F00D4  83 3E 02 9C */	lwz r25, 0x29c(r30)
/* 803F3198 003F00D8  3A A4 00 18 */	addi r21, r4, 0x18
/* 803F319C 003F00DC  81 9E 02 A0 */	lwz r12, 0x2a0(r30)
/* 803F31A0 003F00E0  3A 83 00 18 */	addi r20, r3, 0x18
/* 803F31A4 003F00E4  80 1E 02 A4 */	lwz r0, 0x2a4(r30)
/* 803F31A8 003F00E8  3A 60 00 00 */	li r19, 0
/* 803F31AC 003F00EC  91 61 00 88 */	stw r11, 0x88(r1)
/* 803F31B0 003F00F0  81 7F 01 04 */	lwz r11, 0x104(r31)
/* 803F31B4 003F00F4  91 41 00 8C */	stw r10, 0x8c(r1)
/* 803F31B8 003F00F8  81 5F 01 08 */	lwz r10, 0x108(r31)
/* 803F31BC 003F00FC  91 21 00 90 */	stw r9, 0x90(r1)
/* 803F31C0 003F0100  81 3F 01 0C */	lwz r9, 0x10c(r31)
/* 803F31C4 003F0104  91 01 00 94 */	stw r8, 0x94(r1)
/* 803F31C8 003F0108  81 1F 01 1C */	lwz r8, 0x11c(r31)
/* 803F31CC 003F010C  90 E1 00 98 */	stw r7, 0x98(r1)
/* 803F31D0 003F0110  80 FF 01 10 */	lwz r7, 0x110(r31)
/* 803F31D4 003F0114  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 803F31D8 003F0118  80 DF 01 20 */	lwz r6, 0x120(r31)
/* 803F31DC 003F011C  90 A1 00 A0 */	stw r5, 0xa0(r1)
/* 803F31E0 003F0120  80 BF 01 14 */	lwz r5, 0x114(r31)
/* 803F31E4 003F0124  93 21 00 A4 */	stw r25, 0xa4(r1)
/* 803F31E8 003F0128  80 9F 01 24 */	lwz r4, 0x124(r31)
/* 803F31EC 003F012C  91 81 00 A8 */	stw r12, 0xa8(r1)
/* 803F31F0 003F0130  80 7F 01 18 */	lwz r3, 0x118(r31)
/* 803F31F4 003F0134  90 01 00 AC */	stw r0, 0xac(r1)
/* 803F31F8 003F0138  80 1F 01 28 */	lwz r0, 0x128(r31)
/* 803F31FC 003F013C  91 61 00 88 */	stw r11, 0x88(r1)
/* 803F3200 003F0140  91 41 00 8C */	stw r10, 0x8c(r1)
/* 803F3204 003F0144  91 21 00 90 */	stw r9, 0x90(r1)
/* 803F3208 003F0148  91 01 00 94 */	stw r8, 0x94(r1)
/* 803F320C 003F014C  90 E1 00 98 */	stw r7, 0x98(r1)
/* 803F3210 003F0150  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 803F3214 003F0154  90 A1 00 A0 */	stw r5, 0xa0(r1)
/* 803F3218 003F0158  90 81 00 A4 */	stw r4, 0xa4(r1)
/* 803F321C 003F015C  90 61 00 A8 */	stw r3, 0xa8(r1)
/* 803F3220 003F0160  90 01 00 AC */	stw r0, 0xac(r1)
.L_803F3224:
/* 803F3224 003F0164  38 60 00 60 */	li r3, 0x60
/* 803F3228 003F0168  4B C3 0C 7D */	bl __nw__FUl
/* 803F322C 003F016C  7C 7C 1B 79 */	or. r28, r3, r3
/* 803F3230 003F0170  41 82 00 4C */	beq .L_803F327C
/* 803F3234 003F0174  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 803F3238 003F0178  38 E0 00 03 */	li r7, 3
/* 803F323C 003F017C  80 B8 00 00 */	lwz r5, 0(r24)
/* 803F3240 003F0180  39 00 00 64 */	li r8, 0x64
/* 803F3244 003F0184  80 D8 00 04 */	lwz r6, 4(r24)
/* 803F3248 003F0188  48 01 8C 29 */	bl __ct__Q32kh6Screen14khUtilColorAnmFPQ29P2DScreen3MgrUxii
/* 803F324C 003F018C  3C 60 80 4F */	lis r3, __vt__Q32kh6Screen16khUtilColorAnmWM@ha
/* 803F3250 003F0190  38 00 00 00 */	li r0, 0
/* 803F3254 003F0194  38 63 A5 0C */	addi r3, r3, __vt__Q32kh6Screen16khUtilColorAnmWM@l
/* 803F3258 003F0198  90 7C 00 00 */	stw r3, 0(r28)
/* 803F325C 003F019C  90 1C 00 38 */	stw r0, 0x38(r28)
/* 803F3260 003F01A0  90 1C 00 48 */	stw r0, 0x48(r28)
/* 803F3264 003F01A4  90 1C 00 3C */	stw r0, 0x3c(r28)
/* 803F3268 003F01A8  90 1C 00 4C */	stw r0, 0x4c(r28)
/* 803F326C 003F01AC  90 1C 00 40 */	stw r0, 0x40(r28)
/* 803F3270 003F01B0  90 1C 00 50 */	stw r0, 0x50(r28)
/* 803F3274 003F01B4  90 1C 00 44 */	stw r0, 0x44(r28)
/* 803F3278 003F01B8  90 1C 00 54 */	stw r0, 0x54(r28)
.L_803F327C:
/* 803F327C 003F01BC  38 80 00 FF */	li r4, 0xff
/* 803F3280 003F01C0  38 60 00 A0 */	li r3, 0xa0
/* 803F3284 003F01C4  38 00 00 40 */	li r0, 0x40
/* 803F3288 003F01C8  98 81 00 30 */	stb r4, 0x30(r1)
/* 803F328C 003F01CC  39 20 00 60 */	li r9, 0x60
/* 803F3290 003F01D0  38 E0 00 00 */	li r7, 0
/* 803F3294 003F01D4  93 97 01 58 */	stw r28, 0x158(r23)
/* 803F3298 003F01D8  38 C0 00 AD */	li r6, 0xad
/* 803F329C 003F01DC  38 A0 00 B6 */	li r5, 0xb6
/* 803F32A0 003F01E0  81 17 01 58 */	lwz r8, 0x158(r23)
/* 803F32A4 003F01E4  98 61 00 31 */	stb r3, 0x31(r1)
/* 803F32A8 003F01E8  81 68 00 1C */	lwz r11, 0x1c(r8)
/* 803F32AC 003F01EC  98 01 00 32 */	stb r0, 0x32(r1)
/* 803F32B0 003F01F0  98 81 00 33 */	stb r4, 0x33(r1)
/* 803F32B4 003F01F4  81 01 00 30 */	lwz r8, 0x30(r1)
/* 803F32B8 003F01F8  98 81 00 28 */	stb r4, 0x28(r1)
/* 803F32BC 003F01FC  91 01 00 34 */	stw r8, 0x34(r1)
/* 803F32C0 003F0200  89 41 00 34 */	lbz r10, 0x34(r1)
/* 803F32C4 003F0204  89 01 00 35 */	lbz r8, 0x35(r1)
/* 803F32C8 003F0208  99 4B 00 00 */	stb r10, 0(r11)
/* 803F32CC 003F020C  89 41 00 36 */	lbz r10, 0x36(r1)
/* 803F32D0 003F0210  99 0B 00 01 */	stb r8, 1(r11)
/* 803F32D4 003F0214  89 01 00 37 */	lbz r8, 0x37(r1)
/* 803F32D8 003F0218  99 4B 00 02 */	stb r10, 2(r11)
/* 803F32DC 003F021C  99 0B 00 03 */	stb r8, 3(r11)
/* 803F32E0 003F0220  81 17 01 58 */	lwz r8, 0x158(r23)
/* 803F32E4 003F0224  98 81 00 29 */	stb r4, 0x29(r1)
/* 803F32E8 003F0228  81 48 00 1C */	lwz r10, 0x1c(r8)
/* 803F32EC 003F022C  99 21 00 2A */	stb r9, 0x2a(r1)
/* 803F32F0 003F0230  98 81 00 2B */	stb r4, 0x2b(r1)
/* 803F32F4 003F0234  81 01 00 28 */	lwz r8, 0x28(r1)
/* 803F32F8 003F0238  98 81 00 20 */	stb r4, 0x20(r1)
/* 803F32FC 003F023C  91 01 00 2C */	stw r8, 0x2c(r1)
/* 803F3300 003F0240  89 21 00 2C */	lbz r9, 0x2c(r1)
/* 803F3304 003F0244  89 01 00 2D */	lbz r8, 0x2d(r1)
/* 803F3308 003F0248  99 2A 00 04 */	stb r9, 4(r10)
/* 803F330C 003F024C  89 21 00 2E */	lbz r9, 0x2e(r1)
/* 803F3310 003F0250  99 0A 00 05 */	stb r8, 5(r10)
/* 803F3314 003F0254  89 01 00 2F */	lbz r8, 0x2f(r1)
/* 803F3318 003F0258  99 2A 00 06 */	stb r9, 6(r10)
/* 803F331C 003F025C  99 0A 00 07 */	stb r8, 7(r10)
/* 803F3320 003F0260  81 17 01 58 */	lwz r8, 0x158(r23)
/* 803F3324 003F0264  98 61 00 21 */	stb r3, 0x21(r1)
/* 803F3328 003F0268  81 08 00 1C */	lwz r8, 0x1c(r8)
/* 803F332C 003F026C  98 01 00 22 */	stb r0, 0x22(r1)
/* 803F3330 003F0270  98 81 00 23 */	stb r4, 0x23(r1)
/* 803F3334 003F0274  80 01 00 20 */	lwz r0, 0x20(r1)
/* 803F3338 003F0278  98 E1 00 18 */	stb r7, 0x18(r1)
/* 803F333C 003F027C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803F3340 003F0280  88 61 00 24 */	lbz r3, 0x24(r1)
/* 803F3344 003F0284  88 01 00 25 */	lbz r0, 0x25(r1)
/* 803F3348 003F0288  98 68 00 08 */	stb r3, 8(r8)
/* 803F334C 003F028C  88 61 00 26 */	lbz r3, 0x26(r1)
/* 803F3350 003F0290  98 08 00 09 */	stb r0, 9(r8)
/* 803F3354 003F0294  88 01 00 27 */	lbz r0, 0x27(r1)
/* 803F3358 003F0298  98 68 00 0A */	stb r3, 0xa(r8)
/* 803F335C 003F029C  98 08 00 0B */	stb r0, 0xb(r8)
/* 803F3360 003F02A0  98 C1 00 19 */	stb r6, 0x19(r1)
/* 803F3364 003F02A4  80 D7 01 58 */	lwz r6, 0x158(r23)
/* 803F3368 003F02A8  98 A1 00 1A */	stb r5, 0x1a(r1)
/* 803F336C 003F02AC  98 81 00 1B */	stb r4, 0x1b(r1)
/* 803F3370 003F02B0  80 01 00 18 */	lwz r0, 0x18(r1)
/* 803F3374 003F02B4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803F3378 003F02B8  88 61 00 1C */	lbz r3, 0x1c(r1)
/* 803F337C 003F02BC  88 01 00 1D */	lbz r0, 0x1d(r1)
/* 803F3380 003F02C0  98 66 00 24 */	stb r3, 0x24(r6)
/* 803F3384 003F02C4  88 61 00 1E */	lbz r3, 0x1e(r1)
/* 803F3388 003F02C8  98 06 00 25 */	stb r0, 0x25(r6)
/* 803F338C 003F02CC  88 01 00 1F */	lbz r0, 0x1f(r1)
/* 803F3390 003F02D0  98 66 00 26 */	stb r3, 0x26(r6)
/* 803F3394 003F02D4  98 06 00 27 */	stb r0, 0x27(r6)
/* 803F3398 003F02D8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F339C 003F02DC  80 BE 02 A8 */	lwz r5, 0x2a8(r30)
/* 803F33A0 003F02E0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F33A4 003F02E4  80 DE 02 AC */	lwz r6, 0x2ac(r30)
/* 803F33A8 003F02E8  80 9E 02 B0 */	lwz r4, 0x2b0(r30)
/* 803F33AC 003F02EC  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 803F33B0 003F02F0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F33B4 003F02F4  90 A1 00 50 */	stw r5, 0x50(r1)
/* 803F33B8 003F02F8  80 B8 00 08 */	lwz r5, 8(r24)
/* 803F33BC 003F02FC  90 C1 00 54 */	stw r6, 0x54(r1)
/* 803F33C0 003F0300  80 D8 00 0C */	lwz r6, 0xc(r24)
/* 803F33C4 003F0304  90 81 00 58 */	stw r4, 0x58(r1)
/* 803F33C8 003F0308  90 01 00 5C */	stw r0, 0x5c(r1)
/* 803F33CC 003F030C  7D 89 03 A6 */	mtctr r12
/* 803F33D0 003F0310  4E 80 04 21 */	bctrl 
/* 803F33D4 003F0314  90 61 00 50 */	stw r3, 0x50(r1)
/* 803F33D8 003F0318  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F33DC 003F031C  80 B8 00 10 */	lwz r5, 0x10(r24)
/* 803F33E0 003F0320  81 83 00 00 */	lwz r12, 0(r3)
/* 803F33E4 003F0324  80 D8 00 14 */	lwz r6, 0x14(r24)
/* 803F33E8 003F0328  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F33EC 003F032C  7D 89 03 A6 */	mtctr r12
/* 803F33F0 003F0330  4E 80 04 21 */	bctrl 
/* 803F33F4 003F0334  90 61 00 54 */	stw r3, 0x54(r1)
/* 803F33F8 003F0338  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F33FC 003F033C  80 B8 00 18 */	lwz r5, 0x18(r24)
/* 803F3400 003F0340  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3404 003F0344  80 D8 00 1C */	lwz r6, 0x1c(r24)
/* 803F3408 003F0348  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F340C 003F034C  7D 89 03 A6 */	mtctr r12
/* 803F3410 003F0350  4E 80 04 21 */	bctrl 
/* 803F3414 003F0354  90 61 00 58 */	stw r3, 0x58(r1)
/* 803F3418 003F0358  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F341C 003F035C  80 B8 00 20 */	lwz r5, 0x20(r24)
/* 803F3420 003F0360  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3424 003F0364  80 D8 00 24 */	lwz r6, 0x24(r24)
/* 803F3428 003F0368  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F342C 003F036C  7D 89 03 A6 */	mtctr r12
/* 803F3430 003F0370  4E 80 04 21 */	bctrl 
/* 803F3434 003F0374  83 77 01 58 */	lwz r27, 0x158(r23)
/* 803F3438 003F0378  3B 41 00 50 */	addi r26, r1, 0x50
/* 803F343C 003F037C  90 61 00 5C */	stw r3, 0x5c(r1)
/* 803F3440 003F0380  3B 80 00 00 */	li r28, 0
/* 803F3444 003F0384  7F 79 DB 78 */	mr r25, r27
.L_803F3448:
/* 803F3448 003F0388  80 1A 00 00 */	lwz r0, 0(r26)
/* 803F344C 003F038C  38 60 00 18 */	li r3, 0x18
/* 803F3450 003F0390  90 19 00 38 */	stw r0, 0x38(r25)
/* 803F3454 003F0394  4B C3 0A 51 */	bl __nw__FUl
/* 803F3458 003F0398  28 03 00 00 */	cmplwi r3, 0
/* 803F345C 003F039C  41 82 00 68 */	beq .L_803F34C4
/* 803F3460 003F03A0  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803F3464 003F03A4  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803F3468 003F03A8  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803F346C 003F03AC  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803F3470 003F03B0  90 03 00 00 */	stw r0, 0(r3)
/* 803F3474 003F03B4  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803F3478 003F03B8  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 803F347C 003F03BC  3C 80 80 4E */	lis r4, __vt__Q25efx2d12T2DCountKira@ha
/* 803F3480 003F03C0  90 03 00 00 */	stw r0, 0(r3)
/* 803F3484 003F03C4  39 00 00 00 */	li r8, 0
/* 803F3488 003F03C8  38 E6 E2 7C */	addi r7, r6, __vt__18JPAEmitterCallBack@l
/* 803F348C 003F03CC  38 C5 74 20 */	addi r6, r5, __vt__Q25efx2d8TForever@l
/* 803F3490 003F03D0  99 03 00 04 */	stb r8, 4(r3)
/* 803F3494 003F03D4  38 A0 00 08 */	li r5, 8
/* 803F3498 003F03D8  38 04 76 10 */	addi r0, r4, __vt__Q25efx2d12T2DCountKira@l
/* 803F349C 003F03DC  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F34A0 003F03E0  99 03 00 05 */	stb r8, 5(r3)
/* 803F34A4 003F03E4  90 E3 00 08 */	stw r7, 8(r3)
/* 803F34A8 003F03E8  90 C3 00 00 */	stw r6, 0(r3)
/* 803F34AC 003F03EC  92 A3 00 08 */	stw r21, 8(r3)
/* 803F34B0 003F03F0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803F34B4 003F03F4  91 03 00 10 */	stw r8, 0x10(r3)
/* 803F34B8 003F03F8  90 03 00 00 */	stw r0, 0(r3)
/* 803F34BC 003F03FC  92 83 00 08 */	stw r20, 8(r3)
/* 803F34C0 003F0400  D0 03 00 14 */	stfs f0, 0x14(r3)
.L_803F34C4:
/* 803F34C4 003F0404  90 79 00 48 */	stw r3, 0x48(r25)
/* 803F34C8 003F0408  38 80 00 04 */	li r4, 4
/* 803F34CC 003F040C  80 79 00 48 */	lwz r3, 0x48(r25)
/* 803F34D0 003F0410  81 83 00 00 */	lwz r12, 0(r3)
/* 803F34D4 003F0414  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F34D8 003F0418  7D 89 03 A6 */	mtctr r12
/* 803F34DC 003F041C  4E 80 04 21 */	bctrl 
/* 803F34E0 003F0420  3B 9C 00 01 */	addi r28, r28, 1
/* 803F34E4 003F0424  3B 39 00 04 */	addi r25, r25, 4
/* 803F34E8 003F0428  2C 1C 00 04 */	cmpwi r28, 4
/* 803F34EC 003F042C  3B 5A 00 04 */	addi r26, r26, 4
/* 803F34F0 003F0430  41 80 FF 58 */	blt .L_803F3448
/* 803F34F4 003F0434  80 76 00 00 */	lwz r3, 0(r22)
/* 803F34F8 003F0438  3A 73 00 01 */	addi r19, r19, 1
/* 803F34FC 003F043C  80 16 00 04 */	lwz r0, 4(r22)
/* 803F3500 003F0440  2C 13 00 05 */	cmpwi r19, 5
/* 803F3504 003F0444  90 7B 00 58 */	stw r3, 0x58(r27)
/* 803F3508 003F0448  3B 18 00 28 */	addi r24, r24, 0x28
/* 803F350C 003F044C  3A F7 00 04 */	addi r23, r23, 4
/* 803F3510 003F0450  3A D6 00 08 */	addi r22, r22, 8
/* 803F3514 003F0454  90 1B 00 5C */	stw r0, 0x5c(r27)
/* 803F3518 003F0458  41 80 FD 0C */	blt .L_803F3224
/* 803F351C 003F045C  7F A3 EB 78 */	mr r3, r29
/* 803F3520 003F0460  4B C3 00 85 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803F3524 003F0464  88 9F 01 81 */	lbz r4, 0x181(r31)
/* 803F3528 003F0468  38 60 00 01 */	li r3, 1
/* 803F352C 003F046C  34 A4 FF FF */	addic. r5, r4, -1
/* 803F3530 003F0470  38 05 00 01 */	addi r0, r5, 1
/* 803F3534 003F0474  7C 09 03 A6 */	mtctr r0
/* 803F3538 003F0478  41 80 00 30 */	blt .L_803F3568
.L_803F353C:
/* 803F353C 003F047C  88 9F 01 82 */	lbz r4, 0x182(r31)
/* 803F3540 003F0480  7C 60 28 30 */	slw r0, r3, r5
/* 803F3544 003F0484  7C 80 00 39 */	and. r0, r4, r0
/* 803F3548 003F0488  40 82 00 18 */	bne .L_803F3560
/* 803F354C 003F048C  54 A0 10 3A */	slwi r0, r5, 2
/* 803F3550 003F0490  38 7E 00 10 */	addi r3, r30, 0x10
/* 803F3554 003F0494  7C 03 04 2E */	lfsx f0, r3, r0
/* 803F3558 003F0498  D0 1F 00 90 */	stfs f0, 0x90(r31)
/* 803F355C 003F049C  48 00 00 0C */	b .L_803F3568
.L_803F3560:
/* 803F3560 003F04A0  38 A5 FF FF */	addi r5, r5, -1
/* 803F3564 003F04A4  42 00 FF D8 */	bdnz .L_803F353C
.L_803F3568:
/* 803F3568 003F04A8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F356C 003F04AC  3C A0 43 4B */	lis r5, 0x434B4554@ha
/* 803F3570 003F04B0  3C 80 00 4E */	lis r4, 0x004E524F@ha
/* 803F3574 003F04B4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3578 003F04B8  38 C5 45 54 */	addi r6, r5, 0x434B4554@l
/* 803F357C 003F04BC  38 A4 52 4F */	addi r5, r4, 0x004E524F@l
/* 803F3580 003F04C0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3584 003F04C4  7D 89 03 A6 */	mtctr r12
/* 803F3588 003F04C8  4E 80 04 21 */	bctrl 
/* 803F358C 003F04CC  C0 22 1B B0 */	lfs f1, lbl_8051FF10@sda21(r2)
/* 803F3590 003F04D0  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3594 003F04D4  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 803F3598 003F04D8  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 803F359C 003F04DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F35A0 003F04E0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F35A4 003F04E4  7D 89 03 A6 */	mtctr r12
/* 803F35A8 003F04E8  4E 80 04 21 */	bctrl 
/* 803F35AC 003F04EC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F35B0 003F04F0  3C 80 4E 52 */	lis r4, 0x4E524544@ha
/* 803F35B4 003F04F4  38 C4 45 44 */	addi r6, r4, 0x4E524544@l
/* 803F35B8 003F04F8  38 A0 00 00 */	li r5, 0
/* 803F35BC 003F04FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F35C0 003F0500  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F35C4 003F0504  7D 89 03 A6 */	mtctr r12
/* 803F35C8 003F0508  4E 80 04 21 */	bctrl 
/* 803F35CC 003F050C  C0 22 1B B0 */	lfs f1, lbl_8051FF10@sda21(r2)
/* 803F35D0 003F0510  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F35D4 003F0514  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 803F35D8 003F0518  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 803F35DC 003F051C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F35E0 003F0520  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F35E4 003F0524  7D 89 03 A6 */	mtctr r12
/* 803F35E8 003F0528  4E 80 04 21 */	bctrl 
/* 803F35EC 003F052C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F35F0 003F0530  3C A0 4C 4C */	lis r5, 0x4C4C4F57@ha
/* 803F35F4 003F0534  3C 80 00 4E */	lis r4, 0x004E5945@ha
/* 803F35F8 003F0538  81 83 00 00 */	lwz r12, 0(r3)
/* 803F35FC 003F053C  38 C5 4F 57 */	addi r6, r5, 0x4C4C4F57@l
/* 803F3600 003F0540  38 A4 59 45 */	addi r5, r4, 0x004E5945@l
/* 803F3604 003F0544  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3608 003F0548  7D 89 03 A6 */	mtctr r12
/* 803F360C 003F054C  4E 80 04 21 */	bctrl 
/* 803F3610 003F0550  C0 22 1B B0 */	lfs f1, lbl_8051FF10@sda21(r2)
/* 803F3614 003F0554  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3618 003F0558  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 803F361C 003F055C  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 803F3620 003F0560  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3624 003F0564  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F3628 003F0568  7D 89 03 A6 */	mtctr r12
/* 803F362C 003F056C  4E 80 04 21 */	bctrl 
/* 803F3630 003F0570  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F3634 003F0574  3C 80 42 4C */	lis r4, 0x424C5545@ha
/* 803F3638 003F0578  38 C4 55 45 */	addi r6, r4, 0x424C5545@l
/* 803F363C 003F057C  38 A0 00 4E */	li r5, 0x4e
/* 803F3640 003F0580  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3644 003F0584  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3648 003F0588  7D 89 03 A6 */	mtctr r12
/* 803F364C 003F058C  4E 80 04 21 */	bctrl 
/* 803F3650 003F0590  C0 22 1B B0 */	lfs f1, lbl_8051FF10@sda21(r2)
/* 803F3654 003F0594  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3658 003F0598  D0 23 00 D4 */	stfs f1, 0xd4(r3)
/* 803F365C 003F059C  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 803F3660 003F05A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3664 003F05A4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F3668 003F05A8  7D 89 03 A6 */	mtctr r12
/* 803F366C 003F05AC  4E 80 04 21 */	bctrl 
/* 803F3670 003F05B0  3A A0 00 00 */	li r21, 0
/* 803F3674 003F05B4  3E 80 61 69 */	lis r20, 0x61697430@ha
/* 803F3678 003F05B8  3A 60 00 00 */	li r19, 0
.L_803F367C:
/* 803F367C 003F05BC  7E A5 AB 78 */	mr r5, r21
/* 803F3680 003F05C0  38 94 74 30 */	addi r4, r20, 0x61697430@l
/* 803F3684 003F05C4  38 60 4E 77 */	li r3, 0x4e77
/* 803F3688 003F05C8  48 01 7D 6D */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F368C 003F05CC  7C 65 1B 78 */	mr r5, r3
/* 803F3690 003F05D0  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3694 003F05D4  7C 86 23 78 */	mr r6, r4
/* 803F3698 003F05D8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F369C 003F05DC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F36A0 003F05E0  7D 89 03 A6 */	mtctr r12
/* 803F36A4 003F05E4  4E 80 04 21 */	bctrl 
/* 803F36A8 003F05E8  3A B5 00 01 */	addi r21, r21, 1
/* 803F36AC 003F05EC  9A 63 00 B0 */	stb r19, 0xb0(r3)
/* 803F36B0 003F05F0  2C 15 00 04 */	cmpwi r21, 4
/* 803F36B4 003F05F4  41 80 FF C8 */	blt .L_803F367C
/* 803F36B8 003F05F8  3A 60 00 00 */	li r19, 0
.L_803F36BC:
/* 803F36BC 003F05FC  88 1F 01 81 */	lbz r0, 0x181(r31)
/* 803F36C0 003F0600  7C 13 00 00 */	cmpw r19, r0
/* 803F36C4 003F0604  40 80 00 18 */	bge .L_803F36DC
/* 803F36C8 003F0608  38 00 00 01 */	li r0, 1
/* 803F36CC 003F060C  88 7F 01 82 */	lbz r3, 0x182(r31)
/* 803F36D0 003F0610  7C 00 98 30 */	slw r0, r0, r19
/* 803F36D4 003F0614  7C 60 00 39 */	and. r0, r3, r0
/* 803F36D8 003F0618  41 82 00 40 */	beq .L_803F3718
.L_803F36DC:
/* 803F36DC 003F061C  3C 80 69 6E */	lis r4, 0x696E7430@ha
/* 803F36E0 003F0620  3C 60 00 4E */	lis r3, 0x004E706F@ha
/* 803F36E4 003F0624  7E 65 9B 78 */	mr r5, r19
/* 803F36E8 003F0628  38 84 74 30 */	addi r4, r4, 0x696E7430@l
/* 803F36EC 003F062C  38 63 70 6F */	addi r3, r3, 0x004E706F@l
/* 803F36F0 003F0630  48 01 7D 05 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F36F4 003F0634  7C 65 1B 78 */	mr r5, r3
/* 803F36F8 003F0638  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F36FC 003F063C  7C 86 23 78 */	mr r6, r4
/* 803F3700 003F0640  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3704 003F0644  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3708 003F0648  7D 89 03 A6 */	mtctr r12
/* 803F370C 003F064C  4E 80 04 21 */	bctrl 
/* 803F3710 003F0650  38 00 00 00 */	li r0, 0
/* 803F3714 003F0654  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F3718:
/* 803F3718 003F0658  3A 73 00 01 */	addi r19, r19, 1
/* 803F371C 003F065C  2C 13 00 04 */	cmpwi r19, 4
/* 803F3720 003F0660  41 80 FF 9C */	blt .L_803F36BC
/* 803F3724 003F0664  3A C0 00 00 */	li r22, 0
/* 803F3728 003F0668  3E A0 67 68 */	lis r21, 0x6768
/* 803F372C 003F066C  3E 80 00 50 */	lis r20, 0x50
/* 803F3730 003F0670  3A 60 00 00 */	li r19, 0
/* 803F3734 003F0674  48 00 00 38 */	b .L_803F376C
.L_803F3738:
/* 803F3738 003F0678  7E C5 B3 78 */	mr r5, r22
/* 803F373C 003F067C  38 95 74 30 */	addi r4, r21, 0x7430
/* 803F3740 003F0680  38 74 6C 69 */	addi r3, r20, 0x6c69
/* 803F3744 003F0684  48 01 7C B1 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F3748 003F0688  7C 65 1B 78 */	mr r5, r3
/* 803F374C 003F068C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3750 003F0690  7C 86 23 78 */	mr r6, r4
/* 803F3754 003F0694  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3758 003F0698  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F375C 003F069C  7D 89 03 A6 */	mtctr r12
/* 803F3760 003F06A0  4E 80 04 21 */	bctrl 
/* 803F3764 003F06A4  9A 63 00 B0 */	stb r19, 0xb0(r3)
/* 803F3768 003F06A8  3A D6 00 01 */	addi r22, r22, 1
.L_803F376C:
/* 803F376C 003F06AC  88 1F 01 81 */	lbz r0, 0x181(r31)
/* 803F3770 003F06B0  7C 16 00 00 */	cmpw r22, r0
/* 803F3774 003F06B4  41 80 FF C4 */	blt .L_803F3738
/* 803F3778 003F06B8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F377C 003F06BC  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 803F3780 003F06C0  48 00 88 F9 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 803F3784 003F06C4  BA 61 02 2C */	lmw r19, 0x22c(r1)
/* 803F3788 003F06C8  80 01 02 64 */	lwz r0, 0x264(r1)
/* 803F378C 003F06CC  7C 08 03 A6 */	mtlr r0
/* 803F3790 003F06D0  38 21 02 60 */	addi r1, r1, 0x260
/* 803F3794 003F06D4  4E 80 00 20 */	blr 
.endfn loadResource__Q32kh6Screen8WorldMapFv

.fn __dt__Q42kh6Screen8WorldMap13OnyonDynamicsFv, weak
/* 803F3798 003F06D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F379C 003F06DC  7C 08 02 A6 */	mflr r0
/* 803F37A0 003F06E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F37A4 003F06E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F37A8 003F06E8  7C 7F 1B 79 */	or. r31, r3, r3
/* 803F37AC 003F06EC  41 82 00 10 */	beq .L_803F37BC
/* 803F37B0 003F06F0  7C 80 07 35 */	extsh. r0, r4
/* 803F37B4 003F06F4  40 81 00 08 */	ble .L_803F37BC
/* 803F37B8 003F06F8  4B C3 08 FD */	bl __dl__FPv
.L_803F37BC:
/* 803F37BC 003F06FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F37C0 003F0700  7F E3 FB 78 */	mr r3, r31
/* 803F37C4 003F0704  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F37C8 003F0708  7C 08 03 A6 */	mtlr r0
/* 803F37CC 003F070C  38 21 00 10 */	addi r1, r1, 0x10
/* 803F37D0 003F0710  4E 80 00 20 */	blr 
.endfn __dt__Q42kh6Screen8WorldMap13OnyonDynamicsFv

.fn update__Q32kh6Screen8WorldMapFRQ34Game8WorldMap9UpdateArg, global
/* 803F37D4 003F0714  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 803F37D8 003F0718  7C 08 02 A6 */	mflr r0
/* 803F37DC 003F071C  90 01 01 74 */	stw r0, 0x174(r1)
/* 803F37E0 003F0720  DB E1 01 60 */	stfd f31, 0x160(r1)
/* 803F37E4 003F0724  F3 E1 01 68 */	psq_st f31, 360(r1), 0, qr0
/* 803F37E8 003F0728  DB C1 01 50 */	stfd f30, 0x150(r1)
/* 803F37EC 003F072C  F3 C1 01 58 */	psq_st f30, 344(r1), 0, qr0
/* 803F37F0 003F0730  BF 21 01 34 */	stmw r25, 0x134(r1)
/* 803F37F4 003F0734  7C 7F 1B 78 */	mr r31, r3
/* 803F37F8 003F0738  7C 9A 23 78 */	mr r26, r4
/* 803F37FC 003F073C  3C A0 80 49 */	lis r5, lbl_80497C70@ha
/* 803F3800 003F0740  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 803F3804 003F0744  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F3808 003F0748  3B C5 7C 70 */	addi r30, r5, lbl_80497C70@l
/* 803F380C 003F074C  4B DB A7 A1 */	bl getCourseInfo__Q24Game6StagesFi
/* 803F3810 003F0750  90 7A 00 00 */	stw r3, 0(r26)
/* 803F3814 003F0754  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 803F3818 003F0758  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803F381C 003F075C  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F3820 003F0760  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 803F3824 003F0764  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 803F3828 003F0768  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F382C 003F076C  C0 1F 00 74 */	lfs f0, 0x74(r31)
/* 803F3830 003F0770  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 803F3834 003F0774  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F3838 003F0778  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 803F383C 003F077C  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 803F3840 003F0780  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F3844 003F0784  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 803F3848 003F0788  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 803F384C 003F078C  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F3850 003F0790  C0 1F 00 80 */	lfs f0, 0x80(r31)
/* 803F3854 003F0794  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 803F3858 003F0798  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F385C 003F079C  C0 1F 00 84 */	lfs f0, 0x84(r31)
/* 803F3860 003F07A0  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 803F3864 003F07A4  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F3868 003F07A8  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 803F386C 003F07AC  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 803F3870 003F07B0  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F3874 003F07B4  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 803F3878 003F07B8  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 803F387C 003F07BC  D0 03 00 08 */	stfs f0, 8(r3)
/* 803F3880 003F07C0  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3884 003F07C4  4B C4 D2 A9 */	bl animation__9J2DScreenFv
/* 803F3888 003F07C8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F388C 003F07CC  4B C4 D2 A1 */	bl animation__9J2DScreenFv
/* 803F3890 003F07D0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F3894 003F07D4  4B C4 D2 99 */	bl animation__9J2DScreenFv
/* 803F3898 003F07D8  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 803F389C 003F07DC  3B 20 00 00 */	li r25, 0
/* 803F38A0 003F07E0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 803F38A4 003F07E4  3F A0 61 6E */	lis r29, 0x616E6430@ha
/* 803F38A8 003F07E8  3F 80 67 68 */	lis r28, 0x6768
/* 803F38AC 003F07EC  3F 60 00 50 */	lis r27, 0x50
/* 803F38B0 003F07F0  D0 03 00 08 */	stfs f0, 8(r3)
.L_803F38B4:
/* 803F38B4 003F07F4  7F 25 CB 78 */	mr r5, r25
/* 803F38B8 003F07F8  38 9D 64 30 */	addi r4, r29, 0x616E6430@l
/* 803F38BC 003F07FC  38 60 50 6C */	li r3, 0x506c
/* 803F38C0 003F0800  48 01 7B 35 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F38C4 003F0804  7C 65 1B 78 */	mr r5, r3
/* 803F38C8 003F0808  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F38CC 003F080C  7C 86 23 78 */	mr r6, r4
/* 803F38D0 003F0810  81 83 00 00 */	lwz r12, 0(r3)
/* 803F38D4 003F0814  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F38D8 003F0818  7D 89 03 A6 */	mtctr r12
/* 803F38DC 003F081C  4E 80 04 21 */	bctrl 
/* 803F38E0 003F0820  4B C4 5D 1D */	bl animationTransform__7J2DPaneFv
/* 803F38E4 003F0824  7F 25 CB 78 */	mr r5, r25
/* 803F38E8 003F0828  38 9C 74 30 */	addi r4, r28, 0x7430
/* 803F38EC 003F082C  38 7B 6C 69 */	addi r3, r27, 0x6c69
/* 803F38F0 003F0830  48 01 7B 05 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F38F4 003F0834  7C 65 1B 78 */	mr r5, r3
/* 803F38F8 003F0838  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F38FC 003F083C  7C 86 23 78 */	mr r6, r4
/* 803F3900 003F0840  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3904 003F0844  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3908 003F0848  7D 89 03 A6 */	mtctr r12
/* 803F390C 003F084C  4E 80 04 21 */	bctrl 
/* 803F3910 003F0850  4B C4 5C ED */	bl animationTransform__7J2DPaneFv
/* 803F3914 003F0854  3B 39 00 01 */	addi r25, r25, 1
/* 803F3918 003F0858  2C 19 00 04 */	cmpwi r25, 4
/* 803F391C 003F085C  41 80 FF 98 */	blt .L_803F38B4
/* 803F3920 003F0860  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 803F3924 003F0864  3C 00 43 30 */	lis r0, 0x4330
/* 803F3928 003F0868  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F392C 003F086C  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F3930 003F0870  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3934 003F0874  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3938 003F0878  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 803F393C 003F087C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 803F3940 003F0880  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 803F3944 003F0884  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3948 003F0888  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F394C 003F088C  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F3950 003F0890  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F3954 003F0894  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F3958 003F0898  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F395C 003F089C  4C 41 13 82 */	cror 2, 1, 2
/* 803F3960 003F08A0  40 82 00 0C */	bne .L_803F396C
/* 803F3964 003F08A4  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3968 003F08A8  D0 1F 00 70 */	stfs f0, 0x70(r31)
.L_803F396C:
/* 803F396C 003F08AC  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 803F3970 003F08B0  3C 00 43 30 */	lis r0, 0x4330
/* 803F3974 003F08B4  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F3978 003F08B8  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F397C 003F08BC  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3980 003F08C0  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3984 003F08C4  D0 1F 00 74 */	stfs f0, 0x74(r31)
/* 803F3988 003F08C8  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 803F398C 003F08CC  C0 5F 00 74 */	lfs f2, 0x74(r31)
/* 803F3990 003F08D0  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3994 003F08D4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F3998 003F08D8  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F399C 003F08DC  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F39A0 003F08E0  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F39A4 003F08E4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F39A8 003F08E8  4C 41 13 82 */	cror 2, 1, 2
/* 803F39AC 003F08EC  40 82 00 0C */	bne .L_803F39B8
/* 803F39B0 003F08F0  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F39B4 003F08F4  D0 1F 00 74 */	stfs f0, 0x74(r31)
.L_803F39B8:
/* 803F39B8 003F08F8  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 803F39BC 003F08FC  3C 00 43 30 */	lis r0, 0x4330
/* 803F39C0 003F0900  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F39C4 003F0904  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F39C8 003F0908  EC 01 00 2A */	fadds f0, f1, f0
/* 803F39CC 003F090C  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F39D0 003F0910  D0 1F 00 78 */	stfs f0, 0x78(r31)
/* 803F39D4 003F0914  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 803F39D8 003F0918  C0 5F 00 78 */	lfs f2, 0x78(r31)
/* 803F39DC 003F091C  A8 03 00 06 */	lha r0, 6(r3)
/* 803F39E0 003F0920  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F39E4 003F0924  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F39E8 003F0928  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F39EC 003F092C  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F39F0 003F0930  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F39F4 003F0934  4C 41 13 82 */	cror 2, 1, 2
/* 803F39F8 003F0938  40 82 00 0C */	bne .L_803F3A04
/* 803F39FC 003F093C  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3A00 003F0940  D0 1F 00 78 */	stfs f0, 0x78(r31)
.L_803F3A04:
/* 803F3A04 003F0944  C0 3F 00 7C */	lfs f1, 0x7c(r31)
/* 803F3A08 003F0948  3C 00 43 30 */	lis r0, 0x4330
/* 803F3A0C 003F094C  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F3A10 003F0950  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F3A14 003F0954  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3A18 003F0958  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3A1C 003F095C  D0 1F 00 7C */	stfs f0, 0x7c(r31)
/* 803F3A20 003F0960  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 803F3A24 003F0964  C0 5F 00 7C */	lfs f2, 0x7c(r31)
/* 803F3A28 003F0968  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3A2C 003F096C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F3A30 003F0970  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F3A34 003F0974  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F3A38 003F0978  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F3A3C 003F097C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F3A40 003F0980  4C 41 13 82 */	cror 2, 1, 2
/* 803F3A44 003F0984  40 82 00 0C */	bne .L_803F3A50
/* 803F3A48 003F0988  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3A4C 003F098C  D0 1F 00 7C */	stfs f0, 0x7c(r31)
.L_803F3A50:
/* 803F3A50 003F0990  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 803F3A54 003F0994  3C 00 43 30 */	lis r0, 0x4330
/* 803F3A58 003F0998  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F3A5C 003F099C  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F3A60 003F09A0  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3A64 003F09A4  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3A68 003F09A8  D0 1F 00 80 */	stfs f0, 0x80(r31)
/* 803F3A6C 003F09AC  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 803F3A70 003F09B0  C0 5F 00 80 */	lfs f2, 0x80(r31)
/* 803F3A74 003F09B4  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3A78 003F09B8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F3A7C 003F09BC  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F3A80 003F09C0  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F3A84 003F09C4  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F3A88 003F09C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F3A8C 003F09CC  4C 41 13 82 */	cror 2, 1, 2
/* 803F3A90 003F09D0  40 82 00 0C */	bne .L_803F3A9C
/* 803F3A94 003F09D4  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3A98 003F09D8  D0 1F 00 80 */	stfs f0, 0x80(r31)
.L_803F3A9C:
/* 803F3A9C 003F09DC  C0 3F 00 84 */	lfs f1, 0x84(r31)
/* 803F3AA0 003F09E0  3C 00 43 30 */	lis r0, 0x4330
/* 803F3AA4 003F09E4  C0 02 1B B4 */	lfs f0, lbl_8051FF14@sda21(r2)
/* 803F3AA8 003F09E8  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F3AAC 003F09EC  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3AB0 003F09F0  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3AB4 003F09F4  D0 1F 00 84 */	stfs f0, 0x84(r31)
/* 803F3AB8 003F09F8  80 7F 00 58 */	lwz r3, 0x58(r31)
/* 803F3ABC 003F09FC  C0 5F 00 84 */	lfs f2, 0x84(r31)
/* 803F3AC0 003F0A00  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3AC4 003F0A04  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F3AC8 003F0A08  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F3ACC 003F0A0C  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F3AD0 003F0A10  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F3AD4 003F0A14  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F3AD8 003F0A18  4C 41 13 82 */	cror 2, 1, 2
/* 803F3ADC 003F0A1C  40 82 00 0C */	bne .L_803F3AE8
/* 803F3AE0 003F0A20  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3AE4 003F0A24  D0 1F 00 84 */	stfs f0, 0x84(r31)
.L_803F3AE8:
/* 803F3AE8 003F0A28  C0 3F 00 88 */	lfs f1, 0x88(r31)
/* 803F3AEC 003F0A2C  3C 00 43 30 */	lis r0, 0x4330
/* 803F3AF0 003F0A30  C0 02 1B B4 */	lfs f0, lbl_8051FF14@sda21(r2)
/* 803F3AF4 003F0A34  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F3AF8 003F0A38  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3AFC 003F0A3C  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3B00 003F0A40  D0 1F 00 88 */	stfs f0, 0x88(r31)
/* 803F3B04 003F0A44  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 803F3B08 003F0A48  C0 5F 00 88 */	lfs f2, 0x88(r31)
/* 803F3B0C 003F0A4C  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3B10 003F0A50  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F3B14 003F0A54  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F3B18 003F0A58  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F3B1C 003F0A5C  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F3B20 003F0A60  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F3B24 003F0A64  4C 41 13 82 */	cror 2, 1, 2
/* 803F3B28 003F0A68  40 82 00 0C */	bne .L_803F3B34
/* 803F3B2C 003F0A6C  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3B30 003F0A70  D0 1F 00 88 */	stfs f0, 0x88(r31)
.L_803F3B34:
/* 803F3B34 003F0A74  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 803F3B38 003F0A78  3C 00 43 30 */	lis r0, 0x4330
/* 803F3B3C 003F0A7C  C0 02 1B B4 */	lfs f0, lbl_8051FF14@sda21(r2)
/* 803F3B40 003F0A80  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F3B44 003F0A84  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3B48 003F0A88  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3B4C 003F0A8C  D0 1F 00 8C */	stfs f0, 0x8c(r31)
/* 803F3B50 003F0A90  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 803F3B54 003F0A94  C0 5F 00 8C */	lfs f2, 0x8c(r31)
/* 803F3B58 003F0A98  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3B5C 003F0A9C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F3B60 003F0AA0  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F3B64 003F0AA4  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F3B68 003F0AA8  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F3B6C 003F0AAC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F3B70 003F0AB0  4C 41 13 82 */	cror 2, 1, 2
/* 803F3B74 003F0AB4  40 82 00 0C */	bne .L_803F3B80
/* 803F3B78 003F0AB8  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3B7C 003F0ABC  D0 1F 00 8C */	stfs f0, 0x8c(r31)
.L_803F3B80:
/* 803F3B80 003F0AC0  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 803F3B84 003F0AC4  3C 00 43 30 */	lis r0, 0x4330
/* 803F3B88 003F0AC8  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F3B8C 003F0ACC  90 01 01 20 */	stw r0, 0x120(r1)
/* 803F3B90 003F0AD0  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3B94 003F0AD4  C8 22 1B E0 */	lfd f1, lbl_8051FF40@sda21(r2)
/* 803F3B98 003F0AD8  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 803F3B9C 003F0ADC  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 803F3BA0 003F0AE0  C0 5F 00 6C */	lfs f2, 0x6c(r31)
/* 803F3BA4 003F0AE4  A8 03 00 06 */	lha r0, 6(r3)
/* 803F3BA8 003F0AE8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F3BAC 003F0AEC  90 01 01 24 */	stw r0, 0x124(r1)
/* 803F3BB0 003F0AF0  C8 01 01 20 */	lfd f0, 0x120(r1)
/* 803F3BB4 003F0AF4  EC 00 08 28 */	fsubs f0, f0, f1
/* 803F3BB8 003F0AF8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F3BBC 003F0AFC  4C 41 13 82 */	cror 2, 1, 2
/* 803F3BC0 003F0B00  40 82 00 0C */	bne .L_803F3BCC
/* 803F3BC4 003F0B04  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F3BC8 003F0B08  D0 1F 00 6C */	stfs f0, 0x6c(r31)
.L_803F3BCC:
/* 803F3BCC 003F0B0C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3BD0 003F0B10  3C A0 68 74 */	lis r5, 0x68743031@ha
/* 803F3BD4 003F0B14  3C 80 00 6C */	lis r4, 0x006C6967@ha
/* 803F3BD8 003F0B18  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3BDC 003F0B1C  38 C5 30 31 */	addi r6, r5, 0x68743031@l
/* 803F3BE0 003F0B20  38 A4 69 67 */	addi r5, r4, 0x006C6967@l
/* 803F3BE4 003F0B24  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3BE8 003F0B28  7D 89 03 A6 */	mtctr r12
/* 803F3BEC 003F0B2C  4E 80 04 21 */	bctrl 
/* 803F3BF0 003F0B30  48 01 7E 09 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F3BF4 003F0B34  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3BF8 003F0B38  3C A0 68 74 */	lis r5, 0x68743031@ha
/* 803F3BFC 003F0B3C  3C 80 00 6C */	lis r4, 0x006C6967@ha
/* 803F3C00 003F0B40  FF C0 08 90 */	fmr f30, f1
/* 803F3C04 003F0B44  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3C08 003F0B48  38 C5 30 31 */	addi r6, r5, 0x68743031@l
/* 803F3C0C 003F0B4C  38 A4 69 67 */	addi r5, r4, 0x006C6967@l
/* 803F3C10 003F0B50  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3C14 003F0B54  7D 89 03 A6 */	mtctr r12
/* 803F3C18 003F0B58  4E 80 04 21 */	bctrl 
/* 803F3C1C 003F0B5C  48 01 7C F1 */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F3C20 003F0B60  D0 3F 00 E0 */	stfs f1, 0xe0(r31)
/* 803F3C24 003F0B64  3C 60 73 74 */	lis r3, 0x73746172@ha
/* 803F3C28 003F0B68  38 C3 61 72 */	addi r6, r3, 0x73746172@l
/* 803F3C2C 003F0B6C  38 A0 00 00 */	li r5, 0
/* 803F3C30 003F0B70  D3 DF 00 E4 */	stfs f30, 0xe4(r31)
/* 803F3C34 003F0B74  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3C38 003F0B78  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3C3C 003F0B7C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3C40 003F0B80  7D 89 03 A6 */	mtctr r12
/* 803F3C44 003F0B84  4E 80 04 21 */	bctrl 
/* 803F3C48 003F0B88  48 01 7D B1 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F3C4C 003F0B8C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3C50 003F0B90  3C 80 73 74 */	lis r4, 0x73746172@ha
/* 803F3C54 003F0B94  FF C0 08 90 */	fmr f30, f1
/* 803F3C58 003F0B98  38 C4 61 72 */	addi r6, r4, 0x73746172@l
/* 803F3C5C 003F0B9C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3C60 003F0BA0  38 A0 00 00 */	li r5, 0
/* 803F3C64 003F0BA4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3C68 003F0BA8  7D 89 03 A6 */	mtctr r12
/* 803F3C6C 003F0BAC  4E 80 04 21 */	bctrl 
/* 803F3C70 003F0BB0  48 01 7C 9D */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F3C74 003F0BB4  D0 3F 00 E8 */	stfs f1, 0xe8(r31)
/* 803F3C78 003F0BB8  38 01 01 00 */	addi r0, r1, 0x100
/* 803F3C7C 003F0BBC  D3 DF 00 EC */	stfs f30, 0xec(r31)
/* 803F3C80 003F0BC0  C8 FE 03 70 */	lfd f7, 0x370(r30)
/* 803F3C84 003F0BC4  C8 DE 03 78 */	lfd f6, 0x378(r30)
/* 803F3C88 003F0BC8  C8 BE 03 80 */	lfd f5, 0x380(r30)
/* 803F3C8C 003F0BCC  C8 9E 03 88 */	lfd f4, 0x388(r30)
/* 803F3C90 003F0BD0  C8 7E 03 90 */	lfd f3, 0x390(r30)
/* 803F3C94 003F0BD4  C8 5E 03 98 */	lfd f2, 0x398(r30)
/* 803F3C98 003F0BD8  C8 3E 03 A0 */	lfd f1, 0x3a0(r30)
/* 803F3C9C 003F0BDC  C8 1E 03 A8 */	lfd f0, 0x3a8(r30)
/* 803F3CA0 003F0BE0  D8 E1 01 00 */	stfd f7, 0x100(r1)
/* 803F3CA4 003F0BE4  D8 C1 01 08 */	stfd f6, 0x108(r1)
/* 803F3CA8 003F0BE8  D8 A1 01 10 */	stfd f5, 0x110(r1)
/* 803F3CAC 003F0BEC  D8 81 01 18 */	stfd f4, 0x118(r1)
/* 803F3CB0 003F0BF0  D8 61 00 E0 */	stfd f3, 0xe0(r1)
/* 803F3CB4 003F0BF4  D8 41 00 E8 */	stfd f2, 0xe8(r1)
/* 803F3CB8 003F0BF8  D8 21 00 F0 */	stfd f1, 0xf0(r1)
/* 803F3CBC 003F0BFC  D8 01 00 F8 */	stfd f0, 0xf8(r1)
/* 803F3CC0 003F0C00  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3CC4 003F0C04  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F3CC8 003F0C08  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3CCC 003F0C0C  54 84 18 38 */	slwi r4, r4, 3
/* 803F3CD0 003F0C10  7C C0 22 14 */	add r6, r0, r4
/* 803F3CD4 003F0C14  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3CD8 003F0C18  80 A6 00 00 */	lwz r5, 0(r6)
/* 803F3CDC 003F0C1C  80 C6 00 04 */	lwz r6, 4(r6)
/* 803F3CE0 003F0C20  7D 89 03 A6 */	mtctr r12
/* 803F3CE4 003F0C24  4E 80 04 21 */	bctrl 
/* 803F3CE8 003F0C28  7C 65 1B 78 */	mr r5, r3
/* 803F3CEC 003F0C2C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3CF0 003F0C30  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F3CF4 003F0C34  38 01 00 E0 */	addi r0, r1, 0xe0
/* 803F3CF8 003F0C38  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3CFC 003F0C3C  7C BD 2B 78 */	mr r29, r5
/* 803F3D00 003F0C40  54 84 18 38 */	slwi r4, r4, 3
/* 803F3D04 003F0C44  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3D08 003F0C48  7C C0 22 14 */	add r6, r0, r4
/* 803F3D0C 003F0C4C  80 A6 00 00 */	lwz r5, 0(r6)
/* 803F3D10 003F0C50  80 C6 00 04 */	lwz r6, 4(r6)
/* 803F3D14 003F0C54  7D 89 03 A6 */	mtctr r12
/* 803F3D18 003F0C58  4E 80 04 21 */	bctrl 
/* 803F3D1C 003F0C5C  7C 60 1B 78 */	mr r0, r3
/* 803F3D20 003F0C60  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F3D24 003F0C64  3C A0 43 4B */	lis r5, 0x434B4554@ha
/* 803F3D28 003F0C68  3C 80 00 4E */	lis r4, 0x004E524F@ha
/* 803F3D2C 003F0C6C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3D30 003F0C70  7C 1C 03 78 */	mr r28, r0
/* 803F3D34 003F0C74  38 C5 45 54 */	addi r6, r5, 0x434B4554@l
/* 803F3D38 003F0C78  38 A4 52 4F */	addi r5, r4, 0x004E524F@l
/* 803F3D3C 003F0C7C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3D40 003F0C80  7D 89 03 A6 */	mtctr r12
/* 803F3D44 003F0C84  4E 80 04 21 */	bctrl 
/* 803F3D48 003F0C88  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F3D4C 003F0C8C  7C 7B 1B 78 */	mr r27, r3
/* 803F3D50 003F0C90  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 803F3D54 003F0C94  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803F3D58 003F0C98  D0 1F 00 A8 */	stfs f0, 0xa8(r31)
/* 803F3D5C 003F0C9C  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 803F3D60 003F0CA0  28 00 00 0E */	cmplwi r0, 0xe
/* 803F3D64 003F0CA4  41 81 13 FC */	bgt .L_803F5160
/* 803F3D68 003F0CA8  3C 80 80 4F */	lis r4, lbl_804EA3A0@ha
/* 803F3D6C 003F0CAC  54 00 10 3A */	slwi r0, r0, 2
/* 803F3D70 003F0CB0  38 84 A3 A0 */	addi r4, r4, lbl_804EA3A0@l
/* 803F3D74 003F0CB4  7C 04 00 2E */	lwzx r0, r4, r0
/* 803F3D78 003F0CB8  7C 09 03 A6 */	mtctr r0
/* 803F3D7C 003F0CBC  4E 80 04 20 */	bctr 
.L_803F3D80:
/* 803F3D80 003F0CC0  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 803F3D84 003F0CC4  C0 02 1B B8 */	lfs f0, lbl_8051FF18@sda21(r2)
/* 803F3D88 003F0CC8  EC 01 00 2A */	fadds f0, f1, f0
/* 803F3D8C 003F0CCC  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 803F3D90 003F0CD0  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 803F3D94 003F0CD4  C0 1F 00 90 */	lfs f0, 0x90(r31)
/* 803F3D98 003F0CD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F3D9C 003F0CDC  4C 41 13 82 */	cror 2, 1, 2
/* 803F3DA0 003F0CE0  40 82 02 CC */	bne .L_803F406C
/* 803F3DA4 003F0CE4  7F E3 FB 78 */	mr r3, r31
/* 803F3DA8 003F0CE8  48 00 29 95 */	bl newMapOpen__Q32kh6Screen8WorldMapFv
/* 803F3DAC 003F0CEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F3DB0 003F0CF0  40 82 02 BC */	bne .L_803F406C
/* 803F3DB4 003F0CF4  3B 60 00 01 */	li r27, 1
.L_803F3DB8:
/* 803F3DB8 003F0CF8  38 1B 00 04 */	addi r0, r27, 4
/* 803F3DBC 003F0CFC  38 60 00 01 */	li r3, 1
/* 803F3DC0 003F0D00  88 9F 01 82 */	lbz r4, 0x182(r31)
/* 803F3DC4 003F0D04  7C 60 00 30 */	slw r0, r3, r0
/* 803F3DC8 003F0D08  7C 80 00 39 */	and. r0, r4, r0
/* 803F3DCC 003F0D0C  41 82 02 2C */	beq .L_803F3FF8
/* 803F3DD0 003F0D10  3C 80 69 6E */	lis r4, 0x696E7430@ha
/* 803F3DD4 003F0D14  3C 60 00 4E */	lis r3, 0x004E706F@ha
/* 803F3DD8 003F0D18  7F 65 DB 78 */	mr r5, r27
/* 803F3DDC 003F0D1C  38 84 74 30 */	addi r4, r4, 0x696E7430@l
/* 803F3DE0 003F0D20  38 63 70 6F */	addi r3, r3, 0x004E706F@l
/* 803F3DE4 003F0D24  48 01 76 11 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F3DE8 003F0D28  7C 65 1B 78 */	mr r5, r3
/* 803F3DEC 003F0D2C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3DF0 003F0D30  7C 86 23 78 */	mr r6, r4
/* 803F3DF4 003F0D34  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3DF8 003F0D38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3DFC 003F0D3C  7D 89 03 A6 */	mtctr r12
/* 803F3E00 003F0D40  4E 80 04 21 */	bctrl 
/* 803F3E04 003F0D44  48 01 7B F5 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F3E08 003F0D48  FF C0 08 90 */	fmr f30, f1
/* 803F3E0C 003F0D4C  3C 80 69 6E */	lis r4, 0x696E7430@ha
/* 803F3E10 003F0D50  3C 60 00 4E */	lis r3, 0x004E706F@ha
/* 803F3E14 003F0D54  7F 65 DB 78 */	mr r5, r27
/* 803F3E18 003F0D58  38 84 74 30 */	addi r4, r4, 0x696E7430@l
/* 803F3E1C 003F0D5C  38 63 70 6F */	addi r3, r3, 0x004E706F@l
/* 803F3E20 003F0D60  48 01 75 D5 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F3E24 003F0D64  7C 65 1B 78 */	mr r5, r3
/* 803F3E28 003F0D68  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3E2C 003F0D6C  7C 86 23 78 */	mr r6, r4
/* 803F3E30 003F0D70  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3E34 003F0D74  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3E38 003F0D78  7D 89 03 A6 */	mtctr r12
/* 803F3E3C 003F0D7C  4E 80 04 21 */	bctrl 
/* 803F3E40 003F0D80  48 01 7A CD */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F3E44 003F0D84  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 803F3E48 003F0D88  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803F3E4C 003F0D8C  89 7F 01 81 */	lbz r11, 0x181(r31)
/* 803F3E50 003F0D90  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 803F3E54 003F0D94  D3 C1 00 4C */	stfs f30, 0x4c(r1)
/* 803F3E58 003F0D98  3C A0 80 4C */	lis r5, __vt__Q25efx2d5TBase@ha
/* 803F3E5C 003F0D9C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 803F3E60 003F0DA0  3D 20 80 51 */	lis r9, msVal__Q32kh6Screen8WorldMap@ha
/* 803F3E64 003F0DA4  80 C1 00 4C */	lwz r6, 0x4c(r1)
/* 803F3E68 003F0DA8  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803F3E6C 003F0DAC  39 40 00 00 */	li r10, 0
/* 803F3E70 003F0DB0  90 81 00 18 */	stw r4, 0x18(r1)
/* 803F3E74 003F0DB4  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple2@ha
/* 803F3E78 003F0DB8  39 83 15 14 */	addi r12, r3, __vt__Q25efx2d3Arg@l
/* 803F3E7C 003F0DBC  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 803F3E80 003F0DC0  3C C0 80 4E */	lis r6, __vt__Q25efx2d8ArgScale@ha
/* 803F3E84 003F0DC4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803F3E88 003F0DC8  3C 60 80 4E */	lis r3, __vt__Q35efx2d8WorldMap9T2DNewmap@ha
/* 803F3E8C 003F0DCC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803F3E90 003F0DD0  39 00 00 05 */	li r8, 5
/* 803F3E94 003F0DD4  38 E0 00 06 */	li r7, 6
/* 803F3E98 003F0DD8  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 803F3E9C 003F0DDC  38 05 14 D8 */	addi r0, r5, __vt__Q25efx2d5TBase@l
/* 803F3EA0 003F0DE0  55 6B 10 3A */	slwi r11, r11, 2
/* 803F3EA4 003F0DE4  38 A9 40 58 */	addi r5, r9, msVal__Q32kh6Screen8WorldMap@l
/* 803F3EA8 003F0DE8  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 803F3EAC 003F0DEC  7C A5 5A 14 */	add r5, r5, r11
/* 803F3EB0 003F0DF0  39 24 74 70 */	addi r9, r4, __vt__Q25efx2d8TSimple2@l
/* 803F3EB4 003F0DF4  C0 45 00 28 */	lfs f2, 0x28(r5)
/* 803F3EB8 003F0DF8  39 66 9A 30 */	addi r11, r6, __vt__Q25efx2d8ArgScale@l
/* 803F3EBC 003F0DFC  91 81 00 C0 */	stw r12, 0xc0(r1)
/* 803F3EC0 003F0E00  38 C3 75 30 */	addi r6, r3, __vt__Q35efx2d8WorldMap9T2DNewmap@l
/* 803F3EC4 003F0E04  38 A0 00 01 */	li r5, 1
/* 803F3EC8 003F0E08  38 00 00 02 */	li r0, 2
/* 803F3ECC 003F0E0C  99 41 00 CC */	stb r10, 0xcc(r1)
/* 803F3ED0 003F0E10  38 61 00 C8 */	addi r3, r1, 0xc8
/* 803F3ED4 003F0E14  38 81 00 B8 */	addi r4, r1, 0xb8
/* 803F3ED8 003F0E18  99 41 00 CD */	stb r10, 0xcd(r1)
/* 803F3EDC 003F0E1C  91 21 00 C8 */	stw r9, 0xc8(r1)
/* 803F3EE0 003F0E20  D0 21 00 B8 */	stfs f1, 0xb8(r1)
/* 803F3EE4 003F0E24  D0 01 00 BC */	stfs f0, 0xbc(r1)
/* 803F3EE8 003F0E28  91 61 00 C0 */	stw r11, 0xc0(r1)
/* 803F3EEC 003F0E2C  D0 41 00 C4 */	stfs f2, 0xc4(r1)
/* 803F3EF0 003F0E30  B1 01 00 D0 */	sth r8, 0xd0(r1)
/* 803F3EF4 003F0E34  B0 E1 00 D2 */	sth r7, 0xd2(r1)
/* 803F3EF8 003F0E38  91 41 00 D4 */	stw r10, 0xd4(r1)
/* 803F3EFC 003F0E3C  91 41 00 D8 */	stw r10, 0xd8(r1)
/* 803F3F00 003F0E40  90 C1 00 C8 */	stw r6, 0xc8(r1)
/* 803F3F04 003F0E44  98 A1 00 CC */	stb r5, 0xcc(r1)
/* 803F3F08 003F0E48  98 01 00 CD */	stb r0, 0xcd(r1)
/* 803F3F0C 003F0E4C  4B FC 6A 71 */	bl create__Q35efx2d8WorldMap9T2DNewmapFPQ25efx2d3Arg
/* 803F3F10 003F0E50  2C 1B 00 03 */	cmpwi r27, 3
/* 803F3F14 003F0E54  40 82 00 A8 */	bne .L_803F3FBC
/* 803F3F18 003F0E58  80 BF 00 E8 */	lwz r5, 0xe8(r31)
/* 803F3F1C 003F0E5C  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803F3F20 003F0E60  80 DF 00 EC */	lwz r6, 0xec(r31)
/* 803F3F24 003F0E64  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 803F3F28 003F0E68  3C 60 80 4C */	lis r3, __vt__Q25efx2d5TBase@ha
/* 803F3F2C 003F0E6C  39 20 00 00 */	li r9, 0
/* 803F3F30 003F0E70  90 01 00 98 */	stw r0, 0x98(r1)
/* 803F3F34 003F0E74  38 03 14 D8 */	addi r0, r3, __vt__Q25efx2d5TBase@l
/* 803F3F38 003F0E78  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803F3F3C 003F0E7C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 803F3F40 003F0E80  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803F3F44 003F0E84  39 63 15 14 */	addi r11, r3, __vt__Q25efx2d3Arg@l
/* 803F3F48 003F0E88  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F3F4C 003F0E8C  3C A0 80 4E */	lis r5, __vt__Q25efx2d8ArgScale@ha
/* 803F3F50 003F0E90  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803F3F54 003F0E94  3C 60 80 4E */	lis r3, __vt__Q35efx2d8WorldMap10T2DShstar2@ha
/* 803F3F58 003F0E98  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 803F3F5C 003F0E9C  38 E0 00 08 */	li r7, 8
/* 803F3F60 003F0EA0  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 803F3F64 003F0EA4  39 04 74 88 */	addi r8, r4, __vt__Q25efx2d8TSimple1@l
/* 803F3F68 003F0EA8  90 01 00 98 */	stw r0, 0x98(r1)
/* 803F3F6C 003F0EAC  39 45 9A 30 */	addi r10, r5, __vt__Q25efx2d8ArgScale@l
/* 803F3F70 003F0EB0  38 C3 75 48 */	addi r6, r3, __vt__Q35efx2d8WorldMap10T2DShstar2@l
/* 803F3F74 003F0EB4  38 A0 00 01 */	li r5, 1
/* 803F3F78 003F0EB8  91 61 00 B0 */	stw r11, 0xb0(r1)
/* 803F3F7C 003F0EBC  38 00 00 02 */	li r0, 2
/* 803F3F80 003F0EC0  38 61 00 98 */	addi r3, r1, 0x98
/* 803F3F84 003F0EC4  38 81 00 A8 */	addi r4, r1, 0xa8
/* 803F3F88 003F0EC8  99 21 00 9C */	stb r9, 0x9c(r1)
/* 803F3F8C 003F0ECC  99 21 00 9D */	stb r9, 0x9d(r1)
/* 803F3F90 003F0ED0  91 01 00 98 */	stw r8, 0x98(r1)
/* 803F3F94 003F0ED4  D0 41 00 A8 */	stfs f2, 0xa8(r1)
/* 803F3F98 003F0ED8  D0 21 00 AC */	stfs f1, 0xac(r1)
/* 803F3F9C 003F0EDC  91 41 00 B0 */	stw r10, 0xb0(r1)
/* 803F3FA0 003F0EE0  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 803F3FA4 003F0EE4  B0 E1 00 A0 */	sth r7, 0xa0(r1)
/* 803F3FA8 003F0EE8  91 21 00 A4 */	stw r9, 0xa4(r1)
/* 803F3FAC 003F0EEC  90 C1 00 98 */	stw r6, 0x98(r1)
/* 803F3FB0 003F0EF0  98 A1 00 9C */	stb r5, 0x9c(r1)
/* 803F3FB4 003F0EF4  98 01 00 9D */	stb r0, 0x9d(r1)
/* 803F3FB8 003F0EF8  4B FC 68 E9 */	bl create__Q35efx2d8WorldMap10T2DShstar2FPQ25efx2d3Arg
.L_803F3FBC:
/* 803F3FBC 003F0EFC  3C 80 69 6E */	lis r4, 0x696E7430@ha
/* 803F3FC0 003F0F00  3C 60 00 4E */	lis r3, 0x004E706F@ha
/* 803F3FC4 003F0F04  7F 65 DB 78 */	mr r5, r27
/* 803F3FC8 003F0F08  38 84 74 30 */	addi r4, r4, 0x696E7430@l
/* 803F3FCC 003F0F0C  38 63 70 6F */	addi r3, r3, 0x004E706F@l
/* 803F3FD0 003F0F10  48 01 74 25 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F3FD4 003F0F14  7C 65 1B 78 */	mr r5, r3
/* 803F3FD8 003F0F18  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F3FDC 003F0F1C  7C 86 23 78 */	mr r6, r4
/* 803F3FE0 003F0F20  81 83 00 00 */	lwz r12, 0(r3)
/* 803F3FE4 003F0F24  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F3FE8 003F0F28  7D 89 03 A6 */	mtctr r12
/* 803F3FEC 003F0F2C  4E 80 04 21 */	bctrl 
/* 803F3FF0 003F0F30  38 00 00 01 */	li r0, 1
/* 803F3FF4 003F0F34  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F3FF8:
/* 803F3FF8 003F0F38  3B 7B 00 01 */	addi r27, r27, 1
/* 803F3FFC 003F0F3C  2C 1B 00 04 */	cmpwi r27, 4
/* 803F4000 003F0F40  41 80 FD B8 */	blt .L_803F3DB8
/* 803F4004 003F0F44  38 60 00 0C */	li r3, 0xc
/* 803F4008 003F0F48  38 01 01 00 */	addi r0, r1, 0x100
/* 803F400C 003F0F4C  90 7F 01 74 */	stw r3, 0x174(r31)
/* 803F4010 003F0F50  88 7F 01 81 */	lbz r3, 0x181(r31)
/* 803F4014 003F0F54  38 63 FF FF */	addi r3, r3, -1
/* 803F4018 003F0F58  90 7F 00 F8 */	stw r3, 0xf8(r31)
/* 803F401C 003F0F5C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F4020 003F0F60  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F4024 003F0F64  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4028 003F0F68  54 84 18 38 */	slwi r4, r4, 3
/* 803F402C 003F0F6C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F4030 003F0F70  7C C0 22 14 */	add r6, r0, r4
/* 803F4034 003F0F74  80 A6 00 00 */	lwz r5, 0(r6)
/* 803F4038 003F0F78  80 C6 00 04 */	lwz r6, 4(r6)
/* 803F403C 003F0F7C  7D 89 03 A6 */	mtctr r12
/* 803F4040 003F0F80  4E 80 04 21 */	bctrl 
/* 803F4044 003F0F84  7C 7D 1B 78 */	mr r29, r3
/* 803F4048 003F0F88  48 07 B0 A9 */	bl PSMGetWorldMapRocket__Fv
/* 803F404C 003F0F8C  38 80 00 02 */	li r4, 2
/* 803F4050 003F0F90  48 07 98 75 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F4054 003F0F94  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803F4058 003F0F98  38 80 18 12 */	li r4, 0x1812
/* 803F405C 003F0F9C  38 A0 00 00 */	li r5, 0
/* 803F4060 003F0FA0  4B F4 45 D1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803F4064 003F0FA4  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F4068 003F0FA8  48 01 7D 89 */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
.L_803F406C:
/* 803F406C 003F0FAC  7F E3 FB 78 */	mr r3, r31
/* 803F4070 003F0FB0  7F A4 EB 78 */	mr r4, r29
/* 803F4074 003F0FB4  48 00 21 59 */	bl postureControl__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F4078 003F0FB8  7F E3 FB 78 */	mr r3, r31
/* 803F407C 003F0FBC  48 00 20 59 */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F4080 003F0FC0  48 00 10 E0 */	b .L_803F5160
.L_803F4084:
/* 803F4084 003F0FC4  7F E3 FB 78 */	mr r3, r31
/* 803F4088 003F0FC8  7F A4 EB 78 */	mr r4, r29
/* 803F408C 003F0FCC  38 A0 00 01 */	li r5, 1
/* 803F4090 003F0FD0  48 00 19 11 */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F4094 003F0FD4  FF C0 08 90 */	fmr f30, f1
/* 803F4098 003F0FD8  7F E3 FB 78 */	mr r3, r31
/* 803F409C 003F0FDC  7F A4 EB 78 */	mr r4, r29
/* 803F40A0 003F0FE0  48 00 1C 31 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F40A4 003F0FE4  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F40A8 003F0FE8  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F40AC 003F0FEC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803F40B0 003F0FF0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F40B4 003F0FF4  40 80 00 20 */	bge .L_803F40D4
/* 803F40B8 003F0FF8  38 60 00 00 */	li r3, 0
/* 803F40BC 003F0FFC  38 00 00 02 */	li r0, 2
/* 803F40C0 003F1000  90 7F 00 FC */	stw r3, 0xfc(r31)
/* 803F40C4 003F1004  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F40C8 003F1008  48 07 B0 29 */	bl PSMGetWorldMapRocket__Fv
/* 803F40CC 003F100C  38 80 00 05 */	li r4, 5
/* 803F40D0 003F1010  48 07 97 F5 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
.L_803F40D4:
/* 803F40D4 003F1014  7F E3 FB 78 */	mr r3, r31
/* 803F40D8 003F1018  48 00 1F FD */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F40DC 003F101C  7F E3 FB 78 */	mr r3, r31
/* 803F40E0 003F1020  48 00 22 E1 */	bl changeState__Q32kh6Screen8WorldMapFv
/* 803F40E4 003F1024  48 00 10 7C */	b .L_803F5160
.L_803F40E8:
/* 803F40E8 003F1028  7F E3 FB 78 */	mr r3, r31
/* 803F40EC 003F102C  7F A4 EB 78 */	mr r4, r29
/* 803F40F0 003F1030  48 00 20 DD */	bl postureControl__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F40F4 003F1034  7F E3 FB 78 */	mr r3, r31
/* 803F40F8 003F1038  48 00 1F DD */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F40FC 003F103C  7F E3 FB 78 */	mr r3, r31
/* 803F4100 003F1040  48 00 22 C1 */	bl changeState__Q32kh6Screen8WorldMapFv
/* 803F4104 003F1044  48 00 10 5C */	b .L_803F5160
.L_803F4108:
/* 803F4108 003F1048  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 803F410C 003F104C  38 03 00 01 */	addi r0, r3, 1
/* 803F4110 003F1050  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 803F4114 003F1054  80 1F 01 78 */	lwz r0, 0x178(r31)
/* 803F4118 003F1058  2C 00 00 01 */	cmpwi r0, 1
/* 803F411C 003F105C  40 82 00 14 */	bne .L_803F4130
/* 803F4120 003F1060  C0 22 1B A4 */	lfs f1, lbl_8051FF04@sda21(r2)
/* 803F4124 003F1064  48 01 D6 75 */	bl pikmin2_cosf__Ff
/* 803F4128 003F1068  FF C0 08 90 */	fmr f30, f1
/* 803F412C 003F106C  48 00 00 10 */	b .L_803F413C
.L_803F4130:
/* 803F4130 003F1070  C0 22 1B BC */	lfs f1, lbl_8051FF1C@sda21(r2)
/* 803F4134 003F1074  48 01 D6 65 */	bl pikmin2_cosf__Ff
/* 803F4138 003F1078  FF C0 08 90 */	fmr f30, f1
.L_803F413C:
/* 803F413C 003F107C  80 1F 01 78 */	lwz r0, 0x178(r31)
/* 803F4140 003F1080  2C 00 00 01 */	cmpwi r0, 1
/* 803F4144 003F1084  40 82 00 10 */	bne .L_803F4154
/* 803F4148 003F1088  C0 22 1B A4 */	lfs f1, lbl_8051FF04@sda21(r2)
/* 803F414C 003F108C  48 01 D5 E5 */	bl pikmin2_sinf__Ff
/* 803F4150 003F1090  48 00 00 0C */	b .L_803F415C
.L_803F4154:
/* 803F4154 003F1094  C0 22 1B BC */	lfs f1, lbl_8051FF1C@sda21(r2)
/* 803F4158 003F1098  48 01 D5 D9 */	bl pikmin2_sinf__Ff
.L_803F415C:
/* 803F415C 003F109C  C0 9F 00 AC */	lfs f4, 0xac(r31)
/* 803F4160 003F10A0  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 803F4164 003F10A4  C0 42 1B C0 */	lfs f2, lbl_8051FF20@sda21(r2)
/* 803F4168 003F10A8  D0 81 00 40 */	stfs f4, 0x40(r1)
/* 803F416C 003F10AC  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 803F4170 003F10B0  EC 03 00 72 */	fmuls f0, f3, f1
/* 803F4174 003F10B4  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 803F4178 003F10B8  EC 63 07 B2 */	fmuls f3, f3, f30
/* 803F417C 003F10BC  EC 04 07 B8 */	fmsubs f0, f4, f30, f0
/* 803F4180 003F10C0  EC 24 18 7A */	fmadds f1, f4, f1, f3
/* 803F4184 003F10C4  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 803F4188 003F10C8  D0 3F 00 B0 */	stfs f1, 0xb0(r31)
/* 803F418C 003F10CC  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F4190 003F10D0  C0 3F 00 B0 */	lfs f1, 0xb0(r31)
/* 803F4194 003F10D4  EC 60 00 32 */	fmuls f3, f0, f0
/* 803F4198 003F10D8  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 803F419C 003F10DC  EC 21 00 72 */	fmuls f1, f1, f1
/* 803F41A0 003F10E0  EC 02 00 32 */	fmuls f0, f2, f0
/* 803F41A4 003F10E4  EC 83 08 2A */	fadds f4, f3, f1
/* 803F41A8 003F10E8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803F41AC 003F10EC  4C 40 13 82 */	cror 2, 0, 2
/* 803F41B0 003F10F0  41 82 00 50 */	beq .L_803F4200
/* 803F41B4 003F10F4  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F41B8 003F10F8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803F41BC 003F10FC  4C 40 13 82 */	cror 2, 0, 2
/* 803F41C0 003F1100  40 82 00 08 */	bne .L_803F41C8
/* 803F41C4 003F1104  48 00 00 24 */	b .L_803F41E8
.L_803F41C8:
/* 803F41C8 003F1108  FC 60 20 34 */	frsqrte f3, f4
/* 803F41CC 003F110C  C0 42 1B B4 */	lfs f2, lbl_8051FF14@sda21(r2)
/* 803F41D0 003F1110  C0 02 1B C4 */	lfs f0, lbl_8051FF24@sda21(r2)
/* 803F41D4 003F1114  FC 60 18 18 */	frsp f3, f3
/* 803F41D8 003F1118  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803F41DC 003F111C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F41E0 003F1120  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 803F41E4 003F1124  EC 82 00 32 */	fmuls f4, f2, f0
.L_803F41E8:
/* 803F41E8 003F1128  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F41EC 003F112C  EC 00 01 32 */	fmuls f0, f0, f4
/* 803F41F0 003F1130  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 803F41F4 003F1134  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F41F8 003F1138  EC 00 01 32 */	fmuls f0, f0, f4
/* 803F41FC 003F113C  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
.L_803F4200:
/* 803F4200 003F1140  C0 22 1B 94 */	lfs f1, lbl_8051FEF4@sda21(r2)
/* 803F4204 003F1144  7F E3 FB 78 */	mr r3, r31
/* 803F4208 003F1148  38 81 00 40 */	addi r4, r1, 0x40
/* 803F420C 003F114C  48 00 26 E9 */	bl "getRotDir__Q32kh6Screen8WorldMapFRCQ29JGeometry8TVec2<f>f"
/* 803F4210 003F1150  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4214 003F1154  C0 5F 00 AC */	lfs f2, 0xac(r31)
/* 803F4218 003F1158  38 83 40 58 */	addi r4, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F421C 003F115C  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F4220 003F1160  C0 24 00 00 */	lfs f1, 0(r4)
/* 803F4224 003F1164  7F 83 E3 78 */	mr r3, r28
/* 803F4228 003F1168  C0 64 00 04 */	lfs f3, 4(r4)
/* 803F422C 003F116C  EC 22 00 72 */	fmuls f1, f2, f1
/* 803F4230 003F1170  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 803F4234 003F1174  D0 1F 00 9C */	stfs f0, 0x9c(r31)
/* 803F4238 003F1178  C0 3F 00 B0 */	lfs f1, 0xb0(r31)
/* 803F423C 003F117C  C0 04 00 00 */	lfs f0, 0(r4)
/* 803F4240 003F1180  C0 44 00 04 */	lfs f2, 4(r4)
/* 803F4244 003F1184  EC 21 00 32 */	fmuls f1, f1, f0
/* 803F4248 003F1188  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803F424C 003F118C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 803F4250 003F1190  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 803F4254 003F1194  48 01 77 A5 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F4258 003F1198  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803F425C 003F119C  7F 83 E3 78 */	mr r3, r28
/* 803F4260 003F11A0  EF E1 00 28 */	fsubs f31, f1, f0
/* 803F4264 003F11A4  48 01 76 A9 */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F4268 003F11A8  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F426C 003F11AC  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4270 003F11B0  EC 81 00 28 */	fsubs f4, f1, f0
/* 803F4274 003F11B4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 803F4278 003F11B8  EC 44 01 32 */	fmuls f2, f4, f4
/* 803F427C 003F11BC  EC 1F 10 2A */	fadds f0, f31, f2
/* 803F4280 003F11C0  EC DF 00 2A */	fadds f6, f31, f0
/* 803F4284 003F11C4  40 82 00 CC */	bne .L_803F4350
/* 803F4288 003F11C8  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 803F428C 003F11CC  C0 22 1B C0 */	lfs f1, lbl_8051FF20@sda21(r2)
/* 803F4290 003F11D0  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 803F4294 003F11D4  EC BF 17 FA */	fmadds f5, f31, f31, f2
/* 803F4298 003F11D8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803F429C 003F11DC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803F42A0 003F11E0  4C 40 13 82 */	cror 2, 0, 2
/* 803F42A4 003F11E4  41 82 00 40 */	beq .L_803F42E4
/* 803F42A8 003F11E8  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F42AC 003F11EC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803F42B0 003F11F0  4C 40 13 82 */	cror 2, 0, 2
/* 803F42B4 003F11F4  40 82 00 08 */	bne .L_803F42BC
/* 803F42B8 003F11F8  48 00 00 24 */	b .L_803F42DC
.L_803F42BC:
/* 803F42BC 003F11FC  FC 60 28 34 */	frsqrte f3, f5
/* 803F42C0 003F1200  C0 42 1B B4 */	lfs f2, lbl_8051FF14@sda21(r2)
/* 803F42C4 003F1204  C0 02 1B C4 */	lfs f0, lbl_8051FF24@sda21(r2)
/* 803F42C8 003F1208  FC 60 18 18 */	frsp f3, f3
/* 803F42CC 003F120C  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803F42D0 003F1210  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F42D4 003F1214  EC 05 00 7C */	fnmsubs f0, f5, f1, f0
/* 803F42D8 003F1218  EC A2 00 32 */	fmuls f5, f2, f0
.L_803F42DC:
/* 803F42DC 003F121C  EC 84 01 72 */	fmuls f4, f4, f5
/* 803F42E0 003F1220  EF FF 01 72 */	fmuls f31, f31, f5
.L_803F42E4:
/* 803F42E4 003F1224  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F42E8 003F1228  C0 5F 00 AC */	lfs f2, 0xac(r31)
/* 803F42EC 003F122C  EC 3F 00 32 */	fmuls f1, f31, f0
/* 803F42F0 003F1230  C0 02 1B A8 */	lfs f0, lbl_8051FF08@sda21(r2)
/* 803F42F4 003F1234  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 803F42F8 003F1238  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F42FC 003F123C  40 81 00 44 */	ble .L_803F4340
/* 803F4300 003F1240  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803F4304 003F1244  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 803F4308 003F1248  40 82 00 14 */	bne .L_803F431C
/* 803F430C 003F124C  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4310 003F1250  60 00 00 03 */	ori r0, r0, 3
/* 803F4314 003F1254  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F4318 003F1258  48 00 00 78 */	b .L_803F4390
.L_803F431C:
/* 803F431C 003F125C  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 803F4320 003F1260  40 82 00 70 */	bne .L_803F4390
/* 803F4324 003F1264  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4328 003F1268  60 00 00 08 */	ori r0, r0, 8
/* 803F432C 003F126C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F4330 003F1270  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4334 003F1274  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 803F4338 003F1278  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F433C 003F127C  48 00 00 54 */	b .L_803F4390
.L_803F4340:
/* 803F4340 003F1280  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4344 003F1284  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 803F4348 003F1288  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F434C 003F128C  48 00 00 44 */	b .L_803F4390
.L_803F4350:
/* 803F4350 003F1290  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4354 003F1294  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F4358 003F1298  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 803F435C 003F129C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 803F4360 003F12A0  40 81 00 30 */	ble .L_803F4390
/* 803F4364 003F12A4  38 00 00 04 */	li r0, 4
/* 803F4368 003F12A8  38 60 FF D6 */	li r3, -42
/* 803F436C 003F12AC  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F4370 003F12B0  38 00 00 00 */	li r0, 0
/* 803F4374 003F12B4  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 803F4378 003F12B8  7C 83 18 38 */	and r3, r4, r3
/* 803F437C 003F12BC  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F4380 003F12C0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803F4384 003F12C4  60 63 00 10 */	ori r3, r3, 0x10
/* 803F4388 003F12C8  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F438C 003F12CC  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_803F4390:
/* 803F4390 003F12D0  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 803F4394 003F12D4  2C 00 00 3C */	cmpwi r0, 0x3c
/* 803F4398 003F12D8  40 81 00 44 */	ble .L_803F43DC
/* 803F439C 003F12DC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F43A0 003F12E0  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F43A4 003F12E4  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 803F43A8 003F12E8  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 803F43AC 003F12EC  40 81 00 30 */	ble .L_803F43DC
/* 803F43B0 003F12F0  38 00 00 04 */	li r0, 4
/* 803F43B4 003F12F4  38 60 FF D6 */	li r3, -42
/* 803F43B8 003F12F8  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F43BC 003F12FC  38 00 00 00 */	li r0, 0
/* 803F43C0 003F1300  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 803F43C4 003F1304  7C 83 18 38 */	and r3, r4, r3
/* 803F43C8 003F1308  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F43CC 003F130C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803F43D0 003F1310  60 63 00 10 */	ori r3, r3, 0x10
/* 803F43D4 003F1314  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F43D8 003F1318  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_803F43DC:
/* 803F43DC 003F131C  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 803F43E0 003F1320  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803F43E4 003F1324  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803F43E8 003F1328  41 82 00 20 */	beq .L_803F4408
/* 803F43EC 003F132C  38 60 00 05 */	li r3, 5
/* 803F43F0 003F1330  38 00 00 00 */	li r0, 0
/* 803F43F4 003F1334  90 7F 01 74 */	stw r3, 0x174(r31)
/* 803F43F8 003F1338  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803F43FC 003F133C  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 803F4400 003F1340  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F4404 003F1344  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_803F4408:
/* 803F4408 003F1348  7F E3 FB 78 */	mr r3, r31
/* 803F440C 003F134C  7F A4 EB 78 */	mr r4, r29
/* 803F4410 003F1350  48 00 18 C1 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F4414 003F1354  7F E3 FB 78 */	mr r3, r31
/* 803F4418 003F1358  48 00 1C BD */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F441C 003F135C  48 00 0D 44 */	b .L_803F5160
.L_803F4420:
/* 803F4420 003F1360  7F E3 FB 78 */	mr r3, r31
/* 803F4424 003F1364  7F 84 E3 78 */	mr r4, r28
/* 803F4428 003F1368  38 A0 00 01 */	li r5, 1
/* 803F442C 003F136C  48 00 15 75 */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F4430 003F1370  FF C0 08 90 */	fmr f30, f1
/* 803F4434 003F1374  7F E3 FB 78 */	mr r3, r31
/* 803F4438 003F1378  7F A4 EB 78 */	mr r4, r29
/* 803F443C 003F137C  48 00 18 95 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F4440 003F1380  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4444 003F1384  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F4448 003F1388  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 803F444C 003F138C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F4450 003F1390  40 80 00 20 */	bge .L_803F4470
/* 803F4454 003F1394  38 60 00 00 */	li r3, 0
/* 803F4458 003F1398  38 00 00 03 */	li r0, 3
/* 803F445C 003F139C  90 7F 00 FC */	stw r3, 0xfc(r31)
/* 803F4460 003F13A0  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F4464 003F13A4  48 07 AC 8D */	bl PSMGetWorldMapRocket__Fv
/* 803F4468 003F13A8  38 80 00 03 */	li r4, 3
/* 803F446C 003F13AC  48 07 94 59 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
.L_803F4470:
/* 803F4470 003F13B0  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 803F4474 003F13B4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803F4478 003F13B8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803F447C 003F13BC  41 82 00 20 */	beq .L_803F449C
/* 803F4480 003F13C0  38 60 00 05 */	li r3, 5
/* 803F4484 003F13C4  38 00 00 00 */	li r0, 0
/* 803F4488 003F13C8  90 7F 01 74 */	stw r3, 0x174(r31)
/* 803F448C 003F13CC  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803F4490 003F13D0  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 803F4494 003F13D4  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F4498 003F13D8  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_803F449C:
/* 803F449C 003F13DC  7F E3 FB 78 */	mr r3, r31
/* 803F44A0 003F13E0  48 00 1C 35 */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F44A4 003F13E4  48 00 0C BC */	b .L_803F5160
.L_803F44A8:
/* 803F44A8 003F13E8  7F E3 FB 78 */	mr r3, r31
/* 803F44AC 003F13EC  7F 84 E3 78 */	mr r4, r28
/* 803F44B0 003F13F0  38 A0 00 01 */	li r5, 1
/* 803F44B4 003F13F4  48 00 14 ED */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F44B8 003F13F8  FF C0 08 90 */	fmr f30, f1
/* 803F44BC 003F13FC  7F E3 FB 78 */	mr r3, r31
/* 803F44C0 003F1400  7F 84 E3 78 */	mr r4, r28
/* 803F44C4 003F1404  48 00 18 0D */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F44C8 003F1408  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F44CC 003F140C  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F44D0 003F1410  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 803F44D4 003F1414  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F44D8 003F1418  40 80 00 20 */	bge .L_803F44F8
/* 803F44DC 003F141C  38 60 00 00 */	li r3, 0
/* 803F44E0 003F1420  38 00 00 01 */	li r0, 1
/* 803F44E4 003F1424  90 7F 00 FC */	stw r3, 0xfc(r31)
/* 803F44E8 003F1428  7F E3 FB 78 */	mr r3, r31
/* 803F44EC 003F142C  90 1A 00 04 */	stw r0, 4(r26)
/* 803F44F0 003F1430  48 00 21 C1 */	bl finish__Q32kh6Screen8WorldMapFv
/* 803F44F4 003F1434  48 00 0C 6C */	b .L_803F5160
.L_803F44F8:
/* 803F44F8 003F1438  88 83 00 79 */	lbz r4, 0x79(r3)
/* 803F44FC 003F143C  88 7F 01 83 */	lbz r3, 0x183(r31)
/* 803F4500 003F1440  20 04 00 FF */	subfic r0, r4, 0xff
/* 803F4504 003F1444  7C 03 00 00 */	cmpw r3, r0
/* 803F4508 003F1448  40 80 00 10 */	bge .L_803F4518
/* 803F450C 003F144C  7C 80 0E 70 */	srawi r0, r4, 1
/* 803F4510 003F1450  7C 03 02 14 */	add r0, r3, r0
/* 803F4514 003F1454  98 1F 01 83 */	stb r0, 0x183(r31)
.L_803F4518:
/* 803F4518 003F1458  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 803F451C 003F145C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803F4520 003F1460  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803F4524 003F1464  41 82 00 24 */	beq .L_803F4548
/* 803F4528 003F1468  38 00 00 05 */	li r0, 5
/* 803F452C 003F146C  38 60 FF EC */	li r3, -20
/* 803F4530 003F1470  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F4534 003F1474  38 00 00 00 */	li r0, 0
/* 803F4538 003F1478  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 803F453C 003F147C  7C 83 18 38 */	and r3, r4, r3
/* 803F4540 003F1480  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F4544 003F1484  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_803F4548:
/* 803F4548 003F1488  7F E3 FB 78 */	mr r3, r31
/* 803F454C 003F148C  48 00 1B 89 */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F4550 003F1490  48 00 0C 10 */	b .L_803F5160
.L_803F4554:
/* 803F4554 003F1494  7F E3 FB 78 */	mr r3, r31
/* 803F4558 003F1498  48 00 22 61 */	bl getTarget__Q32kh6Screen8WorldMapFv
/* 803F455C 003F149C  2C 03 00 00 */	cmpwi r3, 0
/* 803F4560 003F14A0  41 80 00 1C */	blt .L_803F457C
/* 803F4564 003F14A4  88 1F 01 81 */	lbz r0, 0x181(r31)
/* 803F4568 003F14A8  7C 03 00 00 */	cmpw r3, r0
/* 803F456C 003F14AC  40 80 00 10 */	bge .L_803F457C
/* 803F4570 003F14B0  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 803F4574 003F14B4  7C 03 00 00 */	cmpw r3, r0
/* 803F4578 003F14B8  40 82 00 98 */	bne .L_803F4610
.L_803F457C:
/* 803F457C 003F14BC  7F A3 EB 78 */	mr r3, r29
/* 803F4580 003F14C0  48 01 74 79 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F4584 003F14C4  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803F4588 003F14C8  7F A3 EB 78 */	mr r3, r29
/* 803F458C 003F14CC  EF C1 00 28 */	fsubs f30, f1, f0
/* 803F4590 003F14D0  48 01 73 7D */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F4594 003F14D4  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F4598 003F14D8  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F459C 003F14DC  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F45A0 003F14E0  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 803F45A4 003F14E4  EC 21 00 28 */	fsubs f1, f1, f0
/* 803F45A8 003F14E8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803F45AC 003F14EC  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 803F45B0 003F14F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F45B4 003F14F4  40 80 00 28 */	bge .L_803F45DC
/* 803F45B8 003F14F8  7F E3 FB 78 */	mr r3, r31
/* 803F45BC 003F14FC  7F A4 EB 78 */	mr r4, r29
/* 803F45C0 003F1500  48 00 1C 0D */	bl postureControl__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F45C4 003F1504  38 00 00 02 */	li r0, 2
/* 803F45C8 003F1508  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F45CC 003F150C  48 07 AB 25 */	bl PSMGetWorldMapRocket__Fv
/* 803F45D0 003F1510  38 80 00 05 */	li r4, 5
/* 803F45D4 003F1514  48 07 92 F1 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F45D8 003F1518  48 00 00 B4 */	b .L_803F468C
.L_803F45DC:
/* 803F45DC 003F151C  7F E3 FB 78 */	mr r3, r31
/* 803F45E0 003F1520  7F A4 EB 78 */	mr r4, r29
/* 803F45E4 003F1524  38 A0 00 01 */	li r5, 1
/* 803F45E8 003F1528  48 00 13 B9 */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F45EC 003F152C  7F E3 FB 78 */	mr r3, r31
/* 803F45F0 003F1530  7F A4 EB 78 */	mr r4, r29
/* 803F45F4 003F1534  48 00 16 DD */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F45F8 003F1538  38 00 00 01 */	li r0, 1
/* 803F45FC 003F153C  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F4600 003F1540  48 07 AA F1 */	bl PSMGetWorldMapRocket__Fv
/* 803F4604 003F1544  38 80 00 02 */	li r4, 2
/* 803F4608 003F1548  48 07 92 BD */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F460C 003F154C  48 00 00 80 */	b .L_803F468C
.L_803F4610:
/* 803F4610 003F1550  90 7F 00 F8 */	stw r3, 0xf8(r31)
/* 803F4614 003F1554  38 01 01 00 */	addi r0, r1, 0x100
/* 803F4618 003F1558  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F461C 003F155C  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F4620 003F1560  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4624 003F1564  54 84 18 38 */	slwi r4, r4, 3
/* 803F4628 003F1568  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F462C 003F156C  7C C0 22 14 */	add r6, r0, r4
/* 803F4630 003F1570  80 A6 00 00 */	lwz r5, 0(r6)
/* 803F4634 003F1574  80 C6 00 04 */	lwz r6, 4(r6)
/* 803F4638 003F1578  7D 89 03 A6 */	mtctr r12
/* 803F463C 003F157C  4E 80 04 21 */	bctrl 
/* 803F4640 003F1580  7C 7A 1B 78 */	mr r26, r3
/* 803F4644 003F1584  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803F4648 003F1588  38 80 18 02 */	li r4, 0x1802
/* 803F464C 003F158C  38 A0 00 00 */	li r5, 0
/* 803F4650 003F1590  4B F4 3F E1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803F4654 003F1594  48 07 AA 9D */	bl PSMGetWorldMapRocket__Fv
/* 803F4658 003F1598  38 80 00 02 */	li r4, 2
/* 803F465C 003F159C  48 07 92 69 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F4660 003F15A0  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 803F4664 003F15A4  48 01 77 8D */	bl fadeout__Q32kh6Screen14khUtilFadePaneFv
/* 803F4668 003F15A8  7F E3 FB 78 */	mr r3, r31
/* 803F466C 003F15AC  7F 44 D3 78 */	mr r4, r26
/* 803F4670 003F15B0  38 A0 00 01 */	li r5, 1
/* 803F4674 003F15B4  48 00 13 2D */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F4678 003F15B8  7F E3 FB 78 */	mr r3, r31
/* 803F467C 003F15BC  7F 44 D3 78 */	mr r4, r26
/* 803F4680 003F15C0  48 00 16 51 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F4684 003F15C4  38 00 00 01 */	li r0, 1
/* 803F4688 003F15C8  90 1F 01 74 */	stw r0, 0x174(r31)
.L_803F468C:
/* 803F468C 003F15CC  7F E3 FB 78 */	mr r3, r31
/* 803F4690 003F15D0  48 00 1A 45 */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F4694 003F15D4  48 00 0A CC */	b .L_803F5160
.L_803F4698:
/* 803F4698 003F15D8  7F E3 FB 78 */	mr r3, r31
/* 803F469C 003F15DC  7F A4 EB 78 */	mr r4, r29
/* 803F46A0 003F15E0  38 A0 00 01 */	li r5, 1
/* 803F46A4 003F15E4  48 00 12 FD */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F46A8 003F15E8  FF C0 08 90 */	fmr f30, f1
/* 803F46AC 003F15EC  7F E3 FB 78 */	mr r3, r31
/* 803F46B0 003F15F0  7F A4 EB 78 */	mr r4, r29
/* 803F46B4 003F15F4  48 00 16 1D */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F46B8 003F15F8  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F46BC 003F15FC  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F46C0 003F1600  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803F46C4 003F1604  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F46C8 003F1608  40 80 00 10 */	bge .L_803F46D8
/* 803F46CC 003F160C  7F E3 FB 78 */	mr r3, r31
/* 803F46D0 003F1610  7F A4 EB 78 */	mr r4, r29
/* 803F46D4 003F1614  48 00 1A F9 */	bl postureControl__Q32kh6Screen8WorldMapFP7J2DPane
.L_803F46D8:
/* 803F46D8 003F1618  7F E3 FB 78 */	mr r3, r31
/* 803F46DC 003F161C  48 00 19 F9 */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F46E0 003F1620  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F46E4 003F1624  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F46E8 003F1628  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F46EC 003F162C  60 00 00 10 */	ori r0, r0, 0x10
/* 803F46F0 003F1630  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F46F4 003F1634  88 9F 01 83 */	lbz r4, 0x183(r31)
/* 803F46F8 003F1638  88 03 00 79 */	lbz r0, 0x79(r3)
/* 803F46FC 003F163C  7C 04 02 14 */	add r0, r4, r0
/* 803F4700 003F1640  98 1F 01 83 */	stb r0, 0x183(r31)
/* 803F4704 003F1644  88 03 00 79 */	lbz r0, 0x79(r3)
/* 803F4708 003F1648  88 7F 01 83 */	lbz r3, 0x183(r31)
/* 803F470C 003F164C  20 00 00 FF */	subfic r0, r0, 0xff
/* 803F4710 003F1650  7C 03 00 00 */	cmpw r3, r0
/* 803F4714 003F1654  41 80 0A 4C */	blt .L_803F5160
/* 803F4718 003F1658  38 00 00 04 */	li r0, 4
/* 803F471C 003F165C  7F E3 FB 78 */	mr r3, r31
/* 803F4720 003F1660  90 1A 00 04 */	stw r0, 4(r26)
/* 803F4724 003F1664  48 00 1F 8D */	bl finish__Q32kh6Screen8WorldMapFv
/* 803F4728 003F1668  48 00 0A 38 */	b .L_803F5160
.L_803F472C:
/* 803F472C 003F166C  7F E3 FB 78 */	mr r3, r31
/* 803F4730 003F1670  7F A4 EB 78 */	mr r4, r29
/* 803F4734 003F1674  38 A0 00 01 */	li r5, 1
/* 803F4738 003F1678  48 00 12 69 */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F473C 003F167C  FF C0 08 90 */	fmr f30, f1
/* 803F4740 003F1680  7F E3 FB 78 */	mr r3, r31
/* 803F4744 003F1684  7F A4 EB 78 */	mr r4, r29
/* 803F4748 003F1688  48 00 15 89 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F474C 003F168C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4750 003F1690  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F4754 003F1694  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803F4758 003F1698  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F475C 003F169C  40 80 00 10 */	bge .L_803F476C
/* 803F4760 003F16A0  7F E3 FB 78 */	mr r3, r31
/* 803F4764 003F16A4  7F A4 EB 78 */	mr r4, r29
/* 803F4768 003F16A8  48 00 1A 65 */	bl postureControl__Q32kh6Screen8WorldMapFP7J2DPane
.L_803F476C:
/* 803F476C 003F16AC  7F E3 FB 78 */	mr r3, r31
/* 803F4770 003F16B0  48 00 19 65 */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F4774 003F16B4  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4778 003F16B8  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F477C 003F16BC  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F4780 003F16C0  60 00 00 10 */	ori r0, r0, 0x10
/* 803F4784 003F16C4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F4788 003F16C8  88 9F 01 83 */	lbz r4, 0x183(r31)
/* 803F478C 003F16CC  88 03 00 79 */	lbz r0, 0x79(r3)
/* 803F4790 003F16D0  7C 04 02 14 */	add r0, r4, r0
/* 803F4794 003F16D4  98 1F 01 83 */	stb r0, 0x183(r31)
/* 803F4798 003F16D8  88 03 00 79 */	lbz r0, 0x79(r3)
/* 803F479C 003F16DC  88 7F 01 83 */	lbz r3, 0x183(r31)
/* 803F47A0 003F16E0  20 00 00 FF */	subfic r0, r0, 0xff
/* 803F47A4 003F16E4  7C 03 00 00 */	cmpw r3, r0
/* 803F47A8 003F16E8  41 80 09 B8 */	blt .L_803F5160
/* 803F47AC 003F16EC  38 00 00 03 */	li r0, 3
/* 803F47B0 003F16F0  7F E3 FB 78 */	mr r3, r31
/* 803F47B4 003F16F4  90 1A 00 04 */	stw r0, 4(r26)
/* 803F47B8 003F16F8  48 00 1E F9 */	bl finish__Q32kh6Screen8WorldMapFv
/* 803F47BC 003F16FC  48 00 09 A4 */	b .L_803F5160
.L_803F47C0:
/* 803F47C0 003F1700  7F E3 FB 78 */	mr r3, r31
/* 803F47C4 003F1704  7F A4 EB 78 */	mr r4, r29
/* 803F47C8 003F1708  48 00 15 09 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F47CC 003F170C  7F E3 FB 78 */	mr r3, r31
/* 803F47D0 003F1710  48 00 19 95 */	bl onyonUpdate__Q32kh6Screen8WorldMapFv
/* 803F47D4 003F1714  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F47D8 003F1718  48 00 89 29 */	bl check_WorldMapInfoWin0__Q26Screen9Game2DMgrCFv
/* 803F47DC 003F171C  2C 03 00 01 */	cmpwi r3, 1
/* 803F47E0 003F1720  41 82 00 38 */	beq .L_803F4818
/* 803F47E4 003F1724  40 80 00 5C */	bge .L_803F4840
/* 803F47E8 003F1728  2C 03 00 00 */	cmpwi r3, 0
/* 803F47EC 003F172C  40 80 00 08 */	bge .L_803F47F4
/* 803F47F0 003F1730  48 00 00 50 */	b .L_803F4840
.L_803F47F4:
/* 803F47F4 003F1734  48 07 A8 FD */	bl PSMGetWorldMapRocket__Fv
/* 803F47F8 003F1738  38 80 00 07 */	li r4, 7
/* 803F47FC 003F173C  48 07 90 C9 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F4800 003F1740  38 00 00 05 */	li r0, 5
/* 803F4804 003F1744  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F4808 003F1748  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F480C 003F174C  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 803F4810 003F1750  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F4814 003F1754  48 00 00 2C */	b .L_803F4840
.L_803F4818:
/* 803F4818 003F1758  48 07 A8 D9 */	bl PSMGetWorldMapRocket__Fv
/* 803F481C 003F175C  38 80 00 07 */	li r4, 7
/* 803F4820 003F1760  48 07 90 A5 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F4824 003F1764  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 803F4828 003F1768  38 00 00 05 */	li r0, 5
/* 803F482C 003F176C  7F E3 FB 78 */	mr r3, r31
/* 803F4830 003F1770  54 84 07 34 */	rlwinm r4, r4, 0, 0x1c, 0x1a
/* 803F4834 003F1774  90 9F 01 7C */	stw r4, 0x17c(r31)
/* 803F4838 003F1778  90 1A 00 04 */	stw r0, 4(r26)
/* 803F483C 003F177C  48 00 1E 75 */	bl finish__Q32kh6Screen8WorldMapFv
.L_803F4840:
/* 803F4840 003F1780  88 9F 01 83 */	lbz r4, 0x183(r31)
/* 803F4844 003F1784  28 04 00 B4 */	cmplwi r4, 0xb4
/* 803F4848 003F1788  40 80 09 18 */	bge .L_803F5160
/* 803F484C 003F178C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4850 003F1790  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F4854 003F1794  88 03 00 79 */	lbz r0, 0x79(r3)
/* 803F4858 003F1798  7C 04 02 14 */	add r0, r4, r0
/* 803F485C 003F179C  98 1F 01 83 */	stb r0, 0x183(r31)
/* 803F4860 003F17A0  48 00 09 00 */	b .L_803F5160
.L_803F4864:
/* 803F4864 003F17A4  7F E3 FB 78 */	mr r3, r31
/* 803F4868 003F17A8  7F A4 EB 78 */	mr r4, r29
/* 803F486C 003F17AC  48 00 14 65 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F4870 003F17B0  7F E3 FB 78 */	mr r3, r31
/* 803F4874 003F17B4  48 00 18 F1 */	bl onyonUpdate__Q32kh6Screen8WorldMapFv
/* 803F4878 003F17B8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F487C 003F17BC  48 00 89 A9 */	bl check_WorldMapInfoWin1__Q26Screen9Game2DMgrCFv
/* 803F4880 003F17C0  2C 03 00 01 */	cmpwi r3, 1
/* 803F4884 003F17C4  41 82 00 14 */	beq .L_803F4898
/* 803F4888 003F17C8  40 80 00 5C */	bge .L_803F48E4
/* 803F488C 003F17CC  2C 03 00 00 */	cmpwi r3, 0
/* 803F4890 003F17D0  40 80 00 2C */	bge .L_803F48BC
/* 803F4894 003F17D4  48 00 00 50 */	b .L_803F48E4
.L_803F4898:
/* 803F4898 003F17D8  48 07 A8 59 */	bl PSMGetWorldMapRocket__Fv
/* 803F489C 003F17DC  38 80 00 07 */	li r4, 7
/* 803F48A0 003F17E0  48 07 90 25 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F48A4 003F17E4  38 00 00 05 */	li r0, 5
/* 803F48A8 003F17E8  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F48AC 003F17EC  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F48B0 003F17F0  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 803F48B4 003F17F4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F48B8 003F17F8  48 00 00 2C */	b .L_803F48E4
.L_803F48BC:
/* 803F48BC 003F17FC  48 07 A8 35 */	bl PSMGetWorldMapRocket__Fv
/* 803F48C0 003F1800  38 80 00 02 */	li r4, 2
/* 803F48C4 003F1804  48 07 90 01 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F48C8 003F1808  38 60 00 0E */	li r3, 0xe
/* 803F48CC 003F180C  38 00 00 00 */	li r0, 0
/* 803F48D0 003F1810  90 7F 01 74 */	stw r3, 0x174(r31)
/* 803F48D4 003F1814  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803F48D8 003F1818  54 63 07 34 */	rlwinm r3, r3, 0, 0x1c, 0x1a
/* 803F48DC 003F181C  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 803F48E0 003F1820  90 1F 00 FC */	stw r0, 0xfc(r31)
.L_803F48E4:
/* 803F48E4 003F1824  88 9F 01 83 */	lbz r4, 0x183(r31)
/* 803F48E8 003F1828  28 04 00 B4 */	cmplwi r4, 0xb4
/* 803F48EC 003F182C  40 80 08 74 */	bge .L_803F5160
/* 803F48F0 003F1830  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F48F4 003F1834  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F48F8 003F1838  88 03 00 79 */	lbz r0, 0x79(r3)
/* 803F48FC 003F183C  7C 04 02 14 */	add r0, r4, r0
/* 803F4900 003F1840  98 1F 01 83 */	stb r0, 0x183(r31)
/* 803F4904 003F1844  48 00 08 5C */	b .L_803F5160
.L_803F4908:
/* 803F4908 003F1848  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F490C 003F184C  C0 3F 00 AC */	lfs f1, 0xac(r31)
/* 803F4910 003F1850  FC 40 00 50 */	fneg f2, f0
/* 803F4914 003F1854  48 01 CE C9 */	bl pikmin2_atan2f__Fff
/* 803F4918 003F1858  80 1F 01 78 */	lwz r0, 0x178(r31)
/* 803F491C 003F185C  FF C0 08 90 */	fmr f30, f1
/* 803F4920 003F1860  2C 00 00 01 */	cmpwi r0, 1
/* 803F4924 003F1864  40 82 00 1C */	bne .L_803F4940
/* 803F4928 003F1868  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F492C 003F186C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F4930 003F1870  40 81 00 10 */	ble .L_803F4940
/* 803F4934 003F1874  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F4938 003F1878  EF DE 00 28 */	fsubs f30, f30, f0
/* 803F493C 003F187C  48 00 00 20 */	b .L_803F495C
.L_803F4940:
/* 803F4940 003F1880  2C 00 00 02 */	cmpwi r0, 2
/* 803F4944 003F1884  40 82 00 18 */	bne .L_803F495C
/* 803F4948 003F1888  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F494C 003F188C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F4950 003F1890  40 80 00 0C */	bge .L_803F495C
/* 803F4954 003F1894  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F4958 003F1898  EF DE 00 2A */	fadds f30, f30, f0
.L_803F495C:
/* 803F495C 003F189C  2C 00 00 01 */	cmpwi r0, 1
/* 803F4960 003F18A0  40 82 00 0C */	bne .L_803F496C
/* 803F4964 003F18A4  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F4968 003F18A8  48 00 00 08 */	b .L_803F4970
.L_803F496C:
/* 803F496C 003F18AC  C0 02 1B BC */	lfs f0, lbl_8051FF1C@sda21(r2)
.L_803F4970:
/* 803F4970 003F18B0  EF DE 00 2A */	fadds f30, f30, f0
/* 803F4974 003F18B4  FC 20 F0 90 */	fmr f1, f30
/* 803F4978 003F18B8  48 01 CD B9 */	bl pikmin2_sinf__Ff
/* 803F497C 003F18BC  D0 3F 00 AC */	stfs f1, 0xac(r31)
/* 803F4980 003F18C0  FC 20 F0 90 */	fmr f1, f30
/* 803F4984 003F18C4  48 01 CE 15 */	bl pikmin2_cosf__Ff
/* 803F4988 003F18C8  FC 00 08 50 */	fneg f0, f1
/* 803F498C 003F18CC  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 803F4990 003F18D0  C0 22 1B C0 */	lfs f1, lbl_8051FF20@sda21(r2)
/* 803F4994 003F18D4  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 803F4998 003F18D8  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F499C 003F18DC  C0 5F 00 B0 */	lfs f2, 0xb0(r31)
/* 803F49A0 003F18E0  EC 60 00 32 */	fmuls f3, f0, f0
/* 803F49A4 003F18E4  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 803F49A8 003F18E8  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803F49AC 003F18EC  EC 01 00 32 */	fmuls f0, f1, f0
/* 803F49B0 003F18F0  EC 83 10 2A */	fadds f4, f3, f2
/* 803F49B4 003F18F4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803F49B8 003F18F8  4C 40 13 82 */	cror 2, 0, 2
/* 803F49BC 003F18FC  41 82 00 50 */	beq .L_803F4A0C
/* 803F49C0 003F1900  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F49C4 003F1904  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803F49C8 003F1908  4C 40 13 82 */	cror 2, 0, 2
/* 803F49CC 003F190C  40 82 00 08 */	bne .L_803F49D4
/* 803F49D0 003F1910  48 00 00 24 */	b .L_803F49F4
.L_803F49D4:
/* 803F49D4 003F1914  FC 60 20 34 */	frsqrte f3, f4
/* 803F49D8 003F1918  C0 42 1B B4 */	lfs f2, lbl_8051FF14@sda21(r2)
/* 803F49DC 003F191C  C0 02 1B C4 */	lfs f0, lbl_8051FF24@sda21(r2)
/* 803F49E0 003F1920  FC 60 18 18 */	frsp f3, f3
/* 803F49E4 003F1924  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803F49E8 003F1928  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F49EC 003F192C  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 803F49F0 003F1930  EC 82 00 32 */	fmuls f4, f2, f0
.L_803F49F4:
/* 803F49F4 003F1934  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F49F8 003F1938  EC 00 01 32 */	fmuls f0, f0, f4
/* 803F49FC 003F193C  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 803F4A00 003F1940  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F4A04 003F1944  EC 00 01 32 */	fmuls f0, f0, f4
/* 803F4A08 003F1948  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
.L_803F4A0C:
/* 803F4A0C 003F194C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4A10 003F1950  C4 03 40 58 */	lfsu f0, msVal__Q32kh6Screen8WorldMap@l(r3)
/* 803F4A14 003F1954  C0 5F 00 AC */	lfs f2, 0xac(r31)
/* 803F4A18 003F1958  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 803F4A1C 003F195C  EC 62 00 32 */	fmuls f3, f2, f0
/* 803F4A20 003F1960  C0 A3 00 04 */	lfs f5, 4(r3)
/* 803F4A24 003F1964  C0 42 1B 98 */	lfs f2, lbl_8051FEF8@sda21(r2)
/* 803F4A28 003F1968  C0 82 1B 94 */	lfs f4, lbl_8051FEF4@sda21(r2)
/* 803F4A2C 003F196C  EC 25 08 FA */	fmadds f1, f5, f3, f1
/* 803F4A30 003F1970  C0 02 1B CC */	lfs f0, lbl_8051FF2C@sda21(r2)
/* 803F4A34 003F1974  D0 3F 00 9C */	stfs f1, 0x9c(r31)
/* 803F4A38 003F1978  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 803F4A3C 003F197C  C0 23 00 00 */	lfs f1, 0(r3)
/* 803F4A40 003F1980  C0 A3 00 04 */	lfs f5, 4(r3)
/* 803F4A44 003F1984  EC 63 00 72 */	fmuls f3, f3, f1
/* 803F4A48 003F1988  C0 3F 00 A0 */	lfs f1, 0xa0(r31)
/* 803F4A4C 003F198C  EC 25 08 FA */	fmadds f1, f5, f3, f1
/* 803F4A50 003F1990  D0 3F 00 A0 */	stfs f1, 0xa0(r31)
/* 803F4A54 003F1994  C0 3F 00 B0 */	lfs f1, 0xb0(r31)
/* 803F4A58 003F1998  C0 7F 00 AC */	lfs f3, 0xac(r31)
/* 803F4A5C 003F199C  EC 22 00 72 */	fmuls f1, f2, f1
/* 803F4A60 003F19A0  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 803F4A64 003F19A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F4A68 003F19A8  40 81 03 04 */	ble .L_803F4D6C
/* 803F4A6C 003F19AC  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803F4A70 003F19B0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 803F4A74 003F19B4  40 82 00 14 */	bne .L_803F4A88
/* 803F4A78 003F19B8  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4A7C 003F19BC  60 00 00 03 */	ori r0, r0, 3
/* 803F4A80 003F19C0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F4A84 003F19C4  48 00 02 F4 */	b .L_803F4D78
.L_803F4A88:
/* 803F4A88 003F19C8  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 803F4A8C 003F19CC  40 82 02 EC */	bne .L_803F4D78
/* 803F4A90 003F19D0  38 00 00 01 */	li r0, 1
/* 803F4A94 003F19D4  7F E3 FB 78 */	mr r3, r31
/* 803F4A98 003F19D8  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F4A9C 003F19DC  48 00 1C A1 */	bl newMapOpen__Q32kh6Screen8WorldMapFv
/* 803F4AA0 003F19E0  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4AA4 003F19E4  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 803F4AA8 003F19E8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 803F4AAC 003F19EC  88 1F 00 2C */	lbz r0, 0x2c(r31)
/* 803F4AB0 003F19F0  28 00 00 00 */	cmplwi r0, 0
/* 803F4AB4 003F19F4  41 82 01 20 */	beq .L_803F4BD4
/* 803F4AB8 003F19F8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F4ABC 003F19FC  3C A0 65 77 */	lis r5, 0x65775F6C@ha
/* 803F4AC0 003F1A00  3C 80 00 54 */	lis r4, 0x00545F6E@ha
/* 803F4AC4 003F1A04  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4AC8 003F1A08  38 C5 5F 6C */	addi r6, r5, 0x65775F6C@l
/* 803F4ACC 003F1A0C  38 A4 5F 6E */	addi r5, r4, 0x00545F6E@l
/* 803F4AD0 003F1A10  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F4AD4 003F1A14  7D 89 03 A6 */	mtctr r12
/* 803F4AD8 003F1A18  4E 80 04 21 */	bctrl 
/* 803F4ADC 003F1A1C  38 00 00 01 */	li r0, 1
/* 803F4AE0 003F1A20  3C 80 6C 77 */	lis r4, 0x6C77696E@ha
/* 803F4AE4 003F1A24  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F4AE8 003F1A28  7C 79 1B 78 */	mr r25, r3
/* 803F4AEC 003F1A2C  38 C4 69 6E */	addi r6, r4, 0x6C77696E@l
/* 803F4AF0 003F1A30  38 A0 00 4E */	li r5, 0x4e
/* 803F4AF4 003F1A34  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F4AF8 003F1A38  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4AFC 003F1A3C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F4B00 003F1A40  7D 89 03 A6 */	mtctr r12
/* 803F4B04 003F1A44  4E 80 04 21 */	bctrl 
/* 803F4B08 003F1A48  38 00 00 01 */	li r0, 1
/* 803F4B0C 003F1A4C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F4B10 003F1A50  88 1F 00 2E */	lbz r0, 0x2e(r31)
/* 803F4B14 003F1A54  28 00 00 00 */	cmplwi r0, 0
/* 803F4B18 003F1A58  40 82 00 BC */	bne .L_803F4BD4
/* 803F4B1C 003F1A5C  7F 23 CB 78 */	mr r3, r25
/* 803F4B20 003F1A60  48 01 6E D9 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F4B24 003F1A64  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4B28 003F1A68  7F 23 CB 78 */	mr r3, r25
/* 803F4B2C 003F1A6C  38 84 40 58 */	addi r4, r4, msVal__Q32kh6Screen8WorldMap@l
/* 803F4B30 003F1A70  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803F4B34 003F1A74  EF C0 08 2A */	fadds f30, f0, f1
/* 803F4B38 003F1A78  48 01 6D D5 */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F4B3C 003F1A7C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4B40 003F1A80  38 E0 00 00 */	li r7, 0
/* 803F4B44 003F1A84  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F4B48 003F1A88  D3 C1 00 34 */	stfs f30, 0x34(r1)
/* 803F4B4C 003F1A8C  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 803F4B50 003F1A90  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803F4B54 003F1A94  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 803F4B58 003F1A98  80 61 00 34 */	lwz r3, 0x34(r1)
/* 803F4B5C 003F1A9C  EC 00 08 2A */	fadds f0, f0, f1
/* 803F4B60 003F1AA0  3C C0 80 4C */	lis r6, __vt__Q25efx2d5TBase@ha
/* 803F4B64 003F1AA4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803F4B68 003F1AA8  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 803F4B6C 003F1AAC  3C A0 80 4C */	lis r5, __vt__Q25efx2d3Arg@ha
/* 803F4B70 003F1AB0  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChangesmoke@ha
/* 803F4B74 003F1AB4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 803F4B78 003F1AB8  39 25 15 14 */	addi r9, r5, __vt__Q25efx2d3Arg@l
/* 803F4B7C 003F1ABC  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 803F4B80 003F1AC0  38 A0 00 07 */	li r5, 7
/* 803F4B84 003F1AC4  81 41 00 30 */	lwz r10, 0x30(r1)
/* 803F4B88 003F1AC8  39 06 14 D8 */	addi r8, r6, __vt__Q25efx2d5TBase@l
/* 803F4B8C 003F1ACC  90 01 00 7C */	stw r0, 0x7c(r1)
/* 803F4B90 003F1AD0  38 C4 74 88 */	addi r6, r4, __vt__Q25efx2d8TSimple1@l
/* 803F4B94 003F1AD4  38 03 3D C4 */	addi r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
/* 803F4B98 003F1AD8  38 61 00 7C */	addi r3, r1, 0x7c
/* 803F4B9C 003F1ADC  91 41 00 38 */	stw r10, 0x38(r1)
/* 803F4BA0 003F1AE0  38 81 00 8C */	addi r4, r1, 0x8c
/* 803F4BA4 003F1AE4  91 01 00 7C */	stw r8, 0x7c(r1)
/* 803F4BA8 003F1AE8  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 803F4BAC 003F1AEC  90 C1 00 7C */	stw r6, 0x7c(r1)
/* 803F4BB0 003F1AF0  91 21 00 94 */	stw r9, 0x94(r1)
/* 803F4BB4 003F1AF4  D0 21 00 8C */	stfs f1, 0x8c(r1)
/* 803F4BB8 003F1AF8  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 803F4BBC 003F1AFC  98 E1 00 80 */	stb r7, 0x80(r1)
/* 803F4BC0 003F1B00  98 E1 00 81 */	stb r7, 0x81(r1)
/* 803F4BC4 003F1B04  B0 A1 00 84 */	sth r5, 0x84(r1)
/* 803F4BC8 003F1B08  90 E1 00 88 */	stw r7, 0x88(r1)
/* 803F4BCC 003F1B0C  90 01 00 7C */	stw r0, 0x7c(r1)
/* 803F4BD0 003F1B10  4B FC 4C 61 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
.L_803F4BD4:
/* 803F4BD4 003F1B14  88 1F 00 2D */	lbz r0, 0x2d(r31)
/* 803F4BD8 003F1B18  28 00 00 00 */	cmplwi r0, 0
/* 803F4BDC 003F1B1C  41 82 01 20 */	beq .L_803F4CFC
/* 803F4BE0 003F1B20  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F4BE4 003F1B24  3C A0 65 77 */	lis r5, 0x65775F72@ha
/* 803F4BE8 003F1B28  3C 80 00 54 */	lis r4, 0x00545F6E@ha
/* 803F4BEC 003F1B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4BF0 003F1B30  38 C5 5F 72 */	addi r6, r5, 0x65775F72@l
/* 803F4BF4 003F1B34  38 A4 5F 6E */	addi r5, r4, 0x00545F6E@l
/* 803F4BF8 003F1B38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F4BFC 003F1B3C  7D 89 03 A6 */	mtctr r12
/* 803F4C00 003F1B40  4E 80 04 21 */	bctrl 
/* 803F4C04 003F1B44  38 00 00 01 */	li r0, 1
/* 803F4C08 003F1B48  3C 80 72 77 */	lis r4, 0x7277696E@ha
/* 803F4C0C 003F1B4C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F4C10 003F1B50  7C 79 1B 78 */	mr r25, r3
/* 803F4C14 003F1B54  38 C4 69 6E */	addi r6, r4, 0x7277696E@l
/* 803F4C18 003F1B58  38 A0 00 4E */	li r5, 0x4e
/* 803F4C1C 003F1B5C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F4C20 003F1B60  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4C24 003F1B64  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F4C28 003F1B68  7D 89 03 A6 */	mtctr r12
/* 803F4C2C 003F1B6C  4E 80 04 21 */	bctrl 
/* 803F4C30 003F1B70  38 00 00 01 */	li r0, 1
/* 803F4C34 003F1B74  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F4C38 003F1B78  88 1F 00 2E */	lbz r0, 0x2e(r31)
/* 803F4C3C 003F1B7C  28 00 00 00 */	cmplwi r0, 0
/* 803F4C40 003F1B80  40 82 00 BC */	bne .L_803F4CFC
/* 803F4C44 003F1B84  7F 23 CB 78 */	mr r3, r25
/* 803F4C48 003F1B88  48 01 6D B1 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F4C4C 003F1B8C  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4C50 003F1B90  7F 23 CB 78 */	mr r3, r25
/* 803F4C54 003F1B94  38 84 40 58 */	addi r4, r4, msVal__Q32kh6Screen8WorldMap@l
/* 803F4C58 003F1B98  C0 04 00 5C */	lfs f0, 0x5c(r4)
/* 803F4C5C 003F1B9C  EF C0 08 2A */	fadds f30, f0, f1
/* 803F4C60 003F1BA0  48 01 6C AD */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F4C64 003F1BA4  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F4C68 003F1BA8  38 E0 00 00 */	li r7, 0
/* 803F4C6C 003F1BAC  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F4C70 003F1BB0  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 803F4C74 003F1BB4  C0 03 00 58 */	lfs f0, 0x58(r3)
/* 803F4C78 003F1BB8  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803F4C7C 003F1BBC  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 803F4C80 003F1BC0  80 61 00 24 */	lwz r3, 0x24(r1)
/* 803F4C84 003F1BC4  EC 00 08 2A */	fadds f0, f0, f1
/* 803F4C88 003F1BC8  3C C0 80 4C */	lis r6, __vt__Q25efx2d5TBase@ha
/* 803F4C8C 003F1BCC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803F4C90 003F1BD0  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 803F4C94 003F1BD4  3C A0 80 4C */	lis r5, __vt__Q25efx2d3Arg@ha
/* 803F4C98 003F1BD8  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChangesmoke@ha
/* 803F4C9C 003F1BDC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803F4CA0 003F1BE0  39 25 15 14 */	addi r9, r5, __vt__Q25efx2d3Arg@l
/* 803F4CA4 003F1BE4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 803F4CA8 003F1BE8  38 A0 00 07 */	li r5, 7
/* 803F4CAC 003F1BEC  81 41 00 20 */	lwz r10, 0x20(r1)
/* 803F4CB0 003F1BF0  39 06 14 D8 */	addi r8, r6, __vt__Q25efx2d5TBase@l
/* 803F4CB4 003F1BF4  90 01 00 60 */	stw r0, 0x60(r1)
/* 803F4CB8 003F1BF8  38 C4 74 88 */	addi r6, r4, __vt__Q25efx2d8TSimple1@l
/* 803F4CBC 003F1BFC  38 03 3D C4 */	addi r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
/* 803F4CC0 003F1C00  38 61 00 60 */	addi r3, r1, 0x60
/* 803F4CC4 003F1C04  91 41 00 28 */	stw r10, 0x28(r1)
/* 803F4CC8 003F1C08  38 81 00 70 */	addi r4, r1, 0x70
/* 803F4CCC 003F1C0C  91 01 00 60 */	stw r8, 0x60(r1)
/* 803F4CD0 003F1C10  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 803F4CD4 003F1C14  90 C1 00 60 */	stw r6, 0x60(r1)
/* 803F4CD8 003F1C18  91 21 00 78 */	stw r9, 0x78(r1)
/* 803F4CDC 003F1C1C  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 803F4CE0 003F1C20  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 803F4CE4 003F1C24  98 E1 00 64 */	stb r7, 0x64(r1)
/* 803F4CE8 003F1C28  98 E1 00 65 */	stb r7, 0x65(r1)
/* 803F4CEC 003F1C2C  B0 A1 00 68 */	sth r5, 0x68(r1)
/* 803F4CF0 003F1C30  90 E1 00 6C */	stw r7, 0x6c(r1)
/* 803F4CF4 003F1C34  90 01 00 60 */	stw r0, 0x60(r1)
/* 803F4CF8 003F1C38  4B FC 4B 39 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
.L_803F4CFC:
/* 803F4CFC 003F1C3C  88 1F 00 2C */	lbz r0, 0x2c(r31)
/* 803F4D00 003F1C40  28 00 00 00 */	cmplwi r0, 0
/* 803F4D04 003F1C44  40 82 00 10 */	bne .L_803F4D14
/* 803F4D08 003F1C48  88 1F 00 2D */	lbz r0, 0x2d(r31)
/* 803F4D0C 003F1C4C  28 00 00 00 */	cmplwi r0, 0
/* 803F4D10 003F1C50  41 82 00 68 */	beq .L_803F4D78
.L_803F4D14:
/* 803F4D14 003F1C54  80 9F 01 6C */	lwz r4, 0x16c(r31)
/* 803F4D18 003F1C58  38 00 00 00 */	li r0, 0
/* 803F4D1C 003F1C5C  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 803F4D20 003F1C60  88 65 00 00 */	lbz r3, 0(r5)
/* 803F4D24 003F1C64  98 64 00 20 */	stb r3, 0x20(r4)
/* 803F4D28 003F1C68  88 65 00 01 */	lbz r3, 1(r5)
/* 803F4D2C 003F1C6C  98 64 00 21 */	stb r3, 0x21(r4)
/* 803F4D30 003F1C70  88 65 00 02 */	lbz r3, 2(r5)
/* 803F4D34 003F1C74  98 64 00 22 */	stb r3, 0x22(r4)
/* 803F4D38 003F1C78  88 65 00 03 */	lbz r3, 3(r5)
/* 803F4D3C 003F1C7C  98 64 00 23 */	stb r3, 0x23(r4)
/* 803F4D40 003F1C80  90 04 00 30 */	stw r0, 0x30(r4)
/* 803F4D44 003F1C84  88 1F 00 2E */	lbz r0, 0x2e(r31)
/* 803F4D48 003F1C88  28 00 00 00 */	cmplwi r0, 0
/* 803F4D4C 003F1C8C  40 82 00 2C */	bne .L_803F4D78
/* 803F4D50 003F1C90  80 7F 00 64 */	lwz r3, 0x64(r31)
/* 803F4D54 003F1C94  4B F3 40 F5 */	bl up__Q32og6Screen8ScaleMgrFv
/* 803F4D58 003F1C98  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803F4D5C 003F1C9C  38 80 18 7F */	li r4, 0x187f
/* 803F4D60 003F1CA0  38 A0 00 00 */	li r5, 0
/* 803F4D64 003F1CA4  4B F4 38 CD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803F4D68 003F1CA8  48 00 00 10 */	b .L_803F4D78
.L_803F4D6C:
/* 803F4D6C 003F1CAC  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F4D70 003F1CB0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 803F4D74 003F1CB4  90 1F 01 7C */	stw r0, 0x17c(r31)
.L_803F4D78:
/* 803F4D78 003F1CB8  7F E3 FB 78 */	mr r3, r31
/* 803F4D7C 003F1CBC  7F A4 EB 78 */	mr r4, r29
/* 803F4D80 003F1CC0  48 00 0F 51 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F4D84 003F1CC4  7F E3 FB 78 */	mr r3, r31
/* 803F4D88 003F1CC8  48 00 13 4D */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F4D8C 003F1CCC  48 00 03 D4 */	b .L_803F5160
.L_803F4D90:
/* 803F4D90 003F1CD0  C0 22 1B B0 */	lfs f1, lbl_8051FF10@sda21(r2)
/* 803F4D94 003F1CD4  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F4D98 003F1CD8  D0 3B 00 D4 */	stfs f1, 0xd4(r27)
/* 803F4D9C 003F1CDC  D0 1B 00 D8 */	stfs f0, 0xd8(r27)
/* 803F4DA0 003F1CE0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4DA4 003F1CE4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F4DA8 003F1CE8  7D 89 03 A6 */	mtctr r12
/* 803F4DAC 003F1CEC  4E 80 04 21 */	bctrl 
/* 803F4DB0 003F1CF0  C3 E2 1B B0 */	lfs f31, lbl_8051FF10@sda21(r2)
/* 803F4DB4 003F1CF4  3B 20 00 00 */	li r25, 0
/* 803F4DB8 003F1CF8  C3 C2 1B 94 */	lfs f30, lbl_8051FEF4@sda21(r2)
/* 803F4DBC 003F1CFC  3B 40 00 00 */	li r26, 0
/* 803F4DC0 003F1D00  48 00 00 2C */	b .L_803F4DEC
.L_803F4DC4:
/* 803F4DC4 003F1D04  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 803F4DC8 003F1D08  7C 63 D0 2E */	lwzx r3, r3, r26
/* 803F4DCC 003F1D0C  D3 E3 00 D4 */	stfs f31, 0xd4(r3)
/* 803F4DD0 003F1D10  D3 C3 00 D8 */	stfs f30, 0xd8(r3)
/* 803F4DD4 003F1D14  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4DD8 003F1D18  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F4DDC 003F1D1C  7D 89 03 A6 */	mtctr r12
/* 803F4DE0 003F1D20  4E 80 04 21 */	bctrl 
/* 803F4DE4 003F1D24  3B 5A 00 34 */	addi r26, r26, 0x34
/* 803F4DE8 003F1D28  3B 39 00 01 */	addi r25, r25, 1
.L_803F4DEC:
/* 803F4DEC 003F1D2C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803F4DF0 003F1D30  7C 19 00 00 */	cmpw r25, r0
/* 803F4DF4 003F1D34  41 80 FF D0 */	blt .L_803F4DC4
/* 803F4DF8 003F1D38  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 803F4DFC 003F1D3C  38 03 00 01 */	addi r0, r3, 1
/* 803F4E00 003F1D40  2C 00 00 05 */	cmpwi r0, 5
/* 803F4E04 003F1D44  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 803F4E08 003F1D48  40 81 03 58 */	ble .L_803F5160
/* 803F4E0C 003F1D4C  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 803F4E10 003F1D50  90 1F 00 F8 */	stw r0, 0xf8(r31)
/* 803F4E14 003F1D54  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 803F4E18 003F1D58  2C 00 00 00 */	cmpwi r0, 0
/* 803F4E1C 003F1D5C  40 80 00 0C */	bge .L_803F4E28
/* 803F4E20 003F1D60  38 00 00 00 */	li r0, 0
/* 803F4E24 003F1D64  90 1F 00 F8 */	stw r0, 0xf8(r31)
.L_803F4E28:
/* 803F4E28 003F1D68  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F4E2C 003F1D6C  38 01 00 E0 */	addi r0, r1, 0xe0
/* 803F4E30 003F1D70  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F4E34 003F1D74  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4E38 003F1D78  54 84 18 38 */	slwi r4, r4, 3
/* 803F4E3C 003F1D7C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F4E40 003F1D80  7C C0 22 14 */	add r6, r0, r4
/* 803F4E44 003F1D84  80 A6 00 00 */	lwz r5, 0(r6)
/* 803F4E48 003F1D88  80 C6 00 04 */	lwz r6, 4(r6)
/* 803F4E4C 003F1D8C  7D 89 03 A6 */	mtctr r12
/* 803F4E50 003F1D90  4E 80 04 21 */	bctrl 
/* 803F4E54 003F1D94  7C 7A 1B 78 */	mr r26, r3
/* 803F4E58 003F1D98  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F4E5C 003F1D9C  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F4E60 003F1DA0  38 01 01 00 */	addi r0, r1, 0x100
/* 803F4E64 003F1DA4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4E68 003F1DA8  54 84 18 38 */	slwi r4, r4, 3
/* 803F4E6C 003F1DAC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F4E70 003F1DB0  7C C0 22 14 */	add r6, r0, r4
/* 803F4E74 003F1DB4  80 A6 00 00 */	lwz r5, 0(r6)
/* 803F4E78 003F1DB8  80 C6 00 04 */	lwz r6, 4(r6)
/* 803F4E7C 003F1DBC  7D 89 03 A6 */	mtctr r12
/* 803F4E80 003F1DC0  4E 80 04 21 */	bctrl 
/* 803F4E84 003F1DC4  80 9F 01 54 */	lwz r4, 0x154(r31)
/* 803F4E88 003F1DC8  38 00 00 01 */	li r0, 1
/* 803F4E8C 003F1DCC  7F 43 D3 78 */	mr r3, r26
/* 803F4E90 003F1DD0  98 04 00 34 */	stb r0, 0x34(r4)
/* 803F4E94 003F1DD4  48 01 6B 65 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F4E98 003F1DD8  FF C0 08 90 */	fmr f30, f1
/* 803F4E9C 003F1DDC  7F 43 D3 78 */	mr r3, r26
/* 803F4EA0 003F1DE0  48 01 6A 6D */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F4EA4 003F1DE4  D0 3F 00 9C */	stfs f1, 0x9c(r31)
/* 803F4EA8 003F1DE8  7F 63 DB 78 */	mr r3, r27
/* 803F4EAC 003F1DEC  C0 02 1B D0 */	lfs f0, lbl_8051FF30@sda21(r2)
/* 803F4EB0 003F1DF0  D3 DF 00 A0 */	stfs f30, 0xa0(r31)
/* 803F4EB4 003F1DF4  D0 1F 00 BC */	stfs f0, 0xbc(r31)
/* 803F4EB8 003F1DF8  C0 3F 00 A0 */	lfs f1, 0xa0(r31)
/* 803F4EBC 003F1DFC  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F4EC0 003F1E00  D0 1B 00 D4 */	stfs f0, 0xd4(r27)
/* 803F4EC4 003F1E04  D0 3B 00 D8 */	stfs f1, 0xd8(r27)
/* 803F4EC8 003F1E08  81 9B 00 00 */	lwz r12, 0(r27)
/* 803F4ECC 003F1E0C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F4ED0 003F1E10  7D 89 03 A6 */	mtctr r12
/* 803F4ED4 003F1E14  4E 80 04 21 */	bctrl 
/* 803F4ED8 003F1E18  C0 3F 00 AC */	lfs f1, 0xac(r31)
/* 803F4EDC 003F1E1C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803F4EE0 003F1E20  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F4EE4 003F1E24  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803F4EE8 003F1E28  FC 20 08 50 */	fneg f1, f1
/* 803F4EEC 003F1E2C  FC 40 00 50 */	fneg f2, f0
/* 803F4EF0 003F1E30  4B C4 02 19 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803F4EF4 003F1E34  C0 02 1B D4 */	lfs f0, lbl_8051FF34@sda21(r2)
/* 803F4EF8 003F1E38  7F 63 DB 78 */	mr r3, r27
/* 803F4EFC 003F1E3C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803F4F00 003F1E40  D0 1B 00 C0 */	stfs f0, 0xc0(r27)
/* 803F4F04 003F1E44  81 9B 00 00 */	lwz r12, 0(r27)
/* 803F4F08 003F1E48  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F4F0C 003F1E4C  7D 89 03 A6 */	mtctr r12
/* 803F4F10 003F1E50  4E 80 04 21 */	bctrl 
/* 803F4F14 003F1E54  C0 1F 00 BC */	lfs f0, 0xbc(r31)
/* 803F4F18 003F1E58  7F 63 DB 78 */	mr r3, r27
/* 803F4F1C 003F1E5C  D0 1B 00 CC */	stfs f0, 0xcc(r27)
/* 803F4F20 003F1E60  D0 1B 00 D0 */	stfs f0, 0xd0(r27)
/* 803F4F24 003F1E64  81 9B 00 00 */	lwz r12, 0(r27)
/* 803F4F28 003F1E68  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F4F2C 003F1E6C  7D 89 03 A6 */	mtctr r12
/* 803F4F30 003F1E70  4E 80 04 21 */	bctrl 
/* 803F4F34 003F1E74  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803F4F38 003F1E78  C3 C2 1B D4 */	lfs f30, lbl_8051FF34@sda21(r2)
/* 803F4F3C 003F1E7C  3B 43 D1 E0 */	addi r26, r3, atanTable___5JMath@l
/* 803F4F40 003F1E80  3B 20 00 00 */	li r25, 0
/* 803F4F44 003F1E84  3B 60 00 00 */	li r27, 0
/* 803F4F48 003F1E88  48 00 00 C8 */	b .L_803F5010
.L_803F4F4C:
/* 803F4F4C 003F1E8C  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 803F4F50 003F1E90  38 7B 00 04 */	addi r3, r27, 4
/* 803F4F54 003F1E94  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F4F58 003F1E98  38 9B 00 14 */	addi r4, r27, 0x14
/* 803F4F5C 003F1E9C  7C 60 1A 14 */	add r3, r0, r3
/* 803F4F60 003F1EA0  D0 03 00 00 */	stfs f0, 0(r3)
/* 803F4F64 003F1EA4  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803F4F68 003F1EA8  D0 03 00 04 */	stfs f0, 4(r3)
/* 803F4F6C 003F1EAC  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 803F4F70 003F1EB0  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F4F74 003F1EB4  7C 80 22 14 */	add r4, r0, r4
/* 803F4F78 003F1EB8  D0 04 00 00 */	stfs f0, 0(r4)
/* 803F4F7C 003F1EBC  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F4F80 003F1EC0  D0 04 00 04 */	stfs f0, 4(r4)
/* 803F4F84 003F1EC4  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 803F4F88 003F1EC8  C0 3F 00 A0 */	lfs f1, 0xa0(r31)
/* 803F4F8C 003F1ECC  7C 63 D8 2E */	lwzx r3, r3, r27
/* 803F4F90 003F1ED0  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F4F94 003F1ED4  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 803F4F98 003F1ED8  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 803F4F9C 003F1EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4FA0 003F1EE0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F4FA4 003F1EE4  7D 89 03 A6 */	mtctr r12
/* 803F4FA8 003F1EE8  4E 80 04 21 */	bctrl 
/* 803F4FAC 003F1EEC  C0 3F 00 AC */	lfs f1, 0xac(r31)
/* 803F4FB0 003F1EF0  7F 43 D3 78 */	mr r3, r26
/* 803F4FB4 003F1EF4  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F4FB8 003F1EF8  FC 20 08 50 */	fneg f1, f1
/* 803F4FBC 003F1EFC  FC 40 00 50 */	fneg f2, f0
/* 803F4FC0 003F1F00  4B C4 01 49 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803F4FC4 003F1F04  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 803F4FC8 003F1F08  EC 01 07 B2 */	fmuls f0, f1, f30
/* 803F4FCC 003F1F0C  7C 63 D8 2E */	lwzx r3, r3, r27
/* 803F4FD0 003F1F10  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 803F4FD4 003F1F14  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4FD8 003F1F18  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F4FDC 003F1F1C  7D 89 03 A6 */	mtctr r12
/* 803F4FE0 003F1F20  4E 80 04 21 */	bctrl 
/* 803F4FE4 003F1F24  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 803F4FE8 003F1F28  C0 1F 00 BC */	lfs f0, 0xbc(r31)
/* 803F4FEC 003F1F2C  7C 63 D8 2E */	lwzx r3, r3, r27
/* 803F4FF0 003F1F30  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 803F4FF4 003F1F34  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 803F4FF8 003F1F38  81 83 00 00 */	lwz r12, 0(r3)
/* 803F4FFC 003F1F3C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F5000 003F1F40  7D 89 03 A6 */	mtctr r12
/* 803F5004 003F1F44  4E 80 04 21 */	bctrl 
/* 803F5008 003F1F48  3B 7B 00 34 */	addi r27, r27, 0x34
/* 803F500C 003F1F4C  3B 39 00 01 */	addi r25, r25, 1
.L_803F5010:
/* 803F5010 003F1F50  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803F5014 003F1F54  7C 19 00 00 */	cmpw r25, r0
/* 803F5018 003F1F58  41 80 FF 34 */	blt .L_803F4F4C
/* 803F501C 003F1F5C  38 60 00 00 */	li r3, 0
/* 803F5020 003F1F60  38 00 00 0A */	li r0, 0xa
/* 803F5024 003F1F64  90 7F 00 FC */	stw r3, 0xfc(r31)
/* 803F5028 003F1F68  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F502C 003F1F6C  48 07 A0 C5 */	bl PSMGetWorldMapRocket__Fv
/* 803F5030 003F1F70  38 80 00 01 */	li r4, 1
/* 803F5034 003F1F74  48 07 88 91 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F5038 003F1F78  48 00 01 28 */	b .L_803F5160
.L_803F503C:
/* 803F503C 003F1F7C  7F E3 FB 78 */	mr r3, r31
/* 803F5040 003F1F80  7F A4 EB 78 */	mr r4, r29
/* 803F5044 003F1F84  38 A0 00 01 */	li r5, 1
/* 803F5048 003F1F88  48 00 09 59 */	bl rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
/* 803F504C 003F1F8C  FF C0 08 90 */	fmr f30, f1
/* 803F5050 003F1F90  7F E3 FB 78 */	mr r3, r31
/* 803F5054 003F1F94  7F A4 EB 78 */	mr r4, r29
/* 803F5058 003F1F98  48 00 0C 79 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F505C 003F1F9C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5060 003F1FA0  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F5064 003F1FA4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803F5068 003F1FA8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F506C 003F1FAC  40 80 00 20 */	bge .L_803F508C
/* 803F5070 003F1FB0  38 60 00 00 */	li r3, 0
/* 803F5074 003F1FB4  38 00 00 02 */	li r0, 2
/* 803F5078 003F1FB8  90 7F 00 FC */	stw r3, 0xfc(r31)
/* 803F507C 003F1FBC  90 1F 01 74 */	stw r0, 0x174(r31)
/* 803F5080 003F1FC0  48 07 A0 71 */	bl PSMGetWorldMapRocket__Fv
/* 803F5084 003F1FC4  38 80 00 05 */	li r4, 5
/* 803F5088 003F1FC8  48 07 88 3D */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
.L_803F508C:
/* 803F508C 003F1FCC  7F E3 FB 78 */	mr r3, r31
/* 803F5090 003F1FD0  48 00 10 45 */	bl onyonMove__Q32kh6Screen8WorldMapFv
/* 803F5094 003F1FD4  48 00 00 CC */	b .L_803F5160
.L_803F5098:
/* 803F5098 003F1FD8  C0 22 1B B0 */	lfs f1, lbl_8051FF10@sda21(r2)
/* 803F509C 003F1FDC  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F50A0 003F1FE0  D0 3B 00 D4 */	stfs f1, 0xd4(r27)
/* 803F50A4 003F1FE4  D0 1B 00 D8 */	stfs f0, 0xd8(r27)
/* 803F50A8 003F1FE8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F50AC 003F1FEC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F50B0 003F1FF0  7D 89 03 A6 */	mtctr r12
/* 803F50B4 003F1FF4  4E 80 04 21 */	bctrl 
/* 803F50B8 003F1FF8  C3 C2 1B B0 */	lfs f30, lbl_8051FF10@sda21(r2)
/* 803F50BC 003F1FFC  3B 20 00 00 */	li r25, 0
/* 803F50C0 003F2000  C3 E2 1B 94 */	lfs f31, lbl_8051FEF4@sda21(r2)
/* 803F50C4 003F2004  3B 40 00 00 */	li r26, 0
/* 803F50C8 003F2008  48 00 00 2C */	b .L_803F50F4
.L_803F50CC:
/* 803F50CC 003F200C  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 803F50D0 003F2010  7C 63 D0 2E */	lwzx r3, r3, r26
/* 803F50D4 003F2014  D3 C3 00 D4 */	stfs f30, 0xd4(r3)
/* 803F50D8 003F2018  D3 E3 00 D8 */	stfs f31, 0xd8(r3)
/* 803F50DC 003F201C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F50E0 003F2020  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F50E4 003F2024  7D 89 03 A6 */	mtctr r12
/* 803F50E8 003F2028  4E 80 04 21 */	bctrl 
/* 803F50EC 003F202C  3B 5A 00 34 */	addi r26, r26, 0x34
/* 803F50F0 003F2030  3B 39 00 01 */	addi r25, r25, 1
.L_803F50F4:
/* 803F50F4 003F2034  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803F50F8 003F2038  7C 19 00 00 */	cmpw r25, r0
/* 803F50FC 003F203C  41 80 FF D0 */	blt .L_803F50CC
/* 803F5100 003F2040  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5104 003F2044  C0 7F 00 98 */	lfs f3, 0x98(r31)
/* 803F5108 003F2048  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F510C 003F204C  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F5110 003F2050  C0 23 00 48 */	lfs f1, 0x48(r3)
/* 803F5114 003F2054  C0 02 1B D8 */	lfs f0, lbl_8051FF38@sda21(r2)
/* 803F5118 003F2058  EC 23 08 2A */	fadds f1, f3, f1
/* 803F511C 003F205C  D0 3F 00 98 */	stfs f1, 0x98(r31)
/* 803F5120 003F2060  C0 9F 00 98 */	lfs f4, 0x98(r31)
/* 803F5124 003F2064  C0 7F 00 90 */	lfs f3, 0x90(r31)
/* 803F5128 003F2068  EC 24 01 32 */	fmuls f1, f4, f4
/* 803F512C 003F206C  EC 24 00 72 */	fmuls f1, f4, f1
/* 803F5130 003F2070  EC 24 00 72 */	fmuls f1, f4, f1
/* 803F5134 003F2074  EC 22 08 28 */	fsubs f1, f2, f1
/* 803F5138 003F2078  EC 23 00 72 */	fmuls f1, f3, f1
/* 803F513C 003F207C  D0 3F 00 68 */	stfs f1, 0x68(r31)
/* 803F5140 003F2080  C0 5F 00 90 */	lfs f2, 0x90(r31)
/* 803F5144 003F2084  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 803F5148 003F2088  EC 22 08 28 */	fsubs f1, f2, f1
/* 803F514C 003F208C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F5150 003F2090  40 80 00 10 */	bge .L_803F5160
/* 803F5154 003F2094  D0 5F 00 68 */	stfs f2, 0x68(r31)
/* 803F5158 003F2098  38 00 00 0B */	li r0, 0xb
/* 803F515C 003F209C  90 1F 01 74 */	stw r0, 0x174(r31)
.L_803F5160:
/* 803F5160 003F20A0  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 803F5164 003F20A4  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 803F5168 003F20A8  40 82 00 3C */	bne .L_803F51A4
/* 803F516C 003F20AC  88 BF 01 83 */	lbz r5, 0x183(r31)
/* 803F5170 003F20B0  28 05 00 00 */	cmplwi r5, 0
/* 803F5174 003F20B4  41 82 00 30 */	beq .L_803F51A4
/* 803F5178 003F20B8  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F517C 003F20BC  38 83 40 58 */	addi r4, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F5180 003F20C0  88 04 00 79 */	lbz r0, 0x79(r4)
/* 803F5184 003F20C4  7C 00 28 50 */	subf r0, r0, r5
/* 803F5188 003F20C8  98 1F 01 83 */	stb r0, 0x183(r31)
/* 803F518C 003F20CC  88 7F 01 83 */	lbz r3, 0x183(r31)
/* 803F5190 003F20D0  88 04 00 79 */	lbz r0, 0x79(r4)
/* 803F5194 003F20D4  7C 03 00 40 */	cmplw r3, r0
/* 803F5198 003F20D8  40 80 00 0C */	bge .L_803F51A4
/* 803F519C 003F20DC  38 00 00 00 */	li r0, 0
/* 803F51A0 003F20E0  98 1F 01 83 */	stb r0, 0x183(r31)
.L_803F51A4:
/* 803F51A4 003F20E4  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 803F51A8 003F20E8  2C 00 00 0D */	cmpwi r0, 0xd
/* 803F51AC 003F20EC  41 82 00 B4 */	beq .L_803F5260
/* 803F51B0 003F20F0  2C 00 00 0B */	cmpwi r0, 0xb
/* 803F51B4 003F20F4  41 82 00 AC */	beq .L_803F5260
/* 803F51B8 003F20F8  2C 00 00 00 */	cmpwi r0, 0
/* 803F51BC 003F20FC  41 82 00 A4 */	beq .L_803F5260
/* 803F51C0 003F2100  3B 20 00 00 */	li r25, 0
/* 803F51C4 003F2104  48 00 00 90 */	b .L_803F5254
.L_803F51C8:
/* 803F51C8 003F2108  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 803F51CC 003F210C  7C 00 C8 00 */	cmpw r0, r25
/* 803F51D0 003F2110  40 82 00 44 */	bne .L_803F5214
/* 803F51D4 003F2114  3C 80 67 68 */	lis r4, 0x67687430@ha
/* 803F51D8 003F2118  3C 60 00 50 */	lis r3, 0x00506C69@ha
/* 803F51DC 003F211C  7F 25 CB 78 */	mr r5, r25
/* 803F51E0 003F2120  38 84 74 30 */	addi r4, r4, 0x67687430@l
/* 803F51E4 003F2124  38 63 6C 69 */	addi r3, r3, 0x00506C69@l
/* 803F51E8 003F2128  48 01 62 0D */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F51EC 003F212C  7C 65 1B 78 */	mr r5, r3
/* 803F51F0 003F2130  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F51F4 003F2134  7C 86 23 78 */	mr r6, r4
/* 803F51F8 003F2138  81 83 00 00 */	lwz r12, 0(r3)
/* 803F51FC 003F213C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5200 003F2140  7D 89 03 A6 */	mtctr r12
/* 803F5204 003F2144  4E 80 04 21 */	bctrl 
/* 803F5208 003F2148  38 00 00 01 */	li r0, 1
/* 803F520C 003F214C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F5210 003F2150  48 00 00 40 */	b .L_803F5250
.L_803F5214:
/* 803F5214 003F2154  3C 80 67 68 */	lis r4, 0x67687430@ha
/* 803F5218 003F2158  3C 60 00 50 */	lis r3, 0x00506C69@ha
/* 803F521C 003F215C  7F 25 CB 78 */	mr r5, r25
/* 803F5220 003F2160  38 84 74 30 */	addi r4, r4, 0x67687430@l
/* 803F5224 003F2164  38 63 6C 69 */	addi r3, r3, 0x00506C69@l
/* 803F5228 003F2168  48 01 61 CD */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F522C 003F216C  7C 65 1B 78 */	mr r5, r3
/* 803F5230 003F2170  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F5234 003F2174  7C 86 23 78 */	mr r6, r4
/* 803F5238 003F2178  81 83 00 00 */	lwz r12, 0(r3)
/* 803F523C 003F217C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5240 003F2180  7D 89 03 A6 */	mtctr r12
/* 803F5244 003F2184  4E 80 04 21 */	bctrl 
/* 803F5248 003F2188  38 00 00 00 */	li r0, 0
/* 803F524C 003F218C  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F5250:
/* 803F5250 003F2190  3B 39 00 01 */	addi r25, r25, 1
.L_803F5254:
/* 803F5254 003F2194  88 1F 01 81 */	lbz r0, 0x181(r31)
/* 803F5258 003F2198  7C 19 00 00 */	cmpw r25, r0
/* 803F525C 003F219C  41 80 FF 6C */	blt .L_803F51C8
.L_803F5260:
/* 803F5260 003F21A0  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 803F5264 003F21A4  2C 00 00 0D */	cmpwi r0, 0xd
/* 803F5268 003F21A8  41 82 00 1C */	beq .L_803F5284
/* 803F526C 003F21AC  2C 00 00 0B */	cmpwi r0, 0xb
/* 803F5270 003F21B0  41 82 00 14 */	beq .L_803F5284
/* 803F5274 003F21B4  48 07 9E 7D */	bl PSMGetWorldMapRocket__Fv
/* 803F5278 003F21B8  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 803F527C 003F21BC  C0 5F 00 A0 */	lfs f2, 0xa0(r31)
/* 803F5280 003F21C0  48 07 81 B5 */	bl startRocketSE__Q23PSM14WorldMapRocketFff
.L_803F5284:
/* 803F5284 003F21C4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F5288 003F21C8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F528C 003F21CC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803F5290 003F21D0  7D 89 03 A6 */	mtctr r12
/* 803F5294 003F21D4  4E 80 04 21 */	bctrl 
/* 803F5298 003F21D8  80 7F 01 6C */	lwz r3, 0x16c(r31)
/* 803F529C 003F21DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F52A0 003F21E0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F52A4 003F21E4  7D 89 03 A6 */	mtctr r12
/* 803F52A8 003F21E8  4E 80 04 21 */	bctrl 
/* 803F52AC 003F21EC  80 7F 00 64 */	lwz r3, 0x64(r31)
/* 803F52B0 003F21F0  4B F3 3C D5 */	bl calc__Q32og6Screen8ScaleMgrFv
/* 803F52B4 003F21F4  3B 20 00 00 */	li r25, 0
/* 803F52B8 003F21F8  3B 41 00 50 */	addi r26, r1, 0x50
.L_803F52BC:
/* 803F52BC 003F21FC  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F52C0 003F2200  C8 3E 03 B0 */	lfd f1, 0x3b0(r30)
/* 803F52C4 003F2204  C8 1E 03 B8 */	lfd f0, 0x3b8(r30)
/* 803F52C8 003F2208  81 83 00 00 */	lwz r12, 0(r3)
/* 803F52CC 003F220C  D8 21 00 50 */	stfd f1, 0x50(r1)
/* 803F52D0 003F2210  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F52D4 003F2214  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 803F52D8 003F2218  80 BA 00 00 */	lwz r5, 0(r26)
/* 803F52DC 003F221C  80 DA 00 04 */	lwz r6, 4(r26)
/* 803F52E0 003F2220  7D 89 03 A6 */	mtctr r12
/* 803F52E4 003F2224  4E 80 04 21 */	bctrl 
/* 803F52E8 003F2228  80 9F 01 6C */	lwz r4, 0x16c(r31)
/* 803F52EC 003F222C  7C 7B 1B 78 */	mr r27, r3
/* 803F52F0 003F2230  81 83 00 00 */	lwz r12, 0(r3)
/* 803F52F4 003F2234  80 04 00 20 */	lwz r0, 0x20(r4)
/* 803F52F8 003F2238  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803F52FC 003F223C  90 01 00 0C */	stw r0, 0xc(r1)
/* 803F5300 003F2240  88 81 00 0F */	lbz r4, 0xf(r1)
/* 803F5304 003F2244  7D 89 03 A6 */	mtctr r12
/* 803F5308 003F2248  4E 80 04 21 */	bctrl 
/* 803F530C 003F224C  38 00 00 00 */	li r0, 0
/* 803F5310 003F2250  7F 63 DB 78 */	mr r3, r27
/* 803F5314 003F2254  98 01 00 0F */	stb r0, 0xf(r1)
/* 803F5318 003F2258  38 81 00 08 */	addi r4, r1, 8
/* 803F531C 003F225C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803F5320 003F2260  90 01 00 08 */	stw r0, 8(r1)
/* 803F5324 003F2264  81 9B 00 00 */	lwz r12, 0(r27)
/* 803F5328 003F2268  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 803F532C 003F226C  7D 89 03 A6 */	mtctr r12
/* 803F5330 003F2270  4E 80 04 21 */	bctrl 
/* 803F5334 003F2274  3B 39 00 01 */	addi r25, r25, 1
/* 803F5338 003F2278  3B 5A 00 08 */	addi r26, r26, 8
/* 803F533C 003F227C  2C 19 00 02 */	cmpwi r25, 2
/* 803F5340 003F2280  41 80 FF 7C */	blt .L_803F52BC
/* 803F5344 003F2284  80 7F 01 70 */	lwz r3, 0x170(r31)
/* 803F5348 003F2288  4B F0 CB 79 */	bl calc__Q32og6Screen15ArrowAlphaBlinkFv
/* 803F534C 003F228C  C0 02 1B DC */	lfs f0, lbl_8051FF3C@sda21(r2)
/* 803F5350 003F2290  3C 80 6C 62 */	lis r4, 0x6C62746E@ha
/* 803F5354 003F2294  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F5358 003F2298  38 C4 74 6E */	addi r6, r4, 0x6C62746E@l
/* 803F535C 003F229C  EC 00 00 72 */	fmuls f0, f0, f1
/* 803F5360 003F22A0  38 A0 00 4E */	li r5, 0x4e
/* 803F5364 003F22A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5368 003F22A8  FC 00 00 1E */	fctiwz f0, f0
/* 803F536C 003F22AC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5370 003F22B0  D8 01 01 20 */	stfd f0, 0x120(r1)
/* 803F5374 003F22B4  83 21 01 24 */	lwz r25, 0x124(r1)
/* 803F5378 003F22B8  7D 89 03 A6 */	mtctr r12
/* 803F537C 003F22BC  4E 80 04 21 */	bctrl 
/* 803F5380 003F22C0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5384 003F22C4  7F 24 CB 78 */	mr r4, r25
/* 803F5388 003F22C8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803F538C 003F22CC  7D 89 03 A6 */	mtctr r12
/* 803F5390 003F22D0  4E 80 04 21 */	bctrl 
/* 803F5394 003F22D4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F5398 003F22D8  3C 80 72 62 */	lis r4, 0x7262746E@ha
/* 803F539C 003F22DC  38 C4 74 6E */	addi r6, r4, 0x7262746E@l
/* 803F53A0 003F22E0  38 A0 00 4E */	li r5, 0x4e
/* 803F53A4 003F22E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F53A8 003F22E8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F53AC 003F22EC  7D 89 03 A6 */	mtctr r12
/* 803F53B0 003F22F0  4E 80 04 21 */	bctrl 
/* 803F53B4 003F22F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F53B8 003F22F8  7F 24 CB 78 */	mr r4, r25
/* 803F53BC 003F22FC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803F53C0 003F2300  7D 89 03 A6 */	mtctr r12
/* 803F53C4 003F2304  4E 80 04 21 */	bctrl 
/* 803F53C8 003F2308  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F53CC 003F230C  48 00 6C 61 */	bl update__Q26Screen9Game2DMgrFv
/* 803F53D0 003F2310  E3 E1 01 68 */	psq_l f31, 360(r1), 0, qr0
/* 803F53D4 003F2314  CB E1 01 60 */	lfd f31, 0x160(r1)
/* 803F53D8 003F2318  E3 C1 01 58 */	psq_l f30, 344(r1), 0, qr0
/* 803F53DC 003F231C  CB C1 01 50 */	lfd f30, 0x150(r1)
/* 803F53E0 003F2320  BB 21 01 34 */	lmw r25, 0x134(r1)
/* 803F53E4 003F2324  80 01 01 74 */	lwz r0, 0x174(r1)
/* 803F53E8 003F2328  7C 08 03 A6 */	mtlr r0
/* 803F53EC 003F232C  38 21 01 70 */	addi r1, r1, 0x170
/* 803F53F0 003F2330  4E 80 00 20 */	blr 
.endfn update__Q32kh6Screen8WorldMapFRQ34Game8WorldMap9UpdateArg

.fn draw1st__Q32kh6Screen8WorldMapFR8Graphics, global
/* 803F53F4 003F2334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F53F8 003F2338  7C 08 02 A6 */	mflr r0
/* 803F53FC 003F233C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F5400 003F2340  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F5404 003F2344  7C 9F 23 78 */	mr r31, r4
/* 803F5408 003F2348  93 C1 00 08 */	stw r30, 8(r1)
/* 803F540C 003F234C  7C 7E 1B 78 */	mr r30, r3
/* 803F5410 003F2350  38 7F 01 90 */	addi r3, r31, 0x190
/* 803F5414 003F2354  81 84 01 90 */	lwz r12, 0x190(r4)
/* 803F5418 003F2358  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F541C 003F235C  7D 89 03 A6 */	mtctr r12
/* 803F5420 003F2360  4E 80 04 21 */	bctrl 
/* 803F5424 003F2364  38 60 00 00 */	li r3, 0
/* 803F5428 003F2368  4B CF 44 B1 */	bl GXSetClipMode
/* 803F542C 003F236C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5430 003F2370  3C A0 61 6E */	lis r5, 0x616E6433@ha
/* 803F5434 003F2374  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F5438 003F2378  81 83 00 00 */	lwz r12, 0(r3)
/* 803F543C 003F237C  38 C5 64 33 */	addi r6, r5, 0x616E6433@l
/* 803F5440 003F2380  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F5444 003F2384  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5448 003F2388  7D 89 03 A6 */	mtctr r12
/* 803F544C 003F238C  4E 80 04 21 */	bctrl 
/* 803F5450 003F2390  38 00 00 01 */	li r0, 1
/* 803F5454 003F2394  3C A0 61 6E */	lis r5, 0x616E6432@ha
/* 803F5458 003F2398  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F545C 003F239C  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F5460 003F23A0  38 C5 64 32 */	addi r6, r5, 0x616E6432@l
/* 803F5464 003F23A4  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5468 003F23A8  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F546C 003F23AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5470 003F23B0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5474 003F23B4  7D 89 03 A6 */	mtctr r12
/* 803F5478 003F23B8  4E 80 04 21 */	bctrl 
/* 803F547C 003F23BC  38 00 00 01 */	li r0, 1
/* 803F5480 003F23C0  3C A0 6E 64 */	lis r5, 0x6E643030@ha
/* 803F5484 003F23C4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F5488 003F23C8  3C 80 4E 67 */	lis r4, 0x4E677261@ha
/* 803F548C 003F23CC  38 C5 30 30 */	addi r6, r5, 0x6E643030@l
/* 803F5490 003F23D0  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5494 003F23D4  38 A4 72 61 */	addi r5, r4, 0x4E677261@l
/* 803F5498 003F23D8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F549C 003F23DC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F54A0 003F23E0  7D 89 03 A6 */	mtctr r12
/* 803F54A4 003F23E4  4E 80 04 21 */	bctrl 
/* 803F54A8 003F23E8  38 00 00 01 */	li r0, 1
/* 803F54AC 003F23EC  3C A0 61 6E */	lis r5, 0x616E6430@ha
/* 803F54B0 003F23F0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F54B4 003F23F4  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F54B8 003F23F8  38 C5 64 30 */	addi r6, r5, 0x616E6430@l
/* 803F54BC 003F23FC  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F54C0 003F2400  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F54C4 003F2404  81 83 00 00 */	lwz r12, 0(r3)
/* 803F54C8 003F2408  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F54CC 003F240C  7D 89 03 A6 */	mtctr r12
/* 803F54D0 003F2410  4E 80 04 21 */	bctrl 
/* 803F54D4 003F2414  38 00 00 01 */	li r0, 1
/* 803F54D8 003F2418  3C A0 61 6E */	lis r5, 0x616E6431@ha
/* 803F54DC 003F241C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F54E0 003F2420  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F54E4 003F2424  38 C5 64 31 */	addi r6, r5, 0x616E6431@l
/* 803F54E8 003F2428  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F54EC 003F242C  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F54F0 003F2430  81 83 00 00 */	lwz r12, 0(r3)
/* 803F54F4 003F2434  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F54F8 003F2438  7D 89 03 A6 */	mtctr r12
/* 803F54FC 003F243C  4E 80 04 21 */	bctrl 
/* 803F5500 003F2440  38 00 00 01 */	li r0, 1
/* 803F5504 003F2444  3C 80 6F 69 */	lis r4, 0x6F696E74@ha
/* 803F5508 003F2448  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F550C 003F244C  38 C4 6E 74 */	addi r6, r4, 0x6F696E74@l
/* 803F5510 003F2450  38 A0 4E 70 */	li r5, 0x4e70
/* 803F5514 003F2454  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5518 003F2458  81 83 00 00 */	lwz r12, 0(r3)
/* 803F551C 003F245C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5520 003F2460  7D 89 03 A6 */	mtctr r12
/* 803F5524 003F2464  4E 80 04 21 */	bctrl 
/* 803F5528 003F2468  38 00 00 01 */	li r0, 1
/* 803F552C 003F246C  3C 80 68 61 */	lis r4, 0x68617061@ha
/* 803F5530 003F2470  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F5534 003F2474  38 C4 70 61 */	addi r6, r4, 0x68617061@l
/* 803F5538 003F2478  38 A0 00 4E */	li r5, 0x4e
/* 803F553C 003F247C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5540 003F2480  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5544 003F2484  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5548 003F2488  7D 89 03 A6 */	mtctr r12
/* 803F554C 003F248C  4E 80 04 21 */	bctrl 
/* 803F5550 003F2490  38 00 00 00 */	li r0, 0
/* 803F5554 003F2494  7F E4 FB 78 */	mr r4, r31
/* 803F5558 003F2498  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F555C 003F249C  38 BF 01 90 */	addi r5, r31, 0x190
/* 803F5560 003F24A0  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5564 003F24A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5568 003F24A8  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803F556C 003F24AC  7D 89 03 A6 */	mtctr r12
/* 803F5570 003F24B0  4E 80 04 21 */	bctrl 
/* 803F5574 003F24B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F5578 003F24B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F557C 003F24BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F5580 003F24C0  7C 08 03 A6 */	mtlr r0
/* 803F5584 003F24C4  38 21 00 10 */	addi r1, r1, 0x10
/* 803F5588 003F24C8  4E 80 00 20 */	blr 
.endfn draw1st__Q32kh6Screen8WorldMapFR8Graphics

.fn draw2nd__Q32kh6Screen8WorldMapFR8Graphics, global
/* 803F558C 003F24CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F5590 003F24D0  7C 08 02 A6 */	mflr r0
/* 803F5594 003F24D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F5598 003F24D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F559C 003F24DC  7C 9F 23 78 */	mr r31, r4
/* 803F55A0 003F24E0  93 C1 00 08 */	stw r30, 8(r1)
/* 803F55A4 003F24E4  7C 7E 1B 78 */	mr r30, r3
/* 803F55A8 003F24E8  38 7F 01 90 */	addi r3, r31, 0x190
/* 803F55AC 003F24EC  81 84 01 90 */	lwz r12, 0x190(r4)
/* 803F55B0 003F24F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F55B4 003F24F4  7D 89 03 A6 */	mtctr r12
/* 803F55B8 003F24F8  4E 80 04 21 */	bctrl 
/* 803F55BC 003F24FC  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 803F55C0 003F2500  7F E4 FB 78 */	mr r4, r31
/* 803F55C4 003F2504  38 BF 01 90 */	addi r5, r31, 0x190
/* 803F55C8 003F2508  81 83 00 00 */	lwz r12, 0(r3)
/* 803F55CC 003F250C  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803F55D0 003F2510  7D 89 03 A6 */	mtctr r12
/* 803F55D4 003F2514  4E 80 04 21 */	bctrl 
/* 803F55D8 003F2518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F55DC 003F251C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F55E0 003F2520  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F55E4 003F2524  7C 08 03 A6 */	mtlr r0
/* 803F55E8 003F2528  38 21 00 10 */	addi r1, r1, 0x10
/* 803F55EC 003F252C  4E 80 00 20 */	blr 
.endfn draw2nd__Q32kh6Screen8WorldMapFR8Graphics

.fn draw3rd__Q32kh6Screen8WorldMapFR8Graphics, global
/* 803F55F0 003F2530  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803F55F4 003F2534  7C 08 02 A6 */	mflr r0
/* 803F55F8 003F2538  90 01 00 54 */	stw r0, 0x54(r1)
/* 803F55FC 003F253C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803F5600 003F2540  7C 9F 23 78 */	mr r31, r4
/* 803F5604 003F2544  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803F5608 003F2548  7C 7E 1B 78 */	mr r30, r3
/* 803F560C 003F254C  38 7F 01 90 */	addi r3, r31, 0x190
/* 803F5610 003F2550  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803F5614 003F2554  81 84 01 90 */	lwz r12, 0x190(r4)
/* 803F5618 003F2558  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F561C 003F255C  7D 89 03 A6 */	mtctr r12
/* 803F5620 003F2560  4E 80 04 21 */	bctrl 
/* 803F5624 003F2564  38 60 00 00 */	li r3, 0
/* 803F5628 003F2568  4B CF 42 B1 */	bl GXSetClipMode
/* 803F562C 003F256C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5630 003F2570  3C A0 61 6E */	lis r5, 0x616E6433@ha
/* 803F5634 003F2574  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F5638 003F2578  81 83 00 00 */	lwz r12, 0(r3)
/* 803F563C 003F257C  38 C5 64 33 */	addi r6, r5, 0x616E6433@l
/* 803F5640 003F2580  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F5644 003F2584  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5648 003F2588  7D 89 03 A6 */	mtctr r12
/* 803F564C 003F258C  4E 80 04 21 */	bctrl 
/* 803F5650 003F2590  38 00 00 00 */	li r0, 0
/* 803F5654 003F2594  3C A0 61 6E */	lis r5, 0x616E6432@ha
/* 803F5658 003F2598  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F565C 003F259C  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F5660 003F25A0  38 C5 64 32 */	addi r6, r5, 0x616E6432@l
/* 803F5664 003F25A4  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5668 003F25A8  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F566C 003F25AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5670 003F25B0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5674 003F25B4  7D 89 03 A6 */	mtctr r12
/* 803F5678 003F25B8  4E 80 04 21 */	bctrl 
/* 803F567C 003F25BC  38 00 00 00 */	li r0, 0
/* 803F5680 003F25C0  3C A0 6E 64 */	lis r5, 0x6E643030@ha
/* 803F5684 003F25C4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F5688 003F25C8  3C 80 4E 67 */	lis r4, 0x4E677261@ha
/* 803F568C 003F25CC  38 C5 30 30 */	addi r6, r5, 0x6E643030@l
/* 803F5690 003F25D0  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5694 003F25D4  38 A4 72 61 */	addi r5, r4, 0x4E677261@l
/* 803F5698 003F25D8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F569C 003F25DC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F56A0 003F25E0  7D 89 03 A6 */	mtctr r12
/* 803F56A4 003F25E4  4E 80 04 21 */	bctrl 
/* 803F56A8 003F25E8  38 00 00 00 */	li r0, 0
/* 803F56AC 003F25EC  3C A0 61 6E */	lis r5, 0x616E6430@ha
/* 803F56B0 003F25F0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F56B4 003F25F4  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F56B8 003F25F8  38 C5 64 30 */	addi r6, r5, 0x616E6430@l
/* 803F56BC 003F25FC  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F56C0 003F2600  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F56C4 003F2604  81 83 00 00 */	lwz r12, 0(r3)
/* 803F56C8 003F2608  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F56CC 003F260C  7D 89 03 A6 */	mtctr r12
/* 803F56D0 003F2610  4E 80 04 21 */	bctrl 
/* 803F56D4 003F2614  38 00 00 00 */	li r0, 0
/* 803F56D8 003F2618  3C A0 61 6E */	lis r5, 0x616E6431@ha
/* 803F56DC 003F261C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F56E0 003F2620  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F56E4 003F2624  38 C5 64 31 */	addi r6, r5, 0x616E6431@l
/* 803F56E8 003F2628  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F56EC 003F262C  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F56F0 003F2630  81 83 00 00 */	lwz r12, 0(r3)
/* 803F56F4 003F2634  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F56F8 003F2638  7D 89 03 A6 */	mtctr r12
/* 803F56FC 003F263C  4E 80 04 21 */	bctrl 
/* 803F5700 003F2640  38 00 00 00 */	li r0, 0
/* 803F5704 003F2644  3C 80 6F 69 */	lis r4, 0x6F696E74@ha
/* 803F5708 003F2648  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F570C 003F264C  38 C4 6E 74 */	addi r6, r4, 0x6F696E74@l
/* 803F5710 003F2650  38 A0 4E 70 */	li r5, 0x4e70
/* 803F5714 003F2654  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5718 003F2658  81 83 00 00 */	lwz r12, 0(r3)
/* 803F571C 003F265C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5720 003F2660  7D 89 03 A6 */	mtctr r12
/* 803F5724 003F2664  4E 80 04 21 */	bctrl 
/* 803F5728 003F2668  38 00 00 00 */	li r0, 0
/* 803F572C 003F266C  3C 80 68 61 */	lis r4, 0x68617061@ha
/* 803F5730 003F2670  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F5734 003F2674  38 C4 70 61 */	addi r6, r4, 0x68617061@l
/* 803F5738 003F2678  38 A0 00 4E */	li r5, 0x4e
/* 803F573C 003F267C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5740 003F2680  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5744 003F2684  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5748 003F2688  7D 89 03 A6 */	mtctr r12
/* 803F574C 003F268C  4E 80 04 21 */	bctrl 
/* 803F5750 003F2690  38 00 00 01 */	li r0, 1
/* 803F5754 003F2694  7F E4 FB 78 */	mr r4, r31
/* 803F5758 003F2698  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F575C 003F269C  38 BF 01 90 */	addi r5, r31, 0x190
/* 803F5760 003F26A0  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 803F5764 003F26A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5768 003F26A8  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803F576C 003F26AC  7D 89 03 A6 */	mtctr r12
/* 803F5770 003F26B0  4E 80 04 21 */	bctrl 
/* 803F5774 003F26B4  80 1E 01 7C */	lwz r0, 0x17c(r30)
/* 803F5778 003F26B8  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 803F577C 003F26BC  41 82 00 C8 */	beq .L_803F5844
/* 803F5780 003F26C0  88 1E 01 83 */	lbz r0, 0x183(r30)
/* 803F5784 003F26C4  28 00 00 00 */	cmplwi r0, 0
/* 803F5788 003F26C8  41 82 00 BC */	beq .L_803F5844
/* 803F578C 003F26CC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 803F5790 003F26D0  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 803F5794 003F26D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F5798 003F26D8  7D 89 03 A6 */	mtctr r12
/* 803F579C 003F26DC  4E 80 04 21 */	bctrl 
/* 803F57A0 003F26E0  88 1E 01 83 */	lbz r0, 0x183(r30)
/* 803F57A4 003F26E4  39 00 00 00 */	li r8, 0
/* 803F57A8 003F26E8  99 01 00 18 */	stb r8, 0x18(r1)
/* 803F57AC 003F26EC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 803F57B0 003F26F0  38 81 00 08 */	addi r4, r1, 8
/* 803F57B4 003F26F4  38 A1 00 0C */	addi r5, r1, 0xc
/* 803F57B8 003F26F8  99 01 00 19 */	stb r8, 0x19(r1)
/* 803F57BC 003F26FC  38 C1 00 10 */	addi r6, r1, 0x10
/* 803F57C0 003F2700  38 E1 00 14 */	addi r7, r1, 0x14
/* 803F57C4 003F2704  99 01 00 1A */	stb r8, 0x1a(r1)
/* 803F57C8 003F2708  98 01 00 1B */	stb r0, 0x1b(r1)
/* 803F57CC 003F270C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 803F57D0 003F2710  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F57D4 003F2714  90 01 00 10 */	stw r0, 0x10(r1)
/* 803F57D8 003F2718  90 01 00 0C */	stw r0, 0xc(r1)
/* 803F57DC 003F271C  90 01 00 08 */	stw r0, 8(r1)
/* 803F57E0 003F2720  4B C4 0E AD */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803F57E4 003F2724  48 02 DA 41 */	bl getRenderModeObj__6SystemFv
/* 803F57E8 003F2728  A3 A3 00 06 */	lhz r29, 6(r3)
/* 803F57EC 003F272C  48 02 DA 39 */	bl getRenderModeObj__6SystemFv
/* 803F57F0 003F2730  A0 83 00 04 */	lhz r4, 4(r3)
/* 803F57F4 003F2734  3C 00 43 30 */	lis r0, 0x4330
/* 803F57F8 003F2738  C0 62 1B 94 */	lfs f3, lbl_8051FEF4@sda21(r2)
/* 803F57FC 003F273C  38 7F 00 BC */	addi r3, r31, 0xbc
/* 803F5800 003F2740  90 81 00 34 */	stw r4, 0x34(r1)
/* 803F5804 003F2744  38 81 00 1C */	addi r4, r1, 0x1c
/* 803F5808 003F2748  C8 42 1B E8 */	lfd f2, lbl_8051FF48@sda21(r2)
/* 803F580C 003F274C  90 01 00 30 */	stw r0, 0x30(r1)
/* 803F5810 003F2750  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803F5814 003F2754  93 A1 00 3C */	stw r29, 0x3c(r1)
/* 803F5818 003F2758  EC 20 10 28 */	fsubs f1, f0, f2
/* 803F581C 003F275C  90 01 00 38 */	stw r0, 0x38(r1)
/* 803F5820 003F2760  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803F5824 003F2764  EC 23 08 2A */	fadds f1, f3, f1
/* 803F5828 003F2768  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 803F582C 003F276C  EC 00 10 28 */	fsubs f0, f0, f2
/* 803F5830 003F2770  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 803F5834 003F2774  EC 03 00 2A */	fadds f0, f3, f0
/* 803F5838 003F2778  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803F583C 003F277C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803F5840 003F2780  4B C4 0F 95 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_803F5844:
/* 803F5844 003F2784  38 7F 01 90 */	addi r3, r31, 0x190
/* 803F5848 003F2788  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 803F584C 003F278C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F5850 003F2790  7D 89 03 A6 */	mtctr r12
/* 803F5854 003F2794  4E 80 04 21 */	bctrl 
/* 803F5858 003F2798  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 803F585C 003F279C  7F E4 FB 78 */	mr r4, r31
/* 803F5860 003F27A0  38 BF 01 90 */	addi r5, r31, 0x190
/* 803F5864 003F27A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5868 003F27A8  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803F586C 003F27AC  7D 89 03 A6 */	mtctr r12
/* 803F5870 003F27B0  4E 80 04 21 */	bctrl 
/* 803F5874 003F27B4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803F5878 003F27B8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803F587C 003F27BC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803F5880 003F27C0  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803F5884 003F27C4  7C 08 03 A6 */	mtlr r0
/* 803F5888 003F27C8  38 21 00 50 */	addi r1, r1, 0x50
/* 803F588C 003F27CC  4E 80 00 20 */	blr 
.endfn draw3rd__Q32kh6Screen8WorldMapFR8Graphics

.fn draw4th__Q32kh6Screen8WorldMapFR8Graphics, global
/* 803F5890 003F27D0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803F5894 003F27D4  7C 08 02 A6 */	mflr r0
/* 803F5898 003F27D8  90 01 00 54 */	stw r0, 0x54(r1)
/* 803F589C 003F27DC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803F58A0 003F27E0  7C 7F 1B 78 */	mr r31, r3
/* 803F58A4 003F27E4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803F58A8 003F27E8  7C 9E 23 78 */	mr r30, r4
/* 803F58AC 003F27EC  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 803F58B0 003F27F0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 803F58B4 003F27F4  40 82 00 C8 */	bne .L_803F597C
/* 803F58B8 003F27F8  88 1F 01 83 */	lbz r0, 0x183(r31)
/* 803F58BC 003F27FC  28 00 00 00 */	cmplwi r0, 0
/* 803F58C0 003F2800  41 82 00 BC */	beq .L_803F597C
/* 803F58C4 003F2804  38 7E 00 BC */	addi r3, r30, 0xbc
/* 803F58C8 003F2808  81 9E 00 BC */	lwz r12, 0xbc(r30)
/* 803F58CC 003F280C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F58D0 003F2810  7D 89 03 A6 */	mtctr r12
/* 803F58D4 003F2814  4E 80 04 21 */	bctrl 
/* 803F58D8 003F2818  88 1F 01 83 */	lbz r0, 0x183(r31)
/* 803F58DC 003F281C  39 00 00 00 */	li r8, 0
/* 803F58E0 003F2820  99 01 00 18 */	stb r8, 0x18(r1)
/* 803F58E4 003F2824  38 7E 00 BC */	addi r3, r30, 0xbc
/* 803F58E8 003F2828  38 81 00 08 */	addi r4, r1, 8
/* 803F58EC 003F282C  38 A1 00 0C */	addi r5, r1, 0xc
/* 803F58F0 003F2830  99 01 00 19 */	stb r8, 0x19(r1)
/* 803F58F4 003F2834  38 C1 00 10 */	addi r6, r1, 0x10
/* 803F58F8 003F2838  38 E1 00 14 */	addi r7, r1, 0x14
/* 803F58FC 003F283C  99 01 00 1A */	stb r8, 0x1a(r1)
/* 803F5900 003F2840  98 01 00 1B */	stb r0, 0x1b(r1)
/* 803F5904 003F2844  80 01 00 18 */	lwz r0, 0x18(r1)
/* 803F5908 003F2848  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F590C 003F284C  90 01 00 10 */	stw r0, 0x10(r1)
/* 803F5910 003F2850  90 01 00 0C */	stw r0, 0xc(r1)
/* 803F5914 003F2854  90 01 00 08 */	stw r0, 8(r1)
/* 803F5918 003F2858  4B C4 0D 75 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803F591C 003F285C  48 02 D9 09 */	bl getRenderModeObj__6SystemFv
/* 803F5920 003F2860  A3 E3 00 06 */	lhz r31, 6(r3)
/* 803F5924 003F2864  48 02 D9 01 */	bl getRenderModeObj__6SystemFv
/* 803F5928 003F2868  A0 83 00 04 */	lhz r4, 4(r3)
/* 803F592C 003F286C  3C 00 43 30 */	lis r0, 0x4330
/* 803F5930 003F2870  C0 62 1B 94 */	lfs f3, lbl_8051FEF4@sda21(r2)
/* 803F5934 003F2874  38 7E 00 BC */	addi r3, r30, 0xbc
/* 803F5938 003F2878  90 81 00 34 */	stw r4, 0x34(r1)
/* 803F593C 003F287C  38 81 00 1C */	addi r4, r1, 0x1c
/* 803F5940 003F2880  C8 42 1B E8 */	lfd f2, lbl_8051FF48@sda21(r2)
/* 803F5944 003F2884  90 01 00 30 */	stw r0, 0x30(r1)
/* 803F5948 003F2888  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803F594C 003F288C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803F5950 003F2890  EC 20 10 28 */	fsubs f1, f0, f2
/* 803F5954 003F2894  90 01 00 38 */	stw r0, 0x38(r1)
/* 803F5958 003F2898  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803F595C 003F289C  EC 23 08 2A */	fadds f1, f3, f1
/* 803F5960 003F28A0  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 803F5964 003F28A4  EC 00 10 28 */	fsubs f0, f0, f2
/* 803F5968 003F28A8  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 803F596C 003F28AC  EC 03 00 2A */	fadds f0, f3, f0
/* 803F5970 003F28B0  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803F5974 003F28B4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803F5978 003F28B8  4B C4 0E 5D */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_803F597C:
/* 803F597C 003F28BC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F5980 003F28C0  7F C4 F3 78 */	mr r4, r30
/* 803F5984 003F28C4  48 00 66 CD */	bl draw__Q26Screen9Game2DMgrFR8Graphics
/* 803F5988 003F28C8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803F598C 003F28CC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803F5990 003F28D0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803F5994 003F28D4  7C 08 03 A6 */	mtlr r0
/* 803F5998 003F28D8  38 21 00 50 */	addi r1, r1, 0x50
/* 803F599C 003F28DC  4E 80 00 20 */	blr 
.endfn draw4th__Q32kh6Screen8WorldMapFR8Graphics

.fn rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb, global
/* 803F59A0 003F28E0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803F59A4 003F28E4  7C 08 02 A6 */	mflr r0
/* 803F59A8 003F28E8  90 01 00 74 */	stw r0, 0x74(r1)
/* 803F59AC 003F28EC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803F59B0 003F28F0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803F59B4 003F28F4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 803F59B8 003F28F8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 803F59BC 003F28FC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 803F59C0 003F2900  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 803F59C4 003F2904  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 803F59C8 003F2908  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 803F59CC 003F290C  DB 61 00 20 */	stfd f27, 0x20(r1)
/* 803F59D0 003F2910  F3 61 00 28 */	psq_st f27, 40(r1), 0, qr0
/* 803F59D4 003F2914  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803F59D8 003F2918  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803F59DC 003F291C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803F59E0 003F2920  7C 7F 1B 78 */	mr r31, r3
/* 803F59E4 003F2924  7C 9D 23 78 */	mr r29, r4
/* 803F59E8 003F2928  80 83 00 FC */	lwz r4, 0xfc(r3)
/* 803F59EC 003F292C  7C BE 2B 78 */	mr r30, r5
/* 803F59F0 003F2930  7F A3 EB 78 */	mr r3, r29
/* 803F59F4 003F2934  38 04 00 01 */	addi r0, r4, 1
/* 803F59F8 003F2938  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 803F59FC 003F293C  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F5A00 003F2940  D0 01 00 08 */	stfs f0, 8(r1)
/* 803F5A04 003F2944  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F5A08 003F2948  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803F5A0C 003F294C  48 01 5F ED */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F5A10 003F2950  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803F5A14 003F2954  7F A3 EB 78 */	mr r3, r29
/* 803F5A18 003F2958  EF C1 00 28 */	fsubs f30, f1, f0
/* 803F5A1C 003F295C  48 01 5E F1 */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F5A20 003F2960  80 BF 00 FC */	lwz r5, 0xfc(r31)
/* 803F5A24 003F2964  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5A28 003F2968  38 83 40 58 */	addi r4, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F5A2C 003F296C  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F5A30 003F2970  38 65 FF AA */	addi r3, r5, -86
/* 803F5A34 003F2974  38 00 00 05 */	li r0, 5
/* 803F5A38 003F2978  7C 63 03 96 */	divwu r3, r3, r0
/* 803F5A3C 003F297C  EF E1 00 28 */	fsubs f31, f1, f0
/* 803F5A40 003F2980  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 803F5A44 003F2984  2C 05 00 5A */	cmpwi r5, 0x5a
/* 803F5A48 003F2988  C3 84 00 08 */	lfs f28, 8(r4)
/* 803F5A4C 003F298C  C3 64 00 4C */	lfs f27, 0x4c(r4)
/* 803F5A50 003F2990  EC 9F 07 FA */	fmadds f4, f31, f31, f0
/* 803F5A54 003F2994  C0 02 1B F0 */	lfs f0, lbl_8051FF50@sda21(r2)
/* 803F5A58 003F2998  FF A0 20 90 */	fmr f29, f4
/* 803F5A5C 003F299C  40 81 00 48 */	ble .L_803F5AA4
/* 803F5A60 003F29A0  54 60 E8 FF */	rlwinm. r0, r3, 0x1d, 3, 0x1f
/* 803F5A64 003F29A4  7C 09 03 A6 */	mtctr r0
/* 803F5A68 003F29A8  41 82 00 30 */	beq .L_803F5A98
.L_803F5A6C:
/* 803F5A6C 003F29AC  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A70 003F29B0  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A74 003F29B4  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A78 003F29B8  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A7C 003F29BC  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A80 003F29C0  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A84 003F29C4  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A88 003F29C8  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5A8C 003F29CC  42 00 FF E0 */	bdnz .L_803F5A6C
/* 803F5A90 003F29D0  70 63 00 07 */	andi. r3, r3, 7
/* 803F5A94 003F29D4  41 82 00 10 */	beq .L_803F5AA4
.L_803F5A98:
/* 803F5A98 003F29D8  7C 69 03 A6 */	mtctr r3
.L_803F5A9C:
/* 803F5A9C 003F29DC  EF 9C 00 32 */	fmuls f28, f28, f0
/* 803F5AA0 003F29E0  42 00 FF FC */	bdnz .L_803F5A9C
.L_803F5AA4:
/* 803F5AA4 003F29E4  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 803F5AA8 003F29E8  C0 22 1B C0 */	lfs f1, lbl_8051FF20@sda21(r2)
/* 803F5AAC 003F29EC  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 803F5AB0 003F29F0  EC 01 00 32 */	fmuls f0, f1, f0
/* 803F5AB4 003F29F4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803F5AB8 003F29F8  4C 40 13 82 */	cror 2, 0, 2
/* 803F5ABC 003F29FC  41 82 00 40 */	beq .L_803F5AFC
/* 803F5AC0 003F2A00  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F5AC4 003F2A04  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803F5AC8 003F2A08  4C 40 13 82 */	cror 2, 0, 2
/* 803F5ACC 003F2A0C  40 82 00 08 */	bne .L_803F5AD4
/* 803F5AD0 003F2A10  48 00 00 24 */	b .L_803F5AF4
.L_803F5AD4:
/* 803F5AD4 003F2A14  FC 60 20 34 */	frsqrte f3, f4
/* 803F5AD8 003F2A18  C0 42 1B B4 */	lfs f2, lbl_8051FF14@sda21(r2)
/* 803F5ADC 003F2A1C  C0 02 1B C4 */	lfs f0, lbl_8051FF24@sda21(r2)
/* 803F5AE0 003F2A20  FC 60 18 18 */	frsp f3, f3
/* 803F5AE4 003F2A24  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803F5AE8 003F2A28  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F5AEC 003F2A2C  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 803F5AF0 003F2A30  EC 82 00 32 */	fmuls f4, f2, f0
.L_803F5AF4:
/* 803F5AF4 003F2A34  EF FF 01 32 */	fmuls f31, f31, f4
/* 803F5AF8 003F2A38  EF DE 01 32 */	fmuls f30, f30, f4
.L_803F5AFC:
/* 803F5AFC 003F2A3C  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F5B00 003F2A40  C0 3F 00 AC */	lfs f1, 0xac(r31)
/* 803F5B04 003F2A44  FC 40 00 50 */	fneg f2, f0
/* 803F5B08 003F2A48  48 01 BC D5 */	bl pikmin2_atan2f__Fff
/* 803F5B0C 003F2A4C  FC 00 08 90 */	fmr f0, f1
/* 803F5B10 003F2A50  FC 20 F8 90 */	fmr f1, f31
/* 803F5B14 003F2A54  FC 40 F0 50 */	fneg f2, f30
/* 803F5B18 003F2A58  FF C0 00 90 */	fmr f30, f0
/* 803F5B1C 003F2A5C  48 01 BC C1 */	bl pikmin2_atan2f__Fff
/* 803F5B20 003F2A60  FC 60 08 90 */	fmr f3, f1
/* 803F5B24 003F2A64  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 803F5B28 003F2A68  C0 3F 00 B4 */	lfs f1, 0xb4(r31)
/* 803F5B2C 003F2A6C  FC 40 00 50 */	fneg f2, f0
/* 803F5B30 003F2A70  FF E0 18 90 */	fmr f31, f3
/* 803F5B34 003F2A74  48 01 BC A9 */	bl pikmin2_atan2f__Fff
/* 803F5B38 003F2A78  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F5B3C 003F2A7C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F5B40 003F2A80  40 80 00 0C */	bge .L_803F5B4C
/* 803F5B44 003F2A84  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F5B48 003F2A88  EF DE 00 2A */	fadds f30, f30, f0
.L_803F5B4C:
/* 803F5B4C 003F2A8C  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F5B50 003F2A90  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803F5B54 003F2A94  40 80 00 0C */	bge .L_803F5B60
/* 803F5B58 003F2A98  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F5B5C 003F2A9C  EF FF 00 2A */	fadds f31, f31, f0
.L_803F5B60:
/* 803F5B60 003F2AA0  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 803F5B64 003F2AA4  40 80 00 20 */	bge .L_803F5B84
/* 803F5B68 003F2AA8  EC 5F F0 28 */	fsubs f2, f31, f30
/* 803F5B6C 003F2AAC  C0 02 1B F4 */	lfs f0, lbl_8051FF54@sda21(r2)
/* 803F5B70 003F2AB0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F5B74 003F2AB4  40 81 00 28 */	ble .L_803F5B9C
/* 803F5B78 003F2AB8  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F5B7C 003F2ABC  EF DE 00 2A */	fadds f30, f30, f0
/* 803F5B80 003F2AC0  48 00 00 1C */	b .L_803F5B9C
.L_803F5B84:
/* 803F5B84 003F2AC4  EC 5E F8 28 */	fsubs f2, f30, f31
/* 803F5B88 003F2AC8  C0 02 1B F4 */	lfs f0, lbl_8051FF54@sda21(r2)
/* 803F5B8C 003F2ACC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F5B90 003F2AD0  40 81 00 0C */	ble .L_803F5B9C
/* 803F5B94 003F2AD4  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F5B98 003F2AD8  EF FF 00 2A */	fadds f31, f31, f0
.L_803F5B9C:
/* 803F5B9C 003F2ADC  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F5BA0 003F2AE0  EC 00 E0 28 */	fsubs f0, f0, f28
/* 803F5BA4 003F2AE4  EC 1F 00 32 */	fmuls f0, f31, f0
/* 803F5BA8 003F2AE8  EC 1E 07 3A */	fmadds f0, f30, f28, f0
/* 803F5BAC 003F2AEC  EF E1 06 FA */	fmadds f31, f1, f27, f0
/* 803F5BB0 003F2AF0  EF 9F F0 28 */	fsubs f28, f31, f30
/* 803F5BB4 003F2AF4  FC 20 E0 90 */	fmr f1, f28
/* 803F5BB8 003F2AF8  48 01 BB E1 */	bl pikmin2_cosf__Ff
/* 803F5BBC 003F2AFC  FF 60 08 50 */	fneg f27, f1
/* 803F5BC0 003F2B00  FC 20 E0 90 */	fmr f1, f28
/* 803F5BC4 003F2B04  48 01 BB 6D */	bl pikmin2_sinf__Ff
/* 803F5BC8 003F2B08  C0 02 1B BC */	lfs f0, lbl_8051FF1C@sda21(r2)
/* 803F5BCC 003F2B0C  D0 3F 00 B4 */	stfs f1, 0xb4(r31)
/* 803F5BD0 003F2B10  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 803F5BD4 003F2B14  D3 7F 00 B8 */	stfs f27, 0xb8(r31)
/* 803F5BD8 003F2B18  40 80 00 10 */	bge .L_803F5BE8
/* 803F5BDC 003F2B1C  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F5BE0 003F2B20  EF FE 00 28 */	fsubs f31, f30, f0
/* 803F5BE4 003F2B24  48 00 00 14 */	b .L_803F5BF8
.L_803F5BE8:
/* 803F5BE8 003F2B28  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F5BEC 003F2B2C  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 803F5BF0 003F2B30  40 81 00 08 */	ble .L_803F5BF8
/* 803F5BF4 003F2B34  EF E0 F0 2A */	fadds f31, f0, f30
.L_803F5BF8:
/* 803F5BF8 003F2B38  FC 20 F8 90 */	fmr f1, f31
/* 803F5BFC 003F2B3C  48 01 BB 9D */	bl pikmin2_cosf__Ff
/* 803F5C00 003F2B40  FF 60 08 50 */	fneg f27, f1
/* 803F5C04 003F2B44  FC 20 F8 90 */	fmr f1, f31
/* 803F5C08 003F2B48  48 01 BB 29 */	bl pikmin2_sinf__Ff
/* 803F5C0C 003F2B4C  D0 3F 00 AC */	stfs f1, 0xac(r31)
/* 803F5C10 003F2B50  7F E3 FB 78 */	mr r3, r31
/* 803F5C14 003F2B54  C0 22 1B F8 */	lfs f1, lbl_8051FF58@sda21(r2)
/* 803F5C18 003F2B58  38 81 00 08 */	addi r4, r1, 8
/* 803F5C1C 003F2B5C  D3 7F 00 B0 */	stfs f27, 0xb0(r31)
/* 803F5C20 003F2B60  48 00 0C D5 */	bl "getRotDir__Q32kh6Screen8WorldMapFRCQ29JGeometry8TVec2<f>f"
/* 803F5C24 003F2B64  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803F5C28 003F2B68  FC 80 E8 90 */	fmr f4, f29
/* 803F5C2C 003F2B6C  40 82 00 10 */	bne .L_803F5C3C
/* 803F5C30 003F2B70  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5C34 003F2B74  C0 83 40 58 */	lfs f4, msVal__Q32kh6Screen8WorldMap@l(r3)
/* 803F5C38 003F2B78  48 00 00 18 */	b .L_803F5C50
.L_803F5C3C:
/* 803F5C3C 003F2B7C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5C40 003F2B80  C0 03 40 58 */	lfs f0, msVal__Q32kh6Screen8WorldMap@l(r3)
/* 803F5C44 003F2B84  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 803F5C48 003F2B88  40 81 00 08 */	ble .L_803F5C50
/* 803F5C4C 003F2B8C  FC 80 00 90 */	fmr f4, f0
.L_803F5C50:
/* 803F5C50 003F2B90  C0 3F 00 AC */	lfs f1, 0xac(r31)
/* 803F5C54 003F2B94  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5C58 003F2B98  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F5C5C 003F2B9C  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F5C60 003F2BA0  EC 41 01 32 */	fmuls f2, f1, f4
/* 803F5C64 003F2BA4  C0 63 00 04 */	lfs f3, 4(r3)
/* 803F5C68 003F2BA8  FC 20 E8 90 */	fmr f1, f29
/* 803F5C6C 003F2BAC  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 803F5C70 003F2BB0  D0 1F 00 9C */	stfs f0, 0x9c(r31)
/* 803F5C74 003F2BB4  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F5C78 003F2BB8  C0 63 00 04 */	lfs f3, 4(r3)
/* 803F5C7C 003F2BBC  EC 40 01 32 */	fmuls f2, f0, f4
/* 803F5C80 003F2BC0  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 803F5C84 003F2BC4  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 803F5C88 003F2BC8  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 803F5C8C 003F2BCC  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803F5C90 003F2BD0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803F5C94 003F2BD4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 803F5C98 003F2BD8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 803F5C9C 003F2BDC  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 803F5CA0 003F2BE0  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 803F5CA4 003F2BE4  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 803F5CA8 003F2BE8  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 803F5CAC 003F2BEC  E3 61 00 28 */	psq_l f27, 40(r1), 0, qr0
/* 803F5CB0 003F2BF0  CB 61 00 20 */	lfd f27, 0x20(r1)
/* 803F5CB4 003F2BF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803F5CB8 003F2BF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803F5CBC 003F2BFC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803F5CC0 003F2C00  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803F5CC4 003F2C04  7C 08 03 A6 */	mtlr r0
/* 803F5CC8 003F2C08  38 21 00 70 */	addi r1, r1, 0x70
/* 803F5CCC 003F2C0C  4E 80 00 20 */	blr 
.endfn rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb

.fn rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane, global
/* 803F5CD0 003F2C10  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 803F5CD4 003F2C14  7C 08 02 A6 */	mflr r0
/* 803F5CD8 003F2C18  90 01 01 04 */	stw r0, 0x104(r1)
/* 803F5CDC 003F2C1C  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 803F5CE0 003F2C20  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 803F5CE4 003F2C24  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 803F5CE8 003F2C28  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 803F5CEC 003F2C2C  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 803F5CF0 003F2C30  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 803F5CF4 003F2C34  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 803F5CF8 003F2C38  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 803F5CFC 003F2C3C  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 803F5D00 003F2C40  7C 7F 1B 78 */	mr r31, r3
/* 803F5D04 003F2C44  3C C0 43 4B */	lis r6, 0x434B4554@ha
/* 803F5D08 003F2C48  80 63 00 48 */	lwz r3, 0x48(r3)
/* 803F5D0C 003F2C4C  3C A0 00 4E */	lis r5, 0x004E524F@ha
/* 803F5D10 003F2C50  7C 9D 23 78 */	mr r29, r4
/* 803F5D14 003F2C54  38 C6 45 54 */	addi r6, r6, 0x434B4554@l
/* 803F5D18 003F2C58  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5D1C 003F2C5C  38 A5 52 4F */	addi r5, r5, 0x004E524F@l
/* 803F5D20 003F2C60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5D24 003F2C64  7D 89 03 A6 */	mtctr r12
/* 803F5D28 003F2C68  4E 80 04 21 */	bctrl 
/* 803F5D2C 003F2C6C  C0 3F 00 A0 */	lfs f1, 0xa0(r31)
/* 803F5D30 003F2C70  7C 7E 1B 78 */	mr r30, r3
/* 803F5D34 003F2C74  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 803F5D38 003F2C78  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 803F5D3C 003F2C7C  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 803F5D40 003F2C80  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5D44 003F2C84  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F5D48 003F2C88  7D 89 03 A6 */	mtctr r12
/* 803F5D4C 003F2C8C  4E 80 04 21 */	bctrl 
/* 803F5D50 003F2C90  C0 3F 00 AC */	lfs f1, 0xac(r31)
/* 803F5D54 003F2C94  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803F5D58 003F2C98  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 803F5D5C 003F2C9C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803F5D60 003F2CA0  FC 20 08 50 */	fneg f1, f1
/* 803F5D64 003F2CA4  FC 40 00 50 */	fneg f2, f0
/* 803F5D68 003F2CA8  4B C3 F3 A1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803F5D6C 003F2CAC  C0 02 1B D4 */	lfs f0, lbl_8051FF34@sda21(r2)
/* 803F5D70 003F2CB0  7F C3 F3 78 */	mr r3, r30
/* 803F5D74 003F2CB4  EC 01 00 32 */	fmuls f0, f1, f0
/* 803F5D78 003F2CB8  D0 1E 00 C0 */	stfs f0, 0xc0(r30)
/* 803F5D7C 003F2CBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803F5D80 003F2CC0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F5D84 003F2CC4  7D 89 03 A6 */	mtctr r12
/* 803F5D88 003F2CC8  4E 80 04 21 */	bctrl 
/* 803F5D8C 003F2CCC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5D90 003F2CD0  80 BD 00 18 */	lwz r5, 0x18(r29)
/* 803F5D94 003F2CD4  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F5D98 003F2CD8  80 DD 00 1C */	lwz r6, 0x1c(r29)
/* 803F5D9C 003F2CDC  C3 A3 00 08 */	lfs f29, 8(r3)
/* 803F5DA0 003F2CE0  7F E3 FB 78 */	mr r3, r31
/* 803F5DA4 003F2CE4  48 00 08 4D */	bl tag2num__Q32kh6Screen8WorldMapFUx
/* 803F5DA8 003F2CE8  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F5DAC 003F2CEC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5DB0 003F2CF0  C0 1F 00 BC */	lfs f0, 0xbc(r31)
/* 803F5DB4 003F2CF4  38 83 40 58 */	addi r4, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F5DB8 003F2CF8  EC 42 E8 28 */	fsubs f2, f2, f29
/* 803F5DBC 003F2CFC  7F C3 F3 78 */	mr r3, r30
/* 803F5DC0 003F2D00  EC 22 00 72 */	fmuls f1, f2, f1
/* 803F5DC4 003F2D04  EC 00 0F 7A */	fmadds f0, f0, f29, f1
/* 803F5DC8 003F2D08  D0 1F 00 BC */	stfs f0, 0xbc(r31)
/* 803F5DCC 003F2D0C  88 1F 01 81 */	lbz r0, 0x181(r31)
/* 803F5DD0 003F2D10  C0 1F 00 BC */	lfs f0, 0xbc(r31)
/* 803F5DD4 003F2D14  54 00 10 3A */	slwi r0, r0, 2
/* 803F5DD8 003F2D18  7C 84 02 14 */	add r4, r4, r0
/* 803F5DDC 003F2D1C  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 803F5DE0 003F2D20  EF A1 00 32 */	fmuls f29, f1, f0
/* 803F5DE4 003F2D24  D3 BE 00 CC */	stfs f29, 0xcc(r30)
/* 803F5DE8 003F2D28  D3 BE 00 D0 */	stfs f29, 0xd0(r30)
/* 803F5DEC 003F2D2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803F5DF0 003F2D30  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F5DF4 003F2D34  7D 89 03 A6 */	mtctr r12
/* 803F5DF8 003F2D38  4E 80 04 21 */	bctrl 
/* 803F5DFC 003F2D3C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 803F5E00 003F2D40  3C A0 63 6B */	lis r5, 0x636B6574@ha
/* 803F5E04 003F2D44  3C 80 00 50 */	lis r4, 0x0050726F@ha
/* 803F5E08 003F2D48  C3 FF 00 9C */	lfs f31, 0x9c(r31)
/* 803F5E0C 003F2D4C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F5E10 003F2D50  38 C5 65 74 */	addi r6, r5, 0x636B6574@l
/* 803F5E14 003F2D54  C0 3F 00 A4 */	lfs f1, 0xa4(r31)
/* 803F5E18 003F2D58  38 A4 72 6F */	addi r5, r4, 0x0050726F@l
/* 803F5E1C 003F2D5C  C3 DF 00 A0 */	lfs f30, 0xa0(r31)
/* 803F5E20 003F2D60  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 803F5E24 003F2D64  EF FF 08 28 */	fsubs f31, f31, f1
/* 803F5E28 003F2D68  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F5E2C 003F2D6C  EF DE 00 28 */	fsubs f30, f30, f0
/* 803F5E30 003F2D70  7D 89 03 A6 */	mtctr r12
/* 803F5E34 003F2D74  4E 80 04 21 */	bctrl 
/* 803F5E38 003F2D78  7C 7E 1B 78 */	mr r30, r3
/* 803F5E3C 003F2D7C  38 61 00 3C */	addi r3, r1, 0x3c
/* 803F5E40 003F2D80  7F C4 F3 78 */	mr r4, r30
/* 803F5E44 003F2D84  38 A0 00 00 */	li r5, 0
/* 803F5E48 003F2D88  4B C4 31 51 */	bl getGlbVtx__7J2DPaneCFUc
/* 803F5E4C 003F2D8C  80 A1 00 3C */	lwz r5, 0x3c(r1)
/* 803F5E50 003F2D90  7F C4 F3 78 */	mr r4, r30
/* 803F5E54 003F2D94  80 C1 00 40 */	lwz r6, 0x40(r1)
/* 803F5E58 003F2D98  38 61 00 30 */	addi r3, r1, 0x30
/* 803F5E5C 003F2D9C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803F5E60 003F2DA0  90 A1 00 94 */	stw r5, 0x94(r1)
/* 803F5E64 003F2DA4  38 A0 00 01 */	li r5, 1
/* 803F5E68 003F2DA8  90 C1 00 98 */	stw r6, 0x98(r1)
/* 803F5E6C 003F2DAC  90 01 00 9C */	stw r0, 0x9c(r1)
/* 803F5E70 003F2DB0  4B C4 31 29 */	bl getGlbVtx__7J2DPaneCFUc
/* 803F5E74 003F2DB4  80 A1 00 30 */	lwz r5, 0x30(r1)
/* 803F5E78 003F2DB8  7F C4 F3 78 */	mr r4, r30
/* 803F5E7C 003F2DBC  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 803F5E80 003F2DC0  38 61 00 24 */	addi r3, r1, 0x24
/* 803F5E84 003F2DC4  80 01 00 38 */	lwz r0, 0x38(r1)
/* 803F5E88 003F2DC8  90 A1 00 88 */	stw r5, 0x88(r1)
/* 803F5E8C 003F2DCC  38 A0 00 02 */	li r5, 2
/* 803F5E90 003F2DD0  90 C1 00 8C */	stw r6, 0x8c(r1)
/* 803F5E94 003F2DD4  90 01 00 90 */	stw r0, 0x90(r1)
/* 803F5E98 003F2DD8  4B C4 31 01 */	bl getGlbVtx__7J2DPaneCFUc
/* 803F5E9C 003F2DDC  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 803F5EA0 003F2DE0  7F C4 F3 78 */	mr r4, r30
/* 803F5EA4 003F2DE4  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 803F5EA8 003F2DE8  38 61 00 18 */	addi r3, r1, 0x18
/* 803F5EAC 003F2DEC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803F5EB0 003F2DF0  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 803F5EB4 003F2DF4  38 A0 00 03 */	li r5, 3
/* 803F5EB8 003F2DF8  90 C1 00 80 */	stw r6, 0x80(r1)
/* 803F5EBC 003F2DFC  90 01 00 84 */	stw r0, 0x84(r1)
/* 803F5EC0 003F2E00  4B C4 30 D9 */	bl getGlbVtx__7J2DPaneCFUc
/* 803F5EC4 003F2E04  80 81 00 18 */	lwz r4, 0x18(r1)
/* 803F5EC8 003F2E08  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F5ECC 003F2E0C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803F5ED0 003F2E10  38 C3 40 58 */	addi r6, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F5ED4 003F2E14  90 81 00 70 */	stw r4, 0x70(r1)
/* 803F5ED8 003F2E18  3C 60 80 4A */	lis r3, lbl_80498030@ha
/* 803F5EDC 003F2E1C  39 23 80 30 */	addi r9, r3, lbl_80498030@l
/* 803F5EE0 003F2E20  3C 60 80 4A */	lis r3, lbl_8049803C@ha
/* 803F5EE4 003F2E24  90 01 00 74 */	stw r0, 0x74(r1)
/* 803F5EE8 003F2E28  38 E3 80 3C */	addi r7, r3, lbl_8049803C@l
/* 803F5EEC 003F2E2C  C0 61 00 70 */	lfs f3, 0x70(r1)
/* 803F5EF0 003F2E30  3C A0 80 4C */	lis r5, __vt__Q25efx2d3Arg@ha
/* 803F5EF4 003F2E34  C0 41 00 7C */	lfs f2, 0x7c(r1)
/* 803F5EF8 003F2E38  3C 80 80 4F */	lis r4, __vt__Q35efx2d8WorldMap11ArgDirScale@ha
/* 803F5EFC 003F2E3C  C0 21 00 74 */	lfs f1, 0x74(r1)
/* 803F5F00 003F2E40  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803F5F04 003F2E44  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 803F5F08 003F2E48  EC 43 10 2A */	fadds f2, f3, f2
/* 803F5F0C 003F2E4C  C0 C2 1B B4 */	lfs f6, lbl_8051FF14@sda21(r2)
/* 803F5F10 003F2E50  38 A5 15 14 */	addi r5, r5, __vt__Q25efx2d3Arg@l
/* 803F5F14 003F2E54  EC 21 00 2A */	fadds f1, f1, f0
/* 803F5F18 003F2E58  C0 61 00 94 */	lfs f3, 0x94(r1)
/* 803F5F1C 003F2E5C  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 803F5F20 003F2E60  EC A6 00 B2 */	fmuls f5, f6, f2
/* 803F5F24 003F2E64  C1 06 00 1C */	lfs f8, 0x1c(r6)
/* 803F5F28 003F2E68  EC 63 00 2A */	fadds f3, f3, f0
/* 803F5F2C 003F2E6C  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F5F30 003F2E70  EC 86 00 72 */	fmuls f4, f6, f1
/* 803F5F34 003F2E74  C0 41 00 98 */	lfs f2, 0x98(r1)
/* 803F5F38 003F2E78  C0 21 00 8C */	lfs f1, 0x8c(r1)
/* 803F5F3C 003F2E7C  EC E6 00 F2 */	fmuls f7, f6, f3
/* 803F5F40 003F2E80  EC 60 40 28 */	fsubs f3, f0, f8
/* 803F5F44 003F2E84  81 81 00 20 */	lwz r12, 0x20(r1)
/* 803F5F48 003F2E88  EC 02 08 2A */	fadds f0, f2, f1
/* 803F5F4C 003F2E8C  80 09 00 00 */	lwz r0, 0(r9)
/* 803F5F50 003F2E90  EC 25 02 32 */	fmuls f1, f5, f8
/* 803F5F54 003F2E94  81 09 00 04 */	lwz r8, 4(r9)
/* 803F5F58 003F2E98  81 69 00 08 */	lwz r11, 8(r9)
/* 803F5F5C 003F2E9C  EC C6 00 32 */	fmuls f6, f6, f0
/* 803F5F60 003F2EA0  EC 04 02 32 */	fmuls f0, f4, f8
/* 803F5F64 003F2EA4  80 C7 00 00 */	lwz r6, 0(r7)
/* 803F5F68 003F2EA8  EC 27 08 FA */	fmadds f1, f7, f3, f1
/* 803F5F6C 003F2EAC  81 47 00 04 */	lwz r10, 4(r7)
/* 803F5F70 003F2EB0  81 27 00 08 */	lwz r9, 8(r7)
/* 803F5F74 003F2EB4  EC 06 00 FA */	fmadds f0, f6, f3, f0
/* 803F5F78 003F2EB8  EC 3F 08 2A */	fadds f1, f31, f1
/* 803F5F7C 003F2EBC  90 01 00 64 */	stw r0, 0x64(r1)
/* 803F5F80 003F2EC0  38 84 A3 F4 */	addi r4, r4, __vt__Q35efx2d8WorldMap11ArgDirScale@l
/* 803F5F84 003F2EC4  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 803F5F88 003F2EC8  EC 1E 00 2A */	fadds f0, f30, f0
/* 803F5F8C 003F2ECC  D0 3F 00 D0 */	stfs f1, 0xd0(r31)
/* 803F5F90 003F2ED0  D0 1F 00 D4 */	stfs f0, 0xd4(r31)
/* 803F5F94 003F2ED4  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803F5F98 003F2ED8  C0 3F 00 B0 */	lfs f1, 0xb0(r31)
/* 803F5F9C 003F2EDC  FC 00 00 50 */	fneg f0, f0
/* 803F5FA0 003F2EE0  91 01 00 68 */	stw r8, 0x68(r1)
/* 803F5FA4 003F2EE4  FC 20 08 50 */	fneg f1, f1
/* 803F5FA8 003F2EE8  90 C1 00 58 */	stw r6, 0x58(r1)
/* 803F5FAC 003F2EEC  D0 1F 00 D8 */	stfs f0, 0xd8(r31)
/* 803F5FB0 003F2EF0  D0 3F 00 DC */	stfs f1, 0xdc(r31)
/* 803F5FB4 003F2EF4  81 1F 00 D8 */	lwz r8, 0xd8(r31)
/* 803F5FB8 003F2EF8  80 FF 00 DC */	lwz r7, 0xdc(r31)
/* 803F5FBC 003F2EFC  80 DF 00 D0 */	lwz r6, 0xd0(r31)
/* 803F5FC0 003F2F00  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 803F5FC4 003F2F04  91 01 00 10 */	stw r8, 0x10(r1)
/* 803F5FC8 003F2F08  90 E1 00 14 */	stw r7, 0x14(r1)
/* 803F5FCC 003F2F0C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803F5FD0 003F2F10  90 C1 00 08 */	stw r6, 8(r1)
/* 803F5FD4 003F2F14  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803F5FD8 003F2F18  90 61 00 0C */	stw r3, 0xc(r1)
/* 803F5FDC 003F2F1C  C0 61 00 08 */	lfs f3, 8(r1)
/* 803F5FE0 003F2F20  91 41 00 5C */	stw r10, 0x5c(r1)
/* 803F5FE4 003F2F24  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 803F5FE8 003F2F28  90 A1 00 A8 */	stw r5, 0xa8(r1)
/* 803F5FEC 003F2F2C  91 81 00 78 */	stw r12, 0x78(r1)
/* 803F5FF0 003F2F30  91 61 00 6C */	stw r11, 0x6c(r1)
/* 803F5FF4 003F2F34  D0 E1 00 64 */	stfs f7, 0x64(r1)
/* 803F5FF8 003F2F38  D0 C1 00 68 */	stfs f6, 0x68(r1)
/* 803F5FFC 003F2F3C  91 21 00 60 */	stw r9, 0x60(r1)
/* 803F6000 003F2F40  D0 A1 00 58 */	stfs f5, 0x58(r1)
/* 803F6004 003F2F44  D0 81 00 5C */	stfs f4, 0x5c(r1)
/* 803F6008 003F2F48  D0 61 00 A0 */	stfs f3, 0xa0(r1)
/* 803F600C 003F2F4C  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 803F6010 003F2F50  90 81 00 A8 */	stw r4, 0xa8(r1)
/* 803F6014 003F2F54  D0 21 00 AC */	stfs f1, 0xac(r1)
/* 803F6018 003F2F58  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 803F601C 003F2F5C  D3 A1 00 B4 */	stfs f29, 0xb4(r1)
/* 803F6020 003F2F60  90 01 00 48 */	stw r0, 0x48(r1)
/* 803F6024 003F2F64  3C 60 80 4C */	lis r3, __vt__Q25efx2d5TBase@ha
/* 803F6028 003F2F68  39 00 00 00 */	li r8, 0
/* 803F602C 003F2F6C  38 03 14 D8 */	addi r0, r3, __vt__Q25efx2d5TBase@l
/* 803F6030 003F2F70  3C 60 80 4E */	lis r3, __vt__Q25efx2d8TSimple1@ha
/* 803F6034 003F2F74  90 01 00 48 */	stw r0, 0x48(r1)
/* 803F6038 003F2F78  38 A3 74 88 */	addi r5, r3, __vt__Q25efx2d8TSimple1@l
/* 803F603C 003F2F7C  3C 80 80 4E */	lis r4, __vt__Q35efx2d8WorldMap19TSimple_ArgDirScale@ha
/* 803F6040 003F2F80  38 E0 00 01 */	li r7, 1
/* 803F6044 003F2F84  99 01 00 4C */	stb r8, 0x4c(r1)
/* 803F6048 003F2F88  3C 60 80 4F */	lis r3, __vt__Q35efx2d8WorldMap10T2DRocketA@ha
/* 803F604C 003F2F8C  38 C4 75 18 */	addi r6, r4, __vt__Q35efx2d8WorldMap19TSimple_ArgDirScale@l
/* 803F6050 003F2F90  38 00 00 03 */	li r0, 3
/* 803F6054 003F2F94  90 A1 00 48 */	stw r5, 0x48(r1)
/* 803F6058 003F2F98  38 A3 A3 DC */	addi r5, r3, __vt__Q35efx2d8WorldMap10T2DRocketA@l
/* 803F605C 003F2F9C  38 61 00 48 */	addi r3, r1, 0x48
/* 803F6060 003F2FA0  38 81 00 A0 */	addi r4, r1, 0xa0
/* 803F6064 003F2FA4  99 01 00 4D */	stb r8, 0x4d(r1)
/* 803F6068 003F2FA8  90 C1 00 48 */	stw r6, 0x48(r1)
/* 803F606C 003F2FAC  98 E1 00 4C */	stb r7, 0x4c(r1)
/* 803F6070 003F2FB0  B0 E1 00 50 */	sth r7, 0x50(r1)
/* 803F6074 003F2FB4  91 01 00 54 */	stw r8, 0x54(r1)
/* 803F6078 003F2FB8  90 A1 00 48 */	stw r5, 0x48(r1)
/* 803F607C 003F2FBC  98 E1 00 4C */	stb r7, 0x4c(r1)
/* 803F6080 003F2FC0  98 01 00 4D */	stb r0, 0x4d(r1)
/* 803F6084 003F2FC4  4B FC 49 ED */	bl create__Q35efx2d8WorldMap19TSimple_ArgDirScaleFPQ25efx2d3Arg
/* 803F6088 003F2FC8  FC 20 E8 90 */	fmr f1, f29
/* 803F608C 003F2FCC  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 803F6090 003F2FD0  4B FC 4B 9D */	bl setGlobalParticleScale__Q35efx2d8WorldMap10T2DRocketBFf
/* 803F6094 003F2FD4  FC 20 E8 90 */	fmr f1, f29
/* 803F6098 003F2FD8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803F609C 003F2FDC  4B FC 4B 1D */	bl setGlobalParticleScale__Q35efx2d8WorldMap13T2DRocketGlowFf
/* 803F60A0 003F2FE0  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 803F60A4 003F2FE4  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 803F60A8 003F2FE8  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 803F60AC 003F2FEC  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 803F60B0 003F2FF0  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 803F60B4 003F2FF4  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 803F60B8 003F2FF8  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 803F60BC 003F2FFC  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 803F60C0 003F3000  80 01 01 04 */	lwz r0, 0x104(r1)
/* 803F60C4 003F3004  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 803F60C8 003F3008  7C 08 03 A6 */	mtlr r0
/* 803F60CC 003F300C  38 21 01 00 */	addi r1, r1, 0x100
/* 803F60D0 003F3010  4E 80 00 20 */	blr 
.endfn rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane

.fn onyonMove__Q32kh6Screen8WorldMapFv, global
/* 803F60D4 003F3014  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803F60D8 003F3018  7C 08 02 A6 */	mflr r0
/* 803F60DC 003F301C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803F60E0 003F3020  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803F60E4 003F3024  3B E0 00 00 */	li r31, 0
/* 803F60E8 003F3028  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803F60EC 003F302C  3B C0 00 00 */	li r30, 0
/* 803F60F0 003F3030  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803F60F4 003F3034  7C 7D 1B 78 */	mr r29, r3
/* 803F60F8 003F3038  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 803F60FC 003F303C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803F6100 003F3040  C0 03 00 A0 */	lfs f0, 0xa0(r3)
/* 803F6104 003F3044  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803F6108 003F3048  48 00 00 34 */	b .L_803F613C
.L_803F610C:
/* 803F610C 003F304C  80 1D 00 F0 */	lwz r0, 0xf0(r29)
/* 803F6110 003F3050  7F A5 EB 78 */	mr r5, r29
/* 803F6114 003F3054  38 61 00 08 */	addi r3, r1, 8
/* 803F6118 003F3058  38 C1 00 10 */	addi r6, r1, 0x10
/* 803F611C 003F305C  7C 80 FA 14 */	add r4, r0, r31
/* 803F6120 003F3060  48 00 1A 21 */	bl "move__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMapRCQ29JGeometry8TVec2<f>"
/* 803F6124 003F3064  C0 21 00 08 */	lfs f1, 8(r1)
/* 803F6128 003F3068  3B FF 00 34 */	addi r31, r31, 0x34
/* 803F612C 003F306C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803F6130 003F3070  3B DE 00 01 */	addi r30, r30, 1
/* 803F6134 003F3074  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803F6138 003F3078  D0 01 00 14 */	stfs f0, 0x14(r1)
.L_803F613C:
/* 803F613C 003F307C  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 803F6140 003F3080  7C 1E 00 00 */	cmpw r30, r0
/* 803F6144 003F3084  41 80 FF C8 */	blt .L_803F610C
/* 803F6148 003F3088  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803F614C 003F308C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803F6150 003F3090  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803F6154 003F3094  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803F6158 003F3098  7C 08 03 A6 */	mtlr r0
/* 803F615C 003F309C  38 21 00 30 */	addi r1, r1, 0x30
/* 803F6160 003F30A0  4E 80 00 20 */	blr 
.endfn onyonMove__Q32kh6Screen8WorldMapFv

.fn onyonUpdate__Q32kh6Screen8WorldMapFv, global
/* 803F6164 003F30A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803F6168 003F30A8  7C 08 02 A6 */	mflr r0
/* 803F616C 003F30AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803F6170 003F30B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803F6174 003F30B4  3B E0 00 00 */	li r31, 0
/* 803F6178 003F30B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803F617C 003F30BC  3B C0 00 00 */	li r30, 0
/* 803F6180 003F30C0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803F6184 003F30C4  7C 7D 1B 78 */	mr r29, r3
/* 803F6188 003F30C8  48 00 00 1C */	b .L_803F61A4
.L_803F618C:
/* 803F618C 003F30CC  80 1D 00 F0 */	lwz r0, 0xf0(r29)
/* 803F6190 003F30D0  7F A4 EB 78 */	mr r4, r29
/* 803F6194 003F30D4  7C 60 FA 14 */	add r3, r0, r31
/* 803F6198 003F30D8  48 00 1E 01 */	bl update__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMap
/* 803F619C 003F30DC  3B FF 00 34 */	addi r31, r31, 0x34
/* 803F61A0 003F30E0  3B DE 00 01 */	addi r30, r30, 1
.L_803F61A4:
/* 803F61A4 003F30E4  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 803F61A8 003F30E8  7C 1E 00 00 */	cmpw r30, r0
/* 803F61AC 003F30EC  41 80 FF E0 */	blt .L_803F618C
/* 803F61B0 003F30F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803F61B4 003F30F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803F61B8 003F30F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803F61BC 003F30FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803F61C0 003F3100  7C 08 03 A6 */	mtlr r0
/* 803F61C4 003F3104  38 21 00 20 */	addi r1, r1, 0x20
/* 803F61C8 003F3108  4E 80 00 20 */	blr 
.endfn onyonUpdate__Q32kh6Screen8WorldMapFv

.fn postureControl__Q32kh6Screen8WorldMapFP7J2DPane, global
/* 803F61CC 003F310C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803F61D0 003F3110  7C 08 02 A6 */	mflr r0
/* 803F61D4 003F3114  90 01 00 54 */	stw r0, 0x54(r1)
/* 803F61D8 003F3118  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803F61DC 003F311C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803F61E0 003F3120  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803F61E4 003F3124  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803F61E8 003F3128  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 803F61EC 003F312C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 803F61F0 003F3130  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803F61F4 003F3134  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803F61F8 003F3138  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803F61FC 003F313C  7C 7D 1B 78 */	mr r29, r3
/* 803F6200 003F3140  7C 9E 23 78 */	mr r30, r4
/* 803F6204 003F3144  C0 03 00 B0 */	lfs f0, 0xb0(r3)
/* 803F6208 003F3148  C0 23 00 AC */	lfs f1, 0xac(r3)
/* 803F620C 003F314C  FC 40 00 50 */	fneg f2, f0
/* 803F6210 003F3150  48 01 B5 CD */	bl pikmin2_atan2f__Fff
/* 803F6214 003F3154  FC 00 08 90 */	fmr f0, f1
/* 803F6218 003F3158  C0 22 1B 94 */	lfs f1, lbl_8051FEF4@sda21(r2)
/* 803F621C 003F315C  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F6220 003F3160  FF E0 00 90 */	fmr f31, f0
/* 803F6224 003F3164  48 01 B5 B9 */	bl pikmin2_atan2f__Fff
/* 803F6228 003F3168  FC 60 08 90 */	fmr f3, f1
/* 803F622C 003F316C  C0 1D 00 B8 */	lfs f0, 0xb8(r29)
/* 803F6230 003F3170  C0 3D 00 B4 */	lfs f1, 0xb4(r29)
/* 803F6234 003F3174  FC 40 00 50 */	fneg f2, f0
/* 803F6238 003F3178  FF A0 18 90 */	fmr f29, f3
/* 803F623C 003F317C  48 01 B5 A1 */	bl pikmin2_atan2f__Fff
/* 803F6240 003F3180  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F6244 003F3184  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803F6248 003F3188  40 80 00 0C */	bge .L_803F6254
/* 803F624C 003F318C  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F6250 003F3190  EF FF 00 2A */	fadds f31, f31, f0
.L_803F6254:
/* 803F6254 003F3194  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F6258 003F3198  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 803F625C 003F319C  40 80 00 0C */	bge .L_803F6268
/* 803F6260 003F31A0  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F6264 003F31A4  EF BD 00 2A */	fadds f29, f29, f0
.L_803F6268:
/* 803F6268 003F31A8  FC 1F E8 40 */	fcmpo cr0, f31, f29
/* 803F626C 003F31AC  40 80 00 20 */	bge .L_803F628C
/* 803F6270 003F31B0  EC 5D F8 28 */	fsubs f2, f29, f31
/* 803F6274 003F31B4  C0 02 1B F4 */	lfs f0, lbl_8051FF54@sda21(r2)
/* 803F6278 003F31B8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F627C 003F31BC  40 81 00 28 */	ble .L_803F62A4
/* 803F6280 003F31C0  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F6284 003F31C4  EF FF 00 2A */	fadds f31, f31, f0
/* 803F6288 003F31C8  48 00 00 1C */	b .L_803F62A4
.L_803F628C:
/* 803F628C 003F31CC  EC 5F E8 28 */	fsubs f2, f31, f29
/* 803F6290 003F31D0  C0 02 1B F4 */	lfs f0, lbl_8051FF54@sda21(r2)
/* 803F6294 003F31D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F6298 003F31D8  40 81 00 0C */	ble .L_803F62A4
/* 803F629C 003F31DC  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F62A0 003F31E0  EF BD 00 2A */	fadds f29, f29, f0
.L_803F62A4:
/* 803F62A4 003F31E4  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F62A8 003F31E8  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F62AC 003F31EC  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F62B0 003F31F0  C0 62 1B F0 */	lfs f3, lbl_8051FF50@sda21(r2)
/* 803F62B4 003F31F4  C0 83 00 08 */	lfs f4, 8(r3)
/* 803F62B8 003F31F8  C0 02 1B FC */	lfs f0, lbl_8051FF5C@sda21(r2)
/* 803F62BC 003F31FC  EC 42 20 28 */	fsubs f2, f2, f4
/* 803F62C0 003F3200  EC 5D 00 B2 */	fmuls f2, f29, f2
/* 803F62C4 003F3204  EC 5F 11 3A */	fmadds f2, f31, f4, f2
/* 803F62C8 003F3208  EF A3 10 7A */	fmadds f29, f3, f1, f2
/* 803F62CC 003F320C  EC 3D F8 28 */	fsubs f1, f29, f31
/* 803F62D0 003F3210  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F62D4 003F3214  40 80 00 10 */	bge .L_803F62E4
/* 803F62D8 003F3218  C0 02 1C 00 */	lfs f0, lbl_8051FF60@sda21(r2)
/* 803F62DC 003F321C  EF BF 00 28 */	fsubs f29, f31, f0
/* 803F62E0 003F3220  48 00 00 14 */	b .L_803F62F4
.L_803F62E4:
/* 803F62E4 003F3224  C0 02 1C 00 */	lfs f0, lbl_8051FF60@sda21(r2)
/* 803F62E8 003F3228  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F62EC 003F322C  40 81 00 08 */	ble .L_803F62F4
/* 803F62F0 003F3230  EF A0 F8 2A */	fadds f29, f0, f31
.L_803F62F4:
/* 803F62F4 003F3234  FC 20 E8 90 */	fmr f1, f29
/* 803F62F8 003F3238  48 01 B4 A1 */	bl pikmin2_cosf__Ff
/* 803F62FC 003F323C  FF C0 08 50 */	fneg f30, f1
/* 803F6300 003F3240  FC 20 E8 90 */	fmr f1, f29
/* 803F6304 003F3244  48 01 B4 2D */	bl pikmin2_sinf__Ff
/* 803F6308 003F3248  EF FD F8 28 */	fsubs f31, f29, f31
/* 803F630C 003F324C  D0 3D 00 AC */	stfs f1, 0xac(r29)
/* 803F6310 003F3250  D3 DD 00 B0 */	stfs f30, 0xb0(r29)
/* 803F6314 003F3254  FC 20 F8 90 */	fmr f1, f31
/* 803F6318 003F3258  48 01 B4 81 */	bl pikmin2_cosf__Ff
/* 803F631C 003F325C  FF C0 08 50 */	fneg f30, f1
/* 803F6320 003F3260  FC 20 F8 90 */	fmr f1, f31
/* 803F6324 003F3264  48 01 B4 0D */	bl pikmin2_sinf__Ff
/* 803F6328 003F3268  D0 3D 00 B4 */	stfs f1, 0xb4(r29)
/* 803F632C 003F326C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F6330 003F3270  3B E3 40 58 */	addi r31, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F6334 003F3274  7F C3 F3 78 */	mr r3, r30
/* 803F6338 003F3278  D3 DD 00 B8 */	stfs f30, 0xb8(r29)
/* 803F633C 003F327C  C3 DF 00 10 */	lfs f30, 0x10(r31)
/* 803F6340 003F3280  48 01 55 CD */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F6344 003F3284  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F6348 003F3288  7F C3 F3 78 */	mr r3, r30
/* 803F634C 003F328C  C0 1D 00 9C */	lfs f0, 0x9c(r29)
/* 803F6350 003F3290  EC 42 F0 28 */	fsubs f2, f2, f30
/* 803F6354 003F3294  EC 22 00 72 */	fmuls f1, f2, f1
/* 803F6358 003F3298  EC 00 0F BA */	fmadds f0, f0, f30, f1
/* 803F635C 003F329C  D0 1D 00 9C */	stfs f0, 0x9c(r29)
/* 803F6360 003F32A0  C3 DF 00 10 */	lfs f30, 0x10(r31)
/* 803F6364 003F32A4  48 01 56 95 */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F6368 003F32A8  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F636C 003F32AC  7F A3 EB 78 */	mr r3, r29
/* 803F6370 003F32B0  C0 1D 00 A0 */	lfs f0, 0xa0(r29)
/* 803F6374 003F32B4  7F C4 F3 78 */	mr r4, r30
/* 803F6378 003F32B8  EC 42 F0 28 */	fsubs f2, f2, f30
/* 803F637C 003F32BC  EC 22 00 72 */	fmuls f1, f2, f1
/* 803F6380 003F32C0  EC 00 0F BA */	fmadds f0, f0, f30, f1
/* 803F6384 003F32C4  D0 1D 00 A0 */	stfs f0, 0xa0(r29)
/* 803F6388 003F32C8  4B FF F9 49 */	bl rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
/* 803F638C 003F32CC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803F6390 003F32D0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803F6394 003F32D4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803F6398 003F32D8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803F639C 003F32DC  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 803F63A0 003F32E0  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 803F63A4 003F32E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803F63A8 003F32E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803F63AC 003F32EC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803F63B0 003F32F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803F63B4 003F32F4  7C 08 03 A6 */	mtlr r0
/* 803F63B8 003F32F8  38 21 00 50 */	addi r1, r1, 0x50
/* 803F63BC 003F32FC  4E 80 00 20 */	blr 
.endfn postureControl__Q32kh6Screen8WorldMapFP7J2DPane

.fn changeState__Q32kh6Screen8WorldMapFv, global
/* 803F63C0 003F3300  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803F63C4 003F3304  7C 08 02 A6 */	mflr r0
/* 803F63C8 003F3308  90 01 00 54 */	stw r0, 0x54(r1)
/* 803F63CC 003F330C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803F63D0 003F3310  3B E0 00 00 */	li r31, 0
/* 803F63D4 003F3314  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803F63D8 003F3318  7C 7E 1B 78 */	mr r30, r3
/* 803F63DC 003F331C  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803F63E0 003F3320  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 803F63E4 003F3324  54 60 04 E7 */	rlwinm. r0, r3, 0, 0x13, 0x13
/* 803F63E8 003F3328  41 82 00 B4 */	beq .L_803F649C
/* 803F63EC 003F332C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F63F0 003F3330  80 63 00 18 */	lwz r3, 0x18(r3)
/* 803F63F4 003F3334  81 83 00 00 */	lwz r12, 0(r3)
/* 803F63F8 003F3338  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803F63FC 003F333C  7D 89 03 A6 */	mtctr r12
/* 803F6400 003F3340  4E 80 04 21 */	bctrl 
/* 803F6404 003F3344  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 803F6408 003F3348  39 00 00 00 */	li r8, 0
/* 803F640C 003F334C  39 23 11 48 */	addi r9, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 803F6410 003F3350  38 00 00 B4 */	li r0, 0xb4
/* 803F6414 003F3354  98 01 00 38 */	stb r0, 0x38(r1)
/* 803F6418 003F3358  3C E0 80 4E */	lis r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
/* 803F641C 003F335C  3C 80 30 5F */	lis r4, 0x305F3030@ha
/* 803F6420 003F3360  3C 60 00 34 */	lis r3, 0x00343731@ha
/* 803F6424 003F3364  38 A3 37 31 */	addi r5, r3, 0x00343731@l
/* 803F6428 003F3368  3C 60 31 5F */	lis r3, 0x315F3030@ha
/* 803F642C 003F336C  38 C4 30 30 */	addi r6, r4, 0x305F3030@l
/* 803F6430 003F3370  91 21 00 18 */	stw r9, 0x18(r1)
/* 803F6434 003F3374  38 E7 9E 08 */	addi r7, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
/* 803F6438 003F3378  38 03 30 30 */	addi r0, r3, 0x315F3030@l
/* 803F643C 003F337C  91 01 00 1C */	stw r8, 0x1c(r1)
/* 803F6440 003F3380  38 81 00 18 */	addi r4, r1, 0x18
/* 803F6444 003F3384  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F6448 003F3388  90 E1 00 18 */	stw r7, 0x18(r1)
/* 803F644C 003F338C  91 01 00 20 */	stw r8, 0x20(r1)
/* 803F6450 003F3390  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 803F6454 003F3394  90 A1 00 28 */	stw r5, 0x28(r1)
/* 803F6458 003F3398  90 01 00 34 */	stw r0, 0x34(r1)
/* 803F645C 003F339C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 803F6460 003F33A0  99 01 00 39 */	stb r8, 0x39(r1)
/* 803F6464 003F33A4  99 01 00 38 */	stb r8, 0x38(r1)
/* 803F6468 003F33A8  48 00 6B F1 */	bl open_WorldMapInfoWin0__Q26Screen9Game2DMgrFRQ32og6Screen26DispMemberWorldMapInfoWin0
/* 803F646C 003F33AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F6470 003F33B0  41 82 01 64 */	beq .L_803F65D4
/* 803F6474 003F33B4  38 00 00 08 */	li r0, 8
/* 803F6478 003F33B8  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803F647C 003F33BC  48 07 8C 75 */	bl PSMGetWorldMapRocket__Fv
/* 803F6480 003F33C0  38 80 00 06 */	li r4, 6
/* 803F6484 003F33C4  48 07 74 41 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F6488 003F33C8  80 1E 01 7C */	lwz r0, 0x17c(r30)
/* 803F648C 003F33CC  3B E0 00 01 */	li r31, 1
/* 803F6490 003F33D0  60 00 00 30 */	ori r0, r0, 0x30
/* 803F6494 003F33D4  90 1E 01 7C */	stw r0, 0x17c(r30)
/* 803F6498 003F33D8  48 00 01 3C */	b .L_803F65D4
.L_803F649C:
/* 803F649C 003F33DC  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 803F64A0 003F33E0  41 82 00 88 */	beq .L_803F6528
/* 803F64A4 003F33E4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F64A8 003F33E8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 803F64AC 003F33EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F64B0 003F33F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803F64B4 003F33F4  7D 89 03 A6 */	mtctr r12
/* 803F64B8 003F33F8  4E 80 04 21 */	bctrl 
/* 803F64BC 003F33FC  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 803F64C0 003F3400  38 A0 00 00 */	li r5, 0
/* 803F64C4 003F3404  38 83 11 48 */	addi r4, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 803F64C8 003F3408  38 00 00 B4 */	li r0, 0xb4
/* 803F64CC 003F340C  98 01 00 14 */	stb r0, 0x14(r1)
/* 803F64D0 003F3410  3C 60 80 4E */	lis r3, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@ha
/* 803F64D4 003F3414  38 03 9F 38 */	addi r0, r3, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@l
/* 803F64D8 003F3418  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 803F64DC 003F341C  90 81 00 08 */	stw r4, 8(r1)
/* 803F64E0 003F3420  38 81 00 08 */	addi r4, r1, 8
/* 803F64E4 003F3424  90 A1 00 0C */	stw r5, 0xc(r1)
/* 803F64E8 003F3428  90 01 00 08 */	stw r0, 8(r1)
/* 803F64EC 003F342C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803F64F0 003F3430  98 A1 00 14 */	stb r5, 0x14(r1)
/* 803F64F4 003F3434  48 00 6C 89 */	bl open_WorldMapInfoWin1__Q26Screen9Game2DMgrFRQ32og6Screen26DispMemberWorldMapInfoWin1
/* 803F64F8 003F3438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F64FC 003F343C  41 82 00 D8 */	beq .L_803F65D4
/* 803F6500 003F3440  38 00 00 09 */	li r0, 9
/* 803F6504 003F3444  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803F6508 003F3448  48 07 8B E9 */	bl PSMGetWorldMapRocket__Fv
/* 803F650C 003F344C  38 80 00 06 */	li r4, 6
/* 803F6510 003F3450  48 07 73 B5 */	bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
/* 803F6514 003F3454  80 1E 01 7C */	lwz r0, 0x17c(r30)
/* 803F6518 003F3458  3B E0 00 01 */	li r31, 1
/* 803F651C 003F345C  60 00 00 30 */	ori r0, r0, 0x30
/* 803F6520 003F3460  90 1E 01 7C */	stw r0, 0x17c(r30)
/* 803F6524 003F3464  48 00 00 B0 */	b .L_803F65D4
.L_803F6528:
/* 803F6528 003F3468  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 803F652C 003F346C  41 82 00 24 */	beq .L_803F6550
/* 803F6530 003F3470  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803F6534 003F3474  38 80 18 1F */	li r4, 0x181f
/* 803F6538 003F3478  38 A0 00 00 */	li r5, 0
/* 803F653C 003F347C  4B F4 20 F5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803F6540 003F3480  38 00 00 07 */	li r0, 7
/* 803F6544 003F3484  3B E0 00 01 */	li r31, 1
/* 803F6548 003F3488  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803F654C 003F348C  48 00 00 88 */	b .L_803F65D4
.L_803F6550:
/* 803F6550 003F3490  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 803F6554 003F3494  41 82 00 24 */	beq .L_803F6578
/* 803F6558 003F3498  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803F655C 003F349C  38 80 18 1F */	li r4, 0x181f
/* 803F6560 003F34A0  38 A0 00 00 */	li r5, 0
/* 803F6564 003F34A4  4B F4 20 CD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803F6568 003F34A8  38 00 00 06 */	li r0, 6
/* 803F656C 003F34AC  3B E0 00 01 */	li r31, 1
/* 803F6570 003F34B0  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803F6574 003F34B4  48 00 00 60 */	b .L_803F65D4
.L_803F6578:
/* 803F6578 003F34B8  C0 24 00 50 */	lfs f1, 0x50(r4)
/* 803F657C 003F34BC  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F6580 003F34C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F6584 003F34C4  41 81 00 10 */	bgt .L_803F6594
/* 803F6588 003F34C8  80 04 00 18 */	lwz r0, 0x18(r4)
/* 803F658C 003F34CC  54 00 07 3F */	clrlwi. r0, r0, 0x1c
/* 803F6590 003F34D0  41 82 00 3C */	beq .L_803F65CC
.L_803F6594:
/* 803F6594 003F34D4  88 7E 01 80 */	lbz r3, 0x180(r30)
/* 803F6598 003F34D8  28 03 00 00 */	cmplwi r3, 0
/* 803F659C 003F34DC  40 82 00 24 */	bne .L_803F65C0
/* 803F65A0 003F34E0  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F65A4 003F34E4  38 00 00 05 */	li r0, 5
/* 803F65A8 003F34E8  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F65AC 003F34EC  3B E0 00 01 */	li r31, 1
/* 803F65B0 003F34F0  88 63 00 78 */	lbz r3, 0x78(r3)
/* 803F65B4 003F34F4  98 7E 01 80 */	stb r3, 0x180(r30)
/* 803F65B8 003F34F8  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803F65BC 003F34FC  48 00 00 18 */	b .L_803F65D4
.L_803F65C0:
/* 803F65C0 003F3500  38 03 FF FF */	addi r0, r3, -1
/* 803F65C4 003F3504  98 1E 01 80 */	stb r0, 0x180(r30)
/* 803F65C8 003F3508  48 00 00 0C */	b .L_803F65D4
.L_803F65CC:
/* 803F65CC 003F350C  38 00 00 00 */	li r0, 0
/* 803F65D0 003F3510  98 1E 01 80 */	stb r0, 0x180(r30)
.L_803F65D4:
/* 803F65D4 003F3514  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803F65D8 003F3518  7F E3 FB 78 */	mr r3, r31
/* 803F65DC 003F351C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803F65E0 003F3520  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803F65E4 003F3524  7C 08 03 A6 */	mtlr r0
/* 803F65E8 003F3528  38 21 00 50 */	addi r1, r1, 0x50
/* 803F65EC 003F352C  4E 80 00 20 */	blr 
.endfn changeState__Q32kh6Screen8WorldMapFv

.fn tag2num__Q32kh6Screen8WorldMapFUx, global
/* 803F65F0 003F3530  3C 60 00 01 */	lis r3, 0x0000FF00@ha
/* 803F65F4 003F3534  38 00 00 FF */	li r0, 0xff
/* 803F65F8 003F3538  38 80 00 00 */	li r4, 0
/* 803F65FC 003F353C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F6600 003F3540  7C CA 00 38 */	and r10, r6, r0
/* 803F6604 003F3544  38 63 FF 00 */	addi r3, r3, 0x0000FF00@l
/* 803F6608 003F3548  7C A8 20 38 */	and r8, r5, r4
/* 803F660C 003F354C  3C 00 00 FF */	lis r0, 0xff
/* 803F6610 003F3550  7C C4 18 38 */	and r4, r6, r3
/* 803F6614 003F3554  7C AA 00 D0 */	neg r5, r10
/* 803F6618 003F3558  7C C3 00 38 */	and r3, r6, r0
/* 803F661C 003F355C  3C 00 43 30 */	lis r0, 0x4330
/* 803F6620 003F3560  7C A7 53 78 */	or r7, r5, r10
/* 803F6624 003F3564  54 86 C0 3E */	rotlwi r6, r4, 0x18
/* 803F6628 003F3568  51 06 C0 0E */	rlwimi r6, r8, 0x18, 0, 7
/* 803F662C 003F356C  54 65 80 3E */	rotlwi r5, r3, 0x10
/* 803F6630 003F3570  7C 86 00 D0 */	neg r4, r6
/* 803F6634 003F3574  7C E9 FE 70 */	srawi r9, r7, 0x1f
/* 803F6638 003F3578  7C 83 33 78 */	or r3, r4, r6
/* 803F663C 003F357C  51 05 80 1E */	rlwimi r5, r8, 0x10, 0, 0xf
/* 803F6640 003F3580  7C 85 00 D0 */	neg r4, r5
/* 803F6644 003F3584  38 C6 FF D0 */	addi r6, r6, -48
/* 803F6648 003F3588  7C 67 FE 70 */	srawi r7, r3, 0x1f
/* 803F664C 003F358C  38 65 FF D0 */	addi r3, r5, -48
/* 803F6650 003F3590  7C 84 2B 78 */	or r4, r4, r5
/* 803F6654 003F3594  90 01 00 08 */	stw r0, 8(r1)
/* 803F6658 003F3598  7C 80 FE 70 */	srawi r0, r4, 0x1f
/* 803F665C 003F359C  39 0A FF D0 */	addi r8, r10, -48
/* 803F6660 003F35A0  7C 63 00 38 */	and r3, r3, r0
/* 803F6664 003F35A4  7C C6 38 38 */	and r6, r6, r7
/* 803F6668 003F35A8  1C 06 00 0A */	mulli r0, r6, 0xa
/* 803F666C 003F35AC  7D 05 48 38 */	and r5, r8, r9
/* 803F6670 003F35B0  C8 42 1B E0 */	lfd f2, lbl_8051FF40@sda21(r2)
/* 803F6674 003F35B4  C0 62 1B D0 */	lfs f3, lbl_8051FF30@sda21(r2)
/* 803F6678 003F35B8  1C 63 00 64 */	mulli r3, r3, 0x64
/* 803F667C 003F35BC  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F6680 003F35C0  7C 00 2A 14 */	add r0, r0, r5
/* 803F6684 003F35C4  7C 03 02 14 */	add r0, r3, r0
/* 803F6688 003F35C8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803F668C 003F35CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 803F6690 003F35D0  C8 21 00 08 */	lfd f1, 8(r1)
/* 803F6694 003F35D4  EC 21 10 28 */	fsubs f1, f1, f2
/* 803F6698 003F35D8  EC 23 00 72 */	fmuls f1, f3, f1
/* 803F669C 003F35DC  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803F66A0 003F35E0  40 82 00 08 */	bne .L_803F66A8
/* 803F66A4 003F35E4  C0 22 1C 04 */	lfs f1, lbl_8051FF64@sda21(r2)
.L_803F66A8:
/* 803F66A8 003F35E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803F66AC 003F35EC  4E 80 00 20 */	blr 
.endfn tag2num__Q32kh6Screen8WorldMapFUx

.fn finish__Q32kh6Screen8WorldMapFv, global
/* 803F66B0 003F35F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803F66B4 003F35F4  7C 08 02 A6 */	mflr r0
/* 803F66B8 003F35F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803F66BC 003F35FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803F66C0 003F3600  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803F66C4 003F3604  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803F66C8 003F3608  7C 7D 1B 78 */	mr r29, r3
/* 803F66CC 003F360C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 803F66D0 003F3610  81 83 00 00 */	lwz r12, 0(r3)
/* 803F66D4 003F3614  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803F66D8 003F3618  7D 89 03 A6 */	mtctr r12
/* 803F66DC 003F361C  4E 80 04 21 */	bctrl 
/* 803F66E0 003F3620  80 7D 00 C4 */	lwz r3, 0xc4(r29)
/* 803F66E4 003F3624  81 83 00 00 */	lwz r12, 0(r3)
/* 803F66E8 003F3628  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803F66EC 003F362C  7D 89 03 A6 */	mtctr r12
/* 803F66F0 003F3630  4E 80 04 21 */	bctrl 
/* 803F66F4 003F3634  3B C0 00 00 */	li r30, 0
/* 803F66F8 003F3638  3B E0 00 00 */	li r31, 0
/* 803F66FC 003F363C  48 00 00 18 */	b .L_803F6714
.L_803F6700:
/* 803F6700 003F3640  80 1D 00 F0 */	lwz r0, 0xf0(r29)
/* 803F6704 003F3644  7C 60 FA 14 */	add r3, r0, r31
/* 803F6708 003F3648  48 00 19 BD */	bl kill__Q42kh6Screen8WorldMap13OnyonDynamicsFv
/* 803F670C 003F364C  3B FF 00 34 */	addi r31, r31, 0x34
/* 803F6710 003F3650  3B DE 00 01 */	addi r30, r30, 1
.L_803F6714:
/* 803F6714 003F3654  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 803F6718 003F3658  7C 1E 00 00 */	cmpw r30, r0
/* 803F671C 003F365C  41 80 FF E4 */	blt .L_803F6700
/* 803F6720 003F3660  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803F6724 003F3664  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803F6728 003F3668  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803F672C 003F366C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803F6730 003F3670  7C 08 03 A6 */	mtlr r0
/* 803F6734 003F3674  38 21 00 20 */	addi r1, r1, 0x20
/* 803F6738 003F3678  4E 80 00 20 */	blr 
.endfn finish__Q32kh6Screen8WorldMapFv

.fn newMapOpen__Q32kh6Screen8WorldMapFv, global
/* 803F673C 003F367C  38 00 00 03 */	li r0, 3
/* 803F6740 003F3680  38 E0 00 01 */	li r7, 1
/* 803F6744 003F3684  38 80 00 01 */	li r4, 1
/* 803F6748 003F3688  7C 09 03 A6 */	mtctr r0
.L_803F674C:
/* 803F674C 003F368C  88 A3 01 82 */	lbz r5, 0x182(r3)
/* 803F6750 003F3690  7C 86 38 30 */	slw r6, r4, r7
/* 803F6754 003F3694  7C A0 30 39 */	and. r0, r5, r6
/* 803F6758 003F3698  41 82 00 50 */	beq .L_803F67A8
/* 803F675C 003F369C  3C 80 80 49 */	lis r4, cOpenMinFrm__Q22kh6Screen@ha
/* 803F6760 003F36A0  7C A6 30 78 */	andc r6, r5, r6
/* 803F6764 003F36A4  38 04 7C 80 */	addi r0, r4, cOpenMinFrm__Q22kh6Screen@l
/* 803F6768 003F36A8  54 E7 10 3A */	slwi r7, r7, 2
/* 803F676C 003F36AC  7C A0 3A 14 */	add r5, r0, r7
/* 803F6770 003F36B0  3C 80 80 49 */	lis r4, cOpenMaxFrm__Q22kh6Screen@ha
/* 803F6774 003F36B4  38 04 7C 90 */	addi r0, r4, cOpenMaxFrm__Q22kh6Screen@l
/* 803F6778 003F36B8  98 C3 01 82 */	stb r6, 0x182(r3)
/* 803F677C 003F36BC  7C 80 3A 14 */	add r4, r0, r7
/* 803F6780 003F36C0  C0 25 FF FC */	lfs f1, -4(r5)
/* 803F6784 003F36C4  C0 04 FF FC */	lfs f0, -4(r4)
/* 803F6788 003F36C8  38 00 00 00 */	li r0, 0
/* 803F678C 003F36CC  D0 23 00 94 */	stfs f1, 0x94(r3)
/* 803F6790 003F36D0  D0 03 00 90 */	stfs f0, 0x90(r3)
/* 803F6794 003F36D4  C0 03 00 94 */	lfs f0, 0x94(r3)
/* 803F6798 003F36D8  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 803F679C 003F36DC  90 03 01 74 */	stw r0, 0x174(r3)
/* 803F67A0 003F36E0  38 60 00 01 */	li r3, 1
/* 803F67A4 003F36E4  4E 80 00 20 */	blr 
.L_803F67A8:
/* 803F67A8 003F36E8  38 E7 00 01 */	addi r7, r7, 1
/* 803F67AC 003F36EC  42 00 FF A0 */	bdnz .L_803F674C
/* 803F67B0 003F36F0  38 60 00 00 */	li r3, 0
/* 803F67B4 003F36F4  4E 80 00 20 */	blr 
.endfn newMapOpen__Q32kh6Screen8WorldMapFv

.fn getTarget__Q32kh6Screen8WorldMapFv, global
/* 803F67B8 003F36F8  80 83 00 F8 */	lwz r4, 0xf8(r3)
/* 803F67BC 003F36FC  38 00 FF FF */	li r0, -1
/* 803F67C0 003F3700  2C 04 00 02 */	cmpwi r4, 2
/* 803F67C4 003F3704  41 82 00 A8 */	beq .L_803F686C
/* 803F67C8 003F3708  40 80 00 14 */	bge .L_803F67DC
/* 803F67CC 003F370C  2C 04 00 00 */	cmpwi r4, 0
/* 803F67D0 003F3710  41 82 00 18 */	beq .L_803F67E8
/* 803F67D4 003F3714  40 80 00 4C */	bge .L_803F6820
/* 803F67D8 003F3718  48 00 01 14 */	b .L_803F68EC
.L_803F67DC:
/* 803F67DC 003F371C  2C 04 00 04 */	cmpwi r4, 4
/* 803F67E0 003F3720  40 80 01 0C */	bge .L_803F68EC
/* 803F67E4 003F3724  48 00 00 D4 */	b .L_803F68B8
.L_803F67E8:
/* 803F67E8 003F3728  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803F67EC 003F372C  3C 60 02 00 */	lis r3, 0x02000002@ha
/* 803F67F0 003F3730  38 63 00 02 */	addi r3, r3, 0x02000002@l
/* 803F67F4 003F3734  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803F67F8 003F3738  7C 83 18 39 */	and. r3, r4, r3
/* 803F67FC 003F373C  41 82 00 0C */	beq .L_803F6808
/* 803F6800 003F3740  38 00 00 01 */	li r0, 1
/* 803F6804 003F3744  48 00 00 E8 */	b .L_803F68EC
.L_803F6808:
/* 803F6808 003F3748  3C 60 08 00 */	lis r3, 0x08000008@ha
/* 803F680C 003F374C  38 63 00 08 */	addi r3, r3, 0x08000008@l
/* 803F6810 003F3750  7C 83 18 39 */	and. r3, r4, r3
/* 803F6814 003F3754  41 82 00 D8 */	beq .L_803F68EC
/* 803F6818 003F3758  38 00 00 02 */	li r0, 2
/* 803F681C 003F375C  48 00 00 D0 */	b .L_803F68EC
.L_803F6820:
/* 803F6820 003F3760  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 803F6824 003F3764  3C 80 01 00 */	lis r4, 0x01000001@ha
/* 803F6828 003F3768  38 84 00 01 */	addi r4, r4, 0x01000001@l
/* 803F682C 003F376C  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 803F6830 003F3770  7C A4 20 39 */	and. r4, r5, r4
/* 803F6834 003F3774  41 82 00 0C */	beq .L_803F6840
/* 803F6838 003F3778  38 00 00 00 */	li r0, 0
/* 803F683C 003F377C  48 00 00 B0 */	b .L_803F68EC
.L_803F6840:
/* 803F6840 003F3780  3C 80 08 00 */	lis r4, 0x08000008@ha
/* 803F6844 003F3784  38 84 00 08 */	addi r4, r4, 0x08000008@l
/* 803F6848 003F3788  7C A4 20 39 */	and. r4, r5, r4
/* 803F684C 003F378C  41 82 00 A0 */	beq .L_803F68EC
/* 803F6850 003F3790  88 83 01 81 */	lbz r4, 0x181(r3)
/* 803F6854 003F3794  38 64 FF FD */	addi r3, r4, -3
/* 803F6858 003F3798  20 04 00 03 */	subfic r0, r4, 3
/* 803F685C 003F379C  7C 60 00 F8 */	nor r0, r3, r0
/* 803F6860 003F37A0  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 803F6864 003F37A4  38 03 00 03 */	addi r0, r3, 3
/* 803F6868 003F37A8  48 00 00 84 */	b .L_803F68EC
.L_803F686C:
/* 803F686C 003F37AC  80 A3 00 20 */	lwz r5, 0x20(r3)
/* 803F6870 003F37B0  3C 80 02 00 */	lis r4, 0x02000002@ha
/* 803F6874 003F37B4  38 84 00 02 */	addi r4, r4, 0x02000002@l
/* 803F6878 003F37B8  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 803F687C 003F37BC  7C A4 20 39 */	and. r4, r5, r4
/* 803F6880 003F37C0  41 82 00 20 */	beq .L_803F68A0
/* 803F6884 003F37C4  88 03 01 81 */	lbz r0, 0x181(r3)
/* 803F6888 003F37C8  38 60 00 03 */	li r3, 3
/* 803F688C 003F37CC  28 00 00 03 */	cmplwi r0, 3
/* 803F6890 003F37D0  40 82 00 08 */	bne .L_803F6898
/* 803F6894 003F37D4  38 60 00 01 */	li r3, 1
.L_803F6898:
/* 803F6898 003F37D8  7C 60 1B 78 */	mr r0, r3
/* 803F689C 003F37DC  48 00 00 50 */	b .L_803F68EC
.L_803F68A0:
/* 803F68A0 003F37E0  3C 60 04 00 */	lis r3, 0x04000004@ha
/* 803F68A4 003F37E4  38 63 00 04 */	addi r3, r3, 0x04000004@l
/* 803F68A8 003F37E8  7C A3 18 39 */	and. r3, r5, r3
/* 803F68AC 003F37EC  41 82 00 40 */	beq .L_803F68EC
/* 803F68B0 003F37F0  38 00 00 00 */	li r0, 0
/* 803F68B4 003F37F4  48 00 00 38 */	b .L_803F68EC
.L_803F68B8:
/* 803F68B8 003F37F8  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803F68BC 003F37FC  3C 60 01 00 */	lis r3, 0x01000001@ha
/* 803F68C0 003F3800  38 63 00 01 */	addi r3, r3, 0x01000001@l
/* 803F68C4 003F3804  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803F68C8 003F3808  7C 83 18 39 */	and. r3, r4, r3
/* 803F68CC 003F380C  41 82 00 0C */	beq .L_803F68D8
/* 803F68D0 003F3810  38 00 00 02 */	li r0, 2
/* 803F68D4 003F3814  48 00 00 18 */	b .L_803F68EC
.L_803F68D8:
/* 803F68D8 003F3818  3C 60 04 00 */	lis r3, 0x04000004@ha
/* 803F68DC 003F381C  38 63 00 04 */	addi r3, r3, 0x04000004@l
/* 803F68E0 003F3820  7C 83 18 39 */	and. r3, r4, r3
/* 803F68E4 003F3824  41 82 00 08 */	beq .L_803F68EC
/* 803F68E8 003F3828  38 00 00 01 */	li r0, 1
.L_803F68EC:
/* 803F68EC 003F382C  7C 03 03 78 */	mr r3, r0
/* 803F68F0 003F3830  4E 80 00 20 */	blr 
.endfn getTarget__Q32kh6Screen8WorldMapFv

.fn "getRotDir__Q32kh6Screen8WorldMapFRCQ29JGeometry8TVec2<f>f", global
/* 803F68F4 003F3834  C0 64 00 00 */	lfs f3, 0(r4)
/* 803F68F8 003F3838  C0 42 1B 94 */	lfs f2, lbl_8051FEF4@sda21(r2)
/* 803F68FC 003F383C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 803F6900 003F3840  4C 41 13 82 */	cror 2, 1, 2
/* 803F6904 003F3844  40 82 00 4C */	bne .L_803F6950
/* 803F6908 003F3848  C0 03 00 AC */	lfs f0, 0xac(r3)
/* 803F690C 003F384C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803F6910 003F3850  4C 41 13 82 */	cror 2, 1, 2
/* 803F6914 003F3854  40 82 00 3C */	bne .L_803F6950
/* 803F6918 003F3858  C0 64 00 04 */	lfs f3, 4(r4)
/* 803F691C 003F385C  FC 00 08 50 */	fneg f0, f1
/* 803F6920 003F3860  C0 43 00 B0 */	lfs f2, 0xb0(r3)
/* 803F6924 003F3864  EC 43 10 28 */	fsubs f2, f3, f2
/* 803F6928 003F3868  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F692C 003F386C  40 80 00 0C */	bge .L_803F6938
/* 803F6930 003F3870  38 00 00 01 */	li r0, 1
/* 803F6934 003F3874  48 00 01 24 */	b .L_803F6A58
.L_803F6938:
/* 803F6938 003F3878  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803F693C 003F387C  40 81 00 0C */	ble .L_803F6948
/* 803F6940 003F3880  38 00 00 02 */	li r0, 2
/* 803F6944 003F3884  48 00 01 14 */	b .L_803F6A58
.L_803F6948:
/* 803F6948 003F3888  38 00 00 00 */	li r0, 0
/* 803F694C 003F388C  48 00 01 0C */	b .L_803F6A58
.L_803F6950:
/* 803F6950 003F3890  C0 42 1B 94 */	lfs f2, lbl_8051FEF4@sda21(r2)
/* 803F6954 003F3894  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 803F6958 003F3898  40 80 00 48 */	bge .L_803F69A0
/* 803F695C 003F389C  C0 03 00 AC */	lfs f0, 0xac(r3)
/* 803F6960 003F38A0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803F6964 003F38A4  40 80 00 3C */	bge .L_803F69A0
/* 803F6968 003F38A8  C0 64 00 04 */	lfs f3, 4(r4)
/* 803F696C 003F38AC  FC 00 08 50 */	fneg f0, f1
/* 803F6970 003F38B0  C0 43 00 B0 */	lfs f2, 0xb0(r3)
/* 803F6974 003F38B4  EC 43 10 28 */	fsubs f2, f3, f2
/* 803F6978 003F38B8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F697C 003F38BC  40 80 00 0C */	bge .L_803F6988
/* 803F6980 003F38C0  38 00 00 02 */	li r0, 2
/* 803F6984 003F38C4  48 00 00 D4 */	b .L_803F6A58
.L_803F6988:
/* 803F6988 003F38C8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803F698C 003F38CC  40 81 00 0C */	ble .L_803F6998
/* 803F6990 003F38D0  38 00 00 01 */	li r0, 1
/* 803F6994 003F38D4  48 00 00 C4 */	b .L_803F6A58
.L_803F6998:
/* 803F6998 003F38D8  38 00 00 00 */	li r0, 0
/* 803F699C 003F38DC  48 00 00 BC */	b .L_803F6A58
.L_803F69A0:
/* 803F69A0 003F38E0  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F69A4 003F38E4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803F69A8 003F38E8  40 80 00 60 */	bge .L_803F6A08
/* 803F69AC 003F38EC  C0 83 00 AC */	lfs f4, 0xac(r3)
/* 803F69B0 003F38F0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803F69B4 003F38F4  4C 41 13 82 */	cror 2, 1, 2
/* 803F69B8 003F38F8  40 82 00 50 */	bne .L_803F6A08
/* 803F69BC 003F38FC  C0 A4 00 04 */	lfs f5, 4(r4)
/* 803F69C0 003F3900  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803F69C4 003F3904  40 81 00 1C */	ble .L_803F69E0
/* 803F69C8 003F3908  EC 43 20 28 */	fsubs f2, f3, f4
/* 803F69CC 003F390C  FC 00 08 50 */	fneg f0, f1
/* 803F69D0 003F3910  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F69D4 003F3914  40 80 00 0C */	bge .L_803F69E0
/* 803F69D8 003F3918  38 00 00 02 */	li r0, 2
/* 803F69DC 003F391C  48 00 00 7C */	b .L_803F6A58
.L_803F69E0:
/* 803F69E0 003F3920  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F69E4 003F3924  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803F69E8 003F3928  40 80 00 18 */	bge .L_803F6A00
/* 803F69EC 003F392C  EC 03 20 28 */	fsubs f0, f3, f4
/* 803F69F0 003F3930  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803F69F4 003F3934  40 81 00 0C */	ble .L_803F6A00
/* 803F69F8 003F3938  38 00 00 01 */	li r0, 1
/* 803F69FC 003F393C  48 00 00 5C */	b .L_803F6A58
.L_803F6A00:
/* 803F6A00 003F3940  38 00 00 00 */	li r0, 0
/* 803F6A04 003F3944  48 00 00 54 */	b .L_803F6A58
.L_803F6A08:
/* 803F6A08 003F3948  C0 44 00 04 */	lfs f2, 4(r4)
/* 803F6A0C 003F394C  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F6A10 003F3950  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F6A14 003F3954  40 81 00 1C */	ble .L_803F6A30
/* 803F6A18 003F3958  C0 03 00 AC */	lfs f0, 0xac(r3)
/* 803F6A1C 003F395C  EC 03 00 28 */	fsubs f0, f3, f0
/* 803F6A20 003F3960  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803F6A24 003F3964  40 81 00 0C */	ble .L_803F6A30
/* 803F6A28 003F3968  38 00 00 01 */	li r0, 1
/* 803F6A2C 003F396C  48 00 00 2C */	b .L_803F6A58
.L_803F6A30:
/* 803F6A30 003F3970  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F6A34 003F3974  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F6A38 003F3978  40 80 00 1C */	bge .L_803F6A54
/* 803F6A3C 003F397C  C0 03 00 AC */	lfs f0, 0xac(r3)
/* 803F6A40 003F3980  EC 03 00 28 */	fsubs f0, f3, f0
/* 803F6A44 003F3984  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803F6A48 003F3988  40 81 00 0C */	ble .L_803F6A54
/* 803F6A4C 003F398C  38 00 00 02 */	li r0, 2
/* 803F6A50 003F3990  48 00 00 08 */	b .L_803F6A58
.L_803F6A54:
/* 803F6A54 003F3994  38 00 00 00 */	li r0, 0
.L_803F6A58:
/* 803F6A58 003F3998  2C 00 00 00 */	cmpwi r0, 0
/* 803F6A5C 003F399C  4D 82 00 20 */	beqlr 
/* 803F6A60 003F39A0  90 03 01 78 */	stw r0, 0x178(r3)
/* 803F6A64 003F39A4  4E 80 00 20 */	blr 
.endfn "getRotDir__Q32kh6Screen8WorldMapFRCQ29JGeometry8TVec2<f>f"

.fn changeInfo__Q32kh6Screen8WorldMapFv, global
/* 803F6A68 003F39A8  94 21 FD E0 */	stwu r1, -0x220(r1)
/* 803F6A6C 003F39AC  7C 08 02 A6 */	mflr r0
/* 803F6A70 003F39B0  90 01 02 24 */	stw r0, 0x224(r1)
/* 803F6A74 003F39B4  DB E1 02 10 */	stfd f31, 0x210(r1)
/* 803F6A78 003F39B8  F3 E1 02 18 */	psq_st f31, 536(r1), 0, qr0
/* 803F6A7C 003F39BC  DB C1 02 00 */	stfd f30, 0x200(r1)
/* 803F6A80 003F39C0  F3 C1 02 08 */	psq_st f30, 520(r1), 0, qr0
/* 803F6A84 003F39C4  DB A1 01 F0 */	stfd f29, 0x1f0(r1)
/* 803F6A88 003F39C8  F3 A1 01 F8 */	psq_st f29, 504(r1), 0, qr0
/* 803F6A8C 003F39CC  DB 81 01 E0 */	stfd f28, 0x1e0(r1)
/* 803F6A90 003F39D0  F3 81 01 E8 */	psq_st f28, 488(r1), 0, qr0
/* 803F6A94 003F39D4  DB 61 01 D0 */	stfd f27, 0x1d0(r1)
/* 803F6A98 003F39D8  F3 61 01 D8 */	psq_st f27, 472(r1), 0, qr0
/* 803F6A9C 003F39DC  DB 41 01 C0 */	stfd f26, 0x1c0(r1)
/* 803F6AA0 003F39E0  F3 41 01 C8 */	psq_st f26, 456(r1), 0, qr0
/* 803F6AA4 003F39E4  DB 21 01 B0 */	stfd f25, 0x1b0(r1)
/* 803F6AA8 003F39E8  F3 21 01 B8 */	psq_st f25, 440(r1), 0, qr0
/* 803F6AAC 003F39EC  DB 01 01 A0 */	stfd f24, 0x1a0(r1)
/* 803F6AB0 003F39F0  F3 01 01 A8 */	psq_st f24, 424(r1), 0, qr0
/* 803F6AB4 003F39F4  DA E1 01 90 */	stfd f23, 0x190(r1)
/* 803F6AB8 003F39F8  F2 E1 01 98 */	psq_st f23, 408(r1), 0, qr0
/* 803F6ABC 003F39FC  DA C1 01 80 */	stfd f22, 0x180(r1)
/* 803F6AC0 003F3A00  F2 C1 01 88 */	psq_st f22, 392(r1), 0, qr0
/* 803F6AC4 003F3A04  BE 61 01 4C */	stmw r19, 0x14c(r1)
/* 803F6AC8 003F3A08  3C 80 80 49 */	lis r4, lbl_80497C70@ha
/* 803F6ACC 003F3A0C  3C A0 6E 61 */	lis r5, 0x6E616D65@ha
/* 803F6AD0 003F3A10  3A C4 7C 70 */	addi r22, r4, lbl_80497C70@l
/* 803F6AD4 003F3A14  3C 80 00 50 */	lis r4, 0x0050635F@ha
/* 803F6AD8 003F3A18  CB 56 03 F8 */	lfd f26, 0x3f8(r22)
/* 803F6ADC 003F3A1C  7C 7F 1B 78 */	mr r31, r3
/* 803F6AE0 003F3A20  CB 76 04 00 */	lfd f27, 0x400(r22)
/* 803F6AE4 003F3A24  38 01 01 20 */	addi r0, r1, 0x120
/* 803F6AE8 003F3A28  CB 96 04 08 */	lfd f28, 0x408(r22)
/* 803F6AEC 003F3A2C  39 41 01 00 */	addi r10, r1, 0x100
/* 803F6AF0 003F3A30  CB B6 04 10 */	lfd f29, 0x410(r22)
/* 803F6AF4 003F3A34  39 21 00 E0 */	addi r9, r1, 0xe0
/* 803F6AF8 003F3A38  CB D6 04 18 */	lfd f30, 0x418(r22)
/* 803F6AFC 003F3A3C  39 01 00 C0 */	addi r8, r1, 0xc0
/* 803F6B00 003F3A40  CB F6 04 20 */	lfd f31, 0x420(r22)
/* 803F6B04 003F3A44  38 E1 00 A0 */	addi r7, r1, 0xa0
/* 803F6B08 003F3A48  C9 B6 04 28 */	lfd f13, 0x428(r22)
/* 803F6B0C 003F3A4C  38 C5 6D 65 */	addi r6, r5, 0x6E616D65@l
/* 803F6B10 003F3A50  C9 96 04 30 */	lfd f12, 0x430(r22)
/* 803F6B14 003F3A54  38 A4 63 5F */	addi r5, r4, 0x0050635F@l
/* 803F6B18 003F3A58  C9 76 04 38 */	lfd f11, 0x438(r22)
/* 803F6B1C 003F3A5C  C9 56 04 40 */	lfd f10, 0x440(r22)
/* 803F6B20 003F3A60  C9 36 04 48 */	lfd f9, 0x448(r22)
/* 803F6B24 003F3A64  C9 16 04 50 */	lfd f8, 0x450(r22)
/* 803F6B28 003F3A68  C8 F6 04 58 */	lfd f7, 0x458(r22)
/* 803F6B2C 003F3A6C  C8 D6 04 60 */	lfd f6, 0x460(r22)
/* 803F6B30 003F3A70  C8 B6 04 68 */	lfd f5, 0x468(r22)
/* 803F6B34 003F3A74  C8 96 04 70 */	lfd f4, 0x470(r22)
/* 803F6B38 003F3A78  CA D6 03 D8 */	lfd f22, 0x3d8(r22)
/* 803F6B3C 003F3A7C  CA F6 03 E0 */	lfd f23, 0x3e0(r22)
/* 803F6B40 003F3A80  CB 16 03 E8 */	lfd f24, 0x3e8(r22)
/* 803F6B44 003F3A84  CB 36 03 F0 */	lfd f25, 0x3f0(r22)
/* 803F6B48 003F3A88  81 96 04 78 */	lwz r12, 0x478(r22)
/* 803F6B4C 003F3A8C  81 76 04 7C */	lwz r11, 0x47c(r22)
/* 803F6B50 003F3A90  80 96 04 80 */	lwz r4, 0x480(r22)
/* 803F6B54 003F3A94  80 76 04 84 */	lwz r3, 0x484(r22)
/* 803F6B58 003F3A98  91 81 00 4C */	stw r12, 0x4c(r1)
/* 803F6B5C 003F3A9C  C8 76 05 28 */	lfd f3, 0x528(r22)
/* 803F6B60 003F3AA0  91 61 00 50 */	stw r11, 0x50(r1)
/* 803F6B64 003F3AA4  C8 56 05 30 */	lfd f2, 0x530(r22)
/* 803F6B68 003F3AA8  90 81 00 54 */	stw r4, 0x54(r1)
/* 803F6B6C 003F3AAC  C8 36 05 38 */	lfd f1, 0x538(r22)
/* 803F6B70 003F3AB0  90 61 00 58 */	stw r3, 0x58(r1)
/* 803F6B74 003F3AB4  C8 16 05 40 */	lfd f0, 0x540(r22)
/* 803F6B78 003F3AB8  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 803F6B7C 003F3ABC  DB 61 01 08 */	stfd f27, 0x108(r1)
/* 803F6B80 003F3AC0  DB 81 01 10 */	stfd f28, 0x110(r1)
/* 803F6B84 003F3AC4  DB A1 01 18 */	stfd f29, 0x118(r1)
/* 803F6B88 003F3AC8  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 803F6B8C 003F3ACC  DB E1 00 E8 */	stfd f31, 0xe8(r1)
/* 803F6B90 003F3AD0  D9 A1 00 F0 */	stfd f13, 0xf0(r1)
/* 803F6B94 003F3AD4  D9 81 00 F8 */	stfd f12, 0xf8(r1)
/* 803F6B98 003F3AD8  D9 61 00 C0 */	stfd f11, 0xc0(r1)
/* 803F6B9C 003F3ADC  D9 41 00 C8 */	stfd f10, 0xc8(r1)
/* 803F6BA0 003F3AE0  D9 21 00 D0 */	stfd f9, 0xd0(r1)
/* 803F6BA4 003F3AE4  D9 01 00 D8 */	stfd f8, 0xd8(r1)
/* 803F6BA8 003F3AE8  D8 E1 00 A0 */	stfd f7, 0xa0(r1)
/* 803F6BAC 003F3AEC  D8 C1 00 A8 */	stfd f6, 0xa8(r1)
/* 803F6BB0 003F3AF0  D8 A1 00 B0 */	stfd f5, 0xb0(r1)
/* 803F6BB4 003F3AF4  D8 81 00 B8 */	stfd f4, 0xb8(r1)
/* 803F6BB8 003F3AF8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F6BBC 003F3AFC  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F6BC0 003F3B00  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6BC4 003F3B04  54 84 18 38 */	slwi r4, r4, 3
/* 803F6BC8 003F3B08  DA C1 01 20 */	stfd f22, 0x120(r1)
/* 803F6BCC 003F3B0C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F6BD0 003F3B10  7E 80 22 14 */	add r20, r0, r4
/* 803F6BD4 003F3B14  DA E1 01 28 */	stfd f23, 0x128(r1)
/* 803F6BD8 003F3B18  DB 01 01 30 */	stfd f24, 0x130(r1)
/* 803F6BDC 003F3B1C  DB 21 01 38 */	stfd f25, 0x138(r1)
/* 803F6BE0 003F3B20  82 74 00 00 */	lwz r19, 0(r20)
/* 803F6BE4 003F3B24  91 41 00 4C */	stw r10, 0x4c(r1)
/* 803F6BE8 003F3B28  82 94 00 04 */	lwz r20, 4(r20)
/* 803F6BEC 003F3B2C  91 21 00 50 */	stw r9, 0x50(r1)
/* 803F6BF0 003F3B30  91 01 00 54 */	stw r8, 0x54(r1)
/* 803F6BF4 003F3B34  90 E1 00 58 */	stw r7, 0x58(r1)
/* 803F6BF8 003F3B38  D8 61 00 80 */	stfd f3, 0x80(r1)
/* 803F6BFC 003F3B3C  D8 41 00 88 */	stfd f2, 0x88(r1)
/* 803F6C00 003F3B40  D8 21 00 90 */	stfd f1, 0x90(r1)
/* 803F6C04 003F3B44  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 803F6C08 003F3B48  7D 89 03 A6 */	mtctr r12
/* 803F6C0C 003F3B4C  4E 80 04 21 */	bctrl 
/* 803F6C10 003F3B50  92 83 00 1C */	stw r20, 0x1c(r3)
/* 803F6C14 003F3B54  92 63 00 18 */	stw r19, 0x18(r3)
/* 803F6C18 003F3B58  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F6C1C 003F3B5C  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F6C20 003F3B60  4B DF 16 41 */	bl getGroundOtakaraNum__Q24Game8PlayDataFi
/* 803F6C24 003F3B64  90 7F 01 2C */	stw r3, 0x12c(r31)
/* 803F6C28 003F3B68  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F6C2C 003F3B6C  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F6C30 003F3B70  4B DF 16 AD */	bl getGroundOtakaraMax__Q24Game8PlayDataFi
/* 803F6C34 003F3B74  90 7F 01 30 */	stw r3, 0x130(r31)
/* 803F6C38 003F3B78  3A 60 00 00 */	li r19, 0
/* 803F6C3C 003F3B7C  82 9F 01 58 */	lwz r20, 0x158(r31)
/* 803F6C40 003F3B80  9A 74 00 34 */	stb r19, 0x34(r20)
/* 803F6C44 003F3B84  7E 95 A3 78 */	mr r21, r20
.L_803F6C48:
/* 803F6C48 003F3B88  80 75 00 48 */	lwz r3, 0x48(r21)
/* 803F6C4C 003F3B8C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6C50 003F3B90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F6C54 003F3B94  7D 89 03 A6 */	mtctr r12
/* 803F6C58 003F3B98  4E 80 04 21 */	bctrl 
/* 803F6C5C 003F3B9C  3A 73 00 01 */	addi r19, r19, 1
/* 803F6C60 003F3BA0  3A B5 00 04 */	addi r21, r21, 4
/* 803F6C64 003F3BA4  2C 13 00 04 */	cmpwi r19, 4
/* 803F6C68 003F3BA8  41 80 FF E0 */	blt .L_803F6C48
/* 803F6C6C 003F3BAC  80 74 00 58 */	lwz r3, 0x58(r20)
/* 803F6C70 003F3BB0  38 80 00 00 */	li r4, 0
/* 803F6C74 003F3BB4  4B F1 4B 65 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 803F6C78 003F3BB8  80 74 00 5C */	lwz r3, 0x5c(r20)
/* 803F6C7C 003F3BBC  38 80 00 00 */	li r4, 0
/* 803F6C80 003F3BC0  4B F1 4B 59 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 803F6C84 003F3BC4  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 803F6C88 003F3BC8  82 7F 01 30 */	lwz r19, 0x130(r31)
/* 803F6C8C 003F3BCC  7C 00 98 40 */	cmplw r0, r19
/* 803F6C90 003F3BD0  40 82 00 F8 */	bne .L_803F6D88
/* 803F6C94 003F3BD4  82 9F 01 58 */	lwz r20, 0x158(r31)
/* 803F6C98 003F3BD8  3A E0 00 00 */	li r23, 0
/* 803F6C9C 003F3BDC  38 00 00 01 */	li r0, 1
/* 803F6CA0 003F3BE0  80 94 00 1C */	lwz r4, 0x1c(r20)
/* 803F6CA4 003F3BE4  88 64 00 00 */	lbz r3, 0(r4)
/* 803F6CA8 003F3BE8  98 74 00 20 */	stb r3, 0x20(r20)
/* 803F6CAC 003F3BEC  88 64 00 01 */	lbz r3, 1(r4)
/* 803F6CB0 003F3BF0  98 74 00 21 */	stb r3, 0x21(r20)
/* 803F6CB4 003F3BF4  88 64 00 02 */	lbz r3, 2(r4)
/* 803F6CB8 003F3BF8  98 74 00 22 */	stb r3, 0x22(r20)
/* 803F6CBC 003F3BFC  88 64 00 03 */	lbz r3, 3(r4)
/* 803F6CC0 003F3C00  98 74 00 23 */	stb r3, 0x23(r20)
/* 803F6CC4 003F3C04  92 F4 00 30 */	stw r23, 0x30(r20)
/* 803F6CC8 003F3C08  98 14 00 34 */	stb r0, 0x34(r20)
.L_803F6CCC:
/* 803F6CCC 003F3C0C  56 E3 0F FE */	srwi r3, r23, 0x1f
/* 803F6CD0 003F3C10  56 E0 07 FE */	clrlwi r0, r23, 0x1f
/* 803F6CD4 003F3C14  7C 00 1A 78 */	xor r0, r0, r3
/* 803F6CD8 003F3C18  7C 03 00 51 */	subf. r0, r3, r0
/* 803F6CDC 003F3C1C  41 82 00 0C */	beq .L_803F6CE8
/* 803F6CE0 003F3C20  28 13 00 0A */	cmplwi r19, 0xa
/* 803F6CE4 003F3C24  41 80 00 64 */	blt .L_803F6D48
.L_803F6CE8:
/* 803F6CE8 003F3C28  80 74 00 38 */	lwz r3, 0x38(r20)
/* 803F6CEC 003F3C2C  48 01 4D 0D */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F6CF0 003F3C30  FF E0 08 90 */	fmr f31, f1
/* 803F6CF4 003F3C34  80 74 00 38 */	lwz r3, 0x38(r20)
/* 803F6CF8 003F3C38  48 01 4C 15 */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F6CFC 003F3C3C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803F6D00 003F3C40  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803F6D04 003F3C44  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 803F6D08 003F3C48  38 81 00 34 */	addi r4, r1, 0x34
/* 803F6D0C 003F3C4C  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 803F6D10 003F3C50  80 A1 00 20 */	lwz r5, 0x20(r1)
/* 803F6D14 003F3C54  80 61 00 24 */	lwz r3, 0x24(r1)
/* 803F6D18 003F3C58  90 A1 00 18 */	stw r5, 0x18(r1)
/* 803F6D1C 003F3C5C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803F6D20 003F3C60  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803F6D24 003F3C64  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803F6D28 003F3C68  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803F6D2C 003F3C6C  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 803F6D30 003F3C70  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 803F6D34 003F3C74  80 74 00 48 */	lwz r3, 0x48(r20)
/* 803F6D38 003F3C78  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6D3C 003F3C7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F6D40 003F3C80  7D 89 03 A6 */	mtctr r12
/* 803F6D44 003F3C84  4E 80 04 21 */	bctrl 
.L_803F6D48:
/* 803F6D48 003F3C88  3A F7 00 01 */	addi r23, r23, 1
/* 803F6D4C 003F3C8C  3A 94 00 04 */	addi r20, r20, 4
/* 803F6D50 003F3C90  2C 17 00 04 */	cmpwi r23, 4
/* 803F6D54 003F3C94  41 80 FF 78 */	blt .L_803F6CCC
/* 803F6D58 003F3C98  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F6D5C 003F3C9C  3C A0 5F 66 */	lis r5, 0x5F666C30@ha
/* 803F6D60 003F3CA0  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F6D64 003F3CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6D68 003F3CA8  38 C5 6C 30 */	addi r6, r5, 0x5F666C30@l
/* 803F6D6C 003F3CAC  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F6D70 003F3CB0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F6D74 003F3CB4  7D 89 03 A6 */	mtctr r12
/* 803F6D78 003F3CB8  4E 80 04 21 */	bctrl 
/* 803F6D7C 003F3CBC  38 00 00 01 */	li r0, 1
/* 803F6D80 003F3CC0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F6D84 003F3CC4  48 00 00 7C */	b .L_803F6E00
.L_803F6D88:
/* 803F6D88 003F3CC8  82 9F 01 58 */	lwz r20, 0x158(r31)
/* 803F6D8C 003F3CCC  3A 60 00 00 */	li r19, 0
/* 803F6D90 003F3CD0  9A 74 00 34 */	stb r19, 0x34(r20)
/* 803F6D94 003F3CD4  7E 95 A3 78 */	mr r21, r20
.L_803F6D98:
/* 803F6D98 003F3CD8  80 75 00 48 */	lwz r3, 0x48(r21)
/* 803F6D9C 003F3CDC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6DA0 003F3CE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F6DA4 003F3CE4  7D 89 03 A6 */	mtctr r12
/* 803F6DA8 003F3CE8  4E 80 04 21 */	bctrl 
/* 803F6DAC 003F3CEC  3A 73 00 01 */	addi r19, r19, 1
/* 803F6DB0 003F3CF0  3A B5 00 04 */	addi r21, r21, 4
/* 803F6DB4 003F3CF4  2C 13 00 04 */	cmpwi r19, 4
/* 803F6DB8 003F3CF8  41 80 FF E0 */	blt .L_803F6D98
/* 803F6DBC 003F3CFC  80 74 00 58 */	lwz r3, 0x58(r20)
/* 803F6DC0 003F3D00  38 80 00 00 */	li r4, 0
/* 803F6DC4 003F3D04  4B F1 4A 15 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 803F6DC8 003F3D08  80 74 00 5C */	lwz r3, 0x5c(r20)
/* 803F6DCC 003F3D0C  38 80 00 00 */	li r4, 0
/* 803F6DD0 003F3D10  4B F1 4A 09 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 803F6DD4 003F3D14  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F6DD8 003F3D18  3C A0 5F 66 */	lis r5, 0x5F666C30@ha
/* 803F6DDC 003F3D1C  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803F6DE0 003F3D20  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6DE4 003F3D24  38 C5 6C 30 */	addi r6, r5, 0x5F666C30@l
/* 803F6DE8 003F3D28  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803F6DEC 003F3D2C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F6DF0 003F3D30  7D 89 03 A6 */	mtctr r12
/* 803F6DF4 003F3D34  4E 80 04 21 */	bctrl 
/* 803F6DF8 003F3D38  38 00 00 00 */	li r0, 0
/* 803F6DFC 003F3D3C  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F6E00:
/* 803F6E00 003F3D40  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F6E04 003F3D44  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 803F6E08 003F3D48  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803F6E0C 003F3D4C  40 82 00 14 */	bne .L_803F6E20
/* 803F6E10 003F3D50  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 803F6E14 003F3D54  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 803F6E18 003F3D58  7C 03 00 40 */	cmplw r3, r0
/* 803F6E1C 003F3D5C  40 82 00 60 */	bne .L_803F6E7C
.L_803F6E20:
/* 803F6E20 003F3D60  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 803F6E24 003F3D64  4B F1 49 9D */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F6E28 003F3D68  38 00 00 01 */	li r0, 1
/* 803F6E2C 003F3D6C  3C 80 5F 73 */	lis r4, 0x5F737261@ha
/* 803F6E30 003F3D70  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F6E34 003F3D74  38 C4 72 61 */	addi r6, r4, 0x5F737261@l
/* 803F6E38 003F3D78  38 A0 50 67 */	li r5, 0x5067
/* 803F6E3C 003F3D7C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F6E40 003F3D80  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6E44 003F3D84  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F6E48 003F3D88  7D 89 03 A6 */	mtctr r12
/* 803F6E4C 003F3D8C  4E 80 04 21 */	bctrl 
/* 803F6E50 003F3D90  38 00 00 01 */	li r0, 1
/* 803F6E54 003F3D94  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F6E58 003F3D98  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 803F6E5C 003F3D9C  4B F1 49 65 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F6E60 003F3DA0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6E64 003F3DA4  C0 22 1B 94 */	lfs f1, lbl_8051FEF4@sda21(r2)
/* 803F6E68 003F3DA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F6E6C 003F3DAC  FC 40 08 90 */	fmr f2, f1
/* 803F6E70 003F3DB0  7D 89 03 A6 */	mtctr r12
/* 803F6E74 003F3DB4  4E 80 04 21 */	bctrl 
/* 803F6E78 003F3DB8  48 00 00 7C */	b .L_803F6EF4
.L_803F6E7C:
/* 803F6E7C 003F3DBC  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 803F6E80 003F3DC0  4B F1 49 41 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F6E84 003F3DC4  38 00 00 00 */	li r0, 0
/* 803F6E88 003F3DC8  3C 80 5F 73 */	lis r4, 0x5F737261@ha
/* 803F6E8C 003F3DCC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F6E90 003F3DD0  38 C4 72 61 */	addi r6, r4, 0x5F737261@l
/* 803F6E94 003F3DD4  38 A0 50 67 */	li r5, 0x5067
/* 803F6E98 003F3DD8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F6E9C 003F3DDC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6EA0 003F3DE0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F6EA4 003F3DE4  7D 89 03 A6 */	mtctr r12
/* 803F6EA8 003F3DE8  4E 80 04 21 */	bctrl 
/* 803F6EAC 003F3DEC  38 00 00 00 */	li r0, 0
/* 803F6EB0 003F3DF0  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen8WorldMap@ha
/* 803F6EB4 003F3DF4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F6EB8 003F3DF8  38 64 40 58 */	addi r3, r4, msVal__Q32kh6Screen8WorldMap@l
/* 803F6EBC 003F3DFC  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 803F6EC0 003F3E00  C2 C3 00 64 */	lfs f22, 0x64(r3)
/* 803F6EC4 003F3E04  28 00 00 0A */	cmplwi r0, 0xa
/* 803F6EC8 003F3E08  41 80 00 0C */	blt .L_803F6ED4
/* 803F6ECC 003F3E0C  C0 02 1C 08 */	lfs f0, lbl_8051FF68@sda21(r2)
/* 803F6ED0 003F3E10  EE D6 00 2A */	fadds f22, f22, f0
.L_803F6ED4:
/* 803F6ED4 003F3E14  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 803F6ED8 003F3E18  4B F1 48 E9 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F6EDC 003F3E1C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6EE0 003F3E20  FC 20 B0 90 */	fmr f1, f22
/* 803F6EE4 003F3E24  C0 42 1B 94 */	lfs f2, lbl_8051FEF4@sda21(r2)
/* 803F6EE8 003F3E28  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F6EEC 003F3E2C  7D 89 03 A6 */	mtctr r12
/* 803F6EF0 003F3E30  4E 80 04 21 */	bctrl 
.L_803F6EF4:
/* 803F6EF4 003F3E34  C8 76 05 48 */	lfd f3, 0x548(r22)
/* 803F6EF8 003F3E38  3C A0 80 51 */	lis r5, msVal__Q32kh6Screen8WorldMap@ha
/* 803F6EFC 003F3E3C  C8 56 05 50 */	lfd f2, 0x550(r22)
/* 803F6F00 003F3E40  3C 80 64 61 */	lis r4, 0x64617461@ha
/* 803F6F04 003F3E44  C8 36 05 58 */	lfd f1, 0x558(r22)
/* 803F6F08 003F3E48  3C 60 00 6E */	lis r3, 0x006E6F5F@ha
/* 803F6F0C 003F3E4C  C8 16 05 60 */	lfd f0, 0x560(r22)
/* 803F6F10 003F3E50  7F FE FB 78 */	mr r30, r31
/* 803F6F14 003F3E54  D8 61 00 60 */	stfd f3, 0x60(r1)
/* 803F6F18 003F3E58  3B A1 00 60 */	addi r29, r1, 0x60
/* 803F6F1C 003F3E5C  3B 81 00 80 */	addi r28, r1, 0x80
/* 803F6F20 003F3E60  3B 25 40 58 */	addi r25, r5, msVal__Q32kh6Screen8WorldMap@l
/* 803F6F24 003F3E64  D8 41 00 68 */	stfd f2, 0x68(r1)
/* 803F6F28 003F3E68  3A C1 00 4C */	addi r22, r1, 0x4c
/* 803F6F2C 003F3E6C  3B 04 74 61 */	addi r24, r4, 0x64617461@l
/* 803F6F30 003F3E70  3A E3 6F 5F */	addi r23, r3, 0x006E6F5F@l
/* 803F6F34 003F3E74  D8 21 00 70 */	stfd f1, 0x70(r1)
/* 803F6F38 003F3E78  3B 60 00 00 */	li r27, 0
/* 803F6F3C 003F3E7C  3B 40 00 00 */	li r26, 0
/* 803F6F40 003F3E80  D8 01 00 78 */	stfd f0, 0x78(r1)
.L_803F6F44:
/* 803F6F44 003F3E84  82 9E 01 5C */	lwz r20, 0x15c(r30)
/* 803F6F48 003F3E88  3A 60 00 00 */	li r19, 0
/* 803F6F4C 003F3E8C  9A 74 00 34 */	stb r19, 0x34(r20)
/* 803F6F50 003F3E90  7E 95 A3 78 */	mr r21, r20
.L_803F6F54:
/* 803F6F54 003F3E94  80 75 00 48 */	lwz r3, 0x48(r21)
/* 803F6F58 003F3E98  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6F5C 003F3E9C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F6F60 003F3EA0  7D 89 03 A6 */	mtctr r12
/* 803F6F64 003F3EA4  4E 80 04 21 */	bctrl 
/* 803F6F68 003F3EA8  3A 73 00 01 */	addi r19, r19, 1
/* 803F6F6C 003F3EAC  3A B5 00 04 */	addi r21, r21, 4
/* 803F6F70 003F3EB0  2C 13 00 04 */	cmpwi r19, 4
/* 803F6F74 003F3EB4  41 80 FF E0 */	blt .L_803F6F54
/* 803F6F78 003F3EB8  80 74 00 58 */	lwz r3, 0x58(r20)
/* 803F6F7C 003F3EBC  38 80 00 00 */	li r4, 0
/* 803F6F80 003F3EC0  4B F1 48 59 */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 803F6F84 003F3EC4  80 74 00 5C */	lwz r3, 0x5c(r20)
/* 803F6F88 003F3EC8  38 80 00 00 */	li r4, 0
/* 803F6F8C 003F3ECC  4B F1 48 4D */	bl setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
/* 803F6F90 003F3ED0  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 803F6F94 003F3ED4  54 00 10 3A */	slwi r0, r0, 2
/* 803F6F98 003F3ED8  7C 16 00 2E */	lwzx r0, r22, r0
/* 803F6F9C 003F3EDC  7C 60 D2 14 */	add r3, r0, r26
/* 803F6FA0 003F3EE0  80 03 00 00 */	lwz r0, 0(r3)
/* 803F6FA4 003F3EE4  80 63 00 04 */	lwz r3, 4(r3)
/* 803F6FA8 003F3EE8  7C 00 BA 78 */	xor r0, r0, r23
/* 803F6FAC 003F3EEC  7C 63 C2 78 */	xor r3, r3, r24
/* 803F6FB0 003F3EF0  7C 60 03 79 */	or. r0, r3, r0
/* 803F6FB4 003F3EF4  40 82 00 40 */	bne .L_803F6FF4
/* 803F6FB8 003F3EF8  3C 60 61 76 */	lis r3, 0x61766530@ha
/* 803F6FBC 003F3EFC  7F 65 DB 78 */	mr r5, r27
/* 803F6FC0 003F3F00  38 83 65 30 */	addi r4, r3, 0x61766530@l
/* 803F6FC4 003F3F04  38 60 4E 63 */	li r3, 0x4e63
/* 803F6FC8 003F3F08  48 01 44 2D */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F6FCC 003F3F0C  7C 65 1B 78 */	mr r5, r3
/* 803F6FD0 003F3F10  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F6FD4 003F3F14  7C 86 23 78 */	mr r6, r4
/* 803F6FD8 003F3F18  81 83 00 00 */	lwz r12, 0(r3)
/* 803F6FDC 003F3F1C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F6FE0 003F3F20  7D 89 03 A6 */	mtctr r12
/* 803F6FE4 003F3F24  4E 80 04 21 */	bctrl 
/* 803F6FE8 003F3F28  38 00 00 00 */	li r0, 0
/* 803F6FEC 003F3F2C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F6FF0 003F3F30  48 00 04 44 */	b .L_803F7434
.L_803F6FF4:
/* 803F6FF4 003F3F34  3C 60 61 76 */	lis r3, 0x61766530@ha
/* 803F6FF8 003F3F38  7F 65 DB 78 */	mr r5, r27
/* 803F6FFC 003F3F3C  38 83 65 30 */	addi r4, r3, 0x61766530@l
/* 803F7000 003F3F40  38 60 4E 63 */	li r3, 0x4e63
/* 803F7004 003F3F44  48 01 43 F1 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F7008 003F3F48  7C 65 1B 78 */	mr r5, r3
/* 803F700C 003F3F4C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F7010 003F3F50  7C 86 23 78 */	mr r6, r4
/* 803F7014 003F3F54  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7018 003F3F58  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F701C 003F3F5C  7D 89 03 A6 */	mtctr r12
/* 803F7020 003F3F60  4E 80 04 21 */	bctrl 
/* 803F7024 003F3F64  38 00 00 01 */	li r0, 1
/* 803F7028 003F3F68  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F702C 003F3F6C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803F7030 003F3F70  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F7034 003F3F74  4B DB 6F 79 */	bl getCourseInfo__Q24Game6StagesFi
/* 803F7038 003F3F78  7F 64 DB 78 */	mr r4, r27
/* 803F703C 003F3F7C  4B DB 6C 01 */	bl getCaveID_FromIndex__Q24Game10CourseInfoFi
/* 803F7040 003F3F80  7C 64 1B 78 */	mr r4, r3
/* 803F7044 003F3F84  38 61 00 40 */	addi r3, r1, 0x40
/* 803F7048 003F3F88  48 01 C2 61 */	bl __ct__4ID32FUl
/* 803F704C 003F3F8C  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 803F7050 003F3F90  4B F1 47 71 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F7054 003F3F94  38 00 00 01 */	li r0, 1
/* 803F7058 003F3F98  38 80 00 00 */	li r4, 0
/* 803F705C 003F3F9C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F7060 003F3FA0  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 803F7064 003F3FA4  4B F1 47 85 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803F7068 003F3FA8  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 803F706C 003F3FAC  4B F1 47 55 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F7070 003F3FB0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7074 003F3FB4  C0 22 1B 94 */	lfs f1, lbl_8051FEF4@sda21(r2)
/* 803F7078 003F3FB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F707C 003F3FBC  FC 40 08 90 */	fmr f2, f1
/* 803F7080 003F3FC0  7D 89 03 A6 */	mtctr r12
/* 803F7084 003F3FC4  4E 80 04 21 */	bctrl 
/* 803F7088 003F3FC8  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 803F708C 003F3FCC  4B F1 47 35 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F7090 003F3FD0  38 00 00 01 */	li r0, 1
/* 803F7094 003F3FD4  38 80 00 00 */	li r4, 0
/* 803F7098 003F3FD8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F709C 003F3FDC  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 803F70A0 003F3FE0  4B F1 47 49 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803F70A4 003F3FE4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F70A8 003F3FE8  80 BD 00 00 */	lwz r5, 0(r29)
/* 803F70AC 003F3FEC  81 83 00 00 */	lwz r12, 0(r3)
/* 803F70B0 003F3FF0  80 DD 00 04 */	lwz r6, 4(r29)
/* 803F70B4 003F3FF4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F70B8 003F3FF8  7D 89 03 A6 */	mtctr r12
/* 803F70BC 003F3FFC  4E 80 04 21 */	bctrl 
/* 803F70C0 003F4000  38 00 00 01 */	li r0, 1
/* 803F70C4 003F4004  38 A1 00 40 */	addi r5, r1, 0x40
/* 803F70C8 003F4008  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F70CC 003F400C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F70D0 003F4010  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F70D4 003F4014  4B DF 19 45 */	bl getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 803F70D8 003F4018  90 7E 01 34 */	stw r3, 0x134(r30)
/* 803F70DC 003F401C  38 A1 00 40 */	addi r5, r1, 0x40
/* 803F70E0 003F4020  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F70E4 003F4024  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F70E8 003F4028  4B DF 19 E9 */	bl getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 803F70EC 003F402C  90 7E 01 44 */	stw r3, 0x144(r30)
/* 803F70F0 003F4030  38 A1 00 40 */	addi r5, r1, 0x40
/* 803F70F4 003F4034  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F70F8 003F4038  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F70FC 003F403C  4B DF 16 CD */	bl isCaveFirstTime__Q24Game8PlayDataFiR4ID32
/* 803F7100 003F4040  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803F7104 003F4044  41 82 01 20 */	beq .L_803F7224
/* 803F7108 003F4048  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F710C 003F404C  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 803F7110 003F4050  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803F7114 003F4054  41 82 00 20 */	beq .L_803F7134
/* 803F7118 003F4058  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 803F711C 003F405C  38 80 00 01 */	li r4, 1
/* 803F7120 003F4060  4B F1 46 C9 */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803F7124 003F4064  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 803F7128 003F4068  38 80 00 01 */	li r4, 1
/* 803F712C 003F406C  4B F1 46 BD */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803F7130 003F4070  48 00 00 80 */	b .L_803F71B0
.L_803F7134:
/* 803F7134 003F4074  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 803F7138 003F4078  4B F1 46 89 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F713C 003F407C  38 00 00 00 */	li r0, 0
/* 803F7140 003F4080  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F7144 003F4084  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 803F7148 003F4088  4B F1 46 79 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F714C 003F408C  38 00 00 00 */	li r0, 0
/* 803F7150 003F4090  80 BD 00 00 */	lwz r5, 0(r29)
/* 803F7154 003F4094  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F7158 003F4098  80 DD 00 04 */	lwz r6, 4(r29)
/* 803F715C 003F409C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F7160 003F40A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7164 003F40A4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F7168 003F40A8  7D 89 03 A6 */	mtctr r12
/* 803F716C 003F40AC  4E 80 04 21 */	bctrl 
/* 803F7170 003F40B0  38 00 00 00 */	li r0, 0
/* 803F7174 003F40B4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F7178 003F40B8  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 803F717C 003F40BC  C2 D9 00 68 */	lfs f22, 0x68(r25)
/* 803F7180 003F40C0  28 00 00 0A */	cmplwi r0, 0xa
/* 803F7184 003F40C4  41 80 00 0C */	blt .L_803F7190
/* 803F7188 003F40C8  C0 02 1C 0C */	lfs f0, lbl_8051FF6C@sda21(r2)
/* 803F718C 003F40CC  EE D6 00 2A */	fadds f22, f22, f0
.L_803F7190:
/* 803F7190 003F40D0  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 803F7194 003F40D4  4B F1 46 2D */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F7198 003F40D8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F719C 003F40DC  FC 20 B0 90 */	fmr f1, f22
/* 803F71A0 003F40E0  C0 42 1B 94 */	lfs f2, lbl_8051FEF4@sda21(r2)
/* 803F71A4 003F40E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F71A8 003F40E8  7D 89 03 A6 */	mtctr r12
/* 803F71AC 003F40EC  4E 80 04 21 */	bctrl 
.L_803F71B0:
/* 803F71B0 003F40F0  3C 80 65 5F */	lis r4, 0x655F3030@ha
/* 803F71B4 003F40F4  3C 60 50 63 */	lis r3, 0x50636176@ha
/* 803F71B8 003F40F8  7F 65 DB 78 */	mr r5, r27
/* 803F71BC 003F40FC  38 84 30 30 */	addi r4, r4, 0x655F3030@l
/* 803F71C0 003F4100  38 63 61 76 */	addi r3, r3, 0x50636176@l
/* 803F71C4 003F4104  48 01 42 31 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F71C8 003F4108  7C 65 1B 78 */	mr r5, r3
/* 803F71CC 003F410C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F71D0 003F4110  7C 86 23 78 */	mr r6, r4
/* 803F71D4 003F4114  81 83 00 00 */	lwz r12, 0(r3)
/* 803F71D8 003F4118  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F71DC 003F411C  7D 89 03 A6 */	mtctr r12
/* 803F71E0 003F4120  4E 80 04 21 */	bctrl 
/* 803F71E4 003F4124  3C A0 39 5F */	lis r5, 0x395F3031@ha
/* 803F71E8 003F4128  3C 80 00 38 */	lis r4, 0x00383431@ha
/* 803F71EC 003F412C  38 05 30 31 */	addi r0, r5, 0x395F3031@l
/* 803F71F0 003F4130  80 BC 00 00 */	lwz r5, 0(r28)
/* 803F71F4 003F4134  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803F71F8 003F4138  38 04 34 31 */	addi r0, r4, 0x00383431@l
/* 803F71FC 003F413C  80 DC 00 04 */	lwz r6, 4(r28)
/* 803F7200 003F4140  90 03 00 18 */	stw r0, 0x18(r3)
/* 803F7204 003F4144  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F7208 003F4148  81 83 00 00 */	lwz r12, 0(r3)
/* 803F720C 003F414C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F7210 003F4150  7D 89 03 A6 */	mtctr r12
/* 803F7214 003F4154  4E 80 04 21 */	bctrl 
/* 803F7218 003F4158  38 00 00 00 */	li r0, 0
/* 803F721C 003F415C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F7220 003F4160  48 00 02 14 */	b .L_803F7434
.L_803F7224:
/* 803F7224 003F4164  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F7228 003F4168  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 803F722C 003F416C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803F7230 003F4170  40 82 00 7C */	bne .L_803F72AC
/* 803F7234 003F4174  80 1E 01 44 */	lwz r0, 0x144(r30)
/* 803F7238 003F4178  80 7E 01 34 */	lwz r3, 0x134(r30)
/* 803F723C 003F417C  7C 00 18 40 */	cmplw r0, r3
/* 803F7240 003F4180  41 82 00 6C */	beq .L_803F72AC
/* 803F7244 003F4184  28 03 00 0A */	cmplwi r3, 0xa
/* 803F7248 003F4188  C2 D9 00 68 */	lfs f22, 0x68(r25)
/* 803F724C 003F418C  41 80 00 0C */	blt .L_803F7258
/* 803F7250 003F4190  C0 02 1C 0C */	lfs f0, lbl_8051FF6C@sda21(r2)
/* 803F7254 003F4194  EE D6 00 2A */	fadds f22, f22, f0
.L_803F7258:
/* 803F7258 003F4198  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 803F725C 003F419C  4B F1 45 65 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F7260 003F41A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7264 003F41A4  FC 20 B0 90 */	fmr f1, f22
/* 803F7268 003F41A8  C0 42 1B 94 */	lfs f2, lbl_8051FEF4@sda21(r2)
/* 803F726C 003F41AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803F7270 003F41B0  7D 89 03 A6 */	mtctr r12
/* 803F7274 003F41B4  4E 80 04 21 */	bctrl 
/* 803F7278 003F41B8  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 803F727C 003F41BC  4B F1 45 45 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803F7280 003F41C0  38 00 00 00 */	li r0, 0
/* 803F7284 003F41C4  80 BD 00 00 */	lwz r5, 0(r29)
/* 803F7288 003F41C8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F728C 003F41CC  80 DD 00 04 */	lwz r6, 4(r29)
/* 803F7290 003F41D0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F7294 003F41D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7298 003F41D8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F729C 003F41DC  7D 89 03 A6 */	mtctr r12
/* 803F72A0 003F41E0  4E 80 04 21 */	bctrl 
/* 803F72A4 003F41E4  38 00 00 00 */	li r0, 0
/* 803F72A8 003F41E8  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F72AC:
/* 803F72AC 003F41EC  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 803F72B0 003F41F0  3C 80 65 5F */	lis r4, 0x655F3030@ha
/* 803F72B4 003F41F4  3C 60 50 63 */	lis r3, 0x50636176@ha
/* 803F72B8 003F41F8  38 C1 00 4C */	addi r6, r1, 0x4c
/* 803F72BC 003F41FC  54 00 10 3A */	slwi r0, r0, 2
/* 803F72C0 003F4200  7F 65 DB 78 */	mr r5, r27
/* 803F72C4 003F4204  7C 06 00 2E */	lwzx r0, r6, r0
/* 803F72C8 003F4208  38 84 30 30 */	addi r4, r4, 0x655F3030@l
/* 803F72CC 003F420C  38 63 61 76 */	addi r3, r3, 0x50636176@l
/* 803F72D0 003F4210  7E 80 D2 14 */	add r20, r0, r26
/* 803F72D4 003F4214  82 74 00 00 */	lwz r19, 0(r20)
/* 803F72D8 003F4218  82 94 00 04 */	lwz r20, 4(r20)
/* 803F72DC 003F421C  48 01 41 19 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F72E0 003F4220  7C 65 1B 78 */	mr r5, r3
/* 803F72E4 003F4224  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F72E8 003F4228  7C 86 23 78 */	mr r6, r4
/* 803F72EC 003F422C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F72F0 003F4230  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F72F4 003F4234  7D 89 03 A6 */	mtctr r12
/* 803F72F8 003F4238  4E 80 04 21 */	bctrl 
/* 803F72FC 003F423C  92 83 00 1C */	stw r20, 0x1c(r3)
/* 803F7300 003F4240  92 63 00 18 */	stw r19, 0x18(r3)
/* 803F7304 003F4244  80 7E 01 34 */	lwz r3, 0x134(r30)
/* 803F7308 003F4248  80 1E 01 44 */	lwz r0, 0x144(r30)
/* 803F730C 003F424C  7C 03 00 40 */	cmplw r3, r0
/* 803F7310 003F4250  40 82 01 00 */	bne .L_803F7410
/* 803F7314 003F4254  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 803F7318 003F4258  38 80 00 00 */	li r4, 0
/* 803F731C 003F425C  4B F1 44 CD */	bl setBlind__Q32og6Screen18CallBack_CounterRVFb
/* 803F7320 003F4260  82 7E 01 5C */	lwz r19, 0x15c(r30)
/* 803F7324 003F4264  3A A0 00 00 */	li r21, 0
/* 803F7328 003F4268  82 9E 01 34 */	lwz r20, 0x134(r30)
/* 803F732C 003F426C  38 00 00 01 */	li r0, 1
/* 803F7330 003F4270  80 93 00 1C */	lwz r4, 0x1c(r19)
/* 803F7334 003F4274  88 64 00 00 */	lbz r3, 0(r4)
/* 803F7338 003F4278  98 73 00 20 */	stb r3, 0x20(r19)
/* 803F733C 003F427C  88 64 00 01 */	lbz r3, 1(r4)
/* 803F7340 003F4280  98 73 00 21 */	stb r3, 0x21(r19)
/* 803F7344 003F4284  88 64 00 02 */	lbz r3, 2(r4)
/* 803F7348 003F4288  98 73 00 22 */	stb r3, 0x22(r19)
/* 803F734C 003F428C  88 64 00 03 */	lbz r3, 3(r4)
/* 803F7350 003F4290  98 73 00 23 */	stb r3, 0x23(r19)
/* 803F7354 003F4294  92 B3 00 30 */	stw r21, 0x30(r19)
/* 803F7358 003F4298  98 13 00 34 */	stb r0, 0x34(r19)
.L_803F735C:
/* 803F735C 003F429C  56 A3 0F FE */	srwi r3, r21, 0x1f
/* 803F7360 003F42A0  56 A0 07 FE */	clrlwi r0, r21, 0x1f
/* 803F7364 003F42A4  7C 00 1A 78 */	xor r0, r0, r3
/* 803F7368 003F42A8  7C 03 00 51 */	subf. r0, r3, r0
/* 803F736C 003F42AC  41 82 00 0C */	beq .L_803F7378
/* 803F7370 003F42B0  28 14 00 0A */	cmplwi r20, 0xa
/* 803F7374 003F42B4  41 80 00 64 */	blt .L_803F73D8
.L_803F7378:
/* 803F7378 003F42B8  80 73 00 38 */	lwz r3, 0x38(r19)
/* 803F737C 003F42BC  48 01 46 7D */	bl getPaneCenterY__Q22kh6ScreenFP7J2DPane
/* 803F7380 003F42C0  FF E0 08 90 */	fmr f31, f1
/* 803F7384 003F42C4  80 73 00 38 */	lwz r3, 0x38(r19)
/* 803F7388 003F42C8  48 01 45 85 */	bl getPaneCenterX__Q22kh6ScreenFP7J2DPane
/* 803F738C 003F42CC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803F7390 003F42D0  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803F7394 003F42D4  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 803F7398 003F42D8  38 81 00 28 */	addi r4, r1, 0x28
/* 803F739C 003F42DC  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 803F73A0 003F42E0  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 803F73A4 003F42E4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803F73A8 003F42E8  90 A1 00 08 */	stw r5, 8(r1)
/* 803F73AC 003F42EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 803F73B0 003F42F0  C0 21 00 08 */	lfs f1, 8(r1)
/* 803F73B4 003F42F4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803F73B8 003F42F8  90 01 00 30 */	stw r0, 0x30(r1)
/* 803F73BC 003F42FC  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 803F73C0 003F4300  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803F73C4 003F4304  80 73 00 48 */	lwz r3, 0x48(r19)
/* 803F73C8 003F4308  81 83 00 00 */	lwz r12, 0(r3)
/* 803F73CC 003F430C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F73D0 003F4310  7D 89 03 A6 */	mtctr r12
/* 803F73D4 003F4314  4E 80 04 21 */	bctrl 
.L_803F73D8:
/* 803F73D8 003F4318  3A B5 00 01 */	addi r21, r21, 1
/* 803F73DC 003F431C  3A 73 00 04 */	addi r19, r19, 4
/* 803F73E0 003F4320  2C 15 00 04 */	cmpwi r21, 4
/* 803F73E4 003F4324  41 80 FF 78 */	blt .L_803F735C
/* 803F73E8 003F4328  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F73EC 003F432C  80 BC 00 00 */	lwz r5, 0(r28)
/* 803F73F0 003F4330  81 83 00 00 */	lwz r12, 0(r3)
/* 803F73F4 003F4334  80 DC 00 04 */	lwz r6, 4(r28)
/* 803F73F8 003F4338  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F73FC 003F433C  7D 89 03 A6 */	mtctr r12
/* 803F7400 003F4340  4E 80 04 21 */	bctrl 
/* 803F7404 003F4344  38 00 00 01 */	li r0, 1
/* 803F7408 003F4348  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803F740C 003F434C  48 00 00 28 */	b .L_803F7434
.L_803F7410:
/* 803F7410 003F4350  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 803F7414 003F4354  80 BC 00 00 */	lwz r5, 0(r28)
/* 803F7418 003F4358  81 83 00 00 */	lwz r12, 0(r3)
/* 803F741C 003F435C  80 DC 00 04 */	lwz r6, 4(r28)
/* 803F7420 003F4360  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F7424 003F4364  7D 89 03 A6 */	mtctr r12
/* 803F7428 003F4368  4E 80 04 21 */	bctrl 
/* 803F742C 003F436C  38 00 00 00 */	li r0, 0
/* 803F7430 003F4370  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_803F7434:
/* 803F7434 003F4374  3B 7B 00 01 */	addi r27, r27, 1
/* 803F7438 003F4378  3B 5A 00 08 */	addi r26, r26, 8
/* 803F743C 003F437C  2C 1B 00 04 */	cmpwi r27, 4
/* 803F7440 003F4380  3B BD 00 08 */	addi r29, r29, 8
/* 803F7444 003F4384  3B 9C 00 08 */	addi r28, r28, 8
/* 803F7448 003F4388  3B DE 00 04 */	addi r30, r30, 4
/* 803F744C 003F438C  41 80 FA F8 */	blt .L_803F6F44
/* 803F7450 003F4390  E3 E1 02 18 */	psq_l f31, 536(r1), 0, qr0
/* 803F7454 003F4394  CB E1 02 10 */	lfd f31, 0x210(r1)
/* 803F7458 003F4398  E3 C1 02 08 */	psq_l f30, 520(r1), 0, qr0
/* 803F745C 003F439C  CB C1 02 00 */	lfd f30, 0x200(r1)
/* 803F7460 003F43A0  E3 A1 01 F8 */	psq_l f29, 504(r1), 0, qr0
/* 803F7464 003F43A4  CB A1 01 F0 */	lfd f29, 0x1f0(r1)
/* 803F7468 003F43A8  E3 81 01 E8 */	psq_l f28, 488(r1), 0, qr0
/* 803F746C 003F43AC  CB 81 01 E0 */	lfd f28, 0x1e0(r1)
/* 803F7470 003F43B0  E3 61 01 D8 */	psq_l f27, 472(r1), 0, qr0
/* 803F7474 003F43B4  CB 61 01 D0 */	lfd f27, 0x1d0(r1)
/* 803F7478 003F43B8  E3 41 01 C8 */	psq_l f26, 456(r1), 0, qr0
/* 803F747C 003F43BC  CB 41 01 C0 */	lfd f26, 0x1c0(r1)
/* 803F7480 003F43C0  E3 21 01 B8 */	psq_l f25, 440(r1), 0, qr0
/* 803F7484 003F43C4  CB 21 01 B0 */	lfd f25, 0x1b0(r1)
/* 803F7488 003F43C8  E3 01 01 A8 */	psq_l f24, 424(r1), 0, qr0
/* 803F748C 003F43CC  CB 01 01 A0 */	lfd f24, 0x1a0(r1)
/* 803F7490 003F43D0  E2 E1 01 98 */	psq_l f23, 408(r1), 0, qr0
/* 803F7494 003F43D4  CA E1 01 90 */	lfd f23, 0x190(r1)
/* 803F7498 003F43D8  E2 C1 01 88 */	psq_l f22, 392(r1), 0, qr0
/* 803F749C 003F43DC  CA C1 01 80 */	lfd f22, 0x180(r1)
/* 803F74A0 003F43E0  BA 61 01 4C */	lmw r19, 0x14c(r1)
/* 803F74A4 003F43E4  80 01 02 24 */	lwz r0, 0x224(r1)
/* 803F74A8 003F43E8  7C 08 03 A6 */	mtlr r0
/* 803F74AC 003F43EC  38 21 02 20 */	addi r1, r1, 0x220
/* 803F74B0 003F43F0  4E 80 00 20 */	blr 
.endfn changeInfo__Q32kh6Screen8WorldMapFv

.fn effectFirstTime__Q32kh6Screen8WorldMapFv, global
/* 803F74B4 003F43F4  94 21 FE 50 */	stwu r1, -0x1b0(r1)
/* 803F74B8 003F43F8  7C 08 02 A6 */	mflr r0
/* 803F74BC 003F43FC  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 803F74C0 003F4400  DB E1 01 A0 */	stfd f31, 0x1a0(r1)
/* 803F74C4 003F4404  F3 E1 01 A8 */	psq_st f31, 424(r1), 0, qr0
/* 803F74C8 003F4408  DB C1 01 90 */	stfd f30, 0x190(r1)
/* 803F74CC 003F440C  F3 C1 01 98 */	psq_st f30, 408(r1), 0, qr0
/* 803F74D0 003F4410  DB A1 01 80 */	stfd f29, 0x180(r1)
/* 803F74D4 003F4414  F3 A1 01 88 */	psq_st f29, 392(r1), 0, qr0
/* 803F74D8 003F4418  DB 81 01 70 */	stfd f28, 0x170(r1)
/* 803F74DC 003F441C  F3 81 01 78 */	psq_st f28, 376(r1), 0, qr0
/* 803F74E0 003F4420  DB 61 01 60 */	stfd f27, 0x160(r1)
/* 803F74E4 003F4424  F3 61 01 68 */	psq_st f27, 360(r1), 0, qr0
/* 803F74E8 003F4428  BD E1 01 1C */	stmw r15, 0x11c(r1)
/* 803F74EC 003F442C  7C 7D 1B 78 */	mr r29, r3
/* 803F74F0 003F4430  3C 60 80 49 */	lis r3, lbl_80497C70@ha
/* 803F74F4 003F4434  80 1D 01 7C */	lwz r0, 0x17c(r29)
/* 803F74F8 003F4438  38 E3 7C 70 */	addi r7, r3, lbl_80497C70@l
/* 803F74FC 003F443C  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 803F7500 003F4440  41 82 04 C8 */	beq .L_803F79C8
/* 803F7504 003F4444  CB A7 05 88 */	lfd f29, 0x588(r7)
/* 803F7508 003F4448  38 C1 00 E0 */	addi r6, r1, 0xe0
/* 803F750C 003F444C  CB 87 05 90 */	lfd f28, 0x590(r7)
/* 803F7510 003F4450  38 A1 00 C0 */	addi r5, r1, 0xc0
/* 803F7514 003F4454  C9 A7 05 98 */	lfd f13, 0x598(r7)
/* 803F7518 003F4458  38 81 00 A0 */	addi r4, r1, 0xa0
/* 803F751C 003F445C  C9 87 05 A0 */	lfd f12, 0x5a0(r7)
/* 803F7520 003F4460  38 01 00 80 */	addi r0, r1, 0x80
/* 803F7524 003F4464  C9 67 05 A8 */	lfd f11, 0x5a8(r7)
/* 803F7528 003F4468  3A C0 00 00 */	li r22, 0
/* 803F752C 003F446C  C9 47 05 B0 */	lfd f10, 0x5b0(r7)
/* 803F7530 003F4470  3B E0 00 00 */	li r31, 0
/* 803F7534 003F4474  C9 27 05 B8 */	lfd f9, 0x5b8(r7)
/* 803F7538 003F4478  3B C0 00 00 */	li r30, 0
/* 803F753C 003F447C  C9 07 05 C0 */	lfd f8, 0x5c0(r7)
/* 803F7540 003F4480  3A 20 00 00 */	li r17, 0
/* 803F7544 003F4484  C8 E7 05 C8 */	lfd f7, 0x5c8(r7)
/* 803F7548 003F4488  C8 C7 05 D0 */	lfd f6, 0x5d0(r7)
/* 803F754C 003F448C  C8 A7 05 D8 */	lfd f5, 0x5d8(r7)
/* 803F7550 003F4490  C8 87 05 E0 */	lfd f4, 0x5e0(r7)
/* 803F7554 003F4494  C8 67 05 E8 */	lfd f3, 0x5e8(r7)
/* 803F7558 003F4498  C8 47 05 F0 */	lfd f2, 0x5f0(r7)
/* 803F755C 003F449C  C8 27 05 F8 */	lfd f1, 0x5f8(r7)
/* 803F7560 003F44A0  C8 07 06 00 */	lfd f0, 0x600(r7)
/* 803F7564 003F44A4  80 67 06 08 */	lwz r3, 0x608(r7)
/* 803F7568 003F44A8  81 27 06 0C */	lwz r9, 0x60c(r7)
/* 803F756C 003F44AC  81 07 06 10 */	lwz r8, 0x610(r7)
/* 803F7570 003F44B0  90 61 00 70 */	stw r3, 0x70(r1)
/* 803F7574 003F44B4  80 E7 06 14 */	lwz r7, 0x614(r7)
/* 803F7578 003F44B8  91 21 00 74 */	stw r9, 0x74(r1)
/* 803F757C 003F44BC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F7580 003F44C0  91 01 00 78 */	stw r8, 0x78(r1)
/* 803F7584 003F44C4  90 E1 00 7C */	stw r7, 0x7c(r1)
/* 803F7588 003F44C8  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 803F758C 003F44CC  DB 81 00 E8 */	stfd f28, 0xe8(r1)
/* 803F7590 003F44D0  D9 A1 00 F0 */	stfd f13, 0xf0(r1)
/* 803F7594 003F44D4  D9 81 00 F8 */	stfd f12, 0xf8(r1)
/* 803F7598 003F44D8  D9 61 00 C0 */	stfd f11, 0xc0(r1)
/* 803F759C 003F44DC  D9 41 00 C8 */	stfd f10, 0xc8(r1)
/* 803F75A0 003F44E0  D9 21 00 D0 */	stfd f9, 0xd0(r1)
/* 803F75A4 003F44E4  D9 01 00 D8 */	stfd f8, 0xd8(r1)
/* 803F75A8 003F44E8  D8 E1 00 A0 */	stfd f7, 0xa0(r1)
/* 803F75AC 003F44EC  D8 C1 00 A8 */	stfd f6, 0xa8(r1)
/* 803F75B0 003F44F0  D8 A1 00 B0 */	stfd f5, 0xb0(r1)
/* 803F75B4 003F44F4  D8 81 00 B8 */	stfd f4, 0xb8(r1)
/* 803F75B8 003F44F8  D8 61 00 80 */	stfd f3, 0x80(r1)
/* 803F75BC 003F44FC  D8 41 00 88 */	stfd f2, 0x88(r1)
/* 803F75C0 003F4500  D8 21 00 90 */	stfd f1, 0x90(r1)
/* 803F75C4 003F4504  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 803F75C8 003F4508  90 C1 00 70 */	stw r6, 0x70(r1)
/* 803F75CC 003F450C  81 E3 00 E8 */	lwz r15, 0xe8(r3)
/* 803F75D0 003F4510  90 A1 00 74 */	stw r5, 0x74(r1)
/* 803F75D4 003F4514  90 81 00 78 */	stw r4, 0x78(r1)
/* 803F75D8 003F4518  90 01 00 7C */	stw r0, 0x7c(r1)
/* 803F75DC 003F451C  4B DF 25 19 */	bl getMoney_Old__Q24Game8PlayDataFv
/* 803F75E0 003F4520  7C 0F 18 00 */	cmpw r15, r3
/* 803F75E4 003F4524  41 82 00 14 */	beq .L_803F75F8
/* 803F75E8 003F4528  80 7D 01 00 */	lwz r3, 0x100(r29)
/* 803F75EC 003F452C  C0 22 1B 90 */	lfs f1, lbl_8051FEF0@sda21(r2)
/* 803F75F0 003F4530  4B F1 42 09 */	bl startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
/* 803F75F4 003F4534  3A C0 00 01 */	li r22, 1
.L_803F75F8:
/* 803F75F8 003F4538  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F75FC 003F453C  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F7600 003F4540  4B DF 23 C1 */	bl getGroundOtakaraNum_Old__Q24Game8PlayDataFi
/* 803F7604 003F4544  7C 6F 1B 78 */	mr r15, r3
/* 803F7608 003F4548  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F760C 003F454C  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F7610 003F4550  4B DF 0C 51 */	bl getGroundOtakaraNum__Q24Game8PlayDataFi
/* 803F7614 003F4554  7C 03 78 00 */	cmpw r3, r15
/* 803F7618 003F4558  41 82 00 3C */	beq .L_803F7654
/* 803F761C 003F455C  80 7D 01 04 */	lwz r3, 0x104(r29)
/* 803F7620 003F4560  C0 22 1B 90 */	lfs f1, lbl_8051FEF0@sda21(r2)
/* 803F7624 003F4564  4B F1 41 D5 */	bl startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
/* 803F7628 003F4568  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F762C 003F456C  3B E0 00 01 */	li r31, 1
/* 803F7630 003F4570  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F7634 003F4574  4B DF 0C A9 */	bl getGroundOtakaraMax__Q24Game8PlayDataFi
/* 803F7638 003F4578  7C 6F 1B 78 */	mr r15, r3
/* 803F763C 003F457C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F7640 003F4580  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F7644 003F4584  4B DF 0C 1D */	bl getGroundOtakaraNum__Q24Game8PlayDataFi
/* 803F7648 003F4588  7C 03 78 00 */	cmpw r3, r15
/* 803F764C 003F458C  40 82 00 08 */	bne .L_803F7654
/* 803F7650 003F4590  3B C0 00 01 */	li r30, 1
.L_803F7654:
/* 803F7654 003F4594  3C 80 64 61 */	lis r4, 0x64617461@ha
/* 803F7658 003F4598  3C 60 00 6E */	lis r3, 0x006E6F5F@ha
/* 803F765C 003F459C  7F B8 EB 78 */	mr r24, r29
/* 803F7660 003F45A0  3B 41 00 70 */	addi r26, r1, 0x70
/* 803F7664 003F45A4  3B 64 74 61 */	addi r27, r4, 0x64617461@l
/* 803F7668 003F45A8  3B 83 6F 5F */	addi r28, r3, 0x006E6F5F@l
/* 803F766C 003F45AC  3A E0 00 00 */	li r23, 0
/* 803F7670 003F45B0  3B 20 00 00 */	li r25, 0
.L_803F7674:
/* 803F7674 003F45B4  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F7678 003F45B8  54 80 10 3A */	slwi r0, r4, 2
/* 803F767C 003F45BC  7C 1A 00 2E */	lwzx r0, r26, r0
/* 803F7680 003F45C0  7C 60 CA 14 */	add r3, r0, r25
/* 803F7684 003F45C4  80 03 00 00 */	lwz r0, 0(r3)
/* 803F7688 003F45C8  80 63 00 04 */	lwz r3, 4(r3)
/* 803F768C 003F45CC  7C 00 E2 78 */	xor r0, r0, r28
/* 803F7690 003F45D0  7C 63 DA 78 */	xor r3, r3, r27
/* 803F7694 003F45D4  7C 60 03 79 */	or. r0, r3, r0
/* 803F7698 003F45D8  41 82 02 70 */	beq .L_803F7908
/* 803F769C 003F45DC  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 803F76A0 003F45E0  4B DB 69 0D */	bl getCourseInfo__Q24Game6StagesFi
/* 803F76A4 003F45E4  7E E4 BB 78 */	mr r4, r23
/* 803F76A8 003F45E8  4B DB 65 95 */	bl getCaveID_FromIndex__Q24Game10CourseInfoFi
/* 803F76AC 003F45EC  7C 64 1B 78 */	mr r4, r3
/* 803F76B0 003F45F0  38 61 00 64 */	addi r3, r1, 0x64
/* 803F76B4 003F45F4  48 01 BB F5 */	bl __ct__4ID32FUl
/* 803F76B8 003F45F8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F76BC 003F45FC  38 A1 00 64 */	addi r5, r1, 0x64
/* 803F76C0 003F4600  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F76C4 003F4604  4B DF 24 39 */	bl isCaveFirstTime_Old__Q24Game8PlayDataFiR4ID32
/* 803F76C8 003F4608  54 6F 06 3E */	clrlwi r15, r3, 0x18
/* 803F76CC 003F460C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F76D0 003F4610  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F76D4 003F4614  38 A1 00 64 */	addi r5, r1, 0x64
/* 803F76D8 003F4618  4B DF 10 F1 */	bl isCaveFirstTime__Q24Game8PlayDataFiR4ID32
/* 803F76DC 003F461C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 803F76E0 003F4620  7C 00 78 40 */	cmplw r0, r15
/* 803F76E4 003F4624  41 82 01 B8 */	beq .L_803F789C
/* 803F76E8 003F4628  3C 80 65 5F */	lis r4, 0x655F3030@ha
/* 803F76EC 003F462C  3C 60 50 63 */	lis r3, 0x50636176@ha
/* 803F76F0 003F4630  7E E5 BB 78 */	mr r5, r23
/* 803F76F4 003F4634  38 84 30 30 */	addi r4, r4, 0x655F3030@l
/* 803F76F8 003F4638  38 63 61 76 */	addi r3, r3, 0x50636176@l
/* 803F76FC 003F463C  48 01 3C F9 */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F7700 003F4640  7C 65 1B 78 */	mr r5, r3
/* 803F7704 003F4644  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 803F7708 003F4648  7C 86 23 78 */	mr r6, r4
/* 803F770C 003F464C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7710 003F4650  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F7714 003F4654  7D 89 03 A6 */	mtctr r12
/* 803F7718 003F4658  4E 80 04 21 */	bctrl 
/* 803F771C 003F465C  7C 64 1B 78 */	mr r4, r3
/* 803F7720 003F4660  38 61 00 24 */	addi r3, r1, 0x24
/* 803F7724 003F4664  38 A0 00 00 */	li r5, 0
/* 803F7728 003F4668  4B C4 18 71 */	bl getGlbVtx__7J2DPaneCFUc
/* 803F772C 003F466C  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 803F7730 003F4670  3C 80 65 5F */	lis r4, 0x655F3030@ha
/* 803F7734 003F4674  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 803F7738 003F4678  3C 60 50 63 */	lis r3, 0x50636176@ha
/* 803F773C 003F467C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803F7740 003F4680  7E E5 BB 78 */	mr r5, r23
/* 803F7744 003F4684  90 E1 00 58 */	stw r7, 0x58(r1)
/* 803F7748 003F4688  38 84 30 30 */	addi r4, r4, 0x655F3030@l
/* 803F774C 003F468C  38 63 61 76 */	addi r3, r3, 0x50636176@l
/* 803F7750 003F4690  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 803F7754 003F4694  90 01 00 60 */	stw r0, 0x60(r1)
/* 803F7758 003F4698  48 01 3C 9D */	bl getSerialTagName__Q22kh6ScreenFUxi
/* 803F775C 003F469C  7C 65 1B 78 */	mr r5, r3
/* 803F7760 003F46A0  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 803F7764 003F46A4  7C 86 23 78 */	mr r6, r4
/* 803F7768 003F46A8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F776C 003F46AC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F7770 003F46B0  7D 89 03 A6 */	mtctr r12
/* 803F7774 003F46B4  4E 80 04 21 */	bctrl 
/* 803F7778 003F46B8  7C 64 1B 78 */	mr r4, r3
/* 803F777C 003F46BC  38 61 00 18 */	addi r3, r1, 0x18
/* 803F7780 003F46C0  38 A0 00 03 */	li r5, 3
/* 803F7784 003F46C4  4B C4 18 15 */	bl getGlbVtx__7J2DPaneCFUc
/* 803F7788 003F46C8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803F778C 003F46CC  3C E0 80 4C */	lis r7, __vt__Q25efx2d3Arg@ha
/* 803F7790 003F46D0  81 01 00 18 */	lwz r8, 0x18(r1)
/* 803F7794 003F46D4  3C C0 80 4C */	lis r6, __vt__Q25efx2d7TBaseIF@ha
/* 803F7798 003F46D8  90 01 00 50 */	stw r0, 0x50(r1)
/* 803F779C 003F46DC  3C A0 80 4C */	lis r5, __vt__Q25efx2d5TBase@ha
/* 803F77A0 003F46E0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 803F77A4 003F46E4  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple1@ha
/* 803F77A8 003F46E8  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 803F77AC 003F46EC  3C 60 80 4E */	lis r3, __vt__Q25efx2d14T2DChangesmoke@ha
/* 803F77B0 003F46F0  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 803F77B4 003F46F4  3A 47 15 14 */	addi r18, r7, __vt__Q25efx2d3Arg@l
/* 803F77B8 003F46F8  91 01 00 4C */	stw r8, 0x4c(r1)
/* 803F77BC 003F46FC  3A 66 14 F0 */	addi r19, r6, __vt__Q25efx2d7TBaseIF@l
/* 803F77C0 003F4700  EC 01 00 2A */	fadds f0, f1, f0
/* 803F77C4 003F4704  C0 22 1B B4 */	lfs f1, lbl_8051FF14@sda21(r2)
/* 803F77C8 003F4708  90 01 00 54 */	stw r0, 0x54(r1)
/* 803F77CC 003F470C  3A 85 14 D8 */	addi r20, r5, __vt__Q25efx2d5TBase@l
/* 803F77D0 003F4710  C3 82 1C 10 */	lfs f28, lbl_8051FF70@sda21(r2)
/* 803F77D4 003F4714  3A A4 74 88 */	addi r21, r4, __vt__Q25efx2d8TSimple1@l
/* 803F77D8 003F4718  EF 61 00 32 */	fmuls f27, f1, f0
/* 803F77DC 003F471C  C3 A1 00 58 */	lfs f29, 0x58(r1)
/* 803F77E0 003F4720  CB C2 1B E0 */	lfd f30, lbl_8051FF40@sda21(r2)
/* 803F77E4 003F4724  39 E3 3D C4 */	addi r15, r3, __vt__Q25efx2d14T2DChangesmoke@l
/* 803F77E8 003F4728  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 803F77EC 003F472C  3A 00 00 00 */	li r16, 0
/* 803F77F0 003F4730  3E 20 43 30 */	lis r17, 0x4330
.L_803F77F4:
/* 803F77F4 003F4734  6E 00 80 00 */	xoris r0, r16, 0x8000
/* 803F77F8 003F4738  38 A0 00 00 */	li r5, 0
/* 803F77FC 003F473C  90 01 01 0C */	stw r0, 0x10c(r1)
/* 803F7800 003F4740  20 10 00 04 */	subfic r0, r16, 4
/* 803F7804 003F4744  6C 06 80 00 */	xoris r6, r0, 0x8000
/* 803F7808 003F4748  38 00 00 07 */	li r0, 7
/* 803F780C 003F474C  92 21 01 08 */	stw r17, 0x108(r1)
/* 803F7810 003F4750  38 61 00 30 */	addi r3, r1, 0x30
/* 803F7814 003F4754  38 81 00 40 */	addi r4, r1, 0x40
/* 803F7818 003F4758  C8 01 01 08 */	lfd f0, 0x108(r1)
/* 803F781C 003F475C  90 C1 01 04 */	stw r6, 0x104(r1)
/* 803F7820 003F4760  EC 00 F0 28 */	fsubs f0, f0, f30
/* 803F7824 003F4764  92 21 01 00 */	stw r17, 0x100(r1)
/* 803F7828 003F4768  C8 21 01 00 */	lfd f1, 0x100(r1)
/* 803F782C 003F476C  EC 1F 00 32 */	fmuls f0, f31, f0
/* 803F7830 003F4770  D3 61 00 0C */	stfs f27, 0xc(r1)
/* 803F7834 003F4774  EC 21 F0 28 */	fsubs f1, f1, f30
/* 803F7838 003F4778  92 61 00 30 */	stw r19, 0x30(r1)
/* 803F783C 003F477C  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 803F7840 003F4780  EC 1D 00 7A */	fmadds f0, f29, f1, f0
/* 803F7844 003F4784  92 81 00 30 */	stw r20, 0x30(r1)
/* 803F7848 003F4788  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803F784C 003F478C  EC 3C 00 32 */	fmuls f1, f28, f0
/* 803F7850 003F4790  92 A1 00 30 */	stw r21, 0x30(r1)
/* 803F7854 003F4794  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803F7858 003F4798  D0 21 00 08 */	stfs f1, 8(r1)
/* 803F785C 003F479C  80 C1 00 08 */	lwz r6, 8(r1)
/* 803F7860 003F47A0  92 41 00 48 */	stw r18, 0x48(r1)
/* 803F7864 003F47A4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 803F7868 003F47A8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803F786C 003F47AC  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 803F7870 003F47B0  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 803F7874 003F47B4  98 A1 00 34 */	stb r5, 0x34(r1)
/* 803F7878 003F47B8  98 A1 00 35 */	stb r5, 0x35(r1)
/* 803F787C 003F47BC  B0 01 00 38 */	sth r0, 0x38(r1)
/* 803F7880 003F47C0  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 803F7884 003F47C4  91 E1 00 30 */	stw r15, 0x30(r1)
/* 803F7888 003F47C8  4B FC 1F A9 */	bl create__Q25efx2d8TSimple1FPQ25efx2d3Arg
/* 803F788C 003F47CC  3A 10 00 01 */	addi r16, r16, 1
/* 803F7890 003F47D0  2C 10 00 05 */	cmpwi r16, 5
/* 803F7894 003F47D4  41 80 FF 60 */	blt .L_803F77F4
/* 803F7898 003F47D8  3A 20 00 01 */	li r17, 1
.L_803F789C:
/* 803F789C 003F47DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F78A0 003F47E0  38 A1 00 64 */	addi r5, r1, 0x64
/* 803F78A4 003F47E4  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F78A8 003F47E8  4B DF 21 95 */	bl getOtakaraNum_Course_CaveID_Old__Q24Game8PlayDataFiR4ID32
/* 803F78AC 003F47EC  7C 70 1B 78 */	mr r16, r3
/* 803F78B0 003F47F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F78B4 003F47F4  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F78B8 003F47F8  38 A1 00 64 */	addi r5, r1, 0x64
/* 803F78BC 003F47FC  4B DF 11 5D */	bl getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 803F78C0 003F4800  7C 03 80 00 */	cmpw r3, r16
/* 803F78C4 003F4804  41 82 00 44 */	beq .L_803F7908
/* 803F78C8 003F4808  80 78 01 0C */	lwz r3, 0x10c(r24)
/* 803F78CC 003F480C  C0 22 1B 90 */	lfs f1, lbl_8051FEF0@sda21(r2)
/* 803F78D0 003F4810  4B F1 3F 29 */	bl startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
/* 803F78D4 003F4814  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F78D8 003F4818  38 A1 00 64 */	addi r5, r1, 0x64
/* 803F78DC 003F481C  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F78E0 003F4820  3B E0 00 01 */	li r31, 1
/* 803F78E4 003F4824  4B DF 11 ED */	bl getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 803F78E8 003F4828  7C 70 1B 78 */	mr r16, r3
/* 803F78EC 003F482C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 803F78F0 003F4830  80 9D 00 F8 */	lwz r4, 0xf8(r29)
/* 803F78F4 003F4834  38 A1 00 64 */	addi r5, r1, 0x64
/* 803F78F8 003F4838  4B DF 11 21 */	bl getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
/* 803F78FC 003F483C  7C 03 80 00 */	cmpw r3, r16
/* 803F7900 003F4840  40 82 00 08 */	bne .L_803F7908
/* 803F7904 003F4844  3B C0 00 01 */	li r30, 1
.L_803F7908:
/* 803F7908 003F4848  3A F7 00 01 */	addi r23, r23, 1
/* 803F790C 003F484C  3B 18 00 04 */	addi r24, r24, 4
/* 803F7910 003F4850  2C 17 00 04 */	cmpwi r23, 4
/* 803F7914 003F4854  3B 39 00 08 */	addi r25, r25, 8
/* 803F7918 003F4858  41 80 FD 5C */	blt .L_803F7674
/* 803F791C 003F485C  56 20 06 3F */	clrlwi. r0, r17, 0x18
/* 803F7920 003F4860  38 80 FF FF */	li r4, -1
/* 803F7924 003F4864  41 82 00 14 */	beq .L_803F7938
/* 803F7928 003F4868  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803F792C 003F486C  41 82 00 0C */	beq .L_803F7938
/* 803F7930 003F4870  38 80 18 43 */	li r4, 0x1843
/* 803F7934 003F4874  48 00 00 70 */	b .L_803F79A4
.L_803F7938:
/* 803F7938 003F4878  56 20 06 3F */	clrlwi. r0, r17, 0x18
/* 803F793C 003F487C  41 82 00 14 */	beq .L_803F7950
/* 803F7940 003F4880  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803F7944 003F4884  41 82 00 0C */	beq .L_803F7950
/* 803F7948 003F4888  38 80 18 42 */	li r4, 0x1842
/* 803F794C 003F488C  48 00 00 58 */	b .L_803F79A4
.L_803F7950:
/* 803F7950 003F4890  56 20 06 3F */	clrlwi. r0, r17, 0x18
/* 803F7954 003F4894  41 82 00 14 */	beq .L_803F7968
/* 803F7958 003F4898  56 C0 06 3F */	clrlwi. r0, r22, 0x18
/* 803F795C 003F489C  41 82 00 0C */	beq .L_803F7968
/* 803F7960 003F48A0  38 80 18 41 */	li r4, 0x1841
/* 803F7964 003F48A4  48 00 00 40 */	b .L_803F79A4
.L_803F7968:
/* 803F7968 003F48A8  56 20 06 3F */	clrlwi. r0, r17, 0x18
/* 803F796C 003F48AC  41 82 00 0C */	beq .L_803F7978
/* 803F7970 003F48B0  38 80 18 40 */	li r4, 0x1840
/* 803F7974 003F48B4  48 00 00 30 */	b .L_803F79A4
.L_803F7978:
/* 803F7978 003F48B8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803F797C 003F48BC  41 82 00 0C */	beq .L_803F7988
/* 803F7980 003F48C0  38 80 18 3F */	li r4, 0x183f
/* 803F7984 003F48C4  48 00 00 20 */	b .L_803F79A4
.L_803F7988:
/* 803F7988 003F48C8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803F798C 003F48CC  41 82 00 0C */	beq .L_803F7998
/* 803F7990 003F48D0  38 80 18 3E */	li r4, 0x183e
/* 803F7994 003F48D4  48 00 00 10 */	b .L_803F79A4
.L_803F7998:
/* 803F7998 003F48D8  56 C0 06 3F */	clrlwi. r0, r22, 0x18
/* 803F799C 003F48DC  41 82 00 08 */	beq .L_803F79A4
/* 803F79A0 003F48E0  38 80 18 3D */	li r4, 0x183d
.L_803F79A4:
/* 803F79A4 003F48E4  3C 04 00 01 */	addis r0, r4, 1
/* 803F79A8 003F48E8  28 00 FF FF */	cmplwi r0, 0xffff
/* 803F79AC 003F48EC  41 82 00 10 */	beq .L_803F79BC
/* 803F79B0 003F48F0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803F79B4 003F48F4  38 A0 00 00 */	li r5, 0
/* 803F79B8 003F48F8  4B F4 0C 79 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803F79BC:
/* 803F79BC 003F48FC  80 1D 01 7C */	lwz r0, 0x17c(r29)
/* 803F79C0 003F4900  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 803F79C4 003F4904  90 1D 01 7C */	stw r0, 0x17c(r29)
.L_803F79C8:
/* 803F79C8 003F4908  E3 E1 01 A8 */	psq_l f31, 424(r1), 0, qr0
/* 803F79CC 003F490C  CB E1 01 A0 */	lfd f31, 0x1a0(r1)
/* 803F79D0 003F4910  E3 C1 01 98 */	psq_l f30, 408(r1), 0, qr0
/* 803F79D4 003F4914  CB C1 01 90 */	lfd f30, 0x190(r1)
/* 803F79D8 003F4918  E3 A1 01 88 */	psq_l f29, 392(r1), 0, qr0
/* 803F79DC 003F491C  CB A1 01 80 */	lfd f29, 0x180(r1)
/* 803F79E0 003F4920  E3 81 01 78 */	psq_l f28, 376(r1), 0, qr0
/* 803F79E4 003F4924  CB 81 01 70 */	lfd f28, 0x170(r1)
/* 803F79E8 003F4928  E3 61 01 68 */	psq_l f27, 360(r1), 0, qr0
/* 803F79EC 003F492C  CB 61 01 60 */	lfd f27, 0x160(r1)
/* 803F79F0 003F4930  B9 E1 01 1C */	lmw r15, 0x11c(r1)
/* 803F79F4 003F4934  80 01 01 B4 */	lwz r0, 0x1b4(r1)
/* 803F79F8 003F4938  7C 08 03 A6 */	mtlr r0
/* 803F79FC 003F493C  38 21 01 B0 */	addi r1, r1, 0x1b0
/* 803F7A00 003F4940  4E 80 00 20 */	blr 
.endfn effectFirstTime__Q32kh6Screen8WorldMapFv

.fn __ct__Q42kh6Screen8WorldMap13OnyonDynamicsFv, global
/* 803F7A04 003F4944  38 00 00 00 */	li r0, 0
/* 803F7A08 003F4948  C0 42 1B B0 */	lfs f2, lbl_8051FF10@sda21(r2)
/* 803F7A0C 003F494C  B0 03 00 30 */	sth r0, 0x30(r3)
/* 803F7A10 003F4950  C0 22 1B 94 */	lfs f1, lbl_8051FEF4@sda21(r2)
/* 803F7A14 003F4954  90 03 00 00 */	stw r0, 0(r3)
/* 803F7A18 003F4958  C0 02 1B 98 */	lfs f0, lbl_8051FEF8@sda21(r2)
/* 803F7A1C 003F495C  D0 43 00 04 */	stfs f2, 4(r3)
/* 803F7A20 003F4960  D0 23 00 08 */	stfs f1, 8(r3)
/* 803F7A24 003F4964  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 803F7A28 003F4968  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 803F7A2C 003F496C  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 803F7A30 003F4970  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 803F7A34 003F4974  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 803F7A38 003F4978  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 803F7A3C 003F497C  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 803F7A40 003F4980  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 803F7A44 003F4984  4E 80 00 20 */	blr 
.endfn __ct__Q42kh6Screen8WorldMap13OnyonDynamicsFv

.fn initPtcl__Q42kh6Screen8WorldMap13OnyonDynamicsFv, global
/* 803F7A48 003F4988  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F7A4C 003F498C  7C 08 02 A6 */	mflr r0
/* 803F7A50 003F4990  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F7A54 003F4994  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F7A58 003F4998  7C 7F 1B 78 */	mr r31, r3
/* 803F7A5C 003F499C  38 60 00 28 */	li r3, 0x28
/* 803F7A60 003F49A0  4B C2 C4 45 */	bl __nw__FUl
/* 803F7A64 003F49A4  28 03 00 00 */	cmplwi r3, 0
/* 803F7A68 003F49A8  41 82 00 90 */	beq .L_803F7AF8
/* 803F7A6C 003F49AC  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803F7A70 003F49B0  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803F7A74 003F49B4  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803F7A78 003F49B8  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803F7A7C 003F49BC  90 03 00 00 */	stw r0, 0(r3)
/* 803F7A80 003F49C0  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803F7A84 003F49C4  3C A0 80 4E */	lis r5, __vt__Q25efx2d8TForever@ha
/* 803F7A88 003F49C8  3C 80 80 4E */	lis r4, __vt__Q25efx2d12TChasePosDir@ha
/* 803F7A8C 003F49CC  90 03 00 00 */	stw r0, 0(r3)
/* 803F7A90 003F49D0  39 80 00 00 */	li r12, 0
/* 803F7A94 003F49D4  39 65 74 20 */	addi r11, r5, __vt__Q25efx2d8TForever@l
/* 803F7A98 003F49D8  39 24 73 90 */	addi r9, r4, __vt__Q25efx2d12TChasePosDir@l
/* 803F7A9C 003F49DC  99 83 00 04 */	stb r12, 4(r3)
/* 803F7AA0 003F49E0  3C 80 80 4E */	lis r4, __vt__Q35efx2d8WorldMap12T2DOnyonKira@ha
/* 803F7AA4 003F49E4  38 A4 74 DC */	addi r5, r4, __vt__Q35efx2d8WorldMap12T2DOnyonKira@l
/* 803F7AA8 003F49E8  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803F7AAC 003F49EC  99 83 00 05 */	stb r12, 5(r3)
/* 803F7AB0 003F49F0  39 4B 00 18 */	addi r10, r11, 0x18
/* 803F7AB4 003F49F4  39 09 00 18 */	addi r8, r9, 0x18
/* 803F7AB8 003F49F8  38 FF 00 20 */	addi r7, r31, 0x20
/* 803F7ABC 003F49FC  90 03 00 08 */	stw r0, 8(r3)
/* 803F7AC0 003F4A00  38 DF 00 28 */	addi r6, r31, 0x28
/* 803F7AC4 003F4A04  38 85 00 18 */	addi r4, r5, 0x18
/* 803F7AC8 003F4A08  38 00 00 01 */	li r0, 1
/* 803F7ACC 003F4A0C  91 63 00 00 */	stw r11, 0(r3)
/* 803F7AD0 003F4A10  91 43 00 08 */	stw r10, 8(r3)
/* 803F7AD4 003F4A14  B1 83 00 0C */	sth r12, 0xc(r3)
/* 803F7AD8 003F4A18  91 83 00 10 */	stw r12, 0x10(r3)
/* 803F7ADC 003F4A1C  91 23 00 00 */	stw r9, 0(r3)
/* 803F7AE0 003F4A20  91 03 00 08 */	stw r8, 8(r3)
/* 803F7AE4 003F4A24  90 E3 00 14 */	stw r7, 0x14(r3)
/* 803F7AE8 003F4A28  90 C3 00 18 */	stw r6, 0x18(r3)
/* 803F7AEC 003F4A2C  90 A3 00 00 */	stw r5, 0(r3)
/* 803F7AF0 003F4A30  90 83 00 08 */	stw r4, 8(r3)
/* 803F7AF4 003F4A34  98 03 00 04 */	stb r0, 4(r3)
.L_803F7AF8:
/* 803F7AF8 003F4A38  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 803F7AFC 003F4A3C  38 80 00 03 */	li r4, 3
/* 803F7B00 003F4A40  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803F7B04 003F4A44  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7B08 003F4A48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803F7B0C 003F4A4C  7D 89 03 A6 */	mtctr r12
/* 803F7B10 003F4A50  4E 80 04 21 */	bctrl 
/* 803F7B14 003F4A54  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803F7B18 003F4A58  38 80 00 00 */	li r4, 0
/* 803F7B1C 003F4A5C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7B20 003F4A60  81 8C 00 08 */	lwz r12, 8(r12)
/* 803F7B24 003F4A64  7D 89 03 A6 */	mtctr r12
/* 803F7B28 003F4A68  4E 80 04 21 */	bctrl 
/* 803F7B2C 003F4A6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F7B30 003F4A70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F7B34 003F4A74  7C 08 03 A6 */	mtlr r0
/* 803F7B38 003F4A78  38 21 00 10 */	addi r1, r1, 0x10
/* 803F7B3C 003F4A7C  4E 80 00 20 */	blr 
.endfn initPtcl__Q42kh6Screen8WorldMap13OnyonDynamicsFv

.fn "move__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMapRCQ29JGeometry8TVec2<f>", global
/* 803F7B40 003F4A80  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803F7B44 003F4A84  7C 08 02 A6 */	mflr r0
/* 803F7B48 003F4A88  90 01 00 64 */	stw r0, 0x64(r1)
/* 803F7B4C 003F4A8C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 803F7B50 003F4A90  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 803F7B54 003F4A94  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 803F7B58 003F4A98  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 803F7B5C 003F4A9C  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 803F7B60 003F4AA0  3C E0 80 4A */	lis r7, lbl_80498328@ha
/* 803F7B64 003F4AA4  7C BF 2B 78 */	mr r31, r5
/* 803F7B68 003F4AA8  38 A7 83 28 */	addi r5, r7, lbl_80498328@l
/* 803F7B6C 003F4AAC  7C 7D 1B 78 */	mr r29, r3
/* 803F7B70 003F4AB0  C8 65 00 00 */	lfd f3, 0(r5)
/* 803F7B74 003F4AB4  38 01 00 08 */	addi r0, r1, 8
/* 803F7B78 003F4AB8  C8 45 00 08 */	lfd f2, 8(r5)
/* 803F7B7C 003F4ABC  7C DB 33 78 */	mr r27, r6
/* 803F7B80 003F4AC0  C8 25 00 10 */	lfd f1, 0x10(r5)
/* 803F7B84 003F4AC4  7C 9E 23 78 */	mr r30, r4
/* 803F7B88 003F4AC8  C8 05 00 18 */	lfd f0, 0x18(r5)
/* 803F7B8C 003F4ACC  D8 61 00 08 */	stfd f3, 8(r1)
/* 803F7B90 003F4AD0  D8 41 00 10 */	stfd f2, 0x10(r1)
/* 803F7B94 003F4AD4  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 803F7B98 003F4AD8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803F7B9C 003F4ADC  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803F7BA0 003F4AE0  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 803F7BA4 003F4AE4  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7BA8 003F4AE8  54 84 18 38 */	slwi r4, r4, 3
/* 803F7BAC 003F4AEC  7C C0 22 14 */	add r6, r0, r4
/* 803F7BB0 003F4AF0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F7BB4 003F4AF4  80 A6 00 00 */	lwz r5, 0(r6)
/* 803F7BB8 003F4AF8  80 C6 00 04 */	lwz r6, 4(r6)
/* 803F7BBC 003F4AFC  7D 89 03 A6 */	mtctr r12
/* 803F7BC0 003F4B00  4E 80 04 21 */	bctrl 
/* 803F7BC4 003F4B04  C0 3B 00 04 */	lfs f1, 4(r27)
/* 803F7BC8 003F4B08  C0 1E 00 08 */	lfs f0, 8(r30)
/* 803F7BCC 003F4B0C  C0 5B 00 00 */	lfs f2, 0(r27)
/* 803F7BD0 003F4B10  EF C1 00 28 */	fsubs f30, f1, f0
/* 803F7BD4 003F4B14  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803F7BD8 003F4B18  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F7BDC 003F4B1C  EF E2 08 28 */	fsubs f31, f2, f1
/* 803F7BE0 003F4B20  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 803F7BE4 003F4B24  EC 3F 0F FA */	fmadds f1, f31, f31, f1
/* 803F7BE8 003F4B28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F7BEC 003F4B2C  4C 40 13 82 */	cror 2, 0, 2
/* 803F7BF0 003F4B30  40 82 00 0C */	bne .L_803F7BFC
/* 803F7BF4 003F4B34  FC 00 08 90 */	fmr f0, f1
/* 803F7BF8 003F4B38  48 00 00 28 */	b .L_803F7C20
.L_803F7BFC:
/* 803F7BFC 003F4B3C  FC 80 08 34 */	frsqrte f4, f1
/* 803F7C00 003F4B40  C0 62 1B B4 */	lfs f3, lbl_8051FF14@sda21(r2)
/* 803F7C04 003F4B44  C0 02 1B C4 */	lfs f0, lbl_8051FF24@sda21(r2)
/* 803F7C08 003F4B48  FC 80 20 18 */	frsp f4, f4
/* 803F7C0C 003F4B4C  EC 44 01 32 */	fmuls f2, f4, f4
/* 803F7C10 003F4B50  EC 63 01 32 */	fmuls f3, f3, f4
/* 803F7C14 003F4B54  EC 01 00 BC */	fnmsubs f0, f1, f2, f0
/* 803F7C18 003F4B58  EC 03 00 32 */	fmuls f0, f3, f0
/* 803F7C1C 003F4B5C  EC 01 00 32 */	fmuls f0, f1, f0
.L_803F7C20:
/* 803F7C20 003F4B60  AB 9E 00 30 */	lha r28, 0x30(r30)
/* 803F7C24 003F4B64  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F7C28 003F4B68  38 1C 01 F4 */	addi r0, r28, 0x1f4
/* 803F7C2C 003F4B6C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803F7C30 003F4B70  B0 1E 00 30 */	sth r0, 0x30(r30)
/* 803F7C34 003F4B74  40 80 00 84 */	bge .L_803F7CB8
/* 803F7C38 003F4B78  C0 7F 00 9C */	lfs f3, 0x9c(r31)
/* 803F7C3C 003F4B7C  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F7C40 003F4B80  C0 5E 00 04 */	lfs f2, 4(r30)
/* 803F7C44 003F4B84  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F7C48 003F4B88  C0 83 00 3C */	lfs f4, 0x3c(r3)
/* 803F7C4C 003F4B8C  EC 63 10 28 */	fsubs f3, f3, f2
/* 803F7C50 003F4B90  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 803F7C54 003F4B94  EC 44 10 FA */	fmadds f2, f4, f3, f2
/* 803F7C58 003F4B98  D0 5E 00 0C */	stfs f2, 0xc(r30)
/* 803F7C5C 003F4B9C  C0 7F 00 A0 */	lfs f3, 0xa0(r31)
/* 803F7C60 003F4BA0  C0 5E 00 08 */	lfs f2, 8(r30)
/* 803F7C64 003F4BA4  C0 83 00 3C */	lfs f4, 0x3c(r3)
/* 803F7C68 003F4BA8  EC 63 10 28 */	fsubs f3, f3, f2
/* 803F7C6C 003F4BAC  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 803F7C70 003F4BB0  EC 44 10 FA */	fmadds f2, f4, f3, f2
/* 803F7C74 003F4BB4  D0 5E 00 10 */	stfs f2, 0x10(r30)
/* 803F7C78 003F4BB8  C0 63 00 40 */	lfs f3, 0x40(r3)
/* 803F7C7C 003F4BBC  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 803F7C80 003F4BC0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F7C84 003F4BC4  D0 5E 00 0C */	stfs f2, 0xc(r30)
/* 803F7C88 003F4BC8  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 803F7C8C 003F4BCC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F7C90 003F4BD0  D0 5E 00 10 */	stfs f2, 0x10(r30)
/* 803F7C94 003F4BD4  C0 7E 00 04 */	lfs f3, 4(r30)
/* 803F7C98 003F4BD8  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 803F7C9C 003F4BDC  EC 43 10 2A */	fadds f2, f3, f2
/* 803F7CA0 003F4BE0  D0 5E 00 04 */	stfs f2, 4(r30)
/* 803F7CA4 003F4BE4  C0 7E 00 08 */	lfs f3, 8(r30)
/* 803F7CA8 003F4BE8  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 803F7CAC 003F4BEC  EC 43 10 2A */	fadds f2, f3, f2
/* 803F7CB0 003F4BF0  D0 5E 00 08 */	stfs f2, 8(r30)
/* 803F7CB4 003F4BF4  48 00 00 9C */	b .L_803F7D50
.L_803F7CB8:
/* 803F7CB8 003F4BF8  C0 7B 00 00 */	lfs f3, 0(r27)
/* 803F7CBC 003F4BFC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F7CC0 003F4C00  C0 5E 00 04 */	lfs f2, 4(r30)
/* 803F7CC4 003F4C04  38 83 40 58 */	addi r4, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F7CC8 003F4C08  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803F7CCC 003F4C0C  C0 C4 00 3C */	lfs f6, 0x3c(r4)
/* 803F7CD0 003F4C10  EC 83 10 28 */	fsubs f4, f3, f2
/* 803F7CD4 003F4C14  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 803F7CD8 003F4C18  C0 7B 00 04 */	lfs f3, 4(r27)
/* 803F7CDC 003F4C1C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803F7CE0 003F4C20  C0 A2 1C 00 */	lfs f5, lbl_8051FF60@sda21(r2)
/* 803F7CE4 003F4C24  EC 46 11 3A */	fmadds f2, f6, f4, f2
/* 803F7CE8 003F4C28  D0 5E 00 0C */	stfs f2, 0xc(r30)
/* 803F7CEC 003F4C2C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 803F7CF0 003F4C30  C0 84 00 3C */	lfs f4, 0x3c(r4)
/* 803F7CF4 003F4C34  EC 63 10 28 */	fsubs f3, f3, f2
/* 803F7CF8 003F4C38  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 803F7CFC 003F4C3C  EC 44 10 FA */	fmadds f2, f4, f3, f2
/* 803F7D00 003F4C40  D0 5E 00 10 */	stfs f2, 0x10(r30)
/* 803F7D04 003F4C44  A8 1E 00 30 */	lha r0, 0x30(r30)
/* 803F7D08 003F4C48  C0 64 00 40 */	lfs f3, 0x40(r4)
/* 803F7D0C 003F4C4C  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 803F7D10 003F4C50  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 803F7D14 003F4C54  7C 83 04 2E */	lfsx f4, r3, r0
/* 803F7D18 003F4C58  EC 65 19 3A */	fmadds f3, f5, f4, f3
/* 803F7D1C 003F4C5C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F7D20 003F4C60  D0 5E 00 0C */	stfs f2, 0xc(r30)
/* 803F7D24 003F4C64  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 803F7D28 003F4C68  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803F7D2C 003F4C6C  D0 5E 00 10 */	stfs f2, 0x10(r30)
/* 803F7D30 003F4C70  C0 7E 00 04 */	lfs f3, 4(r30)
/* 803F7D34 003F4C74  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 803F7D38 003F4C78  EC 43 10 2A */	fadds f2, f3, f2
/* 803F7D3C 003F4C7C  D0 5E 00 04 */	stfs f2, 4(r30)
/* 803F7D40 003F4C80  C0 7E 00 08 */	lfs f3, 8(r30)
/* 803F7D44 003F4C84  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 803F7D48 003F4C88  EC 43 10 2A */	fadds f2, f3, f2
/* 803F7D4C 003F4C8C  D0 5E 00 08 */	stfs f2, 8(r30)
.L_803F7D50:
/* 803F7D50 003F4C90  C0 42 1C 14 */	lfs f2, lbl_8051FF74@sda21(r2)
/* 803F7D54 003F4C94  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803F7D58 003F4C98  40 80 00 BC */	bge .L_803F7E14
/* 803F7D5C 003F4C9C  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803F7D60 003F4CA0  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 803F7D64 003F4CA4  FC 40 00 50 */	fneg f2, f0
/* 803F7D68 003F4CA8  48 01 9A 75 */	bl pikmin2_atan2f__Fff
/* 803F7D6C 003F4CAC  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F7D70 003F4CB0  C0 02 1B BC */	lfs f0, lbl_8051FF1C@sda21(r2)
/* 803F7D74 003F4CB4  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F7D78 003F4CB8  C0 43 00 44 */	lfs f2, 0x44(r3)
/* 803F7D7C 003F4CBC  EF E1 00 B2 */	fmuls f31, f1, f2
/* 803F7D80 003F4CC0  EC 5F 08 28 */	fsubs f2, f31, f1
/* 803F7D84 003F4CC4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F7D88 003F4CC8  40 80 00 10 */	bge .L_803F7D98
/* 803F7D8C 003F4CCC  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F7D90 003F4CD0  EF E1 00 28 */	fsubs f31, f1, f0
/* 803F7D94 003F4CD4  48 00 00 14 */	b .L_803F7DA8
.L_803F7D98:
/* 803F7D98 003F4CD8  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F7D9C 003F4CDC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F7DA0 003F4CE0  40 81 00 08 */	ble .L_803F7DA8
/* 803F7DA4 003F4CE4  EF E0 08 2A */	fadds f31, f0, f1
.L_803F7DA8:
/* 803F7DA8 003F4CE8  FC 20 F8 90 */	fmr f1, f31
/* 803F7DAC 003F4CEC  48 01 99 ED */	bl pikmin2_cosf__Ff
/* 803F7DB0 003F4CF0  FF C0 08 50 */	fneg f30, f1
/* 803F7DB4 003F4CF4  FC 20 F8 90 */	fmr f1, f31
/* 803F7DB8 003F4CF8  48 01 99 79 */	bl pikmin2_sinf__Ff
/* 803F7DBC 003F4CFC  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 803F7DC0 003F4D00  2C 1C C0 00 */	cmpwi r28, -16384
/* 803F7DC4 003F4D04  D3 DE 00 18 */	stfs f30, 0x18(r30)
/* 803F7DC8 003F4D08  40 80 00 24 */	bge .L_803F7DEC
/* 803F7DCC 003F4D0C  A8 1E 00 30 */	lha r0, 0x30(r30)
/* 803F7DD0 003F4D10  2C 00 C0 00 */	cmpwi r0, -16384
/* 803F7DD4 003F4D14  40 81 00 18 */	ble .L_803F7DEC
/* 803F7DD8 003F4D18  80 7E 00 00 */	lwz r3, 0(r30)
/* 803F7DDC 003F4D1C  4B C4 13 05 */	bl getParentPane__7J2DPaneFv
/* 803F7DE0 003F4D20  80 9E 00 00 */	lwz r4, 0(r30)
/* 803F7DE4 003F4D24  4B C3 F8 E1 */	bl appendChild__7J2DPaneFP7J2DPane
/* 803F7DE8 003F4D28  48 00 01 70 */	b .L_803F7F58
.L_803F7DEC:
/* 803F7DEC 003F4D2C  2C 1C 40 00 */	cmpwi r28, 0x4000
/* 803F7DF0 003F4D30  40 80 01 68 */	bge .L_803F7F58
/* 803F7DF4 003F4D34  A8 1E 00 30 */	lha r0, 0x30(r30)
/* 803F7DF8 003F4D38  2C 00 40 00 */	cmpwi r0, 0x4000
/* 803F7DFC 003F4D3C  40 81 01 5C */	ble .L_803F7F58
/* 803F7E00 003F4D40  80 7E 00 00 */	lwz r3, 0(r30)
/* 803F7E04 003F4D44  4B C4 12 DD */	bl getParentPane__7J2DPaneFv
/* 803F7E08 003F4D48  80 9E 00 00 */	lwz r4, 0(r30)
/* 803F7E0C 003F4D4C  4B C3 F9 71 */	bl prependChild__7J2DPaneFP7J2DPane
/* 803F7E10 003F4D50  48 00 01 48 */	b .L_803F7F58
.L_803F7E14:
/* 803F7E14 003F4D54  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 803F7E18 003F4D58  C0 42 1B C0 */	lfs f2, lbl_8051FF20@sda21(r2)
/* 803F7E1C 003F4D5C  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 803F7E20 003F4D60  EC 02 00 32 */	fmuls f0, f2, f0
/* 803F7E24 003F4D64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F7E28 003F4D68  4C 40 13 82 */	cror 2, 0, 2
/* 803F7E2C 003F4D6C  41 82 00 40 */	beq .L_803F7E6C
/* 803F7E30 003F4D70  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F7E34 003F4D74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F7E38 003F4D78  4C 40 13 82 */	cror 2, 0, 2
/* 803F7E3C 003F4D7C  40 82 00 08 */	bne .L_803F7E44
/* 803F7E40 003F4D80  48 00 00 24 */	b .L_803F7E64
.L_803F7E44:
/* 803F7E44 003F4D84  FC 80 08 34 */	frsqrte f4, f1
/* 803F7E48 003F4D88  C0 62 1B B4 */	lfs f3, lbl_8051FF14@sda21(r2)
/* 803F7E4C 003F4D8C  C0 02 1B C4 */	lfs f0, lbl_8051FF24@sda21(r2)
/* 803F7E50 003F4D90  FC 80 20 18 */	frsp f4, f4
/* 803F7E54 003F4D94  EC 44 01 32 */	fmuls f2, f4, f4
/* 803F7E58 003F4D98  EC 63 01 32 */	fmuls f3, f3, f4
/* 803F7E5C 003F4D9C  EC 01 00 BC */	fnmsubs f0, f1, f2, f0
/* 803F7E60 003F4DA0  EC 23 00 32 */	fmuls f1, f3, f0
.L_803F7E64:
/* 803F7E64 003F4DA4  EF FF 00 72 */	fmuls f31, f31, f1
/* 803F7E68 003F4DA8  EF DE 00 72 */	fmuls f30, f30, f1
.L_803F7E6C:
/* 803F7E6C 003F4DAC  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803F7E70 003F4DB0  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 803F7E74 003F4DB4  FC 40 00 50 */	fneg f2, f0
/* 803F7E78 003F4DB8  48 01 99 65 */	bl pikmin2_atan2f__Fff
/* 803F7E7C 003F4DBC  FC 00 08 90 */	fmr f0, f1
/* 803F7E80 003F4DC0  FC 20 F8 90 */	fmr f1, f31
/* 803F7E84 003F4DC4  FC 40 F0 50 */	fneg f2, f30
/* 803F7E88 003F4DC8  FF C0 00 90 */	fmr f30, f0
/* 803F7E8C 003F4DCC  48 01 99 51 */	bl pikmin2_atan2f__Fff
/* 803F7E90 003F4DD0  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F7E94 003F4DD4  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803F7E98 003F4DD8  40 80 00 0C */	bge .L_803F7EA4
/* 803F7E9C 003F4DDC  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F7EA0 003F4DE0  EF DE 00 2A */	fadds f30, f30, f0
.L_803F7EA4:
/* 803F7EA4 003F4DE4  C0 02 1B 94 */	lfs f0, lbl_8051FEF4@sda21(r2)
/* 803F7EA8 003F4DE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F7EAC 003F4DEC  40 80 00 0C */	bge .L_803F7EB8
/* 803F7EB0 003F4DF0  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F7EB4 003F4DF4  EC 21 00 2A */	fadds f1, f1, f0
.L_803F7EB8:
/* 803F7EB8 003F4DF8  FC 1E 08 40 */	fcmpo cr0, f30, f1
/* 803F7EBC 003F4DFC  40 80 00 20 */	bge .L_803F7EDC
/* 803F7EC0 003F4E00  EC 41 F0 28 */	fsubs f2, f1, f30
/* 803F7EC4 003F4E04  C0 02 1B F4 */	lfs f0, lbl_8051FF54@sda21(r2)
/* 803F7EC8 003F4E08  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F7ECC 003F4E0C  40 81 00 28 */	ble .L_803F7EF4
/* 803F7ED0 003F4E10  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F7ED4 003F4E14  EF DE 00 2A */	fadds f30, f30, f0
/* 803F7ED8 003F4E18  48 00 00 1C */	b .L_803F7EF4
.L_803F7EDC:
/* 803F7EDC 003F4E1C  EC 5E 08 28 */	fsubs f2, f30, f1
/* 803F7EE0 003F4E20  C0 02 1B F4 */	lfs f0, lbl_8051FF54@sda21(r2)
/* 803F7EE4 003F4E24  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803F7EE8 003F4E28  40 81 00 0C */	ble .L_803F7EF4
/* 803F7EEC 003F4E2C  C0 02 1B C8 */	lfs f0, lbl_8051FF28@sda21(r2)
/* 803F7EF0 003F4E30  EC 21 00 2A */	fadds f1, f1, f0
.L_803F7EF4:
/* 803F7EF4 003F4E34  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F7EF8 003F4E38  C0 42 1B 90 */	lfs f2, lbl_8051FEF0@sda21(r2)
/* 803F7EFC 003F4E3C  38 63 40 58 */	addi r3, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F7F00 003F4E40  C0 02 1B BC */	lfs f0, lbl_8051FF1C@sda21(r2)
/* 803F7F04 003F4E44  C0 63 00 44 */	lfs f3, 0x44(r3)
/* 803F7F08 003F4E48  EC 42 18 28 */	fsubs f2, f2, f3
/* 803F7F0C 003F4E4C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 803F7F10 003F4E50  EF FE 08 FA */	fmadds f31, f30, f3, f1
/* 803F7F14 003F4E54  EC 3F F0 28 */	fsubs f1, f31, f30
/* 803F7F18 003F4E58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F7F1C 003F4E5C  40 80 00 10 */	bge .L_803F7F2C
/* 803F7F20 003F4E60  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F7F24 003F4E64  EF FE 00 28 */	fsubs f31, f30, f0
/* 803F7F28 003F4E68  48 00 00 14 */	b .L_803F7F3C
.L_803F7F2C:
/* 803F7F2C 003F4E6C  C0 02 1B A4 */	lfs f0, lbl_8051FF04@sda21(r2)
/* 803F7F30 003F4E70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803F7F34 003F4E74  40 81 00 08 */	ble .L_803F7F3C
/* 803F7F38 003F4E78  EF E0 F0 2A */	fadds f31, f0, f30
.L_803F7F3C:
/* 803F7F3C 003F4E7C  FC 20 F8 90 */	fmr f1, f31
/* 803F7F40 003F4E80  48 01 98 59 */	bl pikmin2_cosf__Ff
/* 803F7F44 003F4E84  FF C0 08 50 */	fneg f30, f1
/* 803F7F48 003F4E88  FC 20 F8 90 */	fmr f1, f31
/* 803F7F4C 003F4E8C  48 01 97 E5 */	bl pikmin2_sinf__Ff
/* 803F7F50 003F4E90  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 803F7F54 003F4E94  D3 DE 00 18 */	stfs f30, 0x18(r30)
.L_803F7F58:
/* 803F7F58 003F4E98  7F C3 F3 78 */	mr r3, r30
/* 803F7F5C 003F4E9C  7F E4 FB 78 */	mr r4, r31
/* 803F7F60 003F4EA0  48 00 00 39 */	bl update__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMap
/* 803F7F64 003F4EA4  C0 1E 00 04 */	lfs f0, 4(r30)
/* 803F7F68 003F4EA8  D0 1D 00 00 */	stfs f0, 0(r29)
/* 803F7F6C 003F4EAC  C0 1E 00 08 */	lfs f0, 8(r30)
/* 803F7F70 003F4EB0  D0 1D 00 04 */	stfs f0, 4(r29)
/* 803F7F74 003F4EB4  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 803F7F78 003F4EB8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 803F7F7C 003F4EBC  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 803F7F80 003F4EC0  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 803F7F84 003F4EC4  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 803F7F88 003F4EC8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803F7F8C 003F4ECC  7C 08 03 A6 */	mtlr r0
/* 803F7F90 003F4ED0  38 21 00 60 */	addi r1, r1, 0x60
/* 803F7F94 003F4ED4  4E 80 00 20 */	blr 
.endfn "move__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMapRCQ29JGeometry8TVec2<f>"

.fn update__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMap, global
/* 803F7F98 003F4ED8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803F7F9C 003F4EDC  7C 08 02 A6 */	mflr r0
/* 803F7FA0 003F4EE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803F7FA4 003F4EE4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 803F7FA8 003F4EE8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 803F7FAC 003F4EEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F7FB0 003F4EF0  7C 7F 1B 78 */	mr r31, r3
/* 803F7FB4 003F4EF4  80 64 00 48 */	lwz r3, 0x48(r4)
/* 803F7FB8 003F4EF8  3C A0 43 4B */	lis r5, 0x434B4554@ha
/* 803F7FBC 003F4EFC  3C 80 00 4E */	lis r4, 0x004E524F@ha
/* 803F7FC0 003F4F00  81 83 00 00 */	lwz r12, 0(r3)
/* 803F7FC4 003F4F04  38 C5 45 54 */	addi r6, r5, 0x434B4554@l
/* 803F7FC8 003F4F08  38 A4 52 4F */	addi r5, r4, 0x004E524F@l
/* 803F7FCC 003F4F0C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803F7FD0 003F4F10  7D 89 03 A6 */	mtctr r12
/* 803F7FD4 003F4F14  4E 80 04 21 */	bctrl 
/* 803F7FD8 003F4F18  A8 1F 00 30 */	lha r0, 0x30(r31)
/* 803F7FDC 003F4F1C  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 803F7FE0 003F4F20  C3 E3 00 CC */	lfs f31, 0xcc(r3)
/* 803F7FE4 003F4F24  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 803F7FE8 003F4F28  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 803F7FEC 003F4F2C  C0 22 1C 18 */	lfs f1, lbl_8051FF78@sda21(r2)
/* 803F7FF0 003F4F30  7C 04 04 2E */	lfsx f0, r4, r0
/* 803F7FF4 003F4F34  80 7F 00 00 */	lwz r3, 0(r31)
/* 803F7FF8 003F4F38  EC 21 00 32 */	fmuls f1, f1, f0
/* 803F7FFC 003F4F3C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 803F8000 003F4F40  C0 5F 00 08 */	lfs f2, 8(r31)
/* 803F8004 003F4F44  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 803F8008 003F4F48  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 803F800C 003F4F4C  D0 43 00 D8 */	stfs f2, 0xd8(r3)
/* 803F8010 003F4F50  81 83 00 00 */	lwz r12, 0(r3)
/* 803F8014 003F4F54  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F8018 003F4F58  7D 89 03 A6 */	mtctr r12
/* 803F801C 003F4F5C  4E 80 04 21 */	bctrl 
/* 803F8020 003F4F60  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 803F8024 003F4F64  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803F8028 003F4F68  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 803F802C 003F4F6C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803F8030 003F4F70  FC 20 08 50 */	fneg f1, f1
/* 803F8034 003F4F74  FC 40 00 50 */	fneg f2, f0
/* 803F8038 003F4F78  4B C3 D0 D1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803F803C 003F4F7C  C0 02 1B D4 */	lfs f0, lbl_8051FF34@sda21(r2)
/* 803F8040 003F4F80  80 7F 00 00 */	lwz r3, 0(r31)
/* 803F8044 003F4F84  EC 01 00 32 */	fmuls f0, f1, f0
/* 803F8048 003F4F88  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 803F804C 003F4F8C  81 83 00 00 */	lwz r12, 0(r3)
/* 803F8050 003F4F90  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F8054 003F4F94  7D 89 03 A6 */	mtctr r12
/* 803F8058 003F4F98  4E 80 04 21 */	bctrl 
/* 803F805C 003F4F9C  80 7F 00 00 */	lwz r3, 0(r31)
/* 803F8060 003F4FA0  D3 E3 00 CC */	stfs f31, 0xcc(r3)
/* 803F8064 003F4FA4  D3 E3 00 D0 */	stfs f31, 0xd0(r3)
/* 803F8068 003F4FA8  81 83 00 00 */	lwz r12, 0(r3)
/* 803F806C 003F4FAC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803F8070 003F4FB0  7D 89 03 A6 */	mtctr r12
/* 803F8074 003F4FB4  4E 80 04 21 */	bctrl 
/* 803F8078 003F4FB8  80 7F 00 00 */	lwz r3, 0(r31)
/* 803F807C 003F4FBC  FC 20 F8 90 */	fmr f1, f31
/* 803F8080 003F4FC0  C0 42 1B 94 */	lfs f2, lbl_8051FEF4@sda21(r2)
/* 803F8084 003F4FC4  C0 83 00 9C */	lfs f4, 0x9c(r3)
/* 803F8088 003F4FC8  C0 63 00 8C */	lfs f3, 0x8c(r3)
/* 803F808C 003F4FCC  C0 02 1B 90 */	lfs f0, lbl_8051FEF0@sda21(r2)
/* 803F8090 003F4FD0  D0 7F 00 20 */	stfs f3, 0x20(r31)
/* 803F8094 003F4FD4  D0 9F 00 24 */	stfs f4, 0x24(r31)
/* 803F8098 003F4FD8  D0 5F 00 28 */	stfs f2, 0x28(r31)
/* 803F809C 003F4FDC  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 803F80A0 003F4FE0  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803F80A4 003F4FE4  4B FC 2A D5 */	bl setGlobalParticleScale__Q35efx2d8WorldMap12T2DOnyonKiraFf
/* 803F80A8 003F4FE8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 803F80AC 003F4FEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803F80B0 003F4FF0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 803F80B4 003F4FF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F80B8 003F4FF8  7C 08 03 A6 */	mtlr r0
/* 803F80BC 003F4FFC  38 21 00 20 */	addi r1, r1, 0x20
/* 803F80C0 003F5000  4E 80 00 20 */	blr 
.endfn update__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMap

.fn kill__Q42kh6Screen8WorldMap13OnyonDynamicsFv, global
/* 803F80C4 003F5004  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F80C8 003F5008  7C 08 02 A6 */	mflr r0
/* 803F80CC 003F500C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F80D0 003F5010  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 803F80D4 003F5014  81 83 00 00 */	lwz r12, 0(r3)
/* 803F80D8 003F5018  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803F80DC 003F501C  7D 89 03 A6 */	mtctr r12
/* 803F80E0 003F5020  4E 80 04 21 */	bctrl 
/* 803F80E4 003F5024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F80E8 003F5028  7C 08 03 A6 */	mtlr r0
/* 803F80EC 003F502C  38 21 00 10 */	addi r1, r1, 0x10
/* 803F80F0 003F5030  4E 80 00 20 */	blr 
.endfn kill__Q42kh6Screen8WorldMap13OnyonDynamicsFv

.fn getName__Q35efx2d8WorldMap11ArgDirScaleFv, weak
/* 803F80F4 003F5034  3C 60 80 4A */	lis r3, lbl_80498348@ha
/* 803F80F8 003F5038  38 63 83 48 */	addi r3, r3, lbl_80498348@l
/* 803F80FC 003F503C  4E 80 00 20 */	blr 
.endfn getName__Q35efx2d8WorldMap11ArgDirScaleFv

.fn __dt__Q35efx2d8WorldMap10T2DShstar1Fv, weak
/* 803F8100 003F5040  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F8104 003F5044  7C 08 02 A6 */	mflr r0
/* 803F8108 003F5048  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F810C 003F504C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F8110 003F5050  7C 9F 23 78 */	mr r31, r4
/* 803F8114 003F5054  93 C1 00 08 */	stw r30, 8(r1)
/* 803F8118 003F5058  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F811C 003F505C  41 82 00 64 */	beq .L_803F8180
/* 803F8120 003F5060  3C 60 80 4F */	lis r3, __vt__Q35efx2d8WorldMap10T2DShstar1@ha
/* 803F8124 003F5064  38 63 A4 00 */	addi r3, r3, __vt__Q35efx2d8WorldMap10T2DShstar1@l
/* 803F8128 003F5068  90 7E 00 00 */	stw r3, 0(r30)
/* 803F812C 003F506C  38 03 00 18 */	addi r0, r3, 0x18
/* 803F8130 003F5070  90 1E 00 08 */	stw r0, 8(r30)
/* 803F8134 003F5074  41 82 00 3C */	beq .L_803F8170
/* 803F8138 003F5078  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803F813C 003F507C  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803F8140 003F5080  90 7E 00 00 */	stw r3, 0(r30)
/* 803F8144 003F5084  38 03 00 18 */	addi r0, r3, 0x18
/* 803F8148 003F5088  90 1E 00 08 */	stw r0, 8(r30)
/* 803F814C 003F508C  41 82 00 24 */	beq .L_803F8170
/* 803F8150 003F5090  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803F8154 003F5094  38 7E 00 08 */	addi r3, r30, 8
/* 803F8158 003F5098  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803F815C 003F509C  38 80 00 00 */	li r4, 0
/* 803F8160 003F50A0  90 BE 00 00 */	stw r5, 0(r30)
/* 803F8164 003F50A4  38 05 00 18 */	addi r0, r5, 0x18
/* 803F8168 003F50A8  90 1E 00 08 */	stw r0, 8(r30)
/* 803F816C 003F50AC  4B C9 7B 31 */	bl __dt__18JPAEmitterCallBackFv
.L_803F8170:
/* 803F8170 003F50B0  7F E0 07 35 */	extsh. r0, r31
/* 803F8174 003F50B4  40 81 00 0C */	ble .L_803F8180
/* 803F8178 003F50B8  7F C3 F3 78 */	mr r3, r30
/* 803F817C 003F50BC  4B C2 BF 39 */	bl __dl__FPv
.L_803F8180:
/* 803F8180 003F50C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F8184 003F50C4  7F C3 F3 78 */	mr r3, r30
/* 803F8188 003F50C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F818C 003F50CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F8190 003F50D0  7C 08 03 A6 */	mtlr r0
/* 803F8194 003F50D4  38 21 00 10 */	addi r1, r1, 0x10
/* 803F8198 003F50D8  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d8WorldMap10T2DShstar1Fv

.fn __dt__Q35efx2d8WorldMap11T2DMapFlareFv, weak
/* 803F819C 003F50DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F81A0 003F50E0  7C 08 02 A6 */	mflr r0
/* 803F81A4 003F50E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F81A8 003F50E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F81AC 003F50EC  7C 9F 23 78 */	mr r31, r4
/* 803F81B0 003F50F0  93 C1 00 08 */	stw r30, 8(r1)
/* 803F81B4 003F50F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F81B8 003F50F8  41 82 00 64 */	beq .L_803F821C
/* 803F81BC 003F50FC  3C 60 80 4F */	lis r3, __vt__Q35efx2d8WorldMap11T2DMapFlare@ha
/* 803F81C0 003F5100  38 63 A4 3C */	addi r3, r3, __vt__Q35efx2d8WorldMap11T2DMapFlare@l
/* 803F81C4 003F5104  90 7E 00 00 */	stw r3, 0(r30)
/* 803F81C8 003F5108  38 03 00 18 */	addi r0, r3, 0x18
/* 803F81CC 003F510C  90 1E 00 08 */	stw r0, 8(r30)
/* 803F81D0 003F5110  41 82 00 3C */	beq .L_803F820C
/* 803F81D4 003F5114  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803F81D8 003F5118  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803F81DC 003F511C  90 7E 00 00 */	stw r3, 0(r30)
/* 803F81E0 003F5120  38 03 00 18 */	addi r0, r3, 0x18
/* 803F81E4 003F5124  90 1E 00 08 */	stw r0, 8(r30)
/* 803F81E8 003F5128  41 82 00 24 */	beq .L_803F820C
/* 803F81EC 003F512C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803F81F0 003F5130  38 7E 00 08 */	addi r3, r30, 8
/* 803F81F4 003F5134  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803F81F8 003F5138  38 80 00 00 */	li r4, 0
/* 803F81FC 003F513C  90 BE 00 00 */	stw r5, 0(r30)
/* 803F8200 003F5140  38 05 00 18 */	addi r0, r5, 0x18
/* 803F8204 003F5144  90 1E 00 08 */	stw r0, 8(r30)
/* 803F8208 003F5148  4B C9 7A 95 */	bl __dt__18JPAEmitterCallBackFv
.L_803F820C:
/* 803F820C 003F514C  7F E0 07 35 */	extsh. r0, r31
/* 803F8210 003F5150  40 81 00 0C */	ble .L_803F821C
/* 803F8214 003F5154  7F C3 F3 78 */	mr r3, r30
/* 803F8218 003F5158  4B C2 BE 9D */	bl __dl__FPv
.L_803F821C:
/* 803F821C 003F515C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F8220 003F5160  7F C3 F3 78 */	mr r3, r30
/* 803F8224 003F5164  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F8228 003F5168  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F822C 003F516C  7C 08 03 A6 */	mtlr r0
/* 803F8230 003F5170  38 21 00 10 */	addi r1, r1, 0x10
/* 803F8234 003F5174  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d8WorldMap11T2DMapFlareFv

.fn __dt__Q35efx2d8WorldMap13T2DRocketGlowFv, weak
/* 803F8238 003F5178  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F823C 003F517C  7C 08 02 A6 */	mflr r0
/* 803F8240 003F5180  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F8244 003F5184  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F8248 003F5188  7C 9F 23 78 */	mr r31, r4
/* 803F824C 003F518C  93 C1 00 08 */	stw r30, 8(r1)
/* 803F8250 003F5190  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F8254 003F5194  41 82 00 64 */	beq .L_803F82B8
/* 803F8258 003F5198  3C 60 80 4F */	lis r3, __vt__Q35efx2d8WorldMap13T2DRocketGlow@ha
/* 803F825C 003F519C  38 63 A4 78 */	addi r3, r3, __vt__Q35efx2d8WorldMap13T2DRocketGlow@l
/* 803F8260 003F51A0  90 7E 00 00 */	stw r3, 0(r30)
/* 803F8264 003F51A4  38 03 00 18 */	addi r0, r3, 0x18
/* 803F8268 003F51A8  90 1E 00 08 */	stw r0, 8(r30)
/* 803F826C 003F51AC  41 82 00 3C */	beq .L_803F82A8
/* 803F8270 003F51B0  3C 60 80 4E */	lis r3, __vt__Q25efx2d12TChasePosDir@ha
/* 803F8274 003F51B4  38 63 73 90 */	addi r3, r3, __vt__Q25efx2d12TChasePosDir@l
/* 803F8278 003F51B8  90 7E 00 00 */	stw r3, 0(r30)
/* 803F827C 003F51BC  38 03 00 18 */	addi r0, r3, 0x18
/* 803F8280 003F51C0  90 1E 00 08 */	stw r0, 8(r30)
/* 803F8284 003F51C4  41 82 00 24 */	beq .L_803F82A8
/* 803F8288 003F51C8  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803F828C 003F51CC  38 7E 00 08 */	addi r3, r30, 8
/* 803F8290 003F51D0  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803F8294 003F51D4  38 80 00 00 */	li r4, 0
/* 803F8298 003F51D8  90 BE 00 00 */	stw r5, 0(r30)
/* 803F829C 003F51DC  38 05 00 18 */	addi r0, r5, 0x18
/* 803F82A0 003F51E0  90 1E 00 08 */	stw r0, 8(r30)
/* 803F82A4 003F51E4  4B C9 79 F9 */	bl __dt__18JPAEmitterCallBackFv
.L_803F82A8:
/* 803F82A8 003F51E8  7F E0 07 35 */	extsh. r0, r31
/* 803F82AC 003F51EC  40 81 00 0C */	ble .L_803F82B8
/* 803F82B0 003F51F0  7F C3 F3 78 */	mr r3, r30
/* 803F82B4 003F51F4  4B C2 BE 01 */	bl __dl__FPv
.L_803F82B8:
/* 803F82B8 003F51F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F82BC 003F51FC  7F C3 F3 78 */	mr r3, r30
/* 803F82C0 003F5200  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F82C4 003F5204  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F82C8 003F5208  7C 08 03 A6 */	mtlr r0
/* 803F82CC 003F520C  38 21 00 10 */	addi r1, r1, 0x10
/* 803F82D0 003F5210  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d8WorldMap13T2DRocketGlowFv

.fn __dt__Q32kh6Screen8WorldMapFv, weak
/* 803F82D4 003F5214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F82D8 003F5218  7C 08 02 A6 */	mflr r0
/* 803F82DC 003F521C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F82E0 003F5220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F82E4 003F5224  7C 9F 23 78 */	mr r31, r4
/* 803F82E8 003F5228  93 C1 00 08 */	stw r30, 8(r1)
/* 803F82EC 003F522C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F82F0 003F5230  41 82 00 38 */	beq .L_803F8328
/* 803F82F4 003F5234  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen8WorldMap@ha
/* 803F82F8 003F5238  38 04 A4 B4 */	addi r0, r4, __vt__Q32kh6Screen8WorldMap@l
/* 803F82FC 003F523C  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8300 003F5240  41 82 00 18 */	beq .L_803F8318
/* 803F8304 003F5244  3C A0 80 4F */	lis r5, __vt__Q34Game8WorldMap4Base@ha
/* 803F8308 003F5248  38 80 00 00 */	li r4, 0
/* 803F830C 003F524C  38 05 A4 E0 */	addi r0, r5, __vt__Q34Game8WorldMap4Base@l
/* 803F8310 003F5250  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8314 003F5254  4B C2 4D 21 */	bl __dt__11JKRDisposerFv
.L_803F8318:
/* 803F8318 003F5258  7F E0 07 35 */	extsh. r0, r31
/* 803F831C 003F525C  40 81 00 0C */	ble .L_803F8328
/* 803F8320 003F5260  7F C3 F3 78 */	mr r3, r30
/* 803F8324 003F5264  4B C2 BD 91 */	bl __dl__FPv
.L_803F8328:
/* 803F8328 003F5268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F832C 003F526C  7F C3 F3 78 */	mr r3, r30
/* 803F8330 003F5270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F8334 003F5274  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F8338 003F5278  7C 08 03 A6 */	mtlr r0
/* 803F833C 003F527C  38 21 00 10 */	addi r1, r1, 0x10
/* 803F8340 003F5280  4E 80 00 20 */	blr 
.endfn __dt__Q32kh6Screen8WorldMapFv

.fn draw__Q34Game8WorldMap4BaseFR8Graphics, weak
/* 803F8344 003F5284  4E 80 00 20 */	blr 
.endfn draw__Q34Game8WorldMap4BaseFR8Graphics

.fn __dt__Q32kh6Screen16khUtilColorAnmWMFv, weak
/* 803F8348 003F5288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F834C 003F528C  7C 08 02 A6 */	mflr r0
/* 803F8350 003F5290  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F8354 003F5294  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F8358 003F5298  7C 9F 23 78 */	mr r31, r4
/* 803F835C 003F529C  93 C1 00 08 */	stw r30, 8(r1)
/* 803F8360 003F52A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F8364 003F52A4  41 82 00 58 */	beq .L_803F83BC
/* 803F8368 003F52A8  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen16khUtilColorAnmWM@ha
/* 803F836C 003F52AC  38 04 A5 0C */	addi r0, r4, __vt__Q32kh6Screen16khUtilColorAnmWM@l
/* 803F8370 003F52B0  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8374 003F52B4  41 82 00 38 */	beq .L_803F83AC
/* 803F8378 003F52B8  3C 80 80 4F */	lis r4, __vt__Q32kh6Screen14khUtilColorAnm@ha
/* 803F837C 003F52BC  38 04 B1 B8 */	addi r0, r4, __vt__Q32kh6Screen14khUtilColorAnm@l
/* 803F8380 003F52C0  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8384 003F52C4  41 82 00 28 */	beq .L_803F83AC
/* 803F8388 003F52C8  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803F838C 003F52CC  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803F8390 003F52D0  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8394 003F52D4  41 82 00 18 */	beq .L_803F83AC
/* 803F8398 003F52D8  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803F839C 003F52DC  38 80 00 00 */	li r4, 0
/* 803F83A0 003F52E0  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803F83A4 003F52E4  90 1E 00 00 */	stw r0, 0(r30)
/* 803F83A8 003F52E8  48 01 91 E1 */	bl __dt__5CNodeFv
.L_803F83AC:
/* 803F83AC 003F52EC  7F E0 07 35 */	extsh. r0, r31
/* 803F83B0 003F52F0  40 81 00 0C */	ble .L_803F83BC
/* 803F83B4 003F52F4  7F C3 F3 78 */	mr r3, r30
/* 803F83B8 003F52F8  4B C2 BC FD */	bl __dl__FPv
.L_803F83BC:
/* 803F83BC 003F52FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F83C0 003F5300  7F C3 F3 78 */	mr r3, r30
/* 803F83C4 003F5304  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F83C8 003F5308  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F83CC 003F530C  7C 08 03 A6 */	mtlr r0
/* 803F83D0 003F5310  38 21 00 10 */	addi r1, r1, 0x10
/* 803F83D4 003F5314  4E 80 00 20 */	blr 
.endfn __dt__Q32kh6Screen16khUtilColorAnmWMFv

.fn __dt__Q32kh6Screen16khUtilFadePaneWMFv, weak
/* 803F83D8 003F5318  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F83DC 003F531C  7C 08 02 A6 */	mflr r0
/* 803F83E0 003F5320  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F83E4 003F5324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F83E8 003F5328  7C 9F 23 78 */	mr r31, r4
/* 803F83EC 003F532C  93 C1 00 08 */	stw r30, 8(r1)
/* 803F83F0 003F5330  7C 7E 1B 79 */	or. r30, r3, r3
/* 803F83F4 003F5334  41 82 00 74 */	beq .L_803F8468
/* 803F83F8 003F5338  3C 60 80 4F */	lis r3, __vt__Q32kh6Screen16khUtilFadePaneWM@ha
/* 803F83FC 003F533C  38 03 A5 2C */	addi r0, r3, __vt__Q32kh6Screen16khUtilFadePaneWM@l
/* 803F8400 003F5340  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8404 003F5344  41 82 00 54 */	beq .L_803F8458
/* 803F8408 003F5348  3C 60 80 4F */	lis r3, __vt__Q32kh6Screen14khUtilFadePane@ha
/* 803F840C 003F534C  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 803F8410 003F5350  38 03 B1 D8 */	addi r0, r3, __vt__Q32kh6Screen14khUtilFadePane@l
/* 803F8414 003F5354  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8418 003F5358  41 82 00 10 */	beq .L_803F8428
/* 803F841C 003F535C  3C 60 80 4F */	lis r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
/* 803F8420 003F5360  38 03 A5 50 */	addi r0, r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
/* 803F8424 003F5364  90 1E 00 1C */	stw r0, 0x1c(r30)
.L_803F8428:
/* 803F8428 003F5368  28 1E 00 00 */	cmplwi r30, 0
/* 803F842C 003F536C  41 82 00 2C */	beq .L_803F8458
/* 803F8430 003F5370  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 803F8434 003F5374  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 803F8438 003F5378  90 1E 00 00 */	stw r0, 0(r30)
/* 803F843C 003F537C  41 82 00 1C */	beq .L_803F8458
/* 803F8440 003F5380  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 803F8444 003F5384  7F C3 F3 78 */	mr r3, r30
/* 803F8448 003F5388  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 803F844C 003F538C  38 80 00 00 */	li r4, 0
/* 803F8450 003F5390  90 1E 00 00 */	stw r0, 0(r30)
/* 803F8454 003F5394  48 01 91 35 */	bl __dt__5CNodeFv
.L_803F8458:
/* 803F8458 003F5398  7F E0 07 35 */	extsh. r0, r31
/* 803F845C 003F539C  40 81 00 0C */	ble .L_803F8468
/* 803F8460 003F53A0  7F C3 F3 78 */	mr r3, r30
/* 803F8464 003F53A4  4B C2 BC 51 */	bl __dl__FPv
.L_803F8468:
/* 803F8468 003F53A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F846C 003F53AC  7F C3 F3 78 */	mr r3, r30
/* 803F8470 003F53B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F8474 003F53B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803F8478 003F53B8  7C 08 03 A6 */	mtlr r0
/* 803F847C 003F53BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803F8480 003F53C0  4E 80 00 20 */	blr 
.endfn __dt__Q32kh6Screen16khUtilFadePaneWMFv

.fn fadein_finish__Q32kh6Screen14khUtilFadePaneFv, weak
/* 803F8484 003F53C4  4E 80 00 20 */	blr 
.endfn fadein_finish__Q32kh6Screen14khUtilFadePaneFv

.fn __dt__Q42kh6Screen14khUtilFadePane10khPaneNodeFv, weak
/* 803F8488 003F53C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803F848C 003F53CC  7C 08 02 A6 */	mflr r0
/* 803F8490 003F53D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803F8494 003F53D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F8498 003F53D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 803F849C 003F53DC  41 82 00 1C */	beq .L_803F84B8
/* 803F84A0 003F53E0  3C A0 80 4F */	lis r5, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
/* 803F84A4 003F53E4  7C 80 07 35 */	extsh. r0, r4
/* 803F84A8 003F53E8  38 05 A5 50 */	addi r0, r5, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
/* 803F84AC 003F53EC  90 1F 00 00 */	stw r0, 0(r31)
/* 803F84B0 003F53F0  40 81 00 08 */	ble .L_803F84B8
/* 803F84B4 003F53F4  4B C2 BC 01 */	bl __dl__FPv
.L_803F84B8:
/* 803F84B8 003F53F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803F84BC 003F53FC  7F E3 FB 78 */	mr r3, r31
/* 803F84C0 003F5400  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F84C4 003F5404  7C 08 03 A6 */	mtlr r0
/* 803F84C8 003F5408  38 21 00 10 */	addi r1, r1, 0x10
/* 803F84CC 003F540C  4E 80 00 20 */	blr 
.endfn __dt__Q42kh6Screen14khUtilFadePane10khPaneNodeFv

.fn __sinit_khWorldMap_cpp, local
/* 803F84D0 003F5410  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803F84D4 003F5414  7C 08 02 A6 */	mflr r0
/* 803F84D8 003F5418  90 01 00 54 */	stw r0, 0x54(r1)
/* 803F84DC 003F541C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803F84E0 003F5420  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803F84E4 003F5424  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803F84E8 003F5428  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803F84EC 003F542C  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 803F84F0 003F5430  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 803F84F4 003F5434  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 803F84F8 003F5438  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 803F84FC 003F543C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803F8500 003F5440  3C 80 80 51 */	lis r4, msVal__Q32kh6Screen8WorldMap@ha
/* 803F8504 003F5444  3C 60 80 40 */	lis r3, "__ct__Q29JGeometry8TVec2<f>Fv"@ha
/* 803F8508 003F5448  38 84 40 58 */	addi r4, r4, msVal__Q32kh6Screen8WorldMap@l
/* 803F850C 003F544C  38 A0 00 00 */	li r5, 0
/* 803F8510 003F5450  3B E4 00 50 */	addi r31, r4, 0x50
/* 803F8514 003F5454  38 C0 00 08 */	li r6, 8
/* 803F8518 003F5458  38 83 86 78 */	addi r4, r3, "__ct__Q29JGeometry8TVec2<f>Fv"@l
/* 803F851C 003F545C  38 E0 00 02 */	li r7, 2
/* 803F8520 003F5460  7F E3 FB 78 */	mr r3, r31
/* 803F8524 003F5464  4B CC 93 19 */	bl __construct_array
/* 803F8528 003F5468  3C 60 80 51 */	lis r3, msVal__Q32kh6Screen8WorldMap@ha
/* 803F852C 003F546C  C0 22 1B 94 */	lfs f1, lbl_8051FEF4@sda21(r2)
/* 803F8530 003F5470  39 03 40 58 */	addi r8, r3, msVal__Q32kh6Screen8WorldMap@l
/* 803F8534 003F5474  39 20 FF FF */	li r9, -1
/* 803F8538 003F5478  C1 62 1C 34 */	lfs f11, lbl_8051FF94@sda21(r2)
/* 803F853C 003F547C  38 00 00 08 */	li r0, 8
/* 803F8540 003F5480  C3 E2 1C 28 */	lfs f31, lbl_8051FF88@sda21(r2)
/* 803F8544 003F5484  38 E0 00 FF */	li r7, 0xff
/* 803F8548 003F5488  91 28 00 6C */	stw r9, 0x6c(r8)
/* 803F854C 003F548C  38 C0 00 40 */	li r6, 0x40
/* 803F8550 003F5490  C0 A2 1B A8 */	lfs f5, lbl_8051FF08@sda21(r2)
/* 803F8554 003F5494  38 A0 00 80 */	li r5, 0x80
/* 803F8558 003F5498  91 28 00 70 */	stw r9, 0x70(r8)
/* 803F855C 003F549C  38 80 00 20 */	li r4, 0x20
/* 803F8560 003F54A0  C0 02 1C 14 */	lfs f0, lbl_8051FF74@sda21(r2)
/* 803F8564 003F54A4  38 60 00 8C */	li r3, 0x8c
/* 803F8568 003F54A8  91 28 00 74 */	stw r9, 0x74(r8)
/* 803F856C 003F54AC  C3 82 1C 1C */	lfs f28, lbl_8051FF7C@sda21(r2)
/* 803F8570 003F54B0  C3 A2 1C 20 */	lfs f29, lbl_8051FF80@sda21(r2)
/* 803F8574 003F54B4  C3 C2 1C 24 */	lfs f30, lbl_8051FF84@sda21(r2)
/* 803F8578 003F54B8  C1 A2 1C 2C */	lfs f13, lbl_8051FF8C@sda21(r2)
/* 803F857C 003F54BC  C1 82 1C 30 */	lfs f12, lbl_8051FF90@sda21(r2)
/* 803F8580 003F54C0  C1 42 1B 90 */	lfs f10, lbl_8051FEF0@sda21(r2)
/* 803F8584 003F54C4  C1 22 1C 38 */	lfs f9, lbl_8051FF98@sda21(r2)
/* 803F8588 003F54C8  C1 02 1C 3C */	lfs f8, lbl_8051FF9C@sda21(r2)
/* 803F858C 003F54CC  C0 E2 1B B4 */	lfs f7, lbl_8051FF14@sda21(r2)
/* 803F8590 003F54D0  C0 C2 1C 00 */	lfs f6, lbl_8051FF60@sda21(r2)
/* 803F8594 003F54D4  C0 82 1B CC */	lfs f4, lbl_8051FF2C@sda21(r2)
/* 803F8598 003F54D8  C0 62 1C 40 */	lfs f3, lbl_8051FFA0@sda21(r2)
/* 803F859C 003F54DC  C0 42 1C 44 */	lfs f2, lbl_8051FFA4@sda21(r2)
/* 803F85A0 003F54E0  D3 88 00 00 */	stfs f28, 0(r8)
/* 803F85A4 003F54E4  D3 A8 00 04 */	stfs f29, 4(r8)
/* 803F85A8 003F54E8  D3 C8 00 08 */	stfs f30, 8(r8)
/* 803F85AC 003F54EC  D3 E8 00 0C */	stfs f31, 0xc(r8)
/* 803F85B0 003F54F0  D1 A8 00 10 */	stfs f13, 0x10(r8)
/* 803F85B4 003F54F4  D3 E8 00 14 */	stfs f31, 0x14(r8)
/* 803F85B8 003F54F8  D1 88 00 18 */	stfs f12, 0x18(r8)
/* 803F85BC 003F54FC  D1 68 00 1C */	stfs f11, 0x1c(r8)
/* 803F85C0 003F5500  D1 48 00 20 */	stfs f10, 0x20(r8)
/* 803F85C4 003F5504  D1 28 00 24 */	stfs f9, 0x24(r8)
/* 803F85C8 003F5508  D1 68 00 28 */	stfs f11, 0x28(r8)
/* 803F85CC 003F550C  D1 68 00 2C */	stfs f11, 0x2c(r8)
/* 803F85D0 003F5510  D1 08 00 30 */	stfs f8, 0x30(r8)
/* 803F85D4 003F5514  D1 68 00 34 */	stfs f11, 0x34(r8)
/* 803F85D8 003F5518  D0 E8 00 38 */	stfs f7, 0x38(r8)
/* 803F85DC 003F551C  D0 C8 00 3C */	stfs f6, 0x3c(r8)
/* 803F85E0 003F5520  D0 A8 00 40 */	stfs f5, 0x40(r8)
/* 803F85E4 003F5524  D0 88 00 44 */	stfs f4, 0x44(r8)
/* 803F85E8 003F5528  D0 68 00 48 */	stfs f3, 0x48(r8)
/* 803F85EC 003F552C  D0 48 00 4C */	stfs f2, 0x4c(r8)
/* 803F85F0 003F5530  D0 3F 00 00 */	stfs f1, 0(r31)
/* 803F85F4 003F5534  D0 28 00 54 */	stfs f1, 0x54(r8)
/* 803F85F8 003F5538  D0 28 00 58 */	stfs f1, 0x58(r8)
/* 803F85FC 003F553C  D0 28 00 5C */	stfs f1, 0x5c(r8)
/* 803F8600 003F5540  D0 A8 00 60 */	stfs f5, 0x60(r8)
/* 803F8604 003F5544  D0 08 00 64 */	stfs f0, 0x64(r8)
/* 803F8608 003F5548  D0 08 00 68 */	stfs f0, 0x68(r8)
/* 803F860C 003F554C  98 E8 00 6C */	stb r7, 0x6c(r8)
/* 803F8610 003F5550  98 E8 00 6D */	stb r7, 0x6d(r8)
/* 803F8614 003F5554  98 C8 00 6E */	stb r6, 0x6e(r8)
/* 803F8618 003F5558  98 E8 00 6F */	stb r7, 0x6f(r8)
/* 803F861C 003F555C  98 E8 00 70 */	stb r7, 0x70(r8)
/* 803F8620 003F5560  98 A8 00 71 */	stb r5, 0x71(r8)
/* 803F8624 003F5564  98 88 00 72 */	stb r4, 0x72(r8)
/* 803F8628 003F5568  98 E8 00 73 */	stb r7, 0x73(r8)
/* 803F862C 003F556C  98 E8 00 74 */	stb r7, 0x74(r8)
/* 803F8630 003F5570  98 E8 00 75 */	stb r7, 0x75(r8)
/* 803F8634 003F5574  98 A8 00 76 */	stb r5, 0x76(r8)
/* 803F8638 003F5578  98 68 00 77 */	stb r3, 0x77(r8)
/* 803F863C 003F557C  98 08 00 78 */	stb r0, 0x78(r8)
/* 803F8640 003F5580  98 08 00 79 */	stb r0, 0x79(r8)
/* 803F8644 003F5584  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803F8648 003F5588  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803F864C 003F558C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803F8650 003F5590  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803F8654 003F5594  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 803F8658 003F5598  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 803F865C 003F559C  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 803F8660 003F55A0  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 803F8664 003F55A4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803F8668 003F55A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803F866C 003F55AC  7C 08 03 A6 */	mtlr r0
/* 803F8670 003F55B0  38 21 00 50 */	addi r1, r1, 0x50
/* 803F8674 003F55B4  4E 80 00 20 */	blr 
.endfn __sinit_khWorldMap_cpp

.fn "__ct__Q29JGeometry8TVec2<f>Fv", weak
/* 803F8678 003F55B8  4E 80 00 20 */	blr 
.endfn "__ct__Q29JGeometry8TVec2<f>Fv"

.fn "@8@__dt__Q35efx2d8WorldMap13T2DRocketGlowFv", weak
/* 803F867C 003F55BC  38 63 FF F8 */	addi r3, r3, -8
/* 803F8680 003F55C0  4B FF FB B8 */	b __dt__Q35efx2d8WorldMap13T2DRocketGlowFv
.endfn "@8@__dt__Q35efx2d8WorldMap13T2DRocketGlowFv"

.fn "@8@__dt__Q35efx2d8WorldMap11T2DMapFlareFv", weak
/* 803F8684 003F55C4  38 63 FF F8 */	addi r3, r3, -8
/* 803F8688 003F55C8  4B FF FB 14 */	b __dt__Q35efx2d8WorldMap11T2DMapFlareFv
.endfn "@8@__dt__Q35efx2d8WorldMap11T2DMapFlareFv"

.fn "@8@__dt__Q35efx2d8WorldMap10T2DShstar1Fv", weak
/* 803F868C 003F55CC  38 63 FF F8 */	addi r3, r3, -8
/* 803F8690 003F55D0  4B FF FA 70 */	b __dt__Q35efx2d8WorldMap10T2DShstar1Fv
.endfn "@8@__dt__Q35efx2d8WorldMap10T2DShstar1Fv"
