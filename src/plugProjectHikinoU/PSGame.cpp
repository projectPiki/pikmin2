#include "PSGame/BASARC.h"
#include "PSSystem/PSSystemIF.h"
#include "PSAutoBgm/AutoBgm.h"
#include "PSGame/CameraMgr.h"
#include "PSGame/EnvSe.h"
#include "PSGame/PikScene.h"
#include "PSGame/SoundCreatureMgr.h"
#include "PSGame/SceneInfo.h"
#include "PSGame/SoundTable.h"
#include "PSGame/SysFactory.h"
#include "PSM/BossSeq.h"
#include "PSSystem/ConductorList.h"
#include "PSGame/SeMgr.h"
#include "PSSystem/PSStream.h"
#include "PSGame/Global.h"
#include "PSSystem/PSGame.h"
#include "JSystem/JAudio/JALCalc.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"

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

char newSeqName[32];

/*
 * --INFO--
 * Address:	80334268
 * Size:	000028
 */
u32 CaveFloorInfo::getCaveNoFromID()
{
	if (mCaveID.fullView == 'test') {
		return 0;
	}
	return (u8)(mCaveID.byteView[3] - '1');
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
ConductorList::ConductorList()
{
	mCaveInfos = nullptr;
	mCaveCount = 255;
}

/*
 * --INFO--
 * Address:	80334290
 * Size:	0000D4
 */
ConductorList::~ConductorList()
{
	for (u8 i = 0; i < mCaveCount; i++) {
		delete[] mCaveInfos;
	}

	delete[] mCaveInfos;

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
bool ConductorList::read(Stream& input)
{
	mCaveCount = input.readByte();
	P2ASSERTLINE(140, !mCaveInfos);
	mCaveInfos = new (JKRGetCurrentHeap(), 0xffffffe0) CaveInfo[mCaveCount];
	P2ASSERTLINE(144, mCaveInfos);

	for (u8 i = 0; i < mCaveCount; i++) {
		u8 floors                    = input.readByte();
		mCaveInfos[i].mFileNameCount = floors;
		mCaveInfos[i].mFileNames     = new (JKRGetCurrentHeap(), 0xffffffe0) char*[floors];
		for (u8 j = 0; j < floors; j++) {
			char* str = mCaveInfos[i].mFileNames[j];
			input.readString(str, 0x20);
			P2ASSERTLINE(156, strcmp(str, "endoffile"));
			P2ASSERTBOUNDSLINE(158, '0', str[0], '9');
		}
	}

	return true;

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
 * Address:	........
 * Size:	0000F4
 */
char* ConductorList::getInfo(u8 caves, u8 floor)
{
	if (sToolMode && caves < mCaveCount && mCaveInfos[caves].mFileNameCount < floor) {
		return mCaveInfos[0].mFileNames[0];
	} else {
		P2ASSERTLINE(175, caves < mCaveCount);
		P2ASSERTLINE(176, mCaveInfos[caves].mFileNameCount < floor);
		return mCaveInfos[caves].mFileNames[floor];
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void ConductorList::getAutoBgmInfo(u8, u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80334524
 * Size:	0003D4
 */
void ConductorList::getSeqAndWaveFromConductor(char const* cndName, u8* wScene, char** bmsName)
{
	if (!strncmp("cavesoil", cndName, strlen("cavesoil"))) {
		*bmsName = "cavesoil.bms";
		int len  = strlen("cavesoil_");
		if (!strncmp(cndName + len, "00", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE22_CaveSoil_00;
		} else if (!strncmp(cndName + len, "05", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE33_CaveSoil_05;
		} else {
			*wScene = PSSystem::WaveScene::WSCENE34_CaveSoil_10;
		}
	} else if (!strncmp("cavemetal", cndName, strlen("cavemetal"))) {
		*bmsName = "cavemetal.bms";
		int len  = strlen("cavemetal_");
		if (!strncmp(cndName + len, "00", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE10_CaveMetal_00;
		} else if (!strncmp(cndName + len, "05", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE29_CaveMetal_05;
		} else {
			*wScene = PSSystem::WaveScene::WSCENE30_CaveMetal_10;
		}
	} else if (!strncmp("caveconc", cndName, strlen("caveconc"))) {
		*bmsName = "caveconc.bms";
		int len  = strlen("caveconc_");
		if (!strncmp(cndName + len, "00", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE26_CaveConc_00;
		} else if (!strncmp(cndName + len, "05", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE31_CaveConc_05;
		} else {
			*wScene = PSSystem::WaveScene::WSCENE32_CaveConc_10;
		}
	} else if (!strncmp("new", cndName, strlen("new"))) {
		strcpy(newSeqName, cndName);
		strcpy(&newSeqName[6], ".bms");
		*bmsName = newSeqName;
		u8 id1, id2;
		if (newSeqName[5] >= '0' && newSeqName[5] <= '9') {
			id1 = newSeqName[5] - '0';
		} else {
			id1 = 255;
		}
		P2ASSERTLINE(258, id1 != 0xffff);

		if (newSeqName[4] >= '0' && newSeqName[4] <= '9') {
			id2 = newSeqName[4] - '0';
		} else {
			id2 = 255;
		}
		P2ASSERTLINE(260, id2 != 0xffff);

		*wScene = PSSystem::WaveScene::WSCENE37_EmergenceCave + u8(id1 + (id2 * 10));
	} else if (!strncmp("cavetile", cndName, strlen("cavetile"))) {
		*bmsName = "cavetile.bms";
		*wScene  = PSSystem::WaveScene::WSCENE24_CaveTile;
	} else if (!strncmp("caveglass", cndName, strlen("caveglass"))) {
		*bmsName = "caveglass.bms";
		*wScene  = PSSystem::WaveScene::WSCENE23_CaveOutside;
	} else if (!strncmp("cavetsumiki", cndName, strlen("cavetsumiki"))) {
		*bmsName = "cavetsumiki.bms";
		*wScene  = PSSystem::WaveScene::WSCENE25_CaveToy;
	} else if (!strncmp("caverelax", cndName, strlen("caverelax"))) {
		*bmsName = "caverelax.bms";
		*wScene  = PSSystem::WaveScene::WSCENE28_CaveRestFloor;
	} else {
		JUT_PANICLINE(289, cndName);
	}
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
SoundTable::CategoryMgr::CategoryMgr()
{
	sInstance = this;
	for (u8 i = 0; i < SoundCat_COUNT; i++) {
		mPerspInfo[i] = new SePerspInfo;
		P2ASSERTLINE(312, mPerspInfo[i]);
		initiate(i);
	}
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
void SoundTable::CategoryMgr::initiate(u8 id)
{
	P2ASSERTLINE(319, mPerspInfo[id]);

	switch (id) {
	case SoundCat0_Navi:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat1_System:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat2_Piki:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat3_Item:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat4_Env:
		mPerspInfo[id]->set(1.0f, 684.0f, 0.197f, 4012.5f, 200.0f);
		break;
	case SoundCat5_Enemy:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	default:
		JUT_PANICLINE(341, "P2Assert");
	}
}

/*
 * --INFO--
 * Address:	80334B4C
 * Size:	000018
 */
void SoundTable::SePerspInfo::set(f32 a1, f32 a2, f32 a3, f32 a4, f32 a5)
{
	mDefaultDistance = a1;
	mBaseDistance    = a2;
	_08              = a3;
	_0C              = a4;
	mForcedDistance  = a5;
}

/*
 * --INFO--
 * Address:	80334B64
 * Size:	000164
 */
f32 SoundTable::SePerspInfo::getDistVol(f32 factor, u8 flag)
{
	if (mDisabled) {
		return 0.0f;
	} else {
		f32 mult = mBaseDistance;
		switch (flag) {
		case 0:
		case 1:
		case 2:
			break;
		case 3:
			mult *= 2.0f;
			break;
		case 4:
			mult *= 0.0f;
			break;
		case 5:
			mult *= 0.5f;
			break;
		case 6:
			mult *= 0.25f;
			break;
		case 7:
			mult = mForcedDistance;
			break;
		default:
			JUT_PANICLINE(403, "P2Assert");
		}

		if (factor < JAIGlobalParameter::getParamMaxVolumeDistance()) {
			return mDefaultDistance;
		} else if (factor < mult) {
			return JALCalc::linearTransform(factor, JAIGlobalParameter::getParamMaxVolumeDistance(), mult, mDefaultDistance, _08, false);
		} else if (factor < _0C) {
			return JALCalc::linearTransform(factor, mult, _0C, _08, JAIGlobalParameter::getParamMinDistanceVolume(), false);
		}
		return 0.0f;
	}
}

/*
 * --INFO--
 * Address:	80334CC8
 * Size:	0000A8
 */
CameraMgr::CameraMgr()
{
	mIsSpecial[0]        = false;
	mIsSpecial[1]        = false;
	mDistanceNear        = 61.66f;
	mDistanceMiddle      = 131.25f;
	mDistanceFar         = 215.04f;
	mDistanceFarthest    = 330.18f;
	_28                  = 1.0f;
	_2C                  = 0.8f;
	_30                  = 0.71f;
	_34                  = 0.62f;
	mZoomCamVolumeMod    = 0.45f;
	mCamDistVolume[0]    = mDistanceMiddle;
	mCamDistVolume[1]    = mDistanceMiddle;
	mDistVolumeFactor[0] = 1.0f;
	mDistVolumeFactor[1] = 1.0f;
}

/*
 * --INFO--
 * Address:	80334D70
 * Size:	000060
 */
CameraMgr::~CameraMgr() { }

/*
 * --INFO--
 * Address:	80334DD0
 * Size:	000024
 */
f32 CameraMgr::getBgmCamVol(u8 id)
{
	if (mIsSpecial[id]) {
		return mZoomCamVolumeMod;
	}
	return 1.0f;
}

/*
 * --INFO--
 * Address:	80334DF4
 * Size:	00004C
 */
void CameraMgr::update(u8 id, f32 base)
{
	f32 dist              = getVol_DistBetweenCamAndLookat(base);
	mCamDistVolume[id]    = dist;
	mDistVolumeFactor[id] = 1.0f;
}

/*
 * --INFO--
 * Address:	80334E40
 * Size:	000010
 */
f32 CameraMgr::getCurrentCamDistVol(u8 id) { return mCamDistVolume[id]; }

/*
 * --INFO--
 * Address:	80334E50
 * Size:	000088
 */
f32 CameraMgr::getVol_DistBetweenCamAndLookat(f32 dist)
{
	if (dist <= mDistanceMiddle) {
		return JALCalc::linearTransform(dist, mDistanceNear, mDistanceMiddle, _28, _2C, false);
	} else if (dist <= mDistanceFar) {
		return JALCalc::linearTransform(dist, mDistanceMiddle, mDistanceFar, _2C, _30, false);
	} else {
		return JALCalc::linearTransform(dist, mDistanceFar, mDistanceFarthest, _30, _34, false);
	}
}

/*
 * --INFO--
 * Address:	80334ED8
 * Size:	000034
 */
SysFactory::SysFactory()
{
	mHeap          = nullptr;
	mHeapSize      = 0;
	mAafFile       = nullptr;
	mMakeSeFunc    = nullptr;
	mSolidHeapSize = 0x151800;
	mSolidHeap     = nullptr;
}

/*
 * --INFO--
 * Address:	80334F0C
 * Size:	000404
 */
void SysFactory::newSoundSystem()
{
	P2ASSERTLINE(715, mHeap);
	P2ASSERTLINE(716, mHeapSize);
	P2ASSERTLINE(717, mAafFile);
	preInitJAI();

	JKRHeap* backupheap = JKRGetCurrentHeap();
	mHeap->becomeCurrentHeap();

	JKRSolidHeap* newheap = JKRSolidHeap::create(mHeap->getFreeSize(), mHeap, false);
	P2ASSERTLINE(741, newheap);
	newheap->becomeCurrentHeap();
	PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::newInstance();
	P2ASSERTLINE(748, mSolidHeapSize < newheap->getFreeSize());

	mSolidHeap = JKRSolidHeap::create(mSolidHeapSize, newheap, false);
	P2ASSERTLINE(754, mSolidHeap);

	PSSystem::SetupArg arg;
	arg._08 = 231;
	// arg._0C       = seqCpuSync;
	arg.mPath     = "/SeqTest/";
	arg.mHeap     = mSolidHeap;
	arg.mHeapSize = mSolidHeapSize;
	arg.mAafFile  = mAafFile;
	P2ASSERTLINE(769, !PSSystem::spSysIF);
	PSSystem::SysIF::sMakeJAISeCallback = mMakeSeFunc;
	PSSystem::SysIF* sysif              = new PSSystem::SysIF(arg);
	P2ASSERTLINE(773, sysif);

	PSSystem::spSceneMgr = (PSSystem::SceneMgr*)newSceneMgr();
	P2ASSERTLINE(776, PSSystem::spSceneMgr);

	postInitJAI();

	PSAutoBgm::ConductorArcMgr::createInstance();
	PSSystem::ArcMgr<PSGame::BASARC>::createInstance();

	PSSystem::SingletonBase<PSGame::SeMgr>::newInstance();

	backupheap->becomeCurrentHeap();
	newheap->adjustSize();
	OSLockMutex(&sysif->mMutex);
	sysif->_40 = true;
	OSUnlockMutex(&sysif->mMutex);
	OSDisableInterrupts();
	PSSystem::spSysIF = sysif;
	OSEnableInterrupts();

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
void SysFactory::preInitJAI()
{
	JAIGlobalParameter::setParamInitDataFileName("PSGame.aaf");
	JAIGlobalParameter::setParamSequenceArchivesFileName("Seq.arc");
	JAIGlobalParameter::setParamAudioCameraMax(2);
	JAIGlobalParameter::setParamSystemTrackMax(0xe7);
	JAIGlobalParameter::setParamSeqPlayTrackMax(5);
	JAIGlobalParameter::setParamSeqControlBufferMax(10);
	JAIGlobalParameter::setParamSystemRootTrackMax(10);
	JAIGlobalParameter::setParamStayHeapSize(0xf000);
	JAIGlobalParameter::setParamAutoHeapMax(3);
	JAIGlobalParameter::setParamAutoHeapRoomSize(0xa2ff);
	JAIGlobalParameter::setParamStayHeapMax(1);
}

/*
 * --INFO--
 * Address:	80335390
 * Size:	000120
 */
void SysFactory::postInitJAI()
{
	f32 max = 0.0f;
	for (u8 i = 0; i < (u8)JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		if (JAInter::SoundTable::getSoundMax(i)) {
			f32 calc = getSoundCategoryInfo(PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::sInstance, i)->_0C;
			if (max < calc) {
				max = calc;
			}
			JAInter::SeMgr::seCategoryVolume[i]
			    = getSoundCategoryInfo(PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::sInstance, i)->mDefaultDistance;
		}
	}

	JAIGlobalParameter::setParamDistanceMax(max);
	JAIGlobalParameter::setParamMinDistanceVolume(0.0f);
	JAIGlobalParameter::setParamMaxVolumeDistance(120.0f);
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
SceneInfo::SceneInfo()
{
	mStageFlags = 0;
	mSceneType  = 0;
	mCameras    = 0;
	for (int i = 0; i < 2; i++) {
		mCam1Position[i] = nullptr;
		mCam2Position[i] = nullptr;
		mCameraMtx[i]    = nullptr;
	}
}

/*
 * --INFO--
 * Address:	803354E8
 * Size:	000078
 */
void SceneInfo::setStageFlag(SceneInfo::FlagDef flag, SceneInfo::FlagBitShift shift)
{
	if (flag == 0) {
		mStageFlags &= ~(1 << shift);
	} else if (flag == 1) {
		mStageFlags |= (1 << shift);
	} else {
		JUT_PANICLINE(906, "flagは0 or1です");
	}
}

/*
 * --INFO--
 * Address:	80335560
 * Size:	000010
 */
SceneInfo::FlagDef SceneInfo::getFlag(SceneInfo::FlagBitShift shift) const { return (SceneInfo::FlagDef)(mStageFlags >> shift & 1); }

/*
 * --INFO--
 * Address:	80335570
 * Size:	000074
 */
void SceneInfo::setStageCamera() const
{
	for (u8 i = 0; i < mCameras; i++) {
		JAIBasic::msBasic->setCameraInfo((Vec*)mCam1Position[i], (Vec*)mCam2Position[i], mCameraMtx[i]->mMatrix.mtxView, i);
	}
}

/*
 * --INFO--
 * Address:	803355E4
 * Size:	00003C
 */
PikScene::PikScene(u8 id)
    : PSSystem::Scene(id)
{
}

/*
 * --INFO--
 * Address:	80335620
 * Size:	000060
 */
PikScene::~PikScene() { }

/*
 * --INFO--
 * Address:	80335680
 * Size:	0000A8
 */
PSM::MiddleBossSeq* PikScene::getMiddleBossBgm()
{
	char* name;
	PSM::MiddleBossSeq* seq = static_cast<PSM::MiddleBossSeq*>(mSeqMgr.getSeq(1));
	if (!seq) {
		return nullptr;
	}

	name = seq->mBmsFileName;
	if ((!strcmp(name, "m_boss.bms") || !strcmp(name, "l_boss.bms")) && seq->getCastType() == 4) {
		return seq;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void PikScene::getJumpMainBgm()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80335728
 * Size:	000378
 */
PSSystem::Scene* PikSceneMgr::newAndSetGlobalScene()
{
	JUT_ASSERTLINE(1002, !mScenes, "2重にグローバルシーンを作成しようとした");
	SceneInfo info;
	mScenes = newGameScene(0, &info);
	P2ASSERTLINE(1015, mScenes);
	mScenes->adaptTo(&mScenes);
	mEndScene = mScenes;

	PSSystem::SingletonBase<PSSystem::StreamDataList>::newInstance();
	P2ASSERTLINE(1024, PSSystem::SingletonBase<PSSystem::StreamDataList>::sInstance->onlyLoad("/user/Totaka/StreamList.txt",
	                                                                                          JKRDvdRipper::ALLOC_DIR_TOP));
	PSSystem::SingletonBase<PSSystem::SeqDataList>::newInstance();
	P2ASSERTLINE(
	    1028, PSSystem::SingletonBase<PSSystem::SeqDataList>::sInstance->onlyLoad("/user/Totaka/BgmList.txt", JKRDvdRipper::ALLOC_DIR_TOP));

	JAInter::SoundInfo sound;
	sound._00            = 0x1f00;
	sound.mCount         = 0xff000000;
	sound.mPitch         = 1.0f;
	sound.mVolume.w      = 0x7f000000;
	PSSystem::SeSeq* seq = new PSSystem::SeSeq("se.bms", sound);
	P2ASSERTLINE(1043, seq);
	seq->init();
	mScenes->appendSeq(seq);

	JAInter::SoundInfo sound2;
	sound2._00             = 0;
	sound2.mCount          = 0x7f010000;
	sound2.mPitch          = 1.0f;
	sound2.mVolume.w       = 0x32000000;
	PSSystem::BgmSeq* seq2 = newStreamBgm(0xc0011011, sound2);
	P2ASSERTLINE(1061, seq2);
	seq2->init();
	mScenes->appendSeq(seq2);
	return mScenes;

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
PSSystem::Scene* PikSceneMgr::newAndSetCurrentScene(SceneInfo& info)
{
	P2ASSERTLINE(1093, info.mSceneType != SceneInfo::SCENE_NULL);
	JUT_ASSERTLINE(1094, info.mSceneType <= SceneInfo::COURSE_TUTORIALDAY1, "scene noが不正");

	checkScene();

	JUT_ASSERTLINE(1095, !mScenes->mChild, "前回のmCurrentSceneの後処理が不正");

	info.setStageCamera();

	P2ASSERTLINE(1105, mScenes);
	P2ASSERTLINE(1096, !mScenes->mChild);

	u8 wScene                      = 255;
	PSAutoBgm::ConductorMgr::sHeap = JKRGetCurrentHeap();
	PSSystem::BgmSeq* seq          = initMainBgm(info, &wScene);
	P2ASSERTLINE(1132, seq);

	bool needboss = false;
	if (info.mSceneType == SceneInfo::CHALLENGE_MODE || info.mSceneType == SceneInfo::TWO_PLAYER_BATTLE || (info.mSceneType - 1) < 4
	    || info.isCaveFloor()) {
		needboss = true;
	}

	PSSystem::SeqBase* bossSeq = nullptr;
	CaveFloorInfo& cinfo       = static_cast<CaveFloorInfo&>(info);
	// Check for submerged castle theme
	if (info.isCaveFloor() && info.mSceneType == SceneInfo::COURSE_YAKUSHIMA) {
		if (cinfo.getCaveNoFromID() == 3 && !cinfo.isBossFloor()) {
			needboss = false;
		}
	}

	if (needboss) {
		bossSeq = initBossBgm(info, &wScene);
		P2ASSERTLINE(1163, bossSeq);
	}

	SceneInfo* newinfo;
	if (info.isCaveFloor()) {
		newinfo = new CaveFloorInfo;
		// newinfo            = cinfo;
	} else {
		newinfo = new SceneInfo;
	}

	PSSystem::Scene* newscene = newGameScene(wScene, newinfo);
	P2ASSERTLINE(1185, seq);
	newscene->appendSeq(seq);

	if (needboss) {
		P2ASSERTLINE(1191, bossSeq);
		newscene->appendSeq(bossSeq);
	}

	initAdditionalBgm(info, newscene);
	P2ASSERTLINE(1214, newscene);
	mScenes->adaptChildScene(newscene);
	return newscene;

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
PSSystem::BgmSeq* PikSceneMgr::newBgmSeq(char const* name, JAInter::SoundInfo& info)
{
	PSSystem::BgmSeq* seq = new PSSystem::BgmSeq(name, info);
	P2ASSERTLINE(1223, seq);
	seq->init();
	return seq;
}

/*
 * --INFO--
 * Address:	80335FE4
 * Size:	000088
 */
PSSystem::BgmSeq* PikSceneMgr::newStreamBgm(u32 id, JAInter::SoundInfo& info)
{
	info._00                 = 0;
	PSSystem::StreamBgm* seq = new PSSystem::StreamBgm(id, info);
	P2ASSERTLINE(1234, seq);
	return seq;
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
PSSystem::BgmSeq* PikSceneMgr::initBossBgm(SceneInfo& info, u8* wScene)
{
	JAInter::SoundInfo sound;
	sound._00       = 0;
	sound.mCount    = 0x7f010000;
	sound.mPitch    = 1.0f;
	sound.mVolume.w = 0x32000000;

	PSSystem::DirectedBgm* seq;
	if (curSceneIsBigBossFloor()) {
		seq     = (PSSystem::DirectedBgm*)newDirectedBgm("l_boss.bms", sound);
		*wScene = PSSystem::WaveScene::WSCENE35_TitanDweevil;
	} else {
		seq = (PSSystem::DirectedBgm*)newDirectedBgm("m_boss.bms", sound);
	}

	P2ASSERTLINE(1264, seq);

	// some panic in SESeq.h that doesnt exist

	seq->mRootTrack->_3E = 60;
	P2ASSERTLINE(1267, sound._00 < 0x80);
	return seq;
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
void PikSceneMgr::initAdditionalBgm(SceneInfo& info, PSSystem::Scene* scene)
{
	JAInter::SoundInfo sound;
	sound._00       = 0;
	sound.mCount    = 0x7f010000;
	sound.mPitch    = 1.0f;
	sound.mVolume.w = 0x32000000;
	PSSystem::BgmSeq* seq;
	switch (info.mSceneType) {
	case SceneInfo::TITLE_SCREEN:
		seq = newStreamBgm(0xc0011011, sound);
		P2ASSERTLINE(1290, seq);
		scene->appendSeq(seq);

		seq = newBgmSeq("hiscore.bms", sound);
		P2ASSERTLINE(1296, seq);
		scene->appendSeq(seq);

		seq = newStreamBgm(0xc0011010, sound);
		P2ASSERTLINE(1302, seq);
		scene->appendSeq(seq);
		break;
	case SceneInfo::COURSE_TUTORIALDAY1:
		seq = newBgmSeq("n_tutorial_1stday.bms", sound);
		P2ASSERTLINE(1318, seq);
		scene->appendSeq(seq);
		break;
	case SceneInfo::CHALLENGE_MODE:
		sound.mCount                  = 0x7f040000;
		sound.mVolume.w               = 0x23000000;
		sound._00                     = 0x1f00;
		JADUtility::AccessMode flag   = mAccessMode;
		PSSystem::DirectedBgm* seqold = (PSSystem::DirectedBgm*)scene->mSeqMgr.getFirstSeq();
		seq                           = newAutoBgm("cavekeyget.cnd", "cavekeyget.bms", sound, flag, info, seqold->mDirectorMgr);
		scene->appendSeq(seq);
		P2ASSERTLINE(1318, scene->mWaveLoader);
		scene->mWaveLoader->mWaveSceneID[1] = PSSystem::WaveScene::WSCENE5_Challenge_KeyGet;
		P2ASSERTLINE(1342, seq == scene->mSeqMgr.getSeq(2));
		break;
	}

	CaveFloorInfo& cinfo = static_cast<CaveFloorInfo&>(info);
	// Check for submerged castle theme
	if (info.isCaveFloor() && info.mSceneType == SceneInfo::COURSE_YAKUSHIMA) {
		if (cinfo.getCaveNoFromID() == 3 && !cinfo.isBossFloor()) {
			seq = newBgmSeq("kuro_post.bms", sound);
			P2ASSERTLINE(1353, seq);
			scene->appendSeq(seq);
		}
	}
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
PSSystem::BgmSeq* PikSceneMgr::initMainBgm(SceneInfo& info, u8* wScene)
{
	P2ASSERTLINE(1378, wScene);
	PSSystem::BgmSeq* bgm = nullptr;

	JAInter::SoundInfo sound;
	sound._00            = 0x1f00;
	sound.mCount         = 0x7f010000;
	sound.mPitch         = 1.0f;
	sound.mVolume.w      = 0x32000000;
	CaveFloorInfo& cinfo = static_cast<CaveFloorInfo&>(info);
	P2ASSERTLINE(1393, wScene);
	if (info.isCaveFloor()) {

		switch (info.mSceneType) {
		case SceneInfo::CHALLENGE_MODE:
			PSSystem::SingletonBase<PSGame::ConductorList>::newInstance();
			ConductorList* list = PSSystem::SingletonBase<PSGame::ConductorList>::getInstance();
			bool loaded         = list->load("/user/Totaka/ChallengeBgmList.txt", JKRDvdRipper::ALLOC_DIR_BOTTOM);
			P2ASSERTLINE(1472, loaded);
			char* name = list->getInfo(cinfo.mFloorNum, cinfo.mChallengeModeStageNum);
			u8 wScene2;
			char* bmsName;
			list->getSeqAndWaveFromConductor(name, &wScene2, &bmsName);
			bgm = newAutoBgm(name, bmsName, sound, mAccessMode, info, nullptr);
			delete list;
			break;
		case SceneInfo::TWO_PLAYER_BATTLE:
			bgm     = newBgmSeq("battle_t.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE6_2P_Battle;
			break;
		}

		if (!bgm) {
			switch (cinfo.mBetaType) {
			case 1: // Floor without music for bosses, apparently it loads caveconc_00 by default
				bgm = newAutoBgm("caveconc_00_0.cnd", "caveconc.bms", sound, mAccessMode, info, nullptr);
				break;
			case 2:
				bgm     = newAutoBgm("caverelax.cnd", "caverelax.bms", sound, mAccessMode, info, nullptr);
				*wScene = PSSystem::WaveScene::WSCENE28_CaveRestFloor;
				break;
			}
		}

		// Check for submerged castle theme
		if (info.isCaveFloor() && info.mSceneType == SceneInfo::COURSE_YAKUSHIMA) {
			if (cinfo.getCaveNoFromID() == 3 && !cinfo.isBossFloor()) {
				bgm = newBgmSeq("kuro_pre.bms", sound);
				P2ASSERTLINE(1353, bgm);
				*wScene = PSSystem::WaveScene::WSCENE48_SubmergedCastle;
			}
		}

		// story mode cave bgm settings
		if (!bgm) {
			P2ASSERTLINE(1574, !cinfo.mBetaType);
			char* txtpath = nullptr;
			switch (info.mSceneType) {
			case SceneInfo::COURSE_TUTORIAL:
			case SceneInfo::COURSE_TUTORIALDAY1:
				txtpath = "/user/Totaka/BgmList_Tutorial.txt";
				break;
			case SceneInfo::COURSE_FOREST:
				txtpath = "/user/Totaka/BgmList_Forest.txt";
				break;
			case SceneInfo::COURSE_YAKUSHIMA:
				txtpath = "/user/Totaka/BgmList_Yakushima.txt";
				break;
			case SceneInfo::COURSE_LAST:
				txtpath = "/user/Totaka/BgmList_Last.txt";
				break;
			case SceneInfo::COURSE_TEST:
				txtpath = "/user/Totaka/BgmList_BgmTest.txt";
				break;
			}
			PSSystem::SingletonBase<PSGame::ConductorList>::newInstance();
			ConductorList* list = PSSystem::SingletonBase<PSGame::ConductorList>::getInstance();
			bool loaded         = list->load(txtpath, JKRDvdRipper::ALLOC_DIR_BOTTOM);
			P2ASSERTLINE(1601, loaded);
			OSReport("caveID==%d\n", cinfo.getCaveNoFromID());
			char* name = list->getInfo(cinfo.mFloorNum, cinfo.getCaveNoFromID());
			u8 wScene2;
			char* bmsName;
			list->getSeqAndWaveFromConductor(name, &wScene2, &bmsName);
			bgm = newAutoBgm(name, bmsName, sound, mAccessMode, info, nullptr);
			delete list;
		}
	} else {
		switch (info.mSceneType) {
		case SceneInfo::COURSE_TUTORIAL:
		case SceneInfo::COURSE_TUTORIALDAY1:
			bgm     = newBgmSeq("n_tutorial.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE15_Valley_of_Repose;
			break;
		case SceneInfo::COURSE_FOREST:
			bgm     = newBgmSeq("forest.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE2_Awakening_Wood;
			break;
		case SceneInfo::COURSE_YAKUSHIMA:
			bgm     = newBgmSeq("yakushima.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE3_Perplexing_Pool;
			break;
		case SceneInfo::COURSE_LAST:
			bgm     = newBgmSeq("last.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE4_Wistful_Wild;
			break;
		case SceneInfo::TITLE_SCREEN:
			bgm     = newStreamBgm(0xc0011000, sound);
			*wScene = PSSystem::WaveScene::WSCENE21_HighScores;
			break;
		case SceneInfo::CAVE_RESULTS:
			bgm = newStreamBgm(0xc0011013, sound);
			break;
		case SceneInfo::FILE_SELECT:
			bgm = newStreamBgm(0xc001101e, sound);
			break;
		case SceneInfo::WORLD_MAP_NORMAL:
			bgm     = newBgmSeq("worldmap.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE16_WorldMap;
			break;
		case SceneInfo::WORLD_MAP_NEWLEVEL:
			bgm     = newBgmSeq("worldmap_intro.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE16_WorldMap;
			break;
		case SceneInfo::PIKLOPEDIA:
			bgm     = newBgmSeq("book.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE36_Piklopedia;
			break;
		case SceneInfo::ENDING_COMPLETE:
			bgm     = newBgmSeq("comp_result.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE19_Final_Result;
			break;
		case SceneInfo::ENDING_DEBTRESULT:
			bgm     = newBgmSeq("f_result.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE19_Final_Result;
			break;
		case SceneInfo::CHALLENGE_RESULTS:
			bgm = newStreamBgm(0xc0011014, sound);
			break;
		case SceneInfo::CHALLENGE_MENU:
			bgm     = newBgmSeq("c_menu.bms", sound);
			*wScene = PSSystem::WaveScene::WSCENE20_ChallengeSelect;
			break;
		case SceneInfo::VERSUS_MENU:
			bgm = newStreamBgm(0xc001100f, sound);
			break;
		default:
			JUT_PANICLINE(1745, "P2Assert");
		}
	}

	P2ASSERTLINE(1749, bgm);
	P2ASSERTLINE(1750, sound._00 < 80);

	return bgm;
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
void ConductorSelector::getConductorFile(char const*, CaveFloorInfo&, u8*, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803372E0
 * Size:	00094C
 */
void seqCpuSync(JASTrack* track, u16 command)
{
	switch (command) {
	case 1:
		JAIBasic::setParameterSeqSync(track, 1);
		break;
	}
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
	PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
	if (bgm) {
		// bgm->assertLoaded();
		bgm->mRootTrack->mSwingState = 0;
	}
}

/*
 * --INFO--
 * Address:	80337CA8
 * Size:	000124
 */
PSSystem::DirectedBgm* PSGetDirectedMainBgm()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->checkScene();
	PSSystem::Scene* scene = mgr->mScenes->mChild;
	if (!scene) {
		return nullptr;
	}

	PSSystem::DirectedBgm* seq = (PSSystem::DirectedBgm*)scene->mSeqMgr.getFirstSeq();
	if (!seq || seq->getCastType() == 2 || seq->getCastType() == 3 || seq->getCastType() == 4) {
		return nullptr;
	}
	return seq;
}

/*
 * --INFO--
 * Address:	80337DCC
 * Size:	000170
 */
void PSPlayerChangeToLugie()
{
	PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
	if (bgm) {
		// bgm->assertLoaded();
		bgm->mRootTrack->mSwingState = 1;
	}
}

/*
 * --INFO--
 * Address:	80337F3C
 * Size:	000170
 */
PSSystem::DirectedBgm* PSGetDirectedMainBgmA()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	PSSystem::Scene* scene     = mgr->getChildScene();
	PSSystem::DirectedBgm* seq = (PSSystem::DirectedBgm*)scene->mSeqMgr.getFirstSeqA();
	if (seq) {
		bool valid = false;
		if (seq->getCastType() == 2 || seq->getCastType() == 3 || seq->getCastType() == 4) {
			valid = true;
		}
		P2ASSERTLINE(2241, valid);
		return seq;
	} else {
		JUT_PANICLINE(2244, "P2Assert");
		return nullptr;
	}
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
