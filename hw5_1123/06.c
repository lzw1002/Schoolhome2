#include<stdio.h>
#include<stdlib.h>

int x(int a)
{
    int b;
    b=a*a*a;
    return b;
}

int main(void)
{
    int a=5;
    printf("The original value is %d\n",a);

    a=x(a);
    printf("the new value number is %d\n",a);
    system("pause");
    return 0;
}