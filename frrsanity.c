#include "types.h"
#include "user.h"
int main (void)
{
 int ChildPid[20];
 for(int j = 0; j<20 ; j++){
  	ChildPid[j] = fork();
	if(ChildPid[j] == 0){
	  for(int i =0 ; i<1000 ; i++);
		exit();
	}	
		
}
  for(int i = 0 ; i<20 ; i++)
	wait();

	exit();
	return 0;
}
