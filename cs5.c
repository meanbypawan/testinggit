
#include<stdio.h>
/*
  n > 0
  n < 0
  n == 0
*/
int main(){
 int n;
 printf("Enter a number\n");
 scanf("%d",&n);
 if(n > 0)
   printf("Positive\n");
 else
    if(n < 0)
      printf("Negative\n");
    else
      printf("Neither +ve Nor -ve\n");
 
 return 0;
}





