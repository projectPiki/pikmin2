#ifndef _PSSYSTEM_CLUSTERSE_PART_H
#define _PSSYSTEM_CLUSTERSE_PART_H

/*
    __vt__Q38PSSystem9ClusterSe4Part:
    .4byte 0
    .4byte 0
    .4byte callSe__Q38PSSystem9ClusterSe4PartFPQ27JAInter6Object
*/

namespace PSSystem {
namespace ClusterSe {
struct Part {
	virtual void callSe(JAInter::Object*); // _08

	Part();
};
} // namespace ClusterSe
} // namespace PSSystem

#endif
