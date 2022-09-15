#ifndef _JASCHANNEL_H
#define _JASCHANNEL_H

/*
    __vt__10JASChannel:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte "@16@__dt__10JASChannelFv"
    .4byte __dt__10JASChannelFv
*/

struct JASChannel {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual ~JASChannel();  // _14 (weak)

	JASChannel(void (*)(unsigned long, JASChannel*, JASDsp::TChannel*, void*), void*);
	void setOscInit(int, const JASOscillator::Data*);
	void setMixConfig(int, unsigned short);
	void directReleaseOsc(unsigned short);
	void copyOsc(int, JASOscillator::Data*);
	void overwriteOsc(int, JASOscillator::Data*);
	void setKeySweepTarget(unsigned char, unsigned long);
	void setPauseFlag(bool);
	void setPanPower(float, float, float);
	void play();
	void playForce();
	void release(unsigned short);
	void updateEffectorParam(JASDsp::TChannel*, unsigned short*, const JASChannel::EffectOscParam&);
	void dspUpdateCallback(unsigned long, JASDsp::TChannel*, void*);
	void initialUpdateDSPChannel(JASDsp::TChannel*);
	void updateDSPChannel(JASDsp::TChannel*);
	void calcEffect(const JASChannel::PanVector*, const JASChannel::PanVector*, unsigned char);
	void calcPan(const JASChannel::PanVector*, const JASChannel::PanVector*, unsigned char);
	void updateAutoMixer(JASDsp::TChannel*, float, float, float, float);
	void updateMixer(float, float, float, float, unsigned short*);
	void sweepProc();
	void free();
};

#endif
