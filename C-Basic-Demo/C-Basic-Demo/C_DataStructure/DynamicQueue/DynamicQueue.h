//
//  DynamicQueue.h
//  C-Basic-Demo
//
//  Created by HeJeffery on 2017/1/19.
//  Copyright © 2017年 HeJeffery. All rights reserved.
//

#ifndef DynamicQueue_h
#define DynamicQueue_h

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//                               队列，动态数组队列                                  //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

typedef struct DynamicQueue DynamicQueue;

struct DynamicQueue {
    int *data;// 数组
    int head;// 队列头
    int tail;// 队列尾
    int currentSize;// 当前队列的大小
    int baseLength;// 每次分配内存的大小
    //     队列尾 |-----------------------------------------------------| 队列头
    //       --->|  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |     |--->
    //           |-----------------------------------------------------|
    //              |                                               |
    //              |                                               |
    //            队列尾                                          队列头
    // 思路：队尾不动，队头移动
};

/**
 *  创建队列
 *
 *  @param queue 需要被初始化的DynamicQueue的地址
 *  @param length 长度
 *  @return 创建成功返回true，创建失败返回false
 */
bool createDynamicQueue(DynamicQueue *queue, int length);

/**
 *  判断队列是否为空
 *
 *  @param queue DynamicQueue的地址
 *  @return 空队列返回true，反之返回false
 */
bool isEmptyDynamicQueue(DynamicQueue *queue);

/**
 *  入队
 *
 *  @param queue DynamicQueue地址的地址
 *  @param value 入队的元素
 *  @return 入队成功返回true，反之返回false
 */
bool enqueueDynamic(DynamicQueue **queue, int value);

/**
 *  出队
 *
 *  @param queue DynamicQueue的地址
 *  @param value 出队元素的值
 *  @return 出队成功返回true，反之返回false
 */
bool dequeueDynamic(DynamicQueue *queue, int *value);

/**
 *  获取队列头的数据
 *
 *  @param queue DynamicQueue的地址
 *  @return 返回队列头的值
 */
int headDynamicElement(DynamicQueue *queue);

/**
 *  获取队列尾的数据
 *
 *  @param queue DynamicQueue的地址
 *  @return 返回队列尾的值
 */
int tailDynamicElement(DynamicQueue *queue);

/**
 *  获取当前队列的size
 *
 *  @param queue DynamicQueue的地址
 *  @return 返回队列当前的size
 */
int currentQueueSize(DynamicQueue *queue);

/**
 *  打印队列的数据
 *
 *  @param queue DynamicQueue的地址
 */
void showDynamicQueueData(DynamicQueue *queue);

#endif /* DynamicQueue_h */
