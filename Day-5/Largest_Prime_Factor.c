// Write a program to Find largest prime factor.
#include <stdio.h>

int main() {
    int n, i, j, a, largestPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        if(n % i == 0) {   

            a = 1;

            for(j = 2; j < i; j++) {
                if(i % j == 0) {
                    a = 0;
                    break;
                }
            }

            if(a) {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}