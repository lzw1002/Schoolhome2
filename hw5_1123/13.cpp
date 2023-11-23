#include<stdio.h>
#include<stdlib.h>

void cubeByReference(int &ptr)
{
    ptr=ptr*ptr*ptr;
}

int main(void)
{
    int number=5;
    printf("The original value of number is %d\n",number);

    cubeByReference(number);
    printf("The new value of number is %d\n",number);
    system("pause");
    return 0;
}