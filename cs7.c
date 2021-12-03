
/*
  WAP to enter alphabate symbol in uppercase and
  convert it into lowercase letter
*/
#include<stdio.h>
int main(){
  char ch;
  printf("Enter a letter\n");
  scanf("%c",&ch);
  if(ch >='A' && ch <= 'Z'){
    ch += 32;
    printf("ch = %c\n",ch);
  }
  else
    printf("Invalid Input\n");
  
}










