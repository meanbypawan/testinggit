#include<stdio.h>
int main(){
  int x = 20;
  int *p; // Pointer To Integer
  int **q; // Pointer To Pointer To Integer
  p = &x;
  
  printf("Address Of X %p\n",&x);
  printf("Value Of P %p\n",p);
  
  *p = 20;
  printf("x : %d\n",x);
  return 0;
}
