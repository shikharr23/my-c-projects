// wap to calculate total salary of employee

#include <stdio.h>

int main()
{

    float salary, da, hra, gross;

    printf("Enter your base salary: ");
    scanf("%f", &salary);

    if (salary <= 2000)             
    {
        da = 0.1 * salary;
        hra = 0.2 * salary;
    }
    else if (2000<salary<=5000)
    {
        da = 0.2 * salary;
        hra = 0.3 * salary;
    }

    else if (5000<salary<=10000)
    {
        da = 0.3 * salary;
        hra = 0.4 * salary;
    }

    else
    {
        da = 0.5 * salary;
        hra = 0.5 * salary;
    }

    gross = salary + da + hra;
    printf("%.2f", gross);

    return 0;
}