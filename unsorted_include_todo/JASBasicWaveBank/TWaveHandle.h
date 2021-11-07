#ifndef _JASBASICWAVEBANK_TWAVEHANDLE_H
#define _JASBASICWAVEBANK_TWAVEHANDLE_H

namespace JASBasicWaveBank {
struct TWaveHandle {
	virtual ~TWaveHandle();           // _00
	virtual void getWaveInfo() const; // _04
	virtual void getWavePtr() const;  // _08

	// _00 VTBL
};
} // namespace JASBasicWaveBank

#endif
