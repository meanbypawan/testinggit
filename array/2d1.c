#include<stdio.h>
/*
   10 20 30
   40 50 60
   70 80 90
   ------------------
   00 01 02
   10 11 12
   20 21 22
*/
int main(){
  int a[3][3];
  int r,c;
  printf("Enter Matrix of (3x3)\n");
  for(r=0; r<3; r++){
    printf("Enter 3 element of %d row\n",(r+1));
    for(c=0; c<3; c++){
      scanf("%d",&a[r][c]);
    }
  }
  for(r=0; r<3; r++){
    for(c=0; c<3; c++){
      printf("%-4d",a[r][c]);
    }
    printf("\n");
  }
  return 0;
}












