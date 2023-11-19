#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,e,f;
    while (1)
    {
    printf("Enter account number (-1 to end):");
    scanf("%lf",&a);
    if(a==-1)
        break;
        printf("Enter account number (-1 to end):%lf\n",a);
        printf("Enter your balance:");
        scanf("%lf",&f);
        printf("Enter total charge:");
        scanf("%lf",&b);
        printf("Enter total credits:");
        scanf("%lf",&c);
        printf("Enter credit limit:");
        scanf("%lf",&d);
        e=f+c;
        printf("Account:%lf\n",a);
        printf("Credit limit:%lf\n",d);
        printf("Balance:%lf\n",e);
        if(e>d)
        {
            printf("Cridit Limit Exceeded\n");
        }
        else
        {
            printf("\n");
        }
    }
    
    system("pause");
    return 0;
}