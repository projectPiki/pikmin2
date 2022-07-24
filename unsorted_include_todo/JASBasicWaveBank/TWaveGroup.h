#ifndef _JASBASICWAVEBANK_TWAVEGROUP_H
#define _JASBASICWAVEBANK_TWAVEGROUP_H

/*
    __vt__Q216JASBasicWaveBank10TWaveGroup:
    .4byte 0
    .4byte 0
    .4byte onDispose__10JASWaveArcFv
    .4byte onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv
    .4byte onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv
*/

struct JASWaveArc {
	virtual void onDispose(); // _08
};

namespace JASBasicWaveBank {
struct TWaveGroup : public JASWaveArc {
	virtual void onLoadDone();  // _0C
	virtual void onEraseDone(); // _10

	TWaveGroup();
	~TWaveGroup();
	void setWaveCount(unsigned long);
	void setWaveInfo(int, unsigned long, const JASWaveInfo&);
	void getWaveID(int) const;
};
} // namespace JASBasicWaveBank

#endif
