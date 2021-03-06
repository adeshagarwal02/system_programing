/*
 * who.c 
 * change time 
 * removing extra entry 
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <utmp.h>
#include <time.h>

void show_info(struct utmp*);

int main(void)
{

	    int fd = open("/var/run/utmp",O_RDONLY);
	    if(fd == -1)
	    {
		    perror("Error in opninig utmp file");
		    exit(1);
		    //show_info(&rec);
	    }
	    struct utmp rec;
	    int reclen = sizeof(rec);
	    while(read(fd, &rec,reclen)==reclen)
	    {
		    if(rec.ut_type == 7)
		    {
		    	show_info(&rec);
		    }

	    }
	    close(fd);
	return 0;
}
void show_info(struct utmp *rec)
{
	long time;
	char *dnt;
	time = rec->ut_time;
	dnt = ctime(&time);
	printf("%-10.10s ",rec->ut_user);
	printf("%-10.10s ",rec->ut_line);
	printf("%-15.12s ",dnt+4);
	printf("  (%s)",rec->ut_host);
	printf("\n");
}
