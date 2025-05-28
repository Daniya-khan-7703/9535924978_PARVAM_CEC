# include <iostream>
using namespace std;
class A{
    protected:
    int a;
    void get_a(){
        cout << "enter the value of a :"<< endl;
        cin >> a; 
    }
};
class B : public A{
    protected:
    int b;
    void get_b(){
        cout << "enter the value of b:"<< endl;
        cin >> b; 
    }
};
class C{
    protected:
    int c;
    void get_c(){
        cout << "enter the value of c:"<< endl;
        cin >> c; 
    }
};
class D :public B , public C{
    protected:
    int d;
    public:
    void mul(){
        get_a();
        get_b();
        get_c();
        cout<< "Multiplication of a,b,c is:"<<a*b*c<< endl;
    }
};
int main(){
    D d;
    d.mul();
    return 0;
}