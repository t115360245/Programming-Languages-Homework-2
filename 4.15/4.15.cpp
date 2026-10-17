#include<stdio.h>
#include<math.h>

int main()
{
    double principal = 5000.00 , amount;
    int year = 15 , rate ;

    for (rate = 100 ; rate <= 120 ; rate += 5)
    {
        double r = rate / 1000.0;
        amount = principal * pow(1.0 + r, year);
        printf("%d years %1.2f \n", year, amount);
        year++;

    }


}