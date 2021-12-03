#include<stdio.h>
int main(){
  int a,b,c;
  int *p = &a,*q = &b,*r = &c;
  
  printf("Enter 1st number\n");
  scanf("%d",p);

  printf("Enter 2nd number\n");
  scanf("%d",q);
  
  *r = *p + *q;
  printf("Addition : %d\n",*r); 
}

