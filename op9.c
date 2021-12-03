#include<stdio.h>
int main(){
   int i=3;
   int j;
   j = ++i + ++i;
   printf("i=%d j=%d\n",i,j); 
   return 0;
}
