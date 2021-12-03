#include<stdio.h>
void increment(){
  static int x;
  printf("x : %d\n",x);
  x++;
}
int main(){
  increment();
  increment();
  increment();
}
