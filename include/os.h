#ifndef __OS_H__
#define __OS_H__

void *os_get_page();
void *os_get_pages();

void os_jump(void *to);
void os_panic(const char*);

#endif
