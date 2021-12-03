#include<stdio.h>
#define MAX 12
int main(){
  int a[] = {1,-2,10,-20,-30,-40,50,-60,100,60,70,-70};
  int i,temp,j,k;
  for(i=0; i<MAX;i++)
    printf("%d\t",a[i]);
  
  for(i=0;i<MAX; i++){
     if(a[i]<0){
       for(j=i+1;j<MAX; j++){
         if(a[j]>0){
           for(k=j;k>i;k--){
             temp = a[k];
             a[k] = a[k-1];
             a[k-1] = temp;
           }
           break;
         }
       }
     }
  }
  printf("\n");
  for(i=0; i<MAX;i++)
    printf("%d\t",a[i]);
  printf("\n");
}














