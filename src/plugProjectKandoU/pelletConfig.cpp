#include "Game/pelletConfig.h"
//#include "pelletConfig.h"

namespace Game {

/*
 * --INFO--
 * Address:	801B3EEC
 * Size:	000048
 */

PelletConfigList::PelletConfigList()
{
	this->pelletConfigArray = nullptr;
	this->count             = 0;
}

/*
 * --INFO--
 * Address:	801B3F34
 * Size:	0000AC
 */

PelletConfig::PelletConfig()
{
	this->parms.sus                      = -1;
	this->parms.unique.m_data            = "no";
	this->parms.indirect.m_data          = "no";
	this->parms.txtArchive.m_data        = nullptr;
	this->parms.depth.m_data             = 0.0f;
	this->parms.depthA.m_data            = 10.0f;
	this->parms.depthB.m_data            = 20.0f;
	this->parms.depthC.m_data            = 30.0f;
	this->parms.depthD.m_data            = 40.0f;
	this->parms.numPMotions.m_data       = 0;
	this->parms.message.m_data.intView.b = 0;
	this->parms.message.m_data.intView.a = 0;
	this->parms.offset.m_data.x          = 0.0f;
	this->parms.offset.m_data.y          = 0.0f;
	this->parms.offset.m_data.z          = 0.0f;
	this->parms.code.m_data              = 0;
	this->parms.dictionary.m_data        = 0;
	this->parms.sus2                     = 0;
}

/*
 * --INFO--
 * Address:	801B4050
 * Size:	000374
 */

PelletConfig::TParms::TParms()
    : TagParameters("PelletConfig")
    , name(this, "name")
    , archive(this, "archive")
    , txtArchive(this, "txt_archive")
    , bmd(this, "bmd")
    , animMgr(this, "animmgr")
    , colltree(this, "colltree")
    , radius(this, "radius")
    , pRadius(this, "p_radius")
    , height(this, "height")
    , inertiaScaling(this, "inertiascaling")
    , particleType(this, "particletype")
    , numParticles(this, "numparticles")
    , particleSize(this, "particlesize")
    , friction(this, "friction")
    , min(this, "min")
    , max(this, "max")
    , pikiCountMax(this, "pikicountmax")
    , pikiCountMin(this, "pikicountmin")
    , dynamics(this, "dynamics")
    , money(this, "money")
    , unique(this, "unique")
    , indirect(this, "indirect")
    , numPMotions(this, "num_pmotions")
    , depth(this, "depth")
    , depthMax(this, "depth_max")
    , depthA(this, "depth_a")
    , depthB(this, "depth_b")
    , depthC(this, "depth_c")
    , depthD(this, "depth_d")
    , offset(this, "offset")
    , message(this, "message")
    , code(this, "code")
    , dictionary(this, "dictionary")
{
}

/*
 * --INFO--
 * Address:	801B4424
 * Size:	000084
 */

void PelletConfigList::getPelletConfig(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x60

	.loc_0x24:
	  lwz       r0, 0x1C(r27)
	  mr        r3, r28
	  add       r29, r0, r31
	  bl        -0xE9B44
	  mr        r0, r3
	  lwz       r3, 0x40(r29)
	  mr        r5, r0
	  mr        r4, r28
	  bl        -0xE9DE8
	  cmpwi     r3, 0
	  bne-      .loc_0x58
	  mr        r3, r29
	  b         .loc_0x70

	.loc_0x58:
	  addi      r31, r31, 0x260
	  addi      r30, r30, 0x1

	.loc_0x60:
	  lwz       r0, 0x18(r27)
	  cmpw      r30, r0
	  blt+      .loc_0x24
	  li        r3, 0

	.loc_0x70:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	  */
}

/*
 * --INFO--
 * Address:	801B44A8
 * Size:	00007C
 */

void PelletConfigList::getPelletConfig(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x18(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x468
	  li        r4, 0x7D
	  subi      r5, r5, 0x454
	  crclr     6, 0x6
	  bl        -0x189EBC

	.loc_0x58:
	  mulli     r0, r31, 0x260
	  lwz       r3, 0x1C(r30)
	  add       r3, r3, r0
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
 * Address:	801B4524
 * Size:	000044
 */

void PelletConfigList::getPelletConfig_ByDictionaryNo(int)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x18(r3)
	  addi      r4, r4, 0x1
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x3C

	.loc_0x18:
	  lwz       r0, 0x1C(r3)
	  add       r6, r0, r5
	  lhz       r0, 0x254(r6)
	  cmpw      r4, r0
	  bne-      .loc_0x34
	  mr        r3, r6
	  blr

	.loc_0x34:
	  addi      r5, r5, 0x260
	  bdnz+     .loc_0x18

	.loc_0x3C:
	  li        r3, 0
	  blr
	  */
}

/*
 * --INFO--
 * Address:	801B4568
 * Size:	000130
 */

void PelletConfigList::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        0x260500
	  stw       r3, 0x18(r28)
	  lwz       r30, 0x18(r28)
	  mulli     r3, r30, 0x260
	  addi      r3, r3, 0x10
	  bl        -0x1905F8
	  lis       r4, 0x801B
	  lis       r5, 0x801B
	  addi      r4, r4, 0x3F34
	  mr        r7, r30
	  addi      r5, r5, 0x4698
	  li        r6, 0x260
	  bl        -0xF2BD0
	  stw       r3, 0x1C(r28)
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x104

	.loc_0x6C:
	  lwz       r0, 0x1C(r28)
	  addi      r3, r31, 0x18
	  mr        r4, r29
	  add       r3, r0, r3
	  bl        0x267AF0
	  lwz       r4, 0x1C(r28)
	  addi      r3, r31, 0x258
	  addi      r0, r31, 0x190
	  sthx      r30, r4, r3
	  subi      r3, r2, 0x4F54
	  lwz       r4, 0x1C(r28)
	  lwzx      r4, r4, r0
	  bl        -0xE9F44
	  cmpwi     r3, 0
	  bne-      .loc_0xBC
	  lwz       r3, 0x1C(r28)
	  addi      r0, r31, 0x25A
	  li        r4, 0x2
	  stbx      r4, r3, r0
	  b         .loc_0xFC

	.loc_0xBC:
	  lwz       r4, 0x1C(r28)
	  addi      r0, r31, 0x190
	  subi      r3, r2, 0x4F50
	  lwzx      r4, r4, r0
	  bl        -0xE9F74
	  cmpwi     r3, 0
	  bne-      .loc_0xEC
	  lwz       r3, 0x1C(r28)
	  addi      r0, r31, 0x25A
	  li        r4, 0x1
	  stbx      r4, r3, r0
	  b         .loc_0xFC

	.loc_0xEC:
	  lwz       r3, 0x1C(r28)
	  addi      r0, r31, 0x25A
	  li        r4, 0
	  stbx      r4, r3, r0

	.loc_0xFC:
	  addi      r31, r31, 0x260
	  addi      r30, r30, 0x1

	.loc_0x104:
	  lwz       r0, 0x18(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x6C
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
} // namespace Game
