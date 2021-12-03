#include<stdio.h>
int main(){
  int x;
  /*
    size of x : 4 byte = 32 bit
    -2^31   to  2^31 - 1
    -2147483648  to 2147483647
  */
  
  x = 2147483647;
  x = x + 2000;
  printf("x = %d",x);
  return 0;
}
