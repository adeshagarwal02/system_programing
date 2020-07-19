/* File name: lsv0.c
 * Author : Adesh Agarwal.
 * Purpose : Learning 
 * Version : 0
 * Discription: Recives exectly one directory name via command line argument and display name of files and subdirectories in the order as they apper in the directory 
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
	if(argc !=2)
	{
		printf("Enter exactly one argument (adirectory name).\n");
		exit(1);
	}
	do_ls(argv[1]);

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
			printf("%s\n",entry->d_name);

	}
	closedir(dp);
}
