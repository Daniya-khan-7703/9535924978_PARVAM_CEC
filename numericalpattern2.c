/* c program to generate numerical patterns  1 1 1 1 1 
                                             2 2 2 2 2
                                             3 3 3 3 3
                                             4 4 4 4 4 
                                             5 5 5 5 5   */
 #include<stdio.h>                                            
             int main()
{
    int i,j,n;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            printf("%d ",i);
        printf("\n");
    }
    
    return 0;
}
                                
