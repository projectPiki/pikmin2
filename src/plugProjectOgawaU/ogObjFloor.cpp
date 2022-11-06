#include "JSystem/JGeometry.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"
#include "og/newScreen/Floor.h"
#include "Dolphin/string.h"
#include "Dolphin/stl.h"
#include "Graphics.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/J3D/J3DSys.h"
#include "og/newScreen/TitleMsg.h"
#include "og/Screen/AlphaMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "P2DScreen.h"
#include "System.h"
#include "TParticle2dMgr.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogObjFloor_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EBA8
    lbl_8048EBA8:
        .4byte 0x6F674F62
        .4byte 0x6A466C6F
        .4byte 0x6F722E63
        .4byte 0x70700000
        .4byte 0x45525221
        .4byte 0x20696E20
        .4byte 0x4F626A46
        .4byte 0x6C6F6F72
        .4byte 0x20437265
        .4byte 0x6174658E
        .4byte 0xB8947381
        .4byte 0x490A0000
        .4byte 0x6E65775F
        .4byte 0x666F6E74
        .4byte 0x5F302E62
        .4byte 0x6C6F0000
        .4byte 0x6E65775F
        .4byte 0x666F6E74
        .4byte 0x5F305F65
        .4byte 0x6E675F70
        .4byte 0x616C2E62
        .4byte 0x6C6F0000
        .4byte 0x666F6E74
        .4byte 0x5F6E616D
        .4byte 0x652E626C
        .4byte 0x6F000000
        .4byte 0x76735F74
        .4byte 0x69746C65
        .4byte 0x5F72756C
        .4byte 0x655F7769
        .4byte 0x6E646F77
        .4byte 0x2E626C6F
        .4byte 0x00000000
        .4byte 0x76735F74
        .4byte 0x69746C65
        .4byte 0x5F72756C
        .4byte 0x655F7769
        .4byte 0x6E646F77
        .4byte 0x2E62746B
        .4byte 0x00000000
        .4byte 0x76735F74
        .4byte 0x69746C65
        .4byte 0x5F72756C
        .4byte 0x655F7769
        .4byte 0x6E646F77
        .4byte 0x5F30322E
        .4byte 0x62746B00
        .4byte 0x73637265
        .4byte 0x656E4F62
        .4byte 0x6A2E6800
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global vsRuleMsgId__Q22og9newScreen
    vsRuleMsgId__Q22og9newScreen:
        .4byte 0x00323032
        .4byte 0x315F3030
        .4byte 0x00323032
        .4byte 0x325F3030
        .4byte 0x00323032
        .4byte 0x335F3030
        .4byte 0x00323032
        .4byte 0x345F3030
        .4byte 0x00323032
        .4byte 0x355F3030
        .4byte 0x00323032
        .4byte 0x365F3030
    .global __vt__Q32og9newScreen8ObjFloor
    __vt__Q32og9newScreen8ObjFloor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen8ObjFloorFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen8ObjFloorFv"
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
        .4byte doStart__Q32og9newScreen8ObjFloorFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen8ObjFloorFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen8ObjFloorFP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen8ObjFloorFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen8ObjFloorFv
        .4byte doUpdate__Q32og9newScreen8ObjFloorFv
        .4byte doUpdateFinish__Q32og9newScreen8ObjFloorFv
        .4byte doUpdateFadeout__Q32og9newScreen8ObjFloorFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen8ObjFloorFv
        .4byte doDraw__Q32og9newScreen8ObjFloorFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32og9newScreen8ObjFloor
    msVal__Q32og9newScreen8ObjFloor:
        .skip 0x7C

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D998
    lbl_8051D998:
        .4byte 0x00000000
    .global lbl_8051D99C
    lbl_8051D99C:
        .float 1.0
    .global lbl_8051D9A0
    lbl_8051D9A0:
        .4byte 0x00000000
    .global lbl_8051D9A4
    lbl_8051D9A4:
        .4byte 0x38333935
        .4byte 0x5F303000
    .global lbl_8051D9AC
    lbl_8051D9AC:
        .4byte 0x38333939
        .4byte 0x5F303000
    .global lbl_8051D9B4
    lbl_8051D9B4:
        .4byte 0x38343030
        .4byte 0x5F303000
    .global lbl_8051D9BC
    lbl_8051D9BC:
        .4byte 0x38333936
        .4byte 0x5F303000
    .global lbl_8051D9C4
    lbl_8051D9C4:
        .4byte 0x38333938
        .4byte 0x5F303000
    .global lbl_8051D9CC
    lbl_8051D9CC:
        .4byte 0x38343031
        .4byte 0x5F303000
    .global lbl_8051D9D4
    lbl_8051D9D4:
        .4byte 0x38343130
        .4byte 0x5F303000
    .global lbl_8051D9DC
    lbl_8051D9DC:
        .4byte 0x38333937
        .4byte 0x5F303000
    .global lbl_8051D9E4
    lbl_8051D9E4:
        .4byte 0x38343032
        .4byte 0x5F303000
    .global lbl_8051D9EC
    lbl_8051D9EC:
        .4byte 0x38343033
        .4byte 0x5F303000
    .global lbl_8051D9F4
    lbl_8051D9F4:
        .4byte 0x38343131
        .4byte 0x5F303000
    .global lbl_8051D9FC
    lbl_8051D9FC:
        .4byte 0x38343132
        .4byte 0x5F303000
    .global lbl_8051DA04
    lbl_8051DA04:
        .4byte 0x38343133
        .4byte 0x5F303000
    .global lbl_8051DA0C
    lbl_8051DA0C:
        .4byte 0x38343134
        .4byte 0x5F303000
    .global lbl_8051DA14
    lbl_8051DA14:
        .4byte 0x34393030
        .4byte 0x5F303000
    .global lbl_8051DA1C
    lbl_8051DA1C:
        .4byte 0x34393031
        .4byte 0x5F303000
    .global lbl_8051DA24
    lbl_8051DA24:
        .4byte 0x34393032
        .4byte 0x5F303000
    .global lbl_8051DA2C
    lbl_8051DA2C:
        .4byte 0x34393033
        .4byte 0x5F303000
    .global lbl_8051DA34
    lbl_8051DA34:
        .4byte 0x34393034
        .4byte 0x5F303000
    .global lbl_8051DA3C
    lbl_8051DA3C:
        .4byte 0x34393035
        .4byte 0x5F303000
    .global lbl_8051DA44
    lbl_8051DA44:
        .4byte 0x34393036
        .4byte 0x5F303000
    .global lbl_8051DA4C
    lbl_8051DA4C:
        .4byte 0x34393037
        .4byte 0x5F303000
    .global lbl_8051DA54
    lbl_8051DA54:
        .4byte 0x34393038
        .4byte 0x5F303000
    .global lbl_8051DA5C
    lbl_8051DA5C:
        .4byte 0x34393039
        .4byte 0x5F303000
    .global lbl_8051DA64
    lbl_8051DA64:
        .4byte 0x34393130
        .4byte 0x5F303000
    .global lbl_8051DA6C
    lbl_8051DA6C:
        .4byte 0x34393131
        .4byte 0x5F303000
    .global lbl_8051DA74
    lbl_8051DA74:
        .4byte 0x34393132
        .4byte 0x5F303000
    .global lbl_8051DA7C
    lbl_8051DA7C:
        .4byte 0x34393133
        .4byte 0x5F303000
    .global lbl_8051DA84
    lbl_8051DA84:
        .4byte 0x34393134
        .4byte 0x5F303000
    .global lbl_8051DA8C
    lbl_8051DA8C:
        .4byte 0x34393135
        .4byte 0x5F303000
    .global lbl_8051DA94
    lbl_8051DA94:
        .4byte 0x34393136
        .4byte 0x5F303000
    .global lbl_8051DA9C
    lbl_8051DA9C:
        .4byte 0x34393137
        .4byte 0x5F303000
    .global lbl_8051DAA4
    lbl_8051DAA4:
        .4byte 0x34393138
        .4byte 0x5F303000
    .global lbl_8051DAAC
    lbl_8051DAAC:
        .4byte 0x34393139
        .4byte 0x5F303000
    .global lbl_8051DAB4
    lbl_8051DAB4:
        .4byte 0x34393230
        .4byte 0x5F303000
    .global lbl_8051DABC
    lbl_8051DABC:
        .4byte 0x34393231
        .4byte 0x5F303000
    .global lbl_8051DAC4
    lbl_8051DAC4:
        .4byte 0x34393232
        .4byte 0x5F303000
    .global lbl_8051DACC
    lbl_8051DACC:
        .4byte 0x34393233
        .4byte 0x5F303000
    .global lbl_8051DAD4
    lbl_8051DAD4:
        .4byte 0x34393234
        .4byte 0x5F303000
    .global lbl_8051DADC
    lbl_8051DADC:
        .4byte 0x34393235
        .4byte 0x5F303000
    .global lbl_8051DAE4
    lbl_8051DAE4:
        .4byte 0x34393236
        .4byte 0x5F303000
    .global lbl_8051DAEC
    lbl_8051DAEC:
        .4byte 0x34393237
        .4byte 0x5F303000
    .global lbl_8051DAF4
    lbl_8051DAF4:
        .4byte 0x34393238
        .4byte 0x5F303000
    .global lbl_8051DAFC
    lbl_8051DAFC:
        .4byte 0x34393239
        .4byte 0x5F303000
    .global lbl_8051DB04
    lbl_8051DB04:
        .4byte 0x34373730
        .4byte 0x5F303000
    .global lbl_8051DB0C
    lbl_8051DB0C:
        .4byte 0x34373731
        .4byte 0x5F303000
    .global lbl_8051DB14
    lbl_8051DB14:
        .4byte 0x34373732
        .4byte 0x5F303000
    .global lbl_8051DB1C
    lbl_8051DB1C:
        .4byte 0x34373733
        .4byte 0x5F303000
    .global lbl_8051DB24
    lbl_8051DB24:
        .4byte 0x34373734
        .4byte 0x5F303000
    .global lbl_8051DB2C
    lbl_8051DB2C:
        .4byte 0x34373735
        .4byte 0x5F303000
    .global lbl_8051DB34
    lbl_8051DB34:
        .4byte 0x34373736
        .4byte 0x5F303000
    .global lbl_8051DB3C
    lbl_8051DB3C:
        .4byte 0x34373737
        .4byte 0x5F303000
    .global lbl_8051DB44
    lbl_8051DB44:
        .4byte 0x34373738
        .4byte 0x5F303000
    .global lbl_8051DB4C
    lbl_8051DB4C:
        .4byte 0x34373739
        .4byte 0x5F303000
    .global lbl_8051DB54
    lbl_8051DB54:
        .4byte 0x39393936
        .4byte 0x5F303000
    .global lbl_8051DB5C
    lbl_8051DB5C:
        .4byte 0x25730000
    .global lbl_8051DB60
    lbl_8051DB60:
        .4byte 0x47000000
    .global lbl_8051DB64
    lbl_8051DB64:
        .4byte 0x40C00000
    .global lbl_8051DB68
    lbl_8051DB68:
        .4byte 0x38333832
        .4byte 0x5F303000
    .global lbl_8051DB70
    lbl_8051DB70:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051DB78
    lbl_8051DB78:
        .float 0.5
    .global lbl_8051DB7C
    lbl_8051DB7C:
        .4byte 0x437F0000
    .global lbl_8051DB80
    lbl_8051DB80:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051DB88
    lbl_8051DB88:
        .float 0.3
    .global lbl_8051DB8C
    lbl_8051DB8C:
        .4byte 0x3E4CCCCD
    .global lbl_8051DB90
    lbl_8051DB90:
        .4byte 0x40400000
    .global lbl_8051DB94
    lbl_8051DB94:
        .4byte 0xC1700000
    .global lbl_8051DB98
    lbl_8051DB98:
        .4byte 0x41F00000
    .global lbl_8051DB9C
    lbl_8051DB9C:
        .4byte 0xC2480000
    .global lbl_8051DBA0
    lbl_8051DBA0:
        .4byte 0x3FC00000
    .global lbl_8051DBA4
    lbl_8051DBA4:
        .4byte 0x41700000
    .global lbl_8051DBA8
    lbl_8051DBA8:
        .4byte 0x3DF5C28F
    .global lbl_8051DBAC
    lbl_8051DBAC:
        .4byte 0x40E00000
    .global lbl_8051DBB0
    lbl_8051DBB0:
        .float 0.06
    .global lbl_8051DBB4
    lbl_8051DBB4:
        .4byte 0x41200000
*/

const u64 og::newScreen::vsRuleMsgId[6] = { '2021_00', '2022_00', '2023_00', '2024_00', '2025_00', '2026_00' };

inline og::newScreen::ObjFloor::StaticValues::StaticValues()
    : _00(0.30f)
    , _04(1.00f)
    , _08(0.20f)
    , _0C(3.00f)
    , _10(0.00f)
    , _14(-15.00f)
    , _18(1.00f)
    , _1C(30.00f)
    , _20(0.00f)
    , _24(-50.00f)
    , _28(1.00f)
    , _2C(-15.00f)
    , _30(0.00f)
    , _34(1.50f)
    , _38(0.00f)
    , _3C(15.00f)
    , _40(0.12f)
    , _44(7.00f)
    , _48(1.50f)
    , _4C(0.06f)
    , _50(10.00f)
    , _54(0.00f)
    , _58(3.00f)
    , _5C()
    , _68()
    // , _68 {
    // 	JUtility::TColor(0x00, 0x00, 0x32, 0x00),
    // 	JUtility::TColor(0x64, 0x64, 0x00, 0x00),
    // 	JUtility::TColor(0xFF, 0xFF, 0x00, 0x00)
    // }
    , m_ruleMsgIndex(0)
    , _78(0)
    , m_shouldNotRandomizeRuleMsgMaybe(false)
{
	_5C[0] = JUtility::TColor(0xFF, 0xFF, 0xC8, 0xFF);
	_5C[1] = JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF);
	_5C[2] = JUtility::TColor(0xFF, 0xFF, 0x9C, 0xFF);
};

og::newScreen::ObjFloor::StaticValues og::newScreen::ObjFloor::msVal = og::newScreen::ObjFloor::StaticValues();

// float _00 =   0.3f;                    // _00
// float _04 =   1.0f;                    // _04
// float _08 =   0.2f;                    // _08
// float _0C =   3.0f;                    // _0C
// float _10 =   0.0f;                    // _10
// float _14 = -15.0f;                    // _14
// float _18 =   1.0f;                    // _18
// float _1C =  30.0f;                    // _1C
// float _20 =   0.0f;                    // _20
// float _24 = -50.0f;                    // _24
// float _28 =   1.0f;                    // _28
// float _2C = -15.0f;                    // _2C
// float _30 =   0.0f;                    // _30
// float _34 =   1.5f;                    // _34
// float _38 =   0.0f;                    // _38
// float _3C =  15.0f;                    // _3C
// float _40 =   0.12f;                   // _40
// float _44 =   7.0f;                    // _44
// float _48 =   1.5f;                    // _48
// float _4C =   0.06f;                   // _4C
// float _50 =  10.0f;                    // _50
// float _54 =   0.0f;                    // _54
// float _58 =   3.0f;                    // _58

namespace og {
/*
namespace newScreen {

 * __ct
 * --INFO--
 * Address:	8031A3C8
 * Size:	0000E8
 */
ObjFloor::ObjFloor(char const* name)
    : ::Screen::ObjBase()
    , _58(0.0f)
    , _5C(0.0f)
    , _68(0xFFFFFFFF)
{
	m_name         = const_cast<char*>(name);
	m_dispMember   = nullptr;
	_48            = nullptr;
	_4C            = nullptr;
	_7C            = nullptr;
	_60            = msVal._0C;
	_64            = 0;
	_68.channels.r = 0;
	_68.channels.g = 0;
	_68.channels.b = 0;
	_68.channels.a = 0xFF;
	_6C            = 0;
	_70            = 0.0f;
	_80            = 0.0f;
	_84            = 0.0f;
	_54            = nullptr;
	_88            = nullptr;
	_50            = nullptr;
	m_rulePane     = nullptr;
	_A8            = 0;
	m_buttonPane   = nullptr;
	m_loadingPane  = nullptr;
	_B8            = 1.0f;
	sprintf(m_textTag, "");
}

/*
 * --INFO--
 * Address:	8031A4B0
 * Size:	0000AC
 */
ObjFloor::~ObjFloor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8031A540
	lis      r4, __vt__Q32og9newScreen8ObjFloor@ha
	addi     r4, r4, __vt__Q32og9newScreen8ObjFloor@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8031A530
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8031A530
	lis      r4, __vt__Q26Screen8IObjBase@ha
	addi     r4, r4, __vt__Q26Screen8IObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	bl       del__5CNodeFv
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8031A530:
	extsh.   r0, r31
	ble      lbl_8031A540
	mr       r3, r30
	bl       __dl__FPv

lbl_8031A540:
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
 * Size:	000090
 */
bool newScreen::ObjFloor::isFLOOR(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
bool newScreen::ObjFloor::isCHALLENGE(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
inline bool newScreen::ObjFloor::isVS(void)
{
	// UNUSED FUNCTION
	return (((Screen::DispMemberFloor*)m_dispMember)->m_caveID < 'vs0:' && 'vs0/' < ((Screen::DispMemberFloor*)m_dispMember)->m_caveID);
}

/*
 * --INFO--
 * Address:	8031A55C
 * Size:	000460
 */
void ObjFloor::setCaveMsgID(u32 caveid, char* buffer)
{
	char* cave_msg;
	switch (caveid) {
	case 't_01': // tutorial
		cave_msg = "8395_00";
		break;
	case 't_02':
		cave_msg = "8399_00";
		break;
	case 't_03':
		cave_msg = "8400_00";
		break;
	case 'f_01': // forest
		cave_msg = "8396_00";
		break;
	case 'f_02':
		cave_msg = "8398_00";
		break;
	case 'f_03':
		cave_msg = "8401_00";
		break;
	case 'f_04':
		cave_msg = "8410_00";
		break;
	case 'y_01': // yakushima
		cave_msg = "8397_00";
		break;
	case 'y_02':
		cave_msg = "8402_00";
		break;
	case 'y_03':
		cave_msg = "8403_00";
		break;
	case 'y_04':
		cave_msg = "8411_00";
		break;
	case 'l_01': // last
		cave_msg = "8412_00";
		break;
	case 'l_02':
		cave_msg = "8413_00";
		break;
	case 'l_03':
		cave_msg = "8414_00";
		break;
	case 'c_00': // challenge mode stages
		cave_msg = "4900_00";
		break;
	case 'c_01':
		cave_msg = "4901_00";
		break;
	case 'c_02':
		cave_msg = "4902_00";
		break;
	case 'c_03':
		cave_msg = "4903_00";
		break;
	case 'c_04':
		cave_msg = "4904_00";
		break;
	case 'c_05':
		cave_msg = "4905_00";
		break;
	case 'c_06':
		cave_msg = "4906_00";
		break;
	case 'c_07':
		cave_msg = "4907_00";
		break;
	case 'c_08':
		cave_msg = "4908_00";
		break;
	case 'c_09':
		cave_msg = "4909_00";
		break;
	case 'c_10':
		cave_msg = "4910_00";
		break;
	case 'c_11':
		cave_msg = "4911_00";
		break;
	case 'c_12':
		cave_msg = "4912_00";
		break;
	case 'c_13':
		cave_msg = "4913_00";
		break;
	case 'c_14':
		cave_msg = "4914_00";
		break;
	case 'c_15':
		cave_msg = "4915_00";
		break;
	case 'c_16':
		cave_msg = "4916_00";
		break;
	case 'c_17':
		cave_msg = "4917_00";
		break;
	case 'c_18':
		cave_msg = "4918_00";
		break;
	case 'c_19':
		cave_msg = "4919_00";
		break;
	case 'c_20':
		cave_msg = "4920_00";
		break;
	case 'c_21':
		cave_msg = "4921_00";
		break;
	case 'c_22':
		cave_msg = "4922_00";
		break;
	case 'c_23':
		cave_msg = "4923_00";
		break;
	case 'c_24':
		cave_msg = "4924_00";
		break;
	case 'c_25':
		cave_msg = "4925_00";
		break;
	case 'c_26':
		cave_msg = "4926_00";
		break;
	case 'c_27':
		cave_msg = "4927_00";
		break;
	case 'c_28':
		cave_msg = "4928_00";
		break;
	case 'c_29':
		cave_msg = "4929_00";
		break;
	case 'vs00': // 2pbattle stages begin here
		cave_msg = "4770_00";
		break;
	case 'vs01':
		cave_msg = "4771_00";
		break;
	case 'vs02':
		cave_msg = "4772_00";
		break;
	case 'vs03':
		cave_msg = "4773_00";
		break;
	case 'vs04':
		cave_msg = "4774_00";
		break;
	case 'vs05':
		cave_msg = "4775_00";
		break;
	case 'vs06':
		cave_msg = "4776_00";
		break;
	case 'vs07':
		cave_msg = "4777_00";
		break;
	case 'vs08':
		cave_msg = "4778_00";
		break;
	case 'vs09':
		cave_msg = "4779_00";
		break;
	case '_uni': // vestigial test id
		cave_msg = "9996_00";
		break;
	default:
		cave_msg = "8395_00";
	}
	sprintf(buffer, "%s", cave_msg);
}

/*
 * --INFO--
 * Address:	8031A9BC
 * Size:	0008C0
 */
void ObjFloor::doCreate(JKRArchive* archive)
{
	Screen::DispMemberBase* disp = getDispMember();
	if (disp->isID(OWNER_OGA, MEMBER_FLOOR) == false) {
		if (disp->isID(OWNER_OGA, MEMBER_DUMMY) == false) {
			JUT_PANICLINE(452, "ERR! in ObjFloor Create?申?申?申s?申I\n");
		}
		disp         = new Screen::DispMemberFloor();
		m_dispMember = disp;
	} else {
		m_dispMember = disp;
	}
	_4C = new P2DScreen::Mgr_tuning();
	if (sys->m_region == System::LANG_JAPANESE) {
		_4C->set("new_font_0.blo", 0x1040000, archive);
	} else {
		_4C->set("new_font_0_eng_pal.blo", 0x1040000, archive);
	}
	_48 = new P2DScreen::Mgr_tuning();
	_48->set("font_name.blo", 0x1040000, archive);
	if (isVS()) {
		_50 = new P2DScreen::Mgr_tuning();
		_50->set("vs_title_rule_window.blo", 0x1040000, archive);
		m_rulePane                 = Screen::TagSearch(_50, 'Trule_m5');
		m_buttonPane               = Screen::TagSearch(_50, 'Pabutton');
		m_loadingPane              = Screen::TagSearch(_50, 'Tloading');
		m_buttonPane->m_isVisible  = false;
		m_loadingPane->m_isVisible = true;
		for (int i = 0; i < 6; i++) {
			// TODO: What even?
		}
		int ruleMsgIndex = msVal.m_ruleMsgIndex;
		if (msVal.m_shouldNotRandomizeRuleMsgMaybe) {
			// TODO: Rand macro when not lazy.
		}
		m_rulePane->m_messageID        = vsRuleMsgId[ruleMsgIndex];
		_90[ruleMsgIndex]->m_isVisible = true;
		m_alphaMgr                     = new Screen::AlphaMgr();
	} else {
		_50        = nullptr;
		m_rulePane = nullptr;
	}
	if (_48) {
		J2DPane* fc_c = _48->search('fc_c');
		if (fc_c->getParentPane()) {
			fc_c->getParentPane()->removeChild(fc_c);
		}
		_54 = og::Screen::setCallBack_CounterRV(_48, 'fc_r', 'fc_l', 'fc_l', (u32*)&((Screen::DispMemberFloor*)m_dispMember)->_08, 3, 2,
		                                        false, archive);
	}
	// TODO: Remove magic number
	_54->setCenteringMode(Screen::CallBack_CounterRV::ECM_UNKNOWN_2);
	Screen::setAlphaScreen(_48);
	if (_50) {
		Screen::setAlphaScreen(_50);
	}
	if (_50) {
		Screen::setCallBackMessage(_50);
	}
	if (_50) {
		_88 = new Screen::AnimGroup(2);
		registAnimGroupScreen(_88, archive, _50, "vs_title_rule_window.btk", 1.0f);
		registAnimGroupScreen(_88, archive, _50, "vs_title_rule_window_02.btk", 1.0f);
		_88->setFrame(0.0f);
		_88->setRepeat(true);
		_88->setSpeed(1.0f);
		_88->start();
	}

	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, lbl_8048EBA8@ha
	stw      r0, 0x54(r1)
	stmw     r24, 0x30(r1)
	mr       r31, r3
	mr       r29, r4
	addi     r30, r5, lbl_8048EBA8@l
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4C4F4F52@ha
	li       r5, 0x46
	mr       r24, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4F4F52@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031AA0C
	stw      r24, 0x38(r31)
	b        lbl_8031AA9C

lbl_8031AA0C:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r24
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031AA88
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8031AA80
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r5, __vt__Q32og6Screen15DispMemberFloor@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r4, 0x745F3031@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r5, __vt__Q32og6Screen15DispMemberFloor@l
	li       r5, 0x37
	stw      r7, 4(r3)
	addi     r0, r4, 0x745F3031@l
	stw      r6, 0(r3)
	stw      r5, 8(r3)
	stb      r7, 0x10(r3)
	stb      r7, 0x11(r3)
	stw      r0, 0xc(r3)
	stb      r7, 0x12(r3)

lbl_8031AA80:
	stw      r3, 0x38(r31)
	b        lbl_8031AA9C

lbl_8031AA88:
	addi     r3, r30, 0
	addi     r5, r30, 0x10
	li       r4, 0x1c4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031AA9C:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AAB4
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031AAB4:
	stw      r0, 0x4c(r31)
	lwz      r3, sys@sda21(r13)
	lwz      r0, 0xd4(r3)
	cmpwi    r0, 5
	bne      lbl_8031AAE0
	lwz      r3, 0x4c(r31)
	mr       r6, r29
	addi     r4, r30, 0x30
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	b        lbl_8031AAF4

lbl_8031AAE0:
	lwz      r3, 0x4c(r31)
	mr       r6, r29
	addi     r4, r30, 0x40
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive

lbl_8031AAF4:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AB0C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031AB0C:
	stw      r0, 0x48(r31)
	mr       r6, r29
	addi     r4, r30, 0x58
	lis      r5, 0x104
	lwz      r3, 0x48(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r4, 0x38(r31)
	lis      r3, 0x7673303A@ha
	addi     r0, r3, 0x7673303A@l
	li       r5, 0
	lwz      r4, 0xc(r4)
	cmpw     r4, r0
	bge      lbl_8031AB54
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031AB50
	b        lbl_8031AB54

lbl_8031AB50:
	li       r5, 1

lbl_8031AB54:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8031AD30
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AB74
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031AB74:
	stw      r0, 0x50(r31)
	mr       r6, r29
	addi     r4, r30, 0x68
	lis      r5, 0x104
	lwz      r3, 0x50(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x655F6D35@ha
	lis      r4, 0x5472756C@ha
	lwz      r3, 0x50(r31)
	addi     r6, r5, 0x655F6D35@l
	addi     r5, r4, 0x5472756C@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x8c(r31)
	lis      r5, 0x74746F6E@ha
	lis      r4, 0x50616275@ha
	lwz      r3, 0x50(r31)
	addi     r6, r5, 0x74746F6E@l
	addi     r5, r4, 0x50616275@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0xac(r31)
	lis      r5, 0x64696E67@ha
	lis      r4, 0x546C6F61@ha
	lwz      r3, 0x50(r31)
	addi     r6, r5, 0x64696E67@l
	addi     r5, r4, 0x546C6F61@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0xb0(r31)
	lis      r5, 0x66666667@ha
	lis      r4, 0x5F693030@ha
	lis      r3, 0x4E737562@ha
	lwz      r6, 0xac(r31)
	li       r7, 0
	li       r0, 1
	mr       r25, r31
	stb      r7, 0xb0(r6)
	addi     r26, r5, 0x66666667@l
	addi     r27, r4, 0x5F693030@l
	addi     r28, r3, 0x4E737562@l
	lwz      r3, 0xb0(r31)
	li       r24, 0
	stb      r0, 0xb0(r3)

lbl_8031AC18:
	mulhw    r7, r26, r24
	lwz      r3, 0x50(r31)
	srawi    r0, r7, 2
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	mulli    r0, r0, 0xa
	subf     r4, r0, r24
	srawi    r0, r4, 0x1f
	addc     r6, r4, r27
	adde     r5, r0, r28
	srawi    r0, r7, 2
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	slwi     r4, r0, 8
	srawi    r0, r4, 0x1f
	addc     r6, r6, r4
	adde     r5, r5, r0
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x90(r25)
	addi     r24, r24, 1
	cmpwi    r24, 6
	li       r0, 0
	lwz      r3, 0x90(r25)
	addi     r25, r25, 4
	stb      r0, 0xb0(r3)
	blt      lbl_8031AC18
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lbz      r0, 0x79(r3)
	cmplwi   r0, 0
	beq      lbl_8031AC9C
	lwz      r4, 0x74(r3)
	b        lbl_8031ACD8

lbl_8031AC9C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051DB70@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051DB60@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_8051DB64@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r4, 0x2c(r1)

lbl_8031ACD8:
	lis      r3, vsRuleMsgId__Q22og9newScreen@ha
	slwi     r0, r4, 2
	slwi     r6, r4, 3
	lwz      r5, 0x8c(r31)
	addi     r3, r3, vsRuleMsgId__Q22og9newScreen@l
	add      r4, r31, r0
	add      r7, r3, r6
	li       r0, 1
	lwz      r6, 0(r7)
	li       r3, 0x18
	lwz      r7, 4(r7)
	stw      r7, 0x1c(r5)
	stw      r6, 0x18(r5)
	lwz      r4, 0x90(r4)
	stb      r0, 0xb0(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AD28
	bl       __ct__Q32og6Screen8AlphaMgrFv
	mr       r0, r3

lbl_8031AD28:
	stw      r0, 0xb4(r31)
	b        lbl_8031AD3C

lbl_8031AD30:
	li       r0, 0
	stw      r0, 0x50(r31)
	stw      r0, 0x8c(r31)

lbl_8031AD3C:
	lwz      r3, 0x48(r31)
	cmplwi   r3, 0
	beq      lbl_8031ADE0
	lwz      r12, 0(r3)
	lis      r4, 0x66635F63@ha
	addi     r6, r4, 0x66635F63@l
	li       r5, 0
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r24, r3
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_8031AD84
	mr       r3, r24
	bl       getParentPane__7J2DPaneFv
	mr       r4, r24
	bl       removeChild__7J2DPaneFP7J2DPane

lbl_8031AD84:
	lwz      r4, 0x38(r31)
	lis      r3, 0x66635F6C@ha
	addi     r8, r3, 0x66635F6C@l
	li       r5, 3
	addi     r0, r4, 8
	li       r4, 2
	stw      r0, 8(r1)
	li       r0, 0
	mr       r10, r8
	addi     r6, r3, 0x5f72
	stw      r5, 0xc(r1)
	li       r5, 0
	li       r7, 0
	li       r9, 0
	stw      r4, 0x10(r1)
	stw      r0, 0x14(r1)
	stw      r29, 0x18(r1)
	lwz      r3, 0x48(r31)
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
	stw      r3, 0x54(r31)
	li       r4, 2
	lwz      r3, 0x54(r31)
	bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode

lbl_8031ADE0:
	lwz      r3, 0x48(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	beq      lbl_8031ADF8
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane

lbl_8031ADF8:
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	beq      lbl_8031AE08
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr

lbl_8031AE08:
	lwz      r0, 0x50(r31)
	cmplwi   r0, 0
	beq      lbl_8031AE90
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031AE30
	li       r4, 2
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_8031AE30:
	stw      r0, 0x88(r31)
	mr       r4, r29
	lfs      f1, lbl_8051D99C@sda21(r2)
	addi     r6, r30, 0x84
	lwz      r3, 0x88(r31)
	lwz      r5, 0x50(r31)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwz      r3, 0x88(r31)
	mr       r4, r29
	lwz      r5, 0x50(r31)
	addi     r6, r30, 0xa0
	lfs      f1, lbl_8051D99C@sda21(r2)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwz      r3, 0x88(r31)
	lfs      f1, lbl_8051D998@sda21(r2)
	bl       setFrame__Q32og6Screen9AnimGroupFf
	lwz      r3, 0x88(r31)
	li       r4, 1
	bl       setRepeat__Q32og6Screen9AnimGroupFb
	lwz      r3, 0x88(r31)
	lfs      f1, lbl_8051D99C@sda21(r2)
	bl       setSpeed__Q32og6Screen9AnimGroupFf
	lwz      r3, 0x88(r31)
	bl       start__Q32og6Screen9AnimGroupFv

lbl_8031AE90:
	lwz      r3, 0x38(r31)
	lis      r5, 0x745F3031@ha
	addi     r0, r5, 0x745F3031@l
	li       r24, 0
	lwz      r4, 0xc(r3)
	li       r6, 0
	cmpw     r4, r0
	bge      lbl_8031AEF0
	lis      r3, 0x6C5F3031@ha
	addi     r0, r3, 0x6C5F3031@l
	cmpw     r4, r0
	bge      lbl_8031AEE0
	lis      r3, 0x665F3035@ha
	addi     r0, r3, 0x665F3035@l
	cmpw     r4, r0
	bge      lbl_8031AF20
	addi     r0, r3, 0x3031
	cmpw     r4, r0
	bge      lbl_8031AF1C
	b        lbl_8031AF20

lbl_8031AEE0:
	addi     r0, r3, 0x3034
	cmpw     r4, r0
	bge      lbl_8031AF20
	b        lbl_8031AF1C

lbl_8031AEF0:
	lis      r3, 0x795F3031@ha
	addi     r0, r3, 0x795F3031@l
	cmpw     r4, r0
	bge      lbl_8031AF10
	addi     r0, r5, 0x3034
	cmpw     r4, r0
	bge      lbl_8031AF20
	b        lbl_8031AF1C

lbl_8031AF10:
	addi     r0, r3, 0x3035
	cmpw     r4, r0
	bge      lbl_8031AF20

lbl_8031AF1C:
	li       r6, 1

lbl_8031AF20:
	clrlwi.  r0, r6, 0x18
	beq      lbl_8031AF30
	li       r24, 1
	b        lbl_8031AFE4

lbl_8031AF30:
	lis      r3, 0x635F3130@ha
	li       r5, 0
	addi     r0, r3, 0x635F3130@l
	cmpw     r4, r0
	bge      lbl_8031AF74
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031AF64
	lis      r3, 0x5F756E69@ha
	addi     r0, r3, 0x5F756E69@l
	cmpw     r4, r0
	beq      lbl_8031AF9C
	b        lbl_8031AFA0

lbl_8031AF64:
	addi     r0, r3, 0x303a
	cmpw     r4, r0
	bge      lbl_8031AFA0
	b        lbl_8031AF9C

lbl_8031AF74:
	addi     r0, r3, 0x3230
	cmpw     r4, r0
	bge      lbl_8031AF90
	addi     r0, r3, 0x313a
	cmpw     r4, r0
	bge      lbl_8031AFA0
	b        lbl_8031AF9C

lbl_8031AF90:
	addi     r0, r3, 0x323a
	cmpw     r4, r0
	bge      lbl_8031AFA0

lbl_8031AF9C:
	li       r5, 1

lbl_8031AFA0:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8031AFB0
	li       r24, 0
	b        lbl_8031AFE4

lbl_8031AFB0:
	lis      r3, 0x7673303A@ha
	li       r5, 0
	addi     r0, r3, 0x7673303A@l
	cmpw     r4, r0
	bge      lbl_8031AFD8
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031AFD4
	b        lbl_8031AFD8

lbl_8031AFD4:
	li       r5, 1

lbl_8031AFD8:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8031AFE4
	li       r24, 2

lbl_8031AFE4:
	mr       r3, r31
	addi     r5, r31, 0x3c
	bl       setCaveMsgID__Q32og9newScreen8ObjFloorFUlPc
	cmpwi    r24, 1
	beq      lbl_8031B014
	bge      lbl_8031B008
	cmpwi    r24, 0
	bge      lbl_8031B078
	b        lbl_8031B168

lbl_8031B008:
	cmpwi    r24, 3
	bge      lbl_8031B168
	b        lbl_8031B104

lbl_8031B014:
	li       r3, 0x13e4
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B05C
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen12TitleMsgDropFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B05C:
	stw      r24, 0x74(r31)
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x50(r3)
	lwz      r3, 0x74(r31)
	stfs     f0, 0x7dc(r3)
	b        lbl_8031B1B4

lbl_8031B078:
	li       r3, 0xbf8
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B0C0
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen12TitleMsgWaveFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B0C0:
	mr       r3, r24
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r12, 0(r24)
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f1, 0x40(r4)
	lwz      r12, 0x18(r12)
	lfs      f2, 0x44(r4)
	lfs      f3, 0x48(r4)
	lfs      f4, 0x4c(r4)
	mtctr    r12
	bctrl
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x54(r3)
	stfs     f0, 0x7dc(r24)
	stw      r24, 0x74(r31)
	b        lbl_8031B1B4

lbl_8031B104:
	li       r3, 0x9ec
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B14C
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen13TitleMsgClashFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B14C:
	stw      r24, 0x74(r31)
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x58(r3)
	lwz      r3, 0x74(r31)
	stfs     f0, 0x7dc(r3)
	b        lbl_8031B1B4

lbl_8031B168:
	li       r3, 0x7e4
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B1B0
	lwz      r3, 0x48(r31)
	lis      r4, 0x69746C65@ha
	addi     r6, r4, 0x69746C65@l
	li       r5, 0x74
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r31, 0x3c
	bl       __ct__Q32og9newScreen8TitleMsgFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B1B0:
	stw      r24, 0x74(r31)

lbl_8031B1B4:
	lwz      r3, 0x74(r31)
	li       r4, 2
	bl
setCentering__Q32og9newScreen8TitleMsgFQ42og9newScreen8TitleMsg13EnumCentering
	lwz      r3, 0x74(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x7e4
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8031B21C
	lwz      r3, 0x48(r31)
	lis      r4, 0x68696B61@ha
	addi     r6, r4, 0x68696B61@l
	li       r5, 0x63
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x4c(r31)
	mr       r5, r3
	mr       r3, r24
	addi     r6, r2, lbl_8051DB68@sda21
	bl       __ct__Q32og9newScreen8TitleMsgFP9J2DScreenP7J2DPanePc
	mr       r24, r3

lbl_8031B21C:
	stw      r24, 0x78(r31)
	li       r4, 1
	lwz      r3, 0x78(r31)
	bl
setCentering__Q32og9newScreen8TitleMsgFQ42og9newScreen8TitleMsg13EnumCentering
	lwz      r3, 0x48(r31)
	lis      r4, 0x69737575@ha
	addi     r6, r4, 0x69737575@l
	li       r5, 0x6b61
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x7c(r31)
	lwz      r3, 0x7c(r31)
	lfs      f0, 0xd4(r3)
	stfs     f0, 0x80(r31)
	lwz      r3, 0x7c(r31)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x84(r31)
	lmw      r24, 0x30(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031B27C
 * Size:	000004
 */
void TitleMsg::init() { }

/*
 * --INFO--
 * Address:	8031B280
 * Size:	000598
 */
bool newScreen::ObjFloor::commonUpdate(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r28, r3
	li       r30, 0
	li       r29, 0
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4C4F4F52@ha
	li       r5, 0x46
	mr       r26, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4F4F52@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031B2C8
	mr       r29, r26

lbl_8031B2C8:
	lwz      r4, 0x38(r28)
	lis      r3, 0x7673303A@ha
	addi     r0, r3, 0x7673303A@l
	li       r31, 0
	lwz      r4, 0xc(r4)
	cmpw     r4, r0
	bge      lbl_8031B2F8
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031B2F4
	b        lbl_8031B2F8

lbl_8031B2F4:
	li       r31, 1

lbl_8031B2F8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8031B34C
	cmplwi   r29, 0
	beq      lbl_8031B34C
	lbz      r0, 0xa8(r28)
	cmplwi   r0, 0
	bne      lbl_8031B34C
	lbz      r0, 0x12(r29)
	cmplwi   r0, 0
	beq      lbl_8031B34C
	li       r0, 1
	lfs      f1, lbl_8051DB78@sda21(r2)
	stb      r0, 0xa8(r28)
	lfs      f2, lbl_8051D99C@sda21(r2)
	lwz      r3, 0xac(r28)
	stb      r0, 0xb0(r3)
	lwz      r3, 0xb4(r28)
	bl       setBlinkArea__Q32og6Screen8AlphaMgrFff
	lwz      r3, 0xb4(r28)
	lfs      f1, lbl_8051D99C@sda21(r2)
	bl       blink__Q32og6Screen8AlphaMgrFf

lbl_8031B34C:
	lwz      r0, 0x50(r28)
	cmplwi   r0, 0
	beq      lbl_8031B3F4
	lbz      r0, 0xa8(r28)
	cmplwi   r0, 0
	beq      lbl_8031B3EC
	lwz      r3, 0xb4(r28)
	bl       calc__Q32og6Screen8AlphaMgrFv
	mr       r0, r3
	lwz      r3, 0xac(r28)
	mr       r4, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xb8(r28)
	lfs      f2, lbl_8051D998@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_8031B3C0
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_8051DB78@sda21(r2)
	lfs      f1, 0x54(r3)
	fdivs    f0, f1, f0
	fsubs    f0, f3, f0
	stfs     f0, 0xb8(r28)
	lfs      f0, 0xb8(r28)
	fcmpo    cr0, f0, f2
	bge      lbl_8031B3C0
	stfs     f2, 0xb8(r28)

lbl_8031B3C0:
	lfs      f1, lbl_8051DB7C@sda21(r2)
	lfs      f0, 0xb8(r28)
	lwz      r3, 0xb0(r28)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl

lbl_8031B3EC:
	lwz      r3, 0x88(r28)
	bl       update__Q32og6Screen9AnimGroupFv

lbl_8031B3F4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8031B474
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r0, 8(r29)
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f3, 0x80(r28)
	lfs      f2, 0x2c(r3)
	cmplwi   r0, 0xa
	lfs      f1, 0x84(r28)
	lfs      f0, 0x30(r3)
	fadds    f2, f3, f2
	fadds    f1, f1, f0
	bge      lbl_8031B430
	lfs      f0, 0x3c(r3)
	fadds    f2, f2, f0

lbl_8031B430:
	lwz      r3, 0x7c(r28)
	stfs     f2, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r3, 0x7c(r28)
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, 0x34(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031B474:
	lwz      r3, 0x50(r28)
	cmplwi   r3, 0
	beq      lbl_8031B490
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_8031B490:
	lwz      r5, 0x38(r28)
	lis      r6, 0x745F3031@ha
	addi     r4, r6, 0x745F3031@l
	li       r3, 0
	lwz      r0, 0xc(r5)
	li       r7, 0
	cmpw     r0, r4
	bge      lbl_8031B4F0
	lis      r4, 0x6C5F3031@ha
	addi     r5, r4, 0x6C5F3031@l
	cmpw     r0, r5
	bge      lbl_8031B4E0
	lis      r4, 0x665F3035@ha
	addi     r5, r4, 0x665F3035@l
	cmpw     r0, r5
	bge      lbl_8031B520
	addi     r4, r4, 0x3031
	cmpw     r0, r4
	bge      lbl_8031B51C
	b        lbl_8031B520

lbl_8031B4E0:
	addi     r4, r4, 0x3034
	cmpw     r0, r4
	bge      lbl_8031B520
	b        lbl_8031B51C

lbl_8031B4F0:
	lis      r4, 0x795F3031@ha
	addi     r5, r4, 0x795F3031@l
	cmpw     r0, r5
	bge      lbl_8031B510
	addi     r4, r6, 0x3034
	cmpw     r0, r4
	bge      lbl_8031B520
	b        lbl_8031B51C

lbl_8031B510:
	addi     r4, r4, 0x3035
	cmpw     r0, r4
	bge      lbl_8031B520

lbl_8031B51C:
	li       r7, 1

lbl_8031B520:
	clrlwi.  r4, r7, 0x18
	beq      lbl_8031B530
	li       r3, 0
	b        lbl_8031B5E4

lbl_8031B530:
	lis      r5, 0x635F3130@ha
	li       r6, 0
	addi     r4, r5, 0x635F3130@l
	cmpw     r0, r4
	bge      lbl_8031B574
	addi     r4, r5, 0x3030
	cmpw     r0, r4
	bge      lbl_8031B564
	lis      r4, 0x5F756E69@ha
	addi     r4, r4, 0x5F756E69@l
	cmpw     r0, r4
	beq      lbl_8031B59C
	b        lbl_8031B5A0

lbl_8031B564:
	addi     r4, r5, 0x303a
	cmpw     r0, r4
	bge      lbl_8031B5A0
	b        lbl_8031B59C

lbl_8031B574:
	addi     r4, r5, 0x3230
	cmpw     r0, r4
	bge      lbl_8031B590
	addi     r4, r5, 0x313a
	cmpw     r0, r4
	bge      lbl_8031B5A0
	b        lbl_8031B59C

lbl_8031B590:
	addi     r4, r5, 0x323a
	cmpw     r0, r4
	bge      lbl_8031B5A0

lbl_8031B59C:
	li       r6, 1

lbl_8031B5A0:
	clrlwi.  r4, r6, 0x18
	beq      lbl_8031B5B0
	li       r3, 1
	b        lbl_8031B5E4

lbl_8031B5B0:
	lis      r4, 0x7673303A@ha
	li       r6, 0
	addi     r5, r4, 0x7673303A@l
	cmpw     r0, r5
	bge      lbl_8031B5D8
	addi     r4, r4, 0x3030
	cmpw     r0, r4
	bge      lbl_8031B5D4
	b        lbl_8031B5D8

lbl_8031B5D4:
	li       r6, 1

lbl_8031B5D8:
	clrlwi.  r0, r6, 0x18
	beq      lbl_8031B5E4
	li       r3, 2

lbl_8031B5E4:
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	slwi     r26, r3, 2
	addi     r0, r4, msVal__Q32og9newScreen8ObjFloor@l
	lwz      r3, 0x74(r28)
	add      r4, r0, r26
	addi     r27, r4, 0x5c
	addi     r29, r4, 0x68
	mr       r4, r27
	mr       r5, r29
	bl setColor__Q32og9newScreen8TitleMsgFRQ28JUtility6TColorRQ28JUtility6TColor
	lwz      r3, 0x78(r28)
	mr       r4, r27
	mr       r5, r29
	bl setColor__Q32og9newScreen8TitleMsgFRQ28JUtility6TColorRQ28JUtility6TColor
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lwz      r5, 0x54(r28)
	addi     r0, r3, msVal__Q32og9newScreen8ObjFloor@l
	addi     r4, r1, 0xc
	add      r3, r0, r26
	lwz      r27, 0x6c(r5)
	lwz      r0, 0x5c(r3)
	mr       r3, r27
	stw      r0, 0xc(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	mr       r3, r27
	addi     r0, r4, msVal__Q32og9newScreen8ObjFloor@l
	addi     r4, r1, 8
	add      r5, r0, r26
	lwz      r0, 0x68(r5)
	stw      r0, 8(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r31, 0x18
	beq      lbl_8031B6D4
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f2, 0x20(r3)
	lfs      f4, 0x24(r3)
	fadds    f3, f2, f1
	lwz      r4, 0x48(r28)
	fadds    f2, f4, f0
	lfs      f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stfs     f3, 0x140(r4)
	stfs     f2, 0x144(r4)
	lfs      f2, 0x28(r3)
	lwz      r3, 0x48(r28)
	fmuls    f1, f2, f1
	fmuls    f0, f2, f0
	stfs     f1, 0x138(r3)
	stfs     f0, 0x13c(r3)
	b        lbl_8031B720

lbl_8031B6D4:
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	addi     r3, r3, msVal__Q32og9newScreen8ObjFloor@l
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f2, 0x10(r3)
	lfs      f4, 0x14(r3)
	fadds    f3, f2, f1
	lwz      r4, 0x48(r28)
	fadds    f2, f4, f0
	lfs      f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stfs     f3, 0x140(r4)
	stfs     f2, 0x144(r4)
	lfs      f2, 0x18(r3)
	lwz      r3, 0x48(r28)
	fmuls    f1, f2, f1
	fmuls    f0, f2, f0
	stfs     f1, 0x138(r3)
	stfs     f0, 0x13c(r3)

lbl_8031B720:
	lwz      r3, 0x48(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x74(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x78(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x64(r28)
	cmplwi   r0, 0
	beq      lbl_8031B794
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x60(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051D998@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x60(r28)
	lfs      f1, 0x60(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_8031B800
	li       r30, 1
	b        lbl_8031B800

lbl_8031B794:
	mr       r3, r28
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4C4F4F52@ha
	mr       r29, r3
	li       r5, 0x46
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4C4F4F52@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031B800
	lbz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_8031B7EC
	li       r0, 1
	stb      r0, 0x64(r28)
	stb      r0, 0x6c(r28)
	lwz      r3, 0x74(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8031B7EC:
	lbz      r0, 0x11(r29)
	cmplwi   r0, 0
	beq      lbl_8031B800
	li       r0, 1
	stb      r0, 0x6c(r28)

lbl_8031B800:
	mr       r3, r30
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031B818
 * Size:	000004
 */
void TitleMsg::end() { }

/*
 * --INFO--
 * Address:	8031B81C
 * Size:	000004
 */
void TitleMsg::update() { }

/*
 * --INFO--
 * Address:	8031B820
 * Size:	000020
 */
bool newScreen::ObjFloor::doUpdate()
{
	return commonUpdate();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       commonUpdate__Q32og9newScreen8ObjFloorFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031B840
 * Size:	00019C
 */
void ObjFloor::doDraw(Graphics& graphics)
{
	j3dSys.reinitGX();
	drawBG(graphics);
	if (_50) {
		_50->setAlpha(_5C * 255.0f);
		_50->draw(graphics, graphics.m_perspGraph);
	}
	graphics.m_perspGraph.setPort();
	particle2dMgr->draw(2, 0);
	_48->setAlpha(_5C * 255.0f);
	_48->draw(graphics, graphics.m_perspGraph);
	graphics.m_perspGraph.setPort();
	if (isVS()) {
		_7C->m_isVisible = false;
	} else {
		_7C->m_isVisible = true;
	}
	graphics.m_perspGraph.setPort();
	j3dSys.reinitGX();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r5, j3dSys@l
	bl       reinitGX__6J3DSysFv
	mr       r3, r29
	mr       r4, r30
	bl       drawBG__Q32og9newScreen8ObjFloorFR8Graphics
	lwz      r3, 0x50(r29)
	addi     r31, r30, 0x190
	cmplwi   r3, 0
	beq      lbl_8031B8CC
	lfs      f1, lbl_8051DB7C@sda21(r2)
	lfs      f0, 0x5c(r29)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0x24(r12)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x50(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_8031B8CC:
	addi     r3, r30, 0x190
	lwz      r12, 0x190(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 2
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lfs      f1, lbl_8051DB7C@sda21(r2)
	lfs      f0, 0x5c(r29)
	lwz      r3, 0x48(r29)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x38(r29)
	lis      r3, 0x7673303A@ha
	addi     r0, r3, 0x7673303A@l
	li       r5, 0
	lwz      r4, 0xc(r4)
	cmpw     r4, r0
	bge      lbl_8031B97C
	addi     r0, r3, 0x3030
	cmpw     r4, r0
	bge      lbl_8031B978
	b        lbl_8031B97C

lbl_8031B978:
	li       r5, 1

lbl_8031B97C:
	clrlwi.  r0, r5, 0x18
	bne      lbl_8031B994
	lwz      r3, 0x7c(r29)
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_8031B9A0

lbl_8031B994:
	lwz      r3, 0x7c(r29)
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_8031B9A0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       reinitGX__6J3DSysFv
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
 * Address:	8031B9DC
 * Size:	000034
 */
bool newScreen::ObjFloor::doStart(::Screen::StartSceneArg const* arg)
{
	_58 = 0.0f;
	_5C = 0.0f;
	particle2dMgr->killAll();
	return true;
}

/*
 * --INFO--
 * Address:	8031BA10
 * Size:	000010
 */
bool newScreen::ObjFloor::doEnd(::Screen::EndSceneArg const* arg)
{
	_58 = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031BA20
 * Size:	000004
 */
void ObjFloor::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031BA24
 * Size:	000030
 */
void ObjFloor::doUpdateFinish(void)
{
	_58 = 0.0f;
	particle2dMgr->killGroup(2);
}

/*
 * --INFO--
 * Address:	8031BA54
 * Size:	000004
 */
void ObjFloor::doUpdateFadeoutFinish(void) { }

/*
 * --INFO--
 * Address:	8031BA58
 * Size:	000074
 */
bool newScreen::ObjFloor::doUpdateFadein(void)
{
	_58 += sys->m_secondsPerFrame;
	bool result = ObjFloor::msVal._04 < _58;
	if (result) {
		_58 = ObjFloor::msVal._04;
	}
	_5C = _58 / ObjFloor::msVal._04;
	commonUpdate();
	return result;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x58(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x58(r3)
	lfs      f0, 0x58(r3)
	lfs      f1, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_8031BAA0
	stfs     f1, 0x58(r3)
	li       r31, 1

lbl_8031BAA0:
	lfs      f1, 0x58(r3)
	lfs      f0, 4(r4)
	fdivs    f0, f1, f0
	stfs     f0, 0x5c(r3)
	bl       commonUpdate__Q32og9newScreen8ObjFloorFv
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
 * Address:	8031BACC
 * Size:	000088
 */
bool newScreen::ObjFloor::doUpdateFadeout()
{
	_58 += sys->m_secondsPerFrame;
	bool result = ObjFloor::msVal._08 < _58;
	if (result) {
		_58 = ObjFloor::msVal._08;
		if (_6C != 0) {
			result = false;
		}
	}
	_5C = 1.0f - _58 / ObjFloor::msVal._08;
	commonUpdate();
	return result;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x58(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x58(r3)
	lfs      f0, 0x58(r3)
	lfs      f1, 8(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_8031BB20
	stfs     f1, 0x58(r3)
	lbz      r0, 0x6c(r3)
	cmplwi   r0, 0
	bne      lbl_8031BB20
	li       r31, 1

lbl_8031BB20:
	lfs      f1, 0x58(r3)
	lfs      f0, 8(r4)
	lfs      f2, lbl_8051D99C@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x5c(r3)
	bl       commonUpdate__Q32og9newScreen8ObjFloorFv
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
 * Address:	8031BB54
 * Size:	000168
 */
void ObjFloor::drawBG(Graphics& gfx)
{
	if (_6C != 0) {
		_70 += sys->m_secondsPerFrame;
		float flt = 1.0f - _70 / ObjFloor::msVal._00;
		if (flt <= 0.0f) {
			_68.channels.a = 0;
			_6C            = 0;
		} else {
			_68.channels.a = (u8)(flt * 255.0f);
		}
	}
	if (_68.channels.a != 0) {
		gfx.m_perspGraph.setPort();
		u32 v1 = System::getRenderModeObj()->efbHeight;
		u32 v2 = System::getRenderModeObj()->xfbHeight;
		gfx.m_perspGraph.setColor(_68, _68, _68, _68);
		GXSetAlphaUpdate(GX_FALSE);
		JGeometry::TBox2f box(0.0f, 0.0f, v1, v2);
		// box.maxX = v1;
		// box.minX = 0.0f;
		// box.minY = 0.0f;
		// box.maxY = v2;
		gfx.m_perspGraph.fillBox(box);
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	addi     r31, r4, 0x190
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	mr       r28, r3
	lbz      r0, 0x6c(r3)
	cmplwi   r0, 0
	beq      lbl_8031BBE4
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lfs      f1, 0x70(r28)
	lfs      f0, 0x54(r4)
	lfs      f3, lbl_8051D99C@sda21(r2)
	fadds    f1, f1, f0
	lfs      f0, lbl_8051D998@sda21(r2)
	stfs     f1, 0x70(r28)
	lfs      f2, 0x70(r28)
	lfs      f1, msVal__Q32og9newScreen8ObjFloor@l(r3)
	fdivs    f1, f2, f1
	fsubs    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8031BBD8
	lfs      f0, lbl_8051DB7C@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stb      r0, 0x6b(r28)
	b        lbl_8031BBE4

lbl_8031BBD8:
	li       r0, 0
	stb      r0, 0x6b(r28)
	stb      r0, 0x6c(r28)

lbl_8031BBE4:
	lbz      r0, 0x6b(r28)
	cmplwi   r0, 0
	beq      lbl_8031BC9C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 6(r3)
	mr       r3, r31
	lwz      r0, 0x68(r28)
	addi     r4, r1, 8
	addi     r5, r1, 0xc
	addi     r6, r1, 0x10
	stw      r0, 0x18(r1)
	addi     r7, r1, 0x14
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	lis      r0, 0x4330
	lfs      f3, lbl_8051D998@sda21(r2)
	stw      r30, 0x34(r1)
	mr       r3, r31
	lfd      f2, lbl_8051DB80@sda21(r2)
	addi     r4, r1, 0x1c
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

lbl_8031BC9C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

} // namespace og

} // newScreen

/*
 * --INFO--
 * Address:	8031BCBC
 * Size:	00019C
 */
void __sinit_ogObjFloor_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	lis      r3, __ct__Q28JUtility6TColorFv@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	li       r5, 0
	li       r6, 4
	stw      r31, 0xc(r1)
	addi     r31, r4, 0x5c
	addi     r4, r3, __ct__Q28JUtility6TColorFv@l
	li       r7, 3
	stw      r30, 8(r1)
	mr       r3, r31
	bl       __construct_array
	lis      r4, msVal__Q32og9newScreen8ObjFloor@ha
	lis      r3, __ct__Q28JUtility6TColorFv@ha
	addi     r4, r4, msVal__Q32og9newScreen8ObjFloor@l
	li       r5, 0
	addi     r30, r4, 0x68
	li       r6, 4
	addi     r4, r3, __ct__Q28JUtility6TColorFv@l
	li       r7, 3
	mr       r3, r30
	bl       __construct_array
	lis      r3, msVal__Q32og9newScreen8ObjFloor@ha
	lfs      f13, lbl_8051DB88@sda21(r2)
	addi     r8, r3, msVal__Q32og9newScreen8ObjFloor@l
	li       r7, 0xff
	li       r5, 0
	lfs      f9, lbl_8051D998@sda21(r2)
	lfs      f12, lbl_8051D99C@sda21(r2)
	li       r3, 0x64
	lfs      f10, lbl_8051DB90@sda21(r2)
	li       r6, 0xc8
	lfs      f8, lbl_8051DB94@sda21(r2)
	li       r4, 0x32
	lfs      f5, lbl_8051DBA0@sda21(r2)
	li       r0, 0x9c
	lfs      f11, lbl_8051DB8C@sda21(r2)
	lfs      f7, lbl_8051DB98@sda21(r2)
	lfs      f6, lbl_8051DB9C@sda21(r2)
	lfs      f4, lbl_8051DBA4@sda21(r2)
	lfs      f3, lbl_8051DBA8@sda21(r2)
	lfs      f2, lbl_8051DBAC@sda21(r2)
	lfs      f1, lbl_8051DBB0@sda21(r2)
	lfs      f0, lbl_8051DBB4@sda21(r2)
	stfs     f13, 0(r8)
	stfs     f12, 4(r8)
	stfs     f11, 8(r8)
	stfs     f10, 0xc(r8)
	stfs     f9, 0x10(r8)
	stfs     f8, 0x14(r8)
	stfs     f12, 0x18(r8)
	stfs     f7, 0x1c(r8)
	stfs     f9, 0x20(r8)
	stfs     f6, 0x24(r8)
	stfs     f12, 0x28(r8)
	stfs     f8, 0x2c(r8)
	stfs     f9, 0x30(r8)
	stfs     f5, 0x34(r8)
	stfs     f9, 0x38(r8)
	stfs     f4, 0x3c(r8)
	stfs     f3, 0x40(r8)
	stfs     f2, 0x44(r8)
	stfs     f5, 0x48(r8)
	stfs     f1, 0x4c(r8)
	stb      r7, 0(r31)
	stb      r7, 0x5d(r8)
	stb      r6, 0x5e(r8)
	stb      r7, 0x5f(r8)
	stb      r5, 0(r30)
	stb      r5, 0x69(r8)
	stb      r4, 0x6a(r8)
	stb      r5, 0x6b(r8)
	stb      r7, 0x60(r8)
	stb      r7, 0x61(r8)
	stb      r7, 0x62(r8)
	stb      r7, 0x63(r8)
	stb      r3, 0x6c(r8)
	stb      r3, 0x6d(r8)
	stb      r5, 0x6e(r8)
	stb      r5, 0x6f(r8)
	stb      r7, 0x64(r8)
	stb      r7, 0x65(r8)
	stb      r0, 0x66(r8)
	stb      r7, 0x67(r8)
	stb      r7, 0x70(r8)
	stb      r7, 0x71(r8)
	stb      r5, 0x72(r8)
	stb      r5, 0x73(r8)
	stb      r5, 0x78(r8)
	stfs     f0, 0x50(r8)
	stfs     f9, 0x54(r8)
	stfs     f10, 0x58(r8)
	stw      r5, 0x74(r8)
	stb      r5, 0x79(r8)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
