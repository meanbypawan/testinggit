
#include<stdio.h>
/*
  x = a,e,i,o,u
  
*/
int main(){
  char x;
  printf("Enter A Letter");
  scanf("%c",&x);
  if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
    printf("Vowel\n");
  }  
  else
    printf("Not Vowel\n");
  return 0;
}








