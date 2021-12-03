#include<stdio.h>
void copyString(char s2[],char s1[]){
  for(int i=0;s1[i]!='\0';i++)
    s2[i] = s1[i];
  s2[i] = '\0';
}
int main(){
  char s1[100],s2[100];
  printf("Enter A String\n");
  scanf("%s",s1);
  
  copyString(s2,s1);
  
  printf("S2 : %s\n",s2);
}
