
#include "types.h"
#include "user.h"
int main (void)
{
int ChildPid[10] , wTime[10] , rTime[10];
  for(int j=0 ; j<10 ; j++){
	ChildPid[j] = fork();
	if(ChildPid[j] == 0){
		for(int i =0 ; i<10 ; i++)
			printf(1 , "Child %d prints for the %d time. \n" , getpid() , i);
	exit();
	}	
}
	
  for(int i = 0 ; i<5 ; i++)
	wait2(&wTime[i] , &rTime[i]);

  for(int i = 0 ; i<5 ; i++)
	printf(1 , "wTime is %d. rTime is %d , turnaroundtime : %d \n" , wTime[i] , rTime[i] , wTime[i]+rTime[i]);
	
	exit();
	return 0;
}

