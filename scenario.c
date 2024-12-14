 /*There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies where M<=N. Candies are served to the customers. JAR is never remain empty as when last k candies are left, JAR is refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.
Output should give number of Candies sold and updated number of Candies in JAR.
If Input is more than candies in JAR, return: “INVALID INPUT”
Given, 
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, wheOFre k is number of minimum candies that must be inside JAR ever.
Example 1:(N = 10, k =< 5)
•	Input Value
o	3
•	Output Value
o	NUMBER OF CANDIES SOLD : 3
o	NUMBER OF CANDIES AVAILABLE : 7
Example : (N=10, k<=5)
•	Input Value
o	0
•	Output Value
o	INVALID INPUT
o	NUMBER  CANDIES LEFT : 10
#include<stdio.h>
    int main()
{                                \\ my attempt
    int n=10,m,full;
    scanf("%d",&m);
 {
    if(m<n)
    {
    printf(" no. of candies sold =%d, ",m);
    printf("\nno of candies available=%d",n-m);
 }
    else
    printf("invalid input");
 }
return 0;
} */
#include<stdio.h>   
int main()  
{
	int n=10, k=5;
	int num;
	scanf("%d",&num);
	if(num>=1 && num<=10&& n-num>=0)
	{
    		printf("NUMBER OF CANDIES SOLD : %d\n",num);
    		printf("NUMBER OF CANDIES LEFT : %d",n-num>k? n-num:10);
	}
	else
	{
    		printf("INVALID INPUT\n");
    		printf("NUMBER OF CANDIES LEFT : %d",n);
	}
	return 0;
}
