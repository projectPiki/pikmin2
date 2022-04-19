#ifndef _JSTAGE_TSYSTEM_H
#define _JSTAGE_TSYSTEM_H

#include "JStage/TObject.h"

namespace JStage {
typedef struct TEObject;
struct TSystem : public TObject {
	virtual void _00() = 0;                                            // _00
	virtual int JSGFGetType() const;                                   // _04
	virtual int JSGFindObject(TObject**, const char*, TEObject) const; // _34
	virtual int JSGCreateObject(const char*, TEObject, unsigned long); // _38
	virtual void JSGDestroyObject(TObject*);                           // _3C
	virtual int JSGGetSystemData(unsigned long);                       // _40
	virtual void JSGSetSystemData(unsigned long, unsigned long);       // _44

	// _00 VTBL
	~TSystem();
};
} // namespace JStage

#endif
