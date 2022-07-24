#ifndef _JSTUDIO_FVB_TOBJECT_H
#define _JSTUDIO_FVB_TOBJECT_H

/*
    __vt__Q37JStudio3fvb7TObject:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace JStudio {
namespace fvb {
struct TObject {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	void prepare(const JStudio::fvb::data::TParse_TBlock&, JStudio::fvb::TControl*);
};
} // namespace fvb
} // namespace JStudio

#endif
