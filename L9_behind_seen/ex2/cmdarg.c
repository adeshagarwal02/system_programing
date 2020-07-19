#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	if(!strcmp(argv[0],"./Hello"))
		printf("exe Hello\n");
	else
		printf("exe bye\n");
	return 0;
}
