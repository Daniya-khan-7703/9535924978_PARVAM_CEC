# include <iostream>
# include <string>
using namespace std;

class Teacher {
    private :
        double salary;

    public :
         Teacher(){ // non -parameterised constructor 
             cout << "Hi , i am a constructor.\n";
             dept = " computer science";
         }

        Teacher(string name ,string dept, string subject , double salary){ // parameterised constructor  
                                                                // instead of writing this : Teacher(string n ,string d, string s , double sal)
            this -> name = name ;                                        
            this -> dept = dept ;                                      
            this -> subject = subject;                                     
            this -> salary = salary;                                    
        } 
        Teacher(Teacher &orgObj){
            cout << "I am a custom copy constructor... \n ";
            this -> name = orgObj.name;
            this -> dept = orgObj.dept;
            this -> subject = orgObj.subject;
            this -> salary = orgObj.salary;
        }
        string name;
        string subject;
        string dept;


void changeDept(string newDept){
    dept = newDept;                            // we have combined some properties and some methods 
}                                           // to make a class which is nothing but encsplsulation

// setter
// void setSalary(double s){
//     salary = s ;
// }
// // getter
// double getSalary(){
//     return salary;
// }
    void getInfo(){
        cout << "name :"<< name <<endl;
        cout << "dept :"<< dept << endl;
        cout << "Subject :"<< subject << endl;
        
    }
};
class Accounts{
    private:
        double balance; // data hiding 
        string password;
    public:
        string AccountId;
        string username;


};
int main(){
    Teacher t1("gojo Sensei","Jujutsu Arts","Jujutsu sorcery",200000);
    t1.getInfo();

    Teacher t2(t1);
    t2.getInfo();
                            // constructor call .so if u write another object then the constructor gets called 
    // t1.name = "Gojo";      // again and the cout line will be printed . Teacher t2;( output : Hi , i am a constructor. )
    // t1.subject = "English";
    
    // t1.setSalary(200000);

    // cout << t1.name << endl;
    // cout << t1.dept << endl;


    return 0;
}