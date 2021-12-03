/* 
  There are 3 representation of integer
   a) decimal (0-9) :---298
   b) octal (0-7) :- 0245
   c) Hexa decimal(0-9 a b c d e f) // \0x345
*/   
#include<stdio.h>
int main(){
  //int x = 0101;
  int x = 0x41;
  printf("Decimal %d\n",x);
  printf("Octal %o\n",x);
  printf("Hexa %x\n",x);
}
