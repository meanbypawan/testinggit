

#include<stdio.h>
int main(){
  int a,b,c,x;
  printf("Enter 3 number\n");
  scanf("%d%d%d",&a,&b,&c);
  x = (a>b && a>c) ? a : (b>c) ? b : c;
  printf("Greater number is : %d\n",x);
}
