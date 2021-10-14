#ifndef _BLENDCAMERA_H
#define _BLENDCAMERA_H

struct BlendCamera {
	BlendCamera(int, struct Camera**);
	~BlendCamera();

	void doUpdate();
	void setBlendFactor(float);
	void setCameras(Camera**);
};

#endif
