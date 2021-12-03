#include<stdio.h>
#include<stdlib.h>
int m1(){
  int *p = (int *)malloc(sizeof(int));
  /*
    -----
    -----
  */
  return 10;
}
int main(){
  m1();
}
