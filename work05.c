#include <stdio.h>

int main(){
  char c = 'a';
  int x = 2;
  long y = 3000000;

  char* cPointer = &c;
  int* xPointer = &x;
  long* yPointer = &y;

  printf("%c, %d, %ld \n", c, x, y);
  printf("address of %c is %p, address of %d is %p, address of %ld is %p \n", c, &c, x, &x, y, &y);
}
