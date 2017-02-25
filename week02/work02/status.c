#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main() {
	printf("PID[%d] (PID[%d])\n", getpid(), getpid());
	sleep(1);
}
