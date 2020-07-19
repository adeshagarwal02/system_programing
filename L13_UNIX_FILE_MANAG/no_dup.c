/*************************************
 * fd1 and fd2 will have diffrent CFO (current set offset) 
 * 2 enitries in system wide file table
 *
**************************************/


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main (void)
{
	int fd1, fd2, n;
	char buff[10];
	fd1 = open("test",O_RDONLY);
	fd2 = open("test",O_RDONLY);
	//fd2 = dup(fd1);
	n = read(fd1,buff,5);
	write(1,buff,n);
	n = read(fd2,buff,5);
	write(1,buff,n);
	return 0;
}
