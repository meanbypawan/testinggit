/*
1/2 * b * h
where b and h both are the integer
*/
#include<stdio.h>
int main(){
  int b,h;
  float area;
  printf("Enter value of b & h\n");
  scanf("%d%d",&b,&h);
  area = 1/2.0f*b*h;
  printf("Area : %f\n",area);
}
