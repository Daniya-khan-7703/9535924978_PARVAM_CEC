/*  c program to generate numerical patterns  1 2 3 4 5 
                                              1 2 3 4 5 
                                              1 2 3 4 5 
                                              1 2 3 4 5 
                                              1 2 3 4 5 */
            #include<stdio.h>                                            
             int main()
{
    int i,j,n;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",j+1);
        printf("\n");
    }
    
    return 0;
}
                                
                                 