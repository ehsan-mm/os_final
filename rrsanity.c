
#include "types.h"
#include "user.h"
#include "stat.h"

int main (void)
{
  int ChildPid[10] ;
  int wTime[10] ;
  int rTime[10];
  int i = 0 ;
  int ii=0 ;
  int iii=0 ;
  int j=0;

  for(j=0 ; j<10 ; j++){
	ChildPid[j] = fork();
	if(ChildPid[j] == 0){
		for(i=0 ; i<1000 ; i++)
			printf(1 , "Child %d prints for the %d time. \n" , getpid() , i);
	exit();
	}	
	}
	
  for(ii=0; ii<10 ; ii++)
	getperf(&wTime[ii] , &rTime[ii]);

  for(iii=0 ; iii<10 ; iii++)
	printf(1 , "wTime is %d. rTime is %d , turnaroundtime : %d \n" , wTime[iii] , rTime[iii] , wTime[iii]+rTime[iii]);
	
	exit();
	return 0;
}

