/*
  * * * * * * * * * * *
   *0 9 8 7 6 5 4 3 2*
    * * * * * * * * *
     * * * * * * * *
      * * * * * * *
       * * * * * *
        * * * * *
         * * * *
          * * *
           * *
            *  
*/
#include<stdio.h>
int main(){
  int i,j,space,row=11;
  
  for(i=1; i<=row; i++){
  
    for(space=1; space<i; space++)
      printf(" "); 
  
    for(j=row; j>=i; j--){
      if(j==row ||  i == 1 || i==j )
        printf("* ");
      else
        printf("  ");  
    }
     
     
    printf("\n"); 
  }
}












