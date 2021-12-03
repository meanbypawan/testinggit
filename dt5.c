#include<stdio.h>
// 3.12, -0.5
// float, double
//  4   ,  8
/*
   3.14 , 3.14f

   int : -- signed, unsigned, long
   signed int;
   long int;
   unsigned int;
   long double;
   unsigned float : // invalid
   unsigned double: // invalid
   
*/ 
int main(){
 long double x;
 //long float y;
 //unsigned long double z;
 x = 3.4;
 printf("x : %LF\n",x);
 printf("x : %d",sizeof(x)); 
 return 0;
}
