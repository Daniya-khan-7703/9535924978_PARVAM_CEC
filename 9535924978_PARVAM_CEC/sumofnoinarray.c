#include<stdio.h>
/* C program to print array */


int main()
{
    int a[20],size,i,sum=0;
    printf("enter the array number");
    scanf("%d",&size);
    for(i=0;i<size;scanf("%d",&a[i++]));
    
    for(i=0;i<size;printf("%d ",a[i]),sum+=a[i++]);
    printf("\n sum of all elements is %d",sum);
    
}