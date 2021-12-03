#include<stdio.h>
int main(){
  int a[] = {10,20,30,40,50};
  int *p;
  p = a;
  
  //++*p; // ++(*p)
  *p++; // p = p + 1 then *p
  printf("Value %d\n",*p);
  return 0;
}
