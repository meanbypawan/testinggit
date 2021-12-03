#include<stdio.h>
// Calculate area of circle
// pi * r * r
int main(){
  float radius,area;
  
  printf("Enter radius\n");
  scanf("%f",&radius);
  
  area = 3.14f * radius * radius;
  // area = 3.14 * radius * radius;
  printf("Area of Circle : %.2f\n",area);
  return 0;
}
