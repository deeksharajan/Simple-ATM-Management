#include<stdio.h>

int balance=5000;

void deposit(){
	int amt;
	printf("Enter the amount to be Deposited: ");
	scanf("%d",&amt);
	balance+=amt;
	printf("Amount is Deposited Successfully.\n");
	printf("Your current balance: %d",balance);
}

void withdrawl(){
	int amt;
	printf("Enter the amount to be Withdrawn: ");
	scanf("%d",&amt);
	if(amt>balance){
		printf("Insufficient Balance.\n");
	}
	else{
	balance-=amt;
	printf("Amount is Deposited Successfully.\n");
	printf("Your current balance: %d",balance);
    }
}
int main(){
	printf("\tATM Management\n\n");
	printf("\t1. Balance\n");
	printf("\t2. Deposit\n");
	printf("\t3. Withdrawl\n\n");
	int ch;
	printf("Enter your choice: ");
	scanf("%d",&ch);
	if(ch==1){
		printf("Your current balance: %d\n",balance);
	}
	else if(ch==2){
		deposit();
	}
	else if(ch==3){
		withdrawl();
	}
	else{
		printf("Invalid choice.\n");
	}
}
