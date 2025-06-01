#include <iostream>
#include <string>
using namespace std;

// Function to count vowels in a string
int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowelCount = countVowels(str);
    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}

