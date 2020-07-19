#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{

	int i;
	for (i = 0; i<100; i++)
	{
		fork();
		//vfork();
	}
	exit(0);
}
