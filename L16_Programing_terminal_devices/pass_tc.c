/*
 * Using tcgetattr() anf tcsetattr() to change the attributes of terminal
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>

int main(void)
{
	char pass[50];
	char *q;
	int rv;
	struct termios info;
	printf("Password:");
	tcgetattr(0,&info);
	struct termios save = info;
	info.c_lflag &= ~ECHO;
	tcsetattr(0,TCSANOW,&info);
	fgets(pass,50,stdin);
	q = strchr(pass,'\n');
	*q = '\0';
	tcsetattr(0,TCSANOW,&save);
	rv = strcmp(pass, "adesh");
	if(!rv)
	{
		printf("Password is correct\n");
	}
	else 
		printf("Password is incorrect\n");
	return 0;
}
