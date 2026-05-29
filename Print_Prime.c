#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter the last number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        temp = 1; 

       
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                temp = 0; 
                break;       
            }
        }

        
        if (temp == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}