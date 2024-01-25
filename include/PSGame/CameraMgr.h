#ifndef _PSGAME_CAMERAMGR_H
#define _PSGAME_CAMERAMGR_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"

namespace PSGame {
/**
 * @struct CameraMgr
 * @brief Manages the sound related to the camera in the PSGame namespace.
 * @details Inherits from JKRDisposer and provides functions for updating the camera, calculating volume based on distance, and retrieving
 * camera distances and volumes.
 */
struct CameraMgr : public JKRDisposer {
	/**
	 * @brief Default constructor.
	 */
	CameraMgr();

	/**
	 * @brief Virtual destructor.
	 */
	virtual ~CameraMgr(); // _08

	/**
	 * @brief Retrieves the volume of the background music camera.
	 * @param index The index of the camera.
	 * @return The volume of the background music camera.
	 */
	f32 getBgmCamVol(u8 index);

	/**
	 * @brief Updates the camera.
	 * @param index The index of the camera.
	 * @param distance The distance between the camera and the look-at point.
	 */
	void update(u8 index, f32 distance);

	/**
	 * @brief Retrieves the current camera distance volume.
	 * @param index The index of the camera.
	 * @return The current camera distance volume.
	 */
	f32 getCurrentCamDistVol(u8 index);

	/**
	 * @brief Calculates the volume based on the distance between the camera and the look-at point.
	 * @param dist The distance between the camera and the look-at point.
	 * @return The calculated volume.
	 */
	f32 getVol_DistBetweenCamAndLookat(f32 dist);

	// _00      = VTBL
	// _00-_18  = JKRDisposer
	f32 mMinDistance;         // _18
	f32 mMidDistance;         // _1C
	f32 mFarDistance;         // _20
	f32 mMaxDistance;         // _24
	f32 mMinDistVolume;       // _28
	f32 mMidVolume;           // _2C
	f32 mFarVolume;           // _30
	f32 mMaxDistVolume;       // _34
	f32 mZoomCamVolumeMod;    // _38
	f32 mCamDistVolume[2];    // _3C
	f32 mDistVolumeFactor[2]; // _44
	bool mIsSpecial[2];       // _4C

	static const f32 sDefaultVol;
};

} // namespace PSGame

#endif
