#include <stdio.h>
#include <stdlib.h>

int gg(int a,int b);
int main(void)
{
    int a,b;
    printf("How many numbers do you want raised to the power?(the front is base and the back is power)");
    scanf("%d %d",&a, &b);
    int ans=gg(a, b);
    printf("The ans is %d\n",ans);
    system("pause");
}

int gg(int a,int b)
{
    if(b==0 && a!=0)
    {
        return 1;
    }
    else if (a==0)
    {
        return 0;
    }
    else
    {
        int x=1;
        for(int i=0;i<b;i++)
        {
            x *=a;
        }
        return x;
    }
}