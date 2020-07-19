#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void myexit(int exitstatus, void * arg)
{
	printf("Exit Handler called with exit status = %d and arg = %d\n",exitstatus, *((int*)arg));
}


int main(void)
{
	int value = 7;
	on_exit(myexit,(void*)(&value));
	printf("This is main\n");
	exit(54);
}
