// C Program to Reverse a Number & Check if it is a Palindrome

#include<stdio.h>
int main()
{
    int x,remainder,reverse=0,temp;
    printf("enter the x value");
    scanf("%d",&x);
    temp=x;
    while (x > 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    if (temp == reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}