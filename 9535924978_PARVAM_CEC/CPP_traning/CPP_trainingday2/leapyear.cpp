# include <iostream>
using namespace std;
int main()
{
    int leap;
    cout << "enter a year :" << endl;
    cin >> leap;
    if(leap % 4 == 0){
        cout << "the year is a leap year.";
    }
    else {
        cout << "the year is a not a leap year";
    }
}