#include<stdio.h>
int main(){
   FILE *fp=NULL;
   int id;
   char name[100];
   float price;
   fp = fopen("product.txt","r");
   if(fp!=NULL){
     while(fscanf(fp,"%d %s %f",&id,name,&price)!=EOF){
       printf("%d %s %f\n",id,name,price);
     }
     fclose(fp);
   }
}

