#ifndef _JSTAGE_TSYSTEM_H
#define _JSTAGE_TSYSTEM_H

#include "JSystem/JStage/TObject.h"

namespace JStage {
enum TEObject { TEO_Unknown_0 = 0, TEO_System, TEO_Actor, TEO_Camera, TEO_AmbientLight, TEO_Light, TEO_Fog };
struct TSystem : public TObject {
	virtual ~TSystem() = 0;                                            // _08
	virtual int JSGFGetType() const;                                   // _0C
	virtual int JSGFindObject(TObject**, const char*, TEObject) const; // _3C
	virtual int JSGCreateObject(const char*, TEObject, u32);           // _40
	virtual void JSGDestroyObject(TObject*);                           // _44
	virtual int JSGGetSystemData(u32);                                 // _48
	virtual void JSGSetSystemData(u32, u32);                           // _4C
};
} // namespace JStage

#endif
