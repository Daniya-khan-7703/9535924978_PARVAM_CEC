/*  c program to generate numerical patterns  1 2 3 4 5 
                                              1 2 3 4 
                                              1 2 3 
                                              1 2  
                                              1 */
            #include<stdio.h>                                            
             int main()
{
    int i,j,n=0;
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf("%d ",j+1);
        printf("\n");
    }
    
    return 0;
}
                              
                            