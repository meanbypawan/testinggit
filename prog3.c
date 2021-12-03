#include<stdio.h>
// simple interse
int main(){
  //int si,rate,time,prinicipal;
  float si,rate,time,prinicipal;
  printf("Enter Principal Amount\n");
  scanf("%f",&prinicipal);
  
  printf("Enter Rate \n");
  scanf("%f",&rate);
  
  printf("Enter Time\n");
  scanf("%f",&time);
  
  si = (prinicipal*rate*time)/100;
  printf("Simple Interse : %f",si); 
  return 0;
}
