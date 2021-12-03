#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;
  printf("How many you want stored...\n");
  scanf("%d",&n);
  //float *p = (float *)malloc(n*sizeof(float));
  float *p = (float *)calloc(n,sizeof(float));
  printf("Enter %d element\n",n);
  for(int i=0; i<n; i++)
    scanf("%f",p+i);
    
  printf("Data is...\n");
  for(int i=0; i<n; i++)
    printf("%f\n",*(p+i));  
  
  free(p);
}
