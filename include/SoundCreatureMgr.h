#ifndef SoundCreatureMgr_h
#define SoundCreatureMgr_h

typedef struct J3DAnmBase__vt J3DAnmBase__vt, *PJ3DAnmBase__vt;

typedef enum J3DAnmKind {
    CLUSTER=3,
    CLUSTER_FULL=12,
    CLUSTER_KEY=13,
    COLOR=1,
    COLOR_FULL=10,
    COLOR_KEY=11,
    TEV_REG_KEY=5,
    TEXTURE_SRT_KEY=4,
    TEX_PATTERN=2,
    TRANSFORM=0,
    TRANSFORM_FULL=9,
    TRANSFORM_KEY=8,
    VISIBILITY_FULL=6,
    VTX_COLOR=7,
    VTX_COLOR_FULL=14,
    VTX_COLOR_KEY=15
};

struct J3DAnmBase__vt {
    unsigned int* field_0x0;
    unsigned int* field_0x4;
    void (* dtor)(void *, short);
    J3DAnmKind (* getKind)(void);
};

typedef struct J3DAnmBase J3DAnmBase, *PJ3DAnmBase;
struct J3DAnmBase { /* PlaceHolder Class Structure */
    struct J3DAnmBase__vt * __vt;
};

namespace PSGame {
  class SoundCreatureMgr {
  public:
	void registerAnime(J3DAnmBase*, const char*);
  };
}

#endif