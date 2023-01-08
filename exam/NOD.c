#include<stdio.h>

// recursion
int NOD_rec(int a, int b)
{
    if(a > b) return NOD_rec(a-b,b);
    if(a < b) return NOD_rec(b-a,a);
    return a;
}

/// Optimization - tail call optimization

// not recursion
int NOD(int a, int b)
{
    while(1)
    {
        if(a > b)
        {
            a = a - b;
            continue;
        }
        if(a < b)
        {
            b = b - a;
            continue;
        }
        return a;
    }
}

main(void)
{
    printf("%d", NOD(8,12));
    printf("%d", NOD(8,16));
    return 0;
}
