//
//  LinkedStack.h
//  C-Basic-Demo
//
//  Created by HeJeffery on 2017/2/15.
//  Copyright © 2017年 HeJeffery. All rights reserved.
//

#ifndef LinkedStack_h
#define LinkedStack_h

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//                                       链式栈                                    //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

typedef struct LSNode LinkedStack;

struct LSNode {
    int data;
    struct LSNode *next;
};

////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//                            尾插法，效率不高，效率高的是头插法                        //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

/**
 *  创建链式栈
 *
 *  @return 返回创建成功后的头结点
 */
LinkedStack *createLinkedStack();

/**
 *  压栈
 *
 *  @param stack LinkedStack的地址
 *  @param value 压栈的值
 *  @return 压栈成功返回true，反之返回false
 */
bool pushLinkedStack(LinkedStack *stack, int value);

/**
 *  出栈
 *
 *  @param stack LinkedStack的地址
 *  @param value 出栈的值
 *  @param index 出栈的index的值
 *  @return 出栈成功返回true，反之返回false
 */
bool popLinkedStack(LinkedStack *stack, int *value, int *index);

/**
 *  获取栈顶的长度
 *
 *  @param stack LinkedStack的地址
 *  @return 返回的栈顶的值
 */
int lengthLinkedStack(LinkedStack *stack);

/**
 *  是否是空栈
 *
 *  @param stack LinkedStack的地址
 *  @return 空栈返回true，反之返回false
 */
bool isEmptyLinkedStack(LinkedStack *stack);

/**
 *  获取栈顶的Index
 *
 *  @param stack LinkedStack的地址
 *  @return 返回的栈顶index
 */
int topLinkedStackIndex(LinkedStack *stack);

/**
 *  获取栈顶的值
 *
 *  @param stack LinkedStack的地址
 *  @return 返回的栈顶的值
 */
int topLinkedStackValue(LinkedStack *stack);

/**
 *  打印链式栈
 *
 */
void showLinkedStack(LinkedStack *stack);


////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//                                 头插法，效率比较高                                //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

/**
 *  创建链式栈
 *
 *  @return 返回创建成功后的头结点
 */
LinkedStack *createLinkedStackHead();

/**
 *  压栈
 *
 *  @param stack LinkedStack地址的地址
 *  @param value 压栈的值
 *  @return 压栈成功返回true，反之返回false
 */
bool pushLinkedStackHead(LinkedStack **stack, int value);

/**
 *  出栈
 *
 *  @param stack LinkedStack地址的地址
 *  @param value 出栈的值
 *  @param index 出栈的index的值
 *  @return 返回头指针
 */
bool popLinkedStackHead(LinkedStack **stack, int *value, int *index);

/**
 *  获取栈顶的长度
 *
 *  @param stack LinkedStack的地址
 *  @return 返回的栈顶的值
 */
int lengthLinkedStackHead(LinkedStack *stack);

/**
 *  是否是空栈
 *
 *  @param stack LinkedStack的地址
 *  @return 空栈返回true，反之返回false
 */
bool isEmptyLinkedStackHead(LinkedStack *stack);

/**
 *  获取栈顶的Index
 *
 *  @param stack LinkedStack的地址
 *  @return 返回的栈顶index
 */
int topLinkedStackIndexHead(LinkedStack *stack);

/**
 *  获取栈顶的值
 *
 *  @param stack LinkedStack的地址
 *  @return 返回的栈顶的值
 */
int topLinkedStackValueHead(LinkedStack *stack);

/**
 *  打印链式栈
 *
 */
void showLinkedStackHead(LinkedStack *stack);

#endif /* LinkedStack_h */
