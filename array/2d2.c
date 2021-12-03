// int a[] = {10,20,30,40,50};
#include<stdio.h>
int main(){
  int a[][] = {
   {10,20},
   {40,50,60},
   {70,80,90}
  };
  int r,c;
  printf("Given Matrix...\n");
  for(r=0; r<3; r++){
    for(c=0; c<3; c++){
      printf("%4d",a[r][c]);
    }
    printf("\n");
  }
}
