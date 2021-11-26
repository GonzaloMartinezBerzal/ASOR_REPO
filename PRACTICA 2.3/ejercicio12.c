#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

volatile int sigint_count, sigtstp_count, tot;

static void sigint_action(int arg) {
	sigint_count++;
	tot++;
}	

static void sigtstp_action(int arg) {
	sigtstp_count++;
	tot++;
}

int main(void) { 
    
	sigset_t sig_set;
	struct sigaction sigint_struct, sigtstp_struct;

	sigint_count = 0;
	sigtstp_count = 0;
	tot = 0;
	sigfillset(&sig_set);
	
	sigint_struct.sa_handler = sigint_action;
	sigint_struct.sa_mask = sig_set;
	sigint_struct.sa_flags = 0;
	sigtstp_struct.sa_handler = sigtstp_action;
	sigtstp_struct.sa_mask = sig_set;
	sigtstp_struct.sa_flags = 0;

	sigaction(SIGINT, &sigint_struct, NULL);
	sigaction(SIGTSTP, &sigtstp_struct, NULL);

	while (tot < 10);

	printf("Number of SIGINT received: %d\n", sigint_count);	
	printf("Number of SIGTSTP received: %d\n", sigtstp_count);

	return 0;
}