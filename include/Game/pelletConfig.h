#ifndef _GAME_PELLETCONFIG_H
#define _GAME_PELLETCONFIG_H

#include "CNode.h"
#include "PrimTagParm.h"
#include "types.h"

#define PC_INDIRECTSTATE_NO  0x0
#define PC_INDIRECTSTATE_USE 0x1
#define PC_INDIRECTSTATE_YES 0x2

namespace Game {

struct PelletConfig : public CNode {
	struct TParms : public TagParameters { // _18
		TParms();
		virtual ~TParms() { }
		StringTagParm m_name;              // _34
		StringTagParm m_archive;           // _44
		StringTagParm m_txtArchive;        // _54
		StringTagParm m_bmd;               // _64
		StringTagParm m_animMgr;           // _74
		StringTagParm m_colltree;          // _84
		PrimTagParm<f32> m_radius;         // _94
		PrimTagParm<f32> m_pRadius;        // _A4
		PrimTagParm<f32> m_height;         // _B4
		PrimTagParm<f32> m_inertiaScaling; // _C4
		StringTagParm m_particleType;      // _D4
		PrimTagParm<s32> m_numParticles;   // _E4
		PrimTagParm<f32> m_particleSize;   // _F4
		PrimTagParm<f32> m_friction;       // _104
		PrimTagParm<s32> m_min;            // _114
		PrimTagParm<s32> m_max;            // _124
		PrimTagParm<s32> m_pikiCountMax;   // _134
		PrimTagParm<s32> m_pikiCountMin;   // _144
		StringTagParm m_dynamics;          // _154
		PrimTagParm<s32> m_money;          // _164
		StringTagParm m_unique;            // _174
		StringTagParm m_indirect;          // _184
		PrimTagParm<s32> m_numPMotions;    // _194
		PrimTagParm<f32> m_depth;          // _1A4
		PrimTagParm<f32> m_depthMax;       // _1B4
		PrimTagParm<f32> m_depthA;         // _1C4
		PrimTagParm<f32> m_depthB;         // _1D4
		PrimTagParm<f32> m_depthC;         // _1E4
		PrimTagParm<f32> m_depthD;         // _1F4
		PrimTagParm<Vector3f> m_offset;    // _204
		PrimTagParm<u64> m_message;
		PrimTagParm<u16> m_code;
		PrimTagParm<u16> m_dictionary;
		s16 m_index;

		u8 m_indirectState;
	}; // struct TParms

	PelletConfig();
	virtual ~PelletConfig() { }

	TParms m_params; // _04
};

class PelletConfigList : public CNode {
	PelletConfigList();
	virtual ~PelletConfigList() {};

	PelletConfig* getPelletConfig(char* name);
	PelletConfig* getPelletConfig(s32 index);
	PelletConfig* getPelletConfig_ByDictionaryNo(s32 dictionaryNumber);
	void read(Stream&);

	s32 m_configCnt;         // _18
	PelletConfig* m_configs; // _1C
};

} // namespace Game

#endif
