
#include<stdio.h>
// Traingle : -- a,b,c
/*
Isosceles triangle: In geometry, an isosceles triangle is a triangle
 that has two sides of equal length.

Equilateral triangle: In geometry, an equilateral
 triangle is a triangle in which all three sides are equal.

Scalene triangle: A scalene triangle is a 
triangle that has three unequal sides.
*/
int main(){
  unsigned int a,b,c;
  printf("Enter the length of first side\n");
  scanf("%u",&a);
  
  printf("Enter the length of second side\n");
  scanf("%u",&b);
  
  printf("Enter the length of third side\n");
  scanf("%u",&c);
  // condition for checking isoscles traingle
  if((a == b) && (a == c)){
    printf("Equilateral Traingle\n");
  }
  else if(a==b || a == c || b == c)
         printf("Isoscles Traingel\n");
       else
         printf("Scalen Traingle\n");  
  
}










