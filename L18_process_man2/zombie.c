/**********************************************************************
 *
 *			creating an orphen process
 *
 * *******************************************************************/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	pid_t cpid = fork();
	if(cpid == 0)
	{
		printf("Terminated child, PID = %d, PPID = %d\n", getpid(),getppid());
		exit(0);
	}
	else
	{
		printf("Terminating Parent, PID = %d, PPID = %d\n", getpid(),getppid());
		while(1);

	}
	return 0;
}
