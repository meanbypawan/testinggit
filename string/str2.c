#include<stdio.h>
int main(){
  /*char s[] = {'H','E','L','\n','L','O','\0'};
   printf("%s\n",s);
  */
  /*
   char s[100] = "hello World";
   printf("%s\n",s);
  */
  char *p = "hello";
  printf("%s\n",p);
  
  printf("Point Point To %c\n",*(p+2));
}




