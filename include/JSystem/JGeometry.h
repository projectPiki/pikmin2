#ifndef _JSYSTEM_JGEOMETRY_H
#define _JSYSTEM_JGEOMETRY_H

namespace JGeometry {
template <typename T> struct TVec2 {
	inline TVec2() {}
	inline TVec2(T inX, T inY)
	    : x(inX)
	    , y(inY) {};
	T x;
	T y;
};

template <typename T> struct TVec3 {
	inline TVec3();
	inline TVec3(T inX, T inY, T inZ)
	    : x(inX)
	    , y(inY)
	    , z(inZ) {};

	// TODO: Determine if this could've actually existed, or if I'm just making it up.
	inline TVec3(const TVec3<T>& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}

	// TODO: Determine if this could've actually existed, or if I'm just making
	// it up.
	inline TVec3& operator=(const TVec3& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}

	T x;
	T y;
	T z;
};

// Size: 0x10
template <typename T> struct TBox2 {
	inline TBox2()
	    : minX()
	    , minY()
	    , maxX()
	    , maxY() {};
	inline TBox2(T x1, T y1, T x2, T y2)
	    : minX(x1)
	    , minY(y1)
	    , maxX(x2)
	    , maxY(y2) {};
	inline TBox2(TVec2<T> max, TVec2<T> min)
	    : maxX(max.x)
	    , maxY(max.y)
	    , minX(min.x)
	    , minY(min.y) {};
	T minX;
	T minY;
	T maxX;
	T maxY;
};

template <typename T> struct TBox3 {
	T minX;
	T minY;
	T minZ;
	T maxX;
	T maxY;
	T maxZ;
};

typedef TVec2<float> TVec2f;
typedef TVec3<float> TVec3f;
typedef TBox2<float> TBox2f;
typedef TBox3<float> TBox3f;

} // namespace JGeometry

#endif
