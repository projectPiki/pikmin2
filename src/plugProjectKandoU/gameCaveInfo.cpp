#include "types.h"

#include "Game/Cave/Info.h"
#include "Dolphin/string.h"
#include "Game/generalEnemyMgr.h"
#include "Game/PelletMgr.h"

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
			if (rawDropMode < '1')
				|| ('9' < rawDropMode)
				{
					inputString++;
					m_dropMode = DropOnPikminOrLeader;
				}
			else {
				inputString += 2;
				m_dropMode = DropMode(rawDropMode - '0');
			}
		} else {
			m_dropMode = NoDrop;
		}
		buffer1[0]   = '\0';
		char* _s2    = buffer2;
		int iVar10   = 0;
		uint uVar9   = 0;
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
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  li        r5, 0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  stw       r30, 0x18(r1)
		  mr        r30, r4
		  li        r4, 0
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  mr        r3, r30
		  bl        0x23ECF4
		  mr        r0, r3
		  lwz       r3, -0x6CE0(r13)
		  mr        r31, r0
		  lwz       r12, 0x0(r3)
		  mr        r4, r31
		  lwz       r12, 0x88(r12)
		  mtctr     r12
		  bctrl
		  stw       r3, 0x18(r29)
		  lwz       r0, 0x18(r29)
		  cmpwi     r0, -0x1
		  bne-      .loc_0x7C
		  lis       r3, 0x8048
		  lis       r5, 0x8048
		  addi      r3, r3, 0x64C
		  li        r4, 0x293
		  addi      r5, r5, 0x660
		  crclr     6, 0x6
		  bl        -0x1ABDEC

		.loc_0x7C:
		  mr        r3, r30
		  bl        0x23E65C
		  stw       r3, 0x1C(r29)
		  stw       r31, 0x14(r29)
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
	 * Address:	801D645C
	 * Size:	00008C
	 */
	void GateInfo::read(Stream&)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  li        r5, 0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  stw       r30, 0x18(r1)
		  mr        r30, r4
		  li        r4, 0
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  mr        r3, r30
		  bl        0x23EC4C
		  mr        r0, r3
		  lwz       r3, -0x6BD0(r13)
		  mr        r31, r0
		  lwz       r12, 0x0(r3)
		  mr        r4, r31
		  lwz       r12, 0x78(r12)
		  mtctr     r12
		  bctrl
		  stw       r3, 0x18(r29)
		  mr        r3, r30
		  bl        0x23E8F8
		  stfs      f1, 0x1C(r29)
		  mr        r3, r30
		  bl        0x23E5D0
		  stw       r3, 0x20(r29)
		  stw       r31, 0x14(r29)
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
	 * Address:	801D64E8
	 * Size:	00001C
	 */
	TekiInfo* CapInfo::getTekiInfo()
	{
		return (!m_doesNotHaveTeki ? m_tekiInfo : nullptr);
	}

#ifdef NOPE

	/*
	 * --INFO--
	 * Address:	801D6504
	 * Size:	0000C8
	 */
	void CapInfo::read(Stream&)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  stw       r30, 0x18(r1)
		  mr        r30, r4
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  mr        r3, r30
		  bl        0x23DF74
		  stb       r3, 0x18(r29)
		  lbz       r0, 0x18(r29)
		  cmplwi    r0, 0
		  bne-      .loc_0xAC
		  li        r3, 0x28
		  bl        -0x1B269C
		  mr.       r31, r3
		  beq-      .loc_0x74
		  bl        0x23AE44
		  lis       r4, 0x804C
		  li        r3, 0
		  subi      r4, r4, 0x7A20
		  li        r0, 0x1
		  stw       r4, 0x0(r31)
		  sth       r3, 0x26(r31)
		  stw       r3, 0x18(r31)
		  stw       r0, 0x1C(r31)
		  stw       r3, 0x20(r31)
		  stb       r3, 0x24(r31)

		.loc_0x74:
		  stw       r31, 0x1C(r29)
		  lwz       r3, 0x1C(r29)
		  stw       r3, 0xC(r3)
		  lbz       r0, 0x18(r29)
		  cmplwi    r0, 0
		  bne-      .loc_0x94
		  lwz       r3, 0x1C(r29)
		  b         .loc_0x98

		.loc_0x94:
		  li        r3, 0

		.loc_0x98:
		  lwz       r12, 0x0(r3)
		  mr        r4, r30
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl

		.loc_0xAC:
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
	 * Address:	801D65CC
	 * Size:	000174
	 */
	FloorInfo::FloorInfo()
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  lis       r4, 0x804F
		  li        r6, 0
		  stw       r0, 0x24(r1)
		  subi      r0, r4, 0x4AD8
		  lis       r4, 0x8048
		  stw       r31, 0x1C(r1)
		  addi      r5, r4, 0x67C
		  mr        r31, r3
		  li        r4, 0x1
		  stw       r30, 0x18(r1)
		  stw       r29, 0x14(r1)
		  stw       r0, 0x0(r3)
		  lis       r3, 0x804C
		  subi      r0, r3, 0x7A70
		  stw       r6, 0x10(r31)
		  addi      r3, r31, 0x18
		  stw       r6, 0xC(r31)
		  stw       r6, 0x8(r31)
		  stw       r6, 0x4(r31)
		  stw       r5, 0x14(r31)
		  stw       r0, 0x0(r31)
		  bl        0x298
		  addi      r30, r31, 0x2FC
		  mr        r3, r30
		  bl        0x23AD5C
		  lis       r3, 0x804C
		  addi      r29, r31, 0x324
		  subi      r0, r3, 0x7A20
		  li        r4, 0
		  stw       r0, 0x0(r30)
		  li        r0, 0x1
		  mr        r3, r29
		  sth       r4, 0x26(r30)
		  stw       r4, 0x18(r30)
		  stw       r0, 0x1C(r30)
		  stw       r4, 0x20(r30)
		  stb       r4, 0x24(r30)
		  bl        0x23AD28
		  lis       r3, 0x804C
		  addi      r30, r31, 0x344
		  subi      r0, r3, 0x7A34
		  li        r4, 0
		  stw       r0, 0x0(r29)
		  li        r0, 0x1
		  mr        r3, r30
		  stw       r4, 0x18(r29)
		  stw       r0, 0x1C(r29)
		  bl        0x23AD00
		  lis       r3, 0x804C
		  addi      r29, r31, 0x368
		  subi      r0, r3, 0x7A48
		  li        r4, 0
		  stw       r0, 0x0(r30)
		  li        r0, 0x1
		  lfs       f0, -0x4C98(r2)
		  mr        r3, r29
		  stw       r4, 0x18(r30)
		  stw       r0, 0x20(r30)
		  stfs      f0, 0x1C(r30)
		  bl        0x23ACD0
		  lis       r3, 0x804C
		  li        r4, 0x1
		  subi      r3, r3, 0x7A5C
		  li        r0, 0
		  stw       r3, 0x0(r29)
		  mr        r3, r31
		  stb       r4, 0x18(r29)
		  stw       r0, 0x1C(r29)
		  stw       r0, 0x30C(r31)
		  stw       r0, 0x308(r31)
		  stw       r0, 0x304(r31)
		  stw       r0, 0x300(r31)
		  stw       r0, 0x334(r31)
		  stw       r0, 0x330(r31)
		  stw       r0, 0x32C(r31)
		  stw       r0, 0x328(r31)
		  stw       r0, 0x354(r31)
		  stw       r0, 0x350(r31)
		  stw       r0, 0x34C(r31)
		  stw       r0, 0x348(r31)
		  stw       r0, 0x378(r31)
		  stw       r0, 0x374(r31)
		  stw       r0, 0x370(r31)
		  stw       r0, 0x36C(r31)
		  lwz       r31, 0x1C(r1)
		  lwz       r30, 0x18(r1)
		  lwz       r29, 0x14(r1)
		  lwz       r0, 0x24(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0x44
		  lis       r5, 0x804C
		  li        r4, 0
		  subi      r0, r5, 0x7A5C
		  stw       r0, 0x0(r30)
		  bl        0x23AE18
		  extsh.    r0, r31
		  ble-      .loc_0x44
		  mr        r3, r30
		  bl        -0x1B26CC

		.loc_0x44:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0x44
		  lis       r5, 0x804C
		  li        r4, 0
		  subi      r0, r5, 0x7A48
		  stw       r0, 0x0(r30)
		  bl        0x23ADB8
		  extsh.    r0, r31
		  ble-      .loc_0x44
		  mr        r3, r30
		  bl        -0x1B272C

		.loc_0x44:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0x44
		  lis       r5, 0x804C
		  li        r4, 0
		  subi      r0, r5, 0x7A34
		  stw       r0, 0x0(r30)
		  bl        0x23AD58
		  extsh.    r0, r31
		  ble-      .loc_0x44
		  mr        r3, r30
		  bl        -0x1B278C

		.loc_0x44:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0x44
		  lis       r5, 0x804C
		  li        r4, 0
		  subi      r0, r5, 0x7A20
		  stw       r0, 0x0(r30)
		  bl        0x23ACF8
		  extsh.    r0, r31
		  ble-      .loc_0x44
		  mr        r3, r30
		  bl        -0x1B27EC

		.loc_0x44:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  extsh.    r0, r4
		  lis       r4, 0x8048
		  stw       r31, 0xC(r1)
		  addi      r31, r4, 0x640
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  beq-      .loc_0x30
		  addi      r0, r30, 0x2E0
		  stw       r0, 0x0(r30)

		.loc_0x30:
		  li        r0, 0
		  lis       r5, 0x6630
		  stw       r0, 0x4(r30)
		  addi      r0, r31, 0x64
		  mr        r4, r30
		  addi      r3, r30, 0xC
		  stw       r0, 0x8(r30)
		  addi      r5, r5, 0x3030
		  addi      r6, r31, 0x70
		  bl        0x23CD44
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r7, 0
		  stw       r0, 0xC(r30)
		  li        r0, 0x7F
		  mr        r4, r30
		  addi      r3, r30, 0x34
		  stw       r7, 0x24(r30)
		  addi      r5, r5, 0x3031
		  addi      r6, r31, 0x7C
		  stw       r7, 0x2C(r30)
		  stw       r0, 0x30(r30)
		  bl        0x23CD0C
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r3, 0x1
		  stw       r0, 0x34(r30)
		  li        r7, 0
		  li        r0, 0x7F
		  mr        r4, r30
		  stw       r3, 0x4C(r30)
		  addi      r3, r30, 0x5C
		  addi      r5, r5, 0x3032
		  addi      r6, r31, 0x88
		  stw       r7, 0x54(r30)
		  stw       r0, 0x58(r30)
		  bl        0x23CCD0
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r7, 0
		  stw       r0, 0x5C(r30)
		  li        r0, 0x80
		  mr        r4, r30
		  addi      r3, r30, 0x84
		  stw       r7, 0x74(r30)
		  addi      r5, r5, 0x3033
		  addi      r6, r31, 0x94
		  stw       r7, 0x7C(r30)
		  stw       r0, 0x80(r30)
		  bl        0x23CC98
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r7, 0
		  stw       r0, 0x84(r30)
		  li        r0, 0x80
		  mr        r4, r30
		  addi      r3, r30, 0xAC
		  stw       r7, 0x9C(r30)
		  addi      r5, r5, 0x3034
		  addi      r6, r31, 0xA4
		  stw       r7, 0xA4(r30)
		  stw       r0, 0xA8(r30)
		  bl        0x23CC60
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r7, 0
		  stw       r0, 0xAC(r30)
		  li        r0, 0x20
		  mr        r4, r30
		  addi      r3, r30, 0xD4
		  stw       r7, 0xC4(r30)
		  addi      r5, r5, 0x3134
		  addi      r6, r31, 0xB4
		  stw       r7, 0xCC(r30)
		  stw       r0, 0xD0(r30)
		  bl        0x23CC28
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r7, 0
		  stw       r0, 0xD4(r30)
		  li        r0, 0x80
		  mr        r4, r30
		  addi      r3, r30, 0xFC
		  stw       r7, 0xEC(r30)
		  addi      r5, r5, 0x3035
		  addi      r6, r31, 0xC4
		  stw       r7, 0xF4(r30)
		  stw       r0, 0xF8(r30)
		  bl        0x23CBF0
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r3, 0x4
		  stw       r0, 0xFC(r30)
		  li        r7, 0x1
		  li        r0, 0xF
		  mr        r4, r30
		  stw       r3, 0x114(r30)
		  addi      r3, r30, 0x124
		  addi      r5, r5, 0x3036
		  addi      r6, r31, 0xD0
		  stw       r7, 0x11C(r30)
		  stw       r0, 0x120(r30)
		  bl        0x23CBB4
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5344
		  lfs       f1, -0x4C98(r2)
		  stw       r0, 0x124(r30)
		  mr        r4, r30
		  lfs       f0, -0x4C60(r2)
		  addi      r3, r30, 0x14C
		  stfs      f1, 0x13C(r30)
		  addi      r5, r5, 0x3037
		  addi      r6, r31, 0xE0
		  stfs      f1, 0x144(r30)
		  stfs      f0, 0x148(r30)
		  bl        0x23CB7C
		  lis       r3, 0x804B
		  lis       r6, 0x6630
		  subi      r0, r3, 0x5370
		  li        r9, 0
		  stw       r0, 0x14C(r30)
		  li        r0, 0x1
		  mr        r4, r30
		  addi      r3, r30, 0x174
		  stw       r9, 0x164(r30)
		  addi      r5, r31, 0xF4
		  addi      r7, r6, 0x3038
		  addi      r8, r31, 0x100
		  stw       r9, 0x16C(r30)
		  li        r6, 0x40
		  stw       r0, 0x170(r30)
		  bl        0x23CF9C
		  lis       r6, 0x6630
		  mr        r4, r30
		  addi      r3, r30, 0x194
		  addi      r5, r31, 0x110
		  addi      r7, r6, 0x3039
		  addi      r8, r31, 0x11C
		  li        r6, 0x40
		  bl        0x23CF7C
		  lis       r6, 0x6630
		  mr        r4, r30
		  addi      r3, r30, 0x1B4
		  subi      r5, r2, 0x4C5C
		  addi      r7, r6, 0x3041
		  li        r6, 0x40
		  subi      r8, r2, 0x4C54
		  bl        0x23CF5C
		  lis       r5, 0x6630
		  mr        r4, r30
		  addi      r3, r30, 0x1D4
		  addi      r6, r31, 0x128
		  addi      r5, r5, 0x3130
		  bl        0x23CAE4
		  lis       r4, 0x804B
		  lis       r3, 0x804C
		  subi      r0, r4, 0x5370
		  lis       r6, 0x6630
		  stw       r0, 0x1D4(r30)
		  li        r7, 0
		  subi      r5, r3, 0x7AA8
		  addi      r8, r6, 0x3131
		  stw       r7, 0x1EC(r30)
		  li        r0, 0x1
		  mr        r4, r30
		  addi      r3, r30, 0x1FC
		  stw       r7, 0x1F4(r30)
		  li        r6, 0
		  li        r7, 0x6
		  subi      r9, r2, 0x4C4C
		  stw       r0, 0x1F8(r30)
		  bl        0x23D108
		  lis       r3, 0x804C
		  lis       r6, 0x6630
		  subi      r5, r3, 0x7A90
		  mr        r4, r30
		  addi      r8, r6, 0x3132
		  addi      r3, r30, 0x220
		  li        r6, 0
		  li        r7, 0x3
		  subi      r9, r2, 0x4C44
		  bl        0x23D0E0
		  lis       r6, 0x6630
		  mr        r4, r30
		  addi      r3, r30, 0x244
		  subi      r5, r13, 0x7BB0
		  addi      r8, r6, 0x3133
		  li        r6, 0
		  li        r7, 0x2
		  subi      r9, r2, 0x4C3C
		  bl        0x23D0BC
		  lis       r5, 0x6630
		  mr        r4, r30
		  addi      r3, r30, 0x268
		  subi      r6, r2, 0x4C34
		  addi      r5, r5, 0x3135
		  bl        0x23CA38
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5370
		  li        r7, 0
		  stw       r0, 0x268(r30)
		  li        r0, 0x2710
		  mr        r4, r30
		  addi      r3, r30, 0x290
		  stw       r7, 0x280(r30)
		  addi      r5, r5, 0x3136
		  addi      r6, r31, 0x14C
		  stw       r7, 0x288(r30)
		  stw       r0, 0x28C(r30)
		  bl        0x23CA00
		  lis       r3, 0x804B
		  lis       r5, 0x6630
		  subi      r0, r3, 0x5344
		  lfs       f1, -0x4C98(r2)
		  stw       r0, 0x290(r30)
		  mr        r4, r30
		  lfs       f0, -0x4C2C(r2)
		  addi      r3, r30, 0x2B8
		  stfs      f1, 0x2A8(r30)
		  addi      r5, r5, 0x3137
		  subi      r6, r2, 0x4C28
		  stfs      f1, 0x2B0(r30)
		  stfs      f0, 0x2B4(r30)
		  bl        0x23C9C8
		  lis       r3, 0x804B
		  li        r4, 0
		  subi      r3, r3, 0x5370
		  li        r0, 0x1
		  stw       r3, 0x2B8(r30)
		  mr        r3, r30
		  stw       r4, 0x2D0(r30)
		  stw       r4, 0x2D8(r30)
		  stw       r0, 0x2DC(r30)
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  lwz       r0, 0x274(r3)
		  subfic    r0, r0, 0x1
		  cntlzw    r0, r0
		  rlwinm    r3,r0,27,5,31
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
		.loc_0x0:
		  lwz       r3, 0x8C(r3)
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwzu      r12, 0x2FC(r3)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  li        r31, 0
		  stw       r30, 0x18(r1)
		  mr.       r30, r4
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  blt-      .loc_0x48
		  addi      r3, r29, 0x2FC
		  lwz       r12, 0x2FC(r29)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  cmpw      r30, r3
		  bgt-      .loc_0x48
		  li        r31, 0x1

		.loc_0x48:
		  rlwinm.   r0,r31,0,24,31
		  bne-      .loc_0x6C
		  lis       r3, 0x8048
		  lis       r5, 0x8048
		  addi      r3, r3, 0x64C
		  li        r4, 0x388
		  addi      r5, r5, 0x79C
		  crclr     6, 0x6
		  bl        -0x1AC740

		.loc_0x6C:
		  mr        r4, r30
		  addi      r3, r29, 0x2FC
		  bl        0x23A910
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
	 * Address:	801D6DAC
	 * Size:	000024
	 */
	int FloorInfo::getTekiWeightSum()
	{
		/*
		.loc_0x0:
		  lwz       r4, 0x30C(r3)
		  li        r3, 0
		  b         .loc_0x18

		.loc_0xC:
		  lwz       r0, 0x1C(r4)
		  lwz       r4, 0x4(r4)
		  add       r3, r3, r0

		.loc_0x18:
		  cmplwi    r4, 0
		  bne+      .loc_0xC
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
		.loc_0x0:
		  lwz       r3, 0xB4(r3)
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwzu      r12, 0x324(r3)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  li        r31, 0
		  stw       r30, 0x18(r1)
		  mr.       r30, r4
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  blt-      .loc_0x48
		  addi      r3, r29, 0x324
		  lwz       r12, 0x324(r29)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  cmpw      r30, r3
		  bgt-      .loc_0x48
		  li        r31, 0x1

		.loc_0x48:
		  rlwinm.   r0,r31,0,24,31
		  bne-      .loc_0x6C
		  lis       r3, 0x8048
		  lis       r5, 0x8048
		  addi      r3, r3, 0x64C
		  li        r4, 0x3A1
		  addi      r5, r5, 0x79C
		  crclr     6, 0x6
		  bl        -0x1AC82C

		.loc_0x6C:
		  mr        r4, r30
		  addi      r3, r29, 0x324
		  bl        0x23A824
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
	 * Address:	801D6E98
	 * Size:	000024
	 */
	int FloorInfo::getItemWeightSum()
	{
		/*
		.loc_0x0:
		  lwz       r4, 0x334(r3)
		  li        r3, 0
		  b         .loc_0x18

		.loc_0xC:
		  lwz       r0, 0x1C(r4)
		  lwz       r4, 0x4(r4)
		  add       r3, r3, r0

		.loc_0x18:
		  cmplwi    r4, 0
		  bne+      .loc_0xC
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
		.loc_0x0:
		  lwz       r3, 0xDC(r3)
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwzu      r12, 0x344(r3)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  li        r31, 0
		  stw       r30, 0x18(r1)
		  mr.       r30, r4
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  blt-      .loc_0x48
		  addi      r3, r29, 0x344
		  lwz       r12, 0x344(r29)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  cmpw      r30, r3
		  bgt-      .loc_0x48
		  li        r31, 0x1

		.loc_0x48:
		  rlwinm.   r0,r31,0,24,31
		  bne-      .loc_0x6C
		  lis       r3, 0x8048
		  lis       r5, 0x8048
		  addi      r3, r3, 0x64C
		  li        r4, 0x3BA
		  addi      r5, r5, 0x79C
		  crclr     6, 0x6
		  bl        -0x1AC918

		.loc_0x6C:
		  mr        r4, r30
		  addi      r3, r29, 0x344
		  bl        0x23A738
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
	 * Address:	801D6F84
	 * Size:	000024
	 */
	int FloorInfo::getGateWeightSum()
	{
		/*
		.loc_0x0:
		  lwz       r4, 0x354(r3)
		  li        r3, 0
		  b         .loc_0x18

		.loc_0xC:
		  lwz       r0, 0x20(r4)
		  lwz       r4, 0x4(r4)
		  add       r3, r3, r0

		.loc_0x18:
		  cmplwi    r4, 0
		  bne+      .loc_0xC
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
		.loc_0x0:
		  lwz       r3, 0x104(r3)
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  lwzu      r12, 0x368(r3)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stw       r31, 0x1C(r1)
		  li        r31, 0
		  stw       r30, 0x18(r1)
		  mr.       r30, r4
		  stw       r29, 0x14(r1)
		  mr        r29, r3
		  blt-      .loc_0x48
		  addi      r3, r29, 0x368
		  lwz       r12, 0x368(r29)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  cmpw      r30, r3
		  bgt-      .loc_0x48
		  li        r31, 0x1

		.loc_0x48:
		  rlwinm.   r0,r31,0,24,31
		  bne-      .loc_0x6C
		  lis       r3, 0x8048
		  lis       r5, 0x8048
		  addi      r3, r3, 0x64C
		  li        r4, 0x3D3
		  addi      r5, r5, 0x79C
		  crclr     6, 0x6
		  bl        -0x1ACA04

		.loc_0x6C:
		  mr        r4, r30
		  addi      r3, r29, 0x368
		  bl        0x23A64C
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
	 * Address:	801D7070
	 * Size:	000008
	 */
	int FloorInfo::getRoomNum()
	{
		/*
		.loc_0x0:
		  lwz       r3, 0x12C(r3)
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
		.loc_0x0:
		  lfs       f1, 0x154(r3)
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
		.loc_0x0:
		  lwz       r0, 0x17C(r3)
		  cmpwi     r4, -0x1
		  subfic    r0, r0, 0x1
		  cntlzw    r0, r0
		  rlwinm    r0,r0,27,5,31
		  bne-      .loc_0x20
		  mr        r3, r0
		  blr

		.loc_0x20:
		  rlwinm.   r0,r0,0,24,31
		  beq-      .loc_0x3C
		  lwz       r0, 0x64(r3)
		  cmpw      r4, r0
		  bne-      .loc_0x3C
		  li        r3, 0x1
		  blr

		.loc_0x3C:
		  li        r3, 0
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
		.loc_0x0:
		  lwz       r0, 0x204(r3)
		  subfic    r0, r0, 0x1
		  cntlzw    r0, r0
		  rlwinm    r3,r0,27,5,31
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
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stmw      r27, 0xC(r1)
		  mr        r30, r3
		  mr        r31, r4
		  addi      r3, r30, 0x18
		  bl        0x23C700
		  mr        r3, r31
		  bl        0x23D994
		  mr        r29, r3
		  li        r27, 0
		  b         .loc_0x98

		.loc_0x34:
		  li        r3, 0x28
		  bl        -0x1B326C
		  mr.       r28, r3
		  beq-      .loc_0x70
		  bl        0x23A274
		  lis       r4, 0x804C
		  li        r3, 0
		  subi      r4, r4, 0x7A20
		  li        r0, 0x1
		  stw       r4, 0x0(r28)
		  sth       r3, 0x26(r28)
		  stw       r3, 0x18(r28)
		  stw       r0, 0x1C(r28)
		  stw       r3, 0x20(r28)
		  stb       r3, 0x24(r28)

		.loc_0x70:
		  mr        r3, r28
		  mr        r4, r31
		  lwz       r12, 0x0(r28)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  mr        r4, r28
		  addi      r3, r30, 0x2FC
		  bl        0x23A2A0
		  addi      r27, r27, 0x1

		.loc_0x98:
		  cmpw      r27, r29
		  blt+      .loc_0x34
		  mr        r3, r31
		  bl        0x23D914
		  mr        r29, r3
		  li        r27, 0
		  b         .loc_0x10C

		.loc_0xB4:
		  li        r3, 0x20
		  bl        -0x1B32EC
		  mr.       r28, r3
		  beq-      .loc_0xE4
		  bl        0x23A1F4
		  lis       r4, 0x804C
		  li        r3, 0
		  subi      r4, r4, 0x7A34
		  li        r0, 0x1
		  stw       r4, 0x0(r28)
		  stw       r3, 0x18(r28)
		  stw       r0, 0x1C(r28)

		.loc_0xE4:
		  mr        r3, r28
		  mr        r4, r31
		  lwz       r12, 0x0(r28)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  mr        r4, r28
		  addi      r3, r30, 0x324
		  bl        0x23A22C
		  addi      r27, r27, 0x1

		.loc_0x10C:
		  cmpw      r27, r29
		  blt+      .loc_0xB4
		  mr        r3, r31
		  bl        0x23D8A0
		  mr        r29, r3
		  li        r27, 0
		  b         .loc_0x188

		.loc_0x128:
		  li        r3, 0x24
		  bl        -0x1B3360
		  mr.       r28, r3
		  beq-      .loc_0x160
		  bl        0x23A180
		  lis       r4, 0x804C
		  li        r3, 0
		  subi      r4, r4, 0x7A48
		  li        r0, 0x1
		  stw       r4, 0x0(r28)
		  lfs       f0, -0x4C98(r2)
		  stw       r3, 0x18(r28)
		  stw       r0, 0x20(r28)
		  stfs      f0, 0x1C(r28)

		.loc_0x160:
		  mr        r3, r28
		  mr        r4, r31
		  lwz       r12, 0x0(r28)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  mr        r4, r28
		  addi      r3, r30, 0x344
		  bl        0x23A1B0
		  addi      r27, r27, 0x1

		.loc_0x188:
		  cmpw      r27, r29
		  blt+      .loc_0x128
		  lwz       r0, 0x298(r30)
		  cmpwi     r0, 0x1
		  blt-      .loc_0x210
		  mr        r3, r31
		  bl        0x23D818
		  mr        r29, r3
		  li        r27, 0
		  b         .loc_0x208

		.loc_0x1B0:
		  li        r3, 0x20
		  bl        -0x1B33E8
		  mr.       r28, r3
		  beq-      .loc_0x1E0
		  bl        0x23A0F8
		  lis       r4, 0x804C
		  li        r3, 0x1
		  subi      r4, r4, 0x7A5C
		  li        r0, 0
		  stw       r4, 0x0(r28)
		  stb       r3, 0x18(r28)
		  stw       r0, 0x1C(r28)

		.loc_0x1E0:
		  mr        r3, r28
		  mr        r4, r31
		  lwz       r12, 0x0(r28)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  mr        r4, r28
		  addi      r3, r30, 0x368
		  bl        0x23A130
		  addi      r27, r27, 0x1

		.loc_0x208:
		  cmpw      r27, r29
		  blt+      .loc_0x1B0

		.loc_0x210:
		  lmw       r27, 0xC(r1)
		  lwz       r0, 0x24(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  lis       r7, 0x8048
		  lis       r6, 0x804C
		  stw       r0, 0x14(r1)
		  lis       r4, 0x804F
		  subi      r8, r6, 0x7A84
		  lis       r5, 0x6330
		  stw       r31, 0xC(r1)
		  subi      r0, r4, 0x4AD8
		  mr        r31, r3
		  addi      r9, r7, 0x640
		  stw       r0, 0x0(r3)
		  li        r10, 0
		  addi      r7, r31, 0x4C
		  addi      r4, r31, 0x18
		  stw       r10, 0x10(r3)
		  lis       r3, 0x8048
		  addi      r0, r3, 0x7A8
		  addi      r5, r5, 0x3030
		  stw       r10, 0xC(r31)
		  addi      r3, r4, 0xC
		  subi      r6, r2, 0x4C20
		  stw       r10, 0x8(r31)
		  stw       r10, 0x4(r31)
		  stw       r9, 0x14(r31)
		  stw       r8, 0x0(r31)
		  stw       r7, 0x18(r31)
		  stw       r10, 0x1C(r31)
		  stw       r0, 0x20(r31)
		  bl        0x23C2E4
		  lis       r3, 0x804B
		  li        r4, 0x1
		  subi      r3, r3, 0x5370
		  li        r0, 0x80
		  stw       r3, 0x24(r31)
		  addi      r3, r31, 0x50
		  stw       r4, 0x3C(r31)
		  stw       r4, 0x44(r31)
		  stw       r0, 0x48(r31)
		  bl        -0xDD0
		  li        r0, 0
		  mr        r3, r31
		  stw       r0, 0x60(r31)
		  stw       r0, 0x5C(r31)
		  stw       r0, 0x58(r31)
		  stw       r0, 0x54(r31)
		  lwz       r31, 0xC(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0xC8
		  lis       r3, 0x804C
		  addic.    r0, r30, 0x368
		  subi      r0, r3, 0x7A70
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x4C
		  lis       r4, 0x804C
		  addi      r3, r30, 0x368
		  subi      r0, r4, 0x7A5C
		  li        r4, 0
		  stw       r0, 0x368(r30)
		  bl        0x23A174

		.loc_0x4C:
		  addic.    r0, r30, 0x344
		  beq-      .loc_0x6C
		  lis       r4, 0x804C
		  addi      r3, r30, 0x344
		  subi      r0, r4, 0x7A48
		  li        r4, 0
		  stw       r0, 0x344(r30)
		  bl        0x23A154

		.loc_0x6C:
		  addic.    r0, r30, 0x324
		  beq-      .loc_0x8C
		  lis       r4, 0x804C
		  addi      r3, r30, 0x324
		  subi      r0, r4, 0x7A34
		  li        r4, 0
		  stw       r0, 0x324(r30)
		  bl        0x23A134

		.loc_0x8C:
		  addic.    r0, r30, 0x2FC
		  beq-      .loc_0xAC
		  lis       r4, 0x804C
		  addi      r3, r30, 0x2FC
		  subi      r0, r4, 0x7A20
		  li        r4, 0
		  stw       r0, 0x2FC(r30)
		  bl        0x23A114

		.loc_0xAC:
		  mr        r3, r30
		  li        r4, 0
		  bl        0x23A108
		  extsh.    r0, r31
		  ble-      .loc_0xC8
		  mr        r3, r30
		  bl        -0x1B33DC

		.loc_0xC8:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  lwz       r4, 0x60(r3)
		  li        r0, 0
		  b         .loc_0x34

		.loc_0xC:
		  lwz       r5, 0x30C(r4)
		  b         .loc_0x28

		.loc_0x14:
		  lwz       r3, 0x18(r5)
		  cmpwi     r3, 0
		  bne-      .loc_0x24
		  stw       r0, 0x1C(r5)

		.loc_0x24:
		  lwz       r5, 0x4(r5)

		.loc_0x28:
		  cmplwi    r5, 0
		  bne+      .loc_0x14
		  lwz       r4, 0x4(r4)

		.loc_0x34:
		  cmplwi    r4, 0
		  bne+      .loc_0xC
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
		.loc_0x0:
		  lwz       r3, 0x3C(r3)
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
		.loc_0x0:
		  lwz       r3, 0x60(r3)
		  b         .loc_0x24

		.loc_0x8:
		  lwz       r0, 0x3C(r3)
		  cmpw      r0, r4
		  bgt-      .loc_0x20
		  lwz       r0, 0x64(r3)
		  cmpw      r4, r0
		  blelr-

		.loc_0x20:
		  lwz       r3, 0x4(r3)

		.loc_0x24:
		  cmplwi    r3, 0
		  bne+      .loc_0x8
		  li        r3, 0
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
		.loc_0x0:
		  stwu      r1, -0x640(r1)
		  mflr      r0
		  mr        r5, r3
		  subi      r4, r2, 0x4C18
		  stw       r0, 0x644(r1)
		  addi      r3, r1, 0x10
		  stw       r31, 0x63C(r1)
		  stw       r30, 0x638(r1)
		  crclr     6, 0x6
		  bl        -0x110118
		  li        r0, 0
		  addi      r3, r1, 0x10
		  stw       r0, 0x8(r1)
		  li        r4, 0
		  li        r5, 0
		  li        r6, 0
		  li        r7, 0
		  li        r8, 0x2
		  li        r9, 0
		  li        r10, 0
		  bl        -0x1B83F4
		  mr.       r31, r3
		  bne-      .loc_0x7C
		  lis       r3, 0x8048
		  lis       r4, 0x8048
		  addi      r5, r4, 0x7B4
		  addi      r6, r1, 0x10
		  addi      r3, r3, 0x64C
		  li        r4, 0x4E1
		  crclr     6, 0x6
		  bl        -0x1ACF64

		.loc_0x7C:
		  mr        r4, r31
		  addi      r3, r1, 0x210
		  li        r5, -0x1
		  bl        0x23E344
		  li        r0, 0x1
		  cmpwi     r0, 0x1
		  stw       r0, 0x21C(r1)
		  bne-      .loc_0xA4
		  li        r0, 0
		  stw       r0, 0x624(r1)

		.loc_0xA4:
		  li        r3, 0x3D8
		  bl        -0x1B3730
		  mr.       r30, r3
		  beq-      .loc_0xBC
		  bl        -0x2E4
		  mr        r30, r3

		.loc_0xBC:
		  mr        r3, r30
		  addi      r4, r1, 0x210
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  mr        r3, r31
		  bl        -0x1B352C
		  lwz       r0, 0x644(r1)
		  mr        r3, r30
		  lwz       r31, 0x63C(r1)
		  lwz       r30, 0x638(r1)
		  mtlr      r0
		  addi      r1, r1, 0x640
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
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  stw       r0, 0x24(r1)
		  stmw      r27, 0xC(r1)
		  mr        r27, r3
		  mr        r28, r4
		  addi      r3, r27, 0x18
		  bl        0x23C1B4
		  mr        r3, r28
		  bl        0x23D448
		  mr        r31, r3
		  li        r29, 0
		  b         .loc_0x74

		.loc_0x34:
		  li        r3, 0x388
		  bl        -0x1B37B8
		  mr.       r30, r3
		  beq-      .loc_0x4C
		  bl        -0x109C
		  mr        r30, r3

		.loc_0x4C:
		  mr        r3, r30
		  mr        r4, r28
		  lwz       r12, 0x0(r30)
		  lwz       r12, 0x10(r12)
		  mtctr     r12
		  bctrl
		  mr        r4, r30
		  addi      r3, r27, 0x50
		  bl        0x239D78
		  addi      r29, r29, 0x1

		.loc_0x74:
		  cmpw      r29, r31
		  blt+      .loc_0x34
		  lmw       r27, 0xC(r1)
		  lwz       r0, 0x24(r1)
		  mtlr      r0
		  addi      r1, r1, 0x20
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0xD8
		  lis       r3, 0x804C
		  addic.    r0, r30, 0x50
		  subi      r0, r3, 0x7A84
		  stw       r0, 0x0(r30)
		  beq-      .loc_0xBC
		  lis       r4, 0x804C
		  addic.    r3, r30, 0x3B8
		  subi      r0, r4, 0x7A70
		  stw       r0, 0x50(r30)
		  beq-      .loc_0x5C
		  lis       r4, 0x804C
		  subi      r0, r4, 0x7A5C
		  stw       r0, 0x3B8(r30)
		  li        r4, 0
		  bl        0x239E7C

		.loc_0x5C:
		  addic.    r3, r30, 0x394
		  beq-      .loc_0x78
		  lis       r4, 0x804C
		  subi      r0, r4, 0x7A48
		  stw       r0, 0x394(r30)
		  li        r4, 0
		  bl        0x239E60

		.loc_0x78:
		  addic.    r3, r30, 0x374
		  beq-      .loc_0x94
		  lis       r4, 0x804C
		  subi      r0, r4, 0x7A34
		  stw       r0, 0x374(r30)
		  li        r4, 0
		  bl        0x239E44

		.loc_0x94:
		  addic.    r3, r30, 0x34C
		  beq-      .loc_0xB0
		  lis       r4, 0x804C
		  subi      r0, r4, 0x7A20
		  stw       r0, 0x34C(r30)
		  li        r4, 0
		  bl        0x239E28

		.loc_0xB0:
		  addi      r3, r30, 0x50
		  li        r4, 0
		  bl        0x239E1C

		.loc_0xBC:
		  mr        r3, r30
		  li        r4, 0
		  bl        0x239E10
		  extsh.    r0, r31
		  ble-      .loc_0xD8
		  mr        r3, r30
		  bl        -0x1B36D4

		.loc_0xD8:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
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
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r4
		  stw       r30, 0x8(r1)
		  mr.       r30, r3
		  beq-      .loc_0x44
		  lis       r5, 0x804C
		  li        r4, 0
		  subi      r0, r5, 0x7A0C
		  stw       r0, 0x0(r30)
		  bl        0x239DB0
		  extsh.    r0, r31
		  ble-      .loc_0x44
		  mr        r3, r30
		  bl        -0x1B3734

		.loc_0x44:
		  lwz       r0, 0x14(r1)
		  mr        r3, r30
		  lwz       r31, 0xC(r1)
		  lwz       r30, 0x8(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}
#endif
} // namespace Cave
} // namespace Game

#pragma auto_inline reset
