/*  print power of 2 */
#include<stdio.h>
    int main()
{
    int x=2,y=1,counter=1;
    scanf("%i",&y);
    while(counter<=y)
    {
        printf("%d, ",x);
        x=x*2;
        counter=counter+1;
    }
    
return 0;
}

