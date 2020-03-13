/*
Workshop 4 ---> https://github.com/Seneca-144100/IPC-Workshops/blob/master/WS04/Workshop4.pdf
*/

#include <stdio.h>

int main(void) {

  int num_of_days;
  int repeat = 0;
  printf("---=== IPC Temperature Calculator V2.0 ===---");
  do {
    if(repeat) {
      printf("\nInvalid entry, please enter the number of days, between 3 and 10, inclusive: ");
      scanf("%d",&num_of_days);
    }
    else {
      printf("\nPlease enter the number of days, between 3 and 10, inclusive: ");
      scanf("%d",&num_of_days);
      repeat = 1;
    }
  }while(num_of_days < 3 || num_of_days > 10);
  repeat = 0;
  int high[num_of_days], low[num_of_days];
  int i;
  int highest=0,lowest=0,hday,lday,avg_days;
  float avg_temp = 0.00;
  printf("\n");
  for(i=0;i<num_of_days;i++)
  {
    printf("Day %d - High: ",i+1);
    scanf("%d",&high[i]);
    printf("Day %d - Low: ",i+1);
    scanf("%d",&low[i]);
    if(highest<high[i])
    {
      highest = high[i];
      hday = i+1;
    }
    if(lowest>low[i])
    {
      lowest = low[i];
      lday = i+1;
    }
  }
  printf("\nDay  Hi  Low");
  for(i=0;i<num_of_days;i++)
  {
    printf("\n%-5d%-5d%-4d",i+1, high[i], low[i]);
  }
  printf("\n\n");
  printf("The highest temperature was %d, on day %d\n",highest,hday);
  printf("The lowest temperature was %d, on day %d\n",lowest,lday);
  do {
      do {
        if(repeat) {
          printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ",num_of_days);
          scanf("%d",&avg_days);
        }
        else {
          printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative to exit: ",num_of_days);
          scanf("%d",&avg_days);
          repeat = 1;
        }
      }while(avg_days > num_of_days || avg_days==0);
      repeat = 0;
      if(avg_days>0)
      {
        avg_temp = 0;
        for(i=0;i<avg_days;i++)
        {
          avg_temp = avg_temp + high[i] + low[i];
        }
        avg_temp = avg_temp/(float)(avg_days*2);
        printf("\nThe average temperature up to day %d is: %.2f\n",avg_days,avg_temp);
      }
  }while(avg_days>0);
  printf("\nGoodbye!");
  return 0;
}
