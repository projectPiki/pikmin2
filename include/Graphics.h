#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include "types.h"
#include "Dolphin/gx.h"
#include "Matrixf.h"
#include "Color4.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JFramework/JFWSystem.h"

struct Color4;
template <typename T>
struct IDelegate1;
template <typename A, typename B>
struct IDelegate2;
struct JUTTexture;
struct Plane;
template <typename T>
struct Rect;
typedef Rect<f32> Rectf;
struct Viewport;

namespace Sys {
struct Sphere;
}

/**
 * @brief Structure representing information for perspective printing.
 */
struct PerspPrintfInfo {
	/**
	 * @brief Default constructor.
	 * @param scale The scale factor.
	 */
	inline PerspPrintfInfo(f32 scale = 1.0f)
	    : mFont(JFWSystem::systemFont)
	    , mPerspectiveOffsetX(0)
	    , mPerspectiveOffsetY(0)
	    , mPrintType(0)
	    , mScale(scale)
	    , mColorA(Color4(0x66, 0x99, 0xFF, 0xFF))
	    , mColorB(Color4(0, 0x66, 0xFF, 0xFF))
	{
	}

	struct JUTFont* mFont;   // _00
	int mPerspectiveOffsetX; // _04
	int mPerspectiveOffsetY; // _08
	int mPrintType;          // _0C
	f32 mScale;              // _10
	Color4 mColorA;          // _14
	Color4 mColorB;          // _18
};

/**
 * @brief The Graphics struct represents a graphics system.
 * @note Size: 0x2A0 bytes
 *
 * It provides functions for rendering various shapes and objects, managing viewports,
 * and handling tokens for graphics operations.
 *
 * The struct also contains members for managing the graphics state, such as the active tokens,
 * the draw color, the transformation matrix, and the viewport settings.
 *
 * The struct has virtual functions for initializing and updating the 3D graphics system.
 */
struct Graphics {
#define GRAPHICS_TOKEN_MAX 32

	/**
	 * @brief Default constructor.
	 */
	Graphics();

	/**
	 * @brief Allocates the specified number of viewports.
	 * @param count The number of viewports to allocate.
	 */
	void allocateViewports(int count);

	/**
	 * @brief Adds a new viewport to the graphics system.
	 * @param newVp The new viewport to add.
	 */
	void addViewport(Viewport* newVp);

	/**
	 * @brief Deletes all the viewports in the graphics system.
	 */
	void deleteViewports();

	/**
	 * @brief Gets the number of active viewports in the graphics system.
	 * @return The number of active viewports.
	 */
	int getNumActiveViewports();

	/**
	 * @brief Gets the viewport at the specified index.
	 * @param vpIndex The index of the viewport to get.
	 * @return The viewport at the specified index.
	 */
	Viewport* getViewport(int vpIndex);

	/**
	 * @brief Maps a delegate function to a viewport.
	 * @param delegate The delegate function to map.
	 */
	void mapViewport(IDelegate1<Viewport*>* delegate);

	/**
	 * @brief Maps a delegate function to a viewport.
	 * @param delegate The delegate function to map.
	 */
	void mapViewport(IDelegate2<Graphics&, Viewport*>* delegate);

	/**
	 * @brief Renders the J3D graphics.
	 */
	void renderJ3D();

	/**
	 * @brief Updates the J3D graphics.
	 */
	void updateJ3D();

	/**
	 * @brief Finds the index of the token with the specified name.
	 * @param name The name of the token to find.
	 * @return The index of the token, or -1 if not found.
	 */
	int findTokenIndex(char* name);

	/**
	 * @brief Gets the current token.
	 * @return The current token.
	 */
	u16 getToken();

	/**
	 * @brief Gets the name of the token at the specified index.
	 * @param index The index of the token.
	 * @return The name of the token.
	 */
	char* getTokenName(u16 index);

	/**
	 * @brief Sets the current token.
	 * @param name The name of the token to set.
	 */
	void setToken(char* name);

	/**
	 * @brief Draws an axis.
	 * @param scale The scale factor.
	 * @param matrix The transformation matrix.
	 */
	void drawAxis(f32 scale, Matrixf* matrix);

	/**
	 * @brief Draws a box.
	 * @param position The position of the box.
	 * @param size The size of the box.
	 * @param rotation The rotation angles of the box.
	 * @param color The color of the box.
	 */
	void drawBox(Vector3f& position, Vector3f* size, f32* rotation, f32* color);

	/**
	 * @brief Draws a box.
	 * @param min The minimum corner of the box.
	 * @param max The maximum corner of the box.
	 * @param rotation The rotation angles of the box.
	 * @param color The color of the box.
	 */
	void drawBox(Vector3f& min, Vector3f& max, Vector3f& rotation, Vector3f& color);

	/**
	 * @brief Draws a cone.
	 * @param base The base position of the cone.
	 * @param apex The apex position of the cone.
	 * @param radius The radius of the cone.
	 * @param slices The number of slices to use for the cone.
	 */
	void drawCone(Vector3f& base, Vector3f& apex, f32 radius, int slices);

	/**
	 * @brief Draws a cylinder.
	 * @param base The base position of the cylinder.
	 * @param apex The apex position of the cylinder.
	 * @param radius The radius of the cylinder.
	 */
	void drawCylinder(Vector3f& base, Vector3f& apex, f32 radius);

	/**
	 * @brief Draws a line.
	 * @param start The start position of the line.
	 * @param end The end position of the line.
	 */
	void drawLine(Vector3f& start, Vector3f& end);

	/**
	 * @brief Draws a marker.
	 * @param scale The scale factor.
	 * @param matrix The transformation matrix.
	 */
	void drawMarker(f32 scale, Matrixf* matrix);

	/**
	 * @brief Draws a mesh.
	 * @param matrix The transformation matrix.
	 */
	void drawMesh(Matrixf* matrix);

	/**
	 * @brief Draws a plane.
	 * @param plane The plane to draw.
	 * @param size The size of the plane.
	 */
	void drawPlane(Plane& plane, f32 size);

	/**
	 * @brief Draws a point.
	 * @param position The position of the point.
	 */
	void drawPoint(Vector3f& position);

	/**
	 * @brief Draws a point with a specified size.
	 * @param position The position of the point.
	 * @param size The size of the point.
	 */
	void drawPoint(Vector3f* position, u16 size);

	/**
	 * @brief Draws a rectangle.
	 * @param rect The rectangle to draw.
	 * @param color The color of the rectangle.
	 */
	void drawRect(Rectf& rect, Color4& color);

	/**
	 * @brief Draws a rectangle with a texture.
	 * @param rect The rectangle to draw.
	 * @param texture The texture to use.
	 */
	void drawRect(Rectf& rect, JUTTexture* texture);

	/**
	 * @brief Draws a rectangle.
	 * @param rect The rectangle to draw.
	 * @param filled Whether the rectangle should be filled or not.
	 */
	void drawRectangle(Rectf& rect, bool filled);

	/**
	 * @brief Draws a sphere.
	 * @param center The center position of the sphere.
	 * @param radius The radius of the sphere.
	 */
	void drawSphere(Vector3f& center, f32 radius);

	/**
	 * @brief Draws a sphere.
	 * @param radius The radius of the sphere.
	 * @param matrix The transformation matrix.
	 */
	void drawSphere(f32 radius, Matrixf* matrix);

	/**
	 * @brief Draws a texture.
	 * @param texture The texture to draw.
	 * @param x The x-coordinate of the texture.
	 * @param y The y-coordinate of the texture.
	 * @param width The width of the texture.
	 * @param height The height of the texture.
	 */
	void drawTexture(JUTTexture* texture, f32 x, f32 y, f32 width, f32 height);

	/**
	 * @brief Draws a tile.
	 * @param sphere1 The first sphere.
	 * @param sphere2 The second sphere.
	 * @param texture The texture to use.
	 */
	void drawTile(Sys::Sphere& sphere1, Sys::Sphere& sphere2, JUTTexture* texture);

	/**
	 * @brief Draws a tube.
	 * @param start The start position of the tube.
	 * @param end The end position of the tube.
	 * @param radius The radius of the tube.
	 * @param slices The number of slices to use for the tube.
	 */
	void drawTube(Vector3f& start, Vector3f& end, f32 radius, f32 slices);

	/**
	 * @brief Initializes the primitive drawing.
	 * @param matrix The transformation matrix.
	 */
	void initPrimDraw(Matrixf* matrix);

	/**
	 * @brief Loads the primitive view matrix.
	 */
	void loadPrimViewMtx();

	/**
	 * @brief Clears the Z-buffer within the specified rectangle.
	 * @param rect The rectangle to clear.
	 */
	void clearZBuffer(Rectf& rect);

	/**
	 * @brief Fills the Z-buffer within the specified rectangle with the specified value.
	 * @param rect The rectangle to fill.
	 * @param value The value to fill the Z-buffer with.
	 */
	void fillZBuffer(Rectf& rect, f32 value);

	/**
	 * @brief Initializes the J2D orthographic projection.
	 * @param orthoGraph The J2D orthographic graph.
	 */
	void initJ2DOrthoGraph(J2DOrthoGraph* orthoGraph);

	/**
	 * @brief Initializes the J2D perspective projection.
	 * @param perspGraph The J2D perspective graph.
	 */
	void initJ2DPerspGraph(J2DPerspGraph* perspGraph);

	/**
	 * @brief Sets up the default J2D orthographic projection.
	 */
	void setupJ2DOrthoGraphDefault();

	/**
	 * @brief Sets up the default J2D perspective projection.
	 */
	void setupJ2DPerspGraphDefault();

	/**
	 * @brief Clears the vertex descriptor.
	 */
	void clearVtxDesc();

	/**
	 * @brief Sets the vertex descriptor attribute.
	 * @param attr The attribute to set.
	 * @param attrType The attribute type.
	 */
	void setVtxDesc(_GXAttr attr, _GXAttrType attrType);

	/**
	 * @brief Sets the vertex attribute format.
	 * @param vtxFmt The vertex format.
	 * @param attr The attribute to set.
	 * @param compCnt The component count.
	 * @param compType The component type.
	 * @param stride The stride.
	 */
	void setVtxAttrFmt(_GXVtxFmt vtxFmt, _GXAttr attr, _GXCompCnt compCnt, _GXCompType compType, u8 stride);

	/**
	 * @brief Disables the light.
	 */
	void disableLight();

	/**
	 * @brief Disables the texture.
	 */
	void disableTexture();

	/**
	 * @brief Sets the texture GX.
	 */
	void setTextureGX();

	/**
	 * @brief Initializes the perspective printing.
	 * @param viewport The viewport to use.
	 */
	void initPerspPrintf(Viewport* viewport);

	/**
	 * @brief Prints a formatted string in perspective.
	 * @param info The perspective printing information.
	 * @param position The position to print.
	 * @param format The format string.
	 * @param ... The arguments for the format string.
	 */
	void perspPrintf(PerspPrintfInfo& info, Vector3f& position, char* format, ...);

	/**
	 * @brief Gets the perspective graph.
	 * @return The perspective graph.
	 */
	inline J2DPerspGraph* getPerspGraph() { return &mPerspGraph; }

	/**
	 * @brief Gets the number of viewports.
	 * @return The number of viewports.
	 */
	inline int getViewportNum() const { return mActiveViewports; }

	/**
	 * @brief Initializes the GX graphics system.
	 */
	static void initGX();

	/**
	 * @brief Performs a dirty initialization of the GX graphics system.
	 */
	static void dirtyInitGX();

	/**
	 * @brief Clears the initialization of the GX graphics system.
	 */
	static void clearInitGX();

	static char* lastTokenName;

	// _000-_268 = Members
	// _26C-_270 = VTBL
	// _270-_29E = Members
	u16 mActiveTokens;                 // _000
	char* mTokens[GRAPHICS_TOKEN_MAX]; // _004
	Color4 mDrawColor;                 // _084
	Color4 mWhiteColor;                // _088
	Matrixf mMatrix;                   // _08C
	J2DOrthoGraph mOrthoGraph;         // _0BC
	J2DPerspGraph mPerspGraph;         // _190
	Viewport* mCurrentViewport;        // _25C
	int mMaxViewports;                 // _260
	int mActiveViewports;              // _264
	Viewport** mViewports;             // _268

	// VTBL MUST be declared between _268 and _270

	/**
	 * @brief Initializes the J3D drawing.
	 */
	virtual void doJ3DDrawInit() { } // _08 (weak)

	/**
	 * @brief Performs the J3D drawing.
	 * @param arg1 The first argument.
	 */
	virtual void doJ3DDraw(int arg1) { } // _0C (weak)

	/**
	 * @brief Initializes the J3D frame.
	 */
	virtual void doJ3DFrameInit() { } // _10 (weak)

	/**
	 * @brief Performs the J3D animation.
	 */
	virtual void doJ3DAnimation() { } // _14 (weak)

	/**
	 * @brief Initializes the J3D update.
	 */
	virtual void doJ3DUpdateInit() { } // _18 (weak)

	/**
	 * @brief Sets the J3D view.
	 * @param arg1 The first argument.
	 */
	virtual void doJ3DSetView(int arg1) { } // _1C (weak)

	/**
	 * @brief Calculates the J3D view.
	 */
	virtual void doJ3DViewCalc() { } // _20 (weak)

	u8 _270[0x2E]; // _270
};

#endif
