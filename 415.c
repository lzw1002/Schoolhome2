#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i;
    double rate[5]={0.1,0.105,0.11,0.115,0.12};
    for(i=0;i<5;i++)
        printf("The compound interest is %.2lf\n",5000.0*pow(((rate[i]+1)),15));
    system("pause");
}