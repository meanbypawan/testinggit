#include<stdio.h>
int main(){
  auto int x = 100;
  {
    auto int y = 200;
    printf("y : %d\n",y);
  }
  //printf("y : %d\n",y);
  printf("x : %d\n",x);
}
