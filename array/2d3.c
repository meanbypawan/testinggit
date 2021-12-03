#include<stdio.h>
int main(){
  int m,n;
  printf("Enter order of matrix\n");
  scanf("%d%d",&m,&n);
  int a[m][n];
  int r,c;
  printf("Enter %dx%d matrix\n",m,n);
  for(r=0; r<m; r++){
    printf("Enter %d element of %d row\n",n,(r+1));
    for(c=0;c<n; c++){
      scanf("%d",&a[r][c]);
    }
  }
  printf("Row wise Matix...\n");
  for(r=0; r<m; r++){
    for(c=0;c<n; c++){
      printf("%4d",a[r][c]);
    }
    printf("\n");
  } 
  printf("Column wise Matix...\n");
  for(c=0; c<n; c++){
    for(r=0;r<m; r++){
      printf("%4d",a[r][c]);
    }
    printf("\n");
  }   
}
