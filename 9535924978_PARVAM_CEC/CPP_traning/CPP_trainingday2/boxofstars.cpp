# include <iostream>
using namespace std;
int main(){
    int column=6,rows=5,i,j;
    
    for( int i =1; i<rows;i++){
        for(j =0;j<column;j++){
            if(i==1 || i==rows-1 || j==1 || j==column-1){
                cout << "*";
            }else {
                cout<<" ";
            }
            }
        cout <<endl;
        }
        
    
    return 0;
}