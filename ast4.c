
// input :-- day number
/*
  n = 1,,2,3,4,5,6,7
*/
#include<stdio.h>
int main(){
  int n;
  printf("Enter Day Number(1-7)\n");
  scanf("%d",&n);
  if(n == 1)
   printf("MON...\n");
  else if(n == 2)
   printf("TUE...\n");
  else if(n == 3)
   printf("WED...\n");
  else if(n == 4)
   printf("THU...\n");
  else if(n == 5)
   printf("FRI...\n");
  else if(n == 6)
   printf("SAT...\n");
  else if(n == 7)
   printf("SUN...\n");
  else
   printf("Invalid Input..\n")
  return 0;
}


















