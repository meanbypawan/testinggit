
#include<stdio.h>
int main(){
  int n,i;
  printf("enter limit of array\n");
  scanf("%d",&n);
  
  float arr[n];
  for(i=0; i<n; i++){
    printf("Enter element\n");
    scanf("%f",&arr[i]);
  }
  printf("Data..........................\n");
  for(i=0; i<n; i++){
    printf("%f\n",arr[i]);
  }  
}















