#include <iostream>
using namespace std;

int main()
{
    int binary, decimal = 0, base = 1, rem;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0)
    {
        rem = binary % 10;         // Get the last digit
        decimal += rem * base;     // Add to decimal value
        base *= 2;                 // Increase base (2^position)
        binary /= 10;              // Remove last digit
    }

    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
