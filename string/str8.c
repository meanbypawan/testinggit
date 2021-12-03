#include<stdio.h>
#include<string.h>
char* toUpperCase(char []);

int main(){
  char s1[100];
  char *p;
  printf("Enter A String In LowerCase\n");
  scanf("%s",s1);
  p = toUpperCase(s1);
  printf("Upper Case : %s\n",p);
}
char* toUpperCase(char s1[]){
   static char result[100];
   int i;
   for(i=0; s1[i]!='\0'; i++){
     if(s1[i]>='a' && s1[i]<='z'){
       result[i] = s1[i] - 32;
     }
     else
       result[i] = s1[i];
   }
   result[i] = '\0';
   return result;
}






