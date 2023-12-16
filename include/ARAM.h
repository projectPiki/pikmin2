#ifndef _ARAM_H
#define _ARAM_H

#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRAram.h"
#include "CNode.h"
#include "types.h"

namespace ARAM {
/**
 * @brief Represents a node in the ARAM System.
 *
 * This struct extends the CNode struct and provides additional functionality for managing ARAM data.
 */
struct Node : CNode {
	inline Node();
	virtual ~Node() { } // _08

	/**
	 * @brief Loads a DVD resource to ARAM.
	 *
	 * This function loads a DVD resource to the ARAM system.
	 *
	 * @param path Resource name from the DVD.
	 * @param forceFail If true, the function will always fail.
	 *
	 * @warning This function uses const_cast, potentially modifying the input string. Caution with read-only memory (e.g., string
	 * literals).
	 *
	 * @return The number of bytes loaded to ARAM.
	 */
	inline u32 dvdToAram(char const* path, bool forceFail);

	/**
	 * @brief Transfers data from the ARAM to the main RAM.
	 *
	 * This function transfers data from the ARAM system to the main RAM.
	 *
	 * @param buf The buffer containing the data to be converted.
	 * @param address The address in ARAM where the data is located.
	 * @param offset The offset within the data to start the conversion.
	 * @param expandSwitch The expansion switch for the conversion.
	 * @param maxExpandSize The maximum size to expand the data.
	 * @param heap The heap to allocate memory for the converted data.
	 * @param allocDir The allocation direction for the converted data.
	 * @param id The ID for the converted data.
	 * @param byteCnt A pointer to store the byte count of the converted data.
	 *
	 * @return A pointer to the converted data in main RAM.
	 */
	void* aramToMainRam(u8* buf, u32 address, u32 offset, JKRExpandSwitch expandSwitch, u32 maxExpandSize, JKRHeap* heap,
	                    JKRDvdRipper::EAllocDirection allocDir, int id, u32* byteCnt);

	/**
	 * @brief An empty stub function.
	 */
	inline void dump();

	JKRAramBlock* mMemoryBlock; // _18
};

/**
 * @brief Represents the ARAM Manager.
 *
 * This struct provides functionality for managing ARAM data.
 */
struct Mgr {
	Mgr();

	/**
	 * @brief Initializes the ARAM Manager.
	 */
	static void init();

	/**
	 * @brief Transfers data from ARAM to main RAM.
	 *
	 * This function searches for a node with the specified name in the ARAM manager and transfers the data to main RAM.
	 *
	 * @param name The name of the node to search for.
	 * @param buf Pointer to the buffer in main RAM where the data will be transferred.
	 * @param address The ARAM address to start the transfer from.
	 * @param offset The offset within the ARAM block to start the transfer from.
	 * @param expandSwitch The expansion switch for the ARAM block.
	 * @param maxExpandSize The maximum size to expand the ARAM block if needed.
	 * @param heap The JKRHeap object to use for memory allocation.
	 * @param allocDir The allocation direction for the JKRHeap object.
	 * @param id The ID of the ARAM block.
	 * @param byteCnt Pointer to a variable that will receive the number of bytes transferred.
	 *
	 * @return A pointer to the allocated memory in main RAM, or nullptr if the node was not found.
	 */
	void* aramToMainRam(char const* name, u8* buf, u32 address, u32 offset, JKRExpandSwitch expandSwitch, u32 maxExpandSize, JKRHeap* heap,
	                    JKRDvdRipper::EAllocDirection allocDir, int id, u32* byteCnt);

	/**
	 * @brief This function does nothing because the main logic was debug build and got compiled out.
	 */
	void dump();

	/**
	 * Loads a DVD resource to ARAM, associates it with a Node, and adds the Node to Mgr if specified.
	 *
	 * @param name: DVD resource name.
	 * @param forceAddNode: If true, always adds a new Node to Mgr.
	 *
	 * @return: Result of dvdToAram method. If new Node is created, returns its result.
	 * If Node with the same name exists, returns its result. If not loaded and forceAddNode is false, returns 0.
	 *
	 * @note: Searches for an existing Node, creates a new Node if not found.
	 */
	u32 dvdToAram(char const* name, bool forceAddNode);

	/**
	 * @brief Searches for a node with the specified name.
	 *
	 * @param name The name of the node to search for.
	 *
	 * @return A pointer to the found node, or nullptr if the node was not found.
	 */
	Node* search(char const* name);

	CNode mRootNode; // _00
};
}; // namespace ARAM
extern ARAM::Mgr* gAramMgr;

#endif
