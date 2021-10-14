#ifndef _FOGMGR_H
#define _FOGMGR_H

struct FogMgr {
	~FogMgr();
	FogMgr();

	void off(struct Graphics&);
	void set(Graphics&);

	void getColor(struct Color4&);
	void setColor(Color4&);
};

#endif
