#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};

int main() {
    Rectangle r(5,3);
    cout << "The area of the rectangle: " << r.area() << endl;
    return 0;
}

