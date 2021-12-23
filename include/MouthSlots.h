#ifndef _MOUTHSLOTS_H
#define _MOUTHSLOTS_H

#include "types.h"

struct MouthCollPart;

namespace SysShape {
struct Model;
} // namespace SysShape

struct MouthSlots {
	MouthSlots();

	void alloc(int);
	void setup(int, SysShape::Model*, char*);
	void update();

	int m_count;            // _00
	MouthCollPart* m_slots; // _04
};

#endif
