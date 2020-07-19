#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void handlerfun(void)
{
	printf("Exit Handler\n");
}


int main (void)
{
	atexit(handlerfun);
	printf("main function\n");
	//return 0; // or exit(0);
	_exit(0); //or _Exit(0);
}
