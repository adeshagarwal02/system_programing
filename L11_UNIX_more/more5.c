/*
 * Taking multiple file name
 * Waiting for input 'q',' ','\n'
 * Display msg to reverse vedio, move up and clear line 
 * Input redirection <  and pipe |, reading from terminal /dev/tty  
 * Add s feature to compue a display %age of file content display --more(%s)--  
 */

#include <stdio.h>
#include <stdlib.h>
#define LINELEN 512
#define PAGELEN 20

void do_more(FILE *);
int get_input (FILE *);
int main(int argc, char* argv[])
{	
	int i = 0;
	if(argc == 1)
	{
		do_more(stdin);
		//printf("This is the help page \n");
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
	int num_of_lines = 0;
	int rv = 0;
	char buff[LINELEN];
	FILE *fp_tty = fopen("/dev/tty", "r");
	while(fgets(buff,LINELEN,fp)){
		fputs(buff, stdout);
		num_of_lines++;
		if(num_of_lines == PAGELEN)
		{
			rv = get_input(fp_tty); // wait for input
			printf("\033[1A \033[2K \033[1G"); // move up, clear current line, move the cursore to first col
			if(rv == 0)       // input is 'q'
				break;
			else if (rv == 1) // input is space
				num_of_lines -= PAGELEN;
			else if(rv == 2)   // input is return/enter
				num_of_lines -=1;
			else if (rv == 3) // invalid charater
				break;
		}
	}

}

int get_input(FILE* cmdstream)
{
	printf("\033[7m --more--(%%) \033[m");
	switch(getc(cmdstream))
	{
		case 'q':
			return 0;
		case ' ':
			return 1;
		case '\n':
			return 2;
		default : 
			return 3;

	}
	return 0;
}
