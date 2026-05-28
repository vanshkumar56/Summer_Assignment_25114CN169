// Write a program to Find product of digits. 
#include<stdio.h>

int main(){
int n,temp,product=1;
printf("Enter A Number: ");
scanf("%d",&n);
while (n!=0)
{
     temp=n%10;
     product*=temp;
     n=n/10;
    
}
printf("The Product Of Digits Of a Given Number Is: %d",product);
     return 0;
}