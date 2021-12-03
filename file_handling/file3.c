#include<stdio.h>
int main(){
   FILE *fp=NULL;
   char data[2000];
   char x;
   // opening file in read mode
   fp = fopen("file3.c","r");
   if(fp == NULL){
     printf("File Not Found..\n");
   }
   else{
     x = fgetc(fp);          
     while(x!=EOF){
        printf("%c",x);
        x = fgetc(fp);
     }
     fclose(fp);
   }
}

