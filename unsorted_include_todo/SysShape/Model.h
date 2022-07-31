#ifndef _SYSSHAPE_MODEL_H
#define _SYSSHAPE_MODEL_H

/*
    __vt__Q28SysShape5Model:
    .4byte 0
    .4byte 0
    .4byte getMatrix__Q28SysShape5ModelFi
    .4byte isModel__Q28SysShape5ModelFv
    .4byte isVisible__Q28SysShape5ModelFRQ23Sys6Sphere
    .4byte isVisible__Q28SysShape5ModelFv
    .4byte hide__Q28SysShape5ModelFv
    .4byte show__Q28SysShape5ModelFv
    .4byte hidePackets__Q28SysShape5ModelFv
    .4byte showPackets__Q28SysShape5ModelFv
    .4byte jointVisible__Q28SysShape5ModelFbi
    .4byte jointVisible__Q28SysShape5ModelFbPQ28SysShape5Joint
    .4byte 0
*/

namespace SysShape {
struct Model {
	virtual void getMatrix(int);             // _08
	virtual void isModel();                  // _0C (weak)
	virtual void isVisible(Sys::Sphere&);    // _10
	virtual void isVisible();                // _14 (weak)
	virtual void hide();                     // _18
	virtual void show();                     // _1C
	virtual void hidePackets();              // _20
	virtual void showPackets();              // _24
	virtual void jointVisible(bool, int);    // _28
	virtual void jointVisible(bool, Joint*); // _2C (weak)
	virtual void _30() = 0;                  // _30

	void clearAnimatorAll();
	Model(J3DModelData*, unsigned long, unsigned long);
	void enableMaterialAnim(J3DModelData*, int);
	void enableMaterialAnim(int);
	void getRoughBoundingRadius();
	void getRoughCenter();
	void initJoints();
	void initJointsRec(int, SysShape::Joint*);
	void getJointIndex(char*);
	void getJoint(char*);
	void setViewCalcModeImm();
	void setViewCalcModeInd();
	void viewCalc();
	void setCurrentViewNo(unsigned long);
	void isMtxImmediate();
};
} // namespace SysShape

#endif
