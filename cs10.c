

/*
   WAP to Enter the basic salary of an employee. if basic salary is greater then 10000 then hra = 10%, ta = 5% and da = 3% of basic salary is given to the employee otherwise hra = 5% and ta = 3% of basic salary is given to the employee. Calculate the gross salary
  bs
  if(bs > 100000){
  
  }
  ekse{
  
  
  }
*/
#include<stdio.h>
int main(){
  unsigned int bs;
  float hra=0,ta=0,da=0,gs;
  printf("Enter Basic Salary Of Employee\n");
  scanf("%u",&bs);
  if(bs >10000){
    hra = (bs * 10)/100.0f;
    ta = (bs*5)/100.0f;
    da = (bs*3)/100.0f;
  }
  else{
    hra = (bs * 5)/100.0f;
    ta = (bs*3)/100.0f;
  }
  gs = bs + hra + ta + da;
  printf("HRA : %f\n",hra);
  printf("TA : %f\n",ta);
  printf("DA : %f\n",da);
  printf("Gross Salary : %f\n",gs);
  return 0;
}





























