#include<stdio.h>
int main(){
  /*
  char s[] = "HELLO";
  printf("Before %s\n",s);
  s[1] = 'A';
  printf("After %s\n",s);
  */
  char *p = "HELLO";
  *(p+1) = 'A';
  printf("%s",p);
}




