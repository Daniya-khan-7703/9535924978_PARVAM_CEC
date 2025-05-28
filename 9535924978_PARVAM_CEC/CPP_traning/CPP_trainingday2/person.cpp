# include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this -> name = name;
        this -> age = age;
        cout<<"I am a parameterized constructor \n ";
    }
    void getInfo(){
        cout << "The details are \n ";
        cout << "Name :"<< name <<endl;
        cout << "Age :"<<age<<endl;
    }
};
int main(){
    Person p1("Tony",43);
    p1.getInfo();
    return 0;
}