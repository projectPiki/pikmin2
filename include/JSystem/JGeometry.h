#ifndef _JSYSTEM_JGEOMETRY_H
#define _JSYSTEM_JGEOMETRY_H

namespace JGeometry {
template <typename T> struct TVec2 {
	inline TVec2();
	inline TVec2(T inX, T inY) : x(inX), y(inY) {};
	T x;
	T y;
};

template <typename T> struct TVec3 {
	inline TVec3();
	inline TVec3(T inX, T inY, T inZ)
		: x(inX)
		, y(inY)
		, z(inZ)
		{};
	T x;
	T y;
	T z;
};

// Size: 0x10
template <typename T> struct TBox2 {
	inline TBox2();
	inline TBox2(T x1, T y1, T x2, T y2)
		: minX(x1)
		, minY(y1)
		, maxX(x2)
		, maxY(y2)
		{};
	inline TBox2(TVec2<T> max, TVec2<T> min)
		: maxX(max.x)
		, maxY(max.y)
		, minX(min.x)
		, minY(min.y)
		{};
	T minX;
	T minY;
	T maxX;
	T maxY;
};

typedef TVec2<float> TVec2f;
typedef TVec3<float> TVec3f;
typedef TBox2<float> TBox2f;

} // namespace JGeometry

#endif
