#ifndef _OFT_H_
#define _OFT_H_

#include "Common.h"
#include "FCB.h"

/*
*  Open File Table | 打开文件表
*  @note
*  	打开文件表包含两部分 ： 用户文件描述表 和 内存FCB表
*  
*/
typedef struct OFT
{	
	/**
	 * File Control Block | 文件控制块
	 */
	FCB fcb;

	/**
	 * File Discriptor Table | 文件描述符表
	 */
	FDT fdt;

	/*
	* Is Use |是否被占用
	* @note
	* 	当前OFT是否被占用
	* @value
	* 	TRUE	: 正在被使用
	* 	FALSE	: OFT空闲
	*/
	char isUse;
}OFT;




void InitOFT(OFT * OFTPtr);

void getFreeOFT(OFT * OFTList,int OFTNum);

int findParentDir(OFT *OFTList,int fd);

#endif
