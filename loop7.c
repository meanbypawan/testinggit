
#include<stdio.h>
int main(){
  int i=1;
  do{
    if(i==6 || i == 3 || i == 9)
     continue;
    printf("%d\n",i);
     
  }while(++i<=10);
}






