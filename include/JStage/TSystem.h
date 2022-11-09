#ifndef _JSTAGE_TSYSTEM_H
#define _JSTAGE_TSYSTEM_H

#include "JStage/TObject.h"

namespace JStage {
enum TEObject { TEO_Unknown_0 = 0 };
struct TSystem : public TObject {
	virtual ~TSystem() = 0;                                            // _08
	virtual int JSGFGetType() const;                                   // _0C
	virtual int JSGFindObject(TObject**, const char*, TEObject) const; // _3C
	virtual int JSGCreateObject(const char*, TEObject, unsigned long); // _40
	virtual void JSGDestroyObject(TObject*);                           // _44
	virtual int JSGGetSystemData(unsigned long);                       // _48
	virtual void JSGSetSystemData(unsigned long, unsigned long);       // _4C
};
} // namespace JStage

#endif
