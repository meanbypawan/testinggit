#include<stdio.h>
#include<string.h>
typedef struct Customer{
  int id;
  char name[100];
  long mobile;
  struct Address{
    int hno;
    char street[100];
    int pincode;
  }addr;
}Customer;
int main(){
  Customer c;
  c.id = 1001;
  strcpy(c.name,"Cheeku");
  c.mobile = 9009111222;
  c.addr.hno = 984;
  strcpy(c.addr.street,"Gandhi nagar");
  c.addr.pincode = 45001; 
  
  printf("Id : %d\n",c.id);
  printf("Name : %s\n",c.name);
  printf("Mobile : %ld\n",c.mobile);
  printf("H.No : %d\n",c.addr.hno);
  printf("Street : %s\n",c.addr.street);
  printf("Pincode : %d\n",c.addr.pincode);
  return 0;
}
