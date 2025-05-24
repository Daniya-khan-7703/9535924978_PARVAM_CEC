/*  c program to generate summation of number n*/
            #include<stdio.h>                                            
             int main()
             long summ(int);
{
    int n=0;
    scanf("%d",&n);
    printf("summation of %d is %ld", n,summ(n));

    }
    long summ(int no)
{
    if(no<=0)return 0;
     if(no==1)return 1;
     return no+summ(no-1);
}
