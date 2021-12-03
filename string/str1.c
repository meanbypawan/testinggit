#include<stdio.h>
int main(){
  char s[100];
  printf("Enter A String\n");
  //scanf("%s",s);
  scanf("%[^\n]%*c",s);
  //fgets(s,100,stdin)==NULL;
  //printf("%s",s);
  printf("%s Hello",s);
}
