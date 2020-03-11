//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Start your code below:

int main(void)
{
	float due;
	int loonie, quarters;
	float balance;
	printf("Please enter the amount to be paid: $");
	scanf("%f",&due);
	loonie = due;
	balance = due - loonie;
	printf("Loonies required: %d, balance owing $%.2f\n",loonie,balance);
	quarters = balance/.25;
	balance = balance - (quarters*.25);
	printf("Quarters required: %d, balance owing $%.2f",quarters,balance);
	return 0;
}