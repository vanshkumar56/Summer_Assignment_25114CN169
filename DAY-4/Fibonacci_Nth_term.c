//Write a program to Find nth Fibonacci term.
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The 1st Fibonacci term is %d", a);
    }
    else if (n == 2) {
        printf("The 2nd Fibonacci term is %d", b);
    }
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %dth Fibonacci term is %d", n, b);
    }

    return 0;
}