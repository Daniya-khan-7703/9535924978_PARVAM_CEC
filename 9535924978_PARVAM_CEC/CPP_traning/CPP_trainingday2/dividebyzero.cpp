# include <iostream>
using namespace std;
int main(){
int num,den;
cout << "enter the two numbers :"<<endl;
cin >> num >> den;
try{
    if(den == 0)
    throw(den);
    else
    cout << num / den << endl;
}
catch(int d)
{
    cout << "ZERO DIVISION ERROR! Cannot divide the number by " <<  d<< endl;
}
 return 0;
}