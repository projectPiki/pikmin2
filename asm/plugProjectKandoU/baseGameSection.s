.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_baseGameSection_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047C948, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047C948
.balign 4
.obj lbl_8047C954, local
	.asciz "baseGameSection"
.endobj lbl_8047C954
.balign 4
.obj lbl_8047C964, local
	.asciz "baseGameSection.cpp"
.endobj lbl_8047C964
.balign 4
.obj lbl_8047C978, local # Shift-JIS
	.4byte 0x825189F1
	.4byte 0x82CD96B3
	.4byte 0x979D8297
	.2byte 0x0A00
.endobj lbl_8047C978
.balign 4
.obj lbl_8047C988, local # Shift-JIS
	.4byte 0x75736553
	.4byte 0x70656369
	.4byte 0x66696346
	.4byte 0x42546578
	.4byte 0x74757265
	.4byte 0x2082B582
	.4byte 0xC482C882
	.4byte 0xA282970A
	.byte 0
.endobj lbl_8047C988
.balign 4
.obj lbl_8047C9AC, local
	.asciz "PSGame.h"
.endobj lbl_8047C9AC
.balign 4
.obj lbl_8047C9B8, local
	.asciz "P2Assert"
.endobj lbl_8047C9B8
.balign 4
.obj lbl_8047C9C4, local
	.asciz "waitSyncLoad"
.endobj lbl_8047C9C4
.balign 4
.obj lbl_8047C9D4, local
	.asciz "BGS::init"
.endobj lbl_8047C9D4
.balign 4
.obj lbl_8047C9E0, local
	.asciz "heapStatus"
.endobj lbl_8047C9E0
.balign 4
.obj lbl_8047C9EC, local
	.asciz "baseGameSection::init"
.endobj lbl_8047C9EC
.balign 4
.obj lbl_8047CA04, local
	.asciz "BaseGameSection::initHIO"
.endobj lbl_8047CA04
.balign 4
.obj lbl_8047CA20, local
	.asciz "BaseGameSection::MoviePlayer"
.endobj lbl_8047CA20
.balign 4
.obj lbl_8047CA40, local
	.asciz "BaseGameSection::InitJ3D"
.endobj lbl_8047CA40
.balign 4
.obj lbl_8047CA5C, local
	.asciz "BaseGameSection::Before 2D"
.endobj lbl_8047CA5C
.balign 4
.obj lbl_8047CA78, local
	.asciz "BaseGameSection::Game2DMgr"
.endobj lbl_8047CA78
.balign 4
.obj lbl_8047CA94, local
	.asciz "particle"
.endobj lbl_8047CA94
.balign 4
.obj lbl_8047CAA0, local
	.asciz "_draw3D_"
.endobj lbl_8047CAA0
.balign 4
.obj lbl_8047CAAC, local
	.asciz "normal-fogoff"
.endobj lbl_8047CAAC
.balign 4
.obj lbl_8047CABC, local
	.asciz "postshadow"
.endobj lbl_8047CABC
.balign 4
.obj lbl_8047CAC8, local
	.asciz "objectlast"
.endobj lbl_8047CAC8
.balign 4
.obj lbl_8047CAD4, local
	.asciz "Generator(Default)"
.endobj lbl_8047CAD4
.balign 4
.obj lbl_8047CAE8, local
	.asciz "Generator(Init)"
.endobj lbl_8047CAE8
.balign 4
.obj lbl_8047CAF8, local
	.asciz "Generator(Limit)"
.endobj lbl_8047CAF8
.balign 4
.obj lbl_8047CB0C, local # Shift-JIS
	.4byte 0x47656E65
	.4byte 0x7261746F
	.4byte 0x72289041
	.4byte 0x95A82900
.endobj lbl_8047CB0C
.balign 4
.obj lbl_8047CB1C, local
	.asciz "Generator(DAY)"
.endobj lbl_8047CB1C
.balign 4
.obj lbl_8047CB2C, local
	.asciz "%s/defaultgen.txt"
.endobj lbl_8047CB2C
.balign 4
.obj lbl_8047CB40, local
	.asciz "/%s/plantsgen.txt"
.endobj lbl_8047CB40
.balign 4
.obj lbl_8047CB54, local
	.asciz "%s/initgen.txt"
.endobj lbl_8047CB54
.balign 4
.obj lbl_8047CB64, local
	.asciz "%s/nonloop/%s"
.endobj lbl_8047CB64
.balign 4
.obj lbl_8047CB74, local
	.asciz "%s/loop/%s"
.endobj lbl_8047CB74
.balign 4
.obj lbl_8047CB80, local
	.asciz "%s/day/%d.txt"
.endobj lbl_8047CB80
.balign 4
.obj lbl_8047CB90, local
	.asciz "KESHIMASU!\n"
.endobj lbl_8047CB90
.balign 4
.obj lbl_8047CB9C, local
	.asciz "no demomatrix\n"
.endobj lbl_8047CB9C
.balign 4
.obj lbl_8047CBAC, local
	.asciz "louie null"
.endobj lbl_8047CBAC
.balign 4
.obj lbl_8047CBB8, local
	.asciz "x05_louiestart"
.endobj lbl_8047CBB8
.balign 4
.obj lbl_8047CBC8, local # Shift-JIS
	.4byte 0x8351815B
	.4byte 0x83808389
	.4byte 0x83438367
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
.endobj lbl_8047CBC8
.balign 4
.obj lbl_8047CBE0, local
	.asciz "DON'T USE THIS !\n"
.endobj lbl_8047CBE0
.balign 4
.obj lbl_8047CBF4, local # Shift-JIS
	.4byte 0x8E6782C1
	.4byte 0x82C482C8
	.4byte 0x82A282A9
	.4byte 0x82E00A00
.endobj lbl_8047CBF4
.balign 4
.obj lbl_8047CC04, local
	.asciz "gameSys-da"
.endobj lbl_8047CC04
.balign 4
.obj lbl_8047CC10, local
	.asciz "ENT-GSYS"
.endobj lbl_8047CC10
.balign 4
.obj lbl_8047CC1C, local
	.asciz "ENT-REST"
.endobj lbl_8047CC1C
.balign 4
.obj lbl_8047CC28, local
	.asciz "setupFixMemory"
.endobj lbl_8047CC28
.balign 4
.obj lbl_8047CC38, local
	.asciz "user/Kando/mizu.bti"
.endobj lbl_8047CC38
.balign 4
.obj lbl_8047CC4C, local
	.asciz "fbTexture"
.endobj lbl_8047CC4C
.balign 4
.obj lbl_8047CC58, local
	.asciz "user/Ebisawa/effect/game.jpc"
.endobj lbl_8047CC58
.balign 4
.obj lbl_8047CC78, local
	.asciz "user/Ebisawa/effect/eff2d_game2d.jpc"
.endobj lbl_8047CC78
.balign 4
.obj lbl_8047CCA0, local
	.asciz "navi-piki"
.endobj lbl_8047CCA0
.balign 4
.obj lbl_8047CCAC, local
	.asciz "allocation dameck!\n%d/%d"
.endobj lbl_8047CCAC
.balign 4
.obj lbl_8047CCC8, local
	.asciz "PSCommon.h"
.endobj lbl_8047CCC8
.balign 4
.obj lbl_8047CCD4, local
	.asciz "setupFloatMemory"
.endobj lbl_8047CCD4
.balign 4
.obj lbl_8047CCE8, local
	.asciz "Pikmin-PikiClass"
.endobj lbl_8047CCE8
.balign 4
.obj lbl_8047CCFC, local
	.asciz "user/Mukki/mapunits/caveinfo/%s"
.endobj lbl_8047CCFC
.balign 4
.obj lbl_8047CD1C, local
	.asciz "user/Abe/vs/%s"
.endobj lbl_8047CD1C
.balign 4
.obj lbl_8047CD2C, local
	.asciz "PlatCellMgr"
.endobj lbl_8047CD2C
.balign 4
.obj lbl_8047CD38, local
	.asciz "MapRoomCellMgr"
.endobj lbl_8047CD38
.balign 4
.obj lbl_8047CD48, local
	.asciz "<float> Done\n"
.endobj lbl_8047CD48
.balign 4
.obj lbl_8047CD58, local
	.asciz "caveinfo.txt"
.endobj lbl_8047CD58
.balign 4
.obj lbl_8047CD68, local
	.asciz "CreatureActionArg"
.endobj lbl_8047CD68
.balign 4
.obj lbl_8047CD7C, local
	.asciz "ActionArg"
.endobj lbl_8047CD7C
.balign 4
.obj lbl_8047CD88, local
	.asciz "# %d/%d\r\n"
.endobj lbl_8047CD88

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj UfoMenuResult__Q22og6Screen, global
	.4byte 1
	.4byte 2
	.4byte 3
	.4byte 0
.endobj UfoMenuResult__Q22og6Screen
.obj lbl_804B0C8C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte "onKanteiDone__Q24Game15BaseGameSectionFR7Rect<f>"
.endobj lbl_804B0C8C
.obj lbl_804B0C98, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte onCameraBlendFinished__Q24Game15BaseGameSectionFPQ24Game9CameraArg
.endobj lbl_804B0C98
.obj lbl_804B0CA4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte dvdloadGameSystem__Q24Game15BaseGameSectionFv
.endobj lbl_804B0CA4
.obj lbl_804B0CB0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte movieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl
.endobj lbl_804B0CB0
.obj lbl_804B0CBC, local
	.4byte 0x00000000
	.4byte 0x000000B0
	.4byte 0x00000000
.endobj lbl_804B0CBC
.obj lbl_804B0CC8, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte "changeGeneratorCursor__Q24Game15BaseGameSectionFR10Vector3<f>"
.endobj lbl_804B0CC8
.obj lbl_804B0CD4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte setupFixMemory_dvdload__Q24Game15BaseGameSectionFv
.endobj lbl_804B0CD4
.obj "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>Fv"
.endobj "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"
.obj __vt__15ModelEffectData, weak
	.4byte 0
	.4byte 0
	.4byte __dt__15ModelEffectDataFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__15ModelEffectData
.obj __vt__10Controller, weak
	.4byte 0
	.4byte 0
	.4byte __dt__10ControllerFv
.endobj __vt__10Controller
.obj __vt__27PikiCond_ExceptChappyPikmin, weak
	.4byte 0
	.4byte 0
	.4byte satisfy__27PikiCond_ExceptChappyPikminFPQ24Game4Piki
.endobj __vt__27PikiCond_ExceptChappyPikmin
.skip 0x24
.obj __vt__Q26PikiAI19ActFormationInitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q26PikiAI17CreatureActionArgFv
.endobj __vt__Q26PikiAI19ActFormationInitArg
.skip 0x98
.obj "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>FR10Vector3<f>"
.endobj "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"
.obj "__vt__25IDelegate1<R10Vector3<f>>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__25IDelegate1<R10Vector3<f>>"
.skip 0x20
.obj "__vt__17Container<5Plane>", weak
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
.endobj "__vt__17Container<5Plane>"
.obj "__vt__22ArrayContainer<5Plane>", weak
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
.endobj "__vt__22ArrayContainer<5Plane>"
.obj __vt__9CullPlane, weak
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
.endobj __vt__9CullPlane
.obj "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>FPQ24Game11MovieConfigUlUl"
.endobj "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"
.obj "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"
.obj "__vt__34Delegate<Q24Game15BaseGameSection>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__34Delegate<Q24Game15BaseGameSection>Fv"
.endobj "__vt__34Delegate<Q24Game15BaseGameSection>"
.obj __vt__9IDelegate, weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__9IDelegate
.obj __vt__Q24Game15BaseGameSection, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game15BaseGameSectionFv
	.4byte run__7SectionFv
	.4byte update__7SectionFv
	.4byte draw__7SectionFR8Graphics
	.4byte init__Q24Game15BaseGameSectionFv
	.4byte drawInit__7SectionFR8Graphics
	.4byte drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode
	.4byte doExit__7SectionFv
	.4byte forceFinish__Q24Game15BaseGameSectionFv
	.4byte forceReset__7SectionFv
	.4byte getCurrentSection__7SectionFv
	.4byte doLoadingStart__7SectionFv
	.4byte doLoading__7SectionFv
	.4byte doUpdate__Q24Game15BaseGameSectionFv
	.4byte doDraw__Q24Game15BaseGameSectionFR8Graphics
	.4byte isFinishable__7SectionFv
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
	.4byte goMainMap__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4Item
	.4byte getCaveID__Q24Game15BaseGameSectionFv
	.4byte getCurrentCourseInfo__Q24Game15BaseGameSectionFv
	.4byte challengeDisablePelplant__Q24Game15BaseGameSectionFv
	.4byte getCaveFilename__Q24Game15BaseGameSectionFv
	.4byte getEditorFilename__Q24Game15BaseGameSectionFv
	.4byte getVsEditNumber__Q24Game15BaseGameSectionFv
	.4byte openContainerWindow__Q24Game15BaseGameSectionFv
	.4byte closeContainerWindow__Q24Game15BaseGameSectionFv
	.4byte playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature
	.4byte playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon
	.4byte playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki
	.4byte enableTimer__Q24Game15BaseGameSectionFfUl
	.4byte disableTimer__Q24Game15BaseGameSectionFUl
	.4byte getTimerType__Q24Game15BaseGameSectionFv
	.4byte onMovieStart__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q24Game15BaseGameSectionFi
	.4byte startFadeout__Q24Game15BaseGameSectionFf
	.4byte startFadein__Q24Game15BaseGameSectionFf
	.4byte startFadeoutin__Q24Game15BaseGameSectionFf
	.4byte startFadeblack__Q24Game15BaseGameSectionFv
	.4byte startFadewhite__Q24Game15BaseGameSectionFv
	.4byte gmOrimaDown__Q24Game15BaseGameSectionFi
	.4byte gmPikminZero__Q24Game15BaseGameSectionFv
	.4byte openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi
	.4byte openCaveMoreMenu__Q24Game15BaseGameSectionFPQ34Game8ItemHole4ItemP10Controller
	.4byte openKanketuMenu__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
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
.endobj __vt__Q24Game15BaseGameSection
.obj "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>FPQ24Game9CameraArg"
.endobj "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"
.obj "__vt__30IDelegate1<PQ24Game9CameraArg>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__30IDelegate1<PQ24Game9CameraArg>"
.obj "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>FR7Rect<f>"
.endobj "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"
.obj "__vt__21IDelegate1<R7Rect<f>>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__21IDelegate1<R7Rect<f>>"

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj sOptDraw__Q24Game15BaseGameSection, global
	.byte 3
.endobj sOptDraw__Q24Game15BaseGameSection

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 4
.endobj gfNAN___Q24Game5P2JST
.obj cameraMgrCallback, global
	.skip 4
.endobj cameraMgrCallback
.obj theExpHeap, local
	.skip 4
.endobj theExpHeap
.obj col$4567, local
	.skip 4
.endobj col$4567
.obj init$4568, local
	.skip 1
.endobj init$4568

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518498, local
	.float 0.0
.endobj lbl_80518498
.obj lbl_8051849C, local
	.float 608.0
.endobj lbl_8051849C
.obj lbl_805184A0, local
	.float 480.0
.endobj lbl_805184A0
.obj lbl_805184A4, local
	.float 1.0
.endobj lbl_805184A4
.balign 4
.obj lbl_805184A8, local
	.asciz "doAnim"
.endobj lbl_805184A8
.balign 4
.obj lbl_805184B0, local
	.asciz "ENT"
.endobj lbl_805184B0
.balign 4
.obj lbl_805184B4, local
	.asciz "ENT-A"
.endobj lbl_805184B4
.balign 4
.obj lbl_805184BC, local
	.asciz "ENT-B"
.endobj lbl_805184BC
.balign 4
.obj lbl_805184C4, local
	.asciz "doSim"
.endobj lbl_805184C4
.balign 4
.obj lbl_805184CC, local
	.asciz "coll"
.endobj lbl_805184CC
.balign 4
.obj lbl_805184D4, local
	.asciz "2d"
.endobj lbl_805184D4
.balign 4
.obj lbl_805184D8, local
	.asciz "OPA"
.endobj lbl_805184D8
.balign 4
.obj lbl_805184DC, local
	.asciz "noname"
.endobj lbl_805184DC
.balign 4
.obj lbl_805184E4, local
	.asciz "normal"
.endobj lbl_805184E4
.balign 4
.obj lbl_805184EC, local
	.asciz "map"
.endobj lbl_805184EC
.balign 4
.obj lbl_805184F0, local
	.asciz "piki"
.endobj lbl_805184F0
.balign 4
.obj lbl_805184F8, local
	.asciz "post"
.endobj lbl_805184F8
.balign 4
.obj lbl_80518500, local
	.asciz "first"
.endobj lbl_80518500
.balign 4
.obj lbl_80518508, local
	.asciz "farm"
.endobj lbl_80518508
.balign 4
.obj lbl_80518510, local
	.asciz "XLU"
.endobj lbl_80518510
.balign 4
.obj lbl_80518514, local
	.asciz "poyo1"
.endobj lbl_80518514
.balign 4
.obj lbl_8051851C, local
	.float 80.0
.endobj lbl_8051851C
.balign 8
.obj lbl_80518520, local
	.8byte 0x4330000000000000
.endobj lbl_80518520
.obj lbl_80518528, local
	.float -40.0
.endobj lbl_80518528
.obj lbl_8051852C, local
	.float 2.0
.endobj lbl_8051852C
.obj lbl_80518530, local
	.float 8.5
.endobj lbl_80518530
.obj lbl_80518534, local
	.float -4.526
.endobj lbl_80518534
.obj lbl_80518538, local
	.float 7.453
.endobj lbl_80518538
.obj lbl_8051853C, local
	.float -60.0
.endobj lbl_8051853C
.obj lbl_80518540, local
	.float -10.0
.endobj lbl_80518540
.obj lbl_80518544, local
	.float 18.082
.endobj lbl_80518544
.obj lbl_80518548, local
	.float -11.482
.endobj lbl_80518548
.obj lbl_8051854C, local
	.float 0.5
.endobj lbl_8051854C
.obj lbl_80518550, local
	.float 32768.0
.endobj lbl_80518550
.obj lbl_80518554, local
	.float -32768.0
.endobj lbl_80518554
.obj lbl_80518558, local # tau
	.float 6.2831855
.endobj lbl_80518558
.obj lbl_8051855C, local
	.float 50.0
.endobj lbl_8051855C
.obj lbl_80518560, local
	.float 325.9493
.endobj lbl_80518560
.obj lbl_80518564, local
	.float -325.9493
.endobj lbl_80518564
.balign 8
.obj lbl_80518568, local
	.8byte 0x4330000080000000
.endobj lbl_80518568
.balign 4
.obj lbl_80518570, local
	.asciz "2ddraw"
.endobj lbl_80518570
.balign 4
.obj lbl_80518578, local
	.float 0.2
.endobj lbl_80518578
.obj lbl_8051857C, local
	.float 999.0
.endobj lbl_8051857C
.balign 4
.obj lbl_80518580, local
	.asciz "itemMgr"
.endobj lbl_80518580
.balign 4
.obj lbl_80518588, local
	.asciz "random"
.endobj lbl_80518588
.balign 4
.obj lbl_80518590, local
	.asciz "mapMgr"
.endobj lbl_80518590
.balign 4
.obj lbl_80518598, local
	.asciz "CellMgr"
.endobj lbl_80518598
.balign 4
.obj lbl_805185A0, local
	.float 1.28E7
.endobj lbl_805185A0
.obj lbl_805185A4, local
	.float -1.28E7
.endobj lbl_805185A4
.obj lbl_805185A8, local
	.float 128.0
.endobj lbl_805185A8
.obj lbl_805185AC, local
	.float 170.0
.endobj lbl_805185AC
.obj lbl_805185B0, local
	.float 108.0
.endobj lbl_805185B0
.obj lbl_805185B4, local # pi
	.float 3.1415927
.endobj lbl_805185B4
.obj lbl_805185B8, local
	.float 0.0055555557
.endobj lbl_805185B8
.balign 4
.obj lbl_805185BC, local
	.asciz "\r\n"
.endobj lbl_805185BC

.section .sbss2, "", @nobits # 0x80520E40 - 0x80520ED8
.obj lbl_80520E58, local
	.skip 8
.endobj lbl_80520E58

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.if version == 0
.fn __ct__Q24Game15BaseGameSectionFP7JKRHeap, global
/* 8014ADA0 00147CE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014ADA4 00147CE4  7C 08 02 A6 */	mflr r0
/* 8014ADA8 00147CE8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014ADAC 00147CEC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014ADB0 00147CF0  7C 7F 1B 78 */	mr r31, r3
/* 8014ADB4 00147CF4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014ADB8 00147CF8  48 01 9E 39 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 8014ADBC 00147CFC  3C 80 80 4B */	lis r4, __vt__Q24Game15BaseGameSection@ha
/* 8014ADC0 00147D00  38 7F 00 5C */	addi r3, r31, 0x7c
/* 8014ADC4 00147D04  38 04 0F 0C */	addi r0, r4, __vt__Q24Game15BaseGameSection@l
/* 8014ADC8 00147D08  90 1F 00 00 */	stw r0, 0(r31)
/* 8014ADCC 00147D0C  48 2D 9A 4D */	bl __ct__16DvdThreadCommandFv
/* 8014ADD0 00147D10  38 00 00 00 */	li r0, 0
/* 8014ADD4 00147D14  38 60 00 00 */	li r3, 0
/* 8014ADD8 00147D18  98 1F 01 64 */	stb r0, 0x184(r31)
/* 8014ADDC 00147D1C  38 A0 00 02 */	li r5, 2
/* 8014ADE0 00147D20  38 C0 00 01 */	li r6, 1
/* 8014ADE4 00147D24  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8014ADE8 00147D28  4B F3 ED 41 */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 8014ADEC 00147D2C  7C 64 1B 78 */	mr r4, r3
/* 8014ADF0 00147D30  7F E3 FB 78 */	mr r3, r31
/* 8014ADF4 00147D34  38 A0 00 01 */	li r5, 1
/* 8014ADF8 00147D38  48 01 9F DD */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 8014ADFC 00147D3C  38 60 00 02 */	li r3, 2
/* 8014AE00 00147D40  38 00 00 00 */	li r0, 0
/* 8014AE04 00147D44  90 7F 01 14 */	stw r3, 0x134(r31)
/* 8014AE08 00147D48  38 60 00 14 */	li r3, 0x14
/* 8014AE0C 00147D4C  90 1F 01 3C */	stw r0, 0x15c(r31)
/* 8014AE10 00147D50  90 1F 01 4C */	stw r0, 0x16c(r31)
/* 8014AE14 00147D54  4B ED 90 91 */	bl __nw__FUl
/* 8014AE18 00147D58  28 03 00 00 */	cmplwi r3, 0
/* 8014AE1C 00147D5C  41 82 00 4C */	beq .L_8014AE68
/* 8014AE20 00147D60  3C 80 80 4B */	lis r4, lbl_804B0C8C@ha
/* 8014AE24 00147D64  3C A0 80 4B */	lis r5, "__vt__21IDelegate1<R7Rect<f>>"@ha
/* 8014AE28 00147D68  39 04 0C 8C */	addi r8, r4, lbl_804B0C8C@l
/* 8014AE2C 00147D6C  3C 80 80 4B */	lis r4, "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"@ha
/* 8014AE30 00147D70  80 E8 00 00 */	lwz r7, 0(r8)
/* 8014AE34 00147D74  38 A5 10 64 */	addi r5, r5, "__vt__21IDelegate1<R7Rect<f>>"@l
/* 8014AE38 00147D78  80 C8 00 04 */	lwz r6, 4(r8)
/* 8014AE3C 00147D7C  38 04 10 58 */	addi r0, r4, "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"@l
/* 8014AE40 00147D80  80 88 00 08 */	lwz r4, 8(r8)
/* 8014AE44 00147D84  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8014AE48 00147D88  90 A3 00 00 */	stw r5, 0(r3)
/* 8014AE4C 00147D8C  90 03 00 00 */	stw r0, 0(r3)
/* 8014AE50 00147D90  93 E3 00 04 */	stw r31, 4(r3)
/* 8014AE54 00147D94  90 E3 00 08 */	stw r7, 8(r3)
/* 8014AE58 00147D98  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8014AE5C 00147D9C  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8014AE60 00147DA0  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8014AE64 00147DA4  90 83 00 10 */	stw r4, 0x10(r3)
.L_8014AE68:
/* 8014AE68 00147DA8  90 7F 01 48 */	stw r3, 0x168(r31)
/* 8014AE6C 00147DAC  38 60 00 14 */	li r3, 0x14
/* 8014AE70 00147DB0  4B ED 90 35 */	bl __nw__FUl
/* 8014AE74 00147DB4  28 03 00 00 */	cmplwi r3, 0
/* 8014AE78 00147DB8  41 82 00 4C */	beq .L_8014AEC4
/* 8014AE7C 00147DBC  3C 80 80 4B */	lis r4, lbl_804B0C98@ha
/* 8014AE80 00147DC0  3C A0 80 4B */	lis r5, "__vt__30IDelegate1<PQ24Game9CameraArg>"@ha
/* 8014AE84 00147DC4  39 04 0C 98 */	addi r8, r4, lbl_804B0C98@l
/* 8014AE88 00147DC8  3C 80 80 4B */	lis r4, "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"@ha
/* 8014AE8C 00147DCC  80 E8 00 00 */	lwz r7, 0(r8)
/* 8014AE90 00147DD0  38 A5 10 4C */	addi r5, r5, "__vt__30IDelegate1<PQ24Game9CameraArg>"@l
/* 8014AE94 00147DD4  80 C8 00 04 */	lwz r6, 4(r8)
/* 8014AE98 00147DD8  38 04 10 40 */	addi r0, r4, "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"@l
/* 8014AE9C 00147DDC  80 88 00 08 */	lwz r4, 8(r8)
/* 8014AEA0 00147DE0  90 E1 00 08 */	stw r7, 8(r1)
/* 8014AEA4 00147DE4  90 A3 00 00 */	stw r5, 0(r3)
/* 8014AEA8 00147DE8  90 03 00 00 */	stw r0, 0(r3)
/* 8014AEAC 00147DEC  93 E3 00 04 */	stw r31, 4(r3)
/* 8014AEB0 00147DF0  90 E3 00 08 */	stw r7, 8(r3)
/* 8014AEB4 00147DF4  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8014AEB8 00147DF8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8014AEBC 00147DFC  90 81 00 10 */	stw r4, 0x10(r1)
/* 8014AEC0 00147E00  90 83 00 10 */	stw r4, 0x10(r3)
.L_8014AEC4:
/* 8014AEC4 00147E04  90 6D 92 B0 */	stw r3, cameraMgrCallback@sda21(r13)
/* 8014AEC8 00147E08  38 00 00 00 */	li r0, 0
/* 8014AECC 00147E0C  38 60 00 2C */	li r3, 0x2c
/* 8014AED0 00147E10  90 1F 00 50 */	stw r0, 0x70(r31)
/* 8014AED4 00147E14  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 8014AED8 00147E18  90 0D 96 A8 */	stw r0, rumbleMgr__4Game@sda21(r13)
/* 8014AEDC 00147E1C  90 0D 96 80 */	stw r0, shadowMgr__4Game@sda21(r13)
/* 8014AEE0 00147E20  90 0D 92 08 */	stw r0, lifeGaugeMgr@sda21(r13)
/* 8014AEE4 00147E24  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
/* 8014AEE8 00147E28  90 1F 01 28 */	stw r0, 0x148(r31)
/* 8014AEEC 00147E2C  90 1F 01 18 */	stw r0, 0x138(r31)
/* 8014AEF0 00147E30  90 1F 00 FC */	stw r0, 0x11c(r31)
/* 8014AEF4 00147E34  90 0D 92 B4 */	stw r0, theExpHeap@sda21(r13)
/* 8014AEF8 00147E38  90 1F 01 00 */	stw r0, 0x120(r31)
/* 8014AEFC 00147E3C  90 1F 01 68 */	stw r0, 0x188(r31)
/* 8014AF00 00147E40  90 1F 01 58 */	stw r0, 0x178(r31)
/* 8014AF04 00147E44  90 1F 01 54 */	stw r0, 0x174(r31)
/* 8014AF08 00147E48  90 1F 01 5C */	stw r0, 0x17c(r31)
/* 8014AF0C 00147E4C  90 1F 01 60 */	stw r0, 0x180(r31)
/* 8014AF10 00147E50  90 1F 01 70 */	stw r0, 0x190(r31)
/* 8014AF14 00147E54  90 1F 01 6C */	stw r0, 0x18c(r31)
/* 8014AF18 00147E58  90 1F 00 E0 */	stw r0, 0x100(r31)
/* 8014AF1C 00147E5C  4B ED 8F 89 */	bl __nw__FUl
/* 8014AF20 00147E60  7C 60 1B 79 */	or. r0, r3, r3
/* 8014AF24 00147E64  41 82 00 0C */	beq .L_8014AF30
/* 8014AF28 00147E68  48 2E 14 9D */	bl __ct__10BlackFaderFv
/* 8014AF2C 00147E6C  7C 60 1B 78 */	mr r0, r3
.L_8014AF30:
/* 8014AF30 00147E70  90 1F 00 D0 */	stw r0, 0xf0(r31)
/* 8014AF34 00147E74  38 60 00 28 */	li r3, 0x28
/* 8014AF38 00147E78  4B ED 8F 6D */	bl __nw__FUl
/* 8014AF3C 00147E7C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014AF40 00147E80  41 82 00 0C */	beq .L_8014AF4C
/* 8014AF44 00147E84  48 2E 0F 75 */	bl __ct__11WipeInFaderFv
/* 8014AF48 00147E88  7C 60 1B 78 */	mr r0, r3
.L_8014AF4C:
/* 8014AF4C 00147E8C  90 1F 00 D4 */	stw r0, 0xf4(r31)
/* 8014AF50 00147E90  38 60 00 28 */	li r3, 0x28
/* 8014AF54 00147E94  4B ED 8F 51 */	bl __nw__FUl
/* 8014AF58 00147E98  7C 60 1B 79 */	or. r0, r3, r3
/* 8014AF5C 00147E9C  41 82 00 0C */	beq .L_8014AF68
/* 8014AF60 00147EA0  48 2E 11 15 */	bl __ct__12WipeOutFaderFv
/* 8014AF64 00147EA4  7C 60 1B 78 */	mr r0, r3
.L_8014AF68:
/* 8014AF68 00147EA8  90 1F 00 D8 */	stw r0, 0xf8(r31)
/* 8014AF6C 00147EAC  38 60 00 78 */	li r3, 0x78
/* 8014AF70 00147EB0  4B ED 8F 35 */	bl __nw__FUl
/* 8014AF74 00147EB4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014AF78 00147EB8  41 82 00 24 */	beq .L_8014AF9C
/* 8014AF7C 00147EBC  48 2E 0D 91 */	bl __ct__8WipeBaseFv
/* 8014AF80 00147EC0  3C 80 80 4F */	lis r4, __vt__14WipeOutInFader@ha
/* 8014AF84 00147EC4  38 7E 00 24 */	addi r3, r30, 0x24
/* 8014AF88 00147EC8  38 04 BF 0C */	addi r0, r4, __vt__14WipeOutInFader@l
/* 8014AF8C 00147ECC  90 1E 00 00 */	stw r0, 0(r30)
/* 8014AF90 00147ED0  48 2E 10 E5 */	bl __ct__12WipeOutFaderFv
/* 8014AF94 00147ED4  38 7E 00 4C */	addi r3, r30, 0x4c
/* 8014AF98 00147ED8  48 2E 0F 21 */	bl __ct__11WipeInFaderFv
.L_8014AF9C:
/* 8014AF9C 00147EDC  93 DF 00 DC */	stw r30, 0xfc(r31)
/* 8014AFA0 00147EE0  7F E3 FB 78 */	mr r3, r31
/* 8014AFA4 00147EE4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014AFA8 00147EE8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014AFAC 00147EEC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014AFB0 00147EF0  7C 08 03 A6 */	mtlr r0
/* 8014AFB4 00147EF4  38 21 00 30 */	addi r1, r1, 0x30
/* 8014AFB8 00147EF8  4E 80 00 20 */	blr 
.endfn __ct__Q24Game15BaseGameSectionFP7JKRHeap
.else
.fn __ct__Q24Game15BaseGameSectionFP7JKRHeap, global
/* 8014ADA0 00147CE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014ADA4 00147CE4  7C 08 02 A6 */	mflr r0
/* 8014ADA8 00147CE8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014ADAC 00147CEC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014ADB0 00147CF0  7C 7F 1B 78 */	mr r31, r3
/* 8014ADB4 00147CF4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014ADB8 00147CF8  48 01 9E 39 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 8014ADBC 00147CFC  3C 80 80 4B */	lis r4, __vt__Q24Game15BaseGameSection@ha
/* 8014ADC0 00147D00  38 7F 00 5C */	addi r3, r31, 0x5c
/* 8014ADC4 00147D04  38 04 0F 0C */	addi r0, r4, __vt__Q24Game15BaseGameSection@l
/* 8014ADC8 00147D08  90 1F 00 00 */	stw r0, 0(r31)
/* 8014ADCC 00147D0C  48 2D 9A 4D */	bl __ct__16DvdThreadCommandFv
/* 8014ADD0 00147D10  38 00 00 00 */	li r0, 0
/* 8014ADD4 00147D14  38 60 00 00 */	li r3, 0
/* 8014ADD8 00147D18  98 1F 01 64 */	stb r0, 0x164(r31)
/* 8014ADDC 00147D1C  38 A0 00 02 */	li r5, 2
/* 8014ADE0 00147D20  38 C0 00 01 */	li r6, 1
/* 8014ADE4 00147D24  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8014ADE8 00147D28  4B F3 ED 41 */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 8014ADEC 00147D2C  7C 64 1B 78 */	mr r4, r3
/* 8014ADF0 00147D30  7F E3 FB 78 */	mr r3, r31
/* 8014ADF4 00147D34  38 A0 00 01 */	li r5, 1
/* 8014ADF8 00147D38  48 01 9F DD */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 8014ADFC 00147D3C  38 60 00 02 */	li r3, 2
/* 8014AE00 00147D40  38 00 00 00 */	li r0, 0
/* 8014AE04 00147D44  90 7F 01 14 */	stw r3, 0x114(r31)
/* 8014AE08 00147D48  38 60 00 14 */	li r3, 0x14
/* 8014AE0C 00147D4C  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 8014AE10 00147D50  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 8014AE14 00147D54  4B ED 90 91 */	bl __nw__FUl
/* 8014AE18 00147D58  28 03 00 00 */	cmplwi r3, 0
/* 8014AE1C 00147D5C  41 82 00 4C */	beq .L_8014AE68
/* 8014AE20 00147D60  3C 80 80 4B */	lis r4, lbl_804B0C8C@ha
/* 8014AE24 00147D64  3C A0 80 4B */	lis r5, "__vt__21IDelegate1<R7Rect<f>>"@ha
/* 8014AE28 00147D68  39 04 0C 8C */	addi r8, r4, lbl_804B0C8C@l
/* 8014AE2C 00147D6C  3C 80 80 4B */	lis r4, "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"@ha
/* 8014AE30 00147D70  80 E8 00 00 */	lwz r7, 0(r8)
/* 8014AE34 00147D74  38 A5 10 64 */	addi r5, r5, "__vt__21IDelegate1<R7Rect<f>>"@l
/* 8014AE38 00147D78  80 C8 00 04 */	lwz r6, 4(r8)
/* 8014AE3C 00147D7C  38 04 10 58 */	addi r0, r4, "__vt__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>"@l
/* 8014AE40 00147D80  80 88 00 08 */	lwz r4, 8(r8)
/* 8014AE44 00147D84  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8014AE48 00147D88  90 A3 00 00 */	stw r5, 0(r3)
/* 8014AE4C 00147D8C  90 03 00 00 */	stw r0, 0(r3)
/* 8014AE50 00147D90  93 E3 00 04 */	stw r31, 4(r3)
/* 8014AE54 00147D94  90 E3 00 08 */	stw r7, 8(r3)
/* 8014AE58 00147D98  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8014AE5C 00147D9C  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8014AE60 00147DA0  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8014AE64 00147DA4  90 83 00 10 */	stw r4, 0x10(r3)
.L_8014AE68:
/* 8014AE68 00147DA8  90 7F 01 48 */	stw r3, 0x148(r31)
/* 8014AE6C 00147DAC  38 60 00 14 */	li r3, 0x14
/* 8014AE70 00147DB0  4B ED 90 35 */	bl __nw__FUl
/* 8014AE74 00147DB4  28 03 00 00 */	cmplwi r3, 0
/* 8014AE78 00147DB8  41 82 00 4C */	beq .L_8014AEC4
/* 8014AE7C 00147DBC  3C 80 80 4B */	lis r4, lbl_804B0C98@ha
/* 8014AE80 00147DC0  3C A0 80 4B */	lis r5, "__vt__30IDelegate1<PQ24Game9CameraArg>"@ha
/* 8014AE84 00147DC4  39 04 0C 98 */	addi r8, r4, lbl_804B0C98@l
/* 8014AE88 00147DC8  3C 80 80 4B */	lis r4, "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"@ha
/* 8014AE8C 00147DCC  80 E8 00 00 */	lwz r7, 0(r8)
/* 8014AE90 00147DD0  38 A5 10 4C */	addi r5, r5, "__vt__30IDelegate1<PQ24Game9CameraArg>"@l
/* 8014AE94 00147DD4  80 C8 00 04 */	lwz r6, 4(r8)
/* 8014AE98 00147DD8  38 04 10 40 */	addi r0, r4, "__vt__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>"@l
/* 8014AE9C 00147DDC  80 88 00 08 */	lwz r4, 8(r8)
/* 8014AEA0 00147DE0  90 E1 00 08 */	stw r7, 8(r1)
/* 8014AEA4 00147DE4  90 A3 00 00 */	stw r5, 0(r3)
/* 8014AEA8 00147DE8  90 03 00 00 */	stw r0, 0(r3)
/* 8014AEAC 00147DEC  93 E3 00 04 */	stw r31, 4(r3)
/* 8014AEB0 00147DF0  90 E3 00 08 */	stw r7, 8(r3)
/* 8014AEB4 00147DF4  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8014AEB8 00147DF8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8014AEBC 00147DFC  90 81 00 10 */	stw r4, 0x10(r1)
/* 8014AEC0 00147E00  90 83 00 10 */	stw r4, 0x10(r3)
.L_8014AEC4:
/* 8014AEC4 00147E04  90 6D 92 B0 */	stw r3, cameraMgrCallback@sda21(r13)
/* 8014AEC8 00147E08  38 00 00 00 */	li r0, 0
/* 8014AECC 00147E0C  38 60 00 2C */	li r3, 0x2c
/* 8014AED0 00147E10  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8014AED4 00147E14  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 8014AED8 00147E18  90 0D 96 A8 */	stw r0, rumbleMgr__4Game@sda21(r13)
/* 8014AEDC 00147E1C  90 0D 96 80 */	stw r0, shadowMgr__4Game@sda21(r13)
/* 8014AEE0 00147E20  90 0D 92 08 */	stw r0, lifeGaugeMgr@sda21(r13)
/* 8014AEE4 00147E24  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
/* 8014AEE8 00147E28  90 1F 01 28 */	stw r0, 0x128(r31)
/* 8014AEEC 00147E2C  90 1F 01 18 */	stw r0, 0x118(r31)
/* 8014AEF0 00147E30  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 8014AEF4 00147E34  90 0D 92 B4 */	stw r0, theExpHeap@sda21(r13)
/* 8014AEF8 00147E38  90 1F 01 00 */	stw r0, 0x100(r31)
/* 8014AEFC 00147E3C  90 1F 01 68 */	stw r0, 0x168(r31)
/* 8014AF00 00147E40  90 1F 01 58 */	stw r0, 0x158(r31)
/* 8014AF04 00147E44  90 1F 01 54 */	stw r0, 0x154(r31)
/* 8014AF08 00147E48  90 1F 01 5C */	stw r0, 0x15c(r31)
/* 8014AF0C 00147E4C  90 1F 01 60 */	stw r0, 0x160(r31)
/* 8014AF10 00147E50  90 1F 01 70 */	stw r0, 0x170(r31)
/* 8014AF14 00147E54  90 1F 01 6C */	stw r0, 0x16c(r31)
/* 8014AF18 00147E58  90 1F 00 E0 */	stw r0, 0xe0(r31)
/* 8014AF1C 00147E5C  4B ED 8F 89 */	bl __nw__FUl
/* 8014AF20 00147E60  7C 60 1B 79 */	or. r0, r3, r3
/* 8014AF24 00147E64  41 82 00 0C */	beq .L_8014AF30
/* 8014AF28 00147E68  48 2E 14 9D */	bl __ct__10BlackFaderFv
/* 8014AF2C 00147E6C  7C 60 1B 78 */	mr r0, r3
.L_8014AF30:
/* 8014AF30 00147E70  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 8014AF34 00147E74  38 60 00 28 */	li r3, 0x28
/* 8014AF38 00147E78  4B ED 8F 6D */	bl __nw__FUl
/* 8014AF3C 00147E7C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014AF40 00147E80  41 82 00 0C */	beq .L_8014AF4C
/* 8014AF44 00147E84  48 2E 0F 75 */	bl __ct__11WipeInFaderFv
/* 8014AF48 00147E88  7C 60 1B 78 */	mr r0, r3
.L_8014AF4C:
/* 8014AF4C 00147E8C  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 8014AF50 00147E90  38 60 00 28 */	li r3, 0x28
/* 8014AF54 00147E94  4B ED 8F 51 */	bl __nw__FUl
/* 8014AF58 00147E98  7C 60 1B 79 */	or. r0, r3, r3
/* 8014AF5C 00147E9C  41 82 00 0C */	beq .L_8014AF68
/* 8014AF60 00147EA0  48 2E 11 15 */	bl __ct__12WipeOutFaderFv
/* 8014AF64 00147EA4  7C 60 1B 78 */	mr r0, r3
.L_8014AF68:
/* 8014AF68 00147EA8  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 8014AF6C 00147EAC  38 60 00 78 */	li r3, 0x78
/* 8014AF70 00147EB0  4B ED 8F 35 */	bl __nw__FUl
/* 8014AF74 00147EB4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014AF78 00147EB8  41 82 00 24 */	beq .L_8014AF9C
/* 8014AF7C 00147EBC  48 2E 0D 91 */	bl __ct__8WipeBaseFv
/* 8014AF80 00147EC0  3C 80 80 4F */	lis r4, __vt__14WipeOutInFader@ha
/* 8014AF84 00147EC4  38 7E 00 24 */	addi r3, r30, 0x24
/* 8014AF88 00147EC8  38 04 BF 0C */	addi r0, r4, __vt__14WipeOutInFader@l
/* 8014AF8C 00147ECC  90 1E 00 00 */	stw r0, 0(r30)
/* 8014AF90 00147ED0  48 2E 10 E5 */	bl __ct__12WipeOutFaderFv
/* 8014AF94 00147ED4  38 7E 00 4C */	addi r3, r30, 0x4c
/* 8014AF98 00147ED8  48 2E 0F 21 */	bl __ct__11WipeInFaderFv
.L_8014AF9C:
/* 8014AF9C 00147EDC  93 DF 00 DC */	stw r30, 0xdc(r31)
/* 8014AFA0 00147EE0  7F E3 FB 78 */	mr r3, r31
/* 8014AFA4 00147EE4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014AFA8 00147EE8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014AFAC 00147EEC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014AFB0 00147EF0  7C 08 03 A6 */	mtlr r0
/* 8014AFB4 00147EF4  38 21 00 30 */	addi r1, r1, 0x30
/* 8014AFB8 00147EF8  4E 80 00 20 */	blr 
.endfn __ct__Q24Game15BaseGameSectionFP7JKRHeap
.endif

.fn __dt__11WipeInFaderFv, weak
/* 8014AFBC 00147EFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014AFC0 00147F00  7C 08 02 A6 */	mflr r0
/* 8014AFC4 00147F04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014AFC8 00147F08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014AFCC 00147F0C  7C 9F 23 78 */	mr r31, r4
/* 8014AFD0 00147F10  93 C1 00 08 */	stw r30, 8(r1)
/* 8014AFD4 00147F14  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014AFD8 00147F18  41 82 00 38 */	beq .L_8014B010
/* 8014AFDC 00147F1C  3C 80 80 4F */	lis r4, __vt__11WipeInFader@ha
/* 8014AFE0 00147F20  38 04 BF 5C */	addi r0, r4, __vt__11WipeInFader@l
/* 8014AFE4 00147F24  90 1E 00 00 */	stw r0, 0(r30)
/* 8014AFE8 00147F28  41 82 00 18 */	beq .L_8014B000
/* 8014AFEC 00147F2C  3C A0 80 4F */	lis r5, __vt__8WipeBase@ha
/* 8014AFF0 00147F30  38 80 00 00 */	li r4, 0
/* 8014AFF4 00147F34  38 05 BF 84 */	addi r0, r5, __vt__8WipeBase@l
/* 8014AFF8 00147F38  90 1E 00 00 */	stw r0, 0(r30)
/* 8014AFFC 00147F3C  48 2C 65 8D */	bl __dt__5CNodeFv
.L_8014B000:
/* 8014B000 00147F40  7F E0 07 35 */	extsh. r0, r31
/* 8014B004 00147F44  40 81 00 0C */	ble .L_8014B010
/* 8014B008 00147F48  7F C3 F3 78 */	mr r3, r30
/* 8014B00C 00147F4C  4B ED 90 A9 */	bl __dl__FPv
.L_8014B010:
/* 8014B010 00147F50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B014 00147F54  7F C3 F3 78 */	mr r3, r30
/* 8014B018 00147F58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B01C 00147F5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014B020 00147F60  7C 08 03 A6 */	mtlr r0
/* 8014B024 00147F64  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B028 00147F68  4E 80 00 20 */	blr 
.endfn __dt__11WipeInFaderFv

.fn __dt__12WipeOutFaderFv, weak
/* 8014B02C 00147F6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B030 00147F70  7C 08 02 A6 */	mflr r0
/* 8014B034 00147F74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B038 00147F78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B03C 00147F7C  7C 9F 23 78 */	mr r31, r4
/* 8014B040 00147F80  93 C1 00 08 */	stw r30, 8(r1)
/* 8014B044 00147F84  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014B048 00147F88  41 82 00 38 */	beq .L_8014B080
/* 8014B04C 00147F8C  3C 80 80 4F */	lis r4, __vt__12WipeOutFader@ha
/* 8014B050 00147F90  38 04 BF 34 */	addi r0, r4, __vt__12WipeOutFader@l
/* 8014B054 00147F94  90 1E 00 00 */	stw r0, 0(r30)
/* 8014B058 00147F98  41 82 00 18 */	beq .L_8014B070
/* 8014B05C 00147F9C  3C A0 80 4F */	lis r5, __vt__8WipeBase@ha
/* 8014B060 00147FA0  38 80 00 00 */	li r4, 0
/* 8014B064 00147FA4  38 05 BF 84 */	addi r0, r5, __vt__8WipeBase@l
/* 8014B068 00147FA8  90 1E 00 00 */	stw r0, 0(r30)
/* 8014B06C 00147FAC  48 2C 65 1D */	bl __dt__5CNodeFv
.L_8014B070:
/* 8014B070 00147FB0  7F E0 07 35 */	extsh. r0, r31
/* 8014B074 00147FB4  40 81 00 0C */	ble .L_8014B080
/* 8014B078 00147FB8  7F C3 F3 78 */	mr r3, r30
/* 8014B07C 00147FBC  4B ED 90 39 */	bl __dl__FPv
.L_8014B080:
/* 8014B080 00147FC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B084 00147FC4  7F C3 F3 78 */	mr r3, r30
/* 8014B088 00147FC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B08C 00147FCC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014B090 00147FD0  7C 08 03 A6 */	mtlr r0
/* 8014B094 00147FD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B098 00147FD8  4E 80 00 20 */	blr 
.endfn __dt__12WipeOutFaderFv

.fn __dt__8WipeBaseFv, weak
/* 8014B09C 00147FDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B0A0 00147FE0  7C 08 02 A6 */	mflr r0
/* 8014B0A4 00147FE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B0A8 00147FE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B0AC 00147FEC  7C 9F 23 78 */	mr r31, r4
/* 8014B0B0 00147FF0  93 C1 00 08 */	stw r30, 8(r1)
/* 8014B0B4 00147FF4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014B0B8 00147FF8  41 82 00 28 */	beq .L_8014B0E0
/* 8014B0BC 00147FFC  3C A0 80 4F */	lis r5, __vt__8WipeBase@ha
/* 8014B0C0 00148000  38 80 00 00 */	li r4, 0
/* 8014B0C4 00148004  38 05 BF 84 */	addi r0, r5, __vt__8WipeBase@l
/* 8014B0C8 00148008  90 1E 00 00 */	stw r0, 0(r30)
/* 8014B0CC 0014800C  48 2C 64 BD */	bl __dt__5CNodeFv
/* 8014B0D0 00148010  7F E0 07 35 */	extsh. r0, r31
/* 8014B0D4 00148014  40 81 00 0C */	ble .L_8014B0E0
/* 8014B0D8 00148018  7F C3 F3 78 */	mr r3, r30
/* 8014B0DC 0014801C  4B ED 8F D9 */	bl __dl__FPv
.L_8014B0E0:
/* 8014B0E0 00148020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B0E4 00148024  7F C3 F3 78 */	mr r3, r30
/* 8014B0E8 00148028  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B0EC 0014802C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014B0F0 00148030  7C 08 03 A6 */	mtlr r0
/* 8014B0F4 00148034  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B0F8 00148038  4E 80 00 20 */	blr 
.endfn __dt__8WipeBaseFv

.if version == 0
.fn useSpecificFBTexture__Q24Game15BaseGameSectionFP10JUTTexture, global
/* 8014B0FC 0014803C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B100 00148040  7C 08 02 A6 */	mflr r0
/* 8014B104 00148044  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B108 00148048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B10C 0014804C  7C 9F 23 78 */	mr r31, r4
/* 8014B110 00148050  93 C1 00 08 */	stw r30, 8(r1)
/* 8014B114 00148054  7C 7E 1B 78 */	mr r30, r3
/* 8014B118 00148058  80 03 01 58 */	lwz r0, 0x178(r3)
/* 8014B11C 0014805C  28 00 00 00 */	cmplwi r0, 0
/* 8014B120 00148060  41 82 00 20 */	beq .L_8014B140
/* 8014B124 00148064  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014B128 00148068  3C A0 80 48 */	lis r5, lbl_8047C978@ha
/* 8014B12C 0014806C  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014B130 00148070  38 80 05 F3 */	li r4, 0x5f3
/* 8014B134 00148074  38 A5 C9 78 */	addi r5, r5, lbl_8047C978@l
/* 8014B138 00148078  4C C6 31 82 */	crclr 6
/* 8014B13C 0014807C  4B ED F5 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B140:
/* 8014B140 00148080  80 1E 01 54 */	lwz r0, 0x174(r30)
/* 8014B144 00148084  90 1E 01 58 */	stw r0, 0x178(r30)
/* 8014B148 00148088  93 FE 01 54 */	stw r31, 0x174(r30)
/* 8014B14C 0014808C  80 1E 01 54 */	lwz r0, 0x174(r30)
/* 8014B150 00148090  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B154 00148094  90 03 00 54 */	stw r0, 0x54(r3)
/* 8014B158 00148098  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B15C 0014809C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014B160 001480A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B164 001480A4  7C 08 03 A6 */	mtlr r0
/* 8014B168 001480A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B16C 001480AC  4E 80 00 20 */	blr 
.endfn useSpecificFBTexture__Q24Game15BaseGameSectionFP10JUTTexture
.else
.fn useSpecificFBTexture__Q24Game15BaseGameSectionFP10JUTTexture, global
/* 8014B0FC 0014803C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B100 00148040  7C 08 02 A6 */	mflr r0
/* 8014B104 00148044  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B108 00148048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B10C 0014804C  7C 9F 23 78 */	mr r31, r4
/* 8014B110 00148050  93 C1 00 08 */	stw r30, 8(r1)
/* 8014B114 00148054  7C 7E 1B 78 */	mr r30, r3
/* 8014B118 00148058  80 03 01 58 */	lwz r0, 0x158(r3)
/* 8014B11C 0014805C  28 00 00 00 */	cmplwi r0, 0
/* 8014B120 00148060  41 82 00 20 */	beq .L_8014B140
/* 8014B124 00148064  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014B128 00148068  3C A0 80 48 */	lis r5, lbl_8047C978@ha
/* 8014B12C 0014806C  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014B130 00148070  38 80 05 F3 */	li r4, 0x5f3
/* 8014B134 00148074  38 A5 C9 78 */	addi r5, r5, lbl_8047C978@l
/* 8014B138 00148078  4C C6 31 82 */	crclr 6
/* 8014B13C 0014807C  4B ED F5 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B140:
/* 8014B140 00148080  80 1E 01 54 */	lwz r0, 0x154(r30)
/* 8014B144 00148084  90 1E 01 58 */	stw r0, 0x158(r30)
/* 8014B148 00148088  93 FE 01 54 */	stw r31, 0x154(r30)
/* 8014B14C 0014808C  80 1E 01 54 */	lwz r0, 0x154(r30)
/* 8014B150 00148090  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B154 00148094  90 03 00 54 */	stw r0, 0x54(r3)
/* 8014B158 00148098  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B15C 0014809C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014B160 001480A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B164 001480A4  7C 08 03 A6 */	mtlr r0
/* 8014B168 001480A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B16C 001480AC  4E 80 00 20 */	blr 
.endfn useSpecificFBTexture__Q24Game15BaseGameSectionFP10JUTTexture
.endif

.if version == 0
.fn restoreFBTexture__Q24Game15BaseGameSectionFv, global
/* 8014B170 001480B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B174 001480B4  7C 08 02 A6 */	mflr r0
/* 8014B178 001480B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B17C 001480BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B180 001480C0  7C 7F 1B 78 */	mr r31, r3
/* 8014B184 001480C4  80 03 01 58 */	lwz r0, 0x178(r3)
/* 8014B188 001480C8  28 00 00 00 */	cmplwi r0, 0
/* 8014B18C 001480CC  40 82 00 20 */	bne .L_8014B1AC
/* 8014B190 001480D0  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014B194 001480D4  3C A0 80 48 */	lis r5, lbl_8047C988@ha
/* 8014B198 001480D8  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014B19C 001480DC  38 80 05 FD */	li r4, 0x5fd
/* 8014B1A0 001480E0  38 A5 C9 88 */	addi r5, r5, lbl_8047C988@l
/* 8014B1A4 001480E4  4C C6 31 82 */	crclr 6
/* 8014B1A8 001480E8  4B ED F4 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B1AC:
/* 8014B1AC 001480EC  80 7F 01 58 */	lwz r3, 0x178(r31)
/* 8014B1B0 001480F0  38 00 00 00 */	li r0, 0
/* 8014B1B4 001480F4  90 7F 01 54 */	stw r3, 0x174(r31)
/* 8014B1B8 001480F8  90 1F 01 58 */	stw r0, 0x178(r31)
/* 8014B1BC 001480FC  80 1F 01 54 */	lwz r0, 0x174(r31)
/* 8014B1C0 00148100  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B1C4 00148104  90 03 00 54 */	stw r0, 0x54(r3)
/* 8014B1C8 00148108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B1CC 0014810C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B1D0 00148110  7C 08 03 A6 */	mtlr r0
/* 8014B1D4 00148114  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B1D8 00148118  4E 80 00 20 */	blr 
.endfn restoreFBTexture__Q24Game15BaseGameSectionFv
.else
.fn restoreFBTexture__Q24Game15BaseGameSectionFv, global
/* 8014B170 001480B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B174 001480B4  7C 08 02 A6 */	mflr r0
/* 8014B178 001480B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B17C 001480BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B180 001480C0  7C 7F 1B 78 */	mr r31, r3
/* 8014B184 001480C4  80 03 01 58 */	lwz r0, 0x158(r3)
/* 8014B188 001480C8  28 00 00 00 */	cmplwi r0, 0
/* 8014B18C 001480CC  40 82 00 20 */	bne .L_8014B1AC
/* 8014B190 001480D0  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014B194 001480D4  3C A0 80 48 */	lis r5, lbl_8047C988@ha
/* 8014B198 001480D8  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014B19C 001480DC  38 80 05 FD */	li r4, 0x5fd
/* 8014B1A0 001480E0  38 A5 C9 88 */	addi r5, r5, lbl_8047C988@l
/* 8014B1A4 001480E4  4C C6 31 82 */	crclr 6
/* 8014B1A8 001480E8  4B ED F4 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B1AC:
/* 8014B1AC 001480EC  80 7F 01 58 */	lwz r3, 0x158(r31)
/* 8014B1B0 001480F0  38 00 00 00 */	li r0, 0
/* 8014B1B4 001480F4  90 7F 01 54 */	stw r3, 0x154(r31)
/* 8014B1B8 001480F8  90 1F 01 58 */	stw r0, 0x158(r31)
/* 8014B1BC 001480FC  80 1F 01 54 */	lwz r0, 0x154(r31)
/* 8014B1C0 00148100  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B1C4 00148104  90 03 00 54 */	stw r0, 0x54(r3)
/* 8014B1C8 00148108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B1CC 0014810C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B1D0 00148110  7C 08 03 A6 */	mtlr r0
/* 8014B1D4 00148114  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B1D8 00148118  4E 80 00 20 */	blr 
.endfn restoreFBTexture__Q24Game15BaseGameSectionFv
.endif

.if version == 0
.fn __dt__Q24Game15BaseGameSectionFv, global
/* 8014B1DC 0014811C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014B1E0 00148120  7C 08 02 A6 */	mflr r0
/* 8014B1E4 00148124  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014B1E8 00148128  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014B1EC 0014812C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8014B1F0 00148130  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014B1F4 00148134  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014B1F8 00148138  7C 9D 23 78 */	mr r29, r4
/* 8014B1FC 0014813C  41 82 00 D4 */	beq .L_8014B2D0
/* 8014B200 00148140  3C 80 80 4B */	lis r4, __vt__Q24Game15BaseGameSection@ha
/* 8014B204 00148144  38 60 00 00 */	li r3, 0
/* 8014B208 00148148  38 04 0F 0C */	addi r0, r4, __vt__Q24Game15BaseGameSection@l
/* 8014B20C 0014814C  90 1F 00 00 */	stw r0, 0(r31)
/* 8014B210 00148150  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8014B214 00148154  90 6D 92 B4 */	stw r3, theExpHeap@sda21(r13)
/* 8014B218 00148158  28 00 00 00 */	cmplwi r0, 0
/* 8014B21C 0014815C  40 82 00 20 */	bne .L_8014B23C
/* 8014B220 00148160  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014B224 00148164  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014B228 00148168  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014B22C 0014816C  38 80 01 D3 */	li r4, 0x1d3
/* 8014B230 00148170  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014B234 00148174  4C C6 31 82 */	crclr 6
/* 8014B238 00148178  4B ED F4 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B23C:
/* 8014B23C 0014817C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8014B240 00148180  28 1E 00 00 */	cmplwi r30, 0
/* 8014B244 00148184  40 82 00 20 */	bne .L_8014B264
/* 8014B248 00148188  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014B24C 0014818C  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014B250 00148190  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014B254 00148194  38 80 01 DC */	li r4, 0x1dc
/* 8014B258 00148198  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014B25C 0014819C  4C C6 31 82 */	crclr 6
/* 8014B260 001481A0  4B ED F3 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B264:
/* 8014B264 001481A4  7F C3 F3 78 */	mr r3, r30
/* 8014B268 001481A8  48 1F 6F 79 */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8014B26C 001481AC  48 26 DE E9 */	bl deleteInstance__14TParticle2dMgrFv
/* 8014B270 001481B0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014B274 001481B4  48 27 04 35 */	bl deleteInstance_TPkEffectMgr__11ParticleMgrFv
/* 8014B278 001481B8  48 26 FD 3D */	bl deleteInstance__11ParticleMgrFv
/* 8014B27C 001481BC  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 8014B280 001481C0  48 09 9F 7D */	bl clearGlobalPointers__Q24Game7ItemMgrFv
/* 8014B284 001481C4  38 60 00 00 */	li r3, 0
/* 8014B288 001481C8  34 1F 00 5C */	addic. r0, r31, 0x7c
/* 8014B28C 001481CC  90 6D 95 20 */	stw r3, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8014B290 001481D0  90 6D 95 10 */	stw r3, mgr__Q24Game11PelletFruit@sda21(r13)
/* 8014B294 001481D4  90 6D 95 28 */	stw r3, mgr__Q24Game10PelletItem@sda21(r13)
/* 8014B298 001481D8  90 6D 94 F8 */	stw r3, mgr__Q24Game12PelletNumber@sda21(r13)
/* 8014B29C 001481DC  90 6D 95 00 */	stw r3, mgr__Q24Game13PelletCarcass@sda21(r13)
/* 8014B2A0 001481E0  41 82 00 14 */	beq .L_8014B2B4
/* 8014B2A4 001481E4  34 7F 00 B8 */	addic. r3, r31, 0xd8
/* 8014B2A8 001481E8  41 82 00 0C */	beq .L_8014B2B4
/* 8014B2AC 001481EC  38 80 00 00 */	li r4, 0
/* 8014B2B0 001481F0  4B ED B5 21 */	bl __dt__10JSUPtrLinkFv
.L_8014B2B4:
/* 8014B2B4 001481F4  7F E3 FB 78 */	mr r3, r31
/* 8014B2B8 001481F8  38 80 00 00 */	li r4, 0
/* 8014B2BC 001481FC  48 01 99 F5 */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8014B2C0 00148200  7F A0 07 35 */	extsh. r0, r29
/* 8014B2C4 00148204  40 81 00 0C */	ble .L_8014B2D0
/* 8014B2C8 00148208  7F E3 FB 78 */	mr r3, r31
/* 8014B2CC 0014820C  4B ED 8D E9 */	bl __dl__FPv
.L_8014B2D0:
/* 8014B2D0 00148210  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014B2D4 00148214  7F E3 FB 78 */	mr r3, r31
/* 8014B2D8 00148218  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014B2DC 0014821C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014B2E0 00148220  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014B2E4 00148224  7C 08 03 A6 */	mtlr r0
/* 8014B2E8 00148228  38 21 00 20 */	addi r1, r1, 0x20
/* 8014B2EC 0014822C  4E 80 00 20 */	blr 
.endfn __dt__Q24Game15BaseGameSectionFv
.else
.fn __dt__Q24Game15BaseGameSectionFv, global
/* 8014B1DC 0014811C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014B1E0 00148120  7C 08 02 A6 */	mflr r0
/* 8014B1E4 00148124  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014B1E8 00148128  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014B1EC 0014812C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8014B1F0 00148130  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014B1F4 00148134  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014B1F8 00148138  7C 9D 23 78 */	mr r29, r4
/* 8014B1FC 0014813C  41 82 00 D4 */	beq .L_8014B2D0
/* 8014B200 00148140  3C 80 80 4B */	lis r4, __vt__Q24Game15BaseGameSection@ha
/* 8014B204 00148144  38 60 00 00 */	li r3, 0
/* 8014B208 00148148  38 04 0F 0C */	addi r0, r4, __vt__Q24Game15BaseGameSection@l
/* 8014B20C 0014814C  90 1F 00 00 */	stw r0, 0(r31)
/* 8014B210 00148150  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8014B214 00148154  90 6D 92 B4 */	stw r3, theExpHeap@sda21(r13)
/* 8014B218 00148158  28 00 00 00 */	cmplwi r0, 0
/* 8014B21C 0014815C  40 82 00 20 */	bne .L_8014B23C
/* 8014B220 00148160  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014B224 00148164  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014B228 00148168  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014B22C 0014816C  38 80 01 D3 */	li r4, 0x1d3
/* 8014B230 00148170  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014B234 00148174  4C C6 31 82 */	crclr 6
/* 8014B238 00148178  4B ED F4 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B23C:
/* 8014B23C 0014817C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8014B240 00148180  28 1E 00 00 */	cmplwi r30, 0
/* 8014B244 00148184  40 82 00 20 */	bne .L_8014B264
/* 8014B248 00148188  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014B24C 0014818C  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014B250 00148190  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014B254 00148194  38 80 01 DC */	li r4, 0x1dc
/* 8014B258 00148198  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014B25C 0014819C  4C C6 31 82 */	crclr 6
/* 8014B260 001481A0  4B ED F3 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014B264:
/* 8014B264 001481A4  7F C3 F3 78 */	mr r3, r30
/* 8014B268 001481A8  48 1F 6F 79 */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8014B26C 001481AC  48 26 DE E9 */	bl deleteInstance__14TParticle2dMgrFv
/* 8014B270 001481B0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014B274 001481B4  48 27 04 35 */	bl deleteInstance_TPkEffectMgr__11ParticleMgrFv
/* 8014B278 001481B8  48 26 FD 3D */	bl deleteInstance__11ParticleMgrFv
/* 8014B27C 001481BC  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 8014B280 001481C0  48 09 9F 7D */	bl clearGlobalPointers__Q24Game7ItemMgrFv
/* 8014B284 001481C4  38 60 00 00 */	li r3, 0
/* 8014B288 001481C8  34 1F 00 5C */	addic. r0, r31, 0x5c
/* 8014B28C 001481CC  90 6D 95 20 */	stw r3, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 8014B290 001481D0  90 6D 95 10 */	stw r3, mgr__Q24Game11PelletFruit@sda21(r13)
/* 8014B294 001481D4  90 6D 95 28 */	stw r3, mgr__Q24Game10PelletItem@sda21(r13)
/* 8014B298 001481D8  90 6D 94 F8 */	stw r3, mgr__Q24Game12PelletNumber@sda21(r13)
/* 8014B29C 001481DC  90 6D 95 00 */	stw r3, mgr__Q24Game13PelletCarcass@sda21(r13)
/* 8014B2A0 001481E0  41 82 00 14 */	beq .L_8014B2B4
/* 8014B2A4 001481E4  34 7F 00 B8 */	addic. r3, r31, 0xb8
/* 8014B2A8 001481E8  41 82 00 0C */	beq .L_8014B2B4
/* 8014B2AC 001481EC  38 80 00 00 */	li r4, 0
/* 8014B2B0 001481F0  4B ED B5 21 */	bl __dt__10JSUPtrLinkFv
.L_8014B2B4:
/* 8014B2B4 001481F4  7F E3 FB 78 */	mr r3, r31
/* 8014B2B8 001481F8  38 80 00 00 */	li r4, 0
/* 8014B2BC 001481FC  48 01 99 F5 */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8014B2C0 00148200  7F A0 07 35 */	extsh. r0, r29
/* 8014B2C4 00148204  40 81 00 0C */	ble .L_8014B2D0
/* 8014B2C8 00148208  7F E3 FB 78 */	mr r3, r31
/* 8014B2CC 0014820C  4B ED 8D E9 */	bl __dl__FPv
.L_8014B2D0:
/* 8014B2D0 00148210  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014B2D4 00148214  7F E3 FB 78 */	mr r3, r31
/* 8014B2D8 00148218  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014B2DC 0014821C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014B2E0 00148220  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014B2E4 00148224  7C 08 03 A6 */	mtlr r0
/* 8014B2E8 00148228  38 21 00 20 */	addi r1, r1, 0x20
/* 8014B2EC 0014822C  4E 80 00 20 */	blr 
.endfn __dt__Q24Game15BaseGameSectionFv
.endif

.if version == 0
.fn loadSync__Q24Game15BaseGameSectionFP9IDelegateb, global
/* 8014B2F0 00148230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B2F4 00148234  7C 08 02 A6 */	mflr r0
/* 8014B2F8 00148238  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B2FC 0014823C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B300 00148240  7C BF 2B 78 */	mr r31, r5
/* 8014B304 00148244  7C 85 23 78 */	mr r5, r4
/* 8014B308 00148248  93 C1 00 08 */	stw r30, 8(r1)
/* 8014B30C 0014824C  7C 7E 1B 78 */	mr r30, r3
/* 8014B310 00148250  38 9E 00 5C */	addi r4, r30, 0x7c
/* 8014B314 00148254  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B318 00148258  48 2D 7C 21 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8014B31C 0014825C  7F C3 F3 78 */	mr r3, r30
/* 8014B320 00148260  7F E4 FB 78 */	mr r4, r31
/* 8014B324 00148264  48 00 00 1D */	bl waitSyncLoad__Q24Game15BaseGameSectionFb
/* 8014B328 00148268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B32C 0014826C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B330 00148270  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014B334 00148274  7C 08 03 A6 */	mtlr r0
/* 8014B338 00148278  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B33C 0014827C  4E 80 00 20 */	blr 
.endfn loadSync__Q24Game15BaseGameSectionFP9IDelegateb
.else
.fn loadSync__Q24Game15BaseGameSectionFP9IDelegateb, global
/* 8014B2F0 00148230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B2F4 00148234  7C 08 02 A6 */	mflr r0
/* 8014B2F8 00148238  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B2FC 0014823C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B300 00148240  7C BF 2B 78 */	mr r31, r5
/* 8014B304 00148244  7C 85 23 78 */	mr r5, r4
/* 8014B308 00148248  93 C1 00 08 */	stw r30, 8(r1)
/* 8014B30C 0014824C  7C 7E 1B 78 */	mr r30, r3
/* 8014B310 00148250  38 9E 00 5C */	addi r4, r30, 0x5c
/* 8014B314 00148254  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B318 00148258  48 2D 7C 21 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8014B31C 0014825C  7F C3 F3 78 */	mr r3, r30
/* 8014B320 00148260  7F E4 FB 78 */	mr r4, r31
/* 8014B324 00148264  48 00 00 1D */	bl waitSyncLoad__Q24Game15BaseGameSectionFb
/* 8014B328 00148268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B32C 0014826C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B330 00148270  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014B334 00148274  7C 08 03 A6 */	mtlr r0
/* 8014B338 00148278  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B33C 0014827C  4E 80 00 20 */	blr 
.endfn loadSync__Q24Game15BaseGameSectionFP9IDelegateb
.endif

.if version == 0
.fn waitSyncLoad__Q24Game15BaseGameSectionFb, global
/* 8014B340 00148280  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014B344 00148284  7C 08 02 A6 */	mflr r0
/* 8014B348 00148288  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014B34C 0014828C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014B350 00148290  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014B354 00148294  7C 9E 23 78 */	mr r30, r4
/* 8014B358 00148298  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014B35C 0014829C  7C 7D 1B 78 */	mr r29, r3
/* 8014B360 001482A0  88 0D 92 BC */	lbz r0, init$4568@sda21(r13)
/* 8014B364 001482A4  7C 00 07 75 */	extsb. r0, r0
/* 8014B368 001482A8  40 82 00 14 */	bne .L_8014B37C
/* 8014B36C 001482AC  38 60 00 00 */	li r3, 0
/* 8014B370 001482B0  38 00 00 01 */	li r0, 1
/* 8014B374 001482B4  90 6D 92 B8 */	stw r3, col$4567@sda21(r13)
/* 8014B378 001482B8  98 0D 92 BC */	stb r0, init$4568@sda21(r13)
.L_8014B37C:
/* 8014B37C 001482BC  80 8D 92 B8 */	lwz r4, col$4567@sda21(r13)
/* 8014B380 001482C0  7F A3 EB 78 */	mr r3, r29
/* 8014B384 001482C4  38 04 00 01 */	addi r0, r4, 1
/* 8014B388 001482C8  90 0D 92 B8 */	stw r0, col$4567@sda21(r13)
/* 8014B38C 001482CC  48 2D 8C 65 */	bl endFrame__7SectionFv
/* 8014B390 001482D0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8014B394 001482D4  40 82 00 1C */	bne .L_8014B3B0
/* 8014B398 001482D8  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 8014B39C 001482DC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B3A0 001482E0  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 8014B3A4 001482E4  38 C0 00 03 */	li r6, 3
/* 8014B3A8 001482E8  38 80 00 01 */	li r4, 1
/* 8014B3AC 001482EC  48 06 9B E9 */	bl setPause__Q24Game10GameSystemFbPci
.L_8014B3B0:
/* 8014B3B0 001482F0  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014B3B4 001482F4  3B E3 F2 30 */	addi r31, r3, j3dSys@l
.L_8014B3B8:
/* 8014B3B8 001482F8  7F A3 EB 78 */	mr r3, r29
/* 8014B3BC 001482FC  48 2D 8C 11 */	bl beginFrame__7SectionFv
/* 8014B3C0 00148300  7F A3 EB 78 */	mr r3, r29
/* 8014B3C4 00148304  48 2D 8C 51 */	bl beginRender__7SectionFv
/* 8014B3C8 00148308  7F E3 FB 78 */	mr r3, r31
/* 8014B3CC 0014830C  4B F1 28 41 */	bl drawInit__6J3DSysFv
/* 8014B3D0 00148310  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014B3D4 00148314  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 8014B3D8 00148318  FC 40 08 90 */	fmr f2, f1
/* 8014B3DC 0014831C  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 8014B3E0 00148320  FC A0 08 90 */	fmr f5, f1
/* 8014B3E4 00148324  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 8014B3E8 00148328  4B F9 E3 A9 */	bl GXSetViewport
/* 8014B3EC 0014832C  38 60 00 00 */	li r3, 0
/* 8014B3F0 00148330  38 80 00 10 */	li r4, 0x10
/* 8014B3F4 00148334  38 A0 02 60 */	li r5, 0x260
/* 8014B3F8 00148338  38 C0 01 C0 */	li r6, 0x1c0
/* 8014B3FC 0014833C  4B F9 E3 DD */	bl GXSetScissor
/* 8014B400 00148340  7F A3 EB 78 */	mr r3, r29
/* 8014B404 00148344  48 2D 8C 35 */	bl endRender__7SectionFv
/* 8014B408 00148348  80 1D 00 74 */	lwz r0, 0x94(r29)
/* 8014B40C 0014834C  2C 00 00 02 */	cmpwi r0, 2
/* 8014B410 00148350  40 82 00 28 */	bne .L_8014B438
/* 8014B414 00148354  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8014B418 00148358  40 82 00 2C */	bne .L_8014B444
/* 8014B41C 0014835C  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 8014B420 00148360  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B424 00148364  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 8014B428 00148368  38 C0 00 03 */	li r6, 3
/* 8014B42C 0014836C  38 80 00 00 */	li r4, 0
/* 8014B430 00148370  48 06 9B 65 */	bl setPause__Q24Game10GameSystemFbPci
/* 8014B434 00148374  48 00 00 10 */	b .L_8014B444
.L_8014B438:
/* 8014B438 00148378  7F A3 EB 78 */	mr r3, r29
/* 8014B43C 0014837C  48 2D 8B B5 */	bl endFrame__7SectionFv
/* 8014B440 00148380  4B FF FF 78 */	b .L_8014B3B8
.L_8014B444:
/* 8014B444 00148384  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014B448 00148388  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014B44C 0014838C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014B450 00148390  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014B454 00148394  7C 08 03 A6 */	mtlr r0
/* 8014B458 00148398  38 21 00 20 */	addi r1, r1, 0x20
/* 8014B45C 0014839C  4E 80 00 20 */	blr 
.endfn waitSyncLoad__Q24Game15BaseGameSectionFb
.else
.fn waitSyncLoad__Q24Game15BaseGameSectionFb, global
/* 8014B340 00148280  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014B344 00148284  7C 08 02 A6 */	mflr r0
/* 8014B348 00148288  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014B34C 0014828C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014B350 00148290  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014B354 00148294  7C 9E 23 78 */	mr r30, r4
/* 8014B358 00148298  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014B35C 0014829C  7C 7D 1B 78 */	mr r29, r3
/* 8014B360 001482A0  88 0D 92 BC */	lbz r0, init$4568@sda21(r13)
/* 8014B364 001482A4  7C 00 07 75 */	extsb. r0, r0
/* 8014B368 001482A8  40 82 00 14 */	bne .L_8014B37C
/* 8014B36C 001482AC  38 60 00 00 */	li r3, 0
/* 8014B370 001482B0  38 00 00 01 */	li r0, 1
/* 8014B374 001482B4  90 6D 92 B8 */	stw r3, col$4567@sda21(r13)
/* 8014B378 001482B8  98 0D 92 BC */	stb r0, init$4568@sda21(r13)
.L_8014B37C:
/* 8014B37C 001482BC  80 8D 92 B8 */	lwz r4, col$4567@sda21(r13)
/* 8014B380 001482C0  7F A3 EB 78 */	mr r3, r29
/* 8014B384 001482C4  38 04 00 01 */	addi r0, r4, 1
/* 8014B388 001482C8  90 0D 92 B8 */	stw r0, col$4567@sda21(r13)
/* 8014B38C 001482CC  48 2D 8C 65 */	bl endFrame__7SectionFv
/* 8014B390 001482D0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8014B394 001482D4  40 82 00 1C */	bne .L_8014B3B0
/* 8014B398 001482D8  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 8014B39C 001482DC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B3A0 001482E0  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 8014B3A4 001482E4  38 C0 00 03 */	li r6, 3
/* 8014B3A8 001482E8  38 80 00 01 */	li r4, 1
/* 8014B3AC 001482EC  48 06 9B E9 */	bl setPause__Q24Game10GameSystemFbPci
.L_8014B3B0:
/* 8014B3B0 001482F0  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014B3B4 001482F4  3B E3 F2 30 */	addi r31, r3, j3dSys@l
.L_8014B3B8:
/* 8014B3B8 001482F8  7F A3 EB 78 */	mr r3, r29
/* 8014B3BC 001482FC  48 2D 8C 11 */	bl beginFrame__7SectionFv
/* 8014B3C0 00148300  7F A3 EB 78 */	mr r3, r29
/* 8014B3C4 00148304  48 2D 8C 51 */	bl beginRender__7SectionFv
/* 8014B3C8 00148308  7F E3 FB 78 */	mr r3, r31
/* 8014B3CC 0014830C  4B F1 28 41 */	bl drawInit__6J3DSysFv
/* 8014B3D0 00148310  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014B3D4 00148314  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 8014B3D8 00148318  FC 40 08 90 */	fmr f2, f1
/* 8014B3DC 0014831C  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 8014B3E0 00148320  FC A0 08 90 */	fmr f5, f1
/* 8014B3E4 00148324  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 8014B3E8 00148328  4B F9 E3 A9 */	bl GXSetViewport
/* 8014B3EC 0014832C  38 60 00 00 */	li r3, 0
/* 8014B3F0 00148330  38 80 00 10 */	li r4, 0x10
/* 8014B3F4 00148334  38 A0 02 60 */	li r5, 0x260
/* 8014B3F8 00148338  38 C0 01 C0 */	li r6, 0x1c0
/* 8014B3FC 0014833C  4B F9 E3 DD */	bl GXSetScissor
/* 8014B400 00148340  7F A3 EB 78 */	mr r3, r29
/* 8014B404 00148344  48 2D 8C 35 */	bl endRender__7SectionFv
/* 8014B408 00148348  80 1D 00 74 */	lwz r0, 0x74(r29)
/* 8014B40C 0014834C  2C 00 00 02 */	cmpwi r0, 2
/* 8014B410 00148350  40 82 00 28 */	bne .L_8014B438
/* 8014B414 00148354  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8014B418 00148358  40 82 00 2C */	bne .L_8014B444
/* 8014B41C 0014835C  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 8014B420 00148360  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B424 00148364  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 8014B428 00148368  38 C0 00 03 */	li r6, 3
/* 8014B42C 0014836C  38 80 00 00 */	li r4, 0
/* 8014B430 00148370  48 06 9B 65 */	bl setPause__Q24Game10GameSystemFbPci
/* 8014B434 00148374  48 00 00 10 */	b .L_8014B444
.L_8014B438:
/* 8014B438 00148378  7F A3 EB 78 */	mr r3, r29
/* 8014B43C 0014837C  48 2D 8B B5 */	bl endFrame__7SectionFv
/* 8014B440 00148380  4B FF FF 78 */	b .L_8014B3B8
.L_8014B444:
/* 8014B444 00148384  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014B448 00148388  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014B44C 0014838C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014B450 00148390  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014B454 00148394  7C 08 03 A6 */	mtlr r0
/* 8014B458 00148398  38 21 00 20 */	addi r1, r1, 0x20
/* 8014B45C 0014839C  4E 80 00 20 */	blr 
.endfn waitSyncLoad__Q24Game15BaseGameSectionFb
.endif

.fn dvdloadGameSystem__Q24Game15BaseGameSectionFv, global
/* 8014B460 001483A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B464 001483A4  7C 08 02 A6 */	mflr r0
/* 8014B468 001483A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B46C 001483AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014B470 001483B0  7C 7F 1B 78 */	mr r31, r3
/* 8014B474 001483B4  38 60 00 5C */	li r3, 0x5c
/* 8014B478 001483B8  4B ED 8A 2D */	bl __nw__FUl
/* 8014B47C 001483BC  7C 60 1B 79 */	or. r0, r3, r3
/* 8014B480 001483C0  41 82 00 10 */	beq .L_8014B490
/* 8014B484 001483C4  7F E4 FB 78 */	mr r4, r31
/* 8014B488 001483C8  48 06 95 F9 */	bl __ct__Q24Game10GameSystemFPQ24Game15BaseGameSection
/* 8014B48C 001483CC  7C 60 1B 78 */	mr r0, r3
.L_8014B490:
/* 8014B490 001483D0  90 0D 93 E8 */	stw r0, gameSystem__4Game@sda21(r13)
/* 8014B494 001483D4  7C 03 03 78 */	mr r3, r0
/* 8014B498 001483D8  48 06 97 D1 */	bl init__Q24Game10GameSystemFv
/* 8014B49C 001483DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B4A0 001483E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014B4A4 001483E4  7C 08 03 A6 */	mtlr r0
/* 8014B4A8 001483E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B4AC 001483EC  4E 80 00 20 */	blr 
.endfn dvdloadGameSystem__Q24Game15BaseGameSectionFv

.if version == 0
.fn init__Q24Game15BaseGameSectionFv, global
/* 8014B4B0 001483F0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8014B4B4 001483F4  7C 08 02 A6 */	mflr r0
/* 8014B4B8 001483F8  38 A0 00 00 */	li r5, 0
/* 8014B4BC 001483FC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8014B4C0 00148400  38 00 00 00 */	li r0, 0
/* 8014B4C4 00148404  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8014B4C8 00148408  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8014B4CC 0014840C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8014B4D0 00148410  7C 7D 1B 78 */	mr r29, r3
/* 8014B4D4 00148414  93 81 00 50 */	stw r28, 0x50(r1)
/* 8014B4D8 00148418  98 03 01 64 */	stb r0, 0x184(r3)
/* 8014B4DC 0014841C  3C 60 80 48 */	lis r3, lbl_8047C948@ha
/* 8014B4E0 00148420  3B E3 C9 48 */	addi r31, r3, lbl_8047C948@l
/* 8014B4E4 00148424  90 1D 00 48 */	stw r0, 0x68(r29)
/* 8014B4E8 00148428  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8014B4EC 0014842C  3B C3 0C 70 */	addi r30, r3, govNAN___Q24Game5P2JST@l
/* 8014B4F0 00148430  38 9F 00 8C */	addi r4, r31, 0x8c
/* 8014B4F4 00148434  90 1D 01 3C */	stw r0, 0x15c(r29)
/* 8014B4F8 00148438  38 61 00 10 */	addi r3, r1, 0x10
/* 8014B4FC 0014843C  48 2D 6D 35 */	bl __ct__Q26System20FragmentationCheckerFPcb
/* 8014B500 00148440  38 61 00 08 */	addi r3, r1, 8
/* 8014B504 00148444  38 9F 00 98 */	addi r4, r31, 0x98
/* 8014B508 00148448  38 A0 00 00 */	li r5, 0
/* 8014B50C 0014844C  48 2D 6D 25 */	bl __ct__Q26System20FragmentationCheckerFPcb
/* 8014B510 00148450  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B514 00148454  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 8014B518 00148458  38 A0 00 00 */	li r5, 0
/* 8014B51C 0014845C  48 2D 7E 41 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8014B520 00148460  38 61 00 08 */	addi r3, r1, 8
/* 8014B524 00148464  38 80 FF FF */	li r4, -1
/* 8014B528 00148468  48 2D 6D 5D */	bl __dt__Q26System20FragmentationCheckerFv
/* 8014B52C 0014846C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B530 00148470  38 80 01 E0 */	li r4, 0x1e0
/* 8014B534 00148474  48 2D 6D E9 */	bl enableCPULockDetector__6SystemFi
/* 8014B538 00148478  3C 60 80 4B */	lis r3, __vt__9IDelegate@ha
/* 8014B53C 0014847C  80 BE 00 34 */	lwz r5, 0x34(r30)
/* 8014B540 00148480  38 C3 0F 00 */	addi r6, r3, __vt__9IDelegate@l
/* 8014B544 00148484  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 8014B548 00148488  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 8014B54C 0014848C  3C 60 80 4B */	lis r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@ha
/* 8014B550 00148490  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8014B554 00148494  38 C3 0E F4 */	addi r6, r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@l
/* 8014B558 00148498  7F A3 EB 78 */	mr r3, r29
/* 8014B55C 0014849C  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8014B560 001484A0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8014B564 001484A4  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8014B568 001484A8  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8014B56C 001484AC  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014B570 001484B0  48 2D 8A 5D */	bl beginFrame__7SectionFv
/* 8014B574 001484B4  7F A3 EB 78 */	mr r3, r29
/* 8014B578 001484B8  48 2D 8A 9D */	bl beginRender__7SectionFv
/* 8014B57C 001484BC  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014B580 001484C0  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8014B584 001484C4  4B F1 26 89 */	bl drawInit__6J3DSysFv
/* 8014B588 001484C8  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014B58C 001484CC  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 8014B590 001484D0  FC 40 08 90 */	fmr f2, f1
/* 8014B594 001484D4  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 8014B598 001484D8  FC A0 08 90 */	fmr f5, f1
/* 8014B59C 001484DC  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 8014B5A0 001484E0  4B F9 E1 F1 */	bl GXSetViewport
/* 8014B5A4 001484E4  38 60 00 00 */	li r3, 0
/* 8014B5A8 001484E8  38 80 00 10 */	li r4, 0x10
/* 8014B5AC 001484EC  38 A0 02 60 */	li r5, 0x260
/* 8014B5B0 001484F0  38 C0 01 C0 */	li r6, 0x1c0
/* 8014B5B4 001484F4  4B F9 E2 25 */	bl GXSetScissor
/* 8014B5B8 001484F8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8014B5BC 001484FC  85 83 00 BC */	lwzu r12, 0xbc(r3)
/* 8014B5C0 00148500  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014B5C4 00148504  7D 89 03 A6 */	mtctr r12
/* 8014B5C8 00148508  4E 80 04 21 */	bctrl 
/* 8014B5CC 0014850C  7F A3 EB 78 */	mr r3, r29
/* 8014B5D0 00148510  48 2D 8A 69 */	bl endRender__7SectionFv
/* 8014B5D4 00148514  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B5D8 00148518  38 9D 00 5C */	addi r4, r29, 0x7c
/* 8014B5DC 0014851C  38 A1 00 30 */	addi r5, r1, 0x30
/* 8014B5E0 00148520  48 2D 79 59 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8014B5E4 00148524  88 0D 92 BC */	lbz r0, init$4568@sda21(r13)
/* 8014B5E8 00148528  7C 00 07 75 */	extsb. r0, r0
/* 8014B5EC 0014852C  40 82 00 14 */	bne .L_8014B600
/* 8014B5F0 00148530  38 60 00 00 */	li r3, 0
/* 8014B5F4 00148534  38 00 00 01 */	li r0, 1
/* 8014B5F8 00148538  90 6D 92 B8 */	stw r3, col$4567@sda21(r13)
/* 8014B5FC 0014853C  98 0D 92 BC */	stb r0, init$4568@sda21(r13)
.L_8014B600:
/* 8014B600 00148540  80 8D 92 B8 */	lwz r4, col$4567@sda21(r13)
/* 8014B604 00148544  7F A3 EB 78 */	mr r3, r29
/* 8014B608 00148548  38 04 00 01 */	addi r0, r4, 1
/* 8014B60C 0014854C  90 0D 92 B8 */	stw r0, col$4567@sda21(r13)
/* 8014B610 00148550  48 2D 89 E1 */	bl endFrame__7SectionFv
/* 8014B614 00148554  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014B618 00148558  3B 83 F2 30 */	addi r28, r3, j3dSys@l
.L_8014B61C:
/* 8014B61C 0014855C  7F A3 EB 78 */	mr r3, r29
/* 8014B620 00148560  48 2D 89 AD */	bl beginFrame__7SectionFv
/* 8014B624 00148564  7F A3 EB 78 */	mr r3, r29
/* 8014B628 00148568  48 2D 89 ED */	bl beginRender__7SectionFv
/* 8014B62C 0014856C  7F 83 E3 78 */	mr r3, r28
/* 8014B630 00148570  4B F1 25 DD */	bl drawInit__6J3DSysFv
/* 8014B634 00148574  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014B638 00148578  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 8014B63C 0014857C  FC 40 08 90 */	fmr f2, f1
/* 8014B640 00148580  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 8014B644 00148584  FC A0 08 90 */	fmr f5, f1
/* 8014B648 00148588  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 8014B64C 0014858C  4B F9 E1 45 */	bl GXSetViewport
/* 8014B650 00148590  38 60 00 00 */	li r3, 0
/* 8014B654 00148594  38 80 00 10 */	li r4, 0x10
/* 8014B658 00148598  38 A0 02 60 */	li r5, 0x260
/* 8014B65C 0014859C  38 C0 01 C0 */	li r6, 0x1c0
/* 8014B660 001485A0  4B F9 E1 79 */	bl GXSetScissor
/* 8014B664 001485A4  7F A3 EB 78 */	mr r3, r29
/* 8014B668 001485A8  48 2D 89 D1 */	bl endRender__7SectionFv
/* 8014B66C 001485AC  80 1D 00 74 */	lwz r0, 0x94(r29)
/* 8014B670 001485B0  2C 00 00 02 */	cmpwi r0, 2
/* 8014B674 001485B4  41 82 00 10 */	beq .L_8014B684
/* 8014B678 001485B8  7F A3 EB 78 */	mr r3, r29
/* 8014B67C 001485BC  48 2D 89 75 */	bl endFrame__7SectionFv
/* 8014B680 001485C0  4B FF FF 9C */	b .L_8014B61C
.L_8014B684:
/* 8014B684 001485C4  7F A3 EB 78 */	mr r3, r29
/* 8014B688 001485C8  38 80 00 00 */	li r4, 0
/* 8014B68C 001485CC  48 01 98 99 */	bl initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
/* 8014B690 001485D0  38 60 00 60 */	li r3, 0x60
/* 8014B694 001485D4  4B ED 88 11 */	bl __nw__FUl
/* 8014B698 001485D8  7C 60 1B 79 */	or. r0, r3, r3
/* 8014B69C 001485DC  41 82 00 0C */	beq .L_8014B6A8
/* 8014B6A0 001485E0  4B FE 71 CD */	bl __ct__Q213TreasureLight3MgrFv
/* 8014B6A4 001485E4  7C 60 1B 78 */	mr r0, r3
.L_8014B6A8:
/* 8014B6A8 001485E8  90 1D 00 F8 */	stw r0, 0x118(r29)
/* 8014B6AC 001485EC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8014B6B0 001485F0  48 2D 6C 31 */	bl assert_fragmentation__6SystemFPc
/* 8014B6B4 001485F4  38 60 01 F8 */	li r3, 0x1f8
/* 8014B6B8 001485F8  4B ED 87 ED */	bl __nw__FUl
/* 8014B6BC 001485FC  7C 60 1B 79 */	or. r0, r3, r3
/* 8014B6C0 00148600  41 82 00 0C */	beq .L_8014B6CC
/* 8014B6C4 00148604  48 2E 10 3D */	bl __ct__Q24Game11MoviePlayerFv
/* 8014B6C8 00148608  7C 60 1B 78 */	mr r0, r3
.L_8014B6CC:
/* 8014B6CC 0014860C  90 0D 9B 54 */	stw r0, moviePlayer__4Game@sda21(r13)
/* 8014B6D0 00148610  38 60 00 14 */	li r3, 0x14
/* 8014B6D4 00148614  4B ED 87 D1 */	bl __nw__FUl
/* 8014B6D8 00148618  28 03 00 00 */	cmplwi r3, 0
/* 8014B6DC 0014861C  41 82 00 44 */	beq .L_8014B720
/* 8014B6E0 00148620  81 1E 00 40 */	lwz r8, 0x40(r30)
/* 8014B6E4 00148624  3C 80 80 4B */	lis r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B6E8 00148628  80 FE 00 44 */	lwz r7, 0x44(r30)
/* 8014B6EC 0014862C  38 A4 0E E8 */	addi r5, r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B6F0 00148630  80 DE 00 48 */	lwz r6, 0x48(r30)
/* 8014B6F4 00148634  3C 80 80 4B */	lis r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B6F8 00148638  38 04 0E DC */	addi r0, r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B6FC 0014863C  91 01 00 24 */	stw r8, 0x24(r1)
/* 8014B700 00148640  90 A3 00 00 */	stw r5, 0(r3)
/* 8014B704 00148644  90 03 00 00 */	stw r0, 0(r3)
/* 8014B708 00148648  93 A3 00 04 */	stw r29, 4(r3)
/* 8014B70C 0014864C  91 03 00 08 */	stw r8, 8(r3)
/* 8014B710 00148650  90 E3 00 0C */	stw r7, 0xc(r3)
/* 8014B714 00148654  90 E1 00 28 */	stw r7, 0x28(r1)
/* 8014B718 00148658  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8014B71C 0014865C  90 C3 00 10 */	stw r6, 0x10(r3)
.L_8014B720:
/* 8014B720 00148660  90 7D 00 C8 */	stw r3, 0xe8(r29)
/* 8014B724 00148664  38 60 00 14 */	li r3, 0x14
/* 8014B728 00148668  4B ED 87 7D */	bl __nw__FUl
/* 8014B72C 0014866C  28 03 00 00 */	cmplwi r3, 0
/* 8014B730 00148670  41 82 00 44 */	beq .L_8014B774
/* 8014B734 00148674  81 1E 00 4C */	lwz r8, 0x4c(r30)
/* 8014B738 00148678  3C 80 80 4B */	lis r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B73C 0014867C  80 FE 00 50 */	lwz r7, 0x50(r30)
/* 8014B740 00148680  38 A4 0E E8 */	addi r5, r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B744 00148684  80 DE 00 54 */	lwz r6, 0x54(r30)
/* 8014B748 00148688  3C 80 80 4B */	lis r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B74C 0014868C  38 04 0E DC */	addi r0, r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B750 00148690  91 01 00 18 */	stw r8, 0x18(r1)
/* 8014B754 00148694  90 A3 00 00 */	stw r5, 0(r3)
/* 8014B758 00148698  90 03 00 00 */	stw r0, 0(r3)
/* 8014B75C 0014869C  93 A3 00 04 */	stw r29, 4(r3)
/* 8014B760 001486A0  91 03 00 08 */	stw r8, 8(r3)
/* 8014B764 001486A4  90 E3 00 0C */	stw r7, 0xc(r3)
/* 8014B768 001486A8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 8014B76C 001486AC  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8014B770 001486B0  90 C3 00 10 */	stw r6, 0x10(r3)
.L_8014B774:
/* 8014B774 001486B4  90 7D 00 CC */	stw r3, 0xec(r29)
/* 8014B778 001486B8  38 80 00 02 */	li r4, 2
/* 8014B77C 001486BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B780 001486C0  48 2D 7D AD */	bl setFrameRate__6SystemFi
/* 8014B784 001486C4  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 8014B788 001486C8  48 2D 6B 59 */	bl assert_fragmentation__6SystemFPc
/* 8014B78C 001486CC  7F A3 EB 78 */	mr r3, r29
/* 8014B790 001486D0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8014B794 001486D4  81 8C 00 F8 */	lwz r12, 0xf8(r12)
/* 8014B798 001486D8  7D 89 03 A6 */	mtctr r12
/* 8014B79C 001486DC  4E 80 04 21 */	bctrl 
/* 8014B7A0 001486E0  38 60 00 01 */	li r3, 1
/* 8014B7A4 001486E4  38 00 00 00 */	li r0, 0
/* 8014B7A8 001486E8  98 7D 01 1C */	stb r3, 0x13c(r29)
/* 8014B7AC 001486EC  38 7F 00 F8 */	addi r3, r31, 0xf8
/* 8014B7B0 001486F0  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 8014B7B4 001486F4  48 2D 6B 2D */	bl assert_fragmentation__6SystemFPc
/* 8014B7B8 001486F8  38 7F 01 14 */	addi r3, r31, 0x114
/* 8014B7BC 001486FC  48 2D 6B 25 */	bl assert_fragmentation__6SystemFPc
/* 8014B7C0 00148700  48 1C 3E A9 */	bl create__Q22og5Lib2DFv
/* 8014B7C4 00148704  48 2B 07 29 */	bl create__Q26Screen9Game2DMgrFv
/* 8014B7C8 00148708  80 8D 9A A0 */	lwz r4, gGame2DMgr__6Screen@sda21(r13)
/* 8014B7CC 0014870C  38 00 00 01 */	li r0, 1
/* 8014B7D0 00148710  38 7F 01 30 */	addi r3, r31, 0x130
/* 8014B7D4 00148714  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8014B7D8 00148718  98 04 00 90 */	stb r0, 0x90(r4)
/* 8014B7DC 0014871C  48 2D 6B 05 */	bl assert_fragmentation__6SystemFPc
/* 8014B7E0 00148720  38 00 00 00 */	li r0, 0
/* 8014B7E4 00148724  7F A3 EB 78 */	mr r3, r29
/* 8014B7E8 00148728  90 1D 01 60 */	stw r0, 0x180(r29)
/* 8014B7EC 0014872C  90 1D 01 5C */	stw r0, 0x17c(r29)
/* 8014B7F0 00148730  81 9D 00 00 */	lwz r12, 0(r29)
/* 8014B7F4 00148734  81 8C 00 F0 */	lwz r12, 0xf0(r12)
/* 8014B7F8 00148738  7D 89 03 A6 */	mtctr r12
/* 8014B7FC 0014873C  4E 80 04 21 */	bctrl 
/* 8014B800 00148740  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B804 00148744  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 8014B808 00148748  48 2D 7B 5D */	bl heapStatusEnd__6SystemFPc
/* 8014B80C 0014874C  38 00 00 00 */	li r0, 0
/* 8014B810 00148750  38 61 00 10 */	addi r3, r1, 0x10
/* 8014B814 00148754  90 1D 01 34 */	stw r0, 0x154(r29)
/* 8014B818 00148758  38 80 FF FF */	li r4, -1
/* 8014B81C 0014875C  48 2D 6A 69 */	bl __dt__Q26System20FragmentationCheckerFv
/* 8014B820 00148760  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8014B824 00148764  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8014B828 00148768  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8014B82C 0014876C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8014B830 00148770  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8014B834 00148774  7C 08 03 A6 */	mtlr r0
/* 8014B838 00148778  38 21 00 60 */	addi r1, r1, 0x60
/* 8014B83C 0014877C  4E 80 00 20 */	blr 
.endfn init__Q24Game15BaseGameSectionFv
.else
.fn init__Q24Game15BaseGameSectionFv, global
/* 8014B4B0 001483F0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8014B4B4 001483F4  7C 08 02 A6 */	mflr r0
/* 8014B4B8 001483F8  38 A0 00 00 */	li r5, 0
/* 8014B4BC 001483FC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8014B4C0 00148400  38 00 00 00 */	li r0, 0
/* 8014B4C4 00148404  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8014B4C8 00148408  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8014B4CC 0014840C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8014B4D0 00148410  7C 7D 1B 78 */	mr r29, r3
/* 8014B4D4 00148414  93 81 00 50 */	stw r28, 0x50(r1)
/* 8014B4D8 00148418  98 03 01 64 */	stb r0, 0x164(r3)
/* 8014B4DC 0014841C  3C 60 80 48 */	lis r3, lbl_8047C948@ha
/* 8014B4E0 00148420  3B E3 C9 48 */	addi r31, r3, lbl_8047C948@l
/* 8014B4E4 00148424  90 1D 00 48 */	stw r0, 0x48(r29)
/* 8014B4E8 00148428  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8014B4EC 0014842C  3B C3 0C 70 */	addi r30, r3, govNAN___Q24Game5P2JST@l
/* 8014B4F0 00148430  38 9F 00 8C */	addi r4, r31, 0x8c
/* 8014B4F4 00148434  90 1D 01 3C */	stw r0, 0x13c(r29)
/* 8014B4F8 00148438  38 61 00 10 */	addi r3, r1, 0x10
/* 8014B4FC 0014843C  48 2D 6D 35 */	bl __ct__Q26System20FragmentationCheckerFPcb
/* 8014B500 00148440  38 61 00 08 */	addi r3, r1, 8
/* 8014B504 00148444  38 9F 00 98 */	addi r4, r31, 0x98
/* 8014B508 00148448  38 A0 00 00 */	li r5, 0
/* 8014B50C 0014844C  48 2D 6D 25 */	bl __ct__Q26System20FragmentationCheckerFPcb
/* 8014B510 00148450  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B514 00148454  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 8014B518 00148458  38 A0 00 00 */	li r5, 0
/* 8014B51C 0014845C  48 2D 7E 41 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8014B520 00148460  38 61 00 08 */	addi r3, r1, 8
/* 8014B524 00148464  38 80 FF FF */	li r4, -1
/* 8014B528 00148468  48 2D 6D 5D */	bl __dt__Q26System20FragmentationCheckerFv
/* 8014B52C 0014846C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B530 00148470  38 80 01 E0 */	li r4, 0x1e0
/* 8014B534 00148474  48 2D 6D E9 */	bl enableCPULockDetector__6SystemFi
/* 8014B538 00148478  3C 60 80 4B */	lis r3, __vt__9IDelegate@ha
/* 8014B53C 0014847C  80 BE 00 34 */	lwz r5, 0x34(r30)
/* 8014B540 00148480  38 C3 0F 00 */	addi r6, r3, __vt__9IDelegate@l
/* 8014B544 00148484  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 8014B548 00148488  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 8014B54C 0014848C  3C 60 80 4B */	lis r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@ha
/* 8014B550 00148490  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8014B554 00148494  38 C3 0E F4 */	addi r6, r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@l
/* 8014B558 00148498  7F A3 EB 78 */	mr r3, r29
/* 8014B55C 0014849C  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8014B560 001484A0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8014B564 001484A4  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8014B568 001484A8  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8014B56C 001484AC  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014B570 001484B0  48 2D 8A 5D */	bl beginFrame__7SectionFv
/* 8014B574 001484B4  7F A3 EB 78 */	mr r3, r29
/* 8014B578 001484B8  48 2D 8A 9D */	bl beginRender__7SectionFv
/* 8014B57C 001484BC  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014B580 001484C0  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8014B584 001484C4  4B F1 26 89 */	bl drawInit__6J3DSysFv
/* 8014B588 001484C8  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014B58C 001484CC  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 8014B590 001484D0  FC 40 08 90 */	fmr f2, f1
/* 8014B594 001484D4  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 8014B598 001484D8  FC A0 08 90 */	fmr f5, f1
/* 8014B59C 001484DC  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 8014B5A0 001484E0  4B F9 E1 F1 */	bl GXSetViewport
/* 8014B5A4 001484E4  38 60 00 00 */	li r3, 0
/* 8014B5A8 001484E8  38 80 00 10 */	li r4, 0x10
/* 8014B5AC 001484EC  38 A0 02 60 */	li r5, 0x260
/* 8014B5B0 001484F0  38 C0 01 C0 */	li r6, 0x1c0
/* 8014B5B4 001484F4  4B F9 E2 25 */	bl GXSetScissor
/* 8014B5B8 001484F8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8014B5BC 001484FC  85 83 00 BC */	lwzu r12, 0xbc(r3)
/* 8014B5C0 00148500  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014B5C4 00148504  7D 89 03 A6 */	mtctr r12
/* 8014B5C8 00148508  4E 80 04 21 */	bctrl 
/* 8014B5CC 0014850C  7F A3 EB 78 */	mr r3, r29
/* 8014B5D0 00148510  48 2D 8A 69 */	bl endRender__7SectionFv
/* 8014B5D4 00148514  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B5D8 00148518  38 9D 00 5C */	addi r4, r29, 0x5c
/* 8014B5DC 0014851C  38 A1 00 30 */	addi r5, r1, 0x30
/* 8014B5E0 00148520  48 2D 79 59 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8014B5E4 00148524  88 0D 92 BC */	lbz r0, init$4568@sda21(r13)
/* 8014B5E8 00148528  7C 00 07 75 */	extsb. r0, r0
/* 8014B5EC 0014852C  40 82 00 14 */	bne .L_8014B600
/* 8014B5F0 00148530  38 60 00 00 */	li r3, 0
/* 8014B5F4 00148534  38 00 00 01 */	li r0, 1
/* 8014B5F8 00148538  90 6D 92 B8 */	stw r3, col$4567@sda21(r13)
/* 8014B5FC 0014853C  98 0D 92 BC */	stb r0, init$4568@sda21(r13)
.L_8014B600:
/* 8014B600 00148540  80 8D 92 B8 */	lwz r4, col$4567@sda21(r13)
/* 8014B604 00148544  7F A3 EB 78 */	mr r3, r29
/* 8014B608 00148548  38 04 00 01 */	addi r0, r4, 1
/* 8014B60C 0014854C  90 0D 92 B8 */	stw r0, col$4567@sda21(r13)
/* 8014B610 00148550  48 2D 89 E1 */	bl endFrame__7SectionFv
/* 8014B614 00148554  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014B618 00148558  3B 83 F2 30 */	addi r28, r3, j3dSys@l
.L_8014B61C:
/* 8014B61C 0014855C  7F A3 EB 78 */	mr r3, r29
/* 8014B620 00148560  48 2D 89 AD */	bl beginFrame__7SectionFv
/* 8014B624 00148564  7F A3 EB 78 */	mr r3, r29
/* 8014B628 00148568  48 2D 89 ED */	bl beginRender__7SectionFv
/* 8014B62C 0014856C  7F 83 E3 78 */	mr r3, r28
/* 8014B630 00148570  4B F1 25 DD */	bl drawInit__6J3DSysFv
/* 8014B634 00148574  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014B638 00148578  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 8014B63C 0014857C  FC 40 08 90 */	fmr f2, f1
/* 8014B640 00148580  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 8014B644 00148584  FC A0 08 90 */	fmr f5, f1
/* 8014B648 00148588  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 8014B64C 0014858C  4B F9 E1 45 */	bl GXSetViewport
/* 8014B650 00148590  38 60 00 00 */	li r3, 0
/* 8014B654 00148594  38 80 00 10 */	li r4, 0x10
/* 8014B658 00148598  38 A0 02 60 */	li r5, 0x260
/* 8014B65C 0014859C  38 C0 01 C0 */	li r6, 0x1c0
/* 8014B660 001485A0  4B F9 E1 79 */	bl GXSetScissor
/* 8014B664 001485A4  7F A3 EB 78 */	mr r3, r29
/* 8014B668 001485A8  48 2D 89 D1 */	bl endRender__7SectionFv
/* 8014B66C 001485AC  80 1D 00 74 */	lwz r0, 0x74(r29)
/* 8014B670 001485B0  2C 00 00 02 */	cmpwi r0, 2
/* 8014B674 001485B4  41 82 00 10 */	beq .L_8014B684
/* 8014B678 001485B8  7F A3 EB 78 */	mr r3, r29
/* 8014B67C 001485BC  48 2D 89 75 */	bl endFrame__7SectionFv
/* 8014B680 001485C0  4B FF FF 9C */	b .L_8014B61C
.L_8014B684:
/* 8014B684 001485C4  7F A3 EB 78 */	mr r3, r29
/* 8014B688 001485C8  38 80 00 00 */	li r4, 0
/* 8014B68C 001485CC  48 01 98 99 */	bl initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
/* 8014B690 001485D0  38 60 00 60 */	li r3, 0x60
/* 8014B694 001485D4  4B ED 88 11 */	bl __nw__FUl
/* 8014B698 001485D8  7C 60 1B 79 */	or. r0, r3, r3
/* 8014B69C 001485DC  41 82 00 0C */	beq .L_8014B6A8
/* 8014B6A0 001485E0  4B FE 71 CD */	bl __ct__Q213TreasureLight3MgrFv
/* 8014B6A4 001485E4  7C 60 1B 78 */	mr r0, r3
.L_8014B6A8:
/* 8014B6A8 001485E8  90 1D 00 F8 */	stw r0, 0xf8(r29)
/* 8014B6AC 001485EC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8014B6B0 001485F0  48 2D 6C 31 */	bl assert_fragmentation__6SystemFPc
/* 8014B6B4 001485F4  38 60 01 F8 */	li r3, 0x1f8
/* 8014B6B8 001485F8  4B ED 87 ED */	bl __nw__FUl
/* 8014B6BC 001485FC  7C 60 1B 79 */	or. r0, r3, r3
/* 8014B6C0 00148600  41 82 00 0C */	beq .L_8014B6CC
/* 8014B6C4 00148604  48 2E 10 3D */	bl __ct__Q24Game11MoviePlayerFv
/* 8014B6C8 00148608  7C 60 1B 78 */	mr r0, r3
.L_8014B6CC:
/* 8014B6CC 0014860C  90 0D 9B 54 */	stw r0, moviePlayer__4Game@sda21(r13)
/* 8014B6D0 00148610  38 60 00 14 */	li r3, 0x14
/* 8014B6D4 00148614  4B ED 87 D1 */	bl __nw__FUl
/* 8014B6D8 00148618  28 03 00 00 */	cmplwi r3, 0
/* 8014B6DC 0014861C  41 82 00 44 */	beq .L_8014B720
/* 8014B6E0 00148620  81 1E 00 40 */	lwz r8, 0x40(r30)
/* 8014B6E4 00148624  3C 80 80 4B */	lis r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B6E8 00148628  80 FE 00 44 */	lwz r7, 0x44(r30)
/* 8014B6EC 0014862C  38 A4 0E E8 */	addi r5, r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B6F0 00148630  80 DE 00 48 */	lwz r6, 0x48(r30)
/* 8014B6F4 00148634  3C 80 80 4B */	lis r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B6F8 00148638  38 04 0E DC */	addi r0, r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B6FC 0014863C  91 01 00 24 */	stw r8, 0x24(r1)
/* 8014B700 00148640  90 A3 00 00 */	stw r5, 0(r3)
/* 8014B704 00148644  90 03 00 00 */	stw r0, 0(r3)
/* 8014B708 00148648  93 A3 00 04 */	stw r29, 4(r3)
/* 8014B70C 0014864C  91 03 00 08 */	stw r8, 8(r3)
/* 8014B710 00148650  90 E3 00 0C */	stw r7, 0xc(r3)
/* 8014B714 00148654  90 E1 00 28 */	stw r7, 0x28(r1)
/* 8014B718 00148658  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8014B71C 0014865C  90 C3 00 10 */	stw r6, 0x10(r3)
.L_8014B720:
/* 8014B720 00148660  90 7D 00 C8 */	stw r3, 0xc8(r29)
/* 8014B724 00148664  38 60 00 14 */	li r3, 0x14
/* 8014B728 00148668  4B ED 87 7D */	bl __nw__FUl
/* 8014B72C 0014866C  28 03 00 00 */	cmplwi r3, 0
/* 8014B730 00148670  41 82 00 44 */	beq .L_8014B774
/* 8014B734 00148674  81 1E 00 4C */	lwz r8, 0x4c(r30)
/* 8014B738 00148678  3C 80 80 4B */	lis r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B73C 0014867C  80 FE 00 50 */	lwz r7, 0x50(r30)
/* 8014B740 00148680  38 A4 0E E8 */	addi r5, r4, "__vt__39IDelegate3<PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B744 00148684  80 DE 00 54 */	lwz r6, 0x54(r30)
/* 8014B748 00148688  3C 80 80 4B */	lis r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@ha
/* 8014B74C 0014868C  38 04 0E DC */	addi r0, r4, "__vt__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>"@l
/* 8014B750 00148690  91 01 00 18 */	stw r8, 0x18(r1)
/* 8014B754 00148694  90 A3 00 00 */	stw r5, 0(r3)
/* 8014B758 00148698  90 03 00 00 */	stw r0, 0(r3)
/* 8014B75C 0014869C  93 A3 00 04 */	stw r29, 4(r3)
/* 8014B760 001486A0  91 03 00 08 */	stw r8, 8(r3)
/* 8014B764 001486A4  90 E3 00 0C */	stw r7, 0xc(r3)
/* 8014B768 001486A8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 8014B76C 001486AC  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8014B770 001486B0  90 C3 00 10 */	stw r6, 0x10(r3)
.L_8014B774:
/* 8014B774 001486B4  90 7D 00 CC */	stw r3, 0xcc(r29)
/* 8014B778 001486B8  38 80 00 02 */	li r4, 2
/* 8014B77C 001486BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B780 001486C0  48 2D 7D AD */	bl setFrameRate__6SystemFi
/* 8014B784 001486C4  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 8014B788 001486C8  48 2D 6B 59 */	bl assert_fragmentation__6SystemFPc
/* 8014B78C 001486CC  7F A3 EB 78 */	mr r3, r29
/* 8014B790 001486D0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8014B794 001486D4  81 8C 00 F8 */	lwz r12, 0xf8(r12)
/* 8014B798 001486D8  7D 89 03 A6 */	mtctr r12
/* 8014B79C 001486DC  4E 80 04 21 */	bctrl 
/* 8014B7A0 001486E0  38 60 00 01 */	li r3, 1
/* 8014B7A4 001486E4  38 00 00 00 */	li r0, 0
/* 8014B7A8 001486E8  98 7D 01 1C */	stb r3, 0x11c(r29)
/* 8014B7AC 001486EC  38 7F 00 F8 */	addi r3, r31, 0xf8
/* 8014B7B0 001486F0  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 8014B7B4 001486F4  48 2D 6B 2D */	bl assert_fragmentation__6SystemFPc
/* 8014B7B8 001486F8  38 7F 01 14 */	addi r3, r31, 0x114
/* 8014B7BC 001486FC  48 2D 6B 25 */	bl assert_fragmentation__6SystemFPc
/* 8014B7C0 00148700  48 1C 3E A9 */	bl create__Q22og5Lib2DFv
/* 8014B7C4 00148704  48 2B 07 29 */	bl create__Q26Screen9Game2DMgrFv
/* 8014B7C8 00148708  80 8D 9A A0 */	lwz r4, gGame2DMgr__6Screen@sda21(r13)
/* 8014B7CC 0014870C  38 00 00 01 */	li r0, 1
/* 8014B7D0 00148710  38 7F 01 30 */	addi r3, r31, 0x130
/* 8014B7D4 00148714  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8014B7D8 00148718  98 04 00 90 */	stb r0, 0x90(r4)
/* 8014B7DC 0014871C  48 2D 6B 05 */	bl assert_fragmentation__6SystemFPc
/* 8014B7E0 00148720  38 00 00 00 */	li r0, 0
/* 8014B7E4 00148724  7F A3 EB 78 */	mr r3, r29
/* 8014B7E8 00148728  90 1D 01 60 */	stw r0, 0x160(r29)
/* 8014B7EC 0014872C  90 1D 01 5C */	stw r0, 0x15c(r29)
/* 8014B7F0 00148730  81 9D 00 00 */	lwz r12, 0(r29)
/* 8014B7F4 00148734  81 8C 00 F0 */	lwz r12, 0xf0(r12)
/* 8014B7F8 00148738  7D 89 03 A6 */	mtctr r12
/* 8014B7FC 0014873C  4E 80 04 21 */	bctrl 
/* 8014B800 00148740  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B804 00148744  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 8014B808 00148748  48 2D 7B 5D */	bl heapStatusEnd__6SystemFPc
/* 8014B80C 0014874C  38 00 00 00 */	li r0, 0
/* 8014B810 00148750  38 61 00 10 */	addi r3, r1, 0x10
/* 8014B814 00148754  90 1D 01 34 */	stw r0, 0x134(r29)
/* 8014B818 00148758  38 80 FF FF */	li r4, -1
/* 8014B81C 0014875C  48 2D 6A 69 */	bl __dt__Q26System20FragmentationCheckerFv
/* 8014B820 00148760  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8014B824 00148764  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8014B828 00148768  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8014B82C 0014876C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8014B830 00148770  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8014B834 00148774  7C 08 03 A6 */	mtlr r0
/* 8014B838 00148778  38 21 00 60 */	addi r1, r1, 0x60
/* 8014B83C 0014877C  4E 80 00 20 */	blr 
.endfn init__Q24Game15BaseGameSectionFv
.endif

.fn onInit__Q24Game15BaseGameSectionFv, weak
/* 8014B840 00148780  4E 80 00 20 */	blr 
.endfn onInit__Q24Game15BaseGameSectionFv

.fn drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode, global
/* 8014B844 00148784  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014B848 00148788  7C 08 02 A6 */	mflr r0
/* 8014B84C 0014878C  2C 05 00 02 */	cmpwi r5, 2
/* 8014B850 00148790  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014B854 00148794  40 82 00 14 */	bne .L_8014B868
/* 8014B858 00148798  81 83 00 00 */	lwz r12, 0(r3)
/* 8014B85C 0014879C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014B860 001487A0  7D 89 03 A6 */	mtctr r12
/* 8014B864 001487A4  4E 80 04 21 */	bctrl 
.L_8014B868:
/* 8014B868 001487A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014B86C 001487AC  7C 08 03 A6 */	mtlr r0
/* 8014B870 001487B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014B874 001487B4  4E 80 00 20 */	blr 
.endfn drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode

.fn section_fadeout__Q24Game15BaseGameSectionFv, weak
/* 8014B878 001487B8  4E 80 00 20 */	blr 
.endfn section_fadeout__Q24Game15BaseGameSectionFv

.if version == 0
.fn doUpdate__Q24Game15BaseGameSectionFv, global
/* 8014B87C 001487BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014B880 001487C0  7C 08 02 A6 */	mflr r0
/* 8014B884 001487C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014B888 001487C8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014B88C 001487CC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8014B890 001487D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014B894 001487D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014B898 001487D8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014B89C 001487DC  38 00 00 00 */	li r0, 0
/* 8014B8A0 001487E0  7C 7F 1B 78 */	mr r31, r3
/* 8014B8A4 001487E4  90 0D 9C 00 */	stw r0, cullCount__Q28SysShape5Model@sda21(r13)
/* 8014B8A8 001487E8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B8AC 001487EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014B8B0 001487F0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014B8B4 001487F4  7D 89 03 A6 */	mtctr r12
/* 8014B8B8 001487F8  4E 80 04 21 */	bctrl 
/* 8014B8BC 001487FC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014B8C0 00148800  48 2B 07 6D */	bl update__Q26Screen9Game2DMgrFv
/* 8014B8C4 00148804  88 1F 00 58 */	lbz r0, 0x78(r31)
/* 8014B8C8 00148808  28 00 00 00 */	cmplwi r0, 0
/* 8014B8CC 0014880C  41 82 00 0C */	beq .L_8014B8D8
/* 8014B8D0 00148810  7F E3 FB 78 */	mr r3, r31
/* 8014B8D4 00148814  48 00 41 5D */	bl updateBlendCamera__Q24Game15BaseGameSectionFv
.L_8014B8D8:
/* 8014B8D8 00148818  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014B8DC 0014881C  81 83 00 04 */	lwz r12, 4(r3)
/* 8014B8E0 00148820  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8014B8E4 00148824  7D 89 03 A6 */	mtctr r12
/* 8014B8E8 00148828  4E 80 04 21 */	bctrl 
/* 8014B8EC 0014882C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B8F0 00148830  38 82 A1 48 */	addi r4, r2, lbl_805184A8@sda21
/* 8014B8F4 00148834  38 A0 00 01 */	li r5, 1
/* 8014B8F8 00148838  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B8FC 0014883C  48 2D F1 FD */	bl _start__9SysTimersFPcb
/* 8014B900 00148840  7F E3 FB 78 */	mr r3, r31
/* 8014B904 00148844  48 00 3C 79 */	bl doAnimation__Q24Game15BaseGameSectionFv
/* 8014B908 00148848  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B90C 0014884C  38 82 A1 48 */	addi r4, r2, lbl_805184A8@sda21
/* 8014B910 00148850  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B914 00148854  48 2D F1 E9 */	bl _stop__9SysTimersFPc
/* 8014B918 00148858  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B91C 0014885C  38 82 A1 50 */	addi r4, r2, lbl_805184B0@sda21
/* 8014B920 00148860  38 A0 00 01 */	li r5, 1
/* 8014B924 00148864  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B928 00148868  48 2D F1 D1 */	bl _start__9SysTimersFPcb
/* 8014B92C 0014886C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B930 00148870  38 82 A1 54 */	addi r4, r2, lbl_805184B4@sda21
/* 8014B934 00148874  38 A0 00 01 */	li r5, 1
/* 8014B938 00148878  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B93C 0014887C  48 2D F1 BD */	bl _start__9SysTimersFPcb
/* 8014B940 00148880  7F E3 FB 78 */	mr r3, r31
/* 8014B944 00148884  48 00 3E 5D */	bl doEntry__Q24Game15BaseGameSectionFv
/* 8014B948 00148888  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B94C 0014888C  38 82 A1 54 */	addi r4, r2, lbl_805184B4@sda21
/* 8014B950 00148890  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B954 00148894  48 2D F1 A9 */	bl _stop__9SysTimersFPc
/* 8014B958 00148898  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B95C 0014889C  38 82 A1 5C */	addi r4, r2, lbl_805184BC@sda21
/* 8014B960 001488A0  38 A0 00 01 */	li r5, 1
/* 8014B964 001488A4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B968 001488A8  48 2D F1 91 */	bl _start__9SysTimersFPcb
/* 8014B96C 001488AC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8014B970 001488B0  28 03 00 00 */	cmplwi r3, 0
/* 8014B974 001488B4  41 82 00 08 */	beq .L_8014B97C
/* 8014B978 001488B8  48 10 7C 35 */	bl update__Q24Game9RumbleMgrFv
.L_8014B97C:
/* 8014B97C 001488BC  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014B980 001488C0  28 03 00 00 */	cmplwi r3, 0
/* 8014B984 001488C4  41 82 00 08 */	beq .L_8014B98C
/* 8014B988 001488C8  48 0F 5D 29 */	bl update__Q24Game9ShadowMgrFv
.L_8014B98C:
/* 8014B98C 001488CC  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 8014B990 001488D0  28 03 00 00 */	cmplwi r3, 0
/* 8014B994 001488D4  41 82 00 08 */	beq .L_8014B99C
/* 8014B998 001488D8  4B FC F2 89 */	bl update__12LifeGaugeMgrFv
.L_8014B99C:
/* 8014B99C 001488DC  80 6D 92 18 */	lwz r3, carryInfoMgr@sda21(r13)
/* 8014B9A0 001488E0  28 03 00 00 */	cmplwi r3, 0
/* 8014B9A4 001488E4  41 82 00 14 */	beq .L_8014B9B8
/* 8014B9A8 001488E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014B9AC 001488EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014B9B0 001488F0  7D 89 03 A6 */	mtctr r12
/* 8014B9B4 001488F4  4E 80 04 21 */	bctrl 
.L_8014B9B8:
/* 8014B9B8 001488F8  80 7F 01 28 */	lwz r3, 0x148(r31)
/* 8014B9BC 001488FC  28 03 00 00 */	cmplwi r3, 0
/* 8014B9C0 00148900  41 82 00 14 */	beq .L_8014B9D4
/* 8014B9C4 00148904  81 83 00 00 */	lwz r12, 0(r3)
/* 8014B9C8 00148908  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014B9CC 0014890C  7D 89 03 A6 */	mtctr r12
/* 8014B9D0 00148910  4E 80 04 21 */	bctrl 
.L_8014B9D4:
/* 8014B9D4 00148914  48 2F 36 79 */	bl setViewCalcModeInd__Q28SysShape5ModelFv
/* 8014B9D8 00148918  3B C0 00 00 */	li r30, 0
/* 8014B9DC 0014891C  48 00 00 34 */	b .L_8014BA10
.L_8014B9E0:
/* 8014B9E0 00148920  7F C4 F3 78 */	mr r4, r30
/* 8014B9E4 00148924  48 2D 9C 0D */	bl getViewport__8GraphicsFi
/* 8014B9E8 00148928  7C 7D 1B 79 */	or. r29, r3, r3
/* 8014B9EC 0014892C  41 82 00 20 */	beq .L_8014BA0C
/* 8014B9F0 00148930  48 2D 98 51 */	bl viewable__8ViewportFv
/* 8014B9F4 00148934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014B9F8 00148938  41 82 00 14 */	beq .L_8014BA0C
/* 8014B9FC 0014893C  7F E3 FB 78 */	mr r3, r31
/* 8014BA00 00148940  7F A4 EB 78 */	mr r4, r29
/* 8014BA04 00148944  38 A0 00 00 */	li r5, 0
/* 8014BA08 00148948  48 00 3A C1 */	bl j3dSetView__Q24Game15BaseGameSectionFP8Viewportb
.L_8014BA0C:
/* 8014BA0C 0014894C  3B DE 00 01 */	addi r30, r30, 1
.L_8014BA10:
/* 8014BA10 00148950  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA14 00148954  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014BA18 00148958  80 03 02 64 */	lwz r0, 0x264(r3)
/* 8014BA1C 0014895C  7C 1E 00 00 */	cmpw r30, r0
/* 8014BA20 00148960  41 80 FF C0 */	blt .L_8014B9E0
/* 8014BA24 00148964  7F E3 FB 78 */	mr r3, r31
/* 8014BA28 00148968  48 01 95 81 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 8014BA2C 0014896C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 8014BA30 00148970  28 03 00 00 */	cmplwi r3, 0
/* 8014BA34 00148974  41 82 00 08 */	beq .L_8014BA3C
/* 8014BA38 00148978  48 07 AA 59 */	bl resetOnCount__Q24Game7PlatMgrFv
.L_8014BA3C:
/* 8014BA3C 0014897C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA40 00148980  38 82 A1 5C */	addi r4, r2, lbl_805184BC@sda21
/* 8014BA44 00148984  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA48 00148988  48 2D F0 B5 */	bl _stop__9SysTimersFPc
/* 8014BA4C 0014898C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA50 00148990  38 82 A1 50 */	addi r4, r2, lbl_805184B0@sda21
/* 8014BA54 00148994  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA58 00148998  48 2D F0 A5 */	bl _stop__9SysTimersFPc
/* 8014BA5C 0014899C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA60 001489A0  38 82 A1 64 */	addi r4, r2, lbl_805184C4@sda21
/* 8014BA64 001489A4  38 A0 00 01 */	li r5, 1
/* 8014BA68 001489A8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA6C 001489AC  48 2D F0 8D */	bl _start__9SysTimersFPcb
/* 8014BA70 001489B0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BA74 001489B4  48 06 95 55 */	bl paused__Q24Game10GameSystemFv
/* 8014BA78 001489B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014BA7C 001489BC  40 82 00 68 */	bne .L_8014BAE4
/* 8014BA80 001489C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA84 001489C4  38 82 A1 6C */	addi r4, r2, lbl_805184CC@sda21
/* 8014BA88 001489C8  C0 02 A1 44 */	lfs f0, lbl_805184A4@sda21(r2)
/* 8014BA8C 001489CC  38 A0 00 01 */	li r5, 1
/* 8014BA90 001489D0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014BA94 001489D4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA98 001489D8  EF E1 00 24 */	fdivs f31, f1, f0
/* 8014BA9C 001489DC  48 2D F0 5D */	bl _start__9SysTimersFPcb
/* 8014BAA0 001489E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BAA4 001489E4  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8014BAA8 001489E8  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8014BAAC 001489EC  40 82 00 1C */	bne .L_8014BAC8
/* 8014BAB0 001489F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BAB4 001489F4  48 2D 74 05 */	bl getTime__6SystemFv
/* 8014BAB8 001489F8  80 6D 92 C8 */	lwz r3, cellMgr__4Game@sda21(r13)
/* 8014BABC 001489FC  48 00 B8 39 */	bl resolveCollision__Q24Game11CellPyramidFv
/* 8014BAC0 00148A00  38 00 00 01 */	li r0, 1
/* 8014BAC4 00148A04  98 0D 92 D5 */	stb r0, sSpeedUpResolveColl__Q24Game11CellPyramid@sda21(r13)
.L_8014BAC8:
/* 8014BAC8 00148A08  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BACC 00148A0C  38 82 A1 6C */	addi r4, r2, lbl_805184CC@sda21
/* 8014BAD0 00148A10  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BAD4 00148A14  48 2D F0 29 */	bl _stop__9SysTimersFPc
/* 8014BAD8 00148A18  FC 20 F8 90 */	fmr f1, f31
/* 8014BADC 00148A1C  7F E3 FB 78 */	mr r3, r31
/* 8014BAE0 00148A20  48 00 3A 3D */	bl doSimulation__Q24Game15BaseGameSectionFf
.L_8014BAE4:
/* 8014BAE4 00148A24  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BAE8 00148A28  38 82 A1 64 */	addi r4, r2, lbl_805184C4@sda21
/* 8014BAEC 00148A2C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BAF0 00148A30  48 2D F0 0D */	bl _stop__9SysTimersFPc
/* 8014BAF4 00148A34  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8014BAF8 00148A38  3C 60 80 48 */	lis r3, lbl_8047CA94@ha
/* 8014BAFC 00148A3C  38 83 CA 94 */	addi r4, r3, lbl_8047CA94@l
/* 8014BB00 00148A40  38 A0 00 01 */	li r5, 1
/* 8014BB04 00148A44  80 66 00 28 */	lwz r3, 0x28(r6)
/* 8014BB08 00148A48  48 2D EF F1 */	bl _start__9SysTimersFPcb
/* 8014BB0C 00148A4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BB10 00148A50  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8014BB14 00148A54  28 00 00 00 */	cmplwi r0, 0
/* 8014BB18 00148A58  40 82 00 2C */	bne .L_8014BB44
/* 8014BB1C 00148A5C  48 06 94 AD */	bl paused__Q24Game10GameSystemFv
/* 8014BB20 00148A60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014BB24 00148A64  40 82 00 20 */	bne .L_8014BB44
/* 8014BB28 00148A68  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014BB2C 00148A6C  28 03 00 00 */	cmplwi r3, 0
/* 8014BB30 00148A70  41 82 00 14 */	beq .L_8014BB44
/* 8014BB34 00148A74  81 83 00 00 */	lwz r12, 0(r3)
/* 8014BB38 00148A78  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014BB3C 00148A7C  7D 89 03 A6 */	mtctr r12
/* 8014BB40 00148A80  4E 80 04 21 */	bctrl 
.L_8014BB44:
/* 8014BB44 00148A84  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8014BB48 00148A88  28 03 00 00 */	cmplwi r3, 0
/* 8014BB4C 00148A8C  41 82 00 08 */	beq .L_8014BB54
/* 8014BB50 00148A90  48 26 DA 61 */	bl update__14TParticle2dMgrFv
.L_8014BB54:
/* 8014BB54 00148A94  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8014BB58 00148A98  3C 60 80 48 */	lis r3, lbl_8047CA94@ha
/* 8014BB5C 00148A9C  38 83 CA 94 */	addi r4, r3, lbl_8047CA94@l
/* 8014BB60 00148AA0  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8014BB64 00148AA4  48 2D EF 99 */	bl _stop__9SysTimersFPc
/* 8014BB68 00148AA8  7F E3 FB 78 */	mr r3, r31
/* 8014BB6C 00148AAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014BB70 00148AB0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8014BB74 00148AB4  7D 89 03 A6 */	mtctr r12
/* 8014BB78 00148AB8  4E 80 04 21 */	bctrl 
/* 8014BB7C 00148ABC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014BB80 00148AC0  28 03 00 00 */	cmplwi r3, 0
/* 8014BB84 00148AC4  41 82 00 54 */	beq .L_8014BBD8
/* 8014BB88 00148AC8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014BB8C 00148ACC  88 04 00 4D */	lbz r0, 0x4d(r4)
/* 8014BB90 00148AD0  28 00 00 00 */	cmplwi r0, 0
/* 8014BB94 00148AD4  40 82 00 44 */	bne .L_8014BBD8
/* 8014BB98 00148AD8  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8014BB9C 00148ADC  38 00 00 00 */	li r0, 0
/* 8014BBA0 00148AE0  2C 04 00 01 */	cmpwi r4, 1
/* 8014BBA4 00148AE4  41 82 00 0C */	beq .L_8014BBB0
/* 8014BBA8 00148AE8  2C 04 00 03 */	cmpwi r4, 3
/* 8014BBAC 00148AEC  40 82 00 08 */	bne .L_8014BBB4
.L_8014BBB0:
/* 8014BBB0 00148AF0  38 00 00 01 */	li r0, 1
.L_8014BBB4:
/* 8014BBB4 00148AF4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8014BBB8 00148AF8  41 82 00 14 */	beq .L_8014BBCC
/* 8014BBBC 00148AFC  80 9F 01 0C */	lwz r4, 0x12c(r31)
/* 8014BBC0 00148B00  80 BF 01 10 */	lwz r5, 0x130(r31)
/* 8014BBC4 00148B04  48 2E 1A A5 */	bl update__Q24Game11MoviePlayerFP10ControllerP10Controller
/* 8014BBC8 00148B08  48 00 00 10 */	b .L_8014BBD8
.L_8014BBCC:
/* 8014BBCC 00148B0C  80 9F 01 0C */	lwz r4, 0x12c(r31)
/* 8014BBD0 00148B10  38 A0 00 00 */	li r5, 0
/* 8014BBD4 00148B14  48 2E 1A 95 */	bl update__Q24Game11MoviePlayerFP10ControllerP10Controller
.L_8014BBD8:
/* 8014BBD8 00148B18  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014BBDC 00148B1C  28 03 00 00 */	cmplwi r3, 0
/* 8014BBE0 00148B20  41 82 00 08 */	beq .L_8014BBE8
/* 8014BBE4 00148B24  48 0F 5A 71 */	bl init__Q24Game9ShadowMgrFv
.L_8014BBE8:
/* 8014BBE8 00148B28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BBEC 00148B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014BBF0 00148B30  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8014BBF4 00148B34  7D 89 03 A6 */	mtctr r12
/* 8014BBF8 00148B38  4E 80 04 21 */	bctrl 
/* 8014BBFC 00148B3C  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 8014BC00 00148B40  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8014BC04 00148B44  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014BC08 00148B48  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014BC0C 00148B4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014BC10 00148B50  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014BC14 00148B54  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014BC18 00148B58  7C 08 03 A6 */	mtlr r0
/* 8014BC1C 00148B5C  38 21 00 30 */	addi r1, r1, 0x30
/* 8014BC20 00148B60  4E 80 00 20 */	blr 
.endfn doUpdate__Q24Game15BaseGameSectionFv
.else
.fn doUpdate__Q24Game15BaseGameSectionFv, global
/* 8014B87C 001487BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014B880 001487C0  7C 08 02 A6 */	mflr r0
/* 8014B884 001487C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014B888 001487C8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014B88C 001487CC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8014B890 001487D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014B894 001487D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014B898 001487D8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014B89C 001487DC  38 00 00 00 */	li r0, 0
/* 8014B8A0 001487E0  7C 7F 1B 78 */	mr r31, r3
/* 8014B8A4 001487E4  90 0D 9C 00 */	stw r0, cullCount__Q28SysShape5Model@sda21(r13)
/* 8014B8A8 001487E8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014B8AC 001487EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014B8B0 001487F0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014B8B4 001487F4  7D 89 03 A6 */	mtctr r12
/* 8014B8B8 001487F8  4E 80 04 21 */	bctrl 
/* 8014B8BC 001487FC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014B8C0 00148800  48 2B 07 6D */	bl update__Q26Screen9Game2DMgrFv
/* 8014B8C4 00148804  88 1F 00 58 */	lbz r0, 0x58(r31)
/* 8014B8C8 00148808  28 00 00 00 */	cmplwi r0, 0
/* 8014B8CC 0014880C  41 82 00 0C */	beq .L_8014B8D8
/* 8014B8D0 00148810  7F E3 FB 78 */	mr r3, r31
/* 8014B8D4 00148814  48 00 41 5D */	bl updateBlendCamera__Q24Game15BaseGameSectionFv
.L_8014B8D8:
/* 8014B8D8 00148818  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014B8DC 0014881C  81 83 00 04 */	lwz r12, 4(r3)
/* 8014B8E0 00148820  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8014B8E4 00148824  7D 89 03 A6 */	mtctr r12
/* 8014B8E8 00148828  4E 80 04 21 */	bctrl 
/* 8014B8EC 0014882C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B8F0 00148830  38 82 A1 48 */	addi r4, r2, lbl_805184A8@sda21
/* 8014B8F4 00148834  38 A0 00 01 */	li r5, 1
/* 8014B8F8 00148838  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B8FC 0014883C  48 2D F1 FD */	bl _start__9SysTimersFPcb
/* 8014B900 00148840  7F E3 FB 78 */	mr r3, r31
/* 8014B904 00148844  48 00 3C 79 */	bl doAnimation__Q24Game15BaseGameSectionFv
/* 8014B908 00148848  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B90C 0014884C  38 82 A1 48 */	addi r4, r2, lbl_805184A8@sda21
/* 8014B910 00148850  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B914 00148854  48 2D F1 E9 */	bl _stop__9SysTimersFPc
/* 8014B918 00148858  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B91C 0014885C  38 82 A1 50 */	addi r4, r2, lbl_805184B0@sda21
/* 8014B920 00148860  38 A0 00 01 */	li r5, 1
/* 8014B924 00148864  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B928 00148868  48 2D F1 D1 */	bl _start__9SysTimersFPcb
/* 8014B92C 0014886C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B930 00148870  38 82 A1 54 */	addi r4, r2, lbl_805184B4@sda21
/* 8014B934 00148874  38 A0 00 01 */	li r5, 1
/* 8014B938 00148878  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B93C 0014887C  48 2D F1 BD */	bl _start__9SysTimersFPcb
/* 8014B940 00148880  7F E3 FB 78 */	mr r3, r31
/* 8014B944 00148884  48 00 3E 5D */	bl doEntry__Q24Game15BaseGameSectionFv
/* 8014B948 00148888  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B94C 0014888C  38 82 A1 54 */	addi r4, r2, lbl_805184B4@sda21
/* 8014B950 00148890  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B954 00148894  48 2D F1 A9 */	bl _stop__9SysTimersFPc
/* 8014B958 00148898  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014B95C 0014889C  38 82 A1 5C */	addi r4, r2, lbl_805184BC@sda21
/* 8014B960 001488A0  38 A0 00 01 */	li r5, 1
/* 8014B964 001488A4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014B968 001488A8  48 2D F1 91 */	bl _start__9SysTimersFPcb
/* 8014B96C 001488AC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8014B970 001488B0  28 03 00 00 */	cmplwi r3, 0
/* 8014B974 001488B4  41 82 00 08 */	beq .L_8014B97C
/* 8014B978 001488B8  48 10 7C 35 */	bl update__Q24Game9RumbleMgrFv
.L_8014B97C:
/* 8014B97C 001488BC  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014B980 001488C0  28 03 00 00 */	cmplwi r3, 0
/* 8014B984 001488C4  41 82 00 08 */	beq .L_8014B98C
/* 8014B988 001488C8  48 0F 5D 29 */	bl update__Q24Game9ShadowMgrFv
.L_8014B98C:
/* 8014B98C 001488CC  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 8014B990 001488D0  28 03 00 00 */	cmplwi r3, 0
/* 8014B994 001488D4  41 82 00 08 */	beq .L_8014B99C
/* 8014B998 001488D8  4B FC F2 89 */	bl update__12LifeGaugeMgrFv
.L_8014B99C:
/* 8014B99C 001488DC  80 6D 92 18 */	lwz r3, carryInfoMgr@sda21(r13)
/* 8014B9A0 001488E0  28 03 00 00 */	cmplwi r3, 0
/* 8014B9A4 001488E4  41 82 00 14 */	beq .L_8014B9B8
/* 8014B9A8 001488E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014B9AC 001488EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014B9B0 001488F0  7D 89 03 A6 */	mtctr r12
/* 8014B9B4 001488F4  4E 80 04 21 */	bctrl 
.L_8014B9B8:
/* 8014B9B8 001488F8  80 7F 01 28 */	lwz r3, 0x128(r31)
/* 8014B9BC 001488FC  28 03 00 00 */	cmplwi r3, 0
/* 8014B9C0 00148900  41 82 00 14 */	beq .L_8014B9D4
/* 8014B9C4 00148904  81 83 00 00 */	lwz r12, 0(r3)
/* 8014B9C8 00148908  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014B9CC 0014890C  7D 89 03 A6 */	mtctr r12
/* 8014B9D0 00148910  4E 80 04 21 */	bctrl 
.L_8014B9D4:
/* 8014B9D4 00148914  48 2F 36 79 */	bl setViewCalcModeInd__Q28SysShape5ModelFv
/* 8014B9D8 00148918  3B C0 00 00 */	li r30, 0
/* 8014B9DC 0014891C  48 00 00 34 */	b .L_8014BA10
.L_8014B9E0:
/* 8014B9E0 00148920  7F C4 F3 78 */	mr r4, r30
/* 8014B9E4 00148924  48 2D 9C 0D */	bl getViewport__8GraphicsFi
/* 8014B9E8 00148928  7C 7D 1B 79 */	or. r29, r3, r3
/* 8014B9EC 0014892C  41 82 00 20 */	beq .L_8014BA0C
/* 8014B9F0 00148930  48 2D 98 51 */	bl viewable__8ViewportFv
/* 8014B9F4 00148934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014B9F8 00148938  41 82 00 14 */	beq .L_8014BA0C
/* 8014B9FC 0014893C  7F E3 FB 78 */	mr r3, r31
/* 8014BA00 00148940  7F A4 EB 78 */	mr r4, r29
/* 8014BA04 00148944  38 A0 00 00 */	li r5, 0
/* 8014BA08 00148948  48 00 3A C1 */	bl j3dSetView__Q24Game15BaseGameSectionFP8Viewportb
.L_8014BA0C:
/* 8014BA0C 0014894C  3B DE 00 01 */	addi r30, r30, 1
.L_8014BA10:
/* 8014BA10 00148950  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA14 00148954  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014BA18 00148958  80 03 02 64 */	lwz r0, 0x264(r3)
/* 8014BA1C 0014895C  7C 1E 00 00 */	cmpw r30, r0
/* 8014BA20 00148960  41 80 FF C0 */	blt .L_8014B9E0
/* 8014BA24 00148964  7F E3 FB 78 */	mr r3, r31
/* 8014BA28 00148968  48 01 95 81 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 8014BA2C 0014896C  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 8014BA30 00148970  28 03 00 00 */	cmplwi r3, 0
/* 8014BA34 00148974  41 82 00 08 */	beq .L_8014BA3C
/* 8014BA38 00148978  48 07 AA 59 */	bl resetOnCount__Q24Game7PlatMgrFv
.L_8014BA3C:
/* 8014BA3C 0014897C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA40 00148980  38 82 A1 5C */	addi r4, r2, lbl_805184BC@sda21
/* 8014BA44 00148984  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA48 00148988  48 2D F0 B5 */	bl _stop__9SysTimersFPc
/* 8014BA4C 0014898C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA50 00148990  38 82 A1 50 */	addi r4, r2, lbl_805184B0@sda21
/* 8014BA54 00148994  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA58 00148998  48 2D F0 A5 */	bl _stop__9SysTimersFPc
/* 8014BA5C 0014899C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA60 001489A0  38 82 A1 64 */	addi r4, r2, lbl_805184C4@sda21
/* 8014BA64 001489A4  38 A0 00 01 */	li r5, 1
/* 8014BA68 001489A8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA6C 001489AC  48 2D F0 8D */	bl _start__9SysTimersFPcb
/* 8014BA70 001489B0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BA74 001489B4  48 06 95 55 */	bl paused__Q24Game10GameSystemFv
/* 8014BA78 001489B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014BA7C 001489BC  40 82 00 68 */	bne .L_8014BAE4
/* 8014BA80 001489C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BA84 001489C4  38 82 A1 6C */	addi r4, r2, lbl_805184CC@sda21
/* 8014BA88 001489C8  C0 02 A1 44 */	lfs f0, lbl_805184A4@sda21(r2)
/* 8014BA8C 001489CC  38 A0 00 01 */	li r5, 1
/* 8014BA90 001489D0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014BA94 001489D4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BA98 001489D8  EF E1 00 24 */	fdivs f31, f1, f0
/* 8014BA9C 001489DC  48 2D F0 5D */	bl _start__9SysTimersFPcb
/* 8014BAA0 001489E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BAA4 001489E4  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8014BAA8 001489E8  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8014BAAC 001489EC  40 82 00 1C */	bne .L_8014BAC8
/* 8014BAB0 001489F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BAB4 001489F4  48 2D 74 05 */	bl getTime__6SystemFv
/* 8014BAB8 001489F8  80 6D 92 C8 */	lwz r3, cellMgr__4Game@sda21(r13)
/* 8014BABC 001489FC  48 00 B8 39 */	bl resolveCollision__Q24Game11CellPyramidFv
/* 8014BAC0 00148A00  38 00 00 01 */	li r0, 1
/* 8014BAC4 00148A04  98 0D 92 D5 */	stb r0, sSpeedUpResolveColl__Q24Game11CellPyramid@sda21(r13)
.L_8014BAC8:
/* 8014BAC8 00148A08  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BACC 00148A0C  38 82 A1 6C */	addi r4, r2, lbl_805184CC@sda21
/* 8014BAD0 00148A10  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BAD4 00148A14  48 2D F0 29 */	bl _stop__9SysTimersFPc
/* 8014BAD8 00148A18  FC 20 F8 90 */	fmr f1, f31
/* 8014BADC 00148A1C  7F E3 FB 78 */	mr r3, r31
/* 8014BAE0 00148A20  48 00 3A 3D */	bl doSimulation__Q24Game15BaseGameSectionFf
.L_8014BAE4:
/* 8014BAE4 00148A24  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014BAE8 00148A28  38 82 A1 64 */	addi r4, r2, lbl_805184C4@sda21
/* 8014BAEC 00148A2C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014BAF0 00148A30  48 2D F0 0D */	bl _stop__9SysTimersFPc
/* 8014BAF4 00148A34  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8014BAF8 00148A38  3C 60 80 48 */	lis r3, lbl_8047CA94@ha
/* 8014BAFC 00148A3C  38 83 CA 94 */	addi r4, r3, lbl_8047CA94@l
/* 8014BB00 00148A40  38 A0 00 01 */	li r5, 1
/* 8014BB04 00148A44  80 66 00 28 */	lwz r3, 0x28(r6)
/* 8014BB08 00148A48  48 2D EF F1 */	bl _start__9SysTimersFPcb
/* 8014BB0C 00148A4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BB10 00148A50  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8014BB14 00148A54  28 00 00 00 */	cmplwi r0, 0
/* 8014BB18 00148A58  40 82 00 2C */	bne .L_8014BB44
/* 8014BB1C 00148A5C  48 06 94 AD */	bl paused__Q24Game10GameSystemFv
/* 8014BB20 00148A60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014BB24 00148A64  40 82 00 20 */	bne .L_8014BB44
/* 8014BB28 00148A68  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014BB2C 00148A6C  28 03 00 00 */	cmplwi r3, 0
/* 8014BB30 00148A70  41 82 00 14 */	beq .L_8014BB44
/* 8014BB34 00148A74  81 83 00 00 */	lwz r12, 0(r3)
/* 8014BB38 00148A78  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014BB3C 00148A7C  7D 89 03 A6 */	mtctr r12
/* 8014BB40 00148A80  4E 80 04 21 */	bctrl 
.L_8014BB44:
/* 8014BB44 00148A84  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8014BB48 00148A88  28 03 00 00 */	cmplwi r3, 0
/* 8014BB4C 00148A8C  41 82 00 08 */	beq .L_8014BB54
/* 8014BB50 00148A90  48 26 DA 61 */	bl update__14TParticle2dMgrFv
.L_8014BB54:
/* 8014BB54 00148A94  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8014BB58 00148A98  3C 60 80 48 */	lis r3, lbl_8047CA94@ha
/* 8014BB5C 00148A9C  38 83 CA 94 */	addi r4, r3, lbl_8047CA94@l
/* 8014BB60 00148AA0  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8014BB64 00148AA4  48 2D EF 99 */	bl _stop__9SysTimersFPc
/* 8014BB68 00148AA8  7F E3 FB 78 */	mr r3, r31
/* 8014BB6C 00148AAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014BB70 00148AB0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8014BB74 00148AB4  7D 89 03 A6 */	mtctr r12
/* 8014BB78 00148AB8  4E 80 04 21 */	bctrl 
/* 8014BB7C 00148ABC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014BB80 00148AC0  28 03 00 00 */	cmplwi r3, 0
/* 8014BB84 00148AC4  41 82 00 54 */	beq .L_8014BBD8
/* 8014BB88 00148AC8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014BB8C 00148ACC  88 04 00 4D */	lbz r0, 0x4d(r4)
/* 8014BB90 00148AD0  28 00 00 00 */	cmplwi r0, 0
/* 8014BB94 00148AD4  40 82 00 44 */	bne .L_8014BBD8
/* 8014BB98 00148AD8  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8014BB9C 00148ADC  38 00 00 00 */	li r0, 0
/* 8014BBA0 00148AE0  2C 04 00 01 */	cmpwi r4, 1
/* 8014BBA4 00148AE4  41 82 00 0C */	beq .L_8014BBB0
/* 8014BBA8 00148AE8  2C 04 00 03 */	cmpwi r4, 3
/* 8014BBAC 00148AEC  40 82 00 08 */	bne .L_8014BBB4
.L_8014BBB0:
/* 8014BBB0 00148AF0  38 00 00 01 */	li r0, 1
.L_8014BBB4:
/* 8014BBB4 00148AF4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8014BBB8 00148AF8  41 82 00 14 */	beq .L_8014BBCC
/* 8014BBBC 00148AFC  80 9F 01 0C */	lwz r4, 0x10c(r31)
/* 8014BBC0 00148B00  80 BF 01 10 */	lwz r5, 0x110(r31)
/* 8014BBC4 00148B04  48 2E 1A A5 */	bl update__Q24Game11MoviePlayerFP10ControllerP10Controller
/* 8014BBC8 00148B08  48 00 00 10 */	b .L_8014BBD8
.L_8014BBCC:
/* 8014BBCC 00148B0C  80 9F 01 0C */	lwz r4, 0x10c(r31)
/* 8014BBD0 00148B10  38 A0 00 00 */	li r5, 0
/* 8014BBD4 00148B14  48 2E 1A 95 */	bl update__Q24Game11MoviePlayerFP10ControllerP10Controller
.L_8014BBD8:
/* 8014BBD8 00148B18  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014BBDC 00148B1C  28 03 00 00 */	cmplwi r3, 0
/* 8014BBE0 00148B20  41 82 00 08 */	beq .L_8014BBE8
/* 8014BBE4 00148B24  48 0F 5A 71 */	bl init__Q24Game9ShadowMgrFv
.L_8014BBE8:
/* 8014BBE8 00148B28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BBEC 00148B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014BBF0 00148B30  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8014BBF4 00148B34  7D 89 03 A6 */	mtctr r12
/* 8014BBF8 00148B38  4E 80 04 21 */	bctrl 
/* 8014BBFC 00148B3C  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 8014BC00 00148B40  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8014BC04 00148B44  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014BC08 00148B48  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8014BC0C 00148B4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014BC10 00148B50  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014BC14 00148B54  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014BC18 00148B58  7C 08 03 A6 */	mtlr r0
/* 8014BC1C 00148B5C  38 21 00 30 */	addi r1, r1, 0x30
/* 8014BC20 00148B60  4E 80 00 20 */	blr 
.endfn doUpdate__Q24Game15BaseGameSectionFv
.endif

.fn onUpdate__Q24Game15BaseGameSectionFv, weak
/* 8014BC24 00148B64  4E 80 00 20 */	blr 
.endfn onUpdate__Q24Game15BaseGameSectionFv

.if version == 0
.fn doDraw__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014BC28 00148B68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BC2C 00148B6C  7C 08 02 A6 */	mflr r0
/* 8014BC30 00148B70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BC34 00148B74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014BC38 00148B78  7C 9F 23 78 */	mr r31, r4
/* 8014BC3C 00148B7C  93 C1 00 08 */	stw r30, 8(r1)
/* 8014BC40 00148B80  7C 7E 1B 78 */	mr r30, r3
/* 8014BC44 00148B84  48 00 5A F1 */	bl captureRadarmap__Q24Game15BaseGameSectionFR8Graphics
/* 8014BC48 00148B88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BC4C 00148B8C  48 06 93 7D */	bl paused__Q24Game10GameSystemFv
/* 8014BC50 00148B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014BC54 00148B94  41 82 00 30 */	beq .L_8014BC84
/* 8014BC58 00148B98  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC5C 00148B9C  28 03 00 00 */	cmplwi r3, 0
/* 8014BC60 00148BA0  41 82 00 34 */	beq .L_8014BC94
/* 8014BC64 00148BA4  38 80 00 02 */	li r4, 2
/* 8014BC68 00148BA8  48 10 68 05 */	bl controllerLock__Q24Game9CameraMgrFi
/* 8014BC6C 00148BAC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC70 00148BB0  48 10 64 5D */	bl update__Q24Game9CameraMgrFv
/* 8014BC74 00148BB4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC78 00148BB8  38 80 00 02 */	li r4, 2
/* 8014BC7C 00148BBC  48 10 68 61 */	bl controllerUnLock__Q24Game9CameraMgrFi
/* 8014BC80 00148BC0  48 00 00 14 */	b .L_8014BC94
.L_8014BC84:
/* 8014BC84 00148BC4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC88 00148BC8  28 03 00 00 */	cmplwi r3, 0
/* 8014BC8C 00148BCC  41 82 00 08 */	beq .L_8014BC94
/* 8014BC90 00148BD0  48 10 64 3D */	bl update__Q24Game9CameraMgrFv
.L_8014BC94:
/* 8014BC94 00148BD4  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8014BC98 00148BD8  3C 60 80 48 */	lis r3, lbl_8047CAA0@ha
/* 8014BC9C 00148BDC  38 83 CA A0 */	addi r4, r3, lbl_8047CAA0@l
/* 8014BCA0 00148BE0  38 A0 00 01 */	li r5, 1
/* 8014BCA4 00148BE4  80 66 00 28 */	lwz r3, 0x28(r6)
/* 8014BCA8 00148BE8  48 2D EE 51 */	bl _start__9SysTimersFPcb
/* 8014BCAC 00148BEC  7F C3 F3 78 */	mr r3, r30
/* 8014BCB0 00148BF0  7F E4 FB 78 */	mr r4, r31
/* 8014BCB4 00148BF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014BCB8 00148BF8  81 8C 01 0C */	lwz r12, 0x10c(r12)
/* 8014BCBC 00148BFC  7D 89 03 A6 */	mtctr r12
/* 8014BCC0 00148C00  4E 80 04 21 */	bctrl 
/* 8014BCC4 00148C04  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8014BCC8 00148C08  3C 60 80 48 */	lis r3, lbl_8047CAA0@ha
/* 8014BCCC 00148C0C  38 83 CA A0 */	addi r4, r3, lbl_8047CAA0@l
/* 8014BCD0 00148C10  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8014BCD4 00148C14  48 2D EE 29 */	bl _stop__9SysTimersFPc
/* 8014BCD8 00148C18  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014BCDC 00148C1C  28 03 00 00 */	cmplwi r3, 0
/* 8014BCE0 00148C20  41 82 00 1C */	beq .L_8014BCFC
/* 8014BCE4 00148C24  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014BCE8 00148C28  88 04 00 4D */	lbz r0, 0x4d(r4)
/* 8014BCEC 00148C2C  28 00 00 00 */	cmplwi r0, 0
/* 8014BCF0 00148C30  40 82 00 0C */	bne .L_8014BCFC
/* 8014BCF4 00148C34  7F E4 FB 78 */	mr r4, r31
/* 8014BCF8 00148C38  48 2E 28 F5 */	bl drawLoading__Q24Game11MoviePlayerFR8Graphics
.L_8014BCFC:
/* 8014BCFC 00148C3C  7F C3 F3 78 */	mr r3, r30
/* 8014BD00 00148C40  7F E4 FB 78 */	mr r4, r31
/* 8014BD04 00148C44  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014BD08 00148C48  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8014BD0C 00148C4C  7D 89 03 A6 */	mtctr r12
/* 8014BD10 00148C50  4E 80 04 21 */	bctrl 
/* 8014BD14 00148C54  7F E3 FB 78 */	mr r3, r31
/* 8014BD18 00148C58  38 82 A1 74 */	addi r4, r2, lbl_805184D4@sda21
/* 8014BD1C 00148C5C  48 2D 99 F5 */	bl setToken__8GraphicsFPc
/* 8014BD20 00148C60  7F C3 F3 78 */	mr r3, r30
/* 8014BD24 00148C64  7F E4 FB 78 */	mr r4, r31
/* 8014BD28 00148C68  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014BD2C 00148C6C  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8014BD30 00148C70  7D 89 03 A6 */	mtctr r12
/* 8014BD34 00148C74  4E 80 04 21 */	bctrl 
/* 8014BD38 00148C78  80 1E 01 3C */	lwz r0, 0x15c(r30)
/* 8014BD3C 00148C7C  28 00 00 00 */	cmplwi r0, 0
/* 8014BD40 00148C80  41 82 00 10 */	beq .L_8014BD50
/* 8014BD44 00148C84  7F C3 F3 78 */	mr r3, r30
/* 8014BD48 00148C88  7F E4 FB 78 */	mr r4, r31
/* 8014BD4C 00148C8C  48 0E F7 E9 */	bl drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
.L_8014BD50:
/* 8014BD50 00148C90  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014BD54 00148C94  7F E4 FB 78 */	mr r4, r31
/* 8014BD58 00148C98  48 2B 43 19 */	bl drawKanteiMsg__Q26Screen9Game2DMgrFR8Graphics
/* 8014BD5C 00148C9C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014BD60 00148CA0  28 03 00 00 */	cmplwi r3, 0
/* 8014BD64 00148CA4  41 82 00 1C */	beq .L_8014BD80
/* 8014BD68 00148CA8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014BD6C 00148CAC  88 04 00 4D */	lbz r0, 0x4d(r4)
/* 8014BD70 00148CB0  28 00 00 00 */	cmplwi r0, 0
/* 8014BD74 00148CB4  40 82 00 0C */	bne .L_8014BD80
/* 8014BD78 00148CB8  7F E4 FB 78 */	mr r4, r31
/* 8014BD7C 00148CBC  48 2E 20 DD */	bl draw__Q24Game11MoviePlayerFR8Graphics
.L_8014BD80:
/* 8014BD80 00148CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BD84 00148CC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014BD88 00148CC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014BD8C 00148CCC  7C 08 03 A6 */	mtlr r0
/* 8014BD90 00148CD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BD94 00148CD4  4E 80 00 20 */	blr 
.endfn doDraw__Q24Game15BaseGameSectionFR8Graphics
.else
.fn doDraw__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014BC28 00148B68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BC2C 00148B6C  7C 08 02 A6 */	mflr r0
/* 8014BC30 00148B70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BC34 00148B74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014BC38 00148B78  7C 9F 23 78 */	mr r31, r4
/* 8014BC3C 00148B7C  93 C1 00 08 */	stw r30, 8(r1)
/* 8014BC40 00148B80  7C 7E 1B 78 */	mr r30, r3
/* 8014BC44 00148B84  48 00 5A F1 */	bl captureRadarmap__Q24Game15BaseGameSectionFR8Graphics
/* 8014BC48 00148B88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BC4C 00148B8C  48 06 93 7D */	bl paused__Q24Game10GameSystemFv
/* 8014BC50 00148B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014BC54 00148B94  41 82 00 30 */	beq .L_8014BC84
/* 8014BC58 00148B98  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC5C 00148B9C  28 03 00 00 */	cmplwi r3, 0
/* 8014BC60 00148BA0  41 82 00 34 */	beq .L_8014BC94
/* 8014BC64 00148BA4  38 80 00 02 */	li r4, 2
/* 8014BC68 00148BA8  48 10 68 05 */	bl controllerLock__Q24Game9CameraMgrFi
/* 8014BC6C 00148BAC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC70 00148BB0  48 10 64 5D */	bl update__Q24Game9CameraMgrFv
/* 8014BC74 00148BB4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC78 00148BB8  38 80 00 02 */	li r4, 2
/* 8014BC7C 00148BBC  48 10 68 61 */	bl controllerUnLock__Q24Game9CameraMgrFi
/* 8014BC80 00148BC0  48 00 00 14 */	b .L_8014BC94
.L_8014BC84:
/* 8014BC84 00148BC4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014BC88 00148BC8  28 03 00 00 */	cmplwi r3, 0
/* 8014BC8C 00148BCC  41 82 00 08 */	beq .L_8014BC94
/* 8014BC90 00148BD0  48 10 64 3D */	bl update__Q24Game9CameraMgrFv
.L_8014BC94:
/* 8014BC94 00148BD4  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8014BC98 00148BD8  3C 60 80 48 */	lis r3, lbl_8047CAA0@ha
/* 8014BC9C 00148BDC  38 83 CA A0 */	addi r4, r3, lbl_8047CAA0@l
/* 8014BCA0 00148BE0  38 A0 00 01 */	li r5, 1
/* 8014BCA4 00148BE4  80 66 00 28 */	lwz r3, 0x28(r6)
/* 8014BCA8 00148BE8  48 2D EE 51 */	bl _start__9SysTimersFPcb
/* 8014BCAC 00148BEC  7F C3 F3 78 */	mr r3, r30
/* 8014BCB0 00148BF0  7F E4 FB 78 */	mr r4, r31
/* 8014BCB4 00148BF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014BCB8 00148BF8  81 8C 01 0C */	lwz r12, 0x10c(r12)
/* 8014BCBC 00148BFC  7D 89 03 A6 */	mtctr r12
/* 8014BCC0 00148C00  4E 80 04 21 */	bctrl 
/* 8014BCC4 00148C04  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8014BCC8 00148C08  3C 60 80 48 */	lis r3, lbl_8047CAA0@ha
/* 8014BCCC 00148C0C  38 83 CA A0 */	addi r4, r3, lbl_8047CAA0@l
/* 8014BCD0 00148C10  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8014BCD4 00148C14  48 2D EE 29 */	bl _stop__9SysTimersFPc
/* 8014BCD8 00148C18  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014BCDC 00148C1C  28 03 00 00 */	cmplwi r3, 0
/* 8014BCE0 00148C20  41 82 00 1C */	beq .L_8014BCFC
/* 8014BCE4 00148C24  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014BCE8 00148C28  88 04 00 4D */	lbz r0, 0x4d(r4)
/* 8014BCEC 00148C2C  28 00 00 00 */	cmplwi r0, 0
/* 8014BCF0 00148C30  40 82 00 0C */	bne .L_8014BCFC
/* 8014BCF4 00148C34  7F E4 FB 78 */	mr r4, r31
/* 8014BCF8 00148C38  48 2E 28 F5 */	bl drawLoading__Q24Game11MoviePlayerFR8Graphics
.L_8014BCFC:
/* 8014BCFC 00148C3C  7F C3 F3 78 */	mr r3, r30
/* 8014BD00 00148C40  7F E4 FB 78 */	mr r4, r31
/* 8014BD04 00148C44  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014BD08 00148C48  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8014BD0C 00148C4C  7D 89 03 A6 */	mtctr r12
/* 8014BD10 00148C50  4E 80 04 21 */	bctrl 
/* 8014BD14 00148C54  7F E3 FB 78 */	mr r3, r31
/* 8014BD18 00148C58  38 82 A1 74 */	addi r4, r2, lbl_805184D4@sda21
/* 8014BD1C 00148C5C  48 2D 99 F5 */	bl setToken__8GraphicsFPc
/* 8014BD20 00148C60  7F C3 F3 78 */	mr r3, r30
/* 8014BD24 00148C64  7F E4 FB 78 */	mr r4, r31
/* 8014BD28 00148C68  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014BD2C 00148C6C  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8014BD30 00148C70  7D 89 03 A6 */	mtctr r12
/* 8014BD34 00148C74  4E 80 04 21 */	bctrl 
/* 8014BD38 00148C78  80 1E 01 3C */	lwz r0, 0x13c(r30)
/* 8014BD3C 00148C7C  28 00 00 00 */	cmplwi r0, 0
/* 8014BD40 00148C80  41 82 00 10 */	beq .L_8014BD50
/* 8014BD44 00148C84  7F C3 F3 78 */	mr r3, r30
/* 8014BD48 00148C88  7F E4 FB 78 */	mr r4, r31
/* 8014BD4C 00148C8C  48 0E F7 E9 */	bl drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
.L_8014BD50:
/* 8014BD50 00148C90  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014BD54 00148C94  7F E4 FB 78 */	mr r4, r31
/* 8014BD58 00148C98  48 2B 43 19 */	bl drawKanteiMsg__Q26Screen9Game2DMgrFR8Graphics
/* 8014BD5C 00148C9C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014BD60 00148CA0  28 03 00 00 */	cmplwi r3, 0
/* 8014BD64 00148CA4  41 82 00 1C */	beq .L_8014BD80
/* 8014BD68 00148CA8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014BD6C 00148CAC  88 04 00 4D */	lbz r0, 0x4d(r4)
/* 8014BD70 00148CB0  28 00 00 00 */	cmplwi r0, 0
/* 8014BD74 00148CB4  40 82 00 0C */	bne .L_8014BD80
/* 8014BD78 00148CB8  7F E4 FB 78 */	mr r4, r31
/* 8014BD7C 00148CBC  48 2E 20 DD */	bl draw__Q24Game11MoviePlayerFR8Graphics
.L_8014BD80:
/* 8014BD80 00148CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BD84 00148CC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014BD88 00148CC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014BD8C 00148CCC  7C 08 03 A6 */	mtlr r0
/* 8014BD90 00148CD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BD94 00148CD4  4E 80 00 20 */	blr 
.endfn doDraw__Q24Game15BaseGameSectionFR8Graphics
.endif

.fn pre2dDraw__Q24Game15BaseGameSectionFR8Graphics, weak
/* 8014BD98 00148CD8  4E 80 00 20 */	blr 
.endfn pre2dDraw__Q24Game15BaseGameSectionFR8Graphics

.if version == 0
.fn movieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl, global
/* 8014BD9C 00148CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BDA0 00148CE0  7C 08 02 A6 */	mflr r0
/* 8014BDA4 00148CE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BDA8 00148CE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014BDAC 00148CEC  7C 7F 1B 78 */	mr r31, r3
/* 8014BDB0 00148CF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014BDB4 00148CF4  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8014BDB8 00148CF8  7D 89 03 A6 */	mtctr r12
/* 8014BDBC 00148CFC  4E 80 04 21 */	bctrl 
/* 8014BDC0 00148D00  80 7F 01 3C */	lwz r3, 0x15c(r31)
/* 8014BDC4 00148D04  28 03 00 00 */	cmplwi r3, 0
/* 8014BDC8 00148D08  41 82 00 38 */	beq .L_8014BE00
/* 8014BDCC 00148D0C  38 80 00 01 */	li r4, 1
/* 8014BDD0 00148D10  4B FE FD 1D */	bl movie_end__Q24Game8CreatureFb
/* 8014BDD4 00148D14  80 7F 01 3C */	lwz r3, 0x15c(r31)
/* 8014BDD8 00148D18  38 80 00 00 */	li r4, 0
/* 8014BDDC 00148D1C  4B FE F3 15 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8014BDE0 00148D20  38 00 00 00 */	li r0, 0
/* 8014BDE4 00148D24  90 1F 01 3C */	stw r0, 0x15c(r31)
/* 8014BDE8 00148D28  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014BDEC 00148D2C  48 2B 17 61 */	bl close_SpecialItem__Q26Screen9Game2DMgrFv
/* 8014BDF0 00148D30  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014BDF4 00148D34  48 2B 15 D1 */	bl close_Kantei__Q26Screen9Game2DMgrFv
/* 8014BDF8 00148D38  38 00 00 00 */	li r0, 0
/* 8014BDFC 00148D3C  90 1F 01 34 */	stw r0, 0x154(r31)
.L_8014BE00:
/* 8014BE00 00148D40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BE04 00148D44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014BE08 00148D48  7C 08 03 A6 */	mtlr r0
/* 8014BE0C 00148D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BE10 00148D50  4E 80 00 20 */	blr 
.endfn movieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl
.else
.fn movieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl, global
/* 8014BD9C 00148CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BDA0 00148CE0  7C 08 02 A6 */	mflr r0
/* 8014BDA4 00148CE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BDA8 00148CE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014BDAC 00148CEC  7C 7F 1B 78 */	mr r31, r3
/* 8014BDB0 00148CF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014BDB4 00148CF4  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8014BDB8 00148CF8  7D 89 03 A6 */	mtctr r12
/* 8014BDBC 00148CFC  4E 80 04 21 */	bctrl 
/* 8014BDC0 00148D00  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 8014BDC4 00148D04  28 03 00 00 */	cmplwi r3, 0
/* 8014BDC8 00148D08  41 82 00 38 */	beq .L_8014BE00
/* 8014BDCC 00148D0C  38 80 00 01 */	li r4, 1
/* 8014BDD0 00148D10  4B FE FD 1D */	bl movie_end__Q24Game8CreatureFb
/* 8014BDD4 00148D14  80 7F 01 3C */	lwz r3, 0x13c(r31)
/* 8014BDD8 00148D18  38 80 00 00 */	li r4, 0
/* 8014BDDC 00148D1C  4B FE F3 15 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8014BDE0 00148D20  38 00 00 00 */	li r0, 0
/* 8014BDE4 00148D24  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 8014BDE8 00148D28  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014BDEC 00148D2C  48 2B 17 61 */	bl close_SpecialItem__Q26Screen9Game2DMgrFv
/* 8014BDF0 00148D30  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014BDF4 00148D34  48 2B 15 D1 */	bl close_Kantei__Q26Screen9Game2DMgrFv
/* 8014BDF8 00148D38  38 00 00 00 */	li r0, 0
/* 8014BDFC 00148D3C  90 1F 01 34 */	stw r0, 0x134(r31)
.L_8014BE00:
/* 8014BE00 00148D40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BE04 00148D44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014BE08 00148D48  7C 08 03 A6 */	mtlr r0
/* 8014BE0C 00148D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BE10 00148D50  4E 80 00 20 */	blr 
.endfn movieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl
.endif

.fn onMovieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl, weak
/* 8014BE14 00148D54  4E 80 00 20 */	blr 
.endfn onMovieDone__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl

.fn onMovieCommand__Q24Game15BaseGameSectionFi, global
/* 8014BE18 00148D58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014BE1C 00148D5C  7C 08 02 A6 */	mflr r0
/* 8014BE20 00148D60  2C 04 00 02 */	cmpwi r4, 2
/* 8014BE24 00148D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014BE28 00148D68  41 82 00 20 */	beq .L_8014BE48
/* 8014BE2C 00148D6C  40 80 00 10 */	bge .L_8014BE3C
/* 8014BE30 00148D70  2C 04 00 00 */	cmpwi r4, 0
/* 8014BE34 00148D74  41 82 00 60 */	beq .L_8014BE94
/* 8014BE38 00148D78  48 00 00 5C */	b .L_8014BE94
.L_8014BE3C:
/* 8014BE3C 00148D7C  2C 04 00 04 */	cmpwi r4, 4
/* 8014BE40 00148D80  40 80 00 54 */	bge .L_8014BE94
/* 8014BE44 00148D84  48 00 00 24 */	b .L_8014BE68
.L_8014BE48:
/* 8014BE48 00148D88  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8014BE4C 00148D8C  28 04 00 00 */	cmplwi r4, 0
/* 8014BE50 00148D90  41 82 00 44 */	beq .L_8014BE94
/* 8014BE54 00148D94  80 04 01 F0 */	lwz r0, 0x1f0(r4)
/* 8014BE58 00148D98  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8014BE5C 00148D9C  40 82 00 38 */	bne .L_8014BE94
/* 8014BE60 00148DA0  48 00 56 D5 */	bl createFallPikminSound__Q24Game15BaseGameSectionFv
/* 8014BE64 00148DA4  48 00 00 30 */	b .L_8014BE94
.L_8014BE68:
/* 8014BE68 00148DA8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014BE6C 00148DAC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014BE70 00148DB0  2C 00 00 00 */	cmpwi r0, 0
/* 8014BE74 00148DB4  40 82 00 20 */	bne .L_8014BE94
/* 8014BE78 00148DB8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8014BE7C 00148DBC  80 03 02 18 */	lwz r0, 0x218(r3)
/* 8014BE80 00148DC0  28 00 00 00 */	cmplwi r0, 0
/* 8014BE84 00148DC4  40 82 00 10 */	bne .L_8014BE94
/* 8014BE88 00148DC8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014BE8C 00148DCC  38 80 00 00 */	li r4, 0
/* 8014BE90 00148DD0  48 01 3E 25 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
.L_8014BE94:
/* 8014BE94 00148DD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014BE98 00148DD8  7C 08 03 A6 */	mtlr r0
/* 8014BE9C 00148DDC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014BEA0 00148DE0  4E 80 00 20 */	blr 
.endfn onMovieCommand__Q24Game15BaseGameSectionFi

.if version == 0
.fn initJ3D__Q24Game15BaseGameSectionFv, global
/* 8014BEA4 00148DE4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014BEA8 00148DE8  7C 08 02 A6 */	mflr r0
/* 8014BEAC 00148DEC  3C 80 80 48 */	lis r4, lbl_8047C948@ha
/* 8014BEB0 00148DF0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014BEB4 00148DF4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8014BEB8 00148DF8  3B E4 C9 48 */	addi r31, r4, lbl_8047C948@l
/* 8014BEBC 00148DFC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8014BEC0 00148E00  7C 7E 1B 78 */	mr r30, r3
/* 8014BEC4 00148E04  38 60 00 20 */	li r3, 0x20
/* 8014BEC8 00148E08  4B ED 7F DD */	bl __nw__FUl
/* 8014BECC 00148E0C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014BED0 00148E10  41 82 00 0C */	beq .L_8014BEDC
/* 8014BED4 00148E14  48 30 9A A5 */	bl __ct__Q23Sys11DrawBuffersFv
/* 8014BED8 00148E18  7C 60 1B 78 */	mr r0, r3
.L_8014BEDC:
/* 8014BEDC 00148E1C  90 1E 01 2C */	stw r0, 0x14c(r30)
/* 8014BEE0 00148E20  38 60 00 20 */	li r3, 0x20
/* 8014BEE4 00148E24  4B ED 7F C1 */	bl __nw__FUl
/* 8014BEE8 00148E28  7C 60 1B 79 */	or. r0, r3, r3
/* 8014BEEC 00148E2C  41 82 00 0C */	beq .L_8014BEF8
/* 8014BEF0 00148E30  48 30 9A 89 */	bl __ct__Q23Sys11DrawBuffersFv
/* 8014BEF4 00148E34  7C 60 1B 78 */	mr r0, r3
.L_8014BEF8:
/* 8014BEF8 00148E38  90 1E 01 30 */	stw r0, 0x150(r30)
/* 8014BEFC 00148E3C  38 80 00 0A */	li r4, 0xa
/* 8014BF00 00148E40  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014BF04 00148E44  48 30 9B 29 */	bl allocate__Q23Sys11DrawBuffersFi
/* 8014BF08 00148E48  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014BF0C 00148E4C  38 02 A1 78 */	addi r0, r2, lbl_805184D8@sda21
/* 8014BF10 00148E50  38 E0 00 00 */	li r7, 0
/* 8014BF14 00148E54  38 C0 00 01 */	li r6, 1
/* 8014BF18 00148E58  90 03 00 14 */	stw r0, 0x14(r3)
/* 8014BF1C 00148E5C  38 A2 A1 7C */	addi r5, r2, lbl_805184DC@sda21
/* 8014BF20 00148E60  38 60 00 80 */	li r3, 0x80
/* 8014BF24 00148E64  38 02 A1 84 */	addi r0, r2, lbl_805184E4@sda21
/* 8014BF28 00148E68  98 E1 00 28 */	stb r7, 0x28(r1)
/* 8014BF2C 00148E6C  38 80 00 00 */	li r4, 0
/* 8014BF30 00148E70  98 E1 00 29 */	stb r7, 0x29(r1)
/* 8014BF34 00148E74  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8014BF38 00148E78  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8014BF3C 00148E7C  98 E1 00 28 */	stb r7, 0x28(r1)
/* 8014BF40 00148E80  98 E1 00 29 */	stb r7, 0x29(r1)
/* 8014BF44 00148E84  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8014BF48 00148E88  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8014BF4C 00148E8C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014BF50 00148E90  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014BF54 00148E94  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014BF58 00148E98  48 30 9B 6D */	bl get__Q23Sys11DrawBuffersFi
/* 8014BF5C 00148E9C  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BF60 00148EA0  48 30 98 5D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BF64 00148EA4  38 1F 01 64 */	addi r0, r31, 0x164
/* 8014BF68 00148EA8  38 60 00 01 */	li r3, 1
/* 8014BF6C 00148EAC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014BF70 00148EB0  38 80 00 01 */	li r4, 1
/* 8014BF74 00148EB4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014BF78 00148EB8  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014BF7C 00148EBC  48 30 9B 49 */	bl get__Q23Sys11DrawBuffersFi
/* 8014BF80 00148EC0  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BF84 00148EC4  48 30 98 39 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BF88 00148EC8  38 80 00 01 */	li r4, 1
/* 8014BF8C 00148ECC  38 62 A1 8C */	addi r3, r2, lbl_805184EC@sda21
/* 8014BF90 00148ED0  38 00 00 05 */	li r0, 5
/* 8014BF94 00148ED4  90 81 00 24 */	stw r4, 0x24(r1)
/* 8014BF98 00148ED8  38 80 00 02 */	li r4, 2
/* 8014BF9C 00148EDC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8014BFA0 00148EE0  90 01 00 30 */	stw r0, 0x30(r1)
/* 8014BFA4 00148EE4  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014BFA8 00148EE8  48 30 9B 1D */	bl get__Q23Sys11DrawBuffersFi
/* 8014BFAC 00148EEC  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BFB0 00148EF0  48 30 98 0D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BFB4 00148EF4  38 80 00 01 */	li r4, 1
/* 8014BFB8 00148EF8  38 62 A1 90 */	addi r3, r2, lbl_805184F0@sda21
/* 8014BFBC 00148EFC  38 00 00 00 */	li r0, 0
/* 8014BFC0 00148F00  90 81 00 24 */	stw r4, 0x24(r1)
/* 8014BFC4 00148F04  38 80 00 03 */	li r4, 3
/* 8014BFC8 00148F08  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8014BFCC 00148F0C  90 01 00 30 */	stw r0, 0x30(r1)
/* 8014BFD0 00148F10  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014BFD4 00148F14  48 30 9A F1 */	bl get__Q23Sys11DrawBuffersFi
/* 8014BFD8 00148F18  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BFDC 00148F1C  48 30 97 E1 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BFE0 00148F20  38 60 00 01 */	li r3, 1
/* 8014BFE4 00148F24  38 02 A1 98 */	addi r0, r2, lbl_805184F8@sda21
/* 8014BFE8 00148F28  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014BFEC 00148F2C  38 80 00 04 */	li r4, 4
/* 8014BFF0 00148F30  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014BFF4 00148F34  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014BFF8 00148F38  48 30 9A CD */	bl get__Q23Sys11DrawBuffersFi
/* 8014BFFC 00148F3C  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C000 00148F40  48 30 97 BD */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C004 00148F44  38 60 00 01 */	li r3, 1
/* 8014C008 00148F48  38 02 A1 74 */	addi r0, r2, lbl_805184D4@sda21
/* 8014C00C 00148F4C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C010 00148F50  38 80 00 05 */	li r4, 5
/* 8014C014 00148F54  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C018 00148F58  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014C01C 00148F5C  48 30 9A A9 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C020 00148F60  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C024 00148F64  48 30 97 99 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C028 00148F68  38 60 00 01 */	li r3, 1
/* 8014C02C 00148F6C  38 02 A1 A0 */	addi r0, r2, lbl_80518500@sda21
/* 8014C030 00148F70  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C034 00148F74  38 80 00 06 */	li r4, 6
/* 8014C038 00148F78  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C03C 00148F7C  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014C040 00148F80  48 30 9A 85 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C044 00148F84  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C048 00148F88  48 30 97 75 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C04C 00148F8C  38 1F 01 74 */	addi r0, r31, 0x174
/* 8014C050 00148F90  38 60 00 01 */	li r3, 1
/* 8014C054 00148F94  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C058 00148F98  38 80 00 07 */	li r4, 7
/* 8014C05C 00148F9C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C060 00148FA0  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014C064 00148FA4  48 30 9A 61 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C068 00148FA8  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C06C 00148FAC  48 30 97 51 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C070 00148FB0  38 1F 01 80 */	addi r0, r31, 0x180
/* 8014C074 00148FB4  38 60 00 01 */	li r3, 1
/* 8014C078 00148FB8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C07C 00148FBC  38 80 00 08 */	li r4, 8
/* 8014C080 00148FC0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C084 00148FC4  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014C088 00148FC8  48 30 9A 3D */	bl get__Q23Sys11DrawBuffersFi
/* 8014C08C 00148FCC  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C090 00148FD0  48 30 97 2D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C094 00148FD4  38 60 00 01 */	li r3, 1
/* 8014C098 00148FD8  38 02 A1 A8 */	addi r0, r2, lbl_80518508@sda21
/* 8014C09C 00148FDC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C0A0 00148FE0  38 80 00 09 */	li r4, 9
/* 8014C0A4 00148FE4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C0A8 00148FE8  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014C0AC 00148FEC  48 30 9A 19 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C0B0 00148FF0  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C0B4 00148FF4  48 30 97 09 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C0B8 00148FF8  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C0BC 00148FFC  38 80 00 0A */	li r4, 0xa
/* 8014C0C0 00149000  48 30 99 6D */	bl allocate__Q23Sys11DrawBuffersFi
/* 8014C0C4 00149004  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C0C8 00149008  38 02 A1 B0 */	addi r0, r2, lbl_80518510@sda21
/* 8014C0CC 0014900C  39 00 00 00 */	li r8, 0
/* 8014C0D0 00149010  38 E0 00 01 */	li r7, 1
/* 8014C0D4 00149014  90 03 00 14 */	stw r0, 0x14(r3)
/* 8014C0D8 00149018  38 C2 A1 7C */	addi r6, r2, lbl_805184DC@sda21
/* 8014C0DC 0014901C  38 60 00 80 */	li r3, 0x80
/* 8014C0E0 00149020  38 02 A1 84 */	addi r0, r2, lbl_805184E4@sda21
/* 8014C0E4 00149024  99 01 00 14 */	stb r8, 0x14(r1)
/* 8014C0E8 00149028  38 80 00 00 */	li r4, 0
/* 8014C0EC 0014902C  99 01 00 15 */	stb r8, 0x15(r1)
/* 8014C0F0 00149030  99 01 00 14 */	stb r8, 0x14(r1)
/* 8014C0F4 00149034  99 01 00 15 */	stb r8, 0x15(r1)
/* 8014C0F8 00149038  A0 A1 00 14 */	lhz r5, 0x14(r1)
/* 8014C0FC 0014903C  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8014C100 00149040  60 A5 00 01 */	ori r5, r5, 1
/* 8014C104 00149044  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8014C108 00149048  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8014C10C 0014904C  91 01 00 20 */	stw r8, 0x20(r1)
/* 8014C110 00149050  B0 A1 00 14 */	sth r5, 0x14(r1)
/* 8014C114 00149054  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C118 00149058  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C11C 0014905C  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C120 00149060  48 30 99 A5 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C124 00149064  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C128 00149068  48 30 96 95 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C12C 0014906C  38 60 00 01 */	li r3, 1
/* 8014C130 00149070  38 02 A1 84 */	addi r0, r2, lbl_805184E4@sda21
/* 8014C134 00149074  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C138 00149078  38 80 00 01 */	li r4, 1
/* 8014C13C 0014907C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C140 00149080  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C144 00149084  48 30 99 81 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C148 00149088  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C14C 0014908C  48 30 96 71 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C150 00149090  38 60 00 01 */	li r3, 1
/* 8014C154 00149094  38 02 A1 8C */	addi r0, r2, lbl_805184EC@sda21
/* 8014C158 00149098  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C15C 0014909C  38 80 00 02 */	li r4, 2
/* 8014C160 001490A0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C164 001490A4  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C168 001490A8  48 30 99 5D */	bl get__Q23Sys11DrawBuffersFi
/* 8014C16C 001490AC  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C170 001490B0  48 30 96 4D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C174 001490B4  38 60 00 01 */	li r3, 1
/* 8014C178 001490B8  38 02 A1 90 */	addi r0, r2, lbl_805184F0@sda21
/* 8014C17C 001490BC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C180 001490C0  38 80 00 03 */	li r4, 3
/* 8014C184 001490C4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C188 001490C8  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C18C 001490CC  48 30 99 39 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C190 001490D0  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C194 001490D4  48 30 96 29 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C198 001490D8  38 60 00 01 */	li r3, 1
/* 8014C19C 001490DC  38 02 A1 98 */	addi r0, r2, lbl_805184F8@sda21
/* 8014C1A0 001490E0  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C1A4 001490E4  38 80 00 04 */	li r4, 4
/* 8014C1A8 001490E8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C1AC 001490EC  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C1B0 001490F0  48 30 99 15 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C1B4 001490F4  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C1B8 001490F8  48 30 96 05 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C1BC 001490FC  38 60 00 01 */	li r3, 1
/* 8014C1C0 00149100  38 02 A1 74 */	addi r0, r2, lbl_805184D4@sda21
/* 8014C1C4 00149104  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C1C8 00149108  38 80 00 05 */	li r4, 5
/* 8014C1CC 0014910C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C1D0 00149110  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C1D4 00149114  48 30 98 F1 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C1D8 00149118  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C1DC 0014911C  48 30 95 E1 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C1E0 00149120  38 60 00 01 */	li r3, 1
/* 8014C1E4 00149124  38 02 A1 A0 */	addi r0, r2, lbl_80518500@sda21
/* 8014C1E8 00149128  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C1EC 0014912C  38 80 00 06 */	li r4, 6
/* 8014C1F0 00149130  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C1F4 00149134  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C1F8 00149138  48 30 98 CD */	bl get__Q23Sys11DrawBuffersFi
/* 8014C1FC 0014913C  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C200 00149140  48 30 95 BD */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C204 00149144  38 1F 01 74 */	addi r0, r31, 0x174
/* 8014C208 00149148  38 60 00 01 */	li r3, 1
/* 8014C20C 0014914C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C210 00149150  38 80 00 07 */	li r4, 7
/* 8014C214 00149154  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C218 00149158  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C21C 0014915C  48 30 98 A9 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C220 00149160  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C224 00149164  48 30 95 99 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C228 00149168  38 1F 01 80 */	addi r0, r31, 0x180
/* 8014C22C 0014916C  38 60 00 01 */	li r3, 1
/* 8014C230 00149170  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C234 00149174  38 80 00 08 */	li r4, 8
/* 8014C238 00149178  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C23C 0014917C  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C240 00149180  48 30 98 85 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C244 00149184  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C248 00149188  48 30 95 75 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C24C 0014918C  38 60 00 01 */	li r3, 1
/* 8014C250 00149190  38 02 A1 A8 */	addi r0, r2, lbl_80518508@sda21
/* 8014C254 00149194  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C258 00149198  38 80 00 09 */	li r4, 9
/* 8014C25C 0014919C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C260 001491A0  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C264 001491A4  48 30 98 61 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C268 001491A8  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C26C 001491AC  48 30 95 51 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C270 001491B0  80 9E 01 2C */	lwz r4, 0x14c(r30)
/* 8014C274 001491B4  7F C3 F3 78 */	mr r3, r30
/* 8014C278 001491B8  48 01 8D 39 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C27C 001491BC  80 9E 01 30 */	lwz r4, 0x150(r30)
/* 8014C280 001491C0  7F C3 F3 78 */	mr r3, r30
/* 8014C284 001491C4  48 01 8D 2D */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C288 001491C8  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8014C28C 001491CC  38 80 00 00 */	li r4, 0
/* 8014C290 001491D0  48 30 98 35 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C294 001491D4  3C 80 80 51 */	lis r4, j3dSys@ha
/* 8014C298 001491D8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8014C29C 001491DC  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 8014C2A0 001491E0  38 80 00 00 */	li r4, 0
/* 8014C2A4 001491E4  90 03 00 48 */	stw r0, 0x48(r3)
/* 8014C2A8 001491E8  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8014C2AC 001491EC  48 30 98 19 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C2B0 001491F0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8014C2B4 001491F4  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014C2B8 001491F8  38 83 F2 30 */	addi r4, r3, j3dSys@l
/* 8014C2BC 001491FC  38 61 00 08 */	addi r3, r1, 8
/* 8014C2C0 00149200  90 04 00 4C */	stw r0, 0x4c(r4)
/* 8014C2C4 00149204  38 82 A1 B4 */	addi r4, r2, lbl_80518514@sda21
/* 8014C2C8 00149208  38 A0 00 00 */	li r5, 0
/* 8014C2CC 0014920C  48 2D 5F 65 */	bl __ct__Q26System20FragmentationCheckerFPcb
/* 8014C2D0 00149210  38 61 00 08 */	addi r3, r1, 8
/* 8014C2D4 00149214  38 80 FF FF */	li r4, -1
/* 8014C2D8 00149218  48 2D 5F AD */	bl __dt__Q26System20FragmentationCheckerFv
/* 8014C2DC 0014921C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014C2E0 00149220  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8014C2E4 00149224  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8014C2E8 00149228  7C 08 03 A6 */	mtlr r0
/* 8014C2EC 0014922C  38 21 00 40 */	addi r1, r1, 0x40
/* 8014C2F0 00149230  4E 80 00 20 */	blr 
.endfn initJ3D__Q24Game15BaseGameSectionFv
.else
.fn initJ3D__Q24Game15BaseGameSectionFv, global
/* 8014BEA4 00148DE4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014BEA8 00148DE8  7C 08 02 A6 */	mflr r0
/* 8014BEAC 00148DEC  3C 80 80 48 */	lis r4, lbl_8047C948@ha
/* 8014BEB0 00148DF0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014BEB4 00148DF4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8014BEB8 00148DF8  3B E4 C9 48 */	addi r31, r4, lbl_8047C948@l
/* 8014BEBC 00148DFC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8014BEC0 00148E00  7C 7E 1B 78 */	mr r30, r3
/* 8014BEC4 00148E04  38 60 00 20 */	li r3, 0x20
/* 8014BEC8 00148E08  4B ED 7F DD */	bl __nw__FUl
/* 8014BECC 00148E0C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014BED0 00148E10  41 82 00 0C */	beq .L_8014BEDC
/* 8014BED4 00148E14  48 30 9A A5 */	bl __ct__Q23Sys11DrawBuffersFv
/* 8014BED8 00148E18  7C 60 1B 78 */	mr r0, r3
.L_8014BEDC:
/* 8014BEDC 00148E1C  90 1E 01 2C */	stw r0, 0x12c(r30)
/* 8014BEE0 00148E20  38 60 00 20 */	li r3, 0x20
/* 8014BEE4 00148E24  4B ED 7F C1 */	bl __nw__FUl
/* 8014BEE8 00148E28  7C 60 1B 79 */	or. r0, r3, r3
/* 8014BEEC 00148E2C  41 82 00 0C */	beq .L_8014BEF8
/* 8014BEF0 00148E30  48 30 9A 89 */	bl __ct__Q23Sys11DrawBuffersFv
/* 8014BEF4 00148E34  7C 60 1B 78 */	mr r0, r3
.L_8014BEF8:
/* 8014BEF8 00148E38  90 1E 01 30 */	stw r0, 0x130(r30)
/* 8014BEFC 00148E3C  38 80 00 0A */	li r4, 0xa
/* 8014BF00 00148E40  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014BF04 00148E44  48 30 9B 29 */	bl allocate__Q23Sys11DrawBuffersFi
/* 8014BF08 00148E48  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014BF0C 00148E4C  38 02 A1 78 */	addi r0, r2, lbl_805184D8@sda21
/* 8014BF10 00148E50  38 E0 00 00 */	li r7, 0
/* 8014BF14 00148E54  38 C0 00 01 */	li r6, 1
/* 8014BF18 00148E58  90 03 00 14 */	stw r0, 0x14(r3)
/* 8014BF1C 00148E5C  38 A2 A1 7C */	addi r5, r2, lbl_805184DC@sda21
/* 8014BF20 00148E60  38 60 00 80 */	li r3, 0x80
/* 8014BF24 00148E64  38 02 A1 84 */	addi r0, r2, lbl_805184E4@sda21
/* 8014BF28 00148E68  98 E1 00 28 */	stb r7, 0x28(r1)
/* 8014BF2C 00148E6C  38 80 00 00 */	li r4, 0
/* 8014BF30 00148E70  98 E1 00 29 */	stb r7, 0x29(r1)
/* 8014BF34 00148E74  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8014BF38 00148E78  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8014BF3C 00148E7C  98 E1 00 28 */	stb r7, 0x28(r1)
/* 8014BF40 00148E80  98 E1 00 29 */	stb r7, 0x29(r1)
/* 8014BF44 00148E84  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8014BF48 00148E88  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8014BF4C 00148E8C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014BF50 00148E90  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014BF54 00148E94  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014BF58 00148E98  48 30 9B 6D */	bl get__Q23Sys11DrawBuffersFi
/* 8014BF5C 00148E9C  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BF60 00148EA0  48 30 98 5D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BF64 00148EA4  38 1F 01 64 */	addi r0, r31, 0x164
/* 8014BF68 00148EA8  38 60 00 01 */	li r3, 1
/* 8014BF6C 00148EAC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014BF70 00148EB0  38 80 00 01 */	li r4, 1
/* 8014BF74 00148EB4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014BF78 00148EB8  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014BF7C 00148EBC  48 30 9B 49 */	bl get__Q23Sys11DrawBuffersFi
/* 8014BF80 00148EC0  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BF84 00148EC4  48 30 98 39 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BF88 00148EC8  38 80 00 01 */	li r4, 1
/* 8014BF8C 00148ECC  38 62 A1 8C */	addi r3, r2, lbl_805184EC@sda21
/* 8014BF90 00148ED0  38 00 00 05 */	li r0, 5
/* 8014BF94 00148ED4  90 81 00 24 */	stw r4, 0x24(r1)
/* 8014BF98 00148ED8  38 80 00 02 */	li r4, 2
/* 8014BF9C 00148EDC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8014BFA0 00148EE0  90 01 00 30 */	stw r0, 0x30(r1)
/* 8014BFA4 00148EE4  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014BFA8 00148EE8  48 30 9B 1D */	bl get__Q23Sys11DrawBuffersFi
/* 8014BFAC 00148EEC  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BFB0 00148EF0  48 30 98 0D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BFB4 00148EF4  38 80 00 01 */	li r4, 1
/* 8014BFB8 00148EF8  38 62 A1 90 */	addi r3, r2, lbl_805184F0@sda21
/* 8014BFBC 00148EFC  38 00 00 00 */	li r0, 0
/* 8014BFC0 00148F00  90 81 00 24 */	stw r4, 0x24(r1)
/* 8014BFC4 00148F04  38 80 00 03 */	li r4, 3
/* 8014BFC8 00148F08  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8014BFCC 00148F0C  90 01 00 30 */	stw r0, 0x30(r1)
/* 8014BFD0 00148F10  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014BFD4 00148F14  48 30 9A F1 */	bl get__Q23Sys11DrawBuffersFi
/* 8014BFD8 00148F18  38 81 00 24 */	addi r4, r1, 0x24
/* 8014BFDC 00148F1C  48 30 97 E1 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014BFE0 00148F20  38 60 00 01 */	li r3, 1
/* 8014BFE4 00148F24  38 02 A1 98 */	addi r0, r2, lbl_805184F8@sda21
/* 8014BFE8 00148F28  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014BFEC 00148F2C  38 80 00 04 */	li r4, 4
/* 8014BFF0 00148F30  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014BFF4 00148F34  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014BFF8 00148F38  48 30 9A CD */	bl get__Q23Sys11DrawBuffersFi
/* 8014BFFC 00148F3C  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C000 00148F40  48 30 97 BD */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C004 00148F44  38 60 00 01 */	li r3, 1
/* 8014C008 00148F48  38 02 A1 74 */	addi r0, r2, lbl_805184D4@sda21
/* 8014C00C 00148F4C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C010 00148F50  38 80 00 05 */	li r4, 5
/* 8014C014 00148F54  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C018 00148F58  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014C01C 00148F5C  48 30 9A A9 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C020 00148F60  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C024 00148F64  48 30 97 99 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C028 00148F68  38 60 00 01 */	li r3, 1
/* 8014C02C 00148F6C  38 02 A1 A0 */	addi r0, r2, lbl_80518500@sda21
/* 8014C030 00148F70  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C034 00148F74  38 80 00 06 */	li r4, 6
/* 8014C038 00148F78  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C03C 00148F7C  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014C040 00148F80  48 30 9A 85 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C044 00148F84  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C048 00148F88  48 30 97 75 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C04C 00148F8C  38 1F 01 74 */	addi r0, r31, 0x174
/* 8014C050 00148F90  38 60 00 01 */	li r3, 1
/* 8014C054 00148F94  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C058 00148F98  38 80 00 07 */	li r4, 7
/* 8014C05C 00148F9C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C060 00148FA0  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014C064 00148FA4  48 30 9A 61 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C068 00148FA8  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C06C 00148FAC  48 30 97 51 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C070 00148FB0  38 1F 01 80 */	addi r0, r31, 0x180
/* 8014C074 00148FB4  38 60 00 01 */	li r3, 1
/* 8014C078 00148FB8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C07C 00148FBC  38 80 00 08 */	li r4, 8
/* 8014C080 00148FC0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C084 00148FC4  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014C088 00148FC8  48 30 9A 3D */	bl get__Q23Sys11DrawBuffersFi
/* 8014C08C 00148FCC  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C090 00148FD0  48 30 97 2D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C094 00148FD4  38 60 00 01 */	li r3, 1
/* 8014C098 00148FD8  38 02 A1 A8 */	addi r0, r2, lbl_80518508@sda21
/* 8014C09C 00148FDC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014C0A0 00148FE0  38 80 00 09 */	li r4, 9
/* 8014C0A4 00148FE4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8014C0A8 00148FE8  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014C0AC 00148FEC  48 30 9A 19 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C0B0 00148FF0  38 81 00 24 */	addi r4, r1, 0x24
/* 8014C0B4 00148FF4  48 30 97 09 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C0B8 00148FF8  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C0BC 00148FFC  38 80 00 0A */	li r4, 0xa
/* 8014C0C0 00149000  48 30 99 6D */	bl allocate__Q23Sys11DrawBuffersFi
/* 8014C0C4 00149004  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C0C8 00149008  38 02 A1 B0 */	addi r0, r2, lbl_80518510@sda21
/* 8014C0CC 0014900C  39 00 00 00 */	li r8, 0
/* 8014C0D0 00149010  38 E0 00 01 */	li r7, 1
/* 8014C0D4 00149014  90 03 00 14 */	stw r0, 0x14(r3)
/* 8014C0D8 00149018  38 C2 A1 7C */	addi r6, r2, lbl_805184DC@sda21
/* 8014C0DC 0014901C  38 60 00 80 */	li r3, 0x80
/* 8014C0E0 00149020  38 02 A1 84 */	addi r0, r2, lbl_805184E4@sda21
/* 8014C0E4 00149024  99 01 00 14 */	stb r8, 0x14(r1)
/* 8014C0E8 00149028  38 80 00 00 */	li r4, 0
/* 8014C0EC 0014902C  99 01 00 15 */	stb r8, 0x15(r1)
/* 8014C0F0 00149030  99 01 00 14 */	stb r8, 0x14(r1)
/* 8014C0F4 00149034  99 01 00 15 */	stb r8, 0x15(r1)
/* 8014C0F8 00149038  A0 A1 00 14 */	lhz r5, 0x14(r1)
/* 8014C0FC 0014903C  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8014C100 00149040  60 A5 00 01 */	ori r5, r5, 1
/* 8014C104 00149044  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8014C108 00149048  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8014C10C 0014904C  91 01 00 20 */	stw r8, 0x20(r1)
/* 8014C110 00149050  B0 A1 00 14 */	sth r5, 0x14(r1)
/* 8014C114 00149054  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C118 00149058  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C11C 0014905C  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C120 00149060  48 30 99 A5 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C124 00149064  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C128 00149068  48 30 96 95 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C12C 0014906C  38 60 00 01 */	li r3, 1
/* 8014C130 00149070  38 02 A1 84 */	addi r0, r2, lbl_805184E4@sda21
/* 8014C134 00149074  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C138 00149078  38 80 00 01 */	li r4, 1
/* 8014C13C 0014907C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C140 00149080  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C144 00149084  48 30 99 81 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C148 00149088  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C14C 0014908C  48 30 96 71 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C150 00149090  38 60 00 01 */	li r3, 1
/* 8014C154 00149094  38 02 A1 8C */	addi r0, r2, lbl_805184EC@sda21
/* 8014C158 00149098  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C15C 0014909C  38 80 00 02 */	li r4, 2
/* 8014C160 001490A0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C164 001490A4  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C168 001490A8  48 30 99 5D */	bl get__Q23Sys11DrawBuffersFi
/* 8014C16C 001490AC  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C170 001490B0  48 30 96 4D */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C174 001490B4  38 60 00 01 */	li r3, 1
/* 8014C178 001490B8  38 02 A1 90 */	addi r0, r2, lbl_805184F0@sda21
/* 8014C17C 001490BC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C180 001490C0  38 80 00 03 */	li r4, 3
/* 8014C184 001490C4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C188 001490C8  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C18C 001490CC  48 30 99 39 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C190 001490D0  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C194 001490D4  48 30 96 29 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C198 001490D8  38 60 00 01 */	li r3, 1
/* 8014C19C 001490DC  38 02 A1 98 */	addi r0, r2, lbl_805184F8@sda21
/* 8014C1A0 001490E0  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C1A4 001490E4  38 80 00 04 */	li r4, 4
/* 8014C1A8 001490E8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C1AC 001490EC  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C1B0 001490F0  48 30 99 15 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C1B4 001490F4  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C1B8 001490F8  48 30 96 05 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C1BC 001490FC  38 60 00 01 */	li r3, 1
/* 8014C1C0 00149100  38 02 A1 74 */	addi r0, r2, lbl_805184D4@sda21
/* 8014C1C4 00149104  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C1C8 00149108  38 80 00 05 */	li r4, 5
/* 8014C1CC 0014910C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C1D0 00149110  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C1D4 00149114  48 30 98 F1 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C1D8 00149118  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C1DC 0014911C  48 30 95 E1 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C1E0 00149120  38 60 00 01 */	li r3, 1
/* 8014C1E4 00149124  38 02 A1 A0 */	addi r0, r2, lbl_80518500@sda21
/* 8014C1E8 00149128  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C1EC 0014912C  38 80 00 06 */	li r4, 6
/* 8014C1F0 00149130  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C1F4 00149134  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C1F8 00149138  48 30 98 CD */	bl get__Q23Sys11DrawBuffersFi
/* 8014C1FC 0014913C  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C200 00149140  48 30 95 BD */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C204 00149144  38 1F 01 74 */	addi r0, r31, 0x174
/* 8014C208 00149148  38 60 00 01 */	li r3, 1
/* 8014C20C 0014914C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C210 00149150  38 80 00 07 */	li r4, 7
/* 8014C214 00149154  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C218 00149158  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C21C 0014915C  48 30 98 A9 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C220 00149160  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C224 00149164  48 30 95 99 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C228 00149168  38 1F 01 80 */	addi r0, r31, 0x180
/* 8014C22C 0014916C  38 60 00 01 */	li r3, 1
/* 8014C230 00149170  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C234 00149174  38 80 00 08 */	li r4, 8
/* 8014C238 00149178  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C23C 0014917C  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C240 00149180  48 30 98 85 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C244 00149184  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C248 00149188  48 30 95 75 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C24C 0014918C  38 60 00 01 */	li r3, 1
/* 8014C250 00149190  38 02 A1 A8 */	addi r0, r2, lbl_80518508@sda21
/* 8014C254 00149194  90 61 00 10 */	stw r3, 0x10(r1)
/* 8014C258 00149198  38 80 00 09 */	li r4, 9
/* 8014C25C 0014919C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C260 001491A0  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C264 001491A4  48 30 98 61 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C268 001491A8  38 81 00 10 */	addi r4, r1, 0x10
/* 8014C26C 001491AC  48 30 95 51 */	bl create__Q23Sys10DrawBufferFRQ33Sys10DrawBuffer9CreateArg
/* 8014C270 001491B0  80 9E 01 2C */	lwz r4, 0x12c(r30)
/* 8014C274 001491B4  7F C3 F3 78 */	mr r3, r30
/* 8014C278 001491B8  48 01 8D 39 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C27C 001491BC  80 9E 01 30 */	lwz r4, 0x130(r30)
/* 8014C280 001491C0  7F C3 F3 78 */	mr r3, r30
/* 8014C284 001491C4  48 01 8D 2D */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C288 001491C8  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8014C28C 001491CC  38 80 00 00 */	li r4, 0
/* 8014C290 001491D0  48 30 98 35 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C294 001491D4  3C 80 80 51 */	lis r4, j3dSys@ha
/* 8014C298 001491D8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8014C29C 001491DC  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 8014C2A0 001491E0  38 80 00 00 */	li r4, 0
/* 8014C2A4 001491E4  90 03 00 48 */	stw r0, 0x48(r3)
/* 8014C2A8 001491E8  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8014C2AC 001491EC  48 30 98 19 */	bl get__Q23Sys11DrawBuffersFi
/* 8014C2B0 001491F0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8014C2B4 001491F4  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8014C2B8 001491F8  38 83 F2 30 */	addi r4, r3, j3dSys@l
/* 8014C2BC 001491FC  38 61 00 08 */	addi r3, r1, 8
/* 8014C2C0 00149200  90 04 00 4C */	stw r0, 0x4c(r4)
/* 8014C2C4 00149204  38 82 A1 B4 */	addi r4, r2, lbl_80518514@sda21
/* 8014C2C8 00149208  38 A0 00 00 */	li r5, 0
/* 8014C2CC 0014920C  48 2D 5F 65 */	bl __ct__Q26System20FragmentationCheckerFPcb
/* 8014C2D0 00149210  38 61 00 08 */	addi r3, r1, 8
/* 8014C2D4 00149214  38 80 FF FF */	li r4, -1
/* 8014C2D8 00149218  48 2D 5F AD */	bl __dt__Q26System20FragmentationCheckerFv
/* 8014C2DC 0014921C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014C2E0 00149220  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8014C2E4 00149224  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8014C2E8 00149228  7C 08 03 A6 */	mtlr r0
/* 8014C2EC 0014922C  38 21 00 40 */	addi r1, r1, 0x40
/* 8014C2F0 00149230  4E 80 00 20 */	blr 
.endfn initJ3D__Q24Game15BaseGameSectionFv
.endif

.fn initResources__Q24Game15BaseGameSectionFv, global
/* 8014C2F4 00149234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014C2F8 00149238  7C 08 02 A6 */	mflr r0
/* 8014C2FC 0014923C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014C300 00149240  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014C304 00149244  7C 7F 1B 78 */	mr r31, r3
/* 8014C308 00149248  48 00 3E A5 */	bl setupFixMemory__Q24Game15BaseGameSectionFv
/* 8014C30C 0014924C  7F E3 FB 78 */	mr r3, r31
/* 8014C310 00149250  48 00 44 01 */	bl setupFloatMemory__Q24Game15BaseGameSectionFv
/* 8014C314 00149254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014C318 00149258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014C31C 0014925C  7C 08 03 A6 */	mtlr r0
/* 8014C320 00149260  38 21 00 10 */	addi r1, r1, 0x10
/* 8014C324 00149264  4E 80 00 20 */	blr 
.endfn initResources__Q24Game15BaseGameSectionFv

.if version == 0
.fn initViewports__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014C328 00149268  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014C32C 0014926C  7C 08 02 A6 */	mflr r0
/* 8014C330 00149270  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014C334 00149274  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8014C338 00149278  7C 7F 1B 78 */	mr r31, r3
/* 8014C33C 0014927C  38 60 00 18 */	li r3, 0x18
/* 8014C340 00149280  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8014C344 00149284  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8014C348 00149288  7C 9D 23 78 */	mr r29, r4
/* 8014C34C 0014928C  4B ED 7B 59 */	bl __nw__FUl
/* 8014C350 00149290  7C 60 1B 79 */	or. r0, r3, r3
/* 8014C354 00149294  41 82 00 10 */	beq .L_8014C364
/* 8014C358 00149298  7F A4 EB 78 */	mr r4, r29
/* 8014C35C 0014929C  48 2D 8B 35 */	bl __ct__17HorizonalSplitterFP8Graphics
/* 8014C360 001492A0  7C 60 1B 78 */	mr r0, r3
.L_8014C364:
/* 8014C364 001492A4  90 1F 01 18 */	stw r0, 0x138(r31)
/* 8014C368 001492A8  7F E3 FB 78 */	mr r3, r31
/* 8014C36C 001492AC  38 80 00 00 */	li r4, 0
/* 8014C370 001492B0  48 00 38 35 */	bl setSplitter__Q24Game15BaseGameSectionFb
/* 8014C374 001492B4  83 DF 01 04 */	lwz r30, 0x124(r31)
/* 8014C378 001492B8  7F A3 EB 78 */	mr r3, r29
/* 8014C37C 001492BC  38 80 00 00 */	li r4, 0
/* 8014C380 001492C0  48 2D 92 71 */	bl getViewport__8GraphicsFi
/* 8014C384 001492C4  93 C3 00 44 */	stw r30, 0x44(r3)
/* 8014C388 001492C8  48 2D 8F 09 */	bl updateCameraAspect__8ViewportFv
/* 8014C38C 001492CC  83 DF 01 08 */	lwz r30, 0x128(r31)
/* 8014C390 001492D0  7F A3 EB 78 */	mr r3, r29
/* 8014C394 001492D4  38 80 00 01 */	li r4, 1
/* 8014C398 001492D8  48 2D 92 59 */	bl getViewport__8GraphicsFi
/* 8014C39C 001492DC  93 C3 00 44 */	stw r30, 0x44(r3)
/* 8014C3A0 001492E0  48 2D 8E F1 */	bl updateCameraAspect__8ViewportFv
/* 8014C3A4 001492E4  7F A3 EB 78 */	mr r3, r29
/* 8014C3A8 001492E8  38 80 00 00 */	li r4, 0
/* 8014C3AC 001492EC  48 2D 92 45 */	bl getViewport__8GraphicsFi
/* 8014C3B0 001492F0  7C 64 1B 78 */	mr r4, r3
/* 8014C3B4 001492F4  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014C3B8 001492F8  38 A0 00 00 */	li r5, 0
/* 8014C3BC 001492FC  48 0F 52 9D */	bl setViewport__Q24Game9ShadowMgrFP8Viewporti
/* 8014C3C0 00149300  7F A3 EB 78 */	mr r3, r29
/* 8014C3C4 00149304  38 80 00 01 */	li r4, 1
/* 8014C3C8 00149308  48 2D 92 29 */	bl getViewport__8GraphicsFi
/* 8014C3CC 0014930C  7C 64 1B 78 */	mr r4, r3
/* 8014C3D0 00149310  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014C3D4 00149314  38 A0 00 01 */	li r5, 1
/* 8014C3D8 00149318  48 0F 52 81 */	bl setViewport__Q24Game9ShadowMgrFP8Viewporti
/* 8014C3DC 0014931C  7F A3 EB 78 */	mr r3, r29
/* 8014C3E0 00149320  38 80 00 00 */	li r4, 0
/* 8014C3E4 00149324  48 2D 92 0D */	bl getViewport__8GraphicsFi
/* 8014C3E8 00149328  7C 64 1B 78 */	mr r4, r3
/* 8014C3EC 0014932C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014C3F0 00149330  38 A0 00 00 */	li r5, 0
/* 8014C3F4 00149334  48 10 5A 51 */	bl setViewport__Q24Game9CameraMgrFP8Viewporti
/* 8014C3F8 00149338  7F A3 EB 78 */	mr r3, r29
/* 8014C3FC 0014933C  38 80 00 01 */	li r4, 1
/* 8014C400 00149340  48 2D 91 F1 */	bl getViewport__8GraphicsFi
/* 8014C404 00149344  7C 64 1B 78 */	mr r4, r3
/* 8014C408 00149348  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014C40C 0014934C  38 A0 00 01 */	li r5, 1
/* 8014C410 00149350  48 10 5A 35 */	bl setViewport__Q24Game9CameraMgrFP8Viewporti
/* 8014C414 00149354  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014C418 00149358  38 80 00 00 */	li r4, 0
/* 8014C41C 0014935C  48 10 5A D1 */	bl init__Q24Game9CameraMgrFi
/* 8014C420 00149360  38 60 01 B0 */	li r3, 0x1b0
/* 8014C424 00149364  4B ED 7A 81 */	bl __nw__FUl
/* 8014C428 00149368  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014C42C 0014936C  41 82 00 14 */	beq .L_8014C440
/* 8014C430 00149370  48 2C F0 69 */	bl __ct__12LookAtCameraFv
/* 8014C434 00149374  3C 60 80 4C */	lis r3, __vt__Q34Game15BaseGameSection10ZoomCamera@ha
/* 8014C438 00149378  38 03 16 94 */	addi r0, r3, __vt__Q34Game15BaseGameSection10ZoomCamera@l
/* 8014C43C 0014937C  90 1E 00 00 */	stw r0, 0(r30)
.L_8014C440:
/* 8014C440 00149380  93 DF 01 4C */	stw r30, 0x16c(r31)
/* 8014C444 00149384  38 60 00 58 */	li r3, 0x58
/* 8014C448 00149388  4B ED 7A 5D */	bl __nw__FUl
/* 8014C44C 0014938C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014C450 00149390  41 82 00 0C */	beq .L_8014C45C
/* 8014C454 00149394  48 2D 8C 49 */	bl __ct__8ViewportFv
/* 8014C458 00149398  7C 60 1B 78 */	mr r0, r3
.L_8014C45C:
/* 8014C45C 0014939C  90 1F 01 38 */	stw r0, 0x158(r31)
/* 8014C460 001493A0  38 00 00 02 */	li r0, 2
/* 8014C464 001493A4  80 7F 01 38 */	lwz r3, 0x158(r31)
/* 8014C468 001493A8  B0 03 00 18 */	sth r0, 0x18(r3)
/* 8014C46C 001493AC  48 2D 6D B9 */	bl getRenderModeObj__6SystemFv
/* 8014C470 001493B0  A3 C3 00 04 */	lhz r30, 4(r3)
/* 8014C474 001493B4  48 2D 6D B1 */	bl getRenderModeObj__6SystemFv
/* 8014C478 001493B8  A3 A3 00 06 */	lhz r29, 6(r3)
/* 8014C47C 001493BC  48 2D 6D A9 */	bl getRenderModeObj__6SystemFv
/* 8014C480 001493C0  48 2D 6D A5 */	bl getRenderModeObj__6SystemFv
/* 8014C484 001493C4  C0 62 A1 38 */	lfs f3, lbl_80518498@sda21(r2)
/* 8014C488 001493C8  3C 00 43 30 */	lis r0, 0x4330
/* 8014C48C 001493CC  93 C1 00 1C */	stw r30, 0x1c(r1)
/* 8014C490 001493D0  38 81 00 08 */	addi r4, r1, 8
/* 8014C494 001493D4  FC 80 18 90 */	fmr f4, f3
/* 8014C498 001493D8  C0 02 A1 BC */	lfs f0, lbl_8051851C@sda21(r2)
/* 8014C49C 001493DC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C4A0 001493E0  C8 42 A1 C0 */	lfd f2, lbl_80518520@sda21(r2)
/* 8014C4A4 001493E4  EC 84 00 28 */	fsubs f4, f4, f0
/* 8014C4A8 001493E8  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8014C4AC 001493EC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8014C4B0 001493F0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8014C4B4 001493F4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8014C4B8 001493F8  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8014C4BC 001493FC  EC 23 08 2A */	fadds f1, f3, f1
/* 8014C4C0 00149400  D0 61 00 08 */	stfs f3, 8(r1)
/* 8014C4C4 00149404  EC 00 10 28 */	fsubs f0, f0, f2
/* 8014C4C8 00149408  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8014C4CC 0014940C  EC 04 00 2A */	fadds f0, f4, f0
/* 8014C4D0 00149410  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8014C4D4 00149414  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8014C4D8 00149418  80 7F 01 38 */	lwz r3, 0x158(r31)
/* 8014C4DC 0014941C  48 2D 8E A5 */	bl "setRect__8ViewportFR7Rect<f>"
/* 8014C4E0 00149420  80 7F 01 38 */	lwz r3, 0x158(r31)
/* 8014C4E4 00149424  80 1F 01 4C */	lwz r0, 0x16c(r31)
/* 8014C4E8 00149428  90 03 00 44 */	stw r0, 0x44(r3)
/* 8014C4EC 0014942C  48 2D 8D A5 */	bl updateCameraAspect__8ViewportFv
/* 8014C4F0 00149430  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014C4F4 00149434  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8014C4F8 00149438  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8014C4FC 0014943C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8014C500 00149440  7C 08 03 A6 */	mtlr r0
/* 8014C504 00149444  38 21 00 40 */	addi r1, r1, 0x40
/* 8014C508 00149448  4E 80 00 20 */	blr 
.endfn initViewports__Q24Game15BaseGameSectionFR8Graphics
.else
.fn initViewports__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014C328 00149268  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014C32C 0014926C  7C 08 02 A6 */	mflr r0
/* 8014C330 00149270  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014C334 00149274  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8014C338 00149278  7C 7F 1B 78 */	mr r31, r3
/* 8014C33C 0014927C  38 60 00 18 */	li r3, 0x18
/* 8014C340 00149280  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8014C344 00149284  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8014C348 00149288  7C 9D 23 78 */	mr r29, r4
/* 8014C34C 0014928C  4B ED 7B 59 */	bl __nw__FUl
/* 8014C350 00149290  7C 60 1B 79 */	or. r0, r3, r3
/* 8014C354 00149294  41 82 00 10 */	beq .L_8014C364
/* 8014C358 00149298  7F A4 EB 78 */	mr r4, r29
/* 8014C35C 0014929C  48 2D 8B 35 */	bl __ct__17HorizonalSplitterFP8Graphics
/* 8014C360 001492A0  7C 60 1B 78 */	mr r0, r3
.L_8014C364:
/* 8014C364 001492A4  90 1F 01 18 */	stw r0, 0x118(r31)
/* 8014C368 001492A8  7F E3 FB 78 */	mr r3, r31
/* 8014C36C 001492AC  38 80 00 00 */	li r4, 0
/* 8014C370 001492B0  48 00 38 35 */	bl setSplitter__Q24Game15BaseGameSectionFb
/* 8014C374 001492B4  83 DF 01 04 */	lwz r30, 0x104(r31)
/* 8014C378 001492B8  7F A3 EB 78 */	mr r3, r29
/* 8014C37C 001492BC  38 80 00 00 */	li r4, 0
/* 8014C380 001492C0  48 2D 92 71 */	bl getViewport__8GraphicsFi
/* 8014C384 001492C4  93 C3 00 44 */	stw r30, 0x44(r3)
/* 8014C388 001492C8  48 2D 8F 09 */	bl updateCameraAspect__8ViewportFv
/* 8014C38C 001492CC  83 DF 01 08 */	lwz r30, 0x108(r31)
/* 8014C390 001492D0  7F A3 EB 78 */	mr r3, r29
/* 8014C394 001492D4  38 80 00 01 */	li r4, 1
/* 8014C398 001492D8  48 2D 92 59 */	bl getViewport__8GraphicsFi
/* 8014C39C 001492DC  93 C3 00 44 */	stw r30, 0x44(r3)
/* 8014C3A0 001492E0  48 2D 8E F1 */	bl updateCameraAspect__8ViewportFv
/* 8014C3A4 001492E4  7F A3 EB 78 */	mr r3, r29
/* 8014C3A8 001492E8  38 80 00 00 */	li r4, 0
/* 8014C3AC 001492EC  48 2D 92 45 */	bl getViewport__8GraphicsFi
/* 8014C3B0 001492F0  7C 64 1B 78 */	mr r4, r3
/* 8014C3B4 001492F4  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014C3B8 001492F8  38 A0 00 00 */	li r5, 0
/* 8014C3BC 001492FC  48 0F 52 9D */	bl setViewport__Q24Game9ShadowMgrFP8Viewporti
/* 8014C3C0 00149300  7F A3 EB 78 */	mr r3, r29
/* 8014C3C4 00149304  38 80 00 01 */	li r4, 1
/* 8014C3C8 00149308  48 2D 92 29 */	bl getViewport__8GraphicsFi
/* 8014C3CC 0014930C  7C 64 1B 78 */	mr r4, r3
/* 8014C3D0 00149310  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014C3D4 00149314  38 A0 00 01 */	li r5, 1
/* 8014C3D8 00149318  48 0F 52 81 */	bl setViewport__Q24Game9ShadowMgrFP8Viewporti
/* 8014C3DC 0014931C  7F A3 EB 78 */	mr r3, r29
/* 8014C3E0 00149320  38 80 00 00 */	li r4, 0
/* 8014C3E4 00149324  48 2D 92 0D */	bl getViewport__8GraphicsFi
/* 8014C3E8 00149328  7C 64 1B 78 */	mr r4, r3
/* 8014C3EC 0014932C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014C3F0 00149330  38 A0 00 00 */	li r5, 0
/* 8014C3F4 00149334  48 10 5A 51 */	bl setViewport__Q24Game9CameraMgrFP8Viewporti
/* 8014C3F8 00149338  7F A3 EB 78 */	mr r3, r29
/* 8014C3FC 0014933C  38 80 00 01 */	li r4, 1
/* 8014C400 00149340  48 2D 91 F1 */	bl getViewport__8GraphicsFi
/* 8014C404 00149344  7C 64 1B 78 */	mr r4, r3
/* 8014C408 00149348  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014C40C 0014934C  38 A0 00 01 */	li r5, 1
/* 8014C410 00149350  48 10 5A 35 */	bl setViewport__Q24Game9CameraMgrFP8Viewporti
/* 8014C414 00149354  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014C418 00149358  38 80 00 00 */	li r4, 0
/* 8014C41C 0014935C  48 10 5A D1 */	bl init__Q24Game9CameraMgrFi
/* 8014C420 00149360  38 60 01 B0 */	li r3, 0x1b0
/* 8014C424 00149364  4B ED 7A 81 */	bl __nw__FUl
/* 8014C428 00149368  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014C42C 0014936C  41 82 00 14 */	beq .L_8014C440
/* 8014C430 00149370  48 2C F0 69 */	bl __ct__12LookAtCameraFv
/* 8014C434 00149374  3C 60 80 4C */	lis r3, __vt__Q34Game15BaseGameSection10ZoomCamera@ha
/* 8014C438 00149378  38 03 16 94 */	addi r0, r3, __vt__Q34Game15BaseGameSection10ZoomCamera@l
/* 8014C43C 0014937C  90 1E 00 00 */	stw r0, 0(r30)
.L_8014C440:
/* 8014C440 00149380  93 DF 01 4C */	stw r30, 0x14c(r31)
/* 8014C444 00149384  38 60 00 58 */	li r3, 0x58
/* 8014C448 00149388  4B ED 7A 5D */	bl __nw__FUl
/* 8014C44C 0014938C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014C450 00149390  41 82 00 0C */	beq .L_8014C45C
/* 8014C454 00149394  48 2D 8C 49 */	bl __ct__8ViewportFv
/* 8014C458 00149398  7C 60 1B 78 */	mr r0, r3
.L_8014C45C:
/* 8014C45C 0014939C  90 1F 01 38 */	stw r0, 0x138(r31)
/* 8014C460 001493A0  38 00 00 02 */	li r0, 2
/* 8014C464 001493A4  80 7F 01 38 */	lwz r3, 0x138(r31)
/* 8014C468 001493A8  B0 03 00 18 */	sth r0, 0x18(r3)
/* 8014C46C 001493AC  48 2D 6D B9 */	bl getRenderModeObj__6SystemFv
/* 8014C470 001493B0  A3 C3 00 04 */	lhz r30, 4(r3)
/* 8014C474 001493B4  48 2D 6D B1 */	bl getRenderModeObj__6SystemFv
/* 8014C478 001493B8  A3 A3 00 06 */	lhz r29, 6(r3)
/* 8014C47C 001493BC  48 2D 6D A9 */	bl getRenderModeObj__6SystemFv
/* 8014C480 001493C0  48 2D 6D A5 */	bl getRenderModeObj__6SystemFv
/* 8014C484 001493C4  C0 62 A1 38 */	lfs f3, lbl_80518498@sda21(r2)
/* 8014C488 001493C8  3C 00 43 30 */	lis r0, 0x4330
/* 8014C48C 001493CC  93 C1 00 1C */	stw r30, 0x1c(r1)
/* 8014C490 001493D0  38 81 00 08 */	addi r4, r1, 8
/* 8014C494 001493D4  FC 80 18 90 */	fmr f4, f3
/* 8014C498 001493D8  C0 02 A1 BC */	lfs f0, lbl_8051851C@sda21(r2)
/* 8014C49C 001493DC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014C4A0 001493E0  C8 42 A1 C0 */	lfd f2, lbl_80518520@sda21(r2)
/* 8014C4A4 001493E4  EC 84 00 28 */	fsubs f4, f4, f0
/* 8014C4A8 001493E8  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8014C4AC 001493EC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8014C4B0 001493F0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8014C4B4 001493F4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8014C4B8 001493F8  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8014C4BC 001493FC  EC 23 08 2A */	fadds f1, f3, f1
/* 8014C4C0 00149400  D0 61 00 08 */	stfs f3, 8(r1)
/* 8014C4C4 00149404  EC 00 10 28 */	fsubs f0, f0, f2
/* 8014C4C8 00149408  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8014C4CC 0014940C  EC 04 00 2A */	fadds f0, f4, f0
/* 8014C4D0 00149410  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8014C4D4 00149414  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8014C4D8 00149418  80 7F 01 38 */	lwz r3, 0x138(r31)
/* 8014C4DC 0014941C  48 2D 8E A5 */	bl "setRect__8ViewportFR7Rect<f>"
/* 8014C4E0 00149420  80 7F 01 38 */	lwz r3, 0x138(r31)
/* 8014C4E4 00149424  80 1F 01 4C */	lwz r0, 0x14c(r31)
/* 8014C4E8 00149428  90 03 00 44 */	stw r0, 0x44(r3)
/* 8014C4EC 0014942C  48 2D 8D A5 */	bl updateCameraAspect__8ViewportFv
/* 8014C4F0 00149430  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8014C4F4 00149434  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8014C4F8 00149438  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8014C4FC 0014943C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8014C500 00149440  7C 08 03 A6 */	mtlr r0
/* 8014C504 00149444  38 21 00 40 */	addi r1, r1, 0x40
/* 8014C508 00149448  4E 80 00 20 */	blr 
.endfn initViewports__Q24Game15BaseGameSectionFR8Graphics
.endif

.fn __dt__12LookAtCameraFv, weak
/* 8014C50C 0014944C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014C510 00149450  7C 08 02 A6 */	mflr r0
/* 8014C514 00149454  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014C518 00149458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014C51C 0014945C  7C 9F 23 78 */	mr r31, r4
/* 8014C520 00149460  93 C1 00 08 */	stw r30, 8(r1)
/* 8014C524 00149464  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014C528 00149468  41 82 00 88 */	beq .L_8014C5B0
/* 8014C52C 0014946C  3C 80 80 4F */	lis r4, __vt__12LookAtCamera@ha
/* 8014C530 00149470  38 04 B7 A0 */	addi r0, r4, __vt__12LookAtCamera@l
/* 8014C534 00149474  90 1E 00 00 */	stw r0, 0(r30)
/* 8014C538 00149478  41 82 00 68 */	beq .L_8014C5A0
/* 8014C53C 0014947C  3C 80 80 4F */	lis r4, __vt__6Camera@ha
/* 8014C540 00149480  38 04 B8 20 */	addi r0, r4, __vt__6Camera@l
/* 8014C544 00149484  90 1E 00 00 */	stw r0, 0(r30)
/* 8014C548 00149488  41 82 00 58 */	beq .L_8014C5A0
/* 8014C54C 0014948C  3C 80 80 4F */	lis r4, __vt__11CullFrustum@ha
/* 8014C550 00149490  38 04 B8 9C */	addi r0, r4, __vt__11CullFrustum@l
/* 8014C554 00149494  90 1E 00 00 */	stw r0, 0(r30)
/* 8014C558 00149498  41 82 00 48 */	beq .L_8014C5A0
/* 8014C55C 0014949C  3C 80 80 4B */	lis r4, __vt__9CullPlane@ha
/* 8014C560 001494A0  38 04 0E 94 */	addi r0, r4, __vt__9CullPlane@l
/* 8014C564 001494A4  90 1E 00 00 */	stw r0, 0(r30)
/* 8014C568 001494A8  41 82 00 38 */	beq .L_8014C5A0
/* 8014C56C 001494AC  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8014C570 001494B0  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8014C574 001494B4  90 1E 00 00 */	stw r0, 0(r30)
/* 8014C578 001494B8  41 82 00 28 */	beq .L_8014C5A0
/* 8014C57C 001494BC  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 8014C580 001494C0  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 8014C584 001494C4  90 1E 00 00 */	stw r0, 0(r30)
/* 8014C588 001494C8  41 82 00 18 */	beq .L_8014C5A0
/* 8014C58C 001494CC  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8014C590 001494D0  38 80 00 00 */	li r4, 0
/* 8014C594 001494D4  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8014C598 001494D8  90 1E 00 00 */	stw r0, 0(r30)
/* 8014C59C 001494DC  48 2C 4F ED */	bl __dt__5CNodeFv
.L_8014C5A0:
/* 8014C5A0 001494E0  7F E0 07 35 */	extsh. r0, r31
/* 8014C5A4 001494E4  40 81 00 0C */	ble .L_8014C5B0
/* 8014C5A8 001494E8  7F C3 F3 78 */	mr r3, r30
/* 8014C5AC 001494EC  4B ED 7B 09 */	bl __dl__FPv
.L_8014C5B0:
/* 8014C5B0 001494F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014C5B4 001494F4  7F C3 F3 78 */	mr r3, r30
/* 8014C5B8 001494F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014C5BC 001494FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014C5C0 00149500  7C 08 03 A6 */	mtlr r0
/* 8014C5C4 00149504  38 21 00 10 */	addi r1, r1, 0x10
/* 8014C5C8 00149508  4E 80 00 20 */	blr 
.endfn __dt__12LookAtCameraFv

.if version == 0
.fn initGenerators__Q24Game15BaseGameSectionFv, global
/* 8014C5CC 0014950C  94 21 E3 60 */	stwu r1, -0x1ca0(r1)
/* 8014C5D0 00149510  7C 08 02 A6 */	mflr r0
/* 8014C5D4 00149514  90 01 1C A4 */	stw r0, 0x1ca4(r1)
/* 8014C5D8 00149518  38 00 1C 98 */	li r0, 0x1c98
/* 8014C5DC 0014951C  DB E1 1C 90 */	stfd f31, 0x1c90(r1)
/* 8014C5E0 00149520  13 E1 00 0E */	psq_stx f31, r1, r0, 0, qr0
/* 8014C5E4 00149524  BE 61 1C 5C */	stmw r19, 0x1c5c(r1)
/* 8014C5E8 00149528  7C 7E 1B 78 */	mr r30, r3
/* 8014C5EC 0014952C  3C 80 80 48 */	lis r4, lbl_8047C948@ha
/* 8014C5F0 00149530  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014C5F4 00149534  3B E4 C9 48 */	addi r31, r4, lbl_8047C948@l
/* 8014C5F8 00149538  48 0A 54 91 */	bl clearGeneratorList__Q24Game14GeneratorCacheFv
/* 8014C5FC 0014953C  48 05 E1 DD */	bl initialiseSystem__Q24Game9GeneratorFv
/* 8014C600 00149540  38 60 00 70 */	li r3, 0x70
/* 8014C604 00149544  4B ED 78 A1 */	bl __nw__FUl
/* 8014C608 00149548  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C60C 0014954C  41 82 00 0C */	beq .L_8014C618
/* 8014C610 00149550  48 05 EE 49 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C614 00149554  7C 64 1B 78 */	mr r4, r3
.L_8014C618:
/* 8014C618 00149558  90 8D 93 A8 */	stw r4, generatorMgr__4Game@sda21(r13)
/* 8014C61C 0014955C  38 1F 01 8C */	addi r0, r31, 0x18c
/* 8014C620 00149560  7F C3 F3 78 */	mr r3, r30
/* 8014C624 00149564  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C628 00149568  80 8D 93 A8 */	lwz r4, generatorMgr__4Game@sda21(r13)
/* 8014C62C 0014956C  48 01 89 85 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C630 00149570  38 60 00 70 */	li r3, 0x70
/* 8014C634 00149574  4B ED 78 71 */	bl __nw__FUl
/* 8014C638 00149578  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C63C 0014957C  41 82 00 0C */	beq .L_8014C648
/* 8014C640 00149580  48 05 EE 19 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C644 00149584  7C 64 1B 78 */	mr r4, r3
.L_8014C648:
/* 8014C648 00149588  90 8D 93 AC */	stw r4, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C64C 0014958C  38 1F 01 A0 */	addi r0, r31, 0x1a0
/* 8014C650 00149590  7F C3 F3 78 */	mr r3, r30
/* 8014C654 00149594  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C658 00149598  80 8D 93 AC */	lwz r4, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C65C 0014959C  48 01 89 55 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C660 001495A0  38 60 00 70 */	li r3, 0x70
/* 8014C664 001495A4  4B ED 78 41 */	bl __nw__FUl
/* 8014C668 001495A8  7C 65 1B 79 */	or. r5, r3, r3
/* 8014C66C 001495AC  41 82 00 0C */	beq .L_8014C678
/* 8014C670 001495B0  48 05 ED E9 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C674 001495B4  7C 65 1B 78 */	mr r5, r3
.L_8014C678:
/* 8014C678 001495B8  90 AD 93 B0 */	stw r5, limitGeneratorMgr__4Game@sda21(r13)
/* 8014C67C 001495BC  38 9F 01 B0 */	addi r4, r31, 0x1b0
/* 8014C680 001495C0  38 00 00 01 */	li r0, 1
/* 8014C684 001495C4  7F C3 F3 78 */	mr r3, r30
/* 8014C688 001495C8  90 85 00 14 */	stw r4, 0x14(r5)
/* 8014C68C 001495CC  80 8D 93 B0 */	lwz r4, limitGeneratorMgr__4Game@sda21(r13)
/* 8014C690 001495D0  98 04 00 6C */	stb r0, 0x6c(r4)
/* 8014C694 001495D4  80 8D 93 B0 */	lwz r4, limitGeneratorMgr__4Game@sda21(r13)
/* 8014C698 001495D8  48 01 89 19 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C69C 001495DC  38 60 00 70 */	li r3, 0x70
/* 8014C6A0 001495E0  4B ED 78 05 */	bl __nw__FUl
/* 8014C6A4 001495E4  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C6A8 001495E8  41 82 00 0C */	beq .L_8014C6B4
/* 8014C6AC 001495EC  48 05 ED AD */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C6B0 001495F0  7C 64 1B 78 */	mr r4, r3
.L_8014C6B4:
/* 8014C6B4 001495F4  90 8D 93 B4 */	stw r4, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C6B8 001495F8  38 1F 01 C4 */	addi r0, r31, 0x1c4
/* 8014C6BC 001495FC  7F C3 F3 78 */	mr r3, r30
/* 8014C6C0 00149600  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C6C4 00149604  80 8D 93 B4 */	lwz r4, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C6C8 00149608  48 01 88 E9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C6CC 0014960C  38 60 00 70 */	li r3, 0x70
/* 8014C6D0 00149610  4B ED 77 D5 */	bl __nw__FUl
/* 8014C6D4 00149614  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C6D8 00149618  41 82 00 0C */	beq .L_8014C6E4
/* 8014C6DC 0014961C  48 05 ED 7D */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C6E0 00149620  7C 64 1B 78 */	mr r4, r3
.L_8014C6E4:
/* 8014C6E4 00149624  90 8D 93 B8 */	stw r4, dayGeneratorMgr__4Game@sda21(r13)
/* 8014C6E8 00149628  38 1F 01 D4 */	addi r0, r31, 0x1d4
/* 8014C6EC 0014962C  7F C3 F3 78 */	mr r3, r30
/* 8014C6F0 00149630  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C6F4 00149634  80 8D 93 B8 */	lwz r4, dayGeneratorMgr__4Game@sda21(r13)
/* 8014C6F8 00149638  48 01 88 B9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C6FC 0014963C  38 60 00 14 */	li r3, 0x14
/* 8014C700 00149640  4B ED 77 A5 */	bl __nw__FUl
/* 8014C704 00149644  28 03 00 00 */	cmplwi r3, 0
/* 8014C708 00149648  41 82 00 4C */	beq .L_8014C754
/* 8014C70C 0014964C  3C 80 80 4B */	lis r4, lbl_804B0CC8@ha
/* 8014C710 00149650  3C A0 80 4B */	lis r5, "__vt__25IDelegate1<R10Vector3<f>>"@ha
/* 8014C714 00149654  39 04 0C C8 */	addi r8, r4, lbl_804B0CC8@l
/* 8014C718 00149658  3C 80 80 4B */	lis r4, "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"@ha
/* 8014C71C 0014965C  80 E8 00 00 */	lwz r7, 0(r8)
/* 8014C720 00149660  38 A5 0D F4 */	addi r5, r5, "__vt__25IDelegate1<R10Vector3<f>>"@l
/* 8014C724 00149664  80 C8 00 04 */	lwz r6, 4(r8)
/* 8014C728 00149668  38 04 0D E8 */	addi r0, r4, "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"@l
/* 8014C72C 0014966C  80 88 00 08 */	lwz r4, 8(r8)
/* 8014C730 00149670  90 E1 00 4C */	stw r7, 0x4c(r1)
/* 8014C734 00149674  90 A3 00 00 */	stw r5, 0(r3)
/* 8014C738 00149678  90 03 00 00 */	stw r0, 0(r3)
/* 8014C73C 0014967C  93 C3 00 04 */	stw r30, 4(r3)
/* 8014C740 00149680  90 E3 00 08 */	stw r7, 8(r3)
/* 8014C744 00149684  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8014C748 00149688  90 C1 00 50 */	stw r6, 0x50(r1)
/* 8014C74C 0014968C  90 81 00 54 */	stw r4, 0x54(r1)
/* 8014C750 00149690  90 83 00 10 */	stw r4, 0x10(r3)
.L_8014C754:
/* 8014C754 00149694  90 6D 93 BC */	stw r3, cursorCallback__Q24Game12GeneratorMgr@sda21(r13)
/* 8014C758 00149698  4B FD 81 2D */	bl initialise__Q24Game14GenObjectEnemyFv
/* 8014C75C 0014969C  48 06 06 61 */	bl initialise__Q24Game7GenItemFv
/* 8014C760 001496A0  48 0B 60 C9 */	bl initialise__Q24Game9GenPelletFv
/* 8014C764 001496A4  48 05 FD 85 */	bl initialise__Q24Game13GenObjectPikiFv
/* 8014C768 001496A8  48 06 03 59 */	bl initialise__Q24Game13GenObjectNaviFv
/* 8014C76C 001496AC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014C770 001496B0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8014C774 001496B4  28 00 00 00 */	cmplwi r0, 0
/* 8014C778 001496B8  41 82 07 40 */	beq .L_8014CEB8
/* 8014C77C 001496BC  48 0F 0C A1 */	bl clear__Q24Game17PelletBirthBufferFv
/* 8014C780 001496C0  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014C784 001496C4  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014C788 001496C8  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8014C78C 001496CC  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8014C790 001496D0  48 0A 55 99 */	bl loadGenerators__Q24Game14GeneratorCacheFi
/* 8014C794 001496D4  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014C798 001496D8  48 0A 5A 45 */	bl updateUseList__Q24Game14GeneratorCacheFv
/* 8014C79C 001496DC  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 8014C7A0 001496E0  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C7A4 001496E4  38 9F 01 E4 */	addi r4, r31, 0x1e4
/* 8014C7A8 001496E8  3B A0 00 00 */	li r29, 0
/* 8014C7AC 001496EC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8014C7B0 001496F0  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8014C7B4 001496F4  4C C6 31 82 */	crclr 6
/* 8014C7B8 001496F8  4B F7 AC 81 */	bl sprintf
/* 8014C7BC 001496FC  38 00 00 00 */	li r0, 0
/* 8014C7C0 00149700  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C7C4 00149704  90 01 00 08 */	stw r0, 8(r1)
/* 8014C7C8 00149708  38 80 00 00 */	li r4, 0
/* 8014C7CC 0014970C  38 A0 00 00 */	li r5, 0
/* 8014C7D0 00149710  38 C0 00 00 */	li r6, 0
/* 8014C7D4 00149714  38 E0 00 00 */	li r7, 0
/* 8014C7D8 00149718  39 00 00 02 */	li r8, 2
/* 8014C7DC 0014971C  39 20 00 00 */	li r9, 0
/* 8014C7E0 00149720  39 40 00 00 */	li r10, 0
/* 8014C7E4 00149724  4B ED 29 A5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014C7E8 00149728  7C 74 1B 79 */	or. r20, r3, r3
/* 8014C7EC 0014972C  41 82 00 54 */	beq .L_8014C840
/* 8014C7F0 00149730  7E 84 A3 78 */	mr r4, r20
/* 8014C7F4 00149734  38 61 18 38 */	addi r3, r1, 0x1838
/* 8014C7F8 00149738  38 A0 FF FF */	li r5, -1
/* 8014C7FC 0014973C  48 2C 90 FD */	bl __ct__9RamStreamFPvi
/* 8014C800 00149740  38 00 00 01 */	li r0, 1
/* 8014C804 00149744  2C 00 00 01 */	cmpwi r0, 1
/* 8014C808 00149748  90 01 18 44 */	stw r0, 0x1844(r1)
/* 8014C80C 0014974C  40 82 00 0C */	bne .L_8014C818
/* 8014C810 00149750  38 00 00 00 */	li r0, 0
/* 8014C814 00149754  90 01 1C 4C */	stw r0, 0x1c4c(r1)
.L_8014C818:
/* 8014C818 00149758  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014C81C 0014975C  38 81 18 38 */	addi r4, r1, 0x1838
/* 8014C820 00149760  38 A0 00 00 */	li r5, 0
/* 8014C824 00149764  48 05 F3 F5 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014C828 00149768  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014C82C 0014976C  48 05 EE ED */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014C830 00149770  80 0D 93 A8 */	lwz r0, generatorMgr__4Game@sda21(r13)
/* 8014C834 00149774  3B A0 00 01 */	li r29, 1
/* 8014C838 00149778  92 81 01 98 */	stw r20, 0x198(r1)
/* 8014C83C 0014977C  90 01 00 98 */	stw r0, 0x98(r1)
.L_8014C840:
/* 8014C840 00149780  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 8014C844 00149784  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C848 00149788  38 9F 01 F8 */	addi r4, r31, 0x1f8
/* 8014C84C 0014978C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8014C850 00149790  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8014C854 00149794  4C C6 31 82 */	crclr 6
/* 8014C858 00149798  4B F7 AB E1 */	bl sprintf
/* 8014C85C 0014979C  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C860 001497A0  4B F8 F9 05 */	bl DVDConvertPathToEntrynum
/* 8014C864 001497A4  2C 03 FF FF */	cmpwi r3, -1
/* 8014C868 001497A8  41 82 00 94 */	beq .L_8014C8FC
/* 8014C86C 001497AC  38 00 00 00 */	li r0, 0
/* 8014C870 001497B0  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C874 001497B4  90 01 00 08 */	stw r0, 8(r1)
/* 8014C878 001497B8  38 80 00 00 */	li r4, 0
/* 8014C87C 001497BC  38 A0 00 00 */	li r5, 0
/* 8014C880 001497C0  38 C0 00 00 */	li r6, 0
/* 8014C884 001497C4  38 E0 00 00 */	li r7, 0
/* 8014C888 001497C8  39 00 00 02 */	li r8, 2
/* 8014C88C 001497CC  39 20 00 00 */	li r9, 0
/* 8014C890 001497D0  39 40 00 00 */	li r10, 0
/* 8014C894 001497D4  4B ED 28 F5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014C898 001497D8  7C 74 1B 79 */	or. r20, r3, r3
/* 8014C89C 001497DC  41 82 00 60 */	beq .L_8014C8FC
/* 8014C8A0 001497E0  7E 84 A3 78 */	mr r4, r20
/* 8014C8A4 001497E4  38 61 14 18 */	addi r3, r1, 0x1418
/* 8014C8A8 001497E8  38 A0 FF FF */	li r5, -1
/* 8014C8AC 001497EC  48 2C 90 4D */	bl __ct__9RamStreamFPvi
/* 8014C8B0 001497F0  38 00 00 01 */	li r0, 1
/* 8014C8B4 001497F4  2C 00 00 01 */	cmpwi r0, 1
/* 8014C8B8 001497F8  90 01 14 24 */	stw r0, 0x1424(r1)
/* 8014C8BC 001497FC  40 82 00 0C */	bne .L_8014C8C8
/* 8014C8C0 00149800  38 00 00 00 */	li r0, 0
/* 8014C8C4 00149804  90 01 18 2C */	stw r0, 0x182c(r1)
.L_8014C8C8:
/* 8014C8C8 00149808  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C8CC 0014980C  38 81 14 18 */	addi r4, r1, 0x1418
/* 8014C8D0 00149810  38 A0 00 00 */	li r5, 0
/* 8014C8D4 00149814  48 05 F3 45 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014C8D8 00149818  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C8DC 0014981C  48 05 EE 3D */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014C8E0 00149820  80 0D 93 B4 */	lwz r0, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C8E4 00149824  57 A5 10 3A */	slwi r5, r29, 2
/* 8014C8E8 00149828  38 81 01 98 */	addi r4, r1, 0x198
/* 8014C8EC 0014982C  38 61 00 98 */	addi r3, r1, 0x98
/* 8014C8F0 00149830  7E 84 29 2E */	stwx r20, r4, r5
/* 8014C8F4 00149834  3B BD 00 01 */	addi r29, r29, 1
/* 8014C8F8 00149838  7C 03 29 2E */	stwx r0, r3, r5
.L_8014C8FC:
/* 8014C8FC 0014983C  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014C900 00149840  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014C904 00149844  83 84 00 0C */	lwz r28, 0xc(r4)
/* 8014C908 00149848  80 9C 00 48 */	lwz r4, 0x48(r28)
/* 8014C90C 0014984C  48 09 CD B5 */	bl courseVisited__Q24Game8PlayDataFi
/* 8014C910 00149850  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014C914 00149854  40 82 00 B4 */	bne .L_8014C9C8
/* 8014C918 00149858  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014C91C 0014985C  80 9C 00 48 */	lwz r4, 0x48(r28)
/* 8014C920 00149860  48 09 CA DD */	bl visitCourse__Q24Game8PlayDataFi
/* 8014C924 00149864  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014C928 00149868  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C92C 0014986C  38 9F 02 0C */	addi r4, r31, 0x20c
/* 8014C930 00149870  4C C6 31 82 */	crclr 6
/* 8014C934 00149874  4B F7 AB 05 */	bl sprintf
/* 8014C938 00149878  38 00 00 00 */	li r0, 0
/* 8014C93C 0014987C  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C940 00149880  90 01 00 08 */	stw r0, 8(r1)
/* 8014C944 00149884  38 80 00 00 */	li r4, 0
/* 8014C948 00149888  38 A0 00 00 */	li r5, 0
/* 8014C94C 0014988C  38 C0 00 00 */	li r6, 0
/* 8014C950 00149890  38 E0 00 00 */	li r7, 0
/* 8014C954 00149894  39 00 00 02 */	li r8, 2
/* 8014C958 00149898  39 20 00 00 */	li r9, 0
/* 8014C95C 0014989C  39 40 00 00 */	li r10, 0
/* 8014C960 001498A0  4B ED 28 29 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014C964 001498A4  7C 74 1B 79 */	or. r20, r3, r3
/* 8014C968 001498A8  41 82 00 60 */	beq .L_8014C9C8
/* 8014C96C 001498AC  7E 84 A3 78 */	mr r4, r20
/* 8014C970 001498B0  38 61 0F F8 */	addi r3, r1, 0xff8
/* 8014C974 001498B4  38 A0 FF FF */	li r5, -1
/* 8014C978 001498B8  48 2C 8F 81 */	bl __ct__9RamStreamFPvi
/* 8014C97C 001498BC  38 00 00 01 */	li r0, 1
/* 8014C980 001498C0  2C 00 00 01 */	cmpwi r0, 1
/* 8014C984 001498C4  90 01 10 04 */	stw r0, 0x1004(r1)
/* 8014C988 001498C8  40 82 00 0C */	bne .L_8014C994
/* 8014C98C 001498CC  38 00 00 00 */	li r0, 0
/* 8014C990 001498D0  90 01 14 0C */	stw r0, 0x140c(r1)
.L_8014C994:
/* 8014C994 001498D4  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C998 001498D8  38 81 0F F8 */	addi r4, r1, 0xff8
/* 8014C99C 001498DC  38 A0 00 00 */	li r5, 0
/* 8014C9A0 001498E0  48 05 F2 79 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014C9A4 001498E4  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C9A8 001498E8  48 05 ED 71 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014C9AC 001498EC  80 0D 93 AC */	lwz r0, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C9B0 001498F0  57 A5 10 3A */	slwi r5, r29, 2
/* 8014C9B4 001498F4  38 81 01 98 */	addi r4, r1, 0x198
/* 8014C9B8 001498F8  38 61 00 98 */	addi r3, r1, 0x98
/* 8014C9BC 001498FC  7E 84 29 2E */	stwx r20, r4, r5
/* 8014C9C0 00149900  3B BD 00 01 */	addi r29, r29, 1
/* 8014C9C4 00149904  7C 03 29 2E */	stwx r0, r3, r5
.L_8014C9C8:
/* 8014C9C8 00149908  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014C9CC 0014990C  57 A0 10 3A */	slwi r0, r29, 2
/* 8014C9D0 00149910  3B 01 01 98 */	addi r24, r1, 0x198
/* 8014C9D4 00149914  3B 41 00 98 */	addi r26, r1, 0x98
/* 8014C9D8 00149918  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8014C9DC 0014991C  7F 18 02 14 */	add r24, r24, r0
/* 8014C9E0 00149920  7F 5A 02 14 */	add r26, r26, r0
/* 8014C9E4 00149924  3A A0 00 00 */	li r21, 0
/* 8014C9E8 00149928  83 63 02 18 */	lwz r27, 0x218(r3)
/* 8014C9EC 0014992C  48 00 01 48 */	b .L_8014CB34
.L_8014C9F0:
/* 8014C9F0 00149930  7E A4 AB 78 */	mr r4, r21
/* 8014C9F4 00149934  38 7C 00 50 */	addi r3, r28, 0x50
/* 8014C9F8 00149938  48 2C 4C A5 */	bl getChildAt__5CNodeFi
/* 8014C9FC 0014993C  7C 79 1B 78 */	mr r25, r3
/* 8014CA00 00149940  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8014CA04 00149944  7C 00 D8 00 */	cmpw r0, r27
/* 8014CA08 00149948  41 81 01 28 */	bgt .L_8014CB30
/* 8014CA0C 0014994C  80 19 00 1C */	lwz r0, 0x1c(r25)
/* 8014CA10 00149950  7C 1B 00 00 */	cmpw r27, r0
/* 8014CA14 00149954  41 81 01 1C */	bgt .L_8014CB30
/* 8014CA18 00149958  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CA1C 0014995C  56 A4 04 3E */	clrlwi r4, r21, 0x10
/* 8014CA20 00149960  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CA24 00149964  80 63 00 E4 */	lwz r3, 0xe4(r3)
/* 8014CA28 00149968  54 00 20 36 */	slwi r0, r0, 4
/* 8014CA2C 0014996C  7C 63 02 14 */	add r3, r3, r0
/* 8014CA30 00149970  48 2C F9 CD */	bl isFlag__8BitFlagsFUs
/* 8014CA34 00149974  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CA38 00149978  40 82 00 F8 */	bne .L_8014CB30
/* 8014CA3C 0014997C  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014CA40 00149980  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CA44 00149984  80 D9 00 14 */	lwz r6, 0x14(r25)
/* 8014CA48 00149988  38 9F 02 1C */	addi r4, r31, 0x21c
/* 8014CA4C 0014998C  4C C6 31 82 */	crclr 6
/* 8014CA50 00149990  4B F7 A9 E9 */	bl sprintf
/* 8014CA54 00149994  38 00 00 00 */	li r0, 0
/* 8014CA58 00149998  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CA5C 0014999C  90 01 00 08 */	stw r0, 8(r1)
/* 8014CA60 001499A0  38 80 00 00 */	li r4, 0
/* 8014CA64 001499A4  38 A0 00 00 */	li r5, 0
/* 8014CA68 001499A8  38 C0 00 00 */	li r6, 0
/* 8014CA6C 001499AC  38 E0 00 00 */	li r7, 0
/* 8014CA70 001499B0  39 00 00 02 */	li r8, 2
/* 8014CA74 001499B4  39 20 00 00 */	li r9, 0
/* 8014CA78 001499B8  39 40 00 00 */	li r10, 0
/* 8014CA7C 001499BC  4B ED 27 0D */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014CA80 001499C0  7C 74 1B 79 */	or. r20, r3, r3
/* 8014CA84 001499C4  41 82 00 AC */	beq .L_8014CB30
/* 8014CA88 001499C8  7E 84 A3 78 */	mr r4, r20
/* 8014CA8C 001499CC  38 61 0B D8 */	addi r3, r1, 0xbd8
/* 8014CA90 001499D0  38 A0 FF FF */	li r5, -1
/* 8014CA94 001499D4  48 2C 8E 65 */	bl __ct__9RamStreamFPvi
/* 8014CA98 001499D8  38 00 00 01 */	li r0, 1
/* 8014CA9C 001499DC  2C 00 00 01 */	cmpwi r0, 1
/* 8014CAA0 001499E0  90 01 0B E4 */	stw r0, 0xbe4(r1)
/* 8014CAA4 001499E4  40 82 00 0C */	bne .L_8014CAB0
/* 8014CAA8 001499E8  38 00 00 00 */	li r0, 0
/* 8014CAAC 001499EC  90 01 0F EC */	stw r0, 0xfec(r1)
.L_8014CAB0:
/* 8014CAB0 001499F0  38 60 00 70 */	li r3, 0x70
/* 8014CAB4 001499F4  4B ED 73 F1 */	bl __nw__FUl
/* 8014CAB8 001499F8  7C 76 1B 79 */	or. r22, r3, r3
/* 8014CABC 001499FC  41 82 00 0C */	beq .L_8014CAC8
/* 8014CAC0 00149A00  48 05 E9 99 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014CAC4 00149A04  7C 76 1B 78 */	mr r22, r3
.L_8014CAC8:
/* 8014CAC8 00149A08  38 00 00 01 */	li r0, 1
/* 8014CACC 00149A0C  7E C3 B3 78 */	mr r3, r22
/* 8014CAD0 00149A10  98 16 00 6C */	stb r0, 0x6c(r22)
/* 8014CAD4 00149A14  38 81 0B D8 */	addi r4, r1, 0xbd8
/* 8014CAD8 00149A18  38 A0 00 00 */	li r5, 0
/* 8014CADC 00149A1C  48 05 F1 3D */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014CAE0 00149A20  80 99 00 20 */	lwz r4, 0x20(r25)
/* 8014CAE4 00149A24  7E C3 B3 78 */	mr r3, r22
/* 8014CAE8 00149A28  48 05 EC 15 */	bl setDayLimit__Q24Game12GeneratorMgrFi
/* 8014CAEC 00149A2C  7E C3 B3 78 */	mr r3, r22
/* 8014CAF0 00149A30  48 05 EC 29 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014CAF4 00149A34  92 98 00 00 */	stw r20, 0(r24)
/* 8014CAF8 00149A38  7E C4 B3 78 */	mr r4, r22
/* 8014CAFC 00149A3C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014CB00 00149A40  3B BD 00 01 */	addi r29, r29, 1
/* 8014CB04 00149A44  92 DA 00 00 */	stw r22, 0(r26)
/* 8014CB08 00149A48  3B 5A 00 04 */	addi r26, r26, 4
/* 8014CB0C 00149A4C  3B 18 00 04 */	addi r24, r24, 4
/* 8014CB10 00149A50  48 05 EA 69 */	bl addMgr__Q24Game12GeneratorMgrFPQ24Game12GeneratorMgr
/* 8014CB14 00149A54  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CB18 00149A58  56 A4 04 3E */	clrlwi r4, r21, 0x10
/* 8014CB1C 00149A5C  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CB20 00149A60  80 63 00 E4 */	lwz r3, 0xe4(r3)
/* 8014CB24 00149A64  54 00 20 36 */	slwi r0, r0, 4
/* 8014CB28 00149A68  7C 63 02 14 */	add r3, r3, r0
/* 8014CB2C 00149A6C  48 2C F8 71 */	bl setFlag__8BitFlagsFUs
.L_8014CB30:
/* 8014CB30 00149A70  3A B5 00 01 */	addi r21, r21, 1
.L_8014CB34:
/* 8014CB34 00149A74  80 1C 00 4C */	lwz r0, 0x4c(r28)
/* 8014CB38 00149A78  7C 15 00 00 */	cmpw r21, r0
/* 8014CB3C 00149A7C  41 80 FE B4 */	blt .L_8014C9F0
/* 8014CB40 00149A80  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014CB44 00149A84  3C 80 88 89 */	lis r4, 0x88888889@ha
/* 8014CB48 00149A88  3B 24 88 89 */	addi r25, r4, 0x88888889@l
/* 8014CB4C 00149A8C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8014CB50 00149A90  7C 99 D8 96 */	mulhw r4, r25, r27
/* 8014CB54 00149A94  80 03 02 18 */	lwz r0, 0x218(r3)
/* 8014CB58 00149A98  7C 79 00 96 */	mulhw r3, r25, r0
/* 8014CB5C 00149A9C  7C 84 DA 14 */	add r4, r4, r27
/* 8014CB60 00149AA0  7C 84 26 70 */	srawi r4, r4, 4
/* 8014CB64 00149AA4  7C 03 02 14 */	add r0, r3, r0
/* 8014CB68 00149AA8  54 83 0F FE */	srwi r3, r4, 0x1f
/* 8014CB6C 00149AAC  7C 00 26 70 */	srawi r0, r0, 4
/* 8014CB70 00149AB0  7C 84 1A 14 */	add r4, r4, r3
/* 8014CB74 00149AB4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8014CB78 00149AB8  1C 84 00 1E */	mulli r4, r4, 0x1e
/* 8014CB7C 00149ABC  7C 00 1A 14 */	add r0, r0, r3
/* 8014CB80 00149AC0  2C 00 00 01 */	cmpwi r0, 1
/* 8014CB84 00149AC4  7F 64 D8 50 */	subf r27, r4, r27
/* 8014CB88 00149AC8  41 80 01 BC */	blt .L_8014CD44
/* 8014CB8C 00149ACC  1E A0 00 1E */	mulli r21, r0, 0x1e
/* 8014CB90 00149AD0  57 A0 10 3A */	slwi r0, r29, 2
/* 8014CB94 00149AD4  3A E1 01 98 */	addi r23, r1, 0x198
/* 8014CB98 00149AD8  3A C1 00 98 */	addi r22, r1, 0x98
/* 8014CB9C 00149ADC  7E F7 02 14 */	add r23, r23, r0
/* 8014CBA0 00149AE0  3A 80 00 00 */	li r20, 0
/* 8014CBA4 00149AE4  7E D6 02 14 */	add r22, r22, r0
/* 8014CBA8 00149AE8  48 00 01 90 */	b .L_8014CD38
.L_8014CBAC:
/* 8014CBAC 00149AEC  7E 84 A3 78 */	mr r4, r20
/* 8014CBB0 00149AF0  38 7C 00 78 */	addi r3, r28, 0x78
/* 8014CBB4 00149AF4  48 2C 4A E9 */	bl getChildAt__5CNodeFi
/* 8014CBB8 00149AF8  7C 7A 1B 78 */	mr r26, r3
/* 8014CBBC 00149AFC  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 8014CBC0 00149B00  80 83 00 18 */	lwz r4, 0x18(r3)
/* 8014CBC4 00149B04  7C 79 38 96 */	mulhw r3, r25, r7
/* 8014CBC8 00149B08  7C 19 20 96 */	mulhw r0, r25, r4
/* 8014CBCC 00149B0C  7C 63 3A 14 */	add r3, r3, r7
/* 8014CBD0 00149B10  7C 65 26 70 */	srawi r5, r3, 4
/* 8014CBD4 00149B14  7C 00 22 14 */	add r0, r0, r4
/* 8014CBD8 00149B18  54 A6 0F FE */	srwi r6, r5, 0x1f
/* 8014CBDC 00149B1C  7C 00 26 70 */	srawi r0, r0, 4
/* 8014CBE0 00149B20  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8014CBE4 00149B24  7C A5 32 14 */	add r5, r5, r6
/* 8014CBE8 00149B28  7C 00 1A 14 */	add r0, r0, r3
/* 8014CBEC 00149B2C  1C 00 00 1E */	mulli r0, r0, 0x1e
/* 8014CBF0 00149B30  1C 65 00 1E */	mulli r3, r5, 0x1e
/* 8014CBF4 00149B34  7C 00 20 50 */	subf r0, r0, r4
/* 8014CBF8 00149B38  7C 00 D8 00 */	cmpw r0, r27
/* 8014CBFC 00149B3C  7C 03 38 50 */	subf r0, r3, r7
/* 8014CC00 00149B40  41 81 01 34 */	bgt .L_8014CD34
/* 8014CC04 00149B44  7C 1B 00 00 */	cmpw r27, r0
/* 8014CC08 00149B48  41 81 01 2C */	bgt .L_8014CD34
/* 8014CC0C 00149B4C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CC10 00149B50  56 84 04 3E */	clrlwi r4, r20, 0x10
/* 8014CC14 00149B54  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CC18 00149B58  80 A3 00 E4 */	lwz r5, 0xe4(r3)
/* 8014CC1C 00149B5C  54 03 20 36 */	slwi r3, r0, 4
/* 8014CC20 00149B60  38 63 00 08 */	addi r3, r3, 8
/* 8014CC24 00149B64  7C 65 1A 14 */	add r3, r5, r3
/* 8014CC28 00149B68  48 2C F7 D5 */	bl isFlag__8BitFlagsFUs
/* 8014CC2C 00149B6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CC30 00149B70  40 82 01 04 */	bne .L_8014CD34
/* 8014CC34 00149B74  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014CC38 00149B78  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CC3C 00149B7C  80 DA 00 14 */	lwz r6, 0x14(r26)
/* 8014CC40 00149B80  38 9F 02 2C */	addi r4, r31, 0x22c
/* 8014CC44 00149B84  4C C6 31 82 */	crclr 6
/* 8014CC48 00149B88  4B F7 A7 F1 */	bl sprintf
/* 8014CC4C 00149B8C  38 00 00 00 */	li r0, 0
/* 8014CC50 00149B90  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CC54 00149B94  90 01 00 08 */	stw r0, 8(r1)
/* 8014CC58 00149B98  38 80 00 00 */	li r4, 0
/* 8014CC5C 00149B9C  38 A0 00 00 */	li r5, 0
/* 8014CC60 00149BA0  38 C0 00 00 */	li r6, 0
/* 8014CC64 00149BA4  38 E0 00 00 */	li r7, 0
/* 8014CC68 00149BA8  39 00 00 02 */	li r8, 2
/* 8014CC6C 00149BAC  39 20 00 00 */	li r9, 0
/* 8014CC70 00149BB0  39 40 00 00 */	li r10, 0
/* 8014CC74 00149BB4  4B ED 25 15 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014CC78 00149BB8  7C 78 1B 79 */	or. r24, r3, r3
/* 8014CC7C 00149BBC  41 82 00 B8 */	beq .L_8014CD34
/* 8014CC80 00149BC0  7F 04 C3 78 */	mr r4, r24
/* 8014CC84 00149BC4  38 61 07 B8 */	addi r3, r1, 0x7b8
/* 8014CC88 00149BC8  38 A0 FF FF */	li r5, -1
/* 8014CC8C 00149BCC  48 2C 8C 6D */	bl __ct__9RamStreamFPvi
/* 8014CC90 00149BD0  38 00 00 01 */	li r0, 1
/* 8014CC94 00149BD4  2C 00 00 01 */	cmpwi r0, 1
/* 8014CC98 00149BD8  90 01 07 C4 */	stw r0, 0x7c4(r1)
/* 8014CC9C 00149BDC  40 82 00 0C */	bne .L_8014CCA8
/* 8014CCA0 00149BE0  38 00 00 00 */	li r0, 0
/* 8014CCA4 00149BE4  90 01 0B CC */	stw r0, 0xbcc(r1)
.L_8014CCA8:
/* 8014CCA8 00149BE8  38 60 00 70 */	li r3, 0x70
/* 8014CCAC 00149BEC  4B ED 71 F9 */	bl __nw__FUl
/* 8014CCB0 00149BF0  7C 73 1B 79 */	or. r19, r3, r3
/* 8014CCB4 00149BF4  41 82 00 0C */	beq .L_8014CCC0
/* 8014CCB8 00149BF8  48 05 E7 A1 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014CCBC 00149BFC  7C 73 1B 78 */	mr r19, r3
.L_8014CCC0:
/* 8014CCC0 00149C00  38 00 00 01 */	li r0, 1
/* 8014CCC4 00149C04  7E 63 9B 78 */	mr r3, r19
/* 8014CCC8 00149C08  98 13 00 6C */	stb r0, 0x6c(r19)
/* 8014CCCC 00149C0C  38 81 07 B8 */	addi r4, r1, 0x7b8
/* 8014CCD0 00149C10  38 A0 00 00 */	li r5, 0
/* 8014CCD4 00149C14  48 05 EF 45 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014CCD8 00149C18  80 9A 00 20 */	lwz r4, 0x20(r26)
/* 8014CCDC 00149C1C  7E 63 9B 78 */	mr r3, r19
/* 8014CCE0 00149C20  38 84 FF E2 */	addi r4, r4, -30
/* 8014CCE4 00149C24  7C 84 AA 14 */	add r4, r4, r21
/* 8014CCE8 00149C28  48 05 EA 15 */	bl setDayLimit__Q24Game12GeneratorMgrFi
/* 8014CCEC 00149C2C  7E 63 9B 78 */	mr r3, r19
/* 8014CCF0 00149C30  48 05 EA 29 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014CCF4 00149C34  93 17 00 00 */	stw r24, 0(r23)
/* 8014CCF8 00149C38  7E 64 9B 78 */	mr r4, r19
/* 8014CCFC 00149C3C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014CD00 00149C40  3B BD 00 01 */	addi r29, r29, 1
/* 8014CD04 00149C44  92 76 00 00 */	stw r19, 0(r22)
/* 8014CD08 00149C48  3A D6 00 04 */	addi r22, r22, 4
/* 8014CD0C 00149C4C  3A F7 00 04 */	addi r23, r23, 4
/* 8014CD10 00149C50  48 05 E8 69 */	bl addMgr__Q24Game12GeneratorMgrFPQ24Game12GeneratorMgr
/* 8014CD14 00149C54  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CD18 00149C58  56 84 04 3E */	clrlwi r4, r20, 0x10
/* 8014CD1C 00149C5C  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CD20 00149C60  80 A3 00 E4 */	lwz r5, 0xe4(r3)
/* 8014CD24 00149C64  54 03 20 36 */	slwi r3, r0, 4
/* 8014CD28 00149C68  38 63 00 08 */	addi r3, r3, 8
/* 8014CD2C 00149C6C  7C 65 1A 14 */	add r3, r5, r3
/* 8014CD30 00149C70  48 2C F6 6D */	bl setFlag__8BitFlagsFUs
.L_8014CD34:
/* 8014CD34 00149C74  3A 94 00 01 */	addi r20, r20, 1
.L_8014CD38:
/* 8014CD38 00149C78  80 1C 00 74 */	lwz r0, 0x74(r28)
/* 8014CD3C 00149C7C  7C 14 00 00 */	cmpw r20, r0
/* 8014CD40 00149C80  41 80 FE 6C */	blt .L_8014CBAC
.L_8014CD44:
/* 8014CD44 00149C84  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014CD48 00149C88  3C 60 88 89 */	lis r3, 0x88888889@ha
/* 8014CD4C 00149C8C  38 03 88 89 */	addi r0, r3, 0x88888889@l
/* 8014CD50 00149C90  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014CD54 00149C94  80 C4 00 40 */	lwz r6, 0x40(r4)
/* 8014CD58 00149C98  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CD5C 00149C9C  38 9F 02 38 */	addi r4, r31, 0x238
/* 8014CD60 00149CA0  80 E6 02 18 */	lwz r7, 0x218(r6)
/* 8014CD64 00149CA4  7C 00 38 96 */	mulhw r0, r0, r7
/* 8014CD68 00149CA8  7C 00 3A 14 */	add r0, r0, r7
/* 8014CD6C 00149CAC  7C 00 26 70 */	srawi r0, r0, 4
/* 8014CD70 00149CB0  54 06 0F FE */	srwi r6, r0, 0x1f
/* 8014CD74 00149CB4  7C 00 32 14 */	add r0, r0, r6
/* 8014CD78 00149CB8  1C 00 00 1E */	mulli r0, r0, 0x1e
/* 8014CD7C 00149CBC  7C C0 38 50 */	subf r6, r0, r7
/* 8014CD80 00149CC0  4C C6 31 82 */	crclr 6
/* 8014CD84 00149CC4  4B F7 A6 B5 */	bl sprintf
/* 8014CD88 00149CC8  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CD8C 00149CCC  4B F8 F3 D9 */	bl DVDConvertPathToEntrynum
/* 8014CD90 00149CD0  2C 03 FF FF */	cmpwi r3, -1
/* 8014CD94 00149CD4  41 82 00 94 */	beq .L_8014CE28
/* 8014CD98 00149CD8  38 00 00 00 */	li r0, 0
/* 8014CD9C 00149CDC  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CDA0 00149CE0  90 01 00 08 */	stw r0, 8(r1)
/* 8014CDA4 00149CE4  38 80 00 00 */	li r4, 0
/* 8014CDA8 00149CE8  38 A0 00 00 */	li r5, 0
/* 8014CDAC 00149CEC  38 C0 00 00 */	li r6, 0
/* 8014CDB0 00149CF0  38 E0 00 00 */	li r7, 0
/* 8014CDB4 00149CF4  39 00 00 02 */	li r8, 2
/* 8014CDB8 00149CF8  39 20 00 00 */	li r9, 0
/* 8014CDBC 00149CFC  39 40 00 00 */	li r10, 0
/* 8014CDC0 00149D00  4B ED 23 C9 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014CDC4 00149D04  7C 73 1B 79 */	or. r19, r3, r3
/* 8014CDC8 00149D08  41 82 00 60 */	beq .L_8014CE28
/* 8014CDCC 00149D0C  7E 64 9B 78 */	mr r4, r19
/* 8014CDD0 00149D10  38 61 03 98 */	addi r3, r1, 0x398
/* 8014CDD4 00149D14  38 A0 FF FF */	li r5, -1
/* 8014CDD8 00149D18  48 2C 8B 21 */	bl __ct__9RamStreamFPvi
/* 8014CDDC 00149D1C  38 00 00 01 */	li r0, 1
/* 8014CDE0 00149D20  2C 00 00 01 */	cmpwi r0, 1
/* 8014CDE4 00149D24  90 01 03 A4 */	stw r0, 0x3a4(r1)
/* 8014CDE8 00149D28  40 82 00 0C */	bne .L_8014CDF4
/* 8014CDEC 00149D2C  38 00 00 00 */	li r0, 0
/* 8014CDF0 00149D30  90 01 07 AC */	stw r0, 0x7ac(r1)
.L_8014CDF4:
/* 8014CDF4 00149D34  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014CDF8 00149D38  38 81 03 98 */	addi r4, r1, 0x398
/* 8014CDFC 00149D3C  38 A0 00 00 */	li r5, 0
/* 8014CE00 00149D40  48 05 EE 19 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014CE04 00149D44  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014CE08 00149D48  48 05 E9 11 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014CE0C 00149D4C  80 0D 93 B8 */	lwz r0, dayGeneratorMgr__4Game@sda21(r13)
/* 8014CE10 00149D50  57 A5 10 3A */	slwi r5, r29, 2
/* 8014CE14 00149D54  38 81 01 98 */	addi r4, r1, 0x198
/* 8014CE18 00149D58  38 61 00 98 */	addi r3, r1, 0x98
/* 8014CE1C 00149D5C  7E 64 29 2E */	stwx r19, r4, r5
/* 8014CE20 00149D60  3B BD 00 01 */	addi r29, r29, 1
/* 8014CE24 00149D64  7C 03 29 2E */	stwx r0, r3, r5
.L_8014CE28:
/* 8014CE28 00149D68  80 1E 01 14 */	lwz r0, 0x134(r30)
/* 8014CE2C 00149D6C  38 A0 FF FF */	li r5, -1
/* 8014CE30 00149D70  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8014CE34 00149D74  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8014CE38 00149D78  4B FC 07 C1 */	bl allocateEnemys__Q24Game15GeneralEnemyMgrFUci
/* 8014CE3C 00149D7C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8014CE40 00149D80  4B FC 01 75 */	bl setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
/* 8014CE44 00149D84  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8014CE48 00149D88  48 02 05 61 */	bl setupResources__Q24Game9PelletMgrFv
/* 8014CE4C 00149D8C  3A 9D FF FF */	addi r20, r29, -1
/* 8014CE50 00149D90  3A 61 01 98 */	addi r19, r1, 0x198
/* 8014CE54 00149D94  56 80 10 3A */	slwi r0, r20, 2
/* 8014CE58 00149D98  7E 73 02 14 */	add r19, r19, r0
/* 8014CE5C 00149D9C  48 00 00 14 */	b .L_8014CE70
.L_8014CE60:
/* 8014CE60 00149DA0  80 73 00 00 */	lwz r3, 0(r19)
/* 8014CE64 00149DA4  4B ED 72 75 */	bl __dla__FPv
/* 8014CE68 00149DA8  3A 73 FF FC */	addi r19, r19, -4
/* 8014CE6C 00149DAC  3A 94 FF FF */	addi r20, r20, -1
.L_8014CE70:
/* 8014CE70 00149DB0  2C 14 00 00 */	cmpwi r20, 0
/* 8014CE74 00149DB4  40 80 FF EC */	bge .L_8014CE60
/* 8014CE78 00149DB8  3A 61 00 98 */	addi r19, r1, 0x98
/* 8014CE7C 00149DBC  3A 80 00 00 */	li r20, 0
/* 8014CE80 00149DC0  48 00 00 14 */	b .L_8014CE94
.L_8014CE84:
/* 8014CE84 00149DC4  80 73 00 00 */	lwz r3, 0(r19)
/* 8014CE88 00149DC8  48 05 E7 2D */	bl generate__Q24Game12GeneratorMgrFv
/* 8014CE8C 00149DCC  3A 73 00 04 */	addi r19, r19, 4
/* 8014CE90 00149DD0  3A 94 00 01 */	addi r20, r20, 1
.L_8014CE94:
/* 8014CE94 00149DD4  7C 14 E8 00 */	cmpw r20, r29
/* 8014CE98 00149DD8  41 80 FF EC */	blt .L_8014CE84
/* 8014CE9C 00149DDC  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014CEA0 00149DE0  48 0A 53 89 */	bl createNumberGenerators__Q24Game14GeneratorCacheFv
/* 8014CEA4 00149DE4  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014CEA8 00149DE8  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014CEAC 00149DEC  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8014CEB0 00149DF0  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8014CEB4 00149DF4  48 0A 4F 9D */	bl loadCreatures__Q24Game14GeneratorCacheFi
.L_8014CEB8:
/* 8014CEB8 00149DF8  48 0F 06 61 */	bl birthAll__Q24Game17PelletBirthBufferFv
/* 8014CEBC 00149DFC  38 00 00 00 */	li r0, 0
/* 8014CEC0 00149E00  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014CEC4 00149E04  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 8014CEC8 00149E08  90 01 00 94 */	stw r0, 0x94(r1)
/* 8014CECC 00149E0C  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 8014CED0 00149E10  28 00 00 00 */	cmplwi r0, 0
/* 8014CED4 00149E14  90 81 00 88 */	stw r4, 0x88(r1)
/* 8014CED8 00149E18  3A 60 00 00 */	li r19, 0
/* 8014CEDC 00149E1C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8014CEE0 00149E20  90 61 00 90 */	stw r3, 0x90(r1)
/* 8014CEE4 00149E24  40 82 00 1C */	bne .L_8014CF00
/* 8014CEE8 00149E28  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CEEC 00149E2C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014CEF0 00149E30  7D 89 03 A6 */	mtctr r12
/* 8014CEF4 00149E34  4E 80 04 21 */	bctrl 
/* 8014CEF8 00149E38  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CEFC 00149E3C  48 00 01 48 */	b .L_8014D044
.L_8014CF00:
/* 8014CF00 00149E40  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF04 00149E44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014CF08 00149E48  7D 89 03 A6 */	mtctr r12
/* 8014CF0C 00149E4C  4E 80 04 21 */	bctrl 
/* 8014CF10 00149E50  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CF14 00149E54  48 00 00 58 */	b .L_8014CF6C
.L_8014CF18:
/* 8014CF18 00149E58  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CF1C 00149E5C  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014CF20 00149E60  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF24 00149E64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014CF28 00149E68  7D 89 03 A6 */	mtctr r12
/* 8014CF2C 00149E6C  4E 80 04 21 */	bctrl 
/* 8014CF30 00149E70  7C 64 1B 78 */	mr r4, r3
/* 8014CF34 00149E74  80 61 00 94 */	lwz r3, 0x94(r1)
/* 8014CF38 00149E78  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF3C 00149E7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014CF40 00149E80  7D 89 03 A6 */	mtctr r12
/* 8014CF44 00149E84  4E 80 04 21 */	bctrl 
/* 8014CF48 00149E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CF4C 00149E8C  40 82 00 F8 */	bne .L_8014D044
/* 8014CF50 00149E90  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CF54 00149E94  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014CF58 00149E98  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF5C 00149E9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014CF60 00149EA0  7D 89 03 A6 */	mtctr r12
/* 8014CF64 00149EA4  4E 80 04 21 */	bctrl 
/* 8014CF68 00149EA8  90 61 00 8C */	stw r3, 0x8c(r1)
.L_8014CF6C:
/* 8014CF6C 00149EAC  81 81 00 88 */	lwz r12, 0x88(r1)
/* 8014CF70 00149EB0  38 61 00 88 */	addi r3, r1, 0x88
/* 8014CF74 00149EB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014CF78 00149EB8  7D 89 03 A6 */	mtctr r12
/* 8014CF7C 00149EBC  4E 80 04 21 */	bctrl 
/* 8014CF80 00149EC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CF84 00149EC4  41 82 FF 94 */	beq .L_8014CF18
/* 8014CF88 00149EC8  48 00 00 BC */	b .L_8014D044
.L_8014CF8C:
/* 8014CF8C 00149ECC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8014CF90 00149ED0  3A 73 00 01 */	addi r19, r19, 1
/* 8014CF94 00149ED4  28 00 00 00 */	cmplwi r0, 0
/* 8014CF98 00149ED8  40 82 00 20 */	bne .L_8014CFB8
/* 8014CF9C 00149EDC  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CFA0 00149EE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFA4 00149EE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014CFA8 00149EE8  7D 89 03 A6 */	mtctr r12
/* 8014CFAC 00149EEC  4E 80 04 21 */	bctrl 
/* 8014CFB0 00149EF0  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CFB4 00149EF4  48 00 00 90 */	b .L_8014D044
.L_8014CFB8:
/* 8014CFB8 00149EF8  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CFBC 00149EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFC0 00149F00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014CFC4 00149F04  7D 89 03 A6 */	mtctr r12
/* 8014CFC8 00149F08  4E 80 04 21 */	bctrl 
/* 8014CFCC 00149F0C  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CFD0 00149F10  48 00 00 58 */	b .L_8014D028
.L_8014CFD4:
/* 8014CFD4 00149F14  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CFD8 00149F18  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014CFDC 00149F1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFE0 00149F20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014CFE4 00149F24  7D 89 03 A6 */	mtctr r12
/* 8014CFE8 00149F28  4E 80 04 21 */	bctrl 
/* 8014CFEC 00149F2C  7C 64 1B 78 */	mr r4, r3
/* 8014CFF0 00149F30  80 61 00 94 */	lwz r3, 0x94(r1)
/* 8014CFF4 00149F34  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFF8 00149F38  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014CFFC 00149F3C  7D 89 03 A6 */	mtctr r12
/* 8014D000 00149F40  4E 80 04 21 */	bctrl 
/* 8014D004 00149F44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014D008 00149F48  40 82 00 3C */	bne .L_8014D044
/* 8014D00C 00149F4C  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014D010 00149F50  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014D014 00149F54  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D018 00149F58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D01C 00149F5C  7D 89 03 A6 */	mtctr r12
/* 8014D020 00149F60  4E 80 04 21 */	bctrl 
/* 8014D024 00149F64  90 61 00 8C */	stw r3, 0x8c(r1)
.L_8014D028:
/* 8014D028 00149F68  81 81 00 88 */	lwz r12, 0x88(r1)
/* 8014D02C 00149F6C  38 61 00 88 */	addi r3, r1, 0x88
/* 8014D030 00149F70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014D034 00149F74  7D 89 03 A6 */	mtctr r12
/* 8014D038 00149F78  4E 80 04 21 */	bctrl 
/* 8014D03C 00149F7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014D040 00149F80  41 82 FF 94 */	beq .L_8014CFD4
.L_8014D044:
/* 8014D044 00149F84  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014D048 00149F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D04C 00149F8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014D050 00149F90  7D 89 03 A6 */	mtctr r12
/* 8014D054 00149F94  4E 80 04 21 */	bctrl 
/* 8014D058 00149F98  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014D05C 00149F9C  7C 04 18 40 */	cmplw r4, r3
/* 8014D060 00149FA0  40 82 FF 2C */	bne .L_8014CF8C
/* 8014D064 00149FA4  2C 13 00 01 */	cmpwi r19, 1
/* 8014D068 00149FA8  41 82 04 C8 */	beq .L_8014D530
/* 8014D06C 00149FAC  40 80 00 10 */	bge .L_8014D07C
/* 8014D070 00149FB0  2C 13 00 00 */	cmpwi r19, 0
/* 8014D074 00149FB4  40 80 00 14 */	bge .L_8014D088
/* 8014D078 00149FB8  48 00 06 54 */	b .L_8014D6CC
.L_8014D07C:
/* 8014D07C 00149FBC  2C 13 00 03 */	cmpwi r19, 3
/* 8014D080 00149FC0  40 80 06 4C */	bge .L_8014D6CC
/* 8014D084 00149FC4  48 00 05 E8 */	b .L_8014D66C
.L_8014D088:
/* 8014D088 00149FC8  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D08C 00149FCC  3A C0 00 00 */	li r22, 0
/* 8014D090 00149FD0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D094 00149FD4  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8014D098 00149FD8  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8014D09C 00149FDC  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 8014D0A0 00149FE0  48 01 56 59 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8014D0A4 00149FE4  C0 62 A1 C8 */	lfs f3, lbl_80518528@sda21(r2)
/* 8014D0A8 00149FE8  FF E0 08 90 */	fmr f31, f1
/* 8014D0AC 00149FEC  C0 42 A1 38 */	lfs f2, lbl_80518498@sda21(r2)
/* 8014D0B0 00149FF0  C0 02 A1 CC */	lfs f0, lbl_8051852C@sda21(r2)
/* 8014D0B4 00149FF4  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 8014D0B8 00149FF8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014D0BC 00149FFC  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 8014D0C0 0014A000  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D0C4 0014A004  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014D0C8 0014A008  2C 00 00 01 */	cmpwi r0, 1
/* 8014D0CC 0014A00C  40 82 00 60 */	bne .L_8014D12C
/* 8014D0D0 0014A010  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8014D0D4 0014A014  38 80 00 01 */	li r4, 1
/* 8014D0D8 0014A018  48 02 E9 C5 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8014D0DC 0014A01C  7C 73 1B 79 */	or. r19, r3, r3
/* 8014D0E0 0014A020  40 82 00 18 */	bne .L_8014D0F8
/* 8014D0E4 0014A024  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D0E8 0014A028  38 BF 00 70 */	addi r5, r31, 0x70
/* 8014D0EC 0014A02C  38 80 0A B3 */	li r4, 0xab3
/* 8014D0F0 0014A030  4C C6 31 82 */	crclr 6
/* 8014D0F4 0014A034  4B ED D5 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014D0F8:
/* 8014D0F8 0014A038  7E 64 9B 78 */	mr r4, r19
/* 8014D0FC 0014A03C  38 61 00 40 */	addi r3, r1, 0x40
/* 8014D100 0014A040  81 93 00 00 */	lwz r12, 0(r19)
/* 8014D104 0014A044  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014D108 0014A048  7D 89 03 A6 */	mtctr r12
/* 8014D10C 0014A04C  4E 80 04 21 */	bctrl 
/* 8014D110 0014A050  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8014D114 0014A054  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 8014D118 0014A058  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 8014D11C 0014A05C  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D120 0014A060  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D124 0014A064  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D128 0014A068  48 00 00 E8 */	b .L_8014D210
.L_8014D12C:
/* 8014D12C 0014A06C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D130 0014A070  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D134 0014A074  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D138 0014A078  7D 89 03 A6 */	mtctr r12
/* 8014D13C 0014A07C  4E 80 04 21 */	bctrl 
/* 8014D140 0014A080  28 03 00 00 */	cmplwi r3, 0
/* 8014D144 0014A084  40 82 00 68 */	bne .L_8014D1AC
/* 8014D148 0014A088  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D14C 0014A08C  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D150 0014A090  38 A0 00 00 */	li r5, 0
/* 8014D154 0014A094  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D158 0014A098  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014D15C 0014A09C  7D 89 03 A6 */	mtctr r12
/* 8014D160 0014A0A0  4E 80 04 21 */	bctrl 
/* 8014D164 0014A0A4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D168 0014A0A8  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D16C 0014A0AC  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D170 0014A0B0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D174 0014A0B4  7D 89 03 A6 */	mtctr r12
/* 8014D178 0014A0B8  4E 80 04 21 */	bctrl 
/* 8014D17C 0014A0BC  C0 02 A1 D0 */	lfs f0, lbl_80518530@sda21(r2)
/* 8014D180 0014A0C0  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 8014D184 0014A0C4  C0 42 A1 D4 */	lfs f2, lbl_80518534@sda21(r2)
/* 8014D188 0014A0C8  EC 80 08 2A */	fadds f4, f0, f1
/* 8014D18C 0014A0CC  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 8014D190 0014A0D0  C0 02 A1 D8 */	lfs f0, lbl_80518538@sda21(r2)
/* 8014D194 0014A0D4  EC 43 10 2A */	fadds f2, f3, f2
/* 8014D198 0014A0D8  D0 81 00 80 */	stfs f4, 0x80(r1)
/* 8014D19C 0014A0DC  EC 01 00 2A */	fadds f0, f1, f0
/* 8014D1A0 0014A0E0  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D1A4 0014A0E4  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D1A8 0014A0E8  48 00 00 68 */	b .L_8014D210
.L_8014D1AC:
/* 8014D1AC 0014A0EC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D1B0 0014A0F0  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D1B4 0014A0F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D1B8 0014A0F8  7D 89 03 A6 */	mtctr r12
/* 8014D1BC 0014A0FC  4E 80 04 21 */	bctrl 
/* 8014D1C0 0014A100  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D1C4 0014A104  38 A1 00 28 */	addi r5, r1, 0x28
/* 8014D1C8 0014A108  4B F9 DA 11 */	bl PSMTXMultVec
/* 8014D1CC 0014A10C  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 8014D1D0 0014A110  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D1D4 0014A114  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8014D1D8 0014A118  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8014D1DC 0014A11C  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D1E0 0014A120  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D1E4 0014A124  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D1E8 0014A128  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D1EC 0014A12C  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D1F0 0014A130  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D1F4 0014A134  7D 89 03 A6 */	mtctr r12
/* 8014D1F8 0014A138  4E 80 04 21 */	bctrl 
/* 8014D1FC 0014A13C  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D200 0014A140  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D204 0014A144  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8014D208 0014A148  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8014D20C 0014A14C  D0 01 00 78 */	stfs f0, 0x78(r1)
.L_8014D210:
/* 8014D210 0014A150  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D214 0014A154  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D218 0014A158  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8014D21C 0014A15C  7D 89 03 A6 */	mtctr r12
/* 8014D220 0014A160  4E 80 04 21 */	bctrl 
/* 8014D224 0014A164  38 80 00 00 */	li r4, 0
/* 8014D228 0014A168  7C 74 1B 78 */	mr r20, r3
/* 8014D22C 0014A16C  4B FE DD 9D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8014D230 0014A170  FC 20 F8 90 */	fmr f1, f31
/* 8014D234 0014A174  48 2C 49 9D */	bl roundAng__Ff
/* 8014D238 0014A178  D0 34 01 FC */	stfs f1, 0x1fc(r20)
/* 8014D23C 0014A17C  7E 83 A3 78 */	mr r3, r20
/* 8014D240 0014A180  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D244 0014A184  38 A0 00 00 */	li r5, 0
/* 8014D248 0014A188  80 1E 01 04 */	lwz r0, 0x124(r30)
/* 8014D24C 0014A18C  90 14 02 80 */	stw r0, 0x280(r20)
/* 8014D250 0014A190  90 14 02 84 */	stw r0, 0x284(r20)
/* 8014D254 0014A194  80 1E 01 0C */	lwz r0, 0x12c(r30)
/* 8014D258 0014A198  90 14 02 78 */	stw r0, 0x278(r20)
/* 8014D25C 0014A19C  90 14 02 7C */	stw r0, 0x27c(r20)
/* 8014D260 0014A1A0  4B FE DF 49 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014D264 0014A1A4  7E 83 A3 78 */	mr r3, r20
/* 8014D268 0014A1A8  38 81 00 70 */	addi r4, r1, 0x70
/* 8014D26C 0014A1AC  81 94 00 00 */	lwz r12, 0(r20)
/* 8014D270 0014A1B0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014D274 0014A1B4  7D 89 03 A6 */	mtctr r12
/* 8014D278 0014A1B8  4E 80 04 21 */	bctrl 
/* 8014D27C 0014A1BC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014D280 0014A1C0  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8014D284 0014A1C4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014D288 0014A1C8  41 82 00 14 */	beq .L_8014D29C
/* 8014D28C 0014A1CC  7E 83 A3 78 */	mr r3, r20
/* 8014D290 0014A1D0  4B FF 5A 95 */	bl setDeadLaydown__Q24Game4NaviFv
/* 8014D294 0014A1D4  3A C0 00 01 */	li r22, 1
/* 8014D298 0014A1D8  48 00 00 0C */	b .L_8014D2A4
.L_8014D29C:
/* 8014D29C 0014A1DC  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8014D2A0 0014A1E0  D0 14 02 A0 */	stfs f0, 0x2a0(r20)
.L_8014D2A4:
/* 8014D2A4 0014A1E4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D2A8 0014A1E8  48 01 54 51 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8014D2AC 0014A1EC  C0 62 A1 DC */	lfs f3, lbl_8051853C@sda21(r2)
/* 8014D2B0 0014A1F0  FF E0 08 90 */	fmr f31, f1
/* 8014D2B4 0014A1F4  C0 42 A1 38 */	lfs f2, lbl_80518498@sda21(r2)
/* 8014D2B8 0014A1F8  C0 02 A1 E0 */	lfs f0, lbl_80518540@sda21(r2)
/* 8014D2BC 0014A1FC  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 8014D2C0 0014A200  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014D2C4 0014A204  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 8014D2C8 0014A208  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D2CC 0014A20C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014D2D0 0014A210  2C 00 00 01 */	cmpwi r0, 1
/* 8014D2D4 0014A214  40 82 00 60 */	bne .L_8014D334
/* 8014D2D8 0014A218  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8014D2DC 0014A21C  38 80 00 00 */	li r4, 0
/* 8014D2E0 0014A220  48 02 E7 BD */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8014D2E4 0014A224  7C 73 1B 79 */	or. r19, r3, r3
/* 8014D2E8 0014A228  40 82 00 18 */	bne .L_8014D300
/* 8014D2EC 0014A22C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D2F0 0014A230  38 BF 00 70 */	addi r5, r31, 0x70
/* 8014D2F4 0014A234  38 80 0A E7 */	li r4, 0xae7
/* 8014D2F8 0014A238  4C C6 31 82 */	crclr 6
/* 8014D2FC 0014A23C  4B ED D3 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014D300:
/* 8014D300 0014A240  7E 64 9B 78 */	mr r4, r19
/* 8014D304 0014A244  38 61 00 34 */	addi r3, r1, 0x34
/* 8014D308 0014A248  81 93 00 00 */	lwz r12, 0(r19)
/* 8014D30C 0014A24C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014D310 0014A250  7D 89 03 A6 */	mtctr r12
/* 8014D314 0014A254  4E 80 04 21 */	bctrl 
/* 8014D318 0014A258  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8014D31C 0014A25C  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8014D320 0014A260  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8014D324 0014A264  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D328 0014A268  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D32C 0014A26C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D330 0014A270  48 00 00 E8 */	b .L_8014D418
.L_8014D334:
/* 8014D334 0014A274  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D338 0014A278  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D33C 0014A27C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D340 0014A280  7D 89 03 A6 */	mtctr r12
/* 8014D344 0014A284  4E 80 04 21 */	bctrl 
/* 8014D348 0014A288  28 03 00 00 */	cmplwi r3, 0
/* 8014D34C 0014A28C  40 82 00 68 */	bne .L_8014D3B4
/* 8014D350 0014A290  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D354 0014A294  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D358 0014A298  38 A0 00 00 */	li r5, 0
/* 8014D35C 0014A29C  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D360 0014A2A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014D364 0014A2A4  7D 89 03 A6 */	mtctr r12
/* 8014D368 0014A2A8  4E 80 04 21 */	bctrl 
/* 8014D36C 0014A2AC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D370 0014A2B0  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D374 0014A2B4  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D378 0014A2B8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D37C 0014A2BC  7D 89 03 A6 */	mtctr r12
/* 8014D380 0014A2C0  4E 80 04 21 */	bctrl 
/* 8014D384 0014A2C4  C0 02 A1 D0 */	lfs f0, lbl_80518530@sda21(r2)
/* 8014D388 0014A2C8  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 8014D38C 0014A2CC  C0 42 A1 E4 */	lfs f2, lbl_80518544@sda21(r2)
/* 8014D390 0014A2D0  EC 80 08 2A */	fadds f4, f0, f1
/* 8014D394 0014A2D4  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 8014D398 0014A2D8  C0 02 A1 E8 */	lfs f0, lbl_80518548@sda21(r2)
/* 8014D39C 0014A2DC  EC 43 10 2A */	fadds f2, f3, f2
/* 8014D3A0 0014A2E0  D0 81 00 80 */	stfs f4, 0x80(r1)
/* 8014D3A4 0014A2E4  EC 01 00 2A */	fadds f0, f1, f0
/* 8014D3A8 0014A2E8  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D3AC 0014A2EC  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D3B0 0014A2F0  48 00 00 68 */	b .L_8014D418
.L_8014D3B4:
/* 8014D3B4 0014A2F4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D3B8 0014A2F8  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D3BC 0014A2FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D3C0 0014A300  7D 89 03 A6 */	mtctr r12
/* 8014D3C4 0014A304  4E 80 04 21 */	bctrl 
/* 8014D3C8 0014A308  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D3CC 0014A30C  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8014D3D0 0014A310  4B F9 D8 09 */	bl PSMTXMultVec
/* 8014D3D4 0014A314  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8014D3D8 0014A318  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D3DC 0014A31C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8014D3E0 0014A320  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8014D3E4 0014A324  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D3E8 0014A328  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D3EC 0014A32C  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D3F0 0014A330  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D3F4 0014A334  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D3F8 0014A338  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D3FC 0014A33C  7D 89 03 A6 */	mtctr r12
/* 8014D400 0014A340  4E 80 04 21 */	bctrl 
/* 8014D404 0014A344  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D408 0014A348  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D40C 0014A34C  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8014D410 0014A350  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8014D414 0014A354  D0 01 00 78 */	stfs f0, 0x78(r1)
.L_8014D418:
/* 8014D418 0014A358  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D41C 0014A35C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D420 0014A360  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8014D424 0014A364  7D 89 03 A6 */	mtctr r12
/* 8014D428 0014A368  4E 80 04 21 */	bctrl 
/* 8014D42C 0014A36C  38 80 00 00 */	li r4, 0
/* 8014D430 0014A370  7C 75 1B 78 */	mr r21, r3
/* 8014D434 0014A374  4B FE DB 95 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8014D438 0014A378  80 1E 01 08 */	lwz r0, 0x128(r30)
/* 8014D43C 0014A37C  FC 20 F8 90 */	fmr f1, f31
/* 8014D440 0014A380  90 15 02 80 */	stw r0, 0x280(r21)
/* 8014D444 0014A384  90 15 02 84 */	stw r0, 0x284(r21)
/* 8014D448 0014A388  80 1E 01 10 */	lwz r0, 0x130(r30)
/* 8014D44C 0014A38C  90 15 02 78 */	stw r0, 0x278(r21)
/* 8014D450 0014A390  90 15 02 7C */	stw r0, 0x27c(r21)
/* 8014D454 0014A394  48 2C 47 7D */	bl roundAng__Ff
/* 8014D458 0014A398  D0 35 01 FC */	stfs f1, 0x1fc(r21)
/* 8014D45C 0014A39C  7E A3 AB 78 */	mr r3, r21
/* 8014D460 0014A3A0  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D464 0014A3A4  38 A0 00 00 */	li r5, 0
/* 8014D468 0014A3A8  4B FE DD 41 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014D46C 0014A3AC  7E A3 AB 78 */	mr r3, r21
/* 8014D470 0014A3B0  38 81 00 70 */	addi r4, r1, 0x70
/* 8014D474 0014A3B4  81 95 00 00 */	lwz r12, 0(r21)
/* 8014D478 0014A3B8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014D47C 0014A3BC  7D 89 03 A6 */	mtctr r12
/* 8014D480 0014A3C0  4E 80 04 21 */	bctrl 
/* 8014D484 0014A3C4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014D488 0014A3C8  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8014D48C 0014A3CC  54 00 FF FF */	rlwinm. r0, r0, 0x1f, 0x1f, 0x1f
/* 8014D490 0014A3D0  40 82 00 0C */	bne .L_8014D49C
/* 8014D494 0014A3D4  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8014D498 0014A3D8  D0 15 02 A0 */	stfs f0, 0x2a0(r21)
.L_8014D49C:
/* 8014D49C 0014A3DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014D4A0 0014A3E0  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8014D4A4 0014A3E4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8014D4A8 0014A3E8  41 82 00 10 */	beq .L_8014D4B8
/* 8014D4AC 0014A3EC  7E A3 AB 78 */	mr r3, r21
/* 8014D4B0 0014A3F0  4B FF 58 75 */	bl setDeadLaydown__Q24Game4NaviFv
/* 8014D4B4 0014A3F4  48 00 02 18 */	b .L_8014D6CC
.L_8014D4B8:
/* 8014D4B8 0014A3F8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014D4BC 0014A3FC  38 60 00 00 */	li r3, 0
/* 8014D4C0 0014A400  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8014D4C4 0014A404  2C 00 00 01 */	cmpwi r0, 1
/* 8014D4C8 0014A408  41 82 00 0C */	beq .L_8014D4D4
/* 8014D4CC 0014A40C  2C 00 00 03 */	cmpwi r0, 3
/* 8014D4D0 0014A410  40 82 00 08 */	bne .L_8014D4D8
.L_8014D4D4:
/* 8014D4D4 0014A414  38 60 00 01 */	li r3, 1
.L_8014D4D8:
/* 8014D4D8 0014A418  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014D4DC 0014A41C  40 82 01 F0 */	bne .L_8014D6CC
/* 8014D4E0 0014A420  56 C0 06 3F */	clrlwi. r0, r22, 0x18
/* 8014D4E4 0014A424  40 82 01 E8 */	bne .L_8014D6CC
/* 8014D4E8 0014A428  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8014D4EC 0014A42C  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractFue@ha
/* 8014D4F0 0014A430  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 8014D4F4 0014A434  38 A0 00 00 */	li r5, 0
/* 8014D4F8 0014A438  90 01 00 64 */	stw r0, 0x64(r1)
/* 8014D4FC 0014A43C  38 C3 49 BC */	addi r6, r3, __vt__Q24Game11InteractFue@l
/* 8014D500 0014A440  38 00 00 01 */	li r0, 1
/* 8014D504 0014A444  7E A3 AB 78 */	mr r3, r21
/* 8014D508 0014A448  92 81 00 68 */	stw r20, 0x68(r1)
/* 8014D50C 0014A44C  38 81 00 64 */	addi r4, r1, 0x64
/* 8014D510 0014A450  90 C1 00 64 */	stw r6, 0x64(r1)
/* 8014D514 0014A454  98 A1 00 6C */	stb r5, 0x6c(r1)
/* 8014D518 0014A458  98 01 00 6D */	stb r0, 0x6d(r1)
/* 8014D51C 0014A45C  81 95 00 00 */	lwz r12, 0(r21)
/* 8014D520 0014A460  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8014D524 0014A464  7D 89 03 A6 */	mtctr r12
/* 8014D528 0014A468  4E 80 04 21 */	bctrl 
/* 8014D52C 0014A46C  48 00 01 A0 */	b .L_8014D6CC
.L_8014D530:
/* 8014D530 0014A470  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D534 0014A474  38 BF 02 48 */	addi r5, r31, 0x248
/* 8014D538 0014A478  38 80 0B 25 */	li r4, 0xb25
/* 8014D53C 0014A47C  4C C6 31 82 */	crclr 6
/* 8014D540 0014A480  4B ED D1 01 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8014D544 0014A484  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D548 0014A488  48 01 51 B1 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8014D54C 0014A48C  C0 42 A1 DC */	lfs f2, lbl_8051853C@sda21(r2)
/* 8014D550 0014A490  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014D554 0014A494  C0 02 A1 CC */	lfs f0, lbl_8051852C@sda21(r2)
/* 8014D558 0014A498  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8014D55C 0014A49C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D560 0014A4A0  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 8014D564 0014A4A4  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8014D568 0014A4A8  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D56C 0014A4AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D570 0014A4B0  7D 89 03 A6 */	mtctr r12
/* 8014D574 0014A4B4  4E 80 04 21 */	bctrl 
/* 8014D578 0014A4B8  28 03 00 00 */	cmplwi r3, 0
/* 8014D57C 0014A4BC  40 82 00 18 */	bne .L_8014D594
/* 8014D580 0014A4C0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D584 0014A4C4  38 BF 02 54 */	addi r5, r31, 0x254
/* 8014D588 0014A4C8  38 80 0B 2B */	li r4, 0xb2b
/* 8014D58C 0014A4CC  4C C6 31 82 */	crclr 6
/* 8014D590 0014A4D0  4B ED D0 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014D594:
/* 8014D594 0014A4D4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D598 0014A4D8  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D59C 0014A4DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D5A0 0014A4E0  7D 89 03 A6 */	mtctr r12
/* 8014D5A4 0014A4E4  4E 80 04 21 */	bctrl 
/* 8014D5A8 0014A4E8  38 81 00 58 */	addi r4, r1, 0x58
/* 8014D5AC 0014A4EC  38 A1 00 10 */	addi r5, r1, 0x10
/* 8014D5B0 0014A4F0  4B F9 D6 29 */	bl PSMTXMultVec
/* 8014D5B4 0014A4F4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8014D5B8 0014A4F8  38 81 00 58 */	addi r4, r1, 0x58
/* 8014D5BC 0014A4FC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8014D5C0 0014A500  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8014D5C4 0014A504  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8014D5C8 0014A508  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D5CC 0014A50C  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 8014D5D0 0014A510  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8014D5D4 0014A514  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D5D8 0014A518  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D5DC 0014A51C  7D 89 03 A6 */	mtctr r12
/* 8014D5E0 0014A520  4E 80 04 21 */	bctrl 
/* 8014D5E4 0014A524  C0 02 A1 D0 */	lfs f0, lbl_80518530@sda21(r2)
/* 8014D5E8 0014A528  38 80 00 00 */	li r4, 0
/* 8014D5EC 0014A52C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D5F0 0014A530  EC 00 08 2A */	fadds f0, f0, f1
/* 8014D5F4 0014A534  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8014D5F8 0014A538  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D5FC 0014A53C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D600 0014A540  7D 89 03 A6 */	mtctr r12
/* 8014D604 0014A544  4E 80 04 21 */	bctrl 
/* 8014D608 0014A548  80 1E 01 04 */	lwz r0, 0x124(r30)
/* 8014D60C 0014A54C  90 03 02 80 */	stw r0, 0x280(r3)
/* 8014D610 0014A550  90 03 02 84 */	stw r0, 0x284(r3)
/* 8014D614 0014A554  80 1E 01 0C */	lwz r0, 0x12c(r30)
/* 8014D618 0014A558  90 03 02 78 */	stw r0, 0x278(r3)
/* 8014D61C 0014A55C  90 03 02 7C */	stw r0, 0x27c(r3)
/* 8014D620 0014A560  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D624 0014A564  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D628 0014A568  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8014D62C 0014A56C  7D 89 03 A6 */	mtctr r12
/* 8014D630 0014A570  4E 80 04 21 */	bctrl 
/* 8014D634 0014A574  38 80 00 00 */	li r4, 0
/* 8014D638 0014A578  7C 73 1B 78 */	mr r19, r3
/* 8014D63C 0014A57C  4B FE D9 8D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8014D640 0014A580  80 1E 01 08 */	lwz r0, 0x128(r30)
/* 8014D644 0014A584  7E 63 9B 78 */	mr r3, r19
/* 8014D648 0014A588  38 81 00 58 */	addi r4, r1, 0x58
/* 8014D64C 0014A58C  38 A0 00 00 */	li r5, 0
/* 8014D650 0014A590  90 13 02 80 */	stw r0, 0x280(r19)
/* 8014D654 0014A594  90 13 02 84 */	stw r0, 0x284(r19)
/* 8014D658 0014A598  80 1E 01 10 */	lwz r0, 0x130(r30)
/* 8014D65C 0014A59C  90 13 02 78 */	stw r0, 0x278(r19)
/* 8014D660 0014A5A0  90 13 02 7C */	stw r0, 0x27c(r19)
/* 8014D664 0014A5A4  4B FE DB 45 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014D668 0014A5A8  48 00 00 64 */	b .L_8014D6CC
.L_8014D66C:
/* 8014D66C 0014A5AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D670 0014A5B0  38 80 00 00 */	li r4, 0
/* 8014D674 0014A5B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D678 0014A5B8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D67C 0014A5BC  7D 89 03 A6 */	mtctr r12
/* 8014D680 0014A5C0  4E 80 04 21 */	bctrl 
/* 8014D684 0014A5C4  80 1E 01 04 */	lwz r0, 0x124(r30)
/* 8014D688 0014A5C8  38 80 00 01 */	li r4, 1
/* 8014D68C 0014A5CC  90 03 02 80 */	stw r0, 0x280(r3)
/* 8014D690 0014A5D0  90 03 02 84 */	stw r0, 0x284(r3)
/* 8014D694 0014A5D4  80 1E 01 0C */	lwz r0, 0x12c(r30)
/* 8014D698 0014A5D8  90 03 02 78 */	stw r0, 0x278(r3)
/* 8014D69C 0014A5DC  90 03 02 7C */	stw r0, 0x27c(r3)
/* 8014D6A0 0014A5E0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D6A4 0014A5E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D6A8 0014A5E8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D6AC 0014A5EC  7D 89 03 A6 */	mtctr r12
/* 8014D6B0 0014A5F0  4E 80 04 21 */	bctrl 
/* 8014D6B4 0014A5F4  80 1E 01 08 */	lwz r0, 0x128(r30)
/* 8014D6B8 0014A5F8  90 03 02 80 */	stw r0, 0x280(r3)
/* 8014D6BC 0014A5FC  90 03 02 84 */	stw r0, 0x284(r3)
/* 8014D6C0 0014A600  80 1E 01 10 */	lwz r0, 0x130(r30)
/* 8014D6C4 0014A604  90 03 02 78 */	stw r0, 0x278(r3)
/* 8014D6C8 0014A608  90 03 02 7C */	stw r0, 0x27c(r3)
.L_8014D6CC:
/* 8014D6CC 0014A60C  38 00 1C 98 */	li r0, 0x1c98
/* 8014D6D0 0014A610  13 E1 00 0C */	psq_lx f31, r1, r0, 0, qr0
/* 8014D6D4 0014A614  CB E1 1C 90 */	lfd f31, 0x1c90(r1)
/* 8014D6D8 0014A618  BA 61 1C 5C */	lmw r19, 0x1c5c(r1)
/* 8014D6DC 0014A61C  80 01 1C A4 */	lwz r0, 0x1ca4(r1)
/* 8014D6E0 0014A620  7C 08 03 A6 */	mtlr r0
/* 8014D6E4 0014A624  38 21 1C A0 */	addi r1, r1, 0x1ca0
/* 8014D6E8 0014A628  4E 80 00 20 */	blr 
.endfn initGenerators__Q24Game15BaseGameSectionFv
.else
.fn initGenerators__Q24Game15BaseGameSectionFv, global
/* 8014C5CC 0014950C  94 21 E3 60 */	stwu r1, -0x1ca0(r1)
/* 8014C5D0 00149510  7C 08 02 A6 */	mflr r0
/* 8014C5D4 00149514  90 01 1C A4 */	stw r0, 0x1ca4(r1)
/* 8014C5D8 00149518  38 00 1C 98 */	li r0, 0x1c98
/* 8014C5DC 0014951C  DB E1 1C 90 */	stfd f31, 0x1c90(r1)
/* 8014C5E0 00149520  13 E1 00 0E */	psq_stx f31, r1, r0, 0, qr0
/* 8014C5E4 00149524  BE 61 1C 5C */	stmw r19, 0x1c5c(r1)
/* 8014C5E8 00149528  7C 7E 1B 78 */	mr r30, r3
/* 8014C5EC 0014952C  3C 80 80 48 */	lis r4, lbl_8047C948@ha
/* 8014C5F0 00149530  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014C5F4 00149534  3B E4 C9 48 */	addi r31, r4, lbl_8047C948@l
/* 8014C5F8 00149538  48 0A 54 91 */	bl clearGeneratorList__Q24Game14GeneratorCacheFv
/* 8014C5FC 0014953C  48 05 E1 DD */	bl initialiseSystem__Q24Game9GeneratorFv
/* 8014C600 00149540  38 60 00 70 */	li r3, 0x70
/* 8014C604 00149544  4B ED 78 A1 */	bl __nw__FUl
/* 8014C608 00149548  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C60C 0014954C  41 82 00 0C */	beq .L_8014C618
/* 8014C610 00149550  48 05 EE 49 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C614 00149554  7C 64 1B 78 */	mr r4, r3
.L_8014C618:
/* 8014C618 00149558  90 8D 93 A8 */	stw r4, generatorMgr__4Game@sda21(r13)
/* 8014C61C 0014955C  38 1F 01 8C */	addi r0, r31, 0x18c
/* 8014C620 00149560  7F C3 F3 78 */	mr r3, r30
/* 8014C624 00149564  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C628 00149568  80 8D 93 A8 */	lwz r4, generatorMgr__4Game@sda21(r13)
/* 8014C62C 0014956C  48 01 89 85 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C630 00149570  38 60 00 70 */	li r3, 0x70
/* 8014C634 00149574  4B ED 78 71 */	bl __nw__FUl
/* 8014C638 00149578  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C63C 0014957C  41 82 00 0C */	beq .L_8014C648
/* 8014C640 00149580  48 05 EE 19 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C644 00149584  7C 64 1B 78 */	mr r4, r3
.L_8014C648:
/* 8014C648 00149588  90 8D 93 AC */	stw r4, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C64C 0014958C  38 1F 01 A0 */	addi r0, r31, 0x1a0
/* 8014C650 00149590  7F C3 F3 78 */	mr r3, r30
/* 8014C654 00149594  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C658 00149598  80 8D 93 AC */	lwz r4, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C65C 0014959C  48 01 89 55 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C660 001495A0  38 60 00 70 */	li r3, 0x70
/* 8014C664 001495A4  4B ED 78 41 */	bl __nw__FUl
/* 8014C668 001495A8  7C 65 1B 79 */	or. r5, r3, r3
/* 8014C66C 001495AC  41 82 00 0C */	beq .L_8014C678
/* 8014C670 001495B0  48 05 ED E9 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C674 001495B4  7C 65 1B 78 */	mr r5, r3
.L_8014C678:
/* 8014C678 001495B8  90 AD 93 B0 */	stw r5, limitGeneratorMgr__4Game@sda21(r13)
/* 8014C67C 001495BC  38 9F 01 B0 */	addi r4, r31, 0x1b0
/* 8014C680 001495C0  38 00 00 01 */	li r0, 1
/* 8014C684 001495C4  7F C3 F3 78 */	mr r3, r30
/* 8014C688 001495C8  90 85 00 14 */	stw r4, 0x14(r5)
/* 8014C68C 001495CC  80 8D 93 B0 */	lwz r4, limitGeneratorMgr__4Game@sda21(r13)
/* 8014C690 001495D0  98 04 00 6C */	stb r0, 0x6c(r4)
/* 8014C694 001495D4  80 8D 93 B0 */	lwz r4, limitGeneratorMgr__4Game@sda21(r13)
/* 8014C698 001495D8  48 01 89 19 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C69C 001495DC  38 60 00 70 */	li r3, 0x70
/* 8014C6A0 001495E0  4B ED 78 05 */	bl __nw__FUl
/* 8014C6A4 001495E4  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C6A8 001495E8  41 82 00 0C */	beq .L_8014C6B4
/* 8014C6AC 001495EC  48 05 ED AD */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C6B0 001495F0  7C 64 1B 78 */	mr r4, r3
.L_8014C6B4:
/* 8014C6B4 001495F4  90 8D 93 B4 */	stw r4, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C6B8 001495F8  38 1F 01 C4 */	addi r0, r31, 0x1c4
/* 8014C6BC 001495FC  7F C3 F3 78 */	mr r3, r30
/* 8014C6C0 00149600  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C6C4 00149604  80 8D 93 B4 */	lwz r4, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C6C8 00149608  48 01 88 E9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C6CC 0014960C  38 60 00 70 */	li r3, 0x70
/* 8014C6D0 00149610  4B ED 77 D5 */	bl __nw__FUl
/* 8014C6D4 00149614  7C 64 1B 79 */	or. r4, r3, r3
/* 8014C6D8 00149618  41 82 00 0C */	beq .L_8014C6E4
/* 8014C6DC 0014961C  48 05 ED 7D */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014C6E0 00149620  7C 64 1B 78 */	mr r4, r3
.L_8014C6E4:
/* 8014C6E4 00149624  90 8D 93 B8 */	stw r4, dayGeneratorMgr__4Game@sda21(r13)
/* 8014C6E8 00149628  38 1F 01 D4 */	addi r0, r31, 0x1d4
/* 8014C6EC 0014962C  7F C3 F3 78 */	mr r3, r30
/* 8014C6F0 00149630  90 04 00 14 */	stw r0, 0x14(r4)
/* 8014C6F4 00149634  80 8D 93 B8 */	lwz r4, dayGeneratorMgr__4Game@sda21(r13)
/* 8014C6F8 00149638  48 01 88 B9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014C6FC 0014963C  38 60 00 14 */	li r3, 0x14
/* 8014C700 00149640  4B ED 77 A5 */	bl __nw__FUl
/* 8014C704 00149644  28 03 00 00 */	cmplwi r3, 0
/* 8014C708 00149648  41 82 00 4C */	beq .L_8014C754
/* 8014C70C 0014964C  3C 80 80 4B */	lis r4, lbl_804B0CC8@ha
/* 8014C710 00149650  3C A0 80 4B */	lis r5, "__vt__25IDelegate1<R10Vector3<f>>"@ha
/* 8014C714 00149654  39 04 0C C8 */	addi r8, r4, lbl_804B0CC8@l
/* 8014C718 00149658  3C 80 80 4B */	lis r4, "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"@ha
/* 8014C71C 0014965C  80 E8 00 00 */	lwz r7, 0(r8)
/* 8014C720 00149660  38 A5 0D F4 */	addi r5, r5, "__vt__25IDelegate1<R10Vector3<f>>"@l
/* 8014C724 00149664  80 C8 00 04 */	lwz r6, 4(r8)
/* 8014C728 00149668  38 04 0D E8 */	addi r0, r4, "__vt__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>"@l
/* 8014C72C 0014966C  80 88 00 08 */	lwz r4, 8(r8)
/* 8014C730 00149670  90 E1 00 4C */	stw r7, 0x4c(r1)
/* 8014C734 00149674  90 A3 00 00 */	stw r5, 0(r3)
/* 8014C738 00149678  90 03 00 00 */	stw r0, 0(r3)
/* 8014C73C 0014967C  93 C3 00 04 */	stw r30, 4(r3)
/* 8014C740 00149680  90 E3 00 08 */	stw r7, 8(r3)
/* 8014C744 00149684  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8014C748 00149688  90 C1 00 50 */	stw r6, 0x50(r1)
/* 8014C74C 0014968C  90 81 00 54 */	stw r4, 0x54(r1)
/* 8014C750 00149690  90 83 00 10 */	stw r4, 0x10(r3)
.L_8014C754:
/* 8014C754 00149694  90 6D 93 BC */	stw r3, cursorCallback__Q24Game12GeneratorMgr@sda21(r13)
/* 8014C758 00149698  4B FD 81 2D */	bl initialise__Q24Game14GenObjectEnemyFv
/* 8014C75C 0014969C  48 06 06 61 */	bl initialise__Q24Game7GenItemFv
/* 8014C760 001496A0  48 0B 60 C9 */	bl initialise__Q24Game9GenPelletFv
/* 8014C764 001496A4  48 05 FD 85 */	bl initialise__Q24Game13GenObjectPikiFv
/* 8014C768 001496A8  48 06 03 59 */	bl initialise__Q24Game13GenObjectNaviFv
/* 8014C76C 001496AC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014C770 001496B0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8014C774 001496B4  28 00 00 00 */	cmplwi r0, 0
/* 8014C778 001496B8  41 82 07 40 */	beq .L_8014CEB8
/* 8014C77C 001496BC  48 0F 0C A1 */	bl clear__Q24Game17PelletBirthBufferFv
/* 8014C780 001496C0  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014C784 001496C4  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014C788 001496C8  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8014C78C 001496CC  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8014C790 001496D0  48 0A 55 99 */	bl loadGenerators__Q24Game14GeneratorCacheFi
/* 8014C794 001496D4  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014C798 001496D8  48 0A 5A 45 */	bl updateUseList__Q24Game14GeneratorCacheFv
/* 8014C79C 001496DC  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 8014C7A0 001496E0  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C7A4 001496E4  38 9F 01 E4 */	addi r4, r31, 0x1e4
/* 8014C7A8 001496E8  3B A0 00 00 */	li r29, 0
/* 8014C7AC 001496EC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8014C7B0 001496F0  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8014C7B4 001496F4  4C C6 31 82 */	crclr 6
/* 8014C7B8 001496F8  4B F7 AC 81 */	bl sprintf
/* 8014C7BC 001496FC  38 00 00 00 */	li r0, 0
/* 8014C7C0 00149700  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C7C4 00149704  90 01 00 08 */	stw r0, 8(r1)
/* 8014C7C8 00149708  38 80 00 00 */	li r4, 0
/* 8014C7CC 0014970C  38 A0 00 00 */	li r5, 0
/* 8014C7D0 00149710  38 C0 00 00 */	li r6, 0
/* 8014C7D4 00149714  38 E0 00 00 */	li r7, 0
/* 8014C7D8 00149718  39 00 00 02 */	li r8, 2
/* 8014C7DC 0014971C  39 20 00 00 */	li r9, 0
/* 8014C7E0 00149720  39 40 00 00 */	li r10, 0
/* 8014C7E4 00149724  4B ED 29 A5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014C7E8 00149728  7C 74 1B 79 */	or. r20, r3, r3
/* 8014C7EC 0014972C  41 82 00 54 */	beq .L_8014C840
/* 8014C7F0 00149730  7E 84 A3 78 */	mr r4, r20
/* 8014C7F4 00149734  38 61 18 38 */	addi r3, r1, 0x1838
/* 8014C7F8 00149738  38 A0 FF FF */	li r5, -1
/* 8014C7FC 0014973C  48 2C 90 FD */	bl __ct__9RamStreamFPvi
/* 8014C800 00149740  38 00 00 01 */	li r0, 1
/* 8014C804 00149744  2C 00 00 01 */	cmpwi r0, 1
/* 8014C808 00149748  90 01 18 44 */	stw r0, 0x1844(r1)
/* 8014C80C 0014974C  40 82 00 0C */	bne .L_8014C818
/* 8014C810 00149750  38 00 00 00 */	li r0, 0
/* 8014C814 00149754  90 01 1C 4C */	stw r0, 0x1c4c(r1)
.L_8014C818:
/* 8014C818 00149758  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014C81C 0014975C  38 81 18 38 */	addi r4, r1, 0x1838
/* 8014C820 00149760  38 A0 00 00 */	li r5, 0
/* 8014C824 00149764  48 05 F3 F5 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014C828 00149768  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014C82C 0014976C  48 05 EE ED */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014C830 00149770  80 0D 93 A8 */	lwz r0, generatorMgr__4Game@sda21(r13)
/* 8014C834 00149774  3B A0 00 01 */	li r29, 1
/* 8014C838 00149778  92 81 01 98 */	stw r20, 0x198(r1)
/* 8014C83C 0014977C  90 01 00 98 */	stw r0, 0x98(r1)
.L_8014C840:
/* 8014C840 00149780  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 8014C844 00149784  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C848 00149788  38 9F 01 F8 */	addi r4, r31, 0x1f8
/* 8014C84C 0014978C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8014C850 00149790  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8014C854 00149794  4C C6 31 82 */	crclr 6
/* 8014C858 00149798  4B F7 AB E1 */	bl sprintf
/* 8014C85C 0014979C  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C860 001497A0  4B F8 F9 05 */	bl DVDConvertPathToEntrynum
/* 8014C864 001497A4  2C 03 FF FF */	cmpwi r3, -1
/* 8014C868 001497A8  41 82 00 94 */	beq .L_8014C8FC
/* 8014C86C 001497AC  38 00 00 00 */	li r0, 0
/* 8014C870 001497B0  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C874 001497B4  90 01 00 08 */	stw r0, 8(r1)
/* 8014C878 001497B8  38 80 00 00 */	li r4, 0
/* 8014C87C 001497BC  38 A0 00 00 */	li r5, 0
/* 8014C880 001497C0  38 C0 00 00 */	li r6, 0
/* 8014C884 001497C4  38 E0 00 00 */	li r7, 0
/* 8014C888 001497C8  39 00 00 02 */	li r8, 2
/* 8014C88C 001497CC  39 20 00 00 */	li r9, 0
/* 8014C890 001497D0  39 40 00 00 */	li r10, 0
/* 8014C894 001497D4  4B ED 28 F5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014C898 001497D8  7C 74 1B 79 */	or. r20, r3, r3
/* 8014C89C 001497DC  41 82 00 60 */	beq .L_8014C8FC
/* 8014C8A0 001497E0  7E 84 A3 78 */	mr r4, r20
/* 8014C8A4 001497E4  38 61 14 18 */	addi r3, r1, 0x1418
/* 8014C8A8 001497E8  38 A0 FF FF */	li r5, -1
/* 8014C8AC 001497EC  48 2C 90 4D */	bl __ct__9RamStreamFPvi
/* 8014C8B0 001497F0  38 00 00 01 */	li r0, 1
/* 8014C8B4 001497F4  2C 00 00 01 */	cmpwi r0, 1
/* 8014C8B8 001497F8  90 01 14 24 */	stw r0, 0x1424(r1)
/* 8014C8BC 001497FC  40 82 00 0C */	bne .L_8014C8C8
/* 8014C8C0 00149800  38 00 00 00 */	li r0, 0
/* 8014C8C4 00149804  90 01 18 2C */	stw r0, 0x182c(r1)
.L_8014C8C8:
/* 8014C8C8 00149808  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C8CC 0014980C  38 81 14 18 */	addi r4, r1, 0x1418
/* 8014C8D0 00149810  38 A0 00 00 */	li r5, 0
/* 8014C8D4 00149814  48 05 F3 45 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014C8D8 00149818  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C8DC 0014981C  48 05 EE 3D */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014C8E0 00149820  80 0D 93 B4 */	lwz r0, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014C8E4 00149824  57 A5 10 3A */	slwi r5, r29, 2
/* 8014C8E8 00149828  38 81 01 98 */	addi r4, r1, 0x198
/* 8014C8EC 0014982C  38 61 00 98 */	addi r3, r1, 0x98
/* 8014C8F0 00149830  7E 84 29 2E */	stwx r20, r4, r5
/* 8014C8F4 00149834  3B BD 00 01 */	addi r29, r29, 1
/* 8014C8F8 00149838  7C 03 29 2E */	stwx r0, r3, r5
.L_8014C8FC:
/* 8014C8FC 0014983C  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014C900 00149840  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014C904 00149844  83 84 00 0C */	lwz r28, 0xc(r4)
/* 8014C908 00149848  80 9C 00 48 */	lwz r4, 0x48(r28)
/* 8014C90C 0014984C  48 09 CD B5 */	bl courseVisited__Q24Game8PlayDataFi
/* 8014C910 00149850  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014C914 00149854  40 82 00 B4 */	bne .L_8014C9C8
/* 8014C918 00149858  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014C91C 0014985C  80 9C 00 48 */	lwz r4, 0x48(r28)
/* 8014C920 00149860  48 09 CA DD */	bl visitCourse__Q24Game8PlayDataFi
/* 8014C924 00149864  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014C928 00149868  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C92C 0014986C  38 9F 02 0C */	addi r4, r31, 0x20c
/* 8014C930 00149870  4C C6 31 82 */	crclr 6
/* 8014C934 00149874  4B F7 AB 05 */	bl sprintf
/* 8014C938 00149878  38 00 00 00 */	li r0, 0
/* 8014C93C 0014987C  38 61 02 98 */	addi r3, r1, 0x298
/* 8014C940 00149880  90 01 00 08 */	stw r0, 8(r1)
/* 8014C944 00149884  38 80 00 00 */	li r4, 0
/* 8014C948 00149888  38 A0 00 00 */	li r5, 0
/* 8014C94C 0014988C  38 C0 00 00 */	li r6, 0
/* 8014C950 00149890  38 E0 00 00 */	li r7, 0
/* 8014C954 00149894  39 00 00 02 */	li r8, 2
/* 8014C958 00149898  39 20 00 00 */	li r9, 0
/* 8014C95C 0014989C  39 40 00 00 */	li r10, 0
/* 8014C960 001498A0  4B ED 28 29 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014C964 001498A4  7C 74 1B 79 */	or. r20, r3, r3
/* 8014C968 001498A8  41 82 00 60 */	beq .L_8014C9C8
/* 8014C96C 001498AC  7E 84 A3 78 */	mr r4, r20
/* 8014C970 001498B0  38 61 0F F8 */	addi r3, r1, 0xff8
/* 8014C974 001498B4  38 A0 FF FF */	li r5, -1
/* 8014C978 001498B8  48 2C 8F 81 */	bl __ct__9RamStreamFPvi
/* 8014C97C 001498BC  38 00 00 01 */	li r0, 1
/* 8014C980 001498C0  2C 00 00 01 */	cmpwi r0, 1
/* 8014C984 001498C4  90 01 10 04 */	stw r0, 0x1004(r1)
/* 8014C988 001498C8  40 82 00 0C */	bne .L_8014C994
/* 8014C98C 001498CC  38 00 00 00 */	li r0, 0
/* 8014C990 001498D0  90 01 14 0C */	stw r0, 0x140c(r1)
.L_8014C994:
/* 8014C994 001498D4  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C998 001498D8  38 81 0F F8 */	addi r4, r1, 0xff8
/* 8014C99C 001498DC  38 A0 00 00 */	li r5, 0
/* 8014C9A0 001498E0  48 05 F2 79 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014C9A4 001498E4  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C9A8 001498E8  48 05 ED 71 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014C9AC 001498EC  80 0D 93 AC */	lwz r0, onceGeneratorMgr__4Game@sda21(r13)
/* 8014C9B0 001498F0  57 A5 10 3A */	slwi r5, r29, 2
/* 8014C9B4 001498F4  38 81 01 98 */	addi r4, r1, 0x198
/* 8014C9B8 001498F8  38 61 00 98 */	addi r3, r1, 0x98
/* 8014C9BC 001498FC  7E 84 29 2E */	stwx r20, r4, r5
/* 8014C9C0 00149900  3B BD 00 01 */	addi r29, r29, 1
/* 8014C9C4 00149904  7C 03 29 2E */	stwx r0, r3, r5
.L_8014C9C8:
/* 8014C9C8 00149908  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014C9CC 0014990C  57 A0 10 3A */	slwi r0, r29, 2
/* 8014C9D0 00149910  3B 01 01 98 */	addi r24, r1, 0x198
/* 8014C9D4 00149914  3B 41 00 98 */	addi r26, r1, 0x98
/* 8014C9D8 00149918  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8014C9DC 0014991C  7F 18 02 14 */	add r24, r24, r0
/* 8014C9E0 00149920  7F 5A 02 14 */	add r26, r26, r0
/* 8014C9E4 00149924  3A A0 00 00 */	li r21, 0
/* 8014C9E8 00149928  83 63 02 18 */	lwz r27, 0x218(r3)
/* 8014C9EC 0014992C  48 00 01 48 */	b .L_8014CB34
.L_8014C9F0:
/* 8014C9F0 00149930  7E A4 AB 78 */	mr r4, r21
/* 8014C9F4 00149934  38 7C 00 50 */	addi r3, r28, 0x50
/* 8014C9F8 00149938  48 2C 4C A5 */	bl getChildAt__5CNodeFi
/* 8014C9FC 0014993C  7C 79 1B 78 */	mr r25, r3
/* 8014CA00 00149940  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8014CA04 00149944  7C 00 D8 00 */	cmpw r0, r27
/* 8014CA08 00149948  41 81 01 28 */	bgt .L_8014CB30
/* 8014CA0C 0014994C  80 19 00 1C */	lwz r0, 0x1c(r25)
/* 8014CA10 00149950  7C 1B 00 00 */	cmpw r27, r0
/* 8014CA14 00149954  41 81 01 1C */	bgt .L_8014CB30
/* 8014CA18 00149958  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CA1C 0014995C  56 A4 04 3E */	clrlwi r4, r21, 0x10
/* 8014CA20 00149960  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CA24 00149964  80 63 00 E4 */	lwz r3, 0xe4(r3)
/* 8014CA28 00149968  54 00 20 36 */	slwi r0, r0, 4
/* 8014CA2C 0014996C  7C 63 02 14 */	add r3, r3, r0
/* 8014CA30 00149970  48 2C F9 CD */	bl isFlag__8BitFlagsFUs
/* 8014CA34 00149974  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CA38 00149978  40 82 00 F8 */	bne .L_8014CB30
/* 8014CA3C 0014997C  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014CA40 00149980  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CA44 00149984  80 D9 00 14 */	lwz r6, 0x14(r25)
/* 8014CA48 00149988  38 9F 02 1C */	addi r4, r31, 0x21c
/* 8014CA4C 0014998C  4C C6 31 82 */	crclr 6
/* 8014CA50 00149990  4B F7 A9 E9 */	bl sprintf
/* 8014CA54 00149994  38 00 00 00 */	li r0, 0
/* 8014CA58 00149998  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CA5C 0014999C  90 01 00 08 */	stw r0, 8(r1)
/* 8014CA60 001499A0  38 80 00 00 */	li r4, 0
/* 8014CA64 001499A4  38 A0 00 00 */	li r5, 0
/* 8014CA68 001499A8  38 C0 00 00 */	li r6, 0
/* 8014CA6C 001499AC  38 E0 00 00 */	li r7, 0
/* 8014CA70 001499B0  39 00 00 02 */	li r8, 2
/* 8014CA74 001499B4  39 20 00 00 */	li r9, 0
/* 8014CA78 001499B8  39 40 00 00 */	li r10, 0
/* 8014CA7C 001499BC  4B ED 27 0D */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014CA80 001499C0  7C 74 1B 79 */	or. r20, r3, r3
/* 8014CA84 001499C4  41 82 00 AC */	beq .L_8014CB30
/* 8014CA88 001499C8  7E 84 A3 78 */	mr r4, r20
/* 8014CA8C 001499CC  38 61 0B D8 */	addi r3, r1, 0xbd8
/* 8014CA90 001499D0  38 A0 FF FF */	li r5, -1
/* 8014CA94 001499D4  48 2C 8E 65 */	bl __ct__9RamStreamFPvi
/* 8014CA98 001499D8  38 00 00 01 */	li r0, 1
/* 8014CA9C 001499DC  2C 00 00 01 */	cmpwi r0, 1
/* 8014CAA0 001499E0  90 01 0B E4 */	stw r0, 0xbe4(r1)
/* 8014CAA4 001499E4  40 82 00 0C */	bne .L_8014CAB0
/* 8014CAA8 001499E8  38 00 00 00 */	li r0, 0
/* 8014CAAC 001499EC  90 01 0F EC */	stw r0, 0xfec(r1)
.L_8014CAB0:
/* 8014CAB0 001499F0  38 60 00 70 */	li r3, 0x70
/* 8014CAB4 001499F4  4B ED 73 F1 */	bl __nw__FUl
/* 8014CAB8 001499F8  7C 76 1B 79 */	or. r22, r3, r3
/* 8014CABC 001499FC  41 82 00 0C */	beq .L_8014CAC8
/* 8014CAC0 00149A00  48 05 E9 99 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014CAC4 00149A04  7C 76 1B 78 */	mr r22, r3
.L_8014CAC8:
/* 8014CAC8 00149A08  38 00 00 01 */	li r0, 1
/* 8014CACC 00149A0C  7E C3 B3 78 */	mr r3, r22
/* 8014CAD0 00149A10  98 16 00 6C */	stb r0, 0x6c(r22)
/* 8014CAD4 00149A14  38 81 0B D8 */	addi r4, r1, 0xbd8
/* 8014CAD8 00149A18  38 A0 00 00 */	li r5, 0
/* 8014CADC 00149A1C  48 05 F1 3D */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014CAE0 00149A20  80 99 00 20 */	lwz r4, 0x20(r25)
/* 8014CAE4 00149A24  7E C3 B3 78 */	mr r3, r22
/* 8014CAE8 00149A28  48 05 EC 15 */	bl setDayLimit__Q24Game12GeneratorMgrFi
/* 8014CAEC 00149A2C  7E C3 B3 78 */	mr r3, r22
/* 8014CAF0 00149A30  48 05 EC 29 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014CAF4 00149A34  92 98 00 00 */	stw r20, 0(r24)
/* 8014CAF8 00149A38  7E C4 B3 78 */	mr r4, r22
/* 8014CAFC 00149A3C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014CB00 00149A40  3B BD 00 01 */	addi r29, r29, 1
/* 8014CB04 00149A44  92 DA 00 00 */	stw r22, 0(r26)
/* 8014CB08 00149A48  3B 5A 00 04 */	addi r26, r26, 4
/* 8014CB0C 00149A4C  3B 18 00 04 */	addi r24, r24, 4
/* 8014CB10 00149A50  48 05 EA 69 */	bl addMgr__Q24Game12GeneratorMgrFPQ24Game12GeneratorMgr
/* 8014CB14 00149A54  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CB18 00149A58  56 A4 04 3E */	clrlwi r4, r21, 0x10
/* 8014CB1C 00149A5C  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CB20 00149A60  80 63 00 E4 */	lwz r3, 0xe4(r3)
/* 8014CB24 00149A64  54 00 20 36 */	slwi r0, r0, 4
/* 8014CB28 00149A68  7C 63 02 14 */	add r3, r3, r0
/* 8014CB2C 00149A6C  48 2C F8 71 */	bl setFlag__8BitFlagsFUs
.L_8014CB30:
/* 8014CB30 00149A70  3A B5 00 01 */	addi r21, r21, 1
.L_8014CB34:
/* 8014CB34 00149A74  80 1C 00 4C */	lwz r0, 0x4c(r28)
/* 8014CB38 00149A78  7C 15 00 00 */	cmpw r21, r0
/* 8014CB3C 00149A7C  41 80 FE B4 */	blt .L_8014C9F0
/* 8014CB40 00149A80  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014CB44 00149A84  3C 80 88 89 */	lis r4, 0x88888889@ha
/* 8014CB48 00149A88  3B 24 88 89 */	addi r25, r4, 0x88888889@l
/* 8014CB4C 00149A8C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8014CB50 00149A90  7C 99 D8 96 */	mulhw r4, r25, r27
/* 8014CB54 00149A94  80 03 02 18 */	lwz r0, 0x218(r3)
/* 8014CB58 00149A98  7C 79 00 96 */	mulhw r3, r25, r0
/* 8014CB5C 00149A9C  7C 84 DA 14 */	add r4, r4, r27
/* 8014CB60 00149AA0  7C 84 26 70 */	srawi r4, r4, 4
/* 8014CB64 00149AA4  7C 03 02 14 */	add r0, r3, r0
/* 8014CB68 00149AA8  54 83 0F FE */	srwi r3, r4, 0x1f
/* 8014CB6C 00149AAC  7C 00 26 70 */	srawi r0, r0, 4
/* 8014CB70 00149AB0  7C 84 1A 14 */	add r4, r4, r3
/* 8014CB74 00149AB4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8014CB78 00149AB8  1C 84 00 1E */	mulli r4, r4, 0x1e
/* 8014CB7C 00149ABC  7C 00 1A 14 */	add r0, r0, r3
/* 8014CB80 00149AC0  2C 00 00 01 */	cmpwi r0, 1
/* 8014CB84 00149AC4  7F 64 D8 50 */	subf r27, r4, r27
/* 8014CB88 00149AC8  41 80 01 BC */	blt .L_8014CD44
/* 8014CB8C 00149ACC  1E A0 00 1E */	mulli r21, r0, 0x1e
/* 8014CB90 00149AD0  57 A0 10 3A */	slwi r0, r29, 2
/* 8014CB94 00149AD4  3A E1 01 98 */	addi r23, r1, 0x198
/* 8014CB98 00149AD8  3A C1 00 98 */	addi r22, r1, 0x98
/* 8014CB9C 00149ADC  7E F7 02 14 */	add r23, r23, r0
/* 8014CBA0 00149AE0  3A 80 00 00 */	li r20, 0
/* 8014CBA4 00149AE4  7E D6 02 14 */	add r22, r22, r0
/* 8014CBA8 00149AE8  48 00 01 90 */	b .L_8014CD38
.L_8014CBAC:
/* 8014CBAC 00149AEC  7E 84 A3 78 */	mr r4, r20
/* 8014CBB0 00149AF0  38 7C 00 78 */	addi r3, r28, 0x78
/* 8014CBB4 00149AF4  48 2C 4A E9 */	bl getChildAt__5CNodeFi
/* 8014CBB8 00149AF8  7C 7A 1B 78 */	mr r26, r3
/* 8014CBBC 00149AFC  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 8014CBC0 00149B00  80 83 00 18 */	lwz r4, 0x18(r3)
/* 8014CBC4 00149B04  7C 79 38 96 */	mulhw r3, r25, r7
/* 8014CBC8 00149B08  7C 19 20 96 */	mulhw r0, r25, r4
/* 8014CBCC 00149B0C  7C 63 3A 14 */	add r3, r3, r7
/* 8014CBD0 00149B10  7C 65 26 70 */	srawi r5, r3, 4
/* 8014CBD4 00149B14  7C 00 22 14 */	add r0, r0, r4
/* 8014CBD8 00149B18  54 A6 0F FE */	srwi r6, r5, 0x1f
/* 8014CBDC 00149B1C  7C 00 26 70 */	srawi r0, r0, 4
/* 8014CBE0 00149B20  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8014CBE4 00149B24  7C A5 32 14 */	add r5, r5, r6
/* 8014CBE8 00149B28  7C 00 1A 14 */	add r0, r0, r3
/* 8014CBEC 00149B2C  1C 00 00 1E */	mulli r0, r0, 0x1e
/* 8014CBF0 00149B30  1C 65 00 1E */	mulli r3, r5, 0x1e
/* 8014CBF4 00149B34  7C 00 20 50 */	subf r0, r0, r4
/* 8014CBF8 00149B38  7C 00 D8 00 */	cmpw r0, r27
/* 8014CBFC 00149B3C  7C 03 38 50 */	subf r0, r3, r7
/* 8014CC00 00149B40  41 81 01 34 */	bgt .L_8014CD34
/* 8014CC04 00149B44  7C 1B 00 00 */	cmpw r27, r0
/* 8014CC08 00149B48  41 81 01 2C */	bgt .L_8014CD34
/* 8014CC0C 00149B4C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CC10 00149B50  56 84 04 3E */	clrlwi r4, r20, 0x10
/* 8014CC14 00149B54  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CC18 00149B58  80 A3 00 E4 */	lwz r5, 0xe4(r3)
/* 8014CC1C 00149B5C  54 03 20 36 */	slwi r3, r0, 4
/* 8014CC20 00149B60  38 63 00 08 */	addi r3, r3, 8
/* 8014CC24 00149B64  7C 65 1A 14 */	add r3, r5, r3
/* 8014CC28 00149B68  48 2C F7 D5 */	bl isFlag__8BitFlagsFUs
/* 8014CC2C 00149B6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CC30 00149B70  40 82 01 04 */	bne .L_8014CD34
/* 8014CC34 00149B74  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014CC38 00149B78  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CC3C 00149B7C  80 DA 00 14 */	lwz r6, 0x14(r26)
/* 8014CC40 00149B80  38 9F 02 2C */	addi r4, r31, 0x22c
/* 8014CC44 00149B84  4C C6 31 82 */	crclr 6
/* 8014CC48 00149B88  4B F7 A7 F1 */	bl sprintf
/* 8014CC4C 00149B8C  38 00 00 00 */	li r0, 0
/* 8014CC50 00149B90  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CC54 00149B94  90 01 00 08 */	stw r0, 8(r1)
/* 8014CC58 00149B98  38 80 00 00 */	li r4, 0
/* 8014CC5C 00149B9C  38 A0 00 00 */	li r5, 0
/* 8014CC60 00149BA0  38 C0 00 00 */	li r6, 0
/* 8014CC64 00149BA4  38 E0 00 00 */	li r7, 0
/* 8014CC68 00149BA8  39 00 00 02 */	li r8, 2
/* 8014CC6C 00149BAC  39 20 00 00 */	li r9, 0
/* 8014CC70 00149BB0  39 40 00 00 */	li r10, 0
/* 8014CC74 00149BB4  4B ED 25 15 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014CC78 00149BB8  7C 78 1B 79 */	or. r24, r3, r3
/* 8014CC7C 00149BBC  41 82 00 B8 */	beq .L_8014CD34
/* 8014CC80 00149BC0  7F 04 C3 78 */	mr r4, r24
/* 8014CC84 00149BC4  38 61 07 B8 */	addi r3, r1, 0x7b8
/* 8014CC88 00149BC8  38 A0 FF FF */	li r5, -1
/* 8014CC8C 00149BCC  48 2C 8C 6D */	bl __ct__9RamStreamFPvi
/* 8014CC90 00149BD0  38 00 00 01 */	li r0, 1
/* 8014CC94 00149BD4  2C 00 00 01 */	cmpwi r0, 1
/* 8014CC98 00149BD8  90 01 07 C4 */	stw r0, 0x7c4(r1)
/* 8014CC9C 00149BDC  40 82 00 0C */	bne .L_8014CCA8
/* 8014CCA0 00149BE0  38 00 00 00 */	li r0, 0
/* 8014CCA4 00149BE4  90 01 0B CC */	stw r0, 0xbcc(r1)
.L_8014CCA8:
/* 8014CCA8 00149BE8  38 60 00 70 */	li r3, 0x70
/* 8014CCAC 00149BEC  4B ED 71 F9 */	bl __nw__FUl
/* 8014CCB0 00149BF0  7C 73 1B 79 */	or. r19, r3, r3
/* 8014CCB4 00149BF4  41 82 00 0C */	beq .L_8014CCC0
/* 8014CCB8 00149BF8  48 05 E7 A1 */	bl __ct__Q24Game12GeneratorMgrFv
/* 8014CCBC 00149BFC  7C 73 1B 78 */	mr r19, r3
.L_8014CCC0:
/* 8014CCC0 00149C00  38 00 00 01 */	li r0, 1
/* 8014CCC4 00149C04  7E 63 9B 78 */	mr r3, r19
/* 8014CCC8 00149C08  98 13 00 6C */	stb r0, 0x6c(r19)
/* 8014CCCC 00149C0C  38 81 07 B8 */	addi r4, r1, 0x7b8
/* 8014CCD0 00149C10  38 A0 00 00 */	li r5, 0
/* 8014CCD4 00149C14  48 05 EF 45 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014CCD8 00149C18  80 9A 00 20 */	lwz r4, 0x20(r26)
/* 8014CCDC 00149C1C  7E 63 9B 78 */	mr r3, r19
/* 8014CCE0 00149C20  38 84 FF E2 */	addi r4, r4, -30
/* 8014CCE4 00149C24  7C 84 AA 14 */	add r4, r4, r21
/* 8014CCE8 00149C28  48 05 EA 15 */	bl setDayLimit__Q24Game12GeneratorMgrFi
/* 8014CCEC 00149C2C  7E 63 9B 78 */	mr r3, r19
/* 8014CCF0 00149C30  48 05 EA 29 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014CCF4 00149C34  93 17 00 00 */	stw r24, 0(r23)
/* 8014CCF8 00149C38  7E 64 9B 78 */	mr r4, r19
/* 8014CCFC 00149C3C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014CD00 00149C40  3B BD 00 01 */	addi r29, r29, 1
/* 8014CD04 00149C44  92 76 00 00 */	stw r19, 0(r22)
/* 8014CD08 00149C48  3A D6 00 04 */	addi r22, r22, 4
/* 8014CD0C 00149C4C  3A F7 00 04 */	addi r23, r23, 4
/* 8014CD10 00149C50  48 05 E8 69 */	bl addMgr__Q24Game12GeneratorMgrFPQ24Game12GeneratorMgr
/* 8014CD14 00149C54  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014CD18 00149C58  56 84 04 3E */	clrlwi r4, r20, 0x10
/* 8014CD1C 00149C5C  80 1C 00 48 */	lwz r0, 0x48(r28)
/* 8014CD20 00149C60  80 A3 00 E4 */	lwz r5, 0xe4(r3)
/* 8014CD24 00149C64  54 03 20 36 */	slwi r3, r0, 4
/* 8014CD28 00149C68  38 63 00 08 */	addi r3, r3, 8
/* 8014CD2C 00149C6C  7C 65 1A 14 */	add r3, r5, r3
/* 8014CD30 00149C70  48 2C F6 6D */	bl setFlag__8BitFlagsFUs
.L_8014CD34:
/* 8014CD34 00149C74  3A 94 00 01 */	addi r20, r20, 1
.L_8014CD38:
/* 8014CD38 00149C78  80 1C 00 74 */	lwz r0, 0x74(r28)
/* 8014CD3C 00149C7C  7C 14 00 00 */	cmpw r20, r0
/* 8014CD40 00149C80  41 80 FE 6C */	blt .L_8014CBAC
.L_8014CD44:
/* 8014CD44 00149C84  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014CD48 00149C88  3C 60 88 89 */	lis r3, 0x88888889@ha
/* 8014CD4C 00149C8C  38 03 88 89 */	addi r0, r3, 0x88888889@l
/* 8014CD50 00149C90  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 8014CD54 00149C94  80 C4 00 40 */	lwz r6, 0x40(r4)
/* 8014CD58 00149C98  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CD5C 00149C9C  38 9F 02 38 */	addi r4, r31, 0x238
/* 8014CD60 00149CA0  80 E6 02 18 */	lwz r7, 0x218(r6)
/* 8014CD64 00149CA4  7C 00 38 96 */	mulhw r0, r0, r7
/* 8014CD68 00149CA8  7C 00 3A 14 */	add r0, r0, r7
/* 8014CD6C 00149CAC  7C 00 26 70 */	srawi r0, r0, 4
/* 8014CD70 00149CB0  54 06 0F FE */	srwi r6, r0, 0x1f
/* 8014CD74 00149CB4  7C 00 32 14 */	add r0, r0, r6
/* 8014CD78 00149CB8  1C 00 00 1E */	mulli r0, r0, 0x1e
/* 8014CD7C 00149CBC  7C C0 38 50 */	subf r6, r0, r7
/* 8014CD80 00149CC0  4C C6 31 82 */	crclr 6
/* 8014CD84 00149CC4  4B F7 A6 B5 */	bl sprintf
/* 8014CD88 00149CC8  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CD8C 00149CCC  4B F8 F3 D9 */	bl DVDConvertPathToEntrynum
/* 8014CD90 00149CD0  2C 03 FF FF */	cmpwi r3, -1
/* 8014CD94 00149CD4  41 82 00 94 */	beq .L_8014CE28
/* 8014CD98 00149CD8  38 00 00 00 */	li r0, 0
/* 8014CD9C 00149CDC  38 61 02 98 */	addi r3, r1, 0x298
/* 8014CDA0 00149CE0  90 01 00 08 */	stw r0, 8(r1)
/* 8014CDA4 00149CE4  38 80 00 00 */	li r4, 0
/* 8014CDA8 00149CE8  38 A0 00 00 */	li r5, 0
/* 8014CDAC 00149CEC  38 C0 00 00 */	li r6, 0
/* 8014CDB0 00149CF0  38 E0 00 00 */	li r7, 0
/* 8014CDB4 00149CF4  39 00 00 02 */	li r8, 2
/* 8014CDB8 00149CF8  39 20 00 00 */	li r9, 0
/* 8014CDBC 00149CFC  39 40 00 00 */	li r10, 0
/* 8014CDC0 00149D00  4B ED 23 C9 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 8014CDC4 00149D04  7C 73 1B 79 */	or. r19, r3, r3
/* 8014CDC8 00149D08  41 82 00 60 */	beq .L_8014CE28
/* 8014CDCC 00149D0C  7E 64 9B 78 */	mr r4, r19
/* 8014CDD0 00149D10  38 61 03 98 */	addi r3, r1, 0x398
/* 8014CDD4 00149D14  38 A0 FF FF */	li r5, -1
/* 8014CDD8 00149D18  48 2C 8B 21 */	bl __ct__9RamStreamFPvi
/* 8014CDDC 00149D1C  38 00 00 01 */	li r0, 1
/* 8014CDE0 00149D20  2C 00 00 01 */	cmpwi r0, 1
/* 8014CDE4 00149D24  90 01 03 A4 */	stw r0, 0x3a4(r1)
/* 8014CDE8 00149D28  40 82 00 0C */	bne .L_8014CDF4
/* 8014CDEC 00149D2C  38 00 00 00 */	li r0, 0
/* 8014CDF0 00149D30  90 01 07 AC */	stw r0, 0x7ac(r1)
.L_8014CDF4:
/* 8014CDF4 00149D34  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014CDF8 00149D38  38 81 03 98 */	addi r4, r1, 0x398
/* 8014CDFC 00149D3C  38 A0 00 00 */	li r5, 0
/* 8014CE00 00149D40  48 05 EE 19 */	bl read__Q24Game12GeneratorMgrFR6Streamb
/* 8014CE04 00149D44  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014CE08 00149D48  48 05 E9 11 */	bl updateUseList__Q24Game12GeneratorMgrFv
/* 8014CE0C 00149D4C  80 0D 93 B8 */	lwz r0, dayGeneratorMgr__4Game@sda21(r13)
/* 8014CE10 00149D50  57 A5 10 3A */	slwi r5, r29, 2
/* 8014CE14 00149D54  38 81 01 98 */	addi r4, r1, 0x198
/* 8014CE18 00149D58  38 61 00 98 */	addi r3, r1, 0x98
/* 8014CE1C 00149D5C  7E 64 29 2E */	stwx r19, r4, r5
/* 8014CE20 00149D60  3B BD 00 01 */	addi r29, r29, 1
/* 8014CE24 00149D64  7C 03 29 2E */	stwx r0, r3, r5
.L_8014CE28:
/* 8014CE28 00149D68  80 1E 01 14 */	lwz r0, 0x114(r30)
/* 8014CE2C 00149D6C  38 A0 FF FF */	li r5, -1
/* 8014CE30 00149D70  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8014CE34 00149D74  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8014CE38 00149D78  4B FC 07 C1 */	bl allocateEnemys__Q24Game15GeneralEnemyMgrFUci
/* 8014CE3C 00149D7C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8014CE40 00149D80  4B FC 01 75 */	bl setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
/* 8014CE44 00149D84  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8014CE48 00149D88  48 02 05 61 */	bl setupResources__Q24Game9PelletMgrFv
/* 8014CE4C 00149D8C  3A 9D FF FF */	addi r20, r29, -1
/* 8014CE50 00149D90  3A 61 01 98 */	addi r19, r1, 0x198
/* 8014CE54 00149D94  56 80 10 3A */	slwi r0, r20, 2
/* 8014CE58 00149D98  7E 73 02 14 */	add r19, r19, r0
/* 8014CE5C 00149D9C  48 00 00 14 */	b .L_8014CE70
.L_8014CE60:
/* 8014CE60 00149DA0  80 73 00 00 */	lwz r3, 0(r19)
/* 8014CE64 00149DA4  4B ED 72 75 */	bl __dla__FPv
/* 8014CE68 00149DA8  3A 73 FF FC */	addi r19, r19, -4
/* 8014CE6C 00149DAC  3A 94 FF FF */	addi r20, r20, -1
.L_8014CE70:
/* 8014CE70 00149DB0  2C 14 00 00 */	cmpwi r20, 0
/* 8014CE74 00149DB4  40 80 FF EC */	bge .L_8014CE60
/* 8014CE78 00149DB8  3A 61 00 98 */	addi r19, r1, 0x98
/* 8014CE7C 00149DBC  3A 80 00 00 */	li r20, 0
/* 8014CE80 00149DC0  48 00 00 14 */	b .L_8014CE94
.L_8014CE84:
/* 8014CE84 00149DC4  80 73 00 00 */	lwz r3, 0(r19)
/* 8014CE88 00149DC8  48 05 E7 2D */	bl generate__Q24Game12GeneratorMgrFv
/* 8014CE8C 00149DCC  3A 73 00 04 */	addi r19, r19, 4
/* 8014CE90 00149DD0  3A 94 00 01 */	addi r20, r20, 1
.L_8014CE94:
/* 8014CE94 00149DD4  7C 14 E8 00 */	cmpw r20, r29
/* 8014CE98 00149DD8  41 80 FF EC */	blt .L_8014CE84
/* 8014CE9C 00149DDC  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014CEA0 00149DE0  48 0A 53 89 */	bl createNumberGenerators__Q24Game14GeneratorCacheFv
/* 8014CEA4 00149DE4  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014CEA8 00149DE8  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014CEAC 00149DEC  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8014CEB0 00149DF0  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8014CEB4 00149DF4  48 0A 4F 9D */	bl loadCreatures__Q24Game14GeneratorCacheFi
.L_8014CEB8:
/* 8014CEB8 00149DF8  48 0F 06 61 */	bl birthAll__Q24Game17PelletBirthBufferFv
/* 8014CEBC 00149DFC  38 00 00 00 */	li r0, 0
/* 8014CEC0 00149E00  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014CEC4 00149E04  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 8014CEC8 00149E08  90 01 00 94 */	stw r0, 0x94(r1)
/* 8014CECC 00149E0C  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 8014CED0 00149E10  28 00 00 00 */	cmplwi r0, 0
/* 8014CED4 00149E14  90 81 00 88 */	stw r4, 0x88(r1)
/* 8014CED8 00149E18  3A 60 00 00 */	li r19, 0
/* 8014CEDC 00149E1C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8014CEE0 00149E20  90 61 00 90 */	stw r3, 0x90(r1)
/* 8014CEE4 00149E24  40 82 00 1C */	bne .L_8014CF00
/* 8014CEE8 00149E28  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CEEC 00149E2C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014CEF0 00149E30  7D 89 03 A6 */	mtctr r12
/* 8014CEF4 00149E34  4E 80 04 21 */	bctrl 
/* 8014CEF8 00149E38  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CEFC 00149E3C  48 00 01 48 */	b .L_8014D044
.L_8014CF00:
/* 8014CF00 00149E40  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF04 00149E44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014CF08 00149E48  7D 89 03 A6 */	mtctr r12
/* 8014CF0C 00149E4C  4E 80 04 21 */	bctrl 
/* 8014CF10 00149E50  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CF14 00149E54  48 00 00 58 */	b .L_8014CF6C
.L_8014CF18:
/* 8014CF18 00149E58  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CF1C 00149E5C  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014CF20 00149E60  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF24 00149E64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014CF28 00149E68  7D 89 03 A6 */	mtctr r12
/* 8014CF2C 00149E6C  4E 80 04 21 */	bctrl 
/* 8014CF30 00149E70  7C 64 1B 78 */	mr r4, r3
/* 8014CF34 00149E74  80 61 00 94 */	lwz r3, 0x94(r1)
/* 8014CF38 00149E78  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF3C 00149E7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014CF40 00149E80  7D 89 03 A6 */	mtctr r12
/* 8014CF44 00149E84  4E 80 04 21 */	bctrl 
/* 8014CF48 00149E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CF4C 00149E8C  40 82 00 F8 */	bne .L_8014D044
/* 8014CF50 00149E90  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CF54 00149E94  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014CF58 00149E98  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CF5C 00149E9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014CF60 00149EA0  7D 89 03 A6 */	mtctr r12
/* 8014CF64 00149EA4  4E 80 04 21 */	bctrl 
/* 8014CF68 00149EA8  90 61 00 8C */	stw r3, 0x8c(r1)
.L_8014CF6C:
/* 8014CF6C 00149EAC  81 81 00 88 */	lwz r12, 0x88(r1)
/* 8014CF70 00149EB0  38 61 00 88 */	addi r3, r1, 0x88
/* 8014CF74 00149EB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014CF78 00149EB8  7D 89 03 A6 */	mtctr r12
/* 8014CF7C 00149EBC  4E 80 04 21 */	bctrl 
/* 8014CF80 00149EC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014CF84 00149EC4  41 82 FF 94 */	beq .L_8014CF18
/* 8014CF88 00149EC8  48 00 00 BC */	b .L_8014D044
.L_8014CF8C:
/* 8014CF8C 00149ECC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8014CF90 00149ED0  3A 73 00 01 */	addi r19, r19, 1
/* 8014CF94 00149ED4  28 00 00 00 */	cmplwi r0, 0
/* 8014CF98 00149ED8  40 82 00 20 */	bne .L_8014CFB8
/* 8014CF9C 00149EDC  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CFA0 00149EE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFA4 00149EE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014CFA8 00149EE8  7D 89 03 A6 */	mtctr r12
/* 8014CFAC 00149EEC  4E 80 04 21 */	bctrl 
/* 8014CFB0 00149EF0  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CFB4 00149EF4  48 00 00 90 */	b .L_8014D044
.L_8014CFB8:
/* 8014CFB8 00149EF8  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CFBC 00149EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFC0 00149F00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014CFC4 00149F04  7D 89 03 A6 */	mtctr r12
/* 8014CFC8 00149F08  4E 80 04 21 */	bctrl 
/* 8014CFCC 00149F0C  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8014CFD0 00149F10  48 00 00 58 */	b .L_8014D028
.L_8014CFD4:
/* 8014CFD4 00149F14  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014CFD8 00149F18  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014CFDC 00149F1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFE0 00149F20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014CFE4 00149F24  7D 89 03 A6 */	mtctr r12
/* 8014CFE8 00149F28  4E 80 04 21 */	bctrl 
/* 8014CFEC 00149F2C  7C 64 1B 78 */	mr r4, r3
/* 8014CFF0 00149F30  80 61 00 94 */	lwz r3, 0x94(r1)
/* 8014CFF4 00149F34  81 83 00 00 */	lwz r12, 0(r3)
/* 8014CFF8 00149F38  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014CFFC 00149F3C  7D 89 03 A6 */	mtctr r12
/* 8014D000 00149F40  4E 80 04 21 */	bctrl 
/* 8014D004 00149F44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014D008 00149F48  40 82 00 3C */	bne .L_8014D044
/* 8014D00C 00149F4C  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014D010 00149F50  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014D014 00149F54  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D018 00149F58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D01C 00149F5C  7D 89 03 A6 */	mtctr r12
/* 8014D020 00149F60  4E 80 04 21 */	bctrl 
/* 8014D024 00149F64  90 61 00 8C */	stw r3, 0x8c(r1)
.L_8014D028:
/* 8014D028 00149F68  81 81 00 88 */	lwz r12, 0x88(r1)
/* 8014D02C 00149F6C  38 61 00 88 */	addi r3, r1, 0x88
/* 8014D030 00149F70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014D034 00149F74  7D 89 03 A6 */	mtctr r12
/* 8014D038 00149F78  4E 80 04 21 */	bctrl 
/* 8014D03C 00149F7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014D040 00149F80  41 82 FF 94 */	beq .L_8014CFD4
.L_8014D044:
/* 8014D044 00149F84  80 61 00 90 */	lwz r3, 0x90(r1)
/* 8014D048 00149F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D04C 00149F8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014D050 00149F90  7D 89 03 A6 */	mtctr r12
/* 8014D054 00149F94  4E 80 04 21 */	bctrl 
/* 8014D058 00149F98  80 81 00 8C */	lwz r4, 0x8c(r1)
/* 8014D05C 00149F9C  7C 04 18 40 */	cmplw r4, r3
/* 8014D060 00149FA0  40 82 FF 2C */	bne .L_8014CF8C
/* 8014D064 00149FA4  2C 13 00 01 */	cmpwi r19, 1
/* 8014D068 00149FA8  41 82 04 C8 */	beq .L_8014D530
/* 8014D06C 00149FAC  40 80 00 10 */	bge .L_8014D07C
/* 8014D070 00149FB0  2C 13 00 00 */	cmpwi r19, 0
/* 8014D074 00149FB4  40 80 00 14 */	bge .L_8014D088
/* 8014D078 00149FB8  48 00 06 54 */	b .L_8014D6CC
.L_8014D07C:
/* 8014D07C 00149FBC  2C 13 00 03 */	cmpwi r19, 3
/* 8014D080 00149FC0  40 80 06 4C */	bge .L_8014D6CC
/* 8014D084 00149FC4  48 00 05 E8 */	b .L_8014D66C
.L_8014D088:
/* 8014D088 00149FC8  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D08C 00149FCC  3A C0 00 00 */	li r22, 0
/* 8014D090 00149FD0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D094 00149FD4  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8014D098 00149FD8  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8014D09C 00149FDC  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 8014D0A0 00149FE0  48 01 56 59 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8014D0A4 00149FE4  C0 62 A1 C8 */	lfs f3, lbl_80518528@sda21(r2)
/* 8014D0A8 00149FE8  FF E0 08 90 */	fmr f31, f1
/* 8014D0AC 00149FEC  C0 42 A1 38 */	lfs f2, lbl_80518498@sda21(r2)
/* 8014D0B0 00149FF0  C0 02 A1 CC */	lfs f0, lbl_8051852C@sda21(r2)
/* 8014D0B4 00149FF4  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 8014D0B8 00149FF8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014D0BC 00149FFC  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 8014D0C0 0014A000  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D0C4 0014A004  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014D0C8 0014A008  2C 00 00 01 */	cmpwi r0, 1
/* 8014D0CC 0014A00C  40 82 00 60 */	bne .L_8014D12C
/* 8014D0D0 0014A010  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8014D0D4 0014A014  38 80 00 01 */	li r4, 1
/* 8014D0D8 0014A018  48 02 E9 C5 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8014D0DC 0014A01C  7C 73 1B 79 */	or. r19, r3, r3
/* 8014D0E0 0014A020  40 82 00 18 */	bne .L_8014D0F8
/* 8014D0E4 0014A024  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D0E8 0014A028  38 BF 00 70 */	addi r5, r31, 0x70
/* 8014D0EC 0014A02C  38 80 0A B3 */	li r4, 0xab3
/* 8014D0F0 0014A030  4C C6 31 82 */	crclr 6
/* 8014D0F4 0014A034  4B ED D5 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014D0F8:
/* 8014D0F8 0014A038  7E 64 9B 78 */	mr r4, r19
/* 8014D0FC 0014A03C  38 61 00 40 */	addi r3, r1, 0x40
/* 8014D100 0014A040  81 93 00 00 */	lwz r12, 0(r19)
/* 8014D104 0014A044  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014D108 0014A048  7D 89 03 A6 */	mtctr r12
/* 8014D10C 0014A04C  4E 80 04 21 */	bctrl 
/* 8014D110 0014A050  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8014D114 0014A054  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 8014D118 0014A058  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 8014D11C 0014A05C  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D120 0014A060  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D124 0014A064  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D128 0014A068  48 00 00 E8 */	b .L_8014D210
.L_8014D12C:
/* 8014D12C 0014A06C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D130 0014A070  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D134 0014A074  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D138 0014A078  7D 89 03 A6 */	mtctr r12
/* 8014D13C 0014A07C  4E 80 04 21 */	bctrl 
/* 8014D140 0014A080  28 03 00 00 */	cmplwi r3, 0
/* 8014D144 0014A084  40 82 00 68 */	bne .L_8014D1AC
/* 8014D148 0014A088  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D14C 0014A08C  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D150 0014A090  38 A0 00 00 */	li r5, 0
/* 8014D154 0014A094  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D158 0014A098  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014D15C 0014A09C  7D 89 03 A6 */	mtctr r12
/* 8014D160 0014A0A0  4E 80 04 21 */	bctrl 
/* 8014D164 0014A0A4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D168 0014A0A8  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D16C 0014A0AC  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D170 0014A0B0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D174 0014A0B4  7D 89 03 A6 */	mtctr r12
/* 8014D178 0014A0B8  4E 80 04 21 */	bctrl 
/* 8014D17C 0014A0BC  C0 02 A1 D0 */	lfs f0, lbl_80518530@sda21(r2)
/* 8014D180 0014A0C0  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 8014D184 0014A0C4  C0 42 A1 D4 */	lfs f2, lbl_80518534@sda21(r2)
/* 8014D188 0014A0C8  EC 80 08 2A */	fadds f4, f0, f1
/* 8014D18C 0014A0CC  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 8014D190 0014A0D0  C0 02 A1 D8 */	lfs f0, lbl_80518538@sda21(r2)
/* 8014D194 0014A0D4  EC 43 10 2A */	fadds f2, f3, f2
/* 8014D198 0014A0D8  D0 81 00 80 */	stfs f4, 0x80(r1)
/* 8014D19C 0014A0DC  EC 01 00 2A */	fadds f0, f1, f0
/* 8014D1A0 0014A0E0  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D1A4 0014A0E4  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D1A8 0014A0E8  48 00 00 68 */	b .L_8014D210
.L_8014D1AC:
/* 8014D1AC 0014A0EC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D1B0 0014A0F0  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D1B4 0014A0F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D1B8 0014A0F8  7D 89 03 A6 */	mtctr r12
/* 8014D1BC 0014A0FC  4E 80 04 21 */	bctrl 
/* 8014D1C0 0014A100  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D1C4 0014A104  38 A1 00 28 */	addi r5, r1, 0x28
/* 8014D1C8 0014A108  4B F9 DA 11 */	bl PSMTXMultVec
/* 8014D1CC 0014A10C  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 8014D1D0 0014A110  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D1D4 0014A114  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8014D1D8 0014A118  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8014D1DC 0014A11C  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D1E0 0014A120  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D1E4 0014A124  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D1E8 0014A128  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D1EC 0014A12C  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D1F0 0014A130  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D1F4 0014A134  7D 89 03 A6 */	mtctr r12
/* 8014D1F8 0014A138  4E 80 04 21 */	bctrl 
/* 8014D1FC 0014A13C  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D200 0014A140  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D204 0014A144  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8014D208 0014A148  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8014D20C 0014A14C  D0 01 00 78 */	stfs f0, 0x78(r1)
.L_8014D210:
/* 8014D210 0014A150  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D214 0014A154  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D218 0014A158  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8014D21C 0014A15C  7D 89 03 A6 */	mtctr r12
/* 8014D220 0014A160  4E 80 04 21 */	bctrl 
/* 8014D224 0014A164  38 80 00 00 */	li r4, 0
/* 8014D228 0014A168  7C 74 1B 78 */	mr r20, r3
/* 8014D22C 0014A16C  4B FE DD 9D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8014D230 0014A170  FC 20 F8 90 */	fmr f1, f31
/* 8014D234 0014A174  48 2C 49 9D */	bl roundAng__Ff
/* 8014D238 0014A178  D0 34 01 FC */	stfs f1, 0x1fc(r20)
/* 8014D23C 0014A17C  7E 83 A3 78 */	mr r3, r20
/* 8014D240 0014A180  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D244 0014A184  38 A0 00 00 */	li r5, 0
/* 8014D248 0014A188  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 8014D24C 0014A18C  90 14 02 80 */	stw r0, 0x280(r20)
/* 8014D250 0014A190  90 14 02 84 */	stw r0, 0x284(r20)
/* 8014D254 0014A194  80 1E 01 0C */	lwz r0, 0x10c(r30)
/* 8014D258 0014A198  90 14 02 78 */	stw r0, 0x278(r20)
/* 8014D25C 0014A19C  90 14 02 7C */	stw r0, 0x27c(r20)
/* 8014D260 0014A1A0  4B FE DF 49 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014D264 0014A1A4  7E 83 A3 78 */	mr r3, r20
/* 8014D268 0014A1A8  38 81 00 70 */	addi r4, r1, 0x70
/* 8014D26C 0014A1AC  81 94 00 00 */	lwz r12, 0(r20)
/* 8014D270 0014A1B0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014D274 0014A1B4  7D 89 03 A6 */	mtctr r12
/* 8014D278 0014A1B8  4E 80 04 21 */	bctrl 
/* 8014D27C 0014A1BC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014D280 0014A1C0  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8014D284 0014A1C4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014D288 0014A1C8  41 82 00 14 */	beq .L_8014D29C
/* 8014D28C 0014A1CC  7E 83 A3 78 */	mr r3, r20
/* 8014D290 0014A1D0  4B FF 5A 95 */	bl setDeadLaydown__Q24Game4NaviFv
/* 8014D294 0014A1D4  3A C0 00 01 */	li r22, 1
/* 8014D298 0014A1D8  48 00 00 0C */	b .L_8014D2A4
.L_8014D29C:
/* 8014D29C 0014A1DC  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8014D2A0 0014A1E0  D0 14 02 A0 */	stfs f0, 0x2a0(r20)
.L_8014D2A4:
/* 8014D2A4 0014A1E4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D2A8 0014A1E8  48 01 54 51 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8014D2AC 0014A1EC  C0 62 A1 DC */	lfs f3, lbl_8051853C@sda21(r2)
/* 8014D2B0 0014A1F0  FF E0 08 90 */	fmr f31, f1
/* 8014D2B4 0014A1F4  C0 42 A1 38 */	lfs f2, lbl_80518498@sda21(r2)
/* 8014D2B8 0014A1F8  C0 02 A1 E0 */	lfs f0, lbl_80518540@sda21(r2)
/* 8014D2BC 0014A1FC  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 8014D2C0 0014A200  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014D2C4 0014A204  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 8014D2C8 0014A208  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D2CC 0014A20C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014D2D0 0014A210  2C 00 00 01 */	cmpwi r0, 1
/* 8014D2D4 0014A214  40 82 00 60 */	bne .L_8014D334
/* 8014D2D8 0014A218  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8014D2DC 0014A21C  38 80 00 00 */	li r4, 0
/* 8014D2E0 0014A220  48 02 E7 BD */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8014D2E4 0014A224  7C 73 1B 79 */	or. r19, r3, r3
/* 8014D2E8 0014A228  40 82 00 18 */	bne .L_8014D300
/* 8014D2EC 0014A22C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D2F0 0014A230  38 BF 00 70 */	addi r5, r31, 0x70
/* 8014D2F4 0014A234  38 80 0A E7 */	li r4, 0xae7
/* 8014D2F8 0014A238  4C C6 31 82 */	crclr 6
/* 8014D2FC 0014A23C  4B ED D3 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014D300:
/* 8014D300 0014A240  7E 64 9B 78 */	mr r4, r19
/* 8014D304 0014A244  38 61 00 34 */	addi r3, r1, 0x34
/* 8014D308 0014A248  81 93 00 00 */	lwz r12, 0(r19)
/* 8014D30C 0014A24C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014D310 0014A250  7D 89 03 A6 */	mtctr r12
/* 8014D314 0014A254  4E 80 04 21 */	bctrl 
/* 8014D318 0014A258  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8014D31C 0014A25C  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8014D320 0014A260  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8014D324 0014A264  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D328 0014A268  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D32C 0014A26C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D330 0014A270  48 00 00 E8 */	b .L_8014D418
.L_8014D334:
/* 8014D334 0014A274  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D338 0014A278  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D33C 0014A27C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D340 0014A280  7D 89 03 A6 */	mtctr r12
/* 8014D344 0014A284  4E 80 04 21 */	bctrl 
/* 8014D348 0014A288  28 03 00 00 */	cmplwi r3, 0
/* 8014D34C 0014A28C  40 82 00 68 */	bne .L_8014D3B4
/* 8014D350 0014A290  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D354 0014A294  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D358 0014A298  38 A0 00 00 */	li r5, 0
/* 8014D35C 0014A29C  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D360 0014A2A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014D364 0014A2A4  7D 89 03 A6 */	mtctr r12
/* 8014D368 0014A2A8  4E 80 04 21 */	bctrl 
/* 8014D36C 0014A2AC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D370 0014A2B0  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D374 0014A2B4  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D378 0014A2B8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D37C 0014A2BC  7D 89 03 A6 */	mtctr r12
/* 8014D380 0014A2C0  4E 80 04 21 */	bctrl 
/* 8014D384 0014A2C4  C0 02 A1 D0 */	lfs f0, lbl_80518530@sda21(r2)
/* 8014D388 0014A2C8  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 8014D38C 0014A2CC  C0 42 A1 E4 */	lfs f2, lbl_80518544@sda21(r2)
/* 8014D390 0014A2D0  EC 80 08 2A */	fadds f4, f0, f1
/* 8014D394 0014A2D4  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 8014D398 0014A2D8  C0 02 A1 E8 */	lfs f0, lbl_80518548@sda21(r2)
/* 8014D39C 0014A2DC  EC 43 10 2A */	fadds f2, f3, f2
/* 8014D3A0 0014A2E0  D0 81 00 80 */	stfs f4, 0x80(r1)
/* 8014D3A4 0014A2E4  EC 01 00 2A */	fadds f0, f1, f0
/* 8014D3A8 0014A2E8  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D3AC 0014A2EC  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D3B0 0014A2F0  48 00 00 68 */	b .L_8014D418
.L_8014D3B4:
/* 8014D3B4 0014A2F4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D3B8 0014A2F8  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D3BC 0014A2FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D3C0 0014A300  7D 89 03 A6 */	mtctr r12
/* 8014D3C4 0014A304  4E 80 04 21 */	bctrl 
/* 8014D3C8 0014A308  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D3CC 0014A30C  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8014D3D0 0014A310  4B F9 D8 09 */	bl PSMTXMultVec
/* 8014D3D4 0014A314  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 8014D3D8 0014A318  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D3DC 0014A31C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8014D3E0 0014A320  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8014D3E4 0014A324  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8014D3E8 0014A328  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D3EC 0014A32C  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D3F0 0014A330  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 8014D3F4 0014A334  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D3F8 0014A338  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D3FC 0014A33C  7D 89 03 A6 */	mtctr r12
/* 8014D400 0014A340  4E 80 04 21 */	bctrl 
/* 8014D404 0014A344  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D408 0014A348  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8014D40C 0014A34C  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8014D410 0014A350  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8014D414 0014A354  D0 01 00 78 */	stfs f0, 0x78(r1)
.L_8014D418:
/* 8014D418 0014A358  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D41C 0014A35C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D420 0014A360  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8014D424 0014A364  7D 89 03 A6 */	mtctr r12
/* 8014D428 0014A368  4E 80 04 21 */	bctrl 
/* 8014D42C 0014A36C  38 80 00 00 */	li r4, 0
/* 8014D430 0014A370  7C 75 1B 78 */	mr r21, r3
/* 8014D434 0014A374  4B FE DB 95 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8014D438 0014A378  80 1E 01 08 */	lwz r0, 0x108(r30)
/* 8014D43C 0014A37C  FC 20 F8 90 */	fmr f1, f31
/* 8014D440 0014A380  90 15 02 80 */	stw r0, 0x280(r21)
/* 8014D444 0014A384  90 15 02 84 */	stw r0, 0x284(r21)
/* 8014D448 0014A388  80 1E 01 10 */	lwz r0, 0x110(r30)
/* 8014D44C 0014A38C  90 15 02 78 */	stw r0, 0x278(r21)
/* 8014D450 0014A390  90 15 02 7C */	stw r0, 0x27c(r21)
/* 8014D454 0014A394  48 2C 47 7D */	bl roundAng__Ff
/* 8014D458 0014A398  D0 35 01 FC */	stfs f1, 0x1fc(r21)
/* 8014D45C 0014A39C  7E A3 AB 78 */	mr r3, r21
/* 8014D460 0014A3A0  38 81 00 7C */	addi r4, r1, 0x7c
/* 8014D464 0014A3A4  38 A0 00 00 */	li r5, 0
/* 8014D468 0014A3A8  4B FE DD 41 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014D46C 0014A3AC  7E A3 AB 78 */	mr r3, r21
/* 8014D470 0014A3B0  38 81 00 70 */	addi r4, r1, 0x70
/* 8014D474 0014A3B4  81 95 00 00 */	lwz r12, 0(r21)
/* 8014D478 0014A3B8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014D47C 0014A3BC  7D 89 03 A6 */	mtctr r12
/* 8014D480 0014A3C0  4E 80 04 21 */	bctrl 
/* 8014D484 0014A3C4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014D488 0014A3C8  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8014D48C 0014A3CC  54 00 FF FF */	rlwinm. r0, r0, 0x1f, 0x1f, 0x1f
/* 8014D490 0014A3D0  40 82 00 0C */	bne .L_8014D49C
/* 8014D494 0014A3D4  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8014D498 0014A3D8  D0 15 02 A0 */	stfs f0, 0x2a0(r21)
.L_8014D49C:
/* 8014D49C 0014A3DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014D4A0 0014A3E0  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8014D4A4 0014A3E4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8014D4A8 0014A3E8  41 82 00 10 */	beq .L_8014D4B8
/* 8014D4AC 0014A3EC  7E A3 AB 78 */	mr r3, r21
/* 8014D4B0 0014A3F0  4B FF 58 75 */	bl setDeadLaydown__Q24Game4NaviFv
/* 8014D4B4 0014A3F4  48 00 02 18 */	b .L_8014D6CC
.L_8014D4B8:
/* 8014D4B8 0014A3F8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014D4BC 0014A3FC  38 60 00 00 */	li r3, 0
/* 8014D4C0 0014A400  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8014D4C4 0014A404  2C 00 00 01 */	cmpwi r0, 1
/* 8014D4C8 0014A408  41 82 00 0C */	beq .L_8014D4D4
/* 8014D4CC 0014A40C  2C 00 00 03 */	cmpwi r0, 3
/* 8014D4D0 0014A410  40 82 00 08 */	bne .L_8014D4D8
.L_8014D4D4:
/* 8014D4D4 0014A414  38 60 00 01 */	li r3, 1
.L_8014D4D8:
/* 8014D4D8 0014A418  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014D4DC 0014A41C  40 82 01 F0 */	bne .L_8014D6CC
/* 8014D4E0 0014A420  56 C0 06 3F */	clrlwi. r0, r22, 0x18
/* 8014D4E4 0014A424  40 82 01 E8 */	bne .L_8014D6CC
/* 8014D4E8 0014A428  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 8014D4EC 0014A42C  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractFue@ha
/* 8014D4F0 0014A430  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 8014D4F4 0014A434  38 A0 00 00 */	li r5, 0
/* 8014D4F8 0014A438  90 01 00 64 */	stw r0, 0x64(r1)
/* 8014D4FC 0014A43C  38 C3 49 BC */	addi r6, r3, __vt__Q24Game11InteractFue@l
/* 8014D500 0014A440  38 00 00 01 */	li r0, 1
/* 8014D504 0014A444  7E A3 AB 78 */	mr r3, r21
/* 8014D508 0014A448  92 81 00 68 */	stw r20, 0x68(r1)
/* 8014D50C 0014A44C  38 81 00 64 */	addi r4, r1, 0x64
/* 8014D510 0014A450  90 C1 00 64 */	stw r6, 0x64(r1)
/* 8014D514 0014A454  98 A1 00 6C */	stb r5, 0x6c(r1)
/* 8014D518 0014A458  98 01 00 6D */	stb r0, 0x6d(r1)
/* 8014D51C 0014A45C  81 95 00 00 */	lwz r12, 0(r21)
/* 8014D520 0014A460  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8014D524 0014A464  7D 89 03 A6 */	mtctr r12
/* 8014D528 0014A468  4E 80 04 21 */	bctrl 
/* 8014D52C 0014A46C  48 00 01 A0 */	b .L_8014D6CC
.L_8014D530:
/* 8014D530 0014A470  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D534 0014A474  38 BF 02 48 */	addi r5, r31, 0x248
/* 8014D538 0014A478  38 80 0B 25 */	li r4, 0xb25
/* 8014D53C 0014A47C  4C C6 31 82 */	crclr 6
/* 8014D540 0014A480  4B ED D1 01 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8014D544 0014A484  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D548 0014A488  48 01 51 B1 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8014D54C 0014A48C  C0 42 A1 DC */	lfs f2, lbl_8051853C@sda21(r2)
/* 8014D550 0014A490  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014D554 0014A494  C0 02 A1 CC */	lfs f0, lbl_8051852C@sda21(r2)
/* 8014D558 0014A498  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8014D55C 0014A49C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D560 0014A4A0  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 8014D564 0014A4A4  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8014D568 0014A4A8  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D56C 0014A4AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D570 0014A4B0  7D 89 03 A6 */	mtctr r12
/* 8014D574 0014A4B4  4E 80 04 21 */	bctrl 
/* 8014D578 0014A4B8  28 03 00 00 */	cmplwi r3, 0
/* 8014D57C 0014A4BC  40 82 00 18 */	bne .L_8014D594
/* 8014D580 0014A4C0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014D584 0014A4C4  38 BF 02 54 */	addi r5, r31, 0x254
/* 8014D588 0014A4C8  38 80 0B 2B */	li r4, 0xb2b
/* 8014D58C 0014A4CC  4C C6 31 82 */	crclr 6
/* 8014D590 0014A4D0  4B ED D0 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014D594:
/* 8014D594 0014A4D4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D598 0014A4D8  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D59C 0014A4DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014D5A0 0014A4E0  7D 89 03 A6 */	mtctr r12
/* 8014D5A4 0014A4E4  4E 80 04 21 */	bctrl 
/* 8014D5A8 0014A4E8  38 81 00 58 */	addi r4, r1, 0x58
/* 8014D5AC 0014A4EC  38 A1 00 10 */	addi r5, r1, 0x10
/* 8014D5B0 0014A4F0  4B F9 D6 29 */	bl PSMTXMultVec
/* 8014D5B4 0014A4F4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8014D5B8 0014A4F8  38 81 00 58 */	addi r4, r1, 0x58
/* 8014D5BC 0014A4FC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8014D5C0 0014A500  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8014D5C4 0014A504  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8014D5C8 0014A508  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014D5CC 0014A50C  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 8014D5D0 0014A510  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8014D5D4 0014A514  81 83 00 04 */	lwz r12, 4(r3)
/* 8014D5D8 0014A518  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014D5DC 0014A51C  7D 89 03 A6 */	mtctr r12
/* 8014D5E0 0014A520  4E 80 04 21 */	bctrl 
/* 8014D5E4 0014A524  C0 02 A1 D0 */	lfs f0, lbl_80518530@sda21(r2)
/* 8014D5E8 0014A528  38 80 00 00 */	li r4, 0
/* 8014D5EC 0014A52C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D5F0 0014A530  EC 00 08 2A */	fadds f0, f0, f1
/* 8014D5F4 0014A534  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8014D5F8 0014A538  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D5FC 0014A53C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D600 0014A540  7D 89 03 A6 */	mtctr r12
/* 8014D604 0014A544  4E 80 04 21 */	bctrl 
/* 8014D608 0014A548  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 8014D60C 0014A54C  90 03 02 80 */	stw r0, 0x280(r3)
/* 8014D610 0014A550  90 03 02 84 */	stw r0, 0x284(r3)
/* 8014D614 0014A554  80 1E 01 0C */	lwz r0, 0x10c(r30)
/* 8014D618 0014A558  90 03 02 78 */	stw r0, 0x278(r3)
/* 8014D61C 0014A55C  90 03 02 7C */	stw r0, 0x27c(r3)
/* 8014D620 0014A560  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D624 0014A564  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D628 0014A568  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8014D62C 0014A56C  7D 89 03 A6 */	mtctr r12
/* 8014D630 0014A570  4E 80 04 21 */	bctrl 
/* 8014D634 0014A574  38 80 00 00 */	li r4, 0
/* 8014D638 0014A578  7C 73 1B 78 */	mr r19, r3
/* 8014D63C 0014A57C  4B FE D9 8D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8014D640 0014A580  80 1E 01 08 */	lwz r0, 0x108(r30)
/* 8014D644 0014A584  7E 63 9B 78 */	mr r3, r19
/* 8014D648 0014A588  38 81 00 58 */	addi r4, r1, 0x58
/* 8014D64C 0014A58C  38 A0 00 00 */	li r5, 0
/* 8014D650 0014A590  90 13 02 80 */	stw r0, 0x280(r19)
/* 8014D654 0014A594  90 13 02 84 */	stw r0, 0x284(r19)
/* 8014D658 0014A598  80 1E 01 10 */	lwz r0, 0x110(r30)
/* 8014D65C 0014A59C  90 13 02 78 */	stw r0, 0x278(r19)
/* 8014D660 0014A5A0  90 13 02 7C */	stw r0, 0x27c(r19)
/* 8014D664 0014A5A4  4B FE DB 45 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014D668 0014A5A8  48 00 00 64 */	b .L_8014D6CC
.L_8014D66C:
/* 8014D66C 0014A5AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D670 0014A5B0  38 80 00 00 */	li r4, 0
/* 8014D674 0014A5B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D678 0014A5B8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D67C 0014A5BC  7D 89 03 A6 */	mtctr r12
/* 8014D680 0014A5C0  4E 80 04 21 */	bctrl 
/* 8014D684 0014A5C4  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 8014D688 0014A5C8  38 80 00 01 */	li r4, 1
/* 8014D68C 0014A5CC  90 03 02 80 */	stw r0, 0x280(r3)
/* 8014D690 0014A5D0  90 03 02 84 */	stw r0, 0x284(r3)
/* 8014D694 0014A5D4  80 1E 01 0C */	lwz r0, 0x10c(r30)
/* 8014D698 0014A5D8  90 03 02 78 */	stw r0, 0x278(r3)
/* 8014D69C 0014A5DC  90 03 02 7C */	stw r0, 0x27c(r3)
/* 8014D6A0 0014A5E0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D6A4 0014A5E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D6A8 0014A5E8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D6AC 0014A5EC  7D 89 03 A6 */	mtctr r12
/* 8014D6B0 0014A5F0  4E 80 04 21 */	bctrl 
/* 8014D6B4 0014A5F4  80 1E 01 08 */	lwz r0, 0x108(r30)
/* 8014D6B8 0014A5F8  90 03 02 80 */	stw r0, 0x280(r3)
/* 8014D6BC 0014A5FC  90 03 02 84 */	stw r0, 0x284(r3)
/* 8014D6C0 0014A600  80 1E 01 10 */	lwz r0, 0x110(r30)
/* 8014D6C4 0014A604  90 03 02 78 */	stw r0, 0x278(r3)
/* 8014D6C8 0014A608  90 03 02 7C */	stw r0, 0x27c(r3)
.L_8014D6CC:
/* 8014D6CC 0014A60C  38 00 1C 98 */	li r0, 0x1c98
/* 8014D6D0 0014A610  13 E1 00 0C */	psq_lx f31, r1, r0, 0, qr0
/* 8014D6D4 0014A614  CB E1 1C 90 */	lfd f31, 0x1c90(r1)
/* 8014D6D8 0014A618  BA 61 1C 5C */	lmw r19, 0x1c5c(r1)
/* 8014D6DC 0014A61C  80 01 1C A4 */	lwz r0, 0x1ca4(r1)
/* 8014D6E0 0014A620  7C 08 03 A6 */	mtlr r0
/* 8014D6E4 0014A624  38 21 1C A0 */	addi r1, r1, 0x1ca0
/* 8014D6E8 0014A628  4E 80 00 20 */	blr 
.endfn initGenerators__Q24Game15BaseGameSectionFv
.endif

.fn advanceDayCount__Q24Game15BaseGameSectionFv, global
/* 8014D6EC 0014A62C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014D6F0 0014A630  7C 08 02 A6 */	mflr r0
/* 8014D6F4 0014A634  3C 60 88 89 */	lis r3, 0x88888889@ha
/* 8014D6F8 0014A638  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014D6FC 0014A63C  38 03 88 89 */	addi r0, r3, 0x88888889@l
/* 8014D700 0014A640  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014D704 0014A644  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014D708 0014A648  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014D70C 0014A64C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014D710 0014A650  80 64 00 40 */	lwz r3, 0x40(r4)
/* 8014D714 0014A654  80 63 02 18 */	lwz r3, 0x218(r3)
/* 8014D718 0014A658  3B C3 00 01 */	addi r30, r3, 1
/* 8014D71C 0014A65C  7C 00 F0 96 */	mulhw r0, r0, r30
/* 8014D720 0014A660  7C 00 F2 14 */	add r0, r0, r30
/* 8014D724 0014A664  7C 00 26 70 */	srawi r0, r0, 4
/* 8014D728 0014A668  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8014D72C 0014A66C  7C 00 1A 14 */	add r0, r0, r3
/* 8014D730 0014A670  1C 00 00 1E */	mulli r0, r0, 0x1e
/* 8014D734 0014A674  7C 00 F0 51 */	subf. r0, r0, r30
/* 8014D738 0014A678  40 82 00 30 */	bne .L_8014D768
/* 8014D73C 0014A67C  3B A0 00 00 */	li r29, 0
/* 8014D740 0014A680  3B E0 00 00 */	li r31, 0
.L_8014D744:
/* 8014D744 0014A684  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 8014D748 0014A688  38 7F 00 08 */	addi r3, r31, 8
/* 8014D74C 0014A68C  80 04 00 E4 */	lwz r0, 0xe4(r4)
/* 8014D750 0014A690  7C 60 1A 14 */	add r3, r0, r3
/* 8014D754 0014A694  48 2C EB F9 */	bl all_zero__8BitFlagsFv
/* 8014D758 0014A698  3B BD 00 01 */	addi r29, r29, 1
/* 8014D75C 0014A69C  3B FF 00 10 */	addi r31, r31, 0x10
/* 8014D760 0014A6A0  2C 1D 00 04 */	cmpwi r29, 4
/* 8014D764 0014A6A4  41 80 FF E0 */	blt .L_8014D744
.L_8014D768:
/* 8014D768 0014A6A8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014D76C 0014A6AC  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8014D770 0014A6B0  93 C3 02 18 */	stw r30, 0x218(r3)
/* 8014D774 0014A6B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014D778 0014A6B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014D77C 0014A6BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014D780 0014A6C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014D784 0014A6C4  7C 08 03 A6 */	mtlr r0
/* 8014D788 0014A6C8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014D78C 0014A6CC  4E 80 00 20 */	blr 
.endfn advanceDayCount__Q24Game15BaseGameSectionFv

.fn saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo, global
/* 8014D790 0014A6D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014D794 0014A6D4  7C 08 02 A6 */	mflr r0
/* 8014D798 0014A6D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014D79C 0014A6DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014D7A0 0014A6E0  7C 9F 23 79 */	or. r31, r4, r4
/* 8014D7A4 0014A6E4  40 82 00 20 */	bne .L_8014D7C4
/* 8014D7A8 0014A6E8  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014D7AC 0014A6EC  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014D7B0 0014A6F0  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014D7B4 0014A6F4  38 80 0B 6B */	li r4, 0xb6b
/* 8014D7B8 0014A6F8  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014D7BC 0014A6FC  4C C6 31 82 */	crclr 6
/* 8014D7C0 0014A700  4B ED CE 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014D7C4:
/* 8014D7C4 0014A704  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014D7C8 0014A708  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 8014D7CC 0014A70C  48 0A 4A D5 */	bl beginSave__Q24Game14GeneratorCacheFi
/* 8014D7D0 0014A710  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014D7D4 0014A714  48 0A 43 45 */	bl getFirstGenerator__Q24Game14GeneratorCacheFv
/* 8014D7D8 0014A718  7C 7F 1B 78 */	mr r31, r3
/* 8014D7DC 0014A71C  48 00 00 20 */	b .L_8014D7FC
.L_8014D7E0:
/* 8014D7E0 0014A720  A0 1F 00 5C */	lhz r0, 0x5c(r31)
/* 8014D7E4 0014A724  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014D7E8 0014A728  41 82 00 10 */	beq .L_8014D7F8
/* 8014D7EC 0014A72C  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014D7F0 0014A730  7F E4 FB 78 */	mr r4, r31
/* 8014D7F4 0014A734  48 0A 4C 6D */	bl saveGenerator__Q24Game14GeneratorCacheFPQ24Game9Generator
.L_8014D7F8:
/* 8014D7F8 0014A738  83 FF 00 04 */	lwz r31, 4(r31)
.L_8014D7FC:
/* 8014D7FC 0014A73C  28 1F 00 00 */	cmplwi r31, 0
/* 8014D800 0014A740  40 82 FF E0 */	bne .L_8014D7E0
/* 8014D804 0014A744  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014D808 0014A748  48 0A 43 11 */	bl getFirstGenerator__Q24Game14GeneratorCacheFv
/* 8014D80C 0014A74C  7C 7F 1B 78 */	mr r31, r3
/* 8014D810 0014A750  48 00 00 28 */	b .L_8014D838
.L_8014D814:
/* 8014D814 0014A754  A0 7F 00 5C */	lhz r3, 0x5c(r31)
/* 8014D818 0014A758  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 8014D81C 0014A75C  41 82 00 18 */	beq .L_8014D834
/* 8014D820 0014A760  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 8014D824 0014A764  41 82 00 10 */	beq .L_8014D834
/* 8014D828 0014A768  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014D82C 0014A76C  7F E4 FB 78 */	mr r4, r31
/* 8014D830 0014A770  48 0A 4D 21 */	bl saveCreature__Q24Game14GeneratorCacheFPQ24Game9Generator
.L_8014D834:
/* 8014D834 0014A774  83 FF 00 04 */	lwz r31, 4(r31)
.L_8014D838:
/* 8014D838 0014A778  28 1F 00 00 */	cmplwi r31, 0
/* 8014D83C 0014A77C  40 82 FF D8 */	bne .L_8014D814
/* 8014D840 0014A780  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014D844 0014A784  48 0A 4E 4D */	bl savePikiheads__Q24Game14GeneratorCacheFv
/* 8014D848 0014A788  80 6D 94 C0 */	lwz r3, generatorCache__4Game@sda21(r13)
/* 8014D84C 0014A78C  48 0A 4B 4D */	bl endSave__Q24Game14GeneratorCacheFv
/* 8014D850 0014A790  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014D854 0014A794  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014D858 0014A798  7C 08 03 A6 */	mtlr r0
/* 8014D85C 0014A79C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014D860 0014A7A0  4E 80 00 20 */	blr 
.endfn saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo

.if version == 0
.fn pmTogglePlayer__Q24Game15BaseGameSectionFv, global
/* 8014D864 0014A7A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014D868 0014A7A8  7C 08 02 A6 */	mflr r0
/* 8014D86C 0014A7AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014D870 0014A7B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014D874 0014A7B4  7C 7F 1B 78 */	mr r31, r3
/* 8014D878 0014A7B8  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 8014D87C 0014A7BC  2C 00 00 00 */	cmpwi r0, 0
/* 8014D880 0014A7C0  40 82 00 34 */	bne .L_8014D8B4
/* 8014D884 0014A7C4  38 80 00 01 */	li r4, 1
/* 8014D888 0014A7C8  48 00 00 91 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8014D88C 0014A7CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014D890 0014A7D0  38 80 00 01 */	li r4, 1
/* 8014D894 0014A7D4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014D898 0014A7D8  48 2D 7D 59 */	bl getViewport__8GraphicsFi
/* 8014D89C 0014A7DC  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8014D8A0 0014A7E0  90 64 01 98 */	stw r3, 0x198(r4)
/* 8014D8A4 0014A7E4  80 1F 01 08 */	lwz r0, 0x128(r31)
/* 8014D8A8 0014A7E8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014D8AC 0014A7EC  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014D8B0 0014A7F0  48 00 00 38 */	b .L_8014D8E8
.L_8014D8B4:
/* 8014D8B4 0014A7F4  2C 00 00 01 */	cmpwi r0, 1
/* 8014D8B8 0014A7F8  40 82 00 30 */	bne .L_8014D8E8
/* 8014D8BC 0014A7FC  38 80 00 00 */	li r4, 0
/* 8014D8C0 0014A800  48 00 00 59 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8014D8C4 0014A804  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014D8C8 0014A808  38 80 00 00 */	li r4, 0
/* 8014D8CC 0014A80C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014D8D0 0014A810  48 2D 7D 21 */	bl getViewport__8GraphicsFi
/* 8014D8D4 0014A814  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8014D8D8 0014A818  90 64 01 98 */	stw r3, 0x198(r4)
/* 8014D8DC 0014A81C  80 1F 01 04 */	lwz r0, 0x124(r31)
/* 8014D8E0 0014A820  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014D8E4 0014A824  90 03 01 90 */	stw r0, 0x190(r3)
.L_8014D8E8:
/* 8014D8E8 0014A828  7F E3 FB 78 */	mr r3, r31
/* 8014D8EC 0014A82C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014D8F0 0014A830  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 8014D8F4 0014A834  7D 89 03 A6 */	mtctr r12
/* 8014D8F8 0014A838  4E 80 04 21 */	bctrl 
/* 8014D8FC 0014A83C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014D900 0014A840  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014D904 0014A844  7C 08 03 A6 */	mtlr r0
/* 8014D908 0014A848  38 21 00 10 */	addi r1, r1, 0x10
/* 8014D90C 0014A84C  4E 80 00 20 */	blr 
.endfn pmTogglePlayer__Q24Game15BaseGameSectionFv
.else
.fn pmTogglePlayer__Q24Game15BaseGameSectionFv, global
/* 8014D864 0014A7A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014D868 0014A7A8  7C 08 02 A6 */	mflr r0
/* 8014D86C 0014A7AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014D870 0014A7B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014D874 0014A7B4  7C 7F 1B 78 */	mr r31, r3
/* 8014D878 0014A7B8  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 8014D87C 0014A7BC  2C 00 00 00 */	cmpwi r0, 0
/* 8014D880 0014A7C0  40 82 00 34 */	bne .L_8014D8B4
/* 8014D884 0014A7C4  38 80 00 01 */	li r4, 1
/* 8014D888 0014A7C8  48 00 00 91 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8014D88C 0014A7CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014D890 0014A7D0  38 80 00 01 */	li r4, 1
/* 8014D894 0014A7D4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014D898 0014A7D8  48 2D 7D 59 */	bl getViewport__8GraphicsFi
/* 8014D89C 0014A7DC  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8014D8A0 0014A7E0  90 64 01 98 */	stw r3, 0x198(r4)
/* 8014D8A4 0014A7E4  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 8014D8A8 0014A7E8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014D8AC 0014A7EC  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014D8B0 0014A7F0  48 00 00 38 */	b .L_8014D8E8
.L_8014D8B4:
/* 8014D8B4 0014A7F4  2C 00 00 01 */	cmpwi r0, 1
/* 8014D8B8 0014A7F8  40 82 00 30 */	bne .L_8014D8E8
/* 8014D8BC 0014A7FC  38 80 00 00 */	li r4, 0
/* 8014D8C0 0014A800  48 00 00 59 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8014D8C4 0014A804  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014D8C8 0014A808  38 80 00 00 */	li r4, 0
/* 8014D8CC 0014A80C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014D8D0 0014A810  48 2D 7D 21 */	bl getViewport__8GraphicsFi
/* 8014D8D4 0014A814  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8014D8D8 0014A818  90 64 01 98 */	stw r3, 0x198(r4)
/* 8014D8DC 0014A81C  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8014D8E0 0014A820  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014D8E4 0014A824  90 03 01 90 */	stw r0, 0x190(r3)
.L_8014D8E8:
/* 8014D8E8 0014A828  7F E3 FB 78 */	mr r3, r31
/* 8014D8EC 0014A82C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014D8F0 0014A830  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 8014D8F4 0014A834  7D 89 03 A6 */	mtctr r12
/* 8014D8F8 0014A838  4E 80 04 21 */	bctrl 
/* 8014D8FC 0014A83C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014D900 0014A840  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014D904 0014A844  7C 08 03 A6 */	mtlr r0
/* 8014D908 0014A848  38 21 00 10 */	addi r1, r1, 0x10
/* 8014D90C 0014A84C  4E 80 00 20 */	blr 
.endfn pmTogglePlayer__Q24Game15BaseGameSectionFv
.endif

.fn onTogglePlayer__Q24Game15BaseGameSectionFv, weak
/* 8014D910 0014A850  4E 80 00 20 */	blr 
.endfn onTogglePlayer__Q24Game15BaseGameSectionFv

.fn onPlayerJoin__Q24Game15BaseGameSectionFv, weak
/* 8014D914 0014A854  4E 80 00 20 */	blr 
.endfn onPlayerJoin__Q24Game15BaseGameSectionFv

.if version == 0
.fn setPlayerMode__Q24Game15BaseGameSectionFi, global
/* 8014D918 0014A858  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014D91C 0014A85C  7C 08 02 A6 */	mflr r0
/* 8014D920 0014A860  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014D924 0014A864  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014D928 0014A868  7C 9F 23 78 */	mr r31, r4
/* 8014D92C 0014A86C  38 80 00 00 */	li r4, 0
/* 8014D930 0014A870  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014D934 0014A874  7C 7E 1B 78 */	mr r30, r3
/* 8014D938 0014A878  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014D93C 0014A87C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8014D940 0014A880  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D944 0014A884  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D948 0014A888  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D94C 0014A88C  7D 89 03 A6 */	mtctr r12
/* 8014D950 0014A890  4E 80 04 21 */	bctrl 
/* 8014D954 0014A894  7C 7C 1B 78 */	mr r28, r3
/* 8014D958 0014A898  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D95C 0014A89C  38 80 00 01 */	li r4, 1
/* 8014D960 0014A8A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D964 0014A8A4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D968 0014A8A8  7D 89 03 A6 */	mtctr r12
/* 8014D96C 0014A8AC  4E 80 04 21 */	bctrl 
/* 8014D970 0014A8B0  7C 7D 1B 78 */	mr r29, r3
/* 8014D974 0014A8B4  7F 83 E3 78 */	mr r3, r28
/* 8014D978 0014A8B8  4B FF 61 81 */	bl disableController__Q24Game4NaviFv
/* 8014D97C 0014A8BC  7F A3 EB 78 */	mr r3, r29
/* 8014D980 0014A8C0  4B FF 61 79 */	bl disableController__Q24Game4NaviFv
/* 8014D984 0014A8C4  2C 1F 00 01 */	cmpwi r31, 1
/* 8014D988 0014A8C8  41 82 00 F8 */	beq .L_8014DA80
/* 8014D98C 0014A8CC  40 80 00 10 */	bge .L_8014D99C
/* 8014D990 0014A8D0  2C 1F 00 00 */	cmpwi r31, 0
/* 8014D994 0014A8D4  40 80 00 14 */	bge .L_8014D9A8
/* 8014D998 0014A8D8  48 00 02 14 */	b .L_8014DBAC
.L_8014D99C:
/* 8014D99C 0014A8DC  2C 1F 00 03 */	cmpwi r31, 3
/* 8014D9A0 0014A8E0  40 80 02 0C */	bge .L_8014DBAC
/* 8014D9A4 0014A8E4  48 00 01 D4 */	b .L_8014DB78
.L_8014D9A8:
/* 8014D9A8 0014A8E8  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014D9AC 0014A8EC  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D9B0 0014A8F0  D0 3E 00 E8 */	stfs f1, 0x108(r30)
/* 8014D9B4 0014A8F4  D0 1E 00 EC */	stfs f0, 0x10c(r30)
/* 8014D9B8 0014A8F8  80 7E 01 18 */	lwz r3, 0x138(r30)
/* 8014D9BC 0014A8FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D9C0 0014A900  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014D9C4 0014A904  7D 89 03 A6 */	mtctr r12
/* 8014D9C8 0014A908  4E 80 04 21 */	bctrl 
/* 8014D9CC 0014A90C  80 7E 01 08 */	lwz r3, 0x128(r30)
/* 8014D9D0 0014A910  38 80 00 00 */	li r4, 0
/* 8014D9D4 0014A914  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D9D8 0014A918  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8014D9DC 0014A91C  7D 89 03 A6 */	mtctr r12
/* 8014D9E0 0014A920  4E 80 04 21 */	bctrl 
/* 8014D9E4 0014A924  80 9E 01 04 */	lwz r4, 0x124(r30)
/* 8014D9E8 0014A928  38 84 00 34 */	addi r4, r4, 0x34
/* 8014D9EC 0014A92C  4B F9 C8 E1 */	bl PSMTXCopy
/* 8014D9F0 0014A930  80 7E 01 04 */	lwz r3, 0x124(r30)
/* 8014D9F4 0014A934  48 2C D3 C1 */	bl update__6CameraFv
/* 8014D9F8 0014A938  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014D9FC 0014A93C  38 80 00 00 */	li r4, 0
/* 8014DA00 0014A940  80 AD 92 B0 */	lwz r5, cameraMgrCallback@sda21(r13)
/* 8014DA04 0014A944  48 10 4C 55 */	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
/* 8014DA08 0014A948  80 1E 01 14 */	lwz r0, 0x134(r30)
/* 8014DA0C 0014A94C  2C 00 00 01 */	cmpwi r0, 1
/* 8014DA10 0014A950  40 82 00 3C */	bne .L_8014DA4C
/* 8014DA14 0014A954  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DA18 0014A958  38 80 00 00 */	li r4, 0
/* 8014DA1C 0014A95C  83 BE 01 04 */	lwz r29, 0x124(r30)
/* 8014DA20 0014A960  83 83 00 24 */	lwz r28, 0x24(r3)
/* 8014DA24 0014A964  7F 83 E3 78 */	mr r3, r28
/* 8014DA28 0014A968  48 2D 7B C9 */	bl getViewport__8GraphicsFi
/* 8014DA2C 0014A96C  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DA30 0014A970  48 2D 78 61 */	bl updateCameraAspect__8ViewportFv
/* 8014DA34 0014A974  83 BE 01 08 */	lwz r29, 0x128(r30)
/* 8014DA38 0014A978  7F 83 E3 78 */	mr r3, r28
/* 8014DA3C 0014A97C  38 80 00 01 */	li r4, 1
/* 8014DA40 0014A980  48 2D 7B B1 */	bl getViewport__8GraphicsFi
/* 8014DA44 0014A984  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DA48 0014A988  48 2D 78 49 */	bl updateCameraAspect__8ViewportFv
.L_8014DA4C:
/* 8014DA4C 0014A98C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DA50 0014A990  38 80 00 00 */	li r4, 0
/* 8014DA54 0014A994  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DA58 0014A998  48 2D 7B 99 */	bl getViewport__8GraphicsFi
/* 8014DA5C 0014A99C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DA60 0014A9A0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DA64 0014A9A4  90 64 02 5C */	stw r3, 0x25c(r4)
/* 8014DA68 0014A9A8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DA6C 0014A9AC  80 7E 01 28 */	lwz r3, 0x148(r30)
/* 8014DA70 0014A9B0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DA74 0014A9B4  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 8014DA78 0014A9B8  4B FD 45 31 */	bl updatePosition__Q24Game12GameLightMgrFP8Viewport
/* 8014DA7C 0014A9BC  48 00 01 30 */	b .L_8014DBAC
.L_8014DA80:
/* 8014DA80 0014A9C0  80 1E 01 14 */	lwz r0, 0x134(r30)
/* 8014DA84 0014A9C4  2C 00 00 01 */	cmpwi r0, 1
/* 8014DA88 0014A9C8  40 82 00 5C */	bne .L_8014DAE4
/* 8014DA8C 0014A9CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DA90 0014A9D0  38 80 00 00 */	li r4, 0
/* 8014DA94 0014A9D4  83 BE 01 08 */	lwz r29, 0x128(r30)
/* 8014DA98 0014A9D8  83 83 00 24 */	lwz r28, 0x24(r3)
/* 8014DA9C 0014A9DC  7F 83 E3 78 */	mr r3, r28
/* 8014DAA0 0014A9E0  48 2D 7B 51 */	bl getViewport__8GraphicsFi
/* 8014DAA4 0014A9E4  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DAA8 0014A9E8  48 2D 77 E9 */	bl updateCameraAspect__8ViewportFv
/* 8014DAAC 0014A9EC  83 BE 01 04 */	lwz r29, 0x124(r30)
/* 8014DAB0 0014A9F0  7F 83 E3 78 */	mr r3, r28
/* 8014DAB4 0014A9F4  38 80 00 01 */	li r4, 1
/* 8014DAB8 0014A9F8  48 2D 7B 39 */	bl getViewport__8GraphicsFi
/* 8014DABC 0014A9FC  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DAC0 0014AA00  48 2D 77 D1 */	bl updateCameraAspect__8ViewportFv
/* 8014DAC4 0014AA04  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014DAC8 0014AA08  D0 3E 00 E8 */	stfs f1, 0x108(r30)
/* 8014DACC 0014AA0C  80 7E 01 18 */	lwz r3, 0x138(r30)
/* 8014DAD0 0014AA10  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DAD4 0014AA14  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014DAD8 0014AA18  7D 89 03 A6 */	mtctr r12
/* 8014DADC 0014AA1C  4E 80 04 21 */	bctrl 
/* 8014DAE0 0014AA20  48 00 00 20 */	b .L_8014DB00
.L_8014DAE4:
/* 8014DAE4 0014AA24  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014DAE8 0014AA28  D0 3E 00 E8 */	stfs f1, 0x108(r30)
/* 8014DAEC 0014AA2C  80 7E 01 18 */	lwz r3, 0x138(r30)
/* 8014DAF0 0014AA30  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DAF4 0014AA34  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014DAF8 0014AA38  7D 89 03 A6 */	mtctr r12
/* 8014DAFC 0014AA3C  4E 80 04 21 */	bctrl 
.L_8014DB00:
/* 8014DB00 0014AA40  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014DB04 0014AA44  38 80 00 00 */	li r4, 0
/* 8014DB08 0014AA48  D0 1E 00 EC */	stfs f0, 0x10c(r30)
/* 8014DB0C 0014AA4C  80 7E 01 04 */	lwz r3, 0x124(r30)
/* 8014DB10 0014AA50  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DB14 0014AA54  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8014DB18 0014AA58  7D 89 03 A6 */	mtctr r12
/* 8014DB1C 0014AA5C  4E 80 04 21 */	bctrl 
/* 8014DB20 0014AA60  80 9E 01 08 */	lwz r4, 0x128(r30)
/* 8014DB24 0014AA64  38 84 00 34 */	addi r4, r4, 0x34
/* 8014DB28 0014AA68  4B F9 C7 A5 */	bl PSMTXCopy
/* 8014DB2C 0014AA6C  80 7E 01 08 */	lwz r3, 0x128(r30)
/* 8014DB30 0014AA70  48 2C D2 85 */	bl update__6CameraFv
/* 8014DB34 0014AA74  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014DB38 0014AA78  38 80 00 01 */	li r4, 1
/* 8014DB3C 0014AA7C  80 AD 92 B0 */	lwz r5, cameraMgrCallback@sda21(r13)
/* 8014DB40 0014AA80  48 10 4B 19 */	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
/* 8014DB44 0014AA84  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DB48 0014AA88  38 80 00 01 */	li r4, 1
/* 8014DB4C 0014AA8C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DB50 0014AA90  48 2D 7A A1 */	bl getViewport__8GraphicsFi
/* 8014DB54 0014AA94  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DB58 0014AA98  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DB5C 0014AA9C  90 64 02 5C */	stw r3, 0x25c(r4)
/* 8014DB60 0014AAA0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DB64 0014AAA4  80 7E 01 28 */	lwz r3, 0x148(r30)
/* 8014DB68 0014AAA8  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DB6C 0014AAAC  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 8014DB70 0014AAB0  4B FD 44 39 */	bl updatePosition__Q24Game12GameLightMgrFP8Viewport
/* 8014DB74 0014AAB4  48 00 00 38 */	b .L_8014DBAC
.L_8014DB78:
/* 8014DB78 0014AAB8  C0 22 A1 EC */	lfs f1, lbl_8051854C@sda21(r2)
/* 8014DB7C 0014AABC  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014DB80 0014AAC0  D0 3E 00 E8 */	stfs f1, 0x108(r30)
/* 8014DB84 0014AAC4  D0 1E 00 EC */	stfs f0, 0x10c(r30)
/* 8014DB88 0014AAC8  80 7E 01 18 */	lwz r3, 0x138(r30)
/* 8014DB8C 0014AACC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DB90 0014AAD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014DB94 0014AAD4  7D 89 03 A6 */	mtctr r12
/* 8014DB98 0014AAD8  4E 80 04 21 */	bctrl 
/* 8014DB9C 0014AADC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014DBA0 0014AAE0  38 80 00 02 */	li r4, 2
/* 8014DBA4 0014AAE4  80 AD 92 B0 */	lwz r5, cameraMgrCallback@sda21(r13)
/* 8014DBA8 0014AAE8  48 10 4A B1 */	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
.L_8014DBAC:
/* 8014DBAC 0014AAEC  93 FE 00 E4 */	stw r31, 0x104(r30)
/* 8014DBB0 0014AAF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DBB4 0014AAF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014DBB8 0014AAF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014DBBC 0014AAFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014DBC0 0014AB00  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8014DBC4 0014AB04  7C 08 03 A6 */	mtlr r0
/* 8014DBC8 0014AB08  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DBCC 0014AB0C  4E 80 00 20 */	blr 
.endfn setPlayerMode__Q24Game15BaseGameSectionFi
.else
.fn setPlayerMode__Q24Game15BaseGameSectionFi, global
/* 8014D918 0014A858  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014D91C 0014A85C  7C 08 02 A6 */	mflr r0
/* 8014D920 0014A860  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014D924 0014A864  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014D928 0014A868  7C 9F 23 78 */	mr r31, r4
/* 8014D92C 0014A86C  38 80 00 00 */	li r4, 0
/* 8014D930 0014A870  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014D934 0014A874  7C 7E 1B 78 */	mr r30, r3
/* 8014D938 0014A878  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014D93C 0014A87C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8014D940 0014A880  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D944 0014A884  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D948 0014A888  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D94C 0014A88C  7D 89 03 A6 */	mtctr r12
/* 8014D950 0014A890  4E 80 04 21 */	bctrl 
/* 8014D954 0014A894  7C 7C 1B 78 */	mr r28, r3
/* 8014D958 0014A898  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014D95C 0014A89C  38 80 00 01 */	li r4, 1
/* 8014D960 0014A8A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D964 0014A8A4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014D968 0014A8A8  7D 89 03 A6 */	mtctr r12
/* 8014D96C 0014A8AC  4E 80 04 21 */	bctrl 
/* 8014D970 0014A8B0  7C 7D 1B 78 */	mr r29, r3
/* 8014D974 0014A8B4  7F 83 E3 78 */	mr r3, r28
/* 8014D978 0014A8B8  4B FF 61 81 */	bl disableController__Q24Game4NaviFv
/* 8014D97C 0014A8BC  7F A3 EB 78 */	mr r3, r29
/* 8014D980 0014A8C0  4B FF 61 79 */	bl disableController__Q24Game4NaviFv
/* 8014D984 0014A8C4  2C 1F 00 01 */	cmpwi r31, 1
/* 8014D988 0014A8C8  41 82 00 F8 */	beq .L_8014DA80
/* 8014D98C 0014A8CC  40 80 00 10 */	bge .L_8014D99C
/* 8014D990 0014A8D0  2C 1F 00 00 */	cmpwi r31, 0
/* 8014D994 0014A8D4  40 80 00 14 */	bge .L_8014D9A8
/* 8014D998 0014A8D8  48 00 02 14 */	b .L_8014DBAC
.L_8014D99C:
/* 8014D99C 0014A8DC  2C 1F 00 03 */	cmpwi r31, 3
/* 8014D9A0 0014A8E0  40 80 02 0C */	bge .L_8014DBAC
/* 8014D9A4 0014A8E4  48 00 01 D4 */	b .L_8014DB78
.L_8014D9A8:
/* 8014D9A8 0014A8E8  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014D9AC 0014A8EC  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014D9B0 0014A8F0  D0 3E 00 E8 */	stfs f1, 0xe8(r30)
/* 8014D9B4 0014A8F4  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 8014D9B8 0014A8F8  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 8014D9BC 0014A8FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D9C0 0014A900  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014D9C4 0014A904  7D 89 03 A6 */	mtctr r12
/* 8014D9C8 0014A908  4E 80 04 21 */	bctrl 
/* 8014D9CC 0014A90C  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8014D9D0 0014A910  38 80 00 00 */	li r4, 0
/* 8014D9D4 0014A914  81 83 00 00 */	lwz r12, 0(r3)
/* 8014D9D8 0014A918  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8014D9DC 0014A91C  7D 89 03 A6 */	mtctr r12
/* 8014D9E0 0014A920  4E 80 04 21 */	bctrl 
/* 8014D9E4 0014A924  80 9E 01 04 */	lwz r4, 0x104(r30)
/* 8014D9E8 0014A928  38 84 00 34 */	addi r4, r4, 0x34
/* 8014D9EC 0014A92C  4B F9 C8 E1 */	bl PSMTXCopy
/* 8014D9F0 0014A930  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8014D9F4 0014A934  48 2C D3 C1 */	bl update__6CameraFv
/* 8014D9F8 0014A938  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014D9FC 0014A93C  38 80 00 00 */	li r4, 0
/* 8014DA00 0014A940  80 AD 92 B0 */	lwz r5, cameraMgrCallback@sda21(r13)
/* 8014DA04 0014A944  48 10 4C 55 */	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
/* 8014DA08 0014A948  80 1E 01 14 */	lwz r0, 0x114(r30)
/* 8014DA0C 0014A94C  2C 00 00 01 */	cmpwi r0, 1
/* 8014DA10 0014A950  40 82 00 3C */	bne .L_8014DA4C
/* 8014DA14 0014A954  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DA18 0014A958  38 80 00 00 */	li r4, 0
/* 8014DA1C 0014A95C  83 BE 01 04 */	lwz r29, 0x104(r30)
/* 8014DA20 0014A960  83 83 00 24 */	lwz r28, 0x24(r3)
/* 8014DA24 0014A964  7F 83 E3 78 */	mr r3, r28
/* 8014DA28 0014A968  48 2D 7B C9 */	bl getViewport__8GraphicsFi
/* 8014DA2C 0014A96C  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DA30 0014A970  48 2D 78 61 */	bl updateCameraAspect__8ViewportFv
/* 8014DA34 0014A974  83 BE 01 08 */	lwz r29, 0x108(r30)
/* 8014DA38 0014A978  7F 83 E3 78 */	mr r3, r28
/* 8014DA3C 0014A97C  38 80 00 01 */	li r4, 1
/* 8014DA40 0014A980  48 2D 7B B1 */	bl getViewport__8GraphicsFi
/* 8014DA44 0014A984  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DA48 0014A988  48 2D 78 49 */	bl updateCameraAspect__8ViewportFv
.L_8014DA4C:
/* 8014DA4C 0014A98C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DA50 0014A990  38 80 00 00 */	li r4, 0
/* 8014DA54 0014A994  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DA58 0014A998  48 2D 7B 99 */	bl getViewport__8GraphicsFi
/* 8014DA5C 0014A99C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DA60 0014A9A0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DA64 0014A9A4  90 64 02 5C */	stw r3, 0x25c(r4)
/* 8014DA68 0014A9A8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DA6C 0014A9AC  80 7E 01 28 */	lwz r3, 0x128(r30)
/* 8014DA70 0014A9B0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DA74 0014A9B4  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 8014DA78 0014A9B8  4B FD 45 31 */	bl updatePosition__Q24Game12GameLightMgrFP8Viewport
/* 8014DA7C 0014A9BC  48 00 01 30 */	b .L_8014DBAC
.L_8014DA80:
/* 8014DA80 0014A9C0  80 1E 01 14 */	lwz r0, 0x114(r30)
/* 8014DA84 0014A9C4  2C 00 00 01 */	cmpwi r0, 1
/* 8014DA88 0014A9C8  40 82 00 5C */	bne .L_8014DAE4
/* 8014DA8C 0014A9CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DA90 0014A9D0  38 80 00 00 */	li r4, 0
/* 8014DA94 0014A9D4  83 BE 01 08 */	lwz r29, 0x108(r30)
/* 8014DA98 0014A9D8  83 83 00 24 */	lwz r28, 0x24(r3)
/* 8014DA9C 0014A9DC  7F 83 E3 78 */	mr r3, r28
/* 8014DAA0 0014A9E0  48 2D 7B 51 */	bl getViewport__8GraphicsFi
/* 8014DAA4 0014A9E4  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DAA8 0014A9E8  48 2D 77 E9 */	bl updateCameraAspect__8ViewportFv
/* 8014DAAC 0014A9EC  83 BE 01 04 */	lwz r29, 0x104(r30)
/* 8014DAB0 0014A9F0  7F 83 E3 78 */	mr r3, r28
/* 8014DAB4 0014A9F4  38 80 00 01 */	li r4, 1
/* 8014DAB8 0014A9F8  48 2D 7B 39 */	bl getViewport__8GraphicsFi
/* 8014DABC 0014A9FC  93 A3 00 44 */	stw r29, 0x44(r3)
/* 8014DAC0 0014AA00  48 2D 77 D1 */	bl updateCameraAspect__8ViewportFv
/* 8014DAC4 0014AA04  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014DAC8 0014AA08  D0 3E 00 E8 */	stfs f1, 0xe8(r30)
/* 8014DACC 0014AA0C  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 8014DAD0 0014AA10  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DAD4 0014AA14  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014DAD8 0014AA18  7D 89 03 A6 */	mtctr r12
/* 8014DADC 0014AA1C  4E 80 04 21 */	bctrl 
/* 8014DAE0 0014AA20  48 00 00 20 */	b .L_8014DB00
.L_8014DAE4:
/* 8014DAE4 0014AA24  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014DAE8 0014AA28  D0 3E 00 E8 */	stfs f1, 0xe8(r30)
/* 8014DAEC 0014AA2C  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 8014DAF0 0014AA30  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DAF4 0014AA34  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014DAF8 0014AA38  7D 89 03 A6 */	mtctr r12
/* 8014DAFC 0014AA3C  4E 80 04 21 */	bctrl 
.L_8014DB00:
/* 8014DB00 0014AA40  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014DB04 0014AA44  38 80 00 00 */	li r4, 0
/* 8014DB08 0014AA48  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 8014DB0C 0014AA4C  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8014DB10 0014AA50  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DB14 0014AA54  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8014DB18 0014AA58  7D 89 03 A6 */	mtctr r12
/* 8014DB1C 0014AA5C  4E 80 04 21 */	bctrl 
/* 8014DB20 0014AA60  80 9E 01 08 */	lwz r4, 0x108(r30)
/* 8014DB24 0014AA64  38 84 00 34 */	addi r4, r4, 0x34
/* 8014DB28 0014AA68  4B F9 C7 A5 */	bl PSMTXCopy
/* 8014DB2C 0014AA6C  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8014DB30 0014AA70  48 2C D2 85 */	bl update__6CameraFv
/* 8014DB34 0014AA74  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014DB38 0014AA78  38 80 00 01 */	li r4, 1
/* 8014DB3C 0014AA7C  80 AD 92 B0 */	lwz r5, cameraMgrCallback@sda21(r13)
/* 8014DB40 0014AA80  48 10 4B 19 */	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
/* 8014DB44 0014AA84  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DB48 0014AA88  38 80 00 01 */	li r4, 1
/* 8014DB4C 0014AA8C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DB50 0014AA90  48 2D 7A A1 */	bl getViewport__8GraphicsFi
/* 8014DB54 0014AA94  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DB58 0014AA98  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DB5C 0014AA9C  90 64 02 5C */	stw r3, 0x25c(r4)
/* 8014DB60 0014AAA0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8014DB64 0014AAA4  80 7E 01 28 */	lwz r3, 0x128(r30)
/* 8014DB68 0014AAA8  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014DB6C 0014AAAC  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 8014DB70 0014AAB0  4B FD 44 39 */	bl updatePosition__Q24Game12GameLightMgrFP8Viewport
/* 8014DB74 0014AAB4  48 00 00 38 */	b .L_8014DBAC
.L_8014DB78:
/* 8014DB78 0014AAB8  C0 22 A1 EC */	lfs f1, lbl_8051854C@sda21(r2)
/* 8014DB7C 0014AABC  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014DB80 0014AAC0  D0 3E 00 E8 */	stfs f1, 0xe8(r30)
/* 8014DB84 0014AAC4  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 8014DB88 0014AAC8  80 7E 01 18 */	lwz r3, 0x118(r30)
/* 8014DB8C 0014AACC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DB90 0014AAD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014DB94 0014AAD4  7D 89 03 A6 */	mtctr r12
/* 8014DB98 0014AAD8  4E 80 04 21 */	bctrl 
/* 8014DB9C 0014AADC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014DBA0 0014AAE0  38 80 00 02 */	li r4, 2
/* 8014DBA4 0014AAE4  80 AD 92 B0 */	lwz r5, cameraMgrCallback@sda21(r13)
/* 8014DBA8 0014AAE8  48 10 4A B1 */	bl "changePlayerMode__Q24Game9CameraMgrFiP30IDelegate1<PQ24Game9CameraArg>"
.L_8014DBAC:
/* 8014DBAC 0014AAEC  93 FE 00 E4 */	stw r31, 0xe4(r30)
/* 8014DBB0 0014AAF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DBB4 0014AAF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014DBB8 0014AAF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014DBBC 0014AAFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014DBC0 0014AB00  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8014DBC4 0014AB04  7C 08 03 A6 */	mtlr r0
/* 8014DBC8 0014AB08  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DBCC 0014AB0C  4E 80 00 20 */	blr 
.endfn setPlayerMode__Q24Game15BaseGameSectionFi
.endif

.fn split2__8SplitterFf, weak
/* 8014DBD0 0014AB10  4E 80 00 20 */	blr 
.endfn split2__8SplitterFf

.fn onCameraBlendFinished__Q24Game15BaseGameSectionFPQ24Game9CameraArg, global
/* 8014DBD4 0014AB14  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8014DBD8 0014AB18  7C 08 02 A6 */	mflr r0
/* 8014DBDC 0014AB1C  3C 80 80 48 */	lis r4, lbl_8047C948@ha
/* 8014DBE0 0014AB20  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014DBE4 0014AB24  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8014DBE8 0014AB28  3B E4 C9 48 */	addi r31, r4, lbl_8047C948@l
/* 8014DBEC 0014AB2C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8014DBF0 0014AB30  48 00 01 99 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8014DBF4 0014AB34  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014DBF8 0014AB38  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014DBFC 0014AB3C  2C 00 00 00 */	cmpwi r0, 0
/* 8014DC00 0014AB40  40 82 01 08 */	bne .L_8014DD08
/* 8014DC04 0014AB44  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014DC08 0014AB48  38 80 00 26 */	li r4, 0x26
/* 8014DC0C 0014AB4C  48 09 97 D5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8014DC10 0014AB50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014DC14 0014AB54  40 82 00 F4 */	bne .L_8014DD08
/* 8014DC18 0014AB58  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014DC1C 0014AB5C  38 80 00 25 */	li r4, 0x25
/* 8014DC20 0014AB60  48 09 97 C1 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8014DC24 0014AB64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014DC28 0014AB68  41 82 00 E0 */	beq .L_8014DD08
/* 8014DC2C 0014AB6C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014DC30 0014AB70  38 80 00 01 */	li r4, 1
/* 8014DC34 0014AB74  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DC38 0014AB78  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014DC3C 0014AB7C  7D 89 03 A6 */	mtctr r12
/* 8014DC40 0014AB80  4E 80 04 21 */	bctrl 
/* 8014DC44 0014AB84  7C 7E 1B 79 */	or. r30, r3, r3
/* 8014DC48 0014AB88  40 82 00 18 */	bne .L_8014DC60
/* 8014DC4C 0014AB8C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8014DC50 0014AB90  38 BF 02 64 */	addi r5, r31, 0x264
/* 8014DC54 0014AB94  38 80 0C 10 */	li r4, 0xc10
/* 8014DC58 0014AB98  4C C6 31 82 */	crclr 6
/* 8014DC5C 0014AB9C  4B ED C9 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014DC60:
/* 8014DC60 0014ABA0  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014DC64 0014ABA4  38 00 00 00 */	li r0, 0
/* 8014DC68 0014ABA8  38 BF 02 70 */	addi r5, r31, 0x270
/* 8014DC6C 0014ABAC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8014DC70 0014ABB0  7F C4 F3 78 */	mr r4, r30
/* 8014DC74 0014ABB4  38 61 00 08 */	addi r3, r1, 8
/* 8014DC78 0014ABB8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8014DC7C 0014ABBC  90 01 00 20 */	stw r0, 0x20(r1)
/* 8014DC80 0014ABC0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8014DC84 0014ABC4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8014DC88 0014ABC8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8014DC8C 0014ABCC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8014DC90 0014ABD0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8014DC94 0014ABD4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DC98 0014ABD8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8014DC9C 0014ABDC  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014DCA0 0014ABE0  90 01 00 28 */	stw r0, 0x28(r1)
/* 8014DCA4 0014ABE4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014DCA8 0014ABE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014DCAC 0014ABEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014DCB0 0014ABF0  7D 89 03 A6 */	mtctr r12
/* 8014DCB4 0014ABF4  4E 80 04 21 */	bctrl 
/* 8014DCB8 0014ABF8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8014DCBC 0014ABFC  7F C3 F3 78 */	mr r3, r30
/* 8014DCC0 0014AC00  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8014DCC4 0014AC04  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8014DCC8 0014AC08  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8014DCCC 0014AC0C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8014DCD0 0014AC10  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8014DCD4 0014AC14  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014DCD8 0014AC18  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8014DCDC 0014AC1C  7D 89 03 A6 */	mtctr r12
/* 8014DCE0 0014AC20  4E 80 04 21 */	bctrl 
/* 8014DCE4 0014AC24  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8014DCE8 0014AC28  38 81 00 14 */	addi r4, r1, 0x14
/* 8014DCEC 0014AC2C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DCF0 0014AC30  93 C3 01 94 */	stw r30, 0x194(r3)
/* 8014DCF4 0014AC34  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DCF8 0014AC38  48 2D EC D9 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8014DCFC 0014AC3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8014DD00 0014AC40  38 80 00 26 */	li r4, 0x26
/* 8014DD04 0014AC44  48 09 96 A1 */	bl setDemoFlag__Q24Game8PlayDataFi
.L_8014DD08:
/* 8014DD08 0014AC48  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014DD0C 0014AC4C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8014DD10 0014AC50  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8014DD14 0014AC54  7C 08 03 A6 */	mtlr r0
/* 8014DD18 0014AC58  38 21 00 50 */	addi r1, r1, 0x50
/* 8014DD1C 0014AC5C  4E 80 00 20 */	blr 
.endfn onCameraBlendFinished__Q24Game15BaseGameSectionFPQ24Game9CameraArg

.if version == 0
.fn setFixNearFar__Q24Game15BaseGameSectionFbff, global
/* 8014DD20 0014AC60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DD24 0014AC64  7C 08 02 A6 */	mflr r0
/* 8014DD28 0014AC68  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DD2C 0014AC6C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014DD30 0014AC70  FF E0 10 90 */	fmr f31, f2
/* 8014DD34 0014AC74  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8014DD38 0014AC78  FF C0 08 90 */	fmr f30, f1
/* 8014DD3C 0014AC7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014DD40 0014AC80  7C 9F 23 78 */	mr r31, r4
/* 8014DD44 0014AC84  93 C1 00 08 */	stw r30, 8(r1)
/* 8014DD48 0014AC88  7C 7E 1B 78 */	mr r30, r3
/* 8014DD4C 0014AC8C  80 63 01 04 */	lwz r3, 0x124(r3)
/* 8014DD50 0014AC90  48 2C CA F1 */	bl setFixNearFar__6CameraFbff
/* 8014DD54 0014AC94  FC 20 F0 90 */	fmr f1, f30
/* 8014DD58 0014AC98  80 7E 01 08 */	lwz r3, 0x128(r30)
/* 8014DD5C 0014AC9C  FC 40 F8 90 */	fmr f2, f31
/* 8014DD60 0014ACA0  7F E4 FB 78 */	mr r4, r31
/* 8014DD64 0014ACA4  48 2C CA DD */	bl setFixNearFar__6CameraFbff
/* 8014DD68 0014ACA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DD6C 0014ACAC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014DD70 0014ACB0  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8014DD74 0014ACB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014DD78 0014ACB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014DD7C 0014ACBC  7C 08 03 A6 */	mtlr r0
/* 8014DD80 0014ACC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DD84 0014ACC4  4E 80 00 20 */	blr 
.endfn setFixNearFar__Q24Game15BaseGameSectionFbff
.else
.fn setFixNearFar__Q24Game15BaseGameSectionFbff, global
/* 8014DD20 0014AC60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DD24 0014AC64  7C 08 02 A6 */	mflr r0
/* 8014DD28 0014AC68  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DD2C 0014AC6C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8014DD30 0014AC70  FF E0 10 90 */	fmr f31, f2
/* 8014DD34 0014AC74  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8014DD38 0014AC78  FF C0 08 90 */	fmr f30, f1
/* 8014DD3C 0014AC7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014DD40 0014AC80  7C 9F 23 78 */	mr r31, r4
/* 8014DD44 0014AC84  93 C1 00 08 */	stw r30, 8(r1)
/* 8014DD48 0014AC88  7C 7E 1B 78 */	mr r30, r3
/* 8014DD4C 0014AC8C  80 63 01 04 */	lwz r3, 0x104(r3)
/* 8014DD50 0014AC90  48 2C CA F1 */	bl setFixNearFar__6CameraFbff
/* 8014DD54 0014AC94  FC 20 F0 90 */	fmr f1, f30
/* 8014DD58 0014AC98  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8014DD5C 0014AC9C  FC 40 F8 90 */	fmr f2, f31
/* 8014DD60 0014ACA0  7F E4 FB 78 */	mr r4, r31
/* 8014DD64 0014ACA4  48 2C CA DD */	bl setFixNearFar__6CameraFbff
/* 8014DD68 0014ACA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DD6C 0014ACAC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8014DD70 0014ACB0  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8014DD74 0014ACB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014DD78 0014ACB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014DD7C 0014ACBC  7C 08 03 A6 */	mtlr r0
/* 8014DD80 0014ACC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DD84 0014ACC4  4E 80 00 20 */	blr 
.endfn setFixNearFar__Q24Game15BaseGameSectionFbff
.endif

.if version == 0
.fn setCamController__Q24Game15BaseGameSectionFv, global
/* 8014DD88 0014ACC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DD8C 0014ACCC  7C 08 02 A6 */	mflr r0
/* 8014DD90 0014ACD0  38 80 00 00 */	li r4, 0
/* 8014DD94 0014ACD4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DD98 0014ACD8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014DD9C 0014ACDC  7C 7F 1B 78 */	mr r31, r3
/* 8014DDA0 0014ACE0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014DDA4 0014ACE4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014DDA8 0014ACE8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014DDAC 0014ACEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DDB0 0014ACF0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014DDB4 0014ACF4  7D 89 03 A6 */	mtctr r12
/* 8014DDB8 0014ACF8  4E 80 04 21 */	bctrl 
/* 8014DDBC 0014ACFC  7C 7D 1B 78 */	mr r29, r3
/* 8014DDC0 0014AD00  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014DDC4 0014AD04  38 80 00 01 */	li r4, 1
/* 8014DDC8 0014AD08  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DDCC 0014AD0C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014DDD0 0014AD10  7D 89 03 A6 */	mtctr r12
/* 8014DDD4 0014AD14  4E 80 04 21 */	bctrl 
/* 8014DDD8 0014AD18  80 1F 00 E4 */	lwz r0, 0x104(r31)
/* 8014DDDC 0014AD1C  7C 7E 1B 78 */	mr r30, r3
/* 8014DDE0 0014AD20  2C 00 00 01 */	cmpwi r0, 1
/* 8014DDE4 0014AD24  41 82 00 A0 */	beq .L_8014DE84
/* 8014DDE8 0014AD28  40 80 00 10 */	bge .L_8014DDF8
/* 8014DDEC 0014AD2C  2C 00 00 00 */	cmpwi r0, 0
/* 8014DDF0 0014AD30  40 80 00 14 */	bge .L_8014DE04
/* 8014DDF4 0014AD34  48 00 01 70 */	b .L_8014DF64
.L_8014DDF8:
/* 8014DDF8 0014AD38  2C 00 00 03 */	cmpwi r0, 3
/* 8014DDFC 0014AD3C  40 80 01 68 */	bge .L_8014DF64
/* 8014DE00 0014AD40  48 00 01 08 */	b .L_8014DF08
.L_8014DE04:
/* 8014DE04 0014AD44  80 1F 01 04 */	lwz r0, 0x124(r31)
/* 8014DE08 0014AD48  90 1D 02 80 */	stw r0, 0x280(r29)
/* 8014DE0C 0014AD4C  90 1D 02 84 */	stw r0, 0x284(r29)
/* 8014DE10 0014AD50  80 1F 01 0C */	lwz r0, 0x12c(r31)
/* 8014DE14 0014AD54  90 1D 02 78 */	stw r0, 0x278(r29)
/* 8014DE18 0014AD58  90 1D 02 7C */	stw r0, 0x27c(r29)
/* 8014DE1C 0014AD5C  4B FF 5C DD */	bl disableController__Q24Game4NaviFv
/* 8014DE20 0014AD60  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DE24 0014AD64  38 80 00 00 */	li r4, 0
/* 8014DE28 0014AD68  93 A3 01 8C */	stw r29, 0x18c(r3)
/* 8014DE2C 0014AD6C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DE30 0014AD70  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DE34 0014AD74  48 2D 77 BD */	bl getViewport__8GraphicsFi
/* 8014DE38 0014AD78  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 8014DE3C 0014AD7C  38 80 00 00 */	li r4, 0
/* 8014DE40 0014AD80  90 65 01 98 */	stw r3, 0x198(r5)
/* 8014DE44 0014AD84  80 1F 01 04 */	lwz r0, 0x124(r31)
/* 8014DE48 0014AD88  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DE4C 0014AD8C  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014DE50 0014AD90  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014DE54 0014AD94  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014DE58 0014AD98  2C 00 00 01 */	cmpwi r0, 1
/* 8014DE5C 0014AD9C  41 82 00 0C */	beq .L_8014DE68
/* 8014DE60 0014ADA0  2C 00 00 03 */	cmpwi r0, 3
/* 8014DE64 0014ADA4  40 82 00 08 */	bne .L_8014DE6C
.L_8014DE68:
/* 8014DE68 0014ADA8  38 80 00 01 */	li r4, 1
.L_8014DE6C:
/* 8014DE6C 0014ADAC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014DE70 0014ADB0  40 82 00 F4 */	bne .L_8014DF64
/* 8014DE74 0014ADB4  38 60 00 00 */	li r3, 0
/* 8014DE78 0014ADB8  48 31 53 75 */	bl PSSetCurCameraNo__FUc
/* 8014DE7C 0014ADBC  48 1E 9D B1 */	bl PSPlayerChangeToOrimer__Fv
/* 8014DE80 0014ADC0  48 00 00 E4 */	b .L_8014DF64
.L_8014DE84:
/* 8014DE84 0014ADC4  7F A3 EB 78 */	mr r3, r29
/* 8014DE88 0014ADC8  4B FF 5C 71 */	bl disableController__Q24Game4NaviFv
/* 8014DE8C 0014ADCC  80 1F 01 08 */	lwz r0, 0x128(r31)
/* 8014DE90 0014ADD0  38 80 00 01 */	li r4, 1
/* 8014DE94 0014ADD4  90 1E 02 80 */	stw r0, 0x280(r30)
/* 8014DE98 0014ADD8  90 1E 02 84 */	stw r0, 0x284(r30)
/* 8014DE9C 0014ADDC  80 1F 01 0C */	lwz r0, 0x12c(r31)
/* 8014DEA0 0014ADE0  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8014DEA4 0014ADE4  90 1E 02 7C */	stw r0, 0x27c(r30)
/* 8014DEA8 0014ADE8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DEAC 0014ADEC  93 C3 01 8C */	stw r30, 0x18c(r3)
/* 8014DEB0 0014ADF0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DEB4 0014ADF4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DEB8 0014ADF8  48 2D 77 39 */	bl getViewport__8GraphicsFi
/* 8014DEBC 0014ADFC  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 8014DEC0 0014AE00  38 80 00 00 */	li r4, 0
/* 8014DEC4 0014AE04  90 65 01 98 */	stw r3, 0x198(r5)
/* 8014DEC8 0014AE08  80 1F 01 08 */	lwz r0, 0x128(r31)
/* 8014DECC 0014AE0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DED0 0014AE10  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014DED4 0014AE14  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014DED8 0014AE18  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014DEDC 0014AE1C  2C 00 00 01 */	cmpwi r0, 1
/* 8014DEE0 0014AE20  41 82 00 0C */	beq .L_8014DEEC
/* 8014DEE4 0014AE24  2C 00 00 03 */	cmpwi r0, 3
/* 8014DEE8 0014AE28  40 82 00 08 */	bne .L_8014DEF0
.L_8014DEEC:
/* 8014DEEC 0014AE2C  38 80 00 01 */	li r4, 1
.L_8014DEF0:
/* 8014DEF0 0014AE30  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014DEF4 0014AE34  40 82 00 70 */	bne .L_8014DF64
/* 8014DEF8 0014AE38  38 60 00 01 */	li r3, 1
/* 8014DEFC 0014AE3C  48 31 52 F1 */	bl PSSetCurCameraNo__FUc
/* 8014DF00 0014AE40  48 1E 9E CD */	bl PSPlayerChangeToLugie__Fv
/* 8014DF04 0014AE44  48 00 00 60 */	b .L_8014DF64
.L_8014DF08:
/* 8014DF08 0014AE48  80 1F 01 04 */	lwz r0, 0x124(r31)
/* 8014DF0C 0014AE4C  90 1D 02 80 */	stw r0, 0x280(r29)
/* 8014DF10 0014AE50  90 1D 02 84 */	stw r0, 0x284(r29)
/* 8014DF14 0014AE54  80 1F 01 0C */	lwz r0, 0x12c(r31)
/* 8014DF18 0014AE58  90 1D 02 78 */	stw r0, 0x278(r29)
/* 8014DF1C 0014AE5C  90 1D 02 7C */	stw r0, 0x27c(r29)
/* 8014DF20 0014AE60  80 1F 01 08 */	lwz r0, 0x128(r31)
/* 8014DF24 0014AE64  90 1E 02 80 */	stw r0, 0x280(r30)
/* 8014DF28 0014AE68  90 1E 02 84 */	stw r0, 0x284(r30)
/* 8014DF2C 0014AE6C  80 1F 01 10 */	lwz r0, 0x130(r31)
/* 8014DF30 0014AE70  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8014DF34 0014AE74  90 1E 02 7C */	stw r0, 0x27c(r30)
/* 8014DF38 0014AE78  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DF3C 0014AE7C  93 A3 01 8C */	stw r29, 0x18c(r3)
/* 8014DF40 0014AE80  80 1F 01 04 */	lwz r0, 0x124(r31)
/* 8014DF44 0014AE84  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DF48 0014AE88  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014DF4C 0014AE8C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014DF50 0014AE90  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014DF54 0014AE94  2C 00 00 00 */	cmpwi r0, 0
/* 8014DF58 0014AE98  40 82 00 0C */	bne .L_8014DF64
/* 8014DF5C 0014AE9C  38 60 00 00 */	li r3, 0
/* 8014DF60 0014AEA0  48 31 52 8D */	bl PSSetCurCameraNo__FUc
.L_8014DF64:
/* 8014DF64 0014AEA4  7F E3 FB 78 */	mr r3, r31
/* 8014DF68 0014AEA8  80 9F 00 E4 */	lwz r4, 0x104(r31)
/* 8014DF6C 0014AEAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014DF70 0014AEB0  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8014DF74 0014AEB4  7D 89 03 A6 */	mtctr r12
/* 8014DF78 0014AEB8  4E 80 04 21 */	bctrl 
/* 8014DF7C 0014AEBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DF80 0014AEC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014DF84 0014AEC4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014DF88 0014AEC8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014DF8C 0014AECC  7C 08 03 A6 */	mtlr r0
/* 8014DF90 0014AED0  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DF94 0014AED4  4E 80 00 20 */	blr 
.endfn setCamController__Q24Game15BaseGameSectionFv
.else
.fn setCamController__Q24Game15BaseGameSectionFv, global
/* 8014DD88 0014ACC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014DD8C 0014ACCC  7C 08 02 A6 */	mflr r0
/* 8014DD90 0014ACD0  38 80 00 00 */	li r4, 0
/* 8014DD94 0014ACD4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014DD98 0014ACD8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014DD9C 0014ACDC  7C 7F 1B 78 */	mr r31, r3
/* 8014DDA0 0014ACE0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014DDA4 0014ACE4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014DDA8 0014ACE8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014DDAC 0014ACEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DDB0 0014ACF0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014DDB4 0014ACF4  7D 89 03 A6 */	mtctr r12
/* 8014DDB8 0014ACF8  4E 80 04 21 */	bctrl 
/* 8014DDBC 0014ACFC  7C 7D 1B 78 */	mr r29, r3
/* 8014DDC0 0014AD00  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014DDC4 0014AD04  38 80 00 01 */	li r4, 1
/* 8014DDC8 0014AD08  81 83 00 00 */	lwz r12, 0(r3)
/* 8014DDCC 0014AD0C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014DDD0 0014AD10  7D 89 03 A6 */	mtctr r12
/* 8014DDD4 0014AD14  4E 80 04 21 */	bctrl 
/* 8014DDD8 0014AD18  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 8014DDDC 0014AD1C  7C 7E 1B 78 */	mr r30, r3
/* 8014DDE0 0014AD20  2C 00 00 01 */	cmpwi r0, 1
/* 8014DDE4 0014AD24  41 82 00 A0 */	beq .L_8014DE84
/* 8014DDE8 0014AD28  40 80 00 10 */	bge .L_8014DDF8
/* 8014DDEC 0014AD2C  2C 00 00 00 */	cmpwi r0, 0
/* 8014DDF0 0014AD30  40 80 00 14 */	bge .L_8014DE04
/* 8014DDF4 0014AD34  48 00 01 70 */	b .L_8014DF64
.L_8014DDF8:
/* 8014DDF8 0014AD38  2C 00 00 03 */	cmpwi r0, 3
/* 8014DDFC 0014AD3C  40 80 01 68 */	bge .L_8014DF64
/* 8014DE00 0014AD40  48 00 01 08 */	b .L_8014DF08
.L_8014DE04:
/* 8014DE04 0014AD44  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8014DE08 0014AD48  90 1D 02 80 */	stw r0, 0x280(r29)
/* 8014DE0C 0014AD4C  90 1D 02 84 */	stw r0, 0x284(r29)
/* 8014DE10 0014AD50  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 8014DE14 0014AD54  90 1D 02 78 */	stw r0, 0x278(r29)
/* 8014DE18 0014AD58  90 1D 02 7C */	stw r0, 0x27c(r29)
/* 8014DE1C 0014AD5C  4B FF 5C DD */	bl disableController__Q24Game4NaviFv
/* 8014DE20 0014AD60  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DE24 0014AD64  38 80 00 00 */	li r4, 0
/* 8014DE28 0014AD68  93 A3 01 8C */	stw r29, 0x18c(r3)
/* 8014DE2C 0014AD6C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DE30 0014AD70  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DE34 0014AD74  48 2D 77 BD */	bl getViewport__8GraphicsFi
/* 8014DE38 0014AD78  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 8014DE3C 0014AD7C  38 80 00 00 */	li r4, 0
/* 8014DE40 0014AD80  90 65 01 98 */	stw r3, 0x198(r5)
/* 8014DE44 0014AD84  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8014DE48 0014AD88  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DE4C 0014AD8C  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014DE50 0014AD90  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014DE54 0014AD94  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014DE58 0014AD98  2C 00 00 01 */	cmpwi r0, 1
/* 8014DE5C 0014AD9C  41 82 00 0C */	beq .L_8014DE68
/* 8014DE60 0014ADA0  2C 00 00 03 */	cmpwi r0, 3
/* 8014DE64 0014ADA4  40 82 00 08 */	bne .L_8014DE6C
.L_8014DE68:
/* 8014DE68 0014ADA8  38 80 00 01 */	li r4, 1
.L_8014DE6C:
/* 8014DE6C 0014ADAC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014DE70 0014ADB0  40 82 00 F4 */	bne .L_8014DF64
/* 8014DE74 0014ADB4  38 60 00 00 */	li r3, 0
/* 8014DE78 0014ADB8  48 31 53 75 */	bl PSSetCurCameraNo__FUc
/* 8014DE7C 0014ADBC  48 1E 9D B1 */	bl PSPlayerChangeToOrimer__Fv
/* 8014DE80 0014ADC0  48 00 00 E4 */	b .L_8014DF64
.L_8014DE84:
/* 8014DE84 0014ADC4  7F A3 EB 78 */	mr r3, r29
/* 8014DE88 0014ADC8  4B FF 5C 71 */	bl disableController__Q24Game4NaviFv
/* 8014DE8C 0014ADCC  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 8014DE90 0014ADD0  38 80 00 01 */	li r4, 1
/* 8014DE94 0014ADD4  90 1E 02 80 */	stw r0, 0x280(r30)
/* 8014DE98 0014ADD8  90 1E 02 84 */	stw r0, 0x284(r30)
/* 8014DE9C 0014ADDC  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 8014DEA0 0014ADE0  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8014DEA4 0014ADE4  90 1E 02 7C */	stw r0, 0x27c(r30)
/* 8014DEA8 0014ADE8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DEAC 0014ADEC  93 C3 01 8C */	stw r30, 0x18c(r3)
/* 8014DEB0 0014ADF0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014DEB4 0014ADF4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014DEB8 0014ADF8  48 2D 77 39 */	bl getViewport__8GraphicsFi
/* 8014DEBC 0014ADFC  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 8014DEC0 0014AE00  38 80 00 00 */	li r4, 0
/* 8014DEC4 0014AE04  90 65 01 98 */	stw r3, 0x198(r5)
/* 8014DEC8 0014AE08  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 8014DECC 0014AE0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DED0 0014AE10  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014DED4 0014AE14  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014DED8 0014AE18  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014DEDC 0014AE1C  2C 00 00 01 */	cmpwi r0, 1
/* 8014DEE0 0014AE20  41 82 00 0C */	beq .L_8014DEEC
/* 8014DEE4 0014AE24  2C 00 00 03 */	cmpwi r0, 3
/* 8014DEE8 0014AE28  40 82 00 08 */	bne .L_8014DEF0
.L_8014DEEC:
/* 8014DEEC 0014AE2C  38 80 00 01 */	li r4, 1
.L_8014DEF0:
/* 8014DEF0 0014AE30  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014DEF4 0014AE34  40 82 00 70 */	bne .L_8014DF64
/* 8014DEF8 0014AE38  38 60 00 01 */	li r3, 1
/* 8014DEFC 0014AE3C  48 31 52 F1 */	bl PSSetCurCameraNo__FUc
/* 8014DF00 0014AE40  48 1E 9E CD */	bl PSPlayerChangeToLugie__Fv
/* 8014DF04 0014AE44  48 00 00 60 */	b .L_8014DF64
.L_8014DF08:
/* 8014DF08 0014AE48  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8014DF0C 0014AE4C  90 1D 02 80 */	stw r0, 0x280(r29)
/* 8014DF10 0014AE50  90 1D 02 84 */	stw r0, 0x284(r29)
/* 8014DF14 0014AE54  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 8014DF18 0014AE58  90 1D 02 78 */	stw r0, 0x278(r29)
/* 8014DF1C 0014AE5C  90 1D 02 7C */	stw r0, 0x27c(r29)
/* 8014DF20 0014AE60  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 8014DF24 0014AE64  90 1E 02 80 */	stw r0, 0x280(r30)
/* 8014DF28 0014AE68  90 1E 02 84 */	stw r0, 0x284(r30)
/* 8014DF2C 0014AE6C  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 8014DF30 0014AE70  90 1E 02 78 */	stw r0, 0x278(r30)
/* 8014DF34 0014AE74  90 1E 02 7C */	stw r0, 0x27c(r30)
/* 8014DF38 0014AE78  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DF3C 0014AE7C  93 A3 01 8C */	stw r29, 0x18c(r3)
/* 8014DF40 0014AE80  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 8014DF44 0014AE84  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014DF48 0014AE88  90 03 01 90 */	stw r0, 0x190(r3)
/* 8014DF4C 0014AE8C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014DF50 0014AE90  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014DF54 0014AE94  2C 00 00 00 */	cmpwi r0, 0
/* 8014DF58 0014AE98  40 82 00 0C */	bne .L_8014DF64
/* 8014DF5C 0014AE9C  38 60 00 00 */	li r3, 0
/* 8014DF60 0014AEA0  48 31 52 8D */	bl PSSetCurCameraNo__FUc
.L_8014DF64:
/* 8014DF64 0014AEA4  7F E3 FB 78 */	mr r3, r31
/* 8014DF68 0014AEA8  80 9F 00 E4 */	lwz r4, 0xe4(r31)
/* 8014DF6C 0014AEAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014DF70 0014AEB0  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8014DF74 0014AEB4  7D 89 03 A6 */	mtctr r12
/* 8014DF78 0014AEB8  4E 80 04 21 */	bctrl 
/* 8014DF7C 0014AEBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014DF80 0014AEC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014DF84 0014AEC4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014DF88 0014AEC8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014DF8C 0014AECC  7C 08 03 A6 */	mtlr r0
/* 8014DF90 0014AED0  38 21 00 20 */	addi r1, r1, 0x20
/* 8014DF94 0014AED4  4E 80 00 20 */	blr 
.endfn setCamController__Q24Game15BaseGameSectionFv
.endif

.fn on_setCamController__Q24Game15BaseGameSectionFi, weak
/* 8014DF98 0014AED8  4E 80 00 20 */	blr 
.endfn on_setCamController__Q24Game15BaseGameSectionFi

.if version == 0
.fn setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo, global
/* 8014DF9C 0014AEDC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014DFA0 0014AEE0  7C 08 02 A6 */	mflr r0
/* 8014DFA4 0014AEE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014DFA8 0014AEE8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014DFAC 0014AEEC  7C 9F 23 78 */	mr r31, r4
/* 8014DFB0 0014AEF0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014DFB4 0014AEF4  7C 7E 1B 78 */	mr r30, r3
/* 8014DFB8 0014AEF8  80 03 01 04 */	lwz r0, 0x124(r3)
/* 8014DFBC 0014AEFC  28 00 00 00 */	cmplwi r0, 0
/* 8014DFC0 0014AF00  40 82 00 20 */	bne .L_8014DFE0
/* 8014DFC4 0014AF04  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014DFC8 0014AF08  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014DFCC 0014AF0C  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014DFD0 0014AF10  38 80 0C 7D */	li r4, 0xc7d
/* 8014DFD4 0014AF14  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014DFD8 0014AF18  4C C6 31 82 */	crclr 6
/* 8014DFDC 0014AF1C  4B ED C6 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014DFE0:
/* 8014DFE0 0014AF20  80 1E 01 08 */	lwz r0, 0x128(r30)
/* 8014DFE4 0014AF24  28 00 00 00 */	cmplwi r0, 0
/* 8014DFE8 0014AF28  40 82 00 20 */	bne .L_8014E008
/* 8014DFEC 0014AF2C  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014DFF0 0014AF30  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014DFF4 0014AF34  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014DFF8 0014AF38  38 80 0C 7E */	li r4, 0xc7e
/* 8014DFFC 0014AF3C  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014E000 0014AF40  4C C6 31 82 */	crclr 6
/* 8014E004 0014AF44  4B ED C6 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014E008:
/* 8014E008 0014AF48  38 00 00 02 */	li r0, 2
/* 8014E00C 0014AF4C  98 1F 00 07 */	stb r0, 7(r31)
/* 8014E010 0014AF50  80 7E 01 04 */	lwz r3, 0x124(r30)
/* 8014E014 0014AF54  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E018 0014AF58  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E01C 0014AF5C  7D 89 03 A6 */	mtctr r12
/* 8014E020 0014AF60  4E 80 04 21 */	bctrl 
/* 8014E024 0014AF64  90 7F 00 08 */	stw r3, 8(r31)
/* 8014E028 0014AF68  80 7E 01 04 */	lwz r3, 0x124(r30)
/* 8014E02C 0014AF6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E030 0014AF70  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E034 0014AF74  7D 89 03 A6 */	mtctr r12
/* 8014E038 0014AF78  4E 80 04 21 */	bctrl 
/* 8014E03C 0014AF7C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8014E040 0014AF80  80 7E 01 04 */	lwz r3, 0x124(r30)
/* 8014E044 0014AF84  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E048 0014AF88  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8014E04C 0014AF8C  7D 89 03 A6 */	mtctr r12
/* 8014E050 0014AF90  4E 80 04 21 */	bctrl 
/* 8014E054 0014AF94  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8014E058 0014AF98  80 7E 01 08 */	lwz r3, 0x128(r30)
/* 8014E05C 0014AF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E060 0014AFA0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E064 0014AFA4  7D 89 03 A6 */	mtctr r12
/* 8014E068 0014AFA8  4E 80 04 21 */	bctrl 
/* 8014E06C 0014AFAC  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8014E070 0014AFB0  80 7E 01 08 */	lwz r3, 0x128(r30)
/* 8014E074 0014AFB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E078 0014AFB8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E07C 0014AFBC  7D 89 03 A6 */	mtctr r12
/* 8014E080 0014AFC0  4E 80 04 21 */	bctrl 
/* 8014E084 0014AFC4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 8014E088 0014AFC8  80 7E 01 08 */	lwz r3, 0x128(r30)
/* 8014E08C 0014AFCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E090 0014AFD0  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8014E094 0014AFD4  7D 89 03 A6 */	mtctr r12
/* 8014E098 0014AFD8  4E 80 04 21 */	bctrl 
/* 8014E09C 0014AFDC  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 8014E0A0 0014AFE0  38 81 00 08 */	addi r4, r1, 8
/* 8014E0A4 0014AFE4  C0 22 A1 F0 */	lfs f1, lbl_80518550@sda21(r2)
/* 8014E0A8 0014AFE8  C0 02 A1 F4 */	lfs f0, lbl_80518554@sda21(r2)
/* 8014E0AC 0014AFEC  D0 21 00 08 */	stfs f1, 8(r1)
/* 8014E0B0 0014AFF0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014E0B4 0014AFF4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8014E0B8 0014AFF8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8014E0BC 0014AFFC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8014E0C0 0014B000  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8014E0C4 0014B004  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8014E0C8 0014B008  81 83 00 04 */	lwz r12, 4(r3)
/* 8014E0CC 0014B00C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014E0D0 0014B010  7D 89 03 A6 */	mtctr r12
/* 8014E0D4 0014B014  4E 80 04 21 */	bctrl 
/* 8014E0D8 0014B018  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8014E0DC 0014B01C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8014E0E0 0014B020  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8014E0E4 0014B024  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8014E0E8 0014B028  C0 A1 00 1C */	lfs f5, 0x1c(r1)
/* 8014E0EC 0014B02C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8014E0F0 0014B030  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8014E0F4 0014B034  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 8014E0F8 0014B038  D0 5F 00 28 */	stfs f2, 0x28(r31)
/* 8014E0FC 0014B03C  D0 7F 00 2C */	stfs f3, 0x2c(r31)
/* 8014E100 0014B040  D0 9F 00 30 */	stfs f4, 0x30(r31)
/* 8014E104 0014B044  D0 BF 00 34 */	stfs f5, 0x34(r31)
/* 8014E108 0014B048  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014E10C 0014B04C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014E110 0014B050  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014E114 0014B054  7C 08 03 A6 */	mtlr r0
/* 8014E118 0014B058  38 21 00 30 */	addi r1, r1, 0x30
/* 8014E11C 0014B05C  4E 80 00 20 */	blr 
.endfn setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
.else
.fn setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo, global
/* 8014DF9C 0014AEDC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014DFA0 0014AEE0  7C 08 02 A6 */	mflr r0
/* 8014DFA4 0014AEE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014DFA8 0014AEE8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014DFAC 0014AEEC  7C 9F 23 78 */	mr r31, r4
/* 8014DFB0 0014AEF0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014DFB4 0014AEF4  7C 7E 1B 78 */	mr r30, r3
/* 8014DFB8 0014AEF8  80 03 01 04 */	lwz r0, 0x104(r3)
/* 8014DFBC 0014AEFC  28 00 00 00 */	cmplwi r0, 0
/* 8014DFC0 0014AF00  40 82 00 20 */	bne .L_8014DFE0
/* 8014DFC4 0014AF04  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014DFC8 0014AF08  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014DFCC 0014AF0C  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014DFD0 0014AF10  38 80 0C 7D */	li r4, 0xc7d
/* 8014DFD4 0014AF14  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014DFD8 0014AF18  4C C6 31 82 */	crclr 6
/* 8014DFDC 0014AF1C  4B ED C6 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014DFE0:
/* 8014DFE0 0014AF20  80 1E 01 08 */	lwz r0, 0x108(r30)
/* 8014DFE4 0014AF24  28 00 00 00 */	cmplwi r0, 0
/* 8014DFE8 0014AF28  40 82 00 20 */	bne .L_8014E008
/* 8014DFEC 0014AF2C  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 8014DFF0 0014AF30  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014DFF4 0014AF34  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 8014DFF8 0014AF38  38 80 0C 7E */	li r4, 0xc7e
/* 8014DFFC 0014AF3C  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014E000 0014AF40  4C C6 31 82 */	crclr 6
/* 8014E004 0014AF44  4B ED C6 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014E008:
/* 8014E008 0014AF48  38 00 00 02 */	li r0, 2
/* 8014E00C 0014AF4C  98 1F 00 07 */	stb r0, 7(r31)
/* 8014E010 0014AF50  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8014E014 0014AF54  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E018 0014AF58  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E01C 0014AF5C  7D 89 03 A6 */	mtctr r12
/* 8014E020 0014AF60  4E 80 04 21 */	bctrl 
/* 8014E024 0014AF64  90 7F 00 08 */	stw r3, 8(r31)
/* 8014E028 0014AF68  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8014E02C 0014AF6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E030 0014AF70  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E034 0014AF74  7D 89 03 A6 */	mtctr r12
/* 8014E038 0014AF78  4E 80 04 21 */	bctrl 
/* 8014E03C 0014AF7C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8014E040 0014AF80  80 7E 01 04 */	lwz r3, 0x104(r30)
/* 8014E044 0014AF84  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E048 0014AF88  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8014E04C 0014AF8C  7D 89 03 A6 */	mtctr r12
/* 8014E050 0014AF90  4E 80 04 21 */	bctrl 
/* 8014E054 0014AF94  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8014E058 0014AF98  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8014E05C 0014AF9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E060 0014AFA0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E064 0014AFA4  7D 89 03 A6 */	mtctr r12
/* 8014E068 0014AFA8  4E 80 04 21 */	bctrl 
/* 8014E06C 0014AFAC  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8014E070 0014AFB0  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8014E074 0014AFB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E078 0014AFB8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014E07C 0014AFBC  7D 89 03 A6 */	mtctr r12
/* 8014E080 0014AFC0  4E 80 04 21 */	bctrl 
/* 8014E084 0014AFC4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 8014E088 0014AFC8  80 7E 01 08 */	lwz r3, 0x108(r30)
/* 8014E08C 0014AFCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E090 0014AFD0  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8014E094 0014AFD4  7D 89 03 A6 */	mtctr r12
/* 8014E098 0014AFD8  4E 80 04 21 */	bctrl 
/* 8014E09C 0014AFDC  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 8014E0A0 0014AFE0  38 81 00 08 */	addi r4, r1, 8
/* 8014E0A4 0014AFE4  C0 22 A1 F0 */	lfs f1, lbl_80518550@sda21(r2)
/* 8014E0A8 0014AFE8  C0 02 A1 F4 */	lfs f0, lbl_80518554@sda21(r2)
/* 8014E0AC 0014AFEC  D0 21 00 08 */	stfs f1, 8(r1)
/* 8014E0B0 0014AFF0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014E0B4 0014AFF4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8014E0B8 0014AFF8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8014E0BC 0014AFFC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8014E0C0 0014B000  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8014E0C4 0014B004  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8014E0C8 0014B008  81 83 00 04 */	lwz r12, 4(r3)
/* 8014E0CC 0014B00C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014E0D0 0014B010  7D 89 03 A6 */	mtctr r12
/* 8014E0D4 0014B014  4E 80 04 21 */	bctrl 
/* 8014E0D8 0014B018  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8014E0DC 0014B01C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8014E0E0 0014B020  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8014E0E4 0014B024  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8014E0E8 0014B028  C0 A1 00 1C */	lfs f5, 0x1c(r1)
/* 8014E0EC 0014B02C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8014E0F0 0014B030  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8014E0F4 0014B034  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 8014E0F8 0014B038  D0 5F 00 28 */	stfs f2, 0x28(r31)
/* 8014E0FC 0014B03C  D0 7F 00 2C */	stfs f3, 0x2c(r31)
/* 8014E100 0014B040  D0 9F 00 30 */	stfs f4, 0x30(r31)
/* 8014E104 0014B044  D0 BF 00 34 */	stfs f5, 0x34(r31)
/* 8014E108 0014B048  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014E10C 0014B04C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014E110 0014B050  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014E114 0014B054  7C 08 03 A6 */	mtlr r0
/* 8014E118 0014B058  38 21 00 30 */	addi r1, r1, 0x30
/* 8014E11C 0014B05C  4E 80 00 20 */	blr 
.endfn setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
.endif

.fn getSoundMatrixPtr__6CameraFv, weak
/* 8014E120 0014B060  38 63 00 84 */	addi r3, r3, 0x84
/* 8014E124 0014B064  4E 80 00 20 */	blr 
.endfn getSoundMatrixPtr__6CameraFv

.fn getSoundPositionPtr__6CameraFv, weak
/* 8014E128 0014B068  38 63 00 78 */	addi r3, r3, 0x78
/* 8014E12C 0014B06C  4E 80 00 20 */	blr 
.endfn getSoundPositionPtr__6CameraFv

.fn "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b", global
/* 8014E130 0014B070  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8014E134 0014B074  7C 08 02 A6 */	mflr r0
/* 8014E138 0014B078  90 01 00 84 */	stw r0, 0x84(r1)
/* 8014E13C 0014B07C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8014E140 0014B080  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8014E144 0014B084  7C BE 2B 78 */	mr r30, r5
/* 8014E148 0014B088  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8014E14C 0014B08C  7C 9D 23 78 */	mr r29, r4
/* 8014E150 0014B090  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014E154 0014B094  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E158 0014B098  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E15C 0014B09C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E160 0014B0A0  7D 89 03 A6 */	mtctr r12
/* 8014E164 0014B0A4  4E 80 04 21 */	bctrl 
/* 8014E168 0014B0A8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014E16C 0014B0AC  38 80 00 00 */	li r4, 0
/* 8014E170 0014B0B0  48 00 D1 5D */	bl getAliveOrima__Q24Game7NaviMgrFi
/* 8014E174 0014B0B4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8014E178 0014B0B8  7C 7E 1B 78 */	mr r30, r3
/* 8014E17C 0014B0BC  41 82 02 4C */	beq .L_8014E3C8
/* 8014E180 0014B0C0  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 8014E184 0014B0C4  28 03 00 00 */	cmplwi r3, 0
/* 8014E188 0014B0C8  41 82 00 08 */	beq .L_8014E190
/* 8014E18C 0014B0CC  38 63 00 30 */	addi r3, r3, 0x30
.L_8014E190:
/* 8014E190 0014B0D0  38 00 00 00 */	li r0, 0
/* 8014E194 0014B0D4  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
/* 8014E198 0014B0D8  38 84 05 A4 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
/* 8014E19C 0014B0DC  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014E1A0 0014B0E0  28 00 00 00 */	cmplwi r0, 0
/* 8014E1A4 0014B0E4  90 81 00 34 */	stw r4, 0x34(r1)
/* 8014E1A8 0014B0E8  90 01 00 38 */	stw r0, 0x38(r1)
/* 8014E1AC 0014B0EC  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8014E1B0 0014B0F0  40 82 00 1C */	bne .L_8014E1CC
/* 8014E1B4 0014B0F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E1B8 0014B0F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E1BC 0014B0FC  7D 89 03 A6 */	mtctr r12
/* 8014E1C0 0014B100  4E 80 04 21 */	bctrl 
/* 8014E1C4 0014B104  90 61 00 38 */	stw r3, 0x38(r1)
/* 8014E1C8 0014B108  48 00 01 E0 */	b .L_8014E3A8
.L_8014E1CC:
/* 8014E1CC 0014B10C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E1D0 0014B110  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E1D4 0014B114  7D 89 03 A6 */	mtctr r12
/* 8014E1D8 0014B118  4E 80 04 21 */	bctrl 
/* 8014E1DC 0014B11C  90 61 00 38 */	stw r3, 0x38(r1)
/* 8014E1E0 0014B120  48 00 00 58 */	b .L_8014E238
.L_8014E1E4:
/* 8014E1E4 0014B124  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E1E8 0014B128  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8014E1EC 0014B12C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E1F0 0014B130  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E1F4 0014B134  7D 89 03 A6 */	mtctr r12
/* 8014E1F8 0014B138  4E 80 04 21 */	bctrl 
/* 8014E1FC 0014B13C  7C 64 1B 78 */	mr r4, r3
/* 8014E200 0014B140  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8014E204 0014B144  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E208 0014B148  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014E20C 0014B14C  7D 89 03 A6 */	mtctr r12
/* 8014E210 0014B150  4E 80 04 21 */	bctrl 
/* 8014E214 0014B154  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E218 0014B158  40 82 01 90 */	bne .L_8014E3A8
/* 8014E21C 0014B15C  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E220 0014B160  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8014E224 0014B164  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E228 0014B168  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E22C 0014B16C  7D 89 03 A6 */	mtctr r12
/* 8014E230 0014B170  4E 80 04 21 */	bctrl 
/* 8014E234 0014B174  90 61 00 38 */	stw r3, 0x38(r1)
.L_8014E238:
/* 8014E238 0014B178  81 81 00 34 */	lwz r12, 0x34(r1)
/* 8014E23C 0014B17C  38 61 00 34 */	addi r3, r1, 0x34
/* 8014E240 0014B180  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014E244 0014B184  7D 89 03 A6 */	mtctr r12
/* 8014E248 0014B188  4E 80 04 21 */	bctrl 
/* 8014E24C 0014B18C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E250 0014B190  41 82 FF 94 */	beq .L_8014E1E4
/* 8014E254 0014B194  48 00 01 54 */	b .L_8014E3A8
.L_8014E258:
/* 8014E258 0014B198  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E25C 0014B19C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E260 0014B1A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E264 0014B1A4  7D 89 03 A6 */	mtctr r12
/* 8014E268 0014B1A8  4E 80 04 21 */	bctrl 
/* 8014E26C 0014B1AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E270 0014B1B0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8014E274 0014B1B4  7D 89 03 A6 */	mtctr r12
/* 8014E278 0014B1B8  4E 80 04 21 */	bctrl 
/* 8014E27C 0014B1BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E280 0014B1C0  41 82 00 6C */	beq .L_8014E2EC
/* 8014E284 0014B1C4  38 60 00 00 */	li r3, 0
/* 8014E288 0014B1C8  48 0E 24 91 */	bl inc__Q24Game8DeathMgrFi
/* 8014E28C 0014B1CC  38 60 00 07 */	li r3, 7
/* 8014E290 0014B1D0  48 0E 24 89 */	bl inc__Q24Game8DeathMgrFi
/* 8014E294 0014B1D4  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8014E298 0014B1D8  38 60 00 00 */	li r3, 0
/* 8014E29C 0014B1DC  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8014E2A0 0014B1E0  2C 00 00 02 */	cmpwi r0, 2
/* 8014E2A4 0014B1E4  41 82 00 0C */	beq .L_8014E2B0
/* 8014E2A8 0014B1E8  2C 00 00 03 */	cmpwi r0, 3
/* 8014E2AC 0014B1EC  40 82 00 08 */	bne .L_8014E2B4
.L_8014E2B0:
/* 8014E2B0 0014B1F0  38 60 00 01 */	li r3, 1
.L_8014E2B4:
/* 8014E2B4 0014B1F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E2B8 0014B1F8  41 82 00 34 */	beq .L_8014E2EC
/* 8014E2BC 0014B1FC  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 8014E2C0 0014B200  3C 60 80 4B */	lis r3, __vt__Q24Game23GameMessageVsPikminDead@ha
/* 8014E2C4 0014B204  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 8014E2C8 0014B208  38 81 00 08 */	addi r4, r1, 8
/* 8014E2CC 0014B20C  90 01 00 08 */	stw r0, 8(r1)
/* 8014E2D0 0014B210  38 03 61 1C */	addi r0, r3, __vt__Q24Game23GameMessageVsPikminDead@l
/* 8014E2D4 0014B214  90 01 00 08 */	stw r0, 8(r1)
/* 8014E2D8 0014B218  80 65 00 58 */	lwz r3, 0x58(r5)
/* 8014E2DC 0014B21C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E2E0 0014B220  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8014E2E4 0014B224  7D 89 03 A6 */	mtctr r12
/* 8014E2E8 0014B228  4E 80 04 21 */	bctrl 
.L_8014E2EC:
/* 8014E2EC 0014B22C  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8014E2F0 0014B230  28 00 00 00 */	cmplwi r0, 0
/* 8014E2F4 0014B234  40 82 00 24 */	bne .L_8014E318
/* 8014E2F8 0014B238  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E2FC 0014B23C  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8014E300 0014B240  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E304 0014B244  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E308 0014B248  7D 89 03 A6 */	mtctr r12
/* 8014E30C 0014B24C  4E 80 04 21 */	bctrl 
/* 8014E310 0014B250  90 61 00 38 */	stw r3, 0x38(r1)
/* 8014E314 0014B254  48 00 00 94 */	b .L_8014E3A8
.L_8014E318:
/* 8014E318 0014B258  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E31C 0014B25C  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8014E320 0014B260  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E324 0014B264  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E328 0014B268  7D 89 03 A6 */	mtctr r12
/* 8014E32C 0014B26C  4E 80 04 21 */	bctrl 
/* 8014E330 0014B270  90 61 00 38 */	stw r3, 0x38(r1)
/* 8014E334 0014B274  48 00 00 58 */	b .L_8014E38C
.L_8014E338:
/* 8014E338 0014B278  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E33C 0014B27C  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8014E340 0014B280  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E344 0014B284  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E348 0014B288  7D 89 03 A6 */	mtctr r12
/* 8014E34C 0014B28C  4E 80 04 21 */	bctrl 
/* 8014E350 0014B290  7C 64 1B 78 */	mr r4, r3
/* 8014E354 0014B294  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8014E358 0014B298  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E35C 0014B29C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014E360 0014B2A0  7D 89 03 A6 */	mtctr r12
/* 8014E364 0014B2A4  4E 80 04 21 */	bctrl 
/* 8014E368 0014B2A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E36C 0014B2AC  40 82 00 3C */	bne .L_8014E3A8
/* 8014E370 0014B2B0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E374 0014B2B4  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8014E378 0014B2B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E37C 0014B2BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E380 0014B2C0  7D 89 03 A6 */	mtctr r12
/* 8014E384 0014B2C4  4E 80 04 21 */	bctrl 
/* 8014E388 0014B2C8  90 61 00 38 */	stw r3, 0x38(r1)
.L_8014E38C:
/* 8014E38C 0014B2CC  81 81 00 34 */	lwz r12, 0x34(r1)
/* 8014E390 0014B2D0  38 61 00 34 */	addi r3, r1, 0x34
/* 8014E394 0014B2D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014E398 0014B2D8  7D 89 03 A6 */	mtctr r12
/* 8014E39C 0014B2DC  4E 80 04 21 */	bctrl 
/* 8014E3A0 0014B2E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E3A4 0014B2E4  41 82 FF 94 */	beq .L_8014E338
.L_8014E3A8:
/* 8014E3A8 0014B2E8  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8014E3AC 0014B2EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E3B0 0014B2F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014E3B4 0014B2F4  7D 89 03 A6 */	mtctr r12
/* 8014E3B8 0014B2F8  4E 80 04 21 */	bctrl 
/* 8014E3BC 0014B2FC  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8014E3C0 0014B300  7C 04 18 40 */	cmplw r4, r3
/* 8014E3C4 0014B304  40 82 FE 94 */	bne .L_8014E258
.L_8014E3C8:
/* 8014E3C8 0014B308  38 00 00 00 */	li r0, 0
/* 8014E3CC 0014B30C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014E3D0 0014B310  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8014E3D4 0014B314  90 01 00 30 */	stw r0, 0x30(r1)
/* 8014E3D8 0014B318  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8014E3DC 0014B31C  28 00 00 00 */	cmplwi r0, 0
/* 8014E3E0 0014B320  90 81 00 24 */	stw r4, 0x24(r1)
/* 8014E3E4 0014B324  90 01 00 28 */	stw r0, 0x28(r1)
/* 8014E3E8 0014B328  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8014E3EC 0014B32C  40 82 00 1C */	bne .L_8014E408
/* 8014E3F0 0014B330  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E3F4 0014B334  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E3F8 0014B338  7D 89 03 A6 */	mtctr r12
/* 8014E3FC 0014B33C  4E 80 04 21 */	bctrl 
/* 8014E400 0014B340  90 61 00 28 */	stw r3, 0x28(r1)
/* 8014E404 0014B344  48 00 03 6C */	b .L_8014E770
.L_8014E408:
/* 8014E408 0014B348  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E40C 0014B34C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E410 0014B350  7D 89 03 A6 */	mtctr r12
/* 8014E414 0014B354  4E 80 04 21 */	bctrl 
/* 8014E418 0014B358  90 61 00 28 */	stw r3, 0x28(r1)
/* 8014E41C 0014B35C  48 00 00 58 */	b .L_8014E474
.L_8014E420:
/* 8014E420 0014B360  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E424 0014B364  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014E428 0014B368  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E42C 0014B36C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E430 0014B370  7D 89 03 A6 */	mtctr r12
/* 8014E434 0014B374  4E 80 04 21 */	bctrl 
/* 8014E438 0014B378  7C 64 1B 78 */	mr r4, r3
/* 8014E43C 0014B37C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8014E440 0014B380  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E444 0014B384  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014E448 0014B388  7D 89 03 A6 */	mtctr r12
/* 8014E44C 0014B38C  4E 80 04 21 */	bctrl 
/* 8014E450 0014B390  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E454 0014B394  40 82 03 1C */	bne .L_8014E770
/* 8014E458 0014B398  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E45C 0014B39C  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014E460 0014B3A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E464 0014B3A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E468 0014B3A8  7D 89 03 A6 */	mtctr r12
/* 8014E46C 0014B3AC  4E 80 04 21 */	bctrl 
/* 8014E470 0014B3B0  90 61 00 28 */	stw r3, 0x28(r1)
.L_8014E474:
/* 8014E474 0014B3B4  81 81 00 24 */	lwz r12, 0x24(r1)
/* 8014E478 0014B3B8  38 61 00 24 */	addi r3, r1, 0x24
/* 8014E47C 0014B3BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014E480 0014B3C0  7D 89 03 A6 */	mtctr r12
/* 8014E484 0014B3C4  4E 80 04 21 */	bctrl 
/* 8014E488 0014B3C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E48C 0014B3CC  41 82 FF 94 */	beq .L_8014E420
/* 8014E490 0014B3D0  48 00 02 E0 */	b .L_8014E770
.L_8014E494:
/* 8014E494 0014B3D4  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E498 0014B3D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E49C 0014B3DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E4A0 0014B3E0  7D 89 03 A6 */	mtctr r12
/* 8014E4A4 0014B3E4  4E 80 04 21 */	bctrl 
/* 8014E4A8 0014B3E8  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8014E4AC 0014B3EC  7C 7F 1B 78 */	mr r31, r3
/* 8014E4B0 0014B3F0  2C 00 00 05 */	cmpwi r0, 5
/* 8014E4B4 0014B3F4  40 82 00 1C */	bne .L_8014E4D0
/* 8014E4B8 0014B3F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E4BC 0014B3FC  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8014E4C0 0014B400  7D 89 03 A6 */	mtctr r12
/* 8014E4C4 0014B404  4E 80 04 21 */	bctrl 
/* 8014E4C8 0014B408  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E4CC 0014B40C  41 82 01 E8 */	beq .L_8014E6B4
.L_8014E4D0:
/* 8014E4D0 0014B410  7F E3 FB 78 */	mr r3, r31
/* 8014E4D4 0014B414  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014E4D8 0014B418  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8014E4DC 0014B41C  7D 89 03 A6 */	mtctr r12
/* 8014E4E0 0014B420  4E 80 04 21 */	bctrl 
/* 8014E4E4 0014B424  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E4E8 0014B428  40 82 01 CC */	bne .L_8014E6B4
/* 8014E4EC 0014B42C  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 8014E4F0 0014B430  2C 00 00 05 */	cmpwi r0, 5
/* 8014E4F4 0014B434  40 82 00 14 */	bne .L_8014E508
/* 8014E4F8 0014B438  7F E3 FB 78 */	mr r3, r31
/* 8014E4FC 0014B43C  4B FF 99 4D */	bl getCurrActionID__Q24Game4PikiFv
/* 8014E500 0014B440  7F E3 FB 78 */	mr r3, r31
/* 8014E504 0014B444  4B FF AA 31 */	bl getStateID__Q24Game4PikiFv
.L_8014E508:
/* 8014E508 0014B448  7F E3 FB 78 */	mr r3, r31
/* 8014E50C 0014B44C  48 05 0F 19 */	bl endStick__Q24Game8CreatureFv
/* 8014E510 0014B450  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8014E514 0014B454  7F E4 FB 78 */	mr r4, r31
/* 8014E518 0014B458  38 A0 00 00 */	li r5, 0
/* 8014E51C 0014B45C  38 C0 00 00 */	li r6, 0
/* 8014E520 0014B460  48 03 BB 11 */	bl transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
/* 8014E524 0014B464  7F E3 FB 78 */	mr r3, r31
/* 8014E528 0014B468  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014E52C 0014B46C  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8014E530 0014B470  7D 89 03 A6 */	mtctr r12
/* 8014E534 0014B474  4E 80 04 21 */	bctrl 
/* 8014E538 0014B478  93 DF 02 C4 */	stw r30, 0x2c4(r31)
/* 8014E53C 0014B47C  4B F7 B0 65 */	bl rand
/* 8014E540 0014B480  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8014E544 0014B484  3C 00 43 30 */	lis r0, 0x4330
/* 8014E548 0014B488  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8014E54C 0014B48C  C8 62 A2 08 */	lfd f3, lbl_80518568@sda21(r2)
/* 8014E550 0014B490  90 01 00 48 */	stw r0, 0x48(r1)
/* 8014E554 0014B494  C0 42 A1 F0 */	lfs f2, lbl_80518550@sda21(r2)
/* 8014E558 0014B498  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8014E55C 0014B49C  C0 22 A1 F8 */	lfs f1, lbl_80518558@sda21(r2)
/* 8014E560 0014B4A0  EC 60 18 28 */	fsubs f3, f0, f3
/* 8014E564 0014B4A4  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014E568 0014B4A8  EC 43 10 24 */	fdivs f2, f3, f2
/* 8014E56C 0014B4AC  EC 81 00 B2 */	fmuls f4, f1, f2
/* 8014E570 0014B4B0  FC 20 20 90 */	fmr f1, f4
/* 8014E574 0014B4B4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8014E578 0014B4B8  40 80 00 08 */	bge .L_8014E580
/* 8014E57C 0014B4BC  FC 20 20 50 */	fneg f1, f4
.L_8014E580:
/* 8014E580 0014B4C0  C0 42 A2 00 */	lfs f2, lbl_80518560@sda21(r2)
/* 8014E584 0014B4C4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8014E588 0014B4C8  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014E58C 0014B4CC  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8014E590 0014B4D0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8014E594 0014B4D4  C0 62 A1 FC */	lfs f3, lbl_8051855C@sda21(r2)
/* 8014E598 0014B4D8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8014E59C 0014B4DC  FC 00 08 1E */	fctiwz f0, f1
/* 8014E5A0 0014B4E0  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8014E5A4 0014B4E4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014E5A8 0014B4E8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8014E5AC 0014B4EC  7C 64 02 14 */	add r3, r4, r0
/* 8014E5B0 0014B4F0  C0 03 00 04 */	lfs f0, 4(r3)
/* 8014E5B4 0014B4F4  EC A3 00 32 */	fmuls f5, f3, f0
/* 8014E5B8 0014B4F8  40 80 00 28 */	bge .L_8014E5E0
/* 8014E5BC 0014B4FC  C0 02 A2 04 */	lfs f0, lbl_80518564@sda21(r2)
/* 8014E5C0 0014B500  EC 04 00 32 */	fmuls f0, f4, f0
/* 8014E5C4 0014B504  FC 00 00 1E */	fctiwz f0, f0
/* 8014E5C8 0014B508  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 8014E5CC 0014B50C  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8014E5D0 0014B510  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8014E5D4 0014B514  7C 04 04 2E */	lfsx f0, r4, r0
/* 8014E5D8 0014B518  FC 00 00 50 */	fneg f0, f0
/* 8014E5DC 0014B51C  48 00 00 1C */	b .L_8014E5F8
.L_8014E5E0:
/* 8014E5E0 0014B520  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8014E5E4 0014B524  FC 00 00 1E */	fctiwz f0, f0
/* 8014E5E8 0014B528  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8014E5EC 0014B52C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8014E5F0 0014B530  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8014E5F4 0014B534  7C 04 04 2E */	lfsx f0, r4, r0
.L_8014E5F8:
/* 8014E5F8 0014B538  EC 83 00 32 */	fmuls f4, f3, f0
/* 8014E5FC 0014B53C  C0 62 A1 38 */	lfs f3, lbl_80518498@sda21(r2)
/* 8014E600 0014B540  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 8014E604 0014B544  38 81 00 18 */	addi r4, r1, 0x18
/* 8014E608 0014B548  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014E60C 0014B54C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8014E610 0014B550  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8014E614 0014B554  C0 5D 00 08 */	lfs f2, 8(r29)
/* 8014E618 0014B558  C0 3D 00 04 */	lfs f1, 4(r29)
/* 8014E61C 0014B55C  C0 1D 00 00 */	lfs f0, 0(r29)
/* 8014E620 0014B560  EC 45 10 2A */	fadds f2, f5, f2
/* 8014E624 0014B564  EC 23 08 2A */	fadds f1, f3, f1
/* 8014E628 0014B568  EC 04 00 2A */	fadds f0, f4, f0
/* 8014E62C 0014B56C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8014E630 0014B570  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8014E634 0014B574  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8014E638 0014B578  81 83 00 04 */	lwz r12, 4(r3)
/* 8014E63C 0014B57C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8014E640 0014B580  7D 89 03 A6 */	mtctr r12
/* 8014E644 0014B584  4E 80 04 21 */	bctrl 
/* 8014E648 0014B588  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8014E64C 0014B58C  7F E3 FB 78 */	mr r3, r31
/* 8014E650 0014B590  38 81 00 18 */	addi r4, r1, 0x18
/* 8014E654 0014B594  38 A0 00 00 */	li r5, 0
/* 8014E658 0014B598  4B FE CB 51 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014E65C 0014B59C  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 8014E660 0014B5A0  38 60 00 00 */	li r3, 0
/* 8014E664 0014B5A4  38 04 05 30 */	addi r0, r4, __vt__Q26PikiAI9ActionArg@l
/* 8014E668 0014B5A8  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8014E66C 0014B5AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014E670 0014B5B0  38 E4 05 24 */	addi r7, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 8014E674 0014B5B4  3C 80 80 4B */	lis r4, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 8014E678 0014B5B8  38 00 00 01 */	li r0, 1
/* 8014E67C 0014B5BC  98 61 00 14 */	stb r3, 0x14(r1)
/* 8014E680 0014B5C0  38 C4 0D 44 */	addi r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8014E684 0014B5C4  38 A1 00 0C */	addi r5, r1, 0xc
/* 8014E688 0014B5C8  38 80 00 00 */	li r4, 0
/* 8014E68C 0014B5CC  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8014E690 0014B5D0  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8014E694 0014B5D4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8014E698 0014B5D8  98 61 00 15 */	stb r3, 0x15(r1)
/* 8014E69C 0014B5DC  98 01 00 14 */	stb r0, 0x14(r1)
/* 8014E6A0 0014B5E0  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8014E6A4 0014B5E4  48 04 88 F1 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8014E6A8 0014B5E8  7F E3 FB 78 */	mr r3, r31
/* 8014E6AC 0014B5EC  38 80 00 00 */	li r4, 0
/* 8014E6B0 0014B5F0  4B FE D3 A1 */	bl movie_begin__Q24Game8CreatureFb
.L_8014E6B4:
/* 8014E6B4 0014B5F4  80 01 00 30 */	lwz r0, 0x30(r1)
/* 8014E6B8 0014B5F8  28 00 00 00 */	cmplwi r0, 0
/* 8014E6BC 0014B5FC  40 82 00 24 */	bne .L_8014E6E0
/* 8014E6C0 0014B600  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E6C4 0014B604  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014E6C8 0014B608  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E6CC 0014B60C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E6D0 0014B610  7D 89 03 A6 */	mtctr r12
/* 8014E6D4 0014B614  4E 80 04 21 */	bctrl 
/* 8014E6D8 0014B618  90 61 00 28 */	stw r3, 0x28(r1)
/* 8014E6DC 0014B61C  48 00 00 94 */	b .L_8014E770
.L_8014E6E0:
/* 8014E6E0 0014B620  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E6E4 0014B624  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014E6E8 0014B628  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E6EC 0014B62C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E6F0 0014B630  7D 89 03 A6 */	mtctr r12
/* 8014E6F4 0014B634  4E 80 04 21 */	bctrl 
/* 8014E6F8 0014B638  90 61 00 28 */	stw r3, 0x28(r1)
/* 8014E6FC 0014B63C  48 00 00 58 */	b .L_8014E754
.L_8014E700:
/* 8014E700 0014B640  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E704 0014B644  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014E708 0014B648  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E70C 0014B64C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E710 0014B650  7D 89 03 A6 */	mtctr r12
/* 8014E714 0014B654  4E 80 04 21 */	bctrl 
/* 8014E718 0014B658  7C 64 1B 78 */	mr r4, r3
/* 8014E71C 0014B65C  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8014E720 0014B660  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E724 0014B664  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014E728 0014B668  7D 89 03 A6 */	mtctr r12
/* 8014E72C 0014B66C  4E 80 04 21 */	bctrl 
/* 8014E730 0014B670  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E734 0014B674  40 82 00 3C */	bne .L_8014E770
/* 8014E738 0014B678  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E73C 0014B67C  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014E740 0014B680  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E744 0014B684  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E748 0014B688  7D 89 03 A6 */	mtctr r12
/* 8014E74C 0014B68C  4E 80 04 21 */	bctrl 
/* 8014E750 0014B690  90 61 00 28 */	stw r3, 0x28(r1)
.L_8014E754:
/* 8014E754 0014B694  81 81 00 24 */	lwz r12, 0x24(r1)
/* 8014E758 0014B698  38 61 00 24 */	addi r3, r1, 0x24
/* 8014E75C 0014B69C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014E760 0014B6A0  7D 89 03 A6 */	mtctr r12
/* 8014E764 0014B6A4  4E 80 04 21 */	bctrl 
/* 8014E768 0014B6A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E76C 0014B6AC  41 82 FF 94 */	beq .L_8014E700
.L_8014E770:
/* 8014E770 0014B6B0  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8014E774 0014B6B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E778 0014B6B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014E77C 0014B6BC  7D 89 03 A6 */	mtctr r12
/* 8014E780 0014B6C0  4E 80 04 21 */	bctrl 
/* 8014E784 0014B6C4  80 81 00 28 */	lwz r4, 0x28(r1)
/* 8014E788 0014B6C8  7C 04 18 40 */	cmplw r4, r3
/* 8014E78C 0014B6CC  40 82 FD 08 */	bne .L_8014E494
/* 8014E790 0014B6D0  28 1E 00 00 */	cmplwi r30, 0
/* 8014E794 0014B6D4  41 82 00 0C */	beq .L_8014E7A0
/* 8014E798 0014B6D8  7F C3 F3 78 */	mr r3, r30
/* 8014E79C 0014B6DC  4B FF 6A 1D */	bl demowaitAllPikis__Q24Game4NaviFv
.L_8014E7A0:
/* 8014E7A0 0014B6E0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8014E7A4 0014B6E4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8014E7A8 0014B6E8  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8014E7AC 0014B6EC  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8014E7B0 0014B6F0  7C 08 03 A6 */	mtlr r0
/* 8014E7B4 0014B6F4  38 21 00 80 */	addi r1, r1, 0x80
/* 8014E7B8 0014B6F8  4E 80 00 20 */	blr 
.endfn "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b"

.fn "prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3<f>", global
/* 8014E7BC 0014B6FC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8014E7C0 0014B700  7C 08 02 A6 */	mflr r0
/* 8014E7C4 0014B704  90 01 00 64 */	stw r0, 0x64(r1)
/* 8014E7C8 0014B708  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8014E7CC 0014B70C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8014E7D0 0014B710  7C 9E 23 78 */	mr r30, r4
/* 8014E7D4 0014B714  80 6D 94 B0 */	lwz r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
/* 8014E7D8 0014B718  28 03 00 00 */	cmplwi r3, 0
/* 8014E7DC 0014B71C  41 82 01 C8 */	beq .L_8014E9A4
/* 8014E7E0 0014B720  41 82 00 08 */	beq .L_8014E7E8
/* 8014E7E4 0014B724  38 63 00 30 */	addi r3, r3, 0x30
.L_8014E7E8:
/* 8014E7E8 0014B728  38 00 00 00 */	li r0, 0
/* 8014E7EC 0014B72C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 8014E7F0 0014B730  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 8014E7F4 0014B734  90 01 00 48 */	stw r0, 0x48(r1)
/* 8014E7F8 0014B738  28 00 00 00 */	cmplwi r0, 0
/* 8014E7FC 0014B73C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8014E800 0014B740  90 01 00 40 */	stw r0, 0x40(r1)
/* 8014E804 0014B744  90 61 00 44 */	stw r3, 0x44(r1)
/* 8014E808 0014B748  40 82 00 1C */	bne .L_8014E824
/* 8014E80C 0014B74C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E810 0014B750  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E814 0014B754  7D 89 03 A6 */	mtctr r12
/* 8014E818 0014B758  4E 80 04 21 */	bctrl 
/* 8014E81C 0014B75C  90 61 00 40 */	stw r3, 0x40(r1)
/* 8014E820 0014B760  48 00 01 64 */	b .L_8014E984
.L_8014E824:
/* 8014E824 0014B764  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E828 0014B768  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E82C 0014B76C  7D 89 03 A6 */	mtctr r12
/* 8014E830 0014B770  4E 80 04 21 */	bctrl 
/* 8014E834 0014B774  90 61 00 40 */	stw r3, 0x40(r1)
/* 8014E838 0014B778  48 00 00 58 */	b .L_8014E890
.L_8014E83C:
/* 8014E83C 0014B77C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E840 0014B780  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8014E844 0014B784  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E848 0014B788  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E84C 0014B78C  7D 89 03 A6 */	mtctr r12
/* 8014E850 0014B790  4E 80 04 21 */	bctrl 
/* 8014E854 0014B794  7C 64 1B 78 */	mr r4, r3
/* 8014E858 0014B798  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8014E85C 0014B79C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E860 0014B7A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014E864 0014B7A4  7D 89 03 A6 */	mtctr r12
/* 8014E868 0014B7A8  4E 80 04 21 */	bctrl 
/* 8014E86C 0014B7AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E870 0014B7B0  40 82 01 14 */	bne .L_8014E984
/* 8014E874 0014B7B4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E878 0014B7B8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8014E87C 0014B7BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E880 0014B7C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E884 0014B7C4  7D 89 03 A6 */	mtctr r12
/* 8014E888 0014B7C8  4E 80 04 21 */	bctrl 
/* 8014E88C 0014B7CC  90 61 00 40 */	stw r3, 0x40(r1)
.L_8014E890:
/* 8014E890 0014B7D0  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 8014E894 0014B7D4  38 61 00 3C */	addi r3, r1, 0x3c
/* 8014E898 0014B7D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014E89C 0014B7DC  7D 89 03 A6 */	mtctr r12
/* 8014E8A0 0014B7E0  4E 80 04 21 */	bctrl 
/* 8014E8A4 0014B7E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E8A8 0014B7E8  41 82 FF 94 */	beq .L_8014E83C
/* 8014E8AC 0014B7EC  48 00 00 D8 */	b .L_8014E984
.L_8014E8B0:
/* 8014E8B0 0014B7F0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E8B4 0014B7F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E8B8 0014B7F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E8BC 0014B7FC  7D 89 03 A6 */	mtctr r12
/* 8014E8C0 0014B800  4E 80 04 21 */	bctrl 
/* 8014E8C4 0014B804  48 09 E5 7D */	bl killAllEffect__Q34Game15ItemBigFountain4ItemFv
/* 8014E8C8 0014B808  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8014E8CC 0014B80C  28 00 00 00 */	cmplwi r0, 0
/* 8014E8D0 0014B810  40 82 00 24 */	bne .L_8014E8F4
/* 8014E8D4 0014B814  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E8D8 0014B818  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8014E8DC 0014B81C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E8E0 0014B820  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E8E4 0014B824  7D 89 03 A6 */	mtctr r12
/* 8014E8E8 0014B828  4E 80 04 21 */	bctrl 
/* 8014E8EC 0014B82C  90 61 00 40 */	stw r3, 0x40(r1)
/* 8014E8F0 0014B830  48 00 00 94 */	b .L_8014E984
.L_8014E8F4:
/* 8014E8F4 0014B834  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E8F8 0014B838  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8014E8FC 0014B83C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E900 0014B840  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E904 0014B844  7D 89 03 A6 */	mtctr r12
/* 8014E908 0014B848  4E 80 04 21 */	bctrl 
/* 8014E90C 0014B84C  90 61 00 40 */	stw r3, 0x40(r1)
/* 8014E910 0014B850  48 00 00 58 */	b .L_8014E968
.L_8014E914:
/* 8014E914 0014B854  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E918 0014B858  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8014E91C 0014B85C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E920 0014B860  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014E924 0014B864  7D 89 03 A6 */	mtctr r12
/* 8014E928 0014B868  4E 80 04 21 */	bctrl 
/* 8014E92C 0014B86C  7C 64 1B 78 */	mr r4, r3
/* 8014E930 0014B870  80 61 00 48 */	lwz r3, 0x48(r1)
/* 8014E934 0014B874  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E938 0014B878  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014E93C 0014B87C  7D 89 03 A6 */	mtctr r12
/* 8014E940 0014B880  4E 80 04 21 */	bctrl 
/* 8014E944 0014B884  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E948 0014B888  40 82 00 3C */	bne .L_8014E984
/* 8014E94C 0014B88C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E950 0014B890  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8014E954 0014B894  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E958 0014B898  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014E95C 0014B89C  7D 89 03 A6 */	mtctr r12
/* 8014E960 0014B8A0  4E 80 04 21 */	bctrl 
/* 8014E964 0014B8A4  90 61 00 40 */	stw r3, 0x40(r1)
.L_8014E968:
/* 8014E968 0014B8A8  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 8014E96C 0014B8AC  38 61 00 3C */	addi r3, r1, 0x3c
/* 8014E970 0014B8B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014E974 0014B8B4  7D 89 03 A6 */	mtctr r12
/* 8014E978 0014B8B8  4E 80 04 21 */	bctrl 
/* 8014E97C 0014B8BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014E980 0014B8C0  41 82 FF 94 */	beq .L_8014E914
.L_8014E984:
/* 8014E984 0014B8C4  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8014E988 0014B8C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E98C 0014B8CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014E990 0014B8D0  7D 89 03 A6 */	mtctr r12
/* 8014E994 0014B8D4  4E 80 04 21 */	bctrl 
/* 8014E998 0014B8D8  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8014E99C 0014B8DC  7C 04 18 40 */	cmplw r4, r3
/* 8014E9A0 0014B8E0  40 82 FF 10 */	bne .L_8014E8B0
.L_8014E9A4:
/* 8014E9A4 0014B8E4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014E9A8 0014B8E8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014E9AC 0014B8EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014E9B0 0014B8F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014E9B4 0014B8F4  7D 89 03 A6 */	mtctr r12
/* 8014E9B8 0014B8F8  4E 80 04 21 */	bctrl 
/* 8014E9BC 0014B8FC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014E9C0 0014B900  38 80 00 00 */	li r4, 0
/* 8014E9C4 0014B904  48 00 C9 09 */	bl getAliveOrima__Q24Game7NaviMgrFi
/* 8014E9C8 0014B908  80 8D 94 70 */	lwz r4, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 8014E9CC 0014B90C  7C 7F 1B 78 */	mr r31, r3
/* 8014E9D0 0014B910  28 04 00 00 */	cmplwi r4, 0
/* 8014E9D4 0014B914  41 82 00 08 */	beq .L_8014E9DC
/* 8014E9D8 0014B918  38 84 00 30 */	addi r4, r4, 0x30
.L_8014E9DC:
/* 8014E9DC 0014B91C  38 00 00 00 */	li r0, 0
/* 8014E9E0 0014B920  3C 60 80 4B */	lis r3, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
/* 8014E9E4 0014B924  38 63 05 A4 */	addi r3, r3, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
/* 8014E9E8 0014B928  90 01 00 38 */	stw r0, 0x38(r1)
/* 8014E9EC 0014B92C  28 00 00 00 */	cmplwi r0, 0
/* 8014E9F0 0014B930  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8014E9F4 0014B934  90 01 00 30 */	stw r0, 0x30(r1)
/* 8014E9F8 0014B938  90 81 00 34 */	stw r4, 0x34(r1)
/* 8014E9FC 0014B93C  40 82 00 20 */	bne .L_8014EA1C
/* 8014EA00 0014B940  7C 83 23 78 */	mr r3, r4
/* 8014EA04 0014B944  81 84 00 00 */	lwz r12, 0(r4)
/* 8014EA08 0014B948  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014EA0C 0014B94C  7D 89 03 A6 */	mtctr r12
/* 8014EA10 0014B950  4E 80 04 21 */	bctrl 
/* 8014EA14 0014B954  90 61 00 30 */	stw r3, 0x30(r1)
/* 8014EA18 0014B958  48 00 01 E4 */	b .L_8014EBFC
.L_8014EA1C:
/* 8014EA1C 0014B95C  7C 83 23 78 */	mr r3, r4
/* 8014EA20 0014B960  81 84 00 00 */	lwz r12, 0(r4)
/* 8014EA24 0014B964  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014EA28 0014B968  7D 89 03 A6 */	mtctr r12
/* 8014EA2C 0014B96C  4E 80 04 21 */	bctrl 
/* 8014EA30 0014B970  90 61 00 30 */	stw r3, 0x30(r1)
/* 8014EA34 0014B974  48 00 00 58 */	b .L_8014EA8C
.L_8014EA38:
/* 8014EA38 0014B978  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EA3C 0014B97C  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8014EA40 0014B980  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EA44 0014B984  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014EA48 0014B988  7D 89 03 A6 */	mtctr r12
/* 8014EA4C 0014B98C  4E 80 04 21 */	bctrl 
/* 8014EA50 0014B990  7C 64 1B 78 */	mr r4, r3
/* 8014EA54 0014B994  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8014EA58 0014B998  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EA5C 0014B99C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014EA60 0014B9A0  7D 89 03 A6 */	mtctr r12
/* 8014EA64 0014B9A4  4E 80 04 21 */	bctrl 
/* 8014EA68 0014B9A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EA6C 0014B9AC  40 82 01 90 */	bne .L_8014EBFC
/* 8014EA70 0014B9B0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EA74 0014B9B4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8014EA78 0014B9B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EA7C 0014B9BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014EA80 0014B9C0  7D 89 03 A6 */	mtctr r12
/* 8014EA84 0014B9C4  4E 80 04 21 */	bctrl 
/* 8014EA88 0014B9C8  90 61 00 30 */	stw r3, 0x30(r1)
.L_8014EA8C:
/* 8014EA8C 0014B9CC  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 8014EA90 0014B9D0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014EA94 0014B9D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014EA98 0014B9D8  7D 89 03 A6 */	mtctr r12
/* 8014EA9C 0014B9DC  4E 80 04 21 */	bctrl 
/* 8014EAA0 0014B9E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EAA4 0014B9E4  41 82 FF 94 */	beq .L_8014EA38
/* 8014EAA8 0014B9E8  48 00 01 54 */	b .L_8014EBFC
.L_8014EAAC:
/* 8014EAAC 0014B9EC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EAB0 0014B9F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EAB4 0014B9F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014EAB8 0014B9F8  7D 89 03 A6 */	mtctr r12
/* 8014EABC 0014B9FC  4E 80 04 21 */	bctrl 
/* 8014EAC0 0014BA00  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EAC4 0014BA04  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8014EAC8 0014BA08  7D 89 03 A6 */	mtctr r12
/* 8014EACC 0014BA0C  4E 80 04 21 */	bctrl 
/* 8014EAD0 0014BA10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EAD4 0014BA14  41 82 00 6C */	beq .L_8014EB40
/* 8014EAD8 0014BA18  38 60 00 00 */	li r3, 0
/* 8014EADC 0014BA1C  48 0E 1C 3D */	bl inc__Q24Game8DeathMgrFi
/* 8014EAE0 0014BA20  38 60 00 07 */	li r3, 7
/* 8014EAE4 0014BA24  48 0E 1C 35 */	bl inc__Q24Game8DeathMgrFi
/* 8014EAE8 0014BA28  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8014EAEC 0014BA2C  38 60 00 00 */	li r3, 0
/* 8014EAF0 0014BA30  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8014EAF4 0014BA34  2C 00 00 02 */	cmpwi r0, 2
/* 8014EAF8 0014BA38  41 82 00 0C */	beq .L_8014EB04
/* 8014EAFC 0014BA3C  2C 00 00 03 */	cmpwi r0, 3
/* 8014EB00 0014BA40  40 82 00 08 */	bne .L_8014EB08
.L_8014EB04:
/* 8014EB04 0014BA44  38 60 00 01 */	li r3, 1
.L_8014EB08:
/* 8014EB08 0014BA48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EB0C 0014BA4C  41 82 00 34 */	beq .L_8014EB40
/* 8014EB10 0014BA50  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 8014EB14 0014BA54  3C 60 80 4B */	lis r3, __vt__Q24Game23GameMessageVsPikminDead@ha
/* 8014EB18 0014BA58  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 8014EB1C 0014BA5C  38 81 00 0C */	addi r4, r1, 0xc
/* 8014EB20 0014BA60  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014EB24 0014BA64  38 03 61 1C */	addi r0, r3, __vt__Q24Game23GameMessageVsPikminDead@l
/* 8014EB28 0014BA68  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014EB2C 0014BA6C  80 65 00 58 */	lwz r3, 0x58(r5)
/* 8014EB30 0014BA70  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EB34 0014BA74  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8014EB38 0014BA78  7D 89 03 A6 */	mtctr r12
/* 8014EB3C 0014BA7C  4E 80 04 21 */	bctrl 
.L_8014EB40:
/* 8014EB40 0014BA80  80 01 00 38 */	lwz r0, 0x38(r1)
/* 8014EB44 0014BA84  28 00 00 00 */	cmplwi r0, 0
/* 8014EB48 0014BA88  40 82 00 24 */	bne .L_8014EB6C
/* 8014EB4C 0014BA8C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EB50 0014BA90  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8014EB54 0014BA94  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EB58 0014BA98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014EB5C 0014BA9C  7D 89 03 A6 */	mtctr r12
/* 8014EB60 0014BAA0  4E 80 04 21 */	bctrl 
/* 8014EB64 0014BAA4  90 61 00 30 */	stw r3, 0x30(r1)
/* 8014EB68 0014BAA8  48 00 00 94 */	b .L_8014EBFC
.L_8014EB6C:
/* 8014EB6C 0014BAAC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EB70 0014BAB0  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8014EB74 0014BAB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EB78 0014BAB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014EB7C 0014BABC  7D 89 03 A6 */	mtctr r12
/* 8014EB80 0014BAC0  4E 80 04 21 */	bctrl 
/* 8014EB84 0014BAC4  90 61 00 30 */	stw r3, 0x30(r1)
/* 8014EB88 0014BAC8  48 00 00 58 */	b .L_8014EBE0
.L_8014EB8C:
/* 8014EB8C 0014BACC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EB90 0014BAD0  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8014EB94 0014BAD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EB98 0014BAD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014EB9C 0014BADC  7D 89 03 A6 */	mtctr r12
/* 8014EBA0 0014BAE0  4E 80 04 21 */	bctrl 
/* 8014EBA4 0014BAE4  7C 64 1B 78 */	mr r4, r3
/* 8014EBA8 0014BAE8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8014EBAC 0014BAEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EBB0 0014BAF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014EBB4 0014BAF4  7D 89 03 A6 */	mtctr r12
/* 8014EBB8 0014BAF8  4E 80 04 21 */	bctrl 
/* 8014EBBC 0014BAFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EBC0 0014BB00  40 82 00 3C */	bne .L_8014EBFC
/* 8014EBC4 0014BB04  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EBC8 0014BB08  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8014EBCC 0014BB0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EBD0 0014BB10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014EBD4 0014BB14  7D 89 03 A6 */	mtctr r12
/* 8014EBD8 0014BB18  4E 80 04 21 */	bctrl 
/* 8014EBDC 0014BB1C  90 61 00 30 */	stw r3, 0x30(r1)
.L_8014EBE0:
/* 8014EBE0 0014BB20  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 8014EBE4 0014BB24  38 61 00 2C */	addi r3, r1, 0x2c
/* 8014EBE8 0014BB28  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014EBEC 0014BB2C  7D 89 03 A6 */	mtctr r12
/* 8014EBF0 0014BB30  4E 80 04 21 */	bctrl 
/* 8014EBF4 0014BB34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EBF8 0014BB38  41 82 FF 94 */	beq .L_8014EB8C
.L_8014EBFC:
/* 8014EBFC 0014BB3C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8014EC00 0014BB40  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EC04 0014BB44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014EC08 0014BB48  7D 89 03 A6 */	mtctr r12
/* 8014EC0C 0014BB4C  4E 80 04 21 */	bctrl 
/* 8014EC10 0014BB50  80 81 00 30 */	lwz r4, 0x30(r1)
/* 8014EC14 0014BB54  7C 04 18 40 */	cmplw r4, r3
/* 8014EC18 0014BB58  40 82 FE 94 */	bne .L_8014EAAC
/* 8014EC1C 0014BB5C  3C 60 80 4B */	lis r3, "__vt__23Condition<Q24Game4Piki>"@ha
/* 8014EC20 0014BB60  3C 80 80 4B */	lis r4, __vt__27PikiCond_ExceptChappyPikmin@ha
/* 8014EC24 0014BB64  38 03 BC 60 */	addi r0, r3, "__vt__23Condition<Q24Game4Piki>"@l
/* 8014EC28 0014BB68  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014EC2C 0014BB6C  90 01 00 08 */	stw r0, 8(r1)
/* 8014EC30 0014BB70  38 04 0D 14 */	addi r0, r4, __vt__27PikiCond_ExceptChappyPikmin@l
/* 8014EC34 0014BB74  C0 22 A1 FC */	lfs f1, lbl_8051855C@sda21(r2)
/* 8014EC38 0014BB78  7F C4 F3 78 */	mr r4, r30
/* 8014EC3C 0014BB7C  90 01 00 08 */	stw r0, 8(r1)
/* 8014EC40 0014BB80  38 A1 00 08 */	addi r5, r1, 8
/* 8014EC44 0014BB84  48 01 0D 25 */	bl "moveAllPikmins__Q24Game7PikiMgrFR10Vector3<f>fP23Condition<Q24Game4Piki>"
/* 8014EC48 0014BB88  38 00 00 00 */	li r0, 0
/* 8014EC4C 0014BB8C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014EC50 0014BB90  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8014EC54 0014BB94  90 01 00 28 */	stw r0, 0x28(r1)
/* 8014EC58 0014BB98  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8014EC5C 0014BB9C  28 00 00 00 */	cmplwi r0, 0
/* 8014EC60 0014BBA0  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8014EC64 0014BBA4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8014EC68 0014BBA8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8014EC6C 0014BBAC  40 82 00 1C */	bne .L_8014EC88
/* 8014EC70 0014BBB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EC74 0014BBB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014EC78 0014BBB8  7D 89 03 A6 */	mtctr r12
/* 8014EC7C 0014BBBC  4E 80 04 21 */	bctrl 
/* 8014EC80 0014BBC0  90 61 00 20 */	stw r3, 0x20(r1)
/* 8014EC84 0014BBC4  48 00 02 04 */	b .L_8014EE88
.L_8014EC88:
/* 8014EC88 0014BBC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EC8C 0014BBCC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014EC90 0014BBD0  7D 89 03 A6 */	mtctr r12
/* 8014EC94 0014BBD4  4E 80 04 21 */	bctrl 
/* 8014EC98 0014BBD8  90 61 00 20 */	stw r3, 0x20(r1)
/* 8014EC9C 0014BBDC  48 00 00 58 */	b .L_8014ECF4
.L_8014ECA0:
/* 8014ECA0 0014BBE0  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014ECA4 0014BBE4  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014ECA8 0014BBE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014ECAC 0014BBEC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014ECB0 0014BBF0  7D 89 03 A6 */	mtctr r12
/* 8014ECB4 0014BBF4  4E 80 04 21 */	bctrl 
/* 8014ECB8 0014BBF8  7C 64 1B 78 */	mr r4, r3
/* 8014ECBC 0014BBFC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8014ECC0 0014BC00  81 83 00 00 */	lwz r12, 0(r3)
/* 8014ECC4 0014BC04  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014ECC8 0014BC08  7D 89 03 A6 */	mtctr r12
/* 8014ECCC 0014BC0C  4E 80 04 21 */	bctrl 
/* 8014ECD0 0014BC10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014ECD4 0014BC14  40 82 01 B4 */	bne .L_8014EE88
/* 8014ECD8 0014BC18  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014ECDC 0014BC1C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014ECE0 0014BC20  81 83 00 00 */	lwz r12, 0(r3)
/* 8014ECE4 0014BC24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014ECE8 0014BC28  7D 89 03 A6 */	mtctr r12
/* 8014ECEC 0014BC2C  4E 80 04 21 */	bctrl 
/* 8014ECF0 0014BC30  90 61 00 20 */	stw r3, 0x20(r1)
.L_8014ECF4:
/* 8014ECF4 0014BC34  81 81 00 1C */	lwz r12, 0x1c(r1)
/* 8014ECF8 0014BC38  38 61 00 1C */	addi r3, r1, 0x1c
/* 8014ECFC 0014BC3C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014ED00 0014BC40  7D 89 03 A6 */	mtctr r12
/* 8014ED04 0014BC44  4E 80 04 21 */	bctrl 
/* 8014ED08 0014BC48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014ED0C 0014BC4C  41 82 FF 94 */	beq .L_8014ECA0
/* 8014ED10 0014BC50  48 00 01 78 */	b .L_8014EE88
.L_8014ED14:
/* 8014ED14 0014BC54  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014ED18 0014BC58  81 83 00 00 */	lwz r12, 0(r3)
/* 8014ED1C 0014BC5C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014ED20 0014BC60  7D 89 03 A6 */	mtctr r12
/* 8014ED24 0014BC64  4E 80 04 21 */	bctrl 
/* 8014ED28 0014BC68  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8014ED2C 0014BC6C  7C 7E 1B 78 */	mr r30, r3
/* 8014ED30 0014BC70  2C 00 00 05 */	cmpwi r0, 5
/* 8014ED34 0014BC74  40 82 00 10 */	bne .L_8014ED44
/* 8014ED38 0014BC78  38 80 00 00 */	li r4, 0
/* 8014ED3C 0014BC7C  4B FE CD 15 */	bl movie_begin__Q24Game8CreatureFb
/* 8014ED40 0014BC80  48 00 00 8C */	b .L_8014EDCC
.L_8014ED44:
/* 8014ED44 0014BC84  48 05 06 E1 */	bl endStick__Q24Game8CreatureFv
/* 8014ED48 0014BC88  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 8014ED4C 0014BC8C  7F C4 F3 78 */	mr r4, r30
/* 8014ED50 0014BC90  38 A0 00 00 */	li r5, 0
/* 8014ED54 0014BC94  38 C0 00 00 */	li r6, 0
/* 8014ED58 0014BC98  48 03 B2 D9 */	bl transitForce__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
/* 8014ED5C 0014BC9C  7F C3 F3 78 */	mr r3, r30
/* 8014ED60 0014BCA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014ED64 0014BCA4  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8014ED68 0014BCA8  7D 89 03 A6 */	mtctr r12
/* 8014ED6C 0014BCAC  4E 80 04 21 */	bctrl 
/* 8014ED70 0014BCB0  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 8014ED74 0014BCB4  38 60 00 00 */	li r3, 0
/* 8014ED78 0014BCB8  38 04 05 30 */	addi r0, r4, __vt__Q26PikiAI9ActionArg@l
/* 8014ED7C 0014BCBC  3C 80 80 4B */	lis r4, __vt__Q26PikiAI17CreatureActionArg@ha
/* 8014ED80 0014BCC0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8014ED84 0014BCC4  38 A4 05 24 */	addi r5, r4, __vt__Q26PikiAI17CreatureActionArg@l
/* 8014ED88 0014BCC8  3C 80 80 4B */	lis r4, __vt__Q26PikiAI19ActFormationInitArg@ha
/* 8014ED8C 0014BCCC  38 00 00 01 */	li r0, 1
/* 8014ED90 0014BCD0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8014ED94 0014BCD4  38 C4 0D 44 */	addi r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
/* 8014ED98 0014BCD8  38 A1 00 10 */	addi r5, r1, 0x10
/* 8014ED9C 0014BCDC  38 80 00 00 */	li r4, 0
/* 8014EDA0 0014BCE0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8014EDA4 0014BCE4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8014EDA8 0014BCE8  98 61 00 18 */	stb r3, 0x18(r1)
/* 8014EDAC 0014BCEC  98 61 00 19 */	stb r3, 0x19(r1)
/* 8014EDB0 0014BCF0  93 FE 02 C4 */	stw r31, 0x2c4(r30)
/* 8014EDB4 0014BCF4  98 01 00 18 */	stb r0, 0x18(r1)
/* 8014EDB8 0014BCF8  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 8014EDBC 0014BCFC  48 04 81 D9 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 8014EDC0 0014BD00  7F C3 F3 78 */	mr r3, r30
/* 8014EDC4 0014BD04  38 80 00 00 */	li r4, 0
/* 8014EDC8 0014BD08  4B FE CC 89 */	bl movie_begin__Q24Game8CreatureFb
.L_8014EDCC:
/* 8014EDCC 0014BD0C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8014EDD0 0014BD10  28 00 00 00 */	cmplwi r0, 0
/* 8014EDD4 0014BD14  40 82 00 24 */	bne .L_8014EDF8
/* 8014EDD8 0014BD18  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014EDDC 0014BD1C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014EDE0 0014BD20  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EDE4 0014BD24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014EDE8 0014BD28  7D 89 03 A6 */	mtctr r12
/* 8014EDEC 0014BD2C  4E 80 04 21 */	bctrl 
/* 8014EDF0 0014BD30  90 61 00 20 */	stw r3, 0x20(r1)
/* 8014EDF4 0014BD34  48 00 00 94 */	b .L_8014EE88
.L_8014EDF8:
/* 8014EDF8 0014BD38  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014EDFC 0014BD3C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014EE00 0014BD40  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EE04 0014BD44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014EE08 0014BD48  7D 89 03 A6 */	mtctr r12
/* 8014EE0C 0014BD4C  4E 80 04 21 */	bctrl 
/* 8014EE10 0014BD50  90 61 00 20 */	stw r3, 0x20(r1)
/* 8014EE14 0014BD54  48 00 00 58 */	b .L_8014EE6C
.L_8014EE18:
/* 8014EE18 0014BD58  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014EE1C 0014BD5C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014EE20 0014BD60  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EE24 0014BD64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014EE28 0014BD68  7D 89 03 A6 */	mtctr r12
/* 8014EE2C 0014BD6C  4E 80 04 21 */	bctrl 
/* 8014EE30 0014BD70  7C 64 1B 78 */	mr r4, r3
/* 8014EE34 0014BD74  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8014EE38 0014BD78  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EE3C 0014BD7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014EE40 0014BD80  7D 89 03 A6 */	mtctr r12
/* 8014EE44 0014BD84  4E 80 04 21 */	bctrl 
/* 8014EE48 0014BD88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EE4C 0014BD8C  40 82 00 3C */	bne .L_8014EE88
/* 8014EE50 0014BD90  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014EE54 0014BD94  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014EE58 0014BD98  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EE5C 0014BD9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014EE60 0014BDA0  7D 89 03 A6 */	mtctr r12
/* 8014EE64 0014BDA4  4E 80 04 21 */	bctrl 
/* 8014EE68 0014BDA8  90 61 00 20 */	stw r3, 0x20(r1)
.L_8014EE6C:
/* 8014EE6C 0014BDAC  81 81 00 1C */	lwz r12, 0x1c(r1)
/* 8014EE70 0014BDB0  38 61 00 1C */	addi r3, r1, 0x1c
/* 8014EE74 0014BDB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014EE78 0014BDB8  7D 89 03 A6 */	mtctr r12
/* 8014EE7C 0014BDBC  4E 80 04 21 */	bctrl 
/* 8014EE80 0014BDC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EE84 0014BDC4  41 82 FF 94 */	beq .L_8014EE18
.L_8014EE88:
/* 8014EE88 0014BDC8  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8014EE8C 0014BDCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014EE90 0014BDD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014EE94 0014BDD4  7D 89 03 A6 */	mtctr r12
/* 8014EE98 0014BDD8  4E 80 04 21 */	bctrl 
/* 8014EE9C 0014BDDC  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8014EEA0 0014BDE0  7C 04 18 40 */	cmplw r4, r3
/* 8014EEA4 0014BDE4  40 82 FE 70 */	bne .L_8014ED14
/* 8014EEA8 0014BDE8  28 1F 00 00 */	cmplwi r31, 0
/* 8014EEAC 0014BDEC  41 82 00 0C */	beq .L_8014EEB8
/* 8014EEB0 0014BDF0  7F E3 FB 78 */	mr r3, r31
/* 8014EEB4 0014BDF4  4B FF 63 05 */	bl demowaitAllPikis__Q24Game4NaviFv
.L_8014EEB8:
/* 8014EEB8 0014BDF8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8014EEBC 0014BDFC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8014EEC0 0014BE00  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8014EEC4 0014BE04  7C 08 03 A6 */	mtlr r0
/* 8014EEC8 0014BE08  38 21 00 60 */	addi r1, r1, 0x60
/* 8014EECC 0014BE0C  4E 80 00 20 */	blr 
.endfn "prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3<f>"

.if version == 0
.fn initLights__Q24Game15BaseGameSectionFv, global
/* 8014EED0 0014BE10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014EED4 0014BE14  7C 08 02 A6 */	mflr r0
/* 8014EED8 0014BE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014EEDC 0014BE1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014EEE0 0014BE20  7C 7F 1B 78 */	mr r31, r3
/* 8014EEE4 0014BE24  38 60 23 A4 */	li r3, 0x23a4
/* 8014EEE8 0014BE28  4B ED 4F BD */	bl __nw__FUl
/* 8014EEEC 0014BE2C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014EEF0 0014BE30  41 82 00 14 */	beq .L_8014EF04
/* 8014EEF4 0014BE34  3C 80 80 48 */	lis r4, lbl_8047CBC8@ha
/* 8014EEF8 0014BE38  38 84 CB C8 */	addi r4, r4, lbl_8047CBC8@l
/* 8014EEFC 0014BE3C  4B FD 00 41 */	bl __ct__Q24Game12GameLightMgrFPc
/* 8014EF00 0014BE40  7C 60 1B 78 */	mr r0, r3
.L_8014EF04:
/* 8014EF04 0014BE44  90 1F 01 28 */	stw r0, 0x148(r31)
/* 8014EF08 0014BE48  7F E3 FB 78 */	mr r3, r31
/* 8014EF0C 0014BE4C  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8014EF10 0014BE50  80 9F 01 28 */	lwz r4, 0x148(r31)
/* 8014EF14 0014BE54  80 05 00 40 */	lwz r0, 0x40(r5)
/* 8014EF18 0014BE58  90 04 23 38 */	stw r0, 0x2338(r4)
/* 8014EF1C 0014BE5C  80 9F 01 28 */	lwz r4, 0x148(r31)
/* 8014EF20 0014BE60  48 01 60 91 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014EF24 0014BE64  80 1F 01 28 */	lwz r0, 0x148(r31)
/* 8014EF28 0014BE68  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014EF2C 0014BE6C  90 03 00 18 */	stw r0, 0x18(r3)
/* 8014EF30 0014BE70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014EF34 0014BE74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014EF38 0014BE78  7C 08 03 A6 */	mtlr r0
/* 8014EF3C 0014BE7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014EF40 0014BE80  4E 80 00 20 */	blr 
.endfn initLights__Q24Game15BaseGameSectionFv
.else
.fn initLights__Q24Game15BaseGameSectionFv, global
/* 8014EED0 0014BE10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014EED4 0014BE14  7C 08 02 A6 */	mflr r0
/* 8014EED8 0014BE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014EEDC 0014BE1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014EEE0 0014BE20  7C 7F 1B 78 */	mr r31, r3
/* 8014EEE4 0014BE24  38 60 23 A4 */	li r3, 0x23a4
/* 8014EEE8 0014BE28  4B ED 4F BD */	bl __nw__FUl
/* 8014EEEC 0014BE2C  7C 60 1B 79 */	or. r0, r3, r3
/* 8014EEF0 0014BE30  41 82 00 14 */	beq .L_8014EF04
/* 8014EEF4 0014BE34  3C 80 80 48 */	lis r4, lbl_8047CBC8@ha
/* 8014EEF8 0014BE38  38 84 CB C8 */	addi r4, r4, lbl_8047CBC8@l
/* 8014EEFC 0014BE3C  4B FD 00 41 */	bl __ct__Q24Game12GameLightMgrFPc
/* 8014EF00 0014BE40  7C 60 1B 78 */	mr r0, r3
.L_8014EF04:
/* 8014EF04 0014BE44  90 1F 01 28 */	stw r0, 0x128(r31)
/* 8014EF08 0014BE48  7F E3 FB 78 */	mr r3, r31
/* 8014EF0C 0014BE4C  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8014EF10 0014BE50  80 9F 01 28 */	lwz r4, 0x128(r31)
/* 8014EF14 0014BE54  80 05 00 40 */	lwz r0, 0x40(r5)
/* 8014EF18 0014BE58  90 04 23 38 */	stw r0, 0x2338(r4)
/* 8014EF1C 0014BE5C  80 9F 01 28 */	lwz r4, 0x128(r31)
/* 8014EF20 0014BE60  48 01 60 91 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8014EF24 0014BE64  80 1F 01 28 */	lwz r0, 0x128(r31)
/* 8014EF28 0014BE68  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014EF2C 0014BE6C  90 03 00 18 */	stw r0, 0x18(r3)
/* 8014EF30 0014BE70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014EF34 0014BE74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014EF38 0014BE78  7C 08 03 A6 */	mtlr r0
/* 8014EF3C 0014BE7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014EF40 0014BE80  4E 80 00 20 */	blr 
.endfn initLights__Q24Game15BaseGameSectionFv
.endif

.fn draw3D__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014EF44 0014BE84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014EF48 0014BE88  7C 08 02 A6 */	mflr r0
/* 8014EF4C 0014BE8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014EF50 0014BE90  48 0E A9 89 */	bl newdraw_draw3D_all__Q24Game15BaseGameSectionFR8Graphics
/* 8014EF54 0014BE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014EF58 0014BE98  7C 08 03 A6 */	mtlr r0
/* 8014EF5C 0014BE9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014EF60 0014BEA0  4E 80 00 20 */	blr 
.endfn draw3D__Q24Game15BaseGameSectionFR8Graphics

.if version == 0
.fn drawParticle__Q24Game15BaseGameSectionFR8Graphicsi, global
/* 8014EF64 0014BEA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014EF68 0014BEA8  7C 08 02 A6 */	mflr r0
/* 8014EF6C 0014BEAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014EF70 0014BEB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014EF74 0014BEB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014EF78 0014BEB8  7C 9E 23 78 */	mr r30, r4
/* 8014EF7C 0014BEBC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014EF80 0014BEC0  7C 7D 1B 78 */	mr r29, r3
/* 8014EF84 0014BEC4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8014EF88 0014BEC8  88 0D 84 6A */	lbz r0, sDrawParticle__Q24Game12BaseHIOParms@sda21(r13)
/* 8014EF8C 0014BECC  28 00 00 00 */	cmplwi r0, 0
/* 8014EF90 0014BED0  41 82 01 88 */	beq .L_8014F118
/* 8014EF94 0014BED4  7F C3 F3 78 */	mr r3, r30
/* 8014EF98 0014BED8  7C A4 2B 78 */	mr r4, r5
/* 8014EF9C 0014BEDC  48 2D 66 55 */	bl getViewport__8GraphicsFi
/* 8014EFA0 0014BEE0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8014EFA4 0014BEE4  41 82 01 74 */	beq .L_8014F118
/* 8014EFA8 0014BEE8  48 2D 62 99 */	bl viewable__8ViewportFv
/* 8014EFAC 0014BEEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EFB0 0014BEF0  40 82 00 08 */	bne .L_8014EFB8
/* 8014EFB4 0014BEF4  48 00 01 64 */	b .L_8014F118
.L_8014EFB8:
/* 8014EFB8 0014BEF8  7F E3 FB 78 */	mr r3, r31
/* 8014EFBC 0014BEFC  48 2D 61 E5 */	bl setProjection__8ViewportFv
/* 8014EFC0 0014BF00  7F E3 FB 78 */	mr r3, r31
/* 8014EFC4 0014BF04  48 2D 64 81 */	bl setViewport__8ViewportFv
/* 8014EFC8 0014BF08  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014EFCC 0014BF0C  38 60 00 00 */	li r3, 0
/* 8014EFD0 0014BF10  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8014EFD4 0014BF14  2C 00 00 01 */	cmpwi r0, 1
/* 8014EFD8 0014BF18  41 82 00 0C */	beq .L_8014EFE4
/* 8014EFDC 0014BF1C  2C 00 00 03 */	cmpwi r0, 3
/* 8014EFE0 0014BF20  40 82 00 08 */	bne .L_8014EFE8
.L_8014EFE4:
/* 8014EFE4 0014BF24  38 60 00 01 */	li r3, 1
.L_8014EFE8:
/* 8014EFE8 0014BF28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EFEC 0014BF2C  40 82 00 4C */	bne .L_8014F038
/* 8014EFF0 0014BF30  80 1D 00 E4 */	lwz r0, 0x104(r29)
/* 8014EFF4 0014BF34  2C 00 00 02 */	cmpwi r0, 2
/* 8014EFF8 0014BF38  41 82 00 40 */	beq .L_8014F038
/* 8014EFFC 0014BF3C  80 7D 01 28 */	lwz r3, 0x148(r29)
/* 8014F000 0014BF40  7F C4 F3 78 */	mr r4, r30
/* 8014F004 0014BF44  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F008 0014BF48  48 2E 39 B5 */	bl off__6FogMgrFR8Graphics
/* 8014F00C 0014BF4C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F010 0014BF50  7F E4 FB 78 */	mr r4, r31
/* 8014F014 0014BF54  38 A0 00 00 */	li r5, 0
/* 8014F018 0014BF58  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F01C 0014BF5C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F020 0014BF60  7D 89 03 A6 */	mtctr r12
/* 8014F024 0014BF64  4E 80 04 21 */	bctrl 
/* 8014F028 0014BF68  80 7D 01 28 */	lwz r3, 0x148(r29)
/* 8014F02C 0014BF6C  7F C4 F3 78 */	mr r4, r30
/* 8014F030 0014BF70  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F034 0014BF74  48 2E 39 C9 */	bl set__6FogMgrFR8Graphics
.L_8014F038:
/* 8014F038 0014BF78  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014F03C 0014BF7C  28 03 00 00 */	cmplwi r3, 0
/* 8014F040 0014BF80  41 82 00 44 */	beq .L_8014F084
/* 8014F044 0014BF84  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8014F048 0014BF88  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014F04C 0014BF8C  41 82 00 38 */	beq .L_8014F084
/* 8014F050 0014BF90  3B 80 00 03 */	li r28, 3
/* 8014F054 0014BF94  48 00 00 24 */	b .L_8014F078
.L_8014F058:
/* 8014F058 0014BF98  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F05C 0014BF9C  7F E4 FB 78 */	mr r4, r31
/* 8014F060 0014BFA0  7F 85 E3 78 */	mr r5, r28
/* 8014F064 0014BFA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F068 0014BFA8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F06C 0014BFAC  7D 89 03 A6 */	mtctr r12
/* 8014F070 0014BFB0  4E 80 04 21 */	bctrl 
/* 8014F074 0014BFB4  3B 9C 00 01 */	addi r28, r28, 1
.L_8014F078:
/* 8014F078 0014BFB8  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 8014F07C 0014BFBC  28 00 00 05 */	cmplwi r0, 5
/* 8014F080 0014BFC0  40 81 FF D8 */	ble .L_8014F058
.L_8014F084:
/* 8014F084 0014BFC4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F088 0014BFC8  7F E4 FB 78 */	mr r4, r31
/* 8014F08C 0014BFCC  38 A0 00 01 */	li r5, 1
/* 8014F090 0014BFD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F094 0014BFD4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F098 0014BFD8  7D 89 03 A6 */	mtctr r12
/* 8014F09C 0014BFDC  4E 80 04 21 */	bctrl 
/* 8014F0A0 0014BFE0  80 7D 01 28 */	lwz r3, 0x148(r29)
/* 8014F0A4 0014BFE4  7F C4 F3 78 */	mr r4, r30
/* 8014F0A8 0014BFE8  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F0AC 0014BFEC  48 2E 39 11 */	bl off__6FogMgrFR8Graphics
/* 8014F0B0 0014BFF0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014F0B4 0014BFF4  28 03 00 00 */	cmplwi r3, 0
/* 8014F0B8 0014BFF8  41 82 00 44 */	beq .L_8014F0FC
/* 8014F0BC 0014BFFC  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8014F0C0 0014C000  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014F0C4 0014C004  41 82 00 38 */	beq .L_8014F0FC
/* 8014F0C8 0014C008  3B 80 00 06 */	li r28, 6
/* 8014F0CC 0014C00C  48 00 00 24 */	b .L_8014F0F0
.L_8014F0D0:
/* 8014F0D0 0014C010  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F0D4 0014C014  7F E4 FB 78 */	mr r4, r31
/* 8014F0D8 0014C018  7F 85 E3 78 */	mr r5, r28
/* 8014F0DC 0014C01C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F0E0 0014C020  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F0E4 0014C024  7D 89 03 A6 */	mtctr r12
/* 8014F0E8 0014C028  4E 80 04 21 */	bctrl 
/* 8014F0EC 0014C02C  3B 9C 00 01 */	addi r28, r28, 1
.L_8014F0F0:
/* 8014F0F0 0014C030  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 8014F0F4 0014C034  28 00 00 08 */	cmplwi r0, 8
/* 8014F0F8 0014C038  40 81 FF D8 */	ble .L_8014F0D0
.L_8014F0FC:
/* 8014F0FC 0014C03C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F100 0014C040  7F E4 FB 78 */	mr r4, r31
/* 8014F104 0014C044  38 A0 00 02 */	li r5, 2
/* 8014F108 0014C048  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F10C 0014C04C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F110 0014C050  7D 89 03 A6 */	mtctr r12
/* 8014F114 0014C054  4E 80 04 21 */	bctrl 
.L_8014F118:
/* 8014F118 0014C058  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014F11C 0014C05C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014F120 0014C060  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014F124 0014C064  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014F128 0014C068  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8014F12C 0014C06C  7C 08 03 A6 */	mtlr r0
/* 8014F130 0014C070  38 21 00 20 */	addi r1, r1, 0x20
/* 8014F134 0014C074  4E 80 00 20 */	blr 
.endfn drawParticle__Q24Game15BaseGameSectionFR8Graphicsi
.else
.fn drawParticle__Q24Game15BaseGameSectionFR8Graphicsi, global
/* 8014EF64 0014BEA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014EF68 0014BEA8  7C 08 02 A6 */	mflr r0
/* 8014EF6C 0014BEAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014EF70 0014BEB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014EF74 0014BEB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014EF78 0014BEB8  7C 9E 23 78 */	mr r30, r4
/* 8014EF7C 0014BEBC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014EF80 0014BEC0  7C 7D 1B 78 */	mr r29, r3
/* 8014EF84 0014BEC4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8014EF88 0014BEC8  88 0D 84 6A */	lbz r0, sDrawParticle__Q24Game12BaseHIOParms@sda21(r13)
/* 8014EF8C 0014BECC  28 00 00 00 */	cmplwi r0, 0
/* 8014EF90 0014BED0  41 82 01 88 */	beq .L_8014F118
/* 8014EF94 0014BED4  7F C3 F3 78 */	mr r3, r30
/* 8014EF98 0014BED8  7C A4 2B 78 */	mr r4, r5
/* 8014EF9C 0014BEDC  48 2D 66 55 */	bl getViewport__8GraphicsFi
/* 8014EFA0 0014BEE0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8014EFA4 0014BEE4  41 82 01 74 */	beq .L_8014F118
/* 8014EFA8 0014BEE8  48 2D 62 99 */	bl viewable__8ViewportFv
/* 8014EFAC 0014BEEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EFB0 0014BEF0  40 82 00 08 */	bne .L_8014EFB8
/* 8014EFB4 0014BEF4  48 00 01 64 */	b .L_8014F118
.L_8014EFB8:
/* 8014EFB8 0014BEF8  7F E3 FB 78 */	mr r3, r31
/* 8014EFBC 0014BEFC  48 2D 61 E5 */	bl setProjection__8ViewportFv
/* 8014EFC0 0014BF00  7F E3 FB 78 */	mr r3, r31
/* 8014EFC4 0014BF04  48 2D 64 81 */	bl setViewport__8ViewportFv
/* 8014EFC8 0014BF08  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014EFCC 0014BF0C  38 60 00 00 */	li r3, 0
/* 8014EFD0 0014BF10  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8014EFD4 0014BF14  2C 00 00 01 */	cmpwi r0, 1
/* 8014EFD8 0014BF18  41 82 00 0C */	beq .L_8014EFE4
/* 8014EFDC 0014BF1C  2C 00 00 03 */	cmpwi r0, 3
/* 8014EFE0 0014BF20  40 82 00 08 */	bne .L_8014EFE8
.L_8014EFE4:
/* 8014EFE4 0014BF24  38 60 00 01 */	li r3, 1
.L_8014EFE8:
/* 8014EFE8 0014BF28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014EFEC 0014BF2C  40 82 00 4C */	bne .L_8014F038
/* 8014EFF0 0014BF30  80 1D 00 E4 */	lwz r0, 0xe4(r29)
/* 8014EFF4 0014BF34  2C 00 00 02 */	cmpwi r0, 2
/* 8014EFF8 0014BF38  41 82 00 40 */	beq .L_8014F038
/* 8014EFFC 0014BF3C  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 8014F000 0014BF40  7F C4 F3 78 */	mr r4, r30
/* 8014F004 0014BF44  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F008 0014BF48  48 2E 39 B5 */	bl off__6FogMgrFR8Graphics
/* 8014F00C 0014BF4C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F010 0014BF50  7F E4 FB 78 */	mr r4, r31
/* 8014F014 0014BF54  38 A0 00 00 */	li r5, 0
/* 8014F018 0014BF58  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F01C 0014BF5C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F020 0014BF60  7D 89 03 A6 */	mtctr r12
/* 8014F024 0014BF64  4E 80 04 21 */	bctrl 
/* 8014F028 0014BF68  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 8014F02C 0014BF6C  7F C4 F3 78 */	mr r4, r30
/* 8014F030 0014BF70  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F034 0014BF74  48 2E 39 C9 */	bl set__6FogMgrFR8Graphics
.L_8014F038:
/* 8014F038 0014BF78  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014F03C 0014BF7C  28 03 00 00 */	cmplwi r3, 0
/* 8014F040 0014BF80  41 82 00 44 */	beq .L_8014F084
/* 8014F044 0014BF84  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8014F048 0014BF88  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014F04C 0014BF8C  41 82 00 38 */	beq .L_8014F084
/* 8014F050 0014BF90  3B 80 00 03 */	li r28, 3
/* 8014F054 0014BF94  48 00 00 24 */	b .L_8014F078
.L_8014F058:
/* 8014F058 0014BF98  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F05C 0014BF9C  7F E4 FB 78 */	mr r4, r31
/* 8014F060 0014BFA0  7F 85 E3 78 */	mr r5, r28
/* 8014F064 0014BFA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F068 0014BFA8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F06C 0014BFAC  7D 89 03 A6 */	mtctr r12
/* 8014F070 0014BFB0  4E 80 04 21 */	bctrl 
/* 8014F074 0014BFB4  3B 9C 00 01 */	addi r28, r28, 1
.L_8014F078:
/* 8014F078 0014BFB8  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 8014F07C 0014BFBC  28 00 00 05 */	cmplwi r0, 5
/* 8014F080 0014BFC0  40 81 FF D8 */	ble .L_8014F058
.L_8014F084:
/* 8014F084 0014BFC4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F088 0014BFC8  7F E4 FB 78 */	mr r4, r31
/* 8014F08C 0014BFCC  38 A0 00 01 */	li r5, 1
/* 8014F090 0014BFD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F094 0014BFD4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F098 0014BFD8  7D 89 03 A6 */	mtctr r12
/* 8014F09C 0014BFDC  4E 80 04 21 */	bctrl 
/* 8014F0A0 0014BFE0  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 8014F0A4 0014BFE4  7F C4 F3 78 */	mr r4, r30
/* 8014F0A8 0014BFE8  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F0AC 0014BFEC  48 2E 39 11 */	bl off__6FogMgrFR8Graphics
/* 8014F0B0 0014BFF0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014F0B4 0014BFF4  28 03 00 00 */	cmplwi r3, 0
/* 8014F0B8 0014BFF8  41 82 00 44 */	beq .L_8014F0FC
/* 8014F0BC 0014BFFC  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8014F0C0 0014C000  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014F0C4 0014C004  41 82 00 38 */	beq .L_8014F0FC
/* 8014F0C8 0014C008  3B 80 00 06 */	li r28, 6
/* 8014F0CC 0014C00C  48 00 00 24 */	b .L_8014F0F0
.L_8014F0D0:
/* 8014F0D0 0014C010  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F0D4 0014C014  7F E4 FB 78 */	mr r4, r31
/* 8014F0D8 0014C018  7F 85 E3 78 */	mr r5, r28
/* 8014F0DC 0014C01C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F0E0 0014C020  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F0E4 0014C024  7D 89 03 A6 */	mtctr r12
/* 8014F0E8 0014C028  4E 80 04 21 */	bctrl 
/* 8014F0EC 0014C02C  3B 9C 00 01 */	addi r28, r28, 1
.L_8014F0F0:
/* 8014F0F0 0014C030  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 8014F0F4 0014C034  28 00 00 08 */	cmplwi r0, 8
/* 8014F0F8 0014C038  40 81 FF D8 */	ble .L_8014F0D0
.L_8014F0FC:
/* 8014F0FC 0014C03C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F100 0014C040  7F E4 FB 78 */	mr r4, r31
/* 8014F104 0014C044  38 A0 00 02 */	li r5, 2
/* 8014F108 0014C048  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F10C 0014C04C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F110 0014C050  7D 89 03 A6 */	mtctr r12
/* 8014F114 0014C054  4E 80 04 21 */	bctrl 
.L_8014F118:
/* 8014F118 0014C058  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014F11C 0014C05C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014F120 0014C060  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014F124 0014C064  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014F128 0014C068  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8014F12C 0014C06C  7C 08 03 A6 */	mtlr r0
/* 8014F130 0014C070  38 21 00 20 */	addi r1, r1, 0x20
/* 8014F134 0014C074  4E 80 00 20 */	blr 
.endfn drawParticle__Q24Game15BaseGameSectionFR8Graphicsi
.endif

.fn draw_Ogawa2D__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014F138 0014C078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F13C 0014C07C  7C 08 02 A6 */	mflr r0
/* 8014F140 0014C080  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F144 0014C084  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F148 0014C088  7C 9F 23 78 */	mr r31, r4
/* 8014F14C 0014C08C  38 7F 01 90 */	addi r3, r31, 0x190
/* 8014F150 0014C090  81 84 01 90 */	lwz r12, 0x190(r4)
/* 8014F154 0014C094  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014F158 0014C098  7D 89 03 A6 */	mtctr r12
/* 8014F15C 0014C09C  4E 80 04 21 */	bctrl 
/* 8014F160 0014C0A0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8014F164 0014C0A4  38 80 00 01 */	li r4, 1
/* 8014F168 0014C0A8  38 A0 00 00 */	li r5, 0
/* 8014F16C 0014C0AC  48 26 A4 69 */	bl draw__14TParticle2dMgrFUcUs
/* 8014F170 0014C0B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014F174 0014C0B4  38 82 A2 10 */	addi r4, r2, lbl_80518570@sda21
/* 8014F178 0014C0B8  38 A0 00 01 */	li r5, 1
/* 8014F17C 0014C0BC  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014F180 0014C0C0  48 2D B9 79 */	bl _start__9SysTimersFPcb
/* 8014F184 0014C0C4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014F188 0014C0C8  7F E4 FB 78 */	mr r4, r31
/* 8014F18C 0014C0CC  48 2A CE C5 */	bl draw__Q26Screen9Game2DMgrFR8Graphics
/* 8014F190 0014C0D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014F194 0014C0D4  38 82 A2 10 */	addi r4, r2, lbl_80518570@sda21
/* 8014F198 0014C0D8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014F19C 0014C0DC  48 2D B9 61 */	bl _stop__9SysTimersFPc
/* 8014F1A0 0014C0E0  38 7F 01 90 */	addi r3, r31, 0x190
/* 8014F1A4 0014C0E4  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 8014F1A8 0014C0E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014F1AC 0014C0EC  7D 89 03 A6 */	mtctr r12
/* 8014F1B0 0014C0F0  4E 80 04 21 */	bctrl 
/* 8014F1B4 0014C0F4  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8014F1B8 0014C0F8  38 80 00 00 */	li r4, 0
/* 8014F1BC 0014C0FC  38 A0 00 00 */	li r5, 0
/* 8014F1C0 0014C100  48 26 A4 15 */	bl draw__14TParticle2dMgrFUcUs
/* 8014F1C4 0014C104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F1C8 0014C108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F1CC 0014C10C  7C 08 03 A6 */	mtlr r0
/* 8014F1D0 0014C110  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F1D4 0014C114  4E 80 00 20 */	blr 
.endfn draw_Ogawa2D__Q24Game15BaseGameSectionFR8Graphics

.fn test_draw_treasure_detector__Q24Game15BaseGameSectionFv, global
/* 8014F1D8 0014C118  4E 80 00 20 */	blr 
.endfn test_draw_treasure_detector__Q24Game15BaseGameSectionFv

.if version == 0
.fn draw2D__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014F1DC 0014C11C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8014F1E0 0014C120  7C 08 02 A6 */	mflr r0
/* 8014F1E4 0014C124  3C A0 80 51 */	lis r5, j3dSys@ha
/* 8014F1E8 0014C128  90 01 00 84 */	stw r0, 0x84(r1)
/* 8014F1EC 0014C12C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8014F1F0 0014C130  7C 9F 23 78 */	mr r31, r4
/* 8014F1F4 0014C134  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8014F1F8 0014C138  7C 7E 1B 78 */	mr r30, r3
/* 8014F1FC 0014C13C  38 65 F2 30 */	addi r3, r5, j3dSys@l
/* 8014F200 0014C140  4B F0 F1 C5 */	bl reinitGX__6J3DSysFv
/* 8014F204 0014C144  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8014F208 0014C148  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8014F20C 0014C14C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014F210 0014C150  7D 89 03 A6 */	mtctr r12
/* 8014F214 0014C154  4E 80 04 21 */	bctrl 
/* 8014F218 0014C158  7F C3 F3 78 */	mr r3, r30
/* 8014F21C 0014C15C  7F E4 FB 78 */	mr r4, r31
/* 8014F220 0014C160  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014F224 0014C164  81 8C 01 18 */	lwz r12, 0x118(r12)
/* 8014F228 0014C168  7D 89 03 A6 */	mtctr r12
/* 8014F22C 0014C16C  4E 80 04 21 */	bctrl 
/* 8014F230 0014C170  80 7E 01 68 */	lwz r3, 0x188(r30)
/* 8014F234 0014C174  28 03 00 00 */	cmplwi r3, 0
/* 8014F238 0014C178  41 82 00 1C */	beq .L_8014F254
/* 8014F23C 0014C17C  80 9E 01 6C */	lwz r4, 0x18c(r30)
/* 8014F240 0014C180  38 C0 00 04 */	li r6, 4
/* 8014F244 0014C184  80 BE 01 70 */	lwz r5, 0x190(r30)
/* 8014F248 0014C188  38 E0 00 00 */	li r7, 0
/* 8014F24C 0014C18C  39 00 00 00 */	li r8, 0
/* 8014F250 0014C190  4B EE 44 31 */	bl capture__10JUTTextureFii9_GXTexFmtbUc
.L_8014F254:
/* 8014F254 0014C194  80 1E 01 68 */	lwz r0, 0x188(r30)
/* 8014F258 0014C198  28 00 00 00 */	cmplwi r0, 0
/* 8014F25C 0014C19C  40 82 00 50 */	bne .L_8014F2AC
/* 8014F260 0014C1A0  88 1E 01 64 */	lbz r0, 0x184(r30)
/* 8014F264 0014C1A4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8014F268 0014C1A8  41 82 00 44 */	beq .L_8014F2AC
/* 8014F26C 0014C1AC  80 7E 01 54 */	lwz r3, 0x174(r30)
/* 8014F270 0014C1B0  38 C0 00 04 */	li r6, 4
/* 8014F274 0014C1B4  80 9E 01 5C */	lwz r4, 0x17c(r30)
/* 8014F278 0014C1B8  38 E0 00 01 */	li r7, 1
/* 8014F27C 0014C1BC  80 BE 01 60 */	lwz r5, 0x180(r30)
/* 8014F280 0014C1C0  39 00 00 00 */	li r8, 0
/* 8014F284 0014C1C4  4B EE 43 FD */	bl capture__10JUTTextureFii9_GXTexFmtbUc
/* 8014F288 0014C1C8  88 1E 01 64 */	lbz r0, 0x184(r30)
/* 8014F28C 0014C1CC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8014F290 0014C1D0  98 1E 01 64 */	stb r0, 0x184(r30)
/* 8014F294 0014C1D4  88 1E 01 64 */	lbz r0, 0x184(r30)
/* 8014F298 0014C1D8  60 00 00 01 */	ori r0, r0, 1
/* 8014F29C 0014C1DC  98 1E 01 64 */	stb r0, 0x184(r30)
/* 8014F2A0 0014C1E0  88 1E 01 64 */	lbz r0, 0x184(r30)
/* 8014F2A4 0014C1E4  60 00 00 04 */	ori r0, r0, 4
/* 8014F2A8 0014C1E8  98 1E 01 64 */	stb r0, 0x184(r30)
.L_8014F2AC:
/* 8014F2AC 0014C1EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014F2B0 0014C1F0  7F E4 FB 78 */	mr r4, r31
/* 8014F2B4 0014C1F4  48 2A CD C1 */	bl drawIndirect__Q26Screen9Game2DMgrFR8Graphics
/* 8014F2B8 0014C1F8  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8014F2BC 0014C1FC  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8014F2C0 0014C200  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014F2C4 0014C204  7D 89 03 A6 */	mtctr r12
/* 8014F2C8 0014C208  4E 80 04 21 */	bctrl 
/* 8014F2CC 0014C20C  80 8D 89 D8 */	lwz r4, systemFont__9JFWSystem@sda21(r13)
/* 8014F2D0 0014C210  38 61 00 18 */	addi r3, r1, 0x18
/* 8014F2D4 0014C214  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014F2D8 0014C218  4B EE E4 79 */	bl __ct__8J2DPrintFP7JUTFontf
/* 8014F2DC 0014C21C  38 61 00 18 */	addi r3, r1, 0x18
/* 8014F2E0 0014C220  4B EE E6 79 */	bl initiate__8J2DPrintFv
/* 8014F2E4 0014C224  39 40 00 FF */	li r10, 0xff
/* 8014F2E8 0014C228  38 60 00 9E */	li r3, 0x9e
/* 8014F2EC 0014C22C  38 C0 00 DB */	li r6, 0xdb
/* 8014F2F0 0014C230  38 A0 00 38 */	li r5, 0x38
/* 8014F2F4 0014C234  38 80 00 9F */	li r4, 0x9f
/* 8014F2F8 0014C238  38 00 00 F7 */	li r0, 0xf7
/* 8014F2FC 0014C23C  98 61 00 10 */	stb r3, 0x10(r1)
/* 8014F300 0014C240  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8014F304 0014C244  98 C1 00 11 */	stb r6, 0x11(r1)
/* 8014F308 0014C248  99 41 00 12 */	stb r10, 0x12(r1)
/* 8014F30C 0014C24C  99 41 00 13 */	stb r10, 0x13(r1)
/* 8014F310 0014C250  80 C1 00 10 */	lwz r6, 0x10(r1)
/* 8014F314 0014C254  98 A1 00 08 */	stb r5, 8(r1)
/* 8014F318 0014C258  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8014F31C 0014C25C  88 A1 00 14 */	lbz r5, 0x14(r1)
/* 8014F320 0014C260  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8014F324 0014C264  89 01 00 16 */	lbz r8, 0x16(r1)
/* 8014F328 0014C268  88 E1 00 17 */	lbz r7, 0x17(r1)
/* 8014F32C 0014C26C  98 81 00 09 */	stb r4, 9(r1)
/* 8014F330 0014C270  98 01 00 0A */	stb r0, 0xa(r1)
/* 8014F334 0014C274  99 41 00 0B */	stb r10, 0xb(r1)
/* 8014F338 0014C278  80 01 00 08 */	lwz r0, 8(r1)
/* 8014F33C 0014C27C  98 A1 00 58 */	stb r5, 0x58(r1)
/* 8014F340 0014C280  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014F344 0014C284  88 C1 00 0C */	lbz r6, 0xc(r1)
/* 8014F348 0014C288  88 A1 00 0D */	lbz r5, 0xd(r1)
/* 8014F34C 0014C28C  88 81 00 0E */	lbz r4, 0xe(r1)
/* 8014F350 0014C290  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8014F354 0014C294  99 21 00 59 */	stb r9, 0x59(r1)
/* 8014F358 0014C298  99 01 00 5A */	stb r8, 0x5a(r1)
/* 8014F35C 0014C29C  98 E1 00 5B */	stb r7, 0x5b(r1)
/* 8014F360 0014C2A0  98 C1 00 5C */	stb r6, 0x5c(r1)
/* 8014F364 0014C2A4  98 A1 00 5D */	stb r5, 0x5d(r1)
/* 8014F368 0014C2A8  98 81 00 5E */	stb r4, 0x5e(r1)
/* 8014F36C 0014C2AC  98 01 00 5F */	stb r0, 0x5f(r1)
/* 8014F370 0014C2B0  4B ED 44 45 */	bl getFreeSize__7JKRHeapFv
/* 8014F374 0014C2B4  38 61 00 18 */	addi r3, r1, 0x18
/* 8014F378 0014C2B8  38 80 FF FF */	li r4, -1
/* 8014F37C 0014C2BC  4B EE E5 95 */	bl __dt__8J2DPrintFv
/* 8014F380 0014C2C0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8014F384 0014C2C4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8014F388 0014C2C8  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8014F38C 0014C2CC  7C 08 03 A6 */	mtlr r0
/* 8014F390 0014C2D0  38 21 00 80 */	addi r1, r1, 0x80
/* 8014F394 0014C2D4  4E 80 00 20 */	blr 
.endfn draw2D__Q24Game15BaseGameSectionFR8Graphics
.else
.fn draw2D__Q24Game15BaseGameSectionFR8Graphics, global
/* 8014F1DC 0014C11C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8014F1E0 0014C120  7C 08 02 A6 */	mflr r0
/* 8014F1E4 0014C124  3C A0 80 51 */	lis r5, j3dSys@ha
/* 8014F1E8 0014C128  90 01 00 84 */	stw r0, 0x84(r1)
/* 8014F1EC 0014C12C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8014F1F0 0014C130  7C 9F 23 78 */	mr r31, r4
/* 8014F1F4 0014C134  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8014F1F8 0014C138  7C 7E 1B 78 */	mr r30, r3
/* 8014F1FC 0014C13C  38 65 F2 30 */	addi r3, r5, j3dSys@l
/* 8014F200 0014C140  4B F0 F1 C5 */	bl reinitGX__6J3DSysFv
/* 8014F204 0014C144  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8014F208 0014C148  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8014F20C 0014C14C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014F210 0014C150  7D 89 03 A6 */	mtctr r12
/* 8014F214 0014C154  4E 80 04 21 */	bctrl 
/* 8014F218 0014C158  7F C3 F3 78 */	mr r3, r30
/* 8014F21C 0014C15C  7F E4 FB 78 */	mr r4, r31
/* 8014F220 0014C160  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014F224 0014C164  81 8C 01 18 */	lwz r12, 0x118(r12)
/* 8014F228 0014C168  7D 89 03 A6 */	mtctr r12
/* 8014F22C 0014C16C  4E 80 04 21 */	bctrl 
/* 8014F230 0014C170  80 7E 01 68 */	lwz r3, 0x168(r30)
/* 8014F234 0014C174  28 03 00 00 */	cmplwi r3, 0
/* 8014F238 0014C178  41 82 00 1C */	beq .L_8014F254
/* 8014F23C 0014C17C  80 9E 01 6C */	lwz r4, 0x16c(r30)
/* 8014F240 0014C180  38 C0 00 04 */	li r6, 4
/* 8014F244 0014C184  80 BE 01 70 */	lwz r5, 0x170(r30)
/* 8014F248 0014C188  38 E0 00 00 */	li r7, 0
/* 8014F24C 0014C18C  39 00 00 00 */	li r8, 0
/* 8014F250 0014C190  4B EE 44 31 */	bl capture__10JUTTextureFii9_GXTexFmtbUc
.L_8014F254:
/* 8014F254 0014C194  80 1E 01 68 */	lwz r0, 0x168(r30)
/* 8014F258 0014C198  28 00 00 00 */	cmplwi r0, 0
/* 8014F25C 0014C19C  40 82 00 50 */	bne .L_8014F2AC
/* 8014F260 0014C1A0  88 1E 01 64 */	lbz r0, 0x164(r30)
/* 8014F264 0014C1A4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8014F268 0014C1A8  41 82 00 44 */	beq .L_8014F2AC
/* 8014F26C 0014C1AC  80 7E 01 54 */	lwz r3, 0x154(r30)
/* 8014F270 0014C1B0  38 C0 00 04 */	li r6, 4
/* 8014F274 0014C1B4  80 9E 01 5C */	lwz r4, 0x15c(r30)
/* 8014F278 0014C1B8  38 E0 00 01 */	li r7, 1
/* 8014F27C 0014C1BC  80 BE 01 60 */	lwz r5, 0x160(r30)
/* 8014F280 0014C1C0  39 00 00 00 */	li r8, 0
/* 8014F284 0014C1C4  4B EE 43 FD */	bl capture__10JUTTextureFii9_GXTexFmtbUc
/* 8014F288 0014C1C8  88 1E 01 64 */	lbz r0, 0x164(r30)
/* 8014F28C 0014C1CC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8014F290 0014C1D0  98 1E 01 64 */	stb r0, 0x164(r30)
/* 8014F294 0014C1D4  88 1E 01 64 */	lbz r0, 0x164(r30)
/* 8014F298 0014C1D8  60 00 00 01 */	ori r0, r0, 1
/* 8014F29C 0014C1DC  98 1E 01 64 */	stb r0, 0x164(r30)
/* 8014F2A0 0014C1E0  88 1E 01 64 */	lbz r0, 0x164(r30)
/* 8014F2A4 0014C1E4  60 00 00 04 */	ori r0, r0, 4
/* 8014F2A8 0014C1E8  98 1E 01 64 */	stb r0, 0x164(r30)
.L_8014F2AC:
/* 8014F2AC 0014C1EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8014F2B0 0014C1F0  7F E4 FB 78 */	mr r4, r31
/* 8014F2B4 0014C1F4  48 2A CD C1 */	bl drawIndirect__Q26Screen9Game2DMgrFR8Graphics
/* 8014F2B8 0014C1F8  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8014F2BC 0014C1FC  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8014F2C0 0014C200  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014F2C4 0014C204  7D 89 03 A6 */	mtctr r12
/* 8014F2C8 0014C208  4E 80 04 21 */	bctrl 
/* 8014F2CC 0014C20C  80 8D 89 D8 */	lwz r4, systemFont__9JFWSystem@sda21(r13)
/* 8014F2D0 0014C210  38 61 00 18 */	addi r3, r1, 0x18
/* 8014F2D4 0014C214  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014F2D8 0014C218  4B EE E4 79 */	bl __ct__8J2DPrintFP7JUTFontf
/* 8014F2DC 0014C21C  38 61 00 18 */	addi r3, r1, 0x18
/* 8014F2E0 0014C220  4B EE E6 79 */	bl initiate__8J2DPrintFv
/* 8014F2E4 0014C224  39 40 00 FF */	li r10, 0xff
/* 8014F2E8 0014C228  38 60 00 9E */	li r3, 0x9e
/* 8014F2EC 0014C22C  38 C0 00 DB */	li r6, 0xdb
/* 8014F2F0 0014C230  38 A0 00 38 */	li r5, 0x38
/* 8014F2F4 0014C234  38 80 00 9F */	li r4, 0x9f
/* 8014F2F8 0014C238  38 00 00 F7 */	li r0, 0xf7
/* 8014F2FC 0014C23C  98 61 00 10 */	stb r3, 0x10(r1)
/* 8014F300 0014C240  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8014F304 0014C244  98 C1 00 11 */	stb r6, 0x11(r1)
/* 8014F308 0014C248  99 41 00 12 */	stb r10, 0x12(r1)
/* 8014F30C 0014C24C  99 41 00 13 */	stb r10, 0x13(r1)
/* 8014F310 0014C250  80 C1 00 10 */	lwz r6, 0x10(r1)
/* 8014F314 0014C254  98 A1 00 08 */	stb r5, 8(r1)
/* 8014F318 0014C258  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8014F31C 0014C25C  88 A1 00 14 */	lbz r5, 0x14(r1)
/* 8014F320 0014C260  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8014F324 0014C264  89 01 00 16 */	lbz r8, 0x16(r1)
/* 8014F328 0014C268  88 E1 00 17 */	lbz r7, 0x17(r1)
/* 8014F32C 0014C26C  98 81 00 09 */	stb r4, 9(r1)
/* 8014F330 0014C270  98 01 00 0A */	stb r0, 0xa(r1)
/* 8014F334 0014C274  99 41 00 0B */	stb r10, 0xb(r1)
/* 8014F338 0014C278  80 01 00 08 */	lwz r0, 8(r1)
/* 8014F33C 0014C27C  98 A1 00 58 */	stb r5, 0x58(r1)
/* 8014F340 0014C280  90 01 00 0C */	stw r0, 0xc(r1)
/* 8014F344 0014C284  88 C1 00 0C */	lbz r6, 0xc(r1)
/* 8014F348 0014C288  88 A1 00 0D */	lbz r5, 0xd(r1)
/* 8014F34C 0014C28C  88 81 00 0E */	lbz r4, 0xe(r1)
/* 8014F350 0014C290  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8014F354 0014C294  99 21 00 59 */	stb r9, 0x59(r1)
/* 8014F358 0014C298  99 01 00 5A */	stb r8, 0x5a(r1)
/* 8014F35C 0014C29C  98 E1 00 5B */	stb r7, 0x5b(r1)
/* 8014F360 0014C2A0  98 C1 00 5C */	stb r6, 0x5c(r1)
/* 8014F364 0014C2A4  98 A1 00 5D */	stb r5, 0x5d(r1)
/* 8014F368 0014C2A8  98 81 00 5E */	stb r4, 0x5e(r1)
/* 8014F36C 0014C2AC  98 01 00 5F */	stb r0, 0x5f(r1)
/* 8014F370 0014C2B0  4B ED 44 45 */	bl getFreeSize__7JKRHeapFv
/* 8014F374 0014C2B4  38 61 00 18 */	addi r3, r1, 0x18
/* 8014F378 0014C2B8  38 80 FF FF */	li r4, -1
/* 8014F37C 0014C2BC  4B EE E5 95 */	bl __dt__8J2DPrintFv
/* 8014F380 0014C2C0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8014F384 0014C2C4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8014F388 0014C2C8  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8014F38C 0014C2CC  7C 08 03 A6 */	mtlr r0
/* 8014F390 0014C2D0  38 21 00 80 */	addi r1, r1, 0x80
/* 8014F394 0014C2D4  4E 80 00 20 */	blr 
.endfn draw2D__Q24Game15BaseGameSectionFR8Graphics
.endif

.if version == 0
.fn directDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport, global
/* 8014F398 0014C2D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014F39C 0014C2DC  7C 08 02 A6 */	mflr r0
/* 8014F3A0 0014C2E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014F3A4 0014C2E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014F3A8 0014C2E8  7C BF 2B 78 */	mr r31, r5
/* 8014F3AC 0014C2EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014F3B0 0014C2F0  7C 9E 23 78 */	mr r30, r4
/* 8014F3B4 0014C2F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014F3B8 0014C2F8  7C 7D 1B 78 */	mr r29, r3
/* 8014F3BC 0014C2FC  7F E3 FB 78 */	mr r3, r31
/* 8014F3C0 0014C300  48 2D 60 85 */	bl setViewport__8ViewportFv
/* 8014F3C4 0014C304  7F E3 FB 78 */	mr r3, r31
/* 8014F3C8 0014C308  48 2D 5D D9 */	bl setProjection__8ViewportFv
/* 8014F3CC 0014C30C  7F E3 FB 78 */	mr r3, r31
/* 8014F3D0 0014C310  38 80 00 01 */	li r4, 1
/* 8014F3D4 0014C314  48 2D 5D 89 */	bl getMatrix__8ViewportFb
/* 8014F3D8 0014C318  7C 64 1B 78 */	mr r4, r3
/* 8014F3DC 0014C31C  7F C3 F3 78 */	mr r3, r30
/* 8014F3E0 0014C320  48 2D 64 3D */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 8014F3E4 0014C324  7F A3 EB 78 */	mr r3, r29
/* 8014F3E8 0014C328  7F C4 F3 78 */	mr r4, r30
/* 8014F3EC 0014C32C  7F E5 FB 78 */	mr r5, r31
/* 8014F3F0 0014C330  48 00 09 AD */	bl doDirectDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
/* 8014F3F4 0014C334  80 0D 96 50 */	lwz r0, sInstance__Q29TexCaster3Mgr@sda21(r13)
/* 8014F3F8 0014C338  28 00 00 00 */	cmplwi r0, 0
/* 8014F3FC 0014C33C  41 82 00 38 */	beq .L_8014F434
/* 8014F400 0014C340  7F E3 FB 78 */	mr r3, r31
/* 8014F404 0014C344  38 80 00 01 */	li r4, 1
/* 8014F408 0014C348  48 2D 5D 55 */	bl getMatrix__8ViewportFb
/* 8014F40C 0014C34C  7C 64 1B 78 */	mr r4, r3
/* 8014F410 0014C350  7F C3 F3 78 */	mr r3, r30
/* 8014F414 0014C354  48 2D 64 09 */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 8014F418 0014C358  80 7D 01 28 */	lwz r3, 0x148(r29)
/* 8014F41C 0014C35C  7F C4 F3 78 */	mr r4, r30
/* 8014F420 0014C360  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F424 0014C364  48 2E 35 D9 */	bl set__6FogMgrFR8Graphics
/* 8014F428 0014C368  80 6D 96 50 */	lwz r3, sInstance__Q29TexCaster3Mgr@sda21(r13)
/* 8014F42C 0014C36C  7F C4 F3 78 */	mr r4, r30
/* 8014F430 0014C370  48 0E DD 65 */	bl draw__Q29TexCaster3MgrFR8Graphics
.L_8014F434:
/* 8014F434 0014C374  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014F438 0014C378  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014F43C 0014C37C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014F440 0014C380  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014F444 0014C384  7C 08 03 A6 */	mtlr r0
/* 8014F448 0014C388  38 21 00 20 */	addi r1, r1, 0x20
/* 8014F44C 0014C38C  4E 80 00 20 */	blr 
.endfn directDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
.else
.fn directDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport, global
/* 8014F398 0014C2D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014F39C 0014C2DC  7C 08 02 A6 */	mflr r0
/* 8014F3A0 0014C2E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014F3A4 0014C2E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014F3A8 0014C2E8  7C BF 2B 78 */	mr r31, r5
/* 8014F3AC 0014C2EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014F3B0 0014C2F0  7C 9E 23 78 */	mr r30, r4
/* 8014F3B4 0014C2F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014F3B8 0014C2F8  7C 7D 1B 78 */	mr r29, r3
/* 8014F3BC 0014C2FC  7F E3 FB 78 */	mr r3, r31
/* 8014F3C0 0014C300  48 2D 60 85 */	bl setViewport__8ViewportFv
/* 8014F3C4 0014C304  7F E3 FB 78 */	mr r3, r31
/* 8014F3C8 0014C308  48 2D 5D D9 */	bl setProjection__8ViewportFv
/* 8014F3CC 0014C30C  7F E3 FB 78 */	mr r3, r31
/* 8014F3D0 0014C310  38 80 00 01 */	li r4, 1
/* 8014F3D4 0014C314  48 2D 5D 89 */	bl getMatrix__8ViewportFb
/* 8014F3D8 0014C318  7C 64 1B 78 */	mr r4, r3
/* 8014F3DC 0014C31C  7F C3 F3 78 */	mr r3, r30
/* 8014F3E0 0014C320  48 2D 64 3D */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 8014F3E4 0014C324  7F A3 EB 78 */	mr r3, r29
/* 8014F3E8 0014C328  7F C4 F3 78 */	mr r4, r30
/* 8014F3EC 0014C32C  7F E5 FB 78 */	mr r5, r31
/* 8014F3F0 0014C330  48 00 09 AD */	bl doDirectDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
/* 8014F3F4 0014C334  80 0D 96 50 */	lwz r0, sInstance__Q29TexCaster3Mgr@sda21(r13)
/* 8014F3F8 0014C338  28 00 00 00 */	cmplwi r0, 0
/* 8014F3FC 0014C33C  41 82 00 38 */	beq .L_8014F434
/* 8014F400 0014C340  7F E3 FB 78 */	mr r3, r31
/* 8014F404 0014C344  38 80 00 01 */	li r4, 1
/* 8014F408 0014C348  48 2D 5D 55 */	bl getMatrix__8ViewportFb
/* 8014F40C 0014C34C  7C 64 1B 78 */	mr r4, r3
/* 8014F410 0014C350  7F C3 F3 78 */	mr r3, r30
/* 8014F414 0014C354  48 2D 64 09 */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 8014F418 0014C358  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 8014F41C 0014C35C  7F C4 F3 78 */	mr r4, r30
/* 8014F420 0014C360  80 63 23 44 */	lwz r3, 0x2344(r3)
/* 8014F424 0014C364  48 2E 35 D9 */	bl set__6FogMgrFR8Graphics
/* 8014F428 0014C368  80 6D 96 50 */	lwz r3, sInstance__Q29TexCaster3Mgr@sda21(r13)
/* 8014F42C 0014C36C  7F C4 F3 78 */	mr r4, r30
/* 8014F430 0014C370  48 0E DD 65 */	bl draw__Q29TexCaster3MgrFR8Graphics
.L_8014F434:
/* 8014F434 0014C374  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014F438 0014C378  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014F43C 0014C37C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014F440 0014C380  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014F444 0014C384  7C 08 03 A6 */	mtlr r0
/* 8014F448 0014C388  38 21 00 20 */	addi r1, r1, 0x20
/* 8014F44C 0014C38C  4E 80 00 20 */	blr 
.endfn directDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
.endif

.fn directDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport, global
/* 8014F450 0014C390  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014F454 0014C394  7C 08 02 A6 */	mflr r0
/* 8014F458 0014C398  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014F45C 0014C39C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014F460 0014C3A0  7C BF 2B 78 */	mr r31, r5
/* 8014F464 0014C3A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014F468 0014C3A8  7C 9E 23 78 */	mr r30, r4
/* 8014F46C 0014C3AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014F470 0014C3B0  7C 7D 1B 78 */	mr r29, r3
/* 8014F474 0014C3B4  7F E3 FB 78 */	mr r3, r31
/* 8014F478 0014C3B8  48 2D 5F CD */	bl setViewport__8ViewportFv
/* 8014F47C 0014C3BC  7F E3 FB 78 */	mr r3, r31
/* 8014F480 0014C3C0  48 2D 5D 21 */	bl setProjection__8ViewportFv
/* 8014F484 0014C3C4  7F E3 FB 78 */	mr r3, r31
/* 8014F488 0014C3C8  38 80 00 01 */	li r4, 1
/* 8014F48C 0014C3CC  48 2D 5C D1 */	bl getMatrix__8ViewportFb
/* 8014F490 0014C3D0  7C 64 1B 78 */	mr r4, r3
/* 8014F494 0014C3D4  7F C3 F3 78 */	mr r3, r30
/* 8014F498 0014C3D8  48 2D 63 85 */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 8014F49C 0014C3DC  7F A3 EB 78 */	mr r3, r29
/* 8014F4A0 0014C3E0  7F C4 F3 78 */	mr r4, r30
/* 8014F4A4 0014C3E4  7F E5 FB 78 */	mr r5, r31
/* 8014F4A8 0014C3E8  48 00 08 9D */	bl doDirectDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport
/* 8014F4AC 0014C3EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014F4B0 0014C3F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014F4B4 0014C3F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014F4B8 0014C3F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014F4BC 0014C3FC  7C 08 03 A6 */	mtlr r0
/* 8014F4C0 0014C400  38 21 00 20 */	addi r1, r1, 0x20
/* 8014F4C4 0014C404  4E 80 00 20 */	blr 
.endfn directDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport

.fn j3dSetView__Q24Game15BaseGameSectionFP8Viewportb, global
/* 8014F4C8 0014C408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F4CC 0014C40C  7C 08 02 A6 */	mflr r0
/* 8014F4D0 0014C410  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F4D4 0014C414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F4D8 0014C418  7C 9F 23 78 */	mr r31, r4
/* 8014F4DC 0014C41C  7C A4 2B 78 */	mr r4, r5
/* 8014F4E0 0014C420  93 C1 00 08 */	stw r30, 8(r1)
/* 8014F4E4 0014C424  7C 7E 1B 78 */	mr r30, r3
/* 8014F4E8 0014C428  7F E3 FB 78 */	mr r3, r31
/* 8014F4EC 0014C42C  48 2D 60 2D */	bl setJ3DViewMtx__8ViewportFb
/* 8014F4F0 0014C430  A0 9F 00 18 */	lhz r4, 0x18(r31)
/* 8014F4F4 0014C434  7F C3 F3 78 */	mr r3, r30
/* 8014F4F8 0014C438  48 00 03 71 */	bl doSetView__Q24Game15BaseGameSectionFi
/* 8014F4FC 0014C43C  7F C3 F3 78 */	mr r3, r30
/* 8014F500 0014C440  48 00 04 69 */	bl doViewCalc__Q24Game15BaseGameSectionFv
/* 8014F504 0014C444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F508 0014C448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F50C 0014C44C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014F510 0014C450  7C 08 03 A6 */	mtlr r0
/* 8014F514 0014C454  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F518 0014C458  4E 80 00 20 */	blr 
.endfn j3dSetView__Q24Game15BaseGameSectionFP8Viewportb

.fn doSimulation__Q24Game15BaseGameSectionFf, global
/* 8014F51C 0014C45C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F520 0014C460  7C 08 02 A6 */	mflr r0
/* 8014F524 0014C464  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F528 0014C468  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F52C 0014C46C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F530 0014C470  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8014F534 0014C474  7D 89 03 A6 */	mtctr r12
/* 8014F538 0014C478  4E 80 04 21 */	bctrl 
/* 8014F53C 0014C47C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F540 0014C480  7C 08 03 A6 */	mtlr r0
/* 8014F544 0014C484  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F548 0014C488  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game15BaseGameSectionFf

.fn doSimpleDraw__Q24Game15BaseGameSectionFP8Viewport, global
/* 8014F54C 0014C48C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F550 0014C490  7C 08 02 A6 */	mflr r0
/* 8014F554 0014C494  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F558 0014C498  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F55C 0014C49C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F560 0014C4A0  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8014F564 0014C4A4  7D 89 03 A6 */	mtctr r12
/* 8014F568 0014C4A8  4E 80 04 21 */	bctrl 
/* 8014F56C 0014C4AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F570 0014C4B0  7C 08 03 A6 */	mtlr r0
/* 8014F574 0014C4B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F578 0014C4B8  4E 80 00 20 */	blr 
.endfn doSimpleDraw__Q24Game15BaseGameSectionFP8Viewport

.fn doAnimation__Q24Game15BaseGameSectionFv, global
/* 8014F57C 0014C4BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014F580 0014C4C0  7C 08 02 A6 */	mflr r0
/* 8014F584 0014C4C4  38 80 00 00 */	li r4, 0
/* 8014F588 0014C4C8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014F58C 0014C4CC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014F590 0014C4D0  7C 7F 1B 78 */	mr r31, r3
/* 8014F594 0014C4D4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014F598 0014C4D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F59C 0014C4DC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F5A0 0014C4E0  7D 89 03 A6 */	mtctr r12
/* 8014F5A4 0014C4E4  4E 80 04 21 */	bctrl 
/* 8014F5A8 0014C4E8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014F5AC 0014C4EC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8014F5B0 0014C4F0  2C 00 00 04 */	cmpwi r0, 4
/* 8014F5B4 0014C4F4  41 82 00 7C */	beq .L_8014F630
/* 8014F5B8 0014C4F8  80 0D 93 A8 */	lwz r0, generatorMgr__4Game@sda21(r13)
/* 8014F5BC 0014C4FC  28 00 00 00 */	cmplwi r0, 0
/* 8014F5C0 0014C500  41 82 00 70 */	beq .L_8014F630
/* 8014F5C4 0014C504  7C 64 1B 78 */	mr r4, r3
/* 8014F5C8 0014C508  38 61 00 08 */	addi r3, r1, 8
/* 8014F5CC 0014C50C  81 84 00 00 */	lwz r12, 0(r4)
/* 8014F5D0 0014C510  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014F5D4 0014C514  7D 89 03 A6 */	mtctr r12
/* 8014F5D8 0014C518  4E 80 04 21 */	bctrl 
/* 8014F5DC 0014C51C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8014F5E0 0014C520  38 81 00 14 */	addi r4, r1, 0x14
/* 8014F5E4 0014C524  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8014F5E8 0014C528  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8014F5EC 0014C52C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8014F5F0 0014C530  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014F5F4 0014C534  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8014F5F8 0014C538  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8014F5FC 0014C53C  48 05 C1 C5 */	bl "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
/* 8014F600 0014C540  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014F604 0014C544  38 81 00 14 */	addi r4, r1, 0x14
/* 8014F608 0014C548  48 05 C1 B9 */	bl "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
/* 8014F60C 0014C54C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014F610 0014C550  38 81 00 14 */	addi r4, r1, 0x14
/* 8014F614 0014C554  48 05 C1 AD */	bl "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
/* 8014F618 0014C558  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014F61C 0014C55C  38 81 00 14 */	addi r4, r1, 0x14
/* 8014F620 0014C560  48 05 C1 A1 */	bl "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
/* 8014F624 0014C564  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014F628 0014C568  38 81 00 14 */	addi r4, r1, 0x14
/* 8014F62C 0014C56C  48 05 C1 95 */	bl "updateCursorPos__Q24Game12GeneratorMgrFR10Vector3<f>"
.L_8014F630:
/* 8014F630 0014C570  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 8014F634 0014C574  28 03 00 00 */	cmplwi r3, 0
/* 8014F638 0014C578  41 82 00 08 */	beq .L_8014F640
/* 8014F63C 0014C57C  48 05 40 F5 */	bl update__Q24Game10PathfinderFv
.L_8014F640:
/* 8014F640 0014C580  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8014F644 0014C584  3C 60 80 48 */	lis r3, lbl_8047CC04@ha
/* 8014F648 0014C588  38 83 CC 04 */	addi r4, r3, lbl_8047CC04@l
/* 8014F64C 0014C58C  38 A0 00 01 */	li r5, 1
/* 8014F650 0014C590  80 66 00 28 */	lwz r3, 0x28(r6)
/* 8014F654 0014C594  48 2D B4 A5 */	bl _start__9SysTimersFPcb
/* 8014F658 0014C598  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F65C 0014C59C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F660 0014C5A0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8014F664 0014C5A4  7D 89 03 A6 */	mtctr r12
/* 8014F668 0014C5A8  4E 80 04 21 */	bctrl 
/* 8014F66C 0014C5AC  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8014F670 0014C5B0  3C 60 80 48 */	lis r3, lbl_8047CC04@ha
/* 8014F674 0014C5B4  38 83 CC 04 */	addi r4, r3, lbl_8047CC04@l
/* 8014F678 0014C5B8  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8014F67C 0014C5BC  48 2D B4 81 */	bl _stop__9SysTimersFPc
/* 8014F680 0014C5C0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F684 0014C5C4  28 03 00 00 */	cmplwi r3, 0
/* 8014F688 0014C5C8  41 82 00 24 */	beq .L_8014F6AC
/* 8014F68C 0014C5CC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8014F690 0014C5D0  88 04 00 4A */	lbz r0, 0x4a(r4)
/* 8014F694 0014C5D4  28 00 00 00 */	cmplwi r0, 0
/* 8014F698 0014C5D8  40 82 00 14 */	bne .L_8014F6AC
/* 8014F69C 0014C5DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F6A0 0014C5E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014F6A4 0014C5E4  7D 89 03 A6 */	mtctr r12
/* 8014F6A8 0014C5E8  4E 80 04 21 */	bctrl 
.L_8014F6AC:
/* 8014F6AC 0014C5EC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F6B0 0014C5F0  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014F6B4 0014C5F4  2C 00 00 04 */	cmpwi r0, 4
/* 8014F6B8 0014C5F8  41 82 00 70 */	beq .L_8014F728
/* 8014F6BC 0014C5FC  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014F6C0 0014C600  28 03 00 00 */	cmplwi r3, 0
/* 8014F6C4 0014C604  41 82 00 64 */	beq .L_8014F728
/* 8014F6C8 0014C608  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F6CC 0014C60C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014F6D0 0014C610  7D 89 03 A6 */	mtctr r12
/* 8014F6D4 0014C614  4E 80 04 21 */	bctrl 
/* 8014F6D8 0014C618  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014F6DC 0014C61C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F6E0 0014C620  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014F6E4 0014C624  7D 89 03 A6 */	mtctr r12
/* 8014F6E8 0014C628  4E 80 04 21 */	bctrl 
/* 8014F6EC 0014C62C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014F6F0 0014C630  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F6F4 0014C634  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014F6F8 0014C638  7D 89 03 A6 */	mtctr r12
/* 8014F6FC 0014C63C  4E 80 04 21 */	bctrl 
/* 8014F700 0014C640  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014F704 0014C644  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F708 0014C648  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014F70C 0014C64C  7D 89 03 A6 */	mtctr r12
/* 8014F710 0014C650  4E 80 04 21 */	bctrl 
/* 8014F714 0014C654  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014F718 0014C658  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F71C 0014C65C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014F720 0014C660  7D 89 03 A6 */	mtctr r12
/* 8014F724 0014C664  4E 80 04 21 */	bctrl 
.L_8014F728:
/* 8014F728 0014C668  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F72C 0014C66C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014F730 0014C670  2C 00 00 04 */	cmpwi r0, 4
/* 8014F734 0014C674  41 82 00 0C */	beq .L_8014F740
/* 8014F738 0014C678  7F E3 FB 78 */	mr r3, r31
/* 8014F73C 0014C67C  48 00 04 D5 */	bl updateSplitter__Q24Game15BaseGameSectionFv
.L_8014F740:
/* 8014F740 0014C680  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014F744 0014C684  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014F748 0014C688  7C 08 03 A6 */	mtlr r0
/* 8014F74C 0014C68C  38 21 00 30 */	addi r1, r1, 0x30
/* 8014F750 0014C690  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game15BaseGameSectionFv

.fn "changeGeneratorCursor__Q24Game15BaseGameSectionFR10Vector3<f>", global
/* 8014F754 0014C694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F758 0014C698  7C 08 02 A6 */	mflr r0
/* 8014F75C 0014C69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F760 0014C6A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F764 0014C6A4  7C 9F 23 78 */	mr r31, r4
/* 8014F768 0014C6A8  38 80 00 00 */	li r4, 0
/* 8014F76C 0014C6AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014F770 0014C6B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F774 0014C6B4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8014F778 0014C6B8  7D 89 03 A6 */	mtctr r12
/* 8014F77C 0014C6BC  4E 80 04 21 */	bctrl 
/* 8014F780 0014C6C0  7F E4 FB 78 */	mr r4, r31
/* 8014F784 0014C6C4  38 A0 00 00 */	li r5, 0
/* 8014F788 0014C6C8  4B FE BA 21 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8014F78C 0014C6CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F790 0014C6D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F794 0014C6D4  7C 08 03 A6 */	mtlr r0
/* 8014F798 0014C6D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F79C 0014C6DC  4E 80 00 20 */	blr 
.endfn "changeGeneratorCursor__Q24Game15BaseGameSectionFR10Vector3<f>"

.fn doEntry__Q24Game15BaseGameSectionFv, global
/* 8014F7A0 0014C6E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F7A4 0014C6E4  7C 08 02 A6 */	mflr r0
/* 8014F7A8 0014C6E8  38 80 00 00 */	li r4, 0
/* 8014F7AC 0014C6EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F7B0 0014C6F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F7B4 0014C6F4  7C 7F 1B 78 */	mr r31, r3
/* 8014F7B8 0014C6F8  48 00 1C A5 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 8014F7BC 0014C6FC  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8014F7C0 0014C700  3C 60 80 48 */	lis r3, lbl_8047CC10@ha
/* 8014F7C4 0014C704  38 83 CC 10 */	addi r4, r3, lbl_8047CC10@l
/* 8014F7C8 0014C708  38 A0 00 01 */	li r5, 1
/* 8014F7CC 0014C70C  80 66 00 28 */	lwz r3, 0x28(r6)
/* 8014F7D0 0014C710  48 2D B3 29 */	bl _start__9SysTimersFPcb
/* 8014F7D4 0014C714  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F7D8 0014C718  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F7DC 0014C71C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8014F7E0 0014C720  7D 89 03 A6 */	mtctr r12
/* 8014F7E4 0014C724  4E 80 04 21 */	bctrl 
/* 8014F7E8 0014C728  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8014F7EC 0014C72C  3C 60 80 48 */	lis r3, lbl_8047CC10@ha
/* 8014F7F0 0014C730  38 83 CC 10 */	addi r4, r3, lbl_8047CC10@l
/* 8014F7F4 0014C734  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8014F7F8 0014C738  48 2D B3 05 */	bl _stop__9SysTimersFPc
/* 8014F7FC 0014C73C  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 8014F800 0014C740  3C 60 80 48 */	lis r3, lbl_8047CC1C@ha
/* 8014F804 0014C744  38 83 CC 1C */	addi r4, r3, lbl_8047CC1C@l
/* 8014F808 0014C748  38 A0 00 01 */	li r5, 1
/* 8014F80C 0014C74C  80 66 00 28 */	lwz r3, 0x28(r6)
/* 8014F810 0014C750  48 2D B2 E9 */	bl _start__9SysTimersFPcb
/* 8014F814 0014C754  80 0D 9A 18 */	lwz r0, particleMgr@sda21(r13)
/* 8014F818 0014C758  28 00 00 00 */	cmplwi r0, 0
/* 8014F81C 0014C75C  41 82 00 24 */	beq .L_8014F840
/* 8014F820 0014C760  7F E3 FB 78 */	mr r3, r31
/* 8014F824 0014C764  38 80 00 01 */	li r4, 1
/* 8014F828 0014C768  48 00 1C 35 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 8014F82C 0014C76C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F830 0014C770  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F834 0014C774  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F838 0014C778  7D 89 03 A6 */	mtctr r12
/* 8014F83C 0014C77C  4E 80 04 21 */	bctrl 
.L_8014F840:
/* 8014F840 0014C780  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8014F844 0014C784  3C 60 80 48 */	lis r3, lbl_8047CC1C@ha
/* 8014F848 0014C788  38 83 CC 1C */	addi r4, r3, lbl_8047CC1C@l
/* 8014F84C 0014C78C  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8014F850 0014C790  48 2D B2 AD */	bl _stop__9SysTimersFPc
/* 8014F854 0014C794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F858 0014C798  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F85C 0014C79C  7C 08 03 A6 */	mtlr r0
/* 8014F860 0014C7A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F864 0014C7A4  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game15BaseGameSectionFv

.if version == 0
.fn doSetView__Q24Game15BaseGameSectionFi, global
/* 8014F868 0014C7A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F86C 0014C7AC  7C 08 02 A6 */	mflr r0
/* 8014F870 0014C7B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F874 0014C7B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F878 0014C7B8  7C 9F 23 78 */	mr r31, r4
/* 8014F87C 0014C7BC  80 03 01 14 */	lwz r0, 0x134(r3)
/* 8014F880 0014C7C0  2C 00 00 01 */	cmpwi r0, 1
/* 8014F884 0014C7C4  40 82 00 08 */	bne .L_8014F88C
/* 8014F888 0014C7C8  3B E0 00 00 */	li r31, 0
.L_8014F88C:
/* 8014F88C 0014C7CC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F890 0014C7D0  7F E4 FB 78 */	mr r4, r31
/* 8014F894 0014C7D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F898 0014C7D8  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8014F89C 0014C7DC  7D 89 03 A6 */	mtctr r12
/* 8014F8A0 0014C7E0  4E 80 04 21 */	bctrl 
/* 8014F8A4 0014C7E4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F8A8 0014C7E8  28 03 00 00 */	cmplwi r3, 0
/* 8014F8AC 0014C7EC  41 82 00 18 */	beq .L_8014F8C4
/* 8014F8B0 0014C7F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F8B4 0014C7F4  7F E4 FB 78 */	mr r4, r31
/* 8014F8B8 0014C7F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014F8BC 0014C7FC  7D 89 03 A6 */	mtctr r12
/* 8014F8C0 0014C800  4E 80 04 21 */	bctrl 
.L_8014F8C4:
/* 8014F8C4 0014C804  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F8C8 0014C808  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014F8CC 0014C80C  2C 00 00 04 */	cmpwi r0, 4
/* 8014F8D0 0014C810  41 82 00 84 */	beq .L_8014F954
/* 8014F8D4 0014C814  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014F8D8 0014C818  28 03 00 00 */	cmplwi r3, 0
/* 8014F8DC 0014C81C  41 82 00 78 */	beq .L_8014F954
/* 8014F8E0 0014C820  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F8E4 0014C824  7F E4 FB 78 */	mr r4, r31
/* 8014F8E8 0014C828  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F8EC 0014C82C  7D 89 03 A6 */	mtctr r12
/* 8014F8F0 0014C830  4E 80 04 21 */	bctrl 
/* 8014F8F4 0014C834  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014F8F8 0014C838  7F E4 FB 78 */	mr r4, r31
/* 8014F8FC 0014C83C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F900 0014C840  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F904 0014C844  7D 89 03 A6 */	mtctr r12
/* 8014F908 0014C848  4E 80 04 21 */	bctrl 
/* 8014F90C 0014C84C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014F910 0014C850  7F E4 FB 78 */	mr r4, r31
/* 8014F914 0014C854  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F918 0014C858  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F91C 0014C85C  7D 89 03 A6 */	mtctr r12
/* 8014F920 0014C860  4E 80 04 21 */	bctrl 
/* 8014F924 0014C864  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014F928 0014C868  7F E4 FB 78 */	mr r4, r31
/* 8014F92C 0014C86C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F930 0014C870  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F934 0014C874  7D 89 03 A6 */	mtctr r12
/* 8014F938 0014C878  4E 80 04 21 */	bctrl 
/* 8014F93C 0014C87C  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014F940 0014C880  7F E4 FB 78 */	mr r4, r31
/* 8014F944 0014C884  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F948 0014C888  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F94C 0014C88C  7D 89 03 A6 */	mtctr r12
/* 8014F950 0014C890  4E 80 04 21 */	bctrl 
.L_8014F954:
/* 8014F954 0014C894  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F958 0014C898  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F95C 0014C89C  7C 08 03 A6 */	mtlr r0
/* 8014F960 0014C8A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F964 0014C8A4  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game15BaseGameSectionFi
.else
.fn doSetView__Q24Game15BaseGameSectionFi, global
/* 8014F868 0014C7A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F86C 0014C7AC  7C 08 02 A6 */	mflr r0
/* 8014F870 0014C7B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F874 0014C7B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014F878 0014C7B8  7C 9F 23 78 */	mr r31, r4
/* 8014F87C 0014C7BC  80 03 01 14 */	lwz r0, 0x114(r3)
/* 8014F880 0014C7C0  2C 00 00 01 */	cmpwi r0, 1
/* 8014F884 0014C7C4  40 82 00 08 */	bne .L_8014F88C
/* 8014F888 0014C7C8  3B E0 00 00 */	li r31, 0
.L_8014F88C:
/* 8014F88C 0014C7CC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F890 0014C7D0  7F E4 FB 78 */	mr r4, r31
/* 8014F894 0014C7D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F898 0014C7D8  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8014F89C 0014C7DC  7D 89 03 A6 */	mtctr r12
/* 8014F8A0 0014C7E0  4E 80 04 21 */	bctrl 
/* 8014F8A4 0014C7E4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F8A8 0014C7E8  28 03 00 00 */	cmplwi r3, 0
/* 8014F8AC 0014C7EC  41 82 00 18 */	beq .L_8014F8C4
/* 8014F8B0 0014C7F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F8B4 0014C7F4  7F E4 FB 78 */	mr r4, r31
/* 8014F8B8 0014C7F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014F8BC 0014C7FC  7D 89 03 A6 */	mtctr r12
/* 8014F8C0 0014C800  4E 80 04 21 */	bctrl 
.L_8014F8C4:
/* 8014F8C4 0014C804  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F8C8 0014C808  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014F8CC 0014C80C  2C 00 00 04 */	cmpwi r0, 4
/* 8014F8D0 0014C810  41 82 00 84 */	beq .L_8014F954
/* 8014F8D4 0014C814  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014F8D8 0014C818  28 03 00 00 */	cmplwi r3, 0
/* 8014F8DC 0014C81C  41 82 00 78 */	beq .L_8014F954
/* 8014F8E0 0014C820  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F8E4 0014C824  7F E4 FB 78 */	mr r4, r31
/* 8014F8E8 0014C828  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F8EC 0014C82C  7D 89 03 A6 */	mtctr r12
/* 8014F8F0 0014C830  4E 80 04 21 */	bctrl 
/* 8014F8F4 0014C834  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014F8F8 0014C838  7F E4 FB 78 */	mr r4, r31
/* 8014F8FC 0014C83C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F900 0014C840  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F904 0014C844  7D 89 03 A6 */	mtctr r12
/* 8014F908 0014C848  4E 80 04 21 */	bctrl 
/* 8014F90C 0014C84C  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014F910 0014C850  7F E4 FB 78 */	mr r4, r31
/* 8014F914 0014C854  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F918 0014C858  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F91C 0014C85C  7D 89 03 A6 */	mtctr r12
/* 8014F920 0014C860  4E 80 04 21 */	bctrl 
/* 8014F924 0014C864  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014F928 0014C868  7F E4 FB 78 */	mr r4, r31
/* 8014F92C 0014C86C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F930 0014C870  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F934 0014C874  7D 89 03 A6 */	mtctr r12
/* 8014F938 0014C878  4E 80 04 21 */	bctrl 
/* 8014F93C 0014C87C  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014F940 0014C880  7F E4 FB 78 */	mr r4, r31
/* 8014F944 0014C884  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F948 0014C888  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014F94C 0014C88C  7D 89 03 A6 */	mtctr r12
/* 8014F950 0014C890  4E 80 04 21 */	bctrl 
.L_8014F954:
/* 8014F954 0014C894  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014F958 0014C898  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014F95C 0014C89C  7C 08 03 A6 */	mtlr r0
/* 8014F960 0014C8A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014F964 0014C8A4  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game15BaseGameSectionFi
.endif

.fn doViewCalc__Q24Game15BaseGameSectionFv, global
/* 8014F968 0014C8A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014F96C 0014C8AC  7C 08 02 A6 */	mflr r0
/* 8014F970 0014C8B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014F974 0014C8B4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F978 0014C8B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F97C 0014C8BC  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8014F980 0014C8C0  7D 89 03 A6 */	mtctr r12
/* 8014F984 0014C8C4  4E 80 04 21 */	bctrl 
/* 8014F988 0014C8C8  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014F98C 0014C8CC  28 03 00 00 */	cmplwi r3, 0
/* 8014F990 0014C8D0  41 82 00 14 */	beq .L_8014F9A4
/* 8014F994 0014C8D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F998 0014C8D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8014F99C 0014C8DC  7D 89 03 A6 */	mtctr r12
/* 8014F9A0 0014C8E0  4E 80 04 21 */	bctrl 
.L_8014F9A4:
/* 8014F9A4 0014C8E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014F9A8 0014C8E8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014F9AC 0014C8EC  2C 00 00 04 */	cmpwi r0, 4
/* 8014F9B0 0014C8F0  41 82 00 70 */	beq .L_8014FA20
/* 8014F9B4 0014C8F4  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014F9B8 0014C8F8  28 03 00 00 */	cmplwi r3, 0
/* 8014F9BC 0014C8FC  41 82 00 64 */	beq .L_8014FA20
/* 8014F9C0 0014C900  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F9C4 0014C904  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014F9C8 0014C908  7D 89 03 A6 */	mtctr r12
/* 8014F9CC 0014C90C  4E 80 04 21 */	bctrl 
/* 8014F9D0 0014C910  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014F9D4 0014C914  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F9D8 0014C918  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014F9DC 0014C91C  7D 89 03 A6 */	mtctr r12
/* 8014F9E0 0014C920  4E 80 04 21 */	bctrl 
/* 8014F9E4 0014C924  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014F9E8 0014C928  81 83 00 00 */	lwz r12, 0(r3)
/* 8014F9EC 0014C92C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014F9F0 0014C930  7D 89 03 A6 */	mtctr r12
/* 8014F9F4 0014C934  4E 80 04 21 */	bctrl 
/* 8014F9F8 0014C938  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014F9FC 0014C93C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FA00 0014C940  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014FA04 0014C944  7D 89 03 A6 */	mtctr r12
/* 8014FA08 0014C948  4E 80 04 21 */	bctrl 
/* 8014FA0C 0014C94C  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014FA10 0014C950  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FA14 0014C954  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8014FA18 0014C958  7D 89 03 A6 */	mtctr r12
/* 8014FA1C 0014C95C  4E 80 04 21 */	bctrl 
.L_8014FA20:
/* 8014FA20 0014C960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FA24 0014C964  7C 08 03 A6 */	mtlr r0
/* 8014FA28 0014C968  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FA2C 0014C96C  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game15BaseGameSectionFv

.if version == 0
.fn updateBlendCamera__Q24Game15BaseGameSectionFv, global
/* 8014FA30 0014C970  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014FA34 0014C974  7C 08 02 A6 */	mflr r0
/* 8014FA38 0014C978  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014FA3C 0014C97C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014FA40 0014C980  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014FA44 0014C984  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014FA48 0014C988  7C 7D 1B 78 */	mr r29, r3
/* 8014FA4C 0014C98C  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 8014FA50 0014C990  2C 00 00 00 */	cmpwi r0, 0
/* 8014FA54 0014C994  40 82 00 58 */	bne .L_8014FAAC
/* 8014FA58 0014C998  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FA5C 0014C99C  C0 02 A2 18 */	lfs f0, lbl_80518578@sda21(r2)
/* 8014FA60 0014C9A0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014FA64 0014C9A4  C0 5D 00 54 */	lfs f2, 0x74(r29)
/* 8014FA68 0014C9A8  EC 21 00 24 */	fdivs f1, f1, f0
/* 8014FA6C 0014C9AC  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FA70 0014C9B0  EC 22 08 28 */	fsubs f1, f2, f1
/* 8014FA74 0014C9B4  D0 3D 00 54 */	stfs f1, 0x74(r29)
/* 8014FA78 0014C9B8  C0 3D 00 54 */	lfs f1, 0x74(r29)
/* 8014FA7C 0014C9BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FA80 0014C9C0  40 80 00 A0 */	bge .L_8014FB20
/* 8014FA84 0014C9C4  D0 1D 00 54 */	stfs f0, 0x74(r29)
/* 8014FA88 0014C9C8  38 00 00 00 */	li r0, 0
/* 8014FA8C 0014C9CC  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014FA90 0014C9D0  98 1D 00 58 */	stb r0, 0x78(r29)
/* 8014FA94 0014C9D4  80 7D 01 18 */	lwz r3, 0x138(r29)
/* 8014FA98 0014C9D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FA9C 0014C9DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FAA0 0014C9E0  7D 89 03 A6 */	mtctr r12
/* 8014FAA4 0014C9E4  4E 80 04 21 */	bctrl 
/* 8014FAA8 0014C9E8  48 00 00 78 */	b .L_8014FB20
.L_8014FAAC:
/* 8014FAAC 0014C9EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FAB0 0014C9F0  C0 02 A2 18 */	lfs f0, lbl_80518578@sda21(r2)
/* 8014FAB4 0014C9F4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014FAB8 0014C9F8  C0 5D 00 54 */	lfs f2, 0x74(r29)
/* 8014FABC 0014C9FC  EC 01 00 24 */	fdivs f0, f1, f0
/* 8014FAC0 0014CA00  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014FAC4 0014CA04  EC 02 00 2A */	fadds f0, f2, f0
/* 8014FAC8 0014CA08  D0 1D 00 54 */	stfs f0, 0x74(r29)
/* 8014FACC 0014CA0C  C0 1D 00 54 */	lfs f0, 0x74(r29)
/* 8014FAD0 0014CA10  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8014FAD4 0014CA14  40 81 00 4C */	ble .L_8014FB20
/* 8014FAD8 0014CA18  D0 3D 00 54 */	stfs f1, 0x74(r29)
/* 8014FADC 0014CA1C  38 00 00 00 */	li r0, 0
/* 8014FAE0 0014CA20  98 1D 00 58 */	stb r0, 0x78(r29)
/* 8014FAE4 0014CA24  80 1D 01 14 */	lwz r0, 0x134(r29)
/* 8014FAE8 0014CA28  2C 00 00 01 */	cmpwi r0, 1
/* 8014FAEC 0014CA2C  40 82 00 1C */	bne .L_8014FB08
/* 8014FAF0 0014CA30  80 7D 01 18 */	lwz r3, 0x138(r29)
/* 8014FAF4 0014CA34  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FAF8 0014CA38  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FAFC 0014CA3C  7D 89 03 A6 */	mtctr r12
/* 8014FB00 0014CA40  4E 80 04 21 */	bctrl 
/* 8014FB04 0014CA44  48 00 00 1C */	b .L_8014FB20
.L_8014FB08:
/* 8014FB08 0014CA48  80 7D 01 18 */	lwz r3, 0x138(r29)
/* 8014FB0C 0014CA4C  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014FB10 0014CA50  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FB14 0014CA54  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FB18 0014CA58  7D 89 03 A6 */	mtctr r12
/* 8014FB1C 0014CA5C  4E 80 04 21 */	bctrl 
.L_8014FB20:
/* 8014FB20 0014CA60  80 7D 00 50 */	lwz r3, 0x70(r29)
/* 8014FB24 0014CA64  28 03 00 00 */	cmplwi r3, 0
/* 8014FB28 0014CA68  41 82 00 14 */	beq .L_8014FB3C
/* 8014FB2C 0014CA6C  C0 3D 00 54 */	lfs f1, 0x74(r29)
/* 8014FB30 0014CA70  48 2C BE 05 */	bl setBlendFactor__11BlendCameraFf
/* 8014FB34 0014CA74  80 7D 00 50 */	lwz r3, 0x70(r29)
/* 8014FB38 0014CA78  48 2C B2 7D */	bl update__6CameraFv
.L_8014FB3C:
/* 8014FB3C 0014CA7C  88 1D 00 58 */	lbz r0, 0x78(r29)
/* 8014FB40 0014CA80  28 00 00 00 */	cmplwi r0, 0
/* 8014FB44 0014CA84  40 82 00 44 */	bne .L_8014FB88
/* 8014FB48 0014CA88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FB4C 0014CA8C  38 80 00 00 */	li r4, 0
/* 8014FB50 0014CA90  83 FD 01 04 */	lwz r31, 0x124(r29)
/* 8014FB54 0014CA94  83 C3 00 24 */	lwz r30, 0x24(r3)
/* 8014FB58 0014CA98  7F C3 F3 78 */	mr r3, r30
/* 8014FB5C 0014CA9C  48 2D 5A 95 */	bl getViewport__8GraphicsFi
/* 8014FB60 0014CAA0  93 E3 00 44 */	stw r31, 0x44(r3)
/* 8014FB64 0014CAA4  48 2D 57 2D */	bl updateCameraAspect__8ViewportFv
/* 8014FB68 0014CAA8  83 FD 01 08 */	lwz r31, 0x128(r29)
/* 8014FB6C 0014CAAC  7F C3 F3 78 */	mr r3, r30
/* 8014FB70 0014CAB0  38 80 00 01 */	li r4, 1
/* 8014FB74 0014CAB4  48 2D 5A 7D */	bl getViewport__8GraphicsFi
/* 8014FB78 0014CAB8  93 E3 00 44 */	stw r31, 0x44(r3)
/* 8014FB7C 0014CABC  48 2D 57 15 */	bl updateCameraAspect__8ViewportFv
/* 8014FB80 0014CAC0  7F A3 EB 78 */	mr r3, r29
/* 8014FB84 0014CAC4  4B FF E2 05 */	bl setCamController__Q24Game15BaseGameSectionFv
.L_8014FB88:
/* 8014FB88 0014CAC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014FB8C 0014CACC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014FB90 0014CAD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014FB94 0014CAD4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014FB98 0014CAD8  7C 08 03 A6 */	mtlr r0
/* 8014FB9C 0014CADC  38 21 00 20 */	addi r1, r1, 0x20
/* 8014FBA0 0014CAE0  4E 80 00 20 */	blr 
.endfn updateBlendCamera__Q24Game15BaseGameSectionFv
.else
.fn updateBlendCamera__Q24Game15BaseGameSectionFv, global
/* 8014FA30 0014C970  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014FA34 0014C974  7C 08 02 A6 */	mflr r0
/* 8014FA38 0014C978  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014FA3C 0014C97C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014FA40 0014C980  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014FA44 0014C984  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014FA48 0014C988  7C 7D 1B 78 */	mr r29, r3
/* 8014FA4C 0014C98C  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 8014FA50 0014C990  2C 00 00 00 */	cmpwi r0, 0
/* 8014FA54 0014C994  40 82 00 58 */	bne .L_8014FAAC
/* 8014FA58 0014C998  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FA5C 0014C99C  C0 02 A2 18 */	lfs f0, lbl_80518578@sda21(r2)
/* 8014FA60 0014C9A0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014FA64 0014C9A4  C0 5D 00 54 */	lfs f2, 0x54(r29)
/* 8014FA68 0014C9A8  EC 21 00 24 */	fdivs f1, f1, f0
/* 8014FA6C 0014C9AC  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FA70 0014C9B0  EC 22 08 28 */	fsubs f1, f2, f1
/* 8014FA74 0014C9B4  D0 3D 00 54 */	stfs f1, 0x54(r29)
/* 8014FA78 0014C9B8  C0 3D 00 54 */	lfs f1, 0x54(r29)
/* 8014FA7C 0014C9BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FA80 0014C9C0  40 80 00 A0 */	bge .L_8014FB20
/* 8014FA84 0014C9C4  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 8014FA88 0014C9C8  38 00 00 00 */	li r0, 0
/* 8014FA8C 0014C9CC  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014FA90 0014C9D0  98 1D 00 58 */	stb r0, 0x58(r29)
/* 8014FA94 0014C9D4  80 7D 01 18 */	lwz r3, 0x118(r29)
/* 8014FA98 0014C9D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FA9C 0014C9DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FAA0 0014C9E0  7D 89 03 A6 */	mtctr r12
/* 8014FAA4 0014C9E4  4E 80 04 21 */	bctrl 
/* 8014FAA8 0014C9E8  48 00 00 78 */	b .L_8014FB20
.L_8014FAAC:
/* 8014FAAC 0014C9EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FAB0 0014C9F0  C0 02 A2 18 */	lfs f0, lbl_80518578@sda21(r2)
/* 8014FAB4 0014C9F4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014FAB8 0014C9F8  C0 5D 00 54 */	lfs f2, 0x54(r29)
/* 8014FABC 0014C9FC  EC 01 00 24 */	fdivs f0, f1, f0
/* 8014FAC0 0014CA00  C0 22 A1 44 */	lfs f1, lbl_805184A4@sda21(r2)
/* 8014FAC4 0014CA04  EC 02 00 2A */	fadds f0, f2, f0
/* 8014FAC8 0014CA08  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 8014FACC 0014CA0C  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 8014FAD0 0014CA10  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8014FAD4 0014CA14  40 81 00 4C */	ble .L_8014FB20
/* 8014FAD8 0014CA18  D0 3D 00 54 */	stfs f1, 0x54(r29)
/* 8014FADC 0014CA1C  38 00 00 00 */	li r0, 0
/* 8014FAE0 0014CA20  98 1D 00 58 */	stb r0, 0x58(r29)
/* 8014FAE4 0014CA24  80 1D 01 14 */	lwz r0, 0x114(r29)
/* 8014FAE8 0014CA28  2C 00 00 01 */	cmpwi r0, 1
/* 8014FAEC 0014CA2C  40 82 00 1C */	bne .L_8014FB08
/* 8014FAF0 0014CA30  80 7D 01 18 */	lwz r3, 0x118(r29)
/* 8014FAF4 0014CA34  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FAF8 0014CA38  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FAFC 0014CA3C  7D 89 03 A6 */	mtctr r12
/* 8014FB00 0014CA40  4E 80 04 21 */	bctrl 
/* 8014FB04 0014CA44  48 00 00 1C */	b .L_8014FB20
.L_8014FB08:
/* 8014FB08 0014CA48  80 7D 01 18 */	lwz r3, 0x118(r29)
/* 8014FB0C 0014CA4C  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8014FB10 0014CA50  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FB14 0014CA54  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FB18 0014CA58  7D 89 03 A6 */	mtctr r12
/* 8014FB1C 0014CA5C  4E 80 04 21 */	bctrl 
.L_8014FB20:
/* 8014FB20 0014CA60  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8014FB24 0014CA64  28 03 00 00 */	cmplwi r3, 0
/* 8014FB28 0014CA68  41 82 00 14 */	beq .L_8014FB3C
/* 8014FB2C 0014CA6C  C0 3D 00 54 */	lfs f1, 0x54(r29)
/* 8014FB30 0014CA70  48 2C BE 05 */	bl setBlendFactor__11BlendCameraFf
/* 8014FB34 0014CA74  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8014FB38 0014CA78  48 2C B2 7D */	bl update__6CameraFv
.L_8014FB3C:
/* 8014FB3C 0014CA7C  88 1D 00 58 */	lbz r0, 0x58(r29)
/* 8014FB40 0014CA80  28 00 00 00 */	cmplwi r0, 0
/* 8014FB44 0014CA84  40 82 00 44 */	bne .L_8014FB88
/* 8014FB48 0014CA88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FB4C 0014CA8C  38 80 00 00 */	li r4, 0
/* 8014FB50 0014CA90  83 FD 01 04 */	lwz r31, 0x104(r29)
/* 8014FB54 0014CA94  83 C3 00 24 */	lwz r30, 0x24(r3)
/* 8014FB58 0014CA98  7F C3 F3 78 */	mr r3, r30
/* 8014FB5C 0014CA9C  48 2D 5A 95 */	bl getViewport__8GraphicsFi
/* 8014FB60 0014CAA0  93 E3 00 44 */	stw r31, 0x44(r3)
/* 8014FB64 0014CAA4  48 2D 57 2D */	bl updateCameraAspect__8ViewportFv
/* 8014FB68 0014CAA8  83 FD 01 08 */	lwz r31, 0x108(r29)
/* 8014FB6C 0014CAAC  7F C3 F3 78 */	mr r3, r30
/* 8014FB70 0014CAB0  38 80 00 01 */	li r4, 1
/* 8014FB74 0014CAB4  48 2D 5A 7D */	bl getViewport__8GraphicsFi
/* 8014FB78 0014CAB8  93 E3 00 44 */	stw r31, 0x44(r3)
/* 8014FB7C 0014CABC  48 2D 57 15 */	bl updateCameraAspect__8ViewportFv
/* 8014FB80 0014CAC0  7F A3 EB 78 */	mr r3, r29
/* 8014FB84 0014CAC4  4B FF E2 05 */	bl setCamController__Q24Game15BaseGameSectionFv
.L_8014FB88:
/* 8014FB88 0014CAC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014FB8C 0014CACC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014FB90 0014CAD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014FB94 0014CAD4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014FB98 0014CAD8  7C 08 03 A6 */	mtlr r0
/* 8014FB9C 0014CADC  38 21 00 20 */	addi r1, r1, 0x20
/* 8014FBA0 0014CAE0  4E 80 00 20 */	blr 
.endfn updateBlendCamera__Q24Game15BaseGameSectionFv
.endif

.if version == 0
.fn setSplitter__Q24Game15BaseGameSectionFb, global
/* 8014FBA4 0014CAE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FBA8 0014CAE8  7C 08 02 A6 */	mflr r0
/* 8014FBAC 0014CAEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FBB0 0014CAF0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014FBB4 0014CAF4  7C 64 1B 78 */	mr r4, r3
/* 8014FBB8 0014CAF8  41 82 00 18 */	beq .L_8014FBD0
/* 8014FBBC 0014CAFC  C0 02 A1 EC */	lfs f0, lbl_8051854C@sda21(r2)
/* 8014FBC0 0014CB00  38 00 00 01 */	li r0, 1
/* 8014FBC4 0014CB04  D0 04 00 E8 */	stfs f0, 0x108(r4)
/* 8014FBC8 0014CB08  98 04 00 F0 */	stb r0, 0x110(r4)
/* 8014FBCC 0014CB0C  48 00 00 14 */	b .L_8014FBE0
.L_8014FBD0:
/* 8014FBD0 0014CB10  C0 02 A1 44 */	lfs f0, lbl_805184A4@sda21(r2)
/* 8014FBD4 0014CB14  38 00 00 00 */	li r0, 0
/* 8014FBD8 0014CB18  D0 04 00 E8 */	stfs f0, 0x108(r4)
/* 8014FBDC 0014CB1C  98 04 00 F0 */	stb r0, 0x110(r4)
.L_8014FBE0:
/* 8014FBE0 0014CB20  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FBE4 0014CB24  D0 04 00 EC */	stfs f0, 0x10c(r4)
/* 8014FBE8 0014CB28  80 64 01 18 */	lwz r3, 0x138(r4)
/* 8014FBEC 0014CB2C  C0 24 00 E8 */	lfs f1, 0x108(r4)
/* 8014FBF0 0014CB30  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FBF4 0014CB34  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FBF8 0014CB38  7D 89 03 A6 */	mtctr r12
/* 8014FBFC 0014CB3C  4E 80 04 21 */	bctrl 
/* 8014FC00 0014CB40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FC04 0014CB44  7C 08 03 A6 */	mtlr r0
/* 8014FC08 0014CB48  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FC0C 0014CB4C  4E 80 00 20 */	blr 
.endfn setSplitter__Q24Game15BaseGameSectionFb
.else
.fn setSplitter__Q24Game15BaseGameSectionFb, global
/* 8014FBA4 0014CAE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FBA8 0014CAE8  7C 08 02 A6 */	mflr r0
/* 8014FBAC 0014CAEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FBB0 0014CAF0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014FBB4 0014CAF4  7C 64 1B 78 */	mr r4, r3
/* 8014FBB8 0014CAF8  41 82 00 18 */	beq .L_8014FBD0
/* 8014FBBC 0014CAFC  C0 02 A1 EC */	lfs f0, lbl_8051854C@sda21(r2)
/* 8014FBC0 0014CB00  38 00 00 01 */	li r0, 1
/* 8014FBC4 0014CB04  D0 04 00 E8 */	stfs f0, 0xe8(r4)
/* 8014FBC8 0014CB08  98 04 00 F0 */	stb r0, 0xf0(r4)
/* 8014FBCC 0014CB0C  48 00 00 14 */	b .L_8014FBE0
.L_8014FBD0:
/* 8014FBD0 0014CB10  C0 02 A1 44 */	lfs f0, lbl_805184A4@sda21(r2)
/* 8014FBD4 0014CB14  38 00 00 00 */	li r0, 0
/* 8014FBD8 0014CB18  D0 04 00 E8 */	stfs f0, 0xe8(r4)
/* 8014FBDC 0014CB1C  98 04 00 F0 */	stb r0, 0xf0(r4)
.L_8014FBE0:
/* 8014FBE0 0014CB20  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FBE4 0014CB24  D0 04 00 EC */	stfs f0, 0xec(r4)
/* 8014FBE8 0014CB28  80 64 01 18 */	lwz r3, 0x118(r4)
/* 8014FBEC 0014CB2C  C0 24 00 E8 */	lfs f1, 0xe8(r4)
/* 8014FBF0 0014CB30  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FBF4 0014CB34  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FBF8 0014CB38  7D 89 03 A6 */	mtctr r12
/* 8014FBFC 0014CB3C  4E 80 04 21 */	bctrl 
/* 8014FC00 0014CB40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FC04 0014CB44  7C 08 03 A6 */	mtlr r0
/* 8014FC08 0014CB48  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FC0C 0014CB4C  4E 80 00 20 */	blr 
.endfn setSplitter__Q24Game15BaseGameSectionFb
.endif

.if version == 0
.fn updateSplitter__Q24Game15BaseGameSectionFv, global
/* 8014FC10 0014CB50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FC14 0014CB54  7C 08 02 A6 */	mflr r0
/* 8014FC18 0014CB58  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FC1C 0014CB5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FC20 0014CB60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FC24 0014CB64  7C 7F 1B 78 */	mr r31, r3
/* 8014FC28 0014CB68  C0 43 00 EC */	lfs f2, 0x10c(r3)
/* 8014FC2C 0014CB6C  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 8014FC30 0014CB70  40 82 00 24 */	bne .L_8014FC54
/* 8014FC34 0014CB74  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014FC38 0014CB78  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8014FC3C 0014CB7C  2C 00 00 00 */	cmpwi r0, 0
/* 8014FC40 0014CB80  40 82 00 14 */	bne .L_8014FC54
/* 8014FC44 0014CB84  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FC48 0014CB88  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8014FC4C 0014CB8C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8014FC50 0014CB90  40 82 00 E0 */	bne .L_8014FD30
.L_8014FC54:
/* 8014FC54 0014CB94  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FC58 0014CB98  C0 1F 00 E8 */	lfs f0, 0x108(r31)
/* 8014FC5C 0014CB9C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014FC60 0014CBA0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8014FC64 0014CBA4  D0 1F 00 E8 */	stfs f0, 0x108(r31)
/* 8014FC68 0014CBA8  80 1F 00 E4 */	lwz r0, 0x104(r31)
/* 8014FC6C 0014CBAC  2C 00 00 02 */	cmpwi r0, 2
/* 8014FC70 0014CBB0  40 82 00 38 */	bne .L_8014FCA8
/* 8014FC74 0014CBB4  C0 3F 00 E8 */	lfs f1, 0x108(r31)
/* 8014FC78 0014CBB8  C0 02 A1 EC */	lfs f0, lbl_8051854C@sda21(r2)
/* 8014FC7C 0014CBBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FC80 0014CBC0  4C 40 13 82 */	cror 2, 0, 2
/* 8014FC84 0014CBC4  40 82 00 24 */	bne .L_8014FCA8
/* 8014FC88 0014CBC8  D0 1F 00 E8 */	stfs f0, 0x108(r31)
/* 8014FC8C 0014CBCC  38 00 00 01 */	li r0, 1
/* 8014FC90 0014CBD0  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FC94 0014CBD4  7F E3 FB 78 */	mr r3, r31
/* 8014FC98 0014CBD8  D0 1F 00 EC */	stfs f0, 0x10c(r31)
/* 8014FC9C 0014CBDC  98 1F 00 F0 */	stb r0, 0x110(r31)
/* 8014FCA0 0014CBE0  4B FF E0 E9 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8014FCA4 0014CBE4  48 00 00 6C */	b .L_8014FD10
.L_8014FCA8:
/* 8014FCA8 0014CBE8  2C 00 00 00 */	cmpwi r0, 0
/* 8014FCAC 0014CBEC  40 82 00 38 */	bne .L_8014FCE4
/* 8014FCB0 0014CBF0  C0 3F 00 E8 */	lfs f1, 0x108(r31)
/* 8014FCB4 0014CBF4  C0 02 A1 44 */	lfs f0, lbl_805184A4@sda21(r2)
/* 8014FCB8 0014CBF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FCBC 0014CBFC  4C 41 13 82 */	cror 2, 1, 2
/* 8014FCC0 0014CC00  40 82 00 24 */	bne .L_8014FCE4
/* 8014FCC4 0014CC04  D0 1F 00 E8 */	stfs f0, 0x108(r31)
/* 8014FCC8 0014CC08  38 00 00 00 */	li r0, 0
/* 8014FCCC 0014CC0C  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FCD0 0014CC10  7F E3 FB 78 */	mr r3, r31
/* 8014FCD4 0014CC14  D0 1F 00 EC */	stfs f0, 0x10c(r31)
/* 8014FCD8 0014CC18  98 1F 00 F0 */	stb r0, 0x110(r31)
/* 8014FCDC 0014CC1C  4B FF E0 AD */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8014FCE0 0014CC20  48 00 00 30 */	b .L_8014FD10
.L_8014FCE4:
/* 8014FCE4 0014CC24  2C 00 00 01 */	cmpwi r0, 1
/* 8014FCE8 0014CC28  40 82 00 28 */	bne .L_8014FD10
/* 8014FCEC 0014CC2C  C0 3F 00 E8 */	lfs f1, 0x108(r31)
/* 8014FCF0 0014CC30  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FCF4 0014CC34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FCF8 0014CC38  4C 40 13 82 */	cror 2, 0, 2
/* 8014FCFC 0014CC3C  40 82 00 14 */	bne .L_8014FD10
/* 8014FD00 0014CC40  D0 1F 00 E8 */	stfs f0, 0x108(r31)
/* 8014FD04 0014CC44  7F E3 FB 78 */	mr r3, r31
/* 8014FD08 0014CC48  D0 1F 00 EC */	stfs f0, 0x10c(r31)
/* 8014FD0C 0014CC4C  4B FF E0 7D */	bl setCamController__Q24Game15BaseGameSectionFv
.L_8014FD10:
/* 8014FD10 0014CC50  80 7F 01 18 */	lwz r3, 0x138(r31)
/* 8014FD14 0014CC54  28 03 00 00 */	cmplwi r3, 0
/* 8014FD18 0014CC58  41 82 00 18 */	beq .L_8014FD30
/* 8014FD1C 0014CC5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FD20 0014CC60  C0 3F 00 E8 */	lfs f1, 0x108(r31)
/* 8014FD24 0014CC64  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FD28 0014CC68  7D 89 03 A6 */	mtctr r12
/* 8014FD2C 0014CC6C  4E 80 04 21 */	bctrl 
.L_8014FD30:
/* 8014FD30 0014CC70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FD34 0014CC74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FD38 0014CC78  7C 08 03 A6 */	mtlr r0
/* 8014FD3C 0014CC7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FD40 0014CC80  4E 80 00 20 */	blr 
.endfn updateSplitter__Q24Game15BaseGameSectionFv
.else
.fn updateSplitter__Q24Game15BaseGameSectionFv, global
/* 8014FC10 0014CB50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FC14 0014CB54  7C 08 02 A6 */	mflr r0
/* 8014FC18 0014CB58  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FC1C 0014CB5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FC20 0014CB60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FC24 0014CB64  7C 7F 1B 78 */	mr r31, r3
/* 8014FC28 0014CB68  C0 43 00 EC */	lfs f2, 0xec(r3)
/* 8014FC2C 0014CB6C  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 8014FC30 0014CB70  40 82 00 24 */	bne .L_8014FC54
/* 8014FC34 0014CB74  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8014FC38 0014CB78  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8014FC3C 0014CB7C  2C 00 00 00 */	cmpwi r0, 0
/* 8014FC40 0014CB80  40 82 00 14 */	bne .L_8014FC54
/* 8014FC44 0014CB84  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FC48 0014CB88  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8014FC4C 0014CB8C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8014FC50 0014CB90  40 82 00 E0 */	bne .L_8014FD30
.L_8014FC54:
/* 8014FC54 0014CB94  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014FC58 0014CB98  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 8014FC5C 0014CB9C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014FC60 0014CBA0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8014FC64 0014CBA4  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 8014FC68 0014CBA8  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 8014FC6C 0014CBAC  2C 00 00 02 */	cmpwi r0, 2
/* 8014FC70 0014CBB0  40 82 00 38 */	bne .L_8014FCA8
/* 8014FC74 0014CBB4  C0 3F 00 E8 */	lfs f1, 0xe8(r31)
/* 8014FC78 0014CBB8  C0 02 A1 EC */	lfs f0, lbl_8051854C@sda21(r2)
/* 8014FC7C 0014CBBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FC80 0014CBC0  4C 40 13 82 */	cror 2, 0, 2
/* 8014FC84 0014CBC4  40 82 00 24 */	bne .L_8014FCA8
/* 8014FC88 0014CBC8  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 8014FC8C 0014CBCC  38 00 00 01 */	li r0, 1
/* 8014FC90 0014CBD0  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FC94 0014CBD4  7F E3 FB 78 */	mr r3, r31
/* 8014FC98 0014CBD8  D0 1F 00 EC */	stfs f0, 0xec(r31)
/* 8014FC9C 0014CBDC  98 1F 00 F0 */	stb r0, 0xf0(r31)
/* 8014FCA0 0014CBE0  4B FF E0 E9 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8014FCA4 0014CBE4  48 00 00 6C */	b .L_8014FD10
.L_8014FCA8:
/* 8014FCA8 0014CBE8  2C 00 00 00 */	cmpwi r0, 0
/* 8014FCAC 0014CBEC  40 82 00 38 */	bne .L_8014FCE4
/* 8014FCB0 0014CBF0  C0 3F 00 E8 */	lfs f1, 0xe8(r31)
/* 8014FCB4 0014CBF4  C0 02 A1 44 */	lfs f0, lbl_805184A4@sda21(r2)
/* 8014FCB8 0014CBF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FCBC 0014CBFC  4C 41 13 82 */	cror 2, 1, 2
/* 8014FCC0 0014CC00  40 82 00 24 */	bne .L_8014FCE4
/* 8014FCC4 0014CC04  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 8014FCC8 0014CC08  38 00 00 00 */	li r0, 0
/* 8014FCCC 0014CC0C  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FCD0 0014CC10  7F E3 FB 78 */	mr r3, r31
/* 8014FCD4 0014CC14  D0 1F 00 EC */	stfs f0, 0xec(r31)
/* 8014FCD8 0014CC18  98 1F 00 F0 */	stb r0, 0xf0(r31)
/* 8014FCDC 0014CC1C  4B FF E0 AD */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8014FCE0 0014CC20  48 00 00 30 */	b .L_8014FD10
.L_8014FCE4:
/* 8014FCE4 0014CC24  2C 00 00 01 */	cmpwi r0, 1
/* 8014FCE8 0014CC28  40 82 00 28 */	bne .L_8014FD10
/* 8014FCEC 0014CC2C  C0 3F 00 E8 */	lfs f1, 0xe8(r31)
/* 8014FCF0 0014CC30  C0 02 A1 38 */	lfs f0, lbl_80518498@sda21(r2)
/* 8014FCF4 0014CC34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014FCF8 0014CC38  4C 40 13 82 */	cror 2, 0, 2
/* 8014FCFC 0014CC3C  40 82 00 14 */	bne .L_8014FD10
/* 8014FD00 0014CC40  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 8014FD04 0014CC44  7F E3 FB 78 */	mr r3, r31
/* 8014FD08 0014CC48  D0 1F 00 EC */	stfs f0, 0xec(r31)
/* 8014FD0C 0014CC4C  4B FF E0 7D */	bl setCamController__Q24Game15BaseGameSectionFv
.L_8014FD10:
/* 8014FD10 0014CC50  80 7F 01 18 */	lwz r3, 0x118(r31)
/* 8014FD14 0014CC54  28 03 00 00 */	cmplwi r3, 0
/* 8014FD18 0014CC58  41 82 00 18 */	beq .L_8014FD30
/* 8014FD1C 0014CC5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FD20 0014CC60  C0 3F 00 E8 */	lfs f1, 0xe8(r31)
/* 8014FD24 0014CC64  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FD28 0014CC68  7D 89 03 A6 */	mtctr r12
/* 8014FD2C 0014CC6C  4E 80 04 21 */	bctrl 
.L_8014FD30:
/* 8014FD30 0014CC70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FD34 0014CC74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FD38 0014CC78  7C 08 03 A6 */	mtlr r0
/* 8014FD3C 0014CC7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FD40 0014CC80  4E 80 00 20 */	blr 
.endfn updateSplitter__Q24Game15BaseGameSectionFv
.endif

.fn doDirectDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport, global
/* 8014FD44 0014CC84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FD48 0014CC88  7C 08 02 A6 */	mflr r0
/* 8014FD4C 0014CC8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FD50 0014CC90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FD54 0014CC94  7C 9F 23 78 */	mr r31, r4
/* 8014FD58 0014CC98  80 6D 92 08 */	lwz r3, lifeGaugeMgr@sda21(r13)
/* 8014FD5C 0014CC9C  28 03 00 00 */	cmplwi r3, 0
/* 8014FD60 0014CCA0  41 82 00 08 */	beq .L_8014FD68
/* 8014FD64 0014CCA4  4B FC B1 2D */	bl draw__12LifeGaugeMgrFR8Graphics
.L_8014FD68:
/* 8014FD68 0014CCA8  80 6D 92 18 */	lwz r3, carryInfoMgr@sda21(r13)
/* 8014FD6C 0014CCAC  28 03 00 00 */	cmplwi r3, 0
/* 8014FD70 0014CCB0  41 82 00 18 */	beq .L_8014FD88
/* 8014FD74 0014CCB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FD78 0014CCB8  7F E4 FB 78 */	mr r4, r31
/* 8014FD7C 0014CCBC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8014FD80 0014CCC0  7D 89 03 A6 */	mtctr r12
/* 8014FD84 0014CCC4  4E 80 04 21 */	bctrl 
.L_8014FD88:
/* 8014FD88 0014CCC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014FD8C 0014CCCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014FD90 0014CCD0  7C 08 03 A6 */	mtlr r0
/* 8014FD94 0014CCD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8014FD98 0014CCD8  4E 80 00 20 */	blr 
.endfn doDirectDrawPost__Q24Game15BaseGameSectionFR8GraphicsP8Viewport

.fn doDirectDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport, global
/* 8014FD9C 0014CCDC  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game15BaseGameSectionFR8GraphicsP8Viewport

.fn onStartHeap__Q24Game15BaseGameSectionFv, weak
/* 8014FDA0 0014CCE0  4E 80 00 20 */	blr 
.endfn onStartHeap__Q24Game15BaseGameSectionFv

.if version == 0
.fn clearHeap__Q24Game15BaseGameSectionFv, global
/* 8014FDA4 0014CCE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FDA8 0014CCE8  7C 08 02 A6 */	mflr r0
/* 8014FDAC 0014CCEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FDB0 0014CCF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FDB4 0014CCF4  7C 7F 1B 78 */	mr r31, r3
/* 8014FDB8 0014CCF8  93 C1 00 08 */	stw r30, 8(r1)
/* 8014FDBC 0014CCFC  48 0E CD 35 */	bl deleteInstance__Q29TexCaster3MgrFv
/* 8014FDC0 0014CD00  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8014FDC4 0014CD04  28 00 00 00 */	cmplwi r0, 0
/* 8014FDC8 0014CD08  40 82 00 20 */	bne .L_8014FDE8
/* 8014FDCC 0014CD0C  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014FDD0 0014CD10  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014FDD4 0014CD14  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014FDD8 0014CD18  38 80 01 D3 */	li r4, 0x1d3
/* 8014FDDC 0014CD1C  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014FDE0 0014CD20  4C C6 31 82 */	crclr 6
/* 8014FDE4 0014CD24  4B ED A8 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014FDE8:
/* 8014FDE8 0014CD28  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8014FDEC 0014CD2C  28 1E 00 00 */	cmplwi r30, 0
/* 8014FDF0 0014CD30  40 82 00 20 */	bne .L_8014FE10
/* 8014FDF4 0014CD34  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014FDF8 0014CD38  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014FDFC 0014CD3C  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014FE00 0014CD40  38 80 01 DC */	li r4, 0x1dc
/* 8014FE04 0014CD44  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014FE08 0014CD48  4C C6 31 82 */	crclr 6
/* 8014FE0C 0014CD4C  4B ED A8 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014FE10:
/* 8014FE10 0014CD50  7F C3 F3 78 */	mr r3, r30
/* 8014FE14 0014CD54  48 1F 23 CD */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8014FE18 0014CD58  4B F9 56 D9 */	bl GXWaitDrawDone
/* 8014FE1C 0014CD5C  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 8014FE20 0014CD60  48 09 53 DD */	bl clearGlobalPointers__Q24Game7ItemMgrFv
/* 8014FE24 0014CD64  38 00 00 00 */	li r0, 0
/* 8014FE28 0014CD68  90 0D 92 CC */	stw r0, platCellMgr__4Game@sda21(r13)
/* 8014FE2C 0014CD6C  90 0D 92 C8 */	stw r0, cellMgr__4Game@sda21(r13)
/* 8014FE30 0014CD70  80 7F 01 2C */	lwz r3, 0x14c(r31)
/* 8014FE34 0014CD74  48 30 5D 1D */	bl frameInitAll__Q23Sys11DrawBuffersFv
/* 8014FE38 0014CD78  80 7F 01 30 */	lwz r3, 0x150(r31)
/* 8014FE3C 0014CD7C  48 30 5D 15 */	bl frameInitAll__Q23Sys11DrawBuffersFv
/* 8014FE40 0014CD80  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014FE44 0014CD84  48 26 B9 51 */	bl killAll__11ParticleMgrFv
/* 8014FE48 0014CD88  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014FE4C 0014CD8C  48 26 B8 F1 */	bl reset__11ParticleMgrFv
/* 8014FE50 0014CD90  48 05 A9 89 */	bl initialiseSystem__Q24Game9GeneratorFv
/* 8014FE54 0014CD94  80 7F 01 04 */	lwz r3, 0x124(r31)
/* 8014FE58 0014CD98  48 2C 17 79 */	bl del__5CNodeFv
/* 8014FE5C 0014CD9C  80 7F 01 08 */	lwz r3, 0x128(r31)
/* 8014FE60 0014CDA0  48 2C 17 71 */	bl del__5CNodeFv
/* 8014FE64 0014CDA4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8014FE68 0014CDA8  48 2C 17 69 */	bl del__5CNodeFv
/* 8014FE6C 0014CDAC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014FE70 0014CDB0  48 2C 17 61 */	bl del__5CNodeFv
/* 8014FE74 0014CDB4  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014FE78 0014CDB8  48 2C 17 59 */	bl del__5CNodeFv
/* 8014FE7C 0014CDBC  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014FE80 0014CDC0  48 2C 17 51 */	bl del__5CNodeFv
/* 8014FE84 0014CDC4  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014FE88 0014CDC8  48 2C 17 49 */	bl del__5CNodeFv
/* 8014FE8C 0014CDCC  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014FE90 0014CDD0  48 2C 17 41 */	bl del__5CNodeFv
/* 8014FE94 0014CDD4  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014FE98 0014CDD8  48 2C 17 39 */	bl del__5CNodeFv
/* 8014FE9C 0014CDDC  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014FEA0 0014CDE0  48 2C 17 31 */	bl del__5CNodeFv
/* 8014FEA4 0014CDE4  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 8014FEA8 0014CDE8  48 2C 17 29 */	bl del__5CNodeFv
/* 8014FEAC 0014CDEC  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8014FEB0 0014CDF0  28 03 00 00 */	cmplwi r3, 0
/* 8014FEB4 0014CDF4  41 82 00 0C */	beq .L_8014FEC0
/* 8014FEB8 0014CDF8  38 63 00 04 */	addi r3, r3, 4
/* 8014FEBC 0014CDFC  48 2C 17 15 */	bl del__5CNodeFv
.L_8014FEC0:
/* 8014FEC0 0014CE00  80 7F 01 28 */	lwz r3, 0x148(r31)
/* 8014FEC4 0014CE04  48 2C 17 0D */	bl del__5CNodeFv
/* 8014FEC8 0014CE08  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014FECC 0014CE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FED0 0014CE10  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014FED4 0014CE14  7D 89 03 A6 */	mtctr r12
/* 8014FED8 0014CE18  4E 80 04 21 */	bctrl 
/* 8014FEDC 0014CE1C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014FEE0 0014CE20  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FEE4 0014CE24  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014FEE8 0014CE28  7D 89 03 A6 */	mtctr r12
/* 8014FEEC 0014CE2C  4E 80 04 21 */	bctrl 
/* 8014FEF0 0014CE30  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8014FEF4 0014CE34  48 01 D3 45 */	bl resetMgrs__Q24Game9PelletMgrFv
/* 8014FEF8 0014CE38  80 6D 93 90 */	lwz r3, dynParticleMgr__4Game@sda21(r13)
/* 8014FEFC 0014CE3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FF00 0014CE40  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014FF04 0014CE44  7D 89 03 A6 */	mtctr r12
/* 8014FF08 0014CE48  4E 80 04 21 */	bctrl 
/* 8014FF0C 0014CE4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF10 0014CE50  80 8D 91 E0 */	lwz r4, generalEnemyMgr__4Game@sda21(r13)
/* 8014FF14 0014CE54  48 06 60 A1 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF18 0014CE58  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014FF1C 0014CE5C  28 04 00 00 */	cmplwi r4, 0
/* 8014FF20 0014CE60  41 82 00 08 */	beq .L_8014FF28
/* 8014FF24 0014CE64  80 84 00 00 */	lwz r4, 0(r4)
.L_8014FF28:
/* 8014FF28 0014CE68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF2C 0014CE6C  48 06 60 89 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF30 0014CE70  80 8D 94 38 */	lwz r4, itemMgr__4Game@sda21(r13)
/* 8014FF34 0014CE74  28 04 00 00 */	cmplwi r4, 0
/* 8014FF38 0014CE78  41 82 00 08 */	beq .L_8014FF40
/* 8014FF3C 0014CE7C  38 84 00 1C */	addi r4, r4, 0x1c
.L_8014FF40:
/* 8014FF40 0014CE80  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF44 0014CE84  48 06 60 71 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF48 0014CE88  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014FF4C 0014CE8C  28 04 00 00 */	cmplwi r4, 0
/* 8014FF50 0014CE90  41 82 00 08 */	beq .L_8014FF58
/* 8014FF54 0014CE94  80 84 00 00 */	lwz r4, 0(r4)
.L_8014FF58:
/* 8014FF58 0014CE98  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF5C 0014CE9C  48 06 60 59 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF60 0014CEA0  38 00 00 00 */	li r0, 0
/* 8014FF64 0014CEA4  7F E3 FB 78 */	mr r3, r31
/* 8014FF68 0014CEA8  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 8014FF6C 0014CEAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014FF70 0014CEB0  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 8014FF74 0014CEB4  7D 89 03 A6 */	mtctr r12
/* 8014FF78 0014CEB8  4E 80 04 21 */	bctrl 
/* 8014FF7C 0014CEBC  38 00 00 00 */	li r0, 0
/* 8014FF80 0014CEC0  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 8014FF84 0014CEC4  90 0D 94 20 */	stw r0, platMgr__4Game@sda21(r13)
/* 8014FF88 0014CEC8  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 8014FF8C 0014CECC  90 0D 96 80 */	stw r0, shadowMgr__4Game@sda21(r13)
/* 8014FF90 0014CED0  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
/* 8014FF94 0014CED4  90 0D 92 08 */	stw r0, lifeGaugeMgr@sda21(r13)
/* 8014FF98 0014CED8  90 1F 00 50 */	stw r0, 0x70(r31)
/* 8014FF9C 0014CEDC  80 7F 01 0C */	lwz r3, 0x12c(r31)
/* 8014FFA0 0014CEE0  28 03 00 00 */	cmplwi r3, 0
/* 8014FFA4 0014CEE4  41 82 00 1C */	beq .L_8014FFC0
/* 8014FFA8 0014CEE8  41 82 00 18 */	beq .L_8014FFC0
/* 8014FFAC 0014CEEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FFB0 0014CEF0  38 80 00 01 */	li r4, 1
/* 8014FFB4 0014CEF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FFB8 0014CEF8  7D 89 03 A6 */	mtctr r12
/* 8014FFBC 0014CEFC  4E 80 04 21 */	bctrl 
.L_8014FFC0:
/* 8014FFC0 0014CF00  80 7F 01 10 */	lwz r3, 0x130(r31)
/* 8014FFC4 0014CF04  28 03 00 00 */	cmplwi r3, 0
/* 8014FFC8 0014CF08  41 82 00 1C */	beq .L_8014FFE4
/* 8014FFCC 0014CF0C  41 82 00 18 */	beq .L_8014FFE4
/* 8014FFD0 0014CF10  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FFD4 0014CF14  38 80 00 01 */	li r4, 1
/* 8014FFD8 0014CF18  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FFDC 0014CF1C  7D 89 03 A6 */	mtctr r12
/* 8014FFE0 0014CF20  4E 80 04 21 */	bctrl 
.L_8014FFE4:
/* 8014FFE4 0014CF24  38 00 00 00 */	li r0, 0
/* 8014FFE8 0014CF28  90 1F 01 10 */	stw r0, 0x130(r31)
/* 8014FFEC 0014CF2C  90 1F 01 0C */	stw r0, 0x12c(r31)
/* 8014FFF0 0014CF30  90 1F 01 08 */	stw r0, 0x128(r31)
/* 8014FFF4 0014CF34  90 1F 01 04 */	stw r0, 0x124(r31)
/* 8014FFF8 0014CF38  90 0D 96 A8 */	stw r0, rumbleMgr__4Game@sda21(r13)
/* 8014FFFC 0014CF3C  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 80150000 0014CF40  90 0D 94 38 */	stw r0, itemMgr__4Game@sda21(r13)
/* 80150004 0014CF44  90 0D 91 E0 */	stw r0, generalEnemyMgr__4Game@sda21(r13)
/* 80150008 0014CF48  90 0D 93 80 */	stw r0, testPathfinder__4Game@sda21(r13)
/* 8015000C 0014CF4C  90 1F 01 4C */	stw r0, 0x16c(r31)
/* 80150010 0014CF50  80 7F 00 FC */	lwz r3, 0x11c(r31)
/* 80150014 0014CF54  4B ED 35 A1 */	bl destroy__7JKRHeapFv
/* 80150018 0014CF58  38 00 00 00 */	li r0, 0
/* 8015001C 0014CF5C  90 1F 00 FC */	stw r0, 0x11c(r31)
/* 80150020 0014CF60  90 0D 92 B4 */	stw r0, theExpHeap@sda21(r13)
/* 80150024 0014CF64  80 7F 01 00 */	lwz r3, 0x120(r31)
/* 80150028 0014CF68  4B ED 35 7D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8015002C 0014CF6C  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80150030 0014CF70  4B ED 37 85 */	bl getFreeSize__7JKRHeapFv
/* 80150034 0014CF74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150038 0014CF78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015003C 0014CF7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80150040 0014CF80  7C 08 03 A6 */	mtlr r0
/* 80150044 0014CF84  38 21 00 10 */	addi r1, r1, 0x10
/* 80150048 0014CF88  4E 80 00 20 */	blr 
.endfn clearHeap__Q24Game15BaseGameSectionFv
.else
.fn clearHeap__Q24Game15BaseGameSectionFv, global
/* 8014FDA4 0014CCE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014FDA8 0014CCE8  7C 08 02 A6 */	mflr r0
/* 8014FDAC 0014CCEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014FDB0 0014CCF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014FDB4 0014CCF4  7C 7F 1B 78 */	mr r31, r3
/* 8014FDB8 0014CCF8  93 C1 00 08 */	stw r30, 8(r1)
/* 8014FDBC 0014CCFC  48 0E CD 35 */	bl deleteInstance__Q29TexCaster3MgrFv
/* 8014FDC0 0014CD00  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8014FDC4 0014CD04  28 00 00 00 */	cmplwi r0, 0
/* 8014FDC8 0014CD08  40 82 00 20 */	bne .L_8014FDE8
/* 8014FDCC 0014CD0C  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014FDD0 0014CD10  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014FDD4 0014CD14  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014FDD8 0014CD18  38 80 01 D3 */	li r4, 0x1d3
/* 8014FDDC 0014CD1C  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014FDE0 0014CD20  4C C6 31 82 */	crclr 6
/* 8014FDE4 0014CD24  4B ED A8 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014FDE8:
/* 8014FDE8 0014CD28  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8014FDEC 0014CD2C  28 1E 00 00 */	cmplwi r30, 0
/* 8014FDF0 0014CD30  40 82 00 20 */	bne .L_8014FE10
/* 8014FDF4 0014CD34  3C 60 80 48 */	lis r3, lbl_8047C9AC@ha
/* 8014FDF8 0014CD38  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8014FDFC 0014CD3C  38 63 C9 AC */	addi r3, r3, lbl_8047C9AC@l
/* 8014FE00 0014CD40  38 80 01 DC */	li r4, 0x1dc
/* 8014FE04 0014CD44  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 8014FE08 0014CD48  4C C6 31 82 */	crclr 6
/* 8014FE0C 0014CD4C  4B ED A8 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014FE10:
/* 8014FE10 0014CD50  7F C3 F3 78 */	mr r3, r30
/* 8014FE14 0014CD54  48 1F 23 CD */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8014FE18 0014CD58  4B F9 56 D9 */	bl GXWaitDrawDone
/* 8014FE1C 0014CD5C  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 8014FE20 0014CD60  48 09 53 DD */	bl clearGlobalPointers__Q24Game7ItemMgrFv
/* 8014FE24 0014CD64  38 00 00 00 */	li r0, 0
/* 8014FE28 0014CD68  90 0D 92 CC */	stw r0, platCellMgr__4Game@sda21(r13)
/* 8014FE2C 0014CD6C  90 0D 92 C8 */	stw r0, cellMgr__4Game@sda21(r13)
/* 8014FE30 0014CD70  80 7F 01 2C */	lwz r3, 0x12c(r31)
/* 8014FE34 0014CD74  48 30 5D 1D */	bl frameInitAll__Q23Sys11DrawBuffersFv
/* 8014FE38 0014CD78  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 8014FE3C 0014CD7C  48 30 5D 15 */	bl frameInitAll__Q23Sys11DrawBuffersFv
/* 8014FE40 0014CD80  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014FE44 0014CD84  48 26 B9 51 */	bl killAll__11ParticleMgrFv
/* 8014FE48 0014CD88  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8014FE4C 0014CD8C  48 26 B8 F1 */	bl reset__11ParticleMgrFv
/* 8014FE50 0014CD90  48 05 A9 89 */	bl initialiseSystem__Q24Game9GeneratorFv
/* 8014FE54 0014CD94  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 8014FE58 0014CD98  48 2C 17 79 */	bl del__5CNodeFv
/* 8014FE5C 0014CD9C  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 8014FE60 0014CDA0  48 2C 17 71 */	bl del__5CNodeFv
/* 8014FE64 0014CDA4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8014FE68 0014CDA8  48 2C 17 69 */	bl del__5CNodeFv
/* 8014FE6C 0014CDAC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8014FE70 0014CDB0  48 2C 17 61 */	bl del__5CNodeFv
/* 8014FE74 0014CDB4  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8014FE78 0014CDB8  48 2C 17 59 */	bl del__5CNodeFv
/* 8014FE7C 0014CDBC  80 6D 93 A8 */	lwz r3, generatorMgr__4Game@sda21(r13)
/* 8014FE80 0014CDC0  48 2C 17 51 */	bl del__5CNodeFv
/* 8014FE84 0014CDC4  80 6D 93 AC */	lwz r3, onceGeneratorMgr__4Game@sda21(r13)
/* 8014FE88 0014CDC8  48 2C 17 49 */	bl del__5CNodeFv
/* 8014FE8C 0014CDCC  80 6D 93 B0 */	lwz r3, limitGeneratorMgr__4Game@sda21(r13)
/* 8014FE90 0014CDD0  48 2C 17 41 */	bl del__5CNodeFv
/* 8014FE94 0014CDD4  80 6D 93 B4 */	lwz r3, plantsGeneratorMgr__4Game@sda21(r13)
/* 8014FE98 0014CDD8  48 2C 17 39 */	bl del__5CNodeFv
/* 8014FE9C 0014CDDC  80 6D 93 B8 */	lwz r3, dayGeneratorMgr__4Game@sda21(r13)
/* 8014FEA0 0014CDE0  48 2C 17 31 */	bl del__5CNodeFv
/* 8014FEA4 0014CDE4  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 8014FEA8 0014CDE8  48 2C 17 29 */	bl del__5CNodeFv
/* 8014FEAC 0014CDEC  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8014FEB0 0014CDF0  28 03 00 00 */	cmplwi r3, 0
/* 8014FEB4 0014CDF4  41 82 00 0C */	beq .L_8014FEC0
/* 8014FEB8 0014CDF8  38 63 00 04 */	addi r3, r3, 4
/* 8014FEBC 0014CDFC  48 2C 17 15 */	bl del__5CNodeFv
.L_8014FEC0:
/* 8014FEC0 0014CE00  80 7F 01 28 */	lwz r3, 0x128(r31)
/* 8014FEC4 0014CE04  48 2C 17 0D */	bl del__5CNodeFv
/* 8014FEC8 0014CE08  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8014FECC 0014CE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FED0 0014CE10  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014FED4 0014CE14  7D 89 03 A6 */	mtctr r12
/* 8014FED8 0014CE18  4E 80 04 21 */	bctrl 
/* 8014FEDC 0014CE1C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014FEE0 0014CE20  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FEE4 0014CE24  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014FEE8 0014CE28  7D 89 03 A6 */	mtctr r12
/* 8014FEEC 0014CE2C  4E 80 04 21 */	bctrl 
/* 8014FEF0 0014CE30  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 8014FEF4 0014CE34  48 01 D3 45 */	bl resetMgrs__Q24Game9PelletMgrFv
/* 8014FEF8 0014CE38  80 6D 93 90 */	lwz r3, dynParticleMgr__4Game@sda21(r13)
/* 8014FEFC 0014CE3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FF00 0014CE40  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8014FF04 0014CE44  7D 89 03 A6 */	mtctr r12
/* 8014FF08 0014CE48  4E 80 04 21 */	bctrl 
/* 8014FF0C 0014CE4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF10 0014CE50  80 8D 91 E0 */	lwz r4, generalEnemyMgr__4Game@sda21(r13)
/* 8014FF14 0014CE54  48 06 60 A1 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF18 0014CE58  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014FF1C 0014CE5C  28 04 00 00 */	cmplwi r4, 0
/* 8014FF20 0014CE60  41 82 00 08 */	beq .L_8014FF28
/* 8014FF24 0014CE64  80 84 00 00 */	lwz r4, 0(r4)
.L_8014FF28:
/* 8014FF28 0014CE68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF2C 0014CE6C  48 06 60 89 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF30 0014CE70  80 8D 94 38 */	lwz r4, itemMgr__4Game@sda21(r13)
/* 8014FF34 0014CE74  28 04 00 00 */	cmplwi r4, 0
/* 8014FF38 0014CE78  41 82 00 08 */	beq .L_8014FF40
/* 8014FF3C 0014CE7C  38 84 00 1C */	addi r4, r4, 0x1c
.L_8014FF40:
/* 8014FF40 0014CE80  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF44 0014CE84  48 06 60 71 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF48 0014CE88  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8014FF4C 0014CE8C  28 04 00 00 */	cmplwi r4, 0
/* 8014FF50 0014CE90  41 82 00 08 */	beq .L_8014FF58
/* 8014FF54 0014CE94  80 84 00 00 */	lwz r4, 0(r4)
.L_8014FF58:
/* 8014FF58 0014CE98  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014FF5C 0014CE9C  48 06 60 59 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8014FF60 0014CEA0  38 00 00 00 */	li r0, 0
/* 8014FF64 0014CEA4  7F E3 FB 78 */	mr r3, r31
/* 8014FF68 0014CEA8  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 8014FF6C 0014CEAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014FF70 0014CEB0  81 8C 01 30 */	lwz r12, 0x130(r12)
/* 8014FF74 0014CEB4  7D 89 03 A6 */	mtctr r12
/* 8014FF78 0014CEB8  4E 80 04 21 */	bctrl 
/* 8014FF7C 0014CEBC  38 00 00 00 */	li r0, 0
/* 8014FF80 0014CEC0  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 8014FF84 0014CEC4  90 0D 94 20 */	stw r0, platMgr__4Game@sda21(r13)
/* 8014FF88 0014CEC8  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 8014FF8C 0014CECC  90 0D 96 80 */	stw r0, shadowMgr__4Game@sda21(r13)
/* 8014FF90 0014CED0  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
/* 8014FF94 0014CED4  90 0D 92 08 */	stw r0, lifeGaugeMgr@sda21(r13)
/* 8014FF98 0014CED8  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8014FF9C 0014CEDC  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 8014FFA0 0014CEE0  28 03 00 00 */	cmplwi r3, 0
/* 8014FFA4 0014CEE4  41 82 00 1C */	beq .L_8014FFC0
/* 8014FFA8 0014CEE8  41 82 00 18 */	beq .L_8014FFC0
/* 8014FFAC 0014CEEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FFB0 0014CEF0  38 80 00 01 */	li r4, 1
/* 8014FFB4 0014CEF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FFB8 0014CEF8  7D 89 03 A6 */	mtctr r12
/* 8014FFBC 0014CEFC  4E 80 04 21 */	bctrl 
.L_8014FFC0:
/* 8014FFC0 0014CF00  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 8014FFC4 0014CF04  28 03 00 00 */	cmplwi r3, 0
/* 8014FFC8 0014CF08  41 82 00 1C */	beq .L_8014FFE4
/* 8014FFCC 0014CF0C  41 82 00 18 */	beq .L_8014FFE4
/* 8014FFD0 0014CF10  81 83 00 00 */	lwz r12, 0(r3)
/* 8014FFD4 0014CF14  38 80 00 01 */	li r4, 1
/* 8014FFD8 0014CF18  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014FFDC 0014CF1C  7D 89 03 A6 */	mtctr r12
/* 8014FFE0 0014CF20  4E 80 04 21 */	bctrl 
.L_8014FFE4:
/* 8014FFE4 0014CF24  38 00 00 00 */	li r0, 0
/* 8014FFE8 0014CF28  90 1F 01 10 */	stw r0, 0x110(r31)
/* 8014FFEC 0014CF2C  90 1F 01 0C */	stw r0, 0x10c(r31)
/* 8014FFF0 0014CF30  90 1F 01 08 */	stw r0, 0x108(r31)
/* 8014FFF4 0014CF34  90 1F 01 04 */	stw r0, 0x104(r31)
/* 8014FFF8 0014CF38  90 0D 96 A8 */	stw r0, rumbleMgr__4Game@sda21(r13)
/* 8014FFFC 0014CF3C  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 80150000 0014CF40  90 0D 94 38 */	stw r0, itemMgr__4Game@sda21(r13)
/* 80150004 0014CF44  90 0D 91 E0 */	stw r0, generalEnemyMgr__4Game@sda21(r13)
/* 80150008 0014CF48  90 0D 93 80 */	stw r0, testPathfinder__4Game@sda21(r13)
/* 8015000C 0014CF4C  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 80150010 0014CF50  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 80150014 0014CF54  4B ED 35 A1 */	bl destroy__7JKRHeapFv
/* 80150018 0014CF58  38 00 00 00 */	li r0, 0
/* 8015001C 0014CF5C  90 1F 00 FC */	stw r0, 0xfc(r31)
/* 80150020 0014CF60  90 0D 92 B4 */	stw r0, theExpHeap@sda21(r13)
/* 80150024 0014CF64  80 7F 01 00 */	lwz r3, 0x100(r31)
/* 80150028 0014CF68  4B ED 35 7D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8015002C 0014CF6C  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80150030 0014CF70  4B ED 37 85 */	bl getFreeSize__7JKRHeapFv
/* 80150034 0014CF74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150038 0014CF78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015003C 0014CF7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80150040 0014CF80  7C 08 03 A6 */	mtlr r0
/* 80150044 0014CF84  38 21 00 10 */	addi r1, r1, 0x10
/* 80150048 0014CF88  4E 80 00 20 */	blr 
.endfn clearHeap__Q24Game15BaseGameSectionFv
.endif

.fn __dt__10ControllerFv, weak
/* 8015004C 0014CF8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150050 0014CF90  7C 08 02 A6 */	mflr r0
/* 80150054 0014CF94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150058 0014CF98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015005C 0014CF9C  7C 9F 23 78 */	mr r31, r4
/* 80150060 0014CFA0  93 C1 00 08 */	stw r30, 8(r1)
/* 80150064 0014CFA4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80150068 0014CFA8  41 82 00 28 */	beq .L_80150090
/* 8015006C 0014CFAC  3C A0 80 4B */	lis r5, __vt__10Controller@ha
/* 80150070 0014CFB0  38 80 00 00 */	li r4, 0
/* 80150074 0014CFB4  38 05 0D 08 */	addi r0, r5, __vt__10Controller@l
/* 80150078 0014CFB8  90 1E 00 00 */	stw r0, 0(r30)
/* 8015007C 0014CFBC  4B ED D4 B1 */	bl __dt__10JUTGamePadFv
/* 80150080 0014CFC0  7F E0 07 35 */	extsh. r0, r31
/* 80150084 0014CFC4  40 81 00 0C */	ble .L_80150090
/* 80150088 0014CFC8  7F C3 F3 78 */	mr r3, r30
/* 8015008C 0014CFCC  4B ED 40 29 */	bl __dl__FPv
.L_80150090:
/* 80150090 0014CFD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150094 0014CFD4  7F C3 F3 78 */	mr r3, r30
/* 80150098 0014CFD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015009C 0014CFDC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801500A0 0014CFE0  7C 08 03 A6 */	mtlr r0
/* 801500A4 0014CFE4  38 21 00 10 */	addi r1, r1, 0x10
/* 801500A8 0014CFE8  4E 80 00 20 */	blr 
.endfn __dt__10ControllerFv

.fn onClearHeap__Q24Game15BaseGameSectionFv, weak
/* 801500AC 0014CFEC  4E 80 00 20 */	blr 
.endfn onClearHeap__Q24Game15BaseGameSectionFv

.if version == 0
.fn startFadeout__Q24Game15BaseGameSectionFf, global
/* 801500B0 0014CFF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801500B4 0014CFF4  7C 08 02 A6 */	mflr r0
/* 801500B8 0014CFF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801500BC 0014CFFC  80 03 00 D8 */	lwz r0, 0xf8(r3)
/* 801500C0 0014D000  90 03 00 18 */	stw r0, 0x18(r3)
/* 801500C4 0014D004  80 63 00 D8 */	lwz r3, 0xf8(r3)
/* 801500C8 0014D008  48 2D BC A1 */	bl start__8WipeBaseFf
/* 801500CC 0014D00C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801500D0 0014D010  7C 08 03 A6 */	mtlr r0
/* 801500D4 0014D014  38 21 00 10 */	addi r1, r1, 0x10
/* 801500D8 0014D018  4E 80 00 20 */	blr 
.endfn startFadeout__Q24Game15BaseGameSectionFf
.else
.fn startFadeout__Q24Game15BaseGameSectionFf, global
/* 801500B0 0014CFF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801500B4 0014CFF4  7C 08 02 A6 */	mflr r0
/* 801500B8 0014CFF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801500BC 0014CFFC  80 03 00 D8 */	lwz r0, 0xd8(r3)
/* 801500C0 0014D000  90 03 00 18 */	stw r0, 0x18(r3)
/* 801500C4 0014D004  80 63 00 D8 */	lwz r3, 0xd8(r3)
/* 801500C8 0014D008  48 2D BC A1 */	bl start__8WipeBaseFf
/* 801500CC 0014D00C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801500D0 0014D010  7C 08 03 A6 */	mtlr r0
/* 801500D4 0014D014  38 21 00 10 */	addi r1, r1, 0x10
/* 801500D8 0014D018  4E 80 00 20 */	blr 
.endfn startFadeout__Q24Game15BaseGameSectionFf
.endif

.if version == 0
.fn startFadein__Q24Game15BaseGameSectionFf, global
/* 801500DC 0014D01C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801500E0 0014D020  7C 08 02 A6 */	mflr r0
/* 801500E4 0014D024  90 01 00 14 */	stw r0, 0x14(r1)
/* 801500E8 0014D028  80 03 00 D4 */	lwz r0, 0xf4(r3)
/* 801500EC 0014D02C  90 03 00 18 */	stw r0, 0x18(r3)
/* 801500F0 0014D030  80 63 00 D4 */	lwz r3, 0xf4(r3)
/* 801500F4 0014D034  48 2D BC 75 */	bl start__8WipeBaseFf
/* 801500F8 0014D038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801500FC 0014D03C  7C 08 03 A6 */	mtlr r0
/* 80150100 0014D040  38 21 00 10 */	addi r1, r1, 0x10
/* 80150104 0014D044  4E 80 00 20 */	blr 
.endfn startFadein__Q24Game15BaseGameSectionFf
.else
.fn startFadein__Q24Game15BaseGameSectionFf, global
/* 801500DC 0014D01C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801500E0 0014D020  7C 08 02 A6 */	mflr r0
/* 801500E4 0014D024  90 01 00 14 */	stw r0, 0x14(r1)
/* 801500E8 0014D028  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 801500EC 0014D02C  90 03 00 18 */	stw r0, 0x18(r3)
/* 801500F0 0014D030  80 63 00 D4 */	lwz r3, 0xd4(r3)
/* 801500F4 0014D034  48 2D BC 75 */	bl start__8WipeBaseFf
/* 801500F8 0014D038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801500FC 0014D03C  7C 08 03 A6 */	mtlr r0
/* 80150100 0014D040  38 21 00 10 */	addi r1, r1, 0x10
/* 80150104 0014D044  4E 80 00 20 */	blr 
.endfn startFadein__Q24Game15BaseGameSectionFf
.endif

.if version == 0
.fn startFadeoutin__Q24Game15BaseGameSectionFf, global
/* 80150108 0014D048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015010C 0014D04C  7C 08 02 A6 */	mflr r0
/* 80150110 0014D050  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150114 0014D054  80 03 00 DC */	lwz r0, 0xfc(r3)
/* 80150118 0014D058  90 03 00 18 */	stw r0, 0x18(r3)
/* 8015011C 0014D05C  80 63 00 DC */	lwz r3, 0xfc(r3)
/* 80150120 0014D060  48 2D BC 49 */	bl start__8WipeBaseFf
/* 80150124 0014D064  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150128 0014D068  7C 08 03 A6 */	mtlr r0
/* 8015012C 0014D06C  38 21 00 10 */	addi r1, r1, 0x10
/* 80150130 0014D070  4E 80 00 20 */	blr 
.endfn startFadeoutin__Q24Game15BaseGameSectionFf
.else
.fn startFadeoutin__Q24Game15BaseGameSectionFf, global
/* 80150108 0014D048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015010C 0014D04C  7C 08 02 A6 */	mflr r0
/* 80150110 0014D050  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150114 0014D054  80 03 00 DC */	lwz r0, 0xdc(r3)
/* 80150118 0014D058  90 03 00 18 */	stw r0, 0x18(r3)
/* 8015011C 0014D05C  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 80150120 0014D060  48 2D BC 49 */	bl start__8WipeBaseFf
/* 80150124 0014D064  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150128 0014D068  7C 08 03 A6 */	mtlr r0
/* 8015012C 0014D06C  38 21 00 10 */	addi r1, r1, 0x10
/* 80150130 0014D070  4E 80 00 20 */	blr 
.endfn startFadeoutin__Q24Game15BaseGameSectionFf
.endif

.if version == 0
.fn startFadeblack__Q24Game15BaseGameSectionFv, global
/* 80150134 0014D074  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150138 0014D078  7C 08 02 A6 */	mflr r0
/* 8015013C 0014D07C  C0 22 A2 1C */	lfs f1, lbl_8051857C@sda21(r2)
/* 80150140 0014D080  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150144 0014D084  38 00 00 01 */	li r0, 1
/* 80150148 0014D088  80 83 00 D0 */	lwz r4, 0xf0(r3)
/* 8015014C 0014D08C  90 83 00 18 */	stw r4, 0x18(r3)
/* 80150150 0014D090  80 83 00 D0 */	lwz r4, 0xf0(r3)
/* 80150154 0014D094  98 04 00 28 */	stb r0, 0x28(r4)
/* 80150158 0014D098  80 63 00 D0 */	lwz r3, 0xf0(r3)
/* 8015015C 0014D09C  48 2D BC 0D */	bl start__8WipeBaseFf
/* 80150160 0014D0A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150164 0014D0A4  7C 08 03 A6 */	mtlr r0
/* 80150168 0014D0A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8015016C 0014D0AC  4E 80 00 20 */	blr 
.endfn startFadeblack__Q24Game15BaseGameSectionFv
.else
.fn startFadeblack__Q24Game15BaseGameSectionFv, global
/* 80150134 0014D074  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150138 0014D078  7C 08 02 A6 */	mflr r0
/* 8015013C 0014D07C  C0 22 A2 1C */	lfs f1, lbl_8051857C@sda21(r2)
/* 80150140 0014D080  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150144 0014D084  38 00 00 01 */	li r0, 1
/* 80150148 0014D088  80 83 00 D0 */	lwz r4, 0xd0(r3)
/* 8015014C 0014D08C  90 83 00 18 */	stw r4, 0x18(r3)
/* 80150150 0014D090  80 83 00 D0 */	lwz r4, 0xd0(r3)
/* 80150154 0014D094  98 04 00 28 */	stb r0, 0x28(r4)
/* 80150158 0014D098  80 63 00 D0 */	lwz r3, 0xd0(r3)
/* 8015015C 0014D09C  48 2D BC 0D */	bl start__8WipeBaseFf
/* 80150160 0014D0A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80150164 0014D0A4  7C 08 03 A6 */	mtlr r0
/* 80150168 0014D0A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8015016C 0014D0AC  4E 80 00 20 */	blr 
.endfn startFadeblack__Q24Game15BaseGameSectionFv
.endif

.if version == 0
.fn startFadewhite__Q24Game15BaseGameSectionFv, global
/* 80150170 0014D0B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150174 0014D0B4  7C 08 02 A6 */	mflr r0
/* 80150178 0014D0B8  C0 22 A2 1C */	lfs f1, lbl_8051857C@sda21(r2)
/* 8015017C 0014D0BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150180 0014D0C0  38 00 00 00 */	li r0, 0
/* 80150184 0014D0C4  80 83 00 D0 */	lwz r4, 0xf0(r3)
/* 80150188 0014D0C8  90 83 00 18 */	stw r4, 0x18(r3)
/* 8015018C 0014D0CC  80 83 00 D0 */	lwz r4, 0xf0(r3)
/* 80150190 0014D0D0  98 04 00 28 */	stb r0, 0x28(r4)
/* 80150194 0014D0D4  80 63 00 D0 */	lwz r3, 0xf0(r3)
/* 80150198 0014D0D8  48 2D BB D1 */	bl start__8WipeBaseFf
/* 8015019C 0014D0DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801501A0 0014D0E0  7C 08 03 A6 */	mtlr r0
/* 801501A4 0014D0E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801501A8 0014D0E8  4E 80 00 20 */	blr 
.endfn startFadewhite__Q24Game15BaseGameSectionFv
.else
.fn startFadewhite__Q24Game15BaseGameSectionFv, global
/* 80150170 0014D0B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80150174 0014D0B4  7C 08 02 A6 */	mflr r0
/* 80150178 0014D0B8  C0 22 A2 1C */	lfs f1, lbl_8051857C@sda21(r2)
/* 8015017C 0014D0BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80150180 0014D0C0  38 00 00 00 */	li r0, 0
/* 80150184 0014D0C4  80 83 00 D0 */	lwz r4, 0xd0(r3)
/* 80150188 0014D0C8  90 83 00 18 */	stw r4, 0x18(r3)
/* 8015018C 0014D0CC  80 83 00 D0 */	lwz r4, 0xd0(r3)
/* 80150190 0014D0D0  98 04 00 28 */	stb r0, 0x28(r4)
/* 80150194 0014D0D4  80 63 00 D0 */	lwz r3, 0xd0(r3)
/* 80150198 0014D0D8  48 2D BB D1 */	bl start__8WipeBaseFf
/* 8015019C 0014D0DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801501A0 0014D0E0  7C 08 03 A6 */	mtlr r0
/* 801501A4 0014D0E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801501A8 0014D0E8  4E 80 00 20 */	blr 
.endfn startFadewhite__Q24Game15BaseGameSectionFv
.endif

.if version == 0
.fn setupFixMemory__Q24Game15BaseGameSectionFv, global
/* 801501AC 0014D0EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801501B0 0014D0F0  7C 08 02 A6 */	mflr r0
/* 801501B4 0014D0F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801501B8 0014D0F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801501BC 0014D0FC  7C 7F 1B 78 */	mr r31, r3
/* 801501C0 0014D100  38 60 00 14 */	li r3, 0x14
/* 801501C4 0014D104  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801501C8 0014D108  4B ED 3C DD */	bl __nw__FUl
/* 801501CC 0014D10C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801501D0 0014D110  41 82 00 4C */	beq .L_8015021C
/* 801501D4 0014D114  3C 60 80 4B */	lis r3, lbl_804B0CD4@ha
/* 801501D8 0014D118  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 801501DC 0014D11C  38 E3 0C D4 */	addi r7, r3, lbl_804B0CD4@l
/* 801501E0 0014D120  3C 60 80 4B */	lis r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@ha
/* 801501E4 0014D124  80 C7 00 00 */	lwz r6, 0(r7)
/* 801501E8 0014D128  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 801501EC 0014D12C  80 A7 00 04 */	lwz r5, 4(r7)
/* 801501F0 0014D130  38 03 0E F4 */	addi r0, r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@l
/* 801501F4 0014D134  80 67 00 08 */	lwz r3, 8(r7)
/* 801501F8 0014D138  90 C1 00 08 */	stw r6, 8(r1)
/* 801501FC 0014D13C  90 9E 00 00 */	stw r4, 0(r30)
/* 80150200 0014D140  90 1E 00 00 */	stw r0, 0(r30)
/* 80150204 0014D144  93 FE 00 04 */	stw r31, 4(r30)
/* 80150208 0014D148  90 DE 00 08 */	stw r6, 8(r30)
/* 8015020C 0014D14C  90 BE 00 0C */	stw r5, 0xc(r30)
/* 80150210 0014D150  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80150214 0014D154  90 61 00 10 */	stw r3, 0x10(r1)
/* 80150218 0014D158  90 7E 00 10 */	stw r3, 0x10(r30)
.L_8015021C:
/* 8015021C 0014D15C  7F E3 FB 78 */	mr r3, r31
/* 80150220 0014D160  48 2D 3D AD */	bl beginFrame__7SectionFv
/* 80150224 0014D164  7F E3 FB 78 */	mr r3, r31
/* 80150228 0014D168  48 2D 3D ED */	bl beginRender__7SectionFv
/* 8015022C 0014D16C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80150230 0014D170  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80150234 0014D174  4B F0 D9 D9 */	bl drawInit__6J3DSysFv
/* 80150238 0014D178  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8015023C 0014D17C  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 80150240 0014D180  FC 40 08 90 */	fmr f2, f1
/* 80150244 0014D184  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 80150248 0014D188  FC A0 08 90 */	fmr f5, f1
/* 8015024C 0014D18C  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 80150250 0014D190  4B F9 95 41 */	bl GXSetViewport
/* 80150254 0014D194  38 60 00 00 */	li r3, 0
/* 80150258 0014D198  38 80 00 10 */	li r4, 0x10
/* 8015025C 0014D19C  38 A0 02 60 */	li r5, 0x260
/* 80150260 0014D1A0  38 C0 01 C0 */	li r6, 0x1c0
/* 80150264 0014D1A4  4B F9 95 75 */	bl GXSetScissor
/* 80150268 0014D1A8  7F E3 FB 78 */	mr r3, r31
/* 8015026C 0014D1AC  48 2D 3D CD */	bl endRender__7SectionFv
/* 80150270 0014D1B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150274 0014D1B4  7F C5 F3 78 */	mr r5, r30
/* 80150278 0014D1B8  38 9F 00 5C */	addi r4, r31, 0x7c
/* 8015027C 0014D1BC  48 2D 2C BD */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80150280 0014D1C0  88 0D 92 BC */	lbz r0, init$4568@sda21(r13)
/* 80150284 0014D1C4  7C 00 07 75 */	extsb. r0, r0
/* 80150288 0014D1C8  40 82 00 14 */	bne .L_8015029C
/* 8015028C 0014D1CC  38 60 00 00 */	li r3, 0
/* 80150290 0014D1D0  38 00 00 01 */	li r0, 1
/* 80150294 0014D1D4  90 6D 92 B8 */	stw r3, col$4567@sda21(r13)
/* 80150298 0014D1D8  98 0D 92 BC */	stb r0, init$4568@sda21(r13)
.L_8015029C:
/* 8015029C 0014D1DC  80 8D 92 B8 */	lwz r4, col$4567@sda21(r13)
/* 801502A0 0014D1E0  7F E3 FB 78 */	mr r3, r31
/* 801502A4 0014D1E4  38 04 00 01 */	addi r0, r4, 1
/* 801502A8 0014D1E8  90 0D 92 B8 */	stw r0, col$4567@sda21(r13)
/* 801502AC 0014D1EC  48 2D 3D 45 */	bl endFrame__7SectionFv
/* 801502B0 0014D1F0  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 801502B4 0014D1F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801502B8 0014D1F8  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 801502BC 0014D1FC  38 C0 00 03 */	li r6, 3
/* 801502C0 0014D200  38 80 00 01 */	li r4, 1
/* 801502C4 0014D204  48 06 4C D1 */	bl setPause__Q24Game10GameSystemFbPci
/* 801502C8 0014D208  3C 60 80 51 */	lis r3, j3dSys@ha
/* 801502CC 0014D20C  3B C3 F2 30 */	addi r30, r3, j3dSys@l
.L_801502D0:
/* 801502D0 0014D210  7F E3 FB 78 */	mr r3, r31
/* 801502D4 0014D214  48 2D 3C F9 */	bl beginFrame__7SectionFv
/* 801502D8 0014D218  7F E3 FB 78 */	mr r3, r31
/* 801502DC 0014D21C  48 2D 3D 39 */	bl beginRender__7SectionFv
/* 801502E0 0014D220  7F C3 F3 78 */	mr r3, r30
/* 801502E4 0014D224  4B F0 D9 29 */	bl drawInit__6J3DSysFv
/* 801502E8 0014D228  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 801502EC 0014D22C  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 801502F0 0014D230  FC 40 08 90 */	fmr f2, f1
/* 801502F4 0014D234  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 801502F8 0014D238  FC A0 08 90 */	fmr f5, f1
/* 801502FC 0014D23C  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 80150300 0014D240  4B F9 94 91 */	bl GXSetViewport
/* 80150304 0014D244  38 60 00 00 */	li r3, 0
/* 80150308 0014D248  38 80 00 10 */	li r4, 0x10
/* 8015030C 0014D24C  38 A0 02 60 */	li r5, 0x260
/* 80150310 0014D250  38 C0 01 C0 */	li r6, 0x1c0
/* 80150314 0014D254  4B F9 94 C5 */	bl GXSetScissor
/* 80150318 0014D258  7F E3 FB 78 */	mr r3, r31
/* 8015031C 0014D25C  48 2D 3D 1D */	bl endRender__7SectionFv
/* 80150320 0014D260  80 1F 00 74 */	lwz r0, 0x94(r31)
/* 80150324 0014D264  2C 00 00 02 */	cmpwi r0, 2
/* 80150328 0014D268  40 82 00 20 */	bne .L_80150348
/* 8015032C 0014D26C  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 80150330 0014D270  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150334 0014D274  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 80150338 0014D278  38 C0 00 03 */	li r6, 3
/* 8015033C 0014D27C  38 80 00 00 */	li r4, 0
/* 80150340 0014D280  48 06 4C 55 */	bl setPause__Q24Game10GameSystemFbPci
/* 80150344 0014D284  48 00 00 10 */	b .L_80150354
.L_80150348:
/* 80150348 0014D288  7F E3 FB 78 */	mr r3, r31
/* 8015034C 0014D28C  48 2D 3C A5 */	bl endFrame__7SectionFv
/* 80150350 0014D290  4B FF FF 80 */	b .L_801502D0
.L_80150354:
/* 80150354 0014D294  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80150358 0014D298  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8015035C 0014D29C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80150360 0014D2A0  7C 08 03 A6 */	mtlr r0
/* 80150364 0014D2A4  38 21 00 20 */	addi r1, r1, 0x20
/* 80150368 0014D2A8  4E 80 00 20 */	blr 
.endfn setupFixMemory__Q24Game15BaseGameSectionFv
.else
.fn setupFixMemory__Q24Game15BaseGameSectionFv, global
/* 801501AC 0014D0EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801501B0 0014D0F0  7C 08 02 A6 */	mflr r0
/* 801501B4 0014D0F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801501B8 0014D0F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801501BC 0014D0FC  7C 7F 1B 78 */	mr r31, r3
/* 801501C0 0014D100  38 60 00 14 */	li r3, 0x14
/* 801501C4 0014D104  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801501C8 0014D108  4B ED 3C DD */	bl __nw__FUl
/* 801501CC 0014D10C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801501D0 0014D110  41 82 00 4C */	beq .L_8015021C
/* 801501D4 0014D114  3C 60 80 4B */	lis r3, lbl_804B0CD4@ha
/* 801501D8 0014D118  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 801501DC 0014D11C  38 E3 0C D4 */	addi r7, r3, lbl_804B0CD4@l
/* 801501E0 0014D120  3C 60 80 4B */	lis r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@ha
/* 801501E4 0014D124  80 C7 00 00 */	lwz r6, 0(r7)
/* 801501E8 0014D128  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 801501EC 0014D12C  80 A7 00 04 */	lwz r5, 4(r7)
/* 801501F0 0014D130  38 03 0E F4 */	addi r0, r3, "__vt__34Delegate<Q24Game15BaseGameSection>"@l
/* 801501F4 0014D134  80 67 00 08 */	lwz r3, 8(r7)
/* 801501F8 0014D138  90 C1 00 08 */	stw r6, 8(r1)
/* 801501FC 0014D13C  90 9E 00 00 */	stw r4, 0(r30)
/* 80150200 0014D140  90 1E 00 00 */	stw r0, 0(r30)
/* 80150204 0014D144  93 FE 00 04 */	stw r31, 4(r30)
/* 80150208 0014D148  90 DE 00 08 */	stw r6, 8(r30)
/* 8015020C 0014D14C  90 BE 00 0C */	stw r5, 0xc(r30)
/* 80150210 0014D150  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80150214 0014D154  90 61 00 10 */	stw r3, 0x10(r1)
/* 80150218 0014D158  90 7E 00 10 */	stw r3, 0x10(r30)
.L_8015021C:
/* 8015021C 0014D15C  7F E3 FB 78 */	mr r3, r31
/* 80150220 0014D160  48 2D 3D AD */	bl beginFrame__7SectionFv
/* 80150224 0014D164  7F E3 FB 78 */	mr r3, r31
/* 80150228 0014D168  48 2D 3D ED */	bl beginRender__7SectionFv
/* 8015022C 0014D16C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80150230 0014D170  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80150234 0014D174  4B F0 D9 D9 */	bl drawInit__6J3DSysFv
/* 80150238 0014D178  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 8015023C 0014D17C  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 80150240 0014D180  FC 40 08 90 */	fmr f2, f1
/* 80150244 0014D184  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 80150248 0014D188  FC A0 08 90 */	fmr f5, f1
/* 8015024C 0014D18C  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 80150250 0014D190  4B F9 95 41 */	bl GXSetViewport
/* 80150254 0014D194  38 60 00 00 */	li r3, 0
/* 80150258 0014D198  38 80 00 10 */	li r4, 0x10
/* 8015025C 0014D19C  38 A0 02 60 */	li r5, 0x260
/* 80150260 0014D1A0  38 C0 01 C0 */	li r6, 0x1c0
/* 80150264 0014D1A4  4B F9 95 75 */	bl GXSetScissor
/* 80150268 0014D1A8  7F E3 FB 78 */	mr r3, r31
/* 8015026C 0014D1AC  48 2D 3D CD */	bl endRender__7SectionFv
/* 80150270 0014D1B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150274 0014D1B4  7F C5 F3 78 */	mr r5, r30
/* 80150278 0014D1B8  38 9F 00 5C */	addi r4, r31, 0x5c
/* 8015027C 0014D1BC  48 2D 2C BD */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80150280 0014D1C0  88 0D 92 BC */	lbz r0, init$4568@sda21(r13)
/* 80150284 0014D1C4  7C 00 07 75 */	extsb. r0, r0
/* 80150288 0014D1C8  40 82 00 14 */	bne .L_8015029C
/* 8015028C 0014D1CC  38 60 00 00 */	li r3, 0
/* 80150290 0014D1D0  38 00 00 01 */	li r0, 1
/* 80150294 0014D1D4  90 6D 92 B8 */	stw r3, col$4567@sda21(r13)
/* 80150298 0014D1D8  98 0D 92 BC */	stb r0, init$4568@sda21(r13)
.L_8015029C:
/* 8015029C 0014D1DC  80 8D 92 B8 */	lwz r4, col$4567@sda21(r13)
/* 801502A0 0014D1E0  7F E3 FB 78 */	mr r3, r31
/* 801502A4 0014D1E4  38 04 00 01 */	addi r0, r4, 1
/* 801502A8 0014D1E8  90 0D 92 B8 */	stw r0, col$4567@sda21(r13)
/* 801502AC 0014D1EC  48 2D 3D 45 */	bl endFrame__7SectionFv
/* 801502B0 0014D1F0  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 801502B4 0014D1F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801502B8 0014D1F8  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 801502BC 0014D1FC  38 C0 00 03 */	li r6, 3
/* 801502C0 0014D200  38 80 00 01 */	li r4, 1
/* 801502C4 0014D204  48 06 4C D1 */	bl setPause__Q24Game10GameSystemFbPci
/* 801502C8 0014D208  3C 60 80 51 */	lis r3, j3dSys@ha
/* 801502CC 0014D20C  3B C3 F2 30 */	addi r30, r3, j3dSys@l
.L_801502D0:
/* 801502D0 0014D210  7F E3 FB 78 */	mr r3, r31
/* 801502D4 0014D214  48 2D 3C F9 */	bl beginFrame__7SectionFv
/* 801502D8 0014D218  7F E3 FB 78 */	mr r3, r31
/* 801502DC 0014D21C  48 2D 3D 39 */	bl beginRender__7SectionFv
/* 801502E0 0014D220  7F C3 F3 78 */	mr r3, r30
/* 801502E4 0014D224  4B F0 D9 29 */	bl drawInit__6J3DSysFv
/* 801502E8 0014D228  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 801502EC 0014D22C  C0 62 A1 3C */	lfs f3, lbl_8051849C@sda21(r2)
/* 801502F0 0014D230  FC 40 08 90 */	fmr f2, f1
/* 801502F4 0014D234  C0 82 A1 40 */	lfs f4, lbl_805184A0@sda21(r2)
/* 801502F8 0014D238  FC A0 08 90 */	fmr f5, f1
/* 801502FC 0014D23C  C0 C2 A1 44 */	lfs f6, lbl_805184A4@sda21(r2)
/* 80150300 0014D240  4B F9 94 91 */	bl GXSetViewport
/* 80150304 0014D244  38 60 00 00 */	li r3, 0
/* 80150308 0014D248  38 80 00 10 */	li r4, 0x10
/* 8015030C 0014D24C  38 A0 02 60 */	li r5, 0x260
/* 80150310 0014D250  38 C0 01 C0 */	li r6, 0x1c0
/* 80150314 0014D254  4B F9 94 C5 */	bl GXSetScissor
/* 80150318 0014D258  7F E3 FB 78 */	mr r3, r31
/* 8015031C 0014D25C  48 2D 3D 1D */	bl endRender__7SectionFv
/* 80150320 0014D260  80 1F 00 74 */	lwz r0, 0x74(r31)
/* 80150324 0014D264  2C 00 00 02 */	cmpwi r0, 2
/* 80150328 0014D268  40 82 00 20 */	bne .L_80150348
/* 8015032C 0014D26C  3C 80 80 48 */	lis r4, lbl_8047C9C4@ha
/* 80150330 0014D270  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150334 0014D274  38 A4 C9 C4 */	addi r5, r4, lbl_8047C9C4@l
/* 80150338 0014D278  38 C0 00 03 */	li r6, 3
/* 8015033C 0014D27C  38 80 00 00 */	li r4, 0
/* 80150340 0014D280  48 06 4C 55 */	bl setPause__Q24Game10GameSystemFbPci
/* 80150344 0014D284  48 00 00 10 */	b .L_80150354
.L_80150348:
/* 80150348 0014D288  7F E3 FB 78 */	mr r3, r31
/* 8015034C 0014D28C  48 2D 3C A5 */	bl endFrame__7SectionFv
/* 80150350 0014D290  4B FF FF 80 */	b .L_801502D0
.L_80150354:
/* 80150354 0014D294  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80150358 0014D298  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8015035C 0014D29C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80150360 0014D2A0  7C 08 03 A6 */	mtlr r0
/* 80150364 0014D2A4  38 21 00 20 */	addi r1, r1, 0x20
/* 80150368 0014D2A8  4E 80 00 20 */	blr 
.endfn setupFixMemory__Q24Game15BaseGameSectionFv
.endif

.if version == 0
.fn setupFixMemory_dvdload__Q24Game15BaseGameSectionFv, global
/* 8015036C 0014D2AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80150370 0014D2B0  7C 08 02 A6 */	mflr r0
/* 80150374 0014D2B4  3C 80 80 48 */	lis r4, lbl_8047C948@ha
/* 80150378 0014D2B8  38 A0 00 00 */	li r5, 0
/* 8015037C 0014D2BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80150380 0014D2C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80150384 0014D2C4  3B E4 C9 48 */	addi r31, r4, lbl_8047C948@l
/* 80150388 0014D2C8  38 9F 02 E0 */	addi r4, r31, 0x2e0
/* 8015038C 0014D2CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80150390 0014D2D0  7C 7E 1B 78 */	mr r30, r3
/* 80150394 0014D2D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80150398 0014D2D8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8015039C 0014D2DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801503A0 0014D2E0  48 2D 2F BD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801503A4 0014D2E4  38 00 00 00 */	li r0, 0
/* 801503A8 0014D2E8  38 7F 02 F0 */	addi r3, r31, 0x2f0
/* 801503AC 0014D2EC  90 01 00 08 */	stw r0, 8(r1)
/* 801503B0 0014D2F0  38 80 00 00 */	li r4, 0
/* 801503B4 0014D2F4  38 A0 00 00 */	li r5, 0
/* 801503B8 0014D2F8  38 C0 00 00 */	li r6, 0
/* 801503BC 0014D2FC  38 E0 00 00 */	li r7, 0
/* 801503C0 0014D300  39 00 00 01 */	li r8, 1
/* 801503C4 0014D304  39 20 00 00 */	li r9, 0
/* 801503C8 0014D308  39 40 00 00 */	li r10, 0
/* 801503CC 0014D30C  4B EC ED BD */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801503D0 0014D310  7C 60 1B 78 */	mr r0, r3
/* 801503D4 0014D314  38 60 00 40 */	li r3, 0x40
/* 801503D8 0014D318  7C 1C 03 78 */	mr r28, r0
/* 801503DC 0014D31C  4B ED 3A C9 */	bl __nw__FUl
/* 801503E0 0014D320  7C 7D 1B 79 */	or. r29, r3, r3
/* 801503E4 0014D324  41 82 00 24 */	beq .L_80150408
/* 801503E8 0014D328  38 00 00 00 */	li r0, 0
/* 801503EC 0014D32C  7F 84 E3 78 */	mr r4, r28
/* 801503F0 0014D330  90 1D 00 28 */	stw r0, 0x28(r29)
/* 801503F4 0014D334  38 A0 00 00 */	li r5, 0
/* 801503F8 0014D338  4B EE 2C 8D */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 801503FC 0014D33C  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 80150400 0014D340  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 80150404 0014D344  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_80150408:
/* 80150408 0014D348  93 BE 00 F4 */	stw r29, 0x114(r30)
/* 8015040C 0014D34C  38 9F 03 04 */	addi r4, r31, 0x304
/* 80150410 0014D350  38 A0 00 00 */	li r5, 0
/* 80150414 0014D354  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150418 0014D358  48 2D 2F 45 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8015041C 0014D35C  38 60 00 40 */	li r3, 0x40
/* 80150420 0014D360  4B ED 3A 85 */	bl __nw__FUl
/* 80150424 0014D364  7C 7D 1B 79 */	or. r29, r3, r3
/* 80150428 0014D368  41 82 00 2C */	beq .L_80150454
/* 8015042C 0014D36C  48 2D 2D F9 */	bl getRenderModeObj__6SystemFv
/* 80150430 0014D370  A3 83 00 06 */	lhz r28, 6(r3)
/* 80150434 0014D374  48 2D 2D F1 */	bl getRenderModeObj__6SystemFv
/* 80150438 0014D378  A0 03 00 04 */	lhz r0, 4(r3)
/* 8015043C 0014D37C  7F A3 EB 78 */	mr r3, r29
/* 80150440 0014D380  57 85 FC 7E */	rlwinm r5, r28, 0x1f, 0x11, 0x1f
/* 80150444 0014D384  38 C0 00 04 */	li r6, 4
/* 80150448 0014D388  54 04 FC 7E */	rlwinm r4, r0, 0x1f, 0x11, 0x1f
/* 8015044C 0014D38C  4B EE 2A D1 */	bl __ct__10JUTTextureFii9_GXTexFmt
/* 80150450 0014D390  7C 7D 1B 78 */	mr r29, r3
.L_80150454:
/* 80150454 0014D394  93 BE 01 54 */	stw r29, 0x174(r30)
/* 80150458 0014D398  38 9F 03 04 */	addi r4, r31, 0x304
/* 8015045C 0014D39C  80 1E 01 54 */	lwz r0, 0x174(r30)
/* 80150460 0014D3A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150464 0014D3A4  90 03 00 54 */	stw r0, 0x54(r3)
/* 80150468 0014D3A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015046C 0014D3AC  48 2D 2E F9 */	bl heapStatusEnd__6SystemFPc
/* 80150470 0014D3B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150474 0014D3B4  38 9F 01 4C */	addi r4, r31, 0x14c
/* 80150478 0014D3B8  38 A0 00 00 */	li r5, 0
/* 8015047C 0014D3BC  48 2D 2E E1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150480 0014D3C0  48 26 AA F1 */	bl globalInstance__11ParticleMgrFv
/* 80150484 0014D3C4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80150488 0014D3C8  3C 80 00 18 */	lis r4, 0x18
/* 8015048C 0014D3CC  48 26 B0 41 */	bl createHeap__11ParticleMgrFUl
/* 80150490 0014D3D0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80150494 0014D3D4  38 9F 03 10 */	addi r4, r31, 0x310
/* 80150498 0014D3D8  38 A0 07 D0 */	li r5, 0x7d0
/* 8015049C 0014D3DC  38 C0 01 2C */	li r6, 0x12c
/* 801504A0 0014D3E0  38 E0 00 80 */	li r7, 0x80
/* 801504A4 0014D3E4  48 26 B0 99 */	bl createMgr__11ParticleMgrFPcUlUlUl
/* 801504A8 0014D3E8  80 8D 9A 18 */	lwz r4, particleMgr@sda21(r13)
/* 801504AC 0014D3EC  7F C3 F3 78 */	mr r3, r30
/* 801504B0 0014D3F0  48 01 4B 01 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801504B4 0014D3F4  48 26 8C 35 */	bl globalInstance__14TParticle2dMgrFv
/* 801504B8 0014D3F8  3C 80 00 04 */	lis r4, 0x0003E800@ha
/* 801504BC 0014D3FC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 801504C0 0014D400  38 84 E8 00 */	addi r4, r4, 0x0003E800@l
/* 801504C4 0014D404  48 26 8D 69 */	bl createHeap__14TParticle2dMgrFUl
/* 801504C8 0014D408  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 801504CC 0014D40C  38 9F 03 30 */	addi r4, r31, 0x330
/* 801504D0 0014D410  38 A0 01 D4 */	li r5, 0x1d4
/* 801504D4 0014D414  38 C0 00 28 */	li r6, 0x28
/* 801504D8 0014D418  38 E0 00 80 */	li r7, 0x80
/* 801504DC 0014D41C  48 26 8D E5 */	bl createMgr__14TParticle2dMgrFPcUlUlUl
/* 801504E0 0014D420  80 8D 9A 08 */	lwz r4, particle2dMgr@sda21(r13)
/* 801504E4 0014D424  7F C3 F3 78 */	mr r3, r30
/* 801504E8 0014D428  48 01 4A C9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801504EC 0014D42C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 801504F0 0014D430  48 26 B1 D9 */	bl beginEntryModelEffect__11ParticleMgrFv
/* 801504F4 0014D434  38 60 00 30 */	li r3, 0x30
/* 801504F8 0014D438  4B ED 39 AD */	bl __nw__FUl
/* 801504FC 0014D43C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80150500 0014D440  41 82 00 20 */	beq .L_80150520
/* 80150504 0014D444  48 2C 0E 8D */	bl __ct__5CNodeFv
/* 80150508 0014D448  3C 80 80 4B */	lis r4, __vt__15ModelEffectData@ha
/* 8015050C 0014D44C  3C 60 80 4C */	lis r3, __vt__Q23efx13OnyonSpotData@ha
/* 80150510 0014D450  38 04 0C EC */	addi r0, r4, __vt__15ModelEffectData@l
/* 80150514 0014D454  90 1D 00 00 */	stw r0, 0(r29)
/* 80150518 0014D458  38 03 EF 10 */	addi r0, r3, __vt__Q23efx13OnyonSpotData@l
/* 8015051C 0014D45C  90 1D 00 00 */	stw r0, 0(r29)
.L_80150520:
/* 80150520 0014D460  7F A3 EB 78 */	mr r3, r29
/* 80150524 0014D464  48 2E CF 79 */	bl entry__15ModelEffectDataFv
/* 80150528 0014D468  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8015052C 0014D46C  48 26 B1 C9 */	bl endEntryModelEffect__11ParticleMgrFv
/* 80150530 0014D470  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80150534 0014D474  48 26 B1 55 */	bl Instance_TPkEffectMgr__11ParticleMgrFv
/* 80150538 0014D478  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015053C 0014D47C  38 9F 01 4C */	addi r4, r31, 0x14c
/* 80150540 0014D480  48 2D 2E 25 */	bl heapStatusEnd__6SystemFPc
/* 80150544 0014D484  38 60 00 18 */	li r3, 0x18
/* 80150548 0014D488  4B ED 39 5D */	bl __nw__FUl
/* 8015054C 0014D48C  7C 60 1B 79 */	or. r0, r3, r3
/* 80150550 0014D490  41 82 00 0C */	beq .L_8015055C
/* 80150554 0014D494  48 04 62 25 */	bl __ct__Q24Game9UpdateMgrFv
/* 80150558 0014D498  7C 60 1B 78 */	mr r0, r3
.L_8015055C:
/* 8015055C 0014D49C  90 0D 93 50 */	stw r0, collisionUpdateMgr__4Game@sda21(r13)
/* 80150560 0014D4A0  7C 03 03 78 */	mr r3, r0
/* 80150564 0014D4A4  38 80 00 03 */	li r4, 3
/* 80150568 0014D4A8  48 04 62 79 */	bl create__Q24Game9UpdateMgrFi
/* 8015056C 0014D4AC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150570 0014D4B0  38 9F 03 58 */	addi r4, r31, 0x358
/* 80150574 0014D4B4  38 A0 00 00 */	li r5, 0
/* 80150578 0014D4B8  48 2D 2D E5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8015057C 0014D4BC  38 60 00 D0 */	li r3, 0xd0
/* 80150580 0014D4C0  4B ED 39 25 */	bl __nw__FUl
/* 80150584 0014D4C4  7C 64 1B 79 */	or. r4, r3, r3
/* 80150588 0014D4C8  41 82 00 0C */	beq .L_80150594
/* 8015058C 0014D4CC  48 00 8D 01 */	bl __ct__Q24Game7NaviMgrFv
/* 80150590 0014D4D0  7C 64 1B 78 */	mr r4, r3
.L_80150594:
/* 80150594 0014D4D4  28 04 00 00 */	cmplwi r4, 0
/* 80150598 0014D4D8  90 8D 92 E0 */	stw r4, naviMgr__4Game@sda21(r13)
/* 8015059C 0014D4DC  41 82 00 08 */	beq .L_801505A4
/* 801505A0 0014D4E0  38 84 00 1C */	addi r4, r4, 0x1c
.L_801505A4:
/* 801505A4 0014D4E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801505A8 0014D4E8  48 06 59 A1 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 801505AC 0014D4EC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801505B0 0014D4F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801505B4 0014D4F4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801505B8 0014D4F8  7D 89 03 A6 */	mtctr r12
/* 801505BC 0014D4FC  4E 80 04 21 */	bctrl 
/* 801505C0 0014D500  38 60 00 80 */	li r3, 0x80
/* 801505C4 0014D504  4B ED 38 E1 */	bl __nw__FUl
/* 801505C8 0014D508  7C 64 1B 79 */	or. r4, r3, r3
/* 801505CC 0014D50C  41 82 00 0C */	beq .L_801505D8
/* 801505D0 0014D510  48 00 C7 45 */	bl __ct__Q24Game7PikiMgrFv
/* 801505D4 0014D514  7C 64 1B 78 */	mr r4, r3
.L_801505D8:
/* 801505D8 0014D518  28 04 00 00 */	cmplwi r4, 0
/* 801505DC 0014D51C  90 8D 92 F4 */	stw r4, pikiMgr__4Game@sda21(r13)
/* 801505E0 0014D520  41 82 00 08 */	beq .L_801505E8
/* 801505E4 0014D524  38 84 00 1C */	addi r4, r4, 0x1c
.L_801505E8:
/* 801505E8 0014D528  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801505EC 0014D52C  48 06 59 5D */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 801505F0 0014D530  80 8D 92 F4 */	lwz r4, pikiMgr__4Game@sda21(r13)
/* 801505F4 0014D534  7F C3 F3 78 */	mr r3, r30
/* 801505F8 0014D538  48 01 49 B9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801505FC 0014D53C  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80150600 0014D540  7F C3 F3 78 */	mr r3, r30
/* 80150604 0014D544  48 01 49 AD */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150608 0014D548  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8015060C 0014D54C  80 9E 01 14 */	lwz r4, 0x134(r30)
/* 80150610 0014D550  81 83 00 00 */	lwz r12, 0(r3)
/* 80150614 0014D554  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80150618 0014D558  7D 89 03 A6 */	mtctr r12
/* 8015061C 0014D55C  4E 80 04 21 */	bctrl 
/* 80150620 0014D560  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150624 0014D564  38 9F 03 58 */	addi r4, r31, 0x358
/* 80150628 0014D568  48 2D 2D 3D */	bl heapStatusEnd__6SystemFPc
/* 8015062C 0014D56C  38 60 00 40 */	li r3, 0x40
/* 80150630 0014D570  4B ED 38 75 */	bl __nw__FUl
/* 80150634 0014D574  7C 60 1B 79 */	or. r0, r3, r3
/* 80150638 0014D578  41 82 00 0C */	beq .L_80150644
/* 8015063C 0014D57C  48 01 C8 21 */	bl __ct__Q24Game9PelletMgrFv
/* 80150640 0014D580  7C 60 1B 78 */	mr r0, r3
.L_80150644:
/* 80150644 0014D584  90 0D 93 20 */	stw r0, pelletMgr__4Game@sda21(r13)
/* 80150648 0014D588  7C 03 03 78 */	mr r3, r0
/* 8015064C 0014D58C  38 80 00 00 */	li r4, 0
/* 80150650 0014D590  48 01 CA F9 */	bl createManagers__Q24Game9PelletMgrFUl
/* 80150654 0014D594  80 8D 93 20 */	lwz r4, pelletMgr__4Game@sda21(r13)
/* 80150658 0014D598  28 04 00 00 */	cmplwi r4, 0
/* 8015065C 0014D59C  41 82 00 08 */	beq .L_80150664
/* 80150660 0014D5A0  38 84 00 1C */	addi r4, r4, 0x1c
.L_80150664:
/* 80150664 0014D5A4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150668 0014D5A8  48 06 58 E1 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8015066C 0014D5AC  7F C3 F3 78 */	mr r3, r30
/* 80150670 0014D5B0  48 01 49 35 */	bl createScreenRootNode__Q24Game14BaseHIOSectionFv
/* 80150674 0014D5B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150678 0014D5B8  38 9F 02 E0 */	addi r4, r31, 0x2e0
/* 8015067C 0014D5BC  48 2D 2C E9 */	bl heapStatusEnd__6SystemFPc
/* 80150680 0014D5C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80150684 0014D5C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80150688 0014D5C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8015068C 0014D5CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80150690 0014D5D0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80150694 0014D5D4  7C 08 03 A6 */	mtlr r0
/* 80150698 0014D5D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8015069C 0014D5DC  4E 80 00 20 */	blr 
.endfn setupFixMemory_dvdload__Q24Game15BaseGameSectionFv
.else
.fn setupFixMemory_dvdload__Q24Game15BaseGameSectionFv, global
/* 8015036C 0014D2AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80150370 0014D2B0  7C 08 02 A6 */	mflr r0
/* 80150374 0014D2B4  3C 80 80 48 */	lis r4, lbl_8047C948@ha
/* 80150378 0014D2B8  38 A0 00 00 */	li r5, 0
/* 8015037C 0014D2BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80150380 0014D2C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80150384 0014D2C4  3B E4 C9 48 */	addi r31, r4, lbl_8047C948@l
/* 80150388 0014D2C8  38 9F 02 E0 */	addi r4, r31, 0x2e0
/* 8015038C 0014D2CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80150390 0014D2D0  7C 7E 1B 78 */	mr r30, r3
/* 80150394 0014D2D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80150398 0014D2D8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8015039C 0014D2DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801503A0 0014D2E0  48 2D 2F BD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801503A4 0014D2E4  38 00 00 00 */	li r0, 0
/* 801503A8 0014D2E8  38 7F 02 F0 */	addi r3, r31, 0x2f0
/* 801503AC 0014D2EC  90 01 00 08 */	stw r0, 8(r1)
/* 801503B0 0014D2F0  38 80 00 00 */	li r4, 0
/* 801503B4 0014D2F4  38 A0 00 00 */	li r5, 0
/* 801503B8 0014D2F8  38 C0 00 00 */	li r6, 0
/* 801503BC 0014D2FC  38 E0 00 00 */	li r7, 0
/* 801503C0 0014D300  39 00 00 01 */	li r8, 1
/* 801503C4 0014D304  39 20 00 00 */	li r9, 0
/* 801503C8 0014D308  39 40 00 00 */	li r10, 0
/* 801503CC 0014D30C  4B EC ED BD */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801503D0 0014D310  7C 60 1B 78 */	mr r0, r3
/* 801503D4 0014D314  38 60 00 40 */	li r3, 0x40
/* 801503D8 0014D318  7C 1C 03 78 */	mr r28, r0
/* 801503DC 0014D31C  4B ED 3A C9 */	bl __nw__FUl
/* 801503E0 0014D320  7C 7D 1B 79 */	or. r29, r3, r3
/* 801503E4 0014D324  41 82 00 24 */	beq .L_80150408
/* 801503E8 0014D328  38 00 00 00 */	li r0, 0
/* 801503EC 0014D32C  7F 84 E3 78 */	mr r4, r28
/* 801503F0 0014D330  90 1D 00 28 */	stw r0, 0x28(r29)
/* 801503F4 0014D334  38 A0 00 00 */	li r5, 0
/* 801503F8 0014D338  4B EE 2C 8D */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 801503FC 0014D33C  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 80150400 0014D340  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 80150404 0014D344  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_80150408:
/* 80150408 0014D348  93 BE 00 F4 */	stw r29, 0xf4(r30)
/* 8015040C 0014D34C  38 9F 03 04 */	addi r4, r31, 0x304
/* 80150410 0014D350  38 A0 00 00 */	li r5, 0
/* 80150414 0014D354  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150418 0014D358  48 2D 2F 45 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8015041C 0014D35C  38 60 00 40 */	li r3, 0x40
/* 80150420 0014D360  4B ED 3A 85 */	bl __nw__FUl
/* 80150424 0014D364  7C 7D 1B 79 */	or. r29, r3, r3
/* 80150428 0014D368  41 82 00 2C */	beq .L_80150454
/* 8015042C 0014D36C  48 2D 2D F9 */	bl getRenderModeObj__6SystemFv
/* 80150430 0014D370  A3 83 00 06 */	lhz r28, 6(r3)
/* 80150434 0014D374  48 2D 2D F1 */	bl getRenderModeObj__6SystemFv
/* 80150438 0014D378  A0 03 00 04 */	lhz r0, 4(r3)
/* 8015043C 0014D37C  7F A3 EB 78 */	mr r3, r29
/* 80150440 0014D380  57 85 FC 7E */	rlwinm r5, r28, 0x1f, 0x11, 0x1f
/* 80150444 0014D384  38 C0 00 04 */	li r6, 4
/* 80150448 0014D388  54 04 FC 7E */	rlwinm r4, r0, 0x1f, 0x11, 0x1f
/* 8015044C 0014D38C  4B EE 2A D1 */	bl __ct__10JUTTextureFii9_GXTexFmt
/* 80150450 0014D390  7C 7D 1B 78 */	mr r29, r3
.L_80150454:
/* 80150454 0014D394  93 BE 01 54 */	stw r29, 0x154(r30)
/* 80150458 0014D398  38 9F 03 04 */	addi r4, r31, 0x304
/* 8015045C 0014D39C  80 1E 01 54 */	lwz r0, 0x154(r30)
/* 80150460 0014D3A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150464 0014D3A4  90 03 00 54 */	stw r0, 0x54(r3)
/* 80150468 0014D3A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015046C 0014D3AC  48 2D 2E F9 */	bl heapStatusEnd__6SystemFPc
/* 80150470 0014D3B0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150474 0014D3B4  38 9F 01 4C */	addi r4, r31, 0x14c
/* 80150478 0014D3B8  38 A0 00 00 */	li r5, 0
/* 8015047C 0014D3BC  48 2D 2E E1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150480 0014D3C0  48 26 AA F1 */	bl globalInstance__11ParticleMgrFv
/* 80150484 0014D3C4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80150488 0014D3C8  3C 80 00 18 */	lis r4, 0x18
/* 8015048C 0014D3CC  48 26 B0 41 */	bl createHeap__11ParticleMgrFUl
/* 80150490 0014D3D0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80150494 0014D3D4  38 9F 03 10 */	addi r4, r31, 0x310
/* 80150498 0014D3D8  38 A0 07 D0 */	li r5, 0x7d0
/* 8015049C 0014D3DC  38 C0 01 2C */	li r6, 0x12c
/* 801504A0 0014D3E0  38 E0 00 80 */	li r7, 0x80
/* 801504A4 0014D3E4  48 26 B0 99 */	bl createMgr__11ParticleMgrFPcUlUlUl
/* 801504A8 0014D3E8  80 8D 9A 18 */	lwz r4, particleMgr@sda21(r13)
/* 801504AC 0014D3EC  7F C3 F3 78 */	mr r3, r30
/* 801504B0 0014D3F0  48 01 4B 01 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801504B4 0014D3F4  48 26 8C 35 */	bl globalInstance__14TParticle2dMgrFv
/* 801504B8 0014D3F8  3C 80 00 04 */	lis r4, 0x0003E800@ha
/* 801504BC 0014D3FC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 801504C0 0014D400  38 84 E8 00 */	addi r4, r4, 0x0003E800@l
/* 801504C4 0014D404  48 26 8D 69 */	bl createHeap__14TParticle2dMgrFUl
/* 801504C8 0014D408  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 801504CC 0014D40C  38 9F 03 30 */	addi r4, r31, 0x330
/* 801504D0 0014D410  38 A0 01 D4 */	li r5, 0x1d4
/* 801504D4 0014D414  38 C0 00 28 */	li r6, 0x28
/* 801504D8 0014D418  38 E0 00 80 */	li r7, 0x80
/* 801504DC 0014D41C  48 26 8D E5 */	bl createMgr__14TParticle2dMgrFPcUlUlUl
/* 801504E0 0014D420  80 8D 9A 08 */	lwz r4, particle2dMgr@sda21(r13)
/* 801504E4 0014D424  7F C3 F3 78 */	mr r3, r30
/* 801504E8 0014D428  48 01 4A C9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801504EC 0014D42C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 801504F0 0014D430  48 26 B1 D9 */	bl beginEntryModelEffect__11ParticleMgrFv
/* 801504F4 0014D434  38 60 00 30 */	li r3, 0x30
/* 801504F8 0014D438  4B ED 39 AD */	bl __nw__FUl
/* 801504FC 0014D43C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80150500 0014D440  41 82 00 20 */	beq .L_80150520
/* 80150504 0014D444  48 2C 0E 8D */	bl __ct__5CNodeFv
/* 80150508 0014D448  3C 80 80 4B */	lis r4, __vt__15ModelEffectData@ha
/* 8015050C 0014D44C  3C 60 80 4C */	lis r3, __vt__Q23efx13OnyonSpotData@ha
/* 80150510 0014D450  38 04 0C EC */	addi r0, r4, __vt__15ModelEffectData@l
/* 80150514 0014D454  90 1D 00 00 */	stw r0, 0(r29)
/* 80150518 0014D458  38 03 EF 10 */	addi r0, r3, __vt__Q23efx13OnyonSpotData@l
/* 8015051C 0014D45C  90 1D 00 00 */	stw r0, 0(r29)
.L_80150520:
/* 80150520 0014D460  7F A3 EB 78 */	mr r3, r29
/* 80150524 0014D464  48 2E CF 79 */	bl entry__15ModelEffectDataFv
/* 80150528 0014D468  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8015052C 0014D46C  48 26 B1 C9 */	bl endEntryModelEffect__11ParticleMgrFv
/* 80150530 0014D470  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 80150534 0014D474  48 26 B1 55 */	bl Instance_TPkEffectMgr__11ParticleMgrFv
/* 80150538 0014D478  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015053C 0014D47C  38 9F 01 4C */	addi r4, r31, 0x14c
/* 80150540 0014D480  48 2D 2E 25 */	bl heapStatusEnd__6SystemFPc
/* 80150544 0014D484  38 60 00 18 */	li r3, 0x18
/* 80150548 0014D488  4B ED 39 5D */	bl __nw__FUl
/* 8015054C 0014D48C  7C 60 1B 79 */	or. r0, r3, r3
/* 80150550 0014D490  41 82 00 0C */	beq .L_8015055C
/* 80150554 0014D494  48 04 62 25 */	bl __ct__Q24Game9UpdateMgrFv
/* 80150558 0014D498  7C 60 1B 78 */	mr r0, r3
.L_8015055C:
/* 8015055C 0014D49C  90 0D 93 50 */	stw r0, collisionUpdateMgr__4Game@sda21(r13)
/* 80150560 0014D4A0  7C 03 03 78 */	mr r3, r0
/* 80150564 0014D4A4  38 80 00 03 */	li r4, 3
/* 80150568 0014D4A8  48 04 62 79 */	bl create__Q24Game9UpdateMgrFi
/* 8015056C 0014D4AC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150570 0014D4B0  38 9F 03 58 */	addi r4, r31, 0x358
/* 80150574 0014D4B4  38 A0 00 00 */	li r5, 0
/* 80150578 0014D4B8  48 2D 2D E5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8015057C 0014D4BC  38 60 00 D0 */	li r3, 0xd0
/* 80150580 0014D4C0  4B ED 39 25 */	bl __nw__FUl
/* 80150584 0014D4C4  7C 64 1B 79 */	or. r4, r3, r3
/* 80150588 0014D4C8  41 82 00 0C */	beq .L_80150594
/* 8015058C 0014D4CC  48 00 8D 01 */	bl __ct__Q24Game7NaviMgrFv
/* 80150590 0014D4D0  7C 64 1B 78 */	mr r4, r3
.L_80150594:
/* 80150594 0014D4D4  28 04 00 00 */	cmplwi r4, 0
/* 80150598 0014D4D8  90 8D 92 E0 */	stw r4, naviMgr__4Game@sda21(r13)
/* 8015059C 0014D4DC  41 82 00 08 */	beq .L_801505A4
/* 801505A0 0014D4E0  38 84 00 1C */	addi r4, r4, 0x1c
.L_801505A4:
/* 801505A4 0014D4E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801505A8 0014D4E8  48 06 59 A1 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 801505AC 0014D4EC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801505B0 0014D4F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801505B4 0014D4F4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801505B8 0014D4F8  7D 89 03 A6 */	mtctr r12
/* 801505BC 0014D4FC  4E 80 04 21 */	bctrl 
/* 801505C0 0014D500  38 60 00 80 */	li r3, 0x80
/* 801505C4 0014D504  4B ED 38 E1 */	bl __nw__FUl
/* 801505C8 0014D508  7C 64 1B 79 */	or. r4, r3, r3
/* 801505CC 0014D50C  41 82 00 0C */	beq .L_801505D8
/* 801505D0 0014D510  48 00 C7 45 */	bl __ct__Q24Game7PikiMgrFv
/* 801505D4 0014D514  7C 64 1B 78 */	mr r4, r3
.L_801505D8:
/* 801505D8 0014D518  28 04 00 00 */	cmplwi r4, 0
/* 801505DC 0014D51C  90 8D 92 F4 */	stw r4, pikiMgr__4Game@sda21(r13)
/* 801505E0 0014D520  41 82 00 08 */	beq .L_801505E8
/* 801505E4 0014D524  38 84 00 1C */	addi r4, r4, 0x1c
.L_801505E8:
/* 801505E8 0014D528  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801505EC 0014D52C  48 06 59 5D */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 801505F0 0014D530  80 8D 92 F4 */	lwz r4, pikiMgr__4Game@sda21(r13)
/* 801505F4 0014D534  7F C3 F3 78 */	mr r3, r30
/* 801505F8 0014D538  48 01 49 B9 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801505FC 0014D53C  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 80150600 0014D540  7F C3 F3 78 */	mr r3, r30
/* 80150604 0014D544  48 01 49 AD */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150608 0014D548  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8015060C 0014D54C  80 9E 01 14 */	lwz r4, 0x114(r30)
/* 80150610 0014D550  81 83 00 00 */	lwz r12, 0(r3)
/* 80150614 0014D554  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80150618 0014D558  7D 89 03 A6 */	mtctr r12
/* 8015061C 0014D55C  4E 80 04 21 */	bctrl 
/* 80150620 0014D560  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150624 0014D564  38 9F 03 58 */	addi r4, r31, 0x358
/* 80150628 0014D568  48 2D 2D 3D */	bl heapStatusEnd__6SystemFPc
/* 8015062C 0014D56C  38 60 00 40 */	li r3, 0x40
/* 80150630 0014D570  4B ED 38 75 */	bl __nw__FUl
/* 80150634 0014D574  7C 60 1B 79 */	or. r0, r3, r3
/* 80150638 0014D578  41 82 00 0C */	beq .L_80150644
/* 8015063C 0014D57C  48 01 C8 21 */	bl __ct__Q24Game9PelletMgrFv
/* 80150640 0014D580  7C 60 1B 78 */	mr r0, r3
.L_80150644:
/* 80150644 0014D584  90 0D 93 20 */	stw r0, pelletMgr__4Game@sda21(r13)
/* 80150648 0014D588  7C 03 03 78 */	mr r3, r0
/* 8015064C 0014D58C  38 80 00 00 */	li r4, 0
/* 80150650 0014D590  48 01 CA F9 */	bl createManagers__Q24Game9PelletMgrFUl
/* 80150654 0014D594  80 8D 93 20 */	lwz r4, pelletMgr__4Game@sda21(r13)
/* 80150658 0014D598  28 04 00 00 */	cmplwi r4, 0
/* 8015065C 0014D59C  41 82 00 08 */	beq .L_80150664
/* 80150660 0014D5A0  38 84 00 1C */	addi r4, r4, 0x1c
.L_80150664:
/* 80150664 0014D5A4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150668 0014D5A8  48 06 58 E1 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 8015066C 0014D5AC  7F C3 F3 78 */	mr r3, r30
/* 80150670 0014D5B0  48 01 49 35 */	bl createScreenRootNode__Q24Game14BaseHIOSectionFv
/* 80150674 0014D5B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150678 0014D5B8  38 9F 02 E0 */	addi r4, r31, 0x2e0
/* 8015067C 0014D5BC  48 2D 2C E9 */	bl heapStatusEnd__6SystemFPc
/* 80150680 0014D5C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80150684 0014D5C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80150688 0014D5C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8015068C 0014D5CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80150690 0014D5D0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80150694 0014D5D4  7C 08 03 A6 */	mtlr r0
/* 80150698 0014D5D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8015069C 0014D5DC  4E 80 00 20 */	blr 
.endfn setupFixMemory_dvdload__Q24Game15BaseGameSectionFv
.endif

.fn __dt__15ModelEffectDataFv, weak
/* 801506A0 0014D5E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801506A4 0014D5E4  7C 08 02 A6 */	mflr r0
/* 801506A8 0014D5E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801506AC 0014D5EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801506B0 0014D5F0  7C 9F 23 78 */	mr r31, r4
/* 801506B4 0014D5F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801506B8 0014D5F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801506BC 0014D5FC  41 82 00 28 */	beq .L_801506E4
/* 801506C0 0014D600  3C A0 80 4B */	lis r5, __vt__15ModelEffectData@ha
/* 801506C4 0014D604  38 80 00 00 */	li r4, 0
/* 801506C8 0014D608  38 05 0C EC */	addi r0, r5, __vt__15ModelEffectData@l
/* 801506CC 0014D60C  90 1E 00 00 */	stw r0, 0(r30)
/* 801506D0 0014D610  48 2C 0E B9 */	bl __dt__5CNodeFv
/* 801506D4 0014D614  7F E0 07 35 */	extsh. r0, r31
/* 801506D8 0014D618  40 81 00 0C */	ble .L_801506E4
/* 801506DC 0014D61C  7F C3 F3 78 */	mr r3, r30
/* 801506E0 0014D620  4B ED 39 D5 */	bl __dl__FPv
.L_801506E4:
/* 801506E4 0014D624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801506E8 0014D628  7F C3 F3 78 */	mr r3, r30
/* 801506EC 0014D62C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801506F0 0014D630  83 C1 00 08 */	lwz r30, 8(r1)
/* 801506F4 0014D634  7C 08 03 A6 */	mtlr r0
/* 801506F8 0014D638  38 21 00 10 */	addi r1, r1, 0x10
/* 801506FC 0014D63C  4E 80 00 20 */	blr 
.endfn __dt__15ModelEffectDataFv

.fn enableAllocHalt__Q24Game15BaseGameSectionFv, global
/* 80150700 0014D640  38 60 00 00 */	li r3, 0
/* 80150704 0014D644  4E 80 00 20 */	blr 
.endfn enableAllocHalt__Q24Game15BaseGameSectionFv

.fn disableAllocHalt__Q24Game15BaseGameSectionFv, global
/* 80150708 0014D648  38 60 00 00 */	li r3, 0
/* 8015070C 0014D64C  4E 80 00 20 */	blr 
.endfn disableAllocHalt__Q24Game15BaseGameSectionFv

.if version == 0
.fn setupFloatMemory__Q24Game15BaseGameSectionFv, global
/* 80150710 0014D650  94 21 FD 40 */	stwu r1, -0x2c0(r1)
/* 80150714 0014D654  7C 08 02 A6 */	mflr r0
/* 80150718 0014D658  90 01 02 C4 */	stw r0, 0x2c4(r1)
/* 8015071C 0014D65C  DB E1 02 B0 */	stfd f31, 0x2b0(r1)
/* 80150720 0014D660  F3 E1 02 B8 */	psq_st f31, 696(r1), 0, qr0
/* 80150724 0014D664  BF 61 02 9C */	stmw r27, 0x29c(r1)
/* 80150728 0014D668  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8015072C 0014D66C  3C A0 80 48 */	lis r5, lbl_8047C948@ha
/* 80150730 0014D670  7C 7F 1B 78 */	mr r31, r3
/* 80150734 0014D674  3B A0 00 00 */	li r29, 0
/* 80150738 0014D678  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8015073C 0014D67C  3B C5 C9 48 */	addi r30, r5, lbl_8047C948@l
/* 80150740 0014D680  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 80150744 0014D684  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80150748 0014D688  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8015074C 0014D68C  28 00 00 00 */	cmplwi r0, 0
/* 80150750 0014D690  41 82 00 18 */	beq .L_80150768
/* 80150754 0014D694  38 7E 03 80 */	addi r3, r30, 0x380
/* 80150758 0014D698  38 BE 00 70 */	addi r5, r30, 0x70
/* 8015075C 0014D69C  38 80 00 76 */	li r4, 0x76
/* 80150760 0014D6A0  4C C6 31 82 */	crclr 6
/* 80150764 0014D6A4  4B ED 9E DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80150768:
/* 80150768 0014D6A8  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8015076C 0014D6AC  28 00 00 00 */	cmplwi r0, 0
/* 80150770 0014D6B0  40 82 00 6C */	bne .L_801507DC
/* 80150774 0014D6B4  38 60 00 30 */	li r3, 0x30
/* 80150778 0014D6B8  4B ED 37 2D */	bl __nw__FUl
/* 8015077C 0014D6BC  7C 65 1B 79 */	or. r5, r3, r3
/* 80150780 0014D6C0  41 82 00 58 */	beq .L_801507D8
/* 80150784 0014D6C4  7C BB 2B 78 */	mr r27, r5
/* 80150788 0014D6C8  4B ED 61 49 */	bl initiate__10JSUPtrListFv
/* 8015078C 0014D6CC  3C 60 80 4B */	lis r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
/* 80150790 0014D6D0  34 9B 00 0C */	addic. r4, r27, 0xc
/* 80150794 0014D6D4  38 03 0C E0 */	addi r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
/* 80150798 0014D6D8  90 1B 00 0C */	stw r0, 0xc(r27)
/* 8015079C 0014D6DC  41 82 00 08 */	beq .L_801507A4
/* 801507A0 0014D6E0  38 84 FF F4 */	addi r4, r4, -12
.L_801507A4:
/* 801507A4 0014D6E4  90 8D 91 BC */	stw r4, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 801507A8 0014D6E8  38 7B 00 10 */	addi r3, r27, 0x10
/* 801507AC 0014D6EC  4B EC C8 21 */	bl __ct__11JKRDisposerFv
/* 801507B0 0014D6F0  3C 60 80 4F */	lis r3, __vt__Q23PSM6ObjMgr@ha
/* 801507B4 0014D6F4  38 00 00 00 */	li r0, 0
/* 801507B8 0014D6F8  38 63 F2 0C */	addi r3, r3, __vt__Q23PSM6ObjMgr@l
/* 801507BC 0014D6FC  7F 65 DB 78 */	mr r5, r27
/* 801507C0 0014D700  90 7B 00 28 */	stw r3, 0x28(r27)
/* 801507C4 0014D704  38 83 00 08 */	addi r4, r3, 8
/* 801507C8 0014D708  38 63 00 14 */	addi r3, r3, 0x14
/* 801507CC 0014D70C  90 9B 00 0C */	stw r4, 0xc(r27)
/* 801507D0 0014D710  90 7B 00 10 */	stw r3, 0x10(r27)
/* 801507D4 0014D714  90 1B 00 2C */	stw r0, 0x2c(r27)
.L_801507D8:
/* 801507D8 0014D718  90 AD 91 BC */	stw r5, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
.L_801507DC:
/* 801507DC 0014D71C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 801507E0 0014D720  28 00 00 00 */	cmplwi r0, 0
/* 801507E4 0014D724  40 82 00 18 */	bne .L_801507FC
/* 801507E8 0014D728  38 7E 03 80 */	addi r3, r30, 0x380
/* 801507EC 0014D72C  38 BE 00 70 */	addi r5, r30, 0x70
/* 801507F0 0014D730  38 80 00 79 */	li r4, 0x79
/* 801507F4 0014D734  4C C6 31 82 */	crclr 6
/* 801507F8 0014D738  4B ED 9E 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801507FC:
/* 801507FC 0014D73C  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80150800 0014D740  28 00 00 00 */	cmplwi r0, 0
/* 80150804 0014D744  41 82 00 18 */	beq .L_8015081C
/* 80150808 0014D748  38 7E 03 80 */	addi r3, r30, 0x380
/* 8015080C 0014D74C  38 BE 00 70 */	addi r5, r30, 0x70
/* 80150810 0014D750  38 80 00 76 */	li r4, 0x76
/* 80150814 0014D754  4C C6 31 82 */	crclr 6
/* 80150818 0014D758  4B ED 9E 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015081C:
/* 8015081C 0014D75C  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80150820 0014D760  28 00 00 00 */	cmplwi r0, 0
/* 80150824 0014D764  40 82 00 20 */	bne .L_80150844
/* 80150828 0014D768  38 60 00 3C */	li r3, 0x3c
/* 8015082C 0014D76C  4B ED 36 79 */	bl __nw__FUl
/* 80150830 0014D770  7C 60 1B 79 */	or. r0, r3, r3
/* 80150834 0014D774  41 82 00 0C */	beq .L_80150840
/* 80150838 0014D778  48 31 C0 95 */	bl __ct__Q33PSM12BossBgmFader3MgrFv
/* 8015083C 0014D77C  7C 60 1B 78 */	mr r0, r3
.L_80150840:
/* 80150840 0014D780  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
.L_80150844:
/* 80150844 0014D784  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80150848 0014D788  28 00 00 00 */	cmplwi r0, 0
/* 8015084C 0014D78C  40 82 00 18 */	bne .L_80150864
/* 80150850 0014D790  38 7E 03 80 */	addi r3, r30, 0x380
/* 80150854 0014D794  38 BE 00 70 */	addi r5, r30, 0x70
/* 80150858 0014D798  38 80 00 79 */	li r4, 0x79
/* 8015085C 0014D79C  4C C6 31 82 */	crclr 6
/* 80150860 0014D7A0  4B ED 9D E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80150864:
/* 80150864 0014D7A4  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80150868 0014D7A8  7F 83 E3 78 */	mr r3, r28
/* 8015086C 0014D7AC  4B ED 2F 49 */	bl getFreeSize__7JKRHeapFv
/* 80150870 0014D7B0  7F 84 E3 78 */	mr r4, r28
/* 80150874 0014D7B4  38 A0 00 01 */	li r5, 1
/* 80150878 0014D7B8  4B EC F6 51 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 8015087C 0014D7BC  90 7F 00 FC */	stw r3, 0x11c(r31)
/* 80150880 0014D7C0  80 1F 00 FC */	lwz r0, 0x11c(r31)
/* 80150884 0014D7C4  90 0D 92 B4 */	stw r0, theExpHeap@sda21(r13)
/* 80150888 0014D7C8  80 7F 00 FC */	lwz r3, 0x11c(r31)
/* 8015088C 0014D7CC  4B ED 2D 19 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80150890 0014D7D0  90 7F 01 00 */	stw r3, 0x120(r31)
/* 80150894 0014D7D4  7F E3 FB 78 */	mr r3, r31
/* 80150898 0014D7D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8015089C 0014D7DC  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 801508A0 0014D7E0  7D 89 03 A6 */	mtctr r12
/* 801508A4 0014D7E4  4E 80 04 21 */	bctrl 
/* 801508A8 0014D7E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801508AC 0014D7EC  38 9E 03 8C */	addi r4, r30, 0x38c
/* 801508B0 0014D7F0  38 A0 00 00 */	li r5, 0
/* 801508B4 0014D7F4  48 2D 2A A9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801508B8 0014D7F8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801508BC 0014D7FC  48 00 A7 D5 */	bl loadResources_float__Q24Game7NaviMgrFv
/* 801508C0 0014D800  38 60 00 94 */	li r3, 0x94
/* 801508C4 0014D804  4B ED 35 E1 */	bl __nw__FUl
/* 801508C8 0014D808  7C 60 1B 79 */	or. r0, r3, r3
/* 801508CC 0014D80C  41 82 00 0C */	beq .L_801508D8
/* 801508D0 0014D810  4B FC 9F 01 */	bl __ct__12LifeGaugeMgrFv
/* 801508D4 0014D814  7C 60 1B 78 */	mr r0, r3
.L_801508D8:
/* 801508D8 0014D818  90 0D 92 08 */	stw r0, lifeGaugeMgr@sda21(r13)
/* 801508DC 0014D81C  7C 03 03 78 */	mr r3, r0
/* 801508E0 0014D820  4B FC A6 31 */	bl loadResource__12LifeGaugeMgrFv
/* 801508E4 0014D824  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801508E8 0014D828  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801508EC 0014D82C  2C 00 00 00 */	cmpwi r0, 0
/* 801508F0 0014D830  40 82 00 28 */	bne .L_80150918
/* 801508F4 0014D834  38 60 00 EC */	li r3, 0xec
/* 801508F8 0014D838  4B ED 35 AD */	bl __nw__FUl
/* 801508FC 0014D83C  7C 60 1B 79 */	or. r0, r3, r3
/* 80150900 0014D840  41 82 00 10 */	beq .L_80150910
/* 80150904 0014D844  38 80 00 30 */	li r4, 0x30
/* 80150908 0014D848  4B FC B3 8D */	bl __ct__12CarryInfoMgrFi
/* 8015090C 0014D84C  7C 60 1B 78 */	mr r0, r3
.L_80150910:
/* 80150910 0014D850  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
/* 80150914 0014D854  48 00 00 24 */	b .L_80150938
.L_80150918:
/* 80150918 0014D858  38 60 00 EC */	li r3, 0xec
/* 8015091C 0014D85C  4B ED 35 89 */	bl __nw__FUl
/* 80150920 0014D860  7C 60 1B 79 */	or. r0, r3, r3
/* 80150924 0014D864  41 82 00 10 */	beq .L_80150934
/* 80150928 0014D868  38 80 00 40 */	li r4, 0x40
/* 8015092C 0014D86C  4B FC B3 69 */	bl __ct__12CarryInfoMgrFi
/* 80150930 0014D870  7C 60 1B 78 */	mr r0, r3
.L_80150934:
/* 80150934 0014D874  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
.L_80150938:
/* 80150938 0014D878  80 6D 92 18 */	lwz r3, carryInfoMgr@sda21(r13)
/* 8015093C 0014D87C  81 83 00 00 */	lwz r12, 0(r3)
/* 80150940 0014D880  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80150944 0014D884  7D 89 03 A6 */	mtctr r12
/* 80150948 0014D888  4E 80 04 21 */	bctrl 
/* 8015094C 0014D88C  38 60 00 3C */	li r3, 0x3c
/* 80150950 0014D890  4B ED 35 55 */	bl __nw__FUl
/* 80150954 0014D894  7C 60 1B 79 */	or. r0, r3, r3
/* 80150958 0014D898  41 82 00 0C */	beq .L_80150964
/* 8015095C 0014D89C  48 07 4C 8D */	bl __ct__Q24Game7PlatMgrFv
/* 80150960 0014D8A0  7C 60 1B 78 */	mr r0, r3
.L_80150964:
/* 80150964 0014D8A4  90 0D 94 20 */	stw r0, platMgr__4Game@sda21(r13)
/* 80150968 0014D8A8  38 60 00 50 */	li r3, 0x50
/* 8015096C 0014D8AC  4B ED 35 39 */	bl __nw__FUl
/* 80150970 0014D8B0  7C 64 1B 79 */	or. r4, r3, r3
/* 80150974 0014D8B4  41 82 00 10 */	beq .L_80150984
/* 80150978 0014D8B8  38 80 00 02 */	li r4, 2
/* 8015097C 0014D8BC  48 0F 0A 49 */	bl __ct__Q24Game9ShadowMgrFi
/* 80150980 0014D8C0  7C 64 1B 78 */	mr r4, r3
.L_80150984:
/* 80150984 0014D8C4  90 8D 96 80 */	stw r4, shadowMgr__4Game@sda21(r13)
/* 80150988 0014D8C8  7F E3 FB 78 */	mr r3, r31
/* 8015098C 0014D8CC  48 01 46 25 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150990 0014D8D0  7F E3 FB 78 */	mr r3, r31
/* 80150994 0014D8D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150998 0014D8D8  81 8C 01 08 */	lwz r12, 0x108(r12)
/* 8015099C 0014D8DC  7D 89 03 A6 */	mtctr r12
/* 801509A0 0014D8E0  4E 80 04 21 */	bctrl 
/* 801509A4 0014D8E4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801509A8 0014D8E8  38 80 00 02 */	li r4, 2
/* 801509AC 0014D8EC  48 00 13 89 */	bl "alloc__27MonoObjectMgr<Q24Game4Navi>Fi"
/* 801509B0 0014D8F0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801509B4 0014D8F4  38 80 00 00 */	li r4, 0
/* 801509B8 0014D8F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801509BC 0014D8FC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801509C0 0014D900  7D 89 03 A6 */	mtctr r12
/* 801509C4 0014D904  4E 80 04 21 */	bctrl 
/* 801509C8 0014D908  7C 60 1B 78 */	mr r0, r3
/* 801509CC 0014D90C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801509D0 0014D910  7C 1C 03 78 */	mr r28, r0
/* 801509D4 0014D914  38 80 00 01 */	li r4, 1
/* 801509D8 0014D918  81 83 00 00 */	lwz r12, 0(r3)
/* 801509DC 0014D91C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801509E0 0014D920  7D 89 03 A6 */	mtctr r12
/* 801509E4 0014D924  4E 80 04 21 */	bctrl 
/* 801509E8 0014D928  7C 60 1B 78 */	mr r0, r3
/* 801509EC 0014D92C  38 60 00 B0 */	li r3, 0xb0
/* 801509F0 0014D930  7C 1B 03 78 */	mr r27, r0
/* 801509F4 0014D934  4B ED 34 B1 */	bl __nw__FUl
/* 801509F8 0014D938  7C 60 1B 79 */	or. r0, r3, r3
/* 801509FC 0014D93C  41 82 00 10 */	beq .L_80150A0C
/* 80150A00 0014D940  38 80 00 00 */	li r4, 0
/* 80150A04 0014D944  48 2D 44 51 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80150A08 0014D948  7C 60 1B 78 */	mr r0, r3
.L_80150A0C:
/* 80150A0C 0014D94C  90 1F 01 0C */	stw r0, 0x12c(r31)
/* 80150A10 0014D950  38 60 00 B0 */	li r3, 0xb0
/* 80150A14 0014D954  4B ED 34 91 */	bl __nw__FUl
/* 80150A18 0014D958  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A1C 0014D95C  41 82 00 10 */	beq .L_80150A2C
/* 80150A20 0014D960  38 80 00 01 */	li r4, 1
/* 80150A24 0014D964  48 2D 44 31 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80150A28 0014D968  7C 60 1B 78 */	mr r0, r3
.L_80150A2C:
/* 80150A2C 0014D96C  90 1F 01 10 */	stw r0, 0x130(r31)
/* 80150A30 0014D970  38 60 02 54 */	li r3, 0x254
/* 80150A34 0014D974  4B ED 34 71 */	bl __nw__FUl
/* 80150A38 0014D978  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A3C 0014D97C  41 82 00 10 */	beq .L_80150A4C
/* 80150A40 0014D980  7F 84 E3 78 */	mr r4, r28
/* 80150A44 0014D984  48 0E E9 AD */	bl __ct__Q24Game10PlayCameraFPQ24Game4Navi
/* 80150A48 0014D988  7C 60 1B 78 */	mr r0, r3
.L_80150A4C:
/* 80150A4C 0014D98C  90 1F 01 04 */	stw r0, 0x124(r31)
/* 80150A50 0014D990  38 60 02 54 */	li r3, 0x254
/* 80150A54 0014D994  4B ED 34 51 */	bl __nw__FUl
/* 80150A58 0014D998  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A5C 0014D99C  41 82 00 10 */	beq .L_80150A6C
/* 80150A60 0014D9A0  7F 64 DB 78 */	mr r4, r27
/* 80150A64 0014D9A4  48 0E E9 8D */	bl __ct__Q24Game10PlayCameraFPQ24Game4Navi
/* 80150A68 0014D9A8  7C 60 1B 78 */	mr r0, r3
.L_80150A6C:
/* 80150A6C 0014D9AC  90 1F 01 08 */	stw r0, 0x128(r31)
/* 80150A70 0014D9B0  38 60 00 3C */	li r3, 0x3c
/* 80150A74 0014D9B4  4B ED 34 31 */	bl __nw__FUl
/* 80150A78 0014D9B8  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A7C 0014D9BC  41 82 00 0C */	beq .L_80150A88
/* 80150A80 0014D9C0  48 0F FF 09 */	bl __ct__Q24Game9CameraMgrFv
/* 80150A84 0014D9C4  7C 60 1B 78 */	mr r0, r3
.L_80150A88:
/* 80150A88 0014D9C8  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 80150A8C 0014D9CC  7C 03 03 78 */	mr r3, r0
/* 80150A90 0014D9D0  48 0F FF 41 */	bl loadResource__Q24Game9CameraMgrFv
/* 80150A94 0014D9D4  80 8D 96 A0 */	lwz r4, cameraMgr__4Game@sda21(r13)
/* 80150A98 0014D9D8  7F E3 FB 78 */	mr r3, r31
/* 80150A9C 0014D9DC  48 01 45 15 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150AA0 0014D9E0  80 82 2A F8 */	lwz r4, lbl_80520E58@sda21(r2)
/* 80150AA4 0014D9E4  38 60 01 80 */	li r3, 0x180
/* 80150AA8 0014D9E8  80 02 2A FC */	lwz r0, (lbl_80520E58+4)@sda21(r2)
/* 80150AAC 0014D9EC  90 81 00 08 */	stw r4, 8(r1)
/* 80150AB0 0014D9F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150AB4 0014D9F4  80 1F 01 04 */	lwz r0, 0x124(r31)
/* 80150AB8 0014D9F8  90 01 00 08 */	stw r0, 8(r1)
/* 80150ABC 0014D9FC  80 1F 01 08 */	lwz r0, 0x128(r31)
/* 80150AC0 0014DA00  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150AC4 0014DA04  4B ED 33 E1 */	bl __nw__FUl
/* 80150AC8 0014DA08  7C 60 1B 79 */	or. r0, r3, r3
/* 80150ACC 0014DA0C  41 82 00 14 */	beq .L_80150AE0
/* 80150AD0 0014DA10  38 A1 00 08 */	addi r5, r1, 8
/* 80150AD4 0014DA14  38 80 00 02 */	li r4, 2
/* 80150AD8 0014DA18  48 2C AC 51 */	bl __ct__11BlendCameraFiPP6Camera
/* 80150ADC 0014DA1C  7C 60 1B 78 */	mr r0, r3
.L_80150AE0:
/* 80150AE0 0014DA20  90 1F 00 50 */	stw r0, 0x70(r31)
/* 80150AE4 0014DA24  38 00 00 00 */	li r0, 0
/* 80150AE8 0014DA28  38 60 00 34 */	li r3, 0x34
/* 80150AEC 0014DA2C  98 1F 00 58 */	stb r0, 0x78(r31)
/* 80150AF0 0014DA30  80 1F 01 04 */	lwz r0, 0x124(r31)
/* 80150AF4 0014DA34  80 9F 01 28 */	lwz r4, 0x148(r31)
/* 80150AF8 0014DA38  90 04 23 3C */	stw r0, 0x233c(r4)
/* 80150AFC 0014DA3C  4B ED 33 A9 */	bl __nw__FUl
/* 80150B00 0014DA40  7C 60 1B 79 */	or. r0, r3, r3
/* 80150B04 0014DA44  41 82 00 0C */	beq .L_80150B10
/* 80150B08 0014DA48  48 10 27 FD */	bl __ct__Q24Game9RumbleMgrFv
/* 80150B0C 0014DA4C  7C 60 1B 78 */	mr r0, r3
.L_80150B10:
/* 80150B10 0014DA50  90 0D 96 A8 */	stw r0, rumbleMgr__4Game@sda21(r13)
/* 80150B14 0014DA54  7C 03 03 78 */	mr r3, r0
/* 80150B18 0014DA58  48 10 28 35 */	bl loadResource__Q24Game9RumbleMgrFv
/* 80150B1C 0014DA5C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80150B20 0014DA60  48 10 29 85 */	bl init__Q24Game9RumbleMgrFv
/* 80150B24 0014DA64  80 8D 96 A8 */	lwz r4, rumbleMgr__4Game@sda21(r13)
/* 80150B28 0014DA68  7F E3 FB 78 */	mr r3, r31
/* 80150B2C 0014DA6C  48 01 44 85 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150B30 0014DA70  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150B34 0014DA74  3B 60 00 00 */	li r27, 0
/* 80150B38 0014DA78  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80150B3C 0014DA7C  28 00 00 00 */	cmplwi r0, 0
/* 80150B40 0014DA80  41 82 00 08 */	beq .L_80150B48
/* 80150B44 0014DA84  3B 60 00 01 */	li r27, 1
.L_80150B48:
/* 80150B48 0014DA88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150B4C 0014DA8C  38 82 A2 20 */	addi r4, r2, lbl_80518580@sda21
/* 80150B50 0014DA90  38 A0 00 00 */	li r5, 0
/* 80150B54 0014DA94  48 2D 28 09 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150B58 0014DA98  38 60 00 3C */	li r3, 0x3c
/* 80150B5C 0014DA9C  4B ED 33 49 */	bl __nw__FUl
/* 80150B60 0014DAA0  7C 60 1B 79 */	or. r0, r3, r3
/* 80150B64 0014DAA4  41 82 00 0C */	beq .L_80150B70
/* 80150B68 0014DAA8  48 07 CF D5 */	bl __ct__Q24Game7ItemMgrFv
/* 80150B6C 0014DAAC  7C 60 1B 78 */	mr r0, r3
.L_80150B70:
/* 80150B70 0014DAB0  90 0D 94 38 */	stw r0, itemMgr__4Game@sda21(r13)
/* 80150B74 0014DAB4  7F E3 FB 78 */	mr r3, r31
/* 80150B78 0014DAB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150B7C 0014DABC  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80150B80 0014DAC0  7D 89 03 A6 */	mtctr r12
/* 80150B84 0014DAC4  4E 80 04 21 */	bctrl 
/* 80150B88 0014DAC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80150B8C 0014DACC  41 82 00 14 */	beq .L_80150BA0
/* 80150B90 0014DAD0  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80150B94 0014DAD4  38 80 00 03 */	li r4, 3
/* 80150B98 0014DAD8  48 09 40 01 */	bl createManagers__Q24Game7ItemMgrFUl
/* 80150B9C 0014DADC  48 00 00 28 */	b .L_80150BC4
.L_80150BA0:
/* 80150BA0 0014DAE0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80150BA4 0014DAE4  41 82 00 14 */	beq .L_80150BB8
/* 80150BA8 0014DAE8  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80150BAC 0014DAEC  38 80 00 01 */	li r4, 1
/* 80150BB0 0014DAF0  48 09 3F E9 */	bl createManagers__Q24Game7ItemMgrFUl
/* 80150BB4 0014DAF4  48 00 00 10 */	b .L_80150BC4
.L_80150BB8:
/* 80150BB8 0014DAF8  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80150BBC 0014DAFC  38 80 00 02 */	li r4, 2
/* 80150BC0 0014DB00  48 09 3F D9 */	bl createManagers__Q24Game7ItemMgrFUl
.L_80150BC4:
/* 80150BC4 0014DB04  80 8D 94 38 */	lwz r4, itemMgr__4Game@sda21(r13)
/* 80150BC8 0014DB08  28 04 00 00 */	cmplwi r4, 0
/* 80150BCC 0014DB0C  41 82 00 08 */	beq .L_80150BD4
/* 80150BD0 0014DB10  38 84 00 1C */	addi r4, r4, 0x1c
.L_80150BD4:
/* 80150BD4 0014DB14  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150BD8 0014DB18  48 06 53 71 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80150BDC 0014DB1C  80 8D 94 38 */	lwz r4, itemMgr__4Game@sda21(r13)
/* 80150BE0 0014DB20  7F E3 FB 78 */	mr r3, r31
/* 80150BE4 0014DB24  48 01 43 CD */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150BE8 0014DB28  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150BEC 0014DB2C  38 82 A2 20 */	addi r4, r2, lbl_80518580@sda21
/* 80150BF0 0014DB30  48 2D 27 75 */	bl heapStatusEnd__6SystemFPc
/* 80150BF4 0014DB34  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150BF8 0014DB38  38 9E 03 A0 */	addi r4, r30, 0x3a0
/* 80150BFC 0014DB3C  38 A0 00 00 */	li r5, 0
/* 80150C00 0014DB40  48 2D 27 5D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150C04 0014DB44  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80150C08 0014DB48  38 80 00 64 */	li r4, 0x64
/* 80150C0C 0014DB4C  48 00 12 B5 */	bl "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"
/* 80150C10 0014DB50  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150C14 0014DB54  38 9E 03 A0 */	addi r4, r30, 0x3a0
/* 80150C18 0014DB58  48 2D 27 4D */	bl heapStatusEnd__6SystemFPc
/* 80150C1C 0014DB5C  38 60 00 90 */	li r3, 0x90
/* 80150C20 0014DB60  4B ED 32 85 */	bl __nw__FUl
/* 80150C24 0014DB64  7C 64 1B 79 */	or. r4, r3, r3
/* 80150C28 0014DB68  41 82 00 0C */	beq .L_80150C34
/* 80150C2C 0014DB6C  4B FB C0 BD */	bl __ct__Q24Game15GeneralEnemyMgrFv
/* 80150C30 0014DB70  7C 64 1B 78 */	mr r4, r3
.L_80150C34:
/* 80150C34 0014DB74  90 8D 91 E0 */	stw r4, generalEnemyMgr__4Game@sda21(r13)
/* 80150C38 0014DB78  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150C3C 0014DB7C  48 06 53 0D */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80150C40 0014DB80  80 8D 91 E0 */	lwz r4, generalEnemyMgr__4Game@sda21(r13)
/* 80150C44 0014DB84  28 04 00 00 */	cmplwi r4, 0
/* 80150C48 0014DB88  41 82 00 08 */	beq .L_80150C50
/* 80150C4C 0014DB8C  38 84 00 04 */	addi r4, r4, 4
.L_80150C50:
/* 80150C50 0014DB90  7F E3 FB 78 */	mr r3, r31
/* 80150C54 0014DB94  48 01 43 5D */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150C58 0014DB98  7F E3 FB 78 */	mr r3, r31
/* 80150C5C 0014DB9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150C60 0014DBA0  81 8C 01 20 */	lwz r12, 0x120(r12)
/* 80150C64 0014DBA4  7D 89 03 A6 */	mtctr r12
/* 80150C68 0014DBA8  4E 80 04 21 */	bctrl 
/* 80150C6C 0014DBAC  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 80150C70 0014DBB0  28 00 00 00 */	cmplwi r0, 0
/* 80150C74 0014DBB4  40 82 04 E4 */	bne .L_80151158
/* 80150C78 0014DBB8  7F E3 FB 78 */	mr r3, r31
/* 80150C7C 0014DBBC  3B A0 00 01 */	li r29, 1
/* 80150C80 0014DBC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150C84 0014DBC4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80150C88 0014DBC8  7D 89 03 A6 */	mtctr r12
/* 80150C8C 0014DBCC  4E 80 04 21 */	bctrl 
/* 80150C90 0014DBD0  7C 65 1B 78 */	mr r5, r3
/* 80150C94 0014DBD4  38 61 00 94 */	addi r3, r1, 0x94
/* 80150C98 0014DBD8  38 9E 03 B4 */	addi r4, r30, 0x3b4
/* 80150C9C 0014DBDC  4C C6 31 82 */	crclr 6
/* 80150CA0 0014DBE0  4B F7 67 99 */	bl sprintf
/* 80150CA4 0014DBE4  7F E3 FB 78 */	mr r3, r31
/* 80150CA8 0014DBE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150CAC 0014DBEC  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80150CB0 0014DBF0  7D 89 03 A6 */	mtctr r12
/* 80150CB4 0014DBF4  4E 80 04 21 */	bctrl 
/* 80150CB8 0014DBF8  38 61 00 94 */	addi r3, r1, 0x94
/* 80150CBC 0014DBFC  48 08 68 71 */	bl load__Q34Game4Cave8CaveInfoFPc
/* 80150CC0 0014DC00  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80150CC4 0014DC04  7C 7B 1B 78 */	mr r27, r3
/* 80150CC8 0014DC08  3B 80 00 00 */	li r28, 0
/* 80150CCC 0014DC0C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80150CD0 0014DC10  2C 00 00 01 */	cmpwi r0, 1
/* 80150CD4 0014DC14  40 82 00 98 */	bne .L_80150D6C
/* 80150CD8 0014DC18  7F E3 FB 78 */	mr r3, r31
/* 80150CDC 0014DC1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150CE0 0014DC20  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80150CE4 0014DC24  7D 89 03 A6 */	mtctr r12
/* 80150CE8 0014DC28  4E 80 04 21 */	bctrl 
/* 80150CEC 0014DC2C  7C 64 1B 78 */	mr r4, r3
/* 80150CF0 0014DC30  38 62 A2 28 */	addi r3, r2, lbl_80518588@sda21
/* 80150CF4 0014DC34  4B F7 99 CD */	bl strcmp
/* 80150CF8 0014DC38  2C 03 00 00 */	cmpwi r3, 0
/* 80150CFC 0014DC3C  41 82 00 70 */	beq .L_80150D6C
/* 80150D00 0014DC40  7F E3 FB 78 */	mr r3, r31
/* 80150D04 0014DC44  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150D08 0014DC48  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80150D0C 0014DC4C  7D 89 03 A6 */	mtctr r12
/* 80150D10 0014DC50  4E 80 04 21 */	bctrl 
/* 80150D14 0014DC54  7C 65 1B 78 */	mr r5, r3
/* 80150D18 0014DC58  38 61 00 94 */	addi r3, r1, 0x94
/* 80150D1C 0014DC5C  38 9E 03 D4 */	addi r4, r30, 0x3d4
/* 80150D20 0014DC60  4C C6 31 82 */	crclr 6
/* 80150D24 0014DC64  4B F7 67 15 */	bl sprintf
/* 80150D28 0014DC68  38 60 00 20 */	li r3, 0x20
/* 80150D2C 0014DC6C  4B ED 31 79 */	bl __nw__FUl
/* 80150D30 0014DC70  7C 7C 1B 79 */	or. r28, r3, r3
/* 80150D34 0014DC74  41 82 00 0C */	beq .L_80150D40
/* 80150D38 0014DC78  48 0F 4F 25 */	bl __ct__Q34Game4Cave11EditMapUnitFv
/* 80150D3C 0014DC7C  7C 7C 1B 78 */	mr r28, r3
.L_80150D40:
/* 80150D40 0014DC80  7F 83 E3 78 */	mr r3, r28
/* 80150D44 0014DC84  38 81 00 94 */	addi r4, r1, 0x94
/* 80150D48 0014DC88  48 0F 4F 45 */	bl read__Q34Game4Cave11EditMapUnitFPc
/* 80150D4C 0014DC8C  7F E3 FB 78 */	mr r3, r31
/* 80150D50 0014DC90  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150D54 0014DC94  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80150D58 0014DC98  7D 89 03 A6 */	mtctr r12
/* 80150D5C 0014DC9C  4E 80 04 21 */	bctrl 
/* 80150D60 0014DCA0  7C 64 1B 78 */	mr r4, r3
/* 80150D64 0014DCA4  7F 83 E3 78 */	mr r3, r28
/* 80150D68 0014DCA8  48 0F 51 C5 */	bl setEditNumber__Q34Game4Cave11EditMapUnitFi
.L_80150D6C:
/* 80150D6C 0014DCAC  7F E3 FB 78 */	mr r3, r31
/* 80150D70 0014DCB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150D74 0014DCB4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80150D78 0014DCB8  7D 89 03 A6 */	mtctr r12
/* 80150D7C 0014DCBC  4E 80 04 21 */	bctrl 
/* 80150D80 0014DCC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80150D84 0014DCC4  41 82 00 0C */	beq .L_80150D90
/* 80150D88 0014DCC8  7F 63 DB 78 */	mr r3, r27
/* 80150D8C 0014DCCC  48 08 67 25 */	bl disablePelplant__Q34Game4Cave8CaveInfoFv
.L_80150D90:
/* 80150D90 0014DCD0  38 60 01 20 */	li r3, 0x120
/* 80150D94 0014DCD4  4B ED 31 11 */	bl __nw__FUl
/* 80150D98 0014DCD8  7C 60 1B 79 */	or. r0, r3, r3
/* 80150D9C 0014DCDC  41 82 00 14 */	beq .L_80150DB0
/* 80150DA0 0014DCE0  7F 65 DB 78 */	mr r5, r27
/* 80150DA4 0014DCE4  38 80 00 01 */	li r4, 1
/* 80150DA8 0014DCE8  48 06 6D 59 */	bl __ct__Q24Game10RoomMapMgrFPQ34Game4Cave8CaveInfo
/* 80150DAC 0014DCEC  7C 60 1B 78 */	mr r0, r3
.L_80150DB0:
/* 80150DB0 0014DCF0  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 80150DB4 0014DCF4  38 82 A2 30 */	addi r4, r2, lbl_80518590@sda21
/* 80150DB8 0014DCF8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150DBC 0014DCFC  38 A0 00 00 */	li r5, 0
/* 80150DC0 0014DD00  48 2D 25 9D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150DC4 0014DD04  7F E3 FB 78 */	mr r3, r31
/* 80150DC8 0014DD08  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150DCC 0014DD0C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80150DD0 0014DD10  7D 89 03 A6 */	mtctr r12
/* 80150DD4 0014DD14  4E 80 04 21 */	bctrl 
/* 80150DD8 0014DD18  7C 64 1B 78 */	mr r4, r3
/* 80150DDC 0014DD1C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80150DE0 0014DD20  7F 85 E3 78 */	mr r5, r28
/* 80150DE4 0014DD24  48 06 71 F9 */	bl createRandomMap__Q24Game10RoomMapMgrFiPQ34Game4Cave11EditMapUnit
/* 80150DE8 0014DD28  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150DEC 0014DD2C  38 82 A2 30 */	addi r4, r2, lbl_80518590@sda21
/* 80150DF0 0014DD30  48 2D 25 75 */	bl heapStatusEnd__6SystemFPc
/* 80150DF4 0014DD34  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 80150DF8 0014DD38  28 04 00 00 */	cmplwi r4, 0
/* 80150DFC 0014DD3C  41 82 00 08 */	beq .L_80150E04
/* 80150E00 0014DD40  80 84 00 00 */	lwz r4, 0(r4)
.L_80150E04:
/* 80150E04 0014DD44  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150E08 0014DD48  48 06 51 41 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80150E0C 0014DD4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150E10 0014DD50  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80150E14 0014DD54  2C 00 00 01 */	cmpwi r0, 1
/* 80150E18 0014DD58  40 82 01 C4 */	bne .L_80150FDC
/* 80150E1C 0014DD5C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150E20 0014DD60  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150E24 0014DD64  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150E28 0014DD68  38 A0 00 37 */	li r5, 0x37
/* 80150E2C 0014DD6C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80150E30 0014DD70  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150E34 0014DD74  38 00 00 04 */	li r0, 4
/* 80150E38 0014DD78  7F E3 FB 78 */	mr r3, r31
/* 80150E3C 0014DD7C  90 81 00 88 */	stw r4, 0x88(r1)
/* 80150E40 0014DD80  38 81 00 88 */	addi r4, r1, 0x88
/* 80150E44 0014DD84  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80150E48 0014DD88  90 01 00 90 */	stw r0, 0x90(r1)
/* 80150E4C 0014DD8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150E50 0014DD90  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150E54 0014DD94  7D 89 03 A6 */	mtctr r12
/* 80150E58 0014DD98  4E 80 04 21 */	bctrl 
/* 80150E5C 0014DD9C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150E60 0014DDA0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150E64 0014DDA4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150E68 0014DDA8  38 A0 00 17 */	li r5, 0x17
/* 80150E6C 0014DDAC  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80150E70 0014DDB0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150E74 0014DDB4  38 00 00 04 */	li r0, 4
/* 80150E78 0014DDB8  7F E3 FB 78 */	mr r3, r31
/* 80150E7C 0014DDBC  90 81 00 7C */	stw r4, 0x7c(r1)
/* 80150E80 0014DDC0  38 81 00 7C */	addi r4, r1, 0x7c
/* 80150E84 0014DDC4  90 A1 00 80 */	stw r5, 0x80(r1)
/* 80150E88 0014DDC8  90 01 00 84 */	stw r0, 0x84(r1)
/* 80150E8C 0014DDCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150E90 0014DDD0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150E94 0014DDD4  7D 89 03 A6 */	mtctr r12
/* 80150E98 0014DDD8  4E 80 04 21 */	bctrl 
/* 80150E9C 0014DDDC  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150EA0 0014DDE0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150EA4 0014DDE4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150EA8 0014DDE8  38 A0 00 13 */	li r5, 0x13
/* 80150EAC 0014DDEC  90 01 00 70 */	stw r0, 0x70(r1)
/* 80150EB0 0014DDF0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150EB4 0014DDF4  38 00 00 0C */	li r0, 0xc
/* 80150EB8 0014DDF8  7F E3 FB 78 */	mr r3, r31
/* 80150EBC 0014DDFC  90 81 00 70 */	stw r4, 0x70(r1)
/* 80150EC0 0014DE00  38 81 00 70 */	addi r4, r1, 0x70
/* 80150EC4 0014DE04  90 A1 00 74 */	stw r5, 0x74(r1)
/* 80150EC8 0014DE08  90 01 00 78 */	stw r0, 0x78(r1)
/* 80150ECC 0014DE0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150ED0 0014DE10  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150ED4 0014DE14  7D 89 03 A6 */	mtctr r12
/* 80150ED8 0014DE18  4E 80 04 21 */	bctrl 
/* 80150EDC 0014DE1C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150EE0 0014DE20  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150EE4 0014DE24  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150EE8 0014DE28  38 A0 00 5D */	li r5, 0x5d
/* 80150EEC 0014DE2C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80150EF0 0014DE30  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150EF4 0014DE34  38 00 00 02 */	li r0, 2
/* 80150EF8 0014DE38  7F E3 FB 78 */	mr r3, r31
/* 80150EFC 0014DE3C  90 81 00 64 */	stw r4, 0x64(r1)
/* 80150F00 0014DE40  38 81 00 64 */	addi r4, r1, 0x64
/* 80150F04 0014DE44  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80150F08 0014DE48  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80150F0C 0014DE4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150F10 0014DE50  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150F14 0014DE54  7D 89 03 A6 */	mtctr r12
/* 80150F18 0014DE58  4E 80 04 21 */	bctrl 
/* 80150F1C 0014DE5C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150F20 0014DE60  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150F24 0014DE64  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150F28 0014DE68  38 A0 00 18 */	li r5, 0x18
/* 80150F2C 0014DE6C  90 01 00 58 */	stw r0, 0x58(r1)
/* 80150F30 0014DE70  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150F34 0014DE74  38 00 00 04 */	li r0, 4
/* 80150F38 0014DE78  7F E3 FB 78 */	mr r3, r31
/* 80150F3C 0014DE7C  90 81 00 58 */	stw r4, 0x58(r1)
/* 80150F40 0014DE80  38 81 00 58 */	addi r4, r1, 0x58
/* 80150F44 0014DE84  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 80150F48 0014DE88  90 01 00 60 */	stw r0, 0x60(r1)
/* 80150F4C 0014DE8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150F50 0014DE90  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150F54 0014DE94  7D 89 03 A6 */	mtctr r12
/* 80150F58 0014DE98  4E 80 04 21 */	bctrl 
/* 80150F5C 0014DE9C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150F60 0014DEA0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150F64 0014DEA4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150F68 0014DEA8  38 A0 00 19 */	li r5, 0x19
/* 80150F6C 0014DEAC  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80150F70 0014DEB0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150F74 0014DEB4  38 00 00 04 */	li r0, 4
/* 80150F78 0014DEB8  7F E3 FB 78 */	mr r3, r31
/* 80150F7C 0014DEBC  90 81 00 4C */	stw r4, 0x4c(r1)
/* 80150F80 0014DEC0  38 81 00 4C */	addi r4, r1, 0x4c
/* 80150F84 0014DEC4  90 A1 00 50 */	stw r5, 0x50(r1)
/* 80150F88 0014DEC8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80150F8C 0014DECC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150F90 0014DED0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150F94 0014DED4  7D 89 03 A6 */	mtctr r12
/* 80150F98 0014DED8  4E 80 04 21 */	bctrl 
/* 80150F9C 0014DEDC  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150FA0 0014DEE0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150FA4 0014DEE4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150FA8 0014DEE8  38 A0 00 0E */	li r5, 0xe
/* 80150FAC 0014DEEC  90 01 00 40 */	stw r0, 0x40(r1)
/* 80150FB0 0014DEF0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150FB4 0014DEF4  38 00 00 14 */	li r0, 0x14
/* 80150FB8 0014DEF8  7F E3 FB 78 */	mr r3, r31
/* 80150FBC 0014DEFC  90 81 00 40 */	stw r4, 0x40(r1)
/* 80150FC0 0014DF00  38 81 00 40 */	addi r4, r1, 0x40
/* 80150FC4 0014DF04  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80150FC8 0014DF08  90 01 00 48 */	stw r0, 0x48(r1)
/* 80150FCC 0014DF0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150FD0 0014DF10  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150FD4 0014DF14  7D 89 03 A6 */	mtctr r12
/* 80150FD8 0014DF18  4E 80 04 21 */	bctrl 
.L_80150FDC:
/* 80150FDC 0014DF1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150FE0 0014DF20  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 80150FE4 0014DF24  38 A0 00 00 */	li r5, 0
/* 80150FE8 0014DF28  48 2D 23 75 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150FEC 0014DF2C  C0 22 A2 40 */	lfs f1, lbl_805185A0@sda21(r2)
/* 80150FF0 0014DF30  38 81 00 30 */	addi r4, r1, 0x30
/* 80150FF4 0014DF34  C0 02 A2 44 */	lfs f0, lbl_805185A4@sda21(r2)
/* 80150FF8 0014DF38  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80150FFC 0014DF3C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151000 0014DF40  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80151004 0014DF44  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80151008 0014DF48  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8015100C 0014DF4C  81 83 00 04 */	lwz r12, 4(r3)
/* 80151010 0014DF50  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80151014 0014DF54  7D 89 03 A6 */	mtctr r12
/* 80151018 0014DF58  4E 80 04 21 */	bctrl 
/* 8015101C 0014DF5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151020 0014DF60  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 80151024 0014DF64  38 A0 00 00 */	li r5, 0
/* 80151028 0014DF68  48 2D 23 35 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8015102C 0014DF6C  38 60 00 48 */	li r3, 0x48
/* 80151030 0014DF70  4B ED 2E 75 */	bl __nw__FUl
/* 80151034 0014DF74  7C 60 1B 79 */	or. r0, r3, r3
/* 80151038 0014DF78  41 82 00 0C */	beq .L_80151044
/* 8015103C 0014DF7C  48 00 72 81 */	bl __ct__Q24Game11CellPyramidFv
/* 80151040 0014DF80  7C 60 1B 78 */	mr r0, r3
.L_80151044:
/* 80151044 0014DF84  90 0D 92 CC */	stw r0, platCellMgr__4Game@sda21(r13)
/* 80151048 0014DF88  7C 03 03 78 */	mr r3, r0
/* 8015104C 0014DF8C  C0 22 A2 48 */	lfs f1, lbl_805185A8@sda21(r2)
/* 80151050 0014DF90  38 81 00 30 */	addi r4, r1, 0x30
/* 80151054 0014DF94  48 00 79 B9 */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 80151058 0014DF98  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015105C 0014DF9C  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 80151060 0014DFA0  48 2D 23 05 */	bl heapStatusEnd__6SystemFPc
/* 80151064 0014DFA4  C0 22 A2 40 */	lfs f1, lbl_805185A0@sda21(r2)
/* 80151068 0014DFA8  38 81 00 20 */	addi r4, r1, 0x20
/* 8015106C 0014DFAC  C0 02 A2 44 */	lfs f0, lbl_805185A4@sda21(r2)
/* 80151070 0014DFB0  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80151074 0014DFB4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151078 0014DFB8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8015107C 0014DFBC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80151080 0014DFC0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80151084 0014DFC4  81 83 00 04 */	lwz r12, 4(r3)
/* 80151088 0014DFC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8015108C 0014DFCC  7D 89 03 A6 */	mtctr r12
/* 80151090 0014DFD0  4E 80 04 21 */	bctrl 
/* 80151094 0014DFD4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151098 0014DFD8  38 9E 03 F0 */	addi r4, r30, 0x3f0
/* 8015109C 0014DFDC  38 A0 00 00 */	li r5, 0
/* 801510A0 0014DFE0  48 2D 22 BD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801510A4 0014DFE4  38 60 00 48 */	li r3, 0x48
/* 801510A8 0014DFE8  4B ED 2D FD */	bl __nw__FUl
/* 801510AC 0014DFEC  7C 60 1B 79 */	or. r0, r3, r3
/* 801510B0 0014DFF0  41 82 00 0C */	beq .L_801510BC
/* 801510B4 0014DFF4  48 00 72 09 */	bl __ct__Q24Game11CellPyramidFv
/* 801510B8 0014DFF8  7C 60 1B 78 */	mr r0, r3
.L_801510BC:
/* 801510BC 0014DFFC  90 0D 92 D0 */	stw r0, mapRoomCellMgr__4Game@sda21(r13)
/* 801510C0 0014E000  7C 03 03 78 */	mr r3, r0
/* 801510C4 0014E004  C0 22 A2 4C */	lfs f1, lbl_805185AC@sda21(r2)
/* 801510C8 0014E008  38 81 00 20 */	addi r4, r1, 0x20
/* 801510CC 0014E00C  48 00 79 41 */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 801510D0 0014E010  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801510D4 0014E014  38 9E 03 F0 */	addi r4, r30, 0x3f0
/* 801510D8 0014E018  48 2D 22 8D */	bl heapStatusEnd__6SystemFPc
/* 801510DC 0014E01C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801510E0 0014E020  48 06 8D 61 */	bl entryToMapRoomCellMgr__Q24Game10RoomMapMgrFv
/* 801510E4 0014E024  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801510E8 0014E028  48 06 90 75 */	bl createGlobalCollision__Q24Game10RoomMapMgrFv
/* 801510EC 0014E02C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801510F0 0014E030  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 801510F4 0014E034  48 2D 22 71 */	bl heapStatusEnd__6SystemFPc
/* 801510F8 0014E038  80 1F 01 14 */	lwz r0, 0x134(r31)
/* 801510FC 0014E03C  38 A0 FF FF */	li r5, -1
/* 80151100 0014E040  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80151104 0014E044  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80151108 0014E048  4B FB C4 F1 */	bl allocateEnemys__Q24Game15GeneralEnemyMgrFUci
/* 8015110C 0014E04C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80151110 0014E050  4B FB BE A5 */	bl setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
/* 80151114 0014E054  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80151118 0014E058  48 01 C2 91 */	bl setupResources__Q24Game9PelletMgrFv
/* 8015111C 0014E05C  7F E3 FB 78 */	mr r3, r31
/* 80151120 0014E060  81 9F 00 00 */	lwz r12, 0(r31)
/* 80151124 0014E064  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80151128 0014E068  7D 89 03 A6 */	mtctr r12
/* 8015112C 0014E06C  4E 80 04 21 */	bctrl 
/* 80151130 0014E070  2C 03 00 00 */	cmpwi r3, 0
/* 80151134 0014E074  40 82 00 10 */	bne .L_80151144
/* 80151138 0014E078  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015113C 0014E07C  38 00 00 01 */	li r0, 1
/* 80151140 0014E080  98 03 00 6C */	stb r0, 0x6c(r3)
.L_80151144:
/* 80151144 0014E084  48 0E B9 0D */	bl globalInstance__Q29TexCaster3MgrFv
/* 80151148 0014E088  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8015114C 0014E08C  80 63 00 08 */	lwz r3, 8(r3)
/* 80151150 0014E090  48 02 2A 39 */	bl setCloseAll__Q24Game8RouteMgrFv
/* 80151154 0014E094  48 00 00 08 */	b .L_8015115C
.L_80151158:
/* 80151158 0014E098  48 0E B8 F9 */	bl globalInstance__Q29TexCaster3MgrFv
.L_8015115C:
/* 8015115C 0014E09C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151160 0014E0A0  80 03 00 08 */	lwz r0, 8(r3)
/* 80151164 0014E0A4  28 00 00 00 */	cmplwi r0, 0
/* 80151168 0014E0A8  41 82 00 38 */	beq .L_801511A0
/* 8015116C 0014E0AC  38 60 00 14 */	li r3, 0x14
/* 80151170 0014E0B0  4B ED 2D 35 */	bl __nw__FUl
/* 80151174 0014E0B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80151178 0014E0B8  41 82 00 0C */	beq .L_80151184
/* 8015117C 0014E0BC  48 05 24 71 */	bl __ct__Q24Game10PathfinderFv
/* 80151180 0014E0C0  7C 60 1B 78 */	mr r0, r3
.L_80151184:
/* 80151184 0014E0C4  90 0D 93 80 */	stw r0, testPathfinder__4Game@sda21(r13)
/* 80151188 0014E0C8  7C 03 03 78 */	mr r3, r0
/* 8015118C 0014E0CC  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 80151190 0014E0D0  38 80 00 64 */	li r4, 0x64
/* 80151194 0014E0D4  80 A5 00 08 */	lwz r5, 8(r5)
/* 80151198 0014E0D8  48 05 24 B5 */	bl create__Q24Game10PathfinderFiPQ24Game8RouteMgr
/* 8015119C 0014E0DC  48 00 00 0C */	b .L_801511A8
.L_801511A0:
/* 801511A0 0014E0E0  38 00 00 00 */	li r0, 0
/* 801511A4 0014E0E4  90 0D 93 80 */	stw r0, testPathfinder__4Game@sda21(r13)
.L_801511A8:
/* 801511A8 0014E0E8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801511AC 0014E0EC  80 63 00 08 */	lwz r3, 8(r3)
/* 801511B0 0014E0F0  28 03 00 00 */	cmplwi r3, 0
/* 801511B4 0014E0F4  41 82 00 08 */	beq .L_801511BC
/* 801511B8 0014E0F8  48 02 1B 59 */	bl refreshWater__Q24Game8RouteMgrFv
.L_801511BC:
/* 801511BC 0014E0FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801511C0 0014E100  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 801511C4 0014E104  38 A0 00 00 */	li r5, 0
/* 801511C8 0014E108  48 2D 21 95 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801511CC 0014E10C  38 60 00 48 */	li r3, 0x48
/* 801511D0 0014E110  4B ED 2C D5 */	bl __nw__FUl
/* 801511D4 0014E114  7C 60 1B 79 */	or. r0, r3, r3
/* 801511D8 0014E118  41 82 00 0C */	beq .L_801511E4
/* 801511DC 0014E11C  48 00 70 E1 */	bl __ct__Q24Game11CellPyramidFv
/* 801511E0 0014E120  7C 60 1B 78 */	mr r0, r3
.L_801511E4:
/* 801511E4 0014E124  C0 22 A2 40 */	lfs f1, lbl_805185A0@sda21(r2)
/* 801511E8 0014E128  38 81 00 10 */	addi r4, r1, 0x10
/* 801511EC 0014E12C  C0 02 A2 44 */	lfs f0, lbl_805185A4@sda21(r2)
/* 801511F0 0014E130  90 0D 92 C8 */	stw r0, cellMgr__4Game@sda21(r13)
/* 801511F4 0014E134  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801511F8 0014E138  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801511FC 0014E13C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80151200 0014E140  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80151204 0014E144  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80151208 0014E148  81 83 00 04 */	lwz r12, 4(r3)
/* 8015120C 0014E14C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80151210 0014E150  7D 89 03 A6 */	mtctr r12
/* 80151214 0014E154  4E 80 04 21 */	bctrl 
/* 80151218 0014E158  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8015121C 0014E15C  4B ED 25 99 */	bl getFreeSize__7JKRHeapFv
/* 80151220 0014E160  80 6D 92 C8 */	lwz r3, cellMgr__4Game@sda21(r13)
/* 80151224 0014E164  38 81 00 10 */	addi r4, r1, 0x10
/* 80151228 0014E168  C0 22 A2 50 */	lfs f1, lbl_805185B0@sda21(r2)
/* 8015122C 0014E16C  48 00 77 E1 */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 80151230 0014E170  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80151234 0014E174  40 82 00 4C */	bne .L_80151280
/* 80151238 0014E178  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015123C 0014E17C  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 80151240 0014E180  38 A0 00 00 */	li r5, 0
/* 80151244 0014E184  48 2D 21 19 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80151248 0014E188  38 60 00 48 */	li r3, 0x48
/* 8015124C 0014E18C  4B ED 2C 59 */	bl __nw__FUl
/* 80151250 0014E190  7C 60 1B 79 */	or. r0, r3, r3
/* 80151254 0014E194  41 82 00 0C */	beq .L_80151260
/* 80151258 0014E198  48 00 70 65 */	bl __ct__Q24Game11CellPyramidFv
/* 8015125C 0014E19C  7C 60 1B 78 */	mr r0, r3
.L_80151260:
/* 80151260 0014E1A0  90 0D 92 CC */	stw r0, platCellMgr__4Game@sda21(r13)
/* 80151264 0014E1A4  7C 03 03 78 */	mr r3, r0
/* 80151268 0014E1A8  C0 22 A2 48 */	lfs f1, lbl_805185A8@sda21(r2)
/* 8015126C 0014E1AC  38 81 00 10 */	addi r4, r1, 0x10
/* 80151270 0014E1B0  48 00 77 9D */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 80151274 0014E1B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151278 0014E1B8  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 8015127C 0014E1BC  48 2D 20 E9 */	bl heapStatusEnd__6SystemFPc
.L_80151280:
/* 80151280 0014E1C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151284 0014E1C4  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 80151288 0014E1C8  48 2D 20 DD */	bl heapStatusEnd__6SystemFPc
/* 8015128C 0014E1CC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80151290 0014E1D0  41 82 00 0C */	beq .L_8015129C
/* 80151294 0014E1D4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151298 0014E1D8  48 06 84 F9 */	bl placeObjects__Q24Game10RoomMapMgrFv
.L_8015129C:
/* 8015129C 0014E1DC  7F E3 FB 78 */	mr r3, r31
/* 801512A0 0014E1E0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 801512A4 0014E1E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801512A8 0014E1E8  83 84 00 24 */	lwz r28, 0x24(r4)
/* 801512AC 0014E1EC  81 8C 00 FC */	lwz r12, 0xfc(r12)
/* 801512B0 0014E1F0  7F 84 E3 78 */	mr r4, r28
/* 801512B4 0014E1F4  7D 89 03 A6 */	mtctr r12
/* 801512B8 0014E1F8  4E 80 04 21 */	bctrl 
/* 801512BC 0014E1FC  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 801512C0 0014E200  7F 84 E3 78 */	mr r4, r28
/* 801512C4 0014E204  48 26 A8 65 */	bl setViewport__11ParticleMgrFR8Graphics
/* 801512C8 0014E208  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 801512CC 0014E20C  48 26 A4 4D */	bl start__11ParticleMgrFv
/* 801512D0 0014E210  7F E3 FB 78 */	mr r3, r31
/* 801512D4 0014E214  81 9F 00 00 */	lwz r12, 0(r31)
/* 801512D8 0014E218  81 8C 01 04 */	lwz r12, 0x104(r12)
/* 801512DC 0014E21C  7D 89 03 A6 */	mtctr r12
/* 801512E0 0014E220  4E 80 04 21 */	bctrl 
/* 801512E4 0014E224  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 801512E8 0014E228  48 07 CA 6D */	bl initDependency__Q24Game7ItemMgrFv
/* 801512EC 0014E22C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 801512F0 0014E230  38 80 00 00 */	li r4, 0
/* 801512F4 0014E234  48 10 0B F9 */	bl init__Q24Game9CameraMgrFi
/* 801512F8 0014E238  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 801512FC 0014E23C  C0 22 A2 58 */	lfs f1, lbl_805185B8@sda21(r2)
/* 80151300 0014E240  C0 03 00 58 */	lfs f0, 0x58(r3)
/* 80151304 0014E244  C0 42 A2 54 */	lfs f2, lbl_805185B4@sda21(r2)
/* 80151308 0014E248  EC 01 00 32 */	fmuls f0, f1, f0
/* 8015130C 0014E24C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151310 0014E250  EF E2 00 32 */	fmuls f31, f2, f0
/* 80151314 0014E254  48 01 13 E5 */	bl getMapRotation__Q24Game6MapMgrFv
/* 80151318 0014E258  EC 3F 08 2A */	fadds f1, f31, f1
/* 8015131C 0014E25C  48 2C 08 B5 */	bl roundAng__Ff
/* 80151320 0014E260  FF E0 08 90 */	fmr f31, f1
/* 80151324 0014E264  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151328 0014E268  48 01 13 D1 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8015132C 0014E26C  FC 20 F8 90 */	fmr f1, f31
/* 80151330 0014E270  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80151334 0014E274  38 80 00 02 */	li r4, 2
/* 80151338 0014E278  48 10 0D 01 */	bl setCameraAngle__Q24Game9CameraMgrFfi
/* 8015133C 0014E27C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80151340 0014E280  38 80 00 02 */	li r4, 2
/* 80151344 0014E284  48 10 11 99 */	bl controllerUnLock__Q24Game9CameraMgrFi
/* 80151348 0014E288  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015134C 0014E28C  38 9E 03 8C */	addi r4, r30, 0x38c
/* 80151350 0014E290  48 2D 20 15 */	bl heapStatusEnd__6SystemFPc
/* 80151354 0014E294  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80151358 0014E298  48 00 E4 F1 */	bl setupSoundViewerAndBas__Q24Game7PikiMgrFv
/* 8015135C 0014E29C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80151360 0014E2A0  48 00 A6 C1 */	bl setupSoundViewerAndBas__Q24Game7NaviMgrFv
/* 80151364 0014E2A4  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80151368 0014E2A8  48 07 D7 5D */	bl setupSoundViewerAndBas__Q24Game7ItemMgrFv
/* 8015136C 0014E2AC  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80151370 0014E2B0  48 01 D8 45 */	bl setupSoundViewerAndBas__Q24Game9PelletMgrFv
/* 80151374 0014E2B4  7F E3 FB 78 */	mr r3, r31
/* 80151378 0014E2B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8015137C 0014E2BC  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 80151380 0014E2C0  7D 89 03 A6 */	mtctr r12
/* 80151384 0014E2C4  4E 80 04 21 */	bctrl 
/* 80151388 0014E2C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015138C 0014E2CC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80151390 0014E2D0  60 00 00 01 */	ori r0, r0, 1
/* 80151394 0014E2D4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80151398 0014E2D8  80 6D 91 D8 */	lwz r3, farmMgr__Q24Game4Farm@sda21(r13)
/* 8015139C 0014E2DC  28 03 00 00 */	cmplwi r3, 0
/* 801513A0 0014E2E0  41 82 00 08 */	beq .L_801513A8
/* 801513A4 0014E2E4  4B FD 2D 35 */	bl setupSound__Q34Game4Farm7FarmMgrFv
.L_801513A8:
/* 801513A8 0014E2E8  38 7E 04 00 */	addi r3, r30, 0x400
/* 801513AC 0014E2EC  4C C6 31 82 */	crclr 6
/* 801513B0 0014E2F0  4B F9 C3 3D */	bl OSReport
/* 801513B4 0014E2F4  E3 E1 02 B8 */	psq_l f31, 696(r1), 0, qr0
/* 801513B8 0014E2F8  CB E1 02 B0 */	lfd f31, 0x2b0(r1)
/* 801513BC 0014E2FC  BB 61 02 9C */	lmw r27, 0x29c(r1)
/* 801513C0 0014E300  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 801513C4 0014E304  7C 08 03 A6 */	mtlr r0
/* 801513C8 0014E308  38 21 02 C0 */	addi r1, r1, 0x2c0
/* 801513CC 0014E30C  4E 80 00 20 */	blr 
.endfn setupFloatMemory__Q24Game15BaseGameSectionFv
.else
.fn setupFloatMemory__Q24Game15BaseGameSectionFv, global
/* 80150710 0014D650  94 21 FD 40 */	stwu r1, -0x2c0(r1)
/* 80150714 0014D654  7C 08 02 A6 */	mflr r0
/* 80150718 0014D658  90 01 02 C4 */	stw r0, 0x2c4(r1)
/* 8015071C 0014D65C  DB E1 02 B0 */	stfd f31, 0x2b0(r1)
/* 80150720 0014D660  F3 E1 02 B8 */	psq_st f31, 696(r1), 0, qr0
/* 80150724 0014D664  BF 61 02 9C */	stmw r27, 0x29c(r1)
/* 80150728 0014D668  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8015072C 0014D66C  3C A0 80 48 */	lis r5, lbl_8047C948@ha
/* 80150730 0014D670  7C 7F 1B 78 */	mr r31, r3
/* 80150734 0014D674  3B A0 00 00 */	li r29, 0
/* 80150738 0014D678  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8015073C 0014D67C  3B C5 C9 48 */	addi r30, r5, lbl_8047C948@l
/* 80150740 0014D680  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 80150744 0014D684  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80150748 0014D688  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8015074C 0014D68C  28 00 00 00 */	cmplwi r0, 0
/* 80150750 0014D690  41 82 00 18 */	beq .L_80150768
/* 80150754 0014D694  38 7E 03 80 */	addi r3, r30, 0x380
/* 80150758 0014D698  38 BE 00 70 */	addi r5, r30, 0x70
/* 8015075C 0014D69C  38 80 00 76 */	li r4, 0x76
/* 80150760 0014D6A0  4C C6 31 82 */	crclr 6
/* 80150764 0014D6A4  4B ED 9E DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80150768:
/* 80150768 0014D6A8  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8015076C 0014D6AC  28 00 00 00 */	cmplwi r0, 0
/* 80150770 0014D6B0  40 82 00 6C */	bne .L_801507DC
/* 80150774 0014D6B4  38 60 00 30 */	li r3, 0x30
/* 80150778 0014D6B8  4B ED 37 2D */	bl __nw__FUl
/* 8015077C 0014D6BC  7C 65 1B 79 */	or. r5, r3, r3
/* 80150780 0014D6C0  41 82 00 58 */	beq .L_801507D8
/* 80150784 0014D6C4  7C BB 2B 78 */	mr r27, r5
/* 80150788 0014D6C8  4B ED 61 49 */	bl initiate__10JSUPtrListFv
/* 8015078C 0014D6CC  3C 60 80 4B */	lis r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
/* 80150790 0014D6D0  34 9B 00 0C */	addic. r4, r27, 0xc
/* 80150794 0014D6D4  38 03 0C E0 */	addi r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
/* 80150798 0014D6D8  90 1B 00 0C */	stw r0, 0xc(r27)
/* 8015079C 0014D6DC  41 82 00 08 */	beq .L_801507A4
/* 801507A0 0014D6E0  38 84 FF F4 */	addi r4, r4, -12
.L_801507A4:
/* 801507A4 0014D6E4  90 8D 91 BC */	stw r4, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 801507A8 0014D6E8  38 7B 00 10 */	addi r3, r27, 0x10
/* 801507AC 0014D6EC  4B EC C8 21 */	bl __ct__11JKRDisposerFv
/* 801507B0 0014D6F0  3C 60 80 4F */	lis r3, __vt__Q23PSM6ObjMgr@ha
/* 801507B4 0014D6F4  38 00 00 00 */	li r0, 0
/* 801507B8 0014D6F8  38 63 F2 0C */	addi r3, r3, __vt__Q23PSM6ObjMgr@l
/* 801507BC 0014D6FC  7F 65 DB 78 */	mr r5, r27
/* 801507C0 0014D700  90 7B 00 28 */	stw r3, 0x28(r27)
/* 801507C4 0014D704  38 83 00 08 */	addi r4, r3, 8
/* 801507C8 0014D708  38 63 00 14 */	addi r3, r3, 0x14
/* 801507CC 0014D70C  90 9B 00 0C */	stw r4, 0xc(r27)
/* 801507D0 0014D710  90 7B 00 10 */	stw r3, 0x10(r27)
/* 801507D4 0014D714  90 1B 00 2C */	stw r0, 0x2c(r27)
.L_801507D8:
/* 801507D8 0014D718  90 AD 91 BC */	stw r5, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
.L_801507DC:
/* 801507DC 0014D71C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 801507E0 0014D720  28 00 00 00 */	cmplwi r0, 0
/* 801507E4 0014D724  40 82 00 18 */	bne .L_801507FC
/* 801507E8 0014D728  38 7E 03 80 */	addi r3, r30, 0x380
/* 801507EC 0014D72C  38 BE 00 70 */	addi r5, r30, 0x70
/* 801507F0 0014D730  38 80 00 79 */	li r4, 0x79
/* 801507F4 0014D734  4C C6 31 82 */	crclr 6
/* 801507F8 0014D738  4B ED 9E 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801507FC:
/* 801507FC 0014D73C  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80150800 0014D740  28 00 00 00 */	cmplwi r0, 0
/* 80150804 0014D744  41 82 00 18 */	beq .L_8015081C
/* 80150808 0014D748  38 7E 03 80 */	addi r3, r30, 0x380
/* 8015080C 0014D74C  38 BE 00 70 */	addi r5, r30, 0x70
/* 80150810 0014D750  38 80 00 76 */	li r4, 0x76
/* 80150814 0014D754  4C C6 31 82 */	crclr 6
/* 80150818 0014D758  4B ED 9E 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015081C:
/* 8015081C 0014D75C  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80150820 0014D760  28 00 00 00 */	cmplwi r0, 0
/* 80150824 0014D764  40 82 00 20 */	bne .L_80150844
/* 80150828 0014D768  38 60 00 3C */	li r3, 0x3c
/* 8015082C 0014D76C  4B ED 36 79 */	bl __nw__FUl
/* 80150830 0014D770  7C 60 1B 79 */	or. r0, r3, r3
/* 80150834 0014D774  41 82 00 0C */	beq .L_80150840
/* 80150838 0014D778  48 31 C0 95 */	bl __ct__Q33PSM12BossBgmFader3MgrFv
/* 8015083C 0014D77C  7C 60 1B 78 */	mr r0, r3
.L_80150840:
/* 80150840 0014D780  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
.L_80150844:
/* 80150844 0014D784  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80150848 0014D788  28 00 00 00 */	cmplwi r0, 0
/* 8015084C 0014D78C  40 82 00 18 */	bne .L_80150864
/* 80150850 0014D790  38 7E 03 80 */	addi r3, r30, 0x380
/* 80150854 0014D794  38 BE 00 70 */	addi r5, r30, 0x70
/* 80150858 0014D798  38 80 00 79 */	li r4, 0x79
/* 8015085C 0014D79C  4C C6 31 82 */	crclr 6
/* 80150860 0014D7A0  4B ED 9D E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80150864:
/* 80150864 0014D7A4  83 8D 88 2C */	lwz r28, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80150868 0014D7A8  7F 83 E3 78 */	mr r3, r28
/* 8015086C 0014D7AC  4B ED 2F 49 */	bl getFreeSize__7JKRHeapFv
/* 80150870 0014D7B0  7F 84 E3 78 */	mr r4, r28
/* 80150874 0014D7B4  38 A0 00 01 */	li r5, 1
/* 80150878 0014D7B8  4B EC F6 51 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 8015087C 0014D7BC  90 7F 00 FC */	stw r3, 0xfc(r31)
/* 80150880 0014D7C0  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 80150884 0014D7C4  90 0D 92 B4 */	stw r0, theExpHeap@sda21(r13)
/* 80150888 0014D7C8  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 8015088C 0014D7CC  4B ED 2D 19 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80150890 0014D7D0  90 7F 01 00 */	stw r3, 0x100(r31)
/* 80150894 0014D7D4  7F E3 FB 78 */	mr r3, r31
/* 80150898 0014D7D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8015089C 0014D7DC  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 801508A0 0014D7E0  7D 89 03 A6 */	mtctr r12
/* 801508A4 0014D7E4  4E 80 04 21 */	bctrl 
/* 801508A8 0014D7E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801508AC 0014D7EC  38 9E 03 8C */	addi r4, r30, 0x38c
/* 801508B0 0014D7F0  38 A0 00 00 */	li r5, 0
/* 801508B4 0014D7F4  48 2D 2A A9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801508B8 0014D7F8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801508BC 0014D7FC  48 00 A7 D5 */	bl loadResources_float__Q24Game7NaviMgrFv
/* 801508C0 0014D800  38 60 00 94 */	li r3, 0x94
/* 801508C4 0014D804  4B ED 35 E1 */	bl __nw__FUl
/* 801508C8 0014D808  7C 60 1B 79 */	or. r0, r3, r3
/* 801508CC 0014D80C  41 82 00 0C */	beq .L_801508D8
/* 801508D0 0014D810  4B FC 9F 01 */	bl __ct__12LifeGaugeMgrFv
/* 801508D4 0014D814  7C 60 1B 78 */	mr r0, r3
.L_801508D8:
/* 801508D8 0014D818  90 0D 92 08 */	stw r0, lifeGaugeMgr@sda21(r13)
/* 801508DC 0014D81C  7C 03 03 78 */	mr r3, r0
/* 801508E0 0014D820  4B FC A6 31 */	bl loadResource__12LifeGaugeMgrFv
/* 801508E4 0014D824  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801508E8 0014D828  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801508EC 0014D82C  2C 00 00 00 */	cmpwi r0, 0
/* 801508F0 0014D830  40 82 00 28 */	bne .L_80150918
/* 801508F4 0014D834  38 60 00 EC */	li r3, 0xec
/* 801508F8 0014D838  4B ED 35 AD */	bl __nw__FUl
/* 801508FC 0014D83C  7C 60 1B 79 */	or. r0, r3, r3
/* 80150900 0014D840  41 82 00 10 */	beq .L_80150910
/* 80150904 0014D844  38 80 00 30 */	li r4, 0x30
/* 80150908 0014D848  4B FC B3 8D */	bl __ct__12CarryInfoMgrFi
/* 8015090C 0014D84C  7C 60 1B 78 */	mr r0, r3
.L_80150910:
/* 80150910 0014D850  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
/* 80150914 0014D854  48 00 00 24 */	b .L_80150938
.L_80150918:
/* 80150918 0014D858  38 60 00 EC */	li r3, 0xec
/* 8015091C 0014D85C  4B ED 35 89 */	bl __nw__FUl
/* 80150920 0014D860  7C 60 1B 79 */	or. r0, r3, r3
/* 80150924 0014D864  41 82 00 10 */	beq .L_80150934
/* 80150928 0014D868  38 80 00 40 */	li r4, 0x40
/* 8015092C 0014D86C  4B FC B3 69 */	bl __ct__12CarryInfoMgrFi
/* 80150930 0014D870  7C 60 1B 78 */	mr r0, r3
.L_80150934:
/* 80150934 0014D874  90 0D 92 18 */	stw r0, carryInfoMgr@sda21(r13)
.L_80150938:
/* 80150938 0014D878  80 6D 92 18 */	lwz r3, carryInfoMgr@sda21(r13)
/* 8015093C 0014D87C  81 83 00 00 */	lwz r12, 0(r3)
/* 80150940 0014D880  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80150944 0014D884  7D 89 03 A6 */	mtctr r12
/* 80150948 0014D888  4E 80 04 21 */	bctrl 
/* 8015094C 0014D88C  38 60 00 3C */	li r3, 0x3c
/* 80150950 0014D890  4B ED 35 55 */	bl __nw__FUl
/* 80150954 0014D894  7C 60 1B 79 */	or. r0, r3, r3
/* 80150958 0014D898  41 82 00 0C */	beq .L_80150964
/* 8015095C 0014D89C  48 07 4C 8D */	bl __ct__Q24Game7PlatMgrFv
/* 80150960 0014D8A0  7C 60 1B 78 */	mr r0, r3
.L_80150964:
/* 80150964 0014D8A4  90 0D 94 20 */	stw r0, platMgr__4Game@sda21(r13)
/* 80150968 0014D8A8  38 60 00 50 */	li r3, 0x50
/* 8015096C 0014D8AC  4B ED 35 39 */	bl __nw__FUl
/* 80150970 0014D8B0  7C 64 1B 79 */	or. r4, r3, r3
/* 80150974 0014D8B4  41 82 00 10 */	beq .L_80150984
/* 80150978 0014D8B8  38 80 00 02 */	li r4, 2
/* 8015097C 0014D8BC  48 0F 0A 49 */	bl __ct__Q24Game9ShadowMgrFi
/* 80150980 0014D8C0  7C 64 1B 78 */	mr r4, r3
.L_80150984:
/* 80150984 0014D8C4  90 8D 96 80 */	stw r4, shadowMgr__4Game@sda21(r13)
/* 80150988 0014D8C8  7F E3 FB 78 */	mr r3, r31
/* 8015098C 0014D8CC  48 01 46 25 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150990 0014D8D0  7F E3 FB 78 */	mr r3, r31
/* 80150994 0014D8D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150998 0014D8D8  81 8C 01 08 */	lwz r12, 0x108(r12)
/* 8015099C 0014D8DC  7D 89 03 A6 */	mtctr r12
/* 801509A0 0014D8E0  4E 80 04 21 */	bctrl 
/* 801509A4 0014D8E4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801509A8 0014D8E8  38 80 00 02 */	li r4, 2
/* 801509AC 0014D8EC  48 00 13 89 */	bl "alloc__27MonoObjectMgr<Q24Game4Navi>Fi"
/* 801509B0 0014D8F0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801509B4 0014D8F4  38 80 00 00 */	li r4, 0
/* 801509B8 0014D8F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801509BC 0014D8FC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801509C0 0014D900  7D 89 03 A6 */	mtctr r12
/* 801509C4 0014D904  4E 80 04 21 */	bctrl 
/* 801509C8 0014D908  7C 60 1B 78 */	mr r0, r3
/* 801509CC 0014D90C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801509D0 0014D910  7C 1C 03 78 */	mr r28, r0
/* 801509D4 0014D914  38 80 00 01 */	li r4, 1
/* 801509D8 0014D918  81 83 00 00 */	lwz r12, 0(r3)
/* 801509DC 0014D91C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801509E0 0014D920  7D 89 03 A6 */	mtctr r12
/* 801509E4 0014D924  4E 80 04 21 */	bctrl 
/* 801509E8 0014D928  7C 60 1B 78 */	mr r0, r3
/* 801509EC 0014D92C  38 60 00 B0 */	li r3, 0xb0
/* 801509F0 0014D930  7C 1B 03 78 */	mr r27, r0
/* 801509F4 0014D934  4B ED 34 B1 */	bl __nw__FUl
/* 801509F8 0014D938  7C 60 1B 79 */	or. r0, r3, r3
/* 801509FC 0014D93C  41 82 00 10 */	beq .L_80150A0C
/* 80150A00 0014D940  38 80 00 00 */	li r4, 0
/* 80150A04 0014D944  48 2D 44 51 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80150A08 0014D948  7C 60 1B 78 */	mr r0, r3
.L_80150A0C:
/* 80150A0C 0014D94C  90 1F 01 0C */	stw r0, 0x10c(r31)
/* 80150A10 0014D950  38 60 00 B0 */	li r3, 0xb0
/* 80150A14 0014D954  4B ED 34 91 */	bl __nw__FUl
/* 80150A18 0014D958  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A1C 0014D95C  41 82 00 10 */	beq .L_80150A2C
/* 80150A20 0014D960  38 80 00 01 */	li r4, 1
/* 80150A24 0014D964  48 2D 44 31 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80150A28 0014D968  7C 60 1B 78 */	mr r0, r3
.L_80150A2C:
/* 80150A2C 0014D96C  90 1F 01 10 */	stw r0, 0x110(r31)
/* 80150A30 0014D970  38 60 02 54 */	li r3, 0x254
/* 80150A34 0014D974  4B ED 34 71 */	bl __nw__FUl
/* 80150A38 0014D978  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A3C 0014D97C  41 82 00 10 */	beq .L_80150A4C
/* 80150A40 0014D980  7F 84 E3 78 */	mr r4, r28
/* 80150A44 0014D984  48 0E E9 AD */	bl __ct__Q24Game10PlayCameraFPQ24Game4Navi
/* 80150A48 0014D988  7C 60 1B 78 */	mr r0, r3
.L_80150A4C:
/* 80150A4C 0014D98C  90 1F 01 04 */	stw r0, 0x104(r31)
/* 80150A50 0014D990  38 60 02 54 */	li r3, 0x254
/* 80150A54 0014D994  4B ED 34 51 */	bl __nw__FUl
/* 80150A58 0014D998  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A5C 0014D99C  41 82 00 10 */	beq .L_80150A6C
/* 80150A60 0014D9A0  7F 64 DB 78 */	mr r4, r27
/* 80150A64 0014D9A4  48 0E E9 8D */	bl __ct__Q24Game10PlayCameraFPQ24Game4Navi
/* 80150A68 0014D9A8  7C 60 1B 78 */	mr r0, r3
.L_80150A6C:
/* 80150A6C 0014D9AC  90 1F 01 08 */	stw r0, 0x108(r31)
/* 80150A70 0014D9B0  38 60 00 3C */	li r3, 0x3c
/* 80150A74 0014D9B4  4B ED 34 31 */	bl __nw__FUl
/* 80150A78 0014D9B8  7C 60 1B 79 */	or. r0, r3, r3
/* 80150A7C 0014D9BC  41 82 00 0C */	beq .L_80150A88
/* 80150A80 0014D9C0  48 0F FF 09 */	bl __ct__Q24Game9CameraMgrFv
/* 80150A84 0014D9C4  7C 60 1B 78 */	mr r0, r3
.L_80150A88:
/* 80150A88 0014D9C8  90 0D 96 A0 */	stw r0, cameraMgr__4Game@sda21(r13)
/* 80150A8C 0014D9CC  7C 03 03 78 */	mr r3, r0
/* 80150A90 0014D9D0  48 0F FF 41 */	bl loadResource__Q24Game9CameraMgrFv
/* 80150A94 0014D9D4  80 8D 96 A0 */	lwz r4, cameraMgr__4Game@sda21(r13)
/* 80150A98 0014D9D8  7F E3 FB 78 */	mr r3, r31
/* 80150A9C 0014D9DC  48 01 45 15 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150AA0 0014D9E0  80 82 2A F8 */	lwz r4, lbl_80520E58@sda21(r2)
/* 80150AA4 0014D9E4  38 60 01 80 */	li r3, 0x180
/* 80150AA8 0014D9E8  80 02 2A FC */	lwz r0, (lbl_80520E58+4)@sda21(r2)
/* 80150AAC 0014D9EC  90 81 00 08 */	stw r4, 8(r1)
/* 80150AB0 0014D9F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150AB4 0014D9F4  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 80150AB8 0014D9F8  90 01 00 08 */	stw r0, 8(r1)
/* 80150ABC 0014D9FC  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 80150AC0 0014DA00  90 01 00 0C */	stw r0, 0xc(r1)
/* 80150AC4 0014DA04  4B ED 33 E1 */	bl __nw__FUl
/* 80150AC8 0014DA08  7C 60 1B 79 */	or. r0, r3, r3
/* 80150ACC 0014DA0C  41 82 00 14 */	beq .L_80150AE0
/* 80150AD0 0014DA10  38 A1 00 08 */	addi r5, r1, 8
/* 80150AD4 0014DA14  38 80 00 02 */	li r4, 2
/* 80150AD8 0014DA18  48 2C AC 51 */	bl __ct__11BlendCameraFiPP6Camera
/* 80150ADC 0014DA1C  7C 60 1B 78 */	mr r0, r3
.L_80150AE0:
/* 80150AE0 0014DA20  90 1F 00 50 */	stw r0, 0x50(r31)
/* 80150AE4 0014DA24  38 00 00 00 */	li r0, 0
/* 80150AE8 0014DA28  38 60 00 34 */	li r3, 0x34
/* 80150AEC 0014DA2C  98 1F 00 58 */	stb r0, 0x58(r31)
/* 80150AF0 0014DA30  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 80150AF4 0014DA34  80 9F 01 28 */	lwz r4, 0x128(r31)
/* 80150AF8 0014DA38  90 04 23 3C */	stw r0, 0x233c(r4)
/* 80150AFC 0014DA3C  4B ED 33 A9 */	bl __nw__FUl
/* 80150B00 0014DA40  7C 60 1B 79 */	or. r0, r3, r3
/* 80150B04 0014DA44  41 82 00 0C */	beq .L_80150B10
/* 80150B08 0014DA48  48 10 27 FD */	bl __ct__Q24Game9RumbleMgrFv
/* 80150B0C 0014DA4C  7C 60 1B 78 */	mr r0, r3
.L_80150B10:
/* 80150B10 0014DA50  90 0D 96 A8 */	stw r0, rumbleMgr__4Game@sda21(r13)
/* 80150B14 0014DA54  7C 03 03 78 */	mr r3, r0
/* 80150B18 0014DA58  48 10 28 35 */	bl loadResource__Q24Game9RumbleMgrFv
/* 80150B1C 0014DA5C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80150B20 0014DA60  48 10 29 85 */	bl init__Q24Game9RumbleMgrFv
/* 80150B24 0014DA64  80 8D 96 A8 */	lwz r4, rumbleMgr__4Game@sda21(r13)
/* 80150B28 0014DA68  7F E3 FB 78 */	mr r3, r31
/* 80150B2C 0014DA6C  48 01 44 85 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150B30 0014DA70  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150B34 0014DA74  3B 60 00 00 */	li r27, 0
/* 80150B38 0014DA78  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80150B3C 0014DA7C  28 00 00 00 */	cmplwi r0, 0
/* 80150B40 0014DA80  41 82 00 08 */	beq .L_80150B48
/* 80150B44 0014DA84  3B 60 00 01 */	li r27, 1
.L_80150B48:
/* 80150B48 0014DA88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150B4C 0014DA8C  38 82 A2 20 */	addi r4, r2, lbl_80518580@sda21
/* 80150B50 0014DA90  38 A0 00 00 */	li r5, 0
/* 80150B54 0014DA94  48 2D 28 09 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150B58 0014DA98  38 60 00 3C */	li r3, 0x3c
/* 80150B5C 0014DA9C  4B ED 33 49 */	bl __nw__FUl
/* 80150B60 0014DAA0  7C 60 1B 79 */	or. r0, r3, r3
/* 80150B64 0014DAA4  41 82 00 0C */	beq .L_80150B70
/* 80150B68 0014DAA8  48 07 CF D5 */	bl __ct__Q24Game7ItemMgrFv
/* 80150B6C 0014DAAC  7C 60 1B 78 */	mr r0, r3
.L_80150B70:
/* 80150B70 0014DAB0  90 0D 94 38 */	stw r0, itemMgr__4Game@sda21(r13)
/* 80150B74 0014DAB4  7F E3 FB 78 */	mr r3, r31
/* 80150B78 0014DAB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150B7C 0014DABC  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80150B80 0014DAC0  7D 89 03 A6 */	mtctr r12
/* 80150B84 0014DAC4  4E 80 04 21 */	bctrl 
/* 80150B88 0014DAC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80150B8C 0014DACC  41 82 00 14 */	beq .L_80150BA0
/* 80150B90 0014DAD0  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80150B94 0014DAD4  38 80 00 03 */	li r4, 3
/* 80150B98 0014DAD8  48 09 40 01 */	bl createManagers__Q24Game7ItemMgrFUl
/* 80150B9C 0014DADC  48 00 00 28 */	b .L_80150BC4
.L_80150BA0:
/* 80150BA0 0014DAE0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80150BA4 0014DAE4  41 82 00 14 */	beq .L_80150BB8
/* 80150BA8 0014DAE8  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80150BAC 0014DAEC  38 80 00 01 */	li r4, 1
/* 80150BB0 0014DAF0  48 09 3F E9 */	bl createManagers__Q24Game7ItemMgrFUl
/* 80150BB4 0014DAF4  48 00 00 10 */	b .L_80150BC4
.L_80150BB8:
/* 80150BB8 0014DAF8  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80150BBC 0014DAFC  38 80 00 02 */	li r4, 2
/* 80150BC0 0014DB00  48 09 3F D9 */	bl createManagers__Q24Game7ItemMgrFUl
.L_80150BC4:
/* 80150BC4 0014DB04  80 8D 94 38 */	lwz r4, itemMgr__4Game@sda21(r13)
/* 80150BC8 0014DB08  28 04 00 00 */	cmplwi r4, 0
/* 80150BCC 0014DB0C  41 82 00 08 */	beq .L_80150BD4
/* 80150BD0 0014DB10  38 84 00 1C */	addi r4, r4, 0x1c
.L_80150BD4:
/* 80150BD4 0014DB14  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150BD8 0014DB18  48 06 53 71 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80150BDC 0014DB1C  80 8D 94 38 */	lwz r4, itemMgr__4Game@sda21(r13)
/* 80150BE0 0014DB20  7F E3 FB 78 */	mr r3, r31
/* 80150BE4 0014DB24  48 01 43 CD */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150BE8 0014DB28  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150BEC 0014DB2C  38 82 A2 20 */	addi r4, r2, lbl_80518580@sda21
/* 80150BF0 0014DB30  48 2D 27 75 */	bl heapStatusEnd__6SystemFPc
/* 80150BF4 0014DB34  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150BF8 0014DB38  38 9E 03 A0 */	addi r4, r30, 0x3a0
/* 80150BFC 0014DB3C  38 A0 00 00 */	li r5, 0
/* 80150C00 0014DB40  48 2D 27 5D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150C04 0014DB44  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80150C08 0014DB48  38 80 00 64 */	li r4, 0x64
/* 80150C0C 0014DB4C  48 00 12 B5 */	bl "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"
/* 80150C10 0014DB50  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150C14 0014DB54  38 9E 03 A0 */	addi r4, r30, 0x3a0
/* 80150C18 0014DB58  48 2D 27 4D */	bl heapStatusEnd__6SystemFPc
/* 80150C1C 0014DB5C  38 60 00 90 */	li r3, 0x90
/* 80150C20 0014DB60  4B ED 32 85 */	bl __nw__FUl
/* 80150C24 0014DB64  7C 64 1B 79 */	or. r4, r3, r3
/* 80150C28 0014DB68  41 82 00 0C */	beq .L_80150C34
/* 80150C2C 0014DB6C  4B FB C0 BD */	bl __ct__Q24Game15GeneralEnemyMgrFv
/* 80150C30 0014DB70  7C 64 1B 78 */	mr r4, r3
.L_80150C34:
/* 80150C34 0014DB74  90 8D 91 E0 */	stw r4, generalEnemyMgr__4Game@sda21(r13)
/* 80150C38 0014DB78  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150C3C 0014DB7C  48 06 53 0D */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80150C40 0014DB80  80 8D 91 E0 */	lwz r4, generalEnemyMgr__4Game@sda21(r13)
/* 80150C44 0014DB84  28 04 00 00 */	cmplwi r4, 0
/* 80150C48 0014DB88  41 82 00 08 */	beq .L_80150C50
/* 80150C4C 0014DB8C  38 84 00 04 */	addi r4, r4, 4
.L_80150C50:
/* 80150C50 0014DB90  7F E3 FB 78 */	mr r3, r31
/* 80150C54 0014DB94  48 01 43 5D */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 80150C58 0014DB98  7F E3 FB 78 */	mr r3, r31
/* 80150C5C 0014DB9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150C60 0014DBA0  81 8C 01 20 */	lwz r12, 0x120(r12)
/* 80150C64 0014DBA4  7D 89 03 A6 */	mtctr r12
/* 80150C68 0014DBA8  4E 80 04 21 */	bctrl 
/* 80150C6C 0014DBAC  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 80150C70 0014DBB0  28 00 00 00 */	cmplwi r0, 0
/* 80150C74 0014DBB4  40 82 04 E4 */	bne .L_80151158
/* 80150C78 0014DBB8  7F E3 FB 78 */	mr r3, r31
/* 80150C7C 0014DBBC  3B A0 00 01 */	li r29, 1
/* 80150C80 0014DBC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150C84 0014DBC4  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80150C88 0014DBC8  7D 89 03 A6 */	mtctr r12
/* 80150C8C 0014DBCC  4E 80 04 21 */	bctrl 
/* 80150C90 0014DBD0  7C 65 1B 78 */	mr r5, r3
/* 80150C94 0014DBD4  38 61 00 94 */	addi r3, r1, 0x94
/* 80150C98 0014DBD8  38 9E 03 B4 */	addi r4, r30, 0x3b4
/* 80150C9C 0014DBDC  4C C6 31 82 */	crclr 6
/* 80150CA0 0014DBE0  4B F7 67 99 */	bl sprintf
/* 80150CA4 0014DBE4  7F E3 FB 78 */	mr r3, r31
/* 80150CA8 0014DBE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150CAC 0014DBEC  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80150CB0 0014DBF0  7D 89 03 A6 */	mtctr r12
/* 80150CB4 0014DBF4  4E 80 04 21 */	bctrl 
/* 80150CB8 0014DBF8  38 61 00 94 */	addi r3, r1, 0x94
/* 80150CBC 0014DBFC  48 08 68 71 */	bl load__Q34Game4Cave8CaveInfoFPc
/* 80150CC0 0014DC00  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80150CC4 0014DC04  7C 7B 1B 78 */	mr r27, r3
/* 80150CC8 0014DC08  3B 80 00 00 */	li r28, 0
/* 80150CCC 0014DC0C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80150CD0 0014DC10  2C 00 00 01 */	cmpwi r0, 1
/* 80150CD4 0014DC14  40 82 00 98 */	bne .L_80150D6C
/* 80150CD8 0014DC18  7F E3 FB 78 */	mr r3, r31
/* 80150CDC 0014DC1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150CE0 0014DC20  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80150CE4 0014DC24  7D 89 03 A6 */	mtctr r12
/* 80150CE8 0014DC28  4E 80 04 21 */	bctrl 
/* 80150CEC 0014DC2C  7C 64 1B 78 */	mr r4, r3
/* 80150CF0 0014DC30  38 62 A2 28 */	addi r3, r2, lbl_80518588@sda21
/* 80150CF4 0014DC34  4B F7 99 CD */	bl strcmp
/* 80150CF8 0014DC38  2C 03 00 00 */	cmpwi r3, 0
/* 80150CFC 0014DC3C  41 82 00 70 */	beq .L_80150D6C
/* 80150D00 0014DC40  7F E3 FB 78 */	mr r3, r31
/* 80150D04 0014DC44  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150D08 0014DC48  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80150D0C 0014DC4C  7D 89 03 A6 */	mtctr r12
/* 80150D10 0014DC50  4E 80 04 21 */	bctrl 
/* 80150D14 0014DC54  7C 65 1B 78 */	mr r5, r3
/* 80150D18 0014DC58  38 61 00 94 */	addi r3, r1, 0x94
/* 80150D1C 0014DC5C  38 9E 03 D4 */	addi r4, r30, 0x3d4
/* 80150D20 0014DC60  4C C6 31 82 */	crclr 6
/* 80150D24 0014DC64  4B F7 67 15 */	bl sprintf
/* 80150D28 0014DC68  38 60 00 20 */	li r3, 0x20
/* 80150D2C 0014DC6C  4B ED 31 79 */	bl __nw__FUl
/* 80150D30 0014DC70  7C 7C 1B 79 */	or. r28, r3, r3
/* 80150D34 0014DC74  41 82 00 0C */	beq .L_80150D40
/* 80150D38 0014DC78  48 0F 4F 25 */	bl __ct__Q34Game4Cave11EditMapUnitFv
/* 80150D3C 0014DC7C  7C 7C 1B 78 */	mr r28, r3
.L_80150D40:
/* 80150D40 0014DC80  7F 83 E3 78 */	mr r3, r28
/* 80150D44 0014DC84  38 81 00 94 */	addi r4, r1, 0x94
/* 80150D48 0014DC88  48 0F 4F 45 */	bl read__Q34Game4Cave11EditMapUnitFPc
/* 80150D4C 0014DC8C  7F E3 FB 78 */	mr r3, r31
/* 80150D50 0014DC90  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150D54 0014DC94  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80150D58 0014DC98  7D 89 03 A6 */	mtctr r12
/* 80150D5C 0014DC9C  4E 80 04 21 */	bctrl 
/* 80150D60 0014DCA0  7C 64 1B 78 */	mr r4, r3
/* 80150D64 0014DCA4  7F 83 E3 78 */	mr r3, r28
/* 80150D68 0014DCA8  48 0F 51 C5 */	bl setEditNumber__Q34Game4Cave11EditMapUnitFi
.L_80150D6C:
/* 80150D6C 0014DCAC  7F E3 FB 78 */	mr r3, r31
/* 80150D70 0014DCB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150D74 0014DCB4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80150D78 0014DCB8  7D 89 03 A6 */	mtctr r12
/* 80150D7C 0014DCBC  4E 80 04 21 */	bctrl 
/* 80150D80 0014DCC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80150D84 0014DCC4  41 82 00 0C */	beq .L_80150D90
/* 80150D88 0014DCC8  7F 63 DB 78 */	mr r3, r27
/* 80150D8C 0014DCCC  48 08 67 25 */	bl disablePelplant__Q34Game4Cave8CaveInfoFv
.L_80150D90:
/* 80150D90 0014DCD0  38 60 01 20 */	li r3, 0x120
/* 80150D94 0014DCD4  4B ED 31 11 */	bl __nw__FUl
/* 80150D98 0014DCD8  7C 60 1B 79 */	or. r0, r3, r3
/* 80150D9C 0014DCDC  41 82 00 14 */	beq .L_80150DB0
/* 80150DA0 0014DCE0  7F 65 DB 78 */	mr r5, r27
/* 80150DA4 0014DCE4  38 80 00 01 */	li r4, 1
/* 80150DA8 0014DCE8  48 06 6D 59 */	bl __ct__Q24Game10RoomMapMgrFPQ34Game4Cave8CaveInfo
/* 80150DAC 0014DCEC  7C 60 1B 78 */	mr r0, r3
.L_80150DB0:
/* 80150DB0 0014DCF0  90 0D 93 08 */	stw r0, mapMgr__4Game@sda21(r13)
/* 80150DB4 0014DCF4  38 82 A2 30 */	addi r4, r2, lbl_80518590@sda21
/* 80150DB8 0014DCF8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150DBC 0014DCFC  38 A0 00 00 */	li r5, 0
/* 80150DC0 0014DD00  48 2D 25 9D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150DC4 0014DD04  7F E3 FB 78 */	mr r3, r31
/* 80150DC8 0014DD08  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150DCC 0014DD0C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80150DD0 0014DD10  7D 89 03 A6 */	mtctr r12
/* 80150DD4 0014DD14  4E 80 04 21 */	bctrl 
/* 80150DD8 0014DD18  7C 64 1B 78 */	mr r4, r3
/* 80150DDC 0014DD1C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80150DE0 0014DD20  7F 85 E3 78 */	mr r5, r28
/* 80150DE4 0014DD24  48 06 71 F9 */	bl createRandomMap__Q24Game10RoomMapMgrFiPQ34Game4Cave11EditMapUnit
/* 80150DE8 0014DD28  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150DEC 0014DD2C  38 82 A2 30 */	addi r4, r2, lbl_80518590@sda21
/* 80150DF0 0014DD30  48 2D 25 75 */	bl heapStatusEnd__6SystemFPc
/* 80150DF4 0014DD34  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 80150DF8 0014DD38  28 04 00 00 */	cmplwi r4, 0
/* 80150DFC 0014DD3C  41 82 00 08 */	beq .L_80150E04
/* 80150E00 0014DD40  80 84 00 00 */	lwz r4, 0(r4)
.L_80150E04:
/* 80150E04 0014DD44  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150E08 0014DD48  48 06 51 41 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80150E0C 0014DD4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80150E10 0014DD50  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80150E14 0014DD54  2C 00 00 01 */	cmpwi r0, 1
/* 80150E18 0014DD58  40 82 01 C4 */	bne .L_80150FDC
/* 80150E1C 0014DD5C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150E20 0014DD60  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150E24 0014DD64  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150E28 0014DD68  38 A0 00 37 */	li r5, 0x37
/* 80150E2C 0014DD6C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80150E30 0014DD70  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150E34 0014DD74  38 00 00 04 */	li r0, 4
/* 80150E38 0014DD78  7F E3 FB 78 */	mr r3, r31
/* 80150E3C 0014DD7C  90 81 00 88 */	stw r4, 0x88(r1)
/* 80150E40 0014DD80  38 81 00 88 */	addi r4, r1, 0x88
/* 80150E44 0014DD84  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80150E48 0014DD88  90 01 00 90 */	stw r0, 0x90(r1)
/* 80150E4C 0014DD8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150E50 0014DD90  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150E54 0014DD94  7D 89 03 A6 */	mtctr r12
/* 80150E58 0014DD98  4E 80 04 21 */	bctrl 
/* 80150E5C 0014DD9C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150E60 0014DDA0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150E64 0014DDA4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150E68 0014DDA8  38 A0 00 17 */	li r5, 0x17
/* 80150E6C 0014DDAC  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80150E70 0014DDB0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150E74 0014DDB4  38 00 00 04 */	li r0, 4
/* 80150E78 0014DDB8  7F E3 FB 78 */	mr r3, r31
/* 80150E7C 0014DDBC  90 81 00 7C */	stw r4, 0x7c(r1)
/* 80150E80 0014DDC0  38 81 00 7C */	addi r4, r1, 0x7c
/* 80150E84 0014DDC4  90 A1 00 80 */	stw r5, 0x80(r1)
/* 80150E88 0014DDC8  90 01 00 84 */	stw r0, 0x84(r1)
/* 80150E8C 0014DDCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150E90 0014DDD0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150E94 0014DDD4  7D 89 03 A6 */	mtctr r12
/* 80150E98 0014DDD8  4E 80 04 21 */	bctrl 
/* 80150E9C 0014DDDC  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150EA0 0014DDE0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150EA4 0014DDE4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150EA8 0014DDE8  38 A0 00 13 */	li r5, 0x13
/* 80150EAC 0014DDEC  90 01 00 70 */	stw r0, 0x70(r1)
/* 80150EB0 0014DDF0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150EB4 0014DDF4  38 00 00 0C */	li r0, 0xc
/* 80150EB8 0014DDF8  7F E3 FB 78 */	mr r3, r31
/* 80150EBC 0014DDFC  90 81 00 70 */	stw r4, 0x70(r1)
/* 80150EC0 0014DE00  38 81 00 70 */	addi r4, r1, 0x70
/* 80150EC4 0014DE04  90 A1 00 74 */	stw r5, 0x74(r1)
/* 80150EC8 0014DE08  90 01 00 78 */	stw r0, 0x78(r1)
/* 80150ECC 0014DE0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150ED0 0014DE10  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150ED4 0014DE14  7D 89 03 A6 */	mtctr r12
/* 80150ED8 0014DE18  4E 80 04 21 */	bctrl 
/* 80150EDC 0014DE1C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150EE0 0014DE20  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150EE4 0014DE24  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150EE8 0014DE28  38 A0 00 5D */	li r5, 0x5d
/* 80150EEC 0014DE2C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80150EF0 0014DE30  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150EF4 0014DE34  38 00 00 02 */	li r0, 2
/* 80150EF8 0014DE38  7F E3 FB 78 */	mr r3, r31
/* 80150EFC 0014DE3C  90 81 00 64 */	stw r4, 0x64(r1)
/* 80150F00 0014DE40  38 81 00 64 */	addi r4, r1, 0x64
/* 80150F04 0014DE44  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80150F08 0014DE48  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80150F0C 0014DE4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150F10 0014DE50  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150F14 0014DE54  7D 89 03 A6 */	mtctr r12
/* 80150F18 0014DE58  4E 80 04 21 */	bctrl 
/* 80150F1C 0014DE5C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150F20 0014DE60  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150F24 0014DE64  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150F28 0014DE68  38 A0 00 18 */	li r5, 0x18
/* 80150F2C 0014DE6C  90 01 00 58 */	stw r0, 0x58(r1)
/* 80150F30 0014DE70  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150F34 0014DE74  38 00 00 04 */	li r0, 4
/* 80150F38 0014DE78  7F E3 FB 78 */	mr r3, r31
/* 80150F3C 0014DE7C  90 81 00 58 */	stw r4, 0x58(r1)
/* 80150F40 0014DE80  38 81 00 58 */	addi r4, r1, 0x58
/* 80150F44 0014DE84  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 80150F48 0014DE88  90 01 00 60 */	stw r0, 0x60(r1)
/* 80150F4C 0014DE8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150F50 0014DE90  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150F54 0014DE94  7D 89 03 A6 */	mtctr r12
/* 80150F58 0014DE98  4E 80 04 21 */	bctrl 
/* 80150F5C 0014DE9C  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150F60 0014DEA0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150F64 0014DEA4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150F68 0014DEA8  38 A0 00 19 */	li r5, 0x19
/* 80150F6C 0014DEAC  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80150F70 0014DEB0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150F74 0014DEB4  38 00 00 04 */	li r0, 4
/* 80150F78 0014DEB8  7F E3 FB 78 */	mr r3, r31
/* 80150F7C 0014DEBC  90 81 00 4C */	stw r4, 0x4c(r1)
/* 80150F80 0014DEC0  38 81 00 4C */	addi r4, r1, 0x4c
/* 80150F84 0014DEC4  90 A1 00 50 */	stw r5, 0x50(r1)
/* 80150F88 0014DEC8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80150F8C 0014DECC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150F90 0014DED0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150F94 0014DED4  7D 89 03 A6 */	mtctr r12
/* 80150F98 0014DED8  4E 80 04 21 */	bctrl 
/* 80150F9C 0014DEDC  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 80150FA0 0014DEE0  3C 60 80 4B */	lis r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
/* 80150FA4 0014DEE4  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 80150FA8 0014DEE8  38 A0 00 0E */	li r5, 0xe
/* 80150FAC 0014DEEC  90 01 00 40 */	stw r0, 0x40(r1)
/* 80150FB0 0014DEF0  38 83 61 6C */	addi r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
/* 80150FB4 0014DEF4  38 00 00 14 */	li r0, 0x14
/* 80150FB8 0014DEF8  7F E3 FB 78 */	mr r3, r31
/* 80150FBC 0014DEFC  90 81 00 40 */	stw r4, 0x40(r1)
/* 80150FC0 0014DF00  38 81 00 40 */	addi r4, r1, 0x40
/* 80150FC4 0014DF04  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80150FC8 0014DF08  90 01 00 48 */	stw r0, 0x48(r1)
/* 80150FCC 0014DF0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80150FD0 0014DF10  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80150FD4 0014DF14  7D 89 03 A6 */	mtctr r12
/* 80150FD8 0014DF18  4E 80 04 21 */	bctrl 
.L_80150FDC:
/* 80150FDC 0014DF1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80150FE0 0014DF20  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 80150FE4 0014DF24  38 A0 00 00 */	li r5, 0
/* 80150FE8 0014DF28  48 2D 23 75 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80150FEC 0014DF2C  C0 22 A2 40 */	lfs f1, lbl_805185A0@sda21(r2)
/* 80150FF0 0014DF30  38 81 00 30 */	addi r4, r1, 0x30
/* 80150FF4 0014DF34  C0 02 A2 44 */	lfs f0, lbl_805185A4@sda21(r2)
/* 80150FF8 0014DF38  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80150FFC 0014DF3C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151000 0014DF40  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80151004 0014DF44  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80151008 0014DF48  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8015100C 0014DF4C  81 83 00 04 */	lwz r12, 4(r3)
/* 80151010 0014DF50  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80151014 0014DF54  7D 89 03 A6 */	mtctr r12
/* 80151018 0014DF58  4E 80 04 21 */	bctrl 
/* 8015101C 0014DF5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151020 0014DF60  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 80151024 0014DF64  38 A0 00 00 */	li r5, 0
/* 80151028 0014DF68  48 2D 23 35 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8015102C 0014DF6C  38 60 00 48 */	li r3, 0x48
/* 80151030 0014DF70  4B ED 2E 75 */	bl __nw__FUl
/* 80151034 0014DF74  7C 60 1B 79 */	or. r0, r3, r3
/* 80151038 0014DF78  41 82 00 0C */	beq .L_80151044
/* 8015103C 0014DF7C  48 00 72 81 */	bl __ct__Q24Game11CellPyramidFv
/* 80151040 0014DF80  7C 60 1B 78 */	mr r0, r3
.L_80151044:
/* 80151044 0014DF84  90 0D 92 CC */	stw r0, platCellMgr__4Game@sda21(r13)
/* 80151048 0014DF88  7C 03 03 78 */	mr r3, r0
/* 8015104C 0014DF8C  C0 22 A2 48 */	lfs f1, lbl_805185A8@sda21(r2)
/* 80151050 0014DF90  38 81 00 30 */	addi r4, r1, 0x30
/* 80151054 0014DF94  48 00 79 B9 */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 80151058 0014DF98  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015105C 0014DF9C  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 80151060 0014DFA0  48 2D 23 05 */	bl heapStatusEnd__6SystemFPc
/* 80151064 0014DFA4  C0 22 A2 40 */	lfs f1, lbl_805185A0@sda21(r2)
/* 80151068 0014DFA8  38 81 00 20 */	addi r4, r1, 0x20
/* 8015106C 0014DFAC  C0 02 A2 44 */	lfs f0, lbl_805185A4@sda21(r2)
/* 80151070 0014DFB0  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80151074 0014DFB4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151078 0014DFB8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8015107C 0014DFBC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80151080 0014DFC0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80151084 0014DFC4  81 83 00 04 */	lwz r12, 4(r3)
/* 80151088 0014DFC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8015108C 0014DFCC  7D 89 03 A6 */	mtctr r12
/* 80151090 0014DFD0  4E 80 04 21 */	bctrl 
/* 80151094 0014DFD4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151098 0014DFD8  38 9E 03 F0 */	addi r4, r30, 0x3f0
/* 8015109C 0014DFDC  38 A0 00 00 */	li r5, 0
/* 801510A0 0014DFE0  48 2D 22 BD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801510A4 0014DFE4  38 60 00 48 */	li r3, 0x48
/* 801510A8 0014DFE8  4B ED 2D FD */	bl __nw__FUl
/* 801510AC 0014DFEC  7C 60 1B 79 */	or. r0, r3, r3
/* 801510B0 0014DFF0  41 82 00 0C */	beq .L_801510BC
/* 801510B4 0014DFF4  48 00 72 09 */	bl __ct__Q24Game11CellPyramidFv
/* 801510B8 0014DFF8  7C 60 1B 78 */	mr r0, r3
.L_801510BC:
/* 801510BC 0014DFFC  90 0D 92 D0 */	stw r0, mapRoomCellMgr__4Game@sda21(r13)
/* 801510C0 0014E000  7C 03 03 78 */	mr r3, r0
/* 801510C4 0014E004  C0 22 A2 4C */	lfs f1, lbl_805185AC@sda21(r2)
/* 801510C8 0014E008  38 81 00 20 */	addi r4, r1, 0x20
/* 801510CC 0014E00C  48 00 79 41 */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 801510D0 0014E010  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801510D4 0014E014  38 9E 03 F0 */	addi r4, r30, 0x3f0
/* 801510D8 0014E018  48 2D 22 8D */	bl heapStatusEnd__6SystemFPc
/* 801510DC 0014E01C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801510E0 0014E020  48 06 8D 61 */	bl entryToMapRoomCellMgr__Q24Game10RoomMapMgrFv
/* 801510E4 0014E024  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801510E8 0014E028  48 06 90 75 */	bl createGlobalCollision__Q24Game10RoomMapMgrFv
/* 801510EC 0014E02C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801510F0 0014E030  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 801510F4 0014E034  48 2D 22 71 */	bl heapStatusEnd__6SystemFPc
/* 801510F8 0014E038  80 1F 01 14 */	lwz r0, 0x114(r31)
/* 801510FC 0014E03C  38 A0 FF FF */	li r5, -1
/* 80151100 0014E040  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80151104 0014E044  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80151108 0014E048  4B FB C4 F1 */	bl allocateEnemys__Q24Game15GeneralEnemyMgrFUci
/* 8015110C 0014E04C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80151110 0014E050  4B FB BE A5 */	bl setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
/* 80151114 0014E054  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80151118 0014E058  48 01 C2 91 */	bl setupResources__Q24Game9PelletMgrFv
/* 8015111C 0014E05C  7F E3 FB 78 */	mr r3, r31
/* 80151120 0014E060  81 9F 00 00 */	lwz r12, 0(r31)
/* 80151124 0014E064  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80151128 0014E068  7D 89 03 A6 */	mtctr r12
/* 8015112C 0014E06C  4E 80 04 21 */	bctrl 
/* 80151130 0014E070  2C 03 00 00 */	cmpwi r3, 0
/* 80151134 0014E074  40 82 00 10 */	bne .L_80151144
/* 80151138 0014E078  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015113C 0014E07C  38 00 00 01 */	li r0, 1
/* 80151140 0014E080  98 03 00 6C */	stb r0, 0x6c(r3)
.L_80151144:
/* 80151144 0014E084  48 0E B9 0D */	bl globalInstance__Q29TexCaster3MgrFv
/* 80151148 0014E088  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8015114C 0014E08C  80 63 00 08 */	lwz r3, 8(r3)
/* 80151150 0014E090  48 02 2A 39 */	bl setCloseAll__Q24Game8RouteMgrFv
/* 80151154 0014E094  48 00 00 08 */	b .L_8015115C
.L_80151158:
/* 80151158 0014E098  48 0E B8 F9 */	bl globalInstance__Q29TexCaster3MgrFv
.L_8015115C:
/* 8015115C 0014E09C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151160 0014E0A0  80 03 00 08 */	lwz r0, 8(r3)
/* 80151164 0014E0A4  28 00 00 00 */	cmplwi r0, 0
/* 80151168 0014E0A8  41 82 00 38 */	beq .L_801511A0
/* 8015116C 0014E0AC  38 60 00 14 */	li r3, 0x14
/* 80151170 0014E0B0  4B ED 2D 35 */	bl __nw__FUl
/* 80151174 0014E0B4  7C 60 1B 79 */	or. r0, r3, r3
/* 80151178 0014E0B8  41 82 00 0C */	beq .L_80151184
/* 8015117C 0014E0BC  48 05 24 71 */	bl __ct__Q24Game10PathfinderFv
/* 80151180 0014E0C0  7C 60 1B 78 */	mr r0, r3
.L_80151184:
/* 80151184 0014E0C4  90 0D 93 80 */	stw r0, testPathfinder__4Game@sda21(r13)
/* 80151188 0014E0C8  7C 03 03 78 */	mr r3, r0
/* 8015118C 0014E0CC  80 AD 93 08 */	lwz r5, mapMgr__4Game@sda21(r13)
/* 80151190 0014E0D0  38 80 00 64 */	li r4, 0x64
/* 80151194 0014E0D4  80 A5 00 08 */	lwz r5, 8(r5)
/* 80151198 0014E0D8  48 05 24 B5 */	bl create__Q24Game10PathfinderFiPQ24Game8RouteMgr
/* 8015119C 0014E0DC  48 00 00 0C */	b .L_801511A8
.L_801511A0:
/* 801511A0 0014E0E0  38 00 00 00 */	li r0, 0
/* 801511A4 0014E0E4  90 0D 93 80 */	stw r0, testPathfinder__4Game@sda21(r13)
.L_801511A8:
/* 801511A8 0014E0E8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801511AC 0014E0EC  80 63 00 08 */	lwz r3, 8(r3)
/* 801511B0 0014E0F0  28 03 00 00 */	cmplwi r3, 0
/* 801511B4 0014E0F4  41 82 00 08 */	beq .L_801511BC
/* 801511B8 0014E0F8  48 02 1B 59 */	bl refreshWater__Q24Game8RouteMgrFv
.L_801511BC:
/* 801511BC 0014E0FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801511C0 0014E100  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 801511C4 0014E104  38 A0 00 00 */	li r5, 0
/* 801511C8 0014E108  48 2D 21 95 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801511CC 0014E10C  38 60 00 48 */	li r3, 0x48
/* 801511D0 0014E110  4B ED 2C D5 */	bl __nw__FUl
/* 801511D4 0014E114  7C 60 1B 79 */	or. r0, r3, r3
/* 801511D8 0014E118  41 82 00 0C */	beq .L_801511E4
/* 801511DC 0014E11C  48 00 70 E1 */	bl __ct__Q24Game11CellPyramidFv
/* 801511E0 0014E120  7C 60 1B 78 */	mr r0, r3
.L_801511E4:
/* 801511E4 0014E124  C0 22 A2 40 */	lfs f1, lbl_805185A0@sda21(r2)
/* 801511E8 0014E128  38 81 00 10 */	addi r4, r1, 0x10
/* 801511EC 0014E12C  C0 02 A2 44 */	lfs f0, lbl_805185A4@sda21(r2)
/* 801511F0 0014E130  90 0D 92 C8 */	stw r0, cellMgr__4Game@sda21(r13)
/* 801511F4 0014E134  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801511F8 0014E138  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801511FC 0014E13C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80151200 0014E140  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80151204 0014E144  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80151208 0014E148  81 83 00 04 */	lwz r12, 4(r3)
/* 8015120C 0014E14C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80151210 0014E150  7D 89 03 A6 */	mtctr r12
/* 80151214 0014E154  4E 80 04 21 */	bctrl 
/* 80151218 0014E158  80 6D 88 2C */	lwz r3, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8015121C 0014E15C  4B ED 25 99 */	bl getFreeSize__7JKRHeapFv
/* 80151220 0014E160  80 6D 92 C8 */	lwz r3, cellMgr__4Game@sda21(r13)
/* 80151224 0014E164  38 81 00 10 */	addi r4, r1, 0x10
/* 80151228 0014E168  C0 22 A2 50 */	lfs f1, lbl_805185B0@sda21(r2)
/* 8015122C 0014E16C  48 00 77 E1 */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 80151230 0014E170  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80151234 0014E174  40 82 00 4C */	bne .L_80151280
/* 80151238 0014E178  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015123C 0014E17C  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 80151240 0014E180  38 A0 00 00 */	li r5, 0
/* 80151244 0014E184  48 2D 21 19 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80151248 0014E188  38 60 00 48 */	li r3, 0x48
/* 8015124C 0014E18C  4B ED 2C 59 */	bl __nw__FUl
/* 80151250 0014E190  7C 60 1B 79 */	or. r0, r3, r3
/* 80151254 0014E194  41 82 00 0C */	beq .L_80151260
/* 80151258 0014E198  48 00 70 65 */	bl __ct__Q24Game11CellPyramidFv
/* 8015125C 0014E19C  7C 60 1B 78 */	mr r0, r3
.L_80151260:
/* 80151260 0014E1A0  90 0D 92 CC */	stw r0, platCellMgr__4Game@sda21(r13)
/* 80151264 0014E1A4  7C 03 03 78 */	mr r3, r0
/* 80151268 0014E1A8  C0 22 A2 48 */	lfs f1, lbl_805185A8@sda21(r2)
/* 8015126C 0014E1AC  38 81 00 10 */	addi r4, r1, 0x10
/* 80151270 0014E1B0  48 00 77 9D */	bl create__Q24Game11CellPyramidFR10BoundBox2df
/* 80151274 0014E1B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151278 0014E1B8  38 9E 03 E4 */	addi r4, r30, 0x3e4
/* 8015127C 0014E1BC  48 2D 20 E9 */	bl heapStatusEnd__6SystemFPc
.L_80151280:
/* 80151280 0014E1C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80151284 0014E1C4  38 82 A2 38 */	addi r4, r2, lbl_80518598@sda21
/* 80151288 0014E1C8  48 2D 20 DD */	bl heapStatusEnd__6SystemFPc
/* 8015128C 0014E1CC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80151290 0014E1D0  41 82 00 0C */	beq .L_8015129C
/* 80151294 0014E1D4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151298 0014E1D8  48 06 84 F9 */	bl placeObjects__Q24Game10RoomMapMgrFv
.L_8015129C:
/* 8015129C 0014E1DC  7F E3 FB 78 */	mr r3, r31
/* 801512A0 0014E1E0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 801512A4 0014E1E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801512A8 0014E1E8  83 84 00 24 */	lwz r28, 0x24(r4)
/* 801512AC 0014E1EC  81 8C 00 FC */	lwz r12, 0xfc(r12)
/* 801512B0 0014E1F0  7F 84 E3 78 */	mr r4, r28
/* 801512B4 0014E1F4  7D 89 03 A6 */	mtctr r12
/* 801512B8 0014E1F8  4E 80 04 21 */	bctrl 
/* 801512BC 0014E1FC  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 801512C0 0014E200  7F 84 E3 78 */	mr r4, r28
/* 801512C4 0014E204  48 26 A8 65 */	bl setViewport__11ParticleMgrFR8Graphics
/* 801512C8 0014E208  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 801512CC 0014E20C  48 26 A4 4D */	bl start__11ParticleMgrFv
/* 801512D0 0014E210  7F E3 FB 78 */	mr r3, r31
/* 801512D4 0014E214  81 9F 00 00 */	lwz r12, 0(r31)
/* 801512D8 0014E218  81 8C 01 04 */	lwz r12, 0x104(r12)
/* 801512DC 0014E21C  7D 89 03 A6 */	mtctr r12
/* 801512E0 0014E220  4E 80 04 21 */	bctrl 
/* 801512E4 0014E224  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 801512E8 0014E228  48 07 CA 6D */	bl initDependency__Q24Game7ItemMgrFv
/* 801512EC 0014E22C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 801512F0 0014E230  38 80 00 00 */	li r4, 0
/* 801512F4 0014E234  48 10 0B F9 */	bl init__Q24Game9CameraMgrFi
/* 801512F8 0014E238  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 801512FC 0014E23C  C0 22 A2 58 */	lfs f1, lbl_805185B8@sda21(r2)
/* 80151300 0014E240  C0 03 00 58 */	lfs f0, 0x58(r3)
/* 80151304 0014E244  C0 42 A2 54 */	lfs f2, lbl_805185B4@sda21(r2)
/* 80151308 0014E248  EC 01 00 32 */	fmuls f0, f1, f0
/* 8015130C 0014E24C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151310 0014E250  EF E2 00 32 */	fmuls f31, f2, f0
/* 80151314 0014E254  48 01 13 E5 */	bl getMapRotation__Q24Game6MapMgrFv
/* 80151318 0014E258  EC 3F 08 2A */	fadds f1, f31, f1
/* 8015131C 0014E25C  48 2C 08 B5 */	bl roundAng__Ff
/* 80151320 0014E260  FF E0 08 90 */	fmr f31, f1
/* 80151324 0014E264  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151328 0014E268  48 01 13 D1 */	bl getMapRotation__Q24Game6MapMgrFv
/* 8015132C 0014E26C  FC 20 F8 90 */	fmr f1, f31
/* 80151330 0014E270  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80151334 0014E274  38 80 00 02 */	li r4, 2
/* 80151338 0014E278  48 10 0D 01 */	bl setCameraAngle__Q24Game9CameraMgrFfi
/* 8015133C 0014E27C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80151340 0014E280  38 80 00 02 */	li r4, 2
/* 80151344 0014E284  48 10 11 99 */	bl controllerUnLock__Q24Game9CameraMgrFi
/* 80151348 0014E288  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8015134C 0014E28C  38 9E 03 8C */	addi r4, r30, 0x38c
/* 80151350 0014E290  48 2D 20 15 */	bl heapStatusEnd__6SystemFPc
/* 80151354 0014E294  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80151358 0014E298  48 00 E4 F1 */	bl setupSoundViewerAndBas__Q24Game7PikiMgrFv
/* 8015135C 0014E29C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80151360 0014E2A0  48 00 A6 C1 */	bl setupSoundViewerAndBas__Q24Game7NaviMgrFv
/* 80151364 0014E2A4  80 6D 94 38 */	lwz r3, itemMgr__4Game@sda21(r13)
/* 80151368 0014E2A8  48 07 D7 5D */	bl setupSoundViewerAndBas__Q24Game7ItemMgrFv
/* 8015136C 0014E2AC  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 80151370 0014E2B0  48 01 D8 45 */	bl setupSoundViewerAndBas__Q24Game9PelletMgrFv
/* 80151374 0014E2B4  7F E3 FB 78 */	mr r3, r31
/* 80151378 0014E2B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8015137C 0014E2BC  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 80151380 0014E2C0  7D 89 03 A6 */	mtctr r12
/* 80151384 0014E2C4  4E 80 04 21 */	bctrl 
/* 80151388 0014E2C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015138C 0014E2CC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80151390 0014E2D0  60 00 00 01 */	ori r0, r0, 1
/* 80151394 0014E2D4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80151398 0014E2D8  80 6D 91 D8 */	lwz r3, farmMgr__Q24Game4Farm@sda21(r13)
/* 8015139C 0014E2DC  28 03 00 00 */	cmplwi r3, 0
/* 801513A0 0014E2E0  41 82 00 08 */	beq .L_801513A8
/* 801513A4 0014E2E4  4B FD 2D 35 */	bl setupSound__Q34Game4Farm7FarmMgrFv
.L_801513A8:
/* 801513A8 0014E2E8  38 7E 04 00 */	addi r3, r30, 0x400
/* 801513AC 0014E2EC  4C C6 31 82 */	crclr 6
/* 801513B0 0014E2F0  4B F9 C3 3D */	bl OSReport
/* 801513B4 0014E2F4  E3 E1 02 B8 */	psq_l f31, 696(r1), 0, qr0
/* 801513B8 0014E2F8  CB E1 02 B0 */	lfd f31, 0x2b0(r1)
/* 801513BC 0014E2FC  BB 61 02 9C */	lmw r27, 0x29c(r1)
/* 801513C0 0014E300  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 801513C4 0014E304  7C 08 03 A6 */	mtlr r0
/* 801513C8 0014E308  38 21 02 C0 */	addi r1, r1, 0x2c0
/* 801513CC 0014E30C  4E 80 00 20 */	blr 
.endfn setupFloatMemory__Q24Game15BaseGameSectionFv
.endif

.fn onSetSoundScene__Q24Game15BaseGameSectionFv, weak
/* 801513D0 0014E310  4E 80 00 20 */	blr 
.endfn onSetSoundScene__Q24Game15BaseGameSectionFv

.fn getCurrFloor__Q24Game15BaseGameSectionFv, weak
/* 801513D4 0014E314  38 60 FF FF */	li r3, -1
/* 801513D8 0014E318  4E 80 00 20 */	blr 
.endfn getCurrFloor__Q24Game15BaseGameSectionFv

.fn challengeDisablePelplant__Q24Game15BaseGameSectionFv, weak
/* 801513DC 0014E31C  38 60 00 01 */	li r3, 1
/* 801513E0 0014E320  4E 80 00 20 */	blr 
.endfn challengeDisablePelplant__Q24Game15BaseGameSectionFv

.fn getVsEditNumber__Q24Game15BaseGameSectionFv, weak
/* 801513E4 0014E324  38 60 FF FE */	li r3, -2
/* 801513E8 0014E328  4E 80 00 20 */	blr 
.endfn getVsEditNumber__Q24Game15BaseGameSectionFv

.fn getEditorFilename__Q24Game15BaseGameSectionFv, weak
/* 801513EC 0014E32C  38 62 A2 28 */	addi r3, r2, lbl_80518588@sda21
/* 801513F0 0014E330  4E 80 00 20 */	blr 
.endfn getEditorFilename__Q24Game15BaseGameSectionFv

.fn getCaveFilename__Q24Game15BaseGameSectionFv, weak
/* 801513F4 0014E334  3C 60 80 48 */	lis r3, lbl_8047CD58@ha
/* 801513F8 0014E338  38 63 CD 58 */	addi r3, r3, lbl_8047CD58@l
/* 801513FC 0014E33C  4E 80 00 20 */	blr 
.endfn getCaveFilename__Q24Game15BaseGameSectionFv

.fn onSetupFloatMemory__Q24Game15BaseGameSectionFv, weak
/* 80151400 0014E340  4E 80 00 20 */	blr 
.endfn onSetupFloatMemory__Q24Game15BaseGameSectionFv

.fn isDevelopSection__Q24Game15BaseGameSectionFv, weak
/* 80151404 0014E344  38 60 00 01 */	li r3, 1
/* 80151408 0014E348  4E 80 00 20 */	blr 
.endfn isDevelopSection__Q24Game15BaseGameSectionFv

.fn "__dt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>Fv", weak
/* 8015140C 0014E34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151410 0014E350  7C 08 02 A6 */	mflr r0
/* 80151414 0014E354  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151418 0014E358  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015141C 0014E35C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80151420 0014E360  41 82 00 24 */	beq .L_80151444
/* 80151424 0014E364  3C A0 80 4B */	lis r5, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
/* 80151428 0014E368  7C 80 07 35 */	extsh. r0, r4
/* 8015142C 0014E36C  38 85 0C E0 */	addi r4, r5, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
/* 80151430 0014E370  38 00 00 00 */	li r0, 0
/* 80151434 0014E374  90 9F 00 00 */	stw r4, 0(r31)
/* 80151438 0014E378  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8015143C 0014E37C  40 81 00 08 */	ble .L_80151444
/* 80151440 0014E380  4B ED 2C 75 */	bl __dl__FPv
.L_80151444:
/* 80151444 0014E384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151448 0014E388  7F E3 FB 78 */	mr r3, r31
/* 8015144C 0014E38C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80151450 0014E390  7C 08 03 A6 */	mtlr r0
/* 80151454 0014E394  38 21 00 10 */	addi r1, r1, 0x10
/* 80151458 0014E398  4E 80 00 20 */	blr 
.endfn "__dt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>Fv"

.if version == 0
.fn setDrawBuffer__Q24Game15BaseGameSectionFi, global
/* 8015145C 0014E39C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151460 0014E3A0  7C 08 02 A6 */	mflr r0
/* 80151464 0014E3A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151468 0014E3A8  38 00 00 00 */	li r0, 0
/* 8015146C 0014E3AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80151470 0014E3B0  7C 9F 23 79 */	or. r31, r4, r4
/* 80151474 0014E3B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80151478 0014E3B8  7C 7E 1B 78 */	mr r30, r3
/* 8015147C 0014E3BC  41 80 00 10 */	blt .L_8015148C
/* 80151480 0014E3C0  2C 1F 00 0A */	cmpwi r31, 0xa
/* 80151484 0014E3C4  40 80 00 08 */	bge .L_8015148C
/* 80151488 0014E3C8  38 00 00 01 */	li r0, 1
.L_8015148C:
/* 8015148C 0014E3CC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80151490 0014E3D0  40 82 00 20 */	bne .L_801514B0
/* 80151494 0014E3D4  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 80151498 0014E3D8  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8015149C 0014E3DC  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 801514A0 0014E3E0  38 80 14 AF */	li r4, 0x14af
/* 801514A4 0014E3E4  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 801514A8 0014E3E8  4C C6 31 82 */	crclr 6
/* 801514AC 0014E3EC  4B ED 91 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801514B0:
/* 801514B0 0014E3F0  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 801514B4 0014E3F4  7F E4 FB 78 */	mr r4, r31
/* 801514B8 0014E3F8  48 30 46 0D */	bl get__Q23Sys11DrawBuffersFi
/* 801514BC 0014E3FC  3C 80 80 51 */	lis r4, j3dSys@ha
/* 801514C0 0014E400  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801514C4 0014E404  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 801514C8 0014E408  7F E4 FB 78 */	mr r4, r31
/* 801514CC 0014E40C  90 03 00 48 */	stw r0, 0x48(r3)
/* 801514D0 0014E410  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 801514D4 0014E414  48 30 45 F1 */	bl get__Q23Sys11DrawBuffersFi
/* 801514D8 0014E418  3C 80 80 51 */	lis r4, j3dSys@ha
/* 801514DC 0014E41C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801514E0 0014E420  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 801514E4 0014E424  90 03 00 4C */	stw r0, 0x4c(r3)
/* 801514E8 0014E428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801514EC 0014E42C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801514F0 0014E430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801514F4 0014E434  7C 08 03 A6 */	mtlr r0
/* 801514F8 0014E438  38 21 00 10 */	addi r1, r1, 0x10
/* 801514FC 0014E43C  4E 80 00 20 */	blr 
.endfn setDrawBuffer__Q24Game15BaseGameSectionFi
.else
.fn setDrawBuffer__Q24Game15BaseGameSectionFi, global
/* 8015145C 0014E39C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151460 0014E3A0  7C 08 02 A6 */	mflr r0
/* 80151464 0014E3A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151468 0014E3A8  38 00 00 00 */	li r0, 0
/* 8015146C 0014E3AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80151470 0014E3B0  7C 9F 23 79 */	or. r31, r4, r4
/* 80151474 0014E3B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80151478 0014E3B8  7C 7E 1B 78 */	mr r30, r3
/* 8015147C 0014E3BC  41 80 00 10 */	blt .L_8015148C
/* 80151480 0014E3C0  2C 1F 00 0A */	cmpwi r31, 0xa
/* 80151484 0014E3C4  40 80 00 08 */	bge .L_8015148C
/* 80151488 0014E3C8  38 00 00 01 */	li r0, 1
.L_8015148C:
/* 8015148C 0014E3CC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80151490 0014E3D0  40 82 00 20 */	bne .L_801514B0
/* 80151494 0014E3D4  3C 60 80 48 */	lis r3, lbl_8047C964@ha
/* 80151498 0014E3D8  3C A0 80 48 */	lis r5, lbl_8047C9B8@ha
/* 8015149C 0014E3DC  38 63 C9 64 */	addi r3, r3, lbl_8047C964@l
/* 801514A0 0014E3E0  38 80 14 AF */	li r4, 0x14af
/* 801514A4 0014E3E4  38 A5 C9 B8 */	addi r5, r5, lbl_8047C9B8@l
/* 801514A8 0014E3E8  4C C6 31 82 */	crclr 6
/* 801514AC 0014E3EC  4B ED 91 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801514B0:
/* 801514B0 0014E3F0  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 801514B4 0014E3F4  7F E4 FB 78 */	mr r4, r31
/* 801514B8 0014E3F8  48 30 46 0D */	bl get__Q23Sys11DrawBuffersFi
/* 801514BC 0014E3FC  3C 80 80 51 */	lis r4, j3dSys@ha
/* 801514C0 0014E400  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801514C4 0014E404  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 801514C8 0014E408  7F E4 FB 78 */	mr r4, r31
/* 801514CC 0014E40C  90 03 00 48 */	stw r0, 0x48(r3)
/* 801514D0 0014E410  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 801514D4 0014E414  48 30 45 F1 */	bl get__Q23Sys11DrawBuffersFi
/* 801514D8 0014E418  3C 80 80 51 */	lis r4, j3dSys@ha
/* 801514DC 0014E41C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801514E0 0014E420  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 801514E4 0014E424  90 03 00 4C */	stw r0, 0x4c(r3)
/* 801514E8 0014E428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801514EC 0014E42C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801514F0 0014E430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801514F4 0014E434  7C 08 03 A6 */	mtlr r0
/* 801514F8 0014E438  38 21 00 10 */	addi r1, r1, 0x10
/* 801514FC 0014E43C  4E 80 00 20 */	blr 
.endfn setDrawBuffer__Q24Game15BaseGameSectionFi
.endif

.fn postSetupFloatMemory__Q24Game15BaseGameSectionFv, global
/* 80151500 0014E440  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151504 0014E444  7C 08 02 A6 */	mflr r0
/* 80151508 0014E448  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015150C 0014E44C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80151510 0014E450  81 83 00 04 */	lwz r12, 4(r3)
/* 80151514 0014E454  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80151518 0014E458  7D 89 03 A6 */	mtctr r12
/* 8015151C 0014E45C  4E 80 04 21 */	bctrl 
/* 80151520 0014E460  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151524 0014E464  7C 08 03 A6 */	mtlr r0
/* 80151528 0014E468  38 21 00 10 */	addi r1, r1, 0x10
/* 8015152C 0014E46C  4E 80 00 20 */	blr 
.endfn postSetupFloatMemory__Q24Game15BaseGameSectionFv

.fn setupJUTTextures__Q24Game6MapMgrFv, weak
/* 80151530 0014E470  4E 80 00 20 */	blr 
.endfn setupJUTTextures__Q24Game6MapMgrFv

.fn createFallPikminSound__Q24Game15BaseGameSectionFv, global
/* 80151534 0014E474  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80151538 0014E478  7C 08 02 A6 */	mflr r0
/* 8015153C 0014E47C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80151540 0014E480  90 01 00 24 */	stw r0, 0x24(r1)
/* 80151544 0014E484  38 00 00 00 */	li r0, 0
/* 80151548 0014E488  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8015154C 0014E48C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80151550 0014E490  28 00 00 00 */	cmplwi r0, 0
/* 80151554 0014E494  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80151558 0014E498  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015155C 0014E49C  90 81 00 08 */	stw r4, 8(r1)
/* 80151560 0014E4A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80151564 0014E4A4  90 61 00 10 */	stw r3, 0x10(r1)
/* 80151568 0014E4A8  40 82 00 1C */	bne .L_80151584
/* 8015156C 0014E4AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80151570 0014E4B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80151574 0014E4B4  7D 89 03 A6 */	mtctr r12
/* 80151578 0014E4B8  4E 80 04 21 */	bctrl 
/* 8015157C 0014E4BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80151580 0014E4C0  48 00 01 80 */	b .L_80151700
.L_80151584:
/* 80151584 0014E4C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80151588 0014E4C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8015158C 0014E4CC  7D 89 03 A6 */	mtctr r12
/* 80151590 0014E4D0  4E 80 04 21 */	bctrl 
/* 80151594 0014E4D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80151598 0014E4D8  48 00 00 58 */	b .L_801515F0
.L_8015159C:
/* 8015159C 0014E4DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801515A0 0014E4E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801515A4 0014E4E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801515A8 0014E4E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801515AC 0014E4EC  7D 89 03 A6 */	mtctr r12
/* 801515B0 0014E4F0  4E 80 04 21 */	bctrl 
/* 801515B4 0014E4F4  7C 64 1B 78 */	mr r4, r3
/* 801515B8 0014E4F8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801515BC 0014E4FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801515C0 0014E500  81 8C 00 08 */	lwz r12, 8(r12)
/* 801515C4 0014E504  7D 89 03 A6 */	mtctr r12
/* 801515C8 0014E508  4E 80 04 21 */	bctrl 
/* 801515CC 0014E50C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801515D0 0014E510  40 82 01 30 */	bne .L_80151700
/* 801515D4 0014E514  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801515D8 0014E518  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801515DC 0014E51C  81 83 00 00 */	lwz r12, 0(r3)
/* 801515E0 0014E520  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801515E4 0014E524  7D 89 03 A6 */	mtctr r12
/* 801515E8 0014E528  4E 80 04 21 */	bctrl 
/* 801515EC 0014E52C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801515F0:
/* 801515F0 0014E530  81 81 00 08 */	lwz r12, 8(r1)
/* 801515F4 0014E534  38 61 00 08 */	addi r3, r1, 8
/* 801515F8 0014E538  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801515FC 0014E53C  7D 89 03 A6 */	mtctr r12
/* 80151600 0014E540  4E 80 04 21 */	bctrl 
/* 80151604 0014E544  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80151608 0014E548  41 82 FF 94 */	beq .L_8015159C
/* 8015160C 0014E54C  48 00 00 F4 */	b .L_80151700
.L_80151610:
/* 80151610 0014E550  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80151614 0014E554  81 83 00 00 */	lwz r12, 0(r3)
/* 80151618 0014E558  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8015161C 0014E55C  7D 89 03 A6 */	mtctr r12
/* 80151620 0014E560  4E 80 04 21 */	bctrl 
/* 80151624 0014E564  7C 7F 1B 78 */	mr r31, r3
/* 80151628 0014E568  38 80 00 00 */	li r4, 0
/* 8015162C 0014E56C  4B FE A4 25 */	bl movie_begin__Q24Game8CreatureFb
/* 80151630 0014E570  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80151634 0014E574  38 80 28 37 */	li r4, 0x2837
/* 80151638 0014E578  38 A0 00 00 */	li r5, 0
/* 8015163C 0014E57C  38 C0 00 00 */	li r6, 0
/* 80151640 0014E580  48 31 0F 41 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 80151644 0014E584  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151648 0014E588  28 00 00 00 */	cmplwi r0, 0
/* 8015164C 0014E58C  40 82 00 24 */	bne .L_80151670
/* 80151650 0014E590  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80151654 0014E594  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80151658 0014E598  81 83 00 00 */	lwz r12, 0(r3)
/* 8015165C 0014E59C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80151660 0014E5A0  7D 89 03 A6 */	mtctr r12
/* 80151664 0014E5A4  4E 80 04 21 */	bctrl 
/* 80151668 0014E5A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8015166C 0014E5AC  48 00 00 94 */	b .L_80151700
.L_80151670:
/* 80151670 0014E5B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80151674 0014E5B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80151678 0014E5B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8015167C 0014E5BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80151680 0014E5C0  7D 89 03 A6 */	mtctr r12
/* 80151684 0014E5C4  4E 80 04 21 */	bctrl 
/* 80151688 0014E5C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8015168C 0014E5CC  48 00 00 58 */	b .L_801516E4
.L_80151690:
/* 80151690 0014E5D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80151694 0014E5D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80151698 0014E5D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8015169C 0014E5DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801516A0 0014E5E0  7D 89 03 A6 */	mtctr r12
/* 801516A4 0014E5E4  4E 80 04 21 */	bctrl 
/* 801516A8 0014E5E8  7C 64 1B 78 */	mr r4, r3
/* 801516AC 0014E5EC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801516B0 0014E5F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801516B4 0014E5F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801516B8 0014E5F8  7D 89 03 A6 */	mtctr r12
/* 801516BC 0014E5FC  4E 80 04 21 */	bctrl 
/* 801516C0 0014E600  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801516C4 0014E604  40 82 00 3C */	bne .L_80151700
/* 801516C8 0014E608  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801516CC 0014E60C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801516D0 0014E610  81 83 00 00 */	lwz r12, 0(r3)
/* 801516D4 0014E614  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801516D8 0014E618  7D 89 03 A6 */	mtctr r12
/* 801516DC 0014E61C  4E 80 04 21 */	bctrl 
/* 801516E0 0014E620  90 61 00 0C */	stw r3, 0xc(r1)
.L_801516E4:
/* 801516E4 0014E624  81 81 00 08 */	lwz r12, 8(r1)
/* 801516E8 0014E628  38 61 00 08 */	addi r3, r1, 8
/* 801516EC 0014E62C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801516F0 0014E630  7D 89 03 A6 */	mtctr r12
/* 801516F4 0014E634  4E 80 04 21 */	bctrl 
/* 801516F8 0014E638  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801516FC 0014E63C  41 82 FF 94 */	beq .L_80151690
.L_80151700:
/* 80151700 0014E640  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80151704 0014E644  81 83 00 00 */	lwz r12, 0(r3)
/* 80151708 0014E648  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8015170C 0014E64C  7D 89 03 A6 */	mtctr r12
/* 80151710 0014E650  4E 80 04 21 */	bctrl 
/* 80151714 0014E654  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80151718 0014E658  7C 04 18 40 */	cmplw r4, r3
/* 8015171C 0014E65C  40 82 FE F4 */	bne .L_80151610
/* 80151720 0014E660  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80151724 0014E664  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80151728 0014E668  7C 08 03 A6 */	mtlr r0
/* 8015172C 0014E66C  38 21 00 20 */	addi r1, r1, 0x20
/* 80151730 0014E670  4E 80 00 20 */	blr 
.endfn createFallPikminSound__Q24Game15BaseGameSectionFv

.fn captureRadarmap__Q24Game15BaseGameSectionFR8Graphics, global
/* 80151734 0014E674  4E 80 00 20 */	blr 
.endfn captureRadarmap__Q24Game15BaseGameSectionFR8Graphics

.fn satisfy__27PikiCond_ExceptChappyPikminFPQ24Game4Piki, weak
/* 80151738 0014E678  88 84 02 B8 */	lbz r4, 0x2b8(r4)
/* 8015173C 0014E67C  20 64 00 05 */	subfic r3, r4, 5
/* 80151740 0014E680  38 04 FF FB */	addi r0, r4, -5
/* 80151744 0014E684  7C 60 03 78 */	or r0, r3, r0
/* 80151748 0014E688  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8015174C 0014E68C  4E 80 00 20 */	blr 
.endfn satisfy__27PikiCond_ExceptChappyPikminFPQ24Game4Piki

.fn "__dt__17Container<5Plane>Fv", weak
/* 80151750 0014E690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151754 0014E694  7C 08 02 A6 */	mflr r0
/* 80151758 0014E698  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015175C 0014E69C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80151760 0014E6A0  7C 9F 23 78 */	mr r31, r4
/* 80151764 0014E6A4  93 C1 00 08 */	stw r30, 8(r1)
/* 80151768 0014E6A8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8015176C 0014E6AC  41 82 00 38 */	beq .L_801517A4
/* 80151770 0014E6B0  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 80151774 0014E6B4  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 80151778 0014E6B8  90 1E 00 00 */	stw r0, 0(r30)
/* 8015177C 0014E6BC  41 82 00 18 */	beq .L_80151794
/* 80151780 0014E6C0  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80151784 0014E6C4  38 80 00 00 */	li r4, 0
/* 80151788 0014E6C8  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8015178C 0014E6CC  90 1E 00 00 */	stw r0, 0(r30)
/* 80151790 0014E6D0  48 2B FD F9 */	bl __dt__5CNodeFv
.L_80151794:
/* 80151794 0014E6D4  7F E0 07 35 */	extsh. r0, r31
/* 80151798 0014E6D8  40 81 00 0C */	ble .L_801517A4
/* 8015179C 0014E6DC  7F C3 F3 78 */	mr r3, r30
/* 801517A0 0014E6E0  4B ED 29 15 */	bl __dl__FPv
.L_801517A4:
/* 801517A4 0014E6E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801517A8 0014E6E8  7F C3 F3 78 */	mr r3, r30
/* 801517AC 0014E6EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801517B0 0014E6F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801517B4 0014E6F4  7C 08 03 A6 */	mtlr r0
/* 801517B8 0014E6F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801517BC 0014E6FC  4E 80 00 20 */	blr 
.endfn "__dt__17Container<5Plane>Fv"

.fn "__dt__22ArrayContainer<5Plane>Fv", weak
/* 801517C0 0014E700  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801517C4 0014E704  7C 08 02 A6 */	mflr r0
/* 801517C8 0014E708  90 01 00 14 */	stw r0, 0x14(r1)
/* 801517CC 0014E70C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801517D0 0014E710  7C 9F 23 78 */	mr r31, r4
/* 801517D4 0014E714  93 C1 00 08 */	stw r30, 8(r1)
/* 801517D8 0014E718  7C 7E 1B 79 */	or. r30, r3, r3
/* 801517DC 0014E71C  41 82 00 48 */	beq .L_80151824
/* 801517E0 0014E720  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 801517E4 0014E724  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 801517E8 0014E728  90 1E 00 00 */	stw r0, 0(r30)
/* 801517EC 0014E72C  41 82 00 28 */	beq .L_80151814
/* 801517F0 0014E730  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 801517F4 0014E734  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 801517F8 0014E738  90 1E 00 00 */	stw r0, 0(r30)
/* 801517FC 0014E73C  41 82 00 18 */	beq .L_80151814
/* 80151800 0014E740  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80151804 0014E744  38 80 00 00 */	li r4, 0
/* 80151808 0014E748  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8015180C 0014E74C  90 1E 00 00 */	stw r0, 0(r30)
/* 80151810 0014E750  48 2B FD 79 */	bl __dt__5CNodeFv
.L_80151814:
/* 80151814 0014E754  7F E0 07 35 */	extsh. r0, r31
/* 80151818 0014E758  40 81 00 0C */	ble .L_80151824
/* 8015181C 0014E75C  7F C3 F3 78 */	mr r3, r30
/* 80151820 0014E760  4B ED 28 95 */	bl __dl__FPv
.L_80151824:
/* 80151824 0014E764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151828 0014E768  7F C3 F3 78 */	mr r3, r30
/* 8015182C 0014E76C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80151830 0014E770  83 C1 00 08 */	lwz r30, 8(r1)
/* 80151834 0014E774  7C 08 03 A6 */	mtlr r0
/* 80151838 0014E778  38 21 00 10 */	addi r1, r1, 0x10
/* 8015183C 0014E77C  4E 80 00 20 */	blr 
.endfn "__dt__22ArrayContainer<5Plane>Fv"

.fn readObject__9CullPlaneFR6StreamR5Plane, weak
/* 80151840 0014E780  4E 80 00 20 */	blr 
.endfn readObject__9CullPlaneFR6StreamR5Plane

.fn writeObject__9CullPlaneFR6StreamR5Plane, weak
/* 80151844 0014E784  4E 80 00 20 */	blr 
.endfn writeObject__9CullPlaneFR6StreamR5Plane

.fn __dt__9CullPlaneFv, weak
/* 80151848 0014E788  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015184C 0014E78C  7C 08 02 A6 */	mflr r0
/* 80151850 0014E790  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151854 0014E794  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80151858 0014E798  7C 9F 23 78 */	mr r31, r4
/* 8015185C 0014E79C  93 C1 00 08 */	stw r30, 8(r1)
/* 80151860 0014E7A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80151864 0014E7A4  41 82 00 58 */	beq .L_801518BC
/* 80151868 0014E7A8  3C 80 80 4B */	lis r4, __vt__9CullPlane@ha
/* 8015186C 0014E7AC  38 04 0E 94 */	addi r0, r4, __vt__9CullPlane@l
/* 80151870 0014E7B0  90 1E 00 00 */	stw r0, 0(r30)
/* 80151874 0014E7B4  41 82 00 38 */	beq .L_801518AC
/* 80151878 0014E7B8  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8015187C 0014E7BC  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 80151880 0014E7C0  90 1E 00 00 */	stw r0, 0(r30)
/* 80151884 0014E7C4  41 82 00 28 */	beq .L_801518AC
/* 80151888 0014E7C8  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 8015188C 0014E7CC  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 80151890 0014E7D0  90 1E 00 00 */	stw r0, 0(r30)
/* 80151894 0014E7D4  41 82 00 18 */	beq .L_801518AC
/* 80151898 0014E7D8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8015189C 0014E7DC  38 80 00 00 */	li r4, 0
/* 801518A0 0014E7E0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801518A4 0014E7E4  90 1E 00 00 */	stw r0, 0(r30)
/* 801518A8 0014E7E8  48 2B FC E1 */	bl __dt__5CNodeFv
.L_801518AC:
/* 801518AC 0014E7EC  7F E0 07 35 */	extsh. r0, r31
/* 801518B0 0014E7F0  40 81 00 0C */	ble .L_801518BC
/* 801518B4 0014E7F4  7F C3 F3 78 */	mr r3, r30
/* 801518B8 0014E7F8  4B ED 27 FD */	bl __dl__FPv
.L_801518BC:
/* 801518BC 0014E7FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801518C0 0014E800  7F C3 F3 78 */	mr r3, r30
/* 801518C4 0014E804  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801518C8 0014E808  83 C1 00 08 */	lwz r30, 8(r1)
/* 801518CC 0014E80C  7C 08 03 A6 */	mtlr r0
/* 801518D0 0014E810  38 21 00 10 */	addi r1, r1, 0x10
/* 801518D4 0014E814  4E 80 00 20 */	blr 
.endfn __dt__9CullPlaneFv

.fn forceFinish__Q24Game15BaseGameSectionFv, weak
/* 801518D8 0014E818  38 00 00 01 */	li r0, 1
/* 801518DC 0014E81C  98 03 00 37 */	stb r0, 0x37(r3)
/* 801518E0 0014E820  88 63 00 37 */	lbz r3, 0x37(r3)
/* 801518E4 0014E824  4E 80 00 20 */	blr 
.endfn forceFinish__Q24Game15BaseGameSectionFv

.fn addChallengeScore__Q24Game15BaseGameSectionFi, weak
/* 801518E8 0014E828  4E 80 00 20 */	blr 
.endfn addChallengeScore__Q24Game15BaseGameSectionFi

.fn startMainBgm__Q24Game15BaseGameSectionFv, weak
/* 801518EC 0014E82C  4E 80 00 20 */	blr 
.endfn startMainBgm__Q24Game15BaseGameSectionFv

.fn goNextFloor__Q24Game15BaseGameSectionFPQ34Game8ItemHole4Item, weak
/* 801518F0 0014E830  4E 80 00 20 */	blr 
.endfn goNextFloor__Q24Game15BaseGameSectionFPQ34Game8ItemHole4Item

.fn goCave__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Item, weak
/* 801518F4 0014E834  4E 80 00 20 */	blr 
.endfn goCave__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Item

.fn goMainMap__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4Item, weak
/* 801518F8 0014E838  4E 80 00 20 */	blr 
.endfn goMainMap__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4Item

.fn getCaveID__Q24Game15BaseGameSectionFv, weak
/* 801518FC 0014E83C  3C 60 6E 6F */	lis r3, 0x6E6F6E65@ha
/* 80151900 0014E840  38 63 6E 65 */	addi r3, r3, 0x6E6F6E65@l
/* 80151904 0014E844  4E 80 00 20 */	blr 
.endfn getCaveID__Q24Game15BaseGameSectionFv

.fn getCurrentCourseInfo__Q24Game15BaseGameSectionFv, weak
/* 80151908 0014E848  38 60 00 00 */	li r3, 0
/* 8015190C 0014E84C  4E 80 00 20 */	blr 
.endfn getCurrentCourseInfo__Q24Game15BaseGameSectionFv

.fn openContainerWindow__Q24Game15BaseGameSectionFv, weak
/* 80151910 0014E850  38 60 00 00 */	li r3, 0
/* 80151914 0014E854  4E 80 00 20 */	blr 
.endfn openContainerWindow__Q24Game15BaseGameSectionFv

.fn closeContainerWindow__Q24Game15BaseGameSectionFv, weak
/* 80151918 0014E858  4E 80 00 20 */	blr 
.endfn closeContainerWindow__Q24Game15BaseGameSectionFv

.fn playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature, weak
/* 8015191C 0014E85C  4E 80 00 20 */	blr 
.endfn playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature

.fn playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon, weak
/* 80151920 0014E860  4E 80 00 20 */	blr 
.endfn playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon

.fn playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki, weak
/* 80151924 0014E864  4E 80 00 20 */	blr 
.endfn playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki

.fn disableTimer__Q24Game15BaseGameSectionFUl, weak
/* 80151928 0014E868  4E 80 00 20 */	blr 
.endfn disableTimer__Q24Game15BaseGameSectionFUl

.fn onMovieStart__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl, weak
/* 8015192C 0014E86C  4E 80 00 20 */	blr 
.endfn onMovieStart__Q24Game15BaseGameSectionFPQ24Game11MovieConfigUlUl

.fn gmOrimaDown__Q24Game15BaseGameSectionFi, weak
/* 80151930 0014E870  4E 80 00 20 */	blr 
.endfn gmOrimaDown__Q24Game15BaseGameSectionFi

.fn gmPikminZero__Q24Game15BaseGameSectionFv, weak
/* 80151934 0014E874  4E 80 00 20 */	blr 
.endfn gmPikminZero__Q24Game15BaseGameSectionFv

.fn drawInit__7SectionFR8Graphics, weak
/* 80151938 0014E878  4E 80 00 20 */	blr 
.endfn drawInit__7SectionFR8Graphics

.fn doExit__7SectionFv, weak
/* 8015193C 0014E87C  4E 80 00 20 */	blr 
.endfn doExit__7SectionFv

.fn forceReset__7SectionFv, weak
/* 80151940 0014E880  38 60 00 01 */	li r3, 1
/* 80151944 0014E884  4E 80 00 20 */	blr 
.endfn forceReset__7SectionFv

.fn getCurrentSection__7SectionFv, weak
/* 80151948 0014E888  4E 80 00 20 */	blr 
.endfn getCurrentSection__7SectionFv

.fn doLoadingStart__7SectionFv, weak
/* 8015194C 0014E88C  4E 80 00 20 */	blr 
.endfn doLoadingStart__7SectionFv

.fn doLoading__7SectionFv, weak
/* 80151950 0014E890  38 60 00 00 */	li r3, 0
/* 80151954 0014E894  4E 80 00 20 */	blr 
.endfn doLoading__7SectionFv

.fn isFinishable__7SectionFv, weak
/* 80151958 0014E898  38 60 00 01 */	li r3, 1
/* 8015195C 0014E89C  4E 80 00 20 */	blr 
.endfn isFinishable__7SectionFv

.fn "writeObject__22ArrayContainer<5Plane>FR6StreamR5Plane", weak
/* 80151960 0014E8A0  4E 80 00 20 */	blr 
.endfn "writeObject__22ArrayContainer<5Plane>FR6StreamR5Plane"

.fn "readObject__22ArrayContainer<5Plane>FR6StreamR5Plane", weak
/* 80151964 0014E8A4  4E 80 00 20 */	blr 
.endfn "readObject__22ArrayContainer<5Plane>FR6StreamR5Plane"

.fn "write__22ArrayContainer<5Plane>FR6Stream", weak
/* 80151968 0014E8A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015196C 0014E8AC  7C 08 02 A6 */	mflr r0
/* 80151970 0014E8B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80151974 0014E8B4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80151978 0014E8B8  7C 9C 23 78 */	mr r28, r4
/* 8015197C 0014E8BC  7C 7B 1B 78 */	mr r27, r3
/* 80151980 0014E8C0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80151984 0014E8C4  7F 83 E3 78 */	mr r3, r28
/* 80151988 0014E8C8  48 2C 26 95 */	bl textBeginGroup__6StreamFPc
/* 8015198C 0014E8CC  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 80151990 0014E8D0  7F 83 E3 78 */	mr r3, r28
/* 80151994 0014E8D4  48 2C 2A A1 */	bl textWriteTab__6StreamFi
/* 80151998 0014E8D8  80 9B 00 20 */	lwz r4, 0x20(r27)
/* 8015199C 0014E8DC  7F 83 E3 78 */	mr r3, r28
/* 801519A0 0014E8E0  48 2C 3E 21 */	bl writeInt__6StreamFi
/* 801519A4 0014E8E4  7F 83 E3 78 */	mr r3, r28
/* 801519A8 0014E8E8  38 82 A2 5C */	addi r4, r2, lbl_805185BC@sda21
/* 801519AC 0014E8EC  4C C6 31 82 */	crclr 6
/* 801519B0 0014E8F0  48 2C 28 2D */	bl textWriteText__6StreamFPce
/* 801519B4 0014E8F4  3C 60 80 48 */	lis r3, lbl_8047CD88@ha
/* 801519B8 0014E8F8  3B A0 00 00 */	li r29, 0
/* 801519BC 0014E8FC  3B E3 CD 88 */	addi r31, r3, lbl_8047CD88@l
/* 801519C0 0014E900  3B C0 00 00 */	li r30, 0
/* 801519C4 0014E904  48 00 00 50 */	b .L_80151A14
.L_801519C8:
/* 801519C8 0014E908  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 801519CC 0014E90C  7F 83 E3 78 */	mr r3, r28
/* 801519D0 0014E910  48 2C 2A 65 */	bl textWriteTab__6StreamFi
/* 801519D4 0014E914  7F 63 DB 78 */	mr r3, r27
/* 801519D8 0014E918  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 801519DC 0014E91C  81 9B 00 00 */	lwz r12, 0(r27)
/* 801519E0 0014E920  7F 84 E3 78 */	mr r4, r28
/* 801519E4 0014E924  7C A0 F2 14 */	add r5, r0, r30
/* 801519E8 0014E928  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801519EC 0014E92C  7D 89 03 A6 */	mtctr r12
/* 801519F0 0014E930  4E 80 04 21 */	bctrl 
/* 801519F4 0014E934  80 DB 00 20 */	lwz r6, 0x20(r27)
/* 801519F8 0014E938  7F 83 E3 78 */	mr r3, r28
/* 801519FC 0014E93C  7F E4 FB 78 */	mr r4, r31
/* 80151A00 0014E940  7F A5 EB 78 */	mr r5, r29
/* 80151A04 0014E944  4C C6 31 82 */	crclr 6
/* 80151A08 0014E948  48 2C 27 D5 */	bl textWriteText__6StreamFPce
/* 80151A0C 0014E94C  3B DE 00 10 */	addi r30, r30, 0x10
/* 80151A10 0014E950  3B BD 00 01 */	addi r29, r29, 1
.L_80151A14:
/* 80151A14 0014E954  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 80151A18 0014E958  7C 1D 00 00 */	cmpw r29, r0
/* 80151A1C 0014E95C  41 80 FF AC */	blt .L_801519C8
/* 80151A20 0014E960  7F 83 E3 78 */	mr r3, r28
/* 80151A24 0014E964  48 2C 26 7D */	bl textEndGroup__6StreamFv
/* 80151A28 0014E968  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80151A2C 0014E96C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80151A30 0014E970  7C 08 03 A6 */	mtlr r0
/* 80151A34 0014E974  38 21 00 20 */	addi r1, r1, 0x20
/* 80151A38 0014E978  4E 80 00 20 */	blr 
.endfn "write__22ArrayContainer<5Plane>FR6Stream"

.fn "alloc__22ArrayContainer<5Plane>Fi", weak
/* 80151A3C 0014E97C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151A40 0014E980  7C 08 02 A6 */	mflr r0
/* 80151A44 0014E984  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151A48 0014E988  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80151A4C 0014E98C  7C 9F 23 78 */	mr r31, r4
/* 80151A50 0014E990  93 C1 00 08 */	stw r30, 8(r1)
/* 80151A54 0014E994  7C 7E 1B 78 */	mr r30, r3
/* 80151A58 0014E998  54 83 20 36 */	slwi r3, r4, 4
/* 80151A5C 0014E99C  38 63 00 10 */	addi r3, r3, 0x10
/* 80151A60 0014E9A0  4B ED 25 4D */	bl __nwa__FUl
/* 80151A64 0014E9A4  3C 80 80 15 */	lis r4, __ct__5PlaneFv@ha
/* 80151A68 0014E9A8  7F E7 FB 78 */	mr r7, r31
/* 80151A6C 0014E9AC  38 84 1C 68 */	addi r4, r4, __ct__5PlaneFv@l
/* 80151A70 0014E9B0  38 A0 00 00 */	li r5, 0
/* 80151A74 0014E9B4  38 C0 00 10 */	li r6, 0x10
/* 80151A78 0014E9B8  4B F6 FF 79 */	bl __construct_new_array
/* 80151A7C 0014E9BC  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80151A80 0014E9C0  38 00 00 00 */	li r0, 0
/* 80151A84 0014E9C4  93 FE 00 20 */	stw r31, 0x20(r30)
/* 80151A88 0014E9C8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80151A8C 0014E9CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80151A90 0014E9D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80151A94 0014E9D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151A98 0014E9D8  7C 08 03 A6 */	mtlr r0
/* 80151A9C 0014E9DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80151AA0 0014E9E0  4E 80 00 20 */	blr 
.endfn "alloc__22ArrayContainer<5Plane>Fi"

.fn "setArray__22ArrayContainer<5Plane>FP5Planei", weak
/* 80151AA4 0014E9E4  90 83 00 24 */	stw r4, 0x24(r3)
/* 80151AA8 0014E9E8  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80151AAC 0014E9EC  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80151AB0 0014E9F0  4E 80 00 20 */	blr 
.endfn "setArray__22ArrayContainer<5Plane>FP5Planei"

.fn "get__22ArrayContainer<5Plane>FPv", weak
/* 80151AB4 0014E9F4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80151AB8 0014E9F8  54 80 20 36 */	slwi r0, r4, 4
/* 80151ABC 0014E9FC  7C 63 02 14 */	add r3, r3, r0
/* 80151AC0 0014EA00  4E 80 00 20 */	blr 
.endfn "get__22ArrayContainer<5Plane>FPv"

.fn "getNext__22ArrayContainer<5Plane>FPv", weak
/* 80151AC4 0014EA04  38 64 00 01 */	addi r3, r4, 1
/* 80151AC8 0014EA08  4E 80 00 20 */	blr 
.endfn "getNext__22ArrayContainer<5Plane>FPv"

.fn "getStart__22ArrayContainer<5Plane>Fv", weak
/* 80151ACC 0014EA0C  38 60 00 00 */	li r3, 0
/* 80151AD0 0014EA10  4E 80 00 20 */	blr 
.endfn "getStart__22ArrayContainer<5Plane>Fv"

.fn "getEnd__22ArrayContainer<5Plane>Fv", weak
/* 80151AD4 0014EA14  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80151AD8 0014EA18  4E 80 00 20 */	blr 
.endfn "getEnd__22ArrayContainer<5Plane>Fv"

.fn "getAt__22ArrayContainer<5Plane>Fi", weak
/* 80151ADC 0014EA1C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80151AE0 0014EA20  54 80 20 36 */	slwi r0, r4, 4
/* 80151AE4 0014EA24  7C 63 02 14 */	add r3, r3, r0
/* 80151AE8 0014EA28  4E 80 00 20 */	blr 
.endfn "getAt__22ArrayContainer<5Plane>Fi"

.fn "getTo__22ArrayContainer<5Plane>Fv", weak
/* 80151AEC 0014EA2C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80151AF0 0014EA30  4E 80 00 20 */	blr 
.endfn "getTo__22ArrayContainer<5Plane>Fv"

.fn "getObject__17Container<5Plane>FPv", weak
/* 80151AF4 0014EA34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151AF8 0014EA38  7C 08 02 A6 */	mflr r0
/* 80151AFC 0014EA3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151B00 0014EA40  81 83 00 00 */	lwz r12, 0(r3)
/* 80151B04 0014EA44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80151B08 0014EA48  7D 89 03 A6 */	mtctr r12
/* 80151B0C 0014EA4C  4E 80 04 21 */	bctrl 
/* 80151B10 0014EA50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151B14 0014EA54  7C 08 03 A6 */	mtlr r0
/* 80151B18 0014EA58  38 21 00 10 */	addi r1, r1, 0x10
/* 80151B1C 0014EA5C  4E 80 00 20 */	blr 
.endfn "getObject__17Container<5Plane>FPv"

.fn "getAt__17Container<5Plane>Fi", weak
/* 80151B20 0014EA60  38 60 00 00 */	li r3, 0
/* 80151B24 0014EA64  4E 80 00 20 */	blr 
.endfn "getAt__17Container<5Plane>Fi"

.fn "getTo__17Container<5Plane>Fv", weak
/* 80151B28 0014EA68  38 60 00 00 */	li r3, 0
/* 80151B2C 0014EA6C  4E 80 00 20 */	blr 
.endfn "getTo__17Container<5Plane>Fv"

.fn "invoke__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>FPQ24Game11MovieConfigUlUl", weak
/* 80151B30 0014EA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151B34 0014EA74  7C 08 02 A6 */	mflr r0
/* 80151B38 0014EA78  7C 67 1B 78 */	mr r7, r3
/* 80151B3C 0014EA7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151B40 0014EA80  39 87 00 08 */	addi r12, r7, 8
/* 80151B44 0014EA84  80 63 00 04 */	lwz r3, 4(r3)
/* 80151B48 0014EA88  4B F6 FF DD */	bl __ptmf_scall
/* 80151B4C 0014EA8C  60 00 00 00 */	nop 
/* 80151B50 0014EA90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151B54 0014EA94  7C 08 03 A6 */	mtlr r0
/* 80151B58 0014EA98  38 21 00 10 */	addi r1, r1, 0x10
/* 80151B5C 0014EA9C  4E 80 00 20 */	blr 
.endfn "invoke__63Delegate3<Q24Game15BaseGameSection,PQ24Game11MovieConfig,Ul,Ul>FPQ24Game11MovieConfigUlUl"

.fn "invoke__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>FR10Vector3<f>", weak
/* 80151B60 0014EAA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151B64 0014EAA4  7C 08 02 A6 */	mflr r0
/* 80151B68 0014EAA8  7C 65 1B 78 */	mr r5, r3
/* 80151B6C 0014EAAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151B70 0014EAB0  39 85 00 08 */	addi r12, r5, 8
/* 80151B74 0014EAB4  80 63 00 04 */	lwz r3, 4(r3)
/* 80151B78 0014EAB8  4B F6 FF AD */	bl __ptmf_scall
/* 80151B7C 0014EABC  60 00 00 00 */	nop 
/* 80151B80 0014EAC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151B84 0014EAC4  7C 08 03 A6 */	mtlr r0
/* 80151B88 0014EAC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80151B8C 0014EACC  4E 80 00 20 */	blr 
.endfn "invoke__49Delegate1<Q24Game15BaseGameSection,R10Vector3<f>>FR10Vector3<f>"

.fn "invoke__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>FPQ24Game9CameraArg", weak
/* 80151B90 0014EAD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151B94 0014EAD4  7C 08 02 A6 */	mflr r0
/* 80151B98 0014EAD8  7C 65 1B 78 */	mr r5, r3
/* 80151B9C 0014EADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151BA0 0014EAE0  39 85 00 08 */	addi r12, r5, 8
/* 80151BA4 0014EAE4  80 63 00 04 */	lwz r3, 4(r3)
/* 80151BA8 0014EAE8  4B F6 FF 7D */	bl __ptmf_scall
/* 80151BAC 0014EAEC  60 00 00 00 */	nop 
/* 80151BB0 0014EAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151BB4 0014EAF4  7C 08 03 A6 */	mtlr r0
/* 80151BB8 0014EAF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80151BBC 0014EAFC  4E 80 00 20 */	blr 
.endfn "invoke__54Delegate1<Q24Game15BaseGameSection,PQ24Game9CameraArg>FPQ24Game9CameraArg"

.fn "invoke__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>FR7Rect<f>", weak
/* 80151BC0 0014EB00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151BC4 0014EB04  7C 08 02 A6 */	mflr r0
/* 80151BC8 0014EB08  7C 65 1B 78 */	mr r5, r3
/* 80151BCC 0014EB0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151BD0 0014EB10  39 85 00 08 */	addi r12, r5, 8
/* 80151BD4 0014EB14  80 63 00 04 */	lwz r3, 4(r3)
/* 80151BD8 0014EB18  4B F6 FF 4D */	bl __ptmf_scall
/* 80151BDC 0014EB1C  60 00 00 00 */	nop 
/* 80151BE0 0014EB20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151BE4 0014EB24  7C 08 03 A6 */	mtlr r0
/* 80151BE8 0014EB28  38 21 00 10 */	addi r1, r1, 0x10
/* 80151BEC 0014EB2C  4E 80 00 20 */	blr 
.endfn "invoke__45Delegate1<Q24Game15BaseGameSection,R7Rect<f>>FR7Rect<f>"

.fn "invoke__34Delegate<Q24Game15BaseGameSection>Fv", weak
/* 80151BF0 0014EB30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80151BF4 0014EB34  7C 08 02 A6 */	mflr r0
/* 80151BF8 0014EB38  7C 64 1B 78 */	mr r4, r3
/* 80151BFC 0014EB3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80151C00 0014EB40  39 84 00 08 */	addi r12, r4, 8
/* 80151C04 0014EB44  80 63 00 04 */	lwz r3, 4(r3)
/* 80151C08 0014EB48  4B F6 FF 1D */	bl __ptmf_scall
/* 80151C0C 0014EB4C  60 00 00 00 */	nop 
/* 80151C10 0014EB50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80151C14 0014EB54  7C 08 03 A6 */	mtlr r0
/* 80151C18 0014EB58  38 21 00 10 */	addi r1, r1, 0x10
/* 80151C1C 0014EB5C  4E 80 00 20 */	blr 
.endfn "invoke__34Delegate<Q24Game15BaseGameSection>Fv"

.fn "addOne__22ArrayContainer<5Plane>FR5Plane", weak
/* 80151C20 0014EB60  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 80151C24 0014EB64  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80151C28 0014EB68  7C 07 00 00 */	cmpw r7, r0
/* 80151C2C 0014EB6C  4C 80 00 20 */	bgelr 
/* 80151C30 0014EB70  80 C3 00 24 */	lwz r6, 0x24(r3)
/* 80151C34 0014EB74  38 A7 00 01 */	addi r5, r7, 1
/* 80151C38 0014EB78  54 E0 20 36 */	slwi r0, r7, 4
/* 80151C3C 0014EB7C  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80151C40 0014EB80  7C 66 02 14 */	add r3, r6, r0
/* 80151C44 0014EB84  C0 04 00 00 */	lfs f0, 0(r4)
/* 80151C48 0014EB88  D0 03 00 00 */	stfs f0, 0(r3)
/* 80151C4C 0014EB8C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80151C50 0014EB90  D0 03 00 04 */	stfs f0, 4(r3)
/* 80151C54 0014EB94  C0 04 00 08 */	lfs f0, 8(r4)
/* 80151C58 0014EB98  D0 03 00 08 */	stfs f0, 8(r3)
/* 80151C5C 0014EB9C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80151C60 0014EBA0  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80151C64 0014EBA4  4E 80 00 20 */	blr 
.endfn "addOne__22ArrayContainer<5Plane>FR5Plane"

.fn __ct__5PlaneFv, weak
/* 80151C68 0014EBA8  C0 22 A1 38 */	lfs f1, lbl_80518498@sda21(r2)
/* 80151C6C 0014EBAC  C0 02 A1 44 */	lfs f0, lbl_805184A4@sda21(r2)
/* 80151C70 0014EBB0  D0 23 00 00 */	stfs f1, 0(r3)
/* 80151C74 0014EBB4  D0 03 00 04 */	stfs f0, 4(r3)
/* 80151C78 0014EBB8  D0 23 00 08 */	stfs f1, 8(r3)
/* 80151C7C 0014EBBC  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80151C80 0014EBC0  4E 80 00 20 */	blr 
.endfn __ct__5PlaneFv

.fn "read__22ArrayContainer<5Plane>FR6Stream", weak
/* 80151C84 0014EBC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80151C88 0014EBC8  7C 08 02 A6 */	mflr r0
/* 80151C8C 0014EBCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80151C90 0014EBD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80151C94 0014EBD4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80151C98 0014EBD8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80151C9C 0014EBDC  7C 9D 23 78 */	mr r29, r4
/* 80151CA0 0014EBE0  93 81 00 10 */	stw r28, 0x10(r1)
/* 80151CA4 0014EBE4  7C 7C 1B 78 */	mr r28, r3
/* 80151CA8 0014EBE8  7F A3 EB 78 */	mr r3, r29
/* 80151CAC 0014EBEC  48 2C 2D E5 */	bl readInt__6StreamFv
/* 80151CB0 0014EBF0  90 7C 00 20 */	stw r3, 0x20(r28)
/* 80151CB4 0014EBF4  7F 83 E3 78 */	mr r3, r28
/* 80151CB8 0014EBF8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80151CBC 0014EBFC  80 9C 00 20 */	lwz r4, 0x20(r28)
/* 80151CC0 0014EC00  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80151CC4 0014EC04  7D 89 03 A6 */	mtctr r12
/* 80151CC8 0014EC08  4E 80 04 21 */	bctrl 
/* 80151CCC 0014EC0C  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 80151CD0 0014EC10  3B C0 00 00 */	li r30, 0
/* 80151CD4 0014EC14  3B E0 00 00 */	li r31, 0
/* 80151CD8 0014EC18  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 80151CDC 0014EC1C  48 00 00 2C */	b .L_80151D08
.L_80151CE0:
/* 80151CE0 0014EC20  7F 83 E3 78 */	mr r3, r28
/* 80151CE4 0014EC24  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80151CE8 0014EC28  81 9C 00 00 */	lwz r12, 0(r28)
/* 80151CEC 0014EC2C  7F A4 EB 78 */	mr r4, r29
/* 80151CF0 0014EC30  7C A0 FA 14 */	add r5, r0, r31
/* 80151CF4 0014EC34  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80151CF8 0014EC38  7D 89 03 A6 */	mtctr r12
/* 80151CFC 0014EC3C  4E 80 04 21 */	bctrl 
/* 80151D00 0014EC40  3B FF 00 10 */	addi r31, r31, 0x10
/* 80151D04 0014EC44  3B DE 00 01 */	addi r30, r30, 1
.L_80151D08:
/* 80151D08 0014EC48  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 80151D0C 0014EC4C  7C 1E 00 00 */	cmpw r30, r0
/* 80151D10 0014EC50  41 80 FF D0 */	blt .L_80151CE0
/* 80151D14 0014EC54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80151D18 0014EC58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80151D1C 0014EC5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80151D20 0014EC60  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80151D24 0014EC64  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80151D28 0014EC68  7C 08 03 A6 */	mtlr r0
/* 80151D2C 0014EC6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80151D30 0014EC70  4E 80 00 20 */	blr 
.endfn "read__22ArrayContainer<5Plane>FR6Stream"

.fn "alloc__27MonoObjectMgr<Q24Game4Navi>Fi", weak
/* 80151D34 0014EC74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80151D38 0014EC78  7C 08 02 A6 */	mflr r0
/* 80151D3C 0014EC7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80151D40 0014EC80  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80151D44 0014EC84  7C 9F 23 78 */	mr r31, r4
/* 80151D48 0014EC88  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80151D4C 0014EC8C  7C 7E 1B 78 */	mr r30, r3
/* 80151D50 0014EC90  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80151D54 0014EC94  7F FD FB 78 */	mr r29, r31
/* 80151D58 0014EC98  1C 7D 03 20 */	mulli r3, r29, 0x320
/* 80151D5C 0014EC9C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80151D60 0014ECA0  38 63 00 10 */	addi r3, r3, 0x10
/* 80151D64 0014ECA4  4B ED 22 49 */	bl __nwa__FUl
/* 80151D68 0014ECA8  3C 80 80 14 */	lis r4, __ct__Q24Game4NaviFv@ha
/* 80151D6C 0014ECAC  7F A7 EB 78 */	mr r7, r29
/* 80151D70 0014ECB0  38 84 F7 48 */	addi r4, r4, __ct__Q24Game4NaviFv@l
/* 80151D74 0014ECB4  38 A0 00 00 */	li r5, 0
/* 80151D78 0014ECB8  38 C0 03 20 */	li r6, 0x320
/* 80151D7C 0014ECBC  4B F6 FC 75 */	bl __construct_new_array
/* 80151D80 0014ECC0  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80151D84 0014ECC4  38 00 00 00 */	li r0, 0
/* 80151D88 0014ECC8  7F A3 EB 78 */	mr r3, r29
/* 80151D8C 0014ECCC  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80151D90 0014ECD0  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80151D94 0014ECD4  4B ED 22 19 */	bl __nwa__FUl
/* 80151D98 0014ECD8  2C 1F 00 00 */	cmpwi r31, 0
/* 80151D9C 0014ECDC  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80151DA0 0014ECE0  39 60 00 00 */	li r11, 0
/* 80151DA4 0014ECE4  40 81 00 B0 */	ble .L_80151E54
/* 80151DA8 0014ECE8  2C 1F 00 08 */	cmpwi r31, 8
/* 80151DAC 0014ECEC  38 7F FF F8 */	addi r3, r31, -8
/* 80151DB0 0014ECF0  40 81 00 80 */	ble .L_80151E30
/* 80151DB4 0014ECF4  38 03 00 07 */	addi r0, r3, 7
/* 80151DB8 0014ECF8  54 00 E8 FE */	srwi r0, r0, 3
/* 80151DBC 0014ECFC  7C 09 03 A6 */	mtctr r0
/* 80151DC0 0014ED00  2C 03 00 00 */	cmpwi r3, 0
/* 80151DC4 0014ED04  40 81 00 6C */	ble .L_80151E30
.L_80151DC8:
/* 80151DC8 0014ED08  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80151DCC 0014ED0C  39 40 00 01 */	li r10, 1
/* 80151DD0 0014ED10  39 0B 00 01 */	addi r8, r11, 1
/* 80151DD4 0014ED14  38 EB 00 02 */	addi r7, r11, 2
/* 80151DD8 0014ED18  7D 43 59 AE */	stbx r10, r3, r11
/* 80151DDC 0014ED1C  38 CB 00 03 */	addi r6, r11, 3
/* 80151DE0 0014ED20  38 AB 00 04 */	addi r5, r11, 4
/* 80151DE4 0014ED24  38 8B 00 05 */	addi r4, r11, 5
/* 80151DE8 0014ED28  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 80151DEC 0014ED2C  38 6B 00 06 */	addi r3, r11, 6
/* 80151DF0 0014ED30  38 0B 00 07 */	addi r0, r11, 7
/* 80151DF4 0014ED34  39 6B 00 08 */	addi r11, r11, 8
/* 80151DF8 0014ED38  7D 49 41 AE */	stbx r10, r9, r8
/* 80151DFC 0014ED3C  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 80151E00 0014ED40  7D 48 39 AE */	stbx r10, r8, r7
/* 80151E04 0014ED44  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 80151E08 0014ED48  7D 47 31 AE */	stbx r10, r7, r6
/* 80151E0C 0014ED4C  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 80151E10 0014ED50  7D 46 29 AE */	stbx r10, r6, r5
/* 80151E14 0014ED54  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 80151E18 0014ED58  7D 45 21 AE */	stbx r10, r5, r4
/* 80151E1C 0014ED5C  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 80151E20 0014ED60  7D 44 19 AE */	stbx r10, r4, r3
/* 80151E24 0014ED64  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80151E28 0014ED68  7D 43 01 AE */	stbx r10, r3, r0
/* 80151E2C 0014ED6C  42 00 FF 9C */	bdnz .L_80151DC8
.L_80151E30:
/* 80151E30 0014ED70  7C 0B F8 50 */	subf r0, r11, r31
/* 80151E34 0014ED74  38 80 00 01 */	li r4, 1
/* 80151E38 0014ED78  7C 09 03 A6 */	mtctr r0
/* 80151E3C 0014ED7C  7C 0B F8 00 */	cmpw r11, r31
/* 80151E40 0014ED80  40 80 00 14 */	bge .L_80151E54
.L_80151E44:
/* 80151E44 0014ED84  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80151E48 0014ED88  7C 83 59 AE */	stbx r4, r3, r11
/* 80151E4C 0014ED8C  39 6B 00 01 */	addi r11, r11, 1
/* 80151E50 0014ED90  42 00 FF F4 */	bdnz .L_80151E44
.L_80151E54:
/* 80151E54 0014ED94  7F C3 F3 78 */	mr r3, r30
/* 80151E58 0014ED98  81 9E 00 00 */	lwz r12, 0(r30)
/* 80151E5C 0014ED9C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80151E60 0014EDA0  7D 89 03 A6 */	mtctr r12
/* 80151E64 0014EDA4  4E 80 04 21 */	bctrl 
/* 80151E68 0014EDA8  3B 80 00 00 */	li r28, 0
/* 80151E6C 0014EDAC  3B A0 00 00 */	li r29, 0
/* 80151E70 0014EDB0  48 00 00 24 */	b .L_80151E94
.L_80151E74:
/* 80151E74 0014EDB4  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 80151E78 0014EDB8  7C 60 EA 14 */	add r3, r0, r29
/* 80151E7C 0014EDBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80151E80 0014EDC0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80151E84 0014EDC4  7D 89 03 A6 */	mtctr r12
/* 80151E88 0014EDC8  4E 80 04 21 */	bctrl 
/* 80151E8C 0014EDCC  3B BD 03 20 */	addi r29, r29, 0x320
/* 80151E90 0014EDD0  3B 9C 00 01 */	addi r28, r28, 1
.L_80151E94:
/* 80151E94 0014EDD4  7C 1C F8 00 */	cmpw r28, r31
/* 80151E98 0014EDD8  41 80 FF DC */	blt .L_80151E74
/* 80151E9C 0014EDDC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80151EA0 0014EDE0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80151EA4 0014EDE4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80151EA8 0014EDE8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80151EAC 0014EDEC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80151EB0 0014EDF0  7C 08 03 A6 */	mtlr r0
/* 80151EB4 0014EDF4  38 21 00 20 */	addi r1, r1, 0x20
/* 80151EB8 0014EDF8  4E 80 00 20 */	blr 
.endfn "alloc__27MonoObjectMgr<Q24Game4Navi>Fi"

.fn "onAlloc__27MonoObjectMgr<Q24Game4Navi>Fv", weak
/* 80151EBC 0014EDFC  4E 80 00 20 */	blr 
.endfn "onAlloc__27MonoObjectMgr<Q24Game4Navi>Fv"

.fn "alloc__27MonoObjectMgr<Q24Game4Piki>Fi", weak
/* 80151EC0 0014EE00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80151EC4 0014EE04  7C 08 02 A6 */	mflr r0
/* 80151EC8 0014EE08  90 01 00 24 */	stw r0, 0x24(r1)
/* 80151ECC 0014EE0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80151ED0 0014EE10  7C 9F 23 78 */	mr r31, r4
/* 80151ED4 0014EE14  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80151ED8 0014EE18  7C 7E 1B 78 */	mr r30, r3
/* 80151EDC 0014EE1C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80151EE0 0014EE20  7F FD FB 78 */	mr r29, r31
/* 80151EE4 0014EE24  1C 7D 02 C8 */	mulli r3, r29, 0x2c8
/* 80151EE8 0014EE28  93 81 00 10 */	stw r28, 0x10(r1)
/* 80151EEC 0014EE2C  38 63 00 10 */	addi r3, r3, 0x10
/* 80151EF0 0014EE30  4B ED 20 BD */	bl __nwa__FUl
/* 80151EF4 0014EE34  3C 80 80 14 */	lis r4, __ct__Q24Game4PikiFv@ha
/* 80151EF8 0014EE38  7F A7 EB 78 */	mr r7, r29
/* 80151EFC 0014EE3C  38 84 76 DC */	addi r4, r4, __ct__Q24Game4PikiFv@l
/* 80151F00 0014EE40  38 A0 00 00 */	li r5, 0
/* 80151F04 0014EE44  38 C0 02 C8 */	li r6, 0x2c8
/* 80151F08 0014EE48  4B F6 FA E9 */	bl __construct_new_array
/* 80151F0C 0014EE4C  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80151F10 0014EE50  38 00 00 00 */	li r0, 0
/* 80151F14 0014EE54  7F A3 EB 78 */	mr r3, r29
/* 80151F18 0014EE58  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80151F1C 0014EE5C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80151F20 0014EE60  4B ED 20 8D */	bl __nwa__FUl
/* 80151F24 0014EE64  2C 1F 00 00 */	cmpwi r31, 0
/* 80151F28 0014EE68  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80151F2C 0014EE6C  39 60 00 00 */	li r11, 0
/* 80151F30 0014EE70  40 81 00 B0 */	ble .L_80151FE0
/* 80151F34 0014EE74  2C 1F 00 08 */	cmpwi r31, 8
/* 80151F38 0014EE78  38 7F FF F8 */	addi r3, r31, -8
/* 80151F3C 0014EE7C  40 81 00 80 */	ble .L_80151FBC
/* 80151F40 0014EE80  38 03 00 07 */	addi r0, r3, 7
/* 80151F44 0014EE84  54 00 E8 FE */	srwi r0, r0, 3
/* 80151F48 0014EE88  7C 09 03 A6 */	mtctr r0
/* 80151F4C 0014EE8C  2C 03 00 00 */	cmpwi r3, 0
/* 80151F50 0014EE90  40 81 00 6C */	ble .L_80151FBC
.L_80151F54:
/* 80151F54 0014EE94  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80151F58 0014EE98  39 40 00 01 */	li r10, 1
/* 80151F5C 0014EE9C  39 0B 00 01 */	addi r8, r11, 1
/* 80151F60 0014EEA0  38 EB 00 02 */	addi r7, r11, 2
/* 80151F64 0014EEA4  7D 43 59 AE */	stbx r10, r3, r11
/* 80151F68 0014EEA8  38 CB 00 03 */	addi r6, r11, 3
/* 80151F6C 0014EEAC  38 AB 00 04 */	addi r5, r11, 4
/* 80151F70 0014EEB0  38 8B 00 05 */	addi r4, r11, 5
/* 80151F74 0014EEB4  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 80151F78 0014EEB8  38 6B 00 06 */	addi r3, r11, 6
/* 80151F7C 0014EEBC  38 0B 00 07 */	addi r0, r11, 7
/* 80151F80 0014EEC0  39 6B 00 08 */	addi r11, r11, 8
/* 80151F84 0014EEC4  7D 49 41 AE */	stbx r10, r9, r8
/* 80151F88 0014EEC8  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 80151F8C 0014EECC  7D 48 39 AE */	stbx r10, r8, r7
/* 80151F90 0014EED0  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 80151F94 0014EED4  7D 47 31 AE */	stbx r10, r7, r6
/* 80151F98 0014EED8  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 80151F9C 0014EEDC  7D 46 29 AE */	stbx r10, r6, r5
/* 80151FA0 0014EEE0  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 80151FA4 0014EEE4  7D 45 21 AE */	stbx r10, r5, r4
/* 80151FA8 0014EEE8  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 80151FAC 0014EEEC  7D 44 19 AE */	stbx r10, r4, r3
/* 80151FB0 0014EEF0  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80151FB4 0014EEF4  7D 43 01 AE */	stbx r10, r3, r0
/* 80151FB8 0014EEF8  42 00 FF 9C */	bdnz .L_80151F54
.L_80151FBC:
/* 80151FBC 0014EEFC  7C 0B F8 50 */	subf r0, r11, r31
/* 80151FC0 0014EF00  38 80 00 01 */	li r4, 1
/* 80151FC4 0014EF04  7C 09 03 A6 */	mtctr r0
/* 80151FC8 0014EF08  7C 0B F8 00 */	cmpw r11, r31
/* 80151FCC 0014EF0C  40 80 00 14 */	bge .L_80151FE0
.L_80151FD0:
/* 80151FD0 0014EF10  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80151FD4 0014EF14  7C 83 59 AE */	stbx r4, r3, r11
/* 80151FD8 0014EF18  39 6B 00 01 */	addi r11, r11, 1
/* 80151FDC 0014EF1C  42 00 FF F4 */	bdnz .L_80151FD0
.L_80151FE0:
/* 80151FE0 0014EF20  7F C3 F3 78 */	mr r3, r30
/* 80151FE4 0014EF24  81 9E 00 00 */	lwz r12, 0(r30)
/* 80151FE8 0014EF28  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80151FEC 0014EF2C  7D 89 03 A6 */	mtctr r12
/* 80151FF0 0014EF30  4E 80 04 21 */	bctrl 
/* 80151FF4 0014EF34  3B 80 00 00 */	li r28, 0
/* 80151FF8 0014EF38  3B A0 00 00 */	li r29, 0
/* 80151FFC 0014EF3C  48 00 00 24 */	b .L_80152020
.L_80152000:
/* 80152000 0014EF40  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 80152004 0014EF44  7C 60 EA 14 */	add r3, r0, r29
/* 80152008 0014EF48  81 83 00 00 */	lwz r12, 0(r3)
/* 8015200C 0014EF4C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80152010 0014EF50  7D 89 03 A6 */	mtctr r12
/* 80152014 0014EF54  4E 80 04 21 */	bctrl 
/* 80152018 0014EF58  3B BD 02 C8 */	addi r29, r29, 0x2c8
/* 8015201C 0014EF5C  3B 9C 00 01 */	addi r28, r28, 1
.L_80152020:
/* 80152020 0014EF60  7C 1C F8 00 */	cmpw r28, r31
/* 80152024 0014EF64  41 80 FF DC */	blt .L_80152000
/* 80152028 0014EF68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8015202C 0014EF6C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152030 0014EF70  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80152034 0014EF74  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80152038 0014EF78  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8015203C 0014EF7C  7C 08 03 A6 */	mtlr r0
/* 80152040 0014EF80  38 21 00 20 */	addi r1, r1, 0x20
/* 80152044 0014EF84  4E 80 00 20 */	blr 
.endfn "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"

.fn "onAlloc__27MonoObjectMgr<Q24Game4Piki>Fv", weak
/* 80152048 0014EF88  4E 80 00 20 */	blr 
.endfn "onAlloc__27MonoObjectMgr<Q24Game4Piki>Fv"

.fn __sinit_baseGameSection_cpp, local
/* 8015204C 0014EF8C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80152050 0014EF90  38 00 FF FF */	li r0, -1
/* 80152054 0014EF94  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80152058 0014EF98  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8015205C 0014EF9C  90 0D 92 A8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80152060 0014EFA0  D4 03 0C 70 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80152064 0014EFA4  D0 0D 92 AC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80152068 0014EFA8  D0 03 00 04 */	stfs f0, 4(r3)
/* 8015206C 0014EFAC  D0 03 00 08 */	stfs f0, 8(r3)
/* 80152070 0014EFB0  4E 80 00 20 */	blr 
.endfn __sinit_baseGameSection_cpp
