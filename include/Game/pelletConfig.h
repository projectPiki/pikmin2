#ifndef _GAME_PELLETCONFIG_H
#define _GAME_PELLETCONFIG_H

#include "CNode.h"
#include "PrimTagParm.h"
#include "types.h"

namespace Game {
struct PelletConfig : public CNode {
    struct TParms : public TagParameters {
        TParms();
        ~TParms();
        StringTagParm name;
        StringTagParm archive;
        StringTagParm txtArchive;
        StringTagParm bmd;
        StringTagParm animMgr;
        StringTagParm colltree;
        PrimTagParm<float> radius;
        PrimTagParm<float> pRadius;
        PrimTagParm<float> height;
        PrimTagParm<float> inertiaScaling;
        StringTagParm particleType;
        PrimTagParm<int> numParticles;
        PrimTagParm<float> particleSize;
        PrimTagParm<float> friction;
        PrimTagParm<int> min;
        PrimTagParm<int> max;
        PrimTagParm<int> pikiCountMax;
        PrimTagParm<int> pikiCountMin;
        StringTagParm dynamics;
        PrimTagParm<int> money;
        StringTagParm unique;
        StringTagParm indirect;
        PrimTagParm<int> numPMotions;
        PrimTagParm<float> depth;
        PrimTagParm<float> depthMax;
        PrimTagParm<float> depthA;
        PrimTagParm<float> depthB;
        PrimTagParm<float> depthC;
        PrimTagParm<float> depthD;
        PrimTagParm<Vector3f> offset;
        unsigned char field_0x204;
        unsigned char field_0x205;
        unsigned char field_0x206;
        unsigned char field_0x207;
        PrimTagParm<unsigned long long> message;
        PrimTagParm<unsigned short> code;
        unsigned char field_0x22e;
        unsigned char field_0x22f;
        PrimTagParm<unsigned short> dictionary;
    }; // struct TParms
    TParms parms;
    short short_0x256;
    short short_0x258;
    unsigned char indirect;
    unsigned char unknown[5];
    // char filler[584];
    PelletConfig();
    virtual ~PelletConfig(); // virtual destructor
};                           // temporary filler struct for pellet config
class PelletConfigList : public CNode {
    PelletConfigList();
    virtual ~PelletConfigList(); // virtual

    int count;
    PelletConfig* pelletConfigArray;
    void getPelletConfig(char*);
    void getPelletConfig(int);
    void getPelletConfig_ByDictionaryNo(int);
    void read(Stream&);
};
} // namespace Game

#endif
