# include <iostream>
using namespace std;
class Animal{
    public:              // base class
        void eat(){
            cout << "eating ... "<< endl;
        }
};
class Dog : public Animal{
    public:
        void bark(){
            cout<<"barking ... \n";

        }
};
class Cat : public Animal{
    public: 
    void meo(){
        cout << "meow meow "<<endl;

    }
};
int main(){
    Dog d1;
    Cat c1;
    d1.eat();
    d1.bark();
    c1.meo();
    c1.eat();
    return 0;
}