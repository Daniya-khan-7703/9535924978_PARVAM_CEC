# include<iostream>
using namespace std;
int main()
{
    float m1 = 56 , m2 = 78 , m3 = 90 , m4 = 45 , m5 = 34, total = 0 , avg = 0 ;
    cout << "*************************************************************";
    cout <<" == Student Marks Card == ";
    cout << " \nCITY ENGINEERING COLLEGE ";
    cout << "\n *************************************************************";
    cout << " \nName : Daniya Khan \n Branch : ISE                                        Year : 2025 \n                                                    Sem : 2nd \n College : City Engineering College";
    cout << " \n \n \n  Marks :\n marks1 | 56 \n marks2 | 78 \n marks3 | 90 \n marks4 | 45 \n marks5 | 34 ";
    total = m1 + m2 +m3 +m4 +m5 ; 
    avg = total / 5;
    //per = (total / 300) * 100;
    cout << "\ntotal :" <<  total ;
    cout << "\naverage :  "<<  avg;
    if (avg > 90) 
        cout << "\n       grade is A ";
    else if (avg > 70 )
        cout << "\n       grade is B";
    else 
        cout << "\n       grade is c";
    cout << "\n **************************************************************";    
    return 0;    


    
    
}