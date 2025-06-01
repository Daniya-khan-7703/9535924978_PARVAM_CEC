# include <iostream>
using namespace std;
int main()
{
    int n , sum = 0 ,i;
    cout << "enter the number" << endl;
    cin >> n ;
    for (int i = 1; i < n; i++) { 
        if (n % i == 0) {
            sum += i;
        }
    }
    
    if(sum == n){
        cout << "the number is perfect number ";
    }
    return 0;
}