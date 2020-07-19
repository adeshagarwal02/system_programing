#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main(void)
{
	struct rlimit lim;
	getrlimit(RLIMIT_NOFILE,&lim);
	printf("File limit	");

	if(lim.rlim_cur == RLIM_INFINITY)
		printf("infinity	");
	else
		printf("%d	",lim.rlim_cur);
	if(lim.rlim_max == RLIM_INFINITY)
		printf("infinity	");
	else
		printf("%d\n",lim.rlim_max);
	return 0;
}
