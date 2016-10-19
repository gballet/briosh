// This is free and unencumbered software released into the public domain.
// Author: Guillaume Ballet

#ifndef __PROC_H__
#define __PROC_H__

#include <mm.h>

typedef unsigned long long uint64_t;

typedef struct {
	uint64_t pid;
	mmap_t mmap;
} proc_t;

int kill_process(proc_t *p, const char *reason);
int create_first_process();

#endif
