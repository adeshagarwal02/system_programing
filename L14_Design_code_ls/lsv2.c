/* File name: lsv2.c
 * Author : Adesh Agarwal.
 * Purpose : Learning 
 * Version : 0
 * Discription: Recives multiple argument or none directory name via command line argument and display name of files and subdirectories in the order as they apper in the directory 
 * Not to display hidden file 
 *
 */


#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
extern int errno;
void do_ls(char *);

int main (int argc, char *argv[])
{
	int file_no = 0;
	if(argc ==1)
	{
		do_ls(".");
	}
	else
	{
		while(++file_no < argc)
		{
			printf("Directory list of %s: \n",argv[file_no]);
			do_ls(argv[file_no]);
		}
	}

	return 0;
}

void do_ls(char * dir)
{
	struct dirent *entry;
	DIR *dp;
	dp = opendir(dir);
	if(dp == NULL)
	{
		fprintf(stderr,"cannot open directory:%s \n",dir);
		return;
	}
	errno = 0;
	while((entry = readdir(dp)) != NULL)
	{
		if((entry == NULL) && errno != 0)
		{
			perror("readdir()");
			exit(errno);
		}
		else 
		{
			if(entry->d_name[0] != '.')
				printf("%s\n",entry->d_name);
		}

	}
	closedir(dp);
}
