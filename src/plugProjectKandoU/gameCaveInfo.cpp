#include "Dolphin/string.h"
#include "Game/Cave/Info.h"
#include "Game/generalEnemyMgr.h"
#include "Game/pelletMgr.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480640
    lbl_80480640:
        .4byte 0x63617665
        .4byte 0x496E666F
        .4byte 0x00000000
    .global lbl_8048064C
    lbl_8048064C:
        .4byte 0x67616D65
        .4byte 0x43617665
        .4byte 0x496E666F
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80480660
    lbl_80480660:
        .4byte 0x95CF82C8
        .4byte 0x8379838C
        .4byte 0x83628367
        .4byte 0x836C815B
        .4byte 0x838082C5
        .4byte 0x82B7210A
        .4byte 0x00000000
    .global lbl_8048067C
    lbl_8048067C:
        .asciz "floorInfo"
        .skip 2
    .global lbl_80480688
    lbl_80480688:
        .4byte 0x83528393
        .4byte 0x834E838A
        .4byte 0x815B8363
        .4byte 0x00000000
    .global lbl_80480698
    lbl_80480698:
        .4byte 0x82E282B7
        .4byte 0x82E782AC
        .4byte 0x00000000
        .4byte 0x466C6F6F
        .4byte 0x72496E66
        .4byte 0x6F000000
        .4byte 0x8A4B82CD
        .4byte 0x82B682DF
        .4byte 0x00000000
        .4byte 0x8A4B82A8
        .4byte 0x82ED82E8
        .4byte 0x00000000
        .4byte 0x93478DC5
        .4byte 0x91E59094
        .4byte 0x00000000
        .4byte 0x83418343
        .4byte 0x83658380
        .4byte 0x8DC591E5
        .4byte 0x90940000
        .4byte 0x8351815B
        .4byte 0x83678DC5
        .4byte 0x91E59094
        .4byte 0x00000000
        .4byte 0x834C8383
        .4byte 0x83628376
        .4byte 0x8DC591E5
        .4byte 0x90940000
        .4byte 0x838B815B
        .4byte 0x83809094
        .4byte 0x00000000
        .4byte 0x838B815B
        .4byte 0x836782CC
        .4byte 0x8A848D87
        .4byte 0x00000000
        .4byte 0x8B418AD2
        .4byte 0x95AC9085
        .4byte 0x28313D82
        .4byte 0xA082E829
        .4byte 0x00000000
        .4byte 0x756E6974
        .4byte 0x732E7478
        .4byte 0x74000000
        .4byte 0x8E679770
        .4byte 0x8386836A
        .4byte 0x83628367
        .4byte 0x00000000
        .4byte 0x6C696768
        .4byte 0x742E696E
        .4byte 0x69000000
        .4byte 0x8E679770
        .4byte 0x83898343
        .4byte 0x83670000
        .4byte 0x8A4B9269
        .4byte 0x82F089F3
        .4byte 0x82B78AE2
        .4byte 0x82C58942
        .4byte 0x82B72830
        .4byte 0x3D834983
        .4byte 0x7420313D
        .4byte 0x83498393
        .4byte 0x29000000
        .4byte 0x426C6163
        .4byte 0x6B4D616E
        .4byte 0x54696D65
        .4byte 0x72000000
    .global lbl_8048079C
    lbl_8048079C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_804807A8
    lbl_804807A8:
        .4byte 0x43617665
        .4byte 0x496E666F
        .4byte 0x00000000
    .global lbl_804807B4
    lbl_804807B4:
        .4byte 0x2573206E
        .4byte 0x6F742066
        .4byte 0x6F756E64
        .4byte 0x20210A00
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@"
    "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@":
        .4byte lbl_805196CC
        .4byte lbl_805196D0
        .4byte lbl_80480688
        .4byte lbl_805196D8
        .4byte 0
        .4byte 0
    .global "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@"
    "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@":
        .4byte lbl_805196E0
        .4byte lbl_805196E8
        .4byte lbl_80480698
    .global __vt__Q34Game4Cave8CaveInfo
    __vt__Q34Game4Cave8CaveInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave8CaveInfoFv
        .4byte getChildCount__5CNodeFv
        .4byte read__Q34Game4Cave8CaveInfoFR6Stream
    .global __vt__Q34Game4Cave9FloorInfo
    __vt__Q34Game4Cave9FloorInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave9FloorInfoFv
        .4byte getChildCount__5CNodeFv
        .4byte read__Q34Game4Cave9FloorInfoFR6Stream
    .global __vt__Q34Game4Cave7CapInfo
    __vt__Q34Game4Cave7CapInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave7CapInfoFv
        .4byte getChildCount__5CNodeFv
        .4byte read__Q34Game4Cave7CapInfoFR6Stream
    .global __vt__Q34Game4Cave8GateInfo
    __vt__Q34Game4Cave8GateInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave8GateInfoFv
        .4byte getChildCount__5CNodeFv
        .4byte read__Q34Game4Cave8GateInfoFR6Stream
    .global __vt__Q34Game4Cave8ItemInfo
    __vt__Q34Game4Cave8ItemInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave8ItemInfoFv
        .4byte getChildCount__5CNodeFv
        .4byte read__Q34Game4Cave8ItemInfoFR6Stream
    .global __vt__Q34Game4Cave8TekiInfo
    __vt__Q34Game4Cave8TekiInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave8TekiInfoFv
        .4byte getChildCount__5CNodeFv
        .4byte read__Q34Game4Cave8TekiInfoFR6Stream
    .global __vt__Q34Game4Cave7BaseGen
    __vt__Q34Game4Cave7BaseGen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave7BaseGenFv
        .4byte getChildCount__5CNodeFv
        .4byte read__Q34Game4Cave7BaseGenFR6Stream
        .4byte draw__Q34Game4Cave7BaseGenFR8GraphicsP7Matrixf
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global "enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@"
    "enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@":
        .4byte lbl_805196F0
        .4byte lbl_805196F8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805196C0
    lbl_805196C0:
        .asciz "BaseGen"
    .global lbl_805196C8
    lbl_805196C8:
        .float 0.0
    .global lbl_805196CC
    lbl_805196CC:
        .4byte 0x93790000
    .global lbl_805196D0
    lbl_805196D0:
        .4byte 0x8381835E
        .4byte 0x838B0000
    .global lbl_805196D8
    lbl_805196D8:
        .4byte 0x835E8343
        .4byte 0x838B0000
    .global lbl_805196E0
    lbl_805196E0:
        .4byte 0x92CA8FED
        .4byte 0x00000000
    .global lbl_805196E8
    lbl_805196E8:
        .4byte 0x837B8358
        .4byte 0x00000000
    .global lbl_805196F0
    lbl_805196F0:
        .4byte 0x82C882B5
        .4byte 0x00000000
    .global lbl_805196F8
    lbl_805196F8:
        .4byte 0x82A082E8
        .4byte 0x00000000
    .global lbl_80519700
    lbl_80519700:
        .float 1.0
    .global lbl_80519704
    lbl_80519704:
        .asciz "test"
        .skip 3
    .global lbl_8051970C
    lbl_8051970C:
        .asciz "VRBOX"
        .skip 2
    .global lbl_80519714
    lbl_80519714:
        .4byte 0x83BF91AE
        .4byte 0x90AB0000
    .global lbl_8051971C
    lbl_8051971C:
        .4byte 0x83C091AE
        .4byte 0x90AB0000
    .global lbl_80519724
    lbl_80519724:
        .4byte 0x894282B5
        .4byte 0x8FB00000
    .global lbl_8051972C
    lbl_8051972C:
        .4byte 0x56657273
        .4byte 0x696F6E00
    .global lbl_80519734
    lbl_80519734:
        .4byte 0x461C4000
    .global lbl_80519738
    lbl_80519738:
        .4byte 0x92BE82DE
        .4byte 0x95C70000
    .global lbl_80519740
    lbl_80519740:
        .4byte 0x8A4B9177
        .4byte 0x00000000
    .global lbl_80519748
    lbl_80519748:
        .asciz "%s"
        .skip 1
*/

#pragma auto_inline on

namespace Game {
namespace Cave {
/*
 * __ct__Q34Game4Cave7BaseGenFv
 * --INFO--
 * Address:	801D60A4
 * Size:	000070
 */
BaseGen::BaseGen()
{
	m_name       = "BaseGen";
	m_position.x = 0.0f;
	m_position.y = 0.0f;
	m_position.z = 0.0f;
	m_radius     = 0.0f;
	m_angle      = 0.0f;
	m_minimum    = 1;
	m_maximum    = 1;
	m_spawnType  = TekiA__Easy;
}

/*
 * --INFO--
 * Address:	801D6114
 * Size:	0000F4
 */
void BaseGen::read(Stream& stream)
{
	int childCount = stream.readInt();
	for (int i = 0; i < childCount; i++) {
		BaseGen* child     = new BaseGen();
		child->m_spawnType = (BaseGen::Type)stream.readInt();
		child->m_position.read(stream);
		child->m_angle   = stream.readFloat();
		child->m_radius  = stream.readFloat();
		child->m_minimum = stream.readInt();
		child->m_maximum = stream.readInt();
		add(child);
	}
}

/*
 * --INFO--
 * Address:	801D6208
 * Size:	000004
 */
void BaseGen::draw(Graphics&, Matrixf*) { }

/*
 * read__Q34Game4Cave8TekiInfoFR6Stream
 *
 * --INFO--
 * Address:	801D620C
 * Size:	0001A8
 */
void TekiInfo::read(Stream& stream)
{
	char buffer1[128];
	char buffer2[128];
	char* inputString = stream.readString(nullptr, 0);
	if (*inputString == '$') {
		char rawDropMode = inputString[1];
		if ((rawDropMode < '1') || (rawDropMode > '9')) {
			inputString++;
			m_dropMode = DropOnPikminOrLeader;
		} else {
			inputString += 2;
			m_dropMode = DropMode(rawDropMode - '0');
		}
	} else {
		m_dropMode = NoDrop;
	}
	buffer1[0]   = '\0';
	char* _s2    = buffer2;
	int iVar10   = 0;
	u32 uVar9    = 0;
	char* pcVar7 = inputString;
	do {
		size_t sVar4 = strlen(inputString);
		if (sVar4 <= uVar9) {
			_s2[iVar10] = '\0';
			m_enemyID   = generalEnemyMgr->getEnemyID(buffer2, 4);
			if (buffer1[0] != '\0') {
				pelletMgr->makeOtakaraItemCode(buffer1, m_otakaraItemCode);
			}
			uVar9    = stream.readInt();
			m_weight = uVar9;
			m_type   = (BaseGen::Type)stream.readInt();
			pcVar7   = generalEnemyMgr->getEnemyName(m_enemyID, 4);
			m_name   = pcVar7;
			return;
		}
		bool bVar2 = false;
		if (*pcVar7 == '_') {
			if (_s2 == buffer2) {
				_s2[iVar10]        = '\0';
				EnemyInfo* pEVar11 = gEnemyInfo;
				int iVar8          = 0;
				while (true) {
					if (gEnemyInfoNum <= iVar8)
						break;
					if (strcmp(pEVar11->m_name, _s2) == 0) {
						bVar2 = true;
						break;
					}
					pEVar11 = pEVar11 + 1;
					iVar8 += 1;
				}
			}
		}
		if (bVar2) {
			_s2    = buffer1;
			iVar10 = 0;
		} else {
			_s2[iVar10] = *pcVar7;
			iVar10 += 1;
		}
		uVar9 += 1;
		pcVar7 = pcVar7 + 1;
	} while (true);
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x134(r1)
	  stmw      r22, 0x108(r1)
	  mr        r30, r4
	  mr        r29, r3
	  li        r4, 0
	  mr        r3, r30
	  bl        0x23EEA4
	  lbz       r0, 0x0(r3)
	  mr        r31, r3
	  cmpwi     r0, 0x24
	  bne-      .loc_0x70
	  lbz       r3, 0x1(r31)
	  extsb     r0, r3
	  cmpwi     r0, 0x31
	  blt-      .loc_0x60
	  cmpwi     r0, 0x39
	  bgt-      .loc_0x60
	  subi      r0, r3, 0x30
	  addi      r31, r31, 0x2
	  stb       r0, 0x24(r29)
	  b         .loc_0x78

	.loc_0x60:
	  li        r0, 0x1
	  addi      r31, r31, 0x1
	  stb       r0, 0x24(r29)
	  b         .loc_0x78

	.loc_0x70:
	  li        r0, 0
	  stb       r0, 0x24(r29)

	.loc_0x78:
	  li        r0, 0
	  mr        r28, r31
	  stb       r0, 0x8(r1)
	  addi      r26, r1, 0x88
	  li        r25, 0
	  li        r24, 0
	  b         .loc_0x120

	.loc_0x94:
	  lbz       r0, 0x0(r28)
	  li        r23, 0
	  cmpwi     r0, 0x5F
	  bne-      .loc_0xF8
	  addi      r0, r1, 0x88
	  cmplw     r26, r0
	  bne-      .loc_0xF8
	  li        r0, 0
	  lis       r3, 0x804B
	  stbx      r0, r26, r25
	  subi      r27, r3, 0x3AC8
	  li        r22, 0
	  b         .loc_0xEC

	.loc_0xC8:
	  lwz       r3, 0x0(r27)
	  mr        r4, r26
	  bl        -0x10BC1C
	  cmpwi     r3, 0
	  bne-      .loc_0xE4
	  li        r23, 0x1
	  b         .loc_0xF8

	.loc_0xE4:
	  addi      r27, r27, 0x34
	  addi      r22, r22, 0x1

	.loc_0xEC:
	  lwz       r0, -0x7C30(r13)
	  cmpw      r22, r0
	  blt+      .loc_0xC8

	.loc_0xF8:
	  rlwinm.   r0,r23,0,24,31
	  beq-      .loc_0x10C
	  addi      r26, r1, 0x8
	  li        r25, 0
	  b         .loc_0x118

	.loc_0x10C:
	  lbz       r0, 0x0(r28)
	  stbx      r0, r26, r25
	  addi      r25, r25, 0x1

	.loc_0x118:
	  addi      r24, r24, 0x1
	  addi      r28, r28, 0x1

	.loc_0x120:
	  mr        r3, r31
	  bl        -0x10BA20
	  cmplw     r24, r3
	  blt+      .loc_0x94
	  li        r0, 0
	  addi      r4, r1, 0x88
	  stbx      r0, r26, r25
	  li        r5, 0x4
	  lwz       r3, -0x6E20(r13)
	  bl        -0xC8DAC
	  stw       r3, 0x18(r29)
	  lbz       r0, 0x8(r1)
	  extsb.    r0, r0
	  beq-      .loc_0x168
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x8
	  addi      r5, r29, 0x26
	  bl        -0x684F4

	.loc_0x168:
	  mr        r3, r30
	  bl        0x23E718
	  stw       r3, 0x1C(r29)
	  mr        r3, r30
	  bl        0x23E70C
	  stw       r3, 0x20(r29)
	  li        r5, 0x4
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0x18(r29)
	  bl        -0xC8E1C
	  stw       r3, 0x14(r29)
	  lmw       r22, 0x108(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D63B4
 * Size:	0000A8
 */
void ItemInfo::read(Stream&)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
li       r5, 0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r4
li       r4, 0
stw      r29, 0x14(r1)
mr       r29, r3
mr       r3, r30
bl       readString__6StreamFPci
mr       r0, r3
lwz      r3, pelletMgr__4Game@sda21(r13)
mr       r31, r0
lwz      r12, 0(r3)
mr       r4, r31
lwz      r12, 0x88(r12)
mtctr    r12
bctrl
stw      r3, 0x18(r29)
lwz      r0, 0x18(r29)
cmpwi    r0, -1
bne      lbl_801D6430
lis      r3, lbl_8048064C@ha
lis      r5, lbl_80480660@ha
addi     r3, r3, lbl_8048064C@l
li       r4, 0x293
addi     r5, r5, lbl_80480660@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D6430:
mr       r3, r30
bl       readInt__6StreamFv
stw      r3, 0x1c(r29)
stw      r31, 0x14(r29)
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
 * Address:	801D645C
 * Size:	00008C
 */
void GateInfo::read(Stream& input)
{
	char* name = input.readString(nullptr, 0);
	m_caveID   = Game::pelletMgr->getCaveID(name);
	JUT_ASSERTLINE(659, m_caveID != -1, "?¿½Ï‚Èƒy?¿½?¿½?¿½b?¿½g?¿½l?¿½[?¿½?¿½?¿½Å‚ï¿½!\n");
	m_weight = input.readInt();
	m_name   = name;
	/*
stwu     r1, -0x20(r1)
mflr     r0
li       r5, 0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r4
li       r4, 0
stw      r29, 0x14(r1)
mr       r29, r3
mr       r3, r30
bl       readString__6StreamFPci
mr       r0, r3
lwz      r3, itemGateMgr__4Game@sda21(r13)
mr       r31, r0
lwz      r12, 0(r3)
mr       r4, r31
lwz      r12, 0x78(r12)
mtctr    r12
bctrl
stw      r3, 0x18(r29)
mr       r3, r30
bl       readFloat__6StreamFv
stfs     f1, 0x1c(r29)
mr       r3, r30
bl       readInt__6StreamFv
stw      r3, 0x20(r29)
stw      r31, 0x14(r29)
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
 * Address:	801D64E8
 * Size:	00001C
 */
TekiInfo* CapInfo::getTekiInfo() { return (!m_doesNotHaveTeki ? m_tekiInfo : nullptr); }

/*
 * --INFO--
 * Address:	801D6504
 * Size:	0000C8
 */
void CapInfo::read(Stream& input)
{
	m_doesNotHaveTeki = input.readByte();
	if (m_doesNotHaveTeki == false) {
		m_tekiInfo      = new TekiInfo();
		m_tekiInfo->_0C = m_tekiInfo;
		getTekiInfo()->read(input);
	}

	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r4
stw      r29, 0x14(r1)
mr       r29, r3
mr       r3, r30
bl       readByte__6StreamFv
stb      r3, 0x18(r29)
lbz      r0, 0x18(r29)
cmplwi   r0, 0
bne      lbl_801D65B0
li       r3, 0x28
bl       __nw__FUl
or.      r31, r3, r3
beq      lbl_801D6578
bl       __ct__5CNodeFv
lis      r4, __vt__Q34Game4Cave8TekiInfo@ha
li       r3, 0
addi     r4, r4, __vt__Q34Game4Cave8TekiInfo@l
li       r0, 1
stw      r4, 0(r31)
sth      r3, 0x26(r31)
stw      r3, 0x18(r31)
stw      r0, 0x1c(r31)
stw      r3, 0x20(r31)
stb      r3, 0x24(r31)

lbl_801D6578:
stw      r31, 0x1c(r29)
lwz      r3, 0x1c(r29)
stw      r3, 0xc(r3)
lbz      r0, 0x18(r29)
cmplwi   r0, 0
bne      lbl_801D6598
lwz      r3, 0x1c(r29)
b        lbl_801D659C

lbl_801D6598:
li       r3, 0

lbl_801D659C:
lwz      r12, 0(r3)
mr       r4, r30
lwz      r12, 0x10(r12)
mtctr    r12
bctrl

lbl_801D65B0:
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
 * Address:	801D65CC
 * Size:	000174
 */
FloorInfo::FloorInfo()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r4, __vt__5CNode@ha
li       r6, 0
stw      r0, 0x24(r1)
addi     r0, r4, __vt__5CNode@l
lis      r4, lbl_8048067C@ha
stw      r31, 0x1c(r1)
addi     r5, r4, lbl_8048067C@l
mr       r31, r3
li       r4, 1
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
stw      r0, 0(r3)
lis      r3, __vt__Q34Game4Cave9FloorInfo@ha
addi     r0, r3, __vt__Q34Game4Cave9FloorInfo@l
stw      r6, 0x10(r31)
addi     r3, r31, 0x18
stw      r6, 0xc(r31)
stw      r6, 8(r31)
stw      r6, 4(r31)
stw      r5, 0x14(r31)
stw      r0, 0(r31)
bl       __ct__Q44Game4Cave9FloorInfo5ParmsFv
addi     r30, r31, 0x2fc
mr       r3, r30
bl       __ct__5CNodeFv
lis      r3, __vt__Q34Game4Cave8TekiInfo@ha
addi     r29, r31, 0x324
addi     r0, r3, __vt__Q34Game4Cave8TekiInfo@l
li       r4, 0
stw      r0, 0(r30)
li       r0, 1
mr       r3, r29
sth      r4, 0x26(r30)
stw      r4, 0x18(r30)
stw      r0, 0x1c(r30)
stw      r4, 0x20(r30)
stb      r4, 0x24(r30)
bl       __ct__5CNodeFv
lis      r3, __vt__Q34Game4Cave8ItemInfo@ha
addi     r30, r31, 0x344
addi     r0, r3, __vt__Q34Game4Cave8ItemInfo@l
li       r4, 0
stw      r0, 0(r29)
li       r0, 1
mr       r3, r30
stw      r4, 0x18(r29)
stw      r0, 0x1c(r29)
bl       __ct__5CNodeFv
lis      r3, __vt__Q34Game4Cave8GateInfo@ha
addi     r29, r31, 0x368
addi     r0, r3, __vt__Q34Game4Cave8GateInfo@l
li       r4, 0
stw      r0, 0(r30)
li       r0, 1
lfs      f0, lbl_805196C8@sda21(r2)
mr       r3, r29
stw      r4, 0x18(r30)
stw      r0, 0x20(r30)
stfs     f0, 0x1c(r30)
bl       __ct__5CNodeFv
lis      r3, __vt__Q34Game4Cave7CapInfo@ha
li       r4, 1
addi     r3, r3, __vt__Q34Game4Cave7CapInfo@l
li       r0, 0
stw      r3, 0(r29)
mr       r3, r31
stb      r4, 0x18(r29)
stw      r0, 0x1c(r29)
stw      r0, 0x30c(r31)
stw      r0, 0x308(r31)
stw      r0, 0x304(r31)
stw      r0, 0x300(r31)
stw      r0, 0x334(r31)
stw      r0, 0x330(r31)
stw      r0, 0x32c(r31)
stw      r0, 0x328(r31)
stw      r0, 0x354(r31)
stw      r0, 0x350(r31)
stw      r0, 0x34c(r31)
stw      r0, 0x348(r31)
stw      r0, 0x378(r31)
stw      r0, 0x374(r31)
stw      r0, 0x370(r31)
stw      r0, 0x36c(r31)
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
 * Address:	801D6740
 * Size:	000060
 */
CapInfo::~CapInfo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801D6784
lis      r5, __vt__Q34Game4Cave7CapInfo@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game4Cave7CapInfo@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_801D6784
mr       r3, r30
bl       __dl__FPv

lbl_801D6784:
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
 * Address:	801D67A0
 * Size:	000060
 */
GateInfo::~GateInfo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801D67E4
lis      r5, __vt__Q34Game4Cave8GateInfo@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game4Cave8GateInfo@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_801D67E4
mr       r3, r30
bl       __dl__FPv

lbl_801D67E4:
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
 * Address:	801D6800
 * Size:	000060
 */
ItemInfo::~ItemInfo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801D6844
lis      r5, __vt__Q34Game4Cave8ItemInfo@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game4Cave8ItemInfo@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_801D6844
mr       r3, r30
bl       __dl__FPv

lbl_801D6844:
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
 * Address:	801D6860
 * Size:	000060
 */
TekiInfo::~TekiInfo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801D68A4
lis      r5, __vt__Q34Game4Cave8TekiInfo@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game4Cave8TekiInfo@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_801D68A4
mr       r3, r30
bl       __dl__FPv

lbl_801D68A4:
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
 * Address:	801D68C0
 * Size:	000410
 */
FloorInfo::Parms::Parms()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
extsh.   r0, r4
lis      r4, lbl_80480640@ha
stw      r31, 0xc(r1)
addi     r31, r4, lbl_80480640@l
stw      r30, 8(r1)
mr       r30, r3
beq      lbl_801D68F0
addi     r0, r30, 0x2e0
stw      r0, 0(r30)

lbl_801D68F0:
li       r0, 0
lis      r5, 0x66303030@ha
stw      r0, 4(r30)
addi     r0, r31, 0x64
mr       r4, r30
addi     r3, r30, 0xc
stw      r0, 8(r30)
addi     r5, r5, 0x66303030@l
addi     r6, r31, 0x70
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303031@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r7, 0
stw      r0, 0xc(r30)
li       r0, 0x7f
mr       r4, r30
addi     r3, r30, 0x34
stw      r7, 0x24(r30)
addi     r5, r5, 0x66303031@l
addi     r6, r31, 0x7c
stw      r7, 0x2c(r30)
stw      r0, 0x30(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303032@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r3, 1
stw      r0, 0x34(r30)
li       r7, 0
li       r0, 0x7f
mr       r4, r30
stw      r3, 0x4c(r30)
addi     r3, r30, 0x5c
addi     r5, r5, 0x66303032@l
addi     r6, r31, 0x88
stw      r7, 0x54(r30)
stw      r0, 0x58(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303033@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r7, 0
stw      r0, 0x5c(r30)
li       r0, 0x80
mr       r4, r30
addi     r3, r30, 0x84
stw      r7, 0x74(r30)
addi     r5, r5, 0x66303033@l
addi     r6, r31, 0x94
stw      r7, 0x7c(r30)
stw      r0, 0x80(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303034@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r7, 0
stw      r0, 0x84(r30)
li       r0, 0x80
mr       r4, r30
addi     r3, r30, 0xac
stw      r7, 0x9c(r30)
addi     r5, r5, 0x66303034@l
addi     r6, r31, 0xa4
stw      r7, 0xa4(r30)
stw      r0, 0xa8(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303134@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r7, 0
stw      r0, 0xac(r30)
li       r0, 0x20
mr       r4, r30
addi     r3, r30, 0xd4
stw      r7, 0xc4(r30)
addi     r5, r5, 0x66303134@l
addi     r6, r31, 0xb4
stw      r7, 0xcc(r30)
stw      r0, 0xd0(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303035@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r7, 0
stw      r0, 0xd4(r30)
li       r0, 0x80
mr       r4, r30
addi     r3, r30, 0xfc
stw      r7, 0xec(r30)
addi     r5, r5, 0x66303035@l
addi     r6, r31, 0xc4
stw      r7, 0xf4(r30)
stw      r0, 0xf8(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303036@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r3, 4
stw      r0, 0xfc(r30)
li       r7, 1
li       r0, 0xf
mr       r4, r30
stw      r3, 0x114(r30)
addi     r3, r30, 0x124
addi     r5, r5, 0x66303036@l
addi     r6, r31, 0xd0
stw      r7, 0x11c(r30)
stw      r0, 0x120(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<f>"@ha
lis      r5, 0x66303037@ha
addi     r0, r3, "__vt__7Parm<f>"@l
lfs      f1, lbl_805196C8@sda21(r2)
stw      r0, 0x124(r30)
mr       r4, r30
lfs      f0, lbl_80519700@sda21(r2)
addi     r3, r30, 0x14c
stfs     f1, 0x13c(r30)
addi     r5, r5, 0x66303037@l
addi     r6, r31, 0xe0
stfs     f1, 0x144(r30)
stfs     f0, 0x148(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r6, 0x66303038@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r9, 0
stw      r0, 0x14c(r30)
li       r0, 1
mr       r4, r30
addi     r3, r30, 0x174
stw      r9, 0x164(r30)
addi     r5, r31, 0xf4
addi     r7, r6, 0x66303038@l
addi     r8, r31, 0x100
stw      r9, 0x16c(r30)
li       r6, 0x40
stw      r0, 0x170(r30)
bl       __ct__10ParmStringFP10ParametersPciUlPc
lis      r6, 0x66303039@ha
mr       r4, r30
addi     r3, r30, 0x194
addi     r5, r31, 0x110
addi     r7, r6, 0x66303039@l
addi     r8, r31, 0x11c
li       r6, 0x40
bl       __ct__10ParmStringFP10ParametersPciUlPc
lis      r6, 0x66303041@ha
mr       r4, r30
addi     r3, r30, 0x1b4
addi     r5, r2, lbl_80519704@sda21
addi     r7, r6, 0x66303041@l
li       r6, 0x40
addi     r8, r2, lbl_8051970C@sda21
bl       __ct__10ParmStringFP10ParametersPciUlPc
lis      r5, 0x66303130@ha
mr       r4, r30
addi     r3, r30, 0x1d4
addi     r6, r31, 0x128
addi     r5, r5, 0x66303130@l
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r4, "__vt__7Parm<i>"@ha
lis      r3, "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@"@ha
addi     r0, r4, "__vt__7Parm<i>"@l
lis      r6, 0x66303131@ha
stw      r0, 0x1d4(r30)
li       r7, 0
addi     r5, r3, "enum_floor_alpha_types__26@unnamed@gameCaveInfo_cpp@"@l
addi     r8, r6, 0x66303131@l
stw      r7, 0x1ec(r30)
li       r0, 1
mr       r4, r30
addi     r3, r30, 0x1fc
stw      r7, 0x1f4(r30)
li       r6, 0
li       r7, 6
addi     r9, r2, lbl_80519714@sda21
stw      r0, 0x1f8(r30)
bl       __ct__8ParmEnumFP10ParametersPPcUlilPc
lis      r3, "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@"@ha
lis      r6, 0x66303132@ha
addi     r5, r3, "enum_floor_beta_types__26@unnamed@gameCaveInfo_cpp@"@l
mr       r4, r30
addi     r8, r6, 0x66303132@l
addi     r3, r30, 0x220
li       r6, 0
li       r7, 3
addi     r9, r2, lbl_8051971C@sda21
bl       __ct__8ParmEnumFP10ParametersPPcUlilPc
lis      r6, 0x66303133@ha
mr       r4, r30
addi     r3, r30, 0x244
addi     r5, r13, "enum_floor_hiddens__26@unnamed@gameCaveInfo_cpp@"@sda21
addi     r8, r6, 0x66303133@l
li       r6, 0
li       r7, 2
addi     r9, r2, lbl_80519724@sda21
bl       __ct__8ParmEnumFP10ParametersPPcUlilPc
lis      r5, 0x66303135@ha
mr       r4, r30
addi     r3, r30, 0x268
addi     r6, r2, lbl_8051972C@sda21
addi     r5, r5, 0x66303135@l
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
lis      r5, 0x66303136@ha
addi     r0, r3, "__vt__7Parm<i>"@l
li       r7, 0
stw      r0, 0x268(r30)
li       r0, 0x2710
mr       r4, r30
addi     r3, r30, 0x290
stw      r7, 0x280(r30)
addi     r5, r5, 0x66303136@l
addi     r6, r31, 0x14c
stw      r7, 0x288(r30)
stw      r0, 0x28c(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<f>"@ha
lis      r5, 0x66303137@ha
addi     r0, r3, "__vt__7Parm<f>"@l
lfs      f1, lbl_805196C8@sda21(r2)
stw      r0, 0x290(r30)
mr       r4, r30
lfs      f0, lbl_80519734@sda21(r2)
addi     r3, r30, 0x2b8
stfs     f1, 0x2a8(r30)
addi     r5, r5, 0x66303137@l
addi     r6, r2, lbl_80519738@sda21
stfs     f1, 0x2b0(r30)
stfs     f0, 0x2b4(r30)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
li       r4, 0
addi     r3, r3, "__vt__7Parm<i>"@l
li       r0, 1
stw      r3, 0x2b8(r30)
mr       r3, r30
stw      r4, 0x2d0(r30)
stw      r4, 0x2d8(r30)
stw      r0, 0x2dc(r30)
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
 * Address:	801D6CD0
 * Size:	000014
 */
bool FloorInfo::hasHiddenCollision()
{
	/*
lwz      r0, 0x274(r3)
subfic   r0, r0, 1
cntlzw   r0, r0
srwi     r3, r0, 5
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6CE4
 * Size:	000008
 */
int FloorInfo::getTekiMax()
{
	/*
lwz      r3, 0x8c(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6CEC
 * Size:	00002C
 */
int FloorInfo::getTekiInfoNum()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwzu     r12, 0x2fc(r3)
lwz      r12, 0xc(r12)
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
 * Address:	801D6D18
 * Size:	000094
 */
TekiInfo* FloorInfo::getTekiInfo(int)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
li       r31, 0
stw      r30, 0x18(r1)
or.      r30, r4, r4
stw      r29, 0x14(r1)
mr       r29, r3
blt      lbl_801D6D60
addi     r3, r29, 0x2fc
lwz      r12, 0x2fc(r29)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
cmpw     r30, r3
bgt      lbl_801D6D60
li       r31, 1

lbl_801D6D60:
clrlwi.  r0, r31, 0x18
bne      lbl_801D6D84
lis      r3, lbl_8048064C@ha
lis      r5, lbl_8048079C@ha
addi     r3, r3, lbl_8048064C@l
li       r4, 0x388
addi     r5, r5, lbl_8048079C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D6D84:
mr       r4, r30
addi     r3, r29, 0x2fc
bl       getChildAt__5CNodeFi
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
 * Address:	801D6DAC
 * Size:	000024
 */
int FloorInfo::getTekiWeightSum()
{
	/*
lwz      r4, 0x30c(r3)
li       r3, 0
b        lbl_801D6DC4

lbl_801D6DB8:
lwz      r0, 0x1c(r4)
lwz      r4, 4(r4)
add      r3, r3, r0

lbl_801D6DC4:
cmplwi   r4, 0
bne      lbl_801D6DB8
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6DD0
 * Size:	000008
 */
int FloorInfo::getItemMax()
{
	/*
lwz      r3, 0xb4(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6DD8
 * Size:	00002C
 */
int FloorInfo::getItemInfoNum()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwzu     r12, 0x324(r3)
lwz      r12, 0xc(r12)
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
 * Address:	801D6E04
 * Size:	000094
 */
ItemInfo* FloorInfo::getItemInfo(int)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
li       r31, 0
stw      r30, 0x18(r1)
or.      r30, r4, r4
stw      r29, 0x14(r1)
mr       r29, r3
blt      lbl_801D6E4C
addi     r3, r29, 0x324
lwz      r12, 0x324(r29)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
cmpw     r30, r3
bgt      lbl_801D6E4C
li       r31, 1

lbl_801D6E4C:
clrlwi.  r0, r31, 0x18
bne      lbl_801D6E70
lis      r3, lbl_8048064C@ha
lis      r5, lbl_8048079C@ha
addi     r3, r3, lbl_8048064C@l
li       r4, 0x3a1
addi     r5, r5, lbl_8048079C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D6E70:
mr       r4, r30
addi     r3, r29, 0x324
bl       getChildAt__5CNodeFi
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
 * Address:	801D6E98
 * Size:	000024
 */
int FloorInfo::getItemWeightSum()
{
	/*
lwz      r4, 0x334(r3)
li       r3, 0
b        lbl_801D6EB0

lbl_801D6EA4:
lwz      r0, 0x1c(r4)
lwz      r4, 4(r4)
add      r3, r3, r0

lbl_801D6EB0:
cmplwi   r4, 0
bne      lbl_801D6EA4
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6EBC
 * Size:	000008
 */
int FloorInfo::getGateMax()
{
	/*
lwz      r3, 0xdc(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6EC4
 * Size:	00002C
 */
int FloorInfo::getGateInfoNum()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwzu     r12, 0x344(r3)
lwz      r12, 0xc(r12)
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
 * Address:	801D6EF0
 * Size:	000094
 */
GateInfo* FloorInfo::getGateInfo(int)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
li       r31, 0
stw      r30, 0x18(r1)
or.      r30, r4, r4
stw      r29, 0x14(r1)
mr       r29, r3
blt      lbl_801D6F38
addi     r3, r29, 0x344
lwz      r12, 0x344(r29)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
cmpw     r30, r3
bgt      lbl_801D6F38
li       r31, 1

lbl_801D6F38:
clrlwi.  r0, r31, 0x18
bne      lbl_801D6F5C
lis      r3, lbl_8048064C@ha
lis      r5, lbl_8048079C@ha
addi     r3, r3, lbl_8048064C@l
li       r4, 0x3ba
addi     r5, r5, lbl_8048079C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D6F5C:
mr       r4, r30
addi     r3, r29, 0x344
bl       getChildAt__5CNodeFi
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
 * Address:	801D6F84
 * Size:	000024
 */
int FloorInfo::getGateWeightSum()
{
	/*
lwz      r4, 0x354(r3)
li       r3, 0
b        lbl_801D6F9C

lbl_801D6F90:
lwz      r0, 0x20(r4)
lwz      r4, 4(r4)
add      r3, r3, r0

lbl_801D6F9C:
cmplwi   r4, 0
bne      lbl_801D6F90
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6FA8
 * Size:	000008
 */
int FloorInfo::getCapMax()
{
	/*
lwz      r3, 0x104(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	801D6FB0
 * Size:	00002C
 */
int FloorInfo::getCapInfoNum()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwzu     r12, 0x368(r3)
lwz      r12, 0xc(r12)
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
 * Address:	801D6FDC
 * Size:	000094
 */
CapInfo* FloorInfo::getCapInfo(int)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
li       r31, 0
stw      r30, 0x18(r1)
or.      r30, r4, r4
stw      r29, 0x14(r1)
mr       r29, r3
blt      lbl_801D7024
addi     r3, r29, 0x368
lwz      r12, 0x368(r29)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
cmpw     r30, r3
bgt      lbl_801D7024
li       r31, 1

lbl_801D7024:
clrlwi.  r0, r31, 0x18
bne      lbl_801D7048
lis      r3, lbl_8048064C@ha
lis      r5, lbl_8048079C@ha
addi     r3, r3, lbl_8048064C@l
li       r4, 0x3d3
addi     r5, r5, lbl_8048079C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D7048:
mr       r4, r30
addi     r3, r29, 0x368
bl       getChildAt__5CNodeFi
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
 * Address:	801D7070
 * Size:	000008
 */
int FloorInfo::getRoomNum()
{
	/*
lwz      r3, 0x12c(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	801D7078
 * Size:	000008
 */
float FloorInfo::getRouteRatio()
{
	/*
lfs      f1, 0x154(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	801D7080
 * Size:	000044
 */
bool FloorInfo::hasEscapeFountain(int)
{
	/*
lwz      r0, 0x17c(r3)
cmpwi    r4, -1
subfic   r0, r0, 1
cntlzw   r0, r0
srwi     r0, r0, 5
bne      lbl_801D70A0
mr       r3, r0
blr

lbl_801D70A0:
clrlwi.  r0, r0, 0x18
beq      lbl_801D70BC
lwz      r0, 0x64(r3)
cmpw     r4, r0
bne      lbl_801D70BC
li       r3, 1
blr

lbl_801D70BC:
li       r3, 0
blr
	*/
}

/*
 * --INFO--
 * Address:	801D70C4
 * Size:	000014
 */
bool FloorInfo::useKaidanBarrel()
{
	/*
lwz      r0, 0x204(r3)
subfic   r0, r0, 1
cntlzw   r0, r0
srwi     r3, r0, 5
blr
	*/
}

/*
 * --INFO--
 * Address:	801D70D8
 * Size:	000224
 */
void FloorInfo::read(Stream&)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stmw     r27, 0xc(r1)
mr       r30, r3
mr       r31, r4
addi     r3, r30, 0x18
bl       read__10ParametersFR6Stream
mr       r3, r31
bl       readInt__6StreamFv
mr       r29, r3
li       r27, 0
b        lbl_801D7170

lbl_801D710C:
li       r3, 0x28
bl       __nw__FUl
or.      r28, r3, r3
beq      lbl_801D7148
bl       __ct__5CNodeFv
lis      r4, __vt__Q34Game4Cave8TekiInfo@ha
li       r3, 0
addi     r4, r4, __vt__Q34Game4Cave8TekiInfo@l
li       r0, 1
stw      r4, 0(r28)
sth      r3, 0x26(r28)
stw      r3, 0x18(r28)
stw      r0, 0x1c(r28)
stw      r3, 0x20(r28)
stb      r3, 0x24(r28)

lbl_801D7148:
mr       r3, r28
mr       r4, r31
lwz      r12, 0(r28)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
mr       r4, r28
addi     r3, r30, 0x2fc
bl       add__5CNodeFP5CNode
addi     r27, r27, 1

lbl_801D7170:
cmpw     r27, r29
blt      lbl_801D710C
mr       r3, r31
bl       readInt__6StreamFv
mr       r29, r3
li       r27, 0
b        lbl_801D71E4

lbl_801D718C:
li       r3, 0x20
bl       __nw__FUl
or.      r28, r3, r3
beq      lbl_801D71BC
bl       __ct__5CNodeFv
lis      r4, __vt__Q34Game4Cave8ItemInfo@ha
li       r3, 0
addi     r4, r4, __vt__Q34Game4Cave8ItemInfo@l
li       r0, 1
stw      r4, 0(r28)
stw      r3, 0x18(r28)
stw      r0, 0x1c(r28)

lbl_801D71BC:
mr       r3, r28
mr       r4, r31
lwz      r12, 0(r28)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
mr       r4, r28
addi     r3, r30, 0x324
bl       add__5CNodeFP5CNode
addi     r27, r27, 1

lbl_801D71E4:
cmpw     r27, r29
blt      lbl_801D718C
mr       r3, r31
bl       readInt__6StreamFv
mr       r29, r3
li       r27, 0
b        lbl_801D7260

lbl_801D7200:
li       r3, 0x24
bl       __nw__FUl
or.      r28, r3, r3
beq      lbl_801D7238
bl       __ct__5CNodeFv
lis      r4, __vt__Q34Game4Cave8GateInfo@ha
li       r3, 0
addi     r4, r4, __vt__Q34Game4Cave8GateInfo@l
li       r0, 1
stw      r4, 0(r28)
lfs      f0, lbl_805196C8@sda21(r2)
stw      r3, 0x18(r28)
stw      r0, 0x20(r28)
stfs     f0, 0x1c(r28)

lbl_801D7238:
mr       r3, r28
mr       r4, r31
lwz      r12, 0(r28)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
mr       r4, r28
addi     r3, r30, 0x344
bl       add__5CNodeFP5CNode
addi     r27, r27, 1

lbl_801D7260:
cmpw     r27, r29
blt      lbl_801D7200
lwz      r0, 0x298(r30)
cmpwi    r0, 1
blt      lbl_801D72E8
mr       r3, r31
bl       readInt__6StreamFv
mr       r29, r3
li       r27, 0
b        lbl_801D72E0

lbl_801D7288:
li       r3, 0x20
bl       __nw__FUl
or.      r28, r3, r3
beq      lbl_801D72B8
bl       __ct__5CNodeFv
lis      r4, __vt__Q34Game4Cave7CapInfo@ha
li       r3, 1
addi     r4, r4, __vt__Q34Game4Cave7CapInfo@l
li       r0, 0
stw      r4, 0(r28)
stb      r3, 0x18(r28)
stw      r0, 0x1c(r28)

lbl_801D72B8:
mr       r3, r28
mr       r4, r31
lwz      r12, 0(r28)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
mr       r4, r28
addi     r3, r30, 0x368
bl       add__5CNodeFP5CNode
addi     r27, r27, 1

lbl_801D72E0:
cmpw     r27, r29
blt      lbl_801D7288

lbl_801D72E8:
lmw      r27, 0xc(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	801D72FC
 * Size:	0000D0
 */
CaveInfo::CaveInfo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lis      r7, lbl_80480640@ha
lis      r6, __vt__Q34Game4Cave8CaveInfo@ha
stw      r0, 0x14(r1)
lis      r4, __vt__5CNode@ha
addi     r8, r6, __vt__Q34Game4Cave8CaveInfo@l
lis      r5, 0x63303030@ha
stw      r31, 0xc(r1)
addi     r0, r4, __vt__5CNode@l
mr       r31, r3
addi     r9, r7, lbl_80480640@l
stw      r0, 0(r3)
li       r10, 0
addi     r7, r31, 0x4c
addi     r4, r31, 0x18
stw      r10, 0x10(r3)
lis      r3, lbl_804807A8@ha
addi     r0, r3, lbl_804807A8@l
addi     r5, r5, 0x63303030@l
stw      r10, 0xc(r31)
addi     r3, r4, 0xc
addi     r6, r2, lbl_80519740@sda21
stw      r10, 8(r31)
stw      r10, 4(r31)
stw      r9, 0x14(r31)
stw      r8, 0(r31)
stw      r7, 0x18(r31)
stw      r10, 0x1c(r31)
stw      r0, 0x20(r31)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<i>"@ha
li       r4, 1
addi     r3, r3, "__vt__7Parm<i>"@l
li       r0, 0x80
stw      r3, 0x24(r31)
addi     r3, r31, 0x50
stw      r4, 0x3c(r31)
stw      r4, 0x44(r31)
stw      r0, 0x48(r31)
bl       __ct__Q34Game4Cave9FloorInfoFv
li       r0, 0
mr       r3, r31
stw      r0, 0x60(r31)
stw      r0, 0x5c(r31)
stw      r0, 0x58(r31)
stw      r0, 0x54(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	801D73CC
 * Size:	0000E4
 */
FloorInfo::~FloorInfo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801D7494
lis      r3, __vt__Q34Game4Cave9FloorInfo@ha
addic.   r0, r30, 0x368
addi     r0, r3, __vt__Q34Game4Cave9FloorInfo@l
stw      r0, 0(r30)
beq      lbl_801D7418
lis      r4, __vt__Q34Game4Cave7CapInfo@ha
addi     r3, r30, 0x368
addi     r0, r4, __vt__Q34Game4Cave7CapInfo@l
li       r4, 0
stw      r0, 0x368(r30)
bl       __dt__5CNodeFv

lbl_801D7418:
addic.   r0, r30, 0x344
beq      lbl_801D7438
lis      r4, __vt__Q34Game4Cave8GateInfo@ha
addi     r3, r30, 0x344
addi     r0, r4, __vt__Q34Game4Cave8GateInfo@l
li       r4, 0
stw      r0, 0x344(r30)
bl       __dt__5CNodeFv

lbl_801D7438:
addic.   r0, r30, 0x324
beq      lbl_801D7458
lis      r4, __vt__Q34Game4Cave8ItemInfo@ha
addi     r3, r30, 0x324
addi     r0, r4, __vt__Q34Game4Cave8ItemInfo@l
li       r4, 0
stw      r0, 0x324(r30)
bl       __dt__5CNodeFv

lbl_801D7458:
addic.   r0, r30, 0x2fc
beq      lbl_801D7478
lis      r4, __vt__Q34Game4Cave8TekiInfo@ha
addi     r3, r30, 0x2fc
addi     r0, r4, __vt__Q34Game4Cave8TekiInfo@l
li       r4, 0
stw      r0, 0x2fc(r30)
bl       __dt__5CNodeFv

lbl_801D7478:
mr       r3, r30
li       r4, 0
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_801D7494
mr       r3, r30
bl       __dl__FPv

lbl_801D7494:
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
 * Address:	801D74B0
 * Size:	000040
 */
void CaveInfo::disablePelplant()
{
	/*
lwz      r4, 0x60(r3)
li       r0, 0
b        lbl_801D74E4

lbl_801D74BC:
lwz      r5, 0x30c(r4)
b        lbl_801D74D8

lbl_801D74C4:
lwz      r3, 0x18(r5)
cmpwi    r3, 0
bne      lbl_801D74D4
stw      r0, 0x1c(r5)

lbl_801D74D4:
lwz      r5, 4(r5)

lbl_801D74D8:
cmplwi   r5, 0
bne      lbl_801D74C4
lwz      r4, 4(r4)

lbl_801D74E4:
cmplwi   r4, 0
bne      lbl_801D74BC
blr
	*/
}

/*
 * --INFO--
 * Address:	801D74F0
 * Size:	000008
 */
int CaveInfo::getFloorMax()
{
	/*
lwz      r3, 0x3c(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	801D74F8
 * Size:	000034
 */
FloorInfo* CaveInfo::getFloorInfo(int)
{
	/*
lwz      r3, 0x60(r3)
b        lbl_801D751C

lbl_801D7500:
lwz      r0, 0x3c(r3)
cmpw     r0, r4
bgt      lbl_801D7518
lwz      r0, 0x64(r3)
cmpw     r4, r0
blelr

lbl_801D7518:
lwz      r3, 4(r3)

lbl_801D751C:
cmplwi   r3, 0
bne      lbl_801D7500
li       r3, 0
blr
	*/
}

/*
 * --INFO--
 * Address:	801D752C
 * Size:	0000F8
 */
void CaveInfo::load(char*)
{
	/*
stwu     r1, -0x640(r1)
mflr     r0
mr       r5, r3
addi     r4, r2, lbl_80519748@sda21
stw      r0, 0x644(r1)
addi     r3, r1, 0x10
stw      r31, 0x63c(r1)
stw      r30, 0x638(r1)
crclr    6
bl       sprintf
li       r0, 0
addi     r3, r1, 0x10
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
or.      r31, r3, r3
bne      lbl_801D75A8
lis      r3, lbl_8048064C@ha
lis      r4, lbl_804807B4@ha
addi     r5, r4, lbl_804807B4@l
addi     r6, r1, 0x10
addi     r3, r3, lbl_8048064C@l
li       r4, 0x4e1
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D75A8:
mr       r4, r31
addi     r3, r1, 0x210
li       r5, -1
bl       __ct__9RamStreamFPvi
li       r0, 1
cmpwi    r0, 1
stw      r0, 0x21c(r1)
bne      lbl_801D75D0
li       r0, 0
stw      r0, 0x624(r1)

lbl_801D75D0:
li       r3, 0x3d8
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_801D75E8
bl       __ct__Q34Game4Cave8CaveInfoFv
mr       r30, r3

lbl_801D75E8:
mr       r3, r30
addi     r4, r1, 0x210
lwz      r12, 0(r30)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
mr       r3, r31
bl       __dla__FPv
lwz      r0, 0x644(r1)
mr       r3, r30
lwz      r31, 0x63c(r1)
lwz      r30, 0x638(r1)
mtlr     r0
addi     r1, r1, 0x640
blr
	*/
}

/*
 * --INFO--
 * Address:	801D7624
 * Size:	000090
 */
void CaveInfo::read(Stream&)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stmw     r27, 0xc(r1)
mr       r27, r3
mr       r28, r4
addi     r3, r27, 0x18
bl       read__10ParametersFR6Stream
mr       r3, r28
bl       readInt__6StreamFv
mr       r31, r3
li       r29, 0
b        lbl_801D7698

lbl_801D7658:
li       r3, 0x388
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_801D7670
bl       __ct__Q34Game4Cave9FloorInfoFv
mr       r30, r3

lbl_801D7670:
mr       r3, r30
mr       r4, r28
lwz      r12, 0(r30)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
mr       r4, r30
addi     r3, r27, 0x50
bl       add__5CNodeFP5CNode
addi     r29, r29, 1

lbl_801D7698:
cmpw     r29, r31
blt      lbl_801D7658
lmw      r27, 0xc(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	801D76B4
 * Size:	0000F4
 */
CaveInfo::~CaveInfo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801D778C
lis      r3, __vt__Q34Game4Cave8CaveInfo@ha
addic.   r0, r30, 0x50
addi     r0, r3, __vt__Q34Game4Cave8CaveInfo@l
stw      r0, 0(r30)
beq      lbl_801D7770
lis      r4, __vt__Q34Game4Cave9FloorInfo@ha
addic.   r3, r30, 0x3b8
addi     r0, r4, __vt__Q34Game4Cave9FloorInfo@l
stw      r0, 0x50(r30)
beq      lbl_801D7710
lis      r4, __vt__Q34Game4Cave7CapInfo@ha
addi     r0, r4, __vt__Q34Game4Cave7CapInfo@l
stw      r0, 0x3b8(r30)
li       r4, 0
bl       __dt__5CNodeFv

lbl_801D7710:
addic.   r3, r30, 0x394
beq      lbl_801D772C
lis      r4, __vt__Q34Game4Cave8GateInfo@ha
addi     r0, r4, __vt__Q34Game4Cave8GateInfo@l
stw      r0, 0x394(r30)
li       r4, 0
bl       __dt__5CNodeFv

lbl_801D772C:
addic.   r3, r30, 0x374
beq      lbl_801D7748
lis      r4, __vt__Q34Game4Cave8ItemInfo@ha
addi     r0, r4, __vt__Q34Game4Cave8ItemInfo@l
stw      r0, 0x374(r30)
li       r4, 0
bl       __dt__5CNodeFv

lbl_801D7748:
addic.   r3, r30, 0x34c
beq      lbl_801D7764
lis      r4, __vt__Q34Game4Cave8TekiInfo@ha
addi     r0, r4, __vt__Q34Game4Cave8TekiInfo@l
stw      r0, 0x34c(r30)
li       r4, 0
bl       __dt__5CNodeFv

lbl_801D7764:
addi     r3, r30, 0x50
li       r4, 0
bl       __dt__5CNodeFv

lbl_801D7770:
mr       r3, r30
li       r4, 0
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_801D778C
mr       r3, r30
bl       __dl__FPv

lbl_801D778C:
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
 * Address:	801D77A8
 * Size:	000060
 */
BaseGen::~BaseGen()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801D77EC
lis      r5, __vt__Q34Game4Cave7BaseGen@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game4Cave7BaseGen@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_801D77EC
mr       r3, r30
bl       __dl__FPv

lbl_801D77EC:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Cave
} // namespace Game

#pragma auto_inline reset
