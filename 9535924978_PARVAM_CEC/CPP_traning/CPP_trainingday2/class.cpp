# include <iostream>
using namespace std;
class Account{
    public:
    float salary = 60000;
};
class Programmer : public Account{
    public:               // this is a child class... 
    float bonus = 5000;
};
int main(void) {
Programmer p1;
cout<<"Salary: "<<p1.salary<<endl;
cout<<"Bonus: "<<p1.bonus<<endl;
return 0;
}