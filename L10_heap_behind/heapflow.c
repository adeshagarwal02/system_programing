#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MB 1024*1024

int main(void)
{
	char *mem;
	int CT = 0;
	while(1)
	{
		mem = (char*)malloc(sizeof(char)*MB);
	//	memset(mem,'\0',MB);
		printf("Current memory allocated %d MB\n",++CT);
	}

	exit(0);
}
