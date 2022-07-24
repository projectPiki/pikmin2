#ifndef _PSM_BOSSBGMFADER_TYPEDPROC_H
#define _PSM_BOSSBGMFADER_TYPEDPROC_H

/*
    __vt__Q33PSM12BossBgmFader9TypedProc:
    .4byte 0
    .4byte 0
    .4byte update__Q33PSM12BossBgmFader9TypedProcFv
*/

namespace PSM {
namespace BossBgmFader {
struct TypedProc {
	virtual void update(); // _08
};
} // namespace BossBgmFader
} // namespace PSM

#endif
