#include "CarryInfo.h"
#include "Controller.h"
#include "Dolphin/dvd.h"
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
#include "JSystem/JFramework/JFWDisplay.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JUtility/JUTXfb.h"
#include "LifeGaugeMgr.h"
#include "Screen/Game2DMgr.h"
#include "og/Screen/ogScreen.h"
#include "System.h"
#include "stream.h"
#include "types.h"
#include "wipe.h"
#include "nans.h"
#include "SysTimers.h"
#include "Game/PelletBirthBuffer.h"
#include "Splitter.h"
#include "PSSystem/SingletonBase.h"
#include "Sys/DrawBuffers.h"
#include "Game/Entities/ItemBigFountain.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "TParticle2dMgr.h"

#include "Dolphin/rand.h"

#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/PelletOtakara.h"

#include "Game/GameLight.h"

#include "Dolphin/dvd.h"
#include "System.h"

#include "og/ogLib2D.h"
#include "Screen/Game2DMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/PikiState.h"
#include "PikiAI.h"

#include "Game/DeathMgr.h"

#include "utilityU.h"
#include "PSGame/Global.h"
#include "Splitter.h"

#include "JSystem/J2D/J2DPrint.h"
#include "TexCaster.h"
#include "Game/pathfinder.h"

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
    , mDvdThreadCommand()
{
	mXfbFlags = 0;
	setDisplay(JFWDisplay::createManager(nullptr, mDisplayHeap, JUTXfb::DoubleBuffer, true), 1);
	mPlayerMode         = 2;
	mDraw2DCreature     = nullptr;
	mTreasureZoomCamera = nullptr;
	mKanteiDelegate     = new Delegate1<BaseGameSection, Rectf&>(this, &BaseGameSection::onKanteiDone);
	cameraMgrCallback   = new Delegate1<BaseGameSection, CameraArg*>(this, &BaseGameSection::onCameraBlendFinished);
	mBlendCamera        = nullptr;
	Game::cameraMgr     = nullptr;
	Game::rumbleMgr     = nullptr;
	Game::shadowMgr     = nullptr;
	lifeGaugeMgr        = nullptr;
	carryInfoMgr        = nullptr;
	mLightMgr           = nullptr;
	mSplitter           = nullptr;
	mTheExpHeap         = nullptr;
	mTheExpHeap         = nullptr;
	_100                = nullptr;
	_168                = nullptr;
	mFbTexture          = nullptr;
	mXfbImage           = nullptr;
	mXfbTexture1        = 0;
	mXfbTexture2        = 0;
	_170                = 0;
	mTexData1           = 0;
	_E0                 = 0;
	mBlackFader         = new BlackFader();
	mWipeInFader        = new WipeInFader();
	mWipeOutFader       = new WipeOutFader();
	mWipeOutInFader     = new WipeOutInFader();
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

namespace Game {

/*
 * --INFO--
 * Address:	8014B0FC
 * Size:	000074
 */
void BaseGameSection::useSpecificFBTexture(JUTTexture* texture)
{
	JUT_ASSERTLINE(1523, mFbTexture == nullptr, "?¼’å›žã¯ç„¡ç??½—\n");
	mFbTexture                    = mXfbImage;
	mXfbImage                     = texture;
	Game::gameSystem->mXfbTexture = mXfbImage;
}

/*
 * --INFO--
 * Address:	8014B170
 * Size:	00006C
 */
void BaseGameSection::restoreFBTexture()
{
	JUT_ASSERTLINE(1533, mFbTexture, "useSpecificFBTexture ã—ã¦ãªã??½—\n");
	mXfbImage                     = mFbTexture;
	mFbTexture                    = nullptr;
	Game::gameSystem->mXfbTexture = mXfbImage;
}

/*
 * --INFO--
 * Address:	8014B1DC
 * Size:	000114
 */
BaseGameSection::~BaseGameSection()
{
	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(sceneMgr);
	sceneMgr->deleteCurrentScene();
	TParticle2dMgr::deleteInstance();
	particleMgr->deleteInstance_TPkEffectMgr();
	ParticleMgr::deleteInstance();

	itemMgr->clearGlobalPointers();

	PelletOtakara::mgr = nullptr;
	PelletFruit::mgr   = nullptr;
	PelletItem::mgr    = nullptr;
	PelletNumber::mgr  = nullptr;
	PelletCarcass::mgr = nullptr;
}

/*
 * --INFO--
 * Address:	8014B2F0
 * Size:	000050
 */
void BaseGameSection::loadSync(IDelegate* delegate, bool p2)
{
	sys->dvdLoadUseCallBack(&mDvdThreadCommand, delegate);
	waitSyncLoad(p2);
}

/*
 * --INFO--
 * Address:	8014B340
 * Size:	000120
 */

u32 BaseGameSection::waitSyncLoad(bool dontPause)
{
	static int col;
	static s8 init;

	if (!init) {
		col  = 0;
		init = 1;
	}
	col++;
	endFrame();
	if (!dontPause) {
		gameSystem->setPause(true, "waitSyncLoad", 3);
	}
	while (true) {
		beginFrame();
		beginRender();

		j3dSys.drawInit();
		GXSetViewport(0.0f, 0.0f, 608.0f, 480.0f, 0.0f, 1.0f);
		GXSetScissor(0, 0x10, 0x260, 0x1c0);
		endRender();

		// I have no clue

		if (mDvdThreadCommand.mMode != 2)
			;

		else if (!dontPause) {
			gameSystem->setPause(false, "waitSyncLoad", 3);
			return;
		} else
			break;

		endFrame();
	}
}

/*
 * --INFO--
 * Address:	8014B460
 * Size:	000050
 */
void BaseGameSection::dvdloadGameSystem()
{
	GameSystem* gs   = new GameSystem(this);
	Game::gameSystem = gs;
	gs->init();
}

/*
 * --INFO--
 * Address:	8014B4B0
 * Size:	000390
 */
void BaseGameSection::init()
{
	mXfbFlags       = 0;
	mMoney          = 0;
	mDraw2DCreature = nullptr;
	System::FragmentationChecker initFrag("BGS::init", false);
	{
		System::FragmentationChecker heapFrag("heapStatus", false);
		sys->heapStatusStart("baseGameSection::init", nullptr);
	}

	sys->enableCPULockDetector(480);
	Delegate<BaseGameSection> delegate(this, dvdloadGameSystem);
	beginFrame();
	beginRender();
	j3dSys.drawInit();
	GXSetViewport(0.0f, 0.0f, 608.0f, 480.0f, 0.0f, 1.0f);
	GXSetScissor(0, 0x10, 0x260, 0x1c0);
	mGraphics->mOrthoGraph.setPort();
	endRender();
	sys->dvdLoadUseCallBack(&mDvdThreadCommand, &delegate);

	waitSyncLoad(true);

	BaseHIOSection::initHIO(nullptr);

	mTreasureLightMgr = new TreasureLight::Mgr;
	System::assert_fragmentation("baseGameSection::initHIO");
	moviePlayer          = new MoviePlayer;
	mMovieFinishCallback = new Delegate3<BaseGameSection, MovieConfig*, u32, u32>(this, movieDone);
	mMovieStartCallback  = new Delegate3<BaseGameSection, MovieConfig*, u32, u32>(this, onMovieStart);

	sys->setFrameRate(2);
	System::assert_fragmentation("BaseGameSection::MoviePlayer");
	initJ3D();
	_11C   = true;
	mapMgr = nullptr;
	System::assert_fragmentation("BaseGameSection::InitJ3D");
	System::assert_fragmentation("BaseGameSection::Before 2D");

	og::Lib2D::create();
	Screen::Game2DMgr::create();
	Screen::gGame2DMgr->mScreenMgr->_90 = 1;
	System::assert_fragmentation("BaseGameSection::Game2DMgr");
	mXfbTexture2 = 0;
	mXfbTexture1 = 0;
	onInit();
	sys->heapStatusEnd("baseGameSection::init");
	mTreasureGetState = false;
}

/*
 * --INFO--
 * Address:	8014B840
 * Size:	000004
 */
void BaseGameSection::onInit() { }

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
}

/*
 * --INFO--
 * Address:	8014B878
 * Size:	000004
 */
void BaseGameSection::section_fadeout() { }

/*
 * --INFO--
 * Address:	8014B87C
 * Size:	0003A8
 */
bool BaseGameSection::doUpdate()
{
	SysShape::Model::cullCount = 0;
	gameSystem->startFrame();
	Screen::gGame2DMgr->update();
	if (mIsBlendCameraActive) {
		updateBlendCamera();
	}
	mapMgr->update();
	sys->mTimers->_start("doAnim", true);
	doAnimation();
	sys->mTimers->_stop("doAnim");
	sys->mTimers->_start("ENI", true);
	sys->mTimers->_start("ENI-A", true);
	doEntry();
	sys->mTimers->_stop("ENT-A");
	sys->mTimers->_start("ENT-B", true);

	if (rumbleMgr) {
		rumbleMgr->update();
	}
	if (shadowMgr) {
		shadowMgr->update();
	}
	if (lifeGaugeMgr) {
		lifeGaugeMgr->update();
	}
	if (carryInfoMgr) {
		carryInfoMgr->update();
	}
	if (mLightMgr) {
		mLightMgr->update();
	}
	SysShape::Model::setViewCalcModeInd();
	for (int vpIdx = 0; vpIdx < sys->mGfx->mViewportCount; vpIdx++) {
		Viewport* viewport = sys->mGfx->getViewport(vpIdx);
		if (viewport && viewport->viewable()) {
			j3dSetView(viewport, false);
		}
	}
	BaseHIOSection::doUpdate();
	if (platMgr) {
		platMgr->resetOnCount();
	}

	sys->mTimers->_stop("ENT-B");
	sys->mTimers->_stop("ENT");
	sys->mTimers->_start("doSim", true);

#pragma
	if (!gameSystem->paused()) {
		float frameRate = 1.0f / sys->mDeltaTime;
		sys->mTimers->_start("coll", true);
		if (!(gameSystem->mFlags & 0x4)) {
			sys->getTime();
			cellMgr->resolveCollision();
			CellPyramid::sSpeedUpResolveColl = true;
		}
		sys->mTimers->_stop("coll");
		doSimulation(frameRate);
	}

	sys->mTimers->_stop("doSim");
	sys->mTimers->_start("particle", true);
	if (!gameSystem->mIsFrozen && !gameSystem->paused() && particleMgr) {
		particleMgr->update();
	}
	if (particle2dMgr) {
		particle2dMgr->update();
	}
	sys->mTimers->_stop("particle");
	onUpdate();
	if (moviePlayer && !gameSystem->mIsMoviePause) {
		if (gameSystem->isMultiplayerMode()) {
			moviePlayer->update(mControllerP1, mControllerP2);
		} else {
			moviePlayer->update(mControllerP1, nullptr);
		}
	}
	if (shadowMgr) {
		shadowMgr->init();
	}
	gameSystem->endFrame();
	return mIsMainActive;
}

/*
 * --INFO--
 * Address:	8014BC24
 * Size:	000004
 */
void BaseGameSection::onUpdate() { }

/*
 * --INFO--
 * Address:	8014BC28
 * Size:	000170
 */
void BaseGameSection::doDraw(Graphics& gfx)
{
	captureRadarmap(gfx);
	if (gameSystem->paused()) {
		if (cameraMgr) {
			cameraMgr->controllerLock(2);
			cameraMgr->update();
			cameraMgr->controllerUnLock(2);
		}

	} else if (cameraMgr) {
		cameraMgr->update();
	}

	sys->mTimers->_start("_draw3D_", true);
	draw3D(gfx);
	sys->mTimers->_stop("_draw3D_");
	if (moviePlayer && !gameSystem->mIsMoviePause) {
		moviePlayer->drawLoading(gfx);
	}
	pre2dDraw(gfx);
	gfx.setToken("2d");
	draw2D(gfx);
	if (mDraw2DCreature) {
		drawOtakaraWindow(gfx);
	}
	Screen::gGame2DMgr->drawKanteiMsg(gfx);
	if (moviePlayer && !gameSystem->mIsMoviePause) {
		moviePlayer->draw(gfx);
	}
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

// movieConfig struct jank
void BaseGameSection::movieDone(MovieConfig* config, u32, u32)
{
	Creature* c = (Creature*)config[1].mParam.mParent;
	if (c) {
		c->movie_end(true);
		((Creature*)config[1].mParam.mParent)->kill(nullptr);
		config[1].mParam.mParent = nullptr;
		Screen::gGame2DMgr->close_SpecialItem();
		Screen::gGame2DMgr->close_Kantei();
		config[1].mParam.mNext = nullptr;
	}
	sizeof(MovieConfig);
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
void BaseGameSection::onMovieCommand(int cmd)
{

	switch (cmd) {
	case 0:
		break;
	case 2:
		if (moviePlayer && !(moviePlayer->mFlags & 0x2)) {
			createFallPikminSound();
		}
		break;
	case 3:
		if (gameSystem->mMode == GSM_STORY_MODE && gameSystem->mTimeMgr->mDayCount == 0) {
			pikiMgr->forceEnterPikmins(false);
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	8014BEA4
 * Size:	000450
 */

// unfortunatly this probably isn't real inline, however I'm not writing the full code out bc that's stupid
inline void j3dStuff(Sys::DrawBuffers*& buffer, Sys::DrawBuffer::CreateArg& drawArg, bool doFog)
{

	drawArg.mSize = 0x80;
	drawArg.mName = "normal";

	buffer->get(0)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = (doFog) ? "normal-fogoff" : "normal";

	buffer->get(1)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "map";
	if (doFog)
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_NonSort;

	buffer->get(2)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "piki";
	if (doFog)
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;

	buffer->get(3)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "post";

	buffer->get(4)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "2d";

	buffer->get(5)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "first";

	buffer->get(6)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "postshadow";

	buffer->get(7)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "objectlast";

	buffer->get(8)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "farm";

	buffer->get(9)->create(drawArg);
}

void BaseGameSection::initJ3D()
{
	_12C = new Sys::DrawBuffers;
	_130 = new Sys::DrawBuffers;

	_12C->allocate(10);
	_12C->mName = "OPA";
	{
		Sys::DrawBuffer::CreateArg drawArg;
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;
		drawArg.mDrawType = J3DDrawBuffer::J3DDRAW_Head;
		j3dStuff(_12C, drawArg, true);
	}

	_130->allocate(10);
	_130->mName = "XLU";

	{
		Sys::DrawBuffer::CreateArg drawArg;

		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;
		drawArg.mDrawType = J3DDrawBuffer::J3DDRAW_Head;

		drawArg.mFlags.typeView |= 1;

		j3dStuff(_130, drawArg, false);
	}

	addGenNode(_12C);
	addGenNode(_130);

	j3dSys.mDrawBuffer[0] = _12C->get(0)->mBuffer;
	j3dSys.mDrawBuffer[1] = _130->get(0)->mBuffer;

	System::FragmentationChecker frag("poyol", false);
}

/*
 * --INFO--
 * Address:	8014C2F4
 * Size:	000034
 */
void BaseGameSection::initResources()
{
	setupFixMemory();
	setupFloatMemory();
}

Vector2f getRectSkew() { return Vector2f(0.0f, -80.0f); }

Vector2f getBottomLeft() { return Vector2f(0.0f, 0.0f); }

/*
 * --INFO--
 * Address:	8014C328
 * Size:	0001E4
 */
void BaseGameSection::initViewports(Graphics& gfx)
{
	mSplitter = new HorizonalSplitter(&gfx);
	setSplitter(false);

	Viewport* olimarViewport = gfx.getViewport(0);
	olimarViewport->mCamera  = mOlimarCamera;
	olimarViewport->updateCameraAspect();

	Viewport* louieViewport = gfx.getViewport(1);
	louieViewport->mCamera  = mLouieCamera;
	louieViewport->updateCameraAspect();

	shadowMgr->setViewport(gfx.getViewport(0), 0);
	shadowMgr->setViewport(gfx.getViewport(1), 1);

	cameraMgr->setViewport(gfx.getViewport(0), 0);
	cameraMgr->setViewport(gfx.getViewport(1), 1);

	cameraMgr->init(0);
	mTreasureZoomCamera         = new ZoomCamera;
	mTreasureGetViewport        = new Viewport;
	mTreasureGetViewport->mVpId = 2;

	Vector2<u16> screenSize = getScreenSize();
	getScreenSize();
	Vector2f rectSkew   = getRectSkew();
	Vector2f topRight   = Vector2f(rectSkew.x + screenSize.x, rectSkew.y + screenSize.y);
	Vector2f bottomLeft = getBottomLeft() + rectSkew;
	// float moment
	Rectf rect(bottomLeft.x, bottomLeft.y, topRight.x, topRight.y);

	mTreasureGetViewport->setRect(rect);
	mTreasureGetViewport->mCamera = mTreasureZoomCamera;
	mTreasureGetViewport->updateCameraAspect();
}

} // namespace Game

/*
 * --INFO--
 * Address:	8014C50C
 * Size:	0000C0
 */

namespace Game {

/*
 * --INFO--
 * Address:	8014C5CC
 * Size:	001120
 */
#define LoadTextFile(x) JKRDvdRipper::loadToMainRAM(x, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);

void BaseGameSection::initGenerators()
{

	generatorCache->clearCache();
	Generator::initialiseSystem();

	{ // Init Generator Managers
		generatorMgr        = new GeneratorMgr;
		generatorMgr->mName = "Generator(Default)";
		addGenNode(generatorMgr);

		onceGeneratorMgr        = new GeneratorMgr;
		onceGeneratorMgr->mName = "Generator(init)";
		addGenNode(onceGeneratorMgr);

		limitGeneratorMgr        = new GeneratorMgr;
		limitGeneratorMgr->mName = "Generator(Limit)";
		limitGeneratorMgr->_6C   = true;
		addGenNode(limitGeneratorMgr);

		plantsGeneratorMgr        = new GeneratorMgr;
		plantsGeneratorMgr->mName = "Generator(A•¨)";
		addGenNode(plantsGeneratorMgr);

		dayGeneratorMgr        = new GeneratorMgr;
		dayGeneratorMgr->mName = "Generator(DAY)";
		addGenNode(dayGeneratorMgr);

		GeneratorMgr::cursorCallback = new Delegate1<BaseGameSection, Vector3f&>(this, changeGeneratorCursor);

		GenObjectEnemy::initialise();
		GenItem::initialise();
		GenPellet::initialise();
		GenObjectPiki::initialise();
		GenObjectNavi::initialise();
	}

	// load courseinfo
	if (mapMgr->mCourseInfo) {

		PelletBirthBuffer::clear();
		generatorCache->loadGenerators(mapMgr->mCourseInfo->mCourseIndex);
		generatorCache->updateUseList();

		int fileIdx = 0;

		GeneratorMgr* generatorManagers[64];
		void* generatorFiles[64];

		char filenameCharArr[256];

#pragma region defaultgen

		sprintf(filenameCharArr, "%s/defaultgen.txt", mapMgr->mCourseInfo->mAbeFolder);

		void* defaultGenFile = LoadTextFile(filenameCharArr);

		if (defaultGenFile) {
			RamStream defaultGenTxt(defaultGenFile, -1);
			defaultGenTxt.mMode = 1;
			if (defaultGenTxt.mMode == 1) {
				defaultGenTxt.mTabCount = 0;
				generatorMgr->read(defaultGenTxt, false);
				generatorMgr->updateUseList();

				generatorFiles[0]    = defaultGenFile;
				generatorManagers[0] = generatorMgr;
				fileIdx++;
			}
		}

#pragma endregion

#pragma region plantsgen

		sprintf(filenameCharArr, "%s/plantsgen.txt", mapMgr->mCourseInfo->mAbeFolder);
		int entrynum = DVDConvertPathToEntrynum(filenameCharArr);

		if (entrynum != -1) {
			void* plantsgenFile = LoadTextFile(filenameCharArr);
			if (plantsgenFile) {
				RamStream plantsGenTxt(plantsgenFile, -1);
				plantsGenTxt.mMode = 1;
				if (plantsGenTxt.mMode == 1) {
					plantsGenTxt.mTabCount = 0;
					plantsGeneratorMgr->read(plantsGenTxt, false);
					plantsGeneratorMgr->updateUseList();
					generatorManagers[fileIdx] = plantsGeneratorMgr;
					generatorFiles[fileIdx]    = plantsgenFile;
					fileIdx++;
				}
			}
		}

#pragma endregion

#pragma region initgen

		CourseInfo* courseInfo = mapMgr->mCourseInfo;

		bool firstVisit = playData->courseVisited(courseInfo->mCourseIndex);

		if (!firstVisit) {
			playData->visitCourse(courseInfo->mCourseIndex);
			sprintf(filenameCharArr, "%s/initgen.txt", courseInfo->mAbeFolder);
			void* initgenFile = LoadTextFile(filenameCharArr);
			if (initgenFile) {
				RamStream initgenTxt(initgenFile, -1);
				initgenTxt.mMode = 1;
				if (initgenTxt.mMode == 1) {
					initgenTxt.mTabCount = 0;
					onceGeneratorMgr->read(initgenTxt, false);
					onceGeneratorMgr->updateUseList();
					generatorManagers[fileIdx] = onceGeneratorMgr;
					generatorFiles[fileIdx]    = initgenFile;
					fileIdx++;
				}
			}
		}

#pragma endregion
		int today = gameSystem->mTimeMgr->mDayCount;

		{ // nonloop

			int limitGens = courseInfo->mLimitGenInfo.mCount;

			for (int i = 0; i < limitGens; i++) {
				LimitGen* currentGen = static_cast<LimitGen*>(courseInfo->mLimitGenInfo.mOwner.getChildAt(i));

				if (today > currentGen->mMinimumDay || today > currentGen->mMaximumDay)
					continue;
				if (playData->mLimitGen[courseInfo->mCourseIndex].mNonLoops.isFlag(i))
					continue;

				sprintf(filenameCharArr, "%s/nonloop/%s", courseInfo->mAbeFolder, currentGen->mName);

				void* nonLoopFile = LoadTextFile(filenameCharArr);

				if (nonLoopFile) {
					RamStream noonloopTxt(nonLoopFile, -1);
					noonloopTxt.mMode = 1;
					if (noonloopTxt.mMode == 1) {
						noonloopTxt.mTabCount = 0;

						GeneratorMgr* currentNonloopMgr = new GeneratorMgr;
						currentNonloopMgr->_6C          = true; // is nonrepeating?

						currentNonloopMgr->read(noonloopTxt, false);
						currentNonloopMgr->setDayLimit(currentGen->mMaximumDay);
						currentNonloopMgr->updateUseList();

						generatorFiles[fileIdx]    = nonLoopFile;
						generatorManagers[fileIdx] = currentNonloopMgr;
						fileIdx++;

						limitGeneratorMgr->addMgr(currentNonloopMgr);
						playData->mLimitGen[courseInfo->mCourseIndex].mNonLoops.setFlag(i);
					}
				}
			}

		} // end nonloop
		{ // loop

			int day          = gameSystem->mTimeMgr->mDayCount;
			int loopGenCount = courseInfo->mLoopGenInfo.mCount;

			if (day % 30 == 0) {

				for (int i = 0; i < loopGenCount; i++) {
					LimitGen* currentGen = static_cast<LimitGen*>(courseInfo->mLoopGenInfo.mOwner.getChildAt(i));
					if (day % 30 < currentGen->mMinimumDay - 30 || day % 30 < currentGen->mMinimumDay - 30)
						continue;

					bool loopLoaded = playData->mLimitGen[courseInfo->mCourseIndex].mLoops.isFlag(i);

					if (loopLoaded)
						continue;

					sprintf(filenameCharArr, "%s/loop/%s", courseInfo->mAbeFolder, currentGen->mName);
					void* loopFile = LoadTextFile(filenameCharArr);
					if (loopFile) {
						RamStream loopTxt(loopFile, -1);
						loopTxt.mMode = 1;
						if (loopTxt.mMode == 1) {
							loopTxt.mTabCount = 0;

							GeneratorMgr* currentLoopMgr = new GeneratorMgr;
							currentLoopMgr->_6C          = true; // is nonrepeating?

							currentLoopMgr->read(loopTxt, false);
							currentLoopMgr->setDayLimit(currentGen->mMaximumDay - 30);
							currentLoopMgr->updateUseList();

							generatorManagers[fileIdx] = currentLoopMgr;
							generatorFiles[fileIdx]    = loopFile;
							fileIdx++;
							limitGeneratorMgr->addMgr(currentLoopMgr);

							playData->mLimitGen[courseInfo->mCourseIndex].mLoops.setFlag(i);
						}
					}
				}
			}

		} // end loop
		{ // weird day ujim thing
			int today = gameSystem->mTimeMgr->mDayCount;
			sprintf(filenameCharArr, "%s/day/%d.txt", courseInfo->mAbeFolder, today % 30);
			int fileNum = DVDConvertPathToEntrynum(filenameCharArr);
			if (fileNum != -1) {
				void* dayFile = LoadTextFile(filenameCharArr);
				if (dayFile) {
					RamStream dayTxt(dayFile, -1);
					dayTxt.mMode = 1;
					if (dayTxt.mMode == 1) {
						dayTxt.mTabCount = 0;
						dayGeneratorMgr->read(dayTxt, false);
						dayGeneratorMgr->updateUseList();
						generatorManagers[fileIdx] = dayGeneratorMgr;
						generatorFiles[fileIdx]    = dayFile;
						fileIdx++;
					}
				}
			}
		}

		generalEnemyMgr->allocateEnemys(mPlayerMode, -1);
		generalEnemyMgr->setupSoundViewerAndBas();
		pelletMgr->setupResources();

		// cleanup file ptrs that have been left lying arround
		for (int i = fileIdx - 1; i >= 0; i--) {
			delete[] generatorFiles[i];
		}

		for (int i = 0; i < fileIdx; i++) {
			generatorManagers[i]->generate();
		}

		generatorCache->createNumberGenerators();
		generatorCache->loadCreatures(mapMgr->mCourseInfo->mCourseIndex);
	}

	PelletBirthBuffer::birthAll();
	Iterator<Navi> iNavi = naviMgr;
	int unknownidx       = 0;
	CI_LOOP(iNavi)
	{
		switch (unknownidx) {
		case 0: {
			Vector3f vec_0x1c30 = Vector3f(0.0f);
			f32 mapRotation     = mapMgr->getMapRotation();
			Vector3f vec_0x1c24(-40.0f, 0.0f, 2.0f);
			if (gameSystem->isVersusMode()) {
				Onyon* redOnyon = ItemOnyon::mgr->getOnyon(Red);
				P2ASSERTLINE(2739, redOnyon);
				vec_0x1c24 = redOnyon->getPosition();
			} else {
				if (!mapMgr->getDemoMatrix()) {
					mapMgr->getStartPosition(vec_0x1c24, 0);
					vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24) + 8.5f;
					vec_0x1c24.x += -4.526f;
					vec_0x1c24.z += 7.453f;
				} else {
					Matrixf* demoMtx = mapMgr->getDemoMatrix();
					Vector3f vec_0x1c78;
					PSMTXMultVec((PSQuaternion*)demoMtx, (Vec*)&vec_0x1c24, (Vec*)&vec_0x1c78);
					vec_0x1c24   = vec_0x1c78;
					vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24);
					vec_0x1c30   = Vector3f(0.0f);
				}
			}
			Navi* olimar = naviMgr->birth();
			olimar->init(nullptr);
			olimar->mFaceDir     = roundAng(mapRotation);
			olimar->mCamera      = mOlimarCamera;
			olimar->mCamera2     = mOlimarCamera;
			olimar->mController1 = mControllerP1;
			olimar->mController2 = mControllerP1;
			olimar->setPosition(vec_0x1c24, false);
			olimar->setVelocity(vec_0x1c30);
			bool olimarAlive = false;
			if (playData->mDeadNaviID & 1) {
				olimarAlive = true;
				olimar->setDeadLaydown();
			} else {
				olimar->mHealth = playData->mNaviLifeMax[0];
			}

			mapRotation = mapMgr->getMapRotation();
			vec_0x1c24  = Vector3f(-60.0f, 0.0f, -10.0f);
			if (gameSystem->isVersusMode()) {
				Onyon* blueOnyon = ItemOnyon::mgr->getOnyon(Blue);
				P2ASSERTLINE(2791, blueOnyon);
				vec_0x1c24 = blueOnyon->getPosition();
			} else {
				if (!mapMgr->getDemoMatrix()) {
					mapMgr->getStartPosition(vec_0x1c24, 0);
					vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24) + 8.5f;
					vec_0x1c24.x += 18.082f;
					vec_0x1c24.z += -11.428f;
				} else {
					Matrixf* demoMtx = mapMgr->getDemoMatrix();
					Vector3f vec_0x1c78;
					PSMTXMultVec((PSQuaternion*)demoMtx, (Vec*)&vec_0x1c24, (Vec*)&vec_0x1c78);
					vec_0x1c24   = vec_0x1c78;
					vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24);
					vec_0x1c30   = Vector3f(0.0f);
				}
			}
			Navi* louie = naviMgr->birth();
			louie->init(nullptr);
			louie->mFaceDir     = roundAng(mapRotation);
			louie->mCamera      = mLouieCamera;
			louie->mCamera2     = mLouieCamera;
			louie->mController1 = mControllerP2;
			louie->mController2 = mControllerP2;
			louie->setPosition(vec_0x1c24, false);
			louie->setVelocity(vec_0x1c30);
			if (playData->mDeadNaviID & 2 == 0) {
				louie->mHealth = playData->mNaviLifeMax[1];
				if (olimarAlive && !gameSystem->isMultiplayerMode()) {
					InteractFue callNavi(olimar, 0, 1);
					louie->stimulate(callNavi);
				}
			} else {
				louie->setDeadLaydown();
			}
		}
		case 1:
			JUT_PANICLINE(2823, "KESHIMASU!\n"); // erase?
			break;
		case 2: {
			Navi* olimar         = naviMgr->getAt(0);
			olimar->mCamera      = mOlimarCamera;
			olimar->mCamera2     = mOlimarCamera;
			olimar->mController1 = mControllerP1;
			olimar->mController2 = mControllerP1;
			Navi* louie          = naviMgr->getAt(1);
			louie->mCamera       = mLouieCamera;
			louie->mCamera2      = mLouieCamera;
			louie->mController1  = mControllerP2;
			louie->mController2  = mControllerP2;
			break;
		}
		}
	}
	unknownidx++;
}

void BaseGameSection::advanceDayCount()
{
	int newDayCount = gameSystem->mTimeMgr->mDayCount + 1;
	if (newDayCount % 30 == 0) {
		for (int i = 0; i < 4; i++) {
			playData->mLimitGen[i].mLoops.all_zero();
		}
	}
	gameSystem->mTimeMgr->mDayCount = newDayCount;
}

void BaseGameSection::saveToGeneratorCache(CourseInfo* courseinfo)
{
	P2ASSERTLINE(2923, courseinfo);
	generatorCache->beginSave(courseinfo->mCourseIndex);
	FOREACH_NODE(Generator, generatorCache->getFirstGenerator(), node)
	{
		if (node->mReservedNum & 1) {
			generatorCache->saveGenerator(node);
		}
	}
	FOREACH_NODE(Generator, generatorCache->getFirstGenerator(), node)
	{
		if (node->mReservedNum & 1 && node->mReservedNum & 2) {
			generatorCache->saveCreature(node);
		}
	}
	generatorCache->savePikiheads();
	generatorCache->endSave();
}

void BaseGameSection::pmTogglePlayer()
{
	if (mPrevNaviIdx == 0) {
		setPlayerMode(1);
		moviePlayer->mViewport     = sys->mGfx->getViewport(1);
		moviePlayer->mActingCamera = mLouieCamera;
	} else if (mPrevNaviIdx == 1) {
		setPlayerMode(0);
		moviePlayer->mViewport     = sys->mGfx->getViewport(0);
		moviePlayer->mActingCamera = mOlimarCamera;
	}
	onTogglePlayer();
}

/*
 * --INFO--
 * Address:	8014D910
 * Size:	000004
 */
void BaseGameSection::onTogglePlayer() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void BaseGameSection::pmPlayerJoin()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014D914
 * Size:	000004
 */
void BaseGameSection::onPlayerJoin() { }

/*
 * --INFO--
 * Address:	8014D918
 * Size:	0002B8
 */
void BaseGameSection::setPlayerMode(int naviIdx)
{
	Navi* fools[2];

	fools[0] = naviMgr->getAt(0);
	fools[1] = naviMgr->getAt(1);

	fools[0]->disableController();
	fools[1]->disableController();

	switch (naviIdx) {
	case 0: {
		mSecondViewportHeight = 1.0f;
		mSplit                = 0.0f;
		mSplitter->split2(1.0f);
		Matrixf* viewMtx = mLouieCamera->getViewMatrix(false);
		PSMTXCopy((PSQuaternion*)viewMtx, (PSQuaternion*)&mOlimarCamera->mCurViewMatrix);
		mOlimarCamera->update();
		cameraMgr->changePlayerMode(0, cameraMgrCallback);
		if (mPlayerMode == 1) {
			PlayCamera* olimarCamera = mOlimarCamera;
			Graphics* gfx            = sys->mGfx;
			Viewport* olimarViewport = gfx->getViewport(0);
			olimarViewport->mCamera  = olimarCamera;
			olimarViewport->updateCameraAspect();
			PlayCamera* louieCamera = mLouieCamera;
			Viewport* louieViewport = gfx->getViewport(1);
			louieViewport->mCamera  = louieCamera;
			louieViewport->updateCameraAspect();
		}
		Viewport* olimarViewport    = sys->mGfx->getViewport(0);
		sys->mGfx->mCurrentViewport = olimarViewport;
		mLightMgr->updatePosition(sys->mGfx->mCurrentViewport);
		break;
	}
	case 1: {
		if (mPlayerMode == 1) {
			Graphics* gfx            = sys->mGfx;
			PlayCamera* olimarCamera = mLouieCamera;

			Viewport* olimarViewport = gfx->getViewport(0);
			olimarViewport->mCamera  = olimarCamera;
			olimarViewport->updateCameraAspect();

			PlayCamera* louieCamera = mOlimarCamera;
			Viewport* louieViewport = gfx->getViewport(1);
			louieViewport->mCamera  = louieCamera;
			louieViewport->updateCameraAspect();

			mSecondViewportHeight = 1.0f;
			mSplitter->split2(1.0f);
		} else {
			mSecondViewportHeight = 0.0f;
			mSplitter->split2(0.0f);
		}
		mSplit           = 0.0f;
		Matrixf* viewMtx = mOlimarCamera->getViewMatrix(false);
		PSMTXCopy((PSQuaternion*)viewMtx, (PSQuaternion*)&mLouieCamera->mCurViewMatrix);
		mLouieCamera->update();
		cameraMgr->changePlayerMode(1, cameraMgrCallback);
		Viewport* louieViewport     = sys->mGfx->getViewport(1);
		sys->mGfx->mCurrentViewport = louieViewport;
		mLightMgr->updatePosition(sys->mGfx->mCurrentViewport);
		break;
	}
	case 2: {
		mSecondViewportHeight = 0.5f;
		mSplit                = 0.0f;
		mSplitter->split2(0.5f);
		cameraMgr->changePlayerMode(2, cameraMgrCallback);
		break;
	}
	}
	mPrevNaviIdx = naviIdx;
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
void BaseGameSection::onCameraBlendFinished(CameraArg* arg)
{
	setCamController();
	if (gameSystem->mMode == GSM_STORY_MODE) {
		if (!playData->isDemoFlag(DEMO_First_Use_Louie) && playData->isDemoFlag(DEMO_Unlock_Captain_Switch)) {
			Navi* louie = naviMgr->getAt(1);
			JUT_ASSERTLINE(3088, louie, "louie null");
			MoviePlayArg louieStart("x05_louiestart", nullptr, nullptr, 0);
			louieStart.setTarget(louie);
			moviePlayer->mTargetObject = louie;
			moviePlayer->play(louieStart);
			playData->setDemoFlag(DEMO_First_Use_Louie);
		}
	}
}
/*
 * --INFO--
 * Address:	8014DD20
 * Size:	000068
 */
void BaseGameSection::setFixNearFar(bool b, float near, float far)
{
	mOlimarCamera->setFixNearFar(b, near, far);
	mLouieCamera->setFixNearFar(b, near, far);
}

/*
 * --INFO--
 * Address:	8014DD88
 * Size:	000210
 */
void BaseGameSection::setCamController()
{
	Navi* navis[2];

	navis[0] = naviMgr->getAt(0);
	navis[1] = naviMgr->getAt(1);

	switch (mPrevNaviIdx) {
	case 0: {
		PlayCamera* olimarCam        = mOlimarCamera;
		navis[0]->mCamera            = olimarCam;
		navis[0]->mCamera2           = olimarCam;
		Controller* olimarController = mControllerP1;
		navis[0]->mController1       = olimarController;
		navis[0]->mController2       = olimarController;
		navis[1]->disableController();
		moviePlayer->mTargetNavi   = navis[0];
		moviePlayer->mViewport     = sys->mGfx->getViewport(0);
		moviePlayer->mActingCamera = mOlimarCamera;
		if (!gameSystem->isMultiplayerMode()) {
			PSSetCurCameraNo(0);
			PSPlayerChangeToOrimer();
		}
		break;
	}
	case 1: {
		navis[0]->disableController();
		PlayCamera* louieCam        = mLouieCamera;
		navis[1]->mCamera           = louieCam;
		navis[1]->mCamera2          = louieCam;
		Controller* louieController = mControllerP1;
		navis[1]->mController1      = louieController;
		navis[1]->mController2      = louieController;
		moviePlayer->mTargetNavi    = navis[1];
		moviePlayer->mViewport      = sys->mGfx->getViewport(1);
		moviePlayer->mActingCamera  = mLouieCamera;
		if (!gameSystem->isMultiplayerMode()) {
			PSSetCurCameraNo(1);
			PSPlayerChangeToLugie();
		}
		break;
	}
	case 2: {
		PlayCamera* olimarCam        = mOlimarCamera;
		navis[0]->mCamera            = olimarCam;
		navis[0]->mCamera2           = olimarCam;
		Controller* olimarController = mControllerP1;
		navis[0]->mController1       = olimarController;
		navis[0]->mController2       = olimarController;
		PlayCamera* louieCam         = mLouieCamera;
		navis[1]->mCamera            = louieCam;
		navis[1]->mCamera2           = louieCam;
		Controller* louieController  = mControllerP2;
		navis[1]->mController1       = louieController;
		navis[1]->mController2       = louieController;

		moviePlayer->mTargetNavi   = navis[0];
		moviePlayer->mActingCamera = mOlimarCamera;
		if (gameSystem->mMode == GSM_STORY_MODE) {
			PSSetCurCameraNo(0);
		}
		break;
	}
	}
	on_setCamController(mPrevNaviIdx);
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
void BaseGameSection::setDefaultPSSceneInfo(PSGame::SceneInfo& sceneInfo)
{
	P2ASSERTLINE(3197, mOlimarCamera);
	P2ASSERTLINE(3198, mLouieCamera);

	sceneInfo.mCameras      = 2;
	sceneInfo.mCam1Position = mOlimarCamera->getSoundPositionPtr();
	sceneInfo.mCam2Position = mOlimarCamera->getSoundPositionPtr();
	sceneInfo.mCameraMtx    = mOlimarCamera->getSoundMatrixPtr();
	sceneInfo._0C           = mLouieCamera->getSoundPositionPtr();
	sceneInfo._14           = mLouieCamera->getSoundPositionPtr();
	sceneInfo._1C           = mLouieCamera->getSoundMatrixPtr();
	BoundBox box;

	mapMgr->getBoundBox(box);

	Vector3f min = box.mMin;
	Vector3f max = box.mMax;

	sceneInfo._20.minX = min.x;
	sceneInfo._20.minY = min.y;
	sceneInfo._20.minZ = min.z;
	sceneInfo._20.maxX = max.x;
	sceneInfo._20.maxY = max.y;
	sceneInfo._20.maxZ = max.z;
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
// void prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3f b()
void BaseGameSection::prepareHoleIn(Vector3f& suroundPos, bool killPikihead)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	Navi* aliveOrima = naviMgr->getAliveOrima(0);
	if (killPikihead) {
		Iterator<ItemPikihead::Item> iPikihead = ItemPikihead::mgr;
		CI_LOOP(iPikihead)
		{
			ItemPikihead::Item* item = *iPikihead;
			if (item->isAlive()) {
				DeathMgr::inc(DeathCounter::COD_Battle);
				DeathMgr::inc(DeathCounter::COD_All);
				if (gameSystem->isChallengeMode()) {
					GameMessageVsPikminDead deadPikmin;
					sendMessage(deadPikmin);
				}
			}
		}
	}
	Iterator<Piki> iPiki = pikiMgr;
	CI_LOOP(iPiki)
	{
		Piki* piki = *iPiki;
		if ((int)piki->mPikiKind == Bulbmin && piki->isPikmin() && !piki->isZikatu()) {
			if ((int)piki->mPikiKind == Bulbmin) {
				piki->getCurrActionID();
				piki->getStateID();
			}
			piki->endStick();
			piki->mFsm->transitForce(piki, PIKISTATE_Walk, nullptr);
			piki->getCreatureID();
			piki->mNavi   = aliveOrima;
			f32 randAngle = randFloat() * TAU;

			Vector3f suroundCircle(pikmin2_sinf(randAngle), 0, pikmin2_cosf(randAngle));

			Vector3f vec = Vector3f(pikmin2_sinf(randAngle) * 50.0f, 0.0f, pikmin2_cosf(randAngle) * 50.0f);
			vec += suroundPos;
			vec.y = mapMgr->getMinY(vec);
			piki->setPosition(vec, false);
			PikiAI::ActFormationInitArg arg(aliveOrima, 1);
			piki->mBrain->start(PikiAI::ACT_Formation, &arg);
			piki->movie_begin(false);
		}
	}
	if (aliveOrima) {
		aliveOrima->demowaitAllPikis();
	}
}
/*
 * --INFO--
 * Address:	8014E7BC
 * Size:	000714
 */
// void prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3f()
void BaseGameSection::prepareFountainOn(Vector3f& suroundPos)
{
	Iterator<BaseItem> iFountain = ItemBigFountain::mgr;
	CI_LOOP(iFountain)
	{
		ItemBigFountain::Item* fountain = static_cast<ItemBigFountain::Item*>(*iFountain);
		fountain->killAllEffect();
	}
	Screen::gGame2DMgr->mScreenMgr->reset();
	Navi* aliveOrima = naviMgr->getAliveOrima(0);

	Iterator<ItemPikihead::Item> iPikihead = ItemPikihead::mgr;
	CI_LOOP(iPikihead)
	{
		ItemPikihead::Item* item = *iPikihead;
		if (item->isAlive()) {
			DeathMgr::inc(DeathCounter::COD_Battle);
			DeathMgr::inc(DeathCounter::COD_All);
			if (gameSystem->isChallengeMode()) {
				GameMessageVsPikminDead deadPikmin;
				sendMessage(deadPikmin);
			}
		}
	}
	PikiCond_ExceptChappyPikmin pikiCond;
	pikiMgr->moveAllPikmins(suroundPos, 50.0f, &pikiCond);
	Iterator<Piki> iPiki(pikiMgr, NULL, nullptr);

	CI_LOOP(iPiki)
	{
		Piki* piki = *iPiki;
		if ((int)piki->mPikiKind == Bulbmin) {
			piki->movie_begin(false);
		} else {
			piki->endStick();
			piki->mFsm->transitForce(piki, PIKISTATE_Walk, nullptr);
			piki->getCreatureID();
			piki->mNavi = aliveOrima;

			PikiAI::ActFormationInitArg arg(aliveOrima);
			arg._08 = 1;
			piki->mBrain->start(PikiAI::ACT_Formation, &arg);
			piki->movie_begin(false);
		}
	}
	if (aliveOrima) {
		aliveOrima->demowaitAllPikis();
	}
}

/*
 * --INFO--
 * Address:	8014EED0
 * Size:	000074
 */
void BaseGameSection::initLights()
{
	mLightMgr           = new GameLightMgr("ƒQ[ƒ€ƒ‰ƒCƒgƒ}ƒl[ƒWƒƒ"); // game light manager
	mLightMgr->mTimeMgr = gameSystem->mTimeMgr;
	addGenNode(mLightMgr);
	particleMgr->mLightMgr = mLightMgr;
}

/*
 * --INFO--
 * Address:	8014EF44
 * Size:	000020
 */
void BaseGameSection::draw3D(Graphics& gfx) { newdraw_draw3D_all(gfx); }

/*
 * --INFO--
 * Address:	8014EF64
 * Size:	0001D4
 */
void BaseGameSection::drawParticle(Graphics& gfx, int viewport)
{
	if (BaseHIOParms::sDrawParticle) {
		Viewport* port = gfx.getViewport(viewport);
		if (port->viewable()) {
			port->setProjection();
			port->setViewport();
			if (!gameSystem->isMultiplayerMode() && mPrevNaviIdx != 2) {
				mLightMgr->mFogMgr->off(gfx);
				particleMgr->draw(port, 0);
				mLightMgr->mFogMgr->set(gfx);
			}
			if (moviePlayer && moviePlayer->mFlags & MoviePlayer::IS_ACTIVE) {
				for (int i = 3; i < 6; i++) {
					particleMgr->draw(port, i);
				}
			}
			particleMgr->draw(port, 1);
			mLightMgr->mFogMgr->off(gfx);
			if (moviePlayer && moviePlayer->mFlags & MoviePlayer::IS_ACTIVE) {
				for (int i = 6; i < 9; i++) {
					particleMgr->draw(port, i);
				}
			}
			particleMgr->draw(port, 2);
		}
	}
}

/*
 * --INFO--
 * Address:	8014F138
 * Size:	0000A0
 */
void BaseGameSection::draw_Ogawa2D(Graphics& gfx)
{
	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(true, 0);
	sys->mTimers->_start("2ddraw", true);
	Screen::gGame2DMgr->draw(gfx);
	sys->mTimers->_stop("2ddraw");
	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(false, 0);
}

/*
 * --INFO--
 * Address:	8014F1D8
 * Size:	000004
 */
void BaseGameSection::test_draw_treasure_detector() { }

/*
 * --INFO--
 * Address:	8014F1DC
 * Size:	0001BC
 */
void BaseGameSection::draw2D(Graphics& gfx)
{
	j3dSys.reinitGX();
	gfx.mOrthoGraph.setPort();
	draw_Ogawa2D(gfx);
	if (_168) {
		_168->capture(mTexData1, _170, GX_TF_IA8, false, 0);
	}
	if (!_168 && mXfbFlags & 2) {
		mXfbImage->capture(mXfbTexture1, mXfbTexture2, GX_TF_IA8, true, 0);
		mXfbFlags &= ~2;
		mXfbFlags |= 1;
		mXfbFlags |= 4;
	}
	Screen::gGame2DMgr->drawIndirect(gfx);
	gfx.mOrthoGraph.setPort();
	J2DPrint print(JFWSystem::systemFont, 0.0f);
	print.initiate();
	print.mCharColor     = JUtility::TColor(0x9e, 0xdb, 0xff, 0xff);
	print.mGradientColor = JUtility::TColor(0x38, 0x9f, 0xf7, 0xff);
	JKRHeap::sCurrentHeap->getFreeSize();
	// print was likely showing how much head space was left
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
void BaseGameSection::directDraw(Graphics& gfx, Viewport* vp)
{
	vp->setViewport();
	vp->setProjection();
	gfx.initPrimDraw(vp->getMatrix(true));
	doDirectDraw(gfx, vp);
	if (TexCaster::Mgr::sInstance) {
		gfx.initPrimDraw(vp->getMatrix(true));
		mLightMgr->mFogMgr->set(gfx);
		TexCaster::Mgr::sInstance->draw(gfx);
	}
}

/*
 * --INFO--
 * Address:	8014F450
 * Size:	000078
 */
void BaseGameSection::directDrawPost(Graphics& gfx, Viewport* vp)
{
	vp->setViewport();
	vp->setProjection();
	gfx.initPrimDraw(vp->getMatrix(true));
	doDirectDrawPost(gfx, vp);
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
void BaseGameSection::j3dSetView(Viewport* vp, bool b)
{
	vp->setJ3DViewMtx(b);
	doSetView(vp->mVpId);
	doViewCalc();
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
void BaseGameSection::doSimulation(float rate) { gameSystem->doSimulation(rate); }

/*
 * --INFO--
 * Address:	8014F54C
 * Size:	000030
 */
void BaseGameSection::doSimpleDraw(Viewport* vp) { gameSystem->doSimpleDraw(vp); }

/*
 * --INFO--
 * Address:	8014F57C
 * Size:	0001D8
 */
void BaseGameSection::doAnimation()
{
	Navi* olimar = naviMgr->getAt(0);
	if (gameSystem->mMode != GSM_PIKLOPEDIA && generatorMgr) {
		Vector3f olimarPos = olimar->getPosition();
		generatorMgr->updateCursorPos(olimarPos);
		onceGeneratorMgr->updateCursorPos(olimarPos);
		limitGeneratorMgr->updateCursorPos(olimarPos);
		plantsGeneratorMgr->updateCursorPos(olimarPos);
		dayGeneratorMgr->updateCursorPos(olimarPos);
	}
	if (testPathfinder) {
		testPathfinder->update();
	}
	sys->mTimers->_start("gameSys-da", true);
	gameSystem->doAnimation();
	sys->mTimers->_stop("gameSys-da");
	if (particleMgr && !gameSystem->mIsFrozen) {
		particleMgr->doAnimation();
	}
	if (gameSystem->mMode != GSM_PIKLOPEDIA && generatorMgr) {
		generatorMgr->doAnimation();
		onceGeneratorMgr->doAnimation();
		limitGeneratorMgr->doAnimation();
		plantsGeneratorMgr->doAnimation();
		dayGeneratorMgr->doAnimation();
	}
	if (gameSystem->mMode != GSM_PIKLOPEDIA) {
		updateSplitter();
	}
}

/*
 * --INFO--
 * Address:	8014F754
 * Size:	00004C
 */
void BaseGameSection::changeGeneratorCursor(Vector3f& vec) { naviMgr->getAt(0)->setPosition(vec, false); }

/*
 * --INFO--
 * Address:	8014F7A0
 * Size:	0000C8
 */
void BaseGameSection::doEntry()
{
	setDrawBuffer(0);
	sys->mTimers->_start("ENT-GSYS", true);
	gameSystem->doEntry();
	sys->mTimers->_stop("ENT-GSYS");
	sys->mTimers->_start("ENT-REST", true);
	if (particleMgr) {
		setDrawBuffer(1);
		particleMgr->doEntry();
	}
	sys->mTimers->_stop("ENT-REST");
}

/*
 * --INFO--
 * Address:	8014F868
 * Size:	000100
 */
void BaseGameSection::doSetView(int viewportNumber)
{
	if (mPlayerMode == 1)
		viewportNumber = 0;
	gameSystem->doSetView(viewportNumber);
	if (particleMgr) {
		particleMgr->doSetView(viewportNumber);
	}
	if (gameSystem->mMode != GSM_PIKLOPEDIA && generatorMgr) {
		generatorMgr->doSetView(viewportNumber);
		onceGeneratorMgr->doSetView(viewportNumber);
		limitGeneratorMgr->doSetView(viewportNumber);
		plantsGeneratorMgr->doSetView(viewportNumber);
		dayGeneratorMgr->doSetView(viewportNumber);
	}
}

/*
 * --INFO--
 * Address:	8014F968
 * Size:	0000C8
 */
void BaseGameSection::doViewCalc()
{
	gameSystem->doViewCalc();
	if (particleMgr) {
		particleMgr->doViewCalc();
	}
	if (gameSystem->mMode != GSM_PIKLOPEDIA && generatorMgr) {
		generatorMgr->doViewCalc();
		onceGeneratorMgr->doViewCalc();
		limitGeneratorMgr->doViewCalc();
		plantsGeneratorMgr->doViewCalc();
		dayGeneratorMgr->doViewCalc();
	}
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
void BaseGameSection::updateBlendCamera() { }

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
void BaseGameSection::endSplit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FC10
 * Size:	000134
 */
void BaseGameSection::updateSplitter()
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
void BaseGameSection::onStartHeap() { }

/*
 * --INFO--
 * Address:	8014FDA4
 * Size:	0002A8
 */
void BaseGameSection::clearHeap()
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
void BaseGameSection::onClearHeap() { }

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
void BaseGameSection::startFadeblack()
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
void BaseGameSection::startFadewhite()
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
void BaseGameSection::setupFixMemory()
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
void BaseGameSection::setupFixMemory_dvdload()
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
bool BaseGameSection::enableAllocHalt() { return false; }

/*
 * --INFO--
 * Address:	80150708
 * Size:	000008
 */
bool BaseGameSection::disableAllocHalt() { return false; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
bool BaseGameSection::isAllocHalt()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80150710
 * Size:	000CC0
 */
void BaseGameSection::setupFloatMemory()
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
void BaseGameSection::onSetSoundScene() { }

/*
 * --INFO--
 * Address:	801513D4
 * Size:	000008
 */
int BaseGameSection::getCurrFloor() { return -1; }

/*
 * --INFO--
 * Address:	801513DC
 * Size:	000008
 */
bool BaseGameSection::challengeDisablePelplant() { return true; }

/*
 * --INFO--
 * Address:	801513E4
 * Size:	000008
 */
int BaseGameSection::getVsEditNumber() { return -0x2; }

/*
 * --INFO--
 * Address:	801513EC
 * Size:	000008
 */
char* BaseGameSection::getEditorFilename()
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
char* BaseGameSection::getCaveFilename()
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
void BaseGameSection::onSetupFloatMemory() { }

/*
 * --INFO--
 * Address:	80151404
 * Size:	000008
 */
bool BaseGameSection::isDevelopSection() { return true; }

} // namespace Game

/*
 * --INFO--
 * Address:	8015140C
 * Size:	000050
 */
PSSystem::SingletonBase<PSM::ObjBase>::~SingletonBase()
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

namespace Game {

/*
 * --INFO--
 * Address:	8015145C
 * Size:	0000A4
 */
void BaseGameSection::setDrawBuffer(int index)
{
	P2ASSERTBOUNDSLINE(5295, 1, index, 10);
	j3dSys.mDrawBuffer[0] = _12C->get(index)->mBuffer;
	j3dSys.mDrawBuffer[1] = _130->get(index)->mBuffer;
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
void BaseGameSection::createFallPikminSound()
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
bool PikiCond_ExceptChappyPikmin::satisfy(Game::Piki* p)
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
	mIsLoadingDVD = true;
	return mIsLoadingDVD;
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
void BaseGameSection::startMainBgm() { }

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
CourseInfo* BaseGameSection::getCurrentCourseInfo() { return nullptr; }

/*
 * --INFO--
 * Address:	80151910
 * Size:	000008
 */
bool BaseGameSection::openContainerWindow() { return false; }

/*
 * --INFO--
 * Address:	80151918
 * Size:	000004
 */
void BaseGameSection::closeContainerWindow() { }

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
void BaseGameSection::gmPikminZero() { }

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
// void __sinit_baseGameSection_cpp()
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
