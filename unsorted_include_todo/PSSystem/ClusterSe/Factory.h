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
		virtual void constructPart(); // _00
		virtual void _04() = 0;       // _04

		// _00 VTBL
	};
} // namespace ClusterSe
} // namespace PSSystem

#endif
