#include<stdio.h>
int main(){
  char ch;
  printf("Enter A Charachter\n");
  scanf("%c",&ch);
  
  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    printf("Alphabate....\n");
  else
    printf("Not an alphabate....\n");  
}
