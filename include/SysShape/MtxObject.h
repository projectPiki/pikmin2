#ifndef _SYSSHAPE_MTXOBJECT_H
#define _SYSSHAPE_MTXOBJECT_H

struct Matrixf;
namespace SysShape {

struct MtxObject {
	virtual Matrixf* getMatrix(int) = 0; // _08
	virtual bool isModel();              // _0C (weak)
};

} // namespace SysShape

#endif
