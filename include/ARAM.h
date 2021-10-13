#ifndef _ARAM_H
#define _ARAM_H

// TODO: move to DVD ripper
namespace JKRDvdRipper {
typedef int EAllocDirection;
}

typedef int JKRExpandSwitch;

struct ARAM {
	struct Mgr {
		Mgr();

		void aramToMainRam(const char*, unsigned char*, unsigned long,
		                   unsigned long, JKRExpandSwitch, unsigned long,
		                   struct JKRHeap*, JKRDvdRipper::EAllocDirection, int,
		                   unsigned long*);
		void dump();
		void dvdToAram(const char*, bool);
		void init();
		void search(const char*);
	};

	struct Node {
		~Node();
	};
};

#endif
