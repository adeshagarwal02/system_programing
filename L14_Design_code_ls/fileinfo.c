/* file name : fileinfo.c
 * Author : Adesh Agarwal
 * Discription: take input of file name and display the information such as 
 * 1. group id
 * 2. Userid
 * 3. size
 * 4. time at last date modified
 * 5. mode
 *
 */

#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

void show_stat_info(char *fname);

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Incorrect number of argument\n");
		exit(1);
	}
	
	show_stat_info(argv[1]);

	return 0;
}

void show_stat_info(char *fname)
{
	int rv;
	struct stat buff;
	rv = lstat(fname,&buff);
	if(rv == -1)
	{
		perror("lstat()");
	}
	printf("mode %o\n",buff.st_mode);
	printf("size :%d\n",buff.st_size);
	printf("gid :%d\n",buff.st_gid);
	printf("uid :%d\n",buff.st_uid);
	printf("time : %ld\n",buff.st_mtime);

}

