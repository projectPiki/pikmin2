#ifndef _DOLPHIN_MTX_H
#define _DOLPHIN_MTX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct PADStatusSingle {
	ushort _00;
	uchar _02;
	uchar _03;
	uchar _04;
	uchar _05;
	u8 _06;
	char _07;
	u8 _08;
	u8 _09;
	char _0A;
} PADStatusSingle;

typedef struct PADStatus {
	PADStatusSingle m_stats[4];
} PADStatus;

void __PADDisableRecalibration();
void PADClamp();
void PADClampCircle(PADStatus*);
void PADControlMotor(int, uint);
void PADInit();
void PADOriginCallback();
void PADOriginUpdateCallback();
void PADProbeCallback();
void PADRead(PADStatus*);
void PADRecalibrate();
void PADReset();
void PADSetAnalogMode();
void PADSetSamplingCallback();
void PADSetSpec();
void PADTypeAndStatusCallback();

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
