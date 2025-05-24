//C Program to Find the Sum of first 50 Natural Numbers using For Loop
#include<stdio.h>
int main()
{
	int sum=0,i;
	
	for( i=0;i<=50;i++)
    sum=sum+i;
    printf("Sum of first 50 Natural Numbers is%d",sum);
    return 0;
    
}