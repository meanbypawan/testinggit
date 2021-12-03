#include<stdio.h>
void print1to10(){
   static int i=1;
   if(i>10)
     return;
   printf("%d\n",i++);
   print1to10();  

}
int main(){
  //int i=1;
  print1to10();
}
