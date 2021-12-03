




#include<stdio.h>
int main(){
  int a = 20, *p;
  
  p = &a;
  printf("a ka address %p\n",&a);
  printf("p ki value %p\n",p);
  printf("a ki value : %d\n",a);  
  printf("a ki value by p %d\n",*p);
  return 0;
}





