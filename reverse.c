//C Program to Reverse a Given Number
#include<stdio.h>
int main()
{
    int x,reverse,temp,remainder;
    printf("enter the x value");
    scanf("%d",&x);
    temp=x;
    while(x>0)
    {
    remainder=x%10;
    reverse=reverse*10+remainder;
     x=x/10;
}
printf("given number is %d",temp);
printf("\nthe reverse of given number is %d",reverse);
return 0;
}