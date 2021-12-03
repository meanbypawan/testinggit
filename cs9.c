
#include<stdio.h>
int main(){
 float c,cpp,java,angular,android,per;
 printf("Enter C Marks");
 scanf("%f",&c);
 
 printf("Enter CPP Marks");
 scanf("%f",&cpp);
 
 printf("Enter JAVA Marks");
 scanf("%f",&java);
 
 printf("Enter ANGULAR Marks");
 scanf("%f",&angular);
 
 printf("Enter ANDROID Marks");
 scanf("%f",&android); 
 
 per = (c+cpp+java+angular+android)/5;
 /*
   per >=60 ---> 1
   per>=50 && per <=59 ---> 2
   per>=33 && per<=49 -----> 3
   fail
 */
 if(per>=60)
   printf("Pass With First Division\n");
 else{
   if(per>=50 && per<=59)
    printf("Pass With Second Division\n");
   else{
     if(per>=33 && per<=49)
       printf("Pass With Third Division\n");
     else
       printf("Failed.....\n");
   }  
 }  
 return 0;
}







 
 
 
 
 
 
