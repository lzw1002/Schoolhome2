#include<stdio.h>
#include<stdlib.h>

int binarysearch(int x[], int start, int end, int key)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == x[mid])
            return mid;
        if (key > x[mid])
        {
            return binarysearch(x, start, mid + 1, key);
        }
        else
        {
            return binarysearch(x, start, mid - 1, key);
        }
    }
    return -1;
}

int main()
{
    int x[10] = {81, 9, 6, 7, 42, 3, 60, 4, 58, 1};
    int key = 9; 
    int n = sizeof(x) / sizeof(x[0]) - 1;

    int a = binarysearch(x, 0, n, key);

    if (a != -1)
    {
        printf("The key number %d is inside\n", key);
    }
    else
    {
        printf("The number is not in this array\n");
    }

    system("pause");
    return 0;
}
