#include<stdio.h>
void add();
void add(){
  int a,b,c;
  printf("Enter value of a\n");
  scanf("%d",&a);
  printf("Enter value of b\n");
  scanf("%d",&b);
  c = a + b;
  printf("Result : %d\n",c);

}
int main(){
  add();
  add();
  add();
}





