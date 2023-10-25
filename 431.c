#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j;
    char a,b;
    a=' ';
    b='*';
    for(i=1;i<=5;i++)
        {
            for(j=i;j<5;j++)
                printf("%c",a);
            for(j=0;j<2*i-1;j++)
                printf("%c",b);
            putchar('\n');
        }
    for(i=6;i<10;i++)
        {
            for(j=6;j<i+1;j++)
                printf("%c", a);
            for(j=0;j<2*(10-i)-1;j++)
                printf("%c",b);
            putchar('\n');  
        }
    system("pause");

}