#include <stdio.h>
#include <errno.h>
//#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>

extern int errno;

int main(void)
{
	DIR *dp;
	struct dirent *entry;
	dp = opendir("/home");
	//chdir("/home");
	errno = 0;
	while(1)
	{
		entry = readdir(dp);
		if((entry == NULL ) && (errno != 0))
		{
			perror("readir");
			exit(errno);
		}
		if((entry == NULL ) && (errno == 0))
		{
			printf("\nEnd of Dir\n");
			exit(EXIT_SUCCESS);
		}
		printf("%s ",entry->d_name);
	}
	closedir(dp);
	return 0;
}
