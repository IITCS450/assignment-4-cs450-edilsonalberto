#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
  printf(1, "testnull: about to dereference NULL\n");
  char *p = 0;
  printf(1, "read: %d\n", *(int*)p);
  printf(1, "UNEXPECTED: should not reach here\n");
  exit();
}