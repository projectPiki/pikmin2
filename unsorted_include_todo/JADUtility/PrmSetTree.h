#ifndef _JADUTILITY_PRMSETTREE_H
#define _JADUTILITY_PRMSETTREE_H

/*
    __vt__Q210JADUtility10PrmSetTree:
    .4byte 0
    .4byte 0
    .4byte "beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
    .4byte "beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
    .4byte "afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
    .4byte
   "afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase"
*/

namespace JADUtility {
struct NodeTree<JADUtility::PrmSetBase> {
	virtual void NodeTree<PrmSetBase>::beforeRemovingChild(PrmSetBase*);                  // _08 (weak)
	virtual void NodeTree<PrmSetBase>::beforeRemovingThis(PrmSetBase*);                   // _0C (weak)
	virtual void NodeTree<PrmSetBase>::afterRemovingChildButton(PrmSetBase*);             // _10 (weak)
	virtual void NodeTree<PrmSetBase>::afterRemovingThisButton(PrmSetBase*, PrmSetBase*); // _14 (weak)
};
} // namespace JADUtility

namespace JADUtility {
struct PrmSetTree : public NodeTree<JADUtility::PrmSetBase> {
};
} // namespace JADUtility

#endif
