#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int all[11]={0};
    for(int i=0; i<36000;i++)
    {
        all[rand()%6+rand()%6]++;
    }
    for(int j=0 ; j<11;j++)
    {
        printf("%7d",j+2);
    }
    printf("\n");
    for(int j=0 ; j<11;j++)
    {
        printf(" %0.4f",all[j]/36000.0);
    }
    printf("\n");
    for(int j=0 ; j<11;j++)
    {
        printf(" %6d",all[j]);
    }
    return 0;
}
