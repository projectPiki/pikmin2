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
	virtual ~EnvSeObjBuilder();                       // _08 (inline)
	virtual void onBuild(PSSystem::EnvSeBase*);       // _0C
	virtual void newSeObj(unsigned long, float, Vec); // _10

	void setInfo(PSM::PersEnvInfo);
	EnvSeObjBuilder();
};
} // namespace PSM

#endif
