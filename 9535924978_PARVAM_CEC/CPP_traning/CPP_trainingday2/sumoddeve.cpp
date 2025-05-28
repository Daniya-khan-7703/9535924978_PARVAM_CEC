//C++ Program to Calculate the Sum of Odd & Even Numbers
# include <iostream>
using namespace std ; 
int main()
{
    int arr[50],size ,i,even_sum = 0,odd_sum = 0;
    cout << "enter the size of array: \n ";
    cin >> size ;
    cout << "enter the elements into the array \n ";
    for(i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }
    for(i = 0;i < size ;i++)
    {
        if(arr[i]%2 == 0)
        {
            even_sum = even_sum + arr[i];
        }
        else
        { 
            odd_sum += arr[i];
        }
    }

    
    cout << "sum of even numbers is\n "<<even_sum<<"\n";
    cout << "sum of odd numbers is \n "<<odd_sum<<"\n";
    return 0;
}