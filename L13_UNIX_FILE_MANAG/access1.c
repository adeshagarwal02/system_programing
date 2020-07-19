#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Incorrect number of arguments \n");
		exit(1);
	}
	if (access(argv[1], F_OK) == 0) 
	{
		printf("File exits\n");
	}
	else
	{
		printf("File doen't exit\n");
		exit(1);
	}
	if (access(argv[1], R_OK) == 0) 
	{
		printf("You have Read permission\n");
	}
	else
	{
		printf("File doen't have read permission\n");
	}
	if (access(argv[1], W_OK) == 0) 
	{
		printf("you have write permission\n");
	}
	else
	{
		printf("File doen't have write permission\n");
	}
	if (access(argv[1], X_OK) == 0) 
	{
		printf("You have execut permmission\n");
	}
	else
	{
		printf("File doen't have execute permission\n");
	}

	return 0;
}
