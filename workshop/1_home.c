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
	int loonie, quarters, dimes, nickles, pennies, balance;
	printf("Please enter the amount to be paid: $");
	scanf("%f",&due);
  printf("GST: %.2f\n",due * .13 + .005 );
  due += due * .13 + .005;
  printf("Balance owing: $%.2f\n", due);
	loonie = due;
	balance = due*100 - loonie*100;
	printf("Loonies required: %d, balance owing $%.2f\n",loonie,(float)balance/100);
  quarters = balance/25;
  balance = balance%25;
  printf("Quarters required: %d, balance owing $%.2f\n",quarters,(float)balance/100);
  dimes = balance/10;
  balance = balance%10;
  printf("Dimes required: %d, balance owing $%.2f\n",dimes,(float)balance/100);
  nickles = balance/5;
  balance = balance%5;
  printf("Nickles required: %d, balance owing $%.2f\n",nickles,(float)balance/100);
  pennies = balance;
  balance -=balance;
  printf("Pennies required: %d, balance owing $%.2f\n",pennies,(float)balance);
	return 0;
}
