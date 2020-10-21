/* Drop in replacement for zmalloc.h in order to just use libc malloc without
 * any wrappering. */

#ifndef ZMALLOC_H
#define ZMALLOC_H
/**
 * zmalloc是redis自己实现的内存分配，是对linux中malloc，free，relloc这3个函数的一个封装。
 */
#define zmalloc malloc
#define zrealloc realloc
#define zcalloc(x) calloc(x,1)
#define zfree free
#define zstrdup strdup

#endif
