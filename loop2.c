
// WAP to print the reverse of number from 101 to 199
#include<stdio.h>
int main(){
  int n,r,s=0,i=101;
  while(i<=999){
     n = i;
     while(n!=0){
      r = n%10;
      s = s + r*r*r;
      n = n/10;
     }
     if(s == i)
      printf("%d\n",i);
     i++;
     s = 0;
  } 
}





