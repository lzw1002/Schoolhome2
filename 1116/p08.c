#include <stdio.h>
#include <stdlib.h>
#define rang 10

int main(void)
{
    int n[rang]={19,3,15,7,11,9,13,5,17,1};
    int i,j;

    printf("%s%13s%17s\n","Element","Value","Histogram");

    for(i=0;i<rang;i++)
    {
        printf("%7d%13d  ",i,n[i]);
        for(j=1;j<=n[i];j++)
        {
            printf("%c",'*');
        }
        putchar('\n');
    }
    system("pause");
    return 0;
}