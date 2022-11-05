#include "CarryInfo.h"
#include "Controller.h"
#include "Dolphin/dvd.h"
#include "Dolphin/stl.h"
#include "DvdThreadCommand.h"
#include "Game/BaseGameSection.h"
#include "Game/BaseHIO.h"
#include "Game/CameraMgr.h"
#include "Game/TimeMgr.h"
#include "Game/gameGenerator.h"
#include "Game/gameGeneratorCache.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "Game/GameSystem.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/rumble.h"
#include "Game/shadowMgr.h"
#include "Graphics.h"
#include "IDelegate.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTXfb.h"
#include "LifeGaugeMgr.h"
#include "Screen/Game2DMgr.h"
#include "og/Screen/ogScreen.h"
#include "System.h"
#include "stream.h"
#include "types.h"
#include "wipe.h"
#include "nans.h"
#include "SysTimers.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_baseGameSection_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C948
    lbl_8047C948:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x62617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E00
    .global lbl_8047C964
    lbl_8047C964:
        .4byte 0x62617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E2E
        .4byte 0x63707000
    .global lbl_8047C978
    lbl_8047C978:
        .4byte 0x825189F1
        .4byte 0x82CD96B3
        .4byte 0x979D8297
        .4byte 0x0A000000
    .global lbl_8047C988
    lbl_8047C988:
        .4byte 0x75736553
        .4byte 0x70656369
        .4byte 0x66696346
        .4byte 0x42546578
        .4byte 0x74757265
        .4byte 0x2082B582
        .4byte 0xC482C882
        .4byte 0xA282970A
        .4byte 0x00000000
    .global lbl_8047C9AC
    lbl_8047C9AC:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
    .global lbl_8047C9B8
    lbl_8047C9B8:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047C9C4
    lbl_8047C9C4:
        .4byte 0x77616974
        .4byte 0x53796E63
        .4byte 0x4C6F6164
        .4byte 0x00000000
        .4byte 0x4247533A
        .4byte 0x3A696E69
        .4byte 0x74000000
        .4byte 0x68656170
        .4byte 0x53746174
        .4byte 0x75730000
        .4byte 0x62617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E3A
        .4byte 0x3A696E69
        .4byte 0x74000000
        .4byte 0x42617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E3A
        .4byte 0x3A696E69
        .4byte 0x7448494F
        .4byte 0x00000000
        .4byte 0x42617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E3A
        .4byte 0x3A4D6F76
        .4byte 0x6965506C
        .4byte 0x61796572
        .4byte 0x00000000
        .4byte 0x42617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E3A
        .4byte 0x3A496E69
        .4byte 0x744A3344
        .4byte 0x00000000
        .4byte 0x42617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E3A
        .4byte 0x3A426566
        .4byte 0x6F726520
        .4byte 0x32440000
        .4byte 0x42617365
        .4byte 0x47616D65
        .4byte 0x53656374
        .4byte 0x696F6E3A
        .4byte 0x3A47616D
        .4byte 0x6532444D
        .4byte 0x67720000
    .global lbl_8047CA94
    lbl_8047CA94:
        .4byte 0x70617274
        .4byte 0x69636C65
        .4byte 0x00000000
    .global lbl_8047CAA0
    lbl_8047CAA0:
        .4byte 0x5F647261
        .4byte 0x7733445F
        .4byte 0x00000000
        .4byte 0x6E6F726D
        .4byte 0x616C2D66
        .4byte 0x6F676F66
        .4byte 0x66000000
        .4byte 0x706F7374
        .4byte 0x73686164
        .4byte 0x6F770000
        .4byte 0x6F626A65
        .4byte 0x63746C61
        .4byte 0x73740000
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x72284465
        .4byte 0x6661756C
        .4byte 0x74290000
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x7228496E
        .4byte 0x69742900
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x72284C69
        .4byte 0x6D697429
        .4byte 0x00000000
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x72289041
        .4byte 0x95A82900
        .4byte 0x47656E65
        .4byte 0x7261746F
        .4byte 0x72284441
        .4byte 0x59290000
        .4byte 0x25732F64
        .4byte 0x65666175
        .4byte 0x6C746765
        .4byte 0x6E2E7478
        .4byte 0x74000000
        .4byte 0x2F25732F
        .4byte 0x706C616E
        .4byte 0x74736765
        .4byte 0x6E2E7478
        .4byte 0x74000000
        .4byte 0x25732F69
        .4byte 0x6E697467
        .4byte 0x656E2E74
        .4byte 0x78740000
        .4byte 0x25732F6E
        .4byte 0x6F6E6C6F
        .4byte 0x6F702F25
        .4byte 0x73000000
        .4byte 0x25732F6C
        .4byte 0x6F6F702F
        .4byte 0x25730000
        .4byte 0x25732F64
        .4byte 0x61792F25
        .4byte 0x642E7478
        .4byte 0x74000000
        .4byte 0x4B455348
        .4byte 0x494D4153
        .4byte 0x55210A00
        .4byte 0x6E6F2064
        .4byte 0x656D6F6D
        .4byte 0x61747269
        .4byte 0x780A0000
        .4byte 0x6C6F7569
        .4byte 0x65206E75
        .4byte 0x6C6C0000
        .4byte 0x7830355F
        .4byte 0x6C6F7569
        .4byte 0x65737461
        .4byte 0x72740000
    .global lbl_8047CBC8
    lbl_8047CBC8:
        .4byte 0x8351815B
        .4byte 0x83808389
        .4byte 0x83438367
        .4byte 0x837D836C
        .4byte 0x815B8357
        .4byte 0x83830000
        .4byte 0x444F4E27
        .4byte 0x54205553
        .4byte 0x45205448
        .4byte 0x49532021
        .4byte 0x0A000000
        .4byte 0x8E6782C1
        .4byte 0x82C482C8
        .4byte 0x82A282A9
        .4byte 0x82E00A00
    .global lbl_8047CC04
    lbl_8047CC04:
        .4byte 0x67616D65
        .4byte 0x5379732D
        .4byte 0x64610000
    .global lbl_8047CC10
    lbl_8047CC10:
        .4byte 0x454E542D
        .4byte 0x47535953
        .4byte 0x00000000
    .global lbl_8047CC1C
    lbl_8047CC1C:
        .4byte 0x454E542D
        .4byte 0x52455354
        .4byte 0x00000000
        .4byte 0x73657475
        .4byte 0x70466978
        .4byte 0x4D656D6F
        .4byte 0x72790000
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6D
        .4byte 0x697A752E
        .4byte 0x62746900
        .4byte 0x66625465
        .4byte 0x78747572
        .4byte 0x65000000
        .4byte 0x75736572
        .4byte 0x2F456269
        .4byte 0x73617761
        .4byte 0x2F656666
        .4byte 0x6563742F
        .4byte 0x67616D65
        .4byte 0x2E6A7063
        .4byte 0x00000000
        .4byte 0x75736572
        .4byte 0x2F456269
        .4byte 0x73617761
        .4byte 0x2F656666
        .4byte 0x6563742F
        .4byte 0x65666632
        .4byte 0x645F6761
        .4byte 0x6D653264
        .4byte 0x2E6A7063
        .4byte 0x00000000
        .4byte 0x6E617669
        .4byte 0x2D70696B
        .4byte 0x69000000
        .4byte 0x616C6C6F
        .4byte 0x63617469
        .4byte 0x6F6E2064
        .4byte 0x616D6563
        .4byte 0x6B210A25
        .4byte 0x642F2564
        .4byte 0x00000000
        .4byte 0x5053436F
        .4byte 0x6D6D6F6E
        .4byte 0x2E680000
        .4byte 0x73657475
        .4byte 0x70466C6F
        .4byte 0x61744D65
        .4byte 0x6D6F7279
        .4byte 0x00000000
        .4byte 0x50696B6D
        .4byte 0x696E2D50
        .4byte 0x696B6943
        .4byte 0x6C617373
        .4byte 0x00000000
        .4byte 0x75736572
        .4byte 0x2F4D756B
        .4byte 0x6B692F6D
        .4byte 0x6170756E
        .4byte 0x6974732F
        .4byte 0x63617665
        .4byte 0x696E666F
        .4byte 0x2F257300
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F76732F
        .4byte 0x25730000
        .4byte 0x506C6174
        .4byte 0x43656C6C
        .4byte 0x4D677200
        .4byte 0x4D617052
        .4byte 0x6F6F6D43
        .4byte 0x656C6C4D
        .4byte 0x67720000
        .4byte 0x3C666C6F
        .4byte 0x61743E20
        .4byte 0x446F6E65
        .4byte 0x0A000000
    .global lbl_8047CD58
    lbl_8047CD58:
        .4byte 0x63617665
        .4byte 0x696E666F
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
    .global lbl_8047CD88
    lbl_8047CD88:
        .4byte 0x23202564
        .4byte 0x2F25640D
        .4byte 0x0A000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B0C70
    lbl_804B0C70:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global UfoMenuResult__Q22og6Screen
    UfoMenuResult__Q22og6Screen:
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
        .4byte 0x00000000
    .global lbl_804B0C8C
    lbl_804B0C8C:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte "onKanteiDone__Q24Game15BaseGameSectionFR7Rect<f>"
    .global lbl_804B0C98
    lbl_804B0C98:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte
   onCameraBlendFinished__Q24Game15BaseGameSectionFPQ24Game9CameraArg .4byte
   0x00000000 .4byte 0xFFFFFFFF .4byte
   dvdloadGameSystem__Q24Game15BaseGameSectionFv .4byte 0x00000000 .4byte
   0xFFFFFFFF .4byte
   movieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl .4byte
   0x00000000 .4byte 0x000000B0 .4byte 0x00000000 .global lbl_804B0CC8
    lbl_804B0CC8:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte "changeGeneratorCursor__Q24Game15BaseGameSectionFR10Vector3<f>"
    .global lbl_804B0CD4
    lbl_804B0CD4:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte setupFixMemory_dvdload__Q24Game15BaseGameSectionFv
    .global "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"
    "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>Fv"
    .global __vt__15ModelEffectData
    __vt__15ModelEffectData:
        .4byte 0
        .4byte 0
        .4byte __dt__15ModelEffectDataFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__10Controller
    __vt__10Controller:
        .4byte 0
        .4byte 0
        .4byte __dt__10ControllerFv
    .global __vt__27PikiCond_ExceptChappyPikmin
    __vt__27PikiCond_ExceptChappyPikmin:
        .4byte 0
        .4byte 0
        .4byte satisfy__27PikiCond_ExceptChappyPikminFPQ24Game4Piki
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q26PikiAI19ActFormationInitArg
    __vt__Q26PikiAI19ActFormationInitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI17CreatureActionArgFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"
    "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>FR10Vector3<f>"
    .global "__vt__25IDelegate1<R10Vector3<f>>"
    "__vt__25IDelegate1<R10Vector3<f>>":
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global "__vt__17Container<5Plane>"
    "__vt__17Container<5Plane>":
        .4byte 0
        .4byte 0
        .4byte "__dt__17Container<5Plane>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__17Container<5Plane>Fi"
        .4byte "getTo__17Container<5Plane>Fv"
    .global "__vt__22ArrayContainer<5Plane>"
    "__vt__22ArrayContainer<5Plane>":
        .4byte 0
        .4byte 0
        .4byte "__dt__22ArrayContainer<5Plane>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte "writeObject__22ArrayContainer<5Plane>FR6StreamR5Plane"
        .4byte "readObject__22ArrayContainer<5Plane>FR6StreamR5Plane"
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
    .global __vt__9CullPlane
    __vt__9CullPlane:
        .4byte 0
        .4byte 0
        .4byte __dt__9CullPlaneFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte writeObject__9CullPlaneFR6StreamR5Plane
        .4byte readObject__9CullPlaneFR6StreamR5Plane
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
    .global
   "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"
    "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>FPQ24Game11MovieConfigUlUl"
    .global "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"
    "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global "__vt__34Delegate<Q24Game15BaseGameSection>"
    "__vt__34Delegate<Q24Game15BaseGameSection>":
        .4byte 0
        .4byte 0
        .4byte "invoke__34Delegate<Q24Game15BaseGameSection>Fv"
    .global __vt__9IDelegate
    __vt__9IDelegate:
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game15BaseGameSection
    __vt__Q24Game15BaseGameSection:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game15BaseGameSectionFv
        .4byte run__7SectionFv
        .4byte update__7SectionFv
        .4byte draw__7SectionFR8Graphics
        .4byte init__Q24Game15BaseGameSectionFv
        .4byte drawInit__7SectionFR8Graphics
        .4byte
   drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode .4byte
   doExit__7SectionFv .4byte forceFinish__Q24Game15BaseGameSectionFv .4byte
   forceReset__7SectionFv .4byte getCurrentSection__7SectionFv .4byte
   doLoadingStart__7SectionFv .4byte doLoading__7SectionFv .4byte
   doUpdate__Q24Game15BaseGameSectionFv .4byte
   doDraw__Q24Game15BaseGameSectionFR8Graphics .4byte isFinishable__7SectionFv
        .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
        .4byte refreshHIO__Q24Game14BaseHIOSectionFv
        .4byte sendMessage__Q24Game15BaseGameSectionFRQ24Game11GameMessage
        .4byte pre2dDraw__Q24Game15BaseGameSectionFR8Graphics
        .4byte getCurrFloor__Q24Game15BaseGameSectionFv
        .4byte isDevelopSection__Q24Game15BaseGameSectionFv
        .4byte addChallengeScore__Q24Game15BaseGameSectionFi
        .4byte startMainBgm__Q24Game15BaseGameSectionFv
        .4byte section_fadeout__Q24Game15BaseGameSectionFv
        .4byte goNextFloor__Q24Game15BaseGameSectionFPQ34Game8ItemHole4Item
        .4byte goCave__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Item
        .4byte
   goMainMap__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4Item .4byte
   getCaveID__Q24Game15BaseGameSectionFv .4byte
   getCurrentCourseInfo__Q24Game15BaseGameSectionFv .4byte
   challengeDisablePelplant__Q24Game15BaseGameSectionFv .4byte
   getCaveFilename__Q24Game15BaseGameSectionFv .4byte
   getEditorFilename__Q24Game15BaseGameSectionFv .4byte
   getVsEditNumber__Q24Game15BaseGameSectionFv .4byte
   openContainerWindow__Q24Game15BaseGameSectionFv .4byte
   closeContainerWindow__Q24Game15BaseGameSectionFv .4byte
   playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature .4byte
   playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon .4byte
   playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki .4byte
   enableTimer__Q24Game15BaseGameSectionFfUl .4byte
   disableTimer__Q24Game15BaseGameSectionFUl .4byte
   getTimerType__Q24Game15BaseGameSectionFv .4byte
   onMovieStart__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieCommand__Q24Game15BaseGameSectionFi .4byte
   startFadeout__Q24Game15BaseGameSectionFf .4byte
   startFadein__Q24Game15BaseGameSectionFf .4byte
   startFadeoutin__Q24Game15BaseGameSectionFf .4byte
   startFadeblack__Q24Game15BaseGameSectionFv .4byte
   startFadewhite__Q24Game15BaseGameSectionFv .4byte
   gmOrimaDown__Q24Game15BaseGameSectionFi .4byte
   gmPikminZero__Q24Game15BaseGameSectionFv .4byte
   openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi .4byte
   openCaveMoreMenu__Q24Game15BaseGameSectionFPQ34Game8ItemHole4ItemP10Controller
        .4byte
   openKanketuMenu__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
        .4byte on_setCamController__Q24Game15BaseGameSectionFi
        .4byte onTogglePlayer__Q24Game15BaseGameSectionFv
        .4byte onPlayerJoin__Q24Game15BaseGameSectionFv
        .4byte onInit__Q24Game15BaseGameSectionFv
        .4byte onUpdate__Q24Game15BaseGameSectionFv
        .4byte initJ3D__Q24Game15BaseGameSectionFv
        .4byte initViewports__Q24Game15BaseGameSectionFR8Graphics
        .4byte initResources__Q24Game15BaseGameSectionFv
        .4byte initGenerators__Q24Game15BaseGameSectionFv
        .4byte initLights__Q24Game15BaseGameSectionFv
        .4byte draw3D__Q24Game15BaseGameSectionFR8Graphics
        .4byte draw2D__Q24Game15BaseGameSectionFR8Graphics
        .4byte drawParticle__Q24Game15BaseGameSectionFR8Graphicsi
        .4byte draw_Ogawa2D__Q24Game15BaseGameSectionFR8Graphics
        .4byte do_drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
        .4byte onSetupFloatMemory__Q24Game15BaseGameSectionFv
        .4byte postSetupFloatMemory__Q24Game15BaseGameSectionFv
        .4byte onSetSoundScene__Q24Game15BaseGameSectionFv
        .4byte onStartHeap__Q24Game15BaseGameSectionFv
        .4byte onClearHeap__Q24Game15BaseGameSectionFv
    .global "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"
    "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>FPQ24Game9CameraArg"
    .global "__vt__30IDelegate1<PQ24Game9CameraArg>"
    "__vt__30IDelegate1<PQ24Game9CameraArg>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"
    "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>FR7Rect<f>" .global
   "__vt__21IDelegate1<R7Rect<f>>"
    "__vt__21IDelegate1<R7Rect<f>>":
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sOptDraw__Q24Game15BaseGameSection
    sOptDraw__Q24Game15BaseGameSection:
        .4byte 0x03000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515928
    lbl_80515928:
        .skip 0x4
    .global lbl_8051592C
    lbl_8051592C:
        .skip 0x4
    .global cameraMgrCallback
    cameraMgrCallback:
        .skip 0x4
    .global theExpHeap
    theExpHeap:
        .skip 0x4
    .global col$4567
    col$4567:
        .skip 0x4
    .global init$4568
    init$4568:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518498
    lbl_80518498:
        .4byte 0x00000000
    .global lbl_8051849C
    lbl_8051849C:
        .4byte 0x44180000
    .global lbl_805184A0
    lbl_805184A0:
        .4byte 0x43F00000
    .global lbl_805184A4
    lbl_805184A4:
        .float 1.0
    .global lbl_805184A8
    lbl_805184A8:
        .4byte 0x646F416E
        .4byte 0x696D0000
    .global lbl_805184B0
    lbl_805184B0:
        .4byte 0x454E5400
    .global lbl_805184B4
    lbl_805184B4:
        .4byte 0x454E542D
        .4byte 0x41000000
    .global lbl_805184BC
    lbl_805184BC:
        .4byte 0x454E542D
        .4byte 0x42000000
    .global lbl_805184C4
    lbl_805184C4:
        .4byte 0x646F5369
        .4byte 0x6D000000
    .global lbl_805184CC
    lbl_805184CC:
        .4byte 0x636F6C6C
        .4byte 0x00000000
    .global lbl_805184D4
    lbl_805184D4:
        .4byte 0x32640000
    .global lbl_805184D8
    lbl_805184D8:
        .4byte 0x4F504100
    .global lbl_805184DC
    lbl_805184DC:
        .4byte 0x6E6F6E61
        .4byte 0x6D650000
    .global lbl_805184E4
    lbl_805184E4:
        .4byte 0x6E6F726D
        .4byte 0x616C0000
    .global lbl_805184EC
    lbl_805184EC:
        .4byte 0x6D617000
    .global lbl_805184F0
    lbl_805184F0:
        .4byte 0x70696B69
        .4byte 0x00000000
    .global lbl_805184F8
    lbl_805184F8:
        .4byte 0x706F7374
        .4byte 0x00000000
    .global lbl_80518500
    lbl_80518500:
        .4byte 0x66697273
        .4byte 0x74000000
    .global lbl_80518508
    lbl_80518508:
        .4byte 0x6661726D
        .4byte 0x00000000
    .global lbl_80518510
    lbl_80518510:
        .4byte 0x584C5500
    .global lbl_80518514
    lbl_80518514:
        .4byte 0x706F796F
        .4byte 0x31000000
    .global lbl_8051851C
    lbl_8051851C:
        .4byte 0x42A00000
    .global lbl_80518520
    lbl_80518520:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80518528
    lbl_80518528:
        .4byte 0xC2200000
    .global lbl_8051852C
    lbl_8051852C:
        .4byte 0x40000000
    .global lbl_80518530
    lbl_80518530:
        .4byte 0x41080000
    .global lbl_80518534
    lbl_80518534:
        .4byte 0xC090D4FE
    .global lbl_80518538
    lbl_80518538:
        .4byte 0x40EE7EFA
    .global lbl_8051853C
    lbl_8051853C:
        .4byte 0xC2700000
    .global lbl_80518540
    lbl_80518540:
        .4byte 0xC1200000
    .global lbl_80518544
    lbl_80518544:
        .4byte 0x4190A7F0
    .global lbl_80518548
    lbl_80518548:
        .4byte 0xC137B646
    .global lbl_8051854C
    lbl_8051854C:
        .float 0.5
    .global lbl_80518550
    lbl_80518550:
        .4byte 0x47000000
    .global lbl_80518554
    lbl_80518554:
        .4byte 0xC7000000
    .global lbl_80518558
    lbl_80518558:
        .4byte 0x40C90FDB
    .global lbl_8051855C
    lbl_8051855C:
        .4byte 0x42480000
    .global lbl_80518560
    lbl_80518560:
        .4byte 0x43A2F983
    .global lbl_80518564
    lbl_80518564:
        .4byte 0xC3A2F983
    .global lbl_80518568
    lbl_80518568:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518570
    lbl_80518570:
        .4byte 0x32646472
        .4byte 0x61770000
    .global lbl_80518578
    lbl_80518578:
        .4byte 0x3E4CCCCD
    .global lbl_8051857C
    lbl_8051857C:
        .4byte 0x4479C000
    .global lbl_80518580
    lbl_80518580:
        .4byte 0x6974656D
        .4byte 0x4D677200
    .global lbl_80518588
    lbl_80518588:
        .4byte 0x72616E64
        .4byte 0x6F6D0000
    .global lbl_80518590
    lbl_80518590:
        .4byte 0x6D61704D
        .4byte 0x67720000
    .global lbl_80518598
    lbl_80518598:
        .4byte 0x43656C6C
        .4byte 0x4D677200
    .global lbl_805185A0
    lbl_805185A0:
        .4byte 0x4B435000
    .global lbl_805185A4
    lbl_805185A4:
        .4byte 0xCB435000
    .global lbl_805185A8
    lbl_805185A8:
        .4byte 0x43000000
    .global lbl_805185AC
    lbl_805185AC:
        .4byte 0x432A0000
    .global lbl_805185B0
    lbl_805185B0:
        .4byte 0x42D80000
    .global lbl_805185B4
    lbl_805185B4:
        .4byte 0x40490FDB
    .global lbl_805185B8
    lbl_805185B8:
        .4byte 0x3BB60B61
    .global lbl_805185BC
    lbl_805185BC:
        .4byte 0x0D0A0000

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
    .global lbl_80520E58
    lbl_80520E58:
        .skip 0x4
    .global lbl_80520E5C
    lbl_80520E5C:
        .skip 0x4
*/

static Delegate1<Game::BaseGameSection, Game::CameraArg*>* cameraMgrCallback;

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void setBlendPane(J2DBlendInfo, J2DScreen*, unsigned long long*)
{
	// UNUSED FUNCTION
}
} // namespace Screen
} // namespace og

namespace Game {

/*
 * --INFO--
 * Address:	8014ADA0
 * Size:	00021C
 */
BaseGameSection::BaseGameSection(JKRHeap* heap)
    : BaseHIOSection(heap)
    , m_dvdThreadCommand()
{
	m_xfbFlags = 0;
	setDisplay(JFWDisplay::createManager(nullptr, _1C, JUTXfb::DoubleBuffer, true), 1);
	m_playerMode         = 2;
	m_draw2DCreature     = nullptr;
	m_treasureZoomCamera = nullptr;
	m_kanteiDelegate     = new Delegate1<BaseGameSection, Rectf&>(this, &BaseGameSection::onKanteiDone);
	cameraMgrCallback    = new Delegate1<BaseGameSection, CameraArg*>(this, &BaseGameSection::onCameraBlendFinished);
	m_blendCamera        = nullptr;
	Game::cameraMgr      = nullptr;
	Game::rumbleMgr      = nullptr;
	Game::shadowMgr      = nullptr;
	lifeGaugeMgr         = nullptr;
	carryInfoMgr         = nullptr;
	m_lightMgr           = nullptr;
	m_splitter           = nullptr;
	m_theExpHeap         = nullptr;
	m_theExpHeap         = nullptr;
	_100                 = nullptr;
	_168                 = nullptr;
	m_fbTexture          = nullptr;
	m_xfbImage           = nullptr;
	m_xfbTexture1        = 0;
	m_xfbTexture2        = 0;
	_170                 = 0;
	m_texData1           = 0;
	_E0                  = 0;
	m_blackFader         = new BlackFader();
	m_wipeInFader        = new WipeInFader();
	m_wipeOutFader       = new WipeOutFader();
	m_wipeOutInFader     = new WipeOutInFader();
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
stw      r30, 0x28(r1)
bl       __ct__Q24Game14BaseHIOSectionFP7JKRHeap
lis      r4, __vt__Q24Game15BaseGameSection@ha
addi     r3, r31, 0x5c
addi     r0, r4, __vt__Q24Game15BaseGameSection@l
stw      r0, 0(r31)
bl       __ct__16DvdThreadCommandFv
li       r0, 0
li       r3, 0
stb      r0, 0x164(r31)
li       r5, 2
li       r6, 1
lwz      r4, 0x1c(r31)
bl
createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
mr       r4, r3
mr       r3, r31
li       r5, 1
bl       setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
li       r3, 2
li       r0, 0
stw      r3, 0x114(r31)
li       r3, 0x14
stw      r0, 0x13c(r31)
stw      r0, 0x14c(r31)
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_8014AE68
lis      r4, lbl_804B0C8C@ha
lis      r5, "__vt__21IDelegate1<R7Rect<f>>"@ha
addi     r8, r4, lbl_804B0C8C@l
lis      r4, "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"@ha
lwz      r7, 0(r8)
addi     r5, r5, "__vt__21IDelegate1<R7Rect<f>>"@l
lwz      r6, 4(r8)
addi     r0, r4, "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"@l
lwz      r4, 8(r8)
stw      r7, 0x14(r1)
stw      r5, 0(r3)
stw      r0, 0(r3)
stw      r31, 4(r3)
stw      r7, 8(r3)
stw      r6, 0xc(r3)
stw      r6, 0x18(r1)
stw      r4, 0x1c(r1)
stw      r4, 0x10(r3)

lbl_8014AE68:
stw      r3, 0x148(r31)
li       r3, 0x14
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_8014AEC4
lis      r4, lbl_804B0C98@ha
lis      r5, "__vt__30IDelegate1<PQ24Game9CameraArg>"@ha
addi     r8, r4, lbl_804B0C98@l
lis      r4,
"__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"@ha lwz      r7,
0(r8) addi     r5, r5, "__vt__30IDelegate1<PQ24Game9CameraArg>"@l lwz      r6,
4(r8) addi     r0, r4,
"__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"@l lwz      r4,
8(r8) stw      r7, 8(r1) stw      r5, 0(r3) stw      r0, 0(r3) stw      r31,
4(r3) stw      r7, 8(r3) stw      r6, 0xc(r3) stw      r6, 0xc(r1) stw      r4,
0x10(r1) stw      r4, 0x10(r3)

lbl_8014AEC4:
stw      r3, cameraMgrCallback@sda21(r13)
li       r0, 0
li       r3, 0x2c
stw      r0, 0x50(r31)
stw      r0, cameraMgr__4Game@sda21(r13)
stw      r0, rumbleMgr__4Game@sda21(r13)
stw      r0, shadowMgr__4Game@sda21(r13)
stw      r0, lifeGaugeMgr@sda21(r13)
stw      r0, carryInfoMgr@sda21(r13)
stw      r0, 0x128(r31)
stw      r0, 0x118(r31)
stw      r0, 0xfc(r31)
stw      r0, theExpHeap@sda21(r13)
stw      r0, 0x100(r31)
stw      r0, 0x168(r31)
stw      r0, 0x158(r31)
stw      r0, 0x154(r31)
stw      r0, 0x15c(r31)
stw      r0, 0x160(r31)
stw      r0, 0x170(r31)
stw      r0, 0x16c(r31)
stw      r0, 0xe0(r31)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8014AF30
bl       __ct__10BlackFaderFv
mr       r0, r3

lbl_8014AF30:
stw      r0, 0xd0(r31)
li       r3, 0x28
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8014AF4C
bl       __ct__11WipeInFaderFv
mr       r0, r3

lbl_8014AF4C:
stw      r0, 0xd4(r31)
li       r3, 0x28
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8014AF68
bl       __ct__12WipeOutFaderFv
mr       r0, r3

lbl_8014AF68:
stw      r0, 0xd8(r31)
li       r3, 0x78
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_8014AF9C
bl       __ct__8WipeBaseFv
lis      r4, __vt__14WipeOutInFader@ha
addi     r3, r30, 0x24
addi     r0, r4, __vt__14WipeOutInFader@l
stw      r0, 0(r30)
bl       __ct__12WipeOutFaderFv
addi     r3, r30, 0x4c
bl       __ct__11WipeInFaderFv

lbl_8014AF9C:
stw      r30, 0xdc(r31)
mr       r3, r31
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
lwz      r30, 0x28(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}
} // namespace Game

/**
 * @generated{__dt__11WipeInFaderFv}
 * @generated{__dt__12WipeOutFaderFv}
 * @generated{__dt__8WipeBaseFv}
 * @generatedAndInlined{__dt__16DvdThreadCommandFv}
 */

// /*
//  * --INFO--
//  * Address:	8014AFBC
//  * Size:	000070
//  */
// WipeInFader::~WipeInFader()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8014B010
// 	lis      r4, __vt__11WipeInFader@ha
// 	addi     r0, r4, __vt__11WipeInFader@l
// 	stw      r0, 0(r30)
// 	beq      lbl_8014B000
// 	lis      r5, __vt__8WipeBase@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__8WipeBase@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_8014B000:
// 	extsh.   r0, r31
// 	ble      lbl_8014B010
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8014B010:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8014B02C
//  * Size:	000070
//  */
// WipeOutFader::~WipeOutFader()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8014B080
// 	lis      r4, __vt__12WipeOutFader@ha
// 	addi     r0, r4, __vt__12WipeOutFader@l
// 	stw      r0, 0(r30)
// 	beq      lbl_8014B070
// 	lis      r5, __vt__8WipeBase@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__8WipeBase@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_8014B070:
// 	extsh.   r0, r31
// 	ble      lbl_8014B080
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8014B080:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8014B09C
//  * Size:	000060
//  */
// WipeBase::~WipeBase()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8014B0E0
// 	lis      r5, __vt__8WipeBase@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__8WipeBase@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv
// 	extsh.   r0, r31
// 	ble      lbl_8014B0E0
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8014B0E0:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000060
//  */
// DvdThreadCommand::~DvdThreadCommand()
// {
// 	// UNUSED FUNCTION
// }

namespace Game {

/*
 * --INFO--
 * Address:	8014B0FC
 * Size:	000074
 */
void BaseGameSection::useSpecificFBTexture(JUTTexture* texture)
{
	JUT_ASSERTLINE(1523, m_fbTexture == nullptr, "?¼’å›žã¯ç„¡ç??½—\n");
	m_fbTexture                    = m_xfbImage;
	m_xfbImage                     = texture;
	Game::gameSystem->m_xfbTexture = m_xfbImage;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x158(r3)
	cmplwi   r0, 0
	beq      lbl_8014B140
	lis      r3, lbl_8047C964@ha
	lis      r5, lbl_8047C978@ha
	addi     r3, r3, lbl_8047C964@l
	li       r4, 0x5f3
	addi     r5, r5, lbl_8047C978@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014B140:
	lwz      r0, 0x154(r30)
	stw      r0, 0x158(r30)
	stw      r31, 0x154(r30)
	lwz      r0, 0x154(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x54(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014B170
 * Size:	00006C
 */
void BaseGameSection::restoreFBTexture()
{
	JUT_ASSERTLINE(1533, m_fbTexture == nullptr, "useSpecificFBTexture ã—ã¦ãªã??½—\n");
	m_xfbImage                     = m_fbTexture;
	m_fbTexture                    = nullptr;
	Game::gameSystem->m_xfbTexture = m_xfbImage;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x158(r3)
	cmplwi   r0, 0
	bne      lbl_8014B1AC
	lis      r3, lbl_8047C964@ha
	lis      r5, lbl_8047C988@ha
	addi     r3, r3, lbl_8047C964@l
	li       r4, 0x5fd
	addi     r5, r5, lbl_8047C988@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014B1AC:
	lwz      r3, 0x158(r31)
	li       r0, 0
	stw      r3, 0x154(r31)
	stw      r0, 0x158(r31)
	lwz      r0, 0x154(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x54(r3)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014B1DC
 * Size:	000114
 */
BaseGameSection::~BaseGameSection(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r3, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	beq      lbl_8014B2D0
	lis      r4, __vt__Q24Game15BaseGameSection@ha
	li       r3, 0
	addi     r0, r4, __vt__Q24Game15BaseGameSection@l
	stw      r0, 0(r31)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	stw      r3, theExpHeap@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8014B23C
	lis      r3, lbl_8047C9AC@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C9AC@l
	li       r4, 0x1d3
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014B23C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8014B264
	lis      r3, lbl_8047C9AC@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C9AC@l
	li       r4, 0x1dc
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014B264:
	mr       r3, r30
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	bl       deleteInstance__14TParticle2dMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       deleteInstance_TPkEffectMgr__11ParticleMgrFv
	bl       deleteInstance__11ParticleMgrFv
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       clearGlobalPointers__Q24Game7ItemMgrFv
	li       r3, 0
	addic.   r0, r31, 0x5c
	stw      r3, mgr__Q24Game13PelletOtakara@sda21(r13)
	stw      r3, mgr__Q24Game11PelletFruit@sda21(r13)
	stw      r3, mgr__Q24Game10PelletItem@sda21(r13)
	stw      r3, mgr__Q24Game12PelletNumber@sda21(r13)
	stw      r3, mgr__Q24Game13PelletCarcass@sda21(r13)
	beq      lbl_8014B2B4
	addic.   r3, r31, 0xb8
	beq      lbl_8014B2B4
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8014B2B4:
	mr       r3, r31
	li       r4, 0
	bl       __dt__Q24Game14BaseHIOSectionFv
	extsh.   r0, r29
	ble      lbl_8014B2D0
	mr       r3, r31
	bl       __dl__FPv

lbl_8014B2D0:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	8014B2F0
 * Size:	000050
 */
void BaseGameSection::loadSync(IDelegate* delegate, bool p2)
{
	sys->dvdLoadUseCallBack(&m_dvdThreadCommand, delegate);
	waitSyncLoad(p2);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	mr       r5, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r4, r30, 0x5c
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	mr       r3, r30
	mr       r4, r31
	bl       waitSyncLoad__Q24Game15BaseGameSectionFb
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
 * Address:	8014B340
 * Size:	000120
 */
void BaseGameSection::waitSyncLoad(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, init$4568@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8014B37C
	li       r3, 0
	li       r0, 1
	stw      r3, col$4567@sda21(r13)
	stb      r0, init$4568@sda21(r13)

lbl_8014B37C:
	lwz      r4, col$4567@sda21(r13)
	mr       r3, r29
	addi     r0, r4, 1
	stw      r0, col$4567@sda21(r13)
	bl       endFrame__7SectionFv
	clrlwi.  r0, r30, 0x18
	bne      lbl_8014B3B0
	lis      r4, lbl_8047C9C4@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8047C9C4@l
	li       r6, 3
	li       r4, 1
	bl       setPause__Q24Game10GameSystemFbPci

lbl_8014B3B0:
	lis      r3, j3dSys@ha
	addi     r31, r3, j3dSys@l

lbl_8014B3B8:
	mr       r3, r29
	bl       beginFrame__7SectionFv
	mr       r3, r29
	bl       beginRender__7SectionFv
	mr       r3, r31
	bl       drawInit__6J3DSysFv
	lfs      f1, lbl_80518498@sda21(r2)
	lfs      f3, lbl_8051849C@sda21(r2)
	fmr      f2, f1
	lfs      f4, lbl_805184A0@sda21(r2)
	fmr      f5, f1
	lfs      f6, lbl_805184A4@sda21(r2)
	bl       GXSetViewport
	li       r3, 0
	li       r4, 0x10
	li       r5, 0x260
	li       r6, 0x1c0
	bl       GXSetScissor
	mr       r3, r29
	bl       endRender__7SectionFv
	lwz      r0, 0x74(r29)
	cmpwi    r0, 2
	bne      lbl_8014B438
	clrlwi.  r0, r30, 0x18
	bne      lbl_8014B444
	lis      r4, lbl_8047C9C4@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8047C9C4@l
	li       r6, 3
	li       r4, 0
	bl       setPause__Q24Game10GameSystemFbPci
	b        lbl_8014B444

lbl_8014B438:
	mr       r3, r29
	bl       endFrame__7SectionFv
	b        lbl_8014B3B8

lbl_8014B444:
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
 * Address:	8014B460
 * Size:	000050
 */
void BaseGameSection::dvdloadGameSystem(void)
{
	GameSystem* gs   = new GameSystem(this);
	Game::gameSystem = gs;
	gs->init();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x5c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014B490
	mr       r4, r31
	bl       __ct__Q24Game10GameSystemFPQ24Game15BaseGameSection
	mr       r0, r3

lbl_8014B490:
	stw      r0, gameSystem__4Game@sda21(r13)
	mr       r3, r0
	bl       init__Q24Game10GameSystemFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014B4B0
 * Size:	000390
 */
void BaseGameSection::init(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x64(r1)
	li       r0, 0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r3
	stw      r28, 0x50(r1)
	stb      r0, 0x164(r3)
	lis      r3, lbl_8047C948@ha
	addi     r31, r3, lbl_8047C948@l
	stw      r0, 0x48(r29)
	lis      r3, lbl_804B0C70@ha
	addi     r30, r3, lbl_804B0C70@l
	addi     r4, r31, 0x8c
	stw      r0, 0x13c(r29)
	addi     r3, r1, 0x10
	bl       __ct__Q26System20FragmentationCheckerFPcb
	addi     r3, r1, 8
	addi     r4, r31, 0x98
	li       r5, 0
	bl       __ct__Q26System20FragmentationCheckerFPcb
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0xa4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__Q26System20FragmentationCheckerFv
	lwz      r3, sys@sda21(r13)
	li       r4, 0x1e0
	bl       enableCPULockDetector__6SystemFi
	lis      r3, __vt__9IDelegate@ha
	lwz      r5, 0x34(r30)
	addi     r6, r3, __vt__9IDelegate@l
	lwz      r4, 0x38(r30)
	lwz      r0, 0x3c(r30)
	lis      r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@ha
	stw      r6, 0x30(r1)
	addi     r6, r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@l
	mr       r3, r29
	stw      r6, 0x30(r1)
	stw      r29, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r4, 0x3c(r1)
	stw      r0, 0x40(r1)
	bl       beginFrame__7SectionFv
	mr       r3, r29
	bl       beginRender__7SectionFv
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       drawInit__6J3DSysFv
	lfs      f1, lbl_80518498@sda21(r2)
	lfs      f3, lbl_8051849C@sda21(r2)
	fmr      f2, f1
	lfs      f4, lbl_805184A0@sda21(r2)
	fmr      f5, f1
	lfs      f6, lbl_805184A4@sda21(r2)
	bl       GXSetViewport
	li       r3, 0
	li       r4, 0x10
	li       r5, 0x260
	li       r6, 0x1c0
	bl       GXSetScissor
	lwz      r3, 0x2c(r29)
	lwzu     r12, 0xbc(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       endRender__7SectionFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r29, 0x5c
	addi     r5, r1, 0x30
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	lbz      r0, init$4568@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8014B600
	li       r3, 0
	li       r0, 1
	stw      r3, col$4567@sda21(r13)
	stb      r0, init$4568@sda21(r13)

lbl_8014B600:
	lwz      r4, col$4567@sda21(r13)
	mr       r3, r29
	addi     r0, r4, 1
	stw      r0, col$4567@sda21(r13)
	bl       endFrame__7SectionFv
	lis      r3, j3dSys@ha
	addi     r28, r3, j3dSys@l

lbl_8014B61C:
	mr       r3, r29
	bl       beginFrame__7SectionFv
	mr       r3, r29
	bl       beginRender__7SectionFv
	mr       r3, r28
	bl       drawInit__6J3DSysFv
	lfs      f1, lbl_80518498@sda21(r2)
	lfs      f3, lbl_8051849C@sda21(r2)
	fmr      f2, f1
	lfs      f4, lbl_805184A0@sda21(r2)
	fmr      f5, f1
	lfs      f6, lbl_805184A4@sda21(r2)
	bl       GXSetViewport
	li       r3, 0
	li       r4, 0x10
	li       r5, 0x260
	li       r6, 0x1c0
	bl       GXSetScissor
	mr       r3, r29
	bl       endRender__7SectionFv
	lwz      r0, 0x74(r29)
	cmpwi    r0, 2
	beq      lbl_8014B684
	mr       r3, r29
	bl       endFrame__7SectionFv
	b        lbl_8014B61C

lbl_8014B684:
	mr       r3, r29
	li       r4, 0
	bl       initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
	li       r3, 0x60
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014B6A8
	bl       __ct__Q213TreasureLight3MgrFv
	mr       r0, r3

lbl_8014B6A8:
	stw      r0, 0xf8(r29)
	addi     r3, r31, 0xbc
	bl       assert_fragmentation__6SystemFPc
	li       r3, 0x1f8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014B6CC
	bl       __ct__Q24Game11MoviePlayerFv
	mr       r0, r3

lbl_8014B6CC:
	stw      r0, moviePlayer__4Game@sda21(r13)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8014B720
	lwz      r8, 0x40(r30)
	lis      r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@ha
	lwz      r7, 0x44(r30)
	addi     r5, r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@l
	lwz      r6, 0x48(r30)
	lis      r4,
"__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@ha
	addi     r0, r4,
"__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@l stw
r8, 0x24(r1) stw      r5, 0(r3) stw      r0, 0(r3) stw      r29, 4(r3) stw r8,
8(r3) stw      r7, 0xc(r3) stw      r7, 0x28(r1) stw      r6, 0x2c(r1) stw r6,
0x10(r3)

lbl_8014B720:
	stw      r3, 0xc8(r29)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8014B774
	lwz      r8, 0x4c(r30)
	lis      r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@ha
	lwz      r7, 0x50(r30)
	addi     r5, r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@l
	lwz      r6, 0x54(r30)
	lis      r4,
"__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@ha
	addi     r0, r4,
"__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@l stw
r8, 0x18(r1) stw      r5, 0(r3) stw      r0, 0(r3) stw      r29, 4(r3) stw r8,
8(r3) stw      r7, 0xc(r3) stw      r7, 0x1c(r1) stw      r6, 0x20(r1) stw r6,
0x10(r3)

lbl_8014B774:
	stw      r3, 0xcc(r29)
	li       r4, 2
	lwz      r3, sys@sda21(r13)
	bl       setFrameRate__6SystemFi
	addi     r3, r31, 0xd8
	bl       assert_fragmentation__6SystemFPc
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xf8(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	li       r0, 0
	stb      r3, 0x11c(r29)
	addi     r3, r31, 0xf8
	stw      r0, mapMgr__4Game@sda21(r13)
	bl       assert_fragmentation__6SystemFPc
	addi     r3, r31, 0x114
	bl       assert_fragmentation__6SystemFPc
	bl       create__Q22og5Lib2DFv
	bl       create__Q26Screen9Game2DMgrFv
	lwz      r4, gGame2DMgr__6Screen@sda21(r13)
	li       r0, 1
	addi     r3, r31, 0x130
	lwz      r4, 0x18(r4)
	stb      r0, 0x90(r4)
	bl       assert_fragmentation__6SystemFPc
	li       r0, 0
	mr       r3, r29
	stw      r0, 0x160(r29)
	stw      r0, 0x15c(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0xf0(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0xa4
	bl       heapStatusEnd__6SystemFPc
	li       r0, 0
	addi     r3, r1, 0x10
	stw      r0, 0x134(r29)
	li       r4, -1
	bl       __dt__Q26System20FragmentationCheckerFv
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014B840
 * Size:	000004
 */
void BaseGameSection::onInit(void) { }

/*
 * --INFO--
 * Address:	8014B844
 * Size:	000034
 */
void BaseGameSection::drawInit(Graphics& gfx, Section::EDrawInitMode mode)
{
	if (mode == Two) {
		section_fadeout();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r5, 2
	stw      r0, 0x14(r1)
	bne      lbl_8014B868
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8014B868:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014B878
 * Size:	000004
 */
void BaseGameSection::section_fadeout(void) { }

/*
 * --INFO--
 * Address:	8014B87C
 * Size:	0003A8
 */
bool BaseGameSection::doUpdate()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r0, 0
	mr       r31, r3
	stw      r0, cullCount__Q28SysShape5Model@sda21(r13)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lbz      r0, 0x58(r31)
	cmplwi   r0, 0
	beq      lbl_8014B8D8
	mr       r3, r31
	bl       updateBlendCamera__Q24Game15BaseGameSectionFv

lbl_8014B8D8:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184A8@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r31
	bl       doAnimation__Q24Game15BaseGameSectionFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184A8@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184B0@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184B4@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r31
	bl       doEntry__Q24Game15BaseGameSectionFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184B4@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184BC@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014B97C
	bl       update__Q24Game9RumbleMgrFv

lbl_8014B97C:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014B98C
	bl       update__Q24Game9ShadowMgrFv

lbl_8014B98C:
	lwz      r3, lifeGaugeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014B99C
	bl       update__12LifeGaugeMgrFv

lbl_8014B99C:
	lwz      r3, carryInfoMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014B9B8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8014B9B8:
	lwz      r3, 0x128(r31)
	cmplwi   r3, 0
	beq      lbl_8014B9D4
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8014B9D4:
	bl       setViewCalcModeInd__Q28SysShape5ModelFv
	li       r30, 0
	b        lbl_8014BA10

lbl_8014B9E0:
	mr       r4, r30
	bl       getViewport__8GraphicsFi
	or.      r29, r3, r3
	beq      lbl_8014BA0C
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014BA0C
	mr       r3, r31
	mr       r4, r29
	li       r5, 0
	bl       j3dSetView__Q24Game15BaseGameSectionFP8Viewportb

lbl_8014BA0C:
	addi     r30, r30, 1

lbl_8014BA10:
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	lwz      r0, 0x264(r3)
	cmpw     r30, r0
	blt      lbl_8014B9E0
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	lwz      r3, platMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BA3C
	bl       resetOnCount__Q24Game7PlatMgrFv

lbl_8014BA3C:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184BC@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184B0@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184C4@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014BAE4
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184CC@sda21
	lfs      f0, lbl_805184A4@sda21(r2)
	li       r5, 1
	lfs      f1, 0x54(r3)
	lwz      r3, 0x28(r3)
	fdivs    f31, f1, f0
	bl       _start__9SysTimersFPcb
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_8014BAC8
	lwz      r3, sys@sda21(r13)
	bl       getTime__6SystemFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       resolveCollision__Q24Game11CellPyramidFv
	li       r0, 1
	stb      r0, sSpeedUpResolveColl__Q24Game11CellPyramid@sda21(r13)

lbl_8014BAC8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184CC@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	fmr      f1, f31
	mr       r3, r31
	bl       doSimulation__Q24Game15BaseGameSectionFf

lbl_8014BAE4:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805184C4@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r6, sys@sda21(r13)
	lis      r3, lbl_8047CA94@ha
	addi     r4, r3, lbl_8047CA94@l
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_8014BB44
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014BB44
	lwz      r3, particleMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BB44
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8014BB44:
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BB54
	bl       update__14TParticle2dMgrFv

lbl_8014BB54:
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_8047CA94@ha
	addi     r4, r3, lbl_8047CA94@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BBD8
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4d(r4)
	cmplwi   r0, 0
	bne      lbl_8014BBD8
	lwz      r4, 0x44(r4)
	li       r0, 0
	cmpwi    r4, 1
	beq      lbl_8014BBB0
	cmpwi    r4, 3
	bne      lbl_8014BBB4

lbl_8014BBB0:
	li       r0, 1

lbl_8014BBB4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8014BBCC
	lwz      r4, 0x10c(r31)
	lwz      r5, 0x110(r31)
	bl       update__Q24Game11MoviePlayerFP10ControllerP10Controller
	b        lbl_8014BBD8

lbl_8014BBCC:
	lwz      r4, 0x10c(r31)
	li       r5, 0
	bl       update__Q24Game11MoviePlayerFP10ControllerP10Controller

lbl_8014BBD8:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BBE8
	bl       init__Q24Game9ShadowMgrFv

lbl_8014BBE8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	lbz      r3, 0x34(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014BC24
 * Size:	000004
 */
void BaseGameSection::onUpdate(void) { }

/*
 * --INFO--
 * Address:	8014BC28
 * Size:	000170
 */
void BaseGameSection::doDraw(Graphics& gfx)
{
	captureRadarmap(gfx);
	if (Game::gameSystem->paused() == false) {
		if (Game::cameraMgr) {
			Game::cameraMgr->update();
		}
	} else if (Game::cameraMgr) {
		Game::cameraMgr->controllerLock(2);
		Game::cameraMgr->update();
		Game::cameraMgr->controllerUnLock(2);
	}
	sys->m_timers->_start("_draw3D_", true);
	draw3D(gfx);
	sys->m_timers->_stop("_draw3D_");
	if (Game::moviePlayer != nullptr && Game::gameSystem->m_isMoviePause == false) {
		Game::moviePlayer->drawLoading(gfx);
	}
	pre2dDraw(gfx);
	gfx.setToken("2d");
	draw2D(gfx);
	if (m_draw2DCreature) {
		drawOtakaraWindow(gfx);
	}
	Screen::gGame2DMgr->drawKanteiMsg(gfx);
	if (Game::moviePlayer != nullptr && Game::gameSystem->m_isMoviePause == false) {
		Game::moviePlayer->draw(gfx);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       captureRadarmap__Q24Game15BaseGameSectionFR8Graphics
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014BC84
	lwz      r3, cameraMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BC94
	li       r4, 2
	bl       controllerLock__Q24Game9CameraMgrFi
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       update__Q24Game9CameraMgrFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	bl       controllerUnLock__Q24Game9CameraMgrFi
	b        lbl_8014BC94

lbl_8014BC84:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BC94
	bl       update__Q24Game9CameraMgrFv

lbl_8014BC94:
	lwz      r6, sys@sda21(r13)
	lis      r3, lbl_8047CAA0@ha
	addi     r4, r3, lbl_8047CAA0@l
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x10c(r12)
	mtctr    r12
	bctrl
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_8047CAA0@ha
	addi     r4, r3, lbl_8047CAA0@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BCFC
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4d(r4)
	cmplwi   r0, 0
	bne      lbl_8014BCFC
	mr       r4, r31
	bl       drawLoading__Q24Game11MoviePlayerFR8Graphics

lbl_8014BCFC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r2, lbl_805184D4@sda21
	bl       setToken__8GraphicsFPc
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x13c(r30)
	cmplwi   r0, 0
	beq      lbl_8014BD50
	mr       r3, r30
	mr       r4, r31
	bl       drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics

lbl_8014BD50:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	mr       r4, r31
	bl       drawKanteiMsg__Q26Screen9Game2DMgrFR8Graphics
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014BD80
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4d(r4)
	cmplwi   r0, 0
	bne      lbl_8014BD80
	mr       r4, r31
	bl       draw__Q24Game11MoviePlayerFR8Graphics

lbl_8014BD80:
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
 * Address:	8014BD98
 * Size:	000004
 */
void BaseGameSection::pre2dDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8014BD9C
 * Size:	000078
 */
void BaseGameSection::movieDone(Game::MovieConfig*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  li        r4, 0x1
	  bl        -0x102E4
	  lwz       r3, 0x13C(r31)
	  li        r4, 0
	  bl        -0x10CEC
	  li        r0, 0
	  stw       r0, 0x13C(r31)
	  lwz       r3, -0x6560(r13)
	  bl        0x2B1760
	  lwz       r3, -0x6560(r13)
	  bl        0x2B15D0
	  li        r0, 0
	  stw       r0, 0x134(r31)

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014BE14
 * Size:	000004
 */
void BaseGameSection::onMovieDone(Game::MovieConfig*, unsigned long, unsigned long) { }

/*
 * --INFO--
 * Address:	8014BE18
 * Size:	00008C
 */
void BaseGameSection::onMovieCommand(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 2
	stw      r0, 0x14(r1)
	beq      lbl_8014BE48
	bge      lbl_8014BE3C
	cmpwi    r4, 0
	beq      lbl_8014BE94
	b        lbl_8014BE94

lbl_8014BE3C:
	cmpwi    r4, 4
	bge      lbl_8014BE94
	b        lbl_8014BE68

lbl_8014BE48:
	lwz      r4, moviePlayer__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8014BE94
	lwz      r0, 0x1f0(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_8014BE94
	bl       createFallPikminSound__Q24Game15BaseGameSectionFv
	b        lbl_8014BE94

lbl_8014BE68:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8014BE94
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplwi   r0, 0
	bne      lbl_8014BE94
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc

lbl_8014BE94:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014BEA4
 * Size:	000450
 */
void BaseGameSection::initJ3D(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8047C948@ha
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	addi     r31, r4, lbl_8047C948@l
	stw      r30, 0x38(r1)
	mr       r30, r3
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014BEDC
	bl       __ct__Q23Sys11DrawBuffersFv
	mr       r0, r3

lbl_8014BEDC:
	stw      r0, 0x12c(r30)
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014BEF8
	bl       __ct__Q23Sys11DrawBuffersFv
	mr       r0, r3

lbl_8014BEF8:
	stw      r0, 0x130(r30)
	li       r4, 0xa
	lwz      r3, 0x12c(r30)
	bl       allocate__Q23Sys11DrawBuffersFi
	lwz      r3, 0x12c(r30)
	addi     r0, r2, lbl_805184D8@sda21
	li       r7, 0
	li       r6, 1
	stw      r0, 0x14(r3)
	addi     r5, r2, lbl_805184DC@sda21
	li       r3, 0x80
	addi     r0, r2, lbl_805184E4@sda21
	stb      r7, 0x28(r1)
	li       r4, 0
	stb      r7, 0x29(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x2c(r1)
	stb      r7, 0x28(r1)
	stb      r7, 0x29(r1)
	stw      r7, 0x30(r1)
	stw      r7, 0x34(r1)
	stw      r3, 0x24(r1)
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	addi     r0, r31, 0x164
	li       r3, 1
	stw      r3, 0x24(r1)
	li       r4, 1
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r4, 1
	addi     r3, r2, lbl_805184EC@sda21
	li       r0, 5
	stw      r4, 0x24(r1)
	li       r4, 2
	stw      r3, 0x2c(r1)
	stw      r0, 0x30(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r4, 1
	addi     r3, r2, lbl_805184F0@sda21
	li       r0, 0
	stw      r4, 0x24(r1)
	li       r4, 3
	stw      r3, 0x2c(r1)
	stw      r0, 0x30(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_805184F8@sda21
	stw      r3, 0x24(r1)
	li       r4, 4
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_805184D4@sda21
	stw      r3, 0x24(r1)
	li       r4, 5
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_80518500@sda21
	stw      r3, 0x24(r1)
	li       r4, 6
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	addi     r0, r31, 0x174
	li       r3, 1
	stw      r3, 0x24(r1)
	li       r4, 7
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	addi     r0, r31, 0x180
	li       r3, 1
	stw      r3, 0x24(r1)
	li       r4, 8
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_80518508@sda21
	stw      r3, 0x24(r1)
	li       r4, 9
	stw      r0, 0x2c(r1)
	lwz      r3, 0x12c(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x24
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	lwz      r3, 0x130(r30)
	li       r4, 0xa
	bl       allocate__Q23Sys11DrawBuffersFi
	lwz      r3, 0x130(r30)
	addi     r0, r2, lbl_80518510@sda21
	li       r8, 0
	li       r7, 1
	stw      r0, 0x14(r3)
	addi     r6, r2, lbl_805184DC@sda21
	li       r3, 0x80
	addi     r0, r2, lbl_805184E4@sda21
	stb      r8, 0x14(r1)
	li       r4, 0
	stb      r8, 0x15(r1)
	stb      r8, 0x14(r1)
	stb      r8, 0x15(r1)
	lhz      r5, 0x14(r1)
	stw      r7, 0x10(r1)
	ori      r5, r5, 1
	stw      r6, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r8, 0x20(r1)
	sth      r5, 0x14(r1)
	stw      r3, 0x10(r1)
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_805184E4@sda21
	stw      r3, 0x10(r1)
	li       r4, 1
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_805184EC@sda21
	stw      r3, 0x10(r1)
	li       r4, 2
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_805184F0@sda21
	stw      r3, 0x10(r1)
	li       r4, 3
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_805184F8@sda21
	stw      r3, 0x10(r1)
	li       r4, 4
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_805184D4@sda21
	stw      r3, 0x10(r1)
	li       r4, 5
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_80518500@sda21
	stw      r3, 0x10(r1)
	li       r4, 6
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	addi     r0, r31, 0x174
	li       r3, 1
	stw      r3, 0x10(r1)
	li       r4, 7
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	addi     r0, r31, 0x180
	li       r3, 1
	stw      r3, 0x10(r1)
	li       r4, 8
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	li       r3, 1
	addi     r0, r2, lbl_80518508@sda21
	stw      r3, 0x10(r1)
	li       r4, 9
	stw      r0, 0x18(r1)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	addi     r4, r1, 0x10
	bl       create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
	lwz      r4, 0x12c(r30)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r4, 0x130(r30)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, 0x12c(r30)
	li       r4, 0
	bl       get__Q23Sys11DrawBuffersFi
	lis      r4, j3dSys@ha
	lwz      r0, 0x1c(r3)
	addi     r3, r4, j3dSys@l
	li       r4, 0
	stw      r0, 0x48(r3)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	lwz      r0, 0x1c(r3)
	lis      r3, j3dSys@ha
	addi     r4, r3, j3dSys@l
	addi     r3, r1, 8
	stw      r0, 0x4c(r4)
	addi     r4, r2, lbl_80518514@sda21
	li       r5, 0
	bl       __ct__Q26System20FragmentationCheckerFPcb
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__Q26System20FragmentationCheckerFv
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014C2F4
 * Size:	000034
 */
void BaseGameSection::initResources(void)
{
	setupFixMemory();
	setupFloatMemory();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setupFixMemory__Q24Game15BaseGameSectionFv
	mr       r3, r31
	bl       setupFloatMemory__Q24Game15BaseGameSectionFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014C328
 * Size:	0001E4
 */
void BaseGameSection::initViewports(Graphics&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	li       r3, 0x18
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014C364
	mr       r4, r29
	bl       __ct__17HorizonalSplitterFP8Graphics
	mr       r0, r3

lbl_8014C364:
	stw      r0, 0x118(r31)
	mr       r3, r31
	li       r4, 0
	bl       setSplitter__Q24Game15BaseGameSectionFb
	lwz      r30, 0x104(r31)
	mr       r3, r29
	li       r4, 0
	bl       getViewport__8GraphicsFi
	stw      r30, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	lwz      r30, 0x108(r31)
	mr       r3, r29
	li       r4, 1
	bl       getViewport__8GraphicsFi
	stw      r30, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	mr       r3, r29
	li       r4, 0
	bl       getViewport__8GraphicsFi
	mr       r4, r3
	lwz      r3, shadowMgr__4Game@sda21(r13)
	li       r5, 0
	bl       setViewport__Q24Game9ShadowMgrFP8Viewporti
	mr       r3, r29
	li       r4, 1
	bl       getViewport__8GraphicsFi
	mr       r4, r3
	lwz      r3, shadowMgr__4Game@sda21(r13)
	li       r5, 1
	bl       setViewport__Q24Game9ShadowMgrFP8Viewporti
	mr       r3, r29
	li       r4, 0
	bl       getViewport__8GraphicsFi
	mr       r4, r3
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r5, 0
	bl       setViewport__Q24Game9CameraMgrFP8Viewporti
	mr       r3, r29
	li       r4, 1
	bl       getViewport__8GraphicsFi
	mr       r4, r3
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r5, 1
	bl       setViewport__Q24Game9CameraMgrFP8Viewporti
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 0
	bl       init__Q24Game9CameraMgrFi
	li       r3, 0x1b0
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8014C440
	bl       __ct__12LookAtCameraFv
	lis      r3, __vt__Q34Game15BaseGameSection10ZoomCamera@ha
	addi     r0, r3, __vt__Q34Game15BaseGameSection10ZoomCamera@l
	stw      r0, 0(r30)

lbl_8014C440:
	stw      r30, 0x14c(r31)
	li       r3, 0x58
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014C45C
	bl       __ct__8ViewportFv
	mr       r0, r3

lbl_8014C45C:
	stw      r0, 0x138(r31)
	li       r0, 2
	lwz      r3, 0x138(r31)
	sth      r0, 0x18(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 6(r3)
	bl       getRenderModeObj__6SystemFv
	bl       getRenderModeObj__6SystemFv
	lfs      f3, lbl_80518498@sda21(r2)
	lis      r0, 0x4330
	stw      r30, 0x1c(r1)
	addi     r4, r1, 8
	fmr      f4, f3
	lfs      f0, lbl_8051851C@sda21(r2)
	stw      r0, 0x18(r1)
	lfd      f2, lbl_80518520@sda21(r2)
	fsubs    f4, f4, f0
	lfd      f1, 0x18(r1)
	stw      r29, 0x24(r1)
	fsubs    f1, f1, f2
	stw      r0, 0x20(r1)
	lfd      f0, 0x20(r1)
	fadds    f1, f3, f1
	stfs     f3, 8(r1)
	fsubs    f0, f0, f2
	stfs     f4, 0xc(r1)
	fadds    f0, f4, f0
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x138(r31)
	bl       "setRect__8ViewportFR7Rect<f>"
	lwz      r3, 0x138(r31)
	lwz      r0, 0x14c(r31)
	stw      r0, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8014C50C
 * Size:	0000C0
 */
LookAtCamera::~LookAtCamera()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8014C5B0
	lis      r4, __vt__12LookAtCamera@ha
	addi     r0, r4, __vt__12LookAtCamera@l
	stw      r0, 0(r30)
	beq      lbl_8014C5A0
	lis      r4, __vt__6Camera@ha
	addi     r0, r4, __vt__6Camera@l
	stw      r0, 0(r30)
	beq      lbl_8014C5A0
	lis      r4, __vt__11CullFrustum@ha
	addi     r0, r4, __vt__11CullFrustum@l
	stw      r0, 0(r30)
	beq      lbl_8014C5A0
	lis      r4, __vt__9CullPlane@ha
	addi     r0, r4, __vt__9CullPlane@l
	stw      r0, 0(r30)
	beq      lbl_8014C5A0
	lis      r4, "__vt__22ArrayContainer<5Plane>"@ha
	addi     r0, r4, "__vt__22ArrayContainer<5Plane>"@l
	stw      r0, 0(r30)
	beq      lbl_8014C5A0
	lis      r4, "__vt__17Container<5Plane>"@ha
	addi     r0, r4, "__vt__17Container<5Plane>"@l
	stw      r0, 0(r30)
	beq      lbl_8014C5A0
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8014C5A0:
	extsh.   r0, r31
	ble      lbl_8014C5B0
	mr       r3, r30
	bl       __dl__FPv

lbl_8014C5B0:
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

/*
 * --INFO--
 * Address:	8014C5CC
 * Size:	001120
 */
void BaseGameSection::initGenerators(void)
{
	Game::generatorCache->clearGeneratorList();
	Generator::initializeSystem();
	CourseInfo* courseInfo = Game::mapMgr->m_courseInfo;

	GeneratorMgr* mgr  = new GeneratorMgr();
	Game::generatorMgr = mgr;
	mgr->m_name        = "Generator(Default)";
	addGenNode(Game::generatorMgr);

	mgr                    = new GeneratorMgr();
	Game::onceGeneratorMgr = mgr;
	mgr->m_name            = "Generator(Init)";
	addGenNode(Game::onceGeneratorMgr);

	mgr                          = new GeneratorMgr();
	Game::limitGeneratorMgr      = mgr;
	mgr->m_name                  = "Generator(Limit)";
	Game::limitGeneratorMgr->_6C = 1;
	addGenNode(Game::limitGeneratorMgr);

	mgr                      = new GeneratorMgr();
	Game::plantsGeneratorMgr = mgr;
	mgr->m_name              = "Generator(æ¤ç‰©)";
	addGenNode(Game::plantsGeneratorMgr);

	mgr                   = new GeneratorMgr();
	Game::dayGeneratorMgr = mgr;
	mgr->m_name           = "Generator(DAY)";
	addGenNode(Game::dayGeneratorMgr);

	GeneratorMgr::cursorCallback = new Delegate1<BaseGameSection, Vector3f&>(this, &BaseGameSection::changeGeneratorCursor);

	GenObjectEnemy::initialise();
	GenItem::initialise();
	GenPellet::initialise();
	GenObjectPiki::initialise();
	GenObjectNavi::initialise();

	GeneratorMgr* mgrs[64];
	void* mgrData[64];
	char pathBuffer[256];
	int currentIndex;
	if (courseInfo) {
		Game::PelletBirthBuffer::clear();
		Game::generatorCache->loadGenerators(courseInfo->m_courseIndex);
		Game::generatorCache->updateUseList();
		currentIndex = 0;
		sprintf(pathBuffer, "%s/defaultgen.txt", courseInfo->m_abeFolder);
		void* data
		    = JKRDvdRipper::loadToMainRAM(pathBuffer, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
		if (data) {
			RamStream input(data, -1);
			input.m_mode = STREAM_MODE_TEXT;
			if (input.m_mode == STREAM_MODE_TEXT) {
				input.m_tabCount = 0;
			}
			Game::generatorMgr->read(input, false);
			Game::generatorMgr->updateUseList();
			currentIndex = 1;
			mgrs[0]      = Game::generatorMgr;
			mgrData[0]   = data;
		}

		sprintf(pathBuffer, "/%s/plantsgen.txt", courseInfo->m_abeFolder);
		if (DVDConvertPathToEntrynum(pathBuffer) != -1) {
			void* data = JKRDvdRipper::loadToMainRAM(pathBuffer, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr,
			                                         nullptr);
			if (data) {
				RamStream input(data, -1);
				input.m_mode = STREAM_MODE_TEXT;
				if (input.m_mode) {
					input.m_tabCount = 0;
				}
				Game::plantsGeneratorMgr->read(input, false);
				Game::plantsGeneratorMgr->updateUseList();
				mgrData[currentIndex] = data;
				mgrs[currentIndex++]  = Game::plantsGeneratorMgr;
			}
		}

		if (Game::playData->courseVisited(courseInfo->m_courseIndex) == false) {
			Game::playData->visitCourse(courseInfo->m_courseIndex);
			sprintf(pathBuffer, "%s/initgen.txt", courseInfo->m_abeFolder);
			void* data = JKRDvdRipper::loadToMainRAM(pathBuffer, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr,
			                                         nullptr);
			if (data) {
				RamStream input(data, -1);
				input.m_mode = STREAM_MODE_TEXT;
				if (input.m_mode) {
					input.m_tabCount = 0;
				}
				Game::onceGeneratorMgr->read(input, false);
				Game::onceGeneratorMgr->updateUseList();
				mgrData[currentIndex] = data;
				mgrs[currentIndex++]  = Game::onceGeneratorMgr;
			}
		}
		uint dayCount = Game::gameSystem->m_timeMgr->m_dayCount;
		for (int i = 0; i < courseInfo->m_limitGenCount; i++) {
			LimitGen* gen = (LimitGen*)courseInfo->m_limitGenOwner.getChildAt(i);
			if (gen->_18 <= dayCount && dayCount <= gen->_1C) {
				if (Game::playData->m_limitGen[courseInfo->m_courseIndex].m_nonLoops.isFlag(i) == false) {
					sprintf(pathBuffer, "%s/nonloop/%s", courseInfo->m_abeFolder, gen->m_name);
					void* data = JKRDvdRipper::loadToMainRAM(pathBuffer, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0,
					                                         nullptr, nullptr);
					if (data) {
						RamStream input(data, -1);
						input.m_mode = STREAM_MODE_TEXT;
						if (input.m_mode) {
							input.m_tabCount = 0;
						}
						GeneratorMgr* nonloopMgr = new GeneratorMgr();
						nonloopMgr->_6C          = 1;
						nonloopMgr->read(input, false);
						nonloopMgr->setDayLimit(gen->m_dayLimit);
						nonloopMgr->updateUseList();
						mgrData[currentIndex] = data;
						mgrs[currentIndex++]  = nonloopMgr;
						Game::limitGeneratorMgr->addMgr(nonloopMgr);
						Game::playData->m_limitGen[courseInfo->m_courseIndex].m_nonLoops.setFlag(i);
					}
				}
			}
		}
		// TODO: The rest. What even is math?
	}
	/*
	stwu     r1, -0x1ca0(r1)
	mflr     r0
	stw      r0, 0x1ca4(r1)
	li       r0, 0x1c98
	stfd     f31, 0x1c90(r1)
	psq_stx  f31, r1, r0, 0, qr0
	stmw     r19, 0x1c5c(r1)
	mr       r30, r3
	lis      r4, lbl_8047C948@ha
	lwz      r3, generatorCache__4Game@sda21(r13)
	addi     r31, r4, lbl_8047C948@l
	bl       clearGeneratorList__Q24Game14GeneratorCacheFv
	bl       initialiseSystem__Q24Game9GeneratorFv
	li       r3, 0x70
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8014C618
	bl       __ct__Q24Game12GeneratorMgrFv
	mr       r4, r3

lbl_8014C618:
	stw      r4, generatorMgr__4Game@sda21(r13)
	addi     r0, r31, 0x18c
	mr       r3, r30
	stw      r0, 0x14(r4)
	lwz      r4, generatorMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x70
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8014C648
	bl       __ct__Q24Game12GeneratorMgrFv
	mr       r4, r3

lbl_8014C648:
	stw      r4, onceGeneratorMgr__4Game@sda21(r13)
	addi     r0, r31, 0x1a0
	mr       r3, r30
	stw      r0, 0x14(r4)
	lwz      r4, onceGeneratorMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x70
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_8014C678
	bl       __ct__Q24Game12GeneratorMgrFv
	mr       r5, r3

lbl_8014C678:
	stw      r5, limitGeneratorMgr__4Game@sda21(r13)
	addi     r4, r31, 0x1b0
	li       r0, 1
	mr       r3, r30
	stw      r4, 0x14(r5)
	lwz      r4, limitGeneratorMgr__4Game@sda21(r13)
	stb      r0, 0x6c(r4)
	lwz      r4, limitGeneratorMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x70
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8014C6B4
	bl       __ct__Q24Game12GeneratorMgrFv
	mr       r4, r3

lbl_8014C6B4:
	stw      r4, plantsGeneratorMgr__4Game@sda21(r13)
	addi     r0, r31, 0x1c4
	mr       r3, r30
	stw      r0, 0x14(r4)
	lwz      r4, plantsGeneratorMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x70
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8014C6E4
	bl       __ct__Q24Game12GeneratorMgrFv
	mr       r4, r3

lbl_8014C6E4:
	stw      r4, dayGeneratorMgr__4Game@sda21(r13)
	addi     r0, r31, 0x1d4
	mr       r3, r30
	stw      r0, 0x14(r4)
	lwz      r4, dayGeneratorMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8014C754
	lis      r4, lbl_804B0CC8@ha
	lis      r5, "__vt__25IDelegate1<R10Vector3<f>>"@ha
	addi     r8, r4, lbl_804B0CC8@l
	lis      r4, "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, "__vt__25IDelegate1<R10Vector3<f>>"@l
	lwz      r6, 4(r8)
	addi     r0, r4,
"__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"@l lwz      r4, 8(r8)
	stw      r7, 0x4c(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r30, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0x50(r1)
	stw      r4, 0x54(r1)
	stw      r4, 0x10(r3)

lbl_8014C754:
	stw      r3, cursorCallback__Q24Game12GeneratorMgr@sda21(r13)
	bl       initialise__Q24Game14GenObjectEnemyFv
	bl       initialise__Q24Game7GenItemFv
	bl       initialise__Q24Game9GenPelletFv
	bl       initialise__Q24Game13GenObjectPikiFv
	bl       initialise__Q24Game13GenObjectNaviFv
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_8014CEB8
	bl       clear__Q24Game17PelletBirthBufferFv
	lwz      r4, mapMgr__4Game@sda21(r13)
	lwz      r3, generatorCache__4Game@sda21(r13)
	lwz      r4, 0xc(r4)
	lwz      r4, 0x48(r4)
	bl       loadGenerators__Q24Game14GeneratorCacheFi
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       updateUseList__Q24Game14GeneratorCacheFv
	lwz      r5, mapMgr__4Game@sda21(r13)
	addi     r3, r1, 0x298
	addi     r4, r31, 0x1e4
	li       r29, 0
	lwz      r5, 0xc(r5)
	lwz      r5, 0x1c(r5)
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x298
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r20, r3, r3
	beq      lbl_8014C840
	mr       r4, r20
	addi     r3, r1, 0x1838
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1844(r1)
	bne      lbl_8014C818
	li       r0, 0
	stw      r0, 0x1c4c(r1)

lbl_8014C818:
	lwz      r3, generatorMgr__4Game@sda21(r13)
	addi     r4, r1, 0x1838
	li       r5, 0
	bl       read__Q24Game12GeneratorMgrFR6Streamb
	lwz      r3, generatorMgr__4Game@sda21(r13)
	bl       updateUseList__Q24Game12GeneratorMgrFv
	lwz      r0, generatorMgr__4Game@sda21(r13)
	li       r29, 1
	stw      r20, 0x198(r1)
	stw      r0, 0x98(r1)

lbl_8014C840:
	lwz      r5, mapMgr__4Game@sda21(r13)
	addi     r3, r1, 0x298
	addi     r4, r31, 0x1f8
	lwz      r5, 0xc(r5)
	lwz      r5, 0x1c(r5)
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x298
	bl       DVDConvertPathToEntrynum
	cmpwi    r3, -1
	beq      lbl_8014C8FC
	li       r0, 0
	addi     r3, r1, 0x298
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r20, r3, r3
	beq      lbl_8014C8FC
	mr       r4, r20
	addi     r3, r1, 0x1418
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1424(r1)
	bne      lbl_8014C8C8
	li       r0, 0
	stw      r0, 0x182c(r1)

lbl_8014C8C8:
	lwz      r3, plantsGeneratorMgr__4Game@sda21(r13)
	addi     r4, r1, 0x1418
	li       r5, 0
	bl       read__Q24Game12GeneratorMgrFR6Streamb
	lwz      r3, plantsGeneratorMgr__4Game@sda21(r13)
	bl       updateUseList__Q24Game12GeneratorMgrFv
	lwz      r0, plantsGeneratorMgr__4Game@sda21(r13)
	slwi     r5, r29, 2
	addi     r4, r1, 0x198
	addi     r3, r1, 0x98
	stwx     r20, r4, r5
	addi     r29, r29, 1
	stwx     r0, r3, r5

lbl_8014C8FC:
	lwz      r4, mapMgr__4Game@sda21(r13)
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r28, 0xc(r4)
	lwz      r4, 0x48(r28)
	bl       courseVisited__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014C9C8
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0x48(r28)
	bl       visitCourse__Q24Game8PlayDataFi
	lwz      r5, 0x1c(r28)
	addi     r3, r1, 0x298
	addi     r4, r31, 0x20c
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x298
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r20, r3, r3
	beq      lbl_8014C9C8
	mr       r4, r20
	addi     r3, r1, 0xff8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1004(r1)
	bne      lbl_8014C994
	li       r0, 0
	stw      r0, 0x140c(r1)

lbl_8014C994:
	lwz      r3, onceGeneratorMgr__4Game@sda21(r13)
	addi     r4, r1, 0xff8
	li       r5, 0
	bl       read__Q24Game12GeneratorMgrFR6Streamb
	lwz      r3, onceGeneratorMgr__4Game@sda21(r13)
	bl       updateUseList__Q24Game12GeneratorMgrFv
	lwz      r0, onceGeneratorMgr__4Game@sda21(r13)
	slwi     r5, r29, 2
	addi     r4, r1, 0x198
	addi     r3, r1, 0x98
	stwx     r20, r4, r5
	addi     r29, r29, 1
	stwx     r0, r3, r5

lbl_8014C9C8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	slwi     r0, r29, 2
	addi     r24, r1, 0x198
	addi     r26, r1, 0x98
	lwz      r3, 0x40(r3)
	add      r24, r24, r0
	add      r26, r26, r0
	li       r21, 0
	lwz      r27, 0x218(r3)
	b        lbl_8014CB34

lbl_8014C9F0:
	mr       r4, r21
	addi     r3, r28, 0x50
	bl       getChildAt__5CNodeFi
	mr       r25, r3
	lwz      r0, 0x18(r3)
	cmpw     r0, r27
	bgt      lbl_8014CB30
	lwz      r0, 0x1c(r25)
	cmpw     r27, r0
	bgt      lbl_8014CB30
	lwz      r3, playData__4Game@sda21(r13)
	clrlwi   r4, r21, 0x10
	lwz      r0, 0x48(r28)
	lwz      r3, 0xe4(r3)
	slwi     r0, r0, 4
	add      r3, r3, r0
	bl       isFlag__8BitFlagsFUs
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014CB30
	lwz      r5, 0x1c(r28)
	addi     r3, r1, 0x298
	lwz      r6, 0x14(r25)
	addi     r4, r31, 0x21c
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x298
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r20, r3, r3
	beq      lbl_8014CB30
	mr       r4, r20
	addi     r3, r1, 0xbd8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0xbe4(r1)
	bne      lbl_8014CAB0
	li       r0, 0
	stw      r0, 0xfec(r1)

lbl_8014CAB0:
	li       r3, 0x70
	bl       __nw__FUl
	or.      r22, r3, r3
	beq      lbl_8014CAC8
	bl       __ct__Q24Game12GeneratorMgrFv
	mr       r22, r3

lbl_8014CAC8:
	li       r0, 1
	mr       r3, r22
	stb      r0, 0x6c(r22)
	addi     r4, r1, 0xbd8
	li       r5, 0
	bl       read__Q24Game12GeneratorMgrFR6Streamb
	lwz      r4, 0x20(r25)
	mr       r3, r22
	bl       setDayLimit__Q24Game12GeneratorMgrFi
	mr       r3, r22
	bl       updateUseList__Q24Game12GeneratorMgrFv
	stw      r20, 0(r24)
	mr       r4, r22
	lwz      r3, limitGeneratorMgr__4Game@sda21(r13)
	addi     r29, r29, 1
	stw      r22, 0(r26)
	addi     r26, r26, 4
	addi     r24, r24, 4
	bl       addMgr__Q24Game12GeneratorMgrFPQ24Game12GeneratorMgr
	lwz      r3, playData__4Game@sda21(r13)
	clrlwi   r4, r21, 0x10
	lwz      r0, 0x48(r28)
	lwz      r3, 0xe4(r3)
	slwi     r0, r0, 4
	add      r3, r3, r0
	bl       setFlag__8BitFlagsFUs

lbl_8014CB30:
	addi     r21, r21, 1

lbl_8014CB34:
	lwz      r0, 0x4c(r28)
	cmpw     r21, r0
	blt      lbl_8014C9F0
	lwz      r3, gameSystem__4Game@sda21(r13)
	lis      r4, 0x88888889@ha
	addi     r25, r4, 0x88888889@l
	lwz      r3, 0x40(r3)
	mulhw    r4, r25, r27
	lwz      r0, 0x218(r3)
	mulhw    r3, r25, r0
	add      r4, r4, r27
	srawi    r4, r4, 4
	add      r0, r3, r0
	srwi     r3, r4, 0x1f
	srawi    r0, r0, 4
	add      r4, r4, r3
	srwi     r3, r0, 0x1f
	mulli    r4, r4, 0x1e
	add      r0, r0, r3
	cmpwi    r0, 1
	subf     r27, r4, r27
	blt      lbl_8014CD44
	mulli    r21, r0, 0x1e
	slwi     r0, r29, 2
	addi     r23, r1, 0x198
	addi     r22, r1, 0x98
	add      r23, r23, r0
	li       r20, 0
	add      r22, r22, r0
	b        lbl_8014CD38

lbl_8014CBAC:
	mr       r4, r20
	addi     r3, r28, 0x78
	bl       getChildAt__5CNodeFi
	mr       r26, r3
	lwz      r7, 0x1c(r3)
	lwz      r4, 0x18(r3)
	mulhw    r3, r25, r7
	mulhw    r0, r25, r4
	add      r3, r3, r7
	srawi    r5, r3, 4
	add      r0, r0, r4
	srwi     r6, r5, 0x1f
	srawi    r0, r0, 4
	srwi     r3, r0, 0x1f
	add      r5, r5, r6
	add      r0, r0, r3
	mulli    r0, r0, 0x1e
	mulli    r3, r5, 0x1e
	subf     r0, r0, r4
	cmpw     r0, r27
	subf     r0, r3, r7
	bgt      lbl_8014CD34
	cmpw     r27, r0
	bgt      lbl_8014CD34
	lwz      r3, playData__4Game@sda21(r13)
	clrlwi   r4, r20, 0x10
	lwz      r0, 0x48(r28)
	lwz      r5, 0xe4(r3)
	slwi     r3, r0, 4
	addi     r3, r3, 8
	add      r3, r5, r3
	bl       isFlag__8BitFlagsFUs
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014CD34
	lwz      r5, 0x1c(r28)
	addi     r3, r1, 0x298
	lwz      r6, 0x14(r26)
	addi     r4, r31, 0x22c
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x298
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r24, r3, r3
	beq      lbl_8014CD34
	mr       r4, r24
	addi     r3, r1, 0x7b8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x7c4(r1)
	bne      lbl_8014CCA8
	li       r0, 0
	stw      r0, 0xbcc(r1)

lbl_8014CCA8:
	li       r3, 0x70
	bl       __nw__FUl
	or.      r19, r3, r3
	beq      lbl_8014CCC0
	bl       __ct__Q24Game12GeneratorMgrFv
	mr       r19, r3

lbl_8014CCC0:
	li       r0, 1
	mr       r3, r19
	stb      r0, 0x6c(r19)
	addi     r4, r1, 0x7b8
	li       r5, 0
	bl       read__Q24Game12GeneratorMgrFR6Streamb
	lwz      r4, 0x20(r26)
	mr       r3, r19
	addi     r4, r4, -30
	add      r4, r4, r21
	bl       setDayLimit__Q24Game12GeneratorMgrFi
	mr       r3, r19
	bl       updateUseList__Q24Game12GeneratorMgrFv
	stw      r24, 0(r23)
	mr       r4, r19
	lwz      r3, limitGeneratorMgr__4Game@sda21(r13)
	addi     r29, r29, 1
	stw      r19, 0(r22)
	addi     r22, r22, 4
	addi     r23, r23, 4
	bl       addMgr__Q24Game12GeneratorMgrFPQ24Game12GeneratorMgr
	lwz      r3, playData__4Game@sda21(r13)
	clrlwi   r4, r20, 0x10
	lwz      r0, 0x48(r28)
	lwz      r5, 0xe4(r3)
	slwi     r3, r0, 4
	addi     r3, r3, 8
	add      r3, r5, r3
	bl       setFlag__8BitFlagsFUs

lbl_8014CD34:
	addi     r20, r20, 1

lbl_8014CD38:
	lwz      r0, 0x74(r28)
	cmpw     r20, r0
	blt      lbl_8014CBAC

lbl_8014CD44:
	lwz      r4, gameSystem__4Game@sda21(r13)
	lis      r3, 0x88888889@ha
	addi     r0, r3, 0x88888889@l
	lwz      r5, 0x1c(r28)
	lwz      r6, 0x40(r4)
	addi     r3, r1, 0x298
	addi     r4, r31, 0x238
	lwz      r7, 0x218(r6)
	mulhw    r0, r0, r7
	add      r0, r0, r7
	srawi    r0, r0, 4
	srwi     r6, r0, 0x1f
	add      r0, r0, r6
	mulli    r0, r0, 0x1e
	subf     r6, r0, r7
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x298
	bl       DVDConvertPathToEntrynum
	cmpwi    r3, -1
	beq      lbl_8014CE28
	li       r0, 0
	addi     r3, r1, 0x298
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r19, r3, r3
	beq      lbl_8014CE28
	mr       r4, r19
	addi     r3, r1, 0x398
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x3a4(r1)
	bne      lbl_8014CDF4
	li       r0, 0
	stw      r0, 0x7ac(r1)

lbl_8014CDF4:
	lwz      r3, dayGeneratorMgr__4Game@sda21(r13)
	addi     r4, r1, 0x398
	li       r5, 0
	bl       read__Q24Game12GeneratorMgrFR6Streamb
	lwz      r3, dayGeneratorMgr__4Game@sda21(r13)
	bl       updateUseList__Q24Game12GeneratorMgrFv
	lwz      r0, dayGeneratorMgr__4Game@sda21(r13)
	slwi     r5, r29, 2
	addi     r4, r1, 0x198
	addi     r3, r1, 0x98
	stwx     r19, r4, r5
	addi     r29, r29, 1
	stwx     r0, r3, r5

lbl_8014CE28:
	lwz      r0, 0x114(r30)
	li       r5, -1
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	clrlwi   r4, r0, 0x18
	bl       allocateEnemys__Q24Game15GeneralEnemyMgrFUci
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       setupResources__Q24Game9PelletMgrFv
	addi     r20, r29, -1
	addi     r19, r1, 0x198
	slwi     r0, r20, 2
	add      r19, r19, r0
	b        lbl_8014CE70

lbl_8014CE60:
	lwz      r3, 0(r19)
	bl       __dla__FPv
	addi     r19, r19, -4
	addi     r20, r20, -1

lbl_8014CE70:
	cmpwi    r20, 0
	bge      lbl_8014CE60
	addi     r19, r1, 0x98
	li       r20, 0
	b        lbl_8014CE94

lbl_8014CE84:
	lwz      r3, 0(r19)
	bl       generate__Q24Game12GeneratorMgrFv
	addi     r19, r19, 4
	addi     r20, r20, 1

lbl_8014CE94:
	cmpw     r20, r29
	blt      lbl_8014CE84
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       createNumberGenerators__Q24Game14GeneratorCacheFv
	lwz      r4, mapMgr__4Game@sda21(r13)
	lwz      r3, generatorCache__4Game@sda21(r13)
	lwz      r4, 0xc(r4)
	lwz      r4, 0x48(r4)
	bl       loadCreatures__Q24Game14GeneratorCacheFi

lbl_8014CEB8:
	bl       birthAll__Q24Game17PelletBirthBufferFv
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x94(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x88(r1)
	li       r19, 0
	stw      r0, 0x8c(r1)
	stw      r3, 0x90(r1)
	bne      lbl_8014CF00
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x8c(r1)
	b        lbl_8014D044

lbl_8014CF00:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x8c(r1)
	b        lbl_8014CF6C

lbl_8014CF18:
	lwz      r3, 0x90(r1)
	lwz      r4, 0x8c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014D044
	lwz      r3, 0x90(r1)
	lwz      r4, 0x8c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x8c(r1)

lbl_8014CF6C:
	lwz      r12, 0x88(r1)
	addi     r3, r1, 0x88
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014CF18
	b        lbl_8014D044

lbl_8014CF8C:
	lwz      r0, 0x94(r1)
	addi     r19, r19, 1
	cmplwi   r0, 0
	bne      lbl_8014CFB8
	lwz      r3, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x8c(r1)
	b        lbl_8014D044

lbl_8014CFB8:
	lwz      r3, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x8c(r1)
	b        lbl_8014D028

lbl_8014CFD4:
	lwz      r3, 0x90(r1)
	lwz      r4, 0x8c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014D044
	lwz      r3, 0x90(r1)
	lwz      r4, 0x8c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x8c(r1)

lbl_8014D028:
	lwz      r12, 0x88(r1)
	addi     r3, r1, 0x88
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014CFD4

lbl_8014D044:
	lwz      r3, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x8c(r1)
	cmplw    r4, r3
	bne      lbl_8014CF8C
	cmpwi    r19, 1
	beq      lbl_8014D530
	bge      lbl_8014D07C
	cmpwi    r19, 0
	bge      lbl_8014D088
	b        lbl_8014D6CC

lbl_8014D07C:
	cmpwi    r19, 3
	bge      lbl_8014D6CC
	b        lbl_8014D66C

lbl_8014D088:
	lfs      f0, lbl_80518498@sda21(r2)
	li       r22, 0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x70(r1)
	stfs     f0, 0x74(r1)
	stfs     f0, 0x78(r1)
	bl       getMapRotation__Q24Game6MapMgrFv
	lfs      f3, lbl_80518528@sda21(r2)
	fmr      f31, f1
	lfs      f2, lbl_80518498@sda21(r2)
	lfs      f0, lbl_8051852C@sda21(r2)
	stfs     f3, 0x7c(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stfs     f2, 0x80(r1)
	stfs     f0, 0x84(r1)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8014D12C
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 1
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	or.      r19, r3, r3
	bne      lbl_8014D0F8
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x70
	li       r4, 0xab3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014D0F8:
	mr       r4, r19
	addi     r3, r1, 0x40
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x40(r1)
	lfs      f1, 0x44(r1)
	lfs      f0, 0x48(r1)
	stfs     f2, 0x7c(r1)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)
	b        lbl_8014D210

lbl_8014D12C:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8014D1AC
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x7c
	li       r5, 0
	lwz      r12, 4(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x7c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518530@sda21(r2)
	lfs      f3, 0x7c(r1)
	lfs      f2, lbl_80518534@sda21(r2)
	fadds    f4, f0, f1
	lfs      f1, 0x84(r1)
	lfs      f0, lbl_80518538@sda21(r2)
	fadds    f2, f3, f2
	stfs     f4, 0x80(r1)
	fadds    f0, f1, f0
	stfs     f2, 0x7c(r1)
	stfs     f0, 0x84(r1)
	b        lbl_8014D210

lbl_8014D1AC:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x7c
	addi     r5, r1, 0x28
	bl       PSMTXMultVec
	lfs      f2, 0x28(r1)
	addi     r4, r1, 0x7c
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x30(r1)
	stfs     f2, 0x7c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518498@sda21(r2)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x70(r1)
	stfs     f0, 0x74(r1)
	stfs     f0, 0x78(r1)

lbl_8014D210:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	mr       r20, r3
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	fmr      f1, f31
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r20)
	mr       r3, r20
	addi     r4, r1, 0x7c
	li       r5, 0
	lwz      r0, 0x104(r30)
	stw      r0, 0x280(r20)
	stw      r0, 0x284(r20)
	lwz      r0, 0x10c(r30)
	stw      r0, 0x278(r20)
	stw      r0, 0x27c(r20)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r20
	addi     r4, r1, 0x70
	lwz      r12, 0(r20)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x20(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8014D29C
	mr       r3, r20
	bl       setDeadLaydown__Q24Game4NaviFv
	li       r22, 1
	b        lbl_8014D2A4

lbl_8014D29C:
	lfs      f0, 0x24(r3)
	stfs     f0, 0x2a0(r20)

lbl_8014D2A4:
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       getMapRotation__Q24Game6MapMgrFv
	lfs      f3, lbl_8051853C@sda21(r2)
	fmr      f31, f1
	lfs      f2, lbl_80518498@sda21(r2)
	lfs      f0, lbl_80518540@sda21(r2)
	stfs     f3, 0x7c(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stfs     f2, 0x80(r1)
	stfs     f0, 0x84(r1)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8014D334
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 0
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	or.      r19, r3, r3
	bne      lbl_8014D300
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x70
	li       r4, 0xae7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014D300:
	mr       r4, r19
	addi     r3, r1, 0x34
	lwz      r12, 0(r19)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x34(r1)
	lfs      f1, 0x38(r1)
	lfs      f0, 0x3c(r1)
	stfs     f2, 0x7c(r1)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)
	b        lbl_8014D418

lbl_8014D334:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8014D3B4
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x7c
	li       r5, 0
	lwz      r12, 4(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x7c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518530@sda21(r2)
	lfs      f3, 0x7c(r1)
	lfs      f2, lbl_80518544@sda21(r2)
	fadds    f4, f0, f1
	lfs      f1, 0x84(r1)
	lfs      f0, lbl_80518548@sda21(r2)
	fadds    f2, f3, f2
	stfs     f4, 0x80(r1)
	fadds    f0, f1, f0
	stfs     f2, 0x7c(r1)
	stfs     f0, 0x84(r1)
	b        lbl_8014D418

lbl_8014D3B4:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x7c
	addi     r5, r1, 0x1c
	bl       PSMTXMultVec
	lfs      f2, 0x1c(r1)
	addi     r4, r1, 0x7c
	lfs      f1, 0x20(r1)
	lfs      f0, 0x24(r1)
	stfs     f2, 0x7c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518498@sda21(r2)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x70(r1)
	stfs     f0, 0x74(r1)
	stfs     f0, 0x78(r1)

lbl_8014D418:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	mr       r21, r3
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r0, 0x108(r30)
	fmr      f1, f31
	stw      r0, 0x280(r21)
	stw      r0, 0x284(r21)
	lwz      r0, 0x110(r30)
	stw      r0, 0x278(r21)
	stw      r0, 0x27c(r21)
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r21)
	mr       r3, r21
	addi     r4, r1, 0x7c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r21
	addi     r4, r1, 0x70
	lwz      r12, 0(r21)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0x1f, 0x1f, 0x1f
	bne      lbl_8014D49C
	lfs      f0, 0x28(r3)
	stfs     f0, 0x2a0(r21)

lbl_8014D49C:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8014D4B8
	mr       r3, r21
	bl       setDeadLaydown__Q24Game4NaviFv
	b        lbl_8014D6CC

lbl_8014D4B8:
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8014D4D4
	cmpwi    r0, 3
	bne      lbl_8014D4D8

lbl_8014D4D4:
	li       r3, 1

lbl_8014D4D8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014D6CC
	clrlwi.  r0, r22, 0x18
	bne      lbl_8014D6CC
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game11InteractFue@ha
	addi     r0, r4, __vt__Q24Game11Interaction@l
	li       r5, 0
	stw      r0, 0x64(r1)
	addi     r6, r3, __vt__Q24Game11InteractFue@l
	li       r0, 1
	mr       r3, r21
	stw      r20, 0x68(r1)
	addi     r4, r1, 0x64
	stw      r6, 0x64(r1)
	stb      r5, 0x6c(r1)
	stb      r0, 0x6d(r1)
	lwz      r12, 0(r21)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_8014D6CC

lbl_8014D530:
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x248
	li       r4, 0xb25
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       getMapRotation__Q24Game6MapMgrFv
	lfs      f2, lbl_8051853C@sda21(r2)
	lfs      f1, lbl_80518498@sda21(r2)
	lfs      f0, lbl_8051852C@sda21(r2)
	stfs     f2, 0x58(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x60(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8014D594
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x254
	li       r4, 0xb2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014D594:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x58
	addi     r5, r1, 0x10
	bl       PSMTXMultVec
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x58
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	stfs     f2, 0x58(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x60(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518530@sda21(r2)
	li       r4, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	fadds    f0, f0, f1
	stfs     f0, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x104(r30)
	stw      r0, 0x280(r3)
	stw      r0, 0x284(r3)
	lwz      r0, 0x10c(r30)
	stw      r0, 0x278(r3)
	stw      r0, 0x27c(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	mr       r19, r3
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r0, 0x108(r30)
	mr       r3, r19
	addi     r4, r1, 0x58
	li       r5, 0
	stw      r0, 0x280(r19)
	stw      r0, 0x284(r19)
	lwz      r0, 0x110(r30)
	stw      r0, 0x278(r19)
	stw      r0, 0x27c(r19)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_8014D6CC

lbl_8014D66C:
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x104(r30)
	li       r4, 1
	stw      r0, 0x280(r3)
	stw      r0, 0x284(r3)
	lwz      r0, 0x10c(r30)
	stw      r0, 0x278(r3)
	stw      r0, 0x27c(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x108(r30)
	stw      r0, 0x280(r3)
	stw      r0, 0x284(r3)
	lwz      r0, 0x110(r30)
	stw      r0, 0x278(r3)
	stw      r0, 0x27c(r3)

lbl_8014D6CC:
	li       r0, 0x1c98
	psq_lx   f31, r1, r0, 0, qr0
	lfd      f31, 0x1c90(r1)
	lmw      r19, 0x1c5c(r1)
	lwz      r0, 0x1ca4(r1)
	mtlr     r0
	addi     r1, r1, 0x1ca0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014D6EC
 * Size:	0000A4
 */
void BaseGameSection::advanceDayCount(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, 0x88888889@ha
	stw      r0, 0x24(r1)
	addi     r0, r3, 0x88888889@l
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r4)
	lwz      r3, 0x218(r3)
	addi     r30, r3, 1
	mulhw    r0, r0, r30
	add      r0, r0, r30
	srawi    r0, r0, 4
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	mulli    r0, r0, 0x1e
	subf.    r0, r0, r30
	bne      lbl_8014D768
	li       r29, 0
	li       r31, 0

lbl_8014D744:
	lwz      r4, playData__4Game@sda21(r13)
	addi     r3, r31, 8
	lwz      r0, 0xe4(r4)
	add      r3, r0, r3
	bl       all_zero__8BitFlagsFv
	addi     r29, r29, 1
	addi     r31, r31, 0x10
	cmpwi    r29, 4
	blt      lbl_8014D744

lbl_8014D768:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	stw      r30, 0x218(r3)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014D790
 * Size:	0000D4
 */
void BaseGameSection::saveToGeneratorCache(Game::CourseInfo*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	bne      lbl_8014D7C4
	lis      r3, lbl_8047C964@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C964@l
	li       r4, 0xb6b
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014D7C4:
	lwz      r3, generatorCache__4Game@sda21(r13)
	lwz      r4, 0x48(r31)
	bl       beginSave__Q24Game14GeneratorCacheFi
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       getFirstGenerator__Q24Game14GeneratorCacheFv
	mr       r31, r3
	b        lbl_8014D7FC

lbl_8014D7E0:
	lhz      r0, 0x5c(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8014D7F8
	lwz      r3, generatorCache__4Game@sda21(r13)
	mr       r4, r31
	bl       saveGenerator__Q24Game14GeneratorCacheFPQ24Game9Generator

lbl_8014D7F8:
	lwz      r31, 4(r31)

lbl_8014D7FC:
	cmplwi   r31, 0
	bne      lbl_8014D7E0
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       getFirstGenerator__Q24Game14GeneratorCacheFv
	mr       r31, r3
	b        lbl_8014D838

lbl_8014D814:
	lhz      r3, 0x5c(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_8014D834
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8014D834
	lwz      r3, generatorCache__4Game@sda21(r13)
	mr       r4, r31
	bl       saveCreature__Q24Game14GeneratorCacheFPQ24Game9Generator

lbl_8014D834:
	lwz      r31, 4(r31)

lbl_8014D838:
	cmplwi   r31, 0
	bne      lbl_8014D814
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       savePikiheads__Q24Game14GeneratorCacheFv
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       endSave__Q24Game14GeneratorCacheFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014D864
 * Size:	0000AC
 */
void BaseGameSection::pmTogglePlayer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xe4(r3)
	cmpwi    r0, 0
	bne      lbl_8014D8B4
	li       r4, 1
	bl       setPlayerMode__Q24Game15BaseGameSectionFi
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	lwz      r3, 0x24(r3)
	bl       getViewport__8GraphicsFi
	lwz      r4, moviePlayer__4Game@sda21(r13)
	stw      r3, 0x198(r4)
	lwz      r0, 0x108(r31)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x190(r3)
	b        lbl_8014D8E8

lbl_8014D8B4:
	cmpwi    r0, 1
	bne      lbl_8014D8E8
	li       r4, 0
	bl       setPlayerMode__Q24Game15BaseGameSectionFi
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	lwz      r3, 0x24(r3)
	bl       getViewport__8GraphicsFi
	lwz      r4, moviePlayer__4Game@sda21(r13)
	stw      r3, 0x198(r4)
	lwz      r0, 0x104(r31)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x190(r3)

lbl_8014D8E8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xe8(r12)
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
 * Address:	8014D910
 * Size:	000004
 */
void BaseGameSection::onTogglePlayer(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void BaseGameSection::pmPlayerJoin(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014D914
 * Size:	000004
 */
void BaseGameSection::onPlayerJoin(void) { }

/*
 * --INFO--
 * Address:	8014D918
 * Size:	0002B8
 */
void BaseGameSection::setPlayerMode(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r28
	bl       disableController__Q24Game4NaviFv
	mr       r3, r29
	bl       disableController__Q24Game4NaviFv
	cmpwi    r31, 1
	beq      lbl_8014DA80
	bge      lbl_8014D99C
	cmpwi    r31, 0
	bge      lbl_8014D9A8
	b        lbl_8014DBAC

lbl_8014D99C:
	cmpwi    r31, 3
	bge      lbl_8014DBAC
	b        lbl_8014DB78

lbl_8014D9A8:
	lfs      f1, lbl_805184A4@sda21(r2)
	lfs      f0, lbl_80518498@sda21(r2)
	stfs     f1, 0xe8(r30)
	stfs     f0, 0xec(r30)
	lwz      r3, 0x118(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x108(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x104(r30)
	addi     r4, r4, 0x34
	bl       PSMTXCopy
	lwz      r3, 0x104(r30)
	bl       update__6CameraFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r5, cameraMgrCallback@sda21(r13)
	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
	lwz      r0, 0x114(r30)
	cmpwi    r0, 1
	bne      lbl_8014DA4C
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	lwz      r29, 0x104(r30)
	lwz      r28, 0x24(r3)
	mr       r3, r28
	bl       getViewport__8GraphicsFi
	stw      r29, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	lwz      r29, 0x108(r30)
	mr       r3, r28
	li       r4, 1
	bl       getViewport__8GraphicsFi
	stw      r29, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv

lbl_8014DA4C:
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	lwz      r3, 0x24(r3)
	bl       getViewport__8GraphicsFi
	lwz      r4, sys@sda21(r13)
	lwz      r4, 0x24(r4)
	stw      r3, 0x25c(r4)
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x128(r30)
	lwz      r4, 0x24(r4)
	lwz      r4, 0x25c(r4)
	bl       updatePosition__Q24Game12GameLightMgrFP8Viewport
	b        lbl_8014DBAC

lbl_8014DA80:
	lwz      r0, 0x114(r30)
	cmpwi    r0, 1
	bne      lbl_8014DAE4
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	lwz      r29, 0x108(r30)
	lwz      r28, 0x24(r3)
	mr       r3, r28
	bl       getViewport__8GraphicsFi
	stw      r29, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	lwz      r29, 0x104(r30)
	mr       r3, r28
	li       r4, 1
	bl       getViewport__8GraphicsFi
	stw      r29, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	lfs      f1, lbl_805184A4@sda21(r2)
	stfs     f1, 0xe8(r30)
	lwz      r3, 0x118(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8014DB00

lbl_8014DAE4:
	lfs      f1, lbl_80518498@sda21(r2)
	stfs     f1, 0xe8(r30)
	lwz      r3, 0x118(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8014DB00:
	lfs      f0, lbl_80518498@sda21(r2)
	li       r4, 0
	stfs     f0, 0xec(r30)
	lwz      r3, 0x104(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x108(r30)
	addi     r4, r4, 0x34
	bl       PSMTXCopy
	lwz      r3, 0x108(r30)
	bl       update__6CameraFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 1
	lwz      r5, cameraMgrCallback@sda21(r13)
	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	lwz      r3, 0x24(r3)
	bl       getViewport__8GraphicsFi
	lwz      r4, sys@sda21(r13)
	lwz      r4, 0x24(r4)
	stw      r3, 0x25c(r4)
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x128(r30)
	lwz      r4, 0x24(r4)
	lwz      r4, 0x25c(r4)
	bl       updatePosition__Q24Game12GameLightMgrFP8Viewport
	b        lbl_8014DBAC

lbl_8014DB78:
	lfs      f1, lbl_8051854C@sda21(r2)
	lfs      f0, lbl_80518498@sda21(r2)
	stfs     f1, 0xe8(r30)
	stfs     f0, 0xec(r30)
	lwz      r3, 0x118(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	lwz      r5, cameraMgrCallback@sda21(r13)
	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"

lbl_8014DBAC:
	stw      r31, 0xe4(r30)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8014DBD0
 * Size:	000004
 */
void Splitter::split2(float) { }

namespace Game {

/*
 * --INFO--
 * Address:	8014DBD4
 * Size:	00014C
 */
void BaseGameSection::onCameraBlendFinished(Game::CameraArg*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, lbl_8047C948@ha
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	addi     r31, r4, lbl_8047C948@l
	stw      r30, 0x48(r1)
	bl       setCamController__Q24Game15BaseGameSectionFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8014DD08
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x26
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014DD08
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x25
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014DD08
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	bne      lbl_8014DC60
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x264
	li       r4, 0xc10
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014DC60:
	lfs      f0, lbl_80518498@sda21(r2)
	li       r0, 0
	addi     r5, r31, 0x270
	stw      r0, 0x18(r1)
	mr       r4, r30
	addi     r3, r1, 8
	stw      r5, 0x14(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r30
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	addi     r4, r1, 0x14
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r30, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x26
	bl       setDemoFlag__Q24Game8PlayDataFi

lbl_8014DD08:
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
 * Address:	8014DD20
 * Size:	000068
 */
void BaseGameSection::setFixNearFar(bool, float, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f2
	stfd     f30, 0x10(r1)
	fmr      f30, f1
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x104(r3)
	bl       setFixNearFar__6CameraFbff
	fmr      f1, f30
	lwz      r3, 0x108(r30)
	fmr      f2, f31
	mr       r4, r31
	bl       setFixNearFar__6CameraFbff
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014DD88
 * Size:	000210
 */
void BaseGameSection::setCamController(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xe4(r31)
	mr       r30, r3
	cmpwi    r0, 1
	beq      lbl_8014DE84
	bge      lbl_8014DDF8
	cmpwi    r0, 0
	bge      lbl_8014DE04
	b        lbl_8014DF64

lbl_8014DDF8:
	cmpwi    r0, 3
	bge      lbl_8014DF64
	b        lbl_8014DF08

lbl_8014DE04:
	lwz      r0, 0x104(r31)
	stw      r0, 0x280(r29)
	stw      r0, 0x284(r29)
	lwz      r0, 0x10c(r31)
	stw      r0, 0x278(r29)
	stw      r0, 0x27c(r29)
	bl       disableController__Q24Game4NaviFv
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r4, 0
	stw      r29, 0x18c(r3)
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	bl       getViewport__8GraphicsFi
	lwz      r5, moviePlayer__4Game@sda21(r13)
	li       r4, 0
	stw      r3, 0x198(r5)
	lwz      r0, 0x104(r31)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x190(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	beq      lbl_8014DE68
	cmpwi    r0, 3
	bne      lbl_8014DE6C

lbl_8014DE68:
	li       r4, 1

lbl_8014DE6C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_8014DF64
	li       r3, 0
	bl       PSSetCurCameraNo__FUc
	bl       PSPlayerChangeToOrimer__Fv
	b        lbl_8014DF64

lbl_8014DE84:
	mr       r3, r29
	bl       disableController__Q24Game4NaviFv
	lwz      r0, 0x108(r31)
	li       r4, 1
	stw      r0, 0x280(r30)
	stw      r0, 0x284(r30)
	lwz      r0, 0x10c(r31)
	stw      r0, 0x278(r30)
	stw      r0, 0x27c(r30)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r30, 0x18c(r3)
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	bl       getViewport__8GraphicsFi
	lwz      r5, moviePlayer__4Game@sda21(r13)
	li       r4, 0
	stw      r3, 0x198(r5)
	lwz      r0, 0x108(r31)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x190(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	beq      lbl_8014DEEC
	cmpwi    r0, 3
	bne      lbl_8014DEF0

lbl_8014DEEC:
	li       r4, 1

lbl_8014DEF0:
	clrlwi.  r0, r4, 0x18
	bne      lbl_8014DF64
	li       r3, 1
	bl       PSSetCurCameraNo__FUc
	bl       PSPlayerChangeToLugie__Fv
	b        lbl_8014DF64

lbl_8014DF08:
	lwz      r0, 0x104(r31)
	stw      r0, 0x280(r29)
	stw      r0, 0x284(r29)
	lwz      r0, 0x10c(r31)
	stw      r0, 0x278(r29)
	stw      r0, 0x27c(r29)
	lwz      r0, 0x108(r31)
	stw      r0, 0x280(r30)
	stw      r0, 0x284(r30)
	lwz      r0, 0x110(r31)
	stw      r0, 0x278(r30)
	stw      r0, 0x27c(r30)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r29, 0x18c(r3)
	lwz      r0, 0x104(r31)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x190(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8014DF64
	li       r3, 0
	bl       PSSetCurCameraNo__FUc

lbl_8014DF64:
	mr       r3, r31
	lwz      r4, 0xe4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xe4(r12)
	mtctr    r12
	bctrl
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
 * Address:	8014DF98
 * Size:	000004
 */
void BaseGameSection::on_setCamController(int) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
int BaseGameSection::getNumWindows()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
int BaseGameSection::getActivePlayerID()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014DF9C
 * Size:	000184
 */
void BaseGameSection::setDefaultPSSceneInfo(PSGame::SceneInfo&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0x104(r3)
	cmplwi   r0, 0
	bne      lbl_8014DFE0
	lis      r3, lbl_8047C964@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C964@l
	li       r4, 0xc7d
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014DFE0:
	lwz      r0, 0x108(r30)
	cmplwi   r0, 0
	bne      lbl_8014E008
	lis      r3, lbl_8047C964@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C964@l
	li       r4, 0xc7e
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014E008:
	li       r0, 2
	stb      r0, 7(r31)
	lwz      r3, 0x104(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 8(r31)
	lwz      r3, 0x104(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10(r31)
	lwz      r3, 0x104(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r31)
	lwz      r3, 0x108(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r31)
	lwz      r3, 0x108(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r31)
	lwz      r3, 0x108(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r31)
	addi     r4, r1, 8
	lfs      f1, lbl_80518550@sda21(r2)
	lfs      f0, lbl_80518554@sda21(r2)
	stfs     f1, 8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f3, 0x14(r1)
	lfs      f4, 0x18(r1)
	lfs      f5, 0x1c(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x20(r31)
	stfs     f1, 0x24(r31)
	stfs     f2, 0x28(r31)
	stfs     f3, 0x2c(r31)
	stfs     f4, 0x30(r31)
	stfs     f5, 0x34(r31)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * Generated.
 * --INFO--
 * Address:	8014E120
 * Size:	000008
 */
// void Camera::getSoundMatrixPtr()
// {
// 	/*
// 	addi     r3, r3, 0x84
// 	blr
// 	*/
// }

/*
 * Generated.
 * --INFO--
 * Address:	8014E128
 * Size:	000008
 */
// void Camera::getSoundPositionPtr()
// {
// 	/*
// 	addi     r3, r3, 0x78
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8014E130
 * Size:	00068C
 */
// void prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3f b(void)
void BaseGameSection::prepareHoleIn(Vector3f&, bool)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r30, r5
	stw      r29, 0x74(r1)
	mr       r29, r4
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	bl       getAliveOrima__Q24Game7NaviMgrFi
	clrlwi.  r0, r30, 0x18
	mr       r30, r3
	beq      lbl_8014E3C8
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014E190
	addi     r3, r3, 0x30

lbl_8014E190:
	li       r0, 0
	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
	stw      r0, 0x40(r1)
	cmplwi   r0, 0
	stw      r4, 0x34(r1)
	stw      r0, 0x38(r1)
	stw      r3, 0x3c(r1)
	bne      lbl_8014E1CC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_8014E3A8

lbl_8014E1CC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_8014E238

lbl_8014E1E4:
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014E3A8
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)

lbl_8014E238:
	lwz      r12, 0x34(r1)
	addi     r3, r1, 0x34
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E1E4
	b        lbl_8014E3A8

lbl_8014E258:
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E2EC
	li       r3, 0
	bl       inc__Q24Game8DeathMgrFi
	li       r3, 7
	bl       inc__Q24Game8DeathMgrFi
	lwz      r5, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r5)
	cmpwi    r0, 2
	beq      lbl_8014E2B0
	cmpwi    r0, 3
	bne      lbl_8014E2B4

lbl_8014E2B0:
	li       r3, 1

lbl_8014E2B4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E2EC
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game23GameMessageVsPikminDead@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game23GameMessageVsPikminDead@l
	stw      r0, 8(r1)
	lwz      r3, 0x58(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_8014E2EC:
	lwz      r0, 0x40(r1)
	cmplwi   r0, 0
	bne      lbl_8014E318
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_8014E3A8

lbl_8014E318:
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	b        lbl_8014E38C

lbl_8014E338:
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014E3A8
	lwz      r3, 0x3c(r1)
	lwz      r4, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)

lbl_8014E38C:
	lwz      r12, 0x34(r1)
	addi     r3, r1, 0x34
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E338

lbl_8014E3A8:
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x38(r1)
	cmplw    r4, r3
	bne      lbl_8014E258

lbl_8014E3C8:
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x30(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x24(r1)
	stw      r0, 0x28(r1)
	stw      r3, 0x2c(r1)
	bne      lbl_8014E408
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_8014E770

lbl_8014E408:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_8014E474

lbl_8014E420:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014E770
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)

lbl_8014E474:
	lwz      r12, 0x24(r1)
	addi     r3, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E420
	b        lbl_8014E770

lbl_8014E494:
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r31, r3
	cmpwi    r0, 5
	bne      lbl_8014E4D0
	lwz      r12, 0(r3)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E6B4

lbl_8014E4D0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014E6B4
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 5
	bne      lbl_8014E508
	mr       r3, r31
	bl       getCurrActionID__Q24Game4PikiFv
	mr       r3, r31
	bl       getStateID__Q24Game4PikiFv

lbl_8014E508:
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 0x28c(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	bl       transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x2c4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x4c(r1)
	lfd      f3, lbl_80518568@sda21(r2)
	stw      r0, 0x48(r1)
	lfs      f2, lbl_80518550@sda21(r2)
	lfd      f0, 0x48(r1)
	lfs      f1, lbl_80518558@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80518498@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f4, f1, f2
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8014E580
	fneg     f1, f4

lbl_8014E580:
	lfs      f2, lbl_80518560@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518498@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051855C@sda21(r2)
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f5, f3, f0
	bge      lbl_8014E5E0
	lfs      f0, lbl_80518564@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8014E5F8

lbl_8014E5E0:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8014E5F8:
	fmuls    f4, f3, f0
	lfs      f3, lbl_80518498@sda21(r2)
	stfs     f5, 0x20(r1)
	addi     r4, r1, 0x18
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	lfs      f2, 8(r29)
	lfs      f1, 4(r29)
	lfs      f0, 0(r29)
	fadds    f2, f5, f2
	fadds    f1, f3, f1
	fadds    f0, f4, f0
	stfs     f2, 0x20(r1)
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x1c(r1)
	mr       r3, r31
	addi     r4, r1, 0x18
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	li       r3, 0
	addi     r0, r4, __vt__Q26PikiAI9ActionArg@l
	lis      r4, __vt__Q26PikiAI17CreatureActionArg@ha
	stw      r0, 0xc(r1)
	addi     r7, r4, __vt__Q26PikiAI17CreatureActionArg@l
	lis      r4, __vt__Q26PikiAI19ActFormationInitArg@ha
	li       r0, 1
	stb      r3, 0x14(r1)
	addi     r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
	addi     r5, r1, 0xc
	li       r4, 0
	stw      r7, 0xc(r1)
	stw      r30, 0x10(r1)
	stw      r6, 0xc(r1)
	stb      r3, 0x15(r1)
	stb      r0, 0x14(r1)
	lwz      r3, 0x294(r31)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	mr       r3, r31
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8014E6B4:
	lwz      r0, 0x30(r1)
	cmplwi   r0, 0
	bne      lbl_8014E6E0
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_8014E770

lbl_8014E6E0:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)
	b        lbl_8014E754

lbl_8014E700:
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014E770
	lwz      r3, 0x2c(r1)
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r1)

lbl_8014E754:
	lwz      r12, 0x24(r1)
	addi     r3, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E700

lbl_8014E770:
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r1)
	cmplw    r4, r3
	bne      lbl_8014E494
	cmplwi   r30, 0
	beq      lbl_8014E7A0
	mr       r3, r30
	bl       demowaitAllPikis__Q24Game4NaviFv

lbl_8014E7A0:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014E7BC
 * Size:	000714
 */
// void prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3f(void)
void BaseGameSection::prepareFountainOn(Vector3f&)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r4
	lwz      r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014E9A4
	beq      lbl_8014E7E8
	addi     r3, r3, 0x30

lbl_8014E7E8:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x48(r1)
	cmplwi   r0, 0
	stw      r4, 0x3c(r1)
	stw      r0, 0x40(r1)
	stw      r3, 0x44(r1)
	bne      lbl_8014E824
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8014E984

lbl_8014E824:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8014E890

lbl_8014E83C:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014E984
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_8014E890:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E83C
	b        lbl_8014E984

lbl_8014E8B0:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	bl       killAllEffect__Q34Game15ItemBigFountain4ItemFv
	lwz      r0, 0x48(r1)
	cmplwi   r0, 0
	bne      lbl_8014E8F4
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8014E984

lbl_8014E8F4:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_8014E968

lbl_8014E914:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014E984
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_8014E968:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014E914

lbl_8014E984:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x40(r1)
	cmplw    r4, r3
	bne      lbl_8014E8B0

lbl_8014E9A4:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	bl       getAliveOrima__Q24Game7NaviMgrFi
	lwz      r4, mgr__Q24Game12ItemPikihead@sda21(r13)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_8014E9DC
	addi     r4, r4, 0x30

lbl_8014E9DC:
	li       r0, 0
	lis      r3, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
	addi     r3, r3, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
	stw      r0, 0x38(r1)
	cmplwi   r0, 0
	stw      r3, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r4, 0x34(r1)
	bne      lbl_8014EA1C
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8014EBFC

lbl_8014EA1C:
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8014EA8C

lbl_8014EA38:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014EBFC
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_8014EA8C:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014EA38
	b        lbl_8014EBFC

lbl_8014EAAC:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014EB40
	li       r3, 0
	bl       inc__Q24Game8DeathMgrFi
	li       r3, 7
	bl       inc__Q24Game8DeathMgrFi
	lwz      r5, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r5)
	cmpwi    r0, 2
	beq      lbl_8014EB04
	cmpwi    r0, 3
	bne      lbl_8014EB08

lbl_8014EB04:
	li       r3, 1

lbl_8014EB08:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014EB40
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game23GameMessageVsPikminDead@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	addi     r4, r1, 0xc
	stw      r0, 0xc(r1)
	addi     r0, r3, __vt__Q24Game23GameMessageVsPikminDead@l
	stw      r0, 0xc(r1)
	lwz      r3, 0x58(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_8014EB40:
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_8014EB6C
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8014EBFC

lbl_8014EB6C:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8014EBE0

lbl_8014EB8C:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014EBFC
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_8014EBE0:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014EB8C

lbl_8014EBFC:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_8014EAAC
	lis      r3, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r4, __vt__27PikiCond_ExceptChappyPikmin@ha
	addi     r0, r3, "__vt__23Condition<Q24Game4Piki>"@l
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stw      r0, 8(r1)
	addi     r0, r4, __vt__27PikiCond_ExceptChappyPikmin@l
	lfs      f1, lbl_8051855C@sda21(r2)
	mr       r4, r30
	stw      r0, 8(r1)
	addi     r5, r1, 8
	bl
"moveAllPikmins__Q24Game7PikiMgrFR10Vector3<f>fP23Condition<Q24Game4Piki>" li
r0, 0 lwz      r3, pikiMgr__4Game@sda21(r13) lis      r4,
"__vt__22Iterator<Q24Game4Piki>"@ha stw      r0, 0x28(r1) addi     r4, r4,
"__vt__22Iterator<Q24Game4Piki>"@l cmplwi   r0, 0 stw      r4, 0x1c(r1) stw r0,
0x20(r1) stw      r3, 0x24(r1) bne      lbl_8014EC88 lwz      r12, 0(r3) lwz
r12, 0x18(r12) mtctr    r12 bctrl stw      r3, 0x20(r1) b        lbl_8014EE88

lbl_8014EC88:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8014ECF4

lbl_8014ECA0:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014EE88
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_8014ECF4:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014ECA0
	b        lbl_8014EE88

lbl_8014ED14:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r30, r3
	cmpwi    r0, 5
	bne      lbl_8014ED44
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	b        lbl_8014EDCC

lbl_8014ED44:
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 0x28c(r30)
	mr       r4, r30
	li       r5, 0
	li       r6, 0
	bl       transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	li       r3, 0
	addi     r0, r4, __vt__Q26PikiAI9ActionArg@l
	lis      r4, __vt__Q26PikiAI17CreatureActionArg@ha
	stw      r0, 0x10(r1)
	addi     r5, r4, __vt__Q26PikiAI17CreatureActionArg@l
	lis      r4, __vt__Q26PikiAI19ActFormationInitArg@ha
	li       r0, 1
	stw      r5, 0x10(r1)
	addi     r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
	addi     r5, r1, 0x10
	li       r4, 0
	stw      r31, 0x14(r1)
	stw      r6, 0x10(r1)
	stb      r3, 0x18(r1)
	stb      r3, 0x19(r1)
	stw      r31, 0x2c4(r30)
	stb      r0, 0x18(r1)
	lwz      r3, 0x294(r30)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	mr       r3, r30
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8014EDCC:
	lwz      r0, 0x28(r1)
	cmplwi   r0, 0
	bne      lbl_8014EDF8
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8014EE88

lbl_8014EDF8:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_8014EE6C

lbl_8014EE18:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014EE88
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_8014EE6C:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014EE18

lbl_8014EE88:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r1)
	cmplw    r4, r3
	bne      lbl_8014ED14
	cmplwi   r31, 0
	beq      lbl_8014EEB8
	mr       r3, r31
	bl       demowaitAllPikis__Q24Game4NaviFv

lbl_8014EEB8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014EED0
 * Size:	000074
 */
void BaseGameSection::initLights(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x23a4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8014EF04
	lis      r4, lbl_8047CBC8@ha
	addi     r4, r4, lbl_8047CBC8@l
	bl       __ct__Q24Game12GameLightMgrFPc
	mr       r0, r3

lbl_8014EF04:
	stw      r0, 0x128(r31)
	mr       r3, r31
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r4, 0x128(r31)
	lwz      r0, 0x40(r5)
	stw      r0, 0x2338(r4)
	lwz      r4, 0x128(r31)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r0, 0x128(r31)
	lwz      r3, particleMgr@sda21(r13)
	stw      r0, 0x18(r3)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014EF44
 * Size:	000020
 */
void BaseGameSection::draw3D(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       newdraw_draw3D_all__Q24Game15BaseGameSectionFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014EF64
 * Size:	0001D4
 */
void BaseGameSection::drawParticle(Graphics&, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	lbz      r0, sDrawParticle__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8014F118
	mr       r3, r30
	mr       r4, r5
	bl       getViewport__8GraphicsFi
	or.      r31, r3, r3
	beq      lbl_8014F118
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014EFB8
	b        lbl_8014F118

lbl_8014EFB8:
	mr       r3, r31
	bl       setProjection__8ViewportFv
	mr       r3, r31
	bl       setViewport__8ViewportFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8014EFE4
	cmpwi    r0, 3
	bne      lbl_8014EFE8

lbl_8014EFE4:
	li       r3, 1

lbl_8014EFE8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014F038
	lwz      r0, 0xe4(r29)
	cmpwi    r0, 2
	beq      lbl_8014F038
	lwz      r3, 0x128(r29)
	mr       r4, r30
	lwz      r3, 0x2344(r3)
	bl       off__6FogMgrFR8Graphics
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r31
	li       r5, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x128(r29)
	mr       r4, r30
	lwz      r3, 0x2344(r3)
	bl       set__6FogMgrFR8Graphics

lbl_8014F038:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F084
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8014F084
	li       r28, 3
	b        lbl_8014F078

lbl_8014F058:
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r31
	mr       r5, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_8014F078:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 5
	ble      lbl_8014F058

lbl_8014F084:
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r31
	li       r5, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x128(r29)
	mr       r4, r30
	lwz      r3, 0x2344(r3)
	bl       off__6FogMgrFR8Graphics
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F0FC
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8014F0FC
	li       r28, 6
	b        lbl_8014F0F0

lbl_8014F0D0:
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r31
	mr       r5, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_8014F0F0:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 8
	ble      lbl_8014F0D0

lbl_8014F0FC:
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r31
	li       r5, 2
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_8014F118:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F138
 * Size:	0000A0
 */
void BaseGameSection::draw_Ogawa2D(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518570@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	mr       r4, r31
	bl       draw__Q26Screen9Game2DMgrFR8Graphics
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518570@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F1D8
 * Size:	000004
 */
void BaseGameSection::test_draw_treasure_detector(void) { }

/*
 * --INFO--
 * Address:	8014F1DC
 * Size:	0001BC
 */
void BaseGameSection::draw2D(Graphics&)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r4
	stw      r30, 0x78(r1)
	mr       r30, r3
	addi     r3, r5, j3dSys@l
	bl       reinitGX__6J3DSysFv
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x118(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x168(r30)
	cmplwi   r3, 0
	beq      lbl_8014F254
	lwz      r4, 0x16c(r30)
	li       r6, 4
	lwz      r5, 0x170(r30)
	li       r7, 0
	li       r8, 0
	bl       capture__10JUTTextureFii9_GXTexFmtbUc

lbl_8014F254:
	lwz      r0, 0x168(r30)
	cmplwi   r0, 0
	bne      lbl_8014F2AC
	lbz      r0, 0x164(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8014F2AC
	lwz      r3, 0x154(r30)
	li       r6, 4
	lwz      r4, 0x15c(r30)
	li       r7, 1
	lwz      r5, 0x160(r30)
	li       r8, 0
	bl       capture__10JUTTextureFii9_GXTexFmtbUc
	lbz      r0, 0x164(r30)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x164(r30)
	lbz      r0, 0x164(r30)
	ori      r0, r0, 1
	stb      r0, 0x164(r30)
	lbz      r0, 0x164(r30)
	ori      r0, r0, 4
	stb      r0, 0x164(r30)

lbl_8014F2AC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	mr       r4, r31
	bl       drawIndirect__Q26Screen9Game2DMgrFR8Graphics
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, systemFont__9JFWSystem@sda21(r13)
	addi     r3, r1, 0x18
	lfs      f1, lbl_80518498@sda21(r2)
	bl       __ct__8J2DPrintFP7JUTFontf
	addi     r3, r1, 0x18
	bl       initiate__8J2DPrintFv
	li       r10, 0xff
	li       r3, 0x9e
	li       r6, 0xdb
	li       r5, 0x38
	li       r4, 0x9f
	li       r0, 0xf7
	stb      r3, 0x10(r1)
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	stb      r6, 0x11(r1)
	stb      r10, 0x12(r1)
	stb      r10, 0x13(r1)
	lwz      r6, 0x10(r1)
	stb      r5, 8(r1)
	stw      r6, 0x14(r1)
	lbz      r5, 0x14(r1)
	lbz      r9, 0x15(r1)
	lbz      r8, 0x16(r1)
	lbz      r7, 0x17(r1)
	stb      r4, 9(r1)
	stb      r0, 0xa(r1)
	stb      r10, 0xb(r1)
	lwz      r0, 8(r1)
	stb      r5, 0x58(r1)
	stw      r0, 0xc(r1)
	lbz      r6, 0xc(r1)
	lbz      r5, 0xd(r1)
	lbz      r4, 0xe(r1)
	lbz      r0, 0xf(r1)
	stb      r9, 0x59(r1)
	stb      r8, 0x5a(r1)
	stb      r7, 0x5b(r1)
	stb      r6, 0x5c(r1)
	stb      r5, 0x5d(r1)
	stb      r4, 0x5e(r1)
	stb      r0, 0x5f(r1)
	bl       getFreeSize__7JKRHeapFv
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__8J2DPrintFv
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::setupViewportMatrix(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F398
 * Size:	0000B8
 */
void BaseGameSection::directDraw(Graphics&, Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r31
	bl       setViewport__8ViewportFv
	mr       r3, r31
	bl       setProjection__8ViewportFv
	mr       r3, r31
	li       r4, 1
	bl       getMatrix__8ViewportFb
	mr       r4, r3
	mr       r3, r30
	bl       initPrimDraw__8GraphicsFP7Matrixf
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       doDirectDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
	lwz      r0, sInstance__Q29TexCaster3Mgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8014F434
	mr       r3, r31
	li       r4, 1
	bl       getMatrix__8ViewportFb
	mr       r4, r3
	mr       r3, r30
	bl       initPrimDraw__8GraphicsFP7Matrixf
	lwz      r3, 0x128(r29)
	mr       r4, r30
	lwz      r3, 0x2344(r3)
	bl       set__6FogMgrFR8Graphics
	lwz      r3, sInstance__Q29TexCaster3Mgr@sda21(r13)
	mr       r4, r30
	bl       draw__Q29TexCaster3MgrFR8Graphics

lbl_8014F434:
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
 * Address:	8014F450
 * Size:	000078
 */
void BaseGameSection::directDrawPost(Graphics&, Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r31
	bl       setViewport__8ViewportFv
	mr       r3, r31
	bl       setProjection__8ViewportFv
	mr       r3, r31
	li       r4, 1
	bl       getMatrix__8ViewportFb
	mr       r4, r3
	mr       r3, r30
	bl       initPrimDraw__8GraphicsFP7Matrixf
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       doDirectDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
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
 * Address:	........
 * Size:	000140
 */
void BaseGameSection::j3dDraw(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawPostShadow(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawObjectLast(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawPost(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawLast(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F4C8
 * Size:	000054
 */
void BaseGameSection::j3dSetView(Viewport*, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r5
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       setJ3DViewMtx__8ViewportFb
	lhz      r4, 0x18(r31)
	mr       r3, r30
	bl       doSetView__Q24Game15BaseGameSectionFi
	mr       r3, r30
	bl       doViewCalc__Q24Game15BaseGameSectionFv
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
 * Address:	........
 * Size:	000068
 */
void BaseGameSection::j3dViewCalc(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F51C
 * Size:	000030
 */
void BaseGameSection::doSimulation(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F54C
 * Size:	000030
 */
void BaseGameSection::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F57C
 * Size:	0001D8
 */
void BaseGameSection::doAnimation(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	beq      lbl_8014F630
	lwz      r0, generatorMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8014F630
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	lwz      r3, generatorMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
	lwz      r3, onceGeneratorMgr__4Game@sda21(r13)
	addi     r4, r1, 0x14
	bl       "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
	lwz      r3, limitGeneratorMgr__4Game@sda21(r13)
	addi     r4, r1, 0x14
	bl       "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
	lwz      r3, plantsGeneratorMgr__4Game@sda21(r13)
	addi     r4, r1, 0x14
	bl       "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
	lwz      r3, dayGeneratorMgr__4Game@sda21(r13)
	addi     r4, r1, 0x14
	bl       "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"

lbl_8014F630:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F640
	bl       update__Q24Game10PathfinderFv

lbl_8014F640:
	lwz      r6, sys@sda21(r13)
	lis      r3, lbl_8047CC04@ha
	addi     r4, r3, lbl_8047CC04@l
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_8047CC04@ha
	addi     r4, r3, lbl_8047CC04@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	lwz      r3, particleMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F6AC
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4a(r4)
	cmplwi   r0, 0
	bne      lbl_8014F6AC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8014F6AC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8014F728
	lwz      r3, generatorMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F728
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, onceGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, limitGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, plantsGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, dayGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8014F728:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8014F740
	mr       r3, r31
	bl       updateSplitter__Q24Game15BaseGameSectionFv

lbl_8014F740:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F754
 * Size:	00004C
 */
// void changeGeneratorCursor__Q24Game15BaseGameSectionFR10Vector3f(void)
void BaseGameSection::changeGeneratorCursor(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F7A0
 * Size:	0000C8
 */
void BaseGameSection::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi
	lwz      r6, sys@sda21(r13)
	lis      r3, lbl_8047CC10@ha
	addi     r4, r3, lbl_8047CC10@l
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_8047CC10@ha
	addi     r4, r3, lbl_8047CC10@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	lwz      r6, sys@sda21(r13)
	lis      r3, lbl_8047CC1C@ha
	addi     r4, r3, lbl_8047CC1C@l
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r0, particleMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8014F840
	mr       r3, r31
	li       r4, 1
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi
	lwz      r3, particleMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8014F840:
	lwz      r5, sys@sda21(r13)
	lis      r3, lbl_8047CC1C@ha
	addi     r4, r3, lbl_8047CC1C@l
	lwz      r3, 0x28(r5)
	bl       _stop__9SysTimersFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F868
 * Size:	000100
 */
void BaseGameSection::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r0, 0x114(r3)
	cmpwi    r0, 1
	bne      lbl_8014F88C
	li       r31, 0

lbl_8014F88C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r3, particleMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F8C4
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8014F8C4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8014F954
	lwz      r3, generatorMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F954
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, onceGeneratorMgr__4Game@sda21(r13)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, limitGeneratorMgr__4Game@sda21(r13)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, plantsGeneratorMgr__4Game@sda21(r13)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, dayGeneratorMgr__4Game@sda21(r13)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8014F954:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014F968
 * Size:	0000C8
 */
void BaseGameSection::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r3, particleMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014F9A4
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_8014F9A4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8014FA20
	lwz      r3, generatorMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014FA20
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, onceGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, limitGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, plantsGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, dayGeneratorMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8014FA20:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void BaseGameSection::initBlendCamera()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FA30
 * Size:	000174
 */
void BaseGameSection::updateBlendCamera(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0xe4(r3)
	cmpwi    r0, 0
	bne      lbl_8014FAAC
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_80518578@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f2, 0x54(r29)
	fdivs    f1, f1, f0
	lfs      f0, lbl_80518498@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x54(r29)
	lfs      f1, 0x54(r29)
	fcmpo    cr0, f1, f0
	bge      lbl_8014FB20
	stfs     f0, 0x54(r29)
	li       r0, 0
	lfs      f1, lbl_805184A4@sda21(r2)
	stb      r0, 0x58(r29)
	lwz      r3, 0x118(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8014FB20

lbl_8014FAAC:
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_80518578@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f2, 0x54(r29)
	fdivs    f0, f1, f0
	lfs      f1, lbl_805184A4@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0x54(r29)
	lfs      f0, 0x54(r29)
	fcmpo    cr0, f0, f1
	ble      lbl_8014FB20
	stfs     f1, 0x54(r29)
	li       r0, 0
	stb      r0, 0x58(r29)
	lwz      r0, 0x114(r29)
	cmpwi    r0, 1
	bne      lbl_8014FB08
	lwz      r3, 0x118(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8014FB20

lbl_8014FB08:
	lwz      r3, 0x118(r29)
	lfs      f1, lbl_80518498@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8014FB20:
	lwz      r3, 0x50(r29)
	cmplwi   r3, 0
	beq      lbl_8014FB3C
	lfs      f1, 0x54(r29)
	bl       setBlendFactor__11BlendCameraFf
	lwz      r3, 0x50(r29)
	bl       update__6CameraFv

lbl_8014FB3C:
	lbz      r0, 0x58(r29)
	cmplwi   r0, 0
	bne      lbl_8014FB88
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	lwz      r31, 0x104(r29)
	lwz      r30, 0x24(r3)
	mr       r3, r30
	bl       getViewport__8GraphicsFi
	stw      r31, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	lwz      r31, 0x108(r29)
	mr       r3, r30
	li       r4, 1
	bl       getViewport__8GraphicsFi
	stw      r31, 0x44(r3)
	bl       updateCameraAspect__8ViewportFv
	mr       r3, r29
	bl       setCamController__Q24Game15BaseGameSectionFv

lbl_8014FB88:
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
 * Address:	........
 * Size:	0000DC
 */
void BaseGameSection::blend1to2()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void BaseGameSection::blend2to1()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FBA4
 * Size:	00006C
 */
void BaseGameSection::setSplitter(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	mr       r4, r3
	beq      lbl_8014FBD0
	lfs      f0, lbl_8051854C@sda21(r2)
	li       r0, 1
	stfs     f0, 0xe8(r4)
	stb      r0, 0xf0(r4)
	b        lbl_8014FBE0

lbl_8014FBD0:
	lfs      f0, lbl_805184A4@sda21(r2)
	li       r0, 0
	stfs     f0, 0xe8(r4)
	stb      r0, 0xf0(r4)

lbl_8014FBE0:
	lfs      f0, lbl_80518498@sda21(r2)
	stfs     f0, 0xec(r4)
	lwz      r3, 0x118(r4)
	lfs      f1, 0xe8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::startSplit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::changeSplit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::endSplit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FC10
 * Size:	000134
 */
void BaseGameSection::updateSplitter(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518498@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f2, 0xec(r3)
	fcmpu    cr0, f0, f2
	bne      lbl_8014FC54
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8014FC54
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_8014FD30

lbl_8014FC54:
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0xe8(r31)
	lfs      f1, 0x54(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0xe8(r31)
	lwz      r0, 0xe4(r31)
	cmpwi    r0, 2
	bne      lbl_8014FCA8
	lfs      f1, 0xe8(r31)
	lfs      f0, lbl_8051854C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8014FCA8
	stfs     f0, 0xe8(r31)
	li       r0, 1
	lfs      f0, lbl_80518498@sda21(r2)
	mr       r3, r31
	stfs     f0, 0xec(r31)
	stb      r0, 0xf0(r31)
	bl       setCamController__Q24Game15BaseGameSectionFv
	b        lbl_8014FD10

lbl_8014FCA8:
	cmpwi    r0, 0
	bne      lbl_8014FCE4
	lfs      f1, 0xe8(r31)
	lfs      f0, lbl_805184A4@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8014FCE4
	stfs     f0, 0xe8(r31)
	li       r0, 0
	lfs      f0, lbl_80518498@sda21(r2)
	mr       r3, r31
	stfs     f0, 0xec(r31)
	stb      r0, 0xf0(r31)
	bl       setCamController__Q24Game15BaseGameSectionFv
	b        lbl_8014FD10

lbl_8014FCE4:
	cmpwi    r0, 1
	bne      lbl_8014FD10
	lfs      f1, 0xe8(r31)
	lfs      f0, lbl_80518498@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8014FD10
	stfs     f0, 0xe8(r31)
	mr       r3, r31
	stfs     f0, 0xec(r31)
	bl       setCamController__Q24Game15BaseGameSectionFv

lbl_8014FD10:
	lwz      r3, 0x118(r31)
	cmplwi   r3, 0
	beq      lbl_8014FD30
	lwz      r12, 0(r3)
	lfs      f1, 0xe8(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8014FD30:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014FD44
 * Size:	000058
 */
void BaseGameSection::doDirectDrawPost(Graphics&, Viewport*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, lifeGaugeMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014FD68
	bl       draw__12LifeGaugeMgrFR8Graphics

lbl_8014FD68:
	lwz      r3, carryInfoMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014FD88
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8014FD88:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8014FD9C
 * Size:	000004
 */
void BaseGameSection::doDirectDraw(Graphics&, Viewport*) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void BaseGameSection::startHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FDA0
 * Size:	000004
 */
void BaseGameSection::onStartHeap(void) { }

/*
 * --INFO--
 * Address:	8014FDA4
 * Size:	0002A8
 */
void BaseGameSection::clearHeap(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       deleteInstance__Q29TexCaster3MgrFv
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8014FDE8
	lis      r3, lbl_8047C9AC@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C9AC@l
	li       r4, 0x1d3
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014FDE8:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8014FE10
	lis      r3, lbl_8047C9AC@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C9AC@l
	li       r4, 0x1dc
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8014FE10:
	mr       r3, r30
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	bl       GXWaitDrawDone
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       clearGlobalPointers__Q24Game7ItemMgrFv
	li       r0, 0
	stw      r0, platCellMgr__4Game@sda21(r13)
	stw      r0, cellMgr__4Game@sda21(r13)
	lwz      r3, 0x12c(r31)
	bl       frameInitAll__Q23Sys11DrawBuffersFv
	lwz      r3, 0x130(r31)
	bl       frameInitAll__Q23Sys11DrawBuffersFv
	lwz      r3, particleMgr@sda21(r13)
	bl       killAll__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       reset__11ParticleMgrFv
	bl       initialiseSystem__Q24Game9GeneratorFv
	lwz      r3, 0x104(r31)
	bl       del__5CNodeFv
	lwz      r3, 0x108(r31)
	bl       del__5CNodeFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, generatorMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, onceGeneratorMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, limitGeneratorMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, plantsGeneratorMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, dayGeneratorMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8014FEC0
	addi     r3, r3, 4
	bl       del__5CNodeFv

lbl_8014FEC0:
	lwz      r3, 0x128(r31)
	bl       del__5CNodeFv
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, dynParticleMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8014FF28
	lwz      r4, 0(r4)

lbl_8014FF28:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, itemMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8014FF40
	addi     r4, r4, 0x1c

lbl_8014FF40:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8014FF58
	lwz      r4, 0(r4)

lbl_8014FF58:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	li       r0, 0
	mr       r3, r31
	stw      r0, mapMgr__4Game@sda21(r13)
	lwz      r12, 0(r31)
	lwz      r12, 0x130(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, mapMgr__4Game@sda21(r13)
	stw      r0, platMgr__4Game@sda21(r13)
	stw      r0, cameraMgr__4Game@sda21(r13)
	stw      r0, shadowMgr__4Game@sda21(r13)
	stw      r0, carryInfoMgr@sda21(r13)
	stw      r0, lifeGaugeMgr@sda21(r13)
	stw      r0, 0x50(r31)
	lwz      r3, 0x10c(r31)
	cmplwi   r3, 0
	beq      lbl_8014FFC0
	beq      lbl_8014FFC0
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8014FFC0:
	lwz      r3, 0x110(r31)
	cmplwi   r3, 0
	beq      lbl_8014FFE4
	beq      lbl_8014FFE4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8014FFE4:
	li       r0, 0
	stw      r0, 0x110(r31)
	stw      r0, 0x10c(r31)
	stw      r0, 0x108(r31)
	stw      r0, 0x104(r31)
	stw      r0, rumbleMgr__4Game@sda21(r13)
	stw      r0, cameraMgr__4Game@sda21(r13)
	stw      r0, itemMgr__4Game@sda21(r13)
	stw      r0, generalEnemyMgr__4Game@sda21(r13)
	stw      r0, testPathfinder__4Game@sda21(r13)
	stw      r0, 0x14c(r31)
	lwz      r3, 0xfc(r31)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0xfc(r31)
	stw      r0, theExpHeap@sda21(r13)
	lwz      r3, 0x100(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * Controller
 * --INFO--
 * Address:	8015004C
 * Size:	000060
 */
Controller::~Controller()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80150090
	lis      r5, __vt__10Controller@ha
	li       r4, 0
	addi     r0, r5, __vt__10Controller@l
	stw      r0, 0(r30)
	bl       __dt__10JUTGamePadFv
	extsh.   r0, r31
	ble      lbl_80150090
	mr       r3, r30
	bl       __dl__FPv

lbl_80150090:
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

/*
 * --INFO--
 * Address:	801500AC
 * Size:	000004
 */
void BaseGameSection::onClearHeap(void) { }

/*
 * --INFO--
 * Address:	801500B0
 * Size:	00002C
 */
void BaseGameSection::startFadeout(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0xd8(r3)
	stw      r0, 0x18(r3)
	lwz      r3, 0xd8(r3)
	bl       start__8WipeBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801500DC
 * Size:	00002C
 */
void BaseGameSection::startFadein(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0xd4(r3)
	stw      r0, 0x18(r3)
	lwz      r3, 0xd4(r3)
	bl       start__8WipeBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80150108
 * Size:	00002C
 */
void BaseGameSection::startFadeoutin(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0xdc(r3)
	stw      r0, 0x18(r3)
	lwz      r3, 0xdc(r3)
	bl       start__8WipeBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80150134
 * Size:	00003C
 */
void BaseGameSection::startFadeblack(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051857C@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 1
	lwz      r4, 0xd0(r3)
	stw      r4, 0x18(r3)
	lwz      r4, 0xd0(r3)
	stb      r0, 0x28(r4)
	lwz      r3, 0xd0(r3)
	bl       start__8WipeBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80150170
 * Size:	00003C
 */
void BaseGameSection::startFadewhite(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051857C@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	lwz      r4, 0xd0(r3)
	stw      r4, 0x18(r3)
	lwz      r4, 0xd0(r3)
	stb      r0, 0x28(r4)
	lwz      r3, 0xd0(r3)
	bl       start__8WipeBaseFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801501AC
 * Size:	0001C0
 */
void BaseGameSection::setupFixMemory(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0x14
	stw      r30, 0x18(r1)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8015021C
	lis      r3, lbl_804B0CD4@ha
	lis      r4, __vt__9IDelegate@ha
	addi     r7, r3, lbl_804B0CD4@l
	lis      r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@ha
	lwz      r6, 0(r7)
	addi     r4, r4, __vt__9IDelegate@l
	lwz      r5, 4(r7)
	addi     r0, r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@l
	lwz      r3, 8(r7)
	stw      r6, 8(r1)
	stw      r4, 0(r30)
	stw      r0, 0(r30)
	stw      r31, 4(r30)
	stw      r6, 8(r30)
	stw      r5, 0xc(r30)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r3, 0x10(r30)

lbl_8015021C:
	mr       r3, r31
	bl       beginFrame__7SectionFv
	mr       r3, r31
	bl       beginRender__7SectionFv
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       drawInit__6J3DSysFv
	lfs      f1, lbl_80518498@sda21(r2)
	lfs      f3, lbl_8051849C@sda21(r2)
	fmr      f2, f1
	lfs      f4, lbl_805184A0@sda21(r2)
	fmr      f5, f1
	lfs      f6, lbl_805184A4@sda21(r2)
	bl       GXSetViewport
	li       r3, 0
	li       r4, 0x10
	li       r5, 0x260
	li       r6, 0x1c0
	bl       GXSetScissor
	mr       r3, r31
	bl       endRender__7SectionFv
	lwz      r3, sys@sda21(r13)
	mr       r5, r30
	addi     r4, r31, 0x5c
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	lbz      r0, init$4568@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8015029C
	li       r3, 0
	li       r0, 1
	stw      r3, col$4567@sda21(r13)
	stb      r0, init$4568@sda21(r13)

lbl_8015029C:
	lwz      r4, col$4567@sda21(r13)
	mr       r3, r31
	addi     r0, r4, 1
	stw      r0, col$4567@sda21(r13)
	bl       endFrame__7SectionFv
	lis      r4, lbl_8047C9C4@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8047C9C4@l
	li       r6, 3
	li       r4, 1
	bl       setPause__Q24Game10GameSystemFbPci
	lis      r3, j3dSys@ha
	addi     r30, r3, j3dSys@l

lbl_801502D0:
	mr       r3, r31
	bl       beginFrame__7SectionFv
	mr       r3, r31
	bl       beginRender__7SectionFv
	mr       r3, r30
	bl       drawInit__6J3DSysFv
	lfs      f1, lbl_80518498@sda21(r2)
	lfs      f3, lbl_8051849C@sda21(r2)
	fmr      f2, f1
	lfs      f4, lbl_805184A0@sda21(r2)
	fmr      f5, f1
	lfs      f6, lbl_805184A4@sda21(r2)
	bl       GXSetViewport
	li       r3, 0
	li       r4, 0x10
	li       r5, 0x260
	li       r6, 0x1c0
	bl       GXSetScissor
	mr       r3, r31
	bl       endRender__7SectionFv
	lwz      r0, 0x74(r31)
	cmpwi    r0, 2
	bne      lbl_80150348
	lis      r4, lbl_8047C9C4@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8047C9C4@l
	li       r6, 3
	li       r4, 0
	bl       setPause__Q24Game10GameSystemFbPci
	b        lbl_80150354

lbl_80150348:
	mr       r3, r31
	bl       endFrame__7SectionFv
	b        lbl_801502D0

lbl_80150354:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015036C
 * Size:	000334
 */
void BaseGameSection::setupFixMemory_dvdload(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8047C948@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8047C948@l
	addi     r4, r31, 0x2e0
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r0, 0
	addi     r3, r31, 0x2f0
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
	mr       r0, r3
	li       r3, 0x40
	mr       r28, r0
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80150408
	li       r0, 0
	mr       r4, r28
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_80150408:
	stw      r29, 0xf4(r30)
	addi     r4, r31, 0x304
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80150454
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r0, 4(r3)
	mr       r3, r29
	rlwinm   r5, r28, 0x1f, 0x11, 0x1f
	li       r6, 4
	rlwinm   r4, r0, 0x1f, 0x11, 0x1f
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r29, r3

lbl_80150454:
	stw      r29, 0x154(r30)
	addi     r4, r31, 0x304
	lwz      r0, 0x154(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x54(r3)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x14c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	bl       globalInstance__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	lis      r4, 0x18
	bl       createHeap__11ParticleMgrFUl
	lwz      r3, particleMgr@sda21(r13)
	addi     r4, r31, 0x310
	li       r5, 0x7d0
	li       r6, 0x12c
	li       r7, 0x80
	bl       createMgr__11ParticleMgrFPcUlUlUl
	lwz      r4, particleMgr@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	bl       globalInstance__14TParticle2dMgrFv
	lis      r4, 0x0003E800@ha
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r4, r4, 0x0003E800@l
	bl       createHeap__14TParticle2dMgrFUl
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r4, r31, 0x330
	li       r5, 0x1d4
	li       r6, 0x28
	li       r7, 0x80
	bl       createMgr__14TParticle2dMgrFPcUlUlUl
	lwz      r4, particle2dMgr@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, particleMgr@sda21(r13)
	bl       beginEntryModelEffect__11ParticleMgrFv
	li       r3, 0x30
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80150520
	bl       __ct__5CNodeFv
	lis      r4, __vt__15ModelEffectData@ha
	lis      r3, __vt__Q23efx13OnyonSpotData@ha
	addi     r0, r4, __vt__15ModelEffectData@l
	stw      r0, 0(r29)
	addi     r0, r3, __vt__Q23efx13OnyonSpotData@l
	stw      r0, 0(r29)

lbl_80150520:
	mr       r3, r29
	bl       entry__15ModelEffectDataFv
	lwz      r3, particleMgr@sda21(r13)
	bl       endEntryModelEffect__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       Instance_TPkEffectMgr__11ParticleMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x14c
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015055C
	bl       __ct__Q24Game9UpdateMgrFv
	mr       r0, r3

lbl_8015055C:
	stw      r0, collisionUpdateMgr__4Game@sda21(r13)
	mr       r3, r0
	li       r4, 3
	bl       create__Q24Game9UpdateMgrFi
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x358
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0xd0
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80150594
	bl       __ct__Q24Game7NaviMgrFv
	mr       r4, r3

lbl_80150594:
	cmplwi   r4, 0
	stw      r4, naviMgr__4Game@sda21(r13)
	beq      lbl_801505A4
	addi     r4, r4, 0x1c

lbl_801505A4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	li       r3, 0x80
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801505D8
	bl       __ct__Q24Game7PikiMgrFv
	mr       r4, r3

lbl_801505D8:
	cmplwi   r4, 0
	stw      r4, pikiMgr__4Game@sda21(r13)
	beq      lbl_801505E8
	addi     r4, r4, 0x1c

lbl_801505E8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, pikiMgr__4Game@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r4, naviMgr__4Game@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r4, 0x114(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x358
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x40
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150644
	bl       __ct__Q24Game9PelletMgrFv
	mr       r0, r3

lbl_80150644:
	stw      r0, pelletMgr__4Game@sda21(r13)
	mr       r3, r0
	li       r4, 0
	bl       createManagers__Q24Game9PelletMgrFUl
	lwz      r4, pelletMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150664
	addi     r4, r4, 0x1c

lbl_80150664:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	mr       r3, r30
	bl       createScreenRootNode__Q24Game14BaseHIOSectionFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2e0
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801506A0
 * Size:	000060
 */
ModelEffectData::~ModelEffectData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801506E4
	lis      r5, __vt__15ModelEffectData@ha
	li       r4, 0
	addi     r0, r5, __vt__15ModelEffectData@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801506E4
	mr       r3, r30
	bl       __dl__FPv

lbl_801506E4:
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
 * Address:	........
 * Size:	000050
 */
void BaseGameAllocCallback(unsigned long, int, JKRHeap*, void*)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	80150700
 * Size:	000008
 */
bool BaseGameSection::enableAllocHalt(void) { return false; }

/*
 * --INFO--
 * Address:	80150708
 * Size:	000008
 */
bool BaseGameSection::disableAllocHalt(void) { return false; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
bool BaseGameSection::isAllocHalt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80150710
 * Size:	000CC0
 */
void BaseGameSection::setupFloatMemory(void)
{
	/*
	stwu     r1, -0x2c0(r1)
	mflr     r0
	stw      r0, 0x2c4(r1)
	stfd     f31, 0x2b0(r1)
	psq_st   f31, 696(r1), 0, qr0
	stmw     r27, 0x29c(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lis      r5, lbl_8047C948@ha
	mr       r31, r3
	li       r29, 0
	lbz      r0, 0x3c(r4)
	addi     r30, r5, lbl_8047C948@l
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x3c(r4)
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	beq      lbl_80150768
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80150768:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_801507DC
	li       r3, 0x30
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_801507D8
	mr       r27, r5
	bl       initiate__10JSUPtrListFv
	lis      r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
	addic.   r4, r27, 0xc
	addi     r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
	stw      r0, 0xc(r27)
	beq      lbl_801507A4
	addi     r4, r4, -12

lbl_801507A4:
	stw      r4,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) addi     r3,
r27, 0x10 bl       __ct__11JKRDisposerFv lis      r3, __vt__Q23PSM6ObjMgr@ha li
r0, 0 addi     r3, r3, __vt__Q23PSM6ObjMgr@l mr       r5, r27 stw      r3,
0x28(r27) addi     r4, r3, 8 addi     r3, r3, 0x14 stw      r4, 0xc(r27) stw r3,
0x10(r27) stw      r0, 0x2c(r27)

lbl_801507D8:
	stw      r5,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)

lbl_801507DC:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_801507FC
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801507FC:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8015081C
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015081C:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80150844
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150840
	bl       __ct__Q33PSM12BossBgmFader3MgrFv
	mr       r0, r3

lbl_80150840:
	stw      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)

lbl_80150844:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80150864
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80150864:
	lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r3, r28
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r28
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xfc(r31)
	lwz      r0, 0xfc(r31)
	stw      r0, theExpHeap@sda21(r13)
	lwz      r3, 0xfc(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	stw      r3, 0x100(r31)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x38c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       loadResources_float__Q24Game7NaviMgrFv
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801508D8
	bl       __ct__12LifeGaugeMgrFv
	mr       r0, r3

lbl_801508D8:
	stw      r0, lifeGaugeMgr@sda21(r13)
	mr       r3, r0
	bl       loadResource__12LifeGaugeMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_80150918
	li       r3, 0xec
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150910
	li       r4, 0x30
	bl       __ct__12CarryInfoMgrFi
	mr       r0, r3

lbl_80150910:
	stw      r0, carryInfoMgr@sda21(r13)
	b        lbl_80150938

lbl_80150918:
	li       r3, 0xec
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150934
	li       r4, 0x40
	bl       __ct__12CarryInfoMgrFi
	mr       r0, r3

lbl_80150934:
	stw      r0, carryInfoMgr@sda21(r13)

lbl_80150938:
	lwz      r3, carryInfoMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150964
	bl       __ct__Q24Game7PlatMgrFv
	mr       r0, r3

lbl_80150964:
	stw      r0, platMgr__4Game@sda21(r13)
	li       r3, 0x50
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80150984
	li       r4, 2
	bl       __ct__Q24Game9ShadowMgrFi
	mr       r4, r3

lbl_80150984:
	stw      r4, shadowMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x108(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 2
	bl       "alloc__27MonoObjectMgr<Q24Game4Navi>Fi"
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	mr       r28, r0
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	li       r3, 0xb0
	mr       r27, r0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A0C
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80150A0C:
	stw      r0, 0x10c(r31)
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A2C
	li       r4, 1
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80150A2C:
	stw      r0, 0x110(r31)
	li       r3, 0x254
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A4C
	mr       r4, r28
	bl       __ct__Q24Game10PlayCameraFPQ24Game4Navi
	mr       r0, r3

lbl_80150A4C:
	stw      r0, 0x104(r31)
	li       r3, 0x254
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A6C
	mr       r4, r27
	bl       __ct__Q24Game10PlayCameraFPQ24Game4Navi
	mr       r0, r3

lbl_80150A6C:
	stw      r0, 0x108(r31)
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A88
	bl       __ct__Q24Game9CameraMgrFv
	mr       r0, r3

lbl_80150A88:
	stw      r0, cameraMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9CameraMgrFv
	lwz      r4, cameraMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r4, lbl_80520E58@sda21(r2)
	li       r3, 0x180
	lwz      r0, lbl_80520E5C@sda21(r2)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r0, 0x104(r31)
	stw      r0, 8(r1)
	lwz      r0, 0x108(r31)
	stw      r0, 0xc(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150AE0
	addi     r5, r1, 8
	li       r4, 2
	bl       __ct__11BlendCameraFiPP6Camera
	mr       r0, r3

lbl_80150AE0:
	stw      r0, 0x50(r31)
	li       r0, 0
	li       r3, 0x34
	stb      r0, 0x58(r31)
	lwz      r0, 0x104(r31)
	lwz      r4, 0x128(r31)
	stw      r0, 0x233c(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150B10
	bl       __ct__Q24Game9RumbleMgrFv
	mr       r0, r3

lbl_80150B10:
	stw      r0, rumbleMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9RumbleMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	bl       init__Q24Game9RumbleMgrFv
	lwz      r4, rumbleMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r27, 0
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80150B48
	li       r27, 1

lbl_80150B48:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518580@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150B70
	bl       __ct__Q24Game7ItemMgrFv
	mr       r0, r3

lbl_80150B70:
	stw      r0, itemMgr__4Game@sda21(r13)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80150BA0
	lwz      r3, itemMgr__4Game@sda21(r13)
	li       r4, 3
	bl       createManagers__Q24Game7ItemMgrFUl
	b        lbl_80150BC4

lbl_80150BA0:
	clrlwi.  r0, r27, 0x18
	beq      lbl_80150BB8
	lwz      r3, itemMgr__4Game@sda21(r13)
	li       r4, 1
	bl       createManagers__Q24Game7ItemMgrFUl
	b        lbl_80150BC4

lbl_80150BB8:
	lwz      r3, itemMgr__4Game@sda21(r13)
	li       r4, 2
	bl       createManagers__Q24Game7ItemMgrFUl

lbl_80150BC4:
	lwz      r4, itemMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150BD4
	addi     r4, r4, 0x1c

lbl_80150BD4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, itemMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518580@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3a0
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0x64
	bl       "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3a0
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x90
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80150C34
	bl       __ct__Q24Game15GeneralEnemyMgrFv
	mr       r4, r3

lbl_80150C34:
	stw      r4, generalEnemyMgr__4Game@sda21(r13)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150C50
	addi     r4, r4, 4

lbl_80150C50:
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80151158
	mr       r3, r31
	li       r29, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	addi     r3, r1, 0x94
	addi     r4, r30, 0x3b4
	crclr    6
	bl       sprintf
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x94
	bl       load__Q34Game4Cave8CaveInfoFPc
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r27, r3
	li       r28, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_80150D6C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r2, lbl_80518588@sda21
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_80150D6C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	addi     r3, r1, 0x94
	addi     r4, r30, 0x3d4
	crclr    6
	bl       sprintf
	li       r3, 0x20
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80150D40
	bl       __ct__Q34Game4Cave11EditMapUnitFv
	mr       r28, r3

lbl_80150D40:
	mr       r3, r28
	addi     r4, r1, 0x94
	bl       read__Q34Game4Cave11EditMapUnitFPc
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r28
	bl       setEditNumber__Q34Game4Cave11EditMapUnitFi

lbl_80150D6C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80150D90
	mr       r3, r27
	bl       disablePelplant__Q34Game4Cave8CaveInfoFv

lbl_80150D90:
	li       r3, 0x120
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150DB0
	mr       r5, r27
	li       r4, 1
	bl       __ct__Q24Game10RoomMapMgrFPQ34Game4Cave8CaveInfo
	mr       r0, r3

lbl_80150DB0:
	stw      r0, mapMgr__4Game@sda21(r13)
	addi     r4, r2, lbl_80518590@sda21
	lwz      r3, sys@sda21(r13)
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, mapMgr__4Game@sda21(r13)
	mr       r5, r28
	bl       createRandomMap__Q24Game10RoomMapMgrFiPQ34Game4Cave11EditMapUnit
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518590@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150E04
	lwz      r4, 0(r4)

lbl_80150E04:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80150FDC
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x37
	stw      r0, 0x88(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x88(r1)
	addi     r4, r1, 0x88
	stw      r5, 0x8c(r1)
	stw      r0, 0x90(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x17
	stw      r0, 0x7c(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x7c(r1)
	addi     r4, r1, 0x7c
	stw      r5, 0x80(r1)
	stw      r0, 0x84(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x13
	stw      r0, 0x70(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 0xc
	mr       r3, r31
	stw      r4, 0x70(r1)
	addi     r4, r1, 0x70
	stw      r5, 0x74(r1)
	stw      r0, 0x78(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x5d
	stw      r0, 0x64(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 2
	mr       r3, r31
	stw      r4, 0x64(r1)
	addi     r4, r1, 0x64
	stw      r5, 0x68(r1)
	stw      r0, 0x6c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x18
	stw      r0, 0x58(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x58(r1)
	addi     r4, r1, 0x58
	stw      r5, 0x5c(r1)
	stw      r0, 0x60(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x19
	stw      r0, 0x4c(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x4c(r1)
	addi     r4, r1, 0x4c
	stw      r5, 0x50(r1)
	stw      r0, 0x54(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0xe
	stw      r0, 0x40(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 0x14
	mr       r3, r31
	stw      r4, 0x40(r1)
	addi     r4, r1, 0x40
	stw      r5, 0x44(r1)
	stw      r0, 0x48(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_80150FDC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lfs      f1, lbl_805185A0@sda21(r2)
	addi     r4, r1, 0x30
	lfs      f0, lbl_805185A4@sda21(r2)
	stfs     f1, 0x30(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	stfs     f0, 0x3c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80151044
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_80151044:
	stw      r0, platCellMgr__4Game@sda21(r13)
	mr       r3, r0
	lfs      f1, lbl_805185A8@sda21(r2)
	addi     r4, r1, 0x30
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	bl       heapStatusEnd__6SystemFPc
	lfs      f1, lbl_805185A0@sda21(r2)
	addi     r4, r1, 0x20
	lfs      f0, lbl_805185A4@sda21(r2)
	stfs     f1, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3f0
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801510BC
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_801510BC:
	stw      r0, mapRoomCellMgr__4Game@sda21(r13)
	mr       r3, r0
	lfs      f1, lbl_805185AC@sda21(r2)
	addi     r4, r1, 0x20
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3f0
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       entryToMapRoomCellMgr__Q24Game10RoomMapMgrFv
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       createGlobalCollision__Q24Game10RoomMapMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x114(r31)
	li       r5, -1
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	clrlwi   r4, r0, 0x18
	bl       allocateEnemys__Q24Game15GeneralEnemyMgrFUci
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       setupResources__Q24Game9PelletMgrFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80151144
	lwz      r3, playData__4Game@sda21(r13)
	li       r0, 1
	stb      r0, 0x6c(r3)

lbl_80151144:
	bl       globalInstance__Q29TexCaster3MgrFv
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r3, 8(r3)
	bl       setCloseAll__Q24Game8RouteMgrFv
	b        lbl_8015115C

lbl_80151158:
	bl       globalInstance__Q29TexCaster3MgrFv

lbl_8015115C:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_801511A0
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80151184
	bl       __ct__Q24Game10PathfinderFv
	mr       r0, r3

lbl_80151184:
	stw      r0, testPathfinder__4Game@sda21(r13)
	mr       r3, r0
	lwz      r5, mapMgr__4Game@sda21(r13)
	li       r4, 0x64
	lwz      r5, 8(r5)
	bl       create__Q24Game10PathfinderFiPQ24Game8RouteMgr
	b        lbl_801511A8

lbl_801511A0:
	li       r0, 0
	stw      r0, testPathfinder__4Game@sda21(r13)

lbl_801511A8:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beq      lbl_801511BC
	bl       refreshWater__Q24Game8RouteMgrFv

lbl_801511BC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801511E4
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_801511E4:
	lfs      f1, lbl_805185A0@sda21(r2)
	addi     r4, r1, 0x10
	lfs      f0, lbl_805185A4@sda21(r2)
	stw      r0, cellMgr__4Game@sda21(r13)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	addi     r4, r1, 0x10
	lfs      f1, lbl_805185B0@sda21(r2)
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	clrlwi.  r0, r29, 0x18
	bne      lbl_80151280
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80151260
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_80151260:
	stw      r0, platCellMgr__4Game@sda21(r13)
	mr       r3, r0
	lfs      f1, lbl_805185A8@sda21(r2)
	addi     r4, r1, 0x10
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	bl       heapStatusEnd__6SystemFPc

lbl_80151280:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	bl       heapStatusEnd__6SystemFPc
	clrlwi.  r0, r29, 0x18
	beq      lbl_8015129C
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       placeObjects__Q24Game10RoomMapMgrFv

lbl_8015129C:
	mr       r3, r31
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r31)
	lwz      r28, 0x24(r4)
	lwz      r12, 0xfc(r12)
	mr       r4, r28
	mtctr    r12
	bctrl
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r28
	bl       setViewport__11ParticleMgrFR8Graphics
	lwz      r3, particleMgr@sda21(r13)
	bl       start__11ParticleMgrFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x104(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       initDependency__Q24Game7ItemMgrFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 0
	bl       init__Q24Game9CameraMgrFi
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f1, lbl_805185B8@sda21(r2)
	lfs      f0, 0x58(r3)
	lfs      f2, lbl_805185B4@sda21(r2)
	fmuls    f0, f1, f0
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f31, f2, f0
	bl       getMapRotation__Q24Game6MapMgrFv
	fadds    f1, f31, f1
	bl       roundAng__Ff
	fmr      f31, f1
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       getMapRotation__Q24Game6MapMgrFv
	fmr      f1, f31
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	bl       setCameraAngle__Q24Game9CameraMgrFfi
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	bl       controllerUnLock__Q24Game9CameraMgrFi
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x38c
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, pikiMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game7PikiMgrFv
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game7NaviMgrFv
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game7ItemMgrFv
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game9PelletMgrFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	ori      r0, r0, 1
	stb      r0, 0x3c(r3)
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801513A8
	bl       setupSound__Q34Game4Farm7FarmMgrFv

lbl_801513A8:
	addi     r3, r30, 0x400
	crclr    6
	bl       OSReport
	psq_l    f31, 696(r1), 0, qr0
	lfd      f31, 0x2b0(r1)
	lmw      r27, 0x29c(r1)
	lwz      r0, 0x2c4(r1)
	mtlr     r0
	addi     r1, r1, 0x2c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801513D0
 * Size:	000004
 */
void BaseGameSection::onSetSoundScene(void) { }

/*
 * --INFO--
 * Address:	801513D4
 * Size:	000008
 */
s32 BaseGameSection::getCurrFloor(void) { return -0x1; }

/*
 * --INFO--
 * Address:	801513DC
 * Size:	000008
 */
u32 BaseGameSection::challengeDisablePelplant(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801513E4
 * Size:	000008
 */
s32 BaseGameSection::getVsEditNumber(void) { return -0x2; }

/*
 * --INFO--
 * Address:	801513EC
 * Size:	000008
 */
void BaseGameSection::getEditorFilename(void)
{
	/*
	addi     r3, r2, lbl_80518588@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	801513F4
 * Size:	00000C
 */
void BaseGameSection::getCaveFilename(void)
{
	/*
	lis      r3, lbl_8047CD58@ha
	addi     r3, r3, lbl_8047CD58@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80151400
 * Size:	000004
 */
void BaseGameSection::onSetupFloatMemory(void) { }

/*
 * --INFO--
 * Address:	80151404
 * Size:	000008
 */
u32 BaseGameSection::isDevelopSection(void) { return 0x1; }

} // namespace Game

/*
 * --INFO--
 * Address:	8015140C
 * Size:	000050
 */
void __dt__Q28PSSystem28SingletonBase<PSM::ObjMgr> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80151444
	lis      r5, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
	extsh.   r0, r4
	addi     r4, r5, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
	li       r0, 0
	stw      r4, 0(r31)
	stw      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) ble
lbl_80151444 bl       __dl__FPv

lbl_80151444:
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
 * Address:	........
 * Size:	000054
 */
void JSUList<PSM::ObjBase>::~JSUList()
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	8015145C
 * Size:	0000A4
 */
void BaseGameSection::setDrawBuffer(int index)
{
	P2ASSERTBOUNDSLINE(5295, 1, index, 10);
	j3dSys._48 = _12C->get(index)->_1C;
	j3dSys._4C = _130->get(index)->_1C;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_8015148C
	cmpwi    r31, 0xa
	bge      lbl_8015148C
	li       r0, 1

lbl_8015148C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801514B0
	lis      r3, lbl_8047C964@ha
	lis      r5, lbl_8047C9B8@ha
	addi     r3, r3, lbl_8047C964@l
	li       r4, 0x14af
	addi     r5, r5, lbl_8047C9B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801514B0:
	lwz      r3, 0x12c(r30)
	mr       r4, r31
	bl       get__Q23Sys11DrawBuffersFi
	lis      r4, j3dSys@ha
	lwz      r0, 0x1c(r3)
	addi     r3, r4, j3dSys@l
	mr       r4, r31
	stw      r0, 0x48(r3)
	lwz      r3, 0x130(r30)
	bl       get__Q23Sys11DrawBuffersFi
	lis      r4, j3dSys@ha
	lwz      r0, 0x1c(r3)
	addi     r3, r4, j3dSys@l
	stw      r0, 0x4c(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80151500
 * Size:	000030
 */
void BaseGameSection::postSetupFloatMemory()
{
	Game::mapMgr->setupJUTTextures();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @generated{setupJUTTextures__Q24Game6MapMgrFv}
 * --INFO--
 * Address:	80151530
 * Size:	000004
 */

/*
 * --INFO--
 * Address:	80151534
 * Size:	000200
 */
void BaseGameSection::createFallPikminSound(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80151584
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80151700

lbl_80151584:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801515F0

lbl_8015159C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80151700
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801515F0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015159C
	b        lbl_80151700

lbl_80151610:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, 0x250(r31)
	li       r4, 0x2837
	li       r5, 0
	li       r6, 0
	bl       startFreePikiSound__Q23PSM4PikiFUlUlUl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80151670
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80151700

lbl_80151670:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801516E4

lbl_80151690:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80151700
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801516E4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80151690

lbl_80151700:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80151610
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80151734
 * Size:	000004
 */
void BaseGameSection::captureRadarmap(Graphics&) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::drawRadarmap(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	80151738
 * Size:	000018
 */
void PikiCond_ExceptChappyPikmin::satisfy(Game::Piki* p)
{
	/*
	lbz      r4, 0x2b8(r4)
	subfic   r3, r4, 5
	addi     r0, r4, -5
	or       r0, r3, r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/**
 * @generated{__dt__17Container<5Plane>Fv}
 * @generated{__dt__22ArrayContainer<5Plane>Fv}
 * @generated{readObject__9CullPlaneFR6StreamR5Plane}
 * @generated{writeObject__9CullPlaneFR6StreamR5Plane}
 * @generated{__dt__9CullPlaneFv}
 */

// /*
//  * --INFO--
//  * Address:	80151750
//  * Size:	000070
//  */
// void Container<Plane>::~Container()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801517A4
// 	lis      r4, "__vt__17Container<5Plane>"@ha
// 	addi     r0, r4, "__vt__17Container<5Plane>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80151794
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_80151794:
// 	extsh.   r0, r31
// 	ble      lbl_801517A4
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801517A4:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801517C0
//  * Size:	000080
//  */
// void ArrayContainer<Plane>::~ArrayContainer()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80151824
// 	lis      r4, "__vt__22ArrayContainer<5Plane>"@ha
// 	addi     r0, r4, "__vt__22ArrayContainer<5Plane>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80151814
// 	lis      r4, "__vt__17Container<5Plane>"@ha
// 	addi     r0, r4, "__vt__17Container<5Plane>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80151814
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_80151814:
// 	extsh.   r0, r31
// 	ble      lbl_80151824
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80151824:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * Generated?
 * --INFO--
 * Address:	80151840
 * Size:	000004
 */
// void CullPlane::readObject(Stream&, Plane&) { }

/*
 * Generated?
 * --INFO--
 * Address:	80151844
 * Size:	000004
 */
// void CullPlane::writeObject(Stream&, Plane&) { }

// /*
//  * --INFO--
//  * Address:	80151848
//  * Size:	000090
//  */
// CullPlane::~CullPlane()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801518BC
// 	lis      r4, __vt__9CullPlane@ha
// 	addi     r0, r4, __vt__9CullPlane@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801518AC
// 	lis      r4, "__vt__22ArrayContainer<5Plane>"@ha
// 	addi     r0, r4, "__vt__22ArrayContainer<5Plane>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801518AC
// 	lis      r4, "__vt__17Container<5Plane>"@ha
// 	addi     r0, r4, "__vt__17Container<5Plane>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801518AC
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_801518AC:
// 	extsh.   r0, r31
// 	ble      lbl_801518BC
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801518BC:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

namespace Game {

/*
 * --INFO--
 * Address:	801518D8
 * Size:	000010
 */
bool BaseGameSection::forceFinish()
{
	m_isFinishedMaybe = true;
	return m_isFinishedMaybe;
	/*
	li       r0, 1
	stb      r0, 0x37(r3)
	lbz      r3, 0x37(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801518E8
 * Size:	000004
 */
void BaseGameSection::addChallengeScore(int) { }

/*
 * --INFO--
 * Address:	801518EC
 * Size:	000004
 */
void BaseGameSection::startMainBgm(void) { }

/*
 * --INFO--
 * Address:	801518F0
 * Size:	000004
 */
void BaseGameSection::goNextFloor(Game::ItemHole::Item*) { }

/*
 * --INFO--
 * Address:	801518F4
 * Size:	000004
 */
void BaseGameSection::goCave(Game::ItemCave::Item*) { }

/*
 * --INFO--
 * Address:	801518F8
 * Size:	000004
 */
void BaseGameSection::goMainMap(Game::ItemBigFountain::Item*) { }

/*
 * --INFO--
 * Address:	801518FC
 * Size:	00000C
 */
u32 BaseGameSection::getCaveID()
{
	return 'none';
	/*
	lis      r3, 0x6E6F6E65@ha
	addi     r3, r3, 0x6E6F6E65@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80151908
 * Size:	000008
 */
CourseInfo* BaseGameSection::getCurrentCourseInfo(void) { return nullptr; }

/*
 * --INFO--
 * Address:	80151910
 * Size:	000008
 */
bool BaseGameSection::openContainerWindow(void) { return false; }

/*
 * --INFO--
 * Address:	80151918
 * Size:	000004
 */
void BaseGameSection::closeContainerWindow(void) { }

/*
 * --INFO--
 * Address:	8015191C
 * Size:	000004
 */
void BaseGameSection::playMovie_firstexperience(int, Game::Creature*) { }

/*
 * --INFO--
 * Address:	80151920
 * Size:	000004
 */
void BaseGameSection::playMovie_bootup(Game::Onyon*) { }

/*
 * --INFO--
 * Address:	80151924
 * Size:	000004
 */
void BaseGameSection::playMovie_helloPikmin(Game::Piki* p) { }

/*
 * --INFO--
 * Address:	80151928
 * Size:	000004
 */
void BaseGameSection::disableTimer(unsigned long) { }

/*
 * --INFO--
 * Address:	8015192C
 * Size:	000004
 */
void BaseGameSection::onMovieStart(Game::MovieConfig*, unsigned long, unsigned long) { }

/*
 * --INFO--
 * Address:	80151930
 * Size:	000004
 */
void BaseGameSection::gmOrimaDown(int) { }

/*
 * --INFO--
 * Address:	80151934
 * Size:	000004
 */
void BaseGameSection::gmPikminZero(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	80151938
 * Size:	000004
 */
void Section::drawInit(Graphics&) { }

/*
 * --INFO--
 * Address:	8015193C
 * Size:	000004
 */
void Section::doExit() { }

/*
 * --INFO--
 * Address:	80151940
 * Size:	000008
 */
bool Section::forceReset() { return true; }

/*
 * --INFO--
 * Address:	80151948
 * Size:	000004
 */
Section* Section::getCurrentSection() { return this; }

/*
 * --INFO--
 * Address:	8015194C
 * Size:	000004
 */
void Section::doLoadingStart() { }

/*
 * --INFO--
 * Address:	80151950
 * Size:	000008
 */
bool Section::doLoading() { return false; }

/*
 * --INFO--
 * Address:	80151958
 * Size:	000008
 */
bool Section::isFinishable() { return true; }

/**
 * @generated{writeObject__22ArrayContainer<5Plane>FR6StreamR5Plane}
 * @generated{readObject__22ArrayContainer<5Plane>FR6StreamR5Plane}
 * @generated{write__22ArrayContainer<5Plane>FR6Stream}
 * @generated{alloc__22ArrayContainer<5Plane>Fi}
 * @generated{setArray__22ArrayContainer<5Plane>FP5Planei}
 * @generated{get__22ArrayContainer<5Plane>FPv}
 * @generated{getNext__22ArrayContainer<5Plane>FPv}
 * @generated{getStart__22ArrayContainer<5Plane>Fv}
 * @generated{getEnd__22ArrayContainer<5Plane>Fv}
 * @generated{getAt__22ArrayContainer<5Plane>Fi}
 * @generated{getTo__22ArrayContainer<5Plane>Fv}
 * @generated{getObject__17Container<5Plane>FPv}
 * @generated{getAt__17Container<5Plane>Fi}
 * @generated{getTo__17Container<5Plane>Fv}
 * @generated{invoke__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>FPQ24Game11MovieConfigUlUl}
 * @generated{invoke__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>FR10Vector3<f>}
 * @generated{invoke__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>FPQ24Game9CameraArg}
 * @generated{invoke__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>FR7Rect<f>}
 * @generated{invoke__34Delegate<Q24Game15BaseGameSection>Fv}
 * @generated{addOne__22ArrayContainer<5Plane>FR5Plane}
 * @generated{__ct__5PlaneFv}
 * @generated{read__22ArrayContainer<5Plane>FR6Stream}
 * @generated{alloc__27MonoObjectMgr<Q24Game4Navi>Fi}
 * @generated{onAlloc__27MonoObjectMgr<Q24Game4Navi>Fi}
 * @generated{alloc__27MonoObjectMgr<Q24Game4Piki>Fi}
 * @generated{onAlloc__27MonoObjectMgr<Q24Game4Piki>Fi}
 * @generated{__sinit_baseGameSection_cpp}
 */

/*
 * Generated?
 * --INFO--
 * Address:	80151960
 * Size:	000004
 */
// void ArrayContainer<Plane>::writeObject(Stream&, Plane&) { }

/*
 * Generated?
 * --INFO--
 * Address:	80151964
 * Size:	000004
 */
// void ArrayContainer<Plane>::readObject(Stream&, Plane&) { }

/*
 * --INFO--
 * Address:	80151968
 * Size:	0000D4
 */
// void ArrayContainer<Plane>::write(Stream&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stmw     r27, 0xc(r1)
// 	mr       r28, r4
// 	mr       r27, r3
// 	lwz      r4, 0x14(r3)
// 	mr       r3, r28
// 	bl       textBeginGroup__6StreamFPc
// 	lwz      r4, 0x414(r28)
// 	mr       r3, r28
// 	bl       textWriteTab__6StreamFi
// 	lwz      r4, 0x20(r27)
// 	mr       r3, r28
// 	bl       writeInt__6StreamFi
// 	mr       r3, r28
// 	addi     r4, r2, lbl_805185BC@sda21
// 	crclr    6
// 	bl       textWriteText__6StreamFPce
// 	lis      r3, lbl_8047CD88@ha
// 	li       r29, 0
// 	addi     r31, r3, lbl_8047CD88@l
// 	li       r30, 0
// 	b        lbl_80151A14

// lbl_801519C8:
// 	lwz      r4, 0x414(r28)
// 	mr       r3, r28
// 	bl       textWriteTab__6StreamFi
// 	mr       r3, r27
// 	lwz      r0, 0x24(r27)
// 	lwz      r12, 0(r27)
// 	mr       r4, r28
// 	add      r5, r0, r30
// 	lwz      r12, 0x2c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r6, 0x20(r27)
// 	mr       r3, r28
// 	mr       r4, r31
// 	mr       r5, r29
// 	crclr    6
// 	bl       textWriteText__6StreamFPce
// 	addi     r30, r30, 0x10
// 	addi     r29, r29, 1

// lbl_80151A14:
// 	lwz      r0, 0x20(r27)
// 	cmpw     r29, r0
// 	blt      lbl_801519C8
// 	mr       r3, r28
// 	bl       textEndGroup__6StreamFv
// 	lmw      r27, 0xc(r1)
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151A3C
//  * Size:	000068
//  */
// void ArrayContainer<Plane>::alloc(int)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	slwi     r3, r4, 4
// 	addi     r3, r3, 0x10
// 	bl       __nwa__FUl
// 	lis      r4, __ct__5PlaneFv@ha
// 	mr       r7, r31
// 	addi     r4, r4, __ct__5PlaneFv@l
// 	li       r5, 0
// 	li       r6, 0x10
// 	bl       __construct_new_array
// 	stw      r3, 0x24(r30)
// 	li       r0, 0
// 	stw      r31, 0x20(r30)
// 	stw      r0, 0x1c(r30)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151AA4
//  * Size:	000010
//  */
// void ArrayContainer<Plane>::setArray(Plane*, int)
// {
// 	/*
// 	stw      r4, 0x24(r3)
// 	stw      r5, 0x20(r3)
// 	stw      r5, 0x1c(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151AB4
//  * Size:	000010
//  */
// void ArrayContainer<Plane>::get(void*)
// {
// 	/*
// 	lwz      r3, 0x24(r3)
// 	slwi     r0, r4, 4
// 	add      r3, r3, r0
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151AC4
//  * Size:	000008
//  */
// void ArrayContainer<Plane>::getNext(void*)
// {
// 	/*
// 	addi     r3, r4, 1
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151ACC
//  * Size:	000008
//  */
// u32 ArrayContainer<Plane>::getStart() { return 0x0; }

// /*
//  * --INFO--
//  * Address:	80151AD4
//  * Size:	000008
//  */
// void ArrayContainer<Plane>::getEnd()
// {
// 	/*
// 	lwz      r3, 0x1c(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151ADC
//  * Size:	000010
//  */
// void ArrayContainer<Plane>::getAt(int)
// {
// 	/*
// 	lwz      r3, 0x24(r3)
// 	slwi     r0, r4, 4
// 	add      r3, r3, r0
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151AEC
//  * Size:	000008
//  */
// void ArrayContainer<Plane>::getTo()
// {
// 	/*
// 	lwz      r3, 0x20(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151AF4
//  * Size:	00002C
//  */
// void Container<Plane>::getObject(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151B20
//  * Size:	000008
//  */
// u32 Container<Plane>::getAt(int) { return 0x0; }

// /*
//  * --INFO--
//  * Address:	80151B28
//  * Size:	000008
//  */
// u32 Container<Plane>::getTo() { return 0x0; }

// /*
//  * --INFO--
//  * Address:	80151B30
//  * Size:	000030
//  */
// void Delegate3<Game::BaseGameSection, Game::MovieConfig*, unsigned long,
//                unsigned long>::invoke(Game::MovieConfig*, unsigned long,
//                                       unsigned long)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r7, r3
// 	  stw       r0, 0x14(r1)
// 	  addi      r12, r7, 0x8
// 	  lwz       r3, 0x4(r3)
// 	  bl        -0x90024
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151B60
//  * Size:	000030
//  */
// void Delegate1<Game::BaseGameSection, Vector3f&>::invoke(Vector3f&)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r5, r3
// 	stw      r0, 0x14(r1)
// 	addi     r12, r5, 8
// 	lwz      r3, 4(r3)
// 	bl       __ptmf_scall
// 	nop
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151B90
//  * Size:	000030
//  */
// void Delegate1<Game::BaseGameSection, Game::CameraArg*>::invoke(
//     Game::CameraArg*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r5, r3
// 	  stw       r0, 0x14(r1)
// 	  addi      r12, r5, 0x8
// 	  lwz       r3, 0x4(r3)
// 	  bl        -0x90084
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151BC0
//  * Size:	000030
//  */
// void Delegate1<Game::BaseGameSection, Rect<float>&>::invoke(Rect<float>&)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r5, r3
// 	stw      r0, 0x14(r1)
// 	addi     r12, r5, 8
// 	lwz      r3, 4(r3)
// 	bl       __ptmf_scall
// 	nop
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151BF0
//  * Size:	000030
//  */
// void Delegate<Game::BaseGameSection>::invoke()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	addi     r12, r4, 8
// 	lwz      r3, 4(r3)
// 	bl       __ptmf_scall
// 	nop
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151C20
//  * Size:	000048
//  */
// void ArrayContainer<Plane>::addOne(Plane&)
// {
// 	/*
// 	lwz      r7, 0x1c(r3)
// 	lwz      r0, 0x20(r3)
// 	cmpw     r7, r0
// 	bgelr
// 	lwz      r6, 0x24(r3)
// 	addi     r5, r7, 1
// 	slwi     r0, r7, 4
// 	stw      r5, 0x1c(r3)
// 	add      r3, r6, r0
// 	lfs      f0, 0(r4)
// 	stfs     f0, 0(r3)
// 	lfs      f0, 4(r4)
// 	stfs     f0, 4(r3)
// 	lfs      f0, 8(r4)
// 	stfs     f0, 8(r3)
// 	lfs      f0, 0xc(r4)
// 	stfs     f0, 0xc(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151C68
//  * Size:	00001C
//  */
// Plane::Plane()
// {
// 	/*
// 	lfs      f1, lbl_80518498@sda21(r2)
// 	lfs      f0, lbl_805184A4@sda21(r2)
// 	stfs     f1, 0(r3)
// 	stfs     f0, 4(r3)
// 	stfs     f1, 8(r3)
// 	stfs     f1, 0xc(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151C84
//  * Size:	0000B0
//  */
// void ArrayContainer<Plane>::read(Stream&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	stw      r30, 0x18(r1)
// 	stw      r29, 0x14(r1)
// 	mr       r29, r4
// 	stw      r28, 0x10(r1)
// 	mr       r28, r3
// 	mr       r3, r29
// 	bl       readInt__6StreamFv
// 	stw      r3, 0x20(r28)
// 	mr       r3, r28
// 	lwz      r12, 0(r28)
// 	lwz      r4, 0x20(r28)
// 	lwz      r12, 0x3c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x20(r28)
// 	li       r30, 0
// 	li       r31, 0
// 	stw      r0, 0x1c(r28)
// 	b        lbl_80151D08

// lbl_80151CE0:
// 	mr       r3, r28
// 	lwz      r0, 0x24(r28)
// 	lwz      r12, 0(r28)
// 	mr       r4, r29
// 	add      r5, r0, r31
// 	lwz      r12, 0x30(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r31, r31, 0x10
// 	addi     r30, r30, 1

// lbl_80151D08:
// 	lwz      r0, 0x20(r28)
// 	cmpw     r30, r0
// 	blt      lbl_80151CE0
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151D34
//  * Size:	000188
//  */
// void MonoObjectMgr<Game::Navi>::alloc(int)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r4
// 	stw      r30, 0x18(r1)
// 	mr       r30, r3
// 	stw      r29, 0x14(r1)
// 	mr       r29, r31
// 	mulli    r3, r29, 0x320
// 	stw      r28, 0x10(r1)
// 	addi     r3, r3, 0x10
// 	bl       __nwa__FUl
// 	lis      r4, __ct__Q24Game4NaviFv@ha
// 	mr       r7, r29
// 	addi     r4, r4, __ct__Q24Game4NaviFv@l
// 	li       r5, 0
// 	li       r6, 0x320
// 	bl       __construct_new_array
// 	stw      r3, 0x28(r30)
// 	li       r0, 0
// 	mr       r3, r29
// 	stw      r31, 0x24(r30)
// 	stw      r0, 0x20(r30)
// 	bl       __nwa__FUl
// 	cmpwi    r31, 0
// 	stw      r3, 0x2c(r30)
// 	li       r11, 0
// 	ble      lbl_80151E54
// 	cmpwi    r31, 8
// 	addi     r3, r31, -8
// 	ble      lbl_80151E30
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80151E30

// lbl_80151DC8:
// 	lwz      r3, 0x2c(r30)
// 	li       r10, 1
// 	addi     r8, r11, 1
// 	addi     r7, r11, 2
// 	stbx     r10, r3, r11
// 	addi     r6, r11, 3
// 	addi     r5, r11, 4
// 	addi     r4, r11, 5
// 	lwz      r9, 0x2c(r30)
// 	addi     r3, r11, 6
// 	addi     r0, r11, 7
// 	addi     r11, r11, 8
// 	stbx     r10, r9, r8
// 	lwz      r8, 0x2c(r30)
// 	stbx     r10, r8, r7
// 	lwz      r7, 0x2c(r30)
// 	stbx     r10, r7, r6
// 	lwz      r6, 0x2c(r30)
// 	stbx     r10, r6, r5
// 	lwz      r5, 0x2c(r30)
// 	stbx     r10, r5, r4
// 	lwz      r4, 0x2c(r30)
// 	stbx     r10, r4, r3
// 	lwz      r3, 0x2c(r30)
// 	stbx     r10, r3, r0
// 	bdnz     lbl_80151DC8

// lbl_80151E30:
// 	subf     r0, r11, r31
// 	li       r4, 1
// 	mtctr    r0
// 	cmpw     r11, r31
// 	bge      lbl_80151E54

// lbl_80151E44:
// 	lwz      r3, 0x2c(r30)
// 	stbx     r4, r3, r11
// 	addi     r11, r11, 1
// 	bdnz     lbl_80151E44

// lbl_80151E54:
// 	mr       r3, r30
// 	lwz      r12, 0(r30)
// 	lwz      r12, 0x88(r12)
// 	mtctr    r12
// 	bctrl
// 	li       r28, 0
// 	li       r29, 0
// 	b        lbl_80151E94

// lbl_80151E74:
// 	lwz      r0, 0x28(r30)
// 	add      r3, r0, r29
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x2c(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r29, r29, 0x320
// 	addi     r28, r28, 1

// lbl_80151E94:
// 	cmpw     r28, r31
// 	blt      lbl_80151E74
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80151EBC
//  * Size:	000004
//  */
// void MonoObjectMgr<Game::Navi>::onAlloc() { }

// /*
//  * --INFO--
//  * Address:	80151EC0
//  * Size:	000188
//  */
// void MonoObjectMgr<Game::Piki>::alloc(int)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r4
// 	stw      r30, 0x18(r1)
// 	mr       r30, r3
// 	stw      r29, 0x14(r1)
// 	mr       r29, r31
// 	mulli    r3, r29, 0x2c8
// 	stw      r28, 0x10(r1)
// 	addi     r3, r3, 0x10
// 	bl       __nwa__FUl
// 	lis      r4, __ct__Q24Game4PikiFv@ha
// 	mr       r7, r29
// 	addi     r4, r4, __ct__Q24Game4PikiFv@l
// 	li       r5, 0
// 	li       r6, 0x2c8
// 	bl       __construct_new_array
// 	stw      r3, 0x28(r30)
// 	li       r0, 0
// 	mr       r3, r29
// 	stw      r31, 0x24(r30)
// 	stw      r0, 0x20(r30)
// 	bl       __nwa__FUl
// 	cmpwi    r31, 0
// 	stw      r3, 0x2c(r30)
// 	li       r11, 0
// 	ble      lbl_80151FE0
// 	cmpwi    r31, 8
// 	addi     r3, r31, -8
// 	ble      lbl_80151FBC
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80151FBC

// lbl_80151F54:
// 	lwz      r3, 0x2c(r30)
// 	li       r10, 1
// 	addi     r8, r11, 1
// 	addi     r7, r11, 2
// 	stbx     r10, r3, r11
// 	addi     r6, r11, 3
// 	addi     r5, r11, 4
// 	addi     r4, r11, 5
// 	lwz      r9, 0x2c(r30)
// 	addi     r3, r11, 6
// 	addi     r0, r11, 7
// 	addi     r11, r11, 8
// 	stbx     r10, r9, r8
// 	lwz      r8, 0x2c(r30)
// 	stbx     r10, r8, r7
// 	lwz      r7, 0x2c(r30)
// 	stbx     r10, r7, r6
// 	lwz      r6, 0x2c(r30)
// 	stbx     r10, r6, r5
// 	lwz      r5, 0x2c(r30)
// 	stbx     r10, r5, r4
// 	lwz      r4, 0x2c(r30)
// 	stbx     r10, r4, r3
// 	lwz      r3, 0x2c(r30)
// 	stbx     r10, r3, r0
// 	bdnz     lbl_80151F54

// lbl_80151FBC:
// 	subf     r0, r11, r31
// 	li       r4, 1
// 	mtctr    r0
// 	cmpw     r11, r31
// 	bge      lbl_80151FE0

// lbl_80151FD0:
// 	lwz      r3, 0x2c(r30)
// 	stbx     r4, r3, r11
// 	addi     r11, r11, 1
// 	bdnz     lbl_80151FD0

// lbl_80151FE0:
// 	mr       r3, r30
// 	lwz      r12, 0(r30)
// 	lwz      r12, 0x88(r12)
// 	mtctr    r12
// 	bctrl
// 	li       r28, 0
// 	li       r29, 0
// 	b        lbl_80152020

// lbl_80152000:
// 	lwz      r0, 0x28(r30)
// 	add      r3, r0, r29
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x2c(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r29, r29, 0x2c8
// 	addi     r28, r28, 1

// lbl_80152020:
// 	cmpw     r28, r31
// 	blt      lbl_80152000
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80152048
//  * Size:	000004
//  */
// void MonoObjectMgr<Game::Piki>::onAlloc() { }

// /*
//  * --INFO--
//  * Address:	8015204C
//  * Size:	000028
//  */
// void __sinit_baseGameSection_cpp(void)
// {
// 	/*
// 	lis      r4, __float_nan@ha
// 	li       r0, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r3, lbl_804B0C70@ha
// 	stw      r0, lbl_80515928@sda21(r13)
// 	stfsu    f0, lbl_804B0C70@l(r3)
// 	stfs     f0, lbl_8051592C@sda21(r13)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }
