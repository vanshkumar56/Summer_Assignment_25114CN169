//Write a program to Check Armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
    int n, t, r, Sum = 0;
    
    printf("Please Enter 3-Digit Number = ");
    scanf("%d", &n);
    
    t = n;
    while( t > 0)
    {
        r = t % 10;
        Sum = Sum + pow(r,3);
        t = t / 10;
    }
    
    if ( n == Sum )
        printf("%d is an Armstrong Number.", n);
    else
        printf("%d is not an Armstrong Number.", n);
    
    return 0;
}