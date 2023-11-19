#include <stdio.h>
#include <stdlib.h>

int main()
{
    double loan,rate,charge,d;

    while (1)
    {

    printf("Enter loan principal (-1 to end ):");
    scanf("%lf",&loan);
    if(loan==-1)
        break;
    
    printf("Enter interest rate:");
    scanf("%lf",&rate);
    printf("Enter term of the loan in days:");
    scanf("%lf", &d);
    charge=loan*rate*(d/365);
    printf("The interest charge is %.2lf",charge);
    printf("\n");
    }
    system("pause");
}