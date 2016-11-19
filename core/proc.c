#include <mm.h>
#include <proc.h>

#include <os.h>

proc_t *current_process;

proc_t init;

int create_first_process()
{
	current_process = &init;
	return init_mmap(&init.mmap, 1, 1);
}

int kill_process(proc_t* p, const char *reason)
{
	/* Won't return */
	os_panic(reason);
	return 0;
}
