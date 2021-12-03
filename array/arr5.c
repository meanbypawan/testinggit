
#include<stdio.h>
#define MAX 5
int main(){
  int a[MAX],i;
  for(i=0; i<=MAX; i++){
    printf("Enter %d element\n",(i+1));
    scanf("%d",&a[i]);
  }
  
  for(i=0; i<=MAX; i++){
    printf("%d\t",a[i]);
  }
  printf("\n");
}



