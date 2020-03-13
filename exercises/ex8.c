// Price List - Variable Form
 // priceList.c

 //Convert the following program into a program that uses a one-dimensional array.
/*
 #include <stdio.h>

 int main(void)
 {
         double price1 = 10.60, price2 = 23.45, price3 = 5.89;
         printf(" Item     Price\n");
         printf("    1%10.2lf\n", price1);
         printf("    2%10.2lf\n", price2);
         printf("    3%10.2lf\n", price3);
         printf("Total%10.2lf\n", price1 + price2 + price3);

         return 0;
 }
*/
#include <stdio.h>

int main(void)
{
        double price[] = {10.60,23.45,5.89};
        printf(" Item     Price\n");
        printf("    1%10.2lf\n", price[0]);
        printf("    2%10.2lf\n", price[1]);
        printf("    3%10.2lf\n", price[2]);
        printf("Total%10.2lf\n", price[0] + price[1] + price[2]);

        return 0;
}
