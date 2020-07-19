/********************************************
 * Input Redirection 
 * fd 0 will point to the open file not to stdin
 * using dup()
 *
 ********************************************/


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char buff[100];
	int fd, newfd;
	fgets(buff,100,stdin);
	printf("%s",buff);
	fd = open("/etc/passwd",O_RDONLY);
	close(0);
	newfd = dup(fd);
	fgets(buff,100,stdin);
	printf("%s",buff);
	return 0;
}
