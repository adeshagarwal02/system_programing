/*
 * Using system() call to change the attributes of terminal
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char pass[50];
	char *q;
	int rv;
	printf("Password:");
	system("stty -echo");
	fgets(pass,50,stdin);
	q = strchr(pass,'\n');
	*q = '\0';
	system("stty echo");
	rv = strcmp(pass, "adesh");
	if(!rv)
	{
		printf("Password is correct\n");
	}
	else 
		printf("Password is incorrect\n");
	return 0;
}
