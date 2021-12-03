
#include<stdio.h>
int main(){
  int i,j,star;
  for(i=1; i<=5; i++){
    for(star=1; star<=9-i; star++)
     printf("*");
    for(j=1; j<=i;j++)
      printf("%d*",i);
    
    for(star=1; star<=8-i; star++)
      printf("*");
    printf("\n");  
  }
}
