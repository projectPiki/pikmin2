#ifndef _PSAUTOBGM_TRACK_H
#define _PSAUTOBGM_TRACK_H

/*
    __vt__Q29PSAutoBgm5Track:
    .4byte 0
    .4byte 0
    .4byte __dt__Q29PSAutoBgm5TrackFv
    .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
    .4byte
   "load__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>FR20JSUMemoryInputStream"
    .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
    .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
    .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
    .4byte afterGetFromFree__Q29PSAutoBgm5TrackFv
    .4byte "getPrmObjHeap__Q210JADUtility29PrmSetRc<Q29PSAutoBgm6Module>Fv"
*/

namespace JADUtility {
struct PrmSetBase {
	virtual void _00() = 0;                             // _00
	virtual void appendAfter();                         // _04
	virtual void _08() = 0;                             // _08
	virtual void afterRemovingChildButton(PrmSetBase*); // _0C
	virtual void afterRemovingThisButton(PrmSetBase*);  // _10
	virtual void getEraseLink();                        // _14

	// _00 VTBL
};
} // namespace JADUtility

namespace JADUtility {
namespace PrmSetRc < PSAutoBgm
{
	struct Module >
	{
		virtual void _00() = 0;                   // _00
		virtual void _04() = 0;                   // _04
		virtual void load(JSUMemoryInputStream&); // _08
		virtual void _0C() = 0;                   // _0C
		virtual void _10() = 0;                   // _10
		virtual void _14() = 0;                   // _14
		virtual void _18() = 0;                   // _18
		virtual void getPrmObjHeap();             // _1C

		// _00 VTBL
	};
} // namespace PSAutoBgm
} // namespace JADUtility

namespace PSAutoBgm {
struct Track : public PrmSetBase, public Module > {
	virtual ~Track();                                   // _00
	virtual void appendAfter();                         // _04
	virtual void load(JSUMemoryInputStream&);           // _08
	virtual void afterRemovingChildButton(PrmSetBase*); // _0C
	virtual void afterRemovingThisButton(PrmSetBase*);  // _10
	virtual void getEraseLink();                        // _14
	virtual void afterGetFromFree();                    // _18
	virtual void getPrmObjHeap();                       // _1C

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
