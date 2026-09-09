#include <stdio.h>
int main()
{
   float percentage = 75.5;
   float price = 25.45;
   float temperature = 95.5;

   //using .1 after % for removing zeros in Decimal

    printf("%.1f\n", percentage);
    printf("%.1f\n", price);
    printf("%.1f\n", temperature);


    return 0;
}