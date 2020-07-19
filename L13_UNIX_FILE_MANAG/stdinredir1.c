/********************************************
 * Input Redirection 
 * fd 0 will point to the open file not to stdin
 * This method will not work if you alrady opened a file
 *
 ********************************************/


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char buff[100];
	int fd;
	fgets(buff,100,stdin);
	printf("%s",buff);
	close(0);
	fd = open("/etc/passwd",O_RDONLY);
	fgets(buff,100,stdin);
	printf("%s",buff);
	return 0;
}
