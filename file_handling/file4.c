#include<stdio.h>
int main(){
   FILE *fp=NULL;
   int id;
   char name[100];
   float price;
   char choice;
   
   fp = fopen("product.txt","a");
   if(fp!=NULL){
    printf("To Stored the data press Y/y\n");
    scanf("%c",&choice);
    while(choice == 'Y' || choice == 'y'){
      printf("Enter Product Id\n");  
      scanf("%d",&id);
      printf("Enter Product Name\n");
      scanf("%s",name);
      printf("Enter Price\n");
      scanf("%f",&price);
      getchar();
      fprintf(fp,"%d %s %f\n",id,name,price);
      
      printf("Do you want to continue (Y/n)\n");
      scanf("%c",&choice);
    }
    fclose(fp);      
   }
}

