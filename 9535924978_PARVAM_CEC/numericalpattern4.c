/* c program to generate numerical pattern 
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

#include<stdio.h>                                            
             int main()
{
    int i,j,n;
    scanf("%d",&n);
    
    for(i=5;i>=n;i--)
    {
        for(j=5;j>=n;j--)
            printf("%d ",j);
        printf("\n");
    }
    
    return 0;
}
                                
                                 