#ifndef _AGECOLLPART_H
#define _AGECOLLPART_H

namespace SysShape {
struct Model;
} // namespace SysShape

struct AgeCollPart {
	~AgeCollPart();
	AgeCollPart(SysShape::Model*);
	void draw(struct Graphics&);
};

#endif
