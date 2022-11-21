#include "types.h"
#include "PSGame/EnvSe.h"
#include "PSGame/PikScene.h"
#include "PSGame/SceneInfo.h"
#include "PSGame/SoundCreatureMgr.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F918
    lbl_8048F918:
        .asciz "PSGame.cpp"
        .skip 1
    .global lbl_8048F924
    lbl_8048F924:
        .asciz "P2Assert"
        .skip 3
        .asciz "endoffile"
        .skip 2
        .asciz "cavesoil"
        .skip 3
        .asciz "cavesoil.bms"
        .skip 3
        .asciz "cavesoil_"
        .skip 2
        .asciz "cavemetal"
        .skip 2
        .asciz "cavemetal.bms"
        .skip 2
        .asciz "cavemetal_"
        .skip 1
        .asciz "caveconc"
        .skip 3
        .asciz "caveconc.bms"
        .skip 3
        .asciz "caveconc_"
        .skip 2
        .asciz "cavetile"
        .skip 3
        .asciz "cavetile.bms"
        .skip 3
        .asciz "caveglass"
        .skip 2
        .asciz "caveglass.bms"
        .skip 2
        .asciz "cavetsumiki"
        .asciz "cavetsumiki.bms"
        .asciz "caverelax"
        .skip 2
        .asciz "caverelax.bms"
        .skip 2
    .global lbl_8048FA24
    lbl_8048FA24:
        .asciz "/SeqTest/"
        .skip 2
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x000000E7
        .4byte seqCpuSync__6PSGameFP8JASTrackUs
        .4byte 0x00000000
        .4byte lbl_8048FA24
        .4byte 0x50534175
        .4byte 0x746F4267
        .4byte 0x6D2E6800
        .4byte 0x2F417564
        .4byte 0x696F5265
        .4byte 0x732F436F
        .4byte 0x6E647563
        .4byte 0x746F722E
        .4byte 0x61726300
    .global lbl_8048FA6C
    lbl_8048FA6C:
        .4byte 0x50535379
        .4byte 0x7374656D
        .4byte 0x49462E68
        .4byte 0x00000000
        .4byte 0x2F417564
        .4byte 0x696F5265
        .4byte 0x732F4B65
        .4byte 0x792E6172
        .4byte 0x63000000
    .global lbl_8048FA90
    lbl_8048FA90:
        .4byte 0x5053436F
        .4byte 0x6D6D6F6E
        .4byte 0x2E680000
    .global lbl_8048FA9C
    lbl_8048FA9C:
        .4byte 0x50534761
        .4byte 0x6D652E61
        .4byte 0x61660000
    .global lbl_8048FAA8
    lbl_8048FAA8:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
    .global lbl_8048FAB4
    lbl_8048FAB4:
        .4byte 0x666C6167
        .4byte 0x82CD3020
        .4byte 0x6F723182
        .4byte 0xC582B700
    .global lbl_8048FAC4
    lbl_8048FAC4:
        .4byte 0x6D5F626F
        .4byte 0x73732E62
        .4byte 0x6D730000
    .global lbl_8048FAD0
    lbl_8048FAD0:
        .4byte 0x6C5F626F
        .4byte 0x73732E62
        .4byte 0x6D730000
        .4byte 0x00001F00
        .4byte 0xFF000000
        .float 1.0
        .4byte 0x7F000000
        .4byte 0x00000000
        .4byte 0x7F010000
        .float 1.0
        .4byte 0x32000000
        .4byte 0x328F6482
        .4byte 0xC9834F83
        .4byte 0x8D815B83
        .4byte 0x6F838B83
        .4byte 0x56815B83
        .4byte 0x9382F08D
        .4byte 0xEC90AC82
        .4byte 0xB582E682
        .4byte 0xA482C682
        .4byte 0xB582BD00
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F537472
        .4byte 0x65616D4C
        .4byte 0x6973742E
        .4byte 0x74787400
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F42676D
        .4byte 0x4C697374
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x7363656E
        .4byte 0x65206E6F
        .4byte 0x82AA9573
        .4byte 0x90B30000
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x914F89F1
        .4byte 0x82CC6D43
        .4byte 0x75727265
        .4byte 0x6E745363
        .4byte 0x656E6582
        .4byte 0xCC8CE38F
        .4byte 0x88979D82
        .4byte 0xAA957390
        .4byte 0xB3000000
        .4byte 0x00000000
        .4byte 0x7F020000
        .float 1.0
        .4byte 0x28000000
        .4byte 0x00000000
        .4byte 0x7F010000
        .float 1.0
        .4byte 0x32000000
        .4byte 0x68697363
        .4byte 0x6F72652E
        .4byte 0x626D7300
        .4byte 0x6E5F7475
        .4byte 0x746F7269
        .4byte 0x616C5F31
        .4byte 0x73746461
        .4byte 0x792E626D
        .4byte 0x73000000
        .4byte 0x63617665
        .4byte 0x6B657967
        .4byte 0x65742E63
        .4byte 0x6E640000
        .4byte 0x63617665
        .4byte 0x6B657967
        .4byte 0x65742E62
        .4byte 0x6D730000
        .4byte 0x6B75726F
        .4byte 0x5F706F73
        .4byte 0x742E626D
        .4byte 0x73000000
        .4byte 0x00001F00
        .4byte 0x7FFF0000
        .float 1.0
        .4byte 0x32000000
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F436861
        .4byte 0x6C6C656E
        .4byte 0x67654267
        .4byte 0x6D4C6973
        .4byte 0x742E7478
        .4byte 0x74000000
        .4byte 0x62617474
        .4byte 0x6C655F74
        .4byte 0x2E626D73
        .4byte 0x00000000
        .4byte 0x63617665
        .4byte 0x636F6E63
        .4byte 0x5F30305F
        .4byte 0x302E636E
        .4byte 0x64000000
        .4byte 0x63617665
        .4byte 0x72656C61
        .4byte 0x782E636E
        .4byte 0x64000000
        .4byte 0x6B75726F
        .4byte 0x5F707265
        .4byte 0x2E626D73
        .4byte 0x00000000
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F42676D
        .4byte 0x4C697374
        .4byte 0x5F547574
        .4byte 0x6F726961
        .4byte 0x6C2E7478
        .4byte 0x74000000
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F42676D
        .4byte 0x4C697374
        .4byte 0x5F466F72
        .4byte 0x6573742E
        .4byte 0x74787400
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F42676D
        .4byte 0x4C697374
        .4byte 0x5F59616B
        .4byte 0x75736869
        .4byte 0x6D612E74
        .4byte 0x78740000
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F42676D
        .4byte 0x4C697374
        .4byte 0x5F4C6173
        .4byte 0x742E7478
        .4byte 0x74000000
        .4byte 0x2F757365
        .4byte 0x722F546F
        .4byte 0x74616B61
        .4byte 0x2F42676D
        .4byte 0x4C697374
        .4byte 0x5F42676D
        .4byte 0x54657374
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x63617665
        .4byte 0x49443D3D
        .4byte 0x25640A00
        .4byte 0x6E5F7475
        .4byte 0x746F7269
        .4byte 0x616C2E62
        .4byte 0x6D730000
        .4byte 0x666F7265
        .4byte 0x73742E62
        .4byte 0x6D730000
        .4byte 0x79616B75
        .4byte 0x7368696D
        .4byte 0x612E626D
        .4byte 0x73000000
        .4byte 0x6C617374
        .4byte 0x2E626D73
        .4byte 0x00000000
        .4byte 0x776F726C
        .4byte 0x646D6170
        .4byte 0x2E626D73
        .4byte 0x00000000
        .4byte 0x776F726C
        .4byte 0x646D6170
        .4byte 0x5F696E74
        .4byte 0x726F2E62
        .4byte 0x6D730000
        .4byte 0x635F6D65
        .4byte 0x6E752E62
        .4byte 0x6D730000
        .4byte 0x626F6F6B
        .4byte 0x2E626D73
        .4byte 0x00000000
        .4byte 0x636F6D70
        .4byte 0x5F726573
        .4byte 0x756C742E
        .4byte 0x626D7300
        .4byte 0x665F7265
        .4byte 0x73756C74
        .4byte 0x2E626D73
        .4byte 0x00000000
        .4byte 0x25735F25
        .4byte 0x3032645F
        .4byte 0x302E636E
        .4byte 0x64000000
        .4byte 0x0A6E6F74
        .4byte 0x2066696E
        .4byte 0x64205365
        .4byte 0x710A0000
        .4byte 0x25735F25
        .4byte 0x3032645F
        .4byte 0x2531642E
        .4byte 0x636E6400
        .4byte 0x67657420
        .4byte 0x736F756E
        .4byte 0x64207363
        .4byte 0x656E6520
        .4byte 0x61740A69
        .4byte 0x6E76616C
        .4byte 0x69642074
        .4byte 0x696D6D69
        .4byte 0x6E670A00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804DA920
    lbl_804DA920:
        .4byte lbl_80337278
        .4byte lbl_80336D5C
        .4byte lbl_80336D88
        .4byte lbl_80336DB4
        .4byte lbl_80336E40
        .4byte lbl_80337278
        .4byte lbl_80337278
        .4byte lbl_80337278
        .4byte lbl_80336ECC
        .4byte lbl_80336F20
        .4byte lbl_80336FB8
        .4byte lbl_80337004
        .4byte lbl_80337060
        .4byte lbl_80337118
        .4byte lbl_80337174
        .4byte lbl_803371D0
        .4byte lbl_80336F6C
        .4byte lbl_803370BC
        .4byte lbl_80337278
        .4byte lbl_8033722C
        .4byte lbl_80336D5C
    .global lbl_804DA974
    lbl_804DA974:
        .4byte lbl_80336AB8
        .4byte lbl_80336A94
        .4byte lbl_80336A9C
        .4byte lbl_80336AA4
        .4byte lbl_80336AAC
        .4byte lbl_80336AB4
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336AB8
        .4byte lbl_80336A94
    .global __vt__Q26PSGame11PikSceneMgr
    __vt__Q26PSGame11PikSceneMgr:
        .4byte 0
        .4byte 0
        .4byte exec__Q28PSSystem8SceneMgrFv
        .4byte
   newAndSetCurrentScene__Q26PSGame11PikSceneMgrFRQ26PSGame9SceneInfo .4byte
   newAndSetGlobalScene__Q26PSGame11PikSceneMgrFv .4byte 0 .4byte 0 .4byte 0
        .4byte curSceneIsBigBossFloor__Q26PSGame11PikSceneMgrFv
        .4byte 0
    .global __vt__Q26PSGame8PikScene
    __vt__Q26PSGame8PikScene:
        .4byte 0
        .4byte 0
        .4byte init__Q28PSSystem5SceneFv
        .4byte __dt__Q26PSGame8PikSceneFv
        .4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
        .4byte scene1stLoadSync__Q28PSSystem5SceneFv
        .4byte exec__Q28PSSystem5SceneFv
        .4byte startMainSeq__Q28PSSystem5SceneFv
        .4byte stopMainSeq__Q28PSSystem5SceneFUl
        .4byte stopAllSound__Q28PSSystem5SceneFUl
    .global __vt__Q26PSGame9SceneInfo
    __vt__Q26PSGame9SceneInfo:
        .4byte 0
        .4byte 0
        .4byte isCaveFloor__Q26PSGame9SceneInfoFv
    .global "__vt__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"
    "__vt__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>Fv"
    .global __vt__Q29PSAutoBgm15ConductorArcMgr
    __vt__Q29PSAutoBgm15ConductorArcMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29PSAutoBgm15ConductorArcMgrFv
    .global __vt__Q26PSGame10SysFactory
    __vt__Q26PSGame10SysFactory:
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q26PSGame9CameraMgr
    __vt__Q26PSGame9CameraMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26PSGame9CameraMgrFv
    .global __vt__Q36PSGame10SoundTable11CategoryMgr
    __vt__Q36PSGame10SoundTable11CategoryMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q36PSGame10SoundTable11CategoryMgrFv
    .global
   "__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"
    "__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>Fv"
    .global __vt__Q26PSGame13ConductorList
    __vt__Q26PSGame13ConductorList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26PSGame13ConductorListFv
        .4byte read__Q26PSGame13ConductorListFR6Stream
        .4byte 0
        .4byte 0
        .4byte "@28@__dt__Q26PSGame13ConductorListFv"
    .global "__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"
    "__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>Fv"
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global newSeqName__6PSGame
    newSeqName__6PSGame:
        .skip 0x20

    .section .sbss # 0x80514D80 - 0x80516360
    .global sToolMode__Q26PSGame13ConductorList
    sToolMode__Q26PSGame13ConductorList:
        .skip 0x4
    .global "sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"
    "sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>":
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E0C0
    lbl_8051E0C0:
        .4byte 0x30300000
    .global lbl_8051E0C4
    lbl_8051E0C4:
        .4byte 0x30350000
    .global lbl_8051E0C8
    lbl_8051E0C8:
        .4byte 0x6E657700
    .global lbl_8051E0CC
    lbl_8051E0CC:
        .4byte 0x2E626D73
        .4byte 0x00000000
    .global lbl_8051E0D4
    lbl_8051E0D4:
        .float 1.0
    .global lbl_8051E0D8
    lbl_8051E0D8:
        .4byte 0x00000000
    .global lbl_8051E0DC
    lbl_8051E0DC:
        .4byte 0x442F0000
    .global lbl_8051E0E0
    lbl_8051E0E0:
        .4byte 0x3E3851EC
    .global lbl_8051E0E4
    lbl_8051E0E4:
        .4byte 0x45228000
    .global lbl_8051E0E8
    lbl_8051E0E8:
        .4byte 0x43480000
    .global lbl_8051E0EC
    lbl_8051E0EC:
        .4byte 0x442B0000
    .global lbl_8051E0F0
    lbl_8051E0F0:
        .4byte 0x3E49BA5E
    .global lbl_8051E0F4
    lbl_8051E0F4:
        .4byte 0x457AC800
    .global lbl_8051E0F8
    lbl_8051E0F8:
        .4byte 0x40000000
    .global lbl_8051E0FC
    lbl_8051E0FC:
        .float 0.5
    .global lbl_8051E100
    lbl_8051E100:
        .float 0.25
    .global sDefaultVol__Q26PSGame9CameraMgr
    sDefaultVol__Q26PSGame9CameraMgr:
        .4byte 0x3F4CCCCD
    .global lbl_8051E108
    lbl_8051E108:
        .4byte 0x4276A3D7
    .global lbl_8051E10C
    lbl_8051E10C:
        .4byte 0x43034000
    .global lbl_8051E110
    lbl_8051E110:
        .4byte 0x43570A3D
    .global lbl_8051E114
    lbl_8051E114:
        .4byte 0x43A5170A
    .global lbl_8051E118
    lbl_8051E118:
        .4byte 0x3F4CCCCD
    .global lbl_8051E11C
    lbl_8051E11C:
        .4byte 0x3F35C28F
    .global lbl_8051E120
    lbl_8051E120:
        .4byte 0x3F1EB852
    .global lbl_8051E124
    lbl_8051E124:
        .4byte 0x3EE66666
    .global lbl_8051E128
    lbl_8051E128:
        .4byte 0x5365712E
        .4byte 0x61726300
    .global lbl_8051E130
    lbl_8051E130:
        .4byte 0x42F00000
    .global lbl_8051E134
    lbl_8051E134:
        .4byte 0x73652E62
        .4byte 0x6D730000
    .global lbl_8051E13C
    lbl_8051E13C:
        .4byte 0x50535365
        .4byte 0x712E6800
    .global lbl_8051E144
    lbl_8051E144:
        .4byte 0x50535365
        .4byte 0x2E680000
        .4byte 0x00000000
*/

namespace PSGame {

/*
 * --INFO--
 * Address:	80334268
 * Size:	000028
 */
u32 CaveFloorInfo::getCaveNoFromID()
{
	/*
	lwz      r4, 0x44(r3)
	addis    r0, r4, 0x8b9b
	cmplwi   r0, 0x7374
	bne      lbl_80334280
	li       r3, 0
	blr

lbl_80334280:
	lbz      r3, 0x47(r3)
	addi     r0, r3, -49
	clrlwi   r3, r0, 0x18
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
ConductorList::ConductorList(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80334290
 * Size:	0000D4
 */
ConductorList::~ConductorList(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	or.      r29, r3, r3
	beq      lbl_80334344
	lis      r3, __vt__Q26PSGame13ConductorList@ha
	li       r31, 0
	addi     r3, r3, __vt__Q26PSGame13ConductorList@l
	stw      r3, 0(r29)
	addi     r0, r3, 0x10
	stw      r0, 0x1c(r29)
	b        lbl_803342E8

lbl_803342D0:
	rlwinm   r3, r31, 3, 0x15, 0x1c
	lwz      r4, 0x24(r29)
	addi     r0, r3, 4
	lwzx     r3, r4, r0
	bl       __dla__FPv
	addi     r31, r31, 1

lbl_803342E8:
	lbz      r0, 0x20(r29)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_803342D0
	lwz      r3, 0x24(r29)
	cmplwi   r3, 0
	beq      lbl_8033430C
	addi     r3, r3, -16
	bl       __dla__FPv

lbl_8033430C:
	addic.   r0, r29, 0x1c
	beq      lbl_80334328
	lis      r3, "__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@ha
	li       r0, 0
	addi     r3, r3,
"__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@l stw      r3,
0x1c(r29) stw      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)

lbl_80334328:
	mr       r3, r29
	li       r4, 0
	bl       __dt__Q28PSSystem12TextDataBaseFv
	extsh.   r0, r30
	ble      lbl_80334344
	mr       r3, r29
	bl       __dl__FPv

lbl_80334344:
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	80334364
 * Size:	0001AC
 */
void ConductorList::read(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8048F918@ha
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r29, r4
	mr       r28, r3
	addi     r31, r5, lbl_8048F918@l
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x20(r28)
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_803343B0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x8c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803343B0:
	lbz      r27, 0x20(r28)
	li       r5, -32
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	slwi     r3, r27, 3
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __ct__Q36PSGame13ConductorList8CaveInfoFv@ha
	mr       r7, r27
	addi     r4, r4, __ct__Q36PSGame13ConductorList8CaveInfoFv@l
	li       r5, 0
	li       r6, 8
	bl       __construct_new_array
	stw      r3, 0x24(r28)
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	bne      lbl_80334404
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x90
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334404:
	li       r30, 0
	b        lbl_803344E8

lbl_8033440C:
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 0x24(r28)
	mr       r27, r3
	rlwinm   r26, r30, 3, 0x15, 0x1c
	rlwinm   r3, r3, 5, 0x13, 0x1a
	stbx     r27, r4, r26
	li       r5, -32
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, 0x24(r28)
	addi     r0, r26, 4
	clrlwi   r27, r27, 0x18
	li       r25, 0
	stwx     r3, r4, r0
	b        lbl_803344D8

lbl_8033444C:
	lwz      r4, 0x24(r28)
	rlwinm   r0, r25, 5, 0x13, 0x1a
	mr       r3, r29
	li       r5, 0x20
	addi     r4, r4, 4
	lwzx     r4, r26, r4
	add      r24, r4, r0
	mr       r4, r24
	bl       readString__6StreamFPci
	mr       r3, r24
	addi     r4, r31, 0x18
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80334498
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x9c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334498:
	lbz      r0, 0(r24)
	li       r3, 0
	extsb    r0, r0
	cmpwi    r0, 0x30
	blt      lbl_803344B4
	cmpwi    r0, 0x39
	ble      lbl_803344B8

lbl_803344B4:
	li       r3, 1

lbl_803344B8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_803344D4
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x9e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803344D4:
	addi     r25, r25, 1

lbl_803344D8:
	clrlwi   r0, r25, 0x18
	cmplw    r0, r27
	blt      lbl_8033444C
	addi     r30, r30, 1

lbl_803344E8:
	lbz      r0, 0x20(r28)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_8033440C
	lmw      r24, 0x10(r1)
	li       r3, 1
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334510
 * Size:	000014
 */
ConductorList::CaveInfo::CaveInfo(void)
{
	/*
	li       r4, 0xff
	li       r0, 0
	stb      r4, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void ConductorList::getInfo(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void ConductorList::getAutoBgmInfo(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80334524
 * Size:	0003D4
 */
void ConductorList::getSeqAndWaveFromConductor(char const*, unsigned char*, char**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8049
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r3, 0x6E8
	  addi      r3, r31, 0x24
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  bl        -0x269C48
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0x24
	  bl        -0x269EE8
	  cmpwi     r3, 0
	  bne-      .loc_0xB8
	  addi      r0, r31, 0x30
	  addi      r3, r31, 0x40
	  stw       r0, 0x0(r30)
	  bl        -0x269C70
	  add       r28, r28, r3
	  subi      r4, r2, 0x2A0
	  mr        r3, r28
	  li        r5, 0x2
	  bl        -0x269F14
	  cmpwi     r3, 0
	  bne-      .loc_0x88
	  li        r0, 0x16
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x88:
	  mr        r3, r28
	  subi      r4, r2, 0x29C
	  li        r5, 0x2
	  bl        -0x269F38
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  li        r0, 0x21
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0xAC:
	  li        r0, 0x22
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0xB8:
	  addi      r3, r31, 0x4C
	  bl        -0x269CD0
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0x4C
	  bl        -0x269F70
	  cmpwi     r3, 0
	  bne-      .loc_0x140
	  addi      r0, r31, 0x58
	  addi      r3, r31, 0x68
	  stw       r0, 0x0(r30)
	  bl        -0x269CF8
	  add       r28, r28, r3
	  subi      r4, r2, 0x2A0
	  mr        r3, r28
	  li        r5, 0x2
	  bl        -0x269F9C
	  cmpwi     r3, 0
	  bne-      .loc_0x110
	  li        r0, 0xA
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x110:
	  mr        r3, r28
	  subi      r4, r2, 0x29C
	  li        r5, 0x2
	  bl        -0x269FC0
	  cmpwi     r3, 0
	  bne-      .loc_0x134
	  li        r0, 0x1D
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x134:
	  li        r0, 0x1E
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x140:
	  addi      r3, r31, 0x74
	  bl        -0x269D58
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0x74
	  bl        -0x269FF8
	  cmpwi     r3, 0
	  bne-      .loc_0x1C8
	  addi      r0, r31, 0x80
	  addi      r3, r31, 0x90
	  stw       r0, 0x0(r30)
	  bl        -0x269D80
	  add       r28, r28, r3
	  subi      r4, r2, 0x2A0
	  mr        r3, r28
	  li        r5, 0x2
	  bl        -0x26A024
	  cmpwi     r3, 0
	  bne-      .loc_0x198
	  li        r0, 0x1A
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x198:
	  mr        r3, r28
	  subi      r4, r2, 0x29C
	  li        r5, 0x2
	  bl        -0x26A048
	  cmpwi     r3, 0
	  bne-      .loc_0x1BC
	  li        r0, 0x1F
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x1BC:
	  li        r0, 0x20
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x1C8:
	  subi      r3, r2, 0x298
	  bl        -0x269DE0
	  mr        r5, r3
	  mr        r4, r28
	  subi      r3, r2, 0x298
	  bl        -0x26A080
	  cmpwi     r3, 0
	  bne-      .loc_0x2D0
	  lis       r3, 0x8051
	  mr        r4, r28
	  addi      r3, r3, 0x3FFC
	  bl        -0x269EC0
	  lis       r3, 0x8051
	  subi      r4, r2, 0x294
	  addi      r3, r3, 0x3FFC
	  addi      r3, r3, 0x6
	  bl        -0x269ED4
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3FFC
	  stw       r3, 0x0(r30)
	  lbz       r3, 0x5(r3)
	  extsb     r0, r3
	  cmpwi     r0, 0x30
	  blt-      .loc_0x23C
	  cmpwi     r0, 0x39
	  bgt-      .loc_0x23C
	  subi      r0, r3, 0x30
	  rlwinm    r0,r0,0,24,31
	  b         .loc_0x240

	.loc_0x23C:
	  li        r0, 0xFF

	.loc_0x240:
	  rlwinm    r28,r0,0,24,31
	  addis     r0, r28, 0
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x264
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC
	  li        r4, 0x102
	  crclr     6, 0x6
	  bl        -0x30A144

	.loc_0x264:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3FFC
	  lbz       r3, 0x4(r3)
	  extsb     r0, r3
	  cmpwi     r0, 0x30
	  blt-      .loc_0x290
	  cmpwi     r0, 0x39
	  bgt-      .loc_0x290
	  subi      r0, r3, 0x30
	  rlwinm    r0,r0,0,24,31
	  b         .loc_0x294

	.loc_0x290:
	  li        r0, 0xFF

	.loc_0x294:
	  rlwinm    r30,r0,0,24,31
	  addis     r0, r30, 0
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x2B8
	  addi      r3, r31, 0
	  addi      r5, r31, 0xC
	  li        r4, 0x104
	  crclr     6, 0x6
	  bl        -0x30A198

	.loc_0x2B8:
	  mulli     r0, r30, 0xA
	  add       r0, r28, r0
	  rlwinm    r3,r0,0,24,31
	  addi      r0, r3, 0x25
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x2D0:
	  addi      r3, r31, 0x9C
	  bl        -0x269EE8
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0x9C
	  bl        -0x26A188
	  cmpwi     r3, 0
	  bne-      .loc_0x304
	  addi      r3, r31, 0xA8
	  li        r0, 0x18
	  stw       r3, 0x0(r30)
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x304:
	  addi      r3, r31, 0xB8
	  bl        -0x269F1C
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0xB8
	  bl        -0x26A1BC
	  cmpwi     r3, 0
	  bne-      .loc_0x338
	  addi      r3, r31, 0xC4
	  li        r0, 0x17
	  stw       r3, 0x0(r30)
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x338:
	  addi      r3, r31, 0xD4
	  bl        -0x269F50
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0xD4
	  bl        -0x26A1F0
	  cmpwi     r3, 0
	  bne-      .loc_0x36C
	  addi      r3, r31, 0xE0
	  li        r0, 0x19
	  stw       r3, 0x0(r30)
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x36C:
	  addi      r3, r31, 0xF0
	  bl        -0x269F84
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0xF0
	  bl        -0x26A224
	  cmpwi     r3, 0
	  bne-      .loc_0x3A0
	  addi      r3, r31, 0xFC
	  li        r0, 0x1C
	  stw       r3, 0x0(r30)
	  stb       r0, 0x0(r29)
	  b         .loc_0x3B4

	.loc_0x3A0:
	  mr        r5, r28
	  addi      r3, r31, 0
	  li        r4, 0x121
	  crclr     6, 0x6
	  bl        -0x30A294

	.loc_0x3B4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803348F8
 * Size:	0000E0
 */
SoundTable::CategoryMgr::CategoryMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5,
"__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@ha lis
r4, __vt__Q36PSGame10SoundTable11CategoryMgr@ha stw      r0, 0x14(r1) addi r0,
r4, __vt__Q36PSGame10SoundTable11CategoryMgr@l stw      r31, 0xc(r1) li r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r5,
"__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@l stw r3,
0(r30) stw      r30,
"sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
	stw      r0, 0(r30)
	b        lbl_803349B0

lbl_80334934:
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8033496C
	lfs      f1, lbl_8051E0D4@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_8051E0D8@sda21(r2)
	stfs     f1, 0(r3)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	stb      r0, 0x14(r3)
	stb      r0, 0x15(r3)

lbl_8033496C:
	rlwinm   r4, r31, 2, 0x16, 0x1d
	addi     r0, r4, 4
	stwx     r3, r30, r0
	lwzx     r0, r30, r0
	cmplwi   r0, 0
	bne      lbl_803349A0
	lis      r3, lbl_8048F918@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048F918@l
	li       r4, 0x138
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803349A0:
	mr       r3, r30
	mr       r4, r31
	bl       initiate__Q36PSGame10SoundTable11CategoryMgrFUc
	addi     r31, r31, 1

lbl_803349B0:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 6
	blt      lbl_80334934
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
 * Address:	803349D8
 * Size:	000174
 */
void SoundTable::CategoryMgr::initiate(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 2, 0x16, 0x1d
	stw      r31, 0xc(r1)
	add      r31, r3, r0
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_80334A20
	lis      r3, lbl_8048F918@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048F918@l
	li       r4, 0x13f
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334A20:
	clrlwi   r0, r30, 0x18
	cmpwi    r0, 3
	beq      lbl_80334AB8
	bge      lbl_80334A48
	cmpwi    r0, 1
	beq      lbl_80334A78
	bge      lbl_80334A98
	cmpwi    r0, 0
	bge      lbl_80334A58
	b        lbl_80334B18

lbl_80334A48:
	cmpwi    r0, 5
	beq      lbl_80334AF8
	bge      lbl_80334B18
	b        lbl_80334AD8

lbl_80334A58:
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051E0D4@sda21(r2)
	lfs      f2, lbl_8051E0DC@sda21(r2)
	lfs      f3, lbl_8051E0E0@sda21(r2)
	lfs      f4, lbl_8051E0E4@sda21(r2)
	lfs      f5, lbl_8051E0E8@sda21(r2)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	b        lbl_80334B34

lbl_80334A78:
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051E0D4@sda21(r2)
	lfs      f2, lbl_8051E0DC@sda21(r2)
	lfs      f3, lbl_8051E0E0@sda21(r2)
	lfs      f4, lbl_8051E0E4@sda21(r2)
	lfs      f5, lbl_8051E0E8@sda21(r2)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	b        lbl_80334B34

lbl_80334A98:
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051E0D4@sda21(r2)
	lfs      f2, lbl_8051E0DC@sda21(r2)
	lfs      f3, lbl_8051E0E0@sda21(r2)
	lfs      f4, lbl_8051E0E4@sda21(r2)
	lfs      f5, lbl_8051E0E8@sda21(r2)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	b        lbl_80334B34

lbl_80334AB8:
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051E0D4@sda21(r2)
	lfs      f2, lbl_8051E0DC@sda21(r2)
	lfs      f3, lbl_8051E0E0@sda21(r2)
	lfs      f4, lbl_8051E0E4@sda21(r2)
	lfs      f5, lbl_8051E0E8@sda21(r2)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	b        lbl_80334B34

lbl_80334AD8:
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051E0D4@sda21(r2)
	lfs      f2, lbl_8051E0EC@sda21(r2)
	lfs      f3, lbl_8051E0F0@sda21(r2)
	lfs      f4, lbl_8051E0F4@sda21(r2)
	lfs      f5, lbl_8051E0E8@sda21(r2)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	b        lbl_80334B34

lbl_80334AF8:
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051E0D4@sda21(r2)
	lfs      f2, lbl_8051E0DC@sda21(r2)
	lfs      f3, lbl_8051E0E0@sda21(r2)
	lfs      f4, lbl_8051E0E4@sda21(r2)
	lfs      f5, lbl_8051E0E8@sda21(r2)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	b        lbl_80334B34

lbl_80334B18:
	lis      r3, lbl_8048F918@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048F918@l
	li       r4, 0x155
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334B34:
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
 * Address:	80334B4C
 * Size:	000018
 */
void SoundTable::SePerspInfo::set(float, float, float, float, float)
{
	/*
	stfs     f1, 0(r3)
	stfs     f2, 4(r3)
	stfs     f3, 8(r3)
	stfs     f4, 0xc(r3)
	stfs     f5, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334B64
 * Size:	000164
 */
void SoundTable::SePerspInfo::getDistVol(float, unsigned char)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	fmr      f30, f1
	lbz      r0, 0x15(r3)
	cmplwi   r0, 0
	beq      lbl_80334BA0
	lfs      f1, lbl_8051E0D8@sda21(r2)
	b        lbl_80334CA4

lbl_80334BA0:
	clrlwi   r0, r4, 0x18
	lfs      f31, 4(r31)
	cmpwi    r0, 5
	beq      lbl_80334BF4
	bge      lbl_80334BCC
	cmpwi    r0, 3
	beq      lbl_80334BDC
	bge      lbl_80334BE8
	cmpwi    r0, 0
	bge      lbl_80334C30
	b        lbl_80334C14

lbl_80334BCC:
	cmpwi    r0, 7
	beq      lbl_80334C0C
	bge      lbl_80334C14
	b        lbl_80334C00

lbl_80334BDC:
	lfs      f0, lbl_8051E0F8@sda21(r2)
	fmuls    f31, f31, f0
	b        lbl_80334C30

lbl_80334BE8:
	lfs      f0, lbl_8051E0D8@sda21(r2)
	fmuls    f31, f31, f0
	b        lbl_80334C30

lbl_80334BF4:
	lfs      f0, lbl_8051E0FC@sda21(r2)
	fmuls    f31, f31, f0
	b        lbl_80334C30

lbl_80334C00:
	lfs      f0, lbl_8051E100@sda21(r2)
	fmuls    f31, f31, f0
	b        lbl_80334C30

lbl_80334C0C:
	lfs      f31, 0x10(r31)
	b        lbl_80334C30

lbl_80334C14:
	lis      r3, lbl_8048F918@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048F918@l
	li       r4, 0x193
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334C30:
	bl       getParamMaxVolumeDistance__18JAIGlobalParameterFv
	fcmpo    cr0, f30, f1
	bge      lbl_80334C44
	lfs      f1, 0(r31)
	b        lbl_80334CA4

lbl_80334C44:
	fcmpo    cr0, f30, f31
	bge      lbl_80334C70
	bl       getParamMaxVolumeDistance__18JAIGlobalParameterFv
	fmr      f2, f1
	lfs      f4, 0(r31)
	fmr      f1, f30
	lfs      f5, 8(r31)
	fmr      f3, f31
	li       r3, 0
	bl       linearTransform__7JALCalcFfffffb
	b        lbl_80334CA4

lbl_80334C70:
	lfs      f0, 0xc(r31)
	fcmpo    cr0, f30, f0
	bge      lbl_80334CA0
	bl       getParamMinDistanceVolume__18JAIGlobalParameterFv
	fmr      f5, f1
	lfs      f3, 0xc(r31)
	fmr      f1, f30
	lfs      f4, 8(r31)
	fmr      f2, f31
	li       r3, 0
	bl       linearTransform__7JALCalcFfffffb
	b        lbl_80334CA4

lbl_80334CA0:
	lfs      f1, lbl_8051E0D8@sda21(r2)

lbl_80334CA4:
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r0, 0x34(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334CC8
 * Size:	0000A8
 */
CameraMgr::CameraMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q26PSGame9CameraMgr@ha
	li       r0, 0
	addi     r3, r3, __vt__Q26PSGame9CameraMgr@l
	lfs      f3, lbl_8051E108@sda21(r2)
	stw      r3, 0(r31)
	mr       r3, r31
	lfs      f2, lbl_8051E10C@sda21(r2)
	stb      r0, 0x4c(r31)
	lfs      f1, lbl_8051E110@sda21(r2)
	stb      r0, 0x4d(r31)
	lfs      f0, lbl_8051E114@sda21(r2)
	stfs     f3, 0x18(r31)
	lfs      f4, lbl_8051E0D4@sda21(r2)
	stfs     f2, 0x1c(r31)
	lfs      f3, lbl_8051E118@sda21(r2)
	stfs     f1, 0x20(r31)
	lfs      f2, lbl_8051E11C@sda21(r2)
	stfs     f0, 0x24(r31)
	lfs      f1, lbl_8051E120@sda21(r2)
	stfs     f4, 0x28(r31)
	lfs      f0, lbl_8051E124@sda21(r2)
	stfs     f3, 0x2c(r31)
	stfs     f2, 0x30(r31)
	stfs     f1, 0x34(r31)
	stfs     f0, 0x38(r31)
	lfs      f0, 0x1c(r31)
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x1c(r31)
	stfs     f0, 0x40(r31)
	stfs     f4, 0x44(r31)
	stfs     f4, 0x48(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334D70
 * Size:	000060
 */
CameraMgr::~CameraMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80334DB4
	lis      r5, __vt__Q26PSGame9CameraMgr@ha
	li       r4, 0
	addi     r0, r5, __vt__Q26PSGame9CameraMgr@l
	stw      r0, 0(r30)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80334DB4
	mr       r3, r30
	bl       __dl__FPv

lbl_80334DB4:
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
 * Address:	80334DD0
 * Size:	000024
 */
void CameraMgr::getBgmCamVol(unsigned char)
{
	/*
	clrlwi   r0, r4, 0x18
	add      r4, r3, r0
	lbz      r0, 0x4c(r4)
	cmplwi   r0, 0
	beq      lbl_80334DEC
	lfs      f1, 0x38(r3)
	blr

lbl_80334DEC:
	lfs      f1, lbl_8051E0D4@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334DF4
 * Size:	00004C
 */
void CameraMgr::update(unsigned char, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       getVol_DistBetweenCamAndLookat__Q26PSGame9CameraMgrFf
	rlwinm   r0, r31, 2, 0x16, 0x1d
	lfs      f0, lbl_8051E0D4@sda21(r2)
	add      r3, r30, r0
	stfs     f1, 0x3c(r3)
	stfs     f0, 0x44(r3)
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
 * Address:	80334E40
 * Size:	000010
 */
void CameraMgr::getCurrentCamDistVol(unsigned char)
{
	/*
	rlwinm   r0, r4, 2, 0x16, 0x1d
	add      r3, r3, r0
	lfs      f1, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334E50
 * Size:	000088
 */
void CameraMgr::getVol_DistBetweenCamAndLookat(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f3, 0x1c(r3)
	fcmpo    cr0, f1, f3
	cror     2, 0, 2
	bne      lbl_80334E84
	lfs      f2, 0x18(r3)
	lfs      f4, 0x28(r3)
	lfs      f5, 0x2c(r3)
	li       r3, 0
	bl       linearTransform__7JALCalcFfffffb
	b        lbl_80334EC8

lbl_80334E84:
	lfs      f0, 0x20(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80334EB0
	fmr      f2, f3
	lfs      f4, 0x2c(r3)
	lfs      f5, 0x30(r3)
	fmr      f3, f0
	li       r3, 0
	bl       linearTransform__7JALCalcFfffffb
	b        lbl_80334EC8

lbl_80334EB0:
	fmr      f2, f0
	lfs      f3, 0x24(r3)
	lfs      f4, 0x30(r3)
	lfs      f5, 0x34(r3)
	li       r3, 0
	bl       linearTransform__7JALCalcFfffffb

lbl_80334EC8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334ED8
 * Size:	000034
 */
SysFactory::SysFactory(void)
{
	/*
	lis      r5, __vt__Q26PSGame10SysFactory@ha
	lis      r4, 0x00151800@ha
	addi     r0, r5, __vt__Q26PSGame10SysFactory@l
	li       r5, 0
	stw      r0, 0x10(r3)
	addi     r0, r4, 0x00151800@l
	stw      r5, 0(r3)
	stw      r5, 4(r3)
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	stw      r0, 0x14(r3)
	stw      r5, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80334F0C
 * Size:	000404
 */
void SysFactory::newSoundSystem(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r27, r3
	lis      r3, lbl_8048F918@ha
	addi     r31, r3, lbl_8048F918@l
	lwz      r0, 0(r27)
	cmplwi   r0, 0
	bne      lbl_80334F48
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x2cb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334F48:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80334F68
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x2cc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334F68:
	lwz      r0, 8(r27)
	cmplwi   r0, 0
	bne      lbl_80334F88
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x2cd
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334F88:
	mr       r3, r27
	bl       preInitJAI__Q26PSGame10SysFactoryFv
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0(r27)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r28, 0(r27)
	mr       r3, r28
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r28
	li       r5, 0
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	or.      r29, r3, r3
	bne      lbl_80334FD0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x2e5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80334FD0:
	mr       r3, r29
	bl       becomeCurrentHeap__7JKRHeapFv
	bl
"newInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>Fv"
	mr       r3, r29
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, 0x14(r27)
	cmplw    r0, r3
	blt      lbl_80335004
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x2ec
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335004:
	lwz      r3, 0x14(r27)
	mr       r4, r29
	li       r5, 0
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	stw      r3, 0x18(r27)
	lwz      r0, 0x18(r27)
	cmplwi   r0, 0
	bne      lbl_80335038
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x2f2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335038:
	lwz      r0, 0x118(r31)
	lwz      r7, 0x11c(r31)
	lwz      r6, 0x120(r31)
	lwz      r5, 0x124(r31)
	lwz      r4, 0x128(r31)
	lwz      r3, 0x12c(r31)
	stw      r0, 8(r1)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	stw      r7, 0xc(r1)
	cmplwi   r0, 0
	stw      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r4, 0x18(r1)
	stw      r3, 0x1c(r1)
	lwz      r0, 0x18(r27)
	stw      r0, 8(r1)
	lwz      r0, 4(r27)
	stw      r0, 0xc(r1)
	lwz      r0, 8(r27)
	stw      r0, 0x18(r1)
	beq      lbl_803350A0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x301
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803350A0:
	lwz      r0, 0xc(r27)
	li       r3, 0x4c
	stw      r0, sMakeJAISeCallback__Q28PSSystem5SysIF@sda21(r13)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803350C4
	addi     r4, r1, 8
	bl       __ct__Q28PSSystem5SysIFFRCQ28PSSystem8SetupArg
	mr       r28, r3

lbl_803350C4:
	cmplwi   r28, 0
	bne      lbl_803350E0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x305
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803350E0:
	mr       r3, r27
	lwz      r12, 0x10(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	stw      r3, spSceneMgr__8PSSystem@sda21(r13)
	bne      lbl_80335114
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x308
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335114:
	mr       r3, r27
	bl       postInitJAI__Q26PSGame10SysFactoryFv
	lwz      r0, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8033513C
	addi     r3, r31, 0x130
	addi     r5, r31, 0xc
	li       r4, 0x2d6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033513C:
	li       r3, 8
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_80335198
	lis      r3, __vt__Q29PSAutoBgm15ConductorArcMgr@ha
	li       r0, 0
	addi     r4, r3, __vt__Q29PSAutoBgm15ConductorArcMgr@l
	addi     r3, r31, 0x13c
	stw      r4, 0(r27)
	li       r4, 3
	li       r6, 1
	stw      r0, 4(r27)
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	stw      r3, 4(r27)
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80335198
	addi     r3, r31, 0x130
	addi     r5, r31, 0xc
	li       r4, 0x2ea
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335198:
	cmplwi   r27, 0
	stw      r27, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
	bne      lbl_803351B8
	addi     r3, r31, 0x130
	addi     r5, r31, 0xc
	li       r4, 0x2d8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803351B8:
	lwz      r0, "sInstance__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803351D8
	addi     r3, r31, 0x154
	addi     r5, r31, 0xc
	li       r4, 0x47
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803351D8:
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80335240
	mr       r27, r0
	bl       __ct__11JKRDisposerFv
	lis      r3, "__vt__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@l
	addi     r3, r31, 0x164
	stw      r4, 0(r27)
	li       r4, 1
	li       r6, 1
	stw      r0, 0x18(r27)
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	stw      r3, 0x18(r27)
	lwz      r0, 0x18(r27)
	cmplwi   r0, 0
	bne      lbl_8033523C
	addi     r3, r31, 0x154
	addi     r5, r31, 0xc
	li       r4, 0x5c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033523C:
	mr       r0, r27

lbl_80335240:
	cmplwi   r0, 0
	stw      r0, "sInstance__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@sda21(r13)
	bne      lbl_80335260
	addi     r3, r31, 0x154
	addi     r5, r31, 0xc
	li       r4, 0x4a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335260:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 beq      lbl_80335280 addi     r3, r31, 0x178 addi     r5, r31, 0xc li r4,
0x76 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335280:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_803352A8 li       r3, 0x30 bl       __nw__FUl or.      r0, r3, r3
	beq      lbl_803352A4
	bl       __ct__Q26PSGame5SeMgrFv
	mr       r0, r3

lbl_803352A4:
	stw      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)

lbl_803352A8:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_803352C8 addi     r3, r31, 0x178 addi     r5, r31, 0xc li r4,
0x79 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_803352C8:
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	mr       r3, r29
	bl       adjustSize__12JKRSolidHeapFv
	addi     r3, r28, 0x28
	bl       OSLockMutex
	li       r0, 1
	addi     r3, r28, 0x28
	stw      r0, 0x40(r28)
	bl       OSUnlockMutex
	bl       OSDisableInterrupts
	stw      r28, spSysIF__8PSSystem@sda21(r13)
	bl       OSEnableInterrupts
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80335310
 * Size:	000080
 */
void SysFactory::preInitJAI(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8048FA9C@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, lbl_8048FA9C@l
	bl       setParamInitDataFileName__18JAIGlobalParameterFPc
	addi     r3, r2, lbl_8051E128@sda21
	bl       setParamSequenceArchivesFileName__18JAIGlobalParameterFPc
	li       r3, 2
	bl       setParamAudioCameraMax__18JAIGlobalParameterFUl
	li       r3, 0xe7
	bl       setParamSystemTrackMax__18JAIGlobalParameterFl
	li       r3, 5
	bl       setParamSeqPlayTrackMax__18JAIGlobalParameterFUl
	li       r3, 0xa
	bl       setParamSeqControlBufferMax__18JAIGlobalParameterFUl
	li       r3, 0xa
	bl       setParamSystemRootTrackMax__18JAIGlobalParameterFl
	lis      r3, 0x0000F000@ha
	addi     r3, r3, 0x0000F000@l
	bl       setParamStayHeapSize__18JAIGlobalParameterFUl
	li       r3, 3
	bl       setParamAutoHeapMax__18JAIGlobalParameterFUl
	lis      r3, 0x0000A2FF@ha
	addi     r3, r3, 0x0000A2FF@l
	bl       setParamAutoHeapRoomSize__18JAIGlobalParameterFUl
	li       r3, 1
	bl       setParamStayHeapMax__18JAIGlobalParameterFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80335390
 * Size:	000120
 */
void SysFactory::postInitJAI(void)
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
	lfs      f31, lbl_8051E0D8@sda21(r2)
	li       r30, 0
	b        lbl_80335460

lbl_803353BC:
	mr       r3, r30
	bl       getSoundMax__Q27JAInter10SoundTableFUc
	clrlwi.  r0, r3, 0x10
	beq      lbl_8033545C
	rlwinm   r31, r30, 2, 0x16, 0x1d
	lwz      r29,
"sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
	addi     r0, r31, 4
	lwzx     r0, r29, r0
	cmplwi   r0, 0
	bne      lbl_80335400
	lis      r3, lbl_8048FAA8@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048FAA8@l
	li       r4, 0x5d
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335400:
	addi     r0, r31, 4
	lwzx     r3, r29, r0
	lfs      f0, 0xc(r3)
	fcmpo    cr0, f31, f0
	bge      lbl_80335418
	fmr      f31, f0

lbl_80335418:
	lwz      r29,
"sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
	addi     r0, r31, 4
	lwzx     r0, r29, r0
	cmplwi   r0, 0
	bne      lbl_80335448
	lis      r3, lbl_8048FAA8@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048FAA8@l
	li       r4, 0x5d
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335448:
	addi     r0, r31, 4
	lwz      r3, seCategoryVolume__Q27JAInter5SeMgr@sda21(r13)
	lwzx     r4, r29, r0
	lfs      f0, 0(r4)
	stfsx    f0, r3, r31

lbl_8033545C:
	addi     r30, r30, 1

lbl_80335460:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_803353BC
	fmr      f1, f31
	bl       setParamDistanceMax__18JAIGlobalParameterFf
	lfs      f1, lbl_8051E0D8@sda21(r2)
	bl       setParamMinDistanceVolume__18JAIGlobalParameterFf
	lfs      f1, lbl_8051E130@sda21(r2)
	bl       setParamMaxVolumeDistance__18JAIGlobalParameterFf
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
 * Address:	803354B0
 * Size:	000038
 */
SceneInfo::SceneInfo(void)
{
	/*
	lis      r4, __vt__Q26PSGame9SceneInfo@ha
	li       r0, 0
	addi     r4, r4, __vt__Q26PSGame9SceneInfo@l
	stw      r4, 0(r3)
	sth      r0, 4(r3)
	stb      r0, 6(r3)
	stb      r0, 7(r3)
	stw      r0, 8(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803354E8
 * Size:	000078
 */
void SceneInfo::setStageFlag(PSGame::SceneInfo::FlagDef, PSGame::SceneInfo::FlagBitShift)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x2C
	  li        r0, 0x1
	  lhz       r4, 0x4(r3)
	  slw       r0, r0, r5
	  andc      r0, r4, r0
	  sth       r0, 0x4(r3)
	  b         .loc_0x68

	.loc_0x2C:
	  cmpwi     r4, 0x1
	  bne-      .loc_0x4C
	  li        r0, 0x1
	  lhz       r4, 0x4(r3)
	  slw       r0, r0, r5
	  or        r0, r4, r0
	  sth       r0, 0x4(r3)
	  b         .loc_0x68

	.loc_0x4C:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x6E8
	  li        r4, 0x38A
	  subi      r5, r5, 0x54C
	  crclr     6, 0x6
	  bl        -0x30AF0C

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80335560
 * Size:	000010
 */
void SceneInfo::getFlag(const(PSGame::SceneInfo::FlagBitShift))
{
	/*
	lhz      r0, 4(r3)
	sraw     r0, r0, r4
	clrlwi   r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80335570
 * Size:	000074
 */
void SceneInfo::setStageCamera() const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	lbz      r31, 7(r3)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_803355BC

lbl_80335598:
	rlwinm   r0, r30, 2, 0x16, 0x1d
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	add      r6, r29, r0
	clrlwi   r7, r30, 0x18
	lwz      r4, 8(r6)
	lwz      r5, 0x10(r6)
	lwz      r6, 0x18(r6)
	bl       setCameraInfo__8JAIBasicFP3VecP3VecPA4_fUl
	addi     r30, r30, 1

lbl_803355BC:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r31
	blt      lbl_80335598
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
 * Address:	803355E4
 * Size:	00003C
 */
PikScene::PikScene((unsigned char))
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28PSSystem5SceneFUc
	lis      r4, __vt__Q26PSGame8PikScene@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q26PSGame8PikScene@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80335620
 * Size:	000060
 */
PikScene::~PikScene(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80335664
	lis      r5, __vt__Q26PSGame8PikScene@ha
	li       r4, 0
	addi     r0, r5, __vt__Q26PSGame8PikScene@l
	stw      r0, 0(r30)
	bl       __dt__Q28PSSystem5SceneFv
	extsh.   r0, r31
	ble      lbl_80335664
	mr       r3, r30
	bl       __dl__FPv

lbl_80335664:
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
 * Address:	80335680
 * Size:	0000A8
 */
void PikScene::getMiddleBossBgm(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	addi     r3, r3, 0x10
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	or.      r30, r3, r3
	bne      lbl_803356B0
	li       r3, 0
	b        lbl_80335710

lbl_803356B0:
	lwz      r31, 0x14(r30)
	lis      r3, lbl_8048FAC4@ha
	addi     r4, r3, lbl_8048FAC4@l
	mr       r3, r31
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_803356E4
	lis      r4, lbl_8048FAD0@ha
	mr       r3, r31
	addi     r4, r4, lbl_8048FAD0@l
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8033570C

lbl_803356E4:
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_8033570C
	mr       r3, r30
	b        lbl_80335710

lbl_8033570C:
	li       r3, 0

lbl_80335710:
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
 * Size:	00007C
 */
void PikScene::getJumpMainBgm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80335728
 * Size:	000378
 */
void PikSceneMgr::newAndSetGlobalScene(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	lis      r3, lbl_8048F918@ha
	stw      r29, 0x64(r1)
	addi     r31, r3, lbl_8048F918@l
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_8033576C
	addi     r3, r31, 0
	addi     r5, r31, 0x1e4
	li       r4, 0x3ea
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033576C:
	li       r6, 0
	lis      r3, __vt__Q26PSGame9SceneInfo@ha
	stb      r6, 0x2e(r1)
	addi     r7, r3, __vt__Q26PSGame9SceneInfo@l
	rlwinm   r0, r6, 0, 0x1f, 0x1d
	mr       r3, r30
	sth      r6, 0x2c(r1)
	addi     r5, r1, 0x28
	li       r4, 0
	stb      r6, 0x2f(r1)
	stw      r7, 0x28(r1)
	stw      r6, 0x30(r1)
	stw      r6, 0x38(r1)
	stw      r6, 0x40(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x3c(r1)
	stw      r6, 0x44(r1)
	stb      r6, 0x2e(r1)
	stb      r6, 0x2f(r1)
	sth      r0, 0x2c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r30)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_803357F0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x3f7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803357F0:
	lwz      r3, 4(r30)
	addi     r4, r30, 4
	bl       adaptTo__Q28PSSystem5SceneFPPQ28PSSystem5Scene
	lwz      r0, 4(r30)
	stw      r0, 8(r30)
	lwz      r0,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80335824
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335824:
	lwz      r0,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033584C
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80335848
	bl       __ct__Q28PSSystem14StreamDataListFv
	mr       r0, r3

lbl_80335848:
	stw      r0,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)

lbl_8033584C:
	lwz      r0,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033586C
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033586C:
	lwz      r0,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033588C
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033588C:
	lwz      r3,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
	addi     r4, r31, 0x20c
	li       r5, 1
	bl onlyLoad__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection
	clrlwi.  r0, r3, 0x18
	bne      lbl_803358B8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x400
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803358B8:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803358D8
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803358D8:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80335900
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803358FC
	bl       __ct__Q28PSSystem11SeqDataListFv
	mr       r0, r3

lbl_803358FC:
	stw      r0,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)

lbl_80335900:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80335920
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335920:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80335940
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335940:
	lwz      r3,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	addi     r4, r31, 0x228
	li       r5, 1
	bl onlyLoad__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection
	clrlwi.  r0, r3, 0x18
	bne      lbl_8033596C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x404
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033596C:
	lwz      r0, 0x1d0(r31)
	lwz      r5, 0x1c4(r31)
	stw      r0, 0x24(r1)
	lwz      r4, 0x1c8(r31)
	lbz      r0, 0x24(r1)
	lwz      r3, 0x1cc(r31)
	cmplwi   r0, 0x7f
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r3, 0x20(r1)
	ble      lbl_803359AC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x410
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803359AC:
	li       r3, 0x68
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_803359D4
	addi     r5, r1, 0x18
	addi     r4, r2, lbl_8051E134@sda21
	bl       __ct__Q28PSSystem7SeqBaseFPCcRCQ27JAInter9SoundInfo
	lis      r3, __vt__Q28PSSystem5SeSeq@ha
	addi     r0, r3, __vt__Q28PSSystem5SeSeq@l
	stw      r0, 0x10(r29)

lbl_803359D4:
	cmplwi   r29, 0
	bne      lbl_803359F0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x413
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803359F0:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r30)
	mr       r4, r29
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	lwz      r8, 0x1d4(r31)
	lis      r4, 0xC0011011@ha
	lwz      r7, 0x1d8(r31)
	mr       r3, r30
	lwz      r6, 0x1dc(r31)
	addi     r4, r4, 0xC0011011@l
	lwz      r0, 0x1e0(r31)
	addi     r5, r1, 8
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       newStreamBgm__Q26PSGame11PikSceneMgrFUlRQ27JAInter9SoundInfo
	or.      r29, r3, r3
	bne      lbl_80335A60
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x425
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335A60:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r30)
	mr       r4, r29
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	lwz      r0, 0x74(r1)
	lwz      r3, 4(r30)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80335AA0
 * Size:	0004AC
 */
void PikSceneMgr::newAndSetCurrentScene(PSGame::SceneInfo&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r27, r4
	lis      r4, lbl_8048F918@ha
	mr       r26, r3
	addi     r31, r4, lbl_8048F918@l
	lbz      r28, 6(r27)
	cmplwi   r28, 0
	bne      lbl_80335AE0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x445
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335AE0:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 0x15
	blt      lbl_80335B00
	addi     r3, r31, 0
	addi     r5, r31, 0x244
	li       r4, 0x446
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335B00:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_80335B20
	addi     r3, r31, 0x254
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335B20:
	lwz      r3, 4(r26)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80335B44
	addi     r3, r31, 0
	addi     r5, r31, 0x260
	li       r4, 0x447
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335B44:
	li       r28, 0
	b        lbl_80335B70

lbl_80335B4C:
	rlwinm   r0, r28, 2, 0x16, 0x1d
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	add      r6, r27, r0
	clrlwi   r7, r28, 0x18
	lwz      r4, 8(r6)
	lwz      r5, 0x10(r6)
	lwz      r6, 0x18(r6)
	bl       setCameraInfo__8JAIBasicFP3VecP3VecPA4_fUl
	addi     r28, r28, 1

lbl_80335B70:
	lbz      r0, 7(r27)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_80335B4C
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_80335BA0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x451
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335BA0:
	lwz      r3, 4(r26)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_80335BC4
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x452
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335BC4:
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0xff
	stb      r3, 8(r1)
	mr       r3, r26
	mr       r4, r27
	addi     r5, r1, 8
	stw      r0, sHeap__Q29PSAutoBgm12ConductorMgr@sda21(r13)
	bl       initMainBgm__Q26PSGame11PikSceneMgrFRQ26PSGame9SceneInfoPUc
	or.      r30, r3, r3
	bne      lbl_80335C00
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x46c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335C00:
	lbz      r3, 6(r27)
	li       r29, 0
	li       r28, 0
	cmplwi   r3, 6
	beq      lbl_80335C4C
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 7
	beq      lbl_80335C4C
	addi     r0, r3, -1
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 3
	ble      lbl_80335C4C
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80335C50

lbl_80335C4C:
	li       r29, 1

lbl_80335C50:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80335CC8
	lbz      r0, 6(r27)
	cmplwi   r0, 3
	bne      lbl_80335CC8
	lwz      r3, 0x44(r27)
	addis    r0, r3, 0x8b9b
	cmplwi   r0, 0x7374
	bne      lbl_80335C90
	li       r0, 0
	b        lbl_80335C9C

lbl_80335C90:
	lbz      r3, 0x47(r27)
	addi     r0, r3, -49
	clrlwi   r0, r0, 0x18

lbl_80335C9C:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 3
	bne      lbl_80335CC8
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80335CC8
	li       r29, 0

lbl_80335CC8:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80335CFC
	mr       r3, r26
	mr       r4, r27
	addi     r5, r1, 8
	bl       initBossBgm__Q26PSGame11PikSceneMgrFRQ26PSGame9SceneInfoPUc
	or.      r28, r3, r3
	bne      lbl_80335CFC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x48b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335CFC:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80335DF0
	li       r3, 0x4c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80335DE8
	lis      r5, __vt__Q26PSGame9SceneInfo@ha
	lis      r4, __vt__Q26PSGame13CaveFloorInfo@ha
	addi     r0, r5, __vt__Q26PSGame9SceneInfo@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q26PSGame13CaveFloorInfo@l
	lhz      r4, 4(r27)
	sth      r4, 4(r3)
	lbz      r4, 6(r27)
	stb      r4, 6(r3)
	lbz      r4, 7(r27)
	stb      r4, 7(r3)
	lwz      r5, 8(r27)
	lwz      r4, 0xc(r27)
	stw      r5, 8(r3)
	stw      r4, 0xc(r3)
	lwz      r5, 0x10(r27)
	lwz      r4, 0x14(r27)
	stw      r5, 0x10(r3)
	stw      r4, 0x14(r3)
	lwz      r5, 0x18(r27)
	lwz      r4, 0x1c(r27)
	stw      r5, 0x18(r3)
	stw      r4, 0x1c(r3)
	lfs      f0, 0x20(r27)
	stfs     f0, 0x20(r3)
	lfs      f0, 0x24(r27)
	stfs     f0, 0x24(r3)
	lfs      f0, 0x28(r27)
	stfs     f0, 0x28(r3)
	lfs      f0, 0x2c(r27)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x30(r27)
	stfs     f0, 0x30(r3)
	lfs      f0, 0x34(r27)
	stfs     f0, 0x34(r3)
	stw      r0, 0(r3)
	lwz      r0, 0x38(r27)
	stw      r0, 0x38(r3)
	lwz      r0, 0x3c(r27)
	stw      r0, 0x3c(r3)
	lbz      r0, 0x40(r27)
	stb      r0, 0x40(r3)
	lwz      r0, 0x44(r27)
	stw      r0, 0x44(r3)
	lbz      r0, 0x48(r27)
	stb      r0, 0x48(r3)
	lbz      r0, 0x49(r27)
	stb      r0, 0x49(r3)

lbl_80335DE8:
	mr       r5, r3
	b        lbl_80335E88

lbl_80335DF0:
	li       r3, 0x38
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80335E84
	lis      r4, __vt__Q26PSGame9SceneInfo@ha
	addi     r0, r4, __vt__Q26PSGame9SceneInfo@l
	stw      r0, 0(r3)
	lhz      r0, 4(r27)
	sth      r0, 4(r3)
	lbz      r0, 6(r27)
	stb      r0, 6(r3)
	lbz      r0, 7(r27)
	stb      r0, 7(r3)
	lwz      r4, 8(r27)
	lwz      r0, 0xc(r27)
	stw      r4, 8(r3)
	stw      r0, 0xc(r3)
	lwz      r4, 0x10(r27)
	lwz      r0, 0x14(r27)
	stw      r4, 0x10(r3)
	stw      r0, 0x14(r3)
	lwz      r4, 0x18(r27)
	lwz      r0, 0x1c(r27)
	stw      r4, 0x18(r3)
	stw      r0, 0x1c(r3)
	lfs      f0, 0x20(r27)
	stfs     f0, 0x20(r3)
	lfs      f0, 0x24(r27)
	stfs     f0, 0x24(r3)
	lfs      f0, 0x28(r27)
	stfs     f0, 0x28(r3)
	lfs      f0, 0x2c(r27)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x30(r27)
	stfs     f0, 0x30(r3)
	lfs      f0, 0x34(r27)
	stfs     f0, 0x34(r3)

lbl_80335E84:
	mr       r5, r3

lbl_80335E88:
	lwz      r12, 0(r26)
	mr       r3, r26
	lbz      r4, 8(r1)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 0
	mr       r25, r3
	bne      lbl_80335EC0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4a1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335EC0:
	mr       r3, r25
	mr       r4, r30
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	clrlwi.  r0, r29, 0x18
	beq      lbl_80335EFC
	cmplwi   r28, 0
	bne      lbl_80335EF0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4a7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335EF0:
	mr       r3, r25
	mr       r4, r28
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase

lbl_80335EFC:
	mr       r3, r26
	mr       r4, r27
	mr       r5, r25
	bl
initAdditionalBgm__Q26PSGame11PikSceneMgrFRQ26PSGame9SceneInfoPQ28PSSystem5Scene
	cmplwi   r25, 0
	bne      lbl_80335F28
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4be
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335F28:
	lwz      r3, 4(r26)
	mr       r4, r25
	bl       adaptChildScene__Q28PSSystem5SceneFPQ28PSSystem5Scene
	mr       r3, r25
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80335F4C
 * Size:	000098
 */
void PikSceneMgr::newBgmSeq(char const*, JAInter::SoundInfo&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r3, 0x6c
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80335F8C
	mr       r4, r29
	mr       r5, r30
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r31, r3

lbl_80335F8C:
	cmplwi   r31, 0
	bne      lbl_80335FB0
	lis      r3, lbl_8048F918@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048F918@l
	li       r4, 0x4c7
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80335FB0:
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
 * Address:	80335FE4
 * Size:	000088
 */
void PikSceneMgr::newStreamBgm(unsigned long, JAInter::SoundInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x74
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	stw      r0, 0(r5)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80336028
	mr       r4, r30
	mr       r5, r31
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r0, r3

lbl_80336028:
	cmplwi   r0, 0
	mr       r31, r0
	bne      lbl_80336050
	lis      r3, lbl_8048F918@ha
	lis      r5, lbl_8048F924@ha
	addi     r3, r3, lbl_8048F918@l
	li       r4, 0x4d2
	addi     r5, r5, lbl_8048F924@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336050:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033606C
 * Size:	000150
 */
void PikSceneMgr::initBossBgm(PSGame::SceneInfo&, unsigned char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_8048F918@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r4, lbl_8048F918@l
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r6, 0x284(r31)
	lwz      r5, 0x288(r31)
	lwz      r4, 0x28c(r31)
	lwz      r0, 0x290(r31)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803360F8
	mr       r3, r29
	addi     r4, r31, 0x1b8
	lwz      r12, 0(r29)
	addi     r5, r1, 8
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	li       r0, 0x23
	stb      r0, 0(r30)
	mr       r30, r3
	b        lbl_80336118

lbl_803360F8:
	mr       r3, r29
	addi     r4, r31, 0x1ac
	lwz      r12, 0(r29)
	addi     r5, r1, 8
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_80336118:
	cmplwi   r30, 0
	bne      lbl_80336134
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4f0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336134:
	lbz      r0, 0xb4(r30)
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_80336154
	lwz      r0, 0x70(r30)
	cmplwi   r0, 0
	beq      lbl_80336154
	li       r3, 1

lbl_80336154:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80336170
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E13C@sda21
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336170:
	lwz      r3, 0x70(r30)
	li       r0, 0x3c
	sth      r0, 0x3e(r3)
	lbz      r0, 0x14(r1)
	cmplwi   r0, 0x7f
	ble      lbl_8033619C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4f3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033619C:
	lwz      r0, 0x34(r1)
	mr       r3, r30
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
 * Address:	803361BC
 * Size:	000400
 */
void PikSceneMgr::initAdditionalBgm(PSGame::SceneInfo&, PSSystem::Scene*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, lbl_8048F918@ha
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	addi     r31, r6, lbl_8048F918@l
	mr       r29, r4
	mr       r27, r3
	mr       r30, r5
	lwz      r6, 0x294(r31)
	lwz      r4, 0x298(r31)
	lwz      r3, 0x29c(r31)
	lwz      r0, 0x2a0(r31)
	stw      r6, 8(r1)
	stw      r4, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)
	lbz      r0, 6(r29)
	cmpwi    r0, 8
	beq      lbl_80336228
	bge      lbl_8033621C
	cmpwi    r0, 6
	beq      lbl_80336400
	b        lbl_803364BC

lbl_8033621C:
	cmpwi    r0, 0x14
	beq      lbl_80336384
	b        lbl_803364BC

lbl_80336228:
	li       r0, 0
	li       r3, 0x74
	stw      r0, 8(r1)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80336254
	lis      r4, 0xC0011011@ha
	addi     r5, r1, 8
	addi     r4, r4, 0xC0011011@l
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r28, r3

lbl_80336254:
	cmplwi   r28, 0
	bne      lbl_80336270
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336270:
	cmplwi   r28, 0
	bne      lbl_8033628C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x50a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033628C:
	mr       r3, r30
	mr       r4, r28
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803362B8
	addi     r4, r31, 0x2a4
	addi     r5, r1, 8
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r28, r3

lbl_803362B8:
	cmplwi   r28, 0
	bne      lbl_803362D4
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803362D4:
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r28, 0
	bne      lbl_80336304
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x510
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336304:
	mr       r3, r30
	mr       r4, r28
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	li       r0, 0
	li       r3, 0x74
	stw      r0, 8(r1)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8033633C
	lis      r4, 0xC0011010@ha
	addi     r5, r1, 8
	addi     r4, r4, 0xC0011010@l
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r28, r3

lbl_8033633C:
	cmplwi   r28, 0
	bne      lbl_80336358
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336358:
	cmplwi   r28, 0
	bne      lbl_80336374
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x516
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336374:
	mr       r3, r30
	mr       r4, r28
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	b        lbl_803364BC

lbl_80336384:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_803363A4
	addi     r4, r31, 0x2b0
	addi     r5, r1, 8
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r28, r3

lbl_803363A4:
	cmplwi   r28, 0
	bne      lbl_803363C0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803363C0:
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r28, 0
	bne      lbl_803363F0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x526
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803363F0:
	mr       r3, r30
	mr       r4, r28
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	b        lbl_803364BC

lbl_80336400:
	li       r3, 4
	li       r4, 0x23
	li       r0, 0x1f00
	stb      r3, 0xd(r1)
	addi     r3, r30, 0x10
	stb      r4, 0x14(r1)
	stw      r0, 8(r1)
	lbz      r28, 0xc(r27)
	bl       getFirstSeq__Q28PSSystem6SeqMgrFv
	mr       r9, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	mr       r7, r28
	mr       r8, r29
	addi     r4, r31, 0x2c8
	lwz      r12, 0x1c(r12)
	addi     r5, r31, 0x2d8
	addi     r6, r1, 8
	lwz      r9, 0x6c(r9)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r30
	mr       r28, r0
	mr       r4, r28
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	bne      lbl_80336488
	addi     r3, r31, 0x254
	addi     r5, r31, 0xc
	li       r4, 0x4a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336488:
	lwz      r5, 8(r30)
	li       r0, 5
	addi     r3, r30, 0x10
	li       r4, 2
	stb      r0, 5(r5)
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	cmplw    r28, r3
	beq      lbl_803364BC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x53e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803364BC:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803365A8
	lbz      r0, 6(r29)
	cmplwi   r0, 3
	bne      lbl_803365A8
	lwz      r3, 0x44(r29)
	addis    r0, r3, 0x8b9b
	cmplwi   r0, 0x7374
	bne      lbl_803364FC
	li       r0, 0
	b        lbl_80336508

lbl_803364FC:
	lbz      r3, 0x47(r29)
	addi     r0, r3, -49
	clrlwi   r0, r0, 0x18

lbl_80336508:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 3
	bne      lbl_803365A8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803365A8
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80336550
	addi     r4, r31, 0x2e8
	addi     r5, r1, 8
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r28, r3

lbl_80336550:
	cmplwi   r28, 0
	bne      lbl_8033656C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033656C:
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r28, 0
	bne      lbl_8033659C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x549
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033659C:
	mr       r3, r30
	mr       r4, r28
	bl       appendSeq__Q28PSSystem5SceneFPQ28PSSystem7SeqBase

lbl_803365A8:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803365BC
 * Size:	000D24
 */
void PikSceneMgr::initMainBgm(PSGame::SceneInfo&, unsigned char*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stmw     r24, 0x50(r1)
	or.      r30, r5, r5
	lis      r5, lbl_8048F918@ha
	mr       r27, r3
	mr       r28, r4
	addi     r31, r5, lbl_8048F918@l
	bne      lbl_803365F8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x562
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803365F8:
	lbz      r29, 0xc(r27)
	li       r0, 1
	lwz      r3, 0x2fc(r31)
	cmplwi   r0, 5
	lwz      r5, 0x2f8(r31)
	li       r24, 0
	stw      r3, 0x3c(r1)
	lwz      r4, 0x300(r31)
	lwz      r3, 0x304(r31)
	stw      r5, 0x38(r1)
	stw      r4, 0x40(r1)
	stw      r3, 0x44(r1)
	stb      r0, 0x3d(r1)
	blt      lbl_80336644
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x571
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336644:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80336D38
	lbz      r0, 6(r28)
	cmpwi    r0, 7
	beq      lbl_803368A4
	bge      lbl_803368CC
	cmpwi    r0, 6
	bge      lbl_8033667C
	b        lbl_803368CC

lbl_8033667C:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	addi     r24, r31, 0x308
	cmplwi   r0, 0
	beq      lbl_803366A0
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x7e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803366A0:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033670C
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x28
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r25, r3, r3
	beq      lbl_80336708
	bl       __ct__Q28PSSystem12TextDataBaseFv
	lis      r3, "__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@ha
	addic.   r4, r25, 0x1c
	addi     r0, r3,
"__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@l stw      r0,
0x1c(r25) beq      lbl_803366E0 addi     r4, r4, -28

lbl_803366E0:
	lis      r3, __vt__Q26PSGame13ConductorList@ha
	stw      r4,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	addi     r4, r3, __vt__Q26PSGame13ConductorList@l
	li       r3, 0
	stw      r4, 0(r25)
	addi     r4, r4, 0x10
	li       r0, 0xff
	stw      r4, 0x1c(r25)
	stw      r3, 0x24(r25)
	stb      r0, 0x20(r25)

lbl_80336708:
	stw      r25,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)

lbl_8033670C:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033672C
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x81
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033672C:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8033674C
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033674C:
	lwz      r25,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13) mr
r4, r24 li       r5, 2 mr       r3, r25 bl
load__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection clrlwi. r0,
r3, 0x18 bne      lbl_8033677C addi     r3, r31, 0 addi     r5, r31, 0xc li r4,
0x589 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033677C:
	lbz      r0, sToolMode__Q26PSGame13ConductorList@sda21(r13)
	lbz      r26, 0x40(r28)
	cmplwi   r0, 0
	lbz      r24, 0x49(r28)
	beq      lbl_803367BC
	lbz      r0, 0x20(r25)
	cmplw    r24, r0
	bge      lbl_803367B0
	lwz      r3, 0x24(r25)
	rlwinm   r0, r24, 3, 0x15, 0x1c
	lbzx     r0, r3, r0
	cmplw    r26, r0
	blt      lbl_803367BC

lbl_803367B0:
	lwz      r3, 0x24(r25)
	lwz      r4, 4(r3)
	b        lbl_80336818

lbl_803367BC:
	lbz      r0, 0x20(r25)
	cmplw    r24, r0
	blt      lbl_803367DC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0xaf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803367DC:
	lwz      r3, 0x24(r25)
	rlwinm   r24, r24, 3, 0x15, 0x1c
	lbzx     r0, r3, r24
	cmplw    r26, r0
	blt      lbl_80336804
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0xb0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336804:
	lwz      r3, 0x24(r25)
	rlwinm   r0, r26, 5, 0x13, 0x1a
	add      r3, r3, r24
	lwz      r3, 4(r3)
	add      r4, r3, r0

lbl_80336818:
	stw      r4, 0x18(r1)
	mr       r3, r25
	addi     r5, r1, 0x1c
	addi     r6, r1, 0x14
	bl       getSeqAndWaveFromConductor__Q26PSGame13ConductorListFPCcPUcPPc
	lwz      r0, 0x1c(r1)
	mr       r3, r27
	lwz      r5, 0x14(r1)
	mr       r7, r29
	stw      r0, 0x34(r1)
	mr       r8, r28
	lwz      r4, 0x18(r1)
	addi     r6, r1, 0x38
	lbz      r0, 0x34(r1)
	li       r9, 0
	stw      r5, 0x2c(r1)
	stb      r0, 0(r30)
	lwz      r12, 0(r27)
	stw      r4, 0x30(r1)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13) mr
r24, r3 cmplwi   r0, 0 beq      lbl_80336898 mr       r3, r0 li       r4, 1 lwz
r12, 0(r3) lwz      r12, 8(r12) mtctr    r12 bctrl

lbl_80336898:
	li       r0, 0
	stw      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13) b
lbl_803368CC

lbl_803368A4:
	mr       r3, r27
	addi     r4, r31, 0x32c
	lwz      r12, 0(r27)
	addi     r5, r1, 0x38
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	li       r0, 6
	mr       r24, r3
	stb      r0, 0(r30)

lbl_803368CC:
	cmplwi   r24, 0
	bne      lbl_8033695C
	lwz      r0, 0x3c(r28)
	cmpwi    r0, 2
	beq      lbl_80336924
	bge      lbl_8033695C
	cmpwi    r0, 1
	bge      lbl_803368F0
	b        lbl_8033695C

lbl_803368F0:
	mr       r3, r27
	mr       r7, r29
	lwz      r12, 0(r27)
	mr       r8, r28
	addi     r4, r31, 0x33c
	addi     r5, r31, 0x80
	lwz      r12, 0x1c(r12)
	addi     r6, r1, 0x38
	li       r9, 0
	mtctr    r12
	bctrl
	mr       r24, r3
	b        lbl_8033695C

lbl_80336924:
	mr       r3, r27
	mr       r7, r29
	lwz      r12, 0(r27)
	mr       r8, r28
	addi     r4, r31, 0x350
	addi     r5, r31, 0xfc
	lwz      r12, 0x1c(r12)
	addi     r6, r1, 0x38
	li       r9, 0
	mtctr    r12
	bctrl
	li       r0, 0x1c
	mr       r24, r3
	stb      r0, 0(r30)

lbl_8033695C:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80336A44
	lbz      r0, 6(r28)
	cmplwi   r0, 3
	bne      lbl_80336A44
	lwz      r3, 0x44(r28)
	addis    r0, r3, 0x8b9b
	cmplwi   r0, 0x7374
	bne      lbl_8033699C
	li       r0, 0
	b        lbl_803369A8

lbl_8033699C:
	lbz      r3, 0x47(r28)
	addi     r0, r3, -49
	clrlwi   r0, r0, 0x18

lbl_803369A8:
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 3
	bne      lbl_80336A44
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80336A44
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_803369F0
	addi     r4, r31, 0x360
	addi     r5, r1, 0x38
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_803369F0:
	cmplwi   r24, 0
	bne      lbl_80336A0C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336A0C:
	mr       r3, r24
	lwz      r12, 0x10(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r24, 0
	bne      lbl_80336A3C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x61e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336A3C:
	li       r0, 0x30
	stb      r0, 0(r30)

lbl_80336A44:
	cmplwi   r24, 0
	bne      lbl_8033728C
	lwz      r0, 0x3c(r28)
	cmpwi    r0, 0
	beq      lbl_80336A6C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x626
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336A6C:
	lbz      r0, 6(r28)
	li       r25, 0
	cmplwi   r0, 0x14
	bgt      lbl_80336AB8
	lis      r3, lbl_804DA974@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804DA974@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80336A94

lbl_80336A94:
	addi     r25, r31, 0x370
	b        lbl_80336AB8
	.global  lbl_80336A9C

lbl_80336A9C:
	addi     r25, r31, 0x394
	b        lbl_80336AB8
	.global  lbl_80336AA4

lbl_80336AA4:
	addi     r25, r31, 0x3b4
	b        lbl_80336AB8
	.global  lbl_80336AAC

lbl_80336AAC:
	addi     r25, r31, 0x3d8
	b        lbl_80336AB8
	.global  lbl_80336AB4

lbl_80336AB4:
	addi     r25, r31, 0x3f8
	.global  lbl_80336AB8

lbl_80336AB8:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80336AD8
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x7e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336AD8:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80336B44
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x28
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_80336B40
	bl       __ct__Q28PSSystem12TextDataBaseFv
	lis      r3, "__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@ha
	addic.   r4, r24, 0x1c
	addi     r0, r3,
"__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@l stw      r0,
0x1c(r24) beq      lbl_80336B18 addi     r4, r4, -28

lbl_80336B18:
	lis      r3, __vt__Q26PSGame13ConductorList@ha
	stw      r4,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	addi     r4, r3, __vt__Q26PSGame13ConductorList@l
	li       r3, 0
	stw      r4, 0(r24)
	addi     r4, r4, 0x10
	li       r0, 0xff
	stw      r4, 0x1c(r24)
	stw      r3, 0x24(r24)
	stb      r0, 0x20(r24)

lbl_80336B40:
	stw      r24,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)

lbl_80336B44:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80336B64
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x81
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336B64:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80336B84
	addi     r3, r31, 0x178
	addi     r5, r31, 0xc
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336B84:
	lwz      r24,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13) mr
r4, r25 li       r5, 2 mr       r3, r24 bl
load__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection clrlwi. r0,
r3, 0x18 bne      lbl_80336BB4 addi     r3, r31, 0 addi     r5, r31, 0xc li r4,
0x641 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336BB4:
	lwz      r4, 0x44(r28)
	addi     r3, r31, 0x41c
	addis    r0, r4, 0x8b9b
	cmplwi   r0, 0x7374
	bne      lbl_80336BD0
	li       r0, 0
	b        lbl_80336BDC

lbl_80336BD0:
	lbz      r4, 0x47(r28)
	addi     r0, r4, -49
	clrlwi   r0, r0, 0x18

lbl_80336BDC:
	clrlwi   r4, r0, 0x18
	crclr    6
	bl       OSReport
	lwz      r3, 0x44(r28)
	lbz      r26, 0x40(r28)
	addis    r0, r3, 0x8b9b
	cmplwi   r0, 0x7374
	bne      lbl_80336C04
	li       r25, 0
	b        lbl_80336C10

lbl_80336C04:
	lbz      r3, 0x47(r28)
	addi     r0, r3, -49
	clrlwi   r25, r0, 0x18

lbl_80336C10:
	lbz      r0, sToolMode__Q26PSGame13ConductorList@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80336C4C
	lbz      r0, 0x20(r24)
	clrlwi   r3, r25, 0x18
	cmplw    r3, r0
	bge      lbl_80336C40
	lwz      r3, 0x24(r24)
	rlwinm   r0, r25, 3, 0x15, 0x1c
	lbzx     r0, r3, r0
	cmplw    r26, r0
	blt      lbl_80336C4C

lbl_80336C40:
	lwz      r3, 0x24(r24)
	lwz      r4, 4(r3)
	b        lbl_80336CAC

lbl_80336C4C:
	lbz      r0, 0x20(r24)
	clrlwi   r3, r25, 0x18
	cmplw    r3, r0
	blt      lbl_80336C70
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0xaf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336C70:
	lwz      r3, 0x24(r24)
	rlwinm   r25, r25, 3, 0x15, 0x1c
	lbzx     r0, r3, r25
	cmplw    r26, r0
	blt      lbl_80336C98
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0xb0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336C98:
	lwz      r3, 0x24(r24)
	rlwinm   r0, r26, 5, 0x13, 0x1a
	add      r3, r3, r25
	lwz      r3, 4(r3)
	add      r4, r3, r0

lbl_80336CAC:
	stw      r4, 0xc(r1)
	mr       r3, r24
	addi     r5, r1, 0x10
	addi     r6, r1, 8
	bl       getSeqAndWaveFromConductor__Q26PSGame13ConductorListFPCcPUcPPc
	lwz      r0, 0x10(r1)
	mr       r3, r27
	lwz      r5, 8(r1)
	mr       r7, r29
	stw      r0, 0x28(r1)
	mr       r8, r28
	lwz      r4, 0xc(r1)
	addi     r6, r1, 0x38
	lbz      r0, 0x28(r1)
	li       r9, 0
	stw      r5, 0x20(r1)
	stb      r0, 0(r30)
	lwz      r12, 0(r27)
	stw      r4, 0x24(r1)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13) mr
r24, r3 cmplwi   r0, 0 beq      lbl_80336D2C mr       r3, r0 li       r4, 1 lwz
r12, 0(r3) lwz      r12, 8(r12) mtctr    r12 bctrl

lbl_80336D2C:
	li       r0, 0
	stw      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13) b
lbl_8033728C

lbl_80336D38:
	lbz      r0, 6(r28)
	cmplwi   r0, 0x14
	bgt      lbl_80337278
	lis      r3, lbl_804DA920@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804DA920@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80336D5C

lbl_80336D5C:
	mr       r3, r27
	addi     r4, r31, 0x428
	lwz      r12, 0(r27)
	addi     r5, r1, 0x38
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0xf
	mr       r24, r3
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_80336D88

lbl_80336D88:
	mr       r3, r27
	addi     r4, r31, 0x438
	lwz      r12, 0(r27)
	addi     r5, r1, 0x38
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	mr       r24, r3
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_80336DB4

lbl_80336DB4:
	mr       r3, r27
	addi     r4, r31, 0x444
	lwz      r12, 0(r27)
	addi     r5, r1, 0x38
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	or.      r24, r3, r3
	stb      r0, 0(r30)
	bne      lbl_80336DF4
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x668
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336DF4:
	lbz      r0, 0xb4(r24)
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_80336E14
	lwz      r0, 0x70(r24)
	cmplwi   r0, 0
	beq      lbl_80336E14
	li       r3, 1

lbl_80336E14:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80336E30
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E13C@sda21
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336E30:
	lwz      r3, 0x70(r24)
	li       r0, 0x1e
	sth      r0, 0x3e(r3)
	b        lbl_8033728C
	.global  lbl_80336E40

lbl_80336E40:
	mr       r3, r27
	addi     r4, r31, 0x454
	lwz      r12, 0(r27)
	addi     r5, r1, 0x38
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 4
	or.      r24, r3, r3
	stb      r0, 0(r30)
	bne      lbl_80336E80
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x672
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336E80:
	lbz      r0, 0xb4(r24)
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_80336EA0
	lwz      r0, 0x70(r24)
	cmplwi   r0, 0
	beq      lbl_80336EA0
	li       r3, 1

lbl_80336EA0:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80336EBC
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E13C@sda21
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336EBC:
	lwz      r3, 0x70(r24)
	li       r0, 0x1e
	sth      r0, 0x3e(r3)
	b        lbl_8033728C
	.global  lbl_80336ECC

lbl_80336ECC:
	li       r0, 0
	li       r3, 0x74
	stw      r0, 0x38(r1)
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80336EF8
	lis      r4, 0xC0011000@ha
	addi     r5, r1, 0x38
	addi     r4, r4, 0xC0011000@l
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80336EF8:
	cmplwi   r24, 0
	bne      lbl_80336F14
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80336F14:
	li       r0, 0x15
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_80336F20

lbl_80336F20:
	li       r0, 0
	li       r3, 0x74
	stw      r0, 0x38(r1)
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80336F4C
	lis      r4, 0xC0011013@ha
	addi     r5, r1, 0x38
	addi     r4, r4, 0xC0011013@l
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80336F4C:
	cmplwi   r24, 0
	bne      lbl_8033728C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8033728C
	.global  lbl_80336F6C

lbl_80336F6C:
	li       r0, 0
	li       r3, 0x74
	stw      r0, 0x38(r1)
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80336F98
	lis      r4, 0xC0011014@ha
	addi     r5, r1, 0x38
	addi     r4, r4, 0xC0011014@l
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80336F98:
	cmplwi   r24, 0
	bne      lbl_8033728C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8033728C
	.global  lbl_80336FB8

lbl_80336FB8:
	li       r0, 0
	li       r3, 0x74
	stw      r0, 0x38(r1)
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80336FE4
	lis      r4, 0xC001101E@ha
	addi     r5, r1, 0x38
	addi     r4, r4, 0xC001101E@l
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80336FE4:
	cmplwi   r24, 0
	bne      lbl_8033728C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8033728C
	.global  lbl_80337004

lbl_80337004:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80337024
	addi     r4, r31, 0x460
	addi     r5, r1, 0x38
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80337024:
	cmplwi   r24, 0
	bne      lbl_80337040
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337040:
	mr       r3, r24
	lwz      r12, 0x10(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0x10
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_80337060

lbl_80337060:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80337080
	addi     r4, r31, 0x470
	addi     r5, r1, 0x38
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80337080:
	cmplwi   r24, 0
	bne      lbl_8033709C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033709C:
	mr       r3, r24
	lwz      r12, 0x10(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0x10
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_803370BC

lbl_803370BC:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_803370DC
	addi     r4, r31, 0x484
	addi     r5, r1, 0x38
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_803370DC:
	cmplwi   r24, 0
	bne      lbl_803370F8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803370F8:
	mr       r3, r24
	lwz      r12, 0x10(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0x14
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_80337118

lbl_80337118:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80337138
	addi     r4, r31, 0x490
	addi     r5, r1, 0x38
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80337138:
	cmplwi   r24, 0
	bne      lbl_80337154
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337154:
	mr       r3, r24
	lwz      r12, 0x10(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0x24
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_80337174

lbl_80337174:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80337194
	addi     r4, r31, 0x49c
	addi     r5, r1, 0x38
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80337194:
	cmplwi   r24, 0
	bne      lbl_803371B0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803371B0:
	mr       r3, r24
	lwz      r12, 0x10(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0x13
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_803371D0

lbl_803371D0:
	li       r3, 0x6c
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_803371F0
	addi     r4, r31, 0x4ac
	addi     r5, r1, 0x38
	bl       __ct__Q28PSSystem6BgmSeqFPCcRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_803371F0:
	cmplwi   r24, 0
	bne      lbl_8033720C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033720C:
	mr       r3, r24
	lwz      r12, 0x10(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0x13
	stb      r0, 0(r30)
	b        lbl_8033728C
	.global  lbl_8033722C

lbl_8033722C:
	li       r0, 0
	li       r3, 0x74
	stw      r0, 0x38(r1)
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_80337258
	lis      r4, 0xC001100F@ha
	addi     r5, r1, 0x38
	addi     r4, r4, 0xC001100F@l
	bl       __ct__Q28PSSystem9StreamBgmFUlRCQ27JAInter9SoundInfo
	mr       r24, r3

lbl_80337258:
	cmplwi   r24, 0
	bne      lbl_8033728C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4d2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8033728C
	.global  lbl_80337278

lbl_80337278:
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x6d1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033728C:
	cmplwi   r24, 0
	bne      lbl_803372A8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x6d5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803372A8:
	lbz      r0, 0x44(r1)
	cmplwi   r0, 0x7f
	ble      lbl_803372C8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x6d6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803372C8:
	mr       r3, r24
	lmw      r24, 0x50(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A8
 */
void ConductorSelector::getConductorFile(char const*, PSGame::CaveFloorInfo&, unsigned char*, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803372E0
 * Size:	00094C
 */
void seqCpuSync(JASTrack*, unsigned short)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8048F918@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	clrlwi   r30, r4, 0x10
	cmpwi    r30, 0x3001
	mr       r26, r4
	mr       r28, r3
	addi     r31, r5, lbl_8048F918@l
	beq      lbl_803373C0
	bge      lbl_80337334
	cmpwi    r30, 1
	beq      lbl_80337660
	bge      lbl_80337328
	cmpwi    r30, 0
	bge      lbl_80337528
	b        lbl_80337668

lbl_80337328:
	cmpwi    r30, 0x3000
	bge      lbl_80337350
	b        lbl_80337668

lbl_80337334:
	cmpwi    r30, 0x5000
	beq      lbl_80337518
	bge      lbl_80337668
	cmpwi    r30, 0x3003
	beq      lbl_803374A4
	bge      lbl_80337668
	b        lbl_80337430

lbl_80337350:
	lwz      r0, sRappa__Q26PSGame5Rappa@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337370
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337370:
	lwz      r0, sRappa__Q26PSGame5Rappa@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337390
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x753
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337390:
	lwz      r0, sRappa__Q26PSGame5Rappa@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803373B0
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803373B0:
	lwz      r3, sRappa__Q26PSGame5Rappa@sda21(r13)
	mr       r4, r28
	bl       syncCpu_TblNo__Q26PSGame5RappaFP8JASTrack
	b        lbl_80337C18

lbl_803373C0:
	lwz      r0, sRappa__Q26PSGame5Rappa@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803373E0
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803373E0:
	lwz      r0, sRappa__Q26PSGame5Rappa@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337400
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x757
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337400:
	lwz      r0, sRappa__Q26PSGame5Rappa@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337420
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337420:
	lwz      r3, sRappa__Q26PSGame5Rappa@sda21(r13)
	mr       r4, r28
	bl       syncCpu_WaitChk__Q26PSGame5RappaFP8JASTrack
	b        lbl_80337C18

lbl_80337430:
	addi     r27, r13, sRappa__Q26PSGame5Rappa@sda21
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80337454
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337454:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80337474
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x75b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337474:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80337494
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337494:
	lwz      r3, 4(r27)
	mr       r4, r28
	bl       syncCpu_TblNo__Q26PSGame5RappaFP8JASTrack
	b        lbl_80337C18

lbl_803374A4:
	addi     r27, r13, sRappa__Q26PSGame5Rappa@sda21
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_803374C8
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803374C8:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_803374E8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x75f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803374E8:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80337508
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E144@sda21
	li       r4, 0x1c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337508:
	lwz      r3, 4(r27)
	mr       r4, r28
	bl       syncCpu_WaitChk__Q26PSGame5RappaFP8JASTrack
	b        lbl_80337C18

lbl_80337518:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi   r3, r0, 0x1f
	b        lbl_80337C18

lbl_80337528:
	clrlwi   r30, r30, 0x1f
	li       r25, 0
	li       r29, 0
	b        lbl_8033764C

lbl_80337538:
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80337648
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, 0x48(r3)
	mr       r3, r29
	addi     r27, r4, 0x30c
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r3, 0x48(r3)
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_80337580
	lwz      r3, 0x2f8(r28)
	lwz      r26, 0x2f8(r3)
	b        lbl_80337584

lbl_80337580:
	lwz      r26, 0x2f8(r28)

lbl_80337584:
	cmplw    r27, r26
	bne      lbl_80337648
	lwz      r3, 0x348(r28)
	bl       routeToTrack__7JAInterFUl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	mr       r25, r3
	cmplwi   r0, 0
	bne      lbl_803375B8
	addi     r3, r31, 0x190
	addi     r5, r31, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803375B8:
	lwz      r27, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r27, 0
	bne      lbl_803375D8
	addi     r3, r31, 0x190
	addi     r5, r31, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803375D8:
	mr       r3, r27
	mr       r4, r28
	bl       findSeq__Q28PSSystem8SceneMgrFP8JASTrack
	or.      r27, r3, r3
	bne      lbl_80337600
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x783
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337600:
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r0, 0x18(r27)
	mr       r4, r26
	mr       r5, r25
	mr       r7, r30
	rlwinm   r6, r0, 0x18, 0x10, 0x1f
	bl
outerInit__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataP8JASTrackUlUsUc
	mr       r3, r29
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	li       r0, 1
	lwz      r4, 4(r3)
	slw      r0, r0, r25
	li       r25, 0
	or       r0, r4, r0
	stw      r0, 4(r3)
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	mr       r29, r3

lbl_80337648:
	addi     r29, r29, 1

lbl_8033764C:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r29, r3
	blt      lbl_80337538
	mr       r3, r25
	b        lbl_80337C18

lbl_80337660:
	bl       setParameterSeqSync__8JAIBasicFP8JASTrackUs
	b        lbl_80337C18

lbl_80337668:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337688
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x79c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337688:
	lwz      r27, 0x348(r28)
	mr       r25, r28
	b        lbl_80337698

lbl_80337694:
	mr       r25, r0

lbl_80337698:
	lwz      r0, 0x2f8(r25)
	cmplwi   r0, 0
	bne      lbl_80337694
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	mr       r4, r25
	bl       getPlayingSeq__Q28PSSystem8SceneMgrFP8JASTrack
	or.      r29, r3, r3
	bne      lbl_803376CC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x7a5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803376CC:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_80337780
	cmpwi    r30, 0x900
	beq      lbl_80337750
	bge      lbl_80337724
	cmpwi    r30, 0x600
	beq      lbl_80337770
	bge      lbl_80337718
	cmpwi    r30, 0x300
	beq      lbl_80337768
	b        lbl_80337778

lbl_80337718:
	cmpwi    r30, 0x800
	beq      lbl_80337770
	b        lbl_80337778

lbl_80337724:
	cmpwi    r30, 0xd00
	beq      lbl_80337760
	bge      lbl_8033773C
	cmpwi    r30, 0xc00
	beq      lbl_80337758
	b        lbl_80337778

lbl_8033773C:
	cmpwi    r30, 0x2e00
	beq      lbl_80337748
	b        lbl_80337778

lbl_80337748:
	li       r3, 0x1e
	b        lbl_80337C18

lbl_80337750:
	li       r3, 1
	b        lbl_80337C18

lbl_80337758:
	li       r3, 4
	b        lbl_80337C18

lbl_80337760:
	li       r3, 1
	b        lbl_80337C18

lbl_80337768:
	li       r3, 0
	b        lbl_80337C18

lbl_80337770:
	li       r3, 0xa
	b        lbl_80337C18

lbl_80337778:
	li       r3, 0
	b        lbl_80337C18

lbl_80337780:
	cmpwi    r30, 0xd00
	beq      lbl_8033791C
	bge      lbl_803377BC
	cmpwi    r30, 0xb00
	beq      lbl_80337960
	bge      lbl_803377B0
	cmpwi    r30, 0xa00
	beq      lbl_80337888
	bge      lbl_8033799C
	cmpwi    r30, 0x900
	beq      lbl_80337850
	b        lbl_8033799C

lbl_803377B0:
	cmpwi    r30, 0xc00
	beq      lbl_803378CC
	b        lbl_8033799C

lbl_803377BC:
	cmpwi    r30, 0x1f00
	beq      lbl_80337800
	bge      lbl_803377D4
	cmpwi    r30, 0x1e00
	beq      lbl_803377E0
	b        lbl_8033799C

lbl_803377D4:
	cmpwi    r30, 0x2e00
	beq      lbl_80337830
	b        lbl_8033799C

lbl_803377E0:
	mr       r3, r28
	li       r4, 0x12
	bl       getObject__8PSSystemFP8JASTrackUc
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80337C18

lbl_80337800:
	cmplwi   r0, 0
	bne      lbl_80337810
	li       r3, 0
	b        lbl_80337C18

lbl_80337810:
	mr       r3, r28
	li       r4, 0x12
	bl       getObject__8PSSystemFP8JASTrackUc
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80337C18

lbl_80337830:
	mr       r3, r28
	li       r4, 0x12
	bl       getObject__8PSSystemFP8JASTrackUc
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80337C18

lbl_80337850:
	mr       r3, r28
	li       r4, 0x14
	bl       getObject__8PSSystemFP8JASTrackUc
	or.      r25, r3, r3
	bne      lbl_80337878
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x7ec
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337878:
	mr       r3, r25
	mr       r4, r28
	bl       cycleLoop__Q29PSAutoBgm6ModuleFP8JASTrack
	b        lbl_80337C18

lbl_80337888:
	mr       r3, r28
	li       r4, 0x14
	bl       getObject__8PSSystemFP8JASTrackUc
	or.      r29, r3, r3
	bne      lbl_803378B0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x7f4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803378B0:
	lbz      r0, 0x2c0(r29)
	mr       r4, r28
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x2b8(r3)
	bl       cycleTop__Q29PSAutoBgm9CycleBaseFP8JASTrack
	b        lbl_80337C18

lbl_803378CC:
	mr       r3, r28
	li       r4, 0x14
	bl       getObject__8PSSystemFP8JASTrackUc
	or.      r29, r3, r3
	bne      lbl_803378F4
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x7fb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803378F4:
	lbz      r0, 0x2c0(r29)
	mr       r4, r28
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x2b8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80337C18

lbl_8033791C:
	mr       r3, r28
	li       r4, 0x14
	bl       getObject__8PSSystemFP8JASTrackUc
	or.      r29, r3, r3
	bne      lbl_80337944
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x801
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337944:
	lbz      r0, 0x2c0(r29)
	mr       r4, r28
	slwi     r0, r0, 2
	add      r3, r29, r0
	lwz      r3, 0x2b8(r3)
	bl       checkCloser__Q29PSAutoBgm9CycleBaseFP8JASTrack
	b        lbl_80337C18

lbl_80337960:
	mr       r3, r28
	li       r4, 0x14
	bl       getObject__8PSSystemFP8JASTrackUc
	or.      r28, r3, r3
	bne      lbl_80337988
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x807
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337988:
	lis      r4, 0x0000FFFF@ha
	li       r3, 0
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x2b6(r28)
	b        lbl_80337C18

lbl_8033799C:
	cmplwi   r29, 0
	bne      lbl_803379B4
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	mr       r4, r28
	bl       findSeq__Q28PSSystem8SceneMgrFP8JASTrack
	mr       r29, r3

lbl_803379B4:
	cmpwi    r30, 0xe00
	beq      lbl_80337AA0
	bge      lbl_803379E4
	cmpwi    r30, 0x600
	beq      lbl_80337BD8
	bge      lbl_803379D8
	cmpwi    r30, 0x300
	beq      lbl_80337BD8
	b        lbl_80337C14

lbl_803379D8:
	cmpwi    r30, 0x800
	beq      lbl_80337BD8
	b        lbl_80337C14

lbl_803379E4:
	cmpwi    r30, 0x4000
	beq      lbl_80337A08
	bge      lbl_803379FC
	cmpwi    r30, 0xf00
	beq      lbl_80337B38
	b        lbl_80337C14

lbl_803379FC:
	cmpwi    r30, 0x4002
	bge      lbl_80337C14
	b        lbl_80337A54

lbl_80337A08:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80337A3C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x825
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337A3C:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	b        lbl_80337C18

lbl_80337A54:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80337A88
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x82f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337A88:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	b        lbl_80337C18

lbl_80337AA0:
	mr       r3, r29
	li       r30, 0
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	beq      lbl_80337B04
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80337B04
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_80337B08

lbl_80337B04:
	li       r30, 1

lbl_80337B08:
	clrlwi.  r0, r30, 0x18
	bne      lbl_80337B24
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x83b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337B24:
	mr       r3, r29
	mr       r4, r28
	bl       initRootTrack_onPlaying__Q28PSSystem11DirectedBgmFP8JASTrack
	li       r3, 0
	b        lbl_80337C18

lbl_80337B38:
	mr       r3, r29
	li       r30, 0
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	beq      lbl_80337B9C
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80337B9C
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_80337BA0

lbl_80337B9C:
	li       r30, 1

lbl_80337BA0:
	clrlwi.  r0, r30, 0x18
	bne      lbl_80337BBC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x845
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337BBC:
	lwz      r0, 0x348(r28)
	mr       r3, r29
	mr       r4, r28
	clrlwi   r5, r0, 0x1c
	bl       initChildTrack_onPlaying__Q28PSSystem11DirectedBgmFP8JASTrackUc
	li       r3, 0
	b        lbl_80337C18

lbl_80337BD8:
	lwz      r29, 0x308(r29)
	cmplwi   r29, 0
	bne      lbl_80337BF8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x850
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337BF8:
	mr       r3, r29
	mr       r4, r28
	mr       r5, r26
	mr       r6, r27
	mr       r7, r25
	bl       seqCpuSync_AutoBgm__Q29PSAutoBgm9ConductorFP8JASTrackUsUlP8JASTrack
	b        lbl_80337C18

lbl_80337C14:
	li       r3, 0

lbl_80337C18:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace PSGame

/*
 * --INFO--
 * Address:	80337C2C
 * Size:	00007C
 */
void PSPlayerChangeToOrimer()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       PSGetDirectedMainBgm__Fv
	or.      r31, r3, r3
	beq      lbl_80337C94
	lbz      r0, 0xb4(r31)
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_80337C68
	lwz      r0, 0x70(r31)
	cmplwi   r0, 0
	beq      lbl_80337C68
	li       r3, 1

lbl_80337C68:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80337C88
	lis      r4, lbl_8048F924@ha
	addi     r3, r2, lbl_8051E13C@sda21
	addi     r5, r4, lbl_8048F924@l
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337C88:
	lwz      r3, 0x70(r31)
	li       r0, 0
	stw      r0, 0x38(r3)

lbl_80337C94:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80337CA8
 * Size:	000124
 */
void PSGetDirectedMainBgm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8048F918@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8048F918@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337CE4
	addi     r3, r31, 0x190
	addi     r5, r31, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337CE4:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80337D04
	addi     r3, r31, 0x190
	addi     r5, r31, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337D04:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80337D24
	addi     r3, r31, 0x254
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337D24:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_80337D3C
	li       r3, 0
	b        lbl_80337DB4

lbl_80337D3C:
	addi     r3, r3, 0x10
	bl       getFirstSeq__Q28PSSystem6SeqMgrFv
	or.      r30, r3, r3
	beq      lbl_80337DB0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	beq      lbl_80337DA8
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_80337DA8
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_80337DB0

lbl_80337DA8:
	mr       r3, r30
	b        lbl_80337DB4

lbl_80337DB0:
	li       r3, 0

lbl_80337DB4:
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
 * Address:	80337DCC
 * Size:	000170
 */
void PSPlayerChangeToLugie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8048F918@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8048F918@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337E08
	addi     r3, r31, 0x190
	addi     r5, r31, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337E08:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80337E28
	addi     r3, r31, 0x190
	addi     r5, r31, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337E28:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80337E48
	addi     r3, r31, 0x254
	addi     r5, r31, 0xc
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337E48:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_80337E60
	li       r30, 0
	b        lbl_80337ED4

lbl_80337E60:
	addi     r3, r3, 0x10
	bl       getFirstSeq__Q28PSSystem6SeqMgrFv
	or.      r30, r3, r3
	beq      lbl_80337ED0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	beq      lbl_80337ED4
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_80337ED4
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_80337ED0
	b        lbl_80337ED4

lbl_80337ED0:
	li       r30, 0

lbl_80337ED4:
	cmplwi   r30, 0
	beq      lbl_80337F24
	lbz      r0, 0xb4(r30)
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_80337EFC
	lwz      r0, 0x70(r30)
	cmplwi   r0, 0
	beq      lbl_80337EFC
	li       r3, 1

lbl_80337EFC:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80337F18
	addi     r5, r31, 0xc
	addi     r3, r2, lbl_8051E13C@sda21
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337F18:
	lwz      r3, 0x70(r30)
	li       r0, 1
	stw      r0, 0x38(r3)

lbl_80337F24:
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
 * Address:	80337F3C
 * Size:	000170
 */
void PSGetDirectedMainBgmA()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_8048F918@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	addi     r30, r3, lbl_8048F918@l
	stw      r29, 0x14(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80337F7C
	addi     r3, r30, 0x190
	addi     r5, r30, 0xc
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337F7C:
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_80337F9C
	addi     r3, r30, 0x190
	addi     r5, r30, 0xc
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337F9C:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_80337FBC
	addi     r3, r30, 0x254
	addi     r5, r30, 0xc
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337FBC:
	lwz      r3, 4(r31)
	lwz      r31, 4(r3)
	cmplwi   r31, 0
	bne      lbl_80337FE0
	addi     r3, r30, 0x254
	addi     r5, r30, 0x4ec
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80337FE0:
	addi     r3, r31, 0x10
	bl       getFirstSeqA__Q28PSSystem6SeqMgrFv
	or.      r29, r3, r3
	beq      lbl_80338078
	lwz      r12, 0x10(r3)
	li       r31, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	beq      lbl_80338050
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_80338050
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_80338054

lbl_80338050:
	li       r31, 1

lbl_80338054:
	clrlwi.  r0, r31, 0x18
	bne      lbl_80338070
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x8c1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80338070:
	mr       r3, r29
	b        lbl_80338090

lbl_80338078:
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x8c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80338090:
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
 * Size:	00000C
 */
void PSSetBgmSelectAsToolMode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803380AC
 * Size:	000050
 */
void __dt__Q28PSSystem39SingletonBase<PSGame::ConductorList> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_803380E4
	lis      r5, "__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@ha
	extsh.   r0, r4
	addi     r4, r5,
"__vt__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@l li       r0, 0
	stw      r4, 0(r31)
	stw      r0,
"sInstance__Q28PSSystem39SingletonBase<Q26PSGame13ConductorList>"@sda21(r13) ble
lbl_803380E4 bl       __dl__FPv

lbl_803380E4:
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
 * Address:	803380FC
 * Size:	000050
 */
void __dt__Q28PSSystem49SingletonBase<PSGame::SoundTable::CategoryMgr> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80338134
	lis      r5,
"__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@ha extsh.
r0, r4 addi     r4, r5,
"__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@l li r0,
0 stw      r4, 0(r31) stw      r0,
"sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)
	ble      lbl_80338134
	bl       __dl__FPv

lbl_80338134:
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
 * Address:	8033814C
 * Size:	000098
 */
void newInstance__Q28PSSystem49SingletonBase<PSGame::SoundTable::CategoryMgr> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6E3C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x570
	  li        r4, 0x76
	  subi      r5, r5, 0x6DC
	  crclr     6, 0x6
	  bl        -0x30DB3C

	.loc_0x34:
	  lwz       r0, -0x6E3C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  li        r3, 0x1C
	  bl        -0x3142EC
	  mr.       r0, r3
	  beq-      .loc_0x58
	  bl        -0x38A4
	  mr        r0, r3

	.loc_0x58:
	  stw       r0, -0x6E3C(r13)

	.loc_0x5C:
	  lwz       r0, -0x6E3C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x570
	  li        r4, 0x79
	  subi      r5, r5, 0x6DC
	  crclr     6, 0x6
	  bl        -0x30DB8C

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x6E3C(r13)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803381E4
 * Size:	000008
 */
@28 @PSGame::ConductorList::~ConductorList(void)
{
	/*
	addi     r3, r3, -28
	b        __dt__Q26PSGame13ConductorListFv
	*/
}

namespace PSGame {

/*
 * --INFO--
 * Address:	803381EC
 * Size:	000008
 */
bool SceneInfo::isCaveFloor(void) { return false; }

/*
 * --INFO--
 * Address:	803381F4
 * Size:	000008
 */
u32 PikSceneMgr::curSceneIsBigBossFloor(void) { return 0x0; }

} // namespace PSGame

namespace PSSystem {

/*
 * --INFO--
 * Address:	803381FC
 * Size:	000038
 */
void SceneMgr::exec(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80338224
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80338224:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80338234
 * Size:	000004
 */
void Scene::init(void) { }

/*
 * --INFO--
 * Address:	80338238
 * Size:	000050
 */
PSAutoBgm::ConductorArcMgr::~ConductorArcMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80338270
	lis      r5, __vt__Q29PSAutoBgm15ConductorArcMgr@ha
	extsh.   r0, r4
	addi     r4, r5, __vt__Q29PSAutoBgm15ConductorArcMgr@l
	li       r0, 0
	stw      r4, 0(r31)
	stw      r0, sInstance__Q29PSAutoBgm15ConductorArcMgr@sda21(r13)
	ble      lbl_80338270
	bl       __dl__FPv

lbl_80338270:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace PSGame {

/*
 * --INFO--
 * Address:	80338288
 * Size:	000064
 */
SoundTable::CategoryMgr::~CategoryMgr(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
or.      r31, r3, r3
beq      lbl_803382D4
lis      r3, __vt__Q36PSGame10SoundTable11CategoryMgr@ha
addi     r0, r3, __vt__Q36PSGame10SoundTable11CategoryMgr@l
stw      r0, 0(r31)
beq      lbl_803382C4
lis      r3,
"__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@ha li r0,
0 addi     r3, r3,
"__vt__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@l stw r3,
0(r31) stw      r0,
"sInstance__Q28PSSystem49SingletonBase<Q36PSGame10SoundTable11CategoryMgr>"@sda21(r13)

lbl_803382C4:
extsh.   r0, r4
ble      lbl_803382D4
mr       r3, r31
bl       __dl__FPv

lbl_803382D4:
lwz      r0, 0x14(r1)
mr       r3, r31
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace PSGame

} // namespace PSSystem

/*
 * --INFO--
 * Address:	803382EC
 * Size:	000080
 */
void __dt__Q28PSSystem24ArcMgr<PSGame::BASARC> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80338350
	lis      r4, "__vt__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@ha
	lis      r3, lbl_8048FA6C@ha
	addi     r0, r4, "__vt__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@l
	lis      r4, lbl_8048F924@ha
	stw      r0, 0(r30)
	addi     r5, r4, lbl_8048F924@l
	addi     r3, r3, lbl_8048FA6C@l
	li       r4, 0x4d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80338350
	mr       r3, r30
	bl       __dl__FPv

lbl_80338350:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
