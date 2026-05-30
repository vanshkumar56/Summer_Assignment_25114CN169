#include<stdio.h>

int main(){
    int n,sum=0,remainder;
    
printf("Enter A Number: ");
scanf("%d",&n);
if (n<0)
{
    n=-n;
}
else{
    while (n!=0)
    {
       remainder=n%10;
        sum+=remainder;
        n=n/10;
    }
    
}
printf("The Sum OF The Digits Of A Given Number Is: %d",sum);
     return 0;
}