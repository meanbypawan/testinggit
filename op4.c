/*
  Increment (++) :- It is unary operator.
  
  Two types of Increment :-
    int x = 10;
    
    1) Pre-increment(++x) :-
    2) Post-increment(x++)
*/
#include<stdio.h>
int main(){
  int a,b,c,d;
  a = 10;
  b = 15;
  c = 12;
  d = 30;
  a = ++c;
  c = c++;
  a = ++a;
  d = b++;
  b = c++;
  printf("a = %d\n",a);
  printf("b = %d\n",b);
  printf("c = %d\n",c);
  printf("d = %d\n",d);
  
  return 0;
}
