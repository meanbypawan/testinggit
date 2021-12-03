#include<stdio.h>

int main(){
  struct Student{
   int roll;
   char name[100];
   char course[100];
   int age;
  };
  struct Student s1;
  //printf("Size of s1 : %d\n",sizeof(s1));
  printf("Enter Roll Number\n");
  scanf("%d",&s1.roll);
  getchar();
  printf("Enter Name\n");
  fgets(s1.name,100,stdin);
  printf("Enter Course\n");
  scanf("%s",s1.course);
  printf("Enter Age\n");
  scanf("%d",&s1.age);
  
  printf("Roll Number : %d\n",s1.roll);
  printf("Name :  %s\n",s1.name);
  printf("Course : %s\n",s1.course);
  printf("Age : %d\n",s1.age);
  return 0;
}
