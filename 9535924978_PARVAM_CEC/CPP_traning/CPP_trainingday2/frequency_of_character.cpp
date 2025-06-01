#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    const int MAX_SIZE = 100;
    char original[MAX_SIZE];
    char uniqueChars[MAX_SIZE];
    int freq[MAX_SIZE] = {0};
    int uniqueCount = 0;

    int length = input.length();

    // Copy input to original[]
    for (int i = 0; i < length; i++) {
        original[i] = input[i];
    }

    // Find unique characters and their frequencies
    for (int i = 0; i < length; i++) {
        char current = original[i];
        bool found = false;

        for (int j = 0; j < uniqueCount; j++) {
            if (uniqueChars[j] == current) {
                freq[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            uniqueChars[uniqueCount] = current;
            freq[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    // Print frequencies
    cout << "\nUnique characters and their frequencies:\n";
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueChars[i] << ": " << freq[i] << endl;
    }

    // Print the uniqueChars array
    cout << "\nArray with unique characters only:\n";
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueChars[i] << " ";
    }
    cout << endl;

    return 0;
}
