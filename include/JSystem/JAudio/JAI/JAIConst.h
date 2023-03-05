#ifndef _JSYSTEM_JAI_JAICONST_H
#define _JSYSTEM_JAI_JAICONST_H

#include "types.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JMath.h"

namespace JAInter {
namespace Const {
extern Vec dummyZeroVec;
extern u16 sCInfos_0[16];
extern Vec camPreTrans;
extern Vec camTrans;
extern Mtx camMtx;
extern Camera nullCamera;
extern Actor nullActor;
extern JMath::TRandom_fast_ random;
} // namespace Const
} // namespace JAInter
#endif
