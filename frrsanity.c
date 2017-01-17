#include "types.h"
#include "user.h"
#include "stat.h"

int main (void)
{
 int ChildPid[20];
 int j =0;
 int i =0;
 int ii =0;
 for(j = 0; j<20 ; j++){
  	ChildPid[j] = fork();
	if(ChildPid[j] == 0){
	  for(i =0 ; i<1000 ; i++);
		exit();
	}	
		
}
  for(ii = 0 ; ii<20 ; ii++)
	wait();

	exit();
	return 0;
}
