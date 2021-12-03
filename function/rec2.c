#include<stdio.h>
int fact(int);
int main(){
  int n,result;
  printf("Enter A Number\n");
  scanf("%d",&n);
  result = fact(n);
  printf("Result : %d\n",result);
}
int fact(int n){
  static int f=1;
  f = n * f;  
  fact(n-1);
}

