#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *arr = (char *)malloc(sizeof(char)*10);
	arr[0] = 'A';
	arr[1] = 'd';
	arr[2] = 'e';
	arr[3] = 's';
	arr[4] = 'h';
	arr[5] = '\0';
	printf("%s\n",arr);
	free(arr);
	arr[0] = 'b'; //error but no warrning and error msg useing splint to find this error

	return 0;
}
