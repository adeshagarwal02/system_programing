#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void myexit1(void)
{
	printf("Exit 1 Handler\n");
}
void myexit2(void)
{
	printf("Exit 2 Handler\n");
}


int main (void)
{
	atexit(myexit1);
	atexit(myexit2);
	printf("main function\n");
	exit(0);
	//return 0; // or exit(0);
	//_exit(0); //or _Exit(0);
}
