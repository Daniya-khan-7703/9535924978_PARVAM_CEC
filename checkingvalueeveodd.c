/* C program to check if a given integer is odd or even*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter the x value");
    scanf("%d",&x);
    if(x%2==0)
    printf("x is even number");
else
    printf("x is odd number");
 return 0;
}