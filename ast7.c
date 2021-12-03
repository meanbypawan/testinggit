/*
Write a program to input choice from user.
 If user enter ‘+’ as choice then calculate 
 addition of 2 number. If Choice ‘>’ then 
 check which number is greaterst. 
 If choice is ‘=’ then check
  both number is equal or not. 
*/
#include<stdio.h>
int main(){
  int a,b;
  char choice;
  printf("Press + for addition\n");
  printf("Press > for Greater number\n");
  printf("Press = for Checking Equality\n");
  
  printf("Enter 2 number\n");
  scanf("%d%d",&a,&b);
  
  scanf("%c",&choice);
  printf("Please enter your choice\n");
  scanf("%c",&choice); 
  
  
  if(choice == '+'){
     
  } 
  else if(choice == '>'){
  
  }
  else if(choice == '='){
  
  
  }
  else 
    printf("Invalid choice..\n");
  
  return 0;
}












