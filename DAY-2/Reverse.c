#include<stdio.h>

int main(){
int n,reverse=0,remainder;
printf("Enter A Number: ");
scanf("%d",&n);
while (n!=0)
{
    remainder=n%10;
    reverse=(reverse*10)+remainder;
    n=n/10;
}
printf("The Reverse Number Is : %d",reverse);
     return 0;
}