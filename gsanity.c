#include "types.h"
#include "user.h"


int main (void)
{
 printf(1,"father id is %d \n" , getppid());
 sleep(1000);
 int ChildPid = fork();
 int i =0;

 for(i =0 ; i<50 ; i++)
 	printf(1,"process Pid is %d printing %d \n" , getpid(), i);

 if(ChildPid != 0)
	wait();

	exit();
}
