#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a;
    int *aPtr;

    a=7;
    aPtr=&a;
    printf("The address of a is %p""\nThe value of aPtr is %p",&a,aPtr);
    printf("\n\n");

    printf("The value of a is %d""\nThe value of *aPtr is %d",a, *aPtr);
    printf("\n\n");

    printf("Showing that * and & are complements of each other\n&*aPtr = %p\n""*&aPtr = %p\n", &*aPtr, *&aPtr);

    system("pause");
    return 0;

}