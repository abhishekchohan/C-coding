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
  int high[num_of_days], low[num_of_days];
  int i;
  printf("\n");
  for(i=0;i<num_of_days;i++)
  {
    printf("Day %d - High: ",i+1);
    scanf("%d",&high[i]);
    printf("Day %d - Low: ",i+1);
    scanf("%d",&low[i]);
  }
  printf("\nDay  Hi  Low");
  for(i=0;i<num_of_days;i++)
  {
    printf("\n%-5d%-5d%-4d",i+1, high[i], low[i]);
  }
  printf("\n");
  return 0;
}
