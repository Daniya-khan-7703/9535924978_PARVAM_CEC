#include<stdio.h>
/* C program to print array and seperate to even and odd  */


int main()
{
    int a[100],size=0,i,esum=0,osum=0;
    printf("enter the array number");
    scanf("%d",&size);
    for(i=0;i<size;scanf("%d",&a[i++]));
    for(i=0;i<size;i++)
    {
    printf("%d ",a[i]);
    if(a[i]%2==0)
    esum+=a[i];
    else
    osum+=a[i];
    }
    printf("\n sum of even %d odd %d",esum,osum);
    return 0;

    
}