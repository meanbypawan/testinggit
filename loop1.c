
// WAP to print the reverse of number from 101 to 199
#include<stdio.h>
int main(){
  int n,r,s=0,i=101;
  while(i<=199){
          n = i; // n = 101
          s = 0;
	  while(n!=0){
	    r = n%10;
	    s = s * 10 + r;
	    n = n/10;
	  }
	  // n = 0
	  if(s == i)
	    printf("%d\n",s);
    i++;
  } 
}





