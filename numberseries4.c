/* program for series like 0,2,4,6....n*/


#include<stdio.h>
    int main()
{
    int i=0,last=100;
    while(i<=last)
    {
        if(i%2==0)
        printf("%d\n",i);
        i=i+1;
    }
    
    
return 0;
}