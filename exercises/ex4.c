/*
Write a program that calculates the harmonic value for a given number of terms.
The harmonic value is calculated using the series formula

 h = 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 1/7 + ...

Your program prompts for and accepts the number of terms to be used in calculating the value.
Your program displays the value to 6 decimal places.
*/

#include <stdio.h>

int main(void)
{
  float h=1.0;
  int n,i;
  printf("How many number of terms for calculating harmonic value ? ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i!=1)
      h = h + 1.0/(float)i;
  }
  printf("Harmonic value of %d terms is: %f.\n",n,h);
  return 0;
}
