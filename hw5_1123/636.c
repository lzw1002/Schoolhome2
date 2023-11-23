#include<stdio.h>

void rearrange (char a[])
{
    if(*a =='\0')
    {
        return;
    }

    rearrange(a+1);
    printf("%c",*a);
}
int main(void)
{
    char str[]="Hello VScode!";
    printf("Original string: %s\n",str);
    printf("Reversed string :");
    rearrange(str);
    printf("\n");
    return 0;
}