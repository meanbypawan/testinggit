#include<stdio.h>
int x = 100;
void f1();
void f2();
void f3();
int main(){
   f1();
   f2();
   f3();
   printf("Finally x is %d\n",x);
}
void f1(){
   printf("x in f1 : %d\n",x);
   x = x + 10;
}
void f2(){
   printf("x in f2 : %d\n",x);
   x = x + 10;
}
void f3(){
   printf("x in f3 : %d\n",x);
   x = x + 10;
}
