//Write a program to Print Armstrong numbers in a range
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, n, t, r, Sum;

    printf("Enter Starting Number = ");
    scanf("%d", &a);

    printf("Enter Ending Number = ");
    scanf("%d", &b);

    for(n = a; n <= b; n++)
    {
        t = n;
        Sum = 0;

        while(t > 0)
        {
            r = t % 10;
            Sum = Sum + pow(r, 3);
            t = t / 10;
        }

        if(n == Sum)
            printf("%d ", n);
    }

    return 0;
}