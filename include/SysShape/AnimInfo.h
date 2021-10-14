#ifndef _SYSSHAPE_ANIMINFO_H
#define _SYSSHAPE_ANIMINFO_H

namespace SysShape {
struct KeyEvent;

struct AnimInfo {
	~AnimInfo();

	void attach(struct J3DModelData*, void*);
	void getAnimKeyByType(unsigned long);
	void getLastLoopStart(SysShape::KeyEvent*);
	void getLowestAnimKey(float);

	void read(struct Stream&);
	void readEditor(Stream&);
};
} // namespace SysShape

#endif
