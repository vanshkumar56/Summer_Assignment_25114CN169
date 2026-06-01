#include<stdio.h>

int main(){
int n,fact=1;
printf("Enter A Number: ");
scanf("%d", &n);

for (int i = n; i >= 1; i--)
{
    fact=fact*i;
}
printf("The Factorial Of Given Number is: %d",fact);
     return 0;
}