#include <proc.h>
#include <stdio.h>

int main()
{
	printf("Creating init...");
	create_first_process();
	printf("Starting scheduler loop. Press ctrl+c to quit");
	sched_loop();
	return 0;
}
