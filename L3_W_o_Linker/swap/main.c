#include <stdio.h>
void swap();
int buf[2]= {1,2};
int main(void)
{
	swap();
	printf("buf[0] = %d, buf[1] = %d\n",buf[0],buf[2]);
	return 0;
}
