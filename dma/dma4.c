#include<stdio.h>
#include<stdlib.h>
int main(){
  char *p = (char *)malloc(3*sizeof(char));
  *(p+0) = 'A';
  *(p+1) = 'B';
  *(p+2) = 'C';
  p = (char *)realloc(p,5*sizeof(char));
  *(p+3) = 'D';
  *(p+4) = 'E';
  
  for(int i=0; i<5; i++)
    printf("%c\n",*(p+i));

  free(p);
}




