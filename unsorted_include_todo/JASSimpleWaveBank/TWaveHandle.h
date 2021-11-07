#ifndef _JASSIMPLEWAVEBANK_TWAVEHANDLE_H
#define _JASSIMPLEWAVEBANK_TWAVEHANDLE_H

namespace JASSimpleWaveBank {
struct TWaveHandle {
	virtual ~TWaveHandle();           // _00
	virtual void getWaveInfo() const; // _04
	virtual void getWavePtr() const;  // _08

	// _00 VTBL
};
} // namespace JASSimpleWaveBank

#endif
