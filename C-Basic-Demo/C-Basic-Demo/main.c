//
//  main.c
//  C-Basic-Demo
//
//  Created by HeJeffery on 2017/1/9.
//  Copyright © 2017年 HeJeffery. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

// 递归实现斐波拉契数列
int fibonacciRecursion(int number) {
    if (number == 1 || number == 2) {
        return 1;
        
    } else {
        // 推理出递归的公式：f(n) = f(n - 1) + f(n - 2) (n >= 2)
        return fibonacciRecursion(number - 1) + fibonacciRecursion(number - 2);
    }
}

// 数组for循环实现斐波拉契数列
int fibonacciArrayFor(int number) {
    // 小于等于0就返回0
    if (number <= 0) {
        return 0;
    }
    
    int array[number];
    
    // for实现
    for (int i = 0; i < number; i++) {
        if (i == 0 || i == 1) {
            array[i] = 1;
            
        } else {
            array[i] = array[i - 1] + array[i - 2];
        }
    }
    return array[number - 1];
}

// 数组while循环实现斐波拉契数列
int fibonacciArrayWhile(int number) {
    // 小于等于0就返回0
    if (number <= 0) {
        return 0;
    }
    
    int array[number];
    
    // while实现
    int index = 0;
    while (index != number) {
        if (index == 0 || number == 1) {
            array[index] = 1;
            
        } else {
            array[index] = array[index - 1] + array[index - 2];
        }
        index++;
    }
    return array[index - 1];
}

// 递归实现1至100的加法
int recursionPlus(int number) {
    if (number < 0) {
        return 0;
    }
    return recursionPlus(number - 1) + number;
}

// 打印九九乘法表
void nineMultNine() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d = %2d   ", i, j, i * j);
        }
        printf("\n");
    }
}

// 选择排序
void selectionSort(int *array, int count) {
    // 选择排序法的思想：每一趟都是找出最值(和找出一个数组中的最值算法类似)，然后交换
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (array[i] < array[j]) {
                array[i] = array[i] ^ array[j];
                array[j] = array[i] ^ array[j];
                array[i] = array[i] ^ array[j];
            }
        }
    }
    
    for (int i = 0; i < count; i++) {
        printf("%d  \n", array[i]);
    }
}

// 冒泡排序
void bubbleSort(int *array, int count) {
    // 冒泡排序的思想：数字上浮或者下沉
    int loopNumber = count - 1;
    for (int i = 0; i < loopNumber; i++) {// 每循环一次就有一个数上浮或者下沉
        for (int j = 0; j < loopNumber - i; j++) {
            if (array[j] > array[j + 1]) {
                array[j] = array[j] ^ array[j + 1];
                array[j + 1] = array[j] ^ array[j + 1];
                array[j] = array[j] ^ array[j + 1];
            }
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d  \n", array[i]);
    }
}

// 插入排序
void insertSort(int *array, int count) {
    // 插入排序的思想：把数组分为n-1个数组序列。每次从数组的最后一个值往前插值
    // 从第二个元素开始
    for (int i = 1; i < count; i++) {
        // 用来记录数组序列的最后一个元素的位置
        int index = i;
        // 用来记录数组序列的最后一个元素
        int element = array[i];
        
        while (index > 0 && element < array[index - 1]) {
            array[index] = array[index - 1];// 往后移
            index--;
        }
        array[index] = element;
    }
    
    for (int i = 0; i < count; i++) {
        printf("%d  \n", array[i]);
    }
}

// 二分查找(折半查找)
int binarySearch(int *array, int count, int searchNumber) {
    int headIndex = 0;
    int tailIndex = count - 1;
    while (headIndex <= tailIndex) {
        int middleIndex = (headIndex + tailIndex) / 2;
        if (searchNumber < array[middleIndex]) {// 从上半部分查找
            tailIndex = middleIndex - 1;
            
        } else if (searchNumber > array[middleIndex]) {// 从下半部分查找
            headIndex = middleIndex + 1;
            
        } else if (searchNumber == array[middleIndex]) {// 找到了
            return middleIndex;
            
        }
    }
    return -1;// 没有找到返回-1
}

// 拉格朗日查找(二分查找的通用模式)
int lagrangeSearch(int *array, int count, int searchNumber) {
    int headIndex = 0;
    int tailIndex = count - 1;
    while (headIndex <= tailIndex) {
        // 比例
        float ratio = ((searchNumber - array[headIndex]) / (array[tailIndex] - array[headIndex])) * 1.0;
        int middleIndex = headIndex + (tailIndex - headIndex) * ratio;
        if (searchNumber < array[middleIndex]) {// 从上半部分查找
            tailIndex = middleIndex - 1;
            
        } else if (searchNumber > array[middleIndex]) {// 从下半部分查找
            headIndex = middleIndex + 1;
            
        } else if (searchNumber == array[middleIndex]) {// 找到了
            return middleIndex;
            
        }
    }
    return -1;// 没有找到返回-1
}

int main(int argc, const char * argv[]) {
    
//    // 递归实现斐波拉契数列
//    int fibonacciRecursionNum = fibonacciRecursion(7);
//    printf("fibonacciRecursionNum = %d\n", fibonacciRecursionNum);
//
//    // 数组for循环实现斐波拉契数列
//    int fibonacciArrayForNum = fibonacciArrayFor(7);
//    printf("fibonacciArrayForNum = %d\n", fibonacciArrayForNum);
//
//    // 数组while循环实现斐波拉契数列
//    int fibonacciArrayWhileNum = fibonacciArrayFor(7);
//    printf("fibonacciArrayWhileNum = %d\n", fibonacciArrayWhileNum);
//
//    // 递归实现1至100的加法
//    int recursionPlusResult = recursionPlus(100);
//    printf("recursionPlusResult = %d\n", recursionPlusResult);
//
//    // 打印九九乘法表
//    nineMultNine();
//
//    // 选择排序
//    int array[10] = {4, 5, 88, 3, 1, 7, 45, 78, 9, 23};
//    selectionSort(array, 10);
//
//    // 冒泡排序
//    int array[10] = {4, 5, 88, 3, 1, 7, 45, 78, 9, 23};
//    bubbleSort(array, 10);
//
//    // 插入排序
//    int array[10] = {4, 5, 88, 3, 1, 7, 45, 78, 9, 23};
//    insertSort(array, 10);
//
//    // 二分查找
//    int array[10] = {1, 3, 4, 6, 7, 9, 13, 15, 33, 64};
//    int index = binarySearch(array, 10, 13);
//    if (index == -1) {
//        printf("没有找到\n");
//    } else {
//        printf("找到了，位置是 index = %d\n", index);
//    }
//
//    // 拉格朗日查找(二分查找的通用模式)
//    int array[10] = {1, 3, 4, 6, 7, 9, 13, 15, 33, 64};
//    int index = lagrangeSearch(array, 10, 13);
//    if (index == -1) {
//        printf("没有找到\n");
//    } else {
//        printf("找到了，位置是 index = %d\n", index);
//    }
    
    return 0;
}
