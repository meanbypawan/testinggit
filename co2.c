

#include<stdio.h>
int main(){
  int n;
  printf("Enter  number\n");
  scanf("%d",&n);
  n&1 ? printf("ODD\n") : printf("EVEN\n");
  return 0;
}
