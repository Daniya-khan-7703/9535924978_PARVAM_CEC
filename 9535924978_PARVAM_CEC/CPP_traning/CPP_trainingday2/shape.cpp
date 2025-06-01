/*Create a base class named "Shape"
Include a method named calculateArea() that outputs a general message like:
"Area not defined for generic shape."*/
# include <iostream>
using namespace std;
class Shape{
public:
void calculateArea(){
    cout << "Area not defined for generic shape.\n";
}
};
int main(){
    Shape s1;
    s1.calculateArea();
    return 0;
}