#include <stdio.h>

int main(){
   //1.
  char c = 'a';
  int x = 2;
  long y = 3000000;

  //2.
  printf("address of %c is %x, address of %d is %x, address of %ld is %x \n", c, &c, x, &x, y, &y);
  //The addresses seem to be the same except only the last number of the sequence
  //all are 6b6fd05 and then a diff last number

  //3.
  char* cPtr = &c;
  int* xPtr = &x;
  long* yPtr = &y;

  //4.
  printf("pointer of %c is %p, pointer of %d is %p, pointer of %ld is %p \n", c, cPtr, x, xPtr, y, yPtr);

  //5.
  *cPtr = 'b';
  *xPtr = 5;
  *yPtr = 2000000;
  printf("new value of c is %c, new value of x is %d, new value of y is %ld \n", c, x, y);

  //6.
  unsigned int g = 100;
  char* gPtr = &g;
  int* gPtrB = &g;

  //7.
  printf("gPtr: %p gPtr points to: %c \n", &gPtr, *gPtr);
  printf("gPtrB: %p gPtrB points to: %d \n", &gPtrB, *gPtrB);

  //8.
  printf("decimal is %u, hex is %x \n", g, g);

  //9.
  printf("decimal bytes of %u: %hhu %hhu %hhu %hhu \n", g, gPtr, gPtr+1, gPtr+2, gPtr+3);
  printf("hex bytes of %u: %hhx %hhx %hhx %hhx \n", g, gPtr, gPtr+1, gPtr+2, gPtr+3);

  //10.
  int i;
  for (i = 0; i < 4; i++) {
     *(gPtr + i) += 1;
     printf("decimal is %u, hex is %x \n", *gPtrB, *gPtrB);
   }
   gPtr = &*gPtrB;
   printf("decimal bytes of %u: %hhu %hhu %hhu %hhu \n", g, gPtr, gPtr+1, gPtr+2, gPtr+3);
   printf("hex bytes of %u: %hhx %hhx %hhx %hhx \n", g, gPtr, gPtr+1, gPtr+2, gPtr+3);

   //11.
   for (i = 0; i < 4; i++) {
      *(gPtr + i) += 16;
      printf("decimal is %u, hex is %x \n", *gPtrB, *gPtrB);
    }
    gPtr = &*gPtrB;
    printf("decimal bytes of %u: %hhu %hhu %hhu %hhu \n", g, gPtr, gPtr+1, gPtr+2, gPtr+3);
    printf("hex bytes of %u: %hhx %hhx %hhx %hhx \n", g, gPtr, gPtr+1, gPtr+2, gPtr+3);
}
