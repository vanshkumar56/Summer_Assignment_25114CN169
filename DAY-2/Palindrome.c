// Write a program to Check whether a number is palindrome.
 #include<stdio.h>
 
 int main(){
 int n,reverse_num=0,remainder;
 printf("Enter A Number: ");
 scanf("%d",&n);
 int temp=n;
 while (n!=0)
 {
    remainder=n%10;
    reverse_num=(reverse_num*10)+remainder;
n=n/10;
 }
 printf("%d", reverse_num);
 if (reverse_num==temp)
 {
printf("The Given Number Is A Palindrome Number");
 }
 else{
    printf("The Given Number Is Not A Palindrome Numeber");
 }
 
     return 0;
 }