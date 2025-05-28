# include <iostream>
using namespace std;
class Rectangle{
    public:
    double length;
    double width;

    Rectangle(double l,double w){
        length = l;
        width = w;
    }
    double CalculateArea(){
        return length*width;
    }
};
class Triangle{
    public:
    double base;
    double height;
    public : 
    Triangle(double b,double h){
        base = b;
        height = h;
    }
    double CalculateArea(){
        return 0.5*base*height;
    }
};
int main(){
    Rectangle r(5,4);
    Triangle t(6,8);
    cout<<"area of Reactangle: "<<r.CalculateArea()<<endl;
    cout<<"area of triangle: "<<t.CalculateArea()<<endl;
    return 0;

}