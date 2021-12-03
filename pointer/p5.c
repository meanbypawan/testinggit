#include<stdio.h>
int main(){
  int *p;
  float *q;
  char *r;
  void *l;
  
  printf("Size of P : %lu\n",sizeof(*p));
  printf("Size of Q : %lu\n",sizeof(q));
  printf("Size of R : %lu\n",sizeof(r));
  printf("Size of R : %lu\n",sizeof(l));
  return 0;
}




