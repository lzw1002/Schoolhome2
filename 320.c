#include <stdio.h>
#include <stdlib.h>

int main()
{
    double time,time_pay;
    int salary;

    while (1)
    {
        printf("Enter # of hours worked (-1 to end):");
        scanf("%lf",&time);
        if(time==-1)
            break;
        else
        {

        printf("Enter hourly rate of the worker($00.00):");
        scanf("%lf",&time_pay);            
        if(time<=40)
            salary=time*time_pay;
        else
            salary=(time*time_pay)+(time-40)*(int)time_pay/2;
        printf("salary is %d",salary);
 
        printf("\n");
        }
    }
    system("pause");

}