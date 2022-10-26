#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "P2DScreen.h"
#include "kh/khUtil.h"
#include "kh/WorldMap.h"
#include "LoadResource.h"
#include "og/newScreen/ogUtil.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_khWorldMap_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497C70
    lbl_80497C70:
        .asciz "khWorldMap.cpp"
        .skip 1
    .global cOpenMinFrm__Q22kh6Screen
    cOpenMinFrm__Q22kh6Screen:
        .float 0.0
        .float 300.0
        .float 600.0
        .float 900.0
    .global cOpenMaxFrm__Q22kh6Screen
    cOpenMaxFrm__Q22kh6Screen:
        .float 300.0
        .float 600.0
        .float 900.0
        .float 1100.0
        .asciz "P2Assert"
        .skip 3
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
    .global lbl_80497D2C
    lbl_80497D2C:
        .asciz "worldmap_icon.blo"
        .skip 2
    .global lbl_80497D40
    lbl_80497D40:
        .asciz "worldmap_icon.bck"
        .skip 2
    .global lbl_80497D54
    lbl_80497D54:
        .asciz "worldmap_icon.btp"
        .skip 2
    .global lbl_80497D68
    lbl_80497D68:
        .asciz "worldmap_gicon.blo"
        .skip 1
    .global lbl_80497D7C
    lbl_80497D7C:
        .asciz "worldmap_gicon.bck"
        .skip 1
    .global lbl_80497D90
    lbl_80497D90:
        .asciz "worldmap_gicon.btp"
        .skip 1
        .4byte lbl_80497D2C
        .4byte lbl_80497D40
        .4byte lbl_80497D54
        .4byte lbl_80497D68
        .4byte lbl_80497D7C
        .4byte lbl_80497D90
    .global lbl_80497DBC
    lbl_80497DBC:
        .asciz "world_map_info.blo"
        .skip 1
    .global lbl_80497DD0
    lbl_80497DD0:
        .asciz "world_map_info.btk"
        .skip 1
    .global lbl_80497DE4
    lbl_80497DE4:
        .asciz "world_map_info_02.btk"
        .skip 2
    .global lbl_80497DFC
    lbl_80497DFC:
        .asciz "world_map_info_03.btk"
        .skip 2
        .4byte lbl_80497DBC
        .4byte lbl_80497DD0
        .4byte lbl_80497DE4
        .4byte lbl_80497DFC
        .skip 4
        .4byte 0x50494354
        .4byte 0x5F303435
        .4byte 0x0050675F
        .4byte 0x705F3031
        .4byte 0x0050675F
        .4byte 0x705F3032
        .4byte 0x0050675F
        .4byte 0x635F3031
        .4byte 0x0050675F
        .4byte 0x635F3032
        .4byte 0x50636176
        .4byte 0x655F3030
        .4byte 0x0050305F
        .4byte 0x705F3031
        .4byte 0x0050305F
        .4byte 0x705F3032
        .4byte 0x0050305F
        .4byte 0x635F3031
        .4byte 0x0050305F
        .4byte 0x635F3032
        .4byte 0x50636176
        .4byte 0x655F3031
        .4byte 0x0050315F
        .4byte 0x705F3031
        .4byte 0x0050315F
        .4byte 0x705F3032
        .4byte 0x0050315F
        .4byte 0x635F3031
        .4byte 0x0050315F
        .4byte 0x635F3032
        .4byte 0x50636176
        .4byte 0x655F3032
        .4byte 0x0050325F
        .4byte 0x705F3031
        .4byte 0x0050325F
        .4byte 0x705F3032
        .4byte 0x0050325F
        .4byte 0x635F3031
        .4byte 0x0050325F
        .4byte 0x635F3032
        .4byte 0x50636176
        .4byte 0x655F3033
        .4byte 0x0050335F
        .4byte 0x705F3031
        .4byte 0x0050335F
        .4byte 0x705F3032
        .4byte 0x0050335F
        .4byte 0x635F3031
        .4byte 0x0050335F
        .4byte 0x635F3032
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
        .4byte 0x776F726C
        .4byte 0x646D6170
        .4byte 0x2E737A73
        .4byte 0x00000000
        .4byte 0x776F726C
        .4byte 0x645F6D61
        .4byte 0x705F6B69
        .4byte 0x74616761
        .4byte 0x77612E62
        .4byte 0x6C6F0000
        .4byte 0x776F726C
        .4byte 0x645F6D61
        .4byte 0x705F6B69
        .4byte 0x74616761
        .4byte 0x77612E62
        .4byte 0x636B0000
        .4byte 0x776F726C
        .4byte 0x645F6D61
        .4byte 0x705F6B69
        .4byte 0x74616761
        .4byte 0x77612E62
        .4byte 0x706B0000
        .4byte 0x776F726C
        .4byte 0x645F6D61
        .4byte 0x705F6B69
        .4byte 0x74616761
        .4byte 0x77612E62
        .4byte 0x746B0000
        .4byte 0x776F726C
        .4byte 0x645F6D61
        .4byte 0x705F6B69
        .4byte 0x74616761
        .4byte 0x77615F30
        .4byte 0x322E6274
        .4byte 0x6B000000
        .4byte 0x75736572
        .4byte 0x2F456269
        .4byte 0x73617761
        .4byte 0x2F656666
        .4byte 0x6563742F
        .4byte 0x65666632
        .4byte 0x645F776F
        .4byte 0x726C645F
        .4byte 0x6D61702E
        .4byte 0x6A706300
        .4byte 0x00000000
        .4byte 0x00004E77
        .4byte 0x61697430
        .4byte 0x00004E77
        .4byte 0x61697431
        .4byte 0x00004E77
        .4byte 0x61697432
        .4byte 0x00004E77
        .4byte 0x61697433
        .4byte 0x004E706F
        .4byte 0x696E7430
        .4byte 0x004E706F
        .4byte 0x696E7431
        .4byte 0x004E706F
        .4byte 0x696E7432
        .4byte 0x004E706F
        .4byte 0x696E7433
        .4byte 0x00545F6E
        .4byte 0x65775F6C
        .4byte 0x00545F6E
        .4byte 0x65775F72
    .global lbl_80498030
    lbl_80498030:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8049803C
    lbl_8049803C:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00383339
        .4byte 0x305F3031
        .4byte 0x00383339
        .4byte 0x315F3031
        .4byte 0x00383339
        .4byte 0x325F3031
        .4byte 0x00383339
        .4byte 0x335F3031
        .4byte 0x00383339
        .4byte 0x355F3031
        .4byte 0x00383339
        .4byte 0x395F3031
        .4byte 0x00383430
        .4byte 0x305F3031
        .4byte 0x006E6F5F
        .4byte 0x64617461
        .4byte 0x00383339
        .4byte 0x365F3031
        .4byte 0x00383339
        .4byte 0x385F3031
        .4byte 0x00383430
        .4byte 0x315F3031
        .4byte 0x00383431
        .4byte 0x305F3031
        .4byte 0x00383339
        .4byte 0x375F3031
        .4byte 0x00383430
        .4byte 0x325F3031
        .4byte 0x00383430
        .4byte 0x335F3031
        .4byte 0x00383431
        .4byte 0x315F3031
        .4byte 0x00383431
        .4byte 0x325F3031
        .4byte 0x00383431
        .4byte 0x335F3031
        .4byte 0x00383431
        .4byte 0x345F3031
        .4byte 0x006E6F5F
        .4byte 0x64617461
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0050675F
        .4byte 0x705F3031
        .4byte 0x0050675F
        .4byte 0x705F3032
        .4byte 0x0050675F
        .4byte 0x635F3031
        .4byte 0x0050675F
        .4byte 0x635F3032
        .4byte 0x0050305F
        .4byte 0x705F3031
        .4byte 0x0050305F
        .4byte 0x705F3032
        .4byte 0x0050305F
        .4byte 0x635F3031
        .4byte 0x0050305F
        .4byte 0x635F3032
        .4byte 0x0050315F
        .4byte 0x705F3031
        .4byte 0x0050315F
        .4byte 0x705F3032
        .4byte 0x0050315F
        .4byte 0x635F3031
        .4byte 0x0050315F
        .4byte 0x635F3032
        .4byte 0x0050325F
        .4byte 0x705F3031
        .4byte 0x0050325F
        .4byte 0x705F3032
        .4byte 0x0050325F
        .4byte 0x635F3031
        .4byte 0x0050325F
        .4byte 0x635F3032
        .4byte 0x0050335F
        .4byte 0x705F3031
        .4byte 0x0050335F
        .4byte 0x705F3032
        .4byte 0x0050335F
        .4byte 0x635F3031
        .4byte 0x0050335F
        .4byte 0x635F3032
        .4byte 0x004E6361
        .4byte 0x5F666C30
        .4byte 0x004E6361
        .4byte 0x5F666C31
        .4byte 0x004E6361
        .4byte 0x5F666C32
        .4byte 0x004E6361
        .4byte 0x5F666C33
        .4byte 0x00005030
        .4byte 0x5F737261
        .4byte 0x0050315F
        .4byte 0x73757261
        .4byte 0x0050325F
        .4byte 0x73757261
        .4byte 0x00005033
        .4byte 0x5F737261
        .4byte 0x00383339
        .4byte 0x305F3031
        .4byte 0x00383339
        .4byte 0x315F3031
        .4byte 0x00383339
        .4byte 0x325F3031
        .4byte 0x00383339
        .4byte 0x335F3031
        .4byte 0x00383339
        .4byte 0x355F3031
        .4byte 0x00383339
        .4byte 0x395F3031
        .4byte 0x00383430
        .4byte 0x305F3031
        .4byte 0x006E6F5F
        .4byte 0x64617461
        .4byte 0x00383339
        .4byte 0x365F3031
        .4byte 0x00383339
        .4byte 0x385F3031
        .4byte 0x00383430
        .4byte 0x315F3031
        .4byte 0x00383431
        .4byte 0x305F3031
        .4byte 0x00383339
        .4byte 0x375F3031
        .4byte 0x00383430
        .4byte 0x325F3031
        .4byte 0x00383430
        .4byte 0x335F3031
        .4byte 0x00383431
        .4byte 0x315F3031
        .4byte 0x00383431
        .4byte 0x325F3031
        .4byte 0x00383431
        .4byte 0x335F3031
        .4byte 0x00383431
        .4byte 0x345F3031
        .4byte 0x006E6F5F
        .4byte 0x64617461
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0050675F
        .4byte 0x705F3031
        .4byte 0x0050675F
        .4byte 0x705F3032
        .4byte 0x0050675F
        .4byte 0x635F3031
        .4byte 0x0050675F
        .4byte 0x635F3032
        .4byte 0x0050305F
        .4byte 0x705F3031
        .4byte 0x0050305F
        .4byte 0x705F3032
        .4byte 0x0050305F
        .4byte 0x635F3031
        .4byte 0x0050305F
        .4byte 0x635F3032
        .4byte 0x0050315F
        .4byte 0x705F3031
        .4byte 0x0050315F
        .4byte 0x705F3032
        .4byte 0x0050315F
        .4byte 0x635F3031
        .4byte 0x0050315F
        .4byte 0x635F3032
        .4byte 0x0050325F
        .4byte 0x705F3031
        .4byte 0x0050325F
        .4byte 0x705F3032
        .4byte 0x0050325F
        .4byte 0x635F3031
        .4byte 0x0050325F
        .4byte 0x635F3032
        .4byte 0x0050335F
        .4byte 0x705F3031
        .4byte 0x0050335F
        .4byte 0x705F3032
        .4byte 0x0050335F
        .4byte 0x635F3031
        .4byte 0x0050335F
        .4byte 0x635F3032
    .global lbl_80498328
    lbl_80498328:
        .4byte 0x00004E77
        .4byte 0x61697430
        .4byte 0x00004E77
        .4byte 0x61697431
        .4byte 0x00004E77
        .4byte 0x61697432
        .4byte 0x00004E77
        .4byte 0x61697433
    .global lbl_80498348
    lbl_80498348:
        .4byte 0x41726744
        .4byte 0x69725363
        .4byte 0x616C6500
        .4byte 0x41726753
        .4byte 0x63616C65
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EA3A0
    lbl_804EA3A0:
        .4byte lbl_803F3D80
        .4byte lbl_803F4084
        .4byte lbl_803F40E8
        .4byte lbl_803F4108
        .4byte lbl_803F44A8
        .4byte lbl_803F4554
        .4byte lbl_803F4698
        .4byte lbl_803F472C
        .4byte lbl_803F47C0
        .4byte lbl_803F4864
        .4byte lbl_803F4908
        .4byte lbl_803F4D90
        .4byte lbl_803F503C
        .4byte lbl_803F5098
        .4byte lbl_803F4420
    .global __vt__Q35efx2d8WorldMap10T2DRocketA
    __vt__Q35efx2d8WorldMap10T2DRocketA:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d8WorldMap19TSimple_ArgDirScaleFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q35efx2d8WorldMap11ArgDirScale
    __vt__Q35efx2d8WorldMap11ArgDirScale:
        .4byte 0
        .4byte 0
        .4byte getName__Q35efx2d8WorldMap11ArgDirScaleFv
    .global __vt__Q35efx2d8WorldMap10T2DShstar1
    __vt__Q35efx2d8WorldMap10T2DShstar1:
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
    .global __vt__Q35efx2d8WorldMap11T2DMapFlare
    __vt__Q35efx2d8WorldMap11T2DMapFlare:
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
    .global __vt__Q35efx2d8WorldMap13T2DRocketGlow
    __vt__Q35efx2d8WorldMap13T2DRocketGlow:
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
    .global __vt__Q32kh6Screen8WorldMap
    __vt__Q32kh6Screen8WorldMap:
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
    .global __vt__Q34Game8WorldMap4Base
    __vt__Q34Game8WorldMap4Base:
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
    .global __vt__Q32kh6Screen16khUtilColorAnmWM
    __vt__Q32kh6Screen16khUtilColorAnmWM:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen16khUtilColorAnmWMFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32kh6Screen14khUtilColorAnmFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte do_update__Q32kh6Screen16khUtilColorAnmWMFv
    .global __vt__Q32kh6Screen16khUtilFadePaneWM
    __vt__Q32kh6Screen16khUtilFadePaneWM:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen16khUtilFadePaneWMFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32kh6Screen14khUtilFadePaneFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte fadein_finish__Q32kh6Screen14khUtilFadePaneFv
        .4byte fadeout_finish__Q32kh6Screen16khUtilFadePaneWMFv
    .global __vt__Q42kh6Screen14khUtilFadePane10khPaneNode
    __vt__Q42kh6Screen14khUtilFadePane10khPaneNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q42kh6Screen14khUtilFadePane10khPaneNodeFv
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32kh6Screen8WorldMap
    msVal__Q32kh6Screen8WorldMap:
        .skip 0x7C

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FEF0
    lbl_8051FEF0:
        .float 1.0
    .global lbl_8051FEF4
    lbl_8051FEF4:
        .4byte 0x00000000
    .global lbl_8051FEF8
    lbl_8051FEF8:
        .4byte 0xBF800000
    .global lbl_8051FEFC
    lbl_8051FEFC:
        .4byte 0x6661696C
        .4byte 0x65640000
    .global lbl_8051FF04
    lbl_8051FF04:
        .float 0.1
    .global lbl_8051FF08
    lbl_8051FF08:
        .float 0.7
    .global lbl_8051FF0C
    lbl_8051FF0C:
        .float 0.3
    .global lbl_8051FF10
    lbl_8051FF10:
        .4byte 0x447A0000
    .global lbl_8051FF14
    lbl_8051FF14:
        .float 0.5
    .global lbl_8051FF18
    lbl_8051FF18:
        .4byte 0x3FC00000
    .global lbl_8051FF1C
    lbl_8051FF1C:
        .4byte 0xBDCCCCCD
    .global lbl_8051FF20
    lbl_8051FF20:
        .4byte 0x42000000
    .global lbl_8051FF24
    lbl_8051FF24:
        .4byte 0x40400000
    .global lbl_8051FF28
    lbl_8051FF28:
        .4byte 0x40C90FDB
    .global lbl_8051FF2C
    lbl_8051FF2C:
        .4byte 0x3F733333
    .global lbl_8051FF30
    lbl_8051FF30:
        .4byte 0x3C23D70A
    .global lbl_8051FF34
    lbl_8051FF34:
        .4byte 0x42652EE0
    .global lbl_8051FF38
    lbl_8051FF38:
        .4byte 0x40000000
    .global lbl_8051FF3C
    lbl_8051FF3C:
        .4byte 0x437F0000
    .global lbl_8051FF40
    lbl_8051FF40:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051FF48
    lbl_8051FF48:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051FF50
    lbl_8051FF50:
        .4byte 0x3F7D70A4
    .global lbl_8051FF54
    lbl_8051FF54:
        .4byte 0x40490FDB
    .global lbl_8051FF58
    lbl_8051FF58:
        .4byte 0x3CA3D70A
    .global lbl_8051FF5C
    lbl_8051FF5C:
        .4byte 0xBD4CCCCD
    .global lbl_8051FF60
    lbl_8051FF60:
        .float 0.05
    .global lbl_8051FF64
    lbl_8051FF64:
        .4byte 0x3E4CCCCD
    .global lbl_8051FF68
    lbl_8051FF68:
        .4byte 0x41480000
    .global lbl_8051FF6C
    lbl_8051FF6C:
        .4byte 0x41380000
    .global lbl_8051FF70
    lbl_8051FF70:
        .float 0.25
    .global lbl_8051FF74
    lbl_8051FF74:
        .4byte 0x41A00000
    .global lbl_8051FF78
    lbl_8051FF78:
        .4byte 0x42480000
    .global lbl_8051FF7C
    lbl_8051FF7C:
        .4byte 0x458CA000
    .global lbl_8051FF80
    lbl_8051FF80:
        .4byte 0x3A83126F
    .global lbl_8051FF84
    lbl_8051FF84:
        .4byte 0x3F6B851F
    .global lbl_8051FF88
    lbl_8051FF88:
        .4byte 0x44480000
    .global lbl_8051FF8C
    lbl_8051FF8C:
        .4byte 0x3F7851EC
    .global lbl_8051FF90
    lbl_8051FF90:
        .4byte 0x45BB8000
    .global lbl_8051FF94
    lbl_8051FF94:
        .4byte 0x3F4CCCCD
    .global lbl_8051FF98
    lbl_8051FF98:
        .4byte 0x3F666666
    .global lbl_8051FF9C
    lbl_8051FF9C:
        .4byte 0x3F99999A
    .global lbl_8051FFA0
    lbl_8051FFA0:
        .4byte 0xBC23D70A
    .global lbl_8051FFA4
    lbl_8051FFA4:
        .4byte 0x3F6147AE
*/

namespace kh {

namespace Screen {

/*
 * --INFO--
 * Address:	803F1B04
 * Size:	00009C
 */
khUtilFadePane::~khUtilFadePane()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803F1B84
lis      r3, __vt__Q32kh6Screen14khUtilFadePane@ha
addic.   r0, r30, 0x1c
addi     r0, r3, __vt__Q32kh6Screen14khUtilFadePane@l
stw      r0, 0(r30)
beq      lbl_803F1B44
lis      r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
addi     r0, r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
stw      r0, 0x1c(r30)

lbl_803F1B44:
cmplwi   r30, 0
beq      lbl_803F1B74
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803F1B74
lis      r4, __vt__Q29P2DScreen4Node@ha
mr       r3, r30
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803F1B74:
extsh.   r0, r31
ble      lbl_803F1B84
mr       r3, r30
bl       __dl__FPv

lbl_803F1B84:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1BA0
 * Size:	000058
 */
void khUtilFadePaneWM::fadeout_finish()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lbz      r0, 0x34(r3)
cmplwi   r0, 0
beq      lbl_803F1BDC
lwz      r3, 0x30(r31)
bl       changeInfo__Q32kh6Screen8WorldMapFv
lwz      r3, 0x30(r31)
bl       effectFirstTime__Q32kh6Screen8WorldMapFv
li       r0, 0
stw      r0, 0x28(r31)
b        lbl_803F1BE4

lbl_803F1BDC:
li       r0, 2
stw      r0, 0x28(r31)

lbl_803F1BE4:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1BF8
 * Size:	000080
 */
khUtilColorAnm::~khUtilColorAnm()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803F1C5C
lis      r4, __vt__Q32kh6Screen14khUtilColorAnm@ha
addi     r0, r4, __vt__Q32kh6Screen14khUtilColorAnm@l
stw      r0, 0(r30)
beq      lbl_803F1C4C
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803F1C4C
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803F1C4C:
extsh.   r0, r31
ble      lbl_803F1C5C
mr       r3, r30
bl       __dl__FPv

lbl_803F1C5C:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1C78
 * Size:	00007C
 */
void khUtilColorAnmWM::do_update()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
addi     r4, r1, 8
stw      r31, 0x1c(r1)
mr       r31, r3
lwz      r0, 0x20(r3)
stw      r0, 8(r1)
lwz      r3, 0x18(r3)
stw      r0, 0xc(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lbz      r0, 0x34(r31)
cmplwi   r0, 0
beq      lbl_803F1CE0
lwz      r0, 0x30(r31)
cmpwi    r0, 0
bne      lbl_803F1CE0
lwz      r3, 0x58(r31)
lfs      f1, lbl_8051FEF0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r3, 0x5c(r31)
lfs      f1, lbl_8051FEF0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf

lbl_803F1CE0:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1CF4
 * Size:	0001E8
 */
WorldMap::WorldMap()
    : Base()
    , m_initArg()
{
	m_screenKitagawa          = nullptr;
	m_bckAnm2                 = nullptr;
	m_bckAnm1                 = nullptr;
	_3C                       = nullptr;
	_44                       = nullptr;
	_40                       = nullptr;
	_48                       = nullptr;
	_4C                       = nullptr;
	_50                       = nullptr;
	_54                       = nullptr;
	_60                       = nullptr;
	_5C                       = nullptr;
	_58                       = nullptr;
	m_frameOf60               = 0.0f;
	m_frameOf5C               = 0.0f;
	m_frameOf58               = 0.0f;
	m_frameOf50               = 0.0f;
	m_frameOf4C               = 0.0f;
	m_frameOf44               = 0.0f;
	m_frameOf40               = 0.0f;
	m_frameOf3C               = 0.0f;
	m_frameOf38               = 0.0f;
	m_frameOf34               = 0.0f;
	_94                       = 0.0f;
	_90                       = 0.0f;
	_98                       = 1.0f;
	_9C.x                     = 0.0f;
	_9C.y                     = 0.0f;
	_A4                       = 0.0f;
	_A8                       = 0.0f;
	_AC.x                     = 0.0f;
	_AC.y                     = 0.0f;
	_B4                       = _AC.x;
	_B8                       = _AC.y;
	_BC                       = 0.0f;
	m_rocketGlow              = nullptr;
	m_rocketB                 = nullptr;
	m_mapFlare                = nullptr;
	m_shstar1                 = nullptr;
	_D0                       = 0.0f;
	_D4                       = 0.0f;
	_D8                       = 0.0f;
	_DC                       = 1.0f;
	m_light01Center.x         = 0.0f;
	m_light01Center.y         = 0.0f;
	m_starCenter.x            = 0.0f;
	m_starCenter.y            = 0.0f;
	m_onyonDynamicsArray      = nullptr;
	m_onyonDynamicsCount      = 0;
	m_currentCourseIndex      = 0;
	_FC                       = 0;
	_108                      = nullptr;
	m_groundTreasureCounter   = nullptr;
	m_pokoCounter             = nullptr;
	m_groundTreasureMax       = 0;
	m_groundTreasureCount     = 0;
	_11C                      = nullptr;
	m_caveTreasureCounters[0] = nullptr;
	_144                      = 0;
	_134                      = 0;
	m_caveTreasureCounters[1] = nullptr;
	_148                      = 0;
	_138                      = 0;
	m_caveTreasureCounters[0] = nullptr;
	_14C                      = 0;
	_13C                      = 0;
	m_caveTreasureCounters[0] = nullptr;
	_150                      = 0;
	_140                      = 0;
	_154                      = nullptr;
	_158                      = nullptr;
	_15C                      = nullptr;
	_160                      = nullptr;
	_164                      = nullptr;
	_168                      = nullptr;
	_16C                      = nullptr;
	m_arrowAlphaBlink         = nullptr;
	m_unknownSwitch           = 0xd;
	_178                      = 1;
	_17C                      = 4;
	m_stateID                 = '\x01';
	m_courseJustOpenFlags     = 0;
	m_totalCourseCount        = 0;
	_183                      = 0;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__11JKRDisposerFv
lis      r4, __vt__Q34Game8WorldMap4Base@ha
lis      r3, __vt__Q32kh6Screen8WorldMap@ha
addi     r0, r4, __vt__Q34Game8WorldMap4Base@l
li       r6, 0
stw      r0, 0(r31)
addi     r0, r3, __vt__Q32kh6Screen8WorldMap@l
lfs      f2, lbl_8051FEF4@sda21(r2)
stw      r0, 0(r31)
lfs      f1, lbl_8051FEF0@sda21(r2)
stw      r6, 0x18(r31)
lfs      f0, lbl_8051FEF8@sda21(r2)
stw      r6, 0x20(r31)
stw      r6, 0x1c(r31)
stw      r6, 0x24(r31)
stw      r6, 0x28(r31)
stb      r6, 0x2d(r31)
stb      r6, 0x2c(r31)
stb      r6, 0x2e(r31)
stw      r6, 0x30(r31)
stw      r6, 0x38(r31)
stw      r6, 0x34(r31)
stw      r6, 0x3c(r31)
stw      r6, 0x44(r31)
stw      r6, 0x40(r31)
stw      r6, 0x48(r31)
stw      r6, 0x4c(r31)
stw      r6, 0x50(r31)
stw      r6, 0x54(r31)
stw      r6, 0x60(r31)
stw      r6, 0x5c(r31)
stw      r6, 0x58(r31)
stfs     f2, 0x8c(r31)
stfs     f2, 0x88(r31)
stfs     f2, 0x84(r31)
stfs     f2, 0x80(r31)
stfs     f2, 0x7c(r31)
stfs     f2, 0x78(r31)
stfs     f2, 0x74(r31)
stfs     f2, 0x70(r31)
stfs     f2, 0x6c(r31)
stfs     f2, 0x68(r31)
stfs     f2, 0x94(r31)
stfs     f2, 0x90(r31)
stfs     f1, 0x98(r31)
stfs     f2, 0x9c(r31)
stfs     f2, 0xa0(r31)
stfs     f2, 0xa4(r31)
stfs     f2, 0xa8(r31)
stfs     f2, 0xac(r31)
stfs     f0, 0xb0(r31)
lfs      f0, 0xac(r31)
stfs     f0, 0xb4(r31)
lfs      f0, 0xb0(r31)
stfs     f0, 0xb8(r31)
stfs     f2, 0xbc(r31)
stw      r6, 0xc0(r31)
stw      r6, 0xc4(r31)
stw      r6, 0xc8(r31)
stw      r6, 0xcc(r31)
stfs     f2, 0xd0(r31)
stfs     f2, 0xd4(r31)
stfs     f2, 0xd8(r31)
stfs     f1, 0xdc(r31)
stfs     f2, 0xe0(r31)
stfs     f2, 0xe4(r31)
stfs     f2, 0xe8(r31)
stfs     f2, 0xec(r31)
li       r5, 0xd
li       r4, 1
li       r0, 4
stw      r6, 0xf0(r31)
mr       r3, r31
stw      r6, 0xf4(r31)
stw      r6, 0xf8(r31)
stw      r6, 0xfc(r31)
stw      r6, 0x108(r31)
stw      r6, 0x104(r31)
stw      r6, 0x100(r31)
stw      r6, 0x130(r31)
stw      r6, 0x12c(r31)
stw      r6, 0x11c(r31)
stw      r6, 0x10c(r31)
stw      r6, 0x144(r31)
stw      r6, 0x134(r31)
stw      r6, 0x120(r31)
stw      r6, 0x110(r31)
stw      r6, 0x148(r31)
stw      r6, 0x138(r31)
stw      r6, 0x124(r31)
stw      r6, 0x114(r31)
stw      r6, 0x14c(r31)
stw      r6, 0x13c(r31)
stw      r6, 0x128(r31)
stw      r6, 0x118(r31)
stw      r6, 0x150(r31)
stw      r6, 0x140(r31)
stw      r6, 0x154(r31)
stw      r6, 0x158(r31)
stw      r6, 0x15c(r31)
stw      r6, 0x160(r31)
stw      r6, 0x164(r31)
stw      r6, 0x168(r31)
stw      r6, 0x16c(r31)
stw      r6, 0x170(r31)
stw      r5, 0x174(r31)
stw      r4, 0x178(r31)
stw      r0, 0x17c(r31)
stb      r4, 0x180(r31)
stb      r6, 0x182(r31)
stb      r6, 0x181(r31)
stb      r6, 0x183(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

namespace Game {

} // namespace Game

} // namespace Screen

/*
 * --INFO--
 * Address:	803F1EDC
 * Size:	000060
 */
WorldMap::Base::~Base()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803F1F20
	lis      r5, __vt__Q34Game8WorldMap4Base@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game8WorldMap4Base@l
	stw      r0, 0(r30)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_803F1F20
	mr       r3, r30
	bl       __dl__FPv

lbl_803F1F20:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace kh

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	803F1F3C
 * Size:	0000CC
 */
void WorldMap::init(::Game::WorldMap::InitArg& arg)
{
	int i     = 0;
	m_initArg = arg;
	do {
		m_totalCourseCount += playData->courseOpen(i);
		m_courseJustOpenFlags |= playData->courseJustOpen(i) << i;
		i++;
	} while (i < 4);
	m_courseJustOpenFlags |= (m_courseJustOpenFlags << 4);
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
stw      r30, 8(r1)
li       r30, 0
lwz      r0, 0(r4)
stw      r0, 0x18(r3)
lwz      r0, 4(r4)
stw      r0, 0x1c(r3)
lwz      r0, 8(r4)
stw      r0, 0x20(r3)
lwz      r0, 0xc(r4)
stw      r0, 0x24(r3)
lwz      r0, 0x10(r4)
stw      r0, 0x28(r3)
lbz      r0, 0x14(r4)
stb      r0, 0x2c(r3)
lbz      r0, 0x15(r4)
stb      r0, 0x2d(r3)
lbz      r0, 0x16(r4)
stb      r0, 0x2e(r3)

lbl_803F1F98:
lwz      r3, playData__4Game@sda21(r13)
mr       r4, r30
bl       courseOpen__Q24Game8PlayDataFi
lbz      r0, 0x181(r31)
clrlwi   r3, r3, 0x18
mr       r4, r30
add      r0, r0, r3
stb      r0, 0x181(r31)
lwz      r3, playData__4Game@sda21(r13)
bl       courseJustOpen__Q24Game8PlayDataFi
clrlwi   r3, r3, 0x18
lbz      r0, 0x182(r31)
slw      r3, r3, r30
addi     r30, r30, 1
or       r0, r0, r3
cmpwi    r30, 4
stb      r0, 0x182(r31)
blt      lbl_803F1F98
lbz      r3, 0x182(r31)
slwi     r0, r3, 4
or       r0, r3, r0
stb      r0, 0x182(r31)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F2008
 * Size:	001790
 */
void WorldMap::loadResource()
{
	JKRHeap* savedHeap = JKRHeap::sCurrentHeap;
	m_initArg.m_heap->becomeCurrentHeap();
	char localizedArchiveFileName[64];
	og::newScreen::makeLanguageResName(localizedArchiveFileName, "worldmap.szs");
	LoadResource::Arg loadResourceArg(localizedArchiveFileName);
	LoadResource::Node* resNode = gLoadResourceMgr->mountArchive(loadResourceArg);
	JUT_ASSERTLINE(278, resNode != nullptr, "failed");
	JKRArchive* archive = resNode->m_archive;
	P2ASSERTLINE(279,
	             archive != nullptr); // TODO: How is this one line afterwards?
	m_screenKitagawa = new P2DScreen::Mgr_tuning();
	m_screenKitagawa->set("world_map_kitagawa.blo", 0x1040000, archive);

	const void* resData = JKRFileLoader::getGlbResource("world_map_kitagawa.bck", archive);
	m_bckAnm1           = (J2DAnmTransform*)J2DAnmLoaderDataBase::load(resData);
	m_bckAnm2           = (J2DAnmTransformKey*)J2DAnmLoaderDataBase::load(resData);
	int i               = 0;
	do {
		m_screenKitagawa->search(getSerialTagName('Pland0', i))->setAnimation(m_bckAnm2);
		m_screenKitagawa->search(getSerialTagName('Plight0', i))->setAnimation(m_bckAnm2);
	} while (++i < 4);

	_3C = (J2DAnmColorKey*)J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("world_map_kitagawa.bpk", archive));
	m_screenKitagawa->setAnimation(_3C);
	_40 = (J2DAnmTextureSRTKey*)J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("world_map_kitagawa.btk", archive));
	m_screenKitagawa->setAnimation(_40);
	_44 = (J2DAnmTextureSRTKey*)J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("world_map_kitagawa_02.btk", archive));
	m_screenKitagawa->setAnimation(_44);
	const char* worldMapIconsFileNames[2][3];
	const char** worldMapIconFileNames = worldMapIconsFileNames[0];
	worldMapIconsFileNames[0][0]       = "worldmap_icon.blo";
	worldMapIconsFileNames[0][1]       = "worldmap_icon.bck";
	worldMapIconsFileNames[0][2]       = "worldmap_icon.btp";
	worldMapIconsFileNames[1][0]       = "worldmap_gicon.blo";
	worldMapIconsFileNames[1][1]       = "worldmap_gicon.bck";
	worldMapIconsFileNames[1][2]       = "worldmap_gicon.btp";
	if (Game::playData->)

	/*
stwu     r1, -0x260(r1)
mflr     r0
stw      r0, 0x264(r1)
stmw     r19, 0x22c(r1)
mr       r31, r3
lis      r3, lbl_80497C70@ha
addi     r30, r3, lbl_80497C70@l
lwz      r29, sCurrentHeap__7JKRHeap@sda21(r13)
lwz      r3, 0x18(r31)
bl       becomeCurrentHeap__7JKRHeapFv
li       r0, 0x10
addi     r5, r1, 0xdc
addi     r4, r30, 0x38
li       r20, 0
mtctr    r0

lbl_803F2044:
lwz      r3, 4(r4)
lwzu     r0, 8(r4)
stw      r3, 4(r5)
stwu     r0, 8(r5)
bdnz     lbl_803F2044
addi     r3, r1, 0xe0
addi     r4, r30, 0x2b8
bl       makeLanguageResName__Q22og9newScreenFPcPCc
addi     r3, r1, 0xb0
addi     r4, r1, 0xe0
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 0xb0
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
cmplwi   r3, 0
beq      lbl_803F208C
lwz      r20, 0x34(r3)
b        lbl_803F20A0

lbl_803F208C:
addi     r3, r30, 0
li       r4, 0x116
addi     r5, r2, lbl_8051FEFC@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803F20A0:
cmplwi   r20, 0
bne      lbl_803F20BC
addi     r3, r30, 0
addi     r5, r30, 0x30
li       r4, 0x117
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803F20BC:
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803F20D4
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803F20D4:
stw      r0, 0x30(r31)
mr       r6, r20
addi     r4, r30, 0x2c8
lis      r5, 0x104
lwz      r3, 0x30(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r20
addi     r3, r30, 0x2e0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
mr       r19, r3
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x34(r31)
mr       r3, r19
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x38(r31)
lwz      r3, 0x30(r31)
lwz      r4, 0x34(r31)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
li       r23, 0
lis      r22, 0x616E6430@ha
lis      r21, 0x6768
lis      r19, 0x50

lbl_803F2138:
mr       r5, r23
addi     r4, r22, 0x616E6430@l
li       r3, 0x506c
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x38(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
mr       r5, r23
addi     r4, r21, 0x7430
addi     r3, r19, 0x6c69
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x38(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
addi     r23, r23, 1
cmpwi    r23, 4
blt      lbl_803F2138
mr       r4, r20
addi     r3, r30, 0x2f8
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x3c(r31)
lwz      r3, 0x30(r31)
lwz      r4, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
mr       r4, r20
addi     r3, r30, 0x310
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r31)
lwz      r3, 0x30(r31)
lwz      r4, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
mr       r4, r20
addi     r3, r30, 0x328
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x44(r31)
lwz      r3, 0x30(r31)
lwz      r4, 0x44(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, playData__4Game@sda21(r13)
addi     r19, r1, 0x70
lwz      r7, 0x134(r30)
lbz      r0, 0x2f(r3)
lwz      r6, 0x138(r30)
clrlwi.  r0, r0, 0x1f
lwz      r5, 0x13c(r30)
lwz      r4, 0x140(r30)
lwz      r3, 0x144(r30)
lwz      r0, 0x148(r30)
stw      r7, 0x70(r1)
stw      r6, 0x74(r1)
stw      r5, 0x78(r1)
stw      r4, 0x7c(r1)
stw      r3, 0x80(r1)
stw      r0, 0x84(r1)
beq      lbl_803F2290
addi     r19, r1, 0x7c

lbl_803F2290:
li       r3, 0x138
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803F22A8
bl       __ct__Q29P2DScreen3MgrFv
mr       r0, r3

lbl_803F22A8:
stw      r0, 0x48(r31)
mr       r6, r20
lwz      r4, 0(r19)
lis      r5, 4
lwz      r3, 0x48(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, 4(r19)
mr       r4, r20
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x4c(r31)
lwz      r3, 0x48(r31)
lwz      r4, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 8(r19)
mr       r4, r20
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x50(r31)
lwz      r3, 0x48(r31)
lwz      r4, 0x50(r31)
lwz      r12, 0(r3)
lwz      r12, 0x68(r12)
mtctr    r12
bctrl
lwz      r3, playData__4Game@sda21(r13)
li       r4, 1
bl       hasBootContainer__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
beq      lbl_803F233C
lwz      r3, 0xf4(r31)
addi     r0, r3, 1
stw      r0, 0xf4(r31)
b        lbl_803F2364

lbl_803F233C:
lwz      r3, 0x48(r31)
lis      r4, 0x4E524544@ha
addi     r6, r4, 0x4E524544@l
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F2364:
lwz      r3, playData__4Game@sda21(r13)
li       r4, 2
bl       hasBootContainer__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
beq      lbl_803F2388
lwz      r3, 0xf4(r31)
addi     r0, r3, 1
stw      r0, 0xf4(r31)
b        lbl_803F23B4

lbl_803F2388:
lwz      r3, 0x48(r31)
lis      r5, 0x4C4C4F57@ha
lis      r4, 0x004E5945@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x4C4C4F57@l
addi     r5, r4, 0x004E5945@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F23B4:
lwz      r3, playData__4Game@sda21(r13)
li       r4, 0
bl       hasBootContainer__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
beq      lbl_803F23D8
lwz      r3, 0xf4(r31)
addi     r0, r3, 1
stw      r0, 0xf4(r31)
b        lbl_803F2400

lbl_803F23D8:
lwz      r3, 0x48(r31)
lis      r4, 0x424C5545@ha
addi     r6, r4, 0x424C5545@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F2400:
lwz      r19, 0xf4(r31)
mulli    r3, r19, 0x34
addi     r3, r3, 0x10
bl       __nwa__FUl
lis      r4, __ct__Q42kh6Screen8WorldMap13OnyonDynamicsFv@ha
lis      r5, __dt__Q42kh6Screen8WorldMap13OnyonDynamicsFv@ha
addi     r4, r4, __ct__Q42kh6Screen8WorldMap13OnyonDynamicsFv@l
mr       r7, r19
addi     r5, r5, __dt__Q42kh6Screen8WorldMap13OnyonDynamicsFv@l
li       r6, 0x34
bl       __construct_new_array
stw      r3, 0xf0(r31)
li       r19, 0
li       r4, 1
lwz      r3, playData__4Game@sda21(r13)
bl       hasBootContainer__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
beq      lbl_803F2478
lwz      r3, 0x48(r31)
lis      r4, 0x4E524544@ha
addi     r6, r4, 0x4E524544@l
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mulli    r0, r19, 0x34
lwz      r4, 0xf0(r31)
li       r19, 1
stwx     r3, r4, r0

lbl_803F2478:
lwz      r3, playData__4Game@sda21(r13)
li       r4, 2
bl       hasBootContainer__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
beq      lbl_803F24C0
lwz      r3, 0x48(r31)
lis      r5, 0x4C4C4F57@ha
lis      r4, 0x004E5945@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x4C4C4F57@l
addi     r5, r4, 0x004E5945@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mulli    r0, r19, 0x34
lwz      r4, 0xf0(r31)
addi     r19, r19, 1
stwx     r3, r4, r0

lbl_803F24C0:
lwz      r3, playData__4Game@sda21(r13)
li       r4, 0
bl       hasBootContainer__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
beq      lbl_803F2500
lwz      r3, 0x48(r31)
lis      r4, 0x424C5545@ha
addi     r6, r4, 0x424C5545@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mulli    r0, r19, 0x34
lwz      r4, 0xf0(r31)
stwx     r3, r4, r0

lbl_803F2500:
lis      r3, 0x0000FFFF@ha
li       r7, 1
addi     r5, r3, 0x0000FFFF@l
li       r6, 0x34
b        lbl_803F2534

lbl_803F2514:
divw     r4, r5, r0
addi     r0, r6, 0x30
lwz      r3, 0xf0(r31)
addis    r5, r5, 1
addi     r7, r7, 1
addi     r6, r6, 0x34
sthx     r4, r3, r0
addi     r5, r5, -1

lbl_803F2534:
lwz      r0, 0xf4(r31)
cmpw     r7, r0
blt      lbl_803F2514
lwz      r6, 0x1a4(r30)
li       r3, 0x148
lwz      r5, 0x1a8(r30)
lwz      r4, 0x1ac(r30)
lwz      r0, 0x1b0(r30)
stw      r6, 0x60(r1)
stw      r5, 0x64(r1)
stw      r4, 0x68(r1)
stw      r0, 0x6c(r1)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803F2578
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803F2578:
stw      r0, 0x54(r31)
mr       r6, r20
lwz      r4, 0x60(r1)
lis      r5, 4
lwz      r3, 0x54(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, 0x64(r1)
mr       r4, r20
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x58(r31)
mr       r4, r20
lwz      r3, 0x68(r1)
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x5c(r31)
mr       r4, r20
lwz      r3, 0x6c(r1)
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x60(r31)
lwz      r3, 0x54(r31)
lwz      r4, 0x58(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, 0x54(r31)
lwz      r4, 0x5c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, 0x54(r31)
lwz      r4, 0x60(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, 0x54(r31)
bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
addi     r0, r31, 0x24
lis      r3, 0x61795F72@ha
stw      r0, 8(r1)
li       r0, 3
addi     r6, r3, 0x61795F72@l
addi     r8, r3, 0x5f6c
stw      r0, 0xc(r1)
addi     r10, r3, 0x5f63
li       r5, 0x5064
li       r7, 0x5064
stw      r20, 0x10(r1)
li       r9, 0x5064
lwz      r3, 0x54(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
lwz      r3, playData__4Game@sda21(r13)
lbz      r0, 0x2f(r3)
lwz      r21, 0xe8(r3)
clrlwi.  r0, r0, 0x1f
beq      lbl_803F26F4
lwz      r3, 0x54(r31)
lis      r5, 0x616C5F66@ha
lis      r4, 0x4E66696E@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x616C5F66@l
addi     r5, r4, 0x4E66696E@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x6D705F66@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E636F@ha
addi     r6, r5, 0x6D705F66@l
lwz      r3, 0x54(r31)
addi     r5, r4, 0x004E636F@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r4, 0x6D703030@ha
stb      r0, 0xb0(r3)
lis      r3, 0x0050636F@ha
mr       r7, r21
addi     r6, r4, 0x6D703030@l
stw      r20, 8(r1)
addi     r5, r3, 0x0050636F@l
li       r8, 0xa
li       r9, 0
lwz      r3, 0x54(r31)
li       r10, 1
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUlUsbbP10JKRArchive stw
r3, 0x100(r31) b        lbl_803F277C

lbl_803F26F4:
lwz      r3, 0x54(r31)
lis      r5, 0x616C5F66@ha
lis      r4, 0x4E66696E@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x616C5F66@l
addi     r5, r4, 0x4E66696E@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x6D705F66@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E636F@ha
addi     r6, r5, 0x6D705F66@l
lwz      r3, 0x54(r31)
addi     r5, r4, 0x004E636F@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x6B6F3031@ha
stb      r0, 0xb0(r3)
lis      r3, 0x0050706F@ha
mr       r7, r21
addi     r6, r4, 0x6B6F3031@l
stw      r20, 8(r1)
addi     r5, r3, 0x0050706F@l
li       r8, 5
li       r9, 0
lwz      r3, 0x54(r31)
li       r10, 0
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUlUsbbP10JKRArchive stw
r3, 0x100(r31)

lbl_803F277C:
stw      r20, 8(r1)
lis      r5, 0x635F3031@ha
lis      r4, 0x0050675F@ha
addi     r7, r31, 0x12c
lwz      r3, 0x54(r31)
addi     r6, r5, 0x635F3031@l
addi     r5, r4, 0x0050675F@l
li       r8, 2
li       r9, 0
li       r10, 1
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
r3, 0x104(r31) lis      r4, 0x705F3031@ha lis      r3, 0x0050675F@ha addi r7,
r31, 0x130 stw      r20, 8(r1) addi     r6, r4, 0x705F3031@l addi     r5, r3,
0x0050675F@l li       r8, 2 lwz      r3, 0x54(r31) li       r9, 0 li       r10,
1 bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw      r3, 0x108(r31)
lis      r4, 0x635F3031@ha
lis      r3, 0x0050305F@ha
addi     r7, r31, 0x134
stw      r20, 8(r1)
addi     r6, r4, 0x635F3031@l
addi     r5, r3, 0x0050305F@l
li       r8, 2
lwz      r3, 0x54(r31)
li       r9, 0
li       r10, 1
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
r3, 0x10c(r31) lis      r4, 0x705F3031@ha lis      r3, 0x0050305F@ha addi r7,
r31, 0x144 stw      r20, 8(r1) addi     r6, r4, 0x705F3031@l addi     r5, r3,
0x0050305F@l li       r8, 2 lwz      r3, 0x54(r31) li       r9, 0 li       r10,
1 bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw      r3, 0x11c(r31)
lis      r4, 0x635F3031@ha
lis      r3, 0x0050315F@ha
addi     r7, r31, 0x138
stw      r20, 8(r1)
addi     r6, r4, 0x635F3031@l
addi     r5, r3, 0x0050315F@l
li       r8, 2
lwz      r3, 0x54(r31)
li       r9, 0
li       r10, 1
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
r3, 0x110(r31) lis      r4, 0x705F3031@ha lis      r3, 0x0050315F@ha addi r7,
r31, 0x148 stw      r20, 8(r1) addi     r6, r4, 0x705F3031@l addi     r5, r3,
0x0050315F@l li       r8, 2 lwz      r3, 0x54(r31) li       r9, 0 li       r10,
1 bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw      r3, 0x120(r31)
lis      r4, 0x635F3031@ha
lis      r3, 0x0050325F@ha
addi     r7, r31, 0x13c
stw      r20, 8(r1)
addi     r6, r4, 0x635F3031@l
addi     r5, r3, 0x0050325F@l
li       r8, 2
lwz      r3, 0x54(r31)
li       r9, 0
li       r10, 1
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
r3, 0x114(r31) lis      r4, 0x705F3031@ha lis      r3, 0x0050325F@ha addi r7,
r31, 0x14c stw      r20, 8(r1) addi     r6, r4, 0x705F3031@l addi     r5, r3,
0x0050325F@l li       r8, 2 lwz      r3, 0x54(r31) li       r9, 0 li       r10,
1 bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw      r3, 0x124(r31)
lis      r4, 0x635F3031@ha
lis      r3, 0x0050335F@ha
addi     r7, r31, 0x140
stw      r20, 8(r1)
addi     r6, r4, 0x635F3031@l
addi     r5, r3, 0x0050335F@l
li       r8, 2
lwz      r3, 0x54(r31)
li       r9, 0
li       r10, 1
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive stw
r3, 0x118(r31) lis      r4, 0x705F3031@ha lis      r3, 0x0050335F@ha addi r7,
r31, 0x150 stw      r20, 8(r1) addi     r6, r4, 0x705F3031@l addi     r5, r3,
0x0050335F@l li       r8, 2 lwz      r3, 0x54(r31) li       r9, 0 li       r10,
1 bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw      r3, 0x128(r31)
lis      r5, 0x65775F6C@ha
lis      r4, 0x00545F6E@ha
lwz      r3, 0x54(r31)
addi     r6, r5, 0x65775F6C@l
addi     r5, r4, 0x00545F6E@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x65775F72@ha
stb      r0, 0xb0(r3)
lis      r4, 0x00545F6E@ha
addi     r6, r5, 0x65775F72@l
lwz      r3, 0x54(r31)
addi     r5, r4, 0x00545F6E@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x6C77696E@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x6C77696E@l
li       r5, 0x4e
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x7277696E@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x7277696E@l
li       r5, 0x4e
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
li       r3, 0x38
bl       __nw__FUl
or.      r4, r3, r3
beq      lbl_803F2A34
lis      r5, 0x756D6D79@ha
li       r4, 0
addi     r6, r5, 0x756D6D79@l
li       r5, 0x64
li       r7, 3
li       r8, 0x64
bl       __ct__Q32kh6Screen14khUtilColorAnmFPQ29P2DScreen3MgrUxii
mr       r4, r3

lbl_803F2A34:
li       r11, 0xff
li       r10, 0x60
li       r9, 0x50
li       r8, 0
stb      r11, 0x48(r1)
li       r6, 0xa0
li       r5, 0x20
li       r0, 1
stw      r4, 0x16c(r31)
li       r3, 0x1c
lwz      r4, 0x16c(r31)
stb      r10, 0x49(r1)
lwz      r12, 0x1c(r4)
stb      r9, 0x4a(r1)
stb      r8, 0x4b(r1)
lwz      r4, 0x48(r1)
stb      r11, 0x40(r1)
stw      r4, 0x4c(r1)
lbz      r7, 0x4c(r1)
lbz      r4, 0x4d(r1)
stb      r7, 0(r12)
lbz      r7, 0x4e(r1)
stb      r4, 1(r12)
lbz      r4, 0x4f(r1)
stb      r7, 2(r12)
stb      r4, 3(r12)
lwz      r4, 0x16c(r31)
stb      r6, 0x41(r1)
lwz      r6, 0x1c(r4)
stb      r5, 0x42(r1)
stb      r11, 0x43(r1)
lwz      r4, 0x40(r1)
stb      r11, 0x38(r1)
stw      r4, 0x44(r1)
lbz      r5, 0x44(r1)
lbz      r4, 0x45(r1)
stb      r5, 4(r6)
lbz      r5, 0x46(r1)
stb      r4, 5(r6)
lbz      r4, 0x47(r1)
stb      r5, 6(r6)
stb      r4, 7(r6)
lwz      r4, 0x16c(r31)
stb      r10, 0x39(r1)
lwz      r6, 0x1c(r4)
stb      r9, 0x3a(r1)
stb      r8, 0x3b(r1)
lwz      r4, 0x38(r1)
stw      r4, 0x3c(r1)
lbz      r5, 0x3c(r1)
lbz      r4, 0x3d(r1)
stb      r5, 8(r6)
lbz      r5, 0x3e(r1)
stb      r4, 9(r6)
lbz      r4, 0x3f(r1)
stb      r5, 0xa(r6)
stb      r4, 0xb(r6)
lwz      r4, 0x16c(r31)
stb      r0, 0x34(r4)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803F2B34
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803F2B34:
stw      r0, 0x64(r31)
li       r3, 0x10
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_803F2B68
lfs      f1, lbl_8051FEF4@sda21(r2)
lfs      f0, lbl_8051FF04@sda21(r2)
stfs     f1, 0(r3)
lfs      f1, lbl_8051FF08@sda21(r2)
stfs     f0, 4(r3)
lfs      f0, lbl_8051FF0C@sda21(r2)
stfs     f1, 8(r3)
stfs     f0, 0xc(r3)

lbl_803F2B68:
stw      r3, 0x170(r31)
lis      r3, 0x6C62746E@ha
addi     r6, r3, 0x6C62746E@l
li       r5, 0x4e
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
lwz      r3, 0x54(r31)
lis      r4, 0x7262746E@ha
addi     r6, r4, 0x7262746E@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
li       r0, 0
addi     r3, r30, 0x344
stw      r0, 8(r1)
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0
li       r8, 1
li       r9, 0
li       r10, 0
bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
or.      r19, r3, r3
bne      lbl_803F2BFC
addi     r3, r30, 0
addi     r5, r30, 0x30
li       r4, 0x1ce
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803F2BFC:
li       r3, 0x14
bl       __nw__FUl
or.      r4, r3, r3
beq      lbl_803F2C1C
lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
mr       r4, r19
bl       __ct__18JPAResourceManagerFPCvP7JKRHeap
mr       r4, r3

lbl_803F2C1C:
lwz      r3, particle2dMgr@sda21(r13)
bl       setSceneResourceManager__14TParticle2dMgrFP18JPAResourceManager
li       r3, 0x28
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_803F2CC4
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r6, __vt__18JPAEmitterCallBack@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r5, __vt__Q25efx2d8TForever@ha
lis      r4, __vt__Q25efx2d12TChasePosDir@ha
stw      r0, 0(r3)
li       r19, 0
addi     r12, r5, __vt__Q25efx2d8TForever@l
addi     r9, r4, __vt__Q25efx2d12TChasePosDir@l
stb      r19, 4(r3)
lis      r4, __vt__Q35efx2d8WorldMap10T2DRocketB@ha
addi     r5, r4, __vt__Q35efx2d8WorldMap10T2DRocketB@l
addi     r0, r6, __vt__18JPAEmitterCallBack@l
stb      r19, 5(r3)
addi     r11, r12, 0x18
li       r10, 2
addi     r8, r9, 0x18
stw      r0, 8(r3)
addi     r7, r31, 0xd0
addi     r6, r31, 0xd8
addi     r4, r5, 0x18
stw      r12, 0(r3)
li       r0, 1
stw      r11, 8(r3)
sth      r10, 0xc(r3)
stw      r19, 0x10(r3)
stw      r9, 0(r3)
stw      r8, 8(r3)
stw      r7, 0x14(r3)
stw      r6, 0x18(r3)
stw      r5, 0(r3)
stw      r4, 8(r3)
stb      r0, 4(r3)

lbl_803F2CC4:
stw      r3, 0xc4(r31)
li       r3, 0x1c
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_803F2D68
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r6, __vt__18JPAEmitterCallBack@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r5, __vt__Q25efx2d8TForever@ha
lis      r4, __vt__Q25efx2d12TChasePosDir@ha
stw      r0, 0(r3)
li       r19, 0
addi     r12, r5, __vt__Q25efx2d8TForever@l
addi     r9, r4, __vt__Q25efx2d12TChasePosDir@l
stb      r19, 4(r3)
lis      r4, __vt__Q35efx2d8WorldMap13T2DRocketGlow@ha
addi     r5, r4, __vt__Q35efx2d8WorldMap13T2DRocketGlow@l
addi     r0, r6, __vt__18JPAEmitterCallBack@l
stb      r19, 5(r3)
addi     r11, r12, 0x18
li       r10, 3
addi     r8, r9, 0x18
stw      r0, 8(r3)
addi     r7, r31, 0xd0
addi     r6, r31, 0xd8
addi     r4, r5, 0x18
stw      r12, 0(r3)
li       r0, 1
stw      r11, 8(r3)
sth      r10, 0xc(r3)
stw      r19, 0x10(r3)
stw      r9, 0(r3)
stw      r8, 8(r3)
stw      r7, 0x14(r3)
stw      r6, 0x18(r3)
stw      r5, 0(r3)
stw      r4, 8(r3)
stb      r0, 4(r3)

lbl_803F2D68:
stw      r3, 0xc0(r31)
li       r4, 3
lwz      r3, 0xc4(r31)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xc0(r31)
li       r4, 2
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xc4(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lwz      r3, 0xc0(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
li       r20, 0
li       r19, 0
b        lbl_803F2DEC

lbl_803F2DD8:
lwz      r0, 0xf0(r31)
add      r3, r0, r19
bl       initPtcl__Q42kh6Screen8WorldMap13OnyonDynamicsFv
addi     r19, r19, 0x34
addi     r20, r20, 1

lbl_803F2DEC:
lwz      r0, 0xf4(r31)
cmpw     r20, r0
blt      lbl_803F2DD8
li       r3, 0x18
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_803F2E90
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r6, __vt__18JPAEmitterCallBack@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r5, __vt__Q25efx2d8TForever@ha
lis      r4, __vt__Q25efx2d9TChasePos@ha
stw      r0, 0(r3)
li       r12, 0
addi     r11, r5, __vt__Q25efx2d8TForever@l
addi     r8, r4, __vt__Q25efx2d9TChasePos@l
stb      r12, 4(r3)
lis      r4, __vt__Q35efx2d8WorldMap11T2DMapFlare@ha
addi     r5, r4, __vt__Q35efx2d8WorldMap11T2DMapFlare@l
addi     r0, r6, __vt__18JPAEmitterCallBack@l
stb      r12, 5(r3)
addi     r10, r11, 0x18
li       r9, 4
addi     r7, r8, 0x18
stw      r0, 8(r3)
addi     r6, r31, 0xe0
addi     r4, r5, 0x18
li       r0, 1
stw      r11, 0(r3)
stw      r10, 8(r3)
sth      r9, 0xc(r3)
stw      r12, 0x10(r3)
stw      r8, 0(r3)
stw      r7, 8(r3)
stw      r6, 0x14(r3)
stw      r5, 0(r3)
stw      r4, 8(r3)
stb      r0, 4(r3)

lbl_803F2E90:
stw      r3, 0xc8(r31)
li       r3, 0x18
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_803F2F2C
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r6, __vt__18JPAEmitterCallBack@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r5, __vt__Q25efx2d8TForever@ha
lis      r4, __vt__Q25efx2d9TChasePos@ha
stw      r0, 0(r3)
li       r12, 0
addi     r11, r5, __vt__Q25efx2d8TForever@l
addi     r8, r4, __vt__Q25efx2d9TChasePos@l
stb      r12, 4(r3)
lis      r4, __vt__Q35efx2d8WorldMap10T2DShstar1@ha
addi     r5, r4, __vt__Q35efx2d8WorldMap10T2DShstar1@l
addi     r0, r6, __vt__18JPAEmitterCallBack@l
stb      r12, 5(r3)
addi     r10, r11, 0x18
li       r9, 7
addi     r7, r8, 0x18
stw      r0, 8(r3)
addi     r6, r31, 0xe8
addi     r4, r5, 0x18
li       r0, 1
stw      r11, 0(r3)
stw      r10, 8(r3)
sth      r9, 0xc(r3)
stw      r12, 0x10(r3)
stw      r8, 0(r3)
stw      r7, 8(r3)
stw      r6, 0x14(r3)
stw      r5, 0(r3)
stw      r4, 8(r3)
stb      r0, 4(r3)

lbl_803F2F2C:
stw      r3, 0xcc(r31)
li       r4, 2
lwz      r3, 0xc8(r31)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xcc(r31)
li       r4, 2
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xc8(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lwz      r3, 0xcc(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lwz      r3, 0x54(r31)
lis      r4, 0x61766530@ha
addi     r6, r4, 0x61766530@l
li       r5, 0x4e63
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r19, 0x54(r31)
lwz      r20, 0x10(r3)
cmplwi   r19, 0
lwz      r21, 0x14(r3)
bne      lbl_803F2FCC
li       r22, 0
b        lbl_803F3038

lbl_803F2FCC:
li       r3, 0x38
bl       __nw__FUl
or.      r22, r3, r3
beq      lbl_803F2FFC
li       r4, 0x10
bl       __ct__Q32kh6Screen14khUtilFadePaneFUc
lis      r3, __vt__Q32kh6Screen16khUtilFadePaneWM@ha
li       r0, 0
addi     r3, r3, __vt__Q32kh6Screen16khUtilFadePaneWM@l
stw      r3, 0(r22)
stw      r0, 0x30(r22)
stb      r0, 0x34(r22)

lbl_803F2FFC:
cmplwi   r22, 0
bne      lbl_803F3018
addi     r3, r30, 0
addi     r5, r30, 0x30
li       r4, 0x3c
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803F3018:
mr       r3, r19
mr       r6, r21
mr       r5, r20
mr       r7, r22
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r4, r3
mr       r3, r22
bl       add__Q32kh6Screen14khUtilFadePaneFP7J2DPane

lbl_803F3038:
stw      r22, 0x154(r31)
lis      r3, 0x61766531@ha
addi     r6, r3, 0x61766531@l
li       r5, 0x4e63
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x154(r31)
bl       add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
lwz      r3, 0x54(r31)
lis      r4, 0x61766532@ha
addi     r6, r4, 0x61766532@l
li       r5, 0x4e63
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x154(r31)
bl       add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
lwz      r3, 0x54(r31)
lis      r4, 0x61766533@ha
addi     r6, r4, 0x61766533@l
li       r5, 0x4e63
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x154(r31)
bl       add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
lwz      r3, 0x54(r31)
lis      r5, 0x6E616D65@ha
lis      r4, 0x0050635F@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x6E616D65@l
addi     r5, r4, 0x0050635F@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x154(r31)
bl       add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
lwz      r3, 0x54(r31)
lis      r4, 0x72616E64@ha
addi     r6, r4, 0x72616E64@l
li       r5, 0x4e67
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x154(r31)
bl       add__Q32kh6Screen14khUtilFadePaneFP7J2DPane
lwz      r3, 0x154(r31)
li       r4, 0
stw      r31, 0x30(r3)
lwz      r3, 0x154(r31)
bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc
lwz      r3, 0x154(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
li       r0, 0x19
addi     r5, r1, 0x15c
addi     r4, r30, 0x1b4
mtctr    r0

lbl_803F3148:
lwz      r3, 4(r4)
lwzu     r0, 8(r4)
stw      r3, 4(r5)
stwu     r0, 8(r5)
bdnz     lbl_803F3148
lwz      r11, 0x280(r30)
lis      r4, __vt__Q25efx2d8TForever@ha
lwz      r10, 0x284(r30)
lis      r3, __vt__Q25efx2d12T2DCountKira@ha
lwz      r9, 0x288(r30)
addi     r4, r4, __vt__Q25efx2d8TForever@l
lwz      r8, 0x28c(r30)
addi     r3, r3, __vt__Q25efx2d12T2DCountKira@l
lwz      r7, 0x290(r30)
mr       r23, r31
lwz      r6, 0x294(r30)
addi     r24, r1, 0x160
lwz      r5, 0x298(r30)
addi     r22, r1, 0x88
lwz      r25, 0x29c(r30)
addi     r21, r4, 0x18
lwz      r12, 0x2a0(r30)
addi     r20, r3, 0x18
lwz      r0, 0x2a4(r30)
li       r19, 0
stw      r11, 0x88(r1)
lwz      r11, 0x104(r31)
stw      r10, 0x8c(r1)
lwz      r10, 0x108(r31)
stw      r9, 0x90(r1)
lwz      r9, 0x10c(r31)
stw      r8, 0x94(r1)
lwz      r8, 0x11c(r31)
stw      r7, 0x98(r1)
lwz      r7, 0x110(r31)
stw      r6, 0x9c(r1)
lwz      r6, 0x120(r31)
stw      r5, 0xa0(r1)
lwz      r5, 0x114(r31)
stw      r25, 0xa4(r1)
lwz      r4, 0x124(r31)
stw      r12, 0xa8(r1)
lwz      r3, 0x118(r31)
stw      r0, 0xac(r1)
lwz      r0, 0x128(r31)
stw      r11, 0x88(r1)
stw      r10, 0x8c(r1)
stw      r9, 0x90(r1)
stw      r8, 0x94(r1)
stw      r7, 0x98(r1)
stw      r6, 0x9c(r1)
stw      r5, 0xa0(r1)
stw      r4, 0xa4(r1)
stw      r3, 0xa8(r1)
stw      r0, 0xac(r1)

lbl_803F3224:
li       r3, 0x60
bl       __nw__FUl
or.      r28, r3, r3
beq      lbl_803F327C
lwz      r4, 0x54(r31)
li       r7, 3
lwz      r5, 0(r24)
li       r8, 0x64
lwz      r6, 4(r24)
bl       __ct__Q32kh6Screen14khUtilColorAnmFPQ29P2DScreen3MgrUxii
lis      r3, __vt__Q32kh6Screen16khUtilColorAnmWM@ha
li       r0, 0
addi     r3, r3, __vt__Q32kh6Screen16khUtilColorAnmWM@l
stw      r3, 0(r28)
stw      r0, 0x38(r28)
stw      r0, 0x48(r28)
stw      r0, 0x3c(r28)
stw      r0, 0x4c(r28)
stw      r0, 0x40(r28)
stw      r0, 0x50(r28)
stw      r0, 0x44(r28)
stw      r0, 0x54(r28)

lbl_803F327C:
li       r4, 0xff
li       r3, 0xa0
li       r0, 0x40
stb      r4, 0x30(r1)
li       r9, 0x60
li       r7, 0
stw      r28, 0x158(r23)
li       r6, 0xad
li       r5, 0xb6
lwz      r8, 0x158(r23)
stb      r3, 0x31(r1)
lwz      r11, 0x1c(r8)
stb      r0, 0x32(r1)
stb      r4, 0x33(r1)
lwz      r8, 0x30(r1)
stb      r4, 0x28(r1)
stw      r8, 0x34(r1)
lbz      r10, 0x34(r1)
lbz      r8, 0x35(r1)
stb      r10, 0(r11)
lbz      r10, 0x36(r1)
stb      r8, 1(r11)
lbz      r8, 0x37(r1)
stb      r10, 2(r11)
stb      r8, 3(r11)
lwz      r8, 0x158(r23)
stb      r4, 0x29(r1)
lwz      r10, 0x1c(r8)
stb      r9, 0x2a(r1)
stb      r4, 0x2b(r1)
lwz      r8, 0x28(r1)
stb      r4, 0x20(r1)
stw      r8, 0x2c(r1)
lbz      r9, 0x2c(r1)
lbz      r8, 0x2d(r1)
stb      r9, 4(r10)
lbz      r9, 0x2e(r1)
stb      r8, 5(r10)
lbz      r8, 0x2f(r1)
stb      r9, 6(r10)
stb      r8, 7(r10)
lwz      r8, 0x158(r23)
stb      r3, 0x21(r1)
lwz      r8, 0x1c(r8)
stb      r0, 0x22(r1)
stb      r4, 0x23(r1)
lwz      r0, 0x20(r1)
stb      r7, 0x18(r1)
stw      r0, 0x24(r1)
lbz      r3, 0x24(r1)
lbz      r0, 0x25(r1)
stb      r3, 8(r8)
lbz      r3, 0x26(r1)
stb      r0, 9(r8)
lbz      r0, 0x27(r1)
stb      r3, 0xa(r8)
stb      r0, 0xb(r8)
stb      r6, 0x19(r1)
lwz      r6, 0x158(r23)
stb      r5, 0x1a(r1)
stb      r4, 0x1b(r1)
lwz      r0, 0x18(r1)
stw      r0, 0x1c(r1)
lbz      r3, 0x1c(r1)
lbz      r0, 0x1d(r1)
stb      r3, 0x24(r6)
lbz      r3, 0x1e(r1)
stb      r0, 0x25(r6)
lbz      r0, 0x1f(r1)
stb      r3, 0x26(r6)
stb      r0, 0x27(r6)
lwz      r3, 0x54(r31)
lwz      r5, 0x2a8(r30)
lwz      r12, 0(r3)
lwz      r6, 0x2ac(r30)
lwz      r4, 0x2b0(r30)
lwz      r0, 0x2b4(r30)
lwz      r12, 0x3c(r12)
stw      r5, 0x50(r1)
lwz      r5, 8(r24)
stw      r6, 0x54(r1)
lwz      r6, 0xc(r24)
stw      r4, 0x58(r1)
stw      r0, 0x5c(r1)
mtctr    r12
bctrl
stw      r3, 0x50(r1)
lwz      r3, 0x54(r31)
lwz      r5, 0x10(r24)
lwz      r12, 0(r3)
lwz      r6, 0x14(r24)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x54(r1)
lwz      r3, 0x54(r31)
lwz      r5, 0x18(r24)
lwz      r12, 0(r3)
lwz      r6, 0x1c(r24)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x58(r1)
lwz      r3, 0x54(r31)
lwz      r5, 0x20(r24)
lwz      r12, 0(r3)
lwz      r6, 0x24(r24)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r27, 0x158(r23)
addi     r26, r1, 0x50
stw      r3, 0x5c(r1)
li       r28, 0
mr       r25, r27

lbl_803F3448:
lwz      r0, 0(r26)
li       r3, 0x18
stw      r0, 0x38(r25)
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_803F34C4
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r6, __vt__18JPAEmitterCallBack@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r5, __vt__Q25efx2d8TForever@ha
lis      r4, __vt__Q25efx2d12T2DCountKira@ha
stw      r0, 0(r3)
li       r8, 0
addi     r7, r6, __vt__18JPAEmitterCallBack@l
addi     r6, r5, __vt__Q25efx2d8TForever@l
stb      r8, 4(r3)
li       r5, 8
addi     r0, r4, __vt__Q25efx2d12T2DCountKira@l
lfs      f0, lbl_8051FEF0@sda21(r2)
stb      r8, 5(r3)
stw      r7, 8(r3)
stw      r6, 0(r3)
stw      r21, 8(r3)
sth      r5, 0xc(r3)
stw      r8, 0x10(r3)
stw      r0, 0(r3)
stw      r20, 8(r3)
stfs     f0, 0x14(r3)

lbl_803F34C4:
stw      r3, 0x48(r25)
li       r4, 4
lwz      r3, 0x48(r25)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
addi     r28, r28, 1
addi     r25, r25, 4
cmpwi    r28, 4
addi     r26, r26, 4
blt      lbl_803F3448
lwz      r3, 0(r22)
addi     r19, r19, 1
lwz      r0, 4(r22)
cmpwi    r19, 5
stw      r3, 0x58(r27)
addi     r24, r24, 0x28
addi     r23, r23, 4
addi     r22, r22, 8
stw      r0, 0x5c(r27)
blt      lbl_803F3224
mr       r3, r29
bl       becomeCurrentHeap__7JKRHeapFv
lbz      r4, 0x181(r31)
li       r3, 1
addic.   r5, r4, -1
addi     r0, r5, 1
mtctr    r0
blt      lbl_803F3568

lbl_803F353C:
lbz      r4, 0x182(r31)
slw      r0, r3, r5
and.     r0, r4, r0
bne      lbl_803F3560
slwi     r0, r5, 2
addi     r3, r30, 0x10
lfsx     f0, r3, r0
stfs     f0, 0x90(r31)
b        lbl_803F3568

lbl_803F3560:
addi     r5, r5, -1
bdnz     lbl_803F353C

lbl_803F3568:
lwz      r3, 0x48(r31)
lis      r5, 0x434B4554@ha
lis      r4, 0x004E524F@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x434B4554@l
addi     r5, r4, 0x004E524F@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f1, lbl_8051FF10@sda21(r2)
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f1, 0xd4(r3)
stfs     f0, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x48(r31)
lis      r4, 0x4E524544@ha
addi     r6, r4, 0x4E524544@l
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f1, lbl_8051FF10@sda21(r2)
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f1, 0xd4(r3)
stfs     f0, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x48(r31)
lis      r5, 0x4C4C4F57@ha
lis      r4, 0x004E5945@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x4C4C4F57@l
addi     r5, r4, 0x004E5945@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f1, lbl_8051FF10@sda21(r2)
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f1, 0xd4(r3)
stfs     f0, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x48(r31)
lis      r4, 0x424C5545@ha
addi     r6, r4, 0x424C5545@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f1, lbl_8051FF10@sda21(r2)
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f1, 0xd4(r3)
stfs     f0, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
li       r21, 0
lis      r20, 0x61697430@ha
li       r19, 0

lbl_803F367C:
mr       r5, r21
addi     r4, r20, 0x61697430@l
li       r3, 0x4e77
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
addi     r21, r21, 1
stb      r19, 0xb0(r3)
cmpwi    r21, 4
blt      lbl_803F367C
li       r19, 0

lbl_803F36BC:
lbz      r0, 0x181(r31)
cmpw     r19, r0
bge      lbl_803F36DC
li       r0, 1
lbz      r3, 0x182(r31)
slw      r0, r0, r19
and.     r0, r3, r0
beq      lbl_803F3718

lbl_803F36DC:
lis      r4, 0x696E7430@ha
lis      r3, 0x004E706F@ha
mr       r5, r19
addi     r4, r4, 0x696E7430@l
addi     r3, r3, 0x004E706F@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F3718:
addi     r19, r19, 1
cmpwi    r19, 4
blt      lbl_803F36BC
li       r22, 0
lis      r21, 0x6768
lis      r20, 0x50
li       r19, 0
b        lbl_803F376C

lbl_803F3738:
mr       r5, r22
addi     r4, r21, 0x7430
addi     r3, r20, 0x6c69
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stb      r19, 0xb0(r3)
addi     r22, r22, 1

lbl_803F376C:
lbz      r0, 0x181(r31)
cmpw     r22, r0
blt      lbl_803F3738
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
lwz      r4, 0x20(r31)
bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
lmw      r19, 0x22c(r1)
lwz      r0, 0x264(r1)
mtlr     r0
addi     r1, r1, 0x260
blr
	*/
}

/*
 * --INFO--
 * Address:	803F3798
 * Size:	00003C
 */
WorldMap::OnyonDynamics::~OnyonDynamics()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
or.      r31, r3, r3
beq      lbl_803F37BC
extsh.   r0, r4
ble      lbl_803F37BC
bl       __dl__FPv

lbl_803F37BC:
lwz      r0, 0x14(r1)
mr       r3, r31
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F37D4
 * Size:	001C20
 */
void WorldMap::update(Game::WorldMap::UpdateArg&)
{
	/*
stwu     r1, -0x170(r1)
mflr     r0
stw      r0, 0x174(r1)
stfd     f31, 0x160(r1)
psq_st   f31, 360(r1), 0, qr0
stfd     f30, 0x150(r1)
psq_st   f30, 344(r1), 0, qr0
stmw     r25, 0x134(r1)
mr       r31, r3
mr       r26, r4
lis      r5, lbl_80497C70@ha
lwz      r3, 0x1c(r3)
lwz      r4, 0xf8(r31)
addi     r30, r5, lbl_80497C70@l
bl       getCourseInfo__Q24Game6StagesFi
stw      r3, 0(r26)
lfs      f0, 0x68(r31)
lwz      r3, 0x34(r31)
stfs     f0, 8(r3)
lfs      f0, 0x70(r31)
lwz      r3, 0x3c(r31)
stfs     f0, 8(r3)
lfs      f0, 0x74(r31)
lwz      r3, 0x40(r31)
stfs     f0, 8(r3)
lfs      f0, 0x78(r31)
lwz      r3, 0x44(r31)
stfs     f0, 8(r3)
lfs      f0, 0x7c(r31)
lwz      r3, 0x4c(r31)
stfs     f0, 8(r3)
lfs      f0, 0x80(r31)
lwz      r3, 0x50(r31)
stfs     f0, 8(r3)
lfs      f0, 0x84(r31)
lwz      r3, 0x58(r31)
stfs     f0, 8(r3)
lfs      f0, 0x88(r31)
lwz      r3, 0x5c(r31)
stfs     f0, 8(r3)
lfs      f0, 0x8c(r31)
lwz      r3, 0x60(r31)
stfs     f0, 8(r3)
lwz      r3, 0x30(r31)
bl       animation__9J2DScreenFv
lwz      r3, 0x48(r31)
bl       animation__9J2DScreenFv
lwz      r3, 0x54(r31)
bl       animation__9J2DScreenFv
lfs      f0, 0x6c(r31)
li       r25, 0
lwz      r3, 0x38(r31)
lis      r29, 0x616E6430@ha
lis      r28, 0x6768
lis      r27, 0x50
stfs     f0, 8(r3)

lbl_803F38B4:
mr       r5, r25
addi     r4, r29, 0x616E6430@l
li       r3, 0x506c
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
mr       r5, r25
addi     r4, r28, 0x7430
addi     r3, r27, 0x6c69
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       animationTransform__7J2DPaneFv
addi     r25, r25, 1
cmpwi    r25, 4
blt      lbl_803F38B4
lfs      f1, 0x70(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FEF0@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x70(r31)
lwz      r3, 0x3c(r31)
lfs      f2, 0x70(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F396C
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x70(r31)

lbl_803F396C:
lfs      f1, 0x74(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FEF0@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x74(r31)
lwz      r3, 0x40(r31)
lfs      f2, 0x74(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F39B8
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x74(r31)

lbl_803F39B8:
lfs      f1, 0x78(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FEF0@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x78(r31)
lwz      r3, 0x44(r31)
lfs      f2, 0x78(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F3A04
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x78(r31)

lbl_803F3A04:
lfs      f1, 0x7c(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FEF0@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x7c(r31)
lwz      r3, 0x4c(r31)
lfs      f2, 0x7c(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F3A50
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x7c(r31)

lbl_803F3A50:
lfs      f1, 0x80(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FEF0@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x80(r31)
lwz      r3, 0x50(r31)
lfs      f2, 0x80(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F3A9C
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x80(r31)

lbl_803F3A9C:
lfs      f1, 0x84(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FF14@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x84(r31)
lwz      r3, 0x58(r31)
lfs      f2, 0x84(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F3AE8
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x84(r31)

lbl_803F3AE8:
lfs      f1, 0x88(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FF14@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x88(r31)
lwz      r3, 0x5c(r31)
lfs      f2, 0x88(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F3B34
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x88(r31)

lbl_803F3B34:
lfs      f1, 0x8c(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FF14@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x8c(r31)
lwz      r3, 0x60(r31)
lfs      f2, 0x8c(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F3B80
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x8c(r31)

lbl_803F3B80:
lfs      f1, 0x6c(r31)
lis      r0, 0x4330
lfs      f0, lbl_8051FEF0@sda21(r2)
stw      r0, 0x120(r1)
fadds    f0, f1, f0
lfd      f1, lbl_8051FF40@sda21(r2)
stfs     f0, 0x6c(r31)
lwz      r3, 0x38(r31)
lfs      f2, 0x6c(r31)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x124(r1)
lfd      f0, 0x120(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_803F3BCC
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f0, 0x6c(r31)

lbl_803F3BCC:
lwz      r3, 0x30(r31)
lis      r5, 0x68743031@ha
lis      r4, 0x006C6967@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x68743031@l
addi     r5, r4, 0x006C6967@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lwz      r3, 0x30(r31)
lis      r5, 0x68743031@ha
lis      r4, 0x006C6967@ha
fmr      f30, f1
lwz      r12, 0(r3)
addi     r6, r5, 0x68743031@l
addi     r5, r4, 0x006C6967@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
stfs     f1, 0xe0(r31)
lis      r3, 0x73746172@ha
addi     r6, r3, 0x73746172@l
li       r5, 0
stfs     f30, 0xe4(r31)
lwz      r3, 0x30(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lwz      r3, 0x30(r31)
lis      r4, 0x73746172@ha
fmr      f30, f1
addi     r6, r4, 0x73746172@l
lwz      r12, 0(r3)
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
stfs     f1, 0xe8(r31)
addi     r0, r1, 0x100
stfs     f30, 0xec(r31)
lfd      f7, 0x370(r30)
lfd      f6, 0x378(r30)
lfd      f5, 0x380(r30)
lfd      f4, 0x388(r30)
lfd      f3, 0x390(r30)
lfd      f2, 0x398(r30)
lfd      f1, 0x3a0(r30)
lfd      f0, 0x3a8(r30)
stfd     f7, 0x100(r1)
stfd     f6, 0x108(r1)
stfd     f5, 0x110(r1)
stfd     f4, 0x118(r1)
stfd     f3, 0xe0(r1)
stfd     f2, 0xe8(r1)
stfd     f1, 0xf0(r1)
stfd     f0, 0xf8(r1)
lwz      r3, 0x30(r31)
lwz      r4, 0xf8(r31)
lwz      r12, 0(r3)
slwi     r4, r4, 3
add      r6, r0, r4
lwz      r12, 0x3c(r12)
lwz      r5, 0(r6)
lwz      r6, 4(r6)
mtctr    r12
bctrl
mr       r5, r3
lwz      r3, 0x30(r31)
lwz      r4, 0xf8(r31)
addi     r0, r1, 0xe0
lwz      r12, 0(r3)
mr       r29, r5
slwi     r4, r4, 3
lwz      r12, 0x3c(r12)
add      r6, r0, r4
lwz      r5, 0(r6)
lwz      r6, 4(r6)
mtctr    r12
bctrl
mr       r0, r3
lwz      r3, 0x48(r31)
lis      r5, 0x434B4554@ha
lis      r4, 0x004E524F@ha
lwz      r12, 0(r3)
mr       r28, r0
addi     r6, r5, 0x434B4554@l
addi     r5, r4, 0x004E524F@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f0, 0x9c(r31)
mr       r27, r3
stfs     f0, 0xa4(r31)
lfs      f0, 0xa0(r31)
stfs     f0, 0xa8(r31)
lwz      r0, 0x174(r31)
cmplwi   r0, 0xe
bgt      lbl_803F5160
lis      r4, lbl_804EA3A0@ha
slwi     r0, r0, 2
addi     r4, r4, lbl_804EA3A0@l
lwzx     r0, r4, r0
mtctr    r0
bctr
.global  lbl_803F3D80

lbl_803F3D80:
lfs      f1, 0x68(r31)
lfs      f0, lbl_8051FF18@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0x68(r31)
lfs      f1, 0x68(r31)
lfs      f0, 0x90(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_803F406C
mr       r3, r31
bl       newMapOpen__Q32kh6Screen8WorldMapFv
clrlwi.  r0, r3, 0x18
bne      lbl_803F406C
li       r27, 1

lbl_803F3DB8:
addi     r0, r27, 4
li       r3, 1
lbz      r4, 0x182(r31)
slw      r0, r3, r0
and.     r0, r4, r0
beq      lbl_803F3FF8
lis      r4, 0x696E7430@ha
lis      r3, 0x004E706F@ha
mr       r5, r27
addi     r4, r4, 0x696E7430@l
addi     r3, r3, 0x004E706F@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
fmr      f30, f1
lis      r4, 0x696E7430@ha
lis      r3, 0x004E706F@ha
mr       r5, r27
addi     r4, r4, 0x696E7430@l
addi     r3, r3, 0x004E706F@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
stfs     f1, 0x48(r1)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
lbz      r11, 0x181(r31)
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
stfs     f30, 0x4c(r1)
lis      r5, __vt__Q25efx2d5TBase@ha
lwz      r4, 0x48(r1)
lis      r9, msVal__Q32kh6Screen8WorldMap@ha
lwz      r6, 0x4c(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
li       r10, 0
stw      r4, 0x18(r1)
lis      r4, __vt__Q25efx2d8TSimple2@ha
addi     r12, r3, __vt__Q25efx2d3Arg@l
stw      r6, 0x1c(r1)
lis      r6, __vt__Q25efx2d8ArgScale@ha
lfs      f1, 0x18(r1)
lis      r3, __vt__Q35efx2d8WorldMap9T2DNewmap@ha
lfs      f0, 0x1c(r1)
li       r8, 5
li       r7, 6
stw      r0, 0xc8(r1)
addi     r0, r5, __vt__Q25efx2d5TBase@l
slwi     r11, r11, 2
addi     r5, r9, msVal__Q32kh6Screen8WorldMap@l
stw      r0, 0xc8(r1)
add      r5, r5, r11
addi     r9, r4, __vt__Q25efx2d8TSimple2@l
lfs      f2, 0x28(r5)
addi     r11, r6, __vt__Q25efx2d8ArgScale@l
stw      r12, 0xc0(r1)
addi     r6, r3, __vt__Q35efx2d8WorldMap9T2DNewmap@l
li       r5, 1
li       r0, 2
stb      r10, 0xcc(r1)
addi     r3, r1, 0xc8
addi     r4, r1, 0xb8
stb      r10, 0xcd(r1)
stw      r9, 0xc8(r1)
stfs     f1, 0xb8(r1)
stfs     f0, 0xbc(r1)
stw      r11, 0xc0(r1)
stfs     f2, 0xc4(r1)
sth      r8, 0xd0(r1)
sth      r7, 0xd2(r1)
stw      r10, 0xd4(r1)
stw      r10, 0xd8(r1)
stw      r6, 0xc8(r1)
stb      r5, 0xcc(r1)
stb      r0, 0xcd(r1)
bl       create__Q35efx2d8WorldMap9T2DNewmapFPQ25efx2d3Arg
cmpwi    r27, 3
bne      lbl_803F3FBC
lwz      r5, 0xe8(r31)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
lwz      r6, 0xec(r31)
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lis      r3, __vt__Q25efx2d5TBase@ha
li       r9, 0
stw      r0, 0x98(r1)
addi     r0, r3, __vt__Q25efx2d5TBase@l
lis      r3, __vt__Q25efx2d3Arg@ha
lis      r4, __vt__Q25efx2d8TSimple1@ha
stw      r5, 0x10(r1)
addi     r11, r3, __vt__Q25efx2d3Arg@l
lfs      f0, lbl_8051FEF0@sda21(r2)
lis      r5, __vt__Q25efx2d8ArgScale@ha
stw      r6, 0x14(r1)
lis      r3, __vt__Q35efx2d8WorldMap10T2DShstar2@ha
lfs      f2, 0x10(r1)
li       r7, 8
lfs      f1, 0x14(r1)
addi     r8, r4, __vt__Q25efx2d8TSimple1@l
stw      r0, 0x98(r1)
addi     r10, r5, __vt__Q25efx2d8ArgScale@l
addi     r6, r3, __vt__Q35efx2d8WorldMap10T2DShstar2@l
li       r5, 1
stw      r11, 0xb0(r1)
li       r0, 2
addi     r3, r1, 0x98
addi     r4, r1, 0xa8
stb      r9, 0x9c(r1)
stb      r9, 0x9d(r1)
stw      r8, 0x98(r1)
stfs     f2, 0xa8(r1)
stfs     f1, 0xac(r1)
stw      r10, 0xb0(r1)
stfs     f0, 0xb4(r1)
sth      r7, 0xa0(r1)
stw      r9, 0xa4(r1)
stw      r6, 0x98(r1)
stb      r5, 0x9c(r1)
stb      r0, 0x9d(r1)
bl       create__Q35efx2d8WorldMap10T2DShstar2FPQ25efx2d3Arg

lbl_803F3FBC:
lis      r4, 0x696E7430@ha
lis      r3, 0x004E706F@ha
mr       r5, r27
addi     r4, r4, 0x696E7430@l
addi     r3, r3, 0x004E706F@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)

lbl_803F3FF8:
addi     r27, r27, 1
cmpwi    r27, 4
blt      lbl_803F3DB8
li       r3, 0xc
addi     r0, r1, 0x100
stw      r3, 0x174(r31)
lbz      r3, 0x181(r31)
addi     r3, r3, -1
stw      r3, 0xf8(r31)
lwz      r3, 0x30(r31)
lwz      r4, 0xf8(r31)
lwz      r12, 0(r3)
slwi     r4, r4, 3
lwz      r12, 0x3c(r12)
add      r6, r0, r4
lwz      r5, 0(r6)
lwz      r6, 4(r6)
mtctr    r12
bctrl
mr       r29, r3
bl       PSMGetWorldMapRocket__Fv
li       r4, 2
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1812
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, 0x154(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv

lbl_803F406C:
mr       r3, r31
mr       r4, r29
bl       postureControl__Q32kh6Screen8WorldMapFP7J2DPane
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F4084

lbl_803F4084:
mr       r3, r31
mr       r4, r29
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
fmr      f30, f1
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0xc(r3)
fcmpo    cr0, f30, f0
bge      lbl_803F40D4
li       r3, 0
li       r0, 2
stw      r3, 0xfc(r31)
stw      r0, 0x174(r31)
bl       PSMGetWorldMapRocket__Fv
li       r4, 5
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState

lbl_803F40D4:
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
mr       r3, r31
bl       changeState__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F40E8

lbl_803F40E8:
mr       r3, r31
mr       r4, r29
bl       postureControl__Q32kh6Screen8WorldMapFP7J2DPane
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
mr       r3, r31
bl       changeState__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F4108

lbl_803F4108:
lwz      r3, 0xfc(r31)
addi     r0, r3, 1
stw      r0, 0xfc(r31)
lwz      r0, 0x178(r31)
cmpwi    r0, 1
bne      lbl_803F4130
lfs      f1, lbl_8051FF04@sda21(r2)
bl       pikmin2_cosf__Ff
fmr      f30, f1
b        lbl_803F413C

lbl_803F4130:
lfs      f1, lbl_8051FF1C@sda21(r2)
bl       pikmin2_cosf__Ff
fmr      f30, f1

lbl_803F413C:
lwz      r0, 0x178(r31)
cmpwi    r0, 1
bne      lbl_803F4154
lfs      f1, lbl_8051FF04@sda21(r2)
bl       pikmin2_sinf__Ff
b        lbl_803F415C

lbl_803F4154:
lfs      f1, lbl_8051FF1C@sda21(r2)
bl       pikmin2_sinf__Ff

lbl_803F415C:
lfs      f4, 0xac(r31)
lis      r3, __float_epsilon@ha
lfs      f2, lbl_8051FF20@sda21(r2)
stfs     f4, 0x40(r1)
lfs      f3, 0xb0(r31)
fmuls    f0, f3, f1
stfs     f3, 0x44(r1)
fmuls    f3, f3, f30
fmsubs   f0, f4, f30, f0
fmadds   f1, f4, f1, f3
stfs     f0, 0xac(r31)
stfs     f1, 0xb0(r31)
lfs      f0, 0xac(r31)
lfs      f1, 0xb0(r31)
fmuls    f3, f0, f0
lfs      f0, __float_epsilon@l(r3)
fmuls    f1, f1, f1
fmuls    f0, f2, f0
fadds    f4, f3, f1
fcmpo    cr0, f4, f0
cror     2, 0, 2
beq      lbl_803F4200
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f4, f0
cror     2, 0, 2
bne      lbl_803F41C8
b        lbl_803F41E8

lbl_803F41C8:
frsqrte  f3, f4
lfs      f2, lbl_8051FF14@sda21(r2)
lfs      f0, lbl_8051FF24@sda21(r2)
frsp     f3, f3
fmuls    f1, f3, f3
fmuls    f2, f2, f3
fnmsubs  f0, f4, f1, f0
fmuls    f4, f2, f0

lbl_803F41E8:
lfs      f0, 0xac(r31)
fmuls    f0, f0, f4
stfs     f0, 0xac(r31)
lfs      f0, 0xb0(r31)
fmuls    f0, f0, f4
stfs     f0, 0xb0(r31)

lbl_803F4200:
lfs      f1, lbl_8051FEF4@sda21(r2)
mr       r3, r31
addi     r4, r1, 0x40
bl       "getRotDir__Q32kh6Screen8WorldMapFRCQ29JGeometry8TVec2<f>f"
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lfs      f2, 0xac(r31)
addi     r4, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x9c(r31)
lfs      f1, 0(r4)
mr       r3, r28
lfs      f3, 4(r4)
fmuls    f1, f2, f1
fmadds   f0, f3, f1, f0
stfs     f0, 0x9c(r31)
lfs      f1, 0xb0(r31)
lfs      f0, 0(r4)
lfs      f2, 4(r4)
fmuls    f1, f1, f0
lfs      f0, 0xa0(r31)
fmadds   f0, f2, f1, f0
stfs     f0, 0xa0(r31)
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lfs      f0, 0xa0(r31)
mr       r3, r28
fsubs    f31, f1, f0
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lfs      f0, 0x9c(r31)
lwz      r0, 0x17c(r31)
fsubs    f4, f1, f0
rlwinm.  r0, r0, 0, 0x1c, 0x1c
fmuls    f2, f4, f4
fadds    f0, f31, f2
fadds    f6, f31, f0
bne      lbl_803F4350
lis      r3, __float_epsilon@ha
lfs      f1, lbl_8051FF20@sda21(r2)
lfs      f0, __float_epsilon@l(r3)
fmadds   f5, f31, f31, f2
fmuls    f0, f1, f0
fcmpo    cr0, f5, f0
cror     2, 0, 2
beq      lbl_803F42E4
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f5, f0
cror     2, 0, 2
bne      lbl_803F42BC
b        lbl_803F42DC

lbl_803F42BC:
frsqrte  f3, f5
lfs      f2, lbl_8051FF14@sda21(r2)
lfs      f0, lbl_8051FF24@sda21(r2)
frsp     f3, f3
fmuls    f1, f3, f3
fmuls    f2, f2, f3
fnmsubs  f0, f5, f1, f0
fmuls    f5, f2, f0

lbl_803F42DC:
fmuls    f4, f4, f5
fmuls    f31, f31, f5

lbl_803F42E4:
lfs      f0, 0xb0(r31)
lfs      f2, 0xac(r31)
fmuls    f1, f31, f0
lfs      f0, lbl_8051FF08@sda21(r2)
fmadds   f1, f4, f2, f1
fcmpo    cr0, f1, f0
ble      lbl_803F4340
lwz      r3, 0x17c(r31)
clrlwi.  r0, r3, 0x1f
bne      lbl_803F431C
lwz      r0, 0x17c(r31)
ori      r0, r0, 3
stw      r0, 0x17c(r31)
b        lbl_803F4390

lbl_803F431C:
rlwinm.  r0, r3, 0, 0x1e, 0x1e
bne      lbl_803F4390
lwz      r0, 0x17c(r31)
ori      r0, r0, 8
stw      r0, 0x17c(r31)
lwz      r0, 0x17c(r31)
rlwinm   r0, r0, 0, 0, 0x1d
stw      r0, 0x17c(r31)
b        lbl_803F4390

lbl_803F4340:
lwz      r0, 0x17c(r31)
rlwinm   r0, r0, 0, 0x1f, 0x1d
stw      r0, 0x17c(r31)
b        lbl_803F4390

lbl_803F4350:
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x14(r3)
fcmpo    cr0, f6, f0
ble      lbl_803F4390
li       r0, 4
li       r3, -42
stw      r0, 0x174(r31)
li       r0, 0
lwz      r4, 0x17c(r31)
and      r3, r4, r3
stw      r3, 0x17c(r31)
lwz      r3, 0x17c(r31)
ori      r3, r3, 0x10
stw      r3, 0x17c(r31)
stw      r0, 0xfc(r31)

lbl_803F4390:
lwz      r0, 0xfc(r31)
cmpwi    r0, 0x3c
ble      lbl_803F43DC
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x14(r3)
fcmpo    cr0, f6, f0
ble      lbl_803F43DC
li       r0, 4
li       r3, -42
stw      r0, 0x174(r31)
li       r0, 0
lwz      r4, 0x17c(r31)
and      r3, r4, r3
stw      r3, 0x17c(r31)
lwz      r3, 0x17c(r31)
ori      r3, r3, 0x10
stw      r3, 0x17c(r31)
stw      r0, 0xfc(r31)

lbl_803F43DC:
lwz      r3, 0x20(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_803F4408
li       r3, 5
li       r0, 0
stw      r3, 0x174(r31)
lwz      r3, 0x17c(r31)
rlwinm   r3, r3, 0, 0, 0x1d
stw      r3, 0x17c(r31)
stw      r0, 0xfc(r31)

lbl_803F4408:
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F4420

lbl_803F4420:
mr       r3, r31
mr       r4, r28
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
fmr      f30, f1
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x18(r3)
fcmpo    cr0, f30, f0
bge      lbl_803F4470
li       r3, 0
li       r0, 3
stw      r3, 0xfc(r31)
stw      r0, 0x174(r31)
bl       PSMGetWorldMapRocket__Fv
li       r4, 3
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState

lbl_803F4470:
lwz      r3, 0x20(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_803F449C
li       r3, 5
li       r0, 0
stw      r3, 0x174(r31)
lwz      r3, 0x17c(r31)
rlwinm   r3, r3, 0, 0, 0x1d
stw      r3, 0x17c(r31)
stw      r0, 0xfc(r31)

lbl_803F449C:
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F44A8

lbl_803F44A8:
mr       r3, r31
mr       r4, r28
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
fmr      f30, f1
mr       r3, r31
mr       r4, r28
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x14(r3)
fcmpo    cr0, f30, f0
bge      lbl_803F44F8
li       r3, 0
li       r0, 1
stw      r3, 0xfc(r31)
mr       r3, r31
stw      r0, 4(r26)
bl       finish__Q32kh6Screen8WorldMapFv
b        lbl_803F5160

lbl_803F44F8:
lbz      r4, 0x79(r3)
lbz      r3, 0x183(r31)
subfic   r0, r4, 0xff
cmpw     r3, r0
bge      lbl_803F4518
srawi    r0, r4, 1
add      r0, r3, r0
stb      r0, 0x183(r31)

lbl_803F4518:
lwz      r3, 0x20(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_803F4548
li       r0, 5
li       r3, -20
stw      r0, 0x174(r31)
li       r0, 0
lwz      r4, 0x17c(r31)
and      r3, r4, r3
stw      r3, 0x17c(r31)
stw      r0, 0xfc(r31)

lbl_803F4548:
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F4554

lbl_803F4554:
mr       r3, r31
bl       getTarget__Q32kh6Screen8WorldMapFv
cmpwi    r3, 0
blt      lbl_803F457C
lbz      r0, 0x181(r31)
cmpw     r3, r0
bge      lbl_803F457C
lwz      r0, 0xf8(r31)
cmpw     r3, r0
bne      lbl_803F4610

lbl_803F457C:
mr       r3, r29
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lfs      f0, 0xa0(r31)
mr       r3, r29
fsubs    f30, f1, f0
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lfs      f0, 0x9c(r31)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
fmuls    f2, f30, f30
fsubs    f1, f1, f0
lfs      f0, 0xc(r3)
fmadds   f1, f1, f1, f2
fcmpo    cr0, f1, f0
bge      lbl_803F45DC
mr       r3, r31
mr       r4, r29
bl       postureControl__Q32kh6Screen8WorldMapFP7J2DPane
li       r0, 2
stw      r0, 0x174(r31)
bl       PSMGetWorldMapRocket__Fv
li       r4, 5
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
b        lbl_803F468C

lbl_803F45DC:
mr       r3, r31
mr       r4, r29
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
li       r0, 1
stw      r0, 0x174(r31)
bl       PSMGetWorldMapRocket__Fv
li       r4, 2
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
b        lbl_803F468C

lbl_803F4610:
stw      r3, 0xf8(r31)
addi     r0, r1, 0x100
lwz      r3, 0x30(r31)
lwz      r4, 0xf8(r31)
lwz      r12, 0(r3)
slwi     r4, r4, 3
lwz      r12, 0x3c(r12)
add      r6, r0, r4
lwz      r5, 0(r6)
lwz      r6, 4(r6)
mtctr    r12
bctrl
mr       r26, r3
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1802
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
bl       PSMGetWorldMapRocket__Fv
li       r4, 2
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
lwz      r3, 0x154(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
mr       r3, r31
mr       r4, r26
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
mr       r3, r31
mr       r4, r26
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
li       r0, 1
stw      r0, 0x174(r31)

lbl_803F468C:
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F4698

lbl_803F4698:
mr       r3, r31
mr       r4, r29
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
fmr      f30, f1
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0xc(r3)
fcmpo    cr0, f30, f0
bge      lbl_803F46D8
mr       r3, r31
mr       r4, r29
bl       postureControl__Q32kh6Screen8WorldMapFP7J2DPane

lbl_803F46D8:
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
lwz      r0, 0x17c(r31)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
ori      r0, r0, 0x10
stw      r0, 0x17c(r31)
lbz      r4, 0x183(r31)
lbz      r0, 0x79(r3)
add      r0, r4, r0
stb      r0, 0x183(r31)
lbz      r0, 0x79(r3)
lbz      r3, 0x183(r31)
subfic   r0, r0, 0xff
cmpw     r3, r0
blt      lbl_803F5160
li       r0, 4
mr       r3, r31
stw      r0, 4(r26)
bl       finish__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F472C

lbl_803F472C:
mr       r3, r31
mr       r4, r29
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
fmr      f30, f1
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0xc(r3)
fcmpo    cr0, f30, f0
bge      lbl_803F476C
mr       r3, r31
mr       r4, r29
bl       postureControl__Q32kh6Screen8WorldMapFP7J2DPane

lbl_803F476C:
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
lwz      r0, 0x17c(r31)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
ori      r0, r0, 0x10
stw      r0, 0x17c(r31)
lbz      r4, 0x183(r31)
lbz      r0, 0x79(r3)
add      r0, r4, r0
stb      r0, 0x183(r31)
lbz      r0, 0x79(r3)
lbz      r3, 0x183(r31)
subfic   r0, r0, 0xff
cmpw     r3, r0
blt      lbl_803F5160
li       r0, 3
mr       r3, r31
stw      r0, 4(r26)
bl       finish__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F47C0

lbl_803F47C0:
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
mr       r3, r31
bl       onyonUpdate__Q32kh6Screen8WorldMapFv
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
bl       check_WorldMapInfoWin0__Q26Screen9Game2DMgrCFv
cmpwi    r3, 1
beq      lbl_803F4818
bge      lbl_803F4840
cmpwi    r3, 0
bge      lbl_803F47F4
b        lbl_803F4840

lbl_803F47F4:
bl       PSMGetWorldMapRocket__Fv
li       r4, 7
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
li       r0, 5
stw      r0, 0x174(r31)
lwz      r0, 0x17c(r31)
rlwinm   r0, r0, 0, 0x1c, 0x1a
stw      r0, 0x17c(r31)
b        lbl_803F4840

lbl_803F4818:
bl       PSMGetWorldMapRocket__Fv
li       r4, 7
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
lwz      r4, 0x17c(r31)
li       r0, 5
mr       r3, r31
rlwinm   r4, r4, 0, 0x1c, 0x1a
stw      r4, 0x17c(r31)
stw      r0, 4(r26)
bl       finish__Q32kh6Screen8WorldMapFv

lbl_803F4840:
lbz      r4, 0x183(r31)
cmplwi   r4, 0xb4
bge      lbl_803F5160
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lbz      r0, 0x79(r3)
add      r0, r4, r0
stb      r0, 0x183(r31)
b        lbl_803F5160
.global  lbl_803F4864

lbl_803F4864:
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
mr       r3, r31
bl       onyonUpdate__Q32kh6Screen8WorldMapFv
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
bl       check_WorldMapInfoWin1__Q26Screen9Game2DMgrCFv
cmpwi    r3, 1
beq      lbl_803F4898
bge      lbl_803F48E4
cmpwi    r3, 0
bge      lbl_803F48BC
b        lbl_803F48E4

lbl_803F4898:
bl       PSMGetWorldMapRocket__Fv
li       r4, 7
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
li       r0, 5
stw      r0, 0x174(r31)
lwz      r0, 0x17c(r31)
rlwinm   r0, r0, 0, 0x1c, 0x1a
stw      r0, 0x17c(r31)
b        lbl_803F48E4

lbl_803F48BC:
bl       PSMGetWorldMapRocket__Fv
li       r4, 2
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
li       r3, 0xe
li       r0, 0
stw      r3, 0x174(r31)
lwz      r3, 0x17c(r31)
rlwinm   r3, r3, 0, 0x1c, 0x1a
stw      r3, 0x17c(r31)
stw      r0, 0xfc(r31)

lbl_803F48E4:
lbz      r4, 0x183(r31)
cmplwi   r4, 0xb4
bge      lbl_803F5160
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lbz      r0, 0x79(r3)
add      r0, r4, r0
stb      r0, 0x183(r31)
b        lbl_803F5160
.global  lbl_803F4908

lbl_803F4908:
lfs      f0, 0xb0(r31)
lfs      f1, 0xac(r31)
fneg     f2, f0
bl       pikmin2_atan2f__Fff
lwz      r0, 0x178(r31)
fmr      f30, f1
cmpwi    r0, 1
bne      lbl_803F4940
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f30, f0
ble      lbl_803F4940
lfs      f0, lbl_8051FF28@sda21(r2)
fsubs    f30, f30, f0
b        lbl_803F495C

lbl_803F4940:
cmpwi    r0, 2
bne      lbl_803F495C
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f30, f0
bge      lbl_803F495C
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f30, f30, f0

lbl_803F495C:
cmpwi    r0, 1
bne      lbl_803F496C
lfs      f0, lbl_8051FF04@sda21(r2)
b        lbl_803F4970

lbl_803F496C:
lfs      f0, lbl_8051FF1C@sda21(r2)

lbl_803F4970:
fadds    f30, f30, f0
fmr      f1, f30
bl       pikmin2_sinf__Ff
stfs     f1, 0xac(r31)
fmr      f1, f30
bl       pikmin2_cosf__Ff
fneg     f0, f1
lis      r3, __float_epsilon@ha
lfs      f1, lbl_8051FF20@sda21(r2)
stfs     f0, 0xb0(r31)
lfs      f0, 0xac(r31)
lfs      f2, 0xb0(r31)
fmuls    f3, f0, f0
lfs      f0, __float_epsilon@l(r3)
fmuls    f2, f2, f2
fmuls    f0, f1, f0
fadds    f4, f3, f2
fcmpo    cr0, f4, f0
cror     2, 0, 2
beq      lbl_803F4A0C
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f4, f0
cror     2, 0, 2
bne      lbl_803F49D4
b        lbl_803F49F4

lbl_803F49D4:
frsqrte  f3, f4
lfs      f2, lbl_8051FF14@sda21(r2)
lfs      f0, lbl_8051FF24@sda21(r2)
frsp     f3, f3
fmuls    f1, f3, f3
fmuls    f2, f2, f3
fnmsubs  f0, f4, f1, f0
fmuls    f4, f2, f0

lbl_803F49F4:
lfs      f0, 0xac(r31)
fmuls    f0, f0, f4
stfs     f0, 0xac(r31)
lfs      f0, 0xb0(r31)
fmuls    f0, f0, f4
stfs     f0, 0xb0(r31)

lbl_803F4A0C:
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lfsu     f0, msVal__Q32kh6Screen8WorldMap@l(r3)
lfs      f2, 0xac(r31)
lfs      f1, 0x9c(r31)
fmuls    f3, f2, f0
lfs      f5, 4(r3)
lfs      f2, lbl_8051FEF8@sda21(r2)
lfs      f4, lbl_8051FEF4@sda21(r2)
fmadds   f1, f5, f3, f1
lfs      f0, lbl_8051FF2C@sda21(r2)
stfs     f1, 0x9c(r31)
lfs      f3, 0xb0(r31)
lfs      f1, 0(r3)
lfs      f5, 4(r3)
fmuls    f3, f3, f1
lfs      f1, 0xa0(r31)
fmadds   f1, f5, f3, f1
stfs     f1, 0xa0(r31)
lfs      f1, 0xb0(r31)
lfs      f3, 0xac(r31)
fmuls    f1, f2, f1
fmadds   f1, f4, f3, f1
fcmpo    cr0, f1, f0
ble      lbl_803F4D6C
lwz      r3, 0x17c(r31)
clrlwi.  r0, r3, 0x1f
bne      lbl_803F4A88
lwz      r0, 0x17c(r31)
ori      r0, r0, 3
stw      r0, 0x17c(r31)
b        lbl_803F4D78

lbl_803F4A88:
rlwinm.  r0, r3, 0, 0x1e, 0x1e
bne      lbl_803F4D78
li       r0, 1
mr       r3, r31
stw      r0, 0x174(r31)
bl       newMapOpen__Q32kh6Screen8WorldMapFv
lwz      r0, 0x17c(r31)
rlwinm   r0, r0, 0, 0, 0x1d
stw      r0, 0x17c(r31)
lbz      r0, 0x2c(r31)
cmplwi   r0, 0
beq      lbl_803F4BD4
lwz      r3, 0x54(r31)
lis      r5, 0x65775F6C@ha
lis      r4, 0x00545F6E@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x65775F6C@l
addi     r5, r4, 0x00545F6E@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r4, 0x6C77696E@ha
stb      r0, 0xb0(r3)
mr       r25, r3
addi     r6, r4, 0x6C77696E@l
li       r5, 0x4e
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lbz      r0, 0x2e(r31)
cmplwi   r0, 0
bne      lbl_803F4BD4
mr       r3, r25
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lis      r4, msVal__Q32kh6Screen8WorldMap@ha
mr       r3, r25
addi     r4, r4, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x54(r4)
fadds    f30, f0, f1
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
li       r7, 0
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
stfs     f30, 0x34(r1)
lfs      f0, 0x50(r3)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lwz      r3, 0x34(r1)
fadds    f0, f0, f1
lis      r6, __vt__Q25efx2d5TBase@ha
stw      r3, 0x3c(r1)
lis      r4, __vt__Q25efx2d8TSimple1@ha
lis      r5, __vt__Q25efx2d3Arg@ha
lis      r3, __vt__Q25efx2d14T2DChangesmoke@ha
stfs     f0, 0x30(r1)
addi     r9, r5, __vt__Q25efx2d3Arg@l
lfs      f0, 0x3c(r1)
li       r5, 7
lwz      r10, 0x30(r1)
addi     r8, r6, __vt__Q25efx2d5TBase@l
stw      r0, 0x7c(r1)
addi     r6, r4, __vt__Q25efx2d8TSimple1@l
addi     r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
addi     r3, r1, 0x7c
stw      r10, 0x38(r1)
addi     r4, r1, 0x8c
stw      r8, 0x7c(r1)
lfs      f1, 0x38(r1)
stw      r6, 0x7c(r1)
stw      r9, 0x94(r1)
stfs     f1, 0x8c(r1)
stfs     f0, 0x90(r1)
stb      r7, 0x80(r1)
stb      r7, 0x81(r1)
sth      r5, 0x84(r1)
stw      r7, 0x88(r1)
stw      r0, 0x7c(r1)
bl       create__Q25efx2d8TSimple1FPQ25efx2d3Arg

lbl_803F4BD4:
lbz      r0, 0x2d(r31)
cmplwi   r0, 0
beq      lbl_803F4CFC
lwz      r3, 0x54(r31)
lis      r5, 0x65775F72@ha
lis      r4, 0x00545F6E@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x65775F72@l
addi     r5, r4, 0x00545F6E@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r4, 0x7277696E@ha
stb      r0, 0xb0(r3)
mr       r25, r3
addi     r6, r4, 0x7277696E@l
li       r5, 0x4e
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lbz      r0, 0x2e(r31)
cmplwi   r0, 0
bne      lbl_803F4CFC
mr       r3, r25
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lis      r4, msVal__Q32kh6Screen8WorldMap@ha
mr       r3, r25
addi     r4, r4, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x5c(r4)
fadds    f30, f0, f1
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
li       r7, 0
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
stfs     f30, 0x24(r1)
lfs      f0, 0x58(r3)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lwz      r3, 0x24(r1)
fadds    f0, f0, f1
lis      r6, __vt__Q25efx2d5TBase@ha
stw      r3, 0x2c(r1)
lis      r4, __vt__Q25efx2d8TSimple1@ha
lis      r5, __vt__Q25efx2d3Arg@ha
lis      r3, __vt__Q25efx2d14T2DChangesmoke@ha
stfs     f0, 0x20(r1)
addi     r9, r5, __vt__Q25efx2d3Arg@l
lfs      f0, 0x2c(r1)
li       r5, 7
lwz      r10, 0x20(r1)
addi     r8, r6, __vt__Q25efx2d5TBase@l
stw      r0, 0x60(r1)
addi     r6, r4, __vt__Q25efx2d8TSimple1@l
addi     r0, r3, __vt__Q25efx2d14T2DChangesmoke@l
addi     r3, r1, 0x60
stw      r10, 0x28(r1)
addi     r4, r1, 0x70
stw      r8, 0x60(r1)
lfs      f1, 0x28(r1)
stw      r6, 0x60(r1)
stw      r9, 0x78(r1)
stfs     f1, 0x70(r1)
stfs     f0, 0x74(r1)
stb      r7, 0x64(r1)
stb      r7, 0x65(r1)
sth      r5, 0x68(r1)
stw      r7, 0x6c(r1)
stw      r0, 0x60(r1)
bl       create__Q25efx2d8TSimple1FPQ25efx2d3Arg

lbl_803F4CFC:
lbz      r0, 0x2c(r31)
cmplwi   r0, 0
bne      lbl_803F4D14
lbz      r0, 0x2d(r31)
cmplwi   r0, 0
beq      lbl_803F4D78

lbl_803F4D14:
lwz      r4, 0x16c(r31)
li       r0, 0
lwz      r5, 0x1c(r4)
lbz      r3, 0(r5)
stb      r3, 0x20(r4)
lbz      r3, 1(r5)
stb      r3, 0x21(r4)
lbz      r3, 2(r5)
stb      r3, 0x22(r4)
lbz      r3, 3(r5)
stb      r3, 0x23(r4)
stw      r0, 0x30(r4)
lbz      r0, 0x2e(r31)
cmplwi   r0, 0
bne      lbl_803F4D78
lwz      r3, 0x64(r31)
bl       up__Q32og6Screen8ScaleMgrFv
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x187f
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803F4D78

lbl_803F4D6C:
lwz      r0, 0x17c(r31)
rlwinm   r0, r0, 0, 0x1f, 0x1d
stw      r0, 0x17c(r31)

lbl_803F4D78:
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F4D90

lbl_803F4D90:
lfs      f1, lbl_8051FF10@sda21(r2)
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f1, 0xd4(r27)
stfs     f0, 0xd8(r27)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f31, lbl_8051FF10@sda21(r2)
li       r25, 0
lfs      f30, lbl_8051FEF4@sda21(r2)
li       r26, 0
b        lbl_803F4DEC

lbl_803F4DC4:
lwz      r3, 0xf0(r31)
lwzx     r3, r3, r26
stfs     f31, 0xd4(r3)
stfs     f30, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
addi     r26, r26, 0x34
addi     r25, r25, 1

lbl_803F4DEC:
lwz      r0, 0xf4(r31)
cmpw     r25, r0
blt      lbl_803F4DC4
lwz      r3, 0xfc(r31)
addi     r0, r3, 1
cmpwi    r0, 5
stw      r0, 0xfc(r31)
ble      lbl_803F5160
lwz      r0, 0x28(r31)
stw      r0, 0xf8(r31)
lwz      r0, 0xf8(r31)
cmpwi    r0, 0
bge      lbl_803F4E28
li       r0, 0
stw      r0, 0xf8(r31)

lbl_803F4E28:
lwz      r3, 0x30(r31)
addi     r0, r1, 0xe0
lwz      r4, 0xf8(r31)
lwz      r12, 0(r3)
slwi     r4, r4, 3
lwz      r12, 0x3c(r12)
add      r6, r0, r4
lwz      r5, 0(r6)
lwz      r6, 4(r6)
mtctr    r12
bctrl
mr       r26, r3
lwz      r3, 0x30(r31)
lwz      r4, 0xf8(r31)
addi     r0, r1, 0x100
lwz      r12, 0(r3)
slwi     r4, r4, 3
lwz      r12, 0x3c(r12)
add      r6, r0, r4
lwz      r5, 0(r6)
lwz      r6, 4(r6)
mtctr    r12
bctrl
lwz      r4, 0x154(r31)
li       r0, 1
mr       r3, r26
stb      r0, 0x34(r4)
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
fmr      f30, f1
mr       r3, r26
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
stfs     f1, 0x9c(r31)
mr       r3, r27
lfs      f0, lbl_8051FF30@sda21(r2)
stfs     f30, 0xa0(r31)
stfs     f0, 0xbc(r31)
lfs      f1, 0xa0(r31)
lfs      f0, 0x9c(r31)
stfs     f0, 0xd4(r27)
stfs     f1, 0xd8(r27)
lwz      r12, 0(r27)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f1, 0xac(r31)
lis      r3, atanTable___5JMath@ha
lfs      f0, 0xb0(r31)
addi     r3, r3, atanTable___5JMath@l
fneg     f1, f1
fneg     f2, f0
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
lfs      f0, lbl_8051FF34@sda21(r2)
mr       r3, r27
fmuls    f0, f1, f0
stfs     f0, 0xc0(r27)
lwz      r12, 0(r27)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f0, 0xbc(r31)
mr       r3, r27
stfs     f0, 0xcc(r27)
stfs     f0, 0xd0(r27)
lwz      r12, 0(r27)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lis      r3, atanTable___5JMath@ha
lfs      f30, lbl_8051FF34@sda21(r2)
addi     r26, r3, atanTable___5JMath@l
li       r25, 0
li       r27, 0
b        lbl_803F5010

lbl_803F4F4C:
lwz      r0, 0xf0(r31)
addi     r3, r27, 4
lfs      f0, 0x9c(r31)
addi     r4, r27, 0x14
add      r3, r0, r3
stfs     f0, 0(r3)
lfs      f0, 0xa0(r31)
stfs     f0, 4(r3)
lwz      r0, 0xf0(r31)
lfs      f0, 0xac(r31)
add      r4, r0, r4
stfs     f0, 0(r4)
lfs      f0, 0xb0(r31)
stfs     f0, 4(r4)
lwz      r3, 0xf0(r31)
lfs      f1, 0xa0(r31)
lwzx     r3, r3, r27
lfs      f0, 0x9c(r31)
stfs     f0, 0xd4(r3)
stfs     f1, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f1, 0xac(r31)
mr       r3, r26
lfs      f0, 0xb0(r31)
fneg     f1, f1
fneg     f2, f0
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
lwz      r3, 0xf0(r31)
fmuls    f0, f1, f30
lwzx     r3, r3, r27
stfs     f0, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0xf0(r31)
lfs      f0, 0xbc(r31)
lwzx     r3, r3, r27
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
addi     r27, r27, 0x34
addi     r25, r25, 1

lbl_803F5010:
lwz      r0, 0xf4(r31)
cmpw     r25, r0
blt      lbl_803F4F4C
li       r3, 0
li       r0, 0xa
stw      r3, 0xfc(r31)
stw      r0, 0x174(r31)
bl       PSMGetWorldMapRocket__Fv
li       r4, 1
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
b        lbl_803F5160
.global  lbl_803F503C

lbl_803F503C:
mr       r3, r31
mr       r4, r29
li       r5, 1
bl       rocketMove__Q32kh6Screen8WorldMapFP7J2DPaneb
fmr      f30, f1
mr       r3, r31
mr       r4, r29
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0xc(r3)
fcmpo    cr0, f30, f0
bge      lbl_803F508C
li       r3, 0
li       r0, 2
stw      r3, 0xfc(r31)
stw      r0, 0x174(r31)
bl       PSMGetWorldMapRocket__Fv
li       r4, 5
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState

lbl_803F508C:
mr       r3, r31
bl       onyonMove__Q32kh6Screen8WorldMapFv
b        lbl_803F5160
.global  lbl_803F5098

lbl_803F5098:
lfs      f1, lbl_8051FF10@sda21(r2)
lfs      f0, lbl_8051FEF4@sda21(r2)
stfs     f1, 0xd4(r27)
stfs     f0, 0xd8(r27)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f30, lbl_8051FF10@sda21(r2)
li       r25, 0
lfs      f31, lbl_8051FEF4@sda21(r2)
li       r26, 0
b        lbl_803F50F4

lbl_803F50CC:
lwz      r3, 0xf0(r31)
lwzx     r3, r3, r26
stfs     f30, 0xd4(r3)
stfs     f31, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
addi     r26, r26, 0x34
addi     r25, r25, 1

lbl_803F50F4:
lwz      r0, 0xf4(r31)
cmpw     r25, r0
blt      lbl_803F50CC
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lfs      f3, 0x98(r31)
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f2, lbl_8051FEF0@sda21(r2)
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FF38@sda21(r2)
fadds    f1, f3, f1
stfs     f1, 0x98(r31)
lfs      f4, 0x98(r31)
lfs      f3, 0x90(r31)
fmuls    f1, f4, f4
fmuls    f1, f4, f1
fmuls    f1, f4, f1
fsubs    f1, f2, f1
fmuls    f1, f3, f1
stfs     f1, 0x68(r31)
lfs      f2, 0x90(r31)
lfs      f1, 0x68(r31)
fsubs    f1, f2, f1
fcmpo    cr0, f1, f0
bge      lbl_803F5160
stfs     f2, 0x68(r31)
li       r0, 0xb
stw      r0, 0x174(r31)

lbl_803F5160:
lwz      r0, 0x17c(r31)
rlwinm.  r0, r0, 0, 0x1b, 0x1b
bne      lbl_803F51A4
lbz      r5, 0x183(r31)
cmplwi   r5, 0
beq      lbl_803F51A4
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r4, r3, msVal__Q32kh6Screen8WorldMap@l
lbz      r0, 0x79(r4)
subf     r0, r0, r5
stb      r0, 0x183(r31)
lbz      r3, 0x183(r31)
lbz      r0, 0x79(r4)
cmplw    r3, r0
bge      lbl_803F51A4
li       r0, 0
stb      r0, 0x183(r31)

lbl_803F51A4:
lwz      r0, 0x174(r31)
cmpwi    r0, 0xd
beq      lbl_803F5260
cmpwi    r0, 0xb
beq      lbl_803F5260
cmpwi    r0, 0
beq      lbl_803F5260
li       r25, 0
b        lbl_803F5254

lbl_803F51C8:
lwz      r0, 0xf8(r31)
cmpw     r0, r25
bne      lbl_803F5214
lis      r4, 0x67687430@ha
lis      r3, 0x00506C69@ha
mr       r5, r25
addi     r4, r4, 0x67687430@l
addi     r3, r3, 0x00506C69@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
b        lbl_803F5250

lbl_803F5214:
lis      r4, 0x67687430@ha
lis      r3, 0x00506C69@ha
mr       r5, r25
addi     r4, r4, 0x67687430@l
addi     r3, r3, 0x00506C69@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x30(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F5250:
addi     r25, r25, 1

lbl_803F5254:
lbz      r0, 0x181(r31)
cmpw     r25, r0
blt      lbl_803F51C8

lbl_803F5260:
lwz      r0, 0x174(r31)
cmpwi    r0, 0xd
beq      lbl_803F5284
cmpwi    r0, 0xb
beq      lbl_803F5284
bl       PSMGetWorldMapRocket__Fv
lfs      f1, 0x9c(r31)
lfs      f2, 0xa0(r31)
bl       startRocketSE__Q23PSM14WorldMapRocketFff

lbl_803F5284:
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r3, 0x16c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x64(r31)
bl       calc__Q32og6Screen8ScaleMgrFv
li       r25, 0
addi     r26, r1, 0x50

lbl_803F52BC:
lwz      r3, 0x54(r31)
lfd      f1, 0x3b0(r30)
lfd      f0, 0x3b8(r30)
lwz      r12, 0(r3)
stfd     f1, 0x50(r1)
lwz      r12, 0x3c(r12)
stfd     f0, 0x58(r1)
lwz      r5, 0(r26)
lwz      r6, 4(r26)
mtctr    r12
bctrl
lwz      r4, 0x16c(r31)
mr       r27, r3
lwz      r12, 0(r3)
lwz      r0, 0x20(r4)
lwz      r12, 0x24(r12)
stw      r0, 0xc(r1)
lbz      r4, 0xf(r1)
mtctr    r12
bctrl
li       r0, 0
mr       r3, r27
stb      r0, 0xf(r1)
addi     r4, r1, 8
lwz      r0, 0xc(r1)
stw      r0, 8(r1)
lwz      r12, 0(r27)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
addi     r25, r25, 1
addi     r26, r26, 8
cmpwi    r25, 2
blt      lbl_803F52BC
lwz      r3, 0x170(r31)
bl       calc__Q32og6Screen15ArrowAlphaBlinkFv
lfs      f0, lbl_8051FF3C@sda21(r2)
lis      r4, 0x6C62746E@ha
lwz      r3, 0x54(r31)
addi     r6, r4, 0x6C62746E@l
fmuls    f0, f0, f1
li       r5, 0x4e
lwz      r12, 0(r3)
fctiwz   f0, f0
lwz      r12, 0x3c(r12)
stfd     f0, 0x120(r1)
lwz      r25, 0x124(r1)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r4, r25
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x54(r31)
lis      r4, 0x7262746E@ha
addi     r6, r4, 0x7262746E@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r4, r25
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
bl       update__Q26Screen9Game2DMgrFv
psq_l    f31, 360(r1), 0, qr0
lfd      f31, 0x160(r1)
psq_l    f30, 344(r1), 0, qr0
lfd      f30, 0x150(r1)
lmw      r25, 0x134(r1)
lwz      r0, 0x174(r1)
mtlr     r0
addi     r1, r1, 0x170
blr
	*/
}

/*
 * --INFO--
 * Address:	803F53F4
 * Size:	000198
 */
void WorldMap::draw1st(Graphics&)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
mr       r30, r3
addi     r3, r31, 0x190
lwz      r12, 0x190(r4)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
li       r3, 0
bl       GXSetClipMode
lwz      r3, 0x30(r30)
lis      r5, 0x616E6433@ha
lis      r4, 0x004E6772@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x616E6433@l
addi     r5, r4, 0x004E6772@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x616E6432@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E6772@ha
addi     r6, r5, 0x616E6432@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x004E6772@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x6E643030@ha
stb      r0, 0xb0(r3)
lis      r4, 0x4E677261@ha
addi     r6, r5, 0x6E643030@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x4E677261@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x616E6430@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E6772@ha
addi     r6, r5, 0x616E6430@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x004E6772@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r5, 0x616E6431@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E6772@ha
addi     r6, r5, 0x616E6431@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x004E6772@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r4, 0x6F696E74@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x6F696E74@l
li       r5, 0x4e70
lwz      r3, 0x30(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
lis      r4, 0x68617061@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x68617061@l
li       r5, 0x4e
lwz      r3, 0x30(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
mr       r4, r31
stb      r0, 0xb0(r3)
addi     r5, r31, 0x190
lwz      r3, 0x30(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F558C
 * Size:	000064
 */
void WorldMap::draw2nd(Graphics&)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
mr       r30, r3
addi     r3, r31, 0x190
lwz      r12, 0x190(r4)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x48(r30)
mr       r4, r31
addi     r5, r31, 0x190
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F55F0
 * Size:	0002A0
 */
void WorldMap::draw3rd(Graphics&)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
mr       r31, r4
stw      r30, 0x48(r1)
mr       r30, r3
addi     r3, r31, 0x190
stw      r29, 0x44(r1)
lwz      r12, 0x190(r4)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
li       r3, 0
bl       GXSetClipMode
lwz      r3, 0x30(r30)
lis      r5, 0x616E6433@ha
lis      r4, 0x004E6772@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x616E6433@l
addi     r5, r4, 0x004E6772@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x616E6432@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E6772@ha
addi     r6, r5, 0x616E6432@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x004E6772@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x6E643030@ha
stb      r0, 0xb0(r3)
lis      r4, 0x4E677261@ha
addi     r6, r5, 0x6E643030@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x4E677261@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x616E6430@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E6772@ha
addi     r6, r5, 0x616E6430@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x004E6772@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r5, 0x616E6431@ha
stb      r0, 0xb0(r3)
lis      r4, 0x004E6772@ha
addi     r6, r5, 0x616E6431@l
lwz      r3, 0x30(r30)
addi     r5, r4, 0x004E6772@l
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x6F696E74@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x6F696E74@l
li       r5, 0x4e70
lwz      r3, 0x30(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x68617061@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x68617061@l
li       r5, 0x4e
lwz      r3, 0x30(r30)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
mr       r4, r31
stb      r0, 0xb0(r3)
addi     r5, r31, 0x190
lwz      r3, 0x30(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x17c(r30)
rlwinm.  r0, r0, 0, 0x1a, 0x1a
beq      lbl_803F5844
lbz      r0, 0x183(r30)
cmplwi   r0, 0
beq      lbl_803F5844
addi     r3, r31, 0xbc
lwz      r12, 0xbc(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lbz      r0, 0x183(r30)
li       r8, 0
stb      r8, 0x18(r1)
addi     r3, r31, 0xbc
addi     r4, r1, 8
addi     r5, r1, 0xc
stb      r8, 0x19(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stb      r8, 0x1a(r1)
stb      r0, 0x1b(r1)
lwz      r0, 0x18(r1)
stw      r0, 0x14(r1)
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r29, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_8051FEF4@sda21(r2)
addi     r3, r31, 0xbc
stw      r4, 0x34(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_8051FF48@sda21(r2)
stw      r0, 0x30(r1)
lfd      f0, 0x30(r1)
stw      r29, 0x3c(r1)
fsubs    f1, f0, f2
stw      r0, 0x38(r1)
lfd      f0, 0x38(r1)
fadds    f1, f3, f1
stfs     f3, 0x1c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x20(r1)
fadds    f0, f3, f0
stfs     f1, 0x24(r1)
stfs     f0, 0x28(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803F5844:
addi     r3, r31, 0x190
lwz      r12, 0x190(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x54(r30)
mr       r4, r31
addi     r5, r31, 0x190
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803F5890
 * Size:	000110
 */
void WorldMap::draw4th(Graphics&)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
mr       r31, r3
stw      r30, 0x48(r1)
mr       r30, r4
lwz      r0, 0x17c(r3)
rlwinm.  r0, r0, 0, 0x1a, 0x1a
bne      lbl_803F597C
lbz      r0, 0x183(r31)
cmplwi   r0, 0
beq      lbl_803F597C
addi     r3, r30, 0xbc
lwz      r12, 0xbc(r30)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lbz      r0, 0x183(r31)
li       r8, 0
stb      r8, 0x18(r1)
addi     r3, r30, 0xbc
addi     r4, r1, 8
addi     r5, r1, 0xc
stb      r8, 0x19(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stb      r8, 0x1a(r1)
stb      r0, 0x1b(r1)
lwz      r0, 0x18(r1)
stw      r0, 0x14(r1)
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r31, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_8051FEF4@sda21(r2)
addi     r3, r30, 0xbc
stw      r4, 0x34(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_8051FF48@sda21(r2)
stw      r0, 0x30(r1)
lfd      f0, 0x30(r1)
stw      r31, 0x3c(r1)
fsubs    f1, f0, f2
stw      r0, 0x38(r1)
lfd      f0, 0x38(r1)
fadds    f1, f3, f1
stfs     f3, 0x1c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x20(r1)
fadds    f0, f3, f0
stfs     f1, 0x24(r1)
stfs     f0, 0x28(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803F597C:
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
mr       r4, r30
bl       draw__Q26Screen9Game2DMgrFR8Graphics
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803F59A0
 * Size:	000330
 */
void WorldMap::rocketMove(J2DPane*, bool)
{
	/*
stwu     r1, -0x70(r1)
mflr     r0
stw      r0, 0x74(r1)
stfd     f31, 0x60(r1)
psq_st   f31, 104(r1), 0, qr0
stfd     f30, 0x50(r1)
psq_st   f30, 88(r1), 0, qr0
stfd     f29, 0x40(r1)
psq_st   f29, 72(r1), 0, qr0
stfd     f28, 0x30(r1)
psq_st   f28, 56(r1), 0, qr0
stfd     f27, 0x20(r1)
psq_st   f27, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r31, r3
mr       r29, r4
lwz      r4, 0xfc(r3)
mr       r30, r5
mr       r3, r29
addi     r0, r4, 1
stw      r0, 0xfc(r31)
lfs      f0, 0xac(r31)
stfs     f0, 8(r1)
lfs      f0, 0xb0(r31)
stfs     f0, 0xc(r1)
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lfs      f0, 0xa0(r31)
mr       r3, r29
fsubs    f30, f1, f0
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lwz      r5, 0xfc(r31)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r4, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x9c(r31)
addi     r3, r5, -86
li       r0, 5
divwu    r3, r3, r0
fsubs    f31, f1, f0
fmuls    f0, f30, f30
cmpwi    r5, 0x5a
lfs      f28, 8(r4)
lfs      f27, 0x4c(r4)
fmadds   f4, f31, f31, f0
lfs      f0, lbl_8051FF50@sda21(r2)
fmr      f29, f4
ble      lbl_803F5AA4
rlwinm.  r0, r3, 0x1d, 3, 0x1f
mtctr    r0
beq      lbl_803F5A98

lbl_803F5A6C:
fmuls    f28, f28, f0
fmuls    f28, f28, f0
fmuls    f28, f28, f0
fmuls    f28, f28, f0
fmuls    f28, f28, f0
fmuls    f28, f28, f0
fmuls    f28, f28, f0
fmuls    f28, f28, f0
bdnz     lbl_803F5A6C
andi.    r3, r3, 7
beq      lbl_803F5AA4

lbl_803F5A98:
mtctr    r3

lbl_803F5A9C:
fmuls    f28, f28, f0
bdnz     lbl_803F5A9C

lbl_803F5AA4:
lis      r3, __float_epsilon@ha
lfs      f1, lbl_8051FF20@sda21(r2)
lfs      f0, __float_epsilon@l(r3)
fmuls    f0, f1, f0
fcmpo    cr0, f4, f0
cror     2, 0, 2
beq      lbl_803F5AFC
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f4, f0
cror     2, 0, 2
bne      lbl_803F5AD4
b        lbl_803F5AF4

lbl_803F5AD4:
frsqrte  f3, f4
lfs      f2, lbl_8051FF14@sda21(r2)
lfs      f0, lbl_8051FF24@sda21(r2)
frsp     f3, f3
fmuls    f1, f3, f3
fmuls    f2, f2, f3
fnmsubs  f0, f4, f1, f0
fmuls    f4, f2, f0

lbl_803F5AF4:
fmuls    f31, f31, f4
fmuls    f30, f30, f4

lbl_803F5AFC:
lfs      f0, 0xb0(r31)
lfs      f1, 0xac(r31)
fneg     f2, f0
bl       pikmin2_atan2f__Fff
fmr      f0, f1
fmr      f1, f31
fneg     f2, f30
fmr      f30, f0
bl       pikmin2_atan2f__Fff
fmr      f3, f1
lfs      f0, 0xb8(r31)
lfs      f1, 0xb4(r31)
fneg     f2, f0
fmr      f31, f3
bl       pikmin2_atan2f__Fff
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f30, f0
bge      lbl_803F5B4C
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f30, f30, f0

lbl_803F5B4C:
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f31, f0
bge      lbl_803F5B60
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f31, f31, f0

lbl_803F5B60:
fcmpo    cr0, f30, f31
bge      lbl_803F5B84
fsubs    f2, f31, f30
lfs      f0, lbl_8051FF54@sda21(r2)
fcmpo    cr0, f2, f0
ble      lbl_803F5B9C
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f30, f30, f0
b        lbl_803F5B9C

lbl_803F5B84:
fsubs    f2, f30, f31
lfs      f0, lbl_8051FF54@sda21(r2)
fcmpo    cr0, f2, f0
ble      lbl_803F5B9C
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f31, f31, f0

lbl_803F5B9C:
lfs      f0, lbl_8051FEF0@sda21(r2)
fsubs    f0, f0, f28
fmuls    f0, f31, f0
fmadds   f0, f30, f28, f0
fmadds   f31, f1, f27, f0
fsubs    f28, f31, f30
fmr      f1, f28
bl       pikmin2_cosf__Ff
fneg     f27, f1
fmr      f1, f28
bl       pikmin2_sinf__Ff
lfs      f0, lbl_8051FF1C@sda21(r2)
stfs     f1, 0xb4(r31)
fcmpo    cr0, f28, f0
stfs     f27, 0xb8(r31)
bge      lbl_803F5BE8
lfs      f0, lbl_8051FF04@sda21(r2)
fsubs    f31, f30, f0
b        lbl_803F5BF8

lbl_803F5BE8:
lfs      f0, lbl_8051FF04@sda21(r2)
fcmpo    cr0, f28, f0
ble      lbl_803F5BF8
fadds    f31, f0, f30

lbl_803F5BF8:
fmr      f1, f31
bl       pikmin2_cosf__Ff
fneg     f27, f1
fmr      f1, f31
bl       pikmin2_sinf__Ff
stfs     f1, 0xac(r31)
mr       r3, r31
lfs      f1, lbl_8051FF58@sda21(r2)
addi     r4, r1, 8
stfs     f27, 0xb0(r31)
bl       "getRotDir__Q32kh6Screen8WorldMapFRCQ29JGeometry8TVec2<f>f"
clrlwi.  r0, r30, 0x18
fmr      f4, f29
bne      lbl_803F5C3C
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lfs      f4, msVal__Q32kh6Screen8WorldMap@l(r3)
b        lbl_803F5C50

lbl_803F5C3C:
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lfs      f0, msVal__Q32kh6Screen8WorldMap@l(r3)
fcmpo    cr0, f29, f0
ble      lbl_803F5C50
fmr      f4, f0

lbl_803F5C50:
lfs      f1, 0xac(r31)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f0, 0x9c(r31)
fmuls    f2, f1, f4
lfs      f3, 4(r3)
fmr      f1, f29
fmadds   f0, f3, f2, f0
stfs     f0, 0x9c(r31)
lfs      f0, 0xb0(r31)
lfs      f3, 4(r3)
fmuls    f2, f0, f4
lfs      f0, 0xa0(r31)
fmadds   f0, f3, f2, f0
stfs     f0, 0xa0(r31)
psq_l    f31, 104(r1), 0, qr0
lfd      f31, 0x60(r1)
psq_l    f30, 88(r1), 0, qr0
lfd      f30, 0x50(r1)
psq_l    f29, 72(r1), 0, qr0
lfd      f29, 0x40(r1)
psq_l    f28, 56(r1), 0, qr0
lfd      f28, 0x30(r1)
psq_l    f27, 40(r1), 0, qr0
lfd      f27, 0x20(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r0, 0x74(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	803F5CD0
 * Size:	000404
 */
void WorldMap::rocketUpdate(J2DPane*)
{
	/*
stwu     r1, -0x100(r1)
mflr     r0
stw      r0, 0x104(r1)
stfd     f31, 0xf0(r1)
psq_st   f31, 248(r1), 0, qr0
stfd     f30, 0xe0(r1)
psq_st   f30, 232(r1), 0, qr0
stfd     f29, 0xd0(r1)
psq_st   f29, 216(r1), 0, qr0
stw      r31, 0xcc(r1)
stw      r30, 0xc8(r1)
stw      r29, 0xc4(r1)
mr       r31, r3
lis      r6, 0x434B4554@ha
lwz      r3, 0x48(r3)
lis      r5, 0x004E524F@ha
mr       r29, r4
addi     r6, r6, 0x434B4554@l
lwz      r12, 0(r3)
addi     r5, r5, 0x004E524F@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f1, 0xa0(r31)
mr       r30, r3
lfs      f0, 0x9c(r31)
stfs     f0, 0xd4(r3)
stfs     f1, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f1, 0xac(r31)
lis      r3, atanTable___5JMath@ha
lfs      f0, 0xb0(r31)
addi     r3, r3, atanTable___5JMath@l
fneg     f1, f1
fneg     f2, f0
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
lfs      f0, lbl_8051FF34@sda21(r2)
mr       r3, r30
fmuls    f0, f1, f0
stfs     f0, 0xc0(r30)
lwz      r12, 0(r30)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lwz      r5, 0x18(r29)
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lwz      r6, 0x1c(r29)
lfs      f29, 8(r3)
mr       r3, r31
bl       tag2num__Q32kh6Screen8WorldMapFUx
lfs      f2, lbl_8051FEF0@sda21(r2)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lfs      f0, 0xbc(r31)
addi     r4, r3, msVal__Q32kh6Screen8WorldMap@l
fsubs    f2, f2, f29
mr       r3, r30
fmuls    f1, f2, f1
fmadds   f0, f0, f29, f1
stfs     f0, 0xbc(r31)
lbz      r0, 0x181(r31)
lfs      f0, 0xbc(r31)
slwi     r0, r0, 2
add      r4, r4, r0
lfs      f1, 0x1c(r4)
fmuls    f29, f1, f0
stfs     f29, 0xcc(r30)
stfs     f29, 0xd0(r30)
lwz      r12, 0(r30)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x48(r31)
lis      r5, 0x636B6574@ha
lis      r4, 0x0050726F@ha
lfs      f31, 0x9c(r31)
lwz      r12, 0(r3)
addi     r6, r5, 0x636B6574@l
lfs      f1, 0xa4(r31)
addi     r5, r4, 0x0050726F@l
lfs      f30, 0xa0(r31)
lfs      f0, 0xa8(r31)
fsubs    f31, f31, f1
lwz      r12, 0x3c(r12)
fsubs    f30, f30, f0
mtctr    r12
bctrl
mr       r30, r3
addi     r3, r1, 0x3c
mr       r4, r30
li       r5, 0
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x3c(r1)
mr       r4, r30
lwz      r6, 0x40(r1)
addi     r3, r1, 0x30
lwz      r0, 0x44(r1)
stw      r5, 0x94(r1)
li       r5, 1
stw      r6, 0x98(r1)
stw      r0, 0x9c(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x30(r1)
mr       r4, r30
lwz      r6, 0x34(r1)
addi     r3, r1, 0x24
lwz      r0, 0x38(r1)
stw      r5, 0x88(r1)
li       r5, 2
stw      r6, 0x8c(r1)
stw      r0, 0x90(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x24(r1)
mr       r4, r30
lwz      r6, 0x28(r1)
addi     r3, r1, 0x18
lwz      r0, 0x2c(r1)
stw      r5, 0x7c(r1)
li       r5, 3
stw      r6, 0x80(r1)
stw      r0, 0x84(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x18(r1)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lwz      r0, 0x1c(r1)
addi     r6, r3, msVal__Q32kh6Screen8WorldMap@l
stw      r4, 0x70(r1)
lis      r3, lbl_80498030@ha
addi     r9, r3, lbl_80498030@l
lis      r3, lbl_8049803C@ha
stw      r0, 0x74(r1)
addi     r7, r3, lbl_8049803C@l
lfs      f3, 0x70(r1)
lis      r5, __vt__Q25efx2d3Arg@ha
lfs      f2, 0x7c(r1)
lis      r4, __vt__Q35efx2d8WorldMap11ArgDirScale@ha
lfs      f1, 0x74(r1)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
lfs      f0, 0x80(r1)
fadds    f2, f3, f2
lfs      f6, lbl_8051FF14@sda21(r2)
addi     r5, r5, __vt__Q25efx2d3Arg@l
fadds    f1, f1, f0
lfs      f3, 0x94(r1)
lfs      f0, 0x88(r1)
fmuls    f5, f6, f2
lfs      f8, 0x1c(r6)
fadds    f3, f3, f0
lfs      f0, lbl_8051FEF0@sda21(r2)
fmuls    f4, f6, f1
lfs      f2, 0x98(r1)
lfs      f1, 0x8c(r1)
fmuls    f7, f6, f3
fsubs    f3, f0, f8
lwz      r12, 0x20(r1)
fadds    f0, f2, f1
lwz      r0, 0(r9)
fmuls    f1, f5, f8
lwz      r8, 4(r9)
lwz      r11, 8(r9)
fmuls    f6, f6, f0
fmuls    f0, f4, f8
lwz      r6, 0(r7)
fmadds   f1, f7, f3, f1
lwz      r10, 4(r7)
lwz      r9, 8(r7)
fmadds   f0, f6, f3, f0
fadds    f1, f31, f1
stw      r0, 0x64(r1)
addi     r4, r4, __vt__Q35efx2d8WorldMap11ArgDirScale@l
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
fadds    f0, f30, f0
stfs     f1, 0xd0(r31)
stfs     f0, 0xd4(r31)
lfs      f0, 0xac(r31)
lfs      f1, 0xb0(r31)
fneg     f0, f0
stw      r8, 0x68(r1)
fneg     f1, f1
stw      r6, 0x58(r1)
stfs     f0, 0xd8(r31)
stfs     f1, 0xdc(r31)
lwz      r8, 0xd8(r31)
lwz      r7, 0xdc(r31)
lwz      r6, 0xd0(r31)
lwz      r3, 0xd4(r31)
stw      r8, 0x10(r1)
stw      r7, 0x14(r1)
lfs      f1, 0x10(r1)
stw      r6, 8(r1)
lfs      f0, 0x14(r1)
stw      r3, 0xc(r1)
lfs      f3, 8(r1)
stw      r10, 0x5c(r1)
lfs      f2, 0xc(r1)
stw      r5, 0xa8(r1)
stw      r12, 0x78(r1)
stw      r11, 0x6c(r1)
stfs     f7, 0x64(r1)
stfs     f6, 0x68(r1)
stw      r9, 0x60(r1)
stfs     f5, 0x58(r1)
stfs     f4, 0x5c(r1)
stfs     f3, 0xa0(r1)
stfs     f2, 0xa4(r1)
stw      r4, 0xa8(r1)
stfs     f1, 0xac(r1)
stfs     f0, 0xb0(r1)
stfs     f29, 0xb4(r1)
stw      r0, 0x48(r1)
lis      r3, __vt__Q25efx2d5TBase@ha
li       r8, 0
addi     r0, r3, __vt__Q25efx2d5TBase@l
lis      r3, __vt__Q25efx2d8TSimple1@ha
stw      r0, 0x48(r1)
addi     r5, r3, __vt__Q25efx2d8TSimple1@l
lis      r4, __vt__Q35efx2d8WorldMap19TSimple_ArgDirScale@ha
li       r7, 1
stb      r8, 0x4c(r1)
lis      r3, __vt__Q35efx2d8WorldMap10T2DRocketA@ha
addi     r6, r4, __vt__Q35efx2d8WorldMap19TSimple_ArgDirScale@l
li       r0, 3
stw      r5, 0x48(r1)
addi     r5, r3, __vt__Q35efx2d8WorldMap10T2DRocketA@l
addi     r3, r1, 0x48
addi     r4, r1, 0xa0
stb      r8, 0x4d(r1)
stw      r6, 0x48(r1)
stb      r7, 0x4c(r1)
sth      r7, 0x50(r1)
stw      r8, 0x54(r1)
stw      r5, 0x48(r1)
stb      r7, 0x4c(r1)
stb      r0, 0x4d(r1)
bl       create__Q35efx2d8WorldMap19TSimple_ArgDirScaleFPQ25efx2d3Arg
fmr      f1, f29
lwz      r3, 0xc4(r31)
bl       setGlobalParticleScale__Q35efx2d8WorldMap10T2DRocketBFf
fmr      f1, f29
lwz      r3, 0xc0(r31)
bl       setGlobalParticleScale__Q35efx2d8WorldMap13T2DRocketGlowFf
psq_l    f31, 248(r1), 0, qr0
lfd      f31, 0xf0(r1)
psq_l    f30, 232(r1), 0, qr0
lfd      f30, 0xe0(r1)
psq_l    f29, 216(r1), 0, qr0
lfd      f29, 0xd0(r1)
lwz      r31, 0xcc(r1)
lwz      r30, 0xc8(r1)
lwz      r0, 0x104(r1)
lwz      r29, 0xc4(r1)
mtlr     r0
addi     r1, r1, 0x100
blr
	*/
}

/*
 * --INFO--
 * Address:	803F60D4
 * Size:	000090
 */
void WorldMap::onyonMove()
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
li       r31, 0
stw      r30, 0x28(r1)
li       r30, 0
stw      r29, 0x24(r1)
mr       r29, r3
lfs      f0, 0x9c(r3)
stfs     f0, 0x10(r1)
lfs      f0, 0xa0(r3)
stfs     f0, 0x14(r1)
b        lbl_803F613C

lbl_803F610C:
lwz      r0, 0xf0(r29)
mr       r5, r29
addi     r3, r1, 8
addi     r6, r1, 0x10
add      r4, r0, r31
bl
"move__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMapRCQ29JGeometry8TVec2<f>"
lfs      f1, 8(r1)
addi     r31, r31, 0x34
lfs      f0, 0xc(r1)
addi     r30, r30, 1
stfs     f1, 0x10(r1)
stfs     f0, 0x14(r1)

lbl_803F613C:
lwz      r0, 0xf4(r29)
cmpw     r30, r0
blt      lbl_803F610C
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
lwz      r30, 0x28(r1)
lwz      r29, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	803F6164
 * Size:	000068
 */
void WorldMap::onyonUpdate()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
li       r31, 0
stw      r30, 0x18(r1)
li       r30, 0
stw      r29, 0x14(r1)
mr       r29, r3
b        lbl_803F61A4

lbl_803F618C:
lwz      r0, 0xf0(r29)
mr       r4, r29
add      r3, r0, r31
bl       update__Q42kh6Screen8WorldMap13OnyonDynamicsFPQ32kh6Screen8WorldMap
addi     r31, r31, 0x34
addi     r30, r30, 1

lbl_803F61A4:
lwz      r0, 0xf4(r29)
cmpw     r30, r0
blt      lbl_803F618C
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803F61CC
 * Size:	0001F4
 */
void WorldMap::postureControl(J2DPane*)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stfd     f31, 0x40(r1)
psq_st   f31, 72(r1), 0, qr0
stfd     f30, 0x30(r1)
psq_st   f30, 56(r1), 0, qr0
stfd     f29, 0x20(r1)
psq_st   f29, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
mr       r30, r4
lfs      f0, 0xb0(r3)
lfs      f1, 0xac(r3)
fneg     f2, f0
bl       pikmin2_atan2f__Fff
fmr      f0, f1
lfs      f1, lbl_8051FEF4@sda21(r2)
lfs      f2, lbl_8051FEF0@sda21(r2)
fmr      f31, f0
bl       pikmin2_atan2f__Fff
fmr      f3, f1
lfs      f0, 0xb8(r29)
lfs      f1, 0xb4(r29)
fneg     f2, f0
fmr      f29, f3
bl       pikmin2_atan2f__Fff
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f31, f0
bge      lbl_803F6254
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f31, f31, f0

lbl_803F6254:
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f29, f0
bge      lbl_803F6268
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f29, f29, f0

lbl_803F6268:
fcmpo    cr0, f31, f29
bge      lbl_803F628C
fsubs    f2, f29, f31
lfs      f0, lbl_8051FF54@sda21(r2)
fcmpo    cr0, f2, f0
ble      lbl_803F62A4
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f31, f31, f0
b        lbl_803F62A4

lbl_803F628C:
fsubs    f2, f31, f29
lfs      f0, lbl_8051FF54@sda21(r2)
fcmpo    cr0, f2, f0
ble      lbl_803F62A4
lfs      f0, lbl_8051FF28@sda21(r2)
fadds    f29, f29, f0

lbl_803F62A4:
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
lfs      f2, lbl_8051FEF0@sda21(r2)
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
lfs      f3, lbl_8051FF50@sda21(r2)
lfs      f4, 8(r3)
lfs      f0, lbl_8051FF5C@sda21(r2)
fsubs    f2, f2, f4
fmuls    f2, f29, f2
fmadds   f2, f31, f4, f2
fmadds   f29, f3, f1, f2
fsubs    f1, f29, f31
fcmpo    cr0, f1, f0
bge      lbl_803F62E4
lfs      f0, lbl_8051FF60@sda21(r2)
fsubs    f29, f31, f0
b        lbl_803F62F4

lbl_803F62E4:
lfs      f0, lbl_8051FF60@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803F62F4
fadds    f29, f0, f31

lbl_803F62F4:
fmr      f1, f29
bl       pikmin2_cosf__Ff
fneg     f30, f1
fmr      f1, f29
bl       pikmin2_sinf__Ff
fsubs    f31, f29, f31
stfs     f1, 0xac(r29)
stfs     f30, 0xb0(r29)
fmr      f1, f31
bl       pikmin2_cosf__Ff
fneg     f30, f1
fmr      f1, f31
bl       pikmin2_sinf__Ff
stfs     f1, 0xb4(r29)
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
addi     r31, r3, msVal__Q32kh6Screen8WorldMap@l
mr       r3, r30
stfs     f30, 0xb8(r29)
lfs      f30, 0x10(r31)
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lfs      f2, lbl_8051FEF0@sda21(r2)
mr       r3, r30
lfs      f0, 0x9c(r29)
fsubs    f2, f2, f30
fmuls    f1, f2, f1
fmadds   f0, f0, f30, f1
stfs     f0, 0x9c(r29)
lfs      f30, 0x10(r31)
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lfs      f2, lbl_8051FEF0@sda21(r2)
mr       r3, r29
lfs      f0, 0xa0(r29)
mr       r4, r30
fsubs    f2, f2, f30
fmuls    f1, f2, f1
fmadds   f0, f0, f30, f1
stfs     f0, 0xa0(r29)
bl       rocketUpdate__Q32kh6Screen8WorldMapFP7J2DPane
psq_l    f31, 72(r1), 0, qr0
lfd      f31, 0x40(r1)
psq_l    f30, 56(r1), 0, qr0
lfd      f30, 0x30(r1)
psq_l    f29, 40(r1), 0, qr0
lfd      f29, 0x20(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r0, 0x54(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803F63C0
 * Size:	000230
 */
void WorldMap::changeState()
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
li       r31, 0
stw      r30, 0x48(r1)
mr       r30, r3
lwz      r4, 0x20(r3)
lwz      r3, 0x1c(r4)
rlwinm.  r0, r3, 0, 0x13, 0x13
beq      lbl_803F649C
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
lwz      r3, 0x18(r3)
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
li       r8, 0
addi     r9, r3, __vt__Q32og6Screen14DispMemberBase@l
li       r0, 0xb4
stb      r0, 0x38(r1)
lis      r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
lis      r4, 0x305F3030@ha
lis      r3, 0x00343731@ha
addi     r5, r3, 0x00343731@l
lis      r3, 0x315F3030@ha
addi     r6, r4, 0x305F3030@l
stw      r9, 0x18(r1)
addi     r7, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
addi     r0, r3, 0x315F3030@l
stw      r8, 0x1c(r1)
addi     r4, r1, 0x18
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
stw      r7, 0x18(r1)
stw      r8, 0x20(r1)
stw      r6, 0x2c(r1)
stw      r5, 0x28(r1)
stw      r0, 0x34(r1)
stw      r5, 0x30(r1)
stb      r8, 0x39(r1)
stb      r8, 0x38(r1)
bl
open_WorldMapInfoWin0__Q26Screen9Game2DMgrFRQ32og6Screen26DispMemberWorldMapInfoWin0
clrlwi.  r0, r3, 0x18
beq      lbl_803F65D4
li       r0, 8
stw      r0, 0x174(r30)
bl       PSMGetWorldMapRocket__Fv
li       r4, 6
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
lwz      r0, 0x17c(r30)
li       r31, 1
ori      r0, r0, 0x30
stw      r0, 0x17c(r30)
b        lbl_803F65D4

lbl_803F649C:
rlwinm.  r0, r3, 0, 0x17, 0x17
beq      lbl_803F6528
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
lwz      r3, 0x18(r3)
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
li       r5, 0
addi     r4, r3, __vt__Q32og6Screen14DispMemberBase@l
li       r0, 0xb4
stb      r0, 0x14(r1)
lis      r3, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@ha
addi     r0, r3, __vt__Q32og6Screen26DispMemberWorldMapInfoWin1@l
lwz      r3, gGame2DMgr__6Screen@sda21(r13)
stw      r4, 8(r1)
addi     r4, r1, 8
stw      r5, 0xc(r1)
stw      r0, 8(r1)
stw      r5, 0x10(r1)
stb      r5, 0x14(r1)
bl
open_WorldMapInfoWin1__Q26Screen9Game2DMgrFRQ32og6Screen26DispMemberWorldMapInfoWin1
clrlwi.  r0, r3, 0x18
beq      lbl_803F65D4
li       r0, 9
stw      r0, 0x174(r30)
bl       PSMGetWorldMapRocket__Fv
li       r4, 6
bl stateChange__Q23PSM14WorldMapRocketFQ33PSM14WorldMapRocket11rocketState
lwz      r0, 0x17c(r30)
li       r31, 1
ori      r0, r0, 0x30
stw      r0, 0x17c(r30)
b        lbl_803F65D4

lbl_803F6528:
rlwinm.  r0, r3, 0, 0x19, 0x19
beq      lbl_803F6550
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x181f
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 7
li       r31, 1
stw      r0, 0x174(r30)
b        lbl_803F65D4

lbl_803F6550:
rlwinm.  r0, r3, 0, 0x1a, 0x1a
beq      lbl_803F6578
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x181f
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 6
li       r31, 1
stw      r0, 0x174(r30)
b        lbl_803F65D4

lbl_803F6578:
lfs      f1, 0x50(r4)
lfs      f0, lbl_8051FF04@sda21(r2)
fcmpo    cr0, f1, f0
bgt      lbl_803F6594
lwz      r0, 0x18(r4)
clrlwi.  r0, r0, 0x1c
beq      lbl_803F65CC

lbl_803F6594:
lbz      r3, 0x180(r30)
cmplwi   r3, 0
bne      lbl_803F65C0
lis      r3, msVal__Q32kh6Screen8WorldMap@ha
li       r0, 5
addi     r3, r3, msVal__Q32kh6Screen8WorldMap@l
li       r31, 1
lbz      r3, 0x78(r3)
stb      r3, 0x180(r30)
stw      r0, 0x174(r30)
b        lbl_803F65D4

lbl_803F65C0:
addi     r0, r3, -1
stb      r0, 0x180(r30)
b        lbl_803F65D4

lbl_803F65CC:
li       r0, 0
stb      r0, 0x180(r30)

lbl_803F65D4:
lwz      r0, 0x54(r1)
mr       r3, r31
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803F65F0
 * Size:	0000C0
 */
void WorldMap::tag2num(unsigned long long)
{
	/*
lis      r3, 0x0000FF00@ha
li       r0, 0xff
li       r4, 0
stwu     r1, -0x10(r1)
and      r10, r6, r0
addi     r3, r3, 0x0000FF00@l
and      r8, r5, r4
lis      r0, 0xff
and      r4, r6, r3
neg      r5, r10
and      r3, r6, r0
lis      r0, 0x4330
or       r7, r5, r10
rotlwi   r6, r4, 0x18
rlwimi   r6, r8, 0x18, 0, 7
rotlwi   r5, r3, 0x10
neg      r4, r6
srawi    r9, r7, 0x1f
or       r3, r4, r6
rlwimi   r5, r8, 0x10, 0, 0xf
neg      r4, r5
addi     r6, r6, -48
srawi    r7, r3, 0x1f
addi     r3, r5, -48
or       r4, r4, r5
stw      r0, 8(r1)
srawi    r0, r4, 0x1f
addi     r8, r10, -48
and      r3, r3, r0
and      r6, r6, r7
mulli    r0, r6, 0xa
and      r5, r8, r9
lfd      f2, lbl_8051FF40@sda21(r2)
lfs      f3, lbl_8051FF30@sda21(r2)
mulli    r3, r3, 0x64
lfs      f0, lbl_8051FEF4@sda21(r2)
add      r0, r0, r5
add      r0, r3, r0
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f1, 8(r1)
fsubs    f1, f1, f2
fmuls    f1, f3, f1
fcmpu    cr0, f0, f1
bne      lbl_803F66A8
lfs      f1, lbl_8051FF64@sda21(r2)

lbl_803F66A8:
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F66B0
 * Size:	00008C
 */
void WorldMap::finish()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
lwz      r3, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0xc4(r29)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
li       r30, 0
li       r31, 0
b        lbl_803F6714

lbl_803F6700:
lwz      r0, 0xf0(r29)
add      r3, r0, r31
bl       kill__Q42kh6Screen8WorldMap13OnyonDynamicsFv
addi     r31, r31, 0x34
addi     r30, r30, 1

lbl_803F6714:
lwz      r0, 0xf4(r29)
cmpw     r30, r0
blt      lbl_803F6700
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803F673C
 * Size:	00007C
 */
void WorldMap::newMapOpen()
{
	/*
li       r0, 3
li       r7, 1
li       r4, 1
mtctr    r0

lbl_803F674C:
lbz      r5, 0x182(r3)
slw      r6, r4, r7
and.     r0, r5, r6
beq      lbl_803F67A8
lis      r4, cOpenMinFrm__Q22kh6Screen@ha
andc     r6, r5, r6
addi     r0, r4, cOpenMinFrm__Q22kh6Screen@l
slwi     r7, r7, 2
add      r5, r0, r7
lis      r4, cOpenMaxFrm__Q22kh6Screen@ha
addi     r0, r4, cOpenMaxFrm__Q22kh6Screen@l
stb      r6, 0x182(r3)
add      r4, r0, r7
lfs      f1, -4(r5)
lfs      f0, -4(r4)
li       r0, 0
stfs     f1, 0x94(r3)
stfs     f0, 0x90(r3)
lfs      f0, 0x94(r3)
stfs     f0, 0x68(r3)
stw      r0, 0x174(r3)
li       r3, 1
blr

lbl_803F67A8:
addi     r7, r7, 1
bdnz     lbl_803F674C
li       r3, 0
blr
	*/
}

/*
 * --INFO--
 * Address:	803F67B8
 * Size:	00013C
 */
int WorldMap::getTarget()
{
	switch (m_currentMap) {
	case 0:
		return !(Controls->buttons & 0x2000002) && Controls->buttons & 0x8000008 ? 2 : 1;
		break;
	case 1:
		if ((Controls->buttons & 0x1000001) == 0 && Controls->buttons & 0x8000008) {
			if (maxMap == 3) {
				return 2;
			} else if (maxMap > 3) {
				return 3;
			}
		} else if (Controls->buttons & 0x1000001) {
			return 0;
		}
		break;

	case 2:
		if (!(Controls->buttons & 0x2000002) && Controls->buttons & 0x4000004) {
			return 0;
		}

		return maxMap == 3 ? 1 : 3;
		break;

	case 3:
		return (!(Controls->buttons & 0x1000001) && Controls->buttons & 0x4000004) ? 1 : 2;
		break;

	default:
		return -1;
	}
}

/*
 * --INFO--
 * Address:	803F68F4
 * Size:	000174
 */
void WorldMap::getRotDir(const JGeometry::TVec2<float>&, float)
{
	/*
lfs      f3, 0(r4)
lfs      f2, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f3, f2
cror     2, 1, 2
bne      lbl_803F6950
lfs      f0, 0xac(r3)
fcmpo    cr0, f0, f2
cror     2, 1, 2
bne      lbl_803F6950
lfs      f3, 4(r4)
fneg     f0, f1
lfs      f2, 0xb0(r3)
fsubs    f2, f3, f2
fcmpo    cr0, f2, f0
bge      lbl_803F6938
li       r0, 1
b        lbl_803F6A58

lbl_803F6938:
fcmpo    cr0, f2, f1
ble      lbl_803F6948
li       r0, 2
b        lbl_803F6A58

lbl_803F6948:
li       r0, 0
b        lbl_803F6A58

lbl_803F6950:
lfs      f2, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f3, f2
bge      lbl_803F69A0
lfs      f0, 0xac(r3)
fcmpo    cr0, f0, f2
bge      lbl_803F69A0
lfs      f3, 4(r4)
fneg     f0, f1
lfs      f2, 0xb0(r3)
fsubs    f2, f3, f2
fcmpo    cr0, f2, f0
bge      lbl_803F6988
li       r0, 2
b        lbl_803F6A58

lbl_803F6988:
fcmpo    cr0, f2, f1
ble      lbl_803F6998
li       r0, 1
b        lbl_803F6A58

lbl_803F6998:
li       r0, 0
b        lbl_803F6A58

lbl_803F69A0:
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f3, f0
bge      lbl_803F6A08
lfs      f4, 0xac(r3)
fcmpo    cr0, f4, f0
cror     2, 1, 2
bne      lbl_803F6A08
lfs      f5, 4(r4)
fcmpo    cr0, f5, f0
ble      lbl_803F69E0
fsubs    f2, f3, f4
fneg     f0, f1
fcmpo    cr0, f2, f0
bge      lbl_803F69E0
li       r0, 2
b        lbl_803F6A58

lbl_803F69E0:
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f5, f0
bge      lbl_803F6A00
fsubs    f0, f3, f4
fcmpo    cr0, f0, f1
ble      lbl_803F6A00
li       r0, 1
b        lbl_803F6A58

lbl_803F6A00:
li       r0, 0
b        lbl_803F6A58

lbl_803F6A08:
lfs      f2, 4(r4)
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f2, f0
ble      lbl_803F6A30
lfs      f0, 0xac(r3)
fsubs    f0, f3, f0
fcmpo    cr0, f0, f1
ble      lbl_803F6A30
li       r0, 1
b        lbl_803F6A58

lbl_803F6A30:
lfs      f0, lbl_8051FEF4@sda21(r2)
fcmpo    cr0, f2, f0
bge      lbl_803F6A54
lfs      f0, 0xac(r3)
fsubs    f0, f3, f0
fcmpo    cr0, f0, f1
ble      lbl_803F6A54
li       r0, 2
b        lbl_803F6A58

lbl_803F6A54:
li       r0, 0

lbl_803F6A58:
cmpwi    r0, 0
beqlr
stw      r0, 0x178(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803F6A68
 * Size:	000A4C
 */
void WorldMap::changeInfo()
{
	/*
stwu     r1, -0x220(r1)
mflr     r0
stw      r0, 0x224(r1)
stfd     f31, 0x210(r1)
psq_st   f31, 536(r1), 0, qr0
stfd     f30, 0x200(r1)
psq_st   f30, 520(r1), 0, qr0
stfd     f29, 0x1f0(r1)
psq_st   f29, 504(r1), 0, qr0
stfd     f28, 0x1e0(r1)
psq_st   f28, 488(r1), 0, qr0
stfd     f27, 0x1d0(r1)
psq_st   f27, 472(r1), 0, qr0
stfd     f26, 0x1c0(r1)
psq_st   f26, 456(r1), 0, qr0
stfd     f25, 0x1b0(r1)
psq_st   f25, 440(r1), 0, qr0
stfd     f24, 0x1a0(r1)
psq_st   f24, 424(r1), 0, qr0
stfd     f23, 0x190(r1)
psq_st   f23, 408(r1), 0, qr0
stfd     f22, 0x180(r1)
psq_st   f22, 392(r1), 0, qr0
stmw     r19, 0x14c(r1)
lis      r4, lbl_80497C70@ha
lis      r5, 0x6E616D65@ha
addi     r22, r4, lbl_80497C70@l
lis      r4, 0x0050635F@ha
lfd      f26, 0x3f8(r22)
mr       r31, r3
lfd      f27, 0x400(r22)
addi     r0, r1, 0x120
lfd      f28, 0x408(r22)
addi     r10, r1, 0x100
lfd      f29, 0x410(r22)
addi     r9, r1, 0xe0
lfd      f30, 0x418(r22)
addi     r8, r1, 0xc0
lfd      f31, 0x420(r22)
addi     r7, r1, 0xa0
lfd      f13, 0x428(r22)
addi     r6, r5, 0x6E616D65@l
lfd      f12, 0x430(r22)
addi     r5, r4, 0x0050635F@l
lfd      f11, 0x438(r22)
lfd      f10, 0x440(r22)
lfd      f9, 0x448(r22)
lfd      f8, 0x450(r22)
lfd      f7, 0x458(r22)
lfd      f6, 0x460(r22)
lfd      f5, 0x468(r22)
lfd      f4, 0x470(r22)
lfd      f22, 0x3d8(r22)
lfd      f23, 0x3e0(r22)
lfd      f24, 0x3e8(r22)
lfd      f25, 0x3f0(r22)
lwz      r12, 0x478(r22)
lwz      r11, 0x47c(r22)
lwz      r4, 0x480(r22)
lwz      r3, 0x484(r22)
stw      r12, 0x4c(r1)
lfd      f3, 0x528(r22)
stw      r11, 0x50(r1)
lfd      f2, 0x530(r22)
stw      r4, 0x54(r1)
lfd      f1, 0x538(r22)
stw      r3, 0x58(r1)
lfd      f0, 0x540(r22)
stfd     f26, 0x100(r1)
stfd     f27, 0x108(r1)
stfd     f28, 0x110(r1)
stfd     f29, 0x118(r1)
stfd     f30, 0xe0(r1)
stfd     f31, 0xe8(r1)
stfd     f13, 0xf0(r1)
stfd     f12, 0xf8(r1)
stfd     f11, 0xc0(r1)
stfd     f10, 0xc8(r1)
stfd     f9, 0xd0(r1)
stfd     f8, 0xd8(r1)
stfd     f7, 0xa0(r1)
stfd     f6, 0xa8(r1)
stfd     f5, 0xb0(r1)
stfd     f4, 0xb8(r1)
lwz      r3, 0x54(r31)
lwz      r4, 0xf8(r31)
lwz      r12, 0(r3)
slwi     r4, r4, 3
stfd     f22, 0x120(r1)
lwz      r12, 0x3c(r12)
add      r20, r0, r4
stfd     f23, 0x128(r1)
stfd     f24, 0x130(r1)
stfd     f25, 0x138(r1)
lwz      r19, 0(r20)
stw      r10, 0x4c(r1)
lwz      r20, 4(r20)
stw      r9, 0x50(r1)
stw      r8, 0x54(r1)
stw      r7, 0x58(r1)
stfd     f3, 0x80(r1)
stfd     f2, 0x88(r1)
stfd     f1, 0x90(r1)
stfd     f0, 0x98(r1)
mtctr    r12
bctrl
stw      r20, 0x1c(r3)
stw      r19, 0x18(r3)
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r31)
bl       getGroundOtakaraNum__Q24Game8PlayDataFi
stw      r3, 0x12c(r31)
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r31)
bl       getGroundOtakaraMax__Q24Game8PlayDataFi
stw      r3, 0x130(r31)
li       r19, 0
lwz      r20, 0x158(r31)
stb      r19, 0x34(r20)
mr       r21, r20

lbl_803F6C48:
lwz      r3, 0x48(r21)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
addi     r19, r19, 1
addi     r21, r21, 4
cmpwi    r19, 4
blt      lbl_803F6C48
lwz      r3, 0x58(r20)
li       r4, 0
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0x5c(r20)
li       r4, 0
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r0, 0x12c(r31)
lwz      r19, 0x130(r31)
cmplw    r0, r19
bne      lbl_803F6D88
lwz      r20, 0x158(r31)
li       r23, 0
li       r0, 1
lwz      r4, 0x1c(r20)
lbz      r3, 0(r4)
stb      r3, 0x20(r20)
lbz      r3, 1(r4)
stb      r3, 0x21(r20)
lbz      r3, 2(r4)
stb      r3, 0x22(r20)
lbz      r3, 3(r4)
stb      r3, 0x23(r20)
stw      r23, 0x30(r20)
stb      r0, 0x34(r20)

lbl_803F6CCC:
srwi     r3, r23, 0x1f
clrlwi   r0, r23, 0x1f
xor      r0, r0, r3
subf.    r0, r3, r0
beq      lbl_803F6CE8
cmplwi   r19, 0xa
blt      lbl_803F6D48

lbl_803F6CE8:
lwz      r3, 0x38(r20)
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
fmr      f31, f1
lwz      r3, 0x38(r20)
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
stfs     f1, 0x20(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
addi     r0, r3, __vt__Q25efx2d3Arg@l
addi     r4, r1, 0x34
stfs     f31, 0x24(r1)
lwz      r5, 0x20(r1)
lwz      r3, 0x24(r1)
stw      r5, 0x18(r1)
stw      r3, 0x1c(r1)
lfs      f1, 0x18(r1)
lfs      f0, 0x1c(r1)
stw      r0, 0x3c(r1)
stfs     f1, 0x34(r1)
stfs     f0, 0x38(r1)
lwz      r3, 0x48(r20)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl

lbl_803F6D48:
addi     r23, r23, 1
addi     r20, r20, 4
cmpwi    r23, 4
blt      lbl_803F6CCC
lwz      r3, 0x54(r31)
lis      r5, 0x5F666C30@ha
lis      r4, 0x004E6772@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x5F666C30@l
addi     r5, r4, 0x004E6772@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
b        lbl_803F6E00

lbl_803F6D88:
lwz      r20, 0x158(r31)
li       r19, 0
stb      r19, 0x34(r20)
mr       r21, r20

lbl_803F6D98:
lwz      r3, 0x48(r21)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
addi     r19, r19, 1
addi     r21, r21, 4
cmpwi    r19, 4
blt      lbl_803F6D98
lwz      r3, 0x58(r20)
li       r4, 0
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0x5c(r20)
li       r4, 0
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0x54(r31)
lis      r5, 0x5F666C30@ha
lis      r4, 0x004E6772@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x5F666C30@l
addi     r5, r4, 0x004E6772@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F6E00:
lwz      r3, playData__4Game@sda21(r13)
lbz      r0, 0x2f(r3)
clrlwi.  r0, r0, 0x1f
bne      lbl_803F6E20
lwz      r3, 0x130(r31)
lwz      r0, 0x12c(r31)
cmplw    r3, r0
bne      lbl_803F6E7C

lbl_803F6E20:
lwz      r3, 0x108(r31)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
li       r0, 1
lis      r4, 0x5F737261@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x5F737261@l
li       r5, 0x5067
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x104(r31)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
lwz      r12, 0(r3)
lfs      f1, lbl_8051FEF4@sda21(r2)
lwz      r12, 0x10(r12)
fmr      f2, f1
mtctr    r12
bctrl
b        lbl_803F6EF4

lbl_803F6E7C:
lwz      r3, 0x108(r31)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
li       r0, 0
lis      r4, 0x5F737261@ha
stb      r0, 0xb0(r3)
addi     r6, r4, 0x5F737261@l
li       r5, 0x5067
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, msVal__Q32kh6Screen8WorldMap@ha
stb      r0, 0xb0(r3)
addi     r3, r4, msVal__Q32kh6Screen8WorldMap@l
lwz      r0, 0x12c(r31)
lfs      f22, 0x64(r3)
cmplwi   r0, 0xa
blt      lbl_803F6ED4
lfs      f0, lbl_8051FF68@sda21(r2)
fadds    f22, f22, f0

lbl_803F6ED4:
lwz      r3, 0x104(r31)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
lwz      r12, 0(r3)
fmr      f1, f22
lfs      f2, lbl_8051FEF4@sda21(r2)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl

lbl_803F6EF4:
lfd      f3, 0x548(r22)
lis      r5, msVal__Q32kh6Screen8WorldMap@ha
lfd      f2, 0x550(r22)
lis      r4, 0x64617461@ha
lfd      f1, 0x558(r22)
lis      r3, 0x006E6F5F@ha
lfd      f0, 0x560(r22)
mr       r30, r31
stfd     f3, 0x60(r1)
addi     r29, r1, 0x60
addi     r28, r1, 0x80
addi     r25, r5, msVal__Q32kh6Screen8WorldMap@l
stfd     f2, 0x68(r1)
addi     r22, r1, 0x4c
addi     r24, r4, 0x64617461@l
addi     r23, r3, 0x006E6F5F@l
stfd     f1, 0x70(r1)
li       r27, 0
li       r26, 0
stfd     f0, 0x78(r1)

lbl_803F6F44:
lwz      r20, 0x15c(r30)
li       r19, 0
stb      r19, 0x34(r20)
mr       r21, r20

lbl_803F6F54:
lwz      r3, 0x48(r21)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
addi     r19, r19, 1
addi     r21, r21, 4
cmpwi    r19, 4
blt      lbl_803F6F54
lwz      r3, 0x58(r20)
li       r4, 0
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0x5c(r20)
li       r4, 0
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r0, 0xf8(r31)
slwi     r0, r0, 2
lwzx     r0, r22, r0
add      r3, r0, r26
lwz      r0, 0(r3)
lwz      r3, 4(r3)
xor      r0, r0, r23
xor      r3, r3, r24
or.      r0, r3, r0
bne      lbl_803F6FF4
lis      r3, 0x61766530@ha
mr       r5, r27
addi     r4, r3, 0x61766530@l
li       r3, 0x4e63
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x54(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
b        lbl_803F7434

lbl_803F6FF4:
lis      r3, 0x61766530@ha
mr       r5, r27
addi     r4, r3, 0x61766530@l
li       r3, 0x4e63
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x54(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x1c(r31)
lwz      r4, 0xf8(r31)
bl       getCourseInfo__Q24Game6StagesFi
mr       r4, r27
bl       getCaveID_FromIndex__Q24Game10CourseInfoFi
mr       r4, r3
addi     r3, r1, 0x40
bl       __ct__4ID32FUl
lwz      r3, 0x10c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
li       r0, 1
li       r4, 0
stb      r0, 0xb0(r3)
lwz      r3, 0x10c(r30)
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0x10c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
lwz      r12, 0(r3)
lfs      f1, lbl_8051FEF4@sda21(r2)
lwz      r12, 0x10(r12)
fmr      f2, f1
mtctr    r12
bctrl
lwz      r3, 0x11c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
li       r0, 1
li       r4, 0
stb      r0, 0xb0(r3)
lwz      r3, 0x11c(r30)
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0x54(r31)
lwz      r5, 0(r29)
lwz      r12, 0(r3)
lwz      r6, 4(r29)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
addi     r5, r1, 0x40
stb      r0, 0xb0(r3)
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r31)
bl       getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
stw      r3, 0x134(r30)
addi     r5, r1, 0x40
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r31)
bl       getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
stw      r3, 0x144(r30)
addi     r5, r1, 0x40
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r31)
bl       isCaveFirstTime__Q24Game8PlayDataFiR4ID32
clrlwi.  r0, r3, 0x18
beq      lbl_803F7224
lwz      r3, playData__4Game@sda21(r13)
lbz      r0, 0x2f(r3)
clrlwi.  r0, r0, 0x1f
beq      lbl_803F7134
lwz      r3, 0x10c(r30)
li       r4, 1
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
lwz      r3, 0x11c(r30)
li       r4, 1
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
b        lbl_803F71B0

lbl_803F7134:
lwz      r3, 0x10c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
li       r0, 0
stb      r0, 0xb0(r3)
lwz      r3, 0x11c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
li       r0, 0
lwz      r5, 0(r29)
stb      r0, 0xb0(r3)
lwz      r6, 4(r29)
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
lwz      r0, 0x134(r30)
lfs      f22, 0x68(r25)
cmplwi   r0, 0xa
blt      lbl_803F7190
lfs      f0, lbl_8051FF6C@sda21(r2)
fadds    f22, f22, f0

lbl_803F7190:
lwz      r3, 0x10c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
lwz      r12, 0(r3)
fmr      f1, f22
lfs      f2, lbl_8051FEF4@sda21(r2)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl

lbl_803F71B0:
lis      r4, 0x655F3030@ha
lis      r3, 0x50636176@ha
mr       r5, r27
addi     r4, r4, 0x655F3030@l
addi     r3, r3, 0x50636176@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x54(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lis      r5, 0x395F3031@ha
lis      r4, 0x00383431@ha
addi     r0, r5, 0x395F3031@l
lwz      r5, 0(r28)
stw      r0, 0x1c(r3)
addi     r0, r4, 0x00383431@l
lwz      r6, 4(r28)
stw      r0, 0x18(r3)
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
b        lbl_803F7434

lbl_803F7224:
lwz      r3, playData__4Game@sda21(r13)
lbz      r0, 0x2f(r3)
clrlwi.  r0, r0, 0x1f
bne      lbl_803F72AC
lwz      r0, 0x144(r30)
lwz      r3, 0x134(r30)
cmplw    r0, r3
beq      lbl_803F72AC
cmplwi   r3, 0xa
lfs      f22, 0x68(r25)
blt      lbl_803F7258
lfs      f0, lbl_8051FF6C@sda21(r2)
fadds    f22, f22, f0

lbl_803F7258:
lwz      r3, 0x10c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
lwz      r12, 0(r3)
fmr      f1, f22
lfs      f2, lbl_8051FEF4@sda21(r2)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x11c(r30)
bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
li       r0, 0
lwz      r5, 0(r29)
stb      r0, 0xb0(r3)
lwz      r6, 4(r29)
lwz      r3, 0x54(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F72AC:
lwz      r0, 0xf8(r31)
lis      r4, 0x655F3030@ha
lis      r3, 0x50636176@ha
addi     r6, r1, 0x4c
slwi     r0, r0, 2
mr       r5, r27
lwzx     r0, r6, r0
addi     r4, r4, 0x655F3030@l
addi     r3, r3, 0x50636176@l
add      r20, r0, r26
lwz      r19, 0(r20)
lwz      r20, 4(r20)
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x54(r31)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r20, 0x1c(r3)
stw      r19, 0x18(r3)
lwz      r3, 0x134(r30)
lwz      r0, 0x144(r30)
cmplw    r3, r0
bne      lbl_803F7410
lwz      r3, 0x11c(r30)
li       r4, 0
bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
lwz      r19, 0x15c(r30)
li       r21, 0
lwz      r20, 0x134(r30)
li       r0, 1
lwz      r4, 0x1c(r19)
lbz      r3, 0(r4)
stb      r3, 0x20(r19)
lbz      r3, 1(r4)
stb      r3, 0x21(r19)
lbz      r3, 2(r4)
stb      r3, 0x22(r19)
lbz      r3, 3(r4)
stb      r3, 0x23(r19)
stw      r21, 0x30(r19)
stb      r0, 0x34(r19)

lbl_803F735C:
srwi     r3, r21, 0x1f
clrlwi   r0, r21, 0x1f
xor      r0, r0, r3
subf.    r0, r3, r0
beq      lbl_803F7378
cmplwi   r20, 0xa
blt      lbl_803F73D8

lbl_803F7378:
lwz      r3, 0x38(r19)
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
fmr      f31, f1
lwz      r3, 0x38(r19)
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
stfs     f1, 0x10(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
addi     r0, r3, __vt__Q25efx2d3Arg@l
addi     r4, r1, 0x28
stfs     f31, 0x14(r1)
lwz      r5, 0x10(r1)
lwz      r3, 0x14(r1)
stw      r5, 8(r1)
stw      r3, 0xc(r1)
lfs      f1, 8(r1)
lfs      f0, 0xc(r1)
stw      r0, 0x30(r1)
stfs     f1, 0x28(r1)
stfs     f0, 0x2c(r1)
lwz      r3, 0x48(r19)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl

lbl_803F73D8:
addi     r21, r21, 1
addi     r19, r19, 4
cmpwi    r21, 4
blt      lbl_803F735C
lwz      r3, 0x54(r31)
lwz      r5, 0(r28)
lwz      r12, 0(r3)
lwz      r6, 4(r28)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
b        lbl_803F7434

lbl_803F7410:
lwz      r3, 0x54(r31)
lwz      r5, 0(r28)
lwz      r12, 0(r3)
lwz      r6, 4(r28)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)

lbl_803F7434:
addi     r27, r27, 1
addi     r26, r26, 8
cmpwi    r27, 4
addi     r29, r29, 8
addi     r28, r28, 8
addi     r30, r30, 4
blt      lbl_803F6F44
psq_l    f31, 536(r1), 0, qr0
lfd      f31, 0x210(r1)
psq_l    f30, 520(r1), 0, qr0
lfd      f30, 0x200(r1)
psq_l    f29, 504(r1), 0, qr0
lfd      f29, 0x1f0(r1)
psq_l    f28, 488(r1), 0, qr0
lfd      f28, 0x1e0(r1)
psq_l    f27, 472(r1), 0, qr0
lfd      f27, 0x1d0(r1)
psq_l    f26, 456(r1), 0, qr0
lfd      f26, 0x1c0(r1)
psq_l    f25, 440(r1), 0, qr0
lfd      f25, 0x1b0(r1)
psq_l    f24, 424(r1), 0, qr0
lfd      f24, 0x1a0(r1)
psq_l    f23, 408(r1), 0, qr0
lfd      f23, 0x190(r1)
psq_l    f22, 392(r1), 0, qr0
lfd      f22, 0x180(r1)
lmw      r19, 0x14c(r1)
lwz      r0, 0x224(r1)
mtlr     r0
addi     r1, r1, 0x220
blr
	*/
}

/*
 * --INFO--
 * Address:	803F74B4
 * Size:	000550
 */
void WorldMap::effectFirstTime()
{
	/*
stwu     r1, -0x1b0(r1)
mflr     r0
stw      r0, 0x1b4(r1)
stfd     f31, 0x1a0(r1)
psq_st   f31, 424(r1), 0, qr0
stfd     f30, 0x190(r1)
psq_st   f30, 408(r1), 0, qr0
stfd     f29, 0x180(r1)
psq_st   f29, 392(r1), 0, qr0
stfd     f28, 0x170(r1)
psq_st   f28, 376(r1), 0, qr0
stfd     f27, 0x160(r1)
psq_st   f27, 360(r1), 0, qr0
stmw     r15, 0x11c(r1)
mr       r29, r3
lis      r3, lbl_80497C70@ha
lwz      r0, 0x17c(r29)
addi     r7, r3, lbl_80497C70@l
rlwinm.  r0, r0, 0, 0x1d, 0x1d
beq      lbl_803F79C8
lfd      f29, 0x588(r7)
addi     r6, r1, 0xe0
lfd      f28, 0x590(r7)
addi     r5, r1, 0xc0
lfd      f13, 0x598(r7)
addi     r4, r1, 0xa0
lfd      f12, 0x5a0(r7)
addi     r0, r1, 0x80
lfd      f11, 0x5a8(r7)
li       r22, 0
lfd      f10, 0x5b0(r7)
li       r31, 0
lfd      f9, 0x5b8(r7)
li       r30, 0
lfd      f8, 0x5c0(r7)
li       r17, 0
lfd      f7, 0x5c8(r7)
lfd      f6, 0x5d0(r7)
lfd      f5, 0x5d8(r7)
lfd      f4, 0x5e0(r7)
lfd      f3, 0x5e8(r7)
lfd      f2, 0x5f0(r7)
lfd      f1, 0x5f8(r7)
lfd      f0, 0x600(r7)
lwz      r3, 0x608(r7)
lwz      r9, 0x60c(r7)
lwz      r8, 0x610(r7)
stw      r3, 0x70(r1)
lwz      r7, 0x614(r7)
stw      r9, 0x74(r1)
lwz      r3, playData__4Game@sda21(r13)
stw      r8, 0x78(r1)
stw      r7, 0x7c(r1)
stfd     f29, 0xe0(r1)
stfd     f28, 0xe8(r1)
stfd     f13, 0xf0(r1)
stfd     f12, 0xf8(r1)
stfd     f11, 0xc0(r1)
stfd     f10, 0xc8(r1)
stfd     f9, 0xd0(r1)
stfd     f8, 0xd8(r1)
stfd     f7, 0xa0(r1)
stfd     f6, 0xa8(r1)
stfd     f5, 0xb0(r1)
stfd     f4, 0xb8(r1)
stfd     f3, 0x80(r1)
stfd     f2, 0x88(r1)
stfd     f1, 0x90(r1)
stfd     f0, 0x98(r1)
stw      r6, 0x70(r1)
lwz      r15, 0xe8(r3)
stw      r5, 0x74(r1)
stw      r4, 0x78(r1)
stw      r0, 0x7c(r1)
bl       getMoney_Old__Q24Game8PlayDataFv
cmpw     r15, r3
beq      lbl_803F75F8
lwz      r3, 0x100(r29)
lfs      f1, lbl_8051FEF0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
li       r22, 1

lbl_803F75F8:
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r29)
bl       getGroundOtakaraNum_Old__Q24Game8PlayDataFi
mr       r15, r3
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r29)
bl       getGroundOtakaraNum__Q24Game8PlayDataFi
cmpw     r3, r15
beq      lbl_803F7654
lwz      r3, 0x104(r29)
lfs      f1, lbl_8051FEF0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r3, playData__4Game@sda21(r13)
li       r31, 1
lwz      r4, 0xf8(r29)
bl       getGroundOtakaraMax__Q24Game8PlayDataFi
mr       r15, r3
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r29)
bl       getGroundOtakaraNum__Q24Game8PlayDataFi
cmpw     r3, r15
bne      lbl_803F7654
li       r30, 1

lbl_803F7654:
lis      r4, 0x64617461@ha
lis      r3, 0x006E6F5F@ha
mr       r24, r29
addi     r26, r1, 0x70
addi     r27, r4, 0x64617461@l
addi     r28, r3, 0x006E6F5F@l
li       r23, 0
li       r25, 0

lbl_803F7674:
lwz      r4, 0xf8(r29)
slwi     r0, r4, 2
lwzx     r0, r26, r0
add      r3, r0, r25
lwz      r0, 0(r3)
lwz      r3, 4(r3)
xor      r0, r0, r28
xor      r3, r3, r27
or.      r0, r3, r0
beq      lbl_803F7908
lwz      r3, 0x1c(r29)
bl       getCourseInfo__Q24Game6StagesFi
mr       r4, r23
bl       getCaveID_FromIndex__Q24Game10CourseInfoFi
mr       r4, r3
addi     r3, r1, 0x64
bl       __ct__4ID32FUl
lwz      r3, playData__4Game@sda21(r13)
addi     r5, r1, 0x64
lwz      r4, 0xf8(r29)
bl       isCaveFirstTime_Old__Q24Game8PlayDataFiR4ID32
clrlwi   r15, r3, 0x18
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r29)
addi     r5, r1, 0x64
bl       isCaveFirstTime__Q24Game8PlayDataFiR4ID32
clrlwi   r0, r3, 0x18
cmplw    r0, r15
beq      lbl_803F789C
lis      r4, 0x655F3030@ha
lis      r3, 0x50636176@ha
mr       r5, r23
addi     r4, r4, 0x655F3030@l
addi     r3, r3, 0x50636176@l
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x54(r29)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
addi     r3, r1, 0x24
li       r5, 0
bl       getGlbVtx__7J2DPaneCFUc
lwz      r7, 0x24(r1)
lis      r4, 0x655F3030@ha
lwz      r6, 0x28(r1)
lis      r3, 0x50636176@ha
lwz      r0, 0x2c(r1)
mr       r5, r23
stw      r7, 0x58(r1)
addi     r4, r4, 0x655F3030@l
addi     r3, r3, 0x50636176@l
stw      r6, 0x5c(r1)
stw      r0, 0x60(r1)
bl       getSerialTagName__Q22kh6ScreenFUxi
mr       r5, r3
lwz      r3, 0x54(r29)
mr       r6, r4
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r4, r3
addi     r3, r1, 0x18
li       r5, 3
bl       getGlbVtx__7J2DPaneCFUc
lwz      r0, 0x1c(r1)
lis      r7, __vt__Q25efx2d3Arg@ha
lwz      r8, 0x18(r1)
lis      r6, __vt__Q25efx2d7TBaseIF@ha
stw      r0, 0x50(r1)
lis      r5, __vt__Q25efx2d5TBase@ha
lwz      r0, 0x20(r1)
lis      r4, __vt__Q25efx2d8TSimple1@ha
lfs      f1, 0x5c(r1)
lis      r3, __vt__Q25efx2d14T2DChangesmoke@ha
lfs      f0, 0x50(r1)
addi     r18, r7, __vt__Q25efx2d3Arg@l
stw      r8, 0x4c(r1)
addi     r19, r6, __vt__Q25efx2d7TBaseIF@l
fadds    f0, f1, f0
lfs      f1, lbl_8051FF14@sda21(r2)
stw      r0, 0x54(r1)
addi     r20, r5, __vt__Q25efx2d5TBase@l
lfs      f28, lbl_8051FF70@sda21(r2)
addi     r21, r4, __vt__Q25efx2d8TSimple1@l
fmuls    f27, f1, f0
lfs      f29, 0x58(r1)
lfd      f30, lbl_8051FF40@sda21(r2)
addi     r15, r3, __vt__Q25efx2d14T2DChangesmoke@l
lfs      f31, 0x4c(r1)
li       r16, 0
lis      r17, 0x4330

lbl_803F77F4:
xoris    r0, r16, 0x8000
li       r5, 0
stw      r0, 0x10c(r1)
subfic   r0, r16, 4
xoris    r6, r0, 0x8000
li       r0, 7
stw      r17, 0x108(r1)
addi     r3, r1, 0x30
addi     r4, r1, 0x40
lfd      f0, 0x108(r1)
stw      r6, 0x104(r1)
fsubs    f0, f0, f30
stw      r17, 0x100(r1)
lfd      f1, 0x100(r1)
fmuls    f0, f31, f0
stfs     f27, 0xc(r1)
fsubs    f1, f1, f30
stw      r19, 0x30(r1)
lwz      r6, 0xc(r1)
fmadds   f0, f29, f1, f0
stw      r20, 0x30(r1)
stw      r6, 0x14(r1)
fmuls    f1, f28, f0
stw      r21, 0x30(r1)
lfs      f0, 0x14(r1)
stfs     f1, 8(r1)
lwz      r6, 8(r1)
stw      r18, 0x48(r1)
stw      r6, 0x10(r1)
lfs      f1, 0x10(r1)
stfs     f0, 0x44(r1)
stfs     f1, 0x40(r1)
stb      r5, 0x34(r1)
stb      r5, 0x35(r1)
sth      r0, 0x38(r1)
stw      r5, 0x3c(r1)
stw      r15, 0x30(r1)
bl       create__Q25efx2d8TSimple1FPQ25efx2d3Arg
addi     r16, r16, 1
cmpwi    r16, 5
blt      lbl_803F77F4
li       r17, 1

lbl_803F789C:
lwz      r3, playData__4Game@sda21(r13)
addi     r5, r1, 0x64
lwz      r4, 0xf8(r29)
bl       getOtakaraNum_Course_CaveID_Old__Q24Game8PlayDataFiR4ID32
mr       r16, r3
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r29)
addi     r5, r1, 0x64
bl       getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
cmpw     r3, r16
beq      lbl_803F7908
lwz      r3, 0x10c(r24)
lfs      f1, lbl_8051FEF0@sda21(r2)
bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
lwz      r3, playData__4Game@sda21(r13)
addi     r5, r1, 0x64
lwz      r4, 0xf8(r29)
li       r31, 1
bl       getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
mr       r16, r3
lwz      r3, playData__4Game@sda21(r13)
lwz      r4, 0xf8(r29)
addi     r5, r1, 0x64
bl       getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
cmpw     r3, r16
bne      lbl_803F7908
li       r30, 1

lbl_803F7908:
addi     r23, r23, 1
addi     r24, r24, 4
cmpwi    r23, 4
addi     r25, r25, 8
blt      lbl_803F7674
clrlwi.  r0, r17, 0x18
li       r4, -1
beq      lbl_803F7938
clrlwi.  r0, r30, 0x18
beq      lbl_803F7938
li       r4, 0x1843
b        lbl_803F79A4

lbl_803F7938:
clrlwi.  r0, r17, 0x18
beq      lbl_803F7950
clrlwi.  r0, r31, 0x18
beq      lbl_803F7950
li       r4, 0x1842
b        lbl_803F79A4

lbl_803F7950:
clrlwi.  r0, r17, 0x18
beq      lbl_803F7968
clrlwi.  r0, r22, 0x18
beq      lbl_803F7968
li       r4, 0x1841
b        lbl_803F79A4

lbl_803F7968:
clrlwi.  r0, r17, 0x18
beq      lbl_803F7978
li       r4, 0x1840
b        lbl_803F79A4

lbl_803F7978:
clrlwi.  r0, r30, 0x18
beq      lbl_803F7988
li       r4, 0x183f
b        lbl_803F79A4

lbl_803F7988:
clrlwi.  r0, r31, 0x18
beq      lbl_803F7998
li       r4, 0x183e
b        lbl_803F79A4

lbl_803F7998:
clrlwi.  r0, r22, 0x18
beq      lbl_803F79A4
li       r4, 0x183d

lbl_803F79A4:
addis    r0, r4, 1
cmplwi   r0, 0xffff
beq      lbl_803F79BC
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803F79BC:
lwz      r0, 0x17c(r29)
rlwinm   r0, r0, 0, 0x1e, 0x1c
stw      r0, 0x17c(r29)

lbl_803F79C8:
psq_l    f31, 424(r1), 0, qr0
lfd      f31, 0x1a0(r1)
psq_l    f30, 408(r1), 0, qr0
lfd      f30, 0x190(r1)
psq_l    f29, 392(r1), 0, qr0
lfd      f29, 0x180(r1)
psq_l    f28, 376(r1), 0, qr0
lfd      f28, 0x170(r1)
psq_l    f27, 360(r1), 0, qr0
lfd      f27, 0x160(r1)
lmw      r15, 0x11c(r1)
lwz      r0, 0x1b4(r1)
mtlr     r0
addi     r1, r1, 0x1b0
blr
	*/
}

/*
 * --INFO--
 * Address:	803F7A04
 * Size:	000044
 */
WorldMap::OnyonDynamics::OnyonDynamics()
{
	/*
li       r0, 0
lfs      f2, lbl_8051FF10@sda21(r2)
sth      r0, 0x30(r3)
lfs      f1, lbl_8051FEF4@sda21(r2)
stw      r0, 0(r3)
lfs      f0, lbl_8051FEF8@sda21(r2)
stfs     f2, 4(r3)
stfs     f1, 8(r3)
stfs     f2, 0x20(r3)
stfs     f1, 0x24(r3)
stfs     f1, 0x28(r3)
stfs     f0, 0x2c(r3)
stfs     f1, 0x10(r3)
stfs     f1, 0xc(r3)
stfs     f1, 0x14(r3)
stfs     f0, 0x18(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803F7A48
 * Size:	0000F8
 */
void WorldMap::OnyonDynamics::initPtcl()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
li       r3, 0x28
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_803F7AF8
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r6, __vt__18JPAEmitterCallBack@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r5, __vt__Q25efx2d8TForever@ha
lis      r4, __vt__Q25efx2d12TChasePosDir@ha
stw      r0, 0(r3)
li       r12, 0
addi     r11, r5, __vt__Q25efx2d8TForever@l
addi     r9, r4, __vt__Q25efx2d12TChasePosDir@l
stb      r12, 4(r3)
lis      r4, __vt__Q35efx2d8WorldMap12T2DOnyonKira@ha
addi     r5, r4, __vt__Q35efx2d8WorldMap12T2DOnyonKira@l
addi     r0, r6, __vt__18JPAEmitterCallBack@l
stb      r12, 5(r3)
addi     r10, r11, 0x18
addi     r8, r9, 0x18
addi     r7, r31, 0x20
stw      r0, 8(r3)
addi     r6, r31, 0x28
addi     r4, r5, 0x18
li       r0, 1
stw      r11, 0(r3)
stw      r10, 8(r3)
sth      r12, 0xc(r3)
stw      r12, 0x10(r3)
stw      r9, 0(r3)
stw      r8, 8(r3)
stw      r7, 0x14(r3)
stw      r6, 0x18(r3)
stw      r5, 0(r3)
stw      r4, 8(r3)
stb      r0, 4(r3)

lbl_803F7AF8:
stw      r3, 0x1c(r31)
li       r4, 3
lwz      r3, 0x1c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x1c(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F7B40
 * Size:	000458
 */
void WorldMap::OnyonDynamics::move(kh::Screen::WorldMap*, const JGeometry::TVec2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  lis       r7, 0x804A
	  mr        r31, r5
	  subi      r5, r7, 0x7CD8
	  mr        r29, r3
	  lfd       f3, 0x0(r5)
	  addi      r0, r1, 0x8
	  lfd       f2, 0x8(r5)
	  mr        r27, r6
	  lfd       f1, 0x10(r5)
	  mr        r30, r4
	  lfd       f0, 0x18(r5)
	  stfd      f3, 0x8(r1)
	  stfd      f2, 0x10(r1)
	  stfd      f1, 0x18(r1)
	  stfd      f0, 0x20(r1)
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0xF8(r31)
	  lwz       r12, 0x0(r3)
	  rlwinm    r4,r4,3,0,28
	  add       r6, r0, r4
	  lwz       r12, 0x3C(r12)
	  lwz       r5, 0x0(r6)
	  lwz       r6, 0x4(r6)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x4(r27)
	  lfs       f0, 0x8(r30)
	  lfs       f2, 0x0(r27)
	  fsubs     f30, f1, f0
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x1B94(r2)
	  fsubs     f31, f2, f1
	  fmuls     f1, f30, f30
	  fmadds    f1, f31, f31, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xBC
	  fmr       f0, f1
	  b         .loc_0xE0

	.loc_0xBC:
	  fsqrte    f4, f1
	  lfs       f3, 0x1BB4(r2)
	  lfs       f0, 0x1BC4(r2)
	  frsp      f4, f4
	  fmuls     f2, f4, f4
	  fmuls     f3, f3, f4
	  fnmsubs   f0, f1, f2, f0
	  fmuls     f0, f3, f0
	  fmuls     f0, f1, f0

	.loc_0xE0:
	  lha       r28, 0x30(r30)
	  lfs       f2, 0x1B90(r2)
	  addi      r0, r28, 0x1F4
	  fcmpo     cr0, f0, f2
	  sth       r0, 0x30(r30)
	  bge-      .loc_0x178
	  lfs       f3, 0x9C(r31)
	  lis       r3, 0x8051
	  lfs       f2, 0x4(r30)
	  addi      r3, r3, 0x4058
	  lfs       f4, 0x3C(r3)
	  fsubs     f3, f3, f2
	  lfs       f2, 0xC(r30)
	  fmadds    f2, f4, f3, f2
	  stfs      f2, 0xC(r30)
	  lfs       f3, 0xA0(r31)
	  lfs       f2, 0x8(r30)
	  lfs       f4, 0x3C(r3)
	  fsubs     f3, f3, f2
	  lfs       f2, 0x10(r30)
	  fmadds    f2, f4, f3, f2
	  stfs      f2, 0x10(r30)
	  lfs       f3, 0x40(r3)
	  lfs       f2, 0xC(r30)
	  fmuls     f2, f2, f3
	  stfs      f2, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f2, f2, f3
	  stfs      f2, 0x10(r30)
	  lfs       f3, 0x4(r30)
	  lfs       f2, 0xC(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r30)
	  lfs       f3, 0x8(r30)
	  lfs       f2, 0x10(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x8(r30)
	  b         .loc_0x210

	.loc_0x178:
	  lfs       f3, 0x0(r27)
	  lis       r3, 0x8051
	  lfs       f2, 0x4(r30)
	  addi      r4, r3, 0x4058
	  lis       r3, 0x8050
	  lfs       f6, 0x3C(r4)
	  fsubs     f4, f3, f2
	  lfs       f2, 0xC(r30)
	  lfs       f3, 0x4(r27)
	  addi      r3, r3, 0x71A0
	  lfs       f5, 0x1C00(r2)
	  fmadds    f2, f6, f4, f2
	  stfs      f2, 0xC(r30)
	  lfs       f2, 0x8(r30)
	  lfs       f4, 0x3C(r4)
	  fsubs     f3, f3, f2
	  lfs       f2, 0x10(r30)
	  fmadds    f2, f4, f3, f2
	  stfs      f2, 0x10(r30)
	  lha       r0, 0x30(r30)
	  lfs       f3, 0x40(r4)
	  rlwinm    r0,r0,30,18,28
	  lfs       f2, 0xC(r30)
	  lfsx      f4, r3, r0
	  fmadds    f3, f5, f4, f3
	  fmuls     f2, f2, f3
	  stfs      f2, 0xC(r30)
	  lfs       f2, 0x10(r30)
	  fmuls     f2, f2, f3
	  stfs      f2, 0x10(r30)
	  lfs       f3, 0x4(r30)
	  lfs       f2, 0xC(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r30)
	  lfs       f3, 0x8(r30)
	  lfs       f2, 0x10(r30)
	  fadds     f2, f3, f2
	  stfs      f2, 0x8(r30)

	.loc_0x210:
	  lfs       f2, 0x1C14(r2)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x2D4
	  lfs       f0, 0x18(r30)
	  lfs       f1, 0x14(r30)
	  fneg      f2, f0
	  bl        0x19A74
	  lis       r3, 0x8051
	  lfs       f0, 0x1BBC(r2)
	  addi      r3, r3, 0x4058
	  lfs       f2, 0x44(r3)
	  fmuls     f31, f1, f2
	  fsubs     f2, f31, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x258
	  lfs       f0, 0x1BA4(r2)
	  fsubs     f31, f1, f0
	  b         .loc_0x268

	.loc_0x258:
	  lfs       f0, 0x1BA4(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x268
	  fadds     f31, f0, f1

	.loc_0x268:
	  fmr       f1, f31
	  bl        0x199EC
	  fneg      f30, f1
	  fmr       f1, f31
	  bl        0x19978
	  stfs      f1, 0x14(r30)
	  cmpwi     r28, -0x4000
	  stfs      f30, 0x18(r30)
	  bge-      .loc_0x2AC
	  lha       r0, 0x30(r30)
	  cmpwi     r0, -0x4000
	  ble-      .loc_0x2AC
	  lwz       r3, 0x0(r30)
	  bl        -0x3BECFC
	  lwz       r4, 0x0(r30)
	  bl        -0x3C0720
	  b         .loc_0x418

	.loc_0x2AC:
	  cmpwi     r28, 0x4000
	  bge-      .loc_0x418
	  lha       r0, 0x30(r30)
	  cmpwi     r0, 0x4000
	  ble-      .loc_0x418
	  lwz       r3, 0x0(r30)
	  bl        -0x3BED24
	  lwz       r4, 0x0(r30)
	  bl        -0x3C0690
	  b         .loc_0x418

	.loc_0x2D4:
	  lis       r3, 0x8051
	  lfs       f2, 0x1BC0(r2)
	  lfs       f0, 0x48DC(r3)
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x32C
	  lfs       f0, 0x1B94(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x304
	  b         .loc_0x324

	.loc_0x304:
	  fsqrte    f4, f1
	  lfs       f3, 0x1BB4(r2)
	  lfs       f0, 0x1BC4(r2)
	  frsp      f4, f4
	  fmuls     f2, f4, f4
	  fmuls     f3, f3, f4
	  fnmsubs   f0, f1, f2, f0
	  fmuls     f1, f3, f0

	.loc_0x324:
	  fmuls     f31, f31, f1
	  fmuls     f30, f30, f1

	.loc_0x32C:
	  lfs       f0, 0x18(r30)
	  lfs       f1, 0x14(r30)
	  fneg      f2, f0
	  bl        0x19964
	  fmr       f0, f1
	  fmr       f1, f31
	  fneg      f2, f30
	  fmr       f30, f0
	  bl        0x19950
	  lfs       f0, 0x1B94(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x364
	  lfs       f0, 0x1BC8(r2)
	  fadds     f30, f30, f0

	.loc_0x364:
	  lfs       f0, 0x1B94(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x378
	  lfs       f0, 0x1BC8(r2)
	  fadds     f1, f1, f0

	.loc_0x378:
	  fcmpo     cr0, f30, f1
	  bge-      .loc_0x39C
	  fsubs     f2, f1, f30
	  lfs       f0, 0x1BF4(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x3B4
	  lfs       f0, 0x1BC8(r2)
	  fadds     f30, f30, f0
	  b         .loc_0x3B4

	.loc_0x39C:
	  fsubs     f2, f30, f1
	  lfs       f0, 0x1BF4(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x3B4
	  lfs       f0, 0x1BC8(r2)
	  fadds     f1, f1, f0

	.loc_0x3B4:
	  lis       r3, 0x8051
	  lfs       f2, 0x1B90(r2)
	  addi      r3, r3, 0x4058
	  lfs       f0, 0x1BBC(r2)
	  lfs       f3, 0x44(r3)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fmadds    f31, f30, f3, f1
	  fsubs     f1, f31, f30
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3EC
	  lfs       f0, 0x1BA4(r2)
	  fsubs     f31, f30, f0
	  b         .loc_0x3FC

	.loc_0x3EC:
	  lfs       f0, 0x1BA4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3FC
	  fadds     f31, f0, f30

	.loc_0x3FC:
	  fmr       f1, f31
	  bl        0x19858
	  fneg      f30, f1
	  fmr       f1, f31
	  bl        0x197E4
	  stfs      f1, 0x14(r30)
	  stfs      f30, 0x18(r30)

	.loc_0x418:
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x458
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x4(r29)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x458:
	*/
}

/*
 * --INFO--
 * Address:	803F7F98
 * Size:	00012C
 */
void WorldMap::OnyonDynamics::update(kh::Screen::WorldMap*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stfd     f31, 0x10(r1)
psq_st   f31, 24(r1), 0, qr0
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x48(r4)
lis      r5, 0x434B4554@ha
lis      r4, 0x004E524F@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x434B4554@l
addi     r5, r4, 0x004E524F@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lha      r0, 0x30(r31)
lis      r4, sincosTable___5JMath@ha
lfs      f31, 0xcc(r3)
addi     r4, r4, sincosTable___5JMath@l
rlwinm   r0, r0, 0x1e, 0x12, 0x1c
lfs      f1, lbl_8051FF78@sda21(r2)
lfsx     f0, r4, r0
lwz      r3, 0(r31)
fmuls    f1, f1, f0
lfs      f0, 4(r31)
lfs      f2, 8(r31)
fmadds   f0, f31, f1, f0
stfs     f0, 0xd4(r3)
stfs     f2, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f1, 0x14(r31)
lis      r3, atanTable___5JMath@ha
lfs      f0, 0x18(r31)
addi     r3, r3, atanTable___5JMath@l
fneg     f1, f1
fneg     f2, f0
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
lfs      f0, lbl_8051FF34@sda21(r2)
lwz      r3, 0(r31)
fmuls    f0, f1, f0
stfs     f0, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0(r31)
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0(r31)
fmr      f1, f31
lfs      f2, lbl_8051FEF4@sda21(r2)
lfs      f4, 0x9c(r3)
lfs      f3, 0x8c(r3)
lfs      f0, lbl_8051FEF0@sda21(r2)
stfs     f3, 0x20(r31)
stfs     f4, 0x24(r31)
stfs     f2, 0x28(r31)
stfs     f0, 0x2c(r31)
lwz      r3, 0x1c(r31)
bl       setGlobalParticleScale__Q35efx2d8WorldMap12T2DOnyonKiraFf
psq_l    f31, 24(r1), 0, qr0
lwz      r0, 0x24(r1)
lfd      f31, 0x10(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803F80C4
 * Size:	000030
 */
void WorldMap::OnyonDynamics::kill()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwz      r3, 0x1c(r3)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace Screen
} // namespace kh

/*
 * @reified
 * --INFO--
 * Address:	803F80F4
 * Size:	00000C
 */
// void efx2d::WorldMap::ArgDirScale::getName()
// {
// 	/*
// 	lis      r3, lbl_80498348@ha
// 	addi     r3, r3, lbl_80498348@l
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	803F8100
 * Size:	00009C
 */
efx2d::WorldMap::T2DShstar1::~T2DShstar1()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803F8180
	lis      r3, __vt__Q35efx2d8WorldMap10T2DShstar1@ha
	addi     r3, r3, __vt__Q35efx2d8WorldMap10T2DShstar1@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_803F8170
	lis      r3, __vt__Q25efx2d9TChasePos@ha
	addi     r3, r3, __vt__Q25efx2d9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_803F8170
	lis      r4, __vt__Q25efx2d8TForever@ha
	addi     r3, r30, 8
	addi     r5, r4, __vt__Q25efx2d8TForever@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x18
	stw      r0, 8(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_803F8170:
	extsh.   r0, r31
	ble      lbl_803F8180
	mr       r3, r30
	bl       __dl__FPv

lbl_803F8180:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803F819C
 * Size:	00009C
 */
efx2d::WorldMap::T2DMapFlare::~T2DMapFlare()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803F821C
	lis      r3, __vt__Q35efx2d8WorldMap11T2DMapFlare@ha
	addi     r3, r3, __vt__Q35efx2d8WorldMap11T2DMapFlare@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_803F820C
	lis      r3, __vt__Q25efx2d9TChasePos@ha
	addi     r3, r3, __vt__Q25efx2d9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_803F820C
	lis      r4, __vt__Q25efx2d8TForever@ha
	addi     r3, r30, 8
	addi     r5, r4, __vt__Q25efx2d8TForever@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x18
	stw      r0, 8(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_803F820C:
	extsh.   r0, r31
	ble      lbl_803F821C
	mr       r3, r30
	bl       __dl__FPv

lbl_803F821C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803F8238
 * Size:	00009C
 */
efx2d::WorldMap::T2DRocketGlow::~T2DRocketGlow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803F82B8
	lis      r3, __vt__Q35efx2d8WorldMap13T2DRocketGlow@ha
	addi     r3, r3, __vt__Q35efx2d8WorldMap13T2DRocketGlow@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_803F82A8
	lis      r3, __vt__Q25efx2d12TChasePosDir@ha
	addi     r3, r3, __vt__Q25efx2d12TChasePosDir@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x18
	stw      r0, 8(r30)
	beq      lbl_803F82A8
	lis      r4, __vt__Q25efx2d8TForever@ha
	addi     r3, r30, 8
	addi     r5, r4, __vt__Q25efx2d8TForever@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x18
	stw      r0, 8(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_803F82A8:
	extsh.   r0, r31
	ble      lbl_803F82B8
	mr       r3, r30
	bl       __dl__FPv

lbl_803F82B8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace kh {

namespace Screen {

/*
 * --INFO--
 * Address:	803F82D4
 * Size:	000070
 */
WorldMap::~WorldMap()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803F8328
lis      r4, __vt__Q32kh6Screen8WorldMap@ha
addi     r0, r4, __vt__Q32kh6Screen8WorldMap@l
stw      r0, 0(r30)
beq      lbl_803F8318
lis      r5, __vt__Q34Game8WorldMap4Base@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game8WorldMap4Base@l
stw      r0, 0(r30)
bl       __dt__11JKRDisposerFv

lbl_803F8318:
extsh.   r0, r31
ble      lbl_803F8328
mr       r3, r30
bl       __dl__FPv

lbl_803F8328:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

namespace Game {

} // namespace Game

} // namespace Screen

/*
 * --INFO--
 * Address:	803F8344
 * Size:	000004
 */
void WorldMap::Base::draw(Graphics&) { }

} // namespace kh

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	803F8348
 * Size:	000090
 */
khUtilColorAnmWM::~khUtilColorAnmWM()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803F83BC
lis      r4, __vt__Q32kh6Screen16khUtilColorAnmWM@ha
addi     r0, r4, __vt__Q32kh6Screen16khUtilColorAnmWM@l
stw      r0, 0(r30)
beq      lbl_803F83AC
lis      r4, __vt__Q32kh6Screen14khUtilColorAnm@ha
addi     r0, r4, __vt__Q32kh6Screen14khUtilColorAnm@l
stw      r0, 0(r30)
beq      lbl_803F83AC
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803F83AC
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803F83AC:
extsh.   r0, r31
ble      lbl_803F83BC
mr       r3, r30
bl       __dl__FPv

lbl_803F83BC:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F83D8
 * Size:	0000AC
 */
khUtilFadePaneWM::~khUtilFadePaneWM()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803F8468
lis      r3, __vt__Q32kh6Screen16khUtilFadePaneWM@ha
addi     r0, r3, __vt__Q32kh6Screen16khUtilFadePaneWM@l
stw      r0, 0(r30)
beq      lbl_803F8458
lis      r3, __vt__Q32kh6Screen14khUtilFadePane@ha
addic.   r0, r30, 0x1c
addi     r0, r3, __vt__Q32kh6Screen14khUtilFadePane@l
stw      r0, 0(r30)
beq      lbl_803F8428
lis      r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
addi     r0, r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
stw      r0, 0x1c(r30)

lbl_803F8428:
cmplwi   r30, 0
beq      lbl_803F8458
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803F8458
lis      r4, __vt__Q29P2DScreen4Node@ha
mr       r3, r30
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803F8458:
extsh.   r0, r31
ble      lbl_803F8468
mr       r3, r30
bl       __dl__FPv

lbl_803F8468:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F8484
 * Size:	000004
 */
void khUtilFadePane::fadein_finish() { }

/*
 * --INFO--
 * Address:	803F8488
 * Size:	000048
 */
khUtilFadePane::khPaneNode::~khPaneNode()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
or.      r31, r3, r3
beq      lbl_803F84B8
lis      r5, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
extsh.   r0, r4
addi     r0, r5, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
stw      r0, 0(r31)
ble      lbl_803F84B8
bl       __dl__FPv

lbl_803F84B8:
lwz      r0, 0x14(r1)
mr       r3, r31
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace Screen
} // namespace kh

/*
 * --INFO--
 * Address:	803F84D0
 * Size:	0001A8
 */
void __sinit_khWorldMap_cpp(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stfd     f28, 0x10(r1)
	psq_st   f28, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lis      r4, msVal__Q32kh6Screen8WorldMap@ha
	lis      r3, "__ct__Q29JGeometry8TVec2<f>Fv"@ha
	addi     r4, r4, msVal__Q32kh6Screen8WorldMap@l
	li       r5, 0
	addi     r31, r4, 0x50
	li       r6, 8
	addi     r4, r3, "__ct__Q29JGeometry8TVec2<f>Fv"@l
	li       r7, 2
	mr       r3, r31
	bl       __construct_array
	lis      r3, msVal__Q32kh6Screen8WorldMap@ha
	lfs      f1, lbl_8051FEF4@sda21(r2)
	addi     r8, r3, msVal__Q32kh6Screen8WorldMap@l
	li       r9, -1
	lfs      f11, lbl_8051FF94@sda21(r2)
	li       r0, 8
	lfs      f31, lbl_8051FF88@sda21(r2)
	li       r7, 0xff
	stw      r9, 0x6c(r8)
	li       r6, 0x40
	lfs      f5, lbl_8051FF08@sda21(r2)
	li       r5, 0x80
	stw      r9, 0x70(r8)
	li       r4, 0x20
	lfs      f0, lbl_8051FF74@sda21(r2)
	li       r3, 0x8c
	stw      r9, 0x74(r8)
	lfs      f28, lbl_8051FF7C@sda21(r2)
	lfs      f29, lbl_8051FF80@sda21(r2)
	lfs      f30, lbl_8051FF84@sda21(r2)
	lfs      f13, lbl_8051FF8C@sda21(r2)
	lfs      f12, lbl_8051FF90@sda21(r2)
	lfs      f10, lbl_8051FEF0@sda21(r2)
	lfs      f9, lbl_8051FF98@sda21(r2)
	lfs      f8, lbl_8051FF9C@sda21(r2)
	lfs      f7, lbl_8051FF14@sda21(r2)
	lfs      f6, lbl_8051FF60@sda21(r2)
	lfs      f4, lbl_8051FF2C@sda21(r2)
	lfs      f3, lbl_8051FFA0@sda21(r2)
	lfs      f2, lbl_8051FFA4@sda21(r2)
	stfs     f28, 0(r8)
	stfs     f29, 4(r8)
	stfs     f30, 8(r8)
	stfs     f31, 0xc(r8)
	stfs     f13, 0x10(r8)
	stfs     f31, 0x14(r8)
	stfs     f12, 0x18(r8)
	stfs     f11, 0x1c(r8)
	stfs     f10, 0x20(r8)
	stfs     f9, 0x24(r8)
	stfs     f11, 0x28(r8)
	stfs     f11, 0x2c(r8)
	stfs     f8, 0x30(r8)
	stfs     f11, 0x34(r8)
	stfs     f7, 0x38(r8)
	stfs     f6, 0x3c(r8)
	stfs     f5, 0x40(r8)
	stfs     f4, 0x44(r8)
	stfs     f3, 0x48(r8)
	stfs     f2, 0x4c(r8)
	stfs     f1, 0(r31)
	stfs     f1, 0x54(r8)
	stfs     f1, 0x58(r8)
	stfs     f1, 0x5c(r8)
	stfs     f5, 0x60(r8)
	stfs     f0, 0x64(r8)
	stfs     f0, 0x68(r8)
	stb      r7, 0x6c(r8)
	stb      r7, 0x6d(r8)
	stb      r6, 0x6e(r8)
	stb      r7, 0x6f(r8)
	stb      r7, 0x70(r8)
	stb      r5, 0x71(r8)
	stb      r4, 0x72(r8)
	stb      r7, 0x73(r8)
	stb      r7, 0x74(r8)
	stb      r7, 0x75(r8)
	stb      r5, 0x76(r8)
	stb      r3, 0x77(r8)
	stb      r0, 0x78(r8)
	stb      r0, 0x79(r8)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	psq_l    f28, 24(r1), 0, qr0
	lfd      f28, 0x10(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803F8678
 * Size:	000004
 */
void JGeometry::TVec2<float>::TVec2() { }

/*
 * --INFO--
 * Address:	803F867C
 * Size:	000008
 */
efx2d::WorldMap::T2DRocketGlow::@8 @~T2DRocketGlow()
{
	/*
	addi     r3, r3, -8
	b        __dt__Q35efx2d8WorldMap13T2DRocketGlowFv
	*/
}

/*
 * --INFO--
 * Address:	803F8684
 * Size:	000008
 */
efx2d::WorldMap::T2DMapFlare::@8 @~T2DMapFlare()
{
	/*
	addi     r3, r3, -8
	b        __dt__Q35efx2d8WorldMap11T2DMapFlareFv
	*/
}

/*
 * --INFO--
 * Address:	803F868C
 * Size:	000008
 */
efx2d::WorldMap::T2DShstar1::@8 @~T2DShstar1()
{
	/*
	addi     r3, r3, -8
	b        __dt__Q35efx2d8WorldMap10T2DShstar1Fv
	*/
}
