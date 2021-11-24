#ifndef _SYSSHAPE_MTXOBJECT_H
#define _SYSSHAPE_MTXOBJECT_H

struct Matrixf;
namespace SysShape {
struct MtxObject {
	virtual Matrixf* getMatrix() = 0; // _00
	virtual bool isModel();           // _04
};
} // namespace SysShape

#endif
