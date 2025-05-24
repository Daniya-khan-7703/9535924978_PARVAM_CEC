# include <iostream>
using namespace std;
int main(){
    int x,y,temp;
    cout << "enter the value of x and y:";
    cin >> x>>y;
    cout << "\n numbers before swapping : \n x = "<< x << "\n y = "<< y;
    temp = x ;
    x = y;
    y = temp;
    cout << "\n numbers after swapping : \n x = "<< x<<"\n y = "<< y;
    return 0;

}