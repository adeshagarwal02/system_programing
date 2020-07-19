#include <stdio.h>

#include <stdlib.h>
#define LINELEN 512

void do_more(FILE *);
int main(int argc, char* argv[])
{	
	if(argc == 1)
	{
		printf("This is the help page \n");
		exit(0);
	}
	FILE *fp;
	fp = fopen(argv[1], "r");
	if(fp == NULL)
	{
		perror("can't open file");
		exit(1);
	}
	do_more(fp);
	fclose(fp);
	return 0;

//	exit(0);
}

void do_more(FILE *fp)
{
	char buff[LINELEN];
	while(fgets(buff,LINELEN,fp)){
		fputs(buff, stdout);
	}
}
