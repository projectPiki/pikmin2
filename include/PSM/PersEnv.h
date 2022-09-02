#ifndef _PSM_PERSENV_H
#define _PSM_PERSENV_H

#include "types.h"
#include "PSSystem/EnvSeBase.h"
#include "PSM/EnvSe_Perspective_AvoidY.h"

namespace PSM {

/**
 * @size{0x14}
 */
struct PersEnvInfo {
    float _00;  // _00
    float _04;  // _04
    float _08;  // _08
    float _0C;  // _0C
    float _10;  // _10
};

/**
 * @size{0x14}
 */
struct PersEnvManager {
    PersEnvManager(PSSystem::EnvSeMgr*);

    void playOk(EnvSe_Perspective_AvoidY*);
    void exec();

    PSSystem::EnvSeMgr* m_envSeMgr; // _00
    u8 _04;                         // _04
    u8 _05[0x3];                    // _05, possibly padding
    void* _08;                      // _08, unknown ptr
    void* _0C;                      // _0C, unknown ptr
    float _10;                      // _10
};

} // namespace PSM

#endif
