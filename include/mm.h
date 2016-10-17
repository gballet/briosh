#ifndef __MM_H__
#define __MM_H__

typedef struct marea {
	void *start;
	int n_pages;
	char page_size_offset;
	char area_flags;
} marea_t;

typedef struct {
        int n_areas;
	marea_t areas[];
} mmap_t;

typedef const int area_flag_t;

int init_mmap(mmap_t *map, int code_pages, int data_pages);

#endif
