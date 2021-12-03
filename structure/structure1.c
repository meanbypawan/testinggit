#include<stdio.h>
struct Person{
  char name[100];
  long mobile;
  int age;
  float height;
};
int main(){
  struct Person p;
  printf("Aapka Naam\n");
  //gets(p.name);
  //scanf("%s",&p.name);
  fgets(p.name,100,stdin);
  printf("Aapka Mobile Number\n");
  scanf("%ld",&p.mobile);
  printf("Aapki Age\n");
  scanf("%d",&p.age);
  printf("Aapki Height\n");
  scanf("%f",&p.height);
  printf("Ye dheko aapki details....\n");
  printf("Name : %s",p.name);
  printf("\nMobile : %ld",p.mobile);
  printf("\nAge : %d",p.age);
  printf("\nHeiht : %.2f\n",p.height);
  return 0;
}






