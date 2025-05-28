# include <iostream>
using namespace std;
int main(){
    int ch = 1;
    int rows = 5 ,i , j;
    for(i = 1;i <= rows ;++i){
        for(j=1;j <= i;++j)
        {
            cout<<ch<<" ";
            ++ch;
        }
        cout << "\n" ; 
    }
}