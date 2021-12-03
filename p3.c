// Test Escape Sequence Character
#include<stdio.h>
int main(){
 //printf("ABCDEFGH\b\bIJ\n");
 printf("ABCDEFGH\rIJ");
 printf("\n");
 printf("hello\a\n");
 return 0;
}
