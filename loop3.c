
#include<stdio.h>
int main(){
  int n,i;
  printf("Enter a number\n");
  scanf("%d",&n);
  i = 2;
  while(i<=n/2){
    if(n%i == 0)
      break;
    i++;  
  }
  if(i > n/2 && n > 1)
    printf("Number is prime\n");
  else
    printf("Number is not prime..\n");  
  return 0;
}





