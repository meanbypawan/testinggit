#include<stdio.h>
#include<string.h>
int main(){
  char s1[100],s2[100];
  int x;
  printf("Enter 1st String\n");
  scanf("%s",s1);
  printf("Enter 2nd String\n");
  scanf("%s",s2);
  x = strcmp(s1,s2); // x : 0, +, -
  if(x == 0)
    printf("%s equals to %s\n",s1,s2);
  else if(x > 0)
         printf("%s greater then %s\n",s1,s2);
       else
         printf("%s less then %s\n",s1,s2);
}
