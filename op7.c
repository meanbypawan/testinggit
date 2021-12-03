c#include<stdio.h>
int main(){
   int a,b,c,d,x;
   a = 10; b = 20; c = 30; d = 40;
   x = (a>b)&&(++c<d)||(++a<b);
   printf("a : %d\n",a);
   printf("b : %d\n",b);
   printf("c : %d\n",c);
   printf("d : %d\n",d);
   printf("x : %d\n",x);
   return 0;
}
