#include<stdio.h>
    int main()
{
    int x=0,y=1,counter=2;
    scanf("%d%i",&y,&x);
    counter=x;
    while(counter<=y)
    {
        if(counter%2==0)
        {
            printf("%d, ",counter);
        counter++;
        }
        else 
        printf("%d, ",counter);
    }
    
return 0;
}
