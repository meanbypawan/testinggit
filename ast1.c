/*
W.A.P to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit. For given problem you have to take choice from user. If user enter choice ‘c’ or ‘C’ then convert Fahrenheit to Celsius. If user enter choice ‘f’ or ‘F’ then conver Celsius to Fahrenheit.
*/
#include<stdio.h>
int main(){
  float temperature;
  char choice;
  printf("Enter Choice (C|F)\n");
  scanf("%c",&choice);
  
  // (32°F − 32) × 5/9 = 0°C
  if(choice == 'c' || choice == 'C'){
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&temperature);
    temperature = (temperature-32)*5/9.0f;   
    printf("Temperature In Celsuis : %f\n",temperature); 
  }
  else if(choice == 'f' || choice == 'F'){
    printf("Enter temperature in Celsuis\n");
    scanf("%f",&temperature);
    temperature = (temperature*9/5.0f)+32;
    printf("Temperature In Far : %f\n",temperature);
  }
  else
    printf("Invalid choice");
}









