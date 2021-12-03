#include<stdio.h>

int main(){
  typedef struct Student{
   int roll;
   char name[100];
   char course[100];
   int age;
  }stud;
  stud s1[5];
  //printf("Size of s1 : %d\n",sizeof(s1));
  for(int i=0; i<5; i++){
   printf("Enter Roll Number\n");
   scanf("%d",&s1[i].roll);
   getchar();
   printf("Enter Name\n");
   //fgets(s1[i].name,100,stdin);
   scanf("%s",s1[i].name);
   printf("Enter Course\n");
   scanf("%s",s1[i].course);
   printf("Enter Age\n");
   scanf("%d",&s1[i].age);
  }
  for(int i=0; i<5; i++){
    printf("%d\t%s\t%s\t%d\n",s1[i].roll,s1[i].name,s1[i].course,s1[i].age);
  }
  return 0;
}
