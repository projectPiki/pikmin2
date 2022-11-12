#include "nans.h"
#include "types.h"
#include "Game/IllustratedBook.h"
#include "Game/SingleGame.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGS_Zukan_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482E60
    lbl_80482E60:
        .skip 0xC
        .asciz "SingleGS_Zukan"
        .skip 1
    .global lbl_80482E7C
    lbl_80482E7C:
        .asciz "tutorial"
        .skip 3
    .global lbl_80482E88
    lbl_80482E88:
        .asciz "yakushima"
        .skip 2
        .4byte 0x907D8AD3
        .4byte 0x8366836F
        .4byte 0x8362834F
        .4byte 0x00000000
        .asciz "/user/Yamashita/enemyTex/arc.szs"
        .skip 3
        .asciz "ZZDummy/texture.bti"
    .global lbl_80482EDC
    lbl_80482EDC:
        .asciz "singleGS_Zukan.cpp"
        .skip 1
        .asciz "P2Assert"
        .skip 3
        .asciz "%s/texture.bti"
        .skip 1
    .global lbl_80482F0C
    lbl_80482F0C:
        .4byte 0x907D8AD3
        .4byte 0x834A8381
        .4byte 0x83890000
    .global lbl_80482F18
    lbl_80482F18:
        .asciz "radius:%6.3f"
        .skip 3
    .global lbl_80482F28
    lbl_80482F28:
        .asciz "angle :%6.3f"
        .skip 3
    .global lbl_80482F38
    lbl_80482F38:
        .asciz "height:%6.3f"
        .skip 3
    .global lbl_80482F48
    lbl_80482F48:
        .asciz "fovy  :%6.3f"
        .skip 3
    .global lbl_80482F58
    lbl_80482F58:
        .asciz "ExtraHeapFor2D null\n"
        .skip 3
    .global lbl_80482F70
    lbl_80482F70:
        .asciz "StartTeki"
        .skip 2
    .global lbl_80482F7C
    lbl_80482F7C:
        .asciz "StartPellet"
    .global lbl_80482F88
    lbl_80482F88:
        .asciz "ModeChangeToTeki"
        .skip 3
    .global lbl_80482F9C
    lbl_80482F9C:
        .asciz "ChangeTeki"
        .skip 1
    .global lbl_80482FA8
    lbl_80482FA8:
        .asciz "ModeChangeToPellet"
        .skip 1
    .global lbl_80482FBC
    lbl_80482FBC:
        .asciz "ChangePellet"
        .skip 3
        .4byte lbl_80482F70
        .4byte lbl_80482F7C
        .4byte lbl_80482F88
        .4byte lbl_8051A1C4
        .4byte lbl_80482F9C
        .4byte lbl_80482FA8
        .4byte lbl_8051A1CC
        .4byte lbl_80482FBC
        .4byte lbl_8051A1D4
        .asciz "PSGame.h"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "get sound scene at\ninvalid timming\n"
        .asciz "Unknown mode : %d \n"
    .global lbl_80483040
    lbl_80483040:
        .asciz "Illegal next mode. %d \n"
        .asciz "READY:%d Enemy:%d Item:%d"
        .skip 2
        .asciz "enemy:%d item:%d"
        .skip 3
        .asciz "heapA %d"
        .skip 3
        .asciz "heapB %d"
        .skip 3
        .asciz "user/Yamashita/zukan/%s/%s/arc.szs"
        .skip 1
        .asciz "PSCommon.h"
        .skip 1
        .asciz "course.txt"
        .skip 1
    .global lbl_804830DC
    lbl_804830DC:
        .asciz "FreeSizeA :%d \n"
        .4byte 0x8379838C
        .4byte 0x83628367
        .4byte 0x919082C8
        .4byte 0x82CC82C5
        .4byte 0x8379838C
        .4byte 0x83628367
        .4byte 0x82F0838D
        .4byte 0x815B8368
        .4byte 0x82B582DC
        .4byte 0x82B72066
        .4byte 0x7265653A
        .4byte 0x2564200A
        .4byte 0x00000000
        .4byte 0x82BE82B5
        .4byte 0x82BD2066
        .4byte 0x7265653A
        .4byte 0x2564200A
        .4byte 0x00000000
        .4byte 0x934782F0
        .4byte 0x8341838D
        .4byte 0x8362834E
        .4byte 0x20256495
        .4byte 0x43814066
        .4byte 0x7265653A
        .4byte 0x2564200A
        .4byte 0x00000000
        .4byte 0x2A2A2042
        .4byte 0x49525448
        .4byte 0x20464149
        .4byte 0x4C454420
        .4byte 0x21212049
        .4byte 0x443A2564
        .4byte 0x200A0000
    .global lbl_80483170
    lbl_80483170:
        .4byte 0x746F6F20
        .4byte 0x6D616E79
        .4byte 0x2070656C
        .4byte 0x6C65740A
        .4byte 0x00000000
        .4byte 0x50696B69
        .4byte 0x4B696C6C
        .4byte 0x41726700
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x4B696C6C
        .4byte 0x41726700
        .4byte 0x50656C6C
        .4byte 0x6574496E
        .4byte 0x69744172
        .4byte 0x67000000
        .4byte 0x50696B69
        .4byte 0x496E6974
        .4byte 0x41726700
        .4byte 0x23202564
        .4byte 0x2F25640D
        .4byte 0x0A000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C0A40
    lbl_804C0A40:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
        .4byte 0x00000000
    .global "sDirName__28@unnamed@singleGS_Zukan_cpp@"
    "sDirName__28@unnamed@singleGS_Zukan_cpp@":
        .4byte lbl_80482E7C
        .4byte lbl_8051A100
        .4byte lbl_80482E88
        .4byte lbl_8051A108
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdloadA__Q34Game10SingleGame10ZukanStateFv
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdloadB_teki__Q34Game10SingleGame10ZukanStateFv
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdloadB_pellet__Q34Game10SingleGame10ZukanStateFv
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
        .4byte 0x00000000
    .global __vt__Q28Morimura19DispMemberZukanItem
    __vt__Q28Morimura19DispMemberZukanItem:
        .4byte 0
        .4byte 0
        .4byte getSize__Q28Morimura19DispMemberZukanItemFv
        .4byte getOwnerID__Q28Morimura19DispMemberZukanItemFv
        .4byte getMemberID__Q28Morimura19DispMemberZukanItemFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q28Morimura20DispMemberZukanEnemy
    __vt__Q28Morimura20DispMemberZukanEnemy:
        .4byte 0
        .4byte 0
        .4byte getSize__Q28Morimura20DispMemberZukanEnemyFv
        .4byte getOwnerID__Q28Morimura20DispMemberZukanEnemyFv
        .4byte getMemberID__Q28Morimura20DispMemberZukanEnemyFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q28Morimura19DispMemberZukanBase
    __vt__Q28Morimura19DispMemberZukanBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global "__vt__41Delegate<Q34Game10SingleGame10ZukanState>"
    "__vt__41Delegate<Q34Game10SingleGame10ZukanState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__41Delegate<Q34Game10SingleGame10ZukanState>Fv"
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q34Game10SingleGame10ZukanState
    __vt__Q34Game10SingleGame10ZukanState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection
        .4byte
   cleanup__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionR8Graphics
        .4byte
   onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
        .4byte
   onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
        .4byte
   onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
        .4byte
   on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
        .4byte
   on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl .4byte
   0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0
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
    .global __vt__Q34Game15IllustratedBook6Camera
    __vt__Q34Game15IllustratedBook6Camera:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game15IllustratedBook6CameraFv
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
        .4byte getViewMatrix__6CameraFb
        .4byte getPosition__6CameraFv
        .4byte updatePlanes__6CameraFv
        .4byte updateScreenConstants__6CameraFv
        .4byte getLookAtPosition___12LookAtCameraFv
        .4byte getTargetDistance__6CameraFv
        .4byte getPositionPtr__6CameraFv
        .4byte on_getPositionPtr__12LookAtCameraFv
        .4byte getSoundPositionPtr__6CameraFv
        .4byte getSoundMatrixPtr__6CameraFv
        .4byte isSpecialCamera__6CameraFv
        .4byte updateMatrix__12LookAtCameraFv
        .4byte doUpdate__Q34Game15IllustratedBook6CameraFv
        .4byte startVibration__Q34Game15IllustratedBook6CameraFi
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
    .global __vt__Q34Game15IllustratedBook11EnemyTexMgr
    __vt__Q34Game15IllustratedBook11EnemyTexMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game15IllustratedBook11EnemyTexMgrFv
    .global __vt__Q34Game15IllustratedBook10DebugParms
    __vt__Q34Game15IllustratedBook10DebugParms:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game15IllustratedBook10DebugParmsFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C48
    lbl_80515C48:
        .skip 0x4
    .global lbl_80515C4C
    lbl_80515C4C:
        .skip 0x4
    .global sParentHeapFreeSize_1
    sParentHeapFreeSize_1:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A100
    lbl_8051A100:
        .asciz "forest"
        .skip 1
    .global lbl_8051A108
    lbl_8051A108:
        .asciz "last"
        .skip 3
    .global lbl_8051A110
    lbl_8051A110:
        .float 0.05
    .global lbl_8051A114
    lbl_8051A114:
        .4byte 0x42200000
    .global lbl_8051A118
    lbl_8051A118:
        .4byte 0xC2C80000
    .global lbl_8051A11C
    lbl_8051A11C:
        .float 1.0
    .global lbl_8051A120
    lbl_8051A120:
        .4byte 0x43960000
    .global lbl_8051A124
    lbl_8051A124:
        .4byte 0x42C80000
    .global lbl_8051A128
    lbl_8051A128:
        .4byte 0x00000000
    .global lbl_8051A12C
    lbl_8051A12C:
        .4byte 0x43AF0000
    .global lbl_8051A130
    lbl_8051A130:
        .4byte 0x43FA0000
    .global lbl_8051A134
    lbl_8051A134:
        .4byte 0x442F0000
    .global lbl_8051A138
    lbl_8051A138:
        .4byte 0x42340000
    .global lbl_8051A13C
    lbl_8051A13C:
        .float 0.1
    .global lbl_8051A140
    lbl_8051A140:
        .4byte 0x42B40000
    .global lbl_8051A144
    lbl_8051A144:
        .4byte 0x3F4CCCCD
    .global lbl_8051A148
    lbl_8051A148:
        .float 0.5
    .global lbl_8051A14C
    lbl_8051A14C:
        .4byte 0x3C03126F
    .global lbl_8051A150
    lbl_8051A150:
        .4byte 0x40E00000
    .global lbl_8051A154
    lbl_8051A154:
        .4byte 0x3DF5C28F
    .global lbl_8051A158
    lbl_8051A158:
        .4byte 0x3F733333
    .global lbl_8051A15C
    lbl_8051A15C:
        .4byte 0x41700000
    .global lbl_8051A160
    lbl_8051A160:
        .float 0.3
    .global lbl_8051A164
    lbl_8051A164:
        .4byte 0x3EB33333
    .global lbl_8051A168
    lbl_8051A168:
        .float 0.15
    .global lbl_8051A16C
    lbl_8051A16C:
        .4byte 0x3F2147AE
    .global lbl_8051A170
    lbl_8051A170:
        .4byte 0x3F451EB8
    .global lbl_8051A174
    lbl_8051A174:
        .4byte 0x41E80000
    .global lbl_8051A178
    lbl_8051A178:
        .4byte 0x47000000
    .global lbl_8051A17C
    lbl_8051A17C:
        .4byte 0xBF800000
    .global lbl_8051A180
    lbl_8051A180:
        .4byte 0x41200000
        .4byte 0x00000000
    .global lbl_8051A188
    lbl_8051A188:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A190
    lbl_8051A190:
        .4byte 0x41F00000
    .global lbl_8051A194
    lbl_8051A194:
        .4byte 0x43A2F983
    .global lbl_8051A198
    lbl_8051A198:
        .4byte 0xC3A2F983
    .global lbl_8051A19C
    lbl_8051A19C:
        .4byte 0x3F19999A
    .global lbl_8051A1A0
    lbl_8051A1A0:
        .4byte 0x40C90FDB
    .global lbl_8051A1A4
    lbl_8051A1A4:
        .4byte 0x38D1B717
    .global lbl_8051A1A8
    lbl_8051A1A8:
        .4byte 0x3F400000
    .global lbl_8051A1AC
    lbl_8051A1AC:
        .4byte 0x3CA3D70A
    .global lbl_8051A1B0
    lbl_8051A1B0:
        .4byte 0x3E4CCCCD
    .global lbl_8051A1B4
    lbl_8051A1B4:
        .4byte 0xBF000000
    .global lbl_8051A1B8
    lbl_8051A1B8:
        .4byte 0x3F666666
    .global lbl_8051A1BC
    lbl_8051A1BC:
        .asciz "zukan"
        .skip 2
    .global lbl_8051A1C4
    lbl_8051A1C4:
        .asciz "Teki"
        .skip 3
    .global lbl_8051A1CC
    lbl_8051A1CC:
        .asciz "Pellet"
        .skip 1
    .global lbl_8051A1D4
    lbl_8051A1D4:
        .asciz "None"
        .skip 3
    .global lbl_8051A1DC
    lbl_8051A1DC:
        .4byte 0x40400000
    .global lbl_8051A1E0
    lbl_8051A1E0:
        .4byte 0x41100000
        .4byte 0x00000000
    .global lbl_8051A1E8
    lbl_8051A1E8:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051A1F0
    lbl_8051A1F0:
        .float 0.25
    .global lbl_8051A1F4
    lbl_8051A1F4:
        .4byte 0x3BA3D70A
    .global lbl_8051A1F8
    lbl_8051A1F8:
        .4byte 0x75730000
    .global lbl_8051A1FC
    lbl_8051A1FC:
        .4byte 0xC47A0000
    .global lbl_8051A200
    lbl_8051A200:
        .4byte 0x447A0000
    .global lbl_8051A204
    lbl_8051A204:
        .4byte 0x4B435000
    .global lbl_8051A208
    lbl_8051A208:
        .4byte 0xCB435000
    .global lbl_8051A20C
    lbl_8051A20C:
        .4byte 0x42800000
    .global lbl_8051A210
    lbl_8051A210:
        .4byte 0x0A000000
    .global lbl_8051A214
    lbl_8051A214:
        .4byte 0x420C0000
    .global lbl_8051A218
    lbl_8051A218:
        .4byte 0x40490FDB
    .global lbl_8051A21C
    lbl_8051A21C:
        .4byte 0x3BB60B61
    .global lbl_8051A220
    lbl_8051A220:
        .4byte 0x43480000
    .global lbl_8051A224
    lbl_8051A224:
        .4byte 0x64616D65
        .4byte 0x6B0A0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
IllustratedBook::DebugParms::DebugParms()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
IllustratedBook::EnemyTexMgr::EnemyTexMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
unknown IllustratedBook::EnemyTexMgr::create()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80221028
 * Size:	000284
 */
IllustratedBook::Camera::Camera(Controller*)
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
	bl       __ct__12LookAtCameraFv
	lis      r3, __vt__Q34Game15IllustratedBook6Camera@ha
	lis      r5, "zero__10Vector3<f>"@ha
	addi     r0, r3, __vt__Q34Game15IllustratedBook6Camera@l
	lfs      f3, lbl_8051A128@sda21(r2)
	stw      r0, 0(r29)
	addi     r31, r5, "zero__10Vector3<f>"@l
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	li       r0, 0
	stw      r30, 0x198(r29)
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	lfs      f2, lbl_8051A12C@sda21(r2)
	addi     r3, r29, 0x1fc
	stw      r0, 0x19c(r29)
	li       r5, 0
	lfs      f1, lbl_8051A130@sda21(r2)
	li       r6, 0xc
	lfs      f0, 0(r31)
	li       r7, 0xa
	stfs     f0, 0x1a0(r29)
	lfs      f0, lbl_8051A134@sda21(r2)
	lfs      f4, 4(r31)
	stfs     f4, 0x1a4(r29)
	lfs      f4, 8(r31)
	stfs     f4, 0x1a8(r29)
	lfs      f4, 0(r31)
	stfs     f4, 0x1ac(r29)
	lfs      f4, 4(r31)
	stfs     f4, 0x1b0(r29)
	lfs      f4, 8(r31)
	stfs     f4, 0x1b4(r29)
	lfs      f4, 0(r31)
	stfs     f4, 0x1b8(r29)
	lfs      f4, 4(r31)
	stfs     f4, 0x1bc(r29)
	lfs      f4, 8(r31)
	stfs     f4, 0x1c0(r29)
	stfs     f3, 0x1c4(r29)
	stfs     f2, 0x1c8(r29)
	stfs     f1, 0x1cc(r29)
	stfs     f3, 0x1d0(r29)
	stfs     f0, 0x1d4(r29)
	lfs      f0, 0(r31)
	stfs     f0, 0x1d8(r29)
	lfs      f0, 4(r31)
	stfs     f0, 0x1dc(r29)
	lfs      f0, 8(r31)
	stfs     f0, 0x1e0(r29)
	lfs      f0, 0(r31)
	stfs     f0, 0x1e4(r29)
	lfs      f0, 4(r31)
	stfs     f0, 0x1e8(r29)
	lfs      f0, 8(r31)
	stfs     f0, 0x1ec(r29)
	lfs      f0, 0(r31)
	stfs     f0, 0x1f0(r29)
	lfs      f0, 4(r31)
	stfs     f0, 0x1f4(r29)
	lfs      f0, 8(r31)
	stfs     f0, 0x1f8(r29)
	bl       __construct_array
	li       r0, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0x274(r29)
	addi     r4, r3, "zero__10Vector3<f>"@l
	lfs      f5, lbl_8051A128@sda21(r2)
	lis      r3, lbl_80482F0C@ha
	addi     r0, r3, lbl_80482F0C@l
	lfs      f4, lbl_8051A138@sda21(r2)
	stfs     f5, 0x278(r29)
	mr       r3, r29
	lfs      f3, lbl_8051A13C@sda21(r2)
	stfs     f5, 0x27c(r29)
	lfs      f2, lbl_8051A140@sda21(r2)
	stfs     f5, 0x280(r29)
	lfs      f1, lbl_8051A144@sda21(r2)
	stfs     f5, 0x284(r29)
	lfs      f0, lbl_8051A11C@sda21(r2)
	stfs     f4, 0x288(r29)
	stfs     f3, 0x28c(r29)
	stfs     f2, 0x290(r29)
	stfs     f5, 0x294(r29)
	stfs     f5, 0x298(r29)
	stfs     f1, 0x29c(r29)
	lfs      f1, 0(r4)
	stfs     f1, 0x2a0(r29)
	lfs      f1, 4(r31)
	stfs     f1, 0x2a4(r29)
	lfs      f1, 8(r31)
	stfs     f1, 0x2a8(r29)
	lfs      f1, 0(r4)
	stfs     f1, 0x2ac(r29)
	lfs      f1, 4(r31)
	stfs     f1, 0x2b0(r29)
	lfs      f1, 8(r31)
	stfs     f1, 0x2b4(r29)
	lfs      f1, 0(r4)
	stfs     f1, 0x2b8(r29)
	lfs      f1, 4(r31)
	stfs     f1, 0x2bc(r29)
	lfs      f1, 8(r31)
	stfs     f1, 0x2c0(r29)
	lfs      f1, 0(r4)
	stfs     f1, 0x2c4(r29)
	lfs      f1, 4(r31)
	stfs     f1, 0x2c8(r29)
	lfs      f1, 8(r31)
	stfs     f1, 0x2cc(r29)
	stfs     f0, 0x2d0(r29)
	stfs     f5, 0x2d4(r29)
	stfs     f5, 0x2d8(r29)
	stw      r0, 0x14(r29)
	bl       "move__Q34Game15IllustratedBook6CameraFRC10Vector3<f>"
	lfs      f3, lbl_8051A148@sda21(r2)
	mr       r3, r29
	lfs      f0, lbl_8051A110@sda21(r2)
	stfs     f3, 0x2dc(r29)
	lfs      f2, lbl_8051A14C@sda21(r2)
	stfs     f3, 0x2e0(r29)
	lfs      f1, lbl_8051A150@sda21(r2)
	stfs     f0, 0x2e4(r29)
	lfs      f0, lbl_8051A154@sda21(r2)
	stfs     f2, 0x2e8(r29)
	lfs      f2, lbl_8051A158@sda21(r2)
	stfs     f1, 0x2ec(r29)
	lfs      f1, lbl_8051A13C@sda21(r2)
	stfs     f0, 0x2f0(r29)
	lfs      f0, lbl_8051A15C@sda21(r2)
	stfs     f2, 0x2f4(r29)
	lfs      f2, lbl_8051A160@sda21(r2)
	stfs     f1, 0x2f8(r29)
	lfs      f1, lbl_8051A144@sda21(r2)
	stfs     f0, 0x2fc(r29)
	lfs      f0, lbl_8051A164@sda21(r2)
	stfs     f2, 0x300(r29)
	lfs      f2, lbl_8051A168@sda21(r2)
	stfs     f1, 0x304(r29)
	lfs      f1, lbl_8051A16C@sda21(r2)
	stfs     f0, 0x308(r29)
	lfs      f0, lbl_8051A170@sda21(r2)
	stfs     f2, 0x30c(r29)
	stfs     f2, 0x310(r29)
	stfs     f1, 0x314(r29)
	stfs     f3, 0x318(r29)
	stfs     f0, 0x31c(r29)
	stfs     f3, 0x320(r29)
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
 * Address:	802212AC
 * Size:	0001D8
 */
void IllustratedBook::Camera::startVibration(int)
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
	stw      r31, 0x3c(r1)
	xoris    r4, r4, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	mr       r31, r3
	lfd      f2, lbl_8051A188@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051A174@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f29, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_8051A148@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_8051A148@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80221368
	lfs      f31, lbl_8051A17C@sda21(r2)
	b        lbl_8022136C

lbl_80221368:
	lfs      f31, lbl_8051A11C@sda21(r2)

lbl_8022136C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_8051A11C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f0, f0, f1
	fmuls    f31, f0, f31
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	fmuls    f4, f31, f31
	lfd      f3, lbl_8051A188@sda21(r2)
	fmuls    f5, f30, f30
	stw      r0, 0x28(r1)
	lfs      f2, lbl_8051A178@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f1, lbl_8051A148@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051A128@sda21(r2)
	fdivs    f2, f3, f2
	fsubs    f2, f2, f1
	fmadds   f1, f2, f2, f4
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802213FC
	ble      lbl_80221400
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80221400

lbl_802213FC:
	fmr      f1, f0

lbl_80221400:
	lfs      f0, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80221420
	lfs      f0, lbl_8051A11C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0

lbl_80221420:
	lfs      f1, lbl_8051A180@sda21(r2)
	lfs      f0, 0x2d0(r31)
	fmuls    f1, f1, f29
	fmuls    f2, f2, f1
	fmuls    f31, f31, f1
	fmuls    f30, f30, f1
	fadds    f0, f0, f2
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x2d4(r31)
	fadds    f0, f0, f31
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x2d8(r31)
	fadds    f0, f0, f30
	stfs     f0, 0x2d8(r31)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void IllustratedBook::Camera::debugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	80221484
 * Size:	000088
 */
void move__Q34Game15IllustratedBook6CameraFRC10Vector3f(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, 0(r4)
	stw      r0, 0x14(r1)
	li       r0, 0
	lfs      f1, 4(r4)
	stw      r0, 0x19c(r3)
	stfs     f0, 0x1d8(r3)
	lfs      f0, 8(r4)
	stfs     f1, 0x1dc(r3)
	stfs     f0, 0x1e0(r3)
	lfs      f0, 0x1d8(r3)
	stfs     f0, 0x1b8(r3)
	lfs      f0, 0x1dc(r3)
	stfs     f0, 0x1bc(r3)
	lfs      f0, 0x1e0(r3)
	stfs     f0, 0x1c0(r3)
	lfs      f0, 0x1b8(r3)
	stfs     f0, 0x1ac(r3)
	lfs      f0, 0x1bc(r3)
	stfs     f0, 0x1b0(r3)
	lfs      f0, 0x1c0(r3)
	stfs     f0, 0x1b4(r3)
	lfs      f0, 0x1ac(r3)
	stfs     f0, 0x180(r3)
	lfs      f0, 0x1b0(r3)
	stfs     f0, 0x184(r3)
	lfs      f0, 0x1b4(r3)
	stfs     f0, 0x188(r3)
	bl       resetControl__Q34Game15IllustratedBook6CameraFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8022150C
 * Size:	000128
 */
void IllustratedBook::Camera::setTarget(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	beq      lbl_802215B0
	stw      r4, 0x19c(r31)
	addi     r4, r1, 8
	lwz      r3, 0x19c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	mr       r3, r31
	stfs     f0, 0x1d8(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1dc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1e0(r31)
	lfs      f0, 0x1d8(r31)
	stfs     f0, 0x1b8(r31)
	lfs      f0, 0x1dc(r31)
	stfs     f0, 0x1bc(r31)
	lfs      f0, 0x1e0(r31)
	stfs     f0, 0x1c0(r31)
	lfs      f0, 0x1b8(r31)
	stfs     f0, 0x1ac(r31)
	lfs      f0, 0x1bc(r31)
	stfs     f0, 0x1b0(r31)
	lfs      f0, 0x1c0(r31)
	stfs     f0, 0x1b4(r31)
	lfs      f0, 0x1ac(r31)
	stfs     f0, 0x180(r31)
	lfs      f0, 0x1b0(r31)
	stfs     f0, 0x184(r31)
	lfs      f0, 0x1b4(r31)
	stfs     f0, 0x188(r31)
	bl       resetControl__Q34Game15IllustratedBook6CameraFv
	b        lbl_80221620

lbl_802215B0:
	li       r0, 0
	lis      r4, "zero__10Vector3<f>"@ha
	stw      r0, 0x19c(r31)
	lfsu     f0, "zero__10Vector3<f>"@l(r4)
	stfs     f0, 0x1d8(r31)
	lfs      f0, 4(r4)
	stfs     f0, 0x1dc(r31)
	lfs      f0, 8(r4)
	stfs     f0, 0x1e0(r31)
	lfs      f0, 0x1d8(r31)
	stfs     f0, 0x1b8(r31)
	lfs      f0, 0x1dc(r31)
	stfs     f0, 0x1bc(r31)
	lfs      f0, 0x1e0(r31)
	stfs     f0, 0x1c0(r31)
	lfs      f0, 0x1b8(r31)
	stfs     f0, 0x1ac(r31)
	lfs      f0, 0x1bc(r31)
	stfs     f0, 0x1b0(r31)
	lfs      f0, 0x1c0(r31)
	stfs     f0, 0x1b4(r31)
	lfs      f0, 0x1ac(r31)
	stfs     f0, 0x180(r31)
	lfs      f0, 0x1b0(r31)
	stfs     f0, 0x184(r31)
	lfs      f0, 0x1b4(r31)
	stfs     f0, 0x188(r31)
	bl       resetControl__Q34Game15IllustratedBook6CameraFv

lbl_80221620:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80221634
 * Size:	000274
 */
void IllustratedBook::Camera::resetControl()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "zero__10Vector3<f>"@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r4, "zero__10Vector3<f>"@l
	lfs      f1, 0(r3)
	stfs     f1, 0x1f0(r31)
	lfs      f1, 4(r3)
	stfs     f1, 0x1f4(r31)
	lfs      f1, 8(r3)
	stfs     f1, 0x1f8(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x1fc(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x200(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x204(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x208(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x20c(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x210(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x214(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x218(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x21c(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x220(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x224(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x228(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x22c(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x230(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x234(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x238(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x23c(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x240(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x244(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x248(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x24c(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x250(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x254(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x258(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x25c(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x260(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x264(r31)
	lfs      f1, 0x180(r31)
	stfs     f1, 0x268(r31)
	lfs      f1, 0x184(r31)
	stfs     f1, 0x26c(r31)
	lfs      f1, 0x188(r31)
	stfs     f1, 0x270(r31)
	stw      r0, 0x274(r31)
	stfs     f0, 0x27c(r31)
	stfs     f0, 0x278(r31)
	stfs     f0, 0x284(r31)
	stfs     f0, 0x280(r31)
	lfs      f5, 0x1c4(r31)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_80221788
	fneg     f1, f5

lbl_80221788:
	lfs      f3, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f6, 0x1c8(r31)
	fcmpo    cr0, f5, f0
	lfs      f1, 0x1c0(r31)
	lfs      f4, 0x1bc(r31)
	fctiwz   f0, f2
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f6, f0, f1
	bge      lbl_802217F0
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_80221808

lbl_802217F0:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_80221808:
	lfs      f0, 0x1b8(r31)
	fmadds   f0, f6, f1, f0
	stfs     f0, 0x1a0(r31)
	stfs     f4, 0x1a4(r31)
	stfs     f2, 0x1a8(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80221848
	lwz      r12, 4(r3)
	addi     r4, r31, 0x1a0
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x1cc(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x1a4(r31)

lbl_80221848:
	lfs      f1, 0x1a0(r31)
	lfs      f0, 0x2c4(r31)
	lfs      f3, 0x1a4(r31)
	lfs      f2, 0x2c8(r31)
	fadds    f1, f1, f0
	lfs      f5, 0x1a8(r31)
	lfs      f4, 0x2cc(r31)
	fadds    f2, f3, f2
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f1, 0x174(r31)
	fadds    f1, f5, f4
	stfs     f2, 0x178(r31)
	stfs     f1, 0x17c(r31)
	stfs     f0, 0x2d0(r31)
	stfs     f0, 0x2d4(r31)
	stfs     f0, 0x2d8(r31)
	stfs     f0, 0x2c4(r31)
	stfs     f0, 0x2c8(r31)
	stfs     f0, 0x2cc(r31)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void IllustratedBook::Camera::setAtOffset(const Vector3f&) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802218A8
 * Size:	000904
 */
void IllustratedBook::Camera::doUpdate(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	mr       r30, r3
	lis      r4, "zero__10Vector3<f>"@ha
	lwz      r3, 0x19c(r3)
	addi     r31, r4, "zero__10Vector3<f>"@l
	lfs      f31, 0(r31)
	cmplwi   r3, 0
	lfs      f30, 4(r31)
	lfs      f29, 8(r31)
	beq      lbl_80221938
	lwz      r12, 0(r3)
	addi     r4, r1, 0x24
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x24
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x28(r1)
	fcmpo    cr0, f0, f1
	bge      lbl_80221950
	stfs     f1, 0x28(r1)
	b        lbl_80221950

lbl_80221938:
	lfs      f0, 0x1b8(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x1bc(r30)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x1c0(r30)
	stfs     f0, 0x2c(r1)

lbl_80221950:
	lfs      f1, 0x1d8(r30)
	lfs      f0, 0x1f0(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1d8(r30)
	lfs      f1, 0x1dc(r30)
	lfs      f0, 0x1f4(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1dc(r30)
	lfs      f1, 0x1e0(r30)
	lfs      f0, 0x1f8(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1e0(r30)
	lwz      r0, 0x274(r30)
	lfs      f0, 0x24(r1)
	mulli    r3, r0, 0xc
	addi     r3, r3, 0x1fc
	add      r3, r30, r3
	stfs     f0, 0(r3)
	lfs      f0, 0x28(r1)
	stfs     f0, 4(r3)
	lfs      f0, 0x2c(r1)
	stfs     f0, 8(r3)
	lwz      r3, 0x274(r30)
	addi     r0, r3, 1
	cmpwi    r0, 0xa
	stw      r0, 0x274(r30)
	blt      lbl_802219C4
	li       r0, 0
	stw      r0, 0x274(r30)

lbl_802219C4:
	lfs      f0, 0x1fc(r30)
	lfs      f1, 0x200(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x208(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x20c(r30)
	lfs      f2, 0x204(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x214(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x218(r30)
	fadds    f29, f29, f2
	fadds    f31, f31, f0
	lfs      f0, 0x220(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x224(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x22c(r30)
	lfs      f2, 0x210(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x230(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x238(r30)
	fadds    f29, f29, f2
	lfs      f2, 0x21c(r30)
	fadds    f30, f30, f1
	fadds    f31, f31, f0
	lfs      f0, 0x244(r30)
	fadds    f29, f29, f2
	lfs      f1, 0x23c(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x250(r30)
	lfs      f6, 0x228(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x248(r30)
	fadds    f31, f31, f0
	lfs      f0, 0x25c(r30)
	fadds    f29, f29, f6
	lfs      f5, 0x234(r30)
	fadds    f30, f30, f1
	fadds    f31, f31, f0
	lfs      f0, 0x268(r30)
	fadds    f29, f29, f5
	lfs      f1, 0x254(r30)
	lfs      f2, 0x240(r30)
	fadds    f31, f31, f0
	lfs      f4, lbl_8051A13C@sda21(r2)
	fadds    f30, f30, f1
	lfs      f1, 0x260(r30)
	fadds    f29, f29, f2
	lfs      f2, 0x24c(r30)
	fmuls    f31, f31, f4
	lfs      f0, 0x1d8(r30)
	fadds    f30, f30, f1
	lfs      f1, 0x26c(r30)
	fadds    f29, f29, f2
	lfs      f2, 0x258(r30)
	fsubs    f7, f31, f0
	lfs      f6, 0x264(r30)
	fadds    f30, f30, f1
	lfs      f0, 0x1f0(r30)
	fadds    f29, f29, f2
	lfs      f3, 0x1dc(r30)
	fmuls    f7, f7, f4
	lfs      f5, 0x270(r30)
	fmuls    f30, f30, f4
	lfs      f2, 0x1e0(r30)
	fadds    f29, f29, f6
	lfs      f1, lbl_8051A19C@sda21(r2)
	fadds    f0, f0, f7
	fsubs    f3, f30, f3
	fadds    f29, f29, f5
	stfs     f0, 0x1f0(r30)
	fmuls    f3, f3, f4
	fmuls    f29, f29, f4
	lfs      f0, 0x1f4(r30)
	fadds    f0, f0, f3
	fsubs    f2, f29, f2
	stfs     f0, 0x1f4(r30)
	fmuls    f2, f2, f4
	lfs      f0, 0x1f8(r30)
	fadds    f0, f0, f2
	stfs     f0, 0x1f8(r30)
	lfs      f0, 0x1f0(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1f0(r30)
	lfs      f0, 0x1f4(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1f4(r30)
	lfs      f0, 0x1f8(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1f8(r30)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80221EB8
	lwz      r4, 0x198(r30)
	lis      r0, 0x4330
	stw      r0, 0xd0(r1)
	mr       r3, r30
	lwz      r0, 0x18(r4)
	lfd      f1, lbl_8051A188@sda21(r2)
	rlwinm   r4, r0, 0x1d, 0x1f, 0x1f
	rlwinm   r0, r0, 0x1e, 0x1f, 0x1f
	subf     r0, r4, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0xd4(r1)
	lfd      f0, 0xd0(r1)
	fsubs    f1, f0, f1
	bl       addFovy__Q34Game15IllustratedBook6CameraFf
	lfs      f2, 0x28c(r30)
	lfs      f1, 0x28(r30)
	lfs      f0, 0x290(r30)
	fsubs    f4, f1, f2
	lwz      r3, 0x198(r30)
	fsubs    f3, f0, f2
	lfs      f2, 0x2fc(r30)
	lfs      f1, 0x5c(r3)
	lfs      f0, 0x1cc(r30)
	fdivs    f29, f4, f3
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1cc(r30)
	lfs      f0, 0x1cc(r30)
	lfs      f1, 0x1d0(r30)
	fcmpo    cr0, f0, f1
	bge      lbl_80221BC0
	stfs     f1, 0x1cc(r30)

lbl_80221BC0:
	lfs      f0, 0x1cc(r30)
	lfs      f1, 0x1d4(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_80221BD4
	stfs     f1, 0x1cc(r30)

lbl_80221BD4:
	lwz      r3, 0x198(r30)
	lfs      f3, 0x2f8(r30)
	lfs      f2, 0x58(r3)
	lfs      f1, 0x1c4(r30)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x1c4(r30)
	lfs      f1, 0x1c4(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80221C04
	fsubs    f0, f1, f0
	stfs     f0, 0x1c4(r30)

lbl_80221C04:
	lfs      f1, 0x1c4(r30)
	lfs      f0, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80221C20
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x1c4(r30)

lbl_80221C20:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isZukanEnlargedWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80221C58
	lwz      r3, 0x198(r30)
	lfs      f1, lbl_8051A124@sda21(r2)
	lfs      f0, 0x48(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x27c(r30)
	lwz      r3, 0x198(r30)
	lfs      f0, 0x4c(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x284(r30)
	b        lbl_80221C64

lbl_80221C58:
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f0, 0x27c(r30)
	stfs     f0, 0x284(r30)

lbl_80221C64:
	lfs      f4, 0x310(r30)
	lfs      f0, 0x30c(r30)
	lfs      f1, 0x27c(r30)
	fsubs    f3, f0, f4
	lfs      f2, 0x278(r30)
	lfs      f0, lbl_8051A128@sda21(r2)
	fsubs    f1, f1, f2
	fmadds   f3, f29, f3, f4
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x278(r30)
	lfs      f1, 0x284(r30)
	lfs      f2, 0x280(r30)
	fsubs    f1, f1, f2
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x280(r30)
	lfs      f5, 0x1c4(r30)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_80221CB4
	fneg     f1, f5

lbl_80221CB4:
	lfs      f3, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f6, 0x1c8(r30)
	fcmpo    cr0, f5, f0
	lfs      f1, 0x1c0(r30)
	lfs      f4, 0x1bc(r30)
	fctiwz   f0, f2
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f6, f0, f1
	bge      lbl_80221D1C
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_80221D34

lbl_80221D1C:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_80221D34:
	lfs      f0, 0x1b8(r30)
	addi     r4, r1, 0x18
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmadds   f0, f6, f1, f0
	stfs     f4, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f0, 0x18(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x1cc(r30)
	lis      r3, sincosTable___5JMath@ha
	lis      r4, "zero__10Vector3<f>"@ha
	lfs      f6, 0x18(r1)
	fadds    f7, f0, f1
	lfs      f5, 0x20(r1)
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f3, lbl_8051A180@sda21(r2)
	lfs      f2, lbl_8051A128@sda21(r2)
	addi     r8, r1, 8
	stfs     f7, 0x1c(r1)
	addi     r7, r4, "zero__10Vector3<f>"@l
	lfs      f0, lbl_8051A19C@sda21(r2)
	li       r6, 0
	lfs      f4, 0x1a0(r30)
	li       r0, -1
	lfs      f1, 0x1a4(r30)
	addi     r4, r1, 0x34
	fsubs    f8, f6, f4
	lfs      f6, 0x300(r30)
	fsubs    f7, f7, f1
	lfs      f4, 0x1a8(r30)
	lfs      f1, 0x1a0(r30)
	fmuls    f8, f8, f6
	fsubs    f4, f5, f4
	fmuls    f7, f7, f6
	fadds    f1, f1, f8
	fmuls    f4, f4, f6
	stfs     f1, 0x1a0(r30)
	lfs      f1, 0x1a4(r30)
	fadds    f1, f1, f7
	stfs     f1, 0x1a4(r30)
	lfs      f1, 0x1a8(r30)
	fadds    f1, f1, f4
	stfs     f1, 0x1a8(r30)
	lfs      f4, 0x1a0(r30)
	lfs      f1, 0x800(r3)
	stfs     f4, 8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f4, 0x1a4(r30)
	lwz      r5, sys@sda21(r13)
	stfs     f4, 0xc(r1)
	lfs      f4, 0x1a8(r30)
	stfs     f4, 0x10(r1)
	stfs     f3, 0x14(r1)
	stw      r8, 0x34(r1)
	stw      r7, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stw      r6, 0x44(r1)
	stw      r6, 0x78(r1)
	stb      r6, 0xa8(r1)
	stb      r6, 0x4d(r1)
	stb      r6, 0x4c(r1)
	stw      r6, 0x7c(r1)
	stw      r6, 0x48(r1)
	stb      r6, 0xc4(r1)
	stw      r6, 0xc8(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	stw      r0, 0xcc(r1)
	stw      r6, 0x80(r1)
	stb      r6, 0x4e(r1)
	lwz      r12, 4(r3)
	lfs      f1, 0x54(r5)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051A180@sda21(r2)
	lfs      f0, 0xc(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_80221EA0
	stfs     f1, 0xc(r1)

lbl_80221EA0:
	lfs      f0, 8(r1)
	stfs     f0, 0x1a0(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1a4(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1a8(r30)

lbl_80221EB8:
	lfs      f1, 0x1dc(r30)
	lfs      f0, 0x178(r30)
	lfs      f2, 0x1e0(r30)
	fsubs    f3, f1, f0
	lfs      f1, 0x17c(r30)
	lfs      f9, 0x1d8(r30)
	lfs      f0, 0x174(r30)
	fsubs    f4, f2, f1
	fmuls    f1, f3, f3
	fsubs    f2, f9, f0
	lfs      f0, lbl_8051A128@sda21(r2)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80221F08
	ble      lbl_80221F0C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80221F0C

lbl_80221F08:
	fmr      f1, f0

lbl_80221F0C:
	lfs      f0, lbl_8051A1A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80221F30
	lfs      f0, lbl_8051A11C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f10, f2, f0
	fmuls    f1, f3, f0
	fmuls    f11, f4, f0
	b        lbl_80221F3C

lbl_80221F30:
	lfs      f10, lbl_8051A128@sda21(r2)
	lfs      f11, lbl_8051A17C@sda21(r2)
	fmr      f1, f10

lbl_80221F3C:
	lfs      f7, lbl_8051A128@sda21(r2)
	mr       r3, r30
	lfs      f0, 0x1e4(r30)
	fmuls    f6, f10, f7
	lfs      f8, lbl_8051A11C@sda21(r2)
	fmuls    f12, f1, f7
	lfs      f5, 0x2a0(r30)
	lfs      f4, 0x278(r30)
	fadds    f1, f9, f0
	fnmsubs  f9, f11, f8, f12
	lfs      f3, 0x2a4(r30)
	lfs      f2, 0x280(r30)
	fmsubs   f6, f11, f7, f6
	fadds    f13, f5, f4
	lfs      f0, 0x2a8(r30)
	fadds    f29, f3, f2
	fmuls    f3, f6, f7
	fmsubs   f5, f10, f8, f12
	fmuls    f11, f7, f29
	fmadds   f2, f9, f13, f1
	fnmsubs  f10, f5, f8, f3
	fmuls    f1, f9, f7
	fadds    f2, f11, f2
	fmsubs   f3, f9, f8, f3
	fmsubs   f4, f5, f7, f1
	fmadds   f1, f10, f0, f2
	stfs     f1, 0x1ac(r30)
	lfs      f2, 0x1dc(r30)
	lfs      f1, 0x1e8(r30)
	fadds    f1, f2, f1
	fmadds   f1, f6, f13, f1
	fmadds   f1, f8, f29, f1
	fmadds   f1, f4, f0, f1
	stfs     f1, 0x1b0(r30)
	lfs      f2, 0x1e0(r30)
	lfs      f1, 0x1ec(r30)
	fadds    f1, f2, f1
	fmadds   f1, f5, f13, f1
	fadds    f1, f11, f1
	fmadds   f0, f3, f0, f1
	stfs     f0, 0x1b4(r30)
	bl       updateCameraShake__Q34Game15IllustratedBook6CameraFv
	mr       r3, r30
	bl       updateFocus__Q34Game15IllustratedBook6CameraFv
	lfs      f3, lbl_8051A1A8@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, 0x314(r30)
	lfs      f1, 0x2d0(r30)
	fmuls    f0, f3, f0
	lfs      f6, "zero__10Vector3<f>"@l(r3)
	lfs      f7, 4(r31)
	lfs      f8, 8(r31)
	fmuls    f0, f1, f0
	lfs      f1, lbl_8051A128@sda21(r2)
	stfs     f0, 0x2d0(r30)
	lfs      f2, 0x2d4(r30)
	lfs      f0, 0x314(r30)
	fmuls    f0, f2, f0
	stfs     f0, 0x2d4(r30)
	lfs      f0, 0x314(r30)
	lfs      f2, 0x2d8(r30)
	fmuls    f0, f3, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x2d8(r30)
	lfs      f2, 0x2c4(r30)
	lfs      f0, 0x2d0(r30)
	fadds    f0, f2, f0
	stfs     f0, 0x2c4(r30)
	lfs      f2, 0x2c8(r30)
	lfs      f0, 0x2d4(r30)
	fadds    f0, f2, f0
	stfs     f0, 0x2c8(r30)
	lfs      f2, 0x2cc(r30)
	lfs      f0, 0x2d8(r30)
	fadds    f0, f2, f0
	stfs     f0, 0x2cc(r30)
	lfs      f0, 0x2c4(r30)
	lfs      f5, 0x2cc(r30)
	fsubs    f2, f0, f6
	lfs      f4, 0x2c8(r30)
	lfs      f3, 0x318(r30)
	fsubs    f5, f5, f8
	lfs      f0, 0x2d0(r30)
	fsubs    f4, f4, f7
	fnmsubs  f0, f3, f2, f0
	stfs     f0, 0x2d0(r30)
	lfs      f2, 0x31c(r30)
	lfs      f0, 0x2d4(r30)
	fnmsubs  f0, f2, f4, f0
	stfs     f0, 0x2d4(r30)
	lfs      f2, 0x320(r30)
	lfs      f0, 0x2d8(r30)
	fnmsubs  f0, f2, f5, f0
	stfs     f0, 0x2d8(r30)
	lfs      f3, 0x2d0(r30)
	lfs      f2, 0x2d4(r30)
	lfs      f4, 0x2d8(r30)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802220F8
	fmadds   f0, f3, f3, f2
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802220FC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802220FC

lbl_802220F8:
	fmr      f3, f1

lbl_802220FC:
	lfs      f1, lbl_8051A110@sda21(r2)
	lfs      f0, 0x294(r30)
	lfs      f2, lbl_8051A180@sda21(r2)
	fmadds   f0, f1, f3, f0
	stfs     f0, 0x294(r30)
	lfs      f1, 0x1a0(r30)
	lfs      f0, 0x2c4(r30)
	lfs      f4, 0x1a4(r30)
	lfs      f3, 0x2c8(r30)
	fadds    f0, f1, f0
	lfs      f5, 0x1a8(r30)
	lfs      f1, 0x2cc(r30)
	fadds    f3, f4, f3
	stfs     f0, 0x174(r30)
	fadds    f0, f5, f1
	stfs     f3, 0x178(r30)
	stfs     f0, 0x17c(r30)
	lfs      f3, 0x2c4(r30)
	lfs      f4, 0x2c8(r30)
	lfs      f5, 0x2cc(r30)
	fmuls    f3, f3, f2
	lfs      f0, 0x1ac(r30)
	fmuls    f4, f4, f2
	lfs      f1, 0x1b0(r30)
	fmuls    f5, f5, f2
	lfs      f2, 0x1b4(r30)
	fadds    f0, f0, f3
	fadds    f1, f1, f4
	fadds    f2, f2, f5
	stfs     f0, 0x180(r30)
	stfs     f1, 0x184(r30)
	stfs     f2, 0x188(r30)
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r0, 0x124(r1)
	lwz      r30, 0xe8(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	802221AC
 * Size:	000204
 */
void IllustratedBook::Camera::updateCameraShake()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, 0x2dc(r31)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802222E4
	lfs      f31, 0x2e0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051A178@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, 0x2e4(r31)
	fsubs    f3, f0, f3
	lfs      f0, 0x294(r31)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x294(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, 0x2e8(r31)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80222274
	lfs      f0, 0x2ec(r31)
	fadds    f31, f31, f0

lbl_80222274:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_8051A148@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f0, f1, f0
	fmuls    f0, f31, f0
	stfs     f0, 0x2ac(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_8051A148@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f0, f1, f0
	fmuls    f0, f31, f0
	stfs     f0, 0x2b0(r31)

lbl_802222E4:
	lfs      f1, 0x2ac(r31)
	lfs      f0, 0x2a0(r31)
	lfs      f4, 0x2f0(r31)
	fsubs    f5, f1, f0
	lfs      f0, 0x2b8(r31)
	lfs      f3, 0x2b0(r31)
	lfs      f1, 0x2a4(r31)
	fmuls    f5, f5, f4
	lfs      f2, 0x2b4(r31)
	fsubs    f3, f3, f1
	lfs      f1, 0x2a8(r31)
	fadds    f0, f0, f5
	fsubs    f1, f2, f1
	fmuls    f3, f3, f4
	stfs     f0, 0x2b8(r31)
	fmuls    f1, f1, f4
	lfs      f0, 0x2bc(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x2c0(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x2c0(r31)
	lfs      f1, 0x2f4(r31)
	lfs      f0, 0x2b8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2b8(r31)
	lfs      f0, 0x2bc(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x2c0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2c0(r31)
	lfs      f1, 0x2a0(r31)
	lfs      f0, 0x2b8(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x2a0(r31)
	lfs      f1, 0x2a4(r31)
	lfs      f0, 0x2bc(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x2a4(r31)
	lfs      f1, 0x2a8(r31)
	lfs      f0, 0x2c0(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x2a8(r31)
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802223B0
 * Size:	0000E8
 */
void IllustratedBook::Camera::updateFocus()
{
	/*
	lfs      f1, 0x288(r3)
	lfs      f0, 0x28(r3)
	lfs      f3, 0x27c(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0x278(r3)
	lfs      f1, 0x284(r3)
	lfs      f0, 0x280(r3)
	fsubs    f3, f3, f2
	fabs     f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A11C@sda21(r2)
	fabs     f3, f3
	frsp     f1, f4
	fabs     f4, f2
	frsp     f2, f3
	fcmpo    cr0, f1, f0
	frsp     f1, f4
	bgt      lbl_8022240C
	lfs      f0, lbl_8051A190@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8022240C
	fcmpo    cr0, f2, f0
	ble      lbl_8022241C

lbl_8022240C:
	lfs      f1, 0x294(r3)
	lfs      f0, lbl_8051A110@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x294(r3)

lbl_8022241C:
	lfs      f1, lbl_8051A1B0@sda21(r2)
	lfs      f0, 0x294(r3)
	lfs      f3, lbl_8051A1AC@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, 0x298(r3)
	lfs      f0, lbl_8051A148@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x298(r3)
	lfs      f1, 0x298(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8022244C
	stfs     f0, 0x298(r3)

lbl_8022244C:
	lfs      f1, 0x298(r3)
	lfs      f0, lbl_8051A1B4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80222460
	stfs     f0, 0x298(r3)

lbl_80222460:
	lfs      f2, 0x298(r3)
	lfs      f1, 0x29c(r3)
	lfs      f0, lbl_8051A11C@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x298(r3)
	lfs      f2, 0x294(r3)
	lfs      f1, 0x298(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x294(r3)
	lfs      f1, 0x294(r3)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f0, 0x294(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
unknown IllustratedBook::Camera::getFocus(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80222498
 * Size:	000054
 */
void IllustratedBook::Camera::addFovy(float)
{
	/*
	lfs      f2, 0x304(r3)
	lfs      f0, 0x288(r3)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x288(r3)
	lfs      f0, 0x288(r3)
	lfs      f1, 0x28c(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_802224BC
	stfs     f1, 0x288(r3)

lbl_802224BC:
	lfs      f0, 0x288(r3)
	lfs      f1, 0x290(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_802224D0
	stfs     f1, 0x288(r3)

lbl_802224D0:
	lfs      f0, 0x288(r3)
	lfs      f1, 0x28(r3)
	lfs      f2, 0x308(r3)
	fsubs    f0, f0, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802224EC
 * Size:	0000EC
 */
SingleGame::ZukanState::ZukanState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r4, __vt__Q34Game10SingleGame5State@ha
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r4, r4, __vt__Q34Game10SingleGame5State@l
	stw      r0, 0(r3)
	li       r0, 0xa
	lis      r3, __vt__Q34Game10SingleGame10ZukanState@ha
	stw      r0, 4(r31)
	addi     r0, r3, __vt__Q34Game10SingleGame10ZukanState@l
	addi     r3, r31, 0x1c
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	bl       __ct__16DvdThreadCommandFv
	li       r3, 8
	li       r0, 0
	stw      r3, 0x9c(r31)
	li       r3, 0xb0
	stw      r0, 0x104(r31)
	stw      r0, 0x10c(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8022256C
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_8022256C:
	stw      r0, 0x90(r31)
	li       r5, 0
	lfs      f1, lbl_8051A128@sda21(r2)
	li       r0, -1
	stw      r5, 0xd4(r31)
	mr       r3, r31
	lfs      f0, lbl_8051A11C@sda21(r2)
	li       r4, 8
	stw      r5, 0xd8(r31)
	stw      r5, 0xdc(r31)
	stw      r5, 0xcc(r31)
	stw      r5, 0xb0(r31)
	stw      r5, 0xe4(r31)
	stw      r5, 0xf0(r31)
	stfs     f1, 0x108(r31)
	stfs     f1, 0xf4(r31)
	stfs     f0, 0xf8(r31)
	stw      r5, 0xfc(r31)
	stw      r0, 0x110(r31)
	stw      r0, 0x114(r31)
	bl
setMode__Q34Game10SingleGame10ZukanStateFQ44Game10SingleGame10ZukanState5CMode
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
 * Address:	802225D8
 * Size:	00036C
 */
void SingleGame::ZukanState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r6, lbl_80482E60@ha
	stw      r0, 0x54(r1)
	stmw     r26, 0x38(r1)
	mr       r28, r3
	lis      r3, lbl_804C0A40@ha
	mr       r29, r4
	mr       r30, r5
	addi     r27, r6, lbl_80482E60@l
	addi     r31, r3, lbl_804C0A40@l
	li       r4, 0
	addi     r5, r2, lbl_8051A1BC@sda21
	li       r6, 3
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0xe0(r28)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	ori      r0, r0, 0x20
	stb      r0, 0x3c(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_8051A1BC@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r3, 0xe0(r28)
	bl       getFreeSize__7JKRHeapFv
	stw      r3, sParentHeapFreeSize_1@sda21(r13)
	lwz      r26, 0xe0(r28)
	mr       r3, r26
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r26
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xd4(r28)
	lwz      r3, 0xd4(r28)
	bl       becomeCurrentHeap__7JKRHeapFv
	cmplwi   r30, 0
	bne      lbl_8022268C
	addi     r3, r27, 0x7c
	addi     r5, r27, 0x90
	li       r4, 0x401
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022268C:
	lis      r3, 0x00096000@ha
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r3, 0x00096000@l
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xf0(r28)
	lwz      r0, 0xf0(r28)
	cmplwi   r0, 0
	bne      lbl_802226C4
	addi     r3, r27, 0x7c
	addi     r5, r27, 0xf8
	li       r4, 0x407
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802226C4:
	li       r3, 0x38
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80222764
	lis      r5, __vt__5CNode@ha
	lis      r4, __vt__Q34Game15IllustratedBook10DebugParms@ha
	addi     r0, r5, __vt__5CNode@l
	li       r8, 0
	stw      r0, 0(r3)
	addi     r7, r27, 0x34
	addi     r6, r4, __vt__Q34Game15IllustratedBook10DebugParms@l
	li       r5, 0x20
	stw      r8, 0x10(r3)
	li       r4, 0xa
	li       r0, 0xff
	lfs      f5, lbl_8051A110@sda21(r2)
	stw      r8, 0xc(r3)
	lfs      f4, lbl_8051A114@sda21(r2)
	stw      r8, 8(r3)
	lfs      f3, lbl_8051A118@sda21(r2)
	stw      r8, 4(r3)
	lfs      f2, lbl_8051A11C@sda21(r2)
	stw      r7, 0x14(r3)
	lfs      f1, lbl_8051A120@sda21(r2)
	stw      r6, 0(r3)
	lfs      f0, lbl_8051A124@sda21(r2)
	stb      r8, 0x34(r3)
	stb      r8, 0x35(r3)
	stb      r8, 0x34(r3)
	stb      r8, 0x35(r3)
	stb      r5, 0x18(r3)
	stb      r5, 0x19(r3)
	stb      r4, 0x1a(r3)
	stb      r0, 0x1b(r3)
	stfs     f5, 0x1c(r3)
	stfs     f4, 0x20(r3)
	stfs     f3, 0x24(r3)
	stfs     f2, 0x28(r3)
	stfs     f1, 0x2c(r3)
	stfs     f0, 0x30(r3)

lbl_80222764:
	stw      r3, 0x104(r28)
	mr       r3, r29
	lwz      r4, 0x104(r28)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802227C4
	lwz      r8, 0x2c(r31)
	lis      r4, __vt__9IDelegate@ha
	lwz      r7, 0x30(r31)
	addi     r5, r4, __vt__9IDelegate@l
	lwz      r6, 0x34(r31)
	lis      r4, "__vt__41Delegate<Q34Game10SingleGame10ZukanState>"@ha
	addi     r0, r4, "__vt__41Delegate<Q34Game10SingleGame10ZukanState>"@l
	stw      r8, 0x20(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r28, 4(r3)
	stw      r8, 8(r3)
	stw      r7, 0xc(r3)
	stw      r7, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r6, 0x10(r3)

lbl_802227C4:
	stw      r3, 0x10(r28)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80222818
	lwz      r8, 0x38(r31)
	lis      r4, __vt__9IDelegate@ha
	lwz      r7, 0x3c(r31)
	addi     r5, r4, __vt__9IDelegate@l
	lwz      r6, 0x40(r31)
	lis      r4, "__vt__41Delegate<Q34Game10SingleGame10ZukanState>"@ha
	addi     r0, r4, "__vt__41Delegate<Q34Game10SingleGame10ZukanState>"@l
	stw      r8, 0x14(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r28, 4(r3)
	stw      r8, 8(r3)
	stw      r7, 0xc(r3)
	stw      r7, 0x18(r1)
	stw      r6, 0x1c(r1)
	stw      r6, 0x10(r3)

lbl_80222818:
	stw      r3, 0x14(r28)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8022286C
	lwz      r8, 0x44(r31)
	lis      r4, __vt__9IDelegate@ha
	lwz      r7, 0x48(r31)
	addi     r5, r4, __vt__9IDelegate@l
	lwz      r6, 0x4c(r31)
	lis      r4, "__vt__41Delegate<Q34Game10SingleGame10ZukanState>"@ha
	addi     r0, r4, "__vt__41Delegate<Q34Game10SingleGame10ZukanState>"@l
	stw      r8, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r28, 4(r3)
	stw      r8, 8(r3)
	stw      r7, 0xc(r3)
	stw      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x10(r3)

lbl_8022286C:
	stw      r3, 0x18(r28)
	lfs      f1, lbl_8051A11C@sda21(r2)
	lwz      r0, 0xd4(r29)
	stw      r0, 0x18(r29)
	lwz      r3, 0xd4(r29)
	bl       start__8WipeBaseFf
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	stw      r29, 0x94(r28)
	li       r5, 0
	li       r3, -1
	li       r0, 4
	stb      r5, 0x88(r28)
	addi     r4, r28, 0x1c
	stw      r5, shadowMgr__4Game@sda21(r13)
	stw      r3, 0xa0(r28)
	stw      r5, 0xa4(r28)
	stw      r3, 0xa8(r28)
	stw      r5, 0xac(r28)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x44(r3)
	lwz      r3, sys@sda21(r13)
	lwz      r5, 0x10(r28)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x90(r28)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lbz      r0, 0(r30)
	cmplwi   r0, 0
	beq      lbl_80222900
	mr       r3, r28
	li       r4, 0
	bl
setMode__Q34Game10SingleGame10ZukanStateFQ44Game10SingleGame10ZukanState5CMode
	b        lbl_8022290C

lbl_80222900:
	mr       r3, r28
	li       r4, 1
	bl
setMode__Q34Game10SingleGame10ZukanStateFQ44Game10SingleGame10ZukanState5CMode

lbl_8022290C:
	lwz      r3, 4(r30)
	li       r0, 0
	stw      r3, 0x10c(r28)
	stw      r0, generalEnemyMgr__4Game@sda21(r13)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x240(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x240(r3)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
unknown SingleGame::ZukanState::startTekiMode(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
unknown SingleGame::ZukanState::startPelletMode(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80222944
 * Size:	000014
 */
void SingleGame::ZukanState::setMode(Game::SingleGame::ZukanState::CMode)
{
	/*
	lwz      r0, 0x9c(r3)
	cmpw     r0, r4
	beqlr
	stw      r4, 0x9c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80222958
 * Size:	00072C
 */
void SingleGame::ZukanState::exec(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	lis      r6, lbl_80482E60@ha
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	addi     r31, r6, lbl_80482E60@l
	stw      r30, 0x98(r1)
	mr       r30, r4
	stw      r29, 0x94(r1)
	mr       r29, r3
	stw      r28, 0x90(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r5)
	bl       isDayTime__Q24Game7TimeMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802229AC
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f0, lbl_8051A1DC@sda21(r2)
	lwz      r3, 0x40(r3)
	stfs     f0, 0x21c(r3)
	b        lbl_802229BC

lbl_802229AC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lfs      f0, lbl_8051A1E0@sda21(r2)
	lwz      r3, 0x40(r3)
	stfs     f0, 0x21c(r3)

lbl_802229BC:
	lwz      r3, 0x104(r29)
	lhz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80222A8C
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 3
	bne      lbl_80222A24
	lwz      r0, 0xa0(r29)
	cmpwi    r0, 0
	blt      lbl_80222A18
	cmpwi    r0, 0x66
	bge      lbl_80222A18
	lbz      r0, 0x88(r29)
	cmplwi   r0, 0
	beq      lbl_80222A18
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       getZukanEnemyCurrSelectId__Q26Screen9Game2DMgrFv
	lwz      r0, 0xa0(r29)
	cmpw     r0, r3
	bne      lbl_80222A18
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanEffectOff__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A18:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanRequest__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A24:
	cmpwi    r0, 6
	bne      lbl_80222A80
	lwz      r0, 0xa8(r29)
	cmpwi    r0, 0
	blt      lbl_80222A74
	bl       getMaxPelletID__Q34Game10SingleGame10ZukanStateFv
	lwz      r0, 0xa8(r29)
	cmplw    r0, r3
	bge      lbl_80222A74
	lbz      r0, 0x88(r29)
	cmplwi   r0, 0
	beq      lbl_80222A74
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       getZukanItemCurrSelectId__Q26Screen9Game2DMgrFv
	lwz      r0, 0xa8(r29)
	cmpw     r0, r3
	bne      lbl_80222A74
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanEffectOff__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A74:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanRequest__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A80:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanRequest__Q26Screen9Game2DMgrFv
	b        lbl_80222A94

lbl_80222A8C:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       requireZukanEffectOff__Q26Screen9Game2DMgrFv

lbl_80222A94:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80222CCC
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isZukanEnlargedWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80222CCC
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isZukanMemoWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80222CCC
	lwz      r3, 0x90(r29)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x19, 0x1a
	beq      lbl_80222CCC
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 5
	beq      lbl_80222CBC
	bge      lbl_80222AF0
	cmpwi    r0, 3
	bge      lbl_80222AFC
	b        lbl_80222CBC

lbl_80222AF0:
	cmpwi    r0, 8
	bge      lbl_80222CBC
	b        lbl_80222BDC

lbl_80222AFC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	li       r28, 0
	bl       isZukanEnemy__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80222BAC
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 5
	beq      lbl_80222B24
	li       r0, 5
	stw      r0, 0x9c(r29)

lbl_80222B24:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0x6c(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanItem@ha
	addi     r0, r29, 0x114
	stw      r4, 0x6c(r1)
	addi     r5, r3, __vt__Q28Morimura19DispMemberZukanItem@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x6c
	stw      r6, 0x70(r1)
	stw      r6, 0x74(r1)
	stw      r6, 0x78(r1)
	stw      r6, 0x7c(r1)
	stw      r6, 0x80(r1)
	stw      r6, 0x84(r1)
	stw      r6, 0x88(r1)
	stw      r5, 0x6c(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x74(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x78(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x80(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x7c(r1)
	stw      r0, 0x88(r1)
	bl open_ZukanItem__Q26Screen9Game2DMgrFRQ28Morimura19DispMemberZukanItem lfs
f1, lbl_8051A128@sda21(r2) mr       r3, r29 bl
startWipe__Q34Game10SingleGame10ZukanStateFf li       r28, 1

lbl_80222BAC:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80222BC8
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x181f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222BC8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1807
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222BDC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	li       r28, 0
	bl       isZukanItem__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80222C8C
	lwz      r0, 0x9c(r29)
	cmpwi    r0, 2
	beq      lbl_80222C04
	li       r0, 2
	stw      r0, 0x9c(r29)

lbl_80222C04:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0x4c(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura20DispMemberZukanEnemy@ha
	addi     r0, r29, 0x110
	stw      r4, 0x4c(r1)
	addi     r5, r3, __vt__Q28Morimura20DispMemberZukanEnemy@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x4c
	stw      r6, 0x50(r1)
	stw      r6, 0x54(r1)
	stw      r6, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r6, 0x60(r1)
	stw      r6, 0x64(r1)
	stw      r6, 0x68(r1)
	stw      r5, 0x4c(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x54(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x58(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x60(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x5c(r1)
	stw      r0, 0x68(r1)
	bl open_ZukanEnemy__Q26Screen9Game2DMgrFRQ28Morimura20DispMemberZukanEnemy
	lfs      f1, lbl_8051A128@sda21(r2)
	mr       r3, r29
	bl       startWipe__Q34Game10SingleGame10ZukanStateFf
	li       r28, 1

lbl_80222C8C:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80222CA8
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x181f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222CA8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1807
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_80222CCC

lbl_80222CBC:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1807
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80222CCC:
	lbz      r0, 0x88(r29)
	cmplwi   r0, 0
	bne      lbl_80222F04
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x240(r3)
	ori      r0, r0, 1
	stw      r0, 0x240(r3)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, 0x9c(r29)
	cmpwi    r3, 0
	beq      lbl_80222D08
	cmpwi    r3, 1
	bne      lbl_80222E4C

lbl_80222D08:
	lwz      r0, 0x34(r29)
	cmpwi    r0, 2
	bne      lbl_80223064
	cmpwi    r3, 0
	bne      lbl_80222DB4
	cmpwi    r3, 2
	beq      lbl_80222D2C
	li       r0, 2
	stw      r0, 0x9c(r29)

lbl_80222D2C:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0x2c(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura20DispMemberZukanEnemy@ha
	addi     r0, r29, 0x110
	stw      r4, 0x2c(r1)
	addi     r5, r3, __vt__Q28Morimura20DispMemberZukanEnemy@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x2c
	stw      r6, 0x30(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x38(r1)
	stw      r6, 0x3c(r1)
	stw      r6, 0x40(r1)
	stw      r6, 0x44(r1)
	stw      r6, 0x48(r1)
	stw      r5, 0x2c(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x34(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x38(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x40(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x3c(r1)
	stw      r0, 0x48(r1)
	bl open_ZukanEnemy__Q26Screen9Game2DMgrFRQ28Morimura20DispMemberZukanEnemy
	lfs      f1, lbl_8051A128@sda21(r2)
	mr       r3, r29
	bl       startWipe__Q34Game10SingleGame10ZukanStateFf
	b        lbl_80223064

lbl_80222DB4:
	cmpwi    r3, 5
	beq      lbl_80222DC4
	li       r0, 5
	stw      r0, 0x9c(r29)

lbl_80222DC4:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanBase@ha
	stw      r0, 0xc(r1)
	addi     r4, r3, __vt__Q28Morimura19DispMemberZukanBase@l
	lis      r3, __vt__Q28Morimura19DispMemberZukanItem@ha
	addi     r0, r29, 0x114
	stw      r4, 0xc(r1)
	addi     r5, r3, __vt__Q28Morimura19DispMemberZukanItem@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0xc
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r6, 0x18(r1)
	stw      r6, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r5, 0xc(r1)
	lwz      r5, 0xf0(r29)
	stw      r5, 0x14(r1)
	lwz      r5, 0xcc(r29)
	stw      r5, 0x18(r1)
	lwz      r5, 0xec(r29)
	stw      r5, 0x20(r1)
	lwz      r5, 0xe8(r29)
	stw      r5, 0x1c(r1)
	stw      r0, 0x28(r1)
	bl open_ZukanItem__Q26Screen9Game2DMgrFRQ28Morimura19DispMemberZukanItem lfs
f1, lbl_8051A128@sda21(r2) mr       r3, r29 bl
startWipe__Q34Game10SingleGame10ZukanStateFf b        lbl_80223064

lbl_80222E4C:
	lwz      r0, 0x34(r29)
	cmpwi    r0, 2
	bne      lbl_80223064
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80222E78
	addi     r3, r31, 0x190
	addi     r5, r31, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222E78:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_80222E98
	addi     r3, r31, 0x190
	addi     r5, r31, 0x90
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222E98:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_80222EB8
	addi     r3, r31, 0x19c
	addi     r5, r31, 0x90
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222EB8:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_80222EDC
	addi     r3, r31, 0x19c
	addi     r5, r31, 0x1a8
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80222EDC:
	mr       r3, r28
	bl       adaptObjMgr__Q23PSM13Scene_ObjectsFv
	li       r0, 1
	stb      r0, 0x88(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x240(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x240(r3)
	b        lbl_80223064

lbl_80222F04:
	lwz      r6, 0x9c(r29)
	cmpwi    r6, 5
	beq      lbl_80222F50
	bge      lbl_80222F2C
	cmpwi    r6, 3
	beq      lbl_80222F64
	bge      lbl_80223024
	cmpwi    r6, 2
	bge      lbl_80222F3C
	b        lbl_80223044

lbl_80222F2C:
	cmpwi    r6, 7
	beq      lbl_80223034
	bge      lbl_80223044
	b        lbl_80222FC4

lbl_80222F3C:
	mr       r3, r29
	mr       r4, r30
	li       r5, 3
	bl
execModeChange__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionQ44Game10SingleGame10ZukanState5CMode
	b        lbl_80223058

lbl_80222F50:
	mr       r3, r29
	mr       r4, r30
	li       r5, 6
	bl
execModeChange__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionQ44Game10SingleGame10ZukanState5CMode
	b        lbl_80223058

lbl_80222F64:
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncAllNoBlock__6SystemFv
	cmpwi    r3, 0
	bne      lbl_80222FB4
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       check_ZukanEnemyRequest__Q26Screen9Game2DMgrFRi
	cmpwi    r3, 3
	bne      lbl_80222FB4
	mr       r3, r29
	bl       clearHeaps__Q34Game10SingleGame10ZukanStateFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80223058

lbl_80222FB4:
	mr       r3, r29
	mr       r4, r30
	bl execTeki__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection b
lbl_80223058

lbl_80222FC4:
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncAllNoBlock__6SystemFv
	cmpwi    r3, 0
	bne      lbl_80223014
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       check_ZukanItemRequest__Q26Screen9Game2DMgrFRi
	cmpwi    r3, 3
	bne      lbl_80223014
	mr       r3, r29
	bl       clearHeaps__Q34Game10SingleGame10ZukanStateFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80223058

lbl_80223014:
	mr       r3, r29
	mr       r4, r30
	bl execPellet__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection
	b        lbl_80223058

lbl_80223024:
	mr       r3, r29
	mr       r4, r30
	bl
execChangeTeki__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection b
lbl_80223058

lbl_80223034:
	mr       r3, r29
	mr       r4, r30
	bl
execChangePellet__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection b
lbl_80223058

lbl_80223044:
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x1cc
	li       r4, 0x579
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80223058:
	lwz      r3, 0x100(r29)
	addi     r3, r3, 0x18
	bl       update__Q34Game15IllustratedBook12ColorSettingFv

lbl_80223064:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80223084
 * Size:	00016C
 */
// void SingleGame::ZukanState::execModeChange((Game::SingleGameSection*, Game::SingleGame::ZukanState::CMode))
void SingleGame::ZukanState::execModeChange(Game::SingleGameSection*, Game::SingleGame::ZukanState::CMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0xFC(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x7C
	  bge-      .loc_0x40
	  cmpwi     r0, 0
	  bge-      .loc_0x4C
	  b         .loc_0x128

	.loc_0x40:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x128
	  b         .loc_0xF0

	.loc_0x4C:
	  lfs       f1, 0xF4(r29)
	  lfs       f0, 0xF8(r29)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x128
	  lwz       r3, -0x6514(r13)
	  bl        0x20054C
	  cmpwi     r3, 0
	  bne-      .loc_0x128
	  li        r0, 0x1
	  stw       r0, 0xFC(r29)
	  b         .loc_0x128

	.loc_0x7C:
	  cmpwi     r31, 0x6
	  beq-      .loc_0xA8
	  bge-      .loc_0xBC
	  cmpwi     r31, 0x3
	  beq-      .loc_0x94
	  b         .loc_0xBC

	.loc_0x94:
	  li        r0, -0x1
	  stw       r0, 0xA0(r29)
	  lwz       r4, 0xA0(r29)
	  bl        0x23BC
	  b         .loc_0xDC

	.loc_0xA8:
	  li        r0, -0x1
	  stw       r0, 0xA8(r29)
	  lwz       r4, 0xA8(r29)
	  bl        0x248C
	  b         .loc_0xDC

	.loc_0xBC:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x3040
	  mr        r6, r31
	  addi      r3, r3, 0x2EDC
	  li        r4, 0x5B3
	  crclr     6, 0x6
	  bl        -0x1F8B1C

	.loc_0xDC:
	  lfs       f0, -0x4238(r2)
	  li        r0, 0x2
	  stfs      f0, 0xF4(r29)
	  stw       r0, 0xFC(r29)
	  b         .loc_0x128

	.loc_0xF0:
	  lfs       f0, 0xF4(r29)
	  lfs       f1, 0xF8(r29)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x128
	  stfs      f1, 0xF4(r29)
	  lwz       r3, -0x6514(r13)
	  bl        0x2004A4
	  cmpwi     r3, 0
	  bne-      .loc_0x128
	  lwz       r0, 0x9C(r29)
	  cmpw      r0, r31
	  beq-      .loc_0x128
	  stw       r31, 0x9C(r29)

	.loc_0x128:
	  lbz       r0, 0x88(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x150
	  lwz       r4, -0x6514(r13)
	  mr        r3, r30
	  lfs       f1, 0xF4(r29)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0xF4(r29)
	  bl        -0xD7954

	.loc_0x150:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802231F0
 * Size:	0000E0
 */
void SingleGame::ZukanState::execChangeTeki(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xfc(r3)
	cmpwi    r0, 1
	beq      lbl_80223248
	bge      lbl_80223228
	cmpwi    r0, 0
	bge      lbl_80223234
	b        lbl_80223290

lbl_80223228:
	cmpwi    r0, 3
	bge      lbl_80223290
	b        lbl_80223264

lbl_80223234:
	lfs      f0, lbl_8051A128@sda21(r2)
	li       r0, 1
	stfs     f0, 0xf4(r30)
	stw      r0, 0xfc(r30)
	b        lbl_80223290

lbl_80223248:
	lwz      r4, 0xa0(r30)
	bl       createTeki__Q34Game10SingleGame10ZukanStateFi
	lfs      f0, lbl_8051A128@sda21(r2)
	li       r0, 2
	stfs     f0, 0xf4(r30)
	stw      r0, 0xfc(r30)
	b        lbl_80223290

lbl_80223264:
	lfs      f1, 0xf4(r30)
	lfs      f0, 0xf8(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80223290
	lwz      r0, 0x9c(r30)
	cmpwi    r0, 3
	beq      lbl_80223288
	li       r0, 3
	stw      r0, 0x9c(r30)

lbl_80223288:
	lfs      f0, 0xf8(r30)
	stfs     f0, 0xf4(r30)

lbl_80223290:
	lbz      r0, 0x88(r30)
	cmplwi   r0, 0
	beq      lbl_802232B8
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0xf4(r30)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0xf4(r30)
	bl       doUpdate__Q24Game15BaseGameSectionFv

lbl_802232B8:
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
 * Address:	802232D0
 * Size:	0005A4
 */
unknown SingleGame::ZukanState::execTeki(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stmw     r26, 0xa8(r1)
	mr       r29, r3
	lwz      r3, 0x90(r3)
	mr       r30, r4
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80223724
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       getZukanEnemyCurrSelectId__Q26Screen9Game2DMgrFv
	cmpwi    r3, -1
	beq      lbl_80223724
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80223724
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80223724
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r5, 0x20
	stw      r0, 0x64(r1)
	addi     r6, r4, __vt__Q24Game11PikiInitArg@l
	li       r0, 0
	addi     r4, r1, 0x64
	stw      r6, 0x64(r1)
	stw      r5, 0x68(r1)
	stw      r0, 0x6c(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	li       r4, 6
	bl       changeShape__Q24Game4PikiFi
	lwz      r4, 0x98(r29)
	addi     r3, r1, 0x24
	bl       getLookAtPosition__6CameraFv
	lwz      r4, 0x98(r29)
	addi     r3, r1, 0x18
	lfs      f31, 0x24(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x28(r1)
	lwz      r12, 0x4c(r12)
	lfs      f29, 0x2c(r1)
	mtctr    r12
	bctrl
	lfs      f28, 0x18(r1)
	addi     r3, r1, 0xc
	lfs      f27, 0x1c(r1)
	lfs      f26, 0x20(r1)
	lwz      r4, 0x98(r29)
	bl       getViewVector__11CullFrustumFv
	lfs      f0, 0x10(r1)
	lfs      f2, 0x14(r1)
	fmuls    f3, f0, f0
	lfs      f1, 0xc(r1)
	fmuls    f2, f2, f2
	lfs      f0, lbl_8051A128@sda21(r2)
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x74(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0x70(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x70(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f25, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	fmr      f3, f25
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0x78(r1)
	lfd      f2, lbl_8051A188@sda21(r2)
	fcmpo    cr0, f25, f0
	lfd      f0, 0x78(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051A124@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f4, f0, f1
	bge      lbl_80223488
	fneg     f3, f25

lbl_80223488:
	lfs      f2, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f25, f0
	fctiwz   f0, f1
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f4, f0
	bge      lbl_802234E4
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f25, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802234FC

lbl_802234E4:
	fmuls    f0, f25, f2
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802234FC:
	fmuls    f2, f4, f0
	lfs      f1, lbl_8051A128@sda21(r2)
	fadds    f0, f29, f3
	stfs     f28, 0x58(r1)
	fadds    f1, f30, f1
	fadds    f2, f31, f2
	fsubs    f0, f0, f26
	stfs     f27, 0x5c(r1)
	fsubs    f1, f1, f27
	fsubs    f2, f2, f28
	stfs     f26, 0x60(r1)
	stfs     f1, 0x50(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x54(r1)
	lwz      r3, 0x104(r29)
	lfs      f3, 0x28(r3)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x9c(r1)
	mr       r3, r31
	lwz      r5, 0x104(r29)
	addi     r4, r1, 0x4c
	stw      r0, 0x98(r1)
	lfd      f1, lbl_8051A188@sda21(r2)
	lfd      f0, 0x98(r1)
	lfs      f3, lbl_8051A178@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, 0x30(r5)
	lfs      f0, 0x2c(r5)
	lfs      f2, 0x50(r1)
	fdivs    f3, f4, f3
	fmadds   f0, f1, f3, f0
	fadds    f0, f2, f0
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r1)
	lfs      f1, 0x50(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x54(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051A128@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802235F8
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802235FC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802235FC

lbl_802235F8:
	fmr      f3, f1

lbl_802235FC:
	lfs      f0, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80223634
	lfs      f0, lbl_8051A11C@sda21(r2)
	lfs      f2, 0x4c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x50(r1)
	lfs      f0, 0x54(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)

lbl_80223634:
	lfs      f0, 0x50(r1)
	addi     r4, r1, 0x58
	lfs      f1, lbl_8051A128@sda21(r2)
	lfs      f7, 0x4c(r1)
	fmuls    f6, f0, f1
	lfs      f2, lbl_8051A11C@sda21(r2)
	lfs      f5, 0x54(r1)
	fmuls    f0, f7, f1
	lwz      r5, 0x104(r29)
	fnmsubs  f4, f5, f2, f6
	lfs      f3, 0x20(r5)
	fmsubs   f0, f5, f1, f0
	fmsubs   f6, f7, f2, f6
	lfs      f2, 0x58(r1)
	fmuls    f4, f4, f3
	fmuls    f5, f0, f3
	lfs      f1, 0x5c(r1)
	fmuls    f6, f6, f3
	lfs      f0, 0x60(r1)
	fadds    f2, f2, f4
	fadds    f1, f1, f5
	fadds    f0, f0, f6
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x58(r1)
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x60(r1)
	lfs      f0, 0x24(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x5c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051A180@sda21(r2)
	lfs      f0, 0x5c(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f0, f1
	bge      lbl_802236D0
	stfs     f1, 0x5c(r1)

lbl_802236D0:
	mr       r3, r31
	addi     r4, r1, 0x58
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x9c(r1)
	li       r4, 0x3858
	lfd      f3, lbl_8051A188@sda21(r2)
	li       r5, 0
	stw      r0, 0x98(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0x98(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1fc(r31)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80223724:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isAppearConfirmWindow__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802237DC
	lwz      r3, 0x90(r29)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_802237DC
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802237DC
	beq      lbl_80223758
	addi     r3, r3, 4

lbl_80223758:
	li       r0, 0
	stw      r3, 0x44(r1)
	addi     r3, r1, 0x3c
	stw      r0, 0x48(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x40(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractDope@ha
	addi     r26, r4, __vt__Q24Game11Interaction@l
	li       r31, 1
	addi     r28, r3, __vt__Q24Game12InteractDope@l
	li       r27, 0
	b        lbl_802237D0

lbl_80223790:
	lwz      r12, 0(r3)
	lwz      r4, 0x40(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	stw      r26, 0x30(r1)
	addi     r4, r1, 0x30
	stw      r27, 0x34(r1)
	stw      r28, 0x30(r1)
	stw      r31, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x3c
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_802237D0:
	lwz      r3, 0x3c(r1)
	cmplwi   r3, 0
	bne      lbl_80223790

lbl_802237DC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       check_ZukanEnemyRequest__Q26Screen9Game2DMgrFRi
	cmpwi    r3, 1
	beq      lbl_802237F8
	bge      lbl_80223820
	b        lbl_80223820

lbl_802237F8:
	lwz      r4, 8(r1)
	lwz      r0, 0xa0(r29)
	cmpw     r4, r0
	beq      lbl_80223820
	lwz      r3, 0x104(r29)
	lhz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80223820
	mr       r3, r29
	bl       createEnemy__Q34Game10SingleGame10ZukanStateFi

lbl_80223820:
	mr       r3, r30
	bl       doUpdate__Q24Game15BaseGameSectionFv
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	lmw      r26, 0xa8(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	80223874
 * Size:	000018
 */
void SingleGame::ZukanState::startWipe(float)
{
	/*
	li       r0, 0
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0xfc(r3)
	stfs     f0, 0xf4(r3)
	stfs     f1, 0xf8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022388C
 * Size:	00003C
 */
void SingleGame::ZukanState::createEnemy(int)
{
	/*
	lwz      r0, 0x9c(r3)
	cmpwi    r0, 3
	bnelr
	stw      r4, 0xa0(r3)
	lwz      r0, 0x9c(r3)
	cmpwi    r0, 4
	beq      lbl_802238B0
	li       r0, 4
	stw      r0, 0x9c(r3)

lbl_802238B0:
	li       r0, 0
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0xfc(r3)
	stfs     f0, 0xf4(r3)
	stfs     f0, 0xf8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void SingleGame::ZukanState::createItem(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802238C8
 * Size:	0000EC
 */
void SingleGame::ZukanState::execChangePellet(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xfc(r3)
	cmpwi    r0, 1
	beq      lbl_8022392C
	bge      lbl_80223900
	cmpwi    r0, 0
	bge      lbl_8022390C
	b        lbl_80223974

lbl_80223900:
	cmpwi    r0, 3
	bge      lbl_80223974
	b        lbl_80223948

lbl_8022390C:
	lfs      f0, 0xf4(r30)
	lfs      f1, 0xf8(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_80223974
	stfs     f1, 0xf4(r30)
	li       r0, 1
	stw      r0, 0xfc(r30)
	b        lbl_80223974

lbl_8022392C:
	lwz      r4, 0xa8(r30)
	bl       createPellet__Q34Game10SingleGame10ZukanStateFi
	lfs      f0, lbl_8051A128@sda21(r2)
	li       r0, 2
	stfs     f0, 0xf4(r30)
	stw      r0, 0xfc(r30)
	b        lbl_80223974

lbl_80223948:
	lfs      f1, 0xf4(r30)
	lfs      f0, 0xf8(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80223974
	lwz      r0, 0x9c(r30)
	cmpwi    r0, 6
	beq      lbl_8022396C
	li       r0, 6
	stw      r0, 0x9c(r30)

lbl_8022396C:
	lfs      f0, 0xf8(r30)
	stfs     f0, 0xf4(r30)

lbl_80223974:
	lbz      r0, 0x88(r30)
	cmplwi   r0, 0
	beq      lbl_8022399C
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0xf4(r30)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0xf4(r30)
	bl       doUpdate__Q24Game15BaseGameSectionFv

lbl_8022399C:
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
 * Address:	802239B4
 * Size:	0000B4
 */
unknown SingleGame::ZukanState::execPellet(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       getMaxPelletID__Q34Game10SingleGame10ZukanStateFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl       check_ZukanItemRequest__Q26Screen9Game2DMgrFRi
	cmpwi    r3, 1
	beq      lbl_802239F0
	bge      lbl_80223A48
	b        lbl_80223A48

lbl_802239F0:
	lwz      r4, 8(r1)
	lwz      r0, 0xa8(r30)
	cmpw     r4, r0
	beq      lbl_80223A48
	lwz      r3, 0x104(r30)
	lhz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80223A48
	lwz      r0, 0x9c(r30)
	cmpwi    r0, 6
	bne      lbl_80223A48
	stw      r4, 0xa8(r30)
	lwz      r0, 0x9c(r30)
	cmpwi    r0, 7
	beq      lbl_80223A34
	li       r0, 7
	stw      r0, 0x9c(r30)

lbl_80223A34:
	li       r0, 0
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0xfc(r30)
	stfs     f0, 0xf4(r30)
	stfs     f0, 0xf8(r30)

lbl_80223A48:
	mr       r3, r31
	bl       doUpdate__Q24Game15BaseGameSectionFv
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
 * Address:	80223A68
 * Size:	00003C
 */
int SingleGame::ZukanState::getMaxPelletID()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 3
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r31, r3
	li       r3, 4
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	lwz      r0, 0x14(r1)
	add      r3, r31, r3
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80223AA4
 * Size:	00007C
 */
PelletConfig* SingleGame::ZukanState::getCurrentPelletConfig(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 3
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r0, r3
	li       r3, 4
	mr       r31, r0
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r4, r30
	mr       r30, r3
	addi     r3, r1, 8
	bl       convertPelletID__Q34Game10SingleGame10ZukanStateFRii
	cmpwi    r3, 3
	bne      lbl_80223AFC
	lwz      r4, 8(r1)
	mr       r3, r31
	bl       getPelletConfig__Q24Game16PelletConfigListFi
	b        lbl_80223B08

lbl_80223AFC:
	lwz      r4, 8(r1)
	mr       r3, r30
	bl       getPelletConfig__Q24Game16PelletConfigListFi

lbl_80223B08:
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
 * Address:	80223B20
 * Size:	000080
 */
PelletList::cKind SingleGame::ZukanState::convertPelletID(int&, int)
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
	li       r3, 3
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	li       r3, 4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	li       r3, 3
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r31, r3
	li       r3, 4
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	cmpw     r30, r31
	bge      lbl_80223B78
	stw      r30, 0(r29)
	li       r3, 3
	b        lbl_80223B84

lbl_80223B78:
	subf     r0, r31, r30
	li       r3, 4
	stw      r0, 0(r29)

lbl_80223B84:
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
 * Address:	80223BA0
 * Size:	000274
 */
void SingleGame::ZukanState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r5
	stw      r30, 0x58(r1)
	mr       r30, r4
	stw      r29, 0x54(r1)
	mr       r29, r3
	lbz      r0, 0x88(r3)
	cmplwi   r0, 0
	beq      lbl_80223D64
	lwz      r3, 0x98(r29)
	bl       update__6CameraFv
	mr       r3, r31
	bl       setupJ2DOrthoGraphDefault__8GraphicsFv
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r7, 0x100(r29)
	li       r10, -1
	lfs      f1, lbl_8051A128@sda21(r2)
	addi     r3, r1, 0x3c
	stw      r10, 8(r1)
	addi     r4, r1, 0x34
	lbz      r11, 0x73(r7)
	fmr      f2, f1
	lbz      r9, 0x72(r7)
	addi     r5, r1, 0x2c
	lbz      r8, 0x71(r7)
	addi     r6, r1, 0x24
	lbz      r0, 0x70(r7)
	stb      r8, 9(r1)
	stb      r0, 8(r1)
	stb      r9, 0xa(r1)
	stb      r11, 0xb(r1)
	lwz      r9, 8(r1)
	stw      r10, 0xc(r1)
	stw      r9, 0x24(r1)
	lwz      r7, 0x100(r29)
	stw      r10, 0x10(r1)
	lbz      r12, 0x73(r7)
	lbz      r11, 0x72(r7)
	lbz      r8, 0x71(r7)
	lbz      r0, 0x70(r7)
	stb      r8, 0xd(r1)
	stb      r0, 0xc(r1)
	stb      r11, 0xe(r1)
	stb      r12, 0xf(r1)
	lwz      r8, 0xc(r1)
	stw      r10, 0x14(r1)
	stw      r8, 0x2c(r1)
	lwz      r7, 0x100(r29)
	stw      r9, 0x20(r1)
	lbz      r11, 0x6f(r7)
	lbz      r10, 0x6e(r7)
	lbz      r9, 0x6d(r7)
	lbz      r0, 0x6c(r7)
	stb      r9, 0x11(r1)
	stb      r0, 0x10(r1)
	stb      r10, 0x12(r1)
	stb      r11, 0x13(r1)
	lwz      r0, 0x10(r1)
	stw      r8, 0x28(r1)
	stw      r0, 0x34(r1)
	lwz      r7, 0x100(r29)
	stw      r0, 0x30(r1)
	lbz      r10, 0x6f(r7)
	lbz      r9, 0x6e(r7)
	lbz      r8, 0x6d(r7)
	lbz      r0, 0x6c(r7)
	stb      r8, 0x15(r1)
	stb      r0, 0x14(r1)
	stb      r9, 0x16(r1)
	stb      r10, 0x17(r1)
	lwz      r0, 0x14(r1)
	stw      r0, 0x3c(r1)
	lfs      f5, 0xbc(r29)
	lfs      f3, 0xb4(r29)
	lfs      f4, 0xc0(r29)
	lfs      f0, 0xb8(r29)
	fsubs    f3, f5, f3
	stw      r0, 0x38(r1)
	fsubs    f4, f4, f0
	bl
J2DFillBox__FffffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	mr       r3, r30
	mr       r4, r31
	bl       draw3D__Q24Game15BaseGameSectionFR8Graphics
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl
drawLightEffect__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionR8Graphics
	lwz      r3, 0xcc(r29)
	li       r4, 0
	li       r5, 0
	li       r7, 0
	lwz      r6, 0x20(r3)
	li       r8, 0
	lbz      r6, 0(r6)
	bl       capture__10JUTTextureFii9_GXTexFmtbUc
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl
drawGradationEffect__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionR8Graphics
	lwz      r3, 0xcc(r29)
	li       r4, 0
	li       r5, 0
	li       r6, 4
	li       r7, 0
	li       r8, 0
	bl       capture__10JUTTextureFii9_GXTexFmtbUc

lbl_80223D64:
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r0, 0xff
	stb      r3, 0x18(r1)
	stb      r3, 0x19(r1)
	stb      r3, 0x1a(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x1c(r1)
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f1, lbl_8051A128@sda21(r2)
	addi     r3, r1, 0x1c
	stw      r4, 0x44(r1)
	lfd      f4, lbl_8051A1E8@sda21(r2)
	fmr      f2, f1
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	stw      r29, 0x4c(r1)
	fsubs    f3, f0, f4
	stw      r0, 0x48(r1)
	lfd      f0, 0x48(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       drawInit__6J3DSysFv
	mr       r3, r30
	mr       r4, r31
	bl       draw2D__Q24Game15BaseGameSectionFR8Graphics
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80223E14
 * Size:	000578
 */
void SingleGame::ZukanState::drawGradationEffect(Game::SingleGameSection*, Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x390(r1)
	  mflr      r0
	  stw       r0, 0x394(r1)
	  stfd      f31, 0x380(r1)
	  psq_st    f31,0x388(r1),0,0
	  stfd      f30, 0x370(r1)
	  psq_st    f30,0x378(r1),0,0
	  stmw      r18, 0x338(r1)
	  mr        r28, r3
	  lwz       r3, 0x98(r3)
	  lfs       f0, -0x41A8(r2)
	  mr        r29, r5
	  lfs       f1, 0x294(r3)
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  fmr       f1, f0

	.loc_0x48:
	  lfs       f0, -0x4244(r2)
	  fmr       f31, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C
	  fmr       f31, f0

	.loc_0x5C:
	  lwz       r31, 0xB0(r28)
	  mr        r3, r31
	  bl        -0x1F0A84
	  bl        -0x13C51C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0818
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0834
	  lfs       f0, -0x4184(r2)
	  li        r30, 0
	  fneg      f30, f0

	.loc_0xB0:
	  mr        r4, r31
	  addi      r3, r1, 0x1C8
	  bl        -0x1E99BC
	  li        r4, 0xFF
	  li        r0, 0x7F
	  stb       r4, 0x58(r1)
	  li        r3, 0
	  stb       r4, 0x59(r1)
	  stb       r4, 0x5A(r1)
	  stb       r0, 0x5B(r1)
	  lwz       r24, 0x58(r1)
	  stw       r24, 0x54(r1)
	  stw       r24, 0x50(r1)
	  lbz       r6, 0x54(r1)
	  stw       r24, 0x4C(r1)
	  lbz       r10, 0x50(r1)
	  stw       r24, 0x48(r1)
	  lbz       r19, 0x4C(r1)
	  lbz       r23, 0x48(r1)
	  lbz       r22, 0x49(r1)
	  lbz       r21, 0x4A(r1)
	  lbz       r20, 0x4B(r1)
	  lbz       r18, 0x4D(r1)
	  lbz       r12, 0x4E(r1)
	  lbz       r11, 0x4F(r1)
	  lbz       r9, 0x51(r1)
	  lbz       r8, 0x52(r1)
	  lbz       r7, 0x53(r1)
	  lbz       r5, 0x55(r1)
	  lbz       r4, 0x56(r1)
	  lbz       r0, 0x57(r1)
	  stw       r24, 0x14(r1)
	  stb       r23, 0x318(r1)
	  stb       r22, 0x319(r1)
	  stb       r21, 0x31A(r1)
	  stb       r20, 0x31B(r1)
	  stb       r19, 0x31C(r1)
	  stb       r18, 0x31D(r1)
	  stb       r12, 0x31E(r1)
	  stb       r11, 0x31F(r1)
	  stb       r10, 0x320(r1)
	  stb       r9, 0x321(r1)
	  stb       r8, 0x322(r1)
	  stb       r7, 0x323(r1)
	  stb       r6, 0x324(r1)
	  stb       r5, 0x325(r1)
	  stb       r4, 0x326(r1)
	  stb       r0, 0x327(r1)
	  bl        -0x13AE2C
	  lfs       f1, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  lfs       f5, 0xBC(r28)
	  li        r4, 0
	  lfs       f3, 0xB4(r28)
	  fmr       f2, f1
	  lfs       f4, 0xC0(r28)
	  li        r5, 0
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  li        r6, 0
	  fsubs     f4, f4, f0
	  bl        -0x1E8404
	  lbz       r4, 0x5B(r1)
	  fmr       f1, f30
	  lfs       f2, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  li        r6, 0
	  lwz       r27, 0x58(r1)
	  stw       r27, 0x44(r1)
	  stw       r27, 0x40(r1)
	  lbz       r9, 0x44(r1)
	  stw       r27, 0x3C(r1)
	  lbz       r18, 0x40(r1)
	  stw       r27, 0x38(r1)
	  lbz       r22, 0x3C(r1)
	  lbz       r26, 0x38(r1)
	  lbz       r25, 0x39(r1)
	  lbz       r24, 0x3A(r1)
	  lbz       r23, 0x3B(r1)
	  lbz       r21, 0x3D(r1)
	  lbz       r20, 0x3E(r1)
	  lbz       r19, 0x3F(r1)
	  lbz       r12, 0x41(r1)
	  lbz       r11, 0x42(r1)
	  lbz       r10, 0x43(r1)
	  lbz       r8, 0x45(r1)
	  lbz       r7, 0x46(r1)
	  lbz       r0, 0x47(r1)
	  stb       r26, 0x318(r1)
	  stb       r25, 0x319(r1)
	  stb       r24, 0x31A(r1)
	  stb       r23, 0x31B(r1)
	  stb       r22, 0x31C(r1)
	  stb       r21, 0x31D(r1)
	  stb       r20, 0x31E(r1)
	  stb       r19, 0x31F(r1)
	  stb       r18, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r27, 0x10(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E84DC
	  lbz       r4, 0x5B(r1)
	  fmr       f2, f30
	  lfs       f1, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  li        r6, 0
	  lwz       r27, 0x58(r1)
	  stw       r27, 0x34(r1)
	  stw       r27, 0x30(r1)
	  lbz       r9, 0x34(r1)
	  stw       r27, 0x2C(r1)
	  lbz       r18, 0x30(r1)
	  stw       r27, 0x28(r1)
	  lbz       r22, 0x2C(r1)
	  lbz       r26, 0x28(r1)
	  lbz       r25, 0x29(r1)
	  lbz       r24, 0x2A(r1)
	  lbz       r23, 0x2B(r1)
	  lbz       r21, 0x2D(r1)
	  lbz       r20, 0x2E(r1)
	  lbz       r19, 0x2F(r1)
	  lbz       r12, 0x31(r1)
	  lbz       r11, 0x32(r1)
	  lbz       r10, 0x33(r1)
	  lbz       r8, 0x35(r1)
	  lbz       r7, 0x36(r1)
	  lbz       r0, 0x37(r1)
	  stb       r26, 0x318(r1)
	  stb       r25, 0x319(r1)
	  stb       r24, 0x31A(r1)
	  stb       r23, 0x31B(r1)
	  stb       r22, 0x31C(r1)
	  stb       r21, 0x31D(r1)
	  stb       r20, 0x31E(r1)
	  stb       r19, 0x31F(r1)
	  stb       r18, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r27, 0xC(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E85B4
	  lbz       r4, 0x5B(r1)
	  fmr       f1, f30
	  fmr       f2, f30
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  lwz       r18, 0x58(r1)
	  li        r6, 0
	  stw       r18, 0x24(r1)
	  stw       r18, 0x20(r1)
	  lbz       r9, 0x24(r1)
	  stw       r18, 0x1C(r1)
	  lbz       r27, 0x20(r1)
	  stw       r18, 0x18(r1)
	  lbz       r23, 0x1C(r1)
	  lbz       r19, 0x18(r1)
	  lbz       r20, 0x19(r1)
	  lbz       r21, 0x1A(r1)
	  lbz       r22, 0x1B(r1)
	  lbz       r24, 0x1D(r1)
	  lbz       r25, 0x1E(r1)
	  lbz       r26, 0x1F(r1)
	  lbz       r12, 0x21(r1)
	  lbz       r11, 0x22(r1)
	  lbz       r10, 0x23(r1)
	  lbz       r8, 0x25(r1)
	  lbz       r7, 0x26(r1)
	  lbz       r0, 0x27(r1)
	  stb       r19, 0x318(r1)
	  stb       r20, 0x319(r1)
	  stb       r21, 0x31A(r1)
	  stb       r22, 0x31B(r1)
	  stb       r23, 0x31C(r1)
	  stb       r24, 0x31D(r1)
	  stb       r25, 0x31E(r1)
	  stb       r26, 0x31F(r1)
	  stb       r27, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r18, 0x8(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E868C
	  bl        -0x13C8E4
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0BE0
	  addi      r3, r1, 0x1C8
	  li        r4, -0x1
	  bl        -0x1E938C
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x4
	  blt+      .loc_0xB0
	  mr        r3, r29
	  bl        0x2031E8
	  addi      r3, r29, 0xBC
	  lwz       r12, 0xBC(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xCC(r28)
	  addi      r3, r1, 0x60
	  bl        -0x1E9D90
	  lwz       r12, 0x60(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x60
	  lbz       r5, 0x170(r1)
	  lwz       r12, 0xD4(r12)
	  lfs       f1, -0x4244(r2)
	  mtctr     r12
	  bctrl
	  lfs       f3, -0x4244(r2)
	  fmr       f2, f31
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  fsubs     f30, f3, f31
	  lwz       r12, 0x108(r12)
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f1, f30
	  fmr       f6, f3
	  fmr       f7, f3
	  fmr       f8, f3
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x60(r1)
	  fmr       f1, f30
	  lfs       f3, -0x4244(r2)
	  fmr       f2, f31
	  lwz       r12, 0x10C(r12)
	  addi      r3, r1, 0x60
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f6, f3
	  fmr       f7, f3
	  fmr       f8, f3
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lfs       f1, -0x4238(r2)
	  li        r4, 0
	  lwz       r12, 0xE8(r12)
	  li        r5, 0
	  fmr       f2, f1
	  li        r6, 0
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x60
	  li        r4, -0x1
	  bl        -0x1E9484
	  psq_l     f31,0x388(r1),0,0
	  lfd       f31, 0x380(r1)
	  psq_l     f30,0x378(r1),0,0
	  lfd       f30, 0x370(r1)
	  lmw       r18, 0x338(r1)
	  lwz       r0, 0x394(r1)
	  mtlr      r0
	  addi      r1, r1, 0x390
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022438C
 * Size:	0007C0
 */
void SingleGame::ZukanState::drawLightEffect(Game::SingleGameSection*, Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stfd      f25, 0x80(r1)
	  psq_st    f25,0x88(r1),0,0
	  stfd      f24, 0x70(r1)
	  psq_st    f24,0x78(r1),0,0
	  stfd      f23, 0x60(r1)
	  psq_st    f23,0x68(r1),0,0
	  stfd      f22, 0x50(r1)
	  psq_st    f22,0x58(r1),0,0
	  stmw      r25, 0x34(r1)
	  mr        r25, r3
	  mr        r26, r5
	  bl        -0x13CA94
	  lwz       r3, 0xB0(r25)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0D90
	  mr        r3, r26
	  bl        0x203050
	  addi      r3, r26, 0xBC
	  lwz       r12, 0xBC(r26)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r25)
	  lfs       f0, -0x4238(r2)
	  lfs       f2, 0x184(r3)
	  lfs       f1, 0x178(r3)
	  lfs       f4, 0x188(r3)
	  fsubs     f5, f2, f1
	  lfs       f3, 0x17C(r3)
	  lfs       f2, 0x180(r3)
	  lfs       f1, 0x174(r3)
	  fsubs     f3, f4, f3
	  fmuls     f4, f5, f5
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f1, f1, f1, f4
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF8
	  ble-      .loc_0xFC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xFC

	.loc_0xF8:
	  fmr       f1, f0

	.loc_0xFC:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  lfs       f0, -0x4244(r2)
	  fdivs     f0, f0, f1
	  fmuls     f5, f5, f0

	.loc_0x114:
	  lwz       r0, 0x9C(r25)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x158
	  lis       r4, 0x8050
	  lwz       r3, 0x100(r25)
	  addi      r4, r4, 0x71A0
	  lfs       f0, -0x4224(r2)
	  lfs       f2, 0x388(r4)
	  lfs       f1, 0x1C0(r4)
	  fadds     f5, f5, f2
	  lbz       r30, 0x74(r3)
	  lbz       r29, 0x75(r3)
	  lbz       r28, 0x76(r3)
	  fdivs     f5, f5, f1
	  lbz       r27, 0x77(r3)
	  fadds     f5, f5, f0
	  b         .loc_0x184

	.loc_0x158:
	  lis       r4, 0x8050
	  lwz       r3, 0x100(r25)
	  addi      r4, r4, 0x71A0
	  lfs       f1, 0x2A8(r4)
	  lfs       f0, 0x1C0(r4)
	  fadds     f5, f5, f1
	  lbz       r30, 0x74(r3)
	  lbz       r29, 0x75(r3)
	  lbz       r28, 0x76(r3)
	  fdivs     f5, f5, f0
	  lbz       r27, 0x77(r3)

	.loc_0x184:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x198
	  fmr       f5, f0
	  b         .loc_0x1A8

	.loc_0x198:
	  lfs       f0, -0x4244(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x1A8
	  fmr       f5, f0

	.loc_0x1A8:
	  lfs       f2, 0x108(r25)
	  lwz       r3, 0x104(r25)
	  fsubs     f1, f5, f2
	  lfs       f0, -0x4238(r2)
	  lfs       f3, 0x1C(r3)
	  fmadds    f1, f3, f1, f2
	  stfs      f1, 0x108(r25)
	  lfs       f1, 0x108(r25)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x75C
	  lfs       f3, 0xBC(r25)
	  li        r4, 0
	  lfs       f2, 0xB4(r25)
	  lfs       f1, 0xC0(r25)
	  lfs       f0, 0xB8(r25)
	  fsubs     f27, f3, f2
	  lwz       r3, 0xB0(r25)
	  fsubs     f26, f1, f0
	  bl        -0x1F0F4C
	  li        r3, 0x1
	  bl        -0x13D720
	  li        r3, 0x1
	  bl        -0x13B9D4
	  li        r3, 0
	  li        r4, 0xF
	  li        r5, 0x2
	  li        r6, 0x8
	  li        r7, 0xF
	  bl        -0x13C09C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x3
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x13C030
	  li        r3, 0
	  li        r4, 0x7
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0x7
	  bl        -0x13C08C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x13BFFC
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        -0x13BBEC
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x13D788
	  bl        -0x13FF5C
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x1403B4
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x1403C0
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        -0x1403CC
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x13FF60
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x13FF78
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x13FF90
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x1
	  li        r6, 0xF
	  bl        -0x13B5D4
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x13B538
	  li        r3, 0
	  bl        -0x13B0AC
	  li        r3, 0x1
	  bl        -0x13F730
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0xC
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        -0x13F9CC
	  lfd       f28, -0x41D8(r2)
	  li        r26, 0
	  lfs       f29, -0x4170(r2)
	  lis       r31, 0x4330
	  lfs       f30, -0x4244(r2)
	  lfs       f31, -0x4238(r2)

	.loc_0x378:
	  xoris     r3, r26, 0x8000
	  addi      r0, r26, 0x1
	  stw       r3, 0x14(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f2, 0x108(r25)
	  stw       r31, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f1, f0, f28
	  stw       r31, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fmuls     f1, f1, f29
	  fsubs     f0, f0, f28
	  fsubs     f1, f2, f1
	  fmuls     f0, f0, f29
	  fdivs     f2, f1, f0
	  fcmpo     cr0, f2, f30
	  ble-      .loc_0x3C4
	  fmr       f2, f30

	.loc_0x3C4:
	  fcmpo     cr0, f2, f31
	  ble-      .loc_0x750
	  rlwinm    r3,r27,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f1, -0x4178(r2)
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f2, f0
	  fcmpo     cr0, f1, f31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x404
	  lfs       f0, -0x4218(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x40C

	.loc_0x404:
	  lfs       f0, -0x4218(r2)
	  fsubs     f0, f1, f0

	.loc_0x40C:
	  fctiwz    f0, f0
	  stb       r30, 0x8(r1)
	  addi      r4, r1, 0xC
	  li        r3, 0x1
	  stb       r29, 0x9(r1)
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r28, 0xA(r1)
	  rlwinm    r27,r0,0,24,31
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x13C168
	  addi      r3, r26, 0x1
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x41D8(r2)
	  li        r3, 0x98
	  stw       r4, 0x24(r1)
	  li        r4, 0
	  lfs       f2, -0x416C(r2)
	  li        r5, 0x4
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  fmuls     f22, f2, f0
	  fneg      f24, f22
	  bl        -0x13EE7C
	  lfs       f3, -0x4238(r2)
	  lis       r6, 0xCC01
	  lfs       f1, -0x4244(r2)
	  li        r0, 0xFF
	  stfs      f3, -0x8000(r6)
	  fadds     f2, f27, f3
	  fadds     f25, f1, f22
	  li        r3, 0x98
	  stfs      f3, -0x8000(r6)
	  fadds     f0, f26, f3
	  fadds     f1, f1, f24
	  stfs      f3, -0x8000(r6)
	  li        r4, 0
	  li        r5, 0x4
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  bl        -0x13EF3C
	  lfs       f2, -0x4238(r2)
	  lis       r6, 0xCC01
	  lfs       f0, -0x4244(r2)
	  li        r0, 0xFF
	  stfs      f2, -0x8000(r6)
	  fadds     f1, f27, f2
	  fadds     f23, f0, f24
	  li        r3, 0x98
	  stfs      f2, -0x8000(r6)
	  fadds     f0, f26, f2
	  li        r4, 0
	  stfs      f2, -0x8000(r6)
	  li        r5, 0x4
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  bl        -0x13EFF8
	  lfs       f2, -0x4238(r2)
	  lis       r6, 0xCC01
	  li        r0, 0xFF
	  li        r3, 0x98
	  stfs      f2, -0x8000(r6)
	  fadds     f1, f27, f2
	  fadds     f0, f26, f2
	  li        r4, 0
	  stfs      f2, -0x8000(r6)
	  li        r5, 0x4
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  bl        -0x13F0AC
	  lfs       f2, -0x4238(r2)
	  lis       r3, 0xCC01
	  li        r0, 0xFF
	  stfs      f2, -0x8000(r3)
	  fadds     f1, f27, f2
	  fadds     f0, f26, f2
	  stfs      f2, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f24, -0x8000(r3)
	  stfs      f22, -0x8000(r3)
	  stfs      f1, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f23, -0x8000(r3)
	  stfs      f22, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stfs      f0, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f24, -0x8000(r3)
	  stfs      f25, -0x8000(r3)
	  stfs      f1, -0x8000(r3)
	  stfs      f0, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f23, -0x8000(r3)
	  stfs      f25, -0x8000(r3)

	.loc_0x750:
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0x4
	  blt+      .loc_0x378

	.loc_0x75C:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  psq_l     f25,0x88(r1),0,0
	  lfd       f25, 0x80(r1)
	  psq_l     f24,0x78(r1),0,0
	  lfd       f24, 0x70(r1)
	  psq_l     f23,0x68(r1),0,0
	  lfd       f23, 0x60(r1)
	  psq_l     f22,0x58(r1),0,0
	  lfd       f22, 0x50(r1)
	  lmw       r25, 0x34(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000404
 */
unknown SingleGame::ZukanState::debugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80224B4C
 * Size:	000994
 */
unknown SingleGame::ZukanState::dvdloadA(void)
{
	/*
	stwu     r1, -0x700(r1)
	mflr     r0
	stw      r0, 0x704(r1)
	stmw     r25, 0x6e4(r1)
	mr       r31, r3
	lis      r3, lbl_80482E60@ha
	addi     r30, r3, lbl_80482E60@l
	lwz      r25, 0xd4(r31)
	mr       r3, r25
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r25
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xd8(r31)
	lwz      r3, 0xd8(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x10c(r31)
	lis      r4, "sDirName__28@unnamed@singleGS_Zukan_cpp@"@ha
	addi     r4, r4, "sDirName__28@unnamed@singleGS_Zukan_cpp@"@l
	addi     r5, r2, lbl_8051A1F8@sda21
	slwi     r0, r0, 2
	addi     r3, r1, 0x160
	lwzx     r6, r4, r0
	addi     r4, r30, 0x240
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x160
	li       r4, 1
	li       r5, 0
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r29, r3, r3
	bne      lbl_80224BE4
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0x999
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80224BE4:
	lis      r3, 0x00010280@ha
	addi     r3, r3, 0x00010280@l
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224C00
	bl       __ct__Q34Game15IllustratedBook5ParmsFv
	mr       r0, r3

lbl_80224C00:
	stw      r0, 0x100(r31)
	mr       r4, r29
	lwz      r3, 0x100(r31)
	bl       loadFile__Q34Game15IllustratedBook5ParmsFP10JKRArchive
	lwz      r3, 0x94(r31)
	lwz      r4, 0x100(r31)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	beq      lbl_80224C3C
	addi     r3, r30, 0x264
	addi     r5, r30, 0x90
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80224C3C:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_80224CB0
	li       r3, 0x30
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_80224CAC
	mr       r25, r5
	bl       initiate__10JSUPtrListFv
	lis      r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
	addic.   r4, r25, 0xc
	addi     r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
	stw      r0, 0xc(r25)
	beq      lbl_80224C78
	addi     r4, r4, -12

lbl_80224C78:
	stw      r4,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) addi     r3,
r25, 0x10 bl       __ct__11JKRDisposerFv lis      r3, __vt__Q23PSM6ObjMgr@ha li
r0, 0 addi     r3, r3, __vt__Q23PSM6ObjMgr@l mr       r5, r25 stw      r3,
0x28(r25) addi     r4, r3, 8 addi     r3, r3, 0x14 stw      r4, 0xc(r25) stw r3,
0x10(r25) stw      r0, 0x2c(r25)

lbl_80224CAC:
	stw      r5,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)

lbl_80224CB0:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_80224CD0
	addi     r3, r30, 0x264
	addi     r5, r30, 0x90
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80224CD0:
	bl       getRenderModeObj__6SystemFv
	lhz      r25, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lis      r0, 0x4330
	lhz      r4, 4(r3)
	stw      r25, 0x69c(r1)
	li       r3, 0x40
	lfs      f6, lbl_8051A128@sda21(r2)
	stw      r0, 0x698(r1)
	lfd      f4, lbl_8051A1E8@sda21(r2)
	lfd      f0, 0x698(r1)
	stw      r4, 0x684(r1)
	fsubs    f0, f0, f4
	lfs      f1, lbl_8051A19C@sda21(r2)
	stw      r0, 0x680(r1)
	lfs      f5, lbl_8051A1A8@sda21(r2)
	lfd      f2, 0x680(r1)
	fmuls    f0, f1, f0
	lfs      f3, lbl_8051A1F0@sda21(r2)
	fsubs    f4, f2, f4
	lfs      f1, lbl_8051A148@sda21(r2)
	fmuls    f0, f5, f0
	stfs     f6, 0xb4(r31)
	lfd      f2, lbl_8051A188@sda21(r2)
	fmuls    f4, f5, f4
	fmadds   f0, f0, f3, f1
	stw      r0, 0x690(r1)
	fmadds   f1, f4, f3, f1
	stw      r0, 0x6a8(r1)
	fctiwz   f0, f0
	stfs     f6, 0xb8(r31)
	fctiwz   f1, f1
	stfd     f0, 0x6a0(r1)
	stfd     f1, 0x688(r1)
	lwz      r0, 0x6a4(r1)
	lwz      r4, 0x68c(r1)
	slwi     r0, r0, 2
	slwi     r4, r4, 2
	xoris    r4, r4, 0x8000
	xoris    r0, r0, 0x8000
	stw      r4, 0x694(r1)
	stw      r0, 0x6ac(r1)
	lfd      f1, 0x690(r1)
	lfd      f0, 0x6a8(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f2
	stfs     f1, 0xbc(r31)
	stfs     f0, 0xc0(r31)
	stfs     f6, 0xc4(r31)
	stfs     f6, 0xc8(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224DE0
	lfs      f3, 0xbc(r31)
	li       r6, 4
	lfs      f2, 0xb4(r31)
	lfs      f1, 0xc0(r31)
	lfs      f0, 0xb8(r31)
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	fctiwz   f1, f2
	fctiwz   f0, f0
	stfd     f1, 0x6b0(r1)
	stfd     f0, 0x6b8(r1)
	lwz      r4, 0x6b4(r1)
	lwz      r5, 0x6bc(r1)
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r0, r3

lbl_80224DE0:
	stw      r0, 0xcc(r31)
	li       r0, 0
	li       r3, 0x40
	lwz      r4, 0xcc(r31)
	stb      r0, 0x32(r4)
	lwz      r4, 0xcc(r31)
	stb      r0, 0x33(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224E5C
	lfs      f3, 0xbc(r31)
	li       r6, 4
	lfs      f2, 0xb4(r31)
	lfs      f1, 0xc0(r31)
	lfs      f0, 0xb8(r31)
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	fctiwz   f1, f2
	fctiwz   f0, f0
	stfd     f1, 0x6c0(r1)
	stfd     f0, 0x6c8(r1)
	lwz      r4, 0x6c4(r1)
	lwz      r5, 0x6cc(r1)
	srwi     r0, r4, 0x1f
	add      r4, r0, r4
	srwi     r0, r5, 0x1f
	srawi    r4, r4, 1
	add      r0, r0, r5
	srawi    r5, r0, 1
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r0, r3

lbl_80224E5C:
	stw      r0, 0xb0(r31)
	li       r0, 0
	lwz      r3, 0xb0(r31)
	stb      r0, 0x32(r3)
	lwz      r3, 0xb0(r31)
	stb      r0, 0x33(r3)
	lwz      r3, 0x94(r31)
	lwz      r4, 0xb0(r31)
	bl       useSpecificFBTexture__Q24Game15BaseGameSectionFP10JUTTexture
	lfs      f0, 0xc4(r31)
	li       r3, 0x324
	lfs      f1, 0xc8(r31)
	fctiwz   f0, f0
	lwz      r4, 0x94(r31)
	fctiwz   f1, f1
	stfd     f0, 0x6d8(r1)
	stfd     f1, 0x6d0(r1)
	lwz      r0, 0x6dc(r1)
	lwz      r5, 0x6d4(r1)
	stw      r0, 0x15c(r4)
	stw      r5, 0x160(r4)
	lwz      r4, sys@sda21(r13)
	lwz      r25, 0x24(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224ED0
	lwz      r4, 0x90(r31)
	bl       __ct__Q34Game15IllustratedBook6CameraFP10Controller
	mr       r0, r3

lbl_80224ED0:
	stw      r0, 0x98(r31)
	lwz      r3, 0x104(r31)
	lwz      r4, 0x98(r31)
	bl       add__5CNodeFP5CNode
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224EF8
	bl       __ct__Q24Game9CameraMgrFv
	mr       r0, r3

lbl_80224EF8:
	stw      r0, cameraMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9CameraMgrFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	lwz      r4, 0x98(r31)
	bl       setZukanCamera__Q24Game9CameraMgrFP12LookAtCamera
	lwz      r3, 0x94(r31)
	lwz      r4, cameraMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224F38
	mr       r4, r25
	bl       __ct__17HorizonalSplitterFP8Graphics
	mr       r0, r3

lbl_80224F38:
	mr       r3, r0
	lfs      f1, lbl_8051A11C@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r25
	li       r4, 0
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	mr       r3, r25
	mr       r26, r0
	li       r4, 1
	bl       getViewport__8GraphicsFi
	lwz      r0, 0x98(r31)
	mr       r27, r3
	mr       r3, r26
	stw      r0, 0x44(r26)
	bl       updateCameraAspect__8ViewportFv
	lwz      r0, 0x98(r31)
	mr       r3, r27
	stw      r0, 0x44(r27)
	bl       updateCameraAspect__8ViewportFv
	lfs      f1, 0xc4(r31)
	mr       r3, r26
	lfs      f0, lbl_8051A11C@sda21(r2)
	addi     r4, r31, 0xb4
	stfs     f1, 0x48(r26)
	lfs      f1, 0xc8(r31)
	stfs     f1, 0x4c(r26)
	stfs     f0, 0x50(r26)
	stfs     f0, 0x54(r26)
	bl       "setRect__8ViewportFR7Rect<f>"
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r25
	bl       setViewport__11ParticleMgrFR8Graphics
	lwz      r3, particleMgr@sda21(r13)
	bl       start__11ParticleMgrFv
	li       r3, 0x50
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80224FEC
	li       r4, 2
	bl       __ct__Q24Game9ShadowMgrFi
	mr       r0, r3

lbl_80224FEC:
	stw      r0, shadowMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r3, sys@sda21(r13)
	lwz      r25, 0x24(r3)
	mr       r3, r25
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	mr       r3, r25
	mr       r25, r0
	li       r4, 1
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r26, r0
	mr       r4, r25
	li       r5, 0
	bl       setViewport__Q24Game9ShadowMgrFP8Viewporti
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r26
	li       r5, 1
	bl       setViewport__Q24Game9ShadowMgrFP8Viewporti
	lwz      r3, 0x94(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x108(r12)
	mtctr    r12
	bctrl
	lwz      r0, rumbleMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_802250AC
	li       r3, 0x34
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80225078
	bl       __ct__Q24Game9RumbleMgrFv
	mr       r0, r3

lbl_80225078:
	stw      r0, rumbleMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9RumbleMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	bl       init__Q24Game9RumbleMgrFv
	lwz      r5, 0x98(r31)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	lwz      r4, 0x90(r31)
	addi     r5, r5, 0x174
	bl       "setZukanRumble__Q24Game9RumbleMgrFP10ControllerP10Vector3<f>"
	lwz      r3, 0x94(r31)
	lwz      r4, rumbleMgr__4Game@sda21(r13)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode

lbl_802250AC:
	addi     r3, r1, 0x28
	bl       __ct__Q26PSGame9SceneInfoFv
	li       r0, 1
	stb      r0, 0x2f(r1)
	lwz      r3, 0x98(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	lwz      r3, 0x98(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x38(r1)
	lwz      r3, 0x98(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051A1FC@sda21(r2)
	li       r4, 0
	lfs      f0, lbl_8051A200@sda21(r2)
	li       r5, 1
	stw      r3, 0x40(r1)
	addi     r3, r1, 0x28
	stfs     f1, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	stfs     f0, 0x58(r1)
	stfs     f0, 0x5c(r1)
	bl
setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r3, 0xd
	stb      r3, 0x2e(r1)
	cmplwi   r0, 0
	bne      lbl_8022515C
	addi     r3, r30, 0x190
	addi     r5, r30, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022515C:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 0x28
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80225194
	addi     r3, r30, 0x190
	addi     r5, r30, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225194:
	lwz      r25, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	bne      lbl_802251B8
	addi     r3, r30, 0x19c
	addi     r5, r30, 0x90
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802251B8:
	lwz      r3, 4(r25)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_802251F0
	addi     r3, r30, 0x190
	addi     r5, r30, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802251F0:
	lwz      r25, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	bne      lbl_80225214
	addi     r3, r30, 0x19c
	addi     r5, r30, 0x90
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225214:
	lwz      r3, 4(r25)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	addi     r4, r30, 0x270
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_80225260
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225260:
	mr       r4, r25
	addi     r3, r1, 0x260
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x26c(r1)
	bne      lbl_80225288
	li       r0, 0
	stw      r0, 0x674(r1)

lbl_80225288:
	li       r3, 0x100
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802252A0
	bl       __ct__Q24Game10CourseInfoFv
	mr       r0, r3

lbl_802252A0:
	stw      r0, 0x8c(r31)
	addi     r4, r1, 0x260
	lwz      r3, 0x8c(r31)
	bl       read__Q24Game10CourseInfoFR6Stream
	lwz      r3, 0x8c(r31)
	bl       dump__Q24Game10CourseInfoFv
	lwz      r3, 0x8c(r31)
	li       r4, 0
	bl       createMapMgr__Q24Game6StagesFPQ24Game10CourseInfoPQ24Game8RouteMgr
	li       r3, 0x48
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_802252DC
	bl       __ct__Q24Game11CellPyramidFv
	mr       r5, r3

lbl_802252DC:
	lfs      f1, lbl_8051A204@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_8051A208@sda21(r2)
	addi     r4, r1, 0x18
	stw      r5, cellMgr__4Game@sda21(r13)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r0, platCellMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	addi     r4, r1, 0x18
	lfs      f1, lbl_8051A20C@sda21(r2)
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80225340
	lwz      r4, 0(r4)

lbl_80225340:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 2
	bl       "alloc__27MonoObjectMgr<Q24Game4Navi>Fi"
	li       r4, 0
	li       r6, -1
	stw      r4, 0x10(r1)
	li       r3, 0x40
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r4, 0xc(r1)
	lwz      r5, mgr__Q24Game13PelletOtakara@sda21(r13)
	stw      r4, 8(r1)
	lwz      r4, mgr__Q24Game10PelletItem@sda21(r13)
	stb      r6, 0x14(r1)
	stw      r0, 0x10(r1)
	lwz      r0, 8(r5)
	stw      r0, 8(r1)
	lwz      r0, 8(r4)
	stw      r0, 0xc(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802253A4
	bl       __ct__Q34Game12ResultTexMgr3MgrFv
	mr       r0, r3

lbl_802253A4:
	stw      r0, 0xe8(r31)
	addi     r4, r1, 8
	lwz      r3, 0xe8(r31)
	bl       create__Q34Game12ResultTexMgr3MgrFRQ34Game12ResultTexMgr3Arg
	li       r3, 0x40
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_802253E0
	mr       r25, r28
	bl       __ct__Q34Game11IconTexture3MgrFv
	lis      r4, __vt__Q34Game15IllustratedBook11EnemyTexMgr@ha
	addi     r3, r25, 0x20
	addi     r0, r4, __vt__Q34Game15IllustratedBook11EnemyTexMgr@l
	stw      r0, 0(r25)
	bl       __ct__Q34Game11IconTexture6LoaderFv

lbl_802253E0:
	stw      r28, 0xec(r31)
	li       r4, 0x66
	lwz      r25, 0xec(r31)
	mr       r3, r25
	bl       create__Q34Game11IconTexture3MgrFi
	addi     r3, r25, 0x20
	addi     r4, r30, 0x44
	bl       loadResource__Q34Game11IconTexture6LoaderFPc
	addi     r3, r25, 0x20
	addi     r4, r30, 0x68
	bl       getResTIMG__Q34Game11IconTexture6LoaderFPc
	or.      r26, r3, r3
	bne      lbl_80225428
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0x1d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225428:
	li       r27, 0
	lis      r28, 0x0000FFFF@ha

lbl_80225430:
	mr       r3, r27
	addi     r4, r28, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii
	cmplwi   r3, 0
	beq      lbl_80225490
	mr       r5, r3
	addi     r3, r1, 0x60
	addi     r4, r30, 0x9c
	crclr    6
	bl       sprintf
	addi     r3, r25, 0x20
	addi     r4, r1, 0x60
	bl       getResTIMG__Q34Game11IconTexture6LoaderFPc
	or.      r5, r3, r3
	beq      lbl_8022547C
	mr       r3, r25
	mr       r4, r27
	bl       setTexture__Q34Game11IconTexture3MgrFiP7ResTIMG
	b        lbl_802254A0

lbl_8022547C:
	mr       r3, r25
	mr       r4, r27
	mr       r5, r26
	bl       setTexture__Q34Game11IconTexture3MgrFiP7ResTIMG
	b        lbl_802254A0

lbl_80225490:
	mr       r3, r25
	mr       r4, r27
	mr       r5, r26
	bl       setTexture__Q34Game11IconTexture3MgrFiP7ResTIMG

lbl_802254A0:
	addi     r27, r27, 1
	cmpwi    r27, 0x66
	blt      lbl_80225430
	lwz      r0, 0x98(r31)
	mr       r3, r29
	stw      r0, sCamera__Q34Game15IllustratedBook5Parms@sda21(r13)
	stw      r31, sZukanState__Q34Game15IllustratedBook5Parms@sda21(r13)
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lmw      r25, 0x6e4(r1)
	lwz      r0, 0x704(r1)
	mtlr     r0
	addi     r1, r1, 0x700
	blr
	*/
}

/*
 * --INFO--
 * Address:	802254E0
 * Size:	0000E4
 */
void SingleGame::ZukanState::createTeki(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80482E60@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80482E60@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80225524
	addi     r3, r31, 0x190
	addi     r5, r31, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225524:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80225544
	addi     r3, r31, 0x190
	addi     r5, r31, 0x90
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225544:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80225564
	addi     r3, r31, 0x19c
	addi     r5, r31, 0x90
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225564:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80225588
	addi     r3, r31, 0x19c
	addi     r5, r31, 0x1a8
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225588:
	mr       r3, r30
	bl       detachObjMgr__Q23PSM13Scene_ObjectsFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r29, 0x1c
	lwz      r5, 0x14(r29)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	li       r0, 0
	stb      r0, 0x88(r29)
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
 * Address:	802255C4
 * Size:	000040
 */
void SingleGame::ZukanState::createPellet(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r4, r31, 0x1c
	lwz      r3, sys@sda21(r13)
	lwz      r5, 0x18(r31)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	li       r0, 0
	stb      r0, 0x88(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void SingleGame::ZukanState::dvdloadB_common(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80225604
 * Size:	000CDC
 */
void SingleGame::ZukanState::dvdloadB_teki(void)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stmw     r20, 0xf0(r1)
	mr       r31, r3
	lis      r4, lbl_80482E60@ha
	lwz      r0, 0xdc(r3)
	addi     r30, r4, lbl_80482E60@l
	cmplwi   r0, 0
	beq      lbl_80225690
	lwz      r0, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80225670
	bl       clearHeapB_teki__Q34Game10SingleGame10ZukanStateFv
	b        lbl_80225690

lbl_80225670:
	lwz      r0, 0xac(r31)
	cmplwi   r0, 0
	beq      lbl_80225684
	bl       clearHeapB_pellet__Q34Game10SingleGame10ZukanStateFv
	b        lbl_80225690

lbl_80225684:
	bl       clearHeapB_common__Q34Game10SingleGame10ZukanStateFv
	lwz      r3, 0xd8(r31)
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_80225690:
	lwz      r3, 0xd8(r31)
	bl       getFreeSize__7JKRHeapFv
	stw      r3, 0xe4(r31)
	addi     r3, r2, lbl_8051A210@sda21
	crclr    6
	bl       OSReport
	lwz      r4, 0xe4(r31)
	addi     r3, r30, 0x27c
	crclr    6
	bl       OSReport
	lwz      r21, 0xd8(r31)
	mr       r3, r21
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r21
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xdc(r31)
	lwz      r3, 0xdc(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0x64
	bl       "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"
	lwz      r4, 0x94(r31)
	lwz      r3, particleMgr@sda21(r13)
	lwz      r0, 0x128(r4)
	stw      r0, 0x18(r3)
	lwz      r3, particleMgr@sda21(r13)
	bl       start__11ParticleMgrFv
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0
	bne      lbl_80225750
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r3
	addi     r3, r30, 0x28c
	crclr    6
	bl       OSReport
	lwz      r3, mgr__Q24Game12PelletNumber@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r3
	addi     r3, r30, 0x2c0
	crclr    6
	bl       OSReport

lbl_80225750:
	lwz      r0, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80225770
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0xabb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80225770:
	li       r3, 0x90
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80225788
	bl       __ct__Q24Game15GeneralEnemyMgrFv
	mr       r4, r3

lbl_80225788:
	stw      r4, generalEnemyMgr__4Game@sda21(r13)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, 0xa0(r31)
	cmpwi    r3, -1
	beq      lbl_802261F0
	cmpwi    r3, 0
	li       r0, 0
	blt      lbl_802257B8
	cmpwi    r3, 0x66
	bge      lbl_802257B8
	li       r0, 1

lbl_802257B8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_802257D4
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x90
	li       r4, 0xac1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802257D4:
	lwz      r0, 0xa0(r31)
	li       r5, 0
	lwz      r4, 0x100(r31)
	mulli    r3, r0, 0x274
	addi     r26, r3, 0x828
	add      r26, r4, r26
	lbz      r0, 0xa0(r26)
	cmplwi   r0, 0xa
	bge      lbl_80225800
	mr       r5, r0
	b        lbl_80225808

lbl_80225800:
	li       r0, 0
	stb      r0, 0xa0(r26)

lbl_80225808:
	mulli    r3, r5, 0xc0
	lwz      r0, 0x8c(r26)
	lwz      r4, 0x100(r31)
	lfs      f31, 0x64(r26)
	clrlwi   r25, r0, 0x18
	addi     r5, r3, 0x90
	add      r5, r4, r5
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	lfs      f28, 0x8c(r5)
	lfs      f29, 0x64(r5)
	lfs      f30, 0x3c(r5)
	bl       getFreeSize__7JKRHeapFv
	mr       r5, r3
	mr       r4, r25
	addi     r3, r30, 0x2d4
	crclr    6
	bl       OSReport
	lwz      r3, playData__4Game@sda21(r13)
	li       r24, 0
	lwz      r4, 0xa0(r31)
	addi     r3, r3, 0x40
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	cmplwi   r3, 0
	beq      lbl_80225878
	lwz      r0, 0(r3)
	cmpwi    r0, 0x10
	ble      lbl_80225878
	li       r24, 1

lbl_80225878:
	clrlwi.  r0, r24, 0x18
	beq      lbl_802258B4
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0x2a
	bge      lbl_80225898
	cmpwi    r0, 2
	beq      lbl_802258A0
	b        lbl_802258B4

lbl_80225898:
	cmpwi    r0, 0x2c
	bge      lbl_802258B4

lbl_802258A0:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x4d
	li       r5, 5
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_802258B4:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	mr       r5, r25
	lwz      r4, 0xa0(r31)
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	lis      r4, 0x000FA000@ha
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	addi     r5, r4, 0x000FA000@l
	li       r4, 1
	bl       allocateEnemys__Q24Game15GeneralEnemyMgrFUci
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
	lfs      f1, 0x3c(r26)
	lfs      f0, lbl_8051A128@sda21(r2)
	lfs      f27, lbl_8051A214@sda21(r2)
	fcmpu    cr0, f1, f0
	beq      lbl_802258FC
	fmr      f27, f1

lbl_802258FC:
	mulli    r3, r25, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r25
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	mulli    r4, r25, 0xc
	mr       r29, r3
	addi     r3, r4, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r25
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	mr       r27, r29
	mr       r28, r3
	li       r23, 0
	b        lbl_80225A74

lbl_80225958:
	cmpwi    r23, 0
	bne      lbl_80225974
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f0, 0(r27)
	stfs     f0, 4(r27)
	stfs     f0, 8(r27)
	b        lbl_80225A6C

lbl_80225974:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xbc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xb8(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xb8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f26, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	fmr      f3, f26
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0xc0(r1)
	lfd      f2, lbl_8051A188@sda21(r2)
	fcmpo    cr0, f26, f0
	lfd      f1, 0xc0(r1)
	lfs      f0, lbl_8051A178@sda21(r2)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fmuls    f4, f31, f0
	bge      lbl_802259E4
	fneg     f3, f26

lbl_802259E4:
	lfs      f2, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f26, f0
	fctiwz   f0, f1
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f4, f0
	bge      lbl_80225A40
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f26, f0
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80225A58

lbl_80225A40:
	fmuls    f0, f26, f2
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80225A58:
	fmuls    f1, f4, f0
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f1, 0(r27)
	stfs     f0, 4(r27)
	stfs     f3, 8(r27)

lbl_80225A6C:
	addi     r27, r27, 0xc
	addi     r23, r23, 1

lbl_80225A74:
	cmpw     r23, r25
	blt      lbl_80225958
	lfs      f31, lbl_8051A128@sda21(r2)
	addi     r27, r25, -8
	li       r23, 0

lbl_80225A88:
	cmpwi    r25, 0
	li       r4, 0
	ble      lbl_80225B58
	cmpwi    r25, 8
	ble      lbl_80225B24
	addi     r0, r27, 7
	mr       r3, r28
	srwi     r0, r0, 3
	lfs      f0, lbl_8051A128@sda21(r2)
	mtctr    r0
	cmpwi    r27, 0
	ble      lbl_80225B24

lbl_80225AB8:
	stfs     f0, 8(r3)
	addi     r4, r4, 8
	stfs     f0, 4(r3)
	stfs     f0, 0(r3)
	stfs     f0, 0x14(r3)
	stfs     f0, 0x10(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x20(r3)
	stfs     f0, 0x1c(r3)
	stfs     f0, 0x18(r3)
	stfs     f0, 0x2c(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x38(r3)
	stfs     f0, 0x34(r3)
	stfs     f0, 0x30(r3)
	stfs     f0, 0x44(r3)
	stfs     f0, 0x40(r3)
	stfs     f0, 0x3c(r3)
	stfs     f0, 0x50(r3)
	stfs     f0, 0x4c(r3)
	stfs     f0, 0x48(r3)
	stfs     f0, 0x5c(r3)
	stfs     f0, 0x58(r3)
	stfs     f0, 0x54(r3)
	addi     r3, r3, 0x60
	bdnz     lbl_80225AB8

lbl_80225B24:
	mulli    r3, r4, 0xc
	subf     r0, r4, r25
	lfs      f0, lbl_8051A128@sda21(r2)
	add      r3, r28, r3
	mtctr    r0
	cmpw     r4, r25
	bge      lbl_80225B58

lbl_80225B40:
	stfs     f0, 8(r3)
	addi     r4, r4, 1
	stfs     f0, 4(r3)
	stfs     f0, 0(r3)
	addi     r3, r3, 0xc
	bdnz     lbl_80225B40

lbl_80225B58:
	mr       r5, r29
	mr       r6, r28
	li       r7, 0
	b        lbl_80225CB0

lbl_80225B68:
	addi     r8, r7, 1
	mulli    r4, r8, 0xc
	subf     r0, r8, r25
	add      r3, r29, r4
	add      r4, r28, r4
	mtctr    r0
	cmpw     r8, r25
	bge      lbl_80225CA4

lbl_80225B88:
	lfs      f1, 4(r5)
	lfs      f0, 4(r3)
	lfs      f2, 8(r5)
	fsubs    f0, f1, f0
	lfs      f1, 8(r3)
	lfs      f3, 0(r5)
	fsubs    f1, f2, f1
	lfs      f2, 0(r3)
	fmuls    f5, f0, f0
	fsubs    f6, f3, f2
	fmuls    f7, f1, f1
	fmadds   f2, f6, f6, f5
	fadds    f8, f7, f2
	fcmpo    cr0, f8, f31
	ble      lbl_80225BDC
	ble      lbl_80225BD4
	frsqrte  f2, f8
	fmuls    f4, f2, f8
	b        lbl_80225BE0

lbl_80225BD4:
	fmr      f4, f8
	b        lbl_80225BE0

lbl_80225BDC:
	fmr      f4, f31

lbl_80225BE0:
	fcmpo    cr0, f4, f27
	bge      lbl_80225C94
	lfs      f3, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f8, f3
	ble      lbl_80225C10
	fmadds   f2, f6, f6, f5
	fadds    f5, f7, f2
	fcmpo    cr0, f5, f3
	ble      lbl_80225C14
	frsqrte  f2, f5
	fmuls    f5, f2, f5
	b        lbl_80225C14

lbl_80225C10:
	fmr      f5, f3

lbl_80225C14:
	lfs      f2, lbl_8051A128@sda21(r2)
	fcmpo    cr0, f5, f2
	ble      lbl_80225C34
	lfs      f2, lbl_8051A11C@sda21(r2)
	fdivs    f2, f2, f5
	fmuls    f6, f6, f2
	fmuls    f0, f0, f2
	fmuls    f1, f1, f2

lbl_80225C34:
	fsubs    f3, f27, f4
	lfs      f4, lbl_8051A148@sda21(r2)
	lfs      f2, 0(r6)
	fmuls    f3, f4, f3
	fmuls    f6, f6, f3
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fadds    f2, f2, f6
	stfs     f2, 0(r6)
	lfs      f2, 4(r6)
	fadds    f2, f2, f0
	stfs     f2, 4(r6)
	lfs      f2, 8(r6)
	fadds    f2, f2, f1
	stfs     f2, 8(r6)
	lfs      f2, 0(r4)
	fsubs    f2, f2, f6
	stfs     f2, 0(r4)
	lfs      f2, 4(r4)
	fsubs    f0, f2, f0
	stfs     f0, 4(r4)
	lfs      f0, 8(r4)
	fsubs    f0, f0, f1
	stfs     f0, 8(r4)

lbl_80225C94:
	addi     r3, r3, 0xc
	addi     r4, r4, 0xc
	addi     r8, r8, 1
	bdnz     lbl_80225B88

lbl_80225CA4:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 1

lbl_80225CB0:
	cmpw     r7, r25
	blt      lbl_80225B68
	mr       r22, r28
	mr       r21, r29
	li       r20, 0
	b        lbl_80225D20

lbl_80225CC8:
	lfs      f1, 0(r21)
	mr       r4, r21
	lfs      f0, 0(r22)
	fadds    f0, f1, f0
	stfs     f0, 0(r21)
	lfs      f1, 4(r21)
	lfs      f0, 4(r22)
	fadds    f0, f1, f0
	stfs     f0, 4(r21)
	lfs      f1, 8(r21)
	lfs      f0, 8(r22)
	fadds    f0, f1, f0
	stfs     f0, 8(r21)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 4(r21)
	addi     r22, r22, 0xc
	addi     r21, r21, 0xc
	addi     r20, r20, 1

lbl_80225D20:
	cmpw     r20, r25
	blt      lbl_80225CC8
	addi     r23, r23, 1
	cmpwi    r23, 5
	blt      lbl_80225A88
	mr       r21, r29
	li       r20, 0
	b        lbl_80225E2C

lbl_80225D40:
	addi     r3, r1, 0x84
	bl       __ct__Q24Game13EnemyBirthArgFv
	cmpwi    r20, 0
	bne      lbl_80225D5C
	lfs      f0, lbl_8051A128@sda21(r2)
	stfs     f0, 0x90(r1)
	b        lbl_80225D90

lbl_80225D5C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xdc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xd8(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xd8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x90(r1)

lbl_80225D90:
	lfs      f0, 0(r21)
	addi     r4, r1, 0x84
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x84(r1)
	fadds    f2, f0, f30
	lfs      f0, 4(r21)
	stfs     f0, 0x88(r1)
	fadds    f1, f0, f29
	lfs      f3, 8(r21)
	fadds    f0, f3, f28
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x84(r1)
	stfs     f1, 0x88(r1)
	stfs     f0, 0x8c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x88(r1)
	addi     r5, r1, 0x84
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0xa0(r31)
	bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	or.      r23, r3, r3
	bne      lbl_80225E10
	lwz      r6, 0xa0(r31)
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x2f4
	li       r4, 0xb3f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80225E24

lbl_80225E10:
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	cmpwi    r20, 0
	bne      lbl_80225E24
	stw      r23, 0xa4(r31)

lbl_80225E24:
	addi     r21, r21, 0xc
	addi     r20, r20, 1

lbl_80225E2C:
	cmpw     r20, r25
	blt      lbl_80225D40
	mr       r3, r29
	bl       __dl__FPv
	mr       r3, r28
	bl       __dl__FPv
	clrlwi.  r0, r24, 0x18
	beq      lbl_80225F10
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0x2a
	bge      lbl_80225E64
	cmpwi    r0, 2
	beq      lbl_80225E6C
	b        lbl_80225F10

lbl_80225E64:
	cmpwi    r0, 0x2c
	bge      lbl_80225F10

lbl_80225E6C:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x4d
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r20, r3, r3
	beq      lbl_80225F10
	addi     r3, r1, 0x50
	bl       __ct__Q24Game13EnemyBirthArgFv
	lwz      r4, 0xa4(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x24(r1)
	lfs      f0, lbl_8051A138@sda21(r2)
	lfs      f3, 0x20(r1)
	lfs      f1, 0x28(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x54(r1)
	stfs     f3, 0x50(r1)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x54(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xdc(r1)
	mr       r3, r20
	lfd      f3, lbl_8051A188@sda21(r2)
	addi     r4, r1, 0x50
	stw      r0, 0xd8(r1)
	li       r6, 5
	lfs      f1, lbl_8051A178@sda21(r2)
	li       r7, 0
	lfd      f2, 0xd8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x5c(r1)
	lwz      r5, 0xa4(r31)
	bl
createGroupByEnemy__Q34Game11ShijimiChou3MgrFRQ24Game13EnemyBirthArgPQ24Game9EnemyBaseib

lbl_80225F10:
	lwz      r3, 0x98(r31)
	lwz      r4, 0xa4(r31)
	bl       setTarget__Q34Game15IllustratedBook6CameraFPQ24Game8Creature
	lfs      f4, 0x1b8(r26)
	li       r23, 0
	lfs      f3, 0x190(r26)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x168(r26)
	lfs      f1, lbl_8051A21C@sda21(r2)
	stfs     f0, 0x1e4(r3)
	lfs      f2, lbl_8051A218@sda21(r2)
	stfs     f3, 0x1e8(r3)
	stfs     f4, 0x1ec(r3)
	lfs      f0, 0xc8(r26)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0xf0(r26)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1cc(r3)
	lfs      f3, 0x140(r26)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x118(r26)
	stfs     f0, 0x1d0(r3)
	stfs     f3, 0x1d4(r3)
	lfs      f4, 0x230(r26)
	lfs      f3, 0x208(r26)
	lfs      f0, 0x1e0(r26)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x288(r3)
	stfs     f3, 0x28c(r3)
	stfs     f4, 0x290(r3)
	lfs      f0, 0x258(r26)
	lwz      r3, 0x98(r31)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1c4(r3)
	lwz      r0, 0xa0(r31)
	cmpwi    r0, 0x22
	beq      lbl_80225FD4
	bge      lbl_80225FC8
	cmpwi    r0, 0xf
	bge      lbl_80225FD8
	cmpwi    r0, 0xc
	bge      lbl_80225FD4
	b        lbl_80225FD8

lbl_80225FC8:
	cmpwi    r0, 0x46
	beq      lbl_80225FD4
	b        lbl_80225FD8

lbl_80225FD4:
	li       r23, 0xa

lbl_80225FD8:
	cmpwi    r23, 0
	ble      lbl_8022629C
	li       r24, 0
	b        lbl_802261E4

lbl_80225FE8:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	beq      lbl_802261E0
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r5, 0x20
	stw      r0, 0x44(r1)
	addi     r6, r4, __vt__Q24Game11PikiInitArg@l
	li       r0, 0
	addi     r4, r1, 0x44
	stw      r6, 0x44(r1)
	stw      r5, 0x48(r1)
	stw      r0, 0x4c(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r25
	li       r4, 6
	bl       changeShape__Q24Game4PikiFi
	lwz      r4, 0x98(r31)
	addi     r3, r1, 0x14
	bl       getLookAtPosition__6CameraFv
	lfs      f28, 0x14(r1)
	addi     r3, r1, 8
	lfs      f29, 0x18(r1)
	lfs      f30, 0x1c(r1)
	lwz      r4, 0x98(r31)
	bl       getViewVector__11CullFrustumFv
	lfs      f0, 0xc(r1)
	lfs      f2, 0x10(r1)
	fmuls    f3, f0, f0
	lfs      f1, 8(r1)
	fmuls    f2, f2, f2
	lfs      f0, lbl_8051A128@sda21(r2)
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xdc(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xd8(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xd8(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f26, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xd4(r1)
	fmr      f3, f26
	lfs      f0, lbl_8051A128@sda21(r2)
	stw      r0, 0xd0(r1)
	lfd      f2, lbl_8051A188@sda21(r2)
	fcmpo    cr0, f26, f0
	lfd      f0, 0xd0(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051A124@sda21(r2)
	fdivs    f1, f2, f1
	fmuls    f4, f0, f1
	bge      lbl_802260FC
	fneg     f3, f26

lbl_802260FC:
	lfs      f2, lbl_8051A194@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A128@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f26, f0
	fctiwz   f0, f1
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f4, f0
	bge      lbl_80226158
	lfs      f0, lbl_8051A198@sda21(r2)
	fmuls    f0, f26, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80226170

lbl_80226158:
	fmuls    f0, f26, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80226170:
	lfs      f2, lbl_8051A128@sda21(r2)
	fmuls    f3, f4, f0
	fadds    f1, f30, f1
	lfs      f0, lbl_8051A220@sda21(r2)
	fadds    f2, f29, f2
	mr       r3, r25
	fadds    f3, f28, f3
	stfs     f1, 0x40(r1)
	fadds    f0, f2, f0
	addi     r4, r1, 0x38
	stfs     f2, 0x3c(r1)
	li       r5, 0
	stfs     f3, 0x38(r1)
	stfs     f0, 0x3c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lfd      f3, lbl_8051A188@sda21(r2)
	stw      r0, 0xe0(r1)
	lfs      f1, lbl_8051A178@sda21(r2)
	lfd      f2, 0xe0(r1)
	lfs      f0, lbl_8051A1A0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1fc(r25)

lbl_802261E0:
	addi     r24, r24, 1

lbl_802261E4:
	cmpw     r24, r23
	blt      lbl_80225FE8
	b        lbl_8022629C

lbl_802261F0:
	lwz      r21, 0x100(r31)
	addi     r4, r1, 0x2c
	lfs      f2, 0x11c(r21)
	lfs      f1, 0xf4(r21)
	lfs      f0, 0xcc(r21)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	lwz      r3, 0x98(r31)
	bl       "move__Q34Game15IllustratedBook6CameraFRC10Vector3<f>"
	lfs      f4, 0x9e0(r21)
	lfs      f3, 0x9b8(r21)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x990(r21)
	lfs      f1, lbl_8051A21C@sda21(r2)
	stfs     f0, 0x1e4(r3)
	lfs      f2, lbl_8051A218@sda21(r2)
	stfs     f3, 0x1e8(r3)
	stfs     f4, 0x1ec(r3)
	lfs      f0, 0x8f0(r21)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x918(r21)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x1cc(r3)
	lfs      f3, 0x968(r21)
	lwz      r3, 0x98(r31)
	lfs      f0, 0x940(r21)
	stfs     f0, 0x1d0(r3)
	stfs     f3, 0x1d4(r3)
	lfs      f4, 0xa58(r21)
	lfs      f3, 0xa30(r21)
	lfs      f0, 0xa08(r21)
	lwz      r3, 0x98(r31)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x288(r3)
	stfs     f3, 0x28c(r3)
	stfs     f4, 0x290(r3)
	lfs      f0, 0xa80(r21)
	lwz      r3, 0x98(r31)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1c4(r3)

lbl_8022629C:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	lmw      r20, 0xf0(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	802262E0
 * Size:	0004B0
 */
void SingleGame::ZukanState::dvdloadB_pellet(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stmw     r25, 0x54(r1)
	mr       r29, r3
	lwz      r0, 0xdc(r3)
	cmplwi   r0, 0
	beq      lbl_8022633C
	lwz      r0, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8022631C
	bl       clearHeapB_teki__Q34Game10SingleGame10ZukanStateFv
	b        lbl_8022633C

lbl_8022631C:
	lwz      r0, 0xac(r29)
	cmplwi   r0, 0
	beq      lbl_80226330
	bl       clearHeapB_pellet__Q34Game10SingleGame10ZukanStateFv
	b        lbl_8022633C

lbl_80226330:
	bl       clearHeapB_common__Q34Game10SingleGame10ZukanStateFv
	lwz      r3, 0xd8(r29)
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_8022633C:
	lwz      r3, 0xd8(r29)
	bl       getFreeSize__7JKRHeapFv
	stw      r3, 0xe4(r29)
	addi     r3, r2, lbl_8051A210@sda21
	crclr    6
	bl       OSReport
	lis      r3, lbl_804830DC@ha
	lwz      r4, 0xe4(r29)
	addi     r3, r3, lbl_804830DC@l
	crclr    6
	bl       OSReport
	lwz      r25, 0xd8(r29)
	mr       r3, r25
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r25
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xdc(r29)
	lwz      r3, 0xdc(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0x64
	bl       "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"
	lwz      r4, 0x94(r29)
	lwz      r3, particleMgr@sda21(r13)
	lwz      r0, 0x128(r4)
	stw      r0, 0x18(r3)
	lwz      r3, particleMgr@sda21(r13)
	bl       start__11ParticleMgrFv
	lwz      r0, 0xa8(r29)
	cmpwi    r0, -1
	beq      lbl_802266A0
	lwz      r3, 0x100(r29)
	mulli    r0, r0, 0x278
	li       r4, 0
	addis    r3, r3, 1
	lwz      r3, 0x278(r3)
	add      r31, r3, r0
	lbz      r0, 0xa0(r31)
	cmplwi   r0, 0xa
	bge      lbl_802263E8
	mr       r4, r0
	b        lbl_802263F0

lbl_802263E8:
	li       r0, 0
	stb      r0, 0xa0(r31)

lbl_802263F0:
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	lwz      r8, 0x100(r29)
	addi     r0, r3, __vt__Q24Game15CreatureInitArg@l
	li       r6, 0
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	stw      r0, 0x20(r1)
	li       r0, -1
	li       r5, 0xff
	mulli    r7, r4, 0xc0
	addi     r3, r3, __vt__Q24Game13PelletInitArg@l
	li       r4, 1
	stw      r3, 0x20(r1)
	li       r3, 3
	addi     r30, r7, 0x90
	stb      r6, 0x3c(r1)
	add      r30, r8, r30
	sth      r6, 0x34(r1)
	stb      r5, 0x36(r1)
	stw      r6, 0x38(r1)
	stb      r6, 0x37(r1)
	stb      r4, 0x24(r1)
	stb      r6, 0x3d(r1)
	stw      r0, 0x44(r1)
	stw      r0, 0x40(r1)
	stb      r6, 0x3e(r1)
	stb      r6, 0x3f(r1)
	lwz      r25, 0xa8(r29)
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r26, r3
	li       r3, 4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r28, r3
	li       r3, 3
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	li       r3, 4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	li       r3, 3
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r27, r3
	li       r3, 4
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	cmpw     r25, r27
	bge      lbl_802264A4
	li       r0, 3
	b        lbl_802264AC

lbl_802264A4:
	subf     r25, r27, r25
	li       r0, 4

lbl_802264AC:
	cmpwi    r0, 3
	bne      lbl_802264C8
	mr       r3, r26
	mr       r4, r25
	bl       getPelletConfig__Q24Game16PelletConfigListFi
	mr       r27, r3
	b        lbl_802264D8

lbl_802264C8:
	mr       r3, r28
	mr       r4, r25
	bl       getPelletConfig__Q24Game16PelletConfigListFi
	mr       r27, r3

lbl_802264D8:
	lwz      r25, 0xa8(r29)
	li       r3, 3
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	li       r3, 4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	li       r3, 3
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r28, r3
	li       r3, 4
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	cmpw     r25, r28
	bge      lbl_80226514
	mr       r7, r25
	li       r0, 3
	b        lbl_8022651C

lbl_80226514:
	subf     r7, r28, r25
	li       r0, 4

lbl_8022651C:
	stb      r0, 0x36(r1)
	li       r5, 0
	li       r0, 3
	lwz      r3, pelletMgr__4Game@sda21(r13)
	lwz      r6, 0x40(r27)
	addi     r4, r1, 0x20
	stw      r6, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r7, 0x30(r1)
	sth      r0, 0x34(r1)
	bl       setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	lbz      r0, 0x36(r1)
	cmplwi   r0, 3
	bne      lbl_8022656C
	lwz      r3, mgr__Q24Game13PelletOtakara@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	b        lbl_80226580

lbl_8022656C:
	lwz      r3, mgr__Q24Game10PelletItem@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_80226580:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x20
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	stw      r3, 0xac(r29)
	lwz      r0, 0xac(r29)
	cmplwi   r0, 0
	beq      lbl_802266F0
	lfs      f3, 0x8c(r30)
	addi     r4, r1, 0x14
	lfs      f2, 0x8c(r31)
	lfs      f1, 0x3c(r30)
	lfs      f0, 0x3c(r31)
	fadds    f3, f3, f2
	lfs      f2, 0x64(r30)
	fadds    f0, f1, f0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x18(r1)
	stfs     f0, 0x14(r1)
	stfs     f3, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	lwz      r3, 0xac(r29)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f2, lbl_8051A148@sda21(r2)
	addi     r4, r1, 0x14
	lfs      f0, 0x64(r31)
	li       r5, 0
	fmadds   f1, f2, f1, f31
	fadds    f0, f0, f1
	stfs     f0, 0x18(r1)
	lwz      r3, 0xac(r29)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x98(r29)
	lwz      r4, 0xac(r29)
	bl       setTarget__Q34Game15IllustratedBook6CameraFPQ24Game8Creature
	lfs      f4, 0x1b8(r31)
	lfs      f3, 0x190(r31)
	lwz      r3, 0x98(r29)
	lfs      f0, 0x168(r31)
	lfs      f1, lbl_8051A21C@sda21(r2)
	stfs     f0, 0x1e4(r3)
	lfs      f2, lbl_8051A218@sda21(r2)
	stfs     f3, 0x1e8(r3)
	stfs     f4, 0x1ec(r3)
	lfs      f0, 0xc8(r31)
	lwz      r3, 0x98(r29)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0xf0(r31)
	lwz      r3, 0x98(r29)
	stfs     f0, 0x1cc(r3)
	lfs      f3, 0x140(r31)
	lwz      r3, 0x98(r29)
	lfs      f0, 0x118(r31)
	stfs     f0, 0x1d0(r3)
	stfs     f3, 0x1d4(r3)
	lfs      f4, 0x230(r31)
	lfs      f3, 0x208(r31)
	lfs      f0, 0x1e0(r31)
	lwz      r3, 0x98(r29)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x288(r3)
	stfs     f3, 0x28c(r3)
	stfs     f4, 0x290(r3)
	lfs      f0, 0x258(r31)
	lwz      r3, 0x98(r29)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1c4(r3)
	b        lbl_802266F0

lbl_802266A0:
	lwz      r5, 0x100(r29)
	li       r0, 0
	addi     r4, r1, 8
	addis    r3, r5, 1
	lwz      r31, 0x278(r3)
	stw      r0, 0xac(r29)
	lfs      f1, 0x11c(r5)
	lfs      f0, 0x8c(r31)
	lfs      f3, 0xf4(r5)
	lfs      f2, 0x64(r31)
	fadds    f4, f1, f0
	lfs      f1, 0xcc(r5)
	lfs      f0, 0x3c(r31)
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x10(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 8(r1)
	lwz      r3, 0x98(r29)
	bl       "move__Q34Game15IllustratedBook6CameraFRC10Vector3<f>"

lbl_802266F0:
	lfs      f4, 0x1b8(r31)
	lfs      f3, 0x190(r31)
	lwz      r3, 0x98(r29)
	lfs      f0, 0x168(r31)
	lfs      f1, lbl_8051A21C@sda21(r2)
	stfs     f0, 0x1e4(r3)
	lfs      f2, lbl_8051A218@sda21(r2)
	stfs     f3, 0x1e8(r3)
	stfs     f4, 0x1ec(r3)
	lfs      f0, 0xc8(r31)
	lwz      r3, 0x98(r29)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0xf0(r31)
	lwz      r3, 0x98(r29)
	stfs     f0, 0x1cc(r3)
	lfs      f3, 0x140(r31)
	lwz      r3, 0x98(r29)
	lfs      f0, 0x118(r31)
	stfs     f0, 0x1d0(r3)
	stfs     f3, 0x1d4(r3)
	lfs      f4, 0x230(r31)
	lfs      f3, 0x208(r31)
	lfs      f0, 0x1e0(r31)
	lwz      r3, 0x98(r29)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x288(r3)
	stfs     f3, 0x28c(r3)
	stfs     f4, 0x290(r3)
	lfs      f0, 0x258(r31)
	lwz      r3, 0x98(r29)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1c4(r3)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	lmw      r25, 0x54(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80226790
 * Size:	000090
 */
void SingleGame::ZukanState::clearHeapB_common(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_802267B8
	mr       r3, r0
	bl       initAllFarmObjectNodes__Q34Game4Farm7FarmMgrFv

lbl_802267B8:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clearAllCollBuffer__Q24Game11CellPyramidFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clear__Q24Game11CellPyramidFv
	lwz      r3, particleMgr@sda21(r13)
	bl       killAll__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       reset__11ParticleMgrFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       killAll__Q24Game9ShadowMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	bl       stopRumble__Q24Game9RumbleMgrFi
	lwz      r3, 0xdc(r31)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0xdc(r31)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0xdc(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80226820
 * Size:	0003BC
 */
void SingleGame::ZukanState::clearHeapB_teki(void)
{
	/*
	stwu     r1, -0x690(r1)
	mflr     r0
	stw      r0, 0x694(r1)
	stmw     r26, 0x678(r1)
	mr       r30, r3
	lwz      r0, 0xdc(r3)
	cmplwi   r0, 0
	beq      lbl_80226BC0
	addi     r3, r1, 0x20
	li       r26, 0
	li       r29, 0
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x20
	bl       first__Q24Game14PelletIteratorFv
	lis      r4, lbl_80482EDC@ha
	lis      r3, lbl_80483170@ha
	addi     r27, r1, 0x350
	addi     r31, r4, lbl_80482EDC@l
	addi     r28, r3, lbl_80483170@l
	b        lbl_802268AC

lbl_80226870:
	addi     r3, r1, 0x20
	bl       __ml__Q24Game14PelletIteratorFv
	cmpwi    r26, 0xc8
	bge      lbl_80226890
	stwx     r3, r27, r29
	addi     r26, r26, 1
	addi     r29, r29, 4
	b        lbl_802268A4

lbl_80226890:
	mr       r3, r31
	mr       r5, r28
	li       r4, 0xc5c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802268A4:
	addi     r3, r1, 0x20
	bl       next__Q24Game14PelletIteratorFv

lbl_802268AC:
	addi     r3, r1, 0x20
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80226870
	addi     r27, r1, 0x350
	li       r28, 0
	b        lbl_802268DC

lbl_802268C8:
	lwz      r3, 0(r27)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r27, r27, 4
	addi     r28, r28, 1

lbl_802268DC:
	cmpw     r28, r26
	blt      lbl_802268C8
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, dynParticleMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x10(r1)
	li       r31, 0
	li       r29, 0
	stw      r0, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_80226948
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_802269D0

lbl_80226948:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_802269B4

lbl_80226960:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802269D0
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_802269B4:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80226960

lbl_802269D0:
	addi     r28, r1, 0x30
	b        lbl_80226AB4

lbl_802269D8:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1c(r1)
	addi     r31, r31, 1
	stwx     r3, r28, r29
	addi     r29, r29, 4
	cmplwi   r0, 0
	bne      lbl_80226A24
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80226AB4

lbl_80226A24:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80226A98

lbl_80226A44:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80226AB4
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80226A98:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80226A44

lbl_80226AB4:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_802269D8
	lis      r3, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, 0x00010001@ha
	addi     r0, r3, __vt__Q24Game15CreatureKillArg@l
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	stw      r0, 8(r1)
	addi     r4, r4, 0x00010001@l
	addi     r0, r3, __vt__Q24Game11PikiKillArg@l
	addi     r27, r1, 0x30
	stw      r4, 0xc(r1)
	li       r26, 0
	stw      r0, 8(r1)
	b        lbl_80226B18

lbl_80226B04:
	lwz      r3, 0(r27)
	addi     r4, r1, 8
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r27, r27, 4
	addi     r26, r26, 1

lbl_80226B18:
	cmpw     r26, r31
	blt      lbl_80226B04
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80226B5C
	bl       killAll__Q24Game15GeneralEnemyMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	li       r0, 0
	stw      r0, generalEnemyMgr__4Game@sda21(r13)
	stw      r0, 0xa4(r30)

lbl_80226B5C:
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80226B6C
	bl       initAllFarmObjectNodes__Q34Game4Farm7FarmMgrFv

lbl_80226B6C:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clearAllCollBuffer__Q24Game11CellPyramidFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clear__Q24Game11CellPyramidFv
	lwz      r3, particleMgr@sda21(r13)
	bl       killAll__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       reset__11ParticleMgrFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       killAll__Q24Game9ShadowMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	bl       stopRumble__Q24Game9RumbleMgrFi
	lwz      r3, 0xdc(r30)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0xdc(r30)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0xdc(r30)

lbl_80226BC0:
	lwz      r3, 0xd8(r30)
	bl       becomeCurrentHeap__7JKRHeapFv
	lmw      r26, 0x678(r1)
	lwz      r0, 0x694(r1)
	mtlr     r0
	addi     r1, r1, 0x690
	blr
	*/
}

/*
 * --INFO--
 * Address:	80226BDC
 * Size:	000174
 */
void SingleGame::ZukanState::clearHeapB_pellet(void)
{
	/*
	stwu     r1, -0x350(r1)
	mflr     r0
	stw      r0, 0x354(r1)
	stmw     r26, 0x338(r1)
	mr       r26, r3
	lwz      r0, 0xdc(r3)
	cmplwi   r0, 0
	beq      lbl_80226D34
	lwz      r0, 0xac(r26)
	cmplwi   r0, 0
	beq      lbl_80226CD0
	addi     r3, r1, 8
	li       r27, 0
	li       r31, 0
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 8
	bl       first__Q24Game14PelletIteratorFv
	lis      r4, lbl_80482EDC@ha
	lis      r3, lbl_80483170@ha
	addi     r28, r1, 0x18
	addi     r29, r4, lbl_80482EDC@l
	addi     r30, r3, lbl_80483170@l
	b        lbl_80226C74

lbl_80226C38:
	addi     r3, r1, 8
	bl       __ml__Q24Game14PelletIteratorFv
	cmpwi    r27, 0xc8
	bge      lbl_80226C58
	stwx     r3, r28, r31
	addi     r27, r27, 1
	addi     r31, r31, 4
	b        lbl_80226C6C

lbl_80226C58:
	mr       r3, r29
	mr       r5, r30
	li       r4, 0xc95
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80226C6C:
	addi     r3, r1, 8
	bl       next__Q24Game14PelletIteratorFv

lbl_80226C74:
	addi     r3, r1, 8
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80226C38
	addi     r28, r1, 0x18
	li       r29, 0
	b        lbl_80226CA4

lbl_80226C90:
	lwz      r3, 0(r28)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r28, r28, 4
	addi     r29, r29, 1

lbl_80226CA4:
	cmpw     r29, r27
	blt      lbl_80226C90
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, dynParticleMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0xac(r26)

lbl_80226CD0:
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80226CE0
	bl       initAllFarmObjectNodes__Q34Game4Farm7FarmMgrFv

lbl_80226CE0:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clearAllCollBuffer__Q24Game11CellPyramidFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clear__Q24Game11CellPyramidFv
	lwz      r3, particleMgr@sda21(r13)
	bl       killAll__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       reset__11ParticleMgrFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       killAll__Q24Game9ShadowMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	bl       stopRumble__Q24Game9RumbleMgrFi
	lwz      r3, 0xdc(r26)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0xdc(r26)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0xdc(r26)

lbl_80226D34:
	lwz      r3, 0xd8(r26)
	bl       becomeCurrentHeap__7JKRHeapFv
	lmw      r26, 0x338(r1)
	lwz      r0, 0x354(r1)
	mtlr     r0
	addi     r1, r1, 0x350
	blr
	*/
}

/*
 * --INFO--
 * Address:	80226D50
 * Size:	0003AC
 */
unknown SingleGame::ZukanState::clearHeaps()
{
	/*
	stwu     r1, -0x350(r1)
	mflr     r0
	lis      r4, lbl_80482E60@ha
	stw      r0, 0x354(r1)
	stmw     r27, 0x33c(r1)
	mr       r31, r3
	addi     r28, r4, lbl_80482E60@l
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xa4(r31)
	cmplwi   r0, 0
	beq      lbl_80226D98
	mr       r3, r31
	bl       clearHeapB_teki__Q34Game10SingleGame10ZukanStateFv
	b        lbl_80226F44

lbl_80226D98:
	lwz      r3, 0xac(r31)
	cmplwi   r3, 0
	beq      lbl_80226EE0
	lwz      r0, 0xdc(r31)
	cmplwi   r0, 0
	beq      lbl_80226ED4
	cmplwi   r3, 0
	beq      lbl_80226E70
	li       r27, 0
	addi     r3, r1, 8
	mr       r30, r27
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 8
	bl       first__Q24Game14PelletIteratorFv
	addi     r29, r1, 0x18
	b        lbl_80226E14

lbl_80226DD8:
	addi     r3, r1, 8
	bl       __ml__Q24Game14PelletIteratorFv
	cmpwi    r27, 0xc8
	bge      lbl_80226DF8
	stwx     r3, r29, r30
	addi     r27, r27, 1
	addi     r30, r30, 4
	b        lbl_80226E0C

lbl_80226DF8:
	addi     r3, r28, 0x7c
	addi     r5, r28, 0x310
	li       r4, 0xc95
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80226E0C:
	addi     r3, r1, 8
	bl       next__Q24Game14PelletIteratorFv

lbl_80226E14:
	addi     r3, r1, 8
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80226DD8
	addi     r30, r1, 0x18
	li       r29, 0
	b        lbl_80226E44

lbl_80226E30:
	lwz      r3, 0(r30)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_80226E44:
	cmpw     r29, r27
	blt      lbl_80226E30
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, dynParticleMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0xac(r31)

lbl_80226E70:
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80226E80
	bl       initAllFarmObjectNodes__Q34Game4Farm7FarmMgrFv

lbl_80226E80:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clearAllCollBuffer__Q24Game11CellPyramidFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clear__Q24Game11CellPyramidFv
	lwz      r3, particleMgr@sda21(r13)
	bl       killAll__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       reset__11ParticleMgrFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       killAll__Q24Game9ShadowMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	bl       stopRumble__Q24Game9RumbleMgrFi
	lwz      r3, 0xdc(r31)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0xdc(r31)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0xdc(r31)

lbl_80226ED4:
	lwz      r3, 0xd8(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	b        lbl_80226F44

lbl_80226EE0:
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80226EF0
	bl       initAllFarmObjectNodes__Q34Game4Farm7FarmMgrFv

lbl_80226EF0:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       resetMgrs__Q24Game9PelletMgrFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clearAllCollBuffer__Q24Game11CellPyramidFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       clear__Q24Game11CellPyramidFv
	lwz      r3, particleMgr@sda21(r13)
	bl       killAll__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       reset__11ParticleMgrFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       killAll__Q24Game9ShadowMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	bl       stopRumble__Q24Game9RumbleMgrFi
	lwz      r3, 0xdc(r31)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0xdc(r31)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0xdc(r31)

lbl_80226F44:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80226F64
	addi     r3, r28, 0x190
	addi     r5, r28, 0x90
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80226F64:
	lwz      r27, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r27, 0
	bne      lbl_80226F84
	addi     r3, r28, 0x190
	addi     r5, r28, 0x90
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80226F84:
	mr       r3, r27
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	lwz      r3,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r3, 0
	beq      lbl_80226FAC
	lwz      r12, 0x28(r3)
	li       r4, 1
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_80226FAC:
	li       r0, 0
	stw      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) lwz      r0,
0xd8(r31) cmplwi   r0, 0 beq      lbl_8022709C lwz      r3, 0x94(r31) bl
restoreFBTexture__Q24Game15BaseGameSectionFv lwz      r4,
generalEnemyMgr__4Game@sda21(r13) cmplwi   r4, 0 beq      lbl_80226FE4 lwz r3,
gameSystem__4Game@sda21(r13) bl
detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr li       r0, 0 stw r0,
generalEnemyMgr__4Game@sda21(r13)

lbl_80226FE4:
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80226FF4
	lwz      r4, 0(r4)

lbl_80226FF4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, 0x94(r31)
	lwz      r3, 0x128(r3)
	bl       del__5CNodeFv
	lwz      r3, 0x94(r31)
	li       r0, 0
	stw      r0, 0x128(r3)
	stw      r0, mapMgr__4Game@sda21(r13)
	lwz      r3, 0x98(r31)
	bl       del__5CNodeFv
	li       r0, 0
	stw      r0, 0x98(r31)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	li       r0, 0
	lwz      r3, shadowMgr__4Game@sda21(r13)
	stw      r0, cameraMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	li       r0, 0
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stw      r0, shadowMgr__4Game@sda21(r13)
	bl       del__5CNodeFv
	li       r0, 0
	stw      r0, rumbleMgr__4Game@sda21(r13)
	stw      r0, 0x94(r31)
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	bl       deleteViewports__8GraphicsFv
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	stw      r0, cellMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x100(r31)
	bl       del__5CNodeFv
	lwz      r3, 0x104(r31)
	bl       del__5CNodeFv
	lwz      r3, 0xd8(r31)
	bl       destroy__7JKRHeapFv

lbl_8022709C:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xd4(r31)
	cmplwi   r0, 0
	beq      lbl_802270D8
	lwz      r3, 0xf0(r31)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0xf0(r31)
	lwz      r3, 0xd4(r31)
	bl       destroy__7JKRHeapFv

lbl_802270D8:
	li       r0, 0
	stw      r0, 0xdc(r31)
	stw      r0, 0xd8(r31)
	stw      r0, 0xd4(r31)
	lmw      r27, 0x33c(r1)
	lwz      r0, 0x354(r1)
	mtlr     r0
	addi     r1, r1, 0x350
	blr
	*/
}

/*
 * --INFO--
 * Address:	802270FC
 * Size:	0000A8
 */
void SingleGame::ZukanState::cleanup(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r3)
	lwz      r3, particle2dMgr@sda21(r13)
	bl       killAll__14TParticle2dMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lfs      f0, lbl_8051A11C@sda21(r2)
	stw      r0, 0x44(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	stfs     f0, 0x21c(r3)
	lwz      r3, 0xe0(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, 0xe0(r31)
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, sParentHeapFreeSize_1@sda21(r13)
	cmpw     r0, r3
	beq      lbl_80227190
	lis      r3, lbl_80482EDC@ha
	li       r4, 0xd12
	addi     r3, r3, lbl_80482EDC@l
	addi     r5, r2, lbl_8051A224@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80227190:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802271A4
 * Size:	000008
 */
u32 Morimura::DispMemberZukanItem::getSize(void) { return sizeof(DispMemberZukanItem); }

/*
 * --INFO--
 * Address:	802271AC
 * Size:	00000C
 */
void Morimura::DispMemberZukanItem::getOwnerID(void)
{
	/*
	lis      r3, 0x4D524D52@ha
	addi     r3, r3, 0x4D524D52@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	802271B8
 * Size:	000010
 */
void Morimura::DispMemberZukanItem::getMemberID(void)
{
	/*
	lis      r4, 0x4954454D@ha
	li       r3, 0x44
	addi     r4, r4, 0x4954454D@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	802271C8
 * Size:	000008
 */
u32 Morimura::DispMemberZukanEnemy::getSize(void) { return 0x20; }

/*
 * --INFO--
 * Address:	802271D0
 * Size:	00000C
 */
void Morimura::DispMemberZukanEnemy::getOwnerID(void)
{
	/*
	lis      r3, 0x4D524D52@ha
	addi     r3, r3, 0x4D524D52@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	802271DC
 * Size:	000010
 */
void Morimura::DispMemberZukanEnemy::getMemberID(void)
{
	/*
	lis      r4, 0x4E454D59@ha
	li       r3, 0x4445
	addi     r4, r4, 0x4E454D59@l
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802271EC
 * Size:	0000D0
 */
IllustratedBook::Camera::~Camera(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_802272A0
	lis      r4, __vt__Q34Game15IllustratedBook6Camera@ha
	addi     r0, r4, __vt__Q34Game15IllustratedBook6Camera@l
	stw      r0, 0(r31)
	beq      lbl_80227290
	lis      r4, __vt__12LookAtCamera@ha
	addi     r0, r4, __vt__12LookAtCamera@l
	stw      r0, 0(r31)
	beq      lbl_80227290
	lis      r4, __vt__6Camera@ha
	addi     r0, r4, __vt__6Camera@l
	stw      r0, 0(r31)
	beq      lbl_80227290
	lis      r4, __vt__11CullFrustum@ha
	addi     r0, r4, __vt__11CullFrustum@l
	stw      r0, 0(r31)
	beq      lbl_80227290
	lis      r4, __vt__9CullPlane@ha
	addi     r0, r4, __vt__9CullPlane@l
	stw      r0, 0(r31)
	beq      lbl_80227290
	lis      r4, "__vt__22ArrayContainer<5Plane>"@ha
	addi     r0, r4, "__vt__22ArrayContainer<5Plane>"@l
	stw      r0, 0(r31)
	beq      lbl_80227290
	lis      r4, "__vt__17Container<5Plane>"@ha
	addi     r0, r4, "__vt__17Container<5Plane>"@l
	stw      r0, 0(r31)
	beq      lbl_80227290
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r31)
	bl       __dt__5CNodeFv

lbl_80227290:
	extsh.   r0, r30
	ble      lbl_802272A0
	mr       r3, r31
	bl       __dl__FPv

lbl_802272A0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802272BC
 * Size:	00001C
 */
Vector3f LookAtCamera::getLookAtPosition_()
{
	/*
	lfs      f0, 0x180(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x184(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x188(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802272D8
 * Size:	000008
 */
Vector3f* LookAtCamera::on_getPositionPtr()
{
	/*
	addi     r3, r3, 0x174
	blr
	*/
}

/*
 * --INFO--
 * Address:	802272E0
 * Size:	000008
 */
float Camera::getTargetDistance()
{
	/*
	lfs      f1, lbl_8051A128@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802272E8
 * Size:	000008
 */
bool Camera::isSpecialCamera() { return false; }

namespace Game {

/*
 * --INFO--
 * Address:	802272F0
 * Size:	000070
 */
IllustratedBook::EnemyTexMgr::~EnemyTexMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80227344
	lis      r4, __vt__Q34Game15IllustratedBook11EnemyTexMgr@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__Q34Game15IllustratedBook11EnemyTexMgr@l
	li       r4, -1
	stw      r0, 0(r30)
	bl       __dt__Q34Game11IconTexture6LoaderFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q34Game11IconTexture3MgrFv
	extsh.   r0, r31
	ble      lbl_80227344
	mr       r3, r30
	bl       __dl__FPv

lbl_80227344:
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
 * Address:	80227360
 * Size:	000060
 */
IllustratedBook::DebugParms::~DebugParms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802273A4
	lis      r5, __vt__Q34Game15IllustratedBook10DebugParms@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game15IllustratedBook10DebugParms@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802273A4
	mr       r3, r30
	bl       __dl__FPv

lbl_802273A4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802273C0
 * Size:	000030
 */
void Delegate<Game::SingleGame::ZukanState>::invoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r12, r4, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
