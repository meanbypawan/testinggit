
#include<stdio.h>
int main(){
  int n;
  printf("enter a number...\n");
  scanf("%d",&n);
  switch(n){
     case 0: printf("Even\n");break;
     case 1: printf("Odd\n");break;
     default:printf("hello...");
     
  }
  return 0;
}
