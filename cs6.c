
#include<stdio.h>
/*
  A - Z
  a - Z
  $%@123
*/
int main(){
 char ch;
 printf("Enter A Character\n");
 scanf("%c",&ch);
 if(ch >= 65 && ch <= 90)
   printf("Uppercase Letter\n");
 else{
   if(ch >= 97 && ch <= 122)
     printf("Lowercase Letter\n");
   else
     printf("Not Alphabate Leter\n");   
 }  
 return 0;
}





