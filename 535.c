#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int a,b,c;
    a=0;
    b=1;
    printf("%u %u ",a ,b);
    while (1)
    {
    c=a+b;
    if (c < a || c < b)
    {
        printf("Overflow!\n");
        break;
    }
    printf("%u ",c);
    printf(" ");
    a=b;
    b=c;
    }
    return 0;
}