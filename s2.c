
#include<stdio.h>
// x : volwel(a,e,i,o,u)
int main(){
  char ch;
  printf("Enter A Character..\n");
  scanf("%c",&ch);
  switch(ch){
    case 'a' : printf("Vowel\n");break;
    case 'e' : printf("Vowel\n");break;
    case 'i':printf("Vowel\n");break;
    case 'o':printf("Vowel\n");break;
    case 'u':printf("Vowel\n");break;
    default : printf("Not a Vowel...\n");
  }
  return 0;
}











