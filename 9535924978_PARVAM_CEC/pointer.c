#include<stdio.h>
/* C program to pointer target value, address */


int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    *p=66;
    printf("var n value %d address is %x",n,&n);
    return 0;
}