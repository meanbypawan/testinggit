#include<stdio.h>
int main(){
  int a=20;
  float b = 5.5f;
  
  void *p;
  p = &a;
  
  printf("Value Of a %d\n",*(int *)p); 
  p = &b;
  printf("Value Of b %f\n",*(float *)p);
  
  p = &a;
  printf("Value Of a %d\n",*(int *)p);
  return 0;
}




