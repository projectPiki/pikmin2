#ifndef _CULLFRUSTUM_H
#define _CULLFRUSTUM_H

struct CullFrustum {
	~CullFrustum();

	void getPosition();
	void getSideVector();
	void getUpVector();
	void getViewMatrix(bool);
	void getViewVector();
	void updatePlanes();
};

#endif
