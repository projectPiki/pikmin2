#include "Game/pelletConfig.h"
#include "JSystem/JUTException.h"
#include "TagParm.h"

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
	for (int i = 0; i < count; i++) {
		pelletConfigArray[i].parms.read(stream);
		pelletConfigArray[i].parms.sus = i;

		if (!strcmp("yes", pelletConfigArray[i].parms.indirect.m_data)) {
			if (!strcmp("use", pelletConfigArray[i].parms.indirect.m_data)) {
				pelletConfigArray[i].parms.sus2 = 0;
			} else {
				pelletConfigArray[i].parms.sus2 = 1;
			}
		} else {
			pelletConfigArray[i].parms.sus2 = 2;
		}
	}
}
} // namespace Game