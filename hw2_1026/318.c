#include <stdio.h>
#include <stdlib.h>

int main()
{

        double a,mix;
        int salary;
        salary=200;

        while(1)
        {
        printf("Enter sale in dollars(-1 to end):\n");
        scanf("%lf", &a);
        if(a==-1)
        {
                break;

        }
        else
        {
                printf("%lf is tip\n", a*0.09);
                a=a*0.09;
                mix=salary+a;
                printf("%lf is your total salary \n",mix);
        }
        }
        system("pause"); 
}
