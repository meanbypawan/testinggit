/*
 Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
int main(){
  int totalUnit,x;
  float billAmount=0;
  printf("Enter Total Unit of Bill\n");
  scanf("%d",&totalUnit);
  // totalUnit = 220
  if(totalUnit >250){
    x = totalUnit - 250;
    totalUnit = totalUnit - x;
    billAmount = x*1.50;  
  }
  if(totalUnit>=151 && totalUnit<=250){
    x = totalUnit - 150;
    totalUnit = totalUnit - x;
    billAmount = billAmount + (x*1.20);
  }
  if(totalUnit>=51 && totalUnit<=150){
    x = totalUnit - 50;
    totalUnit = totalUnit - x;
    billAmount = billAmount + (x*0.75);
  }
  if(totalUnit<=50){
    billAmount = billAmount + (0.50)*totalUnit;
  }
  billAmount = billAmount + (billAmount*20)/100;
  printf("Total Bill : %f\n",billAmount);
  return 0;
}











