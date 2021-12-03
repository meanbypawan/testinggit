#include<stdio.h>
int sumOfArrayElement(int [],int);

int main(){
  int a[] = {10,20,30,40,50};
  int result = sumOfArrayElement(a,5);
  printf("Sum Of Element : %d\n",result);
}
int sumOfArrayElement(int a[], int n){
  int sum = 0;
  for(int i=0; i<n; i++){
    sum = sum + a[i];
  }
  return sum;
}
