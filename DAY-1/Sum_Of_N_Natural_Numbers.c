// Write a program to Calculate sum of first N natural numbers.
#include<stdio.h>

int main(){
    int n,N;
printf("Enter Starting Number: ");
scanf( "%d" ,&n);
printf("Enter Ending Number: ");
scanf( "%d" ,&N);
if (n>N)
{
    printf("The Starting Number Is Greater Than The Ending Number So Sum Is Not Possible");
}
else if(n==N){
    printf("The Sum Is %d", n);
}
else{
    int sum=0;
for (int i = n; i <= N; i++)
{
    sum=sum+i;
}
printf("The Value After Addition is %d", sum);
}
     return 0;
}