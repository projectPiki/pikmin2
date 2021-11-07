#ifndef _PSM_ENVSEOBJBUILDER_H
#define _PSM_ENVSEOBJBUILDER_H

namespace PSM {
struct EnvSeObjBuilder {
	virtual ~EnvSeObjBuilder();                       // _00
	virtual void onBuild(PSSystem::EnvSeBase*);       // _04
	virtual void newSeObj(unsigned long, float, Vec); // _08

	// _00 VTBL
};
} // namespace PSM

#endif
