/* Design and code a main program that prompts for and accepts a floating-point number and an error margin
and calculates the approximate square root of the number using Euclid's method.
Do not use the sqrt function from the math library.
Euclid's method keeps guessing the square root of a number, say x, using the formula
quotient = x / estimate
where estimate is the most recent estimate of the square root of x.
The method improves each estimate by taking the average of the estimate and the quotient as defined above.
The improvement process terminates once the difference between the estimate and the quotient is within a prescribed error margin, say epsilon:
| quotient - estimate | <= epsilon
Euclid's method starts with an initial estimate of
estimate = x / 2
If the number input by the user is positive or zero, your program displays successive estimates in tabular form, something like:
Find the Square Root of : 34567.0
Acceptable Error : 0.000000001
Iteration            Estimate
        1  17283.500000000000
        2   8642.750000000000
        3   4323.374768592173
        4   2165.685071502284
        5   1090.823151320520
        6    561.256032187495
        7    311.422339911770
        8    211.209757516741
        9    187.435851925555
       10    185.928139870331
       11    185.922026767594
       12    185.922026667095
The approximate square root after 12 iterations is 185.922027
If the number input is negative, your program does not calculate a square root and simply displays a message to that effect.*/

#include <stdio.h>

int main(void)
{
  double estimate;
  double x; // x is the number provided by user to find square root for.
  double quotient;
  double epsilon;
  int i = 1;
  printf("Find the Square Root of : ");
  scanf("%lf",&x);
  printf("Acceptable Error : ");
  scanf("%lf",&epsilon);
  printf("Iteration            Estimate\n");
  do
  {
    if(i==1) // if its intial run //first iteration
    {
      estimate = x/2;
    }
    else
    {
      estimate = (quotient+estimate)/2;
    }
    quotient = x/estimate;
    printf("%9d \t%18.12f\n",i,estimate);  // %"9"d to use 9 char width spacing..if nothing to print in front then blank spaces // same with 18  //.12 for 12 decimal places.
    i++;
  }while(estimate-quotient>epsilon);   // loop exit if estimate - quotient <= epsilon

  printf("The approximate square root after %d iterations is %.6f\n",i-1,estimate );
  return 0;
}
