#include<stdio.h>
void abc(){
  printf("abc-called....\n");
}
void pqr(){
  printf("pqr-called....\n");
}
void xyz(){
  printf("xyz -called...\n");
}

int main(){
   printf("Main started...\n");
   abc();
   pqr();
   printf("hello..\n");
   xyz();
   printf("Main end...\n");
   return 0;
}









