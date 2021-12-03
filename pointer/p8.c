#include<stdio.h>
void exchange(int *, int *);
int main(){
  int a,b;
  printf("Enter 2 number\n");
  scanf("%d%d",&a,&b);
  printf("Before Swapping a : %d, b : %d\n",a,b);
  exchange(&a,&b);
  printf("After Swapping a : %d, b : %d\n",a,b);
}
void exchange(int *p, int *q){
  *p = *p + *q;
  *q = *p - *q;
  *p = *p - *q;
}






