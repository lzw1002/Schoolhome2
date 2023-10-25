#include <stdio.h>
#include <stdlib.h>

int main()
{
    int who;
    while (1)
    {
        int who;
        int hour;
        double salary;
        double products;
        int product;
        double tips;
        printf("Enter what do you want to know someone salary?");
        scanf("%d",&who);
        switch(who)
            {
            case 1:
                    printf("The manger salary is weekly salary:");
                    scanf("%lf",&salary);
                    putchar('\n');
                    break;
                
            case 2:
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
                        break;
            case 3:
                    printf("Revenue is:");
                    scanf("%lf",&products);
                    salary=products*0.057+250;
                    printf("commissionworker salary is:%.2lf", salary);
                    putchar('\n');
                    break;
                
            case 4:
                    printf("How much does this product:");
                    scanf("%d",&product);
                    printf("It is rak:");
                    scanf("%lf", &tips);
                    printf("piecewprker salary is %.2lf\n",(double)product*tips);
                    break;
            default:
                putchar('\n');
                break;
        }
    }
    system("pause");
    return 0;
}
