#include<stdio.h>
union Student{
  int roll;
  char gender;
  float height;
  //char name[100];
};
int main(){
  union Student s1;
  s1.roll = 1001;
  printf("Roll : %d\n",s1.roll);
  
  s1.gender = 'M';
  printf("Gender : %c\n",s1.gender);
  
  s1.height = 6.0;
  printf("Height : %f\n",s1.height);
}
