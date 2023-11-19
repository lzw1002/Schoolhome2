#include <stdio.h>
#include <stdlib.h>

int LCM(int a,int b);

int main(void)
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a ,&b);
    int result=LCM(a,b);

    printf("%d and %d Lcm is %d",a,b,result);
    system("pause");
}

int LCM(int a,int b)
{
    int x,y;

    if(a>b)
        x=a;
    else
        x=b;
    y=x;
    while(1)
    {
        if(x%a==0 && x%b==0)
            return x;
        x+=y;
    }
}