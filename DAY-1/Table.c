#include<stdio.h>

int main(){
int n,product;
printf("Enter A Number: ");
scanf("%d", &n);
printf("The Table Of %d is: \n",n);
for (int i = 1; i <= 10; i++)
{
    product=n*i;
    printf("%d X %d = %d\n",n,i,product);
}

     return 0;
}