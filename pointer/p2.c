#include<stdio.h>
int main(){
  int a,b,c;
  int *p,*q,*r;
    
  p = &a;
  q = &b;
  r = &c;  
  printf("Enter Two Number");
  scanf("%d%d",p,q);
  *r = *p + *q;
  printf("Addition : %d",*r); 
}
