/*
 * taking multiple file name
 */

#include <stdio.h>
#include <stdlib.h>
#define LINELEN 512

void do_more(FILE *);
int main(int argc, char* argv[])
{	
	int i = 0;
	if(argc == 1)
	{
		printf("This is the help page \n");
		exit(0);
	}
	while(++i< argc)
	{
		FILE *fp;
		fp = fopen(argv[i], "r");
		if(fp == NULL)
		{
			perror("can't open file");
			exit(1);
		}
		do_more(fp);
		fclose(fp);
	}
	return 0;

}

void do_more(FILE *fp)
{
	char buff[LINELEN];
	while(fgets(buff,LINELEN,fp)){
		fputs(buff, stdout);
	}
}
