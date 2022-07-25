#ifndef _PSSYSTEM_CLUSTERSE_FACTORY_H
#define _PSSYSTEM_CLUSTERSE_FACTORY_H

/*
    __vt__Q38PSSystem9ClusterSe7Factory:
    .4byte 0
    .4byte 0
    .4byte constructPart__Q38PSSystem9ClusterSe7FactoryFv
    .4byte 0
*/

namespace PSSystem {
namespace ClusterSe {
struct Factory {
	virtual void constructPart(); // _08
	virtual void _0C() = 0;       // _0C

	Factory(unsigned char);
};
} // namespace ClusterSe
} // namespace PSSystem

#endif
