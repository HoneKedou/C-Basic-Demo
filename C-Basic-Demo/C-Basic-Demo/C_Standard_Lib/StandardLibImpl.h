//
//  StandardLibImpl.h
//  C-Basic-Demo
//
//  Created by HeJeffery on 2017/1/23.
//  Copyright © 2017年 HeJeffery. All rights reserved.
//

#ifndef StandardLibImpl_h
#define StandardLibImpl_h

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//           c语言标准库的部分实现，实现的方式全部用指针，不用任何现有库函数                  //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//                                  string的部分实现                                //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////
// strlen的实现
unsigned long hjstrlen(const char *src);

// strcpy的实现
char *hjstrcpy(char *dst, const char *src);

// strncpy的实现
char *hjstrncpy(char *dst, const char *src, size_t n);

// strcat的实现
char *hjstrcat(char *dst, const char *src);

// strncat的实现
char *hjstrncat(char *dst, const char *src, size_t n);

// strchr的实现
char *hjstrchr(const char *src, int chr);

// strcmp的实现
int hjstrcmp(const char *src1, const char *src2);

// strncmp的实现
int hjstrncmp(const char *src1, const char *src2, size_t n);

// strstr的实现
char *hjstrstr(const char *bigstr, const char *littlestr);

// strdup的实现
char *hjstrdup(const char *src);

// strpbrk的实现
char *hjstrpbrk(const char *src, const char *charset);

// strrchr的实现
char *hjstrrchr(const char *src, int chr);

// strrev的实现
char *hjstrrev(char *src);

// strlwr的实现
char *hjstrlwr(char *src);

// strupr的实现
char *hjstrupr(char *src);

////////////////////////////////////////////////////////////////////////////////////
//                                                                                //
//                                   mem的部分实现                                  //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

// memset的实现
void *hjmemset(void *dst, int chr, size_t len);

// memcpy的实现(不重合)
void *hjmemcpy(void *dst, const void *source, size_t len);

// memccpy的实现
void *hjmemccpy(void *dst, const void *source, int chr, size_t len);

// memmove的实现(重合)
void *hjmemmove(void *dst, const void *source, size_t len);

// memcmp的实现
int hjmemcmp(const void *source1, const void *source2, size_t len);

// memchr的实现
void *hjmemchr(const void *dst, int chr, size_t len);

#endif /* StandardLibImpl_h */
