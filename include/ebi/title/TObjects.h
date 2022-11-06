#ifndef _EBI_TITLE_TOBJECTS_H
#define _EBI_TITLE_TOBJECTS_H

struct JKRArchive;

namespace ebi {
namespace title {
struct TObjBase {
	virtual void getCreatureType(); // _08 (weak)
	virtual bool isCalc();          // _0C (weak)

	void calcModelBaseMtx_();
	void pushOut(TObjBase*);

	// _00 = VTBL
};

struct TBGEnemyBase : public TObjBase {
	void setArchive(JKRArchive*);
	void start();
	void update();

	// _00 = VTBL
};

struct TBlackPlane : public TObjBase {
	void setArchive(JKRArchive*);
	void start();
	void updateBeforeCamera();
	void updateAfterCamera();
	void setLogo();
	void getCameraPos();

	// _00 = VTBL
};

struct TMapBase : public TObjBase {
	void setArchive(JKRArchive*);
	void startWind(f32);
	void update();

	// _00 = VTBL
};
} // namespace title
} // namespace ebi

#endif
