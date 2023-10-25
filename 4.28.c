#include <stdio.h>
#include <stdlib.h>

int main()
{
    int who;
    while (1)
    {
        printf("Enter what do you want to know someone salary?");
        scanf("%d",&who);
        if(who==1)
            {
                double salary;
                printf("The manger salary is weekly salary:");
                scanf("%lf",&salary);
                putchar('\n');
            }
        else if(who==2)
            {
                int hour;
                double salary;
                printf("How long does Hourly worker work time on this week:");
                scanf("%d",&hour);
                printf("How much does one hour salary:");
                scanf("%lf",&salary);
                    if(hour<=40)
                        {
                            printf("Hourly worker salary is %.2lf\n",salary*(double)hour);
                        }
                    else
                        {
                            printf("Hourly worker salary is %.2lf\n",salary*40+(hour-40)*(salary/2));
                        }
                    putchar('\n');
            }
        else if(who==3)
            {
                double salary;
                double products;
                printf("Revenue is:");
                scanf("%lf",&products);
                salary=products*0.057+250;
                printf("commissionworker salary is:%.2lf", salary);
                putchar('\n');
            }
        else if(who==4)
            {
                double salary;
                int product;
                double tips;
                printf("How much does this product:");
                scanf("%d",&product);
                printf("It is rak:");
                scanf("%lf", &tips);
                printf("piecewprker salary is %.2lf\n",(double)product*tips);
            }
        else
            break;
    }
    putchar('\n');
    system("pause");
    return 0;
}