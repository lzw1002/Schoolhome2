#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a,b,c,S,A,B,C;
    for(c=1;c<=500;c++)
    {
        for(a=1;a<c;a++)
        {
            for(b=1;b<c;b++)
            {
                C=c*c;
                A=a*a;
                B=b*b;
                S=A+B;
                if(C==S)
                    printf("c is %d a is %d b is %d\n",c,a,b);
            }
        }
    }
    system("pause");
}