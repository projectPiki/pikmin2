#include "Dolphin/stl.h"
#include "Game/BirthMgr.h"
#include "Game/Data.h"
#include "Game/DeathMgr.h"
#include "Game/gameGeneratorCache.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"
#include "Game/TimeMgr.h"
#include "Game/gameStages.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

/*
        Generated from dpostproc

        .section .rodata  # 0x804732E0 - 0x8049E220
        .global lbl_804827B8
        lbl_804827B8:
                .4byte 0x506C6179
                .4byte 0x44617461
                .4byte 0x4D656D43
                .4byte 0x61726400
                .4byte 0x2A205665
                .4byte 0x7273696F
                .4byte 0x6E202A00
                .4byte 0x2A2082A8
                .4byte 0x95F38CC2
                .4byte 0x9094202A
                .4byte 0x00000000
                .4byte 0x2A2095D4
                .4byte 0x8DCF9378
                .4byte 0x83748389
                .4byte 0x834F202A
                .4byte 0x00000000
                .4byte 0x2A20834E
                .4byte 0x838A8341
                .4byte 0x83748389
                .4byte 0x834F202A
                .4byte 0x00000000
                .4byte 0x2A20835A
                .4byte 0x815B8375
                .4byte 0x83748389
                .4byte 0x834F2F83
                .4byte 0x49836A83
                .4byte 0x87839383
                .4byte 0x74838983
                .4byte 0x4F202A00
                .4byte 0x23206861
                .4byte 0x7320636F
                .4byte 0x6E746169
                .4byte 0x6E657220
                .4byte 0x666C6167
                .4byte 0x0D0A0000
                .4byte 0x23206861
                .4byte 0x7320626F
                .4byte 0x6F742063
                .4byte 0x6F6E7461
                .4byte 0x696E6572
                .4byte 0x20666C61
                .4byte 0x670D0A00
                .4byte 0x23206D65
                .4byte 0x65742070
                .4byte 0x696B6D69
                .4byte 0x6E20666C
                .4byte 0x61670D0A
                .4byte 0x00000000
                .4byte 0x2A2093FA
                .4byte 0x82C982BF
                .4byte 0x202A0000
                .4byte 0x2A208349
                .4byte 0x838A837D
                .4byte 0x815B9195
                .4byte 0x94F591BC
                .4byte 0x2F4F6C69
                .4byte 0x6D617244
                .4byte 0x61746120
                .4byte 0x2A000000
                .4byte 0x2A2093B4
                .4byte 0x8C418FF3
                .4byte 0x8BB52F43
                .4byte 0x61766553
                .4byte 0x61766544
                .4byte 0x61746120
                .4byte 0x2A000000
                .4byte 0x2A208381
                .4byte 0x815B838B
                .4byte 0x2F4D6169
                .4byte 0x6C536176
                .4byte 0x65446174
                .4byte 0x61202A00
                .4byte 0x2A208352
                .4byte 0x83938365
                .4byte 0x83692F43
                .4byte 0x6F6E7461
                .4byte 0x696E6572
                .4byte 0x50696B6D
                .4byte 0x696E202A
                .4byte 0x00000000
                .4byte 0x2A208379
                .4byte 0x838C8362
                .4byte 0x83672F50
                .4byte 0x656C6C65
                .4byte 0x744D656D
                .4byte 0x6F727920
                .4byte 0x2A000000
                .4byte 0x2A208379
                .4byte 0x838C8362
                .4byte 0x83672F82
                .4byte 0x5093FA82
                .4byte 0xC982C682
                .4byte 0xC182BD82
                .4byte 0xE082CC28
                .4byte 0x4D61696E
                .4byte 0x29202A00
                .4byte 0x2A208379
                .4byte 0x838C8362
                .4byte 0x83672F92
                .4byte 0x6E89BA82
                .4byte 0xC582C682
                .4byte 0xC182BD82
                .4byte 0xE082CC28
                .4byte 0x43617665
                .4byte 0x29202A00
                .4byte 0x2A208368
                .4byte 0x815B8373
                .4byte 0x8393834F
                .4byte 0x8FEE95F1
                .4byte 0x2F446F70
                .4byte 0x696E6720
                .4byte 0x2A000000
                .4byte 0x09232064
                .4byte 0x6F70655B
                .4byte 0x25645D0D
                .4byte 0x0A000000
                .4byte 0x09232064
                .4byte 0x6F70652D
                .4byte 0x8EC05B25
                .4byte 0x645D0D0A
                .4byte 0x00000000
                .4byte 0x2A208352
                .4byte 0x815B8358
                .4byte 0x8FEE95F1
                .4byte 0x202A0000
                .4byte 0x09232083
                .4byte 0x52815B83
                .4byte 0x5890940D
                .4byte 0x0A000000
        .global lbl_804829BC
        lbl_804829BC:
                .4byte 0x67616D65
                .4byte 0x506C6179
                .4byte 0x44617461
                .4byte 0x4D656D43
                .4byte 0x6172642E
                .4byte 0x63707000
                .asciz "P2Assert"
                .skip 3
                .4byte 0x2A2093B4
                .4byte 0x8C419242
                .4byte 0x90AC8FEE
                .4byte 0x95F1202A
                .4byte 0x00000000
                .4byte 0x2A204C69
                .4byte 0x6D697447
                .4byte 0x656E202A
                .4byte 0x00000000
                .4byte 0x2A2082A8
                .4byte 0x8BE02F93
                .4byte 0xB48C4182
                .4byte 0xC58EE693
                .4byte 0xBE82B582
                .4byte 0xBD88EA8E
                .4byte 0x9E934982
                .4byte 0xC882A88B
                .4byte 0xE0202A00
                .4byte 0x2A208F6F
                .4byte 0x90B69094
                .4byte 0x202A0000
                .4byte 0x2A208E80
                .4byte 0x96539094
                .4byte 0x202A0000
                .4byte 0x2A208349
                .4byte 0x838A837D
                .4byte 0x815B8E80
                .4byte 0x96538374
                .4byte 0x8389834F
                .4byte 0x202A0000
                .4byte 0x2A208366
                .4byte 0x83828374
                .4byte 0x8389834F
                .4byte 0x2F93C18E
                .4byte 0xEA94AD8C
                .4byte 0xA9836683
                .4byte 0x82837483
                .4byte 0x89834F20
                .4byte 0x2A000000
                .4byte 0x2A20576F
                .4byte 0x726C644D
                .4byte 0x61702089
                .4byte 0x898F6F97
                .4byte 0x70202A00
                .4byte 0x2A204461
                .4byte 0x79456E64
                .4byte 0x52657375
                .4byte 0x6C749770
                .4byte 0x202A0000
                .4byte 0x2A208357
                .4byte 0x8346836C
                .4byte 0x838C815B
                .4byte 0x835E834C
                .4byte 0x83838362
                .4byte 0x83568385
                .4byte 0x2F47656E
                .4byte 0x65726174
                .4byte 0x6F724361
                .4byte 0x63686520
                .4byte 0x2A000000
        .global lbl_80482AD0
        lbl_80482AD0:
                .4byte 0x53617665
                .4byte 0x44617461
                .4byte 0x20455252
                .4byte 0x4F52203A
                .4byte 0x20436F75
                .4byte 0x7273654E
                .4byte 0x756D3D25
                .4byte 0x64202863
                .4byte 0x61726420
                .4byte 0x6E756D3D
                .4byte 0x2564290A
                .4byte 0x00000000
        .global lbl_80482B00
        lbl_80482B00:
                .4byte 0x6E6F6E6C
                .4byte 0x6F6F7073
                .4byte 0x00000000
                .4byte 0x4B696E64
                .4byte 0x436F756E
                .4byte 0x74657200
                .4byte 0x0923205B
                .4byte 0x25645D0D
                .4byte 0x0A000000
        .global lbl_80482B24
        lbl_80482B24:
                .4byte 0x72656164
                .4byte 0x20636F75
                .4byte 0x6E742025
                .4byte 0x64203A20
                .4byte 0x6D4E756D
                .4byte 0x4B696E64
                .4byte 0x73202564
                .4byte 0x203A206D
                .4byte 0x69736D61
                .4byte 0x74636820
                .4byte 0x210A0000
                .4byte 0x23206D4F
                .4byte 0x74616B61
                .4byte 0x7261436F
                .4byte 0x756E7465
                .4byte 0x720D0A00
                .4byte 0x23206D49
                .4byte 0x74656D43
                .4byte 0x6F756E74
                .4byte 0x65720D0A
                .4byte 0x00000000
                .4byte 0x23206D43
                .4byte 0x61726361
                .4byte 0x7373436F
                .4byte 0x756E7465
                .4byte 0x720D0A00
        .global lbl_80482B8C
        lbl_80482B8C:
                .asciz "\t# itemFlag\r\n"
                .skip 2
                .asciz "# formationPikmin\r\n"
                .asciz "\t# time\r\n"
                .skip 2
                .asciz "\t# curr course\r\n"
                .skip 3
                .asciz "\t# curr cave\r\n"
                .skip 1
                .asciz "\t# blackman alive\r\n"
                .asciz "\t# blackman timer\r\n"
                .asciz "\t# active player id\r\n"
                .skip 2

        .section .data, "wa"  # 0x8049E220 - 0x804EFC20
        .global __vt__Q24Game16PelletCropMemory
        __vt__Q24Game16PelletCropMemory:
                .4byte 0
                .4byte 0
                .4byte read__Q24Game16PelletCropMemoryFR6Stream
                .4byte write__Q24Game16PelletCropMemoryFR6Stream

        .section .sdata, "wa"  # 0x80514680 - 0x80514D80
        .global mVersion__Q24Game8PlayData
        mVersion__Q24Game8PlayData:
                .ascii "j009"

        .section .sbss # 0x80514D80 - 0x80516360
        .global sCurrPlayDataSize__Q24Game8PlayData
        sCurrPlayDataSize__Q24Game8PlayData:
                .skip 0x4
        .global sMaxPlayDataSize__Q24Game8PlayData
        sMaxPlayDataSize__Q24Game8PlayData:
                .skip 0x4

        .section .sdata2, "a"     # 0x80516360 - 0x80520E40
        .global lbl_8051A078
        lbl_8051A078:
                .4byte 0x0D0A0000
        .global lbl_8051A07C
        lbl_8051A07C:
                .4byte 0x09232025
                .4byte 0x730D0A00
        .global lbl_8051A084
        lbl_8051A084:
                .4byte 0x6C6F6F70
                .4byte 0x73000000
                .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("PlayDataMemCard"); }

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PlayData::prepareSave(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021CFF4
 * Size:	000740
 */
void PlayData::write(Stream& output)
{
	int startPosition = output.m_position;
	output.textBeginGroup("* Version *");
	ID32 IStack312(PlayData::mVersion);
	IStack312.write(output);
	output.textEndGroup();
	output.textBeginGroup("* お宝個数 *");
	output.writeInt(_BC);
	output.textEndGroup();
	output.textBeginGroup("* 返済度フラグ *");
	for (u32 i = 0; i < 2; i++) {
		output.writeByte(_F0[i]);
	}
	// int i = 0;
	// do {
	// 	output.writeByte(_F0[i]);
	// 	i++;
	// } while (i < 2);
	output.textEndGroup();
	output.textBeginGroup("* クリアフラグ *");
	output.writeByte(_2F);
	output.textEndGroup();
	output.textBeginGroup("* セーブフラグ/オニョンフラグ *");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(_19);
	output.textWriteText("\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_hasContainerFlags);
	output.textWriteText("# has container flag\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_hasBootContainerFlags);
	output.textWriteText("# has boot container flag\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_meetPikminFlags);
	output.textWriteText("# meet pikmin flag\r\n");
	output.textEndGroup();
	output.textBeginGroup("* 日にち *");
	m_tekiStatMgr.write(output);
	output.textEndGroup();
	output.textBeginGroup("* 日にち *");
	output.textWriteTab(output.m_tabCount);
	output.writeInt(gameSystem->m_timeMgr->m_dayCount);
	output.textWriteText("\r\n");
	output.textEndGroup();
	output.textBeginGroup("* オリマ�?��?備�?/OlimarData *");
	m_olimarData[0].write(output);
	m_olimarData[1].write(output);
	output.textEndGroup();
	output.textBeginGroup("* 洞窟状�?/CaveSaveData *");
	m_caveSaveData.write(output);
	output.textEndGroup();
	output.textBeginGroup("* メール/MailSaveData *");
	m_mailSaveData.write(output);
	output.textEndGroup();
	output.textBeginGroup("* コン�?�?/ContainerPikmin *");
	m_pikiContainer.write(output);
	output.textEndGroup();
	output.textBeginGroup("* ペレ�?�?/PelletMemory *");
	_B0->write(output);
	output.textEndGroup();
	output.textBeginGroup("* ペレ�?�?/?��日にとったもの(Main) *");
	m_mainCropMemory->write(output);
	output.textEndGroup();
	output.textBeginGroup("* ペレ�?�?/地下でとったもの(Cave) *");
	m_caveCropMemory->write(output);
	output.textEndGroup();
	output.textBeginGroup("* ド�?�ピング�?報/Doping *");
	char acStack300[272];
	for (u32 i = 0; i < 2; i++) {
		output.textWriteTab(output.m_tabCount);
		output.writeInt(_C0[i]);
		sprintf(acStack300, "\t# dope[%d]\r\n", i);
		output.textWriteText(acStack300);
	}
	for (u32 i = 0; i < 2; i++) {
		output.textWriteTab(output.m_tabCount);
		output.writeInt(m_berryCount[i]);
		sprintf(acStack300, "\t# dope-実[%d]\r\n", i);
		output.textWriteText(acStack300);
		i++;
	}
	// // int i = 0;
	// i = 0;
	// do {
	// 	output.textWriteTab(output.m_tabCount);
	// 	output.writeInt(_C0[i]);
	// 	sprintf(acStack300,"\t# dope[%d]\r\n", i);
	// 	output.textWriteText(acStack300);
	// 	i++;
	// } while (i < 2);
	// i = 0;
	// do {
	// 	output.textWriteTab(output.m_tabCount);
	// 	output.writeInt(m_berryCount[i]);
	// 	sprintf(acStack300,"\t# dope-実[%d]\r\n", i);
	// 	output.textWriteText(acStack300);
	// 	i++;
	// } while (i < 2);
	output.textEndGroup();
	output.textBeginGroup("* コース�?報 *");
	u32 courseCount = stageList->m_courseCount;
	output.textWriteTab(output.m_tabCount);
	output.writeInt((uint)courseCount);
	output.textWriteText("\t# コース数\r\n");
	int courseIndex = 0;
	while (true) {
		if ((int)(uint)courseCount <= courseIndex) {
			output.textEndGroup();
			output.textBeginGroup("* 洞窟達成情報 *");
			write_CaveOtakara(output);
			output.textEndGroup();
			output.textBeginGroup("* LimitGen *");
			for (u32 i = 0; i < stageList->m_courseCount; i += 1) {
				m_limitGen[i].write(output);
			}
			output.textEndGroup();
			output.textBeginGroup("* お��/洞窟で取得した一時的なお�� *");
			output.textWriteTab(output.m_tabCount);
			output.writeInt(m_pokoCount);
			output.writeInt(m_cavePokoCount);
			output.textWriteText("\r\n");
			output.textEndGroup();
			output.textBeginGroup("* 出生数 *");
			Game::BirthMgr::write(output);
			output.textEndGroup();
			output.textBeginGroup("* 死亡数 *");
			Game::DeathMgr::write(output);
			output.textEndGroup();
			output.textBeginGroup("* オリマ�?�死亡フラグ *");
			output.textWriteTab(output.m_tabCount);
			output.writeByte(_20);
			output.textWriteText("\r\n");
			output.textWriteTab(output.m_tabCount);
			output.writeFloat(m_naviLifeMax[0]);
			output.writeFloat(m_naviLifeMax[1]);
			output.textWriteText("\r\n");
			output.textEndGroup();
			output.textBeginGroup("* �?モフラグ/特殊発見デモフラグ *");
			output.textWriteTab(output.m_tabCount);
			m_demoFlags.write(output);
			m_findItemFlags.write(output);
			output.textWriteText("\r\n");
			output.textEndGroup();
			output.textBeginGroup("* WorldMap 演�?�用 *");
			for (u32 i = 0; i < stageList->m_courseCount; i += 1) {
				output.writeByte(m_groundOtakaraCollectedOld[i]);
			}
			output.writeInt(m_pokoCountOld);
			write_CaveOtakara_Old(output);
			output.textEndGroup();
			int dataSize = (output.m_position - startPosition) + (generatorCache->m_heapSize - generatorCache->m_freeSize);
			output.textBeginGroup("* DayEndResult用 *");
			for (u32 i = 0; i < 6; i++) {
				output.writeInt(m_pikminYesterday[i]);
				output.writeInt(m_pikminToday[i]);
				output.textWriteText("\r\n");
				i++;
			}
			// int iVar8 = 0; // following loop uses iVar8
			// i = 0;
			// do {
			// 	output.writeInt(m_pikminYesterday[i]);
			// 	output.writeInt(m_pikminToday[i]);
			// 	output.textWriteText("\r\n");
			// 	i++;
			// 	// iVar8 += 1;
			// // } while (iVar8 < 6);
			// } while (i < 6);
			output.textEndGroup();
			output.textBeginGroup("* ジェネレータキャ�?シュ/GeneratorCache *");
			generatorCache->write(output);
			output.textEndGroup();
			_1C = 0;
			if (PlayData::sMaxPlayDataSize < dataSize) {
				PlayData::sMaxPlayDataSize = dataSize;
			}
			PlayData::sCurrPlayDataSize = dataSize;
			return;
		}
		output.textWriteTab(output.m_tabCount);
		output.writeByte(m_bitfieldPerCourse[courseIndex]);
		output.writeByte(m_groundOtakaraCollected[courseIndex]);
		CourseInfo* courseInfo = stageList->getCourseInfo(courseIndex);
		// if (courseInfo == nullptr) break;
		P2ASSERTLINE(325, courseInfo == nullptr);
		sprintf(acStack300, "\t# %s\r\n", courseInfo->m_name);
		output.textWriteText(acStack300);
		courseIndex++;
	}
	/* WARNING: Subroutine does not return */
	// JUTException::panic_f("gamePlayDataMemCard.cpp",0x145,"P2Assert");
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stmw     r25, 0x124(r1)
	mr       r29, r4
	lis      r4, lbl_804827B8@ha
	mr       r28, r3
	addi     r31, r4, lbl_804827B8@l
	mr       r3, r29
	addi     r4, r31, 0x10
	lwz      r30, 8(r29)
	bl       textBeginGroup__6StreamFPc
	lwz      r4, mVersion__Q24Game8PlayData@sda21(r13)
	addi     r3, r1, 8
	bl       __ct__4ID32FUl
	mr       r4, r29
	addi     r3, r1, 8
	bl       write__4ID32FR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x1c
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0xbc(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x2c
	bl       textBeginGroup__6StreamFPc
	li       r26, 0
	addi     r27, r28, 0xf0

lbl_8021D078:
	lbz      r4, 0(r27)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	addi     r26, r26, 1
	addi     r27, r27, 1
	cmplwi   r26, 2
	blt      lbl_8021D078
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x40
	bl       textBeginGroup__6StreamFPc
	mr       r3, r29
	lbz      r4, 0x2f(r28)
	bl       writeByte__6StreamFUc
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x54
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x19(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x2c(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0x74
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x2d(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0x8c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x2e(r28)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0xa8
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xc0
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x40
	bl       write__Q34Game8TekiStat3MgrFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xc0
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r3, r29
	lwz      r4, 0x40(r4)
	lwz      r4, 0x218(r4)
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xcc
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x48
	bl       write__Q24Game10OlimarDataFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x4a
	bl       write__Q24Game10OlimarDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0xec
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x4c
	bl       write__Q24Game12CaveSaveDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x108
	bl       textBeginGroup__6StreamFPc
	mr       r4, r29
	addi     r3, r28, 0x84
	bl       write__Q32kh6Screen12MailSaveDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x120
	bl       textBeginGroup__6StreamFPc
	addi     r3, r28, 0xa8
	mr       r4, r29
	lwz      r12, 0xa8(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x140
	bl       textBeginGroup__6StreamFPc
	lwz      r3, 0xb0(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x15c
	bl       textBeginGroup__6StreamFPc
	lwz      r3, 0xb4(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x180
	bl       textBeginGroup__6StreamFPc
	lwz      r3, 0xb8(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x1a4
	bl       textBeginGroup__6StreamFPc
	li       r27, 0
	mr       r26, r28

lbl_8021D304:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xc0(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r5, r27
	addi     r3, r1, 0x14
	addi     r4, r31, 0x1c0
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x14
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r27, r27, 1
	addi     r26, r26, 4
	cmpwi    r27, 2
	blt      lbl_8021D304
	li       r27, 0
	mr       r26, r28

lbl_8021D358:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xc8(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r5, r27
	addi     r3, r1, 0x14
	addi     r4, r31, 0x1d0
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x14
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r27, r27, 1
	addi     r26, r26, 4
	cmpwi    r27, 2
	blt      lbl_8021D358
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x1e4
	bl       textBeginGroup__6StreamFPc
	lwz      r5, stageList__4Game@sda21(r13)
	mr       r3, r29
	lwz      r4, 0x414(r29)
	lhz      r26, 0x100(r5)
	bl       textWriteTab__6StreamFi
	mr       r3, r29
	mr       r4, r26
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r31, 0x1f4
	crclr    6
	bl       textWriteText__6StreamFPce
	li       r25, 0
	b        lbl_8021D46C

lbl_8021D3F0:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xd8(r28)
	mr       r3, r29
	lbzx     r4, r4, r25
	bl       writeByte__6StreamFUc
	lwz      r4, 0xdc(r28)
	mr       r3, r29
	lbzx     r4, r4, r25
	bl       writeByte__6StreamFUc
	lwz      r3, stageList__4Game@sda21(r13)
	mr       r4, r25
	bl       getCourseInfo__Q24Game6StagesFi
	or.      r27, r3, r3
	bne      lbl_8021D444
	addi     r3, r31, 0x204
	addi     r5, r31, 0x21c
	li       r4, 0x145
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021D444:
	lwz      r5, 0x14(r27)
	addi     r3, r1, 0x14
	addi     r4, r2, lbl_8051A07C@sda21
	crclr    6
	bl       sprintf
	mr       r3, r29
	addi     r4, r1, 0x14
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r25, r25, 1

lbl_8021D46C:
	cmpw     r25, r26
	blt      lbl_8021D3F0
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x228
	bl       textBeginGroup__6StreamFPc
	mr       r3, r28
	mr       r4, r29
	bl       write_CaveOtakara__Q24Game8PlayDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x23c
	bl       textBeginGroup__6StreamFPc
	lwz      r3, stageList__4Game@sda21(r13)
	li       r25, 0
	li       r27, 0
	lhz      r26, 0x100(r3)
	b        lbl_8021D4D4

lbl_8021D4BC:
	lwz      r0, 0xe4(r28)
	mr       r4, r29
	add      r3, r0, r27
	bl       write__Q34Game8PlayData8LimitGenFR6Stream
	addi     r27, r27, 0x10
	addi     r25, r25, 1

lbl_8021D4D4:
	cmpw     r25, r26
	blt      lbl_8021D4BC
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x24c
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r4, 0xe8(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	lwz      r4, 0xec(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x270
	bl       textBeginGroup__6StreamFPc
	mr       r3, r29
	bl       write__Q24Game8BirthMgrFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x27c
	bl       textBeginGroup__6StreamFPc
	mr       r3, r29
	bl       write__Q24Game8DeathMgrFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x288
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	mr       r3, r29
	lbz      r4, 0x20(r28)
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x24(r28)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	lfs      f1, 0x28(r28)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x2a0
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	mr       r4, r29
	addi     r3, r28, 0x30
	bl       write__8BitFlagsFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x38
	bl       write__8BitFlagsFR6Stream
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	lwz      r5, stageList__4Game@sda21(r13)
	mr       r3, r29
	addi     r4, r31, 0x2c4
	lhz      r26, 0x100(r5)
	bl       textBeginGroup__6StreamFPc
	li       r25, 0
	b        lbl_8021D64C

lbl_8021D638:
	lwz      r4, 0xf4(r28)
	mr       r3, r29
	lbzx     r4, r4, r25
	bl       writeByte__6StreamFUc
	addi     r25, r25, 1

lbl_8021D64C:
	cmpw     r25, r26
	blt      lbl_8021D638
	lwz      r4, 0xfc(r28)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r28
	mr       r4, r29
	bl       write_CaveOtakara_Old__Q24Game8PlayDataFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	lwz      r5, generatorCache__4Game@sda21(r13)
	mr       r3, r29
	lwz      r0, 8(r29)
	addi     r4, r31, 0x2d8
	lwz      r6, 0x88(r5)
	lwz      r5, 0x80(r5)
	subf     r0, r30, r0
	subf     r5, r6, r5
	add      r27, r0, r5
	bl       textBeginGroup__6StreamFPc
	li       r25, 0
	mr       r26, r28

lbl_8021D6A4:
	lwz      r4, 0x100(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	lwz      r4, 0x118(r26)
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r29
	addi     r4, r2, lbl_8051A078@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r25, r25, 1
	addi     r26, r26, 4
	cmpwi    r25, 6
	blt      lbl_8021D6A4
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	mr       r3, r29
	addi     r4, r31, 0x2ec
	bl       textBeginGroup__6StreamFPc
	lwz      r3, generatorCache__4Game@sda21(r13)
	mr       r4, r29
	bl       write__Q24Game14GeneratorCacheFR6Stream
	mr       r3, r29
	bl       textEndGroup__6StreamFv
	li       r0, 0
	stw      r0, 0x1c(r28)
	lwz      r0, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)
	stw      r27, sCurrPlayDataSize__Q24Game8PlayData@sda21(r13)
	cmpw     r0, r27
	bge      lbl_8021D720
	stw      r27, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)

lbl_8021D720:
	lmw      r25, 0x124(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021D734
 * Size:	000404
 */
void PlayData::read(Stream& input)
{
	int startPosition = input.m_position;
	u64 osTime        = OSGetTime();
	m_osTimeLo        = (int)osTime;
	m_osTimeHi        = (int)(osTime >> 0x20);
	ID32 version;
	version.read(input);
	if (mVersion != version.getID()) {
		ID32 unusedVersion(mVersion);
	}
	if ('j004' <= version.getID()) {
		_BC = input.readInt();
	} else {
		_BC = 0;
	}
	if ('j001' <= version.getID()) {
		for (s32 i = 0; i < 2; i++) {
			_F0[i] = input.readByte();
		}
	}
	_2F                     = input.readByte();
	_19                     = input.readByte();
	m_hasContainerFlags     = input.readByte();
	m_hasBootContainerFlags = input.readByte();
	if ('j007' <= version.getID()) {
		m_meetPikminFlags = input.readByte();
	}
	m_tekiStatMgr.read(input);
	gameSystem->m_timeMgr->m_dayCount = input.readInt();
	m_olimarData[0].read(input);
	m_olimarData[1].read(input);
	m_caveSaveData.read(input, version.getID());
	m_mailSaveData.read(input);
	m_pikiContainer.read(input);
	_B0->read(input);
	m_mainCropMemory->read(input);
	m_caveCropMemory->read(input);
	for (int i = 0; i < 2; i++) {
		_C0[i] = input.readInt();
	}
	for (int i = 0; i < 2; i++) {
		m_berryCount[i] = input.readInt();
	}
	// u32 courseNum = stageList->m_courseCount;
	// u32 cardNum = input.readInt();
	// JUT_ASSERTLINE(633, courseNum == cardNum, "SaveData ERROR : CourseNum=%d
	// (card num=%d)\n", courseNum, cardNum); for (int i = 0; i < courseNum;
	// i++) {
	JUT_ASSERTLINE(633, input.readInt() == stageList->m_courseCount, "SaveData ERROR : CourseNum=%d (card num=%d)\n", courseNum, cardNum);
	for (int i = 0; i < stageList->m_courseCount; i++) {
		m_bitfieldPerCourse[i] = input.readByte();
		if ('j005' <= (long)version.getID()) {
			m_groundOtakaraCollected[i] = input.readByte();
		}
	}
	read_CaveOtakara(input);
	for (int i = 0; i < stageList->m_courseCount; i++) {
		m_limitGen[i].read(input);
	}
	m_pokoCount     = input.readInt();
	m_cavePokoCount = input.readInt();
	BirthMgr::read(input);
	DeathMgr::read(input);
	_20 = input.readByte();
	if ('j006' <= version.getID()) {
		m_naviLifeMax[0] = input.readFloat();
		m_naviLifeMax[1] = input.readFloat();
	}
	m_demoFlags.read(input);
	m_findItemFlags.read(input);
	if ('j008' <= version.getID()) {
		for (int i = 0; i < stageList->m_courseCount; i++) {
			m_groundOtakaraCollectedOld[i] = input.readByte();
		}
		m_pokoCountOld = input.readInt();
		read_CaveOtakara_Old(input);
	}
	for (u32 i = 0; i < 6; i++) {
		m_pikminYesterday[i] = input.readInt();
		m_pikminToday[i]     = input.readInt();
	}
	int dataSize = (input.m_position - startPosition) + (generatorCache->m_heapSize - generatorCache->m_freeSize);
	generatorCache->read(input);
	if (PlayData::sMaxPlayDataSize < dataSize) {
		PlayData::sMaxPlayDataSize = dataSize;
	}
	PlayData::sCurrPlayDataSize = dataSize;

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r29, r4
	mr       r28, r3
	lwz      r31, 8(r4)
	bl       OSGetTime
	stw      r4, 0xd4(r28)
	stw      r3, 0xd0(r28)
	addi     r3, r1, 0x14
	bl       __ct__4ID32Fv
	mr       r4, r29
	addi     r3, r1, 0x14
	bl       read__4ID32FR6Stream
	lwz      r0, 0x1c(r1)
	lwz      r4, mVersion__Q24Game8PlayData@sda21(r13)
	mr       r30, r0
	cmplw    r4, r0
	beq      lbl_8021D78C
	addi     r3, r1, 8
	bl       __ct__4ID32FUl

lbl_8021D78C:
	lis      r3, 0x6A303034@ha
	addi     r0, r3, 0x6A303034@l
	cmplw    r30, r0
	blt      lbl_8021D7AC
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xbc(r28)
	b        lbl_8021D7B4

lbl_8021D7AC:
	li       r0, 0
	stw      r0, 0xbc(r28)

lbl_8021D7B4:
	lis      r3, 0x6A303031@ha
	addi     r0, r3, 0x6A303031@l
	cmplw    r30, r0
	blt      lbl_8021D7E8
	li       r26, 0
	addi     r27, r28, 0xf0

lbl_8021D7CC:
	mr       r3, r29
	bl       readByte__6StreamFv
	addi     r26, r26, 1
	stb      r3, 0(r27)
	cmplwi   r26, 2
	addi     r27, r27, 1
	blt      lbl_8021D7CC

lbl_8021D7E8:
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x2f(r28)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x19(r28)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x2c(r28)
	mr       r3, r29
	bl       readByte__6StreamFv
	lis      r4, 0x6A303037@ha
	stb      r3, 0x2d(r28)
	addi     r0, r4, 0x6A303037@l
	cmplw    r30, r0
	blt      lbl_8021D834
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x2e(r28)

lbl_8021D834:
	mr       r4, r29
	addi     r3, r28, 0x40
	bl       read__Q34Game8TekiStat3MgrFR6Stream
	mr       r3, r29
	bl       readInt__6StreamFv
	lwz      r5, gameSystem__4Game@sda21(r13)
	mr       r4, r29
	lwz      r5, 0x40(r5)
	stw      r3, 0x218(r5)
	addi     r3, r28, 0x48
	bl       read__Q24Game10OlimarDataFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x4a
	bl       read__Q24Game10OlimarDataFR6Stream
	mr       r4, r29
	mr       r5, r30
	addi     r3, r28, 0x4c
	bl       read__Q24Game12CaveSaveDataFR6StreamUl
	mr       r4, r29
	addi     r3, r28, 0x84
	bl       read__Q32kh6Screen12MailSaveDataFR6Stream
	addi     r3, r28, 0xa8
	mr       r4, r29
	lwz      r12, 0xa8(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb0(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb4(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb8(r28)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r27, 0
	mr       r26, r28

lbl_8021D8F0:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r27, r27, 1
	stw      r3, 0xc0(r26)
	cmpwi    r27, 2
	addi     r26, r26, 4
	blt      lbl_8021D8F0
	li       r27, 0
	mr       r26, r28

lbl_8021D914:
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r27, r27, 1
	stw      r3, 0xc8(r26)
	cmpwi    r27, 2
	addi     r26, r26, 4
	blt      lbl_8021D914
	lwz      r4, stageList__4Game@sda21(r13)
	mr       r3, r29
	lhz      r26, 0x100(r4)
	bl       readInt__6StreamFv
	cmpw     r3, r26
	beq      lbl_8021D970
	lis      r5, lbl_804829BC@ha
	lis      r4, lbl_80482AD0@ha
	addi     r0, r5, lbl_804829BC@l
	mr       r7, r3
	addi     r5, r4, lbl_80482AD0@l
	mr       r6, r26
	mr       r3, r0
	li       r4, 0x279
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021D970:
	lis      r3, 0x6A303035@ha
	li       r25, 0
	addi     r27, r3, 0x6A303035@l
	b        lbl_8021D9AC

lbl_8021D980:
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 0xd8(r28)
	cmplw    r30, r27
	stbx     r3, r4, r25
	blt      lbl_8021D9A8
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 0xdc(r28)
	stbx     r3, r4, r25

lbl_8021D9A8:
	addi     r25, r25, 1

lbl_8021D9AC:
	cmpw     r25, r26
	blt      lbl_8021D980
	mr       r3, r28
	mr       r4, r29
	bl       read_CaveOtakara__Q24Game8PlayDataFR6Stream
	lwz      r3, stageList__4Game@sda21(r13)
	li       r25, 0
	li       r27, 0
	lhz      r26, 0x100(r3)
	b        lbl_8021D9EC

lbl_8021D9D4:
	lwz      r0, 0xe4(r28)
	mr       r4, r29
	add      r3, r0, r27
	bl       read__Q34Game8PlayData8LimitGenFR6Stream
	addi     r27, r27, 0x10
	addi     r25, r25, 1

lbl_8021D9EC:
	cmpw     r25, r26
	blt      lbl_8021D9D4
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xe8(r28)
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xec(r28)
	mr       r3, r29
	bl       read__Q24Game8BirthMgrFR6Stream
	mr       r3, r29
	bl       read__Q24Game8DeathMgrFR6Stream
	mr       r3, r29
	bl       readByte__6StreamFv
	lis      r4, 0x6A303036@ha
	stb      r3, 0x20(r28)
	addi     r0, r4, 0x6A303036@l
	cmplw    r30, r0
	blt      lbl_8021DA50
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x24(r28)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x28(r28)

lbl_8021DA50:
	mr       r4, r29
	addi     r3, r28, 0x30
	bl       read__8BitFlagsFR6Stream
	mr       r4, r29
	addi     r3, r28, 0x38
	bl       read__8BitFlagsFR6Stream
	lis      r3, 0x6A303038@ha
	addi     r0, r3, 0x6A303038@l
	cmplw    r30, r0
	blt      lbl_8021DABC
	lwz      r3, stageList__4Game@sda21(r13)
	li       r25, 0
	lhz      r26, 0x100(r3)
	b        lbl_8021DA9C

lbl_8021DA88:
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 0xf4(r28)
	stbx     r3, r4, r25
	addi     r25, r25, 1

lbl_8021DA9C:
	cmpw     r25, r26
	blt      lbl_8021DA88
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0xfc(r28)
	mr       r3, r28
	mr       r4, r29
	bl       read_CaveOtakara_Old__Q24Game8PlayDataFR6Stream

lbl_8021DABC:
	li       r25, 0
	mr       r26, r28

lbl_8021DAC4:
	mr       r3, r29
	bl       readInt__6StreamFv
	stw      r3, 0x100(r26)
	mr       r3, r29
	bl       readInt__6StreamFv
	addi     r25, r25, 1
	stw      r3, 0x118(r26)
	cmpwi    r25, 6
	addi     r26, r26, 4
	blt      lbl_8021DAC4
	lwz      r3, generatorCache__4Game@sda21(r13)
	mr       r4, r29
	lwz      r0, 8(r29)
	lwz      r6, 0x88(r3)
	lwz      r5, 0x80(r3)
	subf     r0, r31, r0
	subf     r5, r6, r5
	add      r26, r0, r5
	bl       read__Q24Game14GeneratorCacheFR6Stream
	lwz      r0, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)
	stw      r26, sCurrPlayDataSize__Q24Game8PlayData@sda21(r13)
	cmpw     r0, r26
	bge      lbl_8021DB24
	stw      r26, sMaxPlayDataSize__Q24Game8PlayData@sda21(r13)

lbl_8021DB24:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * read__Q34Game8PlayData8LimitGenFR6Stream
 * --INFO--
 * Address:	8021DB38
 * Size:	000044
 */
void PlayData::LimitGen::read(Stream& input)
{
	m_nonLoops.read(input);
	m_loops.read(input);
}

/*
 * write__Q34Game8PlayData8LimitGenFR6Stream
 * --INFO--
 * Address:	8021DB7C
 * Size:	000078
 */
void PlayData::LimitGen::write(Stream& output)
{
	output.textBeginGroup("nonloops");
	m_nonLoops.write(output);
	output.textEndGroup();
	output.textBeginGroup("loops");
	m_loops.write(output);
	output.textEndGroup();
}

/*
 * write__Q24Game11KindCounterFR6Stream
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void KindCounter::write(Stream& output)
{
	output.textWriteTab(output.m_tabCount);
	output.writeShort(m_numKinds);
	output.textBeginGroup("KindCounter");
	for (int i = 0; i < m_numKinds; i++) {
		output.textWriteTab(output.m_tabCount);
		output.writeByte(m_kinds[i]);
		output.textWriteText("\t# [%d]\r\n", i);
	}
	output.textEndGroup();
}

/*
 * read__Q24Game11KindCounterFR6Stream
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void KindCounter::read(Stream& input)
{
	// UNUSED FUNCTION
	u16 count = input.readShort();
	JUT_ASSERTLINE(794, count == (int)m_numKinds, "read count %d : mNumKinds %d : mismatch !\n", count, m_numKinds);
	for (int i = 0; i < m_numKinds; i++) {
		m_kinds[i] = input.readByte();
	}
}

/*
 * write__Q24Game16PelletCropMemoryFR6Stream
 * --INFO--
 * Address:	8021DBF4
 * Size:	000208
 */
void PelletCropMemory::write(Stream& output)
{
	output.textWriteTab(output.m_tabCount);
	output.textWriteText("# mOtakaraCounter\r\n");
	_04.write(output);
	output.textWriteTab(output.m_tabCount);
	output.textWriteText("# mItemCounter\r\n");
	_0C.write(output);
	output.textWriteTab(output.m_tabCount);
	output.textWriteText("# mCarcassCounter\r\n");
	_14.write(output);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_804827B8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	stw      r29, 0x14(r1)
	addi     r29, r5, lbl_804827B8@l
	stw      r28, 0x10(r1)
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x398
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lhz      r0, 4(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x354
	bl       textBeginGroup__6StreamFPc
	li       r28, 0
	b        lbl_8021DCA0

lbl_8021DC6C:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 8(r30)
	mr       r3, r31
	lbzx     r4, r4, r28
	bl       writeByte__6StreamFUc
	mr       r3, r31
	mr       r5, r28
	addi     r4, r29, 0x360
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r28, r28, 1

lbl_8021DCA0:
	lhz      r0, 4(r30)
	cmpw     r28, r0
	blt      lbl_8021DC6C
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x3ac
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lhz      r0, 0xc(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x354
	bl       textBeginGroup__6StreamFPc
	li       r28, 0
	b        lbl_8021DD34

lbl_8021DD00:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x10(r30)
	mr       r3, r31
	lbzx     r4, r4, r28
	bl       writeByte__6StreamFUc
	mr       r3, r31
	mr       r5, r28
	addi     r4, r29, 0x360
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r28, r28, 1

lbl_8021DD34:
	lhz      r0, 0xc(r30)
	cmpw     r28, r0
	blt      lbl_8021DD00
	mr       r3, r31
	bl       textEndGroup__6StreamFv
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	mr       r3, r31
	addi     r4, r29, 0x3c0
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lhz      r0, 0x14(r30)
	mr       r3, r31
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r31
	addi     r4, r29, 0x354
	bl       textBeginGroup__6StreamFPc
	li       r28, 0
	b        lbl_8021DDC8

lbl_8021DD94:
	lwz      r4, 0x414(r31)
	mr       r3, r31
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x18(r30)
	mr       r3, r31
	lbzx     r4, r4, r28
	bl       writeByte__6StreamFUc
	mr       r3, r31
	mr       r5, r28
	addi     r4, r29, 0x360
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r28, r28, 1

lbl_8021DDC8:
	lhz      r0, 0x14(r30)
	cmpw     r28, r0
	blt      lbl_8021DD94
	mr       r3, r31
	bl       textEndGroup__6StreamFv
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
 * read__Q24Game16PelletCropMemoryFR6Stream
 * --INFO--
 * Address:	8021DDFC
 * Size:	000150
 */
void PelletCropMemory::read(Stream& input)
{
	_04.read(input);
	_0C.read(input);
	_14.read(input);
}

/*
 * write__Q24Game10OlimarDataFR6Stream
 * --INFO--
 * Address:	8021DF4C
 * Size:	00007C
 */
void OlimarData::write(Stream& output)
{
	output.textWriteTab(output.m_tabCount);
	for (u32 i = 0; i < 2; i++) {
		output.writeByte(m_flags[i]);
	}
	output.textWriteText("\t# itemFlag\r\n");
}

/*
 * read__Q24Game10OlimarDataFR6Stream
 * --INFO--
 * Address:	8021DFC8
 * Size:	00005C
 */
void OlimarData::read(Stream& input)
{
	for (u32 i = 0; i < 2; i++) {
		m_flags[i] = input.readByte();
	}
}

/*
 * write__Q24Game12CaveSaveDataFR6Stream
 * --INFO--
 * Address:	8021E024
 * Size:	000198
 */
void CaveSaveData::write(Stream& output)
{
	output.textWriteTab(output.m_tabCount);
	output.textWriteText("# formationPikmin\r\n");
	m_cavePikis.write(output);
	output.textWriteTab(output.m_tabCount);
	output.writeFloat(m_time);
	output.textWriteText("\t# time\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_courseIdx);
	output.textWriteText("\t# curr course\r\n");
	output.textWriteTab(output.m_tabCount);
	m_currentCaveID.write(output);
	output.textWriteText("\t# curr cave\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_currentFloor);
	output.textWriteText("\t# curr cave\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_isWaterwraithAlive);
	output.textWriteText("\t# blackman alive\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeFloat(m_waterwraithTimer);
	output.textWriteText("\t# blackman timer\r\n");
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_activeNaviID);
	output.textWriteText("\t# active player id\r\n");
}

/*
 * --INFO--
 * Address:	8021E1BC
 * Size:	0000D0
 */
void CaveSaveData::read(Stream&, unsigned long)
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
	addi     r3, r29, 0x14
	lwz      r12, 0x14(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       readFloat__6StreamFv
	stfs     f1, 0x1c(r29)
	mr       r3, r30
	bl       readByte__6StreamFv
	extsb    r0, r3
	mr       r4, r30
	stw      r0, 4(r29)
	addi     r3, r29, 8
	bl       read__4ID32FR6Stream
	mr       r3, r30
	bl       readByte__6StreamFv
	extsb    r0, r3
	mr       r3, r30
	stw      r0, 0x28(r29)
	bl       readByte__6StreamFv
	clrlwi   r4, r3, 0x18
	mr       r3, r30
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	stb      r0, 0x20(r29)
	bl       readFloat__6StreamFv
	lis      r3, 0x6A303039@ha
	stfs     f1, 0x24(r29)
	addi     r0, r3, 0x6A303039@l
	cmplw    r31, r0
	blt      lbl_8021E270
	mr       r3, r30
	bl       readByte__6StreamFv
	stb      r3, 0x2c(r29)

lbl_8021E270:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
