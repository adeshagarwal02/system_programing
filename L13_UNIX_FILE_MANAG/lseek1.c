/***********************
 * Trying to seek standerd 0
 * ************************/


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <errno.h>
extern int errno;

int main(void)
{
	int rv = lseek(0,54,SEEK_SET);
	if(rv == -1)
	{
		printf("cannot seek\n");
		exit(errno);
	}
	else
		printf("seek ok \n");
	return 0;
}
