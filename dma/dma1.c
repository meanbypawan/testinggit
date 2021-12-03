#include<stdio.h>
#include<stdlib.h>
int main(){
  /*
  int *p = (int *) malloc(5*sizeof(int));
  int *q = (int *) malloc(sizeof(int));
  int *r = (int *) malloc(sizeof(int));
  */
  int *p = (int *) calloc(1,sizeof(int));
  int *q = (int *) calloc(1,sizeof(int));
  int *r = (int *) calloc(1,sizeof(int));
  printf("Enter First Number\n");
  scanf("%d",p);
  printf("Enter Second Number\n");
  scanf("%d",q);
  *r = *p + *q;
  printf("Result : %d\n",*r);
  free(p);
  free(q);
  free(r);  
}
