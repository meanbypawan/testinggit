#include<stdio.h>
#include<string.h>
struct Person{
  char name[100];
  long mobile;
  int age;
  float height;
};
int main(){
  char nameList[5][100] = {"Cheeku","Peeku","Rinku","Tinku","Chinku"};
  struct Person p[5];// p[0],p[1]......p[4]
  int i;
  for(i=0;i<5;i++){
   printf("Enter the deatils of %s\n",nameList[i]);
   strcpy(p[i].name,nameList[i]);
   printf("%s Aapka Mobile Number\n",nameList[i]);
   scanf("%ld",&p[i].mobile);
   printf("%s Aapki Age\n",nameList[i]);
   scanf("%d",&p[i].age);
   printf("%s Aapki Height\n",nameList[i]);
   scanf("%f",&p[i].height);
  }
  printf("Details of Persons..............\n");
  for(i=0; i<5; i++){
    printf("Name : %s",p[i].name);
    printf("\nMobile : %ld",p[i].mobile);
    printf("\nAge : %d",p[i].age);
    printf("\nHeight : %.2f\n",p[i].height);
  }
  return 0;
}






