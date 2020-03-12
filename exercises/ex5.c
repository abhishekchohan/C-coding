/*
Write a program that calculates the approximate value of the natural logarithm of 2.
The natural logarithm of 2 is calculated using the infinite series
ln 2 = 1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7 - ...
Your program prompts for and accepts the number of terms to be used in calculating the approximation.
Your program displays the approximate value to 6 decimal places.
*/

#include <stdio.h>

int main(void)
{
  float ln=0.0;
  int n,i;
  printf("How many number of terms for calculating logarithm value ? ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    if(i!=0)
    {
      if(i%2==0)
      ln = ln - 1.0/(float)i;
      else
      ln = ln + 1.0/(float)i;
    }
  }
  printf("Logarithm value of %d terms is: %f.\n",n,ln);
  return 0;
}
