# include <iostream>
using namespace std;
int prime(int x)
{
int flag = 0;
for(int i = 2 ;i<x;i++)
{
    if(x % i == 0){
        flag = 1;
    }
}
if(flag == 0)
{
    cout << "\n it is a prime number"<<endl;
} 
else
{
    cout << "\n it is not a prime number "<<endl;
}
cout<<x;
return x;
}
int main(){
    int x, counter = 0,arr[10], i ,j = 0 ,prod =1;
    cout << "enter the number :" << endl;
    cin >> x;
    for(int i = 1 ; i <= x ; i++)
    {
        if( x % i == 0)
        {
           arr[j] = i;
            counter++ ;
            j++;
            
        }
        
    }
    
    cout << "number of divisors "<<x<<" is "<<counter << endl;
    if (counter == 8)
    {
        for(i = 0 ; i <= 7 ;i++)
        {
            if(counter < 4)
            {
                if(arr[i] == prime(x))
                {
                    counter++;
                    prod = prod * i;
                }
            }
        }
        if(prod == x)
        {
            cout << " is a sphenic number ."<< endl;
        }
    }
    else 
    {
        cout  <<  " is not a sphenic number ."<< endl;
    }
     return 0;
}