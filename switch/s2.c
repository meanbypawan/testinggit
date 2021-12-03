
#include<stdio.h>
// x : volwel(a,e,i,o,u)
int main(){
  char ch;
  printf("Enter A Character..\n");
  scanf("%c",&ch);
  switch(ch){
    case 'a' : 
    case 'A':
    case 'e' : 
    case 'i' : 
    case 'o' : 
    case 'u' : printf("Vowel\n");break;
    default  : printf("Not a Vowel...\n");
  }
  return 0;
}











