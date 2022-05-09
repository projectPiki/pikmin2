#include "JSystem/JUT/JUTException.h"
#include "Game/pelletConfig.h"
#include "Dolphin/string.h"
#include "TagParm.h"

namespace Game {

/*
 * --INFO--
 * Address:	801B3EEC
 * Size:	000048
 */
PelletConfigList::PelletConfigList()
{
	m_configs   = nullptr;
	m_configCnt = 0;
}

/*
 * --INFO--
 * Address:	801B3F34
 * Size:	0000AC
 */
PelletConfig::PelletConfig()
{
	m_params.m_index                                      = -1;
	m_params.m_unique.m_data                              = "no";
	m_params.m_indirect.m_data                            = "no";
	m_params.m_txtArchive.m_data                          = nullptr;
	m_params.m_depth.m_data                               = 0.0f;
	m_params.m_depthA.m_data                              = 10.0f;
	m_params.m_depthB.m_data                              = 20.0f;
	m_params.m_depthC.m_data                              = 30.0f;
	m_params.m_depthD.m_data                              = 40.0f;
	m_params.m_numPMotions.m_data                         = 0;
	reinterpret_cast<int*>(&m_params.m_message.m_data)[1] = 0;
	reinterpret_cast<int*>(&m_params.m_message.m_data)[0] = 0;
	m_params.m_offset.m_data.x                            = 0.0f;
	m_params.m_offset.m_data.y                            = 0.0f;
	m_params.m_offset.m_data.z                            = 0.0f;
	m_params.m_code.m_data                                = 0;
	m_params.m_dictionary.m_data                          = 0;
	m_params.m_indirectState                              = PC_INDIRECTSTATE_NO;
}

/*
 * --INFO--
 * Address:	801B4050
 * Size:	000374
 */
const char* UNUSED_pelletConfig = "pelletConfig";
PelletConfig::TParms::TParms()
    : TagParameters("PelletConfig")
    , m_name(this, "name")
    , m_archive(this, "archive")
    , m_txtArchive(this, "txt_archive")
    , m_bmd(this, "bmd")
    , m_animMgr(this, "animmgr")
    , m_colltree(this, "colltree")
    , m_radius(this, "radius")
    , m_pRadius(this, "p_radius")
    , m_height(this, "height")
    , m_inertiaScaling(this, "inertiascaling")
    , m_particleType(this, "particletype")
    , m_numParticles(this, "numparticles")
    , m_particleSize(this, "particlesize")
    , m_friction(this, "friction")
    , m_min(this, "min")
    , m_max(this, "max")
    , m_pikiCountMax(this, "pikicountmax")
    , m_pikiCountMin(this, "pikicountmin")
    , m_dynamics(this, "dynamics")
    , m_money(this, "money")
    , m_unique(this, "unique")
    , m_indirect(this, "indirect")
    , m_numPMotions(this, "num_pmotions")
    , m_depth(this, "depth")
    , m_depthMax(this, "depth_max")
    , m_depthA(this, "depth_a")
    , m_depthB(this, "depth_b")
    , m_depthC(this, "depth_c")
    , m_depthD(this, "depth_d")
    , m_offset(this, "offset")
    , m_message(this, "message")
    , m_code(this, "code")
    , m_dictionary(this, "dictionary")
{
}

/*
 * --INFO--
 * Address:	801B4424
 * Size:	000084
 */
PelletConfig* PelletConfigList::getPelletConfig(char* str)
{
	for (int i = 0; i < m_configCnt; i++) {
		PelletConfig* pConfig = &m_configs[i];
		u32 len               = strlen(str);

		if (!strncmp(pConfig->m_params.m_name.m_data, str, len)) {
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
	bool isValid = 0 <= index && index < m_configCnt;
	P2ASSERTLINE(125, isValid);

	return &m_configs[index];
}

/*
 * --INFO--
 * Address:	801B4524
 * Size:	000044
 */
PelletConfig* PelletConfigList::getPelletConfig_ByDictionaryNo(int dictNumber)
{
	for (int i = 0; i < m_configCnt; i++) {
		PelletConfig* pConfig = &m_configs[i];
		if (dictNumber + 1 == pConfig->m_params.m_dictionary.m_data) {
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
	m_configCnt = stream.readInt();
	m_configs   = new PelletConfig[m_configCnt];
	for (int i = 0; i < m_configCnt; i++) {
		m_configs[i].m_params.read(stream);
		m_configs[i].m_params.m_index = i;

		// Set indirect state
		if (!strcmp("yes", m_configs[i].m_params.m_indirect.m_data)) {
			m_configs[i].m_params.m_indirectState = PC_INDIRECTSTATE_YES;
		} else if (!strcmp("use", m_configs[i].m_params.m_indirect.m_data)) {
			m_configs[i].m_params.m_indirectState = PC_INDIRECTSTATE_USE;
		} else {
			m_configs[i].m_params.m_indirectState = PC_INDIRECTSTATE_NO;
		}
	}
}

} // namespace Game
