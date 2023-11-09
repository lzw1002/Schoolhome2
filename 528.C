#include <stdio.h>
#include <stdlib.h>
char tt(char a);
int main(void)
{
    char a;
    printf("Enter a word:");
    scanf("%c",&a);
    printf("It become %c",tt(a));
    system("pause");
}

char tt (char a)
{
    if(a>='A'&& a<='Z')
        return a+32;
    else if(a>='a'&& a<='z')
        return a-32;
}