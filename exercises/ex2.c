/*
Write a C program that calculates the area of a triangle.  Your program prompts the user to enter the height and base, accepts the user's input in decimal format, multiplies the product of the height and base by 0.5, stores the area in memory and outputs the area to 2 decimal places along with its address in memory in hexadecimal format (use the %p conversion specifier to output an address).
*/
#include <stdio.h>

int main(void)
{
	float height,base,area;
	printf("Enter Height: ");
	scanf("%f",&height);
	printf("Enter Base: ");
	scanf("%f",&base);
	area = height*base*0.5;
	printf("Area : %.2f with the address: %p",area,&area);
}
