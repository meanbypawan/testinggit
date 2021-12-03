// Calculate Percentage
// Input :-- Marks of 5 subject
#include<stdio.h>
int main(){
  float c,cpp,java,angular,html,per;
  
  printf("Enter C Marks\n");
  scanf("%f",&c);
  
  printf("Enter Cpp Marks\n");
  scanf("%f",&cpp);
  
  printf("Enter Java Marks\n");
  scanf("%f",&java);
  
  printf("Enter Angular Marks\n");
  scanf("%f",&angular);
  
  printf("Enter HTML Marks\n");
  scanf("%f",&html);
  
  per = (c+cpp+java+angular+html)/5;
  
  printf("-------------------------------\n");
  printf("Percentage Obtained : %f%\n",per);
  printf("-------------------------------\n");
  return 0;
} 
