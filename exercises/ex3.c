/* Rewrite the expression in the cast.c program listed above so that you obtain the correct result without using a cast expression */
#include <stdio.h>

int main(void)
 {
         float minutes;
         float hours;

         printf("Minutes ? ");
         scanf("%f", &minutes);
         hours = minutes / 60;
         printf("= %.2lf hours\n", hours); 

         return 0;
 }