#ifndef _EBI_TITLE_TTITLEFOGMGR_H
#define _EBI_TITLE_TTITLEFOGMGR_H

#include "types.h"
#include "JSystem/JKR/JKRArchive.h"
#include "FogMgr.h"
#include "Camera.h"
#include "Parameters.h"
#include "BaseParm.h"

namespace ebi {
namespace title {
/**
 * @size{0x140}
 */
struct TTitleFogMgr : public FogMgr {
    struct Parms : public Parameters {
        // fabricated
        // offsets relative to TTitleFogMgr
        Parm<bool> fg10;            // _34
        Parm<float> fg00;           // _50
        Parm<float> fg01;           // _78
        Parm<int> fg02;             // _A0
        Parm<int> fg03;             // _C8
        Parm<int> fg04;             // _F0
        Parm<int> fg05;             // _118        
    };
    
    virtual ~TTitleFogMgr() { }     // _08 (weak)
    
	void setGX(Camera& camera);
    void loadSettingFile(JKRArchive* archive, char* file);

    // _00        = VTBL
    // _00-_28    = FogMgr
    Parms m_parms;    // _28
};
} // namespace title
} // namespace ebi

#endif
