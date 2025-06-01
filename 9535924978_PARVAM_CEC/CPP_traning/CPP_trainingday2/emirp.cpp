# include <iostream>
using namespace std;
int prime(int x){
int flag = 0;
for(int i = 2 ;i<x;i++){
    if(x % i == 0){
        flag = 1;
    }
}
if(flag == 0){
    cout << "\n it is a prime number"<<endl;
} else {
    cout << "\n it is not a prime number "<<endl;
}
cout<<x;
return x;
}
int reverse(int n){
    int digit ,rev ;
while (n>0)
    {
        digit = n % 10;
        cout << digit << "\n";
        n = n /10 ;
        rev = rev * 10+ digit ;
        
    }
    cout<< " \n it is reverse"<<endl;
    cout << rev;
    return rev;
}
int main(){
    int n,rev_num;
    cout << "enter any number:"<<endl;
    cin >> n;

    if(prime(n))
    {
        rev_num=reverse(n);
        prime(rev_num);
    cout <<"\n" <<  n << " is a emirp number "<<endl;
    }
    else{
        cout << "\n" << n <<" is not a emirp number" << endl;
    }
    
    
    return 0;
}