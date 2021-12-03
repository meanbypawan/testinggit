
#include<stdio.h>
int main(){
  int a[] = {1,2,2,3,4,5};
  int b[] = {2,4,6,7};
  int uni[10]={0},inter[4];
  // union :- 1,2,3,4,5,6,7
  // intersec. :- 2,4
  int i,element,j,k=0;
  for(i=0; i<6; i++){
     element = a[i];
     for(j=0;j<10; j++){
       if(uni[j] == element)
         break; 
     }
     if(j>=10)
       uni[k++] = element;
  }
  for(i=0; i<4; i++){
     element = b[i];
     for(j=0;j<k; j++){
       if(uni[j] == element)
         break; 
     }
     if(j>=k)
       uni[k++] = element;
  }
  printf("\nUnion\n");
  
  for(i=0; i<k; i++)
    printf("%d\t",uni[i]);
  
  printf("\n");  
}







