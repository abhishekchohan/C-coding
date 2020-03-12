/*
Design and code a program that displays a multiplication table.
Your program prompts the user for the range of integer values that the table covers and displays the table in a columnar format.
The output from your program might look something like:
Enter the low end of the range  : 3
Enter the high end of the range : 7
     3    4    5    6    7
3    9   12   15   18   21
4   12   16   20   24   28
5   15   20   25   30   35
6   18   24   30   36   42
7   21   28   35   42   49
*/

#include <stdio.h>

int main(void)
{
  int l_range, h_range, i, j;
  printf("Enter the low end of the range  : ");
  scanf("%d",&l_range);
  printf("Enter the high end of the range  : ");
  scanf("%d",&h_range);
  printf("    ");
  for(i=l_range;i<=h_range+1;i++)    // Iterate each row ------> one by one
  {
    for(j=l_range;j<=h_range+1;j++)    // Iterate each column item of each row  ex --->
    {
      if(i==l_range && j!=h_range+1)   // if first row but column is not last
      {
        printf("%4d",j);
      }
      else
      {
        if(j==l_range)                      // if its not first row && column is first
        {
          printf("%4d",i-1);
        }
        else
        {
          if(!(j==h_range+1&&i==l_range))       // if its not last column of first row only then printf
          printf("%4d",(i-1)*(j-1));
        }
      }
    }
    printf("\n");
  }
  return 0;
}
