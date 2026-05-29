// Write a program to Check whether a number is prime.
#include<stdio.h>

int main(){
int n,count=0,fact;
 printf("Enter A Number: ");
 scanf("%d",&n);
 if (n <= 1) {
        printf("The Entered Number Is Not A Prime Number\n");
        return 0;
    }
for (int i = 1; i < n; i++)
{
    fact=n%i;
    if (fact==0)
    {
        count++;
    }
    
}
if (count==1)
{
    printf("The Entered Number Is A Prime Number");
}
else{
    printf("The Entered Number Is Not A Prime Number");
    
}
     return 0;
}