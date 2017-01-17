#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
  printf(1,"process id of parent is: %d \n", getppid());
  exit();
}
