#include "Dolphin/stl.h"
#include "Dolphin/string.h"
#include "System.h"
#include "types.h"
#include "Game/GameConfig.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_gameConfig_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A428
    lbl_8049A428:
        .4byte 0x67616D65
        .4byte 0x436F6E66
        .4byte 0x69670000
        .4byte 0x47616D65
        .4byte 0x436F6E66
        .4byte 0x69670000
        .4byte 0x67616D65
        .4byte 0x5072696E
        .4byte 0x74000000
        .4byte 0x6F676177
        .4byte 0x61507269
        .4byte 0x6E740000
        .4byte 0x7368696D
        .4byte 0x697A7550
        .4byte 0x72696E74
        .4byte 0x00000000
        .4byte 0x79616D61
        .4byte 0x73686974
        .4byte 0x61507269
        .4byte 0x6E740000
        .4byte 0x6B616E64
        .4byte 0x6F507269
        .4byte 0x6E740000
        .4byte 0x6E697368
        .4byte 0x696D7572
        .4byte 0x61507269
        .4byte 0x6E740000
        .4byte 0x65626973
        .4byte 0x61776150
        .4byte 0x72696E74
        .4byte 0x00000000
        .4byte 0x6D6F7269
        .4byte 0x6D757261
        .4byte 0x5072696E
        .4byte 0x74000000
        .4byte 0x6B6F6E6F
        .4byte 0x5072696E
        .4byte 0x74000000
        .4byte 0x66756A69
        .4byte 0x6E6F5072
        .4byte 0x696E7400
        .4byte 0x70736F75
        .4byte 0x6E645072
        .4byte 0x696E7400
        .4byte 0x73686F72
        .4byte 0x74437574
        .4byte 0x55700000
        .4byte 0x73686F72
        .4byte 0x74437574
        .4byte 0x446F776E
        .4byte 0x00000000
        .4byte 0x73686F72
        .4byte 0x74437574
        .4byte 0x4C656674
        .4byte 0x00000000
        .4byte 0x73686F72
        .4byte 0x74437574
        .4byte 0x52696768
        .4byte 0x74000000
        .4byte 0x616C6C6F
        .4byte 0x63416C6C
        .4byte 0x456E656D
        .4byte 0x79000000
        .4byte 0x6D617070
        .4byte 0x61727473
        .4byte 0x5F706174
        .4byte 0x68000000
        .4byte 0x7075626C
        .4byte 0x69636974
        .4byte 0x79000000
        .4byte 0x70656C6C
        .4byte 0x65744D75
        .4byte 0x6C74694C
        .4byte 0x616E6700
        .4byte 0x76734465
        .4byte 0x61746854
        .4byte 0x79706500
        .4byte 0x45337665
        .4byte 0x7273696F
        .4byte 0x6E000000
        .4byte 0x6D756B6B
        .4byte 0x695F6368
        .4byte 0x65727279
        .4byte 0x00000000
        .4byte 0x6D617269
        .4byte 0x6F436C75
        .4byte 0x62446576
        .4byte 0x656C6F70
        .4byte 0x00000000
        .4byte 0x68656170
        .4byte 0x53746174
        .4byte 0x75735072
        .4byte 0x696E7400
        .4byte 0x68656170
        .4byte 0x46726565
        .4byte 0x53697A65
        .4byte 0x00000000
        .4byte 0x62617365
        .4byte 0x47616D65
        .4byte 0x4E657743
        .4byte 0x6865636B
        .4byte 0x00000000
        .4byte 0x4B466573
        .4byte 0x56657273
        .4byte 0x696F6E00
        .4byte 0x6E696E74
        .4byte 0x656E646F
        .4byte 0x56657273
        .4byte 0x696F6E00
        .4byte 0x6C616E67
        .4byte 0x75616765
        .4byte 0x00000000
        .4byte 0x6175746F
        .4byte 0x73617665
        .4byte 0x4F666600
        .4byte 0x76734465
        .4byte 0x62756753
        .4byte 0x656C6563
        .4byte 0x74506174
        .4byte 0x7465726E
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game10GameConfig5Parms
    __vt__Q34Game10GameConfig5Parms:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game10GameConfig5ParmsFv
        .4byte getChildCount__5CNodeFv

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global gGameConfig__4Game
    gGameConfig__4Game:
        .skip 0x27C

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520710
    lbl_80520710:
        .4byte 0x00000000
    .global lbl_80520714
    lbl_80520714:
        .4byte 0x5072696E
        .4byte 0x74000000
    .global lbl_8052071C
    lbl_8052071C:
        .4byte 0x41490000
    .global lbl_80520720
    lbl_80520720:
        .4byte 0x74696D65
        .4byte 0x72730000
    .global lbl_80520728
    lbl_80520728:
        .4byte 0x76735465
        .4byte 0x73740000
    .global lbl_80520730
    lbl_80520730:
        .4byte 0x76734869
        .4byte 0x62610000
    .global lbl_80520738
    lbl_80520738:
        .4byte 0x76735900
    .global lbl_8052073C
    lbl_8052073C:
        .4byte 0x76734669
        .4byte 0x666F0000
    .global lbl_80520744
    lbl_80520744:
        .4byte 0x656E6700
    .global lbl_80520748
    lbl_80520748:
        .4byte 0x66726100
    .global lbl_8052074C
    lbl_8052074C:
        .4byte 0x67657200
    .global lbl_80520750
    lbl_80520750:
        .4byte 0x686F6C00
    .global lbl_80520754
    lbl_80520754:
        .4byte 0x69746100
    .global lbl_80520758
    lbl_80520758:
        .4byte 0x6A706E00
    .global lbl_8052075C
    lbl_8052075C:
        .4byte 0x73706100
*/



// TODO: How is this string actually (not) used?
// DEFINE__PRINT("gameConfig");
// void fakeMatch_printGameConfig() { printf("gameConfig"); }

namespace Game {

extern GameConfig gGameConfig;

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
// void GameConfig::setConstSetting()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q24Game10GameConfigFv
 * --INFO--
 * Address:	80432170
 * Size:	000130
 */
GameConfig::GameConfig()
    : m_parms()
{
#if MATCHING
	// I suspect the double-loading might be from an earlier revision of the
	// parms....
	m_parms.m_gamePrint.m_data        = 0;
	m_parms.m_Print.m_data            = 0;
	m_parms.m_ogawaPrint.m_data       = 0;
	m_parms.m_shimizuPrint.m_data     = 0;
	m_parms.m_yamashitaPrint.m_data   = 0;
	m_parms.m_kandoPrint.m_data       = 0;
	m_parms.m_nishimuraPrint.m_data   = 0;
	m_parms.m_morimuraPrint.m_data    = 0;
	m_parms.m_ebisawaPrint.m_data     = 0;
	m_parms.m_psoundPrint.m_data      = 0;
	m_parms.m_shortCutUp.m_data       = -1;
	m_parms.m_shortCutDown.m_data     = -1;
	m_parms.m_shortCutLeft.m_data     = -1;
	m_parms.m_shortCutRight.m_data    = -1;
	m_parms.m_allocAllEnemy.m_data    = 0;
	m_parms.m_AI.m_data               = 0;
	m_parms.m_timers.m_data           = 0;
	m_parms.m_mukki_cherry.m_data     = 0;
	m_parms.m_marioClubDevelop.m_data = 0;
	m_parms.m_heapStatusPrint.m_data  = 0;
	m_parms.m_publicity.m_data        = 1;
	m_parms.m_mapparts_path.m_data    = "";
	m_parms.m_pelletMultiLang.m_data  = 1;
	m_parms.m_vsTest.m_data           = 0;
	m_parms.m_autosaveOff.m_data      = 0;
#endif

	m_parms.m_gamePrint.m_data            = 0;
	m_parms.m_Print.m_data                = 0;
	m_parms.m_ogawaPrint.m_data           = 0;
	m_parms.m_shimizuPrint.m_data         = 0;
	m_parms.m_yamashitaPrint.m_data       = 0;
	m_parms.m_kandoPrint.m_data           = 0;
	m_parms.m_nishimuraPrint.m_data       = 0;
	m_parms.m_morimuraPrint.m_data        = 0;
	m_parms.m_ebisawaPrint.m_data         = 0;
	m_parms.m_psoundPrint.m_data          = 0;
	m_parms.m_shortCutUp.m_data           = -1;
	m_parms.m_shortCutDown.m_data         = -1;
	m_parms.m_shortCutLeft.m_data         = -1;
	m_parms.m_shortCutRight.m_data        = -1;
	m_parms.m_allocAllEnemy.m_data        = 0;
	m_parms.m_AI.m_data                   = 0;
	m_parms.m_E3version.m_data            = 0;
	m_parms.m_timers.m_data               = 0;
	m_parms.m_mukki_cherry.m_data         = 0;
	m_parms.m_marioClubDevelop.m_data     = 0;
	m_parms.m_heapStatusPrint.m_data      = 0;
	m_parms.m_publicity.m_data            = 1;
	m_parms.m_mapparts_path.m_data        = "";
	m_parms.m_language.m_data             = "";
	m_parms.m_pelletMultiLang.m_data      = 1;
	m_parms.m_vsTest.m_data               = 0;
	m_parms.m_heapFreeSize.m_data         = 1;
	m_parms.m_KFesVersion.m_data          = 0;
	m_parms.m_nintendoVersion.m_data      = 0;
	m_parms.m_vsDeathType.m_data          = 1;
	m_parms.m_vsHiba.m_data               = 0;
	m_parms.m_vsY.m_data                  = 0;
	m_parms.m_baseGameNewCheck.m_data     = 0;
	m_parms.m_vsDebugSelectPattern.m_data = 0;
	m_parms.m_vsFifo.m_data               = 0;
}

/*
 * --INFO--
 * Address:	804322A0
 * Size:	000070
 */
// WEAK - in header.
// GameConfig::Parms::~Parms() { }

/*
 * __ct__Q34Game10GameConfig5ParmsFv
 * --INFO--
 * Address:	80432310
 * Size:	000460
 */
// WEAK - in header.
// GameConfig::Parms::Parms()
//     : TagParameters("GameConfig")
//     , m_gamePrint(this, "gamePrint")
//     , m_Print(this, "Print")
//     , m_ogawaPrint(this, "ogawaPrint")
//     , m_shimizuPrint(this, "shimizuPrint")
//     , m_yamashitaPrint(this, "yamashitaPrint")
//     , m_kandoPrint(this, "kandoPrint")
//     , m_nishimuraPrint(this, "nishimuraPrint")
//     , m_ebisawaPrint(this, "ebisawaPrint")
//     , m_morimuraPrint(this, "morimuraPrint")
//     , m_konoPrint(this, "konoPrint")
//     , m_fujinoPrint(this, "fujinoPrint")
//     , m_psoundPrint(this, "psoundPrint")
//     , m_shortCutUp(this, "shortCutUp")
//     , m_shortCutDown(this, "shortCutDown")
//     , m_shortCutLeft(this, "shortCutLeft")
//     , m_shortCutRight(this, "shortCutRight")
//     , m_allocAllEnemy(this, "allocAllEnemy")
//     , m_mapparts_path(this, "mapparts_path")
//     , m_publicity(this, "publicity")
//     , m_pelletMultiLang(this, "pelletMultiLang")
//     , m_AI(this, "AI")
//     , m_timers(this, "timers")
//     , m_vsTest(this, "vsTest")
//     , m_vsDeathType(this, "vsDeathType")
//     , m_vsHiba(this, "vsHiba")
//     , m_vsY(this, "vsY")
//     , m_E3version(this, "E3version")
//     , m_mukki_cherry(this, "mukki_cherry")
//     , m_marioClubDevelop(this, "marioClubDevelop")
//     , m_heapStatusPrint(this, "heapStatusPrint")
//     , m_heapFreeSize(this, "heapFreeSize")
//     , m_baseGameNewCheck(this, "baseGameNewCheck")
//     , m_KFesVersion(this, "KFesVersion")
//     , m_nintendoVersion(this, "nintendoVersion")
//     , m_language(this, "language")
//     , m_autosaveOff(this, "autosaveOff")
//     , m_vsDebugSelectPattern(this, "vsDebugSelectPattern")
//     , m_vsFifo(this, "vsFifo")
// {
// }

/*
 * --INFO--
 * Address:	80432770
 * Size:	000128
 */
bool GameConfig::load(char*)
{
	if (strcmp(gGameConfig.m_parms.m_language.m_data, "eng") == 0) {
		sys->m_region = System::LANG_ENGLISH;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "fra") == 0) {
		sys->m_region = System::LANG_FRENCH;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "ger") == 0) {
		sys->m_region = System::LANG_GERMAN;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "hol") == 0) {
		sys->m_region = System::LANG_ENGLISH;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "ita") == 0) {
		sys->m_region = System::LANG_ITALIAN;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "jpn") == 0) {
		sys->m_region = System::LANG_JAPANESE;
	} else if (strcmp(gGameConfig.m_parms.m_language.m_data, "spa") == 0) {
		sys->m_region = System::LANG_SPANISH;
	}
	return false;
}

// /*
//  * sinit
//  * --INFO--
//  * Address:	80432898
//  * Size:	00003C
//  */
// void __sinit_gameConfig_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, gGameConfig__4Game@ha
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, gGameConfig__4Game@l
// 	bl       __ct__Q24Game10GameConfigFv
// 	lis      r4, __dt__Q24Game10GameConfigFv@ha
// 	lis      r5, lbl_804F7C38@ha
// 	addi     r4, r4, __dt__Q24Game10GameConfigFv@l
// 	addi     r5, r5, lbl_804F7C38@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * __dt__Q24Game10GameConfigFv
 * --INFO--
 * Address:	804328D4
 * Size:	000074
 */
// GameConfig::~GameConfig(void) {}

} // namespace Game
