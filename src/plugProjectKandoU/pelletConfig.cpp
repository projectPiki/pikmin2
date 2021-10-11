#include "Game/pelletConfig.h"
#include "JSystem/JUTException.h"
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
const char* UNUSED_pelletConfig = "pelletConfig";
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

extern "C" {
extern size_t strlen(char*);
extern int strncmp(char*, char*, size_t);
extern int strcmp(char*, char*);
}

PelletConfig* PelletConfigList::getPelletConfig(char* str)
{
	for (int i = 0; i < count; i++) {
		PelletConfig* pConfig = &pelletConfigArray[i];
		int len               = strlen(str);
		if (strncmp(pConfig->parms.name.m_data, str, len) == 0) {
			return pConfig;
		}
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	801B44A8
 * Size:	00007C
 */

PelletConfig* PelletConfigList::getPelletConfig(int index)
{
	bool var = 0 <= index && index < this->count;
#line 125
	P2ASSERT(var);
	return &this->pelletConfigArray[index];
}

/*
 * --INFO--
 * Address:	801B4524
 * Size:	000044
 */

PelletConfig* PelletConfigList::getPelletConfig_ByDictionaryNo(int param_1)

{
	for (int i = 0; i < count; i++) {
		PelletConfig* pConfig = &pelletConfigArray[i];
		if (param_1 + 1 == (pConfig->parms).dictionary.m_data) {
			return pConfig;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801B4568
 * Size:	000130
 */

void PelletConfigList::read(Stream& stream)
{
	count             = stream.readInt();
	pelletConfigArray = new PelletConfig[count];
	for (int i = 0, j = 0; i < count; i++) {
		PelletConfig* cfg = &pelletConfigArray[j];

		cfg->parms.read(stream);
		cfg->parms.sus = i;

		if (strcmp("yes", cfg->parms.indirect.m_data)) {
			if (strcmp("use", cfg->parms.indirect.m_data)) {
				cfg->parms.sus2 = 0;
			} else {
				cfg->parms.sus2 = 1;
			}
		} else {
			cfg->parms.sus2 = 2;
		}

		j += 0x260; // <-- wtf?
	}
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