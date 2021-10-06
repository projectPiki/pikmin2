#ifndef _sysMath_H
#define _sysMath_H
namespace JMath {
    template <int length, typename T>
    struct TAtanTable {
        T atan2_(T, T) const;
        T mTable[length];
    };
    
    template struct TAtanTable<1024, float>;
}
#endif
