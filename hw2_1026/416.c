#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,j,k;
        printf("A\n");
        for(i=0;i<10;i++)
        {
        {
            for(j=0;j<i+1;j++)
                printf("%s","*");
        }
        printf("\n");
        }
        printf("B\n");
        for(i=0;i<10;i++)
        {
            for(j=0;j<10-i;j++)
                printf("%s","*");
            putchar('\n');
        }
        printf("\n");
        printf("C\n");
        for(i=0;i<10;i++)
        {
            for(j=0;j<i;j++)
                printf("%S"," ");
            for(j=i;j<10;j++)
                printf("%s","*");
            printf("\n");
        }
        printf("D\n");
         for(i=10;i>0;i--)
        {
            for(j=0;j<i-1;j++)
                printf("%S"," ");
            for(j=0;j<11-i;j++)
                printf("%s","*");
            printf("\n");
        }
        system("pause");
}