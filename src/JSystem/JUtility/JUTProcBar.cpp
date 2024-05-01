#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTProcBar.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"

JUTProcBar* JUTProcBar::sManager;

f32 oneFrameRate     = 8.0f;
f32 oneFrameRateUser = 10.0f;

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
JUTProcBar::JUTProcBar()
{
	mVisible        = true;
	mHeapBarVisible = true;
	mUnused         = 0;

	int screenHeight = JUTVideo::getManager()->getEfbHeight();

	if (screenHeight > 400) {
		mParams.setBarHeight(2);
		mParams.setPosition(39, screenHeight - 40);
		mParams.setWidth(562);
		mParams.setUserPosition(screenHeight - 70);
	} else {
		mParams.setBarHeight(1);
		mParams.setPosition(39, screenHeight - 20);
		mParams.setWidth(562);
		mParams.setUserPosition(screenHeight - 35);
	}

	_110            = 1;
	mDisableHeapBar = 0;
	mWatchHeap      = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
JUTProcBar::~JUTProcBar()
{
	// UNUSED FUNCTION
	sManager = nullptr;
}

/**
 * @note Address: 0x8002EFF4
 * @note Size: 0x130
 */
JUTProcBar* JUTProcBar::create()
{
	if (sManager == nullptr) {
		sManager = new JUTProcBar();
	}
	return sManager;
}

/**
 * @note Address: 0x8002F124
 * @note Size: 0x40
 */
void JUTProcBar::destroy()
{
	if (sManager != nullptr) {
		delete sManager;
	}
	sManager = nullptr;
}

/**
 * @note Address: 0x8002F164
 * @note Size: 0xD0
 */
void JUTProcBar::clear()
{
	sManager->idleStart();
	sManager->cpuStart();
	sManager->gpStart();
	sManager->wholeLoopStart();
	sManager->setCostFrame(0);
	oneFrameRate     = 8.0f;
	oneFrameRateUser = 10.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x18C
 */
void JUTProcBar::bar_subroutine(int startX, int startY, int height, int totalUnits, int maxHighlightedUnits, int filledUnits,
                                int highlitedUnits, JUtility::TColor fillColor, JUtility::TColor highlightedColor)
{
	// Calculate width of the filled and highlighted parts of the bar
	int filledWidth      = filledUnits * totalUnits / maxHighlightedUnits;
	int highlightedWidth = highlitedUnits * totalUnits / maxHighlightedUnits;

	// Draw filled part of the bar
	J2DFillBox(startX, startY, filledWidth, height, fillColor);

	// Draw highlighted part of the bar
	if (highlightedWidth >= 0) {
		if (highlightedWidth < 6) {
			J2DFillBox(startX, startY, highlightedWidth, height, highlightedColor);
		} else {
			J2DFillBox(startX + highlightedWidth - 6, startY, 6.0f, height, highlightedColor);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x144
 */
void JUTProcBar::adjustMeterLength(u32 totalUnits, f32* currentLength, f32 maxLength, f32 minLength, int* adjustmentFactor)
{
	BOOL lengthAdjusted = false;
	f32 adjustedLength  = *currentLength;

	// Reduce length if it exceeds maximum length
	while (adjustedLength > maxLength) {
		if (totalUnits * adjustedLength * 20.0f / 16666.0f <= mParams.mWidth - 30.0f) {
			break;
		}

		adjustedLength -= 0.1f;
		lengthAdjusted = true;
	}

	// Set adjustment factor to 0 if length is within limits
	if (adjustedLength >= minLength) {
		*adjustmentFactor = 0;
	}

	// Limit length to minimum length
	if (adjustedLength > minLength - 0.2f) {
		adjustedLength = minLength;
	}

	// Increase length if it is less than minimum length
	while (!lengthAdjusted && adjustedLength < minLength) {
		(*adjustmentFactor)++;
		if (*adjustmentFactor < 30) {
			break;
		}

		if ((totalUnits * adjustedLength * 20.0f / 16666.0f) < (mParams.mWidth - 60.0f)) {
			adjustedLength += 0.2f;
		}

		break;
	}

	*currentLength = adjustedLength;
}

/**
 * @note Address: 0x8002F234
 * @note Size: 0x34
 */
void JUTProcBar::draw()
{
	drawProcessBar();
	drawHeapBar();
}

/**
 * @note Address: 0x8002F268
 * @note Size: 0x1814
 */
void JUTProcBar::drawProcessBar()
{
	if (mVisible) {
		int frameDuration = 16666; // duration in miliseconds? for how long a frame takes,

		// Check if the current TV mode is NTSC_DS or PAL_DS
		if (JUTVideo::getManager() && ((JUTVideo::getManager()->getRenderMode()->viTVmode >> 2) & 15) == 1) {
			frameDuration = 20000;
		}

		static int cnt = 0;

		adjustMeterLength(mWholeLoop.mMeasurementCost, &oneFrameRate, 1.0f, 10.0f, &cnt);

		int oneBarWidth = oneFrameRate * 20.0f;

		// Assuming they split it originally 80/20
		int _80BarHeight = mParams.mBarHeight * 8;
		int _20BarHeight = mParams.mBarHeight * 2;

		int fullBarHeight = mParams.mBarHeight * 10;

		int barSegments = (mParams.mWidth - 4 + oneBarWidth) / oneBarWidth;

		mIdle.accumePeek();
		mGp.accumePeek();
		mCpu.accumePeek();

		// Calculate the total time spent in the GPU and CPU
		u32 totalTime = (mGp.mMeasurementCost - mGpWait.mMeasurementCost) - mCpu.mMeasurementCost;

		// Calculate the time spent in the GPU
		u32 gpuTime = (mGp.mMeasurementCost - mGpWait.mMeasurementCost);

		// Draw the outline of the bar
		J2DFillBox(mParams.mPosX, mParams.mPosY, mParams.mWidth, _80BarHeight, JUtility::TColor(0, 0, 50, 200));
		J2DDrawFrame(mParams.mPosX, mParams.mPosY, mParams.mWidth, _80BarHeight, JUtility::TColor(50, 50, 150, 255), 6);

		// Draw the bar segments
		if (mCostFrame > barSegments) {
			// Draw the bar in red if the cost exceeds the maximum
			J2DFillBox(mParams.mPosX, mParams.mPosY + _80BarHeight + 1, mParams.mWidth, 1.0f, JUtility::TColor(250, 0, 0, 200));
		} else {
			// Draw the bar in cyan if the cost is within limits
			J2DFillBox(mParams.mPosX, mParams.mPosY + _80BarHeight + 1, mCostFrame * oneBarWidth + 2, 1.0f,
			           JUtility::TColor(0, 250, 250, 200));
		}

		// Calculate the width of the bar based on the total time spent in the whole loop
		int barWidth = mWholeLoop.mMeasurementCost * oneBarWidth / frameDuration;
		if (barWidth > mParams.mWidth) {
			// Draw the bar in orange if the cost exceeds the maximum
			J2DFillBox(mParams.mPosX, mParams.mPosY, mParams.mWidth, 1.0f, JUtility::TColor(255, 100, 0, 255));
		} else {
			// Draw the bar in green if the cost is within limits
			J2DFillBox(mParams.mPosX, mParams.mPosY, barWidth, 1.0f, JUtility::TColor(50, 255, 0, 255));
		}

		if (_110 == 0) {
			// Draw the GPU bar
			int barPositionY = mParams.mPosY + mParams.mBarHeight;
			bar_subroutine(mParams.mPosX + 1, barPositionY, _20BarHeight, oneBarWidth, frameDuration, mGp.mMeasurementCost, mGp.mPeakCost,
			               JUtility::TColor(80, 255, 80, 255), JUtility::TColor(100, 255, 120, 255));

			// Draw the CPU bar
			barPositionY += mParams.mBarHeight * 2;
			bar_subroutine(mParams.mPosX + 1, barPositionY, _20BarHeight, oneBarWidth, frameDuration, mCpu.mMeasurementCost, mCpu.mPeakCost,
			               JUtility::TColor(255, 80, 80, 255), JUtility::TColor(255, 100, 100, 255));

			// Draw the idle bar
			barPositionY += mParams.mBarHeight * 2;
			bar_subroutine(mParams.mPosX + 1, barPositionY, _20BarHeight, oneBarWidth, frameDuration, mIdle.mMeasurementCost,
			               mIdle.mPeakCost, JUtility::TColor(180, 180, 160, 255), JUtility::TColor(200, 200, 200, 255));
		} else {
			int barPositionY = mParams.mPosY + mParams.mBarHeight;
			int barPositionX = mParams.mPosX + 1;

			// Draw the GPU time bar
			bar_subroutine(barPositionX, barPositionY, _20BarHeight, oneBarWidth, frameDuration, gpuTime, -1,
			               JUtility::TColor(80, 255, 80, 255), JUtility::TColor(80, 255, 80, 255));

			int gpuTimeBarWidth = gpuTime * oneBarWidth / frameDuration + barPositionX;
			J2DFillBox(gpuTimeBarWidth, barPositionY, mGpWait.calcBarSize(oneBarWidth, frameDuration), _20BarHeight,
			           JUtility::TColor(0, 255, 0, 255));

			// Draw the CPU time bar
			int totalBarWidth = mGp.calcBarSize(oneBarWidth, frameDuration) + barPositionX;
			barPositionX += totalTime * oneBarWidth / frameDuration;
			barPositionY += mParams.mBarHeight * 2;
			bar_subroutine(barPositionX, barPositionY, _20BarHeight, oneBarWidth, frameDuration, mCpu.mMeasurementCost, -1,
			               JUtility::TColor(255, 80, 80, 255), JUtility::TColor(255, 80, 80, 255));

			// Draw the idle time bar
			barPositionY += mParams.mBarHeight * 2;
			bar_subroutine(totalBarWidth, barPositionY, _20BarHeight, oneBarWidth, frameDuration, mIdle.mMeasurementCost, -1,
			               JUtility::TColor(180, 180, 160, 255), JUtility::TColor(180, 180, 160, 255));
		}

		// Loop through each segment of the bar
		for (int i = 1; i < barSegments; i++) {
			// Calculate the x-coordinate for the current segment
			int x = mParams.mPosX + i * oneBarWidth + 1;

			// Draw a vertical line at the calculated x-coordinate
			// The y-coordinates for the line start at the top of the bar and end at the bottom
			// The color of the line is determined by whether the current segment number is a multiple of 5
			// If it is, the line is cyan; otherwise, it's a lighter blue
			// The last argument (12) is the thickness of the line
			J2DDrawLine(x, mParams.mPosY + mParams.mBarHeight, x, mParams.mPosY + _80BarHeight - mParams.mBarHeight,
			            (i % 5) != 0 ? JUtility::TColor(100, 100, 255, 255) : JUtility::TColor(180, 255, 255, 255), 12);
		}

		u32 maxCost = 0;
		for (int i = 0; i < 8; i++) {
			CTime* time = &mUsers[i];

			// If the peak accumulator for the current user has reached 16
			// or the measurement cost is greater than the peak cost...
			if (++time->mPeakAccumulator >= 16 || time->mMeasurementCost > time->mPeakCost) {
				// Set the peak cost to the measurement cost
				time->mPeakCost        = time->mMeasurementCost;
				time->mPeakAccumulator = 0;
			}

			if (time->mPeakCost > maxCost) {
				maxCost = time->mPeakCost;
			}
		}

		if ((bool)maxCost == true) {
			static int cntUser = 0;

			adjustMeterLength(maxCost, &oneFrameRateUser, 1.0f, 10.0f, &cntUser);

			int userBarWidth = oneFrameRateUser * 20.0f;
			J2DFillBox(mParams.mPosX, mParams.mUserPosition, mParams.mWidth, fullBarHeight, JUtility::TColor(0, 0, 50, 200));
			J2DDrawFrame(mParams.mPosX, mParams.mUserPosition, mParams.mWidth, fullBarHeight, JUtility::TColor(50, 50, 150, 255), 6);

			for (int userIndex = 0; userIndex < 8; userIndex++) {
				CTime* time = &mUsers[userIndex];

				if (++time->mPeakAccumulator >= 16 || time->mMeasurementCost > time->mPeakCost) {
					time->mPeakCost        = time->mMeasurementCost;
					time->mPeakAccumulator = 0;
				}

				if (time->mMeasurementCost != 0 || time->mPeakCost != 0) {
					// Calculate the width of the measurement cost bar and peak cost bar
					int measurementCostBarWidth = time->mMeasurementCost * userBarWidth / frameDuration;
					int peakCostBarWidth        = time->mPeakCost * userBarWidth / frameDuration;

					time->mMeasurementCost = 0;

					// Draw the measurement cost bar
					J2DFillBox(mParams.mPosX + 1, mParams.mUserPosition + mParams.mBarHeight + userIndex * mParams.mBarHeight,
					           measurementCostBarWidth, mParams.mBarHeight, JUtility::TColor(time->mR, time->mG, time->mB, 255));

					if (peakCostBarWidth < 3u) {
						// If it is, draw the entire peak cost bar
						// The bar is drawn at a position determined by the current user index and the bar height
						// The color of the bar is set to a specific shade of yellow
						J2DFillBox(mParams.mPosX, mParams.mUserPosition + mParams.mBarHeight + userIndex * mParams.mBarHeight,
						           peakCostBarWidth, mParams.mBarHeight, JUtility::TColor(255, 200, 50, 255));
					} else {
						// If the width of the peak cost bar is 3 units or more, draw only the last 3 units of the bar
						// The bar is drawn at a position determined by the current user index, the bar height, and the peak cost bar width
						// The color of the bar is set to the same specific shade of yellow
						J2DFillBox(mParams.mPosX + peakCostBarWidth - 3,
						           mParams.mUserPosition + mParams.mBarHeight + userIndex * mParams.mBarHeight, 3.0f, mParams.mBarHeight,
						           JUtility::TColor(255, 200, 50, 255));
					}
				}
			}

			// Calculate the total number of segments in the progress bar
			int totalProgressBarSegments = (mParams.mWidth - 4 + userBarWidth) / userBarWidth;

			// Loop through each segment of the progress bar
			for (int segmentIndex = 1; segmentIndex < totalProgressBarSegments; segmentIndex++) {
				// Calculate the x-coordinate for the current segment
				int segmentPositionX = mParams.mPosX + segmentIndex * userBarWidth + 1;

				// Draw a vertical line at the calculated x-coordinate
				// The y-coordinates for the line start at the top of the bar and end at the bottom
				// The color of the line is determined by whether the current segment number is a multiple of 5
				// If it is, the line is cyan; otherwise, it's a lighter blue
				// The last argument (12) is the thickness of the line
				J2DDrawLine(segmentPositionX, mParams.mUserPosition + mParams.mBarHeight, segmentPositionX,
				            mParams.mUserPosition + fullBarHeight - mParams.mBarHeight,
				            (segmentIndex % 5) != 0 ? JUtility::TColor(100, 100, 255, 255) : JUtility::TColor(180, 255, 255, 255), 12);
			}
		}

		mUnused = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void JUTProcBar::getUnuseUserBar()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
int addrToXPos(void* baseAddress, int xPosMultiplier)
{
	return xPosMultiplier * (((u32)baseAddress - 0x80000000) / (f32)JKRHeap::getMemorySize());
}
/**
 * @note Address: N/A
 * @note Size: 0x68
 */
int byteToXLen(int byteCount, int xLenMultiplier) { return xLenMultiplier * (byteCount / (f32)JKRHeap::getMemorySize()); }
/**
 * @note Address: N/A
 * @note Size: 0x264
 */
void heapBar(JKRHeap* heap, int baseXPos, int baseYPos, int unusedParam, int xPosMultiplier, int barHeight)
{
	int heapStartXPos   = baseXPos + addrToXPos(heap->getStartAddr(), xPosMultiplier);
	int heapEndXPos     = baseXPos + addrToXPos(heap->getEndAddr(), xPosMultiplier);
	int freeSpaceLength = byteToXLen(heap->getTotalFreeSize(), xPosMultiplier);

	// Draw the entire heap bar
	// The color of the bar is set to a specific shade of purple
	J2DFillBox(heapStartXPos, baseYPos - barHeight * 2 + barHeight / 2, heapEndXPos - heapStartXPos, barHeight / 2,
	           JUtility::TColor(255, 0, 200, 255));

	// Draw the free space in the heap bar
	// The color of the free space is set to a lighter shade of purple
	J2DFillBox(heapStartXPos, baseYPos - barHeight * 2 + barHeight / 2, freeSpaceLength, barHeight / 2,
	           JUtility::TColor(255, 180, 250, 255));
}

/**
 * @note Address: 0x80030A7C
 * @note Size: 0x704
 */
void JUTProcBar::drawHeapBar()
{
	// barWidth * 2 / 2 is a workaround, if height / 2 is used and barWidth * 2 gets replaced with height then there will be regswaps
	if (mHeapBarVisible) {
		int barHeight      = mParams.mBarHeight;
		int barPosX        = mParams.mPosX;
		int barPosY        = mParams.mPosY;
		int barWidth       = mParams.mWidth;
		int barTotalHeight = barHeight * 2;

		// Draw the background of the heap bar
		J2DFillBox(barPosX, barPosY - barHeight * 4, barWidth, barTotalHeight, JUtility::TColor(100, 0, 50, 200));

		// Draw the frame of the heap bar
		J2DDrawFrame(barPosX, barPosY - barHeight * 4, barWidth, barTotalHeight, JUtility::TColor(100, 50, 150, 255), 6);

		// Calculate the start and end positions of the code section in the heap bar
		int codeStartPos = barPosX + addrToXPos(JKRHeap::getCodeStart(), barWidth);
		int codeEndPos   = barPosX + addrToXPos(JKRHeap::getCodeEnd(), barWidth);

		// Draw the code section in the heap bar
		J2DFillBox(codeStartPos, barPosY - barHeight * 4, codeEndPos - codeStartPos, barTotalHeight, JUtility::TColor(255, 50, 150, 255));

		// Calculate the start and end positions of the data section in the heap bar
		int userRamStartPos = barPosX + addrToXPos(JKRHeap::getUserRamStart(), barWidth);
		int userRamEndPos   = barPosX + addrToXPos(JKRHeap::getUserRamEnd(), barWidth);

		// Draw the user RAM usage section of the heap bar
		J2DFillBox(userRamStartPos, barPosY - barHeight * 4, userRamEndPos - userRamStartPos, barTotalHeight,
		           JUtility::TColor(0, 50, 150, 255));

		// Calculate the total free size of the heap
		int totalFreeSize = byteToXLen(JKRHeap::getRootHeap()->getTotalFreeSize(), barWidth);

		// Draw the free space in the heap bar
		J2DFillBox(userRamStartPos, barPosY - barHeight * 4, totalFreeSize, barHeight * 2 / 2, JUtility::TColor(0, 250, 250, 255));

		// Draw the heap bar if applies
		if (mDisableHeapBar == 0) {
			JKRHeap* heap = mWatchHeap ? mWatchHeap : JKRHeap::getCurrentHeap();

			if (heap != JKRHeap::getSystemHeap()) {
				heapBar(heap, barPosX, barPosY, barTotalHeight, barWidth, barHeight * 2);
			}
		}
	}
}
