// Write a program to Find LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, num1, num2, temp, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

 
    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}