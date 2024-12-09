/* c program to generate numerical pattern 
5 5 5 5 5 
4 4 4 4 4 
3 3 3 3 3 
2 2 2 2 2
1 1 1 1 1 
*/
#include<stdio.h>                                            
             int main()
{
    int i,j,n;
    scanf("%d",&n);
    
    for(i=5;i>=n;i--)
    {
        for(j=5;j>=n;j--)
            printf("%d ",i);
        printf("\n");
    }
    
    return 0;
}
                                
                                 