// Addition Of 2 number
#include<stdio.h>
int main(){
  signed int a,b,result;
  /*
  printf("Enter first value\n");
  scanf("%d",&a);
  printf("Enter the second value\n");
  scanf("%d",&b);
  */
  printf("Enter 2 number\n");
  scanf("%d%d",&a,&b);
  //printf("Addition : %d\n",(a+b)); 
  result = a + b;
  printf("Addition : %d\n",result);
  return 0;
}
