#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int numArray[10] = {0};  
    int count[10] = {0};     

    int temp = number;
    int length = 0;

   
    while (temp > 0) {
        int digit = temp % 10;
        numArray[length] = digit;
        count[digit]++; 
        temp /= 10;
        length++;
    }

   
    int isValid = 1;
    for (int i = 0; i < length; i++) {
        if (numArray[length - 1 - i] != count[i]) {
            isValid = 0;
            break;
        }
    }

    if (isValid) {
        cout << number << " is an autobiographical number." << endl;
    } else {
        cout << number << " is not an autobiographical number." << endl;
    }

    return 0;
}
