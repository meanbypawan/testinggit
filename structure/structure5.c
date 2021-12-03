#include<stdio.h>
#include<string.h>
typedef struct Product{
  int id;
  char name[100];
  float price;
}Product;

void getDetails(Product *);
void getDetails(Product *p){
  p->id = 1;
  strcpy(p->name,"Boroplus");
  p->price = 5.0f;
}
int main(){
  Product p;// id,name,price
  getDetails(&p);
  printf("Id : %d\n",p.id);
  printf("Name : %s\n",p.name);
  printf("Price : %f\n",p.price);
}
