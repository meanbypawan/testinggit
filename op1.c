// Arithmetic Operator (+,-,*,/,%)
/*
  i/i => i
  i/fp => fp(double/float)
  fp/fp => fp
*/
#include<stdio.h>
int main(){
  float x;
  x = 10/3.0f;
  printf("x : %f\n",x); 
  return 0;
}
