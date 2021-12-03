#include<stdio.h>
#include<stdlib.h>
int main(){
  float *p = (float *)malloc(sizeof(float));
  float *q = (float *)malloc(sizeof(float));
  
  *p = 20;
  *q = 10;
  printf("Result : %f\n",(*p+*q));
  free(p);
  free(q);
}
