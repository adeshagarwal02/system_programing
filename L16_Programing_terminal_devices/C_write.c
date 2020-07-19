/*
 * Program to open another terminal in write mode
 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
	int fd;
	char buff[256];
	if(argc != 2)
	{
		printf("Please enter file name\n");
		exit(1);
	}
	fd = open(argv[1],O_WRONLY);
	while(fgets(buff,256,stdin)!= NULL)
	{
		if(write(fd,buff,strlen(buff) )== -1)
			break;
	}
	close(fd);

	return 0;
}
