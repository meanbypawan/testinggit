
#include<stdio.h>
int main(){
  int n,i;
  printf("Kitne element insert karna hai please enter\n");
  scanf("%d",&n);
  
  int a[n];
  printf("Enter %d element one by one\n",n);
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    
  printf("----------------------------\n");    
  for(i=0; i<n; i++)
    printf("%d\n",a[i]);
}















