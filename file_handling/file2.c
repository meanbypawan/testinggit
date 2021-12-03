#include<stdio.h>
int main(){
   FILE *fp=NULL;
   char data[2000];
   // opening file in append mode
   fp = fopen("demo.txt","a");
   if(fp == NULL){
     printf("Unable to create file...");
   }
   else{
     printf("Enter Some Text....\n");
     fgets(data,2000,stdin);
     fprintf(fp,"%s",data);
     printf("Data saved into the file..");
     fclose(fp);
   }
}
