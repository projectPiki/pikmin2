#ifndef _EBI_TITLE_TOBJECTS_H
#define _EBI_TITLE_TOBJECTS_H

struct JKRArchive;

namespace ebi {
namespace title {
struct TObjBase {
	virtual void getCreatureType(); // _08 (weak)
	virtual void isCalc();          // _0C (weak)

	void calcModelBaseMtx_();
	void pushOut(TObjBase*);
};

struct TBGEnemyBase : public TObjBase {
	void setArchive(JKRArchive*);
	void start();
	void update();
};

struct TBlackPlane : public TObjBase {
	void setArchive(JKRArchive*);
	void start();
	void updateBeforeCamera();
	void updateAfterCamera();
	void setLogo();
	void getCameraPos();
};

struct TMapBase : public TObjBase {
	void setArchive(JKRArchive*);
	void startWind(float);
	void update();
};
} // namespace title
} // namespace ebi

#endif
