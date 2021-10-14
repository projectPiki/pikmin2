#ifndef _VIEWPORT_H
#define _VIEWPORT_H

#include "Rect.h"

struct Viewport {
	Viewport();
	~Viewport();

	void getMatrix(bool);
	void refresh();
	void setJ3DViewMtx(bool);
	void setProjection();
	void setRect(Rectf&);
	void setViewport();
	void updateCameraAspect();
	void viewable();
};

#endif
