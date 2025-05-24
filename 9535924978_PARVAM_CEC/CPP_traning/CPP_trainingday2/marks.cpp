# include<iostream>
using namespace std;
int main()
{
    float m1 = 56 , m2 = 78 , m3 = 90 , m4 = 45 , m5 = 34, total = 0 , avg = 0 ;
    cout << " Name : Daniya Khan \n Branch : ISE \n Year : 2025 \n Sem : 2nd \n Collage : City Engineering College";
    total = m1 + m2 +m3 +m4 +m5 ; 
    avg = total / 5;
    //per = (total / 300) * 100;
    cout << "\ntotal :" <<  total ;
    cout << "\naverage :  "<<  avg;
    if (avg > 90) 
        cout << "\ngrade is A ";
    else if (avg > 70 )
        cout << "\ngrade is B";
    else 
        cout << "\n grade is c";
    return 0;    


    
    
}