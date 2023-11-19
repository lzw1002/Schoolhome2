#include <stdio.h>
#include <stdlib.h>

void inverse(int *);

int main()
{
    int i;
    int a[3]={3,5,7};
    for(i=0;i<3;i++)
    {
        printf("%d  ",a[i]);

    }
    putchar('\n');
    
    inverse(a);
     for(i=0;i<3;i++)
    {
        printf("%d  ",a[i]);

    }
    putchar('\n');

    system("pause");
    return 0;

}

void inverse(int *b)
{
    int t[3],i;
    for(i=0;i<3;i++)
       t[2-i]=b[i];
    for(i=0;i<3;i++)
       b[i]=t[i];
}