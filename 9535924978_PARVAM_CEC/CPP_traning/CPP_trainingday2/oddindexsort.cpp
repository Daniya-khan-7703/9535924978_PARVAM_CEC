# include <iostream>
using namespace std;

int main(){
    int arr[] = {13, 7, 6, 4, 3, 15, 18, 20};
    int temp ,i;

    // Bubble sort
   
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7 - i ; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    for(int i = 1 ; i < 8; i+=2){
        cout << arr[i] << " ";
    }
    cout << endl;
}

