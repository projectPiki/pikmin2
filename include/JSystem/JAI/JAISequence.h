#ifndef _JSYSTEM_JAI_JAISEQUENCE_H
#define _JSYSTEM_JAI_JAISEQUENCE_H

#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAInter.h"

/**
 * @size{0x6A0}
 */
struct JAISequence : public JAISound {
	virtual void setPortData(unsigned char, unsigned short);     // _00
	virtual short getPortData(unsigned char);                    // _04
	virtual void stop(unsigned long);                            // _0C
	virtual void setVolume(float, unsigned long, unsigned char); // _14
	virtual float getVolume(unsigned char);                      // _18
	virtual void setPan(float, unsigned long, unsigned char);    // _1C
	virtual float getPan(unsigned char);                         // _20
	virtual void setPitch(float, unsigned long, unsigned char);  // _24
	virtual float getPitch(unsigned char);                       // _28
	virtual void setFxmix(float, unsigned long, unsigned char);  // _2C
	virtual float getFxmix(unsigned char);                       // _30
	virtual void setDolby(float, unsigned long, unsigned char);  // _34
	virtual float getDolby(unsigned char);                       // _38
	virtual void setTempoProportion(float, unsigned long);       // _3C
	virtual float getTempoProportion();                          // _40
	virtual void setVolumeU7(unsigned char, unsigned long,
	                         unsigned char);                              // _44
	virtual void getVolumeU7(unsigned char);                              // _48
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);   // _4C
	virtual void getPanU7(unsigned char);                                 // _50
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char); // _54
	virtual void getFxmixU7(unsigned char);                               // _58
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char); // _5C
	virtual void getDolbyU7(unsigned char);                               // _60
	virtual void getFadeCounter();                                        // _9C
	virtual void setPrepareFlag(unsigned char);                           // _A0
	virtual void checkReady();                                            // _A4

	JAInter::SeqParameter m_seqParameter; // _48
};

#endif
