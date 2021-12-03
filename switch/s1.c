
#include<stdio.h>
// n :-  1 to 5
int main(){
  int n;
  printf("enter n (1 to 5)\n");
  scanf("%d",&n);
  switch(n){
    case 1: printf("One\n");break;
    case 2: printf("Two\n");break;
    case 3: printf("Three\n");break;
    case 4: printf("Four\n");break;
    case 5: printf("Five\n");break;
    default: printf("Invalid number\n");
  }
  printf("Out Of Switch......\n");
  return 0;
}











