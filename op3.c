// % :- modulus :-- Remainder
#include<stdio.h>
int main(){
  int x = 123;
  int r;
  r = x%10;
  printf("r : %d\n",r);
  x = x/10;
  printf("x : %d\n",x);
  r = x % 10;
  printf("r : %d\n",r);
  return 0;
}
