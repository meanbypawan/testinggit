#include<stdio.h>
int main(){
  int a[] = {10,20,30,40,50};
  int *p;
  //p = &a[0];
  p = a;
  printf("Before p : %p\n",p);
  for(int i=0; i<5; i++)
  {
     printf("%d\n",*(p+i));
     //printf("Cuurent position of p : %p\n",p);
  }
  printf("After p : %p\n",p);
}
