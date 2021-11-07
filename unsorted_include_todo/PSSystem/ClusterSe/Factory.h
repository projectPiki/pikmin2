#ifndef _PSSYSTEM_CLUSTERSE_FACTORY_H
#define _PSSYSTEM_CLUSTERSE_FACTORY_H

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
