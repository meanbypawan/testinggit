#include<stdio.h>
#include<string.h>
int main(){
  char s[100];
  int x;
  printf("Enter A String\n");
  scanf("%s",s);
  x = strlen(s);
  printf("Length : %d\n",x);
}

