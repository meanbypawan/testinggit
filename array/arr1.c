
#include<stdio.h>
int main(){
  int a[5],sum=0; // 0----------------4
            // a[0], a[1]-------a[4]
  int index;
  for(index=0; index<5; index++){
    printf("Enter %d element\n",(index+1));
    scanf("%d",&a[index]);
  }
  for(index =0; index <5; index++){
    sum = sum + a[index];
    printf("%d\n",a[index]);
  }
  printf("Sum : %d\n",sum);
  return 0;
}







