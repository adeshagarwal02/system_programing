#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int gvar = 54;

int main(void)
{
	int lvar = 100;
	printf("before fork()\n");
	pid_t cpid = vfork();
	if(cpid == 0)
	{
		gvar++;
		lvar++;
		printf("I am child and I have incremented my gvar and lvar\n");
		printf("Global var = %d, local Var = %d\n",gvar,lvar);
		exit(0);
	}
	else
	{
		printf("\nI am parent now..\n");
		printf("Global var = %d, local Var = %d\n",gvar,lvar);
		exit(0);
	}
}
