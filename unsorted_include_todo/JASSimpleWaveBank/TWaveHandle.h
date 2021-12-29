#ifndef _JASSIMPLEWAVEBANK_TWAVEHANDLE_H
#define _JASSIMPLEWAVEBANK_TWAVEHANDLE_H

/*
    __vt__Q217JASSimpleWaveBank11TWaveHandle:
    .4byte 0
    .4byte 0
    .4byte __dt__Q217JASSimpleWaveBank11TWaveHandleFv
    .4byte getWaveInfo__Q217JASSimpleWaveBank11TWaveHandleCFv
    .4byte getWavePtr__Q217JASSimpleWaveBank11TWaveHandleCFv
*/

namespace JASSimpleWaveBank {
struct TWaveHandle {
	virtual ~TWaveHandle();           // _00
	virtual void getWaveInfo() const; // _04
	virtual void getWavePtr() const;  // _08

	// _00 VTBL
};
} // namespace JASSimpleWaveBank

#endif
