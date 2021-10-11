#ifndef _GAME_PELLETCONFIG_H
#define _GAME_PELLETCONFIG_H

#include "CNode.h"
#include "PrimTagParm.h"
#include "types.h"

namespace Game {
struct PelletConfig : public CNode {
	struct TParms : public TagParameters { // _18
		TParms();
		virtual ~TParms() { }
		StringTagParm name;                // _34
		StringTagParm archive;             // _44
		StringTagParm txtArchive;          // _54
		StringTagParm bmd;                 // _64
		StringTagParm animMgr;             // _74
		StringTagParm colltree;            // _84
		PrimTagParm<float> radius;         // _94
		PrimTagParm<float> pRadius;        // _a4
		PrimTagParm<float> height;         // _b4
		PrimTagParm<float> inertiaScaling; // _c4
		StringTagParm particleType;        // _d4
		PrimTagParm<int> numParticles;     // _e4
		PrimTagParm<float> particleSize;   // _f4
		PrimTagParm<float> friction;       // _104
		PrimTagParm<int> min;              // _114
		PrimTagParm<int> max;              // _124
		PrimTagParm<int> pikiCountMax;     // _134
		PrimTagParm<int> pikiCountMin;     // _144
		StringTagParm dynamics;            // _154
		PrimTagParm<int> money;            // _164
		StringTagParm unique;              // _174
		StringTagParm indirect;            // _184
		PrimTagParm<int> numPMotions;      // _194
		PrimTagParm<float> depth;          // _1a4
		PrimTagParm<float> depthMax;       // _1b4
		PrimTagParm<float> depthA;         // _1c4
		PrimTagParm<float> depthB;         // _1d4
		PrimTagParm<float> depthC;         // _1e4
		PrimTagParm<float> depthD;         // _1f4
		PrimTagParm<Vector3f> offset;      // _204
		unsigned char field_0x204;
		unsigned char field_0x205;
		unsigned char field_0x206;
		unsigned char field_0x207;
		PrimTagParm<unsigned long long> message;
		PrimTagParm<unsigned short> code;
		PrimTagParm<unsigned short> dictionary;
		short sus;
		unsigned char sus2;
	}; // struct TParms
	TParms parms;
	unsigned char indirect;
	PelletConfig();
	virtual ~PelletConfig() {}; // virtual destructor
};                              // struct for pellet config
class PelletConfigList : public CNode {
	PelletConfigList();
	virtual ~PelletConfigList() {}; // virtual

	int count;                       // _18
	PelletConfig* pelletConfigArray; // _1C
	PelletConfig* getPelletConfig(char*);
	PelletConfig* getPelletConfig(int);
	PelletConfig* getPelletConfig_ByDictionaryNo(int);
	void read(Stream&);
};
} // namespace Game

#endif
