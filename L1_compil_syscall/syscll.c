#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main()
{
	short rev;
	char str[]= "system programing\n";
	rev = syscall(1,1,str,sizeof(str));
	return rev;
}
