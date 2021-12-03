// % :- modulus :-- Remainder
#include<stdio.h>
int main(){
  
  printf("5%2 = %d\n",(5%2)); // 1
  printf("4%2 = %d\n",(4%2)); // 0
  printf("-5%2 = %d\n",(-5%2)); // -1
  printf("5%-2 = %d\n",(5%-2)); // 1
  printf("-5%-2 = %d\n",(-5%-2));
  printf("2%5 = %d\n",(2%5));
  printf("0%5 = %d\n",(0%5));
  printf("-0%5 = %d\n",(-0%5));
  //printf("5%0 = %d\n",(5%0));
  return 0;
}
