/**********************************************************************
 *
 * *******************************************************************/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(void)
{
	pid_t cpid = fork();
	int Retval;
	int status;
	int high,low;
	if(cpid == 0)
	{
		printf("Running child, PID = %d, PPID = %d\n", getpid(),getppid());
		sleep(1);
		printf("Running child process\n");
		sleep(1);
		printf("Running child process\n");
		sleep(1);
		printf("Running child process\n");
		exit(23);
	}
	else
	{
		Retval = wait(&status);
		printf("I am Parent, PID = %d, PPID = %d\n", getpid(),getppid());
		low = status & 0xff;
		high = (status >>8) & 0xff;
		if(low == 0)
			printf("Return value of wait is %d, and status is %d\n",Retval,high);
		exit(54);
		

	}
	return 0;
}
