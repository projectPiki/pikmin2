#ifndef _JASBASICWAVEBANK_TWAVEGROUP_H
#define _JASBASICWAVEBANK_TWAVEGROUP_H

struct JASWaveArc {
	virtual void onDispose(); // _00

	// _00 VTBL
};

namespace JASBasicWaveBank {
struct TWaveGroup : public JASWaveArc {
	virtual void onDispose();   // _00
	virtual void onLoadDone();  // _04
	virtual void onEraseDone(); // _08

	// _00 VTBL
};
} // namespace JASBasicWaveBank

#endif
