#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	printf("brk position = %p\n",sbrk(0));
	char *a = (char*) malloc(100);
	printf("brk position = %p\n",sbrk(0));
	char *b = (char*) malloc(100);
	printf("brk position = %p\n",sbrk(0));
	char *c = (char*) malloc(100);
	printf("brk position = %p\n",sbrk(0));
	char *d = (char*) malloc(100);
	printf("brk position = %p\n",sbrk(0));
	return 0;
}
