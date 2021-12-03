
#include<stdio.h>
#include<stdlib.h>
int main(){
  int choice,bal=50000,amount;
  do{
	  printf("Press 1 for deposite\n");
	  printf("Press 2 for withdrawal\n");
	  printf("Press 3 for balance enquiry\n");
	  printf("Press 4 for exit\n");
	  printf("Please enter your choice\n");
	  scanf("%d",&choice);
	  switch(choice){
	    case 1: printf("Enter Amount.\n");
		    scanf("%d",&amount);
		    bal = bal + amount;
		    printf("Total balance : %d\n",bal);
		    break;
	    case 2: printf("Enter Amount to be withdraw..\n");
		    scanf("%d",&amount);
		    if(amount <= bal){
		      printf("Withdrawal succes..\n");
		      bal  -=  amount; // bal = bal-amount
		      printf("Remaining bal : %d\n",bal);
		    }
		    else
		      printf("Insufficient balance..\n");
		    break;
	    case 3: printf("Total Balance : %d\n",bal);
		    break;
	    case 4: exit(0);                          
	    default : printf("Invalid choice..Please Retry..\n");
	  }
  }while(1);
  return 0;
}









