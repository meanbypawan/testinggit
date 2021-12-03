#include<stdio.h>
int main(){
  int a = 20; // 4 byte
  float b = 20.4; // 4 byte
  double c = 1.4; // 8 byte
  char d = 'A'; // 1 byte
  long int e = 213;
  unsigned int f = 211;
  
  printf("int : %d\n",sizeof(a));
  printf("float : %d\n",sizeof(b));
  printf("double : %d\n",sizeof(c));
  printf("char : %d\n",sizeof(d));
  printf("long int : %d\n",sizeof(e));
  printf("unsigned : %d\n",sizeof(f));
  return 0; 
}
