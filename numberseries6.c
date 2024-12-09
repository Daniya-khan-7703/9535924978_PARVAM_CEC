/* program  for 4 16 64 256    n */
#include<stdio.h>
    int main()
{
    int x=4,y=1,counter=1;
    scanf("%i",&y);
    while(counter<=y)
    {
        printf("%d, ",x);
        x=x*4;
        counter=counter+1;
    }
    
return 0;
}
