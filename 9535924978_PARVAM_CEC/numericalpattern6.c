/*  c program to generate numerical patterns1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6 */
            #include<stdio.h>                                            
             int main()
{
    int i,j,n=0;
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ",j+1);
        printf("\n");
    }
    
    return 0;
}
                                
                                 