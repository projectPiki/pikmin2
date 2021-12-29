#ifndef _PSM_ENVSEOBJBUILDER_H
#define _PSM_ENVSEOBJBUILDER_H

/*
    __vt__Q23PSM15EnvSeObjBuilder:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM15EnvSeObjBuilderFv
    .4byte onBuild__Q23PSM15EnvSeObjBuilderFPQ28PSSystem9EnvSeBase
    .4byte newSeObj__Q23PSM15EnvSeObjBuilderFUlf3Vec
*/

namespace PSM {
struct EnvSeObjBuilder {
	virtual ~EnvSeObjBuilder();                       // _00
	virtual void onBuild(PSSystem::EnvSeBase*);       // _04
	virtual void newSeObj(unsigned long, float, Vec); // _08

	// _00 VTBL
};
} // namespace PSM

#endif
