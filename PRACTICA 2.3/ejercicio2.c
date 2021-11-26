#include <sched.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>


int main(void) {
	struct sched_param p;
	int policy;

	if ( (policy = sched_getscheduler(0)) == -1) {
		perror("Error ejecutando sched_getscheduler");
		return -1;
	}

	if (policy == 1) {		
		printf("La politica del proceso es: SCHED_FIFO\n");
	}
	else if (policy == 0) {
		printf("La politica del proceso es: SCHED_OTHER\n");
	}
	
	else {		
		printf("La politica del proceso es: SCHED_RR\n");
	}

	if ( sched_getparam(0, &p) ) {
		perror("Error ejecutando sched_getscheduler");
		return -1;
	}
	printf("Scheduler priority of current process: %d\n", p.sched_priority);
	printf("\n");
	printf("Max priority of scheduler: %d\n", sched_get_priority_max(policy) );
	printf("Min priority of scheduler: %d\n", sched_get_priority_min(policy) );
	return 0;
}