#include<stdio.h>
#include<stdlib.h>

int add1(int &xref)
{
    xref++;
    printf("xref=%d\n", xref);
    return xref;
}
int main()
{
    int x = 100;
    add1(x);
    printf("x=%d\n",x);
    system("pause");
    return 0;
}

